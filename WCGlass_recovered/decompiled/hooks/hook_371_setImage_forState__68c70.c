/* Hook replacement 371/418
 * Selectors: SEL_setImage_forState_
 * Address: 0x68c70; original size: 244 bytes
 * Status: ok; elapsed: 0.336s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_68c70(long long a0, unsigned long a1, long long a2, unsigned long a3)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    unsigned long long count;  // x0
    long long count1;  // x0
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
    if (a2 && sub_2316d8(a2))
    {
        v16 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4d26d8), &g_4d26d8);
        count = _objc_msgSend(v16, SEL_boolValue);
        _objc_release(v16);
        if (!((char)count & 1))
            _objc_setAssociatedObject(a0, &g_4d26e0, a2, 1);
    }
    g_57cca0(a0, a1, a2, a3);
    count1 = _objc_msgSend(a0, SEL_wclg_applySMSBackChevronIfNeeded);
    if (!sub_74554(count1, SEL_wclg_applySMSBackChevronIfNeeded) || !((char)sub_7409c(a0) & 1))
        _objc_msgSend(a0, SEL_wclg_applySMSHomeAddIconIfNeeded);
    _objc_release();
    return;
}
