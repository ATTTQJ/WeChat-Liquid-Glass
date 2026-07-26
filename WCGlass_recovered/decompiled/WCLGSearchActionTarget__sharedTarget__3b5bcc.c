/* Recovered pseudocode
 * Objective-C: +[WCLGSearchActionTarget sharedTarget]
 * Address: 0x3b5bcc; original size: 268 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.386s
 */

void sub_3b5bcc(unsigned long long a0)
{
    unsigned long long v17;  // x24
    unsigned long long v18;  // x23
    unsigned long long v19;  // x22
    unsigned long long v20;  // x21
    unsigned long long v21;  // x20
    unsigned long long v22;  // x19
    unsigned long long v23;  // x30
    unsigned long v24;  // 4116
    unsigned int v25;  // w8
    char *i;  // [bp-0x80]
    unsigned int v1;  // [bp-0x74]
    unsigned long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    char *v14;  // [bp-0x10]
    unsigned long long v15;  // [bp-0x8]
    char v16;  // [bp+0x0]

    v8 = v17;
    v9 = v18;
    v10 = v19;
    v11 = v20;
    v12 = v21;
    v13 = v22;
    v14 = &v16;
    v15 = v23;
    v4 = 0xd0800000;
    v5 = 3890392;
    v6 = &g_4a0d88;
    v7 = a0;
    v2 = g_581ed8;
    v3 = &g_600740;
    v1 = 3435325288;
    while (1)
    {
        for (i = &v1; v1 <= 3652980608; v1 = v25)
        {
            if (v1 == 3435325288)
            {
                v24 = arm64g_calculate_condition(2, v2, 1, 0);
                if ((char)v24)
                    v25 = 3652980609;
                else
                    v25 = 240827654;
            }
        }
        if (v1 != 3652980609)
        {
            if (v1 != 240827654)
                continue;
            _dispatch_once(&g_581ed8, &v3);
        }
        v1 = 2809214001;
    }
}
