/* Recovered pseudocode
 * Objective-C: -[WCLGChatAvatarMenuDelegate contextMenuInteraction:willEndForConfiguration:animator:]
 * Address: 0x125d58; original size: 260 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.401s
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

long long sub_125d58(long long a0, unsigned long a1, long long a2, long long a3, long long a4)
{
    struct_0 *len;  // x22
    unsigned long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    _objc_retain(a2);
    _objc_retain(a3);
    _objc_retain(a4);
    _objc_initWeak(&v5, a0);
    v0 = &g_600748;
    v1 = 0xc2000000;
    v2 = 1203832;
    v3 = &g_4a1df0;
    _objc_copyWeak(&v4, &v5);
    len = _objc_retainBlock(&v0);
    if (a4)
        _objc_msgSend(a4, SEL_addCompletion_, len);
    else
        len->field_10(len);
    _objc_release(len);
    _objc_destroyWeak(&v4);
    _objc_destroyWeak(&v5);
    _objc_release(a4);
    _objc_release(a3);
    return _objc_release(a2);
}
