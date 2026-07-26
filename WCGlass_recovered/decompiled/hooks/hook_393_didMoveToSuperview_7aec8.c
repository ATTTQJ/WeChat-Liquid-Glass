/* Hook replacement 393/418
 * Selectors: SEL_didMoveToSuperview
 * Address: 0x7aec8; original size: 148 bytes
 * Status: ok; elapsed: 0.251s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_7aec8(long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57d0b8();
    if (!sub_43d704(a0))
    {
        v2 = sub_7aff0(a0);
        if (!(unsigned int)v2)
            return v2;
        _objc_msgSend(a0, SEL_setEffect_, 0);
        _objc_msgSend(a0, SEL_setHidden_, 1);
        return _objc_msgSend();
    }
}
