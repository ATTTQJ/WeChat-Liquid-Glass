#!/usr/bin/env python3
import argparse
import json
import pathlib
import re
import struct
from dataclasses import dataclass

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import *


FAT_MAGIC = 0xCAFEBABE
MH_MAGIC_64 = 0xFEEDFACF
LC_SEGMENT_64 = 0x19
LC_SYMTAB = 0x2
LC_DYSYMTAB = 0xB


@dataclass
class Section:
    index: int
    seg: str
    name: str
    addr: int
    size: int
    offset: int
    flags: int
    res1: int
    res2: int


class MachO:
    def __init__(self, path: pathlib.Path, arch_index: int = 1):
        self.path = path
        self.data = path.read_bytes()
        self.base, self.slice_size = self._find_slice(arch_index)
        magic = self.u32(self.base)
        if magic != MH_MAGIC_64:
            raise ValueError(f"slice is not mach-o 64: {magic:#x}")
        self.sections: list[Section] = []
        self.symbols: list[dict] = []
        self.symbol_by_addr: dict[int, str] = {}
        self.symtab = None
        self.dysymtab = None
        self._parse_load_commands()
        self._parse_symbols()

    def _find_slice(self, arch_index: int) -> tuple[int, int]:
        if struct.unpack_from(">I", self.data, 0)[0] != FAT_MAGIC:
            return 0, len(self.data)
        nfat = struct.unpack_from(">I", self.data, 4)[0]
        entries = []
        off = 8
        for _ in range(nfat):
            cputype, cpusubtype, offset, size, align = struct.unpack_from(">IIIII", self.data, off)
            off += 20
            entries.append((offset, size, cputype, cpusubtype, align))
        if arch_index >= len(entries):
            raise ValueError(f"arch index {arch_index} out of range")
        return entries[arch_index][0], entries[arch_index][1]

    def u32(self, off: int) -> int:
        return struct.unpack_from("<I", self.data, off)[0]

    def qword(self, vmaddr: int) -> int:
        return struct.unpack_from("<Q", self.data, self.base + vmaddr)[0]

    @staticmethod
    def strip_ptr(value: int) -> int:
        # arm64e pointer-auth bits live above the VM address in this binary.
        return value & 0xFFFFFFFF

    def vm_bytes(self, vmaddr: int, size: int) -> bytes:
        return self.data[self.base + vmaddr : self.base + vmaddr + size]

    def cstr(self, vmaddr: int, limit: int = 4096) -> str | None:
        if vmaddr < 0 or self.base + vmaddr >= len(self.data):
            return None
        end = self.data.find(b"\0", self.base + vmaddr, min(self.base + vmaddr + limit, len(self.data)))
        if end < 0:
            return None
        raw = self.data[self.base + vmaddr : end]
        try:
            return raw.decode("utf-8")
        except UnicodeDecodeError:
            return None

    def _parse_load_commands(self) -> None:
        _, _, _, _, ncmds, _, _, _ = struct.unpack_from("<IiiIIIII", self.data, self.base)
        cmd_off = self.base + 32
        sec_index = 1
        for _ in range(ncmds):
            cmd, cmdsize = struct.unpack_from("<II", self.data, cmd_off)
            if cmd == LC_SEGMENT_64:
                nsects = struct.unpack_from("<I", self.data, cmd_off + 64)[0]
                sec_off = cmd_off + 72
                for _ in range(nsects):
                    sectname = self.data[sec_off : sec_off + 16].split(b"\0", 1)[0].decode("ascii", "replace")
                    segname = self.data[sec_off + 16 : sec_off + 32].split(b"\0", 1)[0].decode("ascii", "replace")
                    addr, size, offset, align, reloff, nreloc, flags, res1, res2, res3 = struct.unpack_from(
                        "<QQIIIIIIII", self.data, sec_off + 32
                    )
                    self.sections.append(Section(sec_index, segname, sectname, addr, size, offset, flags, res1, res2))
                    sec_index += 1
                    sec_off += 80
            elif cmd == LC_SYMTAB:
                self.symtab = struct.unpack_from("<IIII", self.data, cmd_off + 8)
            elif cmd == LC_DYSYMTAB:
                self.dysymtab = struct.unpack_from("<IIIIIIIIIIIIIIIIII", self.data, cmd_off + 8)
            cmd_off += cmdsize

    def _parse_symbols(self) -> None:
        if not self.symtab:
            return
        symoff, nsyms, stroff, strsize = self.symtab
        for i in range(nsyms):
            n_strx, n_type, n_sect, n_desc, n_value = struct.unpack_from(
                "<IBBHQ", self.data, self.base + symoff + i * 16
            )
            name = ""
            if n_strx < strsize:
                start = self.base + stroff + n_strx
                end = self.data.find(b"\0", start, self.base + stroff + strsize)
                if end >= 0:
                    name = self.data[start:end].decode("utf-8", "replace")
            self.symbols.append(
                {"index": i, "name": name, "type": n_type, "sect": n_sect, "desc": n_desc, "value": n_value}
            )
            if n_value and name:
                self.symbol_by_addr[n_value] = name

    def section(self, name: str) -> Section | None:
        for section in self.sections:
            if section.name == name:
                return section
        return None

    def functions(self) -> list[dict]:
        text = self.section("__text")
        if not text:
            return []
        funcs = [
            s
            for s in self.symbols
            if s["sect"] == text.index and text.addr <= s["value"] < text.addr + text.size and s["name"]
        ]
        return sorted(funcs, key=lambda s: s["value"])

    def func_size(self, funcs: list[dict], index: int) -> int:
        if index + 1 < len(funcs):
            return funcs[index + 1]["value"] - funcs[index]["value"]
        text = self.section("__text")
        return text.addr + text.size - funcs[index]["value"]

    def cfstrings(self) -> dict[int, str]:
        section = self.section("__cfstring")
        if not section:
            return {}
        out = {}
        for addr in range(section.addr, section.addr + section.size, 0x20):
            try:
                _, flags, cptr, length = struct.unpack_from("<QQQQ", self.data, self.base + addr)
                cptr = self.strip_ptr(cptr)
                raw = self.vm_bytes(cptr, min(length * 4 + 8, 4096))
                if flags & 0x10:
                    text = raw[: length * 2].decode("utf-16le", "replace")
                else:
                    text = raw[:length].decode("utf-8", "replace")
                out[addr] = text
            except Exception:
                pass
        return out

    def global_cfstring_symbols(self) -> list[dict]:
        cf = self.cfstrings()
        out = []
        for sym in self.symbols:
            if not sym["value"]:
                continue
            try:
                ptr = self.strip_ptr(self.qword(sym["value"]))
            except Exception:
                continue
            if ptr in cf:
                out.append({"symbol": sym["name"], "addr": sym["value"], "cf_addr": ptr, "value": cf[ptr]})
        return sorted(out, key=lambda row: row["symbol"])


def regname(md: Cs, reg: int) -> str:
    return md.reg_name(reg) if reg else ""


def extract_xor_strings(macho: MachO, funcs: list[dict]) -> dict[str, list[dict]]:
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.detail = True
    func_index = {func["name"]: idx for idx, func in enumerate(funcs)}
    selected = [func for func in funcs if func["name"].startswith("_WCLGAccess")]
    selected += [
        func
        for func in funcs
        if any(word in func["name"] for word in ("Settings", "Feature", "Config", "Text", "ColorPicker"))
    ]
    selected_names = sorted({func["name"] for func in selected})
    result: dict[str, list[dict]] = {}

    for name in selected_names:
        func = funcs[func_index[name]]
        addr = func["value"]
        size = min(macho.func_size(funcs, func_index[name]), 0x18000)
        regs: dict[str, tuple[str, int]] = {}
        loaded: dict[str, tuple[int, int, int]] = {}
        transformed: dict[str, tuple[int | None, int, int]] = {}
        writes: dict[int, dict[int, int]] = {}
        mem: dict[int, int] = {}

        def read_byte(vmaddr: int) -> int:
            if vmaddr in mem:
                return mem[vmaddr]
            if 0 <= vmaddr and macho.base + vmaddr < len(macho.data):
                return macho.data[macho.base + vmaddr]
            return 0

        for ins in md.disasm(macho.vm_bytes(addr, size), addr):
            ops = ins.operands
            if ins.id == ARM64_INS_ADRP and len(ops) >= 2 and ops[1].type == ARM64_OP_IMM:
                regs[regname(md, ops[0].reg)] = ("addr", ops[1].imm)
            elif ins.id == ARM64_INS_ADD and len(ops) >= 3 and ops[2].type == ARM64_OP_IMM:
                dst = regname(md, ops[0].reg)
                src = regname(md, ops[1].reg)
                if src in regs:
                    kind, value = regs[src]
                    regs[dst] = (kind, value + ops[2].imm)
            elif ins.id == ARM64_INS_MOV and len(ops) >= 2 and ops[1].type == ARM64_OP_IMM:
                regs[regname(md, ops[0].reg)] = ("imm", ops[1].imm)
            elif (
                ins.id == ARM64_INS_ORR
                and len(ops) >= 3
                and ops[1].reg in (ARM64_REG_WZR, ARM64_REG_XZR)
                and ops[2].type == ARM64_OP_IMM
            ):
                regs[regname(md, ops[0].reg)] = ("imm", ops[2].imm)
            elif ins.id == ARM64_INS_LDRB and len(ops) >= 2 and ops[1].type == ARM64_OP_MEM:
                dst = regname(md, ops[0].reg)
                base_reg = regname(md, ops[1].mem.base)
                disp = ops[1].mem.disp
                if base_reg in regs and regs[base_reg][0] == "addr":
                    src_addr = regs[base_reg][1] + disp
                    loaded[dst] = (src_addr, read_byte(src_addr), disp)
                    transformed.pop(dst, None)
            elif ins.id == ARM64_INS_EOR and len(ops) >= 3:
                dst = regname(md, ops[0].reg)
                src = regname(md, ops[1].reg)
                if src in loaded:
                    mask = None
                    if ops[2].type == ARM64_OP_IMM:
                        mask = ops[2].imm & 0xFF
                    elif ops[2].type == ARM64_OP_REG:
                        mask_reg = regname(md, ops[2].reg)
                        if mask_reg in regs and regs[mask_reg][0] == "imm":
                            mask = regs[mask_reg][1] & 0xFF
                    if mask is not None:
                        src_addr, byte, disp = loaded[src]
                        transformed[dst] = (src_addr, disp, byte ^ mask)
            elif ins.id == ARM64_INS_MVN and len(ops) >= 2:
                dst = regname(md, ops[0].reg)
                src = regname(md, ops[1].reg)
                if src in loaded:
                    src_addr, byte, disp = loaded[src]
                    transformed[dst] = (src_addr, disp, (~byte) & 0xFF)
            elif ins.id == ARM64_INS_STRB and len(ops) >= 2 and ops[1].type == ARM64_OP_MEM:
                src = regname(md, ops[0].reg)
                base_reg = regname(md, ops[1].mem.base)
                disp = ops[1].mem.disp
                if base_reg in regs and regs[base_reg][0] == "addr":
                    dest_base = regs[base_reg][1]
                    value = None
                    if src in transformed:
                        value = transformed[src][2]
                    elif src in regs and regs[src][0] == "imm":
                        value = regs[src][1] & 0xFF
                    if value is not None:
                        mem[dest_base + disp] = value
                        writes.setdefault(dest_base, {})[disp] = value

        rows = []
        for dest, values in sorted(writes.items()):
            if len(values) < 3:
                continue
            raw = bytes(values.get(i, 0) for i in range(max(values) + 1))
            raw = raw.split(b"\0", 1)[0]
            if not raw:
                continue
            printable = sum(32 <= b < 127 or b in (9, 10, 13) for b in raw) / len(raw)
            if printable < 0.65:
                continue
            try:
                text = raw.decode("utf-8")
            except UnicodeDecodeError:
                text = raw.decode("latin1", "replace")
            rows.append({"dest": dest, "length": len(values), "text": text})
        if rows:
            result[name] = rows
    return result


def extract_objc_classes(macho: MachO) -> list[dict]:
    classlist = macho.section("__objc_classlist")
    if not classlist:
        return []

    def ptr(vmaddr: int) -> int:
        return macho.strip_ptr(macho.qword(vmaddr))

    def parse_method_list(vmaddr: int) -> list[dict]:
        if not vmaddr:
            return []
        try:
            entsize, count = struct.unpack_from("<II", macho.data, macho.base + vmaddr)
        except Exception:
            return []
        entry_size = entsize & 0xFFFF
        if entry_size not in (24, 12):
            entry_size = 24
        methods = []
        off = vmaddr + 8
        for _ in range(min(count, 512)):
            try:
                if entry_size == 24:
                    name_ptr = ptr(off)
                    types_ptr = ptr(off + 8)
                    imp = ptr(off + 16)
                    off += 24
                else:
                    # Relative method lists are uncommon in this binary, but keep a rough fallback.
                    base = off
                    name_off, types_off, imp_off = struct.unpack_from("<iii", macho.data, macho.base + off)
                    # In this arm64e binary the small-method name target is a selector
                    # reference, not the C string itself.
                    name_ref = base + name_off
                    name_ptr = ptr(name_ref)
                    types_ptr = base + 4 + types_off
                    imp = base + 8 + imp_off
                    off += 12
                methods.append(
                    {
                        "selector": macho.cstr(name_ptr) or f"sub_{name_ptr:x}",
                        "types": macho.cstr(types_ptr) or "",
                        "imp": imp,
                    }
                )
            except Exception:
                break
        return methods

    classes = []
    for cursor in range(classlist.addr, classlist.addr + classlist.size, 8):
        class_addr = ptr(cursor)
        if not class_addr:
            continue
        try:
            isa = ptr(class_addr)
            superclass = ptr(class_addr + 8)
            data_ptr = ptr(class_addr + 32) & ~0x7
            # class_ro_t
            flags, instance_start, instance_size, reserved = struct.unpack_from(
                "<IIII", macho.data, macho.base + data_ptr
            )
            name_ptr = ptr(data_ptr + 24)
            method_list = ptr(data_ptr + 32)
            ivar_list = ptr(data_ptr + 48)
            prop_list = ptr(data_ptr + 64)
            name = macho.cstr(name_ptr) or f"Class_{class_addr:x}"
            classes.append(
                {
                    "name": name,
                    "class_addr": class_addr,
                    "superclass_addr": superclass,
                    "flags": flags,
                    "instance_size": instance_size,
                    "methods": parse_method_list(method_list),
                    "ivar_list": ivar_list,
                    "property_list": prop_list,
                }
            )
        except Exception:
            pass
    return sorted(classes, key=lambda row: row["name"])


def write_text(path: pathlib.Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("dylib", type=pathlib.Path)
    parser.add_argument("out_dir", type=pathlib.Path)
    parser.add_argument("--arch-index", type=int, default=1, help="fat arch index, default arm64e for this dylib")
    args = parser.parse_args()

    macho = MachO(args.dylib, args.arch_index)
    out = args.out_dir
    out.mkdir(parents=True, exist_ok=True)

    metadata = {
        "path": str(args.dylib),
        "size": len(macho.data),
        "slice_base": macho.base,
        "slice_size": macho.slice_size,
        "sections": [section.__dict__ for section in macho.sections],
    }
    write_text(out / "00_metadata.json", json.dumps(metadata, ensure_ascii=False, indent=2))

    symbol_lines = []
    for sym in sorted(macho.symbols, key=lambda row: (row["sect"], row["value"], row["name"])):
        symbol_lines.append(f'{sym["value"]:08x} sect={sym["sect"]:02d} type={sym["type"]:02x} {sym["name"]}')
    write_text(out / "01_symbols.txt", "\n".join(symbol_lines) + "\n")

    globals_rows = macho.global_cfstring_symbols()
    global_lines = [f'{row["addr"]:08x} {row["symbol"]} = {row["value"]!r}' for row in globals_rows]
    write_text(out / "02_global_cfstrings.txt", "\n".join(global_lines) + "\n")

    cf_lines = [f"{addr:08x}: {value}" for addr, value in sorted(macho.cfstrings().items())]
    write_text(out / "03_all_cfstrings.txt", "\n".join(cf_lines) + "\n")

    funcs = macho.functions()
    xor_strings = extract_xor_strings(macho, funcs)
    write_text(out / "04_xor_strings.json", json.dumps(xor_strings, ensure_ascii=False, indent=2))
    interesting = []
    needle = re.compile(
        r"(auth|wxid|feature|token|allowed|blocked|denied|expires|wechat|chatroom|gh_|http|profile|nickname|device|公众号|授权|验证)",
        re.I,
    )
    for name, rows in xor_strings.items():
        hits = [row for row in rows if needle.search(row["text"])]
        if not hits:
            continue
        interesting.append(f"## {name}")
        for row in hits:
            interesting.append(f'- `{row["dest"]:08x}` len={row["length"]}: `{row["text"]}`')
        interesting.append("")
    write_text(out / "05_interesting_xor_strings.md", "\n".join(interesting) + "\n")

    classes = extract_objc_classes(macho)
    write_text(out / "06_objc_classes.json", json.dumps(classes, ensure_ascii=False, indent=2))
    header_lines = ["// Auto-recovered Objective-C class/interface skeletons.", ""]
    for cls in classes:
        header_lines.append(f'@interface {cls["name"]} : NSObject')
        for method in cls["methods"]:
            selector = method["selector"]
            prefix = "+" if selector in ("load", "initialize") else "-"
            header_lines.append(f"{prefix} (void){selector}; // imp 0x{method['imp']:x}, types {method['types']!r}")
        header_lines.append("@end")
        header_lines.append("")
    write_text(out / "07_objc_interfaces.h", "\n".join(header_lines))

    access_funcs = [func for func in funcs if func["name"].startswith("_WCLGAccess")]
    access_lines = ["# WCLGAccess function map", ""]
    for func in access_funcs:
        size = macho.func_size(funcs, funcs.index(func))
        access_lines.append(f'- `{func["name"]}` at `0x{func["value"]:x}`, size `0x{size:x}`')
    write_text(out / "08_access_function_map.md", "\n".join(access_lines) + "\n")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
