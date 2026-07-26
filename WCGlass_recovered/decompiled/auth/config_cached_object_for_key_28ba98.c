/* Authorization path recovery
 * Label: config_cached_object_for_key
 * Address: 0x28ba98; size: 516
 * Status: ok; elapsed: 0.584s
 */

typedef struct struct_0 {
    char padding_0[8];
    long long field_8;
} struct_0;

void sub_28ba98(struct_0 *a0, unsigned long a1, long long a2)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long count;  // x0
    long long v22;  // x20
    long long count1;  // x0
    long long v24;  // x0
    long long count2;  // x0
    long long v26;  // x0
    long long v27;  // x2
    long long v28;  // x0
    long long len;  // x23
    long long v30;  // x2
    unsigned long long v13;  // x24
    long long v31;  // x0
    long long v32;  // x0
    long long v33;  // x0
    long long v34;  // x0
    long long len1;  // x23
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x2
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
    if (_objc_msgSend(a2, SEL_length))
    {
        _os_unfair_lock_lock(&a0[1].field_8);
        v20 = a2;
        count = _objc_msgSend(a0->field_8, SEL_objectForKeyedSubscript_, v20);
        v22 = _objc_retainAutoreleasedReturnValue(count, SEL_objectForKeyedSubscript_, v20);
        _os_unfair_lock_unlock(&a0[1].field_8);
        if (v22)
        {
            count1 = _objc_msgSend(g_4c4120, SEL_null);
            v24 = _objc_retainAutoreleasedReturnValue(count1, SEL_null);
            _objc_retain();
        }
        else
        {
            count2 = _objc_msgSend(g_4c4068, SEL_standardUserDefaults);
            v26 = _objc_retainAutoreleasedReturnValue(count2, SEL_standardUserDefaults);
            v27 = a2;
            v28 = _objc_msgSend(v26, SEL_objectForKey_, v27);
            len = _objc_retainAutoreleasedReturnValue(v28, SEL_objectForKey_, v27);
            _objc_release(v26);
            _os_unfair_lock_lock(&a0[1].field_8);
            v30 = a2;
            v31 = _objc_msgSend(a0->field_8, SEL_objectForKeyedSubscript_, v30);
            v24 = _objc_retainAutoreleasedReturnValue(v31, SEL_objectForKeyedSubscript_, v30);
            if (v24)
            {
                v32 = _objc_msgSend(g_4c4120, SEL_null);
                v33 = _objc_retainAutoreleasedReturnValue(v32, SEL_null);
                _objc_retain();
                _objc_release(len);
                _objc_release(v33);
            }
            else if (len)
            {
                _objc_msgSend(a0->field_8, SEL_setObject_forKeyedSubscript_, len, a2);
            }
            else
            {
                v34 = _objc_msgSend(g_4c4120, SEL_null);
                len1 = _objc_retainAutoreleasedReturnValue(v34, SEL_null);
                _objc_msgSend(a0->field_8, SEL_setObject_forKeyedSubscript_, len1, a2);
                _objc_release(len1);
            }
            _os_unfair_lock_unlock(&a0[1].field_8);
        }
        _objc_release(v24);
        _objc_release(v22);
    }
    _objc_release(a2);
}
