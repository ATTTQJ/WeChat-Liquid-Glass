/* Hook replacement 355/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x68384; original size: 68 bytes
 * Status: ok; elapsed: 0.223s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_68384(long long a0, unsigned long a1)
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
    sub_77090();
    g_57cc20(a0, a1);
    sub_774a4(a0);
}
