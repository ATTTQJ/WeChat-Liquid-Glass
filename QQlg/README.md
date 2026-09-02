# QQlg chat-input probe

This is the first read-only diagnostic build for the QQ 9.3.35 chat page. It
does not modify the view hierarchy or application behavior. It records only
controller and view structure, frame geometry, visibility, alpha, and keyboard
transitions—never conversation content.

## Artifact

The **Build QQlg chat probe** workflow uploads `QQlgProbe-arm64`, containing
`QQlgProbe.dylib` for arm64 / iOS 15 and later.

## Test sequence

1. Embed the built dylib in the app bundle's `Frameworks` folder, register its
   `@rpath/QQlgProbe.dylib` load command, and re-sign the complete bundle with
   the signing tool used for the test build.
2. Add the two File Sharing keys from `QQlgFileSharing-Info.plist` to the app's
   existing `Info.plist`, preserving every existing key.
3. Start QQ, open two distinct chats, focus the input field, enter enough lines
   to expand it, hide/show the keyboard, and switch appearance if available.
4. Export `Documents/QQlg/QQlg.log` through the test device's app-file browser
   and attach it here.

## What to look for

Each `chat candidate` block includes the controller class, the reason it was
selected, the first editable-view ancestor chain, and a bounded view tree. The
next revision will use those confirmed names and frames to add one idempotent
glass background behind the input bar; it will not replace text fields or
buttons.
