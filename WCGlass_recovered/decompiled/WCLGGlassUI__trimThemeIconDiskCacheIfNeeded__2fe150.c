/* Recovered pseudocode
 * Objective-C: +[WCLGGlassUI trimThemeIconDiskCacheIfNeeded]
 * Address: 0x2fe150; original size: 1896 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.094s
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned long long sub_2fe150(void)
{
    long long count;  // x0
    long long v41;  // x24
    unsigned long count1;  // x0
    unsigned long count2;  // x28
    unsigned long v52;  // x21
    void* idx;  // x19
    unsigned long v54;  // x22
    long long v55;  // x0
    long long v56;  // x2
    long long v57;  // x25
    long long v58;  // x0
    long long v42;  // x0
    unsigned int v59;  // w0
    long long v60;  // x20
    long long v61;  // x2
    long long v62;  // x0
    unsigned long v63;  // x0
    unsigned long v64;  // x24
    long long len;  // x19
    long long v66;  // x28
    long long v67;  // x20
    unsigned long long v68;  // x0
    long long v43;  // x2
    struct_0 *v69;  // x26
    unsigned long v70;  // x0
    unsigned long v71;  // x22
    long long v44;  // x0
    unsigned long long v79;  // x0
    unsigned long v45;  // x0
    unsigned long v46;  // x22
    long long v47;  // x2
    long long v48;  // x0
    long long v49;  // x0
    char v0;  // [bp-0x300]
    char v1;  // [bp-0x280]
    unsigned long v2;  // [bp-0x270]
    char v3;  // [bp-0x240], Other Possible Types: long long
    long long v4;  // [bp-0x238]
    unsigned long v5;  // [bp-0x230]
    long long v6;  // [bp-0x220]
    char v7;  // [bp-0x200]
    int v8;  // [bp-0x180]
    int v9;  // [bp-0x170]
    int v10;  // [bp-0x160]
    int v11;  // [bp-0x150]
    char *v12;  // [bp-0x138]
    unsigned long v13;  // [bp-0x130]
    struct_0 *v14;  // [bp-0x128]
    char *v15;  // [bp-0x120]
    unsigned long v16;  // [bp-0x118]
    unsigned long v17;  // [bp-0x110]
    long long v18;  // [bp-0x108]
    unsigned long v19;  // [bp-0x100]
    char *index;  // [bp-0xf8]
    void* v21;  // [bp-0xf0]
    long long v22;  // [bp-0xe8]
    unsigned long v23;  // [bp-0xe0]
    unsigned long v24;  // [bp-0xd8]
    unsigned long v25;  // [bp-0xd0]
    unsigned long v26;  // [bp-0xc8]
    unsigned long v27;  // [bp-0xc0]
    unsigned long v28;  // [bp-0xb8]
    unsigned long v29;  // [bp-0xb0]
    unsigned long v30;  // [bp-0xa8]
    unsigned long v31;  // [bp-0xa0]
    long long v32;  // [bp-0x98]
    unsigned long v33;  // [bp-0x90]
    unsigned long v34;  // [bp-0x88]
    long long v35;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long v36;  // [bp-0x78]
    unsigned long v37;  // [bp-0x70]
    char *v38;  // [bp-0x10]
    char v39;  // [bp+0x0]

    v38 = &v39;
    v37 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!*((int *)&g_5807e8))
    {
        g_545679 = g_545674 ^ 82;
        g_54567a = g_545675 ^ 92;
        g_54567b = g_545676 ^ 87;
        g_54567c = g_545677 ^ 47;
        g_54567d = g_545678 ^ 129;
        g_54566f = g_54566a ^ 90;
        g_545670 = g_54566b ^ 198;
        g_545671 = g_54566c ^ 108;
        g_545672 = g_54566d ^ 143;
        g_545673 = g_54566e ^ 106;
        g_545665 = g_545660 ^ 0x44;
        g_545666 = g_545661 ^ 72;
        g_545667 = g_545662 ^ 213;
        g_545668 = g_545663 ^ 36;
        g_545669 = g_545664 ^ 152;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_5807e8) = 1;
    v21 = &v6;
    v14 = &v1;
    v12 = &v0;
    count = _objc_msgSend();
    v41 = _objc_retainAutoreleasedReturnValue(count, SEL_themeIconCacheDirectory);
    v42 = _objc_msgSend(g_4c4108, SEL_defaultManager);
    v32 = _objc_retainAutoreleasedReturnValue(v42, SEL_defaultManager);
    v43 = v41;
    v44 = _objc_msgSend(v32, SEL_contentsOfDirectoryAtPath_error_, v43, 0);
    v45 = _objc_retainAutoreleasedReturnValue(v44, SEL_contentsOfDirectoryAtPath_error_, v43, 0);
    if (!v45)
        v46 = *((long long *)&g_6002d8);
    else
        v46 = v45;
    _objc_retain();
    _objc_release(v45);
    v13 = SEL_count;
    v47 = _objc_msgSend(v46, SEL_count);
    v48 = _objc_msgSend(g_4c4110, SEL_arrayWithCapacity_, v47);
    v22 = _objc_retainAutoreleasedReturnValue(v48, SEL_arrayWithCapacity_, v47);
    v8 = (int)0;
    v9 = (int)0;
    v10 = (int)0;
    v11 = (int)0;
    v49 = _objc_retain(v46);
    v29 = v46;
    v16 = SEL_countByEnumeratingWithState_objects_count_;
    v15 = &v7;
    count1 = _objc_msgSend(v49, SEL_countByEnumeratingWithState_objects_count_, &v8, &v7, 16);
    if (count1)
    {
        count2 = count1;
        index = &v3;
        v31 = 0;
        v52 = *((long long *)*((unsigned long long *)&v9));
        v30 = *((long long *)&g_600230);
        idx = v21;
        v19 = v52;
        do
        {
            v54 = 0;
            v35 = SEL_attributesOfItemAtPath_error_;
            v36 = SEL_stringByAppendingPathComponent_;
            v33 = SEL_isEqualToString_;
            v34 = SEL_fileType;
            v26 = SEL_numberWithUnsignedLongLong_;
            v27 = SEL_fileSize;
            v17 = SEL_distantPast;
            v24 = SEL_dictionaryWithObjects_forKeys_count_;
            v25 = SEL_fileModificationDate;
            v23 = SEL_addObject_;
            v28 = count2;
            do
            {
                if (*((long long *)*((unsigned long long *)&v9)) != v52)
                    _objc_enumerationMutation(v29);
                v55 = _objc_msgSend(v41, v36, *((long long *)(*((unsigned long long *)(&v8 + 8)) + v54 * 8)));
                v56 = _objc_retainAutoreleasedReturnValue(v55, v36, *((long long *)(*((unsigned long long *)(&v8 + 8)) + v54 * 8)));
                v57 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v32, v35, v56, 0), v35, v56, 0);
                v58 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v34), v34);
                v59 = _objc_msgSend(v58, v33, v30);
                _objc_release(v58);
                if (v59)
                {
                    v60 = _objc_msgSend(v57, v27);
                    *((long long *)idx) = v56;
                    v3 = " \t`";
                    v4 = " \t`";
                    v61 = v60;
                    v62 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c40a8, v26, v61), v26, v61);
                    *((long long *)&idx[8]) = v62;
                    v5 = " \t`";
                    v63 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v57, v25), v25);
                    v64 = v63;
                    if (!v63)
                    {
                        v18 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c41d0, v17), v17);
                        v63 = v18;
                    }
                    *((unsigned long *)&idx[16]) = v63;
                    len = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4208, v24, idx, index, 3), v24, idx, index, 3);
                    _objc_msgSend(v22, v23, len);
                    _objc_release(len);
                    if (!v64)
                        _objc_release(v18);
                    v31 += v61;
                    _objc_release(v64);
                    _objc_release(v62);
                    idx = v21;
                    count2 = v28;
                    v52 = v19;
                }
                _objc_release(v57);
                _objc_release(v56);
                v54 += 1;
            } while (count2 != v54);
            count2 = _objc_msgSend(v29, v16, &v8, v15, 16);
        } while (count2);
    }
    else
    {
        v31 = 0;
    }
    _objc_release(v29);
    v66 = v31;
    if (0x100 < _objc_msgSend(v22, v13) || v66 >= 41943041)
    {
        v35 = v41;
        v67 = v22;
        _objc_msgSend(v67, SEL_sortUsingComparator_, &g_4a4818);
        v68 = _objc_msgSend(v67, v13);
        v69 = v14;
        memset(v69, 0, 64);
        v70 = _objc_msgSend(_objc_retain(v67), v16, v69, v12, 16);
        if (v70)
        {
            v36 = *((long long *)v2);
            v71 = 0;
            continue;
        }
        _objc_release(v22);
        v41 = v35;
    }
    _objc_release(v22);
    _objc_release(v29);
    _objc_release(v32);
    v79 = _objc_release(v41);
    if (*((long long *)&g_600760) == v37)
        return v79;
    ___stack_chk_fail();
}
