/* Hook replacement 69/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x1d938; original size: 116 bytes
 * Status: ok; elapsed: 0.379s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_1d938(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57b7e0();
    v8 = _objc_retain(a0);
    if (!((char)_objc_msgSend(v8, SEL_isDragging) & 1) && !((char)_objc_msgSend(a0, SEL_isTracking) & 1) && !((char)_objc_msgSend(a0, SEL_isDecelerating) & 1))
        sub_2610f0(a0);
}
