/* Recovered pseudocode
 * Objective-C: -[WCLGHGFullscreenGestureTarget handleEdgePan:]
 * Address: 0x3366f4; original size: 592 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.732s
 */

void sub_3366f4(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v11;  // d9
    unsigned long long v12;  // d8
    long long v21;  // x20
    long long count;  // x0
    unsigned long long len;  // x21
    long long count1;  // x0
    unsigned long long v25;  // x0
    unsigned long long v26;  // x22
    unsigned long long v27;  // x0
    unsigned long long v28;  // x0
    unsigned long long v29;  // x0
    unsigned long long count2;  // x0
    unsigned long long v13;  // x24
    long long v31;  // x0
    unsigned long long v32;  // x3
    long long v33;  // x0
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
    if (((char)sub_332cd8(_objc_retain(a2)) & 1))
    {
        v20 = _objc_msgSend(a2, SEL_view);
        v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_view);
        count = _objc_msgSend(v21, SEL_window);
        len = _objc_retainAutoreleasedReturnValue(count, SEL_window);
        if (len)
        {
            count1 = _objc_msgSend(a2, SEL_state);
            if (3 < count1)
            {
                if (2 <= count1 - 4)
                    goto LABEL_336918;
                v26 = _objc_loadWeakRetained(&g_580f88);
                _objc_msgSend(v26, SEL_dismissAnimated_, 1);
                goto LABEL_336910;
            }
            else if (count1 != 1)
            {
                if (count1 != 2)
                {
                    if (count1 != 3 || !((v25 = (unsigned long long)_objc_loadWeakRetained(&g_580f88), v25)))
                        goto LABEL_336918;
                    v26 = v25;
                    _objc_msgSend(a2, SEL_locationInView_, len);
                    _objc_msgSend(v26, SEL_pillIndexAtWindowPoint_);
                    goto LABEL_336908;
                }
                v27 = _objc_loadWeakRetained(&g_580f88);
                if (!v27)
                    goto LABEL_336918;
                v26 = v27;
                _objc_msgSend(a2, SEL_locationInView_, len);
                _objc_msgSend(v26, SEL_pillIndexAtWindowPoint_);
LABEL_336908:
                _objc_msgSend(v26);
                goto LABEL_336910;
            }
            else
            {
                v28 = _objc_loadWeakRetained(&g_580f88);
                _objc_release(v28);
                if (!v28)
                {
                    v29 = _objc_retainAutoreleasedReturnValue(sub_336944(v21));
                    if (v29)
                    {
                        v26 = v29;
                        count2 = _objc_msgSend(a2, SEL_edges);
                        _objc_msgSend(a2, SEL_locationInView_, len);
                        v31 = _objc_alloc(g_4c45d8);
                        v32 = (count2 * 0x8000000000000000 | count2 >> 1) & 9223372036854775809 & 1;
                        v33 = _objc_msgSend(v31, SEL_initWithController_fromLeft_anchorY_, v26, v32);
                        _objc_msgSend(v33, SEL_presentInWindow_, len, v32);
                        _objc_release(v33);
LABEL_336910:
                        _objc_release(v26);
                    }
                }
            }
        }
LABEL_336918:
        _objc_release(len);
    }
    else
    {
        v21 = _objc_loadWeakRetained(&g_580f88);
        _objc_msgSend(v21, SEL_dismissAnimated_, 0);
    }
    _objc_release(v21);
    _objc_release();
    return;
}
