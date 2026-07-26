/* Mach-O initializer 22/33
 * Address: 0x62144; original size: 744 bytes
 * Status: ok; elapsed: 0.529s
 */

unsigned long long sub_62144(void)
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
    if (!g_57cbc0)
    {
        *((char *)&g_4d2440) = g_4d2420 ^ 129;
        g_4d2441 = g_4d2421 ^ 237;
        g_4d2442 = g_4d2422 ^ 232;
        g_4d2443 = g_4d2423 ^ 14;
        g_4d2444 = g_4d2424 ^ 218;
        g_4d2445 = g_4d2425 ^ 249;
        g_4d2446 = g_4d2426 ^ 82;
        g_4d2447 = g_4d2427 ^ 114;
        g_4d2448 = g_4d2428 ^ 95;
        g_4d2449 = g_4d2429 ^ 52;
        g_4d244a = g_4d242a ^ 66;
        g_4d244b = g_4d242b ^ 202;
        g_4d244c = g_4d242c ^ 247;
        g_4d244d = g_4d242d ^ 28;
        g_4d244e = g_4d242e ^ 87;
        g_4d244f = g_4d242f ^ 125;
        g_4d2450 = g_4d2430 ^ 150;
        g_4d2451 = g_4d2431 ^ 195;
        g_4d2452 = g_4d2432 ^ 158;
        *((char *)&g_4d240c) = g_4d2400 ^ 46;
        g_4d240d = g_4d2401 ^ 143;
        g_4d240e = g_4d2402 ^ 236;
        g_4d240f = g_4d2403 ^ 72;
        g_4d2410 = g_4d2404 ^ 72;
        g_4d2411 = g_4d2405 ^ 158;
        g_4d2412 = g_4d2406 ^ 49;
        g_4d2413 = g_4d2407 ^ 248;
        g_4d2414 = g_4d2408 ^ 165;
        g_4d2415 = g_4d2409 ^ 96;
        g_4d2416 = g_4d240a ^ 0xbb;
        g_4d2417 = g_4d240b ^ 0x44;
    }
    /* unsupported instruction */
    g_57cbc0 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v4 = _objc_msgSend(v3, SEL_liquidGlassEnabled);
    v5 = _objc_release(v3);
    if (!v4)
        return v5;
    ch = _objc_getClass(",");
    _MSHookMessageEx(ch, SEL_viewDidLayoutSubviews, 0x62440, &g_57cba0);
    _MSHookMessageEx(ch, SEL_viewDidAppear_, 0x6246c, &g_57cba8);
    ch1 = _objc_getClass(&g_4d240c);
    _MSHookMessageEx(ch1, SEL_didMoveToWindow, 0x62498, &g_57cbb0);
    return _MSHookMessageEx();
}
