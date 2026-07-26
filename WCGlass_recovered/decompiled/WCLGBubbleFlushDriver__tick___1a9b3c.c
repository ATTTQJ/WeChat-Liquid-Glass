/* Recovered pseudocode
 * Objective-C: -[WCLGBubbleFlushDriver tick:]
 * Address: 0x1a9b3c; original size: 1632 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.328s
 */

unsigned long long sub_1a9b3c(unsigned long a0, unsigned long a1, long long a2)
{
    long long count;  // x0
    long long v37;  // x27
    long long v38;  // x0
    unsigned long long v39;  // x0
    unsigned long long v69;  // x0
    long long v70;  // x0
    unsigned long long iter;  // x28
    unsigned long v41;  // x19
    unsigned long long idx;  // x21
    long long v0;  // [bp-0x2f0]
    unsigned long v1;  // [bp-0x2d8]
    unsigned long v2;  // [bp-0x2d0]
    unsigned long long v3;  // [bp-0x2c8]
    unsigned long v4;  // [bp-0x2c0]
    unsigned long v5;  // [bp-0x2b8]
    unsigned long v6;  // [bp-0x2b0]
    unsigned long v7;  // [bp-0x2a8]
    unsigned long v8;  // [bp-0x298]
    unsigned long v9;  // [bp-0x290]
    unsigned long v10;  // [bp-0x288]
    unsigned long v11;  // [bp-0x280]
    unsigned long long v13;  // [bp-0x270]
    unsigned long long v14;  // [bp-0x260]
    unsigned long long v15;  // [bp-0x250]
    unsigned long long v16;  // [bp-0x240]
    char v27;  // [bp-0x1c0]
    char v28;  // [bp-0x1b8]
    unsigned long v33;  // [bp-0xa0]
    char *v34;  // [bp-0x10]
    char v35;  // [bp+0x0]

    v34 = &v35;
    v33 = *((long long *)&g_600760);
    _objc_retain(a2);
    count = _objc_msgSend(g_57e838, SEL_allObjects);
    v37 = _objc_retainAutoreleasedReturnValue(count, SEL_allObjects);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v38 = _objc_retain(v37);
    v11 = SEL_countByEnumeratingWithState_objects_count_;
    v39 = _objc_msgSend(v38, SEL_countByEnumeratingWithState_objects_count_, &v13, &v28, 16);
    if (v39)
    {
        iter = 0;
        v41 = *((long long *)v14);
        v5 = *((long long *)v14);
        v0 = v37;
        idx = 0;
        v9 = SEL_class;
        v10 = SEL_removeObject_;
        v8 = SEL_isKindOfClass_;
        v6 = SEL_window;
        v7 = SEL_boolValue;
        v3 = v39;
        v4 = SEL_numberWithDouble_;
        v1 = SEL_arrayWithObjects_count_;
        v2 = SEL_numberWithBool_;
        continue;
    }
    _objc_release(v37);
    _objc_release(v37);
    if (!_objc_msgSend(g_57e838, SEL_count))
        _objc_msgSend(a2, SEL_setPaused_, 1);
    v69 = _objc_release(a2);
    if (*((long long *)&g_600760) == v33)
        return v69;
    v70 = ___stack_chk_fail();
    _objc_destroyWeak(&v27);
    __Unwind_Resume(v70);
}
