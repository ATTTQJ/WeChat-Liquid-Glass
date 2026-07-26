/* Hook replacement 262/418
 * Selectors: SEL_setContentOffset_
 * Address: 0x43290; original size: 112 bytes
 * Status: ok; elapsed: 0.234s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_43290(long long a0, unsigned long a1)
{
    char v0;  // [bp-0x22]
    char v1;  // [bp-0x21]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = 0;
    sub_4af74();
    v0 = 0;
    sub_4b340(a0, &v0);
    g_57c458(a0, a1);
    _objc_msgSend(a0, SEL_contentOffset);
    return sub_4b524(a0);
}
