/* Hook replacement 246/418
 * Selectors: SEL_setBackgroundView_
 * Address: 0x3eb60; original size: 204 bytes
 * Status: ok; elapsed: 0.302s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_3eb60(long long a0, long long a1, long long a2)
{
    long long v8;  // x1
    long long v9;  // x2
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    _objc_retain(a2);
    v8 = a1;
    v9 = a2;
    if (!((char)sub_3996d0(g_57c358(a0, a1, a2), a1, a2) & 1))
        return _objc_release(a2);
    _objc_initWeak(&v5, a0);
    v0 = &g_600748;
    v1 = 0xc2000000;
    v2 = 257256;
    v3 = &g_4a0920;
    _objc_copyWeak(&v4, &v5);
    _dispatch_async(&g_600770, &v0);
    _objc_destroyWeak(&v4);
    _objc_destroyWeak(&v5);
    return _objc_release(a2);
}
