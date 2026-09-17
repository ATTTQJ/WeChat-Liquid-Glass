# WCGlass Free Gate

A companion tweak for the owner-authorized free edition of WCGlass. It leaves the original WCGlass dylib and its protected segment untouched, and provides free-edition authorization values at runtime.

## Build

GitHub Actions builds both an installable `.deb` and the standalone `WCGlassFreeGate.dylib` for arm64 and arm64e. Download the workflow artifact from the Actions run triggered by this branch.

## Scope

The tweak only affects WCGlass authorization keys inside WeChat (`com.tencent.xin`).
