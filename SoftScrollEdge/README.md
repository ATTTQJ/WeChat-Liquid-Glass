# WCLG Soft Scroll Edge

Independent UIKit tweak that leaves the existing WeChat Liquid Glass plugin untouched and only forces `UIScrollView` edge effects to the system soft style.

## Behavior

- Injects only into `com.tencent.xin`.
- Uses runtime lookups for `UIScrollEdgeEffectStyle.softStyle`.
- Applies soft style to `topEdgeEffect` and `bottomEdgeEffect` when available.
- No-ops on older systems where the API does not exist.
- Does not modify the original Liquid Glass dylib.

## Build

```sh
make package
```
