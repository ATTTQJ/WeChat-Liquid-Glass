/* Hook replacement 88/418
 * Selectors: SEL_setPosition_
 * Address: 0x1e60c; original size: 144 bytes
 * Status: ok; elapsed: 0.37s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_1e60c(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long count;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = _objc_msgSend();
    v3 = g_57b878(a0, a1, a2);
    if (count == a2)
    {
        return v3;
    }
    else if (!(g_582f88 & 1))
    {
        return v3;
    }
    else if (!(g_583068 & 1))
    {
        return v3;
    }
}
