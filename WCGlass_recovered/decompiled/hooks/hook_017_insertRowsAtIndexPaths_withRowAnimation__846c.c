/* Hook replacement 17/418
 * Selectors: SEL_insertRowsAtIndexPaths_withRowAnimation_
 * Address: 0x846c; original size: 260 bytes
 * Status: ok; elapsed: 0.314s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_846c(long long a0, unsigned long a1, long long a2, unsigned long a3)
{
    unsigned int v8;  // w23
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
    if (sub_894c(a0) && sub_8c00(a0))
        v8 = sub_8ca8(a0);
    else
        v8 = 0;
    g_57b340(a0, a1, a2, a3);
    if (!v8)
        return _objc_release(a2);
    _objc_initWeak(&v5, a0);
    v0 = &g_600748;
    v1 = 0xc2000000;
    v2 = 36168;
    v3 = &g_4a0920;
    _objc_copyWeak(&v4, &v5);
    _dispatch_async(&g_600770, &v0);
    _objc_destroyWeak(&v4);
    _objc_destroyWeak(&v5);
    return _objc_release(a2);
}
