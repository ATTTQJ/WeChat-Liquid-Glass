#!/usr/bin/env python3
import json
import subprocess
import sys
import urllib.request


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: download_latest_ghidra.py <output.zip>", file=sys.stderr)
        return 2

    request = urllib.request.Request(
        "https://api.github.com/repos/NationalSecurityAgency/ghidra/releases/latest",
        headers={
            "Accept": "application/vnd.github+json",
            "User-Agent": "WeChat-Liquid-Glass-CI",
        },
    )
    with urllib.request.urlopen(request, timeout=60) as response:
        release = json.loads(response.read().decode("utf-8"))

    candidates = []
    for asset in release.get("assets", []):
        name = asset.get("name", "")
        url = asset.get("browser_download_url", "")
        if name.endswith(".zip") and "PUBLIC" in name:
            candidates.append((name, url))

    if not candidates:
        print("no public ghidra zip asset found", file=sys.stderr)
        return 1

    name, url = sorted(candidates)[-1]
    print(f"downloading {name} from {url}", flush=True)
    subprocess.check_call([
        "curl",
        "-L",
        "--fail",
        "--retry", "5",
        "--retry-delay", "5",
        "--connect-timeout", "30",
        "--output", sys.argv[1],
        url,
    ])
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
