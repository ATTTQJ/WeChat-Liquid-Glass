/* Hook replacement 2/418
 * Selectors: SEL_infoDictionary
 * Address: 0x4ed4; original size: 1720 bytes
 * Status: ok; elapsed: 0.975s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_4ed4(void)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    long long v15;  // x30
    char v16;  // x20
    long long count;  // x21
    long long len;  // x19
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    /* unsupported instruction */
    if (!g_57b278)
    {
        g_4c6be0 = g_4c6bc0 ^ 59;
        g_4c6be1 = g_4c6bc1 ^ 13;
        g_4c6be2 = g_4c6bc2 ^ 145;
        g_4c6be3 = g_4c6bc3 ^ 174;
        g_4c6be4 = g_4c6bc4 ^ 21;
        g_4c6be5 = g_4c6bc5 ^ 0xaa;
        g_4c6be6 = g_4c6bc6 ^ 106;
        g_4c6be7 = g_4c6bc7 ^ 166;
        g_4c6be8 = g_4c6bc8 ^ 29;
        g_4c6be9 = g_4c6bc9 ^ 123;
        g_4c6bea = g_4c6bca ^ 148;
        g_4c6beb = g_4c6bcb ^ 150;
        g_4c6bec = g_4c6bcc ^ 116;
        g_4c6bed = g_4c6bcd ^ 143;
        g_4c6bee = g_4c6bce ^ 227;
        g_4c6bef = g_4c6bcf ^ 25;
        g_4c6bf0 = g_4c6bd0 ^ 24;
        g_4c6bf1 = g_4c6bd1 ^ 59;
        g_4c6bf2 = g_4c6bd2 ^ 121;
        g_4c6bf3 = g_4c6bd3 ^ 2;
        g_4c6bf4 = g_4c6bd4 ^ 192;
        g_4c6bf5 = g_4c6bd5 ^ 0xdd;
        g_4c6bf6 = g_4c6bd6 ^ 61;
        g_4c6bf7 = g_4c6bd7 ^ 0x77;
        g_4c6bf8 = g_4c6bd8 ^ 67;
        g_4c6bf9 = g_4c6bd9 ^ 10;
        g_4c6bfa = g_4c6bda ^ 169;
        g_4c6bfb = g_4c6bdb ^ 74;
        g_4c6bfc = g_4c6bdc ^ 111;
        g_4c6bfd = g_4c6bdd ^ 32;
        g_4c6b90 = g_4c6b60 ^ 115;
        g_4c6b91 = g_4c6b61 ^ 44;
        g_4c6b92 = g_4c6b62 ^ 201;
        g_4c6b93 = g_4c6b63 ^ 79;
        g_4c6b94 = g_4c6b64 ^ 81;
        g_4c6b95 = g_4c6b65 ^ 207;
        g_4c6b96 = g_4c6b66 ^ 100;
        g_4c6b97 = g_4c6b67 ^ 41;
        g_4c6b98 = g_4c6b68 ^ 157;
        g_4c6b99 = g_4c6b69 ^ 129;
        g_4c6b9a = g_4c6b6a ^ 79;
        g_4c6b9b = g_4c6b6b ^ 174;
        g_4c6b9c = g_4c6b6c ^ 220;
        g_4c6b9d = g_4c6b6d ^ 49;
        g_4c6b9e = g_4c6b6e ^ 87;
        g_4c6b9f = g_4c6b6f ^ 252;
        g_4c6ba0 = g_4c6b70 ^ 200;
        g_4c6ba1 = g_4c6b71 ^ 29;
        g_4c6ba2 = g_4c6b72 ^ 30;
        g_4c6ba3 = g_4c6b73 ^ 41;
        g_4c6ba4 = g_4c6b74 ^ 160;
        g_4c6ba5 = g_4c6b75 ^ 252;
        g_4c6ba6 = g_4c6b76 ^ 235;
        g_4c6ba7 = g_4c6b77 ^ 250;
        g_4c6ba8 = g_4c6b78 ^ 45;
        g_4c6ba9 = g_4c6b79 ^ 137;
        g_4c6baa = g_4c6b7a ^ 109;
        g_4c6bab = g_4c6b7b ^ 252;
        g_4c6bac = g_4c6b7c ^ 3;
        g_4c6bad = g_4c6b7d ^ 211;
        g_4c6bae = g_4c6b7e ^ 0xbb;
        g_4c6baf = g_4c6b7f ^ 8;
        g_4c6bb0 = g_4c6b80 ^ 0x44;
        g_4c6b30 = g_4c6b00 ^ 2;
        g_4c6b31 = g_4c6b01 ^ 107;
        g_4c6b32 = g_4c6b02 ^ 235;
        g_4c6b33 = g_4c6b03 ^ 0x22;
        g_4c6b34 = g_4c6b04 ^ 88;
        g_4c6b35 = g_4c6b05 ^ 150;
        g_4c6b36 = g_4c6b06 ^ 117;
        g_4c6b37 = g_4c6b07 ^ 254;
        g_4c6b38 = g_4c6b08 ^ 114;
        g_4c6b39 = g_4c6b09 ^ 32;
        g_4c6b3a = g_4c6b0a ^ 148;
        g_4c6b3b = g_4c6b0b ^ 173;
        g_4c6b3c = g_4c6b0c ^ 140;
        g_4c6b3d = g_4c6b0d ^ 233;
        g_4c6b3e = g_4c6b0e ^ 0x22;
        g_4c6b3f = g_4c6b0f ^ 186;
        g_4c6b40 = ~(g_4c6b10);
        g_4c6b41 = g_4c6b11 ^ 120;
        g_4c6b42 = g_4c6b12 ^ 167;
        g_4c6b43 = g_4c6b13 ^ 86;
        g_4c6b44 = g_4c6b14 ^ 64;
        g_4c6b45 = g_4c6b15 ^ 64;
        g_4c6b46 = g_4c6b16 ^ 0x88;
        g_4c6b47 = g_4c6b17 ^ 219;
        g_4c6b48 = g_4c6b18 ^ 21;
        g_4c6b49 = g_4c6b19 ^ 82;
        g_4c6b4a = g_4c6b1a ^ 146;
        g_4c6b4b = g_4c6b1b ^ 206;
        g_4c6b4c = g_4c6b1c ^ 33;
        g_4c6b4d = g_4c6b1d ^ 94;
        g_4c6b4e = g_4c6b1e ^ 91;
        g_4c6b4f = g_4c6b1f ^ 209;
        g_4c6b50 = g_4c6b20 ^ 5;
    }
    /* unsupported instruction */
    g_57b278 = 1;
    v16 = _objc_retainAutoreleasedReturnValue(g_57b258());
    if (v16)
    {
        if ((g_582f88 & 1))
        {
            count = _objc_msgSend(v16, SEL_mutableCopy);
            len = _objc_retainAutoreleasedReturnValue(sub_5dc4(v15));
            _objc_msgSend(count, SEL_setObject_forKeyedSubscript_, len, &g_4c6ca0);
            _objc_msgSend(count, SEL_setObject_forKeyedSubscript_, *((long long *)&g_6002f0), &g_4c6c60);
            _objc_msgSend(count, SEL_setObject_forKeyedSubscript_, *((long long *)&g_6002f0), &g_4c6c20);
            _objc_release(len);
        }
        else
        {
            _objc_retain(v16);
        }
    }
    _objc_release(v16);
}
