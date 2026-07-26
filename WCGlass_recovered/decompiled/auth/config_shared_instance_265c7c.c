/* Authorization path recovery
 * Label: config_shared_instance
 * Address: 0x265c7c; size: 116
 * Status: ok; elapsed: 0.23s
 */

void sub_265c7c(unsigned long long a0)
{
    unsigned long long v8;  // x30
    unsigned long v9;  // 4158
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    char *v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v5 = &v7;
    v6 = v8;
    v0 = &g_600740;
    v1 = 0xd0800000;
    v2 = 2514160;
    v3 = &g_4a0d88;
    v4 = a0;
    v9 = arm64g_calculate_condition(18, g_57fc40, 1, 0);
    if ((char)v9)
        _dispatch_once(&g_57fc40, &v0);
}
