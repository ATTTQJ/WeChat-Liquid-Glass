/* Hook replacement 152/418
 * Selectors: SEL_imageNamed_
 * Address: 0x1fa48; original size: 136 bytes
 * Status: ok; elapsed: 0.279s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1fa48(unsigned long a0, long long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
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
    if (sub_27ab0(_objc_retain(a2)) && sub_27b28(a2))
        _objc_retainAutoreleasedReturnValue(sub_28614());
    else
        _objc_retainAutoreleasedReturnValue(g_57ba78(a0, a1, a2), a1, a2);
    _objc_release(a2);
}
