/* Hook replacement 259/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x42dd0; original size: 388 bytes
 * Status: ok; elapsed: 0.35s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_42dd0(long long a0)
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
    if (!(int)g_57c54c)
    {
        g_4cead0 = g_4ceab0 ^ 20;
        g_4cead1 = g_4ceab1 ^ 64;
        g_4cead2 = g_4ceab2 ^ 151;
        g_4cead3 = g_4ceab3 ^ 251;
        g_4cead4 = g_4ceab4 ^ 25;
        g_4cead5 = g_4ceab5 ^ 193;
        g_4cead6 = g_4ceab6 ^ 186;
        g_4cead7 = g_4ceab7 ^ 165;
        g_4cead8 = g_4ceab8 ^ 167;
        g_4cead9 = g_4ceab9 ^ 0x55;
        g_4ceada = g_4ceaba ^ 12;
        g_4ceadb = g_4ceabb ^ 148;
        g_4ceadc = g_4ceabc ^ 47;
        g_4ceadd = ~(g_4ceabd);
        g_4ceade = g_4ceabe ^ 134;
        g_4ceadf = g_4ceabf ^ 14;
        g_4ceae0 = g_4ceac0 ^ 173;
        g_4ceae1 = g_4ceac1 ^ 226;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57c54c) = 1;
    g_57c440(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_260cd0(a0, &g_4ceb10), &g_4ceb10);
    if (v8)
        sub_49230(v8);
}
