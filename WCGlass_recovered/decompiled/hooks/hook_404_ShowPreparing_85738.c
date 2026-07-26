/* Hook replacement 404/418
 * Selectors: SEL_ShowPreparing
 * Address: 0x85738; original size: 100 bytes
 * Status: ok; elapsed: 0.228s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_85738(long long a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57d240();
    if ((char)g_57d230 != 1)
        return;
    _objc_msgSend(a0, SEL_setHidden_, 1);
}
