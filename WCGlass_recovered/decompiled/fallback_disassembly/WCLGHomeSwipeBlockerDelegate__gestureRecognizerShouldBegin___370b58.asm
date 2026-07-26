; Capstone fallback for WCLGHomeSwipeBlockerDelegate::gestureRecognizerShouldBegin:
; address=0x370b58 size=432

0x00370b58  e9 23 bb 6d     stp      d9, d8, [sp, #-0x50]!
0x00370b5c  f8 5f 01 a9     stp      x24, x23, [sp, #0x10]
0x00370b60  f6 57 02 a9     stp      x22, x21, [sp, #0x20]
0x00370b64  f4 4f 03 a9     stp      x20, x19, [sp, #0x30]
0x00370b68  fd 7b 04 a9     stp      x29, x30, [sp, #0x40]
0x00370b6c  fd 03 01 91     add      x29, sp, #0x40
0x00370b70  f3 03 02 aa     mov      x19, x2
0x00370b74  e0 03 02 aa     mov      x0, x2
0x00370b78  4c c4 03 94     bl       #0x461ca8
0x00370b7c  a8 0a 00 90     adrp     x8, #0x4c4000
0x00370b80  00 01 43 f9     ldr      x0, [x8, #0x600]
0x00370b84  68 0a 00 d0     adrp     x8, #0x4be000
0x00370b88  14 09 42 f9     ldr      x20, [x8, #0x410]
0x00370b8c  e1 03 14 aa     mov      x1, x20
0x00370b90  37 c4 03 94     bl       #0x461c6c
0x00370b94  e2 03 00 aa     mov      x2, x0
0x00370b98  68 0a 00 d0     adrp     x8, #0x4be000
0x00370b9c  16 0d 42 f9     ldr      x22, [x8, #0x418]
0x00370ba0  e0 03 13 aa     mov      x0, x19
0x00370ba4  e1 03 16 aa     mov      x1, x22
0x00370ba8  31 c4 03 94     bl       #0x461c6c
0x00370bac  40 07 00 34     cbz      w0, #0x370c94
0x00370bb0  e0 e5 ff 97     bl       #0x36a330
0x00370bb4  00 07 00 34     cbz      w0, #0x370c94
0x00370bb8  68 0a 00 d0     adrp     x8, #0x4be000
0x00370bbc  17 ed 41 f9     ldr      x23, [x8, #0x3d8]
0x00370bc0  e0 03 13 aa     mov      x0, x19
0x00370bc4  e1 03 17 aa     mov      x1, x23
0x00370bc8  29 c4 03 94     bl       #0x461c6c
0x00370bcc  fd 03 1d aa     mov      x29, x29
0x00370bd0  3f c4 03 94     bl       #0x461ccc
0x00370bd4  f5 03 00 aa     mov      x21, x0
0x00370bd8  a8 0a 00 90     adrp     x8, #0x4c4000
0x00370bdc  00 51 40 f9     ldr      x0, [x8, #0xa0]
0x00370be0  e1 03 14 aa     mov      x1, x20
0x00370be4  22 c4 03 94     bl       #0x461c6c
0x00370be8  e2 03 00 aa     mov      x2, x0
0x00370bec  e0 03 15 aa     mov      x0, x21
0x00370bf0  e1 03 16 aa     mov      x1, x22
0x00370bf4  1e c4 03 94     bl       #0x461c6c
0x00370bf8  20 05 00 34     cbz      w0, #0x370c9c
0x00370bfc  e0 03 13 aa     mov      x0, x19
0x00370c00  e1 03 17 aa     mov      x1, x23
0x00370c04  1a c4 03 94     bl       #0x461c6c
0x00370c08  fd 03 1d aa     mov      x29, x29
0x00370c0c  30 c4 03 94     bl       #0x461ccc
0x00370c10  f4 03 00 aa     mov      x20, x0
0x00370c14  e0 03 15 aa     mov      x0, x21
0x00370c18  21 c4 03 94     bl       #0x461c9c
0x00370c1c  74 04 00 b4     cbz      x20, #0x370ca8
0x00370c20  e0 03 14 aa     mov      x0, x20
0x00370c24  01 00 80 d2     mov      x1, #0
0x00370c28  38 00 00 94     bl       #0x370d08
0x00370c2c  e0 03 00 34     cbz      w0, #0x370ca8
0x00370c30  e0 03 13 aa     mov      x0, x19
0x00370c34  1d c4 03 94     bl       #0x461ca8
0x00370c38  68 0a 00 f0     adrp     x8, #0x4bf000
0x00370c3c  01 31 42 f9     ldr      x1, [x8, #0x460]
0x00370c40  e2 03 14 aa     mov      x2, x20
0x00370c44  0a c4 03 94     bl       #0x461c6c
0x00370c48  08 40 60 1e     fmov     d8, d0
0x00370c4c  29 40 60 1e     fmov     d9, d1
0x00370c50  88 0a 00 b0     adrp     x8, #0x4c1000
0x00370c54  01 59 42 f9     ldr      x1, [x8, #0x4b0]
0x00370c58  e0 03 13 aa     mov      x0, x19
0x00370c5c  e2 03 14 aa     mov      x2, x20
0x00370c60  03 c4 03 94     bl       #0x461c6c
0x00370c64  02 90 6e 1e     fmov     d2, #1.25000000
0x00370c68  88 0a f8 d2     mov      x8, #-0x3fac000000000000
0x00370c6c  03 01 67 9e     fmov     d3, x8
0x00370c70  00 21 63 1e     fcmp     d8, d3
0x00370c74  e5 01 00 54     b.pl     #0x370cb0
0x00370c78  03 c1 60 1e     fabs     d3, d8
0x00370c7c  24 c1 60 1e     fabs     d4, d9
0x00370c80  84 08 62 1e     fmul     d4, d4, d2
0x00370c84  60 20 64 1e     fcmp     d3, d4
0x00370c88  4d 01 00 54     b.le     #0x370cb0
0x00370c8c  36 00 80 52     mov      w22, #1
0x00370c90  10 00 00 14     b        #0x370cd0
0x00370c94  16 00 80 52     mov      w22, #0
0x00370c98  13 00 00 14     b        #0x370ce4
0x00370c9c  14 00 80 d2     mov      x20, #0
0x00370ca0  16 00 80 52     mov      w22, #0
0x00370ca4  0c 00 00 14     b        #0x370cd4
0x00370ca8  16 00 80 52     mov      w22, #0
0x00370cac  0c 00 00 14     b        #0x370cdc
0x00370cb0  03 10 74 1e     fmov     d3, #-8.00000000
0x00370cb4  00 20 63 1e     fcmp     d0, d3
0x00370cb8  e8 57 9f 1a     cset     w8, mi
0x00370cbc  00 c0 60 1e     fabs     d0, d0
0x00370cc0  21 c0 60 1e     fabs     d1, d1
0x00370cc4  21 08 62 1e     fmul     d1, d1, d2
0x00370cc8  00 20 61 1e     fcmp     d0, d1
0x00370ccc  f6 d3 88 1a     csel     w22, wzr, w8, le
0x00370cd0  f5 03 13 aa     mov      x21, x19
0x00370cd4  e0 03 15 aa     mov      x0, x21
0x00370cd8  f1 c3 03 94     bl       #0x461c9c
0x00370cdc  e0 03 14 aa     mov      x0, x20
0x00370ce0  ef c3 03 94     bl       #0x461c9c
0x00370ce4  e0 03 13 aa     mov      x0, x19
0x00370ce8  ed c3 03 94     bl       #0x461c9c
0x00370cec  e0 03 16 aa     mov      x0, x22
0x00370cf0  fd 7b 44 a9     ldp      x29, x30, [sp, #0x40]
0x00370cf4  f4 4f 43 a9     ldp      x20, x19, [sp, #0x30]
0x00370cf8  f6 57 42 a9     ldp      x22, x21, [sp, #0x20]
0x00370cfc  f8 5f 41 a9     ldp      x24, x23, [sp, #0x10]
0x00370d00  e9 23 c5 6c     ldp      d9, d8, [sp], #0x50
0x00370d04  c0 03 5f d6     ret      
