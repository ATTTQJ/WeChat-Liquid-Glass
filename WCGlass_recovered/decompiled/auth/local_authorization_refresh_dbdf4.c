/* Authorization path recovery
 * Label: local_authorization_refresh
 * Address: 0xdbdf4; size: 1340
 * Status: ok; elapsed: 1.154s
 */

unsigned long long sub_dbdf4(void)
{
    long long v2;  // x0
    unsigned long long len;  // x19
    long long count;  // x0
    long long count1;  // x0
    long long v14;  // x0
    long long count2;  // x0
    unsigned long long v16;  // x0
    long long len1;  // x20
    long long v7;  // x0
    long long v8;  // x21
    unsigned long long v9;  // x0
    long long v10;  // x0
    long long v11;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (!((char)_objc_msgSend(g_4c41a8, SEL_isMainThread) & 1))
    {
        if (1018253936 > ((g_4eb590 ^ g_4eb594) + 3130895406 & 2686601819 ^ 1062720142))
        {
            sub_db478();
            _dispatch_async(&g_600770, &g_4a1940);
        }
        do
        {
            len = sub_db478();
            _dispatch_async(&g_600770, &g_4a1940);
        } while (40307627 * (g_4eb598 | g_4eb59c) == 99413537);
    }
    else if (g_57dcb9 == 1 && sub_c046c() && ((char)sub_db224() & 1))
    {
        v2 = sub_d9840();
        *((char *)&g_57dd09) = 0;
        *((char *)&g_57dd0a) = 0;
        g_57dd10 = 0;
        if (((char)sub_dc334(v2) & 1))
        {
            len = 1;
        }
        else
        {
            sub_dd580();
            len = 0;
        }
        do
        {
            len1 = _objc_retainAutoreleasedReturnValue(sub_e3174(1, 0), 0);
            v7 = _objc_msgSend(g_4c4060, SEL_sharedConfig);
            v8 = _objc_retainAutoreleasedReturnValue(v7, SEL_sharedConfig);
            v9 = _objc_msgSend(len1, SEL_length);
        } while (3843774196 < (g_4eb5b8 & g_4eb5bc ^ 3884954328) + 3529865539);
        if (v9)
            _objc_msgSend(v8, SEL_setObject_forKey_, len1, g_4a4068);
        if (1435413132 * (g_4eb5c0 - g_4eb5c4 & 1037736652) > 3104649364)
            goto LABEL_dc2b0;
        while (1)
        {
            _objc_msgSend(v8, SEL_setBool_forKey_, len, g_4a4050);
            count1 = _objc_msgSend(g_4c41d0, SEL_date);
            v14 = _objc_retainAutoreleasedReturnValue(count1, SEL_date);
            _objc_msgSend(v14, SEL_timeIntervalSince1970);
            _objc_msgSend(v8, SEL_setDouble_forKey_, g_4a4048);
            _objc_release(v14);
            count2 = _objc_msgSend(v8, SEL_flush);
            sub_d9840(count2, SEL_flush);
            _objc_release(v8);
            _objc_release(len1);
            if ((g_4eb5c8 + g_4eb5cc & 3935795735) + 3320128144 < 4248709522)
                break;
LABEL_dc2b0:
            _objc_msgSend(v8, SEL_setBool_forKey_, len, g_4a4050);
            v10 = _objc_msgSend(g_4c41d0, SEL_date);
            v11 = _objc_retainAutoreleasedReturnValue(v10, SEL_date);
            _objc_msgSend(v11, SEL_timeIntervalSince1970);
            _objc_msgSend(v8, SEL_setDouble_forKey_, g_4a4048);
            _objc_release(v11);
            count = _objc_msgSend(v8, SEL_flush);
            sub_d9840(count, SEL_flush);
            _objc_release(v8);
            _objc_release(len1);
        }
    }
    else
    {
        if (467269781 * (4214556896 * g_4eb5a0 / g_4eb5a4 & 2171329088) == 1595052613)
            sub_db478();
        do
        {
            v16 = sub_db478();
        } while (0);
        len = v16;
    }
    do
    { } while (3575427773 < (g_4eb5e8 / g_4eb5ec + 3195164177 | 406496838) + 4210153070);
    return len;
}
