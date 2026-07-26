/* Hook replacement 3/418
 * Selectors: SEL_boolForKey_
 * Address: 0x55c0; original size: 152 bytes
 * Status: ok; elapsed: 0.27s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_55c0(unsigned long a0, unsigned long a1, long long a2)
{
    long long v2;  // x30
    long long v3;  // x20
    unsigned long long count;  // x0
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    v3 = _objc_retainAutoreleasedReturnValue(sub_5730(a2, v2), v2);
    if (!v3)
    {
        v5 = g_57b260(a0, a1, a2);
        _objc_release(v3);
        _objc_release(a2);
        return v5;
    }
    count = _objc_msgSend(v3, SEL_boolValue);
    _objc_release(v3);
    _objc_release(a2);
    return count;
}
