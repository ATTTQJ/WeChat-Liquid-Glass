/* Recovered pseudocode
 * Objective-C: -[WCGMultiDownloader fetchRange:session:]
 * Address: 0x2ed9dc; original size: 1164 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.851s
 */

long long sub_2ed9dc(long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, long long a4)
{
    long long count;  // x0
    long long v14;  // x25
    long long v23;  // x2
    long long count1;  // x0
    long long v25;  // x20
    long long count2;  // x0
    long long v16;  // x0
    long long v17;  // x24
    long long v18;  // x2
    long long v19;  // x0
    long long v20;  // x2
    long long v21;  // x0
    long long v22;  // x25
    long long v0;  // [bp-0xc0]
    long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    char *v11;  // [bp-0x10]
    char v12;  // [bp+0x0]

    v11 = &v12;
    /* unsupported instruction */
    if (!g_580558)
    {
        g_541c10 = g_541be0 ^ 25;
        g_541c11 = g_541be1 ^ 79;
        g_541c12 = g_541be2 ^ 223;
        g_541c13 = g_541be3 ^ 160;
        g_541c14 = g_541be4 ^ 6;
        g_541c15 = g_541be5 ^ 126;
        g_541c16 = g_541be6 ^ 67;
        g_541c17 = g_541be7 ^ 202;
        g_541c18 = g_541be8 ^ 36;
        g_541c19 = g_541be9 ^ 246;
        g_541c1a = g_541bea ^ 77;
        g_541c1b = g_541beb ^ 59;
        g_541c1c = g_541bec ^ 0xdd;
        g_541c1d = g_541bed ^ 62;
        g_541c1e = g_541bee ^ 122;
        g_541c1f = g_541bef ^ 65;
        g_541c20 = g_541bf0 ^ 3;
        g_541c21 = g_541bf1 ^ 67;
        g_541c22 = g_541bf2 ^ 237;
        g_541c23 = g_541bf3 ^ 21;
        g_541c24 = g_541bf4 ^ 16;
        g_541c25 = g_541bf5 ^ 232;
        g_541c26 = g_541bf6 ^ 138;
        g_541c27 = g_541bf7 ^ 95;
        g_541c28 = g_541bf8 ^ 49;
        g_541c29 = g_541bf9 ^ 146;
        g_541c2a = g_541bfa ^ 81;
        g_541c2b = g_541bfb ^ 72;
        g_541c2c = g_541bfc ^ 97;
        g_541c2d = g_541bfd ^ 0xbb;
        g_541c2e = g_541bfe ^ 248;
        g_541c2f = g_541bff ^ 25;
        g_541c30 = g_541c00 ^ 198;
        g_541c31 = g_541c01 ^ 249;
        g_541c32 = g_541c02 ^ 131;
        g_541c33 = g_541c03 ^ 209;
        g_541c34 = g_541c04 ^ 1;
        g_541c35 = g_541c05 ^ 0xcc;
        g_541c36 = g_541c06 ^ 190;
        g_541c37 = g_541c07 ^ 253;
        g_541c38 = g_541c08 ^ 28;
        g_541c39 = g_541c09 ^ 105;
        g_541c3a = g_541c0a ^ 141;
        g_541c3b = g_541c0b ^ 159;
        g_541c3c = g_541c0c ^ 189;
    }
    /* unsupported instruction */
    g_580558 = 1;
    _objc_retain(a4);
    count = _objc_msgSend(a0, SEL_base);
    v14 = _objc_retainAutoreleasedReturnValue(count, SEL_base);
    count2 = _objc_msgSend(a0, SEL_token);
    v2 = a2;
    v3 = a3;
    v0 = v14;
    v1 = _objc_retainAutoreleasedReturnValue(count2, SEL_token);
    v16 = _objc_msgSend(g_4c40b8, SEL_stringWithFormat_, &g_541c60);
    v17 = _objc_retainAutoreleasedReturnValue(v16, SEL_stringWithFormat_, &g_541c60);
    _objc_release(v1);
    _objc_release(v14);
    v18 = v17;
    v19 = _objc_msgSend(g_4c42c0, SEL_URLWithString_, v18);
    v20 = _objc_retainAutoreleasedReturnValue(v19, SEL_URLWithString_, v18);
    v21 = _objc_msgSend(g_4c42c8, SEL_requestWithURL_, v20);
    v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_requestWithURL_, v20);
    _objc_release(v20);
    _objc_msgSend(v22, SEL_setTimeoutInterval_);
    v4 = &g_600748;
    v5 = 0xc2000000;
    v6 = 3071592;
    v7 = &g_4a4458;
    v8 = a0;
    v9 = a2;
    v10 = a3;
    v23 = v22;
    count1 = _objc_msgSend(a4, SEL_dataTaskWithRequest_completionHandler_, v23, &v4);
    v25 = _objc_retainAutoreleasedReturnValue(count1, SEL_dataTaskWithRequest_completionHandler_, v23, &v4);
    _objc_release(a4);
    _objc_msgSend(v25, SEL_resume);
    _objc_release(v25);
    _objc_release(v22);
    return _objc_release(v17);
}
