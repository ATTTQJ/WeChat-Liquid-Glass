/* Recovered pseudocode
 * Objective-C: -[WCLGThemeDetailViewController buildContent]
 * Address: 0x447c98; original size: 7768 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 7.971s
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

unsigned long long sub_447c98(long long a0)
{
    long long v57;  // x26
    long long count;  // x0
    long long v67;  // x0
    long long v157;  // x0
    long long len;  // x20
    long long v159;  // x0
    long long count1;  // x24
    long long v161;  // x0
    long long count2;  // x0
    long long v163;  // x0
    unsigned long long v164;  // x0
    long long v165;  // x19
    long long len1;  // x21
    long long v68;  // x0
    long long len2;  // x21
    long long v168;  // x0
    long long v169;  // x21
    long long v170;  // x22
    long long v171;  // x22
    long long v172;  // x0
    long long v173;  // x20
    long long v174;  // x0
    long long v175;  // x19
    long long v176;  // x20
    long long v69;  // x0
    long long v177;  // x20
    long long v178;  // x0
    long long v179;  // x20
    long long v180;  // x21
    long long v181;  // x0
    long long v182;  // x21
    long long v183;  // x0
    long long v184;  // x0
    unsigned long long v185;  // x0
    long long v186;  // x0
    long long v70;  // x0
    long long v187;  // x23
    long long v188;  // x0
    long long v189;  // x0
    long long v190;  // x0
    long long v191;  // x22
    long long v192;  // x21
    long long v193;  // x0
    long long v194;  // x22
    long long v195;  // x0
    long long v196;  // x22
    long long v71;  // x0
    long long v197;  // x23
    long long v198;  // x23
    long long v199;  // x0
    long long v200;  // x23
    long long v201;  // x0
    unsigned long long v202;  // x8
    long long v203;  // x0
    long long v204;  // x25
    long long v205;  // x0
    long long v206;  // x0
    long long v72;  // x0
    unsigned long long v207;  // x0
    long long v208;  // x0
    long long v73;  // x0
    long long v74;  // x0
    long long v75;  // x0
    long long v76;  // x0
    long long v59;  // x0
    long long v77;  // x19
    long long v78;  // x0
    long long v79;  // x20
    long long v80;  // x0
    long long v81;  // x21
    long long v82;  // x0
    long long v83;  // x0
    long long v84;  // x0
    long long v85;  // x21
    long long v86;  // x0
    long long v60;  // x0
    long long v87;  // x19
    long long v88;  // x0
    long long v89;  // x19
    long long v90;  // x0
    long long v91;  // x19
    unsigned long v92;  // 4130
    long long v93;  // x0
    long long v94;  // x0
    long long v95;  // x0
    long long v96;  // x0
    long long v61;  // x28
    long long v97;  // x21
    long long v98;  // x0
    long long v99;  // x20
    long long v100;  // x0
    long long v101;  // x20
    long long v102;  // x20
    long long v103;  // x0
    long long v104;  // x0
    unsigned long long v105;  // x0
    long long v106;  // x0
    long long v62;  // x0
    long long v107;  // x22
    unsigned long v108;  // x25
    long long v109;  // x0
    unsigned long v110;  // 4130
    unsigned long v111;  // x28
    long long v112;  // x0
    long long v113;  // x21
    long long v114;  // x0
    long long v115;  // x19
    long long v116;  // x0
    long long v63;  // x22
    long long v117;  // x20
    long long v118;  // x0
    long long v119;  // x21
    long long v120;  // x0
    long long v121;  // x22
    long long v122;  // x0
    long long v123;  // x0
    struct_0 *v124;  // x24
    long long v125;  // x21
    long long v126;  // x0
    long long v64;  // x0
    long long v127;  // x19
    long long v128;  // x19
    long long v129;  // x21
    long long v130;  // x0
    long long v131;  // x0
    long long v132;  // x21
    long long v133;  // x0
    long long v134;  // x0
    long long v135;  // x0
    long long v136;  // x0
    long long v65;  // x0
    long long v137;  // x21
    long long v138;  // x0
    long long v139;  // x19
    long long v140;  // x21
    unsigned long v141;  // x19
    long long v142;  // x0
    long long v143;  // x0
    unsigned long long v144;  // x0
    long long v145;  // x0
    unsigned long long v146;  // x0
    long long v66;  // x0
    long long v147;  // x20
    long long v148;  // x19
    unsigned long long i;  // x0
    unsigned long long v150;  // x19
    long long v151;  // x22
    long long v152;  // x0
    long long v153;  // x0
    long long v154;  // x0
    long long v155;  // x0
    long long v156;  // x0
    long long v0;  // [bp-0x320]
    unsigned long long v1;  // [bp-0x318]
    char v2;  // [bp-0x310]
    char v3;  // [bp-0x290]
    unsigned long v4;  // [bp-0x280]
    char v5;  // [bp-0x250], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x248]
    unsigned long v7;  // [bp-0x240]
    unsigned long v8;  // [bp-0x238]
    char v9;  // [bp-0x220]
    unsigned long v10;  // [bp-0x210]
    unsigned long v11;  // [bp-0x208]
    unsigned long v12;  // [bp-0x200]
    unsigned long v13;  // [bp-0x1f8]
    long long v14;  // [bp-0x1f0]
    long long v15;  // [bp-0x1e8]
    unsigned long v16;  // [bp-0x1e0]
    unsigned long v17;  // [bp-0x1d8]
    unsigned long v18;  // [bp-0x1d0]
    unsigned long v19;  // [bp-0x1c8]
    unsigned long v20;  // [bp-0x1c0]
    unsigned long v21;  // [bp-0x1b8]
    long long v22;  // [bp-0x1b0]
    char *idx;  // [bp-0x1a8]
    char *v24;  // [bp-0x1a0]
    unsigned long v25;  // [bp-0x198]
    unsigned long v26;  // [bp-0x190]
    unsigned long v27;  // [bp-0x188]
    unsigned long v28;  // [bp-0x180]
    unsigned long v29;  // [bp-0x178]
    unsigned long v30;  // [bp-0x170]
    unsigned long v31;  // [bp-0x168]
    long long v32;  // [bp-0x160]
    char *v33;  // [bp-0x158]
    long long v34;  // [bp-0x150]
    unsigned long v35;  // [bp-0x148]
    unsigned long v36;  // [bp-0x140]
    unsigned long v37;  // [bp-0x138]
    unsigned long v38;  // [bp-0x130]
    unsigned long v39;  // [bp-0x128]
    unsigned long v40;  // [bp-0x120]
    unsigned long v41;  // [bp-0x118]
    unsigned long v42;  // [bp-0x110]
    unsigned long v43;  // [bp-0x108]
    long long v44;  // [bp-0x100]
    long long v45;  // [bp-0xf8]
    unsigned long v46;  // [bp-0xf0]
    struct_0 *v47;  // [bp-0xe8]
    unsigned long v48;  // [bp-0xe0]
    unsigned long v49;  // [bp-0xd8]
    unsigned long v50;  // [bp-0xd0]
    unsigned long v51;  // [bp-0xc8]
    unsigned long v52;  // [bp-0xc0]
    unsigned long v53;  // [bp-0xb8]
    unsigned long v54;  // [bp-0xb0]
    char *v55;  // [bp-0x10]
    char v56;  // [bp+0x0]

    v55 = &v56;
    v57 = a0;
    v54 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_582b04)
    {
        *((unsigned short *)&g_5778f6) = g_5778ec ^ 54208;
        *((unsigned short *)&g_5778f8) = g_5778ee ^ 9061;
        *((unsigned short *)&g_5778fa) = g_5778f0 ^ 49261;
        *((unsigned short *)&g_5778fc) = g_5778f2 ^ 8921;
        *((unsigned short *)&g_5778fe) = g_5778f4 ^ 4482;
        g_5778e7 = g_5778e2 ^ 214;
        g_5778e8 = g_5778e3 ^ 27;
        g_5778e9 = g_5778e4 ^ 150;
        g_5778ea = g_5778e5 ^ 117;
        g_5778eb = g_5778e6 ^ 50;
        *((unsigned short *)&g_5778d8) = g_5778ce ^ 8485;
        *((unsigned short *)&g_5778da) = g_5778d0 ^ 3177;
        *((unsigned short *)&g_5778dc) = g_5778d2 ^ 43788;
        *((unsigned short *)&g_5778de) = g_5778d4 ^ 41231;
        *((unsigned short *)&g_5778e0) = g_5778d6 ^ 64500;
        *((unsigned short *)&g_5778c8) = g_5778c2 ^ 12130;
        *((unsigned short *)&g_5778ca) = g_5778c4 ^ 47952;
        *((unsigned short *)&g_5778cc) = g_5778c6 ^ 17880;
        g_5778b4 = g_5778a6 ^ 215;
        g_5778b5 = g_5778a7 ^ 30;
        g_5778b6 = g_5778a8 ^ 110;
        g_5778b7 = g_5778a9 ^ 223;
        g_5778b8 = g_5778aa ^ 37;
        g_5778b9 = g_5778ab ^ 156;
        g_5778ba = g_5778ac ^ 232;
        g_5778bb = g_5778ad ^ 129;
        g_5778bc = g_5778ae ^ 157;
        g_5778bd = g_5778af ^ 14;
        g_5778be = g_5778b0 ^ 48;
        g_5778bf = g_5778b1 ^ 135;
        g_5778c0 = g_5778b2 ^ 197;
        g_5778c1 = g_5778b3 ^ 60;
        g_577907 = g_577900 ^ 70;
        g_577908 = g_577901 ^ 60;
        g_577909 = g_577902 ^ 99;
        g_57790a = g_577903 ^ 125;
        g_57790b = g_577904 ^ 113;
        g_57790c = g_577905 ^ 113;
        g_57790d = g_577906 ^ 26;
        *((unsigned short *)&g_5778a0) = g_57789a ^ 64956;
        *((unsigned short *)&g_5778a2) = g_57789c ^ 48330;
        *((unsigned short *)&g_5778a4) = g_57789e ^ 64177;
        *((unsigned short *)&g_577890) = g_577886 ^ 2966;
        *((unsigned short *)&g_577892) = g_577888 ^ 42289;
        *((unsigned short *)&g_577894) = g_57788a ^ 50181;
        *((unsigned short *)&g_577896) = g_57788c ^ 1071;
        *((unsigned short *)&g_577898) = g_57788e ^ 38284;
        *((unsigned short *)&g_577870) = g_577850 ^ 4871;
        *((unsigned short *)&g_577872) = g_577852 ^ 40099;
        *((unsigned short *)&g_577874) = g_577854 ^ 55881;
        *((unsigned short *)&g_577876) = g_577856 ^ 40967;
        *((unsigned short *)&g_577878) = g_577858 ^ 45700;
        *((unsigned short *)&g_57787a) = g_57785a ^ 33107;
        *((unsigned short *)&g_57787c) = g_57785c ^ 54867;
        *((unsigned short *)&g_57787e) = g_57785e ^ 53673;
        *((unsigned short *)&g_577880) = g_577860 ^ 36154;
        *((unsigned short *)&g_577882) = g_577862 ^ 4240;
        *((unsigned short *)&g_577884) = g_577864 ^ 36044;
    }
    /* unsupported instruction */
    g_582b04 = 1;
    v24 = &v9;
    idx = &v5;
    v47 = &v3;
    v33 = &v2;
    count = _objc_msgSend(v57, SEL_view);
    v59 = _objc_retainAutoreleasedReturnValue(count, SEL_view);
    _objc_msgSend(v59, SEL_bounds);
    _objc_release(v59);
    v60 = _objc_msgSend(v57, SEL_theme);
    v61 = _objc_retainAutoreleasedReturnValue(v60, SEL_theme);
    v62 = _objc_alloc(g_4c4088);
    v48 = SEL_initWithFrame_;
    v63 = _objc_msgSend(v62, SEL_initWithFrame_);
    v43 = SEL_setContentMode_;
    _objc_msgSend(v63, SEL_setContentMode_, 2);
    v46 = SEL_setClipsToBounds_;
    _objc_msgSend(v63, SEL_setClipsToBounds_, 1);
    v64 = _objc_msgSend(v63, SEL_layer);
    v65 = _objc_retainAutoreleasedReturnValue(v64, SEL_layer);
    v42 = SEL_setCornerRadius_;
    _objc_msgSend(v65, SEL_setCornerRadius_);
    _objc_release(v65);
    v66 = _objc_msgSend(v63, SEL_layer);
    v67 = _objc_retainAutoreleasedReturnValue(v66, SEL_layer);
    v40 = SEL_setCornerCurve_;
    v41 = *((long long *)&g_600628);
    _objc_msgSend(v67, SEL_setCornerCurve_, *((long long *)&g_600628));
    _objc_release(v67);
    v68 = _objc_msgSend(v63, SEL_layer);
    v69 = _objc_retainAutoreleasedReturnValue(v68, SEL_layer);
    v39 = SEL_setBorderWidth_;
    _objc_msgSend(v69, SEL_setBorderWidth_);
    _objc_release(v69);
    v70 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
    v71 = _objc_retainAutoreleasedReturnValue(v70, SEL_colorWithWhite_alpha_);
    v72 = _objc_retainAutorelease(v71);
    v38 = SEL_CGColor;
    v73 = _objc_msgSend(v72, SEL_CGColor);
    v53 = SEL_layer;
    v74 = _objc_msgSend(v63, SEL_layer);
    v75 = _objc_retainAutoreleasedReturnValue(v74, SEL_layer);
    v37 = SEL_setBorderColor_;
    _objc_msgSend(v75, SEL_setBorderColor_, v73);
    _objc_release(v75);
    _objc_release(v71);
    v52 = SEL_colorWithWhite_alpha_;
    v76 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
    v77 = _objc_retainAutoreleasedReturnValue(v76, SEL_colorWithWhite_alpha_);
    v36 = SEL_setBackgroundColor_;
    _objc_msgSend(v63, SEL_setBackgroundColor_, v77);
    _objc_release(v77);
    v78 = _objc_msgSend(v61, SEL_iconURL);
    v79 = _objc_retainAutoreleasedReturnValue(v78, SEL_iconURL);
    v18 = SEL_type;
    v80 = _objc_msgSend(v61, SEL_type);
    v81 = _objc_retainAutoreleasedReturnValue(v80, SEL_type);
    _objc_msgSend(g_4c4480, SEL_loadImage_themeType_into_, v79, v81, v63);
    _objc_release(v81);
    _objc_release(v79);
    v82 = _objc_msgSend(v57, SEL_scroll);
    v83 = _objc_retainAutoreleasedReturnValue(v82, SEL_scroll);
    v15 = v63;
    _objc_msgSend(v83, SEL_addSubview_, v63);
    _objc_release(v83);
    v84 = _objc_alloc(g_4c4158);
    v85 = _objc_msgSend(v84, SEL_initWithFrame_);
    v20 = SEL_systemFontOfSize_weight_;
    v86 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    v87 = _objc_retainAutoreleasedReturnValue(v86, SEL_systemFontOfSize_weight_);
    _objc_msgSend(v85, SEL_setFont_, v87);
    _objc_release(v87);
    v16 = SEL_labelColor;
    v88 = _objc_msgSend(g_4c4090, SEL_labelColor);
    v89 = _objc_retainAutoreleasedReturnValue(v88, SEL_labelColor);
    _objc_msgSend(v85, SEL_setTextColor_, v89);
    _objc_release(v89);
    _objc_msgSend(v85, SEL_setNumberOfLines_, 2);
    v90 = _objc_msgSend(v61, SEL_name);
    v91 = _objc_retainAutoreleasedReturnValue(v90, SEL_name);
    _objc_msgSend(v85, SEL_setText_, v91);
    _objc_release(v91);
    v11 = SEL_sizeThatFits_;
    _objc_msgSend(v85, SEL_sizeThatFits_);
    v92 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(0x404e000000000000, 0x404d000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x404e000000000000, 0x404d000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(0x404e000000000000, 0x404d000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x404e000000000000, 0x404d000000000000) & 1)) & ((unsigned long long)(char)(CmpF(0x404e000000000000, 0x404d000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x404e000000000000, 0x404d000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    v25 = SEL_setFrame_;
    _objc_msgSend();
    v19 = SEL_scroll;
    v93 = _objc_msgSend(v57, SEL_scroll);
    v94 = _objc_retainAutoreleasedReturnValue(v93, SEL_scroll);
    v49 = SEL_addSubview_;
    _objc_msgSend(v94, SEL_addSubview_, v85);
    _objc_release(v94);
    v95 = _objc_alloc(g_4c4158);
    v22 = v85;
    v96 = _objc_msgSend(v85, SEL_frame);
    _CGRectGetMaxY(v96, SEL_frame);
    v97 = _objc_msgSend(v95, v48);
    v27 = SEL_systemFontOfSize_;
    v98 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v99 = _objc_retainAutoreleasedReturnValue(v98, SEL_systemFontOfSize_);
    v30 = SEL_setFont_;
    _objc_msgSend(v97, SEL_setFont_, v99);
    _objc_release(v99);
    v26 = SEL_secondaryLabelColor;
    v100 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v101 = _objc_retainAutoreleasedReturnValue(v100, SEL_secondaryLabelColor);
    v29 = SEL_setTextColor_;
    _objc_msgSend(v97, SEL_setTextColor_, v101);
    v102 = v97;
    _objc_release(v101);
    v12 = SEL_setNumberOfLines_;
    _objc_msgSend(v97, SEL_setNumberOfLines_, 2);
    v32 = v61;
    v103 = _objc_msgSend(v61, SEL_subtitle);
    v104 = _objc_retainAutoreleasedReturnValue(v103, SEL_subtitle);
    v21 = SEL_length;
    v105 = _objc_msgSend(v104, SEL_length);
    v28 = SEL_setText_;
    if (v105)
    {
        v106 = _objc_msgSend(v32, SEL_subtitle);
        v107 = _objc_retainAutoreleasedReturnValue(v106, SEL_subtitle);
        _objc_msgSend(v102, SEL_setText_, v107);
        v108 = v18;
    }
    else
    {
        v107 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v18), v18);
        _objc_msgSend();
        v108 = v18;
    }
    _objc_release(v107);
    _objc_release(v104);
    _objc_msgSend(v102, SEL_sizeToFit);
    v109 = _objc_msgSend(v22, SEL_frame);
    _CGRectGetMaxY(v109, SEL_frame);
    _objc_msgSend(v102, SEL_frame);
    v110 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(0x4034000000000000, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4034000000000000, 0x4044000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(0x4034000000000000, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4034000000000000, 0x4044000000000000) & 1)) & ((unsigned long long)(char)(CmpF(0x4034000000000000, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4034000000000000, 0x4044000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    _objc_msgSend();
    v111 = v19;
    v112 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    v113 = v102;
    _objc_msgSend(v112, v49, v113);
    _objc_release(v112);
    v14 = v113;
    v114 = _objc_msgSend(v113, SEL_frame);
    _CGRectGetMaxY(v114, SEL_frame);
    v115 = _objc_msgSend(_objc_alloc(g_4c46c8), v48);
    _objc_msgSend(v57, SEL_setGetButton_, v115);
    _objc_release(v115);
    v116 = _objc_msgSend(v57, SEL_getButton);
    v117 = _objc_retainAutoreleasedReturnValue(v116, SEL_getButton);
    v118 = _objc_msgSend(v57, SEL_stateTitle);
    v119 = _objc_retainAutoreleasedReturnValue(v118, SEL_stateTitle);
    v120 = _objc_msgSend(v57, SEL_stateIcon);
    v121 = _objc_retainAutoreleasedReturnValue(v120, SEL_stateIcon);
    _objc_msgSend(v117, SEL_setIdleTitle_icon_, v119, v121);
    _objc_release(v121);
    _objc_release(v119);
    _objc_release(v117);
    _objc_initWeak(v24, v57);
    v5 = &g_600748;
    v6 = 0xc2000000;
    v7 = &g_449af0;
    v8 = &g_4a1df0;
    _objc_copyWeak(idx + 32, v24);
    v122 = _objc_msgSend(v57, SEL_getButton);
    v123 = _objc_retainAutoreleasedReturnValue(v122, SEL_getButton);
    v124 = v47;
    _objc_msgSend(v123, SEL_setOnTap_, idx);
    _objc_release(v123);
    v125 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    v126 = _objc_msgSend(v57, SEL_getButton);
    v127 = _objc_retainAutoreleasedReturnValue(v126, SEL_getButton);
    _objc_msgSend(v125, v49, v127);
    _objc_release(v127);
    _objc_release(v125);
    v128 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
    _objc_msgSend(v57, SEL_setSpeedLabel_, v128);
    _objc_release(v128);
    v129 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v20), v20);
    v130 = _objc_msgSend(v57, SEL_speedLabel);
    v131 = _objc_retainAutoreleasedReturnValue(v130, SEL_speedLabel);
    _objc_msgSend(v131, v30, v129);
    _objc_release(v131);
    _objc_release(v129);
    v132 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v26), v26);
    v133 = _objc_msgSend(v57, SEL_speedLabel);
    v134 = _objc_retainAutoreleasedReturnValue(v133, SEL_speedLabel);
    _objc_msgSend(v134, v29, v132);
    _objc_release(v134);
    _objc_release(v132);
    v135 = _objc_msgSend(v57, SEL_speedLabel);
    v136 = _objc_retainAutoreleasedReturnValue(v135, SEL_speedLabel);
    _objc_msgSend(v136, v28, " \t`");
    _objc_release(v136);
    v137 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    v138 = _objc_msgSend(v57, SEL_speedLabel);
    v139 = _objc_retainAutoreleasedReturnValue(v138, SEL_speedLabel);
    _objc_msgSend(v137, v49, v139);
    _objc_release(v139);
    _objc_release(v137);
    v17 = SEL_addSeparatorAtY_width_pad_;
    _objc_msgSend(v57, SEL_addSeparatorAtY_width_pad_);
    v140 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v108), v108);
    v13 = SEL_isEqualToString_;
    if (((char)_objc_msgSend(v140, SEL_isEqualToString_, &g_577a70) & 1))
    {
        v141 = SEL_previewURLs;
        v142 = _objc_msgSend(v32, SEL_previewURLs);
        v143 = _objc_retainAutoreleasedReturnValue(v142, SEL_previewURLs);
        v144 = _objc_msgSend(v143, SEL_count);
        _objc_release(v143);
        _objc_release(v140);
        if (v144)
            goto LABEL_448d3c;
        _objc_msgSend(v57, SEL_addLiveCardPreviewAtY_width_pad_);
        _objc_msgSend(v57, v17);
    }
    else
    {
        _objc_release(v140);
        v141 = SEL_previewURLs;
LABEL_448d3c:
        v145 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v141), v141);
        v146 = _objc_msgSend(v145, SEL_count);
        _objc_release(v145);
        if (v146)
        {
            v147 = _objc_msgSend(_objc_alloc(g_4c4188), v48);
            _objc_msgSend(v147, SEL_setShowsHorizontalScrollIndicator_, 0);
            _objc_msgSend(v147, SEL_setDecelerationRate_);
            _objc_msgSend(v147, v46, 0);
            v44 = v147;
            v10 = *((long long *)&g_600360);
            v45 = v57;
            memset(v124, 0, 64);
            v148 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v141), v141);
            v31 = SEL_countByEnumeratingWithState_objects_count_;
            i = _objc_msgSend(v148, SEL_countByEnumeratingWithState_objects_count_, v124, v33, 16);
            if (i)
            {
                v35 = *((long long *)v4);
                v34 = v148;
                do
                {
                    v150 = 0;
                    v50 = SEL_loadImage_into_;
                    v51 = SEL_setUserInteractionEnabled_;
                    do
                    {
                        if (v124->field_10->field_0 != v35)
                            _objc_enumerationMutation(v34);
                        v151 = _objc_msgSend(_objc_alloc(g_4c4088), v48);
                        _objc_msgSend(v151, v43, 2);
                        _objc_msgSend(v151, v46, 1);
                        v152 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v151, v53), v53);
                        _objc_msgSend(v152, v42);
                        _objc_release(v152);
                        v153 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v151, v53), v53);
                        _objc_msgSend(v153, v40, v41);
                        _objc_release(v153);
                        v154 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v151, v53), v53);
                        _objc_msgSend(v154, v39);
                        _objc_release(v154);
                        v155 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v52), v52);
                        v156 = _objc_msgSend(_objc_retainAutorelease(v155), v38);
                        v157 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v151, v53), v53);
                        _objc_msgSend(v157, v37, v156);
                        _objc_release(v157);
                        _objc_release(v155);
                        len = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v52), v52);
                        _objc_msgSend(v151, v36, len);
                        _objc_release(len);
                        _objc_msgSend(v151, v51, 1);
                        _objc_msgSend(g_4c4480, v50, *((long long *)(v124->field_8 + v150 * 8)), v151);
                        v159 = _objc_alloc(g_4c43f8);
                        count1 = _objc_msgSend(v159, SEL_initWithTarget_action_, v45, SEL_previewTapped_);
                        _objc_msgSend(v151, SEL_addGestureRecognizer_, count1);
                        _objc_msgSend(v44, v49, v151);
                        _objc_release(count1);
                        _objc_release(v151);
                        v150 += 1;
                        v124 = v47;
                    } while (i != v150);
                    i = _objc_msgSend(v34, v31, v124, v33, 16);
                } while (i);
            }
            _objc_release(v148);
            _objc_msgSend(v44, SEL_setContentSize_);
            v57 = v45;
            v111 = v19;
            v161 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
            _objc_msgSend(v161, v49, v44);
            _objc_release(v161);
            _objc_msgSend(v57, v17);
            _objc_release(v44);
            v108 = v18;
        }
    }
    count2 = _objc_msgSend(v32, SEL_desc);
    v163 = _objc_retainAutoreleasedReturnValue(count2, SEL_desc);
    v164 = _objc_msgSend(v163, v21);
    _objc_release(v163);
    if (v164)
    {
        v165 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
        len1 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v20), v20);
        _objc_msgSend(v165, v30, len1);
        _objc_release(len1);
        len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v16), v16);
        _objc_msgSend(v165, v29, len2);
        _objc_release(len2);
        _objc_msgSend(v165, v28, &g_577a30);
        v168 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
        _objc_msgSend(v168, v49, v165);
        _objc_release(v168);
        v169 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
        v170 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v27), v27);
        _objc_msgSend(v169, v30, v170);
        _objc_release(v170);
        v171 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v16), v16);
        _objc_msgSend(v169, v29, v171);
        _objc_release(v171);
        _objc_msgSend(v169, v12, 0);
        v172 = _objc_msgSend(v32, SEL_desc);
        v173 = _objc_retainAutoreleasedReturnValue(v172, SEL_desc);
        _objc_msgSend(v169, v28, v173);
        _objc_release(v173);
        _objc_msgSend(v169, v11);
        _objc_msgSend(v169, v25);
        v174 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
        _objc_msgSend(v174, v49, v169);
        _objc_release(v174);
        _objc_msgSend(v57, v17);
        _objc_release(v169);
        _objc_release(v165);
    }
    _objc_msgSend(v57, SEL_addSubPackagesAtY_width_pad_);
    v175 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
    v176 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v27), v27);
    _objc_msgSend(v175, v30, v176);
    _objc_release(v176);
    v177 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v26), v26);
    _objc_msgSend(v175, v29, v177);
    _objc_release(v177);
    _objc_msgSend(v175, v28, &g_5779f0);
    v178 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    _objc_msgSend(v178, v49, v175);
    _objc_release(v178);
    v179 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
    v180 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v27), v27);
    _objc_msgSend(v179, v30, v180);
    _objc_release(v180);
    v181 = _objc_msgSend(g_4c4480, SEL_accentColor);
    v182 = _objc_retainAutoreleasedReturnValue(v181, SEL_accentColor);
    _objc_msgSend(v179, v29, v182);
    _objc_release(v182);
    v183 = _objc_msgSend(v32, SEL_authorName);
    v184 = _objc_retainAutoreleasedReturnValue(v183, SEL_authorName);
    v185 = _objc_msgSend(v184, v21);
    if (v185)
    {
        v186 = _objc_msgSend(v32, SEL_authorName);
        v187 = _objc_retainAutoreleasedReturnValue(v186, SEL_authorName);
    }
    else
    {
        v187 = " \t`";
    }
    _objc_msgSend(v179, v28, v187);
    if (v185)
        _objc_release(v187);
    _objc_release(v184);
    v188 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    _objc_msgSend(v188, v49, v179);
    _objc_release(v188);
    v189 = _objc_alloc(g_4c4088);
    v190 = _objc_msgSend(g_4c4080, SEL_systemImageNamed_, &g_577970);
    v191 = _objc_retainAutoreleasedReturnValue(v190, SEL_systemImageNamed_, &g_577970);
    v192 = _objc_msgSend(v189, SEL_initWithImage_, v191);
    _objc_release(v191);
    v193 = _objc_msgSend(g_4c4090, SEL_tertiaryLabelColor);
    v194 = _objc_retainAutoreleasedReturnValue(v193, SEL_tertiaryLabelColor);
    _objc_msgSend(v192, SEL_setTintColor_, v194);
    _objc_release(v194);
    _objc_msgSend(v192, v25);
    v195 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    _objc_msgSend(v195, v49, v192);
    _objc_release(v195);
    v196 = _objc_msgSend(_objc_alloc(g_4c4158), v48);
    v197 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v27), v27);
    _objc_msgSend(v196, v30, v197);
    _objc_release(v197);
    v198 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v26), v26);
    _objc_msgSend(v196, v29, v198);
    _objc_release(v198);
    v199 = _objc_msgSend(v32, SEL_version);
    v200 = _objc_retainAutoreleasedReturnValue(v199, SEL_version);
    v201 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v108), v108);
    v202 = " \t`";
    if (_objc_msgSend(v201, v13, &g_577b30))
        v202 = " \t`";
    v0 = v200;
    v1 = v202;
    v203 = _objc_msgSend();
    v204 = _objc_retainAutoreleasedReturnValue(v203, SEL_stringWithFormat_, &g_577930);
    _objc_msgSend(v196, v28, v204);
    _objc_release(v204);
    _objc_release(v201);
    _objc_release(v200);
    v205 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    _objc_msgSend(v205, v49, v196);
    _objc_release(v205);
    v206 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v111), v111);
    _objc_msgSend(v206, SEL_setContentSize_);
    _objc_release(v206);
    _objc_release(v196);
    _objc_release(v192);
    _objc_release(v179);
    _objc_release(v175);
    _objc_destroyWeak(idx + 32);
    _objc_destroyWeak(v24);
    _objc_release(v14);
    _objc_release(v22);
    _objc_release(v15);
    v207 = _objc_release(v32);
    if (*((long long *)&g_600760) == v54)
        return v207;
    v208 = ___stack_chk_fail();
    _objc_destroyWeak(idx + 32);
    _objc_destroyWeak(v24);
    __Unwind_Resume(v208);
}
