/* Hook replacement 332/418
 * Selectors: SEL_setAlpha_
 * Address: 0x5ac18; original size: 84 bytes
 * Status: ok; elapsed: 0.237s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_5ac18(long long a0)
{
    unsigned long long v5;  // x20
    unsigned long long v6;  // x19
    unsigned long long v7;  // x30
    long long v8;  // x0
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = v5;
    v1 = v6;
    v2 = &v4;
    v3 = v7;
    g_57c9f8();
    sub_5d550(a0);
    v8 = _objc_retainAutoreleasedReturnValue(sub_61a9c(a0));
    sub_58a54(v8);
    sub_3d04e8(v8);
}
