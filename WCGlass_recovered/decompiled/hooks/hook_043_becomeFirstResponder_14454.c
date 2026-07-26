/* Hook replacement 43/418
 * Selectors: SEL_becomeFirstResponder
 * Address: 0x14454; original size: 164 bytes
 * Status: ok; elapsed: 0.294s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_14454(long long a0, unsigned long a1)
{
    unsigned long long count;  // x0
    unsigned long long v3;  // x0
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = _objc_msgSend();
    v3 = g_57b5c8(a0, a1);
    if (((char)count & 1))
    {
        return v3;
    }
    else if (!(unsigned int)v3)
    {
        return v3;
    }
    else if (!(g_582f88 & 1))
    {
        return v3;
    }
    else if ((g_582f8b & 1))
    {
        v4 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v4)
            sub_75cc(a0);
        _objc_release(v4);
        return v3;
    }
    else
    {
        return v3;
    }
}
