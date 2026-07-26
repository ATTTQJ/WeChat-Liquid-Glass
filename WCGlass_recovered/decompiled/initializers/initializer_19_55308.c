/* Mach-O initializer 19/33
 * Address: 0x55308; original size: 380 bytes
 * Status: ok; elapsed: 0.814s
 */

void sub_55308(void)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x19
    long long count;  // x0
    long long v23;  // x4
    long long count1;  // x0
    long long count2;  // x0
    long long v26;  // x19
    long long v27;  // x0
    long long v28;  // x4
    long long v29;  // x0
    unsigned long long v13;  // x24
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x0
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
    v20 = _objc_msgSend(g_4c41f0, SEL_defaultCenter);
    v21 = _objc_retainAutoreleasedReturnValue(v20, SEL_defaultCenter);
    count = _objc_msgSend(g_4c41f8, SEL_mainQueue);
    v23 = _objc_retainAutoreleasedReturnValue(count, SEL_mainQueue);
    count1 = _objc_msgSend(v21, SEL_addObserverForName_object_queue_usingBlock_, *((long long *)&g_600330), 0, v23, &g_4a0ed8);
    _objc_unsafeClaimAutoreleasedReturnValue(count1, SEL_addObserverForName_object_queue_usingBlock_, *((long long *)&g_600330), 0, v23, &g_4a0ed8);
    _objc_release(v23);
    _objc_release(v21);
    count2 = _objc_msgSend(g_4c41f0, SEL_defaultCenter);
    v26 = _objc_retainAutoreleasedReturnValue(count2, SEL_defaultCenter);
    v27 = _objc_msgSend(g_4c41f8, SEL_mainQueue);
    v28 = _objc_retainAutoreleasedReturnValue(v27, SEL_mainQueue);
    v29 = _objc_msgSend(v26, SEL_addObserverForName_object_queue_usingBlock_, *((long long *)&g_600328), 0, v28, &g_4a0ef8);
    _objc_unsafeClaimAutoreleasedReturnValue(v29, SEL_addObserverForName_object_queue_usingBlock_, *((long long *)&g_600328), 0, v28, &g_4a0ef8);
    _objc_release(v28);
    _objc_release(v26);
    _dispatch_after(_dispatch_time(0, 1000000000), &g_600770, &g_4a0f18);
    _dispatch_after(_dispatch_time(0, 3000000000), &g_600770, &g_4a0f38);
    _objc_release();
    return;
}
