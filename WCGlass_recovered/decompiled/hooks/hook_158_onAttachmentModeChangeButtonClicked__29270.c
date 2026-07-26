/* Hook replacement 158/418
 * Selectors: SEL_onAttachmentModeChangeButtonClicked_
 * Address: 0x29270; original size: 368 bytes
 * Status: ok; elapsed: 0.371s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_29270(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    unsigned int v12;  // w8
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
    if (3134368848 < (1938430518 * (g_4cb8c0 + g_4cb8c4 ^ 106818914) & 425310312))
        goto LABEL_2932c;
    while (1)
    {
        v12 = (__ROL__((g_4cb8c8 - g_4cb8cc) * 1673630001, 2) & 3) + 968485257;
        _objc_retain(a2);
        if ((__ROL__(v12 * 568618255, 6) & 63) <= 1465430476)
            break;
LABEL_2932c:
        _objc_retain(a2);
    }
    if (!((char)sub_1f8c24(a0) & 1) && !((char)sub_1f8c08() & 1))
    {
        do
        { } while (0);
        if (!sub_1f902c(a0))
            goto LABEL_293b4;
        sub_1fc698(a0, a2);
    }
    else
    {
LABEL_293b4:
        g_57bd68(a0, a1, a2);
    }
}
