/* Mach-O initializer 17/33
 * Address: 0x4e544; original size: 1128 bytes
 * Status: ok; elapsed: 0.68s
 */

unsigned long long sub_4e544(void)
{
    long long count;  // x0
    long long v3;  // x0
    unsigned int v4;  // w0
    unsigned long long v5;  // x0
    long long ch;  // x0
    long long ch1;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57c6d0)
    {
        *((char *)&g_4cfcac) = g_4cfca0 ^ 69;
        g_4cfcad = g_4cfca1 ^ 113;
        g_4cfcae = g_4cfca2 ^ 65;
        g_4cfcaf = g_4cfca3 ^ 245;
        g_4cfcb0 = g_4cfca4 ^ 96;
        g_4cfcb1 = g_4cfca5 ^ 109;
        g_4cfcb2 = g_4cfca6 ^ 20;
        g_4cfcb3 = g_4cfca7 ^ 78;
        g_4cfcb4 = g_4cfca8 ^ 16;
        g_4cfcb5 = g_4cfca9 ^ 144;
        g_4cfcb6 = g_4cfcaa ^ 157;
        g_4cfcb7 = g_4cfcab ^ 56;
        *((char *)&g_4cfc80) = g_4cfc60 ^ 196;
        g_4cfc81 = g_4cfc61 ^ 35;
        g_4cfc82 = g_4cfc62 ^ 131;
        g_4cfc83 = g_4cfc63 ^ 0xbb;
        g_4cfc84 = g_4cfc64 ^ 252;
        g_4cfc85 = g_4cfc65 ^ 223;
        g_4cfc86 = g_4cfc66 ^ 0x77;
        g_4cfc87 = g_4cfc67 ^ 127;
        g_4cfc88 = g_4cfc68 ^ 224;
        g_4cfc89 = g_4cfc69 ^ 79;
        g_4cfc8a = g_4cfc6a ^ 186;
        g_4cfc8b = g_4cfc6b ^ 115;
        g_4cfc8c = g_4cfc6c ^ 15;
        g_4cfc8d = g_4cfc6d ^ 188;
        g_4cfc8e = g_4cfc6e ^ 213;
        g_4cfc8f = g_4cfc6f ^ 186;
        g_4cfc90 = g_4cfc70 ^ 156;
        g_4cfc91 = g_4cfc71 ^ 0x22;
        g_4cfc92 = g_4cfc72 ^ 0x11;
        g_4cfc93 = g_4cfc73 ^ 246;
        g_4cfc94 = g_4cfc74 ^ 61;
        g_4cfc95 = g_4cfc75 ^ 216;
        g_4cfc96 = g_4cfc76 ^ 189;
        g_4cfc97 = g_4cfc77 ^ 60;
        g_4cfc98 = g_4cfc78 ^ 158;
        g_4cfc99 = g_4cfc79 ^ 52;
        g_4cfc9a = g_4cfc7a ^ 131;
        g_4cfc9b = g_4cfc7b ^ 228;
        g_4cfc9c = g_4cfc7c ^ 19;
        g_4cfc9d = g_4cfc7d ^ 207;
        g_4cfc9e = g_4cfc7e ^ 74;
        g_4cfc9f = g_4cfc7f ^ 71;
        *((char *)&g_4cfc49) = g_4cfc40 ^ 212;
        g_4cfc4a = g_4cfc41 ^ 213;
        g_4cfc4b = g_4cfc42 ^ 59;
        g_4cfc4c = g_4cfc43 ^ 78;
        g_4cfc4d = g_4cfc44 ^ 29;
        g_4cfc4e = g_4cfc45 ^ 220;
        g_4cfc4f = g_4cfc46 ^ 207;
        g_4cfc50 = g_4cfc47 ^ 230;
        g_4cfc51 = g_4cfc48 ^ 24;
    }
    /* unsupported instruction */
    g_57c6d0 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(&g_4cfcac);
    _MSHookMessageEx(ch, SEL_imageRectForContentRect_, 0x4e9c0, &g_57c6a8);
    _MSHookMessageEx(ch, SEL_layoutSubviews, 0x4ea2c, &g_57c6b0);
    ch1 = _objc_getClass(&g_4cfc49);
    _MSHookMessageEx(ch1, SEL_imageRectForContentRect_, 0x4ea58, &g_57c6b8);
    _MSHookMessageEx(ch1, SEL_layoutSubviews, 0x4eac4, &g_57c6c0);
    _objc_getClass(&g_4cfc80);
    return _MSHookMessageEx();
}
