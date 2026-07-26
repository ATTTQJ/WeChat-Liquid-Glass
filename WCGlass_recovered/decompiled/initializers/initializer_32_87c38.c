/* Mach-O initializer 32/33
 * Address: 0x87c38; original size: 4876 bytes
 * Status: ok; elapsed: 2.675s
 */

unsigned long long sub_87c38(void)
{
    long long count;  // x0
    long long count1;  // x0
    unsigned long long v23;  // w8
    long long v24;  // x0
    unsigned long long v25;  // x20
    long long v26;  // x0
    long long v27;  // x0
    unsigned long long v28;  // x0
    unsigned long long v29;  // x23
    unsigned long long v31;  // x0
    long long v32;  // x0
    long long count2;  // x0
    long long v16;  // x0
    long long v17;  // x0
    long long v18;  // x19
    unsigned long long i;  // x0
    unsigned long long idx;  // x26
    unsigned long len;  // x22
    unsigned int v22;  // w28
    char v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa0]
    long long v5;  // [bp-0x90]
    unsigned long v6;  // [bp-0x88]
    char *v7;  // [bp-0x80]
    long long v8;  // [bp-0x78]
    long long v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    char *v11;  // [bp-0x10]
    char v12;  // [bp+0x0]

    v11 = &v12;
    v10 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_57d430)
    {
        g_4d5d80 = g_4d5d50 ^ 241;
        g_4d5d81 = g_4d5d51 ^ 10;
        g_4d5d82 = g_4d5d52 ^ 19;
        g_4d5d83 = g_4d5d53 ^ 13;
        g_4d5d84 = g_4d5d54 ^ 1;
        g_4d5d85 = g_4d5d55 ^ 164;
        g_4d5d86 = g_4d5d56 ^ 0x11;
        g_4d5d87 = g_4d5d57 ^ 39;
        g_4d5d88 = g_4d5d58 ^ 46;
        g_4d5d89 = g_4d5d59 ^ 33;
        g_4d5d8a = g_4d5d5a ^ 35;
        g_4d5d8b = g_4d5d5b ^ 53;
        g_4d5d8c = g_4d5d5c ^ 140;
        g_4d5d8d = g_4d5d5d ^ 47;
        g_4d5d8e = g_4d5d5e ^ 23;
        g_4d5d8f = g_4d5d5f ^ 135;
        g_4d5d90 = g_4d5d60 ^ 106;
        g_4d5d91 = g_4d5d61 ^ 97;
        g_4d5d92 = g_4d5d62 ^ 38;
        g_4d5d93 = g_4d5d63 ^ 21;
        g_4d5d94 = g_4d5d64 ^ 1;
        g_4d5d95 = g_4d5d65 ^ 116;
        g_4d5d96 = g_4d5d66 ^ 244;
        g_4d5d97 = g_4d5d67 ^ 212;
        g_4d5d98 = g_4d5d68 ^ 83;
        g_4d5d99 = g_4d5d69 ^ 55;
        g_4d5d9a = g_4d5d6a ^ 95;
        g_4d5d9b = g_4d5d6b ^ 39;
        g_4d5d9c = g_4d5d6c ^ 196;
        g_4d5d9d = g_4d5d6d ^ 74;
        g_4d5d9e = g_4d5d6e ^ 108;
        g_4d5d9f = g_4d5d6f ^ 137;
        g_4d5da0 = g_4d5d70 ^ 246;
        g_4d5cf0 = g_4d5cd0 ^ 211;
        g_4d5cf1 = g_4d5cd1 ^ 36;
        g_4d5cf2 = g_4d5cd2 ^ 54;
        g_4d5cf3 = g_4d5cd3 ^ 72;
        g_4d5cf4 = g_4d5cd4 ^ 88;
        g_4d5cf5 = g_4d5cd5 ^ 199;
        g_4d5cf6 = g_4d5cd6 ^ 0x55;
        g_4d5cf7 = g_4d5cd7 ^ 8;
        g_4d5cf8 = g_4d5cd8 ^ 55;
        g_4d5cf9 = g_4d5cd9 ^ 219;
        g_4d5cfa = g_4d5cda ^ 149;
        g_4d5cfb = g_4d5cdb ^ 137;
        g_4d5cfc = g_4d5cdc ^ 110;
        g_4d5cfd = g_4d5cdd ^ 193;
        g_4d5cfe = g_4d5cde ^ 0xaa;
        g_4d5cff = g_4d5cdf ^ 250;
        g_4d5d00 = g_4d5ce0 ^ 248;
        g_4d5d30 = g_4d5d10 ^ 165;
        g_4d5d31 = g_4d5d11 ^ 203;
        g_4d5d32 = g_4d5d12 ^ 16;
        g_4d5d33 = g_4d5d13 ^ 25;
        g_4d5d34 = g_4d5d14 ^ 228;
        g_4d5d35 = g_4d5d15 ^ 54;
        g_4d5d36 = g_4d5d16 ^ 143;
        g_4d5d37 = g_4d5d17 ^ 98;
        g_4d5d38 = g_4d5d18 ^ 97;
        g_4d5d39 = g_4d5d19 ^ 129;
        g_4d5d3a = g_4d5d1a ^ 126;
        g_4d5d3b = g_4d5d1b ^ 129;
        g_4d5d3c = g_4d5d1c ^ 63;
        g_4d5d3d = g_4d5d1d ^ 156;
        g_4d5d3e = g_4d5d1e ^ 0x22;
        g_4d5d3f = g_4d5d1f ^ 161;
        g_4d5d40 = g_4d5d20 ^ 142;
        g_4d5d41 = g_4d5d21 ^ 103;
        g_4d5d42 = g_4d5d22 ^ 78;
        g_4d5d43 = g_4d5d23 ^ 88;
        g_4d5d44 = g_4d5d24 ^ 37;
        g_4d5d45 = g_4d5d25 ^ 55;
        g_4d5d46 = g_4d5d26 ^ 111;
        g_4d5d47 = g_4d5d27 ^ 219;
        g_4d5d48 = g_4d5d28 ^ 97;
        g_4d5d49 = g_4d5d29 ^ 39;
        g_4d5d4a = g_4d5d2a ^ 251;
        g_4d5d4b = g_4d5d2b ^ 8;
        g_4d5d4c = g_4d5d2c ^ 80;
        g_4d5cb0 = g_4d5c90 ^ 234;
        g_4d5cb1 = g_4d5c91 ^ 226;
        g_4d5cb2 = g_4d5c92 ^ 161;
        g_4d5cb3 = g_4d5c93 ^ 95;
        g_4d5cb4 = g_4d5c94 ^ 115;
        g_4d5cb5 = g_4d5c95 ^ 224;
        g_4d5cb6 = g_4d5c96 ^ 111;
        g_4d5cb7 = g_4d5c97 ^ 213;
        g_4d5cb8 = g_4d5c98 ^ 112;
        g_4d5cb9 = g_4d5c99 ^ 235;
        g_4d5cba = g_4d5c9a ^ 59;
        g_4d5cbb = g_4d5c9b ^ 65;
        g_4d5cbc = g_4d5c9c ^ 145;
        g_4d5cbd = g_4d5c9d ^ 160;
        g_4d5cbe = g_4d5c9e ^ 243;
        g_4d5cbf = g_4d5c9f ^ 0x33;
        g_4d5cc0 = g_4d5ca0 ^ 7;
        g_4d5cc1 = g_4d5ca1 ^ 224;
        g_4d5cc2 = g_4d5ca2 ^ 248;
        g_4d5cc3 = g_4d5ca3 ^ 247;
        g_4d5cc4 = g_4d5ca4 ^ 49;
        g_4d5cc5 = g_4d5ca5 ^ 164;
        g_4d5cc6 = g_4d5ca6 ^ 215;
        g_4d5c30 = g_4d5c10 ^ 112;
        g_4d5c31 = g_4d5c11 ^ 222;
        g_4d5c32 = g_4d5c12 ^ 175;
        g_4d5c33 = g_4d5c13 ^ 176;
        g_4d5c34 = g_4d5c14 ^ 144;
        g_4d5c35 = g_4d5c15 ^ 141;
        g_4d5c36 = g_4d5c16 ^ 86;
        g_4d5c37 = g_4d5c17 ^ 236;
        g_4d5c38 = g_4d5c18 ^ 236;
        g_4d5c39 = g_4d5c19 ^ 164;
        g_4d5c3a = g_4d5c1a ^ 60;
        g_4d5c3b = g_4d5c1b ^ 16;
        g_4d5c3c = g_4d5c1c ^ 141;
        g_4d5c3d = g_4d5c1d ^ 199;
        g_4d5c3e = g_4d5c1e ^ 31;
        g_4d5c3f = g_4d5c1f ^ 47;
        g_4d5c40 = g_4d5c20 ^ 107;
        g_4d5c41 = ~(g_4d5c21);
        g_4d5c42 = g_4d5c22 ^ 207;
        g_4d5c43 = g_4d5c23 ^ 227;
        g_4d5c44 = g_4d5c24 ^ 8;
        g_4d5c45 = g_4d5c25 ^ 0x22;
        g_4d5c46 = g_4d5c26 ^ 0x44;
        g_4d5c47 = g_4d5c27 ^ 0x66;
        g_4d5c48 = g_4d5c28 ^ 168;
        g_4d5c49 = g_4d5c29 ^ 0x11;
        g_4d5bf0 = g_4d5bd0 ^ 126;
        g_4d5bf1 = g_4d5bd1 ^ 208;
        g_4d5bf2 = g_4d5bd2 ^ 96;
        g_4d5bf3 = g_4d5bd3 ^ 163;
        g_4d5bf4 = g_4d5bd4 ^ 40;
        g_4d5bf5 = g_4d5bd5 ^ 181;
        g_4d5bf6 = g_4d5bd6 ^ 4;
        g_4d5bf7 = g_4d5bd7 ^ 0x66;
        g_4d5bf8 = g_4d5bd8 ^ 216;
        g_4d5bf9 = g_4d5bd9 ^ 104;
        g_4d5bfa = g_4d5bda ^ 96;
        g_4d5bfb = g_4d5bdb ^ 37;
        g_4d5bfc = g_4d5bdc ^ 9;
        g_4d5bfd = g_4d5bdd ^ 110;
        g_4d5bfe = g_4d5bde ^ 63;
        g_4d5bff = g_4d5bdf ^ 114;
        g_4d5c00 = g_4d5be0 ^ 22;
        g_4d5c01 = g_4d5be1 ^ 0xbb;
        g_4d5c02 = g_4d5be2 ^ 83;
        g_4d5c03 = g_4d5be3 ^ 151;
        g_4d5c04 = g_4d5be4;
        g_4d5c05 = g_4d5be5 ^ 115;
        g_4d5c06 = g_4d5be6 ^ 161;
        g_4d5c07 = g_4d5be7 ^ 138;
        g_4d5ad0 = g_4d5ab0 ^ 180;
        g_4d5ad1 = g_4d5ab1 ^ 120;
        g_4d5ad2 = g_4d5ab2 ^ 163;
        g_4d5ad3 = g_4d5ab3 ^ 89;
        g_4d5ad4 = g_4d5ab4 ^ 163;
        g_4d5ad5 = g_4d5ab5 ^ 254;
        g_4d5ad6 = g_4d5ab6 ^ 122;
        g_4d5ad7 = g_4d5ab7 ^ 138;
        g_4d5ad8 = g_4d5ab8 ^ 65;
        g_4d5ad9 = g_4d5ab9 ^ 67;
        g_4d5ada = g_4d5aba ^ 210;
        g_4d5adb = g_4d5abb ^ 24;
        g_4d5adc = g_4d5abc ^ 55;
        g_4d5add = g_4d5abd ^ 21;
        g_4d5ade = g_4d5abe ^ 166;
        g_4d5adf = g_4d5abf ^ 91;
        g_4d5ae0 = g_4d5ac0 ^ 0xcc;
        g_4d5ae1 = g_4d5ac1 ^ 2;
        g_4d5ae2 = g_4d5ac2 ^ 95;
        g_4d5ae3 = g_4d5ac3 ^ 172;
        g_4d5ae4 = g_4d5ac4 ^ 116;
        g_4d5ae5 = g_4d5ac5 ^ 161;
        g_4d5b70 = g_4d5b50 ^ 74;
        g_4d5b71 = g_4d5b51 ^ 65;
        g_4d5b72 = g_4d5b52 ^ 214;
        g_4d5b73 = g_4d5b53 ^ 140;
        g_4d5b74 = g_4d5b54 ^ 43;
        g_4d5b75 = g_4d5b55 ^ 30;
        g_4d5b76 = g_4d5b56 ^ 92;
        g_4d5b77 = g_4d5b57 ^ 134;
        g_4d5b78 = g_4d5b58 ^ 156;
        g_4d5b79 = g_4d5b59 ^ 156;
        g_4d5b7a = g_4d5b5a ^ 226;
        g_4d5b7b = g_4d5b5b ^ 42;
        g_4d5b7c = g_4d5b5c ^ 61;
        g_4d5b7d = g_4d5b5d ^ 81;
        g_4d5b7e = g_4d5b5e ^ 211;
        g_4d5b7f = g_4d5b5f ^ 89;
        g_4d5b80 = g_4d5b60 ^ 237;
        g_4d5b81 = g_4d5b61 ^ 203;
        g_4d5b82 = g_4d5b62 ^ 215;
        g_4d5b83 = g_4d5b63 ^ 88;
        g_4d5b84 = g_4d5b64 ^ 96;
        g_4d5b85 = g_4d5b65 ^ 181;
        g_4d5b86 = g_4d5b66 ^ 108;
        g_4d5bb0 = g_4d5b90 ^ 6;
        g_4d5bb1 = g_4d5b91 ^ 60;
        g_4d5bb2 = g_4d5b92 ^ 29;
        g_4d5bb3 = g_4d5b93 ^ 209;
        g_4d5bb4 = g_4d5b94 ^ 0x22;
        g_4d5bb5 = g_4d5b95 ^ 22;
        g_4d5bb6 = g_4d5b96 ^ 160;
        g_4d5bb7 = g_4d5b97 ^ 79;
        g_4d5bb8 = g_4d5b98 ^ 73;
        g_4d5bb9 = g_4d5b99 ^ 163;
        g_4d5bba = g_4d5b9a ^ 129;
        g_4d5bbb = g_4d5b9b ^ 131;
        g_4d5bbc = g_4d5b9c ^ 126;
        g_4d5bbd = g_4d5b9d ^ 116;
        g_4d5bbe = g_4d5b9e ^ 163;
        g_4d5bbf = g_4d5b9f ^ 4;
        g_4d5bc0 = g_4d5ba0 ^ 130;
        g_4d5bc1 = g_4d5ba1 ^ 157;
        g_4d5bc2 = g_4d5ba2 ^ 186;
        g_4d5bc3 = g_4d5ba3 ^ 209;
        g_4d5c70 = g_4d5c50 ^ 14;
        g_4d5c71 = g_4d5c51 ^ 105;
        g_4d5c72 = g_4d5c52 ^ 62;
        g_4d5c73 = g_4d5c53 ^ 211;
        g_4d5c74 = g_4d5c54 ^ 3;
        g_4d5c75 = g_4d5c55 ^ 14;
        g_4d5c76 = g_4d5c56 ^ 88;
        g_4d5c77 = g_4d5c57 ^ 247;
        g_4d5c78 = g_4d5c58 ^ 0xee;
        g_4d5c79 = g_4d5c59 ^ 148;
        g_4d5c7a = g_4d5c5a ^ 108;
        g_4d5c7b = g_4d5c5b ^ 137;
        g_4d5c7c = g_4d5c5c ^ 143;
        g_4d5c7d = g_4d5c5d ^ 244;
        g_4d5c7e = g_4d5c5e ^ 12;
        g_4d5c7f = g_4d5c5f ^ 13;
        g_4d5c80 = g_4d5c60 ^ 178;
        g_4d5c81 = g_4d5c61 ^ 23;
        g_4d5b20 = g_4d5af0 ^ 80;
        g_4d5b21 = g_4d5af1 ^ 106;
        g_4d5b22 = g_4d5af2 ^ 62;
        g_4d5b23 = g_4d5af3 ^ 242;
        g_4d5b24 = g_4d5af4 ^ 194;
        g_4d5b25 = g_4d5af5 ^ 44;
        g_4d5b26 = g_4d5af6 ^ 6;
        g_4d5b27 = g_4d5af7 ^ 234;
        g_4d5b28 = g_4d5af8 ^ 65;
        g_4d5b29 = g_4d5af9 ^ 61;
        g_4d5b2a = g_4d5afa ^ 18;
        g_4d5b2b = g_4d5afb ^ 121;
        g_4d5b2c = g_4d5afc ^ 235;
        g_4d5b2d = g_4d5afd ^ 210;
        g_4d5b2e = g_4d5afe ^ 126;
        g_4d5b2f = g_4d5aff ^ 43;
        g_4d5b30 = g_4d5b00 ^ 163;
        g_4d5b31 = g_4d5b01 ^ 72;
        g_4d5b32 = g_4d5b02 ^ 50;
        g_4d5b33 = g_4d5b03 ^ 162;
        g_4d5b34 = g_4d5b04 ^ 0x22;
        g_4d5b35 = g_4d5b05 ^ 220;
        g_4d5b36 = g_4d5b06 ^ 251;
        g_4d5b37 = g_4d5b07 ^ 130;
        g_4d5b38 = g_4d5b08 ^ 52;
        g_4d5b39 = g_4d5b09 ^ 161;
        g_4d5b3a = g_4d5b0a ^ 8;
        g_4d5b3b = g_4d5b0b ^ 143;
        g_4d5b3c = g_4d5b0c ^ 244;
        g_4d5b3d = g_4d5b0d ^ 12;
        g_4d5b3e = g_4d5b0e ^ 69;
        g_4d5b3f = g_4d5b0f ^ 207;
        g_4d5b40 = g_4d5b10 ^ 113;
    }
    /* unsupported instruction */
    g_57d430 = 1;
    v7 = &v0;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v5 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    count1 = _objc_msgSend(g_4c4068, SEL_standardUserDefaults);
    v8 = _objc_retainAutoreleasedReturnValue(count1, SEL_standardUserDefaults);
    if (!((char)_objc_msgSend(v8, SEL_boolForKey_, &g_4d6050) & 1))
    {
        v3 = 0;
        v4 = 0;
        v1 = 0;
        v2 = 0;
        count2 = _objc_msgSend(v8, SEL_dictionaryRepresentation);
        v16 = _objc_retainAutoreleasedReturnValue(count2, SEL_dictionaryRepresentation);
        v17 = _objc_msgSend(v16, SEL_allKeys);
        v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_allKeys);
        _objc_release(v16);
        v9 = v18;
        v6 = SEL_countByEnumeratingWithState_objects_count_;
        i = _objc_msgSend(v9, SEL_countByEnumeratingWithState_objects_count_, &v1, v7, 16);
        if (i)
        {
            do
            {
                idx = 0;
                do
                {
                    len = *((long long *)(*(&(&v1)[1]) + idx * 8));
                    if (((char)_objc_msgSend(len, SEL_hasPrefix_, &g_4d5fd0) & 1))
                        v22 = 1;
                    else
                        v22 = _objc_msgSend(len, SEL_hasPrefix_, &g_4d6010);
                    if (((char)_objc_msgSend(len, SEL_hasPrefix_, &g_4d5f50) & 1) || _objc_msgSend(len, SEL_hasPrefix_, &g_4d5ed0))
                        v23 = _objc_msgSend(len, SEL_isEqualToString_, &g_4d5e10) ^ 1;
                    else
                        v23 = 0;
                    if ((v22 | v23) == 1)
                        _objc_msgSend(v8, SEL_removeObjectForKey_, len);
                    idx += 1;
                } while (i != idx);
                i = _objc_msgSend(v9, v6, &v1, v7, 16);
            } while (i);
        }
        _objc_release(v9);
        _objc_msgSend(v8, SEL_setBool_forKey_, 1, &g_4d6050);
    }
    if (_objc_msgSend(v5, SEL_liquidGlassEnabled) && _objc_msgSend(v5, SEL_boolForKey_defaultValue_, g_4a3b18, 0))
    {
        sub_9ab04();
        v24 = _NSClassFromString(&g_4d5e90);
        v25 = _NSClassFromString(&g_4d5dd0);
        v26 = _NSClassFromString(&g_4d5e50);
        v27 = _NSClassFromString(&g_4d5f90);
        v28 = _NSClassFromString(&g_4d5f10);
        if (!v28)
            v29 = v25;
        else
            v29 = v28;
        sub_9c078();
        sub_9d378(v26);
        sub_9de14(v27);
        sub_9eb3c(v29);
        sub_9e118(sub_a01d0(v25));
        sub_a48a4(v24);
    }
    _objc_release(v8);
    v31 = _objc_release(v5);
    if (*((long long *)&g_600760) == v10)
        return v31;
    v32 = ___stack_chk_fail();
    _objc_release(v8);
    _objc_release(v5);
    __Unwind_Resume(v32);
}
