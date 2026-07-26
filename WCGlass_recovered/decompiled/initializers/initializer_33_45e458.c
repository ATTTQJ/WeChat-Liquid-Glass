/* Mach-O initializer 33/33
 * Address: 0x45e458; original size: 692 bytes
 * Status: ok; elapsed: 0.688s
 */

unsigned long long sub_45e458(void)
{
    long long count;  // x0
    long long v4;  // x19
    long long count1;  // x0
    long long v6;  // x0
    long long v7;  // x20
    unsigned int v10;  // w8
    unsigned long long v11;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (0x3ff3e502 * g_57b1b4 * g_57b1b0 == 2825128323)
    {
        sub_c96cc(_objc_autoreleasePoolPush());
        count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    }
    do
    {
        sub_c96cc(_objc_autoreleasePoolPush());
        count1 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
        v6 = _objc_retainAutoreleasedReturnValue(count1, SEL_sharedConfig);
    } while (0);
    v7 = v6;
    sub_2ecc9c();
    do
    { } while (573768879 * (__ROL__((g_57b1cc * g_57b1c8) * 1107021709, 4) & 15) == 2284573597);
    sub_3a4ec8(sub_3aa924());
    do
    { } while (0);
    sub_c859c(sub_4451c4());
    if (_objc_msgSend(v7, SEL_liquidGlassEnabled))
    {
        v10 = g_57b1ec * g_57b1e8;
        do
        { } while (394882545 < (__ROL__(((v10 * 0x80000000 | v10 >> 1) & 0x7fffffff) * 172862861, 8) & 0xff & 4));
        sub_3aa1ac();
        do
        { } while (((__ROL__((g_57b1f8 / g_57b1fc) * 825819421, 3) & 7) + 2063036105 | 4249221520) < 2372728712);
        sub_3aa9dc();
    }
    if (4028648986 * (__ROL__((g_57b200 | g_57b204) * 3014964903, 1) & 1 | 1290144022) > 3749974339)
    {
        _objc_release(v7);
        _objc_autoreleasePoolPop(v4);
    }
    do
    {
        _objc_release(v7);
        v11 = _objc_autoreleasePoolPop(v4);
    } while (1432203779 < (g_57b208 + g_57b20c ^ 2248151330 | 2041284177) + 576062030);
    return v11;
}
