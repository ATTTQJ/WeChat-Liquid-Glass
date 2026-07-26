/* Hook replacement 250/418
 * Selectors: SEL_m_arrShowIDs
 * Address: 0x3f38c; original size: 512 bytes
 * Status: ok; elapsed: 0.421s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3f38c(void)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x19
    long long count;  // x0
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
    if (!g_57c3cc)
    {
        g_4ce1d0 = g_4ce1b0 ^ 155;
        g_4ce1d1 = g_4ce1b1 ^ 49;
        g_4ce1d2 = g_4ce1b2 ^ 25;
        g_4ce1d3 = g_4ce1b3 ^ 78;
        g_4ce1d4 = g_4ce1b4 ^ 118;
        g_4ce1d5 = g_4ce1b5 ^ 48;
        g_4ce1d6 = g_4ce1b6 ^ 167;
        g_4ce1d7 = g_4ce1b7 ^ 60;
        g_4ce1d8 = g_4ce1b8 ^ 140;
        g_4ce1d9 = g_4ce1b9 ^ 165;
        g_4ce1da = g_4ce1ba ^ 116;
        g_4ce1db = g_4ce1bb ^ 112;
        g_4ce1dc = g_4ce1bc ^ 176;
        g_4ce1dd = g_4ce1bd ^ 76;
        g_4ce1de = g_4ce1be ^ 20;
        g_4ce1df = g_4ce1bf ^ 150;
        g_4ce1e0 = g_4ce1c0 ^ 240;
        g_4ce1e1 = g_4ce1c1 ^ 120;
        g_4ce1e2 = g_4ce1c2 ^ 213;
        g_4ce1e3 = g_4ce1c3 ^ 140;
        g_4ce1e4 = g_4ce1c4 ^ 155;
    }
    /* unsupported instruction */
    g_57c3cc = 1;
    v8 = _objc_retainAutoreleasedReturnValue(g_57c3b8());
    if ((g_583009 & 1))
    {
        count = _objc_msgSend(g_4c4110, SEL_class);
        if (_objc_msgSend(v8, SEL_isKindOfClass_, count) && !((char)_objc_msgSend(v8, SEL_containsObject_, &g_4ce210) & 1))
            _objc_msgSend(v8, SEL_addObject_, &g_4ce210);
    }
}
