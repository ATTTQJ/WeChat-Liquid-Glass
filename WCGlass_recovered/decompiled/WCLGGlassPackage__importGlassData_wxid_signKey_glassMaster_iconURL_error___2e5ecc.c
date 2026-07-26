/* Recovered pseudocode
 * Objective-C: +[WCLGGlassPackage importGlassData:wxid:signKey:glassMaster:iconURL:error:]
 * Address: 0x2e5ecc; original size: 4956 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 4.531s
 */

unsigned long long sub_2e5ecc(long long a0, unsigned long a1, long long a2, long long a3, long long a4, long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v36;  // x22
    long long v37;  // x21
    long long count;  // x0
    long long v46;  // x25
    long long v47;  // x2
    long long count1;  // x0
    long long v49;  // x22
    long long count2;  // x0
    long long v51;  // x0
    unsigned long v52;  // cc_op
    unsigned long v53;  // cc_dep1
    unsigned long v54;  // cc_dep2
    long long v38;  // x0
    unsigned long v55;  // cc_ndep
    unsigned long v56;  // 4110
    unsigned long v57;  // 4102
    unsigned long v58;  // 4110
    unsigned long v59;  // 4102
    unsigned long long v39;  // x0
    unsigned long long v60;  // x23
    long long v61;  // x0
    unsigned long long v40;  // x21
    long long v62;  // x0
    long long v63;  // x22
    long long v64;  // x5
    long long v65;  // x3
    long long v66;  // x0
    unsigned long v67;  // x25, Other Possible Types: unsigned long long
    unsigned long long v68;  // x26
    unsigned long long v69;  // x21
    unsigned long v70;  // x26
    long long v71;  // x0
    long long v41;  // x0
    long long v72;  // x25
    long long v73;  // x0
    unsigned long v74;  // x23
    unsigned long long v75;  // x0
    unsigned long long v76;  // x8
    long long v77;  // x0
    unsigned long v78;  // x26
    unsigned long long v79;  // x0
    unsigned long long v80;  // x25
    unsigned long long v81;  // x0
    unsigned long v42;  // x8
    unsigned long long v83;  // x0
    unsigned long long v84;  // x23
    unsigned long long v85;  // x26
    long long v86;  // x0
    unsigned long long v87;  // x8
    long long v88;  // x0
    long long v89;  // x23
    unsigned long long v90;  // x0
    long long v91;  // x0
    long long v43;  // x25
    long long v92;  // x2
    long long v93;  // x0
    unsigned long v94;  // x24
    unsigned long long v95;  // x8
    unsigned long long v96;  // x10
    unsigned long long v97;  // x8
    unsigned long long v98;  // x0
    unsigned long long v99;  // x26
    long long v100;  // x0
    long long v101;  // x0
    long long v102;  // x0
    long long v103;  // x0
    long long v104;  // x0
    long long len;  // x27
    long long v106;  // x0
    long long v107;  // x0
    long long v108;  // x24
    long long v44;  // x3
    long long v0;  // [bp-0x190]
    unsigned long v1;  // [bp-0x180]
    unsigned short v2[4];  // [bp-0x178]
    unsigned short v3[4];  // [bp-0x170]
    long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    long long v6;  // [bp-0x158]
    long long v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    unsigned long v9;  // [bp-0x140]
    unsigned long long v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x110]
    long long v16;  // [bp-0x108]
    unsigned long long v17;  // [bp-0x100]
    unsigned long v18;  // [bp-0xf0]
    unsigned long long v19;  // [bp-0xe8]
    unsigned long long v20;  // [bp-0xe0]
    unsigned long v21;  // [bp-0xd8]
    unsigned long long v22;  // [bp-0xd0]
    long long len2;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned long long v24;  // [bp-0xc0]
    long long len1;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    unsigned long long v27;  // [bp-0xa8]
    unsigned long v28;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long v29;  // [bp-0x98], Other Possible Types: unsigned long long
    long long v30;  // [bp-0x90]
    long long v31;  // [bp-0x80]
    long long v32;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v33;  // [bp-0x68]
    char *v34;  // [bp-0x10]
    char v35;  // [bp+0x0]

    v34 = &v35;
    v36 = a6;
    v37 = a5;
    v32 = a4;
    v33 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_580438)
    {
        *((char *)&g_53fdf1) = g_53fdec ^ 0xbb;
        g_53fdf2 = g_53fded ^ 123;
        g_53fdf3 = g_53fdee ^ 0xee;
        g_53fdf4 = g_53fdef ^ 38;
        g_53fdf5 = g_53fdf0 ^ 193;
        *((unsigned short *)&g_53fde0) = g_53fdd4 ^ 30554;
        *((unsigned short *)&g_53fde2) = g_53fdd6 ^ 60623;
        *((unsigned short *)&g_53fde4) = g_53fdd8 ^ 47971;
        *((unsigned short *)&g_53fde6) = g_53fdda ^ 53433;
        *((unsigned short *)&g_53fde8) = g_53fddc ^ 64771;
        *((unsigned short *)&g_53fdea) = g_53fdde ^ 41838;
        g_53fdcb = g_53fdc2 ^ 140;
        g_53fdcc = g_53fdc3 ^ 31;
        g_53fdcd = g_53fdc4 ^ 166;
        g_53fdce = g_53fdc5 ^ 165;
        g_53fdcf = g_53fdc6 ^ 191;
        g_53fdd0 = g_53fdc7 ^ 200;
        g_53fdd1 = g_53fdc8 ^ 132;
        g_53fdd2 = g_53fdc9 ^ 52;
        g_53fdd3 = g_53fdca ^ 9;
        *((unsigned short *)&g_53fd90) = g_53fd70 ^ 58852;
        *((unsigned short *)&g_53fd92) = g_53fd72 ^ 48903;
        *((unsigned short *)&g_53fd94) = g_53fd74 ^ 35832;
        *((unsigned short *)&g_53fd96) = g_53fd76 ^ 58388;
        *((unsigned short *)&g_53fd98) = g_53fd78 ^ 0xff48;
        *((unsigned short *)&g_53fd9a) = g_53fd7a ^ 40357;
        *((unsigned short *)&g_53fd9c) = g_53fd7c ^ 25346;
        *((unsigned short *)&g_53fd9e) = g_53fd7e ^ 42182;
        *((unsigned short *)&g_53fda0) = g_53fd80 ^ 3424;
        *((unsigned short *)&g_53fd5c) = g_53fd4e ^ 0x3fd8;
        *((unsigned short *)&g_53fd5e) = g_53fd50 ^ 48081;
        *((unsigned short *)&g_53fd60) = g_53fd52 ^ 44317;
        *((unsigned short *)&g_53fd62) = g_53fd54 ^ 20114;
        *((unsigned short *)&g_53fd64) = g_53fd56 ^ 1331;
        *((unsigned short *)&g_53fd66) = g_53fd58 ^ 32518;
        *((unsigned short *)&g_53fd68) = g_53fd5a ^ 46071;
        *((unsigned short *)&g_53fd42) = g_53fd36 ^ 38232;
        *((unsigned short *)&g_53fd44) = g_53fd38 ^ 33872;
        *((unsigned short *)&g_53fd46) = g_53fd3a ^ 27497;
        *((unsigned short *)&g_53fd48) = g_53fd3c ^ 35170;
        *((unsigned short *)&g_53fd4a) = g_53fd3e ^ 63009;
        *((unsigned short *)&g_53fd4c) = g_53fd40 ^ 29390;
        g_53fd31 = g_53fd2c ^ 89;
        g_53fd32 = g_53fd2d ^ 250;
        g_53fd33 = g_53fd2e ^ 241;
        g_53fd34 = g_53fd2f ^ 179;
        g_53fd35 = g_53fd30 ^ 132;
        *((unsigned short *)&g_53fd1c) = g_53fd0c ^ 55698;
        *((unsigned short *)&g_53fd1e) = g_53fd0e ^ 51118;
        *((unsigned short *)&g_53fd20) = g_53fd10 ^ 54919;
        *((unsigned short *)&g_53fd22) = g_53fd12 ^ 63414;
        *((unsigned short *)&g_53fd24) = g_53fd14 ^ 34169;
        *((unsigned short *)&g_53fd26) = g_53fd16 ^ 692;
        *((unsigned short *)&g_53fd28) = g_53fd18 ^ 23993;
        *((unsigned short *)&g_53fd2a) = g_53fd1a ^ 54963;
        g_53fd03 = g_53fcfa ^ 56;
        g_53fd04 = g_53fcfb ^ 0x22;
        g_53fd05 = g_53fcfc ^ 0xcc;
        g_53fd06 = g_53fcfd ^ 237;
        g_53fd07 = g_53fcfe ^ 93;
        g_53fd08 = g_53fcff ^ 107;
        g_53fd09 = g_53fd00 ^ 124;
        g_53fd0a = g_53fd01 ^ 16;
        g_53fd0b = g_53fd02 ^ 14;
        g_53fce1 = g_53fcdc ^ 0x55;
        g_53fce2 = g_53fcdd ^ 227;
        g_53fce3 = g_53fcde ^ 101;
        g_53fce4 = ~(g_53fcdf);
        g_53fce5 = g_53fce0 ^ 53;
        *((unsigned short *)&g_53fdb2) = g_53fda2 ^ 26436;
        *((unsigned short *)&g_53fdb4) = g_53fda4 ^ 64443;
        *((unsigned short *)&g_53fdb6) = g_53fda6 ^ 29707;
        *((unsigned short *)&g_53fdb8) = g_53fda8 ^ 63467;
        *((unsigned short *)&g_53fdba) = g_53fdaa ^ 51738;
        *((unsigned short *)&g_53fdbc) = g_53fdac ^ 32049;
        *((unsigned short *)&g_53fdbe) = g_53fdae ^ 23175;
        *((unsigned short *)&g_53fdc0) = g_53fdb0 ^ 56378;
        *((unsigned short *)&g_53fcf0) = g_53fce6 ^ 28065;
        *((unsigned short *)&g_53fcf2) = g_53fce8 ^ 5577;
        *((unsigned short *)&g_53fcf4) = g_53fcea ^ 40998;
        *((unsigned short *)&g_53fcf6) = g_53fcec ^ 37034;
        *((unsigned short *)&g_53fcf8) = g_53fcee ^ 26583;
        g_53fc4c = g_53fc40 ^ 211;
        g_53fc4d = g_53fc41 ^ 0x88;
        g_53fc4e = g_53fc42 ^ 236;
        g_53fc4f = g_53fc43 ^ 107;
        g_53fc50 = g_53fc44 ^ 96;
        g_53fc51 = g_53fc45 ^ 26;
        g_53fc52 = g_53fc46 ^ 133;
        g_53fc53 = g_53fc47 ^ 199;
        g_53fc54 = g_53fc48 ^ 159;
        g_53fc55 = g_53fc49 ^ 151;
        g_53fc56 = g_53fc4a ^ 137;
        g_53fc57 = g_53fc4b ^ 18;
        g_53fcc9 = g_53fcc0 ^ 117;
        g_53fcca = g_53fcc1 ^ 133;
        g_53fccb = g_53fcc2 ^ 234;
        g_53fccc = g_53fcc3 ^ 47;
        g_53fccd = g_53fcc4 ^ 169;
        g_53fcce = g_53fcc5 ^ 71;
        g_53fccf = g_53fcc6 ^ 39;
        g_53fcd0 = g_53fcc7 ^ 185;
        g_53fcd1 = g_53fcc8 ^ 245;
        g_53fc81 = g_53fc7a ^ 11;
        g_53fc82 = g_53fc7b ^ 49;
        g_53fc83 = g_53fc7c ^ 201;
        g_53fc84 = g_53fc7d ^ 26;
        g_53fc85 = g_53fc7e ^ 99;
        g_53fc86 = g_53fc7f ^ 26;
        g_53fc87 = g_53fc80 ^ 32;
        g_53fc9f = g_53fc92 ^ 208;
        g_53fca0 = g_53fc93 ^ 140;
        g_53fca1 = g_53fc94 ^ 44;
        g_53fca2 = g_53fc95 ^ 64;
        g_53fca3 = g_53fc96 ^ 247;
        g_53fca4 = g_53fc97 ^ 243;
        g_53fca5 = g_53fc98 ^ 95;
        g_53fca6 = ~(g_53fc99);
        g_53fca7 = g_53fc9a ^ 0xbb;
        g_53fca8 = g_53fc9b ^ 213;
        g_53fca9 = g_53fc9c ^ 173;
        g_53fcaa = g_53fc9d ^ 192;
        g_53fcab = g_53fc9e ^ 222;
        g_53fc8d = g_53fc88 ^ 193;
        g_53fc8e = g_53fc89 ^ 124;
        g_53fc8f = g_53fc8a ^ 156;
        g_53fc90 = g_53fc8b ^ 89;
        g_53fc91 = g_53fc8c ^ 0x88;
        *((unsigned short *)&g_53fcb6) = g_53fcac ^ 17485;
        *((unsigned short *)&g_53fcb8) = g_53fcae ^ 16393;
        *((unsigned short *)&g_53fcba) = g_53fcb0 ^ 21294;
        *((unsigned short *)&g_53fcbc) = g_53fcb2 ^ 51560;
        *((unsigned short *)&g_53fcbe) = g_53fcb4 ^ 49873;
        g_53fc71 = g_53fc68 ^ 122;
        g_53fc72 = g_53fc69 ^ 3;
        g_53fc73 = g_53fc6a ^ 24;
        g_53fc74 = g_53fc6b ^ 105;
        g_53fc75 = g_53fc6c ^ 78;
        g_53fc76 = g_53fc6d ^ 6;
        g_53fc77 = g_53fc6e ^ 246;
        g_53fc78 = g_53fc6f ^ 4;
        g_53fc79 = g_53fc70 ^ 21;
        g_53fcd7 = g_53fcd2 ^ 216;
        g_53fcd8 = g_53fcd3 ^ 93;
        g_53fcd9 = g_53fcd4 ^ 0xbb;
        g_53fcda = g_53fcd5 ^ 95;
        g_53fcdb = g_53fcd6 ^ 228;
        g_53fc60 = g_53fc58 ^ 71;
        g_53fc61 = g_53fc59 ^ 213;
        g_53fc62 = g_53fc5a ^ 155;
        g_53fc63 = g_53fc5b ^ 111;
        g_53fc64 = g_53fc5c ^ 100;
        g_53fc65 = g_53fc5d ^ 13;
        g_53fc66 = g_53fc5e ^ 5;
        g_53fc67 = g_53fc5f ^ 253;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580438) = 1;
    _objc_retain(a2);
    _objc_retain(a3);
    _objc_retain(v37);
    _objc_retain(v36);
    if (_objc_msgSend(a2, SEL_length) >= 6)
    {
        v38 = _objc_retainAutorelease(a2);
        v39 = _objc_msgSend(v38, SEL_bytes);
        if (*((int *)v39) != g_53fdf1)
            goto LABEL_2e69f8;
        v31 = v37;
        v40 = v36;
        v41 = _objc_retainAutorelease(a2);
        v42 = *((short *)(_objc_msgSend(v41, SEL_bytes) + 4));
        v43 = (unsigned int)((v42 & 0xff00) >> 8) | (unsigned int)v42 * 0x100 & 0xff00ff00;
        if (v43 + 6 > _objc_msgSend(a2, SEL_length))
        {
            v60 = 0;
            if (a7)
                *((char **)a7) = " \t`";
            v36 = v40;
            v37 = v31;
        }
        else
        {
            v44 = v43;
            count = _objc_msgSend(a2, SEL_subdataWithRange_, 6, v44);
            v46 = _objc_retainAutoreleasedReturnValue(count, SEL_subdataWithRange_, 6, v44);
            v67 = SEL_JSONObjectWithData_options_error_;
            v47 = v46;
            count1 = _objc_msgSend(g_4c42e8, SEL_JSONObjectWithData_options_error_, v47, 0, 0);
            v49 = _objc_retainAutoreleasedReturnValue(count1, SEL_JSONObjectWithData_options_error_, v47, 0, 0);
            _objc_release(v47);
            count2 = _objc_msgSend(g_4c4208, SEL_class);
            v51 = v49;
            if (_objc_msgSend(v49, SEL_isKindOfClass_, count2))
            {
                v56 = arm64g_calculate_condition(v52 | 16, v53, v54, v55);
                v57 = arm64g_calculate_condition(20, ((char)v56 ? v49 : 0x40000000), 0, 0);
                if ((char)v57)
                    goto LABEL_2e6b80;
LABEL_2e6b60:
                v36 = v40;
                v60 = 0;
                if (a7)
                    *((char **)a7) = " \t`";
                v37 = v31;
            }
            else
            {
                v58 = arm64g_calculate_condition(v52 | 16, v53, v54, v55);
                v59 = arm64g_calculate_condition(16, ((char)v58 ? v49 : 0x40000000), 0, 0);
                if (!((char)v59))
                    goto LABEL_2e6b60;
LABEL_2e6b80:
                v30 = v51;
                v28 = SEL_class;
                v29 = SEL_objectForKeyedSubscript_;
                v61 = _objc_msgSend(v51, SEL_objectForKeyedSubscript_, " \t`");
                v62 = _objc_retainAutoreleasedReturnValue(v61, SEL_objectForKeyedSubscript_, " \t`");
                v63 = _objc_msgSend(v62, SEL_integerValue);
                _objc_release(v62);
                v17 = 0;
                v64 = v32;
                len1 = v63;
                v65 = len1;
                v66 = _objc_msgSend(a0, SEL_decryptContainer_themeId_wxid_signKey_glassMaster_error_, a2, v65, a3, v64, v31, &v17);
                v67 = _objc_retainAutoreleasedReturnValue(v66, SEL_decryptContainer_themeId_wxid_signKey_glassMaster_error_, a2, v65, a3, v64, v31, &v17);
                v68 = v17;
                _objc_retain(v68);
                v36 = v40;
                if (v67)
                {
                    v32 = v68;
                    v69 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c42e8, v67, v67, 0, 0), v67, v67, 0, 0);
                    v70 = v28;
                    v71 = _objc_msgSend(g_4c4208, v70);
                    v27 = v69;
                    if (!_objc_msgSend(v69, SEL_isKindOfClass_, v71))
                        v69 = 0;
                    v72 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(_objc_retain(), v29, &g_540260), v29, &g_540260);
                    v73 = _objc_msgSend(g_4c4208, v70);
                    v26 = v69;
                    if (((char)_objc_msgSend(v72, SEL_isKindOfClass_, v73) & 1))
                    {
                        v74 = v29;
                        v75 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v69, v74, &g_540260), v74, &g_540260);
                        _objc_release(v72);
                        v76 = v75;
                        v37 = v31;
                        v68 = v32;
                        if (v76)
                        {
                            v28 = v76;
                            v77 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v28, v74, &g_5401e0), v74, &g_5401e0);
                            v78 = v74;
                            len2 = SEL_isEqualToString_;
                            v79 = _objc_msgSend(v77, SEL_isEqualToString_, a3);
                            _objc_release(v77);
                            if (((char)v79 & 1))
                            {
                                v80 = v28;
                                v81 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v80, v78, &g_540060), v78, &g_540060);
                                if (!v81)
                                    v83 = " \t`";
                                else
                                    v83 = v81;
                                v24 = v83;
                                _objc_retain();
                                _objc_release(v81);
                                v84 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v80, v78, &g_540020), v78, &g_540020);
                                if (v84)
                                {
                                    _objc_retain(v84);
                                    v85 = v84;
                                }
                                else
                                {
                                    v0 = len1;
                                    v86 = _objc_msgSend(g_4c40b8, SEL_stringWithFormat_, &g_540220);
                                    v85 = _objc_retainAutoreleasedReturnValue(v86, SEL_stringWithFormat_, &g_540220);
                                }
                                _objc_release(v84);
                                v22 = v85;
                                if (((char)_objc_msgSend(v24, len2, &g_53ff20) & 1) || ((char)_objc_msgSend(v24, len2, &g_53fee0) & 1))
                                {
                                    v88 = _objc_msgSend(a0, SEL_vaultPathForTheme_, len1);
                                    v89 = _objc_retainAutoreleasedReturnValue(v88, SEL_vaultPathForTheme_, len1);
                                    v90 = _objc_msgSend(a2, SEL_writeToFile_atomically_, v89, 1);
                                    _objc_release(v89);
                                    if (((char)v90 & 1))
                                    {
                                        _objc_msgSend(a0, SEL_invalidateMemoryCacheForTheme_, len1);
                                        if (_objc_msgSend(v24, len2, &g_53ff20))
                                            sub_197d8();
                                        v91 = _objc_msgSend(a0, SEL_loadIndex);
                                        len2 = _objc_retainAutoreleasedReturnValue(v91, SEL_loadIndex);
                                        v1 = " \t`";
                                        v18 = SEL_numberWithInteger_;
                                        v92 = len1;
                                        v93 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v92);
                                        v21 = _objc_retainAutoreleasedReturnValue(v93, SEL_numberWithInteger_, v92);
                                        v9 = v21;
                                        v10 = v24;
                                        wcsncpy(v2, L"`T", 2);
                                        wcsncpy(v3, L" T", 2);
                                        v11 = v22;
                                        v4 = " \t`";
                                        v94 = v29;
                                        v20 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v28, v94, " \t`"), v94, " \t`");
                                        if (!v20)
                                            v95 = " \t`";
                                        else
                                            v95 = v20;
                                        if (!v36)
                                            v96 = " \t`";
                                        else
                                            v96 = v36;
                                        v12 = v95;
                                        v13 = v96;
                                        v5 = " \t`";
                                        v6 = " \t`";
                                        v19 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(), v94, " \t`");
                                        if (!v19)
                                            v97 = " \t`";
                                        else
                                            v97 = v19;
                                        v14 = v97;
                                        v7 = " \t`";
                                        v98 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(), v94, " \t`");
                                        v99 = v98;
                                        if (!v98)
                                        {
                                            v100 = _objc_msgSend(g_4c40a8, SEL_numberWithInt_, 0);
                                            v98 = _objc_retainAutoreleasedReturnValue(v100, SEL_numberWithInt_, 0);
                                        }
                                        v29 = v98;
                                        v15 = v98;
                                        v8 = " \t`";
                                        v101 = _objc_msgSend(g_4c41d0, SEL_date);
                                        v102 = _objc_retainAutoreleasedReturnValue(v101, SEL_date);
                                        _objc_msgSend(v102, SEL_timeIntervalSince1970);
                                        v103 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                                        v16 = _objc_retainAutoreleasedReturnValue(v103, SEL_numberWithDouble_);
                                        v104 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, &v9, &v1, 8);
                                        len = _objc_retainAutoreleasedReturnValue(v104, SEL_dictionaryWithObjects_forKeys_count_, &v9, &v1, 8);
                                        v106 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v18, len1), v18, len1);
                                        v107 = _objc_msgSend(v106, SEL_stringValue);
                                        v108 = _objc_retainAutoreleasedReturnValue(v107, SEL_stringValue);
                                        _objc_msgSend(len2, SEL_setObject_forKeyedSubscript_, len, v108);
                                        _objc_release(v108);
                                        _objc_release(v106);
                                        _objc_release(len);
                                        _objc_release(v16);
                                        _objc_release(v102);
                                        if (!v99)
                                            _objc_release(v29);
                                        _objc_release(v99);
                                        _objc_release(v19);
                                        _objc_release(v20);
                                        _objc_release(v21);
                                        _objc_msgSend(a0, SEL_saveIndex_, len2);
                                        _objc_release(len2);
                                        v60 = 1;
                                    }
                                    else
                                    {
                                        if (!a7)
                                            goto LABEL_2e71d4;
                                        v60 = 0;
                                        v87 = " \t`";
                                        goto LABEL_2e71cc;
                                    }
                                }
                                else if (a7)
                                {
                                    v60 = 0;
                                    v87 = " \t`";
LABEL_2e71cc:
                                    *((unsigned long long *)a7) = v87;
                                }
                                else
                                {
LABEL_2e71d4:
                                    v60 = 0;
                                }
                                v68 = v32;
                                _objc_release(v22);
                                _objc_release(v24);
                                goto LABEL_2e71f4;
                            }
                            else
                            {
                                v68 = v32;
                            }
                        }
                    }
                    else
                    {
                        _objc_release(v72);
                        v37 = v31;
                        v68 = v32;
                    }
                    v60 = 0;
                    if (a7)
                        *((char **)a7) = " \t`";
LABEL_2e71f4:
                    _objc_release();
                    _objc_release(v26);
                    _objc_release(v27);
                }
                else
                {
                    if (a7)
                    {
                        v60 = 0;
                        *((unsigned long long *)a7) = _objc_retainAutorelease();
                    }
                    else
                    {
                        v60 = 0;
                    }
                    v37 = v31;
                }
                _objc_release(v67);
                _objc_release(v68);
            }
            _objc_release();
        }
    }
    else
    {
LABEL_2e69f8:
        v60 = 0;
        if (a7)
            *((char **)a7) = " \t`";
    }
    _objc_release(v36);
    _objc_release(v37);
    _objc_release(a3);
    _objc_release(a2);
    if (*((long long *)&g_600760) == v33)
        return v60;
    ___stack_chk_fail();
}
