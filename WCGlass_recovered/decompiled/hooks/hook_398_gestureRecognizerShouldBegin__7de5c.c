/* Hook replacement 398/418
 * Selectors: SEL_gestureRecognizerShouldBegin_
 * Address: 0x7de5c; original size: 1160 bytes
 * Status: fallback; elapsed: 1.904s
 */

/* Capstone ARM64 fallback */
0x0007de5c  ff 43 02 d1     sub      sp, sp, #0x90
0x0007de60  eb 2b 01 6d     stp      d11, d10, [sp, #0x10]
0x0007de64  e9 23 02 6d     stp      d9, d8, [sp, #0x20]
0x0007de68  fc 6f 03 a9     stp      x28, x27, [sp, #0x30]
0x0007de6c  fa 67 04 a9     stp      x26, x25, [sp, #0x40]
0x0007de70  f8 5f 05 a9     stp      x24, x23, [sp, #0x50]
0x0007de74  f6 57 06 a9     stp      x22, x21, [sp, #0x60]
0x0007de78  f4 4f 07 a9     stp      x20, x19, [sp, #0x70]
0x0007de7c  fd 7b 08 a9     stp      x29, x30, [sp, #0x80]
0x0007de80  fd 03 02 91     add      x29, sp, #0x80
0x0007de84  f3 03 02 aa     mov      x19, x2
0x0007de88  f7 03 01 aa     mov      x23, x1
0x0007de8c  f5 03 00 aa     mov      x21, x0
0x0007de90  e0 03 02 aa     mov      x0, x2
0x0007de94  85 8f 0f 94     bl       #0x461ca8
0x0007de98  08 22 00 b0     adrp     x8, #0x4be000
0x0007de9c  16 ed 41 f9     ldr      x22, [x8, #0x3d8]
0x0007dea0  e0 03 13 aa     mov      x0, x19
0x0007dea4  e1 03 16 aa     mov      x1, x22
0x0007dea8  71 8f 0f 94     bl       #0x461c6c
0x0007deac  fd 03 1d aa     mov      x29, x29
0x0007deb0  87 8f 0f 94     bl       #0x461ccc
0x0007deb4  f4 03 00 aa     mov      x20, x0
0x0007deb8  28 22 00 f0     adrp     x8, #0x4c4000
0x0007debc  00 ed 40 f9     ldr      x0, [x8, #0x1d8]
0x0007dec0  08 22 00 b0     adrp     x8, #0x4be000
0x0007dec4  01 09 42 f9     ldr      x1, [x8, #0x410]
0x0007dec8  69 8f 0f 94     bl       #0x461c6c
0x0007decc  e2 03 00 aa     mov      x2, x0
0x0007ded0  08 22 00 b0     adrp     x8, #0x4be000
0x0007ded4  01 0d 42 f9     ldr      x1, [x8, #0x418]
0x0007ded8  e0 03 13 aa     mov      x0, x19
0x0007dedc  64 8f 0f 94     bl       #0x461c6c
0x0007dee0  9f 02 00 f1     cmp      x20, #0
0x0007dee4  08 00 00 52     eor      w8, w0, #1
0x0007dee8  08 15 9f 1a     csinc    w8, w8, wzr, ne
0x0007deec  68 01 00 37     tbnz     w8, #0, #0x7df18
0x0007def0  08 22 00 d0     adrp     x8, #0x4bf000
0x0007def4  01 f9 41 f9     ldr      x1, [x8, #0x3f0]
0x0007def8  e0 03 14 aa     mov      x0, x20
0x0007defc  5c 8f 0f 94     bl       #0x461c6c
0x0007df00  fd 03 1d aa     mov      x29, x29
0x0007df04  72 8f 0f 94     bl       #0x461ccc
0x0007df08  f8 03 00 aa     mov      x24, x0
0x0007df0c  64 8f 0f 94     bl       #0x461c9c
0x0007df10  1f 03 13 eb     cmp      x24, x19
0x0007df14  e0 02 00 54     b.eq     #0x7df70
0x0007df18  08 28 00 90     adrp     x8, #0x57d000
0x0007df1c  08 8d 40 f9     ldr      x8, [x8, #0x118]
0x0007df20  e0 03 15 aa     mov      x0, x21
0x0007df24  e1 03 17 aa     mov      x1, x23
0x0007df28  e2 03 13 aa     mov      x2, x19
0x0007df2c  00 01 3f d6     blr      x8
0x0007df30  f8 03 00 aa     mov      x24, x0
0x0007df34  e0 03 14 aa     mov      x0, x20
0x0007df38  59 8f 0f 94     bl       #0x461c9c
0x0007df3c  e0 03 13 aa     mov      x0, x19
0x0007df40  57 8f 0f 94     bl       #0x461c9c
0x0007df44  e0 03 18 aa     mov      x0, x24
0x0007df48  fd 7b 48 a9     ldp      x29, x30, [sp, #0x80]
0x0007df4c  f4 4f 47 a9     ldp      x20, x19, [sp, #0x70]
0x0007df50  f6 57 46 a9     ldp      x22, x21, [sp, #0x60]
0x0007df54  f8 5f 45 a9     ldp      x24, x23, [sp, #0x50]
0x0007df58  fa 67 44 a9     ldp      x26, x25, [sp, #0x40]
0x0007df5c  fc 6f 43 a9     ldp      x28, x27, [sp, #0x30]
0x0007df60  e9 23 42 6d     ldp      d9, d8, [sp, #0x20]
0x0007df64  eb 2b 41 6d     ldp      d11, d10, [sp, #0x10]
0x0007df68  ff 43 02 91     add      sp, sp, #0x90
0x0007df6c  c0 03 5f d6     ret      
0x0007df70  e0 03 13 aa     mov      x0, x19
0x0007df74  4d 8f 0f 94     bl       #0x461ca8
0x0007df78  08 28 00 90     adrp     x8, #0x57d000
0x0007df7c  08 a1 44 39     ldrb     w8, [x8, #0x128]
0x0007df80  68 00 00 36     tbz      w8, #0, #0x7df8c
0x0007df84  18 00 80 52     mov      w24, #0
0x0007df88  d4 00 00 14     b        #0x7e2d8
0x0007df8c  e0 03 13 aa     mov      x0, x19
0x0007df90  46 8f 0f 94     bl       #0x461ca8
0x0007df94  e1 03 16 aa     mov      x1, x22
0x0007df98  35 8f 0f 94     bl       #0x461c6c
0x0007df9c  fd 03 1d aa     mov      x29, x29
0x0007dfa0  4b 8f 0f 94     bl       #0x461ccc
0x0007dfa4  f7 03 00 aa     mov      x23, x0
0x0007dfa8  08 22 00 d0     adrp     x8, #0x4bf000
0x0007dfac  01 31 42 f9     ldr      x1, [x8, #0x460]
0x0007dfb0  e0 03 13 aa     mov      x0, x19
0x0007dfb4  e2 03 17 aa     mov      x2, x23
0x0007dfb8  2d 8f 0f 94     bl       #0x461c6c
0x0007dfbc  08 40 60 1e     fmov     d8, d0
0x0007dfc0  29 40 60 1e     fmov     d9, d1
0x0007dfc4  e0 03 17 aa     mov      x0, x23
0x0007dfc8  35 8f 0f 94     bl       #0x461c9c
0x0007dfcc  20 c1 60 1e     fabs     d0, d9
0x0007dfd0  01 c1 60 1e     fabs     d1, d8
0x0007dfd4  42 8e 0f 94     bl       #0x4618dc
0x0007dfd8  a8 20 00 90     adrp     x8, #0x491000
0x0007dfdc  01 81 42 fd     ldr      d1, [x8, #0x500]
0x0007dfe0  00 08 61 1e     fmul     d0, d0, d1
0x0007dfe4  a8 20 00 90     adrp     x8, #0x491000
0x0007dfe8  01 f5 42 fd     ldr      d1, [x8, #0x5e8]
0x0007dfec  00 18 61 1e     fdiv     d0, d0, d1
0x0007dff0  01 d0 67 1e     fmov     d1, #30.00000000
0x0007dff4  00 20 61 1e     fcmp     d0, d1
0x0007dff8  8d 00 00 54     b.le     #0x7e008
0x0007dffc  18 00 80 52     mov      w24, #0
0x0007e000  f7 03 13 aa     mov      x23, x19
0x0007e004  b3 00 00 14     b        #0x7e2d0
0x0007e008  28 22 00 d0     adrp     x8, #0x4c4000
0x0007e00c  00 d9 40 f9     ldr      x0, [x8, #0x1b0]
0x0007e010  08 22 00 90     adrp     x8, #0x4be000
0x0007e014  01 cd 46 f9     ldr      x1, [x8, #0xd98]
0x0007e018  15 8f 0f 94     bl       #0x461c6c
0x0007e01c  fd 03 1d aa     mov      x29, x29
0x0007e020  2b 8f 0f 94     bl       #0x461ccc
0x0007e024  f7 03 00 aa     mov      x23, x0
0x0007e028  08 22 00 b0     adrp     x8, #0x4bf000
0x0007e02c  01 35 42 f9     ldr      x1, [x8, #0x468]
0x0007e030  0f 8f 0f 94     bl       #0x461c6c
0x0007e034  f9 03 00 aa     mov      x25, x0
0x0007e038  e0 03 17 aa     mov      x0, x23
0x0007e03c  18 8f 0f 94     bl       #0x461c9c
0x0007e040  3f 07 00 f1     cmp      x25, #1
0x0007e044  c0 00 00 54     b.eq     #0x7e05c
0x0007e048  08 21 60 1e     fcmp     d8, #0.0
0x0007e04c  8d 00 00 54     b.le     #0x7e05c
0x0007e050  e0 03 13 aa     mov      x0, x19
0x0007e054  12 8f 0f 94     bl       #0x461c9c
0x0007e058  08 00 00 14     b        #0x7e078
0x0007e05c  e0 03 13 aa     mov      x0, x19
0x0007e060  0f 8f 0f 94     bl       #0x461c9c
0x0007e064  18 00 80 52     mov      w24, #0
0x0007e068  3f 07 00 f1     cmp      x25, #1
0x0007e06c  61 13 00 54     b.ne     #0x7e2d8
0x0007e070  08 21 60 1e     fcmp     d8, #0.0
0x0007e074  25 13 00 54     b.pl     #0x7e2d8
0x0007e078  e0 03 13 aa     mov      x0, x19
0x0007e07c  e1 03 16 aa     mov      x1, x22
0x0007e080  fb 8e 0f 94     bl       #0x461c6c
0x0007e084  fd 03 1d aa     mov      x29, x29
0x0007e088  11 8f 0f 94     bl       #0x461ccc
0x0007e08c  f7 03 00 aa     mov      x23, x0
0x0007e090  08 22 00 b0     adrp     x8, #0x4bf000
0x0007e094  1a 2d 42 f9     ldr      x26, [x8, #0x458]
0x0007e098  e0 03 13 aa     mov      x0, x19
0x0007e09c  e1 03 1a aa     mov      x1, x26
0x0007e0a0  e2 03 17 aa     mov      x2, x23
0x0007e0a4  f2 8e 0f 94     bl       #0x461c6c
0x0007e0a8  09 40 60 1e     fmov     d9, d0
0x0007e0ac  28 40 60 1e     fmov     d8, d1
0x0007e0b0  e0 03 17 aa     mov      x0, x23
0x0007e0b4  fa 8e 0f 94     bl       #0x461c9c
0x0007e0b8  e0 03 13 aa     mov      x0, x19
0x0007e0bc  e1 03 16 aa     mov      x1, x22
0x0007e0c0  eb 8e 0f 94     bl       #0x461c6c
0x0007e0c4  fd 03 1d aa     mov      x29, x29
0x0007e0c8  01 8f 0f 94     bl       #0x461ccc
0x0007e0cc  f7 03 00 aa     mov      x23, x0
0x0007e0d0  08 22 00 90     adrp     x8, #0x4be000
0x0007e0d4  19 6d 42 f9     ldr      x25, [x8, #0x4d8]
0x0007e0d8  e1 03 19 aa     mov      x1, x25
0x0007e0dc  e4 8e 0f 94     bl       #0x461c6c
0x0007e0e0  4a 40 60 1e     fmov     d10, d2
0x0007e0e4  e0 03 17 aa     mov      x0, x23
0x0007e0e8  ed 8e 0f 94     bl       #0x461c9c
0x0007e0ec  88 20 00 f0     adrp     x8, #0x491000
0x0007e0f0  00 99 42 fd     ldr      d0, [x8, #0x530]
0x0007e0f4  40 09 60 1e     fmul     d0, d10, d0
0x0007e0f8  20 21 60 1e     fcmp     d9, d0
0x0007e0fc  e8 d7 9f 1a     cset     w8, gt
0x0007e100  40 39 60 1e     fsub     d0, d10, d0
0x0007e104  20 21 60 1e     fcmp     d9, d0
0x0007e108  f8 53 88 1a     csel     w24, wzr, w8, pl
0x0007e10c  08 22 00 b0     adrp     x8, #0x4bf000
0x0007e110  01 71 41 f9     ldr      x1, [x8, #0x2e0]
0x0007e114  e0 03 15 aa     mov      x0, x21
0x0007e118  d5 8e 0f 94     bl       #0x461c6c
0x0007e11c  fd 03 1d aa     mov      x29, x29
0x0007e120  eb 8e 0f 94     bl       #0x461ccc
0x0007e124  f7 03 00 aa     mov      x23, x0
0x0007e128  22 03 00 94     bl       #0x7edb0
0x0007e12c  20 05 00 34     cbz      w0, #0x7e1d0
0x0007e130  f9 07 00 f9     str      x25, [sp, #8]
0x0007e134  e0 03 13 aa     mov      x0, x19
0x0007e138  e1 03 16 aa     mov      x1, x22
0x0007e13c  cc 8e 0f 94     bl       #0x461c6c
0x0007e140  fd 03 1d aa     mov      x29, x29
0x0007e144  e2 8e 0f 94     bl       #0x461ccc
0x0007e148  fb 03 00 aa     mov      x27, x0
0x0007e14c  08 22 00 90     adrp     x8, #0x4be000
0x0007e150  01 55 42 f9     ldr      x1, [x8, #0x4a8]
0x0007e154  c6 8e 0f 94     bl       #0x461c6c
0x0007e158  fd 03 1d aa     mov      x29, x29
0x0007e15c  dc 8e 0f 94     bl       #0x461ccc
0x0007e160  fc 03 00 aa     mov      x28, x0
0x0007e164  a0 00 00 b4     cbz      x0, #0x7e178
0x0007e168  e0 03 1c aa     mov      x0, x28
0x0007e16c  cf 8e 0f 94     bl       #0x461ca8
0x0007e170  f9 03 1c aa     mov      x25, x28
0x0007e174  07 00 00 14     b        #0x7e190
0x0007e178  e0 03 13 aa     mov      x0, x19
0x0007e17c  e1 03 16 aa     mov      x1, x22
0x0007e180  bb 8e 0f 94     bl       #0x461c6c
0x0007e184  fd 03 1d aa     mov      x29, x29
0x0007e188  d1 8e 0f 94     bl       #0x461ccc
0x0007e18c  f9 03 00 aa     mov      x25, x0
0x0007e190  e0 03 1c aa     mov      x0, x28
0x0007e194  c2 8e 0f 94     bl       #0x461c9c
0x0007e198  e0 03 1b aa     mov      x0, x27
0x0007e19c  c0 8e 0f 94     bl       #0x461c9c
0x0007e1a0  e0 03 13 aa     mov      x0, x19
0x0007e1a4  e1 03 1a aa     mov      x1, x26
0x0007e1a8  e2 03 19 aa     mov      x2, x25
0x0007e1ac  b0 8e 0f 94     bl       #0x461c6c
0x0007e1b0  29 40 60 1e     fmov     d9, d1
0x0007e1b4  e0 03 19 aa     mov      x0, x25
0x0007e1b8  b9 8e 0f 94     bl       #0x461c9c
0x0007e1bc  88 20 00 f0     adrp     x8, #0x491000
0x0007e1c0  00 a9 42 fd     ldr      d0, [x8, #0x550]
0x0007e1c4  20 21 60 1e     fcmp     d9, d0
0x0007e1c8  f9 07 40 f9     ldr      x25, [sp, #8]
0x0007e1cc  e4 02 00 54     b.mi     #0x7e228
0x0007e1d0  e0 03 17 aa     mov      x0, x23
0x0007e1d4  92 03 00 94     bl       #0x7f01c
0x0007e1d8  c0 02 00 34     cbz      w0, #0x7e230
0x0007e1dc  e0 03 13 aa     mov      x0, x19
0x0007e1e0  e1 03 16 aa     mov      x1, x22
0x0007e1e4  a2 8e 0f 94     bl       #0x461c6c
0x0007e1e8  fd 03 1d aa     mov      x29, x29
0x0007e1ec  b8 8e 0f 94     bl       #0x461ccc
0x0007e1f0  f6 03 00 aa     mov      x22, x0
0x0007e1f4  e1 03 19 aa     mov      x1, x25
0x0007e1f8  9d 8e 0f 94     bl       #0x461c6c
0x0007e1fc  2e 8d 0f 94     bl       #0x4616b4
0x0007e200  09 40 60 1e     fmov     d9, d0
0x0007e204  e0 03 16 aa     mov      x0, x22
0x0007e208  a5 8e 0f 94     bl       #0x461c9c
0x0007e20c  28 21 60 1e     fcmp     d9, #0.0
0x0007e210  0d 01 00 54     b.le     #0x7e230
0x0007e214  88 20 00 f0     adrp     x8, #0x491000
0x0007e218  00 75 42 fd     ldr      d0, [x8, #0x4e8]
0x0007e21c  20 09 60 1e     fmul     d0, d9, d0
0x0007e220  00 21 60 1e     fcmp     d8, d0
0x0007e224  65 00 00 54     b.pl     #0x7e230
0x0007e228  18 00 80 52     mov      w24, #0
0x0007e22c  29 00 00 14     b        #0x7e2d0
0x0007e230  8b 8c 0f 94     bl       #0x46145c
0x0007e234  08 40 60 1e     fmov     d8, d0
0x0007e238  b9 22 00 d0     adrp     x25, #0x4d4000
0x0007e23c  21 e3 44 f9     ldr      x1, [x25, #0x9c0]
0x0007e240  e0 03 15 aa     mov      x0, x21
0x0007e244  7e 8e 0f 94     bl       #0x461c3c
0x0007e248  fd 03 1d aa     mov      x29, x29
0x0007e24c  a0 8e 0f 94     bl       #0x461ccc
0x0007e250  f6 03 00 aa     mov      x22, x0
0x0007e254  80 01 00 b4     cbz      x0, #0x7e284
0x0007e258  08 22 00 90     adrp     x8, #0x4be000
0x0007e25c  01 51 42 f9     ldr      x1, [x8, #0x4a0]
0x0007e260  e0 03 16 aa     mov      x0, x22
0x0007e264  82 8e 0f 94     bl       #0x461c6c
0x0007e268  00 39 60 1e     fsub     d0, d8, d0
0x0007e26c  88 20 00 f0     adrp     x8, #0x491000
0x0007e270  01 85 42 fd     ldr      d1, [x8, #0x508]
0x0007e274  00 20 61 1e     fcmp     d0, d1
0x0007e278  65 00 00 54     b.pl     #0x7e284
0x0007e27c  18 00 80 52     mov      w24, #0
0x0007e280  12 00 00 14     b        #0x7e2c8
0x0007e284  3a e3 44 f9     ldr      x26, [x25, #0x9c0]
0x0007e288  28 22 00 d0     adrp     x8, #0x4c4000
0x0007e28c  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x0007e290  08 22 00 90     adrp     x8, #0x4be000
0x0007e294  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x0007e298  00 41 60 1e     fmov     d0, d8
0x0007e29c  74 8e 0f 94     bl       #0x461c6c
0x0007e2a0  fd 03 1d aa     mov      x29, x29
0x0007e2a4  8a 8e 0f 94     bl       #0x461ccc
0x0007e2a8  f9 03 00 aa     mov      x25, x0
0x0007e2ac  e0 03 15 aa     mov      x0, x21
0x0007e2b0  e1 03 1a aa     mov      x1, x26
0x0007e2b4  e2 03 19 aa     mov      x2, x25
0x0007e2b8  23 00 80 52     mov      w3, #1
0x0007e2bc  8a 8e 0f 94     bl       #0x461ce4
0x0007e2c0  e0 03 19 aa     mov      x0, x25
0x0007e2c4  76 8e 0f 94     bl       #0x461c9c
0x0007e2c8  e0 03 16 aa     mov      x0, x22
0x0007e2cc  74 8e 0f 94     bl       #0x461c9c
0x0007e2d0  e0 03 17 aa     mov      x0, x23
0x0007e2d4  72 8e 0f 94     bl       #0x461c9c
0x0007e2d8  e0 03 13 aa     mov      x0, x19
0x0007e2dc  70 8e 0f 94     bl       #0x461c9c
0x0007e2e0  15 ff ff 17     b        #0x7df34
