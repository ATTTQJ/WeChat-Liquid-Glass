/* Recovered pseudocode
 * Objective-C: -[WCLGChatTopMorphHostView updateChrome]
 * Address: 0x2348a8; original size: 1644 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.138s
 */

void sub_2348a8(long long a0)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long count;  // x0
    unsigned long len;  // x20
    long long count1;  // x0
    long long v22;  // x0
    long long count2;  // x0
    unsigned long v24;  // x0
    long long v25;  // x0
    long long v26;  // x0
    long long v27;  // x0
    long long v28;  // x0
    unsigned long long v11;  // x22
    long long v29;  // x0
    long long v30;  // x0
    long long v31;  // x0
    long long v32;  // x21
    long long v33;  // x0
    long long len1;  // x22
    long long v35;  // x0
    long long v36;  // x0
    long long len2;  // x22
    long long v38;  // x0
    unsigned long long v12;  // x21
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x0
    long long v43;  // x0
    long long v44;  // x21
    long long v45;  // x0
    long long v46;  // x0
    long long v47;  // x22
    long long v48;  // x0
    unsigned long long v13;  // x20
    long long v49;  // x0
    long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    unsigned long v54;  // x0
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x21
    long long v17;  // x0
    unsigned long v18;  // x0
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
    /* unsupported instruction */
    if (!g_57f584)
    {
        *((unsigned short *)&g_51ea06) = g_51ea00 ^ 65147;
        *((unsigned short *)&g_51ea08) = g_51ea02 ^ 56665;
        *((unsigned short *)&g_51ea0a) = g_51ea04 ^ 41322;
        *((unsigned short *)&g_51e1ee) = g_51e1e0 ^ 38517;
        *((unsigned short *)&g_51e1f0) = g_51e1e2 ^ 15649;
        *((unsigned short *)&g_51e1f2) = g_51e1e4 ^ 35499;
        *((unsigned short *)&g_51e1f4) = g_51e1e6 ^ 24505;
        *((unsigned short *)&g_51e1f6) = g_51e1e8 ^ 3957;
        *((unsigned short *)&g_51e1f8) = g_51e1ea ^ 4179;
        *((unsigned short *)&g_51e1fa) = g_51e1ec ^ 15388;
        *((unsigned short *)&g_51e206) = g_51e1fc ^ 56981;
        *((unsigned short *)&g_51e208) = g_51e1fe ^ 5508;
        *((unsigned short *)&g_51e20a) = g_51e200 ^ 34993;
        *((unsigned short *)&g_51e20c) = g_51e202 ^ 58472;
        *((unsigned short *)&g_51e20e) = g_51e204 ^ 54758;
        *((unsigned short *)&g_51e21a) = g_51e210 ^ 61234;
        *((unsigned short *)&g_51e21c) = g_51e212 ^ 8586;
        *((unsigned short *)&g_51e21e) = g_51e214 ^ 22332;
        *((unsigned short *)&g_51e220) = g_51e216 ^ 35931;
        *((unsigned short *)&g_51e222) = g_51e218 ^ 58219;
    }
    /* unsupported instruction */
    g_57f584 = 1;
    if (!_objc_msgSend(a0, SEL_avatarOnlyMode))
    {
        v43 = _objc_msgSend(g_4c4090, SEL_labelColor);
        v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_labelColor);
        v45 = _objc_msgSend(a0, SEL_iconView);
        v46 = _objc_retainAutoreleasedReturnValue(v45, SEL_iconView);
        _objc_msgSend(v46, SEL_setTintColor_, v44);
        _objc_release(v46);
        _objc_release(v44);
        v47 = _objc_retainAutoreleasedReturnValue(sub_233754(_objc_msgSend(a0, SEL_defaultAction), 1), 1);
        v48 = _objc_msgSend(a0, SEL_iconView);
        v49 = _objc_retainAutoreleasedReturnValue(v48, SEL_iconView);
        _objc_msgSend(v49, SEL_setImage_, v47);
        _objc_release(v49);
        _objc_release(v47);
        v50 = _objc_msgSend(a0, SEL_iconView);
        v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_iconView);
        _objc_msgSend(v51, SEL_setContentMode_, 1);
        _objc_release(v51);
        v52 = _objc_msgSend(a0, SEL_iconView);
        v53 = _objc_retainAutoreleasedReturnValue(v52, SEL_iconView);
        _objc_msgSend(v53, SEL_setClipsToBounds_, 0);
        _objc_release(v53);
        v54 = _objc_msgSend(a0, SEL_defaultAction);
        _objc_msgSend();
        _objc_msgSend();
        return;
    }
    v16 = g_57f508 + 1000000 * g_583060;
    v17 = _objc_msgSend(a0, SEL_cachedAvatarImage);
    v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_cachedAvatarImage);
    if (v18 && _objc_msgSend(a0, SEL_cachedAvatarToken) == v16)
    {
        count = _objc_msgSend(a0, SEL_cachedAvatarImage);
        len = _objc_retainAutoreleasedReturnValue(count, SEL_cachedAvatarImage);
    }
    else
    {
        count1 = _objc_msgSend(a0, SEL_controller);
        v22 = _objc_retainAutoreleasedReturnValue(count1, SEL_controller);
        len = _objc_retainAutoreleasedReturnValue(sub_234f14(v22));
        _objc_release(v22);
    }
    _objc_release(v18);
    if (len)
    {
        count2 = _objc_msgSend(a0, SEL_cachedAvatarImage);
        v24 = _objc_retainAutoreleasedReturnValue(count2, SEL_cachedAvatarImage);
        _objc_release(v24);
        if (len != v24)
        {
            _objc_msgSend(a0, SEL_setCachedAvatarImage_, len);
            _objc_msgSend(a0, SEL_setCachedAvatarToken_, v16);
        }
        v25 = _objc_msgSend(a0, SEL_iconView);
        v26 = _objc_retainAutoreleasedReturnValue(v25, SEL_iconView);
        _objc_msgSend(v26, SEL_setImage_, len);
        _objc_release(v26);
        v27 = _objc_msgSend(a0, SEL_iconView);
        v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_iconView);
        _objc_msgSend(v28, SEL_setContentMode_, 2);
        _objc_release(v28);
        v29 = _objc_msgSend(a0, SEL_iconView);
        v30 = _objc_retainAutoreleasedReturnValue(v29, SEL_iconView);
        _objc_msgSend(v30, SEL_setClipsToBounds_, 1);
        _objc_release(v30);
        v31 = _objc_msgSend(a0, SEL_iconView);
        v32 = _objc_retainAutoreleasedReturnValue(v31, SEL_iconView);
        _objc_msgSend(v32, SEL_setTintColor_, 0);
    }
    else
    {
        v33 = _objc_msgSend(g_4c4090, SEL_labelColor);
        len1 = _objc_retainAutoreleasedReturnValue(v33, SEL_labelColor);
        v35 = _objc_msgSend(a0, SEL_iconView);
        v36 = _objc_retainAutoreleasedReturnValue(v35, SEL_iconView);
        _objc_msgSend(v36, SEL_setTintColor_, len1);
        _objc_release(v36);
        _objc_release(len1);
        len2 = _objc_retainAutoreleasedReturnValue(sub_233754(_objc_msgSend(a0, SEL_defaultAction), 1), 1);
        v38 = _objc_msgSend(a0, SEL_iconView);
        v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_iconView);
        _objc_msgSend(v39, SEL_setImage_, len2);
        _objc_release(v39);
        _objc_release(len2);
        v40 = _objc_msgSend(a0, SEL_iconView);
        v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_iconView);
        _objc_msgSend(v41, SEL_setContentMode_, 1);
        _objc_release(v41);
        v42 = _objc_msgSend(a0, SEL_iconView);
        v32 = _objc_retainAutoreleasedReturnValue(v42, SEL_iconView);
        _objc_msgSend(v32, SEL_setClipsToBounds_, 0);
    }
    _objc_release(v32);
    _objc_msgSend(a0, SEL_setAccessibilityLabel_, &g_51ea30);
    _objc_msgSend(a0, SEL_setNeedsLayout);
    _objc_release();
    return;
}
