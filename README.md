# WeChat-Liquid-Glass

This repository contains small independent UIKit tweaks:

- [SoftScrollEdge](SoftScrollEdge): forces available UIKit scroll edge effects to use the system soft style in WeChat.
- [TabBarGlassFix](TabBarGlassFix): keeps plugin-created tab bar glass behind native tab item labels and icons.
- [AuthCachePoC](AuthCachePoC): isolated authorization-cache regression package that preserves the existing Token, wxid, and device identifier while testing local cache trust.

The UI tweaks do not modify the original Liquid Glass dylib. `AuthCachePoC` is a separately packaged, explicitly labeled regression fixture and is not linked into the UI tweak packages.

## Build

Use the included GitHub Actions workflow, or build locally with Theos:

```sh
cd SoftScrollEdge
make package
```

The authorization-cache regression package is built independently:

```sh
cd AuthCachePoC
make package FINALPACKAGE=1
```

## dylib analysis

The `Analyze dylib` workflow can generate static analysis artifacts for a Mach-O dylib.

Use either:

- commit a file at `input/WeChatLiquidGlass.dylib`, or
- run the workflow manually with a temporary HTTPS `dylib_url`.

The workflow outputs metadata, symbols, Objective-C metadata, and filtered strings as artifacts.
