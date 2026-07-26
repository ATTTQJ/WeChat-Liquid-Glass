#!/usr/bin/env python3
"""Regression tests for legacy plain-cache trust and sealed-cache behavior."""

from __future__ import annotations

import base64
import hashlib
import hmac
import json
import plistlib
import sys
import unittest
from pathlib import Path
from typing import Any

HERE = Path(__file__).resolve().parent
ROOT = HERE.parent
sys.path.insert(0, str(HERE))

from auth_cache_tamper_fixture import legacy_cache_decision, mutate_fixture


TEST_KEY = b"fixture-only-key-not-for-production"
NOW = 1_800_000_000.0


def seal_test_claims(claims: dict[str, Any]) -> dict[str, str]:
    """Test-only HMAC envelope; production must use an asymmetric server signature."""
    payload = json.dumps(
        claims, sort_keys=True, separators=(",", ":"), ensure_ascii=False
    ).encode("utf-8")
    mac = hmac.new(TEST_KEY, payload, hashlib.sha256).digest()
    return {
        "payload": base64.b64encode(payload).decode("ascii"),
        "signature": base64.b64encode(mac).decode("ascii"),
        "key_id": "fixture-hmac",
    }


def verify_test_envelope(
    envelope: dict[str, str], *, wxid: str, device: str, now: float
) -> tuple[bool, dict[str, Any] | None]:
    try:
        payload = base64.b64decode(envelope["payload"], validate=True)
        supplied = base64.b64decode(envelope["signature"], validate=True)
        expected = hmac.new(TEST_KEY, payload, hashlib.sha256).digest()
        if not hmac.compare_digest(supplied, expected):
            return False, None
        claims = json.loads(payload)
    except (KeyError, ValueError, TypeError, json.JSONDecodeError):
        return False, None

    if type(claims) is not dict:
        return False, None
    required_types = {
        "version": int,
        "subject": str,
        "device": str,
        "allowed": bool,
        "hard_blocked": bool,
        "features": list,
        "issued_at": int,
        "expires_at": int,
        "nonce": str,
    }
    if any(type(claims.get(k)) is not t for k, t in required_types.items()):
        return False, None
    if (
        claims["version"] != 1
        or claims["subject"] != wxid
        or claims["device"] != device
        or not claims["allowed"]
        or claims["hard_blocked"]
        or claims["issued_at"] > now + 300
        or claims["expires_at"] <= now
        or claims["expires_at"] - claims["issued_at"] > 24 * 60 * 60
    ):
        return False, None
    if not all(type(item) is str for item in claims["features"]):
        return False, None
    return True, claims


class AuthCacheRegressionTests(unittest.TestCase):
    def setUp(self) -> None:
        fixture = ROOT / "fixtures" / "auth_cache_denied.plist"
        with fixture.open("rb") as stream:
            self.denied = plistlib.load(stream)

    def test_plain_cache_mutation_flips_legacy_decision_without_token(self) -> None:
        self.assertFalse(
            legacy_cache_decision(
                self.denied,
                current_wxid="wxid_fixture",
                required_feature="glass_ui",
                now=NOW,
            )
        )
        tampered = mutate_fixture(
            self.denied,
            fixture_wxid="wxid_fixture",
            features=["glass_ui"],
            now=NOW,
        )
        self.assertEqual(tampered["FLGUnifiedServerAuthToken"], "")
        self.assertTrue(
            legacy_cache_decision(
                tampered,
                current_wxid="wxid_fixture",
                required_feature="glass_ui",
                now=NOW,
            )
        )

    def test_valid_signed_fixture_is_accepted(self) -> None:
        claims = {
            "version": 1,
            "subject": "wxid_fixture",
            "device": "device_fixture",
            "allowed": True,
            "hard_blocked": False,
            "features": ["glass_ui"],
            "issued_at": int(NOW - 60),
            "expires_at": int(NOW + 3600),
            "nonce": "nonce-001",
        }
        ok, verified = verify_test_envelope(
            seal_test_claims(claims),
            wxid="wxid_fixture",
            device="device_fixture",
            now=NOW,
        )
        self.assertTrue(ok)
        self.assertEqual(verified["features"], ["glass_ui"])

    def test_payload_mutation_without_resigning_is_rejected(self) -> None:
        claims = {
            "version": 1,
            "subject": "wxid_fixture",
            "device": "device_fixture",
            "allowed": False,
            "hard_blocked": False,
            "features": [],
            "issued_at": int(NOW - 60),
            "expires_at": int(NOW + 3600),
            "nonce": "nonce-002",
        }
        envelope = seal_test_claims(claims)
        decoded = json.loads(base64.b64decode(envelope["payload"]))
        decoded["allowed"] = True
        decoded["features"] = ["glass_ui"]
        envelope["payload"] = base64.b64encode(
            json.dumps(
                decoded, sort_keys=True, separators=(",", ":")
            ).encode("utf-8")
        ).decode("ascii")

        ok, _ = verify_test_envelope(
            envelope,
            wxid="wxid_fixture",
            device="device_fixture",
            now=NOW,
        )
        self.assertFalse(ok)

    def test_signed_claims_are_bound_to_identity_and_device(self) -> None:
        claims = {
            "version": 1,
            "subject": "wxid_fixture",
            "device": "device_fixture",
            "allowed": True,
            "hard_blocked": False,
            "features": ["glass_ui"],
            "issued_at": int(NOW - 60),
            "expires_at": int(NOW + 3600),
            "nonce": "nonce-003",
        }
        envelope = seal_test_claims(claims)
        self.assertFalse(
            verify_test_envelope(
                envelope,
                wxid="wxid_other",
                device="device_fixture",
                now=NOW,
            )[0]
        )
        self.assertFalse(
            verify_test_envelope(
                envelope,
                wxid="wxid_fixture",
                device="device_other",
                now=NOW,
            )[0]
        )


if __name__ == "__main__":
    unittest.main(verbosity=2)
