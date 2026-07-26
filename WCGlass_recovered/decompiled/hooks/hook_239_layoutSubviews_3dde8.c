/* Hook replacement 239/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x3dde8; original size: 412 bytes
 * Status: ok; elapsed: 1.12s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3dde8(unsigned long a0)
{
    unsigned long long v13;  // x28
    unsigned long long v14;  // x27
    unsigned long long v23;  // x30
    unsigned long v24;  // x19
    unsigned long long i;  // x20
    unsigned long long v27;  // x20
    long long count;  // x0
    long long count1;  // x0
    unsigned long long v30;  // x27
    unsigned long long v15;  // x26
    unsigned long long v16;  // x25
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
    v24 = a0;
    g_57c278();
    _WCLGHomeGroupsFadeSectionHeadersForTable(_objc_retain(v24));
    if (sub_39690c(v24))
        sub_39676c(v24);
    if (((char)_objc_msgSend(v24, SEL_isDragging) & 1) || ((char)_objc_msgSend(v24, SEL_isTracking) & 1) || _objc_msgSend(v24, SEL_isDecelerating))
    {
        sub_22bc68(v24);
    }
    else
    {
        _objc_retain(v24);
        if (v24)
        {
            i = v24;
            do
            {
                v27 = i;
                count = _objc_msgSend(g_4c40e0, SEL_class);
                if (_objc_msgSend(v27, SEL_isKindOfClass_, count))
                {
                    _objc_retain(v27);
                    break;
                }
                count1 = _objc_msgSend(v27, SEL_nextResponder);
                v30 = _objc_retainAutoreleasedReturnValue(count1, SEL_nextResponder);
                _objc_release(v27);
                v27 = v30;
                i = v27;
            } while (i);
        }
        else
        {
            v27 = 0;
        }
        sub_38e0c8(v24, v27);
        if (!((char)_objc_msgSend(v24, SEL_isDragging) & 1) && !((char)_objc_msgSend(v24, SEL_isTracking) & 1) && !((char)_objc_msgSend(v24, SEL_isDecelerating) & 1))
            sub_395f4c(v24);
        _objc_release(v27);
        _objc_release(v27);
    }
    _objc_release();
    return;
}
