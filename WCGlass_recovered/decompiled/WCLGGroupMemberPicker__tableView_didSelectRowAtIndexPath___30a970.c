/* Recovered pseudocode
 * Objective-C: -[WCLGGroupMemberPicker tableView:didSelectRowAtIndexPath:]
 * Address: 0x30a970; original size: 6872 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 7.146s
 */

void sub_30a970(long long a0, unsigned long a1, long long a2, long long a3)
{
    long long len;  // x27
    long long v85;  // x24
    int v0;  // [bp-0x580]
    unsigned long long v80;  // [bp-0x84]
    unsigned long v81;  // [bp-0x80]
    char *v82;  // [bp-0x10]
    char v83;  // [bp+0x0]

    v82 = &v83;
    /* unsupported instruction */ = (int)(&v0 - 592);
    len = a3;
    v85 = a2;
    v81 = *((long long *)&g_600760);
    /* unsupported instruction */
    v80 = g_5808c8;
    *((unsigned int *)&(&v0)[604]) = 887300428;
    *((void* *)&(&v0)[592]) = &v0 - 604;
}
