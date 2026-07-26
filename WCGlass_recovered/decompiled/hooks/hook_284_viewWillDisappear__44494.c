/* Hook replacement 284/418
 * Selectors: SEL_viewWillDisappear_
 * Address: 0x44494; original size: 312 bytes
 * Status: ok; elapsed: 0.379s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_44494(long long a0, unsigned long a1, unsigned long a2)
{
    long long count;  // x0
    long long v14;  // x19
    unsigned long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    char *v11;  // [bp-0x10]
    char v12;  // [bp+0x0]

    v11 = &v12;
    sub_39ed0c();
    g_57c508(a0, a1, a2);
    sub_4e100(a0);
    count = _objc_msgSend(a0, SEL_transitionCoordinator);
    v14 = _objc_retainAutoreleasedReturnValue(count, SEL_transitionCoordinator);
    if (v14)
    {
        _objc_initWeak(&v10, a0);
        v5 = &g_600748;
        v6 = 0xc2000000;
        v7 = 320424;
        v8 = &g_4a0e08;
        _objc_copyWeak(&v9, &v10);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 320492;
        v3 = &g_4a0e08;
        _objc_copyWeak(&v4, &v10);
        _objc_msgSend(v14, SEL_animateAlongsideTransition_completion_, &v5, &v0);
        _objc_destroyWeak(&v4);
        _objc_destroyWeak(&v9);
        _objc_destroyWeak(&v10);
    }
    else
    {
        sub_66ddc(a0, 1);
    }
    return _objc_release(v14);
}
