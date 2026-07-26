/* Authorization path recovery
 * Label: local_wxid_consumer
 * Address: 0xf0d3c; size: 3180
 * Status: ok; elapsed: 3.651s
 */

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[16];
    char field_20;
} struct_0;

void sub_f0d3c(long long a0)
{
    unsigned int v21;  // w8
    unsigned int v22;  // w9
    unsigned long v29;  // 4108
    unsigned long v30;  // 4108
    char v31;  // x9
    unsigned long v32;  // 4108
    unsigned long v33;  // 4108
    unsigned long v34;  // 4108
    unsigned long v35;  // 4108
    unsigned long v36;  // 4108
    unsigned long v37;  // 4108
    unsigned long long v38;  // d0
    unsigned long v23;  // 4108
    unsigned long v39;  // 4159
    unsigned long v40;  // 4108
    unsigned long v41;  // 4108
    unsigned long v42;  // 4108
    unsigned long long v24;  // d0
    unsigned long v25;  // 4234
    unsigned int v26;  // w9
    unsigned long v27;  // 4108
    unsigned int v28;  // w9
    char v0;  // [bp-0x150]
    char *v1;  // [bp-0x108]
    unsigned int v2;  // [bp-0x100]
    char v3;  // [bp-0xfa]
    char v4;  // [bp-0xf9]
    unsigned long long v5;  // [bp-0xf8]
    char v6;  // [bp-0xea]
    char v7;  // [bp-0xe9]
    long long v8;  // [bp-0xe8]
    long long v9;  // [bp-0xe0]
    long long v10;  // [bp-0xd8]
    long long v11;  // [bp-0xd0]
    long long len;  // [bp-0xc8], Other Possible Types: unsigned long long
    long long v13;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v14;  // [bp-0xb2]
    char v15;  // [bp-0xb1]
    long long v16;  // [bp-0xb0]
    struct_0 *idx;  // [bp-0xa8]
    char v18;  // [bp-0x9c]
    char *v19;  // [bp-0x10]
    char v20;  // [bp+0x0]

    v19 = &v20;
    /* unsupported instruction */ = (int)(&v0 + 64);
    /* unsupported instruction */
    v18 = *((int *)&g_57de44);
    v2 = 1204885206;
    v1 = &v2;
    while (1)
    {
        while (1)
        {
            if (467343298 >= v2)
            {
                if (3581087589 < v2)
                {
                    if (3852387508 >= v2)
                    {
                        if (v2 > 3649065970)
                        {
                            if (v2 != 3649065971)
                            {
                                if (v2 == 3816667775)
                                {
                                    _objc_msgSend(v10, v8, &g_4e5e80);
                                    v2 = 1147375367;
                                    continue;
                                }
                                else
                                {
                                    if (v2 == 3699262707)
                                        return;
                                    continue;
                                }
                            }
                            else
                            {
                                v2 = 3047783453;
                                v4 = v7;
                                continue;
                            }
                        }
                        if (v2 != 3581087590 && v2 == 3583941340)
                        {
                            sub_c046c();
                            v2 = 1828956835;
                            continue;
                        }
                        if (8 <= g_57dcf0)
                            v31 = 0;
                        else
                            v31 = 1;
                        v14 = v31;
                        v21 = 1013179065;
                        v22 = 1250130523;
                        v32 = arm64g_calculate_condition(19, (unsigned long long)(g_4ec018 | g_4ec01c | 3543952834), 1356123620, 0);
                        if (!((char)v32))
                            goto LABEL_f1902;
                        goto LABEL_f1901;
                    }
                    if (339040303 >= v2)
                    {
                        if (v2 != 3852387509)
                        {
                            if (v2 != 3994781948)
                                continue;
                            v21 = 2220134239;
                            v22 = 3852387509;
                            v33 = arm64g_calculate_condition(19, (unsigned long long)v6, 0, 0);
                            if (!((char)v33))
                                goto LABEL_f1902;
                            goto LABEL_f1901;
                        }
                        g_57dcf0 = 0;
                        sub_c134c();
                        v21 = 1002963322;
                        v22 = 1598399185;
                        v34 = arm64g_calculate_condition(25, (unsigned long long)(((int)a0 | (unsigned int)v3) & 1), 0, 0);
                        if ((char)v34)
                            goto LABEL_f1901;
LABEL_f1902:
LABEL_f1904:
                    }
                    else
                    {
                        if (v2 != 339040304)
                        {
                            if (v2 != 463153386)
                                continue;
                            v21 = 3279251429;
                            v22 = 0x23fdf876;
                            v35 = arm64g_calculate_condition(19, (unsigned long long)v15, 0, 0);
                            if (!((char)v35))
                                goto LABEL_f1902;
LABEL_f1901:
                            v21 = v22;
                            goto LABEL_f1904;
                        }
                        else
                        {
                            v21 = 3816667775;
                            v28 = 1147375367;
                            v36 = arm64g_calculate_condition(0x33, __ROL__((2928195596 + 1896879428 * (g_4ec040 - g_4ec044)) * 2274722223, 3) & 7 & 0xffffffff, 3843466331, 0);
                            if ((char)v36)
                            {
LABEL_f195d:
                                v21 = v28;
                            }
                            else
                            {
LABEL_f195e:
                            }
                        }
                    }
                }
                else if (v2 > 2782274876)
                {
                    if (v2 <= 3047783452 && v2 != 2782274877)
                    {
                        if (v2 != 2906710467)
                            continue;
                        v24 = 0x4010000000000000 + v5 * 0x4008000000000000;
                        v25 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v24, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v24, 0x403e000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000) & 1)) & ((unsigned long long)(char)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                        sub_c92bc();
                        v21 = 1414233973;
                        v26 = 1484738896;
                        break;
                    }
                    if (v2 != 3047783453)
                    {
                        if (v2 == 3279251429)
                            goto LABEL_f1554;
                        if (v2 != 3456391091)
                            continue;
                        v21 = 3583941340;
                        v22 = 1828956835;
                        v23 = arm64g_calculate_condition(19, (unsigned long long)(540427057 + 307919182 * (g_4ec000 & g_4ec004) & 2486489522), 798272587, 0);
                        if (!((char)v23))
                            goto LABEL_f1902;
                        goto LABEL_f1901;
                    }
                    else
                    {
                        v3 = v4;
                        if (!_objc_msgSend(v11, SEL_length))
                            v21 = 2220134239;
                        else
                            v21 = 339040304;
                    }
                }
                else if (2480536580 >= v2)
                {
                    if (v2 != 2220134239)
                    {
                        if (v2 != 2282721630)
                            continue;
                        /* unsupported instruction */
                        *((unsigned int *)&g_57de44) = 1;
                        idx = /* unsupported instruction */ - 48;
                        /* unsupported instruction */ = (int)(struct struct_0 *)idx->padding_10;
                        v16 = /* unsupported instruction */;
                        if (_objc_msgSend(g_4c41a8, SEL_isMainThread))
                            v21 = 3456391091;
                        else
                            v21 = 1796776561;
                    }
                    else
                    {
                        v5 = g_57dcf0;
                        v21 = 1002963322;
                        v28 = 1146000520;
                        v29 = arm64g_calculate_condition(52, g_57dcf0, 8, 0);
                        if (!((char)v29))
                            goto LABEL_f195e;
                        goto LABEL_f195d;
                    }
                }
                else
                {
                    if (v2 != 2480536581)
                    {
                        if (v2 != 2776143907)
                            continue;
                        v7 = (char)_objc_msgSend(v9, v8, len) ^ 1;
                        if (((g_4ec038 & g_4ec03c | 2157976631) & 2174885367) + 3046089820 < 667105380)
                            v21 = 2776143907;
                        else
                            v21 = 3649065971;
                    }
                    else
                    {
                        v21 = 1143695416;
                        v28 = 0x3a87f962;
                        v30 = arm64g_calculate_condition(0x33, (unsigned long long)((g_4ec020 - g_4ec024 ^ 3631812332) + 3847924457 & 2880779011), 2199562482, 0);
                        if (!((char)v30))
                            goto LABEL_f195e;
                        goto LABEL_f195d;
                    }
                }
            }
            else
            {
                if (v2 > 1147375366)
                {
                    if (v2 > 1484738895)
                    {
                        if (v2 <= 1598399184 && v2 != 1484738896 && v2 == 1490898529)
                        {
                            _objc_msgSend(v9, v8, len);
                            v2 = 2776143907;
                            continue;
                        }
                        if (v2 == 1598399185)
                        {
                            sub_c8d40(1);
                            v2 = 1002963322;
                            continue;
                        }
                        if (v2 != 1796776561)
                        {
                            if (v2 != 1828956835)
                                continue;
                            v15 = sub_c046c();
                            if (1699939217 < (2999377627 + 133546810 * (g_4ec008 - g_4ec00c) ^ 1160402203))
                                v21 = 463153386;
                            else
                                v21 = 3583941340;
                        }
                        else
                        {
                            idx->field_0 = &g_600748;
                            idx->field_8 = 0xc0000000;
                            *((unsigned long long *)&idx->padding_10[0]) = 989608;
                            *((char **)&idx->padding_10[8]) = &g_4a1840;
                            idx->field_20 = a0;
                            _dispatch_async(&g_600770, idx);
LABEL_f164c:
                            v2 = 3699262707;
                            continue;
                        }
                    }
                    else if (1250130522 < v2)
                    {
                        if (v2 != 1250130523 && v2 == 1414233973)
                        {
                            v38 = 0x4010000000000000 + v5 * 0x4008000000000000;
                            v39 = arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v38, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(v38, 0x403e000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000) & 1)) & ((unsigned long long)(char)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(0x4010000000000000 + (unsigned long long)v5 * 0x4008000000000000, 0x403e000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                            sub_c92bc();
                            v2 = 2906710467;
                            continue;
                        }
                        v21 = 3699262707;
                        v22 = 2480536581;
                        v40 = arm64g_calculate_condition(19, (unsigned long long)v14, 0, 0);
                        if (!((char)v40))
                            goto LABEL_f1902;
                        goto LABEL_f1901;
                    }
                    else if (v2 != 1147375367)
                    {
                        if (v2 != 1204885206)
                            continue;
                        if (!v18)
                            v21 = 467343299;
                        else
                            v21 = 2282721630;
                    }
                    else
                    {
                        v6 = _objc_msgSend(v10, v8, &g_4e5e80);
                        v21 = 3816667775;
                        v26 = 3994781948;
                        v37 = arm64g_calculate_condition(131, (unsigned long long)((g_4ec048 - g_4ec04c ^ 4159960558) + 3378552272 & 3398655274), 1716658680, 0);
                        if (!((char)v37))
                            goto LABEL_f17b2;
                        goto LABEL_f17b1;
                    }
                }
                else
                {
                    if (1013179064 < v2)
                    {
                        if (1143695415 >= v2)
                        {
                            if (v2 == 1013179065)
                            {
LABEL_f1554:
                                v2 = 3581087590;
                                continue;
                            }
                            if (v2 != 1066357183)
                                continue;
                            v21 = 2776143907;
                            v26 = 1490898529;
                            v41 = arm64g_calculate_condition(131, (unsigned long long)(3786662677 * (g_4ec034 * g_4ec030 | 3671807705) ^ 2879217308), 1121766425, 0);
                            if (!((char)v41))
                                goto LABEL_f17b2;
                            goto LABEL_f17b1;
                        }
                        if (v2 != 1143695416)
                        {
                            if (v2 != 1146000520)
                                continue;
                            if ((359679660 * (g_4ec050 - g_4ec054 ^ 1006292324) | 1143593631) != 2298659313)
                                v21 = 2906710467;
                            else
                                v21 = 1414233973;
                        }
                        else
                        {
                            sub_c92bc(a0);
                            v21 = 0x3a87f962;
                            v26 = 2782274877;
                            v42 = arm64g_calculate_condition(131, (unsigned long long)(((unsigned int)(__ROL__(((g_4ec028 | g_4ec02c) + 2712631300) * 2018173281, 2)) & 3) + 1594509117), 3562209797, 0);
                            if ((char)v42)
                            {
LABEL_f17b1:
                                goto LABEL_f17b4;
                            }
                            else
                            {
LABEL_f17b2:
                                v21 = v26;
LABEL_f17b4:
                            }
                        }
                    }
                    else if (0x3a87f961 >= v2)
                    {
                        switch (v2)
                        {
                        case 467343299:
                            g_4e5e4d = g_4e5e40 ^ 0x11;
                            g_4e5e4e = g_4e5e41 ^ 217;
                            g_4e5e4f = g_4e5e42 ^ 23;
                            g_4e5e50 = g_4e5e43 ^ 0x44;
                            g_4e5e51 = g_4e5e44 ^ 15;
                            g_4e5e52 = ~(g_4e5e45);
                            g_4e5e53 = g_4e5e46 ^ 57;
                            g_4e5e54 = g_4e5e47 ^ 132;
                            g_4e5e55 = g_4e5e48 ^ 38;
                            g_4e5e56 = g_4e5e49 ^ 128;
                            g_4e5e57 = g_4e5e4a ^ 0x22;
                            g_4e5e58 = g_4e5e4b ^ 116;
                            g_4e5e59 = g_4e5e4c ^ 73;
                            v2 = 2282721630;
                            break;
                        case 603846774:
                            g_57dcb9 = 1;
                            v13 = _objc_retainAutoreleasedReturnValue(sub_e93a8(g_4a4068));
                            len = _objc_retainAutoreleasedReturnValue(sub_e93a8(g_4a4070));
                            *((char **)v16) = " \t`";
                            sub_e3174(1, v16);
                        }
                        continue;
                    }
                    else if (v2 != 0x3a87f962)
                    {
                        if (v2 != 1002963322)
                            continue;
                        _objc_release(v9);
                        _objc_release(v11);
                        _objc_release(v10);
                        _objc_release(len);
                        _objc_release(v13);
                        goto LABEL_f164c;
                    }
                    else
                    {
                        sub_c92bc(a0);
                        v2 = 1143695416;
                        continue;
                    }
                }
            }
LABEL_f1960:
            v2 = v21;
            goto LABEL_f1960;
        }
        v27 = arm64g_calculate_condition(131, (unsigned long long)(3889385612 + 3986403526 * ((unsigned int)(__ROL__((g_4ec058 - g_4ec05c) * 916046433, 6)) & 63)), 3168648523, 0);
        if ((char)v27)
            goto LABEL_f17b1;
        else
            goto LABEL_f17b2;
    }
}
