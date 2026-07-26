/* Authorization path recovery
 * Label: config_double_for_key
 * Address: 0x28c1a8; size: 116
 * Status: ok; elapsed: 0.281s
 */

long long sub_28c1a8(void)
{
    long long count;  // x0
    long long v3;  // x19
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = _objc_msgSend();
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_cachedObjectForKey_);
    if (_objc_msgSend(v3, SEL_respondsToSelector_, SEL_doubleValue))
        _objc_msgSend(v3, SEL_doubleValue);
    return _objc_release(v3);
}
