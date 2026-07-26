/* Authorization path recovery
 * Label: config_set_bool_for_key
 * Address: 0x28c228; size: 2268
 * Status: ok; elapsed: 1.58s
 */

void sub_28c228(long long a0, unsigned long a1, unsigned int a2, long long a3)
{
    unsigned long long v11;  // x26
    unsigned long long v12;  // x25
    long long v21;  // x21
    unsigned long v22;  // x22
    long long count;  // x0
    long long len;  // x23
    unsigned long v25;  // x24
    long long count1;  // x0
    long long len1;  // x23
    unsigned long long v28;  // w0
    long long count2;  // x0
    long long len2;  // x23
    unsigned long long v13;  // x24
    long long v31;  // x0
    long long v32;  // x21
    unsigned long long v14;  // x23
    unsigned long long v15;  // x22
    unsigned long long v16;  // x21
    unsigned long long v17;  // x20
    unsigned long long v18;  // x19
    unsigned long long v19;  // x30
    long long v20;  // x0
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = v11;
    v1 = v12;
    v2 = v13;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v7 = v18;
    v8 = &v10;
    v9 = v19;
    /* unsupported instruction */
    if (!g_57fcac)
    {
        g_52d510 = g_52d4f0 ^ 166;
        g_52d511 = g_52d4f1 ^ 0x77;
        g_52d512 = g_52d4f2 ^ 243;
        g_52d513 = g_52d4f3 ^ 37;
        g_52d514 = g_52d4f4 ^ 229;
        g_52d515 = g_52d4f5 ^ 37;
        g_52d516 = g_52d4f6 ^ 224;
        g_52d517 = g_52d4f7 ^ 157;
        g_52d518 = g_52d4f8 ^ 37;
        g_52d519 = g_52d4f9 ^ 230;
        g_52d51a = g_52d4fa ^ 208;
        g_52d51b = g_52d4fb ^ 236;
        g_52d51c = g_52d4fc ^ 242;
        g_52d51d = g_52d4fd ^ 107;
        g_52d51e = g_52d4fe ^ 252;
        g_52d51f = g_52d4ff ^ 89;
        g_52d520 = g_52d500 ^ 14;
        g_52d521 = g_52d501 ^ 151;
        g_52d522 = g_52d502 ^ 161;
        g_52d523 = g_52d503 ^ 0x22;
        g_52d524 = g_52d504 ^ 54;
        g_52d525 = g_52d505 ^ 86;
        g_52d526 = g_52d506 ^ 240;
        g_52d527 = g_52d507 ^ 90;
        g_52d528 = g_52d508 ^ 114;
        g_52d529 = g_52d509 ^ 244;
        g_52d52a = g_52d50a ^ 190;
        g_52d52b = g_52d50b ^ 92;
        g_52d52c = g_52d50c ^ 253;
        g_52d550 = g_52d530 ^ 207;
        g_52d551 = g_52d531 ^ 155;
        g_52d552 = g_52d532 ^ 145;
        g_52d553 = g_52d533 ^ 97;
        g_52d554 = g_52d534 ^ 142;
        g_52d555 = g_52d535 ^ 248;
        g_52d556 = g_52d536 ^ 218;
        g_52d557 = g_52d537 ^ 210;
        g_52d558 = g_52d538 ^ 74;
        g_52d559 = g_52d539 ^ 7;
        g_52d55a = g_52d53a ^ 11;
        g_52d55b = g_52d53b ^ 107;
        g_52d55c = g_52d53c ^ 88;
        g_52d55d = g_52d53d ^ 135;
        g_52d55e = g_52d53e ^ 98;
        g_52d55f = g_52d53f ^ 152;
        g_52d560 = g_52d540 ^ 254;
        g_52d561 = g_52d541 ^ 33;
        g_52d562 = g_52d542 ^ 140;
        g_52d563 = g_52d543 ^ 1;
        g_52d564 = g_52d544 ^ 144;
        g_52d565 = g_52d545 ^ 181;
        g_52d566 = g_52d546 ^ 162;
        g_52d567 = g_52d547 ^ 233;
        g_52d568 = g_52d548 ^ 87;
        g_52d569 = g_52d549 ^ 122;
        g_52d56a = g_52d54a ^ 0x99;
        g_52d56b = g_52d54b ^ 82;
        g_52d56c = g_52d54c ^ 49;
        g_52d56d = g_52d54d ^ 3;
        g_52d56e = g_52d54e ^ 29;
        g_52d4d0 = g_52d4b0 ^ 106;
        g_52d4d1 = g_52d4b1 ^ 197;
        g_52d4d2 = g_52d4b2 ^ 251;
        g_52d4d3 = g_52d4b3 ^ 47;
        g_52d4d4 = g_52d4b4 ^ 186;
        g_52d4d5 = g_52d4b5 ^ 13;
        g_52d4d6 = g_52d4b6 ^ 236;
        g_52d4d7 = g_52d4b7 ^ 218;
        g_52d4d8 = g_52d4b8 ^ 235;
        g_52d4d9 = g_52d4b9 ^ 162;
        g_52d4da = g_52d4ba ^ 196;
        g_52d4db = g_52d4bb ^ 48;
        g_52d4dc = g_52d4bc ^ 164;
        g_52d4dd = g_52d4bd ^ 75;
        g_52d4de = g_52d4be ^ 41;
        g_52d4df = g_52d4bf ^ 0x66;
        g_52d4e0 = g_52d4c0 ^ 109;
        g_52d4e1 = g_52d4c1 ^ 147;
        g_52d4e2 = g_52d4c2 ^ 152;
        g_52d4e3 = g_52d4c3 ^ 248;
        g_52d4e4 = g_52d4c4 ^ 106;
        g_52d4e5 = g_52d4c5 ^ 146;
        g_52d4e6 = g_52d4c6 ^ 11;
        g_52d490 = g_52d470 ^ 194;
        g_52d491 = g_52d471 ^ 252;
        g_52d492 = g_52d472 ^ 242;
        g_52d493 = g_52d473 ^ 69;
        g_52d494 = g_52d474 ^ 0xee;
        g_52d495 = g_52d475 ^ 45;
        g_52d496 = g_52d476 ^ 253;
        g_52d497 = g_52d477 ^ 106;
        g_52d498 = g_52d478 ^ 246;
        g_52d499 = g_52d479 ^ 123;
        g_52d49a = g_52d47a ^ 109;
        g_52d49b = g_52d47b ^ 200;
        g_52d49c = g_52d47c ^ 32;
        g_52d49d = g_52d47d ^ 213;
        g_52d49e = g_52d47e ^ 107;
        g_52d49f = g_52d47f ^ 62;
        g_52d4a0 = g_52d480 ^ 181;
        g_52d4a1 = g_52d481 ^ 214;
        g_52d4a2 = g_52d482 ^ 43;
        g_52d4a3 = g_52d483 ^ 0xaa;
        g_52d4a4 = g_52d484 ^ 9;
        g_52d4a5 = g_52d485 ^ 227;
        g_52d4a6 = g_52d486 ^ 186;
        g_52d4a7 = g_52d487 ^ 161;
        g_52d4a8 = g_52d488 ^ 252;
        g_52d4a9 = g_52d489 ^ 191;
        g_52d4aa = g_52d48a ^ 181;
        g_52d4ab = g_52d48b ^ 193;
        g_52d4ac = g_52d48c ^ 226;
        g_52d4ad = g_52d48d ^ 188;
        g_52d4ae = g_52d48e ^ 242;
    }
    /* unsupported instruction */
    g_57fcac = 1;
    v20 = _objc_retain(a3);
    v21 = a2 & ~((unsigned int)_objc_msgSend(v20, SEL_isEqualToString_, &g_52d650));
    if (!((char)v21 & 1))
    {
        v22 = SEL_numberWithBool_;
    }
    else if (_objc_msgSend(a3, SEL_isEqualToString_, &g_52d610))
    {
        v22 = SEL_numberWithBool_;
        count = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
        len = _objc_retainAutoreleasedReturnValue(count, SEL_numberWithBool_, 0);
        v25 = SEL_setCachedObject_forKey_;
        goto LABEL_28c9d4;
    }
    else
    {
        if (_objc_msgSend(a3, SEL_isEqualToString_, &g_52d5d0))
        {
            v22 = SEL_numberWithBool_;
            count1 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
            len = _objc_retainAutoreleasedReturnValue(count1, SEL_numberWithBool_, 0);
            v25 = SEL_setCachedObject_forKey_;
LABEL_28c9d4:
            _objc_msgSend(a0, v25, len);
            _objc_release(len);
            len1 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v22, 0), v22, 0);
        }
        else
        {
            v28 = (unsigned int)_objc_msgSend(a3, SEL_isEqualToString_, &g_52d590);
            v22 = SEL_numberWithBool_;
            if (!v28)
                goto LABEL_28ca28;
            count2 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
            len2 = _objc_retainAutoreleasedReturnValue(count2, SEL_numberWithBool_, 0);
            v25 = SEL_setCachedObject_forKey_;
            _objc_msgSend(a0, SEL_setCachedObject_forKey_, len2, &g_52d610);
            _objc_release(len2);
            v31 = _objc_msgSend(g_4c40a8, SEL_numberWithBool_, 0);
            len1 = _objc_retainAutoreleasedReturnValue(v31, SEL_numberWithBool_, 0);
        }
        _objc_msgSend(a0, v25, len1);
        _objc_release(len1);
    }
LABEL_28ca28:
    v32 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v22, v21), v22, v21);
    _objc_msgSend(a0, SEL_setCachedObject_forKey_, v32, a3);
    _objc_release(v32);
    _objc_release();
    return;
}
