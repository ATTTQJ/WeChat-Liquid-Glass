/* Recovered pseudocode
 * Objective-C: -[WCLGFuncCardDocPickerDelegate documentPicker:didPickDocumentsAtURLs:]
 * Address: 0x322208; original size: 1472 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.518s
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned long long sub_322208(long long a0, unsigned long a1, unsigned long a2, long long a3)
{
    long long v9;  // x22
    long long count;  // x0
    long long len;  // x23
    long long count1;  // x0
    long long v21;  // x24
    long long v22;  // x2
    long long count2;  // x0
    long long v24;  // x19
    unsigned long long v25;  // x0
    unsigned long long v26;  // x2
    long long v27;  // x0
    long long v28;  // x19
    unsigned long long v11;  // x20
    unsigned long long v29;  // w0
    long long v30;  // x0
    long long v31;  // x0
    long long len1;  // x21
    long long v33;  // x0
    long long v34;  // x0
    long long len2;  // x21
    long long v36;  // x0
    unsigned long long v37;  // x0
    long long v38;  // x0
    long long v12;  // x0
    struct_0 *v39;  // x0
    unsigned long long v40;  // x0
    long long v13;  // x0
    long long v14;  // x0
    long long v15;  // x23
    long long v16;  // x0
    long long v17;  // x2
    long long v18;  // x0
    unsigned long v0;  // [bp-0xb0]
    unsigned long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x7c]
    long long v4;  // [bp-0x78]
    long long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    char *v7;  // [bp-0x10]
    char v8;  // [bp+0x0]

    v7 = &v8;
    v9 = a0;
    v6 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_580d70)
    {
        g_548fc4 = g_548fba ^ 0x33;
        g_548fc5 = g_548fbb ^ 226;
        g_548fc6 = g_548fbc ^ 241;
        g_548fc7 = g_548fbd ^ 222;
        g_548fc8 = g_548fbe ^ 180;
        g_548fc9 = g_548fbf ^ 0x99;
        g_548fca = g_548fc0 ^ 194;
        g_548fcb = g_548fc1 ^ 174;
        g_548fcc = g_548fc2 ^ 244;
        g_548fcd = g_548fc3 ^ 67;
        g_548fad = g_548fa0 ^ 254;
        g_548fae = g_548fa1 ^ 152;
        g_548faf = g_548fa2 ^ 251;
        g_548fb0 = g_548fa3 ^ 228;
        g_548fb1 = g_548fa4 ^ 76;
        g_548fb2 = g_548fa5 ^ 83;
        g_548fb3 = g_548fa6 ^ 0x22;
        g_548fb4 = g_548fa7 ^ 22;
        g_548fb5 = g_548fa8 ^ 77;
        g_548fb6 = g_548fa9 ^ 245;
        g_548fb7 = g_548faa ^ 110;
        g_548fb8 = g_548fab ^ 58;
        g_548fb9 = g_548fac ^ 32;
    }
    /* unsupported instruction */
    g_580d70 = 1;
    count = _objc_msgSend(a3, SEL_firstObject);
    v11 = _objc_retainAutoreleasedReturnValue(count, SEL_firstObject);
    if (v11)
    {
        v4 = v9;
        v3 = (unsigned int)_objc_msgSend(v11, SEL_startAccessingSecurityScopedResource);
        v12 = _objc_msgSend(v11, SEL_lastPathComponent);
        v13 = _objc_retainAutoreleasedReturnValue(v12, SEL_lastPathComponent);
        if (_objc_msgSend(v13, SEL_length))
        {
            v14 = _objc_msgSend(v11, SEL_lastPathComponent);
            v15 = _objc_retainAutoreleasedReturnValue(v14, SEL_lastPathComponent);
        }
        else
        {
            v15 = " \t`";
        }
        v16 = _objc_retainAutoreleasedReturnValue(sub_3227c8(_objc_release(v13)));
        v5 = v15;
        v17 = v15;
        v18 = _objc_msgSend(v16, SEL_stringByAppendingPathComponent_, v17);
        len = _objc_retainAutoreleasedReturnValue(v18, SEL_stringByAppendingPathComponent_, v17);
        _objc_release(v16);
        count1 = _objc_msgSend(g_4c4108, SEL_defaultManager);
        v21 = _objc_retainAutoreleasedReturnValue(count1, SEL_defaultManager);
        _objc_msgSend(v21, SEL_removeItemAtPath_error_, len, 0);
        v22 = len;
        count2 = _objc_msgSend(g_4c42c0, SEL_fileURLWithPath_, v22);
        v24 = _objc_retainAutoreleasedReturnValue(count2, SEL_fileURLWithPath_, v22);
        v2 = 0;
        v25 = _objc_msgSend(v21, SEL_copyItemAtURL_toURL_error_, v11, v24, &v2);
        _objc_retain(v2);
        _objc_release(v24);
        if (!((char)v25 & 1))
        {
            v26 = v11;
            v27 = _objc_msgSend(g_4c4130, SEL_dataWithContentsOfURL_, v26);
            v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_dataWithContentsOfURL_, v26);
            if (!_objc_msgSend(v28, SEL_length))
                goto LABEL_3226dc;
            v29 = (unsigned int)_objc_msgSend(v28, SEL_writeToFile_atomically_, len, 1);
            _objc_release(v28);
            if (!v29)
                goto LABEL_3226e4;
        }
        v0 = *((long long *)&g_600200);
        v30 = _objc_msgSend(g_4c41d0, SEL_date);
        v1 = _objc_retainAutoreleasedReturnValue(v30, SEL_date);
        v31 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, &v1, &v0, 1);
        len1 = _objc_retainAutoreleasedReturnValue(v31, SEL_dictionaryWithObjects_forKeys_count_, &v1, &v0, 1);
        _objc_msgSend(v21, SEL_setAttributes_ofItemAtPath_error_, len1, len, 0);
        _objc_release(len1);
        _objc_release(v1);
        v33 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        v28 = _objc_retainAutoreleasedReturnValue(v33, SEL_sharedConfig);
        sub_2ea7d0(v28);
        v34 = _objc_msgSend(&g_548ff0, SEL_stringByAppendingPathComponent_, v5);
        len2 = _objc_retainAutoreleasedReturnValue(v34, SEL_stringByAppendingPathComponent_, v5);
        _objc_msgSend(v28, SEL_setObject_forKey_, len2, g_4a3e98);
        _objc_release(len2);
        _objc_msgSend(v28, SEL_setObject_forKey_, v5, g_4a3ea0);
        _objc_msgSend(v28, SEL_setInteger_forKey_, 2, g_4a3e80);
LABEL_3226dc:
        _objc_release(v28);
LABEL_3226e4:
        if (v3)
            _objc_msgSend(v11, SEL_stopAccessingSecurityScopedResource);
        _objc_release(v2);
        _objc_release(v21);
        _objc_release(len);
        _objc_release(v5);
        v9 = v4;
    }
    v36 = _objc_msgSend(v9, SEL_onChange);
    v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_onChange);
    _objc_release(v37);
    if (v37)
    {
        v38 = _objc_msgSend(v9, SEL_onChange);
        v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_onChange);
        v39->field_10(v39);
        _objc_release(v39);
    }
    _objc_msgSend(v9, SEL_setRetainSelf_, 0);
    v40 = _objc_release(v11);
    if (*((long long *)&g_600760) == v6)
        return v40;
    ___stack_chk_fail();
}
