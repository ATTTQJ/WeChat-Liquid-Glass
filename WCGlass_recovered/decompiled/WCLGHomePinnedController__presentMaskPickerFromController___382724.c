/* Recovered pseudocode
 * Objective-C: -[WCLGHomePinnedController presentMaskPickerFromController:]
 * Address: 0x382724; original size: 2452 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.628s
 */

long long sub_382724(long long a0, unsigned long a1, long long a2)
{
    long long v13;  // x19
    long long count;  // x0
    long long len;  // x26
    long long count1;  // x0
    long long len1;  // x24
    long long count2;  // x0
    long long v27;  // x24
    long long v28;  // x0
    long long len2;  // x25
    long long v30;  // x0
    long long v31;  // x0
    long long v32;  // x0
    long long v15;  // x23
    long long v33;  // x0
    long long v34;  // x0
    long long v35;  // x0
    long long v16;  // x0
    long long v17;  // x26
    long long v18;  // x0
    long long v19;  // x26
    long long v20;  // x0
    long long v21;  // x26
    long long v22;  // x0
    unsigned long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    char v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x80]
    char *v11;  // [bp-0x10]
    char v12;  // [bp+0x0]

    v11 = &v12;
    v13 = a2;
    /* unsupported instruction */
    if (!g_581910)
    {
        *((unsigned short *)&g_552c40) = g_552be0 ^ 51814;
        *((unsigned short *)&g_552c42) = g_552be2 ^ 25645;
        *((unsigned short *)&g_552c44) = g_552be4 ^ 30533;
        *((unsigned short *)&g_552c46) = g_552be6 ^ 43799;
        *((unsigned short *)&g_552c48) = g_552be8 ^ 16522;
        *((unsigned short *)&g_552c4a) = g_552bea ^ 17240;
        *((unsigned short *)&g_552c4c) = g_552bec ^ 0x7fef;
        *((unsigned short *)&g_552c4e) = g_552bee ^ 5804;
        *((unsigned short *)&g_552c50) = g_552bf0 ^ 31385;
        *((unsigned short *)&g_552c52) = g_552bf2 ^ 59672;
        *((unsigned short *)&g_552c54) = g_552bf4 ^ 805;
        *((unsigned short *)&g_552c56) = g_552bf6 ^ 55003;
        *((unsigned short *)&g_552c58) = g_552bf8 ^ 38278;
        *((unsigned short *)&g_552c5a) = g_552bfa ^ 36653;
        *((unsigned short *)&g_552c5c) = g_552bfc ^ 29272;
        *((unsigned short *)&g_552c5e) = g_552bfe ^ 24723;
        *((unsigned short *)&g_552c60) = g_552c00 ^ 4971;
        *((unsigned short *)&g_552c62) = g_552c02 ^ 15491;
        *((unsigned short *)&g_552c64) = g_552c04 ^ 51875;
        *((unsigned short *)&g_552c66) = g_552c06 ^ 29611;
        *((unsigned short *)&g_552c68) = g_552c08 ^ 976;
        *((unsigned short *)&g_552c6a) = g_552c0a ^ 11275;
        *((unsigned short *)&g_552c6c) = g_552c0c ^ 9745;
        *((unsigned short *)&g_552c6e) = g_552c0e ^ 22406;
        *((unsigned short *)&g_552c70) = g_552c10 ^ 0x63ff;
        *((unsigned short *)&g_552c72) = g_552c12 ^ 2377;
        *((unsigned short *)&g_552c74) = g_552c14 ^ 48590;
        *((unsigned short *)&g_552c76) = g_552c16 ^ 28134;
        *((unsigned short *)&g_552c78) = g_552c18 ^ 44983;
        *((unsigned short *)&g_552c7a) = g_552c1a ^ 39437;
        *((unsigned short *)&g_552c7c) = g_552c1c ^ 53697;
        *((unsigned short *)&g_552c7e) = g_552c1e ^ 37300;
        *((unsigned short *)&g_552c80) = g_552c20 ^ 63828;
        *((unsigned short *)&g_552c82) = g_552c22 ^ 23048;
        *((unsigned short *)&g_552c84) = g_552c24 ^ 28507;
        *((unsigned short *)&g_552c86) = g_552c26 ^ 16274;
        *((unsigned short *)&g_552c88) = g_552c28 ^ 30958;
        *((unsigned short *)&g_552c8a) = g_552c2a ^ 55071;
        *((unsigned short *)&g_552c8c) = g_552c2c ^ 41897;
        *((unsigned short *)&g_552c8e) = g_552c2e ^ 60893;
        *((unsigned short *)&g_552c90) = g_552c30 ^ 38017;
        *((unsigned short *)&g_552bc0) = g_552ba0 ^ 19916;
        *((unsigned short *)&g_552bc2) = g_552ba2 ^ 9194;
        *((unsigned short *)&g_552bc4) = g_552ba4 ^ 61387;
        *((unsigned short *)&g_552bc6) = g_552ba6 ^ 27221;
        *((unsigned short *)&g_552bc8) = g_552ba8 ^ 1627;
        *((unsigned short *)&g_552bca) = g_552baa ^ 0x8ff5;
        *((unsigned short *)&g_552bcc) = g_552bac ^ 63243;
        *((unsigned short *)&g_552bce) = g_552bae ^ 48291;
        *((unsigned short *)&g_552bd0) = g_552bb0 ^ 5263;
        *((unsigned short *)&g_552bd2) = g_552bb2 ^ 19976;
        *((unsigned short *)&g_552b46) = g_552b38 ^ 62420;
        *((unsigned short *)&g_552b48) = g_552b3a ^ 11925;
        *((unsigned short *)&g_552b4a) = g_552b3c ^ 61718;
        *((unsigned short *)&g_552b4c) = g_552b3e ^ 39857;
        *((unsigned short *)&g_552b4e) = g_552b40 ^ 10827;
        *((unsigned short *)&g_552b50) = g_552b42 ^ 38073;
        *((unsigned short *)&g_552b52) = g_552b44 ^ 2840;
        *((unsigned short *)&g_552b80) = g_552b60 ^ 44644;
        *((unsigned short *)&g_552b82) = g_552b62 ^ 14603;
        *((unsigned short *)&g_552b84) = g_552b64 ^ 21884;
        *((unsigned short *)&g_552b86) = g_552b66 ^ 43758;
        *((unsigned short *)&g_552b88) = g_552b68 ^ 28215;
        *((unsigned short *)&g_552b8a) = g_552b6a ^ 55391;
        *((unsigned short *)&g_552b8c) = g_552b6c ^ 32609;
        *((unsigned short *)&g_552b8e) = g_552b6e ^ 12063;
        *((unsigned short *)&g_552b90) = g_552b70 ^ 36469;
        *((unsigned short *)&g_552b92) = g_552b72 ^ 21770;
        *((unsigned short *)&g_552b2a) = g_552b1c ^ 48623;
        *((unsigned short *)&g_552b2c) = g_552b1e ^ 15045;
        *((unsigned short *)&g_552b2e) = g_552b20 ^ 36099;
        *((unsigned short *)&g_552b30) = g_552b22 ^ 9050;
        *((unsigned short *)&g_552b32) = g_552b24 ^ 8519;
        *((unsigned short *)&g_552b34) = g_552b26 ^ 19896;
        *((unsigned short *)&g_552b36) = g_552b28 ^ 16018;
        *((unsigned short *)&g_552c9c) = g_552c92 ^ 21311;
        *((unsigned short *)&g_552c9e) = g_552c94 ^ 60736;
        *((unsigned short *)&g_552ca0) = g_552c96 ^ 3355;
        *((unsigned short *)&g_552ca2) = g_552c98 ^ 32584;
        *((unsigned short *)&g_552ca4) = g_552c9a ^ 58981;
        *((unsigned short *)&g_552b16) = g_552b10 ^ 33084;
        *((unsigned short *)&g_552b18) = g_552b12 ^ 9528;
        *((unsigned short *)&g_552b1a) = g_552b14 ^ 17678;
    }
    /* unsupported instruction */
    g_581910 = 1;
    _objc_retain(v13);
    if (v13)
    {
        count = _objc_msgSend(g_4c4310, SEL_alertControllerWithTitle_message_preferredStyle_, &g_552e50, &g_552e10, 0);
        v15 = _objc_retainAutoreleasedReturnValue(count, SEL_alertControllerWithTitle_message_preferredStyle_, &g_552e50, &g_552e10, 0);
        _objc_initWeak(&v10, a0);
        v5 = &g_600748;
        v6 = 0xc2000000;
        v7 = 3682540;
        v8 = &g_4a2cd8;
        _objc_copyWeak(&v9, &v10);
        v16 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_552d90, 0, &v5);
        v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_actionWithTitle_style_handler_, &g_552d90, 0, &v5);
        _objc_msgSend(v15, SEL_addAction_, v17);
        _objc_release(v17);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 3682628;
        v3 = &g_4a2cd8;
        _objc_copyWeak(&v4, &v10);
        v18 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_552dd0, 0, &v0);
        v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_actionWithTitle_style_handler_, &g_552dd0, 0, &v0);
        _objc_msgSend(v15, SEL_addAction_, v19);
        _objc_release(v19);
        v13 = v13;
        if (sub_37ae3c(0))
        {
            v20 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_552d50, 2, &g_4a5438);
            v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_actionWithTitle_style_handler_, &g_552d50, 2, &g_4a5438);
            _objc_msgSend(v15, SEL_addAction_, v21);
            _objc_release(v21);
        }
        if (sub_37ae3c(1))
        {
            v22 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_552d10, 2, &g_4a5458);
            len = _objc_retainAutoreleasedReturnValue(v22, SEL_actionWithTitle_style_handler_, &g_552d10, 2, &g_4a5458);
            _objc_msgSend(v15, SEL_addAction_, len);
            _objc_release(len);
        }
        count1 = _objc_msgSend(g_4c4318, SEL_actionWithTitle_style_handler_, &g_552cd0, 1, 0);
        len1 = _objc_retainAutoreleasedReturnValue(count1, SEL_actionWithTitle_style_handler_, &g_552cd0, 1, 0);
        _objc_msgSend(v15, SEL_addAction_, len1);
        _objc_release(len1);
        count2 = _objc_msgSend(v15, SEL_popoverPresentationController);
        v27 = _objc_retainAutoreleasedReturnValue(count2, SEL_popoverPresentationController);
        if (v27)
        {
            v28 = _objc_msgSend(v13, SEL_view);
            len2 = _objc_retainAutoreleasedReturnValue(v28, SEL_view);
            _objc_msgSend(v27, SEL_setSourceView_, len2);
            _objc_release(len2);
            v30 = _objc_msgSend(v13, SEL_view);
            v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_view);
            v32 = _objc_msgSend(v31, SEL_bounds);
            _CGRectGetMidX(v32, SEL_bounds);
            v33 = _objc_msgSend(v13, SEL_view);
            v34 = _objc_retainAutoreleasedReturnValue(v33, SEL_view);
            v35 = _objc_msgSend(v34, SEL_bounds);
            _CGRectGetMidY(v35, SEL_bounds);
            _objc_msgSend(v27, SEL_setSourceRect_);
            _objc_release(v34);
            _objc_release(v31);
            _objc_msgSend(v27, SEL_setPermittedArrowDirections_, 0);
        }
        _objc_msgSend(v13, SEL_presentViewController_animated_completion_, v15, 1, 0);
        _objc_release(v27);
        _objc_destroyWeak(&v4);
        _objc_destroyWeak(&v9);
        _objc_destroyWeak(&v10);
        _objc_release(v15);
    }
    return _objc_release(v13);
}
