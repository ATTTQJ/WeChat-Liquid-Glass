/* Authorization path recovery
 * Label: settings_and_local_identity
 * Address: 0xb8dbc; size: 30052
 * Status: ok; elapsed: 29.078s
 */

void sub_b8dbc(unsigned int a0)
{
    unsigned int v119;  // w8
    int <0xb8dbc[is_2]|Stack bp-0x740, 1 B>;  // [bp-0x740]
    unsigned int *v9;  // [bp-0x3c8]
    int v10;  // [bp-0x3bc], Other Possible Types: unsigned int
    unsigned int v115;  // [bp-0xa4]
    unsigned long v116;  // [bp-0xa0]
    char *v117;  // [bp-0x10]
    char v118;  // [bp+0x0]

    v117 = &v118;
    /* unsupported instruction */ = (int)(&<0xb8dbc[is_2]|Stack bp-0x740, 1 B> + 0x66);
    v116 = *((long long *)&g_600760);
    v119 = __ROL__((2234887156 + g_4ea494 * g_4ea490) * 2652095897, 10) & 0x3ff;
    v115 = ((__ROL__(v119 * 428934927, 32) + (v119 - __ROL__(v119 * 428934927, 32) >> 1)) * 2 | __ROL__(v119 * 428934927, 32) + (v119 - __ROL__(v119 * 428934927, 32) >> 1) >> 31) & 1;
    v9 = &v10;
    v10 = 1738490351;
}
