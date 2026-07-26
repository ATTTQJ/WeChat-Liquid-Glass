/* Authorization path recovery
 * Label: config_has_value_for_key
 * Address: 0x28d004; size: 60
 * Status: ok; elapsed: 0.905s
 */

long long sub_28d004(void)
{
    long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = _objc_msgSend();
    if (_objc_retainAutoreleasedReturnValue(count, SEL_cachedObjectForKey_))
    {
        _objc_release();
        return 1;
    }
    _objc_release();
    return 0;
}
