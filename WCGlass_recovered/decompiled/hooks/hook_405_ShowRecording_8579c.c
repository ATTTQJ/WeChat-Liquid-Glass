/* Hook replacement 405/418
 * Selectors: SEL_ShowRecording
 * Address: 0x8579c; original size: 100 bytes
 * Status: ok; elapsed: 0.228s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_8579c(long long a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57d248();
    if ((char)g_57d230 != 1)
        return;
    _objc_msgSend(a0, SEL_setHidden_, 1);
}
