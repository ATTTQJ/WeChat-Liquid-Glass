/* Recovered pseudocode
 * Objective-C: -[WCLGCapsuleSearchGestureTarget handleLongPress:]
 * Address: 0x2165b8; original size: 468 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.867s
 */

void sub_2165b8(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v13;  // d13
    unsigned long long v14;  // d12
    unsigned long long v23;  // x30
    long long count;  // x0
    long long len;  // x20
    long long count1;  // x0
    unsigned long long v27;  // d0
    long long count2;  // x0
    unsigned long v29;  // 4129
    long long v30;  // x0
    unsigned long long v15;  // d11
    unsigned long long v16;  // d10
    unsigned long long v17;  // d9
    unsigned long long v18;  // d8
    unsigned long long v19;  // x22
    unsigned long long v20;  // x21
    unsigned long long v21;  // x20
    unsigned long long v22;  // x19
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    char *v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    char v12;  // [bp+0x0]

    v0 = v13;
    v1 = v14;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = &v12;
    v11 = v23;
    _objc_retain(a2);
    if (_objc_msgSend(a2, SEL_state) == 1 && (g_582f88 & 1) && (g_582fc3 & 1) && (g_582fc4 & 1))
    {
        count = _objc_msgSend(a2, SEL_view);
        len = _objc_retainAutoreleasedReturnValue(count, SEL_view);
        count1 = _objc_msgSend(g_4c41c8, SEL_class);
        if (_objc_msgSend(len, SEL_isKindOfClass_, count1))
        {
            _objc_msgSend(a2, SEL_locationInView_, len);
            if (((char)_CGRectIsNull(sub_21678c(len, len, 0), len, 0) & 1) || ((char)_CGRectIsEmpty() & 1))
            {
                count2 = _objc_msgSend(len, SEL_bounds);
                _CGRectGetWidth(count2, SEL_bounds);
                v29 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v27, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v27, 0x3ff0000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v27, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v27, 0x3ff0000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v27, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v27, 0x3ff0000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                v30 = _objc_msgSend();
                _CGRectGetHeight(v30, SEL_bounds);
            }
            else
            {
                _CGRectInset();
            }
            if (_CGRectContainsPoint())
                sub_238e64();
        }
        _objc_release(len);
    }
    _objc_release();
    return;
}
