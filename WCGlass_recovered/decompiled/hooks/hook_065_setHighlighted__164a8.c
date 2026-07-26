/* Hook replacement 65/418
 * Selectors: SEL_setHighlighted_
 * Address: 0x164a8; original size: 284 bytes
 * Status: ok; elapsed: 0.516s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_164a8(long long a0, unsigned long a1, char a2)
{
    char v8;  // x20
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    g_57b678();
    _objc_retain(a0);
    if (!(g_582f88 & 1) || !(g_582f8b & 1))
        return _objc_release(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
    if (v8)
    {
        sub_1389b0(a0);
        sub_18a44(a0, v8);
        if (a2 && sub_127040() - 2 >= 3)
        {
            _objc_initWeak(&v5, a0);
            v0 = &g_600748;
            v1 = 0xc2000000;
            v2 = 101796;
            v3 = &g_4a0920;
            _objc_copyWeak(&v4, &v5);
            _dispatch_async(&g_600770, &v0);
            _objc_destroyWeak(&v4);
            _objc_destroyWeak(&v5);
        }
    }
    _objc_release(v8);
    return _objc_release(a0);
}
