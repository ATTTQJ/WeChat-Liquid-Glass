; Capstone fallback for WCLGHGFullscreenDrawer::buildPillsWithFontSize:
; address=0x333df8 size=5056

0x00333df8  ef 3b b6 6d     stp      d15, d14, [sp, #-0xa0]!
0x00333dfc  ed 33 01 6d     stp      d13, d12, [sp, #0x10]
0x00333e00  eb 2b 02 6d     stp      d11, d10, [sp, #0x20]
0x00333e04  e9 23 03 6d     stp      d9, d8, [sp, #0x30]
0x00333e08  fc 6f 04 a9     stp      x28, x27, [sp, #0x40]
0x00333e0c  fa 67 05 a9     stp      x26, x25, [sp, #0x50]
0x00333e10  f8 5f 06 a9     stp      x24, x23, [sp, #0x60]
0x00333e14  f6 57 07 a9     stp      x22, x21, [sp, #0x70]
0x00333e18  f4 4f 08 a9     stp      x20, x19, [sp, #0x80]
0x00333e1c  fd 7b 09 a9     stp      x29, x30, [sp, #0x90]
0x00333e20  fd 43 02 91     add      x29, sp, #0x90
0x00333e24  ff c3 06 d1     sub      sp, sp, #0x1b0
0x00333e28  08 40 60 1e     fmov     d8, d0
0x00333e2c  68 0b 00 b0     adrp     x8, #0x4a0000
0x00333e30  08 b1 43 f9     ldr      x8, [x8, #0x760]
0x00333e34  08 01 40 f9     ldr      x8, [x8]
0x00333e38  a8 03 16 f8     stur     x8, [x29, #-0xa0]
0x00333e3c  68 12 00 b0     adrp     x8, #0x580000
0x00333e40  08 31 3f 91     add      x8, x8, #0xfcc
0x00333e44  09 fd df 88     ldar     w9, [x8]
0x00333e48  a9 0f 00 35     cbnz     w9, #0x33403c
0x00333e4c  a9 10 00 d0     adrp     x9, #0x549000
0x00333e50  29 e1 27 91     add      x9, x9, #0x9f8
0x00333e54  2a 01 40 39     ldrb     w10, [x9]
0x00333e58  6b 07 80 52     mov      w11, #0x3b
0x00333e5c  4a 01 0b 4a     eor      w10, w10, w11
0x00333e60  ab 10 00 d0     adrp     x11, #0x549000
0x00333e64  6b 19 28 91     add      x11, x11, #0xa06
0x00333e68  6a 01 00 39     strb     w10, [x11]
0x00333e6c  2a 05 40 39     ldrb     w10, [x9, #1]
0x00333e70  6c 02 80 52     mov      w12, #0x13
0x00333e74  4a 01 0c 4a     eor      w10, w10, w12
0x00333e78  6a 05 00 39     strb     w10, [x11, #1]
0x00333e7c  2a 09 40 39     ldrb     w10, [x9, #2]
0x00333e80  4c 02 80 52     mov      w12, #0x12
0x00333e84  4a 01 0c 4a     eor      w10, w10, w12
0x00333e88  6a 09 00 39     strb     w10, [x11, #2]
0x00333e8c  2a 0d 40 39     ldrb     w10, [x9, #3]
0x00333e90  4a 01 1e 52     eor      w10, w10, #4
0x00333e94  6a 0d 00 39     strb     w10, [x11, #3]
0x00333e98  2a 11 40 39     ldrb     w10, [x9, #4]
0x00333e9c  8c 11 80 52     mov      w12, #0x8c
0x00333ea0  4a 01 0c 4a     eor      w10, w10, w12
0x00333ea4  6a 11 00 39     strb     w10, [x11, #4]
0x00333ea8  2a 15 40 39     ldrb     w10, [x9, #5]
0x00333eac  ac 04 80 52     mov      w12, #0x25
0x00333eb0  4a 01 0c 4a     eor      w10, w10, w12
0x00333eb4  6a 15 00 39     strb     w10, [x11, #5]
0x00333eb8  2a 19 40 39     ldrb     w10, [x9, #6]
0x00333ebc  4a 79 19 52     eor      w10, w10, #0xffffffbf
0x00333ec0  6a 19 00 39     strb     w10, [x11, #6]
0x00333ec4  2a 1d 40 39     ldrb     w10, [x9, #7]
0x00333ec8  cc 09 80 52     mov      w12, #0x4e
0x00333ecc  4a 01 0c 4a     eor      w10, w10, w12
0x00333ed0  6a 1d 00 39     strb     w10, [x11, #7]
0x00333ed4  2a 21 40 39     ldrb     w10, [x9, #8]
0x00333ed8  cc 02 80 52     mov      w12, #0x16
0x00333edc  4a 01 0c 4a     eor      w10, w10, w12
0x00333ee0  6a 21 00 39     strb     w10, [x11, #8]
0x00333ee4  2a 25 40 39     ldrb     w10, [x9, #9]
0x00333ee8  2c 09 80 52     mov      w12, #0x49
0x00333eec  4a 01 0c 4a     eor      w10, w10, w12
0x00333ef0  6a 25 00 39     strb     w10, [x11, #9]
0x00333ef4  2a 29 40 39     ldrb     w10, [x9, #0xa]
0x00333ef8  ac 0b 80 52     mov      w12, #0x5d
0x00333efc  4a 01 0c 4a     eor      w10, w10, w12
0x00333f00  6a 29 00 39     strb     w10, [x11, #0xa]
0x00333f04  2a 2d 40 39     ldrb     w10, [x9, #0xb]
0x00333f08  4a 09 1d 52     eor      w10, w10, #0x38
0x00333f0c  6a 2d 00 39     strb     w10, [x11, #0xb]
0x00333f10  2a 31 40 39     ldrb     w10, [x9, #0xc]
0x00333f14  4a e1 03 52     eor      w10, w10, #0x22222222
0x00333f18  6a 31 00 39     strb     w10, [x11, #0xc]
0x00333f1c  29 35 40 39     ldrb     w9, [x9, #0xd]
0x00333f20  aa 1e 80 52     mov      w10, #0xf5
0x00333f24  29 01 0a 4a     eor      w9, w9, w10
0x00333f28  69 35 00 39     strb     w9, [x11, #0xd]
0x00333f2c  a9 10 00 d0     adrp     x9, #0x549000
0x00333f30  29 c1 27 91     add      x9, x9, #0x9f0
0x00333f34  2a 01 40 39     ldrb     w10, [x9]
0x00333f38  ab 11 80 52     mov      w11, #0x8d
0x00333f3c  4a 01 0b 4a     eor      w10, w10, w11
0x00333f40  ab 10 00 d0     adrp     x11, #0x549000
0x00333f44  6b d1 27 91     add      x11, x11, #0x9f4
0x00333f48  6a 01 00 39     strb     w10, [x11]
0x00333f4c  2a 05 40 39     ldrb     w10, [x9, #1]
0x00333f50  6c 0a 80 52     mov      w12, #0x53
0x00333f54  4a 01 0c 4a     eor      w10, w10, w12
0x00333f58  6a 05 00 39     strb     w10, [x11, #1]
0x00333f5c  2a 09 40 39     ldrb     w10, [x9, #2]
0x00333f60  ac 17 80 52     mov      w12, #0xbd
0x00333f64  4a 01 0c 4a     eor      w10, w10, w12
0x00333f68  6a 09 00 39     strb     w10, [x11, #2]
0x00333f6c  29 0d 40 39     ldrb     w9, [x9, #3]
0x00333f70  6a 05 80 52     mov      w10, #0x2b
0x00333f74  29 01 0a 4a     eor      w9, w9, w10
0x00333f78  69 0d 00 39     strb     w9, [x11, #3]
0x00333f7c  a9 10 00 d0     adrp     x9, #0x549000
0x00333f80  29 61 27 91     add      x9, x9, #0x9d8
0x00333f84  2a 01 40 79     ldrh     w10, [x9]
0x00333f88  0b cb 94 52     mov      w11, #0xa658
0x00333f8c  ac 10 00 d0     adrp     x12, #0x549000
0x00333f90  8c 91 27 91     add      x12, x12, #0x9e4
0x00333f94  4a 01 0b 4a     eor      w10, w10, w11
0x00333f98  8a 01 00 79     strh     w10, [x12]
0x00333f9c  2a 05 40 79     ldrh     w10, [x9, #2]
0x00333fa0  eb e6 91 52     mov      w11, #0x8f37
0x00333fa4  4a 01 0b 4a     eor      w10, w10, w11
0x00333fa8  8a 05 00 79     strh     w10, [x12, #2]
0x00333fac  2a 09 40 79     ldrh     w10, [x9, #4]
0x00333fb0  6b 03 84 52     mov      w11, #0x201b
0x00333fb4  4a 01 0b 4a     eor      w10, w10, w11
0x00333fb8  8a 09 00 79     strh     w10, [x12, #4]
0x00333fbc  2a 0d 40 79     ldrh     w10, [x9, #6]
0x00333fc0  6b 3a 8f 52     mov      w11, #0x79d3
0x00333fc4  4a 01 0b 4a     eor      w10, w10, w11
0x00333fc8  8a 0d 00 79     strh     w10, [x12, #6]
0x00333fcc  2a 11 40 79     ldrh     w10, [x9, #8]
0x00333fd0  ab 45 8d 52     mov      w11, #0x6a2d
0x00333fd4  4a 01 0b 4a     eor      w10, w10, w11
0x00333fd8  8a 11 00 79     strh     w10, [x12, #8]
0x00333fdc  29 15 40 79     ldrh     w9, [x9, #0xa]
0x00333fe0  2a 93 90 52     mov      w10, #0x8499
0x00333fe4  29 01 0a 4a     eor      w9, w9, w10
0x00333fe8  89 15 00 79     strh     w9, [x12, #0xa]
0x00333fec  a9 10 00 d0     adrp     x9, #0x549000
0x00333ff0  29 41 27 91     add      x9, x9, #0x9d0
0x00333ff4  2a 01 40 39     ldrb     w10, [x9]
0x00333ff8  cb 11 80 52     mov      w11, #0x8e
0x00333ffc  4a 01 0b 4a     eor      w10, w10, w11
0x00334000  ab 10 00 b0     adrp     x11, #0x549000
0x00334004  6b 51 27 91     add      x11, x11, #0x9d4
0x00334008  6a 01 00 39     strb     w10, [x11]
0x0033400c  2a 05 40 39     ldrb     w10, [x9, #1]
0x00334010  6c 0d 80 52     mov      w12, #0x6b
0x00334014  4a 01 0c 4a     eor      w10, w10, w12
0x00334018  6a 05 00 39     strb     w10, [x11, #1]
0x0033401c  2a 09 40 39     ldrb     w10, [x9, #2]
0x00334020  8c 1d 80 52     mov      w12, #0xec
0x00334024  4a 01 0c 4a     eor      w10, w10, w12
0x00334028  6a 09 00 39     strb     w10, [x11, #2]
0x0033402c  29 0d 40 39     ldrb     w9, [x9, #3]
0x00334030  0a 12 80 52     mov      w10, #0x90
0x00334034  29 01 0a 4a     eor      w9, w9, w10
0x00334038  69 0d 00 39     strb     w9, [x11, #3]
0x0033403c  29 00 80 52     mov      w9, #1
0x00334040  09 fd 9f 88     stlr     w9, [x8]
0x00334044  e8 43 00 d1     sub      x8, sp, #0x10
0x00334048  a8 83 15 f8     stur     x8, [x29, #-0xa8]
0x0033404c  1f 01 00 91     mov      sp, x8
0x00334050  e8 43 00 d1     sub      x8, sp, #0x10
0x00334054  a8 03 15 f8     stur     x8, [x29, #-0xb0]
0x00334058  1f 01 00 91     mov      sp, x8
0x0033405c  e8 43 00 d1     sub      x8, sp, #0x10
0x00334060  a8 83 14 f8     stur     x8, [x29, #-0xb8]
0x00334064  1f 01 00 91     mov      sp, x8
0x00334068  f7 43 00 d1     sub      x23, sp, #0x10
0x0033406c  ff 02 00 91     mov      sp, x23
0x00334070  e8 03 00 91     mov      x8, sp
0x00334074  18 01 01 d1     sub      x24, x8, #0x40
0x00334078  1f 03 00 91     mov      sp, x24
0x0033407c  f9 03 02 d1     sub      x25, sp, #0x80
0x00334080  3f 03 00 91     mov      sp, x25
0x00334084  00 e4 00 4f     movi     v0.16b, #0
0x00334088  00 01 3f ad     stp      q0, q0, [x8, #-0x20]
0x0033408c  00 01 3e ad     stp      q0, q0, [x8, #-0x40]
0x00334090  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334094  01 fd 46 f9     ldr      x1, [x8, #0xdf8]
0x00334098  a8 23 00 d1     sub      x8, x29, #8
0x0033409c  00 01 10 f8     stur     x0, [x8, #-0x100]
0x003340a0  a8 43 00 d1     sub      x8, x29, #0x10
0x003340a4  01 01 10 f8     stur     x1, [x8, #-0x100]
0x003340a8  f1 b6 04 94     bl       #0x461c6c
0x003340ac  fd 03 1d aa     mov      x29, x29
0x003340b0  07 b7 04 94     bl       #0x461ccc
0x003340b4  f3 03 00 aa     mov      x19, x0
0x003340b8  48 0c 00 d0     adrp     x8, #0x4be000
0x003340bc  01 e1 43 f9     ldr      x1, [x8, #0x7c0]
0x003340c0  eb b6 04 94     bl       #0x461c6c
0x003340c4  fd 03 1d aa     mov      x29, x29
0x003340c8  01 b7 04 94     bl       #0x461ccc
0x003340cc  fb 03 00 aa     mov      x27, x0
0x003340d0  48 0c 00 d0     adrp     x8, #0x4be000
0x003340d4  01 81 44 f9     ldr      x1, [x8, #0x900]
0x003340d8  e5 b6 04 94     bl       #0x461c6c
0x003340dc  fa 03 00 aa     mov      x26, x0
0x003340e0  e0 03 1b aa     mov      x0, x27
0x003340e4  ee b6 04 94     bl       #0x461c9c
0x003340e8  e0 03 13 aa     mov      x0, x19
0x003340ec  ec b6 04 94     bl       #0x461c9c
0x003340f0  48 0c 00 d0     adrp     x8, #0x4be000
0x003340f4  13 3d 42 f9     ldr      x19, [x8, #0x478]
0x003340f8  e0 03 1a aa     mov      x0, x26
0x003340fc  e1 03 13 aa     mov      x1, x19
0x00334100  e2 03 18 aa     mov      x2, x24
0x00334104  e3 03 19 aa     mov      x3, x25
0x00334108  04 02 80 52     mov      w4, #0x10
0x0033410c  d8 b6 04 94     bl       #0x461c6c
0x00334110  80 03 00 b4     cbz      x0, #0x334180
0x00334114  fb 03 00 aa     mov      x27, x0
0x00334118  08 0b 40 f9     ldr      x8, [x24, #0x10]
0x0033411c  14 01 40 f9     ldr      x20, [x8]
0x00334120  55 0c 00 d0     adrp     x21, #0x4be000
0x00334124  16 00 80 d2     mov      x22, #0
0x00334128  bc 9a 45 f9     ldr      x28, [x21, #0xb30]
0x0033412c  08 0b 40 f9     ldr      x8, [x24, #0x10]
0x00334130  08 01 40 f9     ldr      x8, [x8]
0x00334134  1f 01 14 eb     cmp      x8, x20
0x00334138  60 00 00 54     b.eq     #0x334144
0x0033413c  e0 03 1a aa     mov      x0, x26
0x00334140  b9 b6 04 94     bl       #0x461c24
0x00334144  08 07 40 f9     ldr      x8, [x24, #8]
0x00334148  00 79 76 f8     ldr      x0, [x8, x22, lsl #3]
0x0033414c  e1 03 1c aa     mov      x1, x28
0x00334150  c7 b6 04 94     bl       #0x461c6c
0x00334154  d6 06 00 91     add      x22, x22, #1
0x00334158  7f 03 16 eb     cmp      x27, x22
0x0033415c  81 fe ff 54     b.ne     #0x33412c
0x00334160  e0 03 1a aa     mov      x0, x26
0x00334164  e1 03 13 aa     mov      x1, x19
0x00334168  e2 03 18 aa     mov      x2, x24
0x0033416c  e3 03 19 aa     mov      x3, x25
0x00334170  04 02 80 52     mov      w4, #0x10
0x00334174  be b6 04 94     bl       #0x461c6c
0x00334178  fb 03 00 aa     mov      x27, x0
0x0033417c  40 fd ff b5     cbnz     x0, #0x334124
0x00334180  e0 03 1a aa     mov      x0, x26
0x00334184  c6 b6 04 94     bl       #0x461c9c
0x00334188  88 0c 00 90     adrp     x8, #0x4c4000
0x0033418c  00 89 40 f9     ldr      x0, [x8, #0x110]
0x00334190  48 0c 00 d0     adrp     x8, #0x4be000
0x00334194  01 05 44 f9     ldr      x1, [x8, #0x808]
0x00334198  b5 b6 04 94     bl       #0x461c6c
0x0033419c  fd 03 1d aa     mov      x29, x29
0x003341a0  cb b6 04 94     bl       #0x461ccc
0x003341a4  f3 03 00 aa     mov      x19, x0
0x003341a8  68 0c 00 b0     adrp     x8, #0x4c1000
0x003341ac  01 01 47 f9     ldr      x1, [x8, #0xe00]
0x003341b0  a8 23 00 d1     sub      x8, x29, #8
0x003341b4  14 01 50 f8     ldur     x20, [x8, #-0x100]
0x003341b8  e0 03 14 aa     mov      x0, x20
0x003341bc  e2 03 13 aa     mov      x2, x19
0x003341c0  ab b6 04 94     bl       #0x461c6c
0x003341c4  e0 03 13 aa     mov      x0, x19
0x003341c8  b5 b6 04 94     bl       #0x461c9c
0x003341cc  68 0c 00 90     adrp     x8, #0x4c0000
0x003341d0  01 1d 42 f9     ldr      x1, [x8, #0x438]
0x003341d4  e0 03 14 aa     mov      x0, x20
0x003341d8  02 00 f0 92     mov      x2, #0x7fffffffffffffff
0x003341dc  a4 b6 04 94     bl       #0x461c6c
0x003341e0  9b 0c 00 90     adrp     x27, #0x4c4000
0x003341e4  60 cf 40 f9     ldr      x0, [x27, #0x198]
0x003341e8  48 0c 00 d0     adrp     x8, #0x4be000
0x003341ec  19 6d 46 f9     ldr      x25, [x8, #0xcd8]
0x003341f0  e1 03 19 aa     mov      x1, x25
0x003341f4  9e b6 04 94     bl       #0x461c6c
0x003341f8  fd 03 1d aa     mov      x29, x29
0x003341fc  b4 b6 04 94     bl       #0x461ccc
0x00334200  f3 03 00 aa     mov      x19, x0
0x00334204  48 0c 00 d0     adrp     x8, #0x4be000
0x00334208  01 71 46 f9     ldr      x1, [x8, #0xce0]
0x0033420c  98 b6 04 94     bl       #0x461c6c
0x00334210  fd 03 1d aa     mov      x29, x29
0x00334214  ae b6 04 94     bl       #0x461ccc
0x00334218  f5 03 00 aa     mov      x21, x0
0x0033421c  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334220  01 05 47 f9     ldr      x1, [x8, #0xe08]
0x00334224  a8 e3 03 d1     sub      x8, x29, #0xf8
0x00334228  13 01 10 f8     stur     x19, [x8, #-0x100]
0x0033422c  e0 03 13 aa     mov      x0, x19
0x00334230  8f b6 04 94     bl       #0x461c6c
0x00334234  a8 e3 00 d1     sub      x8, x29, #0x38
0x00334238  00 01 10 f8     stur     x0, [x8, #-0x100]
0x0033423c  48 0c 00 f0     adrp     x8, #0x4bf000
0x00334240  18 35 40 f9     ldr      x24, [x8, #0x68]
0x00334244  e0 03 14 aa     mov      x0, x20
0x00334248  e1 03 18 aa     mov      x1, x24
0x0033424c  88 b6 04 94     bl       #0x461c6c
0x00334250  fd 03 1d aa     mov      x29, x29
0x00334254  9e b6 04 94     bl       #0x461ccc
0x00334258  f3 03 00 aa     mov      x19, x0
0x0033425c  48 0c 00 d0     adrp     x8, #0x4be000
0x00334260  01 ed 41 f9     ldr      x1, [x8, #0x3d8]
0x00334264  82 b6 04 94     bl       #0x461c6c
0x00334268  fd 03 1d aa     mov      x29, x29
0x0033426c  98 b6 04 94     bl       #0x461ccc
0x00334270  fa 03 00 aa     mov      x26, x0
0x00334274  48 0c 00 d0     adrp     x8, #0x4be000
0x00334278  01 55 42 f9     ldr      x1, [x8, #0x4a8]
0x0033427c  7c b6 04 94     bl       #0x461c6c
0x00334280  fd 03 1d aa     mov      x29, x29
0x00334284  92 b6 04 94     bl       #0x461ccc
0x00334288  f4 03 00 aa     mov      x20, x0
0x0033428c  e0 03 1a aa     mov      x0, x26
0x00334290  83 b6 04 94     bl       #0x461c9c
0x00334294  e0 03 13 aa     mov      x0, x19
0x00334298  81 b6 04 94     bl       #0x461c9c
0x0033429c  56 0c 00 d0     adrp     x22, #0x4be000
0x003342a0  14 02 00 b4     cbz      x20, #0x3342e0
0x003342a4  c1 6e 42 f9     ldr      x1, [x22, #0x4d8]
0x003342a8  e0 03 14 aa     mov      x0, x20
0x003342ac  70 b6 04 94     bl       #0x461c6c
0x003342b0  0a 40 60 1e     fmov     d10, d0
0x003342b4  2b 40 60 1e     fmov     d11, d1
0x003342b8  4c 40 60 1e     fmov     d12, d2
0x003342bc  6d 40 60 1e     fmov     d13, d3
0x003342c0  48 0c 00 f0     adrp     x8, #0x4bf000
0x003342c4  01 c9 40 f9     ldr      x1, [x8, #0x190]
0x003342c8  e0 03 14 aa     mov      x0, x20
0x003342cc  68 b6 04 94     bl       #0x461c6c
0x003342d0  a8 c3 04 d1     sub      x8, x29, #0x130
0x003342d4  00 01 10 fc     stur     d0, [x8, #-0x100]
0x003342d8  49 40 60 1e     fmov     d9, d2
0x003342dc  17 00 00 14     b        #0x334338
0x003342e0  88 0c 00 90     adrp     x8, #0x4c4000
0x003342e4  00 95 40 f9     ldr      x0, [x8, #0x128]
0x003342e8  48 0c 00 d0     adrp     x8, #0x4be000
0x003342ec  01 f9 44 f9     ldr      x1, [x8, #0x9f0]
0x003342f0  5f b6 04 94     bl       #0x461c6c
0x003342f4  fd 03 1d aa     mov      x29, x29
0x003342f8  75 b6 04 94     bl       #0x461ccc
0x003342fc  f3 03 00 aa     mov      x19, x0
0x00334300  c1 6e 42 f9     ldr      x1, [x22, #0x4d8]
0x00334304  5a b6 04 94     bl       #0x461c6c
0x00334308  0a 40 60 1e     fmov     d10, d0
0x0033430c  2b 40 60 1e     fmov     d11, d1
0x00334310  4c 40 60 1e     fmov     d12, d2
0x00334314  6d 40 60 1e     fmov     d13, d3
0x00334318  e0 03 13 aa     mov      x0, x19
0x0033431c  60 b6 04 94     bl       #0x461c9c
0x00334320  68 0b 00 90     adrp     x8, #0x4a0000
0x00334324  08 a9 41 f9     ldr      x8, [x8, #0x350]
0x00334328  00 01 40 fd     ldr      d0, [x8]
0x0033432c  a9 c3 04 d1     sub      x9, x29, #0x130
0x00334330  20 01 10 fc     stur     d0, [x9, #-0x100]
0x00334334  09 09 40 fd     ldr      d9, [x8, #0x10]
0x00334338  48 0c 00 d0     adrp     x8, #0x4be000
0x0033433c  01 f9 41 f9     ldr      x1, [x8, #0x3f0]
0x00334340  a8 23 00 d1     sub      x8, x29, #8
0x00334344  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x00334348  49 b6 04 94     bl       #0x461c6c
0x0033434c  fd 03 1d aa     mov      x29, x29
0x00334350  5f b6 04 94     bl       #0x461ccc
0x00334354  f3 03 00 aa     mov      x19, x0
0x00334358  48 0c 00 d0     adrp     x8, #0x4be000
0x0033435c  01 fd 41 f9     ldr      x1, [x8, #0x3f8]
0x00334360  43 b6 04 94     bl       #0x461c6c
0x00334364  fc 03 00 aa     mov      x28, x0
0x00334368  e0 03 13 aa     mov      x0, x19
0x0033436c  4c b6 04 94     bl       #0x461c9c
0x00334370  60 cf 40 f9     ldr      x0, [x27, #0x198]
0x00334374  e1 03 19 aa     mov      x1, x25
0x00334378  3d b6 04 94     bl       #0x461c6c
0x0033437c  fd 03 1d aa     mov      x29, x29
0x00334380  53 b6 04 94     bl       #0x461ccc
0x00334384  f9 03 00 aa     mov      x25, x0
0x00334388  68 0c 00 b0     adrp     x8, #0x4c1000
0x0033438c  01 4d 47 f9     ldr      x1, [x8, #0xe98]
0x00334390  37 b6 04 94     bl       #0x461c6c
0x00334394  f3 03 00 aa     mov      x19, x0
0x00334398  e0 03 19 aa     mov      x0, x25
0x0033439c  40 b6 04 94     bl       #0x461c9c
0x003343a0  a8 a3 04 d1     sub      x8, x29, #0x128
0x003343a4  09 01 10 fc     stur     d9, [x8, #-0x100]
0x003343a8  d3 03 00 b4     cbz      x19, #0x334420
0x003343ac  b9 5b 75 a9     ldp      x25, x22, [x29, #-0xb0]
0x003343b0  df 02 00 f9     str      xzr, [x22]
0x003343b4  3f 03 00 f9     str      xzr, [x25]
0x003343b8  ba 83 54 f8     ldur     x26, [x29, #-0xb8]
0x003343bc  5f 03 00 f9     str      xzr, [x26]
0x003343c0  08 fe e7 d2     mov      x8, #0x3ff0000000000000
0x003343c4  e8 02 00 f9     str      x8, [x23]
0x003343c8  e0 03 13 aa     mov      x0, x19
0x003343cc  e1 03 16 aa     mov      x1, x22
0x003343d0  e2 03 19 aa     mov      x2, x25
0x003343d4  e3 03 1a aa     mov      x3, x26
0x003343d8  e4 03 17 aa     mov      x4, x23
0x003343dc  a6 b0 fc 97     bl       #0x260674
0x003343e0  00 02 00 34     cbz      w0, #0x334420
0x003343e4  88 0c 00 90     adrp     x8, #0x4c4000
0x003343e8  00 49 40 f9     ldr      x0, [x8, #0x90]
0x003343ec  c0 02 40 fd     ldr      d0, [x22]
0x003343f0  21 03 40 fd     ldr      d1, [x25]
0x003343f4  42 03 40 fd     ldr      d2, [x26]
0x003343f8  e3 02 40 fd     ldr      d3, [x23]
0x003343fc  68 20 60 1e     fcmp     d3, #0.0
0x00334400  04 10 6e 1e     fmov     d4, #1.00000000
0x00334404  83 9c 63 1e     fcsel    d3, d4, d3, ls
0x00334408  48 0c 00 d0     adrp     x8, #0x4be000
0x0033440c  01 7d 44 f9     ldr      x1, [x8, #0x8f8]
0x00334410  17 b6 04 94     bl       #0x461c6c
0x00334414  fd 03 1d aa     mov      x29, x29
0x00334418  2d b6 04 94     bl       #0x461ccc
0x0033441c  0d 00 00 14     b        #0x334450
0x00334420  88 0c 00 90     adrp     x8, #0x4c4000
0x00334424  00 49 40 f9     ldr      x0, [x8, #0x90]
0x00334428  9f 0b 00 f1     cmp      x28, #2
0x0033442c  81 00 00 54     b.ne     #0x33443c
0x00334430  48 0c 00 d0     adrp     x8, #0x4be000
0x00334434  01 2d 42 f9     ldr      x1, [x8, #0x458]
0x00334438  03 00 00 14     b        #0x334444
0x0033443c  48 0c 00 d0     adrp     x8, #0x4be000
0x00334440  01 29 42 f9     ldr      x1, [x8, #0x450]
0x00334444  0a b6 04 94     bl       #0x461c6c
0x00334448  fd 03 1d aa     mov      x29, x29
0x0033444c  20 b6 04 94     bl       #0x461ccc
0x00334450  a8 83 00 d1     sub      x8, x29, #0x20
0x00334454  00 01 10 f8     stur     x0, [x8, #-0x100]
0x00334458  a8 23 00 d1     sub      x8, x29, #8
0x0033445c  1b 01 50 f8     ldur     x27, [x8, #-0x100]
0x00334460  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334464  01 09 47 f9     ldr      x1, [x8, #0xe10]
0x00334468  e0 03 1b aa     mov      x0, x27
0x0033446c  a8 03 05 d1     sub      x8, x29, #0x140
0x00334470  01 01 10 f8     stur     x1, [x8, #-0x100]
0x00334474  fe b5 04 94     bl       #0x461c6c
0x00334478  09 40 60 1e     fmov     d9, d0
0x0033447c  e0 03 1b aa     mov      x0, x27
0x00334480  e1 03 18 aa     mov      x1, x24
0x00334484  fa b5 04 94     bl       #0x461c6c
0x00334488  fd 03 1d aa     mov      x29, x29
0x0033448c  10 b6 04 94     bl       #0x461ccc
0x00334490  f3 03 00 aa     mov      x19, x0
0x00334494  49 03 00 94     bl       #0x3351b8
0x00334498  fd 03 1d aa     mov      x29, x29
0x0033449c  0c b6 04 94     bl       #0x461ccc
0x003344a0  f6 03 00 aa     mov      x22, x0
0x003344a4  e0 03 13 aa     mov      x0, x19
0x003344a8  fd b5 04 94     bl       #0x461c9c
0x003344ac  88 0c 00 90     adrp     x8, #0x4c4000
0x003344b0  00 51 40 f9     ldr      x0, [x8, #0xa0]
0x003344b4  48 0c 00 d0     adrp     x8, #0x4be000
0x003344b8  01 09 42 f9     ldr      x1, [x8, #0x410]
0x003344bc  ec b5 04 94     bl       #0x461c6c
0x003344c0  e2 03 00 aa     mov      x2, x0
0x003344c4  48 0c 00 d0     adrp     x8, #0x4be000
0x003344c8  01 0d 42 f9     ldr      x1, [x8, #0x418]
0x003344cc  e0 03 16 aa     mov      x0, x22
0x003344d0  e7 b5 04 94     bl       #0x461c6c
0x003344d4  c0 00 00 34     cbz      w0, #0x3344ec
0x003344d8  e0 03 16 aa     mov      x0, x22
0x003344dc  f3 b5 04 94     bl       #0x461ca8
0x003344e0  a8 03 03 d1     sub      x8, x29, #0xc0
0x003344e4  16 01 10 f8     stur     x22, [x8, #-0x100]
0x003344e8  03 00 00 14     b        #0x3344f4
0x003344ec  a8 03 03 d1     sub      x8, x29, #0xc0
0x003344f0  1f 01 10 f8     stur     xzr, [x8, #-0x100]
0x003344f4  a8 e3 04 d1     sub      x8, x29, #0x138
0x003344f8  16 01 10 f8     stur     x22, [x8, #-0x100]
0x003344fc  a8 83 04 d1     sub      x8, x29, #0x120
0x00334500  0d 01 10 fc     stur     d13, [x8, #-0x100]
0x00334504  a8 63 04 d1     sub      x8, x29, #0x118
0x00334508  0c 01 10 fc     stur     d12, [x8, #-0x100]
0x0033450c  a8 43 04 d1     sub      x8, x29, #0x110
0x00334510  0b 01 10 fc     stur     d11, [x8, #-0x100]
0x00334514  a8 23 04 d1     sub      x8, x29, #0x108
0x00334518  0a 01 10 fc     stur     d10, [x8, #-0x100]
0x0033451c  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334520  01 a9 46 f9     ldr      x1, [x8, #0xd50]
0x00334524  a8 e3 03 d1     sub      x8, x29, #0xf8
0x00334528  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x0033452c  d0 b5 04 94     bl       #0x461c6c
0x00334530  a8 f3 00 d1     sub      x8, x29, #0x3c
0x00334534  00 01 10 b8     stur     w0, [x8, #-0x100]
0x00334538  48 0c 00 d0     adrp     x8, #0x4be000
0x0033453c  01 01 43 f9     ldr      x1, [x8, #0x600]
0x00334540  e0 03 15 aa     mov      x0, x21
0x00334544  a8 a3 00 d1     sub      x8, x29, #0x28
0x00334548  01 01 10 f8     stur     x1, [x8, #-0x100]
0x0033454c  c8 b5 04 94     bl       #0x461c6c
0x00334550  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334554  1a 79 46 f9     ldr      x26, [x8, #0xcf0]
0x00334558  56 0c 00 d0     adrp     x22, #0x4be000
0x0033455c  4e 0c 00 d0     adrp     x14, #0x4be000
0x00334560  1f 04 00 f1     cmp      x0, #1
0x00334564  a8 63 00 d1     sub      x8, x29, #0x18
0x00334568  15 01 10 f8     stur     x21, [x8, #-0x100]
0x0033456c  a8 03 04 d1     sub      x8, x29, #0x100
0x00334570  14 01 10 f8     stur     x20, [x8, #-0x100]
0x00334574  cb 46 00 54     b.lt     #0x334e4c
0x00334578  a8 c3 00 d1     sub      x8, x29, #0x30
0x0033457c  1a 01 10 f8     stur     x26, [x8, #-0x100]
0x00334580  1a 00 80 d2     mov      x26, #0
0x00334584  48 0c 00 d0     adrp     x8, #0x4be000
0x00334588  08 9d 45 f9     ldr      x8, [x8, #0xb38]
0x0033458c  a8 03 13 f8     stur     x8, [x29, #-0xd0]
0x00334590  48 0c 00 f0     adrp     x8, #0x4bf000
0x00334594  08 19 46 f9     ldr      x8, [x8, #0xc30]
0x00334598  a9 23 01 d1     sub      x9, x29, #0x48
0x0033459c  28 01 10 f8     stur     x8, [x9, #-0x100]
0x003345a0  00 90 77 1e     fmov     d0, #-28.00000000
0x003345a4  48 0c 00 d0     adrp     x8, #0x4be000
0x003345a8  19 65 45 f9     ldr      x25, [x8, #0xac8]
0x003345ac  2f 29 60 1e     fadd     d15, d9, d0
0x003345b0  48 0c 00 d0     adrp     x8, #0x4be000
0x003345b4  08 a5 45 f9     ldr      x8, [x8, #0xb48]
0x003345b8  a8 03 15 f8     stur     x8, [x29, #-0xb0]
0x003345bc  68 0b 00 90     adrp     x8, #0x4a0000
0x003345c0  08 15 43 f9     ldr      x8, [x8, #0x628]
0x003345c4  08 01 40 f9     ldr      x8, [x8]
0x003345c8  a8 83 12 f8     stur     x8, [x29, #-0xd8]
0x003345cc  48 0c 00 d0     adrp     x8, #0x4be000
0x003345d0  09 a9 45 f9     ldr      x9, [x8, #0xb50]
0x003345d4  48 0c 00 d0     adrp     x8, #0x4be000
0x003345d8  08 1d 42 f9     ldr      x8, [x8, #0x438]
0x003345dc  a8 27 34 a9     stp      x8, x9, [x29, #-0xc0]
0x003345e0  68 0c 00 b0     adrp     x8, #0x4c1000
0x003345e4  08 0d 47 f9     ldr      x8, [x8, #0xe18]
0x003345e8  a9 43 01 d1     sub      x9, x29, #0x50
0x003345ec  28 01 10 f8     stur     x8, [x9, #-0x100]
0x003345f0  48 0c 00 f0     adrp     x8, #0x4bf000
0x003345f4  08 65 47 f9     ldr      x8, [x8, #0xec8]
0x003345f8  a9 63 01 d1     sub      x9, x29, #0x58
0x003345fc  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334600  48 0c 00 d0     adrp     x8, #0x4be000
0x00334604  08 1d 46 f9     ldr      x8, [x8, #0xc38]
0x00334608  a9 83 02 d1     sub      x9, x29, #0xa0
0x0033460c  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334610  48 0c 00 d0     adrp     x8, #0x4be000
0x00334614  08 f1 41 f9     ldr      x8, [x8, #0x3e0]
0x00334618  a9 a3 02 d1     sub      x9, x29, #0xa8
0x0033461c  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334620  9f 0b 00 f1     cmp      x28, #2
0x00334624  a8 01 80 52     mov      w8, #0xd
0x00334628  49 02 80 52     mov      w9, #0x12
0x0033462c  28 01 88 9a     csel     x8, x9, x8, eq
0x00334630  a9 c3 02 d1     sub      x9, x29, #0xb0
0x00334634  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334638  48 0c 00 d0     adrp     x8, #0x4be000
0x0033463c  08 19 46 f9     ldr      x8, [x8, #0xc30]
0x00334640  a9 e3 02 d1     sub      x9, x29, #0xb8
0x00334644  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334648  48 0c 00 d0     adrp     x8, #0x4be000
0x0033464c  08 dd 45 f9     ldr      x8, [x8, #0xbb8]
0x00334650  a9 83 01 d1     sub      x9, x29, #0x60
0x00334654  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334658  48 0c 00 d0     adrp     x8, #0x4be000
0x0033465c  08 6d 42 f9     ldr      x8, [x8, #0x4d8]
0x00334660  a9 a3 01 d1     sub      x9, x29, #0x68
0x00334664  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334668  48 0c 00 d0     adrp     x8, #0x4be000
0x0033466c  08 25 42 f9     ldr      x8, [x8, #0x448]
0x00334670  a9 c3 01 d1     sub      x9, x29, #0x70
0x00334674  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334678  48 0c 00 d0     adrp     x8, #0x4be000
0x0033467c  08 21 42 f9     ldr      x8, [x8, #0x440]
0x00334680  a8 83 13 f8     stur     x8, [x29, #-0xc8]
0x00334684  48 0c 00 d0     adrp     x8, #0x4be000
0x00334688  08 a1 45 f9     ldr      x8, [x8, #0xb40]
0x0033468c  a8 83 15 f8     stur     x8, [x29, #-0xa8]
0x00334690  48 0c 00 f0     adrp     x8, #0x4bf000
0x00334694  17 39 40 f9     ldr      x23, [x8, #0x70]
0x00334698  48 0c 00 d0     adrp     x8, #0x4be000
0x0033469c  08 9d 41 f9     ldr      x8, [x8, #0x338]
0x003346a0  a9 03 02 d1     sub      x9, x29, #0x80
0x003346a4  28 01 10 f8     stur     x8, [x9, #-0x100]
0x003346a8  48 0c 00 d0     adrp     x8, #0x4be000
0x003346ac  08 7d 43 f9     ldr      x8, [x8, #0x6f8]
0x003346b0  a8 03 12 f8     stur     x8, [x29, #-0xe0]
0x003346b4  68 0b 00 90     adrp     x8, #0x4a0000
0x003346b8  08 c5 41 f9     ldr      x8, [x8, #0x388]
0x003346bc  0d 01 40 fd     ldr      d13, [x8]
0x003346c0  68 0b 00 90     adrp     x8, #0x4a0000
0x003346c4  08 bd 41 f9     ldr      x8, [x8, #0x378]
0x003346c8  49 0c 00 f0     adrp     x9, #0x4bf000
0x003346cc  0a 01 40 fd     ldr      d10, [x8]
0x003346d0  48 0c 00 d0     adrp     x8, #0x4be000
0x003346d4  4a 0c 00 d0     adrp     x10, #0x4be000
0x003346d8  29 19 41 f9     ldr      x9, [x9, #0x230]
0x003346dc  a9 83 11 f8     stur     x9, [x29, #-0xe8]
0x003346e0  49 0c 00 d0     adrp     x9, #0x4be000
0x003346e4  4b 0c 00 d0     adrp     x11, #0x4be000
0x003346e8  08 65 47 f9     ldr      x8, [x8, #0xec8]
0x003346ec  a8 03 11 f8     stur     x8, [x29, #-0xf0]
0x003346f0  48 0c 00 d0     adrp     x8, #0x4be000
0x003346f4  4c 0c 00 f0     adrp     x12, #0x4bf000
0x003346f8  4a 55 47 f9     ldr      x10, [x10, #0xea8]
0x003346fc  aa 83 10 f8     stur     x10, [x29, #-0xf8]
0x00334700  4a 0c 00 d0     adrp     x10, #0x4be000
0x00334704  2d 09 e8 d2     mov      x13, #0x4049000000000000
0x00334708  29 79 45 f9     ldr      x9, [x9, #0xaf0]
0x0033470c  af 23 02 d1     sub      x15, x29, #0x88
0x00334710  e9 01 10 f8     stur     x9, [x15, #-0x100]
0x00334714  ae 01 67 9e     fmov     d14, x13
0x00334718  c9 09 e8 d2     mov      x9, #0x404e000000000000
0x0033471c  6b 31 42 f9     ldr      x11, [x11, #0x460]
0x00334720  ad 23 03 d1     sub      x13, x29, #0xc8
0x00334724  ab 01 10 f8     stur     x11, [x13, #-0x100]
0x00334728  2b 01 67 9e     fmov     d11, x9
0x0033472c  49 0c 00 f0     adrp     x9, #0x4bf000
0x00334730  e9 03 67 9e     fmov     d9, xzr
0x00334734  0c 90 62 1e     fmov     d12, #5.00000000
0x00334738  08 2d 42 f9     ldr      x8, [x8, #0x458]
0x0033473c  ab 43 03 d1     sub      x11, x29, #0xd0
0x00334740  68 01 10 f8     stur     x8, [x11, #-0x100]
0x00334744  88 fd 40 f9     ldr      x8, [x12, #0x1f8]
0x00334748  ab 63 03 d1     sub      x11, x29, #0xd8
0x0033474c  68 01 10 f8     stur     x8, [x11, #-0x100]
0x00334750  48 11 43 f9     ldr      x8, [x10, #0x620]
0x00334754  aa c3 03 d1     sub      x10, x29, #0xf0
0x00334758  48 01 10 f8     stur     x8, [x10, #-0x100]
0x0033475c  28 25 41 f9     ldr      x8, [x9, #0x248]
0x00334760  a9 83 03 d1     sub      x9, x29, #0xe0
0x00334764  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334768  68 0b 00 90     adrp     x8, #0x4a0000
0x0033476c  08 11 43 f9     ldr      x8, [x8, #0x620]
0x00334770  08 01 40 f9     ldr      x8, [x8]
0x00334774  a9 a3 03 d1     sub      x9, x29, #0xe8
0x00334778  28 01 10 f8     stur     x8, [x9, #-0x100]
0x0033477c  48 0c 00 d0     adrp     x8, #0x4be000
0x00334780  08 19 44 f9     ldr      x8, [x8, #0x830]
0x00334784  a9 43 02 d1     sub      x9, x29, #0x90
0x00334788  28 01 10 f8     stur     x8, [x9, #-0x100]
0x0033478c  c8 06 43 f9     ldr      x8, [x22, #0x608]
0x00334790  a9 63 02 d1     sub      x9, x29, #0x98
0x00334794  28 01 10 f8     stur     x8, [x9, #-0x100]
0x00334798  c8 3d 43 f9     ldr      x8, [x14, #0x678]
0x0033479c  a8 03 10 f8     stur     x8, [x29, #-0x100]
0x003347a0  a8 e3 01 d1     sub      x8, x29, #0x78
0x003347a4  17 01 10 f8     stur     x23, [x8, #-0x100]
0x003347a8  e0 03 15 aa     mov      x0, x21
0x003347ac  a8 63 02 d1     sub      x8, x29, #0x98
0x003347b0  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x003347b4  e2 03 1a aa     mov      x2, x26
0x003347b8  2d b5 04 94     bl       #0x461c6c
0x003347bc  fd 03 1d aa     mov      x29, x29
0x003347c0  43 b5 04 94     bl       #0x461ccc
0x003347c4  fc 03 00 aa     mov      x28, x0
0x003347c8  88 0c 00 90     adrp     x8, #0x4c4000
0x003347cc  00 a9 40 f9     ldr      x0, [x8, #0x150]
0x003347d0  f4 b4 04 94     bl       #0x461ba0
0x003347d4  00 90 65 1e     fmov     d0, #14.00000000
0x003347d8  a1 03 53 f8     ldur     x1, [x29, #-0xd0]
0x003347dc  21 41 60 1e     fmov     d1, d9
0x003347e0  e2 41 60 1e     fmov     d2, d15
0x003347e4  c3 41 60 1e     fmov     d3, d14
0x003347e8  21 b5 04 94     bl       #0x461c6c
0x003347ec  f8 03 00 aa     mov      x24, x0
0x003347f0  a8 23 01 d1     sub      x8, x29, #0x48
0x003347f4  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x003347f8  e2 03 1a aa     mov      x2, x26
0x003347fc  1c b5 04 94     bl       #0x461c6c
0x00334800  e0 03 18 aa     mov      x0, x24
0x00334804  e1 03 19 aa     mov      x1, x25
0x00334808  19 b5 04 94     bl       #0x461c6c
0x0033480c  fd 03 1d aa     mov      x29, x29
0x00334810  2f b5 04 94     bl       #0x461ccc
0x00334814  f3 03 00 aa     mov      x19, x0
0x00334818  00 30 67 1e     fmov     d0, #25.00000000
0x0033481c  a1 03 55 f8     ldur     x1, [x29, #-0xb0]
0x00334820  13 b5 04 94     bl       #0x461c6c
0x00334824  e0 03 13 aa     mov      x0, x19
0x00334828  1d b5 04 94     bl       #0x461c9c
0x0033482c  e0 03 18 aa     mov      x0, x24
0x00334830  e1 03 19 aa     mov      x1, x25
0x00334834  0e b5 04 94     bl       #0x461c6c
0x00334838  fd 03 1d aa     mov      x29, x29
0x0033483c  24 b5 04 94     bl       #0x461ccc
0x00334840  f3 03 00 aa     mov      x19, x0
0x00334844  a1 83 54 f8     ldur     x1, [x29, #-0xb8]
0x00334848  a2 83 52 f8     ldur     x2, [x29, #-0xd8]
0x0033484c  08 b5 04 94     bl       #0x461c6c
0x00334850  e0 03 13 aa     mov      x0, x19
0x00334854  12 b5 04 94     bl       #0x461c9c
0x00334858  e0 03 18 aa     mov      x0, x24
0x0033485c  a1 03 54 f8     ldur     x1, [x29, #-0xc0]
0x00334860  02 00 80 52     mov      w2, #0
0x00334864  02 b5 04 94     bl       #0x461c6c
0x00334868  e0 03 18 aa     mov      x0, x24
0x0033486c  a8 63 01 d1     sub      x8, x29, #0x58
0x00334870  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334874  e2 03 1b aa     mov      x2, x27
0x00334878  a8 43 01 d1     sub      x8, x29, #0x50
0x0033487c  03 01 50 f8     ldur     x3, [x8, #-0x100]
0x00334880  04 08 80 52     mov      w4, #0x40
0x00334884  fa b4 04 94     bl       #0x461c6c
0x00334888  a0 10 00 b0     adrp     x0, #0x549000
0x0033488c  00 00 2c 91     add      x0, x0, #0xb00
0x00334890  bc b3 04 94     bl       #0x461780
0x00334894  e0 01 00 b4     cbz      x0, #0x3348d0
0x00334898  c5 b4 04 94     bl       #0x461bac
0x0033489c  f4 03 00 aa     mov      x20, x0
0x003348a0  a8 a3 02 d1     sub      x8, x29, #0xa8
0x003348a4  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x003348a8  a8 83 02 d1     sub      x8, x29, #0xa0
0x003348ac  02 01 50 f8     ldur     x2, [x8, #-0x100]
0x003348b0  ef b4 04 94     bl       #0x461c6c
0x003348b4  c0 00 00 34     cbz      w0, #0x3348cc
0x003348b8  e0 03 14 aa     mov      x0, x20
0x003348bc  a8 83 02 d1     sub      x8, x29, #0xa0
0x003348c0  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x003348c4  22 00 80 52     mov      w2, #1
0x003348c8  e9 b4 04 94     bl       #0x461c6c
0x003348cc  74 01 00 b5     cbnz     x20, #0x3348f8
0x003348d0  88 0c 00 90     adrp     x8, #0x4c4000
0x003348d4  00 c1 40 f9     ldr      x0, [x8, #0x180]
0x003348d8  a8 e3 02 d1     sub      x8, x29, #0xb8
0x003348dc  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x003348e0  a8 c3 02 d1     sub      x8, x29, #0xb0
0x003348e4  02 01 50 f8     ldur     x2, [x8, #-0x100]
0x003348e8  e1 b4 04 94     bl       #0x461c6c
0x003348ec  fd 03 1d aa     mov      x29, x29
0x003348f0  f7 b4 04 94     bl       #0x461ccc
0x003348f4  f4 03 00 aa     mov      x20, x0
0x003348f8  88 0c 00 90     adrp     x8, #0x4c4000
0x003348fc  00 a5 40 f9     ldr      x0, [x8, #0x148]
0x00334900  a8 b4 04 94     bl       #0x461ba0
0x00334904  a8 83 01 d1     sub      x8, x29, #0x60
0x00334908  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x0033490c  e2 03 14 aa     mov      x2, x20
0x00334910  d7 b4 04 94     bl       #0x461c6c
0x00334914  f6 03 00 aa     mov      x22, x0
0x00334918  e0 03 18 aa     mov      x0, x24
0x0033491c  a8 a3 01 d1     sub      x8, x29, #0x68
0x00334920  15 01 50 f8     ldur     x21, [x8, #-0x100]
0x00334924  e1 03 15 aa     mov      x1, x21
0x00334928  d1 b4 04 94     bl       #0x461c6c
0x0033492c  e0 03 16 aa     mov      x0, x22
0x00334930  a1 03 50 f8     ldur     x1, [x29, #-0x100]
0x00334934  ce b4 04 94     bl       #0x461c6c
0x00334938  e0 03 16 aa     mov      x0, x22
0x0033493c  a8 c3 01 d1     sub      x8, x29, #0x70
0x00334940  17 01 50 f8     ldur     x23, [x8, #-0x100]
0x00334944  e1 03 17 aa     mov      x1, x23
0x00334948  42 02 80 52     mov      w2, #0x12
0x0033494c  c8 b4 04 94     bl       #0x461c6c
0x00334950  e0 03 16 aa     mov      x0, x22
0x00334954  a1 83 53 f8     ldur     x1, [x29, #-0xc8]
0x00334958  02 00 80 52     mov      w2, #0
0x0033495c  c4 b4 04 94     bl       #0x461c6c
0x00334960  e0 03 16 aa     mov      x0, x22
0x00334964  e1 03 19 aa     mov      x1, x25
0x00334968  c1 b4 04 94     bl       #0x461c6c
0x0033496c  fd 03 1d aa     mov      x29, x29
0x00334970  d7 b4 04 94     bl       #0x461ccc
0x00334974  f3 03 00 aa     mov      x19, x0
0x00334978  00 30 67 1e     fmov     d0, #25.00000000
0x0033497c  a1 03 55 f8     ldur     x1, [x29, #-0xb0]
0x00334980  bb b4 04 94     bl       #0x461c6c
0x00334984  e0 03 13 aa     mov      x0, x19
0x00334988  c5 b4 04 94     bl       #0x461c9c
0x0033498c  e0 03 16 aa     mov      x0, x22
0x00334990  e1 03 19 aa     mov      x1, x25
0x00334994  b6 b4 04 94     bl       #0x461c6c
0x00334998  fd 03 1d aa     mov      x29, x29
0x0033499c  cc b4 04 94     bl       #0x461ccc
0x003349a0  f3 03 00 aa     mov      x19, x0
0x003349a4  a1 83 54 f8     ldur     x1, [x29, #-0xb8]
0x003349a8  a2 83 52 f8     ldur     x2, [x29, #-0xd8]
0x003349ac  b0 b4 04 94     bl       #0x461c6c
0x003349b0  e0 03 13 aa     mov      x0, x19
0x003349b4  ba b4 04 94     bl       #0x461c9c
0x003349b8  e0 03 16 aa     mov      x0, x22
0x003349bc  a1 03 54 f8     ldur     x1, [x29, #-0xc0]
0x003349c0  22 00 80 52     mov      w2, #1
0x003349c4  aa b4 04 94     bl       #0x461c6c
0x003349c8  e0 03 18 aa     mov      x0, x24
0x003349cc  a1 83 55 f8     ldur     x1, [x29, #-0xa8]
0x003349d0  e2 03 16 aa     mov      x2, x22
0x003349d4  a6 b4 04 94     bl       #0x461c6c
0x003349d8  88 0c 00 90     adrp     x8, #0x4c4000
0x003349dc  00 ad 40 f9     ldr      x0, [x8, #0x158]
0x003349e0  70 b4 04 94     bl       #0x461ba0
0x003349e4  f3 03 00 aa     mov      x19, x0
0x003349e8  e0 03 18 aa     mov      x0, x24
0x003349ec  e1 03 15 aa     mov      x1, x21
0x003349f0  9f b4 04 94     bl       #0x461c6c
0x003349f4  04 50 66 1e     fmov     d4, #18.00000000
0x003349f8  e5 03 67 9e     fmov     d5, xzr
0x003349fc  46 b3 04 94     bl       #0x461714
0x00334a00  e0 03 13 aa     mov      x0, x19
0x00334a04  a1 03 53 f8     ldur     x1, [x29, #-0xd0]
0x00334a08  99 b4 04 94     bl       #0x461c6c
0x00334a0c  f5 03 00 aa     mov      x21, x0
0x00334a10  e1 03 17 aa     mov      x1, x23
0x00334a14  42 02 80 52     mov      w2, #0x12
0x00334a18  95 b4 04 94     bl       #0x461c6c
0x00334a1c  e0 03 1c aa     mov      x0, x28
0x00334a20  a8 e3 01 d1     sub      x8, x29, #0x78
0x00334a24  17 01 50 f8     ldur     x23, [x8, #-0x100]
0x00334a28  e1 03 17 aa     mov      x1, x23
0x00334a2c  90 b4 04 94     bl       #0x461c6c
0x00334a30  fd 03 1d aa     mov      x29, x29
0x00334a34  a6 b4 04 94     bl       #0x461ccc
0x00334a38  f3 03 00 aa     mov      x19, x0
0x00334a3c  a8 03 02 d1     sub      x8, x29, #0x80
0x00334a40  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334a44  8a b4 04 94     bl       #0x461c6c
0x00334a48  00 02 00 b4     cbz      x0, #0x334a88
0x00334a4c  e0 03 1c aa     mov      x0, x28
0x00334a50  e1 03 17 aa     mov      x1, x23
0x00334a54  86 b4 04 94     bl       #0x461c6c
0x00334a58  fd 03 1d aa     mov      x29, x29
0x00334a5c  9c b4 04 94     bl       #0x461ccc
0x00334a60  fb 03 00 aa     mov      x27, x0
0x00334a64  e0 03 15 aa     mov      x0, x21
0x00334a68  a1 03 52 f8     ldur     x1, [x29, #-0xe0]
0x00334a6c  e2 03 1b aa     mov      x2, x27
0x00334a70  7f b4 04 94     bl       #0x461c6c
0x00334a74  e0 03 1b aa     mov      x0, x27
0x00334a78  a8 23 00 d1     sub      x8, x29, #8
0x00334a7c  1b 01 50 f8     ldur     x27, [x8, #-0x100]
0x00334a80  87 b4 04 94     bl       #0x461c9c
0x00334a84  06 00 00 14     b        #0x334a9c
0x00334a88  e0 03 15 aa     mov      x0, x21
0x00334a8c  a1 03 52 f8     ldur     x1, [x29, #-0xe0]
0x00334a90  a2 10 00 b0     adrp     x2, #0x549000
0x00334a94  42 00 2b 91     add      x2, x2, #0xac0
0x00334a98  75 b4 04 94     bl       #0x461c6c
0x00334a9c  e0 03 13 aa     mov      x0, x19
0x00334aa0  7f b4 04 94     bl       #0x461c9c
0x00334aa4  88 0c 00 90     adrp     x8, #0x4c4000
0x00334aa8  00 0d 41 f9     ldr      x0, [x8, #0x218]
0x00334aac  a8 e3 00 d1     sub      x8, x29, #0x38
0x00334ab0  08 01 50 f8     ldur     x8, [x8, #-0x100]
0x00334ab4  1f 01 1a eb     cmp      x8, x26
0x00334ab8  a1 0d 6a 1e     fcsel    d1, d13, d10, eq
0x00334abc  a1 83 51 f8     ldur     x1, [x29, #-0xe8]
0x00334ac0  00 41 60 1e     fmov     d0, d8
0x00334ac4  6a b4 04 94     bl       #0x461c6c
0x00334ac8  fd 03 1d aa     mov      x29, x29
0x00334acc  80 b4 04 94     bl       #0x461ccc
0x00334ad0  f3 03 00 aa     mov      x19, x0
0x00334ad4  e0 03 15 aa     mov      x0, x21
0x00334ad8  a1 03 51 f8     ldur     x1, [x29, #-0xf0]
0x00334adc  e2 03 13 aa     mov      x2, x19
0x00334ae0  63 b4 04 94     bl       #0x461c6c
0x00334ae4  e0 03 13 aa     mov      x0, x19
0x00334ae8  6d b4 04 94     bl       #0x461c9c
0x00334aec  e0 03 15 aa     mov      x0, x21
0x00334af0  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x00334af4  a8 83 00 d1     sub      x8, x29, #0x20
0x00334af8  02 01 50 f8     ldur     x2, [x8, #-0x100]
0x00334afc  5c b4 04 94     bl       #0x461c6c
0x00334b00  e0 03 15 aa     mov      x0, x21
0x00334b04  a1 83 53 f8     ldur     x1, [x29, #-0xc8]
0x00334b08  02 00 80 52     mov      w2, #0
0x00334b0c  58 b4 04 94     bl       #0x461c6c
0x00334b10  e0 03 16 aa     mov      x0, x22
0x00334b14  a8 23 02 d1     sub      x8, x29, #0x88
0x00334b18  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334b1c  54 b4 04 94     bl       #0x461c6c
0x00334b20  fd 03 1d aa     mov      x29, x29
0x00334b24  6a b4 04 94     bl       #0x461ccc
0x00334b28  f3 03 00 aa     mov      x19, x0
0x00334b2c  a1 83 55 f8     ldur     x1, [x29, #-0xa8]
0x00334b30  e2 03 15 aa     mov      x2, x21
0x00334b34  4e b4 04 94     bl       #0x461c6c
0x00334b38  e0 03 13 aa     mov      x0, x19
0x00334b3c  58 b4 04 94     bl       #0x461c9c
0x00334b40  a8 f3 00 d1     sub      x8, x29, #0x3c
0x00334b44  08 01 50 b8     ldur     w8, [x8, #-0x100]
0x00334b48  88 11 00 34     cbz      w8, #0x334d78
0x00334b4c  a8 03 03 d1     sub      x8, x29, #0xc0
0x00334b50  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x00334b54  e1 03 1a aa     mov      x1, x26
0x00334b58  e3 e3 00 94     bl       #0x36dae4
0x00334b5c  1f 04 00 f1     cmp      x0, #1
0x00334b60  cb 10 00 54     b.lt     #0x334d78
0x00334b64  f3 03 00 aa     mov      x19, x0
0x00334b68  88 0c 00 90     adrp     x8, #0x4c4000
0x00334b6c  00 ad 40 f9     ldr      x0, [x8, #0x158]
0x00334b70  0f b4 04 94     bl       #0x461bac
0x00334b74  fb 03 00 aa     mov      x27, x0
0x00334b78  f4 bc ff 97     bl       #0x323f48
0x00334b7c  fd 03 1d aa     mov      x29, x29
0x00334b80  53 b4 04 94     bl       #0x461ccc
0x00334b84  f7 03 00 aa     mov      x23, x0
0x00334b88  e0 03 1b aa     mov      x0, x27
0x00334b8c  a8 23 03 d1     sub      x8, x29, #0xc8
0x00334b90  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334b94  e2 03 17 aa     mov      x2, x23
0x00334b98  35 b4 04 94     bl       #0x461c6c
0x00334b9c  e0 03 17 aa     mov      x0, x23
0x00334ba0  3f b4 04 94     bl       #0x461c9c
0x00334ba4  88 0c 00 90     adrp     x8, #0x4c4000
0x00334ba8  00 49 40 f9     ldr      x0, [x8, #0x90]
0x00334bac  a8 43 03 d1     sub      x8, x29, #0xd0
0x00334bb0  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334bb4  2e b4 04 94     bl       #0x461c6c
0x00334bb8  fd 03 1d aa     mov      x29, x29
0x00334bbc  44 b4 04 94     bl       #0x461ccc
0x00334bc0  f7 03 00 aa     mov      x23, x0
0x00334bc4  e0 03 1b aa     mov      x0, x27
0x00334bc8  a1 83 50 f8     ldur     x1, [x29, #-0xf8]
0x00334bcc  e2 03 17 aa     mov      x2, x23
0x00334bd0  27 b4 04 94     bl       #0x461c6c
0x00334bd4  e0 03 17 aa     mov      x0, x23
0x00334bd8  31 b4 04 94     bl       #0x461c9c
0x00334bdc  88 0c 00 90     adrp     x8, #0x4c4000
0x00334be0  00 0d 41 f9     ldr      x0, [x8, #0x218]
0x00334be4  00 30 65 1e     fmov     d0, #12.50000000
0x00334be8  a1 83 51 f8     ldur     x1, [x29, #-0xe8]
0x00334bec  a1 41 60 1e     fmov     d1, d13
0x00334bf0  1f b4 04 94     bl       #0x461c6c
0x00334bf4  fd 03 1d aa     mov      x29, x29
0x00334bf8  35 b4 04 94     bl       #0x461ccc
0x00334bfc  f7 03 00 aa     mov      x23, x0
0x00334c00  e0 03 1b aa     mov      x0, x27
0x00334c04  a1 03 51 f8     ldur     x1, [x29, #-0xf0]
0x00334c08  e2 03 17 aa     mov      x2, x23
0x00334c0c  18 b4 04 94     bl       #0x461c6c
0x00334c10  e0 03 17 aa     mov      x0, x23
0x00334c14  22 b4 04 94     bl       #0x461c9c
0x00334c18  e0 03 1b aa     mov      x0, x27
0x00334c1c  a8 63 03 d1     sub      x8, x29, #0xd8
0x00334c20  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334c24  22 00 80 52     mov      w2, #1
0x00334c28  11 b4 04 94     bl       #0x461c6c
0x00334c2c  7f 92 01 f1     cmp      x19, #0x64
0x00334c30  82 02 00 54     b.hs     #0x334c80
0x00334c34  88 0c 00 90     adrp     x8, #0x4c4000
0x00334c38  00 5d 40 f9     ldr      x0, [x8, #0xb8]
0x00334c3c  f3 0f 1f f8     str      x19, [sp, #-0x10]!
0x00334c40  a8 c3 03 d1     sub      x8, x29, #0xf0
0x00334c44  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334c48  a2 10 00 b0     adrp     x2, #0x549000
0x00334c4c  42 00 29 91     add      x2, x2, #0xa40
0x00334c50  07 b4 04 94     bl       #0x461c6c
0x00334c54  fd 03 1d aa     mov      x29, x29
0x00334c58  1d b4 04 94     bl       #0x461ccc
0x00334c5c  ff 43 00 91     add      sp, sp, #0x10
0x00334c60  f3 03 00 aa     mov      x19, x0
0x00334c64  e0 03 1b aa     mov      x0, x27
0x00334c68  a1 03 52 f8     ldur     x1, [x29, #-0xe0]
0x00334c6c  e2 03 13 aa     mov      x2, x19
0x00334c70  ff b3 04 94     bl       #0x461c6c
0x00334c74  e0 03 13 aa     mov      x0, x19
0x00334c78  09 b4 04 94     bl       #0x461c9c
0x00334c7c  06 00 00 14     b        #0x334c94
0x00334c80  e0 03 1b aa     mov      x0, x27
0x00334c84  a1 03 52 f8     ldur     x1, [x29, #-0xe0]
0x00334c88  a2 10 00 b0     adrp     x2, #0x549000
0x00334c8c  42 00 2a 91     add      x2, x2, #0xa80
0x00334c90  f7 b3 04 94     bl       #0x461c6c
0x00334c94  e0 03 1b aa     mov      x0, x27
0x00334c98  a1 03 54 f8     ldur     x1, [x29, #-0xc0]
0x00334c9c  22 00 80 52     mov      w2, #1
0x00334ca0  f3 b3 04 94     bl       #0x461c6c
0x00334ca4  e0 03 1b aa     mov      x0, x27
0x00334ca8  a1 83 53 f8     ldur     x1, [x29, #-0xc8]
0x00334cac  02 00 80 52     mov      w2, #0
0x00334cb0  ef b3 04 94     bl       #0x461c6c
0x00334cb4  08 02 f0 92     mov      x8, #0x7fefffffffffffff
0x00334cb8  00 01 67 9e     fmov     d0, x8
0x00334cbc  01 70 66 1e     fmov     d1, #19.00000000
0x00334cc0  e0 03 1b aa     mov      x0, x27
0x00334cc4  a8 83 03 d1     sub      x8, x29, #0xe0
0x00334cc8  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334ccc  e8 b3 04 94     bl       #0x461c6c
0x00334cd0  01 90 64 1e     fmov     d1, #10.00000000
0x00334cd4  00 28 61 1e     fadd     d0, d0, d1
0x00334cd8  01 70 66 1e     fmov     d1, #19.00000000
0x00334cdc  02 68 61 1e     fmaxnm   d2, d0, d1
0x00334ce0  e0 39 62 1e     fsub     d0, d15, d2
0x00334ce4  00 28 6c 1e     fadd     d0, d0, d12
0x00334ce8  01 90 72 1e     fmov     d1, #-5.00000000
0x00334cec  03 70 66 1e     fmov     d3, #19.00000000
0x00334cf0  e0 03 1b aa     mov      x0, x27
0x00334cf4  a1 03 50 f8     ldur     x1, [x29, #-0x100]
0x00334cf8  dd b3 04 94     bl       #0x461c6c
0x00334cfc  e0 03 1b aa     mov      x0, x27
0x00334d00  e1 03 19 aa     mov      x1, x25
0x00334d04  da b3 04 94     bl       #0x461c6c
0x00334d08  fd 03 1d aa     mov      x29, x29
0x00334d0c  f0 b3 04 94     bl       #0x461ccc
0x00334d10  f3 03 00 aa     mov      x19, x0
0x00334d14  00 70 64 1e     fmov     d0, #9.50000000
0x00334d18  a1 03 55 f8     ldur     x1, [x29, #-0xb0]
0x00334d1c  d4 b3 04 94     bl       #0x461c6c
0x00334d20  e0 03 13 aa     mov      x0, x19
0x00334d24  de b3 04 94     bl       #0x461c9c
0x00334d28  e0 03 1b aa     mov      x0, x27
0x00334d2c  e1 03 19 aa     mov      x1, x25
0x00334d30  cf b3 04 94     bl       #0x461c6c
0x00334d34  fd 03 1d aa     mov      x29, x29
0x00334d38  e5 b3 04 94     bl       #0x461ccc
0x00334d3c  f3 03 00 aa     mov      x19, x0
0x00334d40  a1 83 54 f8     ldur     x1, [x29, #-0xb8]
0x00334d44  a8 a3 03 d1     sub      x8, x29, #0xe8
0x00334d48  02 01 50 f8     ldur     x2, [x8, #-0x100]
0x00334d4c  c8 b3 04 94     bl       #0x461c6c
0x00334d50  e0 03 13 aa     mov      x0, x19
0x00334d54  d2 b3 04 94     bl       #0x461c9c
0x00334d58  e0 03 18 aa     mov      x0, x24
0x00334d5c  a1 83 55 f8     ldur     x1, [x29, #-0xa8]
0x00334d60  e2 03 1b aa     mov      x2, x27
0x00334d64  c2 b3 04 94     bl       #0x461c6c
0x00334d68  e0 03 1b aa     mov      x0, x27
0x00334d6c  cc b3 04 94     bl       #0x461c9c
0x00334d70  a8 23 00 d1     sub      x8, x29, #8
0x00334d74  1b 01 50 f8     ldur     x27, [x8, #-0x100]
0x00334d78  e0 03 1b aa     mov      x0, x27
0x00334d7c  a8 43 00 d1     sub      x8, x29, #0x10
0x00334d80  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334d84  ba b3 04 94     bl       #0x461c6c
0x00334d88  fd 03 1d aa     mov      x29, x29
0x00334d8c  d0 b3 04 94     bl       #0x461ccc
0x00334d90  f3 03 00 aa     mov      x19, x0
0x00334d94  a1 83 55 f8     ldur     x1, [x29, #-0xa8]
0x00334d98  e2 03 18 aa     mov      x2, x24
0x00334d9c  b4 b3 04 94     bl       #0x461c6c
0x00334da0  e0 03 13 aa     mov      x0, x19
0x00334da4  be b3 04 94     bl       #0x461c9c
0x00334da8  e0 03 1b aa     mov      x0, x27
0x00334dac  a8 c3 00 d1     sub      x8, x29, #0x30
0x00334db0  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334db4  ae b3 04 94     bl       #0x461c6c
0x00334db8  fd 03 1d aa     mov      x29, x29
0x00334dbc  c4 b3 04 94     bl       #0x461ccc
0x00334dc0  f3 03 00 aa     mov      x19, x0
0x00334dc4  a8 43 02 d1     sub      x8, x29, #0x90
0x00334dc8  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334dcc  e2 03 18 aa     mov      x2, x24
0x00334dd0  a7 b3 04 94     bl       #0x461c6c
0x00334dd4  e0 03 13 aa     mov      x0, x19
0x00334dd8  b1 b3 04 94     bl       #0x461c9c
0x00334ddc  29 29 6b 1e     fadd     d9, d9, d11
0x00334de0  e0 03 15 aa     mov      x0, x21
0x00334de4  ae b3 04 94     bl       #0x461c9c
0x00334de8  e0 03 16 aa     mov      x0, x22
0x00334dec  ac b3 04 94     bl       #0x461c9c
0x00334df0  e0 03 14 aa     mov      x0, x20
0x00334df4  aa b3 04 94     bl       #0x461c9c
0x00334df8  e0 03 18 aa     mov      x0, x24
0x00334dfc  a8 b3 04 94     bl       #0x461c9c
0x00334e00  e0 03 1c aa     mov      x0, x28
0x00334e04  a6 b3 04 94     bl       #0x461c9c
0x00334e08  5a 07 00 91     add      x26, x26, #1
0x00334e0c  a8 63 00 d1     sub      x8, x29, #0x18
0x00334e10  15 01 50 f8     ldur     x21, [x8, #-0x100]
0x00334e14  e0 03 15 aa     mov      x0, x21
0x00334e18  a8 a3 00 d1     sub      x8, x29, #0x28
0x00334e1c  01 01 50 f8     ldur     x1, [x8, #-0x100]
0x00334e20  93 b3 04 94     bl       #0x461c6c
0x00334e24  5f 03 00 eb     cmp      x26, x0
0x00334e28  0b cc ff 54     b.lt     #0x3347a8
0x00334e2c  00 90 74 1e     fmov     d0, #-10.00000000
0x00334e30  20 29 60 1e     fadd     d0, d9, d0
0x00334e34  a8 a3 00 d1     sub      x8, x29, #0x28
0x00334e38  1c 01 50 f8     ldur     x28, [x8, #-0x100]
0x00334e3c  a8 c3 00 d1     sub      x8, x29, #0x30
0x00334e40  1a 01 50 f8     ldur     x26, [x8, #-0x100]
0x00334e44  56 0c 00 d0     adrp     x22, #0x4be000
0x00334e48  04 00 00 14     b        #0x334e58
0x00334e4c  00 90 74 1e     fmov     d0, #-10.00000000
0x00334e50  a8 a3 00 d1     sub      x8, x29, #0x28
0x00334e54  1c 01 50 f8     ldur     x28, [x8, #-0x100]
0x00334e58  e1 03 67 9e     fmov     d1, xzr
0x00334e5c  01 68 61 1e     fmaxnm   d1, d0, d1
0x00334e60  00 10 6c 1e     fmov     d0, #0.50000000
0x00334e64  a1 83 15 fc     stur     d1, [x29, #-0xa8]
0x00334e68  2a 08 60 1e     fmul     d10, d1, d0
0x00334e6c  e0 03 1b aa     mov      x0, x27
0x00334e70  e1 03 1a aa     mov      x1, x26
0x00334e74  7e b3 04 94     bl       #0x461c6c
0x00334e78  fd 03 1d aa     mov      x29, x29
0x00334e7c  94 b3 04 94     bl       #0x461ccc
0x00334e80  f3 03 00 aa     mov      x19, x0
0x00334e84  e1 03 1c aa     mov      x1, x28
0x00334e88  79 b3 04 94     bl       #0x461c6c
0x00334e8c  f4 03 00 aa     mov      x20, x0
0x00334e90  e0 03 13 aa     mov      x0, x19
0x00334e94  82 b3 04 94     bl       #0x461c9c
0x00334e98  9f 06 00 f1     cmp      x20, #1
0x00334e9c  eb 08 00 54     b.lt     #0x334fb8
0x00334ea0  14 00 80 d2     mov      x20, #0
0x00334ea4  00 10 6e 1e     fmov     d0, #1.00000000
0x00334ea8  4c 69 60 1e     fmaxnm   d12, d10, d0
0x00334eac  d5 06 43 f9     ldr      x21, [x22, #0x608]
0x00334eb0  48 0c 00 d0     adrp     x8, #0x4be000
0x00334eb4  16 b9 43 f9     ldr      x22, [x8, #0x770]
0x00334eb8  68 0c 00 b0     adrp     x8, #0x4c1000
0x00334ebc  17 11 47 f9     ldr      x23, [x8, #0xe20]
0x00334ec0  48 0c 00 d0     adrp     x8, #0x4be000
0x00334ec4  18 3d 43 f9     ldr      x24, [x8, #0x678]
0x00334ec8  0f 50 66 1e     fmov     d15, #18.00000000
0x00334ecc  e0 03 1b aa     mov      x0, x27
0x00334ed0  e1 03 1a aa     mov      x1, x26
0x00334ed4  66 b3 04 94     bl       #0x461c6c
0x00334ed8  fd 03 1d aa     mov      x29, x29
0x00334edc  7c b3 04 94     bl       #0x461ccc
0x00334ee0  f3 03 00 aa     mov      x19, x0
0x00334ee4  e1 03 15 aa     mov      x1, x21
0x00334ee8  e2 03 14 aa     mov      x2, x20
0x00334eec  60 b3 04 94     bl       #0x461c6c
0x00334ef0  fd 03 1d aa     mov      x29, x29
0x00334ef4  76 b3 04 94     bl       #0x461ccc
0x00334ef8  f9 03 00 aa     mov      x25, x0
0x00334efc  e0 03 13 aa     mov      x0, x19
0x00334f00  67 b3 04 94     bl       #0x461c9c
0x00334f04  e0 03 19 aa     mov      x0, x25
0x00334f08  e1 03 16 aa     mov      x1, x22
0x00334f0c  58 b3 04 94     bl       #0x461c6c
0x00334f10  f5 b1 04 94     bl       #0x4616e4
0x00334f14  00 38 6a 1e     fsub     d0, d0, d10
0x00334f18  00 18 6c 1e     fdiv     d0, d0, d12
0x00334f1c  01 10 6e 1e     fmov     d1, #1.00000000
0x00334f20  0b 84 40 1f     fmsub    d11, d0, d0, d1
0x00334f24  68 09 6f 1e     fmul     d8, d11, d15
0x00334f28  e0 03 19 aa     mov      x0, x25
0x00334f2c  e1 03 16 aa     mov      x1, x22
0x00334f30  4f b3 04 94     bl       #0x461c6c
0x00334f34  29 40 60 1e     fmov     d9, d1
0x00334f38  4d 40 60 1e     fmov     d13, d2
0x00334f3c  6e 40 60 1e     fmov     d14, d3
0x00334f40  e0 03 1b aa     mov      x0, x27
0x00334f44  e1 03 17 aa     mov      x1, x23
0x00334f48  49 b3 04 94     bl       #0x461c6c
0x00334f4c  60 89 6f 1e     fnmul    d0, d11, d15
0x00334f50  1f 00 00 71     cmp      w0, #0
0x00334f54  00 1d 60 1e     fcsel    d0, d8, d0, ne
0x00334f58  01 90 65 1e     fmov     d1, #14.00000000
0x00334f5c  00 28 61 1e     fadd     d0, d0, d1
0x00334f60  e0 03 19 aa     mov      x0, x25
0x00334f64  e1 03 18 aa     mov      x1, x24
0x00334f68  21 41 60 1e     fmov     d1, d9
0x00334f6c  a2 41 60 1e     fmov     d2, d13
0x00334f70  c3 41 60 1e     fmov     d3, d14
0x00334f74  3e b3 04 94     bl       #0x461c6c
0x00334f78  e0 03 19 aa     mov      x0, x25
0x00334f7c  48 b3 04 94     bl       #0x461c9c
0x00334f80  94 06 00 91     add      x20, x20, #1
0x00334f84  e0 03 1b aa     mov      x0, x27
0x00334f88  e1 03 1a aa     mov      x1, x26
0x00334f8c  38 b3 04 94     bl       #0x461c6c
0x00334f90  fd 03 1d aa     mov      x29, x29
0x00334f94  4e b3 04 94     bl       #0x461ccc
0x00334f98  f3 03 00 aa     mov      x19, x0
0x00334f9c  e1 03 1c aa     mov      x1, x28
0x00334fa0  33 b3 04 94     bl       #0x461c6c
0x00334fa4  f9 03 00 aa     mov      x25, x0
0x00334fa8  e0 03 13 aa     mov      x0, x19
0x00334fac  3c b3 04 94     bl       #0x461c9c
0x00334fb0  9f 02 19 eb     cmp      x20, x25
0x00334fb4  cb f8 ff 54     b.lt     #0x334ecc
0x00334fb8  00 90 66 1e     fmov     d0, #20.00000000
0x00334fbc  a8 c3 04 d1     sub      x8, x29, #0x130
0x00334fc0  01 01 50 fc     ldur     d1, [x8, #-0x100]
0x00334fc4  29 28 60 1e     fadd     d9, d1, d0
0x00334fc8  a8 23 04 d1     sub      x8, x29, #0x108
0x00334fcc  0b 01 50 fc     ldur     d11, [x8, #-0x100]
0x00334fd0  60 41 60 1e     fmov     d0, d11
0x00334fd4  a8 43 04 d1     sub      x8, x29, #0x110
0x00334fd8  0c 01 50 fc     ldur     d12, [x8, #-0x100]
0x00334fdc  81 41 60 1e     fmov     d1, d12
0x00334fe0  a8 63 04 d1     sub      x8, x29, #0x118
0x00334fe4  0e 01 50 fc     ldur     d14, [x8, #-0x100]
0x00334fe8  c2 41 60 1e     fmov     d2, d14
0x00334fec  a8 83 04 d1     sub      x8, x29, #0x120
0x00334ff0  0f 01 50 fc     ldur     d15, [x8, #-0x100]
0x00334ff4  e3 41 60 1e     fmov     d3, d15
0x00334ff8  af b1 04 94     bl       #0x4616b4
0x00334ffc  a8 a3 04 d1     sub      x8, x29, #0x128
0x00335000  01 01 50 fc     ldur     d1, [x8, #-0x100]
0x00335004  00 38 61 1e     fsub     d0, d0, d1
0x00335008  01 90 76 1e     fmov     d1, #-20.00000000
0x0033500c  00 28 61 1e     fadd     d0, d0, d1
0x00335010  a1 83 55 fc     ldur     d1, [x29, #-0xa8]
0x00335014  08 38 61 1e     fsub     d8, d0, d1
0x00335018  00 21 69 1e     fcmp     d8, d9
0x0033501c  a5 01 00 54     b.pl     #0x335050
0x00335020  a8 43 00 d1     sub      x8, x29, #0x10
0x00335024  13 01 50 f8     ldur     x19, [x8, #-0x100]
0x00335028  a8 63 00 d1     sub      x8, x29, #0x18
0x0033502c  14 01 50 f8     ldur     x20, [x8, #-0x100]
0x00335030  a8 03 04 d1     sub      x8, x29, #0x100
0x00335034  15 01 50 f8     ldur     x21, [x8, #-0x100]
0x00335038  a8 e3 04 d1     sub      x8, x29, #0x138
0x0033503c  16 01 50 f8     ldur     x22, [x8, #-0x100]
0x00335040  a8 03 05 d1     sub      x8, x29, #0x140
0x00335044  17 01 50 f8     ldur     x23, [x8, #-0x100]
0x00335048  58 0c 00 b0     adrp     x24, #0x4be000
0x0033504c  17 00 00 14     b        #0x3350a8
0x00335050  68 0c 00 90     adrp     x8, #0x4c1000
0x00335054  01 15 47 f9     ldr      x1, [x8, #0xe28]
0x00335058  e0 03 1b aa     mov      x0, x27
0x0033505c  04 b3 04 94     bl       #0x461c6c
0x00335060  00 38 6a 1e     fsub     d0, d0, d10
0x00335064  00 40 66 1e     frinta   d0, d0
0x00335068  00 20 69 1e     fcmp     d0, d9
0x0033506c  29 4d 60 1e     fcsel    d9, d9, d0, mi
0x00335070  20 21 68 1e     fcmp     d9, d8
0x00335074  a8 43 00 d1     sub      x8, x29, #0x10
0x00335078  13 01 50 f8     ldur     x19, [x8, #-0x100]
0x0033507c  a8 63 00 d1     sub      x8, x29, #0x18
0x00335080  14 01 50 f8     ldur     x20, [x8, #-0x100]
0x00335084  a8 03 04 d1     sub      x8, x29, #0x100
0x00335088  15 01 50 f8     ldur     x21, [x8, #-0x100]
0x0033508c  a8 e3 04 d1     sub      x8, x29, #0x138
0x00335090  16 01 50 f8     ldur     x22, [x8, #-0x100]
0x00335094  a8 03 05 d1     sub      x8, x29, #0x140
0x00335098  17 01 50 f8     ldur     x23, [x8, #-0x100]
0x0033509c  58 0c 00 b0     adrp     x24, #0x4be000
0x003350a0  4d 00 00 54     b.le     #0x3350a8
0x003350a4  09 41 60 1e     fmov     d9, d8
0x003350a8  68 0c 00 90     adrp     x8, #0x4c1000
0x003350ac  01 11 47 f9     ldr      x1, [x8, #0xe20]
0x003350b0  e0 03 1b aa     mov      x0, x27
0x003350b4  ee b2 04 94     bl       #0x461c6c
0x003350b8  ed 03 67 9e     fmov     d13, xzr
0x003350bc  60 01 00 37     tbnz     w0, #0, #0x3350e8
0x003350c0  60 41 60 1e     fmov     d0, d11
0x003350c4  81 41 60 1e     fmov     d1, d12
0x003350c8  c2 41 60 1e     fmov     d2, d14
0x003350cc  e3 41 60 1e     fmov     d3, d15
0x003350d0  8e b1 04 94     bl       #0x461708
0x003350d4  0a 40 60 1e     fmov     d10, d0
0x003350d8  e0 03 1b aa     mov      x0, x27
0x003350dc  e1 03 17 aa     mov      x1, x23
0x003350e0  e3 b2 04 94     bl       #0x461c6c
0x003350e4  4d 39 60 1e     fsub     d13, d10, d0
0x003350e8  e0 03 1b aa     mov      x0, x27
0x003350ec  e1 03 17 aa     mov      x1, x23
0x003350f0  df b2 04 94     bl       #0x461c6c
0x003350f4  0a 40 60 1e     fmov     d10, d0
0x003350f8  e0 03 1b aa     mov      x0, x27
0x003350fc  e1 03 13 aa     mov      x1, x19
0x00335100  db b2 04 94     bl       #0x461c6c
0x00335104  fd 03 1d aa     mov      x29, x29
0x00335108  f1 b2 04 94     bl       #0x461ccc
0x0033510c  f3 03 00 aa     mov      x19, x0
0x00335110  01 3f 43 f9     ldr      x1, [x24, #0x678]
0x00335114  a0 41 60 1e     fmov     d0, d13
0x00335118  21 41 60 1e     fmov     d1, d9
0x0033511c  42 41 60 1e     fmov     d2, d10
0x00335120  a3 83 55 fc     ldur     d3, [x29, #-0xa8]
0x00335124  d2 b2 04 94     bl       #0x461c6c
0x00335128  e0 03 13 aa     mov      x0, x19
0x0033512c  dc b2 04 94     bl       #0x461c9c
0x00335130  e0 03 16 aa     mov      x0, x22
0x00335134  da b2 04 94     bl       #0x461c9c
0x00335138  a8 03 03 d1     sub      x8, x29, #0xc0
0x0033513c  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x00335140  d7 b2 04 94     bl       #0x461c9c
0x00335144  a8 83 00 d1     sub      x8, x29, #0x20
0x00335148  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x0033514c  d4 b2 04 94     bl       #0x461c9c
0x00335150  e0 03 15 aa     mov      x0, x21
0x00335154  d2 b2 04 94     bl       #0x461c9c
0x00335158  e0 03 14 aa     mov      x0, x20
0x0033515c  d0 b2 04 94     bl       #0x461c9c
0x00335160  a8 e3 03 d1     sub      x8, x29, #0xf8
0x00335164  00 01 50 f8     ldur     x0, [x8, #-0x100]
0x00335168  cd b2 04 94     bl       #0x461c9c
0x0033516c  a8 03 56 f8     ldur     x8, [x29, #-0xa0]
0x00335170  49 0b 00 f0     adrp     x9, #0x4a0000
0x00335174  29 b1 43 f9     ldr      x9, [x9, #0x760]
0x00335178  29 01 40 f9     ldr      x9, [x9]
0x0033517c  3f 01 08 eb     cmp      x9, x8
0x00335180  a1 01 00 54     b.ne     #0x3351b4
0x00335184  bf 43 02 d1     sub      sp, x29, #0x90
0x00335188  fd 7b 49 a9     ldp      x29, x30, [sp, #0x90]
0x0033518c  f4 4f 48 a9     ldp      x20, x19, [sp, #0x80]
0x00335190  f6 57 47 a9     ldp      x22, x21, [sp, #0x70]
0x00335194  f8 5f 46 a9     ldp      x24, x23, [sp, #0x60]
0x00335198  fa 67 45 a9     ldp      x26, x25, [sp, #0x50]
0x0033519c  fc 6f 44 a9     ldp      x28, x27, [sp, #0x40]
0x003351a0  e9 23 43 6d     ldp      d9, d8, [sp, #0x30]
0x003351a4  eb 2b 42 6d     ldp      d11, d10, [sp, #0x20]
0x003351a8  ed 33 41 6d     ldp      d13, d12, [sp, #0x10]
0x003351ac  ef 3b ca 6c     ldp      d15, d14, [sp], #0xa0
0x003351b0  c0 03 5f d6     ret      
0x003351b4  c1 b1 04 94     bl       #0x4618b8
