/* Hook replacement 64/418
 * Selectors: SEL_sendAction_to_forEvent_
 * Address: 0x16408; original size: 140 bytes
 * Status: ok; elapsed: 0.343s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_16408(long long a0)
{
    char v2;  // x20
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57b670();
    if (!(g_582f88 & 1))
    {
        return;
    }
    else if ((g_582f8b & 1))
    {
        v2 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v2)
        {
            sub_17264(v2);
            sub_177f8(v2);
            sub_18a44(a0, v2);
        }
    }
    else
    {
        return;
    }
}
