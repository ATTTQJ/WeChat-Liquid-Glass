/* Hook replacement 56/418
 * Selectors: SEL_setFrame_
 * Address: 0x15ecc; original size: 88 bytes
 * Status: ok; elapsed: 0.834s
 */

long long sub_15ecc(long long a0, unsigned long a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((g_582f88 & 1) && (g_582f8b & 1))
        sub_12e314(a0);
    goto g_57b630;
}
