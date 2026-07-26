/* Hook replacement 253/418
 * Selectors: SEL_updateTypingTitle_
 * Address: 0x429ec; original size: 308 bytes
 * Status: ok; elapsed: 0.393s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_429ec(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v9;  // x24
    unsigned long long v10;  // x23
    long long count;  // x0
    long long count1;  // x0
    long long v21;  // x0
    long long count2;  // x0
    long long v23;  // x24
    unsigned long long v11;  // x22
    unsigned long long v12;  // x21
    unsigned long long v13;  // x20
    unsigned long long v14;  // x19
    unsigned long long v15;  // x30
    long long v16;  // x0
    long long v17;  // x0
    unsigned long v18;  // x0
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
    g_57c410(a0, a1, a2);
    v16 = _objc_retain(a0);
    if (_objc_msgSend(v16, SEL_respondsToSelector_, SEL_m_delegate))
    {
        v17 = _objc_msgSend(a0, SEL_m_delegate);
        v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_m_delegate);
    }
    else
    {
        v18 = 0;
    }
    count = _objc_msgSend(g_4c40e0, SEL_class);
    if (_objc_msgSend(v18, SEL_isKindOfClass_, count))
    {
        sub_1ec028(v18);
        count1 = _objc_msgSend(v18, SEL_navigationController);
        v21 = _objc_retainAutoreleasedReturnValue(count1, SEL_navigationController);
        count2 = _objc_msgSend(v21, SEL_navigationBar);
        v23 = _objc_retainAutoreleasedReturnValue(count2, SEL_navigationBar);
        _objc_release(v21);
        sub_45038(v23);
        _objc_release(v23);
    }
    _objc_release(v18);
    _objc_release(a0);
    _objc_release();
    return;
}
