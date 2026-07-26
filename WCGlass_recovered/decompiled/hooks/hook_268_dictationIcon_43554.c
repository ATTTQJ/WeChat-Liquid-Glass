/* Hook replacement 268/418
 * Selectors: SEL_dictationIcon
 * Address: 0x43554; original size: 144 bytes
 * Status: ok; elapsed: 0.269s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_43554(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x19
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    v8 = _objc_retainAutoreleasedReturnValue(g_57c488());
    if (v8)
        _objc_setAssociatedObject(a0, g_4ce728, v8, 0);
    if (sub_45738c())
    {
        sub_4bcf4(v8, 1);
    }
    else
    {
        sub_4bcf4(v8, 0);
        _objc_retain(v8);
    }
    _objc_release(v8);
}
