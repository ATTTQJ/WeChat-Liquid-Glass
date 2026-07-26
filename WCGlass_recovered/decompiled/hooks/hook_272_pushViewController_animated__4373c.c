/* Hook replacement 272/418
 * Selectors: SEL_pushViewController_animated_
 * Address: 0x4373c; original size: 2132 bytes
 * Status: ok; elapsed: 1.562s
 */

unsigned long long sub_4373c(long long a0, unsigned long long a1, long long a2, unsigned long long a3)
{
    unsigned long long v22;  // x20
    long long v23;  // x19
    unsigned long long v29;  // x0
    long long count;  // x0
    long long v31;  // x0
    long long count1;  // x0
    unsigned long long v33;  // x24
    long long v34;  // x0
    long long count2;  // x0
    unsigned long long v36;  // x0
    long long v37;  // x0
    long long v38;  // x21
    unsigned long long v24;  // x22
    long long v39;  // x0
    long long v40;  // x21
    long long v41;  // x0
    unsigned long long v42;  // x0
    long long v43;  // x0
    long long v44;  // x21
    long long v45;  // x0
    long long v46;  // x21
    long long v47;  // x0
    long long v48;  // x0
    long long v25;  // x26
    long long v49;  // x0
    long long v50;  // x0
    long long v51;  // x27
    unsigned long long v52;  // d0
    long long v53;  // x0
    unsigned long long i;  // x0
    unsigned long long idx;  // x19
    long long t;  // x0
    long long v26;  // x0
    long long v27;  // x24
    long long v28;  // x0
    long long v0;  // [bp-0x1d0]
    unsigned int v1;  // [bp-0x1b4]
    unsigned long v2;  // [bp-0x1a0]
    unsigned long v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x180]
    unsigned long v7;  // [bp-0x178]
    long long v8;  // [bp-0x170]
    char v9;  // [bp-0x168]
    unsigned long long v10;  // [bp-0x160]
    unsigned long long v11;  // [bp-0x150]
    unsigned long long v12;  // [bp-0x140]
    unsigned long long v13;  // [bp-0x130]
    char v14;  // [bp-0x120]
    char v15;  // [bp-0x118]
    unsigned long v16;  // [bp-0x98]
    long long v17;  // [bp-0x90]
    long long v18;  // [bp-0x88]
    unsigned long v19;  // [bp-0x80]
    char *v20;  // [bp-0x10]
    char v21;  // [bp+0x0]

    v20 = &v21;
    v22 = a3;
    v23 = a2;
    v24 = a1;
    v25 = a0;
    v19 = *((long long *)&g_600760);
    _objc_retain(a2);
    sub_3a2f44(v23, v25);
    v25 = v25;
    v24 = v24;
    v23 = v23;
    if ((unsigned int)v22)
    {
        v25 = v25;
        v24 = v24;
        v23 = v23;
        if (!((char)sub_444fb8() & 1))
        {
            v26 = _objc_msgSend(v25, SEL_view);
            v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_view);
            v28 = _objc_msgSend(v27, SEL_window);
            v29 = _objc_retainAutoreleasedReturnValue(v28, SEL_window);
            if (v29)
            {
                _objc_release(v27);
            }
            else
            {
                count = _objc_msgSend(g_4c41b0, SEL_sharedApplication);
                v31 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedApplication);
                count1 = _objc_msgSend(v31, SEL_keyWindow);
                v29 = _objc_retainAutoreleasedReturnValue(count1, SEL_keyWindow);
                _objc_release(v31);
                _objc_release(v27);
                if (!v29)
                    goto LABEL_0x43d00;
                else
                    goto LABEL_43834;
            }
LABEL_43834:
            v33 = _objc_retainAutoreleasedReturnValue(sub_4bde4(v29, 0), 0);
            if (v33)
            {
                v34 = _objc_retain(v33);
                count2 = _objc_msgSend(v34, SEL_window);
                v36 = _objc_retainAutoreleasedReturnValue(count2, SEL_window);
                _objc_release(v36);
                if (v36)
                {
                    _objc_msgSend(v33, SEL_contentOffset);
                    if (((char)sub_4b6b8(v33) & 1))
                    {
                        sub_4b524(v33);
                        v37 = _objc_msgSend(g_4c40e8, SEL_valueWithCGPoint_);
                        v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_valueWithCGPoint_);
                        _objc_setAssociatedObject(v33, &g_4ce718, v38, 1);
                        _objc_release(v38);
                        _objc_msgSend(g_4c41d0, SEL_timeIntervalSinceReferenceDate);
                        v39 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                        v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_numberWithDouble_);
                        _objc_setAssociatedObject(v33, &g_4ce710, v40, 1);
                        _objc_release(v40);
                    }
                    else
                    {
                        _objc_setAssociatedObject(v33, &g_4ce718, 0, 0);
                        _objc_setAssociatedObject(v33, &g_4ce710, 0, 0);
                        _objc_setAssociatedObject(v33, &g_4ce708, 0, 0);
                    }
                }
                _objc_release(v33);
            }
            _objc_release(v33);
            _objc_retain(v29);
            if ((g_582f88 & 1) && (g_582f8b & 1))
            {
                v41 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(v29, &g_4ce730), &g_4ce730);
                v42 = _objc_msgSend(v41, SEL_boolValue);
                _objc_release(v41);
                if (!((char)v42 & 1))
                {
                    v43 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 1);
                    v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_numberWithBool_, 1);
                    v1 = v22;
                    _objc_setAssociatedObject(v29, &g_4ce730, v44, 1);
                    _objc_release(v44);
                    v45 = _objc_msgSend(g_4c4110, SEL_array);
                    v0 = _objc_retainAutoreleasedReturnValue(v45, SEL_array);
                    sub_4c17c(v29, v29, 1, v0, 0);
                    v46 = _objc_msgSend(v0, SEL_copy);
                    _objc_setAssociatedObject(v29, &g_4ce738, v46, 1);
                    _objc_release(v46);
                    _objc_initWeak(&v14, v29);
                    v47 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                    v16 = _objc_retainAutoreleasedReturnValue(v47, SEL_numberWithDouble_);
                    v48 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                    v17 = _objc_retainAutoreleasedReturnValue(v48, SEL_numberWithDouble_);
                    v49 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                    v18 = _objc_retainAutoreleasedReturnValue(v49, SEL_numberWithDouble_);
                    v50 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v16, 3);
                    v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_arrayWithObjects_count_, &v16, 3);
                    _objc_release(v18);
                    _objc_release(v17);
                    _objc_release(v16);
                    v52 = 0;
                    v12 = 0;
                    v13 = 0;
                    v10 = 0;
                    v11 = 0;
                    v53 = _objc_retain(v51);
                    v2 = SEL_countByEnumeratingWithState_objects_count_;
                    i = _objc_msgSend(v53, SEL_countByEnumeratingWithState_objects_count_, &v10, &v15, 16);
                    if (i)
                    {
                        do
                        {
                            idx = 0;
                            do
                            {
                                _objc_msgSend(*((long long *)(*(&(&v10)[1]) + idx * 8)), SEL_doubleValue);
                                v52 *= 0x41cdcd6500000000;
                                t = _dispatch_time(0, v52);
                                v3 = &g_600748;
                                v4 = 0xc2000000;
                                v5 = 316336;
                                v6 = &g_4a0a80;
                                _objc_copyWeak(&v9, &v14);
                                v7 = *((long long *)(*(&(&v10)[1]) + idx * 8));
                                _objc_retain(v51);
                                v8 = v51;
                                _dispatch_after(t, &g_600770, &v3);
                                _objc_release(v8);
                                _objc_destroyWeak(&v9);
                                idx += 1;
                            } while (i != idx);
                            i = _objc_msgSend(v51, v2, &v10, &v15, 16);
                        } while (i);
                    }
                    _objc_release(v51);
                    _objc_release(v51);
                    _objc_destroyWeak(&v14);
                    _objc_release(v0);
                }
            }
        }
    }
}
