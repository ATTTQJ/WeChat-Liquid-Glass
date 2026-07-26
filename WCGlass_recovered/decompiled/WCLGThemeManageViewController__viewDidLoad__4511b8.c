/* Recovered pseudocode
 * Objective-C: -[WCLGThemeManageViewController viewDidLoad]
 * Address: 0x4511b8; original size: 3188 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 4.193s
 */

unsigned long long sub_4511b8(unsigned long len)
{
    long long count;  // x0
    long long len1;  // x21
    long long count1;  // x0
    long long v22;  // x22
    long long count2;  // x0
    long long len2;  // x21
    long long v25;  // x21
    long long v26;  // x0
    long long v27;  // x23
    long long v28;  // x0
    long long v29;  // x26
    long long v30;  // x0
    long long v13;  // x0
    long long v31;  // x0
    long long v32;  // x24
    long long v33;  // x23
    long long v34;  // x0
    long long v35;  // x0
    long long v36;  // x0
    long long v37;  // x0
    long long v38;  // x0
    long long v39;  // x24
    long long v40;  // x0
    long long v14;  // x0
    long long v41;  // x23
    long long v42;  // x23
    long long v43;  // x0
    long long v44;  // x26
    long long v45;  // x0
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x28
    long long v49;  // x0
    long long v50;  // x0
    long long v15;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    long long v54;  // x22
    long long v55;  // x0
    long long v56;  // x23
    long long v57;  // x0
    long long v58;  // x0
    long long v59;  // x0
    long long v60;  // x22
    long long v16;  // x0
    long long v61;  // x23
    long long v62;  // x0
    long long v63;  // x0
    long long v64;  // x0
    long long v65;  // x0
    long long v66;  // x0
    long long v67;  // x0
    long long v68;  // x0
    long long v69;  // x0
    long long v70;  // x0
    long long v17;  // x0
    long long v71;  // x0
    long long v72;  // x0
    long long v73;  // x23
    long long v74;  // x0
    long long v75;  // x0
    long long v76;  // x23
    long long v77;  // x0
    long long v78;  // x22
    long long v79;  // x22
    long long v80;  // x0
    long long v18;  // x21
    long long v81;  // x0
    long long v82;  // x0
    long long v83;  // x0
    long long v84;  // x0
    long long v85;  // x0
    long long v86;  // x0
    long long v87;  // x23
    long long v88;  // x0
    long long v89;  // x0
    long long v90;  // x0
    long long v19;  // x0
    long long v91;  // x23
    long long v92;  // x0
    long long v93;  // x0
    long long v94;  // x0
    long long v95;  // x20
    long long v96;  // x0
    long long v97;  // x22
    unsigned long long v98;  // x0
    long long v20;  // x0
    unsigned long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98]
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    char *v9;  // [bp-0x10]
    char v10;  // [bp+0x0]

    v9 = &v10;
    v8 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_582c44)
    {
        *((unsigned short *)&g_578e74) = g_578e6e ^ 65251;
        *((unsigned short *)&g_578e76) = g_578e70 ^ 39915;
        *((unsigned short *)&g_578e78) = g_578e72 ^ 13871;
        g_578e68 = g_578e62 ^ 8;
        g_578e69 = g_578e63 ^ 0x33;
        g_578e6a = g_578e64 ^ 30;
        g_578e6b = g_578e65 ^ 192;
        g_578e6c = g_578e66 ^ 193;
        g_578e6d = g_578e67 ^ 109;
        *((unsigned short *)&g_578e5c) = g_578e56 ^ 0x99;
        *((unsigned short *)&g_578e5e) = g_578e58 ^ 55411;
        *((unsigned short *)&g_578e60) = g_578e5a ^ 47542;
        *((unsigned short *)&g_578e84) = g_578e7a ^ 52855;
        *((unsigned short *)&g_578e86) = g_578e7c ^ 14832;
        *((unsigned short *)&g_578e88) = g_578e7e ^ 30942;
        *((unsigned short *)&g_578e8a) = g_578e80 ^ 7784;
        *((unsigned short *)&g_578e8c) = g_578e82 ^ 2978;
        *((unsigned short *)&g_578e20) = g_578de0 ^ 33695;
        *((unsigned short *)&g_578e22) = g_578de2 ^ 51804;
        *((unsigned short *)&g_578e24) = g_578de4 ^ 126;
        *((unsigned short *)&g_578e26) = g_578de6 ^ 30213;
        *((unsigned short *)&g_578e28) = g_578de8 ^ 7777;
        *((unsigned short *)&g_578e2a) = g_578dea ^ 8409;
        *((unsigned short *)&g_578e2c) = g_578dec ^ 38103;
        *((unsigned short *)&g_578e2e) = g_578dee ^ 22362;
        *((unsigned short *)&g_578e30) = g_578df0 ^ 39591;
        *((unsigned short *)&g_578e32) = g_578df2 ^ 37722;
        *((unsigned short *)&g_578e34) = g_578df4 ^ 37985;
        *((unsigned short *)&g_578e36) = g_578df6 ^ 49989;
        *((unsigned short *)&g_578e38) = g_578df8 ^ 6035;
        *((unsigned short *)&g_578e3a) = g_578dfa ^ 42544;
        *((unsigned short *)&g_578e3c) = g_578dfc ^ 37942;
        *((unsigned short *)&g_578e3e) = g_578dfe ^ 2769;
        *((unsigned short *)&g_578e40) = g_578e00 ^ 64695;
        *((unsigned short *)&g_578e42) = g_578e02 ^ 5916;
        *((unsigned short *)&g_578e44) = g_578e04 ^ 36756;
        *((unsigned short *)&g_578e46) = g_578e06 ^ 14825;
        *((unsigned short *)&g_578e48) = g_578e08 ^ 47168;
        *((unsigned short *)&g_578e4a) = g_578e0a ^ 23638;
        *((unsigned short *)&g_578e4c) = g_578e0c ^ 57917;
        *((unsigned short *)&g_578e4e) = g_578e0e ^ 52626;
        *((unsigned short *)&g_578e50) = g_578e10 ^ 6382;
        *((unsigned short *)&g_578e52) = g_578e12 ^ 51361;
        *((unsigned short *)&g_578e54) = g_578e14 ^ 63288;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_582c44) = 1;
    v2 = len;
    v3 = g_4c4848;
    _objc_msgSendSuper2(&v2, SEL_viewDidLoad);
    _objc_msgSend(len, SEL_setTitle_, &g_578fb0);
    v7 = SEL_clearColor;
    count = _objc_msgSend(g_4c4090, SEL_clearColor);
    len1 = _objc_retainAutoreleasedReturnValue(count, SEL_clearColor);
    v13 = _objc_msgSend(len, SEL_view);
    v14 = _objc_retainAutoreleasedReturnValue(v13, SEL_view);
    v6 = SEL_setBackgroundColor_;
    _objc_msgSend(v14, SEL_setBackgroundColor_, len1);
    _objc_release(v14);
    _objc_release(len1);
    v15 = _objc_alloc(g_4c4490);
    v16 = _objc_msgSend(len, SEL_view);
    v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_view);
    v4 = SEL_bounds;
    _objc_msgSend(v17, SEL_bounds);
    v18 = _objc_msgSend(v15, SEL_initWithFrame_);
    _objc_msgSend(len, SEL_setBg_, v18);
    _objc_release(v18);
    _objc_release(v17);
    v19 = _objc_msgSend(len, SEL_bg);
    v20 = _objc_retainAutoreleasedReturnValue(v19, SEL_bg);
    _objc_msgSend(v20, SEL_setAutoresizingMask_, 18);
    _objc_release(v20);
    count1 = _objc_msgSend(len, SEL_view);
    v22 = _objc_retainAutoreleasedReturnValue(count1, SEL_view);
    count2 = _objc_msgSend(len, SEL_bg);
    len2 = _objc_retainAutoreleasedReturnValue(count2, SEL_bg);
    _objc_msgSend(v22, SEL_insertSubview_atIndex_, len2, 0);
    _objc_release(len2);
    _objc_release(v22);
    v25 = _objc_alloc_init(g_4c4078);
    _objc_msgSend(len, SEL_setSegBar_, v25);
    _objc_release(v25);
    v26 = _objc_msgSend(len, SEL_view);
    v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_view);
    v28 = _objc_msgSend(len, SEL_segBar);
    v29 = _objc_retainAutoreleasedReturnValue(v28, SEL_segBar);
    _objc_msgSend(v27, SEL_addSubview_, v29);
    _objc_release(v29);
    _objc_release(v27);
    v30 = _objc_alloc(g_4c4468);
    v0 = " \t`";
    v1 = " \t`";
    v31 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v0, 2);
    v32 = _objc_retainAutoreleasedReturnValue(v31, SEL_arrayWithObjects_count_, &v0, 2);
    v33 = _objc_msgSend(v30, SEL_initWithItems_, v32);
    _objc_msgSend(len, SEL_setSeg_, v33);
    _objc_release(v33);
    _objc_release(v32);
    v34 = _objc_msgSend(len, SEL_seg);
    v35 = _objc_retainAutoreleasedReturnValue(v34, SEL_seg);
    _objc_msgSend(v35, SEL_setSelectedSegmentIndex_, 0);
    _objc_release(v35);
    v36 = _objc_msgSend(len, SEL_seg);
    v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_seg);
    _objc_msgSend(v37, SEL_addTarget_action_forControlEvents_, len, SEL_segChanged, 0x1000);
    _objc_release(v37);
    v38 = _objc_msgSend(len, SEL_segBar);
    v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_segBar);
    v40 = _objc_msgSend(len, SEL_seg);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_seg);
    _objc_msgSend(v39, SEL_addSubview_, v41);
    _objc_release(v41);
    _objc_release(v39);
    v42 = _objc_alloc_init(g_4c4158);
    _objc_msgSend(len, SEL_setCurrentLabel_, v42);
    _objc_release(v42);
    v43 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_systemFontOfSize_weight_);
    v45 = _objc_msgSend(len, SEL_currentLabel);
    v46 = _objc_retainAutoreleasedReturnValue(v45, SEL_currentLabel);
    v5 = SEL_setFont_;
    _objc_msgSend(v46, SEL_setFont_, v44);
    _objc_release(v46);
    _objc_release(v44);
    v47 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v48 = _objc_retainAutoreleasedReturnValue(v47, SEL_secondaryLabelColor);
    v49 = _objc_msgSend(len, SEL_currentLabel);
    v50 = _objc_retainAutoreleasedReturnValue(v49, SEL_currentLabel);
    _objc_msgSend(v50, SEL_setTextColor_, v48);
    _objc_release(v50);
    _objc_release(v48);
    v51 = _objc_msgSend(len, SEL_currentLabel);
    v52 = _objc_retainAutoreleasedReturnValue(v51, SEL_currentLabel);
    _objc_msgSend(v52, SEL_setTextAlignment_, 1);
    _objc_release(v52);
    v53 = _objc_msgSend(len, SEL_segBar);
    v54 = _objc_retainAutoreleasedReturnValue(v53, SEL_segBar);
    v55 = _objc_msgSend(len, SEL_currentLabel);
    v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_currentLabel);
    _objc_msgSend(v54, SEL_addSubview_, v56);
    _objc_release(v56);
    _objc_release(v54);
    v57 = _objc_alloc(g_4c40a0);
    v58 = _objc_msgSend(len, SEL_view);
    v59 = _objc_retainAutoreleasedReturnValue(v58, SEL_view);
    _objc_msgSend(v59, v4);
    v60 = _objc_msgSend(v57, SEL_initWithFrame_style_, 0);
    _objc_msgSend(len, SEL_setTableView_, v60);
    _objc_release(v60);
    _objc_release(v59);
    v61 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v7), v7);
    v62 = _objc_msgSend(len, SEL_tableView);
    v63 = _objc_retainAutoreleasedReturnValue(v62, SEL_tableView);
    _objc_msgSend(v63, v6, v61);
    _objc_release(v63);
    _objc_release(v61);
    v64 = _objc_msgSend(len, SEL_tableView);
    v65 = _objc_retainAutoreleasedReturnValue(v64, SEL_tableView);
    _objc_msgSend(v65, SEL_setSeparatorStyle_, 0);
    _objc_release(v65);
    v66 = _objc_msgSend(len, SEL_tableView);
    v67 = _objc_retainAutoreleasedReturnValue(v66, SEL_tableView);
    _objc_msgSend(v67, SEL_setRowHeight_);
    _objc_release(v67);
    v68 = _objc_msgSend(len, SEL_tableView);
    v69 = _objc_retainAutoreleasedReturnValue(v68, SEL_tableView);
    _objc_msgSend(v69, SEL_setDataSource_, len);
    _objc_release(v69);
    v70 = _objc_msgSend(len, SEL_tableView);
    v71 = _objc_retainAutoreleasedReturnValue(v70, SEL_tableView);
    _objc_msgSend(v71, SEL_setDelegate_, len);
    _objc_release(v71);
    v72 = _objc_msgSend(len, SEL_tableView);
    v73 = _objc_retainAutoreleasedReturnValue(v72, SEL_tableView);
    v74 = _objc_msgSend(g_4c46d8, SEL_class);
    _objc_msgSend(v73, SEL_registerClass_forCellReuseIdentifier_, v74, &g_578eb0);
    _objc_release(v73);
    v75 = _objc_msgSend(len, SEL_view);
    v76 = _objc_retainAutoreleasedReturnValue(v75, SEL_view);
    v77 = _objc_msgSend(len, SEL_tableView);
    v78 = _objc_retainAutoreleasedReturnValue(v77, SEL_tableView);
    _objc_msgSend(v76, SEL_addSubview_, v78);
    _objc_release(v78);
    _objc_release(v76);
    v79 = _objc_alloc_init(g_4c4158);
    _objc_msgSend(len, SEL_setEmptyLabel_, v79);
    _objc_release(v79);
    v80 = _objc_msgSend(len, SEL_emptyLabel);
    v81 = _objc_retainAutoreleasedReturnValue(v80, SEL_emptyLabel);
    _objc_msgSend(v81, SEL_setText_, &g_578f70);
    _objc_release(v81);
    v82 = _objc_msgSend(len, SEL_emptyLabel);
    v83 = _objc_retainAutoreleasedReturnValue(v82, SEL_emptyLabel);
    _objc_msgSend(v83, SEL_setNumberOfLines_, 0);
    _objc_release(v83);
    v84 = _objc_msgSend(len, SEL_emptyLabel);
    v85 = _objc_retainAutoreleasedReturnValue(v84, SEL_emptyLabel);
    _objc_msgSend(v85, SEL_setTextAlignment_, 1);
    _objc_release(v85);
    v86 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v87 = _objc_retainAutoreleasedReturnValue(v86, SEL_secondaryLabelColor);
    v88 = _objc_msgSend(len, SEL_emptyLabel);
    v89 = _objc_retainAutoreleasedReturnValue(v88, SEL_emptyLabel);
    _objc_msgSend(v89, SEL_setTextColor_, v87);
    _objc_release(v89);
    _objc_release(v87);
    v90 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v91 = _objc_retainAutoreleasedReturnValue(v90, SEL_systemFontOfSize_);
    v92 = _objc_msgSend(len, SEL_emptyLabel);
    v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_emptyLabel);
    _objc_msgSend(v93, v5, v91);
    _objc_release(v93);
    _objc_release(v91);
    v94 = _objc_msgSend(len, SEL_view);
    v95 = _objc_retainAutoreleasedReturnValue(v94, SEL_view);
    v96 = _objc_msgSend(len, SEL_emptyLabel);
    v97 = _objc_retainAutoreleasedReturnValue(v96, SEL_emptyLabel);
    _objc_msgSend(v95, SEL_addSubview_, v97);
    _objc_release(v97);
    _objc_release(v95);
    v98 = _objc_msgSend(len, SEL_reload);
    if (*((long long *)&g_600760) == v8)
        return v98;
    ___stack_chk_fail();
}
