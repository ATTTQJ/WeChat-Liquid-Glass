# QQGlassProbe

面向 QQ 9.3.35 的只读底栏诊断 dylib。它基于已静态确认的 `QQTabBarController` 与 `QQSkinTabBar`，不扫描全局 `UIView`，也不会修改 QQ 的 UI、返回值或业务逻辑。

## 记录内容

- `QQTabBarController setTabBarView:`：真实底栏实例与其父视图链。
- `QQSkinTabBar` 的背景刷新、样式切换、Tab 选中与模糊判定结果。
- `QQTabBarController setTabBarHidden:animation:`：底栏隐藏/恢复。
- 仅记录目标底栏子视图的类名、frame、透明度、隐藏状态、裁切状态与背景色；不记录聊天文本、联系人或图片内容。

日志写入 App 容器的 `Documents/QQGlassProbe/probe.log`，同时也通过 `NSLog` 输出。该目录不会作为缓存被系统主动清理，便于从电脑导出后上传到本对话。

为让 Windows 的 Apple Devices／iTunes 能显示这个目录，请在**重签后的 QQ.app 的 Info.plist** 合并以下键（不要替换整个 Info.plist）：

```xml
<key>UIFileSharingEnabled</key>
<true/>
<key>LSSupportsOpeningDocumentsInPlace</key>
<true/>
```

安装并运行 QQ 后，在 Windows 的 Apple Devices（或 iTunes）中打开该应用的“文件共享”，导出 `QQGlassProbe/probe.log`，再直接附加到此对话。我不会自动收到设备上的日志。

## 编译

在安装了 Xcode 的 macOS 终端进入本目录：

```bash
make
```

生成文件为 `build/QQGlassProbe.dylib`，目标为 arm64、iOS 15.0 及以上。

## 注入与测试顺序

1. 将 dylib 放到 `Payload/QQ.app/Frameworks/QQGlassProbe.dylib`。
2. 为 QQ 主程序新增一条 `LC_LOAD_DYLIB`，路径为 `@rpath/QQGlassProbe.dylib`。
3. 对所有嵌入 dylib、Frameworks、PlugIns 与 `QQ.app` 重新签名，再安装到测试设备。
4. 首次启动后依次进入“消息、联系人、动态、我的”，每页停留约两秒；再各切换一次主题或深浅模式（如 QQ 当前设置提供）。
5. 导出 `probe.log`。

## 下一步判定

- 若 `useBlurEffectBackground -> 1` 且子视图树中已有 `UIVisualEffectView` / QQ 的效果背景层：优先复用 QQ 原有背景路径。
- 否则，正式插件只在 `QQSkinTabBar` 已建立后的最底层背景位插入效果层，并在 `updateBackgroundViewNeedChangeStyle:` 和 `changeStyleOfTabBar:tabbarItem:` 后刷新。

不要在探针阶段将 `useBlurEffectBackground` 强制改为 `YES`；它可能是 QQ 皮肤/主题的内部开关。
