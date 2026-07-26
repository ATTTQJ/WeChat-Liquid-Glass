/* Hook replacement 161/418
 * Selectors: SEL_contextMenuInteraction_willEndForConfiguration_animator_
 * Address: 0x29478; original size: 320 bytes
 * Status: ok; elapsed: 0.363s
 */

typedef struct struct_1 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_29478(long long a0, unsigned long a1, unsigned long a2, unsigned long a3, long long a4)
{
    long long v8;  // x20
    struct_1 *v9;  // x21
    unsigned long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    _objc_retain(a4);
    g_57bd80(a0, a1, a2, a3, a4);
    v8 = _objc_retainAutoreleasedReturnValue(sub_12c324(a0));
    if (v8)
    {
        _objc_initWeak(&v5, v8);
        v0 = &g_600748;
        v1 = 0xc2000000;
        v2 = 169688;
        v3 = &g_4a0920;
        _objc_copyWeak(&v4, &v5);
        v9 = _objc_retainBlock(&v0);
        if (a4)
        {
            do
            { } while (0);
            _objc_msgSend(a4);
        }
        else
        {
            v9->field_10(v9);
        }
        _objc_release(v9);
        _objc_destroyWeak(&v4);
        _objc_destroyWeak(&v5);
    }
    _objc_release(v8);
    return _objc_release(a4);
}
