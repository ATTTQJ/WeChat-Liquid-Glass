; Capstone fallback for WCLGEdgeEffectView::updateWithContentColor:blur:alpha:rect:edge:edgeSize:blurRadius:
; address=0x29b548 size=4160

0x0029b548  ef 3b b6 6d     stp      d15, d14, [sp, #-0xa0]!
0x0029b54c  ed 33 01 6d     stp      d13, d12, [sp, #0x10]
0x0029b550  eb 2b 02 6d     stp      d11, d10, [sp, #0x20]
0x0029b554  e9 23 03 6d     stp      d9, d8, [sp, #0x30]
0x0029b558  fc 6f 04 a9     stp      x28, x27, [sp, #0x40]
0x0029b55c  fa 67 05 a9     stp      x26, x25, [sp, #0x50]
0x0029b560  f8 5f 06 a9     stp      x24, x23, [sp, #0x60]
0x0029b564  f6 57 07 a9     stp      x22, x21, [sp, #0x70]
0x0029b568  f4 4f 08 a9     stp      x20, x19, [sp, #0x80]
0x0029b56c  fd 7b 09 a9     stp      x29, x30, [sp, #0x90]
0x0029b570  fd 43 02 91     add      x29, sp, #0x90
0x0029b574  ff c3 00 d1     sub      sp, sp, #0x30
0x0029b578  f5 03 04 aa     mov      x21, x4
0x0029b57c  f6 03 03 aa     mov      x22, x3
0x0029b580  ca 40 60 1e     fmov     d10, d6
0x0029b584  ae 40 60 1e     fmov     d14, d5
0x0029b588  88 40 60 1e     fmov     d8, d4
0x0029b58c  69 40 60 1e     fmov     d9, d3
0x0029b590  4c 40 60 1e     fmov     d12, d2
0x0029b594  2d 40 60 1e     fmov     d13, d1
0x0029b598  0b 40 60 1e     fmov     d11, d0
0x0029b59c  f3 03 02 aa     mov      x19, x2
0x0029b5a0  f9 03 00 aa     mov      x25, x0
0x0029b5a4  28 10 00 b0     adrp     x8, #0x4a0000
0x0029b5a8  08 b1 43 f9     ldr      x8, [x8, #0x760]
0x0029b5ac  08 01 40 f9     ldr      x8, [x8]
0x0029b5b0  a8 83 16 f8     stur     x8, [x29, #-0x98]
0x0029b5b4  28 17 00 b0     adrp     x8, #0x580000
0x0029b5b8  08 41 00 91     add      x8, x8, #0x10
0x0029b5bc  09 fd df 88     ldar     w9, [x8]
0x0029b5c0  c9 16 00 35     cbnz     w9, #0x29b898
0x0029b5c4  ab 14 00 b0     adrp     x11, #0x530000
0x0029b5c8  6b 09 28 91     add      x11, x11, #0xa02
0x0029b5cc  69 01 40 39     ldrb     w9, [x11]
0x0029b5d0  29 79 1a 52     eor      w9, w9, #0xffffffdf
0x0029b5d4  ac 14 00 b0     adrp     x12, #0x530000
0x0029b5d8  8c 39 28 91     add      x12, x12, #0xa0e
0x0029b5dc  89 01 00 39     strb     w9, [x12]
0x0029b5e0  69 05 40 39     ldrb     w9, [x11, #1]
0x0029b5e4  ca 17 80 52     mov      w10, #0xbe
0x0029b5e8  29 01 0a 4a     eor      w9, w9, w10
0x0029b5ec  89 05 00 39     strb     w9, [x12, #1]
0x0029b5f0  6a 09 40 39     ldrb     w10, [x11, #2]
0x0029b5f4  09 0b 80 52     mov      w9, #0x58
0x0029b5f8  4a 01 09 4a     eor      w10, w10, w9
0x0029b5fc  8a 09 00 39     strb     w10, [x12, #2]
0x0029b600  6a 0d 40 39     ldrb     w10, [x11, #3]
0x0029b604  ed 02 80 52     mov      w13, #0x17
0x0029b608  4a 01 0d 4a     eor      w10, w10, w13
0x0029b60c  8a 0d 00 39     strb     w10, [x12, #3]
0x0029b610  6a 11 40 39     ldrb     w10, [x11, #4]
0x0029b614  4d 19 80 52     mov      w13, #0xca
0x0029b618  4a 01 0d 4a     eor      w10, w10, w13
0x0029b61c  8a 11 00 39     strb     w10, [x12, #4]
0x0029b620  6a 15 40 39     ldrb     w10, [x11, #5]
0x0029b624  8d 14 80 52     mov      w13, #0xa4
0x0029b628  4a 01 0d 4a     eor      w10, w10, w13
0x0029b62c  8a 15 00 39     strb     w10, [x12, #5]
0x0029b630  6a 19 40 39     ldrb     w10, [x11, #6]
0x0029b634  4a 69 19 52     eor      w10, w10, #0xffffff83
0x0029b638  8a 19 00 39     strb     w10, [x12, #6]
0x0029b63c  6a 1d 40 39     ldrb     w10, [x11, #7]
0x0029b640  ed 04 80 52     mov      w13, #0x27
0x0029b644  4a 01 0d 4a     eor      w10, w10, w13
0x0029b648  8a 1d 00 39     strb     w10, [x12, #7]
0x0029b64c  6a 21 40 39     ldrb     w10, [x11, #8]
0x0029b650  6d 13 80 52     mov      w13, #0x9b
0x0029b654  4a 01 0d 4a     eor      w10, w10, w13
0x0029b658  8a 21 00 39     strb     w10, [x12, #8]
0x0029b65c  6a 25 40 39     ldrb     w10, [x11, #9]
0x0029b660  cd 04 80 52     mov      w13, #0x26
0x0029b664  4a 01 0d 4a     eor      w10, w10, w13
0x0029b668  8a 25 00 39     strb     w10, [x12, #9]
0x0029b66c  6d 29 40 39     ldrb     w13, [x11, #0xa]
0x0029b670  4a 16 80 52     mov      w10, #0xb2
0x0029b674  ad 01 0a 4a     eor      w13, w13, w10
0x0029b678  8d 29 00 39     strb     w13, [x12, #0xa]
0x0029b67c  6b 2d 40 39     ldrb     w11, [x11, #0xb]
0x0029b680  ad 1e 80 52     mov      w13, #0xf5
0x0029b684  6b 01 0d 4a     eor      w11, w11, w13
0x0029b688  8b 2d 00 39     strb     w11, [x12, #0xb]
0x0029b68c  ab 14 00 b0     adrp     x11, #0x530000
0x0029b690  6b 91 27 91     add      x11, x11, #0x9e4
0x0029b694  6c 01 40 39     ldrb     w12, [x11]
0x0029b698  ad 14 00 b0     adrp     x13, #0x530000
0x0029b69c  ad cd 27 91     add      x13, x13, #0x9f3
0x0029b6a0  8c 75 1c 52     eor      w12, w12, #0xfffffff3
0x0029b6a4  ac 01 00 39     strb     w12, [x13]
0x0029b6a8  6c 05 40 39     ldrb     w12, [x11, #1]
0x0029b6ac  4e 14 80 52     mov      w14, #0xa2
0x0029b6b0  8c 01 0e 4a     eor      w12, w12, w14
0x0029b6b4  ac 05 00 39     strb     w12, [x13, #1]
0x0029b6b8  6c 09 40 39     ldrb     w12, [x11, #2]
0x0029b6bc  8c 01 1e 52     eor      w12, w12, #4
0x0029b6c0  ac 09 00 39     strb     w12, [x13, #2]
0x0029b6c4  6c 0d 40 39     ldrb     w12, [x11, #3]
0x0029b6c8  ce 1b 80 52     mov      w14, #0xde
0x0029b6cc  8c 01 0e 4a     eor      w12, w12, w14
0x0029b6d0  ac 0d 00 39     strb     w12, [x13, #3]
0x0029b6d4  6c 11 40 39     ldrb     w12, [x11, #4]
0x0029b6d8  8c 11 1e 52     eor      w12, w12, #0x7c
0x0029b6dc  ac 11 00 39     strb     w12, [x13, #4]
0x0029b6e0  6c 15 40 39     ldrb     w12, [x11, #5]
0x0029b6e4  ce 02 80 52     mov      w14, #0x16
0x0029b6e8  8c 01 0e 4a     eor      w12, w12, w14
0x0029b6ec  ac 15 00 39     strb     w12, [x13, #5]
0x0029b6f0  6c 19 40 39     ldrb     w12, [x11, #6]
0x0029b6f4  ae 10 80 52     mov      w14, #0x85
0x0029b6f8  8c 01 0e 4a     eor      w12, w12, w14
0x0029b6fc  ac 19 00 39     strb     w12, [x13, #6]
0x0029b700  6c 1d 40 39     ldrb     w12, [x11, #7]
0x0029b704  6e 05 80 52     mov      w14, #0x2b
0x0029b708  8c 01 0e 4a     eor      w12, w12, w14
0x0029b70c  ac 1d 00 39     strb     w12, [x13, #7]
0x0029b710  6c 21 40 39     ldrb     w12, [x11, #8]
0x0029b714  2e 04 80 52     mov      w14, #0x21
0x0029b718  8c 01 0e 4a     eor      w12, w12, w14
0x0029b71c  ac 21 00 39     strb     w12, [x13, #8]
0x0029b720  6c 25 40 39     ldrb     w12, [x11, #9]
0x0029b724  8c 75 1a 52     eor      w12, w12, #0xffffffcf
0x0029b728  ac 25 00 39     strb     w12, [x13, #9]
0x0029b72c  6c 29 40 39     ldrb     w12, [x11, #0xa]
0x0029b730  8c 01 1f 52     eor      w12, w12, #2
0x0029b734  ac 29 00 39     strb     w12, [x13, #0xa]
0x0029b738  6c 2d 40 39     ldrb     w12, [x11, #0xb]
0x0029b73c  8c 0d 1f 52     eor      w12, w12, #0x1e
0x0029b740  ac 2d 00 39     strb     w12, [x13, #0xb]
0x0029b744  6c 31 40 39     ldrb     w12, [x11, #0xc]
0x0029b748  8c 15 00 52     eor      w12, w12, #0x3f
0x0029b74c  ac 31 00 39     strb     w12, [x13, #0xc]
0x0029b750  6c 35 40 39     ldrb     w12, [x11, #0xd]
0x0029b754  8e 09 80 52     mov      w14, #0x4c
0x0029b758  8c 01 0e 4a     eor      w12, w12, w14
0x0029b75c  ac 35 00 39     strb     w12, [x13, #0xd]
0x0029b760  6b 39 40 39     ldrb     w11, [x11, #0xe]
0x0029b764  ab 39 00 39     strb     w11, [x13, #0xe]
0x0029b768  ab 14 00 b0     adrp     x11, #0x530000
0x0029b76c  6b c1 26 91     add      x11, x11, #0x9b0
0x0029b770  6c 01 40 39     ldrb     w12, [x11]
0x0029b774  8d 71 1b 52     eor      w13, w12, #0xffffffe3
0x0029b778  ac 14 00 b0     adrp     x12, #0x530000
0x0029b77c  8c 41 27 91     add      x12, x12, #0x9d0
0x0029b780  8d 01 00 39     strb     w13, [x12]
0x0029b784  6d 05 40 39     ldrb     w13, [x11, #1]
0x0029b788  ee 0d 80 52     mov      w14, #0x6f
0x0029b78c  ad 01 0e 4a     eor      w13, w13, w14
0x0029b790  8d 05 00 39     strb     w13, [x12, #1]
0x0029b794  6d 09 40 39     ldrb     w13, [x11, #2]
0x0029b798  6e 01 80 52     mov      w14, #0xb
0x0029b79c  ad 01 0e 4a     eor      w13, w13, w14
0x0029b7a0  8d 09 00 39     strb     w13, [x12, #2]
0x0029b7a4  6d 0d 40 39     ldrb     w13, [x11, #3]
0x0029b7a8  ad 05 1c 52     eor      w13, w13, #0x30
0x0029b7ac  8d 0d 00 39     strb     w13, [x12, #3]
0x0029b7b0  6d 11 40 39     ldrb     w13, [x11, #4]
0x0029b7b4  0e 0a 80 52     mov      w14, #0x50
0x0029b7b8  ad 01 0e 4a     eor      w13, w13, w14
0x0029b7bc  8d 11 00 39     strb     w13, [x12, #4]
0x0029b7c0  6d 15 40 39     ldrb     w13, [x11, #5]
0x0029b7c4  0e 1a 80 52     mov      w14, #0xd0
0x0029b7c8  ad 01 0e 4a     eor      w13, w13, w14
0x0029b7cc  8d 15 00 39     strb     w13, [x12, #5]
0x0029b7d0  6d 19 40 39     ldrb     w13, [x11, #6]
0x0029b7d4  2e 06 80 52     mov      w14, #0x31
0x0029b7d8  ad 01 0e 4a     eor      w13, w13, w14
0x0029b7dc  8d 19 00 39     strb     w13, [x12, #6]
0x0029b7e0  6d 1d 40 39     ldrb     w13, [x11, #7]
0x0029b7e4  a9 01 09 4a     eor      w9, w13, w9
0x0029b7e8  89 1d 00 39     strb     w9, [x12, #7]
0x0029b7ec  69 21 40 39     ldrb     w9, [x11, #8]
0x0029b7f0  29 e1 03 52     eor      w9, w9, #0x22222222
0x0029b7f4  89 21 00 39     strb     w9, [x12, #8]
0x0029b7f8  69 25 40 39     ldrb     w9, [x11, #9]
0x0029b7fc  6d 03 80 52     mov      w13, #0x1b
0x0029b800  29 01 0d 4a     eor      w9, w9, w13
0x0029b804  89 25 00 39     strb     w9, [x12, #9]
0x0029b808  69 29 40 39     ldrb     w9, [x11, #0xa]
0x0029b80c  29 01 0e 4a     eor      w9, w9, w14
0x0029b810  89 29 00 39     strb     w9, [x12, #0xa]
0x0029b814  69 2d 40 39     ldrb     w9, [x11, #0xb]
0x0029b818  2d 0c 80 52     mov      w13, #0x61
0x0029b81c  29 01 0d 4a     eor      w9, w9, w13
0x0029b820  89 2d 00 39     strb     w9, [x12, #0xb]
0x0029b824  69 31 40 39     ldrb     w9, [x11, #0xc]
0x0029b828  ad 1a 80 52     mov      w13, #0xd5
0x0029b82c  29 01 0d 4a     eor      w9, w9, w13
0x0029b830  89 31 00 39     strb     w9, [x12, #0xc]
0x0029b834  69 35 40 39     ldrb     w9, [x11, #0xd]
0x0029b838  29 01 0a 4a     eor      w9, w9, w10
0x0029b83c  89 35 00 39     strb     w9, [x12, #0xd]
0x0029b840  69 39 40 39     ldrb     w9, [x11, #0xe]
0x0029b844  4a 10 80 52     mov      w10, #0x82
0x0029b848  29 01 0a 4a     eor      w9, w9, w10
0x0029b84c  89 39 00 39     strb     w9, [x12, #0xe]
0x0029b850  69 3d 40 39     ldrb     w9, [x11, #0xf]
0x0029b854  4a 1c 80 52     mov      w10, #0xe2
0x0029b858  29 01 0a 4a     eor      w9, w9, w10
0x0029b85c  89 3d 00 39     strb     w9, [x12, #0xf]
0x0029b860  69 41 40 39     ldrb     w9, [x11, #0x10]
0x0029b864  8a 16 80 52     mov      w10, #0xb4
0x0029b868  29 01 0a 4a     eor      w9, w9, w10
0x0029b86c  89 41 00 39     strb     w9, [x12, #0x10]
0x0029b870  69 45 40 39     ldrb     w9, [x11, #0x11]
0x0029b874  ca 11 80 52     mov      w10, #0x8e
0x0029b878  29 01 0a 4a     eor      w9, w9, w10
0x0029b87c  89 45 00 39     strb     w9, [x12, #0x11]
0x0029b880  69 49 40 39     ldrb     w9, [x11, #0x12]
0x0029b884  29 09 1c 52     eor      w9, w9, #0x70
0x0029b888  89 49 00 39     strb     w9, [x12, #0x12]
0x0029b88c  69 4d 40 39     ldrb     w9, [x11, #0x13]
0x0029b890  29 05 1f 52     eor      w9, w9, #6
0x0029b894  89 4d 00 39     strb     w9, [x12, #0x13]
0x0029b898  29 00 80 52     mov      w9, #1
0x0029b89c  09 fd 9f 88     stlr     w9, [x8]
0x0029b8a0  fa 43 00 d1     sub      x26, sp, #0x10
0x0029b8a4  5f 03 00 91     mov      sp, x26
0x0029b8a8  e0 03 13 aa     mov      x0, x19
0x0029b8ac  ff 18 07 94     bl       #0x461ca8
0x0029b8b0  b3 00 00 b4     cbz      x19, #0x29b8c4
0x0029b8b4  e0 03 13 aa     mov      x0, x19
0x0029b8b8  fc 18 07 94     bl       #0x461ca8
0x0029b8bc  fb 03 13 aa     mov      x27, x19
0x0029b8c0  09 00 00 14     b        #0x29b8e4
0x0029b8c4  48 11 00 b0     adrp     x8, #0x4c4000
0x0029b8c8  00 49 40 f9     ldr      x0, [x8, #0x90]
0x0029b8cc  08 11 00 f0     adrp     x8, #0x4be000
0x0029b8d0  01 2d 42 f9     ldr      x1, [x8, #0x458]
0x0029b8d4  e6 18 07 94     bl       #0x461c6c
0x0029b8d8  fd 03 1d aa     mov      x29, x29
0x0029b8dc  fc 18 07 94     bl       #0x461ccc
0x0029b8e0  fb 03 00 aa     mov      x27, x0
0x0029b8e4  e0 03 67 9e     fmov     d0, xzr
0x0029b8e8  61 69 60 1e     fmaxnm   d1, d11, d0
0x0029b8ec  0f 10 6e 1e     fmov     d15, #1.00000000
0x0029b8f0  20 20 6f 1e     fcmp     d1, d15
0x0029b8f4  eb cd 61 1e     fcsel    d11, d15, d1, gt
0x0029b8f8  4a 69 60 1e     fmaxnm   d10, d10, d0
0x0029b8fc  b3 83 15 f8     stur     x19, [x29, #-0xa8]
0x0029b900  56 01 00 34     cbz      w22, #0x29b928
0x0029b904  28 11 00 d0     adrp     x8, #0x4c1000
0x0029b908  01 11 40 f9     ldr      x1, [x8, #0x20]
0x0029b90c  e0 03 19 aa     mov      x0, x25
0x0029b910  d7 18 07 94     bl       #0x461c6c
0x0029b914  a8 0f 00 d0     adrp     x8, #0x491000
0x0029b918  00 ed 41 fd     ldr      d0, [x8, #0x3d8]
0x0029b91c  40 21 60 1e     fcmp     d10, d0
0x0029b920  04 c8 40 7a     ccmp     w0, #0, #4, gt
0x0029b924  81 00 00 54     b.ne     #0x29b934
0x0029b928  13 00 80 52     mov      w19, #0
0x0029b92c  14 00 80 52     mov      w20, #0
0x0029b930  08 00 00 14     b        #0x29b950
0x0029b934  28 17 00 90     adrp     x8, #0x57f000
0x0029b938  08 d9 47 f9     ldr      x8, [x8, #0xfb0]
0x0029b93c  1f 05 00 b1     cmn      x8, #1
0x0029b940  e1 61 00 54     b.ne     #0x29c57c
0x0029b944  28 17 00 90     adrp     x8, #0x57f000
0x0029b948  14 e1 7e 39     ldrb     w20, [x8, #0xfb8]
0x0029b94c  33 00 80 52     mov      w19, #1
0x0029b950  ce 69 6f 1e     fmaxnm   d14, d14, d15
0x0029b954  28 11 00 d0     adrp     x8, #0x4c1000
0x0029b958  17 15 40 f9     ldr      x23, [x8, #0x28]
0x0029b95c  e0 03 19 aa     mov      x0, x25
0x0029b960  e1 03 17 aa     mov      x1, x23
0x0029b964  c2 18 07 94     bl       #0x461c6c
0x0029b968  fd 03 1d aa     mov      x29, x29
0x0029b96c  d8 18 07 94     bl       #0x461ccc
0x0029b970  c0 08 00 b4     cbz      x0, #0x29ba88
0x0029b974  f6 03 00 aa     mov      x22, x0
0x0029b978  e0 03 19 aa     mov      x0, x25
0x0029b97c  e1 03 17 aa     mov      x1, x23
0x0029b980  bb 18 07 94     bl       #0x461c6c
0x0029b984  fd 03 1d aa     mov      x29, x29
0x0029b988  d1 18 07 94     bl       #0x461ccc
0x0029b98c  f8 03 00 aa     mov      x24, x0
0x0029b990  28 11 00 90     adrp     x8, #0x4bf000
0x0029b994  01 89 44 f9     ldr      x1, [x8, #0x910]
0x0029b998  e2 03 1b aa     mov      x2, x27
0x0029b99c  b4 18 07 94     bl       #0x461c6c
0x0029b9a0  c0 06 00 34     cbz      w0, #0x29ba78
0x0029b9a4  28 11 00 d0     adrp     x8, #0x4c1000
0x0029b9a8  01 19 40 f9     ldr      x1, [x8, #0x30]
0x0029b9ac  e0 03 19 aa     mov      x0, x25
0x0029b9b0  af 18 07 94     bl       #0x461c6c
0x0029b9b4  88 02 00 4a     eor      w8, w20, w0
0x0029b9b8  08 06 00 37     tbnz     w8, #0, #0x29ba78
0x0029b9bc  28 11 00 d0     adrp     x8, #0x4c1000
0x0029b9c0  01 1d 40 f9     ldr      x1, [x8, #0x38]
0x0029b9c4  e0 03 19 aa     mov      x0, x25
0x0029b9c8  a9 18 07 94     bl       #0x461c6c
0x0029b9cc  00 d4 eb 7e     fabd     d0, d0, d11
0x0029b9d0  a8 0f 00 d0     adrp     x8, #0x491000
0x0029b9d4  01 d1 41 fd     ldr      d1, [x8, #0x3a0]
0x0029b9d8  00 20 61 1e     fcmp     d0, d1
0x0029b9dc  e5 04 00 54     b.pl     #0x29ba78
0x0029b9e0  28 11 00 d0     adrp     x8, #0x4c1000
0x0029b9e4  01 21 40 f9     ldr      x1, [x8, #0x40]
0x0029b9e8  e0 03 19 aa     mov      x0, x25
0x0029b9ec  a0 18 07 94     bl       #0x461c6c
0x0029b9f0  a4 41 60 1e     fmov     d4, d13
0x0029b9f4  85 41 60 1e     fmov     d5, d12
0x0029b9f8  26 41 60 1e     fmov     d6, d9
0x0029b9fc  07 41 60 1e     fmov     d7, d8
0x0029ba00  2a 17 07 94     bl       #0x4616a8
0x0029ba04  a0 03 00 34     cbz      w0, #0x29ba78
0x0029ba08  28 11 00 d0     adrp     x8, #0x4c1000
0x0029ba0c  01 25 40 f9     ldr      x1, [x8, #0x48]
0x0029ba10  e0 03 19 aa     mov      x0, x25
0x0029ba14  96 18 07 94     bl       #0x461c6c
0x0029ba18  1f 00 15 eb     cmp      x0, x21
0x0029ba1c  e1 02 00 54     b.ne     #0x29ba78
0x0029ba20  28 11 00 d0     adrp     x8, #0x4c1000
0x0029ba24  01 29 40 f9     ldr      x1, [x8, #0x50]
0x0029ba28  e0 03 19 aa     mov      x0, x25
0x0029ba2c  90 18 07 94     bl       #0x461c6c
0x0029ba30  00 d4 ee 7e     fabd     d0, d0, d14
0x0029ba34  01 10 6c 1e     fmov     d1, #0.50000000
0x0029ba38  00 20 61 1e     fcmp     d0, d1
0x0029ba3c  e5 01 00 54     b.pl     #0x29ba78
0x0029ba40  28 11 00 d0     adrp     x8, #0x4c1000
0x0029ba44  01 2d 40 f9     ldr      x1, [x8, #0x58]
0x0029ba48  e0 03 19 aa     mov      x0, x25
0x0029ba4c  88 18 07 94     bl       #0x461c6c
0x0029ba50  0f d4 ea 7e     fabd     d15, d0, d10
0x0029ba54  e0 03 18 aa     mov      x0, x24
0x0029ba58  91 18 07 94     bl       #0x461c9c
0x0029ba5c  e0 03 16 aa     mov      x0, x22
0x0029ba60  8f 18 07 94     bl       #0x461c9c
0x0029ba64  a8 0f 00 d0     adrp     x8, #0x491000
0x0029ba68  00 b9 41 fd     ldr      d0, [x8, #0x370]
0x0029ba6c  e0 21 60 1e     fcmp     d15, d0
0x0029ba70  c5 00 00 54     b.pl     #0x29ba88
0x0029ba74  ac 02 00 14     b        #0x29c524
0x0029ba78  e0 03 18 aa     mov      x0, x24
0x0029ba7c  88 18 07 94     bl       #0x461c9c
0x0029ba80  e0 03 16 aa     mov      x0, x22
0x0029ba84  86 18 07 94     bl       #0x461c9c
0x0029ba88  b3 03 15 b8     stur     w19, [x29, #-0xb0]
0x0029ba8c  ba 83 14 f8     stur     x26, [x29, #-0xb8]
0x0029ba90  bf 06 00 f1     cmp      x21, #1
0x0029ba94  f6 17 9f 1a     cset     w22, eq
0x0029ba98  28 11 00 d0     adrp     x8, #0x4c1000
0x0029ba9c  01 31 40 f9     ldr      x1, [x8, #0x60]
0x0029baa0  e0 03 19 aa     mov      x0, x25
0x0029baa4  e2 03 1b aa     mov      x2, x27
0x0029baa8  71 18 07 94     bl       #0x461c6c
0x0029baac  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bab0  01 35 40 f9     ldr      x1, [x8, #0x68]
0x0029bab4  82 02 00 12     and      w2, w20, #1
0x0029bab8  e0 03 19 aa     mov      x0, x25
0x0029babc  6c 18 07 94     bl       #0x461c6c
0x0029bac0  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bac4  01 39 40 f9     ldr      x1, [x8, #0x70]
0x0029bac8  e0 03 19 aa     mov      x0, x25
0x0029bacc  60 41 60 1e     fmov     d0, d11
0x0029bad0  67 18 07 94     bl       #0x461c6c
0x0029bad4  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bad8  01 3d 40 f9     ldr      x1, [x8, #0x78]
0x0029badc  e0 03 19 aa     mov      x0, x25
0x0029bae0  a0 41 60 1e     fmov     d0, d13
0x0029bae4  81 41 60 1e     fmov     d1, d12
0x0029bae8  22 41 60 1e     fmov     d2, d9
0x0029baec  03 41 60 1e     fmov     d3, d8
0x0029baf0  5f 18 07 94     bl       #0x461c6c
0x0029baf4  28 11 00 d0     adrp     x8, #0x4c1000
0x0029baf8  01 41 40 f9     ldr      x1, [x8, #0x80]
0x0029bafc  e0 03 19 aa     mov      x0, x25
0x0029bb00  e2 03 15 aa     mov      x2, x21
0x0029bb04  5a 18 07 94     bl       #0x461c6c
0x0029bb08  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bb0c  01 45 40 f9     ldr      x1, [x8, #0x88]
0x0029bb10  e0 03 19 aa     mov      x0, x25
0x0029bb14  c0 41 60 1e     fmov     d0, d14
0x0029bb18  55 18 07 94     bl       #0x461c6c
0x0029bb1c  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bb20  01 49 40 f9     ldr      x1, [x8, #0x90]
0x0029bb24  e0 03 19 aa     mov      x0, x25
0x0029bb28  40 41 60 1e     fmov     d0, d10
0x0029bb2c  50 18 07 94     bl       #0x461c6c
0x0029bb30  53 11 00 b0     adrp     x19, #0x4c4000
0x0029bb34  60 16 41 f9     ldr      x0, [x19, #0x228]
0x0029bb38  28 11 00 90     adrp     x8, #0x4bf000
0x0029bb3c  01 8d 41 f9     ldr      x1, [x8, #0x318]
0x0029bb40  4b 18 07 94     bl       #0x461c6c
0x0029bb44  60 16 41 f9     ldr      x0, [x19, #0x228]
0x0029bb48  28 11 00 90     adrp     x8, #0x4bf000
0x0029bb4c  01 91 41 f9     ldr      x1, [x8, #0x320]
0x0029bb50  22 00 80 52     mov      w2, #1
0x0029bb54  46 18 07 94     bl       #0x461c6c
0x0029bb58  08 11 00 f0     adrp     x8, #0x4be000
0x0029bb5c  1a 79 45 f9     ldr      x26, [x8, #0xaf0]
0x0029bb60  e0 03 19 aa     mov      x0, x25
0x0029bb64  e1 03 1a aa     mov      x1, x26
0x0029bb68  41 18 07 94     bl       #0x461c6c
0x0029bb6c  fd 03 1d aa     mov      x29, x29
0x0029bb70  57 18 07 94     bl       #0x461ccc
0x0029bb74  f7 03 00 aa     mov      x23, x0
0x0029bb78  08 11 00 f0     adrp     x8, #0x4be000
0x0029bb7c  13 3d 43 f9     ldr      x19, [x8, #0x678]
0x0029bb80  e0 03 67 9e     fmov     d0, xzr
0x0029bb84  e1 03 67 9e     fmov     d1, xzr
0x0029bb88  e1 03 13 aa     mov      x1, x19
0x0029bb8c  22 41 60 1e     fmov     d2, d9
0x0029bb90  03 41 60 1e     fmov     d3, d8
0x0029bb94  36 18 07 94     bl       #0x461c6c
0x0029bb98  e0 03 17 aa     mov      x0, x23
0x0029bb9c  40 18 07 94     bl       #0x461c9c
0x0029bba0  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bba4  1c 4d 40 f9     ldr      x28, [x8, #0x98]
0x0029bba8  e0 03 19 aa     mov      x0, x25
0x0029bbac  e1 03 1c aa     mov      x1, x28
0x0029bbb0  2f 18 07 94     bl       #0x461c6c
0x0029bbb4  fd 03 1d aa     mov      x29, x29
0x0029bbb8  45 18 07 94     bl       #0x461ccc
0x0029bbbc  f7 03 00 aa     mov      x23, x0
0x0029bbc0  e0 03 67 9e     fmov     d0, xzr
0x0029bbc4  e1 03 67 9e     fmov     d1, xzr
0x0029bbc8  f8 03 13 aa     mov      x24, x19
0x0029bbcc  e1 03 13 aa     mov      x1, x19
0x0029bbd0  22 41 60 1e     fmov     d2, d9
0x0029bbd4  03 41 60 1e     fmov     d3, d8
0x0029bbd8  25 18 07 94     bl       #0x461c6c
0x0029bbdc  e0 03 17 aa     mov      x0, x23
0x0029bbe0  2f 18 07 94     bl       #0x461c9c
0x0029bbe4  e0 03 19 aa     mov      x0, x25
0x0029bbe8  e1 03 1a aa     mov      x1, x26
0x0029bbec  20 18 07 94     bl       #0x461c6c
0x0029bbf0  fd 03 1d aa     mov      x29, x29
0x0029bbf4  36 18 07 94     bl       #0x461ccc
0x0029bbf8  f7 03 00 aa     mov      x23, x0
0x0029bbfc  08 11 00 f0     adrp     x8, #0x4be000
0x0029bc00  01 31 42 f9     ldr      x1, [x8, #0x460]
0x0029bc04  bb 03 16 f8     stur     x27, [x29, #-0xa0]
0x0029bc08  e2 03 1b aa     mov      x2, x27
0x0029bc0c  18 18 07 94     bl       #0x461c6c
0x0029bc10  e0 03 17 aa     mov      x0, x23
0x0029bc14  22 18 07 94     bl       #0x461c9c
0x0029bc18  e0 03 19 aa     mov      x0, x25
0x0029bc1c  e1 03 1a aa     mov      x1, x26
0x0029bc20  13 18 07 94     bl       #0x461c6c
0x0029bc24  fd 03 1d aa     mov      x29, x29
0x0029bc28  29 18 07 94     bl       #0x461ccc
0x0029bc2c  f7 03 00 aa     mov      x23, x0
0x0029bc30  08 11 00 f0     adrp     x8, #0x4be000
0x0029bc34  1b e5 44 f9     ldr      x27, [x8, #0x9c8]
0x0029bc38  e1 03 1b aa     mov      x1, x27
0x0029bc3c  60 41 60 1e     fmov     d0, d11
0x0029bc40  0b 18 07 94     bl       #0x461c6c
0x0029bc44  e0 03 17 aa     mov      x0, x23
0x0029bc48  15 18 07 94     bl       #0x461c9c
0x0029bc4c  c0 41 60 1e     fmov     d0, d14
0x0029bc50  e0 03 16 aa     mov      x0, x22
0x0029bc54  b0 fc ff 97     bl       #0x29af14
0x0029bc58  fd 03 1d aa     mov      x29, x29
0x0029bc5c  1c 18 07 94     bl       #0x461ccc
0x0029bc60  f6 03 00 aa     mov      x22, x0
0x0029bc64  00 03 00 b4     cbz      x0, #0x29bcc4
0x0029bc68  e0 03 19 aa     mov      x0, x25
0x0029bc6c  e1 03 1c aa     mov      x1, x28
0x0029bc70  ff 17 07 94     bl       #0x461c6c
0x0029bc74  fd 03 1d aa     mov      x29, x29
0x0029bc78  15 18 07 94     bl       #0x461ccc
0x0029bc7c  f7 03 00 aa     mov      x23, x0
0x0029bc80  08 11 00 f0     adrp     x8, #0x4be000
0x0029bc84  01 cd 45 f9     ldr      x1, [x8, #0xb98]
0x0029bc88  f9 17 07 94     bl       #0x461c6c
0x0029bc8c  fd 03 1d aa     mov      x29, x29
0x0029bc90  0f 18 07 94     bl       #0x461ccc
0x0029bc94  f3 03 00 aa     mov      x19, x0
0x0029bc98  08 11 00 f0     adrp     x8, #0x4be000
0x0029bc9c  01 41 43 f9     ldr      x1, [x8, #0x680]
0x0029bca0  f3 17 07 94     bl       #0x461c6c
0x0029bca4  2c d4 ee 7e     fabd     d12, d1, d14
0x0029bca8  e0 03 13 aa     mov      x0, x19
0x0029bcac  fc 17 07 94     bl       #0x461c9c
0x0029bcb0  e0 03 17 aa     mov      x0, x23
0x0029bcb4  fa 17 07 94     bl       #0x461c9c
0x0029bcb8  00 10 6c 1e     fmov     d0, #0.50000000
0x0029bcbc  80 21 60 1e     fcmp     d12, d0
0x0029bcc0  ad 01 00 54     b.le     #0x29bcf4
0x0029bcc4  e0 03 19 aa     mov      x0, x25
0x0029bcc8  e1 03 1c aa     mov      x1, x28
0x0029bccc  e8 17 07 94     bl       #0x461c6c
0x0029bcd0  fd 03 1d aa     mov      x29, x29
0x0029bcd4  fe 17 07 94     bl       #0x461ccc
0x0029bcd8  f3 03 00 aa     mov      x19, x0
0x0029bcdc  08 11 00 f0     adrp     x8, #0x4be000
0x0029bce0  01 71 44 f9     ldr      x1, [x8, #0x8e0]
0x0029bce4  e2 03 16 aa     mov      x2, x22
0x0029bce8  e1 17 07 94     bl       #0x461c6c
0x0029bcec  e0 03 13 aa     mov      x0, x19
0x0029bcf0  eb 17 07 94     bl       #0x461c9c
0x0029bcf4  74 0e 00 36     tbz      w20, #0, #0x29bec0
0x0029bcf8  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bcfc  01 51 40 f9     ldr      x1, [x8, #0xa0]
0x0029bd00  e0 03 19 aa     mov      x0, x25
0x0029bd04  da 17 07 94     bl       #0x461c6c
0x0029bd08  fd 03 1d aa     mov      x29, x29
0x0029bd0c  f0 17 07 94     bl       #0x461ccc
0x0029bd10  f3 03 00 aa     mov      x19, x0
0x0029bd14  08 11 00 f0     adrp     x8, #0x4be000
0x0029bd18  17 d9 44 f9     ldr      x23, [x8, #0x9b0]
0x0029bd1c  e1 03 17 aa     mov      x1, x23
0x0029bd20  22 00 80 52     mov      w2, #1
0x0029bd24  d2 17 07 94     bl       #0x461c6c
0x0029bd28  e0 03 13 aa     mov      x0, x19
0x0029bd2c  dc 17 07 94     bl       #0x461c9c
0x0029bd30  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bd34  13 55 40 f9     ldr      x19, [x8, #0xa8]
0x0029bd38  e0 03 19 aa     mov      x0, x25
0x0029bd3c  e1 03 13 aa     mov      x1, x19
0x0029bd40  cb 17 07 94     bl       #0x461c6c
0x0029bd44  fd 03 1d aa     mov      x29, x29
0x0029bd48  e1 17 07 94     bl       #0x461ccc
0x0029bd4c  fa 03 00 aa     mov      x26, x0
0x0029bd50  e1 03 17 aa     mov      x1, x23
0x0029bd54  02 00 80 52     mov      w2, #0
0x0029bd58  c5 17 07 94     bl       #0x461c6c
0x0029bd5c  e0 03 1a aa     mov      x0, x26
0x0029bd60  cf 17 07 94     bl       #0x461c9c
0x0029bd64  e0 03 19 aa     mov      x0, x25
0x0029bd68  e1 03 13 aa     mov      x1, x19
0x0029bd6c  c0 17 07 94     bl       #0x461c6c
0x0029bd70  fd 03 1d aa     mov      x29, x29
0x0029bd74  d6 17 07 94     bl       #0x461ccc
0x0029bd78  f7 03 00 aa     mov      x23, x0
0x0029bd7c  e0 03 67 9e     fmov     d0, xzr
0x0029bd80  e1 03 67 9e     fmov     d1, xzr
0x0029bd84  e1 03 18 aa     mov      x1, x24
0x0029bd88  22 41 60 1e     fmov     d2, d9
0x0029bd8c  03 41 60 1e     fmov     d3, d8
0x0029bd90  b7 17 07 94     bl       #0x461c6c
0x0029bd94  e0 03 17 aa     mov      x0, x23
0x0029bd98  c1 17 07 94     bl       #0x461c9c
0x0029bd9c  e0 03 19 aa     mov      x0, x25
0x0029bda0  e1 03 13 aa     mov      x1, x19
0x0029bda4  b2 17 07 94     bl       #0x461c6c
0x0029bda8  fd 03 1d aa     mov      x29, x29
0x0029bdac  c8 17 07 94     bl       #0x461ccc
0x0029bdb0  f9 03 00 aa     mov      x25, x0
0x0029bdb4  bd 17 07 94     bl       #0x461ca8
0x0029bdb8  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bdbc  1a 09 40 f9     ldr      x26, [x8, #0x10]
0x0029bdc0  e1 03 1a aa     mov      x1, x26
0x0029bdc4  aa 17 07 94     bl       #0x461c6c
0x0029bdc8  fd 03 1d aa     mov      x29, x29
0x0029bdcc  c0 17 07 94     bl       #0x461ccc
0x0029bdd0  f3 03 00 aa     mov      x19, x0
0x0029bdd4  b2 17 07 94     bl       #0x461c9c
0x0029bdd8  bb 03 56 f8     ldur     x27, [x29, #-0xa0]
0x0029bddc  73 34 00 b4     cbz      x19, #0x29c468
0x0029bde0  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bde4  01 65 40 f9     ldr      x1, [x8, #0xc8]
0x0029bde8  e0 03 19 aa     mov      x0, x25
0x0029bdec  a0 17 07 94     bl       #0x461c6c
0x0029bdf0  00 20 69 1e     fcmp     d0, d9
0x0029bdf4  e8 07 9f 1a     cset     w8, ne
0x0029bdf8  20 20 68 1e     fcmp     d1, d8
0x0029bdfc  13 05 9f 1a     csinc    w19, w8, wzr, eq
0x0029be00  28 11 00 d0     adrp     x8, #0x4c1000
0x0029be04  01 69 40 f9     ldr      x1, [x8, #0xd0]
0x0029be08  e0 03 19 aa     mov      x0, x25
0x0029be0c  98 17 07 94     bl       #0x461c6c
0x0029be10  00 d4 e8 7e     fabd     d0, d0, d8
0x0029be14  0b 10 6c 1e     fmov     d11, #0.50000000
0x0029be18  00 20 6b 1e     fcmp     d0, d11
0x0029be1c  6c 15 00 54     b.gt     #0x29c0c8
0x0029be20  28 11 00 d0     adrp     x8, #0x4c1000
0x0029be24  01 6d 40 f9     ldr      x1, [x8, #0xd8]
0x0029be28  e0 03 19 aa     mov      x0, x25
0x0029be2c  90 17 07 94     bl       #0x461c6c
0x0029be30  00 d4 e8 7e     fabd     d0, d0, d8
0x0029be34  00 20 6b 1e     fcmp     d0, d11
0x0029be38  8c 14 00 54     b.gt     #0x29c0c8
0x0029be3c  bf 06 00 f1     cmp      x21, #1
0x0029be40  f4 17 9f 1a     cset     w20, eq
0x0029be44  28 11 00 d0     adrp     x8, #0x4c1000
0x0029be48  01 71 40 f9     ldr      x1, [x8, #0xe0]
0x0029be4c  e0 03 19 aa     mov      x0, x25
0x0029be50  87 17 07 94     bl       #0x461c6c
0x0029be54  88 02 00 4a     eor      w8, w20, w0
0x0029be58  68 02 08 2a     orr      w8, w19, w8
0x0029be5c  68 13 00 37     tbnz     w8, #0, #0x29c0c8
0x0029be60  28 11 00 d0     adrp     x8, #0x4c1000
0x0029be64  01 75 40 f9     ldr      x1, [x8, #0xe8]
0x0029be68  e0 03 19 aa     mov      x0, x25
0x0029be6c  80 17 07 94     bl       #0x461c6c
0x0029be70  fd 03 1d aa     mov      x29, x29
0x0029be74  96 17 07 94     bl       #0x461ccc
0x0029be78  f3 03 00 aa     mov      x19, x0
0x0029be7c  88 17 07 94     bl       #0x461c9c
0x0029be80  53 12 00 b4     cbz      x19, #0x29c0c8
0x0029be84  e0 03 19 aa     mov      x0, x25
0x0029be88  e1 03 1a aa     mov      x1, x26
0x0029be8c  78 17 07 94     bl       #0x461c6c
0x0029be90  fd 03 1d aa     mov      x29, x29
0x0029be94  8e 17 07 94     bl       #0x461ccc
0x0029be98  f3 03 00 aa     mov      x19, x0
0x0029be9c  e0 03 67 9e     fmov     d0, xzr
0x0029bea0  e1 03 67 9e     fmov     d1, xzr
0x0029bea4  e1 03 18 aa     mov      x1, x24
0x0029bea8  22 41 60 1e     fmov     d2, d9
0x0029beac  03 41 60 1e     fmov     d3, d8
0x0029beb0  6f 17 07 94     bl       #0x461c6c
0x0029beb4  e0 03 13 aa     mov      x0, x19
0x0029beb8  79 17 07 94     bl       #0x461c9c
0x0029bebc  6b 01 00 14     b        #0x29c468
0x0029bec0  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bec4  13 55 40 f9     ldr      x19, [x8, #0xa8]
0x0029bec8  e0 03 19 aa     mov      x0, x25
0x0029becc  e1 03 13 aa     mov      x1, x19
0x0029bed0  67 17 07 94     bl       #0x461c6c
0x0029bed4  fd 03 1d aa     mov      x29, x29
0x0029bed8  7d 17 07 94     bl       #0x461ccc
0x0029bedc  f5 03 00 aa     mov      x21, x0
0x0029bee0  08 11 00 f0     adrp     x8, #0x4be000
0x0029bee4  17 d9 44 f9     ldr      x23, [x8, #0x9b0]
0x0029bee8  e1 03 17 aa     mov      x1, x23
0x0029beec  22 00 80 52     mov      w2, #1
0x0029bef0  5f 17 07 94     bl       #0x461c6c
0x0029bef4  e0 03 15 aa     mov      x0, x21
0x0029bef8  69 17 07 94     bl       #0x461c9c
0x0029befc  e0 03 19 aa     mov      x0, x25
0x0029bf00  e1 03 13 aa     mov      x1, x19
0x0029bf04  5a 17 07 94     bl       #0x461c6c
0x0029bf08  fd 03 1d aa     mov      x29, x29
0x0029bf0c  70 17 07 94     bl       #0x461ccc
0x0029bf10  f3 03 00 aa     mov      x19, x0
0x0029bf14  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bf18  01 09 40 f9     ldr      x1, [x8, #0x10]
0x0029bf1c  54 17 07 94     bl       #0x461c6c
0x0029bf20  fd 03 1d aa     mov      x29, x29
0x0029bf24  6a 17 07 94     bl       #0x461ccc
0x0029bf28  f5 03 00 aa     mov      x21, x0
0x0029bf2c  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bf30  01 59 40 f9     ldr      x1, [x8, #0xb0]
0x0029bf34  02 00 80 d2     mov      x2, #0
0x0029bf38  4d 17 07 94     bl       #0x461c6c
0x0029bf3c  e0 03 15 aa     mov      x0, x21
0x0029bf40  57 17 07 94     bl       #0x461c9c
0x0029bf44  e0 03 13 aa     mov      x0, x19
0x0029bf48  55 17 07 94     bl       #0x461c9c
0x0029bf4c  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bf50  01 51 40 f9     ldr      x1, [x8, #0xa0]
0x0029bf54  e0 03 19 aa     mov      x0, x25
0x0029bf58  45 17 07 94     bl       #0x461c6c
0x0029bf5c  fd 03 1d aa     mov      x29, x29
0x0029bf60  5b 17 07 94     bl       #0x461ccc
0x0029bf64  f5 03 00 aa     mov      x21, x0
0x0029bf68  a8 03 55 b8     ldur     w8, [x29, #-0xb0]
0x0029bf6c  88 24 00 34     cbz      w8, #0x29c3fc
0x0029bf70  15 06 00 b5     cbnz     x21, #0x29c030
0x0029bf74  48 11 00 b0     adrp     x8, #0x4c4000
0x0029bf78  00 a5 40 f9     ldr      x0, [x8, #0x148]
0x0029bf7c  09 17 07 94     bl       #0x461ba0
0x0029bf80  f3 03 00 aa     mov      x19, x0
0x0029bf84  48 11 00 b0     adrp     x8, #0x4c4000
0x0029bf88  00 c1 40 f9     ldr      x0, [x8, #0x180]
0x0029bf8c  08 11 00 f0     adrp     x8, #0x4be000
0x0029bf90  01 19 46 f9     ldr      x1, [x8, #0xc30]
0x0029bf94  22 00 80 52     mov      w2, #1
0x0029bf98  35 17 07 94     bl       #0x461c6c
0x0029bf9c  fd 03 1d aa     mov      x29, x29
0x0029bfa0  4b 17 07 94     bl       #0x461ccc
0x0029bfa4  fc 03 00 aa     mov      x28, x0
0x0029bfa8  08 11 00 f0     adrp     x8, #0x4be000
0x0029bfac  01 dd 45 f9     ldr      x1, [x8, #0xbb8]
0x0029bfb0  e0 03 13 aa     mov      x0, x19
0x0029bfb4  e2 03 1c aa     mov      x2, x28
0x0029bfb8  2d 17 07 94     bl       #0x461c6c
0x0029bfbc  f5 03 00 aa     mov      x21, x0
0x0029bfc0  e0 03 1c aa     mov      x0, x28
0x0029bfc4  36 17 07 94     bl       #0x461c9c
0x0029bfc8  08 11 00 f0     adrp     x8, #0x4be000
0x0029bfcc  01 21 42 f9     ldr      x1, [x8, #0x440]
0x0029bfd0  e0 03 15 aa     mov      x0, x21
0x0029bfd4  02 00 80 52     mov      w2, #0
0x0029bfd8  25 17 07 94     bl       #0x461c6c
0x0029bfdc  e0 03 15 aa     mov      x0, x21
0x0029bfe0  af 7a f7 97     bl       #0x7aa9c
0x0029bfe4  28 11 00 d0     adrp     x8, #0x4c1000
0x0029bfe8  01 5d 40 f9     ldr      x1, [x8, #0xb8]
0x0029bfec  e0 03 19 aa     mov      x0, x25
0x0029bff0  e2 03 15 aa     mov      x2, x21
0x0029bff4  1e 17 07 94     bl       #0x461c6c
0x0029bff8  e0 03 19 aa     mov      x0, x25
0x0029bffc  e1 03 1a aa     mov      x1, x26
0x0029c000  1b 17 07 94     bl       #0x461c6c
0x0029c004  fd 03 1d aa     mov      x29, x29
0x0029c008  31 17 07 94     bl       #0x461ccc
0x0029c00c  f3 03 00 aa     mov      x19, x0
0x0029c010  08 11 00 d0     adrp     x8, #0x4be000
0x0029c014  01 ad 45 f9     ldr      x1, [x8, #0xb58]
0x0029c018  e0 03 19 aa     mov      x0, x25
0x0029c01c  e2 03 15 aa     mov      x2, x21
0x0029c020  e3 03 13 aa     mov      x3, x19
0x0029c024  12 17 07 94     bl       #0x461c6c
0x0029c028  e0 03 13 aa     mov      x0, x19
0x0029c02c  1c 17 07 94     bl       #0x461c9c
0x0029c030  e0 03 15 aa     mov      x0, x21
0x0029c034  e1 03 17 aa     mov      x1, x23
0x0029c038  02 00 80 52     mov      w2, #0
0x0029c03c  0c 17 07 94     bl       #0x461c6c
0x0029c040  e0 03 67 9e     fmov     d0, xzr
0x0029c044  e1 03 67 9e     fmov     d1, xzr
0x0029c048  e0 03 15 aa     mov      x0, x21
0x0029c04c  e1 03 18 aa     mov      x1, x24
0x0029c050  22 41 60 1e     fmov     d2, d9
0x0029c054  03 41 60 1e     fmov     d3, d8
0x0029c058  05 17 07 94     bl       #0x461c6c
0x0029c05c  e0 03 15 aa     mov      x0, x21
0x0029c060  e1 03 1b aa     mov      x1, x27
0x0029c064  60 41 60 1e     fmov     d0, d11
0x0029c068  01 17 07 94     bl       #0x461c6c
0x0029c06c  bb 03 56 f8     ldur     x27, [x29, #-0xa0]
0x0029c070  96 24 00 b4     cbz      x22, #0x29c500
0x0029c074  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c078  01 61 40 f9     ldr      x1, [x8, #0xc0]
0x0029c07c  e0 03 15 aa     mov      x0, x21
0x0029c080  fb 16 07 94     bl       #0x461c6c
0x0029c084  fd 03 1d aa     mov      x29, x29
0x0029c088  11 17 07 94     bl       #0x461ccc
0x0029c08c  f7 03 00 aa     mov      x23, x0
0x0029c090  53 11 00 90     adrp     x19, #0x4c4000
0x0029c094  60 46 40 f9     ldr      x0, [x19, #0x88]
0x0029c098  08 11 00 d0     adrp     x8, #0x4be000
0x0029c09c  01 09 42 f9     ldr      x1, [x8, #0x410]
0x0029c0a0  f3 16 07 94     bl       #0x461c6c
0x0029c0a4  e2 03 00 aa     mov      x2, x0
0x0029c0a8  08 11 00 d0     adrp     x8, #0x4be000
0x0029c0ac  01 0d 42 f9     ldr      x1, [x8, #0x418]
0x0029c0b0  e0 03 17 aa     mov      x0, x23
0x0029c0b4  ee 16 07 94     bl       #0x461c6c
0x0029c0b8  00 1e 00 34     cbz      w0, #0x29c478
0x0029c0bc  08 11 00 d0     adrp     x8, #0x4be000
0x0029c0c0  19 6d 42 f9     ldr      x25, [x8, #0x4d8]
0x0029c0c4  02 01 00 14     b        #0x29c4cc
0x0029c0c8  bf 06 00 f1     cmp      x21, #1
0x0029c0cc  e0 17 9f 1a     cset     w0, eq
0x0029c0d0  00 10 6e 1e     fmov     d0, #1.00000000
0x0029c0d4  00 69 60 1e     fmaxnm   d0, d8, d0
0x0029c0d8  8f fb ff 97     bl       #0x29af14
0x0029c0dc  fd 03 1d aa     mov      x29, x29
0x0029c0e0  fb 16 07 94     bl       #0x461ccc
0x0029c0e4  fb 03 00 aa     mov      x27, x0
0x0029c0e8  f0 16 07 94     bl       #0x461ca8
0x0029c0ec  1c 00 80 d2     mov      x28, #0
0x0029c0f0  00 08 00 b4     cbz      x0, #0x29c1f0
0x0029c0f4  28 21 60 1e     fcmp     d9, #0.0
0x0029c0f8  c9 07 00 54     b.ls     #0x29c1f0
0x0029c0fc  08 21 60 1e     fcmp     d8, #0.0
0x0029c100  89 07 00 54     b.ls     #0x29c1f0
0x0029c104  e2 03 67 9e     fmov     d2, xzr
0x0029c108  20 41 60 1e     fmov     d0, d9
0x0029c10c  01 41 60 1e     fmov     d1, d8
0x0029c110  00 00 80 52     mov      w0, #0
0x0029c114  bf 15 07 94     bl       #0x461810
0x0029c118  c4 15 07 94     bl       #0x461828
0x0029c11c  fc 03 00 aa     mov      x28, x0
0x0029c120  60 06 00 b4     cbz      x0, #0x29c1ec
0x0029c124  ed 03 67 9e     fmov     d13, xzr
0x0029c128  e0 03 67 9e     fmov     d0, xzr
0x0029c12c  e1 03 67 9e     fmov     d1, xzr
0x0029c130  e0 03 1c aa     mov      x0, x28
0x0029c134  22 41 60 1e     fmov     d2, d9
0x0029c138  03 41 60 1e     fmov     d3, d8
0x0029c13c  1f 15 07 94     bl       #0x4615b8
0x0029c140  00 39 68 1e     fsub     d0, d8, d8
0x0029c144  bf 06 00 f1     cmp      x21, #1
0x0029c148  01 68 6d 1e     fmaxnm   d1, d0, d13
0x0029c14c  ab 1d 68 1e     fcsel    d11, d13, d8, ne
0x0029c150  2c 1c 61 1e     fcsel    d12, d1, d1, ne
0x0029c154  0d 1c 6d 1e     fcsel    d13, d0, d13, ne
0x0029c158  48 11 00 90     adrp     x8, #0x4c4000
0x0029c15c  00 49 40 f9     ldr      x0, [x8, #0x90]
0x0029c160  08 11 00 d0     adrp     x8, #0x4be000
0x0029c164  01 29 42 f9     ldr      x1, [x8, #0x450]
0x0029c168  c1 16 07 94     bl       #0x461c6c
0x0029c16c  fd 03 1d aa     mov      x29, x29
0x0029c170  d7 16 07 94     bl       #0x461ccc
0x0029c174  f3 03 00 aa     mov      x19, x0
0x0029c178  cf 16 07 94     bl       #0x461cb4
0x0029c17c  08 11 00 d0     adrp     x8, #0x4be000
0x0029c180  01 61 45 f9     ldr      x1, [x8, #0xac0]
0x0029c184  ba 16 07 94     bl       #0x461c6c
0x0029c188  e1 03 00 aa     mov      x1, x0
0x0029c18c  e0 03 1c aa     mov      x0, x28
0x0029c190  28 15 07 94     bl       #0x461630
0x0029c194  e0 03 13 aa     mov      x0, x19
0x0029c198  c1 16 07 94     bl       #0x461c9c
0x0029c19c  e0 03 67 9e     fmov     d0, xzr
0x0029c1a0  e0 03 1c aa     mov      x0, x28
0x0029c1a4  61 41 60 1e     fmov     d1, d11
0x0029c1a8  22 41 60 1e     fmov     d2, d9
0x0029c1ac  83 41 60 1e     fmov     d3, d12
0x0029c1b0  11 15 07 94     bl       #0x4615f4
0x0029c1b4  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c1b8  01 8d 40 f9     ldr      x1, [x8, #0x118]
0x0029c1bc  e0 03 67 9e     fmov     d0, xzr
0x0029c1c0  04 10 6e 1e     fmov     d4, #1.00000000
0x0029c1c4  e0 03 1b aa     mov      x0, x27
0x0029c1c8  a1 41 60 1e     fmov     d1, d13
0x0029c1cc  22 41 60 1e     fmov     d2, d9
0x0029c1d0  03 41 60 1e     fmov     d3, d8
0x0029c1d4  02 00 80 52     mov      w2, #0
0x0029c1d8  a5 16 07 94     bl       #0x461c6c
0x0029c1dc  96 15 07 94     bl       #0x461834
0x0029c1e0  fd 03 1d aa     mov      x29, x29
0x0029c1e4  ba 16 07 94     bl       #0x461ccc
0x0029c1e8  fc 03 00 aa     mov      x28, x0
0x0029c1ec  8c 15 07 94     bl       #0x46181c
0x0029c1f0  bf 06 00 f1     cmp      x21, #1
0x0029c1f4  f3 17 9f 1a     cset     w19, eq
0x0029c1f8  e0 03 1b aa     mov      x0, x27
0x0029c1fc  a8 16 07 94     bl       #0x461c9c
0x0029c200  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c204  01 79 40 f9     ldr      x1, [x8, #0xf0]
0x0029c208  e0 03 19 aa     mov      x0, x25
0x0029c20c  e2 03 1b aa     mov      x2, x27
0x0029c210  97 16 07 94     bl       #0x461c6c
0x0029c214  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c218  01 7d 40 f9     ldr      x1, [x8, #0xf8]
0x0029c21c  e0 03 19 aa     mov      x0, x25
0x0029c220  20 41 60 1e     fmov     d0, d9
0x0029c224  01 41 60 1e     fmov     d1, d8
0x0029c228  91 16 07 94     bl       #0x461c6c
0x0029c22c  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c230  01 81 40 f9     ldr      x1, [x8, #0x100]
0x0029c234  e0 03 19 aa     mov      x0, x25
0x0029c238  00 41 60 1e     fmov     d0, d8
0x0029c23c  8c 16 07 94     bl       #0x461c6c
0x0029c240  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c244  01 85 40 f9     ldr      x1, [x8, #0x108]
0x0029c248  e0 03 19 aa     mov      x0, x25
0x0029c24c  e2 03 13 aa     mov      x2, x19
0x0029c250  87 16 07 94     bl       #0x461c6c
0x0029c254  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c258  01 89 40 f9     ldr      x1, [x8, #0x110]
0x0029c25c  e0 03 19 aa     mov      x0, x25
0x0029c260  00 41 60 1e     fmov     d0, d8
0x0029c264  82 16 07 94     bl       #0x461c6c
0x0029c268  70 fa ff 97     bl       #0x29ac28
0x0029c26c  fd 03 1d aa     mov      x29, x29
0x0029c270  97 16 07 94     bl       #0x461ccc
0x0029c274  f5 03 00 aa     mov      x21, x0
0x0029c278  20 0d 00 b4     cbz      x0, #0x29c41c
0x0029c27c  e0 03 1c aa     mov      x0, x28
0x0029c280  8d 16 07 94     bl       #0x461cb4
0x0029c284  08 11 00 d0     adrp     x8, #0x4be000
0x0029c288  17 7d 47 f9     ldr      x23, [x8, #0xef8]
0x0029c28c  e1 03 17 aa     mov      x1, x23
0x0029c290  77 16 07 94     bl       #0x461c6c
0x0029c294  40 0c 00 b4     cbz      x0, #0x29c41c
0x0029c298  a8 0f 00 b0     adrp     x8, #0x491000
0x0029c29c  00 ed 41 fd     ldr      d0, [x8, #0x3d8]
0x0029c2a0  40 21 60 1e     fcmp     d10, d0
0x0029c2a4  00 10 6e 1e     fmov     d0, #1.00000000
0x0029c2a8  40 cd 60 1e     fcsel    d0, d10, d0, gt
0x0029c2ac  54 11 00 90     adrp     x20, #0x4c4000
0x0029c2b0  80 56 40 f9     ldr      x0, [x20, #0xa8]
0x0029c2b4  08 11 00 d0     adrp     x8, #0x4be000
0x0029c2b8  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x0029c2bc  6c 16 07 94     bl       #0x461c6c
0x0029c2c0  fd 03 1d aa     mov      x29, x29
0x0029c2c4  82 16 07 94     bl       #0x461ccc
0x0029c2c8  f3 03 00 aa     mov      x19, x0
0x0029c2cc  08 11 00 f0     adrp     x8, #0x4bf000
0x0029c2d0  b8 03 15 f8     stur     x24, [x29, #-0xb0]
0x0029c2d4  f8 03 1a aa     mov      x24, x26
0x0029c2d8  1a 5d 41 f9     ldr      x26, [x8, #0x2b8]
0x0029c2dc  a3 14 00 90     adrp     x3, #0x530000
0x0029c2e0  63 00 2b 91     add      x3, x3, #0xac0
0x0029c2e4  e0 03 15 aa     mov      x0, x21
0x0029c2e8  e1 03 1a aa     mov      x1, x26
0x0029c2ec  e2 03 13 aa     mov      x2, x19
0x0029c2f0  5f 16 07 94     bl       #0x461c6c
0x0029c2f4  e0 03 13 aa     mov      x0, x19
0x0029c2f8  69 16 07 94     bl       #0x461c9c
0x0029c2fc  e0 03 1c aa     mov      x0, x28
0x0029c300  6d 16 07 94     bl       #0x461cb4
0x0029c304  e1 03 17 aa     mov      x1, x23
0x0029c308  59 16 07 94     bl       #0x461c6c
0x0029c30c  e2 03 00 aa     mov      x2, x0
0x0029c310  a3 14 00 90     adrp     x3, #0x530000
0x0029c314  63 00 2a 91     add      x3, x3, #0xa80
0x0029c318  e0 03 15 aa     mov      x0, x21
0x0029c31c  e1 03 1a aa     mov      x1, x26
0x0029c320  53 16 07 94     bl       #0x461c6c
0x0029c324  80 56 40 f9     ldr      x0, [x20, #0xa8]
0x0029c328  08 11 00 d0     adrp     x8, #0x4be000
0x0029c32c  01 7d 42 f9     ldr      x1, [x8, #0x4f8]
0x0029c330  22 00 80 52     mov      w2, #1
0x0029c334  4e 16 07 94     bl       #0x461c6c
0x0029c338  fd 03 1d aa     mov      x29, x29
0x0029c33c  64 16 07 94     bl       #0x461ccc
0x0029c340  f3 03 00 aa     mov      x19, x0
0x0029c344  a3 14 00 90     adrp     x3, #0x530000
0x0029c348  63 00 29 91     add      x3, x3, #0xa40
0x0029c34c  e0 03 15 aa     mov      x0, x21
0x0029c350  e1 03 1a aa     mov      x1, x26
0x0029c354  e2 03 13 aa     mov      x2, x19
0x0029c358  45 16 07 94     bl       #0x461c6c
0x0029c35c  e0 03 13 aa     mov      x0, x19
0x0029c360  4f 16 07 94     bl       #0x461c9c
0x0029c364  a2 83 54 f8     ldur     x2, [x29, #-0xb8]
0x0029c368  55 00 00 f9     str      x21, [x2]
0x0029c36c  48 11 00 90     adrp     x8, #0x4c4000
0x0029c370  00 4d 40 f9     ldr      x0, [x8, #0x98]
0x0029c374  08 11 00 d0     adrp     x8, #0x4be000
0x0029c378  01 39 42 f9     ldr      x1, [x8, #0x470]
0x0029c37c  23 00 80 52     mov      w3, #1
0x0029c380  3b 16 07 94     bl       #0x461c6c
0x0029c384  fd 03 1d aa     mov      x29, x29
0x0029c388  51 16 07 94     bl       #0x461ccc
0x0029c38c  f3 03 00 aa     mov      x19, x0
0x0029c390  e0 03 19 aa     mov      x0, x25
0x0029c394  e1 03 18 aa     mov      x1, x24
0x0029c398  35 16 07 94     bl       #0x461c6c
0x0029c39c  fd 03 1d aa     mov      x29, x29
0x0029c3a0  4b 16 07 94     bl       #0x461ccc
0x0029c3a4  f7 03 00 aa     mov      x23, x0
0x0029c3a8  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c3ac  01 59 40 f9     ldr      x1, [x8, #0xb0]
0x0029c3b0  e2 03 13 aa     mov      x2, x19
0x0029c3b4  2e 16 07 94     bl       #0x461c6c
0x0029c3b8  e0 03 17 aa     mov      x0, x23
0x0029c3bc  38 16 07 94     bl       #0x461c9c
0x0029c3c0  e0 03 13 aa     mov      x0, x19
0x0029c3c4  36 16 07 94     bl       #0x461c9c
0x0029c3c8  e0 03 19 aa     mov      x0, x25
0x0029c3cc  e1 03 18 aa     mov      x1, x24
0x0029c3d0  27 16 07 94     bl       #0x461c6c
0x0029c3d4  fd 03 1d aa     mov      x29, x29
0x0029c3d8  3d 16 07 94     bl       #0x461ccc
0x0029c3dc  f3 03 00 aa     mov      x19, x0
0x0029c3e0  e0 03 67 9e     fmov     d0, xzr
0x0029c3e4  e1 03 67 9e     fmov     d1, xzr
0x0029c3e8  a1 03 55 f8     ldur     x1, [x29, #-0xb0]
0x0029c3ec  22 41 60 1e     fmov     d2, d9
0x0029c3f0  03 41 60 1e     fmov     d3, d8
0x0029c3f4  1e 16 07 94     bl       #0x461c6c
0x0029c3f8  13 00 00 14     b        #0x29c444
0x0029c3fc  e0 03 15 aa     mov      x0, x21
0x0029c400  e1 03 17 aa     mov      x1, x23
0x0029c404  22 00 80 52     mov      w2, #1
0x0029c408  19 16 07 94     bl       #0x461c6c
0x0029c40c  e0 03 15 aa     mov      x0, x21
0x0029c410  23 16 07 94     bl       #0x461c9c
0x0029c414  bb 03 56 f8     ldur     x27, [x29, #-0xa0]
0x0029c418  3c 00 00 14     b        #0x29c508
0x0029c41c  e0 03 19 aa     mov      x0, x25
0x0029c420  e1 03 1a aa     mov      x1, x26
0x0029c424  12 16 07 94     bl       #0x461c6c
0x0029c428  fd 03 1d aa     mov      x29, x29
0x0029c42c  28 16 07 94     bl       #0x461ccc
0x0029c430  f3 03 00 aa     mov      x19, x0
0x0029c434  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c438  01 59 40 f9     ldr      x1, [x8, #0xb0]
0x0029c43c  02 00 80 d2     mov      x2, #0
0x0029c440  0b 16 07 94     bl       #0x461c6c
0x0029c444  e0 03 13 aa     mov      x0, x19
0x0029c448  15 16 07 94     bl       #0x461c9c
0x0029c44c  e0 03 15 aa     mov      x0, x21
0x0029c450  13 16 07 94     bl       #0x461c9c
0x0029c454  e0 03 1c aa     mov      x0, x28
0x0029c458  11 16 07 94     bl       #0x461c9c
0x0029c45c  e0 03 1b aa     mov      x0, x27
0x0029c460  0f 16 07 94     bl       #0x461c9c
0x0029c464  bb 03 56 f8     ldur     x27, [x29, #-0xa0]
0x0029c468  e0 03 19 aa     mov      x0, x25
0x0029c46c  0c 16 07 94     bl       #0x461c9c
0x0029c470  e0 03 19 aa     mov      x0, x25
0x0029c474  24 00 00 14     b        #0x29c504
0x0029c478  60 46 40 f9     ldr      x0, [x19, #0x88]
0x0029c47c  c9 15 07 94     bl       #0x461ba0
0x0029c480  f3 03 00 aa     mov      x19, x0
0x0029c484  08 11 00 d0     adrp     x8, #0x4be000
0x0029c488  19 6d 42 f9     ldr      x25, [x8, #0x4d8]
0x0029c48c  e0 03 15 aa     mov      x0, x21
0x0029c490  e1 03 19 aa     mov      x1, x25
0x0029c494  f6 15 07 94     bl       #0x461c6c
0x0029c498  08 11 00 d0     adrp     x8, #0x4be000
0x0029c49c  01 9d 45 f9     ldr      x1, [x8, #0xb38]
0x0029c4a0  e0 03 13 aa     mov      x0, x19
0x0029c4a4  f2 15 07 94     bl       #0x461c6c
0x0029c4a8  f3 03 00 aa     mov      x19, x0
0x0029c4ac  e0 03 17 aa     mov      x0, x23
0x0029c4b0  fb 15 07 94     bl       #0x461c9c
0x0029c4b4  28 11 00 b0     adrp     x8, #0x4c1000
0x0029c4b8  01 0d 40 f9     ldr      x1, [x8, #0x18]
0x0029c4bc  e0 03 15 aa     mov      x0, x21
0x0029c4c0  e2 03 13 aa     mov      x2, x19
0x0029c4c4  ea 15 07 94     bl       #0x461c6c
0x0029c4c8  f7 03 13 aa     mov      x23, x19
0x0029c4cc  e0 03 15 aa     mov      x0, x21
0x0029c4d0  e1 03 19 aa     mov      x1, x25
0x0029c4d4  e6 15 07 94     bl       #0x461c6c
0x0029c4d8  e0 03 17 aa     mov      x0, x23
0x0029c4dc  e1 03 18 aa     mov      x1, x24
0x0029c4e0  e3 15 07 94     bl       #0x461c6c
0x0029c4e4  08 11 00 d0     adrp     x8, #0x4be000
0x0029c4e8  01 71 44 f9     ldr      x1, [x8, #0x8e0]
0x0029c4ec  e0 03 17 aa     mov      x0, x23
0x0029c4f0  e2 03 16 aa     mov      x2, x22
0x0029c4f4  de 15 07 94     bl       #0x461c6c
0x0029c4f8  e0 03 17 aa     mov      x0, x23
0x0029c4fc  e8 15 07 94     bl       #0x461c9c
0x0029c500  e0 03 15 aa     mov      x0, x21
0x0029c504  e6 15 07 94     bl       #0x461c9c
0x0029c508  48 11 00 90     adrp     x8, #0x4c4000
0x0029c50c  00 15 41 f9     ldr      x0, [x8, #0x228]
0x0029c510  08 11 00 f0     adrp     x8, #0x4bf000
0x0029c514  01 95 41 f9     ldr      x1, [x8, #0x328]
0x0029c518  d5 15 07 94     bl       #0x461c6c
0x0029c51c  e0 03 16 aa     mov      x0, x22
0x0029c520  df 15 07 94     bl       #0x461c9c
0x0029c524  e0 03 1b aa     mov      x0, x27
0x0029c528  dd 15 07 94     bl       #0x461c9c
0x0029c52c  a0 83 55 f8     ldur     x0, [x29, #-0xa8]
0x0029c530  db 15 07 94     bl       #0x461c9c
0x0029c534  a8 83 56 f8     ldur     x8, [x29, #-0x98]
0x0029c538  29 10 00 90     adrp     x9, #0x4a0000
0x0029c53c  29 b1 43 f9     ldr      x9, [x9, #0x760]
0x0029c540  29 01 40 f9     ldr      x9, [x9]
0x0029c544  3f 01 08 eb     cmp      x9, x8
0x0029c548  e1 01 00 54     b.ne     #0x29c584
0x0029c54c  bf 43 02 d1     sub      sp, x29, #0x90
0x0029c550  fd 7b 49 a9     ldp      x29, x30, [sp, #0x90]
0x0029c554  f4 4f 48 a9     ldp      x20, x19, [sp, #0x80]
0x0029c558  f6 57 47 a9     ldp      x22, x21, [sp, #0x70]
0x0029c55c  f8 5f 46 a9     ldp      x24, x23, [sp, #0x60]
0x0029c560  fa 67 45 a9     ldp      x26, x25, [sp, #0x50]
0x0029c564  fc 6f 44 a9     ldp      x28, x27, [sp, #0x40]
0x0029c568  e9 23 43 6d     ldp      d9, d8, [sp, #0x30]
0x0029c56c  eb 2b 42 6d     ldp      d11, d10, [sp, #0x20]
0x0029c570  ed 33 41 6d     ldp      d13, d12, [sp, #0x10]
0x0029c574  ef 3b ca 6c     ldp      d15, d14, [sp], #0xa0
0x0029c578  c0 03 5f d6     ret      
0x0029c57c  3c 0f 07 94     bl       #0x46026c
0x0029c580  f1 fc ff 17     b        #0x29b944
0x0029c584  cd 14 07 94     bl       #0x4618b8
