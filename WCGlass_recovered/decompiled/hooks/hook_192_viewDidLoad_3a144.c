/* Hook replacement 192/418
 * Selectors: SEL_viewDidLoad
 * Address: 0x3a144; original size: 60 bytes
 * Status: ok; elapsed: 0.21s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3a144(long long a0)
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
    g_57c030();
    sub_371b78(a0);
    sub_3722ec(a0);
}
