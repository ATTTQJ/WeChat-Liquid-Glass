/* Hook replacement 298/418
 * Selectors: SEL_setAlpha_
 * Address: 0x50acc; original size: 196 bytes
 * Status: ok; elapsed: 0.31s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_50acc(long long a0, unsigned long a1)
{
    unsigned long long v9;  // d9
    unsigned long long v10;  // d8
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long count;  // x0
    char v17;  // w21
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
    _objc_retain();
    if (!(g_57c769 & 1) && !((count = (long long)(unsigned long long)_objc_msgSend(g_4c4078, SEL_class), !(unsigned int)(unsigned long long)_objc_msgSend(a0, SEL_isKindOfClass_, (unsigned long long)_objc_msgSend(g_4c4078, SEL_class)) || !(unsigned int)(unsigned long long)sub_54048(a0))))
        v17 = 1;
    else
        v17 = 0;
    g_57c738(a0, a1);
    if (v17)
        sub_53860(a0);
}
