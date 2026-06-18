# Recovery Notes

## Binary

- Input: `WeChatLiquidGlass(3).dylib`
- SHA-256: `D8B2D54986F55C8FCFAD9B903F2618938F461B00CF1FA2D804AD760328F18AD8`
- Fat Mach-O slices: arm64 and arm64e
- Recovered plugin version strings:
  - `2.8.221`
  - `Version 2.8.2-1`

## Recovered Auth Model

The authorization module is concentrated in these functions:

- `_WCLGAccessRequestServerSync`
- `_WCLGAccessStartServerSync`
- `_WCLGAccessCookieForFeature`
- `_WCLGAccessFastCookieForFeature`
- `_WCLGAccessInvalidateCache`
- `_WCLGAccessRefreshLocalAuthorization`
- `_WCLGAccessOfficialAccountSatisfied`
- `_WCLGAccessRefreshOfficialAccountAuthorization`
- `_WCLGAccessOpenRequiredOfficialAccount`
- `_WCLGAccessRequiredOfficialAccountName`
- `_WCLGAccessRequiredOfficialAccountUserName`
- `_WCLGAccessCurrentUserName`
- `_WCLGAccessCurrentNickName`

Important recovered constants:

- server status endpoint: `https://wclg.art/v1/client/status`
- required group: `57651225755@chatroom`
- required official account name: `微颜集`
- required official account username: `gh_75b4bfdd6985`
- release page: `https://t.me/WeChatLiquidGlass`

The server request body contains:

- `features`
- `device_id`
- `plugin_version`
- `plugin_build`
- `wechat_version`
- `bundle_id`
- `system_name`
- `system_version`
- `device_model`
- `channel`
- `arch`
- `wxid`
- `wxid_source`
- `wxid_updated_at`
- `nickname`
- `nickname_source`
- `nickname_updated_at`
- `local_auth_scanned`
- `local_official_ok`
- `local_group_ok`
- `nonce`

The server response cache uses:

- `token`
- `features`
- `denied_features`
- `expires_at`
- `allowed`
- `blocked`
- `code`
- `message`

The recovered cache validity check is:

- `expires_at > now + 30`
- `now - verified_at < 259200`

## Recovered ObjC Classes

The arm64e slice exposes 23 Objective-C classes:

- `WCLGChatBottomFadeOverlayHost`
- `WCLGChatBottomSMSProxySendTarget`
- `WCLGChatTopFadeOverlayHost`
- `WCLGChatTopMorphHostView`
- `WCLGChatTopMorphMenuView`
- `WCLGColorCanvasView`
- `WCLGColorPickerBackgroundView`
- `WCLGColorPickerViewController`
- `WCLGConfig`
- `WCLGEdgeEffectView`
- `WCLGForegroundReaffirm`
- `WCLGHomeTextHeaderWrapperView`
- `WCLGHueBarView`
- `WCLGKeyboardObserver`
- `WCLGNativeProfileTitleHitView`
- `WCLGNativeProfileTitleTapTarget`
- `WCLGSMSBackContentView`
- `WCLGSearchActionTarget`
- `WCLGSearchTabBarOverlay`
- `WCLGSettingsViewController`
- `WCLGTabBarVisualHostView`
- `WCLGTextEditorViewController`
- `WCLGVariableBlurHostView`

See `analysis/09_class_method_index.md` for selectors and implementation addresses.

## Source Reconstruction Status

`WeChatLiquidGlassRecovered/` currently contains a hand-written reconstruction of:

- constants and defaults keys
- `WCLGConfig`
- `WCLGAccess` local and server authorization flow
- `WCLGRuntime` visible controller lookup and settings presentation
- `WCLGSettingsViewController` first-pass local development settings page
- `WCLGVisual` first-pass TabBar glass host, edge/blur helper views, title hiding, and right-search capsule shell
- `WCLGChatBottom` first-pass chat input glass host, gradient tint option, and voice-transcribe hide fallback
- `WCLGChatBubble` first-pass bubble glass host, native bubble image suppression fallback, z-order maintenance, and flow-gradient toggle
- tweak constructor bootstrap and shake-to-open debug entry

V1 local-development scope:

- all recovered feature switches are visible in the settings page
- developer preview mode lets feature switches be edited while debugging settings/config flow
- authorization scanning, server sync, status display, and official-account deep link are present
- actual access helper functions still respect the recovered authorization checks
- authorization/cache identity fields are not spoofed or force-written

Not yet reconstructed:

- color picker implementation
- full variable blur implementation from private backdrop layers
- full `WCLGSearchTabBarOverlay` menu/gesture implementation
- exact WeChat-private message bubble hooks and message identity cache
- full SMS-style chat bottom replacement controls
- individual WeChat class hooks
- control-flow flattened helper functions outside the auth path

## Next Good Targets

1. Rebuild `WCLGConfig` completely from `analysis/09_class_method_index.md`.
2. Rebuild `WCLGSettingsViewController` table sections and switch tags.
3. Rebuild visual helper classes:
   - `WCLGVariableBlurHostView`
   - `WCLGEdgeEffectView`
   - `WCLGSearchTabBarOverlay`
4. Rebuild major hook functions by symbol:
   - `_WCLGApplyChatBottomGlassToInputToolView`
   - `_WCLGApplyChatBubbleGlassToMessageView`
   - `_WCLGApplySearchTabBarToTabBar`
   - `_WCLGApplyTabBarItemLayoutToTabBar`
   - `_WCLGApplyGlassSizeModeToTabBar`
