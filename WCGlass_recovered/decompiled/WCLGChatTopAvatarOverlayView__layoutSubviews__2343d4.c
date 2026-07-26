/* Recovered pseudocode
 * Objective-C: -[WCLGChatTopAvatarOverlayView layoutSubviews]
 * Address: 0x2343d4; original size: 248 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.363s
 */

long long sub_2343d4(unsigned long a0)
{
    unsigned long v4;  // d2
    unsigned long v5;  // d3
    unsigned long v6;  // 4129
    long long count;  // x0
    long long v8;  // x0
    long long count1;  // x0
    long long v10;  // x0
    unsigned long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = a0;
    v1 = g_4c4738;
    _objc_msgSendSuper2(&v0, SEL_layoutSubviews);
    _objc_msgSend(a0, SEL_bounds);
    _objc_msgSend(a0, SEL_bounds);
    v6 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v4, v5)) >> 5 & 3 | (unsigned long long)(CmpF(v4, v5) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v4, v5)) >> 5 & 3 | (unsigned long long)(CmpF(v4, v5) & 1)) & ((unsigned long long)(char)(CmpF(v4, v5)) >> 5 & 3 | (unsigned long long)(CmpF(v4, v5) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    count = _objc_msgSend();
    v8 = _objc_retainAutoreleasedReturnValue(count, SEL_layer);
    _objc_msgSend(v8, SEL_setCornerRadius_);
    _objc_release(v8);
    count1 = _objc_msgSend(a0, SEL_layer);
    v10 = _objc_retainAutoreleasedReturnValue(count1, SEL_layer);
    _objc_msgSend(v10, SEL_setCornerCurve_, *((long long *)&g_600628));
    return _objc_release(v10);
}
