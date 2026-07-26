/* Mach-O initializer 4/33
 * Address: 0xaaec; original size: 1036 bytes
 * Status: ok; elapsed: 0.953s
 */

unsigned long long sub_aaec(void)
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
    if (!g_57b458)
    {
        *((char *)&g_4c7630) = g_4c7610 ^ 223;
        g_4c7631 = g_4c7611 ^ 161;
        g_4c7632 = g_4c7612 ^ 208;
        g_4c7633 = g_4c7613 ^ 162;
        g_4c7634 = g_4c7614 ^ 0x33;
        g_4c7635 = g_4c7615 ^ 137;
        g_4c7636 = g_4c7616 ^ 184;
        g_4c7637 = g_4c7617 ^ 108;
        g_4c7638 = g_4c7618 ^ 26;
        g_4c7639 = g_4c7619 ^ 195;
        g_4c763a = g_4c761a ^ 77;
        g_4c763b = g_4c761b ^ 0xcc;
        g_4c763c = g_4c761c ^ 103;
        g_4c763d = g_4c761d ^ 181;
        g_4c763e = g_4c761e ^ 197;
        g_4c763f = g_4c761f ^ 109;
        g_4c7640 = g_4c7620 ^ 144;
        g_4c7641 = g_4c7621 ^ 232;
        g_4c7642 = g_4c7622 ^ 0x11;
        g_4c7643 = g_4c7623 ^ 45;
        g_4c7644 = g_4c7624 ^ 55;
        g_4c7645 = g_4c7625 ^ 213;
        g_4c7646 = g_4c7626 ^ 248;
        *((char *)&g_4c75f0) = g_4c75d0 ^ 143;
        g_4c75f1 = g_4c75d1 ^ 222;
        g_4c75f2 = g_4c75d2 ^ 172;
        g_4c75f3 = g_4c75d3 ^ 97;
        g_4c75f4 = g_4c75d4 ^ 179;
        g_4c75f5 = g_4c75d5 ^ 87;
        g_4c75f6 = g_4c75d6 ^ 237;
        g_4c75f7 = g_4c75d7 ^ 12;
        g_4c75f8 = g_4c75d8 ^ 57;
        g_4c75f9 = g_4c75d9 ^ 130;
        g_4c75fa = g_4c75da ^ 90;
        g_4c75fb = g_4c75db ^ 30;
        g_4c75fc = g_4c75dc ^ 130;
        g_4c75fd = g_4c75dd ^ 199;
        g_4c75fe = g_4c75de ^ 15;
        g_4c75ff = g_4c75df ^ 146;
        g_4c7600 = g_4c75e0 ^ 123;
        g_4c7601 = g_4c75e1 ^ 45;
        g_4c7602 = g_4c75e2 ^ 226;
        g_4c7603 = g_4c75e3 ^ 56;
        g_4c7604 = g_4c75e4 ^ 179;
        g_4c7605 = g_4c75e5 ^ 41;
        g_4c7606 = g_4c75e6 ^ 69;
        g_4c7607 = g_4c75e7 ^ 89;
        g_4c7608 = g_4c75e8 ^ 18;
        g_4c7609 = g_4c75e9 ^ 212;
        g_4c760a = g_4c75ea ^ 91;
        g_4c760b = g_4c75eb ^ 218;
        g_4c760c = g_4c75ec ^ 229;
    }
    /* unsupported instruction */
    g_57b458 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(&g_4c7630);
    _MSHookMessageEx(ch, SEL_isShowHeadImage, 0xaf0c, &g_57b398);
    ch1 = _objc_getClass(&g_4c75f0);
    _MSHookMessageEx(ch1, SEL_tableView_heightForRowAtIndexPath_, 0xb460, &g_57b3a0);
    return _MSHookMessageEx();
}
