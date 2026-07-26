# WeChat-Liquid-Glass

This repository contains small independent UIKit tweaks:

- [SoftScrollEdge](SoftScrollEdge): forces available UIKit scroll edge effects to use the system soft style in WeChat.
- [TabBarGlassFix](TabBarGlassFix): keeps plugin-created tab bar glass behind native tab item labels and icons.
- [AuthCachePoC](AuthCachePoC): single full WCGlass dylib with the recovered authorization-state patch merged directly into both architecture slices.
- [WCGlass_recovered](WCGlass_recovered): complete static-recovery workspace containing Objective-C class skeletons, hook pseudocode, analysis data, extracted architecture slices, security tests, and recovery tools.

The UI tweaks remain independent. `AuthCachePoC` is a separately packaged,
explicitly labeled full-plugin regression fixture and is not linked into the UI
tweak packages.

## Build

Use the included GitHub Actions workflow, or build locally with Theos:

```sh
cd SoftScrollEdge
make package
```

The authorization-cache regression package is built independently:

```sh
cd AuthCachePoC
make package
```

Its package contains one full-feature FAT `WCGlass.dylib` plus the required
MobileSubstrate filter plist. No companion dylib is installed.

## dylib analysis

The `Analyze dylib` workflow can generate static analysis artifacts for a Mach-O dylib.

Use either:

- commit a file at `input/WeChatLiquidGlass.dylib`, or
- run the workflow manually with a temporary HTTPS `dylib_url`.

The workflow outputs metadata, symbols, Objective-C metadata, and filtered strings as artifacts.
