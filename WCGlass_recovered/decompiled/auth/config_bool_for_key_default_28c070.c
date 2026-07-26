/* Authorization path recovery
 * Label: config_bool_for_key_default
 * Address: 0x28c070; size: 180
 * Status: ok; elapsed: 0.38s
 */

unsigned long long sub_28c070(long long a0, unsigned long a1, long long a2, unsigned long long count)
{
    long long count1;  // x0
    long long v3;  // x21
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    if ((g_5830b8 & 1) && ((char)sub_28ba1c(a2) & 1))
    {
        _objc_release(a2);
        return 0;
    }
    count1 = _objc_msgSend(a0, SEL_cachedObjectForKey_, a2);
    v3 = _objc_retainAutoreleasedReturnValue(count1, SEL_cachedObjectForKey_, a2);
    if (_objc_msgSend(v3, SEL_respondsToSelector_, SEL_boolValue))
        count = _objc_msgSend(v3, SEL_boolValue);
    _objc_release(v3);
    _objc_release(a2);
    return count;
}
