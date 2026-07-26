/* Recovered pseudocode
 * Objective-C: -[WCLGChatPinnedHitCatcher hitTest:withEvent:]
 * Address: 0x2984c; original size: 1336 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.454s
 */

void sub_2984c(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v35;  // d13
    unsigned long long v36;  // d12
    unsigned long long v45;  // x24
    unsigned long long v46;  // x23
    long long v47;  // x22
    unsigned long long v48;  // x21
    unsigned long long v49;  // x20
    unsigned long long v50;  // x19
    unsigned long long v51;  // x30
    unsigned long long v52;  // d0
    unsigned long v53;  // 4127
    long long count;  // x0
    unsigned long long v37;  // d11
    long long v55;  // x22
    unsigned long long count1;  // x0
    unsigned long long idx;  // x20
    unsigned long long len;  // x19
    unsigned long long v59;  // d0
    unsigned long v60;  // 4125
    long long count2;  // x0
    long long v62;  // x21
    long long v63;  // x0
    long long v64;  // x0
    unsigned long long v38;  // d10
    unsigned long long v66;  // d0
    unsigned long v67;  // 4127
    unsigned long long v39;  // d9
    unsigned long long v40;  // d8
    unsigned long long v41;  // x28
    unsigned long long v42;  // x27
    unsigned long long v43;  // x26
    unsigned long long v44;  // x25
    unsigned long v0;  // [bp-0x258]
    unsigned long v1;  // [bp-0x250]
    unsigned long v2;  // [bp-0x248]
    unsigned long v3;  // [bp-0x240]
    unsigned long v4;  // [bp-0x238]
    unsigned long long v5;  // [bp-0x220]
    unsigned long long v6;  // [bp-0x210]
    unsigned long long v7;  // [bp-0x200]
    unsigned long long v8;  // [bp-0x1f0]
    unsigned long long v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d0]
    unsigned long long v11;  // [bp-0x1c0]
    unsigned long long v12;  // [bp-0x1b0]
    char v13;  // [bp-0x1a0]
    char v14;  // [bp-0x120]
    unsigned long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    unsigned long long v26;  // [bp-0x40]
    unsigned long long v27;  // [bp-0x38]
    long long v28;  // [bp-0x30]
    unsigned long long v29;  // [bp-0x28]
    unsigned long long v30;  // [bp-0x20]
    unsigned long long v31;  // [bp-0x18]
    char *v32;  // [bp-0x10]
    unsigned long long v33;  // [bp-0x8]
    char v34;  // [bp+0x0]

    v16 = v35;
    v17 = v36;
    v18 = v37;
    v19 = v38;
    v20 = v39;
    v21 = v40;
    v22 = v41;
    v23 = v42;
    v24 = v43;
    v25 = v44;
    v26 = v45;
    v27 = v46;
    v28 = v47;
    v29 = v48;
    v30 = v49;
    v31 = v50;
    v32 = &v34;
    v33 = v51;
    v15 = *((long long *)&g_600760);
    _objc_retain(a2);
    v52 = 0;
    v11 = 0;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    v53 = arm64g_calculate_condition(18, g_57bea0, 1, 0);
    if ((char)v53)
        sub_45ed98();
    count = _objc_msgSend(g_57be98, SEL_allObjects);
    v55 = _objc_retainAutoreleasedReturnValue(count, SEL_allObjects);
    v0 = SEL_allObjects;
    v2 = SEL_countByEnumeratingWithState_objects_count_;
    count1 = _objc_msgSend(v55, SEL_countByEnumeratingWithState_objects_count_, &v9, &v14, 16);
    if (count1)
    {
        do
        {
            idx = 0;
            v3 = SEL_pointInside_withEvent_;
            v4 = SEL_convertPoint_toView_;
            v1 = SEL_hitTest_withEvent_;
            do
            {
                len = *((long long *)(*(&(&v9)[1]) + idx * 8));
                v59 = v52;
                if (!len || !((v59 = v52, !((char)(unsigned long long)_objc_msgSend(len, SEL_isHidden) & 1) && (_objc_msgSend(len, SEL_alpha), v60 = (unsigned long)arm64g_calculate_condition(64, (((((unsigned long long)(char)(CmpF(v52, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v52, 4576918229304087675) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v52, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v52, 4576918229304087675) & 1)) & ((unsigned long long)(char)(CmpF(v52, 4576918229304087675)) >> 5 & 3 | (unsigned long long)(CmpF(v52, 4576918229304087675) & 1)) >> 1 & 1)) * 0x10000000, 0, 0), v59 = v52, !((char)v60)))))
                    continue;
                count2 = _objc_msgSend(len, SEL_window);
                v62 = _objc_retainAutoreleasedReturnValue(count2, SEL_window);
                v63 = _objc_msgSend(a0, SEL_window);
                v64 = _objc_retainAutoreleasedReturnValue(v63, SEL_window);
                _objc_release(v64);
                _objc_release(v62);
                v59 = v52;
            } while ((v52 = v59, idx += 1, count1 != idx));
            count1 = _objc_msgSend(v55, v2, &v9, &v14, 16);
        } while (count1);
    }
    _objc_release(v55);
    v66 = 0;
    v7 = 0;
    v8 = 0;
    v5 = 0;
    v6 = 0;
    v67 = arm64g_calculate_condition(18, g_57bea0, 1, 0);
    if ((char)v67)
        sub_45edac();
    v55 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_57be98, v0), v0);
    a1 = v2;
    if (!_objc_msgSend(v55, a1, &v5, &v13, 16))
        _objc_release(v55);
}
