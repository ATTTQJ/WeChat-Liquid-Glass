/* Hook replacement 372/418
 * Selectors: SEL_setHighlightedImage_
 * Address: 0x68d88; original size: 336 bytes
 * Status: ok; elapsed: 0.396s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_68d88(long long a0, long long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v19;  // w0
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    unsigned long long count;  // x0
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
    _objc_retain(a2);
    if (sub_7409c(a0) && (g_582f88 & 1) && (g_582fc2 & 1) && (g_582fe8 & 1))
    {
        v16 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4d2660), &g_4d2660);
        count = _objc_msgSend(v16, SEL_boolValue);
        _objc_release(v16);
        if ((count & 1))
            goto LABEL_68e28;
        if (sub_74554(g_57cca8(a0, a1, 0), a1, 0))
        {
            sub_76150(a0);
            v18 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4d2668), &g_4d2668);
            v19 = (unsigned int)_objc_msgSend(v18, SEL_boolValue);
            _objc_release(v18);
            if (v19)
                sub_75998(a0, 0);
        }
        else
        {
            _objc_msgSend(a0, SEL_wclg_applySMSHomeAddIconIfNeeded);
        }
    }
    else
    {
LABEL_68e28:
        g_57cca8(a0, a1, a2);
    }
    _objc_release();
    return;
}
