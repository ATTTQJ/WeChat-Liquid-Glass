/* Hook replacement 19/418
 * Selectors: SEL_viewDidAppear_
 * Address: 0x86a8; original size: 240 bytes
 * Status: ok; elapsed: 0.316s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_86a8(long long a0)
{
    long long v9;  // x0
    long long v10;  // x0
    unsigned long long count;  // x0
    long long t;  // x0
    unsigned long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    char *v7;  // [bp-0x10]
    char v8;  // [bp+0x0]

    v7 = &v8;
    g_57b350();
    v9 = _objc_getAssociatedObject(a0, g_4c7068);
    v10 = _objc_retainAutoreleasedReturnValue(v9, g_4c7068);
    count = _objc_msgSend(v10, SEL_integerValue);
    _objc_release(v10);
    _objc_initWeak(&v6, a0);
    t = _dispatch_time(0, 500000000);
    v0 = &g_600748;
    v1 = 0xc2000000;
    v2 = 36376;
    v3 = &g_4a0950;
    _objc_copyWeak(&v4, &v6);
    v5 = count;
    _dispatch_after(t, &g_600770, &v0);
    _objc_destroyWeak(&v4);
    return _objc_destroyWeak(&v6);
}
