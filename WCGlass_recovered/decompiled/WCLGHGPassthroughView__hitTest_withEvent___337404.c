/* Recovered pseudocode
 * Objective-C: -[WCLGHGPassthroughView hitTest:withEvent:]
 * Address: 0x337404; original size: 104 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.319s
 */

long long sub_337404(unsigned long a0)
{
    long long count;  // x0
    unsigned long v5;  // x0
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = a0;
    v1 = g_4c47e8;
    count = _objc_msgSendSuper2(&v0, SEL_hitTest_withEvent_);
    v5 = _objc_retainAutoreleasedReturnValue(count, SEL_hitTest_withEvent_);
    if (v5 != a0)
    {
        _objc_retainAutoreleaseReturnValue();
        _objc_release(v5);
        return v5;
    }
    _objc_retainAutoreleaseReturnValue();
    _objc_release(v5);
    return 0;
}
