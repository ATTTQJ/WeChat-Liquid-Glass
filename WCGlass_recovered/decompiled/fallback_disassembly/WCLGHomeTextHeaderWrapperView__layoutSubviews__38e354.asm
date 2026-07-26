; Capstone fallback for WCLGHomeTextHeaderWrapperView::layoutSubviews
; address=0x38e354 size=1080

0x0038e354  ff 83 05 d1     sub      sp, sp, #0x160
0x0038e358  e9 23 0f 6d     stp      d9, d8, [sp, #0xf0]
0x0038e35c  fc 6f 10 a9     stp      x28, x27, [sp, #0x100]
0x0038e360  fa 67 11 a9     stp      x26, x25, [sp, #0x110]
0x0038e364  f8 5f 12 a9     stp      x24, x23, [sp, #0x120]
0x0038e368  f6 57 13 a9     stp      x22, x21, [sp, #0x130]
0x0038e36c  f4 4f 14 a9     stp      x20, x19, [sp, #0x140]
0x0038e370  fd 7b 15 a9     stp      x29, x30, [sp, #0x150]
0x0038e374  fd 43 05 91     add      x29, sp, #0x150
0x0038e378  f3 03 00 aa     mov      x19, x0
0x0038e37c  88 08 00 d0     adrp     x8, #0x4a0000
0x0038e380  08 b1 43 f9     ldr      x8, [x8, #0x760]
0x0038e384  08 01 40 f9     ldr      x8, [x8]
0x0038e388  a8 03 19 f8     stur     x8, [x29, #-0x70]
0x0038e38c  a8 09 00 d0     adrp     x8, #0x4c4000
0x0038e390  08 05 44 f9     ldr      x8, [x8, #0x808]
0x0038e394  e0 23 05 a9     stp      x0, x8, [sp, #0x50]
0x0038e398  88 09 00 90     adrp     x8, #0x4be000
0x0038e39c  01 39 43 f9     ldr      x1, [x8, #0x670]
0x0038e3a0  e0 43 01 91     add      x0, sp, #0x50
0x0038e3a4  38 4e 03 94     bl       #0x461c84
0x0038e3a8  88 09 00 90     adrp     x8, #0x4be000
0x0038e3ac  01 6d 42 f9     ldr      x1, [x8, #0x4d8]
0x0038e3b0  e0 03 13 aa     mov      x0, x19
0x0038e3b4  e1 03 00 f9     str      x1, [sp]
0x0038e3b8  2d 4e 03 94     bl       #0x461c6c
0x0038e3bc  d3 4c 03 94     bl       #0x461708
0x0038e3c0  08 20 60 1e     fcmp     d0, #0.0
0x0038e3c4  c8 00 00 54     b.hi     #0x38e3dc
0x0038e3c8  88 09 00 90     adrp     x8, #0x4be000
0x0038e3cc  01 b9 43 f9     ldr      x1, [x8, #0x770]
0x0038e3d0  e0 03 13 aa     mov      x0, x19
0x0038e3d4  26 4e 03 94     bl       #0x461c6c
0x0038e3d8  cc 4c 03 94     bl       #0x461708
0x0038e3dc  00 e4 00 4f     movi     v0.16b, #0
0x0038e3e0  e0 83 01 ad     stp      q0, q0, [sp, #0x30]
0x0038e3e4  e0 83 00 ad     stp      q0, q0, [sp, #0x10]
0x0038e3e8  88 09 00 90     adrp     x8, #0x4be000
0x0038e3ec  01 e1 43 f9     ldr      x1, [x8, #0x7c0]
0x0038e3f0  f3 07 00 f9     str      x19, [sp, #8]
0x0038e3f4  e0 03 13 aa     mov      x0, x19
0x0038e3f8  1d 4e 03 94     bl       #0x461c6c
0x0038e3fc  fd 03 1d aa     mov      x29, x29
0x0038e400  33 4e 03 94     bl       #0x461ccc
0x0038e404  f5 03 00 aa     mov      x21, x0
0x0038e408  88 09 00 90     adrp     x8, #0x4be000
0x0038e40c  16 3d 42 f9     ldr      x22, [x8, #0x478]
0x0038e410  e2 43 00 91     add      x2, sp, #0x10
0x0038e414  e3 83 01 91     add      x3, sp, #0x60
0x0038e418  e1 03 16 aa     mov      x1, x22
0x0038e41c  04 02 80 52     mov      w4, #0x10
0x0038e420  13 4e 03 94     bl       #0x461c6c
0x0038e424  20 06 00 b4     cbz      x0, #0x38e4e8
0x0038e428  f7 03 00 aa     mov      x23, x0
0x0038e42c  e8 13 40 f9     ldr      x8, [sp, #0x20]
0x0038e430  14 01 40 f9     ldr      x20, [x8]
0x0038e434  e8 03 67 9e     fmov     d8, xzr
0x0038e438  9c 09 00 90     adrp     x28, #0x4be000
0x0038e43c  08 08 00 f0     adrp     x8, #0x491000
0x0038e440  09 ed 41 fd     ldr      d9, [x8, #0x3d8]
0x0038e444  13 00 80 d2     mov      x19, #0
0x0038e448  88 09 00 90     adrp     x8, #0x4be000
0x0038e44c  18 d5 44 f9     ldr      x24, [x8, #0x9a8]
0x0038e450  99 e3 44 f9     ldr      x25, [x28, #0x9c0]
0x0038e454  88 09 00 90     adrp     x8, #0x4be000
0x0038e458  1a b9 43 f9     ldr      x26, [x8, #0x770]
0x0038e45c  e8 13 40 f9     ldr      x8, [sp, #0x20]
0x0038e460  08 01 40 f9     ldr      x8, [x8]
0x0038e464  1f 01 14 eb     cmp      x8, x20
0x0038e468  60 00 00 54     b.eq     #0x38e474
0x0038e46c  e0 03 15 aa     mov      x0, x21
0x0038e470  ed 4d 03 94     bl       #0x461c24
0x0038e474  e8 0f 40 f9     ldr      x8, [sp, #0x18]
0x0038e478  1b 79 73 f8     ldr      x27, [x8, x19, lsl #3]
0x0038e47c  e0 03 1b aa     mov      x0, x27
0x0038e480  e1 03 18 aa     mov      x1, x24
0x0038e484  fa 4d 03 94     bl       #0x461c6c
0x0038e488  80 01 00 37     tbnz     w0, #0, #0x38e4b8
0x0038e48c  e0 03 1b aa     mov      x0, x27
0x0038e490  e1 03 19 aa     mov      x1, x25
0x0038e494  f6 4d 03 94     bl       #0x461c6c
0x0038e498  00 20 69 1e     fcmp     d0, d9
0x0038e49c  e4 00 00 54     b.mi     #0x38e4b8
0x0038e4a0  e0 03 1b aa     mov      x0, x27
0x0038e4a4  e1 03 1a aa     mov      x1, x26
0x0038e4a8  f1 4d 03 94     bl       #0x461c6c
0x0038e4ac  88 4c 03 94     bl       #0x4616cc
0x0038e4b0  00 21 60 1e     fcmp     d8, d0
0x0038e4b4  08 4c 68 1e     fcsel    d8, d0, d8, mi
0x0038e4b8  73 06 00 91     add      x19, x19, #1
0x0038e4bc  ff 02 13 eb     cmp      x23, x19
0x0038e4c0  e1 fc ff 54     b.ne     #0x38e45c
0x0038e4c4  e2 43 00 91     add      x2, sp, #0x10
0x0038e4c8  e3 83 01 91     add      x3, sp, #0x60
0x0038e4cc  e0 03 15 aa     mov      x0, x21
0x0038e4d0  e1 03 16 aa     mov      x1, x22
0x0038e4d4  04 02 80 52     mov      w4, #0x10
0x0038e4d8  e5 4d 03 94     bl       #0x461c6c
0x0038e4dc  f7 03 00 aa     mov      x23, x0
0x0038e4e0  20 fb ff b5     cbnz     x0, #0x38e444
0x0038e4e4  02 00 00 14     b        #0x38e4ec
0x0038e4e8  e8 03 67 9e     fmov     d8, xzr
0x0038e4ec  e0 03 15 aa     mov      x0, x21
0x0038e4f0  eb 4d 03 94     bl       #0x461c9c
0x0038e4f4  00 10 6e 1e     fmov     d0, #1.00000000
0x0038e4f8  09 69 60 1e     fmaxnm   d9, d8, d0
0x0038e4fc  a8 09 00 d0     adrp     x8, #0x4c4000
0x0038e500  00 95 40 f9     ldr      x0, [x8, #0x128]
0x0038e504  88 09 00 90     adrp     x8, #0x4be000
0x0038e508  01 f9 44 f9     ldr      x1, [x8, #0x9f0]
0x0038e50c  d8 4d 03 94     bl       #0x461c6c
0x0038e510  fd 03 1d aa     mov      x29, x29
0x0038e514  ee 4d 03 94     bl       #0x461ccc
0x0038e518  f5 03 00 aa     mov      x21, x0
0x0038e51c  88 09 00 90     adrp     x8, #0x4be000
0x0038e520  01 fd 44 f9     ldr      x1, [x8, #0x9f8]
0x0038e524  d2 4d 03 94     bl       #0x461c6c
0x0038e528  08 40 60 1e     fmov     d8, d0
0x0038e52c  e0 03 15 aa     mov      x0, x21
0x0038e530  db 4d 03 94     bl       #0x461c9c
0x0038e534  08 21 60 1e     fcmp     d8, #0.0
0x0038e538  00 10 60 1e     fmov     d0, #2.00000000
0x0038e53c  00 8d 60 1e     fcsel    d0, d8, d0, hi
0x0038e540  21 09 60 1e     fmul     d1, d9, d0
0x0038e544  21 40 66 1e     frinta   d1, d1
0x0038e548  28 18 60 1e     fdiv     d8, d1, d0
0x0038e54c  e1 67 40 a9     ldp      x1, x25, [sp]
0x0038e550  e0 03 19 aa     mov      x0, x25
0x0038e554  c6 4d 03 94     bl       #0x461c6c
0x0038e558  57 4c 03 94     bl       #0x4616b4
0x0038e55c  01 10 6c 1e     fmov     d1, #0.50000000
0x0038e560  00 28 61 1e     fadd     d0, d0, d1
0x0038e564  00 21 60 1e     fcmp     d8, d0
0x0038e568  29 0f 00 54     b.ls     #0x38e74c
0x0038e56c  e0 03 19 aa     mov      x0, x25
0x0038e570  ce 4d 03 94     bl       #0x461ca8
0x0038e574  99 03 00 b4     cbz      x25, #0x38e5e4
0x0038e578  88 09 00 90     adrp     x8, #0x4be000
0x0038e57c  15 09 42 f9     ldr      x21, [x8, #0x410]
0x0038e580  88 09 00 90     adrp     x8, #0x4be000
0x0038e584  16 0d 42 f9     ldr      x22, [x8, #0x418]
0x0038e588  88 09 00 90     adrp     x8, #0x4be000
0x0038e58c  17 35 42 f9     ldr      x23, [x8, #0x468]
0x0038e590  b3 09 00 d0     adrp     x19, #0x4c4000
0x0038e594  f4 03 19 aa     mov      x20, x25
0x0038e598  60 52 40 f9     ldr      x0, [x19, #0xa0]
0x0038e59c  e1 03 15 aa     mov      x1, x21
0x0038e5a0  b3 4d 03 94     bl       #0x461c6c
0x0038e5a4  e2 03 00 aa     mov      x2, x0
0x0038e5a8  e0 03 14 aa     mov      x0, x20
0x0038e5ac  e1 03 16 aa     mov      x1, x22
0x0038e5b0  af 4d 03 94     bl       #0x461c6c
0x0038e5b4  80 04 00 37     tbnz     w0, #0, #0x38e644
0x0038e5b8  e0 03 14 aa     mov      x0, x20
0x0038e5bc  e1 03 17 aa     mov      x1, x23
0x0038e5c0  ab 4d 03 94     bl       #0x461c6c
0x0038e5c4  fd 03 1d aa     mov      x29, x29
0x0038e5c8  c1 4d 03 94     bl       #0x461ccc
0x0038e5cc  f8 03 00 aa     mov      x24, x0
0x0038e5d0  e0 03 14 aa     mov      x0, x20
0x0038e5d4  b2 4d 03 94     bl       #0x461c9c
0x0038e5d8  f4 03 18 aa     mov      x20, x24
0x0038e5dc  f8 fd ff b5     cbnz     x24, #0x38e598
0x0038e5e0  02 00 00 14     b        #0x38e5e8
0x0038e5e4  14 00 80 d2     mov      x20, #0
0x0038e5e8  33 00 80 52     mov      w19, #1
0x0038e5ec  88 09 00 90     adrp     x8, #0x4be000
0x0038e5f0  01 b9 43 f9     ldr      x1, [x8, #0x770]
0x0038e5f4  e0 03 19 aa     mov      x0, x25
0x0038e5f8  9d 4d 03 94     bl       #0x461c6c
0x0038e5fc  88 09 00 90     adrp     x8, #0x4be000
0x0038e600  01 3d 43 f9     ldr      x1, [x8, #0x678]
0x0038e604  e0 03 19 aa     mov      x0, x25
0x0038e608  03 41 60 1e     fmov     d3, d8
0x0038e60c  98 4d 03 94     bl       #0x461c6c
0x0038e610  73 09 00 37     tbnz     w19, #0, #0x38e73c
0x0038e614  88 09 00 90     adrp     x8, #0x4be000
0x0038e618  01 9d 47 f9     ldr      x1, [x8, #0xf38]
0x0038e61c  e0 03 14 aa     mov      x0, x20
0x0038e620  93 4d 03 94     bl       #0x461c6c
0x0038e624  fd 03 1d aa     mov      x29, x29
0x0038e628  a9 4d 03 94     bl       #0x461ccc
0x0038e62c  f5 03 00 aa     mov      x21, x0
0x0038e630  1f 00 19 eb     cmp      x0, x25
0x0038e634  c0 02 00 54     b.eq     #0x38e68c
0x0038e638  e0 03 15 aa     mov      x0, x21
0x0038e63c  98 4d 03 94     bl       #0x461c9c
0x0038e640  3f 00 00 14     b        #0x38e73c
0x0038e644  e0 03 14 aa     mov      x0, x20
0x0038e648  98 4d 03 94     bl       #0x461ca8
0x0038e64c  88 09 00 90     adrp     x8, #0x4be000
0x0038e650  01 b9 44 f9     ldr      x1, [x8, #0x970]
0x0038e654  86 4d 03 94     bl       #0x461c6c
0x0038e658  20 07 00 37     tbnz     w0, #0, #0x38e73c
0x0038e65c  88 09 00 90     adrp     x8, #0x4be000
0x0038e660  01 bd 44 f9     ldr      x1, [x8, #0x978]
0x0038e664  e0 03 14 aa     mov      x0, x20
0x0038e668  81 4d 03 94     bl       #0x461c6c
0x0038e66c  80 06 00 37     tbnz     w0, #0, #0x38e73c
0x0038e670  88 09 00 90     adrp     x8, #0x4be000
0x0038e674  01 c1 44 f9     ldr      x1, [x8, #0x980]
0x0038e678  e0 03 14 aa     mov      x0, x20
0x0038e67c  7c 4d 03 94     bl       #0x461c6c
0x0038e680  e0 05 00 37     tbnz     w0, #0, #0x38e73c
0x0038e684  13 00 80 52     mov      w19, #0
0x0038e688  d9 ff ff 17     b        #0x38e5ec
0x0038e68c  21 0e 00 d0     adrp     x1, #0x554000
0x0038e690  21 c0 20 91     add      x1, x1, #0x830
0x0038e694  e0 03 14 aa     mov      x0, x20
0x0038e698  69 4d 03 94     bl       #0x461c3c
0x0038e69c  fd 03 1d aa     mov      x29, x29
0x0038e6a0  8b 4d 03 94     bl       #0x461ccc
0x0038e6a4  f6 03 00 aa     mov      x22, x0
0x0038e6a8  88 09 00 90     adrp     x8, #0x4be000
0x0038e6ac  01 b9 41 f9     ldr      x1, [x8, #0x370]
0x0038e6b0  6f 4d 03 94     bl       #0x461c6c
0x0038e6b4  f7 03 00 aa     mov      x23, x0
0x0038e6b8  e0 03 16 aa     mov      x0, x22
0x0038e6bc  78 4d 03 94     bl       #0x461c9c
0x0038e6c0  e0 03 15 aa     mov      x0, x21
0x0038e6c4  76 4d 03 94     bl       #0x461c9c
0x0038e6c8  b7 03 00 37     tbnz     w23, #0, #0x38e73c
0x0038e6cc  a8 09 00 d0     adrp     x8, #0x4c4000
0x0038e6d0  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x0038e6d4  88 09 00 90     adrp     x8, #0x4be000
0x0038e6d8  01 7d 42 f9     ldr      x1, [x8, #0x4f8]
0x0038e6dc  22 00 80 52     mov      w2, #1
0x0038e6e0  63 4d 03 94     bl       #0x461c6c
0x0038e6e4  fd 03 1d aa     mov      x29, x29
0x0038e6e8  79 4d 03 94     bl       #0x461ccc
0x0038e6ec  f5 03 00 aa     mov      x21, x0
0x0038e6f0  36 0e 00 d0     adrp     x22, #0x554000
0x0038e6f4  d6 c2 20 91     add      x22, x22, #0x830
0x0038e6f8  e0 03 14 aa     mov      x0, x20
0x0038e6fc  e1 03 16 aa     mov      x1, x22
0x0038e700  e2 03 15 aa     mov      x2, x21
0x0038e704  23 00 80 52     mov      w3, #1
0x0038e708  77 4d 03 94     bl       #0x461ce4
0x0038e70c  e0 03 15 aa     mov      x0, x21
0x0038e710  63 4d 03 94     bl       #0x461c9c
0x0038e714  88 09 00 90     adrp     x8, #0x4be000
0x0038e718  01 a5 46 f9     ldr      x1, [x8, #0xd48]
0x0038e71c  e0 03 14 aa     mov      x0, x20
0x0038e720  e2 03 19 aa     mov      x2, x25
0x0038e724  52 4d 03 94     bl       #0x461c6c
0x0038e728  e0 03 14 aa     mov      x0, x20
0x0038e72c  e1 03 16 aa     mov      x1, x22
0x0038e730  02 00 80 d2     mov      x2, #0
0x0038e734  03 00 80 d2     mov      x3, #0
0x0038e738  6b 4d 03 94     bl       #0x461ce4
0x0038e73c  e0 03 14 aa     mov      x0, x20
0x0038e740  57 4d 03 94     bl       #0x461c9c
0x0038e744  e0 03 14 aa     mov      x0, x20
0x0038e748  55 4d 03 94     bl       #0x461c9c
0x0038e74c  a8 03 59 f8     ldur     x8, [x29, #-0x70]
0x0038e750  89 08 00 d0     adrp     x9, #0x4a0000
0x0038e754  29 b1 43 f9     ldr      x9, [x9, #0x760]
0x0038e758  29 01 40 f9     ldr      x9, [x9]
0x0038e75c  3f 01 08 eb     cmp      x9, x8
0x0038e760  41 01 00 54     b.ne     #0x38e788
0x0038e764  fd 7b 55 a9     ldp      x29, x30, [sp, #0x150]
0x0038e768  f4 4f 54 a9     ldp      x20, x19, [sp, #0x140]
0x0038e76c  f6 57 53 a9     ldp      x22, x21, [sp, #0x130]
0x0038e770  f8 5f 52 a9     ldp      x24, x23, [sp, #0x120]
0x0038e774  fa 67 51 a9     ldp      x26, x25, [sp, #0x110]
0x0038e778  fc 6f 50 a9     ldp      x28, x27, [sp, #0x100]
0x0038e77c  e9 23 4f 6d     ldp      d9, d8, [sp, #0xf0]
0x0038e780  ff 83 05 91     add      sp, sp, #0x160
0x0038e784  c0 03 5f d6     ret      
0x0038e788  4c 4c 03 94     bl       #0x4618b8
