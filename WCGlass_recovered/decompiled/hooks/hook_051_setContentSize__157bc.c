/* Hook replacement 51/418
 * Selectors: SEL_setContentSize_
 * Address: 0x157bc; original size: 592 bytes
 * Status: fallback; elapsed: 0.725s
 */

/* Capstone ARM64 fallback */
0x000157bc  eb 2b b9 6d     stp      d11, d10, [sp, #-0x70]!
0x000157c0  e9 23 01 6d     stp      d9, d8, [sp, #0x10]
0x000157c4  fa 67 02 a9     stp      x26, x25, [sp, #0x20]
0x000157c8  f8 5f 03 a9     stp      x24, x23, [sp, #0x30]
0x000157cc  f6 57 04 a9     stp      x22, x21, [sp, #0x40]
0x000157d0  f4 4f 05 a9     stp      x20, x19, [sp, #0x50]
0x000157d4  fd 7b 06 a9     stp      x29, x30, [sp, #0x60]
0x000157d8  fd 83 01 91     add      x29, sp, #0x60
0x000157dc  28 40 60 1e     fmov     d8, d1
0x000157e0  09 40 60 1e     fmov     d9, d0
0x000157e4  f5 03 01 aa     mov      x21, x1
0x000157e8  f4 03 00 aa     mov      x20, x0
0x000157ec  68 2b 00 b0     adrp     x8, #0x582000
0x000157f0  08 21 3e 91     add      x8, x8, #0xf88
0x000157f4  08 01 40 39     ldrb     w8, [x8]
0x000157f8  28 02 00 36     tbz      w8, #0, #0x1583c
0x000157fc  68 2b 00 b0     adrp     x8, #0x582000
0x00015800  08 2d 3e 91     add      x8, x8, #0xf8b
0x00015804  08 01 40 39     ldrb     w8, [x8]
0x00015808  a8 01 00 36     tbz      w8, #0, #0x1583c
0x0001580c  e0 03 14 aa     mov      x0, x20
0x00015810  5d 07 00 94     bl       #0x17584
0x00015814  fd 03 1d aa     mov      x29, x29
0x00015818  2d 31 11 94     bl       #0x461ccc
0x0001581c  f3 03 00 aa     mov      x19, x0
0x00015820  a0 02 00 b4     cbz      x0, #0x15874
0x00015824  48 25 00 b0     adrp     x8, #0x4be000
0x00015828  01 69 42 f9     ldr      x1, [x8, #0x4d0]
0x0001582c  e0 03 14 aa     mov      x0, x20
0x00015830  0f 31 11 94     bl       #0x461c6c
0x00015834  2a 40 60 1e     fmov     d10, d1
0x00015838  10 00 00 14     b        #0x15878
0x0001583c  28 2b 00 d0     adrp     x8, #0x57b000
0x00015840  02 05 43 f9     ldr      x2, [x8, #0x608]
0x00015844  e0 03 14 aa     mov      x0, x20
0x00015848  e1 03 15 aa     mov      x1, x21
0x0001584c  20 41 60 1e     fmov     d0, d9
0x00015850  01 41 60 1e     fmov     d1, d8
0x00015854  fd 7b 46 a9     ldp      x29, x30, [sp, #0x60]
0x00015858  f4 4f 45 a9     ldp      x20, x19, [sp, #0x50]
0x0001585c  f6 57 44 a9     ldp      x22, x21, [sp, #0x40]
0x00015860  f8 5f 43 a9     ldp      x24, x23, [sp, #0x30]
0x00015864  fa 67 42 a9     ldp      x26, x25, [sp, #0x20]
0x00015868  e9 23 41 6d     ldp      d9, d8, [sp, #0x10]
0x0001586c  eb 2b c7 6c     ldp      d11, d10, [sp], #0x70
0x00015870  40 00 1f d6     br       x2
0x00015874  ea 03 67 9e     fmov     d10, xzr
0x00015878  48 25 00 b0     adrp     x8, #0x4be000
0x0001587c  01 d1 43 f9     ldr      x1, [x8, #0x7a0]
0x00015880  e0 03 14 aa     mov      x0, x20
0x00015884  fa 30 11 94     bl       #0x461c6c
0x00015888  fd 03 1d aa     mov      x29, x29
0x0001588c  10 31 11 94     bl       #0x461ccc
0x00015890  f7 03 00 aa     mov      x23, x0
0x00015894  a0 00 00 b4     cbz      x0, #0x158a8
0x00015898  e0 03 17 aa     mov      x0, x23
0x0001589c  03 31 11 94     bl       #0x461ca8
0x000158a0  f6 03 17 aa     mov      x22, x23
0x000158a4  18 00 00 14     b        #0x15904
0x000158a8  48 25 00 b0     adrp     x8, #0x4be000
0x000158ac  01 d9 43 f9     ldr      x1, [x8, #0x7b0]
0x000158b0  e0 03 14 aa     mov      x0, x20
0x000158b4  ee 30 11 94     bl       #0x461c6c
0x000158b8  fd 03 1d aa     mov      x29, x29
0x000158bc  04 31 11 94     bl       #0x461ccc
0x000158c0  f8 03 00 aa     mov      x24, x0
0x000158c4  48 25 00 b0     adrp     x8, #0x4be000
0x000158c8  01 dd 43 f9     ldr      x1, [x8, #0x7b8]
0x000158cc  e8 30 11 94     bl       #0x461c6c
0x000158d0  fd 03 1d aa     mov      x29, x29
0x000158d4  fe 30 11 94     bl       #0x461ccc
0x000158d8  f9 03 00 aa     mov      x25, x0
0x000158dc  88 24 00 b0     adrp     x8, #0x4a6000
0x000158e0  08 61 03 91     add      x8, x8, #0xd8
0x000158e4  1f 00 00 f1     cmp      x0, #0
0x000158e8  16 01 80 9a     csel     x22, x8, x0, eq
0x000158ec  e0 03 16 aa     mov      x0, x22
0x000158f0  ee 30 11 94     bl       #0x461ca8
0x000158f4  e0 03 19 aa     mov      x0, x25
0x000158f8  e9 30 11 94     bl       #0x461c9c
0x000158fc  e0 03 18 aa     mov      x0, x24
0x00015900  e7 30 11 94     bl       #0x461c9c
0x00015904  e0 03 17 aa     mov      x0, x23
0x00015908  e5 30 11 94     bl       #0x461c9c
0x0001590c  b3 02 00 b4     cbz      x19, #0x15960
0x00015910  a1 25 00 90     adrp     x1, #0x4c9000
0x00015914  21 c0 14 91     add      x1, x1, #0x530
0x00015918  e0 03 13 aa     mov      x0, x19
0x0001591c  c8 30 11 94     bl       #0x461c3c
0x00015920  fd 03 1d aa     mov      x29, x29
0x00015924  ea 30 11 94     bl       #0x461ccc
0x00015928  f7 03 00 aa     mov      x23, x0
0x0001592c  48 25 00 b0     adrp     x8, #0x4be000
0x00015930  01 b9 41 f9     ldr      x1, [x8, #0x370]
0x00015934  ce 30 11 94     bl       #0x461c6c
0x00015938  f8 03 00 aa     mov      x24, x0
0x0001593c  e0 03 17 aa     mov      x0, x23
0x00015940  d7 30 11 94     bl       #0x461c9c
0x00015944  48 25 00 b0     adrp     x8, #0x4be000
0x00015948  01 9d 41 f9     ldr      x1, [x8, #0x338]
0x0001594c  e0 03 16 aa     mov      x0, x22
0x00015950  c7 30 11 94     bl       #0x461c6c
0x00015954  1f 00 00 f1     cmp      x0, #0
0x00015958  17 07 9f 1a     csinc    w23, w24, wzr, eq
0x0001595c  02 00 00 14     b        #0x15964
0x00015960  17 00 80 52     mov      w23, #0
0x00015964  28 2b 00 d0     adrp     x8, #0x57b000
0x00015968  08 05 43 f9     ldr      x8, [x8, #0x608]
0x0001596c  e0 03 14 aa     mov      x0, x20
0x00015970  e1 03 15 aa     mov      x1, x21
0x00015974  20 41 60 1e     fmov     d0, d9
0x00015978  01 41 60 1e     fmov     d1, d8
0x0001597c  00 01 3f d6     blr      x8
0x00015980  17 03 00 34     cbz      w23, #0x159e0
0x00015984  00 d5 ea 7e     fabd     d0, d8, d10
0x00015988  01 10 6e 1e     fmov     d1, #1.00000000
0x0001598c  00 20 61 1e     fcmp     d0, d1
0x00015990  8d 02 00 54     b.le     #0x159e0
0x00015994  68 25 00 f0     adrp     x8, #0x4c4000
0x00015998  00 55 40 f9     ldr      x0, [x8, #0xa8]
0x0001599c  48 25 00 b0     adrp     x8, #0x4be000
0x000159a0  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x000159a4  00 41 60 1e     fmov     d0, d8
0x000159a8  b1 30 11 94     bl       #0x461c6c
0x000159ac  fd 03 1d aa     mov      x29, x29
0x000159b0  c7 30 11 94     bl       #0x461ccc
0x000159b4  f5 03 00 aa     mov      x21, x0
0x000159b8  a1 25 00 90     adrp     x1, #0x4c9000
0x000159bc  21 c0 15 91     add      x1, x1, #0x570
0x000159c0  e0 03 14 aa     mov      x0, x20
0x000159c4  e2 03 15 aa     mov      x2, x21
0x000159c8  23 00 80 52     mov      w3, #1
0x000159cc  c6 30 11 94     bl       #0x461ce4
0x000159d0  e0 03 15 aa     mov      x0, x21
0x000159d4  b2 30 11 94     bl       #0x461c9c
0x000159d8  e0 03 13 aa     mov      x0, x19
0x000159dc  87 07 00 94     bl       #0x177f8
0x000159e0  e0 03 16 aa     mov      x0, x22
0x000159e4  ae 30 11 94     bl       #0x461c9c
0x000159e8  e0 03 13 aa     mov      x0, x19
0x000159ec  fd 7b 46 a9     ldp      x29, x30, [sp, #0x60]
0x000159f0  f4 4f 45 a9     ldp      x20, x19, [sp, #0x50]
0x000159f4  f6 57 44 a9     ldp      x22, x21, [sp, #0x40]
0x000159f8  f8 5f 43 a9     ldp      x24, x23, [sp, #0x30]
0x000159fc  fa 67 42 a9     ldp      x26, x25, [sp, #0x20]
0x00015a00  e9 23 41 6d     ldp      d9, d8, [sp, #0x10]
0x00015a04  eb 2b c7 6c     ldp      d11, d10, [sp], #0x70
0x00015a08  a5 30 11 14     b        #0x461c9c
