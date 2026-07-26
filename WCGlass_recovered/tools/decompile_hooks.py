#!/usr/bin/env python3
"""Recover every unique MobileSubstrate hook replacement listed in hook_map.csv."""

from __future__ import annotations

import argparse
import csv
import json
import logging
import time
from pathlib import Path

import angr
from capstone import CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, Cs

from decompile_selected import apply_annotations, build_annotations, clean_identifier


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--binary", required=True, type=Path)
    ap.add_argument("--analysis", required=True, type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()
    args.output.mkdir(parents=True, exist_ok=True)

    logging.getLogger().setLevel(logging.ERROR)
    data = args.binary.read_bytes()
    sections = json.loads((args.analysis / "sections.json").read_text(encoding="utf-8"))["sections"]
    annotations = build_annotations(data, sections)
    with (args.analysis / "hook_map.csv").open(encoding="utf-8-sig") as f:
        hooks = list(csv.DictReader(f))

    by_addr: dict[int, dict] = {}
    for row in hooks:
        addr = int(row["replacement_address"], 16)
        entry = by_addr.setdefault(
            addr,
            {
                "address": addr,
                "size": int(row["replacement_size"]),
                "selectors": [],
                "initializers": [],
                "symbol": row["replacement_symbol"],
            },
        )
        entry["selectors"].append(row["selector_symbol"])
        entry["initializers"].append(row["initializer"])

    project = angr.Project(str(args.binary), auto_load_libs=False)
    capstone = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    manifest = []
    entries = sorted(by_addr.values(), key=lambda row: row["address"])
    for index, item in enumerate(entries, 1):
        addr, size = item["address"], item["size"]
        selector = sorted(set(item["selectors"]))[0]
        name = f"hook_{index:03d}_{clean_identifier(selector[4:])}_{addr:x}.c"
        status = "ok"
        error = ""
        started = time.time()
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
            text = dec.codegen.text if dec.codegen else ""
            if not text:
                raise RuntimeError("decompiler returned no code")
            text = apply_annotations(text, annotations)
        except Exception as exc:
            status = "fallback"
            error = f"{type(exc).__name__}: {exc}"
            lines = []
            for ins in capstone.disasm(data[addr : addr + size], addr):
                lines.append(
                    f"0x{ins.address:08x}  {ins.bytes.hex(' '):<14}  {ins.mnemonic:<8} {ins.op_str}"
                )
            text = "/* Capstone ARM64 fallback */\n" + "\n".join(lines)
        elapsed = round(time.time() - started, 3)
        selector_list = ", ".join(sorted(set(item["selectors"])))
        banner = (
            f"/* Hook replacement {index}/{len(entries)}\n"
            f" * Selectors: {selector_list}\n"
            f" * Address: 0x{addr:x}; original size: {size} bytes\n"
            f" * Status: {status}; elapsed: {elapsed}s\n"
            f" */\n\n"
        )
        (args.output / name).write_text(banner + text + "\n", encoding="utf-8")
        manifest.append(
            {
                **item,
                "selectors": sorted(set(item["selectors"])),
                "initializers": sorted(set(item["initializers"])),
                "file": name,
                "status": status,
                "error": error,
                "seconds": elapsed,
            }
        )
        if index % 25 == 0 or index == len(entries):
            print(f"[{index}/{len(entries)}] recovered", flush=True)

    (args.output / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    print(
        json.dumps(
            {
                "unique_hooks": len(manifest),
                "decompiled": sum(row["status"] == "ok" for row in manifest),
                "fallback": sum(row["status"] != "ok" for row in manifest),
            }
        )
    )


if __name__ == "__main__":
    main()
