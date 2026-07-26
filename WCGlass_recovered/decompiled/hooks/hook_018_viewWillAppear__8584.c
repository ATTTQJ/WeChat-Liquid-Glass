/* Hook replacement 18/418
 * Selectors: SEL_viewWillAppear_
 * Address: 0x8584; original size: 264 bytes
 * Status: ok; elapsed: 0.459s
 */

long long sub_8584(long long a0, unsigned long a1, unsigned long a2)
{
    long long v2;  // x0
    long long v3;  // x0
    long long count;  // x0
    long long v5;  // x2
    long long count1;  // x0
    long long v7;  // x22
    long long count2;  // x0
    long long v9;  // x22
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = _objc_getAssociatedObject();
    v3 = _objc_retainAutoreleasedReturnValue(v2, g_4c7068);
    count = _objc_msgSend(v3, SEL_integerValue);
    _objc_release(v3);
    v5 = count + 1;
    count1 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v5);
    v7 = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithInteger_, v5);
    _objc_setAssociatedObject(a0, g_4c7068, v7, 1);
    _objc_release(v7);
    count2 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
    v9 = _objc_retainAutoreleasedReturnValue(count2, SEL_numberWithBool_, 0);
    _objc_setAssociatedObject(a0, g_4c7060, v9, 1);
    _objc_release(v9);
    goto g_57b348;
}
