/* Hook replacement 44/418
 * Selectors: SEL_setText_
 * Address: 0x1450c; original size: 604 bytes
 * Status: fallback; elapsed: 0.803s
 */

/* Capstone ARM64 fallback */
0x0001450c  ff 03 02 d1     sub      sp, sp, #0x80
0x00014510  e9 23 01 6d     stp      d9, d8, [sp, #0x10]
0x00014514  fc 6f 02 a9     stp      x28, x27, [sp, #0x20]
0x00014518  fa 67 03 a9     stp      x26, x25, [sp, #0x30]
0x0001451c  f8 5f 04 a9     stp      x24, x23, [sp, #0x40]
0x00014520  f6 57 05 a9     stp      x22, x21, [sp, #0x50]
0x00014524  f4 4f 06 a9     stp      x20, x19, [sp, #0x60]
0x00014528  fd 7b 07 a9     stp      x29, x30, [sp, #0x70]
0x0001452c  fd c3 01 91     add      x29, sp, #0x70
0x00014530  f3 03 02 aa     mov      x19, x2
0x00014534  f7 03 01 aa     mov      x23, x1
0x00014538  f6 03 00 aa     mov      x22, x0
0x0001453c  e0 03 02 aa     mov      x0, x2
0x00014540  da 35 11 94     bl       #0x461ca8
0x00014544  68 2b 00 d0     adrp     x8, #0x582000
0x00014548  08 21 3e 91     add      x8, x8, #0xf88
0x0001454c  08 01 40 39     ldrb     w8, [x8]
0x00014550  08 03 00 36     tbz      w8, #0, #0x145b0
0x00014554  68 2b 00 d0     adrp     x8, #0x582000
0x00014558  08 2d 3e 91     add      x8, x8, #0xf8b
0x0001455c  08 01 40 39     ldrb     w8, [x8]
0x00014560  88 02 00 36     tbz      w8, #0, #0x145b0
0x00014564  e0 03 16 aa     mov      x0, x22
0x00014568  07 0c 00 94     bl       #0x17584
0x0001456c  fd 03 1d aa     mov      x29, x29
0x00014570  d7 35 11 94     bl       #0x461ccc
0x00014574  f4 03 00 aa     mov      x20, x0
0x00014578  59 25 00 d0     adrp     x25, #0x4be000
0x0001457c  80 02 00 b4     cbz      x0, #0x145cc
0x00014580  48 25 00 d0     adrp     x8, #0x4be000
0x00014584  01 d1 43 f9     ldr      x1, [x8, #0x7a0]
0x00014588  e0 03 16 aa     mov      x0, x22
0x0001458c  b8 35 11 94     bl       #0x461c6c
0x00014590  fd 03 1d aa     mov      x29, x29
0x00014594  ce 35 11 94     bl       #0x461ccc
0x00014598  f5 03 00 aa     mov      x21, x0
0x0001459c  21 6b 42 f9     ldr      x1, [x25, #0x4d0]
0x000145a0  e0 03 16 aa     mov      x0, x22
0x000145a4  b2 35 11 94     bl       #0x461c6c
0x000145a8  28 40 60 1e     fmov     d8, d1
0x000145ac  0c 00 00 14     b        #0x145dc
0x000145b0  28 2b 00 f0     adrp     x8, #0x57b000
0x000145b4  08 e9 42 f9     ldr      x8, [x8, #0x5d0]
0x000145b8  e0 03 16 aa     mov      x0, x22
0x000145bc  e1 03 17 aa     mov      x1, x23
0x000145c0  e2 03 13 aa     mov      x2, x19
0x000145c4  00 01 3f d6     blr      x8
0x000145c8  5e 00 00 14     b        #0x14740
0x000145cc  15 00 80 d2     mov      x21, #0
0x000145d0  68 24 00 90     adrp     x8, #0x4a0000
0x000145d4  08 09 43 f9     ldr      x8, [x8, #0x610]
0x000145d8  08 05 40 fd     ldr      d8, [x8, #8]
0x000145dc  48 25 00 d0     adrp     x8, #0x4be000
0x000145e0  18 9d 41 f9     ldr      x24, [x8, #0x338]
0x000145e4  e0 03 15 aa     mov      x0, x21
0x000145e8  e1 03 18 aa     mov      x1, x24
0x000145ec  a0 35 11 94     bl       #0x461c6c
0x000145f0  e0 00 00 b4     cbz      x0, #0x1460c
0x000145f4  e0 03 13 aa     mov      x0, x19
0x000145f8  e1 03 18 aa     mov      x1, x24
0x000145fc  9c 35 11 94     bl       #0x461c6c
0x00014600  1f 00 00 f1     cmp      x0, #0
0x00014604  fc 17 9f 1a     cset     w28, eq
0x00014608  02 00 00 14     b        #0x14610
0x0001460c  1c 00 80 52     mov      w28, #0
0x00014610  e0 03 15 aa     mov      x0, x21
0x00014614  e1 03 18 aa     mov      x1, x24
0x00014618  95 35 11 94     bl       #0x461c6c
0x0001461c  e0 07 00 f9     str      x0, [sp, #8]
0x00014620  e0 03 13 aa     mov      x0, x19
0x00014624  e1 03 18 aa     mov      x1, x24
0x00014628  91 35 11 94     bl       #0x461c6c
0x0001462c  fa 03 00 aa     mov      x26, x0
0x00014630  5c 02 00 34     cbz      w28, #0x14678
0x00014634  88 25 00 90     adrp     x8, #0x4c4000
0x00014638  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x0001463c  48 25 00 d0     adrp     x8, #0x4be000
0x00014640  01 7d 42 f9     ldr      x1, [x8, #0x4f8]
0x00014644  22 00 80 52     mov      w2, #1
0x00014648  89 35 11 94     bl       #0x461c6c
0x0001464c  fd 03 1d aa     mov      x29, x29
0x00014650  9f 35 11 94     bl       #0x461ccc
0x00014654  fb 03 00 aa     mov      x27, x0
0x00014658  a1 25 00 b0     adrp     x1, #0x4c9000
0x0001465c  21 c0 14 91     add      x1, x1, #0x530
0x00014660  e0 03 14 aa     mov      x0, x20
0x00014664  e2 03 1b aa     mov      x2, x27
0x00014668  23 00 80 52     mov      w3, #1
0x0001466c  9e 35 11 94     bl       #0x461ce4
0x00014670  e0 03 1b aa     mov      x0, x27
0x00014674  8a 35 11 94     bl       #0x461c9c
0x00014678  28 2b 00 f0     adrp     x8, #0x57b000
0x0001467c  08 e9 42 f9     ldr      x8, [x8, #0x5d0]
0x00014680  e0 03 16 aa     mov      x0, x22
0x00014684  e1 03 17 aa     mov      x1, x23
0x00014688  e2 03 13 aa     mov      x2, x19
0x0001468c  00 01 3f d6     blr      x8
0x00014690  e0 03 16 aa     mov      x0, x22
0x00014694  bc 0b 00 94     bl       #0x17584
0x00014698  fd 03 1d aa     mov      x29, x29
0x0001469c  8c 35 11 94     bl       #0x461ccc
0x000146a0  f7 03 00 aa     mov      x23, x0
0x000146a4  a0 00 00 b5     cbnz     x0, #0x146b8
0x000146a8  e0 03 14 aa     mov      x0, x20
0x000146ac  7f 35 11 94     bl       #0x461ca8
0x000146b0  f7 03 14 aa     mov      x23, x20
0x000146b4  b4 03 00 b4     cbz      x20, #0x14728
0x000146b8  e0 03 16 aa     mov      x0, x22
0x000146bc  8c f6 05 94     bl       #0x1920ec
0x000146c0  21 6b 42 f9     ldr      x1, [x25, #0x4d0]
0x000146c4  e0 03 16 aa     mov      x0, x22
0x000146c8  69 35 11 94     bl       #0x461c6c
0x000146cc  9c 00 00 34     cbz      w28, #0x146dc
0x000146d0  e0 03 17 aa     mov      x0, x23
0x000146d4  49 0c 00 94     bl       #0x177f8
0x000146d8  14 00 00 14     b        #0x14728
0x000146dc  e8 07 40 f9     ldr      x8, [sp, #8]
0x000146e0  1f 01 00 f1     cmp      x8, #0
0x000146e4  e8 17 9f 1a     cset     w8, eq
0x000146e8  5f 03 00 f1     cmp      x26, #0
0x000146ec  e9 17 9f 1a     cset     w9, eq
0x000146f0  08 01 09 4a     eor      w8, w8, w9
0x000146f4  a8 00 00 37     tbnz     w8, #0, #0x14708
0x000146f8  20 d4 e8 7e     fabd     d0, d1, d8
0x000146fc  01 10 6e 1e     fmov     d1, #1.00000000
0x00014700  00 20 61 1e     fcmp     d0, d1
0x00014704  2d 01 00 54     b.le     #0x14728
0x00014708  e0 03 17 aa     mov      x0, x23
0x0001470c  3b 0c 00 94     bl       #0x177f8
0x00014710  e0 03 13 aa     mov      x0, x19
0x00014714  e1 03 18 aa     mov      x1, x24
0x00014718  55 35 11 94     bl       #0x461c6c
0x0001471c  60 00 00 b4     cbz      x0, #0x14728
0x00014720  e0 03 17 aa     mov      x0, x23
0x00014724  cf 85 04 94     bl       #0x135e60
0x00014728  e0 03 17 aa     mov      x0, x23
0x0001472c  5c 35 11 94     bl       #0x461c9c
0x00014730  e0 03 15 aa     mov      x0, x21
0x00014734  5a 35 11 94     bl       #0x461c9c
0x00014738  e0 03 14 aa     mov      x0, x20
0x0001473c  58 35 11 94     bl       #0x461c9c
0x00014740  e0 03 13 aa     mov      x0, x19
0x00014744  fd 7b 47 a9     ldp      x29, x30, [sp, #0x70]
0x00014748  f4 4f 46 a9     ldp      x20, x19, [sp, #0x60]
0x0001474c  f6 57 45 a9     ldp      x22, x21, [sp, #0x50]
0x00014750  f8 5f 44 a9     ldp      x24, x23, [sp, #0x40]
0x00014754  fa 67 43 a9     ldp      x26, x25, [sp, #0x30]
0x00014758  fc 6f 42 a9     ldp      x28, x27, [sp, #0x20]
0x0001475c  e9 23 41 6d     ldp      d9, d8, [sp, #0x10]
0x00014760  ff 03 02 91     add      sp, sp, #0x80
0x00014764  4e 35 11 14     b        #0x461c9c
