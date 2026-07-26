/* Hook replacement 20/418
 * Selectors: SEL_isShowHeadImage
 * Address: 0xaf0c; original size: 1364 bytes
 * Status: ok; elapsed: 1.33s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_af0c(unsigned long long a0)
{
    unsigned long long v23;  // x21
    char *v24;  // x25
    unsigned long v33;  // x27
    long long *v34;  // x9
    unsigned long v35;  // 4110
    unsigned long long count;  // x0
    unsigned long long v37;  // w19
    unsigned long long v38;  // x25
    long long v39;  // x0
    long long v40;  // x27
    long long v41;  // x0
    unsigned long long count1;  // x0
    unsigned long long v25;  // x0
    unsigned long long *v43;  // x22
    unsigned long long v44;  // x19
    unsigned long v45;  // 4109
    unsigned long v46;  // x8
    long long v47;  // x0
    long long v48;  // x0
    unsigned long long v49;  // x19
    unsigned long v50;  // 4109
    unsigned long v26;  // 4116
    unsigned long long v27;  // w8
    long long v28;  // x24
    long long *v29;  // x26
    unsigned long long v31;  // x20
    unsigned long long v32;  // w8
    unsigned long long v0;  // [bp-0x1a0]
    int <0xaf0c[is_12]|Stack bp-0x190, 1 B>;  // [bp-0x190]
    int v2;  // [bp-0x190], Other Possible Types: uint128_t
    char v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd0]
    long long *v8;  // [bp-0xb8]
    unsigned int v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xac]
    unsigned long v11;  // [bp-0xa8]
    char *v12;  // [bp-0xa0]
    long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x84]
    long long v16;  // [bp-0x80]
    long long v17;  // [bp-0x80]
    unsigned long v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x70]
    unsigned long v20;  // [bp-0x68]
    char *v21;  // [bp-0x10]
    char v22;  // [bp+0x0]

    v21 = &v22;
    v23 = a0;
    v20 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_57b45c)
    {
        g_4c7651 = g_4c7647 ^ 52;
        g_4c7652 = g_4c7648 ^ 171;
        g_4c7653 = g_4c7649 ^ 181;
        g_4c7654 = g_4c764a ^ 192;
        g_4c7655 = g_4c764b ^ 167;
        g_4c7656 = g_4c764c ^ 168;
        g_4c7657 = g_4c764d ^ 39;
        g_4c7658 = g_4c764e ^ 92;
        g_4c7659 = g_4c764f ^ 70;
        g_4c765a = g_4c7650 ^ 244;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57b45c) = 1;
    v24 = &v3;
    v25 = g_57b398(v23);
    v13 = v13;
    v14 = v14;
    v19 = v19;
    if ((unsigned int)v25)
    {
        _objc_retain(v23);
        if ((g_582f88 & 1) && !(g_5830b8 & 1))
        {
            v26 = arm64g_calculate_condition(130, g_5830a8 - 4, 4, 0);
            if (!((char)v26))
            {
                if (3 <= g_5830b0 - 1)
                    v27 = 0;
                else
                    v27 = 1;
                goto LABEL_b320;
            }
            v27 = 1;
            if (!v23 || !v27)
                goto LABEL_b320;
            v28 = _objc_retainAutoreleasedReturnValue(sub_a144(v23));
            v0 = 0;
            v10 = (unsigned int)sub_a358(v23, v28, &v0);
            if ((v0 & 1))
            {
                v29 = &<0xaf0c[is_12]|Stack bp-0x190, 1 B> + 1;
                _objc_retain(v23);
                _objc_retain(_objc_retain(v28));
                v2 = (int)_INSERT(<0xaf0c[is_12]|Stack bp-0x190, 1 B>, 0, v28);
                _objc_retain(v23);
                v31 = 0;
                *((unsigned long long *)((char *)&v2 + 8)) = v23;
                v32 = 1;
                v33 = SEL_countByEnumeratingWithState_objects_count_;
                v34 = &v2;
                v13 = v28;
                v14 = v23;
                v8 = (char *)&v2 + 8;
                do
                {
                    v19 = _objc_retain(*(v34));
                    v15 = v32;
                    if (v19)
                    {
                        v35 = arm64g_calculate_condition(18, g_57b3e8, 1, 0);
                        if ((char)v35)
                            sub_45ecd4();
                        v6 = 0;
                        v7 = 0;
                        v4 = 0;
                        v5 = 0;
                        v16 = _objc_retain(g_57b3e0);
                        count = _objc_msgSend(v16, v33, &v4, v24, 16);
                        v9 = v31;
                        v37 = 0;
                        if (count)
                        {
                            v11 = v33;
                            v12 = v24;
                            do
                            {
                                v38 = 0;
                                v18 = SEL_lowercaseString;
                                do
                                {
                                    v39 = sub_a98c(v19, *((long long *)(*(&(&v4)[1]) + v38 * 8)));
                                    v40 = _objc_retainAutoreleasedReturnValue(v39, *((long long *)(*(&(&v4)[1]) + v38 * 8)));
                                    if (!_objc_msgSend(v40, SEL_length))
                                        continue;
                                    v41 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v40, v18), v18);
                                    count1 = _objc_msgSend(v41, SEL_hasSuffix_, &g_4c7680);
                                    _objc_release(v41);
                                    if (!((char)count1 & 1))
                                    {
                                        v37 = 1;
                                    }
                                    else
                                    {
                                        _objc_release(v40);
                                        _objc_release(v16);
                                        _objc_release(v19);
                                        v43 = &g_5830a8;
                                        v31 = 1;
                                        v28 = v13;
                                        v23 = v14;
                                        goto LABEL_b2d4;
                                    }
                                } while ((_objc_release(v40), v38 += 1, count != v38));
                                count = _objc_msgSend(v16, v11, &v4, v12, 16);
                            } while (count);
                        }
                        _objc_release(v16);
                        _objc_release(v19);
                        v28 = v13;
                        v23 = v14;
                        v31 = v9;
                        v29 = v8;
                    }
                    else
                    {
                        v37 = 0;
                    }
                    v32 = 0;
                    v31 = v37 | (unsigned int)v31;
                    v34 = v29;
                } while (((char)v15 & 1));
                v43 = &g_5830b0;
LABEL_b2d4:
                v44 = 8;
                do
                {
                    _objc_release(*((long long *)((char *)&v2 + v44)));
                    v44 -= 8;
                    v45 = arm64g_calculate_condition(18, v44, 8, 0);
                } while ((char)v45);
                _objc_release(v28);
                _objc_release(v23);
                if (!(v31 & 1))
                    goto LABEL_b318;
                v46 = *(v43);
                if (*(v43) >= 4)
                    v46 = 0;
                if (1 < v46)
                {
                    v47 = v28;
                    if (v46 == 3)
                    {
                        _objc_release(v47);
                        _objc_release(v23);
                        goto LABEL_b3b0;
                    }
                    else
                    {
                        _objc_release(v47);
                        _objc_release(v23);
                        v13 = v13;
                        v14 = v14;
                        v19 = v19;
                        if ((v10 & 1))
                            goto LABEL_b328;
                        goto LABEL_b3b0;
                    }
                }
                if (!v46)
                    goto LABEL_b318;
                _objc_release(v28);
                _objc_release(v23);
                v13 = v13;
                v14 = v14;
                v19 = v19;
                if (!v10)
                    goto LABEL_b328;
LABEL_b3b0:
                v25 = 0;
            }
            else
            {
LABEL_b318:
                _objc_release(v28);
                goto LABEL_b320;
            }
        }
        else
        {
LABEL_b320:
            _objc_release(v23);
LABEL_b328:
            v25 = 1;
        }
    }
    if (*((long long *)&g_600760) == v20)
        return v25;
    v48 = ___stack_chk_fail();
    _objc_release(v17);
    _objc_release(v19);
    v49 = 8;
    do
    {
        _objc_release(*((long long *)((char *)&v2 + v49)));
        v49 -= 8;
        v50 = arm64g_calculate_condition(18, v49, 8, 0);
    } while ((char)v50);
    _objc_release(v13);
    _objc_release(v14);
    _objc_release(v13);
    _objc_release(v14);
    __Unwind_Resume(v48);
}
