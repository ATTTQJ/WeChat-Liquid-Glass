/* Recovered pseudocode
 * Objective-C: -[WCLGGlassStore buildRequest:requestKey:nonce:]
 * Address: 0x2f198c; original size: 4616 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 3.476s
 */

typedef struct struct_0 {
    long long field_0;
} struct_0;

void sub_2f198c(long long a0, unsigned long a1, unsigned long a2, long long *a3, unsigned long long *a4)
{
    unsigned long long v53;  // x28
    unsigned long long v54;  // x27
    unsigned long long v63;  // x30
    long long count;  // x0
    long long v65;  // x22
    long long v66;  // x23
    long long v67;  // x24
    long long *count1;  // x25
    long long v69;  // x26
    long long v70;  // x25
    long long count2;  // x0
    long long v72;  // x0
    unsigned long long v55;  // x26
    unsigned long v73;  // d0
    long long v74;  // x0
    unsigned long v75;  // x2
    long long v76;  // x0
    unsigned long v77;  // x2
    long long v78;  // x0
    long long v79;  // x0
    long long v80;  // x0
    long long v81;  // x26
    unsigned long v82;  // x1
    unsigned long long v56;  // x25
    unsigned long v83;  // x2
    long long v84;  // x0
    long long v85;  // x0
    long long v86;  // x0
    long long v87;  // x0
    long long v88;  // x0
    long long v89;  // x0
    long long v90;  // x0
    long long v91;  // x0
    long long v92;  // x0
    unsigned long long v57;  // x24
    long long v93;  // x25
    long long v94;  // x27
    long long v95;  // x19
    long long v96;  // x0
    long long v97;  // x1
    long long v98;  // x20
    long long len;  // x21
    long long v100;  // x0
    long long v101;  // x2
    unsigned long long v58;  // x23
    unsigned long long v59;  // x22
    unsigned long long v60;  // x21
    unsigned long long v61;  // x20
    unsigned long long v62;  // x19
    unsigned long v0;  // [bp-0x1d0]
    unsigned long long v1;  // [bp-0x1c8]
    unsigned long long v2;  // [bp-0x1c0]
    long long v3;  // [bp-0x1b8]
    long long v4;  // [bp-0x1b0]
    long long v5;  // [bp-0x1a8]
    long long v6;  // [bp-0x1a0]
    long long v7;  // [bp-0x198]
    long long v8;  // [bp-0x190]
    unsigned long v9;  // [bp-0x180]
    unsigned long long v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    unsigned long long v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x160]
    long long v14;  // [bp-0x158]
    long long v15;  // [bp-0x150]
    long long v16;  // [bp-0x148]
    long long v17;  // [bp-0x140]
    unsigned long v18;  // [bp-0x130]
    unsigned long long v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x120]
    long long v21;  // [bp-0x118]
    long long v22;  // [bp-0x110]
    long long v23;  // [bp-0x108]
    long long v24;  // [bp-0x100]
    long long v25;  // [bp-0xf8]
    long long v26;  // [bp-0xf0]
    long long *v27;  // [bp-0xe0]
    long long v28;  // [bp-0xc8]
    long long v29;  // [bp-0xc0]
    long long v30;  // [bp-0xb8], Other Possible Types: unsigned long
    long long v31;  // [bp-0xb0]
    long long v32;  // [bp-0xa8], Other Possible Types: unsigned long
    long long v33;  // [bp-0xa0]
    long long v34;  // [bp-0x98], Other Possible Types: unsigned long
    long long v35;  // [bp-0x90]
    long long *v36;  // [bp-0x88]
    unsigned long v37;  // [bp-0x80]
    long long v38;  // [bp-0x70]
    unsigned long v39;  // [bp-0x68]
    unsigned long long v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x58]
    unsigned long long v42;  // [bp-0x50]
    unsigned long long v43;  // [bp-0x48]
    unsigned long long v44;  // [bp-0x40]
    unsigned long long v45;  // [bp-0x38]
    unsigned long long v46;  // [bp-0x30]
    unsigned long long v47;  // [bp-0x28]
    unsigned long long v48;  // [bp-0x20]
    unsigned long long v49;  // [bp-0x18]
    char *v50;  // [bp-0x10]
    unsigned long long v51;  // [bp-0x8]
    char v52;  // [bp+0x0]

    v40 = v53;
    v41 = v54;
    v42 = v55;
    v43 = v56;
    v44 = v57;
    v45 = v58;
    v46 = v59;
    v47 = v60;
    v48 = v61;
    v49 = v62;
    v50 = &v52;
    v51 = v63;
    v39 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!(int)g_58061c)
    {
        g_5424a2 = g_542498 ^ 158;
        g_5424a3 = g_542499 ^ 160;
        g_5424a4 = g_54249a ^ 103;
        g_5424a5 = g_54249b ^ 192;
        g_5424a6 = g_54249c ^ 162;
        g_5424a7 = g_54249d ^ 193;
        g_5424a8 = g_54249e ^ 198;
        g_5424a9 = g_54249f ^ 134;
        g_5424aa = g_5424a0 ^ 15;
        g_5424ab = g_5424a1 ^ 36;
        g_54247e = g_54247c ^ 82;
        g_54247f = g_54247d ^ 200;
        g_542450 = g_542420 ^ 227;
        g_542451 = g_542421 ^ 165;
        g_542452 = g_542422 ^ 4;
        g_542453 = g_542423 ^ 10;
        g_542454 = g_542424 ^ 21;
        g_542455 = g_542425 ^ 168;
        g_542456 = g_542426 ^ 181;
        g_542457 = g_542427 ^ 166;
        g_542458 = g_542428 ^ 115;
        g_542459 = g_542429 ^ 88;
        g_54245a = g_54242a ^ 184;
        g_54245b = g_54242b ^ 165;
        g_54245c = g_54242c ^ 87;
        g_54245d = g_54242d ^ 0xdd;
        g_54245e = g_54242e ^ 209;
        g_54245f = g_54242f ^ 230;
        g_542460 = g_542430 ^ 122;
        g_542461 = g_542431 ^ 98;
        g_542462 = g_542432 ^ 197;
        g_542463 = g_542433 ^ 165;
        g_542464 = g_542434 ^ 13;
        g_542465 = g_542435 ^ 87;
        g_542466 = g_542436 ^ 76;
        g_542467 = g_542437 ^ 132;
        g_542468 = g_542438 ^ 116;
        g_542469 = g_542439 ^ 212;
        g_54246a = g_54243a ^ 116;
        g_54246b = g_54243b ^ 24;
        g_54246c = g_54243c ^ 197;
        g_54246d = g_54243d ^ 41;
        g_54246e = g_54243e ^ 45;
        g_54246f = g_54243f ^ 186;
        g_542470 = g_542440 ^ 226;
        g_542471 = g_542441 ^ 181;
        g_542472 = g_542442 ^ 88;
        g_542473 = g_542443 ^ 0x88;
        g_542474 = g_542444 ^ 224;
        g_542475 = g_542445 ^ 52;
        g_542476 = g_542446 ^ 195;
        g_542477 = g_542447 ^ 124;
        g_542478 = g_542448 ^ 91;
        g_542479 = g_542449 ^ 197;
        g_54247a = g_54244a ^ 222;
        g_54247b = g_54244b ^ 166;
        g_542417 = g_542410;
        g_542418 = g_542411 ^ 243;
        g_542419 = g_542412 ^ 7;
        g_54241a = g_542413 ^ 19;
        g_54241b = g_542414 ^ 62;
        g_54241c = g_542415 ^ 133;
        g_54241d = g_542416 ^ 239;
        g_542406 = g_5423fc ^ 230;
        g_542407 = g_5423fd ^ 105;
        g_542408 = g_5423fe ^ 246;
        g_542409 = g_5423ff ^ 198;
        g_54240a = g_542400 ^ 6;
        g_54240b = g_542401 ^ 232;
        g_54240c = g_542402 ^ 231;
        g_54240d = g_542403 ^ 113;
        g_54240e = g_542404 ^ 14;
        g_54240f = g_542405 ^ 133;
        g_54248c = g_542480 ^ 67;
        g_54248d = g_542481 ^ 50;
        g_54248e = g_542482 ^ 139;
        g_54248f = g_542483 ^ 239;
        g_542490 = g_542484 ^ 107;
        g_542491 = g_542485 ^ 172;
        g_542492 = g_542486 ^ 160;
        g_542493 = g_542487 ^ 214;
        g_542494 = g_542488 ^ 87;
        g_542495 = g_542489 ^ 46;
        g_542496 = g_54248a ^ 46;
        g_542497 = g_54248b ^ 124;
        g_5423f6 = g_5423f0 ^ 178;
        g_5423f7 = g_5423f1 ^ 250;
        g_5423f8 = g_5423f2 ^ 78;
        g_5423f9 = g_5423f3 ^ 251;
        g_5423fa = g_5423f4 ^ 207;
        g_5423fb = ~(g_5423f5);
        g_5423b8 = g_5423b0 ^ 147;
        g_5423b9 = g_5423b1 ^ 114;
        g_5423ba = g_5423b2 ^ 98;
        g_5423bb = g_5423b3 ^ 80;
        g_5423bc = g_5423b4 ^ 142;
        g_5423bd = g_5423b5 ^ 113;
        g_5423be = g_5423b6 ^ 6;
        g_5423bf = g_5423b7 ^ 169;
        g_5423ad = g_5423aa ^ 10;
        g_5423ae = g_5423ab ^ 142;
        g_5423af = g_5423ac ^ 87;
        g_542392 = g_542390 ^ 233;
        g_542393 = g_542391 ^ 247;
        g_5423e6 = g_5423dc ^ 36;
        g_5423e7 = g_5423dd ^ 111;
        g_5423e8 = g_5423de ^ 18;
        g_5423e9 = g_5423df ^ 1;
        g_5423ea = g_5423e0 ^ 241;
        g_5423eb = g_5423e1 ^ 0xbb;
        g_5423ec = g_5423e2 ^ 131;
        g_5423ed = g_5423e3 ^ 180;
        g_5423ee = g_5423e4 ^ 134;
        g_5423ef = g_5423e5 ^ 108;
        g_5423ce = g_5423c0 ^ 36;
        g_5423cf = g_5423c1 ^ 220;
        g_5423d0 = g_5423c2 ^ 254;
        g_5423d1 = g_5423c3 ^ 8;
        g_5423d2 = g_5423c4 ^ 231;
        g_5423d3 = g_5423c5 ^ 217;
        g_5423d4 = g_5423c6 ^ 40;
        g_5423d5 = g_5423c7 ^ 96;
        g_5423d6 = g_5423c8 ^ 103;
        g_5423d7 = g_5423c9 ^ 132;
        g_5423d8 = g_5423ca ^ 199;
        g_5423d9 = g_5423cb ^ 220;
        g_5423da = g_5423cc ^ 61;
        g_5423db = g_5423cd ^ 212;
        g_54239f = g_542394 ^ 250;
        g_5423a0 = g_542395 ^ 79;
        g_5423a1 = g_542396 ^ 212;
        g_5423a2 = g_542397 ^ 39;
        g_5423a3 = g_542398 ^ 250;
        g_5423a4 = g_542399 ^ 213;
        g_5423a5 = g_54239a ^ 247;
        g_5423a6 = g_54239b ^ 155;
        g_5423a7 = g_54239c ^ 146;
        g_5423a8 = g_54239d ^ 0xee;
        g_5423a9 = g_54239e ^ 59;
        *((char *)&g_542370) = g_542350 ^ 84;
        g_542371 = g_542351 ^ 75;
        g_542372 = g_542352 ^ 158;
        g_542373 = g_542353 ^ 58;
        g_542374 = g_542354 ^ 72;
        g_542375 = g_542355 ^ 76;
        g_542376 = g_542356 ^ 27;
        g_542377 = g_542357 ^ 0x22;
        g_542378 = g_542358 ^ 118;
        g_542379 = g_542359 ^ 160;
        g_54237a = g_54235a ^ 229;
        g_54237b = g_54235b ^ 165;
        g_54237c = g_54235c ^ 48;
        g_54237d = g_54235d ^ 225;
        g_54237e = g_54235e ^ 125;
        g_54237f = g_54235f ^ 32;
        g_542380 = g_542360 ^ 48;
        g_542381 = g_542361 ^ 0x66;
        g_542382 = g_542362 ^ 113;
        g_542383 = g_542363 ^ 237;
        g_542384 = g_542364 ^ 198;
        g_542385 = g_542365 ^ 225;
        g_542386 = g_542366 ^ 9;
        g_542387 = g_542367 ^ 209;
        g_542388 = g_542368 ^ 54;
        g_542389 = g_542369 ^ 126;
        g_54238a = g_54236a ^ 148;
        g_54238b = g_54236b ^ 63;
        g_54238c = g_54236c ^ 11;
        g_54238d = g_54236d ^ 226;
        g_54238e = g_54236e ^ 75;
        g_54238f = g_54236f ^ 82;
        g_542340 = g_542336 ^ 18;
        g_542341 = g_542337 ^ 95;
        g_542342 = g_542338 ^ 0x22;
        g_542343 = g_542339 ^ 247;
        g_542344 = g_54233a ^ 129;
        g_542345 = g_54233b ^ 178;
        g_542346 = g_54233c ^ 110;
        g_542347 = g_54233d ^ 2;
        g_542348 = g_54233e ^ 107;
        g_542349 = g_54233f ^ 0x22;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_58061c) = 1;
    v37 = SEL_dataWithJSONObject_options_error_;
    count = _objc_msgSend(g_4c42e8, SEL_dataWithJSONObject_options_error_);
    v65 = _objc_retainAutoreleasedReturnValue(count, SEL_dataWithJSONObject_options_error_);
    v66 = _objc_retainAutoreleasedReturnValue(sub_2f2b94(32));
    v67 = _objc_retainAutoreleasedReturnValue(sub_2f2b94(16));
    v38 = _objc_retainAutoreleasedReturnValue(sub_2f2b94(24));
    count1 = _objc_msgSend(a0, SEL_apiPubKey);
    if (_objc_msgSend(v65, SEL_length) && _objc_msgSend(v66, SEL_length) == 32 && _objc_msgSend(v67, SEL_length) == 16)
    {
        v36 = a4;
        if (_objc_msgSend(v38, SEL_length) == 24 && count1)
        {
            v69 = _objc_retainAutoreleasedReturnValue(sub_2f2c2c(v65, v66, v67, 0), v66, v67, 0);
            v27 = 0;
            v70 = _SecKeyCreateEncryptedData(count1, *((long long *)&g_6006b0), v66, &v27);
            if (v27)
                _CFRelease(v27);
            v35 = v69;
            if (_objc_msgSend(v69, SEL_length) && _objc_msgSend(v70, SEL_length))
            {
                count2 = _objc_msgSend(g_4c41d0, SEL_date);
                v72 = _objc_retainAutoreleasedReturnValue(count2, SEL_date);
                _objc_msgSend(v72, SEL_timeIntervalSince1970);
                v34 = v73;
                _objc_release(v72);
                v9 = " \t`";
                v74 = _objc_msgSend(g_4c40a8, SEL_numberWithInt_, 2);
                v32 = _objc_retainAutoreleasedReturnValue(v74, SEL_numberWithInt_, 2);
                v18 = v32;
                v19 = " \t`";
                v10 = " \t`";
                v11 = " \t`";
                v20 = " \t`";
                v12 = " \t`";
                v30 = SEL_numberWithInteger_;
                v75 = v34;
                v76 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v75);
                v31 = _objc_retainAutoreleasedReturnValue(v76, SEL_numberWithInteger_, v75);
                v21 = v31;
                v13 = " \t`";
                v77 = v75 + 30;
                v78 = _objc_msgSend(g_4c40a8, SEL_numberWithInteger_, v77);
                v29 = _objc_retainAutoreleasedReturnValue(v78, SEL_numberWithInteger_, v77);
                v22 = v29;
                v14 = " \t`";
                v28 = _objc_retainAutoreleasedReturnValue(sub_2f2e10(v38));
                v23 = v28;
                v15 = " \t`";
                v33 = v70;
                v24 = _objc_retainAutoreleasedReturnValue(sub_2f2e10(v70));
                v16 = " \t`";
                v25 = _objc_retainAutoreleasedReturnValue(sub_2f2e10(v67));
                v17 = " \t`";
                v26 = _objc_retainAutoreleasedReturnValue(sub_2f2e10(v35));
                v79 = _objc_msgSend(g_4c4208, SEL_dictionaryWithObjects_forKeys_count_, &v18, &v9, 9);
                v80 = _objc_retainAutoreleasedReturnValue(v79, SEL_dictionaryWithObjects_forKeys_count_, &v18, &v9, 9);
                v81 = _objc_msgSend(v80, SEL_mutableCopy);
                _objc_release(v80);
                _objc_release(v26);
                _objc_release(v25);
                _objc_release(v24);
                _objc_release(v28);
                _objc_release(v29);
                _objc_release(v31);
                _objc_release(v32);
                v0 = " \t`";
                v1 = " \t`";
                v2 = " \t`";
                v82 = v30;
                v83 = v34;
                v32 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v82, v83), v82, v83);
                v84 = _objc_msgSend(v32, SEL_stringValue);
                v31 = _objc_retainAutoreleasedReturnValue(v84, SEL_stringValue);
                v3 = v31;
                v34 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v82, v83 + 30), v82, v83 + 30);
                v85 = _objc_msgSend(v34, SEL_stringValue);
                v30 = _objc_retainAutoreleasedReturnValue(v85, SEL_stringValue);
                v4 = v30;
                v86 = _objc_msgSend(v81, SEL_objectForKeyedSubscript_, " \t`");
                v5 = _objc_retainAutoreleasedReturnValue(v86, SEL_objectForKeyedSubscript_, " \t`");
                v87 = _objc_msgSend(v81, SEL_objectForKeyedSubscript_, " \t`");
                v6 = _objc_retainAutoreleasedReturnValue(v87, SEL_objectForKeyedSubscript_, " \t`");
                v88 = _objc_msgSend(v81, SEL_objectForKeyedSubscript_, " \t`");
                v7 = _objc_retainAutoreleasedReturnValue(v88, SEL_objectForKeyedSubscript_, " \t`");
                v89 = _objc_msgSend(v81, SEL_objectForKeyedSubscript_, " \t`");
                v8 = _objc_retainAutoreleasedReturnValue(v89, SEL_objectForKeyedSubscript_, " \t`");
                v90 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v0, 9);
                v91 = _objc_retainAutoreleasedReturnValue(v90, SEL_arrayWithObjects_count_, &v0, 9);
                v92 = _objc_msgSend(v91, SEL_componentsJoinedByString_, &g_542510);
                v93 = _objc_retainAutoreleasedReturnValue(v92, SEL_componentsJoinedByString_, &g_542510);
                _objc_release(v91);
                v94 = v81;
                _objc_release(v8);
                _objc_release(v7);
                _objc_release(v6);
                _objc_release(v5);
                _objc_release(v30);
                _objc_release(v34);
                _objc_release(v31);
                _objc_release(v32);
                v95 = _objc_retainAutoreleasedReturnValue(sub_2efdc8("o", 32), 32);
                v96 = _objc_msgSend(v93, SEL_dataUsingEncoding_, 4);
                v97 = _objc_retainAutoreleasedReturnValue(v96, SEL_dataUsingEncoding_, 4);
                v98 = _objc_retainAutoreleasedReturnValue(sub_2f3020(v95, v97), v97);
                _objc_release(v97);
                sub_2f0118(v95);
                len = _objc_retainAutoreleasedReturnValue(sub_2f2e10(v98));
                _objc_msgSend(v81, SEL_setObject_forKeyedSubscript_, len, &g_5424d0);
                _objc_release(len);
                if (a3)
                {
                    _objc_retainAutorelease(v66);
                    *(a3) = v66;
                }
                if (v36)
                {
                    v100 = _objc_msgSend(v38, SEL_copy);
                    *(v36) = _objc_autorelease(v100, SEL_copy);
                }
                v101 = v94;
                _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c42e8, v37, v101, 0, 0), v37, v101, 0, 0);
                _objc_release(v98);
                _objc_release(v95);
                _objc_release(v93);
                _objc_release(v94);
                v70 = v33;
            }
            _objc_release(v70);
            _objc_release(v35);
        }
    }
    _objc_release(v38);
    _objc_release(v67);
    _objc_release(v66);
    _objc_release(v65);
    if (*((long long *)&g_600760) != v39)
        ___stack_chk_fail();
}
