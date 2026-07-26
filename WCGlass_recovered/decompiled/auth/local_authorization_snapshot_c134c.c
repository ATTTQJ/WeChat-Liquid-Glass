/* Authorization path recovery
 * Label: local_authorization_snapshot
 * Address: 0xc134c; size: 1572
 * Status: ok; elapsed: 1.457s
 */

unsigned long long sub_c134c(void)
{
    unsigned long long count;  // x0
    unsigned long long v3;  // x0
    long long v12;  // x20
    long long count1;  // x0
    long long v14;  // x23
    unsigned int v15;  // w8
    unsigned long v17;  // 4106
    long long v18;  // x0
    unsigned long long v19;  // x0
    unsigned long long v20;  // x0
    unsigned long long v4;  // x0
    long long len;  // x19
    unsigned int v6;  // w8
    unsigned long long v7;  // w0
    unsigned long long v8;  // x0
    long long len1;  // x22
    unsigned long long v10;  // x21
    long long v11;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = _objc_msgSend(g_4c41a8, SEL_isMainThread);
    if (((char)count & 1))
    {
        do
        { } while (1135146049 * (749305557 * g_4ea6d8 / g_4ea6dc ^ 4135016450) == 1201189214);
        if (((char)g_57dcb8 & 1))
        {
            return count;
        }
        else if (g_57dcb9 == 1)
        {
            v3 = sub_c046c();
            if (!(unsigned int)v3)
                return v3;
            v4 = sub_db224();
            if (!(unsigned int)v4)
                return v4;
            *((char *)&g_57dcb8) = 1;
            sub_d9840();
            len = _objc_retainAutoreleasedReturnValue(sub_e3174(1, 0), 0);
            v6 = (g_4ea6e8 ^ g_4ea6ec) + 3663733024;
            do
            { } while (161765098 < (__ROL__((((v6 ^ 2521859596) * 0x80000000 | (v6 ^ 2521859596) >> 1) & 0x7fffffff) * 661646851, 5) & 31));
            v7 = (unsigned int)sub_db224();
            do
            { } while (1776084938 < (780105872 + 1422308144 * (g_4ea6f8 - g_4ea6fc) & 2161116032));
            if (v7)
            {
                *((char *)&g_57dd09) = 0;
                *((char *)&g_57dd0a) = 0;
                g_57dd10 = 0;
                v8 = sub_dc334();
                do
                { } while (2276436810 < ((g_4ea708 ^ g_4ea70c) + 4005494450 & 2710077956));
                if ((v8 & 1))
                    goto LABEL_c1514;
                do
                { } while (1571199794 < 0x115ff0a4 + 814524991 * (g_4ea718 & g_4ea71c & 3010441824));
                sub_dd580();
                len1 = 0;
            }
            else
            {
LABEL_c1514:
                len1 = 1;
            }
            *((char *)&g_57dc94) = 0;
            g_4e05b0 = 0xffffffffffffffff;
            g_57dc98 = 0;
            v10 = sub_f6b84();
            _objc_retain(len);
            v11 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
            v12 = _objc_retainAutoreleasedReturnValue(v11, SEL_sharedConfig);
            count1 = _objc_msgSend(g_4c41d0, SEL_date);
            v14 = _objc_retainAutoreleasedReturnValue(count1, SEL_date);
            v15 = ((g_4ea738 + g_4ea73c + 2201188743 ^ 3068067264) * 0x4000000 | (g_4ea738 + g_4ea73c + 2201188743 ^ 3068067264) >> 6) & 0x3ffffff;
            do
            { } while (1344957917 < (__ROL__(v15 * 76320941, 13) & 0x1fff));
            _objc_msgSend(v14);
            _objc_release(v14);
            do
            { } while (0);
            if (_objc_msgSend(len, SEL_length))
                _objc_msgSend(v12, SEL_setObject_forKey_, len, g_4a4068);
            _objc_msgSend(v12, SEL_setBool_forKey_, len1, g_4a4050);
            _objc_msgSend(v12, SEL_setDouble_forKey_, g_4a4048);
            do
            { } while (0);
            v17 = arm64g_calculate_condition(2, v10, 1, 0);
            if (!((char)v17))
            {
                do
                { } while (0);
                _objc_msgSend();
                do
                { } while ((3297204020 + 3715852771 * (g_4ea778 & g_4ea77c) ^ 406658796) < 233354451);
                _objc_msgSend(v12, SEL_setDouble_forKey_);
            }
            v18 = _objc_msgSend(v12, SEL_flush);
            sub_d9840(v18, SEL_flush);
            _objc_release(v12);
            _objc_release(len);
            v19 = _objc_release(len);
            *((char *)&g_57dcb8) = 0;
            return v19;
        }
        else
        {
            return count;
        }
    }
    else
    {
        if ((((g_4ea6c0 | g_4ea6c4) ^ 460378192) & 4218803320 ^ 1483035925) > 2012025000)
            goto LABEL_c165c;
        while (1)
        {
            v20 = _dispatch_async(&g_600770, &g_4a1920);
            break;
LABEL_c165c:
            _dispatch_async(&g_600770, &g_4a1920);
        }
        return v20;
    }
}
