/* Hook replacement 47/418
 * Selectors: SEL_insertText_
 * Address: 0x14fac; original size: 720 bytes
 * Status: ok; elapsed: 0.699s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_14fac(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v13;  // x28
    unsigned long long v14;  // x27
    unsigned long long v23;  // x30
    unsigned int v24;  // x20
    long long count;  // x0
    unsigned int v26;  // x24
    long long v27;  // x21
    long long count1;  // x0
    long long v29;  // x0
    long long count2;  // x0
    unsigned int v31;  // x0
    unsigned long long v15;  // x26
    long long v33;  // x21
    long long v34;  // x21
    long long v35;  // x21
    unsigned int v37;  // x23
    long long v38;  // x23
    long long v39;  // x0
    unsigned int v40;  // x25
    long long v41;  // x24
    long long v42;  // x0
    unsigned long long v16;  // x25
    long long v43;  // x0
    long long v44;  // x0
    long long v45;  // x0
    long long v47;  // x24
    long long v48;  // x24
    long long v49;  // x24
    unsigned int v50;  // x0
    unsigned int v51;  // x0
    unsigned int v52;  // w8
    unsigned long long v17;  // x24
    unsigned int v53;  // w9
    unsigned long long v18;  // x23
    unsigned long long v19;  // x22
    unsigned long long v20;  // x21
    unsigned long long v21;  // x20
    unsigned long long v22;  // x19
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    char *v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    char v12;  // [bp+0x0]

    v0 = v13;
    v1 = v14;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = &v12;
    v11 = v23;
    _objc_retain(a2);
    if ((g_582f88 & 1) && (g_582f8b & 1))
    {
        v24 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v24)
        {
            count = _objc_msgSend(a0, SEL_text);
            v26 = _objc_retainAutoreleasedReturnValue(count, SEL_text);
            if (v26)
            {
                _objc_retain(v26);
                v27 = v26;
            }
            else
            {
                count1 = _objc_msgSend(a0, SEL_attributedText);
                v29 = _objc_retainAutoreleasedReturnValue(count1, SEL_attributedText);
                count2 = _objc_msgSend(v29, SEL_string);
                v31 = _objc_retainAutoreleasedReturnValue(count2, SEL_string);
                if (!v31)
                    v33 = " \t`";
                else
                    v33 = v31;
                v34 = v33;
                _objc_retain();
                _objc_release(v31);
                _objc_release(v29);
                v27 = v34;
            }
            v35 = v27;
            _objc_release(v26);
        }
        else
        {
            v35 = " \t`";
        }
        g_57b5e8(a0, a1, a2);
        if (2 >= sub_127040(_objc_retain(a0)) - 2)
            sub_129888(a0);
        _objc_release(a0);
        v37 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (v37 || (_objc_retain(v24), v37 = v24, v37))
        {
            v38 = v37;
            v39 = _objc_msgSend(a0, SEL_text);
            v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_text);
            if (v40)
            {
                _objc_retain(v40);
                v41 = v40;
            }
            else
            {
                v42 = _objc_msgSend(a0, SEL_attributedText);
                v43 = _objc_retainAutoreleasedReturnValue(v42, SEL_attributedText);
                v44 = _objc_msgSend(v43, SEL_string);
                v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_string);
                if (!v45)
                    v47 = " \t`";
                else
                    v47 = v45;
                v48 = v47;
                _objc_retain();
                _objc_release(v45);
                _objc_release(v43);
                v41 = v48;
            }
            v49 = v41;
            _objc_release(v40);
            sub_192a04(a0);
            v50 = _objc_msgSend(v35, SEL_length);
            v51 = _objc_msgSend(v49, SEL_length);
            if (v50)
                v52 = 0;
            else
                v52 = 1;
            if (!v51)
                v53 = 0;
            else
                v53 = 1;
            if (!(((char)v52 ^ (char)v53) & 1))
            {
                sub_177f8(v38);
                sub_135e60(v38);
            }
            _objc_release(v49);
            _objc_release(v38);
        }
        _objc_release(v35);
        _objc_release(v24);
    }
    else
    {
        g_57b5e8(a0, a1, a2);
    }
    _objc_release();
    return;
}
