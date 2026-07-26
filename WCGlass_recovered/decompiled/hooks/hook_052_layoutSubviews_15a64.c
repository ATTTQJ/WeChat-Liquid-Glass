/* Hook replacement 52/418
 * Selectors: SEL_layoutSubviews
 * Address: 0x15a64; original size: 664 bytes
 * Status: fallback; elapsed: 0.93s
 */

/* Capstone ARM64 fallback */
0x00015a64  e9 23 ba 6d     stp      d9, d8, [sp, #-0x60]!
0x00015a68  fa 67 01 a9     stp      x26, x25, [sp, #0x10]
0x00015a6c  f8 5f 02 a9     stp      x24, x23, [sp, #0x20]
0x00015a70  f6 57 03 a9     stp      x22, x21, [sp, #0x30]
0x00015a74  f4 4f 04 a9     stp      x20, x19, [sp, #0x40]
0x00015a78  fd 7b 05 a9     stp      x29, x30, [sp, #0x50]
0x00015a7c  fd 43 01 91     add      x29, sp, #0x50
0x00015a80  f5 03 00 aa     mov      x21, x0
0x00015a84  28 2b 00 d0     adrp     x8, #0x57b000
0x00015a88  08 09 43 f9     ldr      x8, [x8, #0x610]
0x00015a8c  00 01 3f d6     blr      x8
0x00015a90  68 2b 00 b0     adrp     x8, #0x582000
0x00015a94  08 21 3e 91     add      x8, x8, #0xf88
0x00015a98  08 01 40 39     ldrb     w8, [x8]
0x00015a9c  a8 05 00 36     tbz      w8, #0, #0x15b50
0x00015aa0  68 2b 00 b0     adrp     x8, #0x582000
0x00015aa4  08 2d 3e 91     add      x8, x8, #0xf8b
0x00015aa8  08 01 40 39     ldrb     w8, [x8]
0x00015aac  28 05 00 36     tbz      w8, #0, #0x15b50
0x00015ab0  64 45 04 94     bl       #0x127040
0x00015ab4  08 08 00 d1     sub      x8, x0, #2
0x00015ab8  1f 09 00 f1     cmp      x8, #2
0x00015abc  68 00 00 54     b.hi     #0x15ac8
0x00015ac0  e0 03 15 aa     mov      x0, x21
0x00015ac4  71 4f 04 94     bl       #0x129888
0x00015ac8  e0 03 15 aa     mov      x0, x21
0x00015acc  ae 06 00 94     bl       #0x17584
0x00015ad0  fd 03 1d aa     mov      x29, x29
0x00015ad4  7e 30 11 94     bl       #0x461ccc
0x00015ad8  f3 03 00 aa     mov      x19, x0
0x00015adc  00 10 00 b4     cbz      x0, #0x15cdc
0x00015ae0  e0 03 15 aa     mov      x0, x21
0x00015ae4  82 f1 05 94     bl       #0x1920ec
0x00015ae8  48 25 00 b0     adrp     x8, #0x4be000
0x00015aec  01 6d 42 f9     ldr      x1, [x8, #0x4d8]
0x00015af0  e0 03 15 aa     mov      x0, x21
0x00015af4  5e 30 11 94     bl       #0x461c6c
0x00015af8  ef 2e 11 94     bl       #0x4616b4
0x00015afc  08 40 60 1e     fmov     d8, d0
0x00015b00  a1 25 00 90     adrp     x1, #0x4c9000
0x00015b04  21 c0 15 91     add      x1, x1, #0x570
0x00015b08  e0 03 15 aa     mov      x0, x21
0x00015b0c  4c 30 11 94     bl       #0x461c3c
0x00015b10  fd 03 1d aa     mov      x29, x29
0x00015b14  6e 30 11 94     bl       #0x461ccc
0x00015b18  f4 03 00 aa     mov      x20, x0
0x00015b1c  80 02 00 b4     cbz      x0, #0x15b6c
0x00015b20  48 25 00 b0     adrp     x8, #0x4be000
0x00015b24  01 d1 43 f9     ldr      x1, [x8, #0x7a0]
0x00015b28  e0 03 15 aa     mov      x0, x21
0x00015b2c  50 30 11 94     bl       #0x461c6c
0x00015b30  fd 03 1d aa     mov      x29, x29
0x00015b34  66 30 11 94     bl       #0x461ccc
0x00015b38  f7 03 00 aa     mov      x23, x0
0x00015b3c  80 03 00 b4     cbz      x0, #0x15bac
0x00015b40  e0 03 17 aa     mov      x0, x23
0x00015b44  59 30 11 94     bl       #0x461ca8
0x00015b48  f6 03 17 aa     mov      x22, x23
0x00015b4c  2f 00 00 14     b        #0x15c08
0x00015b50  fd 7b 45 a9     ldp      x29, x30, [sp, #0x50]
0x00015b54  f4 4f 44 a9     ldp      x20, x19, [sp, #0x40]
0x00015b58  f6 57 43 a9     ldp      x22, x21, [sp, #0x30]
0x00015b5c  f8 5f 42 a9     ldp      x24, x23, [sp, #0x20]
0x00015b60  fa 67 41 a9     ldp      x26, x25, [sp, #0x10]
0x00015b64  e9 23 c6 6c     ldp      d9, d8, [sp], #0x60
0x00015b68  c0 03 5f d6     ret      
0x00015b6c  68 25 00 f0     adrp     x8, #0x4c4000
0x00015b70  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x00015b74  48 25 00 b0     adrp     x8, #0x4be000
0x00015b78  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x00015b7c  00 41 60 1e     fmov     d0, d8
0x00015b80  3b 30 11 94     bl       #0x461c6c
0x00015b84  fd 03 1d aa     mov      x29, x29
0x00015b88  51 30 11 94     bl       #0x461ccc
0x00015b8c  f6 03 00 aa     mov      x22, x0
0x00015b90  a1 25 00 90     adrp     x1, #0x4c9000
0x00015b94  21 c0 15 91     add      x1, x1, #0x570
0x00015b98  e0 03 15 aa     mov      x0, x21
0x00015b9c  e2 03 16 aa     mov      x2, x22
0x00015ba0  23 00 80 52     mov      w3, #1
0x00015ba4  50 30 11 94     bl       #0x461ce4
0x00015ba8  49 00 00 14     b        #0x15ccc
0x00015bac  48 25 00 b0     adrp     x8, #0x4be000
0x00015bb0  01 d9 43 f9     ldr      x1, [x8, #0x7b0]
0x00015bb4  e0 03 15 aa     mov      x0, x21
0x00015bb8  2d 30 11 94     bl       #0x461c6c
0x00015bbc  fd 03 1d aa     mov      x29, x29
0x00015bc0  43 30 11 94     bl       #0x461ccc
0x00015bc4  f8 03 00 aa     mov      x24, x0
0x00015bc8  48 25 00 b0     adrp     x8, #0x4be000
0x00015bcc  01 dd 43 f9     ldr      x1, [x8, #0x7b8]
0x00015bd0  27 30 11 94     bl       #0x461c6c
0x00015bd4  fd 03 1d aa     mov      x29, x29
0x00015bd8  3d 30 11 94     bl       #0x461ccc
0x00015bdc  f9 03 00 aa     mov      x25, x0
0x00015be0  88 24 00 b0     adrp     x8, #0x4a6000
0x00015be4  08 61 03 91     add      x8, x8, #0xd8
0x00015be8  1f 00 00 f1     cmp      x0, #0
0x00015bec  16 01 80 9a     csel     x22, x8, x0, eq
0x00015bf0  e0 03 16 aa     mov      x0, x22
0x00015bf4  2d 30 11 94     bl       #0x461ca8
0x00015bf8  e0 03 19 aa     mov      x0, x25
0x00015bfc  28 30 11 94     bl       #0x461c9c
0x00015c00  e0 03 18 aa     mov      x0, x24
0x00015c04  26 30 11 94     bl       #0x461c9c
0x00015c08  e0 03 17 aa     mov      x0, x23
0x00015c0c  24 30 11 94     bl       #0x461c9c
0x00015c10  a1 25 00 90     adrp     x1, #0x4c9000
0x00015c14  21 c0 14 91     add      x1, x1, #0x530
0x00015c18  e0 03 13 aa     mov      x0, x19
0x00015c1c  08 30 11 94     bl       #0x461c3c
0x00015c20  fd 03 1d aa     mov      x29, x29
0x00015c24  2a 30 11 94     bl       #0x461ccc
0x00015c28  f8 03 00 aa     mov      x24, x0
0x00015c2c  48 25 00 b0     adrp     x8, #0x4be000
0x00015c30  01 b9 41 f9     ldr      x1, [x8, #0x370]
0x00015c34  0e 30 11 94     bl       #0x461c6c
0x00015c38  f7 03 00 aa     mov      x23, x0
0x00015c3c  e0 03 18 aa     mov      x0, x24
0x00015c40  17 30 11 94     bl       #0x461c9c
0x00015c44  48 25 00 b0     adrp     x8, #0x4be000
0x00015c48  01 51 42 f9     ldr      x1, [x8, #0x4a0]
0x00015c4c  e0 03 14 aa     mov      x0, x20
0x00015c50  07 30 11 94     bl       #0x461c6c
0x00015c54  00 d5 e0 7e     fabd     d0, d8, d0
0x00015c58  01 10 6e 1e     fmov     d1, #1.00000000
0x00015c5c  00 20 61 1e     fcmp     d0, d1
0x00015c60  6d 03 00 54     b.le     #0x15ccc
0x00015c64  68 25 00 f0     adrp     x8, #0x4c4000
0x00015c68  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x00015c6c  48 25 00 b0     adrp     x8, #0x4be000
0x00015c70  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x00015c74  00 41 60 1e     fmov     d0, d8
0x00015c78  fd 2f 11 94     bl       #0x461c6c
0x00015c7c  fd 03 1d aa     mov      x29, x29
0x00015c80  13 30 11 94     bl       #0x461ccc
0x00015c84  f8 03 00 aa     mov      x24, x0
0x00015c88  a1 25 00 90     adrp     x1, #0x4c9000
0x00015c8c  21 c0 15 91     add      x1, x1, #0x570
0x00015c90  e0 03 15 aa     mov      x0, x21
0x00015c94  e2 03 18 aa     mov      x2, x24
0x00015c98  23 00 80 52     mov      w3, #1
0x00015c9c  12 30 11 94     bl       #0x461ce4
0x00015ca0  e0 03 18 aa     mov      x0, x24
0x00015ca4  fe 2f 11 94     bl       #0x461c9c
0x00015ca8  48 25 00 b0     adrp     x8, #0x4be000
0x00015cac  01 9d 41 f9     ldr      x1, [x8, #0x338]
0x00015cb0  e0 03 16 aa     mov      x0, x22
0x00015cb4  ee 2f 11 94     bl       #0x461c6c
0x00015cb8  1f 00 00 f1     cmp      x0, #0
0x00015cbc  e8 06 9f 1a     csinc    w8, w23, wzr, eq
0x00015cc0  68 00 00 36     tbz      w8, #0, #0x15ccc
0x00015cc4  e0 03 13 aa     mov      x0, x19
0x00015cc8  cc 06 00 94     bl       #0x177f8
0x00015ccc  e0 03 16 aa     mov      x0, x22
0x00015cd0  f3 2f 11 94     bl       #0x461c9c
0x00015cd4  e0 03 14 aa     mov      x0, x20
0x00015cd8  f1 2f 11 94     bl       #0x461c9c
0x00015cdc  e0 03 13 aa     mov      x0, x19
0x00015ce0  fd 7b 45 a9     ldp      x29, x30, [sp, #0x50]
0x00015ce4  f4 4f 44 a9     ldp      x20, x19, [sp, #0x40]
0x00015ce8  f6 57 43 a9     ldp      x22, x21, [sp, #0x30]
0x00015cec  f8 5f 42 a9     ldp      x24, x23, [sp, #0x20]
0x00015cf0  fa 67 41 a9     ldp      x26, x25, [sp, #0x10]
0x00015cf4  e9 23 c6 6c     ldp      d9, d8, [sp], #0x60
0x00015cf8  e9 2f 11 14     b        #0x461c9c
