/* Mach-O initializer 26/33
 * Address: 0x7c398; original size: 88 bytes
 * Status: ok; elapsed: 0.245s
 */

void sub_7c398(void)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    long long v9;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v9 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    _objc_msgSend(v9, SEL_setBool_forKey_, 0, g_4a3a00);
}
