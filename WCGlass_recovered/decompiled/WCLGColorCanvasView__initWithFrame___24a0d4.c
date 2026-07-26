/* Recovered pseudocode
 * Objective-C: -[WCLGColorCanvasView initWithFrame:]
 * Address: 0x24a0d4; original size: 1180 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.272s
 */

long long * sub_24a0d4(unsigned long a0)
{
    long long count;  // x0
    unsigned long long v19;  // x0
    unsigned long v28;  // x8
    long long count1;  // x0
    long long v30;  // x0
    long long v31;  // x0
    long long count2;  // x0
    long long v33;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long len;  // x28
    long long v37;  // x0
    unsigned long v20;  // x8
    long long v38;  // x0
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x0
    long long len1;  // x21
    long long v44;  // x0
    long long v45;  // x0
    long long v46;  // x0
    long long v47;  // x0
    long long v21;  // x0
    long long v48;  // x0
    long long v49;  // x0
    long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    unsigned int v54;  // w8
    unsigned long long v22;  // x0
    long long *v23;  // x23
    unsigned long v24;  // x8
    long long v25;  // x0
    unsigned long long v26;  // x0
    long long *v27;  // x24
    unsigned long v0;  // [bp-0xe0]
    unsigned long v1;  // [bp-0xd8]
    unsigned long v2;  // [bp-0xd0]
    unsigned long v3;  // [bp-0xc8]
    unsigned long v4;  // [bp-0xc0]
    long long *v5;  // [bp-0xb8]
    char *i;  // [bp-0xb0]
    unsigned int v7;  // [bp-0xa4]
    long long *v8;  // [bp-0xa0]
    unsigned long v9;  // [bp-0x98]
    unsigned long v10;  // [bp-0x90]
    unsigned long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    unsigned long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    char *v16;  // [bp-0x10]
    char v17;  // [bp+0x0]

    v16 = &v17;
    v15 = *((long long *)&g_600760);
    v9 = a0;
    v10 = g_4c4758;
    v8 = _objc_msgSendSuper2(&v9, SEL_initWithFrame_);
    v7 = 3367425487;
    while (1)
    {
        for (i = &v7; v7 == 3367425487; v7 = v54)
        {
            if (!v8)
                v54 = 3619701927;
            else
                v54 = 4175354044;
        }
        if (v7 == 4175354044)
        {
            *((unsigned long long *)((char *)v8 + g_4c4a64)) = 0;
            count = _objc_msgSend(g_4c4280, SEL_layer);
            v19 = _objc_retainAutoreleasedReturnValue(count, SEL_layer);
            v4 = g_4c4a68;
            v5 = v8;
            v20 = *((long long *)((char *)v5 + g_4c4a68));
            *((unsigned long long *)((char *)v5 + g_4c4a68)) = v19;
            _objc_release(v20);
            v21 = _objc_msgSend(g_4c4290, SEL_layer);
            v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_layer);
            v23 = v8;
            v24 = *((long long *)((char *)v23 + g_4c4a6c));
            *((unsigned long long *)((char *)v23 + g_4c4a6c)) = v22;
            _objc_release(v24);
            v25 = _objc_msgSend(g_4c4290, SEL_layer);
            v26 = _objc_retainAutoreleasedReturnValue(v25, SEL_layer);
            v3 = g_4c4a70;
            v27 = v8;
            v28 = *((long long *)((char *)v27 + g_4c4a70));
            *((unsigned long long *)((char *)v27 + g_4c4a70)) = v26;
            _objc_release(v28);
            v2 = SEL_setStartPoint_;
            _objc_msgSend(*((long long *)((char *)v23 + g_4c4a6c)), SEL_setStartPoint_);
            _objc_msgSend(*((long long *)((char *)v23 + g_4c4a6c)), SEL_setEndPoint_);
            count1 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
            v30 = _objc_retainAutoreleasedReturnValue(count1, SEL_colorWithWhite_alpha_);
            v31 = _objc_retainAutorelease(v30);
            v13 = _objc_msgSend(v31, SEL_CGColor);
            count2 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
            v33 = _objc_retainAutoreleasedReturnValue(count2, SEL_colorWithWhite_alpha_);
            v34 = _objc_retainAutorelease(v33);
            v14 = _objc_msgSend(v34, SEL_CGColor);
            v1 = SEL_arrayWithObjects_count_;
            v35 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v13, 2);
            len = _objc_retainAutoreleasedReturnValue(v35, SEL_arrayWithObjects_count_, &v13, 2);
            v0 = SEL_setColors_;
            _objc_msgSend(*((long long *)((char *)v23 + g_4c4a6c)), SEL_setColors_, len);
            _objc_release(len);
            _objc_release(v33);
            _objc_release(v30);
            _objc_msgSend(*((long long *)((char *)v27 + v3)), v2);
            _objc_msgSend(*((long long *)((char *)v27 + v3)), SEL_setEndPoint_);
            v37 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
            v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_colorWithWhite_alpha_);
            v39 = _objc_retainAutorelease(v38);
            v11 = _objc_msgSend(v39, SEL_CGColor);
            v40 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
            v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_colorWithWhite_alpha_);
            v42 = _objc_retainAutorelease(v41);
            v12 = _objc_msgSend(v42, SEL_CGColor);
            len1 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4098, v1, &v11, 2), v1, &v11, 2);
            _objc_msgSend(*((long long *)((char *)v27 + v3)), v0, len1);
            _objc_release(len1);
            _objc_release(v41);
            _objc_release(v38);
            v44 = _objc_msgSend(v8, SEL_layer);
            v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_layer);
            _objc_msgSend(v45, SEL_addSublayer_, *((long long *)((char *)v5 + v4)));
            _objc_release(v45);
            v46 = _objc_msgSend(v8, SEL_layer);
            v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_layer);
            _objc_msgSend(v47, SEL_addSublayer_, *((long long *)((char *)v23 + g_4c4a6c)));
            _objc_release(v47);
            v48 = _objc_msgSend(v8, SEL_layer);
            v49 = _objc_retainAutoreleasedReturnValue(v48, SEL_layer);
            _objc_msgSend(v49, SEL_addSublayer_, *((long long *)((char *)v27 + v3)));
            _objc_release(v49);
            v50 = _objc_msgSend(v8, SEL_layer);
            v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_layer);
            _objc_msgSend(v51, SEL_setCornerRadius_);
            _objc_release(v51);
            v52 = _objc_msgSend(v8, SEL_layer);
            v53 = _objc_retainAutoreleasedReturnValue(v52, SEL_layer);
            _objc_msgSend(v53, SEL_setMasksToBounds_, 1);
            _objc_release(v53);
            v7 = 3619701927;
        }
        else if (v7 == 3619701927)
        {
            break;
        }
    }
    if (*((long long *)&g_600760) == v15)
        return v8;
    ___stack_chk_fail(v8);
}
