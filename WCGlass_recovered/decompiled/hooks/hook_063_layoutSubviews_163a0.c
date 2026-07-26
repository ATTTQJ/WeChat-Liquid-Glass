/* Hook replacement 63/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x163a0; original size: 104 bytes
 * Status: ok; elapsed: 0.353s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_163a0(long long a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57b668();
    if (!(g_582f88 & 1))
    {
        return;
    }
    else if ((g_582f8b & 1))
    {
        sub_1389b0(a0);
        sub_12d580(a0);
    }
    else
    {
        return;
    }
}
