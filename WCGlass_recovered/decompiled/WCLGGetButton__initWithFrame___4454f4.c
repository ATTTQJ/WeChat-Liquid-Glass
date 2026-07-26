/* Recovered pseudocode
 * Objective-C: -[WCLGGetButton initWithFrame:]
 * Address: 0x4454f4; original size: 2316 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.202s
 */

long long sub_4454f4(unsigned long a0)
{
    long long count;  // x19
    long long count1;  // x0
    long long count2;  // x0
    long long len;  // x21
    long long len1;  // x21
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    long long v24;  // x0
    long long v25;  // x0
    long long v26;  // x25
    long long v27;  // x0
    long long len2;  // x20
    long long v28;  // x21
    long long v29;  // x21
    long long v30;  // x0
    long long v31;  // x25
    long long v32;  // x0
    long long v33;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long v36;  // x0
    long long v37;  // x0
    long long v11;  // x21
    long long v38;  // x0
    long long v39;  // x22
    long long v40;  // x0
    long long v41;  // x21
    long long v42;  // x0
    long long v43;  // x21
    long long v44;  // x0
    long long v45;  // x0
    long long v46;  // x0
    long long v47;  // x0
    long long v12;  // x0
    long long v48;  // x0
    long long v49;  // x0
    long long v50;  // x0
    long long v51;  // x0
    long long v52;  // x0
    long long v53;  // x0
    long long v54;  // x0
    long long v55;  // x0
    long long v56;  // x0
    long long v57;  // x0
    long long v13;  // x21
    long long v58;  // x0
    long long v59;  // x0
    long long v60;  // x20
    long long v61;  // x0
    long long v62;  // x23
    long long v63;  // x0
    long long v64;  // x20
    long long v65;  // x0
    long long v66;  // x0
    long long v67;  // x0
    long long v14;  // x0
    long long v68;  // x0
    long long v69;  // x0
    long long v70;  // x0
    long long v71;  // x25
    long long v72;  // x0
    long long v73;  // x0
    long long v74;  // x0
    long long v75;  // x0
    long long v76;  // x0
    long long v77;  // x0
    long long v15;  // x0
    long long v78;  // x0
    long long v79;  // x0
    long long v80;  // x0
    long long v81;  // x0
    long long v82;  // x0
    long long v83;  // x0
    long long v84;  // x20
    long long v85;  // x0
    long long v86;  // x21
    long long v87;  // x0
    long long v16;  // x0
    long long v88;  // x20
    long long v89;  // x0
    long long v90;  // x0
    long long v91;  // x0
    long long v92;  // x0
    long long v93;  // x0
    long long v94;  // x0
    long long v95;  // x0
    long long v96;  // x0
    long long v97;  // x0
    long long v17;  // x0
    long long v98;  // x20
    long long v99;  // x0
    long long v100;  // x21
    unsigned long v0;  // [bp-0x90]
    long long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    v4 = a0;
    v5 = g_4c4828;
    count = _objc_msgSendSuper2(&v4, SEL_initWithFrame_);
    if (!count)
        return count;
    count1 = _objc_msgSend(g_4c4480, SEL_accentColor);
    len2 = _objc_retainAutoreleasedReturnValue(count1, SEL_accentColor);
    v11 = _objc_alloc_init(g_4c4078);
    _objc_msgSend(count, SEL_setPill_, v11);
    _objc_release(v11);
    v2 = SEL_colorWithWhite_alpha_;
    v12 = _objc_msgSend(g_4c4090, SEL_colorWithWhite_alpha_);
    v13 = _objc_retainAutoreleasedReturnValue(v12, SEL_colorWithWhite_alpha_);
    v14 = _objc_msgSend(count, SEL_pill);
    v15 = _objc_retainAutoreleasedReturnValue(v14, SEL_pill);
    v3 = SEL_setBackgroundColor_;
    _objc_msgSend(v15, SEL_setBackgroundColor_, v13);
    _objc_release(v15);
    _objc_release(v13);
    v16 = _objc_msgSend(count, SEL_pill);
    v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_pill);
    _objc_msgSend(v17, SEL_setUserInteractionEnabled_, 0);
    _objc_release(v17);
    count2 = _objc_msgSend(count, SEL_pill);
    len = _objc_retainAutoreleasedReturnValue(count2, SEL_pill);
    _objc_msgSend(count, SEL_addSubview_, len);
    _objc_release(len);
    len1 = _objc_alloc_init(g_4c4088);
    _objc_msgSend(count, SEL_setPillIcon_, len1);
    _objc_release(len1);
    v21 = _objc_msgSend(count, SEL_pillIcon);
    v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_pillIcon);
    v1 = len2;
    _objc_msgSend(v22, SEL_setTintColor_, len2);
    _objc_release(v22);
    v23 = _objc_msgSend(count, SEL_pillIcon);
    v24 = _objc_retainAutoreleasedReturnValue(v23, SEL_pillIcon);
    _objc_msgSend(v24, SEL_setContentMode_, 1);
    _objc_release(v24);
    v25 = _objc_msgSend(count, SEL_pill);
    v26 = _objc_retainAutoreleasedReturnValue(v25, SEL_pill);
    v27 = _objc_msgSend(count, SEL_pillIcon);
    v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_pillIcon);
    _objc_msgSend(v26, SEL_addSubview_, v28);
    _objc_release(v28);
    _objc_release(v26);
    v29 = _objc_alloc_init(g_4c4158);
    _objc_msgSend(count, SEL_setPillLabel_, v29);
    _objc_release(v29);
    v30 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
    v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_systemFontOfSize_weight_);
    v32 = _objc_msgSend(count, SEL_pillLabel);
    v33 = _objc_retainAutoreleasedReturnValue(v32, SEL_pillLabel);
    _objc_msgSend(v33, SEL_setFont_, v31);
    _objc_release(v33);
    _objc_release(v31);
    v34 = _objc_msgSend(count, SEL_pillLabel);
    v35 = _objc_retainAutoreleasedReturnValue(v34, SEL_pillLabel);
    _objc_msgSend(v35, SEL_setTextColor_, len2);
    _objc_release(v35);
    v36 = _objc_msgSend(count, SEL_pillLabel);
    v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_pillLabel);
    _objc_msgSend(v37, SEL_setTextAlignment_, 1);
    _objc_release(v37);
    v38 = _objc_msgSend(count, SEL_pill);
    v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_pill);
    v40 = _objc_msgSend(count, SEL_pillLabel);
    v41 = _objc_retainAutoreleasedReturnValue(v40, SEL_pillLabel);
    _objc_msgSend(v39, SEL_addSubview_, v41);
    _objc_release(v41);
    _objc_release(v39);
    v42 = _objc_msgSend(g_4c4288, SEL_layer);
    v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_layer);
    _objc_msgSend(count, SEL_setTrack_, v43);
    _objc_release(v43);
    v44 = _objc_msgSend(g_4c4090, SEL_clearColor);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_clearColor);
    v46 = _objc_retainAutorelease(v45);
    v47 = _objc_msgSend(v46, SEL_CGColor);
    v48 = _objc_msgSend(count, SEL_track);
    v49 = _objc_retainAutoreleasedReturnValue(v48, SEL_track);
    _objc_msgSend(v49, SEL_setFillColor_, v47);
    _objc_release(v49);
    _objc_release(v45);
    v50 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v2), v2);
    v51 = _objc_retainAutorelease(v50);
    v52 = _objc_msgSend(v51, SEL_CGColor);
    v53 = _objc_msgSend(count, SEL_track);
    v54 = _objc_retainAutoreleasedReturnValue(v53, SEL_track);
    _objc_msgSend(v54, SEL_setStrokeColor_, v52);
    _objc_release(v54);
    _objc_release(v50);
    v55 = _objc_msgSend(count, SEL_track);
    v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_track);
    _objc_msgSend(v56, SEL_setLineWidth_);
    _objc_release(v56);
    v57 = _objc_msgSend(count, SEL_track);
    v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_track);
    v2 = SEL_setHidden_;
    _objc_msgSend(v58, SEL_setHidden_, 1);
    _objc_release(v58);
    v59 = _objc_msgSend(count, SEL_layer);
    v60 = _objc_retainAutoreleasedReturnValue(v59, SEL_layer);
    v61 = _objc_msgSend(count, SEL_track);
    v62 = _objc_retainAutoreleasedReturnValue(v61, SEL_track);
    v0 = SEL_addSublayer_;
    _objc_msgSend(v60, SEL_addSublayer_, v62);
    _objc_release(v62);
    _objc_release(v60);
    v63 = _objc_msgSend(g_4c4288, SEL_layer);
    v64 = _objc_retainAutoreleasedReturnValue(v63, SEL_layer);
    _objc_msgSend(count, SEL_setRing_, v64);
    _objc_release(v64);
    v65 = _objc_msgSend(g_4c4090, SEL_clearColor);
    v66 = _objc_retainAutoreleasedReturnValue(v65, SEL_clearColor);
    v67 = _objc_retainAutorelease(v66);
    v68 = _objc_msgSend(v67, SEL_CGColor);
    v69 = _objc_msgSend(count, SEL_ring);
    v70 = _objc_retainAutoreleasedReturnValue(v69, SEL_ring);
    _objc_msgSend(v70, SEL_setFillColor_, v68);
    _objc_release(v70);
    _objc_release(v66);
    v71 = _objc_retainAutorelease(v1);
    v72 = _objc_msgSend(v71, SEL_CGColor);
    v73 = _objc_msgSend(count, SEL_ring);
    v74 = _objc_retainAutoreleasedReturnValue(v73, SEL_ring);
    _objc_msgSend(v74, SEL_setStrokeColor_, v72);
    _objc_release(v74);
    v75 = _objc_msgSend(count, SEL_ring);
    v76 = _objc_retainAutoreleasedReturnValue(v75, SEL_ring);
    _objc_msgSend(v76, SEL_setLineWidth_);
    _objc_release(v76);
    v77 = _objc_msgSend(count, SEL_ring);
    v78 = _objc_retainAutoreleasedReturnValue(v77, SEL_ring);
    _objc_msgSend(v78, SEL_setLineCap_, *((long long *)&g_600650));
    _objc_release(v78);
    v79 = _objc_msgSend(count, SEL_ring);
    v80 = _objc_retainAutoreleasedReturnValue(v79, SEL_ring);
    _objc_msgSend(v80, SEL_setStrokeEnd_);
    _objc_release(v80);
    v81 = _objc_msgSend(count, SEL_ring);
    v82 = _objc_retainAutoreleasedReturnValue(v81, SEL_ring);
    _objc_msgSend(v82, v2, 1);
    _objc_release(v82);
    v83 = _objc_msgSend(count, SEL_layer);
    v84 = _objc_retainAutoreleasedReturnValue(v83, SEL_layer);
    v85 = _objc_msgSend(count, SEL_ring);
    v86 = _objc_retainAutoreleasedReturnValue(v85, SEL_ring);
    _objc_msgSend(v84, v0, v86);
    _objc_release(v86);
    _objc_release(v84);
    v87 = _objc_msgSend(g_4c4280, SEL_layer);
    v88 = _objc_retainAutoreleasedReturnValue(v87, SEL_layer);
    _objc_msgSend(count, SEL_setStopSquare_, v88);
    _objc_release(v88);
    v89 = _objc_retainAutorelease(v71);
    v90 = _objc_msgSend(v89, SEL_CGColor);
    v91 = _objc_msgSend(count, SEL_stopSquare);
    v92 = _objc_retainAutoreleasedReturnValue(v91, SEL_stopSquare);
    _objc_msgSend(v92, v3, v90);
    _objc_release(v92);
    v93 = _objc_msgSend(count, SEL_stopSquare);
    v94 = _objc_retainAutoreleasedReturnValue(v93, SEL_stopSquare);
    _objc_msgSend(v94, SEL_setCornerRadius_);
    _objc_release(v94);
    v95 = _objc_msgSend(count, SEL_stopSquare);
    v96 = _objc_retainAutoreleasedReturnValue(v95, SEL_stopSquare);
    _objc_msgSend(v96, v2, 1);
    _objc_release(v96);
    v97 = _objc_msgSend(count, SEL_layer);
    v98 = _objc_retainAutoreleasedReturnValue(v97, SEL_layer);
    v99 = _objc_msgSend(count, SEL_stopSquare);
    v100 = _objc_retainAutoreleasedReturnValue(v99, SEL_stopSquare);
    _objc_msgSend(v98, v0, v100);
    _objc_release(v100);
    _objc_release(v98);
    _objc_msgSend(count, SEL_addTarget_action_forControlEvents_, count, SEL_tapped, 64);
    _objc_release(v71);
    return count;
}
