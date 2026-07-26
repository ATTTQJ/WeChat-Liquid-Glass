/* Hook replacement 27/418
 * Selectors: SEL_getRoundImage_size_cornerSize_withCategory_
 * Address: 0x11864; original size: 204 bytes
 * Status: ok; elapsed: 0.296s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_11864(unsigned long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v11;  // d9
    unsigned long long v12;  // d8
    unsigned long long v13;  // x24
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x20
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = v11;
    v1 = v12;
    v2 = v13;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v8 = &v10;
    v9 = v19;
    _objc_retain(a2);
    v20 = _objc_retainAutoreleasedReturnValue(sub_12250(a2));
    if (v20)
        _objc_retain(v20);
    else
        _objc_retainAutoreleasedReturnValue(g_57b4d8(a0, a1, a2, a3, a4), a1, a2, a3, a4);
    _objc_release(v20);
    _objc_release(a2);
}
