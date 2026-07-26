/* Hook replacement 400/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x7f484; original size: 872 bytes
 * Status: ok; elapsed: 0.705s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_7f484(long long a0)
{
    unsigned long long v2;  // x0
    long long v3;  // x0
    unsigned long long ch;  // x21
    long long v13;  // x0
    long long count;  // x21
    long long count1;  // x0
    long long v16;  // x22
    unsigned long long v4;  // x0
    unsigned long long v5;  // x0
    unsigned long long count2;  // x0
    long long v7;  // x0
    long long v8;  // x0
    long long v9;  // x0
    long long v10;  // x20
    unsigned long long v11;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57d1cc)
    {
        *((char *)&g_4d4f10) = g_4d4ef0 ^ 4;
        g_4d4f11 = g_4d4ef1 ^ 0xdd;
        g_4d4f12 = g_4d4ef2 ^ 70;
        g_4d4f13 = g_4d4ef3 ^ 243;
        g_4d4f14 = g_4d4ef4 ^ 95;
        g_4d4f15 = g_4d4ef5 ^ 86;
        g_4d4f16 = g_4d4ef6 ^ 99;
        g_4d4f17 = g_4d4ef7 ^ 35;
        g_4d4f18 = g_4d4ef8 ^ 226;
        g_4d4f19 = g_4d4ef9 ^ 114;
        g_4d4f1a = g_4d4efa ^ 59;
        g_4d4f1b = g_4d4efb ^ 185;
        g_4d4f1c = g_4d4efc ^ 112;
        g_4d4f1d = g_4d4efd ^ 14;
        g_4d4f1e = g_4d4efe ^ 13;
        g_4d4f1f = g_4d4eff ^ 93;
        g_4d4f20 = g_4d4f00 ^ 177;
        g_4d4f21 = g_4d4f01 ^ 184;
        g_4d4f22 = g_4d4f02 ^ 115;
        g_4d4f23 = g_4d4f03 ^ 0x11;
        g_4d4f24 = g_4d4f04 ^ 76;
        g_4d4f25 = g_4d4f05 ^ 139;
    }
    /* unsupported instruction */
    g_57d1cc = 1;
    v2 = g_57d1b0(a0);
    if (!(g_582f88 & 1))
    {
        return v2;
    }
    else if ((g_582fda & 1))
    {
        v3 = _objc_getAssociatedObject(a0, g_4d4ea0);
        v4 = _objc_retainAutoreleasedReturnValue(v3, g_4d4ea0);
        v5 = _objc_release(v4);
        if (v4)
            return v5;
        count2 = _objc_msgSend(a0, SEL_respondsToSelector_, SEL_onShowMsgReplyMenuItem_);
        if (!(unsigned int)count2)
            return count2;
        v7 = _objc_msgSend(a0, SEL_nextResponder);
        v8 = _objc_retainAutoreleasedReturnValue(v7, SEL_nextResponder);
        v9 = _objc_msgSend(v8, SEL_nextResponder);
        v10 = _objc_retainAutoreleasedReturnValue(v9, SEL_nextResponder);
        _objc_release(v8);
        v11 = _objc_msgSend(v10, SEL_class);
        if (v11 == _objc_msgSend(g_4c4078, SEL_class))
            return _objc_release();
        ch = g_57d1b8;
        if (!g_57d1b8)
        {
            ch = _objc_getClass(&g_4d4f10);
            g_57d1b8 = ch;
        }
        _objc_retainAutorelease(ch);
        if (!((char)_objc_msgSend(v10, SEL_isKindOfClass_, ch) & 1))
        {
            v13 = _objc_alloc(g_4c4240);
            count = _objc_msgSend(v13, SEL_initWithTarget_action_, a0, SEL_wclg_handleQuoteSwipe_);
            _objc_msgSend(count, SEL_setDirection_, 2, SEL_wclg_handleQuoteSwipe_);
            _objc_msgSend(a0, SEL_addGestureRecognizer_, count);
            count1 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 1);
            v16 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithBool_, 1);
            _objc_setAssociatedObject(a0, g_4d4ea0, v16, 1);
            _objc_release(v16);
            _objc_release(count);
        }
        return _objc_release();
    }
    else
    {
        return v2;
    }
}
