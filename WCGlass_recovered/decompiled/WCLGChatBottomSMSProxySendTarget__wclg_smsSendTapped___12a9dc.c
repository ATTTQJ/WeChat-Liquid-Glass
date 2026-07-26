/* Recovered pseudocode
 * Objective-C: -[WCLGChatBottomSMSProxySendTarget wclg_smsSendTapped:]
 * Address: 0x12a9dc; original size: 3276 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 2.796s
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

unsigned long long sub_12a9dc(unsigned long a0, unsigned long a1, unsigned long len)
{
    unsigned long v35;  // x23
    long long v44;  // x19
    long long v45;  // x28
    long long count;  // x0
    long long v47;  // x19
    long long count1;  // x0
    unsigned long v49;  // x27
    unsigned long v50;  // x19
    long long v51;  // x19
    long long v52;  // x27
    long long count2;  // x0
    long long v36;  // x27
    long long v54;  // x19
    long long v55;  // x0
    struct_0 *idx;  // x19
    long long v57;  // x0
    unsigned long v58;  // x20
    unsigned long i;  // x0
    unsigned long v60;  // x21
    unsigned long idx1;  // x22
    unsigned long v62;  // x23
    unsigned long index;  // x19
    long long v37;  // x0
    unsigned long v64;  // x21
    long long v65;  // x22
    unsigned long v66;  // x20
    unsigned long long v67;  // x0
    unsigned long long v68;  // x0
    long long v38;  // x26
    long long v39;  // x0
    long long v40;  // x22
    long long v41;  // x0
    unsigned long v42;  // x28
    unsigned long v43;  // x19
    char v0;  // [bp-0x2a0]
    int v1;  // [bp-0x220]
    int v2;  // [bp-0x210]
    int v3;  // [bp-0x200]
    int v4;  // [bp-0x1f0]
    char v5;  // [bp-0x1e0]
    char v6;  // [bp-0x160]
    unsigned long v7;  // [bp-0x150]
    unsigned long v8;  // [bp-0x120]
    unsigned long long v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    unsigned long v14;  // [bp-0xf0]
    unsigned long v15;  // [bp-0xe8]
    unsigned long v16;  // [bp-0xe0]
    long long v17;  // [bp-0xd8]
    unsigned long v18;  // [bp-0xd0]
    long long v19;  // [bp-0xc8]
    long long v20;  // [bp-0xc0]
    unsigned long v21;  // [bp-0xb8]
    char *v22;  // [bp-0xb0]
    struct_0 *v23;  // [bp-0xa8]
    char *v24;  // [bp-0xa0]
    unsigned long v25;  // [bp-0x98]
    unsigned long v26;  // [bp-0x90]
    unsigned long v27;  // [bp-0x88]
    long long v28;  // [bp-0x80]
    unsigned long j;  // [bp-0x78]
    unsigned long v30;  // [bp-0x70]
    unsigned long v31;  // [bp-0x68]
    char *v32;  // [bp-0x10]
    char v33;  // [bp+0x0]

    v32 = &v33;
    v31 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!*((int *)&g_57e358))
    {
        g_4f0a30 = g_4f0a10 ^ 182;
        g_4f0a31 = g_4f0a11 ^ 88;
        g_4f0a32 = g_4f0a12 ^ 91;
        g_4f0a33 = g_4f0a13 ^ 71;
        g_4f0a34 = g_4f0a14 ^ 244;
        g_4f0a35 = g_4f0a15 ^ 211;
        g_4f0a36 = g_4f0a16 ^ 225;
        g_4f0a37 = g_4f0a17 ^ 39;
        g_4f0a38 = g_4f0a18 ^ 230;
        g_4f0a39 = g_4f0a19 ^ 144;
        g_4f0a3a = g_4f0a1a ^ 228;
        g_4f0a3b = g_4f0a1b ^ 58;
        g_4f0a3c = g_4f0a1c ^ 22;
        g_4f0a3d = g_4f0a1d ^ 63;
        g_4f0a3e = g_4f0a1e ^ 115;
        g_4f0a3f = g_4f0a1f ^ 209;
        g_4f0a40 = g_4f0a20 ^ 16;
        g_4f0a41 = g_4f0a21 ^ 202;
        g_4f0a42 = g_4f0a22 ^ 214;
        g_4f0a43 = g_4f0a23 ^ 176;
        g_4f0a44 = g_4f0a24 ^ 0x44;
        g_4f0a45 = g_4f0a25 ^ 111;
        g_4f0a46 = g_4f0a26 ^ 152;
        g_4f0a47 = g_4f0a27 ^ 230;
        g_4f0a48 = g_4f0a28 ^ 168;
        g_4f0970 = g_4f0950 ^ 160;
        g_4f0971 = g_4f0951 ^ 126;
        g_4f0972 = g_4f0952 ^ 243;
        g_4f0973 = g_4f0953 ^ 0xdd;
        g_4f0974 = g_4f0954 ^ 113;
        g_4f0975 = g_4f0955 ^ 11;
        g_4f0976 = g_4f0956 ^ 200;
        g_4f0977 = g_4f0957 ^ 151;
        g_4f0978 = g_4f0958 ^ 87;
        g_4f0979 = g_4f0959 ^ 101;
        g_4f097a = g_4f095a ^ 0x11;
        g_4f097b = g_4f095b ^ 81;
        g_4f097c = g_4f095c ^ 218;
        g_4f097d = g_4f095d ^ 115;
        g_4f097e = g_4f095e ^ 121;
        g_4f097f = g_4f095f ^ 0xbb;
        g_4f0980 = g_4f0960 ^ 211;
        g_4f0981 = g_4f0961 ^ 156;
        g_4f0982 = g_4f0962 ^ 149;
        g_4f0983 = g_4f0963 ^ 62;
        g_4f0984 = g_4f0964 ^ 203;
        g_4f0930 = g_4f0910 ^ 115;
        g_4f0931 = g_4f0911 ^ 82;
        g_4f0932 = g_4f0912 ^ 87;
        g_4f0933 = g_4f0913 ^ 0xbb;
        g_4f0934 = g_4f0914 ^ 131;
        g_4f0935 = g_4f0915 ^ 41;
        g_4f0936 = g_4f0916 ^ 244;
        g_4f0937 = g_4f0917 ^ 205;
        g_4f0938 = g_4f0918 ^ 122;
        g_4f0939 = g_4f0919 ^ 211;
        g_4f093a = g_4f091a ^ 171;
        g_4f093b = g_4f091b ^ 66;
        g_4f093c = g_4f091c ^ 83;
        g_4f093d = g_4f091d ^ 86;
        g_4f093e = g_4f091e ^ 122;
        g_4f093f = g_4f091f ^ 156;
        g_4f0940 = g_4f0920 ^ 104;
        g_4f0941 = ~(g_4f0921);
        g_4f0942 = g_4f0922 ^ 101;
        g_4f0943 = g_4f0923 ^ 145;
        g_4f09f0 = g_4f09d0 ^ 0x77;
        g_4f09f1 = g_4f09d1 ^ 184;
        g_4f09f2 = g_4f09d2 ^ 183;
        g_4f09f3 = g_4f09d3 ^ 252;
        g_4f09f4 = g_4f09d4 ^ 39;
        g_4f09f5 = g_4f09d5 ^ 174;
        g_4f09f6 = g_4f09d6 ^ 65;
        g_4f09f7 = g_4f09d7 ^ 124;
        g_4f09f8 = g_4f09d8 ^ 61;
        g_4f09f9 = g_4f09d9 ^ 54;
        g_4f09fa = g_4f09da ^ 105;
        g_4f09fb = g_4f09db ^ 12;
        g_4f09fc = g_4f09dc ^ 26;
        g_4f09fd = g_4f09dd ^ 150;
        g_4f09fe = g_4f09de ^ 184;
        g_4f09ff = g_4f09df ^ 200;
        g_4f0a00 = g_4f09e0 ^ 8;
        g_4f09b0 = g_4f0990 ^ 3;
        g_4f09b1 = g_4f0991 ^ 65;
        g_4f09b2 = g_4f0992 ^ 231;
        g_4f09b3 = g_4f0993 ^ 24;
        g_4f09b4 = g_4f0994 ^ 16;
        g_4f09b5 = g_4f0995 ^ 83;
        g_4f09b6 = g_4f0996 ^ 45;
        g_4f09b7 = g_4f0997 ^ 244;
        g_4f09b8 = g_4f0998 ^ 220;
        g_4f09b9 = g_4f0999 ^ 19;
        g_4f09ba = g_4f099a ^ 215;
        g_4f09bb = g_4f099b ^ 124;
        g_4f09bc = g_4f099c ^ 234;
        g_4f09bd = g_4f099d ^ 180;
        g_4f09be = g_4f099e ^ 243;
        g_4f09bf = g_4f099f ^ 156;
        g_4f09c0 = g_4f09a0 ^ 163;
        g_4f08f0 = g_4f08d0 ^ 166;
        g_4f08f1 = g_4f08d1 ^ 89;
        g_4f08f2 = g_4f08d2 ^ 22;
        g_4f08f3 = g_4f08d3 ^ 60;
        g_4f08f4 = g_4f08d4 ^ 113;
        g_4f08f5 = g_4f08d5 ^ 26;
        g_4f08f6 = g_4f08d6 ^ 14;
        g_4f08f7 = g_4f08d7 ^ 138;
        g_4f08f8 = g_4f08d8 ^ 157;
        g_4f08f9 = g_4f08d9 ^ 7;
        g_4f08fa = g_4f08da ^ 38;
        g_4f08fb = g_4f08db ^ 244;
        g_4f08fc = g_4f08dc ^ 233;
        g_4f08fd = g_4f08dd ^ 77;
        g_4f08fe = g_4f08de ^ 135;
        g_4f08ff = g_4f08df ^ 176;
        g_4f0900 = g_4f08e0 ^ 207;
        g_4f0901 = g_4f08e1 ^ 86;
        g_4f0902 = g_4f08e2 ^ 183;
        g_4f0903 = g_4f08e3 ^ 207;
        g_4f0904 = g_4f08e4 ^ 217;
    }
    /* unsupported instruction */
    *((unsigned int *)&g_57e358) = 1;
    _objc_retain(_objc_retain(len));
    if (len)
    {
        v35 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(len, &g_4eff58), &g_4eff58);
        v36 = _objc_retainAutoreleasedReturnValue(_objc_getAssociatedObject(len, &g_4efe68), &g_4efe68);
        if (v35 && sub_14edec(v35))
        {
            v23 = &v6;
            v24 = &v0;
            v22 = &v5;
            v37 = _objc_msgSend(g_4c4110, SEL_array);
            v38 = _objc_retainAutoreleasedReturnValue(v37, SEL_array);
            v19 = _objc_retainAutoreleasedReturnValue(sub_12911c(v35, 0), 0);
            sub_14ee80(v38, v19);
            sub_14ee80(v38, v35);
            v39 = _objc_msgSend(v35, SEL_superview);
            v40 = _objc_retainAutoreleasedReturnValue(v39, SEL_superview);
            sub_14ee80(v38, v40);
            _objc_release(v40);
            sub_14ee80(v38, v36);
            v41 = _objc_msgSend(v35, SEL_superview);
            v42 = _objc_retainAutoreleasedReturnValue(v41, SEL_superview);
            if (v42)
            {
                v43 = 0;
                do
                {
                    v44 = v43;
                    v45 = v42;
                    sub_14ee80(v38, v45);
                    count = _objc_msgSend(v45, SEL_superview);
                    v42 = _objc_retainAutoreleasedReturnValue(count, SEL_superview);
                    _objc_release(v45);
                } while (v42 && (v47 = v44 + 1, v42 = v42, v43 = (unsigned long)(v44 + 1), v44 < 7));
            }
            v20 = v36;
            v21 = v35;
            count1 = _objc_msgSend(v35, SEL_nextResponder);
            v49 = _objc_retainAutoreleasedReturnValue(count1, SEL_nextResponder);
            if (v49)
            {
                v50 = 0;
                do
                {
                    v51 = v50;
                    v52 = v49;
                    sub_14ee80(v38, v52);
                    count2 = _objc_msgSend(v52, SEL_nextResponder);
                    v49 = _objc_retainAutoreleasedReturnValue(count2, SEL_nextResponder);
                    _objc_release(v52);
                } while (v49 && (v54 = v51 + 1, v49 = v49, v50 = (unsigned long)(v51 + 1), v51 < 7));
            }
            v8 = " \t`";
            v9 = " \t`";
            v10 = " \t`";
            v11 = " \t`";
            v12 = " \t`";
            v13 = " \t`";
            v55 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v8, 6);
            v28 = _objc_retainAutoreleasedReturnValue(v55, SEL_arrayWithObjects_count_, &v8, 6);
            idx = v23;
            memset(idx, 0, 64);
            v57 = _objc_retain(v38);
            v58 = SEL_countByEnumeratingWithState_objects_count_;
            i = _objc_msgSend(v57, SEL_countByEnumeratingWithState_objects_count_, idx, v22, 16);
            if (i)
            {
                v60 = *((long long *)v7);
                v14 = *((long long *)v7);
                v15 = SEL_countByEnumeratingWithState_objects_count_;
                do
                {
                    idx1 = 0;
                    v16 = i;
                    do
                    {
                        if (idx->field_10->field_0 != v60)
                            _objc_enumerationMutation(v38);
                        v17 = idx1;
                        v62 = *((long long *)(idx->field_8 + idx1 * 8));
                        v1 = (int)0;
                        v2 = (int)0;
                        v3 = (int)0;
                        v4 = (int)0;
                        j = _objc_msgSend(_objc_retain(v28), v58, &v1, v24, 16);
                        if (j)
                        {
                            v30 = *((long long *)*((unsigned long long *)&v2));
                            do
                            {
                                index = 0;
                                v26 = SEL_respondsToSelector_;
                                v27 = SEL_length;
                                v25 = SEL_methodSignatureForSelector_;
                                v18 = SEL_numberOfArguments;
                                do
                                {
                                    if (*((long long *)*((unsigned long long *)&v2)) != v30)
                                        _objc_enumerationMutation(v28);
                                    v64 = *((long long *)(*((unsigned long long *)(&v1 + 8)) + index * 8));
                                    _objc_retain(v62);
                                    _objc_retain(v64);
                                    _objc_retain(len);
                                    if (!v62 || !_objc_msgSend(v64, v27) || !((v65 = (long long)(unsigned long long)_NSSelectorFromString(v64), (unsigned int)(unsigned long long)_objc_msgSend(v62, v26, v65))))
                                        continue;
                                    v66 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v62, v25, v65), v25, v65);
                                    if (!v66)
                                        continue;
                                    v67 = _objc_msgSend(v66, v18);
                                    if (v67 == 3)
                                    {
                                        _objc_msgSend(v62, v65, len);
LABEL_12b5ec:
                                        _objc_release(v66);
                                        _objc_release(len);
                                        _objc_release(v64);
                                        _objc_release(v62);
                                        _objc_release(v28);
                                        goto LABEL_12b614;
                                    }
                                    else if (v67 == 2)
                                    {
                                        _objc_msgSend(v62, v65);
                                        goto LABEL_12b5ec;
                                    }
                                    else
                                    {
                                        _objc_release(v66);
                                    }
                                    _objc_release(len);
                                    _objc_release(v64);
                                    _objc_release(v62);
                                    index += 1;
                                } while (j != index);
                                idx = v23;
                                v60 = v14;
                                j = _objc_msgSend(v28, v15, &v1, v24, 16);
                            } while (j);
                        }
                    } while ((_objc_release(v28), idx1 = (unsigned long)(v17 + 1), idx1 != v16));
                    i = _objc_msgSend(v38, v58, idx, v22, 16);
                } while (i);
            }
LABEL_12b614:
            _objc_release(v38);
            _objc_release(v28);
            _objc_release(v49);
            _objc_release(v42);
            _objc_release(v19);
            _objc_release(v38);
            v36 = v20;
            v35 = v21;
        }
        _objc_release(v36);
        _objc_release(v35);
    }
    _objc_release(len);
    v68 = _objc_release(len);
    if (*((long long *)&g_600760) == v31)
        return v68;
    __Unwind_Resume(___stack_chk_fail());
}
