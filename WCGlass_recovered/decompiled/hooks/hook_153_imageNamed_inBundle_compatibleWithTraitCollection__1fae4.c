/* Hook replacement 153/418
 * Selectors: SEL_imageNamed_inBundle_compatibleWithTraitCollection_
 * Address: 0x1fae4; original size: 192 bytes
 * Status: ok; elapsed: 0.31s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1fae4(unsigned long a0, long long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
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
    _objc_retain(a3);
    if (sub_27ab0(_objc_retain(a4)) && sub_27b28(a2))
        _objc_retainAutoreleasedReturnValue(sub_28614());
    else
        _objc_retainAutoreleasedReturnValue(g_57ba80(a0, a1, a2, a3, a4), a1, a2, a3, a4);
    _objc_release(a4);
    _objc_release(a3);
    _objc_release(a2);
}
