/* Recovered pseudocode
 * Objective-C: -[WCLGCodeLibraryViewController viewDidLoad]
 * Address: 0x243874; original size: 2708 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.901s
 */

unsigned long long sub_243874(unsigned long a0)
{
    long long count;  // x0
    long long len;  // x21
    long long v24;  // x0
    long long count1;  // x21
    long long v26;  // x0
    long long count2;  // x22
    long long v28;  // x0
    long long v29;  // x0
    long long v30;  // x0
    long long len1;  // x24
    long long v32;  // x0
    long long v33;  // x0
    long long v16;  // x0
    long long v34;  // x0
    long long v35;  // x24
    long long v36;  // x0
    long long v37;  // x24
    long long v38;  // x0
    long long len2;  // x27
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x0
    long long v43;  // x23
    long long v17;  // x0
    long long v44;  // x0
    long long v45;  // x23
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x0
    long long v49;  // x23
    long long v50;  // x0
    long long v51;  // x21
    long long v52;  // x0
    long long v53;  // x0
    long long v18;  // x0
    long long v54;  // x0
    long long v55;  // x20
    long long v56;  // x0
    long long v57;  // x20
    long long v58;  // x0
    long long v59;  // x22
    long long v60;  // x0
    long long v61;  // x22
    unsigned long long v62;  // x0
    long long v19;  // x0
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    char v0;  // [bp-0xe0], Other Possible Types: long long
    long long v1;  // [bp-0xd8]
    long long v2;  // [bp-0xd0]
    long long v3;  // [bp-0xc8]
    long long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    long long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x88]
    char *v10;  // [bp-0x80]
    unsigned long v11;  // [bp-0x78]
    char *v12;  // [bp-0x10]
    char v13;  // [bp+0x0]

    v12 = &v13;
    v11 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_57f82c)
    {
        *((unsigned short *)&g_520b80) = g_520b78 ^ 52290;
        *((unsigned short *)&g_520b82) = g_520b7a ^ 20797;
        *((unsigned short *)&g_520b84) = g_520b7c ^ 36206;
        *((unsigned short *)&g_520b86) = g_520b7e ^ 38069;
        *((unsigned short *)&g_520b72) = g_520b6c ^ 64859;
        *((unsigned short *)&g_520b74) = g_520b6e ^ 43443;
        *((unsigned short *)&g_520b76) = g_520b70 ^ 6386;
        *((unsigned short *)&g_520b20) = g_520ad0 ^ 11056;
        *((unsigned short *)&g_520b22) = g_520ad2 ^ 56377;
        *((unsigned short *)&g_520b24) = g_520ad4 ^ 13887;
        *((unsigned short *)&g_520b26) = g_520ad6 ^ 59275;
        *((unsigned short *)&g_520b28) = g_520ad8 ^ 60603;
        *((unsigned short *)&g_520b2a) = g_520ada ^ 35558;
        *((unsigned short *)&g_520b2c) = g_520adc ^ 8859;
        *((unsigned short *)&g_520b2e) = g_520ade ^ 2121;
        *((unsigned short *)&g_520b30) = g_520ae0 ^ 12044;
        *((unsigned short *)&g_520b32) = g_520ae2 ^ 11925;
        *((unsigned short *)&g_520b34) = g_520ae4 ^ 62287;
        *((unsigned short *)&g_520b36) = g_520ae6 ^ 54332;
        *((unsigned short *)&g_520b38) = g_520ae8 ^ 12441;
        *((unsigned short *)&g_520b3a) = g_520aea ^ 29437;
        *((unsigned short *)&g_520b3c) = g_520aec ^ 53187;
        *((unsigned short *)&g_520b3e) = g_520aee ^ 28360;
        *((unsigned short *)&g_520b40) = g_520af0 ^ 50262;
        *((unsigned short *)&g_520b42) = g_520af2 ^ 46776;
        *((unsigned short *)&g_520b44) = g_520af4 ^ 22684;
        *((unsigned short *)&g_520b46) = g_520af6 ^ 41385;
        *((unsigned short *)&g_520b48) = g_520af8 ^ 53895;
        *((unsigned short *)&g_520b4a) = g_520afa ^ 29011;
        *((unsigned short *)&g_520b4c) = g_520afc ^ 7131;
        *((unsigned short *)&g_520b4e) = g_520afe ^ 1811;
        *((unsigned short *)&g_520b50) = g_520b00 ^ 47833;
        *((unsigned short *)&g_520b52) = g_520b02 ^ 49375;
        *((unsigned short *)&g_520b54) = g_520b04 ^ 55068;
        *((unsigned short *)&g_520b56) = g_520b06 ^ 524;
        *((unsigned short *)&g_520b58) = g_520b08 ^ 53662;
        *((unsigned short *)&g_520b5a) = g_520b0a ^ 1700;
        *((unsigned short *)&g_520b5c) = g_520b0c ^ 0xffa2;
        *((unsigned short *)&g_520b5e) = g_520b0e ^ 4640;
        *((unsigned short *)&g_520b60) = g_520b10 ^ 15524;
        *((unsigned short *)&g_520b62) = g_520b12 ^ 29539;
        *((unsigned short *)&g_520b64) = g_520b14 ^ 15468;
        *((unsigned short *)&g_520b66) = g_520b16 ^ 60305;
        *((unsigned short *)&g_520b68) = g_520b18 ^ 8831;
        *((unsigned short *)&g_520b6a) = g_520b1a ^ 35863;
        *((unsigned short *)&g_520abe) = g_520ab8 ^ 45110;
        *((unsigned short *)&g_520ac0) = g_520aba ^ 16995;
        *((unsigned short *)&g_520ac2) = g_520abc ^ 23956;
        *((unsigned short *)&g_520ab2) = g_520aac ^ 10404;
        *((unsigned short *)&g_520ab4) = g_520aae ^ 14020;
        *((unsigned short *)&g_520ab6) = g_520ab0 ^ 33948;
        *((unsigned short *)&g_520aa6) = g_520aa0 ^ 20047;
        *((unsigned short *)&g_520aa8) = g_520aa2 ^ 61107;
        *((unsigned short *)&g_520aaa) = g_520aa4 ^ 54673;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57f82c) = 1;
    v10 = &v0;
    v7 = a0;
    v8 = g_4c4748;
    _objc_msgSendSuper2(&v7, SEL_viewDidLoad);
    _objc_msgSend(a0, SEL_setTitle_, &g_520cf0);
    count = _objc_msgSend(g_4c4090, SEL_systemGroupedBackgroundColor);
    len = _objc_retainAutoreleasedReturnValue(count, SEL_systemGroupedBackgroundColor);
    v16 = _objc_msgSend(a0, SEL_view);
    v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_view);
    _objc_msgSend(v17, SEL_setBackgroundColor_, len);
    _objc_release(v17);
    _objc_release(len);
    v18 = _objc_msgSend(a0, SEL_tableView);
    v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_tableView);
    _objc_msgSend(v19, SEL_setAllowsMultipleSelectionDuringEditing_, 1);
    _objc_release(v19);
    v20 = _objc_msgSend(a0, SEL_tableView);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_tableView);
    _objc_msgSend(v21, SEL_setRowHeight_);
    _objc_release(v21);
    v22 = _objc_msgSend(a0, SEL_tableView);
    v23 = _objc_retainAutoreleasedReturnValue(v22, SEL_tableView);
    _objc_msgSend(v23, SEL_setEstimatedRowHeight_);
    _objc_release(v23);
    v24 = _objc_alloc(g_4c4328);
    count1 = _objc_msgSend(v24, SEL_initWithTitle_style_target_action_, &g_520cb0, 0, a0, SEL_toggleEditingTapped);
    _objc_msgSend(a0, SEL_setSelectButton_, count1);
    _objc_release(count1);
    v26 = _objc_alloc(g_4c4328);
    count2 = _objc_msgSend(v26, SEL_initWithBarButtonSystemItem_target_action_, 4, a0, SEL_addTapped);
    _objc_msgSend(a0, SEL_setAddButton_, count2);
    _objc_release(count2);
    v28 = _objc_msgSend(a0, SEL_selectButton);
    v5 = _objc_retainAutoreleasedReturnValue(v28, SEL_selectButton);
    v29 = _objc_msgSend(a0, SEL_addButton);
    v6 = _objc_retainAutoreleasedReturnValue(v29, SEL_addButton);
    v9 = SEL_arrayWithObjects_count_;
    v30 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v5, 2);
    len1 = _objc_retainAutoreleasedReturnValue(v30, SEL_arrayWithObjects_count_, &v5, 2);
    v32 = _objc_msgSend(a0, SEL_navigationItem);
    v33 = _objc_retainAutoreleasedReturnValue(v32, SEL_navigationItem);
    _objc_msgSend(v33, SEL_setRightBarButtonItems_, len1);
    _objc_release(v33);
    _objc_release(len1);
    _objc_release(v6);
    _objc_release(v5);
    v34 = _objc_alloc(g_4c4328);
    v35 = _objc_msgSend(v34, SEL_initWithTitle_style_target_action_, &g_520c30, 0, a0, SEL_selectAllTapped);
    _objc_msgSend(a0, SEL_setSelectAllButton_, v35);
    _objc_release(v35);
    v36 = _objc_alloc(g_4c4328);
    v37 = _objc_msgSend(v36, SEL_initWithTitle_style_target_action_, &g_520bf0, 0, a0, SEL_clearAllTapped);
    _objc_msgSend(a0, SEL_setClearAllButton_, v37);
    _objc_release(v37);
    v38 = _objc_msgSend(g_4c4090, SEL_systemRedColor);
    len2 = _objc_retainAutoreleasedReturnValue(v38, SEL_systemRedColor);
    v40 = _objc_msgSend(a0, SEL_clearAllButton);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_clearAllButton);
    _objc_msgSend(v41, SEL_setTintColor_, len2);
    _objc_release(v41);
    _objc_release(len2);
    v42 = _objc_alloc(g_4c4328);
    v43 = _objc_msgSend(v42, SEL_initWithTitle_style_target_action_, &g_520c70, 0, a0, SEL_deleteSelectedTapped);
    _objc_msgSend(a0, SEL_setDeleteButton_, v43);
    _objc_release(v43);
    v44 = _objc_msgSend(g_4c4090, SEL_systemRedColor);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_systemRedColor);
    v46 = _objc_msgSend(a0, SEL_deleteButton);
    v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_deleteButton);
    _objc_msgSend(v47, SEL_setTintColor_, v45);
    _objc_release(v47);
    _objc_release(v45);
    v48 = _objc_alloc(g_4c4328);
    v49 = _objc_msgSend(v48, SEL_initWithBarButtonSystemItem_target_action_, 5, 0, 0);
    v50 = _objc_alloc(g_4c4328);
    v51 = _objc_msgSend(v50, SEL_initWithBarButtonSystemItem_target_action_, 5, 0, 0);
    v52 = _objc_msgSend(a0, SEL_selectAllButton);
    v0 = _objc_retainAutoreleasedReturnValue(v52, SEL_selectAllButton);
    v1 = v49;
    v53 = _objc_msgSend(a0, SEL_clearAllButton);
    v2 = _objc_retainAutoreleasedReturnValue(v53, SEL_clearAllButton);
    v3 = v51;
    v54 = _objc_msgSend(a0, SEL_deleteButton);
    v4 = _objc_retainAutoreleasedReturnValue(v54, SEL_deleteButton);
    v55 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4098, v9, v10, 5), v9, v10, 5);
    _objc_msgSend(a0, SEL_setToolbarItems_, v55);
    _objc_release(v55);
    _objc_release(v4);
    _objc_release(v2);
    _objc_release(v0);
    v56 = _objc_alloc(g_4c4158);
    v57 = _objc_msgSend(v56, SEL_initWithFrame_);
    _objc_msgSend(v57, SEL_setNumberOfLines_, 0);
    _objc_msgSend(v57, SEL_setTextAlignment_, 1);
    v58 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v59 = _objc_retainAutoreleasedReturnValue(v58, SEL_systemFontOfSize_);
    _objc_msgSend(v57, SEL_setFont_, v59);
    _objc_release(v59);
    v60 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v61 = _objc_retainAutoreleasedReturnValue(v60, SEL_secondaryLabelColor);
    _objc_msgSend(v57, SEL_setTextColor_, v61);
    _objc_release(v61);
    _objc_msgSend(v57, SEL_setText_, &g_520bb0);
    _objc_msgSend(a0, SEL_setEmptyLabel_, v57);
    _objc_release(v57);
    _objc_release(v51);
    v62 = _objc_release(v49);
    if (*((long long *)&g_600760) == v11)
        return v62;
    ___stack_chk_fail();
}
