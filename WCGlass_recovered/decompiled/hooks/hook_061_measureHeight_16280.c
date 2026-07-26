/* Hook replacement 61/418
 * Selectors: SEL_measureHeight
 * Address: 0x16280; original size: 180 bytes
 * Status: ok; elapsed: 0.342s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_16280(long long a0, unsigned long a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((g_582f88 & 1) && (g_582f8b & 1) && 3 > sub_127040() - 2)
    {
        sub_12da78(a0);
        sub_129888(a0);
        g_57b658(a0, a1);
        return sub_129e14(a0);
    }
    sub_129b7c(a0);
    goto g_57b658;
}
