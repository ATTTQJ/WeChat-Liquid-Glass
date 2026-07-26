/* Mach-O initializer 28/33
 * Address: 0x7f20c; original size: 632 bytes
 * Status: ok; elapsed: 0.491s
 */

unsigned long long sub_7f20c(void)
{
    long long count;  // x0
    long long ch;  // x20
    unsigned int v6;  // w0
    unsigned long long v7;  // x0
    long long v8;  // x0
    char v0[1032];  // [bp-0x440]
    unsigned long v1;  // [bp-0x38]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!*((int *)&g_57d1c8))
    {
        *((char *)&g_4d4ed0) = g_4d4eb0 ^ 18;
        g_4d4ed1 = g_4d4eb1 ^ 70;
        g_4d4ed2 = g_4d4eb2 ^ 215;
        g_4d4ed3 = g_4d4eb3 ^ 0xbb;
        g_4d4ed4 = g_4d4eb4 ^ 111;
        g_4d4ed5 = g_4d4eb5 ^ 0x22;
        g_4d4ed6 = g_4d4eb6 ^ 27;
        g_4d4ed7 = g_4d4eb7 ^ 160;
        g_4d4ed8 = g_4d4eb8 ^ 216;
        g_4d4ed9 = g_4d4eb9 ^ 111;
        g_4d4eda = g_4d4eba ^ 74;
        g_4d4edb = g_4d4ebb ^ 235;
        g_4d4edc = g_4d4ebc ^ 0xee;
        g_4d4edd = g_4d4ebd ^ 141;
        g_4d4ede = g_4d4ebe ^ 46;
        g_4d4edf = g_4d4ebf ^ 75;
        g_4d4ee0 = g_4d4ec0 ^ 206;
        g_4d4ee1 = g_4d4ec1 ^ 115;
        g_4d4ee2 = g_4d4ec2 ^ 89;
        g_4d4ee3 = g_4d4ec3 ^ 234;
        g_4d4ee4 = g_4d4ec4 ^ 252;
        g_4d4ee5 = g_4d4ec5 ^ 222;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57d1c8) = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    ch = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v6 = _objc_msgSend(ch, SEL_liquidGlassEnabled);
    v7 = _objc_release(ch);
    if (v6)
    {
        ch = _objc_getClass("_");
        _MSHookMessageEx(ch, SEL_layoutSubviews, 0x7f484, &g_57d1b0);
        strcpy(v0, "v@:@");
        v7 = _class_addMethod(ch, SEL_wclg_handleQuoteSwipe_, 0x7f830, v0);
    }
    if (*((long long *)&g_600760) == v1)
        return v7;
    v8 = ___stack_chk_fail();
    _objc_release(ch);
    __Unwind_Resume(v8);
}
