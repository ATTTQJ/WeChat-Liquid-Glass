#!/usr/bin/env python3
"""Mutate an exported WCGlass preference fixture for defensive regression tests.

The tool intentionally requires explicit input/output files. It never discovers
or edits an installed application's live preference container.
"""

from __future__ import annotations

import argparse
import copy
import plistlib
import time
from pathlib import Path
from typing import Any


KEYS = {
    "allowed": "FLGUnifiedServerAuthAllowed",
    "hard_blocked": "FLGUnifiedServerAuthHardBlocked",
    "expires_at": "FLGUnifiedServerAuthExpiresAt",
    "verified_at": "FLGUnifiedServerAuthVerifiedAt",
    "features": "FLGUnifiedServerAuthFeatures",
    "official_ok": "WCLGLocalOfficialOK",
    "group_ok": "WCLGLocalGroupOK",
    "auth_scanned_at": "WCLGLocalAuthScannedAt",
    "group_scanned_at": "WCLGLocalGroupScannedAt",
    "wxid": "WCLGLocalWXID",
}


def mutate_fixture(
    original: dict[str, Any],
    *,
    fixture_wxid: str,
    features: list[str],
    now: float | None = None,
) -> dict[str, Any]:
    """Return a modified copy representing the observed local-cache bypass."""
    now = time.time() if now is None else now
    result = copy.deepcopy(original)
    result[KEYS["allowed"]] = True
    result[KEYS["hard_blocked"]] = False
    result[KEYS["expires_at"]] = now + 365 * 24 * 60 * 60
    result[KEYS["verified_at"]] = now
    result[KEYS["features"]] = list(features)
    result[KEYS["official_ok"]] = True
    result[KEYS["group_ok"]] = True
    result[KEYS["auth_scanned_at"]] = now
    result[KEYS["group_scanned_at"]] = now
    result[KEYS["wxid"]] = fixture_wxid
    return result


def legacy_cache_decision(
    cache: dict[str, Any], *, current_wxid: str, required_feature: str, now: float
) -> bool:
    """Approximate the vulnerable decision formed from independent cache values."""
    return (
        bool(cache.get(KEYS["allowed"], False))
        and not bool(cache.get(KEYS["hard_blocked"], False))
        and float(cache.get(KEYS["expires_at"], 0.0)) > now
        and bool(cache.get(KEYS["official_ok"], False))
        and bool(cache.get(KEYS["group_ok"], False))
        and cache.get(KEYS["wxid"]) == current_wxid
        and required_feature in cache.get(KEYS["features"], [])
    )


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--fixture-wxid", default="wxid_fixture")
    parser.add_argument("--feature", action="append", default=[])
    args = parser.parse_args()

    with args.input.open("rb") as stream:
        original = plistlib.load(stream)
    if not isinstance(original, dict):
        raise SystemExit("input plist root must be a dictionary")

    now = time.time()
    features = args.feature or ["glass_ui"]
    mutated = mutate_fixture(
        original,
        fixture_wxid=args.fixture_wxid,
        features=features,
        now=now,
    )
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("wb") as stream:
        plistlib.dump(mutated, stream, fmt=plistlib.FMT_XML, sort_keys=True)

    decision = legacy_cache_decision(
        mutated,
        current_wxid=args.fixture_wxid,
        required_feature=features[0],
        now=now,
    )
    print(f"wrote={args.output.resolve()}")
    print(f"legacy_cache_decision={'ALLOW' if decision else 'DENY'}")
    print("token_changed=no")
    return 0 if decision else 2


if __name__ == "__main__":
    raise SystemExit(main())
