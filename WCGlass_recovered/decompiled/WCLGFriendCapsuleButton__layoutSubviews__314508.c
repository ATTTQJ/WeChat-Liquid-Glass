/* Recovered pseudocode
 * Objective-C: -[WCLGFriendCapsuleButton layoutSubviews]
 * Address: 0x314508; original size: 1948 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.88s
 */

long long sub_314508(unsigned long a0)
{
    long long count;  // x0
    unsigned long long v5;  // d0
    long long count1;  // x0
    long long v15;  // x0
    long long count2;  // x0
    long long v17;  // x0
    long long v18;  // x0
    long long v19;  // x0
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    unsigned long long v6;  // d9
    long long v24;  // x0
    long long v25;  // x0
    long long v26;  // x0
    long long v27;  // x0
    long long v28;  // x0
    long long v29;  // x0
    long long v30;  // x0
    long long v31;  // x0
    unsigned long long v32;  // cc_dep1
    unsigned long v33;  // 4132
    long long v7;  // x0
    unsigned long long v34;  // w8
    unsigned long v35;  // d0
    unsigned long long v36;  // d2
    unsigned long v37;  // 4147
    unsigned long v38;  // 4106
    unsigned long v39;  // 4130
    unsigned long v40;  // d1
    unsigned long v41;  // 4133
    long long v42;  // x0
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
    unsigned long long v52;  // x0
    unsigned long long v53;  // d0
    long long v9;  // x0
    unsigned long v54;  // 4150
    long long v55;  // x0
    long long v56;  // x0
    unsigned long v57;  // 4142
    long long v58;  // x0
    long long v59;  // x0
    long long v60;  // x0
    long long v61;  // x0
    long long v62;  // x0
    long long v63;  // x0
    long long v10;  // x0
    unsigned long v64;  // 4129
    long long v65;  // x0
    long long v66;  // x0
    long long v67;  // x0
    unsigned long v68;  // 4129
    unsigned long v69;  // d0
    unsigned long v70;  // 4150
    long long v71;  // x0
    long long len;  // x23
    long long v73;  // x0
    long long v11;  // x0
    long long v74;  // x0
    long long v75;  // x0
    long long v76;  // x0
    long long v77;  // x0
    long long len1;  // x20
    long long v79;  // x0
    long long len2;  // x20
    long long v81;  // x0
    long long v82;  // x20
    long long v83;  // x0
    long long v12;  // x0
    long long v84;  // x20
    long long v13;  // x0
    unsigned long v0;  // [bp-0xb0]
    unsigned long v1;  // [bp-0xa8]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = a0;
    v1 = g_4c47b8;
    _objc_msgSendSuper2(&v0, SEL_layoutSubviews);
    count = _objc_msgSend(a0, SEL_bounds);
    _CGRectGetWidth(count, SEL_bounds);
    v6 = v5;
    v7 = _objc_msgSend(a0, SEL_bounds);
    _CGRectGetHeight(v7, SEL_bounds);
    v8 = _objc_msgSend(a0, SEL_layer);
    v9 = _objc_retainAutoreleasedReturnValue(v8, SEL_layer);
    _objc_msgSend(v9, SEL_setCornerRadius_);
    _objc_release(v9);
    v10 = _objc_msgSend(a0, SEL_layer);
    v11 = _objc_retainAutoreleasedReturnValue(v10, SEL_layer);
    _objc_msgSend(v11, SEL_setCornerCurve_, *((long long *)&g_600628));
    _objc_release(v11);
    _objc_msgSend(a0, SEL_bounds);
    v12 = _objc_msgSend(a0, SEL_fallbackGlassView);
    v13 = _objc_retainAutoreleasedReturnValue(v12, SEL_fallbackGlassView);
    _objc_msgSend(v13, SEL_setFrame_);
    _objc_release(v13);
    count1 = _objc_msgSend(a0, SEL_fallbackGlassView);
    v15 = _objc_retainAutoreleasedReturnValue(count1, SEL_fallbackGlassView);
    count2 = _objc_msgSend(v15, SEL_layer);
    v17 = _objc_retainAutoreleasedReturnValue(count2, SEL_layer);
    _objc_msgSend(v17, SEL_setCornerRadius_);
    _objc_release(v17);
    _objc_release(v15);
    v18 = _objc_msgSend(a0, SEL_fallbackGlassView);
    v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_fallbackGlassView);
    _objc_msgSend(v19, SEL_setClipsToBounds_, 1);
    _objc_release(v19);
    _objc_msgSend(a0, SEL_bounds);
    v20 = _objc_msgSend(a0, SEL_colorTintView);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_colorTintView);
    _objc_msgSend(v21, SEL_setFrame_);
    _objc_release(v21);
    v22 = _objc_msgSend(a0, SEL_colorTintView);
    v23 = _objc_retainAutoreleasedReturnValue(v22, SEL_colorTintView);
    v24 = _objc_msgSend(v23, SEL_layer);
    v25 = _objc_retainAutoreleasedReturnValue(v24, SEL_layer);
    _objc_msgSend(v25, SEL_setCornerRadius_);
    _objc_release(v25);
    _objc_release(v23);
    v26 = _objc_msgSend(a0, SEL_colorTintView);
    v27 = _objc_retainAutoreleasedReturnValue(v26, SEL_colorTintView);
    v28 = _objc_msgSend(v27, SEL_layer);
    v29 = _objc_retainAutoreleasedReturnValue(v28, SEL_layer);
    _objc_msgSend(v29, SEL_setCornerCurve_, *((long long *)&g_600628));
    _objc_release(v29);
    _objc_release(v27);
    v30 = _objc_msgSend(a0, SEL_colorTintView);
    v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_colorTintView);
    _objc_msgSend(v31, SEL_setClipsToBounds_, 1);
    _objc_release(v31);
    v32 = ((((CmpF(v6, 0x405b800000000000) >> 5 & 3 | CmpF(v6, 0x405b800000000000) & 1) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - ((CmpF(v6, 0x405b800000000000) >> 5 & 3 | CmpF(v6, 0x405b800000000000) & 1) & (CmpF(v6, 0x405b800000000000) >> 5 & 3 | CmpF(v6, 0x405b800000000000) & 1) >> 1 & 1)) * 0x10000000;
    v33 = arm64g_calculate_condition(80, (((((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) & ((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    if ((char)v33)
        v34 = 0;
    else
        v34 = 1;
    v35 = unsupported_Iop_ZeroHI64ofV128();
    v36 = v6 * g_492240[v34];
    v37 = arm64g_calculate_condition(64, v32, 0, 0);
    v38 = arm64g_calculate_condition(64, v32, 0, 0);
    v39 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v36, 0x404a000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v36, 0x404a000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v36, 0x404a000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v36, 0x404a000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v36, 0x404a000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v36, 0x404a000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    v40 = unsupported_Iop_ZeroHI64ofV128();
    v41 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v35, v40)) >> 5 & 3 | (unsigned long long)(CmpF(v35, v40) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v35, v40)) >> 5 & 3 | (unsigned long long)(CmpF(v35, v40) & 1)) & ((unsigned long long)(char)(CmpF(v35, v40)) >> 5 & 3 | (unsigned long long)(CmpF(v35, v40) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    v42 = _objc_msgSend();
    v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_avatarView);
    _objc_msgSend(v43, SEL_setFrame_);
    _objc_release(v43);
    v44 = _objc_msgSend(a0, SEL_avatarView);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_avatarView);
    v46 = _objc_msgSend(v45, SEL_layer);
    v47 = _objc_retainAutoreleasedReturnValue(v46, SEL_layer);
    _objc_msgSend(v47, SEL_setCornerRadius_);
    _objc_release(v47);
    _objc_release(v45);
    v48 = _objc_msgSend(a0, SEL_avatarView);
    v49 = _objc_retainAutoreleasedReturnValue(v48, SEL_avatarView);
    _objc_msgSend(v49, SEL_setClipsToBounds_, 1);
    _objc_release(v49);
    v50 = _objc_msgSend(a0, SEL_badgeLabel);
    v51 = _objc_retainAutoreleasedReturnValue(v50, SEL_badgeLabel);
    v52 = _objc_msgSend(v51, SEL_isHidden);
    _objc_release(v51);
    if (!((char)v52 & 1))
    {
        v53 = unsupported_Iop_ZeroHI64ofV128();
        v54 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v53, 0x4034000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0x4034000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v53, 0x4034000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0x4034000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v53, 0x4034000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0x4034000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v54)
            v53 = 0x4034000000000000;
        v55 = _objc_msgSend();
        v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_badgeLabel);
        _objc_msgSend(v56, SEL_sizeThatFits_);
        _objc_release(v56);
        v57 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v53, 0xc011ffffffffffff)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0xc011ffffffffffff) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v53, 0xc011ffffffffffff)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0xc011ffffffffffff) & 1)) & ((unsigned long long)(char)(CmpF(v53, 0xc011ffffffffffff)) >> 5 & 3 | (unsigned long long)(CmpF(v53, 0xc011ffffffffffff) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        v58 = _objc_msgSend();
        v59 = _objc_retainAutoreleasedReturnValue(v58, SEL_badgeLabel);
        _objc_msgSend(v59, SEL_setFrame_);
        _objc_release(v59);
        v60 = _objc_msgSend(a0, SEL_badgeLabel);
        v61 = _objc_retainAutoreleasedReturnValue(v60, SEL_badgeLabel);
        v62 = _objc_msgSend(v61, SEL_layer);
        v63 = _objc_retainAutoreleasedReturnValue(v62, SEL_layer);
        _objc_msgSend(v63, SEL_setCornerRadius_);
        _objc_release(v63);
        _objc_release(v61);
        v64 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) & ((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    }
    v65 = _objc_msgSend(a0, SEL_avatarView);
    v66 = _objc_retainAutoreleasedReturnValue(v65, SEL_avatarView);
    v67 = _objc_msgSend(v66, SEL_frame);
    _CGRectGetMaxX(v67, SEL_frame);
    v68 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) & ((unsigned long long)(char)(CmpF(v6, 0x405b800000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v6, 0x405b800000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    _objc_release();
    v69 = unsupported_Iop_ZeroHI64ofV128();
    v70 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v69, 0x402f000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, 0x402f000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v69, 0x402f000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, 0x402f000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v69, 0x402f000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, 0x402f000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    v71 = _objc_msgSend();
    len = _objc_retainAutoreleasedReturnValue(v71, SEL_systemFontOfSize_weight_);
    v73 = _objc_msgSend(a0, SEL_nameLabel);
    v74 = _objc_retainAutoreleasedReturnValue(v73, SEL_nameLabel);
    _objc_msgSend(v74, SEL_setFont_, len);
    _objc_release(v74);
    _objc_release(len);
    v75 = _objc_msgSend(a0, SEL_nameLabel);
    v76 = _objc_retainAutoreleasedReturnValue(v75, SEL_nameLabel);
    _objc_msgSend(v76, SEL_setFrame_);
    _objc_release(v76);
    v77 = _objc_msgSend(a0, SEL_colorTintView);
    len1 = _objc_retainAutoreleasedReturnValue(v77, SEL_colorTintView);
    _objc_msgSend(a0, SEL_bringSubviewToFront_, len1);
    _objc_release(len1);
    v79 = _objc_msgSend(a0, SEL_avatarView);
    len2 = _objc_retainAutoreleasedReturnValue(v79, SEL_avatarView);
    _objc_msgSend(a0, SEL_bringSubviewToFront_, len2);
    _objc_release(len2);
    v81 = _objc_msgSend(a0, SEL_nameLabel);
    v82 = _objc_retainAutoreleasedReturnValue(v81, SEL_nameLabel);
    _objc_msgSend(a0, SEL_bringSubviewToFront_, v82);
    _objc_release(v82);
    v83 = _objc_msgSend(a0, SEL_badgeLabel);
    v84 = _objc_retainAutoreleasedReturnValue(v83, SEL_badgeLabel);
    _objc_msgSend(a0, SEL_bringSubviewToFront_, v84);
    return _objc_release(v84);
}
