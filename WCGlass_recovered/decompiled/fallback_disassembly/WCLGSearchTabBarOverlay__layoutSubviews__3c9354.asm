; Capstone fallback for WCLGSearchTabBarOverlay::layoutSubviews
; address=0x3c9354 size=9560

0x003c9354  ef 3b b6 6d     stp      d15, d14, [sp, #-0xa0]!
0x003c9358  ed 33 01 6d     stp      d13, d12, [sp, #0x10]
0x003c935c  eb 2b 02 6d     stp      d11, d10, [sp, #0x20]
0x003c9360  e9 23 03 6d     stp      d9, d8, [sp, #0x30]
0x003c9364  fc 6f 04 a9     stp      x28, x27, [sp, #0x40]
0x003c9368  fa 67 05 a9     stp      x26, x25, [sp, #0x50]
0x003c936c  f8 5f 06 a9     stp      x24, x23, [sp, #0x60]
0x003c9370  f6 57 07 a9     stp      x22, x21, [sp, #0x70]
0x003c9374  f4 4f 08 a9     stp      x20, x19, [sp, #0x80]
0x003c9378  fd 7b 09 a9     stp      x29, x30, [sp, #0x90]
0x003c937c  fd 43 02 91     add      x29, sp, #0x90
0x003c9380  ff 03 08 d1     sub      sp, sp, #0x200
0x003c9384  f8 03 00 aa     mov      x24, x0
0x003c9388  c8 07 00 f0     adrp     x8, #0x4c4000
0x003c938c  08 09 44 f9     ldr      x8, [x8, #0x810]
0x003c9390  a0 a3 35 a9     stp      x0, x8, [x29, #-0xa8]
0x003c9394  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9398  01 39 43 f9     ldr      x1, [x8, #0x670]
0x003c939c  a0 a3 02 d1     sub      x0, x29, #0xa8
0x003c93a0  39 62 02 94     bl       #0x461c84
0x003c93a4  a8 07 00 b0     adrp     x8, #0x4be000
0x003c93a8  17 1d 42 f9     ldr      x23, [x8, #0x438]
0x003c93ac  e0 03 18 aa     mov      x0, x24
0x003c93b0  e1 03 17 aa     mov      x1, x23
0x003c93b4  02 00 80 52     mov      w2, #0
0x003c93b8  2d 62 02 94     bl       #0x461c6c
0x003c93bc  a8 07 00 b0     adrp     x8, #0x4be000
0x003c93c0  19 65 45 f9     ldr      x25, [x8, #0xac8]
0x003c93c4  e0 03 18 aa     mov      x0, x24
0x003c93c8  e1 03 19 aa     mov      x1, x25
0x003c93cc  28 62 02 94     bl       #0x461c6c
0x003c93d0  fd 03 1d aa     mov      x29, x29
0x003c93d4  3e 62 02 94     bl       #0x461ccc
0x003c93d8  f3 03 00 aa     mov      x19, x0
0x003c93dc  a8 07 00 b0     adrp     x8, #0x4be000
0x003c93e0  01 fd 45 f9     ldr      x1, [x8, #0xbf8]
0x003c93e4  e1 b3 00 f9     str      x1, [sp, #0x160]
0x003c93e8  02 00 80 52     mov      w2, #0
0x003c93ec  20 62 02 94     bl       #0x461c6c
0x003c93f0  e0 03 13 aa     mov      x0, x19
0x003c93f4  2a 62 02 94     bl       #0x461c9c
0x003c93f8  c8 07 00 90     adrp     x8, #0x4c1000
0x003c93fc  14 55 47 f9     ldr      x20, [x8, #0xea8]
0x003c9400  e0 03 18 aa     mov      x0, x24
0x003c9404  e1 03 14 aa     mov      x1, x20
0x003c9408  19 62 02 94     bl       #0x461c6c
0x003c940c  fd 03 1d aa     mov      x29, x29
0x003c9410  2f 62 02 94     bl       #0x461ccc
0x003c9414  f5 03 00 aa     mov      x21, x0
0x003c9418  b6 07 00 b0     adrp     x22, #0x4be000
0x003c941c  c0 04 00 b4     cbz      x0, #0x3c94b4
0x003c9420  e0 03 18 aa     mov      x0, x24
0x003c9424  e1 03 14 aa     mov      x1, x20
0x003c9428  11 62 02 94     bl       #0x461c6c
0x003c942c  fd 03 1d aa     mov      x29, x29
0x003c9430  27 62 02 94     bl       #0x461ccc
0x003c9434  f3 03 00 aa     mov      x19, x0
0x003c9438  da 6e 42 f9     ldr      x26, [x22, #0x4d8]
0x003c943c  e1 03 1a aa     mov      x1, x26
0x003c9440  0b 62 02 94     bl       #0x461c6c
0x003c9444  08 40 60 1e     fmov     d8, d0
0x003c9448  29 40 60 1e     fmov     d9, d1
0x003c944c  4a 40 60 1e     fmov     d10, d2
0x003c9450  6b 40 60 1e     fmov     d11, d3
0x003c9454  e0 03 18 aa     mov      x0, x24
0x003c9458  e1 03 14 aa     mov      x1, x20
0x003c945c  04 62 02 94     bl       #0x461c6c
0x003c9460  fd 03 1d aa     mov      x29, x29
0x003c9464  1a 62 02 94     bl       #0x461ccc
0x003c9468  f6 03 00 aa     mov      x22, x0
0x003c946c  a8 07 00 d0     adrp     x8, #0x4bf000
0x003c9470  01 79 40 f9     ldr      x1, [x8, #0xf0]
0x003c9474  e0 03 18 aa     mov      x0, x24
0x003c9478  00 41 60 1e     fmov     d0, d8
0x003c947c  21 41 60 1e     fmov     d1, d9
0x003c9480  42 41 60 1e     fmov     d2, d10
0x003c9484  63 41 60 1e     fmov     d3, d11
0x003c9488  e2 03 16 aa     mov      x2, x22
0x003c948c  f8 61 02 94     bl       #0x461c6c
0x003c9490  0f 40 60 1e     fmov     d15, d0
0x003c9494  2a 40 60 1e     fmov     d10, d1
0x003c9498  4c 40 60 1e     fmov     d12, d2
0x003c949c  6d 40 60 1e     fmov     d13, d3
0x003c94a0  e0 03 16 aa     mov      x0, x22
0x003c94a4  fe 61 02 94     bl       #0x461c9c
0x003c94a8  e0 03 13 aa     mov      x0, x19
0x003c94ac  fc 61 02 94     bl       #0x461c9c
0x003c94b0  09 00 00 14     b        #0x3c94d4
0x003c94b4  da 6e 42 f9     ldr      x26, [x22, #0x4d8]
0x003c94b8  e0 03 18 aa     mov      x0, x24
0x003c94bc  e1 03 1a aa     mov      x1, x26
0x003c94c0  eb 61 02 94     bl       #0x461c6c
0x003c94c4  0f 40 60 1e     fmov     d15, d0
0x003c94c8  2a 40 60 1e     fmov     d10, d1
0x003c94cc  4c 40 60 1e     fmov     d12, d2
0x003c94d0  6d 40 60 1e     fmov     d13, d3
0x003c94d4  e0 03 15 aa     mov      x0, x21
0x003c94d8  f1 61 02 94     bl       #0x461c9c
0x003c94dc  e0 03 18 aa     mov      x0, x24
0x003c94e0  e1 03 14 aa     mov      x1, x20
0x003c94e4  e2 61 02 94     bl       #0x461c6c
0x003c94e8  fd 03 1d aa     mov      x29, x29
0x003c94ec  f8 61 02 94     bl       #0x461ccc
0x003c94f0  f3 03 00 aa     mov      x19, x0
0x003c94f4  ee 08 00 94     bl       #0x3cb8ac
0x003c94f8  f5 03 00 aa     mov      x21, x0
0x003c94fc  e0 03 13 aa     mov      x0, x19
0x003c9500  e7 61 02 94     bl       #0x461c9c
0x003c9504  f5 01 00 34     cbz      w21, #0x3c9540
0x003c9508  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c950c  01 49 42 f9     ldr      x1, [x8, #0x490]
0x003c9510  e0 03 18 aa     mov      x0, x24
0x003c9514  e0 41 60 1e     fmov     d0, d15
0x003c9518  41 41 60 1e     fmov     d1, d10
0x003c951c  82 41 60 1e     fmov     d2, d12
0x003c9520  a3 41 60 1e     fmov     d3, d13
0x003c9524  d2 61 02 94     bl       #0x461c6c
0x003c9528  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c952c  01 4d 42 f9     ldr      x1, [x8, #0x498]
0x003c9530  e0 03 18 aa     mov      x0, x24
0x003c9534  22 00 80 52     mov      w2, #1
0x003c9538  cd 61 02 94     bl       #0x461c6c
0x003c953c  3e 00 00 14     b        #0x3c9634
0x003c9540  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9544  01 51 42 f9     ldr      x1, [x8, #0x4a0]
0x003c9548  e0 03 18 aa     mov      x0, x24
0x003c954c  c8 61 02 94     bl       #0x461c6c
0x003c9550  00 03 00 34     cbz      w0, #0x3c95b0
0x003c9554  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9558  15 55 42 f9     ldr      x21, [x8, #0x4a8]
0x003c955c  e0 03 18 aa     mov      x0, x24
0x003c9560  e1 03 15 aa     mov      x1, x21
0x003c9564  c2 61 02 94     bl       #0x461c6c
0x003c9568  68 60 02 94     bl       #0x461708
0x003c956c  08 40 60 1e     fmov     d8, d0
0x003c9570  e0 03 18 aa     mov      x0, x24
0x003c9574  e1 03 1a aa     mov      x1, x26
0x003c9578  bd 61 02 94     bl       #0x461c6c
0x003c957c  63 60 02 94     bl       #0x461708
0x003c9580  00 d5 e0 7e     fabd     d0, d8, d0
0x003c9584  01 10 67 1e     fmov     d1, #24.00000000
0x003c9588  00 20 61 1e     fcmp     d0, d1
0x003c958c  25 01 00 54     b.pl     #0x3c95b0
0x003c9590  e0 03 18 aa     mov      x0, x24
0x003c9594  e1 03 15 aa     mov      x1, x21
0x003c9598  b5 61 02 94     bl       #0x461c6c
0x003c959c  0f 40 60 1e     fmov     d15, d0
0x003c95a0  2a 40 60 1e     fmov     d10, d1
0x003c95a4  4c 40 60 1e     fmov     d12, d2
0x003c95a8  6d 40 60 1e     fmov     d13, d3
0x003c95ac  22 00 00 14     b        #0x3c9634
0x003c95b0  e0 41 60 1e     fmov     d0, d15
0x003c95b4  41 41 60 1e     fmov     d1, d10
0x003c95b8  82 41 60 1e     fmov     d2, d12
0x003c95bc  a3 41 60 1e     fmov     d3, d13
0x003c95c0  52 60 02 94     bl       #0x461708
0x003c95c4  48 06 00 90     adrp     x8, #0x491000
0x003c95c8  01 a9 42 fd     ldr      d1, [x8, #0x550]
0x003c95cc  00 20 61 1e     fcmp     d0, d1
0x003c95d0  44 01 00 54     b.mi     #0x3c95f8
0x003c95d4  e0 41 60 1e     fmov     d0, d15
0x003c95d8  41 41 60 1e     fmov     d1, d10
0x003c95dc  82 41 60 1e     fmov     d2, d12
0x003c95e0  a3 41 60 1e     fmov     d3, d13
0x003c95e4  34 60 02 94     bl       #0x4616b4
0x003c95e8  48 08 e8 d2     mov      x8, #0x4042000000000000
0x003c95ec  01 01 67 9e     fmov     d1, x8
0x003c95f0  00 20 61 1e     fcmp     d0, d1
0x003c95f4  05 02 00 54     b.pl     #0x3c9634
0x003c95f8  e0 03 18 aa     mov      x0, x24
0x003c95fc  e1 03 1a aa     mov      x1, x26
0x003c9600  9b 61 02 94     bl       #0x461c6c
0x003c9604  2c 60 02 94     bl       #0x4616b4
0x003c9608  c8 0a f8 d2     mov      x8, #-0x3faa000000000000
0x003c960c  01 01 67 9e     fmov     d1, x8
0x003c9610  0a 28 61 1e     fadd     d10, d0, d1
0x003c9614  e0 03 18 aa     mov      x0, x24
0x003c9618  e1 03 1a aa     mov      x1, x26
0x003c961c  94 61 02 94     bl       #0x461c6c
0x003c9620  3a 60 02 94     bl       #0x461708
0x003c9624  0c 40 60 1e     fmov     d12, d0
0x003c9628  ef 03 67 9e     fmov     d15, xzr
0x003c962c  c8 0a e8 d2     mov      x8, #0x4056000000000000
0x003c9630  0d 01 67 9e     fmov     d13, x8
0x003c9634  e0 41 60 1e     fmov     d0, d15
0x003c9638  41 41 60 1e     fmov     d1, d10
0x003c963c  82 41 60 1e     fmov     d2, d12
0x003c9640  a3 41 60 1e     fmov     d3, d13
0x003c9644  31 60 02 94     bl       #0x461708
0x003c9648  08 40 60 1e     fmov     d8, d0
0x003c964c  e0 41 60 1e     fmov     d0, d15
0x003c9650  41 41 60 1e     fmov     d1, d10
0x003c9654  82 41 60 1e     fmov     d2, d12
0x003c9658  a3 41 60 1e     fmov     d3, d13
0x003c965c  16 60 02 94     bl       #0x4616b4
0x003c9660  08 21 60 1e     fcmp     d8, #0.0
0x003c9664  c9 10 01 54     b.ls     #0x3cb87c
0x003c9668  09 40 60 1e     fmov     d9, d0
0x003c966c  08 20 60 1e     fcmp     d0, #0.0
0x003c9670  69 10 01 54     b.ls     #0x3cb87c
0x003c9674  a8 07 00 f0     adrp     x8, #0x4c0000
0x003c9678  01 e1 44 f9     ldr      x1, [x8, #0x9c0]
0x003c967c  e0 03 18 aa     mov      x0, x24
0x003c9680  7b 61 02 94     bl       #0x461c6c
0x003c9684  e8 03 00 aa     mov      x8, x0
0x003c9688  d3 07 00 f0     adrp     x19, #0x4c4000
0x003c968c  60 4a 40 f9     ldr      x0, [x19, #0x90]
0x003c9690  a9 07 00 b0     adrp     x9, #0x4be000
0x003c9694  35 f9 45 f9     ldr      x21, [x9, #0xbf0]
0x003c9698  e8 27 01 b9     str      w8, [sp, #0x124]
0x003c969c  f5 5f 17 a9     stp      x21, x23, [sp, #0x170]
0x003c96a0  fc 03 19 aa     mov      x28, x25
0x003c96a4  c8 01 00 36     tbz      w8, #0, #0x3c96dc
0x003c96a8  48 06 00 90     adrp     x8, #0x491000
0x003c96ac  01 f5 41 fd     ldr      d1, [x8, #0x3e8]
0x003c96b0  00 10 6e 1e     fmov     d0, #1.00000000
0x003c96b4  e1 03 15 aa     mov      x1, x21
0x003c96b8  6d 61 02 94     bl       #0x461c6c
0x003c96bc  fd 03 1d aa     mov      x29, x29
0x003c96c0  83 61 02 94     bl       #0x461ccc
0x003c96c4  f7 03 00 aa     mov      x23, x0
0x003c96c8  60 4a 40 f9     ldr      x0, [x19, #0x90]
0x003c96cc  48 06 00 90     adrp     x8, #0x491000
0x003c96d0  01 19 42 fd     ldr      d1, [x8, #0x430]
0x003c96d4  00 10 6e 1e     fmov     d0, #1.00000000
0x003c96d8  0d 00 00 14     b        #0x3c970c
0x003c96dc  48 06 00 90     adrp     x8, #0x491000
0x003c96e0  01 15 42 fd     ldr      d1, [x8, #0x428]
0x003c96e4  e0 03 67 9e     fmov     d0, xzr
0x003c96e8  e1 03 15 aa     mov      x1, x21
0x003c96ec  60 61 02 94     bl       #0x461c6c
0x003c96f0  fd 03 1d aa     mov      x29, x29
0x003c96f4  76 61 02 94     bl       #0x461ccc
0x003c96f8  f7 03 00 aa     mov      x23, x0
0x003c96fc  60 4a 40 f9     ldr      x0, [x19, #0x90]
0x003c9700  48 06 00 90     adrp     x8, #0x491000
0x003c9704  01 75 42 fd     ldr      d1, [x8, #0x4e8]
0x003c9708  e0 03 67 9e     fmov     d0, xzr
0x003c970c  e1 03 15 aa     mov      x1, x21
0x003c9710  57 61 02 94     bl       #0x461c6c
0x003c9714  fd 03 1d aa     mov      x29, x29
0x003c9718  6d 61 02 94     bl       #0x461ccc
0x003c971c  e0 0b 00 f9     str      x0, [sp, #0x10]
0x003c9720  c8 0d 00 d0     adrp     x8, #0x583000
0x003c9724  08 01 00 91     add      x8, x8, #0
0x003c9728  1b 01 40 f9     ldr      x27, [x8]
0x003c972c  7f 0b 00 f1     cmp      x27, #2
0x003c9730  48 00 80 52     mov      w8, #2
0x003c9734  75 33 88 9a     csel     x21, x27, x8, lo
0x003c9738  7f 07 00 f1     cmp      x27, #1
0x003c973c  e8 09 e8 d2     mov      x8, #0x404f000000000000
0x003c9740  00 01 67 9e     fmov     d0, x8
0x003c9744  48 06 00 b0     adrp     x8, #0x492000
0x003c9748  01 a9 41 fd     ldr      d1, [x8, #0x350]
0x003c974c  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003c9750  c8 09 e8 d2     mov      x8, #0x404e000000000000
0x003c9754  02 01 67 9e     fmov     d2, x8
0x003c9758  21 0c 62 1e     fcsel    d1, d1, d2, eq
0x003c975c  02 10 65 1e     fmov     d2, #12.00000000
0x003c9760  03 d0 64 1e     fmov     d3, #11.00000000
0x003c9764  64 0c 62 1e     fcsel    d4, d3, d2, eq
0x003c9768  7f 03 00 f1     cmp      x27, #0
0x003c976c  48 09 e8 d2     mov      x8, #0x404a000000000000
0x003c9770  02 01 67 9e     fmov     d2, x8
0x003c9774  40 0c 60 1e     fcsel    d0, d2, d0, eq
0x003c9778  41 0c 61 1e     fcsel    d1, d2, d1, eq
0x003c977c  02 50 66 1e     fmov     d2, #18.00000000
0x003c9780  03 90 67 1e     fmov     d3, #28.00000000
0x003c9784  62 0c 62 1e     fcsel    d2, d3, d2, eq
0x003c9788  a2 83 11 fc     stur     d2, [x29, #-0xe8]
0x003c978c  02 90 65 1e     fmov     d2, #14.00000000
0x003c9790  e4 63 00 fd     str      d4, [sp, #0xc0]
0x003c9794  42 0c 64 1e     fcsel    d2, d2, d4, eq
0x003c9798  e2 c7 00 fd     str      d2, [sp, #0x188]
0x003c979c  00 20 61 1e     fcmp     d0, d1
0x003c97a0  01 4c 61 1e     fcsel    d1, d0, d1, mi
0x003c97a4  c8 0a e8 d2     mov      x8, #0x4056000000000000
0x003c97a8  02 01 67 9e     fmov     d2, x8
0x003c97ac  20 21 62 1e     fcmp     d9, d2
0x003c97b0  20 4c 60 1e     fcsel    d0, d1, d0, mi
0x003c97b4  a0 03 11 fc     stur     d0, [x29, #-0xf0]
0x003c97b8  e0 03 18 aa     mov      x0, x24
0x003c97bc  e1 03 14 aa     mov      x1, x20
0x003c97c0  2b 61 02 94     bl       #0x461c6c
0x003c97c4  fd 03 1d aa     mov      x29, x29
0x003c97c8  41 61 02 94     bl       #0x461ccc
0x003c97cc  f3 03 00 aa     mov      x19, x0
0x003c97d0  33 61 02 94     bl       #0x461c9c
0x003c97d4  b6 07 00 d0     adrp     x22, #0x4bf000
0x003c97d8  b3 01 00 b4     cbz      x19, #0x3c980c
0x003c97dc  e0 03 18 aa     mov      x0, x24
0x003c97e0  e1 03 14 aa     mov      x1, x20
0x003c97e4  22 61 02 94     bl       #0x461c6c
0x003c97e8  fd 03 1d aa     mov      x29, x29
0x003c97ec  38 61 02 94     bl       #0x461ccc
0x003c97f0  f3 03 00 aa     mov      x19, x0
0x003c97f4  c1 ca 40 f9     ldr      x1, [x22, #0x190]
0x003c97f8  1d 61 02 94     bl       #0x461c6c
0x003c97fc  4b 40 60 1e     fmov     d11, d2
0x003c9800  e0 03 13 aa     mov      x0, x19
0x003c9804  26 61 02 94     bl       #0x461c9c
0x003c9808  05 00 00 14     b        #0x3c981c
0x003c980c  c1 ca 40 f9     ldr      x1, [x22, #0x190]
0x003c9810  e0 03 18 aa     mov      x0, x24
0x003c9814  16 61 02 94     bl       #0x461c6c
0x003c9818  4b 40 60 1e     fmov     d11, d2
0x003c981c  00 10 64 1e     fmov     d0, #8.00000000
0x003c9820  60 21 60 1e     fcmp     d11, d0
0x003c9824  0b 4c 6b 1e     fcsel    d11, d0, d11, mi
0x003c9828  e0 41 60 1e     fmov     d0, d15
0x003c982c  41 41 60 1e     fmov     d1, d10
0x003c9830  82 41 60 1e     fmov     d2, d12
0x003c9834  a3 41 60 1e     fmov     d3, d13
0x003c9838  b1 5f 02 94     bl       #0x4616fc
0x003c983c  20 29 60 1e     fadd     d0, d9, d0
0x003c9840  00 38 6b 1e     fsub     d0, d0, d11
0x003c9844  ae 03 51 fc     ldur     d14, [x29, #-0xf0]
0x003c9848  00 38 6e 1e     fsub     d0, d0, d14
0x003c984c  01 10 62 1e     fmov     d1, #4.00000000
0x003c9850  0b 68 61 1e     fmaxnm   d11, d0, d1
0x003c9854  d4 07 00 f0     adrp     x20, #0x4c4000
0x003c9858  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003c985c  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9860  16 f9 44 f9     ldr      x22, [x8, #0x9f0]
0x003c9864  e1 03 16 aa     mov      x1, x22
0x003c9868  01 61 02 94     bl       #0x461c6c
0x003c986c  fd 03 1d aa     mov      x29, x29
0x003c9870  17 61 02 94     bl       #0x461ccc
0x003c9874  f3 03 00 aa     mov      x19, x0
0x003c9878  a8 07 00 b0     adrp     x8, #0x4be000
0x003c987c  19 fd 44 f9     ldr      x25, [x8, #0x9f8]
0x003c9880  e1 03 19 aa     mov      x1, x25
0x003c9884  fa 60 02 94     bl       #0x461c6c
0x003c9888  09 40 60 1e     fmov     d9, d0
0x003c988c  e0 03 13 aa     mov      x0, x19
0x003c9890  03 61 02 94     bl       #0x461c9c
0x003c9894  28 21 60 1e     fcmp     d9, #0.0
0x003c9898  00 10 60 1e     fmov     d0, #2.00000000
0x003c989c  20 8d 60 1e     fcsel    d0, d9, d0, hi
0x003c98a0  61 09 60 1e     fmul     d1, d11, d0
0x003c98a4  21 40 66 1e     frinta   d1, d1
0x003c98a8  20 18 60 1e     fdiv     d0, d1, d0
0x003c98ac  e0 c3 00 fd     str      d0, [sp, #0x180]
0x003c98b0  e0 41 60 1e     fmov     d0, d15
0x003c98b4  41 41 60 1e     fmov     d1, d10
0x003c98b8  82 41 60 1e     fmov     d2, d12
0x003c98bc  a3 41 60 1e     fmov     d3, d13
0x003c98c0  8c 5f 02 94     bl       #0x4616f0
0x003c98c4  e8 77 00 fd     str      d8, [sp, #0xe8]
0x003c98c8  00 29 60 1e     fadd     d0, d8, d0
0x003c98cc  a9 83 51 fc     ldur     d9, [x29, #-0xe8]
0x003c98d0  00 38 69 1e     fsub     d0, d0, d9
0x003c98d4  08 38 6e 1e     fsub     d8, d0, d14
0x003c98d8  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003c98dc  e1 03 16 aa     mov      x1, x22
0x003c98e0  e3 60 02 94     bl       #0x461c6c
0x003c98e4  fd 03 1d aa     mov      x29, x29
0x003c98e8  f9 60 02 94     bl       #0x461ccc
0x003c98ec  f3 03 00 aa     mov      x19, x0
0x003c98f0  e1 03 19 aa     mov      x1, x25
0x003c98f4  de 60 02 94     bl       #0x461c6c
0x003c98f8  0b 40 60 1e     fmov     d11, d0
0x003c98fc  e0 03 13 aa     mov      x0, x19
0x003c9900  e7 60 02 94     bl       #0x461c9c
0x003c9904  68 21 60 1e     fcmp     d11, #0.0
0x003c9908  00 10 60 1e     fmov     d0, #2.00000000
0x003c990c  60 8d 60 1e     fcsel    d0, d11, d0, hi
0x003c9910  01 09 60 1e     fmul     d1, d8, d0
0x003c9914  21 40 66 1e     frinta   d1, d1
0x003c9918  2b 18 60 1e     fdiv     d11, d1, d0
0x003c991c  af 2b 30 6d     stp      d15, d10, [x29, #-0x100]
0x003c9920  e0 41 60 1e     fmov     d0, d15
0x003c9924  41 41 60 1e     fmov     d1, d10
0x003c9928  ec b7 00 fd     str      d12, [sp, #0x168]
0x003c992c  82 41 60 1e     fmov     d2, d12
0x003c9930  ed 8f 00 fd     str      d13, [sp, #0x118]
0x003c9934  a3 41 60 1e     fmov     d3, d13
0x003c9938  6e 5f 02 94     bl       #0x4616f0
0x003c993c  2f 29 60 1e     fadd     d15, d9, d0
0x003c9940  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003c9944  e1 03 16 aa     mov      x1, x22
0x003c9948  c9 60 02 94     bl       #0x461c6c
0x003c994c  fd 03 1d aa     mov      x29, x29
0x003c9950  df 60 02 94     bl       #0x461ccc
0x003c9954  f3 03 00 aa     mov      x19, x0
0x003c9958  e1 03 19 aa     mov      x1, x25
0x003c995c  c4 60 02 94     bl       #0x461c6c
0x003c9960  0c 40 60 1e     fmov     d12, d0
0x003c9964  e0 03 13 aa     mov      x0, x19
0x003c9968  cd 60 02 94     bl       #0x461c9c
0x003c996c  88 21 60 1e     fcmp     d12, #0.0
0x003c9970  08 10 60 1e     fmov     d8, #2.00000000
0x003c9974  80 8d 68 1e     fcsel    d0, d12, d8, hi
0x003c9978  e1 09 60 1e     fmul     d1, d15, d0
0x003c997c  21 40 66 1e     frinta   d1, d1
0x003c9980  2c 18 60 1e     fdiv     d12, d1, d0
0x003c9984  e0 c7 40 fd     ldr      d0, [sp, #0x188]
0x003c9988  60 39 60 1e     fsub     d0, d11, d0
0x003c998c  00 38 6c 1e     fsub     d0, d0, d12
0x003c9990  c8 0b e8 d2     mov      x8, #0x405e000000000000
0x003c9994  01 01 67 9e     fmov     d1, x8
0x003c9998  0f 68 61 1e     fmaxnm   d15, d0, d1
0x003c999c  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003c99a0  f6 af 00 f9     str      x22, [sp, #0x158]
0x003c99a4  e1 03 16 aa     mov      x1, x22
0x003c99a8  b1 60 02 94     bl       #0x461c6c
0x003c99ac  fd 03 1d aa     mov      x29, x29
0x003c99b0  c7 60 02 94     bl       #0x461ccc
0x003c99b4  f3 03 00 aa     mov      x19, x0
0x003c99b8  f9 ab 00 f9     str      x25, [sp, #0x150]
0x003c99bc  e1 03 19 aa     mov      x1, x25
0x003c99c0  ab 60 02 94     bl       #0x461c6c
0x003c99c4  0d 40 60 1e     fmov     d13, d0
0x003c99c8  e0 03 13 aa     mov      x0, x19
0x003c99cc  b4 60 02 94     bl       #0x461c9c
0x003c99d0  a8 21 60 1e     fcmp     d13, #0.0
0x003c99d4  a0 8d 68 1e     fcsel    d0, d13, d8, hi
0x003c99d8  01 08 6f 1e     fmul     d1, d0, d15
0x003c99dc  21 40 66 1e     frinta   d1, d1
0x003c99e0  2a 18 60 1e     fdiv     d10, d1, d0
0x003c99e4  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c99e8  01 ad 41 f9     ldr      x1, [x8, #0x358]
0x003c99ec  e0 03 18 aa     mov      x0, x24
0x003c99f0  e1 73 00 f9     str      x1, [sp, #0xe0]
0x003c99f4  9e 60 02 94     bl       #0x461c6c
0x003c99f8  fd 03 1d aa     mov      x29, x29
0x003c99fc  b4 60 02 94     bl       #0x461ccc
0x003c9a00  f3 03 00 aa     mov      x19, x0
0x003c9a04  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9a08  14 3d 43 f9     ldr      x20, [x8, #0x678]
0x003c9a0c  e1 03 14 aa     mov      x1, x20
0x003c9a10  80 41 60 1e     fmov     d0, d12
0x003c9a14  e8 c3 40 fd     ldr      d8, [sp, #0x180]
0x003c9a18  01 41 60 1e     fmov     d1, d8
0x003c9a1c  42 41 60 1e     fmov     d2, d10
0x003c9a20  c3 41 60 1e     fmov     d3, d14
0x003c9a24  92 60 02 94     bl       #0x461c6c
0x003c9a28  e0 03 13 aa     mov      x0, x19
0x003c9a2c  9c 60 02 94     bl       #0x461c9c
0x003c9a30  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9a34  19 b1 41 f9     ldr      x25, [x8, #0x360]
0x003c9a38  e0 03 18 aa     mov      x0, x24
0x003c9a3c  e1 03 19 aa     mov      x1, x25
0x003c9a40  8b 60 02 94     bl       #0x461c6c
0x003c9a44  fd 03 1d aa     mov      x29, x29
0x003c9a48  a1 60 02 94     bl       #0x461ccc
0x003c9a4c  f3 03 00 aa     mov      x19, x0
0x003c9a50  f4 3b 00 f9     str      x20, [sp, #0x70]
0x003c9a54  e1 03 14 aa     mov      x1, x20
0x003c9a58  60 41 60 1e     fmov     d0, d11
0x003c9a5c  01 41 60 1e     fmov     d1, d8
0x003c9a60  c2 41 60 1e     fmov     d2, d14
0x003c9a64  c3 41 60 1e     fmov     d3, d14
0x003c9a68  81 60 02 94     bl       #0x461c6c
0x003c9a6c  e0 03 13 aa     mov      x0, x19
0x003c9a70  8b 60 02 94     bl       #0x461c9c
0x003c9a74  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9a78  01 59 42 f9     ldr      x1, [x8, #0x4b0]
0x003c9a7c  e0 03 18 aa     mov      x0, x24
0x003c9a80  e2 03 15 aa     mov      x2, x21
0x003c9a84  e3 03 17 aa     mov      x3, x23
0x003c9a88  e4 0b 40 f9     ldr      x4, [sp, #0x10]
0x003c9a8c  78 60 02 94     bl       #0x461c6c
0x003c9a90  f4 03 00 aa     mov      x20, x0
0x003c9a94  60 06 00 37     tbnz     w0, #0, #0x3c9b60
0x003c9a98  e0 03 18 aa     mov      x0, x24
0x003c9a9c  e1 73 40 f9     ldr      x1, [sp, #0xe0]
0x003c9aa0  73 60 02 94     bl       #0x461c6c
0x003c9aa4  fd 03 1d aa     mov      x29, x29
0x003c9aa8  89 60 02 94     bl       #0x461ccc
0x003c9aac  f3 03 00 aa     mov      x19, x0
0x003c9ab0  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9ab4  01 c5 41 f9     ldr      x1, [x8, #0x388]
0x003c9ab8  e0 03 18 aa     mov      x0, x24
0x003c9abc  6c 60 02 94     bl       #0x461c6c
0x003c9ac0  fd 03 1d aa     mov      x29, x29
0x003c9ac4  82 60 02 94     bl       #0x461ccc
0x003c9ac8  f5 03 00 aa     mov      x21, x0
0x003c9acc  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9ad0  16 5d 42 f9     ldr      x22, [x8, #0x4b8]
0x003c9ad4  e0 03 18 aa     mov      x0, x24
0x003c9ad8  e1 03 16 aa     mov      x1, x22
0x003c9adc  e2 03 13 aa     mov      x2, x19
0x003c9ae0  e3 03 15 aa     mov      x3, x21
0x003c9ae4  62 60 02 94     bl       #0x461c6c
0x003c9ae8  e0 03 15 aa     mov      x0, x21
0x003c9aec  6c 60 02 94     bl       #0x461c9c
0x003c9af0  e0 03 13 aa     mov      x0, x19
0x003c9af4  6a 60 02 94     bl       #0x461c9c
0x003c9af8  e0 03 18 aa     mov      x0, x24
0x003c9afc  e1 03 19 aa     mov      x1, x25
0x003c9b00  5b 60 02 94     bl       #0x461c6c
0x003c9b04  fd 03 1d aa     mov      x29, x29
0x003c9b08  71 60 02 94     bl       #0x461ccc
0x003c9b0c  f3 03 00 aa     mov      x19, x0
0x003c9b10  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9b14  01 c9 41 f9     ldr      x1, [x8, #0x390]
0x003c9b18  e0 03 18 aa     mov      x0, x24
0x003c9b1c  54 60 02 94     bl       #0x461c6c
0x003c9b20  fd 03 1d aa     mov      x29, x29
0x003c9b24  6a 60 02 94     bl       #0x461ccc
0x003c9b28  f5 03 00 aa     mov      x21, x0
0x003c9b2c  e0 03 18 aa     mov      x0, x24
0x003c9b30  e1 03 16 aa     mov      x1, x22
0x003c9b34  e2 03 13 aa     mov      x2, x19
0x003c9b38  e3 03 15 aa     mov      x3, x21
0x003c9b3c  4c 60 02 94     bl       #0x461c6c
0x003c9b40  e0 03 15 aa     mov      x0, x21
0x003c9b44  56 60 02 94     bl       #0x461c9c
0x003c9b48  e0 03 13 aa     mov      x0, x19
0x003c9b4c  54 60 02 94     bl       #0x461c9c
0x003c9b50  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9b54  01 61 42 f9     ldr      x1, [x8, #0x4c0]
0x003c9b58  e0 03 18 aa     mov      x0, x24
0x003c9b5c  44 60 02 94     bl       #0x461c6c
0x003c9b60  f7 07 00 f9     str      x23, [sp, #8]
0x003c9b64  c8 07 00 f0     adrp     x8, #0x4c4000
0x003c9b68  00 0d 41 f9     ldr      x0, [x8, #0x218]
0x003c9b6c  7f 07 00 f1     cmp      x27, #1
0x003c9b70  48 06 00 b0     adrp     x8, #0x492000
0x003c9b74  00 a1 41 fd     ldr      d0, [x8, #0x340]
0x003c9b78  01 70 66 1e     fmov     d1, #19.00000000
0x003c9b7c  00 0c 61 1e     fcsel    d0, d0, d1, eq
0x003c9b80  7f 03 00 f1     cmp      x27, #0
0x003c9b84  48 06 00 b0     adrp     x8, #0x492000
0x003c9b88  01 2d 41 fd     ldr      d1, [x8, #0x258]
0x003c9b8c  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003c9b90  a8 06 00 f0     adrp     x8, #0x4a0000
0x003c9b94  08 c5 41 f9     ldr      x8, [x8, #0x388]
0x003c9b98  01 01 40 fd     ldr      d1, [x8]
0x003c9b9c  a8 07 00 d0     adrp     x8, #0x4bf000
0x003c9ba0  01 19 41 f9     ldr      x1, [x8, #0x230]
0x003c9ba4  e1 a3 00 f9     str      x1, [sp, #0x140]
0x003c9ba8  e1 9b 00 fd     str      d1, [sp, #0x130]
0x003c9bac  30 60 02 94     bl       #0x461c6c
0x003c9bb0  fd 03 1d aa     mov      x29, x29
0x003c9bb4  46 60 02 94     bl       #0x461ccc
0x003c9bb8  f3 03 00 aa     mov      x19, x0
0x003c9bbc  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9bc0  15 b9 41 f9     ldr      x21, [x8, #0x370]
0x003c9bc4  e0 03 18 aa     mov      x0, x24
0x003c9bc8  e1 03 15 aa     mov      x1, x21
0x003c9bcc  28 60 02 94     bl       #0x461c6c
0x003c9bd0  fd 03 1d aa     mov      x29, x29
0x003c9bd4  3e 60 02 94     bl       #0x461ccc
0x003c9bd8  f6 03 00 aa     mov      x22, x0
0x003c9bdc  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9be0  01 65 47 f9     ldr      x1, [x8, #0xec8]
0x003c9be4  e1 9f 00 f9     str      x1, [sp, #0x138]
0x003c9be8  e2 03 13 aa     mov      x2, x19
0x003c9bec  20 60 02 94     bl       #0x461c6c
0x003c9bf0  e0 03 16 aa     mov      x0, x22
0x003c9bf4  2a 60 02 94     bl       #0x461c9c
0x003c9bf8  e0 03 13 aa     mov      x0, x19
0x003c9bfc  28 60 02 94     bl       #0x461c9c
0x003c9c00  cc ec ff 97     bl       #0x3c4f30
0x003c9c04  fd 03 1d aa     mov      x29, x29
0x003c9c08  31 60 02 94     bl       #0x461ccc
0x003c9c0c  f3 03 00 aa     mov      x19, x0
0x003c9c10  e0 03 18 aa     mov      x0, x24
0x003c9c14  e1 03 15 aa     mov      x1, x21
0x003c9c18  15 60 02 94     bl       #0x461c6c
0x003c9c1c  fd 03 1d aa     mov      x29, x29
0x003c9c20  2b 60 02 94     bl       #0x461ccc
0x003c9c24  f6 03 00 aa     mov      x22, x0
0x003c9c28  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9c2c  01 7d 43 f9     ldr      x1, [x8, #0x6f8]
0x003c9c30  e2 03 13 aa     mov      x2, x19
0x003c9c34  0e 60 02 94     bl       #0x461c6c
0x003c9c38  e0 03 16 aa     mov      x0, x22
0x003c9c3c  18 60 02 94     bl       #0x461c9c
0x003c9c40  e0 03 13 aa     mov      x0, x19
0x003c9c44  16 60 02 94     bl       #0x461c9c
0x003c9c48  74 0f 00 37     tbnz     w20, #0, #0x3c9e34
0x003c9c4c  7f 07 00 f1     cmp      x27, #1
0x003c9c50  00 90 65 1e     fmov     d0, #14.00000000
0x003c9c54  01 10 65 1e     fmov     d1, #12.00000000
0x003c9c58  21 0c 60 1e     fcsel    d1, d1, d0, eq
0x003c9c5c  02 50 66 1e     fmov     d2, #18.00000000
0x003c9c60  03 10 66 1e     fmov     d3, #16.00000000
0x003c9c64  62 0c 62 1e     fcsel    d2, d3, d2, eq
0x003c9c68  68 09 e8 d2     mov      x8, #0x404b000000000000
0x003c9c6c  03 01 67 9e     fmov     d3, x8
0x003c9c70  48 06 00 b0     adrp     x8, #0x492000
0x003c9c74  04 35 41 fd     ldr      d4, [x8, #0x268]
0x003c9c78  83 0c 63 1e     fcsel    d3, d4, d3, eq
0x003c9c7c  04 90 67 1e     fmov     d4, #28.00000000
0x003c9c80  05 50 67 1e     fmov     d5, #26.00000000
0x003c9c84  a4 0c 64 1e     fcsel    d4, d5, d4, eq
0x003c9c88  48 06 00 b0     adrp     x8, #0x492000
0x003c9c8c  05 ad 41 fd     ldr      d5, [x8, #0x358]
0x003c9c90  06 b0 66 1e     fmov     d6, #21.00000000
0x003c9c94  a5 0c 66 1e     fcsel    d5, d5, d6, eq
0x003c9c98  7f 03 00 f1     cmp      x27, #0
0x003c9c9c  06 d0 64 1e     fmov     d6, #11.00000000
0x003c9ca0  c1 0c 61 1e     fcsel    d1, d6, d1, eq
0x003c9ca4  e1 c7 00 fd     str      d1, [sp, #0x188]
0x003c9ca8  0f 0c 62 1e     fcsel    d15, d0, d2, eq
0x003c9cac  e8 08 e8 d2     mov      x8, #0x4047000000000000
0x003c9cb0  00 01 67 9e     fmov     d0, x8
0x003c9cb4  0b 0c 63 1e     fcsel    d11, d0, d3, eq
0x003c9cb8  00 10 67 1e     fmov     d0, #24.00000000
0x003c9cbc  0c 0c 64 1e     fcsel    d12, d0, d4, eq
0x003c9cc0  48 06 00 90     adrp     x8, #0x491000
0x003c9cc4  00 65 42 fd     ldr      d0, [x8, #0x4c8]
0x003c9cc8  0d 0c 65 1e     fcsel    d13, d0, d5, eq
0x003c9ccc  a9 03 51 fc     ldur     d9, [x29, #-0xf0]
0x003c9cd0  20 39 6d 1e     fsub     d0, d9, d13
0x003c9cd4  01 10 6c 1e     fmov     d1, #0.50000000
0x003c9cd8  48 41 60 1e     fmov     d8, d10
0x003c9cdc  0a 08 61 1e     fmul     d10, d0, d1
0x003c9ce0  c8 07 00 f0     adrp     x8, #0x4c4000
0x003c9ce4  00 95 40 f9     ldr      x0, [x8, #0x128]
0x003c9ce8  e1 af 40 f9     ldr      x1, [sp, #0x158]
0x003c9cec  e0 5f 02 94     bl       #0x461c6c
0x003c9cf0  fd 03 1d aa     mov      x29, x29
0x003c9cf4  f6 5f 02 94     bl       #0x461ccc
0x003c9cf8  f3 03 00 aa     mov      x19, x0
0x003c9cfc  e1 ab 40 f9     ldr      x1, [sp, #0x150]
0x003c9d00  db 5f 02 94     bl       #0x461c6c
0x003c9d04  0e 40 60 1e     fmov     d14, d0
0x003c9d08  e0 03 13 aa     mov      x0, x19
0x003c9d0c  e4 5f 02 94     bl       #0x461c9c
0x003c9d10  c8 21 60 1e     fcmp     d14, #0.0
0x003c9d14  00 10 60 1e     fmov     d0, #2.00000000
0x003c9d18  c0 8d 60 1e     fcsel    d0, d14, d0, hi
0x003c9d1c  41 09 60 1e     fmul     d1, d10, d0
0x003c9d20  0a 41 60 1e     fmov     d10, d8
0x003c9d24  21 40 66 1e     frinta   d1, d1
0x003c9d28  2e 18 60 1e     fdiv     d14, d1, d0
0x003c9d2c  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9d30  01 b5 41 f9     ldr      x1, [x8, #0x368]
0x003c9d34  e0 03 18 aa     mov      x0, x24
0x003c9d38  cd 5f 02 94     bl       #0x461c6c
0x003c9d3c  fd 03 1d aa     mov      x29, x29
0x003c9d40  e3 5f 02 94     bl       #0x461ccc
0x003c9d44  f3 03 00 aa     mov      x19, x0
0x003c9d48  f6 3b 40 f9     ldr      x22, [sp, #0x70]
0x003c9d4c  e1 03 16 aa     mov      x1, x22
0x003c9d50  80 41 60 1e     fmov     d0, d12
0x003c9d54  c1 41 60 1e     fmov     d1, d14
0x003c9d58  a2 41 60 1e     fmov     d2, d13
0x003c9d5c  a3 41 60 1e     fmov     d3, d13
0x003c9d60  c3 5f 02 94     bl       #0x461c6c
0x003c9d64  e0 03 13 aa     mov      x0, x19
0x003c9d68  cd 5f 02 94     bl       #0x461c9c
0x003c9d6c  00 39 6b 1e     fsub     d0, d8, d11
0x003c9d70  00 38 6f 1e     fsub     d0, d0, d15
0x003c9d74  e1 03 67 9e     fmov     d1, xzr
0x003c9d78  0c 68 61 1e     fmaxnm   d12, d0, d1
0x003c9d7c  e0 03 18 aa     mov      x0, x24
0x003c9d80  e1 03 15 aa     mov      x1, x21
0x003c9d84  ba 5f 02 94     bl       #0x461c6c
0x003c9d88  fd 03 1d aa     mov      x29, x29
0x003c9d8c  d0 5f 02 94     bl       #0x461ccc
0x003c9d90  f3 03 00 aa     mov      x19, x0
0x003c9d94  e1 03 67 9e     fmov     d1, xzr
0x003c9d98  e1 03 16 aa     mov      x1, x22
0x003c9d9c  60 41 60 1e     fmov     d0, d11
0x003c9da0  82 41 60 1e     fmov     d2, d12
0x003c9da4  23 41 60 1e     fmov     d3, d9
0x003c9da8  b1 5f 02 94     bl       #0x461c6c
0x003c9dac  e0 03 13 aa     mov      x0, x19
0x003c9db0  bb 5f 02 94     bl       #0x461c9c
0x003c9db4  e0 03 18 aa     mov      x0, x24
0x003c9db8  e1 03 19 aa     mov      x1, x25
0x003c9dbc  ac 5f 02 94     bl       #0x461c6c
0x003c9dc0  fd 03 1d aa     mov      x29, x29
0x003c9dc4  c2 5f 02 94     bl       #0x461ccc
0x003c9dc8  f3 03 00 aa     mov      x19, x0
0x003c9dcc  e1 03 1a aa     mov      x1, x26
0x003c9dd0  a7 5f 02 94     bl       #0x461c6c
0x003c9dd4  e4 c7 40 fd     ldr      d4, [sp, #0x188]
0x003c9dd8  85 40 60 1e     fmov     d5, d4
0x003c9ddc  4e 5e 02 94     bl       #0x461714
0x003c9de0  08 40 60 1e     fmov     d8, d0
0x003c9de4  29 40 60 1e     fmov     d9, d1
0x003c9de8  4b 40 60 1e     fmov     d11, d2
0x003c9dec  6c 40 60 1e     fmov     d12, d3
0x003c9df0  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9df4  01 bd 41 f9     ldr      x1, [x8, #0x378]
0x003c9df8  e0 03 18 aa     mov      x0, x24
0x003c9dfc  9c 5f 02 94     bl       #0x461c6c
0x003c9e00  fd 03 1d aa     mov      x29, x29
0x003c9e04  b2 5f 02 94     bl       #0x461ccc
0x003c9e08  f4 03 00 aa     mov      x20, x0
0x003c9e0c  e1 03 16 aa     mov      x1, x22
0x003c9e10  00 41 60 1e     fmov     d0, d8
0x003c9e14  21 41 60 1e     fmov     d1, d9
0x003c9e18  62 41 60 1e     fmov     d2, d11
0x003c9e1c  83 41 60 1e     fmov     d3, d12
0x003c9e20  93 5f 02 94     bl       #0x461c6c
0x003c9e24  e0 03 14 aa     mov      x0, x20
0x003c9e28  9d 5f 02 94     bl       #0x461c9c
0x003c9e2c  e0 03 13 aa     mov      x0, x19
0x003c9e30  9b 5f 02 94     bl       #0x461c9c
0x003c9e34  7f 07 00 f1     cmp      x27, #1
0x003c9e38  00 50 66 1e     fmov     d0, #18.00000000
0x003c9e3c  01 30 66 1e     fmov     d1, #17.00000000
0x003c9e40  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003c9e44  01 50 64 1e     fmov     d1, #9.00000000
0x003c9e48  02 30 64 1e     fmov     d2, #8.50000000
0x003c9e4c  41 0c 61 1e     fcsel    d1, d2, d1, eq
0x003c9e50  7f 03 00 f1     cmp      x27, #0
0x003c9e54  02 10 66 1e     fmov     d2, #16.00000000
0x003c9e58  48 0c 60 1e     fcsel    d8, d2, d0, eq
0x003c9e5c  00 10 64 1e     fmov     d0, #8.00000000
0x003c9e60  00 0c 61 1e     fcsel    d0, d0, d1, eq
0x003c9e64  e0 83 00 fd     str      d0, [sp, #0x100]
0x003c9e68  00 41 60 1e     fmov     d0, d8
0x003c9e6c  1f 07 00 94     bl       #0x3cbae8
0x003c9e70  0c 40 60 1e     fmov     d12, d0
0x003c9e74  e0 03 18 aa     mov      x0, x24
0x003c9e78  e1 03 19 aa     mov      x1, x25
0x003c9e7c  7c 5f 02 94     bl       #0x461c6c
0x003c9e80  fd 03 1d aa     mov      x29, x29
0x003c9e84  92 5f 02 94     bl       #0x461ccc
0x003c9e88  f3 03 00 aa     mov      x19, x0
0x003c9e8c  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9e90  17 b9 43 f9     ldr      x23, [x8, #0x770]
0x003c9e94  e1 03 17 aa     mov      x1, x23
0x003c9e98  75 5f 02 94     bl       #0x461c6c
0x003c9e9c  15 5e 02 94     bl       #0x4616f0
0x003c9ea0  09 40 60 1e     fmov     d9, d0
0x003c9ea4  e0 03 13 aa     mov      x0, x19
0x003c9ea8  7d 5f 02 94     bl       #0x461c9c
0x003c9eac  e0 03 18 aa     mov      x0, x24
0x003c9eb0  e1 03 19 aa     mov      x1, x25
0x003c9eb4  6e 5f 02 94     bl       #0x461c6c
0x003c9eb8  fd 03 1d aa     mov      x29, x29
0x003c9ebc  84 5f 02 94     bl       #0x461ccc
0x003c9ec0  f3 03 00 aa     mov      x19, x0
0x003c9ec4  e1 03 17 aa     mov      x1, x23
0x003c9ec8  69 5f 02 94     bl       #0x461c6c
0x003c9ecc  0c 5e 02 94     bl       #0x4616fc
0x003c9ed0  0f 40 60 1e     fmov     d15, d0
0x003c9ed4  e0 03 13 aa     mov      x0, x19
0x003c9ed8  71 5f 02 94     bl       #0x461c9c
0x003c9edc  e0 03 18 aa     mov      x0, x24
0x003c9ee0  e1 03 19 aa     mov      x1, x25
0x003c9ee4  62 5f 02 94     bl       #0x461c6c
0x003c9ee8  fd 03 1d aa     mov      x29, x29
0x003c9eec  78 5f 02 94     bl       #0x461ccc
0x003c9ef0  f3 03 00 aa     mov      x19, x0
0x003c9ef4  e1 03 1a aa     mov      x1, x26
0x003c9ef8  5d 5f 02 94     bl       #0x461c6c
0x003c9efc  03 5e 02 94     bl       #0x461708
0x003c9f00  0b 40 60 1e     fmov     d11, d0
0x003c9f04  e0 03 13 aa     mov      x0, x19
0x003c9f08  65 5f 02 94     bl       #0x461c9c
0x003c9f0c  e0 03 18 aa     mov      x0, x24
0x003c9f10  e1 03 19 aa     mov      x1, x25
0x003c9f14  56 5f 02 94     bl       #0x461c6c
0x003c9f18  fd 03 1d aa     mov      x29, x29
0x003c9f1c  6c 5f 02 94     bl       #0x461ccc
0x003c9f20  f3 03 00 aa     mov      x19, x0
0x003c9f24  e1 03 1a aa     mov      x1, x26
0x003c9f28  51 5f 02 94     bl       #0x461c6c
0x003c9f2c  e2 5d 02 94     bl       #0x4616b4
0x003c9f30  0d 40 60 1e     fmov     d13, d0
0x003c9f34  e0 03 13 aa     mov      x0, x19
0x003c9f38  59 5f 02 94     bl       #0x461c9c
0x003c9f3c  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9f40  14 a5 41 f9     ldr      x20, [x8, #0x348]
0x003c9f44  e0 03 18 aa     mov      x0, x24
0x003c9f48  e1 03 14 aa     mov      x1, x20
0x003c9f4c  48 5f 02 94     bl       #0x461c6c
0x003c9f50  fd 03 1d aa     mov      x29, x29
0x003c9f54  5e 5f 02 94     bl       #0x461ccc
0x003c9f58  f3 03 00 aa     mov      x19, x0
0x003c9f5c  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9f60  01 d5 44 f9     ldr      x1, [x8, #0x9a8]
0x003c9f64  e1 c7 00 f9     str      x1, [sp, #0x188]
0x003c9f68  41 5f 02 94     bl       #0x461c6c
0x003c9f6c  f5 03 00 aa     mov      x21, x0
0x003c9f70  e0 03 13 aa     mov      x0, x19
0x003c9f74  4a 5f 02 94     bl       #0x461c9c
0x003c9f78  e8 7f 00 fd     str      d8, [sp, #0xf8]
0x003c9f7c  f7 37 00 f9     str      x23, [sp, #0x68]
0x003c9f80  55 10 00 37     tbnz     w21, #0, #0x3ca188
0x003c9f84  e0 03 18 aa     mov      x0, x24
0x003c9f88  e1 03 14 aa     mov      x1, x20
0x003c9f8c  38 5f 02 94     bl       #0x461c6c
0x003c9f90  fd 03 1d aa     mov      x29, x29
0x003c9f94  4e 5f 02 94     bl       #0x461ccc
0x003c9f98  f3 03 00 aa     mov      x19, x0
0x003c9f9c  a8 07 00 b0     adrp     x8, #0x4be000
0x003c9fa0  01 d1 43 f9     ldr      x1, [x8, #0x7a0]
0x003c9fa4  32 5f 02 94     bl       #0x461c6c
0x003c9fa8  fd 03 1d aa     mov      x29, x29
0x003c9fac  48 5f 02 94     bl       #0x461ccc
0x003c9fb0  f5 03 00 aa     mov      x21, x0
0x003c9fb4  c8 07 00 b0     adrp     x8, #0x4c2000
0x003c9fb8  01 65 42 f9     ldr      x1, [x8, #0x4c8]
0x003c9fbc  e0 03 18 aa     mov      x0, x24
0x003c9fc0  e2 03 15 aa     mov      x2, x21
0x003c9fc4  80 41 60 1e     fmov     d0, d12
0x003c9fc8  29 5f 02 94     bl       #0x461c6c
0x003c9fcc  08 40 60 1e     fmov     d8, d0
0x003c9fd0  e0 03 15 aa     mov      x0, x21
0x003c9fd4  32 5f 02 94     bl       #0x461c9c
0x003c9fd8  e0 03 13 aa     mov      x0, x19
0x003c9fdc  30 5f 02 94     bl       #0x461c9c
0x003c9fe0  20 29 6b 1e     fadd     d0, d9, d11
0x003c9fe4  00 38 68 1e     fsub     d0, d0, d8
0x003c9fe8  01 10 71 1e     fmov     d1, #-3.00000000
0x003c9fec  00 28 61 1e     fadd     d0, d0, d1
0x003c9ff0  01 10 7e 1e     fmov     d1, #-1.00000000
0x003c9ff4  ab 03 11 fc     stur     d11, [x29, #-0xf0]
0x003c9ff8  ea c3 00 fd     str      d10, [sp, #0x180]
0x003c9ffc  0a 28 61 1e     fadd     d10, d0, d1
0x003ca000  d5 07 00 d0     adrp     x21, #0x4c4000
0x003ca004  a0 96 40 f9     ldr      x0, [x21, #0x128]
0x003ca008  f6 af 40 f9     ldr      x22, [sp, #0x158]
0x003ca00c  e1 03 16 aa     mov      x1, x22
0x003ca010  17 5f 02 94     bl       #0x461c6c
0x003ca014  fd 03 1d aa     mov      x29, x29
0x003ca018  2d 5f 02 94     bl       #0x461ccc
0x003ca01c  f3 03 00 aa     mov      x19, x0
0x003ca020  f7 ab 40 f9     ldr      x23, [sp, #0x150]
0x003ca024  e1 03 17 aa     mov      x1, x23
0x003ca028  11 5f 02 94     bl       #0x461c6c
0x003ca02c  ed a7 00 fd     str      d13, [sp, #0x148]
0x003ca030  0d 40 60 1e     fmov     d13, d0
0x003ca034  e0 03 13 aa     mov      x0, x19
0x003ca038  19 5f 02 94     bl       #0x461c9c
0x003ca03c  a8 21 60 1e     fcmp     d13, #0.0
0x003ca040  0b 10 60 1e     fmov     d11, #2.00000000
0x003ca044  a0 8d 6b 1e     fcsel    d0, d13, d11, hi
0x003ca048  41 09 60 1e     fmul     d1, d10, d0
0x003ca04c  21 40 66 1e     frinta   d1, d1
0x003ca050  2d 18 60 1e     fdiv     d13, d1, d0
0x003ca054  00 90 62 1e     fmov     d0, #5.00000000
0x003ca058  e0 29 60 1e     fadd     d0, d15, d0
0x003ca05c  01 10 6e 1e     fmov     d1, #1.00000000
0x003ca060  0a 28 61 1e     fadd     d10, d0, d1
0x003ca064  a0 96 40 f9     ldr      x0, [x21, #0x128]
0x003ca068  e1 03 16 aa     mov      x1, x22
0x003ca06c  00 5f 02 94     bl       #0x461c6c
0x003ca070  fd 03 1d aa     mov      x29, x29
0x003ca074  16 5f 02 94     bl       #0x461ccc
0x003ca078  f3 03 00 aa     mov      x19, x0
0x003ca07c  e1 03 17 aa     mov      x1, x23
0x003ca080  f7 37 40 f9     ldr      x23, [sp, #0x68]
0x003ca084  fa 5e 02 94     bl       #0x461c6c
0x003ca088  0e 40 60 1e     fmov     d14, d0
0x003ca08c  e0 03 13 aa     mov      x0, x19
0x003ca090  03 5f 02 94     bl       #0x461c9c
0x003ca094  c8 21 60 1e     fcmp     d14, #0.0
0x003ca098  c0 8d 6b 1e     fcsel    d0, d14, d11, hi
0x003ca09c  41 09 60 1e     fmul     d1, d10, d0
0x003ca0a0  ea c3 40 fd     ldr      d10, [sp, #0x180]
0x003ca0a4  ab 03 51 fc     ldur     d11, [x29, #-0xf0]
0x003ca0a8  21 40 66 1e     frinta   d1, d1
0x003ca0ac  2e 18 60 1e     fdiv     d14, d1, d0
0x003ca0b0  e0 03 18 aa     mov      x0, x24
0x003ca0b4  e1 03 14 aa     mov      x1, x20
0x003ca0b8  ed 5e 02 94     bl       #0x461c6c
0x003ca0bc  fd 03 1d aa     mov      x29, x29
0x003ca0c0  03 5f 02 94     bl       #0x461ccc
0x003ca0c4  f3 03 00 aa     mov      x19, x0
0x003ca0c8  e1 3b 40 f9     ldr      x1, [sp, #0x70]
0x003ca0cc  a0 41 60 1e     fmov     d0, d13
0x003ca0d0  ed a7 40 fd     ldr      d13, [sp, #0x148]
0x003ca0d4  c1 41 60 1e     fmov     d1, d14
0x003ca0d8  02 41 60 1e     fmov     d2, d8
0x003ca0dc  83 41 60 1e     fmov     d3, d12
0x003ca0e0  e3 5e 02 94     bl       #0x461c6c
0x003ca0e4  e0 03 13 aa     mov      x0, x19
0x003ca0e8  ed 5e 02 94     bl       #0x461c9c
0x003ca0ec  00 10 6c 1e     fmov     d0, #0.50000000
0x003ca0f0  88 09 60 1e     fmul     d8, d12, d0
0x003ca0f4  e0 03 18 aa     mov      x0, x24
0x003ca0f8  e1 03 14 aa     mov      x1, x20
0x003ca0fc  dc 5e 02 94     bl       #0x461c6c
0x003ca100  fd 03 1d aa     mov      x29, x29
0x003ca104  f2 5e 02 94     bl       #0x461ccc
0x003ca108  f3 03 00 aa     mov      x19, x0
0x003ca10c  e1 03 1c aa     mov      x1, x28
0x003ca110  d7 5e 02 94     bl       #0x461c6c
0x003ca114  fd 03 1d aa     mov      x29, x29
0x003ca118  ed 5e 02 94     bl       #0x461ccc
0x003ca11c  f5 03 00 aa     mov      x21, x0
0x003ca120  a8 07 00 90     adrp     x8, #0x4be000
0x003ca124  01 a5 45 f9     ldr      x1, [x8, #0xb48]
0x003ca128  00 41 60 1e     fmov     d0, d8
0x003ca12c  d0 5e 02 94     bl       #0x461c6c
0x003ca130  e0 03 15 aa     mov      x0, x21
0x003ca134  da 5e 02 94     bl       #0x461c9c
0x003ca138  e0 03 13 aa     mov      x0, x19
0x003ca13c  d8 5e 02 94     bl       #0x461c9c
0x003ca140  e0 03 18 aa     mov      x0, x24
0x003ca144  e1 03 14 aa     mov      x1, x20
0x003ca148  c9 5e 02 94     bl       #0x461c6c
0x003ca14c  fd 03 1d aa     mov      x29, x29
0x003ca150  df 5e 02 94     bl       #0x461ccc
0x003ca154  f3 03 00 aa     mov      x19, x0
0x003ca158  e1 03 1c aa     mov      x1, x28
0x003ca15c  c4 5e 02 94     bl       #0x461c6c
0x003ca160  fd 03 1d aa     mov      x29, x29
0x003ca164  da 5e 02 94     bl       #0x461ccc
0x003ca168  f5 03 00 aa     mov      x21, x0
0x003ca16c  e1 b3 40 f9     ldr      x1, [sp, #0x160]
0x003ca170  22 00 80 52     mov      w2, #1
0x003ca174  be 5e 02 94     bl       #0x461c6c
0x003ca178  e0 03 15 aa     mov      x0, x21
0x003ca17c  c8 5e 02 94     bl       #0x461c9c
0x003ca180  e0 03 13 aa     mov      x0, x19
0x003ca184  c6 5e 02 94     bl       #0x461c9c
0x003ca188  c8 07 00 90     adrp     x8, #0x4c2000
0x003ca18c  15 a1 41 f9     ldr      x21, [x8, #0x340]
0x003ca190  e0 03 18 aa     mov      x0, x24
0x003ca194  e1 03 15 aa     mov      x1, x21
0x003ca198  b5 5e 02 94     bl       #0x461c6c
0x003ca19c  fd 03 1d aa     mov      x29, x29
0x003ca1a0  cb 5e 02 94     bl       #0x461ccc
0x003ca1a4  f3 03 00 aa     mov      x19, x0
0x003ca1a8  e1 c7 40 f9     ldr      x1, [sp, #0x188]
0x003ca1ac  b0 5e 02 94     bl       #0x461c6c
0x003ca1b0  f6 03 00 aa     mov      x22, x0
0x003ca1b4  e0 03 13 aa     mov      x0, x19
0x003ca1b8  b9 5e 02 94     bl       #0x461c9c
0x003ca1bc  b6 02 00 37     tbnz     w22, #0, #0x3ca210
0x003ca1c0  e0 03 18 aa     mov      x0, x24
0x003ca1c4  e1 03 15 aa     mov      x1, x21
0x003ca1c8  a9 5e 02 94     bl       #0x461c6c
0x003ca1cc  fd 03 1d aa     mov      x29, x29
0x003ca1d0  bf 5e 02 94     bl       #0x461ccc
0x003ca1d4  f3 03 00 aa     mov      x19, x0
0x003ca1d8  28 06 00 f0     adrp     x8, #0x491000
0x003ca1dc  00 ad 42 fd     ldr      d0, [x8, #0x558]
0x003ca1e0  60 25 40 1f     fmadd    d0, d11, d0, d9
0x003ca1e4  01 10 7e 1e     fmov     d1, #-1.00000000
0x003ca1e8  00 28 61 1e     fadd     d0, d0, d1
0x003ca1ec  28 06 00 f0     adrp     x8, #0x491000
0x003ca1f0  01 29 43 fd     ldr      d1, [x8, #0x650]
0x003ca1f4  a1 3d 41 1f     fmadd    d1, d13, d1, d15
0x003ca1f8  02 10 6e 1e     fmov     d2, #1.00000000
0x003ca1fc  21 28 62 1e     fadd     d1, d1, d2
0x003ca200  e2 83 40 fd     ldr      d2, [sp, #0x100]
0x003ca204  5c 06 00 94     bl       #0x3cbb74
0x003ca208  e0 03 13 aa     mov      x0, x19
0x003ca20c  a4 5e 02 94     bl       #0x461c9c
0x003ca210  e0 03 18 aa     mov      x0, x24
0x003ca214  e1 03 15 aa     mov      x1, x21
0x003ca218  95 5e 02 94     bl       #0x461c6c
0x003ca21c  fd 03 1d aa     mov      x29, x29
0x003ca220  ab 5e 02 94     bl       #0x461ccc
0x003ca224  f3 03 00 aa     mov      x19, x0
0x003ca228  a8 07 00 90     adrp     x8, #0x4be000
0x003ca22c  15 e9 44 f9     ldr      x21, [x8, #0x9d0]
0x003ca230  e0 03 18 aa     mov      x0, x24
0x003ca234  e1 03 15 aa     mov      x1, x21
0x003ca238  e2 03 13 aa     mov      x2, x19
0x003ca23c  8c 5e 02 94     bl       #0x461c6c
0x003ca240  e0 03 13 aa     mov      x0, x19
0x003ca244  96 5e 02 94     bl       #0x461c9c
0x003ca248  e0 03 18 aa     mov      x0, x24
0x003ca24c  e1 03 14 aa     mov      x1, x20
0x003ca250  87 5e 02 94     bl       #0x461c6c
0x003ca254  fd 03 1d aa     mov      x29, x29
0x003ca258  9d 5e 02 94     bl       #0x461ccc
0x003ca25c  f3 03 00 aa     mov      x19, x0
0x003ca260  e0 03 18 aa     mov      x0, x24
0x003ca264  f5 7b 00 f9     str      x21, [sp, #0xf0]
0x003ca268  e1 03 15 aa     mov      x1, x21
0x003ca26c  e2 03 13 aa     mov      x2, x19
0x003ca270  7f 5e 02 94     bl       #0x461c6c
0x003ca274  e0 03 13 aa     mov      x0, x19
0x003ca278  89 5e 02 94     bl       #0x461c9c
0x003ca27c  7f 07 00 f1     cmp      x27, #1
0x003ca280  68 09 e8 d2     mov      x8, #0x404b000000000000
0x003ca284  00 01 67 9e     fmov     d0, x8
0x003ca288  28 09 e8 d2     mov      x8, #0x4049000000000000
0x003ca28c  01 01 67 9e     fmov     d1, x8
0x003ca290  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003ca294  01 90 64 1e     fmov     d1, #10.00000000
0x003ca298  02 50 64 1e     fmov     d2, #9.00000000
0x003ca29c  42 0c 61 1e     fcsel    d2, d2, d1, eq
0x003ca2a0  7f 03 00 f1     cmp      x27, #0
0x003ca2a4  28 06 00 f0     adrp     x8, #0x491000
0x003ca2a8  01 55 43 fd     ldr      d1, [x8, #0x6a8]
0x003ca2ac  28 0c 60 1e     fcsel    d8, d1, d0, eq
0x003ca2b0  00 90 63 1e     fmov     d0, #7.00000000
0x003ca2b4  e2 43 00 fd     str      d2, [sp, #0x80]
0x003ca2b8  09 0c 62 1e     fcsel    d9, d0, d2, eq
0x003ca2bc  a8 07 00 b0     adrp     x8, #0x4bf000
0x003ca2c0  01 89 40 f9     ldr      x1, [x8, #0x110]
0x003ca2c4  e0 03 18 aa     mov      x0, x24
0x003ca2c8  69 5e 02 94     bl       #0x461c6c
0x003ca2cc  fd 03 1d aa     mov      x29, x29
0x003ca2d0  7f 5e 02 94     bl       #0x461ccc
0x003ca2d4  f3 03 00 aa     mov      x19, x0
0x003ca2d8  a8 07 00 90     adrp     x8, #0x4be000
0x003ca2dc  01 01 43 f9     ldr      x1, [x8, #0x600]
0x003ca2e0  e1 87 00 f9     str      x1, [sp, #0x108]
0x003ca2e4  62 5e 02 94     bl       #0x461c6c
0x003ca2e8  f4 03 00 aa     mov      x20, x0
0x003ca2ec  e0 03 13 aa     mov      x0, x19
0x003ca2f0  6b 5e 02 94     bl       #0x461c9c
0x003ca2f4  e0 03 67 9e     fmov     d0, xzr
0x003ca2f8  9f 12 00 f1     cmp      x20, #4
0x003ca2fc  88 00 80 52     mov      w8, #4
0x003ca300  88 32 88 9a     csel     x8, x20, x8, lo
0x003ca304  01 01 63 9e     ucvtf    d1, x8
0x003ca308  e8 a7 00 fd     str      d8, [sp, #0x148]
0x003ca30c  01 09 61 1e     fmul     d1, d8, d1
0x003ca310  0b 10 60 1e     fmov     d11, #2.00000000
0x003ca314  e9 8b 00 fd     str      d9, [sp, #0x110]
0x003ca318  21 05 4b 1f     fmadd    d1, d9, d11, d1
0x003ca31c  9f 02 00 f1     cmp      x20, #0
0x003ca320  00 0c 61 1e     fcsel    d0, d0, d1, eq
0x003ca324  a0 03 11 fc     stur     d0, [x29, #-0xf0]
0x003ca328  c8 07 00 90     adrp     x8, #0x4c2000
0x003ca32c  01 69 42 f9     ldr      x1, [x8, #0x4d0]
0x003ca330  e0 03 18 aa     mov      x0, x24
0x003ca334  e1 c3 00 f9     str      x1, [sp, #0x180]
0x003ca338  4d 5e 02 94     bl       #0x461c6c
0x003ca33c  60 08 00 34     cbz      w0, #0x3ca448
0x003ca340  28 06 00 f0     adrp     x8, #0x491000
0x003ca344  00 c1 42 fd     ldr      d0, [x8, #0x580]
0x003ca348  40 21 60 1e     fcmp     d10, d0
0x003ca34c  09 4c 6a 1e     fcsel    d9, d0, d10, mi
0x003ca350  e0 03 18 aa     mov      x0, x24
0x003ca354  e1 03 1a aa     mov      x1, x26
0x003ca358  45 5e 02 94     bl       #0x461c6c
0x003ca35c  eb 5c 02 94     bl       #0x461708
0x003ca360  ad 83 51 fc     ldur     d13, [x29, #-0xe8]
0x003ca364  a0 81 4b 1f     fmsub    d0, d13, d11, d0
0x003ca368  20 21 60 1e     fcmp     d9, d0
0x003ca36c  2a 4d 60 1e     fcsel    d10, d9, d0, mi
0x003ca370  d4 07 00 d0     adrp     x20, #0x4c4000
0x003ca374  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003ca378  f5 af 40 f9     ldr      x21, [sp, #0x158]
0x003ca37c  e1 03 15 aa     mov      x1, x21
0x003ca380  3b 5e 02 94     bl       #0x461c6c
0x003ca384  fd 03 1d aa     mov      x29, x29
0x003ca388  51 5e 02 94     bl       #0x461ccc
0x003ca38c  f3 03 00 aa     mov      x19, x0
0x003ca390  f6 ab 40 f9     ldr      x22, [sp, #0x150]
0x003ca394  e1 03 16 aa     mov      x1, x22
0x003ca398  35 5e 02 94     bl       #0x461c6c
0x003ca39c  09 40 60 1e     fmov     d9, d0
0x003ca3a0  e0 03 13 aa     mov      x0, x19
0x003ca3a4  3e 5e 02 94     bl       #0x461c9c
0x003ca3a8  28 21 60 1e     fcmp     d9, #0.0
0x003ca3ac  20 8d 6b 1e     fcsel    d0, d9, d11, hi
0x003ca3b0  41 09 60 1e     fmul     d1, d10, d0
0x003ca3b4  21 40 66 1e     frinta   d1, d1
0x003ca3b8  2f 18 60 1e     fdiv     d15, d1, d0
0x003ca3bc  ac 2f 70 6d     ldp      d12, d11, [x29, #-0x100]
0x003ca3c0  80 41 60 1e     fmov     d0, d12
0x003ca3c4  61 41 60 1e     fmov     d1, d11
0x003ca3c8  e8 b7 40 fd     ldr      d8, [sp, #0x168]
0x003ca3cc  02 41 60 1e     fmov     d2, d8
0x003ca3d0  ee 8f 40 fd     ldr      d14, [sp, #0x118]
0x003ca3d4  c3 41 60 1e     fmov     d3, d14
0x003ca3d8  c6 5c 02 94     bl       #0x4616f0
0x003ca3dc  aa 29 60 1e     fadd     d10, d13, d0
0x003ca3e0  e0 03 18 aa     mov      x0, x24
0x003ca3e4  f9 73 40 f9     ldr      x25, [sp, #0xe0]
0x003ca3e8  e1 03 19 aa     mov      x1, x25
0x003ca3ec  20 5e 02 94     bl       #0x461c6c
0x003ca3f0  fd 03 1d aa     mov      x29, x29
0x003ca3f4  36 5e 02 94     bl       #0x461ccc
0x003ca3f8  f3 03 00 aa     mov      x19, x0
0x003ca3fc  e1 03 17 aa     mov      x1, x23
0x003ca400  1b 5e 02 94     bl       #0x461c6c
0x003ca404  bb 5c 02 94     bl       #0x4616f0
0x003ca408  09 40 60 1e     fmov     d9, d0
0x003ca40c  e0 03 13 aa     mov      x0, x19
0x003ca410  23 5e 02 94     bl       #0x461c9c
0x003ca414  80 41 60 1e     fmov     d0, d12
0x003ca418  61 41 60 1e     fmov     d1, d11
0x003ca41c  02 41 60 1e     fmov     d2, d8
0x003ca420  c3 41 60 1e     fmov     d3, d14
0x003ca424  ee 41 60 1e     fmov     d14, d15
0x003ca428  b2 5c 02 94     bl       #0x4616f0
0x003ca42c  e1 77 40 fd     ldr      d1, [sp, #0xe8]
0x003ca430  20 28 60 1e     fadd     d0, d1, d0
0x003ca434  00 38 6d 1e     fsub     d0, d0, d13
0x003ca438  00 38 6f 1e     fsub     d0, d0, d15
0x003ca43c  20 21 60 1e     fcmp     d9, d0
0x003ca440  20 4d 60 1e     fcsel    d0, d9, d0, mi
0x003ca444  54 00 00 14     b        #0x3ca594
0x003ca448  7f 07 00 f1     cmp      x27, #1
0x003ca44c  e8 17 9f 1a     cset     w8, eq
0x003ca450  c9 0c e8 d2     mov      x9, #0x4066000000000000
0x003ca454  20 01 67 9e     fmov     d0, x9
0x003ca458  a9 0c e8 d2     mov      x9, #0x4065000000000000
0x003ca45c  21 01 67 9e     fmov     d1, x9
0x003ca460  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003ca464  7f 03 00 f1     cmp      x27, #0
0x003ca468  29 06 00 f0     adrp     x9, #0x491000
0x003ca46c  21 c9 44 fd     ldr      d1, [x9, #0x990]
0x003ca470  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003ca474  49 06 00 90     adrp     x9, #0x492000
0x003ca478  29 41 0e 91     add      x9, x9, #0x390
0x003ca47c  21 59 68 fc     ldr      d1, [x9, w8, uxtw #3]
0x003ca480  49 06 00 90     adrp     x9, #0x492000
0x003ca484  22 b1 41 fd     ldr      d2, [x9, #0x360]
0x003ca488  49 06 00 90     adrp     x9, #0x492000
0x003ca48c  29 81 0e 91     add      x9, x9, #0x3a0
0x003ca490  41 0c 61 1e     fcsel    d1, d2, d1, eq
0x003ca494  22 59 68 fc     ldr      d2, [x9, w8, uxtw #3]
0x003ca498  28 06 00 f0     adrp     x8, #0x491000
0x003ca49c  03 7d 42 fd     ldr      d3, [x8, #0x4f8]
0x003ca4a0  62 0c 62 1e     fcsel    d2, d3, d2, eq
0x003ca4a4  ed 77 40 fd     ldr      d13, [sp, #0xe8]
0x003ca4a8  a2 09 62 1e     fmul     d2, d13, d2
0x003ca4ac  40 20 60 1e     fcmp     d2, d0
0x003ca4b0  00 4c 62 1e     fcsel    d0, d0, d2, mi
0x003ca4b4  00 20 61 1e     fcmp     d0, d1
0x003ca4b8  0a 4c 61 1e     fcsel    d10, d0, d1, mi
0x003ca4bc  d4 07 00 d0     adrp     x20, #0x4c4000
0x003ca4c0  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003ca4c4  f5 af 40 f9     ldr      x21, [sp, #0x158]
0x003ca4c8  e1 03 15 aa     mov      x1, x21
0x003ca4cc  e8 5d 02 94     bl       #0x461c6c
0x003ca4d0  fd 03 1d aa     mov      x29, x29
0x003ca4d4  fe 5d 02 94     bl       #0x461ccc
0x003ca4d8  f3 03 00 aa     mov      x19, x0
0x003ca4dc  f6 ab 40 f9     ldr      x22, [sp, #0x150]
0x003ca4e0  e1 03 16 aa     mov      x1, x22
0x003ca4e4  e2 5d 02 94     bl       #0x461c6c
0x003ca4e8  09 40 60 1e     fmov     d9, d0
0x003ca4ec  e0 03 13 aa     mov      x0, x19
0x003ca4f0  eb 5d 02 94     bl       #0x461c9c
0x003ca4f4  28 21 60 1e     fcmp     d9, #0.0
0x003ca4f8  20 8d 6b 1e     fcsel    d0, d9, d11, hi
0x003ca4fc  41 09 60 1e     fmul     d1, d10, d0
0x003ca500  21 40 66 1e     frinta   d1, d1
0x003ca504  2f 18 60 1e     fdiv     d15, d1, d0
0x003ca508  e0 03 18 aa     mov      x0, x24
0x003ca50c  e1 03 19 aa     mov      x1, x25
0x003ca510  d7 5d 02 94     bl       #0x461c6c
0x003ca514  fd 03 1d aa     mov      x29, x29
0x003ca518  ed 5d 02 94     bl       #0x461ccc
0x003ca51c  f3 03 00 aa     mov      x19, x0
0x003ca520  e1 03 17 aa     mov      x1, x23
0x003ca524  d2 5d 02 94     bl       #0x461c6c
0x003ca528  66 5c 02 94     bl       #0x4616c0
0x003ca52c  09 40 60 1e     fmov     d9, d0
0x003ca530  e0 03 13 aa     mov      x0, x19
0x003ca534  da 5d 02 94     bl       #0x461c9c
0x003ca538  ac 2f 70 6d     ldp      d12, d11, [x29, #-0x100]
0x003ca53c  80 41 60 1e     fmov     d0, d12
0x003ca540  61 41 60 1e     fmov     d1, d11
0x003ca544  e8 b7 40 fd     ldr      d8, [sp, #0x168]
0x003ca548  02 41 60 1e     fmov     d2, d8
0x003ca54c  ee 8f 40 fd     ldr      d14, [sp, #0x118]
0x003ca550  c3 41 60 1e     fmov     d3, d14
0x003ca554  67 5c 02 94     bl       #0x4616f0
0x003ca558  01 50 66 1e     fmov     d1, #18.00000000
0x003ca55c  0a 28 61 1e     fadd     d10, d0, d1
0x003ca560  80 41 60 1e     fmov     d0, d12
0x003ca564  61 41 60 1e     fmov     d1, d11
0x003ca568  02 41 60 1e     fmov     d2, d8
0x003ca56c  c3 41 60 1e     fmov     d3, d14
0x003ca570  ee 41 60 1e     fmov     d14, d15
0x003ca574  5f 5c 02 94     bl       #0x4616f0
0x003ca578  a0 29 60 1e     fadd     d0, d13, d0
0x003ca57c  01 50 76 1e     fmov     d1, #-18.00000000
0x003ca580  00 28 61 1e     fadd     d0, d0, d1
0x003ca584  00 38 6f 1e     fsub     d0, d0, d15
0x003ca588  21 39 6f 1e     fsub     d1, d9, d15
0x003ca58c  00 20 61 1e     fcmp     d0, d1
0x003ca590  00 4c 61 1e     fcsel    d0, d0, d1, mi
0x003ca594  40 21 60 1e     fcmp     d10, d0
0x003ca598  0a 4c 6a 1e     fcsel    d10, d0, d10, mi
0x003ca59c  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003ca5a0  e1 03 15 aa     mov      x1, x21
0x003ca5a4  b2 5d 02 94     bl       #0x461c6c
0x003ca5a8  fd 03 1d aa     mov      x29, x29
0x003ca5ac  c8 5d 02 94     bl       #0x461ccc
0x003ca5b0  f3 03 00 aa     mov      x19, x0
0x003ca5b4  e1 03 16 aa     mov      x1, x22
0x003ca5b8  ad 5d 02 94     bl       #0x461c6c
0x003ca5bc  09 40 60 1e     fmov     d9, d0
0x003ca5c0  e0 03 13 aa     mov      x0, x19
0x003ca5c4  b6 5d 02 94     bl       #0x461c9c
0x003ca5c8  28 21 60 1e     fcmp     d9, #0.0
0x003ca5cc  0b 10 60 1e     fmov     d11, #2.00000000
0x003ca5d0  20 8d 6b 1e     fcsel    d0, d9, d11, hi
0x003ca5d4  01 08 6a 1e     fmul     d1, d0, d10
0x003ca5d8  21 40 66 1e     frinta   d1, d1
0x003ca5dc  29 18 60 1e     fdiv     d9, d1, d0
0x003ca5e0  e0 03 18 aa     mov      x0, x24
0x003ca5e4  e1 03 19 aa     mov      x1, x25
0x003ca5e8  a1 5d 02 94     bl       #0x461c6c
0x003ca5ec  fd 03 1d aa     mov      x29, x29
0x003ca5f0  b7 5d 02 94     bl       #0x461ccc
0x003ca5f4  f3 03 00 aa     mov      x19, x0
0x003ca5f8  e1 03 17 aa     mov      x1, x23
0x003ca5fc  9c 5d 02 94     bl       #0x461c6c
0x003ca600  3f 5c 02 94     bl       #0x4616fc
0x003ca604  e1 8b 40 fd     ldr      d1, [sp, #0x110]
0x003ca608  00 38 61 1e     fsub     d0, d0, d1
0x003ca60c  a8 03 51 fc     ldur     d8, [x29, #-0xf0]
0x003ca610  0c 38 68 1e     fsub     d12, d0, d8
0x003ca614  80 96 40 f9     ldr      x0, [x20, #0x128]
0x003ca618  e1 03 15 aa     mov      x1, x21
0x003ca61c  94 5d 02 94     bl       #0x461c6c
0x003ca620  fd 03 1d aa     mov      x29, x29
0x003ca624  aa 5d 02 94     bl       #0x461ccc
0x003ca628  f4 03 00 aa     mov      x20, x0
0x003ca62c  e1 03 16 aa     mov      x1, x22
0x003ca630  8f 5d 02 94     bl       #0x461c6c
0x003ca634  0a 40 60 1e     fmov     d10, d0
0x003ca638  e0 03 14 aa     mov      x0, x20
0x003ca63c  98 5d 02 94     bl       #0x461c9c
0x003ca640  48 21 60 1e     fcmp     d10, #0.0
0x003ca644  40 8d 6b 1e     fcsel    d0, d10, d11, hi
0x003ca648  81 09 60 1e     fmul     d1, d12, d0
0x003ca64c  21 40 66 1e     frinta   d1, d1
0x003ca650  2a 18 60 1e     fdiv     d10, d1, d0
0x003ca654  e0 03 13 aa     mov      x0, x19
0x003ca658  91 5d 02 94     bl       #0x461c9c
0x003ca65c  d3 07 00 d0     adrp     x19, #0x4c4000
0x003ca660  60 16 41 f9     ldr      x0, [x19, #0x228]
0x003ca664  a8 07 00 b0     adrp     x8, #0x4bf000
0x003ca668  01 8d 41 f9     ldr      x1, [x8, #0x318]
0x003ca66c  80 5d 02 94     bl       #0x461c6c
0x003ca670  60 16 41 f9     ldr      x0, [x19, #0x228]
0x003ca674  a8 07 00 b0     adrp     x8, #0x4bf000
0x003ca678  01 91 41 f9     ldr      x1, [x8, #0x320]
0x003ca67c  22 00 80 52     mov      w2, #1
0x003ca680  7b 5d 02 94     bl       #0x461c6c
0x003ca684  a8 07 00 d0     adrp     x8, #0x4c0000
0x003ca688  17 91 42 f9     ldr      x23, [x8, #0x520]
0x003ca68c  e0 03 18 aa     mov      x0, x24
0x003ca690  e1 03 17 aa     mov      x1, x23
0x003ca694  76 5d 02 94     bl       #0x461c6c
0x003ca698  fd 03 1d aa     mov      x29, x29
0x003ca69c  8c 5d 02 94     bl       #0x461ccc
0x003ca6a0  f3 03 00 aa     mov      x19, x0
0x003ca6a4  a8 06 00 d0     adrp     x8, #0x4a0000
0x003ca6a8  08 39 42 f9     ldr      x8, [x8, #0x470]
0x003ca6ac  00 05 40 ad     ldp      q0, q1, [x8]
0x003ca6b0  a0 07 39 ad     stp      q0, q1, [x29, #-0xe0]
0x003ca6b4  00 09 c0 3d     ldr      q0, [x8, #0x20]
0x003ca6b8  a0 03 94 3c     stur     q0, [x29, #-0xc0]
0x003ca6bc  a8 07 00 90     adrp     x8, #0x4be000
0x003ca6c0  01 65 43 f9     ldr      x1, [x8, #0x6c8]
0x003ca6c4  a2 83 03 d1     sub      x2, x29, #0xe0
0x003ca6c8  69 5d 02 94     bl       #0x461c6c
0x003ca6cc  e0 03 13 aa     mov      x0, x19
0x003ca6d0  73 5d 02 94     bl       #0x461c9c
0x003ca6d4  e0 03 18 aa     mov      x0, x24
0x003ca6d8  e1 03 17 aa     mov      x1, x23
0x003ca6dc  64 5d 02 94     bl       #0x461c6c
0x003ca6e0  fd 03 1d aa     mov      x29, x29
0x003ca6e4  7a 5d 02 94     bl       #0x461ccc
0x003ca6e8  f3 03 00 aa     mov      x19, x0
0x003ca6ec  f6 3b 40 f9     ldr      x22, [sp, #0x70]
0x003ca6f0  e1 03 16 aa     mov      x1, x22
0x003ca6f4  20 41 60 1e     fmov     d0, d9
0x003ca6f8  41 41 60 1e     fmov     d1, d10
0x003ca6fc  c2 41 60 1e     fmov     d2, d14
0x003ca700  03 41 60 1e     fmov     d3, d8
0x003ca704  5a 5d 02 94     bl       #0x461c6c
0x003ca708  e0 03 13 aa     mov      x0, x19
0x003ca70c  64 5d 02 94     bl       #0x461c9c
0x003ca710  e0 03 18 aa     mov      x0, x24
0x003ca714  e1 03 17 aa     mov      x1, x23
0x003ca718  55 5d 02 94     bl       #0x461c6c
0x003ca71c  fd 03 1d aa     mov      x29, x29
0x003ca720  6b 5d 02 94     bl       #0x461ccc
0x003ca724  f3 03 00 aa     mov      x19, x0
0x003ca728  ba 83 10 f8     stur     x26, [x29, #-0xf8]
0x003ca72c  e1 03 1a aa     mov      x1, x26
0x003ca730  4f 5d 02 94     bl       #0x461c6c
0x003ca734  08 40 60 1e     fmov     d8, d0
0x003ca738  29 40 60 1e     fmov     d9, d1
0x003ca73c  4a 40 60 1e     fmov     d10, d2
0x003ca740  6c 40 60 1e     fmov     d12, d3
0x003ca744  c8 07 00 90     adrp     x8, #0x4c2000
0x003ca748  15 15 42 f9     ldr      x21, [x8, #0x428]
0x003ca74c  e0 03 18 aa     mov      x0, x24
0x003ca750  e1 03 15 aa     mov      x1, x21
0x003ca754  46 5d 02 94     bl       #0x461c6c
0x003ca758  fd 03 1d aa     mov      x29, x29
0x003ca75c  5c 5d 02 94     bl       #0x461ccc
0x003ca760  f4 03 00 aa     mov      x20, x0
0x003ca764  e1 03 16 aa     mov      x1, x22
0x003ca768  00 41 60 1e     fmov     d0, d8
0x003ca76c  21 41 60 1e     fmov     d1, d9
0x003ca770  42 41 60 1e     fmov     d2, d10
0x003ca774  83 41 60 1e     fmov     d3, d12
0x003ca778  3d 5d 02 94     bl       #0x461c6c
0x003ca77c  e0 03 14 aa     mov      x0, x20
0x003ca780  47 5d 02 94     bl       #0x461c9c
0x003ca784  e0 03 13 aa     mov      x0, x19
0x003ca788  45 5d 02 94     bl       #0x461c9c
0x003ca78c  e0 03 18 aa     mov      x0, x24
0x003ca790  e1 03 17 aa     mov      x1, x23
0x003ca794  36 5d 02 94     bl       #0x461c6c
0x003ca798  fd 03 1d aa     mov      x29, x29
0x003ca79c  4c 5d 02 94     bl       #0x461ccc
0x003ca7a0  f3 03 00 aa     mov      x19, x0
0x003ca7a4  e0 03 18 aa     mov      x0, x24
0x003ca7a8  e1 03 15 aa     mov      x1, x21
0x003ca7ac  30 5d 02 94     bl       #0x461c6c
0x003ca7b0  fd 03 1d aa     mov      x29, x29
0x003ca7b4  46 5d 02 94     bl       #0x461ccc
0x003ca7b8  f4 03 00 aa     mov      x20, x0
0x003ca7bc  a8 07 00 90     adrp     x8, #0x4be000
0x003ca7c0  01 4d 47 f9     ldr      x1, [x8, #0xe98]
0x003ca7c4  e0 03 13 aa     mov      x0, x19
0x003ca7c8  e2 03 14 aa     mov      x2, x20
0x003ca7cc  28 5d 02 94     bl       #0x461c6c
0x003ca7d0  e0 03 14 aa     mov      x0, x20
0x003ca7d4  32 5d 02 94     bl       #0x461c9c
0x003ca7d8  e0 03 13 aa     mov      x0, x19
0x003ca7dc  30 5d 02 94     bl       #0x461c9c
0x003ca7e0  d9 07 00 d0     adrp     x25, #0x4c4000
0x003ca7e4  20 4b 40 f9     ldr      x0, [x25, #0x90]
0x003ca7e8  e8 27 41 b9     ldr      w8, [sp, #0x124]
0x003ca7ec  c8 00 00 34     cbz      w8, #0x3ca804
0x003ca7f0  28 06 00 f0     adrp     x8, #0x491000
0x003ca7f4  00 49 42 fd     ldr      d0, [x8, #0x490]
0x003ca7f8  28 06 00 f0     adrp     x8, #0x491000
0x003ca7fc  01 dd 41 fd     ldr      d1, [x8, #0x3b8]
0x003ca800  04 00 00 14     b        #0x3ca810
0x003ca804  28 06 00 f0     adrp     x8, #0x491000
0x003ca808  01 f1 41 fd     ldr      d1, [x8, #0x3e0]
0x003ca80c  00 10 6e 1e     fmov     d0, #1.00000000
0x003ca810  fa bb 40 f9     ldr      x26, [sp, #0x170]
0x003ca814  e1 03 1a aa     mov      x1, x26
0x003ca818  15 5d 02 94     bl       #0x461c6c
0x003ca81c  fd 03 1d aa     mov      x29, x29
0x003ca820  2b 5d 02 94     bl       #0x461ccc
0x003ca824  f4 03 00 aa     mov      x20, x0
0x003ca828  e0 03 18 aa     mov      x0, x24
0x003ca82c  e1 03 15 aa     mov      x1, x21
0x003ca830  0f 5d 02 94     bl       #0x461c6c
0x003ca834  fd 03 1d aa     mov      x29, x29
0x003ca838  25 5d 02 94     bl       #0x461ccc
0x003ca83c  f3 03 00 aa     mov      x19, x0
0x003ca840  a8 07 00 90     adrp     x8, #0x4be000
0x003ca844  01 31 42 f9     ldr      x1, [x8, #0x460]
0x003ca848  e1 8f 00 f9     str      x1, [sp, #0x118]
0x003ca84c  e2 03 14 aa     mov      x2, x20
0x003ca850  07 5d 02 94     bl       #0x461c6c
0x003ca854  e0 03 13 aa     mov      x0, x19
0x003ca858  11 5d 02 94     bl       #0x461c9c
0x003ca85c  33 06 00 f0     adrp     x19, #0x491000
0x003ca860  e8 27 41 b9     ldr      w8, [sp, #0x124]
0x003ca864  08 01 00 36     tbz      w8, #0, #0x3ca884
0x003ca868  e0 03 14 aa     mov      x0, x20
0x003ca86c  0c 5d 02 94     bl       #0x461c9c
0x003ca870  20 4b 40 f9     ldr      x0, [x25, #0x90]
0x003ca874  60 0e 42 fd     ldr      d0, [x19, #0x418]
0x003ca878  28 06 00 f0     adrp     x8, #0x491000
0x003ca87c  01 41 42 fd     ldr      d1, [x8, #0x480]
0x003ca880  07 00 00 14     b        #0x3ca89c
0x003ca884  e0 03 14 aa     mov      x0, x20
0x003ca888  05 5d 02 94     bl       #0x461c9c
0x003ca88c  20 4b 40 f9     ldr      x0, [x25, #0x90]
0x003ca890  28 06 00 f0     adrp     x8, #0x491000
0x003ca894  01 a9 44 fd     ldr      d1, [x8, #0x950]
0x003ca898  00 10 6e 1e     fmov     d0, #1.00000000
0x003ca89c  e1 03 1a aa     mov      x1, x26
0x003ca8a0  f3 5c 02 94     bl       #0x461c6c
0x003ca8a4  fd 03 1d aa     mov      x29, x29
0x003ca8a8  09 5d 02 94     bl       #0x461ccc
0x003ca8ac  f4 03 00 aa     mov      x20, x0
0x003ca8b0  e0 03 18 aa     mov      x0, x24
0x003ca8b4  e1 03 15 aa     mov      x1, x21
0x003ca8b8  ed 5c 02 94     bl       #0x461c6c
0x003ca8bc  fd 03 1d aa     mov      x29, x29
0x003ca8c0  03 5d 02 94     bl       #0x461ccc
0x003ca8c4  f3 03 00 aa     mov      x19, x0
0x003ca8c8  a8 07 00 90     adrp     x8, #0x4be000
0x003ca8cc  01 79 45 f9     ldr      x1, [x8, #0xaf0]
0x003ca8d0  e7 5c 02 94     bl       #0x461c6c
0x003ca8d4  fd 03 1d aa     mov      x29, x29
0x003ca8d8  fd 5c 02 94     bl       #0x461ccc
0x003ca8dc  f6 03 00 aa     mov      x22, x0
0x003ca8e0  e1 8f 40 f9     ldr      x1, [sp, #0x118]
0x003ca8e4  e2 03 14 aa     mov      x2, x20
0x003ca8e8  e1 5c 02 94     bl       #0x461c6c
0x003ca8ec  e0 03 16 aa     mov      x0, x22
0x003ca8f0  eb 5c 02 94     bl       #0x461c9c
0x003ca8f4  e0 03 13 aa     mov      x0, x19
0x003ca8f8  e9 5c 02 94     bl       #0x461c9c
0x003ca8fc  e0 03 14 aa     mov      x0, x20
0x003ca900  e7 5c 02 94     bl       #0x461c9c
0x003ca904  e0 03 18 aa     mov      x0, x24
0x003ca908  e1 03 17 aa     mov      x1, x23
0x003ca90c  d8 5c 02 94     bl       #0x461c6c
0x003ca910  fd 03 1d aa     mov      x29, x29
0x003ca914  ee 5c 02 94     bl       #0x461ccc
0x003ca918  f3 03 00 aa     mov      x19, x0
0x003ca91c  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x003ca920  d3 5c 02 94     bl       #0x461c6c
0x003ca924  08 40 60 1e     fmov     d8, d0
0x003ca928  29 40 60 1e     fmov     d9, d1
0x003ca92c  4a 40 60 1e     fmov     d10, d2
0x003ca930  6c 40 60 1e     fmov     d12, d3
0x003ca934  c8 07 00 90     adrp     x8, #0x4c2000
0x003ca938  16 1d 42 f9     ldr      x22, [x8, #0x438]
0x003ca93c  e0 03 18 aa     mov      x0, x24
0x003ca940  e1 03 16 aa     mov      x1, x22
0x003ca944  ca 5c 02 94     bl       #0x461c6c
0x003ca948  fd 03 1d aa     mov      x29, x29
0x003ca94c  e0 5c 02 94     bl       #0x461ccc
0x003ca950  f4 03 00 aa     mov      x20, x0
0x003ca954  e1 3b 40 f9     ldr      x1, [sp, #0x70]
0x003ca958  00 41 60 1e     fmov     d0, d8
0x003ca95c  21 41 60 1e     fmov     d1, d9
0x003ca960  42 41 60 1e     fmov     d2, d10
0x003ca964  83 41 60 1e     fmov     d3, d12
0x003ca968  c1 5c 02 94     bl       #0x461c6c
0x003ca96c  e0 03 14 aa     mov      x0, x20
0x003ca970  cb 5c 02 94     bl       #0x461c9c
0x003ca974  e0 03 13 aa     mov      x0, x19
0x003ca978  c9 5c 02 94     bl       #0x461c9c
0x003ca97c  20 4b 40 f9     ldr      x0, [x25, #0x90]
0x003ca980  e8 27 41 b9     ldr      w8, [sp, #0x124]
0x003ca984  ee 77 00 fd     str      d14, [sp, #0xe8]
0x003ca988  b7 83 11 f8     stur     x23, [x29, #-0xe8]
0x003ca98c  e8 01 00 34     cbz      w8, #0x3ca9c8
0x003ca990  28 06 00 f0     adrp     x8, #0x491000
0x003ca994  00 d9 41 fd     ldr      d0, [x8, #0x3b0]
0x003ca998  28 06 00 f0     adrp     x8, #0x491000
0x003ca99c  01 41 42 fd     ldr      d1, [x8, #0x480]
0x003ca9a0  e1 03 1a aa     mov      x1, x26
0x003ca9a4  b2 5c 02 94     bl       #0x461c6c
0x003ca9a8  fd 03 1d aa     mov      x29, x29
0x003ca9ac  c8 5c 02 94     bl       #0x461ccc
0x003ca9b0  f4 03 00 aa     mov      x20, x0
0x003ca9b4  28 06 00 f0     adrp     x8, #0x491000
0x003ca9b8  0a 9d 42 fd     ldr      d10, [x8, #0x538]
0x003ca9bc  48 06 00 90     adrp     x8, #0x492000
0x003ca9c0  09 7d 43 bd     ldr      s9, [x8, #0x37c]
0x003ca9c4  0d 00 00 14     b        #0x3ca9f8
0x003ca9c8  28 06 00 f0     adrp     x8, #0x491000
0x003ca9cc  01 f9 41 fd     ldr      d1, [x8, #0x3f0]
0x003ca9d0  00 10 6e 1e     fmov     d0, #1.00000000
0x003ca9d4  e1 03 1a aa     mov      x1, x26
0x003ca9d8  a5 5c 02 94     bl       #0x461c6c
0x003ca9dc  fd 03 1d aa     mov      x29, x29
0x003ca9e0  bb 5c 02 94     bl       #0x461ccc
0x003ca9e4  f4 03 00 aa     mov      x20, x0
0x003ca9e8  28 06 00 f0     adrp     x8, #0x491000
0x003ca9ec  0a 91 43 fd     ldr      d10, [x8, #0x720]
0x003ca9f0  48 06 00 90     adrp     x8, #0x492000
0x003ca9f4  09 79 43 bd     ldr      s9, [x8, #0x378]
0x003ca9f8  e0 03 18 aa     mov      x0, x24
0x003ca9fc  e1 03 16 aa     mov      x1, x22
0x003caa00  9b 5c 02 94     bl       #0x461c6c
0x003caa04  fd 03 1d aa     mov      x29, x29
0x003caa08  b1 5c 02 94     bl       #0x461ccc
0x003caa0c  f3 03 00 aa     mov      x19, x0
0x003caa10  e1 8f 40 f9     ldr      x1, [sp, #0x118]
0x003caa14  e2 03 14 aa     mov      x2, x20
0x003caa18  95 5c 02 94     bl       #0x461c6c
0x003caa1c  e0 03 13 aa     mov      x0, x19
0x003caa20  9f 5c 02 94     bl       #0x461c9c
0x003caa24  e0 03 14 aa     mov      x0, x20
0x003caa28  9d 5c 02 94     bl       #0x461c9c
0x003caa2c  7f 07 00 f1     cmp      x27, #1
0x003caa30  00 50 67 1e     fmov     d0, #26.00000000
0x003caa34  01 30 67 1e     fmov     d1, #25.00000000
0x003caa38  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003caa3c  fb b7 00 f9     str      x27, [sp, #0x168]
0x003caa40  7f 03 00 f1     cmp      x27, #0
0x003caa44  0b d0 66 1e     fmov     d11, #22.00000000
0x003caa48  68 0d 60 1e     fcsel    d8, d11, d0, eq
0x003caa4c  e0 03 18 aa     mov      x0, x24
0x003caa50  e1 03 16 aa     mov      x1, x22
0x003caa54  86 5c 02 94     bl       #0x461c6c
0x003caa58  fd 03 1d aa     mov      x29, x29
0x003caa5c  9c 5c 02 94     bl       #0x461ccc
0x003caa60  f3 03 00 aa     mov      x19, x0
0x003caa64  fb 03 1c aa     mov      x27, x28
0x003caa68  e1 03 1c aa     mov      x1, x28
0x003caa6c  80 5c 02 94     bl       #0x461c6c
0x003caa70  fd 03 1d aa     mov      x29, x29
0x003caa74  96 5c 02 94     bl       #0x461ccc
0x003caa78  f4 03 00 aa     mov      x20, x0
0x003caa7c  a8 07 00 90     adrp     x8, #0x4be000
0x003caa80  19 a5 45 f9     ldr      x25, [x8, #0xb48]
0x003caa84  e1 03 19 aa     mov      x1, x25
0x003caa88  00 41 60 1e     fmov     d0, d8
0x003caa8c  78 5c 02 94     bl       #0x461c6c
0x003caa90  e0 03 14 aa     mov      x0, x20
0x003caa94  82 5c 02 94     bl       #0x461c9c
0x003caa98  e0 03 13 aa     mov      x0, x19
0x003caa9c  80 5c 02 94     bl       #0x461c9c
0x003caaa0  e0 03 18 aa     mov      x0, x24
0x003caaa4  e1 03 16 aa     mov      x1, x22
0x003caaa8  71 5c 02 94     bl       #0x461c6c
0x003caaac  fd 03 1d aa     mov      x29, x29
0x003caab0  87 5c 02 94     bl       #0x461ccc
0x003caab4  f3 03 00 aa     mov      x19, x0
0x003caab8  e1 03 1c aa     mov      x1, x28
0x003caabc  6c 5c 02 94     bl       #0x461c6c
0x003caac0  fd 03 1d aa     mov      x29, x29
0x003caac4  82 5c 02 94     bl       #0x461ccc
0x003caac8  f4 03 00 aa     mov      x20, x0
0x003caacc  f7 b3 40 f9     ldr      x23, [sp, #0x160]
0x003caad0  e1 03 17 aa     mov      x1, x23
0x003caad4  22 00 80 52     mov      w2, #1
0x003caad8  65 5c 02 94     bl       #0x461c6c
0x003caadc  e0 03 14 aa     mov      x0, x20
0x003caae0  6f 5c 02 94     bl       #0x461c9c
0x003caae4  e0 03 13 aa     mov      x0, x19
0x003caae8  6d 5c 02 94     bl       #0x461c9c
0x003caaec  e0 03 18 aa     mov      x0, x24
0x003caaf0  e1 03 15 aa     mov      x1, x21
0x003caaf4  5e 5c 02 94     bl       #0x461c6c
0x003caaf8  fd 03 1d aa     mov      x29, x29
0x003caafc  74 5c 02 94     bl       #0x461ccc
0x003cab00  f3 03 00 aa     mov      x19, x0
0x003cab04  e1 03 1c aa     mov      x1, x28
0x003cab08  59 5c 02 94     bl       #0x461c6c
0x003cab0c  fd 03 1d aa     mov      x29, x29
0x003cab10  6f 5c 02 94     bl       #0x461ccc
0x003cab14  f4 03 00 aa     mov      x20, x0
0x003cab18  b9 03 10 f8     stur     x25, [x29, #-0x100]
0x003cab1c  e1 03 19 aa     mov      x1, x25
0x003cab20  00 41 60 1e     fmov     d0, d8
0x003cab24  52 5c 02 94     bl       #0x461c6c
0x003cab28  e0 03 14 aa     mov      x0, x20
0x003cab2c  5c 5c 02 94     bl       #0x461c9c
0x003cab30  e0 03 13 aa     mov      x0, x19
0x003cab34  5a 5c 02 94     bl       #0x461c9c
0x003cab38  e0 03 18 aa     mov      x0, x24
0x003cab3c  e1 03 15 aa     mov      x1, x21
0x003cab40  4b 5c 02 94     bl       #0x461c6c
0x003cab44  fd 03 1d aa     mov      x29, x29
0x003cab48  61 5c 02 94     bl       #0x461ccc
0x003cab4c  f3 03 00 aa     mov      x19, x0
0x003cab50  e1 03 1c aa     mov      x1, x28
0x003cab54  46 5c 02 94     bl       #0x461c6c
0x003cab58  fd 03 1d aa     mov      x29, x29
0x003cab5c  5c 5c 02 94     bl       #0x461ccc
0x003cab60  f4 03 00 aa     mov      x20, x0
0x003cab64  e1 03 17 aa     mov      x1, x23
0x003cab68  22 00 80 52     mov      w2, #1
0x003cab6c  40 5c 02 94     bl       #0x461c6c
0x003cab70  e0 03 14 aa     mov      x0, x20
0x003cab74  4a 5c 02 94     bl       #0x461c9c
0x003cab78  e0 03 13 aa     mov      x0, x19
0x003cab7c  48 5c 02 94     bl       #0x461c9c
0x003cab80  e0 03 18 aa     mov      x0, x24
0x003cab84  e1 03 15 aa     mov      x1, x21
0x003cab88  39 5c 02 94     bl       #0x461c6c
0x003cab8c  fd 03 1d aa     mov      x29, x29
0x003cab90  4f 5c 02 94     bl       #0x461ccc
0x003cab94  f3 03 00 aa     mov      x19, x0
0x003cab98  e1 bf 40 f9     ldr      x1, [sp, #0x178]
0x003cab9c  22 00 80 52     mov      w2, #1
0x003caba0  33 5c 02 94     bl       #0x461c6c
0x003caba4  e0 03 13 aa     mov      x0, x19
0x003caba8  3d 5c 02 94     bl       #0x461c9c
0x003cabac  e0 03 18 aa     mov      x0, x24
0x003cabb0  e1 03 15 aa     mov      x1, x21
0x003cabb4  2e 5c 02 94     bl       #0x461c6c
0x003cabb8  fd 03 1d aa     mov      x29, x29
0x003cabbc  44 5c 02 94     bl       #0x461ccc
0x003cabc0  f3 03 00 aa     mov      x19, x0
0x003cabc4  e1 03 1c aa     mov      x1, x28
0x003cabc8  29 5c 02 94     bl       #0x461c6c
0x003cabcc  fd 03 1d aa     mov      x29, x29
0x003cabd0  3f 5c 02 94     bl       #0x461ccc
0x003cabd4  f4 03 00 aa     mov      x20, x0
0x003cabd8  a8 07 00 90     adrp     x8, #0x4be000
0x003cabdc  01 89 45 f9     ldr      x1, [x8, #0xb10]
0x003cabe0  48 06 00 90     adrp     x8, #0x492000
0x003cabe4  00 b5 41 fd     ldr      d0, [x8, #0x368]
0x003cabe8  21 5c 02 94     bl       #0x461c6c
0x003cabec  e0 03 14 aa     mov      x0, x20
0x003cabf0  2b 5c 02 94     bl       #0x461c9c
0x003cabf4  e0 03 13 aa     mov      x0, x19
0x003cabf8  29 5c 02 94     bl       #0x461c9c
0x003cabfc  d9 07 00 d0     adrp     x25, #0x4c4000
0x003cac00  20 4b 40 f9     ldr      x0, [x25, #0x90]
0x003cac04  00 10 6e 1e     fmov     d0, #1.00000000
0x003cac08  e1 03 1a aa     mov      x1, x26
0x003cac0c  41 41 60 1e     fmov     d1, d10
0x003cac10  17 5c 02 94     bl       #0x461c6c
0x003cac14  fd 03 1d aa     mov      x29, x29
0x003cac18  2d 5c 02 94     bl       #0x461ccc
0x003cac1c  f3 03 00 aa     mov      x19, x0
0x003cac20  25 5c 02 94     bl       #0x461cb4
0x003cac24  a8 07 00 90     adrp     x8, #0x4be000
0x003cac28  14 61 45 f9     ldr      x20, [x8, #0xac0]
0x003cac2c  e1 03 14 aa     mov      x1, x20
0x003cac30  0f 5c 02 94     bl       #0x461c6c
0x003cac34  f7 03 00 aa     mov      x23, x0
0x003cac38  e0 03 18 aa     mov      x0, x24
0x003cac3c  e1 03 15 aa     mov      x1, x21
0x003cac40  0b 5c 02 94     bl       #0x461c6c
0x003cac44  fd 03 1d aa     mov      x29, x29
0x003cac48  21 5c 02 94     bl       #0x461ccc
0x003cac4c  b8 03 11 f8     stur     x24, [x29, #-0xf0]
0x003cac50  f8 03 00 aa     mov      x24, x0
0x003cac54  e1 03 1c aa     mov      x1, x28
0x003cac58  05 5c 02 94     bl       #0x461c6c
0x003cac5c  fd 03 1d aa     mov      x29, x29
0x003cac60  1b 5c 02 94     bl       #0x461ccc
0x003cac64  fa 03 19 aa     mov      x26, x25
0x003cac68  f9 03 00 aa     mov      x25, x0
0x003cac6c  a8 07 00 90     adrp     x8, #0x4be000
0x003cac70  01 8d 45 f9     ldr      x1, [x8, #0xb18]
0x003cac74  e2 03 17 aa     mov      x2, x23
0x003cac78  fd 5b 02 94     bl       #0x461c6c
0x003cac7c  e0 03 19 aa     mov      x0, x25
0x003cac80  07 5c 02 94     bl       #0x461c9c
0x003cac84  e0 03 18 aa     mov      x0, x24
0x003cac88  05 5c 02 94     bl       #0x461c9c
0x003cac8c  e0 03 13 aa     mov      x0, x19
0x003cac90  03 5c 02 94     bl       #0x461c9c
0x003cac94  40 4b 40 f9     ldr      x0, [x26, #0x90]
0x003cac98  a8 07 00 90     adrp     x8, #0x4be000
0x003cac9c  01 29 42 f9     ldr      x1, [x8, #0x450]
0x003caca0  f3 5b 02 94     bl       #0x461c6c
0x003caca4  fd 03 1d aa     mov      x29, x29
0x003caca8  09 5c 02 94     bl       #0x461ccc
0x003cacac  f3 03 00 aa     mov      x19, x0
0x003cacb0  01 5c 02 94     bl       #0x461cb4
0x003cacb4  e1 03 14 aa     mov      x1, x20
0x003cacb8  ed 5b 02 94     bl       #0x461c6c
0x003cacbc  f4 03 00 aa     mov      x20, x0
0x003cacc0  a0 73 71 a9     ldp      x0, x28, [x29, #-0xf0]
0x003cacc4  e1 03 1c aa     mov      x1, x28
0x003cacc8  e9 5b 02 94     bl       #0x461c6c
0x003caccc  fd 03 1d aa     mov      x29, x29
0x003cacd0  ff 5b 02 94     bl       #0x461ccc
0x003cacd4  f7 03 00 aa     mov      x23, x0
0x003cacd8  e1 03 1b aa     mov      x1, x27
0x003cacdc  e4 5b 02 94     bl       #0x461c6c
0x003cace0  fd 03 1d aa     mov      x29, x29
0x003cace4  fa 5b 02 94     bl       #0x461ccc
0x003cace8  f8 03 00 aa     mov      x24, x0
0x003cacec  a8 07 00 90     adrp     x8, #0x4be000
0x003cacf0  01 e1 45 f9     ldr      x1, [x8, #0xbc0]
0x003cacf4  e2 03 14 aa     mov      x2, x20
0x003cacf8  dd 5b 02 94     bl       #0x461c6c
0x003cacfc  e0 03 18 aa     mov      x0, x24
0x003cad00  e7 5b 02 94     bl       #0x461c9c
0x003cad04  e0 03 17 aa     mov      x0, x23
0x003cad08  e5 5b 02 94     bl       #0x461c9c
0x003cad0c  e0 03 13 aa     mov      x0, x19
0x003cad10  e3 5b 02 94     bl       #0x461c9c
0x003cad14  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cad18  e1 03 1c aa     mov      x1, x28
0x003cad1c  d4 5b 02 94     bl       #0x461c6c
0x003cad20  fd 03 1d aa     mov      x29, x29
0x003cad24  ea 5b 02 94     bl       #0x461ccc
0x003cad28  f3 03 00 aa     mov      x19, x0
0x003cad2c  e1 03 1b aa     mov      x1, x27
0x003cad30  cf 5b 02 94     bl       #0x461c6c
0x003cad34  fd 03 1d aa     mov      x29, x29
0x003cad38  e5 5b 02 94     bl       #0x461ccc
0x003cad3c  f4 03 00 aa     mov      x20, x0
0x003cad40  a8 07 00 90     adrp     x8, #0x4be000
0x003cad44  01 85 45 f9     ldr      x1, [x8, #0xb08]
0x003cad48  20 41 20 1e     fmov     s0, s9
0x003cad4c  c8 5b 02 94     bl       #0x461c6c
0x003cad50  e0 03 14 aa     mov      x0, x20
0x003cad54  d2 5b 02 94     bl       #0x461c9c
0x003cad58  e0 03 13 aa     mov      x0, x19
0x003cad5c  d0 5b 02 94     bl       #0x461c9c
0x003cad60  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cad64  e1 03 1c aa     mov      x1, x28
0x003cad68  c1 5b 02 94     bl       #0x461c6c
0x003cad6c  fd 03 1d aa     mov      x29, x29
0x003cad70  d7 5b 02 94     bl       #0x461ccc
0x003cad74  f3 03 00 aa     mov      x19, x0
0x003cad78  e1 03 1b aa     mov      x1, x27
0x003cad7c  bc 5b 02 94     bl       #0x461c6c
0x003cad80  fd 03 1d aa     mov      x29, x29
0x003cad84  d2 5b 02 94     bl       #0x461ccc
0x003cad88  f4 03 00 aa     mov      x20, x0
0x003cad8c  a8 07 00 90     adrp     x8, #0x4be000
0x003cad90  01 e5 45 f9     ldr      x1, [x8, #0xbc8]
0x003cad94  00 90 67 1e     fmov     d0, #28.00000000
0x003cad98  b5 5b 02 94     bl       #0x461c6c
0x003cad9c  e0 03 14 aa     mov      x0, x20
0x003cada0  bf 5b 02 94     bl       #0x461c9c
0x003cada4  e0 03 13 aa     mov      x0, x19
0x003cada8  bd 5b 02 94     bl       #0x461c9c
0x003cadac  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cadb0  e1 03 1c aa     mov      x1, x28
0x003cadb4  ae 5b 02 94     bl       #0x461c6c
0x003cadb8  fd 03 1d aa     mov      x29, x29
0x003cadbc  c4 5b 02 94     bl       #0x461ccc
0x003cadc0  f3 03 00 aa     mov      x19, x0
0x003cadc4  e1 03 1b aa     mov      x1, x27
0x003cadc8  a9 5b 02 94     bl       #0x461c6c
0x003cadcc  fd 03 1d aa     mov      x29, x29
0x003cadd0  bf 5b 02 94     bl       #0x461ccc
0x003cadd4  f4 03 00 aa     mov      x20, x0
0x003cadd8  a8 07 00 90     adrp     x8, #0x4be000
0x003caddc  01 e9 45 f9     ldr      x1, [x8, #0xbd0]
0x003cade0  09 10 65 1e     fmov     d9, #12.00000000
0x003cade4  e0 03 67 9e     fmov     d0, xzr
0x003cade8  01 10 65 1e     fmov     d1, #12.00000000
0x003cadec  a0 5b 02 94     bl       #0x461c6c
0x003cadf0  e0 03 14 aa     mov      x0, x20
0x003cadf4  aa 5b 02 94     bl       #0x461c9c
0x003cadf8  e0 03 13 aa     mov      x0, x19
0x003cadfc  a8 5b 02 94     bl       #0x461c9c
0x003cae00  c8 07 00 d0     adrp     x8, #0x4c4000
0x003cae04  13 6d 40 f9     ldr      x19, [x8, #0xd8]
0x003cae08  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cae0c  e1 03 1c aa     mov      x1, x28
0x003cae10  97 5b 02 94     bl       #0x461c6c
0x003cae14  fd 03 1d aa     mov      x29, x29
0x003cae18  ad 5b 02 94     bl       #0x461ccc
0x003cae1c  f4 03 00 aa     mov      x20, x0
0x003cae20  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x003cae24  92 5b 02 94     bl       #0x461c6c
0x003cae28  a8 07 00 90     adrp     x8, #0x4be000
0x003cae2c  01 ed 45 f9     ldr      x1, [x8, #0xbd8]
0x003cae30  e0 03 13 aa     mov      x0, x19
0x003cae34  04 41 60 1e     fmov     d4, d8
0x003cae38  8d 5b 02 94     bl       #0x461c6c
0x003cae3c  fd 03 1d aa     mov      x29, x29
0x003cae40  a3 5b 02 94     bl       #0x461ccc
0x003cae44  f3 03 00 aa     mov      x19, x0
0x003cae48  9b 5b 02 94     bl       #0x461cb4
0x003cae4c  a8 07 00 90     adrp     x8, #0x4be000
0x003cae50  01 f1 45 f9     ldr      x1, [x8, #0xbe0]
0x003cae54  86 5b 02 94     bl       #0x461c6c
0x003cae58  f7 03 00 aa     mov      x23, x0
0x003cae5c  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cae60  e1 03 1c aa     mov      x1, x28
0x003cae64  82 5b 02 94     bl       #0x461c6c
0x003cae68  fd 03 1d aa     mov      x29, x29
0x003cae6c  98 5b 02 94     bl       #0x461ccc
0x003cae70  f8 03 00 aa     mov      x24, x0
0x003cae74  e1 03 1b aa     mov      x1, x27
0x003cae78  7d 5b 02 94     bl       #0x461c6c
0x003cae7c  fd 03 1d aa     mov      x29, x29
0x003cae80  93 5b 02 94     bl       #0x461ccc
0x003cae84  f9 03 00 aa     mov      x25, x0
0x003cae88  a8 07 00 90     adrp     x8, #0x4be000
0x003cae8c  01 f5 45 f9     ldr      x1, [x8, #0xbe8]
0x003cae90  e2 03 17 aa     mov      x2, x23
0x003cae94  76 5b 02 94     bl       #0x461c6c
0x003cae98  e0 03 19 aa     mov      x0, x25
0x003cae9c  80 5b 02 94     bl       #0x461c9c
0x003caea0  e0 03 18 aa     mov      x0, x24
0x003caea4  b8 03 51 f8     ldur     x24, [x29, #-0xf0]
0x003caea8  7d 5b 02 94     bl       #0x461c9c
0x003caeac  e0 03 13 aa     mov      x0, x19
0x003caeb0  7b 5b 02 94     bl       #0x461c9c
0x003caeb4  e0 03 14 aa     mov      x0, x20
0x003caeb8  79 5b 02 94     bl       #0x461c9c
0x003caebc  a8 06 00 d0     adrp     x8, #0x4a0000
0x003caec0  08 15 43 f9     ldr      x8, [x8, #0x628]
0x003caec4  17 01 40 f9     ldr      x23, [x8]
0x003caec8  e0 03 18 aa     mov      x0, x24
0x003caecc  e1 03 15 aa     mov      x1, x21
0x003caed0  67 5b 02 94     bl       #0x461c6c
0x003caed4  fd 03 1d aa     mov      x29, x29
0x003caed8  7d 5b 02 94     bl       #0x461ccc
0x003caedc  f3 03 00 aa     mov      x19, x0
0x003caee0  e1 03 1b aa     mov      x1, x27
0x003caee4  62 5b 02 94     bl       #0x461c6c
0x003caee8  fd 03 1d aa     mov      x29, x29
0x003caeec  78 5b 02 94     bl       #0x461ccc
0x003caef0  f4 03 00 aa     mov      x20, x0
0x003caef4  a8 07 00 90     adrp     x8, #0x4be000
0x003caef8  15 a9 45 f9     ldr      x21, [x8, #0xb50]
0x003caefc  e1 03 15 aa     mov      x1, x21
0x003caf00  e2 03 17 aa     mov      x2, x23
0x003caf04  5a 5b 02 94     bl       #0x461c6c
0x003caf08  e0 03 14 aa     mov      x0, x20
0x003caf0c  64 5b 02 94     bl       #0x461c9c
0x003caf10  e0 03 13 aa     mov      x0, x19
0x003caf14  62 5b 02 94     bl       #0x461c9c
0x003caf18  e0 03 18 aa     mov      x0, x24
0x003caf1c  e1 03 16 aa     mov      x1, x22
0x003caf20  53 5b 02 94     bl       #0x461c6c
0x003caf24  fd 03 1d aa     mov      x29, x29
0x003caf28  69 5b 02 94     bl       #0x461ccc
0x003caf2c  f3 03 00 aa     mov      x19, x0
0x003caf30  e1 03 1b aa     mov      x1, x27
0x003caf34  4e 5b 02 94     bl       #0x461c6c
0x003caf38  fd 03 1d aa     mov      x29, x29
0x003caf3c  64 5b 02 94     bl       #0x461ccc
0x003caf40  f4 03 00 aa     mov      x20, x0
0x003caf44  e1 03 15 aa     mov      x1, x21
0x003caf48  e2 03 17 aa     mov      x2, x23
0x003caf4c  48 5b 02 94     bl       #0x461c6c
0x003caf50  e0 03 14 aa     mov      x0, x20
0x003caf54  52 5b 02 94     bl       #0x461c9c
0x003caf58  e0 03 13 aa     mov      x0, x19
0x003caf5c  50 5b 02 94     bl       #0x461c9c
0x003caf60  e0 03 18 aa     mov      x0, x24
0x003caf64  e1 03 1c aa     mov      x1, x28
0x003caf68  41 5b 02 94     bl       #0x461c6c
0x003caf6c  fd 03 1d aa     mov      x29, x29
0x003caf70  57 5b 02 94     bl       #0x461ccc
0x003caf74  f3 03 00 aa     mov      x19, x0
0x003caf78  e1 03 1b aa     mov      x1, x27
0x003caf7c  3c 5b 02 94     bl       #0x461c6c
0x003caf80  fd 03 1d aa     mov      x29, x29
0x003caf84  52 5b 02 94     bl       #0x461ccc
0x003caf88  f4 03 00 aa     mov      x20, x0
0x003caf8c  f5 df 0d a9     stp      x21, x23, [sp, #0xd8]
0x003caf90  e1 03 15 aa     mov      x1, x21
0x003caf94  e2 03 17 aa     mov      x2, x23
0x003caf98  35 5b 02 94     bl       #0x461c6c
0x003caf9c  e0 03 14 aa     mov      x0, x20
0x003cafa0  3f 5b 02 94     bl       #0x461c9c
0x003cafa4  e0 03 13 aa     mov      x0, x19
0x003cafa8  3d 5b 02 94     bl       #0x461c9c
0x003cafac  c8 07 00 d0     adrp     x8, #0x4c4000
0x003cafb0  00 15 41 f9     ldr      x0, [x8, #0x228]
0x003cafb4  a8 07 00 b0     adrp     x8, #0x4bf000
0x003cafb8  01 95 41 f9     ldr      x1, [x8, #0x328]
0x003cafbc  2c 5b 02 94     bl       #0x461c6c
0x003cafc0  c8 07 00 90     adrp     x8, #0x4c2000
0x003cafc4  15 31 42 f9     ldr      x21, [x8, #0x460]
0x003cafc8  e0 03 18 aa     mov      x0, x24
0x003cafcc  e1 03 15 aa     mov      x1, x21
0x003cafd0  27 5b 02 94     bl       #0x461c6c
0x003cafd4  fd 03 1d aa     mov      x29, x29
0x003cafd8  3d 5b 02 94     bl       #0x461ccc
0x003cafdc  f3 03 00 aa     mov      x19, x0
0x003cafe0  e1 87 40 f9     ldr      x1, [sp, #0x108]
0x003cafe4  22 5b 02 94     bl       #0x461c6c
0x003cafe8  f4 03 00 aa     mov      x20, x0
0x003cafec  e0 03 13 aa     mov      x0, x19
0x003caff0  2b 5b 02 94     bl       #0x461c9c
0x003caff4  f7 3b 40 f9     ldr      x23, [sp, #0x70]
0x003caff8  ea a7 40 fd     ldr      d10, [sp, #0x148]
0x003caffc  94 43 00 b4     cbz      x20, #0x3cb86c
0x003cb000  16 00 80 d2     mov      x22, #0
0x003cb004  88 07 00 f0     adrp     x8, #0x4be000
0x003cb008  08 05 43 f9     ldr      x8, [x8, #0x608]
0x003cb00c  e8 67 00 f9     str      x8, [sp, #0xc8]
0x003cb010  e9 b7 40 f9     ldr      x9, [sp, #0x168]
0x003cb014  3f 05 00 f1     cmp      x9, #1
0x003cb018  00 90 62 1e     fmov     d0, #5.00000000
0x003cb01c  01 50 62 1e     fmov     d1, #4.50000000
0x003cb020  20 0c 60 1e     fcsel    d0, d1, d0, eq
0x003cb024  01 10 67 1e     fmov     d1, #24.00000000
0x003cb028  61 0d 61 1e     fcsel    d1, d11, d1, eq
0x003cb02c  02 90 66 1e     fmov     d2, #20.00000000
0x003cb030  43 0c 6b 1e     fcsel    d3, d2, d11, eq
0x003cb034  04 d0 65 1e     fmov     d4, #15.00000000
0x003cb038  05 90 65 1e     fmov     d5, #14.00000000
0x003cb03c  a4 0c 64 1e     fcsel    d4, d5, d4, eq
0x003cb040  e8 09 e8 d2     mov      x8, #0x404f000000000000
0x003cb044  06 01 67 9e     fmov     d6, x8
0x003cb048  a8 09 e8 d2     mov      x8, #0x404d000000000000
0x003cb04c  07 01 67 9e     fmov     d7, x8
0x003cb050  e6 0c 66 1e     fcsel    d6, d7, d6, eq
0x003cb054  28 09 e8 d2     mov      x8, #0x4049000000000000
0x003cb058  07 01 67 9e     fmov     d7, x8
0x003cb05c  28 06 00 f0     adrp     x8, #0x492000
0x003cb060  10 b9 41 fd     ldr      d16, [x8, #0x370]
0x003cb064  07 0e 67 1e     fcsel    d7, d16, d7, eq
0x003cb068  10 70 66 1e     fmov     d16, #19.00000000
0x003cb06c  11 50 66 1e     fmov     d17, #18.00000000
0x003cb070  30 0e 70 1e     fcsel    d16, d17, d16, eq
0x003cb074  12 30 66 1e     fmov     d18, #17.00000000
0x003cb078  13 10 66 1e     fmov     d19, #16.00000000
0x003cb07c  74 0e 72 1e     fcsel    d20, d19, d18, eq
0x003cb080  35 0e 62 1e     fcsel    d21, d17, d2, eq
0x003cb084  16 30 64 1e     fmov     d22, #8.50000000
0x003cb088  19 10 64 1e     fmov     d25, #8.00000000
0x003cb08c  36 0f 76 1e     fcsel    d22, d25, d22, eq
0x003cb090  3f 01 00 f1     cmp      x9, #0
0x003cb094  17 90 64 1e     fmov     d23, #10.00000000
0x003cb098  f8 63 40 fd     ldr      d24, [sp, #0xc0]
0x003cb09c  eb 0e 78 1e     fcsel    d11, d23, d24, eq
0x003cb0a0  17 90 61 1e     fmov     d23, #3.50000000
0x003cb0a4  ee 0e 60 1e     fcsel    d14, d23, d0, eq
0x003cb0a8  4c 0c 61 1e     fcsel    d12, d2, d1, eq
0x003cb0ac  21 0e 63 1e     fcsel    d1, d17, d3, eq
0x003cb0b0  20 0d 64 1e     fcsel    d0, d9, d4, eq
0x003cb0b4  e0 87 0b 6d     stp      d0, d1, [sp, #0xb8]
0x003cb0b8  48 09 e8 d2     mov      x8, #0x404a000000000000
0x003cb0bc  00 01 67 9e     fmov     d0, x8
0x003cb0c0  01 0c 66 1e     fcsel    d1, d0, d6, eq
0x003cb0c4  a8 08 e8 d2     mov      x8, #0x4045000000000000
0x003cb0c8  00 01 67 9e     fmov     d0, x8
0x003cb0cc  00 0c 67 1e     fcsel    d0, d0, d7, eq
0x003cb0d0  e0 87 0a 6d     stp      d0, d1, [sp, #0xa8]
0x003cb0d4  40 0e 70 1e     fcsel    d0, d18, d16, eq
0x003cb0d8  e0 53 00 fd     str      d0, [sp, #0xa0]
0x003cb0dc  a8 07 00 90     adrp     x8, #0x4bf000
0x003cb0e0  09 15 46 f9     ldr      x9, [x8, #0xc28]
0x003cb0e4  a8 0c 74 1e     fcsel    d8, d5, d20, eq
0x003cb0e8  88 07 00 f0     adrp     x8, #0x4be000
0x003cb0ec  08 f9 45 f9     ldr      x8, [x8, #0xbf0]
0x003cb0f0  e8 27 09 a9     stp      x8, x9, [sp, #0x90]
0x003cb0f4  40 39 6c 1e     fsub     d0, d10, d12
0x003cb0f8  01 10 6c 1e     fmov     d1, #0.50000000
0x003cb0fc  0d 08 61 1e     fmul     d13, d0, d1
0x003cb100  61 0e 75 1e     fcsel    d1, d19, d21, eq
0x003cb104  e0 43 40 fd     ldr      d0, [sp, #0x80]
0x003cb108  20 0f 60 1e     fcsel    d0, d25, d0, eq
0x003cb10c  e0 07 05 6d     stp      d0, d1, [sp, #0x50]
0x003cb110  88 07 00 f0     adrp     x8, #0x4be000
0x003cb114  09 d1 43 f9     ldr      x9, [x8, #0x7a0]
0x003cb118  a8 07 00 f0     adrp     x8, #0x4c2000
0x003cb11c  08 65 42 f9     ldr      x8, [x8, #0x4c8]
0x003cb120  e8 27 04 a9     stp      x8, x9, [sp, #0x40]
0x003cb124  00 d0 63 1e     fmov     d0, #7.50000000
0x003cb128  00 0c 76 1e     fcsel    d0, d0, d22, eq
0x003cb12c  e0 1f 00 fd     str      d0, [sp, #0x38]
0x003cb130  00 40 61 1e     fneg     d0, d0
0x003cb134  e0 1b 00 fd     str      d0, [sp, #0x30]
0x003cb138  a8 06 00 b0     adrp     x8, #0x4a0000
0x003cb13c  08 11 43 f9     ldr      x8, [x8, #0x620]
0x003cb140  08 01 40 f9     ldr      x8, [x8]
0x003cb144  e8 43 00 f9     str      x8, [sp, #0x80]
0x003cb148  28 06 00 d0     adrp     x8, #0x491000
0x003cb14c  00 0d 42 fd     ldr      d0, [x8, #0x418]
0x003cb150  e0 13 00 fd     str      d0, [sp, #0x20]
0x003cb154  28 06 00 d0     adrp     x8, #0x491000
0x003cb158  00 21 42 fd     ldr      d0, [x8, #0x440]
0x003cb15c  e0 0f 00 fd     str      d0, [sp, #0x18]
0x003cb160  fb 97 00 f9     str      x27, [sp, #0x128]
0x003cb164  f5 6b 00 f9     str      x21, [sp, #0xd0]
0x003cb168  eb 33 00 fd     str      d11, [sp, #0x60]
0x003cb16c  e8 47 00 fd     str      d8, [sp, #0x88]
0x003cb170  ec 17 00 fd     str      d12, [sp, #0x28]
0x003cb174  e0 03 18 aa     mov      x0, x24
0x003cb178  e1 03 15 aa     mov      x1, x21
0x003cb17c  bc 5a 02 94     bl       #0x461c6c
0x003cb180  fd 03 1d aa     mov      x29, x29
0x003cb184  d2 5a 02 94     bl       #0x461ccc
0x003cb188  f3 03 00 aa     mov      x19, x0
0x003cb18c  e1 67 40 f9     ldr      x1, [sp, #0xc8]
0x003cb190  e2 03 16 aa     mov      x2, x22
0x003cb194  b6 5a 02 94     bl       #0x461c6c
0x003cb198  fd 03 1d aa     mov      x29, x29
0x003cb19c  cc 5a 02 94     bl       #0x461ccc
0x003cb1a0  f9 03 00 aa     mov      x25, x0
0x003cb1a4  e0 03 13 aa     mov      x0, x19
0x003cb1a8  bd 5a 02 94     bl       #0x461c9c
0x003cb1ac  e0 03 18 aa     mov      x0, x24
0x003cb1b0  f3 c3 40 f9     ldr      x19, [sp, #0x180]
0x003cb1b4  e1 03 13 aa     mov      x1, x19
0x003cb1b8  ad 5a 02 94     bl       #0x461c6c
0x003cb1bc  1f 00 00 71     cmp      w0, #0
0x003cb1c0  e0 83 40 fd     ldr      d0, [sp, #0x100]
0x003cb1c4  69 1d 60 1e     fcsel    d9, d11, d0, ne
0x003cb1c8  e0 03 18 aa     mov      x0, x24
0x003cb1cc  e1 03 13 aa     mov      x1, x19
0x003cb1d0  a7 5a 02 94     bl       #0x461c6c
0x003cb1d4  1f 00 00 71     cmp      w0, #0
0x003cb1d8  e1 83 4b 6d     ldp      d1, d0, [sp, #0xb8]
0x003cb1dc  0f 1c 61 1e     fcsel    d15, d0, d1, ne
0x003cb1e0  e0 03 18 aa     mov      x0, x24
0x003cb1e4  e1 03 13 aa     mov      x1, x19
0x003cb1e8  a1 5a 02 94     bl       #0x461c6c
0x003cb1ec  1f 00 00 71     cmp      w0, #0
0x003cb1f0  e1 83 4a 6d     ldp      d1, d0, [sp, #0xa8]
0x003cb1f4  00 1c 61 1e     fcsel    d0, d0, d1, ne
0x003cb1f8  e0 b7 00 fd     str      d0, [sp, #0x168]
0x003cb1fc  f6 bb 00 f9     str      x22, [sp, #0x170]
0x003cb200  c0 02 63 9e     ucvtf    d0, x22
0x003cb204  e1 8b 40 fd     ldr      d1, [sp, #0x110]
0x003cb208  01 04 4a 1f     fmadd    d1, d0, d10, d1
0x003cb20c  e0 77 40 fd     ldr      d0, [sp, #0xe8]
0x003cb210  02 10 60 1e     fmov     d2, #2.00000000
0x003cb214  22 81 42 1f     fmsub    d2, d9, d2, d0
0x003cb218  e0 03 19 aa     mov      x0, x25
0x003cb21c  e1 03 17 aa     mov      x1, x23
0x003cb220  20 41 60 1e     fmov     d0, d9
0x003cb224  43 41 60 1e     fmov     d3, d10
0x003cb228  91 5a 02 94     bl       #0x461c6c
0x003cb22c  e0 03 19 aa     mov      x0, x25
0x003cb230  f3 4f 40 f9     ldr      x19, [sp, #0x98]
0x003cb234  e1 03 13 aa     mov      x1, x19
0x003cb238  22 7d 80 52     mov      w2, #0x3e9
0x003cb23c  8c 5a 02 94     bl       #0x461c6c
0x003cb240  fd 03 1d aa     mov      x29, x29
0x003cb244  a2 5a 02 94     bl       #0x461ccc
0x003cb248  f8 03 00 aa     mov      x24, x0
0x003cb24c  e0 03 19 aa     mov      x0, x25
0x003cb250  e1 03 13 aa     mov      x1, x19
0x003cb254  42 7d 80 52     mov      w2, #0x3ea
0x003cb258  85 5a 02 94     bl       #0x461c6c
0x003cb25c  fd 03 1d aa     mov      x29, x29
0x003cb260  9b 5a 02 94     bl       #0x461ccc
0x003cb264  a0 83 11 f8     stur     x0, [x29, #-0xe8]
0x003cb268  e0 03 19 aa     mov      x0, x25
0x003cb26c  e1 03 13 aa     mov      x1, x19
0x003cb270  62 7d 80 52     mov      w2, #0x3eb
0x003cb274  7e 5a 02 94     bl       #0x461c6c
0x003cb278  fd 03 1d aa     mov      x29, x29
0x003cb27c  94 5a 02 94     bl       #0x461ccc
0x003cb280  f4 03 00 aa     mov      x20, x0
0x003cb284  e0 03 19 aa     mov      x0, x25
0x003cb288  e1 03 13 aa     mov      x1, x19
0x003cb28c  82 7d 80 52     mov      w2, #0x3ec
0x003cb290  77 5a 02 94     bl       #0x461c6c
0x003cb294  fd 03 1d aa     mov      x29, x29
0x003cb298  8d 5a 02 94     bl       #0x461ccc
0x003cb29c  f6 03 00 aa     mov      x22, x0
0x003cb2a0  e0 03 19 aa     mov      x0, x25
0x003cb2a4  e1 03 13 aa     mov      x1, x19
0x003cb2a8  a2 7d 80 52     mov      w2, #0x3ed
0x003cb2ac  70 5a 02 94     bl       #0x461c6c
0x003cb2b0  fd 03 1d aa     mov      x29, x29
0x003cb2b4  86 5a 02 94     bl       #0x461ccc
0x003cb2b8  fc 03 00 aa     mov      x28, x0
0x003cb2bc  c8 07 00 b0     adrp     x8, #0x4c4000
0x003cb2c0  00 0d 41 f9     ldr      x0, [x8, #0x218]
0x003cb2c4  e1 a3 40 f9     ldr      x1, [sp, #0x140]
0x003cb2c8  e0 53 40 fd     ldr      d0, [sp, #0xa0]
0x003cb2cc  e1 9b 40 fd     ldr      d1, [sp, #0x130]
0x003cb2d0  67 5a 02 94     bl       #0x461c6c
0x003cb2d4  fd 03 1d aa     mov      x29, x29
0x003cb2d8  7d 5a 02 94     bl       #0x461ccc
0x003cb2dc  f3 03 00 aa     mov      x19, x0
0x003cb2e0  f4 bf 00 f9     str      x20, [sp, #0x178]
0x003cb2e4  e0 03 14 aa     mov      x0, x20
0x003cb2e8  e1 9f 40 f9     ldr      x1, [sp, #0x138]
0x003cb2ec  e2 03 13 aa     mov      x2, x19
0x003cb2f0  5f 5a 02 94     bl       #0x461c6c
0x003cb2f4  e0 03 13 aa     mov      x0, x19
0x003cb2f8  69 5a 02 94     bl       #0x461c9c
0x003cb2fc  e0 03 19 aa     mov      x0, x25
0x003cb300  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x003cb304  5a 5a 02 94     bl       #0x461c6c
0x003cb308  04 10 60 1e     fmov     d4, #2.00000000
0x003cb30c  c5 41 60 1e     fmov     d5, d14
0x003cb310  01 59 02 94     bl       #0x461714
0x003cb314  e0 03 18 aa     mov      x0, x24
0x003cb318  e1 03 17 aa     mov      x1, x23
0x003cb31c  54 5a 02 94     bl       #0x461c6c
0x003cb320  e0 03 18 aa     mov      x0, x24
0x003cb324  e1 03 1b aa     mov      x1, x27
0x003cb328  51 5a 02 94     bl       #0x461c6c
0x003cb32c  fd 03 1d aa     mov      x29, x29
0x003cb330  67 5a 02 94     bl       #0x461ccc
0x003cb334  f3 03 00 aa     mov      x19, x0
0x003cb338  a1 03 50 f8     ldur     x1, [x29, #-0x100]
0x003cb33c  00 41 60 1e     fmov     d0, d8
0x003cb340  4b 5a 02 94     bl       #0x461c6c
0x003cb344  e0 03 13 aa     mov      x0, x19
0x003cb348  55 5a 02 94     bl       #0x461c9c
0x003cb34c  e0 03 18 aa     mov      x0, x24
0x003cb350  e1 03 1b aa     mov      x1, x27
0x003cb354  46 5a 02 94     bl       #0x461c6c
0x003cb358  fd 03 1d aa     mov      x29, x29
0x003cb35c  5c 5a 02 94     bl       #0x461ccc
0x003cb360  f3 03 00 aa     mov      x19, x0
0x003cb364  e1 b3 40 f9     ldr      x1, [sp, #0x160]
0x003cb368  22 00 80 52     mov      w2, #1
0x003cb36c  40 5a 02 94     bl       #0x461c6c
0x003cb370  e0 03 13 aa     mov      x0, x19
0x003cb374  4a 5a 02 94     bl       #0x461c9c
0x003cb378  c8 07 00 b0     adrp     x8, #0x4c4000
0x003cb37c  00 49 40 f9     ldr      x0, [x8, #0x90]
0x003cb380  e8 27 41 b9     ldr      w8, [sp, #0x124]
0x003cb384  a8 00 00 36     tbz      w8, #0, #0x3cb398
0x003cb388  00 10 6e 1e     fmov     d0, #1.00000000
0x003cb38c  e1 4b 40 f9     ldr      x1, [sp, #0x90]
0x003cb390  e1 13 40 fd     ldr      d1, [sp, #0x20]
0x003cb394  05 00 00 14     b        #0x3cb3a8
0x003cb398  28 06 00 d0     adrp     x8, #0x491000
0x003cb39c  01 99 42 fd     ldr      d1, [x8, #0x530]
0x003cb3a0  e0 03 67 9e     fmov     d0, xzr
0x003cb3a4  e1 4b 40 f9     ldr      x1, [sp, #0x90]
0x003cb3a8  31 5a 02 94     bl       #0x461c6c
0x003cb3ac  fd 03 1d aa     mov      x29, x29
0x003cb3b0  47 5a 02 94     bl       #0x461ccc
0x003cb3b4  f3 03 00 aa     mov      x19, x0
0x003cb3b8  da 07 00 b0     adrp     x26, #0x4c4000
0x003cb3bc  e0 03 18 aa     mov      x0, x24
0x003cb3c0  e1 8f 40 f9     ldr      x1, [sp, #0x118]
0x003cb3c4  e2 03 13 aa     mov      x2, x19
0x003cb3c8  29 5a 02 94     bl       #0x461c6c
0x003cb3cc  e0 03 13 aa     mov      x0, x19
0x003cb3d0  33 5a 02 94     bl       #0x461c9c
0x003cb3d4  40 97 40 f9     ldr      x0, [x26, #0x128]
0x003cb3d8  e1 af 40 f9     ldr      x1, [sp, #0x158]
0x003cb3dc  24 5a 02 94     bl       #0x461c6c
0x003cb3e0  fd 03 1d aa     mov      x29, x29
0x003cb3e4  3a 5a 02 94     bl       #0x461ccc
0x003cb3e8  f3 03 00 aa     mov      x19, x0
0x003cb3ec  e1 ab 40 f9     ldr      x1, [sp, #0x150]
0x003cb3f0  1f 5a 02 94     bl       #0x461c6c
0x003cb3f4  09 40 60 1e     fmov     d9, d0
0x003cb3f8  e0 03 13 aa     mov      x0, x19
0x003cb3fc  28 5a 02 94     bl       #0x461c9c
0x003cb400  28 21 60 1e     fcmp     d9, #0.0
0x003cb404  00 10 60 1e     fmov     d0, #2.00000000
0x003cb408  20 8d 60 1e     fcsel    d0, d9, d0, hi
0x003cb40c  a1 09 60 1e     fmul     d1, d13, d0
0x003cb410  21 40 66 1e     frinta   d1, d1
0x003cb414  21 18 60 1e     fdiv     d1, d1, d0
0x003cb418  a0 83 51 f8     ldur     x0, [x29, #-0xe8]
0x003cb41c  e1 03 17 aa     mov      x1, x23
0x003cb420  e0 41 60 1e     fmov     d0, d15
0x003cb424  82 41 60 1e     fmov     d2, d12
0x003cb428  83 41 60 1e     fmov     d3, d12
0x003cb42c  10 5a 02 94     bl       #0x461c6c
0x003cb430  e0 7f 40 fd     ldr      d0, [sp, #0xf8]
0x003cb434  ad 01 00 94     bl       #0x3cbae8
0x003cb438  08 40 60 1e     fmov     d8, d0
0x003cb43c  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cb440  e1 c3 40 f9     ldr      x1, [sp, #0x180]
0x003cb444  0a 5a 02 94     bl       #0x461c6c
0x003cb448  f3 03 00 aa     mov      x19, x0
0x003cb44c  e0 03 1c aa     mov      x0, x28
0x003cb450  e1 c7 40 f9     ldr      x1, [sp, #0x188]
0x003cb454  06 5a 02 94     bl       #0x461c6c
0x003cb458  e9 03 67 9e     fmov     d9, xzr
0x003cb45c  e0 0e 00 37     tbnz     w0, #0, #0x3cb638
0x003cb460  7f 02 00 71     cmp      w19, #0
0x003cb464  e1 03 45 6d     ldp      d1, d0, [sp, #0x50]
0x003cb468  0a 1c 61 1e     fcsel    d10, d0, d1, ne
0x003cb46c  ea 3f 00 fd     str      d10, [sp, #0x78]
0x003cb470  c8 07 00 b0     adrp     x8, #0x4c4000
0x003cb474  00 0d 41 f9     ldr      x0, [x8, #0x218]
0x003cb478  00 d0 64 1e     fmov     d0, #11.00000000
0x003cb47c  e1 a3 40 f9     ldr      x1, [sp, #0x140]
0x003cb480  e1 9b 40 fd     ldr      d1, [sp, #0x130]
0x003cb484  fa 59 02 94     bl       #0x461c6c
0x003cb488  fd 03 1d aa     mov      x29, x29
0x003cb48c  10 5a 02 94     bl       #0x461ccc
0x003cb490  f3 03 00 aa     mov      x19, x0
0x003cb494  e0 03 1c aa     mov      x0, x28
0x003cb498  e1 9f 40 f9     ldr      x1, [sp, #0x138]
0x003cb49c  e2 03 13 aa     mov      x2, x19
0x003cb4a0  f3 59 02 94     bl       #0x461c6c
0x003cb4a4  e0 03 13 aa     mov      x0, x19
0x003cb4a8  fd 59 02 94     bl       #0x461c9c
0x003cb4ac  e0 03 1c aa     mov      x0, x28
0x003cb4b0  e1 27 40 f9     ldr      x1, [sp, #0x48]
0x003cb4b4  ee 59 02 94     bl       #0x461c6c
0x003cb4b8  fd 03 1d aa     mov      x29, x29
0x003cb4bc  04 5a 02 94     bl       #0x461ccc
0x003cb4c0  f3 03 00 aa     mov      x19, x0
0x003cb4c4  a0 03 51 f8     ldur     x0, [x29, #-0xf0]
0x003cb4c8  e1 23 40 f9     ldr      x1, [sp, #0x40]
0x003cb4cc  e2 03 13 aa     mov      x2, x19
0x003cb4d0  00 41 60 1e     fmov     d0, d8
0x003cb4d4  e6 59 02 94     bl       #0x461c6c
0x003cb4d8  09 40 60 1e     fmov     d9, d0
0x003cb4dc  e0 03 13 aa     mov      x0, x19
0x003cb4e0  ef 59 02 94     bl       #0x461c9c
0x003cb4e4  e0 03 19 aa     mov      x0, x25
0x003cb4e8  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x003cb4ec  e0 59 02 94     bl       #0x461c6c
0x003cb4f0  86 58 02 94     bl       #0x461708
0x003cb4f4  00 38 6a 1e     fsub     d0, d0, d10
0x003cb4f8  cc 41 60 1e     fmov     d12, d14
0x003cb4fc  0e 38 69 1e     fsub     d14, d0, d9
0x003cb500  40 97 40 f9     ldr      x0, [x26, #0x128]
0x003cb504  fb af 40 f9     ldr      x27, [sp, #0x158]
0x003cb508  e1 03 1b aa     mov      x1, x27
0x003cb50c  d8 59 02 94     bl       #0x461c6c
0x003cb510  fd 03 1d aa     mov      x29, x29
0x003cb514  ee 59 02 94     bl       #0x461ccc
0x003cb518  f3 03 00 aa     mov      x19, x0
0x003cb51c  f5 ab 40 f9     ldr      x21, [sp, #0x150]
0x003cb520  e1 03 15 aa     mov      x1, x21
0x003cb524  d2 59 02 94     bl       #0x461c6c
0x003cb528  0a 40 60 1e     fmov     d10, d0
0x003cb52c  e0 03 13 aa     mov      x0, x19
0x003cb530  db 59 02 94     bl       #0x461c9c
0x003cb534  48 21 60 1e     fcmp     d10, #0.0
0x003cb538  0b 10 60 1e     fmov     d11, #2.00000000
0x003cb53c  40 8d 6b 1e     fcsel    d0, d10, d11, hi
0x003cb540  c1 09 60 1e     fmul     d1, d14, d0
0x003cb544  21 40 66 1e     frinta   d1, d1
0x003cb548  2a 18 60 1e     fdiv     d10, d1, d0
0x003cb54c  e0 a7 40 fd     ldr      d0, [sp, #0x148]
0x003cb550  00 38 68 1e     fsub     d0, d0, d8
0x003cb554  01 10 6c 1e     fmov     d1, #0.50000000
0x003cb558  0f 08 61 1e     fmul     d15, d0, d1
0x003cb55c  40 97 40 f9     ldr      x0, [x26, #0x128]
0x003cb560  e1 03 1b aa     mov      x1, x27
0x003cb564  c2 59 02 94     bl       #0x461c6c
0x003cb568  fd 03 1d aa     mov      x29, x29
0x003cb56c  d8 59 02 94     bl       #0x461ccc
0x003cb570  f3 03 00 aa     mov      x19, x0
0x003cb574  e1 03 15 aa     mov      x1, x21
0x003cb578  f7 3b 40 f9     ldr      x23, [sp, #0x70]
0x003cb57c  bc 59 02 94     bl       #0x461c6c
0x003cb580  0e 40 60 1e     fmov     d14, d0
0x003cb584  e0 03 13 aa     mov      x0, x19
0x003cb588  c5 59 02 94     bl       #0x461c9c
0x003cb58c  c8 21 60 1e     fcmp     d14, #0.0
0x003cb590  c0 8d 6b 1e     fcsel    d0, d14, d11, hi
0x003cb594  8e 41 60 1e     fmov     d14, d12
0x003cb598  ec 17 40 fd     ldr      d12, [sp, #0x28]
0x003cb59c  e1 09 60 1e     fmul     d1, d15, d0
0x003cb5a0  21 40 66 1e     frinta   d1, d1
0x003cb5a4  21 18 60 1e     fdiv     d1, d1, d0
0x003cb5a8  e0 03 1c aa     mov      x0, x28
0x003cb5ac  e1 03 17 aa     mov      x1, x23
0x003cb5b0  40 41 60 1e     fmov     d0, d10
0x003cb5b4  22 41 60 1e     fmov     d2, d9
0x003cb5b8  03 41 60 1e     fmov     d3, d8
0x003cb5bc  ac 59 02 94     bl       #0x461c6c
0x003cb5c0  00 10 6c 1e     fmov     d0, #0.50000000
0x003cb5c4  08 09 60 1e     fmul     d8, d8, d0
0x003cb5c8  e0 03 1c aa     mov      x0, x28
0x003cb5cc  fb 97 40 f9     ldr      x27, [sp, #0x128]
0x003cb5d0  e1 03 1b aa     mov      x1, x27
0x003cb5d4  a6 59 02 94     bl       #0x461c6c
0x003cb5d8  fd 03 1d aa     mov      x29, x29
0x003cb5dc  bc 59 02 94     bl       #0x461ccc
0x003cb5e0  f3 03 00 aa     mov      x19, x0
0x003cb5e4  a1 03 50 f8     ldur     x1, [x29, #-0x100]
0x003cb5e8  00 41 60 1e     fmov     d0, d8
0x003cb5ec  a0 59 02 94     bl       #0x461c6c
0x003cb5f0  e0 03 13 aa     mov      x0, x19
0x003cb5f4  aa 59 02 94     bl       #0x461c9c
0x003cb5f8  e0 03 1c aa     mov      x0, x28
0x003cb5fc  e1 03 1b aa     mov      x1, x27
0x003cb600  9b 59 02 94     bl       #0x461c6c
0x003cb604  fd 03 1d aa     mov      x29, x29
0x003cb608  b1 59 02 94     bl       #0x461ccc
0x003cb60c  f3 03 00 aa     mov      x19, x0
0x003cb610  e1 b3 40 f9     ldr      x1, [sp, #0x160]
0x003cb614  22 00 80 52     mov      w2, #1
0x003cb618  95 59 02 94     bl       #0x461c6c
0x003cb61c  e0 03 13 aa     mov      x0, x19
0x003cb620  9f 59 02 94     bl       #0x461c9c
0x003cb624  e0 3f 40 fd     ldr      d0, [sp, #0x78]
0x003cb628  00 28 69 1e     fadd     d0, d0, d9
0x003cb62c  eb 33 40 fd     ldr      d11, [sp, #0x60]
0x003cb630  01 10 64 1e     fmov     d1, #8.00000000
0x003cb634  09 28 61 1e     fadd     d9, d0, d1
0x003cb638  fa 03 16 aa     mov      x26, x22
0x003cb63c  e0 03 16 aa     mov      x0, x22
0x003cb640  e1 c7 40 f9     ldr      x1, [sp, #0x188]
0x003cb644  8a 59 02 94     bl       #0x461c6c
0x003cb648  c0 02 00 37     tbnz     w0, #0, #0x3cb6a0
0x003cb64c  b5 83 51 f8     ldur     x21, [x29, #-0xe8]
0x003cb650  e0 03 15 aa     mov      x0, x21
0x003cb654  f3 37 40 f9     ldr      x19, [sp, #0x68]
0x003cb658  e1 03 13 aa     mov      x1, x19
0x003cb65c  84 59 02 94     bl       #0x461c6c
0x003cb660  24 58 02 94     bl       #0x4616f0
0x003cb664  80 29 60 1e     fadd     d0, d12, d0
0x003cb668  ea 1b 40 fd     ldr      d10, [sp, #0x30]
0x003cb66c  e1 0f 40 fd     ldr      d1, [sp, #0x18]
0x003cb670  48 01 41 1f     fmadd    d8, d10, d1, d0
0x003cb674  e0 03 15 aa     mov      x0, x21
0x003cb678  e1 03 13 aa     mov      x1, x19
0x003cb67c  7c 59 02 94     bl       #0x461c6c
0x003cb680  1f 58 02 94     bl       #0x4616fc
0x003cb684  28 06 00 d0     adrp     x8, #0x491000
0x003cb688  01 c9 41 fd     ldr      d1, [x8, #0x390]
0x003cb68c  41 01 41 1f     fmadd    d1, d10, d1, d0
0x003cb690  e0 03 1a aa     mov      x0, x26
0x003cb694  00 41 60 1e     fmov     d0, d8
0x003cb698  e2 1f 40 fd     ldr      d2, [sp, #0x38]
0x003cb69c  36 01 00 94     bl       #0x3cbb74
0x003cb6a0  e0 03 19 aa     mov      x0, x25
0x003cb6a4  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x003cb6a8  71 59 02 94     bl       #0x461c6c
0x003cb6ac  17 58 02 94     bl       #0x461708
0x003cb6b0  e3 b7 40 fd     ldr      d3, [sp, #0x168]
0x003cb6b4  00 38 63 1e     fsub     d0, d0, d3
0x003cb6b8  01 90 74 1e     fmov     d1, #-10.00000000
0x003cb6bc  00 28 61 1e     fadd     d0, d0, d1
0x003cb6c0  00 38 69 1e     fsub     d0, d0, d9
0x003cb6c4  e1 03 67 9e     fmov     d1, xzr
0x003cb6c8  02 68 61 1e     fmaxnm   d2, d0, d1
0x003cb6cc  f6 bf 40 f9     ldr      x22, [sp, #0x178]
0x003cb6d0  e0 03 16 aa     mov      x0, x22
0x003cb6d4  e1 03 17 aa     mov      x1, x23
0x003cb6d8  60 40 60 1e     fmov     d0, d3
0x003cb6dc  ea a7 40 fd     ldr      d10, [sp, #0x148]
0x003cb6e0  43 41 60 1e     fmov     d3, d10
0x003cb6e4  62 59 02 94     bl       #0x461c6c
0x003cb6e8  e0 03 19 aa     mov      x0, x25
0x003cb6ec  fb 97 40 f9     ldr      x27, [sp, #0x128]
0x003cb6f0  e1 03 1b aa     mov      x1, x27
0x003cb6f4  5e 59 02 94     bl       #0x461c6c
0x003cb6f8  fd 03 1d aa     mov      x29, x29
0x003cb6fc  74 59 02 94     bl       #0x461ccc
0x003cb700  f3 03 00 aa     mov      x19, x0
0x003cb704  a1 03 50 f8     ldur     x1, [x29, #-0x100]
0x003cb708  e8 47 40 fd     ldr      d8, [sp, #0x88]
0x003cb70c  00 41 60 1e     fmov     d0, d8
0x003cb710  57 59 02 94     bl       #0x461c6c
0x003cb714  e0 03 13 aa     mov      x0, x19
0x003cb718  61 59 02 94     bl       #0x461c9c
0x003cb71c  e0 03 18 aa     mov      x0, x24
0x003cb720  e1 03 1b aa     mov      x1, x27
0x003cb724  52 59 02 94     bl       #0x461c6c
0x003cb728  fd 03 1d aa     mov      x29, x29
0x003cb72c  68 59 02 94     bl       #0x461ccc
0x003cb730  f3 03 00 aa     mov      x19, x0
0x003cb734  f5 d3 4d a9     ldp      x21, x20, [sp, #0xd8]
0x003cb738  e1 03 15 aa     mov      x1, x21
0x003cb73c  e2 03 14 aa     mov      x2, x20
0x003cb740  4b 59 02 94     bl       #0x461c6c
0x003cb744  e0 03 13 aa     mov      x0, x19
0x003cb748  55 59 02 94     bl       #0x461c9c
0x003cb74c  e0 03 19 aa     mov      x0, x25
0x003cb750  e1 03 1b aa     mov      x1, x27
0x003cb754  46 59 02 94     bl       #0x461c6c
0x003cb758  fd 03 1d aa     mov      x29, x29
0x003cb75c  5c 59 02 94     bl       #0x461ccc
0x003cb760  f3 03 00 aa     mov      x19, x0
0x003cb764  e1 03 15 aa     mov      x1, x21
0x003cb768  e2 03 14 aa     mov      x2, x20
0x003cb76c  40 59 02 94     bl       #0x461c6c
0x003cb770  e0 03 13 aa     mov      x0, x19
0x003cb774  4a 59 02 94     bl       #0x461c9c
0x003cb778  e0 03 1a aa     mov      x0, x26
0x003cb77c  e1 03 1b aa     mov      x1, x27
0x003cb780  3b 59 02 94     bl       #0x461c6c
0x003cb784  fd 03 1d aa     mov      x29, x29
0x003cb788  51 59 02 94     bl       #0x461ccc
0x003cb78c  f3 03 00 aa     mov      x19, x0
0x003cb790  e1 03 15 aa     mov      x1, x21
0x003cb794  f4 43 40 f9     ldr      x20, [sp, #0x80]
0x003cb798  e2 03 14 aa     mov      x2, x20
0x003cb79c  34 59 02 94     bl       #0x461c6c
0x003cb7a0  e0 03 13 aa     mov      x0, x19
0x003cb7a4  3e 59 02 94     bl       #0x461c9c
0x003cb7a8  e0 03 1c aa     mov      x0, x28
0x003cb7ac  e1 03 1b aa     mov      x1, x27
0x003cb7b0  2f 59 02 94     bl       #0x461c6c
0x003cb7b4  fd 03 1d aa     mov      x29, x29
0x003cb7b8  45 59 02 94     bl       #0x461ccc
0x003cb7bc  f3 03 00 aa     mov      x19, x0
0x003cb7c0  e1 03 15 aa     mov      x1, x21
0x003cb7c4  e2 03 14 aa     mov      x2, x20
0x003cb7c8  29 59 02 94     bl       #0x461c6c
0x003cb7cc  e0 03 13 aa     mov      x0, x19
0x003cb7d0  33 59 02 94     bl       #0x461c9c
0x003cb7d4  e0 03 19 aa     mov      x0, x25
0x003cb7d8  f3 7b 40 f9     ldr      x19, [sp, #0xf0]
0x003cb7dc  e1 03 13 aa     mov      x1, x19
0x003cb7e0  e2 03 1a aa     mov      x2, x26
0x003cb7e4  22 59 02 94     bl       #0x461c6c
0x003cb7e8  e0 03 19 aa     mov      x0, x25
0x003cb7ec  e1 03 13 aa     mov      x1, x19
0x003cb7f0  e2 03 1c aa     mov      x2, x28
0x003cb7f4  1e 59 02 94     bl       #0x461c6c
0x003cb7f8  e0 03 1c aa     mov      x0, x28
0x003cb7fc  28 59 02 94     bl       #0x461c9c
0x003cb800  e0 03 1a aa     mov      x0, x26
0x003cb804  26 59 02 94     bl       #0x461c9c
0x003cb808  e0 03 16 aa     mov      x0, x22
0x003cb80c  24 59 02 94     bl       #0x461c9c
0x003cb810  a0 83 51 f8     ldur     x0, [x29, #-0xe8]
0x003cb814  22 59 02 94     bl       #0x461c9c
0x003cb818  e0 03 18 aa     mov      x0, x24
0x003cb81c  20 59 02 94     bl       #0x461c9c
0x003cb820  e0 03 19 aa     mov      x0, x25
0x003cb824  1e 59 02 94     bl       #0x461c9c
0x003cb828  f6 bb 40 f9     ldr      x22, [sp, #0x170]
0x003cb82c  d6 06 00 91     add      x22, x22, #1
0x003cb830  b8 03 51 f8     ldur     x24, [x29, #-0xf0]
0x003cb834  e0 03 18 aa     mov      x0, x24
0x003cb838  f5 6b 40 f9     ldr      x21, [sp, #0xd0]
0x003cb83c  e1 03 15 aa     mov      x1, x21
0x003cb840  0b 59 02 94     bl       #0x461c6c
0x003cb844  fd 03 1d aa     mov      x29, x29
0x003cb848  21 59 02 94     bl       #0x461ccc
0x003cb84c  f3 03 00 aa     mov      x19, x0
0x003cb850  e1 87 40 f9     ldr      x1, [sp, #0x108]
0x003cb854  06 59 02 94     bl       #0x461c6c
0x003cb858  f4 03 00 aa     mov      x20, x0
0x003cb85c  e0 03 13 aa     mov      x0, x19
0x003cb860  0f 59 02 94     bl       #0x461c9c
0x003cb864  df 02 14 eb     cmp      x22, x20
0x003cb868  63 c8 ff 54     b.lo     #0x3cb174
0x003cb86c  e0 0b 40 f9     ldr      x0, [sp, #0x10]
0x003cb870  0b 59 02 94     bl       #0x461c9c
0x003cb874  e0 07 40 f9     ldr      x0, [sp, #8]
0x003cb878  09 59 02 94     bl       #0x461c9c
0x003cb87c  ff 03 08 91     add      sp, sp, #0x200
0x003cb880  fd 7b 49 a9     ldp      x29, x30, [sp, #0x90]
0x003cb884  f4 4f 48 a9     ldp      x20, x19, [sp, #0x80]
0x003cb888  f6 57 47 a9     ldp      x22, x21, [sp, #0x70]
0x003cb88c  f8 5f 46 a9     ldp      x24, x23, [sp, #0x60]
0x003cb890  fa 67 45 a9     ldp      x26, x25, [sp, #0x50]
0x003cb894  fc 6f 44 a9     ldp      x28, x27, [sp, #0x40]
0x003cb898  e9 23 43 6d     ldp      d9, d8, [sp, #0x30]
0x003cb89c  eb 2b 42 6d     ldp      d11, d10, [sp, #0x20]
0x003cb8a0  ed 33 41 6d     ldp      d13, d12, [sp, #0x10]
0x003cb8a4  ef 3b ca 6c     ldp      d15, d14, [sp], #0xa0
0x003cb8a8  c0 03 5f d6     ret      
