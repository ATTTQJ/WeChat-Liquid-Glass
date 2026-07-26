/* Hook replacement 46/418
 * Selectors: SEL_deleteBackward
 * Address: 0x14b28; original size: 996 bytes
 * Status: fallback; elapsed: 1.153s
 */

/* Capstone ARM64 fallback */
0x00014b28  e9 23 b9 6d     stp      d9, d8, [sp, #-0x70]!
0x00014b2c  fc 6f 01 a9     stp      x28, x27, [sp, #0x10]
0x00014b30  fa 67 02 a9     stp      x26, x25, [sp, #0x20]
0x00014b34  f8 5f 03 a9     stp      x24, x23, [sp, #0x30]
0x00014b38  f6 57 04 a9     stp      x22, x21, [sp, #0x40]
0x00014b3c  f4 4f 05 a9     stp      x20, x19, [sp, #0x50]
0x00014b40  fd 7b 06 a9     stp      x29, x30, [sp, #0x60]
0x00014b44  fd 83 01 91     add      x29, sp, #0x60
0x00014b48  f7 03 01 aa     mov      x23, x1
0x00014b4c  f5 03 00 aa     mov      x21, x0
0x00014b50  68 2b 00 d0     adrp     x8, #0x582000
0x00014b54  08 21 3e 91     add      x8, x8, #0xf88
0x00014b58  08 01 40 39     ldrb     w8, [x8]
0x00014b5c  08 03 00 36     tbz      w8, #0, #0x14bbc
0x00014b60  68 2b 00 d0     adrp     x8, #0x582000
0x00014b64  08 2d 3e 91     add      x8, x8, #0xf8b
0x00014b68  08 01 40 39     ldrb     w8, [x8]
0x00014b6c  88 02 00 36     tbz      w8, #0, #0x14bbc
0x00014b70  e0 03 15 aa     mov      x0, x21
0x00014b74  84 0a 00 94     bl       #0x17584
0x00014b78  fd 03 1d aa     mov      x29, x29
0x00014b7c  54 34 11 94     bl       #0x461ccc
0x00014b80  f3 03 00 aa     mov      x19, x0
0x00014b84  5b 25 00 d0     adrp     x27, #0x4be000
0x00014b88  5a 25 00 d0     adrp     x26, #0x4be000
0x00014b8c  00 03 00 b4     cbz      x0, #0x14bec
0x00014b90  61 d3 43 f9     ldr      x1, [x27, #0x7a0]
0x00014b94  e0 03 15 aa     mov      x0, x21
0x00014b98  35 34 11 94     bl       #0x461c6c
0x00014b9c  fd 03 1d aa     mov      x29, x29
0x00014ba0  4b 34 11 94     bl       #0x461ccc
0x00014ba4  f6 03 00 aa     mov      x22, x0
0x00014ba8  e0 02 00 b4     cbz      x0, #0x14c04
0x00014bac  e0 03 16 aa     mov      x0, x22
0x00014bb0  3e 34 11 94     bl       #0x461ca8
0x00014bb4  f4 03 16 aa     mov      x20, x22
0x00014bb8  2a 00 00 14     b        #0x14c60
0x00014bbc  28 2b 00 f0     adrp     x8, #0x57b000
0x00014bc0  02 f1 42 f9     ldr      x2, [x8, #0x5e0]
0x00014bc4  e0 03 15 aa     mov      x0, x21
0x00014bc8  e1 03 17 aa     mov      x1, x23
0x00014bcc  fd 7b 46 a9     ldp      x29, x30, [sp, #0x60]
0x00014bd0  f4 4f 45 a9     ldp      x20, x19, [sp, #0x50]
0x00014bd4  f6 57 44 a9     ldp      x22, x21, [sp, #0x40]
0x00014bd8  f8 5f 43 a9     ldp      x24, x23, [sp, #0x30]
0x00014bdc  fa 67 42 a9     ldp      x26, x25, [sp, #0x20]
0x00014be0  fc 6f 41 a9     ldp      x28, x27, [sp, #0x10]
0x00014be4  e9 23 c7 6c     ldp      d9, d8, [sp], #0x70
0x00014be8  40 00 1f d6     br       x2
0x00014bec  68 24 00 90     adrp     x8, #0x4a0000
0x00014bf0  08 09 43 f9     ldr      x8, [x8, #0x610]
0x00014bf4  08 05 40 fd     ldr      d8, [x8, #8]
0x00014bf8  94 24 00 d0     adrp     x20, #0x4a6000
0x00014bfc  94 62 03 91     add      x20, x20, #0xd8
0x00014c00  1e 00 00 14     b        #0x14c78
0x00014c04  48 25 00 d0     adrp     x8, #0x4be000
0x00014c08  01 d9 43 f9     ldr      x1, [x8, #0x7b0]
0x00014c0c  e0 03 15 aa     mov      x0, x21
0x00014c10  17 34 11 94     bl       #0x461c6c
0x00014c14  fd 03 1d aa     mov      x29, x29
0x00014c18  2d 34 11 94     bl       #0x461ccc
0x00014c1c  f8 03 00 aa     mov      x24, x0
0x00014c20  48 25 00 d0     adrp     x8, #0x4be000
0x00014c24  01 dd 43 f9     ldr      x1, [x8, #0x7b8]
0x00014c28  11 34 11 94     bl       #0x461c6c
0x00014c2c  fd 03 1d aa     mov      x29, x29
0x00014c30  27 34 11 94     bl       #0x461ccc
0x00014c34  f9 03 00 aa     mov      x25, x0
0x00014c38  88 24 00 d0     adrp     x8, #0x4a6000
0x00014c3c  08 61 03 91     add      x8, x8, #0xd8
0x00014c40  1f 00 00 f1     cmp      x0, #0
0x00014c44  14 01 80 9a     csel     x20, x8, x0, eq
0x00014c48  e0 03 14 aa     mov      x0, x20
0x00014c4c  17 34 11 94     bl       #0x461ca8
0x00014c50  e0 03 19 aa     mov      x0, x25
0x00014c54  12 34 11 94     bl       #0x461c9c
0x00014c58  e0 03 18 aa     mov      x0, x24
0x00014c5c  10 34 11 94     bl       #0x461c9c
0x00014c60  e0 03 16 aa     mov      x0, x22
0x00014c64  0e 34 11 94     bl       #0x461c9c
0x00014c68  41 6b 42 f9     ldr      x1, [x26, #0x4d0]
0x00014c6c  e0 03 15 aa     mov      x0, x21
0x00014c70  ff 33 11 94     bl       #0x461c6c
0x00014c74  28 40 60 1e     fmov     d8, d1
0x00014c78  48 25 00 d0     adrp     x8, #0x4be000
0x00014c7c  16 9d 41 f9     ldr      x22, [x8, #0x338]
0x00014c80  e0 03 14 aa     mov      x0, x20
0x00014c84  e1 03 16 aa     mov      x1, x22
0x00014c88  f9 33 11 94     bl       #0x461c6c
0x00014c8c  e0 05 00 b4     cbz      x0, #0x14d48
0x00014c90  88 25 00 90     adrp     x8, #0x4c4000
0x00014c94  00 61 40 f9     ldr      x0, [x8, #0xc0]
0x00014c98  48 25 00 d0     adrp     x8, #0x4be000
0x00014c9c  01 dd 42 f9     ldr      x1, [x8, #0x5b8]
0x00014ca0  f3 33 11 94     bl       #0x461c6c
0x00014ca4  fd 03 1d aa     mov      x29, x29
0x00014ca8  09 34 11 94     bl       #0x461ccc
0x00014cac  f8 03 00 aa     mov      x24, x0
0x00014cb0  48 25 00 d0     adrp     x8, #0x4be000
0x00014cb4  01 e1 42 f9     ldr      x1, [x8, #0x5c0]
0x00014cb8  e0 03 14 aa     mov      x0, x20
0x00014cbc  e2 03 18 aa     mov      x2, x24
0x00014cc0  eb 33 11 94     bl       #0x461c6c
0x00014cc4  fd 03 1d aa     mov      x29, x29
0x00014cc8  01 34 11 94     bl       #0x461ccc
0x00014ccc  f9 03 00 aa     mov      x25, x0
0x00014cd0  e1 03 16 aa     mov      x1, x22
0x00014cd4  e6 33 11 94     bl       #0x461c6c
0x00014cd8  fa 03 00 aa     mov      x26, x0
0x00014cdc  1f 00 00 f1     cmp      x0, #0
0x00014ce0  fc 17 9f 1a     cset     w28, eq
0x00014ce4  e0 03 19 aa     mov      x0, x25
0x00014ce8  ed 33 11 94     bl       #0x461c9c
0x00014cec  e0 03 18 aa     mov      x0, x24
0x00014cf0  eb 33 11 94     bl       #0x461c9c
0x00014cf4  d3 02 00 b4     cbz      x19, #0x14d4c
0x00014cf8  ba 02 00 b5     cbnz     x26, #0x14d4c
0x00014cfc  88 25 00 90     adrp     x8, #0x4c4000
0x00014d00  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x00014d04  48 25 00 d0     adrp     x8, #0x4be000
0x00014d08  01 7d 42 f9     ldr      x1, [x8, #0x4f8]
0x00014d0c  22 00 80 52     mov      w2, #1
0x00014d10  d7 33 11 94     bl       #0x461c6c
0x00014d14  fd 03 1d aa     mov      x29, x29
0x00014d18  ed 33 11 94     bl       #0x461ccc
0x00014d1c  f8 03 00 aa     mov      x24, x0
0x00014d20  a1 25 00 b0     adrp     x1, #0x4c9000
0x00014d24  21 c0 14 91     add      x1, x1, #0x530
0x00014d28  e0 03 13 aa     mov      x0, x19
0x00014d2c  e2 03 18 aa     mov      x2, x24
0x00014d30  23 00 80 52     mov      w3, #1
0x00014d34  ec 33 11 94     bl       #0x461ce4
0x00014d38  e0 03 18 aa     mov      x0, x24
0x00014d3c  d8 33 11 94     bl       #0x461c9c
0x00014d40  3c 00 80 52     mov      w28, #1
0x00014d44  02 00 00 14     b        #0x14d4c
0x00014d48  1c 00 80 52     mov      w28, #0
0x00014d4c  28 2b 00 f0     adrp     x8, #0x57b000
0x00014d50  08 f1 42 f9     ldr      x8, [x8, #0x5e0]
0x00014d54  e0 03 15 aa     mov      x0, x21
0x00014d58  e1 03 17 aa     mov      x1, x23
0x00014d5c  00 01 3f d6     blr      x8
0x00014d60  e0 03 15 aa     mov      x0, x21
0x00014d64  d1 33 11 94     bl       #0x461ca8
0x00014d68  b6 48 04 94     bl       #0x127040
0x00014d6c  08 08 00 d1     sub      x8, x0, #2
0x00014d70  1f 09 00 f1     cmp      x8, #2
0x00014d74  68 00 00 54     b.hi     #0x14d80
0x00014d78  e0 03 15 aa     mov      x0, x21
0x00014d7c  c3 52 04 94     bl       #0x129888
0x00014d80  e0 03 15 aa     mov      x0, x21
0x00014d84  c6 33 11 94     bl       #0x461c9c
0x00014d88  e0 03 15 aa     mov      x0, x21
0x00014d8c  fe 09 00 94     bl       #0x17584
0x00014d90  fd 03 1d aa     mov      x29, x29
0x00014d94  ce 33 11 94     bl       #0x461ccc
0x00014d98  f7 03 00 aa     mov      x23, x0
0x00014d9c  a0 00 00 b5     cbnz     x0, #0x14db0
0x00014da0  e0 03 13 aa     mov      x0, x19
0x00014da4  c1 33 11 94     bl       #0x461ca8
0x00014da8  f7 03 13 aa     mov      x23, x19
0x00014dac  b3 09 00 b4     cbz      x19, #0x14ee0
0x00014db0  61 d3 43 f9     ldr      x1, [x27, #0x7a0]
0x00014db4  e0 03 15 aa     mov      x0, x21
0x00014db8  ad 33 11 94     bl       #0x461c6c
0x00014dbc  fd 03 1d aa     mov      x29, x29
0x00014dc0  c3 33 11 94     bl       #0x461ccc
0x00014dc4  f9 03 00 aa     mov      x25, x0
0x00014dc8  a0 00 00 b4     cbz      x0, #0x14ddc
0x00014dcc  e0 03 19 aa     mov      x0, x25
0x00014dd0  b6 33 11 94     bl       #0x461ca8
0x00014dd4  f8 03 19 aa     mov      x24, x25
0x00014dd8  18 00 00 14     b        #0x14e38
0x00014ddc  48 25 00 d0     adrp     x8, #0x4be000
0x00014de0  01 d9 43 f9     ldr      x1, [x8, #0x7b0]
0x00014de4  e0 03 15 aa     mov      x0, x21
0x00014de8  a1 33 11 94     bl       #0x461c6c
0x00014dec  fd 03 1d aa     mov      x29, x29
0x00014df0  b7 33 11 94     bl       #0x461ccc
0x00014df4  fa 03 00 aa     mov      x26, x0
0x00014df8  48 25 00 d0     adrp     x8, #0x4be000
0x00014dfc  01 dd 43 f9     ldr      x1, [x8, #0x7b8]
0x00014e00  9b 33 11 94     bl       #0x461c6c
0x00014e04  fd 03 1d aa     mov      x29, x29
0x00014e08  b1 33 11 94     bl       #0x461ccc
0x00014e0c  fb 03 00 aa     mov      x27, x0
0x00014e10  88 24 00 d0     adrp     x8, #0x4a6000
0x00014e14  08 61 03 91     add      x8, x8, #0xd8
0x00014e18  1f 00 00 f1     cmp      x0, #0
0x00014e1c  18 01 80 9a     csel     x24, x8, x0, eq
0x00014e20  e0 03 18 aa     mov      x0, x24
0x00014e24  a1 33 11 94     bl       #0x461ca8
0x00014e28  e0 03 1b aa     mov      x0, x27
0x00014e2c  9c 33 11 94     bl       #0x461c9c
0x00014e30  e0 03 1a aa     mov      x0, x26
0x00014e34  9a 33 11 94     bl       #0x461c9c
0x00014e38  e0 03 19 aa     mov      x0, x25
0x00014e3c  98 33 11 94     bl       #0x461c9c
0x00014e40  1c 01 00 34     cbz      w28, #0x14e60
0x00014e44  e0 03 18 aa     mov      x0, x24
0x00014e48  e1 03 16 aa     mov      x1, x22
0x00014e4c  88 33 11 94     bl       #0x461c6c
0x00014e50  5a 25 00 d0     adrp     x26, #0x4be000
0x00014e54  1f 00 00 f1     cmp      x0, #0
0x00014e58  f9 17 9f 1a     cset     w25, eq
0x00014e5c  03 00 00 14     b        #0x14e68
0x00014e60  19 00 80 52     mov      w25, #0
0x00014e64  5a 25 00 d0     adrp     x26, #0x4be000
0x00014e68  e0 03 15 aa     mov      x0, x21
0x00014e6c  a0 f4 05 94     bl       #0x1920ec
0x00014e70  41 6b 42 f9     ldr      x1, [x26, #0x4d0]
0x00014e74  e0 03 15 aa     mov      x0, x21
0x00014e78  7d 33 11 94     bl       #0x461c6c
0x00014e7c  29 40 60 1e     fmov     d9, d1
0x00014e80  e0 03 14 aa     mov      x0, x20
0x00014e84  e1 03 16 aa     mov      x1, x22
0x00014e88  79 33 11 94     bl       #0x461c6c
0x00014e8c  f5 03 00 aa     mov      x21, x0
0x00014e90  e0 03 18 aa     mov      x0, x24
0x00014e94  e1 03 16 aa     mov      x1, x22
0x00014e98  75 33 11 94     bl       #0x461c6c
0x00014e9c  20 d5 e8 7e     fabd     d0, d9, d8
0x00014ea0  bf 02 00 f1     cmp      x21, #0
0x00014ea4  e8 17 9f 1a     cset     w8, eq
0x00014ea8  01 10 6e 1e     fmov     d1, #1.00000000
0x00014eac  00 20 61 1e     fcmp     d0, d1
0x00014eb0  2a d7 9f 1a     csinc    w10, w25, wzr, le
0x00014eb4  1f 00 00 f1     cmp      x0, #0
0x00014eb8  e9 17 9f 1a     cset     w9, eq
0x00014ebc  6a 00 00 37     tbnz     w10, #0, #0x14ec8
0x00014ec0  08 01 09 4a     eor      w8, w8, w9
0x00014ec4  68 00 00 34     cbz      w8, #0x14ed0
0x00014ec8  e0 03 17 aa     mov      x0, x23
0x00014ecc  4b 0a 00 94     bl       #0x177f8
0x00014ed0  e0 03 18 aa     mov      x0, x24
0x00014ed4  72 33 11 94     bl       #0x461c9c
0x00014ed8  e0 03 17 aa     mov      x0, x23
0x00014edc  70 33 11 94     bl       #0x461c9c
0x00014ee0  e0 03 14 aa     mov      x0, x20
0x00014ee4  6e 33 11 94     bl       #0x461c9c
0x00014ee8  e0 03 13 aa     mov      x0, x19
0x00014eec  fd 7b 46 a9     ldp      x29, x30, [sp, #0x60]
0x00014ef0  f4 4f 45 a9     ldp      x20, x19, [sp, #0x50]
0x00014ef4  f6 57 44 a9     ldp      x22, x21, [sp, #0x40]
0x00014ef8  f8 5f 43 a9     ldp      x24, x23, [sp, #0x30]
0x00014efc  fa 67 42 a9     ldp      x26, x25, [sp, #0x20]
0x00014f00  fc 6f 41 a9     ldp      x28, x27, [sp, #0x10]
0x00014f04  e9 23 c7 6c     ldp      d9, d8, [sp], #0x70
0x00014f08  65 33 11 14     b        #0x461c9c
