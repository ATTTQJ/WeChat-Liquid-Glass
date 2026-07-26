/* Hook replacement 38/418
 * Selectors: SEL_didMoveToSuperview
 * Address: 0x14040; original size: 376 bytes
 * Status: ok; elapsed: 0.339s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_14040(long long a0)
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
    if (!g_57b6d4)
    {
        g_4c96f0 = g_4c96e0 ^ 69;
        g_4c96f1 = g_4c96e1 ^ 196;
        g_4c96f2 = g_4c96e2 ^ 112;
        g_4c96f3 = g_4c96e3 ^ 229;
        g_4c96f4 = g_4c96e4 ^ 209;
        g_4c96f5 = g_4c96e5 ^ 124;
        g_4c96f6 = g_4c96e6 ^ 113;
        g_4c96f7 = g_4c96e7 ^ 105;
        g_4c96f8 = g_4c96e8 ^ 105;
        g_4c96f9 = g_4c96e9 ^ 176;
        g_4c96fa = g_4c96ea ^ 135;
        g_4c96fb = g_4c96eb ^ 61;
        g_4c96fc = g_4c96ec ^ 125;
        g_4c96fd = g_4c96ed ^ 138;
        g_4c96fe = g_4c96ee ^ 43;
        g_4c96ff = g_4c96ef ^ 211;
    }
    /* unsupported instruction */
    g_57b6d4 = 1;
    g_57b5a0(a0);
    sub_1281a4(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_260cd0(a0, &g_4c9720), &g_4c9720);
    sub_17264(v8);
    sub_1687c(v8);
}
