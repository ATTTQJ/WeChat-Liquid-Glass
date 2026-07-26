/* Recovered pseudocode
 * Objective-C: -[WCLGChatTextApplyState init]
 * Address: 0x19765c; original size: 108 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.236s
 */

typedef struct struct_0 {
    char padding_0[32];
    uint128_t field_20;
} struct_0;

struct_0 * sub_19765c(unsigned long a0)
{
    struct_0 *count;  // x19
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = a0;
    v1 = g_4c4708;
    count = _objc_msgSendSuper2(&v0, SEL_init);
    if (!count)
        return count;
    *((unsigned long long *)&count->field_20) = 1 CONCAT 1;
    *((unsigned long long *)&count[1].padding_0[0]) = 1;
    _objc_storeStrong(&count[2].field_20, *((long long *)&g_6002d8));
    return count;
}
