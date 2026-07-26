/* Recovered pseudocode
 * Objective-C: -[WCLGVariableBlurHostView initWithFrame:]
 * Address: 0x29a6dc; original size: 768 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.757s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

unsigned long long * sub_29a6dc(unsigned long a0)
{
    unsigned long long v9;  // x22
    unsigned long long v10;  // x21
    unsigned long long v19;  // x0
    unsigned long v20;  // x8
    long long count;  // x0
    long long v22;  // x0
    unsigned long long v11;  // x20
    unsigned long long v12;  // x19
    unsigned long long v13;  // x30
    long long *count1;  // x19
    long long count2;  // x0
    long long len;  // x20
    long long v17;  // x0
    long long v18;  // x0
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    /* unsupported instruction */
    if (!(int)g_57ffbc)
    {
        g_5307c0 = g_5307a0 ^ 132;
        g_5307c1 = g_5307a1 ^ 116;
        g_5307c2 = g_5307a2 ^ 8;
        g_5307c3 = g_5307a3 ^ 0xaa;
        g_5307c4 = g_5307a4 ^ 0x66;
        g_5307c5 = g_5307a5 ^ 156;
        g_5307c6 = g_5307a6 ^ 96;
        g_5307c7 = g_5307a7 ^ 134;
        g_5307c8 = g_5307a8 ^ 125;
        g_5307c9 = g_5307a9 ^ 3;
        g_5307ca = g_5307aa ^ 39;
        g_5307cb = g_5307ab ^ 0x99;
        g_5307cc = g_5307ac ^ 185;
        g_5307cd = g_5307ad ^ 240;
        g_5307ce = g_5307ae ^ 110;
        g_5307cf = g_5307af ^ 177;
        g_5307d0 = g_5307b0 ^ 223;
        g_5307d1 = g_5307b1 ^ 47;
        g_5307d2 = g_5307b2 ^ 46;
        g_5307d3 = g_5307b3 ^ 16;
        g_5307d4 = g_5307b4 ^ 223;
    }
    v2 = v9;
    v3 = v10;
    v4 = v11;
    v5 = v12;
    v6 = &v8;
    v7 = v13;
    /* unsupported instruction */
    *((unsigned int *)&g_57ffbc) = 1;
    v0 = a0;
    v1 = g_4c4788;
    count1 = _objc_msgSendSuper2(&v0, SEL_initWithFrame_);
    if (!count1)
        return count1;
    _objc_msgSend(count1, SEL_setUserInteractionEnabled_, 0);
    _objc_msgSend(count1, SEL_setOpaque_, 0);
    count2 = _objc_msgSend(g_4c4090, SEL_clearColor);
    len = _objc_retainAutoreleasedReturnValue(count2, SEL_clearColor);
    _objc_msgSend(count1, SEL_setBackgroundColor_, len);
    _objc_release(len);
    _objc_msgSend(count1, SEL_setClipsToBounds_, 0);
    v17 = _objc_msgSend(count1, SEL_layer);
    v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_layer);
    _objc_msgSend(v18, SEL_setName_, &g_530800);
    _objc_release(v18);
    v19 = _objc_retainAutoreleasedReturnValue(sub_11defc(sub_7aa9c(count1)));
    v20 = *((long long *)((char *)count1 + g_4c4b90));
    *((unsigned long long *)((char *)count1 + g_4c4b90)) = v19;
    _objc_release(v20);
    if (!*((long long *)((char *)count1 + g_4c4b90)))
        return count1;
    _objc_msgSend(count1, SEL_bounds);
    _objc_msgSend(*((long long *)((char *)count1 + g_4c4b90)), SEL_setFrame_);
    _objc_msgSend(*((long long *)((char *)count1 + g_4c4b90)), SEL_setMasksToBounds_, 1);
    sub_11dfe0(*((long long *)((char *)count1 + g_4c4b90)));
    count = _objc_msgSend(count1, SEL_layer);
    v22 = _objc_retainAutoreleasedReturnValue(count, SEL_layer);
    _objc_msgSend(v22, SEL_addSublayer_, *((long long *)((char *)count1 + g_4c4b90)));
    _objc_release(v22);
    return count1;
}
