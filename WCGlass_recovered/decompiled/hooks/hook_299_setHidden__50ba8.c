/* Hook replacement 299/418
 * Selectors: SEL_setHidden_
 * Address: 0x50ba8; original size: 188 bytes
 * Status: ok; elapsed: 0.291s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_50ba8(long long a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    char v12;  // w22
    char v13;  // w0
    long long count;  // x0
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = &v6;
    v5 = v11;
    _objc_retain();
    if ((g_57c769 & 1))
    {
        v12 = 0;
        v13 = 0;
    }
    else
    {
        count = _objc_msgSend(g_4c4078, SEL_class);
        v13 = _objc_msgSend(a0, SEL_isKindOfClass_, count);
        if (v13 && !((v13 = (char)(unsigned int)(unsigned long long)sub_54048(a0), !v13)))
        {
            v13 = sub_54398(a0);
            v12 = 1;
        }
        else
        {
            v12 = 0;
        }
    }
    g_57c740(a0, a1, v13 | a2);
    if (v12)
        sub_53860(a0);
}
