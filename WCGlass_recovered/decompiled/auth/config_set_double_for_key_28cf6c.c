/* Authorization path recovery
 * Label: config_set_double_for_key
 * Address: 0x28cf6c; size: 140
 * Status: ok; elapsed: 0.301s
 */

void sub_28cf6c(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // d9
    unsigned long long v10;  // d8
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long count;  // x0
    long long len;  // x0
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
    count = _objc_msgSend(g_4c40a8, SEL_numberWithDouble_);
    len = _objc_retainAutoreleasedReturnValue(count, SEL_numberWithDouble_);
    _objc_msgSend(a0, SEL_setCachedObject_forKey_, len, a2);
    _objc_release(a2);
    _objc_release();
    return;
}
