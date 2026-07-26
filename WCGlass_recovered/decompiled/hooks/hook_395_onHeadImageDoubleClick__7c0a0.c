/* Hook replacement 395/418
 * Selectors: SEL_onHeadImageDoubleClick_
 * Address: 0x7c0a0; original size: 280 bytes
 * Status: ok; elapsed: 0.382s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_7c0a0(long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long count;  // x0
    unsigned long long v20;  // x0
    unsigned long long v22;  // x22
    unsigned long long v23;  // x0
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    unsigned long v16;  // x19
    long long count1;  // x0
    unsigned long long v18;  // x22
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
    v16 = a2;
    if (sub_124434(_objc_retain(a2)) && sub_12448c() == 1 && !((char)sub_12449c(a0) & 1))
    {
        count1 = _objc_msgSend(g_4c4078, SEL_class);
        v18 = v16;
        if (!_objc_retain())
        {
            if (_objc_msgSend(a0, SEL_respondsToSelector_, SEL_getHeadImageView))
            {
                count = _objc_msgSend(a0, SEL_getHeadImageView);
                v20 = _objc_retainAutoreleasedReturnValue(count, SEL_getHeadImageView);
                v18 = v20;
            }
            else
            {
                v18 = 0;
            }
        }
        v22 = v18;
        v23 = sub_126098(a0, v22);
        _objc_release(v22);
        if ((v23 & 1))
            goto LABEL_7c1a0;
    }
    g_57d0e8(a0, a1, v16);
LABEL_7c1a0:
    _objc_release();
    return;
}
