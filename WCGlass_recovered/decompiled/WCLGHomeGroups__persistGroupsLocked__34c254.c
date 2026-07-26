/* Recovered pseudocode
 * Objective-C: -[WCLGHomeGroups persistGroupsLocked]
 * Address: 0x34c254; original size: 2108 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 1.476s
 */

void sub_34c254(unsigned long a0)
{
    int v0;  // [bp-0x170]
    unsigned int v18;  // [bp-0x74]
    unsigned long v19;  // [bp-0x70]
    char *v20;  // [bp-0x10]
    char v21;  // [bp+0x0]

    v20 = &v21;
    /* unsupported instruction */ = (int)(&v0 - 64);
    v19 = *((long long *)&g_600760);
    /* unsupported instruction */
    v18 = *((int *)&g_581278);
    *((unsigned int *)&(&v0)[84]) = 2159548358;
    *((void* *)&(&v0)[72]) = &v0 - 84;
    *((unsigned long *)&(&v0)[64]) = a0 + 16;
}
