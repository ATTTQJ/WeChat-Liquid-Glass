/* Hook replacement 362/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x688e4; original size: 88 bytes
 * Status: ok; elapsed: 0.232s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_688e4(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57cc58();
    sub_63124(_objc_retain(a0));
    sub_21e3a0(a0);
    sub_21877c(a0);
    sub_21ba8c(a0);
    sub_6d110(a0);
}
