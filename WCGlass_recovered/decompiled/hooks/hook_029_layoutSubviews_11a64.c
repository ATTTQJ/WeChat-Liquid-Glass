/* Hook replacement 29/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x11a64; original size: 200 bytes
 * Status: ok; elapsed: 0.285s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_11a64(long long a0)
{
    long long v2;  // x0
    char v3;  // w0
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57b4e8();
    if (!(g_583059 & 1) || g_523238 == 100 && *((long long *)&g_523248) == 100 && *((long long *)&g_523250) == 100)
    {
        v2 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(a0, &g_4c9290), &g_4c9290);
        v3 = _objc_msgSend(v2, SEL_boolValue);
        v4 = _objc_release(v2);
        if (!v3)
            return v4;
    }
}
