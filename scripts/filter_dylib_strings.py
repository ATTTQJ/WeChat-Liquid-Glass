#!/usr/bin/env python3
import pathlib
import re
import sys


def ascii_strings(data: bytes, min_len: int = 3):
    pattern = rb"[\x20-\x7e]{%d,}" % min_len
    for match in re.finditer(pattern, data):
        yield match.group().decode("utf-8", "replace")


def main() -> int:
    if len(sys.argv) != 3:
        print("usage: filter_dylib_strings.py <input.dylib> <report.md>", file=sys.stderr)
        return 2

    input_path = pathlib.Path(sys.argv[1])
    output_path = pathlib.Path(sys.argv[2])
    strings = sorted(set(ascii_strings(input_path.read_bytes())))

    groups = {
        "Scroll Edge": [
            "UIScrollEdgeEffect",
            "topEdgeEffect",
            "bottomEdgeEffect",
            "softStyle",
            "hardStyle",
            "automaticStyle",
            "scrollEdge",
        ],
        "Glass / Blur": [
            "UIGlassEffect",
            "UIVisualEffectView",
            "UIBlurEffect",
            "Glass",
            "Blur",
            "Effect",
            "backgroundEffect",
        ],
        "Navigation": [
            "UINavigationBar",
            "NavigationBar",
            "navigationBar",
            "scrollEdgeAppearance",
            "standardAppearance",
            "compactAppearance",
            "TitleCapsule",
            "TopMorph",
        ],
        "Layers / Masks": [
            "CAGradientLayer",
            "CAShapeLayer",
            "mask",
            "gradient",
            "shadow",
            "cornerRadius",
        ],
        "Hooking / Runtime": [
            "MSHookMessageEx",
            "ElleKit",
            "libhooker",
            "CaptainHook",
            "fishhook",
            "objc_",
            "class_",
            "method_",
        ],
        "Network / Auth": [
            "NSURLSession",
            "NSMutableURLRequest",
            "NSJSONSerialization",
            "HTTP",
            "Token",
            "Auth",
            "Authorization",
        ],
    }

    lines = ["# dylib string triage", ""]
    for title, needles in groups.items():
        hits = [
            s for s in strings
            if any(needle.lower() in s.lower() for needle in needles)
        ]
        lines.append(f"## {title}")
        lines.append("")
        lines.append(f"Count: `{len(hits)}`")
        lines.append("")
        for item in hits[:250]:
            escaped = item.replace("`", "\\`")
            lines.append(f"- `{escaped[:300]}`")
        lines.append("")

    output_path.write_text("\n".join(lines), encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
