/* Hook replacement 201/418
 * Selectors: SEL_tableView_cellForRowAtIndexPath_
 * Address: 0x3a79c; original size: 460 bytes
 * Status: ok; elapsed: 0.504s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3a79c(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x1
    long long v22;  // x2
    long long v23;  // x3
    long long v25;  // x23
    unsigned long v26;  // x0
    long long count;  // x2
    unsigned long v28;  // x3
    long long count1;  // x0
    long long v30;  // x1
    unsigned long long v13;  // x24
    unsigned long long v31;  // x25
    long long v32;  // x1
    long long v33;  // x2
    unsigned long long v34;  // x3
    long long v36;  // x1
    long long v37;  // x2
    long long v38;  // x3
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
            v21 = a1;
            v22 = a2;
            v23 = a3;
            _objc_retainAutoreleasedReturnValue(g_57c078(a0, v21, v22, v23), v21, v22, v23);
            goto LABEL_3a938;
        }
        v25 = _objc_retainAutoreleasedReturnValue(sub_3b2a4(a0));
        v26 = sub_3b690(_objc_msgSend(a3, SEL_section) - v20);
        if (!((char)(v26 >> 63) & 1))
        {
            count = _objc_msgSend(a3, SEL_row);
            v28 = v26;
            count1 = _objc_msgSend(g_4c41a0, SEL_indexPathForRow_inSection_, count, v28);
            v30 = _objc_retainAutoreleasedReturnValue(count1, SEL_indexPathForRow_inSection_, count, v28);
            v31 = _objc_retainAutoreleasedReturnValue(sub_36d858(v25, v30), v30);
            if (v31)
            {
                v32 = a1;
                v33 = a2;
                v34 = v31;
                _objc_retainAutoreleasedReturnValue(g_57c078(a0, v32, v33, v34), v32, v33, v34);
                _objc_release(v34);
                _objc_release(v30);
                _objc_release(v25);
                goto LABEL_3a93c;
            }
            else
            {
                _objc_release(v30);
            }
        }
        _objc_release(v25);
    }
    v36 = a1;
    v37 = a2;
    v38 = a3;
    _objc_retainAutoreleasedReturnValue(g_57c078(a0, v36, v37, v38), v36, v37, v38);
LABEL_3a938:
LABEL_3a93c:
    _objc_release(a3);
    _objc_release(a2);
}
