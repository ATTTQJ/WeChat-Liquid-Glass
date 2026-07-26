/* Hook replacement 37/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x13eb0; original size: 380 bytes
 * Status: ok; elapsed: 0.349s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_13eb0(long long a0, unsigned long a1)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x0
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
    /* unsupported instruction */
    if (!g_57b6d0)
    {
        g_4c9681 = g_4c9671 ^ 154;
        g_4c9682 = g_4c9672 ^ 80;
        g_4c9683 = g_4c9673 ^ 134;
        g_4c9684 = g_4c9674 ^ 0xee;
        g_4c9685 = g_4c9675 ^ 53;
        g_4c9686 = g_4c9676 ^ 173;
        g_4c9687 = g_4c9677 ^ 36;
        g_4c9688 = g_4c9678 ^ 223;
        g_4c9689 = g_4c9679 ^ 224;
        g_4c968a = g_4c967a ^ 112;
        g_4c968b = g_4c967b ^ 199;
        g_4c968c = g_4c967c ^ 0xee;
        g_4c968d = g_4c967d ^ 0x55;
        g_4c968e = g_4c967e ^ 4;
        g_4c968f = g_4c967f ^ 99;
        g_4c9690 = g_4c9680 ^ 89;
    }
    /* unsupported instruction */
    g_57b6d0 = 1;
    v12 = _objc_retainAutoreleasedReturnValue(sub_260cd0(a0, &g_4c96c0), &g_4c96c0);
    sub_13b860(a0);
    g_57b598(a0, a1);
    sub_1687c(v12);
    sub_138430(a0);
}
