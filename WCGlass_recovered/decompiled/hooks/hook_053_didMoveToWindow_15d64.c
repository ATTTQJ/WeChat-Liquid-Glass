/* Hook replacement 53/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x15d64; original size: 164 bytes
 * Status: ok; elapsed: 0.45s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_15d64(long long a0)
{
    long long count;  // x0
    char v3;  // x0
    char v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57b618();
    if (!(g_582f88 & 1))
    {
        return;
    }
    else if ((g_582f8b & 1))
    {
        count = _objc_msgSend(a0, SEL_window);
        v3 = _objc_retainAutoreleasedReturnValue(count, SEL_window);
        _objc_release(v3);
        if (!v3)
            return;
        sub_12a27c(a0);
        v4 = _objc_retainAutoreleasedReturnValue(sub_17584(a0));
        if (!v4)
        {
            _objc_release();
            return;
        }
        sub_177f8(v4);
        _objc_release();
        return;
    }
    else
    {
        return;
    }
}
