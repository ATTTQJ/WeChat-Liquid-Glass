/* Hook replacement 175/418
 * Selectors: SEL_viewDidDisappear_
 * Address: 0x2b6d4; original size: 212 bytes
 * Status: ok; elapsed: 0.344s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_2b6d4(long long a0)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    long long v17;  // x0
    long long v18;  // x20
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long count;  // x0
    long long v13;  // x0
    long long count1;  // x0
    long long v15;  // x0
    long long v16;  // x0
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
    g_57be28();
    sub_22c044(a0);
    count = _objc_msgSend(a0, SEL_view);
    v13 = _objc_retainAutoreleasedReturnValue(count, SEL_view);
    count1 = _objc_msgSend(v13, SEL_window);
    v15 = _objc_retainAutoreleasedReturnValue(count1, SEL_window);
    sub_22b818(v15);
    _objc_release(v15);
    _objc_release(v13);
    v16 = _objc_retain(a0);
    v17 = _objc_getAssociatedObject(v16, g_4cb940);
    v18 = _objc_retainAutoreleasedReturnValue(v17, g_4cb940);
    if (v18)
    {
        _objc_msgSend(v18, SEL_removeFromSuperview);
        _objc_setAssociatedObject(a0, g_4cb940, 0, 1);
    }
    _objc_release(v18);
    _objc_release();
    return;
}
