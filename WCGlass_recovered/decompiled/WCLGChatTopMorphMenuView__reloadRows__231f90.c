/* Recovered pseudocode
 * Objective-C: -[WCLGChatTopMorphMenuView reloadRows]
 * Address: 0x231f90; original size: 2284 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.63s
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_2;

unsigned long long sub_231f90(long long a0)
{
    long long v43;  // x19
    struct_0 *v44;  // x28
    unsigned long long count;  // x0
    unsigned long long v52;  // x8
    unsigned long long len;  // x24
    long long v54;  // x26
    unsigned long long count1;  // x0
    unsigned long long len1;  // x25
    long long v57;  // x0
    long long v58;  // x23
    long long count2;  // x26
    long long v60;  // x0
    long long v45;  // x23
    long long v61;  // x20
    long long v62;  // x28
    unsigned long v63;  // x1
    long long len2;  // x20
    long long v65;  // x0
    long long v66;  // x25
    long long v67;  // x20
    long long v68;  // x20
    long long v69;  // x0
    long long v70;  // x0
    unsigned long long i;  // x0
    long long v71;  // x0
    unsigned long long v72;  // x0
    unsigned long long v47;  // x27
    long long v48;  // x0
    long long v49;  // x0
    unsigned long long v50;  // x20
    char v0;  // [bp-0x330]
    int v1;  // [bp-0x2b0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x290]
    unsigned long long v3;  // [bp-0x280]
    char v4;  // [bp-0x270]
    unsigned long long v5;  // [bp-0x1f0]
    unsigned long long v6;  // [bp-0x1e0]
    unsigned long long v7;  // [bp-0x1d0]
    unsigned long long v8;  // [bp-0x1c0]
    char *v9;  // [bp-0x1a8]
    unsigned long v10;  // [bp-0x1a0]
    unsigned long v11;  // [bp-0x198]
    unsigned long v12;  // [bp-0x190]
    long long v13;  // [bp-0x188]
    unsigned long v14;  // [bp-0x180]
    unsigned long v15;  // [bp-0x178]
    struct_0 *v16;  // [bp-0x170]
    long long v17;  // [bp-0x168]
    unsigned long v18;  // [bp-0x160]
    unsigned long v19;  // [bp-0x158]
    unsigned long v20;  // [bp-0x150]
    unsigned long v21;  // [bp-0x148]
    unsigned long v22;  // [bp-0x140]
    unsigned long v23;  // [bp-0x138]
    unsigned long v24;  // [bp-0x130]
    unsigned long v25;  // [bp-0x128]
    unsigned long v26;  // [bp-0x120]
    unsigned long v27;  // [bp-0x118]
    unsigned long v28;  // [bp-0x110]
    unsigned long v29;  // [bp-0x108]
    unsigned long v30;  // [bp-0x100]
    unsigned long v31;  // [bp-0xf8]
    unsigned long v32;  // [bp-0xf0]
    unsigned long v33;  // [bp-0xe8]
    unsigned long v34;  // [bp-0xe0]
    unsigned long v35;  // [bp-0xd8]
    unsigned long v36;  // [bp-0xd0]
    unsigned long v37;  // [bp-0xc8]
    unsigned long long j;  // [bp-0xc0]
    unsigned long long v39;  // [bp-0xb8]
    unsigned long v40;  // [bp-0xb0]
    char *v41;  // [bp-0x10]
    char v42;  // [bp+0x0]

    v41 = &v42;
    v43 = a0;
    v40 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_57f524)
    {
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
    *((unsigned int *)&g_57f524) = 1;
    v44 = &v1;
    v9 = &v0;
    v7 = 0;
    v8 = 0;
    v5 = 0;
    v6 = 0;
    v45 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v43, SEL_rowViews));
    v10 = SEL_countByEnumeratingWithState_objects_count_;
    i = _objc_msgSend(v45, SEL_countByEnumeratingWithState_objects_count_, &v5, &v4, 16);
    if (i)
    {
        do
        {
            v47 = 0;
            do
            {
                _objc_msgSend(*((long long *)(*(&(&v5)[1]) + v47 * 8)), SEL_removeFromSuperview);
                v47 += 1;
            } while (i != v47);
            i = _objc_msgSend(v45, v10, &v5, &v4, 16);
        } while (i);
    }
    _objc_release(v45);
    v48 = _objc_msgSend(g_4c4110, SEL_array);
    v17 = _objc_retainAutoreleasedReturnValue(v48, SEL_array);
    v1 = (int)_INSERT(v1 CONCAT 0, 0, 0);
    *((uint128_t *)&(&v1)[16]) = 0;
    v2 = 0;
    v3 = 0;
    v14 = SEL_isGroup;
    v49 = _objc_msgSend(v43, SEL_isGroup);
    v13 = _objc_retainAutoreleasedReturnValue(sub_23287c(v49, SEL_isGroup));
    j = _objc_msgSend(v13, v10, &v1, v9, 16);
    if (j)
    {
        v15 = *((long long *)*((unsigned long long *)(&v1 + 16)));
        v16 = &v1;
        do
        {
            v50 = 0;
            v36 = SEL_controller;
            v37 = SEL_integerValue;
            v12 = SEL_openVideoCall;
            v11 = SEL_respondsToSelector_;
            v34 = SEL_initWithFrame_;
            v35 = SEL_bounds;
            v32 = SEL_setAlpha_;
            v33 = SEL_setTag_;
            v30 = SEL_initWithImage_;
            v31 = SEL_setUserInteractionEnabled_;
            v28 = SEL_setTintColor_;
            v29 = SEL_labelColor;
            v27 = SEL_setContentMode_;
            v26 = SEL_setFrame_;
            v25 = SEL_addSubview_;
            v24 = SEL_systemFontOfSize_weight_;
            v23 = SEL_setFont_;
            v22 = SEL_setTextColor_;
            v21 = SEL_setText_;
            v20 = SEL_effectView;
            v19 = SEL_contentView;
            v18 = SEL_addObject_;
            do
            {
                if (v44->field_10->field_0 != v15)
                    _objc_enumerationMutation(v13);
                count = _objc_msgSend(*((long long *)(v44->field_8 + v50 * 8)), v37);
                v52 = 2;
                if (count < 2)
                    v52 = count;
                if (count < 0)
                    len = 0;
                else
                    len = v52;
                v54 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(), v36);
                v39 = v50;
                if (len != 1)
                {
                    if (!len)
                        count1 = sub_2329d8(v54, _objc_msgSend(v43, v14));
                    else
                        count1 = sub_232d18(v54);
                }
                else
                {
                    if (((char)_objc_msgSend(v43, v14) & 1))
                    {
                        len1 = 0;
                        continue;
                    }
                    else
                    {
                        count1 = _objc_msgSend(v54, v11, v12);
                    }
                }
                len1 = count1;
                _objc_release(v54);
                v57 = _objc_alloc(g_4c4078);
                _objc_msgSend(v43, v35);
                v58 = v43;
                count2 = _objc_msgSend(v57, v34);
                _objc_msgSend(count2, v33, len);
                _objc_msgSend();
                _objc_msgSend(count2, v31, len1);
                v60 = _objc_alloc(g_4c4088);
                v61 = _objc_retainAutoreleasedReturnValue(sub_233754(len, 0), 0);
                v62 = _objc_msgSend(v60, v30, v61);
                _objc_release(v61);
                v63 = v29;
                len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v63), v63);
                _objc_msgSend(v62, v28, len2);
                _objc_release(len2);
                _objc_msgSend(v62, v27, 1);
                _objc_msgSend(v62, v26);
                _objc_msgSend(count2, v25, v62);
                v65 = _objc_alloc(g_4c4158);
                _objc_msgSend(v58, v35);
                v43 = v58;
                v66 = _objc_msgSend(v65, v34);
                v67 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v24), v24);
                _objc_msgSend(v66, v23, v67);
                _objc_release(v67);
                v68 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v63), v63);
                _objc_msgSend(v66, v22, v68);
                _objc_release(v68);
                _objc_msgSend(v66, v21, (&g_4a2bb0.field_0)[len]);
                _objc_msgSend(count2, v25, v66);
                v69 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v58, v20), v20);
                v70 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v69, v19), v19);
                _objc_msgSend(v70, v25, count2);
                _objc_release(v70);
                _objc_release(v69);
                _objc_msgSend(v17, v18, count2);
                _objc_release(v66);
                _objc_release(v62);
                _objc_release(count2);
                v50 = v39 + 1;
                v44 = v16;
            } while (j != v50);
            j = _objc_msgSend(v13, v10, v44, v9, 16);
        } while (j);
    }
    _objc_release(v13);
    _objc_msgSend(v43, SEL_setRowViews_, v17);
    v71 = _objc_msgSend(v43, SEL_highlightedIndex);
    _objc_msgSend(v43, SEL_setHighlightedIndex_, v71);
    v72 = _objc_release(v17);
    if (*((long long *)&g_600760) == v40)
        return v72;
    ___stack_chk_fail();
}
