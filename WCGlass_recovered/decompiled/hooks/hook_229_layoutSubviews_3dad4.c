/* Hook replacement 229/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x3dad4; original size: 108 bytes
 * Status: ok; elapsed: 0.246s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_3dad4(long long a0)
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    unsigned long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sub_390768(g_57c228());
    if (!(unsigned int)v2)
        return v2;
    v3 = sub_3904a0(a0);
    if (!(unsigned int)v3)
        return v3;
    count = _objc_msgSend(a0, SEL_isHidden);
    if (!((char)count & 1))
        return _objc_msgSend();
    return count;
}
