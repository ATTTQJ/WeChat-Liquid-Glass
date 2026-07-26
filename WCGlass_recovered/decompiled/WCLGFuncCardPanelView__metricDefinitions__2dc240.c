/* Recovered pseudocode
 * Objective-C: +[WCLGFuncCardPanelView metricDefinitions]
 * Address: 0x2dc240; original size: 5304 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 3.69s
 */

void sub_2dc240(void)
{
    unsigned long long v184;  // d9
    unsigned long long v185;  // d8
    unsigned long long v194;  // x20
    unsigned long long v195;  // x19
    unsigned long long v196;  // x30
    long long count;  // x0
    long long count1;  // x0
    long long count2;  // x0
    long long v200;  // x0
    long long v201;  // x0
    long long v202;  // x0
    long long v203;  // x0
    unsigned long long v186;  // x28
    long long v204;  // x0
    long long v205;  // x0
    long long v206;  // x0
    long long v207;  // x0
    long long v208;  // x0
    long long v209;  // x0
    long long v210;  // x0
    long long v211;  // x0
    long long v212;  // x0
    long long v213;  // x0
    unsigned long long v187;  // x27
    long long v214;  // x0
    long long v215;  // x0
    long long v216;  // x0
    long long v217;  // x0
    long long v218;  // x0
    long long v219;  // x0
    long long v220;  // x0
    long long v221;  // x0
    long long v222;  // x0
    long long v223;  // x0
    unsigned long long v188;  // x26
    long long v224;  // x0
    long long v225;  // x0
    long long v226;  // x0
    long long v227;  // x0
    long long v228;  // x0
    long long v229;  // x0
    long long v230;  // x0
    long long v231;  // x0
    long long v232;  // x0
    long long v233;  // x0
    unsigned long long v189;  // x25
    long long v234;  // x0
    long long v235;  // x0
    long long v236;  // x0
    long long v237;  // x0
    long long v238;  // x0
    long long v239;  // x0
    long long v240;  // x0
    long long v241;  // x0
    long long v242;  // x0
    long long v243;  // x0
    unsigned long long v190;  // x24
    unsigned long long v191;  // x23
    unsigned long long v192;  // x22
    unsigned long long v193;  // x21
    unsigned long v0;  // [bp-0x660]
    unsigned long long v1;  // [bp-0x658]
    unsigned long long v2;  // [bp-0x650]
    unsigned long long v3;  // [bp-0x648]
    unsigned long long v4;  // [bp-0x640]
    unsigned long long v5;  // [bp-0x638]
    char v7;  // [bp-0x600], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0x5f8]
    unsigned long long v9;  // [bp-0x5f0]
    unsigned long long v10;  // [bp-0x5e8]
    unsigned long long v11;  // [bp-0x5e0]
    unsigned long long v12;  // [bp-0x5d8]
    unsigned long v13;  // [bp-0x5d0]
    unsigned long v14;  // [bp-0x5c8]
    long long v15;  // [bp-0x5c0]
    long long v16;  // [bp-0x5b8]
    long long v17;  // [bp-0x5b0]
    unsigned long long v18;  // [bp-0x5a8]
    char v19;  // [bp-0x5a0], Other Possible Types: unsigned long
    unsigned long long v20;  // [bp-0x598]
    unsigned long long v21;  // [bp-0x590]
    unsigned long long v22;  // [bp-0x588]
    unsigned long long v23;  // [bp-0x580]
    unsigned long long v24;  // [bp-0x578]
    unsigned long v25;  // [bp-0x570]
    unsigned long v26;  // [bp-0x568]
    long long v27;  // [bp-0x560]
    long long v28;  // [bp-0x558]
    long long v29;  // [bp-0x550]
    unsigned long long v30;  // [bp-0x548]
    char v31;  // [bp-0x540], Other Possible Types: unsigned long
    unsigned long long v32;  // [bp-0x538]
    unsigned long long v33;  // [bp-0x530]
    unsigned long long v34;  // [bp-0x528]
    unsigned long long v35;  // [bp-0x520]
    unsigned long long v36;  // [bp-0x518]
    unsigned long v37;  // [bp-0x510]
    unsigned long v38;  // [bp-0x508]
    long long v39;  // [bp-0x500]
    long long v40;  // [bp-0x4f8]
    long long v41;  // [bp-0x4f0]
    unsigned long long v42;  // [bp-0x4e8]
    char v43;  // [bp-0x4e0], Other Possible Types: unsigned long
    unsigned long long v44;  // [bp-0x4d8]
    unsigned long long v45;  // [bp-0x4d0]
    unsigned long long v46;  // [bp-0x4c8]
    unsigned long long v47;  // [bp-0x4c0]
    unsigned long long v48;  // [bp-0x4b8]
    unsigned long v49;  // [bp-0x4b0]
    unsigned long v50;  // [bp-0x4a8]
    long long v51;  // [bp-0x4a0]
    long long v52;  // [bp-0x498]
    long long v53;  // [bp-0x490]
    unsigned long long v54;  // [bp-0x488]
    char v55;  // [bp-0x480], Other Possible Types: unsigned long
    unsigned long long v56;  // [bp-0x478]
    unsigned long long v57;  // [bp-0x470]
    unsigned long long v58;  // [bp-0x468]
    unsigned long long v59;  // [bp-0x460]
    unsigned long long v60;  // [bp-0x458]
    unsigned long v61;  // [bp-0x450]
    unsigned long v62;  // [bp-0x448]
    long long v63;  // [bp-0x440]
    long long v64;  // [bp-0x438]
    long long v65;  // [bp-0x430]
    unsigned long long v66;  // [bp-0x428]
    int v67;  // [bp-0x420]
    int v68;  // [bp-0x3f0], Other Possible Types: unsigned long
    unsigned long v69;  // [bp-0x3e8]
    long long v70;  // [bp-0x3e0]
    long long v71;  // [bp-0x3d8]
    long long v72;  // [bp-0x3d0]
    unsigned long long v73;  // [bp-0x3c8]
    char v74;  // [bp-0x3c0]
    unsigned long long v75;  // [bp-0x3b8]
    unsigned long long v76;  // [bp-0x3b0]
    unsigned long long v77;  // [bp-0x3a8]
    unsigned long long v78;  // [bp-0x3a0]
    unsigned long long v79;  // [bp-0x398]
    int v80;  // [bp-0x390], Other Possible Types: char, unsigned long
    unsigned long v81;  // [bp-0x388]
    long long v82;  // [bp-0x380]
    long long v83;  // [bp-0x378]
    long long v84;  // [bp-0x370]
    unsigned long long v85;  // [bp-0x368]
    char v86;  // [bp-0x360]
    unsigned long long v87;  // [bp-0x358]
    unsigned long long v88;  // [bp-0x350]
    unsigned long long v89;  // [bp-0x348]
    unsigned long long v90;  // [bp-0x340]
    unsigned long long v91;  // [bp-0x338]
    char v92;  // [bp-0x330], Other Possible Types: unsigned long
    unsigned long long v93;  // [bp-0x328]
    long long v94;  // [bp-0x320]
    long long v95;  // [bp-0x318]
    long long v96;  // [bp-0x310]
    unsigned long long v97;  // [bp-0x308]
    char v98;  // [bp-0x300], Other Possible Types: unsigned long
    unsigned long long v99;  // [bp-0x2f8]
    unsigned long long v100;  // [bp-0x2f0]
    unsigned long long v101;  // [bp-0x2e8]
    long long v102;  // [bp-0x2e0], Other Possible Types: unsigned long long
    long long v103;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v104;  // [bp-0x2d0], Other Possible Types: long long, unsigned long
    long long v105;  // [bp-0x2c8], Other Possible Types: unsigned long long
    long long v106;  // [bp-0x2c0]
    long long v107;  // [bp-0x2b8]
    long long v108;  // [bp-0x2b0]
    long long v109;  // [bp-0x2a8], Other Possible Types: unsigned long long
    long long v110;  // [bp-0x2a0], Other Possible Types: unsigned long
    long long v111;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v112;  // [bp-0x290]
    unsigned long long v113;  // [bp-0x288]
    unsigned long long v114;  // [bp-0x280]
    unsigned long long v115;  // [bp-0x278]
    char v116;  // [bp-0x270], Other Possible Types: unsigned long
    unsigned long long v117;  // [bp-0x268]
    long long v118;  // [bp-0x260]
    long long v119;  // [bp-0x258]
    long long v120;  // [bp-0x250]
    unsigned long long v121;  // [bp-0x248]
    char v122;  // [bp-0x240]
    char *v123;  // [bp-0x1e8]
    char *v124;  // [bp-0x1e0], Other Possible Types: long long
    char *v125;  // [bp-0x1d8], Other Possible Types: long long
    char *v126;  // [bp-0x1d0], Other Possible Types: long long
    char *v127;  // [bp-0x1c8], Other Possible Types: long long
    char *v128;  // [bp-0x1c0], Other Possible Types: long long
    char *v129;  // [bp-0x1b8], Other Possible Types: long long
    long long v130;  // [bp-0x1b0]
    char *v131;  // [bp-0x1a8], Other Possible Types: long long
    char *v132;  // [bp-0x1a0], Other Possible Types: long long
    char *v133;  // [bp-0x198], Other Possible Types: long long
    char *v134;  // [bp-0x190], Other Possible Types: long long
    char *v135;  // [bp-0x188], Other Possible Types: long long
    char *v136;  // [bp-0x180], Other Possible Types: long long
    char *v137;  // [bp-0x178]
    char *v138;  // [bp-0x170], Other Possible Types: long long
    char *v139;  // [bp-0x168], Other Possible Types: long long
    char *v140;  // [bp-0x160], Other Possible Types: long long
    char *v141;  // [bp-0x158], Other Possible Types: long long
    long long v142;  // [bp-0x150]
    long long v143;  // [bp-0x148]
    char *v144;  // [bp-0x140]
    char *v145;  // [bp-0x138], Other Possible Types: long long
    char *v146;  // [bp-0x130], Other Possible Types: long long
    char *v147;  // [bp-0x128], Other Possible Types: long long
    char *v148;  // [bp-0x120]
    char *v149;  // [bp-0x118], Other Possible Types: long long
    long long v150;  // [bp-0x110]
    char *v151;  // [bp-0x108]
    char *v152;  // [bp-0x100]
    char *v153;  // [bp-0xf8]
    char *v154;  // [bp-0xf0]
    long long v155;  // [bp-0xe8]
    char *v156;  // [bp-0xe0], Other Possible Types: long long
    char *v157;  // [bp-0xd8]
    char *v158;  // [bp-0xd0]
    char *v159;  // [bp-0xc8], Other Possible Types: long long
    long long v160;  // [bp-0xc0]
    long long v161;  // [bp-0xb8]
    long long v162;  // [bp-0xb0]
    char *v163;  // [bp-0xa8], Other Possible Types: long long
    long long v164;  // [bp-0xa0]
    char *v165;  // [bp-0x98]
    long long v166;  // [bp-0x90]
    long long v167;  // [bp-0x88]
    unsigned long v168;  // [bp-0x80]
    unsigned long long v169;  // [bp-0x70]
    unsigned long long v170;  // [bp-0x68]
    unsigned long long v171;  // [bp-0x60]
    unsigned long long v172;  // [bp-0x58]
    unsigned long long v173;  // [bp-0x50]
    unsigned long long v174;  // [bp-0x48]
    unsigned long long v175;  // [bp-0x40]
    unsigned long long v176;  // [bp-0x38]
    unsigned long long v177;  // [bp-0x30]
    unsigned long long v178;  // [bp-0x28]
    unsigned long long v179;  // [bp-0x20]
    unsigned long long v180;  // [bp-0x18]
    char *v181;  // [bp-0x10]
    unsigned long long v182;  // [bp-0x8]
    char v183;  // [bp+0x0]

    v169 = v184;
    v170 = v185;
    v171 = v186;
    v172 = v187;
    v173 = v188;
    v174 = v189;
    v175 = v190;
    v176 = v191;
    v177 = v192;
    v178 = v193;
    v179 = v194;
    v180 = v195;
    v181 = &v183;
    v182 = v196;
    v168 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_580280)
    {
        g_53e164 = g_53e160 ^ 163;
        g_53e165 = g_53e161 ^ 0x88;
        g_53e166 = g_53e162 ^ 59;
        g_53e167 = g_53e163 ^ 172;
        g_53e15a = g_53e154 ^ 28;
        g_53e15b = g_53e155 ^ 23;
        g_53e15c = g_53e156 ^ 83;
        g_53e15d = g_53e157 ^ 141;
        g_53e15e = g_53e158 ^ 192;
        g_53e15f = g_53e159 ^ 0xcc;
        g_53e14f = g_53e14a ^ 236;
        g_53e150 = g_53e14b ^ 241;
        g_53e151 = g_53e14c ^ 227;
        g_53e152 = g_53e14d ^ 242;
        g_53e153 = g_53e14e ^ 87;
        g_53e13e = g_53e13a ^ 61;
        g_53e13f = g_53e13b ^ 252;
        g_53e140 = g_53e13c ^ 186;
        g_53e141 = g_53e13d ^ 0x33;
        g_53e11f = g_53e118 ^ 70;
        g_53e120 = g_53e119 ^ 33;
        g_53e121 = g_53e11a ^ 246;
        g_53e122 = g_53e11b ^ 197;
        g_53e123 = g_53e11c ^ 122;
        g_53e124 = g_53e11d ^ 253;
        g_53e125 = g_53e11e ^ 224;
        *((unsigned short *)&g_53e130) = g_53e126 ^ 32180;
        *((unsigned short *)&g_53e132) = g_53e128 ^ 36814;
        *((unsigned short *)&g_53e134) = g_53e12a ^ 0x5bfc;
        *((unsigned short *)&g_53e136) = g_53e12c ^ 28790;
        *((unsigned short *)&g_53e138) = g_53e12e ^ 4359;
        *((unsigned short *)&g_53e10e) = g_53e104 ^ 18640;
        *((unsigned short *)&g_53e110) = g_53e106 ^ 45026;
        *((unsigned short *)&g_53e112) = g_53e108 ^ 62508;
        *((unsigned short *)&g_53e114) = g_53e10a ^ 54574;
        *((unsigned short *)&g_53e116) = g_53e10c ^ 39477;
        *((unsigned short *)&g_53e0fa) = g_53e0f0 ^ 14462;
        *((unsigned short *)&g_53e0fc) = g_53e0f2 ^ 54474;
        *((unsigned short *)&g_53e0fe) = g_53e0f4 ^ 25553;
        *((unsigned short *)&g_53e100) = g_53e0f6 ^ 36491;
        *((unsigned short *)&g_53e102) = g_53e0f8 ^ 27227;
        *((unsigned short *)&g_53e0e6) = g_53e0dc ^ 10405;
        *((unsigned short *)&g_53e0e8) = g_53e0de ^ 2113;
        *((unsigned short *)&g_53e0ea) = g_53e0e0 ^ 37048;
        *((unsigned short *)&g_53e0ec) = g_53e0e2 ^ 27033;
        *((unsigned short *)&g_53e0ee) = g_53e0e4 ^ 11626;
        *((unsigned short *)&g_53e066) = g_53e060 ^ 14999;
        *((unsigned short *)&g_53e068) = g_53e062 ^ 20071;
        *((unsigned short *)&g_53e06a) = g_53e064 ^ 17242;
        g_53e0d4 = g_53e0d0 ^ 163;
        g_53e0d5 = g_53e0d1;
        g_53e0d6 = g_53e0d2 ^ 133;
        g_53e0d7 = g_53e0d3 ^ 142;
        *((unsigned short *)&g_53e076) = g_53e06c ^ 25959;
        *((unsigned short *)&g_53e078) = g_53e06e ^ 52856;
        *((unsigned short *)&g_53e07a) = g_53e070 ^ 0xa9fe;
        *((unsigned short *)&g_53e07c) = g_53e072 ^ 15572;
        *((unsigned short *)&g_53e07e) = g_53e074 ^ 64861;
        *((unsigned short *)&g_53e0b2) = g_53e0a8 ^ 0xbd00;
        *((unsigned short *)&g_53e0b4) = g_53e0aa ^ 27561;
        *((unsigned short *)&g_53e0b6) = g_53e0ac ^ 62705;
        *((unsigned short *)&g_53e0b8) = g_53e0ae ^ 3005;
        *((unsigned short *)&g_53e0ba) = g_53e0b0 ^ 16067;
        g_53e146 = g_53e142 ^ 44;
        g_53e147 = g_53e143 ^ 103;
        g_53e148 = g_53e144 ^ 29;
        g_53e149 = g_53e145 ^ 177;
        g_53e0da = g_53e0d8 ^ 90;
        g_53e0db = g_53e0d9 ^ 208;
        *((unsigned short *)&g_53e0c6) = g_53e0bc ^ 24638;
        *((unsigned short *)&g_53e0c8) = g_53e0be ^ 8896;
        *((unsigned short *)&g_53e0ca) = g_53e0c0 ^ 44840;
        *((unsigned short *)&g_53e0cc) = g_53e0c2 ^ 49072;
        *((unsigned short *)&g_53e0ce) = g_53e0c4 ^ 64235;
        *((unsigned short *)&g_53e09e) = g_53e094 ^ 50332;
        *((unsigned short *)&g_53e0a0) = g_53e096 ^ 36887;
        *((unsigned short *)&g_53e0a2) = g_53e098 ^ 30039;
        *((unsigned short *)&g_53e0a4) = g_53e09a ^ 16388;
        *((unsigned short *)&g_53e0a6) = g_53e09c ^ 46616;
        *((unsigned short *)&g_53e08a) = g_53e080 ^ 14054;
        *((unsigned short *)&g_53e08c) = g_53e082 ^ 36629;
        *((unsigned short *)&g_53e08e) = g_53e084 ^ 16658;
        *((unsigned short *)&g_53e090) = g_53e086 ^ 49680;
        *((unsigned short *)&g_53e092) = g_53e088 ^ 64771;
    }
    /* unsupported instruction */
    g_580280 = 1;
    v123 = &v122 + 80;
    v165 = &v122;
    v163 = &v116;
    v159 = &v104;
    v156 = &v98;
    v149 = &v92;
    v147 = &v86;
    v135 = &v86;
    v140 = &v80;
    v136 = &v74;
    v125 = &v74;
    v129 = &v67 - 48;
    v124 = &v67 - 48;
    v127 = &v67;
    v128 = &v67;
    v133 = &v55 + 48;
    v126 = &v55 + 48;
    v132 = &v55;
    v134 = &v55;
    v139 = &v43 + 48;
    v131 = &v43 + 48;
    v138 = &v43;
    v141 = &v43;
    v146 = &v31 + 48;
    v137 = &v31 + 48;
    v145 = &v31;
    v148 = &v31;
    v153 = &v19 + 48;
    v144 = &v19 + 48;
    v152 = &v19;
    v154 = &v19;
    v158 = &v7 + 48;
    v151 = &v7 + 48;
    v157 = &v7;
    v110 = " \t`";
    v111 = " \t`";
    v116 = g_4a3ef0;
    v117 = " \t`";
    v112 = " \t`";
    count = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v167 = _objc_retainAutoreleasedReturnValue(count, SEL_numberWithDouble_);
    v118 = v167;
    v113 = " \t`";
    count1 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v166 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithDouble_);
    v119 = v166;
    v114 = " \t`";
    count2 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v164 = _objc_retainAutoreleasedReturnValue(count2, SEL_numberWithDouble_);
    v115 = " \t`";
    v120 = v164;
    v121 = " \t`";
    v200 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v163, &v110, 6);
    v163 = _objc_retainAutoreleasedReturnValue(v200, SEL_dictionaryWithObjects_forKeys_count_, v163, &v110, 6);
    v102 = v163;
    v98 = " \t`";
    v99 = " \t`";
    v104 = g_4a3ef8;
    v105 = " \t`";
    v100 = " \t`";
    v201 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v162 = _objc_retainAutoreleasedReturnValue(v201, SEL_numberWithDouble_);
    v106 = v162;
    v101 = " \t`";
    v202 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v161 = _objc_retainAutoreleasedReturnValue(v202, SEL_numberWithDouble_);
    v107 = v161;
    v102 = " \t`";
    v203 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v160 = _objc_retainAutoreleasedReturnValue(v203, SEL_numberWithDouble_);
    v103 = " \t`";
    v108 = v160;
    v109 = " \t`";
    v204 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v159, v156, 6);
    v159 = _objc_retainAutoreleasedReturnValue(v204, SEL_dictionaryWithObjects_forKeys_count_, v159, v156, 6);
    v103 = v159;
    v80 = (int)_INSERT(v80 CONCAT 0, 48, " \t`");
    v87 = " \t`";
    v92 = g_4a3f00;
    v93 = " \t`";
    v88 = " \t`";
    v205 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v156 = _objc_retainAutoreleasedReturnValue(v205, SEL_numberWithDouble_);
    v94 = v156;
    v89 = " \t`";
    v206 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v155 = _objc_retainAutoreleasedReturnValue(v206, SEL_numberWithDouble_);
    v95 = v155;
    v90 = " \t`";
    v207 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v150 = _objc_retainAutoreleasedReturnValue(v207, SEL_numberWithDouble_);
    v91 = " \t`";
    v96 = v150;
    v97 = " \t`";
    v208 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v149, v147, 6);
    v149 = _objc_retainAutoreleasedReturnValue(v208, SEL_dictionaryWithObjects_forKeys_count_, v149, v147, 6);
    v104 = v149;
    v68 = (int)_INSERT(v67, 48, " \t`");
    v75 = " \t`";
    v80 = g_4a3f08;
    v81 = " \t`";
    v76 = " \t`";
    v209 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v147 = _objc_retainAutoreleasedReturnValue(v209, SEL_numberWithDouble_);
    v82 = v147;
    v77 = " \t`";
    v210 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v143 = _objc_retainAutoreleasedReturnValue(v210, SEL_numberWithDouble_);
    v83 = v143;
    v78 = " \t`";
    v211 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v142 = _objc_retainAutoreleasedReturnValue(v211, SEL_numberWithDouble_);
    v79 = " \t`";
    v84 = v142;
    v85 = " \t`";
    v212 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v140, v136, 6);
    v140 = _objc_retainAutoreleasedReturnValue(v212, SEL_dictionaryWithObjects_forKeys_count_, v140, v136, 6);
    v105 = v140;
    v55 = " \t`";
    v56 = " \t`";
    v68 = g_4a3f10;
    v69 = " \t`";
    v57 = " \t`";
    v213 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v136 = _objc_retainAutoreleasedReturnValue(v213, SEL_numberWithDouble_);
    v70 = v136;
    v58 = " \t`";
    v214 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v135 = _objc_retainAutoreleasedReturnValue(v214, SEL_numberWithDouble_);
    v71 = v135;
    v59 = " \t`";
    v215 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v130 = _objc_retainAutoreleasedReturnValue(v215, SEL_numberWithDouble_);
    v60 = " \t`";
    v72 = v130;
    v73 = " \t`";
    v216 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v129, v127, 6);
    v129 = _objc_retainAutoreleasedReturnValue(v216, SEL_dictionaryWithObjects_forKeys_count_, v129, v127, 6);
    v106 = v129;
    v43 = " \t`";
    v44 = " \t`";
    v61 = g_4a3f18;
    v62 = " \t`";
    v45 = " \t`";
    v217 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v127 = _objc_retainAutoreleasedReturnValue(v217, SEL_numberWithDouble_);
    v63 = v127;
    v46 = " \t`";
    v218 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v125 = _objc_retainAutoreleasedReturnValue(v218, SEL_numberWithDouble_);
    v64 = v125;
    v47 = " \t`";
    v219 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v124 = _objc_retainAutoreleasedReturnValue(v219, SEL_numberWithDouble_);
    v48 = " \t`";
    v65 = v124;
    v66 = " \t`";
    v220 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v133, v132, 6);
    v133 = _objc_retainAutoreleasedReturnValue(v220, SEL_dictionaryWithObjects_forKeys_count_, v133, v132, 6);
    v107 = v133;
    v31 = " \t`";
    v32 = " \t`";
    v49 = g_4a3f20;
    v50 = " \t`";
    v33 = " \t`";
    v221 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v132 = _objc_retainAutoreleasedReturnValue(v221, SEL_numberWithDouble_);
    v51 = v132;
    v34 = " \t`";
    v222 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v128 = _objc_retainAutoreleasedReturnValue(v222, SEL_numberWithDouble_);
    v52 = v128;
    v35 = " \t`";
    v223 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v126 = _objc_retainAutoreleasedReturnValue(v223, SEL_numberWithDouble_);
    v36 = " \t`";
    v53 = v126;
    v54 = " \t`";
    v224 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v139, v138, 6);
    v139 = _objc_retainAutoreleasedReturnValue(v224, SEL_dictionaryWithObjects_forKeys_count_, v139, v138, 6);
    v108 = v139;
    v19 = " \t`";
    v20 = " \t`";
    v37 = g_4a3f38;
    v38 = " \t`";
    v21 = " \t`";
    v225 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v138 = _objc_retainAutoreleasedReturnValue(v225, SEL_numberWithDouble_);
    v39 = v138;
    v22 = " \t`";
    v226 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v134 = _objc_retainAutoreleasedReturnValue(v226, SEL_numberWithDouble_);
    v40 = v134;
    v23 = " \t`";
    v227 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v131 = _objc_retainAutoreleasedReturnValue(v227, SEL_numberWithDouble_);
    v24 = " \t`";
    v41 = v131;
    v42 = " \t`";
    v228 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v146, v145, 6);
    v146 = _objc_retainAutoreleasedReturnValue(v228, SEL_dictionaryWithObjects_forKeys_count_, v146, v145, 6);
    v109 = v146;
    v7 = " \t`";
    v8 = " \t`";
    v25 = g_4a3f40;
    v26 = " \t`";
    v9 = " \t`";
    v229 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v145 = _objc_retainAutoreleasedReturnValue(v229, SEL_numberWithDouble_);
    v27 = v145;
    v10 = " \t`";
    v230 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v141 = _objc_retainAutoreleasedReturnValue(v230, SEL_numberWithDouble_);
    v28 = v141;
    v11 = " \t`";
    v231 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v232 = _objc_retainAutoreleasedReturnValue(v231, SEL_numberWithDouble_);
    v12 = " \t`";
    v29 = v232;
    v30 = " \t`";
    v233 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v153, v152, 6);
    v234 = _objc_retainAutoreleasedReturnValue(v233, SEL_dictionaryWithObjects_forKeys_count_, v153, v152, 6);
    v110 = v234;
    v0 = " \t`";
    v1 = " \t`";
    v13 = g_4a3f48;
    v14 = " \t`";
    v2 = " \t`";
    v235 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v236 = _objc_retainAutoreleasedReturnValue(v235, SEL_numberWithDouble_);
    v15 = v236;
    v3 = " \t`";
    v237 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v238 = _objc_retainAutoreleasedReturnValue(v237, SEL_numberWithDouble_);
    v16 = v238;
    v4 = " \t`";
    v239 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    v240 = _objc_retainAutoreleasedReturnValue(v239, SEL_numberWithDouble_);
    v5 = " \t`";
    v17 = v240;
    v18 = " \t`";
    v241 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v158, v157, 6);
    v242 = _objc_retainAutoreleasedReturnValue(v241, SEL_dictionaryWithObjects_forKeys_count_, v158, v157, 6);
    v111 = v242;
    v243 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, v165, 10);
    _objc_retainAutoreleasedReturnValue(v243, SEL_arrayWithObjects_count_, v165, 10);
    _objc_release(v242);
    _objc_release(v240);
    _objc_release(v238);
    _objc_release(v236);
    _objc_release(v234);
    _objc_release(v232);
    _objc_release(v141);
    _objc_release(v145);
    _objc_release(v146);
    _objc_release(v131);
    _objc_release(v134);
    _objc_release(v138);
    _objc_release(v139);
    _objc_release(v126);
    _objc_release(v128);
    _objc_release(v132);
    _objc_release(v133);
    _objc_release(v124);
    _objc_release(v125);
    _objc_release(v127);
    _objc_release(v129);
    _objc_release(v130);
    _objc_release(v135);
    _objc_release(v136);
    _objc_release(v140);
    _objc_release(v142);
    _objc_release(v143);
    _objc_release(v147);
    _objc_release(v149);
    _objc_release(v150);
    _objc_release(v155);
    _objc_release(v156);
    _objc_release(v159);
    _objc_release(v160);
    _objc_release(v161);
    _objc_release(v162);
    _objc_release(v163);
    _objc_release(v164);
    _objc_release(v166);
    _objc_release(v167);
    if (*((long long *)&g_600760) != v168)
        ___stack_chk_fail();
}
