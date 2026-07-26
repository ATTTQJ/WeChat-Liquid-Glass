/* Hook replacement 50/418
 * Selectors: SEL_unmarkText
 * Address: 0x156c0; original size: 212 bytes
 * Status: ok; elapsed: 0.287s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_156c0(long long a0, unsigned long a1)
{
    char v2;  // x19
    char v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((g_582f88 & 1) && (g_582f8b & 1))
    {
        v2 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        g_57b600(a0, a1);
        v3 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v3 || (_objc_retain(v2), v3 = v2, v2))
        {
            sub_1920ec(a0);
            sub_177f8(v3);
        }
        _objc_release(v3);
        return _objc_release();
    }
    goto g_57b600;
}
