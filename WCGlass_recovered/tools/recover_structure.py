#!/usr/bin/env python3
"""Generate a browsable Objective-C source skeleton from Rizin JSON metadata."""

from __future__ import annotations

import argparse
import csv
import json
import re
from pathlib import Path


TYPE_MAP = {
    "B": "BOOL",
    "c": "char",
    "C": "unsigned char",
    "s": "short",
    "S": "unsigned short",
    "i": "int",
    "I": "unsigned int",
    "l": "long",
    "L": "unsigned long",
    "q": "NSInteger",
    "Q": "NSUInteger",
    "f": "float",
    "d": "double",
    "@": "id",
    "@?": "id /* block */",
    "{CGPoint=\"x\"d\"y\"d}": "CGPoint",
    "{CGSize=\"width\"d\"height\"d}": "CGSize",
    "{CGRect={CGPoint=dd}{CGSize=dd}}": "CGRect",
}


def objc_type(encoded: str | None) -> str:
    if not encoded:
        return "id"
    if encoded.startswith('@"') and encoded.endswith('"'):
        return encoded[2:-1] + " *"
    return TYPE_MAP.get(encoded, f"id /* encoded: {encoded} */")


def safe_name(value: str) -> str:
    value = re.sub(r"[^A-Za-z0-9_]", "_", value)
    if not value or value[0].isdigit():
        value = "_" + value
    return value


def method_signature(selector: str, is_class: bool) -> str | None:
    if selector.startswith("."):
        return None
    prefix = "+" if is_class else "-"
    parts = selector.split(":")
    argc = len(parts) - 1
    if argc == 0:
        return f"{prefix} (id){safe_name(selector)}"
    pieces = []
    for i in range(argc):
        label = safe_name(parts[i]) if parts[i] else f"arg{i}"
        pieces.append(f"{label}:(id)arg{i}")
    return f"{prefix} (id)" + " ".join(pieces)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--analysis", required=True, type=Path)
    ap.add_argument("--src", required=True, type=Path)
    args = ap.parse_args()

    args.src.mkdir(parents=True, exist_ok=True)
    classes = json.loads((args.analysis / "classes.json").read_text(encoding="utf-8"))["classes"]
    functions = json.loads((args.analysis / "functions.json").read_text(encoding="utf-8"))
    fmap = {int(f["offset"]): f for f in functions}

    method_rows: list[dict[str, object]] = []
    class_rows: list[dict[str, object]] = []
    umbrella = [
        "#pragma once",
        "#import <Foundation/Foundation.h>",
        "#import <UIKit/UIKit.h>",
        "",
        "/* Automatically reconstructed from Objective-C runtime metadata. */",
        "",
    ]

    for cls in classes:
        name = cls["classname"]
        superclass = cls.get("super") or "NSObject"
        ivars = []
        for field in cls.get("fields", []):
            match = re.search(r"\(ivar\)(_[A-Za-z0-9_]+)$", field.get("name", ""))
            if not match:
                continue
            ivars.append((objc_type(field.get("type")), match.group(1), field.get("type", "")))

        header = [
            "#import \"RecoveredClasses.h\"",
            "",
            f"@implementation {name}",
            "",
        ]
        seen: set[tuple[str, int]] = set()
        real_method_count = 0
        for method in cls.get("methods", []):
            selector = method["name"]
            addr = int(method["addr"])
            if (selector, addr) in seen:
                continue
            seen.add((selector, addr))
            finfo = fmap.get(addr, {})
            fname = str(finfo.get("name", ""))
            is_class = fname.startswith("method.class.")
            signature = method_signature(selector, is_class)
            if signature is None:
                continue
            real_method_count += 1
            size = int(finfo.get("size", 0))
            blocks = int(finfo.get("nbbs", 0))
            header.extend(
                [
                    f"{signature} {{",
                    f"    /* Original: 0x{addr:x}, size: {size}, basic blocks: {blocks}. */",
                    "    return nil;",
                    "}",
                    "",
                ]
            )
            method_rows.append(
                {
                    "class": name,
                    "kind": "+" if is_class else "-",
                    "selector": selector,
                    "address": f"0x{addr:x}",
                    "size": size,
                    "basic_blocks": blocks,
                    "symbol": fname,
                }
            )
        header.extend(["@end", ""])
        (args.src / f"{name}.m").write_text("\n".join(header), encoding="utf-8")

        umbrella.append(f"@interface {name} : {superclass}")
        if ivars:
            umbrella.append("{")
            for typ, ivar, encoded in ivars:
                umbrella.append(f"    {typ} {ivar}; // {encoded}")
            umbrella.append("}")
        for method in cls.get("methods", []):
            addr = int(method["addr"])
            finfo = fmap.get(addr, {})
            signature = method_signature(
                method["name"], str(finfo.get("name", "")).startswith("method.class.")
            )
            if signature:
                umbrella.append(signature + ";")
        umbrella.extend(["@end", ""])
        class_rows.append(
            {
                "class": name,
                "superclass": superclass,
                "methods": real_method_count,
                "ivars": len(ivars),
            }
        )

    (args.src / "RecoveredClasses.h").write_text("\n".join(umbrella), encoding="utf-8")

    with (args.analysis / "method_map.csv").open("w", newline="", encoding="utf-8-sig") as f:
        writer = csv.DictWriter(f, fieldnames=list(method_rows[0]))
        writer.writeheader()
        writer.writerows(method_rows)
    with (args.analysis / "class_summary.csv").open("w", newline="", encoding="utf-8-sig") as f:
        writer = csv.DictWriter(f, fieldnames=list(class_rows[0]))
        writer.writeheader()
        writer.writerows(class_rows)

    summary = {
        "classes": len(class_rows),
        "methods": len(method_rows),
        "ivars": sum(int(row["ivars"]) for row in class_rows),
        "source_files": len(list(args.src.glob("*.m"))) + 1,
    }
    (args.analysis / "recovery_summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    print(json.dumps(summary, ensure_ascii=False))


if __name__ == "__main__":
    main()
