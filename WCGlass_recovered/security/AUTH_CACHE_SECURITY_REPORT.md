# WCGlass 授权缓存安全审计

## 结论

当前授权缓存可被本地状态篡改绕过，风险等级为 **高危**。

根因不是服务端授权接口本身，而是客户端把服务端结果拆成多个普通
`NSUserDefaults` 值，并在后续启动/离线装载时直接把这些值作为授权事实。
缓存装载路径没有验证服务端签名，也没有把 `wxid`、设备、授权结果、功能集和
过期时间绑定成一个不可篡改的整体。

在隔离副本上的回归测试表明，只要同时改变授权布尔值、封禁布尔值、有效期、
本地资格布尔值和功能集，旧决策模型就会从“拒绝”变为“允许”。无需构造有效
服务端令牌。

## 核心证据

| 证据 | 地址/文件 | 影响 |
|---|---|---|
| `cachedObjectForKey:` 回退到 `standardUserDefaults` + `objectForKey:` | `0x28ba98` | 普通偏好文件成为授权数据源 |
| `boolForKey:defaultValue:` 接受任意响应 `boolValue` 的对象 | `0x28c070` | 类型校验宽松，布尔门控直接信任缓存 |
| 本地身份扫描把 `WXID`、`OfficialOK`、扫描时间分别写入缓存并 `flush` | `0xc134c` | 身份与本地资格没有完整性绑定 |
| 缓存装载读取 `Features`、`Allowed`、`HardBlocked`、时间字段并写入进程全局状态 | `0xc1a84` | 单次缓存篡改扩散到大量功能门控 |
| 服务端结果持久化分别写入 Token、时间、功能集、Allowed、HardBlocked | `0xc7640` | 授权结果被拆分为可独立修改的标量 |
| Token 仅在持久化路径出现，缓存装载路径未见 Token 验证 | `0xc7640` / `0xc1a84` | 可合成一个没有有效令牌的“已授权”缓存 |

反编译证据位于：

- `decompiled/auth/config_cached_object_for_key_28ba98.c`
- `decompiled/auth/config_bool_for_key_default_28c070.c`
- `decompiled/auth/local_authorization_snapshot_c134c.c`
- `decompiled/auth/server_authorization_cache_load_c1a84.c`
- `decompiled/auth/server_authorization_response_persist_c7640.c`

## 发现明细

### F-01：普通 NSUserDefaults 是授权事实源

**严重度：高**

`WCLGConfig.cachedObjectForKey:` 首先读取内存字典，未命中时直接调用
`[NSUserDefaults standardUserDefaults] objectForKey:`。随后又将结果放回内存缓存。
因此，偏好文件中的值既能影响冷启动，也能污染后续进程内决策。

受影响的关键字段包括：

- `FLGUnifiedServerAuthAllowed`
- `FLGUnifiedServerAuthHardBlocked`
- `FLGUnifiedServerAuthExpiresAt`
- `FLGUnifiedServerAuthVerifiedAt`
- `FLGUnifiedServerAuthFeatures`
- `FLGUnifiedServerAuthToken`
- `WCLGLocalOfficialOK`
- `WCLGLocalGroupOK`
- `WCLGLocalWXID`

### F-02：授权元组没有完整性保护

**严重度：高**

授权结果、设备/账号标识、功能列表和时间字段被分别持久化。装载时没有看到：

- 服务端公钥签名验证；
- 本地 HMAC/MAC 校验；
- 对所有字段统一计算的摘要；
- 防止字段被跨账号拼接的绑定关系。

即使网络响应在传输阶段经过加密或签名，持久化之后仍退化成可独立修改的普通值。

### F-03：缓存装载不要求有效 Token

**严重度：高**

`FLGUnifiedServerAuthToken` 在 `0xc7640` 的持久化路径中被写入，但授权缓存装载函数
`0xc1a84` 没有对应的读取/验证引用。也没有看到令牌与 `Allowed`、`Features`、
`ExpiresAt` 之间的签名关联。因此令牌无法阻止本地合成授权状态。

### F-04：账号与设备绑定可被替换

**严重度：高**

`WCLGLocalWXID`、设备标识和授权结果是分离字段。只比较可修改字符串不能构成账号
绑定。应由服务端签名载荷同时覆盖账号主体、设备主体、授权结果、功能集、签发时间、
过期时间和唯一随机数。

### F-05：本地资格检查结果也是普通布尔缓存

**严重度：中高**

`WCLGLocalOfficialOK`、`WCLGLocalGroupOK` 及扫描时间被直接写入配置。若这些字段
参与服务可用性判断，修改布尔值并把扫描时间推进到当前时间即可跳过重新扫描窗口。

### F-06：本地墙钟决定过期

**严重度：中**

缓存装载使用本地 `timeIntervalSince1970` 与缓存中的过期时间比较。单独修改
`ExpiresAt`，或者回拨系统时间，都可能延长授权。签名过期时间可以阻止直接改值，
但离线场景还应维护“已观察到的最大服务端时间”并限制离线宽限期。

### F-07：宽松的 boolValue 类型处理

**严重度：中**

`boolForKey:defaultValue:` 只检查对象是否响应 `boolValue`。应严格要求 JSON/属性表
布尔类型或固定 schema；解析异常、缺字段、类型错误一律拒绝。

### F-08：进程全局门控扩大单点失效

**严重度：中高**

缓存字段会被装入 `g_5830b8`、`g_4e05b8` 等全局状态，多个功能路径随后复用这些
值。攻击者只需影响缓存装载或这些全局变量之一，就可能同时解锁多处功能。

## 可复现验证

以下测试只修改 `security/fixtures` 下的副本，不接触实际应用容器：

```powershell
$py = 'C:\Users\daim2\.cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe'

& $py .\security\tests\auth_cache_tamper_fixture.py `
  --input .\security\fixtures\auth_cache_denied.plist `
  --output .\security\fixtures\auth_cache_tampered.plist `
  --fixture-wxid wxid_fixture `
  --feature glass_ui

& $py -m unittest discover -s .\security\tests -v
```

预期结果：

1. 原始缓存被旧模型判定为拒绝；
2. 修改后的普通缓存被旧模型判定为允许；
3. 对测试用密封信封做同样修改时，MAC 校验失败；
4. 生产实现应将测试 MAC 替换为服务端私钥签名、客户端内置公钥验签。

## 修复优先级

### P0：取消对分散布尔缓存的信任

客户端只持久化一个不透明的服务端签名信封，例如：

```json
{
  "payload": "BASE64_EXACT_SERVER_BYTES",
  "signature": "BASE64_RSA_PSS_SHA256_SIGNATURE",
  "key_id": "auth-2026-01"
}
```

服务端签名的 `payload` 至少包含：

```json
{
  "version": 1,
  "subject": "wxid_or_hash",
  "device": "device_id_or_hash",
  "allowed": true,
  "hard_blocked": false,
  "features": ["glass_ui"],
  "issued_at": 1785000000,
  "expires_at": 1785003600,
  "nonce": "unique_server_nonce"
}
```

客户端每次建立高价值功能会话时都必须：

1. 对收到的原始 payload 字节验签；
2. 严格校验字段类型和 schema 版本；
3. 比较当前 wxid 和设备绑定；
4. 检查 `hard_blocked == false`、`allowed == true`；
5. 检查签发时间、过期时间和最大允许授权时长；
6. 只使用签名 payload 内的功能列表；
7. 任一步失败即拒绝，不回退到旧布尔字段。

修复骨架见 `security/patch/WCLGAuthEnvelopeVerifier.h/.m`。

### P1：迁移与清理

- 新版本启动时删除所有旧授权布尔/时间/功能缓存；
- 不要从旧缓存迁移出“已授权”状态，只允许重新请求服务端；
- 将签名信封放入 Keychain 以减少普通文件误改，但不要把 Keychain 当作签名替代；
- 使用 Keychain 保存最大已观察服务端时间和最近 nonce，限制回滚；
- 服务端支持短有效期、撤销、设备变更和密钥轮换。

### P2：门控收敛

- 把授权判断集中到一个验证器，调用方拿到只读 `decision`；
- 不再把 `Allowed`/`HardBlocked` 镜像到 `NSUserDefaults`；
- 避免长期保存可直接改写的全局授权布尔值；
- 对高价值操作在执行点再次验证，不只在 UI 展示层判断；
- 增加篡改遥测：验签失败、账号不匹配、时间回滚、未知 key id。

## 验收标准

- 改变任何一个 payload 字节后，验签必定失败；
- 替换 wxid、设备、功能集、过期时间、allowed 任一字段后，决策必定拒绝；
- 删除、截断、类型替换、重复字段、未知 schema 均拒绝；
- 回拨系统时间不能延长已观察到的有效期；
- 旧版 `NSUserDefaults` 授权字段即使存在，也不影响决策；
- UI 门控与实际功能执行点使用同一验证结果；
- 离线授权超过签名期限后必定失效。
