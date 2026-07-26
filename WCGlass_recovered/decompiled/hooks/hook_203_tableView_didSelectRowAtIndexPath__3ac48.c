/* Hook replacement 203/418
 * Selectors: SEL_tableView_didSelectRowAtIndexPath_
 * Address: 0x3ac48; original size: 420 bytes
 * Status: ok; elapsed: 0.448s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3ac48(long long a0, unsigned long a1, long long a2, long long a3)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x23
    unsigned long v22;  // x0
    long long count;  // x2
    unsigned long v24;  // x3
    long long count1;  // x0
    long long v26;  // x1
    unsigned long long v27;  // x25
    unsigned long long v13;  // x24
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x24
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = v11;
    v1 = v12;
    v2 = v13;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v8 = &v10;
    v9 = v19;
    _objc_retain(a2);
    _objc_retain(a3);
    if (!(g_57c0b8 & 1) && sub_344340())
    {
        v20 = sub_365c80(a0);
        if (v20 > _objc_msgSend(a3, SEL_section))
        {
            g_57c088(a0, a1, a2, a3);
        }
        else
        {
            v21 = _objc_retainAutoreleasedReturnValue(sub_3b2a4(a0));
            v22 = sub_3b690(_objc_msgSend(a3, SEL_section) - v20);
            if (!((char)(v22 >> 63) & 1))
            {
                count = _objc_msgSend(a3, SEL_row);
                v24 = v22;
                count1 = _objc_msgSend(g_4c41a0, SEL_indexPathForRow_inSection_, count, v24);
                v26 = _objc_retainAutoreleasedReturnValue(count1, SEL_indexPathForRow_inSection_, count, v24);
                v27 = _objc_retainAutoreleasedReturnValue(sub_36d858(v21, v26), v26);
                if (v27)
                {
                    g_57c088(a0, a1, a2, v27);
                    _objc_release(v27);
                    _objc_release(v26);
                    _objc_release(v21);
                }
                else
                {
                    _objc_release(v26);
                    goto LABEL_3ada4;
                }
            }
            else
            {
LABEL_3ada4:
                _objc_release(v21);
                goto LABEL_3adac;
            }
        }
    }
    else
    {
LABEL_3adac:
        g_57c088(a0, a1, a2, a3);
    }
    _objc_release(a3);
    _objc_release();
    return;
}
