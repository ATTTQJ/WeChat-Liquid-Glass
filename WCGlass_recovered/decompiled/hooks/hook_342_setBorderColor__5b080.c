/* Hook replacement 342/418
 * Selectors: SEL_setBorderColor_
 * Address: 0x5b080; original size: 220 bytes
 * Status: ok; elapsed: 0.357s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_5b080(unsigned long a0, unsigned long a1, unsigned long long count)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long count1;  // x0
    long long v20;  // x0
    long long v21;  // x0
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long count2;  // x0
    long long v17;  // x19
    long long v18;  // x0
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
    count2 = _objc_msgSend();
    v17 = _objc_retainAutoreleasedReturnValue(count2, SEL_delegate);
    v18 = _objc_msgSend(g_4c4078, SEL_class);
    if (_objc_msgSend(v17, SEL_isKindOfClass_, v18) && sub_43f1f4(v17))
    {
        count1 = _objc_msgSend(g_4c4090, SEL_clearColor);
        v20 = _objc_retainAutoreleasedReturnValue(count1, SEL_clearColor);
        v21 = _objc_retainAutorelease(v20);
        count = _objc_msgSend(v21, SEL_CGColor);
        _objc_release(v20);
    }
    g_57ca48(a0, a1, count);
    _objc_release();
    return;
}
