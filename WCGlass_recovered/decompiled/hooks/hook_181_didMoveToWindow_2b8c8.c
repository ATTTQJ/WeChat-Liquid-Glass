/* Hook replacement 181/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x2b8c8; original size: 76 bytes
 * Status: ok; elapsed: 0.218s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_2b8c8(long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57be58();
    sub_2f5b4(a0);
    v2 = sub_384c0(a0);
    if (((char)v2 & 1))
        return v2;
}
