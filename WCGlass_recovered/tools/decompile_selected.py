#!/usr/bin/env python3
"""Decompiler pass for representative Objective-C methods."""

from __future__ import annotations

import argparse
import json
import logging
import re
import struct
import time
from pathlib import Path

import angr


EXPLICIT = {
    ("WCLGGlassPackage", "decryptContainer:themeId:wxid:signKey:glassMaster:error:"),
    ("WCLGGlassPackage", "importGlassData:wxid:signKey:glassMaster:iconURL:error:"),
    ("WCLGGlassPackage", "applyInstalled:"),
    ("WCLGGlassPackage", "performConfidentialityMigrationIfNeeded"),
    ("WCLGGlassStore", "buildRequest:requestKey:nonce:"),
    ("WCLGGlassStore", "decryptResponse:requestKey:nonce:"),
    ("WCLGGlassStore", "postPath:payload:completion:"),
    ("WCLGGlassStore", "fetchCardPreviewHTMLForTheme:completion:"),
    ("WCLGHomeGroups", "loadFromDisk"),
    ("WCLGHomeGroups", "persistGroupsLocked"),
    ("WCLGHomeGroups", "setMembers:forGroupID:"),
    ("WCLGConfig", "setBool:forKey:"),
    ("WCLGVoiceHoldRecognizer", "wclgBeginRecording"),
    ("WCLGThemeDetailViewController", "renderLiveCardPreviewHTML:generation:"),
    ("WCLGFuncCardMediaController", "userContentController:didReceiveScriptMessage:"),
}


def clean_identifier(value: str) -> str:
    return re.sub(r"[^A-Za-z0-9_]", "_", value)


def decode_ptr(qword: int, data_len: int) -> int | None:
    # arm64 chained-fixup rebases in this image preserve the 32-bit target.
    target = qword & 0xFFFFFFFF
    return target if target < data_len else None


def c_string(data: bytes, offset: int) -> str | None:
    if not (0 <= offset < len(data)):
        return None
    end = data.find(b"\0", offset, min(len(data), offset + 4096))
    if end < 0:
        return None
    try:
        return data[offset:end].decode("utf-8")
    except UnicodeDecodeError:
        return None


def build_annotations(data: bytes, sections: list[dict]) -> dict[str, str]:
    annotations: dict[str, str] = {}
    secmap = {s["name"].split(".")[-1]: s for s in sections}

    selrefs = secmap.get("__objc_selrefs")
    if selrefs:
        start, size = int(selrefs["paddr"]), int(selrefs["size"])
        for at in range(start, start + size, 8):
            qword = struct.unpack_from("<Q", data, at)[0]
            target = decode_ptr(qword, len(data))
            text = c_string(data, target) if target is not None else None
            if text:
                annotations[f"g_{at:x}"] = f"SEL_{clean_identifier(text)}"

    cfstrings = secmap.get("__cfstring")
    if cfstrings:
        start, size = int(cfstrings["paddr"]), int(cfstrings["size"])
        for at in range(start, start + size, 32):
            qword = struct.unpack_from("<Q", data, at + 16)[0]
            target = decode_ptr(qword, len(data))
            text = c_string(data, target) if target is not None else None
            if text is not None:
                escaped = text.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")
                annotations[f"g_{at:x}"] = f'CFSTR("{escaped}")'
    return annotations


def apply_annotations(text: str, annotations: dict[str, str]) -> str:
    for old in sorted(annotations, key=len, reverse=True):
        if old in text:
            text = re.sub(rf"\b{re.escape(old)}\b", annotations[old], text)
    # The decompiler often emits thousands of one-line extern declarations.
    text = re.sub(r"(?m)^extern .+;\n", "", text)
    text = re.sub(r"\n{3,}", "\n\n", text).strip()
    return text


def choose_methods(classes: list[dict], fmap: dict[int, dict]) -> list[dict]:
    selected: dict[int, dict] = {}
    for cls in classes:
        candidates = []
        for method in cls.get("methods", []):
            addr = int(method["addr"])
            finfo = fmap.get(addr)
            if not finfo:
                continue
            size = int(finfo.get("size", 0))
            selector = method["name"]
            if 80 <= size <= 15000 and not selector.startswith("set") and selector not in {
                "dealloc",
                ".cxx_destruct",
            }:
                candidates.append((size, method, finfo))
            if (cls["classname"], selector) in EXPLICIT and 0 < size <= 15000:
                selected[addr] = {
                    "class": cls["classname"],
                    "selector": selector,
                    "addr": addr,
                    "size": size,
                    "symbol": finfo.get("name", ""),
                }
        if candidates:
            size, method, finfo = max(candidates, key=lambda item: item[0])
            addr = int(method["addr"])
            selected[addr] = {
                "class": cls["classname"],
                "selector": method["name"],
                "addr": addr,
                "size": size,
                "symbol": finfo.get("name", ""),
            }
    return sorted(selected.values(), key=lambda row: (row["class"], row["addr"]))


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--binary", required=True, type=Path)
    ap.add_argument("--analysis", required=True, type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()
    args.output.mkdir(parents=True, exist_ok=True)

    logging.getLogger().setLevel(logging.ERROR)
    data = args.binary.read_bytes()
    classes = json.loads((args.analysis / "classes.json").read_text(encoding="utf-8"))["classes"]
    functions = json.loads((args.analysis / "functions.json").read_text(encoding="utf-8"))
    sections = json.loads((args.analysis / "sections.json").read_text(encoding="utf-8"))["sections"]
    fmap = {int(f["offset"]): f for f in functions}
    annotations = build_annotations(data, sections)
    selected = choose_methods(classes, fmap)
    project = angr.Project(str(args.binary), auto_load_libs=False)

    manifest = []
    for index, item in enumerate(selected, 1):
        addr, size = item["addr"], item["size"]
        stem = f"{item['class']}__{clean_identifier(item['selector'])}__{addr:x}.c"
        started = time.time()
        status = "ok"
        error = ""
        code = ""
        try:
            cfg = project.analyses.CFGFast(
                function_starts=[addr],
                regions=[(addr, addr + size)],
                symbols=False,
                resolve_indirect_jumps=True,
                force_complete_scan=False,
                normalize=True,
                data_references=False,
                cross_references=False,
            )
            function = cfg.kb.functions[addr]
            dec = project.analyses.Decompiler(function, cfg=cfg.model)
            code = dec.codegen.text if dec.codegen else ""
            if not code:
                raise RuntimeError("decompiler returned no code")
            code = apply_annotations(code, annotations)
        except Exception as exc:  # keep the batch progressing
            status = "error"
            error = f"{type(exc).__name__}: {exc}"
            code = f"/* Decompiler error: {error} */"
        elapsed = round(time.time() - started, 3)
        banner = (
            f"/* Recovered pseudocode\n"
            f" * Objective-C: {'+' if str(item['symbol']).startswith('method.class.') else '-'}"
            f"[{item['class']} {item['selector']}]\n"
            f" * Address: 0x{addr:x}; original size: {size} bytes\n"
            f" * Backend: angr CFGFast + Decompiler; elapsed: {elapsed}s\n"
            f" */\n\n"
        )
        (args.output / stem).write_text(banner + code + "\n", encoding="utf-8")
        manifest.append({**item, "file": stem, "status": status, "error": error, "seconds": elapsed})
        print(f"[{index}/{len(selected)}] {status} {item['class']}::{item['selector']} ({elapsed}s)", flush=True)

    (args.output / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    (args.output / "selector_annotations.json").write_text(
        json.dumps(annotations, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    print(json.dumps({"selected": len(selected), "ok": sum(x["status"] == "ok" for x in manifest)}))


if __name__ == "__main__":
    main()
