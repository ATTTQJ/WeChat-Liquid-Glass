# WCLG Auth Cache PoC

Independent regression-test tweak for the WCGlass authorization-cache finding.

## Behavior

- Injects only into `com.tencent.xin`.
- Saves the original target cache values once.
- Writes `Allowed=YES`, `HardBlocked=NO`, a future expiry, feature values, and
  local eligibility values through both `NSUserDefaults` and `WCLGConfig`.
- Leaves the existing authorization Token, wxid, and device identifier unchanged.
- Repeats the write after initialization, then relies on a second cold launch to
  exercise the original persisted-cache loader.

## Build

```sh
make package FINALPACKAGE=1
```

## Device verification

1. Install the generated package.
2. Launch once and wait for the `WCGlass/AuthCachePoC` log.
3. Fully terminate the host process.
4. Launch again and inspect the protected feature state.

## Rollback

The first run stores the original values in `WCGlassAuthCachePoCBackupV1`.
Call the exported function below from a temporary debug action before removing
the package:

```objc
extern void WCLGAuthCachePoCRestore(void);
WCLGAuthCachePoCRestore();
```

Then fully terminate and relaunch the host process.
