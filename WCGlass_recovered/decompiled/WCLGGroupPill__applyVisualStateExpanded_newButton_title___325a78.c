/* Recovered pseudocode
 * Objective-C: -[WCLGGroupPill applyVisualStateExpanded:newButton:title:]
 * Address: 0x325a78; original size: 6792 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 7.498s
 */

void sub_325a78(long long a0, unsigned long a1, long long a2, long long a3, long long a4)
{
    long long v83;  // x28
    long long v84;  // w22
    unsigned int v93;  // w0
    long long count;  // x0
    long long count1;  // x0
    long long v96;  // x0
    long long count2;  // x0
    long long v98;  // x0
    long long v99;  // x0
    long long len;  // x24
    long long v101;  // x0
    long long v102;  // x0
    long long v85;  // w21
    long long v103;  // x0
    long long len1;  // x25
    long long v105;  // x0
    long long v106;  // x0
    long long v107;  // x0
    long long v108;  // x0
    long long v109;  // x0
    unsigned long long v110[2];  // x3
    long long v111[2];  // x2
    long long v112;  // x0
    long long v86;  // x27
    long long v113;  // x28
    long long v114;  // x26
    unsigned long v115;  // 4139
    long long v116;  // x9
    unsigned long v117;  // 4108
    unsigned int v118;  // w8
    long long v119;  // x0
    long long v120;  // x0
    long long v121;  // x0
    long long v122;  // x0
    unsigned long v87;  // cc_dep1
    unsigned int v123;  // w23
    long long v124;  // x0
    long long v125;  // x2
    long long v126;  // x0
    unsigned long v127;  // 4108
    long long v128;  // x0
    long long v129;  // x0
    long long v130;  // x3
    long long v131;  // x0
    long long v132;  // x0
    unsigned int v88;  // w8
    long long v133;  // x0
    long long len2;  // x27
    long long v135;  // x0
    long long v136;  // x0
    long long v137;  // x24
    long long v138;  // x0
    long long v139;  // x3
    long long v140;  // x2
    long long v141;  // x0
    long long v142;  // x0
    unsigned int v89;  // w9
    long long v143;  // x0
    unsigned long v144;  // 4108
    long long v90;  // x8
    long long v91;  // x1
    long long v92;  // x0
    char v0;  // [bp-0x330]
    unsigned int v1;  // [bp-0x304]
    char *v2;  // [bp-0x2f8]
    unsigned int i;  // [bp-0x2f0]
    long long v4;  // [bp-0x2e9]
    unsigned long long v5;  // [bp-0x2e8]
    long long v6;  // [bp-0x2d9]
    long long *v7;  // [bp-0x2d8]
    long long v8;  // [bp-0x2d0]
    long long v9;  // [bp-0x2c1]
    long long v10;  // [bp-0x2c0]
    long long v11;  // [bp-0x2b8]
    unsigned long long v12;  // [bp-0x2b0]
    unsigned long long v13;  // [bp-0x2a8]
    long long v14;  // [bp-0x29a]
    long long v15;  // [bp-0x299]
    long long *v16;  // [bp-0x298]
    long long v17;  // [bp-0x290]
    long long v18;  // [bp-0x288]
    long long v19;  // [bp-0x280]
    long long v20;  // [bp-0x278]
    long long v21;  // [bp-0x270]
    long long v22;  // [bp-0x268]
    long long v23;  // [bp-0x260]
    long long v24;  // [bp-0x258]
    long long v25;  // [bp-0x250]
    long long v26;  // [bp-0x248]
    long long v27;  // [bp-0x240]
    long long v28;  // [bp-0x238]
    long long v29;  // [bp-0x230]
    long long v30;  // [bp-0x228]
    long long v31;  // [bp-0x220]
    long long v32;  // [bp-0x218]
    long long v33;  // [bp-0x210]
    long long v34;  // [bp-0x208]
    long long v35;  // [bp-0x200]
    long long v36;  // [bp-0x1f8]
    long long v37;  // [bp-0x1f0]
    long long v38;  // [bp-0x1e8]
    long long v39;  // [bp-0x1e0]
    long long v40;  // [bp-0x1d8]
    long long v41;  // [bp-0x1d0]
    long long v42;  // [bp-0x1c8]
    long long v43;  // [bp-0x1c0]
    long long v44;  // [bp-0x1b8]
    long long v45;  // [bp-0x1b0]
    long long v46;  // [bp-0x1a8]
    long long v47;  // [bp-0x1a0]
    long long v48;  // [bp-0x198]
    unsigned long long v49;  // [bp-0x190]
    long long v50;  // [bp-0x188]
    long long v51;  // [bp-0x180]
    long long v52;  // [bp-0x178]
    char v53;  // [bp-0x16b]
    long long v54;  // [bp-0x16a]
    long long v55;  // [bp-0x169]
    long long v56;  // [bp-0x168]
    long long v57;  // [bp-0x160]
    long long v58;  // [bp-0x152]
    char v59;  // [bp-0x151]
    long long v60;  // [bp-0x150]
    long long v61;  // [bp-0x148]
    long long v62;  // [bp-0x140]
    long long v63;  // [bp-0x138]
    long long v64;  // [bp-0x130]
    unsigned long long v65[2];  // [bp-0x128]
    long long v66[2];  // [bp-0x120]
    char v67;  // [bp-0x116]
    char v68;  // [bp-0x115]
    long long v69;  // [bp-0x114]
    long long v70;  // [bp-0x110]
    unsigned long long v71;  // [bp-0x108]
    long long v72;  // [bp-0x100]
    unsigned long long v73;  // [bp-0xf8]
    char v74;  // [bp-0xf0]
    long long v75;  // [bp-0xe0]
    unsigned long long v76;  // [bp-0xd8]
    long long v77;  // [bp-0xd0]
    unsigned long long v78;  // [bp-0xc8]
    long long v79;  // [bp-0xc0]
    unsigned long v80;  // [bp-0xb0]
    char *v81;  // [bp-0x10]
    char v82;  // [bp+0x0]

    v81 = &v82;
    /* unsupported instruction */ = (int)(&v0 + 32);
    v83 = a4;
    v84 = a3;
    v85 = a2;
    v86 = a0;
    v80 = *((long long *)&g_600760);
    /* unsupported instruction */
    v69 = g_580e34;
    i = 4170761817;
    v2 = &i;
    while (i <= 4175473871)
    {
        if (i <= 3410203179)
        {
            if (i > 2807369762)
            {
                if (3152328609 >= i)
                {
                    if (i > 2945265837)
                    {
                        if (i == 2945265838)
                        {
                            v135 = _objc_msgSend(v33, SEL_labelColor);
                            v32 = _objc_retainAutoreleasedReturnValue(v135, SEL_labelColor);
                            i = 3682395831;
                            continue;
                        }
                        else if (i == 3010039184)
                        {
                            _objc_retain(v46);
                            i = 2554621700;
                            continue;
                        }
                        else if (i == 3120254726)
                        {
                            /* unsupported instruction */
                            g_580e34 = 1;
                            v66 = /* unsupported instruction */ - 16;
                            v65 = v66 + 1;
                            _objc_retain(v83);
                            v64 = (!v83 ? " \t`" : v83);
                            i = 0xe77fa275;
                            continue;
                        }
                    }
                    else
                    {
                        if (i != 2807369763)
                        {
                            if (i != 2873114461)
                                continue;
                            v87 = v6;
                            v88 = 3889592217;
                            v89 = 3555782177;
                            goto LABEL_327004;
                        }
                        else
                        {
                            v136 = _objc_retainAutoreleasedReturnValue(sub_327500());
                            v34 = SEL_setTitle_forState_;
                            v35 = v136;
                            i = 3287998280;
                            continue;
                        }
                    }
                }
                else
                {
                    if (i > 3225912688)
                    {
                        if (i == 3225912689)
                        {
                            v70 = 0;
                            v71 = 0x4032000000000000;
                            v72 = 0;
                            v73 = v5;
                            i = 1494073252;
                            continue;
                        }
                        else if (i == 3253931625)
                        {
                            v49 = (v84 ? 0x4018000000000000 : (v54 ? 0x4010000000000000 : 0x4020000000000000));
                            i = 884235053;
                            continue;
                        }
                        else if (i == 3287998280)
                        {
                            _objc_msgSend(v86, v34, v64, 0);
                            i = 0xff1e4fc0;
                            continue;
                        }
                    }
                    else
                    {
                        if (i == 3152328610)
                        {
                            i = 1617328907;
                            v7 = v16;
                            continue;
                        }
                        else if (i == 3189567304)
                        {
                            v137 = (v84 ? " \t`" : v20);
                            _objc_retain(v137);
                            v138 = _objc_msgSend(g_4c4210, SEL_configurationWithPointSize_weight_, 6);
                            v139 = _objc_retainAutoreleasedReturnValue(v138, SEL_configurationWithPointSize_weight_, 6);
                            v19 = v139;
                            v140 = v137;
                            v141 = _objc_msgSend(g_4c4080, SEL_systemImageNamed_withConfiguration_, v140, v139);
                            v18 = _objc_retainAutoreleasedReturnValue(v141, SEL_systemImageNamed_withConfiguration_, v140, v139);
                            _objc_release(v137);
                            v142 = _objc_msgSend(v18, SEL_imageWithRenderingMode_, 2);
                            v17 = _objc_retainAutoreleasedReturnValue(v142, SEL_imageWithRenderingMode_, 2);
                            i = 3509951893;
                            continue;
                        }
                    }
                }
            }
            else
            {
                if (i > 2554621699)
                {
                    if (i > 2640099651)
                    {
                        if (i == 2640099652)
                        {
                            v59 = (char)v84 ^ 1;
                            i = 1446874152;
                            continue;
                        }
                        else if (i == 2733734669)
                        {
                            g_549433 = v67;
                            g_549434 = g_549427 ^ 37;
                            g_549435 = g_549428 ^ 120;
                            g_549436 = g_549429 ^ 90;
                            g_549437 = g_54942a ^ 127;
                            g_549438 = g_54942b ^ 197;
                            g_549439 = g_54942c ^ 70;
                            g_54943a = g_54942d ^ 88;
                            i = 3917819782;
                            continue;
                        }
                        else if (i == 2778068427)
                        {
                            v42 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v44, v43), v43);
                            v143 = _objc_msgSend(g_4c4090, SEL_tertiaryLabelColor);
                            v41 = _objc_retainAutoreleasedReturnValue(v143, SEL_tertiaryLabelColor);
                            i = 140183647;
                            continue;
                        }
                    }
                    else
                    {
                        if (i == 2554621700)
                        {
                            i = 3990155990;
                            v11 = v46;
                            v12 = 0x4029000000000000;
                            continue;
                        }
                        else if (i == 2606831094)
                        {
                            v36 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v38), v38);
                            i = 1787623053;
                            continue;
                        }
                    }
                }
                else
                {
                    if (2501587885 >= i)
                    {
                        if (i == 2357391444)
                        {
                            v28 = g_4c4218;
                            i = 3455254846;
                            continue;
                        }
                        else if (i == 2401255653)
                        {
                            v50 = SEL_setContentInsets_;
                            i = 3225912689;
                            continue;
                        }
                    }
                    else
                    {
                        if (i == 2501587886)
                        {
                            v87 = v6;
                            v88 = 2058290236;
                            v89 = 1978538907;
                            goto LABEL_327004;
                        }
                        else if (i == 2519546332)
                        {
                            _objc_msgSend(v86, v31, v35, 0);
                            i = 560826392;
                            continue;
                        }
                    }
                }
            }
        }
        if (3755496875 < i)
        {
            if (3943318619 >= i)
            {
                if (i > 3889592216)
                {
                    if (i == 3889592217)
                    {
                        v33 = g_4c4090;
                        i = 2945265838;
                        continue;
                    }
                    else if (i != 3917819782)
                    {
                        if (i != 3917951939)
                            continue;
                        v6 = v15;
                        _objc_release(v61);
                        v118 = (!sub_45e7d8(2, 15, 0, 0) ? 2807369763 : 3755496876);
                        goto LABEL_3270b8;
                    }
                    else
                    {
                        g_54943b = g_54942e ^ 219;
                        g_54943c = g_54942f ^ 106;
                        g_54943d = g_549430 ^ 2;
                        g_54943e = g_549431 ^ 229;
                        g_54943f = g_549432 ^ 55;
                        g_549421 = g_54941c ^ 33;
                        g_549422 = g_54941d ^ 149;
                        g_549423 = g_54941e ^ 35;
                        g_549424 = g_54941f ^ 80;
                        g_549425 = g_549420 ^ 38;
                        g_54940e = g_549400 ^ 0x99;
                        g_54940f = g_549401 ^ 20;
                        g_549410 = g_549402 ^ 228;
                        g_549411 = g_549403 ^ 172;
                        g_549412 = g_549404 ^ 162;
                        g_549413 = g_549405 ^ 57;
                        g_549414 = g_549406 ^ 232;
                        g_549415 = g_549407 ^ 160;
                        g_549416 = g_549408 ^ 120;
                        g_549417 = g_549409 ^ 49;
                        g_549418 = g_54940a ^ 186;
                        g_549419 = g_54940b ^ 59;
                        g_54941a = g_54940c ^ 3;
                        g_54941b = g_54940d ^ 216;
                        i = 3120254726;
                        continue;
                    }
                }
                else
                {
                    if (i == 3755496876)
                    {
                        i = (v84 ? 891454249 : 3704850555);
                        v14 = 0;
                        v13 = 0x4032000000000000;
                        continue;
                    }
                    else if (i == 0xe77fa275)
                    {
                        _objc_retain(v64);
                        v63 = g_4c4198;
                        i = 1153040881;
                        continue;
                    }
                }
            }
            else
            {
                if (i <= 3996740346)
                {
                    if (i != 3943318620)
                    {
                        if (i != 3990155990)
                            continue;
                        v129 = _objc_msgSend(g_4c4210, SEL_configurationWithPointSize_weight_, 6);
                        v130 = _objc_retainAutoreleasedReturnValue(v129, SEL_configurationWithPointSize_weight_, 6);
                        v131 = _objc_msgSend(g_4c4080, SEL_systemImageNamed_withConfiguration_, v11, v130);
                        v132 = _objc_retainAutoreleasedReturnValue(v131, SEL_systemImageNamed_withConfiguration_, v11, v130);
                        v133 = _objc_msgSend(v132, SEL_imageWithRenderingMode_, 2);
                        len2 = _objc_retainAutoreleasedReturnValue(v133, SEL_imageWithRenderingMode_, 2);
                        _objc_msgSend(v52, SEL_setImage_, len2);
                        v86 = a0;
                        _objc_release(len2);
                        _objc_release(v132);
                        _objc_release(v130);
                        _objc_release(v11);
                    }
                    i = 1620094867;
                    continue;
                }
                else if (i == 3996740347)
                {
                    v128 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v40, v39), v39);
                    i = 1306313004;
                    v90 = v45;
                    v10 = v128;
                }
                else if (i == 4027588142)
                {
                    v39 = SEL_systemBlueColor;
                    i = 3996740347;
                    continue;
                }
                else if (i == 4170761817)
                {
                    v68 = (v69 ? 0 : 1);
                    i = 0xffd99b0c;
                    continue;
                }
            }
LABEL_3270ec:
            v116 = v4;
LABEL_327470:
            v9 = v116;
            v8 = v90;
            continue;
        }
        if (3563742148 >= i)
        {
            if (i > 3509951892)
            {
                if (i == 3509951893)
                {
                    _objc_msgSend(v86, SEL_setImage_forState_, v17, 0);
                    _objc_release(v17);
                    _objc_release(v18);
                    _objc_release(v19);
                    i = (v84 ? 1288502681 : 1617328907);
                    v7 = &SEL_systemBlueColor;
                    continue;
                }
                else if (i == 3540547643)
                {
                    v22 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v23, v62), v62);
                    i = 914469359;
                    continue;
                }
                else if (i == 3555782177)
                {
                    v31 = SEL_setTitleColor_forState_;
                    i = 2519546332;
                    continue;
                }
            }
            else
            {
                if (i == 3410203180)
                {
                    v47 = SEL_setImage_;
                    i = 19497938;
                    continue;
                }
                else if (i == 3455254846)
                {
                    v27 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4198, v62), v62);
                    _objc_msgSend(v27, SEL_stripPillFontSize);
                    v119 = _objc_msgSend(v28, SEL_systemFontOfSize_weight_);
                    v26 = _objc_retainAutoreleasedReturnValue(v119, SEL_systemFontOfSize_weight_);
                    v120 = _objc_msgSend(v86, SEL_titleLabel);
                    v121 = _objc_retainAutoreleasedReturnValue(v120, SEL_titleLabel);
                    v24 = SEL_setFont_;
                    v25 = v121;
                    i = 1748544917;
                    continue;
                }
            }
        }
        if (i <= 3618943544)
        {
            if (i == 3563742149)
            {
                _objc_release(v83);
                i = 1683343041;
                continue;
            }
            else if (i == 3592078093)
            {
                v51 = SEL_setContentInsets_;
                v77 = 0;
                v79 = 0;
                v78 = (v4 ? 0x402c000000000000 : 0x4028000000000000);
                i = 0x7ffc1455;
                continue;
            }
        }
        switch (i)
        {
        case 3618943545:
            _objc_msgSend(v52, v48);
            v127 = arm64g_calculate_condition(19, (unsigned long long)(unsigned long long)v4, 0, 0);
            v118 = ((char)v127 ? 3410203180 : 502306215);
LABEL_3270b8:
            i = v118;
            break;
        default:
            if (i != 3682395831)
            {
                if (i != 3704850555)
                    continue;
                v5 = v13;
                v4 = v14;
                v122 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4198, v62), v62);
                v54 = (char)_objc_msgSend(v122, v60);
                v123 = v84 ^ 1;
                v53 = v54 & (char)v123;
                _objc_release(v122);
                v124 = _objc_msgSend(v86, SEL_class);
                v125 = v123 & v85;
                v126 = _objc_msgSend(v124, SEL_pillConfigurationExpanded_, v125);
                v52 = _objc_retainAutoreleasedReturnValue(v126, SEL_pillConfigurationExpanded_, v125);
                _objc_msgSend(v52, SEL_setImagePlacement_, 2);
                v87 = v53;
                v88 = 2401255653;
                v89 = 3592078093;
            }
            else
            {
                _objc_msgSend(v86, SEL_setTitleColor_forState_, v32, 0);
                v96 = v32;
LABEL_3273fc:
                _objc_release(v96);
LABEL_327400:
                i = 2357391444;
                continue;
            }
LABEL_327004:
            v144 = arm64g_calculate_condition(19, v87, 0, 0);
            v118 = ((char)v144 ? v89 : v88);
            goto LABEL_3270b8;
        }
    }
    if (1147330307 >= i)
    {
        if (502306214 >= i)
        {
            if (140183646 >= i)
            {
                if (i > 0xff1e4fbf)
                {
                    if (i == 0xff1e4fc0)
                    {
                        v87 = v84;
                        v88 = 2873114461;
                        v89 = 281450064;
                        goto LABEL_327004;
                    }
                    else if (i == 0xffd99b0c)
                    {
                        v87 = v68;
                        v88 = 3120254726;
                        v89 = 1692654954;
                        goto LABEL_327004;
                    }
                    else if (i == 19497938)
                    {
                        _objc_msgSend(v52, v47, 0);
                        i = 3943318620;
                    }
                }
                else
                {
                    if (i == 4175473872)
                    {
                        v56 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v62), v62);
                        v55 = (char)_objc_msgSend(v56, SEL_hideGroupArrow);
                        i = 1147330308;
                    }
                    else if (i == 4181220373)
                    {
                        v20 = (v85 ? &g_5494e0 : &g_5494a0);
                        i = 3189567304;
                    }
                }
            }
            else
            {
                if (i > 242561236)
                {
                    if (i == 242561237)
                    {
                        v46 = (v85 ? &g_5494e0 : &g_5494a0);
                        i = 3010039184;
                    }
                    else if (i == 281450064)
                    {
                        v30 = g_4c4090;
                        i = 782548005;
                    }
                    else if (i == 360956448)
                    {
                        _objc_release(v64);
                        i = 3563742149;
                    }
                }
                else
                {
                    if (i == 140183647)
                    {
                        i = 1306313004;
                        v90 = v42;
                        v10 = v41;
                        goto LABEL_3270ec;
                    }
                    else if (i == 232446812)
                    {
                        v23 = g_4c4198;
                        i = 3540547643;
                    }
                }
            }
        }
        if (782548004 >= i)
        {
            if (i <= 560826391)
            {
                if (i != 502306215)
                {
                    if (i == 516668350)
                    {
                        i = 3917951939;
                        v15 = v58;
                    }
                }
                else
                {
                    i = (v84 ? 242561237 : 3990155990);
                    v11 = " \t`";
                    v12 = 0x402e000000000000;
                }
            }
            if (i == 560826392)
                goto LABEL_327400;
            if (i != 573880951)
            {
                if (i != 715006786)
                    continue;
                v91 = v51;
                v92 = v52;
            }
            else
            {
                _objc_msgSend(v86, v21, 0, 0);
                i = 1283221629;
                continue;
            }
        }
        else if (i > 891454248)
        {
            if (i == 891454249)
            {
                v57 = g_4c4198;
                i = 4175473872;
                continue;
            }
            else if (i != 914469359)
            {
                if (i != 936104972)
                    continue;
                v87 = v84;
                v88 = 2501587886;
                v89 = 1184488129;
                goto LABEL_327004;
            }
            else
            {
                v93 = _objc_msgSend(v22, SEL_hideGroupArrow);
                _objc_release(v22);
                v87 = v93;
                v88 = 4181220373;
                v89 = 2031351018;
                goto LABEL_327004;
            }
        }
        else
        {
            if (i == 782548005)
            {
                count = _objc_msgSend(v30, SEL_systemBlueColor);
                v29 = _objc_retainAutoreleasedReturnValue(count, SEL_systemBlueColor);
                i = 1175619238;
            }
            else if (i == 884235053)
            {
                v48 = SEL_setImagePadding_;
                i = 3618943545;
            }
        }
    }
    else
    {
        if (1620094866 < i)
        {
            if (i > 1787623052)
            {
                if (i > 2031351017)
                {
                    if (i == 2031351018)
                    {
                        v21 = SEL_setImage_forState_;
                        i = 573880951;
                    }
                    else if (i == 2058290236)
                    {
                        v43 = SEL_labelColor;
                        v44 = g_4c4090;
                        i = 2778068427;
                    }
                    else if (i == 0x7ffc1455)
                    {
                        memcpy(&v74, &v77, 16);
                        v75 = v79;
                        v76 = 0x402c000000000000;
                        i = 715006786;
                    }
                }
                else
                {
                    if (i == 1787623053)
                    {
                        i = 1306313004;
                        v90 = v37;
                        v10 = v36;
                        v116 = 1;
                        goto LABEL_327470;
                    }
                    else if (i == 1978538907)
                    {
                        _objc_retain(v45);
                        v40 = g_4c4090;
                        i = 4027588142;
                    }
                }
            }
            else
            {
                if (i > 1683343040)
                {
                    if (i == 1692654954)
                    {
                        v67 = g_549426 ^ 15;
                        i = 2733734669;
                        continue;
                    }
                    else if (i == 1748544917)
                    {
                        _objc_msgSend(v25, v24, v26);
                        _objc_release(v25);
                        _objc_release(v26);
                        _objc_release(v27);
                        v117 = arm64g_calculate_condition(19, (unsigned long long)(unsigned long long)v84, 0, 0);
                        v118 = ((char)v117 ? 4181220373 : 232446812);
                        goto LABEL_3270b8;
                    }
                    else if (i == 1683343041)
                    {
                        goto LABEL_3274b4;
                    }
                }
                else
                {
                    if (i == 1620094867)
                    {
                        v45 = _objc_retainAutoreleasedReturnValue(sub_327500());
                        i = 1625872559;
                    }
                    else if (i == 1625872559)
                    {
                        i = 936104972;
                    }
                }
            }
        }
        if (1288502680 >= i)
        {
            if (i > 1175619237)
            {
                if (i == 1175619238)
                {
                    _objc_msgSend(v86, SEL_setTitleColor_forState_, v29, 0);
                    v96 = v29;
                    goto LABEL_3273fc;
                }
                else if (i == 1184488129)
                {
                    v38 = SEL_systemBlueColor;
                    count1 = _objc_msgSend(g_4c4090, SEL_systemBlueColor);
                    v37 = _objc_retainAutoreleasedReturnValue(count1, SEL_systemBlueColor);
                    i = 2606831094;
                }
                else if (i == 1283221629)
                {
                    i = 1288502681;
                }
            }
            else
            {
                if (i == 1147330308)
                {
                    _objc_release(v56);
                    i = 3704850555;
                    v14 = v55;
                    v13 = (v14 ? 0x4032000000000000 : 0x404b000000000000);
                }
                else if (i == 1153040881)
                {
                    v62 = SEL_sharedManager;
                    count2 = _objc_msgSend(v63, SEL_sharedManager);
                    v98 = _objc_retainAutoreleasedReturnValue(count2, SEL_sharedManager);
                    v60 = SEL_tgMode;
                    v61 = v98;
                    i = (_objc_msgSend(v61, SEL_tgMode) ? 2640099652 : 3917951939);
                    v15 = 0;
                }
            }
        }
        if (i > 1446874151)
        {
            if (i == 1446874152)
            {
                v58 = v59 & (char)v85;
                i = 516668350;
                continue;
            }
            if (i != 1494073252)
            {
                if (i != 1617328907)
                    continue;
                v99 = _objc_msgSend(g_4c4090, *(v7));
                len = _objc_retainAutoreleasedReturnValue(v99, *(v7));
                _objc_msgSend(v86, SEL_setTintColor_, len);
                _objc_release(len);
                v101 = _objc_msgSend(g_4c4090, SEL_secondarySystemFillColor);
                v102 = _objc_retainAutoreleasedReturnValue(v101, SEL_secondarySystemFillColor);
                v103 = _objc_msgSend(v102, SEL_colorWithAlphaComponent_);
                len1 = _objc_retainAutoreleasedReturnValue(v103, SEL_colorWithAlphaComponent_);
                _objc_msgSend(v86, SEL_setBackgroundColor_, len1);
                _objc_release(len1);
                _objc_release(v102);
                v105 = v35;
                goto LABEL_326908;
            }
            else
            {
                v92 = v52;
                v91 = v50;
            }
        }
        else
        {
            if (i != 1288502681)
            {
                if (i != 1306313004)
                    continue;
                v1 = v9;
                _objc_msgSend(v52, SEL_setBaseForegroundColor_, v10);
                _objc_release(v10);
                v106 = _objc_alloc(g_4c40f0);
                v65[0] = *((long long *)&g_600308);
                v107 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4198, v62), v62);
                _objc_msgSend(v107, SEL_stripPillFontSize);
                v108 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
                v109 = _objc_retainAutoreleasedReturnValue(v108, SEL_systemFontOfSize_weight_);
                v110 = v65;
                v111 = v66;
                v111[0] = v109;
                v110[1] = *((long long *)&g_600310);
                v111[1] = v8;
                v112 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v111, v110, 2);
                v113 = _objc_retainAutoreleasedReturnValue(v112, SEL_dictionaryWithObjects_forKeys_count_, v111, v110, 2);
                v114 = _objc_msgSend(v106, SEL_initWithString_attributes_, v64, v113);
                _objc_msgSend(v52, SEL_setAttributedTitle_, v114);
                _objc_release(v114);
                _objc_release(v113);
                v86 = a0;
                _objc_release(v109);
                _objc_release(v107);
                _objc_msgSend(v52, SEL_setTitleLineBreakMode_, 4);
                _objc_msgSend(v86, SEL_setConfiguration_, v52);
                v115 = arm64g_calculate_condition(25, (unsigned long long)((v1 | (unsigned int)v53) & 1), 0, 0);
                _objc_msgSend(v86, SEL_setContentHorizontalAlignment_, ((char)v115 ? 0 : 4));
                _objc_release(v8);
                _objc_release(v45);
                v105 = v52;
            }
            else
            {
                v16 = (v6 ? &SEL_systemBlueColor : &SEL_tertiaryLabelColor);
                i = 3152328610;
                continue;
            }
LABEL_326908:
            _objc_release(v105);
            i = 360956448;
            continue;
        }
    }
    _objc_msgSend(v92, v91);
    i = 3253931625;
    continue;
LABEL_3274b4:
    if (*((long long *)&g_600760) == v80)
        return;
    ___stack_chk_fail();
}
