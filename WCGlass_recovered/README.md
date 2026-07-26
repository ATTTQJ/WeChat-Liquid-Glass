# WCGlass 源码恢复工程

本目录由 `WCGlass.dylib` 静态分析生成，目标是提供可浏览、可检索、可继续标注的 Objective-C/C 近似源码。

## 已恢复内容

- FAT Mach-O 的 `arm64` 与 `arm64e` 独立切片。
- 78 个 Objective-C 类、1884 个去重方法声明/骨架和 467 个实例变量。
- 6032 个函数的地址、大小、基本块、调用信息及符号数据。
- 33 个 Mach-O 初始化函数的完整伪代码。
- 427 条可解析的 `MSHookMessageEx` 注册记录，对应 418 个唯一替换函数。
- 411 个 Hook 替换函数的 C 风格伪代码；7 个后端异常函数附 ARM64 汇编。
- 79 个代表性类方法：72 个 C 风格伪代码，7 个 ARM64 汇编。
- Objective-C selector 和 CFString 地址注释。

## 目录

| 路径 | 内容 |
|---|---|
| `src/` | 78 个类的 `.m` 结构骨架与 `RecoveredClasses.h` |
| `decompiled/hooks/` | 全量 Hook 替换函数 |
| `decompiled/initializers/` | 33 个加载初始化函数 |
| `decompiled/*.c` | 每个类选出的代表性方法 |
| `decompiled/fallback_disassembly/` | 代表性方法的汇编回退 |
| `analysis/hook_map.csv` | initializer、selector、替换地址、原实现槽位映射 |
| `analysis/method_map.csv` | 类、方法、地址、大小、基本块映射 |
| `analysis/objc_headers.h` | Rizin 直接导出的 Objective-C 接口 |
| `analysis/*.json` | 段、符号、类、函数、字符串、重定位等原始分析数据 |
| `security/` | 授权缓存审计、可复现篡改测试、修复代码骨架与测试结果 |
| `slices/` | 提取后的两个 Mach-O 切片 |
| `tools/` | 可重复执行的恢复脚本 |

## 阅读顺序

1. 阅读 `ANALYSIS_REPORT.md` 了解模块划分和恢复范围。
2. 用 `analysis/hook_map.csv` 查找目标 selector 对应的 Hook 地址。
3. 在 `decompiled/hooks/manifest.json` 中找到具体伪代码文件。
4. 对自有类先查 `src/RecoveredClasses.h`，再查 `decompiled/manifest.json`。
5. 需要精确核对时，使用地址在 `slices/WCGlass.arm64.dylib` 中复查机器码。

## 授权缓存安全审计

审计结论与修复优先级见
`security/AUTH_CACHE_SECURITY_REPORT.md`。隔离回归测试证明旧缓存模型可在不改变
Token 的情况下由拒绝翻转为允许；测试记录位于 `security/TEST_RESULTS.txt`。

## 精度说明

编译产物未保存原始注释、宏、局部变量名和部分类型信息。`.m` 文件主要恢复类结构；`.c` 文件恢复控制流、调用关系、常量引用和 selector。所有伪代码都保留原始虚拟地址，便于继续人工重命名和类型修正。
