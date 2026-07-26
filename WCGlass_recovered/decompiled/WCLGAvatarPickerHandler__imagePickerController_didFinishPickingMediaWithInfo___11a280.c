/* Recovered pseudocode
 * Objective-C: -[WCLGAvatarPickerHandler imagePickerController:didFinishPickingMediaWithInfo:]
 * Address: 0x11a280; original size: 552 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.492s
 */

long long sub_11a280(long long a0, unsigned long a1, long long a2, long long a3)
{
    long long v8;  // x0
    long long count;  // x0
    long long v18;  // x24
    long long count1;  // x0
    long long v20;  // x1
    unsigned long long v22;  // x8
    long long v10;  // x22
    long long count2;  // x0
    long long v12;  // x22
    long long v13;  // x0
    long long v14;  // x0
    long long v15;  // x0
    long long v16;  // x23
    long long v17;  // x0
    unsigned long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    _objc_retain(a2);
    v8 = _objc_retain(a3);
    count = _objc_msgSend(v8, SEL_objectForKeyedSubscript_, *((long long *)&g_6003e0));
    v10 = _objc_retainAutoreleasedReturnValue(count, SEL_objectForKeyedSubscript_, *((long long *)&g_6003e0));
    count2 = _objc_msgSend(g_4c4080, SEL_class);
    v12 = v10;
    if (!((char)_objc_msgSend(v12, SEL_isKindOfClass_, count2) & 1))
    {
        v13 = _objc_msgSend(a3, SEL_objectForKeyedSubscript_, *((long long *)&g_6003e8));
        v14 = _objc_retainAutoreleasedReturnValue(v13, SEL_objectForKeyedSubscript_, *((long long *)&g_6003e8));
        _objc_release(v10);
        v12 = v14;
    }
    v15 = _objc_msgSend(a0, SEL_wxid);
    v16 = _objc_retainAutoreleasedReturnValue(v15, SEL_wxid);
    v17 = _objc_msgSend(a0, SEL_onDone);
    v18 = _objc_retainAutoreleasedReturnValue(v17, SEL_onDone);
    count1 = _objc_msgSend(g_4c4080, SEL_class);
    if (_objc_msgSend(v12, SEL_isKindOfClass_, count1) && _objc_msgSend(v16, SEL_length) && sub_11c5c4(v12, v16))
    {
        v20 = v12;
        _objc_unsafeClaimAutoreleasedReturnValue(sub_39cc5c(g_4a5640, v20), v20);
        v22 = 1;
    }
    else
    {
        v22 = 0;
    }
    v0 = &g_600748;
    v1 = 0xc2000000;
    v2 = 1156264;
    v3 = &g_4a1b10;
    v5 = v22;
    v4 = v18;
    _objc_retain(v18);
    _objc_msgSend(a2, SEL_dismissViewControllerAnimated_completion_, 1, &v0);
    _objc_msgSend(a0, SEL_setRetainSelf_, 0);
    _objc_release(v4);
    _objc_release(v18);
    _objc_release(v16);
    _objc_release(v12);
    _objc_release(a3);
    return _objc_release(a2);
}
