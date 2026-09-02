# QQlg floating TabBar

This build targets **only** the QQ 9.3.35 home TabBar. It is based on the
confirmed `QQSkinTabBar` hierarchy and preserves QQ's four `QQToolBar*`
item views, controls, badges, and handlers.

## Glass architecture

- It removes both rectangular layers found in the probe: QQSkinTabBar's
  full-width background **and the parent UITabBar background**. The latter was
  still visible in the previous screenshot, producing the opaque white block
  beneath the capsule.
- On iOS 26 and later, it dynamically creates Apple's UIKit
  `UIGlassContainerEffect` with a regular glass bar and a clear selected-item
  glass capsule inside one shared container. The two surfaces can therefore
  blend while selection changes instead of being painted as a white blur.
- iOS 15–25 uses a low-tint ultra-thin-material fallback with a restrained
  refractive highlight and hairline edge. It intentionally has no white
  overlay layer.

The iOS 26 classes are located through Objective-C Runtime, so this dylib can
still be built with the existing macOS 14 cloud runner and loaded on older
systems. The log reports `nativeGlass=yes` or `nativeGlass=no` when the
floating host is created.

## Test

1. Embed `QQlgFloatingTab.dylib` in the app bundle's `Frameworks` folder and
   register `@rpath/QQlgFloatingTab.dylib` as a load command.
2. Re-sign the complete test bundle with the signing process used for QQ.
3. Use this dylib by itself; do not combine it with `QQGlassProbe` or either
   chat-input test dylib.
4. Test all four home tabs, badges, device rotation, a theme switch, and an
   app relaunch. Attach a home-page screenshot plus
   `Documents/QQlg/QQlgFloatingTab.log`.

Expected log evidence:

```
floating host created ... nativeGlass=yes
```

If the device is below iOS 26, `nativeGlass=no` is expected and identifies the
fallback path. Chat input work remains out of this build.
