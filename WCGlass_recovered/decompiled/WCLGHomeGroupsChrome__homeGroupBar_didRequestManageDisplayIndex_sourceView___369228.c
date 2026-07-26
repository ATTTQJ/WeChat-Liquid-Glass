/* Recovered pseudocode
 * Objective-C: -[WCLGHomeGroupsChrome homeGroupBar:didRequestManageDisplayIndex:sourceView:]
 * Address: 0x369228; original size: 3424 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.901s
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[31];
    long long field_20;
} struct_0;

long long sub_369228(long long a0, unsigned long a1, unsigned long a2, long long a3, long long a4)
{
    long long len;  // x19
    long long count;  // x0
    long long v62;  // x20
    long long count1;  // x0
    unsigned int v64;  // w27
    long long v65;  // x23
    long long count2;  // x0
    long long v67;  // x0
    long long v68;  // x0
    long long v69;  // x0
    long long v70;  // x2
    long long v71;  // x0
    unsigned int v54;  // x21
    unsigned long v72;  // x27
    unsigned long v73;  // x19
    long long v74;  // x0
    long long len1;  // x22
    long long len2;  // x22
    unsigned long v77;  // x27
    long long v78;  // x22
    long long v79;  // x9
    long long v80;  // x22
    long long v81;  // x22
    long long v55;  // x0
    unsigned long v82;  // x25
    unsigned long v83;  // x27
    long long v84;  // x22
    long long v85;  // x28
    struct_0 *index;  // x24
    long long v87;  // x22
    long long v88;  // x2
    long long v89;  // x22
    long long v90;  // x22
    long long v91;  // x22
    long long v56;  // x0
    long long v92;  // x0
    unsigned int v93;  // x0
    long long v94;  // x0
    long long v95;  // x0
    long long v96;  // x26
    long long v97;  // x0
    long long v98;  // x0
    long long v99;  // x0
    long long v100;  // x0
    long long v101;  // x0
    long long v57;  // x0
    long long v102;  // x0
    long long v103;  // x0
    long long v104;  // x0
    long long v105;  // x0
    unsigned long long v58;  // x20
    long long v59;  // x20
    long long v60;  // x0
    unsigned int v61;  // x0
    char v0;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x238]
    unsigned long v2;  // [bp-0x230]
    unsigned long v3;  // [bp-0x228]
    long long v4;  // [bp-0x220]
    char v5;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x208]
    unsigned long v7;  // [bp-0x200]
    unsigned long v8;  // [bp-0x1f8]
    unsigned int v9;  // [bp-0x1f0]
    char v10;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1d8]
    unsigned long v12;  // [bp-0x1d0]
    unsigned long v13;  // [bp-0x1c8]
    long long v14;  // [bp-0x1c0]
    unsigned long v15;  // [bp-0x1b0]
    unsigned long long v16;  // [bp-0x1a8]
    unsigned long long v17;  // [bp-0x1a0]
    unsigned long long v18;  // [bp-0x198]
    long long v19;  // [bp-0x190]
    unsigned long v20;  // [bp-0x180]
    unsigned long long v21;  // [bp-0x178]
    unsigned long long v22;  // [bp-0x170]
    unsigned long long v23;  // [bp-0x168]
    long long v24;  // [bp-0x160]
    char v25;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x148]
    unsigned long v27;  // [bp-0x140]
    unsigned long long v28;  // [bp-0x138]
    long long v29;  // [bp-0x130]
    long long v30;  // [bp-0x128]
    unsigned long v31;  // [bp-0x120]
    unsigned long long v32;  // [bp-0x118]
    unsigned long long v33;  // [bp-0x110]
    unsigned long long v34;  // [bp-0x108]
    long long v35;  // [bp-0x100]
    long long v36;  // [bp-0xf8]
    char *idx;  // [bp-0xf0]
    unsigned int v38;  // [bp-0xe8]
    long long v39;  // [bp-0xe0]
    long long v40;  // [bp-0xd8]
    long long v41;  // [bp-0xd0]
    long long v42;  // [bp-0xc8]
    unsigned int v43;  // [bp-0xbc]
    unsigned long v44;  // [bp-0xb8]
    long long v45;  // [bp-0xb0]
    struct_0 *v46;  // [bp-0xa8]
    char *idx1;  // [bp-0xa0]
    char *idx2;  // [bp-0x98]
    unsigned int v49;  // [bp-0x90]
    char *v50;  // [bp-0x10]
    char v51;  // [bp+0x0]

    v50 = &v51;
    len = a4;
    /* unsupported instruction */
    if (!g_581520)
    {
        *((unsigned short *)&g_54f5ae) = g_54f5a2 ^ 22465;
        *((unsigned short *)&g_54f5b0) = g_54f5a4 ^ 18181;
        *((unsigned short *)&g_54f5b2) = g_54f5a6 ^ 17836;
        *((unsigned short *)&g_54f5b4) = g_54f5a8 ^ 44278;
        *((unsigned short *)&g_54f5b6) = g_54f5aa ^ 54076;
        *((unsigned short *)&g_54f5b8) = g_54f5ac ^ 3577;
        *((unsigned short *)&g_54f59a) = g_54f592 ^ 35318;
        *((unsigned short *)&g_54f59c) = g_54f594 ^ 27003;
        *((unsigned short *)&g_54f59e) = g_54f596 ^ 10643;
        *((unsigned short *)&g_54f5a0) = g_54f598 ^ 10883;
        *((unsigned short *)&g_54f580) = g_54f57a ^ 41033;
        *((unsigned short *)&g_54f582) = g_54f57c ^ 21241;
        *((unsigned short *)&g_54f584) = g_54f57e ^ 29746;
        *((unsigned short *)&g_54f574) = g_54f56e ^ 15050;
        *((unsigned short *)&g_54f576) = g_54f570 ^ 50358;
        *((unsigned short *)&g_54f578) = g_54f572 ^ 47363;
        *((unsigned short *)&g_54f564) = g_54f55a ^ 5552;
        *((unsigned short *)&g_54f566) = g_54f55c ^ 60637;
        *((unsigned short *)&g_54f568) = g_54f55e ^ 12955;
        *((unsigned short *)&g_54f56a) = g_54f560 ^ 0x9494;
        *((unsigned short *)&g_54f56c) = g_54f562 ^ 8622;
        *((unsigned short *)&g_54f550) = g_54f546 ^ 64130;
        *((unsigned short *)&g_54f552) = g_54f548 ^ 30742;
        *((unsigned short *)&g_54f554) = g_54f54a ^ 1207;
        *((unsigned short *)&g_54f556) = g_54f54c ^ 50532;
        *((unsigned short *)&g_54f558) = g_54f54e ^ 40097;
        *((unsigned short *)&g_54f53c) = g_54f532 ^ 1074;
        *((unsigned short *)&g_54f53e) = g_54f534 ^ 55511;
        *((unsigned short *)&g_54f540) = g_54f536 ^ 50589;
        *((unsigned short *)&g_54f542) = g_54f538 ^ 23545;
        *((unsigned short *)&g_54f544) = g_54f53a ^ 16837;
        *((unsigned short *)&g_54f58c) = g_54f586 ^ 63323;
        *((unsigned short *)&g_54f58e) = g_54f588 ^ 47632;
        *((unsigned short *)&g_54f590) = g_54f58a ^ 1010;
        *((unsigned short *)&g_54f510) = g_54f502 ^ 24785;
        *((unsigned short *)&g_54f512) = g_54f504 ^ 1863;
        *((unsigned short *)&g_54f514) = g_54f506 ^ 39231;
        *((unsigned short *)&g_54f516) = g_54f508 ^ 18493;
        *((unsigned short *)&g_54f518) = g_54f50a ^ 42983;
        *((unsigned short *)&g_54f51a) = g_54f50c ^ 31720;
        *((unsigned short *)&g_54f51c) = g_54f50e ^ 58820;
        *((unsigned short *)&g_54f528) = g_54f51e ^ 25779;
        *((unsigned short *)&g_54f52a) = g_54f520 ^ 35092;
        *((unsigned short *)&g_54f52c) = g_54f522 ^ 11725;
        *((unsigned short *)&g_54f52e) = g_54f524 ^ 60465;
        *((unsigned short *)&g_54f530) = g_54f526 ^ 26115;
        *((unsigned short *)&g_54f4f0) = g_54f4d0 ^ 10336;
        *((unsigned short *)&g_54f4f2) = g_54f4d2 ^ 58109;
        *((unsigned short *)&g_54f4f4) = g_54f4d4 ^ 36957;
        *((unsigned short *)&g_54f4f6) = g_54f4d6 ^ 52201;
        *((unsigned short *)&g_54f4f8) = g_54f4d8 ^ 15431;
        *((unsigned short *)&g_54f4fa) = g_54f4da ^ 2564;
        *((unsigned short *)&g_54f4fc) = g_54f4dc ^ 2555;
        *((unsigned short *)&g_54f4fe) = g_54f4de ^ 44329;
        *((unsigned short *)&g_54f500) = g_54f4e0 ^ 13816;
    }
    /* unsupported instruction */
    g_581520 = 1;
    _objc_retain(len);
    count = _objc_msgSend(a0, SEL_controller);
    v54 = _objc_retainAutoreleasedReturnValue(count, SEL_controller);
    _objc_retain(v54);
    _objc_retain(len);
    if (v54)
    {
        v46 = &v5;
        idx1 = &v25;
        idx2 = &v10;
        v55 = _objc_msgSend(g_4c4198, SEL_sharedManager);
        v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_sharedManager);
        v57 = _objc_msgSend(v56, SEL_displayGroupAtIndex_, a3);
        v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_displayGroupAtIndex_, a3);
        _objc_release(v56);
        v49 = v58;
        if (v49)
        {
            v59 = _objc_retainAutoreleasedReturnValue(sub_372dfc(v54));
            v60 = _objc_msgSend(v59, SEL_presentedViewController);
            v61 = _objc_retainAutoreleasedReturnValue(v60, SEL_presentedViewController);
            _objc_release(v61);
            if (!v61)
            {
                idx = &v0;
                v38 = len;
                v40 = v59;
                v62 = v49;
                count1 = _objc_msgSend(v62, SEL_groupID);
                v42 = _objc_retainAutoreleasedReturnValue(count1, SEL_groupID);
                v64 = _objc_msgSend(v62, SEL_isAllGroup);
                v65 = v62;
                count2 = _objc_msgSend(g_4c4198, SEL_sharedManager);
                v45 = _objc_retainAutoreleasedReturnValue(count2, SEL_sharedManager);
                v67 = _objc_msgSend(v45, SEL_displayGroups);
                v68 = _objc_retainAutoreleasedReturnValue(v67, SEL_displayGroups);
                v39 = _objc_msgSend(v68, SEL_count);
                _objc_release(v68);
                v69 = _objc_msgSend(v62, SEL_title);
                v70 = _objc_retainAutoreleasedReturnValue(v69, SEL_title);
                v71 = _objc_msgSend(g_4c4310, SEL_alertControllerWithTitle_message_preferredStyle_, v70, 0, 0);
                v41 = _objc_retainAutoreleasedReturnValue(v71, SEL_alertControllerWithTitle_message_preferredStyle_, v70, 0, 0);
                _objc_release(v70);
                v43 = v64;
                if (v64)
                {
                    v72 = SEL_actionWithTitle_style_handler_;
                    v73 = SEL_addAction_;
                }
                else
                {
                    v31 = &g_600748;
                    v32 = 0xc2000000;
                    v33 = 3616500;
                    v34 = &g_4a50c0;
                    _objc_retain(v54);
                    v35 = v54;
                    _objc_retain(v65);
                    v36 = v65;
                    v72 = SEL_actionWithTitle_style_handler_;
                    v74 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_54f860, 0, &v31);
                    len1 = _objc_retainAutoreleasedReturnValue(v74, SEL_actionWithTitle_style_handler_, &g_54f860, 0, &v31);
                    v73 = SEL_addAction_;
                    _objc_msgSend(v41, SEL_addAction_, len1);
                    _objc_release(len1);
                    _objc_release(v36);
                    _objc_release(v35);
                }
                v25 = &g_600748;
                v26 = 0xc2000000;
                v27 = 3616876;
                v28 = &g_4a50c0;
                _objc_retain(v54);
                *((unsigned int *)&v29) = v54;
                _objc_retain(v65);
                v30 = v65;
                v44 = v72;
                len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v72, &g_54f7a0, 0, idx1), v72, &g_54f7a0, 0, idx1);
                _objc_msgSend(v41, v73, len2);
                _objc_release(len2);
                v77 = v73;
                if (v43 && _objc_msgSend(v45, SEL_isAllGroupTitleCustomized))
                {
                    v78 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v44, &g_54f720, 0, &g_4a50f0), v44, &g_54f720, 0, &g_4a50f0);
                    _objc_msgSend(v41, v77, v78);
                    _objc_release(v78);
                }
                v79 = a3;
                len = v38;
                if (v79 >= 1)
                {
                    v20 = &g_600748;
                    v21 = 0xc0000000;
                    v22 = 3619176;
                    v23 = &g_4a5110;
                    v24 = v79;
                    v80 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v44, &g_54f7e0, 0, &v20), v44, &g_54f7e0, 0, &v20);
                    _objc_msgSend(v41, v77, v80);
                    _objc_release(v80);
                    v79 = a3;
                }
                if (v39 > v79 + 1)
                {
                    v15 = &g_600748;
                    v16 = 0xc0000000;
                    v17 = 3619264;
                    v18 = &g_4a5110;
                    v19 = v79;
                    v81 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v44, &g_54f6e0, 0, &v15), v44, &g_54f6e0, 0, &v15);
                    _objc_msgSend(v41, v77, v81);
                    _objc_release(v81);
                }
                v10 = &g_600748;
                v11 = 0xc2000000;
                v12 = 3619352;
                v13 = &g_4a5130;
                _objc_retain(v54);
                *((unsigned int *)&v14) = v54;
                v82 = v77;
                v83 = v44;
                v84 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v83, &g_54f6a0, 0, idx2), v83, &g_54f6a0, 0, idx2);
                v85 = v41;
                _objc_msgSend(v85, v82, v84);
                _objc_release(v84);
                index = v46;
                v5 = &g_600748;
                v6 = 0xc2000000;
                v7 = 3619360;
                v8 = &g_4a5130;
                _objc_retain(v54);
                v9 = v54;
                v87 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v83, &g_54f620, 0, index), v83, &g_54f620, 0, index);
                _objc_msgSend(v85, v82, v87);
                _objc_release(v87);
                if (_objc_msgSend(v45, SEL_hideAllGroup))
                    v88 = " \t`";
                else
                    v88 = " \t`";
                v89 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(), v83, v88, 0, &g_4a5160);
                _objc_msgSend(v85, v82, v89);
                _objc_release(v89);
                if (!((char)v43 & 1))
                {
                    v0 = &g_600748;
                    v1 = 0xc2000000;
                    v2 = 3619820;
                    v3 = &g_4a5130;
                    v4 = _objc_retain(v42);
                    v90 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v83, &g_54f820, 2, idx), v83, &g_54f820, 2, idx);
                    _objc_msgSend(v85, v82, v90);
                    _objc_release(v90);
                    _objc_release(v4);
                }
                v91 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4318, v83, &g_54f660, 1, 0), v83, &g_54f660, 1, 0);
                _objc_msgSend(v85, v82, v91);
                _objc_release(v91);
                v92 = _objc_msgSend(v85, SEL_popoverPresentationController);
                v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_popoverPresentationController);
                _objc_release(v93);
                if (v93)
                {
                    if (len)
                    {
                        _objc_retain(len);
                        v94 = _objc_msgSend(v85, SEL_popoverPresentationController);
                        v95 = _objc_retainAutoreleasedReturnValue(v94, SEL_popoverPresentationController);
                        _objc_msgSend(v95, SEL_setSourceView_, len);
                        _objc_release(v95);
                        _objc_msgSend(len, SEL_bounds);
                        v96 = len;
                    }
                    else
                    {
                        v97 = _objc_msgSend(v40, SEL_view);
                        v96 = _objc_retainAutoreleasedReturnValue(v97, SEL_view);
                        v98 = _objc_msgSend(v85, SEL_popoverPresentationController);
                        v99 = _objc_retainAutoreleasedReturnValue(v98, SEL_popoverPresentationController);
                        _objc_msgSend(v99, SEL_setSourceView_, v96);
                        index = v46;
                        _objc_release(v99);
                        v100 = _objc_msgSend(v40, SEL_view);
                        v83 = _objc_retainAutoreleasedReturnValue(v100, SEL_view);
                        v101 = _objc_msgSend(v83, SEL_bounds);
                        _CGRectGetMidX(v101, SEL_bounds);
                    }
                    v102 = _objc_msgSend(v85, SEL_popoverPresentationController);
                    v103 = _objc_retainAutoreleasedReturnValue(v102, SEL_popoverPresentationController);
                    _objc_msgSend(v103, SEL_setSourceRect_);
                    _objc_release(v103);
                    if (!len)
                        _objc_release(v83);
                    v104 = _objc_msgSend(v85, SEL_popoverPresentationController);
                    v105 = _objc_retainAutoreleasedReturnValue(v104, SEL_popoverPresentationController);
                    _objc_msgSend(v105, SEL_setPermittedArrowDirections_, 15);
                    _objc_release(v105);
                    _objc_release(v96);
                }
                _objc_msgSend(v40, SEL_presentViewController_animated_completion_, v85, 1, 0);
                _objc_release(index->field_20);
                _objc_release(v14);
                _objc_release(v30);
                v59 = v40;
                _objc_release(v29);
                _objc_release(v85);
                _objc_release(v45);
                _objc_release(v42);
            }
            _objc_release(v59);
        }
        _objc_release(v49);
    }
    _objc_release(len);
    _objc_release(v54);
    _objc_release(v54);
    return _objc_release(len);
}
