/* Mach-O initializer 5/33
 * Address: 0x110b8; original size: 928 bytes
 * Status: ok; elapsed: 0.837s
 */

unsigned long long sub_110b8(void)
{
    long long count;  // x0
    long long v3;  // x0
    unsigned int v4;  // w0
    unsigned long long v5;  // x0
    long long ch;  // x19
    long long ch1;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57b520)
    {
        *((char *)&g_4c92c7) = g_4c92b8 ^ 36;
        g_4c92c8 = g_4c92b9 ^ 70;
        g_4c92c9 = g_4c92ba ^ 159;
        g_4c92ca = g_4c92bb ^ 247;
        g_4c92cb = g_4c92bc ^ 101;
        g_4c92cc = g_4c92bd ^ 203;
        g_4c92cd = g_4c92be ^ 198;
        g_4c92ce = g_4c92bf ^ 202;
        g_4c92cf = g_4c92c0 ^ 208;
        g_4c92d0 = g_4c92c1 ^ 52;
        g_4c92d1 = g_4c92c2 ^ 121;
        g_4c92d2 = g_4c92c3 ^ 0x88;
        g_4c92d3 = g_4c92c4 ^ 203;
        g_4c92d4 = g_4c92c5 ^ 133;
        g_4c92d5 = g_4c92c6 ^ 123;
        *((char *)&g_4c92a8) = g_4c9298 ^ 5;
        g_4c92a9 = g_4c9299 ^ 65;
        g_4c92aa = g_4c929a ^ 83;
        g_4c92ab = g_4c929b ^ 223;
        g_4c92ac = g_4c929c ^ 188;
        g_4c92ad = g_4c929d ^ 94;
        g_4c92ae = g_4c929e ^ 71;
        g_4c92af = g_4c929f ^ 0x22;
        g_4c92b0 = g_4c92a0 ^ 145;
        g_4c92b1 = g_4c92a1 ^ 148;
        g_4c92b2 = g_4c92a2 ^ 0x11;
        g_4c92b3 = g_4c92a3 ^ 53;
        g_4c92b4 = g_4c92a4 ^ 9;
        g_4c92b5 = g_4c92a5 ^ 146;
        g_4c92b6 = g_4c92a6 ^ 81;
        g_4c92b7 = g_4c92a7 ^ 74;
    }
    /* unsupported instruction */
    g_57b520 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass("4");
    _MSHookMessageEx(ch, SEL_getHeadImageWithUseScene_withScene_withCategory_retHeadImgIsExistedLocal_, 0x1146c, &g_57b4b0);
    _MSHookMessageEx(ch, SEL_getHeadImageWithUseScene_withScene_withCategory_, 0x1154c, &g_57b4b8);
    _MSHookMessageEx(ch, SEL_getHeadImage_withCategory_, 0x11610, &g_57b4c0);
    _MSHookMessageEx(ch, SEL_getOriginalHeadImage_withCategory_, 0x116cc, &g_57b4c8);
    _MSHookMessageEx(ch, SEL_getRoundImage_size_withCategory_, 0x11788, &g_57b4d0);
    _MSHookMessageEx(ch, SEL_getRoundImage_size_cornerSize_withCategory_, 0x11864, &g_57b4d8);
    ch1 = _objc_getClass(&g_4c92a8);
    _MSHookMessageEx(ch1, SEL_updateUsrName_withHeadImgUrl_, 0x11948, &g_57b4e0);
    _MSHookMessageEx(ch1, SEL_layoutSubviews, 0x11a64, &g_57b4e8);
    return _MSHookMessageEx();
}
