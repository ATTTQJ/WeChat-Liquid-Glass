/* Recovered pseudocode
 * Objective-C: -[WCLGHomeGroupsGestureTarget wclgHandleLongPress:]
 * Address: 0x36f250; original size: 4344 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 4.753s
 */

long long sub_36f250(unsigned long a0, unsigned long a1, long long a2)
{
    long long v70;  // x0
    long long count;  // x0
    long long v80;  // x20
    long long count1;  // x0
    long long v82;  // x0
    unsigned long count2;  // x20
    long long v84;  // x2
    unsigned long v85;  // x3
    long long v86;  // x0
    unsigned long long v87;  // x21
    unsigned long long v88;  // x20
    unsigned long long len;  // x21
    unsigned long long v89;  // x22
    unsigned long long v90;  // x0
    unsigned long long v91;  // x20
    long long v92;  // x0
    long long v93;  // x26
    unsigned long long v94;  // x2
    long long v95;  // x0
    long long v96;  // x20
    long long v97;  // x0
    long long v73;  // x0
    long long v98;  // x20
    unsigned long long v99;  // w0
    long long v100;  // x2
    long long v101;  // x0
    unsigned long long v102;  // x0
    long long v103;  // x0
    unsigned long v104;  // x21, Other Possible Types: unsigned long long
    long long v105;  // x0
    long long v106;  // x0
    long long v74;  // x0
    long long v107;  // x0
    long long v108;  // x0
    long long v109;  // x0
    unsigned long v110;  // x26
    long long v111;  // x20
    unsigned long long v112;  // x21
    unsigned long long v113;  // x0
    long long v114;  // x26
    long long v115;  // x0
    unsigned long long v116;  // x0
    long long v75;  // x0
    long long v117;  // x0
    long long v118;  // x8
    long long v119;  // x21
    unsigned long v120;  // x26
    char *v121;  // x4
    long long v122;  // x20
    long long v123;  // x0
    long long len1;  // x21
    char *idx;  // x22
    unsigned long v126;  // x26
    unsigned long long v76;  // x0
    unsigned long v127;  // x22
    long long len2;  // x21
    unsigned long long v129;  // x0
    long long v130;  // x21
    unsigned long v131;  // x24
    long long v132;  // x21
    long long v133;  // x26
    unsigned long v134;  // x24
    long long v135;  // x21
    unsigned long v136;  // x22
    unsigned long long v77;  // x22
    long long v137;  // x0
    long long v138;  // x0
    unsigned long long v139;  // x24
    long long v140;  // x0
    long long v141;  // x0
    unsigned long long v142;  // w0
    long long v143;  // x26
    unsigned long long v144;  // x26
    long long v145;  // x21
    long long v146;  // x22
    unsigned long long v78;  // x21
    unsigned long v147;  // x27
    long long v148;  // x21
    long long v149;  // x0
    unsigned long long v150;  // x24
    long long v151;  // x0
    long long v152;  // x0
    char *v153;  // x20
    unsigned long v154;  // x22
    unsigned long long v79;  // x20
    unsigned long v0;  // [bp-0x2b0]
    unsigned long long v1;  // [bp-0x2a8]
    unsigned long long v2;  // [bp-0x2a0]
    unsigned long long v3;  // [bp-0x298]
    long long v4;  // [bp-0x290]
    long long v5;  // [bp-0x288]
    long long v6;  // [bp-0x280]
    unsigned long long v7;  // [bp-0x278]
    unsigned long v8;  // [bp-0x270]
    unsigned long long v9;  // [bp-0x268]
    unsigned long long v10;  // [bp-0x260]
    unsigned long long v11;  // [bp-0x258]
    long long v12;  // [bp-0x250]
    long long v13;  // [bp-0x248]
    unsigned long v14;  // [bp-0x240]
    unsigned long long v15;  // [bp-0x238]
    unsigned long long v16;  // [bp-0x230]
    unsigned long long v17;  // [bp-0x228]
    long long v18;  // [bp-0x220]
    long long v19;  // [bp-0x218]
    unsigned long v20;  // [bp-0x210]
    unsigned long v21;  // [bp-0x200]
    unsigned long long v22;  // [bp-0x1f8]
    unsigned long long v23;  // [bp-0x1f0]
    unsigned long long v24;  // [bp-0x1e8]
    long long v25;  // [bp-0x1e0]
    unsigned long v26;  // [bp-0x1d8]
    unsigned long v27;  // [bp-0x1d0]
    unsigned long long v28;  // [bp-0x1c8]
    unsigned long long v29;  // [bp-0x1c0]
    unsigned long long v30;  // [bp-0x1b8]
    long long v31;  // [bp-0x1b0]
    long long v32;  // [bp-0x1a8]
    char v33;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0x198]
    unsigned long v35;  // [bp-0x190]
    unsigned long long v36;  // [bp-0x188]
    long long v37;  // [bp-0x180]
    unsigned long v38;  // [bp-0x178]
    long long v39;  // [bp-0x170]
    char v40;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0x158]
    unsigned long v42;  // [bp-0x150]
    unsigned long v43;  // [bp-0x148]
    long long v44;  // [bp-0x140]
    unsigned long v45;  // [bp-0x138]
    unsigned long long v46;  // [bp-0x130]
    long long v47;  // [bp-0x120]
    unsigned long v48;  // [bp-0x118]
    long long v49;  // [bp-0x110]
    unsigned long v50;  // [bp-0x108]
    long long v51;  // [bp-0x100]
    unsigned long v52;  // [bp-0xf8]
    unsigned long v53;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v54;  // [bp-0xe8]
    unsigned long v55;  // [bp-0xe0]
    unsigned long v56;  // [bp-0xd8]
    unsigned long v57;  // [bp-0xd0]
    char *v58;  // [bp-0xc8]
    char *index;  // [bp-0xc0]
    unsigned long long v60;  // [bp-0xb8]
    unsigned long long v61;  // [bp-0xb0]
    long long v62;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v63;  // [bp-0xa0]
    unsigned long long v64;  // [bp-0x98]
    unsigned long long v65;  // [bp-0x90]
    unsigned long long v66;  // [bp-0x88]
    unsigned long v67;  // [bp-0x80]
    char *v68;  // [bp-0x10]
    char v69;  // [bp+0x0]

    v68 = &v69;
    /* unsupported instruction */
    if (!g_581610)
    {
        *((unsigned short *)&g_54fc8c) = g_54fc84 ^ 62869;
        *((unsigned short *)&g_54fc8e) = g_54fc86 ^ 18452;
        *((unsigned short *)&g_54fc90) = g_54fc88 ^ 46798;
        *((unsigned short *)&g_54fc92) = g_54fc8a ^ 24649;
        *((unsigned short *)&g_54fc56) = g_54fc4c ^ 30232;
        *((unsigned short *)&g_54fc58) = g_54fc4e ^ 15712;
        *((unsigned short *)&g_54fc5a) = g_54fc50 ^ 61063;
        *((unsigned short *)&g_54fc5c) = g_54fc52 ^ 53480;
        *((unsigned short *)&g_54fc5e) = g_54fc54 ^ 18118;
        *((unsigned short *)&g_54fc78) = g_54fc6c ^ 36905;
        *((unsigned short *)&g_54fc7a) = g_54fc6e ^ 43026;
        *((unsigned short *)&g_54fc7c) = g_54fc70 ^ 55042;
        *((unsigned short *)&g_54fc7e) = g_54fc72 ^ 21357;
        *((unsigned short *)&g_54fc80) = g_54fc74 ^ 31192;
        *((unsigned short *)&g_54fc82) = g_54fc76 ^ 32780;
        *((unsigned short *)&g_54fc66) = g_54fc60 ^ 60897;
        *((unsigned short *)&g_54fc68) = g_54fc62 ^ 6124;
        *((unsigned short *)&g_54fc6a) = g_54fc64 ^ 41033;
        *((unsigned short *)&g_54fc2e) = g_54fc24 ^ 28534;
        *((unsigned short *)&g_54fc30) = g_54fc26 ^ 8678;
        *((unsigned short *)&g_54fc32) = g_54fc28 ^ 53366;
        *((unsigned short *)&g_54fc34) = g_54fc2a ^ 29027;
        *((unsigned short *)&g_54fc36) = g_54fc2c ^ 26163;
        *((unsigned short *)&g_54fc42) = g_54fc38 ^ 3320;
        *((unsigned short *)&g_54fc44) = g_54fc3a ^ 51215;
        *((unsigned short *)&g_54fc46) = g_54fc3c ^ 48985;
        *((unsigned short *)&g_54fc48) = g_54fc3e ^ 10491;
        *((unsigned short *)&g_54fc4a) = g_54fc40 ^ 10662;
        *((unsigned short *)&g_54fc1a) = g_54fc10 ^ 28983;
        *((unsigned short *)&g_54fc1c) = g_54fc12 ^ 13460;
        *((unsigned short *)&g_54fc1e) = g_54fc14 ^ 26416;
        *((unsigned short *)&g_54fc20) = g_54fc16 ^ 437;
        *((unsigned short *)&g_54fc22) = g_54fc18 ^ 15016;
        *((unsigned short *)&g_54fc06) = g_54fbfc ^ 45563;
        *((unsigned short *)&g_54fc08) = g_54fbfe ^ 45132;
        *((unsigned short *)&g_54fc0a) = g_54fc00 ^ 53005;
        *((unsigned short *)&g_54fc0c) = g_54fc02 ^ 6246;
        *((unsigned short *)&g_54fc0e) = g_54fc04 ^ 31062;
        *((unsigned short *)&g_54fbf6) = g_54fbf0 ^ 52524;
        *((unsigned short *)&g_54fbf8) = g_54fbf2 ^ 28562;
        *((unsigned short *)&g_54fbfa) = g_54fbf4 ^ 35786;
    }
    /* unsupported instruction */
    g_581610 = 1;
    v70 = _objc_retain(a2);
    if (_objc_msgSend(v70, SEL_state) != 1 || !sub_36a330())
        return _objc_release(a2);
    count = _objc_msgSend(a2, SEL_view);
    len = _objc_retainAutoreleasedReturnValue(count, SEL_view);
    v73 = _objc_msgSend(g_4c40a0, SEL_class);
    if (((char)_objc_msgSend(len, SEL_isKindOfClass_, v73) & 1))
    {
        v74 = _objc_msgSend(a2, SEL_view);
        len = _objc_retainAutoreleasedReturnValue(v74, SEL_view);
        _objc_release(len);
        if (!len)
            return _objc_release(a2);
        _objc_msgSend(a2, SEL_locationInView_, len);
        v75 = _objc_msgSend(len, SEL_indexPathForRowAtPoint_);
        v76 = _objc_retainAutoreleasedReturnValue(v75, SEL_indexPathForRowAtPoint_);
        if (v76)
        {
            v58 = &v33;
            index = &v40;
            v56 = SEL_view;
            v77 = len;
            v78 = v76;
            v67 = _objc_retainAutoreleasedReturnValue(sub_36a3ac(v77));
            v79 = _objc_retainAutoreleasedReturnValue(sub_368c4c(v67));
            v64 = v78;
            v65 = v77;
            v66 = v79;
            if (sub_344340(_objc_retain(v78)))
            {
                v80 = sub_365c80(v67);
                if (v80 <= _objc_msgSend(v78, SEL_section))
                {
                    if (sub_3446e4())
                    {
                        count1 = _objc_msgSend(g_4c4198, SEL_sharedManager);
                        v82 = _objc_retainAutoreleasedReturnValue(count1, SEL_sharedManager);
                        count2 = _objc_msgSend(v82, SEL_expandedDisplayIndex);
                        _objc_release(v82);
                        v78 = v64;
                        if (!(count2 >> 63 & 1))
                            goto LABEL_36f790;
                    }
                    else
                    {
                        v78 = v64;
                        count2 = _objc_msgSend(v78, SEL_section) - v80;
LABEL_36f790:
                        v84 = _objc_msgSend(v78, SEL_row);
                        v85 = count2;
                        v86 = _objc_msgSend(g_4c41a0, SEL_indexPathForRow_inSection_, v84, v85);
                        v78 = _objc_retainAutoreleasedReturnValue(v86, SEL_indexPathForRow_inSection_, v84, v85);
                        _objc_release(v78);
                        v79 = v66;
                        goto LABEL_36f7d8;
                    }
                }
            }
            else
            {
LABEL_36f7d8:
                _objc_retain(v78);
                _objc_retain(v79);
                _objc_retain(v78);
                v87 = 0;
                if (v79)
                {
                    v88 = v78;
                    if (v78)
                    {
                        if (sub_344340(_objc_retain(v78)))
                        {
                            v89 = v66;
                            v90 = _objc_retainAutoreleasedReturnValue(sub_36d858(v89, v78), v78);
                        }
                        else
                        {
                            v89 = v66;
                            v90 = _objc_retainAutoreleasedReturnValue(sub_36cf70(v89, v78), v78);
                        }
                        if (!v90)
                            v91 = v78;
                        else
                            v91 = v90;
                        _objc_retain();
                        _objc_release(v78);
                        _objc_release(v90);
                        _objc_retainAutorelease(v91);
                        v63 = v91;
                        if (_objc_msgSend(v89, SEL_respondsToSelector_, SEL_getCellDataAtIndexPath_))
                        {
                            v62 = g_54ef88;
                            v92 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 1);
                            v60 = v78;
                            v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_numberWithBool_, 1);
                            _objc_setAssociatedObject(v89, v62, v93, 1);
                            v78 = v60;
                            _objc_release(v93);
                            v94 = v91;
                            v95 = _objc_msgSend(v89, SEL_getCellDataAtIndexPath_, v94);
                            v87 = _objc_retainAutoreleasedReturnValue(v95, SEL_getCellDataAtIndexPath_, v94);
                            _objc_setAssociatedObject(v66, g_54ef88, 0, 0);
                        }
                        else
                        {
                            v87 = 0;
                        }
                        v88 = v63;
                        _objc_release(v88);
                    }
                }
                else
                {
                    v88 = v78;
                }
                _objc_release(v78);
                _objc_release(v66);
                v63 = v88;
                _objc_retain(v88);
                _objc_release(v78);
                v96 = _objc_retainAutoreleasedReturnValue(sub_33cd84(v87));
                if (_objc_msgSend(v96, SEL_length))
                {
                    v62 = v96;
                    v53 = sub_33f4b4(v87);
                    v52 = SEL_sharedManager;
                    v97 = _objc_msgSend(g_4c4198, SEL_sharedManager);
                    v98 = _objc_retainAutoreleasedReturnValue(v97, SEL_sharedManager);
                    v99 = (unsigned int)sub_344340(v98);
                    v60 = v78;
                    v54 = v87;
                    v55 = SEL_length;
                    if (v99)
                    {
                        v100 = _objc_msgSend(v78, SEL_section);
                        v101 = _objc_msgSend(v98, SEL_displayGroupAtIndex_, v100);
                        v102 = _objc_retainAutoreleasedReturnValue(v101, SEL_displayGroupAtIndex_, v100);
                        goto LABEL_36fa18;
                    }
                    else if (sub_343bc0())
                    {
                        v103 = _objc_msgSend(v98, SEL_currentGroup);
                        v102 = _objc_retainAutoreleasedReturnValue(v103, SEL_currentGroup);
LABEL_36fa18:
                        v104 = v102;
                        if (!v102 || ((char)_objc_msgSend(v104, SEL_isAllGroup) & 1))
                            goto LABEL_36fa70;
                        v105 = _objc_msgSend(v104, SEL_groupID);
                        v106 = _objc_retainAutoreleasedReturnValue(v105, SEL_groupID);
                        v61 = _objc_msgSend(v106, SEL_copy);
                        _objc_release(v106);
                    }
                    else
                    {
                        v104 = 0;
LABEL_36fa70:
                        v61 = 0;
                    }
                    _objc_release(v104);
                    _objc_release(v98);
                    v107 = _objc_alloc(g_4c4238);
                    v108 = _objc_msgSend(v107, SEL_initWithStyle_, 1);
                    _objc_msgSend(v108, SEL_impactOccurred, 1);
                    _objc_release(v108);
                    v109 = _objc_msgSend(v65, SEL_cellForRowAtIndexPath_, v64);
                    v110 = _objc_retainAutoreleasedReturnValue(v109, SEL_cellForRowAtIndexPath_, v64);
                    v111 = v62;
                    _objc_retain(v111);
                    v112 = v67;
                    _objc_retain(v112);
                    _objc_retain(v65);
                    v57 = v110;
                    _objc_retain(v110);
                    _objc_retain(v61);
                    v113 = _objc_msgSend(v111, v55);
                    if (v112 && v113)
                    {
                        v114 = _objc_retainAutoreleasedReturnValue(sub_372dfc(v67));
                        v115 = _objc_msgSend(v114, SEL_presentedViewController);
                        v116 = _objc_retainAutoreleasedReturnValue(v115, SEL_presentedViewController);
                        _objc_release(v116);
                        if (!v116)
                        {
                            v49 = v114;
                            v117 = _objc_msgSend(g_4c4310, SEL_alertControllerWithTitle_message_preferredStyle_, 0, 0, 0);
                            v51 = _objc_retainAutoreleasedReturnValue(v117, SEL_alertControllerWithTitle_message_preferredStyle_, 0, 0, 0);
                            v48 = g_4c4318;
                            v118 = " \t`";
                            if (0 < v53)
                                v118 = " \t`";
                            v47 = v118;
                            v40 = &g_600748;
                            v41 = 0xc2000000;
                            v42 = 3623252;
                            v43 = &g_4a5220;
                            v119 = v62;
                            _objc_retain();
                            v44 = v119;
                            v46 = v53;
                            v120 = v67;
                            _objc_retain(v120);
                            v45 = v120;
                            v50 = SEL_actionWithTitle_style_handler_;
                            v121 = index;
                            v122 = v119;
                            v123 = _objc_msgSend(v48, SEL_actionWithTitle_style_handler_, v47, 0, v121);
                            len1 = _objc_retainAutoreleasedReturnValue(v123, SEL_actionWithTitle_style_handler_, v47, 0, v121);
                            v53 = SEL_addAction_;
                            _objc_msgSend(v51, SEL_addAction_, len1);
                            _objc_release(len1);
                            idx = v58;
                            v33 = &g_600748;
                            v34 = 0xc2000000;
                            v35 = 3624228;
                            v36 = &g_4a5250;
                            _objc_retain(v122);
                            v37 = v122;
                            _objc_retain(v120);
                            v38 = v120;
                            v39 = _objc_retain(v65);
                            v126 = v50;
                            v127 = v53;
                            len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v126, &g_54fd00, 0, idx), v126, &g_54fd00, 0, idx);
                            _objc_msgSend(v51, v127, len2);
                            _objc_release(len2);
                            v129 = _objc_retainAutoreleasedReturnValue(sub_374ef0(v122));
                            _objc_release(v129);
                            if (v129)
                            {
                                v27 = &g_600748;
                                v28 = 0xc2000000;
                                v29 = 3625712;
                                v30 = &g_4a50c0;
                                _objc_retain(v122);
                                v31 = v122;
                                v32 = _objc_retain(v67);
                                v130 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v126, &g_54fdc0, 0, &v27), v126, &g_54fdc0, 0, &v27);
                                _objc_msgSend(v51, v127, v130);
                                _objc_release(v130);
                                _objc_release(v32);
                                _objc_release(v31);
                            }
                            v21 = &g_600748;
                            v22 = 0xc2000000;
                            v23 = 3626968;
                            v24 = &g_4a50c0;
                            _objc_retain(v122);
                            v25 = v122;
                            v131 = v57;
                            _objc_retain(v131);
                            v26 = v131;
                            v132 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v126, &g_54fd80, 0, &v21), v126, &g_54fd80, 0, &v21);
                            v133 = v51;
                            _objc_msgSend(v133, v127, v132);
                            _objc_release(v132);
                            v14 = &g_600748;
                            v15 = 0xc2000000;
                            v16 = 3626984;
                            v17 = &g_4a5250;
                            _objc_retain(v122);
                            v18 = v122;
                            v19 = _objc_retain(v67);
                            _objc_retain(v26);
                            v20 = v26;
                            v134 = v50;
                            v135 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v134, &g_54fe40, 0, &v14), v134, &g_54fe40, 0, &v14);
                            _objc_msgSend(v133, v127, v135);
                            _objc_release(v135);
                            if (_objc_msgSend(v61, v55))
                            {
                                v136 = v134;
                                v137 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4198, v52), v52);
                                v138 = _objc_msgSend(v137, SEL_groupForID_, v61);
                                v139 = _objc_retainAutoreleasedReturnValue(v138, SEL_groupForID_, v61);
                                _objc_release(v137);
                                if (v139 && !((char)_objc_msgSend(v139, SEL_isAllGroup) & 1))
                                {
                                    v140 = _objc_msgSend(v139, SEL_members);
                                    v141 = _objc_retainAutoreleasedReturnValue(v140, SEL_members);
                                    v142 = (unsigned int)_objc_msgSend(v141, SEL_containsObject_, v62);
                                    _objc_release(v141);
                                    if (v142)
                                    {
                                        v8 = &g_600748;
                                        v9 = 0xc2000000;
                                        v10 = 3629100;
                                        v11 = &g_4a50c0;
                                        v12 = _objc_msgSend(v61, SEL_copy);
                                        v13 = _objc_retain(v62);
                                        _objc_retain(v12);
                                        v143 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v136, &g_54fcc0, 0, &v8), v136, &g_54fcc0, 0, &v8);
                                        _objc_msgSend(v51, v53, v143);
                                        _objc_release(v143);
                                        _objc_release(v13);
                                        _objc_release(v12);
                                        _objc_release(v12);
                                    }
                                }
                                _objc_release(v139);
                                v134 = v136;
                            }
                            v0 = &g_600748;
                            v1 = 0xc2000000;
                            v2 = 3629416;
                            v3 = &g_4a5280;
                            v4 = _objc_retain(v67);
                            v5 = _objc_retain(v62);
                            v6 = _objc_retain(v65);
                            v144 = v57;
                            _objc_retain(v144);
                            v7 = v144;
                            v145 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v134, &g_54fd40, 2, &v0), v134, &g_54fd40, 2, &v0);
                            v146 = v51;
                            v147 = v53;
                            _objc_msgSend(v146, v147, v145);
                            _objc_release(v145);
                            v148 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v134, &g_54fe00, 1, 0), v134, &g_54fe00, 1, 0);
                            _objc_msgSend(v146, v147, v148);
                            _objc_release(v148);
                            v149 = _objc_msgSend(v146, SEL_popoverPresentationController);
                            v150 = _objc_retainAutoreleasedReturnValue(v149, SEL_popoverPresentationController);
                            if (v150)
                            {
                                if (v144)
                                    _objc_retain(v144);
                                else
                                    v144 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v49, v56), v56);
                                _objc_msgSend(v150, SEL_setSourceView_, v144);
                                v151 = _objc_msgSend(v144, SEL_bounds);
                                _CGRectGetMidX(v151, SEL_bounds);
                                v152 = _objc_msgSend(v144, SEL_bounds);
                                _CGRectGetMidY(v152, SEL_bounds);
                                _objc_msgSend(v150, SEL_setSourceRect_);
                                _objc_msgSend(v150, SEL_setPermittedArrowDirections_, 15);
                                _objc_release(v144);
                            }
                            v114 = v49;
                            _objc_msgSend(v114, SEL_presentViewController_animated_completion_, v146, 1, 0);
                            _objc_release(v150);
                            _objc_release(v7);
                            _objc_release(v6);
                            _objc_release(v5);
                            _objc_release(v4);
                            _objc_release(v20);
                            _objc_release(v19);
                            _objc_release(v18);
                            _objc_release(v26);
                            _objc_release(v25);
                            v153 = v58;
                            _objc_release(v39);
                            _objc_release(v38);
                            _objc_release(v37);
                            _objc_release(v45);
                            _objc_release(v44);
                            _objc_release(v146);
                        }
                        _objc_release(v114);
                    }
                    _objc_release(v61);
                    v154 = v57;
                    _objc_release(v154);
                    _objc_release(v65);
                    _objc_release(v67);
                    v96 = v62;
                    _objc_release(v96);
                    _objc_release(v154);
                    _objc_release(v61);
                    v87 = v54;
                    v78 = v60;
                }
                _objc_release(v96);
                _objc_release(v87);
                _objc_release(v63);
            }
            len = v65;
            _objc_release(v78);
            _objc_release(v66);
            _objc_release(v67);
        }
        _objc_release();
    }
    _objc_release(len);
    return _objc_release(a2);
}
