/* Hook replacement 357/418
 * Selectors: SEL_viewWillAppear_
 * Address: 0x684dc; original size: 188 bytes
 * Status: ok; elapsed: 0.355s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_684dc(long long a0)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    long long count;  // x0
    long long v18;  // x0
    long long v19;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long count1;  // x0
    long long v13;  // x0
    long long count2;  // x0
    long long v15;  // x19
    long long v16;  // x21
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
    g_57cc30();
    sub_3b44a8(a0);
    count1 = _objc_msgSend(a0, SEL_navigationController);
    v13 = _objc_retainAutoreleasedReturnValue(count1, SEL_navigationController);
    count2 = _objc_msgSend(v13, SEL_navigationBar);
    v15 = _objc_retainAutoreleasedReturnValue(count2, SEL_navigationBar);
    _objc_release(v13);
    sub_79498(v15, 1);
    v16 = v15;
    if (!v16)
    {
        count = _objc_msgSend(a0, SEL_view);
        v18 = _objc_retainAutoreleasedReturnValue(count, SEL_view);
        v16 = v18;
    }
    v19 = v16;
    sub_71c20(v19);
    if (!v15)
        _objc_release(v19);
    _objc_release();
    return;
}
