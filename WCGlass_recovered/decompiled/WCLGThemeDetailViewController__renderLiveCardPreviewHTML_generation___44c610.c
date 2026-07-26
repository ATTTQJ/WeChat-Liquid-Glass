/* Recovered pseudocode
 * Objective-C: -[WCLGThemeDetailViewController renderLiveCardPreviewHTML:generation:]
 * Address: 0x44c610; original size: 968 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.977s
 */

void sub_44c610(long long a0, unsigned long a1, long long a2, unsigned long long a3)
{
    unsigned long long v13;  // x28
    unsigned long long v14;  // x27
    unsigned long long v23;  // x30
    long long v24;  // x0
    long long count;  // x0
    long long v26;  // x0
    unsigned long long count1;  // x0
    long long count2;  // x0
    long long v29;  // x0
    long long v30;  // x0
    long long v31;  // x0
    long long v32;  // x24
    unsigned long long v15;  // x26
    long long v33;  // x0
    long long v34;  // x0
    long long v35;  // x25
    long long v36;  // x0
    long long v37;  // x26
    long long v38;  // x0
    long long v39;  // x27
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x2
    unsigned long long v16;  // x25
    long long v43;  // x3
    long long v44;  // x0
    long long len;  // x26
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x0
    long long v49;  // x0
    unsigned long long v17;  // x24
    unsigned long long v18;  // x23
    unsigned long long v19;  // x22
    unsigned long long v20;  // x21
    unsigned long long v21;  // x20
    unsigned long long v22;  // x19
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    char *v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    char v12;  // [bp+0x0]

    v0 = v13;
    v1 = v14;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = &v12;
    v11 = v23;
    /* unsupported instruction */
    if (!g_582b38)
    {
        *((unsigned short *)&g_578090) = g_578070 ^ 50549;
        *((unsigned short *)&g_578092) = g_578072 ^ 31980;
        *((unsigned short *)&g_578094) = g_578074 ^ 43483;
        *((unsigned short *)&g_578096) = g_578076 ^ 39820;
        *((unsigned short *)&g_578098) = g_578078 ^ 44647;
        *((unsigned short *)&g_57809a) = g_57807a ^ 27809;
        *((unsigned short *)&g_57809c) = g_57807c ^ 55381;
        *((unsigned short *)&g_57809e) = g_57807e ^ 22061;
        *((unsigned short *)&g_5780a0) = g_578080 ^ 2748;
        *((unsigned short *)&g_5780a2) = g_578082 ^ 54192;
        *((unsigned short *)&g_57805e) = g_578050 ^ 5506;
        *((unsigned short *)&g_578060) = g_578052 ^ 15396;
        *((unsigned short *)&g_578062) = g_578054 ^ 13473;
        *((unsigned short *)&g_578064) = g_578056 ^ 52255;
        *((unsigned short *)&g_578066) = g_578058 ^ 203;
        *((unsigned short *)&g_578068) = g_57805a ^ 177;
        *((unsigned short *)&g_57806a) = g_57805c ^ 54785;
    }
    /* unsupported instruction */
    g_582b38 = 1;
    v24 = _objc_retain(a2);
    if (_objc_msgSend(v24, SEL_length))
    {
        count = _objc_msgSend(a0, SEL_cardPreviewWebView);
        v26 = _objc_retainAutoreleasedReturnValue(count, SEL_cardPreviewWebView);
        if (v26)
        {
            count1 = _objc_msgSend(a0, SEL_cardPreviewGeneration);
            _objc_release(v26);
            if (count1 == a3)
            {
                count2 = _objc_msgSend(a0, SEL_cardPreviewStatus);
                v29 = _objc_retainAutoreleasedReturnValue(count2, SEL_cardPreviewStatus);
                _objc_msgSend(v29, SEL_setHidden_, 0);
                _objc_release(v29);
                v30 = _objc_msgSend(a0, SEL_cardPreviewStatus);
                v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_cardPreviewStatus);
                _objc_msgSend(v31, SEL_setText_, &g_578110);
                _objc_release(v31);
                v32 = _objc_retainAutoreleasedReturnValue(sub_31d9b4(a2));
                v33 = _objc_msgSend(a0, SEL_theme);
                v34 = _objc_retainAutoreleasedReturnValue(v33, SEL_theme);
                v35 = _objc_retainAutoreleasedReturnValue(sub_31ed88(_objc_msgSend(v34, SEL_themeId), 1), 1);
                _objc_release(v34);
                v36 = _objc_msgSend(a0, SEL_cardPreviewWebView);
                v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_cardPreviewWebView);
                v38 = _objc_msgSend(a0, SEL_cardPreviewMediaScope);
                v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_cardPreviewMediaScope);
                sub_2d9d44(v37, v39);
                _objc_release(v39);
                _objc_release(v37);
                v40 = _objc_msgSend(a0, SEL_cardPreviewWebView);
                v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_cardPreviewWebView);
                v42 = v32;
                v43 = v35;
                v44 = _objc_msgSend(v41, SEL_loadHTMLString_baseURL_, v42, v43);
                len = _objc_retainAutoreleasedReturnValue(v44, SEL_loadHTMLString_baseURL_, v42, v43);
                _objc_msgSend(a0, SEL_setCardPreviewNavigation_, len);
                _objc_release(len);
                _objc_release(v41);
                v46 = _objc_msgSend(a0, SEL_cardPreviewNavigation);
                v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_cardPreviewNavigation);
                _objc_release(v47);
                if (!v47)
                {
                    v48 = _objc_msgSend(a0, SEL_cardPreviewStatus);
                    v49 = _objc_retainAutoreleasedReturnValue(v48, SEL_cardPreviewStatus);
                    _objc_msgSend(v49, SEL_setText_, &g_5780d0);
                    _objc_release(v49);
                }
                _objc_release(v35);
                _objc_release(v32);
            }
        }
    }
    _objc_release();
    return;
}
