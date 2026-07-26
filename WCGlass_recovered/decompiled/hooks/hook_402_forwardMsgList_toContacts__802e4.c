/* Hook replacement 402/418
 * Selectors: SEL_forwardMsgList_toContacts_
 * Address: 0x802e4; original size: 1136 bytes
 * Status: ok; elapsed: 0.853s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_802e4(unsigned long a0, unsigned long long a1, long long a2, long long a3)
{
    unsigned long long v12;  // x21
    long long count;  // x0
    unsigned long long v21;  // x0
    long long v22;  // x0
    long long v14;  // x0
    char count1;  // x0
    char idx;  // x26
    long long v17;  // x22
    char v18;  // x21
    char v19;  // x0
    char v20;  // x0
    char v0;  // [bp-0x150]
    char v1;  // [bp-0xd0]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x90]
    unsigned long v6;  // [bp-0x88]
    char ch;  // [bp-0x80]
    char v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x68]
    char *v10;  // [bp-0x10]
    char v11;  // [bp+0x0]

    v10 = &v11;
    v12 = a1;
    v9 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_57d208)
    {
        *((char *)&g_4d504a) = g_4d503d ^ 160;
        g_4d504b = g_4d503e ^ 35;
        g_4d504c = g_4d503f ^ 234;
        g_4d504d = g_4d5040 ^ 236;
        g_4d504e = g_4d5041 ^ 105;
        g_4d504f = g_4d5042 ^ 43;
        g_4d5050 = g_4d5043 ^ 4;
        g_4d5051 = g_4d5044 ^ 245;
        g_4d5052 = g_4d5045 ^ 74;
        g_4d5053 = g_4d5046 ^ 104;
        g_4d5054 = g_4d5047 ^ 78;
        g_4d5055 = g_4d5048 ^ 211;
        g_4d5056 = g_4d5049 ^ 77;
    }
    /* unsupported instruction */
    g_57d208 = 1;
    _objc_retain(a2);
    _objc_retain(a3);
    if ((g_582f88 & 1) && (g_582fd9 & 1))
    {
        v8 = _objc_retain(*((long long *)&g_57d1d8));
        if (v8)
        {
            _objc_retain(v8);
            ch = _objc_getClass(&g_4d504a);
            if (ch && !((count = (long long)(unsigned long long)_objc_msgSend(g_4c4098, SEL_class), !(unsigned int)(unsigned long long)_objc_msgSend(v8, SEL_isKindOfClass_, (unsigned long long)_objc_msgSend(g_4c4098, SEL_class)) || !(unsigned long long)_objc_msgSend(v8, SEL_count))))
            {
                v5 = v12;
                v3 = 0;
                v4 = 0;
                v1 = 0;
                v2 = 0;
                v14 = _objc_retain(v8);
                v6 = SEL_countByEnumeratingWithState_objects_count_;
                count1 = _objc_msgSend(v14, SEL_countByEnumeratingWithState_objects_count_, &v1, &v0, 16);
                if (count1)
                {
                    do
                    {
                        idx = 0;
                        do
                        {
                            v17 = *((long long *)(*((unsigned long long *)((void*)&v1 + 8)) + idx * 8));
                            if (_objc_msgSend(v17, SEL_isKindOfClass_, ch) && _objc_msgSend(v17, SEL_m_uiMessageType) == 0x22)
                            {
                                v17 = v8;
                                _objc_release(v17);
                                _objc_release(v17);
                                v18 = *((long long *)&g_57d1d8);
                                *((unsigned long long *)&g_57d1d8) = 0;
                                _objc_retain(v17);
                                _objc_release(v18);
                                g_57d1f8 = g_57d1f8 + 1;
                                g_57d1e8(a0, v5, v17, a3);
                                _objc_release(v17);
                                goto LABEL_80638;
                            }
                        } while ((idx = (char)(idx + 1), count1 != idx));
                        count1 = _objc_msgSend(v8, v6, &v1, &v0, 16);
                    } while (count1);
                }
                _objc_release(v8);
                _objc_release(v8);
                v12 = v5;
            }
            else
            {
                _objc_release(v8);
            }
            v19 = *((long long *)&g_57d1d8);
            *((unsigned long long *)&g_57d1d8) = 0;
            _objc_release(v19);
            g_57d1f8 = g_57d1f8 + 1;
        }
        g_57d1e8(a0, v12, a2, a3);
LABEL_80638:
        _objc_release(v8);
    }
    else
    {
        v20 = *((long long *)&g_57d1d8);
        *((unsigned long long *)&g_57d1d8) = 0;
        _objc_release(v20);
        g_57d1f8 = g_57d1f8 + 1;
        g_57d1e8(a0, v12, a2, a3);
    }
    _objc_release(a3);
    v21 = _objc_release(a2);
    if (*((long long *)&g_600760) == v9)
        return v21;
    v22 = ___stack_chk_fail();
    _objc_release(v17);
    _objc_release(v8);
    _objc_release(a3);
    _objc_release(a2);
    __Unwind_Resume(v22);
}
