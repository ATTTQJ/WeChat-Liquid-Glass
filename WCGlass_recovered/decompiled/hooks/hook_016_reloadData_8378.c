/* Hook replacement 16/418
 * Selectors: SEL_reloadData
 * Address: 0x8378; original size: 244 bytes
 * Status: ok; elapsed: 0.325s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_8378(long long a0, unsigned long a1)
{
    unsigned int v8;  // w0
    unsigned long long v9;  // x0
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    if (sub_894c() && sub_8c00(a0))
    {
        v8 = sub_8ca8(a0);
        v9 = g_57b338(a0, a1);
        if (!v8)
            return v9;
        _objc_initWeak(&v5, a0);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 36168;
        v3 = &g_4a0920;
        _objc_copyWeak(&v4, &v5);
        _dispatch_async(&g_600770, &v0);
        _objc_destroyWeak(&v4);
        return _objc_destroyWeak(&v5);
    }
    goto g_57b338;
}
