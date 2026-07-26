/* Recovered pseudocode
 * Objective-C: -[WCLGVoiceHoldRecognizer wclgBeginRecording]
 * Address: 0x840b4; original size: 392 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.543s
 */

void sub_840b4(long long a0)
{
    unsigned long long v13;  // x28
    unsigned long long v14;  // x27
    unsigned long long v23;  // x30
    long long count;  // x0
    long long len;  // x19
    long long v26;  // x0
    long long count1;  // x0
    long long count2;  // x0
    long long len1;  // x25
    long long v30;  // x0
    long long v31;  // x26
    unsigned long long v15;  // x26
    unsigned long long v16;  // x25
    unsigned long long v17;  // x24
    unsigned long long v18;  // x23
    unsigned long long v19;  // x22
    unsigned long long v20;  // x21
    unsigned long long v21;  // x20
    unsigned long long v22;  // x19
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    char *v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    char v12;  // [bp+0x0]

    v0 = v13;
    v1 = v14;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = &v12;
    v11 = v23;
    _objc_msgSend();
    count = _objc_msgSend(a0, SEL_wclgResolvedToolView);
    len = _objc_retainAutoreleasedReturnValue(count, SEL_wclgResolvedToolView);
    if (len && ((char)_objc_msgSend(len, SEL_respondsToSelector_, SEL_MMTransparentButton_touchesBegan_withEvent_) & 1))
    {
        _objc_msgSend(a0, SEL_setRecording_, 1);
        _objc_msgSend(a0, SEL_setState_, 1);
        v26 = _objc_alloc(g_4c4238);
        count1 = _objc_msgSend(v26, SEL_initWithStyle_, 1);
        _objc_msgSend(count1, SEL_impactOccurred, 1);
        g_57d230 = 1;
        _objc_msgSend(a0, SEL_wclgMountWaveViewOnToolView_, len);
        count2 = _objc_msgSend(a0, SEL_pendingTouches);
        len1 = _objc_retainAutoreleasedReturnValue(count2, SEL_pendingTouches);
        v30 = _objc_msgSend(a0, SEL_pendingEvent);
        v31 = _objc_retainAutoreleasedReturnValue(v30, SEL_pendingEvent);
        _objc_msgSend(len, SEL_MMTransparentButton_touchesBegan_withEvent_, len1, v31);
        _objc_release(v31);
        _objc_release(len1);
        _objc_release(count1);
    }
    else
    {
        _objc_msgSend(a0, SEL_setState_, 5);
    }
    _objc_release();
    return;
}
