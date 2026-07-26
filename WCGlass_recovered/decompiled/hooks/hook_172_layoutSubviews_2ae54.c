/* Hook replacement 172/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x2ae54; original size: 1100 bytes
 * Status: ok; elapsed: 1.299s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_2ae54(unsigned long long a0)
{
    unsigned long long v13;  // d9
    unsigned long long v14;  // d8
    unsigned long long v23;  // x30
    unsigned long long v24;  // x19
    long long v25;  // x20
    long long count;  // x0
    unsigned long v27;  // d0
    unsigned long v28;  // 4142
    unsigned long long v29;  // x23
    long long count1;  // x0
    long long v31;  // x22
    unsigned long long v32;  // x25
    unsigned long long v15;  // x26
    unsigned long long v33;  // x20
    unsigned long long v34;  // x20
    unsigned long long v35;  // x25
    long long v36;  // x0
    unsigned long long v37;  // x0
    long long count2;  // x0
    unsigned long long v39;  // x20
    unsigned long long v40;  // x25
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
    /* unsupported instruction */
    if (!g_57bf0c)
    {
        g_4cbb50 = g_4cbb30 ^ 141;
        g_4cbb51 = g_4cbb31 ^ 113;
        g_4cbb52 = g_4cbb32 ^ 202;
        g_4cbb53 = g_4cbb33 ^ 157;
        g_4cbb54 = g_4cbb34 ^ 4;
        g_4cbb55 = g_4cbb35 ^ 115;
        g_4cbb56 = g_4cbb36 ^ 28;
        g_4cbb57 = g_4cbb37 ^ 66;
        g_4cbb58 = g_4cbb38 ^ 84;
        g_4cbb59 = g_4cbb39 ^ 194;
        g_4cbb5a = g_4cbb3a ^ 158;
        g_4cbb5b = g_4cbb3b ^ 219;
        g_4cbb5c = g_4cbb3c ^ 88;
        g_4cbb5d = g_4cbb3d ^ 35;
        g_4cbb5e = g_4cbb3e ^ 92;
        g_4cbb5f = g_4cbb3f ^ 70;
        g_4cbb60 = g_4cbb40 ^ 63;
        g_4cbb61 = g_4cbb41 ^ 74;
        g_4cbb62 = g_4cbb42 ^ 0x66;
        g_4cbb63 = g_4cbb43 ^ 33;
        g_4cbb64 = g_4cbb44 ^ 28;
        g_4cbb65 = g_4cbb45 ^ 0xbb;
        g_4cbb66 = g_4cbb46 ^ 176;
        g_4cbb67 = g_4cbb47 ^ 36;
        g_4cbb68 = g_4cbb48 ^ 189;
        g_4cbb69 = g_4cbb49 ^ 109;
        g_4cbb6a = g_4cbb4a ^ 58;
        g_4cbb6b = g_4cbb4b ^ 205;
        g_4cbb6c = g_4cbb4c ^ 113;
    }
    /* unsupported instruction */
    g_57bf0c = 1;
    g_57be10(v24);
    _objc_retain(v24);
    if ((g_582f88 & 1))
    {
        if (((char)_objc_msgSend(v24, SEL_isDragging) & 1) || ((char)_objc_msgSend(v24, SEL_isTracking) & 1) || _objc_msgSend(v24, SEL_isDecelerating))
        {
            sub_22bc68(v24);
        }
        else
        {
            sub_22b994(v24);
            _objc_retain(v24);
            if (v24)
            {
                _CACurrentMediaTime();
                v25 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(v24, &g_4cb938), &g_4cb938);
                count = _objc_msgSend(g_4c40a8, SEL_class);
                if (_objc_msgSend(v25, SEL_isKindOfClass_, count) && !((_objc_msgSend(v25, SEL_doubleValue), v28 = (unsigned long)arm64g_calculate_condition(80, (((((unsigned long long)(char)(CmpF(v27 - v27, 0x3fd3333333333333)) >> 5 & 3 | (unsigned long long)(CmpF(v27 - v27, 0x3fd3333333333333) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v27 - v27, 0x3fd3333333333333)) >> 5 & 3 | (unsigned long long)(CmpF(v27 - v27, 0x3fd3333333333333) & 1)) & ((unsigned long long)(char)(CmpF(v27 - v27, 0x3fd3333333333333)) >> 5 & 3 | (unsigned long long)(CmpF(v27 - v27, 0x3fd3333333333333) & 1)) >> 1 & 1)) * 0x10000000, 0, 0), (char)v28)))
                {
                    _objc_release(v25);
                    v29 = v24;
                }
                else
                {
                    count1 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                    v31 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithDouble_);
                    _objc_setAssociatedObject(v24, &g_4cb938, v31, 1);
                    _objc_release(v31);
                    _objc_release(v25);
                    _objc_release(v24);
                    _objc_retain(v24);
                    v32 = 0;
                    v33 = v24;
                    do
                    {
                        v34 = v33;
                        v35 = v32;
                        v36 = _objc_retainAutoreleasedReturnValue(sub_260ba4(v34));
                        v37 = sub_260bd0(v36, &g_4cbb90);
                        _objc_release(v36);
                        if (((char)v37 & 1))
                        {
                            if (sub_260fe0())
                            {
                                sub_262d7c(v24);
                                sub_2621d4(v24);
                                sub_262ffc(v24);
                            }
                            else if (sub_2610c4())
                            {
                                sub_2610f0(v24);
                            }
                            v29 = v34;
                            break;
                        }
                        count2 = _objc_msgSend(v34, SEL_nextResponder);
                        v29 = _objc_retainAutoreleasedReturnValue(count2, SEL_nextResponder);
                        _objc_release(v34);
                    } while (v29 && (v39 = v29, v40 = v35 + 1, v32 = v35 + 1, v33 = v29, v35 < 9));
                }
            }
            else
            {
                _objc_retain(0);
                v29 = 0;
            }
            _objc_release(v29);
        }
    }
    _objc_release();
    return;
}
