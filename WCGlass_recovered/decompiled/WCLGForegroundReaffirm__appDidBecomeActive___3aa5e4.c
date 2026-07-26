/* Recovered pseudocode
 * Objective-C: -[WCLGForegroundReaffirm appDidBecomeActive:]
 * Address: 0x3aa5e4; original size: 832 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.708s
 */

unsigned long long sub_3aa5e4(void)
{
    long long count;  // x0
    long long v14;  // x0
    long long count1;  // x0
    long long count2;  // x0
    long long v25;  // x20
    unsigned long long v26;  // d0
    long long v27;  // x0
    unsigned long long i;  // x0
    unsigned long long v29;  // x28
    unsigned long long v15;  // w0
    unsigned long long v16;  // x0
    long long v17;  // x0
    long long v18;  // x19
    long long v19;  // x0
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    unsigned long long v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x140]
    char v4;  // [bp-0x128]
    unsigned long v5;  // [bp-0xa8]
    long long v6;  // [bp-0xa0]
    long long v7;  // [bp-0x98]
    long long v8;  // [bp-0x90]
    long long v9;  // [bp-0x88]
    unsigned long v10;  // [bp-0x80]
    char *v11;  // [bp-0x10]
    char v12;  // [bp+0x0]

    v11 = &v12;
    v10 = *((long long *)&g_600760);
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v14 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v15 = (unsigned int)_objc_msgSend(v14, SEL_liquidGlassEnabled);
    v16 = _objc_release(v14);
    if (v15)
    {
        _setenv(&g_495a4d, &g_495a6e, 1);
        _setenv(&g_495a70, &g_495a6e, 1);
        v17 = _objc_msgSend(g_4c4068, SEL_standardUserDefaults);
        v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_standardUserDefaults);
        _objc_msgSend(v18, SEL_setBool_forKey_, 1, &CFSTR("UIDesignRequiresCompatibility"));
        _objc_msgSend(v18, SEL_setBool_forKey_, 1, &CFSTR("UIDesignSwiftUIDesignIgnoreCheck"));
        _objc_msgSend(v18, SEL_setBool_forKey_, 1, &CFSTR("UIDesignSwiftUIDesignEnableGlass"));
        v19 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v5 = _objc_retainAutoreleasedReturnValue(v19, SEL_numberWithDouble_);
        v20 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v6 = _objc_retainAutoreleasedReturnValue(v20, SEL_numberWithDouble_);
        v21 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v7 = _objc_retainAutoreleasedReturnValue(v21, SEL_numberWithDouble_);
        v22 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v8 = _objc_retainAutoreleasedReturnValue(v22, SEL_numberWithDouble_);
        count1 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
        v9 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithDouble_);
        count2 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v5, 5);
        v25 = _objc_retainAutoreleasedReturnValue(count2, SEL_arrayWithObjects_count_, &v5, 5);
        _objc_release(v9);
        _objc_release(v8);
        _objc_release(v7);
        _objc_release(v6);
        _objc_release(v5);
        v26 = 0;
        v2 = 0;
        v3 = 0;
        v0 = 0;
        v1 = 0;
        v27 = _objc_retain(v25);
        i = _objc_msgSend(v27, SEL_countByEnumeratingWithState_objects_count_, &v0, &v4, 16);
        if (i)
        {
            do
            {
                v29 = 0;
                do
                {
                    _objc_msgSend(*((long long *)(*(&(&v0)[1]) + v29 * 8)), SEL_doubleValue);
                    v26 *= 0x41cdcd6500000000;
                    _dispatch_after(_dispatch_time(0, v26), &g_600770, &g_4a5800);
                    v29 += 1;
                } while (i != v29);
                i = _objc_msgSend(v25, SEL_countByEnumeratingWithState_objects_count_, &v0, &v4, 16);
            } while (i);
        }
        _objc_release(v25);
        _objc_release(v25);
        v16 = _objc_release(v18);
    }
    if (*((long long *)&g_600760) == v10)
        return v16;
    ___stack_chk_fail();
}
