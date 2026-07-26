/* Hook replacement 347/418
 * Selectors: SEL_didMoveToWindow
 * Address: 0x62498; original size: 972 bytes
 * Status: ok; elapsed: 0.844s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void sub_62498(long long a0)
{
    long long count;  // x0
    char v3;  // x0
    unsigned long long v12;  // x25
    char v14;  // x23
    long long count1;  // x0
    char v16;  // x22
    long long count2;  // x0
    long long v18;  // x0
    long long v19;  // x0
    char v20;  // x0
    long long v21;  // x0
    long long v4;  // x0
    long long v22;  // x24
    char v23;  // w0
    long long v24;  // x0
    char v5;  // x0
    char v6;  // x25
    unsigned long long v7;  // x25
    long long v8;  // x0
    long long v9;  // x0
    char v10;  // x24
    char v11;  // x20
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57cbcc)
    {
        g_4d2480 = g_4d2460 ^ 182;
        g_4d2481 = g_4d2461 ^ 157;
        g_4d2482 = g_4d2462 ^ 60;
        g_4d2483 = g_4d2463 ^ 151;
        g_4d2484 = g_4d2464 ^ 138;
        g_4d2485 = g_4d2465 ^ 74;
        g_4d2486 = g_4d2466 ^ 228;
        g_4d2487 = g_4d2467 ^ 84;
        g_4d2488 = g_4d2468 ^ 0xdd;
        g_4d2489 = g_4d2469 ^ 160;
        g_4d248a = g_4d246a ^ 239;
        g_4d248b = g_4d246b ^ 42;
        g_4d248c = g_4d246c ^ 0x88;
        g_4d248d = g_4d246d ^ 155;
        g_4d248e = g_4d246e ^ 0xcc;
        g_4d248f = g_4d246f ^ 167;
        g_4d2490 = g_4d2470 ^ 165;
        g_4d2491 = g_4d2471 ^ 150;
        g_4d2492 = g_4d2472 ^ 233;
    }
    /* unsupported instruction */
    g_57cbcc = 1;
    g_57cbb0(a0);
    count = _objc_msgSend(a0, SEL_window);
    v3 = _objc_retainAutoreleasedReturnValue(count, SEL_window);
    _objc_release(v3);
    if (!v3)
    {
        return;
    }
    else if ((g_582f88 & 1))
    {
        v4 = _objc_msgSend(a0, SEL_nextResponder);
        v5 = _objc_retainAutoreleasedReturnValue(v4, SEL_nextResponder);
        if (v5)
        {
            v6 = 0;
            while (1)
            {
                v7 = v6;
                v8 = _objc_msgSend(g_4c40e0, SEL_class);
                if (((char)_objc_msgSend(v5, SEL_isKindOfClass_, v8) & 1))
                    break;
                v9 = _objc_msgSend(v5, SEL_nextResponder);
                v10 = _objc_retainAutoreleasedReturnValue(v9, SEL_nextResponder);
                _objc_release(v5);
                v11 = 0;
                if (!v10 || !((v5 = v10, v12 = v7 + 1, v6 = (char)(v7 + 1), v7 < 11)))
                    goto LABEL_62794;
            }
            _objc_retain(_objc_retain(v5));
            v11 = v5;
            v14 = _NSClassFromString(&g_4d24c0);
            if (v14)
            {
                count1 = _objc_msgSend(v11, SEL_navigationController);
                v16 = _objc_retainAutoreleasedReturnValue(count1, SEL_navigationController);
                if (v16)
                {
                    count2 = _objc_msgSend(v16, SEL_viewControllers);
                    v18 = _objc_retainAutoreleasedReturnValue(count2, SEL_viewControllers);
                    v19 = _objc_msgSend(v18, SEL_firstObject);
                    v20 = _objc_retainAutoreleasedReturnValue(v19, SEL_firstObject);
                    _objc_release(v20);
                    _objc_release(v18);
                    if (v20 != v5)
                    {
                        _objc_release(v16);
                        goto LABEL_62790;
                    }
                    else
                    {
                        v21 = _objc_msgSend(v16, SEL_parentViewController);
                        v22 = _objc_retainAutoreleasedReturnValue(v21, SEL_parentViewController);
                        v23 = _objc_msgSend(v22, SEL_isKindOfClass_, v14);
                    }
                }
                else
                {
                    v24 = _objc_msgSend(v11, SEL_parentViewController);
                    v22 = _objc_retainAutoreleasedReturnValue(v24, SEL_parentViewController);
                    v23 = _objc_msgSend(v22, SEL_isKindOfClass_, v14);
                }
                _objc_release(v22);
                _objc_release(v16);
                _objc_release(v11);
                if (v23 && !((char)sub_62c60(v11) & 1) && !((char)sub_62ea4(v11) & 1))
                    sub_22afe4(v11);
                _objc_release(v11);
                _objc_release();
                return;
            }
LABEL_62790:
            v10 = v11;
        }
        else
        {
            v11 = 0;
            v10 = 0;
        }
LABEL_62794:
        _objc_release(v11);
        _objc_release(v10);
        _objc_release();
        return;
    }
    else
    {
        return;
    }
}
