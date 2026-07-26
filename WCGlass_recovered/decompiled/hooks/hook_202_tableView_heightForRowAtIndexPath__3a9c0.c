/* Hook replacement 202/418
 * Selectors: SEL_tableView_heightForRowAtIndexPath_
 * Address: 0x3a9c0; original size: 556 bytes
 * Status: ok; elapsed: 0.555s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_3a9c0(long long a0, unsigned long a1, long long a2, long long a3)
{
    long long v2;  // x24
    long long v3;  // x23
    unsigned long v4;  // x0
    long long count;  // x2
    unsigned long v6;  // x3
    long long count1;  // x0
    long long v8;  // x1
    unsigned long long v9;  // x25
    unsigned long v10;  // d0
    unsigned long v11;  // 4130
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    _objc_retain(a2);
    _objc_retain(a3);
    if ((char)g_57c0b8 == 1)
    {
        g_57c080(a0, a1, a2, a3);
        goto LABEL_3aa28;
    }
    if (sub_344340(sub_378900()))
    {
        v2 = sub_365c80(a0);
        if (v2 > _objc_msgSend(a3, SEL_section))
        {
            g_57c080(a0, a1, a2, a3);
            goto LABEL_3aa28;
        }
        else
        {
            v3 = _objc_retainAutoreleasedReturnValue(sub_3b2a4(a0));
            v4 = sub_3b690(_objc_msgSend(a3, SEL_section) - v2);
            if (!((char)(v4 >> 63) & 1))
            {
                count = _objc_msgSend(a3, SEL_row);
                v6 = v4;
                count1 = _objc_msgSend(g_4c41a0, SEL_indexPathForRow_inSection_, count, v6);
                v8 = _objc_retainAutoreleasedReturnValue(count1, SEL_indexPathForRow_inSection_, count, v6);
                v9 = _objc_retainAutoreleasedReturnValue(sub_36d858(v3, v8), v8);
                if (v9)
                {
                    g_57c080(a0, a1, a2, v9);
                    _objc_release(v9);
                    _objc_release(v8);
                    goto LABEL_3abdc;
                }
                else
                {
                    _objc_release(v8);
                }
            }
            g_57c080(a0, a1, a2, a3);
LABEL_3abdc:
            _objc_release(v3);
        }
    }
    else
    {
        v11 = arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v10, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v10, 0.0) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v10, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v10, 0.0) & 1)) & ((unsigned long long)(char)(CmpF(v10, 0.0)) >> 5 & 3 | (unsigned long long)(CmpF(v10, 0.0) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
        if (!((char)v11))
        {
            g_57c080(a0, a1, a2, a3);
        }
        else
        {
            g_57c080(a0, a1, a2, a3);
LABEL_3aa28:
        }
    }
    _objc_release(a3);
    return _objc_release(a2);
}
