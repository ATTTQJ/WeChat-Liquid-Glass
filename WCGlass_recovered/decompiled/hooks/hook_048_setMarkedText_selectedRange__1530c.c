/* Hook replacement 48/418
 * Selectors: SEL_setMarkedText_selectedRange_
 * Address: 0x1530c; original size: 356 bytes
 * Status: ok; elapsed: 0.644s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1530c(long long a0, unsigned long a1, long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    char v16;  // x20
    char v17;  // x0
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
    if ((g_582f88 & 1) && (g_582f8b & 1))
    {
        v16 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        g_57b5f0(a0, a1, a2, a3, a4);
        if (2 >= sub_127040(_objc_retain(a0)) - 2)
            sub_129888(a0);
        _objc_release(a0);
        v17 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v17 || (_objc_retain(v16), v17 = v16, v16))
        {
            sub_192a04();
            sub_177f8(v17);
            if (_objc_msgSend(a2, SEL_length))
                sub_135e60(v17);
        }
        _objc_release(v17);
        _objc_release(v16);
    }
    else
    {
        g_57b5f0(a0, a1, a2, a3, a4);
    }
    _objc_release();
    return;
}
