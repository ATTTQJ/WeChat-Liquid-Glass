/* Recovered pseudocode
 * Objective-C: -[WCLGImageLibraryPickerViewController viewDidLoad]
 * Address: 0x11b558; original size: 2344 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.092s
 */

long long sub_11b558(unsigned long len)
{
    long long count;  // x0
    long long len1;  // x21
    long long v14;  // x0
    long long v15;  // x21
    long long v16;  // x0
    long long count1;  // x0
    long long v18;  // x0
    long long count2;  // x24
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long len2;  // x26
    long long v6;  // x0
    long long v24;  // x0
    long long v25;  // x0
    long long v26;  // x0
    long long v27;  // x0
    long long v28;  // x0
    long long v29;  // x0
    long long v30;  // x0
    long long v31;  // x0
    long long v32;  // x0
    long long v33;  // x22
    long long v7;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long v36;  // x26
    long long v37;  // x0
    long long v38;  // x25
    long long v39;  // x0
    long long v40;  // x0
    long long v41;  // x0
    long long v42;  // x23
    long long v43;  // x0
    long long v8;  // x0
    long long v44;  // x0
    long long v45;  // x0
    long long v46;  // x0
    long long v47;  // x0
    long long v48;  // x0
    long long v49;  // x0
    long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x24
    long long v53;  // x0
    long long v9;  // x0
    long long v54;  // x0
    long long v55;  // x0
    long long v56;  // x24
    long long v57;  // x0
    long long v58;  // x0
    long long v59;  // x0
    long long v60;  // x20
    long long v61;  // x0
    long long v62;  // x24
    long long v63;  // x0
    long long v10;  // x23
    long long v64;  // x0
    long long v65;  // x22
    long long v66;  // x0
    long long v67;  // x0
    long long v11;  // x0
    long long v12;  // x21
    long long v13;  // x0
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    /* unsupported instruction */
    if (!(int)g_57df1c)
    {
        g_4ed8c5 = g_4ed8c0 ^ 0xbb;
        g_4ed8c6 = g_4ed8c1 ^ 210;
        g_4ed8c7 = g_4ed8c2 ^ 229;
        g_4ed8c8 = g_4ed8c3 ^ 191;
        g_4ed8c9 = g_4ed8c4 ^ 0x88;
        *((unsigned short *)&g_4ed880) = g_4ed840 ^ 4855;
        *((unsigned short *)&g_4ed882) = g_4ed842 ^ 63855;
        *((unsigned short *)&g_4ed884) = g_4ed844 ^ 31602;
        *((unsigned short *)&g_4ed886) = g_4ed846 ^ 24954;
        *((unsigned short *)&g_4ed888) = g_4ed848 ^ 64253;
        *((unsigned short *)&g_4ed88a) = g_4ed84a ^ 39267;
        *((unsigned short *)&g_4ed88c) = g_4ed84c ^ 34917;
        *((unsigned short *)&g_4ed88e) = g_4ed84e ^ 44102;
        *((unsigned short *)&g_4ed890) = g_4ed850 ^ 46238;
        *((unsigned short *)&g_4ed892) = g_4ed852 ^ 26163;
        *((unsigned short *)&g_4ed894) = g_4ed854 ^ 0x7ffa;
        *((unsigned short *)&g_4ed896) = g_4ed856 ^ 38491;
        *((unsigned short *)&g_4ed898) = g_4ed858 ^ 9133;
        *((unsigned short *)&g_4ed89a) = g_4ed85a ^ 48943;
        *((unsigned short *)&g_4ed89c) = g_4ed85c ^ 53785;
        *((unsigned short *)&g_4ed89e) = g_4ed85e ^ 7007;
        *((unsigned short *)&g_4ed8a0) = g_4ed860 ^ 11876;
        *((unsigned short *)&g_4ed8a2) = g_4ed862 ^ 3621;
        *((unsigned short *)&g_4ed8a4) = g_4ed864 ^ 29345;
        *((unsigned short *)&g_4ed8a6) = g_4ed866 ^ 37212;
        *((unsigned short *)&g_4ed8a8) = g_4ed868 ^ 38165;
        *((unsigned short *)&g_4ed8aa) = g_4ed86a ^ 56613;
        *((unsigned short *)&g_4ed8ac) = g_4ed86c ^ 55269;
        *((unsigned short *)&g_4ed8ae) = g_4ed86e ^ 15782;
        *((unsigned short *)&g_4ed8b0) = g_4ed870 ^ 26978;
        *((unsigned short *)&g_4ed8b2) = g_4ed872 ^ 9761;
        *((unsigned short *)&g_4ed8b4) = g_4ed874 ^ 50649;
        *((unsigned short *)&g_4ed8b6) = g_4ed876 ^ 61579;
        *((unsigned short *)&g_4ed8b8) = g_4ed878 ^ 10961;
        *((unsigned short *)&g_4ed8ba) = g_4ed87a ^ 32018;
        *((unsigned short *)&g_4ed8bc) = g_4ed87c ^ 8067;
        *((unsigned short *)&g_4ed8be) = g_4ed87e ^ 34983;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57df1c) = 1;
    v0 = len;
    v1 = g_4c4700;
    _objc_msgSendSuper2(&v0, SEL_viewDidLoad);
    count = _objc_msgSend(g_4c4090, SEL_systemBackgroundColor);
    len1 = _objc_retainAutoreleasedReturnValue(count, SEL_systemBackgroundColor);
    v6 = _objc_msgSend(len, SEL_view);
    v7 = _objc_retainAutoreleasedReturnValue(v6, SEL_view);
    _objc_msgSend(v7, SEL_setBackgroundColor_, len1);
    _objc_release(v7);
    _objc_release(len1);
    v8 = _objc_msgSend(len, SEL_category);
    v9 = _objc_retainAutoreleasedReturnValue(v8, SEL_category);
    v10 = _objc_retainAutoreleasedReturnValue(sub_39d784(v9));
    _objc_msgSend(len, SEL_setItems_, v10);
    _objc_release(v10);
    _objc_release(v9);
    v11 = _objc_alloc(g_4c4328);
    v12 = _objc_msgSend(v11, SEL_initWithBarButtonSystemItem_target_action_, 24, len, SEL_closeTapped);
    v13 = _objc_msgSend(len, SEL_navigationItem);
    v14 = _objc_retainAutoreleasedReturnValue(v13, SEL_navigationItem);
    _objc_msgSend(v14, SEL_setLeftBarButtonItem_, v12);
    _objc_release(v14);
    _objc_release(v12);
    v15 = _objc_alloc_init(g_4c4330);
    _objc_msgSend(v15, SEL_setMinimumInteritemSpacing_);
    _objc_msgSend(v15, SEL_setMinimumLineSpacing_);
    _objc_msgSend(v15, SEL_setSectionInset_);
    v16 = _objc_alloc(g_4c4338);
    count1 = _objc_msgSend(len, SEL_view);
    v18 = _objc_retainAutoreleasedReturnValue(count1, SEL_view);
    _objc_msgSend(v18, SEL_bounds);
    count2 = _objc_msgSend(v16, SEL_initWithFrame_collectionViewLayout_, v15);
    _objc_msgSend(len, SEL_setCollectionView_, count2);
    _objc_release(count2);
    _objc_release(v18);
    v20 = _objc_msgSend(len, SEL_collectionView);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_collectionView);
    _objc_msgSend(v21, SEL_setAutoresizingMask_, 18);
    _objc_release(v21);
    v22 = _objc_msgSend(g_4c4090, SEL_clearColor);
    len2 = _objc_retainAutoreleasedReturnValue(v22, SEL_clearColor);
    v24 = _objc_msgSend(len, SEL_collectionView);
    v25 = _objc_retainAutoreleasedReturnValue(v24, SEL_collectionView);
    _objc_msgSend(v25, SEL_setBackgroundColor_, len2);
    _objc_release(v25);
    _objc_release(len2);
    v26 = _objc_msgSend(len, SEL_collectionView);
    v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_collectionView);
    _objc_msgSend(v27, SEL_setDataSource_, len);
    _objc_release(v27);
    v28 = _objc_msgSend(len, SEL_collectionView);
    v29 = _objc_retainAutoreleasedReturnValue(v28, SEL_collectionView);
    _objc_msgSend(v29, SEL_setDelegate_, len);
    _objc_release(v29);
    v30 = _objc_msgSend(len, SEL_collectionView);
    v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_collectionView);
    _objc_msgSend(v31, SEL_setAlwaysBounceVertical_, 1);
    _objc_release(v31);
    v32 = _objc_msgSend(len, SEL_collectionView);
    v33 = _objc_retainAutoreleasedReturnValue(v32, SEL_collectionView);
    v34 = _objc_msgSend(g_4c4340, SEL_class);
    _objc_msgSend(v33, SEL_registerClass_forCellWithReuseIdentifier_, v34, &g_4ed930);
    _objc_release(v33);
    v35 = _objc_msgSend(len, SEL_view);
    v36 = _objc_retainAutoreleasedReturnValue(v35, SEL_view);
    v37 = _objc_msgSend(len, SEL_collectionView);
    v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_collectionView);
    _objc_msgSend(v36, SEL_addSubview_, v38);
    _objc_release(v38);
    _objc_release(v36);
    v39 = _objc_alloc(g_4c4158);
    v40 = _objc_msgSend(len, SEL_view);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_view);
    _objc_msgSend(v41, SEL_bounds);
    v42 = _objc_msgSend(v39, SEL_initWithFrame_);
    _objc_msgSend(len, SEL_setEmptyLabel_, v42);
    _objc_release(v42);
    _objc_release(v41);
    v43 = _objc_msgSend(len, SEL_emptyLabel);
    v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_emptyLabel);
    _objc_msgSend(v44, SEL_setAutoresizingMask_, 18);
    _objc_release(v44);
    v45 = _objc_msgSend(len, SEL_emptyLabel);
    v46 = _objc_retainAutoreleasedReturnValue(v45, SEL_emptyLabel);
    _objc_msgSend(v46, SEL_setText_, &g_4ed8f0);
    _objc_release(v46);
    v47 = _objc_msgSend(len, SEL_emptyLabel);
    v48 = _objc_retainAutoreleasedReturnValue(v47, SEL_emptyLabel);
    _objc_msgSend(v48, SEL_setNumberOfLines_, 0);
    _objc_release(v48);
    v49 = _objc_msgSend(len, SEL_emptyLabel);
    v50 = _objc_retainAutoreleasedReturnValue(v49, SEL_emptyLabel);
    _objc_msgSend(v50, SEL_setTextAlignment_, 1);
    _objc_release(v50);
    v51 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_);
    v52 = _objc_retainAutoreleasedReturnValue(v51, SEL_systemFontOfSize_);
    v53 = _objc_msgSend(len, SEL_emptyLabel);
    v54 = _objc_retainAutoreleasedReturnValue(v53, SEL_emptyLabel);
    _objc_msgSend(v54, SEL_setFont_, v52);
    _objc_release(v54);
    _objc_release(v52);
    v55 = _objc_msgSend(g_4c4090, SEL_secondaryLabelColor);
    v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_secondaryLabelColor);
    v57 = _objc_msgSend(len, SEL_emptyLabel);
    v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_emptyLabel);
    _objc_msgSend(v58, SEL_setTextColor_, v56);
    _objc_release(v58);
    _objc_release(v56);
    v59 = _objc_msgSend(len, SEL_view);
    v60 = _objc_retainAutoreleasedReturnValue(v59, SEL_view);
    v61 = _objc_msgSend(len, SEL_emptyLabel);
    v62 = _objc_retainAutoreleasedReturnValue(v61, SEL_emptyLabel);
    _objc_msgSend(v60, SEL_addSubview_, v62);
    _objc_release(v62);
    _objc_release(v60);
    v63 = _objc_msgSend(len, SEL_items);
    v64 = _objc_retainAutoreleasedReturnValue(v63, SEL_items);
    if (!_objc_msgSend(v64, SEL_count))
        v65 = 0;
    else
        v65 = 1;
    v66 = _objc_msgSend();
    v67 = _objc_retainAutoreleasedReturnValue(v66, SEL_emptyLabel);
    _objc_msgSend(v67, SEL_setHidden_, v65);
    _objc_release(v67);
    _objc_release(v64);
    return _objc_release(v15);
}
