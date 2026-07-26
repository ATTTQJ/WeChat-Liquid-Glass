/* Recovered pseudocode
 * Objective-C: -[WCLGHomeCapsulePinnedController presentActionsForUser:]
 * Address: 0x315324; original size: 2420 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.946s
 */

long long sub_315324(long long a0, unsigned long a1, long long a2)
{
    long long v35;  // x24
    long long v36;  // x2
    long long count;  // x0
    long long len;  // x24
    long long count1;  // x0
    long long len1;  // x20
    long long v49;  // x0
    unsigned long long count2;  // x0
    long long v51;  // x0
    long long len2;  // x20
    long long v53;  // x0
    long long v54;  // x20
    long long v37;  // x0
    long long v55;  // x0
    long long v56;  // x20
    long long v57;  // x0
    long long v58;  // x20
    long long v59;  // x0
    long long v60;  // x24
    long long v61;  // x0
    long long v62;  // x0
    long long v63;  // x0
    long long v64;  // x0
    long long v38;  // x26
    long long v65;  // x0
    long long v66;  // x0
    long long v39;  // x0
    long long v40;  // x24
    long long v41;  // x0
    long long v42;  // x24
    long long v43;  // x0
    long long v44;  // x24
    unsigned long v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x168]
    long long v4;  // [bp-0x160]
    char v5;  // [bp-0x158]
    unsigned long v6;  // [bp-0x150]
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    unsigned long long v9;  // [bp-0x138]
    long long v10;  // [bp-0x130]
    char v11;  // [bp-0x128]
    unsigned long v12;  // [bp-0x120]
    unsigned long long v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x110]
    unsigned long long v15;  // [bp-0x108]
    long long v16;  // [bp-0x100]
    char v17;  // [bp-0xf8]
    unsigned long v18;  // [bp-0xf0]
    unsigned long long v19;  // [bp-0xe8]
    unsigned long long v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xd8]
    long long v22;  // [bp-0xd0]
    char v23;  // [bp-0xc8]
    unsigned long v24;  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    unsigned long long v27;  // [bp-0xa8]
    long long v28;  // [bp-0xa0]
    char v29;  // [bp-0x98]
    char v30;  // [bp-0x90]
    long long v31;  // [bp-0x80]
    char *v32;  // [bp-0x78]
    char *v33;  // [bp-0x10]
    char v34;  // [bp+0x0]

    v33 = &v34;
    /* unsupported instruction */
    if (!(int)g_580b14)
    {
        *((unsigned short *)&g_547722) = g_547714 ^ 270;
        *((unsigned short *)&g_547724) = g_547716 ^ 59180;
        *((unsigned short *)&g_547726) = g_547718 ^ 19732;
        *((unsigned short *)&g_547728) = g_54771a ^ 12907;
        *((unsigned short *)&g_54772a) = g_54771c ^ 52234;
        *((unsigned short *)&g_54772c) = g_54771e ^ 20189;
        *((unsigned short *)&g_54772e) = g_547720 ^ 28824;
        *((unsigned short *)&g_5476ea) = g_5476e0 ^ 25053;
        *((unsigned short *)&g_5476ec) = g_5476e2 ^ 403;
        *((unsigned short *)&g_5476ee) = g_5476e4 ^ 35597;
        *((unsigned short *)&g_5476f0) = g_5476e6 ^ 30322;
        *((unsigned short *)&g_5476f2) = g_5476e8 ^ 41949;
        *((unsigned short *)&g_54770e) = g_547708 ^ 64463;
        *((unsigned short *)&g_547710) = g_54770a ^ 31194;
        *((unsigned short *)&g_547712) = g_54770c ^ 45156;
        *((unsigned short *)&g_547752) = g_547744 ^ 15142;
        *((unsigned short *)&g_547754) = g_547746 ^ 20777;
        *((unsigned short *)&g_547756) = g_547748 ^ 56671;
        *((unsigned short *)&g_547758) = g_54774a ^ 24746;
        *((unsigned short *)&g_54775a) = g_54774c ^ 27387;
        *((unsigned short *)&g_54775c) = g_54774e ^ 64381;
        *((unsigned short *)&g_54775e) = g_547750 ^ 19750;
        *((unsigned short *)&g_54773a) = g_547730 ^ 46516;
        *((unsigned short *)&g_54773c) = g_547732 ^ 32474;
        *((unsigned short *)&g_54773e) = g_547734 ^ 9005;
        *((unsigned short *)&g_547740) = g_547736 ^ 30959;
        *((unsigned short *)&g_547742) = g_547738 ^ 8601;
        *((unsigned short *)&g_5476fe) = g_5476f4 ^ 53271;
        *((unsigned short *)&g_547700) = g_5476f6 ^ 51211;
        *((unsigned short *)&g_547702) = g_5476f8 ^ 22778;
        *((unsigned short *)&g_547704) = g_5476fa ^ 33543;
        *((unsigned short *)&g_547706) = g_5476fc ^ 19273;
        *((unsigned short *)&g_5476d6) = g_5476cc ^ 42705;
        *((unsigned short *)&g_5476d8) = g_5476ce ^ 17018;
        *((unsigned short *)&g_5476da) = g_5476d0 ^ 6506;
        *((unsigned short *)&g_5476dc) = g_5476d2 ^ 20112;
        *((unsigned short *)&g_5476de) = g_5476d4 ^ 9170;
        *((unsigned short *)&g_5476c6) = g_5476c0 ^ 25255;
        *((unsigned short *)&g_5476c8) = g_5476c2 ^ 9673;
        *((unsigned short *)&g_5476ca) = g_5476c4 ^ 14928;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580b14) = 1;
    v32 = &v30;
    v35 = _objc_retainAutoreleasedReturnValue(sub_315cfc(_objc_retain(a2)));
    if (v35 && _objc_msgSend(a2, SEL_length))
    {
        v31 = v35;
        v36 = _objc_retainAutoreleasedReturnValue(sub_314040(a2));
        v37 = _objc_msgSend(g_4c4310, SEL_alertControllerWithTitle_message_preferredStyle_, v36, 0, 0);
        v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_alertControllerWithTitle_message_preferredStyle_, v36, 0, 0);
        _objc_release(v36);
        _objc_initWeak(v32, a0);
        v24 = &g_600748;
        v25 = 0xc2000000;
        v26 = 3235952;
        v27 = &g_4a2ca8;
        _objc_copyWeak(&v29, v32);
        _objc_retain(a2);
        v28 = a2;
        v39 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547940, 0, &v24);
        v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_actionWithTitle_style_handler_, &g_547940, 0, &v24);
        _objc_msgSend(v38, SEL_addAction_, v40);
        _objc_release(v40);
        v18 = &g_600748;
        v19 = 0xc2000000;
        v20 = 3236184;
        v21 = &g_4a2ca8;
        _objc_copyWeak(&v23, v32);
        _objc_retain(a2);
        v22 = a2;
        v41 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547840, 0, &v18);
        v42 = _objc_retainAutoreleasedReturnValue(v41, SEL_actionWithTitle_style_handler_, &g_547840, 0, &v18);
        _objc_msgSend(v38, SEL_addAction_, v42);
        _objc_release(v42);
        v12 = &g_600748;
        v13 = 0xc2000000;
        v14 = 3236416;
        v15 = &g_4a2ca8;
        _objc_copyWeak(&v17, v32);
        _objc_retain(a2);
        v16 = a2;
        v43 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547900, 0, &v12);
        v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_actionWithTitle_style_handler_, &g_547900, 0, &v12);
        _objc_msgSend(v38, SEL_addAction_, v44);
        _objc_release(v44);
        if (sub_37ff8c(a2))
        {
            v6 = &g_600748;
            v7 = 0xc2000000;
            v8 = 3236648;
            v9 = &g_4a2ca8;
            _objc_retain(a2);
            v10 = a2;
            _objc_copyWeak(&v11, v32);
            count = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547800, 0, &v6);
            len = _objc_retainAutoreleasedReturnValue(count, SEL_actionWithTitle_style_handler_, &g_547800, 0, &v6);
            _objc_msgSend(v38, SEL_addAction_, len);
            _objc_release(len);
            _objc_destroyWeak(&v11);
            _objc_release(v10);
        }
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 3236712;
        v3 = &g_4a2ca8;
        _objc_copyWeak(&v5, v32);
        _objc_retain(a2);
        v4 = a2;
        count1 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_5478c0, 2, &v0);
        len1 = _objc_retainAutoreleasedReturnValue(count1, SEL_actionWithTitle_style_handler_, &g_5478c0, 2, &v0);
        _objc_msgSend(v38, SEL_addAction_, len1);
        v49 = _objc_retainAutoreleasedReturnValue(sub_31247c(_objc_release(len1)));
        count2 = _objc_msgSend(v49, SEL_count);
        _objc_release(v49);
        if (23 >= count2)
        {
            v51 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_5477c0, 0, &g_4a4a48);
            len2 = _objc_retainAutoreleasedReturnValue(v51, SEL_actionWithTitle_style_handler_, &g_5477c0, 0, &g_4a4a48);
            _objc_msgSend(v38, SEL_addAction_, len2);
            _objc_release(len2);
        }
        v53 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547880, 0, &g_4a4a88);
        v54 = _objc_retainAutoreleasedReturnValue(v53, SEL_actionWithTitle_style_handler_, &g_547880, 0, &g_4a4a88);
        _objc_msgSend(v38, SEL_addAction_, v54);
        _objc_release(v54);
        v55 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_547780, 1, 0);
        v56 = _objc_retainAutoreleasedReturnValue(v55, SEL_actionWithTitle_style_handler_, &g_547780, 1, 0);
        _objc_msgSend(v38, SEL_addAction_, v56);
        _objc_release(v56);
        v57 = _objc_msgSend(v38, SEL_popoverPresentationController);
        v58 = _objc_retainAutoreleasedReturnValue(v57, SEL_popoverPresentationController);
        if (v58)
        {
            v59 = _objc_msgSend(v31, SEL_view);
            v60 = _objc_retainAutoreleasedReturnValue(v59, SEL_view);
            _objc_msgSend(v58, SEL_setSourceView_, v60);
            _objc_release(v60);
            v61 = _objc_msgSend(v31, SEL_view);
            v62 = _objc_retainAutoreleasedReturnValue(v61, SEL_view);
            v63 = _objc_msgSend(v62, SEL_bounds);
            _CGRectGetMidX(v63, SEL_bounds);
            v64 = _objc_msgSend(v31, SEL_view);
            v65 = _objc_retainAutoreleasedReturnValue(v64, SEL_view);
            v66 = _objc_msgSend(v65, SEL_bounds);
            _CGRectGetMidY(v66, SEL_bounds);
            _objc_msgSend(v58, SEL_setSourceRect_);
            _objc_release(v65);
            _objc_release(v62);
            _objc_msgSend(v58, SEL_setPermittedArrowDirections_, 0);
        }
        _objc_msgSend(v31, SEL_presentViewController_animated_completion_, v38, 1, 0);
        _objc_release(v58);
        _objc_release(v4);
        _objc_destroyWeak(&v5);
        _objc_release(v16);
        _objc_destroyWeak(&v17);
        _objc_release(v22);
        _objc_destroyWeak(&v23);
        _objc_release(v28);
        _objc_destroyWeak(&v29);
        _objc_destroyWeak(v32);
        _objc_release(v38);
        v35 = v31;
    }
    _objc_release(v35);
    return _objc_release(a2);
}
