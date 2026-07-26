/* Hook replacement 83/418
 * Selectors: SEL_traitCollectionDidChange_
 * Address: 0x1dfc0; original size: 212 bytes
 * Status: ok; elapsed: 0.458s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1dfc0(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long count;  // x0
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    unsigned long long count1;  // x0
    long long count2;  // x0
    long long v18;  // x0
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    _objc_retain(a2);
    g_57b850(a0, a1, a2);
    count1 = _objc_msgSend(a2, SEL_userInterfaceStyle);
    count2 = _objc_msgSend(a0, SEL_traitCollection);
    v18 = _objc_retainAutoreleasedReturnValue(count2, SEL_traitCollection);
    count = _objc_msgSend(v18, SEL_userInterfaceStyle);
    _objc_release(v18);
    if (count1 != count)
        sub_19874c(a0);
    if ((g_582f88 & 1) && (g_583068 & 1))
        sub_197d8();
    _objc_release();
    return;
}
