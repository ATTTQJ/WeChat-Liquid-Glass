/* Hook replacement 9/418
 * Selectors: SEL_traitCollectionDidChange_
 * Address: 0x6718; original size: 440 bytes
 * Status: ok; elapsed: 0.499s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_6718(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long count;  // x0
    long long v20;  // x21
    unsigned long long count1;  // x0
    unsigned long long v22;  // w8
    long long count2;  // x0
    long long v24;  // x0
    unsigned long long v25;  // x0
    long long v26;  // x0
    long long v27;  // x0
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    long long v17;  // x0
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
    _objc_retain(a2);
    g_57b2b8(a0, a1, a2);
    if (((char)sub_23c668(0) & 1) || sub_23c668(1))
    {
        v16 = _objc_retain(a0);
        if (_objc_msgSend(v16, SEL_respondsToSelector_, SEL_reloadBackgroundView))
            _objc_msgSend(a0, SEL_reloadBackgroundView);
        v17 = _objc_msgSend(a0, SEL_view);
        v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_view);
        _objc_msgSend(v18, SEL_setNeedsLayout);
        _objc_release(v18);
        _objc_release(a0);
    }
    count = _objc_msgSend(a0, SEL_traitCollection);
    v20 = _objc_retainAutoreleasedReturnValue(count, SEL_traitCollection);
    count1 = _objc_msgSend(a2, SEL_userInterfaceStyle);
    if (_objc_msgSend(v20, SEL_userInterfaceStyle))
    {
        v22 = 1;
        if (a2)
            goto LABEL_6868;
    }
    else
    {
        count2 = _objc_msgSend(g_4c4070, SEL_currentTraitCollection);
        v24 = _objc_retainAutoreleasedReturnValue(count2, SEL_currentTraitCollection);
        v25 = _objc_msgSend(v24, SEL_userInterfaceStyle);
        _objc_release(v24);
        if (!v25)
            v22 = 0;
        else
            v22 = 1;
        if (a2)
        {
LABEL_6868:
            if (count1 && v22 && _objc_msgSend(v20, SEL_hasDifferentColorAppearanceComparedToTraitCollection_, a2))
            {
                v26 = _objc_msgSend(a0, SEL_view);
                v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_view);
                sub_12bf58(v27);
                _objc_release(v27);
            }
        }
    }
    _objc_release(v20);
    _objc_release();
    return;
}
