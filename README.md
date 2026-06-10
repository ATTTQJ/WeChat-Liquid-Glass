# WeChat-Liquid-Glass

This repository now contains only one independent tweak:

- [SoftScrollEdge](SoftScrollEdge): forces available UIKit scroll edge effects to use the system soft style in WeChat.

It does not modify the original Liquid Glass dylib and does not include custom top glass overlays, navigation bar replacement, signing bypass, anti-detection, privacy access, or business-logic changes.

## Build

Use the included GitHub Actions workflow, or build locally with Theos:

```sh
cd SoftScrollEdge
make package
```

## dylib analysis

The `Analyze dylib` workflow can generate static analysis artifacts for a Mach-O dylib.

Use either:

- commit a file at `input/WeChatLiquidGlass.dylib`, or
- run the workflow manually with a temporary HTTPS `dylib_url`.

The workflow outputs metadata, symbols, Objective-C metadata, and filtered strings as artifacts.
