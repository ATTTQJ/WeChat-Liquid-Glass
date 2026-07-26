#!/usr/bin/env python3
"""Recover functions that reference local/server authorization cache keys."""

from __future__ import annotations

import argparse
import json
import logging
import time
from pathlib import Path

import angr
from capstone import CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN, Cs

from decompile_selected import apply_annotations, build_annotations


TARGETS = [
    (0x0B8DBC, "settings_and_local_identity"),
    (0x0C134C, "local_authorization_snapshot"),
    (0x0C1A84, "server_authorization_cache_load"),
    (0x0C7640, "server_authorization_response_persist"),
    (0x0C96CC, "local_group_status_consumer"),
    (0x0CAD80, "local_authorization_ui_consumer"),
    (0x0D30F4, "local_group_gate_consumer"),
    (0x0DB478, "local_official_status_consumer"),
    (0x0DBDF4, "local_authorization_refresh"),
    (0x0E2C2C, "local_scan_timestamp_consumer"),
    (0x0E3174, "local_identity_consumer"),
    (0x0F0D3C, "local_wxid_consumer"),
    (0x265C7C, "config_shared_instance"),
    (0x28BA98, "config_cached_object_for_key"),
    (0x28BC9C, "config_set_cached_object_for_key"),
    (0x28C060, "config_bool_for_key"),
    (0x28C070, "config_bool_for_key_default"),
    (0x28C1A8, "config_double_for_key"),
    (0x28C21C, "config_object_for_key"),
    (0x28C228, "config_set_bool_for_key"),
    (0x28CF6C, "config_set_double_for_key"),
    (0x28CFF8, "config_set_object_for_key"),
    (0x28D004, "config_has_value_for_key"),
    (0x28FA24, "config_force_true_policy"),
    (0x28FEB8, "config_flush"),
    (0x28FF0C, "config_invalidate_cache"),
]


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
    fmap = {int(row["offset"]): row for row in functions}
    annotations = build_annotations(data, sections)
    project = angr.Project(str(args.binary), auto_load_libs=False)
    capstone = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    manifest = []

    for address, label in TARGETS:
        size = int(fmap[address]["size"])
        started = time.time()
        status = "ok"
        error = ""
        try:
            cfg = project.analyses.CFGFast(
                function_starts=[address],
                regions=[(address, address + size)],
                symbols=False,
                resolve_indirect_jumps=True,
                force_complete_scan=False,
                normalize=True,
                data_references=False,
                cross_references=False,
            )
            function = cfg.kb.functions[address]
            dec = project.analyses.Decompiler(function, cfg=cfg.model)
            body = dec.codegen.text if dec.codegen else ""
            if not body:
                raise RuntimeError("decompiler returned no code")
            body = apply_annotations(body, annotations)
        except Exception as exc:
            status = "fallback"
            error = f"{type(exc).__name__}: {exc}"
            lines = []
            for ins in capstone.disasm(data[address : address + size], address):
                lines.append(
                    f"0x{ins.address:08x}  {ins.bytes.hex(' '):<14}  {ins.mnemonic:<8} {ins.op_str}"
                )
            body = "/* Capstone ARM64 fallback */\n" + "\n".join(lines)

        seconds = round(time.time() - started, 3)
        filename = f"{label}_{address:x}.c"
        banner = (
            f"/* Authorization path recovery\n"
            f" * Label: {label}\n"
            f" * Address: 0x{address:x}; size: {size}\n"
            f" * Status: {status}; elapsed: {seconds}s\n"
            f" */\n\n"
        )
        (args.output / filename).write_text(banner + body + "\n", encoding="utf-8")
        manifest.append(
            {
                "label": label,
                "address": address,
                "address_hex": f"0x{address:x}",
                "size": size,
                "file": filename,
                "status": status,
                "error": error,
                "seconds": seconds,
            }
        )
        print(f"{status}: {label} @ 0x{address:x} ({seconds}s)", flush=True)

    (args.output / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=2), encoding="utf-8"
    )


if __name__ == "__main__":
    main()
