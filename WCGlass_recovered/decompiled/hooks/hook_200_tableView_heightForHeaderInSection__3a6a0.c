/* Hook replacement 200/418
 * Selectors: SEL_tableView_heightForHeaderInSection_
 * Address: 0x3a6a0; original size: 228 bytes
 * Status: ok; elapsed: 0.326s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_3a6a0(long long a0, unsigned long a1, long long a2, long long a3)
{
    long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    if (!(g_57c0b8 & 1) && sub_344340())
    {
        v2 = sub_365c80(a0);
        if (v2 > a3)
        {
            g_57c070(a0, a1, a2, a3);
        }
        else if (sub_3445a0())
        {
            _WCLGHomeGroupStripHeaderHeight();
        }
        else if (sub_3446e4())
        {
            sub_3394f4();
        }
        else
        {
            _WCLGHomeGroupSectionHeaderHeightForSection(a3 - v2);
        }
    }
    else
    {
        g_57c070(a0, a1, a2, a3);
    }
    return _objc_release(a2);
}
