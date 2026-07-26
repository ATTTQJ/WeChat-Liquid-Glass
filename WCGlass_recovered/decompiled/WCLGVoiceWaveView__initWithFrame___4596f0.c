/* Recovered pseudocode
 * Objective-C: -[WCLGVoiceWaveView initWithFrame:]
 * Address: 0x4596f0; original size: 1024 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.086s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

unsigned long long * sub_4596f0(unsigned long a0)
{
    unsigned long long v21;  // d11
    unsigned long long v22;  // d10
    unsigned long long v31;  // x22
    unsigned long long v32;  // x21
    unsigned long long v33;  // x20
    unsigned long long v34;  // x19
    unsigned long long v35;  // x30
    long long *count;  // x19
    long long count1;  // x0
    long long len;  // x20
    long long v39;  // x20
    long long count2;  // x0
    unsigned long long v23;  // d9
    unsigned long long v41;  // x0
    unsigned long v42;  // x8
    long long i;  // x20
    long long v44;  // x0
    long long len1;  // x27
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x0
    long long v49;  // x0
    long long v50;  // x0
    unsigned long long v24;  // d8
    long long v51;  // x20
    unsigned long long v52;  // x0
    unsigned long v53;  // x8
    long long v54;  // x0
    long long len2;  // x21
    unsigned long v56;  // x1
    long long v57;  // x21
    unsigned long long v58;  // x0
    unsigned long v59;  // x8
    unsigned long long v25;  // x28
    unsigned long long v26;  // x27
    unsigned long long v27;  // x26
    unsigned long long v28;  // x25
    unsigned long long v29;  // x24
    unsigned long long v30;  // x23
    unsigned long v0;  // [bp-0xa0]
    unsigned long v1;  // [bp-0x98]
    unsigned long v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x20]
    unsigned long long v17;  // [bp-0x18]
    char *v18;  // [bp-0x10]
    unsigned long long v19;  // [bp-0x8]
    char v20;  // [bp+0x0]

    /* unsupported instruction */
    if (!(int)g_582e38)
    {
        g_57a625 = g_57a620 ^ 109;
        g_57a626 = g_57a621 ^ 138;
        g_57a627 = g_57a622 ^ 168;
        g_57a628 = g_57a623 ^ 21;
        g_57a629 = g_57a624 ^ 251;
    }
    v4 = v21;
    v5 = v22;
    v6 = v23;
    v7 = v24;
    v8 = v25;
    v9 = v26;
    v10 = v27;
    v11 = v28;
    v12 = v29;
    v13 = v30;
    v14 = v31;
    v15 = v32;
    v16 = v33;
    v17 = v34;
    v18 = &v20;
    v19 = v35;
    /* unsupported instruction */
    *((unsigned int *)&g_582e38) = 1;
    v0 = a0;
    v1 = g_4c4850;
    count = _objc_msgSendSuper2(&v0, SEL_initWithFrame_);
    if (!count)
        return count;
    _objc_msgSend(count, SEL_setUserInteractionEnabled_, 0);
    count1 = _objc_msgSend(g_4c4090, SEL_clearColor);
    len = _objc_retainAutoreleasedReturnValue(count1, SEL_clearColor);
    v2 = SEL_setBackgroundColor_;
    _objc_msgSend(count, SEL_setBackgroundColor_, len);
    _objc_release(len);
    _objc_msgSend(count, SEL_setClipsToBounds_, 0);
    v39 = 20;
    count2 = _objc_msgSend(g_4c4110, SEL_arrayWithCapacity_, 20);
    v41 = _objc_retainAutoreleasedReturnValue(count2, SEL_arrayWithCapacity_, 20);
    v42 = *((long long *)((char *)count + g_4c4f84));
    *((unsigned long long *)((char *)count + g_4c4f84)) = v41;
    _objc_release(v42);
    v3 = SEL_colorWithRed_green_blue_alpha_;
    do
    {
        i = v39;
        v44 = _objc_msgSend(g_4c4280, SEL_layer);
        len1 = _objc_retainAutoreleasedReturnValue(v44, SEL_layer);
        _objc_msgSend(len1, SEL_setCornerRadius_);
        v46 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v3), v3);
        v47 = _objc_retainAutorelease(v46);
        v48 = _objc_msgSend(v47, SEL_CGColor);
        _objc_msgSend(len1, v2, v48);
        _objc_release(v46);
        v49 = _objc_msgSend(count, SEL_layer);
        v50 = _objc_retainAutoreleasedReturnValue(v49, SEL_layer);
        _objc_msgSend(v50, SEL_addSublayer_, len1);
        _objc_release(v50);
        _objc_msgSend(*((long long *)((char *)count + g_4c4f84)), SEL_addObject_, len1);
        _objc_release(len1);
        v51 = i - 1;
        v39 = v51;
    } while (i != 1);
    v52 = _objc_alloc_init(g_4c4158);
    v53 = *((long long *)((char *)count + g_4c4f88));
    *((unsigned long long *)((char *)count + g_4c4f88)) = v52;
    _objc_release(v53);
    v54 = _objc_msgSend(g_4c4218, SEL_monospacedDigitSystemFontOfSize_weight_);
    len2 = _objc_retainAutoreleasedReturnValue(v54, SEL_monospacedDigitSystemFontOfSize_weight_);
    _objc_msgSend(*((long long *)((char *)count + g_4c4f88)), SEL_setFont_, len2);
    _objc_release(len2);
    v56 = v3;
    v57 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v56), v56);
    _objc_msgSend(*((long long *)((char *)count + g_4c4f88)), SEL_setTextColor_, v57);
    _objc_release(v57);
    _objc_msgSend(*((long long *)((char *)count + g_4c4f88)), SEL_setTextAlignment_, 0);
    _objc_msgSend(*((long long *)((char *)count + g_4c4f88)), SEL_setText_, &g_57a650);
    _objc_msgSend(count, SEL_addSubview_, *((long long *)((char *)count + g_4c4f88)));
    *((unsigned long long *)((char *)count + g_4c4f8c)) = 0;
    v58 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v56), v56);
    v59 = *((long long *)((char *)count + g_4c4f90));
    *((unsigned long long *)((char *)count + g_4c4f90)) = v58;
    _objc_release(v59);
    *((unsigned long *)((char *)count + g_4c4f94)) = 0xffffffffffffffff;
    return count;
}
