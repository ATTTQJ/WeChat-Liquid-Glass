# WCLG Custom Top Glass

Minimal UIKit tweak that avoids system navigation-bar Liquid Glass/material backgrounds and draws a custom Telegram-style top glass overlay instead.

## Scope

- Adds a non-interactive top fade blur overlay.
- Adds independent glass capsules behind the left, title, and right navigation controls.
- Makes `UINavigationBar` visually transparent, but does not use `backgroundEffect`.
- Uses associated objects to avoid adding duplicate overlays.
- Limits injection to WeChat bundle id `com.tencent.xin`.

## Build

Requires Theos and an iOS SDK:

```sh
make package
```

Install the generated package on a test device with a jailbreak substrate environment.

## GitHub Actions

The included workflow builds the tweak on `macos-14` and uploads the generated package from `packages/*` as an artifact.

## Notes

This project only targets UI presentation. It does not implement signing bypass, anti-detection, network interception, privacy access, or business-logic changes.
