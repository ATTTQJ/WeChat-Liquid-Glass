/* Authorization path recovery
 * Label: local_identity_consumer
 * Address: 0xe3174; size: 25140
 * Status: ok; elapsed: 21.494s
 */

void sub_e3174(unsigned int a0, unsigned long a1)
{
    unsigned long long v119;  // x28
    unsigned long long v120;  // x27
    unsigned long long v129;  // x30
    unsigned long long v121;  // x26
    unsigned long long v122;  // x25
    unsigned long long v123;  // x24
    unsigned long long v124;  // x23
    unsigned long long v125;  // x22
    unsigned long long v126;  // x21
    unsigned long long v127;  // x20
    unsigned long long v128;  // x19
    int v0;  // [bp-0x540]
    int v1;  // [bp-0x530]
    unsigned int v104;  // [bp-0x74]
    unsigned long v105;  // [bp-0x70]
    unsigned long long v106;  // [bp-0x60]
    unsigned long long v107;  // [bp-0x58]
    unsigned long long v108;  // [bp-0x50]
    unsigned long long v109;  // [bp-0x48]
    unsigned long long v110;  // [bp-0x40]
    unsigned long long v111;  // [bp-0x38]
    unsigned long long v112;  // [bp-0x30]
    unsigned long long v113;  // [bp-0x28]
    unsigned long long v114;  // [bp-0x20]
    unsigned long long v115;  // [bp-0x18]
    char *v116;  // [bp-0x10]
    unsigned long long v117;  // [bp-0x8]
    char v118;  // [bp+0x0]

    v106 = v119;
    v107 = v120;
    v108 = v121;
    v109 = v122;
    v110 = v123;
    v111 = v124;
    v112 = v125;
    v113 = v126;
    v114 = v127;
    v115 = v128;
    v116 = &v118;
    v117 = v129;
    /* unsupported instruction */ = (int)(&v0 - 432);
    v1 = (int)_INSERT(*((uint3840_t *)(&v0 + 432)), 432, a1);
    *((unsigned int *)&(&v1)[428]) = a0;
    v105 = *((long long *)&g_600760);
    /* unsupported instruction */
    v104 = g_57ddec;
    *((void* *)&(&v1)[440]) = &v1 - 448;
    *((unsigned int *)&(&v1)[448]) = 809395996;
}
