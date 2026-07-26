/* Hook replacement 382/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x69528; original size: 116 bytes
 * Status: ok; elapsed: 0.246s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_69528(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57cd08();
    if (sub_79874(a0))
    {
        if ((g_5231c8 & 1))
            sub_653e0(a0);
        else
            sub_79ce8(a0);
    }
    _objc_msgSend(a0, SEL_wclg_applySMSBackChevronIfNeeded);
    _objc_msgSend();
    return;
}
