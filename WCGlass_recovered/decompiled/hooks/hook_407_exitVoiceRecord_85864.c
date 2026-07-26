/* Hook replacement 407/418
 * Selectors: SEL_exitVoiceRecord
 * Address: 0x85864; original size: 92 bytes
 * Status: ok; elapsed: 0.227s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int sub_85864(long long a0)
{
    long long v2;  // x0
    unsigned int v3;  // w0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    g_57d258();
    v2 = _objc_loadWeakRetained(&g_57d228);
    v3 = _objc_release(v2);
    if (v2 != a0)
        return v3;
}
