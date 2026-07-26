/* Mach-O initializer 3/33
 * Address: 0x7fcc; original size: 912 bytes
 * Status: ok; elapsed: 0.955s
 */

void sub_7fcc(void)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    long long v9;  // x0
    long long ch;  // x0
    long long ch1;  // x0
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
    if (!(int)g_57b360)
    {
        *((char *)&g_4c7249) = g_4c723d ^ 144;
        g_4c724a = g_4c723e ^ 129;
        g_4c724b = g_4c723f ^ 92;
        g_4c724c = g_4c7240 ^ 47;
        g_4c724d = g_4c7241 ^ 57;
        g_4c724e = g_4c7242 ^ 98;
        g_4c724f = g_4c7243 ^ 254;
        g_4c7250 = g_4c7244 ^ 157;
        g_4c7251 = g_4c7245 ^ 217;
        g_4c7252 = g_4c7246 ^ 160;
        g_4c7253 = g_4c7247 ^ 90;
        g_4c7254 = g_4c7248 ^ 248;
        *((char *)&g_4c7220) = g_4c7200 ^ 218;
        g_4c7221 = g_4c7201 ^ 195;
        g_4c7222 = g_4c7202 ^ 0xee;
        g_4c7223 = g_4c7203 ^ 44;
        g_4c7224 = g_4c7204 ^ 0xdd;
        g_4c7225 = g_4c7205 ^ 207;
        g_4c7226 = g_4c7206 ^ 195;
        g_4c7227 = g_4c7207 ^ 59;
        g_4c7228 = g_4c7208 ^ 91;
        g_4c7229 = g_4c7209 ^ 166;
        g_4c722a = g_4c720a ^ 149;
        g_4c722b = g_4c720b ^ 45;
        g_4c722c = g_4c720c ^ 115;
        g_4c722d = g_4c720d ^ 66;
        g_4c722e = g_4c720e ^ 105;
        g_4c722f = g_4c720f ^ 246;
        g_4c7230 = g_4c7210 ^ 28;
        g_4c7231 = g_4c7211 ^ 208;
        g_4c7232 = g_4c7212 ^ 12;
        g_4c7233 = g_4c7213 ^ 80;
        g_4c7234 = g_4c7214 ^ 160;
        g_4c7235 = g_4c7215 ^ 6;
        g_4c7236 = g_4c7216 ^ 214;
        g_4c7237 = g_4c7217 ^ 12;
        g_4c7238 = g_4c7218 ^ 225;
        g_4c7239 = g_4c7219 ^ 185;
        g_4c723a = g_4c721a ^ 28;
        g_4c723b = g_4c721b ^ 21;
        g_4c723c = g_4c721c ^ 144;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57b360) = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v9 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    if (_objc_msgSend(v9, SEL_liquidGlassEnabled) && _objc_msgSend(v9, SEL_boolForKey_defaultValue_, g_4a3b18, 0))
    {
        ch = _objc_getClass("7");
        _MSHookMessageEx(ch, SEL_reloadData, 0x8378, &g_57b338);
        _MSHookMessageEx(ch, SEL_insertRowsAtIndexPaths_withRowAnimation_, 0x846c, &g_57b340);
        ch1 = _objc_getClass(&g_4c7220);
        _MSHookMessageEx(ch1, SEL_viewWillAppear_, 0x8584, &g_57b348);
        _MSHookMessageEx(ch1, SEL_viewDidAppear_, 0x86a8, &g_57b350);
    }
}
