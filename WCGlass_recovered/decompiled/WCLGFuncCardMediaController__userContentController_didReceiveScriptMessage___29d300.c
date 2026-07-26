/* Recovered pseudocode
 * Objective-C: -[WCLGFuncCardMediaController userContentController:didReceiveScriptMessage:]
 * Address: 0x29d300; original size: 7348 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 6.124s
 */

typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned long long sub_29d300(char *a0, unsigned long a1, long long a2, long long a3)
{
    long long v72;  // x21
    char *count;  // x22
    unsigned long long v169;  // w0
    long long v170;  // x23
    long long v171;  // x22
    char *v172;  // x26
    long long v173;  // x0
    unsigned long long v174;  // d0
    long long v175;  // x0
    long long v176;  // x0
    long long count1;  // x0
    unsigned long long v178;  // x8
    long long count2;  // x0
    unsigned long v179;  // d0
    unsigned long v180;  // 4170
    unsigned long v181;  // cc_op
    unsigned long v182;  // cc_dep1
    unsigned long v183;  // cc_dep2
    unsigned long v184;  // cc_ndep
    unsigned long v185;  // 4110
    unsigned long v186;  // 4106
    long long v83;  // x21
    unsigned long v187;  // 4110
    unsigned long v188;  // 4106
    long long v84;  // x0
    long long v189;  // x0
    unsigned long v190;  // d0
    unsigned long v191;  // 4156
    long long v192;  // x0
    long long v85;  // x22
    long long v193;  // x0
    long long v194;  // x2
    long long v195;  // x0
    long long v196;  // x0
    long long v197;  // x0
    long long v198;  // x0
    long long v199;  // x0
    long long v200;  // x0
    char *v201;  // x2
    char *v202;  // x3
    long long v86;  // x0
    long long v203;  // x0
    long long v204;  // x23
    long long v205;  // x0
    long long v206;  // x22
    unsigned long long v207;  // x0
    long long v208;  // x0
    long long v87;  // x0
    long long v88;  // x0
    long long v89;  // x22
    long long v90;  // x0
    char *idx;  // x24
    unsigned long long v91;  // w0
    long long v92;  // x0
    char *v93;  // x23
    char *v94;  // x27
    char *v95;  // x27
    long long v96;  // x0
    long long len;  // x19
    long long v98;  // x0
    long long v99;  // x0
    long long v75;  // x0
    long long v100;  // x0
    long long v101;  // x0
    long long v102;  // x0
    long long v103;  // x0
    long long v104;  // x0
    long long v105;  // x0
    long long v106;  // x0
    unsigned long long len1;  // x25
    long long v108;  // x0
    long long v109;  // x0
    long long v76;  // x0
    long long v110;  // x0
    long long v111;  // x0
    unsigned long long i;  // x0
    long long v113;  // x0
    long long v114;  // x0
    long long v115;  // x19
    long long v116;  // x21
    long long v117;  // x0
    long long v118;  // x22
    long long v77;  // x23
    char *v119;  // x19
    long long v120;  // x0
    long long v121;  // x21
    char *v122;  // x27
    long long v123;  // x20
    long long v124;  // x0
    char *len2;  // x26
    long long v126;  // x22
    long long v127;  // x0
    char *v128;  // x20
    long long v78;  // x0
    long long v129;  // x22
    long long v130;  // x0
    char *v131;  // x25
    char *v132;  // x27
    long long v133;  // x0
    unsigned long long v134;  // x0
    long long v135;  // x0
    unsigned long long v136;  // x21
    char *idx1;  // x2
    char *v138;  // x3
    long long v79;  // x19
    long long v139;  // x0
    long long v140;  // x19
    long long v141;  // x0
    char *v142;  // x2
    long long v143;  // x0
    long long v144;  // x0
    long long v145;  // x23
    long long v146;  // x0
    long long v147;  // x0
    long long v148;  // x0
    long long v80;  // x0
    long long v149;  // x0
    char *idx2;  // x2
    char *v151;  // x3
    long long v152;  // x0
    long long v153;  // x20
    long long v154;  // x0
    long long v155;  // x28
    char *v156;  // x19
    char *v157;  // x2
    long long v158;  // x0
    unsigned long long v81;  // w0
    long long v159;  // x20
    long long v160;  // x0
    long long v161;  // x21
    long long v162;  // x0
    long long v163;  // x22
    long long v164;  // x0
    long long v165;  // x0
    long long v166;  // x23
    long long v167;  // x0
    long long v168;  // x0
    char v0;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x308]
    unsigned long v2;  // [bp-0x300]
    unsigned long v3;  // [bp-0x2f8]
    long long v4;  // [bp-0x2f0]
    long long v5;  // [bp-0x2e8]
    long long v6;  // [bp-0x2e0]
    char v7;  // [bp-0x2d0], Other Possible Types: long long
    long long v8;  // [bp-0x2c8]
    long long v9;  // [bp-0x2c0]
    long long v10;  // [bp-0x2b8]
    unsigned long v11;  // [bp-0x2b0]
    char v12;  // [bp-0x2a0], Other Possible Types: long long
    long long v13;  // [bp-0x298]
    long long v14;  // [bp-0x290]
    long long v15;  // [bp-0x288]
    long long v16;  // [bp-0x280]
    char v17;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x268]
    unsigned long v19;  // [bp-0x260]
    unsigned long v20;  // [bp-0x258]
    long long v21;  // [bp-0x250]
    char v22;  // [bp-0x240]
    char v23;  // [bp-0x230], Other Possible Types: unsigned long
    unsigned long v24;  // [bp-0x228]
    long long v25;  // [bp-0x220]
    long long v26;  // [bp-0x218]
    unsigned long v27;  // [bp-0x210]
    char v28;  // [bp-0x200], Other Possible Types: long long
    long long v29;  // [bp-0x1f8]
    char *v30;  // [bp-0x1f0]
    char *v31;  // [bp-0x1e8]
    unsigned long v32;  // [bp-0x1e0]
    char v33;  // [bp-0x1d0], Other Possible Types: unsigned long
    unsigned long v34;  // [bp-0x1c8]
    long long v35;  // [bp-0x1c0]
    long long v36;  // [bp-0x1b8]
    unsigned long v37;  // [bp-0x1b0]
    char v38;  // [bp-0x1a0], Other Possible Types: unsigned long long
    long long v39;  // [bp-0x198]
    char *v40;  // [bp-0x190]
    char *v41;  // [bp-0x188]
    unsigned long v42;  // [bp-0x180]
    unsigned long v43;  // [bp-0x170]
    unsigned long long v44;  // [bp-0x168]
    unsigned long long v45;  // [bp-0x160]
    unsigned long long v46;  // [bp-0x158]
    long long v47;  // [bp-0x150]
    char *v48;  // [bp-0x148]
    char v49;  // [bp-0x140]
    char v50;  // [bp-0x130]
    long long v51;  // [bp-0x120]
    char *v52;  // [bp-0x118]
    char *v53;  // [bp-0x110]
    char *v54;  // [bp-0x108]
    long long v55;  // [bp-0x100]
    char *v56;  // [bp-0xf8]
    char *v57;  // [bp-0xf0]
    char *v58;  // [bp-0xe8]
    char *v59;  // [bp-0xe0]
    char *v60;  // [bp-0xd8]
    char *v61;  // [bp-0xd0], Other Possible Types: long long
    char *v62;  // [bp-0xc8], Other Possible Types: long long, unsigned long long
    char *v63;  // [bp-0xc0]
    char *index;  // [bp-0xb8]
    char *v65;  // [bp-0xb0], Other Possible Types: long long, unsigned long long
    char *v66;  // [bp-0xa8], Other Possible Types: long long
    long long v67;  // [bp-0xa0]
    long long v68;  // [bp-0x98]
    unsigned long v69;  // [bp-0x90]
    char *v70;  // [bp-0x10]
    char v71;  // [bp+0x0]

    v70 = &v71;
    v72 = a3;
    count = a0;
    v69 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_5800f8)
    {
        g_530e34 = g_530e26 ^ 146;
        g_530e35 = g_530e27 ^ 65;
        g_530e36 = g_530e28 ^ 132;
        g_530e37 = g_530e29 ^ 108;
        g_530e38 = g_530e2a ^ 13;
        g_530e39 = g_530e2b ^ 184;
        g_530e3a = g_530e2c ^ 167;
        g_530e3b = g_530e2d ^ 150;
        g_530e3c = g_530e2e ^ 14;
        g_530e3d = g_530e2f ^ 254;
        g_530e3e = g_530e30 ^ 143;
        g_530e3f = g_530e31 ^ 70;
        g_530e40 = g_530e32 ^ 175;
        g_530e41 = g_530e33 ^ 37;
        g_530e1f = g_530e18 ^ 200;
        g_530e20 = g_530e19 ^ 104;
        g_530e21 = g_530e1a ^ 11;
        g_530e22 = g_530e1b ^ 155;
        g_530e23 = g_530e1c ^ 32;
        g_530e24 = g_530e1d ^ 9;
        g_530e25 = g_530e1e ^ 60;
        g_530df4 = g_530dea ^ 15;
        g_530df5 = g_530deb ^ 20;
        g_530df6 = g_530dec ^ 243;
        g_530df7 = g_530ded ^ 16;
        g_530df8 = g_530dee ^ 109;
        g_530df9 = g_530def ^ 142;
        g_530dfa = g_530df0 ^ 130;
        g_530dfb = ~(g_530df1);
        g_530dfc = g_530df2 ^ 46;
        g_530dfd = g_530df3 ^ 200;
        g_530de3 = g_530ddc ^ 192;
        g_530de4 = g_530ddd ^ 240;
        g_530de5 = g_530dde ^ 128;
        g_530de6 = g_530ddf ^ 217;
        g_530de7 = g_530de0 ^ 37;
        g_530de8 = g_530de1 ^ 108;
        g_530de9 = g_530de2 ^ 205;
        g_530dd6 = g_530dd0 ^ 55;
        g_530dd7 = g_530dd1 ^ 116;
        g_530dd8 = g_530dd2 ^ 5;
        g_530dd9 = g_530dd3 ^ 0xcc;
        g_530dda = g_530dd4 ^ 0xcc;
        g_530ddb = g_530dd5 ^ 167;
        g_530dc9 = g_530dc2 ^ 109;
        g_530dca = g_530dc3 ^ 82;
        g_530dcb = g_530dc4 ^ 0xdd;
        g_530dcc = g_530dc5 ^ 33;
        g_530dcd = g_530dc6 ^ 49;
        g_530dce = g_530dc7 ^ 168;
        g_530dcf = g_530dc8 ^ 110;
        g_530d3a = g_530d2a ^ 22;
        g_530d3b = g_530d2b ^ 84;
        g_530d3c = g_530d2c ^ 0xaa;
        g_530d3d = g_530d2d ^ 232;
        g_530d3e = g_530d2e ^ 105;
        g_530d3f = g_530d2f ^ 203;
        g_530d40 = g_530d30 ^ 134;
        g_530d41 = g_530d31 ^ 90;
        g_530d42 = g_530d32 ^ 69;
        g_530d43 = g_530d33 ^ 71;
        g_530d44 = g_530d34 ^ 218;
        g_530d45 = g_530d35 ^ 48;
        g_530d46 = g_530d36 ^ 212;
        g_530d47 = g_530d37 ^ 145;
        g_530d48 = g_530d38 ^ 191;
        g_530d49 = g_530d39 ^ 199;
        g_530d92 = g_530d88 ^ 64;
        g_530d93 = g_530d89 ^ 15;
        g_530d94 = g_530d8a ^ 101;
        g_530d95 = g_530d8b ^ 106;
        g_530d96 = g_530d8c ^ 22;
        g_530d97 = g_530d8d ^ 29;
        g_530d98 = g_530d8e ^ 20;
        g_530d99 = g_530d8f ^ 171;
        g_530d9a = g_530d90 ^ 137;
        g_530d9b = g_530d91 ^ 41;
        g_530d50 = g_530d4a ^ 150;
        g_530d51 = g_530d4b ^ 20;
        g_530d52 = g_530d4c ^ 195;
        g_530d53 = g_530d4d ^ 11;
        g_530d54 = g_530d4e ^ 0x88;
        g_530d55 = g_530d4f ^ 93;
        g_530d6d = g_530d64 ^ 46;
        g_530d6e = g_530d65 ^ 206;
        g_530d6f = g_530d66 ^ 123;
        g_530d70 = g_530d67 ^ 169;
        g_530d71 = g_530d68 ^ 39;
        g_530d72 = g_530d69 ^ 95;
        g_530d73 = g_530d6a ^ 174;
        g_530d74 = g_530d6b ^ 0x22;
        g_530d75 = g_530d6c ^ 164;
        g_530dbc = g_530db6 ^ 43;
        g_530dbd = g_530db7 ^ 208;
        g_530dbe = g_530db8 ^ 191;
        g_530dbf = g_530db9 ^ 75;
        g_530dc0 = g_530dba ^ 225;
        g_530dc1 = g_530dbb ^ 86;
        g_530d5d = g_530d56 ^ 160;
        g_530d5e = g_530d57 ^ 157;
        g_530d5f = g_530d58 ^ 112;
        g_530d60 = g_530d59 ^ 197;
        g_530d61 = g_530d5a ^ 161;
        g_530d62 = g_530d5b ^ 29;
        g_530d63 = g_530d5c ^ 20;
        g_530d7b = g_530d76 ^ 81;
        g_530d7c = g_530d77 ^ 33;
        g_530d7d = g_530d78 ^ 97;
        g_530d7e = g_530d79 ^ 181;
        g_530d7f = g_530d7a ^ 28;
        g_530e15 = g_530e12 ^ 91;
        g_530e16 = g_530e13 ^ 243;
        g_530e17 = g_530e14 ^ 83;
        g_530e08 = g_530dfe ^ 0xdd;
        g_530e09 = g_530dff ^ 211;
        g_530e0a = g_530e00 ^ 248;
        g_530e0b = g_530e01 ^ 246;
        g_530e0c = g_530e02 ^ 200;
        g_530e0d = g_530e03 ^ 182;
        g_530e0e = g_530e04 ^ 0x99;
        g_530e0f = g_530e05 ^ 195;
        g_530e10 = g_530e06 ^ 146;
        g_530e11 = g_530e07 ^ 135;
        g_530d11 = g_530d0a ^ 123;
        g_530d12 = g_530d0b ^ 141;
        g_530d13 = g_530d0c ^ 39;
        g_530d14 = g_530d0d ^ 190;
        g_530d15 = g_530d0e ^ 8;
        g_530d16 = g_530d0f ^ 210;
        g_530d17 = g_530d10 ^ 199;
        g_530da1 = g_530d9c ^ 56;
        g_530da2 = g_530d9d ^ 110;
        g_530da3 = g_530d9e ^ 185;
        g_530da4 = g_530d9f ^ 155;
        g_530da5 = g_530da0 ^ 130;
        g_530d84 = g_530d80 ^ 185;
        g_530d85 = g_530d81 ^ 5;
        g_530d86 = g_530d82 ^ 4;
        g_530d87 = g_530d83 ^ 61;
        g_530dae = g_530da6 ^ 117;
        g_530daf = g_530da7 ^ 25;
        g_530db0 = g_530da8 ^ 7;
        g_530db1 = g_530da9 ^ 214;
        g_530db2 = g_530daa ^ 88;
        g_530db3 = g_530dab ^ 130;
        g_530db4 = g_530dac ^ 29;
        g_530db5 = g_530dad ^ 97;
        g_530d21 = g_530d18 ^ 202;
        g_530d22 = g_530d19 ^ 211;
        g_530d23 = g_530d1a ^ 247;
        g_530d24 = g_530d1b ^ 36;
        g_530d25 = g_530d1c ^ 138;
        g_530d26 = g_530d1d ^ 91;
        g_530d27 = g_530d1e ^ 225;
        g_530d28 = g_530d1f ^ 174;
        g_530d29 = g_530d20 ^ 174;
        g_530d05 = g_530d00 ^ 127;
        g_530d06 = g_530d01 ^ 210;
        g_530d07 = g_530d02 ^ 98;
        g_530d08 = g_530d03 ^ 160;
        g_530d09 = g_530d04 ^ 250;
    }
    /* unsupported instruction */
    g_5800f8 = 1;
    v66 = &v38;
    v65 = &v33;
    v62 = &v28;
    v61 = &v23;
    index = &v12;
    v63 = &v7;
    idx = &v0;
    _objc_retain(a2);
    _objc_retain(v72);
    v75 = _objc_msgSend(count, SEL_webView);
    v68 = _objc_retainAutoreleasedReturnValue(v75, SEL_webView);
    v76 = _objc_msgSend(v72, SEL_name);
    v77 = _objc_retainAutoreleasedReturnValue(v76, SEL_name);
    if (((char)_objc_msgSend(v77, SEL_isEqualToString_, &g_531130) & 1))
    {
        v56 = &v17;
        v57 = &v22;
        v58 = &v0;
        v60 = count;
        count = &SEL_body->field_0;
        v78 = _objc_msgSend(v72, SEL_body);
        v67 = a2;
        v79 = _objc_retainAutoreleasedReturnValue(v78, SEL_body);
        v80 = _objc_msgSend(g_4c4208, SEL_class);
        idx = &SEL_isKindOfClass_->field_0;
        v81 = (unsigned int)_objc_msgSend(v79, SEL_isKindOfClass_, v80);
        a2 = v67;
        _objc_release(v79);
        _objc_release(v77);
        if (v81)
        {
            v55 = v72;
            count2 = _objc_msgSend(v72, SEL_body);
            v83 = _objc_retainAutoreleasedReturnValue(count2, SEL_body);
            v84 = _objc_msgSend(v83, SEL_objectForKeyedSubscript_, &g_531370);
            v85 = _objc_retainAutoreleasedReturnValue(v84, SEL_objectForKeyedSubscript_, &g_531370);
            v86 = _objc_msgSend(g_4c40b8, SEL_class);
            if (_objc_msgSend(v85, SEL_isKindOfClass_, v86))
            {
                v87 = _objc_msgSend(v83, SEL_objectForKeyedSubscript_, &g_531370);
                v59 = _objc_retainAutoreleasedReturnValue(v87, SEL_objectForKeyedSubscript_, &g_531370);
            }
            else
            {
                v59 = " \t`";
            }
            _objc_release(v85);
            v88 = _objc_msgSend(v83, SEL_objectForKeyedSubscript_, &g_531270);
            v89 = _objc_retainAutoreleasedReturnValue(v88, SEL_objectForKeyedSubscript_, &g_531270);
            v90 = _objc_msgSend(g_4c40b8, SEL_class);
            v91 = (unsigned int)_objc_msgSend(v89, SEL_isKindOfClass_, v90);
            v54 = &SEL_objectForKeyedSubscript_->field_0;
            if (v91)
            {
                v92 = _objc_msgSend(v83, SEL_objectForKeyedSubscript_, &g_531270);
                v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_objectForKeyedSubscript_, &g_531270);
            }
            else
            {
                v93 = " \t`";
            }
            _objc_release(v89);
            count = &SEL_length->field_0;
            v94 = v59;
            if (_objc_msgSend(v93, SEL_length) && 160 >= _objc_msgSend(v93, SEL_length))
            {
                v52 = &SEL_length->field_0;
                v53 = v93;
                count = v94;
                if (_objc_msgSend(v94, SEL_isEqualToString_, &g_531230))
                {
                    v95 = v60;
                    v96 = _objc_msgSend(v95, SEL_scope);
                    len = _objc_retainAutoreleasedReturnValue(v96, SEL_scope);
                    if (_objc_msgSend(len, v52))
                    {
                        v98 = _objc_msgSend(v95, SEL_pageScopes);
                        v99 = _objc_retainAutoreleasedReturnValue(v98, SEL_pageScopes);
                        _objc_msgSend(v99, SEL_setObject_forKeyedSubscript_, len, v53);
                        _objc_release(v99);
                        v100 = _objc_msgSend(v95, SEL_pageScopes);
                        v101 = _objc_retainAutoreleasedReturnValue(v100, SEL_pageScopes);
                        idx = &g_4be000;
                        count = _objc_msgSend(v101, SEL_count);
                        _objc_release(v101);
                        if (count >= 25)
                        {
                            count = &SEL_firstObject->field_0;
                            idx = &SEL_count->field_0;
                            do
                            {
                                v102 = _objc_msgSend(v95, SEL_pageScopes);
                                v103 = _objc_retainAutoreleasedReturnValue(v102, SEL_pageScopes);
                                v104 = _objc_msgSend(v103, SEL_allKeys);
                                v105 = _objc_retainAutoreleasedReturnValue(v104, SEL_allKeys);
                                v106 = _objc_msgSend(v105, SEL_firstObject);
                                len1 = _objc_retainAutoreleasedReturnValue(v106, SEL_firstObject);
                                v95 = v60;
                                _objc_release(v105);
                                _objc_release(v103);
                                if (!len1)
                                    break;
                                v108 = _objc_msgSend(v95, SEL_pageScopes);
                                v109 = _objc_retainAutoreleasedReturnValue(v108, SEL_pageScopes);
                                _objc_msgSend(v109, SEL_removeObjectForKey_, len1);
                                _objc_release(v109);
                                _objc_release(len1);
                                v110 = _objc_msgSend(v95, SEL_pageScopes);
                                v111 = _objc_retainAutoreleasedReturnValue(v110, SEL_pageScopes);
                                i = _objc_msgSend(v111, SEL_count);
                                _objc_release(v111);
                            } while (24 < i);
                        }
                    }
                    _objc_release(len);
                    a2 = v67;
                    v94 = v59;
                }
                else
                {
                    v113 = _objc_msgSend(v60, SEL_pageScopes);
                    v114 = _objc_retainAutoreleasedReturnValue(v113, SEL_pageScopes);
                    v170 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v114, v54, v53), v54, v53);
                    _objc_release(v114);
                    a2 = v67;
                    if (_objc_msgSend(v170, v52))
                    {
                        if (_objc_msgSend(count, SEL_isEqualToString_, &g_5311f0))
                        {
                            v115 = v83;
                            v116 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v54, " \t`"), v54, " \t`");
                            v117 = _objc_msgSend(g_4c40b8, SEL_class);
                            if (_objc_msgSend(v116, SEL_isKindOfClass_, v117))
                            {
                                v118 = v115;
                                v119 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v115, v54, " \t`"), v54, " \t`");
                            }
                            else
                            {
                                v118 = v115;
                                v119 = " \t`";
                            }
                            idx = v60;
                            _objc_release(v116);
                            if (_objc_msgSend(v119, v52) && 500 >= _objc_msgSend(v119, v52))
                            {
                                _objc_initWeak(&v50, idx);
                                v120 = _objc_msgSend(idx, SEL_ioQueue);
                                v121 = _objc_retainAutoreleasedReturnValue(v120, SEL_ioQueue);
                                v43 = &g_600748;
                                v44 = 0xc2000000;
                                v45 = 2748340;
                                v46 = &g_4a41f8;
                                _objc_retain(v170);
                                v47 = v170;
                                _objc_retain(v119);
                                v48 = v119;
                                _objc_copyWeak(&v49, &v50);
                                _dispatch_async(v121, &v43);
                                _objc_release(v121);
                                _objc_destroyWeak(&v49);
                                _objc_release(v48);
                                _objc_release(v47);
                                _objc_destroyWeak(&v50);
                            }
                            _objc_release(v119);
                            a2 = v67;
                            v83 = v118;
                            goto LABEL_29e464;
                        }
                        else if (_objc_msgSend(count, SEL_isEqualToString_, " \t`"))
                        {
                            v122 = v54;
                            v123 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, " \t`"), v122, " \t`");
                            v124 = _objc_msgSend(g_4c40b8, SEL_class);
                            if (_objc_msgSend(v123, SEL_isKindOfClass_, v124))
                                len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, " \t`"), v122, " \t`");
                            else
                                len2 = " \t`";
                            _objc_release(v123);
                            v126 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, " \t`"), v122, " \t`");
                            v127 = _objc_msgSend(g_4c40b8, SEL_class);
                            if (_objc_msgSend(v126, SEL_isKindOfClass_, v127))
                                v128 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, " \t`"), v122, " \t`");
                            else
                                v128 = " \t`";
                            _objc_release(v126);
                            v129 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, &g_5312f0), v122, &g_5312f0);
                            v130 = _objc_msgSend(g_4c40b8, SEL_class);
                            v51 = v83;
                            if (_objc_msgSend(v129, SEL_isKindOfClass_, v130))
                            {
                                idx = v122;
                                v131 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v122, &g_5312f0), v122, &g_5312f0);
                            }
                            else
                            {
                                idx = v122;
                                v131 = " \t`";
                            }
                            _objc_release(v129);
                            count = v59;
                            v132 = v60;
                            if (_objc_msgSend(len2, v52) && 200 >= _objc_msgSend(len2, v52) && _objc_msgSend(v128, v52) && 500 >= _objc_msgSend(v128, v52))
                            {
                                v133 = _objc_msgSend(v132, SEL_pendingPicker);
                                v134 = _objc_retainAutoreleasedReturnValue(v133, SEL_pendingPicker);
                                _objc_release(v134);
                                if (v134)
                                {
                                    v33 = " \t`";
                                    v135 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
                                    v136 = _objc_retainAutoreleasedReturnValue(v135, SEL_numberWithBool_, 0);
                                    idx1 = v66;
                                    v38 = v136;
                                    v39 = " \t`";
                                    v34 = " \t`";
                                    v35 = " \t`";
                                    v40 = len2;
                                    v41 = v128;
                                    v36 = " \t`";
                                    v37 = " \t`";
                                    v42 = *((long long *)&g_6002d8);
                                    v138 = v65;
                                    v139 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, idx1, v138, 5);
                                    v140 = _objc_retainAutoreleasedReturnValue(v139, SEL_dictionaryWithObjects_forKeys_count_, idx1, v138, 5);
                                    _objc_msgSend(v132, SEL_deliver_expectedScope_, v140, v170);
                                }
                                else
                                {
                                    v66 = v170;
                                    v141 = _objc_msgSend(v132, SEL_presenterForWebView_, v68);
                                    v65 = _objc_retainAutoreleasedReturnValue(v141, SEL_presenterForWebView_, v68);
                                    if (v65)
                                    {
                                        v142 = v131;
                                        v143 = _objc_msgSend(v132, SEL_contentTypesForAccept_, v142);
                                        v140 = _objc_retainAutoreleasedReturnValue(v143, SEL_contentTypesForAccept_, v142);
                                        v144 = _objc_alloc(g_4c4458);
                                        v145 = _objc_msgSend(v144, SEL_initForOpeningContentTypes_asCopy_, v140, 1);
                                        _objc_msgSend(v145, SEL_setDelegate_, v132, 1);
                                        v146 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v51, idx, &g_530ff0), idx, &g_530ff0);
                                        v147 = _objc_msgSend(v146, SEL_boolValue);
                                        _objc_msgSend(v145, SEL_setAllowsMultipleSelection_, v147);
                                        _objc_release(v146);
                                        _objc_msgSend(v132, SEL_setPendingPicker_, v145);
                                        _objc_msgSend(v132, SEL_setPendingRequestId_, len2);
                                        _objc_msgSend(v132, SEL_setPendingToken_, v128);
                                        _objc_msgSend(v132, SEL_setPendingScope_, v66);
                                        v148 = sub_29f9fc(v66);
                                        _objc_msgSend(v132, SEL_setPendingStorageGeneration_, v148);
                                        _objc_initWeak(v57, v132);
                                        idx = v56;
                                        v17 = &g_600748;
                                        v18 = 0xc2000000;
                                        v19 = 2751228;
                                        v20 = &g_4a1628;
                                        _objc_retain(v145);
                                        v21 = v145;
                                        _objc_copyWeak(idx + 40, v57);
                                        _objc_msgSend(v65, SEL_presentViewController_animated_completion_, v145, 1, idx);
                                        _objc_destroyWeak(idx + 40);
                                        _objc_release(v21);
                                        _objc_destroyWeak(v57);
                                        count = v59;
                                    }
                                    else
                                    {
                                        v23 = " \t`";
                                        v149 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
                                        v140 = _objc_retainAutoreleasedReturnValue(v149, SEL_numberWithBool_, 0);
                                        idx2 = v62;
                                        v28 = v140;
                                        v29 = " \t`";
                                        v24 = " \t`";
                                        v25 = " \t`";
                                        v30 = len2;
                                        v31 = v128;
                                        v26 = " \t`";
                                        v27 = " \t`";
                                        v32 = *((long long *)&g_6002d8);
                                        v151 = v61;
                                        v152 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, idx2, v151, 5);
                                        v145 = _objc_retainAutoreleasedReturnValue(v152, SEL_dictionaryWithObjects_forKeys_count_, idx2, v151, 5);
                                        _objc_msgSend(v132, SEL_deliver_expectedScope_, v145, v66);
                                    }
                                    _objc_release(v145);
                                    v136 = v65;
                                    v170 = v66;
                                }
                                _objc_release(v140);
                                _objc_release(v136);
                                a2 = v67;
                            }
                            _objc_release(v131);
                            _objc_release(v128);
                            _objc_release(len2);
                            v83 = v51;
                        }
                        else if (_objc_msgSend(count, SEL_isEqualToString_, &g_530fb0))
                        {
                            v153 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v54, &g_530f70), v54, &g_530f70);
                            v154 = _objc_msgSend(g_4c40b8, SEL_class);
                            if (_objc_msgSend(v153, SEL_isKindOfClass_, v154))
                            {
                                v155 = v83;
                                v156 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v83, v54, &g_530f70), v54, &g_530f70);
                            }
                            else
                            {
                                v155 = v83;
                                v156 = " \t`";
                            }
                            _objc_release(v153);
                            v157 = v156;
                            v158 = _objc_msgSend(g_4c42c0, SEL_URLWithString_, v157);
                            v159 = _objc_retainAutoreleasedReturnValue(v158, SEL_URLWithString_, v157);
                            v160 = _objc_msgSend(v159, SEL_pathComponents);
                            v161 = _objc_retainAutoreleasedReturnValue(v160, SEL_pathComponents);
                            v162 = _objc_msgSend(v159, SEL_scheme);
                            v163 = _objc_retainAutoreleasedReturnValue(v162, SEL_scheme);
                            v164 = _objc_msgSend(v163, SEL_lowercaseString);
                            idx = _objc_retainAutoreleasedReturnValue(v164, SEL_lowercaseString);
                            if (_objc_msgSend(idx, SEL_isEqualToString_, &g_530f30) && _objc_msgSend(v161, SEL_count) == 3)
                            {
                                v165 = _objc_msgSend(v161, SEL_objectAtIndexedSubscript_, 1);
                                v166 = _objc_retainAutoreleasedReturnValue(v165, SEL_objectAtIndexedSubscript_, 1);
                                v66 = v170;
                                if (((char)_objc_msgSend(v166, SEL_isEqualToString_, v66) & 1))
                                {
                                    v167 = _objc_msgSend(v161, SEL_objectAtIndexedSubscript_, 2);
                                    v168 = _objc_retainAutoreleasedReturnValue(v167, SEL_objectAtIndexedSubscript_, 2);
                                    v169 = (unsigned int)sub_29fb5c(v168);
                                    _objc_release(v168);
                                    _objc_release(v166);
                                    _objc_release(idx);
                                    _objc_release(v163);
                                    v170 = v66;
                                    if (!v169)
                                        goto LABEL_29ec18;
                                    v171 = v155;
                                    v172 = v54;
                                    v173 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v155, v172, " \t`"), v172, " \t`");
                                    _objc_msgSend(v173, SEL_doubleValue);
                                    v65 = v174;
                                    _objc_release(v173);
                                    v175 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v171, v172, " \t`"), v172, " \t`");
                                    _objc_msgSend(v175, SEL_doubleValue);
                                    v62 = v174;
                                    _objc_release(v175);
                                    v51 = v171;
                                    v176 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v171, v172, " \t`"), v172, " \t`");
                                    _objc_msgSend(v176, SEL_doubleValue);
                                    _objc_release(v176);
                                    v7 = " \t`";
                                    count1 = _objc_msgSend();
                                    v65 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithDouble_);
                                    v12 = v65;
                                    v8 = " \t`";
                                    v178 = v62 & 0x7fffffffffffffff;
                                    v179 = unsupported_Iop_ZeroHI64ofV128();
                                    v180 = arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v179, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v179, 0x3ff0000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v179, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v179, 0x3ff0000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v179, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v179, 0x3ff0000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                                    if ((char)v180)
                                    {
                                        v185 = arm64g_calculate_condition(v181 | 208, v182, v183, v184);
                                        v186 = arm64g_calculate_condition(196, ((char)v185 ? v178 : 0), ((char)v185 ? 0x7fefffffffffffff : 0), 0);
                                        if (!((char)v186))
                                            goto LABEL_29e9ae;
LABEL_29e9ad:
                                    }
                                    else
                                    {
                                        v187 = arm64g_calculate_condition(v181 | 208, v182, v183, v184);
                                        v188 = arm64g_calculate_condition(192, ((char)v187 ? v178 : 0), ((char)v187 ? 0x7fefffffffffffff : 0), 0);
                                        if ((char)v188)
                                            goto LABEL_29e9ad;
LABEL_29e9ae:
                                    }
                                    v189 = _objc_msgSend();
                                    v62 = _objc_retainAutoreleasedReturnValue(v189, SEL_numberWithDouble_);
                                    v13 = v62;
                                    v9 = " \t`";
                                    v190 = unsupported_Iop_ZeroHI64ofV128();
                                    v191 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v190, 0x4010000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v190, 0x4010000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v190, 0x4010000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v190, 0x4010000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v190, 0x4010000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v190, 0x4010000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                                    v192 = _objc_msgSend();
                                    v61 = _objc_retainAutoreleasedReturnValue(v192, SEL_numberWithDouble_);
                                    v14 = v61;
                                    v10 = " \t`";
                                    v193 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v171, v172, " \t`"), v172, " \t`");
                                    v194 = _objc_msgSend(v193, SEL_boolValue);
                                    v195 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, v194);
                                    v196 = _objc_retainAutoreleasedReturnValue(v195, SEL_numberWithBool_, v194);
                                    v15 = v196;
                                    v11 = " \t`";
                                    v197 = _objc_msgSend(g_4c41d0, SEL_date);
                                    v198 = _objc_retainAutoreleasedReturnValue(v197, SEL_date);
                                    _objc_msgSend(v198, SEL_timeIntervalSince1970);
                                    v199 = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
                                    v200 = _objc_retainAutoreleasedReturnValue(v199, SEL_numberWithDouble_);
                                    v16 = v200;
                                    v201 = index;
                                    v202 = v63;
                                    v203 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, v201, v202, 5);
                                    v204 = _objc_retainAutoreleasedReturnValue(v203, SEL_dictionaryWithObjects_forKeys_count_, v201, v202, 5);
                                    _objc_release(v200);
                                    _objc_release(v198);
                                    _objc_release(v196);
                                    _objc_release(v193);
                                    _objc_release(v61);
                                    _objc_release(v62);
                                    _objc_release(v65);
                                    v205 = _objc_msgSend(v60, SEL_stateQueue);
                                    v206 = _objc_retainAutoreleasedReturnValue(v205, SEL_stateQueue);
                                    idx = v58;
                                    v0 = &g_600748;
                                    v1 = 0xc2000000;
                                    v2 = 2751712;
                                    v3 = &g_4a2100;
                                    _objc_retain(v66);
                                    v4 = v66;
                                    v5 = v161;
                                    v6 = v204;
                                    _objc_retain(v204);
                                    _objc_retain(v161);
                                    _dispatch_async(v206, idx);
                                    _objc_release(v206);
                                    _objc_release(v6);
                                    _objc_release(v5);
                                    _objc_release(v4);
                                    v170 = v66;
                                    _objc_release(v204);
                                    v83 = v51;
                                    _objc_release(v161);
                                    _objc_release(v159);
                                    _objc_release(v156);
                                    a2 = v67;
                                    goto LABEL_29e464;
                                }
                                else
                                {
                                    _objc_release(v166);
                                    v170 = v66;
                                }
                            }
                            _objc_release(idx);
                            _objc_release(v163);
LABEL_29ec18:
                            _objc_release(v161);
                            _objc_release(v159);
                            _objc_release(v156);
                            a2 = v67;
                            v83 = v155;
LABEL_29e464:
                            count = v59;
                        }
                    }
                    v94 = count;
                    _objc_release(v170);
                }
                v93 = v53;
            }
            _objc_release(v93);
            _objc_release(v94);
            _objc_release(v83);
            v72 = v55;
        }
    }
    else
    {
        _objc_release(v77);
    }
    _objc_release(v68);
    _objc_release(v72);
    v207 = _objc_release(a2);
    if (*((long long *)&g_600760) == v69)
        return v207;
    v208 = ___stack_chk_fail();
    _objc_destroyWeak(idx + 40);
    _objc_destroyWeak(count);
    __Unwind_Resume(v208);
}
