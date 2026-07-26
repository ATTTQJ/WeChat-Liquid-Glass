/* Hook replacement 274/418
 * Selectors: SEL_updateTitleView_
 * Address: 0x43fdc; original size: 176 bytes
 * Status: ok; elapsed: 0.302s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_43fdc(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long count;  // x0
    long long v13;  // x0
    long long count1;  // x0
    long long v15;  // x0
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
    _objc_retain(a2);
    g_57c4b8(a0, a1, a2);
    sub_216bac(a0);
    sub_1ec028(a0);
    count = _objc_msgSend(a0, SEL_navigationController);
    v13 = _objc_retainAutoreleasedReturnValue(count, SEL_navigationController);
    count1 = _objc_msgSend(v13, SEL_navigationBar);
    v15 = _objc_retainAutoreleasedReturnValue(count1, SEL_navigationBar);
    sub_45038(v15);
    _objc_release(v15);
    _objc_release(v13);
    sub_237808(a0);
    _objc_release();
    return;
}
