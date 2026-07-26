/* Hook replacement 39/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x141cc; original size: 368 bytes
 * Status: ok; elapsed: 0.52s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_141cc(long long a0)
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
    /* unsupported instruction */
    if (!g_57b6d8)
    {
        g_4c9750 = g_4c9740 ^ 25;
        g_4c9751 = g_4c9741 ^ 0xcc;
        g_4c9752 = g_4c9742 ^ 240;
        g_4c9753 = g_4c9743 ^ 173;
        g_4c9754 = g_4c9744 ^ 175;
        g_4c9755 = g_4c9745 ^ 8;
        g_4c9756 = g_4c9746 ^ 63;
        g_4c9757 = g_4c9747 ^ 95;
        g_4c9758 = g_4c9748 ^ 101;
        g_4c9759 = g_4c9749 ^ 0xcc;
        g_4c975a = g_4c974a ^ 117;
        g_4c975b = g_4c974b ^ 180;
        g_4c975c = g_4c974c ^ 179;
        g_4c975d = g_4c974d ^ 188;
        g_4c975e = g_4c974e ^ 84;
        g_4c975f = g_4c974f ^ 252;
    }
    /* unsupported instruction */
    g_57b6d8 = 1;
    g_57b5a8(a0);
    sub_1281a4(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_260cd0(a0, &g_4c9780), &g_4c9780);
    sub_17264(v8);
    sub_1687c(v8);
}
