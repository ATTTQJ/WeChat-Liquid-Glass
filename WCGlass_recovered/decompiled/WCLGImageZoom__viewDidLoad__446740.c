/* Recovered pseudocode
 * Objective-C: -[WCLGImageZoom viewDidLoad]
 * Address: 0x446740; original size: 1296 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.407s
 */

long long sub_446740(unsigned long len)
{
    long long count;  // x0
    long long len1;  // x21
    long long count1;  // x0
    long long v15;  // x0
    long long count2;  // x0
    long long v17;  // x0
    long long v18;  // x0
    long long v19;  // x0
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    long long v6;  // x0
    long long v24;  // x0
    long long v25;  // x26
    long long v26;  // x0
    long long len2;  // x27
    long long v28;  // x0
    long long v29;  // x0
    long long v30;  // x0
    long long v31;  // x22
    long long v32;  // x0
    long long v33;  // x0
    long long v7;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long v36;  // x0
    long long v37;  // x23
    long long v38;  // x0
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x23
    long long v42;  // x0
    long long v43;  // x22
    long long v8;  // x0
    long long v44;  // x0
    long long v45;  // x22
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x0
    long long v49;  // x20
    long long v50;  // x0
    long long v51;  // x0
    long long v9;  // x0
    long long v10;  // x0
    long long v11;  // x21
    long long v12;  // x0
    long long v13;  // x0
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = len;
    v1 = g_4c4830;
    _objc_msgSendSuper2(&v0, SEL_viewDidLoad);
    count = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
    len1 = _objc_retainAutoreleasedReturnValue(count, SEL_colorWithWhite_alpha_);
    v6 = _objc_msgSend(len, SEL_view);
    v7 = _objc_retainAutoreleasedReturnValue(v6, SEL_view);
    _objc_msgSend(v7, SEL_setBackgroundColor_, len1);
    _objc_release(v7);
    _objc_release(len1);
    v8 = _objc_alloc(g_4c4188);
    v9 = _objc_msgSend(len, SEL_view);
    v10 = _objc_retainAutoreleasedReturnValue(v9, SEL_view);
    _objc_msgSend(v10, SEL_bounds);
    v11 = _objc_msgSend(v8, SEL_initWithFrame_);
    _objc_msgSend(len, SEL_setScroll_, v11);
    _objc_release(v11);
    _objc_release(v10);
    v12 = _objc_msgSend(len, SEL_scroll);
    v13 = _objc_retainAutoreleasedReturnValue(v12, SEL_scroll);
    _objc_msgSend(v13, SEL_setAutoresizingMask_, 18);
    _objc_release(v13);
    count1 = _objc_msgSend(len, SEL_scroll);
    v15 = _objc_retainAutoreleasedReturnValue(count1, SEL_scroll);
    _objc_msgSend(v15, SEL_setDelegate_, len);
    _objc_release(v15);
    count2 = _objc_msgSend(len, SEL_scroll);
    v17 = _objc_retainAutoreleasedReturnValue(count2, SEL_scroll);
    _objc_msgSend(v17, SEL_setMinimumZoomScale_);
    _objc_release(v17);
    v18 = _objc_msgSend(len, SEL_scroll);
    v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_scroll);
    _objc_msgSend(v19, SEL_setMaximumZoomScale_);
    _objc_release(v19);
    v20 = _objc_msgSend(len, SEL_scroll);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_scroll);
    _objc_msgSend(v21, SEL_setShowsHorizontalScrollIndicator_, 0);
    _objc_release(v21);
    v22 = _objc_msgSend(len, SEL_scroll);
    v23 = _objc_retainAutoreleasedReturnValue(v22, SEL_scroll);
    _objc_msgSend(v23, SEL_setShowsVerticalScrollIndicator_, 0);
    _objc_release(v23);
    v24 = _objc_msgSend(len, SEL_view);
    v25 = _objc_retainAutoreleasedReturnValue(v24, SEL_view);
    v26 = _objc_msgSend(len, SEL_scroll);
    len2 = _objc_retainAutoreleasedReturnValue(v26, SEL_scroll);
    _objc_msgSend(v25, SEL_addSubview_, len2);
    _objc_release(len2);
    _objc_release(v25);
    v28 = _objc_alloc(g_4c4088);
    v29 = _objc_msgSend(len, SEL_view);
    v30 = _objc_retainAutoreleasedReturnValue(v29, SEL_view);
    _objc_msgSend(v30, SEL_bounds);
    v31 = _objc_msgSend(v28, SEL_initWithFrame_);
    _objc_msgSend(len, SEL_setImageView_, v31);
    _objc_release(v31);
    _objc_release(v30);
    v32 = _objc_msgSend(len, SEL_imageView);
    v33 = _objc_retainAutoreleasedReturnValue(v32, SEL_imageView);
    _objc_msgSend(v33, SEL_setAutoresizingMask_, 18);
    _objc_release(v33);
    v34 = _objc_msgSend(len, SEL_imageView);
    v35 = _objc_retainAutoreleasedReturnValue(v34, SEL_imageView);
    _objc_msgSend(v35, SEL_setContentMode_, 1);
    _objc_release(v35);
    v36 = _objc_msgSend(len, SEL_image);
    v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_image);
    v38 = _objc_msgSend(len, SEL_imageView);
    v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_imageView);
    _objc_msgSend(v39, SEL_setImage_, v37);
    _objc_release(v39);
    _objc_release(v37);
    v40 = _objc_msgSend(len, SEL_scroll);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_scroll);
    v42 = _objc_msgSend(len, SEL_imageView);
    v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_imageView);
    _objc_msgSend(v41, SEL_addSubview_, v43);
    _objc_release(v43);
    _objc_release(v41);
    v44 = _objc_alloc(g_4c43f8);
    v45 = _objc_msgSend(v44, SEL_initWithTarget_action_, len, SEL_dismissSelf);
    v46 = _objc_msgSend(len, SEL_view);
    v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_view);
    _objc_msgSend(v47, SEL_addGestureRecognizer_, v45);
    _objc_release(v47);
    v48 = _objc_alloc(g_4c43f8);
    v49 = _objc_msgSend(v48, SEL_initWithTarget_action_, len, SEL_doubleTap_);
    _objc_msgSend(v49, SEL_setNumberOfTapsRequired_, 2, SEL_doubleTap_);
    v50 = _objc_msgSend(len, SEL_scroll);
    v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_scroll);
    _objc_msgSend(v51, SEL_addGestureRecognizer_, v49);
    _objc_release(v51);
    _objc_msgSend(v45, SEL_requireGestureRecognizerToFail_, v49);
    _objc_release(v49);
    return _objc_release(v45);
}
