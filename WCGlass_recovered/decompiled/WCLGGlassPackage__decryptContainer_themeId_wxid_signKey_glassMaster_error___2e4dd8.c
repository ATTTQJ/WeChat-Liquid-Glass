/* Recovered pseudocode
 * Objective-C: +[WCLGGlassPackage decryptContainer:themeId:wxid:signKey:glassMaster:error:]
 * Address: 0x2e4dd8; original size: 3028 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.414s
 */

typedef struct struct_1 {
    char padding_0[4];
    unsigned short field_4;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_2e4dd8(unsigned long a0, unsigned long a1, long long a2, unsigned long long a3, long long a4, unsigned long long *a5, long long a6, unsigned long long *a7)
{
    unsigned long long v25;  // x28
    unsigned long long v26;  // x27
    unsigned long long v35;  // x30
    long long v36;  // x21
    long long v37;  // x20
    unsigned long long v38;  // x8
    long long v39;  // x0
    struct_1 *count;  // x0
    unsigned long v41;  // x8
    long long v42;  // x22
    long long v43;  // x27
    long long v44;  // x3
    unsigned long long v27;  // x26
    long long count1;  // x0
    long long v46;  // x21
    long long v47;  // x3
    long long v48;  // x2
    long long count2;  // x0
    long long v50;  // x22
    long long v51;  // x2
    long long v52;  // x0
    long long v53;  // x27
    long long v54;  // x0
    unsigned long long v28;  // x25
    unsigned long v55;  // cc_op
    unsigned long v56;  // cc_dep1
    unsigned long v57;  // cc_dep2
    unsigned long v58;  // cc_ndep
    unsigned long v59;  // 4110
    unsigned long v60;  // 4102
    unsigned long long v29;  // x24
    unsigned long v61;  // 4110
    unsigned long v62;  // 4102
    unsigned long long v30;  // x23
    long long v63;  // x0
    long long v64;  // x0
    long long v65;  // x0
    long long v66;  // x21
    long long v67;  // x0
    long long v68;  // x20
    long long v69;  // x22
    long long v70;  // x0
    long long v71;  // x0
    long long v72;  // x0
    unsigned long long v31;  // x22
    long long v74;  // x0
    long long v75;  // x0
    long long v77;  // x0
    long long v78;  // x23
    unsigned long long *v79;  // w0
    long long v81;  // x0
    long long v82;  // x24
    unsigned long long v32;  // x21
    long long v83;  // x0
    long long v84;  // x2
    long long v85;  // x0
    long long v86;  // x1
    long long v87;  // x26
    unsigned long long v33;  // x20
    unsigned long long v34;  // x19
    unsigned long long v0;  // [bp-0x160]
    unsigned long long *v1;  // [bp-0x150]
    char v2;  // [bp-0x140]
    unsigned long long *v3;  // [bp-0xd0]
    unsigned long long *v4;  // [bp-0xc0]
    long long v5;  // [bp-0xb0]
    long long v6;  // [bp-0xa8]
    long long v7;  // [bp-0xa0]
    long long v8;  // [bp-0x98]
    long long v9;  // [bp-0x90]
    long long v10;  // [bp-0x80]
    unsigned long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x38]
    unsigned long long v18;  // [bp-0x30]
    unsigned long long v19;  // [bp-0x28]
    unsigned long long v20;  // [bp-0x20]
    unsigned long long v21;  // [bp-0x18]
    char *v22;  // [bp-0x10]
    unsigned long long v23;  // [bp-0x8]
    char v24;  // [bp+0x0]

    v12 = v25;
    v13 = v26;
    v14 = v27;
    v15 = v28;
    v16 = v29;
    v17 = v30;
    v18 = v31;
    v19 = v32;
    v20 = v33;
    v21 = v34;
    v22 = &v24;
    v23 = v35;
    v36 = a6;
    v37 = a4;
    v11 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_580428)
    {
        *((char *)&g_53f833) = g_53f82e ^ 178;
        g_53f834 = g_53f82f ^ 166;
        g_53f835 = g_53f830 ^ 5;
        g_53f836 = g_53f831 ^ 126;
        g_53f837 = g_53f832 ^ 145;
        *((unsigned short *)&g_53f810) = g_53f7f0 ^ 54012;
        *((unsigned short *)&g_53f812) = g_53f7f2 ^ 25570;
        *((unsigned short *)&g_53f814) = g_53f7f4 ^ 54601;
        *((unsigned short *)&g_53f816) = g_53f7f6 ^ 41275;
        *((unsigned short *)&g_53f818) = g_53f7f8 ^ 37127;
        *((unsigned short *)&g_53f81a) = g_53f7fa ^ 29845;
        *((unsigned short *)&g_53f81c) = g_53f7fc ^ 36638;
        *((unsigned short *)&g_53f81e) = g_53f7fe ^ 30783;
        *((unsigned short *)&g_53f820) = g_53f800 ^ 39437;
        *((unsigned short *)&g_53f822) = g_53f802 ^ 64456;
        *((unsigned short *)&g_53f824) = g_53f804 ^ 17299;
        *((unsigned short *)&g_53f826) = g_53f806 ^ 4141;
        *((unsigned short *)&g_53f828) = g_53f808 ^ 38288;
        *((unsigned short *)&g_53f82a) = g_53f80a ^ 21182;
        *((unsigned short *)&g_53f82c) = g_53f80c ^ 429;
        *((unsigned short *)&g_53f7d8) = g_53f7c8 ^ 464;
        *((unsigned short *)&g_53f7da) = g_53f7ca ^ 9822;
        *((unsigned short *)&g_53f7dc) = g_53f7cc ^ 26946;
        *((unsigned short *)&g_53f7de) = g_53f7ce ^ 59029;
        *((unsigned short *)&g_53f7e0) = g_53f7d0 ^ 32919;
        *((unsigned short *)&g_53f7e2) = g_53f7d2 ^ 0xae00;
        *((unsigned short *)&g_53f7e4) = g_53f7d4 ^ 37740;
        *((unsigned short *)&g_53f7e6) = g_53f7d6 ^ 20232;
        *((unsigned short *)&g_53f7bc) = g_53f7b0 ^ 49461;
        *((unsigned short *)&g_53f7be) = g_53f7b2 ^ 45837;
        *((unsigned short *)&g_53f7c0) = g_53f7b4 ^ 52308;
        *((unsigned short *)&g_53f7c2) = g_53f7b6 ^ 23585;
        *((unsigned short *)&g_53f7c4) = g_53f7b8 ^ 14765;
        *((unsigned short *)&g_53f7c6) = g_53f7ba ^ 39034;
        *((unsigned short *)&g_53f7a0) = g_53f790 ^ 15319;
        *((unsigned short *)&g_53f7a2) = g_53f792 ^ 1824;
        *((unsigned short *)&g_53f7a4) = g_53f794 ^ 12361;
        *((unsigned short *)&g_53f7a6) = g_53f796 ^ 42703;
        *((unsigned short *)&g_53f7a8) = g_53f798 ^ 53770;
        *((unsigned short *)&g_53f7aa) = g_53f79a ^ 48873;
        *((unsigned short *)&g_53f7ac) = g_53f79c ^ 21318;
        *((unsigned short *)&g_53f7ae) = g_53f79e ^ 3912;
        *((unsigned short *)&g_53f856) = g_53f84c ^ 45833;
        *((unsigned short *)&g_53f858) = g_53f84e ^ 25809;
        *((unsigned short *)&g_53f85a) = g_53f850 ^ 23651;
        *((unsigned short *)&g_53f85c) = g_53f852 ^ 3396;
        *((unsigned short *)&g_53f85e) = g_53f854 ^ 31715;
        g_53f78d = g_53f78a ^ 50;
        g_53f78e = g_53f78b ^ 64;
        g_53f78f = g_53f78c ^ 191;
        g_53f842 = g_53f838 ^ 193;
        g_53f843 = g_53f839 ^ 210;
        g_53f844 = g_53f83a ^ 22;
        g_53f845 = g_53f83b ^ 165;
        g_53f846 = g_53f83c ^ 166;
        g_53f847 = g_53f83d ^ 50;
        g_53f848 = g_53f83e ^ 122;
        g_53f849 = g_53f83f ^ 88;
        g_53f84a = g_53f840 ^ 237;
        g_53f84b = g_53f841 ^ 143;
        g_53f786 = g_53f782 ^ 52;
        g_53f787 = g_53f783 ^ 73;
        g_53f788 = g_53f784 ^ 248;
        g_53f789 = g_53f785 ^ 92;
        *((unsigned short *)&g_53f772) = g_53f762 ^ 8884;
        *((unsigned short *)&g_53f774) = g_53f764 ^ 14691;
        *((unsigned short *)&g_53f776) = g_53f766 ^ 22202;
        *((unsigned short *)&g_53f778) = g_53f768 ^ 22607;
        *((unsigned short *)&g_53f77a) = g_53f76a ^ 38404;
        *((unsigned short *)&g_53f77c) = g_53f76c ^ 44980;
        *((unsigned short *)&g_53f77e) = g_53f76e ^ 27722;
        *((unsigned short *)&g_53f780) = g_53f770 ^ 52198;
        *((unsigned short *)&g_53f740) = g_53f710 ^ 42246;
        *((unsigned short *)&g_53f742) = g_53f712 ^ 53886;
        *((unsigned short *)&g_53f744) = g_53f714 ^ 41693;
        *((unsigned short *)&g_53f746) = g_53f716 ^ 19087;
        *((unsigned short *)&g_53f748) = g_53f718 ^ 45456;
        *((unsigned short *)&g_53f74a) = g_53f71a ^ 37199;
        *((unsigned short *)&g_53f74c) = g_53f71c ^ 40254;
        *((unsigned short *)&g_53f74e) = g_53f71e ^ 44980;
        *((unsigned short *)&g_53f750) = g_53f720 ^ 49996;
        *((unsigned short *)&g_53f752) = g_53f722 ^ 13712;
        *((unsigned short *)&g_53f754) = g_53f724 ^ 3304;
        *((unsigned short *)&g_53f756) = g_53f726 ^ 55136;
        *((unsigned short *)&g_53f758) = g_53f728 ^ 35958;
        *((unsigned short *)&g_53f75a) = g_53f72a ^ 41009;
        *((unsigned short *)&g_53f75c) = g_53f72c ^ 5915;
        *((unsigned short *)&g_53f75e) = g_53f72e ^ 20819;
        *((unsigned short *)&g_53f760) = g_53f730 ^ 34285;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580428) = 1;
    _objc_retain(a2);
    _objc_retain(v37);
    _objc_retain(v36);
    if (5 >= _objc_msgSend(a2, SEL_length))
    {
        if (a7)
        {
            v38 = " \t`";
            goto LABEL_2e54f8;
        }
LABEL_2e5544:
    }
    else
    {
        v39 = _objc_retainAutorelease(a2);
        count = _objc_msgSend(v39, SEL_bytes);
        if (count->padding_0 != g_53f833)
        {
            if (!a7)
                goto LABEL_2e5544;
            v38 = " \t`";
LABEL_2e54f8:
            *(a7) = v38;
        }
        else
        {
            v41 = count->field_4;
            v42 = (unsigned int)((v41 & 0xff00) >> 8) | (unsigned int)v41 * 0x100 & 0xff00ff00;
            v43 = v42 + 6;
            if (v43 > _objc_msgSend(a2, SEL_length))
            {
                if (!a7)
                    goto LABEL_2e5544;
                *(a7) = " \t`";
            }
            else
            {
                v8 = v36;
                v10 = v37;
                v44 = v42;
                count1 = _objc_msgSend(a2, SEL_subdataWithRange_, 6, v44);
                v46 = _objc_retainAutoreleasedReturnValue(count1, SEL_subdataWithRange_, 6, v44);
                v47 = _objc_msgSend(a2, SEL_length) - v42 - 6;
                v48 = v43;
                count2 = _objc_msgSend(a2, SEL_subdataWithRange_, v48, v47);
                v50 = _objc_retainAutoreleasedReturnValue(count2, SEL_subdataWithRange_, v48, v47);
                v9 = v46;
                v51 = v46;
                v52 = _objc_msgSend(g_4c42e8, SEL_JSONObjectWithData_options_error_, v51, 0, 0);
                v53 = _objc_retainAutoreleasedReturnValue(v52, SEL_JSONObjectWithData_options_error_, v51, 0, 0);
                v54 = _objc_msgSend(g_4c4208, SEL_class);
                if (_objc_msgSend(v53, SEL_isKindOfClass_, v54))
                {
                    v59 = arm64g_calculate_condition(v55 | 16, v56, v57, v58);
                    v60 = arm64g_calculate_condition(20, ((char)v59 ? v53 : 0x40000000), 0, 0);
                    if ((char)v60)
                        goto LABEL_2e5634;
LABEL_2e5610:
                    v36 = v8;
                    if (a7)
                        *(a7) = " \t`";
                    v37 = v10;
                }
                else
                {
                    v61 = arm64g_calculate_condition(v55 | 16, v56, v57, v58);
                    v62 = arm64g_calculate_condition(16, ((char)v61 ? v53 : 0x40000000), 0, 0);
                    if (!((char)v62))
                        goto LABEL_2e5610;
LABEL_2e5634:
                    v6 = v50;
                    v63 = _objc_retain(v53);
                    v64 = _objc_msgSend(v63, SEL_objectForKeyedSubscript_, &g_53f980);
                    v65 = _objc_retainAutoreleasedReturnValue(v64, SEL_objectForKeyedSubscript_, &g_53f980);
                    v66 = _objc_retainAutoreleasedReturnValue(sub_2e59ac(v65));
                    _objc_release(v65);
                    v67 = _objc_msgSend(v53, SEL_objectForKeyedSubscript_, &g_53fa80);
                    v68 = _objc_retainAutoreleasedReturnValue(v67, SEL_objectForKeyedSubscript_, &g_53fa80);
                    _objc_release(v53);
                    v69 = _objc_retainAutoreleasedReturnValue(sub_2e59ac(v68));
                    _objc_release(v68);
                    v7 = v66;
                    v36 = v8;
                    v5 = v69;
                    if (_objc_msgSend(v66, SEL_length) != 16 || !_objc_msgSend(v69, SEL_length))
                    {
                        v37 = v10;
                        if (!a7)
                            goto LABEL_2e5900;
                        *(a7) = " \t`";
                        goto LABEL_2e5904;
                    }
                    v70 = v10;
                    if (a5)
                    {
                        v3 = (unsigned long long *)0;
                        v4 = (unsigned long long *)0;
                        _CC_SHA256_Init(&v2);
                        _CC_SHA256_Update(&v2, &g_53f833, 4);
                        v71 = _objc_retainAutorelease(v7);
                        v72 = _objc_msgSend(v71, SEL_bytes);
                        _CC_SHA256_Update(&v2, v72, _objc_msgSend(v7, SEL_length));
                        v74 = _objc_retainAutorelease(v6);
                        v75 = _objc_msgSend(v74, SEL_bytes);
                        _CC_SHA256_Update(&v2, v75, _objc_msgSend(v6, SEL_length));
                        _CC_SHA256_Final(&v3, &v2);
                        v77 = _objc_msgSend(g_4c4130, SEL_dataWithBytes_length_, &v3, 32);
                        v78 = _objc_retainAutoreleasedReturnValue(v77, SEL_dataWithBytes_length_, &v3, 32);
                        v1 = 0;
                        v79 = (unsigned long long *)(unsigned int)_SecKeyVerifySignature(a5, *((long long *)&g_6006b8), v78, v5, &v1);
                        if (v1)
                            _CFRelease(v1);
                        if (v79)
                        {
                            _objc_release(v78);
                            v70 = v10;
                            goto LABEL_2e5800;
                        }
                        else
                        {
                            v37 = v10;
                            if (a7)
                                *(a7) = " \t`";
                            _objc_release(v78);
LABEL_2e5900:
LABEL_2e5904:
                            v50 = v6;
                        }
                    }
                    else
                    {
LABEL_2e5800:
                        v81 = _objc_msgSend(v70, SEL_dataUsingEncoding_, 4);
                        v82 = _objc_retainAutoreleasedReturnValue(v81, SEL_dataUsingEncoding_, 4);
                        v0 = a3;
                        v83 = _objc_msgSend(g_4c40b8, SEL_stringWithFormat_, &g_53f8c0);
                        v84 = _objc_retainAutoreleasedReturnValue(v83, SEL_stringWithFormat_, &g_53f8c0);
                        v85 = _objc_retainAutoreleasedReturnValue(sub_2e5c04(v36, v82, v84), v82, v84);
                        _objc_release(v84);
                        v50 = v6;
                        v86 = v85;
                        v87 = _objc_retainAutoreleasedReturnValue(sub_2e5ce8(v50, v86, v7), v86, v7);
                        if (_objc_msgSend(v87, SEL_length))
                        {
                            _objc_retain(v87);
                        }
                        else if (a7)
                        {
                            *(a7) = " \t`";
                        }
                        v37 = v10;
                        _objc_release(v87);
                        _objc_release(v86);
                        _objc_release(v82);
                    }
                    _objc_release(v5);
                    _objc_release(v7);
                }
                _objc_release(v53);
                _objc_release(v50);
                _objc_release(v9);
            }
        }
    }
    _objc_release(v36);
    _objc_release(v37);
    _objc_release(a2);
    if (*((long long *)&g_600760) != v11)
        ___stack_chk_fail();
}
