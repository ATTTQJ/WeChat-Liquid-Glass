/* Hook replacement 251/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x428e0; original size: 132 bytes
 * Status: ok; elapsed: 0.276s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_428e0(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    long long v10;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57c400();
    sub_63120(_objc_retain(a0));
    count = _objc_msgSend(a0, SEL_window);
    v10 = _objc_retainAutoreleasedReturnValue(count, SEL_window);
    _objc_release(v10);
    if (v10)
        sub_261b64(a0);
    sub_21e3a0(a0);
    sub_21877c(a0);
    sub_21ba8c(a0);
    sub_2169ec(a0);
    _objc_release();
    return;
}
