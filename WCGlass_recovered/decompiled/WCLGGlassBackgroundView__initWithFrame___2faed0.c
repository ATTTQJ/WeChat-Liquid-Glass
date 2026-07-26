/* Recovered pseudocode
 * Objective-C: -[WCLGGlassBackgroundView initWithFrame:]
 * Address: 0x2faed0; original size: 1184 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.212s
 */

long long sub_2faed0(unsigned long a0)
{
    long long count;  // x19
    long long count1;  // x0
    long long count2;  // x0
    long long len;  // x23
    long long v27;  // x0
    long long v28;  // x0
    unsigned long v29;  // x28
    long long v30;  // x20
    long long v31;  // x0
    long long len1;  // x22
    long long len2;  // x20
    long long v34;  // x0
    long long v17;  // x21
    long long v35;  // x0
    long long v36;  // x0
    long long v37;  // x0
    long long v38;  // x0
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x23
    long long v42;  // x0
    long long v43;  // x0
    long long v44;  // x20
    long long v18;  // x0
    long long v45;  // x0
    long long v46;  // x21
    long long v19;  // x0
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    long long v24;  // x0
    unsigned long v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0xc0]
    unsigned long v2;  // [bp-0xb8]
    unsigned long v3;  // [bp-0xb0]
    unsigned long v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    unsigned long v6;  // [bp-0x98]
    long long v7;  // [bp-0x90]
    long long v8;  // [bp-0x88]
    unsigned long v9;  // [bp-0x80]
    long long v10;  // [bp-0x78]
    long long v11;  // [bp-0x70]
    unsigned long v12;  // [bp-0x68]
    char *v13;  // [bp-0x10]
    char v14;  // [bp+0x0]

    v13 = &v14;
    v12 = *((long long *)&g_600760);
    v4 = a0;
    v5 = g_4c47a8;
    count = _objc_msgSendSuper2(&v4, SEL_initWithFrame_);
    if (count)
    {
        _objc_msgSend(count, SEL_setUserInteractionEnabled_, 0);
        v0 = SEL_layer;
        count1 = _objc_msgSend(g_4c4290, SEL_layer);
        v17 = _objc_retainAutoreleasedReturnValue(count1, SEL_layer);
        _objc_msgSend(count, SEL_setGradA_, v17);
        _objc_release(v17);
        v18 = _objc_msgSend(count, SEL_gradA);
        v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_gradA);
        v3 = SEL_setStartPoint_;
        _objc_msgSend(v19, SEL_setStartPoint_);
        _objc_release(v19);
        v20 = _objc_msgSend(count, SEL_gradA);
        v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_gradA);
        v2 = SEL_setEndPoint_;
        _objc_msgSend(v21, SEL_setEndPoint_);
        _objc_release(v21);
        v22 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v9 = _objc_retainAutoreleasedReturnValue(v22, SEL_numberWithDouble_);
        v23 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v10 = _objc_retainAutoreleasedReturnValue(v23, SEL_numberWithDouble_);
        v24 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v11 = _objc_retainAutoreleasedReturnValue(v24, SEL_numberWithDouble_);
        v1 = SEL_arrayWithObjects_count_;
        count2 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v9, 3);
        len = _objc_retainAutoreleasedReturnValue(count2, SEL_arrayWithObjects_count_, &v9, 3);
        v27 = _objc_msgSend(count, SEL_gradA);
        v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_gradA);
        _objc_msgSend(v28, SEL_setLocations_, len);
        _objc_release(v28);
        _objc_release(len);
        _objc_release(v11);
        _objc_release(v10);
        _objc_release(v9);
        v29 = v0;
        v30 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(count, v29), v29);
        v31 = _objc_msgSend(count, SEL_gradA);
        len1 = _objc_retainAutoreleasedReturnValue(v31, SEL_gradA);
        _objc_msgSend(v30, SEL_addSublayer_, len1);
        _objc_release(len1);
        _objc_release(v30);
        len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4290, v29), v29);
        _objc_msgSend(count, SEL_setGradB_, len2);
        _objc_release(len2);
        v34 = _objc_msgSend(count, SEL_gradB);
        v35 = _objc_retainAutoreleasedReturnValue(v34, SEL_gradB);
        _objc_msgSend(v35, v3);
        _objc_release(v35);
        v36 = _objc_msgSend(count, SEL_gradB);
        v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_gradB);
        _objc_msgSend(v37, v2);
        _objc_release(v37);
        v38 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v6 = _objc_retainAutoreleasedReturnValue(v38, SEL_numberWithDouble_);
        v39 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v7 = _objc_retainAutoreleasedReturnValue(v39, SEL_numberWithDouble_);
        v40 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v8 = _objc_retainAutoreleasedReturnValue(v40, SEL_numberWithDouble_);
        v41 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4098, v1, &v6, 3), v1, &v6, 3);
        v42 = _objc_msgSend(count, SEL_gradB);
        v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_gradB);
        _objc_msgSend(v43, SEL_setLocations_, v41);
        _objc_release(v43);
        _objc_release(v41);
        _objc_release(v8);
        _objc_release(v7);
        _objc_release(v6);
        v44 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(count, v29), v29);
        v45 = _objc_msgSend(count, SEL_gradB);
        v46 = _objc_retainAutoreleasedReturnValue(v45, SEL_gradB);
        _objc_msgSend(v44, SEL_addSublayer_, v46);
        _objc_release(v46);
        _objc_release(v44);
        _objc_msgSend(count, SEL_updateColors);
        _objc_msgSend(count, SEL_startAnimations);
    }
    if (*((long long *)&g_600760) == v12)
        return count;
    ___stack_chk_fail();
}
