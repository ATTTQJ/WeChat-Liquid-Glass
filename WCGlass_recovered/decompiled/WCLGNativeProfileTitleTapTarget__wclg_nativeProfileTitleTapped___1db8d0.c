/* Recovered pseudocode
 * Objective-C: -[WCLGNativeProfileTitleTapTarget wclg_nativeProfileTitleTapped:]
 * Address: 0x1db8d0; original size: 5820 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 5.162s
 */

unsigned long long sub_1db8d0(long long a0, unsigned long a1, long long a2)
{
    long long v31;  // x20
    long long v32;  // x0
    unsigned long long count;  // x0
    unsigned long long v42;  // x19
    long long v43;  // x0
    unsigned long long len;  // x26
    char *v45;  // x24
    unsigned long long count1;  // x0
    unsigned long long idx;  // x27
    unsigned long long v48;  // x19
    long long v49;  // x0
    long long v50;  // x21
    long long count2;  // x0
    unsigned long long v51;  // x25
    char *v52;  // x1
    unsigned long long v53;  // x0
    unsigned long long index;  // x24
    unsigned long long v56;  // x0
    long long v34;  // x20
    long long v35;  // x2
    long long v36;  // x0
    unsigned long long v37;  // x23
    long long v38;  // x0
    long long v39;  // x22
    long long v40;  // x0
    char v0;  // [bp-0x340]
    char v1;  // [bp-0x2c0]
    char v3;  // [bp-0x280], Other Possible Types: unsigned long long
    char v4;  // [bp-0x270]
    char v5;  // [bp-0x1f0]
    unsigned long v6;  // [bp-0x1e8]
    char v7;  // [bp-0x1b0]
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x100]
    unsigned long v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    unsigned long long v14;  // [bp-0xe0]
    unsigned long long v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    unsigned long long v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    char *v20;  // [bp-0xa8]
    char *v21;  // [bp-0xa0]
    long long v22;  // [bp-0x98]
    char *v23;  // [bp-0x90]
    char *v24;  // [bp-0x88]
    char *v25;  // [bp-0x80]
    unsigned long v26;  // [bp-0x78]
    char *v27;  // [bp-0x70], Other Possible Types: long long
    unsigned long v28;  // [bp-0x68]
    char *v29;  // [bp-0x10]
    char v30;  // [bp+0x0]

    v29 = &v30;
    v31 = a0;
    v28 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_57ee50)
    {
        g_509ad0 = g_509ab0 ^ 174;
        g_509ad1 = g_509ab1 ^ 227;
        g_509ad2 = g_509ab2 ^ 0x66;
        g_509ad3 = g_509ab3 ^ 21;
        g_509ad4 = g_509ab4 ^ 53;
        g_509ad5 = g_509ab5 ^ 0xdd;
        g_509ad6 = g_509ab6 ^ 45;
        g_509ad7 = g_509ab7 ^ 107;
        g_509ad8 = g_509ab8 ^ 173;
        g_509ad9 = g_509ab9 ^ 26;
        g_509ada = g_509aba ^ 168;
        g_509adb = g_509abb ^ 253;
        g_509adc = g_509abc ^ 185;
        g_509add = g_509abd ^ 163;
        g_509ade = g_509abe ^ 237;
        g_509adf = g_509abf ^ 225;
        g_509ae0 = g_509ac0 ^ 126;
        g_509ae1 = g_509ac1 ^ 236;
        g_509a99 = g_509a91 ^ 186;
        g_509a9a = g_509a92 ^ 140;
        g_509a9b = g_509a93 ^ 92;
        g_509a9c = g_509a94 ^ 180;
        g_509a9d = g_509a95 ^ 130;
        g_509a9e = g_509a96 ^ 46;
        g_509a9f = g_509a97 ^ 69;
        g_509aa0 = g_509a98 ^ 0x11;
        g_509a80 = g_509a60 ^ 229;
        g_509a81 = g_509a61 ^ 251;
        g_509a82 = g_509a62 ^ 191;
        g_509a83 = g_509a63 ^ 201;
        g_509a84 = g_509a64 ^ 147;
        g_509a85 = g_509a65 ^ 183;
        g_509a86 = g_509a66 ^ 171;
        g_509a87 = g_509a67 ^ 90;
        g_509a88 = g_509a68 ^ 70;
        g_509a89 = g_509a69 ^ 37;
        g_509a8a = g_509a6a ^ 41;
        g_509a8b = g_509a6b ^ 32;
        g_509a8c = g_509a6c ^ 55;
        g_509a8d = g_509a6d ^ 143;
        g_509a8e = g_509a6e ^ 59;
        g_509a8f = g_509a6f ^ 169;
        g_509a90 = g_509a70 ^ 224;
        g_509a20 = g_509a00 ^ 247;
        g_509a21 = g_509a01 ^ 60;
        g_509a22 = g_509a02 ^ 80;
        g_509a23 = g_509a03 ^ 29;
        v27 = v31;
        g_509a24 = g_509a04 ^ 123;
        g_509a25 = g_509a05 ^ 109;
        g_509a26 = g_509a06 ^ 60;
        g_509a27 = g_509a07 ^ 0x55;
        g_509a28 = g_509a08 ^ 113;
        g_509a29 = g_509a09 ^ 35;
        g_509a2a = g_509a0a ^ 163;
        g_509a2b = g_509a0b ^ 147;
        g_509a2c = g_509a0c ^ 38;
        g_509a2d = g_509a0d ^ 223;
        g_509a2e = g_509a0e ^ 31;
        g_509a2f = g_509a0f ^ 105;
        g_509a30 = g_509a10 ^ 73;
        g_5099b2 = g_5099a7 ^ 45;
        g_5099b3 = g_5099a8 ^ 54;
        g_5099b4 = g_5099a9 ^ 64;
        g_5099b5 = g_5099aa ^ 4;
        g_5099b6 = g_5099ab ^ 227;
        g_5099b7 = ~(g_5099ac);
        g_5099b8 = g_5099ad ^ 250;
        g_5099b9 = g_5099ae ^ 24;
        g_5099ba = g_5099af ^ 83;
        g_5099bb = g_5099b0 ^ 250;
        g_5099bc = g_5099b1 ^ 105;
        g_509998 = g_509989 ^ 74;
        g_509999 = g_50998a ^ 71;
        g_50999a = g_50998b ^ 35;
        g_50999b = g_50998c ^ 38;
        g_50999c = g_50998d ^ 48;
        g_50999d = g_50998e ^ 69;
        g_50999e = g_50998f ^ 4;
        g_50999f = g_509990 ^ 115;
        g_5099a0 = g_509991 ^ 29;
        g_5099a1 = g_509992 ^ 190;
        g_5099a2 = g_509993 ^ 236;
        g_5099a3 = g_509994 ^ 209;
        g_5099a4 = g_509995 ^ 92;
        g_5099a5 = g_509996 ^ 0xee;
        g_5099a6 = g_509997 ^ 229;
        g_509910 = g_5098f0 ^ 217;
        g_509911 = g_5098f1 ^ 0x22;
        g_509912 = g_5098f2 ^ 106;
        g_509913 = g_5098f3 ^ 113;
        g_509914 = g_5098f4 ^ 94;
        g_509915 = g_5098f5 ^ 82;
        g_509916 = g_5098f6 ^ 165;
        g_509917 = g_5098f7 ^ 198;
        g_509918 = g_5098f8 ^ 190;
        g_509919 = g_5098f9 ^ 252;
        g_50991a = g_5098fa ^ 165;
        g_50991b = g_5098fb ^ 223;
        g_50991c = g_5098fc ^ 227;
        g_50991d = g_5098fd ^ 147;
        g_50991e = g_5098fe ^ 197;
        g_50991f = g_5098ff ^ 188;
        g_509920 = g_509900 ^ 239;
        g_509921 = g_509901 ^ 0x11;
        g_509922 = g_509902 ^ 154;
        g_5098e2 = g_5098dc ^ 40;
        g_5098e3 = g_5098dd ^ 93;
        g_5098e4 = g_5098de ^ 10;
        g_5098e5 = g_5098df ^ 105;
        g_5098e6 = g_5098e0 ^ 0x77;
        g_5098e7 = g_5098e1 ^ 3;
        g_5098d3 = g_5098ca ^ 120;
        g_5098d4 = g_5098cb ^ 167;
        g_5098d5 = g_5098cc ^ 6;
        g_5098d6 = g_5098cd ^ 121;
        g_5098d7 = g_5098ce ^ 62;
        g_5098d8 = g_5098cf ^ 26;
        g_5098d9 = g_5098d0 ^ 212;
        g_5098da = g_5098d1 ^ 3;
        g_5098db = g_5098d2 ^ 176;
        g_5098ba = ~(g_5098aa);
        g_5098bb = g_5098ab ^ 0x99;
        g_5098bc = g_5098ac ^ 106;
        g_5098bd = g_5098ad ^ 172;
        g_5098be = g_5098ae ^ 61;
        g_5098bf = g_5098af ^ 205;
        g_5098c0 = g_5098b0 ^ 80;
        g_5098c1 = g_5098b1 ^ 78;
        g_5098c2 = g_5098b2 ^ 31;
        g_5098c3 = g_5098b3 ^ 23;
        g_5098c4 = g_5098b4 ^ 12;
        g_5098c5 = g_5098b5 ^ 193;
        g_5098c6 = g_5098b6 ^ 99;
        g_5098c7 = g_5098b7 ^ 212;
        g_5098c8 = g_5098b8 ^ 157;
        g_5098c9 = g_5098b9 ^ 98;
        g_509890 = g_509870 ^ 135;
        g_509891 = g_509871 ^ 28;
        g_509892 = g_509872 ^ 197;
        g_509893 = g_509873 ^ 248;
        g_509894 = g_509874 ^ 137;
        g_509895 = g_509875 ^ 76;
        g_509896 = g_509876 ^ 18;
        g_509897 = g_509877 ^ 165;
        g_509898 = g_509878 ^ 35;
        g_509899 = g_509879 ^ 49;
        g_50989a = g_50987a ^ 0x55;
        g_50989b = g_50987b ^ 165;
        g_50989c = g_50987c ^ 168;
        g_50989d = g_50987d ^ 231;
        g_50989e = g_50987e ^ 91;
        g_50989f = g_50987f ^ 5;
        g_5098a0 = g_509880 ^ 123;
        g_5098a1 = g_509881 ^ 145;
        g_5098a2 = g_509882 ^ 231;
        g_5098a3 = g_509883 ^ 242;
        g_5098a4 = g_509884 ^ 88;
        g_5098a5 = g_509885 ^ 43;
        g_5098a6 = g_509886 ^ 41;
        g_5098a7 = g_509887 ^ 0x11;
        g_5098a8 = g_509888 ^ 231;
        g_5098a9 = g_509889 ^ 57;
        g_509850 = g_509830 ^ 212;
        g_509851 = g_509831 ^ 242;
        g_509852 = g_509832 ^ 199;
        g_509853 = g_509833 ^ 254;
        g_509854 = g_509834 ^ 71;
        g_509855 = g_509835 ^ 254;
        g_509856 = g_509836 ^ 133;
        g_509857 = g_509837 ^ 178;
        g_509858 = g_509838 ^ 233;
        g_509859 = g_509839 ^ 254;
        g_50985a = g_50983a ^ 241;
        g_50985b = g_50983b ^ 191;
        g_50985c = g_50983c ^ 63;
        g_50985d = g_50983d ^ 88;
        g_50985e = g_50983e ^ 134;
        g_50985f = g_50983f ^ 90;
        g_509860 = g_509840 ^ 159;
        g_509861 = g_509841 ^ 131;
        g_509862 = g_509842 ^ 175;
        g_509863 = g_509843 ^ 240;
        g_509864 = g_509844 ^ 117;
        g_509865 = g_509845 ^ 237;
        g_509866 = g_509846 ^ 27;
        g_509867 = g_509847 ^ 205;
        g_509868 = g_509848 ^ 157;
        g_509869 = g_509849 ^ 144;
        g_50986a = g_50984a ^ 239;
        g_50986b = g_50984b ^ 138;
        g_50986c = g_50984c ^ 176;
        g_509a41 = g_509a31 ^ 159;
        g_509a42 = g_509a32 ^ 243;
        g_509a43 = g_509a33 ^ 157;
        g_509a44 = g_509a34 ^ 220;
        g_509a45 = g_509a35 ^ 89;
        g_509a46 = g_509a36 ^ 231;
        g_509a47 = g_509a37 ^ 0x77;
        g_509a48 = g_509a38 ^ 3;
        g_509a49 = g_509a39 ^ 158;
        g_509a4a = g_509a3a ^ 66;
        g_509a4b = g_509a3b ^ 199;
        g_509a4c = g_509a3c ^ 112;
        g_509a4d = g_509a3d ^ 139;
        g_509a4e = g_509a3e ^ 236;
        g_509a4f = g_509a3f ^ 47;
        g_509a50 = g_509a40 ^ 225;
        g_5099e0 = g_5099c0 ^ 27;
        g_5099e1 = g_5099c1 ^ 48;
        g_5099e2 = ~(g_5099c2);
        g_5099e3 = g_5099c3 ^ 0x55;
        g_5099e4 = g_5099c4 ^ 251;
        g_5099e5 = g_5099c5 ^ 202;
        g_5099e6 = g_5099c6 ^ 24;
        g_5099e7 = g_5099c7 ^ 155;
        g_5099e8 = g_5099c8 ^ 50;
        g_5099e9 = g_5099c9 ^ 174;
        g_5099ea = g_5099ca ^ 100;
        g_5099eb = g_5099cb ^ 198;
        g_5099ec = g_5099cc ^ 71;
        g_5099ed = g_5099cd ^ 128;
        g_5099ee = g_5099ce ^ 171;
        g_5099ef = g_5099cf ^ 103;
        g_5099f0 = g_5099d0 ^ 82;
        g_5099f1 = g_5099d1 ^ 156;
        g_5099f2 = g_5099d2 ^ 109;
        g_5099f3 = g_5099d3 ^ 47;
        g_5099f4 = g_5099d4 ^ 176;
        g_509960 = g_509930 ^ 14;
        g_509961 = g_509931 ^ 233;
        g_509962 = g_509932 ^ 79;
        g_509963 = g_509933 ^ 113;
        g_509964 = g_509934 ^ 243;
        g_509965 = g_509935 ^ 188;
        g_509966 = g_509936 ^ 209;
        g_509967 = g_509937 ^ 78;
        g_509968 = g_509938 ^ 169;
        g_509969 = g_509939 ^ 181;
        g_50996a = g_50993a ^ 209;
        g_50996b = g_50993b ^ 110;
        g_50996c = g_50993c ^ 190;
        g_50996d = g_50993d ^ 125;
        g_50996e = g_50993e ^ 55;
        g_50996f = g_50993f ^ 24;
        g_509970 = g_509940 ^ 66;
        v31 = v27;
        g_509971 = g_509941 ^ 175;
        g_509972 = g_509942 ^ 49;
        g_509973 = g_509943 ^ 142;
        g_509974 = g_509944 ^ 101;
        g_509975 = g_509945 ^ 46;
        g_509976 = g_509946 ^ 202;
        g_509977 = g_509947 ^ 182;
        g_509978 = g_509948 ^ 162;
        g_509979 = g_509949 ^ 0x22;
        g_50997a = g_50994a ^ 56;
        g_50997b = g_50994b ^ 0x33;
        g_50997c = g_50994c ^ 186;
        g_50997d = g_50994d ^ 177;
        g_50997e = g_50994e ^ 84;
        g_50997f = g_50994f ^ 89;
        g_509980 = g_509950 ^ 29;
        g_509981 = g_509951 ^ 249;
        g_509982 = g_509952 ^ 0x66;
        g_509983 = g_509953 ^ 185;
        g_509984 = g_509954 ^ 120;
        g_509985 = g_509955 ^ 149;
        g_509986 = g_509956 ^ 152;
        g_509987 = g_509957 ^ 0x22;
        g_509988 = g_509958 ^ 166;
        g_509810 = g_5097f0 ^ 39;
        g_509811 = g_5097f1 ^ 113;
        g_509812 = g_5097f2 ^ 165;
        g_509813 = g_5097f3 ^ 145;
        g_509814 = g_5097f4 ^ 166;
        g_509815 = g_5097f5 ^ 0x77;
        g_509816 = g_5097f6 ^ 148;
        g_509817 = g_5097f7 ^ 197;
        g_509818 = g_5097f8 ^ 56;
        g_509819 = g_5097f9 ^ 110;
        g_50981a = g_5097fa ^ 228;
        g_50981b = g_5097fb ^ 38;
        g_50981c = g_5097fc ^ 0x44;
        g_50981d = g_5097fd ^ 0x77;
        g_50981e = g_5097fe ^ 110;
        g_50981f = g_5097ff ^ 58;
        g_509820 = g_509800 ^ 7;
        g_509821 = g_509801 ^ 132;
        g_509822 = g_509802 ^ 199;
        g_509823 = g_509803 ^ 225;
        g_509824 = g_509804 ^ 233;
        g_509825 = g_509805 ^ 32;
        g_509826 = g_509806 ^ 145;
        g_509827 = g_509807 ^ 45;
        g_509828 = ~(g_509808);
        g_509829 = g_509809 ^ 164;
        g_50982a = g_50980a ^ 146;
        g_50982b = g_50980b ^ 242;
        g_50982c = g_50980c ^ 106;
        g_50982d = g_50980d ^ 44;
        g_50982e = g_50980e ^ 70;
    }
    /* unsupported instruction */
    g_57ee50 = 1;
    v27 = &v7;
    v25 = &v5;
    v32 = _objc_retain(a2);
    if (_objc_msgSend(v32, SEL_state) == 3)
    {
        count2 = _objc_msgSend(v31, SEL_controller);
        v34 = _objc_retainAutoreleasedReturnValue(count2, SEL_controller);
        if (_objc_retain(v34))
        {
            v23 = &v4;
            v24 = &v1;
            v20 = &v3;
            v21 = &v0;
            v22 = a2;
            _objc_retain(v34);
            v35 = v34;
            v36 = _objc_msgSend(g_4c4110, SEL_arrayWithObject_, v35);
            v37 = _objc_retainAutoreleasedReturnValue(v36, SEL_arrayWithObject_, v35);
            v12 = " \t`";
            v13 = " \t`";
            v14 = " \t`";
            v15 = " \t`";
            v16 = " \t`";
            v17 = " \t`";
            v18 = " \t`";
            v19 = " \t`";
            v38 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, &v12, 8);
            v39 = _objc_retainAutoreleasedReturnValue(v38, SEL_arrayWithObjects_count_, &v12, 8);
            v8 = 0;
            v9 = 0;
            v10 = 0;
            v11 = 0;
            v40 = _objc_retain(v39);
            v26 = SEL_countByEnumeratingWithState_objects_count_;
            count = _objc_msgSend(v40, SEL_countByEnumeratingWithState_objects_count_, &v8, v27, 16);
            if (count)
            {
                do
                {
                    v42 = 0;
                    do
                    {
                        v43 = sub_1de510(v34, *((long long *)(*(&(&v8)[1]) + v42 * 8)));
                        len = _objc_retainAutoreleasedReturnValue(v43, *((long long *)(*(&(&v8)[1]) + v42 * 8)));
                        if (len && !((char)_objc_msgSend(v37, SEL_containsObject_, len) & 1))
                            _objc_msgSend(v37, SEL_addObject_, len);
                    } while ((_objc_release(len), v42 += 1, count != v42));
                    count = _objc_msgSend(v39, v26, &v8, v27, 16);
                } while (count);
            }
            _objc_release(v39);
            _objc_release(v39);
            _objc_release(v34);
            v45 = v25;
            memset(v45, 0, 64);
            count1 = _objc_msgSend(_objc_retain(v37), v26, v45, v23, 16);
            if (count1)
            {
                do
                {
                    idx = 0;
                    do
                    {
                        v48 = *((long long *)(v6 + idx * 8));
                        _objc_retain(v48);
                        v49 = _NSSelectorFromString(&g_509c90);
                        if (v48 && (v50 = v49, (unsigned int)(unsigned long long)_objc_msgSend(v48, SEL_respondsToSelector_, v50)))
                        {
                            _objc_msgSend(v48, v50, 0, 0);
                            v51 = v37;
                            goto LABEL_1dcf10;
                        }
                        _objc_release(v48);
                        if (((char)sub_1f8628(v48, &g_509c10) & 1) || ((char)sub_1f8628(v48, &g_509bd0) & 1))
                        {
                            v51 = v37;
                            goto LABEL_1dcf18;
                        }
                        idx += 1;
                    } while (count1 != idx);
                    count1 = _objc_msgSend(v37, v26, v45, v23, 16);
                } while (count1);
            }
            _objc_release(v37);
            v3 = 0;
            v52 = v20;
            v48 = _objc_retainAutoreleasedReturnValue(sub_1de5a4(v34, v52), v52);
            v51 = v3;
            _objc_retain(v51);
            memset(v24, 0, 64);
            v53 = _objc_msgSend(_objc_retain(v37), v26, v24, v21, 16);
            if (v53)
            {
                index = 0;
                continue;
            }
            _objc_release(v37);
LABEL_1dcf10:
            _objc_release(v48);
LABEL_1dcf18:
            _objc_release(v51);
            _objc_release(v37);
            a2 = v22;
        }
        _objc_release(v34);
        _objc_release(v34);
    }
    v56 = _objc_release(a2);
    if (*((long long *)&g_600760) == v28)
        return v56;
    __Unwind_Resume(___stack_chk_fail());
}
