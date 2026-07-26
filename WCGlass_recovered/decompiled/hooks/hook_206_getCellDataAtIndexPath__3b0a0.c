/* Hook replacement 206/418
 * Selectors: SEL_getCellDataAtIndexPath_
 * Address: 0x3b0a0; original size: 136 bytes
 * Status: ok; elapsed: 0.281s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_3b0a0(long long a0, long long a1, long long a2)
{
    unsigned long long v7;  // x22
    unsigned long long v8;  // x21
    unsigned long long v9;  // x20
    unsigned long long v10;  // x19
    unsigned long long v11;  // x30
    long long v12;  // x19
    long long v13;  // x0
    long long v14;  // x2
    long long v15;  // x2
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
    v12 = a2;
    _objc_retain(a2);
    v13 = _objc_retainAutoreleasedReturnValue(sub_36cf70(a0, v12), v12);
    if (!v13)
        v14 = v12;
    else
        v14 = v13;
    v15 = v14;
    _objc_retainAutoreleasedReturnValue(g_57c0a0(), a1, v15);
    _objc_release(v13);
    _objc_release(v12);
}
