#!/usr/bin/env python3
"""Build a single-file WCGlass FAT dylib with the recovered auth state patch.

The patch is deliberately same-size: no load commands, sections, or slice
boundaries are added.  Each replacement is checked against the original bytes
before it is written so the script fails closed on a different input build.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
from dataclasses import dataclass
from pathlib import Path

from capstone import CS_ARCH_ARM64, CS_MODE_ARM, Cs


EXPECTED_INPUT_SHA256 = (
    "76ba59a63ba3606753cddd7c63c557d9a3765baecb85fe3d1f39384e62227320"
)
FAT_MAGIC = 0xCAFEBABE
CPU_TYPE_ARM64 = 0x0100000C
CPU_SUBTYPE_ARM64_ALL = 0x00000000
CPU_SUBTYPE_ARM64E = 0x80000002


@dataclass(frozen=True)
class Patch:
    address: int
    expected: bytes
    replacement: bytes
    purpose: str


PATCHES = {
    CPU_SUBTYPE_ARM64_ALL: (
        Patch(0x0C1E84, bytes.fromhex("28e11639"), bytes.fromhex("3fe11639"),
              "force hard-block/expiry state write to false"),
        Patch(0x0C1EAC, bytes.fromhex("e83b4039"), bytes.fromhex("28008052"),
              "force cached server authorization allowed=true"),
        Patch(0x0C2188, bytes.fromhex("28e11639"), bytes.fromhex("3fe11639"),
              "force cached hard-block state false"),
        Patch(0x0C80FC, bytes.fromhex("28e11639"), bytes.fromhex("3fe11639"),
              "force response hard-block state false"),
        Patch(0x27BB7C, bytes.fromhex("02000014"), bytes.fromhex("35008052"),
              "force first authorization mirror true"),
        Patch(0x27BB80, bytes.fromhex("15008052"), bytes.fromhex("35008052"),
              "force first authorization mirror fallback true"),
        Patch(0x289E38, bytes.fromhex("e0000034"), bytes.fromhex("37008052"),
              "force second authorization mirror true"),
    ),
    CPU_SUBTYPE_ARM64E: (
        Patch(0x0C9BF4, bytes.fromhex("e8334039"), bytes.fromhex("28008052"),
              "force cached server authorization allowed=true (path A)"),
        Patch(0x0CA010, bytes.fromhex("e9334039"), bytes.fromhex("29008052"),
              "force cached server authorization allowed=true (path B)"),
        Patch(0x0C9CC8, bytes.fromhex("28e11339"), bytes.fromhex("3fe11339"),
              "force hard-block/expiry state write to false"),
        Patch(0x0C9D70, bytes.fromhex("34e11339"), bytes.fromhex("3fe11339"),
              "force cached hard-block state false (path A)"),
        Patch(0x0C9FBC, bytes.fromhex("14e11339"), bytes.fromhex("1fe11339"),
              "force cached hard-block state false (path B)"),
        Patch(0x0CFC68, bytes.fromhex("28e11339"), bytes.fromhex("3fe11339"),
              "force response hard-block state false (path A)"),
        Patch(0x0CFD94, bytes.fromhex("49e11339"), bytes.fromhex("5fe11339"),
              "force response hard-block state false (path B)"),
        Patch(0x28A120, bytes.fromhex("02000014"), bytes.fromhex("35008052"),
              "force first authorization mirror true"),
        Patch(0x28A124, bytes.fromhex("15008052"), bytes.fromhex("35008052"),
              "force first authorization mirror fallback true"),
        Patch(0x2984BC, bytes.fromhex("e0000034"), bytes.fromhex("37008052"),
              "force second authorization mirror true"),
    ),
}


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def parse_fat(data: bytes) -> list[dict[str, int]]:
    if len(data) < 8:
        raise RuntimeError("input is shorter than a FAT header")
    magic, count = struct.unpack_from(">II", data, 0)
    if magic != FAT_MAGIC:
        raise RuntimeError(f"expected FAT Mach-O magic 0x{FAT_MAGIC:08x}")
    if len(data) < 8 + count * 20:
        raise RuntimeError("truncated FAT architecture table")
    slices = []
    for index in range(count):
        cputype, subtype, offset, size, align = struct.unpack_from(
            ">IIIII", data, 8 + index * 20
        )
        if offset + size > len(data):
            raise RuntimeError(f"slice {index} exceeds the input length")
        slices.append(
            {
                "index": index,
                "cputype": cputype,
                "subtype": subtype,
                "offset": offset,
                "size": size,
                "align": align,
            }
        )
    return slices


def disassemble(md: Cs, raw: bytes, address: int) -> str:
    rows = list(md.disasm(raw, address))
    if len(rows) != 1:
        raise RuntimeError(f"replacement at 0x{address:x} is not one instruction")
    return f"{rows[0].mnemonic} {rows[0].op_str}".strip()


def build(input_path: Path, output_path: Path, manifest_path: Path) -> None:
    original = input_path.read_bytes()
    input_digest = sha256(original)
    if input_digest != EXPECTED_INPUT_SHA256:
        raise RuntimeError(
            "input SHA-256 mismatch: "
            f"expected {EXPECTED_INPUT_SHA256}, got {input_digest}"
        )

    slices = parse_fat(original)
    output = bytearray(original)
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    records = []
    seen_subtypes = set()

    for fat_slice in slices:
        if fat_slice["cputype"] != CPU_TYPE_ARM64:
            continue
        subtype = fat_slice["subtype"]
        if subtype not in PATCHES:
            continue
        seen_subtypes.add(subtype)
        for patch in PATCHES[subtype]:
            file_offset = fat_slice["offset"] + patch.address
            found = bytes(output[file_offset : file_offset + len(patch.expected)])
            if found != patch.expected:
                raise RuntimeError(
                    f"byte mismatch for subtype 0x{subtype:08x} "
                    f"at VA 0x{patch.address:x}: "
                    f"expected {patch.expected.hex()}, got {found.hex()}"
                )
            output[file_offset : file_offset + len(patch.replacement)] = (
                patch.replacement
            )
            records.append(
                {
                    "cpu_subtype": f"0x{subtype:08x}",
                    "slice_offset": fat_slice["offset"],
                    "virtual_address": f"0x{patch.address:x}",
                    "fat_file_offset": f"0x{file_offset:x}",
                    "old_bytes": patch.expected.hex(),
                    "new_bytes": patch.replacement.hex(),
                    "old_instruction": disassemble(
                        md, patch.expected, patch.address
                    ),
                    "new_instruction": disassemble(
                        md, patch.replacement, patch.address
                    ),
                    "purpose": patch.purpose,
                }
            )

    missing = set(PATCHES) - seen_subtypes
    if missing:
        raise RuntimeError(
            "missing required FAT slices: "
            + ", ".join(f"0x{x:08x}" for x in sorted(missing))
        )

    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_bytes(output)
    result = {
        "input": str(input_path.resolve()),
        "output": str(output_path.resolve()),
        "input_sha256": input_digest,
        "output_sha256": sha256(output),
        "input_size": len(original),
        "output_size": len(output),
        "fat_slices": slices,
        "patch_count": len(records),
        "patches": records,
        "signing_note": "Code signature is expected to be replaced by the installer.",
    }
    manifest_path.parent.mkdir(parents=True, exist_ok=True)
    manifest_path.write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n",
        encoding="utf-8",
    )
    print(json.dumps(result, ensure_ascii=False, indent=2))


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--manifest", required=True, type=Path)
    args = parser.parse_args()
    build(args.input, args.output, args.manifest)


if __name__ == "__main__":
    main()
