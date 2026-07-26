/* Hook replacement 307/418
 * Selectors: SEL_setShadowImage_
 * Address: 0x5a100; original size: 124 bytes
 * Status: ok; elapsed: 0.257s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_5a100(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x19
    long long v13;  // x19
    long long v14;  // x0
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
    v12 = a2;
    _objc_retain(a2);
    v13 = v12;
    if ((g_582f88 & 1))
    {
        v14 = _objc_retainAutoreleasedReturnValue(sub_43d52c());
        _objc_release(v12);
        v13 = v14;
    }
    g_57c930(a0, a1, v13);
    _objc_release();
    return;
}
