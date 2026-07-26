/* Hook replacement 260/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x42f68; original size: 796 bytes
 * Status: ok; elapsed: 0.781s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_42f68(long long a0)
{
    char v12;  // x20
    unsigned long long v13;  // x0
    unsigned long v22;  // 4126
    unsigned long v23;  // d3
    unsigned long v24;  // 4126
    long long v25;  // x0
    char v26;  // w0
    long long count;  // x0
    long long count1;  // x0
    long long v29;  // x0
    long long count2;  // x0
    long long v15;  // x0
    long long v16;  // x0
    long long v17;  // x22
    char i;  // x0
    char idx;  // x27
    unsigned long v20;  // x21
    unsigned long v21;  // d1
    char v0;  // [bp-0x150]
    char v1;  // [bp-0xd0]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa0]
    unsigned long v5;  // [bp-0x88]
    char *v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    char *v10;  // [bp-0x10]
    char v11;  // [bp+0x0]

    v10 = &v11;
    v9 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_57c550)
    {
        g_4ceb33 = g_4ceb30 ^ 61;
        g_4ceb34 = g_4ceb31 ^ 219;
        g_4ceb35 = g_4ceb32 ^ 10;
    }
    /* unsupported instruction */
    g_57c550 = 1;
    v12 = (char)&v1;
    v6 = &v0;
    v13 = g_57c448(a0);
    if ((g_582f88 & 1))
    {
        count2 = _objc_msgSend(a0, SEL_backgroundView);
        v15 = _objc_retainAutoreleasedReturnValue(count2, SEL_backgroundView);
        _objc_msgSend(v15, SEL_setHidden_, 1);
        _objc_release(v15);
        v3 = 0;
        v4 = 0;
        v1 = 0;
        v2 = 0;
        v16 = _objc_msgSend(a0, SEL_subviews);
        v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_subviews);
        v5 = SEL_countByEnumeratingWithState_objects_count_;
        i = _objc_msgSend(v17, SEL_countByEnumeratingWithState_objects_count_, &v1, v6, 16);
        if (i)
        {
            do
            {
                idx = 0;
                v7 = SEL_setAlpha_;
                v8 = SEL_class;
                do
                {
                    v20 = *((long long *)(*((unsigned long long *)((void*)&v1 + 8)) + idx * 8));
                    _objc_msgSend(v20, SEL_frame);
                    v22 = arm64g_calculate_condition(80, (((((unsigned long long)(char)(CmpF(v21, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v21, 0.0) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v21, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v21, 0.0) & 1)) & ((unsigned long long)(char)(CmpF(v21, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v21, 0.0) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                    if (!((char)v22))
                    {
                        _objc_msgSend(v20, SEL_frame);
                        v24 = arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v23, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v23, 0.0) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v23, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v23, 0.0) & 1)) & ((unsigned long long)(char)(CmpF(v23, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v23, 0.0) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                        if (!((char)v24))
                        {
                            v25 = _objc_retainAutoreleasedReturnValue(_NSStringFromClass(_objc_msgSend(v20, v8), v8));
                            v26 = _objc_msgSend(v25, SEL_hasPrefix_, &g_4ceb60);
                            _objc_release(v25);
                            if (v26)
                                _objc_msgSend(v20, v7);
                        }
                    }
                    idx += 1;
                } while (i != idx);
                i = _objc_msgSend(v17, v5, &v1, v6, 16);
            } while (i);
        }
        _objc_release(v17);
        count = _objc_msgSend(a0, SEL_window);
        v12 = _objc_retainAutoreleasedReturnValue(count, SEL_window);
        v13 = _objc_release(v12);
        if (v12)
        {
            sub_21df04(a0);
            count1 = _objc_msgSend(a0, SEL_window);
            v12 = _objc_retainAutoreleasedReturnValue(count1, SEL_window);
            sub_4ada4(v12, 0);
            v13 = _objc_release(v12);
        }
    }
    if (*((long long *)&g_600760) == v9)
        return v13;
    v29 = ___stack_chk_fail();
    _objc_release(v12);
    __Unwind_Resume(v29);
}
