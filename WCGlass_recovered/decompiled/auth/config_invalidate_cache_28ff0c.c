/* Authorization path recovery
 * Label: config_invalidate_cache
 * Address: 0x28ff0c; size: 384
 * Status: ok; elapsed: 0.524s
 */

void sub_28ff0c(long long *a0)
{
    unsigned long long v14;  // x24
    unsigned long long v15;  // x23
    long long count;  // x0
    long long v25;  // x0
    long long count1;  // x0
    unsigned long long v16;  // x22
    unsigned long long v17;  // x21
    unsigned long long v18;  // x20
    unsigned long long v19;  // x19
    unsigned long long v20;  // x30
    long long count2;  // x0
    long long v22;  // x0
    long long v23;  // x2
    unsigned long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    char *v11;  // [bp-0x10]
    unsigned long long v12;  // [bp-0x8]
    char v13;  // [bp+0x0]

    v5 = v14;
    v6 = v15;
    v7 = v16;
    v8 = v17;
    v9 = v18;
    v10 = v19;
    v11 = &v13;
    v12 = v20;
    _os_unfair_lock_lock(a0 + 3);
    if (_objc_msgSend(a0[2], SEL_count))
    {
        count2 = _objc_msgSend(a0[2], SEL_allObjects);
        v22 = _objc_retainAutoreleasedReturnValue(count2, SEL_allObjects);
    }
    else
    {
        v22 = 0;
    }
    if (_objc_msgSend(v22, SEL_count))
    {
        v23 = v22;
        count = _objc_msgSend(a0[1], SEL_dictionaryWithValuesForKeys_, v23);
        v25 = _objc_retainAutoreleasedReturnValue(count, SEL_dictionaryWithValuesForKeys_, v23);
    }
    else
    {
        v25 = 0;
    }
    _objc_msgSend(a0[1], SEL_removeAllObjects);
    _objc_msgSend(a0[2], SEL_removeAllObjects);
    _os_unfair_lock_unlock(a0 + 3);
    if (_objc_msgSend(v25, SEL_count))
    {
        count1 = _objc_msgSend(g_4c4068, SEL_standardUserDefaults);
        v0 = &g_600740;
        v1 = 0xd0800000;
        v2 = 2687116;
        v3 = &g_4a4078;
        v4 = _objc_retainAutoreleasedReturnValue(count1, SEL_standardUserDefaults);
        _objc_retain(v4);
        _objc_msgSend(v25, SEL_enumerateKeysAndObjectsUsingBlock_, &v0);
        _objc_release(v4);
        _objc_release(v4);
    }
    _objc_msgSend(a0, SEL_refreshAtomicMirrors);
    _objc_release(v25);
    _objc_release();
    return;
}
