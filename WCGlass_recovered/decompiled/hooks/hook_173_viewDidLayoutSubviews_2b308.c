/* Hook replacement 173/418
 * Selectors: SEL_viewDidLayoutSubviews
 * Address: 0x2b308; original size: 800 bytes
 * Status: ok; elapsed: 0.745s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_2b308(long long a0)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x0
    long long count;  // x0
    unsigned long long v23;  // x0
    long long count1;  // x0
    long long v25;  // x0
    long long count2;  // x0
    long long v27;  // x0
    long long v28;  // x0
    long long v29;  // x0
    long long v30;  // x0
    unsigned long long v13;  // x24
    long long v31;  // x0
    unsigned long long v32;  // x20
    long long v33;  // x0
    unsigned long long v34;  // x21
    unsigned long v35;  // x22
    long long v36;  // x0
    long long v37;  // x0
    long long len;  // x24
    long long v39;  // x0
    long long v40;  // x0
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x0
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = v11;
    v1 = v12;
    v2 = v13;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v8 = &v10;
    v9 = v19;
    if (sub_260fe0(g_57be18()))
    {
        v20 = _objc_msgSend(a0, SEL_navigationController);
        v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_navigationController);
        count = _objc_msgSend(v21, SEL_navigationBar);
        v23 = _objc_retainAutoreleasedReturnValue(count, SEL_navigationBar);
        _objc_release(v23);
        _objc_release(v21);
        if (v23)
        {
            count1 = _objc_msgSend(a0, SEL_navigationController);
            v25 = _objc_retainAutoreleasedReturnValue(count1, SEL_navigationController);
            count2 = _objc_msgSend(v25, SEL_navigationBar);
            v27 = _objc_retainAutoreleasedReturnValue(count2, SEL_navigationBar);
            sub_261b64(v27);
            _objc_release(v27);
            _objc_release(v25);
        }
    }
    sub_22c5f0(a0);
    _objc_retain(a0);
    v28 = _objc_msgSend(g_4c40e0, SEL_class);
    if (((char)_objc_msgSend(a0, SEL_isKindOfClass_, v28) & 1))
    {
        v29 = _objc_msgSend(a0, SEL_view);
        v30 = _objc_retainAutoreleasedReturnValue(v29, SEL_view);
        v31 = _objc_msgSend(v30, SEL_window);
        v32 = _objc_retainAutoreleasedReturnValue(v31, SEL_window);
        _objc_release(v30);
        v33 = _objc_getAssociatedObject(a0, g_4cb940);
        v34 = _objc_retainAutoreleasedReturnValue(v33, g_4cb940);
        if (v32 && (g_582f88 & 1) && (g_582fc5 & 1) && (g_5231b3 & 1))
        {
            if (v34)
            {
                v35 = SEL_bounds;
            }
            else
            {
                v36 = _objc_alloc(g_4c4160);
                v35 = SEL_bounds;
                _objc_msgSend(v32, SEL_bounds);
                v34 = _objc_msgSend(v36, SEL_initWithFrame_);
                v37 = _objc_msgSend(g_4c4090, SEL_clearColor);
                len = _objc_retainAutoreleasedReturnValue(v37, SEL_clearColor);
                _objc_msgSend(v34, SEL_setBackgroundColor_, len);
                _objc_release(len);
                _objc_msgSend(v34, SEL_setOpaque_, 0);
                _objc_msgSend(v34, SEL_setUserInteractionEnabled_, 1);
                _objc_setAssociatedObject(a0, g_4cb940, v34, 1);
            }
            _objc_msgSend(v32, v35);
            _objc_msgSend(v34, SEL_setFrame_);
            v39 = _objc_msgSend(v34, SEL_superview);
            v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_superview);
            _objc_release(v40);
            if (v40 != v32)
                _objc_msgSend(v32, SEL_addSubview_, v34);
            _objc_msgSend(v32, SEL_bringSubviewToFront_, v34);
        }
        else if (v34)
        {
            _objc_msgSend(v34, SEL_removeFromSuperview);
            _objc_setAssociatedObject(a0, g_4cb940, 0, 1);
        }
        _objc_release(v34);
        _objc_release(v32);
    }
    _objc_release();
    return;
}
