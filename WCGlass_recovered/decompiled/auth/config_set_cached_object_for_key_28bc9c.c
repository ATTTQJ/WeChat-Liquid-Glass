/* Authorization path recovery
 * Label: config_set_cached_object_for_key
 * Address: 0x28bc9c; size: 432
 * Status: ok; elapsed: 0.515s
 */

typedef struct struct_0 {
    char padding_0[8];
    long long field_8;
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

long long sub_28bc9c(struct_0 *a0, unsigned long a1, long long len, long long len1)
{
    long long v7;  // x0
    long long count;  // x0
    long long len2;  // x22
    long long t;  // x0
    long long v11;  // x23
    unsigned long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    struct_0 *v4;  // [bp-0x48]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    _objc_retain(len);
    v7 = _objc_retain(len1);
    if (_objc_msgSend(v7, SEL_length))
    {
        _os_unfair_lock_lock(a0->padding_18);
        if (len)
        {
            _objc_msgSend(a0->field_8, SEL_setObject_forKeyedSubscript_, len, len1);
        }
        else
        {
            count = _objc_msgSend(g_4c4120, SEL_null);
            len2 = _objc_retainAutoreleasedReturnValue(count, SEL_null);
            _objc_msgSend(a0->field_8, SEL_setObject_forKeyedSubscript_, len2, len1);
            _objc_release(len2);
        }
        _objc_msgSend(a0->field_10, SEL_addObject_, len1);
        if ((a0->field_1c & 1))
        {
            _os_unfair_lock_unlock(a0->padding_18);
            _objc_msgSend(a0, SEL_maybeUpdateMirrorForKey_value_, len1, len);
        }
        else
        {
            a0->field_1c = 1;
            _os_unfair_lock_unlock(a0->padding_18);
            _objc_msgSend(a0, SEL_maybeUpdateMirrorForKey_value_, len1, len);
            t = _dispatch_time(0, 500000000);
            v11 = _objc_retainAutoreleasedReturnValue(_dispatch_get_global_queue(0x11, 0), 0);
            v0 = &g_600748;
            v1 = 0xc2000000;
            v2 = 2670156;
            v3 = &g_4a1a00;
            v4 = a0;
            _dispatch_after(t, v11, &v0);
            _objc_release(v11);
        }
    }
    _objc_release(len1);
    return _objc_release(len);
}
