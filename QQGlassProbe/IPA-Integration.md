# IPA 集成：导出探针日志

探针会写入 QQ 沙盒的 `Documents/QQGlassProbe/probe.log`。

在将 `QQGlassProbe.dylib` 注入 `Payload/QQ.app` 并重签名时，合并 `QQFileSharing-Info.plist` 中的两个键到 `Payload/QQ.app/Info.plist`：

- `UIFileSharingEnabled` = `YES`
- `LSSupportsOpeningDocumentsInPlace` = `YES`

这是对 QQ.app 原有 Info.plist 的增量修改；保留原有全部键和值。重签、安装、启动 QQ 后，可通过 Windows 的 Apple Devices 或 iTunes 的“文件共享”导出 `QQGlassProbe/probe.log`。
