/* Mach-O initializer 30/33
 * Address: 0x85394; original size: 828 bytes
 * Status: ok; elapsed: 0.594s
 */

unsigned long long sub_85394(void)
{
    long long count;  // x0
    long long v3;  // x0
    unsigned int v4;  // w0
    unsigned long long v5;  // x0
    long long ch;  // x0
    long long ch1;  // x19
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57d32c)
    {
        *((char *)&g_4d56c0) = g_4d56b0 ^ 21;
        g_4d56c1 = g_4d56b1 ^ 192;
        g_4d56c2 = g_4d56b2 ^ 176;
        g_4d56c3 = g_4d56b3 ^ 0xdd;
        g_4d56c4 = g_4d56b4 ^ 179;
        g_4d56c5 = g_4d56b5 ^ 231;
        g_4d56c6 = g_4d56b6 ^ 91;
        g_4d56c7 = g_4d56b7 ^ 149;
        g_4d56c8 = g_4d56b8 ^ 219;
        g_4d56c9 = g_4d56b9 ^ 231;
        g_4d56ca = g_4d56ba ^ 242;
        g_4d56cb = g_4d56bb ^ 203;
        g_4d56cc = g_4d56bc ^ 214;
        g_4d56cd = g_4d56bd ^ 198;
        g_4d56ce = g_4d56be ^ 66;
        g_4d56cf = g_4d56bf ^ 106;
        *((char *)&g_4d56a0) = g_4d5690 ^ 223;
        g_4d56a1 = g_4d5691 ^ 110;
        g_4d56a2 = g_4d5692 ^ 216;
        g_4d56a3 = g_4d5693 ^ 239;
        g_4d56a4 = g_4d5694 ^ 149;
        g_4d56a5 = g_4d5695 ^ 173;
        g_4d56a6 = g_4d5696 ^ 184;
        g_4d56a7 = g_4d5697 ^ 152;
        g_4d56a8 = g_4d5698 ^ 175;
        g_4d56a9 = g_4d5699 ^ 12;
        g_4d56aa = g_4d569a ^ 104;
        g_4d56ab = g_4d569b ^ 39;
        g_4d56ac = g_4d569c ^ 224;
        g_4d56ad = g_4d569d ^ 124;
        g_4d56ae = g_4d569e ^ 112;
        g_4d56af = g_4d569f ^ 90;
    }
    /* unsupported instruction */
    g_57d32c = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass("g");
    _MSHookMessageEx(ch, SEL_setInputMode_animated_, 0x856e4, &g_57d238);
    ch1 = _objc_getClass("[");
    _MSHookMessageEx(ch1, SEL_ShowPreparing, 0x85738, &g_57d240);
    _MSHookMessageEx(ch1, SEL_ShowRecording, 0x8579c, &g_57d248);
    _MSHookMessageEx(ch1, SEL_layoutSubviews, 0x85800, &g_57d250);
    _MSHookMessageEx(ch1, SEL_exitVoiceRecord, 0x85864, &g_57d258);
    return _MSHookMessageEx();
}
