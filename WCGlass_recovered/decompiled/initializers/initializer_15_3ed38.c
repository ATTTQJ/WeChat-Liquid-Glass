/* Mach-O initializer 15/33
 * Address: 0x3ed38; original size: 1324 bytes
 * Status: ok; elapsed: 0.766s
 */

int sub_3ed38(void)
{
    long long ch;  // x0
    long long ch1;  // x0
    long long ch2;  // x0
    unsigned int v7;  // w0
    unsigned int v0;  // [bp-0x430]
    unsigned long v1;  // [bp-0x28]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = *((long long *)&g_600760);
    /* unsupported instruction */
    if (!g_57c3c0)
    {
        *((char *)&g_4ce190) = g_4ce170 ^ 237;
        g_4ce191 = g_4ce171 ^ 39;
        g_4ce192 = g_4ce172 ^ 234;
        g_4ce193 = g_4ce173 ^ 0x11;
        g_4ce194 = g_4ce174 ^ 146;
        g_4ce195 = g_4ce175 ^ 40;
        g_4ce196 = g_4ce176 ^ 191;
        g_4ce197 = g_4ce177 ^ 103;
        g_4ce198 = g_4ce178 ^ 25;
        g_4ce199 = g_4ce179 ^ 0x44;
        g_4ce19a = g_4ce17a ^ 21;
        g_4ce19b = g_4ce17b ^ 55;
        g_4ce19c = g_4ce17c ^ 167;
        g_4ce19d = g_4ce17d ^ 149;
        g_4ce19e = g_4ce17e ^ 223;
        g_4ce19f = g_4ce17f ^ 56;
        g_4ce1a0 = g_4ce180 ^ 0x44;
        g_4ce1a1 = g_4ce181 ^ 101;
        g_4ce1a2 = g_4ce182 ^ 33;
        g_4ce1a3 = g_4ce183 ^ 76;
        g_4ce1a4 = g_4ce184 ^ 253;
        g_4ce1a5 = g_4ce185 ^ 186;
        g_4ce1a6 = g_4ce186 ^ 159;
        g_4ce1a7 = g_4ce187 ^ 8;
        g_4ce1a8 = g_4ce188 ^ 115;
        g_4ce1a9 = g_4ce189 ^ 110;
        g_4ce1aa = g_4ce18a ^ 145;
        *((char *)&g_4ce150) = g_4ce130 ^ 224;
        g_4ce151 = g_4ce131 ^ 103;
        g_4ce152 = g_4ce132 ^ 19;
        g_4ce153 = g_4ce133 ^ 56;
        g_4ce154 = g_4ce134 ^ 197;
        g_4ce155 = g_4ce135 ^ 66;
        g_4ce156 = g_4ce136 ^ 22;
        g_4ce157 = g_4ce137 ^ 175;
        g_4ce158 = g_4ce138 ^ 33;
        g_4ce159 = g_4ce139 ^ 151;
        g_4ce15a = g_4ce13a ^ 226;
        g_4ce15b = g_4ce13b ^ 118;
        g_4ce15c = g_4ce13c ^ 70;
        g_4ce15d = g_4ce13d ^ 195;
        g_4ce15e = g_4ce13e ^ 53;
        g_4ce15f = g_4ce13f ^ 160;
        g_4ce160 = g_4ce140 ^ 115;
        *((char *)&g_4ce110) = g_4ce0f0 ^ 206;
        g_4ce111 = g_4ce0f1 ^ 33;
        g_4ce112 = g_4ce0f2 ^ 122;
        g_4ce113 = g_4ce0f3 ^ 83;
        g_4ce114 = g_4ce0f4 ^ 37;
        g_4ce115 = g_4ce0f5 ^ 120;
        g_4ce116 = g_4ce0f6 ^ 117;
        g_4ce117 = g_4ce0f7 ^ 97;
        g_4ce118 = g_4ce0f8 ^ 82;
        g_4ce119 = g_4ce0f9 ^ 109;
        g_4ce11a = g_4ce0fa ^ 73;
        g_4ce11b = g_4ce0fb ^ 11;
        g_4ce11c = g_4ce0fc ^ 27;
        g_4ce11d = g_4ce0fd ^ 227;
        g_4ce11e = g_4ce0fe ^ 78;
        g_4ce11f = g_4ce0ff ^ 78;
        g_4ce120 = g_4ce100 ^ 78;
        g_4ce121 = g_4ce101 ^ 192;
        g_4ce122 = g_4ce102 ^ 96;
        g_4ce123 = g_4ce103 ^ 145;
        g_4ce124 = g_4ce104 ^ 96;
        g_4ce125 = g_4ce105 ^ 121;
        g_4ce126 = g_4ce106 ^ 159;
        g_4ce127 = g_4ce107 ^ 15;
        g_4ce128 = g_4ce108 ^ 0xcc;
        g_4ce129 = g_4ce109 ^ 39;
        g_4ce12a = g_4ce10a ^ 49;
        g_4ce12b = g_4ce10b ^ 179;
    }
    /* unsupported instruction */
    g_57c3c0 = 1;
    ch = _objc_getClass("\"");
    v0 = 3817590;
    _class_addMethod(ch, SEL_wclg_openMiniProgramFromRightTopMenu, 0x3f264, &v0);
    ch1 = _objc_getClass(&g_4ce110);
    _MSHookMessageEx(ch1, SEL_reloadAllItems, 0x3f30c, &g_57c3b0);
    ch2 = _objc_getClass(" ");
    v7 = _MSHookMessageEx(ch2, SEL_m_arrShowIDs, 0x3f38c, &g_57c3b8);
    if (*((long long *)&g_600760) == v1)
        return v7;
    ___stack_chk_fail();
}
