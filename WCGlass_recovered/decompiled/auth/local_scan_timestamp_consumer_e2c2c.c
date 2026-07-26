/* Authorization path recovery
 * Label: local_scan_timestamp_consumer
 * Address: 0xe2c2c; size: 896
 * Status: ok; elapsed: 1.162s
 */

long long sub_e2c2c(void)
{
    long long count;  // x0
    long long v8;  // x0
    unsigned long long v9;  // d0
    unsigned long long iter;  // d0
    char *v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x80]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    count = _objc_msgSend(g_4c4060, SEL_sharedConfig);
    v8 = _objc_retainAutoreleasedReturnValue(count, SEL_sharedConfig);
    _objc_msgSend(v8, SEL_doubleForKey_, g_4a4048);
    _objc_release(v8);
    v1 = 1564942541;
    v0 = &v1;
    iter = v9;
}
