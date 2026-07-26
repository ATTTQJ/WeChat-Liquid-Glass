/* Hook replacement 66/418
 * Selectors: SEL_setSelected_
 * Address: 0x165e8; original size: 144 bytes
 * Status: ok; elapsed: 0.352s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_165e8(long long a0)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    char v12;  // x20
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
    g_57b680();
    _objc_retain(a0);
    if ((g_582f88 & 1) && (g_582f8b & 1))
    {
        v12 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v12)
        {
            sub_1389b0(a0);
            sub_18a44(a0, v12);
        }
        _objc_release(v12);
    }
    _objc_release();
    return;
}
