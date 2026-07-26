/* Recovered pseudocode
 * Objective-C: +[WCLGGlassPackage performConfidentialityMigrationIfNeeded]
 * Address: 0x2e2c50; original size: 8128 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 7.587s
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

unsigned long long sub_2e2c50(long long a0)
{
    struct_0 *v57;  // x25
    long long count;  // x0
    long long v68;  // x2
    long long count1;  // x0
    long long count2;  // x0
    long long v71;  // x0
    long long v72;  // x28
    long long v73;  // x0
    char i;  // x0
    char v75;  // x22
    char v76;  // x20
    long long v59;  // x0
    long long v77;  // x0
    long long v78;  // x0
    long long v79;  // x0
    long long v80;  // x0
    long long v81;  // x0
    long long v82;  // x23
    char j;  // x0
    char v84;  // x26
    long long v85;  // x0
    long long v60;  // x0
    long long v86;  // x0
    long long v87;  // x20
    long long v88;  // x0
    long long v89;  // x0
    long long v90;  // x0
    long long v91;  // x0
    long long v93;  // x0
    long long v94;  // x0
    long long v95;  // x0
    long long v61;  // x0
    long long v96;  // x0
    long long v97;  // x0
    long long v98;  // x19
    long long v99;  // x2
    long long v100;  // x0
    long long v101;  // x21
    long long v102;  // x2
    long long v103;  // x0
    long long v104;  // x0
    long long v105;  // x0
    long long v62;  // x20
    long long v106;  // x0
    long long v107;  // x21
    long long v108;  // x0
    long long v109;  // x0
    long long v110;  // x21
    long long v111;  // x0
    long long v112;  // x19
    long long v113;  // x0
    long long v114;  // x20
    char k;  // x0
    long long v63;  // x0
    char index;  // x26
    unsigned long len;  // x2
    long long v118;  // x0
    long long v119;  // x24
    unsigned long v120;  // x2
    long long v121;  // x0
    char v122;  // x28
    long long v123;  // x0
    long long v124;  // x0
    unsigned long long v125;  // x0
    long long v64;  // x2
    long long v126;  // x0
    long long v127;  // x22
    long long v128;  // x24
    long long v129;  // x0
    long long v130;  // x0
    unsigned long long v131;  // x0
    long long v132;  // x0
    long long v133;  // x19
    char v134;  // w0
    long long v135;  // x0
    long long v65;  // x0
    long long v136;  // x19
    long long v143;  // x0
    char l;  // x0
    char v145;  // x21
    long long v66;  // x2
    long long v146;  // x0
    long long v147;  // x0
    long long v148;  // x0
    unsigned long long v149;  // x0
    char v150;  // x20
    unsigned long long v151;  // x0
    long long v152;  // x0
    char v0;  // [bp-0x570]
    char v1;  // [bp-0x4f0]
    char v2;  // [bp-0x4b0]
    char v3;  // [bp-0x430]
    unsigned long v4;  // [bp-0x428]
    char v5;  // [bp-0x3f0]
    char v6;  // [bp-0x370]
    unsigned long v7;  // [bp-0x368]
    char v8;  // [bp-0x330]
    char v9;  // [bp-0x2b0]
    char v10;  // [bp-0x2a0]
    char v11;  // [bp-0x290]
    char v12;  // [bp-0x280]
    char v13;  // [bp-0x270], Other Possible Types: long long
    long long v14;  // [bp-0x268]
    long long v15;  // [bp-0x260]
    long long v16;  // [bp-0x258]
    long long v17;  // [bp-0x250]
    char v18;  // [bp-0x240]
    char v19;  // [bp-0x1c0]
    char v20;  // [bp-0x1b0]
    char v21;  // [bp-0x1a0]
    char v22;  // [bp-0x190]
    unsigned long v23;  // [bp-0x180]
    long long v24;  // [bp-0x178]
    long long v25;  // [bp-0x170]
    long long v26;  // [bp-0x158]
    long long v27;  // [bp-0x150]
    long long len2;  // [bp-0x148]
    long long v29;  // [bp-0x140]
    long long v30;  // [bp-0x138]
    char *v31;  // [bp-0x130]
    long long len1;  // [bp-0x128]
    unsigned long v33;  // [bp-0x120]
    long long v34;  // [bp-0x118]
    char *v35;  // [bp-0x110]
    struct_0 *v36;  // [bp-0x108]
    unsigned long v37;  // [bp-0x100]
    char *v38;  // [bp-0xf0]
    unsigned long v39;  // [bp-0xe8]
    unsigned long v40;  // [bp-0xe0]
    char *v41;  // [bp-0xd8]
    char v42;  // [bp-0xd0]
    long long v43;  // [bp-0xc8]
    long long v44;  // [bp-0xc0]
    long long v45;  // [bp-0xb8], Other Possible Types: unsigned long
    long long v46;  // [bp-0xb0], Other Possible Types: unsigned long
    char *idx;  // [bp-0xa8], Other Possible Types: unsigned long
    long long v48;  // [bp-0xa0], Other Possible Types: unsigned long
    char *v49;  // [bp-0x98], Other Possible Types: unsigned long
    char *v50;  // [bp-0x90], Other Possible Types: long long
    unsigned long v51;  // [bp-0x88]
    char *v52;  // [bp-0x80]
    long long v53;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long v54;  // [bp-0x70]
    char *v55;  // [bp-0x10]
    char v56;  // [bp+0x0]

    v55 = &v56;
    v54 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!*((int *)&g_58041c))
    {
        g_53f1ff = g_53f1f0 ^ 95;
        g_53f200 = g_53f1f1 ^ 193;
        g_53f201 = g_53f1f2 ^ 186;
        g_53f202 = g_53f1f3 ^ 0x55;
        g_53f203 = g_53f1f4 ^ 126;
        g_53f204 = g_53f1f5 ^ 7;
        g_53f205 = g_53f1f6 ^ 167;
        g_53f206 = g_53f1f7 ^ 33;
        g_53f207 = g_53f1f8 ^ 157;
        g_53f208 = g_53f1f9 ^ 0x55;
        g_53f209 = g_53f1fa ^ 201;
        g_53f20a = g_53f1fb ^ 242;
        g_53f20b = g_53f1fc ^ 12;
        g_53f20c = g_53f1fd ^ 140;
        g_53f20d = g_53f1fe ^ 20;
        g_53f1da = g_53f1ce ^ 99;
        g_53f1db = g_53f1cf ^ 0xee;
        g_53f1dc = g_53f1d0 ^ 112;
        g_53f1dd = g_53f1d1 ^ 0xee;
        g_53f1de = g_53f1d2 ^ 99;
        g_53f1df = g_53f1d3 ^ 164;
        g_53f1e0 = g_53f1d4 ^ 216;
        g_53f1e1 = g_53f1d5 ^ 195;
        g_53f1e2 = g_53f1d6 ^ 182;
        g_53f1e3 = g_53f1d7 ^ 229;
        g_53f1e4 = g_53f1d8 ^ 18;
        g_53f1e5 = g_53f1d9 ^ 60;
        g_53f1af = g_53f1a2 ^ 65;
        g_53f1b0 = g_53f1a3 ^ 12;
        g_53f1b1 = g_53f1a4 ^ 14;
        g_53f1b2 = g_53f1a5 ^ 97;
        g_53f1b3 = g_53f1a6 ^ 69;
        g_53f1b4 = g_53f1a7 ^ 52;
        g_53f1b5 = g_53f1a8 ^ 188;
        g_53f1b6 = g_53f1a9 ^ 122;
        g_53f1b7 = g_53f1aa ^ 94;
        g_53f1b8 = g_53f1ab ^ 0x77;
        g_53f1b9 = g_53f1ac ^ 140;
        g_53f1ba = g_53f1ad ^ 113;
        g_53f1bb = g_53f1ae ^ 71;
        g_53f190 = g_53f170 ^ 160;
        g_53f191 = g_53f171 ^ 95;
        g_53f192 = g_53f172 ^ 58;
        g_53f193 = g_53f173 ^ 115;
        g_53f194 = g_53f174 ^ 144;
        g_53f195 = g_53f175 ^ 202;
        g_53f196 = g_53f176 ^ 203;
        g_53f197 = g_53f177 ^ 178;
        g_53f198 = g_53f178 ^ 117;
        g_53f199 = g_53f179 ^ 239;
        g_53f19a = g_53f17a ^ 58;
        g_53f19b = g_53f17b ^ 198;
        g_53f19c = g_53f17c ^ 213;
        g_53f19d = g_53f17d ^ 215;
        g_53f19e = g_53f17e ^ 189;
        g_53f19f = g_53f17f ^ 216;
        g_53f1a0 = g_53f180 ^ 208;
        g_53f1a1 = g_53f181 ^ 251;
        g_53f120 = g_53f100 ^ 196;
        g_53f121 = g_53f101 ^ 14;
        g_53f122 = g_53f102 ^ 54;
        g_53f123 = g_53f103 ^ 18;
        g_53f124 = g_53f104 ^ 112;
        g_53f125 = g_53f105 ^ 207;
        g_53f126 = g_53f106 ^ 118;
        g_53f127 = g_53f107 ^ 39;
        g_53f128 = g_53f108 ^ 35;
        g_53f129 = g_53f109 ^ 0x77;
        g_53f12a = g_53f10a ^ 61;
        g_53f12b = g_53f10b ^ 106;
        g_53f12c = g_53f10c ^ 237;
        g_53f12d = g_53f10d ^ 41;
        g_53f12e = g_53f10e ^ 76;
        g_53f12f = g_53f10f ^ 77;
        g_53f130 = g_53f110 ^ 216;
        g_53f0e7 = g_53f0d9 ^ 11;
        g_53f0e8 = g_53f0da ^ 47;
        g_53f0e9 = g_53f0db ^ 67;
        g_53f0ea = g_53f0dc ^ 131;
        g_53f0eb = g_53f0dd ^ 209;
        g_53f0ec = g_53f0de ^ 43;
        g_53f0ed = g_53f0df ^ 134;
        g_53f0ee = g_53f0e0 ^ 194;
        g_53f0ef = g_53f0e1 ^ 108;
        g_53f0f0 = g_53f0e2 ^ 185;
        g_53f0f1 = g_53f0e3 ^ 75;
        g_53f0f2 = g_53f0e4 ^ 25;
        g_53f0f3 = g_53f0e5 ^ 137;
        g_53f0f4 = g_53f0e6 ^ 126;
        g_53f0d4 = g_53f0cf ^ 9;
        g_53f0d5 = g_53f0d0 ^ 168;
        g_53f0d6 = g_53f0d1 ^ 253;
        g_53f0d7 = g_53f0d2 ^ 91;
        g_53f0d8 = g_53f0d3 ^ 0x33;
        g_53f04a = g_53f03e ^ 127;
        g_53f04b = g_53f03f ^ 29;
        g_53f04c = g_53f040 ^ 188;
        g_53f04d = g_53f041 ^ 53;
        g_53f04e = g_53f042 ^ 45;
        g_53f04f = g_53f043 ^ 249;
        g_53f050 = g_53f044 ^ 0x66;
        g_53f051 = g_53f045 ^ 226;
        g_53f052 = g_53f046 ^ 28;
        g_53f053 = g_53f047 ^ 217;
        g_53f054 = g_53f048 ^ 18;
        g_53f055 = g_53f049 ^ 176;
        g_53f0a0 = g_53f09b ^ 142;
        g_53f0a1 = g_53f09c ^ 77;
        g_53f0a2 = g_53f09d ^ 137;
        g_53f0a3 = g_53f09e ^ 31;
        g_53f0a4 = g_53f09f ^ 62;
        g_53f1c5 = g_53f1bc ^ 226;
        g_53f1c6 = g_53f1bd ^ 48;
        g_53f1c7 = g_53f1be ^ 222;
        g_53f1c8 = g_53f1bf ^ 121;
        g_53f1c9 = g_53f1c0 ^ 127;
        g_53f1ca = g_53f1c1 ^ 172;
        g_53f1cb = g_53f1c2 ^ 44;
        g_53f1cc = g_53f1c3 ^ 12;
        g_53f1cd = g_53f1c4 ^ 67;
        g_53f0b2 = g_53f0a5 ^ 82;
        g_53f0b3 = g_53f0a6 ^ 175;
        g_53f0b4 = g_53f0a7 ^ 56;
        g_53f0b5 = g_53f0a8 ^ 236;
        g_53f0b6 = g_53f0a9 ^ 0xaa;
        g_53f0b7 = g_53f0aa ^ 186;
        g_53f0b8 = g_53f0ab ^ 117;
        g_53f0b9 = g_53f0ac ^ 83;
        g_53f0ba = g_53f0ad ^ 30;
        g_53f0bb = g_53f0ae ^ 83;
        g_53f0bc = g_53f0af ^ 253;
        g_53f0bd = g_53f0b0 ^ 79;
        g_53f0be = g_53f0b1 ^ 242;
        g_53f15f = g_53f153 ^ 0xbb;
        g_53f160 = g_53f154 ^ 82;
        g_53f161 = g_53f155 ^ 4;
        g_53f162 = g_53f156 ^ 65;
        g_53f163 = g_53f157 ^ 8;
        g_53f164 = g_53f158 ^ 116;
        g_53f165 = g_53f159 ^ 165;
        g_53f166 = g_53f15a ^ 237;
        g_53f167 = g_53f15b ^ 8;
        g_53f168 = g_53f15c ^ 72;
        g_53f169 = g_53f15d ^ 88;
        g_53f16a = g_53f15e ^ 161;
        g_53f14a = g_53f141 ^ 90;
        g_53f14b = g_53f142 ^ 14;
        g_53f14c = g_53f143 ^ 227;
        g_53f14d = g_53f144 ^ 128;
        g_53f14e = g_53f145 ^ 197;
        g_53f14f = g_53f146 ^ 110;
        g_53f150 = g_53f147 ^ 200;
        g_53f151 = g_53f148 ^ 244;
        g_53f152 = g_53f149 ^ 163;
        g_53f230 = g_53f210 ^ 41;
        g_53f231 = g_53f211 ^ 10;
        g_53f232 = g_53f212 ^ 230;
        g_53f233 = g_53f213 ^ 125;
        g_53f234 = g_53f214 ^ 22;
        g_53f235 = g_53f215 ^ 84;
        g_53f236 = g_53f216 ^ 183;
        g_53f237 = g_53f217 ^ 0x44;
        g_53f238 = g_53f218 ^ 226;
        g_53f239 = g_53f219 ^ 233;
        g_53f23a = g_53f21a ^ 181;
        g_53f23b = g_53f21b ^ 183;
        g_53f23c = g_53f21c ^ 78;
        g_53f23d = g_53f21d ^ 66;
        g_53f23e = g_53f21e ^ 95;
        g_53f23f = g_53f21f ^ 38;
        g_53f240 = g_53f220 ^ 107;
        g_53f241 = g_53f221 ^ 96;
        g_53f242 = g_53f222 ^ 18;
        g_53f243 = g_53f223 ^ 69;
        g_53f244 = g_53f224 ^ 127;
        g_53f1eb = g_53f1e6 ^ 171;
        g_53f1ec = g_53f1e7 ^ 160;
        g_53f1ed = g_53f1e8 ^ 183;
        g_53f1ee = g_53f1e9 ^ 92;
        g_53f1ef = g_53f1ea ^ 89;
        g_53f0c7 = g_53f0bf ^ 18;
        g_53f0c8 = g_53f0c0 ^ 140;
        g_53f0c9 = g_53f0c1 ^ 206;
        g_53f0ca = g_53f0c2 ^ 246;
        g_53f0cb = g_53f0c3 ^ 178;
        g_53f0cc = g_53f0c4 ^ 105;
        g_53f0cd = g_53f0c5 ^ 6;
        g_53f0ce = g_53f0c6 ^ 198;
        g_53f080 = g_53f060 ^ 40;
        g_53f081 = g_53f061 ^ 133;
        g_53f082 = g_53f062 ^ 77;
        g_53f083 = g_53f063 ^ 244;
        g_53f084 = g_53f064 ^ 183;
        g_53f085 = g_53f065 ^ 96;
        g_53f086 = ~(g_53f066);
        g_53f087 = g_53f067 ^ 227;
        g_53f088 = g_53f068 ^ 54;
        g_53f089 = g_53f069 ^ 225;
        g_53f08a = g_53f06a ^ 53;
        g_53f08b = g_53f06b ^ 53;
        g_53f08c = g_53f06c ^ 47;
        g_53f08d = g_53f06d ^ 57;
        g_53f08e = g_53f06e ^ 84;
        g_53f08f = g_53f06f ^ 139;
        g_53f090 = g_53f070 ^ 166;
        g_53f091 = g_53f071 ^ 111;
        g_53f092 = g_53f072 ^ 9;
        g_53f093 = g_53f073 ^ 14;
        g_53f094 = g_53f074 ^ 225;
        g_53f095 = g_53f075 ^ 210;
        g_53f096 = g_53f076 ^ 55;
        g_53f097 = g_53f077 ^ 193;
        g_53f098 = g_53f078 ^ 215;
        g_53f099 = g_53f079 ^ 52;
        g_53f09a = g_53f07a ^ 45;
        g_53f139 = g_53f131 ^ 27;
        g_53f13a = g_53f132 ^ 163;
        g_53f13b = g_53f133 ^ 171;
        g_53f13c = g_53f134 ^ 165;
        g_53f13d = g_53f135 ^ 99;
        g_53f13e = g_53f136 ^ 122;
        g_53f13f = g_53f137 ^ 184;
        g_53f140 = g_53f138 ^ 75;
        g_53f02f = g_53f020 ^ 125;
        g_53f030 = g_53f021 ^ 5;
        g_53f031 = g_53f022 ^ 118;
        g_53f032 = g_53f023 ^ 53;
        g_53f033 = g_53f024 ^ 198;
        g_53f034 = g_53f025 ^ 178;
        g_53f035 = g_53f026 ^ 86;
        g_53f036 = g_53f027 ^ 44;
        g_53f037 = g_53f028 ^ 70;
        g_53f038 = g_53f029 ^ 142;
        g_53f039 = g_53f02a ^ 169;
        g_53f03a = g_53f02b ^ 239;
        g_53f03b = g_53f02c ^ 11;
        g_53f03c = g_53f02d ^ 212;
        g_53f03d = g_53f02e ^ 132;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_58041c) = 1;
    v50 = &v18;
    idx = &v13;
    v49 = &v8;
    v52 = &v6;
    v38 = &v5;
    v41 = &v3;
    v35 = &v2;
    v57 = &v1;
    v31 = &v0;
    _objc_sync_enter(_objc_retain(a0));
    v33 = SEL_standardUserDefaults;
    v59 = _objc_msgSend(g_4c4068, SEL_standardUserDefaults);
    v48 = _objc_retainAutoreleasedReturnValue(v59, SEL_standardUserDefaults);
    if (!((char)_objc_msgSend(v48, SEL_boolForKey_, &g_53f630) & 1))
    {
        v60 = _objc_retainAutoreleasedReturnValue(_NSSearchPathForDirectoriesInDomains(9, 1, 1), 1, 1);
        v61 = _objc_msgSend(v60, SEL_firstObject);
        v62 = _objc_retainAutoreleasedReturnValue(v61, SEL_firstObject);
        _objc_release(v60);
        if (_objc_msgSend(v62, SEL_length))
        {
            v46 = SEL_stringByAppendingString_;
            v63 = _objc_msgSend(&g_53f6f0, SEL_stringByAppendingString_, &g_53f5b0);
            v64 = _objc_retainAutoreleasedReturnValue(v63, SEL_stringByAppendingString_, &g_53f5b0);
            v65 = _objc_msgSend(v62, SEL_stringByAppendingPathComponent_, v64);
            v51 = _objc_retainAutoreleasedReturnValue(v65, SEL_stringByAppendingPathComponent_, v64);
            v23 = v51;
            v66 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f6f0, v46, &g_53f570), v46, &g_53f570);
            count = _objc_msgSend(v62, SEL_stringByAppendingPathComponent_, v66);
            v24 = _objc_retainAutoreleasedReturnValue(count, SEL_stringByAppendingPathComponent_, v66);
            v68 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f530, v46, &g_53f670), v46, &g_53f670);
            count1 = _objc_msgSend(v62, SEL_stringByAppendingPathComponent_, v68);
            v25 = _objc_retainAutoreleasedReturnValue(count1, SEL_stringByAppendingPathComponent_, v68);
            v45 = SEL_arrayWithObjects_count_;
            count2 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v23, 3);
            v53 = _objc_retainAutoreleasedReturnValue(count2, SEL_arrayWithObjects_count_, &v23, 3);
            _objc_release(v25);
            _objc_release(v68);
            _objc_release(v24);
            _objc_release(v66);
            _objc_release(v51);
            _objc_release(v64);
            v71 = _objc_msgSend(g_4c4108, SEL_defaultManager);
            v72 = _objc_retainAutoreleasedReturnValue(v71, SEL_defaultManager);
            v21 = 0;
            v22 = 0;
            v19 = 0;
            v20 = 0;
            v73 = _objc_retain(v53);
            v51 = SEL_countByEnumeratingWithState_objects_count_;
            i = _objc_msgSend(v73, SEL_countByEnumeratingWithState_objects_count_, &v19, v50, 16);
            v44 = v62;
            v36 = &v1;
            if (i)
            {
                v75 = 1;
                do
                {
                    v76 = 0;
                    do
                    {
                        if (0)
                            _objc_enumerationMutation(v53);
                        if (_objc_msgSend(v72, SEL_fileExistsAtPath_, *((long long *)(*((unsigned long long *)((void*)&v19 + 8)) + v76 * 8))))
                            v75 &= _objc_msgSend(v72, SEL_removeItemAtPath_error_, *((long long *)(*((unsigned long long *)((void*)&v19 + 8)) + v76 * 8)), 0);
                        v76 += 1;
                    } while (i != v76);
                    i = _objc_msgSend(v53, v51, &v19, v50, 16);
                } while (i);
            }
            else
            {
                v75 = 1;
            }
            _objc_release(v53);
            v77 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f4f0, v46, &g_53f4b0), v46, &g_53f4b0);
            v13 = v77;
            v78 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f4f0, v46, &g_53f430), v46, &g_53f430);
            v14 = v78;
            v79 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f4f0, v46, &g_53f370), v46, &g_53f370);
            v15 = v79;
            v80 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f4f0, v46, &g_53f470), v46, &g_53f470);
            v16 = v80;
            v81 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(&g_53f4f0, v46, &g_53f5f0), v46, &g_53f5f0);
            v17 = v81;
            v82 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4098, v45, idx, 5), v45, idx, 5);
            _objc_release(v81);
            _objc_release(v80);
            _objc_release(v79);
            _objc_release(v78);
            _objc_release(v77);
            v11 = 0;
            v12 = 0;
            v9 = 0;
            v10 = 0;
            j = _objc_msgSend(_objc_retain(v82), v51, &v9, v49, 16);
            if (j)
            {
                do
                {
                    v84 = 0;
                    do
                    {
                        if (0)
                            _objc_enumerationMutation(v82);
                    } while ((_objc_msgSend(v48, SEL_removeObjectForKey_, *((long long *)(*((unsigned long long *)((void*)&v9 + 8)) + v84 * 8))), v84 = (char)(v84 + 1), j != v84));
                    j = _objc_msgSend(v82, v51, &v9, v49, 16);
                } while (j);
            }
            _objc_release(v82);
            v57 = v36;
            v62 = v44;
            if ((v75 & 1))
                _objc_msgSend(v48, SEL_setBool_forKey_, 1, &g_53f630);
            _objc_msgSend(v48, SEL_synchronize);
            _objc_release(v82);
            _objc_release(v72);
            _objc_release(v53);
        }
        _objc_release(v62);
    }
    _objc_release(v48);
    if ((g_580398 & 1))
    {
LABEL_2e4b28:
        _objc_sync_exit(a0);
        v151 = _objc_release(a0);
        if (*((long long *)&g_600760) == v54)
            return v151;
        v152 = ___stack_chk_fail();
        _objc_sync_exit(a0);
        __Unwind_Resume(v152);
    }
    v85 = _objc_retainAutoreleasedReturnValue(_NSSearchPathForDirectoriesInDomains(9, 1, 1), 1, 1);
    v86 = _objc_msgSend(v85, SEL_firstObject);
    v87 = _objc_retainAutoreleasedReturnValue(v86, SEL_firstObject);
    _objc_release(v85);
    v49 = SEL_length;
    if (!_objc_msgSend(v87, SEL_length))
    {
        _objc_release(v87);
        goto LABEL_2e4b28;
    }
    v88 = _objc_msgSend(g_4c4108, SEL_defaultManager);
    v34 = _objc_retainAutoreleasedReturnValue(v88, SEL_defaultManager);
    v30 = v87;
    v89 = _objc_msgSend(v87, SEL_stringByAppendingPathComponent_, &g_53f3f0);
    v90 = _objc_retainAutoreleasedReturnValue(v89, SEL_stringByAppendingPathComponent_, &g_53f3f0);
    v91 = _objc_msgSend(v90, SEL_stringByAppendingPathComponent_, &g_53f330);
    len1 = _objc_retainAutoreleasedReturnValue(v91, SEL_stringByAppendingPathComponent_, &g_53f330);
    _objc_release(v90);
    if (!(g_580399 & 1))
    {
        if (_objc_msgSend(v34, SEL_fileExistsAtPath_, len1))
            _objc_msgSend(v34, SEL_removeItemAtPath_error_, len1, 0);
        g_580399 = (char)_objc_msgSend(v34, SEL_fileExistsAtPath_, len1) ^ 1;
    }
    v93 = _objc_msgSend(v30, SEL_stringByAppendingPathComponent_, &g_53f6f0);
    v94 = _objc_retainAutoreleasedReturnValue(v93, SEL_stringByAppendingPathComponent_, &g_53f6f0);
    v95 = _objc_msgSend(v94, SEL_stringByAppendingPathComponent_, &g_53f3b0);
    v96 = _objc_retainAutoreleasedReturnValue(v95, SEL_stringByAppendingPathComponent_, &g_53f3b0);
    v97 = _objc_msgSend(v96, SEL_stringByAppendingPathComponent_, &g_53f6b0);
    v98 = _objc_retainAutoreleasedReturnValue(v97, SEL_stringByAppendingPathComponent_, &g_53f6b0);
    _objc_release(v96);
    _objc_release(v94);
    v99 = v98;
    v100 = _objc_msgSend(g_4c4130, SEL_dataWithContentsOfFile_, v99);
    v101 = _objc_retainAutoreleasedReturnValue(v100, SEL_dataWithContentsOfFile_, v99);
    if (!_objc_msgSend(v101, v49))
        g_580398 = 1;
    v102 = v101;
    v103 = _objc_msgSend(g_4c42e8, SEL_JSONObjectWithData_options_error_, v102, 0, 0);
    v50 = _objc_retainAutoreleasedReturnValue(v103, SEL_JSONObjectWithData_options_error_, v102, 0, 0);
    v53 = SEL_class;
    v104 = _objc_msgSend(g_4c4208, SEL_class);
    v51 = SEL_isKindOfClass_;
    v45 = _objc_msgSend(v50, SEL_mutableCopy);
    v27 = v101;
    len2 = v98;
    v105 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v46 = _objc_retainAutoreleasedReturnValue(v105, SEL_sharedConfig);
    v40 = g_4a3e88;
    v106 = _objc_msgSend(v46, SEL_objectForKey_, g_4a3e88);
    v107 = _objc_retainAutoreleasedReturnValue(v106, SEL_objectForKey_, g_4a3e88);
    if (_objc_msgSend(v107, v51, _objc_msgSend(g_4c40b8, v53)))
    {
        v108 = _objc_msgSend(v46, SEL_objectForKey_, v40);
        v29 = _objc_retainAutoreleasedReturnValue(v108, SEL_objectForKey_, v40);
    }
    else
    {
        v29 = " \t`";
    }
    _objc_release(v107);
    v39 = g_4a3ea8;
    v109 = _objc_msgSend(v46, SEL_objectForKey_, g_4a3ea8);
    v110 = _objc_retainAutoreleasedReturnValue(v109, SEL_objectForKey_, g_4a3ea8);
    if (_objc_msgSend(v110, v51, _objc_msgSend(g_4c40b8, v53)))
    {
        v111 = _objc_msgSend(v46, SEL_objectForKey_, v39);
        v112 = _objc_retainAutoreleasedReturnValue(v111, SEL_objectForKey_, v39);
    }
    else
    {
        v112 = " \t`";
    }
    _objc_release(v110);
    v44 = _objc_retainAutoreleasedReturnValue(sub_240504(v29));
    v26 = v112;
    v43 = _objc_retainAutoreleasedReturnValue(sub_240504(v112));
    memset(v52, 0, 64);
    v113 = _objc_msgSend(v50, SEL_allKeys);
    v114 = _objc_retainAutoreleasedReturnValue(v113, SEL_allKeys);
    v37 = SEL_countByEnumeratingWithState_objects_count_;
    k = _objc_msgSend(v114, SEL_countByEnumeratingWithState_objects_count_, v52, v38, 16);
    if (k)
    {
        v36 = v57;
        v42 = 0;
        do
        {
            index = 0;
            idx = SEL_removeObjectForKey_;
            v48 = SEL_setObject_forKey_;
            do
            {
                if (0)
                    _objc_enumerationMutation(v114);
                len = *((long long *)(v7 + index * 8));
                v118 = _objc_msgSend(v50, SEL_objectForKeyedSubscript_, len);
                v119 = _objc_retainAutoreleasedReturnValue(v118, SEL_objectForKeyedSubscript_, len);
                if (_objc_msgSend(v119, v51, _objc_msgSend(g_4c4208, v53)))
                {
                    v120 = len;
                    v121 = _objc_msgSend(v50, SEL_objectForKeyedSubscript_, v120);
                    v122 = _objc_retainAutoreleasedReturnValue(v121, SEL_objectForKeyedSubscript_, v120);
                }
                else
                {
                    v122 = 0;
                }
                _objc_release(v119);
                v123 = _objc_msgSend(v122, SEL_objectForKeyedSubscript_, &g_53f2f0);
                v124 = _objc_retainAutoreleasedReturnValue(v123, SEL_objectForKeyedSubscript_, &g_53f2f0);
                v125 = _objc_msgSend(v124, SEL_isEqualToString_, &g_53f2b0);
                _objc_release(v124);
                if (((char)v125 & 1))
                {
                    v126 = _objc_msgSend(v122, SEL_objectForKeyedSubscript_, &g_53f270);
                    v127 = _objc_retainAutoreleasedReturnValue(v126, SEL_objectForKeyedSubscript_, &g_53f270);
                    v128 = " \t`";
                    if (_objc_msgSend(v127, v51, _objc_msgSend(g_4c40b8, v53)))
                    {
                        v129 = _objc_msgSend(v122, SEL_objectForKeyedSubscript_, &g_53f270);
                        v128 = _objc_retainAutoreleasedReturnValue(v129, SEL_objectForKeyedSubscript_, &g_53f270);
                    }
                    _objc_release(v127);
                    if (_objc_msgSend(v128, v49) && sub_2423dc(v128))
                    {
                        if (_objc_msgSend(v128, SEL_isEqualToString_, v44))
                        {
                            _objc_msgSend(v46, v48, " \t`", v40);
                            *((unsigned int *)&(&v42)[4]) = 1;
                        }
                        if (_objc_msgSend(v128, SEL_isEqualToString_, v43))
                        {
                            _objc_msgSend(v46, v48, " \t`", v39);
                            *((unsigned int *)&(&v42)[4]) = 1;
                        }
                        _objc_msgSend(v45, idx, len);
                        *((unsigned int *)&v42) = 1;
                    }
                    _objc_release(v128);
                }
                _objc_release(v122);
                index += 1;
            } while (k != index);
            k = _objc_msgSend(v114, v37, v52, v38, 16);
        } while (k);
        _objc_release(v114);
        if (((char)*((unsigned int *)((void*)&v42 + 4)) & 1))
        {
            _objc_msgSend(v46, SEL_flush);
            v130 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4068, v33), v33);
            v131 = _objc_msgSend(v130, SEL_synchronize);
            _objc_release(v130);
        }
        if (!(*((unsigned int *)&v42) & 1))
            goto LABEL_2e4800;
        if (_objc_msgSend(v45, SEL_count))
        {
            v132 = _objc_msgSend(g_4c42e8, SEL_dataWithJSONObject_options_error_, v45, 1, 0);
            v133 = _objc_retainAutoreleasedReturnValue(v132, SEL_dataWithJSONObject_options_error_, v45, 1, 0);
            if (_objc_msgSend(v133, v49))
            {
                v134 = _objc_msgSend(v133, SEL_writeToFile_atomically_, len2, 1);
                _objc_release(v133);
                if (v134)
                    goto LABEL_2e4960;
            }
            else
            {
                _objc_release(v133);
            }
        }
        _objc_msgSend(v34, SEL_removeItemAtPath_error_, len2, 0);
        if ((_objc_msgSend(v34, SEL_fileExistsAtPath_, len2) & 1))
            goto LABEL_0x2e4aa0;
LABEL_2e4960:
        memset(v36, 0, 64);
        v135 = _objc_msgSend(v45, SEL_allValues);
        v136 = _objc_retainAutoreleasedReturnValue(v135, SEL_allValues);
        if (!_objc_msgSend(v136, v37, v36, v31, 16))
            goto LABEL_2e4a84;
    }
    else
    {
        _objc_release(v114);
LABEL_2e4800:
        memset(v41, 0, 64);
        v143 = _objc_msgSend(v45, SEL_allValues);
        v136 = _objc_retainAutoreleasedReturnValue(v143, SEL_allValues);
        l = _objc_msgSend(v136, v37, v41, v35, 16);
        if (l)
        {
            do
            {
                v145 = 0;
                do
                {
                    if (0)
                        _objc_enumerationMutation(v136);
                    v146 = _objc_msgSend(g_4c4208, v53);
                    if (!_objc_msgSend(*((long long *)(v4 + v145 * 8)), v51, v146))
                        continue;
                    v147 = _objc_msgSend(*((long long *)(v4 + v145 * 8)), SEL_objectForKeyedSubscript_, &g_53f2f0);
                    v148 = _objc_retainAutoreleasedReturnValue(v147, SEL_objectForKeyedSubscript_, &g_53f2f0);
                    v149 = _objc_msgSend(v148, SEL_isEqualToString_, &g_53f2b0);
                    _objc_release(v148);
                } while ((v145 = (char)(v145 + 1), l != v145));
                l = _objc_msgSend(v136, v37, v41, v35, 16);
            } while (l);
        }
LABEL_2e4a84:
        v150 = 1;
    }
}
