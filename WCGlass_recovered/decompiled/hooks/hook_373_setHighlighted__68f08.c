/* Hook replacement 373/418
 * Selectors: SEL_setHighlighted_
 * Address: 0x68f08; original size: 392 bytes
 * Status: ok; elapsed: 0.453s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_68f08(long long a0, unsigned long a1, char a2)
{
    unsigned long long v8;  // x0
    long long v9;  // x0
    long long count;  // x0
    unsigned long long count1;  // x0
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    g_57ccb0();
    v8 = sub_7409c(a0);
    if (!(unsigned int)v8)
    {
        return v8;
    }
    else if (!(g_582f88 & 1))
    {
        return v8;
    }
    else if (!(g_582fc2 & 1))
    {
        return v8;
    }
    else if (!(g_582fe8 & 1))
    {
        return v8;
    }
    else if (sub_74554())
    {
        v9 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4d2690), &g_4d2690);
        count = _objc_msgSend(g_4c4088, SEL_class);
        if (_objc_msgSend(v9, SEL_isKindOfClass_, count))
            _objc_msgSend();
        sub_76150(a0);
    }
    else
    {
        count1 = _objc_msgSend(a0, SEL_wclg_applySMSHomeAddIconIfNeeded);
        if (!a2)
            return count1;
        _objc_initWeak(&v5, a0);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 497128;
        v3 = &g_4a0920;
        _objc_copyWeak(&v4, &v5);
        _dispatch_async(&g_600770, &v0);
        _objc_destroyWeak(&v4);
        return _objc_destroyWeak(&v5);
    }
}
