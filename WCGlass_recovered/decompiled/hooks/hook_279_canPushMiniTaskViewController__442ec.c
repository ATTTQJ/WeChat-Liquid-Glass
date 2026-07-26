/* Hook replacement 279/418
 * Selectors: SEL_canPushMiniTaskViewController_
 * Address: 0x442ec; original size: 116 bytes
 * Status: ok; elapsed: 0.238s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_442ec(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    if (!(g_582f88 & 1))
    {
        v2 = g_57c4e0(a0, a1, a2);
        _objc_release(a2);
        return v2;
    }
    _objc_release(a2);
    return 0;
}
