/* Hook replacement 157/418
 * Selectors: SEL_onShowAttachViewWithPageIndex_items_
 * Address: 0x291d0; original size: 140 bytes
 * Status: ok; elapsed: 0.242s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_291d0(long long a0, unsigned long a1, long long a2, long long a3)
{
    char v0;  // [bp-0x31]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    _objc_retain(a3);
    v0 = 1;
    sub_1f9180(a0, a2, a3, &v0);
    if (v0 == 1)
        g_57bd60(a0, a1, a2, a3);
    return _objc_release(a3);
}
