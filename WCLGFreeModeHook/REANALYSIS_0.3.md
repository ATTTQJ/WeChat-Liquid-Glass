# 0.3.0 授权路径复核

## 现象解释

上一版能压制“已封禁”弹窗，说明前置 Hook 已加载；但总开关、授权功能和
普通功能都回弹关闭，说明失败发生在 WCGlass 自身初始化及配置镜像阶段，
不是设置页颜色阶段。

## 已确认的原版调用链

1. `0xC1A84` 从本地缓存恢复 `Allowed`、`HardBlocked`、`Features`、
   `ExpiresAt`、`VerifiedAt`、错误码和错误消息。
2. `0xC7640` 处理服务器授权响应并更新同一组缓存及全局镜像。
3. `0xD30F4`、`0xDB478` 分别位于群/公众号本地检查路径，函数内部包含
   扫描、缓存和状态传播。
4. `-[WCLGSettingsViewController officialAccountReadyForAction]` 先运行本地
   状态读取；状态不足时触发刷新，再决定是否显示提示。
5. `-[WCLGSettingsViewController toggleSwitch:]` 根据 tag 调用专用配置
   getter；任一依赖未满足都会对 UISwitch 执行 `setOn:NO`。
6. `-[WCLGConfig liquidGlassEnabled]` 直接读取总开关原子镜像，因此只改
   `NSUserDefaults` 不足以改变执行层。
7. `-[WCLGConfig shouldForceTrueForUserDefaultsKey:]` 是授权成立后功能键
   策略的一部分，固定返回假会关闭原版的自动放行路径。

## 旧版故障点

- 把 `0xC7640`、`0xD30F4`、`0xDB478` 当成纯布尔门控整段替换，连同必要
  副作用一起跳过。
- 固定覆盖 `shouldForceTrueForUserDefaultsKey:` 为假，方向与原版策略相反。
- 向对象型全局镜像直接写裸指针，绕过了原插件的 Objective-C 所有权管理。
- 使用 `"*"` 作为功能标记，而样本中的真实全功能标记为
  `"__wclg_all__"`。
- 未写入真实总开关键 `xg_liquid_glass_enabled`。

## 0.3.0 修正

- 完整保留三个 C 函数，不再安装函数入口 Hook。
- 完整保留 `shouldForceTrueForUserDefaultsKey:`。
- 缓存写入 `FLGUnifiedServerAuthFeatures = ["__wclg_all__"]`。
- 缓存写入 `xg_liquid_glass_enabled = true`。
- 只对已确认布局的标量全局镜像执行原子写入。
- 包装 `refreshAtomicMirrors` 和 `maybeUpdateMirrorForKey:value:`：先执行原
  方法，再重申标量状态。
- `toggleSwitch:` 先重申状态、执行原逻辑，再记录真实结果，不再只伪造
  UISwitch 外观。

## 安全措施判断

样本包含三层授权防护：

- 服务器返回的签名/加密验证；
- 与账号标识绑定的本地公众号及群状态缓存；
- `Allowed`、`HardBlocked`、`Features`、到期时间、验证时间和专用配置
  getter 组成的多镜像一致性检查。

加密导入的调用点主要落在服务器请求/响应和主题包加解密路径。已恢复调用图
中没有看到 `SecStaticCodeCheckValidity`、`SecCodeCheckValidity` 等代码签名
验证 API；唯一 `exit` 包装函数也没有静态调用者。因此当前证据更符合
“授权状态多层一致性 + 初始化副作用被旧 Hook 破坏”，尚未形成
“WCGlass.dylib 自身哈希失败导致总开关关闭”的证据链。
