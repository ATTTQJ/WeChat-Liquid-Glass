/* Hook replacement 278/418
 * Selectors: SEL_canPushMiniTaskViewController
 * Address: 0x442c8; original size: 36 bytes
 * Status: ok; elapsed: 0.192s
 */

char sub_442c8(void)
{
    if ((g_582f88 & 1))
        return 0;
    goto g_57c4d8;
}
