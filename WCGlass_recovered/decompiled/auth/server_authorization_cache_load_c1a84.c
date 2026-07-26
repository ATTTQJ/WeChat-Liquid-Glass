/* Authorization path recovery
 * Label: server_authorization_cache_load
 * Address: 0xc1a84; size: 2440
 * Status: ok; elapsed: 2.68s
 */

void sub_c1a84(void)
{
    unsigned long long v15;  // d0
    long long v24;  // x0
    unsigned long v25;  // x0
    unsigned long v26;  // x8
    long long count;  // x0
    long long v28;  // x0
    unsigned long v29;  // x0
    unsigned long v30;  // x8
    long long count1;  // x0
    long long v32;  // x0
    unsigned long v33;  // 4108
    unsigned int v16;  // w8
    unsigned int v34;  // w8
    long long count2;  // x0
    long long v36;  // x21
    long long v37;  // x0
    long long v38;  // x0
    long long v39;  // x0
    long long v40;  // x0
    unsigned long v41;  // x0
    unsigned long v42;  // x8
    long long v43;  // x0
    unsigned int v17;  // w9
    long long v44;  // x0
    unsigned long v45;  // x0
    unsigned long v46;  // x8
    long long v47;  // x0
    long long v48;  // x0
    char v49;  // x0
    long long v50;  // x0
    long long v51;  // x21
    long long v52;  // x0
    long long v53;  // x22
    unsigned long v18;  // 4108
    long long v54;  // x0
    long long v55;  // x0
    long long v56;  // x0
    unsigned int v57;  // w9
    unsigned long v58;  // 4172
    unsigned long long v59;  // cc_dep1
    unsigned long v60;  // 4115
    unsigned int v19;  // w22
    long long v20;  // x0
    long long v21;  // x0
    long long v22;  // x0
    long long v23;  // x0
    char v0;  // [bp-0xc2]
    char v1;  // [bp-0xc1]
    long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb2]
    char v4;  // [bp-0xb1]
    long long v5;  // [bp-0xb0]
    long long v6;  // [bp-0xa8]
    long long v7;  // [bp-0xa0]
    long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    long long v10;  // [bp-0x88]
    char *v11;  // [bp-0x80]
    unsigned int v12;  // [bp-0x74]
    char *v13;  // [bp-0x10]
    char v14;  // [bp+0x0]

    v13 = &v14;
    v12 = 1463856425;
    v11 = &v12;
    while (1)
    {
        if (v12 <= 156099780)
        {
            if (v12 > 2939969769)
            {
                if (3766011033 >= v12)
                {
                    if (v12 == 3351711992)
                    {
                        v49 = _objc_msgSend(v2, v6);
                        v12 = 2801415682;
                        v0 = v49;
                        continue;
                    }
                    else if (v12 == 3614045488)
                    {
                        g_57dcba = 1;
                        count2 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
                        v36 = _objc_retainAutoreleasedReturnValue(count2, SEL_sharedConfig);
                        v37 = _objc_msgSend(g_4c41d0, SEL_date);
                        v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_date);
                        _objc_msgSend(v38, SEL_timeIntervalSince1970);
                        _objc_release(v38);
                        _objc_msgSend(v36, SEL_doubleForKey_, g_4a4008);
                        g_57dc48 = v15;
                        _objc_msgSend(v36, SEL_doubleForKey_, g_4a4010);
                        g_57dc50 = v15;
                        v39 = _objc_msgSend(v36, SEL_objectForKey_, g_4a3ff8);
                        v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_objectForKey_, g_4a3ff8);
                        v41 = _objc_retainAutoreleasedReturnValue(sub_c6c9c(v40));
                        v42 = g_57dc20;
                        g_57dc20 = v41;
                        _objc_release(v42);
                        _objc_release(v40);
                        v43 = _objc_msgSend(v36, SEL_objectForKey_, g_4a4000);
                        v44 = _objc_retainAutoreleasedReturnValue(v43, SEL_objectForKey_, g_4a4000);
                        v45 = _objc_retainAutoreleasedReturnValue(sub_c6c9c(v44));
                        v46 = g_57dc28;
                        g_57dc28 = v45;
                        _objc_release(v46);
                        _objc_release(v44);
                        v47 = _objc_msgSend(v36, SEL_objectForKey_, g_4a4038);
                        v48 = _objc_retainAutoreleasedReturnValue(v47, SEL_objectForKey_, g_4a4038);
                        _objc_msgSend(v48, SEL_respondsToSelector_, SEL_boolValue);
                        v12 = 1861806566;
                        continue;
                    }
                    else
                    {
                        if (v12 == 2939969770)
                            return;
                        continue;
                    }
                }
                else
                {
                    if (v12 == 3766011034)
                    {
                        g_4e05b8 = v1;
                        v56 = _objc_msgSend(v10, v8, g_4a4040);
                        v2 = _objc_retainAutoreleasedReturnValue(v56, v8, g_4a4040);
                        if (_objc_msgSend(v2, v5, v6))
                            v57 = 3351711992;
                        else
                            v57 = 2801415682;
                        v12 = v57;
                        v0 = 0;
                        continue;
                    }
                    else if (v12 == 0xe652e7fc)
                    {
                        v50 = _objc_msgSend(v10, v8, g_4a4028);
                        v51 = _objc_retainAutoreleasedReturnValue(v50, v8, g_4a4028);
                        v52 = _objc_msgSend(v10, v8, g_4a4030);
                        v53 = _objc_retainAutoreleasedReturnValue(v52, v8, g_4a4030);
                        v54 = _objc_msgSend(g_4c40b8, SEL_class);
                        _objc_storeStrong();
                        v55 = _objc_msgSend(g_4c40b8, SEL_class);
                        _objc_storeStrong();
                        _objc_release(v53);
                        _objc_release(v51);
                        _objc_release(v2);
                        _objc_release(v7);
                        _objc_release(v10);
                        v12 = 1871784205;
                        continue;
                    }
                }
            }
            else
            {
                if (2644938994 >= v12)
                {
                    if (v12 != 2341487077)
                    {
                        if (v12 != 2372062715)
                            continue;
                        if ((1586125638 * (g_4ea7b0 & g_4ea7b4) | 565436147) == 2652496188)
                            v16 = 1479276899;
                        else
                            v16 = 2644938995;
                        goto LABEL_c23b8;
                    }
                    else
                    {
                        v12 = 3766011034;
                        v1 = v3;
                        continue;
                    }
                }
                else
                {
                    if (v12 != 2644938995)
                    {
                        if (v12 != 2801415682)
                            continue;
                        g_5830b8 = v0;
                        v15 = g_57dc48;
                        v58 = arm64g_calculate_condition(144, (((((unsigned long long)(char)(CmpF(g_57dc48, v9 + 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(g_57dc48, v9 + 0x403e000000000000) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(g_57dc48, v9 + 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(g_57dc48, v9 + 0x403e000000000000) & 1)) & ((unsigned long long)(char)(CmpF(g_57dc48, v9 + 0x403e000000000000)) >> 5 & 3 | (unsigned long long)(CmpF(g_57dc48, v9 + 0x403e000000000000) & 1)) >> 1 & 1)) * 0x10000000, 0, 0);
                        if ((char)v58)
                            v59 = ((((CmpF(g_57dc48, 0) >> 5 & 3 | CmpF(g_57dc48, 0) & 1) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - ((CmpF(g_57dc48, 0) >> 5 & 3 | CmpF(g_57dc48, 0) & 1) & (CmpF(g_57dc48, 0) >> 5 & 3 | CmpF(g_57dc48, 0) & 1) >> 1 & 1)) * 0x10000000;
                        else
                            v59 = 0x40000000;
                        v60 = arm64g_calculate_condition(208, v59, 0, 0);
                        if ((char)v60)
                            v16 = 0xe652e7fc;
                        else
                            v16 = 1306585538;
                        goto LABEL_c23b8;
                    }
                    else
                    {
                        v3 = _objc_msgSend(v7, v6);
                        if (0xff46daa4 * (__ROL__((g_4ea7b8 ^ g_4ea7bc) * 3108958189, 1) & 1 | 658418758) == 3099230477)
                            v16 = 2644938995;
                        else
                            v16 = 2341487077;
                        goto LABEL_c23b8;
                    }
                }
            }
        }
        if (v12 <= 1384191566)
        {
            if (613267000 >= v12)
            {
                if (v12 != 156099781)
                {
                    if (v12 != 208928785)
                        continue;
                    if (((g_4ea7a0 - g_4ea7a4 | 1073774612) & 1090552892) < 923703218)
                        v16 = 3614045488;
                    else
                        v16 = 1861806566;
                    goto LABEL_c23b8;
                }
                else
                {
                    if (v4)
                        v34 = 2372062715;
                    else
                        v34 = 3766011034;
                    v12 = v34;
                    v1 = 1;
                    continue;
                }
            }
            else
            {
                if (v12 == 613267001)
                {
                    if (0x5ff73fb < ((__ROL__((g_4ea7c8 & g_4ea7cc) * 0x72aaff85, 3) & 7 | 3747934808) ^ 2583535539))
                        v16 = 2939969770;
                    else
                        v16 = 1384191567;
                    goto LABEL_c23b8;
                }
                else if (v12 == 1306585538)
                {
                    g_4e05b8 = 1;
                    v12 = 0xe652e7fc;
                    continue;
                }
            }
        }
        if (v12 <= 1479276898)
        {
            if (v12 != 1384191567)
            {
                if (v12 != 1463856425)
                    continue;
                if (g_57dcba)
                    v16 = 1871784205;
                else
                    v16 = 208928785;
                goto LABEL_c23b8;
            }
            else
            {
                v12 = 613267001;
                continue;
            }
        }
        if (v12 == 1479276899)
        {
            _objc_msgSend(v7, v6);
            v12 = 2644938995;
            continue;
        }
        switch (v12)
        {
        case 1861806566:
            v19 = (g_4ea7a8 ^ g_4ea7ac) + 1272703383 & 82484443;
            g_57dcba = 1;
            v20 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
            v10 = _objc_retainAutoreleasedReturnValue(v20, SEL_sharedConfig);
            v21 = _objc_msgSend(g_4c41d0, SEL_date);
            v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_date);
            _objc_msgSend(v22, SEL_timeIntervalSince1970);
            v9 = v15;
            _objc_release(v22);
            _objc_msgSend(v10, SEL_doubleForKey_, g_4a4008);
            g_57dc48 = v15;
            _objc_msgSend(v10, SEL_doubleForKey_, g_4a4010);
            g_57dc50 = v15;
            v8 = SEL_objectForKey_;
            v23 = _objc_msgSend(v10, SEL_objectForKey_, g_4a3ff8);
            v24 = _objc_retainAutoreleasedReturnValue(v23, SEL_objectForKey_, g_4a3ff8);
            v25 = _objc_retainAutoreleasedReturnValue(sub_c6c9c(v24));
            v26 = g_57dc20;
            g_57dc20 = v25;
            _objc_release(v26);
            _objc_release(v24);
            count = _objc_msgSend(v10, v8, g_4a4000);
            v28 = _objc_retainAutoreleasedReturnValue(count, v8, g_4a4000);
            v29 = _objc_retainAutoreleasedReturnValue(sub_c6c9c(v28));
            v30 = g_57dc28;
            g_57dc28 = v29;
            _objc_release(v30);
            _objc_release(v28);
            count1 = _objc_msgSend(v10, v8, g_4a4038);
            v32 = _objc_retainAutoreleasedReturnValue(count1, v8, g_4a4038);
            v6 = SEL_boolValue;
            v7 = v32;
            v5 = SEL_respondsToSelector_;
            v4 = _objc_msgSend(v7, SEL_respondsToSelector_, SEL_boolValue);
            v16 = 3614045488;
            v17 = 156099781;
            v33 = arm64g_calculate_condition(3, (unsigned long long)v19, 4032911578, 0);
            if ((char)v33)
            {
LABEL_c23b5:
                goto LABEL_c23b8;
            }
            else
            {
LABEL_c23b6:
                v16 = v17;
LABEL_c23b8:
                v12 = v16;
                goto LABEL_c23b8;
            }
            break;
        default:
            if (v12 != 1871784205)
                continue;
            v16 = 1384191567;
            v17 = 613267001;
            v18 = arm64g_calculate_condition(3, 3252194842 * (unsigned long long)((g_4ea7c0 | g_4ea7c4) & 1359030855) & 0xffffffff, 1006881185, 0);
            if (!((char)v18))
                goto LABEL_c23b6;
            goto LABEL_c23b5;
        }
    }
}
