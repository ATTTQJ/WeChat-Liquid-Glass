/* Hook replacement 84/418
 * Selectors: SEL_imageNamed_
 * Address: 0x1e0b8; original size: 188 bytes
 * Status: ok; elapsed: 0.423s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1e0b8(unsigned long a0, long long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    char v17;  // x0
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    _objc_retain(a2);
    if ((g_582f88 & 1) && (g_583068 & 1))
    {
        v16 = _objc_retainAutoreleasedReturnValue(sub_18e98());
        v17 = _objc_retainAutoreleasedReturnValue(sub_256b8(v16, a2), a2);
        _objc_release(v16);
        if (v17)
            goto LABEL_1e154;
    }
    _objc_retainAutoreleasedReturnValue(g_57b858(a0, a1, a2), a1, a2);
LABEL_1e154:
    _objc_release(a2);
}
