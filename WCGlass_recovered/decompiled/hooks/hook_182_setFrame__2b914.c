/* Hook replacement 182/418
 * Selectors: SEL_setFrame_
 * Address: 0x2b914; original size: 192 bytes
 * Status: ok; elapsed: 0.279s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_2b914(long long a0, unsigned long a1)
{
    unsigned long long v11;  // d11
    unsigned long long v12;  // d10
    unsigned long long v13;  // d9
    unsigned long long v14;  // d8
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
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
    if (sub_384c0())
    {
        g_57be60(a0, a1);
        sub_2f5b4();
        return;
    }
    sub_3865c(a0);
    g_57be60(a0, a1);
    sub_2f5b4(a0);
}
