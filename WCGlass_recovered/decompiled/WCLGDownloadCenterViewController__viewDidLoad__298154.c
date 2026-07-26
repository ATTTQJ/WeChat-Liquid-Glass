/* Recovered pseudocode
 * Objective-C: -[WCLGDownloadCenterViewController viewDidLoad]
 * Address: 0x298154; original size: 3548 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 3.205s
 */

unsigned long long sub_298154(unsigned long len)
{
    long long count;  // x0
    long long len1;  // x21
    long long count1;  // x0
    long long v27;  // x22
    long long count2;  // x0
    long long len2;  // x21
    long long v30;  // x0
    long long v31;  // x0
    unsigned long v32;  // x4
    long long v33;  // x0
    long long v34;  // x22
    long long v35;  // x0
    long long v18;  // x0
    long long v36;  // x0
    long long v37;  // x22
    long long v38;  // x0
    long long v39;  // x24
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x0
    long long v43;  // x23
    long long v44;  // x0
    long long v45;  // x27
    long long v19;  // x0
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x21
    long long v49;  // x23
    long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    long long v54;  // x0
    long long v55;  // x22
    long long v20;  // x0
    long long v56;  // x0
    long long v57;  // x21
    long long v58;  // x0
    long long v59;  // x0
    long long v60;  // x0
    long long v61;  // x21
    long long v62;  // x21
    long long v63;  // x0
    long long v64;  // x0
    long long v65;  // x0
    long long v21;  // x0
    long long v66;  // x0
    long long v67;  // x0
    long long v68;  // x0
    long long v69;  // x0
    long long v70;  // x0
    long long v71;  // x0
    long long v72;  // x0
    long long v73;  // x0
    long long v74;  // x21
    long long v75;  // x0
    long long v22;  // x0
    long long v76;  // x25
    long long v77;  // x0
    long long v78;  // x0
    long long v79;  // x0
    long long v80;  // x21
    long long v81;  // x0
    long long v82;  // x22
    long long v83;  // x0
    long long v84;  // x21
    long long v85;  // x0
    long long v23;  // x21
    long long v86;  // x21
    long long v87;  // x0
    long long v88;  // x22
    long long v89;  // x21
    long long v90;  // x0
    long long v91;  // x0
    long long v92;  // x0
    long long v93;  // x0
    long long v94;  // x0
    long long v95;  // x0
    long long v24;  // x0
    long long v96;  // x0
    long long v97;  // x21
    long long v98;  // x0
    long long v99;  // x0
    long long v100;  // x0
    long long v101;  // x21
    long long v102;  // x0
    long long v103;  // x0
    long long v104;  // x0
    long long v105;  // x0
    long long v25;  // x0
    long long v106;  // x0
    long long v107;  // x20
    long long v108;  // x0
    long long v109;  // x21
    unsigned long long v110;  // x0
    char v0;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    long long v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xb0]
    unsigned long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    char *v8;  // [bp-0x90]
    unsigned long v9;  // [bp-0x88]
    unsigned long v10;  // [bp-0x80]
    long long v11;  // [bp-0x78]
    unsigned long v12;  // [bp-0x70]
    unsigned long v13;  // [bp-0x68]
    char *v14;  // [bp-0x10]
    char v15;  // [bp+0x0]

    v14 = &v15;
    v13 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_57ff0c)
    {
        *((unsigned short *)&g_530396) = g_530390 ^ 62268;
        *((unsigned short *)&g_530398) = g_530392 ^ 48542;
        *((unsigned short *)&g_53039a) = g_530394 ^ 25857;
        g_5302f5 = g_5302f0 ^ 15;
        g_5302f6 = g_5302f1 ^ 100;
        g_5302f7 = g_5302f2 ^ 147;
        g_5302f8 = g_5302f3 ^ 31;
        g_5302f9 = g_5302f4 ^ 139;
        *((unsigned short *)&g_530386) = g_53037c ^ 23769;
        *((unsigned short *)&g_530388) = g_53037e ^ 30448;
        *((unsigned short *)&g_53038a) = g_530380 ^ 38927;
        *((unsigned short *)&g_53038c) = g_530382 ^ 17034;
        *((unsigned short *)&g_53038e) = g_530384 ^ 28620;
        *((unsigned short *)&g_530350) = g_530320 ^ 57382;
        *((unsigned short *)&g_530352) = g_530322 ^ 33011;
        *((unsigned short *)&g_530354) = g_530324 ^ 58769;
        *((unsigned short *)&g_530356) = g_530326 ^ 2383;
        *((unsigned short *)&g_530358) = g_530328 ^ 48472;
        *((unsigned short *)&g_53035a) = g_53032a ^ 17236;
        *((unsigned short *)&g_53035c) = g_53032c ^ 7528;
        *((unsigned short *)&g_53035e) = g_53032e ^ 10416;
        *((unsigned short *)&g_530360) = g_530330 ^ 45405;
        *((unsigned short *)&g_530362) = g_530332 ^ 36533;
        *((unsigned short *)&g_530364) = g_530334 ^ 36876;
        *((unsigned short *)&g_530366) = g_530336 ^ 42173;
        *((unsigned short *)&g_530368) = g_530338 ^ 60109;
        *((unsigned short *)&g_53036a) = g_53033a ^ 56416;
        *((unsigned short *)&g_53036c) = g_53033c ^ 47435;
        *((unsigned short *)&g_53036e) = g_53033e ^ 49015;
        *((unsigned short *)&g_530370) = g_530340 ^ 28606;
        *((unsigned short *)&g_530372) = g_530342 ^ 0xff49;
        *((unsigned short *)&g_530374) = g_530344 ^ 40104;
        *((unsigned short *)&g_530376) = g_530346 ^ 58638;
        *((unsigned short *)&g_530378) = g_530348 ^ 60327;
        *((unsigned short *)&g_53037a) = g_53034a ^ 26225;
        *((unsigned short *)&g_53030c) = g_530306 ^ 31810;
        *((unsigned short *)&g_53030e) = g_530308 ^ 40817;
        *((unsigned short *)&g_530310) = g_53030a ^ 37530;
        *((unsigned short *)&g_5303a6) = g_53039c ^ 21016;
        *((unsigned short *)&g_5303a8) = g_53039e ^ 57535;
        *((unsigned short *)&g_5303aa) = g_5303a0 ^ 15355;
        *((unsigned short *)&g_5303ac) = g_5303a2 ^ 49988;
        *((unsigned short *)&g_5303ae) = g_5303a4 ^ 47824;
        *((unsigned short *)&g_530300) = g_5302fa ^ 9985;
        *((unsigned short *)&g_530302) = g_5302fc ^ 40023;
        *((unsigned short *)&g_530304) = g_5302fe ^ 42304;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57ff0c) = 1;
    v8 = &v0;
    v4 = len;
    v5 = g_4c4780;
    _objc_msgSendSuper2(&v4, SEL_viewDidLoad);
    _objc_msgSend(len, SEL_setTitle_, &g_530410);
    v7 = SEL_clearColor;
    count = _objc_msgSend(g_4c4090, SEL_clearColor);
    len1 = _objc_retainAutoreleasedReturnValue(count, SEL_clearColor);
    v18 = _objc_msgSend(len, SEL_view);
    v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_view);
    v6 = SEL_setBackgroundColor_;
    _objc_msgSend(v19, SEL_setBackgroundColor_, len1);
    _objc_release(v19);
    _objc_release(len1);
    v20 = _objc_alloc(g_4c4490);
    v21 = _objc_msgSend(len, SEL_view);
    v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_view);
    v9 = SEL_bounds;
    _objc_msgSend(v22, SEL_bounds);
    v23 = _objc_msgSend(v20, SEL_initWithFrame_);
    _objc_msgSend(len, SEL_setBg_, v23);
    _objc_release(v23);
    _objc_release(v22);
    v24 = _objc_msgSend(len, SEL_bg);
    v25 = _objc_retainAutoreleasedReturnValue(v24, SEL_bg);
    _objc_msgSend(v25, SEL_setAutoresizingMask_, 18);
    _objc_release(v25);
    count1 = _objc_msgSend(len, SEL_view);
    v27 = _objc_retainAutoreleasedReturnValue(count1, SEL_view);
    count2 = _objc_msgSend(len, SEL_bg);
    len2 = _objc_retainAutoreleasedReturnValue(count2, SEL_bg);
    _objc_msgSend(v27, SEL_insertSubview_atIndex_, len2, 0);
    _objc_release(len2);
    _objc_release(v27);
    v30 = _objc_alloc(g_4c4328);
    v10 = SEL_reload;
    v12 = _objc_msgSend(v30, SEL_initWithBarButtonSystemItem_target_action_, 13, len, SEL_reload);
    v31 = _objc_alloc(g_4c4328);
    v32 = len;
    v11 = _objc_msgSend(v31, SEL_initWithTitle_style_target_action_, &g_530510, 0, v32, SEL_openRedeemCenter);
    _objc_msgSend(v11, SEL_setAccessibilityLabel_, &g_530550, 0, v32, SEL_openRedeemCenter);
    v2 = v12;
    v3 = v11;
    v33 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v2, 2);
    v34 = _objc_retainAutoreleasedReturnValue(v33, SEL_arrayWithObjects_count_, &v2, 2);
    v35 = _objc_msgSend(len, SEL_navigationItem);
    v36 = _objc_retainAutoreleasedReturnValue(v35, SEL_navigationItem);
    _objc_msgSend(v36, SEL_setRightBarButtonItems_, v34);
    _objc_release(v36);
    _objc_release(v34);
    v37 = _objc_alloc_init(g_4c4078);
    _objc_msgSend(len, SEL_setSegBar_, v37);
    _objc_release(v37);
    v38 = _objc_msgSend(g_4c4090, SEL_clearColor);
    v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_clearColor);
    v40 = _objc_msgSend(len, SEL_segBar);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_segBar);
    _objc_msgSend(v41, SEL_setBackgroundColor_, v39);
    _objc_release(v41);
    _objc_release(v39);
    v42 = _objc_msgSend(len, SEL_view);
    v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_view);
    v44 = _objc_msgSend(len, SEL_segBar);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_segBar);
    _objc_msgSend(v43, SEL_addSubview_, v45);
    _objc_release(v45);
    _objc_release(v43);
    v46 = _objc_alloc(g_4c4468);
    v0 = " \t`";
    v1 = " \t`";
    v47 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, v8, 2);
    v48 = _objc_retainAutoreleasedReturnValue(v47, SEL_arrayWithObjects_count_, v8, 2);
    v49 = _objc_msgSend(v46, SEL_initWithItems_, v48);
    _objc_msgSend(len, SEL_setSeg_, v49);
    _objc_release(v49);
    _objc_release(v48);
    v50 = _objc_msgSend(len, SEL_seg);
    v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_seg);
    _objc_msgSend(v51, SEL_setSelectedSegmentIndex_, 0);
    _objc_release(v51);
    v52 = _objc_msgSend(len, SEL_seg);
    v53 = _objc_retainAutoreleasedReturnValue(v52, SEL_seg);
    _objc_msgSend(v53, SEL_addTarget_action_forControlEvents_, len, SEL_segChanged, 0x1000);
    _objc_release(v53);
    v54 = _objc_msgSend(len, SEL_segBar);
    v55 = _objc_retainAutoreleasedReturnValue(v54, SEL_segBar);
    v56 = _objc_msgSend(len, SEL_seg);
    v57 = _objc_retainAutoreleasedReturnValue(v56, SEL_seg);
    _objc_msgSend(v55, SEL_addSubview_, v57);
    _objc_release(v57);
    _objc_release(v55);
    v58 = _objc_alloc(g_4c40a0);
    v59 = _objc_msgSend(len, SEL_view);
    v60 = _objc_retainAutoreleasedReturnValue(v59, SEL_view);
    _objc_msgSend(v60, v9);
    v61 = _objc_msgSend(v58, SEL_initWithFrame_style_, 0);
    _objc_msgSend(len, SEL_setTableView_, v61);
    _objc_release(v61);
    _objc_release(v60);
    v62 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v7), v7);
    v63 = _objc_msgSend(len, SEL_tableView);
    v64 = _objc_retainAutoreleasedReturnValue(v63, SEL_tableView);
    _objc_msgSend(v64, v6, v62);
    _objc_release(v64);
    _objc_release(v62);
    v65 = _objc_msgSend(len, SEL_tableView);
    v66 = _objc_retainAutoreleasedReturnValue(v65, SEL_tableView);
    _objc_msgSend(v66, SEL_setSeparatorStyle_, 0);
    _objc_release(v66);
    v67 = _objc_msgSend(len, SEL_tableView);
    v68 = _objc_retainAutoreleasedReturnValue(v67, SEL_tableView);
    _objc_msgSend(v68, SEL_setDataSource_, len);
    _objc_release(v68);
    v69 = _objc_msgSend(len, SEL_tableView);
    v70 = _objc_retainAutoreleasedReturnValue(v69, SEL_tableView);
    _objc_msgSend(v70, SEL_setDelegate_, len);
    _objc_release(v70);
    v71 = _objc_msgSend(len, SEL_tableView);
    v72 = _objc_retainAutoreleasedReturnValue(v71, SEL_tableView);
    _objc_msgSend(v72, SEL_setRowHeight_);
    _objc_release(v72);
    v73 = _objc_msgSend(len, SEL_tableView);
    v74 = _objc_retainAutoreleasedReturnValue(v73, SEL_tableView);
    v75 = _objc_msgSend(g_4c4498, SEL_class);
    _objc_msgSend(v74, SEL_registerClass_forCellReuseIdentifier_, v75, &g_5304d0);
    _objc_release(v74);
    v76 = _objc_msgSend(g_4c44a0, SEL_new);
    _objc_msgSend(v76, SEL_addTarget_action_forControlEvents_, len, v10, 0x1000);
    v77 = _objc_msgSend(len, SEL_tableView);
    v78 = _objc_retainAutoreleasedReturnValue(v77, SEL_tableView);
    _objc_msgSend(v78, SEL_setRefreshControl_, v76);
    _objc_release(v78);
    v79 = _objc_msgSend(len, SEL_view);
    v80 = _objc_retainAutoreleasedReturnValue(v79, SEL_view);
    v81 = _objc_msgSend(len, SEL_tableView);
    v82 = _objc_retainAutoreleasedReturnValue(v81, SEL_tableView);
    _objc_msgSend(v80, SEL_addSubview_, v82);
    _objc_release(v82);
    _objc_release(v80);
    v83 = _objc_alloc(g_4c44a8);
    v84 = _objc_msgSend(v83, SEL_initWithActivityIndicatorStyle_, 100);
    _objc_msgSend(len, SEL_setSpinner_, v84);
    _objc_release(v84);
    v85 = _objc_msgSend(len, SEL_view);
    v86 = _objc_retainAutoreleasedReturnValue(v85, SEL_view);
    v87 = _objc_msgSend(len, SEL_spinner);
    v88 = _objc_retainAutoreleasedReturnValue(v87, SEL_spinner);
    _objc_msgSend(v86, SEL_addSubview_, v88);
    _objc_release(v88);
    _objc_release(v86);
    v89 = _objc_alloc_init(g_4c4158);
    _objc_msgSend(len, SEL_setEmptyLabel_, v89);
    _objc_release(v89);
    v90 = _objc_msgSend(len, SEL_emptyLabel);
    v91 = _objc_retainAutoreleasedReturnValue(v90, SEL_emptyLabel);
    _objc_msgSend(v91, SEL_setText_, &g_5303d0);
    _objc_release(v91);
    v92 = _objc_msgSend(len, SEL_emptyLabel);
    v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_emptyLabel);
    _objc_msgSend(v93, SEL_setNumberOfLines_, 0);
    _objc_release(v93);
    v94 = _objc_msgSend(len, SEL_emptyLabel);
    v95 = _objc_retainAutoreleasedReturnValue(v94, SEL_emptyLabel);
    _objc_msgSend(v95, SEL_setTextAlignment_, 1);
    _objc_release(v95);
    v96 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v97 = _objc_retainAutoreleasedReturnValue(v96, SEL_secondaryLabelColor);
    v98 = _objc_msgSend(len, SEL_emptyLabel);
    v99 = _objc_retainAutoreleasedReturnValue(v98, SEL_emptyLabel);
    _objc_msgSend(v99, SEL_setTextColor_, v97);
    _objc_release(v99);
    _objc_release(v97);
    v100 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v101 = _objc_retainAutoreleasedReturnValue(v100, SEL_systemFontOfSize_);
    v102 = _objc_msgSend(len, SEL_emptyLabel);
    v103 = _objc_retainAutoreleasedReturnValue(v102, SEL_emptyLabel);
    _objc_msgSend(v103, SEL_setFont_, v101);
    _objc_release(v103);
    _objc_release(v101);
    v104 = _objc_msgSend(len, SEL_emptyLabel);
    v105 = _objc_retainAutoreleasedReturnValue(v104, SEL_emptyLabel);
    _objc_msgSend(v105, SEL_setHidden_, 1);
    _objc_release(v105);
    v106 = _objc_msgSend(len, SEL_view);
    v107 = _objc_retainAutoreleasedReturnValue(v106, SEL_view);
    v108 = _objc_msgSend(len, SEL_emptyLabel);
    v109 = _objc_retainAutoreleasedReturnValue(v108, SEL_emptyLabel);
    _objc_msgSend(v107, SEL_addSubview_, v109);
    _objc_release(v109);
    _objc_release(v107);
    _objc_msgSend(len, v10);
    _objc_release(v76);
    _objc_release(v11);
    v110 = _objc_release(v12);
    if (*((long long *)&g_600760) == v13)
        return v110;
    ___stack_chk_fail();
}
