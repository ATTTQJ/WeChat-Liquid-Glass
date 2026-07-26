/* Hook replacement 7/418
 * Selectors: SEL_viewDidDisappear_
 * Address: 0x6620; original size: 100 bytes
 * Status: ok; elapsed: 0.252s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_6620(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57b2a8();
    _objc_retain(a0);
    if (a0)
    {
        v8 = _objc_loadWeakRetained(&g_57b290);
        _objc_release(v8);
        if (v8 != a0)
            goto LABEL_6674;
    }
    _objc_storeWeak(&g_57b290, 0);
LABEL_6674:
    _objc_release();
    return;
}
