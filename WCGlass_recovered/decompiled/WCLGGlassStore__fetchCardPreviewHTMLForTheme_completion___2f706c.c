/* Recovered pseudocode
 * Objective-C: -[WCLGGlassStore fetchCardPreviewHTMLForTheme:completion:]
 * Address: 0x2f706c; original size: 2144 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.551s
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned long long sub_2f706c(long long a0, unsigned long a1, long long a2, long long a3)
{
    struct_0 *v22;  // x23
    long long count;  // x0
    long long count1;  // x0
    long long v33;  // x2
    long long count2;  // x0
    long long v35;  // x0
    long long v36;  // x25
    unsigned long long v37;  // x0
    long long v24;  // x0
    long long v25;  // x21
    long long v26;  // x0
    long long v27;  // x0
    unsigned long v28;  // x21
    long long v29;  // x28
    long long v30;  // x21
    long long v31;  // x2
    unsigned long v0;  // [bp-0x140]
    unsigned long long v1;  // [bp-0x138]
    unsigned long long v2;  // [bp-0x130]
    unsigned long long v3;  // [bp-0x128]
    struct_0 *v4;  // [bp-0x120]
    long long v5;  // [bp-0x118]
    long long v6;  // [bp-0x110]
    unsigned long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    unsigned long long v9;  // [bp-0xf0]
    unsigned long v10;  // [bp-0xe0]
    long long v11;  // [bp-0xd8]
    long long v12;  // [bp-0xd0]
    unsigned long v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    long long v17;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long v18;  // [bp-0x80]
    unsigned long v19;  // [bp-0x78]
    char *v20;  // [bp-0x10]
    char v21;  // [bp+0x0]

    v20 = &v21;
    v19 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_580664)
    {
        *((unsigned short *)&g_543de0) = g_543dc0 ^ 4068;
        *((unsigned short *)&g_543de2) = g_543dc2 ^ 50320;
        *((unsigned short *)&g_543de4) = g_543dc4 ^ 33245;
        *((unsigned short *)&g_543de6) = g_543dc6 ^ 0x1313;
        *((unsigned short *)&g_543de8) = g_543dc8 ^ 23899;
        *((unsigned short *)&g_543dea) = g_543dca ^ 37837;
        *((unsigned short *)&g_543dec) = g_543dcc ^ 51345;
        *((unsigned short *)&g_543dee) = g_543dce ^ 48759;
        *((unsigned short *)&g_543df0) = g_543dd0 ^ 27774;
        *((unsigned short *)&g_543df2) = g_543dd2 ^ 40532;
        *((unsigned short *)&g_543df4) = g_543dd4 ^ 0xb7ff;
        *((unsigned short *)&g_543df6) = g_543dd6 ^ 33521;
        *((unsigned short *)&g_543df8) = g_543dd8 ^ 31082;
        *((unsigned short *)&g_543dfa) = g_543dda ^ 30896;
        g_543d6e = g_543d69 ^ 0xee;
        g_543d6f = g_543d6a ^ 222;
        g_543d70 = g_543d6b ^ 209;
        g_543d71 = g_543d6c ^ 188;
        g_543d72 = g_543d6d ^ 96;
        g_543d60 = g_543d57 ^ 35;
        g_543d61 = g_543d58 ^ 233;
        g_543d62 = g_543d59 ^ 194;
        g_543d63 = g_543d5a ^ 192;
        g_543d64 = g_543d5b ^ 35;
        g_543d65 = g_543d5c ^ 110;
        g_543d66 = g_543d5d ^ 254;
        g_543d67 = g_543d5e ^ 63;
        g_543d68 = g_543d5f ^ 143;
        g_543d52 = g_543d4d ^ 128;
        g_543d53 = g_543d4e ^ 250;
        g_543d54 = g_543d4f ^ 0x33;
        g_543d55 = g_543d50 ^ 125;
        g_543d56 = g_543d51 ^ 192;
        *((unsigned short *)&g_543da0) = g_543d80 ^ 25412;
        *((unsigned short *)&g_543da2) = g_543d82 ^ 50439;
        *((unsigned short *)&g_543da4) = g_543d84 ^ 4888;
        *((unsigned short *)&g_543da6) = g_543d86 ^ 10829;
        *((unsigned short *)&g_543da8) = g_543d88 ^ 53377;
        *((unsigned short *)&g_543daa) = g_543d8a ^ 21979;
        *((unsigned short *)&g_543dac) = g_543d8c ^ 39333;
        *((unsigned short *)&g_543dae) = g_543d8e ^ 2521;
        *((unsigned short *)&g_543db0) = g_543d90 ^ 55420;
        g_543d42 = g_543d37 ^ 0x55;
        g_543d43 = g_543d38 ^ 235;
        g_543d44 = g_543d39 ^ 210;
        g_543d45 = g_543d3a ^ 159;
        g_543d46 = g_543d3b ^ 253;
        g_543d47 = g_543d3c ^ 125;
        g_543d48 = g_543d3d ^ 30;
        g_543d49 = g_543d3e ^ 37;
        g_543d4a = g_543d3f ^ 195;
        g_543d4b = g_543d40 ^ 203;
        g_543d4c = g_543d41 ^ 171;
        g_543d20 = g_543d00 ^ 222;
        g_543d21 = g_543d01 ^ 31;
        g_543d22 = g_543d02 ^ 78;
        g_543d23 = g_543d03 ^ 245;
        g_543d24 = g_543d04 ^ 93;
        g_543d25 = g_543d05 ^ 84;
        g_543d26 = g_543d06 ^ 61;
        g_543d27 = g_543d07 ^ 69;
        g_543d28 = g_543d08 ^ 0x77;
        g_543d29 = g_543d09 ^ 36;
        g_543d2a = ~(g_543d0a);
        g_543d2b = g_543d0b ^ 62;
        g_543d2c = g_543d0c ^ 57;
        g_543d2d = g_543d0d ^ 18;
        g_543d2e = g_543d0e ^ 81;
        g_543d2f = g_543d0f ^ 0xaa;
        g_543d30 = g_543d10 ^ 252;
        g_543d31 = g_543d11 ^ 22;
        g_543d32 = g_543d12 ^ 77;
        g_543d33 = g_543d13 ^ 175;
        g_543d34 = g_543d14 ^ 209;
        g_543d35 = g_543d15 ^ 81;
        g_543d36 = g_543d16 ^ 230;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580664) = 1;
    _objc_retain(a2);
    _objc_retain(a3);
    if (a3)
    {
        v13 = &g_600748;
        v14 = 0xc2000000;
        v15 = 3111116;
        v16 = &g_4a4588;
        _objc_retain(a3);
        v22 = _objc_retainBlock(&v13);
        count = _objc_msgSend(g_4c44d0, SEL_class);
        if (_objc_msgSend(a2, SEL_isKindOfClass_, count))
        {
            v24 = _objc_msgSend(a2, SEL_type);
            v25 = _objc_retainAutoreleasedReturnValue(v24, SEL_type);
            if (_objc_msgSend(v25, SEL_isEqualToString_, &g_543ea0) && _objc_msgSend(a2, SEL_themeId) > 0)
            {
                v17 = SEL_versionId;
                v18 = SEL_themeId;
                v26 = _objc_msgSend(a2, SEL_versionId);
                _objc_release(v25);
                if (v26 > 0)
                {
                    v27 = _objc_msgSend(a0, SEL_currentWXID);
                    v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_currentWXID);
                    if (_objc_msgSend(v28, SEL_length))
                    {
                        v29 = _objc_msgSend(a2, v18);
                        v18 = v28;
                        v30 = _objc_msgSend(a2, v17);
                        v10 = v18;
                        v7 = " \t`";
                        v8 = " \t`";
                        v31 = v29;
                        count1 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v31);
                        v17 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithInteger_, v31);
                        v11 = v17;
                        v9 = " \t`";
                        v33 = v30;
                        count2 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v33);
                        v12 = _objc_retainAutoreleasedReturnValue(count2, SEL_numberWithInteger_, v33);
                        v35 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, &v10, &v7, 3);
                        v36 = _objc_retainAutoreleasedReturnValue(v35, SEL_dictionaryWithObjects_forKeys_count_, &v10, &v7, 3);
                        v0 = &g_600748;
                        v1 = 0xc2000000;
                        v2 = 3111448;
                        v3 = &g_4a45b8;
                        _objc_retain(v22);
                        v4 = v22;
                        v5 = v31;
                        v6 = v30;
                        v28 = v18;
                        _objc_msgSend(a0, SEL_postPath_payload_completion_, &g_543e20, v36, &v0);
                        _objc_release(v36);
                        _objc_release(v12);
                        _objc_release(v17);
                        _objc_release(v4);
                    }
                    else
                    {
                        v22->field_10(v22, 0, &g_543fa0);
                    }
                    _objc_release(v28);
                    goto LABEL_2f7848;
                }
            }
            else
            {
                _objc_release(v25);
            }
        }
        v22->field_10(v22, 0, &g_543f20);
LABEL_2f7848:
        _objc_release(v22);
        _objc_release(a3);
    }
    _objc_release(a3);
    v37 = _objc_release(a2);
    if (*((long long *)&g_600760) == v19)
        return v37;
    ___stack_chk_fail();
}
