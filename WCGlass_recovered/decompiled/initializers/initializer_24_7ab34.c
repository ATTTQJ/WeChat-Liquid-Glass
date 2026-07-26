/* Mach-O initializer 24/33
 * Address: 0x7ab34; original size: 596 bytes
 * Status: ok; elapsed: 0.462s
 */

void sub_7ab34(void)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    long long v9;  // x0
    long long ch;  // x20
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
    if (!g_57d0cc)
    {
        *((char *)&g_4d46e0) = g_4d46c0 ^ 55;
        g_4d46e1 = g_4d46c1 ^ 94;
        g_4d46e2 = g_4d46c2 ^ 44;
        g_4d46e3 = g_4d46c3 ^ 220;
        g_4d46e4 = g_4d46c4 ^ 138;
        g_4d46e5 = g_4d46c5 ^ 196;
        g_4d46e6 = g_4d46c6 ^ 111;
        g_4d46e7 = g_4d46c7 ^ 81;
        g_4d46e8 = g_4d46c8 ^ 165;
        g_4d46e9 = g_4d46c9 ^ 0x99;
        g_4d46ea = g_4d46ca ^ 0x88;
        g_4d46eb = g_4d46cb ^ 99;
        g_4d46ec = g_4d46cc ^ 1;
        g_4d46ed = g_4d46cd ^ 193;
        g_4d46ee = g_4d46ce ^ 139;
        g_4d46ef = g_4d46cf ^ 180;
        g_4d46f0 = g_4d46d0 ^ 174;
        g_4d46f1 = g_4d46d1 ^ 89;
        g_4d46f2 = g_4d46d2 ^ 79;
    }
    /* unsupported instruction */
    g_57d0cc = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v9 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    if (((char)_objc_msgSend(v9, SEL_liquidGlassEnabled) & 1) || _objc_msgSend(v9, SEL_compatEnabled))
    {
        ch = _objc_getClass(&g_4d46e0);
        _MSHookMessageEx(ch, SEL_setEffect_, 0x7ada0, &g_57d0a0);
        _MSHookMessageEx(ch, SEL_setHidden_, 0x7ae38, &g_57d0a8);
        _MSHookMessageEx(ch, SEL_setAlpha_, 0x7ae7c, &g_57d0b0);
        _MSHookMessageEx(ch, SEL_didMoveToSuperview, 0x7aec8, &g_57d0b8);
        _MSHookMessageEx(ch, SEL_layoutSubviews, 0x7af5c, &g_57d0c0);
    }
}
