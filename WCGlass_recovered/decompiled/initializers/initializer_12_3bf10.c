/* Mach-O initializer 12/33
 * Address: 0x3bf10; original size: 1272 bytes
 * Status: ok; elapsed: 0.783s
 */

long long sub_3bf10(void)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long ch;  // x19
    long long v9;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    /* unsupported instruction */
    if (!g_57c184)
    {
        *((char *)&g_4cdd30) = g_4cdd10 ^ 0x77;
        g_4cdd31 = g_4cdd11 ^ 0x77;
        g_4cdd32 = g_4cdd12 ^ 0x88;
        g_4cdd33 = g_4cdd13 ^ 183;
        g_4cdd34 = g_4cdd14 ^ 175;
        g_4cdd35 = g_4cdd15 ^ 0x77;
        g_4cdd36 = g_4cdd16 ^ 179;
        g_4cdd37 = g_4cdd17 ^ 180;
        g_4cdd38 = g_4cdd18 ^ 0xcc;
        g_4cdd39 = g_4cdd19 ^ 184;
        g_4cdd3a = g_4cdd1a ^ 124;
        g_4cdd3b = g_4cdd1b ^ 8;
        g_4cdd3c = g_4cdd1c ^ 188;
        g_4cdd3d = g_4cdd1d ^ 43;
        g_4cdd3e = g_4cdd1e ^ 222;
        g_4cdd3f = g_4cdd1f ^ 225;
        g_4cdd40 = g_4cdd20 ^ 57;
        g_4cdd41 = g_4cdd21 ^ 35;
        g_4cdd42 = g_4cdd22 ^ 140;
        g_4cdd43 = g_4cdd23 ^ 90;
        g_4cdd44 = g_4cdd24 ^ 146;
        g_4cdd45 = g_4cdd25 ^ 44;
        g_4cdd46 = g_4cdd26 ^ 105;
        g_4cdd47 = g_4cdd27 ^ 244;
        g_4cdd48 = g_4cdd28 ^ 244;
        g_4cdd49 = g_4cdd29 ^ 21;
        g_4cdd4a = ~(g_4cdd2a);
        g_4cdce0 = g_4cdcb0 ^ 65;
        g_4cdce1 = g_4cdcb1 ^ 94;
        g_4cdce2 = g_4cdcb2 ^ 118;
        g_4cdce3 = g_4cdcb3 ^ 182;
        g_4cdce4 = g_4cdcb4 ^ 80;
        g_4cdce5 = g_4cdcb5 ^ 122;
        g_4cdce6 = g_4cdcb6 ^ 134;
        g_4cdce7 = g_4cdcb7 ^ 231;
        g_4cdce8 = g_4cdcb8 ^ 22;
        g_4cdce9 = g_4cdcb9 ^ 9;
        g_4cdcea = g_4cdcba ^ 86;
        g_4cdceb = g_4cdcbb ^ 202;
        g_4cdcec = g_4cdcbc ^ 188;
        g_4cdced = g_4cdcbd ^ 239;
        g_4cdcee = g_4cdcbe ^ 92;
        g_4cdcef = g_4cdcbf ^ 69;
        g_4cdcf0 = g_4cdcc0 ^ 105;
        g_4cdcf1 = g_4cdcc1 ^ 18;
        g_4cdcf2 = g_4cdcc2 ^ 224;
        g_4cdcf3 = g_4cdcc3 ^ 103;
        g_4cdcf4 = g_4cdcc4 ^ 10;
        g_4cdcf5 = g_4cdcc5 ^ 0x22;
        g_4cdcf6 = g_4cdcc6 ^ 229;
        g_4cdcf7 = g_4cdcc7 ^ 106;
        g_4cdcf8 = g_4cdcc8 ^ 145;
        g_4cdcf9 = g_4cdcc9 ^ 181;
        g_4cdcfa = g_4cdcca ^ 251;
        g_4cdcfb = g_4cdccb ^ 30;
        g_4cdcfc = g_4cdccc ^ 75;
        g_4cdcfd = g_4cdccd ^ 177;
        g_4cdcfe = g_4cdcce ^ 248;
        g_4cdcff = g_4cdccf ^ 55;
        g_4cdd00 = g_4cdcd0 ^ 6;
        g_4cdd01 = g_4cdcd1 ^ 122;
        g_4cdd02 = g_4cdcd2 ^ 81;
        g_4cdd03 = g_4cdcd3 ^ 101;
        g_4cdd04 = g_4cdcd4 ^ 98;
        g_4cdd05 = g_4cdcd5 ^ 0xcc;
        g_4cdd06 = g_4cdcd6 ^ 113;
        g_4cdd07 = g_4cdcd7 ^ 15;
        g_4cdd08 = g_4cdcd8 ^ 52;
        g_4cdd09 = g_4cdcd9 ^ 132;
        g_4cdd0a = g_4cdcda ^ 69;
        g_4cdd0b = g_4cdcdb ^ 47;
    }
    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    /* unsupported instruction */
    g_57c184 = 1;
    sub_379794();
    ch = _objc_getClass("g");
    _MSHookMessageEx(ch, SEL_viewWillAppear_, 0x3c408, &g_57c150);
    _MSHookMessageEx(ch, SEL_viewDidAppear_, 0x3c43c, &g_57c158);
    v9 = _MSHookMessageEx(ch, SEL_mesRefreshTableView, 0x3c458, &g_57c160);
    if (!_CFNotificationCenterGetDarwinNotifyCenter(v9, SEL_mesRefreshTableView, 0x3c458, &g_57c160))
        return 0;
}
