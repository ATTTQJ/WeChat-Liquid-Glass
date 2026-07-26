/* Hook replacement 15/418
 * Selectors: SEL_imageInPath_
 * Address: 0x6c74; original size: 1728 bytes
 * Status: ok; elapsed: 1.265s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_6c74(unsigned long a0, long long a1, unsigned long long a2)
{
    unsigned long long v13;  // x28
    unsigned long long v14;  // x27
    unsigned long long v23;  // x30
    long long v24;  // x0
    long long v25;  // x0
    unsigned long long v26;  // x20
    long long v27;  // x24
    long long v28;  // x25
    unsigned long long v29;  // w0
    long long count;  // x0
    long long v31;  // x24
    unsigned long long v32;  // x0
    unsigned long long v15;  // x26
    unsigned long long v33;  // x2
    unsigned long long v34;  // x21
    unsigned long v35;  // x23
    long long v36;  // x0
    long long v37;  // x22
    long long count1;  // x0
    long long v39;  // x0
    long long count2;  // x24
    long long v41;  // x0
    long long v42;  // x0
    unsigned long long v16;  // x25
    long long v43;  // x0
    long long len;  // x25
    unsigned long long v17;  // x24
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
    /* unsupported instruction */
    if (!g_57b324)
    {
        g_4c6fc0 = g_4c6fa0 ^ 13;
        g_4c6fc1 = g_4c6fa1 ^ 124;
        g_4c6fc2 = g_4c6fa2 ^ 243;
        g_4c6fc3 = g_4c6fa3 ^ 100;
        g_4c6fc4 = g_4c6fa4 ^ 178;
        g_4c6fc5 = g_4c6fa5 ^ 190;
        g_4c6fc6 = g_4c6fa6 ^ 235;
        g_4c6fc7 = g_4c6fa7 ^ 200;
        g_4c6fc8 = g_4c6fa8 ^ 91;
        g_4c6fc9 = g_4c6fa9 ^ 197;
        g_4c6fca = g_4c6faa ^ 29;
        g_4c6fcb = g_4c6fab ^ 19;
        g_4c6fcc = g_4c6fac ^ 164;
        g_4c6fcd = g_4c6fad ^ 173;
        g_4c6fce = g_4c6fae ^ 37;
        g_4c6fcf = g_4c6faf ^ 18;
        g_4c6fd0 = g_4c6fb0 ^ 198;
        g_4c6fd1 = g_4c6fb1 ^ 81;
        g_4c6fd2 = g_4c6fb2 ^ 175;
        g_4c6fd3 = g_4c6fb3 ^ 0x66;
        g_4c6fd4 = g_4c6fb4 ^ 11;
        g_4c6fd5 = g_4c6fb5 ^ 0x22;
        g_4c6fd6 = g_4c6fb6 ^ 138;
        g_4c6fd7 = g_4c6fb7 ^ 22;
        g_4c6f80 = g_4c6f60 ^ 45;
        g_4c6f81 = g_4c6f61 ^ 6;
        g_4c6f82 = g_4c6f62 ^ 18;
        g_4c6f83 = g_4c6f63 ^ 226;
        g_4c6f84 = g_4c6f64 ^ 132;
        g_4c6f85 = g_4c6f65 ^ 0xcc;
        g_4c6f86 = g_4c6f66 ^ 0x22;
        g_4c6f87 = g_4c6f67 ^ 32;
        g_4c6f88 = g_4c6f68 ^ 225;
        g_4c6f89 = g_4c6f69 ^ 84;
        g_4c6f8a = g_4c6f6a ^ 202;
        g_4c6f8b = g_4c6f6b ^ 139;
        g_4c6f8c = g_4c6f6c ^ 100;
        g_4c6f8d = g_4c6f6d ^ 214;
        g_4c6f8e = g_4c6f6e ^ 0x22;
        g_4c6f8f = g_4c6f6f ^ 146;
        g_4c6f90 = g_4c6f70 ^ 175;
        g_4c6f91 = g_4c6f71 ^ 0x77;
        g_4c6f92 = g_4c6f72 ^ 33;
        g_4c6f93 = g_4c6f73 ^ 93;
        g_4c6f94 = g_4c6f74 ^ 54;
        g_4c6f95 = g_4c6f75 ^ 30;
        g_4c6f96 = g_4c6f76 ^ 31;
        g_4c6f97 = g_4c6f77 ^ 29;
        g_4c6f98 = g_4c6f78 ^ 36;
    }
    /* unsupported instruction */
    g_57b324 = 1;
    v24 = _objc_retain(_objc_retain(a2));
    if (_objc_msgSend(v24, SEL_length))
    {
        v25 = _objc_retain(a2);
        v26 = a2;
        if (_objc_msgSend(v25, SEL_length))
        {
            v27 = _objc_retainAutoreleasedReturnValue(sub_23ced8(0));
            v28 = _objc_retainAutoreleasedReturnValue(sub_23ced8(1));
            if (_objc_msgSend(v27, SEL_length) && _objc_msgSend(v26, SEL_isEqualToString_, v27))
            {
                _objc_release(v28);
                _objc_release(v27);
                _objc_release(v26);
                goto LABEL_708c;
            }
            if (_objc_msgSend(v28, SEL_length))
            {
                v29 = (unsigned int)_objc_msgSend(v26, SEL_isEqualToString_, v28);
                _objc_release(v28);
                _objc_release(v27);
                _objc_release(v26);
                if (!v29)
                    goto LABEL_70b0;
LABEL_708c:
                _objc_retain(v26);
                goto LABEL_7140;
            }
            else
            {
                _objc_release(v28);
                _objc_release(v27);
            }
        }
        _objc_release(v26);
LABEL_70b0:
        count = _objc_msgSend(v26, SEL_lastPathComponent);
        v31 = _objc_retainAutoreleasedReturnValue(count, SEL_lastPathComponent);
        if (_objc_msgSend(v31, SEL_isEqualToString_, &g_4c7040) && ((char)sub_23c668(1) & 1))
        {
            v32 = 1;
            goto LABEL_7120;
        }
        else if (_objc_msgSend(v31, SEL_isEqualToString_, &g_4c7000) && sub_23c668(0))
        {
            v32 = 0;
LABEL_7120:
            v26 = _objc_retainAutoreleasedReturnValue(sub_23ced8(v32));
        }
        else
        {
            v26 = 0;
        }
        _objc_release(v31);
    }
    else
    {
        v26 = 0;
    }
LABEL_7140:
    _objc_release(a2);
    if (!v26)
        v33 = a2;
    else
        v33 = v26;
    v34 = _objc_retainAutoreleasedReturnValue(g_57b2e8(), a1, v33);
    if (v34 || !_objc_msgSend(v26, SEL_length))
    {
        _objc_retain(v34);
    }
    else
    {
        if (*((long long *)__tlv_bootstrap(&g_57b210)))
        {
            v35 = *((char *)__tlv_bootstrap(&g_57b228));
        }
        else
        {
            v36 = _objc_loadWeakRetained(&g_57b290);
            v35 = sub_23d0f4(v36);
            _objc_release(v36);
        }
        v37 = _objc_retainAutoreleasedReturnValue(sub_23cf4c((unsigned int)v35 & 1));
        count1 = _objc_msgSend(g_4c4080, SEL_class);
        if (((char)_objc_msgSend(v37, SEL_isKindOfClass_, count1) & 1))
        {
            v39 = _objc_alloc(g_4c4088);
            count2 = _objc_msgSend(v39, SEL_initWithImage_, v37);
            _objc_msgSend(count2, SEL_setContentMode_, 2);
            _objc_msgSend(count2, SEL_setClipsToBounds_, 1);
            _objc_msgSend(count2, SEL_setUserInteractionEnabled_, 0);
            _objc_msgSend(count2, SEL_setAutoresizingMask_, 18);
            if (((char)v35 & 1))
            {
                v41 = _objc_msgSend(g_4c4090, SEL_blackColor);
                v42 = _objc_retainAutoreleasedReturnValue(v41, SEL_blackColor);
            }
            else
            {
                v43 = _objc_msgSend(g_4c4090, SEL_whiteColor);
                v42 = _objc_retainAutoreleasedReturnValue(v43, SEL_whiteColor);
            }
            len = v42;
            _objc_msgSend(count2, SEL_setBackgroundColor_, len);
            _objc_release(len);
        }
        _objc_release(v37);
    }
    _objc_release(v34);
    _objc_release(v26);
    _objc_release(a2);
}
