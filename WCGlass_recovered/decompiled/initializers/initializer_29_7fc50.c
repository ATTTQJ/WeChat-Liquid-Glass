/* Mach-O initializer 29/33
 * Address: 0x7fc50; original size: 1144 bytes
 * Status: ok; elapsed: 0.697s
 */

unsigned long long sub_7fc50(void)
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
    if (!g_57d200)
    {
        *((char *)&g_4d5020) = g_4d5000 ^ 140;
        g_4d5021 = g_4d5001 ^ 100;
        g_4d5022 = g_4d5002 ^ 77;
        g_4d5023 = g_4d5003 ^ 121;
        g_4d5024 = g_4d5004 ^ 181;
        g_4d5025 = g_4d5005 ^ 242;
        g_4d5026 = g_4d5006 ^ 150;
        g_4d5027 = g_4d5007 ^ 35;
        g_4d5028 = g_4d5008 ^ 183;
        g_4d5029 = g_4d5009 ^ 181;
        g_4d502a = g_4d500a ^ 169;
        g_4d502b = g_4d500b ^ 163;
        g_4d502c = g_4d500c ^ 39;
        g_4d502d = g_4d500d ^ 217;
        g_4d502e = g_4d500e ^ 203;
        g_4d502f = g_4d500f ^ 127;
        g_4d5030 = g_4d5010 ^ 152;
        g_4d5031 = g_4d5011 ^ 196;
        g_4d5032 = g_4d5012 ^ 13;
        g_4d5033 = g_4d5013 ^ 65;
        g_4d5034 = g_4d5014 ^ 0x99;
        g_4d5035 = g_4d5015 ^ 101;
        g_4d5036 = g_4d5016 ^ 90;
        g_4d5037 = g_4d5017 ^ 250;
        g_4d5038 = g_4d5018 ^ 134;
        g_4d5039 = g_4d5019 ^ 246;
        g_4d503a = g_4d501a ^ 196;
        g_4d503b = g_4d501b ^ 0x33;
        g_4d503c = g_4d501c ^ 233;
        *((char *)&g_4d4fe0) = g_4d4fc0 ^ 0x11;
        g_4d4fe1 = g_4d4fc1 ^ 107;
        g_4d4fe2 = g_4d4fc2 ^ 25;
        g_4d4fe3 = g_4d4fc3 ^ 169;
        g_4d4fe4 = g_4d4fc4 ^ 210;
        g_4d4fe5 = g_4d4fc5 ^ 178;
        g_4d4fe6 = g_4d4fc6 ^ 245;
        g_4d4fe7 = g_4d4fc7 ^ 127;
        g_4d4fe8 = g_4d4fc8 ^ 209;
        g_4d4fe9 = g_4d4fc9 ^ 74;
        g_4d4fea = g_4d4fca ^ 108;
        g_4d4feb = g_4d4fcb ^ 193;
        g_4d4fec = g_4d4fcc ^ 59;
        g_4d4fed = g_4d4fcd ^ 28;
        g_4d4fee = g_4d4fce ^ 74;
        g_4d4fef = g_4d4fcf ^ 45;
        g_4d4ff0 = g_4d4fd0 ^ 27;
        g_4d4ff1 = g_4d4fd1 ^ 30;
        g_4d4ff2 = g_4d4fd2 ^ 20;
        g_4d4ff3 = g_4d4fd3 ^ 173;
        g_4d4ff4 = g_4d4fd4 ^ 101;
        g_4d4ff5 = g_4d4fd5 ^ 97;
        g_4d4ff6 = g_4d4fd6 ^ 110;
        g_4d4ff7 = g_4d4fd7 ^ 117;
        g_4d4ff8 = g_4d4fd8 ^ 31;
        g_4d4ff9 = g_4d4fd9 ^ 167;
        g_4d4ffa = g_4d4fda ^ 230;
        g_4d4ffb = g_4d4fdb ^ 122;
        g_4d4ffc = g_4d4fdc ^ 117;
        g_4d4ffd = g_4d4fdd ^ 30;
    }
    /* unsupported instruction */
    g_57d200 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(&g_4d5020);
    _MSHookMessageEx(ch, SEL_OnMultiForwardMessage, 0x800dc, &g_57d1e0);
    ch1 = _objc_getClass(&g_4d4fe0);
    _MSHookMessageEx(ch1, SEL_forwardMsgList_toContacts_, 0x802e4, &g_57d1e8);
    return _MSHookMessageEx();
}
