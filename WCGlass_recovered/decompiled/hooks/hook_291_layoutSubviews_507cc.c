/* Hook replacement 291/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x507cc; original size: 112 bytes
 * Status: ok; elapsed: 0.248s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_507cc(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long count;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57c700();
    _objc_retain(a0);
    count = _objc_msgSend(g_4c4078, SEL_class);
    if (_objc_msgSend(a0, SEL_isKindOfClass_, count))
    {
        sub_51bf8(a0);
        sub_51e48(a0);
    }
}
