# WCGlass 授权缓存漏洞源码复现方案

## 1. 修改目标

新增源码：

`src/WCLGAuthCachePoC.m`

该文件不改原授权函数，而是在 dylib 初始化时通过原有 `WCLGConfig` 存储接口写入
授权缓存。这样可以验证原始 `0xc1a84` 缓存装载函数是否会把本地可修改值当作服务端
授权事实。

PoC 默认启用：

```objc
#define WCLG_AUTH_CACHE_POC_ENABLED 1
```

验证结束后可设置为 `0`，或从编译目标中移除该文件。

## 2. 修改的缓存字段

| 字段 | PoC 值 | 目的 |
|---|---:|---|
| `FLGUnifiedServerAuthAllowed` | `YES` | 强制授权结果为允许 |
| `FLGUnifiedServerAuthHardBlocked` | `NO` | 清除本地硬封禁状态 |
| `FLGUnifiedServerAuthExpiresAt` | 当前时间 + 30 天 | 通过本地过期检查 |
| `FLGUnifiedServerAuthVerifiedAt` | 当前时间 | 模拟刚完成验证 |
| `FLGUnifiedServerAuthFeatures` | `liquid_glass`, `home_groups` | 提供签名外的功能声明 |
| `denied_features` | 空数组 | 清空本地拒绝功能集 |
| `WCLGLocalOfficialOK` | `YES` | 通过本地官方号资格缓存 |
| `WCLGLocalGroupOK` | `YES` | 通过本地群组资格缓存 |
| `WCLGLocalAuthScannedAt` | 当前时间 | 避免立即重扫覆盖 |
| `WCLGLocalGroupScannedAt` | 当前时间 | 避免立即重扫覆盖 |

PoC 有意保持以下字段不变：

- `FLGUnifiedServerAuthToken`
- `WCLGLocalWXID`
- `FLGUnifiedServerAuthDeviceID`

因此可以单独验证“修改缓存标量、但没有生成新 Token”是否足以让客户端进入授权状态。

## 3. 写入路径

每个值同时写入两层：

```objc
[NSUserDefaults.standardUserDefaults setObject:value forKey:key];
```

以及：

```objc
[[WCLGConfig sharedConfig] setCachedObject:value forKey:key];
```

第二条调用使用 `objc_msgSend` 动态执行，原因是恢复工程中的类声明只有近似类型。
`setCachedObject:forKey:` 对应原函数 `0x28bc9c`，会同时更新 WCLGConfig 内存字典、
dirty-key 集合和原子的配置镜像。

写入后调用：

```objc
[config flush];
[config refreshAtomicMirrors];
```

这使当前进程和下一次冷启动都能观察到修改。

## 4. 初始化时序

源码通过 constructor 自动运行：

```objc
__attribute__((constructor))
static void WCLGAuthCachePoCInitialize(void);
```

执行三次：

1. dylib 装载时立即写入；
2. 主队列开始运行后再次写入；
3. 两秒后再次写入。

重复执行用于覆盖 `WCLGConfig` 晚于 constructor 创建的情况。缓存备份仅在第一次执行时
建立，后续重试不会覆盖原始备份。

## 5. 接入工程

### Theos / Logos 工程

把文件加入编译源文件列表：

```make
WCGlass_FILES += src/WCLGAuthCachePoC.m
WCGlass_FRAMEWORKS += Foundation
WCGlass_CFLAGS += -fobjc-arc
```

如果项目使用通配符收集 `.m`，确认新文件已出现在实际编译命令中即可。

### Xcode 工程

1. 将 `src/WCLGAuthCachePoC.m` 添加到工程；
2. 在 File Inspector 勾选 dylib target；
3. 确认 target 链接 `Foundation.framework`；
4. 确认支持 Objective-C blocks；
5. 编译时保留 `WCLG_AUTH_CACHE_POC_ENABLED=1`。

PoC 没有新增第三方依赖。

## 6. 实机验证步骤

1. 先保留设备上原始授权状态的截图或日志。
2. 编译包含 PoC 的 dylib。
3. 替换测试设备上的插件并完成签名处理。
4. 启动一次宿主进程，等待日志出现：

   ```text
   [WCGlass/AuthCachePoC] applied: allowed=1 hardBlocked=0 ... tokenChanged=0
   ```

5. 完全终止宿主进程。
6. 第二次冷启动。
7. 检查原先受授权限制的 `liquid_glass` 和 `home_groups` 功能。
8. 同时确认账号仍为原 wxid，Token 没有被替换。

若第二次冷启动进入授权状态，即复现了报告中的信任边界问题：客户端接受了没有服务端
签名绑定的本地授权缓存。

## 7. 运行时检查

源码导出了状态函数：

```objc
NSDictionary *state = WCLGAuthCachePoCStatus();
NSLog(@"PoC state = %@", state);
```

返回值包括全部目标字段，以及：

- `token_present`
- `backup_present`

## 8. 回滚

PoC 第一次运行前会把原值保存到：

```text
WCGlassAuthCachePoCBackupV1
```

可在调试菜单或临时代码中调用：

```objc
extern void WCLGAuthCachePoCRestore(void);
WCLGAuthCachePoCRestore();
```

回滚函数会：

1. 恢复原来存在的字段；
2. 删除原来不存在的字段；
3. 删除 PoC 备份；
4. flush 并使 WCLGConfig 内存缓存失效；
5. 重建原子配置镜像。

日志应出现：

```text
[WCGlass/AuthCachePoC] original cache restored
```

随后完全终止并重新启动宿主进程。

## 9. 判定矩阵

| 结果 | 含义 |
|---|---|
| 冷启动后功能解锁，Token 未变 | 缓存完整性漏洞复现成功 |
| UI 解锁但实际功能仍拒绝 | UI 门控与执行门控不一致，需要继续定位执行点 |
| 当前启动不生效，第二次冷启动生效 | 原始授权全局状态只在启动时从缓存装载 |
| 写入后很快恢复为拒绝 | 在线刷新覆盖本地值，可断网测试离线缓存装载 |
| 功能只部分解锁 | `Features` 还需要补充实际服务端使用的功能标识 |
| 日志显示 WCLGConfig 不存在 | 新文件未链接进目标或类加载顺序异常 |

## 10. 修复后的反向测试

完成服务端签名信封修复后，保留该 PoC 作为回归用例。预期行为应变为：

- 即使上述普通缓存值全部被改成允许，授权决策仍为拒绝；
- 客户端只接受服务端签名 payload；
- 修改 payload 内的 allowed、wxid、device、features、expires_at 任一字节都会验签失败；
- 旧缓存字段仅用于迁移清理，不参与功能门控。

