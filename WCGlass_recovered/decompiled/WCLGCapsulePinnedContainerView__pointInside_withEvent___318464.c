/* Recovered pseudocode
 * Objective-C: -[WCLGCapsulePinnedContainerView pointInside:withEvent:]
 * Address: 0x318464; original size: 568 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.741s
 */

unsigned long long sub_318464(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long v12;  // x20
    unsigned long long v13;  // d0
    unsigned long v22;  // 4125
    unsigned long long v23;  // d0
    long long count;  // x0
    long long v15;  // x0
    long long count1;  // x0
    long long v17;  // x22
    unsigned long long count2;  // x0
    unsigned long long idx;  // x20
    unsigned long len;  // x23
    unsigned long long v21;  // d0
    unsigned long v0;  // [bp-0x178]
    unsigned long v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x140]
    unsigned long long v5;  // [bp-0x130]
    unsigned long v6;  // [bp-0x120]
    unsigned long v7;  // [bp-0x118]
    char v8;  // [bp-0x110]
    unsigned long v9;  // [bp-0x90]
    char *v10;  // [bp-0x10]
    char v11;  // [bp+0x0]

    v10 = &v11;
    v9 = *((long long *)&g_600760);
    _objc_retain(a2);
    v6 = a0;
    v7 = g_4c47c0;
    v1 = SEL_pointInside_withEvent_;
    if (((char)_objc_msgSendSuper2(&v6, SEL_pointInside_withEvent_, a2) & 1))
    {
        v12 = 1;
    }
    else
    {
        v13 = 0;
        v4 = 0;
        v5 = 0;
        v2 = 0;
        v3 = 0;
        count = _objc_msgSend(a0, SEL_subviews);
        v15 = _objc_retainAutoreleasedReturnValue(count, SEL_subviews);
        count1 = _objc_msgSend(v15, SEL_reverseObjectEnumerator);
        v17 = _objc_retainAutoreleasedReturnValue(count1, SEL_reverseObjectEnumerator);
        _objc_release(v15);
        v0 = SEL_countByEnumeratingWithState_objects_count_;
        count2 = _objc_msgSend(v17, SEL_countByEnumeratingWithState_objects_count_, &v2, &v8, 16);
        if (count2)
        {
            do
            {
                idx = 0;
                do
                {
                    len = *((long long *)(*(&(&v2)[1]) + idx * 8));
                    v21 = v13;
                    if (!((char)_objc_msgSend(len, SEL_isHidden) & 1) && (_objc_msgSend(len, SEL_alpha), v22 = (unsigned long)arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v13, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v13, 4576918229304087675) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v13, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v13, 4576918229304087675) & 1)) & ((unsigned long long)(char)(CmpF(v13, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v13, 4576918229304087675) & 1)) >> 1 & 1)) * 0x10000000, 0, 0), v21 = v13, !((char)v22) && (v21 = v13, (unsigned int)(unsigned long long)_objc_msgSend(len, SEL_isUserInteractionEnabled) && (_objc_msgSend(a0, SEL_convertPoint_toView_, len), v21 = v23, ((char)(unsigned long long)_objc_msgSend(len, v1, a2) & 1)))))
                    {
                        v12 = 1;
                        goto LABEL_318644;
                    }
                } while ((v13 = v21, idx += 1, count2 != idx));
                count2 = _objc_msgSend(v17, v0, &v2, &v8, 16);
            } while (count2);
        }
        v12 = 0;
LABEL_318644:
        _objc_release(v17);
    }
    _objc_release(a2);
    if (*((long long *)&g_600760) == v9)
        return v12;
    ___stack_chk_fail();
}
