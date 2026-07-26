/* Hook replacement 28/418
 * Selectors: SEL_updateUsrName_withHeadImgUrl_
 * Address: 0x11948; original size: 256 bytes
 * Status: ok; elapsed: 0.325s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_11948(long long a0, unsigned long a1, long long a2, long long a3)
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
    _objc_retain(a2);
    _objc_retain(a3);
    sub_11d574(a0, a2);
    if ((g_582f88 & 1) && !(g_5830b8 & 1) && sub_11d540() && sub_d6040(g_4a1830) == 1194676824 && _objc_msgSend(a2, SEL_length) && sub_11ce4c(a2))
        g_57b4e0(a0, a1, a2, " \t`");
    else
        g_57b4e0(a0, a1, a2, a3);
    _objc_release(a3);
    _objc_release();
    return;
}
