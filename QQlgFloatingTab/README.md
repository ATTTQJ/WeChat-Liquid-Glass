# QQlg floating TabBar

This first visual build targets **only** the QQ 9.3.35 home TabBar. It is based
on the confirmed `QQSkinTabBar` hierarchy and turns the native full-width
background transparent while preserving QQ's four `QQToolBar*` item views.

The plugin then places those original item views on a rounded, floating glass
island. Their original controls, badges, and handlers remain in place. The
glass island includes an adaptive system blur, tint, top reflection, hairline
border, and a selected-item glass pill when QQ exposes the selected control.

## Test

1. Embed `QQlgFloatingTab.dylib` in the app bundle's `Frameworks` folder and
   register `@rpath/QQlgFloatingTab.dylib` as a load command.
2. Re-sign the complete test bundle with the signing process used for QQ.
3. Use this dylib by itself; do not combine it with `QQGlassProbe` or either
   chat-input test dylib.
4. Test all four home tabs, badges, device rotation, a theme switch, and an
   app relaunch. Attach a home-page screenshot plus
   `Documents/QQlg/QQlgFloatingTab.log`.

The next iteration will tune margins, island height, and the selected pill from
the screenshot. Chat input work remains out of this build.
