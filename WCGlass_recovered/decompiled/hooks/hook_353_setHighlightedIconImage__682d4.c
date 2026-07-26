/* Hook replacement 353/418
 * Selectors: SEL_setHighlightedIconImage_
 * Address: 0x682d4; original size: 88 bytes
 * Status: ok; elapsed: 0.243s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_682d4(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
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
    g_57cc10(a0, a1, a2);
    sub_73700(a0);
}
