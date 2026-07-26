/* Hook replacement 197/418
 * Selectors: SEL_numberOfSectionsInTableView_
 * Address: 0x3a278; original size: 324 bytes
 * Status: ok; elapsed: 0.941s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_3a278(long long a0, unsigned long a1, long long a2)
{
    long long v2;  // x21
    long long v3;  // x21
    long long v4;  // x0
    long long v5;  // x22
    long long count;  // x0
    long long v7;  // x0
    long long count1;  // x0
    long long v9;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    if (g_57c0b8 == 1)
    {
        v2 = g_57c058(a0, a1, a2);
        _objc_release(a2);
        return v2;
    }
    g_57c0b8 = 1;
    v3 = g_57c058(a0, a1, a2);
    g_57c0b8 = 0;
    v4 = _objc_retainAutoreleasedReturnValue(sub_3b2a4(a0));
    v5 = sub_36c4f4(v4, v3);
    if (sub_344340(sub_365bf0(a0, v5), v5))
    {
        if (sub_3446e4())
        {
            v3 = v5 + 1;
        }
        else
        {
            count = _objc_msgSend(g_4c4198, SEL_sharedManager);
            v7 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedManager);
            count1 = _objc_msgSend(v7, SEL_displayGroups);
            v9 = _objc_retainAutoreleasedReturnValue(count1, SEL_displayGroups);
            v3 = _objc_msgSend(v9, SEL_count) + v5;
            _objc_release(v9);
            _objc_release(v7);
        }
    }
    _objc_release(v4);
    _objc_release(a2);
    return v3;
}
