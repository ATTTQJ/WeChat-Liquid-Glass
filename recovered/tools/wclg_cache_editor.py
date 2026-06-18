#!/usr/bin/env python3
"""
Read and edit WeChatLiquidGlass NSUserDefaults cache plists.

This tool intentionally treats identity and authorization cache keys as
read-only. It is meant for settings migration and preference editing, not for
changing access-control state.
"""

from __future__ import annotations

import argparse
import datetime as _dt
import json
import pathlib
import plistlib
import shutil
import sys
from typing import Any


PROTECTED_KEYS = {
    "WCLGLocalAuthScannedAt",
    "WCLGLocalOfficialOK",
    "WCLGLocalGroupOK",
    "WCLGLocalWXID",
    "WCLGLocalNickname",
    "FLGUnifiedServerAuthFeatures",
    "denied_features",
    "FLGUnifiedServerAuthExpiresAt",
    "FLGUnifiedServerAuthVerifiedAt",
    "FLGUnifiedServerAuthDeviceID",
    "FLGUnifiedServerAuthToken",
    "FLGUnifiedServerAuthLastCode",
    "FLGUnifiedServerAuthLastMessage",
    "FLGUnifiedServerAuthAllowed",
    "FLGUnifiedServerAuthHardBlocked",
}

PROTECTED_SUBSTRINGS = (
    "serverauth",
    "localauth",
    "localwxid",
    "wxid",
    "token",
    "expires",
    "verified",
    "hardblocked",
)

EDITABLE_KEYS = {
    "xg_liquid_glass_enabled",
    "flgtb_compat_enabled",
    "flg_unified_glass_size_mode",
    "flgtb_hide_tabbar_titles",
    "flg_home_top_navigation_alignment",
    "flg_home_search_button",
    "flg_chat_title_capsule",
    "wclg_chat_native_profile_title",
    "wclg_chat_native_profile_pinned_offset",
    "wclg_chat_top_morph_action_enabled",
    "wclg_private_chat_top_morph_default",
    "wclg_group_chat_top_morph_default",
    "wclg_chat_top_morph_sms_icons_enabled",
    "flg_chat_bottom_glass",
    "FLGUnifiedChatBottomGlassMode",
    "wclg_chat_bottom_sms_send_color_mode",
    "wclg_chat_bottom_sms_send_dark_color_mode",
    "wclg_chat_bottom_sms_hide_emoji_icon",
    "wclg_chat_bottom_sms_use_message_icons",
    "wclg_sms_back_text_enabled",
    "wclg_sms_home_add_icon_enabled",
    "wclg_sms_bottom_bar_icon_enabled",
    "wclg_sms_bottom_bar_icon_light_color_mode",
    "wclg_sms_bottom_bar_icon_dark_color_mode",
    "wclg_chat_plus_sms_menu_enabled",
    "FLGUnifiedUnreadBackCapsuleMode",
    "FLGUnifiedChatBubbleGlass",
    "FLGUnifiedRichCardPaymentBubble",
    "FLGUnifiedVoIPBubbleGlass",
    "FLGUnifiedLongPressMenuGlass",
    "FLGUnifiedChatBubbleFlowGradient",
    "FLGUnifiedChatBubbleFlowBorder",
    "FLGUnifiedChatBubbleFlowRichMedia",
    "FLGUnifiedChatBubbleFlowVoIP",
    "FLGUnifiedChatBubbleFlowStartColorMode",
    "FLGUnifiedChatBubbleFlowEndColorMode",
    "FLGUnifiedChatBubbleFlowDarkStartColorMode",
    "FLGUnifiedChatBubbleFlowDarkEndColorMode",
    "FLGUnifiedChatBubbleOutgoingColorMode",
    "FLGUnifiedChatBubbleIncomingColorMode",
    "wclg_chat_bubble_outgoing_dark_color_mode",
    "wclg_chat_bubble_incoming_dark_color_mode",
    "flg_hide_voice_transcribe_icon",
    "wclg_hide_home_wechat_title",
    "wclg_home_background_pure_color",
    "FLGUnifiedChatBottomGradientBackground",
    "flg_tabbar_extra_clear",
    "flg_tabbar_right_search",
    "flg_tabbar_right_search_size_mode",
    "flg_search_tabbar",
    "flg_search_tabbar_size_mode",
    "wclg_search_tabbar_placeholder_text",
    "flg_disable_pulldown_miniprogram",
    "flg_plus_menu_miniprogram_entry",
    "wclg_home_text_header_enabled",
    "wclg_home_text_header_text",
    "wclg_home_text_header_font_sizes",
    "wclg_home_text_header_font_weights",
    "wclg_home_text_header_background_color_mode",
    "wclg_home_text_header_text_color_mode",
    "wclg_home_text_header_border_color_mode",
    "wclg_home_text_header_background_dark_color_mode",
    "wclg_home_text_header_text_dark_color_mode",
    "wclg_home_text_header_border_dark_color_mode",
    "wclg_home_text_header_border_width",
    "wclg_home_text_header_corner_radius",
    "wclg_hide_pinned_mainframe_background",
    "wclg_home_fade_min_height",
    "wclg_home_fade_nav_overlap",
    "wclg_chat_fade_min_height",
    "wclg_chat_fade_nav_overlap",
    "wclg_chat_bottom_fade_height",
    "wclg_home_fade_blur_radius",
    "wclg_chat_fade_blur_radius",
    "wclg_chat_bottom_fade_blur_radius",
    "wclg_home_bottom_fade_enabled",
    "wclg_home_bottom_fade_inset",
    "wclg_home_bottom_fade_band",
    "wclg_home_bottom_fade_blur_radius",
    "wclg_home_fade_inset",
    "wclg_home_fade_band",
    "wclg_chat_fade_inset",
    "wclg_chat_fade_band",
    "wclg_chat_bottom_fade_inset",
    "wclg_chat_bottom_fade_band",
}


class CacheEditorError(Exception):
    pass


def load_plist(path: pathlib.Path) -> tuple[dict[str, Any], plistlib.PlistFormat]:
    raw = path.read_bytes()
    fmt = plistlib.FMT_BINARY if raw.startswith(b"bplist") else plistlib.FMT_XML
    data = plistlib.loads(raw)
    if not isinstance(data, dict):
        raise CacheEditorError("plist root is not a dictionary")
    return data, fmt


def save_plist(path: pathlib.Path, data: dict[str, Any], fmt: plistlib.PlistFormat) -> pathlib.Path:
    stamp = _dt.datetime.now().strftime("%Y%m%d-%H%M%S")
    backup = path.with_name(f"{path.name}.bak-{stamp}")
    shutil.copy2(path, backup)
    with path.open("wb") as handle:
        plistlib.dump(data, handle, fmt=fmt, sort_keys=True)
    return backup


def key_status(key: str) -> str:
    if is_protected_key(key):
        return "read-only"
    if key in EDITABLE_KEYS:
        return "editable"
    return "unknown/read-only"


def is_protected_key(key: str) -> bool:
    lowered = key.lower()
    return key in PROTECTED_KEYS or any(part in lowered for part in PROTECTED_SUBSTRINGS)


def require_editable(key: str) -> None:
    if key not in EDITABLE_KEYS or is_protected_key(key):
        raise CacheEditorError(f"refusing to edit protected or unknown key: {key}")


def parse_value(text: str, value_type: str) -> Any:
    if value_type == "auto":
        lowered = text.lower()
        if lowered == "true":
            return True
        if lowered == "false":
            return False
        if lowered in ("null", "none"):
            return None
        try:
            return json.loads(text)
        except json.JSONDecodeError:
            return text
    if value_type == "bool":
        lowered = text.lower()
        if lowered in ("1", "true", "yes", "on"):
            return True
        if lowered in ("0", "false", "no", "off"):
            return False
        raise CacheEditorError(f"invalid bool value: {text}")
    if value_type == "int":
        return int(text, 0)
    if value_type == "float":
        return float(text)
    if value_type == "json":
        return json.loads(text)
    if value_type == "string":
        return text
    raise CacheEditorError(f"unknown type: {value_type}")


def jsonable(value: Any) -> Any:
    if isinstance(value, bytes):
        return {"__bytes_hex__": value.hex()}
    if isinstance(value, _dt.datetime):
        return value.isoformat()
    if isinstance(value, dict):
        return {str(k): jsonable(v) for k, v in value.items()}
    if isinstance(value, list):
        return [jsonable(v) for v in value]
    return value


def print_table(data: dict[str, Any], pattern: str | None) -> None:
    keys = sorted(data)
    if pattern:
        needle = pattern.lower()
        keys = [key for key in keys if needle in key.lower()]
    width = max([len(key) for key in keys] + [3])
    for key in keys:
        value = data[key]
        rendered = json.dumps(jsonable(value), ensure_ascii=False)
        print(f"{key:<{width}}  {key_status(key):17}  {rendered}")


def export_json(data: dict[str, Any], output: pathlib.Path) -> None:
    rows = {
        key: {
            "status": key_status(key),
            "value": jsonable(value),
        }
        for key, value in sorted(data.items())
    }
    output.write_text(json.dumps(rows, ensure_ascii=False, indent=2), encoding="utf-8")


def interactive(path: pathlib.Path, data: dict[str, Any], fmt: plistlib.PlistFormat) -> None:
    dirty = False
    print("WCLG cache editor. Commands: list [filter], get <key>, set <key> <value>, unset <key>, save, quit")
    while True:
        try:
            line = input("wclg> ").strip()
        except EOFError:
            line = "quit"
        if not line:
            continue
        parts = line.split(" ", 2)
        command = parts[0].lower()
        try:
            if command == "list":
                print_table(data, parts[1] if len(parts) > 1 else None)
            elif command == "get" and len(parts) >= 2:
                key = parts[1]
                print(json.dumps(jsonable(data.get(key)), ensure_ascii=False, indent=2))
                print(f"status: {key_status(key)}")
            elif command == "set" and len(parts) == 3:
                key = parts[1]
                require_editable(key)
                data[key] = parse_value(parts[2], "auto")
                dirty = True
                print("updated")
            elif command == "unset" and len(parts) >= 2:
                key = parts[1]
                require_editable(key)
                data.pop(key, None)
                dirty = True
                print("removed")
            elif command == "save":
                backup = save_plist(path, data, fmt)
                dirty = False
                print(f"saved; backup: {backup}")
            elif command in ("quit", "exit"):
                if dirty:
                    answer = input("unsaved changes, save first? [y/N] ").strip().lower()
                    if answer == "y":
                        backup = save_plist(path, data, fmt)
                        print(f"saved; backup: {backup}")
                return
            else:
                print("unknown command")
        except Exception as exc:
            print(f"error: {exc}")


def main() -> int:
    parser = argparse.ArgumentParser(description="Read/edit WeChatLiquidGlass cache plist")
    parser.add_argument("plist", type=pathlib.Path, help="exported NSUserDefaults plist path")
    parser.add_argument("--list", action="store_true", help="list keys")
    parser.add_argument("--filter", help="filter listed keys")
    parser.add_argument("--get", metavar="KEY", help="print one key")
    parser.add_argument("--set", nargs=2, metavar=("KEY", "VALUE"), help="set one editable key")
    parser.add_argument("--type", choices=["auto", "bool", "int", "float", "json", "string"], default="auto")
    parser.add_argument("--unset", metavar="KEY", help="remove one editable key")
    parser.add_argument("--export-json", type=pathlib.Path, metavar="PATH", help="export all keys with edit status")
    parser.add_argument("--interactive", action="store_true", help="open a small interactive editor")
    args = parser.parse_args()

    try:
        data, fmt = load_plist(args.plist)
        changed = False

        if args.list:
            print_table(data, args.filter)

        if args.get:
            print(json.dumps(jsonable(data.get(args.get)), ensure_ascii=False, indent=2))
            print(f"status: {key_status(args.get)}")

        if args.set:
            key, raw_value = args.set
            require_editable(key)
            data[key] = parse_value(raw_value, args.type)
            changed = True

        if args.unset:
            require_editable(args.unset)
            data.pop(args.unset, None)
            changed = True

        if args.export_json:
            export_json(data, args.export_json)

        if changed:
            backup = save_plist(args.plist, data, fmt)
            print(f"saved {args.plist}")
            print(f"backup {backup}")

        if args.interactive or not any([args.list, args.get, args.set, args.unset, args.export_json]):
            interactive(args.plist, data, fmt)

    except CacheEditorError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2
    except FileNotFoundError:
        print(f"error: file not found: {args.plist}", file=sys.stderr)
        return 2

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
