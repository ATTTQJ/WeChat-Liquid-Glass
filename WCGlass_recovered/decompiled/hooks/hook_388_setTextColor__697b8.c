/* Hook replacement 388/418
 * Selectors: SEL_setTextColor_
 * Address: 0x697b8; original size: 112 bytes
 * Status: ok; elapsed: 0.257s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_697b8(long long a0, unsigned long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x0
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
    _objc_retain(a2);
    v12 = _objc_retainAutoreleasedReturnValue(sub_197874(a0));
    g_57cd48();
    _objc_release(v12);
    _objc_release();
    return;
}
