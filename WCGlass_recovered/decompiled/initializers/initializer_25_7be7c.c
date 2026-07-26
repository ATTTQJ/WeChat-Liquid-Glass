/* Mach-O initializer 25/33
 * Address: 0x7be7c; original size: 528 bytes
 * Status: ok; elapsed: 0.433s
 */

unsigned long long sub_7be7c(void)
{
    long long count;  // x0
    long long v3;  // x0
    unsigned int v4;  // w0
    unsigned long long v5;  // x0
    long long ch;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57d0f8)
    {
        *((char *)&g_4d49a0) = g_4d4980 ^ 58;
        g_4d49a1 = g_4d4981 ^ 0x11;
        g_4d49a2 = g_4d4982 ^ 177;
        g_4d49a3 = g_4d4983 ^ 0x66;
        g_4d49a4 = g_4d4984 ^ 5;
        g_4d49a5 = g_4d4985 ^ 25;
        g_4d49a6 = g_4d4986 ^ 0x22;
        g_4d49a7 = g_4d4987 ^ 82;
        g_4d49a8 = g_4d4988 ^ 127;
        g_4d49a9 = g_4d4989 ^ 226;
        g_4d49aa = g_4d498a ^ 0x11;
        g_4d49ab = g_4d498b ^ 201;
        g_4d49ac = g_4d498c ^ 44;
        g_4d49ad = g_4d498d ^ 0xaa;
        g_4d49ae = g_4d498e ^ 32;
        g_4d49af = g_4d498f ^ 196;
        g_4d49b0 = g_4d4990 ^ 152;
        g_4d49b1 = g_4d4991 ^ 48;
        g_4d49b2 = g_4d4992 ^ 250;
        g_4d49b3 = g_4d4993 ^ 155;
        g_4d49b4 = g_4d4994 ^ 11;
        g_4d49b5 = g_4d4995 ^ 185;
    }
    /* unsupported instruction */
    g_57d0f8 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(&g_4d49a0);
    _MSHookMessageEx(ch, SEL_onHeadImageDoubleClick_, 0x7c0a0, &g_57d0e8);
    return _MSHookMessageEx();
}
