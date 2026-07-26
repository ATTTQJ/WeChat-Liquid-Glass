/* Hook replacement 374/418
 * Selectors: SEL_traitCollectionDidChange_
 * Address: 0x690b0; original size: 160 bytes
 * Status: ok; elapsed: 0.258s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_690b0(long long a0, unsigned long a1, long long len)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = &v6;
    v5 = v11;
    _objc_retain(len);
    g_57ccb8(a0, a1, len);
    if (sub_7409c(a0) && (g_582f88 & 1) && (g_582fc2 & 1) && (g_582fe8 & 1))
        _objc_msgSend(a0, SEL_wclg_refreshSMSHomeAddIconTintWithPreviousTraits_, len);
}
