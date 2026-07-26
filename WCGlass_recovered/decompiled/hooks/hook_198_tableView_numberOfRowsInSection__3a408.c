/* Hook replacement 198/418
 * Selectors: SEL_tableView_numberOfRowsInSection_
 * Address: 0x3a408; original size: 260 bytes
 * Status: ok; elapsed: 0.355s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_3a408(long long a0, unsigned long a1, long long a2, long long a3)
{
    long long v2;  // x0
    unsigned long long v3;  // x0
    long long v4;  // x20
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    if (!(g_57c0b8 & 1) && sub_344340())
    {
        v2 = sub_365c80(a0);
        if (v2 > a3)
        {
            v3 = g_57c060(a0, a1, a2, a3);
        }
        else if (((char)sub_3334a0() & 1))
        {
            _objc_release(a2);
            return 0;
        }
        else
        {
            v4 = _objc_retainAutoreleasedReturnValue(sub_3b2a4(a0));
            if (!((char)(sub_3b690(a3 - v2) >> 63) & 1))
                v5 = sub_36b838(v4);
            else
                v5 = 0;
            _objc_release(v4);
            _objc_release(a2);
            return v5;
        }
    }
    else
    {
        v3 = g_57c060(a0, a1, a2, a3);
    }
    _objc_release(a2);
    return v3;
}
