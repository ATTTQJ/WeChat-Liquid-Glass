/* Hook replacement 11/418
 * Selectors: SEL_getBackgroundView
 * Address: 0x69f0; original size: 192 bytes
 * Status: ok; elapsed: 0.294s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_69f0(long long a0, long long a1)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x19
    long long count;  // x0
    unsigned long long *v11;  // x0
    unsigned long v12;  // x8
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    sub_7474();
    v8 = _objc_retainAutoreleasedReturnValue(g_57b2c8(a0, a1), a1);
    count = _objc_msgSend(g_4c4078, SEL_class);
    if (_objc_msgSend(v8, SEL_isKindOfClass_, count))
        sub_23d184(v8, sub_23d0f4(a0));
    v11 = __tlv_bootstrap(&g_57b210);
    v12 = *(v11);
    if (!v12 || (*(v11) = (unsigned long long)(v12 - 1), v12 == 1))
        *((char *)__tlv_bootstrap(&g_57b228)) = 0;
}
