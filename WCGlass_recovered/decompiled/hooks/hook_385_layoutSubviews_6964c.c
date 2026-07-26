/* Hook replacement 385/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x6964c; original size: 108 bytes
 * Status: ok; elapsed: 0.244s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_6964c(long long a0)
{
    char v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57cd30();
    if (!(g_5231c8 & 1))
        return;
    v2 = _objc_retainAutoreleasedReturnValue(sub_7a4a0(a0, 0), 0);
    if (v2)
        sub_653e0(v2);
}
