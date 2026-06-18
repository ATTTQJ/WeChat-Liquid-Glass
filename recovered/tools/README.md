# WCLG Cache Editor

`wclg_cache_editor.py` edits an exported WeChat/WeChatLiquidGlass
`NSUserDefaults` plist.

The old tweak most likely wrote into WeChat's app preferences, commonly:

- `/var/mobile/Containers/Data/Application/<WeChat-UUID>/Library/Preferences/com.tencent.xin.plist`
- or, on some jailbreak layouts, `/var/mobile/Library/Preferences/com.tencent.xin.plist`

Copy the plist to your computer first, edit it, then copy it back with the same
owner/permissions. Always quit WeChat before replacing the plist.

Examples:

```sh
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --list
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --filter tabbar --list
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --get flg_search_tabbar
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --set flg_search_tabbar true --type bool
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --unset wclg_search_tabbar_placeholder_text
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --export-json wclg-cache.json
python recovered/tools/wclg_cache_editor.py com.tencent.xin.plist --interactive
```

Authorization and identity keys are read-only in this editor. They can be
listed/exported for diagnostics or migration decisions, but the tool refuses to
modify them.
