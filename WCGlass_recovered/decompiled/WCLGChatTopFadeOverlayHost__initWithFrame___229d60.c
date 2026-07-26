/* Recovered pseudocode
 * Objective-C: -[WCLGChatTopFadeOverlayHost initWithFrame:]
 * Address: 0x229d60; original size: 772 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.585s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

unsigned long long * sub_229d60(unsigned long a0)
{
    unsigned long long v9;  // x22
    unsigned long long v10;  // x21
    long long count;  // x0
    long long v20;  // x0
    long long v21;  // x0
    unsigned long long count1;  // x0
    unsigned long v23;  // x8
    unsigned long long v11;  // x20
    unsigned long long v12;  // x19
    unsigned long long v13;  // x30
    long long *count2;  // x19
    long long v15;  // x0
    long long len;  // x21
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
    if (!(int)g_57f400)
    {
        g_51d700 = g_51d6e0 ^ 209;
        g_51d701 = g_51d6e1 ^ 88;
        g_51d702 = g_51d6e2 ^ 57;
        g_51d703 = g_51d6e3 ^ 103;
        g_51d704 = g_51d6e4 ^ 5;
        g_51d705 = g_51d6e5 ^ 16;
        g_51d706 = g_51d6e6 ^ 71;
        g_51d707 = g_51d6e7 ^ 249;
        g_51d708 = g_51d6e8 ^ 171;
        g_51d709 = g_51d6e9 ^ 128;
        g_51d70a = g_51d6ea ^ 161;
        g_51d70b = g_51d6eb ^ 63;
        g_51d70c = g_51d6ec ^ 40;
        g_51d70d = g_51d6ed ^ 92;
        g_51d70e = g_51d6ee ^ 8;
        g_51d70f = g_51d6ef ^ 26;
        g_51d710 = g_51d6f0 ^ 166;
        g_51d711 = g_51d6f1 ^ 96;
        g_51d712 = g_51d6f2 ^ 219;
    }
    v2 = v9;
    v3 = v10;
    v4 = v11;
    v5 = v12;
    v6 = &v8;
    v7 = v13;
    /* unsupported instruction */
    *((unsigned int *)&g_57f400) = 1;
    v0 = a0;
    v1 = g_4c4720;
    count2 = _objc_msgSendSuper2(&v0, SEL_initWithFrame_);
    if (!count2)
        return count2;
    _objc_msgSend(count2, SEL_setUserInteractionEnabled_, 0);
    _objc_msgSend(count2, SEL_setAccessibilityElementsHidden_, 1);
    _objc_msgSend(count2, SEL_setOpaque_, 0);
    v15 = _objc_msgSend(g_4c4090, SEL_clearColor);
    len = _objc_retainAutoreleasedReturnValue(v15, SEL_clearColor);
    _objc_msgSend(count2, SEL_setBackgroundColor_, len);
    _objc_release(len);
    _objc_msgSend(count2, SEL_setClipsToBounds_, 0);
    v17 = _objc_msgSend(count2, SEL_layer);
    v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_layer);
    _objc_msgSend(v18, SEL_setZPosition_);
    _objc_release(v18);
    count = _objc_msgSend(count2, SEL_layer);
    v20 = _objc_retainAutoreleasedReturnValue(count, SEL_layer);
    _objc_msgSend(v20, SEL_setName_, &g_51d740);
    _objc_release(v20);
    sub_7aa9c(count2);
    v21 = _objc_alloc(g_4c4418);
    count1 = _objc_msgSend(v21, SEL_initWithFrame_);
    v23 = *((long long *)((char *)count2 + g_4c49d0));
    *((unsigned long long *)((char *)count2 + g_4c49d0)) = count1;
    _objc_release(v23);
    _objc_msgSend(*((long long *)((char *)count2 + g_4c49d0)), SEL_setBlurEnabled_, 1);
    _objc_msgSend(count2, SEL_addSubview_, *((long long *)((char *)count2 + g_4c49d0)));
    return count2;
}
