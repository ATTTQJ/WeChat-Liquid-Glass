/* Recovered pseudocode
 * Objective-C: -[WCLGTextEditorViewController viewDidLoad]
 * Address: 0x3d5c08; original size: 1684 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.646s
 */

long long sub_3d5c08(unsigned long len)
{
    long long count;  // x0
    long long len1;  // x21
    long long count1;  // x0
    long long v18;  // x0
    long long v19;  // x0
    long long count2;  // x21
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    long long len2;  // x25
    long long v25;  // x0
    long long v26;  // x27
    long long v9;  // x0
    long long v27;  // x0
    long long v28;  // x28
    long long v29;  // x0
    long long v30;  // x28
    long long v31;  // x0
    long long v32;  // x0
    long long v33;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long v36;  // x25
    long long v10;  // x0
    long long v37;  // x0
    long long v38;  // x25
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x0
    long long v43;  // x24
    long long v44;  // x0
    long long v45;  // x25
    long long v46;  // x0
    long long v11;  // x0
    long long v47;  // x25
    long long v48;  // x22
    long long v49;  // x0
    long long v12;  // x21
    long long v13;  // x0
    long long v14;  // x0
    long long v15;  // x0
    long long v16;  // x0
    unsigned long v0;  // [bp-0xc0]
    unsigned long v1;  // [bp-0xb8]
    unsigned long v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    unsigned long v4;  // [bp-0x98]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    /* unsupported instruction */
    if (!(int)g_582234)
    {
        *((unsigned short *)&g_55c9ae) = g_55c9a8 ^ 36449;
        *((unsigned short *)&g_55c9b0) = g_55c9aa ^ 14043;
        *((unsigned short *)&g_55c9b2) = g_55c9ac ^ 22378;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_582234) = 1;
    v0 = len;
    v1 = g_4c4818;
    _objc_msgSendSuper2(&v0, SEL_viewDidLoad);
    count = _objc_msgSend(g_4c4090, SEL_systemGroupedBackgroundColor);
    len1 = _objc_retainAutoreleasedReturnValue(count, SEL_systemGroupedBackgroundColor);
    v4 = SEL_view;
    v9 = _objc_msgSend(len, SEL_view);
    v10 = _objc_retainAutoreleasedReturnValue(v9, SEL_view);
    _objc_msgSend(v10, SEL_setBackgroundColor_, len1);
    _objc_release(v10);
    _objc_release(len1);
    v11 = _objc_alloc(g_4c4328);
    v12 = _objc_msgSend(v11, SEL_initWithTitle_style_target_action_, &g_55c9e0, 2, len, SEL_saveTapped);
    v13 = _objc_msgSend(len, SEL_navigationItem);
    v14 = _objc_retainAutoreleasedReturnValue(v13, SEL_navigationItem);
    _objc_msgSend(v14, SEL_setRightBarButtonItem_, v12);
    _objc_release(v14);
    _objc_release(v12);
    v15 = _objc_msgSend(g_4c41f0, SEL_defaultCenter);
    v16 = _objc_retainAutoreleasedReturnValue(v15, SEL_defaultCenter);
    _objc_msgSend(v16, SEL_addObserver_selector_name_object_, len, SEL_keyboardFrameChanged_, *((long long *)&g_600420), 0);
    _objc_release(v16);
    count1 = _objc_msgSend(g_4c41f0, SEL_defaultCenter);
    v18 = _objc_retainAutoreleasedReturnValue(count1, SEL_defaultCenter);
    _objc_msgSend(v18, SEL_addObserver_selector_name_object_, len, SEL_keyboardFrameChanged_, *((long long *)&g_600428), 0);
    _objc_release(v18);
    v19 = _objc_alloc(g_4c40f8);
    count2 = _objc_msgSend(v19, SEL_initWithFrame_);
    v21 = _objc_msgSend(len, SEL_initialText);
    v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_initialText);
    if (_objc_msgSend(v22, SEL_length))
    {
        v23 = _objc_msgSend(len, SEL_initialText);
        len2 = _objc_retainAutoreleasedReturnValue(v23, SEL_initialText);
        v3 = SEL_setText_;
        _objc_msgSend(count2, SEL_setText_, len2);
        _objc_release(len2);
        v2 = SEL_placeholderText;
    }
    else
    {
        v2 = SEL_placeholderText;
        v25 = _objc_msgSend(len, SEL_placeholderText);
        v26 = _objc_retainAutoreleasedReturnValue(v25, SEL_placeholderText);
        v3 = SEL_setText_;
        _objc_msgSend(count2, SEL_setText_, v26);
        _objc_release(v26);
    }
    _objc_release(v22);
    v27 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_systemFontOfSize_weight_);
    _objc_msgSend(count2, SEL_setFont_, v28);
    _objc_release(v28);
    v29 = _objc_msgSend(g_4c4090, SEL_whiteColor);
    v30 = _objc_retainAutoreleasedReturnValue(v29, SEL_whiteColor);
    _objc_msgSend(count2, SEL_setBackgroundColor_, v30);
    _objc_release(v30);
    v31 = _objc_msgSend(count2, SEL_layer);
    v32 = _objc_retainAutoreleasedReturnValue(v31, SEL_layer);
    _objc_msgSend(v32, SEL_setCornerRadius_);
    _objc_release(v32);
    v33 = _objc_msgSend(count2, SEL_layer);
    v34 = _objc_retainAutoreleasedReturnValue(v33, SEL_layer);
    _objc_msgSend(v34, SEL_setMasksToBounds_, 1);
    _objc_release(v34);
    _objc_msgSend(count2, SEL_setTextContainerInset_);
    _objc_msgSend(count2, SEL_setAlwaysBounceVertical_, 1);
    v35 = _objc_msgSend(g_4c4090, SEL_secondarySystemGroupedBackgroundColor);
    v36 = _objc_retainAutoreleasedReturnValue(v35, SEL_secondarySystemGroupedBackgroundColor);
    _objc_msgSend(count2, SEL_setBackgroundColor_, v36);
    _objc_release(v36);
    v37 = _objc_msgSend(g_4c4090, SEL_labelColor);
    v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_labelColor);
    _objc_msgSend(count2, SEL_setTextColor_, v38);
    _objc_release(v38);
    v39 = _objc_msgSend(count2, SEL_layer);
    v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_layer);
    _objc_msgSend(v40, SEL_setCornerCurve_, *((long long *)&g_600628));
    _objc_release(v40);
    v41 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v4), v4);
    _objc_msgSend(v41, SEL_addSubview_, count2);
    _objc_release(v41);
    _objc_msgSend(len, SEL_setTextView_, count2);
    v42 = _objc_alloc(g_4c4158);
    v43 = _objc_msgSend(v42, SEL_initWithFrame_);
    _objc_msgSend(v43, SEL_setNumberOfLines_, 0);
    v44 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_systemFontOfSize_weight_);
    _objc_msgSend(v43, SEL_setFont_, v45);
    _objc_release(v45);
    v46 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_secondaryLabelColor);
    _objc_msgSend(v43, SEL_setTextColor_, v47);
    _objc_release(v47);
    v48 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v2), v2);
    _objc_msgSend(v43, v3, v48);
    _objc_release(v48);
    v49 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v4), v4);
    _objc_msgSend(v49, SEL_addSubview_, v43);
    _objc_release(v49);
    _objc_msgSend(len, SEL_setHintLabel_, v43);
    _objc_release(v43);
    return _objc_release(count2);
}
