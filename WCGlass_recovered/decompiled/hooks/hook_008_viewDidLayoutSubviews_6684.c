/* Hook replacement 8/418
 * Selectors: SEL_viewDidLayoutSubviews
 * Address: 0x6684; original size: 128 bytes
 * Status: ok; elapsed: 0.28s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_6684(long long a0)
{
    unsigned long long v2;  // w0
    long long count;  // x0
    long long v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57b2b0();
    if (!((char)sub_23c668(0) & 1))
    {
        v2 = (unsigned int)sub_23c668(1);
        if (!v2)
            return v2;
    }
    count = _objc_msgSend(a0, SEL_view);
    v4 = _objc_retainAutoreleasedReturnValue(count, SEL_view);
    sub_23e400(v4, sub_23d0f4(a0));
}
