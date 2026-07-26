/* Hook replacement 10/418
 * Selectors: SEL_reloadBackgroundView
 * Address: 0x6934; original size: 168 bytes
 * Status: ok; elapsed: 0.395s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int sub_6934(long long a0, unsigned long a1)
{
    long long count;  // x0
    long long v3;  // x19
    unsigned long long *v5;  // x0
    unsigned long long v6;  // x8
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sub_7474();
    g_57b2c0(a0, a1);
    count = _objc_msgSend(a0, SEL_view);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_view);
    sub_23e400(v3, sub_23d0f4(a0));
    _objc_release(v3);
    v5 = __tlv_bootstrap(&g_57b210);
    v6 = *(v5);
    if (!v6 || (*(v5) = v6 - 1, v6 == 1))
    {
        v5 = __tlv_bootstrap(&g_57b228);
        *((char *)v5) = 0;
    }
    return *((unsigned int *)&v5);
}
