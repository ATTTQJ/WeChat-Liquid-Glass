# WCLG Free Mode Hook — WCGlass 3.0.2-5

`000WCLGFreeModeHook` is a companion tweak for the recovered **WCGlass 3.0.2-5**
sample. It leaves `WCGlass.dylib` unchanged and activates its WCGlass-specific
paths only after the loaded architecture slice matches the exact UUID binding.

## Version binding

| Slice | UUID | Size | SHA-256 |
| --- | --- | ---: | --- |
| arm64 | `C7960367-4891-3799-A150-6B0CBA454BF9` | 8,898,272 | `6820C5C230F5AAC92491B3F0BB65F1105808C699863C005CA22F6473846F7A4F` |
| arm64e | `EBA183AA-4180-38D3-875A-1B9DD35CC8C3` | 9,014,624 | `A6CC749DFE0ED60BC34D8C1AD3C66DD928DF06A58A5DE2D3176E3569209A3FE1` |

FAT SHA-256: `EB17F640FAC3CF3B1A53FF81467E2A0228EB64D3DF95B31137013F518E779E90`.
A UUID mismatch keeps all WCGlass cache normalization and native calls inactive.

## Runtime behavior

- Hooks the stable `WCLGConfig` selector surface, calls each original cache
  method first, then normalizes the cache snapshot and invokes the original
  `refreshAtomicMirrors` implementation.
- Uses the recovered authorization feature set (`__wclg_all__` plus all twelve
  feature keys), allowed/not-hard-blocked state, valid-until timestamp, and
  local eligibility mirrors.
- Synchronizes the settings authorization color/background/ready/toggle paths;
  this avoids a display-only state that leaves the functional gate unchanged.
- Does **not** replace the recovered native authorization response, local scan,
  or cache-persistence functions.
- Replays only the gated initializers whose own recovered original-IMP probe is
  still zero. Version 3.0.2-5 has 36 mapped initializers; 23 inspect the master
  switch, 21 register hooks, and two (`35`, `36`) do not have hook registrations.
  arm64e calls are re-signed with PAC before invocation.

The architecture-specific binding table is
[`WCGlass3025Bindings.h`](WCGlass3025Bindings.h). It is generated from the
recovery map's initializer offsets and original slots, not from prior-version
address translation.

## Local verification

```powershell
python WCLGFreeModeHook/tools/verify_wcglass_3025.py `
  --recovery WCGlass_recovered_2026-08 `
  --sample WCGlass_recovered_2026-08/input/WCGlass.dylib `
  --output WCLGFreeModeHook/verification-3.0.2-5.json
```

The verifier checks the FAT and thin-slice UUID/SHA-256 values, all 14 selector
anchors, success-state signature counts (arm64 `49/23`, arm64e `50/23`), the
runtime → UI → group → official → refresh chain metadata, and the `488/488` /
`498/498` recovered hook maps. It also rejects the old global offsets and
old single-slot/22-initializer replay model.

A source-only check, used in CI when the sample is intentionally not tracked,
is available with `--binding-only`.

## Build

```sh
export THEOS=$HOME/theos
cd WCLGFreeModeHook
make clean package FINALPACKAGE=1
```

The resulting package contains:

```text
/Library/MobileSubstrate/DynamicLibraries/000WCLGFreeModeHook.dylib
/Library/MobileSubstrate/DynamicLibraries/000WCLGFreeModeHook.plist
```

CI verifies the package contains both `arm64` and `arm64e`, emits SHA-256 sums,
and uploads the package, raw plugin files, and binding report.

## Rollback

Remove `000WCLGFreeModeHook.dylib` and its plist from the DynamicLibraries
directory (or remove the companion load command in a statically injected app),
then restart the host process. The original `WCGlass.dylib` is never modified.
