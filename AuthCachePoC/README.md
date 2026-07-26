# WCLG Auth Cache PoC

Full-feature test package for the WCGlass authorization-cache finding.

## Behavior

- Installs the original full-feature `WCGlass.dylib`.
- Builds a companion dylib from
  `../WCGlass_recovered/src/WCLGAuthCachePoC.m`.
- Both dylibs inject only into `com.tencent.xin`.
- Saves the original target cache values once.
- Writes `Allowed=YES`, `HardBlocked=NO`, a future expiry, feature values, and
  local eligibility values through both `NSUserDefaults` and `WCLGConfig`.
- Leaves the existing authorization Token, wxid, and device identifier unchanged.
- Repeats the write after initialization, then relies on a second cold launch to
  exercise the original persisted-cache loader.

The recovered Objective-C skeletons and C-style pseudocode are retained under
`../WCGlass_recovered` for browsing and review. The original dylib remains the
runtime implementation of the full feature set; the recovered skeletons are not
substituted for working compiled methods.

## Build

```sh
make package FINALPACKAGE=1
```

## Device verification

1. Remove any separately installed copy that owns the same `WCGlass.dylib` path.
2. Install the generated package.
3. Launch once and wait for the `WCGlass/AuthCachePoC` log.
4. Fully terminate the host process.
5. Launch again and inspect the protected feature state.

## Rollback

The first run stores the original values in `WCGlassAuthCachePoCBackupV1`.
Call the exported function below from a temporary debug action before removing
the package:

```objc
extern void WCLGAuthCachePoCRestore(void);
WCLGAuthCachePoCRestore();
```

Then fully terminate and relaunch the host process.
