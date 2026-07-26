/* Hook replacement 401/418
 * Selectors: SEL_OnMultiForwardMessage
 * Address: 0x800dc; original size: 500 bytes
 * Status: ok; elapsed: 0.468s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_800dc(long long a0, unsigned long a1)
{
    long long count;  // x0
    char v8;  // x0
    long long count1;  // x0
    unsigned long count2;  // x0
    char v11;  // x8
    long long t;  // x0
    char v13;  // x0
    char v14;  // x0
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    if ((g_582f88 & 1) && (g_582fd9 & 1))
    {
        if (_objc_msgSend(a0, SEL_respondsToSelector_, SEL_getSelectedMsgs))
        {
            count = _objc_msgSend(a0, SEL_getSelectedMsgs);
            v8 = _objc_retainAutoreleasedReturnValue(count, SEL_getSelectedMsgs);
        }
        else
        {
            v8 = 0;
        }
        count1 = _objc_msgSend(g_4c4098, SEL_class);
        if (_objc_msgSend(v8, SEL_isKindOfClass_, count1) && _objc_msgSend(v8, SEL_count))
        {
            count2 = _objc_msgSend(v8, SEL_copy);
            v11 = *((long long *)&g_57d1d8);
            *((unsigned long *)&g_57d1d8) = count2;
            _objc_release(v11);
            g_57d1f8 = g_57d1f8 + 1;
            t = _dispatch_time(0, 120000000000);
            v0 = &g_600748;
            v1 = 0xc0000000;
            v2 = 528524;
            v3 = &g_4a0d88;
            v4 = g_57d1f8;
            _dispatch_after(t, &g_600770, &v0);
        }
        else
        {
            v13 = *((long long *)&g_57d1d8);
            *((unsigned long long *)&g_57d1d8) = 0;
            _objc_release(v13);
            g_57d1f8 = g_57d1f8 + 1;
        }
        g_57d1e0(a0, a1);
        return _objc_release(v8);
    }
    v14 = *((long long *)&g_57d1d8);
    *((unsigned long long *)&g_57d1d8) = 0;
    _objc_release(v14);
    g_57d1f8 = g_57d1f8 + 1;
    goto g_57d1e0;
}
