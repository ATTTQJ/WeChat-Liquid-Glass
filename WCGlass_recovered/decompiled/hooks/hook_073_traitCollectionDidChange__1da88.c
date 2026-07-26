/* Hook replacement 73/418
 * Selectors: SEL_traitCollectionDidChange_
 * Address: 0x1da88; original size: 504 bytes
 * Status: ok; elapsed: 0.679s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_1da88(long long a0, unsigned long a1, long long a2)
{
    unsigned long long count;  // x0
    long long count1;  // x0
    long long v10;  // x0
    unsigned long long count2;  // x0
    long long v12;  // x0
    unsigned long long v13;  // x0
    long long v14;  // x0
    long long v15;  // x22
    unsigned long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    _objc_retain(a2);
    g_57b800(a0, a1, a2);
    if (a2)
    {
        count = _objc_msgSend(a2, SEL_userInterfaceStyle);
        count1 = _objc_msgSend(a0, SEL_traitCollection);
        v10 = _objc_retainAutoreleasedReturnValue(count1, SEL_traitCollection);
        count2 = _objc_msgSend(v10, SEL_userInterfaceStyle);
        _objc_release(v10);
        if (count == count2)
            return _objc_release(a2);
    }
    _objc_retain(a0);
    if ((g_582f88 & 1) && (g_582fbe & 1) && sub_d6040(g_4a1808) == 1194676824 && sub_20f0c(a0))
    {
        v12 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4c9a30), &g_4c9a30);
        v13 = _objc_msgSend(v12, SEL_boolValue);
        _objc_release(v12);
        if (!((char)v13 & 1))
        {
            v14 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 1);
            v15 = _objc_retainAutoreleasedReturnValue(v14, SEL_numberWithBool_, 1);
            _objc_setAssociatedObject(a0, &g_4c9a30, v15, 1);
            _objc_release(v15);
            _objc_initWeak(&v5, a0);
            v0 = &g_600748;
            v1 = 0xc2000000;
            v2 = 137064;
            v3 = &g_4a0920;
            _objc_copyWeak(&v4, &v5);
            _dispatch_async(&g_600770, &v0);
            _objc_destroyWeak(&v4);
            _objc_destroyWeak(&v5);
        }
    }
    _objc_release(a0);
    return _objc_release(a2);
}
