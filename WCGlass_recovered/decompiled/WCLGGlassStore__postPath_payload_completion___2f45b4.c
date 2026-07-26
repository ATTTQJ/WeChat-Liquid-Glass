/* Recovered pseudocode
 * Objective-C: -[WCLGGlassStore postPath:payload:completion:]
 * Address: 0x2f45b4; original size: 2552 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.856s
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

long long sub_2f45b4(long long a0, unsigned long a1, long long a2, long long a3, struct_0 *a4)
{
    long long v11;  // x2
    long long count;  // x0
    long long v21;  // x27
    long long v22;  // x2
    long long count1;  // x0
    long long v24;  // x21
    long long len;  // x24
    long long count2;  // x0
    long long v15;  // x2
    long long v16;  // x0
    long long v17;  // x2
    long long v18;  // x0
    long long v19;  // x26
    long long v20;  // x0
    unsigned long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    long long v4;  // [bp-0xa0]
    long long v5;  // [bp-0x98]
    long long v6;  // [bp-0x90]
    long long v7;  // [bp-0x80]
    long long v8;  // [bp-0x70]
    char *v9;  // [bp-0x10]
    char v10;  // [bp+0x0]

    v9 = &v10;
    /* unsupported instruction */
    if (!(int)g_580638)
    {
        *((unsigned short *)&g_5430e0) = g_5430d6 ^ 19899;
        *((unsigned short *)&g_5430e2) = g_5430d8 ^ 340;
        *((unsigned short *)&g_5430e4) = g_5430da ^ 24120;
        *((unsigned short *)&g_5430e6) = g_5430dc ^ 49390;
        *((unsigned short *)&g_5430e8) = g_5430de ^ 22969;
        g_543070 = g_543050 ^ 250;
        g_543071 = g_543051 ^ 173;
        g_543072 = g_543052 ^ 227;
        g_543073 = g_543053 ^ 41;
        g_543074 = g_543054 ^ 6;
        g_543075 = g_543055 ^ 137;
        g_543076 = g_543056 ^ 111;
        g_543077 = g_543057 ^ 241;
        g_543078 = g_543058 ^ 151;
        g_543079 = g_543059 ^ 40;
        g_54307a = g_54305a ^ 19;
        g_54307b = g_54305b ^ 183;
        g_54307c = g_54305c ^ 133;
        g_54307d = g_54305d ^ 185;
        g_54307e = g_54305e ^ 29;
        g_54307f = g_54305f ^ 166;
        g_543080 = g_543060 ^ 224;
        g_543098 = g_543093 ^ 0xbb;
        g_543099 = g_543094 ^ 150;
        g_54309a = g_543095 ^ 0x77;
        g_54309b = g_543096 ^ 177;
        g_54309c = g_543097 ^ 160;
        g_54303b = g_54302e ^ 132;
        g_54303c = g_54302f ^ 101;
        g_54303d = g_543030 ^ 127;
        g_54303e = g_543031 ^ 0xcc;
        g_54303f = g_543032 ^ 217;
        g_543040 = g_543033 ^ 168;
        g_543041 = g_543034 ^ 45;
        g_543042 = g_543035 ^ 207;
        g_543043 = g_543036 ^ 40;
        g_543044 = g_543037 ^ 4;
        g_543045 = g_543038 ^ 236;
        g_543046 = g_543039 ^ 32;
        g_543047 = g_54303a ^ 249;
        g_543027 = g_543020 ^ 140;
        g_543028 = g_543021 ^ 248;
        g_543029 = g_543022 ^ 3;
        g_54302a = g_543023 ^ 251;
        g_54302b = g_543024 ^ 67;
        g_54302c = g_543025 ^ 123;
        g_54302d = g_543026 ^ 108;
        g_543010 = g_543000 ^ 0x44;
        g_543011 = g_543001 ^ 128;
        g_543012 = g_543002 ^ 74;
        g_543013 = g_543003 ^ 245;
        g_543014 = g_543004 ^ 76;
        g_543015 = g_543005 ^ 95;
        g_543016 = g_543006 ^ 156;
        g_543017 = g_543007 ^ 0x33;
        g_543018 = g_543008 ^ 111;
        g_543019 = g_543009 ^ 131;
        g_54301a = g_54300a ^ 6;
        g_54301b = g_54300b ^ 174;
        g_54301c = g_54300c ^ 138;
        g_54301d = g_54300d ^ 35;
        g_54301e = g_54300e ^ 182;
        g_54301f = g_54300f ^ 168;
        g_54308a = g_543081 ^ 12;
        g_54308b = ~(g_543082);
        g_54308c = g_543083 ^ 49;
        g_54308d = g_543084 ^ 2;
        g_54308e = g_543085 ^ 29;
        g_54308f = g_543086 ^ 128;
        g_543090 = g_543087 ^ 142;
        g_543091 = g_543088 ^ 0x66;
        g_543092 = g_543089 ^ 203;
        g_542ffe = g_542ffc ^ 20;
        g_542fff = g_542ffd ^ 50;
        g_5430c0 = g_5430a0 ^ 42;
        g_5430c1 = g_5430a1 ^ 127;
        g_5430c2 = g_5430a2 ^ 185;
        g_5430c3 = g_5430a3 ^ 236;
        g_5430c4 = g_5430a4 ^ 196;
        g_5430c5 = g_5430a5 ^ 55;
        g_5430c6 = g_5430a6 ^ 194;
        g_5430c7 = g_5430a7 ^ 174;
        g_5430c8 = g_5430a8 ^ 227;
        g_5430c9 = g_5430a9 ^ 151;
        g_5430ca = g_5430aa ^ 0xcc;
        g_5430cb = g_5430ab ^ 118;
        g_5430cc = g_5430ac ^ 112;
        g_5430cd = g_5430ad ^ 33;
        g_5430ce = g_5430ae ^ 88;
        g_5430cf = g_5430af ^ 94;
        g_5430d0 = g_5430b0 ^ 108;
        g_5430d1 = g_5430b1 ^ 164;
        g_5430d2 = g_5430b2 ^ 0xbb;
        g_5430d3 = g_5430b3 ^ 41;
        g_5430d4 = g_5430b4 ^ 133;
        g_542fee = g_542fe0 ^ 33;
        g_542fef = g_542fe1 ^ 246;
        g_542ff0 = g_542fe2 ^ 88;
        g_542ff1 = g_542fe3 ^ 22;
        g_542ff2 = g_542fe4 ^ 245;
        g_542ff3 = g_542fe5 ^ 203;
        g_542ff4 = g_542fe6 ^ 251;
        g_542ff5 = g_542fe7 ^ 145;
        g_542ff6 = g_542fe8 ^ 230;
        g_542ff7 = g_542fe9 ^ 166;
        g_542ff8 = g_542fea ^ 60;
        g_542ff9 = g_542feb ^ 203;
        g_542ffa = g_542fec ^ 157;
        g_542ffb = g_542fed ^ 43;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_580638) = 1;
    _objc_retain(a2);
    _objc_retain(a4);
    v8 = 0;
    v7 = 0;
    v11 = a3;
    count = _objc_msgSend(a0, SEL_buildRequest_requestKey_nonce_, a3, &v8, &v7);
    len = _objc_retainAutoreleasedReturnValue(count, SEL_buildRequest_requestKey_nonce_, a3, &v8, &v7);
    _objc_retain(v8);
    _objc_retain(v7);
    if (len)
    {
        count2 = _objc_msgSend(&g_5432d0, SEL_stringByAppendingString_, a2);
        v15 = _objc_retainAutoreleasedReturnValue(count2, SEL_stringByAppendingString_, a2);
        v16 = _objc_msgSend(g_4c42c0, SEL_URLWithString_, v15);
        v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_URLWithString_, v15);
        v18 = _objc_msgSend(g_4c42c8, SEL_requestWithURL_, v17);
        v19 = _objc_retainAutoreleasedReturnValue(v18, SEL_requestWithURL_, v17);
        _objc_release(v17);
        _objc_release(v15);
        _objc_msgSend(v19, SEL_setCachePolicy_, 1);
        _objc_msgSend(v19, SEL_setHTTPMethod_, &g_543210);
        _objc_msgSend(v19, SEL_setValue_forHTTPHeaderField_, &g_543250, &g_543310);
        _objc_msgSend(v19, SEL_setValue_forHTTPHeaderField_, &g_543250, &g_543290);
        _objc_msgSend(v19, SEL_setValue_forHTTPHeaderField_, &g_543190, &g_5431d0);
        _objc_msgSend(v19, SEL_setValue_forHTTPHeaderField_, &g_543150, &g_543110);
        _objc_msgSend(v19, SEL_setHTTPBody_, len);
        _objc_msgSend(v19, SEL_setTimeoutInterval_);
        v20 = _objc_msgSend(g_4c42d0, SEL_sharedSession);
        v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_sharedSession);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 3100588;
        v3 = &g_4a44f8;
        _objc_retain(a4);
        v4 = a0;
        _objc_retain(v8);
        v5 = v8;
        _objc_retain(v7);
        v6 = v7;
        v22 = v19;
        count1 = _objc_msgSend(v21, SEL_dataTaskWithRequest_completionHandler_, v22, &v0);
        v24 = _objc_retainAutoreleasedReturnValue(count1, SEL_dataTaskWithRequest_completionHandler_, v22, &v0);
        _objc_release(v21);
        _objc_msgSend(v24, SEL_resume);
        _objc_release(v24);
        _objc_release(v6);
        _objc_release(v5);
        _objc_release(a4);
        _objc_release(v19);
    }
    else
    {
        a4->field_10(a4, 0, &g_543350);
    }
    _objc_release(len);
    _objc_release(v7);
    _objc_release(v8);
    _objc_release(a4);
    return _objc_release(a2);
}
