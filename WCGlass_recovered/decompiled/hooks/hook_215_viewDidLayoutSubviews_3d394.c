/* Hook replacement 215/418
 * Selectors: SEL_viewDidLayoutSubviews
 * Address: 0x3d394; original size: 696 bytes
 * Status: ok; elapsed: 0.518s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3d394(long long a0)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x20
    long long count;  // x0
    long long count1;  // x0
    long long v24;  // x23
    long long count2;  // x0
    long long v26;  // x0
    unsigned long long v13;  // x24
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x0
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = v11;
    v1 = v12;
    v2 = v13;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v8 = &v10;
    v9 = v19;
    /* unsupported instruction */
    if (!g_57c2ac)
    {
        g_4cdf3b = g_4cdf2f ^ 217;
        g_4cdf3c = g_4cdf30 ^ 89;
        g_4cdf3d = ~(g_4cdf31);
        g_4cdf3e = g_4cdf32 ^ 121;
        g_4cdf3f = g_4cdf33 ^ 229;
        g_4cdf40 = g_4cdf34 ^ 137;
        g_4cdf41 = g_4cdf35 ^ 117;
        g_4cdf42 = g_4cdf36 ^ 83;
        g_4cdf43 = g_4cdf37 ^ 110;
        g_4cdf44 = g_4cdf38 ^ 103;
        g_4cdf45 = g_4cdf39 ^ 57;
        g_4cdf46 = g_4cdf3a ^ 114;
        g_4cdf25 = g_4cdf1b ^ 104;
        g_4cdf26 = g_4cdf1c ^ 229;
        g_4cdf27 = g_4cdf1d ^ 47;
        g_4cdf28 = g_4cdf1e ^ 161;
        g_4cdf29 = g_4cdf1f ^ 86;
        g_4cdf2a = g_4cdf20 ^ 82;
        g_4cdf2b = g_4cdf21 ^ 191;
        g_4cdf2c = g_4cdf22 ^ 1;
        g_4cdf2d = g_4cdf23 ^ 223;
        g_4cdf2e = g_4cdf24 ^ 66;
    }
    /* unsupported instruction */
    g_57c2ac = 1;
    g_57c1b8(a0);
    sub_3960b8(a0);
    v20 = _objc_msgSend(a0, SEL_valueForKey_, &g_4cdfb0);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_valueForKey_, &g_4cdfb0);
    count = _objc_msgSend(g_4c40a0, SEL_class);
    if (!((char)_objc_msgSend(v21, SEL_isKindOfClass_, count) & 1))
    {
        count1 = _objc_msgSend(a0, SEL_valueForKey_, &g_4cdf70);
        v24 = _objc_retainAutoreleasedReturnValue(count1, SEL_valueForKey_, &g_4cdf70);
        count2 = _objc_msgSend(g_4c40a0, SEL_class);
        if (_objc_msgSend(v24, SEL_isKindOfClass_, count2))
        {
            _objc_retain(v24);
            _objc_release(v21);
            v21 = v24;
        }
        _objc_release(v24);
    }
    v26 = _objc_msgSend(g_4c40a0, SEL_class);
    if (_objc_msgSend(v21, SEL_isKindOfClass_, v26))
        sub_38e0c8(v21, a0);
    _objc_release();
    return;
}
