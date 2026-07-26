# WCLG Free Mode Hook

这是与原版 `WCGlass.dylib` 分离的前置 Hook 插件。它不会把修改写入
WCGlass 文件，而是在运行时安装三层拦截：

1. 提前接管授权相关 `NSUserDefaults` 读写并压制“封禁”弹窗。
2. WCGlass 映射后接管 `WCLGConfig` 的授权状态、特性集合和写回。
3. 接管设置页的授权颜色、公众号检查和授权提示。
4. 在 WCGlass 的可写数据段中同步授权、封禁、特性集合和总开关原子镜像。
5. 强制设置页开关可交互，并在 `toggleSwitch:` 返回后重新确认开启状态。

针对当前恢复样本，还会按照架构安装三个 C 函数 Hook：

| 路径 | arm64 | arm64e |
| --- | ---: | ---: |
| 服务器授权响应 | `0xC7640` | `0xCF6A0` |
| 群授权门控 | `0xD30F4` | `0xDCACC` |
| 公众号授权门控 | `0xDB478` | `0xE3AB0` |

版本绑定信息：

```text
原版 FAT SHA256:
76BA59A63BA3606753CDDD7C63C557D9A3765BAECB85FE3D1F39384E62227320

arm64 UUID:
49197697-5E57-3CD4-8A02-475AB68ED7AA

arm64e UUID:
6DC8031F-9EA1-36B5-87CC-D7C30042DBF8
```

运行时会先校验当前 slice 的 UUID。UUID 不匹配时跳过版本相关的 C
函数偏移，保留键名和 Objective-C 方法级 Hook，防止错误偏移造成崩溃。

`0.2.0` 增加的原子镜像处理解决了仅修改配置缓存后，专用 getter
（例如 `liquidGlassEnabled`）仍然直接读取旧全局值的问题。

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
[WCLGFreeModeHook] offset hooks installed
[WCLGFreeModeHook] WCLGConfig hooks installed
[WCLGFreeModeHook] settings authorization hooks installed
[WCLGFreeModeHook] authorization cache seed applied
```

导出函数 `WCLGFreeModeHookStatus()` 返回各层 Hook 的状态位和当前
WCGlass image/slide，便于 LLDB 或运行时诊断。

## 回滚

移除 `000WCLGFreeModeHook.dylib` 和对应 plist，并从自签主程序移除它的
加载命令；原版 `WCGlass.dylib` 始终作为独立文件保留。
