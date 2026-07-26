/* Hook replacement 263/418
 * Selectors: SEL_setContentOffset_animated_
 * Address: 0x43300; original size: 132 bytes
 * Status: ok; elapsed: 0.265s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_43300(long long a0, unsigned long a1, unsigned int a2)
{
    char v0;  // [bp-0x32]
    char v1;  // [bp-0x31]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = 0;
    sub_4af74();
    v0 = 0;
    sub_4b340(a0, &v0);
    g_57c460(a0, a1, a2 & ~(v0));
    _objc_msgSend(a0, SEL_contentOffset);
    return sub_4b524(a0);
}
