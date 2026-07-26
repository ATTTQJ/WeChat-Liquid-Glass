/* Recovered pseudocode
 * Objective-C: -[WCLGVoiceHoldRecognizer wclgMountWaveViewOnToolView:]
 * Address: 0x822a8; original size: 2448 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.16s
 */

long long sub_822a8(long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v10;  // x19
    long long count;  // x0
    unsigned long long count1;  // x0
    unsigned long long count2;  // x0
    unsigned long long v22;  // x28
    long long len;  // x22
    unsigned long v24;  // d0
    unsigned long v25;  // 4149
    long long v26;  // x0
    long long v27;  // x19
    long long v28;  // x0
    long long v29;  // x0
    unsigned long long v12;  // x0
    long long v30;  // x19
    unsigned long long len1;  // x23
    unsigned long long v32;  // x0
    unsigned long long v33;  // x26
    unsigned long long len2;  // x26
    long long v35;  // x0
    long long v36;  // x0
    unsigned long long v37;  // x0
    long long v38;  // x0
    unsigned long long v39;  // x26
    long long v13;  // x0
    long long v40;  // x0
    long long v41;  // x20
    unsigned long long v42;  // x24
    unsigned long long v43;  // x25
    long long v44;  // x0
    unsigned long long v45;  // x0
    long long v46;  // x0
    unsigned long long v47;  // x0
    unsigned long long v48;  // x20
    long long v49;  // x0
    long long v14;  // x0
    unsigned long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    long long v54;  // x19
    unsigned long long v55;  // x20
    long long v56;  // x0
    long long v57;  // x0
    long long v58;  // x19
    long long v59;  // x0
    long long v15;  // x0
    long long v60;  // x19
    long long v61;  // x0
    long long v62;  // x0
    long long v63;  // x19
    long long v64;  // x0
    long long v65;  // x0
    long long v66;  // x19
    long long v67;  // x0
    long long v68;  // x19
    long long v16;  // x26
    long long v17;  // x0
    long long v18;  // x0
    long long v19;  // x20
    unsigned long v0;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc0]
    long long v4;  // [bp-0xa8]
    long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    char *v8;  // [bp-0x10]
    char v9;  // [bp+0x0]

    v8 = &v9;
    v10 = a2;
    /* unsupported instruction */
    if (!g_57d278)
    {
        g_4d53cd = g_4d53c0 ^ 64;
        g_4d53ce = g_4d53c1 ^ 215;
        g_4d53cf = g_4d53c2 ^ 213;
        g_4d53d0 = g_4d53c3 ^ 100;
        g_4d53d1 = g_4d53c4 ^ 160;
        g_4d53d2 = g_4d53c5 ^ 191;
        g_4d53d3 = g_4d53c6 ^ 71;
        g_4d53d4 = g_4d53c7;
        g_4d53d5 = g_4d53c8 ^ 162;
        g_4d53d6 = g_4d53c9 ^ 248;
        g_4d53d7 = g_4d53ca ^ 205;
        g_4d53d8 = g_4d53cb ^ 97;
        g_4d53d9 = g_4d53cc ^ 66;
    }
    /* unsupported instruction */
    g_57d278 = 1;
    _objc_retain(v10);
    if (v10)
    {
        v7 = v10;
        count = _objc_msgSend(a0, SEL_waveView);
        v12 = _objc_retainAutoreleasedReturnValue(count, SEL_waveView);
        if (!v12)
        {
            v13 = _objc_alloc(g_4c4248);
            v12 = _objc_msgSend(v13, SEL_initWithFrame_);
            _objc_msgSend(a0, SEL_setWaveView_, v12);
        }
        v6 = v12;
        v14 = _objc_msgSend(a0, SEL_view);
        v4 = _objc_retainAutoreleasedReturnValue(v14, SEL_view);
        v15 = _objc_msgSend(v4, SEL_traitCollection);
        v16 = _objc_retainAutoreleasedReturnValue(v15, SEL_traitCollection);
        _objc_retain(v16);
        v17 = _objc_msgSend(g_4c4090, SEL_colorWithRed_green_blue_alpha_);
        v5 = _objc_retainAutoreleasedReturnValue(v17, SEL_colorWithRed_green_blue_alpha_);
        v18 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_sharedConfig);
        count1 = _objc_msgSend(v19, SEL_integerForKey_defaultValue_, g_4a39e0, 0);
        count2 = _objc_msgSend(v19, SEL_integerForKey_defaultValue_, g_4a39e8, 0);
        if (_objc_msgSend(v16, SEL_userInterfaceStyle) == 2)
            count1 = count2;
        if (count1)
        {
            v3 = 0;
            v2 = 0;
            v1 = 0;
            v0 = 0x3ff0000000000000;
            v22 = v6;
            if (((char)sub_260674(count1, &v3, &v2, &v1, &v0) & 1) || sub_260854(count1, &v3, &v2, &v1))
            {
                if (!sub_2605d8(count1))
                {
                    sub_260ad4(count1);
                    v0 = 4583569427812588572;
                }
                v24 = unsupported_Iop_ZeroHI64ofV128();
                v25 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v24, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v24, 0x3ff0000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v24, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v24, 0x3ff0000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v24, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v24, 0x3ff0000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                v26 = _objc_msgSend();
                len = _objc_retainAutoreleasedReturnValue(v26, SEL_colorWithRed_green_blue_alpha_);
            }
            else
            {
                len = v5;
                _objc_retain(len);
            }
            v27 = v5;
        }
        else
        {
            v27 = v5;
            _objc_retain(v27);
            len = v27;
            v22 = v6;
        }
        _objc_release(v19);
        _objc_release(v27);
        _objc_release(v16);
        _objc_release(v16);
        _objc_release(v4);
        v28 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        v29 = _objc_retainAutoreleasedReturnValue(v28, SEL_sharedConfig);
        v30 = _objc_msgSend(v29, SEL_chatBottomVoiceWaveColorLock);
        _objc_release(v29);
        _objc_msgSend(a0, SEL_setWaveBaseColor_, len);
        _objc_msgSend(a0, SEL_setWaveLockColor_, v30);
        _objc_msgSend(v22, SEL_setBaseColor_, len);
        _objc_msgSend(v22, SEL_setLockColor_, v30);
        len1 = _objc_retainAutoreleasedReturnValue(sub_82d80(v7, 0), 0);
        v32 = _objc_retain(len1);
        if (v32 && !((v32 = len1, len1 == v7)))
        {
            v33 = len1;
            do
            {
                len2 = v33;
                v35 = _objc_msgSend(len2, SEL_class);
                v36 = _objc_retainAutoreleasedReturnValue(_NSStringFromClass(v35, SEL_class));
                v37 = _objc_msgSend(v36, SEL_containsString_, &g_4d5400);
                _objc_release(v36);
                if (((char)v37 & 1))
                {
                    v40 = _objc_retain(len2);
                    _objc_msgSend(v40, SEL_bounds);
                    v41 = 18;
                    v42 = len2;
                    v43 = len2;
                    goto LABEL_82958;
                }
                v38 = _objc_msgSend(len2, SEL_superview);
                v32 = _objc_retainAutoreleasedReturnValue(v38, SEL_superview);
                _objc_release(len2);
            } while (v32 && (v39 = v32, v33 = v32, v32 != v7));
            goto LABEL_82958;
        }
        _objc_release(v32);
        if (len1)
        {
            v44 = _objc_msgSend(len1, SEL_superview);
            v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_superview);
            _objc_release(v45);
            if (!v45)
                goto LABEL_8282c;
            v46 = _objc_msgSend(len1, SEL_superview);
            v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_superview);
            _objc_msgSend(len1, SEL_frame);
            v42 = 0;
            v41 = 42;
            len2 = len1;
            v43 = v47;
        }
        else
        {
LABEL_8282c:
            v43 = v7;
            v48 = _objc_retainAutoreleasedReturnValue(sub_1278d4(v43));
            if (v48)
            {
                v49 = _objc_msgSend(v48, SEL_superview);
                v50 = _objc_retainAutoreleasedReturnValue(v49, SEL_superview);
                _objc_release(v50);
                if (!v50)
                    goto LABEL_828ac;
                v51 = _objc_msgSend(v48, SEL_superview);
                v43 = _objc_retainAutoreleasedReturnValue(v51, SEL_superview);
                _objc_msgSend(v48, SEL_frame);
            }
            else
            {
LABEL_828ac:
                v52 = _objc_retain(v43);
                _objc_msgSend(v52, SEL_bounds);
                _objc_msgSend(v43, SEL_bounds);
                _objc_msgSend(v43, SEL_bounds);
            }
            _objc_release(v48);
            v42 = 0;
            v41 = 42;
            len2 = len1;
        }
LABEL_82958:
        _objc_msgSend(v6, SEL_setFrame_);
        _objc_msgSend(v6, SEL_setAutoresizingMask_, v41);
        v53 = _objc_msgSend(g_4c4090, SEL_clearColor);
        v54 = _objc_retainAutoreleasedReturnValue(v53, SEL_clearColor);
        v55 = v6;
        _objc_msgSend(v55, SEL_setBackgroundColor_, v54);
        _objc_release(v54);
        _objc_msgSend(v43, SEL_addSubview_, v55);
        _objc_msgSend(v43, SEL_bringSubviewToFront_, v6);
        if (len1)
        {
            _objc_msgSend(a0, SEL_setDimmedTextView_, len1);
            v56 = _objc_msgSend(g_4c40f8, SEL_class);
            if (_objc_msgSend(len1, SEL_isKindOfClass_, v56))
            {
                v57 = _objc_msgSend(len1, SEL_textColor);
                v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_textColor);
                _objc_msgSend(a0, SEL_setSavedTextColor_, v58);
                _objc_release(v58);
                v59 = _objc_msgSend(g_4c4090, SEL_clearColor);
                v60 = _objc_retainAutoreleasedReturnValue(v59, SEL_clearColor);
                _objc_msgSend(len1, SEL_setTextColor_, v60);
            }
            else
            {
                v61 = _objc_msgSend(g_4c4100, SEL_class);
                if (!_objc_msgSend(len1, SEL_isKindOfClass_, v61))
                    goto LABEL_82b40;
                v62 = _objc_msgSend(len1, SEL_textColor);
                v63 = _objc_retainAutoreleasedReturnValue(v62, SEL_textColor);
                _objc_msgSend(a0, SEL_setSavedTextColor_, v63);
                _objc_release(v63);
                v64 = _objc_msgSend(g_4c4090, SEL_clearColor);
                v60 = _objc_retainAutoreleasedReturnValue(v64, SEL_clearColor);
                _objc_msgSend(len1, SEL_setTextColor_, v60);
            }
            _objc_release(v60);
LABEL_82b40:
            v65 = _objc_msgSend(len1, SEL_tintColor);
            v66 = _objc_retainAutoreleasedReturnValue(v65, SEL_tintColor);
            _objc_msgSend(a0, SEL_setSavedTintColor_, v66);
            _objc_release(v66);
            v67 = _objc_msgSend(g_4c4090, SEL_clearColor);
            v68 = _objc_retainAutoreleasedReturnValue(v67, SEL_clearColor);
            _objc_msgSend(len1, SEL_setTintColor_, v68);
            _objc_release(v68);
            sub_1920ec(len1);
        }
        _objc_msgSend(v6, SEL_startRecording);
        _objc_msgSend(a0, SEL_wclgMountHintAboveInputWithAnchor_toolView_, len2, v7);
        _objc_release(v43);
        _objc_release(v42);
        _objc_release(len1);
        _objc_release(len);
        _objc_release(v6);
        v10 = v7;
    }
    return _objc_release(v10);
}
