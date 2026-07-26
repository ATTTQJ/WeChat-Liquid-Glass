#!/usr/bin/env python3
"""Recover all functions referenced by Mach-O __init_offsets."""

from __future__ import annotations

import argparse
import json
import logging
import time
from pathlib import Path

import angr
from capstone import CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, Cs

from decompile_selected import apply_annotations, build_annotations


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
    functions = json.loads((args.analysis / "functions.json").read_text(encoding="utf-8"))
    init_rows = json.loads((args.analysis / "init_offsets.json").read_text(encoding="utf-8"))[
        "init_offsets"
    ]
    fmap = {int(f["offset"]): f for f in functions}
    annotations = build_annotations(data, sections)
    project = angr.Project(str(args.binary), auto_load_libs=False)
    capstone = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    manifest = []

    for index, row in enumerate(init_rows, 1):
        addr = int(row["target"])
        size = int(fmap.get(addr, {}).get("size", row.get("size", 0)))
        name = f"initializer_{index:02d}_{addr:x}.c"
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
        banner = (
            f"/* Mach-O initializer {index}/33\n"
            f" * Address: 0x{addr:x}; original size: {size} bytes\n"
            f" * Status: {status}; elapsed: {elapsed}s\n"
            f" */\n\n"
        )
        (args.output / name).write_text(banner + text + "\n", encoding="utf-8")
        manifest.append(
            {
                "index": index,
                "address": addr,
                "address_hex": f"0x{addr:x}",
                "size": size,
                "file": name,
                "status": status,
                "error": error,
                "seconds": elapsed,
            }
        )
        print(f"[{index}/33] {status} 0x{addr:x} ({elapsed}s)", flush=True)

    (args.output / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    print(
        json.dumps(
            {
                "initializers": len(manifest),
                "decompiled": sum(row["status"] == "ok" for row in manifest),
            }
        )
    )


if __name__ == "__main__":
    main()
