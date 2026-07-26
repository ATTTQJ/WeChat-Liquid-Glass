/* Recovered pseudocode
 * Objective-C: -[WCLGGlassStore decryptResponse:requestKey:nonce:]
 * Address: 0x2f3140; original size: 4644 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 5.105s
 */

void sub_2f3140(long long a0, unsigned long a1, long long a2, long long a3, long long a4)
{
    unsigned long long v40;  // d9
    unsigned long long v41;  // d8
    unsigned long long v50;  // x20
    unsigned long long v51;  // x19
    unsigned long long v52;  // x30
    long long count;  // x0
    unsigned long v54;  // x22
    long long count1;  // x0
    unsigned long long v56;  // x24
    long long count2;  // x0
    long long v58;  // x22
    long long v59;  // x24
    unsigned long long v42;  // x28
    long long v60;  // x2
    unsigned long long v61;  // x22
    unsigned long v62;  // x1
    long long v63;  // x0
    long long v64;  // x0
    long long v65;  // x24
    long long v66;  // x0
    long long v67;  // x0
    unsigned long v68;  // d0
    long long v69;  // x8
    unsigned long long v43;  // x27
    long long v70;  // x0
    long long v71;  // x0
    long long v72;  // x2
    long long v73;  // x0
    long long v74;  // x0
    unsigned long long v75;  // x22
    unsigned long v76;  // x23
    long long v77;  // x0
    long long v78;  // x0
    long long v79;  // x0
    unsigned long long v44;  // x26
    long long v80;  // x0
    long long v81;  // x28
    unsigned long long v82;  // x0
    long long v83;  // x0
    unsigned long long v84;  // w0
    long long v85;  // x22
    long long v86;  // x0
    long long v87;  // x0
    long long v88;  // x27
    long long v89;  // x24
    unsigned long long v45;  // x25
    long long v90;  // x0
    long long v91;  // x22
    long long v92;  // x0
    long long v93;  // x2
    long long v94;  // x24
    long long v95;  // x22
    unsigned long long v46;  // x24
    unsigned long long v47;  // x23
    unsigned long long v48;  // x22
    unsigned long long v49;  // x21
    char v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x140]
    unsigned long v2;  // [bp-0x130]
    long long v3;  // [bp-0x128]
    long long v4;  // [bp-0x120]
    long long v5;  // [bp-0x118]
    long long v6;  // [bp-0x110]
    long long v7;  // [bp-0x108]
    long long v8;  // [bp-0x100]
    long long v9;  // [bp-0xf8]
    long long v10;  // [bp-0xe8]
    long long v11;  // [bp-0xe0]
    long long v12;  // [bp-0xd8]
    long long v13;  // [bp-0xd0], Other Possible Types: unsigned long long
    long long v14;  // [bp-0xc8]
    long long v15;  // [bp-0xc0]
    long long v16;  // [bp-0xb8]
    long long v17;  // [bp-0xb0], Other Possible Types: unsigned long
    unsigned long v18;  // [bp-0xa8]
    unsigned long v19;  // [bp-0xa0]
    unsigned long v20;  // [bp-0x98]
    long long v21;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v22;  // [bp-0x88]
    unsigned long long v23;  // [bp-0x80]
    unsigned long v24;  // [bp-0x78]
    unsigned long long v25;  // [bp-0x70]
    unsigned long long v26;  // [bp-0x68]
    unsigned long long v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x50]
    unsigned long long v30;  // [bp-0x48]
    unsigned long long v31;  // [bp-0x40]
    unsigned long long v32;  // [bp-0x38]
    unsigned long long v33;  // [bp-0x30]
    unsigned long long v34;  // [bp-0x28]
    unsigned long long v35;  // [bp-0x20]
    unsigned long long v36;  // [bp-0x18]
    char *v37;  // [bp-0x10]
    unsigned long long v38;  // [bp-0x8]
    char v39;  // [bp+0x0]

    v25 = v40;
    v26 = v41;
    v27 = v42;
    v28 = v43;
    v29 = v44;
    v30 = v45;
    v31 = v46;
    v32 = v47;
    v33 = v48;
    v34 = v49;
    v35 = v50;
    v36 = v51;
    v37 = &v39;
    v38 = v52;
    v24 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_580630)
    {
        g_542ade = g_542ad4 ^ 182;
        g_542adf = g_542ad5 ^ 70;
        g_542ae0 = g_542ad6 ^ 246;
        g_542ae1 = g_542ad7 ^ 12;
        g_542ae2 = g_542ad8 ^ 178;
        g_542ae3 = g_542ad9 ^ 181;
        g_542ae4 = g_542ada ^ 217;
        g_542ae5 = g_542adb ^ 93;
        g_542ae6 = g_542adc ^ 70;
        g_542ae7 = g_542add ^ 58;
        g_542ac8 = g_542abc ^ 86;
        g_542ac9 = g_542abd ^ 241;
        g_542aca = g_542abe ^ 175;
        g_542acb = g_542abf ^ 200;
        g_542acc = g_542ac0 ^ 147;
        g_542acd = g_542ac1 ^ 234;
        g_542ace = g_542ac2 ^ 254;
        g_542acf = g_542ac3 ^ 0x44;
        g_542ad0 = g_542ac4 ^ 28;
        g_542ad1 = g_542ac5 ^ 247;
        g_542ad2 = g_542ac6 ^ 195;
        g_542ad3 = g_542ac7 ^ 164;
        g_542aaa = g_542a9c ^ 69;
        g_542aab = g_542a9d ^ 32;
        g_542aac = g_542a9e ^ 200;
        g_542aad = g_542a9f ^ 202;
        g_542aae = g_542aa0 ^ 63;
        g_542aaf = g_542aa1 ^ 84;
        g_542ab0 = g_542aa2 ^ 12;
        g_542ab1 = g_542aa3 ^ 86;
        g_542ab2 = g_542aa4 ^ 230;
        g_542ab3 = g_542aa5 ^ 0x99;
        g_542ab4 = g_542aa6 ^ 59;
        g_542ab5 = g_542aa7 ^ 117;
        g_542ab6 = g_542aa8 ^ 172;
        g_542ab7 = g_542aa9 ^ 72;
        g_542aba = g_542ab8 ^ 173;
        g_542abb = g_542ab9 ^ 186;
        g_542a70 = g_542a40 ^ 183;
        g_542a71 = g_542a41 ^ 84;
        g_542a72 = g_542a42 ^ 138;
        g_542a73 = g_542a43 ^ 246;
        g_542a74 = g_542a44 ^ 22;
        g_542a75 = g_542a45 ^ 108;
        g_542a76 = g_542a46 ^ 185;
        g_542a77 = g_542a47 ^ 155;
        g_542a78 = g_542a48 ^ 94;
        g_542a79 = g_542a49 ^ 179;
        g_542a7a = g_542a4a ^ 0x11;
        g_542a7b = g_542a4b ^ 41;
        g_542a7c = g_542a4c ^ 181;
        g_542a7d = g_542a4d ^ 35;
        g_542a7e = g_542a4e ^ 13;
        g_542a7f = g_542a4f ^ 202;
        g_542a80 = g_542a50 ^ 235;
        g_542a81 = g_542a51 ^ 67;
        g_542a82 = g_542a52 ^ 160;
        g_542a83 = g_542a53 ^ 229;
        g_542a84 = g_542a54 ^ 145;
        g_542a85 = g_542a55 ^ 104;
        g_542a86 = g_542a56 ^ 149;
        g_542a87 = g_542a57 ^ 37;
        g_542a88 = g_542a58 ^ 113;
        g_542a89 = g_542a59 ^ 125;
        g_542a8a = g_542a5a ^ 142;
        g_542a8b = g_542a5b ^ 225;
        g_542a8c = g_542a5c ^ 198;
        g_542a8d = g_542a5d ^ 179;
        g_542a8e = g_542a5e ^ 54;
        g_542a8f = g_542a5f ^ 83;
        g_542a90 = g_542a60 ^ 234;
        g_542a91 = g_542a61 ^ 195;
        g_542a92 = g_542a62 ^ 113;
        g_542a93 = g_542a63 ^ 167;
        g_542a94 = g_542a64 ^ 87;
        g_542a95 = g_542a65 ^ 168;
        g_542a96 = g_542a66 ^ 5;
        g_542a97 = g_542a67 ^ 191;
        g_542a98 = g_542a68 ^ 78;
        g_542a99 = g_542a69 ^ 54;
        g_542a9a = g_542a6a ^ 154;
        g_542a9b = g_542a6b ^ 107;
        g_542a20 = g_542a00 ^ 0x88;
        g_542a21 = g_542a01 ^ 232;
        g_542a22 = g_542a02 ^ 120;
        g_542a23 = g_542a03 ^ 210;
        g_542a24 = g_542a04 ^ 43;
        g_542a25 = g_542a05 ^ 140;
        g_542a26 = g_542a06 ^ 160;
        g_542a27 = g_542a07 ^ 91;
        g_542a28 = g_542a08 ^ 27;
        g_542a29 = g_542a09 ^ 228;
        g_542a2a = g_542a0a ^ 169;
        g_542a2b = g_542a0b ^ 123;
        g_542a2c = g_542a0c ^ 65;
        g_542a2d = g_542a0d ^ 207;
        g_542a2e = g_542a0e ^ 58;
        g_542a2f = g_542a0f ^ 126;
        g_542a30 = g_542a10 ^ 0xcc;
        g_542af0 = g_542ae8 ^ 154;
        g_542af1 = g_542ae9 ^ 232;
        g_542af2 = g_542aea ^ 202;
        g_542af3 = g_542aeb ^ 167;
        g_542af4 = g_542aec ^ 89;
        g_542af5 = g_542aed ^ 145;
        g_542af6 = g_542aee ^ 99;
        g_542af7 = g_542aef ^ 130;
        g_5429ee = g_5429e4 ^ 71;
        g_5429ef = g_5429e5 ^ 99;
        g_5429f0 = g_5429e6 ^ 246;
        g_5429f1 = g_5429e7 ^ 218;
        g_5429f2 = g_5429e8 ^ 110;
        g_5429f3 = g_5429e9 ^ 211;
        g_5429f4 = g_5429ea ^ 142;
        g_5429f5 = g_5429eb ^ 4;
        g_5429f6 = g_5429ec ^ 217;
        g_5429f7 = g_5429ed ^ 232;
        g_542a38 = g_542a31 ^ 114;
        g_542a39 = g_542a32 ^ 171;
        g_542a3a = g_542a33 ^ 162;
        g_542a3b = g_542a34 ^ 235;
        g_542a3c = g_542a35 ^ 234;
        g_542a3d = g_542a36 ^ 210;
        g_542a3e = g_542a37 ^ 24;
        g_5429da = g_5429d0 ^ 90;
        g_5429db = g_5429d1 ^ 235;
        g_5429dc = g_5429d2 ^ 0x44;
        g_5429dd = g_5429d3 ^ 0x66;
        g_5429de = g_5429d4 ^ 50;
        g_5429df = g_5429d5 ^ 183;
        g_5429e0 = g_5429d6 ^ 80;
        g_5429e1 = g_5429d7 ^ 112;
        g_5429e2 = g_5429d8 ^ 31;
        g_5429e3 = g_5429d9 ^ 35;
        g_5429ce = g_5429cc ^ 201;
        g_5429cf = g_5429cd ^ 15;
        g_5429a0 = g_542990 ^ 53;
        g_5429a1 = g_542991 ^ 168;
        g_5429a2 = g_542992 ^ 115;
        g_5429a3 = g_542993 ^ 225;
        g_5429a4 = g_542994 ^ 71;
        g_5429a5 = g_542995 ^ 232;
        g_5429a6 = g_542996 ^ 196;
        g_5429a7 = g_542997 ^ 173;
        g_5429a8 = g_542998 ^ 48;
        g_5429a9 = g_542999 ^ 169;
        g_5429aa = g_54299a ^ 27;
        g_5429ab = g_54299b ^ 168;
        g_5429ac = g_54299c ^ 38;
        g_5429ad = g_54299d ^ 89;
        g_5429ae = g_54299e ^ 249;
        g_5429af = g_54299f ^ 69;
        g_5429c9 = g_5429c6 ^ 212;
        g_5429ca = g_5429c7 ^ 0x66;
        g_5429cb = g_5429c8 ^ 38;
        g_5429bb = g_5429b0 ^ 56;
        g_5429bc = g_5429b1 ^ 137;
        g_5429bd = g_5429b2 ^ 14;
        g_5429be = g_5429b3 ^ 0x99;
        g_5429bf = g_5429b4 ^ 194;
        g_5429c0 = g_5429b5 ^ 76;
        g_5429c1 = g_5429b6 ^ 125;
        g_5429c2 = g_5429b7 ^ 252;
        g_5429c3 = g_5429b8 ^ 0x99;
        g_5429c4 = g_5429b9 ^ 16;
        g_5429c5 = g_5429ba ^ 16;
    }
    /* unsupported instruction */
    g_580630 = 1;
    _objc_retain(a2);
    _objc_retain(a3);
    _objc_retain(a4);
    if (_objc_msgSend(a2, SEL_length) && _objc_msgSend(a3, SEL_length) == 32 && _objc_msgSend(a4, SEL_length) == 24)
    {
        v20 = SEL_JSONObjectWithData_options_error_;
        count = _objc_msgSend(g_4c42e8, SEL_JSONObjectWithData_options_error_, a2, 0, 0);
        v54 = _objc_retainAutoreleasedReturnValue(count, SEL_JSONObjectWithData_options_error_, a2, 0, 0);
        v19 = SEL_class;
        count1 = _objc_msgSend(g_4c4208, SEL_class);
        v18 = SEL_isKindOfClass_;
        v22 = v54;
        if (_objc_msgSend(v54, SEL_isKindOfClass_, count1))
            v56 = v54;
        else
            v56 = 0;
        _objc_retain();
        v23 = v56;
        if (v56)
        {
            v21 = SEL_objectForKeyedSubscript_;
            count2 = _objc_msgSend(v56, SEL_objectForKeyedSubscript_, &g_542be0);
            v58 = _objc_retainAutoreleasedReturnValue(count2, SEL_objectForKeyedSubscript_, &g_542be0);
            v17 = SEL_integerValue;
            if (_objc_msgSend(v58, SEL_integerValue) == 2)
            {
                v16 = a0;
                v59 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v56, v21, &g_542e20), v21, &g_542e20);
                if (!((char)_objc_msgSend(v59, SEL_isEqual_, " \t`") & 1))
                {
LABEL_2f42f8:
                    _objc_release(v59);
                    goto LABEL_2f4300;
                }
                v15 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v23, v21, &g_542e60), v21, &g_542e60);
                if (!((char)_objc_msgSend(v15, SEL_isEqual_, " \t`") & 1))
                {
                    _objc_release(v15);
                    goto LABEL_2f42f8;
                }
                v14 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v23, v21, &g_542c60), v21, &g_542c60);
                v60 = _objc_retainAutoreleasedReturnValue(sub_2f2e10(a4));
                v13 = (unsigned int)_objc_msgSend(v14, SEL_isEqual_, v60);
                _objc_release(v60);
                _objc_release(v14);
                _objc_release(v15);
                _objc_release(v59);
                _objc_release(v58);
                if (v13)
                {
                    v61 = v23;
                    v62 = v21;
                    v63 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v61, v62, &g_542d60), v62, &g_542d60);
                    v15 = _objc_msgSend(v63, v17);
                    _objc_release(v63);
                    v64 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v61, v62, &g_542de0), v62, &g_542de0);
                    v65 = _objc_msgSend(v64, v17);
                    _objc_release(v64);
                    v66 = _objc_msgSend(g_4c41d0, SEL_date);
                    v67 = _objc_retainAutoreleasedReturnValue(v66, SEL_date);
                    _objc_msgSend(v67, SEL_timeIntervalSince1970);
                    _objc_release(v67);
                    if (v65 - v15 == 30)
                    {
                        v69 = v68;
                        if (v69 + 5 >= v15 && v65 + 5 >= v69)
                        {
                            v2 = " \t`";
                            v3 = " \t`";
                            v4 = " \t`";
                            v70 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_);
                            v15 = _objc_retainAutoreleasedReturnValue(v70, SEL_numberWithInteger_);
                            v71 = _objc_msgSend(v15, SEL_stringValue);
                            v14 = _objc_retainAutoreleasedReturnValue(v71, SEL_stringValue);
                            v5 = v14;
                            v72 = v65;
                            v73 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v72);
                            v13 = _objc_retainAutoreleasedReturnValue(v73, SEL_numberWithInteger_, v72);
                            v74 = _objc_msgSend(v13, SEL_stringValue);
                            v12 = _objc_retainAutoreleasedReturnValue(v74, SEL_stringValue);
                            v6 = v12;
                            v75 = v23;
                            v76 = v21;
                            v11 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v75, v76, &g_542c60), v76, &g_542c60);
                            v7 = v11;
                            v10 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v75, v76, &g_542ca0), v76, &g_542ca0);
                            v8 = v10;
                            v9 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v75, v76, &g_542d20), v76, &g_542d20);
                            v77 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v2, 8);
                            v78 = _objc_retainAutoreleasedReturnValue(v77, SEL_arrayWithObjects_count_, &v2, 8);
                            v79 = _objc_msgSend(v78, SEL_componentsJoinedByString_, &g_542ba0);
                            v17 = _objc_retainAutoreleasedReturnValue(v79, SEL_componentsJoinedByString_, &g_542ba0);
                            _objc_release(v78);
                            _objc_release(v9);
                            _objc_release(v10);
                            _objc_release(v11);
                            _objc_release(v12);
                            _objc_release(v13);
                            _objc_release(v14);
                            _objc_release(v15);
                            v80 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v75, v76, &g_542b60), v76, &g_542b60);
                            v81 = _objc_retainAutoreleasedReturnValue(sub_2f4364(v80));
                            _objc_release(v80);
                            v82 = _objc_msgSend(v16, SEL_apiPubKey);
                            if (v82 && _objc_msgSend(v81, SEL_length))
                            {
                                v1 = 0;
                                v83 = _objc_msgSend(v17, SEL_dataUsingEncoding_, 4);
                                v84 = (unsigned int)_SecKeyVerifySignature(v82, *((long long *)&g_6006b8), v83, v81, &v1);
                                if (v1)
                                    _CFRelease(v1);
                                if (!v84)
                                    goto LABEL_2f4320;
                                v85 = _objc_retainAutoreleasedReturnValue(sub_2f3020(a4, a3), a3);
                                v86 = _objc_msgSend(&g_542b20, SEL_dataUsingEncoding_, 4);
                                v87 = _objc_retainAutoreleasedReturnValue(v86, SEL_dataUsingEncoding_, 4);
                                v88 = _objc_msgSend(v87, SEL_mutableCopy);
                                _objc_release(v87);
                                v0 = 1;
                                _objc_msgSend(v88, SEL_appendBytes_length_, &v0, 1);
                                v15 = v88;
                                v16 = v85;
                                v89 = _objc_retainAutoreleasedReturnValue(sub_2f3020(v85, v88), v88);
                                v90 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v23, v21, &g_542d20), v21, &g_542d20);
                                v91 = _objc_retainAutoreleasedReturnValue(sub_2f4364(v90));
                                v92 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v23, v21, &g_542ca0), v21, &g_542ca0);
                                v21 = v89;
                                v93 = _objc_retainAutoreleasedReturnValue(sub_2f4364(v92));
                                v94 = _objc_retainAutoreleasedReturnValue(sub_2f2c2c(v91, v89, v93, 1), v89, v93, 1);
                                _objc_release(v93);
                                _objc_release(v92);
                                _objc_release(v91);
                                _objc_release(v90);
                                if (_objc_msgSend(v94, SEL_length))
                                {
                                    v95 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c42e8, v20, v94, 0, 0), v20, v94, 0, 0);
                                    _objc_retain();
                                    _objc_release(v95);
                                }
                                _objc_release(v94);
                                _objc_release(v21);
                                _objc_release(v15);
                                _objc_release(v16);
                            }
                            else
                            {
LABEL_2f4320:
                            }
                            _objc_release(v81);
                            _objc_release(v17);
                        }
                    }
                }
            }
            else
            {
LABEL_2f4300:
                _objc_release(v58);
            }
        }
        _objc_release(v23);
        _objc_release(v22);
    }
    _objc_release(a4);
    _objc_release(a3);
    _objc_release(a2);
    if (*((long long *)&g_600760) != v24)
        ___stack_chk_fail();
}
