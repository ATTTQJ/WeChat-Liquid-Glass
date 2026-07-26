/* Hook replacement 87/418
 * Selectors: SEL_edgeInsets
 * Address: 0x1e3dc; original size: 448 bytes
 * Status: ok; elapsed: 0.76s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_1e3dc(long long a0)
{
    long long v6;  // x19
    long long v7;  // x20
    long long count;  // x0
    long long v9;  // x22
    unsigned long long v10;  // x0
    unsigned long long v11;  // x0
    long long v12;  // x0
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    v6 = a0;
    g_57b870();
    _objc_retain(v6);
    if (v6 && (g_582f88 & 1) && (g_583068 & 1))
    {
        v7 = _objc_retainAutoreleasedReturnValue(sub_18e98());
        if (_objc_msgSend(v7, SEL_length))
        {
            count = _objc_msgSend(v6, SEL_bubbleName);
            v9 = _objc_retainAutoreleasedReturnValue(count, SEL_bubbleName);
            if (_objc_msgSend(v9, SEL_length))
            {
                v10 = _objc_retainAutoreleasedReturnValue(sub_256b8(v7, v9), v9);
                _objc_release(v10);
                _objc_release(v9);
                _objc_release(v7);
                v11 = _objc_release(v6);
                if (!v10)
                    return v11;
                v7 = _objc_retainAutoreleasedReturnValue(sub_18e98());
                v12 = _objc_retain(_objc_retain(v7));
                if (_objc_msgSend(v12, SEL_length))
                {
                    v2 = 0;
                    v3 = 0;
                    v0 = 0;
                    v1 = 0;
                }
                _objc_release(v7);
                v6 = v7;
            }
            else
            {
                _objc_release(v9);
            }
        }
        _objc_release(v7);
        return _objc_release(v6);
    }
    return _objc_release(v6);
}
