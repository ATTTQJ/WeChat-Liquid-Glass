/* Hook replacement 258/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x42c40; original size: 380 bytes
 * Status: ok; elapsed: 0.344s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_42c40(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    /* unsupported instruction */
    if (!(int)g_57c548)
    {
        g_4cea50 = g_4cea30 ^ 158;
        g_4cea51 = g_4cea31 ^ 222;
        g_4cea52 = g_4cea32 ^ 0xee;
        g_4cea53 = g_4cea33 ^ 124;
        g_4cea54 = g_4cea34 ^ 32;
        g_4cea55 = g_4cea35 ^ 24;
        g_4cea56 = g_4cea36 ^ 76;
        g_4cea57 = g_4cea37 ^ 6;
        g_4cea58 = g_4cea38 ^ 109;
        g_4cea59 = g_4cea39 ^ 6;
        g_4cea5a = g_4cea3a ^ 43;
        g_4cea5b = g_4cea3b ^ 28;
        g_4cea5c = g_4cea3c ^ 130;
        g_4cea5d = g_4cea3d ^ 168;
        g_4cea5e = g_4cea3e ^ 24;
        g_4cea5f = g_4cea3f ^ 197;
        g_4cea60 = g_4cea40 ^ 243;
        g_4cea61 = g_4cea41 ^ 52;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57c548) = 1;
    g_57c438(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_260cd0(a0, &g_4cea90), &g_4cea90);
    if (v8)
        sub_49230(v8);
}
