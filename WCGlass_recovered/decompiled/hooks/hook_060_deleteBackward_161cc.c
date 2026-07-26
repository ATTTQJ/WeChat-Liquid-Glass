/* Hook replacement 60/418
 * Selectors: SEL_deleteBackward
 * Address: 0x161cc; original size: 160 bytes
 * Status: ok; elapsed: 0.366s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_161cc(long long a0, unsigned long a1)
{
    long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((g_582f88 & 1) && (g_582f8b & 1))
    {
        v2 = _objc_retainAutoreleasedReturnValue(sub_17f9c(a0));
        g_57b650(a0, a1);
        sub_18900(a0, v2);
    }
    goto g_57b650;
}
