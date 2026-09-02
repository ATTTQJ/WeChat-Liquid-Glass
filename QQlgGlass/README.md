# QQlg input glass

The uploaded QQ 9.3.35 probe log confirms the input hierarchy:

- `C2CAIOChatViewController`
- `NTAIOChat.NTAIOShortcutBarBaseView` (the 126-point bottom input container)
- `AIOLib.AIOBaseBarView` (the 92-point active input and tool row)
- `NTBaseAIO.NTAIOInputRichAndTextView` (the editable text view)

`QQlgGlass.dylib` hooks only `NTAIOShortcutBarBaseView -layoutSubviews`.
It adds one non-interactive, idempotent blur/tint/highlight layer at subview
index zero. QQ continues to own every existing control, hit target, input
responder, layout, and keyboard animation.

## Test build

Embed `QQlgGlass.dylib` in the app bundle's `Frameworks` directory, register
the `@rpath/QQlgGlass.dylib` load command, and re-sign the complete test bundle
using the same signing procedure as the probe build. Use **either** the probe
or this visual dylib for the first visual test, not both together.

After testing a chat with keyboard shown/hidden, multiline input, dark/light
appearance, and a second conversation, export
`Documents/QQlg/QQlgGlass.log` and provide a screenshot of the chat input area.
Remove the dylib load command and re-sign to roll the visual change back.
