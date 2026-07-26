/* Hook replacement 151/418
 * Selectors: SEL_setHighlightedImage_
 * Address: 0x1f8f8; original size: 308 bytes
 * Status: ok; elapsed: 0.375s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1f8f8(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    unsigned long long v19;  // w23
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x19
    unsigned long long v17;  // w8
    unsigned long long v18;  // x22
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = v9;
    v1 = v10;
    v2 = v11;
    v3 = v12;
    v4 = v13;
    v5 = v14;
    v6 = &v8;
    v7 = v15;
    v16 = a2;
    _objc_retain(a2);
    if ((g_582f88 & 1))
    {
        if ((g_582fbe & 1))
        {
            if (sub_d6040(g_4a1808) != 1194676824)
                v17 = 0;
            else
                v17 = 1;
        }
        else
        {
            v17 = 0;
        }
        v18 = g_582fba | v17;
LABEL_1f9ac:
        if ((g_582f88 & 1) && sub_43d704(a0))
        {
            _objc_release(v16);
            v16 = 0;
            v19 = 1;
        }
        else
        {
            v19 = 0;
        }
        g_57ba70(a0, a1, v16);
        if (v19)
        {
            sub_43e728(a0);
        }
        else if (((char)v18 & 1) && sub_19639c(a0))
        {
            sub_1964f0(a0);
        }
    }
    else
    {
        v18 = 0;
        if (0 || (g_582f88 & 1))
            goto LABEL_1f9ac;
        g_57ba70(a0, a1, v16);
    }
    _objc_release();
    return;
}
