/* Recovered pseudocode
 * Objective-C: -[WCLGConfig shouldForceTrueForUserDefaultsKey:]
 * Address: 0x28fa24; original size: 1172 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 0.88s
 */

unsigned long long sub_28fa24(unsigned long a0, unsigned long a1, long long a2)
{
    unsigned long long count;  // x20
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57feac)
    {
        g_52e1c0 = g_52e190 ^ 45;
        g_52e1c1 = g_52e191 ^ 128;
        g_52e1c2 = g_52e192 ^ 171;
        g_52e1c3 = g_52e193 ^ 188;
        g_52e1c4 = g_52e194 ^ 31;
        g_52e1c5 = g_52e195 ^ 123;
        g_52e1c6 = g_52e196 ^ 158;
        g_52e1c7 = g_52e197 ^ 232;
        g_52e1c8 = g_52e198 ^ 147;
        g_52e1c9 = g_52e199 ^ 229;
        g_52e1ca = g_52e19a ^ 162;
        g_52e1cb = g_52e19b ^ 244;
        g_52e1cc = g_52e19c ^ 164;
        g_52e1cd = g_52e19d ^ 247;
        g_52e1ce = g_52e19e ^ 61;
        g_52e1cf = g_52e19f ^ 43;
        g_52e1d0 = g_52e1a0 ^ 175;
        g_52e1d1 = g_52e1a1 ^ 29;
        g_52e1d2 = g_52e1a2 ^ 92;
        g_52e1d3 = g_52e1a3 ^ 138;
        g_52e1d4 = g_52e1a4 ^ 200;
        g_52e1d5 = g_52e1a5 ^ 164;
        g_52e1d6 = g_52e1a6 ^ 129;
        g_52e1d7 = g_52e1a7 ^ 61;
        g_52e1d8 = g_52e1a8 ^ 185;
        g_52e1d9 = g_52e1a9 ^ 52;
        g_52e1da = g_52e1aa ^ 144;
        g_52e1db = g_52e1ab ^ 144;
        g_52e1dc = g_52e1ac ^ 210;
        g_52e1dd = g_52e1ad ^ 72;
        g_52e1de = g_52e1ae ^ 36;
        g_52e1df = g_52e1af ^ 203;
        g_52e1e0 = g_52e1b0 ^ 130;
        g_52e160 = g_52e130 ^ 117;
        g_52e161 = g_52e131 ^ 74;
        g_52e162 = g_52e132 ^ 208;
        g_52e163 = g_52e133 ^ 118;
        g_52e164 = g_52e134 ^ 19;
        g_52e165 = g_52e135 ^ 231;
        g_52e166 = g_52e136 ^ 186;
        g_52e167 = g_52e137 ^ 78;
        g_52e168 = g_52e138 ^ 147;
        g_52e169 = g_52e139 ^ 217;
        g_52e16a = g_52e13a ^ 129;
        g_52e16b = g_52e13b ^ 32;
        g_52e16c = g_52e13c ^ 200;
        g_52e16d = g_52e13d ^ 106;
        g_52e16e = g_52e13e ^ 1;
        g_52e16f = g_52e13f ^ 163;
        g_52e170 = g_52e140 ^ 41;
        g_52e171 = g_52e141 ^ 46;
        g_52e172 = g_52e142 ^ 41;
        g_52e173 = g_52e143 ^ 235;
        g_52e174 = g_52e144 ^ 176;
        g_52e175 = g_52e145 ^ 173;
        g_52e176 = g_52e146 ^ 125;
        g_52e177 = g_52e147 ^ 92;
        g_52e178 = g_52e148 ^ 167;
        g_52e179 = g_52e149 ^ 195;
        g_52e17a = g_52e14a ^ 94;
        g_52e17b = g_52e14b ^ 216;
        g_52e17c = g_52e14c ^ 125;
        g_52e17d = g_52e14d ^ 137;
        g_52e17e = g_52e14e ^ 205;
        g_52e17f = g_52e14f ^ 20;
        g_52e180 = g_52e150 ^ 217;
    }
    /* unsupported instruction */
    g_57feac = 1;
    _objc_retain(a2);
    if (!(g_582f88 & 1))
    {
        _objc_release(a2);
        return 0;
    }
    else if (((char)_objc_msgSend(a2, SEL_isEqualToString_, &g_52e250) & 1))
    {
        _objc_release(a2);
        return 1;
    }
    else
    {
        count = _objc_msgSend(a2, SEL_isEqualToString_, &g_52e210);
        _objc_release(a2);
        return count;
    }
}
