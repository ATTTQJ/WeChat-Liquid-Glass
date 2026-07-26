/* Mach-O initializer 10/33
 * Address: 0x38988; original size: 708 bytes
 * Status: ok; elapsed: 1.135s
 */

void sub_38988(void)
{
    unsigned int v5;  // w8
    long long ch;  // x0
    long long ch1;  // x0
    char *v0;  // [bp-0x70]
    unsigned int i;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    char *v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    /* unsupported instruction */
    i = 3539799776;
    v2 = g_57c010;
    v0 = &i;
    while (1)
    {
        while (1)
        {
            while (1)
            {
                while (i <= 3639991102)
                {
                    if (i == 3291634797)
                    {
                        /* unsupported instruction */
                        g_57c010 = 1;
                        ch1 = _object_getClass(_objc_getClass(&g_4cd8f0));
                        _MSHookMessageEx(ch1, SEL_movePath_to_, 0x38c4c, &g_57c008);
                        i = 3639991103;
                    }
                    else if (i == 3539799776)
                    {
                        if (!v2)
                            v5 = 4142780811;
                        else
                            v5 = 27277997;
LABEL_38aa8:
                        i = v5;
                        goto LABEL_38aa8;
                    }
                    else if (i == 2231023167)
                    {
                        return;
                    }
                }
                if (i != 3639991103)
                    break;
                /* unsupported instruction */
                g_57c010 = 1;
                ch = _object_getClass(_objc_getClass(&g_4cd8f0));
                _MSHookMessageEx(ch, SEL_movePath_to_, 0x38c4c, &g_57c008);
                i = 2231023167;
            }
            if (i == 4142780811)
            {
                *((char *)&g_4cd8f0) = g_4cd8e0 ^ 42;
                g_4cd8f1 = g_4cd8e1 ^ 154;
                g_4cd8f2 = g_4cd8e2 ^ 28;
                g_4cd8f3 = g_4cd8e3 ^ 180;
                g_4cd8f4 = g_4cd8e4 ^ 0x11;
                g_4cd8f5 = g_4cd8e5 ^ 228;
                g_4cd8f6 = g_4cd8e6 ^ 0x99;
                g_4cd8f7 = g_4cd8e7 ^ 82;
                g_4cd8f8 = g_4cd8e8 ^ 101;
                g_4cd8f9 = g_4cd8e9 ^ 186;
                g_4cd8fa = g_4cd8ea ^ 205;
                g_4cd8fb = g_4cd8eb ^ 12;
                g_4cd8fc = g_4cd8ec ^ 74;
                g_4cd8fd = g_4cd8ed ^ 249;
                g_4cd8fe = g_4cd8ee ^ 248;
                g_4cd8ff = g_4cd8ef ^ 243;
                i = 27277997;
            }
            else if (i == 27277997)
            {
                break;
            }
        }
        if (((g_4cd9d0 - g_4cd9d4 + 1126065733 | 3814089185) & 4160190965) != 698438363)
            v5 = 3639991103;
        else
            v5 = 3291634797;
        goto LABEL_38aa8;
    }
}
