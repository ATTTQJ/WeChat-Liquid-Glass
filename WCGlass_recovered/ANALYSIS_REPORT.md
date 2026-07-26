# WCGlass.dylib 静态恢复报告

## 1. 样本

- 原始文件大小：11,848,688 字节
- SHA-256：`76BA59A63BA3606753CDDD7C63C557D9A3765BAECB85FE3D1F39384E62227320`
- 格式：FAT Mach-O
- 切片：
  - `arm64`：5,867,328 字节
  - `arm64e`：5,950,448 字节
- 平台：Darwin / iOS
- 语言元数据：Objective-C
- 主要动态依赖：Foundation、UIKit、CoreGraphics、QuartzCore、Security、AVFoundation、WebKit、CydiaSubstrate

## 2. 恢复规模

| 项目 | 数量 |
|---|---:|
| 识别函数 | 6032 |
| Objective-C 类 | 78 |
| 去重类方法骨架 | 1884 |
| 实例变量 | 467 |
| 导入符号 | 440 |
| 导出符号 | 13 |
| 重定位 | 39377 |
| `__init_offsets` 初始化函数 | 33 |
| 可解析 Hook 注册 | 427 |
| 唯一 Hook 替换函数 | 418 |
| Hook C 风格伪代码 | 411 |
| Hook 汇编回退 | 7 |
| 代表性类方法 C 风格伪代码 | 72 |
| 代表性类方法汇编回退 | 7 |

## 3. 功能模块

根据类名、selector、字符串与调用关系，代码主要分为：

1. **配置与设置**
   - `WCLGConfig`
   - `WCLGSettingsViewController`
   - 大量布尔、数值、颜色和布局配置镜像。
2. **主题、资源包与下载**
   - `WCLGGlassPackage`
   - `WCLGGlassStore`
   - `WCLGGlassTheme`
   - `WCGMultiDownloader`
   - 包含主题导入、下载、解密、签名验证、预览和应用流程。
3. **聊天界面**
   - 气泡、文本颜色、头像、顶部胶囊、底部输入区、语音波形、SMS 风格控件。
4. **首页分组与置顶**
   - `WCLGHomeGroups`
   - `WCLGHomeGroupBar`
   - `WCLGHomePinnedPanelView`
   - 包含分组持久化、成员选择、全屏抽屉和胶囊布局。
5. **搜索与标签栏**
   - `WCLGSearchTabBarOverlay`
   - `WCLGSearchActionTarget`
   - 包含玻璃效果、图标状态、交互手势和标签切换。
6. **功能卡片与 WebKit**
   - `WCLGFuncCardMediaController`
   - `WCLGFuncCardPanelView`
   - 包含脚本消息、媒体控制、文档选择和卡片预览。

## 4. 加载与 Hook 机制

- `__init_offsets` 含 33 个加载函数。
- 初始化伪代码中共出现 446 次 `MSHookMessageEx` 调用痕迹。
- 其中 427 条参数完整并写入 `analysis/hook_map.csv`。
- 427 条记录合并为 418 个唯一替换函数；其机器码总量约 75 KB。
- Hook selector 覆盖视图生命周期、布局、表格数据源、头像处理、聊天背景、输入控件、导航栏、标签栏和手势识别。
- 首个初始化函数存在按字节 XOR 还原数据的逻辑，表明部分运行时字符串或类名经过轻量隐藏。

## 5. 密码学与包格式线索

导入表和关键方法伪代码显示：

- `CCCrypt`
- `CCHmac`
- `CC_SHA256` 及流式 SHA-256 API
- `SecRandomCopyBytes`
- `SecKeyCreateWithData`
- `SecKeyCreateEncryptedData`
- `SecKeyVerifySignature`
- RSA OAEP SHA-256
- RSA PSS SHA-256

关键恢复文件位于：

- `decompiled/WCLGGlassPackage__decryptContainer_themeId_wxid_signKey_glassMaster_error___2e4dd8.c`
- `decompiled/WCLGGlassPackage__importGlassData_wxid_signKey_glassMaster_iconURL_error___2e5ecc.c`
- `decompiled/WCLGGlassStore__buildRequest_requestKey_nonce___2f198c.c`
- `decompiled/WCLGGlassStore__decryptResponse_requestKey_nonce___2f3140.c`

## 6. 源码近似程度

- 类名、selector、实例变量类型和大量函数名直接来自 Objective-C 元数据，可信度较高。
- 控制流、分支、外部 API 调用和地址映射来自机器码分析。
- selector 与 CFString 已按地址自动注释。
- 参数类型、局部变量名、结构体细节和部分间接调用仍需人工校正。
- 7 个代表性方法与 7 个 Hook 函数触发反编译器的 ARM64 浮点/向量表达式异常，工程中保留逐指令汇编作为核对依据。

## 7. 后续人工精修入口

1. 从 `analysis/hook_map.csv` 为 `class_expr` 补充实际运行时类名。
2. 按 `original_slot` 将原实现函数指针重命名为 `orig_<selector>`。
3. 将 `_objc_msgSend(receiver, SEL_x, ...)` 逐步改写为 Objective-C 消息语法。
4. 对 `WCLGGlassPackage` 和 `WCLGGlassStore` 补全 NSData、NSDictionary、SecKeyRef 等参数类型。
5. 使用 `arm64e` 切片交叉验证指针认证相关分支。

