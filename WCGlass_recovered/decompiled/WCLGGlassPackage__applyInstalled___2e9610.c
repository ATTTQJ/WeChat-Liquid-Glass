/* Recovered pseudocode
 * Objective-C: +[WCLGGlassPackage applyInstalled:]
 * Address: 0x2e9610; original size: 3820 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.686s
 */

long long sub_2e9610(unsigned long a0, unsigned long a1, long long len)
{
    long long count;  // x0
    long long v15;  // x21
    long long v24;  // x21
    long long count1;  // x0
    long long v26;  // x0
    unsigned int v27;  // w0
    long long count2;  // x0
    long long len1;  // x25
    long long v30;  // x0
    long long v31;  // x24
    unsigned long i;  // x0
    unsigned long v33;  // x20
    long long v16;  // x2
    unsigned long v34;  // x19
    long long v35;  // x0
    long long v36;  // x0
    long long v37;  // x0
    unsigned int v38;  // w0
    long long v17;  // x0
    long long v18;  // x0
    long long v19;  // x0
    long long v20;  // x2
    long long v21;  // x0
    unsigned long v22;  // x20
    long long v23;  // x0
    long long v0;  // [bp-0x160]
    unsigned long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x138]
    char v5;  // [bp-0x130]
    int v6;  // [bp-0xb0]
    int v7;  // [bp-0xa0]
    int v8;  // [bp-0x90]
    int v9;  // [bp-0x80]
    unsigned long v10;  // [bp-0x70]
    unsigned long v11;  // [bp-0x68]
    char *v12;  // [bp-0x10]
    char v13;  // [bp+0x0]

    v12 = &v13;
    v11 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!*((int *)&g_580468))
    {
        g_540d33 = g_540d2e ^ 209;
        g_540d34 = g_540d2f ^ 252;
        g_540d35 = g_540d30 ^ 56;
        g_540d36 = g_540d31 ^ 1;
        g_540d37 = g_540d32 ^ 91;
        g_540cdc = g_540cd5 ^ 138;
        g_540cdd = g_540cd6 ^ 230;
        g_540cde = g_540cd7 ^ 152;
        g_540cdf = g_540cd8 ^ 110;
        g_540ce0 = g_540cd9 ^ 0xcc;
        g_540ce1 = g_540cda ^ 87;
        g_540ce2 = g_540cdb ^ 103;
        g_540c70 = g_540c50 ^ 50;
        g_540c71 = g_540c51 ^ 218;
        g_540c72 = g_540c52 ^ 186;
        g_540c73 = g_540c53 ^ 198;
        g_540c74 = g_540c54 ^ 202;
        g_540c75 = g_540c55 ^ 0x33;
        g_540c76 = g_540c56 ^ 120;
        g_540c77 = g_540c57 ^ 14;
        g_540c78 = g_540c58 ^ 246;
        g_540c79 = g_540c59 ^ 242;
        g_540c7a = ~(g_540c5a);
        g_540c7b = g_540c5b ^ 146;
        g_540c7c = g_540c5c ^ 59;
        g_540c7d = g_540c5d ^ 246;
        g_540c7e = g_540c5e ^ 0x22;
        g_540c7f = g_540c5f ^ 160;
        g_540c80 = g_540c60 ^ 88;
        g_540c81 = g_540c61 ^ 163;
        g_540c82 = g_540c62 ^ 186;
        g_540c83 = g_540c63 ^ 134;
        g_540c84 = g_540c64 ^ 4;
        g_540c85 = g_540c65 ^ 46;
        g_540c86 = g_540c66 ^ 151;
        g_540c87 = g_540c67 ^ 107;
        g_540c88 = g_540c68 ^ 0x22;
        g_540c89 = g_540c69 ^ 7;
        g_540c8a = g_540c6a ^ 115;
        g_540c8b = g_540c6b ^ 223;
        g_540c8c = g_540c6c ^ 7;
        g_540c30 = g_540c10 ^ 95;
        g_540c31 = g_540c11 ^ 220;
        g_540c32 = g_540c12 ^ 188;
        g_540c33 = g_540c13 ^ 82;
        g_540c34 = g_540c14 ^ 0xee;
        g_540c35 = g_540c15 ^ 122;
        g_540c36 = g_540c16 ^ 77;
        g_540c37 = g_540c17 ^ 127;
        g_540c38 = g_540c18 ^ 244;
        g_540c39 = g_540c19 ^ 222;
        g_540c3a = g_540c1a ^ 189;
        g_540c3b = g_540c1b ^ 173;
        g_540c3c = g_540c1c ^ 43;
        g_540c3d = g_540c1d ^ 148;
        g_540c3e = g_540c1e ^ 182;
        g_540c3f = g_540c1f ^ 2;
        g_540c40 = g_540c20 ^ 222;
        g_540c41 = g_540c21 ^ 205;
        g_540c42 = g_540c22 ^ 88;
        g_540c43 = g_540c23 ^ 156;
        g_540c44 = g_540c24 ^ 59;
        g_540c45 = g_540c25 ^ 42;
        g_540c46 = g_540c26 ^ 188;
        g_540c47 = g_540c27 ^ 240;
        g_540c48 = g_540c28 ^ 0xee;
        g_540c49 = g_540c29 ^ 208;
        g_540c4a = g_540c2a ^ 25;
        g_540c4b = g_540c2b ^ 82;
        g_540c4c = g_540c2c ^ 103;
        g_540c4d = g_540c2d ^ 217;
        g_540c4e = g_540c2e ^ 39;
        g_540c4f = g_540c2f ^ 251;
        g_540ccb = g_540cc1 ^ 0x88;
        g_540ccc = g_540cc2 ^ 176;
        g_540ccd = ~(g_540cc3);
        g_540cce = g_540cc4 ^ 217;
        g_540ccf = g_540cc5 ^ 19;
        g_540cd0 = g_540cc6 ^ 167;
        g_540cd1 = g_540cc7 ^ 8;
        g_540cd2 = g_540cc8 ^ 54;
        g_540cd3 = g_540cc9 ^ 175;
        g_540cd4 = g_540cca ^ 58;
        g_540cb0 = g_540c90 ^ 98;
        g_540cb1 = g_540c91 ^ 109;
        g_540cb2 = g_540c92 ^ 0xaa;
        g_540cb3 = g_540c93 ^ 122;
        g_540cb4 = g_540c94 ^ 30;
        g_540cb5 = g_540c95 ^ 47;
        g_540cb6 = g_540c96 ^ 78;
        g_540cb7 = g_540c97 ^ 61;
        g_540cb8 = g_540c98 ^ 243;
        g_540cb9 = g_540c99 ^ 198;
        g_540cba = g_540c9a ^ 173;
        g_540cbb = g_540c9b ^ 127;
        g_540cbc = g_540c9c ^ 11;
        g_540cbd = g_540c9d ^ 66;
        g_540cbe = g_540c9e ^ 0xaa;
        g_540cbf = g_540c9f ^ 143;
        g_540cc0 = g_540ca0 ^ 113;
        g_540bf0 = g_540bd0 ^ 48;
        g_540bf1 = g_540bd1 ^ 219;
        g_540bf2 = g_540bd2 ^ 0x77;
        g_540bf3 = g_540bd3 ^ 232;
        g_540bf4 = g_540bd4 ^ 155;
        g_540bf5 = g_540bd5 ^ 174;
        g_540bf6 = g_540bd6 ^ 200;
        g_540bf7 = g_540bd7 ^ 177;
        g_540bf8 = g_540bd8 ^ 171;
        g_540bf9 = g_540bd9 ^ 62;
        g_540bfa = g_540bda ^ 4;
        g_540bfb = g_540bdb ^ 114;
        g_540bfc = g_540bdc ^ 156;
        g_540bfd = g_540bdd ^ 188;
        g_540bfe = g_540bde ^ 26;
        g_540bff = g_540bdf ^ 32;
        g_540c00 = g_540be0 ^ 207;
        g_540c01 = g_540be1 ^ 106;
        g_540c02 = g_540be2 ^ 226;
        g_540c03 = g_540be3 ^ 74;
        g_540c04 = g_540be4 ^ 13;
        g_540c05 = g_540be5 ^ 71;
        g_540c06 = g_540be6 ^ 10;
        g_540c07 = g_540be7 ^ 114;
        g_540c08 = g_540be8 ^ 7;
        g_540c09 = g_540be9 ^ 224;
        g_540c0a = g_540bea ^ 251;
        g_540c0b = g_540beb ^ 239;
        g_540c0c = g_540bec ^ 137;
        g_540c0d = g_540bed ^ 139;
        g_540c0e = g_540bee ^ 37;
        g_540bb0 = g_540b90 ^ 101;
        g_540bb1 = g_540b91 ^ 177;
        g_540bb2 = g_540b92 ^ 193;
        g_540bb3 = g_540b93 ^ 66;
        g_540bb4 = g_540b94 ^ 98;
        g_540bb5 = g_540b95 ^ 184;
        g_540bb6 = g_540b96 ^ 240;
        g_540bb7 = g_540b97 ^ 146;
        g_540bb8 = g_540b98 ^ 205;
        g_540bb9 = g_540b99 ^ 20;
        g_540bba = g_540b9a ^ 140;
        g_540bbb = g_540b9b ^ 10;
        g_540bbc = g_540b9c ^ 76;
        g_540bbd = g_540b9d ^ 0x44;
        g_540bbe = g_540b9e ^ 49;
        g_540bbf = g_540b9f ^ 18;
        g_540bc0 = g_540ba0 ^ 235;
        g_540bc1 = g_540ba1 ^ 100;
        g_540bc2 = g_540ba2 ^ 197;
        g_540bc3 = g_540ba3 ^ 173;
        g_540bc4 = g_540ba4 ^ 62;
        g_540d10 = g_540cf0 ^ 28;
        g_540d11 = g_540cf1 ^ 79;
        g_540d12 = g_540cf2 ^ 27;
        g_540d13 = g_540cf3 ^ 189;
        g_540d14 = g_540cf4 ^ 226;
        g_540d15 = g_540cf5 ^ 134;
        g_540d16 = g_540cf6 ^ 41;
        g_540d17 = g_540cf7 ^ 92;
        g_540d18 = g_540cf8 ^ 55;
        g_540d19 = g_540cf9 ^ 248;
        g_540d1a = g_540cfa ^ 137;
        g_540d1b = g_540cfb ^ 67;
        g_540d1c = g_540cfc ^ 196;
        g_540d1d = g_540cfd ^ 161;
        g_540d1e = g_540cfe ^ 206;
        g_540d1f = g_540cff ^ 203;
        g_540d20 = g_540d00 ^ 60;
        g_540d21 = g_540d01 ^ 10;
        g_540d22 = g_540d02 ^ 15;
        g_540d23 = g_540d03 ^ 172;
        g_540d24 = g_540d04 ^ 114;
        g_540d25 = g_540d05 ^ 181;
        g_540d26 = g_540d06 ^ 165;
        g_540d27 = g_540d07 ^ 130;
        g_540d28 = g_540d08 ^ 6;
        g_540d29 = g_540d09 ^ 243;
        g_540d2a = g_540d0a ^ 11;
        g_540d2b = g_540d0b ^ 248;
        g_540d2c = g_540d0c ^ 14;
        g_540d2d = g_540d0d ^ 94;
        g_540b85 = g_540b80 ^ 72;
        g_540b86 = g_540b81 ^ 193;
        g_540b87 = g_540b82 ^ 205;
        g_540b88 = g_540b83 ^ 44;
        g_540b89 = g_540b84 ^ 117;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580468) = 1;
    count = _objc_msgSend();
    v15 = _objc_retainAutoreleasedReturnValue(count, SEL_loadIndex);
    v16 = len;
    v17 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v16);
    v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_numberWithInteger_, v16);
    v19 = _objc_msgSend(v18, SEL_stringValue);
    v20 = _objc_retainAutoreleasedReturnValue(v19, SEL_stringValue);
    v21 = _objc_msgSend(v15, SEL_objectForKeyedSubscript_, v20);
    v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_objectForKeyedSubscript_, v20);
    _objc_release(v20);
    _objc_release(v18);
    _objc_release(v15);
    if (v22)
    {
        v23 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        v24 = _objc_retainAutoreleasedReturnValue(v23, SEL_sharedConfig);
        count1 = _objc_msgSend(v22, SEL_objectForKeyedSubscript_, &g_540fa0);
        v26 = _objc_retainAutoreleasedReturnValue(count1, SEL_objectForKeyedSubscript_, &g_540fa0);
        v27 = _objc_msgSend(v26, SEL_isEqualToString_, &g_540ee0);
        _objc_release(v26);
        if (v27)
        {
            v10 = v22;
            v0 = len;
            count2 = _objc_msgSend(g_4c40b8, SEL_stringWithFormat_, &g_540ea0);
            len1 = _objc_retainAutoreleasedReturnValue(count2, SEL_stringWithFormat_, &g_540ea0);
            _objc_msgSend(v24, SEL_setObject_forKey_, len1, &g_540f60);
            _objc_release(len1);
            v8 = (int)0;
            v9 = (int)0;
            v6 = (int)0;
            v7 = (int)0;
            v1 = " \t`";
            v2 = " \t`";
            v3 = " \t`";
            v4 = " \t`";
            v30 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v1, 4);
            v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_arrayWithObjects_count_, &v1, 4);
            i = _objc_msgSend(v31, SEL_countByEnumeratingWithState_objects_count_, &v6, &v5, 16);
            if (i)
            {
                do
                {
                    v33 = 0;
                    do
                    {
                    } while ((_objc_msgSend(v24, SEL_setObject_forKey_, " \t`", *((long long *)(*((unsigned long long *)((void*)&v6 + 8)) + v33 * 8))), v33 += 1, i != v33));
                    i = _objc_msgSend(v31, SEL_countByEnumeratingWithState_objects_count_, &v6, &v5, 16);
                } while (i);
            }
            _objc_release(v31);
            v34 = 1;
            v35 = _objc_msgSend(v24, SEL_setBool_forKey_, 1, g_4a3ba0);
            sub_197d8(v35, SEL_setBool_forKey_, 1, g_4a3ba0);
            v22 = v10;
        }
        else
        {
            v36 = _objc_msgSend(v22, SEL_objectForKeyedSubscript_, &g_540fa0);
            v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_objectForKeyedSubscript_, &g_540fa0);
            v38 = _objc_msgSend(v37, SEL_isEqualToString_, &g_540da0);
            _objc_release(v37);
            if (v38)
            {
                _objc_msgSend(v24, SEL_setInteger_forKey_, 0, g_4a3e80);
                _objc_msgSend(v24, SEL_setInteger_forKey_, len, &g_540e20);
                v34 = 1;
                _objc_msgSend(v24, SEL_setBool_forKey_, 1, g_4a3e78);
            }
            else
            {
                v34 = 0;
            }
        }
        _objc_release(v24);
    }
    else
    {
        v34 = 0;
    }
    _objc_release(v22);
    if (*((long long *)&g_600760) == v11)
        return v34;
    ___stack_chk_fail();
}
