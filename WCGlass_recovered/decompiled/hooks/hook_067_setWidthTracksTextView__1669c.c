/* Hook replacement 67/418
 * Selectors: SEL_setWidthTracksTextView_
 * Address: 0x1669c; original size: 144 bytes
 * Status: ok; elapsed: 0.364s
 */

long long sub_1669c(long long a0, unsigned long a1, unsigned int a2)
{
    unsigned long v2;  // d0
    unsigned long v3;  // 4126
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (a2 && (g_582f88 & 1) && (g_582f8b & 1) && 2 >= sub_127040() - 2)
    {
        sub_128fb0(a0);
        v3 = arm64g_calculate_condition(176, (((((unsigned long long)(char)(CmpF(v2, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v2, 0x4044000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v2, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v2, 0x4044000000000000) & 1)) & ((unsigned long long)(char)(CmpF(v2, 0x4044000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v2, 0x4044000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
    }
    goto g_57b688;
}
