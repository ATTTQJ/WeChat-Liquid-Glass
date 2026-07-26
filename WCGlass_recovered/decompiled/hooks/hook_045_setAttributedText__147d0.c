/* Hook replacement 45/418
 * Selectors: SEL_setAttributedText_
 * Address: 0x147d0; original size: 720 bytes
 * Status: fallback; elapsed: 1.139s
 */

/* Capstone ARM64 fallback */
0x000147d0  ff 03 02 d1     sub      sp, sp, #0x80
0x000147d4  e9 23 01 6d     stp      d9, d8, [sp, #0x10]
0x000147d8  fc 6f 02 a9     stp      x28, x27, [sp, #0x20]
0x000147dc  fa 67 03 a9     stp      x26, x25, [sp, #0x30]
0x000147e0  f8 5f 04 a9     stp      x24, x23, [sp, #0x40]
0x000147e4  f6 57 05 a9     stp      x22, x21, [sp, #0x50]
0x000147e8  f4 4f 06 a9     stp      x20, x19, [sp, #0x60]
0x000147ec  fd 7b 07 a9     stp      x29, x30, [sp, #0x70]
0x000147f0  fd c3 01 91     add      x29, sp, #0x70
0x000147f4  f3 03 02 aa     mov      x19, x2
0x000147f8  f8 03 01 aa     mov      x24, x1
0x000147fc  f6 03 00 aa     mov      x22, x0
0x00014800  e0 03 02 aa     mov      x0, x2
0x00014804  29 35 11 94     bl       #0x461ca8
0x00014808  68 2b 00 d0     adrp     x8, #0x582000
0x0001480c  08 21 3e 91     add      x8, x8, #0xf88
0x00014810  08 01 40 39     ldrb     w8, [x8]
0x00014814  28 03 00 36     tbz      w8, #0, #0x14878
0x00014818  68 2b 00 d0     adrp     x8, #0x582000
0x0001481c  08 2d 3e 91     add      x8, x8, #0xf8b
0x00014820  08 01 40 39     ldrb     w8, [x8]
0x00014824  a8 02 00 36     tbz      w8, #0, #0x14878
0x00014828  e0 03 16 aa     mov      x0, x22
0x0001482c  56 0b 00 94     bl       #0x17584
0x00014830  fd 03 1d aa     mov      x29, x29
0x00014834  26 35 11 94     bl       #0x461ccc
0x00014838  f5 03 00 aa     mov      x21, x0
0x0001483c  5a 25 00 d0     adrp     x26, #0x4be000
0x00014840  54 25 00 d0     adrp     x20, #0x4be000
0x00014844  80 02 00 b4     cbz      x0, #0x14894
0x00014848  48 25 00 d0     adrp     x8, #0x4be000
0x0001484c  01 d1 43 f9     ldr      x1, [x8, #0x7a0]
0x00014850  e0 03 16 aa     mov      x0, x22
0x00014854  06 35 11 94     bl       #0x461c6c
0x00014858  fd 03 1d aa     mov      x29, x29
0x0001485c  1c 35 11 94     bl       #0x461ccc
0x00014860  f7 03 00 aa     mov      x23, x0
0x00014864  20 02 00 b4     cbz      x0, #0x148a8
0x00014868  e0 03 17 aa     mov      x0, x23
0x0001486c  0f 35 11 94     bl       #0x461ca8
0x00014870  f7 07 00 f9     str      x23, [sp, #8]
0x00014874  1b 00 00 14     b        #0x148e0
0x00014878  28 2b 00 f0     adrp     x8, #0x57b000
0x0001487c  08 ed 42 f9     ldr      x8, [x8, #0x5d8]
0x00014880  e0 03 16 aa     mov      x0, x22
0x00014884  e1 03 18 aa     mov      x1, x24
0x00014888  e2 03 13 aa     mov      x2, x19
0x0001488c  00 01 3f d6     blr      x8
0x00014890  7a 00 00 14     b        #0x14a78
0x00014894  ff 07 00 f9     str      xzr, [sp, #8]
0x00014898  68 24 00 90     adrp     x8, #0x4a0000
0x0001489c  08 09 43 f9     ldr      x8, [x8, #0x610]
0x000148a0  08 05 40 fd     ldr      d8, [x8, #8]
0x000148a4  15 00 00 14     b        #0x148f8
0x000148a8  48 25 00 d0     adrp     x8, #0x4be000
0x000148ac  01 d9 43 f9     ldr      x1, [x8, #0x7b0]
0x000148b0  e0 03 16 aa     mov      x0, x22
0x000148b4  ee 34 11 94     bl       #0x461c6c
0x000148b8  fd 03 1d aa     mov      x29, x29
0x000148bc  04 35 11 94     bl       #0x461ccc
0x000148c0  f9 03 00 aa     mov      x25, x0
0x000148c4  41 df 43 f9     ldr      x1, [x26, #0x7b8]
0x000148c8  e9 34 11 94     bl       #0x461c6c
0x000148cc  fd 03 1d aa     mov      x29, x29
0x000148d0  ff 34 11 94     bl       #0x461ccc
0x000148d4  e0 07 00 f9     str      x0, [sp, #8]
0x000148d8  e0 03 19 aa     mov      x0, x25
0x000148dc  f0 34 11 94     bl       #0x461c9c
0x000148e0  e0 03 17 aa     mov      x0, x23
0x000148e4  ee 34 11 94     bl       #0x461c9c
0x000148e8  81 6a 42 f9     ldr      x1, [x20, #0x4d0]
0x000148ec  e0 03 16 aa     mov      x0, x22
0x000148f0  df 34 11 94     bl       #0x461c6c
0x000148f4  28 40 60 1e     fmov     d8, d1
0x000148f8  41 df 43 f9     ldr      x1, [x26, #0x7b8]
0x000148fc  e0 03 13 aa     mov      x0, x19
0x00014900  db 34 11 94     bl       #0x461c6c
0x00014904  fd 03 1d aa     mov      x29, x29
0x00014908  f1 34 11 94     bl       #0x461ccc
0x0001490c  f9 03 00 aa     mov      x25, x0
0x00014910  88 24 00 d0     adrp     x8, #0x4a6000
0x00014914  08 61 03 91     add      x8, x8, #0xd8
0x00014918  1f 00 00 f1     cmp      x0, #0
0x0001491c  17 01 80 9a     csel     x23, x8, x0, eq
0x00014920  e0 03 17 aa     mov      x0, x23
0x00014924  e1 34 11 94     bl       #0x461ca8
0x00014928  e0 03 19 aa     mov      x0, x25
0x0001492c  dc 34 11 94     bl       #0x461c9c
0x00014930  48 25 00 d0     adrp     x8, #0x4be000
0x00014934  1a 9d 41 f9     ldr      x26, [x8, #0x338]
0x00014938  e0 07 40 f9     ldr      x0, [sp, #8]
0x0001493c  e1 03 1a aa     mov      x1, x26
0x00014940  cb 34 11 94     bl       #0x461c6c
0x00014944  e0 00 00 b4     cbz      x0, #0x14960
0x00014948  e0 03 17 aa     mov      x0, x23
0x0001494c  e1 03 1a aa     mov      x1, x26
0x00014950  c7 34 11 94     bl       #0x461c6c
0x00014954  1f 00 00 f1     cmp      x0, #0
0x00014958  fc 17 9f 1a     cset     w28, eq
0x0001495c  02 00 00 14     b        #0x14964
0x00014960  1c 00 80 52     mov      w28, #0
0x00014964  e0 07 40 f9     ldr      x0, [sp, #8]
0x00014968  e1 03 1a aa     mov      x1, x26
0x0001496c  c0 34 11 94     bl       #0x461c6c
0x00014970  f9 03 00 aa     mov      x25, x0
0x00014974  e0 03 17 aa     mov      x0, x23
0x00014978  e1 03 1a aa     mov      x1, x26
0x0001497c  bc 34 11 94     bl       #0x461c6c
0x00014980  fa 03 00 aa     mov      x26, x0
0x00014984  5c 02 00 34     cbz      w28, #0x149cc
0x00014988  88 25 00 90     adrp     x8, #0x4c4000
0x0001498c  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x00014990  48 25 00 d0     adrp     x8, #0x4be000
0x00014994  01 7d 42 f9     ldr      x1, [x8, #0x4f8]
0x00014998  22 00 80 52     mov      w2, #1
0x0001499c  b4 34 11 94     bl       #0x461c6c
0x000149a0  fd 03 1d aa     mov      x29, x29
0x000149a4  ca 34 11 94     bl       #0x461ccc
0x000149a8  fb 03 00 aa     mov      x27, x0
0x000149ac  a1 25 00 b0     adrp     x1, #0x4c9000
0x000149b0  21 c0 14 91     add      x1, x1, #0x530
0x000149b4  e0 03 15 aa     mov      x0, x21
0x000149b8  e2 03 1b aa     mov      x2, x27
0x000149bc  23 00 80 52     mov      w3, #1
0x000149c0  c9 34 11 94     bl       #0x461ce4
0x000149c4  e0 03 1b aa     mov      x0, x27
0x000149c8  b5 34 11 94     bl       #0x461c9c
0x000149cc  28 2b 00 f0     adrp     x8, #0x57b000
0x000149d0  08 ed 42 f9     ldr      x8, [x8, #0x5d8]
0x000149d4  e0 03 16 aa     mov      x0, x22
0x000149d8  e1 03 18 aa     mov      x1, x24
0x000149dc  e2 03 13 aa     mov      x2, x19
0x000149e0  00 01 3f d6     blr      x8
0x000149e4  e0 03 16 aa     mov      x0, x22
0x000149e8  e7 0a 00 94     bl       #0x17584
0x000149ec  fd 03 1d aa     mov      x29, x29
0x000149f0  b7 34 11 94     bl       #0x461ccc
0x000149f4  f8 03 00 aa     mov      x24, x0
0x000149f8  a0 00 00 b5     cbnz     x0, #0x14a0c
0x000149fc  e0 03 15 aa     mov      x0, x21
0x00014a00  aa 34 11 94     bl       #0x461ca8
0x00014a04  f8 03 15 aa     mov      x24, x21
0x00014a08  95 02 00 b4     cbz      x21, #0x14a58
0x00014a0c  e0 03 16 aa     mov      x0, x22
0x00014a10  b7 f5 05 94     bl       #0x1920ec
0x00014a14  81 6a 42 f9     ldr      x1, [x20, #0x4d0]
0x00014a18  e0 03 16 aa     mov      x0, x22
0x00014a1c  94 34 11 94     bl       #0x461c6c
0x00014a20  9c 00 00 36     tbz      w28, #0, #0x14a30
0x00014a24  e0 03 18 aa     mov      x0, x24
0x00014a28  74 0b 00 94     bl       #0x177f8
0x00014a2c  0b 00 00 14     b        #0x14a58
0x00014a30  3f 03 00 f1     cmp      x25, #0
0x00014a34  e8 17 9f 1a     cset     w8, eq
0x00014a38  5f 03 00 f1     cmp      x26, #0
0x00014a3c  e9 17 9f 1a     cset     w9, eq
0x00014a40  08 01 09 4a     eor      w8, w8, w9
0x00014a44  08 ff 07 37     tbnz     w8, #0, #0x14a24
0x00014a48  20 d4 e8 7e     fabd     d0, d1, d8
0x00014a4c  01 10 6e 1e     fmov     d1, #1.00000000
0x00014a50  00 20 61 1e     fcmp     d0, d1
0x00014a54  8c fe ff 54     b.gt     #0x14a24
0x00014a58  e0 03 18 aa     mov      x0, x24
0x00014a5c  90 34 11 94     bl       #0x461c9c
0x00014a60  e0 03 17 aa     mov      x0, x23
0x00014a64  8e 34 11 94     bl       #0x461c9c
0x00014a68  e0 07 40 f9     ldr      x0, [sp, #8]
0x00014a6c  8c 34 11 94     bl       #0x461c9c
0x00014a70  e0 03 15 aa     mov      x0, x21
0x00014a74  8a 34 11 94     bl       #0x461c9c
0x00014a78  e0 03 13 aa     mov      x0, x19
0x00014a7c  fd 7b 47 a9     ldp      x29, x30, [sp, #0x70]
0x00014a80  f4 4f 46 a9     ldp      x20, x19, [sp, #0x60]
0x00014a84  f6 57 45 a9     ldp      x22, x21, [sp, #0x50]
0x00014a88  f8 5f 44 a9     ldp      x24, x23, [sp, #0x40]
0x00014a8c  fa 67 43 a9     ldp      x26, x25, [sp, #0x30]
0x00014a90  fc 6f 42 a9     ldp      x28, x27, [sp, #0x20]
0x00014a94  e9 23 41 6d     ldp      d9, d8, [sp, #0x10]
0x00014a98  ff 03 02 91     add      sp, sp, #0x80
0x00014a9c  80 34 11 14     b        #0x461c9c
