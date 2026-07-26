#!/usr/bin/env python3
"""Locate auth-cache key reads and global-byte writes in WCGlass Mach-O slices."""

from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path

import lief
from capstone import CS_ARCH_ARM64, CS_MODE_ARM, Cs
from capstone.arm64 import ARM64_OP_IMM, ARM64_OP_MEM, ARM64_OP_REG


KEYS = (
    "FLGUnifiedServerAuthFeatures",
    "FLGUnifiedServerAuthLastCode",
    "FLGUnifiedServerAuthLastMessage",
    "FLGUnifiedServerAuthAllowed",
    "FLGUnifiedServerAuthHardBlocked",
    "FLGUnifiedServerAuthExpiresAt",
    "FLGUnifiedServerAuthVerifiedAt",
    "WCLGLocalOfficialOK",
    "WCLGLocalGroupOK",
)


def one_binary(path: Path):
    parsed = lief.MachO.parse(str(path))
    return parsed.at(0)


def section(binary, name: str):
    matches = [s for s in binary.sections if s.name == name]
    if name == "__const":
        return matches[-1]
    if not matches:
        raise RuntimeError(f"missing section {name}")
    return matches[0]


def locate_key_objects(data: bytes, binary) -> dict[str, dict[str, object]]:
    cstring = section(binary, "__cstring")
    cfstring = section(binary, "__cfstring")
    const = section(binary, "__const")
    result: dict[str, dict[str, object]] = {}
    for key in KEYS:
        needle = key.encode() + b"\0"
        file_offset = data.find(
            needle, cstring.offset, cstring.offset + cstring.size
        )
        if file_offset < 0:
            raise RuntimeError(f"missing cstring: {key}")
        cstring_va = cstring.virtual_address + (file_offset - cstring.offset)

        cf_object = None
        for off in range(cfstring.offset, cfstring.offset + cfstring.size, 32):
            raw_pointer = struct.unpack_from("<Q", data, off + 16)[0]
            if raw_pointer & 0xFFFFFFFF == cstring_va:
                cf_object = cfstring.virtual_address + (off - cfstring.offset)
                break
        if cf_object is None:
            raise RuntimeError(f"missing CFString object: {key}")

        pointer_slots = []
        for off in range(const.offset, const.offset + const.size, 8):
            raw_pointer = struct.unpack_from("<Q", data, off)[0]
            if raw_pointer & 0xFFFFFFFF == cf_object:
                pointer_slots.append(
                    const.virtual_address + (off - const.offset)
                )
        result[key] = {
            "cstring": cstring_va,
            "cfstring": cf_object,
            "pointer_slots": pointer_slots,
        }
    return result


def disassemble(binary, data: bytes):
    text = section(binary, "__text")
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.detail = True
    return list(
        md.disasm(
            data[text.offset : text.offset + text.size],
            text.virtual_address,
        )
    )


def xrefs_to_slots(instructions, slots: set[int]):
    register_values: dict[int, int] = {}
    found = []
    for index, ins in enumerate(instructions):
        ops = ins.operands
        if ins.mnemonic == "adrp" and len(ops) == 2:
            if ops[0].type == ARM64_OP_REG and ops[1].type == ARM64_OP_IMM:
                register_values[ops[0].reg] = ops[1].imm
            continue
        if ins.mnemonic == "add" and len(ops) == 3:
            if (
                ops[0].type == ARM64_OP_REG
                and ops[1].type == ARM64_OP_REG
                and ops[2].type == ARM64_OP_IMM
                and ops[1].reg in register_values
            ):
                register_values[ops[0].reg] = (
                    register_values[ops[1].reg] + ops[2].imm
                )
                continue
        if ins.mnemonic in ("ldr", "ldur") and len(ops) >= 2:
            mem = ops[1]
            if mem.type == ARM64_OP_MEM and mem.mem.base in register_values:
                target = register_values[mem.mem.base] + mem.mem.disp
                if target in slots:
                    found.append(
                        {
                            "index": index,
                            "address": ins.address,
                            "target": target,
                            "instruction": f"{ins.mnemonic} {ins.op_str}",
                        }
                    )
        # Conservative register invalidation for common destination-register writes.
        if ops and ops[0].type == ARM64_OP_REG and ins.mnemonic != "adrp":
            if ins.mnemonic not in ("ldr", "ldur"):
                register_values.pop(ops[0].reg, None)
    return found


def context(instructions, index: int, radius: int = 24):
    rows = []
    lo = max(0, index - radius)
    hi = min(len(instructions), index + radius + 1)
    for ins in instructions[lo:hi]:
        rows.append(
            {
                "address": ins.address,
                "address_hex": f"0x{ins.address:x}",
                "bytes": ins.bytes.hex(),
                "mnemonic": ins.mnemonic,
                "op_str": ins.op_str,
            }
        )
    return rows


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("slices", nargs="+", type=Path)
    parser.add_argument("--output", required=True, type=Path)
    args = parser.parse_args()
    report = []
    for path in args.slices:
        data = path.read_bytes()
        binary = one_binary(path)
        keys = locate_key_objects(data, binary)
        instructions = disassemble(binary, data)
        slot_to_key = {}
        for key, info in keys.items():
            for slot in info["pointer_slots"]:
                slot_to_key[slot] = key
        xrefs = xrefs_to_slots(instructions, set(slot_to_key))
        for row in xrefs:
            row["key"] = slot_to_key[row["target"]]
            row["target_hex"] = f"0x{row['target']:x}"
            row["context"] = context(instructions, row["index"])
            del row["index"]
        report.append(
            {
                "path": str(path),
                "cpu_subtype": int(binary.header.cpu_subtype),
                "keys": keys,
                "xrefs": xrefs,
            }
        )
        print(f"{path}: {len(xrefs)} auth-key xrefs")
        for row in xrefs:
            print(
                f"  {row['key']:<38} 0x{row['address']:x} -> {row['target_hex']}"
            )
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2), encoding="utf-8")


if __name__ == "__main__":
    main()
