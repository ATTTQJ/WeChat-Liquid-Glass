/* Hook replacement 57/418
 * Selectors: SEL_becomeFirstResponder
 * Address: 0x15f24; original size: 220 bytes
 * Status: ok; elapsed: 0.465s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_15f24(long long a0, unsigned long a1)
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    long long count;  // x0
    unsigned long long v5;  // x21
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sub_17e00();
    v3 = g_57b638(a0, a1);
    if (((char)v2 & 1))
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
        count = _objc_msgSend(g_4c4078, SEL_class);
        if (_objc_msgSend(a0, SEL_isKindOfClass_, count))
        {
            v5 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
            if (v5)
            {
                sub_177f8(v5);
                sub_75cc(a0);
            }
        }
        else
        {
            v5 = 0;
        }
        _objc_release(v5);
        return v3;
    }
    else
    {
        return v3;
    }
}
