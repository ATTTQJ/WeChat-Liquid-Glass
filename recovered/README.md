# WeChatLiquidGlass Recovery Pack

This directory contains static recovery artifacts and a maintainable source
reconstruction for `WeChatLiquidGlass(3).dylib`.

The original source cannot be restored byte-for-byte from a compiled Mach-O.
The recoverable parts are:

- exported/local symbol names
- Objective-C classes, selectors, type encodings, ivar/property metadata
- constant NSString values and NSUserDefaults keys
- obfuscated strings recovered from XOR decode blocks
- high-level control flow and module boundaries

Generated artifacts live in `analysis/`.

Important files:

- `analysis/01_symbols.txt`: Mach-O symbols
- `analysis/02_global_cfstrings.txt`: global NSString constants
- `analysis/05_interesting_xor_strings.md`: decoded hidden strings
- `analysis/09_class_method_index.md`: recovered class and selector map
- `WeChatLiquidGlassRecovered/`: hand-written source reconstruction scaffold

The current source scaffold is now a V1 local-development reconstruction. It
includes the configuration core, recovered authorization flow, a first settings
UI, developer-preview switch editing, and a shake-to-open runtime entry inside
WeChat. The first visual reconstruction passes restore the common TabBar glass
host, native TabBar background cleanup, title hiding, the right-side search
capsule shell, and a conservative chat-bottom glass hook for likely input tool
views. A conservative chat-bubble glass pass is also present, including the
recovered function names for applying/removing bubble glass, suppressing native
bubble image backgrounds, maintaining z-order, and toggling a first flow
gradient. The full search-tab overlay and exact WeChat-private message hooks
still need to be rebuilt from the class/method index and decompiled function
bodies.
