/* Hook replacement 356/418
 * Selectors: SEL_traitCollectionDidChange_
 * Address: 0x683c8; original size: 220 bytes
 * Status: ok; elapsed: 0.394s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_683c8(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned int v19;  // w0
    unsigned long long v20;  // x8
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x21
    long long count;  // x0
    long long v18;  // x22
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    _objc_retain(a2);
    sub_77090(a0);
    g_57cc28(a0, a1, a2);
    v16 = _objc_retainAutoreleasedReturnValue(sub_72ed4(a0));
    count = _objc_msgSend(a0, SEL_traitCollection);
    v18 = _objc_retainAutoreleasedReturnValue(count, SEL_traitCollection);
    v19 = sub_78eec(a2, v18);
    _objc_release(v18);
    sub_774a4(a0);
    if (v16)
        v20 = v19 ^ 1;
    else
        v20 = 1;
    if (!((char)v20 & 1))
        sub_78f94(v16, a2);
    sub_71c20(a0);
    _objc_release(v16);
    _objc_release();
    return;
}
