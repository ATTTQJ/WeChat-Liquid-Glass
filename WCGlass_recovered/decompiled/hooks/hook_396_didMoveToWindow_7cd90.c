/* Hook replacement 396/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x7cd90; original size: 80 bytes
 * Status: ok; elapsed: 0.256s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_7cd90(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    char v9;  // x8
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57d108();
    count = _objc_msgSend(a0, SEL_window);
    if (!_objc_retainAutoreleasedReturnValue(count, SEL_window))
        v9 = 0;
    else
        v9 = 1;
    g_57d128 = v9;
}
