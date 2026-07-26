/* Recovered pseudocode
 * Objective-C: -[WCLGChatBottomFadeOverlayHost initWithFrame:]
 * Address: 0x22a43c; original size: 840 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.802s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

unsigned long long * sub_22a43c(unsigned long a0)
{
    unsigned long long v9;  // x22
    unsigned long long v10;  // x21
    long long count;  // x0
    long long v20;  // x0
    long long v22;  // x0
    unsigned long long count1;  // x0
    unsigned long v24;  // x8
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
    if (!(int)g_57f428)
    {
        g_51d780 = g_51d760 ^ 183;
        g_51d781 = g_51d761 ^ 225;
        g_51d782 = g_51d762 ^ 209;
        g_51d783 = g_51d763 ^ 138;
        g_51d784 = g_51d764 ^ 182;
        g_51d785 = g_51d765 ^ 129;
        g_51d786 = g_51d766 ^ 242;
        g_51d787 = g_51d767 ^ 122;
        g_51d788 = g_51d768 ^ 149;
        g_51d789 = g_51d769 ^ 45;
        g_51d78a = g_51d76a ^ 115;
        g_51d78b = g_51d76b ^ 205;
        g_51d78c = g_51d76c ^ 168;
        g_51d78d = g_51d76d ^ 147;
        g_51d78e = g_51d76e ^ 47;
        g_51d78f = g_51d76f ^ 43;
        g_51d790 = g_51d770 ^ 174;
        g_51d791 = g_51d771 ^ 33;
        g_51d792 = g_51d772 ^ 159;
        g_51d793 = g_51d773 ^ 106;
        g_51d794 = g_51d774 ^ 168;
        g_51d795 = g_51d775 ^ 117;
    }
    v2 = v9;
    v3 = v10;
    v4 = v11;
    v5 = v12;
    v6 = &v8;
    v7 = v13;
    /* unsupported instruction */
    *((unsigned int *)&g_57f428) = 1;
    v0 = a0;
    v1 = g_4c4728;
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
    _objc_msgSend(v20, SEL_setName_, &g_51d7c0);
    _objc_release(v20);
    sub_45593c(sub_7aa9c(count2));
    *((unsigned long long *)((char *)count2 + g_4c49dc)) = 0;
    v22 = _objc_alloc(g_4c4418);
    count1 = _objc_msgSend(v22, SEL_initWithFrame_);
    v24 = *((long long *)((char *)count2 + g_4c49e0));
    *((unsigned long long *)((char *)count2 + g_4c49e0)) = count1;
    _objc_release(v24);
    _objc_msgSend(*((long long *)((char *)count2 + g_4c49e0)), SEL_setBlurEnabled_, 1);
    _objc_msgSend(count2, SEL_addSubview_, *((long long *)((char *)count2 + g_4c49e0)));
    return count2;
}
