/* Hook replacement 85/418
 * Selectors: SEL_bubbleName
 * Address: 0x1e19c; original size: 252 bytes
 * Status: ok; elapsed: 0.484s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1e19c(long long a0)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x19
    long long v13;  // x20
    char v14;  // x0
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = &v6;
    v5 = v11;
    v12 = _objc_retainAutoreleasedReturnValue(g_57b860());
    if ((g_582f88 & 1) && (g_583068 & 1))
    {
        v13 = _objc_retainAutoreleasedReturnValue(sub_18e98());
        v14 = _objc_retainAutoreleasedReturnValue(sub_272b0(v13, v12), v12);
        _objc_retain();
        _objc_release(v14);
        _objc_release(v13);
    }
    else
    {
        _objc_retain(v12);
    }
    _objc_release(v12);
}
