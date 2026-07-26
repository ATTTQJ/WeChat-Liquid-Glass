/* Recovered pseudocode
 * Objective-C: -[WCLGNativeProfileTitleHitView pointInside:withEvent:]
 * Address: 0x1db720; original size: 352 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.751s
 */

unsigned long long sub_1db720(long long a0)
{
    long long count;  // x0
    long long v4;  // x1
    unsigned long long v13;  // d1
    unsigned long v15;  // 4212
    unsigned long long v16;  // w0
    unsigned long long v5;  // w0
    unsigned long long v6;  // d0
    unsigned long long v8;  // d14
    unsigned long long v9;  // d0
    unsigned long v10;  // 4129
    unsigned long long v11;  // d0
    unsigned long v12;  // d1
    unsigned long long v0;  // [bp-0x68]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    count = _objc_msgSend();
    if (_CGRectIsNull(count, SEL_wclgHitRect))
        v4 = SEL_bounds;
    else
        v4 = SEL_wclgHitRect;
    if (((char)_CGRectIsEmpty(_objc_msgSend(), v4) & 1))
        return 0;
    v5 = (unsigned int)_CGRectContainsPoint();
    if (!v5)
    {
        return v5;
    }
    else if (_objc_msgSend(a0, SEL_wclgCircularHitTest))
    {
        v0 = v6;
        v8 = v6;
        v9 = v6;
        _CGRectGetHeight(_CGRectGetWidth(_CGRectGetMidY(_CGRectGetMidX())));
        v10 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v8, v9)) >> 5 & 3 | (unsigned long long)(CmpF(v8, v9) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v8, v9)) >> 5 & 3 | (unsigned long long)(CmpF(v8, v9) & 1)) & ((unsigned long long)(char)(CmpF(v8, v9)) >> 5 & 3 | (unsigned long long)(CmpF(v8, v9) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v10)
            v11 = v8;
        else
            v11 = v9;
        v13 = (v12 - v6) * (v12 - v6) + (v6 - v0) * (v6 - v0);
        v15 = arm64g_calculate_condition(128, (((((unsigned long long)(char)(CmpF(v13, v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v13, v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF((v12 - v6) * (v12 - v6) + (v6 - v0) * (v6 - v0), v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF((v12 - v6) * (v12 - v6) + (v6 - v0) * (v6 - v0), v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000) & 1)) & ((unsigned long long)(char)(CmpF((v12 - v6) * (v12 - v6) + (v6 - v0) * (v6 - v0), v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF((v12 - v6) * (v12 - v6) + (v6 - v0) * (v6 - v0), v11 * 0x3fe0000000000000 * v11 * 0x3fe0000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v15)
            v16 = 0;
        else
            v16 = 1;
        return v16;
    }
    else
    {
        return 1;
    }
}
