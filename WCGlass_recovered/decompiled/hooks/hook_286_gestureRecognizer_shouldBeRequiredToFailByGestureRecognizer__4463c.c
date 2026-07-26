/* Hook replacement 286/418
 * Selectors: SEL_gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer_
 * Address: 0x4463c; original size: 2272 bytes
 * Status: ok; elapsed: 1.321s
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

unsigned long long sub_4463c(unsigned long a0, unsigned long a1, char a2, char a3)
{
    long long count;  // x0
    long long count1;  // x0
    char v4;  // w0
    long long count2;  // x0
    long long v6;  // x0
    unsigned long long v7;  // x0
    long long v8;  // x0
    unsigned long long v9;  // x21
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57c5b8)
    {
        g_4cec80 = g_4cec60 ^ 196;
        g_4cec81 = g_4cec61 ^ 118;
        g_4cec82 = g_4cec62 ^ 219;
        g_4cec83 = g_4cec63 ^ 177;
        g_4cec84 = g_4cec64 ^ 156;
        g_4cec85 = g_4cec65 ^ 26;
        g_4cec86 = g_4cec66 ^ 95;
        g_4cec87 = g_4cec67 ^ 8;
        g_4cec88 = g_4cec68 ^ 86;
        g_4cec89 = g_4cec69 ^ 133;
        g_4cec8a = g_4cec6a ^ 196;
        g_4cec8b = g_4cec6b ^ 185;
        g_4cec8c = g_4cec6c ^ 128;
        g_4cec8d = g_4cec6d ^ 168;
        g_4cec8e = g_4cec6e ^ 227;
        g_4cec8f = g_4cec6f ^ 11;
        g_4cec90 = g_4cec70 ^ 229;
        g_4cec91 = g_4cec71 ^ 0xdd;
        g_4cec92 = g_4cec72 ^ 92;
        g_4cec93 = g_4cec73 ^ 240;
        g_4cec94 = g_4cec74 ^ 205;
        g_4cec95 = g_4cec75 ^ 123;
        g_4cec96 = g_4cec76 ^ 121;
        g_4cec97 = g_4cec77 ^ 126;
        g_4cec98 = g_4cec78 ^ 232;
        g_4cec99 = g_4cec79 ^ 112;
        g_4cec9a = g_4cec7a ^ 177;
        g_4cec9b = g_4cec7b ^ 246;
        g_4cec9c = g_4cec7c ^ 210;
        g_4cec30 = g_4cec00 ^ 33;
        g_4cec31 = g_4cec01 ^ 249;
        g_4cec32 = g_4cec02 ^ 151;
        g_4cec33 = g_4cec03 ^ 57;
        g_4cec34 = g_4cec04 ^ 192;
        g_4cec35 = g_4cec05 ^ 177;
        g_4cec36 = ~(g_4cec06);
        g_4cec37 = g_4cec07 ^ 213;
        g_4cec38 = g_4cec08 ^ 211;
        g_4cec39 = g_4cec09 ^ 253;
        g_4cec3a = g_4cec0a ^ 130;
        g_4cec3b = g_4cec0b ^ 5;
        g_4cec3c = g_4cec0c ^ 166;
        g_4cec3d = g_4cec0d ^ 122;
        g_4cec3e = g_4cec0e ^ 162;
        g_4cec3f = g_4cec0f ^ 56;
        g_4cec40 = g_4cec10 ^ 0xdd;
        g_4cec41 = g_4cec11 ^ 75;
        g_4cec42 = g_4cec12 ^ 168;
        g_4cec43 = g_4cec13 ^ 107;
        g_4cec44 = g_4cec14 ^ 95;
        g_4cec45 = g_4cec15 ^ 202;
        g_4cec46 = g_4cec16 ^ 134;
        g_4cec47 = g_4cec17 ^ 109;
        g_4cec48 = g_4cec18 ^ 154;
        g_4cec49 = g_4cec19 ^ 208;
        g_4cec4a = g_4cec1a ^ 171;
        g_4cec4b = g_4cec1b ^ 120;
        g_4cec4c = g_4cec1c ^ 57;
        g_4cec4d = g_4cec1d ^ 200;
        g_4cec4e = g_4cec1e ^ 240;
        g_4cec4f = g_4cec1f ^ 96;
        g_4cec50 = g_4cec20 ^ 111;
        g_4cec51 = g_4cec21 ^ 241;
        g_4cebe0 = g_4cebc0 ^ 20;
        g_4cebe1 = g_4cebc1 ^ 195;
        g_4cebe2 = g_4cebc2 ^ 234;
        g_4cebe3 = g_4cebc3 ^ 205;
        g_4cebe4 = g_4cebc4 ^ 61;
        g_4cebe5 = g_4cebc5 ^ 5;
        g_4cebe6 = g_4cebc6 ^ 239;
        g_4cebe7 = g_4cebc7 ^ 212;
        g_4cebe8 = g_4cebc8 ^ 161;
        g_4cebe9 = g_4cebc9 ^ 164;
        g_4cebea = g_4cebca ^ 163;
        g_4cebeb = g_4cebcb ^ 194;
        g_4cebec = g_4cebcc ^ 90;
        g_4cebed = g_4cebcd ^ 191;
        g_4cebee = g_4cebce ^ 174;
        g_4cebef = g_4cebcf ^ 159;
        g_4cebf0 = g_4cebd0 ^ 90;
        g_4cebf1 = g_4cebd1 ^ 132;
        g_4cebf2 = g_4cebd2 ^ 225;
        g_4cebf3 = g_4cebd3 ^ 87;
        g_4cebf4 = g_4cebd4 ^ 213;
        g_4cebf5 = g_4cebd5 ^ 11;
        g_4cebf6 = g_4cebd6 ^ 120;
        g_4cebf7 = g_4cebd7 ^ 105;
        g_4cebf8 = g_4cebd8 ^ 211;
        g_4cebf9 = g_4cebd9 ^ 77;
        g_4cebfa = g_4cebda ^ 192;
        g_4cebfb = g_4cebdb ^ 11;
        g_4ceba0 = g_4ceb80 ^ 56;
        g_4ceba1 = g_4ceb81 ^ 118;
        g_4ceba2 = g_4ceb82 ^ 134;
        g_4ceba3 = g_4ceb83 ^ 137;
        g_4ceba4 = g_4ceb84 ^ 35;
        g_4ceba5 = g_4ceb85 ^ 179;
        g_4ceba6 = g_4ceb86 ^ 183;
        g_4ceba7 = g_4ceb87 ^ 130;
        g_4ceba8 = g_4ceb88 ^ 0xbb;
        g_4ceba9 = g_4ceb89 ^ 0x33;
        g_4cebaa = g_4ceb8a ^ 109;
        g_4cebab = g_4ceb8b ^ 98;
        g_4cebac = g_4ceb8c ^ 116;
        g_4cebad = g_4ceb8d ^ 123;
        g_4cebae = g_4ceb8e ^ 8;
        g_4cebaf = g_4ceb8f ^ 207;
        g_4cebb0 = g_4ceb90 ^ 220;
        g_4cebb1 = g_4ceb91 ^ 0x88;
        g_4cebb2 = g_4ceb92 ^ 29;
        g_4cebb3 = g_4ceb93 ^ 24;
        g_4cebb4 = g_4ceb94 ^ 31;
        g_4cebb5 = g_4ceb95 ^ 47;
        g_4cebb6 = g_4ceb96 ^ 249;
        g_4cebb7 = g_4ceb97 ^ 30;
        g_4cebb8 = g_4ceb98 ^ 35;
        g_4cebb9 = g_4ceb99 ^ 0x99;
        g_4cebba = g_4ceb9a ^ 22;
    }
    /* unsupported instruction */
    g_57c5b8 = 1;
    _objc_retain(a2);
    _objc_retain(a3);
    if ((g_582f88 & 1))
    {
        _objc_retain(a2);
        if (!a2 || !_objc_msgSend(a2, SEL_isEnabled) || (count = (long long)(unsigned long long)_objc_msgSend(g_4c41d8, SEL_class), !(unsigned int)(unsigned long long)_objc_msgSend(a2, SEL_isKindOfClass_, (unsigned long long)_objc_msgSend(g_4c41d8, SEL_class)) || (count1 = (long long)(unsigned long long)_objc_msgSend(g_4c41e0, SEL_class), ((char)(unsigned long long)_objc_msgSend(a2, SEL_isKindOfClass_, (unsigned long long)_objc_msgSend(g_4c41e0, SEL_class)) & 1))))
        {
            v8 = a2;
            goto LABEL_44de0;
        }
        if (sub_4e458(a2, &g_4ced80))
        {
            _objc_release(a2);
LABEL_44e70:
            _objc_retain(a3);
            if (a3 && !((count2 = (long long)(unsigned long long)_objc_msgSend(g_4c41e0, SEL_class), !((char)(unsigned long long)_objc_msgSend(a3, SEL_isKindOfClass_, (unsigned long long)_objc_msgSend(g_4c41e0, SEL_class)) & 1))))
            {
                v6 = _objc_retain(a3);
                if (!((char)(_objc_msgSend(v6, SEL_edges) >> 1) & 1))
                {
                    _objc_release(a3);
                    goto LABEL_44ebc;
                }
                else if (sub_4e458(a3, &g_4ced40))
                {
                    _objc_release(a3);
                    _objc_release(a3);
                    _objc_release(a3);
                    _objc_release(a2);
                    return 0;
                }
                else
                {
                    v7 = sub_4e458(a3, &g_4cecc0);
                    _objc_release(a3);
                    _objc_release(a3);
                    if (((char)v7 & 1))
                    {
                        _objc_release(a3);
                        _objc_release(a2);
                        return 0;
                    }
                }
            }
            else
            {
LABEL_44ebc:
                v8 = a3;
LABEL_44de0:
                _objc_release(v8);
            }
        }
        else
        {
            v4 = sub_4e458(a2, &g_4ced00);
            _objc_release(a2);
            if (v4)
                goto LABEL_44e70;
        }
    }
    v9 = g_57c518(a0, a1, a2, a3);
    _objc_release(a3);
    _objc_release(a2);
    return v9;
}
