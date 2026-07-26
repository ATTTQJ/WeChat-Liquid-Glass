/* Hook replacement 21/418
 * Selectors: SEL_tableView_heightForRowAtIndexPath_
 * Address: 0xb460; original size: 460 bytes
 * Status: ok; elapsed: 0.386s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_b460(long long a0, unsigned long a1, long long a2, long long a3)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    _objc_retain(a3);
    if ((g_523262 & 1) && (g_582f88 & 1) && (0 < *((long long *)&g_583088) || 0 < *((long long *)&g_583090) || 0 < *((long long *)&g_583098) || *((long long *)&g_5830a0) >= 1))
        g_4c72e0 = sub_ec8c(a0);
    if ((g_582f88 & 1) && a3 && (g_583068 & 1))
    {
        if (sub_ec8c(a0))
        {
            _objc_msgSend(a3, SEL_section);
            sub_ef5c(a0, _objc_msgSend(a3, SEL_section), 0);
        }
        else
        {
            _objc_msgSend(a3, SEL_section);
            sub_f73c(a0, _objc_msgSend(a3, SEL_section), 0);
        }
        g_57b3a0(a0, a1, a2, a3);
    }
    else
    {
        g_57b3a0(a0, a1, a2, a3);
    }
    _objc_release(a3);
    return _objc_release(a2);
}
