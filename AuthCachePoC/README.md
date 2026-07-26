# WCGlass free-mode build

Single-plugin build that keeps the complete feature implementation while making
the protected settings behave like ordinary settings.

## Behavior

- Installs one universal `WCGlass.dylib` containing both arm64 and arm64e.
- Keeps every original section, dependency, and feature implementation.
- Replaces 37 same-size instructions across the two slices.
- Writes the runtime state as `Allowed=true` and `HardBlocked=false`.
- Disables the server authorization request/response handler.
- Makes local official-account and group eligibility gates return ready.
- Renders protected settings cells with the ordinary allowed appearance.
- Makes protected switch actions proceed normally and suppresses the
  authorization-required dialog.
- Does not load or install `WCLGAuthCachePoC.dylib`.
- Installs `WCGlass.plist` only as the MobileSubstrate injection filter.
- Ad-hoc signs the staged dylib with `ldid`; a deployment pipeline may replace
  that signature with its own certificate.

The recovered Objective-C skeletons and C-style pseudocode are retained under
`../WCGlass_recovered` for browsing and review. The patch builder and the exact
instruction manifest are stored under `../WCGlass_recovered/tools` and
`../WCGlass_recovered/security`.

## Build

```sh
brew install dpkg ldid xz
make package
```

The GitHub Actions run publishes two artifacts:

- `WCGlassFreeMode-package`: the installable `.deb`;
- `WCGlassFreeMode-raw-plugin`: the signed `WCGlass.dylib`, its injection plist,
  package-content listing, and SHA-256 manifest.

A `.deb` is an `ar` container. Archive viewers normally show `data.tar` at the
first level; the plugin files are inside:

```text
data.tar/Library/MobileSubstrate/DynamicLibraries/
```

## Device verification

1. Remove another package that owns the same `WCGlass.dylib` path.
2. Install the generated package.
3. Fully terminate the host process.
4. Launch again and inspect the protected feature state.

## Rollback

Reinstall the original `WCGlass.dylib` or uninstall this package, then fully
terminate and relaunch the host process.
