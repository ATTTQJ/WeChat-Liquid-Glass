/* Hook replacement 188/418
 * Selectors: SEL_movePath_to_
 * Address: 0x38c4c; original size: 2708 bytes
 * Status: ok; elapsed: 1.678s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_38c4c(unsigned long long a0, unsigned long long a1, long long a2, long long a3)
{
    unsigned int v6;  // w8
    unsigned int v7;  // w8
    long long count;  // x0
    long long v9;  // x0
    unsigned long long count1;  // x0
    long long v11;  // x21
    unsigned long long count2;  // x0
    unsigned long long v13;  // x0
    unsigned long long v14;  // x21
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    /* unsupported instruction */
    if (!g_57c014)
    {
        if (4054887816 * (g_4cd9e0 & g_4cd9e4 & 288440648) < 1222297305)
            goto LABEL_38e48;
        while (1)
        {
            g_4cd930 = g_4cd910 ^ 199;
            g_4cd931 = g_4cd911 ^ 0x33;
            g_4cd932 = g_4cd912 ^ 197;
            g_4cd933 = g_4cd913 ^ 96;
            g_4cd934 = g_4cd914 ^ 178;
            g_4cd935 = g_4cd915 ^ 37;
            g_4cd936 = g_4cd916 ^ 198;
            g_4cd937 = g_4cd917;
            g_4cd938 = g_4cd918 ^ 140;
            g_4cd939 = g_4cd919 ^ 235;
            g_4cd93a = g_4cd91a ^ 168;
            g_4cd93b = g_4cd91b ^ 101;
            g_4cd93c = g_4cd91c ^ 171;
            g_4cd93d = g_4cd91d ^ 0xdd;
            g_4cd93e = g_4cd91e ^ 158;
            g_4cd93f = g_4cd91f ^ 233;
            g_4cd940 = g_4cd920 ^ 12;
            g_4cd941 = g_4cd921 ^ 212;
            g_4cd905 = g_4cd900 ^ 177;
            g_4cd906 = g_4cd901 ^ 137;
            g_4cd907 = g_4cd902 ^ 205;
            g_4cd908 = g_4cd903 ^ 58;
            g_4cd909 = g_4cd904 ^ 241;
            break;
LABEL_38e48:
            g_4cd930 = g_4cd910 ^ 199;
            g_4cd931 = g_4cd911 ^ 0x33;
            g_4cd932 = g_4cd912 ^ 197;
            g_4cd933 = g_4cd913 ^ 96;
            g_4cd934 = g_4cd914 ^ 178;
            g_4cd935 = g_4cd915 ^ 37;
            g_4cd936 = g_4cd916 ^ 198;
            g_4cd937 = g_4cd917;
            g_4cd938 = g_4cd918 ^ 140;
            g_4cd939 = g_4cd919 ^ 235;
            g_4cd93a = g_4cd91a ^ 168;
            g_4cd93b = g_4cd91b ^ 101;
            g_4cd93c = g_4cd91c ^ 171;
            g_4cd93d = g_4cd91d ^ 0xdd;
            g_4cd93e = g_4cd91e ^ 158;
            g_4cd93f = g_4cd91f ^ 233;
            g_4cd940 = g_4cd920 ^ 12;
            g_4cd941 = g_4cd921 ^ 212;
            g_4cd905 = g_4cd900 ^ 177;
            g_4cd906 = g_4cd901 ^ 137;
            g_4cd907 = g_4cd902 ^ 205;
            g_4cd908 = g_4cd903 ^ 58;
            g_4cd909 = g_4cd904 ^ 241;
        }
    }
    v6 = g_4cd9f0 / g_4cd9f4;
    if ((3665722974 | ((__ROL__(v6 * 91179893, 32) + (v6 - __ROL__(v6 * 91179893, 32) >> 1)) * 2 | __ROL__(v6 * 91179893, 32) + (v6 - __ROL__(v6 * 91179893, 32) >> 1) >> 31) & 1) < 2952802985)
        goto LABEL_39048;
    while (1)
    {
        v7 = g_4cd9f8 + g_4cd9fc;
        /* unsupported instruction */
        g_57c014 = 1;
        _objc_retain(a2);
        _objc_retain(a3);
        _objc_retain(a2);
        if (445657906 + 938825382 * (v7 & 414108154) <= 3439590269)
            break;
LABEL_39048:
        /* unsupported instruction */
        g_57c014 = 1;
        _objc_retain(a2);
        _objc_retain(a3);
        _objc_retain(a2);
    }
    count = _objc_msgSend(g_4c40b8, SEL_class);
    v2 = a0;
    if (((char)_objc_msgSend(a2, SEL_isKindOfClass_, count) & 1))
    {
        v9 = _objc_retain(a2);
        count1 = _objc_msgSend(v9, SEL_length);
        do
        { } while (3867538465 < (1662366382 * (g_4cda08 & g_4cda0c) ^ 363426861));
        if (!count1)
        {
            _objc_release(a2);
            goto LABEL_39204;
        }
        do
        { } while (0);
        if (_objc_msgSend(a2, SEL_rangeOfString_, &g_4cd9b0) == 0x7fffffffffffffff)
        {
            v0 = _objc_msgSend(a2, SEL_rangeOfString_, &g_4cd970);
            v1 = a1;
            v3 = SEL_isKindOfClass_;
            if ((g_4cda30 & g_4cda34 & 1640968653) + 2919667498 > 3414946822)
            {
                _objc_release(a2);
                _objc_release(a2);
            }
            do
            {
                _objc_release(a2);
                _objc_release(a2);
            } while (3859375613 < 2261059825 * (247873053 + g_4cda3c * g_4cda38 & 3964754540));
            if (v0 == 0x7fffffffffffffff)
                goto LABEL_392a0;
        }
        else
        {
            v11 = a2;
            goto LABEL_39628;
        }
    }
    else
    {
LABEL_39204:
        v3 = SEL_isKindOfClass_;
        v1 = a1;
        if (2494166267 * ((g_4cda40 | g_4cda44) & 4241801352) == 3603251599)
            _objc_release(a2);
        do
        {
            _objc_release(a2);
        } while (2521884026 < (g_4cda48 + g_4cda4c + 2696706899 | 1002920660) + 1395727340);
LABEL_392a0:
        if (0x97f9f203 > ((g_4cda50 ^ g_4cda54) + 1876520836 & 794567458 ^ 2516308181))
            _objc_retain(a3);
        do
        {
            _objc_retain(a3);
        } while (0);
        _objc_msgSend(g_4c40b8, SEL_class);
        do
        { } while (2338738744 + 4103125290 * (g_4cda68 & g_4cda6c) < 1854155551);
        if (!((char)_objc_msgSend(a3) & 1))
        {
LABEL_39538:
            do
            {
                _objc_release(a3);
            } while (1112385717 * (g_4cdaa8 + g_4cdaac) == 2523153517);
LABEL_395c4:
            do
            { } while (0);
            v14 = g_57c008();
            _objc_release(a3);
            _objc_release(a2);
            return v14;
        }
        if (4152874998 + 3451557690 * (g_4cda70 & g_4cda74) > 3286472602)
            _objc_retain(a3);
        do
        {
            _objc_retain(a3);
        } while (655836741 + 1910488055 * (g_4cda78 / g_4cda7c | 1001067013) < 1828818610);
        if (!_objc_msgSend(a3, SEL_length))
        {
            _objc_release(a3);
            goto LABEL_39538;
        }
        do
        { } while (((g_4cda8c * g_4cda88 & 73046427) + 2108116125 ^ 2352654249) < 680619763);
        count2 = _objc_msgSend(a3, SEL_rangeOfString_, &g_4cd9b0);
        do
        { } while (3773083290 < ((g_4cda98 | g_4cda9c) & 4092888160) + 4011088307);
        if (count2 == 0x7fffffffffffffff)
        {
            v13 = _objc_msgSend(a3, SEL_rangeOfString_, &g_4cd970);
            _objc_release(a3);
            _objc_release(a3);
            if (v13 == 0x7fffffffffffffff)
                goto LABEL_395c4;
        }
        else
        {
            v11 = a3;
LABEL_39628:
            do
            {
                _objc_release(v11);
                _objc_release(v11);
            } while (853638549 < (__ROL__((137920207 + 3375520925 * (g_4cdac8 + g_4cdacc)) * 761633679, 4) & 15));
        }
    }
    _objc_release(a3);
    _objc_release(a2);
    return 0;
}
