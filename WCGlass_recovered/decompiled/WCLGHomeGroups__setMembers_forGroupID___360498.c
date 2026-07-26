/* Recovered pseudocode
 * Objective-C: -[WCLGHomeGroups setMembers:forGroupID:]
 * Address: 0x360498; original size: 4496 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 4.827s
 */

typedef struct struct_0 {
    unsigned int field_0;
    char field_1;
    char padding_2[6];
    char field_8;
    char padding_9[7];
    unsigned long long field_10;
} struct_0;

void sub_360498(unsigned long a0, unsigned long a1, long long a2, unsigned long a3)
{
    int v0;  // [bp-0x300]
    struct_0 *v53;  // [bp-0x74]
    unsigned long v54;  // [bp-0x70]
    char *v55;  // [bp-0x10]
    char v56;  // [bp+0x0]

    v55 = &v56;
    /* unsupported instruction */ = (int)(&v0 - 192);
    *((unsigned long *)&(&v0)[192]) = a0;
    *((unsigned long *)&(&v0)[200]) = a3;
    v54 = *((long long *)&g_600760);
    /* unsupported instruction */
    v53 = (struct_0 *)g_5813a0;
    *((unsigned int *)&(&v0)[220]) = 3875172271;
    *((void* *)&(&v0)[208]) = &v0 - 220;
}
