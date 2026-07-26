/* Mach-O initializer 2/33
 * Address: 0x5f1c; original size: 1532 bytes
 * Status: ok; elapsed: 1.197s
 */

unsigned long long sub_5f1c(void)
{
    long long count;  // x0
    long long v3;  // x0
    unsigned int v4;  // w0
    unsigned long long v5;  // x0
    long long ch;  // x19
    long long ch1;  // x19
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57b2f8)
    {
        *((char *)&g_4c6f40) = g_4c6f20 ^ 69;
        g_4c6f41 = g_4c6f21 ^ 193;
        g_4c6f42 = g_4c6f22 ^ 146;
        g_4c6f43 = g_4c6f23 ^ 151;
        g_4c6f44 = g_4c6f24 ^ 222;
        g_4c6f45 = g_4c6f25 ^ 0xbb;
        g_4c6f46 = g_4c6f26 ^ 22;
        g_4c6f47 = g_4c6f27 ^ 37;
        g_4c6f48 = g_4c6f28 ^ 111;
        g_4c6f49 = g_4c6f29 ^ 54;
        g_4c6f4a = g_4c6f2a ^ 66;
        g_4c6f4b = g_4c6f2b ^ 60;
        g_4c6f4c = g_4c6f2c ^ 133;
        g_4c6f4d = g_4c6f2d ^ 73;
        g_4c6f4e = g_4c6f2e ^ 190;
        g_4c6f4f = g_4c6f2f ^ 15;
        g_4c6f50 = g_4c6f30 ^ 101;
        g_4c6f51 = g_4c6f31 ^ 54;
        g_4c6f52 = g_4c6f32 ^ 26;
        g_4c6f53 = g_4c6f33 ^ 0xdd;
        g_4c6f54 = g_4c6f34 ^ 35;
        g_4c6f55 = g_4c6f35 ^ 112;
        g_4c6f56 = g_4c6f36 ^ 154;
        g_4c6f57 = g_4c6f37 ^ 222;
        g_4c6f58 = g_4c6f38 ^ 44;
        g_4c6f59 = g_4c6f39 ^ 132;
        g_4c6f5a = g_4c6f3a ^ 223;
        g_4c6f5b = g_4c6f3b ^ 92;
        g_4c6f5c = g_4c6f3c ^ 0x33;
        *((char *)&g_4c6f00) = g_4c6ee0 ^ 122;
        g_4c6f01 = g_4c6ee1 ^ 24;
        g_4c6f02 = g_4c6ee2 ^ 104;
        g_4c6f03 = g_4c6ee3 ^ 27;
        g_4c6f04 = g_4c6ee4 ^ 71;
        g_4c6f05 = g_4c6ee5 ^ 12;
        g_4c6f06 = g_4c6ee6 ^ 112;
        g_4c6f07 = g_4c6ee7 ^ 114;
        g_4c6f08 = g_4c6ee8 ^ 27;
        g_4c6f09 = g_4c6ee9 ^ 169;
        g_4c6f0a = g_4c6eea ^ 223;
        g_4c6f0b = g_4c6eeb ^ 77;
        g_4c6f0c = g_4c6eec ^ 241;
        g_4c6f0d = g_4c6eed ^ 184;
        g_4c6f0e = ~(g_4c6eee);
        g_4c6f0f = g_4c6eef ^ 111;
        g_4c6f10 = g_4c6ef0 ^ 53;
        g_4c6f11 = g_4c6ef1 ^ 193;
        *((char *)&g_4c6ec0) = g_4c6ea0 ^ 10;
        g_4c6ec1 = g_4c6ea1 ^ 81;
        g_4c6ec2 = g_4c6ea2 ^ 195;
        g_4c6ec3 = g_4c6ea3 ^ 0xaa;
        g_4c6ec4 = g_4c6ea4 ^ 135;
        g_4c6ec5 = g_4c6ea5 ^ 94;
        g_4c6ec6 = g_4c6ea6 ^ 200;
        g_4c6ec7 = g_4c6ea7 ^ 229;
        g_4c6ec8 = g_4c6ea8 ^ 13;
        g_4c6ec9 = g_4c6ea9 ^ 4;
        g_4c6eca = g_4c6eaa ^ 179;
        g_4c6ecb = g_4c6eab ^ 186;
        g_4c6ecc = g_4c6eac ^ 115;
        g_4c6ecd = g_4c6ead ^ 120;
        g_4c6ece = g_4c6eae ^ 18;
        g_4c6ecf = g_4c6eaf ^ 162;
        g_4c6ed0 = g_4c6eb0 ^ 44;
        g_4c6ed1 = g_4c6eb1 ^ 205;
        g_4c6ed2 = g_4c6eb2 ^ 179;
    }
    /* unsupported instruction */
    g_57b2f8 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(&g_4c6f40);
    _MSHookMessageEx(ch, SEL_viewWillAppear_, 0x652c, &g_57b298);
    _MSHookMessageEx(ch, SEL_viewDidAppear_, 0x6580, &g_57b2a0);
    _MSHookMessageEx(ch, SEL_viewDidDisappear_, 0x6620, &g_57b2a8);
    _MSHookMessageEx(ch, SEL_viewDidLayoutSubviews, 0x6684, &g_57b2b0);
    _MSHookMessageEx(ch, SEL_traitCollectionDidChange_, 0x6718, &g_57b2b8);
    _MSHookMessageEx(ch, SEL_reloadBackgroundView, 0x6934, &g_57b2c0);
    _MSHookMessageEx(ch, SEL_getBackgroundView, 0x69f0, &g_57b2c8);
    ch1 = _objc_getClass(&g_4c6f00);
    _MSHookMessageEx(ch1, SEL_getChatBackgroundViewForUser_, 0x6ac4, &g_57b2d0);
    _MSHookMessageEx(ch1, SEL_getChatBackgroundImagePathForUser_, 0x6ae8, &g_57b2d8);
    _MSHookMessageEx(ch1, SEL_customImageNameFor_, 0x6ba8, &g_57b2e0);
    _MSHookMessageEx(ch1, SEL_imageInPath_, 0x6c74, &g_57b2e8);
    _objc_getClass(&g_4c6ec0);
    return _MSHookMessageEx();
}
