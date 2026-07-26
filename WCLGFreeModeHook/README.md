# WCLG Free Mode Hook

这是与原版 `WCGlass.dylib` 分离的前置 Hook 插件。它不会把修改写入
WCGlass 文件，而是在运行时安装三层拦截：

1. 提前接管授权相关 `NSUserDefaults` 读写并压制“封禁”弹窗。
2. WCGlass 映射后接管 `WCLGConfig` 的授权状态、特性集合和写回。
3. 接管设置页的授权颜色、公众号检查和授权提示。
4. 在 WCGlass 的可写数据段中只同步已确认类型的标量镜像：授权、封禁、
   到期时间、验证时间和总开关。
5. 保留原设置逻辑执行，只解除设置页的交互禁用并记录开关最终状态。

`0.3.0` 起已撤销旧版的三个 C 函数 Hook：

| 路径 | arm64 | arm64e |
| --- | ---: | ---: |
| 服务器授权响应 | `0xC7640` | `0xCF6A0` |
| 群授权门控 | `0xD30F4` | `0xDCACC` |
| 公众号授权门控 | `0xDB478` | `0xE3AB0` |

重新分析确认它们的长度分别为 3804、12108、2428 字节（arm64），
都不是单一布尔 getter。它们还承担响应落盘、缓存镜像刷新、本地账号扫描
等副作用；整段替换会造成设置界面可见但插件执行层没有完成初始化。

版本绑定信息：

```text
原版 FAT SHA256:
76BA59A63BA3606753CDDD7C63C557D9A3765BAECB85FE3D1F39384E62227320

arm64 UUID:
49197697-5E57-3CD4-8A02-475AB68ED7AA

arm64e UUID:
6DC8031F-9EA1-36B5-87CC-D7C30042DBF8
```

运行时会先校验当前 slice 的 UUID。UUID 匹配时才写入已确认类型的标量
镜像；原始 C 授权响应和本地检查函数在所有情况下都保持执行。

`0.3.0` 同时恢复原版 `shouldForceTrueForUserDefaultsKey:` 策略，写入真实
总开关键 `xg_liquid_glass_enabled`，并使用原版全功能标记
`__wclg_all__`。对象型全局值由原插件自己的缓存刷新逻辑管理，避免直接写
裸 Objective-C 指针。

`0.4.0` 修正自签静态注入下的加载时序问题。WCGlass 有 22 个功能构造函数
会在 `liquidGlassEnabled == false` 时提前返回，因而跳过其中 378 次
`MSHookMessageEx` 注册。伴随 Hook 若晚于 WCGlass 构造函数启动，事后把总
开关显示成开启也不会补回这些执行 Hook。新版检查第一个原始 IMP 槽：

- 槽已写入：说明原版功能构造函数已经完成，跳过补跑；
- 槽为空：在状态镜像就绪后按当前架构补跑 22 个受门控构造函数；
- 所有函数地址均先通过 UUID 和 `__TEXT` 范围验证；
- arm64e 调用地址会先生成经过 PAC 签名的函数指针。

## 构建

```sh
export THEOS=$HOME/theos
make clean package FINALPACKAGE=1
```

构建输出位于 `packages/`。安装后文件名以 `000` 开头，使 Substrate
尽量先加载 companion hook：

```text
/Library/MobileSubstrate/DynamicLibraries/000WCLGFreeModeHook.dylib
/Library/MobileSubstrate/DynamicLibraries/000WCLGFreeModeHook.plist
```

## 自签注入顺序

自签 IPA 场景需要把两个 dylib 都注入主程序，并保证 Mach-O
`LC_LOAD_DYLIB` 的顺序为：

```text
000WCLGFreeModeHook.dylib
WCGlass.dylib
```

插件文件名排序只影响 Substrate 加载器；静态注入时以主程序加载命令顺序为准。

## 日志

成功启动时应依次出现：

```text
[WCLGFreeModeHook] constructor
[WCLGFreeModeHook] early hooks: defaults=1 alertGuard=1
[WCLGFreeModeHook] detected .../WCGlass.dylib
[WCLGFreeModeHook] WCLGConfig hooks installed
[WCLGFreeModeHook] settings authorization hooks installed
[WCLGFreeModeHook] authorization cache seed applied
[WCLGFreeModeHook] feature initializer replay complete: count=22 installed=1
```

导出函数 `WCLGFreeModeHookStatus()` 返回各层 Hook 的状态位和当前
WCGlass image/slide，便于 LLDB 或运行时诊断。

## 回滚

移除 `000WCLGFreeModeHook.dylib` 和对应 plist，并从自签主程序移除它的
加载命令；原版 `WCGlass.dylib` 始终作为独立文件保留。
