/* Recovered pseudocode
 * Objective-C: -[WCLGHomeGroups loadFromDisk]
 * Address: 0x34ab94; original size: 3468 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.893s
 */

typedef struct struct_0 {
    long long field_0;
    char padding_8[8];
    unsigned long long field_10;
} struct_0;

unsigned long long sub_34ab94(struct_0 *a0)
{
    struct_0 *v34;  // x23
    int v0;  // [bp-0x1d0]
    unsigned int v30;  // [bp-0x74]
    unsigned long v31;  // [bp-0x70]
    char *v32;  // [bp-0x10]
    char v33;  // [bp+0x0]

    v32 = &v33;
    /* unsupported instruction */ = (int)(&v0 - 64);
    v34 = a0;
    v31 = *((long long *)&g_600760);
    /* unsupported instruction */
    v30 = *((int *)&g_581270);
    *((unsigned int *)&(&v0)[76]) = 1251594338;
    *((void* *)&(&v0)[64]) = &v0 - 76;
}
