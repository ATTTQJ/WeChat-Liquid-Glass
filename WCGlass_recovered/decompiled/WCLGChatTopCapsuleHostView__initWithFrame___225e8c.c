/* Recovered pseudocode
 * Objective-C: -[WCLGChatTopCapsuleHostView initWithFrame:]
 * Address: 0x225e8c; original size: 1372 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.132s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

unsigned long long * sub_225e8c(unsigned long a0)
{
    unsigned long long v15;  // x28
    unsigned long long v16;  // x27
    unsigned long long v25;  // x30
    long long *count;  // x19
    long long count1;  // x0
    long long len;  // x20
    unsigned long long v29;  // x0
    unsigned long v30;  // x8
    long long count2;  // x0
    long long len1;  // x20
    long long v33;  // x0
    long long len2;  // x20
    unsigned long long v17;  // x26
    unsigned long long v35;  // x0
    unsigned long v36;  // x8
    long long v37;  // x0
    long long v38;  // x25
    long long v39;  // x0
    long long v40;  // x22
    unsigned long long v41;  // x0
    unsigned long v42;  // x8
    long long v43;  // x0
    long long v44;  // x20
    unsigned long long v18;  // x25
    unsigned long long v19;  // x24
    unsigned long long v20;  // x23
    unsigned long long v21;  // x22
    unsigned long long v22;  // x21
    unsigned long long v23;  // x20
    unsigned long long v24;  // x19
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    char *v12;  // [bp-0x10]
    unsigned long long v13;  // [bp-0x8]
    char v14;  // [bp+0x0]

    /* unsupported instruction */
    if (!(int)g_57f384)
    {
        g_51d000 = g_51cfe0 ^ 111;
        g_51d001 = g_51cfe1 ^ 218;
        g_51d002 = g_51cfe2 ^ 0xcc;
        g_51d003 = g_51cfe3 ^ 66;
        g_51d004 = g_51cfe4 ^ 25;
        g_51d005 = g_51cfe5 ^ 223;
        g_51d006 = g_51cfe6 ^ 87;
        g_51d007 = g_51cfe7 ^ 63;
        g_51d008 = g_51cfe8 ^ 101;
        g_51d009 = g_51cfe9 ^ 30;
        g_51d00a = g_51cfea ^ 191;
        g_51d00b = g_51cfeb ^ 48;
        g_51d00c = g_51cfec ^ 234;
        g_51d00d = g_51cfed ^ 149;
        g_51d00e = g_51cfee ^ 128;
        g_51d00f = g_51cfef ^ 213;
        g_51d010 = g_51cff0 ^ 239;
        g_51d011 = g_51cff1 ^ 201;
        g_51d012 = g_51cff2 ^ 30;
        g_51d013 = g_51cff3 ^ 124;
        g_51d014 = g_51cff4 ^ 70;
        g_51d015 = g_51cff5 ^ 3;
        g_51d016 = g_51cff6 ^ 173;
        g_51d017 = g_51cff7 ^ 79;
        g_51d018 = g_51cff8 ^ 115;
        g_51d019 = g_51cff9 ^ 112;
        *((unsigned short *)&g_51cfce) = g_51cfc8 ^ 55578;
        *((unsigned short *)&g_51cfd0) = g_51cfca ^ 49067;
        *((unsigned short *)&g_51cfd2) = g_51cfcc ^ 30452;
    }
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = v24;
    v12 = &v14;
    v13 = v25;
    /* unsupported instruction */
    *((unsigned int *)&g_57f384) = 1;
    v0 = a0;
    v1 = g_4c4718;
    count = _objc_msgSendSuper2(&v0, SEL_initWithFrame_);
    if (!count)
        return count;
    _objc_msgSend(count, SEL_setAccessibilityIdentifier_, &g_51d080);
    _objc_msgSend(count, SEL_setIsAccessibilityElement_, 1);
    _objc_msgSend(count, SEL_setAccessibilityTraits_, *((long long *)&g_600320));
    _objc_msgSend(count, SEL_setAccessibilityLabel_, &g_51d040);
    count1 = _objc_msgSend(g_4c4090, SEL_clearColor);
    len = _objc_retainAutoreleasedReturnValue(count1, SEL_clearColor);
    _objc_msgSend(count, SEL_setBackgroundColor_, len);
    _objc_release(len);
    _objc_msgSend(count, SEL_setClipsToBounds_, 0);
    v29 = _objc_alloc_init(g_4c4158);
    v30 = *((long long *)((char *)count + g_4c49b4));
    *((unsigned long long *)((char *)count + g_4c49b4)) = v29;
    _objc_release(v30);
    count2 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    len1 = _objc_retainAutoreleasedReturnValue(count2, SEL_systemFontOfSize_weight_);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b4)), SEL_setFont_, len1);
    _objc_release(len1);
    v33 = _objc_msgSend(g_4c4090, SEL_labelColor);
    len2 = _objc_retainAutoreleasedReturnValue(v33, SEL_labelColor);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b4)), SEL_setTextColor_, len2);
    _objc_release(len2);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b4)), SEL_setUserInteractionEnabled_, 0);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b4)), SEL_setLineBreakMode_, 4);
    _objc_msgSend(count, SEL_addSubview_, *((long long *)((char *)count + g_4c49b4)));
    v35 = _objc_alloc_init(g_4c4158);
    v36 = *((long long *)((char *)count + g_4c49b8));
    *((unsigned long long *)((char *)count + g_4c49b8)) = v35;
    _objc_release(v36);
    v37 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_systemFontOfSize_);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b8)), SEL_setFont_, v38);
    _objc_release(v38);
    v39 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_secondaryLabelColor);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b8)), SEL_setTextColor_, v40);
    _objc_release(v40);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b8)), SEL_setUserInteractionEnabled_, 0);
    _objc_msgSend(*((long long *)((char *)count + g_4c49b8)), SEL_setLineBreakMode_, 4);
    _objc_msgSend(count, SEL_addSubview_, *((long long *)((char *)count + g_4c49b8)));
    v41 = _objc_alloc_init(g_4c4088);
    v42 = *((long long *)((char *)count + g_4c49bc));
    *((unsigned long long *)((char *)count + g_4c49bc)) = v41;
    _objc_release(v42);
    _objc_msgSend(*((long long *)((char *)count + g_4c49bc)), SEL_setContentMode_, 1);
    _objc_msgSend(*((long long *)((char *)count + g_4c49bc)), SEL_setUserInteractionEnabled_, 0);
    _objc_msgSend(*((long long *)((char *)count + g_4c49bc)), SEL_setHidden_, 1);
    _objc_msgSend(count, SEL_addSubview_, *((long long *)((char *)count + g_4c49bc)));
    v43 = _objc_alloc(g_4c43f8);
    v44 = _objc_msgSend(v43, SEL_initWithTarget_action_, count, SEL_wclg_handleTap);
    _objc_msgSend(count, SEL_addGestureRecognizer_, v44);
    _objc_release(v44);
    return count;
}
