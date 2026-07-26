/* Recovered pseudocode
 * Objective-C: -[WCLGHomeStripSwipeTarget handleSwipe:]
 * Address: 0x371650; original size: 500 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.686s
 */

void sub_371650(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v19;  // x21
    long long count;  // x0
    long long count1;  // x0
    unsigned long long v22;  // x20
    unsigned long long v23;  // x21
    long long count2;  // x0
    long long v25;  // x22
    long long v26;  // x0
    long long v27;  // x0
    unsigned long long v28;  // x23
    unsigned long long v11;  // x22
    unsigned long v29;  // x0
    unsigned long long v30;  // x24
    unsigned long long v31;  // x8
    long long v32;  // x0
    long long v33;  // x23
    unsigned long long v34;  // x20
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    long long v18;  // x0
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    v16 = sub_3445a0(_objc_retain(a2));
    if (((char)v16 & 1) || sub_332cd8(v16))
    {
        v18 = _objc_msgSend(a2, SEL_view);
        v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_view);
        count = _objc_msgSend(g_4c40a0, SEL_class);
        if (_objc_msgSend(v19, SEL_isKindOfClass_, count))
        {
            count1 = _objc_msgSend(a2, SEL_view);
            v22 = _objc_retainAutoreleasedReturnValue(count1, SEL_view);
            _objc_release(v19);
            if (!v22)
                goto LABEL_37182c;
            v23 = _objc_retainAutoreleasedReturnValue(sub_36a3ac(v22));
            if (v23)
            {
                count2 = _objc_msgSend(g_4c4198, SEL_sharedManager);
                v25 = _objc_retainAutoreleasedReturnValue(count2, SEL_sharedManager);
                v26 = _objc_msgSend(v25, SEL_displayGroups);
                v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_displayGroups);
                v28 = _objc_msgSend(v27, SEL_count);
                _objc_release(v27);
                if (v28 >= 2)
                {
                    v29 = _objc_msgSend(v25, SEL_expandedDisplayIndex);
                    if (((char)(v29 >> 63) & 1))
                        v29 = _objc_msgSend(v25, SEL_currentDisplayIndex);
                    v30 = v29 & ~(v29 >> 63);
                    v31 = (_objc_msgSend(a2, SEL_direction) != 2 ? v30 - 1 : v30 + 1);
                    if ((v31 < v28 ? v31 & ~(v31 >> 63) : v28 - 1) != v30)
                    {
                        sub_36e534(v23);
                        v32 = _objc_alloc(g_4c4238);
                        v33 = _objc_msgSend(v32, SEL_initWithStyle_, 0);
                        _objc_msgSend(v33, SEL_prepare, 0);
                        _objc_msgSend(v33, SEL_impactOccurred);
                        _objc_release(v33);
                    }
                }
                _objc_release(v25);
            }
            _objc_release(v23);
            v34 = v22;
        }
        else
        {
            v34 = v19;
        }
        _objc_release(v34);
    }
LABEL_37182c:
    _objc_release();
    return;
}
