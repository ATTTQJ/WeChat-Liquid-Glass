/* Hook replacement 304/418
 * Selectors: SEL_setBackgroundColor_
 * Address: 0x59f20; original size: 148 bytes
 * Status: ok; elapsed: 0.269s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_59f20(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x19
    long long v13;  // x19
    long long count;  // x0
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
    v12 = a2;
    _objc_retain(a2);
    v13 = v12;
    if ((g_582f88 & 1))
    {
        count = _objc_msgSend(g_4c4090, SEL_clearColor);
        v15 = _objc_retainAutoreleasedReturnValue(count, SEL_clearColor);
        _objc_release(v12);
        v13 = v15;
    }
    g_57c918(a0, a1, v13);
    sub_433e94(a0);
    _objc_release();
    return;
}
