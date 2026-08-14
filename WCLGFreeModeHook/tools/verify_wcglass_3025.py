#!/usr/bin/env python3
"""Static binding verifier for WCLGFreeModeHook and WCGlass 3.0.2-5."""
from __future__ import annotations
import argparse, csv, hashlib, json, re, struct, sys
from pathlib import Path

EXPECTED = {
    "fat_sha256": "EB17F640FAC3CF3B1A53FF81467E2A0228EB64D3DF95B31137013F518E779E90",
    "arm64": {"cputype": 0x0100000C, "cpusubtype": 0, "uuid": "C796036748913799A1506B0CBA454BF9", "sha256": "6820C5C230F5AAC92491B3F0BB65F1105808C699863C005CA22F6473846F7A4F", "runtime": 49, "ui": 23},
    "arm64e": {"cputype": 0x0100000C, "cpusubtype": 2, "uuid": "EBA183AA418038D3875A1B9DD35CC8C3", "sha256": "A6CC749DFE0ED60BC34D8C1AD3C66DD928DF06A58A5DE2D3176E3569209A3FE1", "runtime": 50, "ui": 23},
}
SELECTORS = {
    "WCLGConfig": ["sharedConfig", "cachedObjectForKey:", "setCachedObject:forKey:", "boolForKey:defaultValue:", "setBool:forKey:", "liquidGlassEnabled", "shouldForceTrueForUserDefaultsKey:", "refreshAtomicMirrors"],
    "WCLGSettingsViewController": ["authorizationCellBackgroundColorForAllowed:", "applyAuthorizationBackgroundToCell:allowed:", "showOfficialAccountAlert", "officialAccountReadyForAction", "toggleSwitch:"],
    "WCLGHomeGroups": ["effectiveEnabled"],
}

def digest(data: bytes) -> str: return hashlib.sha256(data).hexdigest().upper()
def fail(errors: list[str], message: str) -> None: errors.append(message)

def fat_slices(data: bytes):
    magic = struct.unpack_from(">I", data, 0)[0]
    if magic not in (0xCAFEBABE, 0xCAFEBABF): raise ValueError(f"not a FAT Mach-O: 0x{magic:08X}")
    is64 = magic == 0xCAFEBABF
    n = struct.unpack_from(">I", data, 4)[0]
    offset, size = 8, (32 if is64 else 20)
    result = []
    for _ in range(n):
        cputype, cpusubtype = struct.unpack_from(">II", data, offset)
        if is64:
            fileoff, filesize = struct.unpack_from(">QQ", data, offset + 8)
        else:
            fileoff, filesize = struct.unpack_from(">II", data, offset + 8)
        result.append((cputype, cpusubtype & 0x00FFFFFF, fileoff, filesize))
        offset += size
    return result

def thin_uuid(blob: bytes) -> str:
    magic, _, _, _, ncmds, sizeofcmds, _ = struct.unpack_from("<IiiIIII", blob, 0)
    if magic != 0xFEEDFACF: raise ValueError("slice is not 64-bit little-endian Mach-O")
    pos, end = 32, 32 + sizeofcmds
    for _ in range(ncmds):
        cmd, cmdsize = struct.unpack_from("<II", blob, pos)
        if cmdsize < 8 or pos + cmdsize > end: raise ValueError("invalid load-command span")
        if cmd == 0x1B and cmdsize >= 24: return blob[pos + 8:pos + 24].hex().upper()
        pos += cmdsize
    raise ValueError("LC_UUID missing")

def binding_arrays(header: Path):
    text = header.read_text(encoding="utf-8-sig")
    match = re.search(r"#if defined\(__arm64e__\)(.*?)#else(.*?)#endif", text, re.S)
    if not match: raise ValueError("architecture binding sections missing")
    result = {}
    for name, section in (("arm64e", match.group(1)), ("arm64", match.group(2))):
        uuid_match = re.search(r"kWCLG3025UUID\[16\]\s*=\s*\{(.*?)\};", section, re.S)
        list_match = re.search(r"kWCLG3025GatedInitializers\[\]\s*=\s*\{(.*?)\};", section, re.S)
        if not uuid_match or not list_match: raise ValueError(f"{name} binding missing")
        uuid = "".join(f"{int(v, 16):02X}" for v in re.findall(r"0x[0-9a-fA-F]+", uuid_match.group(1)))
        pairs = [(int(a, 16), int(b, 16)) for a,b in re.findall(r"\{\s*(0x[0-9a-fA-F]+)\s*,\s*(0x[0-9a-fA-F]+)\s*\}", list_match.group(1))]
        result[name] = (uuid, pairs)
    return result

def gated_bindings(recovery: Path, arch: str):
    analysis = recovery / ("analysis_arm64e" if arch == "arm64e" else "analysis")
    init = json.loads((analysis / "init_offsets.json").read_text(encoding="utf-8"))["init_offsets"]
    with (analysis / "hook_map.csv").open(encoding="utf-8-sig", newline="") as fh: rows = list(csv.DictReader(fh))
    # Source pseudocode is emitted from arm64; initializer ordinal is architecture-stable.
    gated_ordinals = []
    for p in (recovery / "decompiled" / "initializers").glob("initializer_*.c"):
        if "liquidGlassEnabled" in p.read_text(encoding="utf-8", errors="replace"):
            gated_ordinals.append(int(re.search(r"initializer_(\d+)_", p.name).group(1)))
    expected, zero_registration = [], []
    for ordinal in sorted(gated_ordinals):
        related = [r for r in rows if r["initializer"].startswith(f"initializer_{ordinal:02d}_")]
        if not related:
            zero_registration.append(ordinal); continue
        slot = related[0]["original_slot"]
        m = re.fullmatch(r"g_([0-9a-fA-F]+)", slot)
        if not m: raise ValueError(f"{arch} initializer {ordinal}: unexpected original slot {slot}")
        expected.append((init[ordinal - 1]["target"], int(m.group(1), 16)))
    return expected, gated_ordinals, zero_registration, len(rows), sum(r["resolved"] == "True" for r in rows)

def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--recovery", type=Path)
    parser.add_argument("--binding-only", action="store_true")
    parser.add_argument("--sample", type=Path)
    parser.add_argument("--hook-root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    if not args.binding_only and not args.recovery:
        parser.error("--recovery is required unless --binding-only is used")
    recovery = args.recovery
    sample = args.sample or (recovery / "input" / "WCGlass.dylib" if recovery else None)
    errors, checks = [], {}
    try:
        if args.binding_only:
            raise RuntimeError("binding-only")
        data = sample.read_bytes(); checks["fat_sha256"] = digest(data)
        if checks["fat_sha256"] != EXPECTED["fat_sha256"]: fail(errors, "FAT SHA256 mismatch")
        parsed = fat_slices(data); seen = {}
        for cputype, subtype, offset, size in parsed:
            arch = "arm64e" if subtype == 2 else "arm64" if subtype == 0 else None
            if arch:
                blob = data[offset:offset+size]; seen[arch] = {"size": len(blob), "sha256": digest(blob), "uuid": thin_uuid(blob)}
        checks["slices"] = seen
        for arch, want in EXPECTED.items():
            if arch == "fat_sha256": continue
            got = seen.get(arch, {})
            for field in ("uuid", "sha256"):
                if got.get(field) != want[field]: fail(errors, f"{arch} {field} mismatch")
    except Exception as exc:
        if not args.binding_only: fail(errors, f"sample parse failed: {exc}")
    try:
        header = binding_arrays(args.hook_root / "WCGlass3025Bindings.h")
        checks["binding_header"] = {k: {"uuid": v[0], "registration_bindings": len(v[1])} for k,v in header.items()}
        for arch in ("arm64", "arm64e"):
            if header[arch][0] != EXPECTED[arch]["uuid"] or len(header[arch][1]) != 21:
                fail(errors, f"{arch} source binding mismatch")
        if args.binding_only:
            raise RuntimeError("binding-only")
        for arch in ("arm64", "arm64e"):
            expected, gated, zero, registrations, resolved = gated_bindings(recovery, arch)
            checks[f"{arch}_hook_map"] = {"registrations": registrations, "resolved": resolved, "gated_initializers": len(gated), "zero_registration_initializers": zero, "replay_bindings": len(expected)}
            if registrations != (488 if arch == "arm64" else 498) or resolved != registrations: fail(errors, f"{arch} hook map is not fully resolved")
            if len(gated) != 23 or zero != [35, 36] or len(expected) != 21: fail(errors, f"{arch} gated initializer classification drifted")
            if header[arch][0] != EXPECTED[arch]["uuid"]: fail(errors, f"{arch} header UUID mismatch")
            if header[arch][1] != expected: fail(errors, f"{arch} replay binding table does not match hook map")
        method_rows = list(csv.DictReader((recovery / "analysis" / "method_map.csv").open(encoding="utf-8-sig", newline="")))
        missing = [f"{cls} {selector}" for cls, selectors in SELECTORS.items() for selector in selectors if not any(r["class"] == cls and r["selector"] == selector for r in method_rows)]
        checks["selector_resolution"] = {"required": sum(map(len, SELECTORS.values())), "missing": missing}
        if missing: fail(errors, "selector anchors missing: " + ", ".join(missing))
        for arch in ("arm64", "arm64e"):
            auth = json.loads((recovery / ("analysis_arm64e" if arch == "arm64e" else "analysis") / "authorization_map.json").read_text(encoding="utf-8"))
            ready = auth["ready_compare_targets"]
            runtime = "0x1183f0" if arch == "arm64e" else "0x10f688"; ui = "0x112480" if arch == "arm64e" else "0x10a678"
            checks[f"{arch}_auth_chain"] = {"runtime_hits": ready.get(runtime), "ui_hits": ready.get(ui)}
            if ready.get(runtime) != EXPECTED[arch]["runtime"] or ready.get(ui) != EXPECTED[arch]["ui"]: fail(errors, f"{arch} ready signature counts mismatch")
    except Exception as exc:
        if str(exc) != "binding-only": fail(errors, f"recovery/map verification failed: {exc}")
    source = (args.hook_root / "Tweak.m").read_text(encoding="utf-8-sig")
    retired = ["kAuthAllowedGlobalOffset", "kHardBlockedGlobalOffset", "kFirstFeatureOriginalSlotOffset", "0x5830B8", "0x5971D8", "22 installed"]
    hits = [token for token in retired if token in source]
    checks["legacy_fixed_bindings_absent"] = not hits
    if hits: fail(errors, "legacy binding tokens remain: " + ", ".join(hits))
    report = {"ok": not errors, "sample": str(sample) if sample else None, "recovery": str(recovery) if recovery else None, "checks": checks, "errors": errors}
    text = json.dumps(report, ensure_ascii=False, indent=2) + "\n"
    if args.output: args.output.write_text(text, encoding="utf-8")
    print(text, end="")
    return 0 if not errors else 1

if __name__ == "__main__": raise SystemExit(main())
