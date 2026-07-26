/* Recovered pseudocode
 * Objective-C: -[WCLGColorPickerBackgroundView layoutSubviews]
 * Address: 0x249c8c; original size: 1096 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.857s
 */

unsigned long long sub_249c8c(unsigned long a0)
{
    long long count;  // x0
    long long v30;  // x0
    char v31;  // x8
    long long count1;  // x0
    unsigned long long v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    unsigned long long v5;  // [bp-0x158]
    unsigned long long v6;  // [bp-0x150]
    unsigned long long v7;  // [bp-0x148]
    char *v8;  // [bp-0x140]
    char v9;  // [bp-0x134], Other Possible Types: int
    unsigned long v15;  // [bp-0x108]
    long long v16;  // [bp-0x100]
    char v17;  // [bp-0xf1]
    unsigned long v18;  // [bp-0xf0]
    unsigned long v19;  // [bp-0xe8]
    unsigned long v26;  // [bp-0xb0]
    char *v27;  // [bp-0x10]
    char v28;  // [bp+0x0]

    v27 = &v28;
    v26 = *((long long *)&g_600760);
    v18 = a0;
    v19 = g_4c4750;
    _objc_msgSendSuper2(&v18, SEL_layoutSubviews);
    count = _objc_msgSend(a0, SEL_traitCollection);
    v30 = _objc_retainAutoreleasedReturnValue(count, SEL_traitCollection);
    if (_objc_msgSend(v30, SEL_userInterfaceStyle) != 2)
        v31 = 0;
    else
        v31 = 1;
    v17 = v31;
    _objc_release();
    count1 = _objc_msgSend(a0, SEL_layer);
    v16 = _objc_retainAutoreleasedReturnValue(count1, SEL_layer);
    _objc_msgSend(v16, SEL_setStartPoint_);
    _objc_msgSend(v16, SEL_setEndPoint_);
    v15 = g_4c4090;
    v8 = &v9;
    v7 = 0x3fed1eb851eb851f;
    v6 = 0x3fef0a3d70a3d70a;
    v5 = 0x3fef5c28f5c28f5c;
    v4 = 0x3fedc28f5c28f5c3;
    v3 = 0x3fed70a3d70a3d71;
    v2 = 0x3fefae147ae147ae;
    v1 = 0x3feeb851eb851eb8;
    v0 = 4587366580439587226;
    v9 = 1950968704;
}
