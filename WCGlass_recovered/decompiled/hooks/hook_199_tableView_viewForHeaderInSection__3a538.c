/* Hook replacement 199/418
 * Selectors: SEL_tableView_viewForHeaderInSection_
 * Address: 0x3a538; original size: 316 bytes
 * Status: ok; elapsed: 0.403s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3a538(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long v19;  // x3
    long long v21;  // x21
    long long v22;  // x1
    long long v25;  // x1
    long long v26;  // x2
    long long v28;  // x1
    unsigned long long v11;  // x22
    long long v29;  // x2
    long long v30;  // x3
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    long long v17;  // x1
    long long v18;  // x2
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
    _objc_retain(a2);
    if (!(g_57c0b8 & 1) && sub_344340())
    {
        v16 = sub_365c80(a0);
        if (v16 > a3)
        {
            v17 = a1;
            v18 = a2;
            v19 = a3;
            _objc_retainAutoreleasedReturnValue(g_57c068(a0, v17, v18, v19), v17, v18, v19);
LABEL_3a5d4:
        }
        else
        {
            v21 = _objc_retainAutoreleasedReturnValue(sub_36da3c(a0));
            if (sub_3445a0(v21))
            {
                v22 = v21;
                _objc_retainAutoreleasedReturnValue(_WCLGHomeGroupMakeStripHeader(a2, v22), v22);
            }
            else if (sub_3446e4())
            {
                _objc_retainAutoreleasedReturnValue(sub_33746c(a2, a0), a0);
            }
            else
            {
                v25 = a3 - v16;
                v26 = v21;
                _objc_retainAutoreleasedReturnValue(_WCLGHomeGroupMakeSectionHeader(a2, v25, v26), v25, v26);
            }
            _objc_release(v21);
        }
    }
    else
    {
        v28 = a1;
        v29 = a2;
        v30 = a3;
        _objc_retainAutoreleasedReturnValue(g_57c068(a0, v28, v29, v30), v28, v29, v30);
        goto LABEL_3a5d4;
    }
    _objc_release(a2);
}
