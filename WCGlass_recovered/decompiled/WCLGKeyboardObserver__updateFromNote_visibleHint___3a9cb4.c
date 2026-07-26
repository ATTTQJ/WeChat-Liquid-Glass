/* Recovered pseudocode
 * Objective-C: -[WCLGKeyboardObserver updateFromNote:visibleHint:]
 * Address: 0x3a9cb4; original size: 1160 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.773s
 */

void sub_3a9cb4(unsigned long a0, unsigned long a1, long long a2, unsigned long long a3)
{
    unsigned long long v26;  // d15
    unsigned long long v27;  // d14
    unsigned long long v36;  // x26
    unsigned long long v37;  // x25
    unsigned long long v38;  // x24
    unsigned long long v39;  // x23
    unsigned long long v40;  // x22
    unsigned long long v41;  // x21
    unsigned long long v42;  // x20
    unsigned long long v43;  // x19
    unsigned long long v44;  // x30
    long long count;  // x0
    unsigned long long v28;  // d13
    long long v46;  // x0
    long long count1;  // x0
    unsigned long long v48;  // x20
    unsigned long long v49;  // d13
    unsigned long v50;  // d9
    unsigned long v51;  // d10
    unsigned long v52;  // d11
    long long count2;  // x0
    long long v54;  // x21
    unsigned long long v55;  // d0
    unsigned long long v29;  // d12
    unsigned long long v56;  // w25
    long long v57;  // x0
    long long v58;  // x0
    unsigned long long v59;  // d12
    unsigned long long v61;  // d8
    unsigned long long v62;  // d0
    unsigned long v63;  // 4129
    unsigned long long v64;  // d12
    unsigned long long v30;  // d11
    unsigned long long v66;  // d8
    unsigned long long v67;  // d0
    unsigned long v68;  // 4129
    unsigned long long v69;  // d8
    unsigned long v70;  // 4152
    unsigned long v71;  // 4102
    unsigned long v72;  // 4102
    unsigned long long v73;  // x24
    long long v74;  // x0
    long long v75;  // x0
    unsigned long long v31;  // d10
    long long v76;  // x0
    long long v77;  // x22
    unsigned long long v78;  // d8
    unsigned long v79;  // 4141
    unsigned long long v80;  // cc_dep1
    unsigned long long v81;  // d0
    unsigned long v82;  // 4127
    unsigned long v83;  // 4133
    unsigned long long v84;  // d0
    unsigned long long v85;  // x8
    unsigned long long v32;  // d9
    unsigned long long v86;  // x25
    unsigned long v87;  // d0
    unsigned long v88;  // 4130
    unsigned long long v33;  // d8
    unsigned long long v34;  // x28
    unsigned long long v35;  // x27
    unsigned long long v0;  // [bp-0xd8]
    int v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v19;  // [bp-0x30]
    unsigned long long v20;  // [bp-0x28]
    unsigned long long v21;  // [bp-0x20]
    unsigned long long v22;  // [bp-0x18]
    char *v23;  // [bp-0x10]
    unsigned long long v24;  // [bp-0x8]
    char v25;  // [bp+0x0]

    v5 = v26;
    v6 = v27;
    v7 = v28;
    v8 = v29;
    v9 = v30;
    v10 = v31;
    v11 = v32;
    v12 = v33;
    v13 = v34;
    v14 = v35;
    v15 = v36;
    v16 = v37;
    v17 = v38;
    v18 = v39;
    v19 = v40;
    v20 = v41;
    v21 = v42;
    v22 = v43;
    v23 = &v25;
    v24 = v44;
    v4 = *((long long *)&g_600760);
    _objc_retain(a2);
    count = _objc_msgSend(a2, SEL_userInfo);
    v46 = _objc_retainAutoreleasedReturnValue(count, SEL_userInfo);
    count1 = _objc_msgSend(v46, SEL_objectForKeyedSubscript_, *((long long *)&g_600418));
    v48 = _objc_retainAutoreleasedReturnValue(count1, SEL_objectForKeyedSubscript_, *((long long *)&g_600418));
    _objc_release(v46);
    if (v48)
    {
        _objc_msgSend(v48, SEL_CGRectValue);
    }
    else
    {
        v49 = *((long long *)&g_600608);
        v50 = *((long long *)&g_600610);
        v51 = *((long long *)&g_600618);
        v52 = *((long long *)&g_600620);
    }
    count2 = _objc_msgSend(a2, SEL_name);
    v54 = _objc_retainAutoreleasedReturnValue(count2, SEL_name);
    if (((char)_objc_msgSend(v54, SEL_isEqualToString_, *((long long *)&g_600428)) & 1) || ((char)_objc_msgSend(v54, SEL_isEqualToString_, *((long long *)&g_600408)) & 1))
    {
        v56 = 1;
        goto LABEL_3a9de8;
    }
    else
    {
        v55 = v49;
        if (((char)_CGRectIsEmpty() & 1))
        {
            _os_unfair_lock_lock(&g_581e08);
            if (a3)
                goto LABEL_3aa11c;
            v56 = 0;
LABEL_3a9df4:
            v73 = 0;
            v55 = *((int128_t *)&g_600608);
            *((int128_t *)&g_581e10) = *((int128_t *)&g_600608);
            *((int128_t *)&g_581e20) = *((int128_t *)&g_600618);
            goto LABEL_3a9e08;
        }
        v57 = _objc_msgSend(g_4c4128, SEL_mainScreen);
        v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_mainScreen);
        _objc_msgSend(v58, SEL_bounds);
        v59 = v55;
        v0 = v49;
        v61 = v59;
        v62 = v59;
        v49 = v0;
        _CGRectGetHeight(_CGRectGetWidth(_objc_release(v58)));
        v63 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v61, v62)) >> 5 & 3 | (unsigned long long)(CmpF(v61, v62) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v61, v62)) >> 5 & 3 | (unsigned long long)(CmpF(v61, v62) & 1)) & ((unsigned long long)(char)(CmpF(v61, v62)) >> 5 & 3 | (unsigned long long)(CmpF(v61, v62) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v63)
            v64 = v62;
        else
            v64 = v61;
        v66 = v49;
        v67 = v49;
        _CGRectGetMaxY(_CGRectGetMinY());
        v68 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v66, v67)) >> 5 & 3 | (unsigned long long)(CmpF(v66, v67) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v66, v67)) >> 5 & 3 | (unsigned long long)(CmpF(v66, v67) & 1)) & ((unsigned long long)(char)(CmpF(v66, v67)) >> 5 & 3 | (unsigned long long)(CmpF(v66, v67) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v68)
            v69 = v66;
        else
            v69 = v67;
        v55 = v49;
        _CGRectGetHeight();
        v70 = arm64g_calculate_condition(160, (((((unsigned long long)(char)(CmpF(v55, 0x4054000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v55, 0x4054000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v55, 0x4054000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v55, 0x4054000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v55, 0x4054000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v55, 0x4054000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v70)
        {
            v71 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v69, v64 + 0xc044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, v64 + 0xc044000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v69, v64 + 0xc044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, v64 + 0xc044000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v69, v64 + 0xc044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v69, v64 + 0xc044000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
            if ((char)v71)
                goto LABEL_3aa110;
LABEL_3aa108:
            v56 = 0;
LABEL_3a9de8:
            _os_unfair_lock_lock(&g_581e08);
            goto LABEL_3a9df4;
        }
        else
        {
            v72 = arm64g_calculate_condition(64, 0, 0, 0);
            if (!((char)v72))
                goto LABEL_3aa108;
LABEL_3aa110:
            _os_unfair_lock_lock(&g_581e08);
LABEL_3aa11c:
            v56 = 0;
            *((unsigned long long *)&g_581e10) = v49;
            g_581e18 = v50;
            *((unsigned long *)&g_581e20) = v51;
            g_581e28 = v52;
            v73 = 1;
        }
    }
LABEL_3a9e08:
    _os_unfair_lock_unlock(&g_581e08);
    g_581e30 = v73;
    v74 = _objc_msgSend(a2, SEL_userInfo);
    v75 = _objc_retainAutoreleasedReturnValue(v74, SEL_userInfo);
    v76 = _objc_msgSend(v75, SEL_objectForKeyedSubscript_, *((long long *)&g_6003f8));
    v77 = _objc_retainAutoreleasedReturnValue(v76, SEL_objectForKeyedSubscript_, *((long long *)&g_6003f8));
    _objc_release(v75);
    v78 = 0x3fd0000000000000;
    if (_objc_msgSend(v77, SEL_respondsToSelector_, SEL_doubleValue))
    {
        _objc_msgSend(v77, SEL_doubleValue);
        v78 = v55;
    }
    _objc_release(v77);
    if (v56)
    {
        v79 = arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v78, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v78, 0x3ff0000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v78, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v78, 0x3ff0000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v78, 0x3ff0000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v78, 0x3ff0000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if ((char)v79)
            v80 = ((((CmpF(v78, 4576918229304087675) >> 5 & 3 | CmpF(v78, 4576918229304087675) & 1) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - ((CmpF(v78, 4576918229304087675) >> 5 & 3 | CmpF(v78, 4576918229304087675) & 1) & (CmpF(v78, 4576918229304087675) >> 5 & 3 | CmpF(v78, 4576918229304087675) & 1) >> 1 & 1)) * 0x10000000;
        else
            v80 = 0x80000000;
        v81 = v78 + 4585925428558828667;
        v82 = arm64g_calculate_condition(64, v80, 0, 0);
        if ((char)v82)
            v81 = 0x3fd28f5c28f5c28f;
        v83 = arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v81, 0x3fc70a3d70a3d70a)) >> 5 & 3 | (unsigned long long)(CmpF(v81, 0x3fc70a3d70a3d70a) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v81, 0x3fc70a3d70a3d70a)) >> 5 & 3 | (unsigned long long)(CmpF(v81, 0x3fc70a3d70a3d70a) & 1)) & ((unsigned long long)(char)(CmpF(v81, 0x3fc70a3d70a3d70a)) >> 5 & 3 | (unsigned long long)(CmpF(v81, 0x3fc70a3d70a3d70a) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        v84 = unsupported_Iop_ZeroHI64ofV128();
        v85 = 4;
    }
    else
    {
        v84 = 0x3fc47ae147ae147b;
        v85 = 3;
    }
    v86 = 0;
    v1 = 0x3fa999999999999a0000000000000000;
    v2 = 0x3fc47ae147ae147b;
    v3 = v84;
    do
    {
        v87 = *((long long *)((char *)&v1 + v86));
        v88 = arm64g_calculate_condition(144, (((((unsigned long long)(char)(CmpF(v87, 4562254508917369340)) >> 5 & 3 | (unsigned long long)(CmpF(v87, 4562254508917369340) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v87, 4562254508917369340)) >> 5 & 3 | (unsigned long long)(CmpF(v87, 4562254508917369340) & 1)) & ((unsigned long long)(char)(CmpF(v87, 4562254508917369340)) >> 5 & 3 | (unsigned long long)(CmpF(v87, 4562254508917369340) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if (!((char)v88))
            _dispatch_after(_dispatch_time(0, v87 * 0x41cdcd6500000000), &g_600770, &g_4a57c0);
        else
            _dispatch_async(&g_600770, &g_4a57a0);
    } while ((v86 += 8, (__ROL__(v85, 3) & 0xfffffffffffffff8) != v86));
    _objc_release(v54);
    _objc_release(v48);
    if (*((long long *)&g_600760) == v4)
    {
        _objc_release();
        return;
    }
    ___stack_chk_fail();
}
