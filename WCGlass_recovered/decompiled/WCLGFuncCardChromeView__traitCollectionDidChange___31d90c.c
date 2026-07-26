/* Recovered pseudocode
 * Objective-C: -[WCLGFuncCardChromeView traitCollectionDidChange:]
 * Address: 0x31d90c; original size: 168 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.268s
 */

unsigned long long sub_31d90c(unsigned long a0, unsigned long a1, long long len)
{
    long long count;  // x0
    long long v5;  // x0
    unsigned int v6;  // w0
    unsigned long long v7;  // x0
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = a0;
    v1 = g_4c47c8;
    _objc_retain(len);
    _objc_msgSendSuper2(&v0, SEL_traitCollectionDidChange_, len);
    count = _objc_msgSend(a0, SEL_traitCollection);
    v5 = _objc_retainAutoreleasedReturnValue(count, SEL_traitCollection);
    v6 = _objc_msgSend(v5, SEL_hasDifferentColorAppearanceComparedToTraitCollection_, len);
    _objc_release(len);
    v7 = _objc_release(v5);
    if (!v6)
        return v7;
    return sub_31d5d0(a0);
}
