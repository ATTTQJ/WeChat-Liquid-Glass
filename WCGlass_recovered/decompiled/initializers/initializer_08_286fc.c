/* Mach-O initializer 8/33
 * Address: 0x286fc; original size: 2348 bytes
 * Status: ok; elapsed: 1.692s
 */

unsigned long long sub_286fc(void)
{
    unsigned int v2;  // w7
    long long count;  // x0
    long long ch;  // x0
    long long ch1;  // x0
    unsigned long long v14;  // x0
    long long v4;  // x19
    unsigned int v5;  // w0
    unsigned int v6;  // w8
    unsigned long long v7;  // x0
    long long ch2;  // x19
    long long v9;  // x0
    long long v10;  // x0
    long long v11;  // x19
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    /* unsupported instruction */
    if (!g_57bd88)
    {
        if (556859593 > (3221800214 * (g_4cb880 + g_4cb884 & 294058458) ^ 3349875692))
        {
            *((char *)&g_4cb870) = g_4cb860 ^ 206;
            g_4cb871 = g_4cb861 ^ 64;
            g_4cb872 = g_4cb862 ^ 47;
            g_4cb873 = g_4cb863 ^ 0xaa;
            g_4cb874 = g_4cb864 ^ 223;
            g_4cb875 = g_4cb865 ^ 251;
            g_4cb876 = g_4cb866 ^ 219;
            g_4cb877 = g_4cb867 ^ 26;
            g_4cb878 = g_4cb868 ^ 0x88;
            g_4cb879 = g_4cb869 ^ 47;
            g_4cb87a = g_4cb86a ^ 105;
            g_4cb87b = g_4cb86b ^ 93;
            g_4cb87c = g_4cb86c ^ 18;
            g_4cb87d = g_4cb86d ^ 114;
            g_4cb87e = g_4cb86e ^ 45;
            g_4cb87f = g_4cb86f ^ 125;
            *((char *)&g_4cb851) = g_4cb842 ^ 246;
            g_4cb852 = g_4cb843 ^ 216;
            g_4cb853 = g_4cb844 ^ 125;
            g_4cb854 = g_4cb845 ^ 230;
            g_4cb855 = g_4cb846 ^ 150;
            g_4cb856 = g_4cb847 ^ 240;
            g_4cb857 = g_4cb848 ^ 125;
            g_4cb858 = g_4cb849 ^ 66;
            g_4cb859 = g_4cb84a ^ 55;
            g_4cb85a = g_4cb84b ^ 104;
            g_4cb85b = g_4cb84c ^ 120;
            g_4cb85c = g_4cb84d ^ 94;
            g_4cb85d = g_4cb84e ^ 24;
            g_4cb85e = g_4cb84f ^ 227;
            g_4cb85f = g_4cb850 ^ 155;
            *((char *)&g_4cb839) = g_4cb830 ^ 193;
            g_4cb83a = g_4cb831 ^ 73;
            g_4cb83b = g_4cb832 ^ 46;
            g_4cb83c = g_4cb833 ^ 224;
            g_4cb83d = g_4cb834 ^ 115;
            g_4cb83e = g_4cb835 ^ 92;
            g_4cb83f = g_4cb836 ^ 160;
            g_4cb840 = g_4cb837 ^ 54;
            g_4cb841 = g_4cb838 ^ 57;
        }
        do
        {
            v2 = g_4cb888 ^ g_4cb88c;
            *((char *)&g_4cb870) = g_4cb860 ^ 206;
            g_4cb871 = g_4cb861 ^ 64;
            g_4cb872 = g_4cb862 ^ 47;
            g_4cb873 = g_4cb863 ^ 0xaa;
            g_4cb874 = g_4cb864 ^ 223;
            g_4cb875 = g_4cb865 ^ 251;
            g_4cb876 = g_4cb866 ^ 219;
            g_4cb877 = g_4cb867 ^ 26;
            g_4cb878 = g_4cb868 ^ 0x88;
            g_4cb879 = g_4cb869 ^ 47;
            g_4cb87a = g_4cb86a ^ 105;
            g_4cb87b = g_4cb86b ^ 93;
            g_4cb87c = g_4cb86c ^ 18;
            g_4cb87d = g_4cb86d ^ 114;
            g_4cb87e = g_4cb86e ^ 45;
            g_4cb87f = g_4cb86f ^ 125;
            *((char *)&g_4cb851) = g_4cb842 ^ 246;
            g_4cb852 = g_4cb843 ^ 216;
            g_4cb853 = g_4cb844 ^ 125;
            g_4cb854 = g_4cb845 ^ 230;
            g_4cb855 = g_4cb846 ^ 150;
            g_4cb856 = g_4cb847 ^ 240;
            g_4cb857 = g_4cb848 ^ 125;
            g_4cb858 = g_4cb849 ^ 66;
            g_4cb859 = g_4cb84a ^ 55;
            g_4cb85a = g_4cb84b ^ 104;
            g_4cb85b = g_4cb84c ^ 120;
            g_4cb85c = g_4cb84d ^ 94;
            g_4cb85d = g_4cb84e ^ 24;
            g_4cb85e = g_4cb84f ^ 227;
            g_4cb85f = g_4cb850 ^ 155;
            *((char *)&g_4cb839) = g_4cb830 ^ 193;
            g_4cb83a = g_4cb831 ^ 73;
            g_4cb83b = g_4cb832 ^ 46;
            g_4cb83c = g_4cb833 ^ 224;
            g_4cb83d = g_4cb834 ^ 115;
            g_4cb83e = g_4cb835 ^ 92;
            g_4cb83f = g_4cb836 ^ 160;
            g_4cb840 = g_4cb837 ^ 54;
        } while ((g_4cb841 = g_4cb838 ^ 57, 3574918191 < ((unsigned int)(__ROL__(((v2 ^ 4115912837) + 576364614) * 917644555, 3)) & 7)));
    }
    /* unsupported instruction */
    g_57bd88 = 1;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v4 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    v5 = _objc_msgSend(v4, SEL_liquidGlassEnabled);
    if ((g_4cb890 | g_4cb894) == 2948532514)
        _objc_release(v4);
    do
    {
        v6 = g_4cb89c * g_4cb898;
        v7 = _objc_release(v4);
    } while (1386526532 * (328924741 ^ __ROL__(v6 * 1039022279, 32) + (v6 - __ROL__(v6 * 1039022279, 32) >> 1) >> 30) < 3071799431);
    if (!v5)
        return v7;
    if (((__ROL__((g_4cb8a0 ^ g_4cb8a4) * 2169238335, 2) & 3) + 855382421 | 834067196) == 3307323624)
        goto LABEL_28f08;
    while (1)
    {
        v11 = _objc_getClass("\t");
        _MSHookMessageEx(v11, SEL_wclg_fetchAttachmentItemsViaOrig_, 0x29028, &g_57bd48);
        _MSHookMessageEx(v11, SEL_didMoveToWindow, 0x29034, &g_57bd50);
        _MSHookMessageEx(v11, SEL_layoutSubviews, 0x29060, &g_57bd58);
        _MSHookMessageEx(v11, SEL_onShowAttachViewWithPageIndex_items_, 0x291d0, &g_57bd60);
        _MSHookMessageEx(v11, SEL_onAttachmentModeChangeButtonClicked_, 0x29270, &g_57bd68);
        ch = _objc_getClass("C");
        _MSHookMessageEx(ch, SEL_reloadThemeResource, 0x293f4, &g_57bd70);
        ch1 = _objc_getClass(&g_4cb839);
        _MSHookMessageEx(ch1, SEL_contextMenuInteraction_willDisplayMenuForConfiguration_animator_, 0x29414, &g_57bd78);
        v14 = _MSHookMessageEx(ch1, SEL_contextMenuInteraction_willEndForConfiguration_animator_, 0x29478, &g_57bd80);
        if (1651697097 <= (g_4cb8a8 & g_4cb8ac & 2290007632) + 2928206043)
            break;
LABEL_28f08:
        ch2 = _objc_getClass("\t");
        _MSHookMessageEx(ch2, SEL_wclg_fetchAttachmentItemsViaOrig_, 0x29028, &g_57bd48);
        _MSHookMessageEx(ch2, SEL_didMoveToWindow, 0x29034, &g_57bd50);
        _MSHookMessageEx(ch2, SEL_layoutSubviews, 0x29060, &g_57bd58);
        _MSHookMessageEx(ch2, SEL_onShowAttachViewWithPageIndex_items_, 0x291d0, &g_57bd60);
        _MSHookMessageEx(ch2, SEL_onAttachmentModeChangeButtonClicked_, 0x29270, &g_57bd68);
        v9 = _objc_getClass("C");
        _MSHookMessageEx(v9, SEL_reloadThemeResource, 0x293f4, &g_57bd70);
        v10 = _objc_getClass(&g_4cb839);
        _MSHookMessageEx(v10, SEL_contextMenuInteraction_willDisplayMenuForConfiguration_animator_, 0x29414, &g_57bd78);
        _MSHookMessageEx(v10, SEL_contextMenuInteraction_willEndForConfiguration_animator_, 0x29478, &g_57bd80);
    }
    return v14;
}
