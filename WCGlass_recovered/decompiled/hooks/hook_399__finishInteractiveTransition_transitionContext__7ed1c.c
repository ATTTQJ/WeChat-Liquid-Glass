/* Hook replacement 399/418
 * Selectors: SEL__finishInteractiveTransition_transitionContext_
 * Address: 0x7ed1c; original size: 128 bytes
 * Status: ok; elapsed: 0.267s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_7ed1c(void)
{
    long long v2;  // x0
    long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57d120();
    if (!(g_582f88 & 1))
    {
        return;
    }
    else if ((g_582fd8 & 1))
    {
        v2 = _objc_alloc(g_4c4238);
        count = _objc_msgSend(v2, SEL_initWithStyle_, 0);
        _objc_msgSend(count, SEL_impactOccurred, 0);
    }
    else
    {
        return;
    }
}
