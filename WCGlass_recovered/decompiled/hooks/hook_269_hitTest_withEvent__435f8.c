/* Hook replacement 269/418
 * Selectors: SEL_hitTest_withEvent_
 * Address: 0x435f8; original size: 196 bytes
 * Status: ok; elapsed: 0.344s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_435f8(long long a0)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x19
    unsigned int v13;  // w0
    unsigned long long v14;  // x8
    long long v15;  // x0
    unsigned long long v16;  // x20
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = &v6;
    v5 = v11;
    v12 = _objc_retainAutoreleasedReturnValue(g_57c490());
    v13 = sub_45738c(v12);
    if (!v12)
        v14 = 0;
    else
        v14 = v13;
    if (((char)v14 & 1))
    {
        v15 = _objc_getAssociatedObject(a0, g_4ce728);
        v16 = _objc_retainAutoreleasedReturnValue(v15, g_4ce728);
        if (!v16 || v12 != v16 && !((char)_objc_msgSend(v12, SEL_isDescendantOfView_, v16) & 1))
            _objc_retain(v12);
        _objc_release(v16);
    }
    else
    {
        _objc_retain(v12);
    }
    _objc_release(v12);
}
