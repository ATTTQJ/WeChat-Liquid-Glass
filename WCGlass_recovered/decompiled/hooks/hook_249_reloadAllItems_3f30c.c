/* Hook replacement 249/418
 * Selectors: SEL_reloadAllItems
 * Address: 0x3f30c; original size: 128 bytes
 * Status: ok; elapsed: 0.235s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3f30c(long long a0, unsigned long a1)
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
    if ((g_583009 & 1))
        sub_4077c(a0);
    else
        sub_41104(a0);
    g_57c3b0(a0, a1);
    if (!(g_583009 & 1))
    {
        sub_41104();
        return;
    }
    sub_4077c();
    return;
}
