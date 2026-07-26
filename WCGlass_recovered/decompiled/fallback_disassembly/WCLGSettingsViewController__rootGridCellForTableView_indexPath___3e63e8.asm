; Capstone fallback for WCLGSettingsViewController::rootGridCellForTableView:indexPath:
; address=0x3e63e8 size=12864

0x003e63e8  eb 2b b8 6d     stp      d11, d10, [sp, #-0x80]!
0x003e63ec  e9 23 01 6d     stp      d9, d8, [sp, #0x10]
0x003e63f0  fc 6f 02 a9     stp      x28, x27, [sp, #0x20]
0x003e63f4  fa 67 03 a9     stp      x26, x25, [sp, #0x30]
0x003e63f8  f8 5f 04 a9     stp      x24, x23, [sp, #0x40]
0x003e63fc  f6 57 05 a9     stp      x22, x21, [sp, #0x50]
0x003e6400  f4 4f 06 a9     stp      x20, x19, [sp, #0x60]
0x003e6404  fd 7b 07 a9     stp      x29, x30, [sp, #0x70]
0x003e6408  fd c3 01 91     add      x29, sp, #0x70
0x003e640c  ff c3 00 d1     sub      sp, sp, #0x30
0x003e6410  f4 03 03 aa     mov      x20, x3
0x003e6414  f3 03 02 aa     mov      x19, x2
0x003e6418  a0 83 17 f8     stur     x0, [x29, #-0x88]
0x003e641c  c8 05 00 d0     adrp     x8, #0x4a0000
0x003e6420  08 b1 43 f9     ldr      x8, [x8, #0x760]
0x003e6424  08 01 40 f9     ldr      x8, [x8]
0x003e6428  a8 83 18 f8     stur     x8, [x29, #-0x78]
0x003e642c  e9 0c 00 90     adrp     x9, #0x582000
0x003e6430  29 c1 0e 91     add      x9, x9, #0x3b0
0x003e6434  28 fd df 88     ldar     w8, [x9]
0x003e6438  68 2f 01 35     cbnz     w8, #0x3e8a24
0x003e643c  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6440  08 d9 0f 91     add      x8, x8, #0x3f6
0x003e6444  09 01 40 79     ldrh     w9, [x8]
0x003e6448  2a e3 8d 52     mov      w10, #0x6f19
0x003e644c  29 01 0a 4a     eor      w9, w9, w10
0x003e6450  ca 0b 00 d0     adrp     x10, #0x560000
0x003e6454  4a f9 0f 91     add      x10, x10, #0x3fe
0x003e6458  49 01 00 79     strh     w9, [x10]
0x003e645c  09 05 40 79     ldrh     w9, [x8, #2]
0x003e6460  4b 2d 95 52     mov      w11, #0xa96a
0x003e6464  29 01 0b 4a     eor      w9, w9, w11
0x003e6468  49 05 00 79     strh     w9, [x10, #2]
0x003e646c  09 09 40 79     ldrh     w9, [x8, #4]
0x003e6470  6b 1c 99 52     mov      w11, #0xc8e3
0x003e6474  29 01 0b 4a     eor      w9, w9, w11
0x003e6478  49 09 00 79     strh     w9, [x10, #4]
0x003e647c  08 0d 40 79     ldrh     w8, [x8, #6]
0x003e6480  09 77 93 52     mov      w9, #0x9bb8
0x003e6484  08 01 09 4a     eor      w8, w8, w9
0x003e6488  48 0d 00 79     strh     w8, [x10, #6]
0x003e648c  ca 0b 00 d0     adrp     x10, #0x560000
0x003e6490  4a c1 0e 91     add      x10, x10, #0x3b0
0x003e6494  48 01 40 39     ldrb     w8, [x10]
0x003e6498  ab 08 80 52     mov      w11, #0x45
0x003e649c  09 01 0b 4a     eor      w9, w8, w11
0x003e64a0  c8 0b 00 d0     adrp     x8, #0x560000
0x003e64a4  08 41 0f 91     add      x8, x8, #0x3d0
0x003e64a8  09 01 00 39     strb     w9, [x8]
0x003e64ac  49 05 40 39     ldrb     w9, [x10, #1]
0x003e64b0  4c 13 80 52     mov      w12, #0x9a
0x003e64b4  29 01 0c 4a     eor      w9, w9, w12
0x003e64b8  09 05 00 39     strb     w9, [x8, #1]
0x003e64bc  49 09 40 39     ldrb     w9, [x10, #2]
0x003e64c0  8c 0c 80 52     mov      w12, #0x64
0x003e64c4  29 01 0c 4a     eor      w9, w9, w12
0x003e64c8  09 09 00 39     strb     w9, [x8, #2]
0x003e64cc  49 0d 40 39     ldrb     w9, [x10, #3]
0x003e64d0  29 79 1a 52     eor      w9, w9, #0xffffffdf
0x003e64d4  09 0d 00 39     strb     w9, [x8, #3]
0x003e64d8  4c 11 40 39     ldrb     w12, [x10, #4]
0x003e64dc  a9 04 80 52     mov      w9, #0x25
0x003e64e0  8c 01 09 4a     eor      w12, w12, w9
0x003e64e4  0c 11 00 39     strb     w12, [x8, #4]
0x003e64e8  4c 15 40 39     ldrb     w12, [x10, #5]
0x003e64ec  8d 05 80 52     mov      w13, #0x2c
0x003e64f0  8c 01 0d 4a     eor      w12, w12, w13
0x003e64f4  0c 15 00 39     strb     w12, [x8, #5]
0x003e64f8  4c 19 40 39     ldrb     w12, [x10, #6]
0x003e64fc  be 0d 80 52     mov      w30, #0x6d
0x003e6500  8c 01 1e 4a     eor      w12, w12, w30
0x003e6504  0c 19 00 39     strb     w12, [x8, #6]
0x003e6508  4c 1d 40 39     ldrb     w12, [x10, #7]
0x003e650c  23 19 80 52     mov      w3, #0xc9
0x003e6510  8c 01 03 4a     eor      w12, w12, w3
0x003e6514  0c 1d 00 39     strb     w12, [x8, #7]
0x003e6518  4c 21 40 39     ldrb     w12, [x10, #8]
0x003e651c  8c 65 19 52     eor      w12, w12, #0xffffff81
0x003e6520  0c 21 00 39     strb     w12, [x8, #8]
0x003e6524  4c 25 40 39     ldrb     w12, [x10, #9]
0x003e6528  2d 14 80 52     mov      w13, #0xa1
0x003e652c  8c 01 0d 4a     eor      w12, w12, w13
0x003e6530  0c 25 00 39     strb     w12, [x8, #9]
0x003e6534  4c 29 40 39     ldrb     w12, [x10, #0xa]
0x003e6538  e7 06 80 52     mov      w7, #0x37
0x003e653c  8c 01 07 4a     eor      w12, w12, w7
0x003e6540  0c 29 00 39     strb     w12, [x8, #0xa]
0x003e6544  4c 2d 40 39     ldrb     w12, [x10, #0xb]
0x003e6548  2d 0c 80 52     mov      w13, #0x61
0x003e654c  8c 01 0d 4a     eor      w12, w12, w13
0x003e6550  25 0c 80 52     mov      w5, #0x61
0x003e6554  0c 2d 00 39     strb     w12, [x8, #0xb]
0x003e6558  4c 31 40 39     ldrb     w12, [x10, #0xc]
0x003e655c  8c 09 1b 52     eor      w12, w12, #0xe0
0x003e6560  0c 31 00 39     strb     w12, [x8, #0xc]
0x003e6564  4c 35 40 39     ldrb     w12, [x10, #0xd]
0x003e6568  8c e9 00 52     eor      w12, w12, #0x77777777
0x003e656c  0c 35 00 39     strb     w12, [x8, #0xd]
0x003e6570  4c 39 40 39     ldrb     w12, [x10, #0xe]
0x003e6574  4d 08 80 52     mov      w13, #0x42
0x003e6578  8c 01 0d 4a     eor      w12, w12, w13
0x003e657c  4f 08 80 52     mov      w15, #0x42
0x003e6580  0c 39 00 39     strb     w12, [x8, #0xe]
0x003e6584  4c 3d 40 39     ldrb     w12, [x10, #0xf]
0x003e6588  8c 01 03 4a     eor      w12, w12, w3
0x003e658c  0c 3d 00 39     strb     w12, [x8, #0xf]
0x003e6590  4c 41 40 39     ldrb     w12, [x10, #0x10]
0x003e6594  4d 0e 80 52     mov      w13, #0x72
0x003e6598  8c 01 0d 4a     eor      w12, w12, w13
0x003e659c  0c 41 00 39     strb     w12, [x8, #0x10]
0x003e65a0  4c 45 40 39     ldrb     w12, [x10, #0x11]
0x003e65a4  0d 0a 80 52     mov      w13, #0x50
0x003e65a8  8c 01 0d 4a     eor      w12, w12, w13
0x003e65ac  0c 45 00 39     strb     w12, [x8, #0x11]
0x003e65b0  4c 49 40 39     ldrb     w12, [x10, #0x12]
0x003e65b4  cd 02 80 52     mov      w13, #0x16
0x003e65b8  8c 01 0d 4a     eor      w12, w12, w13
0x003e65bc  0c 49 00 39     strb     w12, [x8, #0x12]
0x003e65c0  4a 4d 40 39     ldrb     w10, [x10, #0x13]
0x003e65c4  8c 14 80 52     mov      w12, #0xa4
0x003e65c8  4a 01 0c 4a     eor      w10, w10, w12
0x003e65cc  cc 0b 00 d0     adrp     x12, #0x560000
0x003e65d0  8c 01 03 91     add      x12, x12, #0xc0
0x003e65d4  0a 4d 00 39     strb     w10, [x8, #0x13]
0x003e65d8  88 01 40 79     ldrh     w8, [x12]
0x003e65dc  ea 0d 89 52     mov      w10, #0x486f
0x003e65e0  08 01 0a 4a     eor      w8, w8, w10
0x003e65e4  ca 0b 00 d0     adrp     x10, #0x560000
0x003e65e8  4a 81 03 91     add      x10, x10, #0xe0
0x003e65ec  48 01 00 79     strh     w8, [x10]
0x003e65f0  88 05 40 79     ldrh     w8, [x12, #2]
0x003e65f4  2d fa 9d 52     mov      w13, #0xefd1
0x003e65f8  08 01 0d 4a     eor      w8, w8, w13
0x003e65fc  48 05 00 79     strh     w8, [x10, #2]
0x003e6600  88 09 40 79     ldrh     w8, [x12, #4]
0x003e6604  ed 2e 94 52     mov      w13, #0xa177
0x003e6608  08 01 0d 4a     eor      w8, w8, w13
0x003e660c  48 09 00 79     strh     w8, [x10, #4]
0x003e6610  88 0d 40 79     ldrh     w8, [x12, #6]
0x003e6614  ad f0 8d 52     mov      w13, #0x6f85
0x003e6618  08 01 0d 4a     eor      w8, w8, w13
0x003e661c  48 0d 00 79     strh     w8, [x10, #6]
0x003e6620  88 11 40 79     ldrh     w8, [x12, #8]
0x003e6624  cd 4f 98 52     mov      w13, #0xc27e
0x003e6628  08 01 0d 4a     eor      w8, w8, w13
0x003e662c  48 11 00 79     strh     w8, [x10, #8]
0x003e6630  88 15 40 79     ldrh     w8, [x12, #0xa]
0x003e6634  ed 45 96 52     mov      w13, #0xb22f
0x003e6638  08 01 0d 4a     eor      w8, w8, w13
0x003e663c  48 15 00 79     strh     w8, [x10, #0xa]
0x003e6640  88 19 40 79     ldrh     w8, [x12, #0xc]
0x003e6644  6d 16 9b 52     mov      w13, #0xd8b3
0x003e6648  08 01 0d 4a     eor      w8, w8, w13
0x003e664c  48 19 00 79     strh     w8, [x10, #0xc]
0x003e6650  88 1d 40 79     ldrh     w8, [x12, #0xe]
0x003e6654  8d 29 9c 52     mov      w13, #0xe14c
0x003e6658  08 01 0d 4a     eor      w8, w8, w13
0x003e665c  48 1d 00 79     strh     w8, [x10, #0xe]
0x003e6660  88 21 40 79     ldrh     w8, [x12, #0x10]
0x003e6664  ad 59 9e 52     mov      w13, #0xf2cd
0x003e6668  08 01 0d 4a     eor      w8, w8, w13
0x003e666c  48 21 00 79     strh     w8, [x10, #0x10]
0x003e6670  88 25 40 79     ldrh     w8, [x12, #0x12]
0x003e6674  ec 88 9e 52     mov      w12, #0xf447
0x003e6678  08 01 0c 4a     eor      w8, w8, w12
0x003e667c  48 25 00 79     strh     w8, [x10, #0x12]
0x003e6680  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6684  08 51 0e 91     add      x8, x8, #0x394
0x003e6688  0a 01 40 79     ldrh     w10, [x8]
0x003e668c  cc 72 91 52     mov      w12, #0x8b96
0x003e6690  4a 01 0c 4a     eor      w10, w10, w12
0x003e6694  cd 0b 00 d0     adrp     x13, #0x560000
0x003e6698  ad 89 0e 91     add      x13, x13, #0x3a2
0x003e669c  aa 01 00 79     strh     w10, [x13]
0x003e66a0  0a 05 40 79     ldrh     w10, [x8, #2]
0x003e66a4  ec 7f 81 52     mov      w12, #0xbff
0x003e66a8  4a 01 0c 4a     eor      w10, w10, w12
0x003e66ac  aa 05 00 79     strh     w10, [x13, #2]
0x003e66b0  0a 09 40 79     ldrh     w10, [x8, #4]
0x003e66b4  2c 72 80 52     mov      w12, #0x391
0x003e66b8  4a 01 0c 4a     eor      w10, w10, w12
0x003e66bc  aa 09 00 79     strh     w10, [x13, #4]
0x003e66c0  0a 0d 40 79     ldrh     w10, [x8, #6]
0x003e66c4  0c 82 9e 52     mov      w12, #0xf410
0x003e66c8  4a 01 0c 4a     eor      w10, w10, w12
0x003e66cc  aa 0d 00 79     strh     w10, [x13, #6]
0x003e66d0  0a 11 40 79     ldrh     w10, [x8, #8]
0x003e66d4  6c a6 82 52     mov      w12, #0x1533
0x003e66d8  4a 01 0c 4a     eor      w10, w10, w12
0x003e66dc  aa 11 00 79     strh     w10, [x13, #8]
0x003e66e0  0a 15 40 79     ldrh     w10, [x8, #0xa]
0x003e66e4  ec 1b 81 52     mov      w12, #0x8df
0x003e66e8  4a 01 0c 4a     eor      w10, w10, w12
0x003e66ec  aa 15 00 79     strh     w10, [x13, #0xa]
0x003e66f0  08 19 40 79     ldrh     w8, [x8, #0xc]
0x003e66f4  0a c3 8d 52     mov      w10, #0x6e18
0x003e66f8  08 01 0a 4a     eor      w8, w8, w10
0x003e66fc  a8 19 00 79     strh     w8, [x13, #0xc]
0x003e6700  cd 0b 00 d0     adrp     x13, #0x560000
0x003e6704  ad 01 07 91     add      x13, x13, #0x1c0
0x003e6708  a8 01 40 39     ldrb     w8, [x13]
0x003e670c  08 79 1d 52     eor      w8, w8, #0xfffffffb
0x003e6710  ce 0b 00 d0     adrp     x14, #0x560000
0x003e6714  ce c1 07 91     add      x14, x14, #0x1f0
0x003e6718  c8 01 00 39     strb     w8, [x14]
0x003e671c  a8 05 40 39     ldrb     w8, [x13, #1]
0x003e6720  08 01 03 4a     eor      w8, w8, w3
0x003e6724  c8 05 00 39     strb     w8, [x14, #1]
0x003e6728  a8 09 40 39     ldrb     w8, [x13, #2]
0x003e672c  ea 02 80 52     mov      w10, #0x17
0x003e6730  08 01 0a 4a     eor      w8, w8, w10
0x003e6734  f1 02 80 52     mov      w17, #0x17
0x003e6738  c8 09 00 39     strb     w8, [x14, #2]
0x003e673c  a8 0d 40 39     ldrb     w8, [x13, #3]
0x003e6740  6a 08 80 52     mov      w10, #0x43
0x003e6744  08 01 0a 4a     eor      w8, w8, w10
0x003e6748  c8 0d 00 39     strb     w8, [x14, #3]
0x003e674c  a8 11 40 39     ldrb     w8, [x13, #4]
0x003e6750  ea 0d 80 52     mov      w10, #0x6f
0x003e6754  08 01 0a 4a     eor      w8, w8, w10
0x003e6758  c8 11 00 39     strb     w8, [x14, #4]
0x003e675c  a8 15 40 39     ldrb     w8, [x13, #5]
0x003e6760  aa 1d 80 52     mov      w10, #0xed
0x003e6764  08 01 0a 4a     eor      w8, w8, w10
0x003e6768  c8 15 00 39     strb     w8, [x14, #5]
0x003e676c  a8 19 40 39     ldrb     w8, [x13, #6]
0x003e6770  08 01 0f 4a     eor      w8, w8, w15
0x003e6774  c8 19 00 39     strb     w8, [x14, #6]
0x003e6778  a8 1d 40 39     ldrb     w8, [x13, #7]
0x003e677c  4f 06 80 52     mov      w15, #0x32
0x003e6780  08 01 0f 4a     eor      w8, w8, w15
0x003e6784  c8 1d 00 39     strb     w8, [x14, #7]
0x003e6788  a8 21 40 39     ldrb     w8, [x13, #8]
0x003e678c  08 71 1b 52     eor      w8, w8, #0xffffffe3
0x003e6790  c8 21 00 39     strb     w8, [x14, #8]
0x003e6794  a8 25 40 39     ldrb     w8, [x13, #9]
0x003e6798  08 e9 00 52     eor      w8, w8, #0x77777777
0x003e679c  c8 25 00 39     strb     w8, [x14, #9]
0x003e67a0  a8 29 40 39     ldrb     w8, [x13, #0xa]
0x003e67a4  aa 10 80 52     mov      w10, #0x85
0x003e67a8  08 01 0a 4a     eor      w8, w8, w10
0x003e67ac  c8 29 00 39     strb     w8, [x14, #0xa]
0x003e67b0  a8 2d 40 39     ldrb     w8, [x13, #0xb]
0x003e67b4  8a 09 80 52     mov      w10, #0x4c
0x003e67b8  08 01 0a 4a     eor      w8, w8, w10
0x003e67bc  c8 2d 00 39     strb     w8, [x14, #0xb]
0x003e67c0  a8 31 40 39     ldrb     w8, [x13, #0xc]
0x003e67c4  6f 19 80 52     mov      w15, #0xcb
0x003e67c8  08 01 0f 4a     eor      w8, w8, w15
0x003e67cc  62 19 80 52     mov      w2, #0xcb
0x003e67d0  c8 31 00 39     strb     w8, [x14, #0xc]
0x003e67d4  a8 35 40 39     ldrb     w8, [x13, #0xd]
0x003e67d8  6f 13 80 52     mov      w15, #0x9b
0x003e67dc  08 01 0f 4a     eor      w8, w8, w15
0x003e67e0  70 13 80 52     mov      w16, #0x9b
0x003e67e4  c8 35 00 39     strb     w8, [x14, #0xd]
0x003e67e8  a8 39 40 39     ldrb     w8, [x13, #0xe]
0x003e67ec  4a 1a 80 52     mov      w10, #0xd2
0x003e67f0  08 01 0a 4a     eor      w8, w8, w10
0x003e67f4  c8 39 00 39     strb     w8, [x14, #0xe]
0x003e67f8  a8 3d 40 39     ldrb     w8, [x13, #0xf]
0x003e67fc  37 0d 80 52     mov      w23, #0x69
0x003e6800  08 01 17 4a     eor      w8, w8, w23
0x003e6804  c8 3d 00 39     strb     w8, [x14, #0xf]
0x003e6808  a8 41 40 39     ldrb     w8, [x13, #0x10]
0x003e680c  08 01 09 4a     eor      w8, w8, w9
0x003e6810  c8 41 00 39     strb     w8, [x14, #0x10]
0x003e6814  a8 45 40 39     ldrb     w8, [x13, #0x11]
0x003e6818  1a 1a 80 52     mov      w26, #0xd0
0x003e681c  08 01 1a 4a     eor      w8, w8, w26
0x003e6820  c8 45 00 39     strb     w8, [x14, #0x11]
0x003e6824  a8 49 40 39     ldrb     w8, [x13, #0x12]
0x003e6828  08 79 1e 52     eor      w8, w8, #0xfffffffd
0x003e682c  c8 49 00 39     strb     w8, [x14, #0x12]
0x003e6830  a8 4d 40 39     ldrb     w8, [x13, #0x13]
0x003e6834  e8 03 28 2a     mvn      w8, w8
0x003e6838  c8 4d 00 39     strb     w8, [x14, #0x13]
0x003e683c  af 51 40 39     ldrb     w15, [x13, #0x14]
0x003e6840  e8 09 80 52     mov      w8, #0x4f
0x003e6844  ef 01 08 4a     eor      w15, w15, w8
0x003e6848  cf 51 00 39     strb     w15, [x14, #0x14]
0x003e684c  af 55 40 39     ldrb     w15, [x13, #0x15]
0x003e6850  ef 01 11 4a     eor      w15, w15, w17
0x003e6854  cf 55 00 39     strb     w15, [x14, #0x15]
0x003e6858  af 59 40 39     ldrb     w15, [x13, #0x16]
0x003e685c  ef 01 10 4a     eor      w15, w15, w16
0x003e6860  cf 59 00 39     strb     w15, [x14, #0x16]
0x003e6864  af 5d 40 39     ldrb     w15, [x13, #0x17]
0x003e6868  b0 16 80 52     mov      w16, #0xb5
0x003e686c  ef 01 10 4a     eor      w15, w15, w16
0x003e6870  cf 5d 00 39     strb     w15, [x14, #0x17]
0x003e6874  af 61 40 39     ldrb     w15, [x13, #0x18]
0x003e6878  c1 0a 80 52     mov      w1, #0x56
0x003e687c  ef 01 01 4a     eor      w15, w15, w1
0x003e6880  cf 61 00 39     strb     w15, [x14, #0x18]
0x003e6884  af 65 40 39     ldrb     w15, [x13, #0x19]
0x003e6888  f0 08 80 52     mov      w16, #0x47
0x003e688c  ef 01 10 4a     eor      w15, w15, w16
0x003e6890  cf 65 00 39     strb     w15, [x14, #0x19]
0x003e6894  af 69 40 39     ldrb     w15, [x13, #0x1a]
0x003e6898  8a 11 80 52     mov      w10, #0x8c
0x003e689c  ef 01 0a 4a     eor      w15, w15, w10
0x003e68a0  cf 69 00 39     strb     w15, [x14, #0x1a]
0x003e68a4  af 6d 40 39     ldrb     w15, [x13, #0x1b]
0x003e68a8  20 0f 80 52     mov      w0, #0x79
0x003e68ac  ef 01 00 4a     eor      w15, w15, w0
0x003e68b0  cf 6d 00 39     strb     w15, [x14, #0x1b]
0x003e68b4  af 71 40 39     ldrb     w15, [x13, #0x1c]
0x003e68b8  ef 01 1e 52     eor      w15, w15, #4
0x003e68bc  cf 71 00 39     strb     w15, [x14, #0x1c]
0x003e68c0  af 75 40 39     ldrb     w15, [x13, #0x1d]
0x003e68c4  ef 71 1c 52     eor      w15, w15, #0xfffffff1
0x003e68c8  cf 75 00 39     strb     w15, [x14, #0x1d]
0x003e68cc  af 79 40 39     ldrb     w15, [x13, #0x1e]
0x003e68d0  8a 04 80 52     mov      w10, #0x24
0x003e68d4  ef 01 0a 4a     eor      w15, w15, w10
0x003e68d8  cf 79 00 39     strb     w15, [x14, #0x1e]
0x003e68dc  af 7d 40 39     ldrb     w15, [x13, #0x1f]
0x003e68e0  4a 0f 80 52     mov      w10, #0x7a
0x003e68e4  ef 01 0a 4a     eor      w15, w15, w10
0x003e68e8  cf 7d 00 39     strb     w15, [x14, #0x1f]
0x003e68ec  af 81 40 39     ldrb     w15, [x13, #0x20]
0x003e68f0  ef 01 1f 52     eor      w15, w15, #2
0x003e68f4  cf 81 00 39     strb     w15, [x14, #0x20]
0x003e68f8  af 85 40 39     ldrb     w15, [x13, #0x21]
0x003e68fc  cf 85 00 39     strb     w15, [x14, #0x21]
0x003e6900  af 89 40 39     ldrb     w15, [x13, #0x22]
0x003e6904  ef 79 1c 52     eor      w15, w15, #0xfffffff7
0x003e6908  cf 89 00 39     strb     w15, [x14, #0x22]
0x003e690c  af 8d 40 39     ldrb     w15, [x13, #0x23]
0x003e6910  4a 0d 80 52     mov      w10, #0x6a
0x003e6914  ef 01 0a 4a     eor      w15, w15, w10
0x003e6918  cf 8d 00 39     strb     w15, [x14, #0x23]
0x003e691c  ad 91 40 39     ldrb     w13, [x13, #0x24]
0x003e6920  ad 79 1e 52     eor      w13, w13, #0xfffffffd
0x003e6924  cd 91 00 39     strb     w13, [x14, #0x24]
0x003e6928  cd 0b 00 d0     adrp     x13, #0x560000
0x003e692c  ad 81 0a 91     add      x13, x13, #0x2a0
0x003e6930  ae 01 40 39     ldrb     w14, [x13]
0x003e6934  ce 6d 1a 52     eor      w14, w14, #0xffffffc3
0x003e6938  cf 0b 00 d0     adrp     x15, #0x560000
0x003e693c  ef 01 0b 91     add      x15, x15, #0x2c0
0x003e6940  ee 01 00 39     strb     w14, [x15]
0x003e6944  ae 05 40 39     ldrb     w14, [x13, #1]
0x003e6948  c6 17 80 52     mov      w6, #0xbe
0x003e694c  ce 01 06 4a     eor      w14, w14, w6
0x003e6950  ee 05 00 39     strb     w14, [x15, #1]
0x003e6954  ae 09 40 39     ldrb     w14, [x13, #2]
0x003e6958  51 10 80 52     mov      w17, #0x82
0x003e695c  ce 01 11 4a     eor      w14, w14, w17
0x003e6960  ee 09 00 39     strb     w14, [x15, #2]
0x003e6964  ae 0d 40 39     ldrb     w14, [x13, #3]
0x003e6968  ce 79 19 52     eor      w14, w14, #0xffffffbf
0x003e696c  ee 0d 00 39     strb     w14, [x15, #3]
0x003e6970  ae 11 40 39     ldrb     w14, [x13, #4]
0x003e6974  f6 0b 80 52     mov      w22, #0x5f
0x003e6978  ce 01 16 4a     eor      w14, w14, w22
0x003e697c  ee 11 00 39     strb     w14, [x15, #4]
0x003e6980  ae 15 40 39     ldrb     w14, [x13, #5]
0x003e6984  91 1e 80 52     mov      w17, #0xf4
0x003e6988  ce 01 11 4a     eor      w14, w14, w17
0x003e698c  ee 15 00 39     strb     w14, [x15, #5]
0x003e6990  ae 19 40 39     ldrb     w14, [x13, #6]
0x003e6994  6a 0e 80 52     mov      w10, #0x73
0x003e6998  ce 01 0a 4a     eor      w14, w14, w10
0x003e699c  ee 19 00 39     strb     w14, [x15, #6]
0x003e69a0  ae 1d 40 39     ldrb     w14, [x13, #7]
0x003e69a4  c8 01 08 4a     eor      w8, w14, w8
0x003e69a8  e8 1d 00 39     strb     w8, [x15, #7]
0x003e69ac  a8 21 40 39     ldrb     w8, [x13, #8]
0x003e69b0  2e 07 80 52     mov      w14, #0x39
0x003e69b4  08 01 0e 4a     eor      w8, w8, w14
0x003e69b8  e8 21 00 39     strb     w8, [x15, #8]
0x003e69bc  a8 25 40 39     ldrb     w8, [x13, #9]
0x003e69c0  08 01 0b 4a     eor      w8, w8, w11
0x003e69c4  e8 25 00 39     strb     w8, [x15, #9]
0x003e69c8  a8 29 40 39     ldrb     w8, [x13, #0xa]
0x003e69cc  08 01 0e 4a     eor      w8, w8, w14
0x003e69d0  e8 29 00 39     strb     w8, [x15, #0xa]
0x003e69d4  a8 2d 40 39     ldrb     w8, [x13, #0xb]
0x003e69d8  2b 05 80 52     mov      w11, #0x29
0x003e69dc  08 01 0b 4a     eor      w8, w8, w11
0x003e69e0  e8 2d 00 39     strb     w8, [x15, #0xb]
0x003e69e4  a8 31 40 39     ldrb     w8, [x13, #0xc]
0x003e69e8  08 01 11 4a     eor      w8, w8, w17
0x003e69ec  e8 31 00 39     strb     w8, [x15, #0xc]
0x003e69f0  a8 35 40 39     ldrb     w8, [x13, #0xd]
0x003e69f4  08 01 05 4a     eor      w8, w8, w5
0x003e69f8  e8 35 00 39     strb     w8, [x15, #0xd]
0x003e69fc  a8 39 40 39     ldrb     w8, [x13, #0xe]
0x003e6a00  cb 04 80 52     mov      w11, #0x26
0x003e6a04  08 01 0b 4a     eor      w8, w8, w11
0x003e6a08  e8 39 00 39     strb     w8, [x15, #0xe]
0x003e6a0c  a8 3d 40 39     ldrb     w8, [x13, #0xf]
0x003e6a10  08 01 02 4a     eor      w8, w8, w2
0x003e6a14  e8 3d 00 39     strb     w8, [x15, #0xf]
0x003e6a18  a8 41 40 39     ldrb     w8, [x13, #0x10]
0x003e6a1c  ca 15 80 52     mov      w10, #0xae
0x003e6a20  08 01 0a 4a     eor      w8, w8, w10
0x003e6a24  e8 41 00 39     strb     w8, [x15, #0x10]
0x003e6a28  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6a2c  08 39 06 91     add      x8, x8, #0x18e
0x003e6a30  0b 01 40 79     ldrh     w11, [x8]
0x003e6a34  8d b6 87 52     mov      w13, #0x3db4
0x003e6a38  6b 01 0d 4a     eor      w11, w11, w13
0x003e6a3c  cd 0b 00 d0     adrp     x13, #0x560000
0x003e6a40  ad 59 06 91     add      x13, x13, #0x196
0x003e6a44  ab 01 00 79     strh     w11, [x13]
0x003e6a48  0b 05 40 79     ldrh     w11, [x8, #2]
0x003e6a4c  4e 05 96 52     mov      w14, #0xb02a
0x003e6a50  6b 01 0e 4a     eor      w11, w11, w14
0x003e6a54  ab 05 00 79     strh     w11, [x13, #2]
0x003e6a58  0b 09 40 79     ldrh     w11, [x8, #4]
0x003e6a5c  6e 9a 9e 52     mov      w14, #0xf4d3
0x003e6a60  6b 01 0e 4a     eor      w11, w11, w14
0x003e6a64  ab 09 00 79     strh     w11, [x13, #4]
0x003e6a68  08 0d 40 79     ldrh     w8, [x8, #6]
0x003e6a6c  08 01 0c 4a     eor      w8, w8, w12
0x003e6a70  cb 0b 00 b0     adrp     x11, #0x55f000
0x003e6a74  6b 51 35 91     add      x11, x11, #0xd54
0x003e6a78  a8 0d 00 79     strh     w8, [x13, #6]
0x003e6a7c  68 01 40 79     ldrh     w8, [x11]
0x003e6a80  4c 3e 96 52     mov      w12, #0xb1f2
0x003e6a84  08 01 0c 4a     eor      w8, w8, w12
0x003e6a88  cc 0b 00 b0     adrp     x12, #0x55f000
0x003e6a8c  8c 71 35 91     add      x12, x12, #0xd5c
0x003e6a90  88 01 00 79     strh     w8, [x12]
0x003e6a94  68 05 40 79     ldrh     w8, [x11, #2]
0x003e6a98  cd b8 8a 52     mov      w13, #0x55c6
0x003e6a9c  08 01 0d 4a     eor      w8, w8, w13
0x003e6aa0  88 05 00 79     strh     w8, [x12, #2]
0x003e6aa4  68 09 40 79     ldrh     w8, [x11, #4]
0x003e6aa8  4d 3d 8e 52     mov      w13, #0x71ea
0x003e6aac  08 01 0d 4a     eor      w8, w8, w13
0x003e6ab0  88 09 00 79     strh     w8, [x12, #4]
0x003e6ab4  68 0d 40 79     ldrh     w8, [x11, #6]
0x003e6ab8  cb 2e 9d 52     mov      w11, #0xe976
0x003e6abc  08 01 0b 4a     eor      w8, w8, w11
0x003e6ac0  88 0d 00 79     strh     w8, [x12, #6]
0x003e6ac4  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6ac8  08 f9 05 91     add      x8, x8, #0x17e
0x003e6acc  0b 01 40 79     ldrh     w11, [x8]
0x003e6ad0  6c f0 86 52     mov      w12, #0x3783
0x003e6ad4  6b 01 0c 4a     eor      w11, w11, w12
0x003e6ad8  cc 0b 00 d0     adrp     x12, #0x560000
0x003e6adc  8c 19 06 91     add      x12, x12, #0x186
0x003e6ae0  8b 01 00 79     strh     w11, [x12]
0x003e6ae4  0b 05 40 79     ldrh     w11, [x8, #2]
0x003e6ae8  6d 3c 8b 52     mov      w13, #0x59e3
0x003e6aec  6b 01 0d 4a     eor      w11, w11, w13
0x003e6af0  8b 05 00 79     strh     w11, [x12, #2]
0x003e6af4  0b 09 40 79     ldrh     w11, [x8, #4]
0x003e6af8  0d 25 9a 52     mov      w13, #0xd128
0x003e6afc  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b00  8b 09 00 79     strh     w11, [x12, #4]
0x003e6b04  08 0d 40 79     ldrh     w8, [x8, #6]
0x003e6b08  4b 90 90 52     mov      w11, #0x8482
0x003e6b0c  08 01 0b 4a     eor      w8, w8, w11
0x003e6b10  88 0d 00 79     strh     w8, [x12, #6]
0x003e6b14  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6b18  08 81 0b 91     add      x8, x8, #0x2e0
0x003e6b1c  0b 01 40 79     ldrh     w11, [x8]
0x003e6b20  4c 45 93 52     mov      w12, #0x9a2a
0x003e6b24  6b 01 0c 4a     eor      w11, w11, w12
0x003e6b28  cc 0b 00 d0     adrp     x12, #0x560000
0x003e6b2c  8c 01 0c 91     add      x12, x12, #0x300
0x003e6b30  8b 01 00 79     strh     w11, [x12]
0x003e6b34  0b 05 40 79     ldrh     w11, [x8, #2]
0x003e6b38  8d 1b 8c 52     mov      w13, #0x60dc
0x003e6b3c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b40  8b 05 00 79     strh     w11, [x12, #2]
0x003e6b44  0b 09 40 79     ldrh     w11, [x8, #4]
0x003e6b48  ed a9 86 52     mov      w13, #0x354f
0x003e6b4c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b50  8b 09 00 79     strh     w11, [x12, #4]
0x003e6b54  0b 0d 40 79     ldrh     w11, [x8, #6]
0x003e6b58  ed 17 85 52     mov      w13, #0x28bf
0x003e6b5c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b60  8b 0d 00 79     strh     w11, [x12, #6]
0x003e6b64  0b 11 40 79     ldrh     w11, [x8, #8]
0x003e6b68  0d c6 92 52     mov      w13, #0x9630
0x003e6b6c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b70  8b 11 00 79     strh     w11, [x12, #8]
0x003e6b74  0b 15 40 79     ldrh     w11, [x8, #0xa]
0x003e6b78  ed b1 8d 52     mov      w13, #0x6d8f
0x003e6b7c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b80  8b 15 00 79     strh     w11, [x12, #0xa]
0x003e6b84  0b 19 40 79     ldrh     w11, [x8, #0xc]
0x003e6b88  2d 47 84 52     mov      w13, #0x2239
0x003e6b8c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6b90  8b 19 00 79     strh     w11, [x12, #0xc]
0x003e6b94  0b 1d 40 79     ldrh     w11, [x8, #0xe]
0x003e6b98  0d 3c 81 52     mov      w13, #0x9e0
0x003e6b9c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6ba0  8b 1d 00 79     strh     w11, [x12, #0xe]
0x003e6ba4  0b 21 40 79     ldrh     w11, [x8, #0x10]
0x003e6ba8  ed 65 96 52     mov      w13, #0xb32f
0x003e6bac  6b 01 0d 4a     eor      w11, w11, w13
0x003e6bb0  8b 21 00 79     strh     w11, [x12, #0x10]
0x003e6bb4  0b 25 40 79     ldrh     w11, [x8, #0x12]
0x003e6bb8  0d f8 88 52     mov      w13, #0x47c0
0x003e6bbc  6b 01 0d 4a     eor      w11, w11, w13
0x003e6bc0  8b 25 00 79     strh     w11, [x12, #0x12]
0x003e6bc4  08 29 40 79     ldrh     w8, [x8, #0x14]
0x003e6bc8  0b 1f 8b 52     mov      w11, #0x58f8
0x003e6bcc  08 01 0b 4a     eor      w8, w8, w11
0x003e6bd0  88 29 00 79     strh     w8, [x12, #0x14]
0x003e6bd4  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6bd8  08 81 0c 91     add      x8, x8, #0x320
0x003e6bdc  0b 01 40 79     ldrh     w11, [x8]
0x003e6be0  4c db 8b 52     mov      w12, #0x5eda
0x003e6be4  6b 01 0c 4a     eor      w11, w11, w12
0x003e6be8  cc 0b 00 d0     adrp     x12, #0x560000
0x003e6bec  8c 01 0d 91     add      x12, x12, #0x340
0x003e6bf0  8b 01 00 79     strh     w11, [x12]
0x003e6bf4  0b 05 40 79     ldrh     w11, [x8, #2]
0x003e6bf8  2d 1c 9c 52     mov      w13, #0xe0e1
0x003e6bfc  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c00  8b 05 00 79     strh     w11, [x12, #2]
0x003e6c04  0b 09 40 79     ldrh     w11, [x8, #4]
0x003e6c08  8d 60 8d 52     mov      w13, #0x6b04
0x003e6c0c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c10  8b 09 00 79     strh     w11, [x12, #4]
0x003e6c14  0b 0d 40 79     ldrh     w11, [x8, #6]
0x003e6c18  4d 70 84 52     mov      w13, #0x2382
0x003e6c1c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c20  8b 0d 00 79     strh     w11, [x12, #6]
0x003e6c24  0b 11 40 79     ldrh     w11, [x8, #8]
0x003e6c28  cd 99 94 52     mov      w13, #0xa4ce
0x003e6c2c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c30  8b 11 00 79     strh     w11, [x12, #8]
0x003e6c34  0b 15 40 79     ldrh     w11, [x8, #0xa]
0x003e6c38  ed 3d 97 52     mov      w13, #0xb9ef
0x003e6c3c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c40  8b 15 00 79     strh     w11, [x12, #0xa]
0x003e6c44  0b 19 40 79     ldrh     w11, [x8, #0xc]
0x003e6c48  ed 28 8a 52     mov      w13, #0x5147
0x003e6c4c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c50  8b 19 00 79     strh     w11, [x12, #0xc]
0x003e6c54  0b 1d 40 79     ldrh     w11, [x8, #0xe]
0x003e6c58  6b 79 1a 52     eor      w11, w11, #0xffffffdf
0x003e6c5c  8b 1d 00 79     strh     w11, [x12, #0xe]
0x003e6c60  0b 21 40 79     ldrh     w11, [x8, #0x10]
0x003e6c64  8d a5 80 52     mov      w13, #0x52c
0x003e6c68  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c6c  8b 21 00 79     strh     w11, [x12, #0x10]
0x003e6c70  0b 25 40 79     ldrh     w11, [x8, #0x12]
0x003e6c74  ed 4c 87 52     mov      w13, #0x3a67
0x003e6c78  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c7c  8b 25 00 79     strh     w11, [x12, #0x12]
0x003e6c80  0b 29 40 79     ldrh     w11, [x8, #0x14]
0x003e6c84  6d 44 8b 52     mov      w13, #0x5a23
0x003e6c88  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c8c  8b 29 00 79     strh     w11, [x12, #0x14]
0x003e6c90  0b 2d 40 79     ldrh     w11, [x8, #0x16]
0x003e6c94  cd 11 9e 52     mov      w13, #0xf08e
0x003e6c98  6b 01 0d 4a     eor      w11, w11, w13
0x003e6c9c  8b 2d 00 79     strh     w11, [x12, #0x16]
0x003e6ca0  08 31 40 79     ldrh     w8, [x8, #0x18]
0x003e6ca4  ab 3e 97 52     mov      w11, #0xb9f5
0x003e6ca8  08 01 0b 4a     eor      w8, w8, w11
0x003e6cac  88 31 00 79     strh     w8, [x12, #0x18]
0x003e6cb0  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6cb4  08 19 10 91     add      x8, x8, #0x406
0x003e6cb8  0b 01 40 39     ldrb     w11, [x8]
0x003e6cbc  6b 6d 1a 52     eor      w11, w11, #0xffffffc3
0x003e6cc0  cd 0b 00 d0     adrp     x13, #0x560000
0x003e6cc4  ad 49 10 91     add      x13, x13, #0x412
0x003e6cc8  ab 01 00 39     strb     w11, [x13]
0x003e6ccc  0b 05 40 39     ldrb     w11, [x8, #1]
0x003e6cd0  2c 04 80 52     mov      w12, #0x21
0x003e6cd4  6b 01 0c 4a     eor      w11, w11, w12
0x003e6cd8  ab 05 00 39     strb     w11, [x13, #1]
0x003e6cdc  0b 09 40 39     ldrb     w11, [x8, #2]
0x003e6ce0  4a 1f 80 52     mov      w10, #0xfa
0x003e6ce4  6b 01 0a 4a     eor      w11, w11, w10
0x003e6ce8  50 1f 80 52     mov      w16, #0xfa
0x003e6cec  ab 09 00 39     strb     w11, [x13, #2]
0x003e6cf0  0b 0d 40 39     ldrb     w11, [x8, #3]
0x003e6cf4  2e 16 80 52     mov      w14, #0xb1
0x003e6cf8  6b 01 0e 4a     eor      w11, w11, w14
0x003e6cfc  ab 0d 00 39     strb     w11, [x13, #3]
0x003e6d00  0b 11 40 39     ldrb     w11, [x8, #4]
0x003e6d04  0a 12 80 52     mov      w10, #0x90
0x003e6d08  6b 01 0a 4a     eor      w11, w11, w10
0x003e6d0c  ab 11 00 39     strb     w11, [x13, #4]
0x003e6d10  0b 15 40 39     ldrb     w11, [x8, #5]
0x003e6d14  6b 01 1e 52     eor      w11, w11, #4
0x003e6d18  ab 15 00 39     strb     w11, [x13, #5]
0x003e6d1c  0b 19 40 39     ldrb     w11, [x8, #6]
0x003e6d20  ec 1a 80 52     mov      w12, #0xd7
0x003e6d24  6b 01 0c 4a     eor      w11, w11, w12
0x003e6d28  ab 19 00 39     strb     w11, [x13, #6]
0x003e6d2c  0b 1d 40 39     ldrb     w11, [x8, #7]
0x003e6d30  4e 0d 80 52     mov      w14, #0x6a
0x003e6d34  6b 01 0e 4a     eor      w11, w11, w14
0x003e6d38  ab 1d 00 39     strb     w11, [x13, #7]
0x003e6d3c  0b 21 40 39     ldrb     w11, [x8, #8]
0x003e6d40  ea 05 80 52     mov      w10, #0x2f
0x003e6d44  6b 01 0a 4a     eor      w11, w11, w10
0x003e6d48  f9 05 80 52     mov      w25, #0x2f
0x003e6d4c  ab 21 00 39     strb     w11, [x13, #8]
0x003e6d50  0b 25 40 39     ldrb     w11, [x8, #9]
0x003e6d54  6b 01 0e 4a     eor      w11, w11, w14
0x003e6d58  ab 25 00 39     strb     w11, [x13, #9]
0x003e6d5c  0b 29 40 39     ldrb     w11, [x8, #0xa]
0x003e6d60  0e 15 80 52     mov      w14, #0xa8
0x003e6d64  6b 01 0e 4a     eor      w11, w11, w14
0x003e6d68  ab 29 00 39     strb     w11, [x13, #0xa]
0x003e6d6c  08 2d 40 39     ldrb     w8, [x8, #0xb]
0x003e6d70  8b 12 80 52     mov      w11, #0x94
0x003e6d74  08 01 0b 4a     eor      w8, w8, w11
0x003e6d78  a8 2d 00 39     strb     w8, [x13, #0xb]
0x003e6d7c  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6d80  08 f9 04 91     add      x8, x8, #0x13e
0x003e6d84  0b 01 40 39     ldrb     w11, [x8]
0x003e6d88  db 1b 80 52     mov      w27, #0xde
0x003e6d8c  6b 01 1b 4a     eor      w11, w11, w27
0x003e6d90  cd 0b 00 d0     adrp     x13, #0x560000
0x003e6d94  ad 29 05 91     add      x13, x13, #0x14a
0x003e6d98  ab 01 00 39     strb     w11, [x13]
0x003e6d9c  0b 05 40 39     ldrb     w11, [x8, #1]
0x003e6da0  6b 79 1b 52     eor      w11, w11, #0xffffffef
0x003e6da4  ab 05 00 39     strb     w11, [x13, #1]
0x003e6da8  0b 09 40 39     ldrb     w11, [x8, #2]
0x003e6dac  6b e5 01 52     eor      w11, w11, #0x99999999
0x003e6db0  ab 09 00 39     strb     w11, [x13, #2]
0x003e6db4  0b 0d 40 39     ldrb     w11, [x8, #3]
0x003e6db8  6b e1 02 52     eor      w11, w11, #0x44444444
0x003e6dbc  ab 0d 00 39     strb     w11, [x13, #3]
0x003e6dc0  0b 11 40 39     ldrb     w11, [x8, #4]
0x003e6dc4  6b 01 03 4a     eor      w11, w11, w3
0x003e6dc8  ab 11 00 39     strb     w11, [x13, #4]
0x003e6dcc  0b 15 40 39     ldrb     w11, [x8, #5]
0x003e6dd0  b1 17 80 52     mov      w17, #0xbd
0x003e6dd4  6b 01 11 4a     eor      w11, w11, w17
0x003e6dd8  ab 15 00 39     strb     w11, [x13, #5]
0x003e6ddc  0b 19 40 39     ldrb     w11, [x8, #6]
0x003e6de0  6b 01 00 52     eor      w11, w11, #1
0x003e6de4  ab 19 00 39     strb     w11, [x13, #6]
0x003e6de8  0b 1d 40 39     ldrb     w11, [x8, #7]
0x003e6dec  75 0a 80 52     mov      w21, #0x53
0x003e6df0  6b 01 15 4a     eor      w11, w11, w21
0x003e6df4  ab 1d 00 39     strb     w11, [x13, #7]
0x003e6df8  0b 21 40 39     ldrb     w11, [x8, #8]
0x003e6dfc  69 01 09 4a     eor      w9, w11, w9
0x003e6e00  a9 21 00 39     strb     w9, [x13, #8]
0x003e6e04  09 25 40 39     ldrb     w9, [x8, #9]
0x003e6e08  ab 0f 80 52     mov      w11, #0x7d
0x003e6e0c  29 01 0b 4a     eor      w9, w9, w11
0x003e6e10  a9 25 00 39     strb     w9, [x13, #9]
0x003e6e14  09 29 40 39     ldrb     w9, [x8, #0xa]
0x003e6e18  29 71 1b 52     eor      w9, w9, #0xffffffe3
0x003e6e1c  a9 29 00 39     strb     w9, [x13, #0xa]
0x003e6e20  08 2d 40 39     ldrb     w8, [x8, #0xb]
0x003e6e24  a9 15 80 52     mov      w9, #0xad
0x003e6e28  08 01 09 4a     eor      w8, w8, w9
0x003e6e2c  a8 2d 00 39     strb     w8, [x13, #0xb]
0x003e6e30  c8 0b 00 d0     adrp     x8, #0x560000
0x003e6e34  08 81 08 91     add      x8, x8, #0x220
0x003e6e38  09 01 40 79     ldrh     w9, [x8]
0x003e6e3c  0b 5b 9d 52     mov      w11, #0xead8
0x003e6e40  29 01 0b 4a     eor      w9, w9, w11
0x003e6e44  cb 0b 00 d0     adrp     x11, #0x560000
0x003e6e48  6b 01 09 91     add      x11, x11, #0x240
0x003e6e4c  69 01 00 79     strh     w9, [x11]
0x003e6e50  09 05 40 79     ldrh     w9, [x8, #2]
0x003e6e54  0d 9a 95 52     mov      w13, #0xacd0
0x003e6e58  29 01 0d 4a     eor      w9, w9, w13
0x003e6e5c  69 05 00 79     strh     w9, [x11, #2]
0x003e6e60  09 09 40 79     ldrh     w9, [x8, #4]
0x003e6e64  6d ea 8b 52     mov      w13, #0x5f53
0x003e6e68  29 01 0d 4a     eor      w9, w9, w13
0x003e6e6c  69 09 00 79     strh     w9, [x11, #4]
0x003e6e70  09 0d 40 79     ldrh     w9, [x8, #6]
0x003e6e74  4d 46 88 52     mov      w13, #0x4232
0x003e6e78  29 01 0d 4a     eor      w9, w9, w13
0x003e6e7c  69 0d 00 79     strh     w9, [x11, #6]
0x003e6e80  09 11 40 79     ldrh     w9, [x8, #8]
0x003e6e84  cd ac 93 52     mov      w13, #0x9d66
0x003e6e88  29 01 0d 4a     eor      w9, w9, w13
0x003e6e8c  69 11 00 79     strh     w9, [x11, #8]
0x003e6e90  09 15 40 79     ldrh     w9, [x8, #0xa]
0x003e6e94  2d 8e 91 52     mov      w13, #0x8c71
0x003e6e98  29 01 0d 4a     eor      w9, w9, w13
0x003e6e9c  69 15 00 79     strh     w9, [x11, #0xa]
0x003e6ea0  09 19 40 79     ldrh     w9, [x8, #0xc]
0x003e6ea4  0d fc 8c 52     mov      w13, #0x67e0
0x003e6ea8  29 01 0d 4a     eor      w9, w9, w13
0x003e6eac  69 19 00 79     strh     w9, [x11, #0xc]
0x003e6eb0  09 1d 40 79     ldrh     w9, [x8, #0xe]
0x003e6eb4  cd 78 8c 52     mov      w13, #0x63c6
0x003e6eb8  29 01 0d 4a     eor      w9, w9, w13
0x003e6ebc  69 1d 00 79     strh     w9, [x11, #0xe]
0x003e6ec0  09 21 40 79     ldrh     w9, [x8, #0x10]
0x003e6ec4  ad ff 89 52     mov      w13, #0x4ffd
0x003e6ec8  29 01 0d 4a     eor      w9, w9, w13
0x003e6ecc  69 21 00 79     strh     w9, [x11, #0x10]
0x003e6ed0  09 25 40 79     ldrh     w9, [x8, #0x12]
0x003e6ed4  0d 5a 85 52     mov      w13, #0x2ad0
0x003e6ed8  29 01 0d 4a     eor      w9, w9, w13
0x003e6edc  69 25 00 79     strh     w9, [x11, #0x12]
0x003e6ee0  08 29 40 79     ldrh     w8, [x8, #0x14]
0x003e6ee4  09 f7 86 52     mov      w9, #0x37b8
0x003e6ee8  08 01 09 4a     eor      w8, w8, w9
0x003e6eec  68 29 00 79     strh     w8, [x11, #0x14]
0x003e6ef0  c9 0b 00 b0     adrp     x9, #0x55f000
0x003e6ef4  29 01 32 91     add      x9, x9, #0xc80
0x003e6ef8  28 01 40 39     ldrb     w8, [x9]
0x003e6efc  4b 0b 80 52     mov      w11, #0x5a
0x003e6f00  0b 01 0b 4a     eor      w11, w8, w11
0x003e6f04  58 0b 80 52     mov      w24, #0x5a
0x003e6f08  c8 0b 00 b0     adrp     x8, #0x55f000
0x003e6f0c  08 81 32 91     add      x8, x8, #0xca0
0x003e6f10  0b 01 00 39     strb     w11, [x8]
0x003e6f14  2b 05 40 39     ldrb     w11, [x9, #1]
0x003e6f18  2d 0b 80 52     mov      w13, #0x59
0x003e6f1c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6f20  0b 05 00 39     strb     w11, [x8, #1]
0x003e6f24  2b 09 40 39     ldrb     w11, [x9, #2]
0x003e6f28  cd 16 80 52     mov      w13, #0xb6
0x003e6f2c  6b 01 0d 4a     eor      w11, w11, w13
0x003e6f30  0b 09 00 39     strb     w11, [x8, #2]
0x003e6f34  2b 0d 40 39     ldrb     w11, [x9, #3]
0x003e6f38  6b 11 1f 52     eor      w11, w11, #0x3e
0x003e6f3c  0b 0d 00 39     strb     w11, [x8, #3]
0x003e6f40  2b 11 40 39     ldrb     w11, [x9, #4]
0x003e6f44  ea 08 80 52     mov      w10, #0x47
0x003e6f48  6b 01 0a 4a     eor      w11, w11, w10
0x003e6f4c  0b 11 00 39     strb     w11, [x8, #4]
0x003e6f50  2b 15 40 39     ldrb     w11, [x9, #5]
0x003e6f54  42 03 80 52     mov      w2, #0x1a
0x003e6f58  6b 01 02 4a     eor      w11, w11, w2
0x003e6f5c  0b 15 00 39     strb     w11, [x8, #5]
0x003e6f60  2b 19 40 39     ldrb     w11, [x9, #6]
0x003e6f64  6b 15 1e 52     eor      w11, w11, #0xfc
0x003e6f68  0b 19 00 39     strb     w11, [x8, #6]
0x003e6f6c  2b 1d 40 39     ldrb     w11, [x9, #7]
0x003e6f70  ad 02 80 52     mov      w13, #0x15
0x003e6f74  6b 01 0d 4a     eor      w11, w11, w13
0x003e6f78  0b 1d 00 39     strb     w11, [x8, #7]
0x003e6f7c  2b 21 40 39     ldrb     w11, [x9, #8]
0x003e6f80  2d 01 80 52     mov      w13, #9
0x003e6f84  6b 01 0d 4a     eor      w11, w11, w13
0x003e6f88  0b 21 00 39     strb     w11, [x8, #8]
0x003e6f8c  2b 25 40 39     ldrb     w11, [x9, #9]
0x003e6f90  6b 71 1a 52     eor      w11, w11, #0xffffffc7
0x003e6f94  0b 25 00 39     strb     w11, [x8, #9]
0x003e6f98  2b 29 40 39     ldrb     w11, [x9, #0xa]
0x003e6f9c  8f 0b 80 52     mov      w15, #0x5c
0x003e6fa0  6b 01 0f 4a     eor      w11, w11, w15
0x003e6fa4  0b 29 00 39     strb     w11, [x8, #0xa]
0x003e6fa8  2b 2d 40 39     ldrb     w11, [x9, #0xb]
0x003e6fac  8d 13 80 52     mov      w13, #0x9c
0x003e6fb0  6b 01 0d 4a     eor      w11, w11, w13
0x003e6fb4  0b 2d 00 39     strb     w11, [x8, #0xb]
0x003e6fb8  2b 31 40 39     ldrb     w11, [x9, #0xc]
0x003e6fbc  65 12 80 52     mov      w5, #0x93
0x003e6fc0  6b 01 05 4a     eor      w11, w11, w5
0x003e6fc4  0b 31 00 39     strb     w11, [x8, #0xc]
0x003e6fc8  2b 35 40 39     ldrb     w11, [x9, #0xd]
0x003e6fcc  6b 05 1a 52     eor      w11, w11, #0xc0
0x003e6fd0  0b 35 00 39     strb     w11, [x8, #0xd]
0x003e6fd4  2b 39 40 39     ldrb     w11, [x9, #0xe]
0x003e6fd8  6b 65 19 52     eor      w11, w11, #0xffffff81
0x003e6fdc  0b 39 00 39     strb     w11, [x8, #0xe]
0x003e6fe0  2b 3d 40 39     ldrb     w11, [x9, #0xf]
0x003e6fe4  6b 71 1c 52     eor      w11, w11, #0xfffffff1
0x003e6fe8  0b 3d 00 39     strb     w11, [x8, #0xf]
0x003e6fec  2b 41 40 39     ldrb     w11, [x9, #0x10]
0x003e6ff0  6e 02 80 52     mov      w14, #0x13
0x003e6ff4  6b 01 0e 4a     eor      w11, w11, w14
0x003e6ff8  0b 41 00 39     strb     w11, [x8, #0x10]
0x003e6ffc  2b 45 40 39     ldrb     w11, [x9, #0x11]
0x003e7000  6b 79 1e 52     eor      w11, w11, #0xfffffffd
0x003e7004  0b 45 00 39     strb     w11, [x8, #0x11]
0x003e7008  2b 49 40 39     ldrb     w11, [x9, #0x12]
0x003e700c  ce 19 80 52     mov      w14, #0xce
0x003e7010  6b 01 0e 4a     eor      w11, w11, w14
0x003e7014  0b 49 00 39     strb     w11, [x8, #0x12]
0x003e7018  2b 4d 40 39     ldrb     w11, [x9, #0x13]
0x003e701c  ae 12 80 52     mov      w14, #0x95
0x003e7020  6b 01 0e 4a     eor      w11, w11, w14
0x003e7024  0b 4d 00 39     strb     w11, [x8, #0x13]
0x003e7028  2b 51 40 39     ldrb     w11, [x9, #0x14]
0x003e702c  6b e5 03 52     eor      w11, w11, #0x66666666
0x003e7030  0b 51 00 39     strb     w11, [x8, #0x14]
0x003e7034  2b 55 40 39     ldrb     w11, [x9, #0x15]
0x003e7038  6b 09 1b 52     eor      w11, w11, #0xe0
0x003e703c  0b 55 00 39     strb     w11, [x8, #0x15]
0x003e7040  2b 59 40 39     ldrb     w11, [x9, #0x16]
0x003e7044  2e 11 80 52     mov      w14, #0x89
0x003e7048  6b 01 0e 4a     eor      w11, w11, w14
0x003e704c  0b 59 00 39     strb     w11, [x8, #0x16]
0x003e7050  2b 5d 40 39     ldrb     w11, [x9, #0x17]
0x003e7054  6b 01 0d 4a     eor      w11, w11, w13
0x003e7058  0b 5d 00 39     strb     w11, [x8, #0x17]
0x003e705c  2d 61 40 39     ldrb     w13, [x9, #0x18]
0x003e7060  cb 18 80 52     mov      w11, #0xc6
0x003e7064  ad 01 0b 4a     eor      w13, w13, w11
0x003e7068  0d 61 00 39     strb     w13, [x8, #0x18]
0x003e706c  2d 65 40 39     ldrb     w13, [x9, #0x19]
0x003e7070  ad 01 0c 4a     eor      w13, w13, w12
0x003e7074  0d 65 00 39     strb     w13, [x8, #0x19]
0x003e7078  2d 69 40 39     ldrb     w13, [x9, #0x1a]
0x003e707c  4e 09 80 52     mov      w14, #0x4a
0x003e7080  ad 01 0e 4a     eor      w13, w13, w14
0x003e7084  0d 69 00 39     strb     w13, [x8, #0x1a]
0x003e7088  2d 6d 40 39     ldrb     w13, [x9, #0x1b]
0x003e708c  ce 11 80 52     mov      w14, #0x8e
0x003e7090  ad 01 0e 4a     eor      w13, w13, w14
0x003e7094  0d 6d 00 39     strb     w13, [x8, #0x1b]
0x003e7098  2d 71 40 39     ldrb     w13, [x9, #0x1c]
0x003e709c  ad 01 06 4a     eor      w13, w13, w6
0x003e70a0  0d 71 00 39     strb     w13, [x8, #0x1c]
0x003e70a4  2d 75 40 39     ldrb     w13, [x9, #0x1d]
0x003e70a8  ad 05 1e 52     eor      w13, w13, #0xc
0x003e70ac  0d 75 00 39     strb     w13, [x8, #0x1d]
0x003e70b0  2e 79 40 39     ldrb     w14, [x9, #0x1e]
0x003e70b4  84 18 80 52     mov      w4, #0xc4
0x003e70b8  ce 01 04 4a     eor      w14, w14, w4
0x003e70bc  0e 79 00 39     strb     w14, [x8, #0x1e]
0x003e70c0  29 7d 40 39     ldrb     w9, [x9, #0x1f]
0x003e70c4  ce 1c 80 52     mov      w14, #0xe6
0x003e70c8  2e 01 0e 4a     eor      w14, w9, w14
0x003e70cc  c9 0b 00 b0     adrp     x9, #0x560000
0x003e70d0  29 01 04 91     add      x9, x9, #0x100
0x003e70d4  0e 7d 00 39     strb     w14, [x8, #0x1f]
0x003e70d8  28 01 40 79     ldrh     w8, [x9]
0x003e70dc  8e c8 81 52     mov      w14, #0xe44
0x003e70e0  08 01 0e 4a     eor      w8, w8, w14
0x003e70e4  ce 0b 00 b0     adrp     x14, #0x560000
0x003e70e8  ce 81 04 91     add      x14, x14, #0x120
0x003e70ec  c8 01 00 79     strh     w8, [x14]
0x003e70f0  28 05 40 79     ldrh     w8, [x9, #2]
0x003e70f4  ed 03 13 aa     mov      x13, x19
0x003e70f8  73 c7 82 52     mov      w19, #0x163b
0x003e70fc  08 01 13 4a     eor      w8, w8, w19
0x003e7100  c8 05 00 79     strh     w8, [x14, #2]
0x003e7104  28 09 40 79     ldrh     w8, [x9, #4]
0x003e7108  d3 29 8e 52     mov      w19, #0x714e
0x003e710c  08 01 13 4a     eor      w8, w8, w19
0x003e7110  c8 09 00 79     strh     w8, [x14, #4]
0x003e7114  28 0d 40 79     ldrh     w8, [x9, #6]
0x003e7118  53 b1 84 52     mov      w19, #0x258a
0x003e711c  08 01 13 4a     eor      w8, w8, w19
0x003e7120  c8 0d 00 79     strh     w8, [x14, #6]
0x003e7124  28 11 40 79     ldrh     w8, [x9, #8]
0x003e7128  73 cc 8c 52     mov      w19, #0x6663
0x003e712c  08 01 13 4a     eor      w8, w8, w19
0x003e7130  c8 11 00 79     strh     w8, [x14, #8]
0x003e7134  28 15 40 79     ldrh     w8, [x9, #0xa]
0x003e7138  73 52 9a 52     mov      w19, #0xd293
0x003e713c  08 01 13 4a     eor      w8, w8, w19
0x003e7140  c8 15 00 79     strh     w8, [x14, #0xa]
0x003e7144  28 19 40 79     ldrh     w8, [x9, #0xc]
0x003e7148  53 a4 8b 52     mov      w19, #0x5d22
0x003e714c  08 01 13 4a     eor      w8, w8, w19
0x003e7150  c8 19 00 79     strh     w8, [x14, #0xc]
0x003e7154  28 1d 40 79     ldrh     w8, [x9, #0xe]
0x003e7158  53 f0 8a 52     mov      w19, #0x5782
0x003e715c  08 01 13 4a     eor      w8, w8, w19
0x003e7160  c8 1d 00 79     strh     w8, [x14, #0xe]
0x003e7164  28 21 40 79     ldrh     w8, [x9, #0x10]
0x003e7168  b3 90 9d 52     mov      w19, #0xec85
0x003e716c  08 01 13 4a     eor      w8, w8, w19
0x003e7170  c8 21 00 79     strh     w8, [x14, #0x10]
0x003e7174  28 25 40 79     ldrh     w8, [x9, #0x12]
0x003e7178  b3 9e 8a 52     mov      w19, #0x54f5
0x003e717c  08 01 13 4a     eor      w8, w8, w19
0x003e7180  c8 25 00 79     strh     w8, [x14, #0x12]
0x003e7184  28 29 40 79     ldrh     w8, [x9, #0x14]
0x003e7188  f3 ec 84 52     mov      w19, #0x2767
0x003e718c  08 01 13 4a     eor      w8, w8, w19
0x003e7190  c8 29 00 79     strh     w8, [x14, #0x14]
0x003e7194  28 2d 40 79     ldrh     w8, [x9, #0x16]
0x003e7198  93 74 97 52     mov      w19, #0xbba4
0x003e719c  08 01 13 4a     eor      w8, w8, w19
0x003e71a0  c8 2d 00 79     strh     w8, [x14, #0x16]
0x003e71a4  28 31 40 79     ldrh     w8, [x9, #0x18]
0x003e71a8  b3 10 90 52     mov      w19, #0x8085
0x003e71ac  08 01 13 4a     eor      w8, w8, w19
0x003e71b0  c8 31 00 79     strh     w8, [x14, #0x18]
0x003e71b4  28 35 40 79     ldrh     w8, [x9, #0x1a]
0x003e71b8  93 9b 98 52     mov      w19, #0xc4dc
0x003e71bc  08 01 13 4a     eor      w8, w8, w19
0x003e71c0  c8 35 00 79     strh     w8, [x14, #0x1a]
0x003e71c4  28 39 40 79     ldrh     w8, [x9, #0x1c]
0x003e71c8  c9 76 80 52     mov      w9, #0x3b6
0x003e71cc  08 01 09 4a     eor      w8, w8, w9
0x003e71d0  c8 39 00 79     strh     w8, [x14, #0x1c]
0x003e71d4  c8 0b 00 b0     adrp     x8, #0x560000
0x003e71d8  08 69 02 91     add      x8, x8, #0x9a
0x003e71dc  09 01 40 39     ldrb     w9, [x8]
0x003e71e0  29 f1 00 52     eor      w9, w9, #0x55555555
0x003e71e4  ce 0b 00 b0     adrp     x14, #0x560000
0x003e71e8  ce a5 02 91     add      x14, x14, #0xa9
0x003e71ec  c9 01 00 39     strb     w9, [x14]
0x003e71f0  13 05 40 39     ldrb     w19, [x8, #1]
0x003e71f4  29 03 80 52     mov      w9, #0x19
0x003e71f8  73 02 09 4a     eor      w19, w19, w9
0x003e71fc  d3 05 00 39     strb     w19, [x14, #1]
0x003e7200  13 09 40 39     ldrb     w19, [x8, #2]
0x003e7204  e9 03 14 aa     mov      x9, x20
0x003e7208  74 0c 80 52     mov      w20, #0x63
0x003e720c  73 02 14 4a     eor      w19, w19, w20
0x003e7210  d3 09 00 39     strb     w19, [x14, #2]
0x003e7214  13 0d 40 39     ldrb     w19, [x8, #3]
0x003e7218  34 06 80 52     mov      w20, #0x31
0x003e721c  73 02 14 4a     eor      w19, w19, w20
0x003e7220  d3 0d 00 39     strb     w19, [x14, #3]
0x003e7224  13 11 40 39     ldrb     w19, [x8, #4]
0x003e7228  73 02 16 4a     eor      w19, w19, w22
0x003e722c  d3 11 00 39     strb     w19, [x14, #4]
0x003e7230  13 15 40 39     ldrb     w19, [x8, #5]
0x003e7234  73 76 1c 52     eor      w19, w19, #0xfffffff3
0x003e7238  d3 15 00 39     strb     w19, [x14, #5]
0x003e723c  13 19 40 39     ldrb     w19, [x8, #6]
0x003e7240  d4 12 80 52     mov      w20, #0x96
0x003e7244  73 02 14 4a     eor      w19, w19, w20
0x003e7248  d3 19 00 39     strb     w19, [x14, #6]
0x003e724c  13 1d 40 39     ldrb     w19, [x8, #7]
0x003e7250  73 0a 1c 52     eor      w19, w19, #0x70
0x003e7254  d3 1d 00 39     strb     w19, [x14, #7]
0x003e7258  13 21 40 39     ldrb     w19, [x8, #8]
0x003e725c  16 05 80 52     mov      w22, #0x28
0x003e7260  73 02 16 4a     eor      w19, w19, w22
0x003e7264  d3 21 00 39     strb     w19, [x14, #8]
0x003e7268  13 25 40 39     ldrb     w19, [x8, #9]
0x003e726c  73 12 00 52     eor      w19, w19, #0x1f
0x003e7270  d3 25 00 39     strb     w19, [x14, #9]
0x003e7274  13 29 40 39     ldrb     w19, [x8, #0xa]
0x003e7278  73 02 1e 4a     eor      w19, w19, w30
0x003e727c  d3 29 00 39     strb     w19, [x14, #0xa]
0x003e7280  13 2d 40 39     ldrb     w19, [x8, #0xb]
0x003e7284  73 02 14 4a     eor      w19, w19, w20
0x003e7288  d3 2d 00 39     strb     w19, [x14, #0xb]
0x003e728c  13 31 40 39     ldrb     w19, [x8, #0xc]
0x003e7290  9c 06 80 52     mov      w28, #0x34
0x003e7294  73 02 1c 4a     eor      w19, w19, w28
0x003e7298  d3 31 00 39     strb     w19, [x14, #0xc]
0x003e729c  13 35 40 39     ldrb     w19, [x8, #0xd]
0x003e72a0  73 02 18 4a     eor      w19, w19, w24
0x003e72a4  d3 35 00 39     strb     w19, [x14, #0xd]
0x003e72a8  08 39 40 39     ldrb     w8, [x8, #0xe]
0x003e72ac  36 09 80 52     mov      w22, #0x49
0x003e72b0  08 01 16 4a     eor      w8, w8, w22
0x003e72b4  d3 0b 00 b0     adrp     x19, #0x560000
0x003e72b8  73 82 01 91     add      x19, x19, #0x60
0x003e72bc  c8 39 00 39     strb     w8, [x14, #0xe]
0x003e72c0  68 02 40 79     ldrh     w8, [x19]
0x003e72c4  4e 78 9e 52     mov      w14, #0xf3c2
0x003e72c8  08 01 0e 4a     eor      w8, w8, w14
0x003e72cc  ce 0b 00 b0     adrp     x14, #0x560000
0x003e72d0  ce 01 02 91     add      x14, x14, #0x80
0x003e72d4  c8 01 00 79     strh     w8, [x14]
0x003e72d8  68 06 40 79     ldrh     w8, [x19, #2]
0x003e72dc  d4 27 9c 52     mov      w20, #0xe13e
0x003e72e0  08 01 14 4a     eor      w8, w8, w20
0x003e72e4  c8 05 00 79     strh     w8, [x14, #2]
0x003e72e8  68 0a 40 79     ldrh     w8, [x19, #4]
0x003e72ec  94 e4 94 52     mov      w20, #0xa724
0x003e72f0  08 01 14 4a     eor      w8, w8, w20
0x003e72f4  c8 09 00 79     strh     w8, [x14, #4]
0x003e72f8  68 0e 40 79     ldrh     w8, [x19, #6]
0x003e72fc  74 c9 8a 52     mov      w20, #0x564b
0x003e7300  08 01 14 4a     eor      w8, w8, w20
0x003e7304  c8 0d 00 79     strh     w8, [x14, #6]
0x003e7308  68 12 40 79     ldrh     w8, [x19, #8]
0x003e730c  f4 cc 8e 52     mov      w20, #0x7667
0x003e7310  08 01 14 4a     eor      w8, w8, w20
0x003e7314  c8 11 00 79     strh     w8, [x14, #8]
0x003e7318  68 16 40 79     ldrh     w8, [x19, #0xa]
0x003e731c  f4 81 8f 52     mov      w20, #0x7c0f
0x003e7320  08 01 14 4a     eor      w8, w8, w20
0x003e7324  c8 15 00 79     strh     w8, [x14, #0xa]
0x003e7328  68 1a 40 79     ldrh     w8, [x19, #0xc]
0x003e732c  74 b4 89 52     mov      w20, #0x4da3
0x003e7330  08 01 14 4a     eor      w8, w8, w20
0x003e7334  c8 19 00 79     strh     w8, [x14, #0xc]
0x003e7338  68 1e 40 79     ldrh     w8, [x19, #0xe]
0x003e733c  b4 6a 93 52     mov      w20, #0x9b55
0x003e7340  08 01 14 4a     eor      w8, w8, w20
0x003e7344  c8 1d 00 79     strh     w8, [x14, #0xe]
0x003e7348  68 22 40 79     ldrh     w8, [x19, #0x10]
0x003e734c  94 19 89 52     mov      w20, #0x48cc
0x003e7350  08 01 14 4a     eor      w8, w8, w20
0x003e7354  c8 21 00 79     strh     w8, [x14, #0x10]
0x003e7358  68 26 40 79     ldrh     w8, [x19, #0x12]
0x003e735c  54 76 88 52     mov      w20, #0x43b2
0x003e7360  08 01 14 4a     eor      w8, w8, w20
0x003e7364  c8 25 00 79     strh     w8, [x14, #0x12]
0x003e7368  68 2a 40 79     ldrh     w8, [x19, #0x14]
0x003e736c  34 e1 8b 52     mov      w20, #0x5f09
0x003e7370  08 01 14 4a     eor      w8, w8, w20
0x003e7374  c8 29 00 79     strh     w8, [x14, #0x14]
0x003e7378  68 2e 40 79     ldrh     w8, [x19, #0x16]
0x003e737c  14 14 93 52     mov      w20, #0x98a0
0x003e7380  08 01 14 4a     eor      w8, w8, w20
0x003e7384  c8 2d 00 79     strh     w8, [x14, #0x16]
0x003e7388  68 32 40 79     ldrh     w8, [x19, #0x18]
0x003e738c  73 5b 82 52     mov      w19, #0x12db
0x003e7390  08 01 13 4a     eor      w8, w8, w19
0x003e7394  c8 31 00 79     strh     w8, [x14, #0x18]
0x003e7398  c8 0b 00 b0     adrp     x8, #0x560000
0x003e739c  08 79 06 91     add      x8, x8, #0x19e
0x003e73a0  0e 01 40 79     ldrh     w14, [x8]
0x003e73a4  f3 42 82 52     mov      w19, #0x1217
0x003e73a8  ce 01 13 4a     eor      w14, w14, w19
0x003e73ac  d3 0b 00 b0     adrp     x19, #0x560000
0x003e73b0  73 a2 06 91     add      x19, x19, #0x1a8
0x003e73b4  6e 02 00 79     strh     w14, [x19]
0x003e73b8  0e 05 40 79     ldrh     w14, [x8, #2]
0x003e73bc  34 c3 96 52     mov      w20, #0xb619
0x003e73c0  ce 01 14 4a     eor      w14, w14, w20
0x003e73c4  6e 06 00 79     strh     w14, [x19, #2]
0x003e73c8  0e 09 40 79     ldrh     w14, [x8, #4]
0x003e73cc  54 89 86 52     mov      w20, #0x344a
0x003e73d0  ce 01 14 4a     eor      w14, w14, w20
0x003e73d4  6e 0a 00 79     strh     w14, [x19, #4]
0x003e73d8  0e 0d 40 79     ldrh     w14, [x8, #6]
0x003e73dc  94 ae 83 52     mov      w20, #0x1d74
0x003e73e0  ce 01 14 4a     eor      w14, w14, w20
0x003e73e4  6e 0e 00 79     strh     w14, [x19, #6]
0x003e73e8  08 11 40 79     ldrh     w8, [x8, #8]
0x003e73ec  ae 48 85 52     mov      w14, #0x2a45
0x003e73f0  08 01 0e 4a     eor      w8, w8, w14
0x003e73f4  68 12 00 79     strh     w8, [x19, #8]
0x003e73f8  c8 0b 00 90     adrp     x8, #0x55f000
0x003e73fc  08 c1 3e 91     add      x8, x8, #0xfb0
0x003e7400  13 01 40 39     ldrb     w19, [x8]
0x003e7404  ce 0b 00 90     adrp     x14, #0x55f000
0x003e7408  ce 41 3f 91     add      x14, x14, #0xfd0
0x003e740c  73 02 10 4a     eor      w19, w19, w16
0x003e7410  d3 01 00 39     strb     w19, [x14]
0x003e7414  13 05 40 39     ldrb     w19, [x8, #1]
0x003e7418  73 02 19 4a     eor      w19, w19, w25
0x003e741c  f0 05 80 52     mov      w16, #0x2f
0x003e7420  d3 05 00 39     strb     w19, [x14, #1]
0x003e7424  13 09 40 39     ldrb     w19, [x8, #2]
0x003e7428  d4 14 80 52     mov      w20, #0xa6
0x003e742c  73 02 14 4a     eor      w19, w19, w20
0x003e7430  d3 09 00 39     strb     w19, [x14, #2]
0x003e7434  13 0d 40 39     ldrb     w19, [x8, #3]
0x003e7438  cc 02 80 52     mov      w12, #0x16
0x003e743c  73 02 0c 4a     eor      w19, w19, w12
0x003e7440  d3 0d 00 39     strb     w19, [x14, #3]
0x003e7444  13 11 40 39     ldrb     w19, [x8, #4]
0x003e7448  14 17 80 52     mov      w20, #0xb8
0x003e744c  73 02 14 4a     eor      w19, w19, w20
0x003e7450  d3 11 00 39     strb     w19, [x14, #4]
0x003e7454  13 15 40 39     ldrb     w19, [x8, #5]
0x003e7458  60 02 00 4a     eor      w0, w19, w0
0x003e745c  c0 15 00 39     strb     w0, [x14, #5]
0x003e7460  00 19 40 39     ldrb     w0, [x8, #6]
0x003e7464  00 6c 1b 52     eor      w0, w0, #0xffffffe1
0x003e7468  c0 19 00 39     strb     w0, [x14, #6]
0x003e746c  00 1d 40 39     ldrb     w0, [x8, #7]
0x003e7470  d3 09 80 52     mov      w19, #0x4e
0x003e7474  00 00 13 4a     eor      w0, w0, w19
0x003e7478  c0 1d 00 39     strb     w0, [x14, #7]
0x003e747c  00 21 40 39     ldrb     w0, [x8, #8]
0x003e7480  00 00 1e 4a     eor      w0, w0, w30
0x003e7484  c0 21 00 39     strb     w0, [x14, #8]
0x003e7488  00 25 40 39     ldrb     w0, [x8, #9]
0x003e748c  00 74 1d 52     eor      w0, w0, #0xfffffff9
0x003e7490  c0 25 00 39     strb     w0, [x14, #9]
0x003e7494  00 29 40 39     ldrb     w0, [x8, #0xa]
0x003e7498  73 07 80 52     mov      w19, #0x3b
0x003e749c  00 00 13 4a     eor      w0, w0, w19
0x003e74a0  7e 1d 80 52     mov      w30, #0xeb
0x003e74a4  c0 29 00 39     strb     w0, [x14, #0xa]
0x003e74a8  00 2d 40 39     ldrb     w0, [x8, #0xb]
0x003e74ac  00 00 1b 4a     eor      w0, w0, w27
0x003e74b0  c0 2d 00 39     strb     w0, [x14, #0xb]
0x003e74b4  00 31 40 39     ldrb     w0, [x8, #0xc]
0x003e74b8  00 00 1e 4a     eor      w0, w0, w30
0x003e74bc  c0 31 00 39     strb     w0, [x14, #0xc]
0x003e74c0  00 35 40 39     ldrb     w0, [x8, #0xd]
0x003e74c4  00 00 1f 52     eor      w0, w0, #2
0x003e74c8  c0 35 00 39     strb     w0, [x14, #0xd]
0x003e74cc  00 39 40 39     ldrb     w0, [x8, #0xe]
0x003e74d0  18 0b 80 52     mov      w24, #0x58
0x003e74d4  00 00 18 4a     eor      w0, w0, w24
0x003e74d8  c0 39 00 39     strb     w0, [x14, #0xe]
0x003e74dc  00 3d 40 39     ldrb     w0, [x8, #0xf]
0x003e74e0  00 00 04 4a     eor      w0, w0, w4
0x003e74e4  c0 3d 00 39     strb     w0, [x14, #0xf]
0x003e74e8  00 41 40 39     ldrb     w0, [x8, #0x10]
0x003e74ec  00 78 1a 52     eor      w0, w0, #0xffffffdf
0x003e74f0  c0 41 00 39     strb     w0, [x14, #0x10]
0x003e74f4  00 45 40 39     ldrb     w0, [x8, #0x11]
0x003e74f8  00 00 07 4a     eor      w0, w0, w7
0x003e74fc  c0 45 00 39     strb     w0, [x14, #0x11]
0x003e7500  07 49 40 39     ldrb     w7, [x8, #0x12]
0x003e7504  e0 04 80 52     mov      w0, #0x27
0x003e7508  e7 00 00 4a     eor      w7, w7, w0
0x003e750c  c7 49 00 39     strb     w7, [x14, #0x12]
0x003e7510  07 4d 40 39     ldrb     w7, [x8, #0x13]
0x003e7514  e7 00 01 4a     eor      w7, w7, w1
0x003e7518  c7 4d 00 39     strb     w7, [x14, #0x13]
0x003e751c  08 51 40 39     ldrb     w8, [x8, #0x14]
0x003e7520  08 e1 02 52     eor      w8, w8, #0x44444444
0x003e7524  c8 51 00 39     strb     w8, [x14, #0x14]
0x003e7528  c8 0b 00 90     adrp     x8, #0x55f000
0x003e752c  08 29 3e 91     add      x8, x8, #0xf8a
0x003e7530  0e 01 40 39     ldrb     w14, [x8]
0x003e7534  ce 01 11 4a     eor      w14, w14, w17
0x003e7538  d9 0b 00 90     adrp     x25, #0x55f000
0x003e753c  39 67 3e 91     add      x25, x25, #0xf99
0x003e7540  2e 03 00 39     strb     w14, [x25]
0x003e7544  0e 05 40 39     ldrb     w14, [x8, #1]
0x003e7548  67 04 80 52     mov      w7, #0x23
0x003e754c  ce 01 07 4a     eor      w14, w14, w7
0x003e7550  2e 07 00 39     strb     w14, [x25, #1]
0x003e7554  0e 09 40 39     ldrb     w14, [x8, #2]
0x003e7558  ce 75 19 52     eor      w14, w14, #0xffffff9f
0x003e755c  2e 0b 00 39     strb     w14, [x25, #2]
0x003e7560  0e 0d 40 39     ldrb     w14, [x8, #3]
0x003e7564  47 14 80 52     mov      w7, #0xa2
0x003e7568  ce 01 07 4a     eor      w14, w14, w7
0x003e756c  2e 0f 00 39     strb     w14, [x25, #3]
0x003e7570  0e 11 40 39     ldrb     w14, [x8, #4]
0x003e7574  ce 09 00 52     eor      w14, w14, #7
0x003e7578  d3 05 80 52     mov      w19, #0x2e
0x003e757c  2e 13 00 39     strb     w14, [x25, #4]
0x003e7580  0e 15 40 39     ldrb     w14, [x8, #5]
0x003e7584  ce 01 1a 4a     eor      w14, w14, w26
0x003e7588  2e 17 00 39     strb     w14, [x25, #5]
0x003e758c  0e 19 40 39     ldrb     w14, [x8, #6]
0x003e7590  ce 01 13 4a     eor      w14, w14, w19
0x003e7594  2e 1b 00 39     strb     w14, [x25, #6]
0x003e7598  0e 1d 40 39     ldrb     w14, [x8, #7]
0x003e759c  ce 01 0a 4a     eor      w14, w14, w10
0x003e75a0  2e 1f 00 39     strb     w14, [x25, #7]
0x003e75a4  0e 21 40 39     ldrb     w14, [x8, #8]
0x003e75a8  6a 14 80 52     mov      w10, #0xa3
0x003e75ac  ce 01 0a 4a     eor      w14, w14, w10
0x003e75b0  2e 23 00 39     strb     w14, [x25, #8]
0x003e75b4  0e 25 40 39     ldrb     w14, [x8, #9]
0x003e75b8  ce 01 15 4a     eor      w14, w14, w21
0x003e75bc  2e 27 00 39     strb     w14, [x25, #9]
0x003e75c0  0e 29 40 39     ldrb     w14, [x8, #0xa]
0x003e75c4  ce e5 00 52     eor      w14, w14, #0x33333333
0x003e75c8  2e 2b 00 39     strb     w14, [x25, #0xa]
0x003e75cc  0e 2d 40 39     ldrb     w14, [x8, #0xb]
0x003e75d0  ee 03 2e 2a     mvn      w14, w14
0x003e75d4  2e 2f 00 39     strb     w14, [x25, #0xb]
0x003e75d8  55 1b 80 52     mov      w21, #0xda
0x003e75dc  13 31 40 39     ldrb     w19, [x8, #0xc]
0x003e75e0  2e 17 80 52     mov      w14, #0xb9
0x003e75e4  73 02 0e 4a     eor      w19, w19, w14
0x003e75e8  33 33 00 39     strb     w19, [x25, #0xc]
0x003e75ec  13 35 40 39     ldrb     w19, [x8, #0xd]
0x003e75f0  73 02 15 4a     eor      w19, w19, w21
0x003e75f4  33 37 00 39     strb     w19, [x25, #0xd]
0x003e75f8  08 39 40 39     ldrb     w8, [x8, #0xe]
0x003e75fc  33 08 80 52     mov      w19, #0x41
0x003e7600  13 01 13 4a     eor      w19, w8, w19
0x003e7604  c8 0b 00 90     adrp     x8, #0x55f000
0x003e7608  08 41 3d 91     add      x8, x8, #0xf50
0x003e760c  33 3b 00 39     strb     w19, [x25, #0xe]
0x003e7610  13 01 40 79     ldrh     w19, [x8]
0x003e7614  74 7c 89 52     mov      w20, #0x4be3
0x003e7618  73 02 14 4a     eor      w19, w19, w20
0x003e761c  d9 0b 00 90     adrp     x25, #0x55f000
0x003e7620  39 c3 3d 91     add      x25, x25, #0xf70
0x003e7624  33 03 00 79     strh     w19, [x25]
0x003e7628  13 05 40 79     ldrh     w19, [x8, #2]
0x003e762c  14 e7 89 52     mov      w20, #0x4f38
0x003e7630  73 02 14 4a     eor      w19, w19, w20
0x003e7634  33 07 00 79     strh     w19, [x25, #2]
0x003e7638  d3 36 91 52     mov      w19, #0x89b6
0x003e763c  14 09 40 79     ldrh     w20, [x8, #4]
0x003e7640  9a b2 99 52     mov      w26, #0xcd94
0x003e7644  94 02 1a 4a     eor      w20, w20, w26
0x003e7648  34 0b 00 79     strh     w20, [x25, #4]
0x003e764c  14 0d 40 79     ldrh     w20, [x8, #6]
0x003e7650  93 02 13 4a     eor      w19, w20, w19
0x003e7654  33 0f 00 79     strh     w19, [x25, #6]
0x003e7658  13 11 40 79     ldrh     w19, [x8, #8]
0x003e765c  b4 07 95 52     mov      w20, #0xa83d
0x003e7660  73 02 14 4a     eor      w19, w19, w20
0x003e7664  33 13 00 79     strh     w19, [x25, #8]
0x003e7668  b3 3d 85 52     mov      w19, #0x29ed
0x003e766c  14 15 40 79     ldrh     w20, [x8, #0xa]
0x003e7670  7a 65 83 52     mov      w26, #0x1b2b
0x003e7674  94 02 1a 4a     eor      w20, w20, w26
0x003e7678  34 17 00 79     strh     w20, [x25, #0xa]
0x003e767c  14 19 40 79     ldrh     w20, [x8, #0xc]
0x003e7680  93 02 13 4a     eor      w19, w20, w19
0x003e7684  33 1b 00 79     strh     w19, [x25, #0xc]
0x003e7688  13 1d 40 79     ldrh     w19, [x8, #0xe]
0x003e768c  b4 e4 8c 52     mov      w20, #0x6725
0x003e7690  73 02 14 4a     eor      w19, w19, w20
0x003e7694  33 1f 00 79     strh     w19, [x25, #0xe]
0x003e7698  f3 7f 87 52     mov      w19, #0x3bff
0x003e769c  14 21 40 79     ldrh     w20, [x8, #0x10]
0x003e76a0  3a 31 83 52     mov      w26, #0x1989
0x003e76a4  94 02 1a 4a     eor      w20, w20, w26
0x003e76a8  34 23 00 79     strh     w20, [x25, #0x10]
0x003e76ac  14 25 40 79     ldrh     w20, [x8, #0x12]
0x003e76b0  93 02 13 4a     eor      w19, w20, w19
0x003e76b4  33 27 00 79     strh     w19, [x25, #0x12]
0x003e76b8  13 29 40 79     ldrh     w19, [x8, #0x14]
0x003e76bc  14 cd 9c 52     mov      w20, #0xe668
0x003e76c0  73 02 14 4a     eor      w19, w19, w20
0x003e76c4  33 2b 00 79     strh     w19, [x25, #0x14]
0x003e76c8  73 6c 8f 52     mov      w19, #0x7b63
0x003e76cc  14 2d 40 79     ldrh     w20, [x8, #0x16]
0x003e76d0  ba 1a 99 52     mov      w26, #0xc8d5
0x003e76d4  94 02 1a 4a     eor      w20, w20, w26
0x003e76d8  34 2f 00 79     strh     w20, [x25, #0x16]
0x003e76dc  08 31 40 79     ldrh     w8, [x8, #0x18]
0x003e76e0  d4 b1 94 52     mov      w20, #0xa58e
0x003e76e4  08 01 14 4a     eor      w8, w8, w20
0x003e76e8  28 33 00 79     strh     w8, [x25, #0x18]
0x003e76ec  c8 0b 00 b0     adrp     x8, #0x560000
0x003e76f0  08 59 05 91     add      x8, x8, #0x156
0x003e76f4  14 01 40 79     ldrh     w20, [x8]
0x003e76f8  b9 46 95 52     mov      w25, #0xaa35
0x003e76fc  94 02 19 4a     eor      w20, w20, w25
0x003e7700  d9 0b 00 b0     adrp     x25, #0x560000
0x003e7704  39 83 05 91     add      x25, x25, #0x160
0x003e7708  34 03 00 79     strh     w20, [x25]
0x003e770c  14 05 40 79     ldrh     w20, [x8, #2]
0x003e7710  93 02 13 4a     eor      w19, w20, w19
0x003e7714  33 07 00 79     strh     w19, [x25, #2]
0x003e7718  13 09 40 79     ldrh     w19, [x8, #4]
0x003e771c  d4 00 91 52     mov      w20, #0x8806
0x003e7720  73 02 14 4a     eor      w19, w19, w20
0x003e7724  33 0b 00 79     strh     w19, [x25, #4]
0x003e7728  d3 10 80 52     mov      w19, #0x86
0x003e772c  14 0d 40 79     ldrh     w20, [x8, #6]
0x003e7730  da 90 97 52     mov      w26, #0xbc86
0x003e7734  94 02 1a 4a     eor      w20, w20, w26
0x003e7738  34 0f 00 79     strh     w20, [x25, #6]
0x003e773c  08 11 40 79     ldrh     w8, [x8, #8]
0x003e7740  b4 c3 81 52     mov      w20, #0xe1d
0x003e7744  08 01 14 4a     eor      w8, w8, w20
0x003e7748  28 13 00 79     strh     w8, [x25, #8]
0x003e774c  c8 0b 00 90     adrp     x8, #0x55f000
0x003e7750  08 c1 3c 91     add      x8, x8, #0xf30
0x003e7754  14 01 40 39     ldrb     w20, [x8]
0x003e7758  94 0a 1d 52     eor      w20, w20, #0x38
0x003e775c  d9 0b 00 90     adrp     x25, #0x55f000
0x003e7760  39 f7 3c 91     add      x25, x25, #0xf3d
0x003e7764  34 03 00 39     strb     w20, [x25]
0x003e7768  14 05 40 39     ldrb     w20, [x8, #1]
0x003e776c  93 02 13 4a     eor      w19, w20, w19
0x003e7770  33 07 00 39     strb     w19, [x25, #1]
0x003e7774  13 09 40 39     ldrb     w19, [x8, #2]
0x003e7778  73 0a 1f 52     eor      w19, w19, #0xe
0x003e777c  33 0b 00 39     strb     w19, [x25, #2]
0x003e7780  13 0d 40 39     ldrb     w19, [x8, #3]
0x003e7784  6f 02 0f 4a     eor      w15, w19, w15
0x003e7788  9a 02 80 52     mov      w26, #0x14
0x003e778c  2f 0f 00 39     strb     w15, [x25, #3]
0x003e7790  0f 11 40 39     ldrb     w15, [x8, #4]
0x003e7794  ef 01 17 4a     eor      w15, w15, w23
0x003e7798  2f 13 00 39     strb     w15, [x25, #4]
0x003e779c  0f 15 40 39     ldrb     w15, [x8, #5]
0x003e77a0  ef 01 1a 4a     eor      w15, w15, w26
0x003e77a4  2f 17 00 39     strb     w15, [x25, #5]
0x003e77a8  0f 19 40 39     ldrb     w15, [x8, #6]
0x003e77ac  ef 6d 19 52     eor      w15, w15, #0xffffff87
0x003e77b0  2f 1b 00 39     strb     w15, [x25, #6]
0x003e77b4  0f 1d 40 39     ldrb     w15, [x8, #7]
0x003e77b8  ef 01 17 4a     eor      w15, w15, w23
0x003e77bc  2f 1f 00 39     strb     w15, [x25, #7]
0x003e77c0  0f 21 40 39     ldrb     w15, [x8, #8]
0x003e77c4  ef 09 00 52     eor      w15, w15, #7
0x003e77c8  2f 23 00 39     strb     w15, [x25, #8]
0x003e77cc  0f 25 40 39     ldrb     w15, [x8, #9]
0x003e77d0  eb 01 0b 4a     eor      w11, w15, w11
0x003e77d4  2b 27 00 39     strb     w11, [x25, #9]
0x003e77d8  0b 29 40 39     ldrb     w11, [x8, #0xa]
0x003e77dc  8f 1b 80 52     mov      w15, #0xdc
0x003e77e0  6b 01 0f 4a     eor      w11, w11, w15
0x003e77e4  2b 2b 00 39     strb     w11, [x25, #0xa]
0x003e77e8  0b 2d 40 39     ldrb     w11, [x8, #0xb]
0x003e77ec  af 07 80 52     mov      w15, #0x3d
0x003e77f0  6b 01 0f 4a     eor      w11, w11, w15
0x003e77f4  2b 2f 00 39     strb     w11, [x25, #0xb]
0x003e77f8  08 31 40 39     ldrb     w8, [x8, #0xc]
0x003e77fc  08 01 18 4a     eor      w8, w8, w24
0x003e7800  28 33 00 39     strb     w8, [x25, #0xc]
0x003e7804  c8 0b 00 90     adrp     x8, #0x55f000
0x003e7808  08 91 3c 91     add      x8, x8, #0xf24
0x003e780c  0b 01 40 79     ldrh     w11, [x8]
0x003e7810  ef f5 9a 52     mov      w15, #0xd7af
0x003e7814  d9 0b 00 b0     adrp     x25, #0x560000
0x003e7818  39 83 00 91     add      x25, x25, #0x20
0x003e781c  6b 01 0f 4a     eor      w11, w11, w15
0x003e7820  cf 0b 00 90     adrp     x15, #0x55f000
0x003e7824  ef a9 3c 91     add      x15, x15, #0xf2a
0x003e7828  eb 01 00 79     strh     w11, [x15]
0x003e782c  6b 75 98 52     mov      w11, #0xc3ab
0x003e7830  33 1d 80 52     mov      w19, #0xe9
0x003e7834  14 05 40 79     ldrh     w20, [x8, #2]
0x003e7838  77 b8 9e 52     mov      w23, #0xf5c3
0x003e783c  94 02 17 4a     eor      w20, w20, w23
0x003e7840  f4 05 00 79     strh     w20, [x15, #2]
0x003e7844  f4 03 09 aa     mov      x20, x9
0x003e7848  08 09 40 79     ldrh     w8, [x8, #4]
0x003e784c  08 01 0b 4a     eor      w8, w8, w11
0x003e7850  e8 09 00 79     strh     w8, [x15, #4]
0x003e7854  c8 0b 00 90     adrp     x8, #0x55f000
0x003e7858  08 c1 3f 91     add      x8, x8, #0xff0
0x003e785c  0b 01 40 39     ldrb     w11, [x8]
0x003e7860  6b 01 13 4a     eor      w11, w11, w19
0x003e7864  2b 03 00 39     strb     w11, [x25]
0x003e7868  0b 05 40 39     ldrb     w11, [x8, #1]
0x003e786c  2f 0e 80 52     mov      w15, #0x71
0x003e7870  6b 01 0f 4a     eor      w11, w11, w15
0x003e7874  2b 07 00 39     strb     w11, [x25, #1]
0x003e7878  0b 09 40 39     ldrb     w11, [x8, #2]
0x003e787c  6b 01 01 4a     eor      w11, w11, w1
0x003e7880  2b 0b 00 39     strb     w11, [x25, #2]
0x003e7884  0b 0d 40 39     ldrb     w11, [x8, #3]
0x003e7888  af 1e 80 52     mov      w15, #0xf5
0x003e788c  6b 01 0f 4a     eor      w11, w11, w15
0x003e7890  2b 0f 00 39     strb     w11, [x25, #3]
0x003e7894  8b 0a 80 52     mov      w11, #0x54
0x003e7898  0f 11 40 39     ldrb     w15, [x8, #4]
0x003e789c  09 0a 80 52     mov      w9, #0x50
0x003e78a0  ef 01 09 4a     eor      w15, w15, w9
0x003e78a4  2f 13 00 39     strb     w15, [x25, #4]
0x003e78a8  0f 15 40 39     ldrb     w15, [x8, #5]
0x003e78ac  eb 01 0b 4a     eor      w11, w15, w11
0x003e78b0  2b 17 00 39     strb     w11, [x25, #5]
0x003e78b4  0b 19 40 39     ldrb     w11, [x8, #6]
0x003e78b8  cf 1a 80 52     mov      w15, #0xd6
0x003e78bc  6b 01 0f 4a     eor      w11, w11, w15
0x003e78c0  2b 1b 00 39     strb     w11, [x25, #6]
0x003e78c4  0b 1d 40 39     ldrb     w11, [x8, #7]
0x003e78c8  e9 0d 80 52     mov      w9, #0x6f
0x003e78cc  6b 01 09 4a     eor      w11, w11, w9
0x003e78d0  2b 1f 00 39     strb     w11, [x25, #7]
0x003e78d4  0b 21 40 39     ldrb     w11, [x8, #8]
0x003e78d8  6b 11 00 52     eor      w11, w11, #0x1f
0x003e78dc  2b 23 00 39     strb     w11, [x25, #8]
0x003e78e0  0b 25 40 39     ldrb     w11, [x8, #9]
0x003e78e4  af 19 80 52     mov      w15, #0xcd
0x003e78e8  6b 01 0f 4a     eor      w11, w11, w15
0x003e78ec  2b 27 00 39     strb     w11, [x25, #9]
0x003e78f0  0b 29 40 39     ldrb     w11, [x8, #0xa]
0x003e78f4  6b 19 00 52     eor      w11, w11, #0x7f
0x003e78f8  2b 2b 00 39     strb     w11, [x25, #0xa]
0x003e78fc  17 16 80 52     mov      w23, #0xb0
0x003e7900  0b 2d 40 39     ldrb     w11, [x8, #0xb]
0x003e7904  6b 11 1d 52     eor      w11, w11, #0xf8
0x003e7908  2b 2f 00 39     strb     w11, [x25, #0xb]
0x003e790c  0b 31 40 39     ldrb     w11, [x8, #0xc]
0x003e7910  6b 01 17 4a     eor      w11, w11, w23
0x003e7914  2b 33 00 39     strb     w11, [x25, #0xc]
0x003e7918  0f 35 40 39     ldrb     w15, [x8, #0xd]
0x003e791c  4b 0c 80 52     mov      w11, #0x62
0x003e7920  ef 01 0b 4a     eor      w15, w15, w11
0x003e7924  2f 37 00 39     strb     w15, [x25, #0xd]
0x003e7928  0f 39 40 39     ldrb     w15, [x8, #0xe]
0x003e792c  b8 01 80 52     mov      w24, #0xd
0x003e7930  ef 01 18 4a     eor      w15, w15, w24
0x003e7934  2f 3b 00 39     strb     w15, [x25, #0xe]
0x003e7938  0f 3d 40 39     ldrb     w15, [x8, #0xf]
0x003e793c  6a 0e 80 52     mov      w10, #0x73
0x003e7940  ef 01 0a 4a     eor      w15, w15, w10
0x003e7944  2f 3f 00 39     strb     w15, [x25, #0xf]
0x003e7948  0f 41 40 39     ldrb     w15, [x8, #0x10]
0x003e794c  ef 6d 1a 52     eor      w15, w15, #0xffffffc3
0x003e7950  2f 43 00 39     strb     w15, [x25, #0x10]
0x003e7954  0f 45 40 39     ldrb     w15, [x8, #0x11]
0x003e7958  ef 15 00 52     eor      w15, w15, #0x3f
0x003e795c  2f 47 00 39     strb     w15, [x25, #0x11]
0x003e7960  6f 16 80 52     mov      w15, #0xb3
0x003e7964  13 49 40 39     ldrb     w19, [x8, #0x12]
0x003e7968  73 ea 00 52     eor      w19, w19, #0x77777777
0x003e796c  33 4b 00 39     strb     w19, [x25, #0x12]
0x003e7970  13 4d 40 39     ldrb     w19, [x8, #0x13]
0x003e7974  6f 02 0f 4a     eor      w15, w19, w15
0x003e7978  2f 4f 00 39     strb     w15, [x25, #0x13]
0x003e797c  0f 51 40 39     ldrb     w15, [x8, #0x14]
0x003e7980  53 05 80 52     mov      w19, #0x2a
0x003e7984  ef 01 13 4a     eor      w15, w15, w19
0x003e7988  2f 53 00 39     strb     w15, [x25, #0x14]
0x003e798c  0f 55 40 39     ldrb     w15, [x8, #0x15]
0x003e7990  ef 01 00 52     eor      w15, w15, #1
0x003e7994  2f 57 00 39     strb     w15, [x25, #0x15]
0x003e7998  0f 59 40 39     ldrb     w15, [x8, #0x16]
0x003e799c  ef 01 1c 52     eor      w15, w15, #0x10
0x003e79a0  2f 5b 00 39     strb     w15, [x25, #0x16]
0x003e79a4  0f 5d 40 39     ldrb     w15, [x8, #0x17]
0x003e79a8  ef e5 02 52     eor      w15, w15, #0xcccccccc
0x003e79ac  2f 5f 00 39     strb     w15, [x25, #0x17]
0x003e79b0  13 61 40 39     ldrb     w19, [x8, #0x18]
0x003e79b4  4f 1d 80 52     mov      w15, #0xea
0x003e79b8  73 02 0f 4a     eor      w19, w19, w15
0x003e79bc  33 63 00 39     strb     w19, [x25, #0x18]
0x003e79c0  13 65 40 39     ldrb     w19, [x8, #0x19]
0x003e79c4  61 02 01 4a     eor      w1, w19, w1
0x003e79c8  21 67 00 39     strb     w1, [x25, #0x19]
0x003e79cc  01 69 40 39     ldrb     w1, [x8, #0x1a]
0x003e79d0  4a 1a 80 52     mov      w10, #0xd2
0x003e79d4  21 00 0a 4a     eor      w1, w1, w10
0x003e79d8  21 6b 00 39     strb     w1, [x25, #0x1a]
0x003e79dc  01 6d 40 39     ldrb     w1, [x8, #0x1b]
0x003e79e0  b3 0b 80 52     mov      w19, #0x5d
0x003e79e4  21 00 13 4a     eor      w1, w1, w19
0x003e79e8  21 6f 00 39     strb     w1, [x25, #0x1b]
0x003e79ec  01 71 40 39     ldrb     w1, [x8, #0x1c]
0x003e79f0  21 00 04 4a     eor      w1, w1, w4
0x003e79f4  21 73 00 39     strb     w1, [x25, #0x1c]
0x003e79f8  01 75 40 39     ldrb     w1, [x8, #0x1d]
0x003e79fc  e1 03 21 2a     mvn      w1, w1
0x003e7a00  21 77 00 39     strb     w1, [x25, #0x1d]
0x003e7a04  01 79 40 39     ldrb     w1, [x8, #0x1e]
0x003e7a08  21 00 06 4a     eor      w1, w1, w6
0x003e7a0c  21 7b 00 39     strb     w1, [x25, #0x1e]
0x003e7a10  01 7d 40 39     ldrb     w1, [x8, #0x1f]
0x003e7a14  26 12 80 52     mov      w6, #0x91
0x003e7a18  21 00 06 4a     eor      w1, w1, w6
0x003e7a1c  21 7f 00 39     strb     w1, [x25, #0x1f]
0x003e7a20  01 81 40 39     ldrb     w1, [x8, #0x20]
0x003e7a24  21 00 00 52     eor      w1, w1, #1
0x003e7a28  21 83 00 39     strb     w1, [x25, #0x20]
0x003e7a2c  01 85 40 39     ldrb     w1, [x8, #0x21]
0x003e7a30  2a 00 09 4a     eor      w10, w1, w9
0x003e7a34  2a 87 00 39     strb     w10, [x25, #0x21]
0x003e7a38  08 89 40 39     ldrb     w8, [x8, #0x22]
0x003e7a3c  08 01 0c 4a     eor      w8, w8, w12
0x003e7a40  28 8b 00 39     strb     w8, [x25, #0x22]
0x003e7a44  d9 0b 00 90     adrp     x25, #0x55f000
0x003e7a48  39 c3 39 91     add      x25, x25, #0xe70
0x003e7a4c  28 03 40 39     ldrb     w8, [x25]
0x003e7a50  c6 0b 00 90     adrp     x6, #0x55f000
0x003e7a54  c6 80 3a 91     add      x6, x6, #0xea0
0x003e7a58  08 01 05 4a     eor      w8, w8, w5
0x003e7a5c  c8 00 00 39     strb     w8, [x6]
0x003e7a60  28 07 40 39     ldrb     w8, [x25, #1]
0x003e7a64  08 01 1b 4a     eor      w8, w8, w27
0x003e7a68  c8 04 00 39     strb     w8, [x6, #1]
0x003e7a6c  28 0b 40 39     ldrb     w8, [x25, #2]
0x003e7a70  08 01 02 4a     eor      w8, w8, w2
0x003e7a74  c8 08 00 39     strb     w8, [x6, #2]
0x003e7a78  28 0f 40 39     ldrb     w8, [x25, #3]
0x003e7a7c  81 1a 80 52     mov      w1, #0xd4
0x003e7a80  08 01 01 4a     eor      w8, w8, w1
0x003e7a84  c8 0c 00 39     strb     w8, [x6, #3]
0x003e7a88  2a 13 40 39     ldrb     w10, [x25, #4]
0x003e7a8c  a8 03 80 52     mov      w8, #0x1d
0x003e7a90  4a 01 08 4a     eor      w10, w10, w8
0x003e7a94  ca 10 00 39     strb     w10, [x6, #4]
0x003e7a98  2a 17 40 39     ldrb     w10, [x25, #5]
0x003e7a9c  5b 08 80 52     mov      w27, #0x42
0x003e7aa0  4a 01 1b 4a     eor      w10, w10, w27
0x003e7aa4  ca 14 00 39     strb     w10, [x6, #5]
0x003e7aa8  2a 1b 40 39     ldrb     w10, [x25, #6]
0x003e7aac  a9 1d 80 52     mov      w9, #0xed
0x003e7ab0  4a 01 09 4a     eor      w10, w10, w9
0x003e7ab4  ca 18 00 39     strb     w10, [x6, #6]
0x003e7ab8  22 1f 40 39     ldrb     w2, [x25, #7]
0x003e7abc  aa 09 80 52     mov      w10, #0x4d
0x003e7ac0  42 00 0a 4a     eor      w2, w2, w10
0x003e7ac4  c2 1c 00 39     strb     w2, [x6, #7]
0x003e7ac8  22 23 40 39     ldrb     w2, [x25, #8]
0x003e7acc  42 00 1e 4a     eor      w2, w2, w30
0x003e7ad0  c2 20 00 39     strb     w2, [x6, #8]
0x003e7ad4  22 27 40 39     ldrb     w2, [x25, #9]
0x003e7ad8  65 0b 80 52     mov      w5, #0x5b
0x003e7adc  42 00 05 4a     eor      w2, w2, w5
0x003e7ae0  c2 24 00 39     strb     w2, [x6, #9]
0x003e7ae4  22 2b 40 39     ldrb     w2, [x25, #0xa]
0x003e7ae8  42 00 1e 52     eor      w2, w2, #4
0x003e7aec  c2 28 00 39     strb     w2, [x6, #0xa]
0x003e7af0  22 2f 40 39     ldrb     w2, [x25, #0xb]
0x003e7af4  c9 15 80 52     mov      w9, #0xae
0x003e7af8  42 00 09 4a     eor      w2, w2, w9
0x003e7afc  c2 2c 00 39     strb     w2, [x6, #0xb]
0x003e7b00  22 33 40 39     ldrb     w2, [x25, #0xc]
0x003e7b04  42 00 04 4a     eor      w2, w2, w4
0x003e7b08  c2 30 00 39     strb     w2, [x6, #0xc]
0x003e7b0c  22 37 40 39     ldrb     w2, [x25, #0xd]
0x003e7b10  42 68 19 52     eor      w2, w2, #0xffffff83
0x003e7b14  c2 34 00 39     strb     w2, [x6, #0xd]
0x003e7b18  22 3b 40 39     ldrb     w2, [x25, #0xe]
0x003e7b1c  4e 00 0e 4a     eor      w14, w2, w14
0x003e7b20  02 13 80 52     mov      w2, #0x98
0x003e7b24  ce 38 00 39     strb     w14, [x6, #0xe]
0x003e7b28  2e 3f 40 39     ldrb     w14, [x25, #0xf]
0x003e7b2c  ce 01 1e 4a     eor      w14, w14, w30
0x003e7b30  ce 3c 00 39     strb     w14, [x6, #0xf]
0x003e7b34  2e 43 40 39     ldrb     w14, [x25, #0x10]
0x003e7b38  ce 01 02 4a     eor      w14, w14, w2
0x003e7b3c  ce 40 00 39     strb     w14, [x6, #0x10]
0x003e7b40  2e 47 40 39     ldrb     w14, [x25, #0x11]
0x003e7b44  e2 0a 80 52     mov      w2, #0x57
0x003e7b48  ce 01 02 4a     eor      w14, w14, w2
0x003e7b4c  ce 44 00 39     strb     w14, [x6, #0x11]
0x003e7b50  2e 4b 40 39     ldrb     w14, [x25, #0x12]
0x003e7b54  ce 79 1b 52     eor      w14, w14, #0xffffffef
0x003e7b58  ce 48 00 39     strb     w14, [x6, #0x12]
0x003e7b5c  2e 4f 40 39     ldrb     w14, [x25, #0x13]
0x003e7b60  ce 01 18 4a     eor      w14, w14, w24
0x003e7b64  ce 4c 00 39     strb     w14, [x6, #0x13]
0x003e7b68  2e 53 40 39     ldrb     w14, [x25, #0x14]
0x003e7b6c  ce 79 1a 52     eor      w14, w14, #0xffffffdf
0x003e7b70  ce 50 00 39     strb     w14, [x6, #0x14]
0x003e7b74  2e 57 40 39     ldrb     w14, [x25, #0x15]
0x003e7b78  ce 01 16 4a     eor      w14, w14, w22
0x003e7b7c  ce 54 00 39     strb     w14, [x6, #0x15]
0x003e7b80  2e 5b 40 39     ldrb     w14, [x25, #0x16]
0x003e7b84  ce 79 1e 52     eor      w14, w14, #0xfffffffd
0x003e7b88  ce 58 00 39     strb     w14, [x6, #0x16]
0x003e7b8c  2e 5f 40 39     ldrb     w14, [x25, #0x17]
0x003e7b90  ce 79 19 52     eor      w14, w14, #0xffffffbf
0x003e7b94  ce 5c 00 39     strb     w14, [x6, #0x17]
0x003e7b98  4e 11 80 52     mov      w14, #0x8a
0x003e7b9c  22 63 40 39     ldrb     w2, [x25, #0x18]
0x003e7ba0  42 68 19 52     eor      w2, w2, #0xffffff83
0x003e7ba4  c2 60 00 39     strb     w2, [x6, #0x18]
0x003e7ba8  22 67 40 39     ldrb     w2, [x25, #0x19]
0x003e7bac  4e 00 0e 4a     eor      w14, w2, w14
0x003e7bb0  ce 64 00 39     strb     w14, [x6, #0x19]
0x003e7bb4  2e 6b 40 39     ldrb     w14, [x25, #0x1a]
0x003e7bb8  ce 11 1e 52     eor      w14, w14, #0x7c
0x003e7bbc  ce 68 00 39     strb     w14, [x6, #0x1a]
0x003e7bc0  2e 6f 40 39     ldrb     w14, [x25, #0x1b]
0x003e7bc4  89 09 80 52     mov      w9, #0x4c
0x003e7bc8  ce 01 09 4a     eor      w14, w14, w9
0x003e7bcc  ce 6c 00 39     strb     w14, [x6, #0x1b]
0x003e7bd0  2e 73 40 39     ldrb     w14, [x25, #0x1c]
0x003e7bd4  ce 0d 1e 52     eor      w14, w14, #0x3c
0x003e7bd8  ce 70 00 39     strb     w14, [x6, #0x1c]
0x003e7bdc  2e 77 40 39     ldrb     w14, [x25, #0x1d]
0x003e7be0  ce 01 1a 4a     eor      w14, w14, w26
0x003e7be4  ce 74 00 39     strb     w14, [x6, #0x1d]
0x003e7be8  2e 7b 40 39     ldrb     w14, [x25, #0x1e]
0x003e7bec  ce 6d 19 52     eor      w14, w14, #0xffffff87
0x003e7bf0  ce 78 00 39     strb     w14, [x6, #0x1e]
0x003e7bf4  2e 7f 40 39     ldrb     w14, [x25, #0x1f]
0x003e7bf8  ce 11 1f 52     eor      w14, w14, #0x3e
0x003e7bfc  ce 7c 00 39     strb     w14, [x6, #0x1f]
0x003e7c00  2e 83 40 39     ldrb     w14, [x25, #0x20]
0x003e7c04  42 01 80 52     mov      w2, #0xa
0x003e7c08  ce 01 02 4a     eor      w14, w14, w2
0x003e7c0c  ce 80 00 39     strb     w14, [x6, #0x20]
0x003e7c10  2e 87 40 39     ldrb     w14, [x25, #0x21]
0x003e7c14  62 06 9d 52     mov      w2, #0xe833
0x003e7c18  ce 01 03 4a     eor      w14, w14, w3
0x003e7c1c  ce 84 00 39     strb     w14, [x6, #0x21]
0x003e7c20  ce 0b 00 90     adrp     x14, #0x55f000
0x003e7c24  ce 11 39 91     add      x14, x14, #0xe44
0x003e7c28  c3 01 40 79     ldrh     w3, [x14]
0x003e7c2c  65 d4 93 52     mov      w5, #0x9ea3
0x003e7c30  63 00 05 4a     eor      w3, w3, w5
0x003e7c34  c5 0b 00 90     adrp     x5, #0x55f000
0x003e7c38  a5 28 39 91     add      x5, x5, #0xe4a
0x003e7c3c  a3 00 00 79     strh     w3, [x5]
0x003e7c40  c3 05 40 79     ldrh     w3, [x14, #2]
0x003e7c44  62 00 02 4a     eor      w2, w3, w2
0x003e7c48  a2 04 00 79     strh     w2, [x5, #2]
0x003e7c4c  ce 09 40 79     ldrh     w14, [x14, #4]
0x003e7c50  c2 58 86 52     mov      w2, #0x32c6
0x003e7c54  ce 01 02 4a     eor      w14, w14, w2
0x003e7c58  c2 0b 00 90     adrp     x2, #0x55f000
0x003e7c5c  42 68 37 91     add      x2, x2, #0xdda
0x003e7c60  ae 08 00 79     strh     w14, [x5, #4]
0x003e7c64  4e 00 40 79     ldrh     w14, [x2]
0x003e7c68  43 7d 92 52     mov      w3, #0x93ea
0x003e7c6c  ce 01 03 4a     eor      w14, w14, w3
0x003e7c70  c3 0b 00 90     adrp     x3, #0x55f000
0x003e7c74  63 a8 37 91     add      x3, x3, #0xdea
0x003e7c78  6e 00 00 79     strh     w14, [x3]
0x003e7c7c  4e 04 40 79     ldrh     w14, [x2, #2]
0x003e7c80  c5 4f 9f 52     mov      w5, #0xfa7e
0x003e7c84  ce 01 05 4a     eor      w14, w14, w5
0x003e7c88  6e 04 00 79     strh     w14, [x3, #2]
0x003e7c8c  2e ff 87 52     mov      w14, #0x3ff9
0x003e7c90  45 08 40 79     ldrh     w5, [x2, #4]
0x003e7c94  a6 22 8e 52     mov      w6, #0x7115
0x003e7c98  a5 00 06 4a     eor      w5, w5, w6
0x003e7c9c  65 08 00 79     strh     w5, [x3, #4]
0x003e7ca0  45 0c 40 79     ldrh     w5, [x2, #6]
0x003e7ca4  ae 00 0e 4a     eor      w14, w5, w14
0x003e7ca8  6e 0c 00 79     strh     w14, [x3, #6]
0x003e7cac  4e 10 40 79     ldrh     w14, [x2, #8]
0x003e7cb0  45 af 9c 52     mov      w5, #0xe57a
0x003e7cb4  ce 01 05 4a     eor      w14, w14, w5
0x003e7cb8  6e 10 00 79     strh     w14, [x3, #8]
0x003e7cbc  4e 14 40 79     ldrh     w14, [x2, #0xa]
0x003e7cc0  25 ae 98 52     mov      w5, #0xc571
0x003e7cc4  ce 01 05 4a     eor      w14, w14, w5
0x003e7cc8  6e 14 00 79     strh     w14, [x3, #0xa]
0x003e7ccc  c5 a2 89 52     mov      w5, #0x4d16
0x003e7cd0  ce 0b 00 b0     adrp     x14, #0x560000
0x003e7cd4  ce 01 0e 91     add      x14, x14, #0x380
0x003e7cd8  46 18 40 79     ldrh     w6, [x2, #0xc]
0x003e7cdc  13 8f 84 52     mov      w19, #0x2478
0x003e7ce0  c6 00 13 4a     eor      w6, w6, w19
0x003e7ce4  f3 03 0d aa     mov      x19, x13
0x003e7ce8  66 18 00 79     strh     w6, [x3, #0xc]
0x003e7cec  42 1c 40 79     ldrh     w2, [x2, #0xe]
0x003e7cf0  42 00 05 4a     eor      w2, w2, w5
0x003e7cf4  62 1c 00 79     strh     w2, [x3, #0xe]
0x003e7cf8  c2 0b 00 b0     adrp     x2, #0x560000
0x003e7cfc  42 80 0d 91     add      x2, x2, #0x360
0x003e7d00  43 00 40 39     ldrb     w3, [x2]
0x003e7d04  63 f0 01 52     eor      w3, w3, #0xaaaaaaaa
0x003e7d08  c3 01 00 39     strb     w3, [x14]
0x003e7d0c  43 04 40 39     ldrb     w3, [x2, #1]
0x003e7d10  05 1b 80 52     mov      w5, #0xd8
0x003e7d14  63 00 05 4a     eor      w3, w3, w5
0x003e7d18  c3 05 00 39     strb     w3, [x14, #1]
0x003e7d1c  43 08 40 39     ldrb     w3, [x2, #2]
0x003e7d20  25 0a 80 52     mov      w5, #0x51
0x003e7d24  63 00 05 4a     eor      w3, w3, w5
0x003e7d28  c3 09 00 39     strb     w3, [x14, #2]
0x003e7d2c  43 0c 40 39     ldrb     w3, [x2, #3]
0x003e7d30  63 08 1e 52     eor      w3, w3, #0x1c
0x003e7d34  c3 0d 00 39     strb     w3, [x14, #3]
0x003e7d38  43 10 40 39     ldrb     w3, [x2, #4]
0x003e7d3c  c5 0e 80 52     mov      w5, #0x76
0x003e7d40  63 00 05 4a     eor      w3, w3, w5
0x003e7d44  c3 11 00 39     strb     w3, [x14, #4]
0x003e7d48  43 14 40 39     ldrb     w3, [x2, #5]
0x003e7d4c  63 00 1a 4a     eor      w3, w3, w26
0x003e7d50  c5 0b 80 52     mov      w5, #0x5e
0x003e7d54  c3 15 00 39     strb     w3, [x14, #5]
0x003e7d58  43 18 40 39     ldrb     w3, [x2, #6]
0x003e7d5c  63 00 0a 4a     eor      w3, w3, w10
0x003e7d60  c3 19 00 39     strb     w3, [x14, #6]
0x003e7d64  43 1c 40 39     ldrb     w3, [x2, #7]
0x003e7d68  63 00 05 4a     eor      w3, w3, w5
0x003e7d6c  c3 1d 00 39     strb     w3, [x14, #7]
0x003e7d70  43 20 40 39     ldrb     w3, [x2, #8]
0x003e7d74  8c 04 80 52     mov      w12, #0x24
0x003e7d78  63 00 0c 4a     eor      w3, w3, w12
0x003e7d7c  c3 21 00 39     strb     w3, [x14, #8]
0x003e7d80  43 24 40 39     ldrb     w3, [x2, #9]
0x003e7d84  6a 00 0a 4a     eor      w10, w3, w10
0x003e7d88  ca 25 00 39     strb     w10, [x14, #9]
0x003e7d8c  4a 28 40 39     ldrb     w10, [x2, #0xa]
0x003e7d90  4a 01 00 4a     eor      w10, w10, w0
0x003e7d94  ca 29 00 39     strb     w10, [x14, #0xa]
0x003e7d98  4a 2c 40 39     ldrb     w10, [x2, #0xb]
0x003e7d9c  40 16 80 52     mov      w0, #0xb2
0x003e7da0  4a 01 00 4a     eor      w10, w10, w0
0x003e7da4  ca 2d 00 39     strb     w10, [x14, #0xb]
0x003e7da8  4a 30 40 39     ldrb     w10, [x2, #0xc]
0x003e7dac  89 11 80 52     mov      w9, #0x8c
0x003e7db0  4a 01 09 4a     eor      w10, w10, w9
0x003e7db4  ca 31 00 39     strb     w10, [x14, #0xc]
0x003e7db8  4a 34 40 39     ldrb     w10, [x2, #0xd]
0x003e7dbc  a9 10 80 52     mov      w9, #0x85
0x003e7dc0  4a 01 09 4a     eor      w10, w10, w9
0x003e7dc4  ca 35 00 39     strb     w10, [x14, #0xd]
0x003e7dc8  4a 38 40 39     ldrb     w10, [x2, #0xe]
0x003e7dcc  4a 01 11 4a     eor      w10, w10, w17
0x003e7dd0  ca 39 00 39     strb     w10, [x14, #0xe]
0x003e7dd4  4a 3c 40 39     ldrb     w10, [x2, #0xf]
0x003e7dd8  29 0c 80 52     mov      w9, #0x61
0x003e7ddc  4a 01 09 4a     eor      w10, w10, w9
0x003e7de0  ca 3d 00 39     strb     w10, [x14, #0xf]
0x003e7de4  4a 40 40 39     ldrb     w10, [x2, #0x10]
0x003e7de8  4a 01 16 4a     eor      w10, w10, w22
0x003e7dec  e0 00 86 52     mov      w0, #0x3007
0x003e7df0  e3 d6 89 52     mov      w3, #0x4eb7
0x003e7df4  ca 41 00 39     strb     w10, [x14, #0x10]
0x003e7df8  4a 44 40 39     ldrb     w10, [x2, #0x11]
0x003e7dfc  4a 01 0c 4a     eor      w10, w10, w12
0x003e7e00  ca 45 00 39     strb     w10, [x14, #0x11]
0x003e7e04  4a 48 40 39     ldrb     w10, [x2, #0x12]
0x003e7e08  02 09 80 52     mov      w2, #0x48
0x003e7e0c  4a 01 02 4a     eor      w10, w10, w2
0x003e7e10  ca 49 00 39     strb     w10, [x14, #0x12]
0x003e7e14  ca 0b 00 90     adrp     x10, #0x55f000
0x003e7e18  4a e1 38 91     add      x10, x10, #0xe38
0x003e7e1c  4e 01 40 79     ldrh     w14, [x10]
0x003e7e20  ce 01 00 4a     eor      w14, w14, w0
0x003e7e24  c0 0b 00 90     adrp     x0, #0x55f000
0x003e7e28  00 f8 38 91     add      x0, x0, #0xe3e
0x003e7e2c  0e 00 00 79     strh     w14, [x0]
0x003e7e30  4e 05 40 79     ldrh     w14, [x10, #2]
0x003e7e34  ce 01 03 4a     eor      w14, w14, w3
0x003e7e38  0e 04 00 79     strh     w14, [x0, #2]
0x003e7e3c  4a 09 40 79     ldrh     w10, [x10, #4]
0x003e7e40  ae 56 83 52     mov      w14, #0x1ab5
0x003e7e44  4a 01 0e 4a     eor      w10, w10, w14
0x003e7e48  0a 08 00 79     strh     w10, [x0, #4]
0x003e7e4c  ce 0b 00 90     adrp     x14, #0x55f000
0x003e7e50  ce 01 38 91     add      x14, x14, #0xe00
0x003e7e54  ca 01 40 39     ldrb     w10, [x14]
0x003e7e58  e9 02 80 52     mov      w9, #0x17
0x003e7e5c  4a 01 09 4a     eor      w10, w10, w9
0x003e7e60  c0 0b 00 90     adrp     x0, #0x55f000
0x003e7e64  00 80 38 91     add      x0, x0, #0xe20
0x003e7e68  0a 00 00 39     strb     w10, [x0]
0x003e7e6c  8a 1d 80 52     mov      w10, #0xec
0x003e7e70  c2 05 40 39     ldrb     w2, [x14, #1]
0x003e7e74  42 74 19 52     eor      w2, w2, #0xffffff9f
0x003e7e78  02 04 00 39     strb     w2, [x0, #1]
0x003e7e7c  c2 09 40 39     ldrb     w2, [x14, #2]
0x003e7e80  42 00 0a 4a     eor      w2, w2, w10
0x003e7e84  02 08 00 39     strb     w2, [x0, #2]
0x003e7e88  c2 0d 40 39     ldrb     w2, [x14, #3]
0x003e7e8c  42 e4 03 52     eor      w2, w2, #0x66666666
0x003e7e90  02 0c 00 39     strb     w2, [x0, #3]
0x003e7e94  c2 11 40 39     ldrb     w2, [x14, #4]
0x003e7e98  49 0f 80 52     mov      w9, #0x7a
0x003e7e9c  42 00 09 4a     eor      w2, w2, w9
0x003e7ea0  02 10 00 39     strb     w2, [x0, #4]
0x003e7ea4  c2 15 40 39     ldrb     w2, [x14, #5]
0x003e7ea8  42 04 00 52     eor      w2, w2, #3
0x003e7eac  02 14 00 39     strb     w2, [x0, #5]
0x003e7eb0  c2 19 40 39     ldrb     w2, [x14, #6]
0x003e7eb4  a9 02 80 52     mov      w9, #0x15
0x003e7eb8  42 00 09 4a     eor      w2, w2, w9
0x003e7ebc  02 18 00 39     strb     w2, [x0, #6]
0x003e7ec0  c2 1d 40 39     ldrb     w2, [x14, #7]
0x003e7ec4  42 18 00 52     eor      w2, w2, #0x7f
0x003e7ec8  02 1c 00 39     strb     w2, [x0, #7]
0x003e7ecc  c2 21 40 39     ldrb     w2, [x14, #8]
0x003e7ed0  42 0c 1e 52     eor      w2, w2, #0x3c
0x003e7ed4  02 20 00 39     strb     w2, [x0, #8]
0x003e7ed8  c2 25 40 39     ldrb     w2, [x14, #9]
0x003e7edc  42 74 1c 52     eor      w2, w2, #0xfffffff3
0x003e7ee0  02 24 00 39     strb     w2, [x0, #9]
0x003e7ee4  c2 29 40 39     ldrb     w2, [x14, #0xa]
0x003e7ee8  29 03 80 52     mov      w9, #0x19
0x003e7eec  49 00 09 4a     eor      w9, w2, w9
0x003e7ef0  09 28 00 39     strb     w9, [x0, #0xa]
0x003e7ef4  c9 2d 40 39     ldrb     w9, [x14, #0xb]
0x003e7ef8  4c 1f 80 52     mov      w12, #0xfa
0x003e7efc  29 01 0c 4a     eor      w9, w9, w12
0x003e7f00  09 2c 00 39     strb     w9, [x0, #0xb]
0x003e7f04  c9 31 40 39     ldrb     w9, [x14, #0xc]
0x003e7f08  29 01 1c 4a     eor      w9, w9, w28
0x003e7f0c  09 30 00 39     strb     w9, [x0, #0xc]
0x003e7f10  c9 35 40 39     ldrb     w9, [x14, #0xd]
0x003e7f14  6c 08 80 52     mov      w12, #0x43
0x003e7f18  29 01 0c 4a     eor      w9, w9, w12
0x003e7f1c  09 34 00 39     strb     w9, [x0, #0xd]
0x003e7f20  c9 39 40 39     ldrb     w9, [x14, #0xe]
0x003e7f24  29 01 01 4a     eor      w9, w9, w1
0x003e7f28  09 38 00 39     strb     w9, [x0, #0xe]
0x003e7f2c  c9 3d 40 39     ldrb     w9, [x14, #0xf]
0x003e7f30  ec 12 80 52     mov      w12, #0x97
0x003e7f34  29 01 0c 4a     eor      w9, w9, w12
0x003e7f38  09 3c 00 39     strb     w9, [x0, #0xf]
0x003e7f3c  c9 41 40 39     ldrb     w9, [x14, #0x10]
0x003e7f40  29 01 11 4a     eor      w9, w9, w17
0x003e7f44  09 40 00 39     strb     w9, [x0, #0x10]
0x003e7f48  c9 45 40 39     ldrb     w9, [x14, #0x11]
0x003e7f4c  6c 15 80 52     mov      w12, #0xab
0x003e7f50  29 01 0c 4a     eor      w9, w9, w12
0x003e7f54  09 44 00 39     strb     w9, [x0, #0x11]
0x003e7f58  49 02 80 52     mov      w9, #0x12
0x003e7f5c  cc 49 40 39     ldrb     w12, [x14, #0x12]
0x003e7f60  8c 01 0f 4a     eor      w12, w12, w15
0x003e7f64  0c 48 00 39     strb     w12, [x0, #0x12]
0x003e7f68  cc 4d 40 39     ldrb     w12, [x14, #0x13]
0x003e7f6c  89 01 09 4a     eor      w9, w12, w9
0x003e7f70  09 4c 00 39     strb     w9, [x0, #0x13]
0x003e7f74  c9 51 40 39     ldrb     w9, [x14, #0x14]
0x003e7f78  4c 0d 80 52     mov      w12, #0x6a
0x003e7f7c  29 01 0c 4a     eor      w9, w9, w12
0x003e7f80  09 50 00 39     strb     w9, [x0, #0x14]
0x003e7f84  c9 55 40 39     ldrb     w9, [x14, #0x15]
0x003e7f88  29 11 1e 52     eor      w9, w9, #0x7c
0x003e7f8c  09 54 00 39     strb     w9, [x0, #0x15]
0x003e7f90  c9 59 40 39     ldrb     w9, [x14, #0x16]
0x003e7f94  29 01 1c 4a     eor      w9, w9, w28
0x003e7f98  09 58 00 39     strb     w9, [x0, #0x16]
0x003e7f9c  c9 0b 00 b0     adrp     x9, #0x560000
0x003e7fa0  29 81 09 91     add      x9, x9, #0x260
0x003e7fa4  2c 01 40 79     ldrh     w12, [x9]
0x003e7fa8  0e 8f 9a 52     mov      w14, #0xd478
0x003e7fac  8e 01 0e 4a     eor      w14, w12, w14
0x003e7fb0  cc 0b 00 b0     adrp     x12, #0x560000
0x003e7fb4  8c 01 0a 91     add      x12, x12, #0x280
0x003e7fb8  8e 01 00 79     strh     w14, [x12]
0x003e7fbc  2e 38 8d 52     mov      w14, #0x69c1
0x003e7fc0  31 05 40 79     ldrh     w17, [x9, #2]
0x003e7fc4  20 71 9d 52     mov      w0, #0xeb89
0x003e7fc8  31 02 00 4a     eor      w17, w17, w0
0x003e7fcc  91 05 00 79     strh     w17, [x12, #2]
0x003e7fd0  31 09 40 79     ldrh     w17, [x9, #4]
0x003e7fd4  2e 02 0e 4a     eor      w14, w17, w14
0x003e7fd8  8e 09 00 79     strh     w14, [x12, #4]
0x003e7fdc  2e 0d 40 79     ldrh     w14, [x9, #6]
0x003e7fe0  b1 a2 83 52     mov      w17, #0x1d15
0x003e7fe4  ce 01 11 4a     eor      w14, w14, w17
0x003e7fe8  8e 0d 00 79     strh     w14, [x12, #6]
0x003e7fec  ee e3 8b 52     mov      w14, #0x5f1f
0x003e7ff0  31 11 40 79     ldrh     w17, [x9, #8]
0x003e7ff4  80 ed 8c 52     mov      w0, #0x676c
0x003e7ff8  31 02 00 4a     eor      w17, w17, w0
0x003e7ffc  91 11 00 79     strh     w17, [x12, #8]
0x003e8000  31 15 40 79     ldrh     w17, [x9, #0xa]
0x003e8004  2e 02 0e 4a     eor      w14, w17, w14
0x003e8008  8e 15 00 79     strh     w14, [x12, #0xa]
0x003e800c  2e 19 40 79     ldrh     w14, [x9, #0xc]
0x003e8010  d1 4c 9d 52     mov      w17, #0xea66
0x003e8014  ce 01 11 4a     eor      w14, w14, w17
0x003e8018  8e 19 00 79     strh     w14, [x12, #0xc]
0x003e801c  6e 8d 9d 52     mov      w14, #0xec6b
0x003e8020  31 1d 40 79     ldrh     w17, [x9, #0xe]
0x003e8024  60 4c 83 52     mov      w0, #0x1a63
0x003e8028  31 02 00 4a     eor      w17, w17, w0
0x003e802c  91 1d 00 79     strh     w17, [x12, #0xe]
0x003e8030  31 21 40 79     ldrh     w17, [x9, #0x10]
0x003e8034  2e 02 0e 4a     eor      w14, w17, w14
0x003e8038  8e 21 00 79     strh     w14, [x12, #0x10]
0x003e803c  2e 25 40 79     ldrh     w14, [x9, #0x12]
0x003e8040  11 9a 93 52     mov      w17, #0x9cd0
0x003e8044  ce 01 11 4a     eor      w14, w14, w17
0x003e8048  8e 25 00 79     strh     w14, [x12, #0x12]
0x003e804c  6e 6c 97 52     mov      w14, #0xbb63
0x003e8050  31 29 40 79     ldrh     w17, [x9, #0x14]
0x003e8054  c0 4b 90 52     mov      w0, #0x825e
0x003e8058  31 02 00 4a     eor      w17, w17, w0
0x003e805c  91 29 00 79     strh     w17, [x12, #0x14]
0x003e8060  31 2d 40 79     ldrh     w17, [x9, #0x16]
0x003e8064  2e 02 0e 4a     eor      w14, w17, w14
0x003e8068  8e 2d 00 79     strh     w14, [x12, #0x16]
0x003e806c  2e 31 40 79     ldrh     w14, [x9, #0x18]
0x003e8070  91 94 8d 52     mov      w17, #0x6ca4
0x003e8074  ce 01 11 4a     eor      w14, w14, w17
0x003e8078  8e 31 00 79     strh     w14, [x12, #0x18]
0x003e807c  29 35 40 79     ldrh     w9, [x9, #0x1a]
0x003e8080  ce e4 9d 52     mov      w14, #0xef26
0x003e8084  29 01 0e 4a     eor      w9, w9, w14
0x003e8088  89 35 00 79     strh     w9, [x12, #0x1a]
0x003e808c  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e8090  29 11 37 91     add      x9, x9, #0xdc4
0x003e8094  2c 01 40 39     ldrb     w12, [x9]
0x003e8098  8c e9 01 52     eor      w12, w12, #0xbbbbbbbb
0x003e809c  ae 0b 00 f0     adrp     x14, #0x55f000
0x003e80a0  ce 3d 37 91     add      x14, x14, #0xdcf
0x003e80a4  cc 01 00 39     strb     w12, [x14]
0x003e80a8  2c 05 40 39     ldrb     w12, [x9, #1]
0x003e80ac  8c 0d 1d 52     eor      w12, w12, #0x78
0x003e80b0  cc 05 00 39     strb     w12, [x14, #1]
0x003e80b4  2c 09 40 39     ldrb     w12, [x9, #2]
0x003e80b8  8c f1 01 52     eor      w12, w12, #0xaaaaaaaa
0x003e80bc  cc 09 00 39     strb     w12, [x14, #2]
0x003e80c0  2c 0d 40 39     ldrb     w12, [x9, #3]
0x003e80c4  8c 01 07 4a     eor      w12, w12, w7
0x003e80c8  cc 0d 00 39     strb     w12, [x14, #3]
0x003e80cc  2c 11 40 39     ldrb     w12, [x9, #4]
0x003e80d0  8c e5 01 52     eor      w12, w12, #0x99999999
0x003e80d4  cc 11 00 39     strb     w12, [x14, #4]
0x003e80d8  2c 15 40 39     ldrb     w12, [x9, #5]
0x003e80dc  51 1e 80 52     mov      w17, #0xf2
0x003e80e0  8c 01 11 4a     eor      w12, w12, w17
0x003e80e4  cc 15 00 39     strb     w12, [x14, #5]
0x003e80e8  2c 19 40 39     ldrb     w12, [x9, #6]
0x003e80ec  61 19 80 52     mov      w1, #0xcb
0x003e80f0  8c 01 01 4a     eor      w12, w12, w1
0x003e80f4  cc 19 00 39     strb     w12, [x14, #6]
0x003e80f8  2c 1d 40 39     ldrb     w12, [x9, #7]
0x003e80fc  ed 08 80 52     mov      w13, #0x47
0x003e8100  8c 01 0d 4a     eor      w12, w12, w13
0x003e8104  cc 1d 00 39     strb     w12, [x14, #7]
0x003e8108  2c 21 40 39     ldrb     w12, [x9, #8]
0x003e810c  71 13 80 52     mov      w17, #0x9b
0x003e8110  8c 01 11 4a     eor      w12, w12, w17
0x003e8114  cc 21 00 39     strb     w12, [x14, #8]
0x003e8118  2c 25 40 39     ldrb     w12, [x9, #9]
0x003e811c  8c 01 10 4a     eor      w12, w12, w16
0x003e8120  cc 25 00 39     strb     w12, [x14, #9]
0x003e8124  29 29 40 39     ldrb     w9, [x9, #0xa]
0x003e8128  0c 12 80 52     mov      w12, #0x90
0x003e812c  29 01 0c 4a     eor      w9, w9, w12
0x003e8130  c9 29 00 39     strb     w9, [x14, #0xa]
0x003e8134  89 15 80 52     mov      w9, #0xac
0x003e8138  cc 0b 00 90     adrp     x12, #0x560000
0x003e813c  8c 91 0f 91     add      x12, x12, #0x3e4
0x003e8140  8e 01 40 39     ldrb     w14, [x12]
0x003e8144  ce e5 02 52     eor      w14, w14, #0xcccccccc
0x003e8148  d0 0b 00 90     adrp     x16, #0x560000
0x003e814c  10 b6 0f 91     add      x16, x16, #0x3ed
0x003e8150  0e 02 00 39     strb     w14, [x16]
0x003e8154  8e 05 40 39     ldrb     w14, [x12, #1]
0x003e8158  ce 01 11 4a     eor      w14, w14, w17
0x003e815c  0e 06 00 39     strb     w14, [x16, #1]
0x003e8160  8e 09 40 39     ldrb     w14, [x12, #2]
0x003e8164  c9 01 09 4a     eor      w9, w14, w9
0x003e8168  09 0a 00 39     strb     w9, [x16, #2]
0x003e816c  89 0d 40 39     ldrb     w9, [x12, #3]
0x003e8170  29 01 0f 4a     eor      w9, w9, w15
0x003e8174  09 0e 00 39     strb     w9, [x16, #3]
0x003e8178  89 11 40 39     ldrb     w9, [x12, #4]
0x003e817c  29 05 1e 52     eor      w9, w9, #0xc
0x003e8180  09 12 00 39     strb     w9, [x16, #4]
0x003e8184  89 15 40 39     ldrb     w9, [x12, #5]
0x003e8188  29 01 1b 52     eor      w9, w9, #0x20
0x003e818c  09 16 00 39     strb     w9, [x16, #5]
0x003e8190  89 19 40 39     ldrb     w9, [x12, #6]
0x003e8194  29 01 1b 4a     eor      w9, w9, w27
0x003e8198  09 1a 00 39     strb     w9, [x16, #6]
0x003e819c  89 1d 40 39     ldrb     w9, [x12, #7]
0x003e81a0  29 e5 00 52     eor      w9, w9, #0x33333333
0x003e81a4  09 1e 00 39     strb     w9, [x16, #7]
0x003e81a8  89 21 40 39     ldrb     w9, [x12, #8]
0x003e81ac  8c 10 80 52     mov      w12, #0x84
0x003e81b0  29 01 0c 4a     eor      w9, w9, w12
0x003e81b4  09 22 00 39     strb     w9, [x16, #8]
0x003e81b8  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e81bc  29 c1 35 91     add      x9, x9, #0xd70
0x003e81c0  2c 01 40 79     ldrh     w12, [x9]
0x003e81c4  8e 07 94 52     mov      w14, #0xa03c
0x003e81c8  4f 85 81 52     mov      w15, #0xc2a
0x003e81cc  8f 01 0f 4a     eor      w15, w12, w15
0x003e81d0  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e81d4  8c 81 36 91     add      x12, x12, #0xda0
0x003e81d8  8f 01 00 79     strh     w15, [x12]
0x003e81dc  2f 05 40 79     ldrh     w15, [x9, #2]
0x003e81e0  b0 fd 8f 52     mov      w16, #0x7fed
0x003e81e4  ef 01 10 4a     eor      w15, w15, w16
0x003e81e8  8f 05 00 79     strh     w15, [x12, #2]
0x003e81ec  2f 09 40 79     ldrh     w15, [x9, #4]
0x003e81f0  ee 01 0e 4a     eor      w14, w15, w14
0x003e81f4  8e 09 00 79     strh     w14, [x12, #4]
0x003e81f8  2e 0d 40 79     ldrh     w14, [x9, #6]
0x003e81fc  0f cb 94 52     mov      w15, #0xa658
0x003e8200  ce 01 0f 4a     eor      w14, w14, w15
0x003e8204  8e 0d 00 79     strh     w14, [x12, #6]
0x003e8208  2e 11 40 79     ldrh     w14, [x9, #8]
0x003e820c  4f 3a 87 52     mov      w15, #0x39d2
0x003e8210  ce 01 0f 4a     eor      w14, w14, w15
0x003e8214  8e 11 00 79     strh     w14, [x12, #8]
0x003e8218  2e 15 40 79     ldrh     w14, [x9, #0xa]
0x003e821c  2f d4 97 52     mov      w15, #0xbea1
0x003e8220  ce 01 0f 4a     eor      w14, w14, w15
0x003e8224  4f 6a 81 52     mov      w15, #0xb52
0x003e8228  8e 15 00 79     strh     w14, [x12, #0xa]
0x003e822c  2e 19 40 79     ldrh     w14, [x9, #0xc]
0x003e8230  70 85 9f 52     mov      w16, #0xfc2b
0x003e8234  ce 01 10 4a     eor      w14, w14, w16
0x003e8238  8e 19 00 79     strh     w14, [x12, #0xc]
0x003e823c  2e 1d 40 79     ldrh     w14, [x9, #0xe]
0x003e8240  50 9b 86 52     mov      w16, #0x34da
0x003e8244  ce 01 10 4a     eor      w14, w14, w16
0x003e8248  8e 1d 00 79     strh     w14, [x12, #0xe]
0x003e824c  2e 21 40 79     ldrh     w14, [x9, #0x10]
0x003e8250  ce 01 0f 4a     eor      w14, w14, w15
0x003e8254  8e 21 00 79     strh     w14, [x12, #0x10]
0x003e8258  2e 25 40 79     ldrh     w14, [x9, #0x12]
0x003e825c  cf 61 9b 52     mov      w15, #0xdb0e
0x003e8260  ce 01 0f 4a     eor      w14, w14, w15
0x003e8264  8e 25 00 79     strh     w14, [x12, #0x12]
0x003e8268  2e 29 40 79     ldrh     w14, [x9, #0x14]
0x003e826c  4f db 8a 52     mov      w15, #0x56da
0x003e8270  ce 01 0f 4a     eor      w14, w14, w15
0x003e8274  8e 29 00 79     strh     w14, [x12, #0x14]
0x003e8278  2e 2d 40 79     ldrh     w14, [x9, #0x16]
0x003e827c  ef f5 82 52     mov      w15, #0x17af
0x003e8280  ce 01 0f 4a     eor      w14, w14, w15
0x003e8284  8f 39 80 52     mov      w15, #0x1cc
0x003e8288  8e 2d 00 79     strh     w14, [x12, #0x16]
0x003e828c  2e 31 40 79     ldrh     w14, [x9, #0x18]
0x003e8290  50 73 8b 52     mov      w16, #0x5b9a
0x003e8294  ce 01 10 4a     eor      w14, w14, w16
0x003e8298  8e 31 00 79     strh     w14, [x12, #0x18]
0x003e829c  2e 35 40 79     ldrh     w14, [x9, #0x1a]
0x003e82a0  f0 04 84 52     mov      w16, #0x2027
0x003e82a4  ce 01 10 4a     eor      w14, w14, w16
0x003e82a8  8e 35 00 79     strh     w14, [x12, #0x1a]
0x003e82ac  2e 39 40 79     ldrh     w14, [x9, #0x1c]
0x003e82b0  ce 01 0f 4a     eor      w14, w14, w15
0x003e82b4  8e 39 00 79     strh     w14, [x12, #0x1c]
0x003e82b8  2e 3d 40 79     ldrh     w14, [x9, #0x1e]
0x003e82bc  ef d2 85 52     mov      w15, #0x2e97
0x003e82c0  ce 01 0f 4a     eor      w14, w14, w15
0x003e82c4  8e 3d 00 79     strh     w14, [x12, #0x1e]
0x003e82c8  2e 41 40 79     ldrh     w14, [x9, #0x20]
0x003e82cc  8f 41 98 52     mov      w15, #0xc20c
0x003e82d0  ce 01 0f 4a     eor      w14, w14, w15
0x003e82d4  8e 41 00 79     strh     w14, [x12, #0x20]
0x003e82d8  2e 45 40 79     ldrh     w14, [x9, #0x22]
0x003e82dc  8f 59 9c 52     mov      w15, #0xe2cc
0x003e82e0  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e82e4  29 81 39 91     add      x9, x9, #0xe60
0x003e82e8  ce 01 0f 4a     eor      w14, w14, w15
0x003e82ec  8e 45 00 79     strh     w14, [x12, #0x22]
0x003e82f0  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e82f4  8c 41 39 91     add      x12, x12, #0xe50
0x003e82f8  8e 01 40 79     ldrh     w14, [x12]
0x003e82fc  af c3 99 52     mov      w15, #0xce1d
0x003e8300  ce 01 0f 4a     eor      w14, w14, w15
0x003e8304  2e 01 00 79     strh     w14, [x9]
0x003e8308  8e 05 40 79     ldrh     w14, [x12, #2]
0x003e830c  cf 7a 97 52     mov      w15, #0xbbd6
0x003e8310  ce 01 0f 4a     eor      w14, w14, w15
0x003e8314  2f c1 95 52     mov      w15, #0xae09
0x003e8318  2e 05 00 79     strh     w14, [x9, #2]
0x003e831c  8e 09 40 79     ldrh     w14, [x12, #4]
0x003e8320  f0 a4 87 52     mov      w16, #0x3d27
0x003e8324  ce 01 10 4a     eor      w14, w14, w16
0x003e8328  2e 09 00 79     strh     w14, [x9, #4]
0x003e832c  8e 0d 40 79     ldrh     w14, [x12, #6]
0x003e8330  70 9d 8a 52     mov      w16, #0x54eb
0x003e8334  ce 01 10 4a     eor      w14, w14, w16
0x003e8338  2e 0d 00 79     strh     w14, [x9, #6]
0x003e833c  8e 11 40 79     ldrh     w14, [x12, #8]
0x003e8340  ce 01 0f 4a     eor      w14, w14, w15
0x003e8344  2e 11 00 79     strh     w14, [x9, #8]
0x003e8348  8e 15 40 79     ldrh     w14, [x12, #0xa]
0x003e834c  8f 31 9e 52     mov      w15, #0xf18c
0x003e8350  ce 01 0f 4a     eor      w14, w14, w15
0x003e8354  2e 15 00 79     strh     w14, [x9, #0xa]
0x003e8358  ce f6 98 52     mov      w14, #0xc7b6
0x003e835c  0f d4 8e 52     mov      w15, #0x76a0
0x003e8360  90 19 40 79     ldrh     w16, [x12, #0xc]
0x003e8364  11 d7 88 52     mov      w17, #0x46b8
0x003e8368  10 02 11 4a     eor      w16, w16, w17
0x003e836c  30 19 00 79     strh     w16, [x9, #0xc]
0x003e8370  8c 1d 40 79     ldrh     w12, [x12, #0xe]
0x003e8374  10 34 97 52     mov      w16, #0xb9a0
0x003e8378  8c 01 10 4a     eor      w12, w12, w16
0x003e837c  2c 1d 00 79     strh     w12, [x9, #0xe]
0x003e8380  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e8384  29 41 3b 91     add      x9, x9, #0xed0
0x003e8388  2c 01 40 79     ldrh     w12, [x9]
0x003e838c  8e 01 0e 4a     eor      w14, w12, w14
0x003e8390  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e8394  8c 01 3c 91     add      x12, x12, #0xf00
0x003e8398  8e 01 00 79     strh     w14, [x12]
0x003e839c  2e 05 40 79     ldrh     w14, [x9, #2]
0x003e83a0  ce 01 0f 4a     eor      w14, w14, w15
0x003e83a4  8e 05 00 79     strh     w14, [x12, #2]
0x003e83a8  2e 09 40 79     ldrh     w14, [x9, #4]
0x003e83ac  cf 6b 9b 52     mov      w15, #0xdb5e
0x003e83b0  ce 01 0f 4a     eor      w14, w14, w15
0x003e83b4  8e 09 00 79     strh     w14, [x12, #4]
0x003e83b8  2e 0d 40 79     ldrh     w14, [x9, #6]
0x003e83bc  cf 11 90 52     mov      w15, #0x808e
0x003e83c0  ce 01 0f 4a     eor      w14, w14, w15
0x003e83c4  8e 0d 00 79     strh     w14, [x12, #6]
0x003e83c8  2e 11 40 79     ldrh     w14, [x9, #8]
0x003e83cc  8f 84 93 52     mov      w15, #0x9c24
0x003e83d0  ce 01 0f 4a     eor      w14, w14, w15
0x003e83d4  8f ca 96 52     mov      w15, #0xb654
0x003e83d8  8e 11 00 79     strh     w14, [x12, #8]
0x003e83dc  2e 15 40 79     ldrh     w14, [x9, #0xa]
0x003e83e0  f0 19 97 52     mov      w16, #0xb8cf
0x003e83e4  ce 01 10 4a     eor      w14, w14, w16
0x003e83e8  8e 15 00 79     strh     w14, [x12, #0xa]
0x003e83ec  2e 19 40 79     ldrh     w14, [x9, #0xc]
0x003e83f0  70 3d 84 52     mov      w16, #0x21eb
0x003e83f4  ce 01 10 4a     eor      w14, w14, w16
0x003e83f8  8e 19 00 79     strh     w14, [x12, #0xc]
0x003e83fc  2e 1d 40 79     ldrh     w14, [x9, #0xe]
0x003e8400  ce 01 0f 4a     eor      w14, w14, w15
0x003e8404  8e 1d 00 79     strh     w14, [x12, #0xe]
0x003e8408  2e 21 40 79     ldrh     w14, [x9, #0x10]
0x003e840c  af 65 88 52     mov      w15, #0x432d
0x003e8410  ce 01 0f 4a     eor      w14, w14, w15
0x003e8414  8e 21 00 79     strh     w14, [x12, #0x10]
0x003e8418  2e 25 40 79     ldrh     w14, [x9, #0x12]
0x003e841c  0f 58 86 52     mov      w15, #0x32c0
0x003e8420  ce 01 0f 4a     eor      w14, w14, w15
0x003e8424  8e 25 00 79     strh     w14, [x12, #0x12]
0x003e8428  2e 29 40 79     ldrh     w14, [x9, #0x14]
0x003e842c  8f a8 9a 52     mov      w15, #0xd544
0x003e8430  ce 01 0f 4a     eor      w14, w14, w15
0x003e8434  8f b3 91 52     mov      w15, #0x8d9c
0x003e8438  8e 29 00 79     strh     w14, [x12, #0x14]
0x003e843c  2e 2d 40 79     ldrh     w14, [x9, #0x16]
0x003e8440  70 df 81 52     mov      w16, #0xefb
0x003e8444  ce 01 10 4a     eor      w14, w14, w16
0x003e8448  8e 2d 00 79     strh     w14, [x12, #0x16]
0x003e844c  2e 31 40 79     ldrh     w14, [x9, #0x18]
0x003e8450  f0 12 9b 52     mov      w16, #0xd897
0x003e8454  ce 01 10 4a     eor      w14, w14, w16
0x003e8458  8e 31 00 79     strh     w14, [x12, #0x18]
0x003e845c  2e 35 40 79     ldrh     w14, [x9, #0x1a]
0x003e8460  ce 01 0f 4a     eor      w14, w14, w15
0x003e8464  8e 35 00 79     strh     w14, [x12, #0x1a]
0x003e8468  2e 39 40 79     ldrh     w14, [x9, #0x1c]
0x003e846c  cf 58 8d 52     mov      w15, #0x6ac6
0x003e8470  ce 01 0f 4a     eor      w14, w14, w15
0x003e8474  8e 39 00 79     strh     w14, [x12, #0x1c]
0x003e8478  ae 0b 00 f0     adrp     x14, #0x55f000
0x003e847c  ce 19 35 91     add      x14, x14, #0xd46
0x003e8480  2f 3d 40 79     ldrh     w15, [x9, #0x1e]
0x003e8484  90 96 94 52     mov      w16, #0xa4b4
0x003e8488  ef 01 10 4a     eor      w15, w15, w16
0x003e848c  8f 3d 00 79     strh     w15, [x12, #0x1e]
0x003e8490  af b8 95 52     mov      w15, #0xadc5
0x003e8494  30 6d 9b 52     mov      w16, #0xdb69
0x003e8498  31 41 40 79     ldrh     w17, [x9, #0x20]
0x003e849c  a0 a8 9e 52     mov      w0, #0xf545
0x003e84a0  31 02 00 4a     eor      w17, w17, w0
0x003e84a4  91 41 00 79     strh     w17, [x12, #0x20]
0x003e84a8  29 45 40 79     ldrh     w9, [x9, #0x22]
0x003e84ac  29 01 0f 4a     eor      w9, w9, w15
0x003e84b0  89 45 00 79     strh     w9, [x12, #0x22]
0x003e84b4  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e84b8  29 e1 34 91     add      x9, x9, #0xd38
0x003e84bc  2c 01 40 79     ldrh     w12, [x9]
0x003e84c0  8c 01 10 4a     eor      w12, w12, w16
0x003e84c4  cc 01 00 79     strh     w12, [x14]
0x003e84c8  2c 05 40 79     ldrh     w12, [x9, #2]
0x003e84cc  6f eb 9e 52     mov      w15, #0xf75b
0x003e84d0  8c 01 0f 4a     eor      w12, w12, w15
0x003e84d4  cc 05 00 79     strh     w12, [x14, #2]
0x003e84d8  2c 09 40 79     ldrh     w12, [x9, #4]
0x003e84dc  ef 89 96 52     mov      w15, #0xb44f
0x003e84e0  8c 01 0f 4a     eor      w12, w12, w15
0x003e84e4  cc 09 00 79     strh     w12, [x14, #4]
0x003e84e8  2c 0d 40 79     ldrh     w12, [x9, #6]
0x003e84ec  cf 63 8f 52     mov      w15, #0x7b1e
0x003e84f0  8c 01 0f 4a     eor      w12, w12, w15
0x003e84f4  2f 7c 85 52     mov      w15, #0x2be1
0x003e84f8  cc 0d 00 79     strh     w12, [x14, #6]
0x003e84fc  2c 11 40 79     ldrh     w12, [x9, #8]
0x003e8500  10 f0 9e 52     mov      w16, #0xf780
0x003e8504  8c 01 10 4a     eor      w12, w12, w16
0x003e8508  cc 11 00 79     strh     w12, [x14, #8]
0x003e850c  2c 15 40 79     ldrh     w12, [x9, #0xa]
0x003e8510  70 1a 8e 52     mov      w16, #0x70d3
0x003e8514  8c 01 10 4a     eor      w12, w12, w16
0x003e8518  cc 15 00 79     strh     w12, [x14, #0xa]
0x003e851c  29 19 40 79     ldrh     w9, [x9, #0xc]
0x003e8520  29 01 0f 4a     eor      w9, w9, w15
0x003e8524  c9 19 00 79     strh     w9, [x14, #0xc]
0x003e8528  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e852c  8c d1 33 91     add      x12, x12, #0xcf4
0x003e8530  8e 01 40 79     ldrh     w14, [x12]
0x003e8534  af a5 8b 52     mov      w15, #0x5d2d
0x003e8538  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e853c  29 91 31 91     add      x9, x9, #0xc64
0x003e8540  ce 01 0f 4a     eor      w14, w14, w15
0x003e8544  af 0b 00 f0     adrp     x15, #0x55f000
0x003e8548  ef e9 33 91     add      x15, x15, #0xcfa
0x003e854c  ee 01 00 79     strh     w14, [x15]
0x003e8550  ce 5b 9a 52     mov      w14, #0xd2de
0x003e8554  30 1a 80 52     mov      w16, #0xd1
0x003e8558  91 05 40 79     ldrh     w17, [x12, #2]
0x003e855c  00 2a 8d 52     mov      w0, #0x6950
0x003e8560  31 02 00 4a     eor      w17, w17, w0
0x003e8564  f1 05 00 79     strh     w17, [x15, #2]
0x003e8568  8c 09 40 79     ldrh     w12, [x12, #4]
0x003e856c  8c 01 0e 4a     eor      w12, w12, w14
0x003e8570  ec 09 00 79     strh     w12, [x15, #4]
0x003e8574  ae 0b 00 f0     adrp     x14, #0x55f000
0x003e8578  ce 61 31 91     add      x14, x14, #0xc58
0x003e857c  cc 01 40 39     ldrb     w12, [x14]
0x003e8580  8c 01 10 4a     eor      w12, w12, w16
0x003e8584  2c 01 00 39     strb     w12, [x9]
0x003e8588  cc 05 40 39     ldrb     w12, [x14, #1]
0x003e858c  8c 09 1e 52     eor      w12, w12, #0x1c
0x003e8590  2c 05 00 39     strb     w12, [x9, #1]
0x003e8594  cc 09 40 39     ldrb     w12, [x14, #2]
0x003e8598  2f 01 80 52     mov      w15, #9
0x003e859c  8c 01 0f 4a     eor      w12, w12, w15
0x003e85a0  2c 09 00 39     strb     w12, [x9, #2]
0x003e85a4  cc 0d 40 39     ldrb     w12, [x14, #3]
0x003e85a8  2f 15 80 52     mov      w15, #0xa9
0x003e85ac  8c 01 0f 4a     eor      w12, w12, w15
0x003e85b0  2c 0d 00 39     strb     w12, [x9, #3]
0x003e85b4  cc 11 40 39     ldrb     w12, [x14, #4]
0x003e85b8  8c 01 01 4a     eor      w12, w12, w1
0x003e85bc  2c 11 00 39     strb     w12, [x9, #4]
0x003e85c0  cc 15 40 39     ldrb     w12, [x14, #5]
0x003e85c4  4f 0b 80 52     mov      w15, #0x5a
0x003e85c8  8c 01 0f 4a     eor      w12, w12, w15
0x003e85cc  2c 15 00 39     strb     w12, [x9, #5]
0x003e85d0  cc 19 40 39     ldrb     w12, [x14, #6]
0x003e85d4  6d 14 80 52     mov      w13, #0xa3
0x003e85d8  8c 01 0d 4a     eor      w12, w12, w13
0x003e85dc  2c 19 00 39     strb     w12, [x9, #6]
0x003e85e0  cc 1d 40 39     ldrb     w12, [x14, #7]
0x003e85e4  8c 15 00 52     eor      w12, w12, #0x3f
0x003e85e8  2c 1d 00 39     strb     w12, [x9, #7]
0x003e85ec  cc 21 40 39     ldrb     w12, [x14, #8]
0x003e85f0  8c 01 15 4a     eor      w12, w12, w21
0x003e85f4  2c 21 00 39     strb     w12, [x9, #8]
0x003e85f8  cc 25 40 39     ldrb     w12, [x14, #9]
0x003e85fc  8f 01 17 4a     eor      w15, w12, w23
0x003e8600  50 9f 95 52     mov      w16, #0xacfa
0x003e8604  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e8608  8c 81 33 91     add      x12, x12, #0xce0
0x003e860c  2f 25 00 39     strb     w15, [x9, #9]
0x003e8610  cf 29 40 39     ldrb     w15, [x14, #0xa]
0x003e8614  ef 09 1f 52     eor      w15, w15, #0xe
0x003e8618  2f 29 00 39     strb     w15, [x9, #0xa]
0x003e861c  ce 2d 40 39     ldrb     w14, [x14, #0xb]
0x003e8620  ce 01 08 4a     eor      w14, w14, w8
0x003e8624  2e 2d 00 39     strb     w14, [x9, #0xb]
0x003e8628  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e862c  29 01 33 91     add      x9, x9, #0xcc0
0x003e8630  2e 01 40 79     ldrh     w14, [x9]
0x003e8634  ce 01 10 4a     eor      w14, w14, w16
0x003e8638  8e 01 00 79     strh     w14, [x12]
0x003e863c  2e 05 40 79     ldrh     w14, [x9, #2]
0x003e8640  af 72 87 52     mov      w15, #0x3b95
0x003e8644  ce 01 0f 4a     eor      w14, w14, w15
0x003e8648  8e 05 00 79     strh     w14, [x12, #2]
0x003e864c  2e 09 40 79     ldrh     w14, [x9, #4]
0x003e8650  6f 8b 9c 52     mov      w15, #0xe45b
0x003e8654  ce 01 0f 4a     eor      w14, w14, w15
0x003e8658  8e 09 00 79     strh     w14, [x12, #4]
0x003e865c  2e 0d 40 79     ldrh     w14, [x9, #6]
0x003e8660  0f 39 9d 52     mov      w15, #0xe9c8
0x003e8664  ce 01 0f 4a     eor      w14, w14, w15
0x003e8668  2f f8 8a 52     mov      w15, #0x57c1
0x003e866c  8e 0d 00 79     strh     w14, [x12, #6]
0x003e8670  2e 11 40 79     ldrh     w14, [x9, #8]
0x003e8674  50 cc 92 52     mov      w16, #0x9662
0x003e8678  ce 01 10 4a     eor      w14, w14, w16
0x003e867c  8e 11 00 79     strh     w14, [x12, #8]
0x003e8680  2e 15 40 79     ldrh     w14, [x9, #0xa]
0x003e8684  70 b6 82 52     mov      w16, #0x15b3
0x003e8688  ce 01 10 4a     eor      w14, w14, w16
0x003e868c  8e 15 00 79     strh     w14, [x12, #0xa]
0x003e8690  2e 19 40 79     ldrh     w14, [x9, #0xc]
0x003e8694  ce 01 0f 4a     eor      w14, w14, w15
0x003e8698  8e 19 00 79     strh     w14, [x12, #0xc]
0x003e869c  2e 1d 40 79     ldrh     w14, [x9, #0xe]
0x003e86a0  6f bc 8a 52     mov      w15, #0x55e3
0x003e86a4  ce 01 0f 4a     eor      w14, w14, w15
0x003e86a8  8e 1d 00 79     strh     w14, [x12, #0xe]
0x003e86ac  2e 21 40 79     ldrh     w14, [x9, #0x10]
0x003e86b0  2f 25 8d 52     mov      w15, #0x6929
0x003e86b4  ce 01 0f 4a     eor      w14, w14, w15
0x003e86b8  8e 21 00 79     strh     w14, [x12, #0x10]
0x003e86bc  2e 25 40 79     ldrh     w14, [x9, #0x12]
0x003e86c0  2f 8e 82 52     mov      w15, #0x1471
0x003e86c4  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e86c8  29 81 34 91     add      x9, x9, #0xd20
0x003e86cc  ce 01 0f 4a     eor      w14, w14, w15
0x003e86d0  8e 25 00 79     strh     w14, [x12, #0x12]
0x003e86d4  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e86d8  8c 01 34 91     add      x12, x12, #0xd00
0x003e86dc  8e 01 40 79     ldrh     w14, [x12]
0x003e86e0  ef 8c 9c 52     mov      w15, #0xe467
0x003e86e4  ce 01 0f 4a     eor      w14, w14, w15
0x003e86e8  2e 01 00 79     strh     w14, [x9]
0x003e86ec  8e 05 40 79     ldrh     w14, [x12, #2]
0x003e86f0  0f d6 94 52     mov      w15, #0xa6b0
0x003e86f4  ce 01 0f 4a     eor      w14, w14, w15
0x003e86f8  8f f1 91 52     mov      w15, #0x8f8c
0x003e86fc  2e 05 00 79     strh     w14, [x9, #2]
0x003e8700  8e 09 40 79     ldrh     w14, [x12, #4]
0x003e8704  30 5d 8a 52     mov      w16, #0x52e9
0x003e8708  ce 01 10 4a     eor      w14, w14, w16
0x003e870c  2e 09 00 79     strh     w14, [x9, #4]
0x003e8710  8e 0d 40 79     ldrh     w14, [x12, #6]
0x003e8714  f0 08 9a 52     mov      w16, #0xd047
0x003e8718  ce 01 10 4a     eor      w14, w14, w16
0x003e871c  2e 0d 00 79     strh     w14, [x9, #6]
0x003e8720  8e 11 40 79     ldrh     w14, [x12, #8]
0x003e8724  ce 01 0f 4a     eor      w14, w14, w15
0x003e8728  2e 11 00 79     strh     w14, [x9, #8]
0x003e872c  8e 15 40 79     ldrh     w14, [x12, #0xa]
0x003e8730  cf 9b 91 52     mov      w15, #0x8cde
0x003e8734  ce 01 0f 4a     eor      w14, w14, w15
0x003e8738  2e 15 00 79     strh     w14, [x9, #0xa]
0x003e873c  8e 19 40 79     ldrh     w14, [x12, #0xc]
0x003e8740  2f d7 86 52     mov      w15, #0x36b9
0x003e8744  ce 01 0f 4a     eor      w14, w14, w15
0x003e8748  2e 19 00 79     strh     w14, [x9, #0xc]
0x003e874c  8e 1d 40 79     ldrh     w14, [x12, #0xe]
0x003e8750  0f ee 84 52     mov      w15, #0x2770
0x003e8754  ce 01 0f 4a     eor      w14, w14, w15
0x003e8758  ef a4 8d 52     mov      w15, #0x6d27
0x003e875c  2e 1d 00 79     strh     w14, [x9, #0xe]
0x003e8760  8e 21 40 79     ldrh     w14, [x12, #0x10]
0x003e8764  70 c8 88 52     mov      w16, #0x4643
0x003e8768  ce 01 10 4a     eor      w14, w14, w16
0x003e876c  2e 21 00 79     strh     w14, [x9, #0x10]
0x003e8770  8e 25 40 79     ldrh     w14, [x12, #0x12]
0x003e8774  50 99 9d 52     mov      w16, #0xecca
0x003e8778  ce 01 10 4a     eor      w14, w14, w16
0x003e877c  2e 25 00 79     strh     w14, [x9, #0x12]
0x003e8780  8e 29 40 79     ldrh     w14, [x12, #0x14]
0x003e8784  ce 01 0f 4a     eor      w14, w14, w15
0x003e8788  2e 29 00 79     strh     w14, [x9, #0x14]
0x003e878c  8c 2d 40 79     ldrh     w12, [x12, #0x16]
0x003e8790  2e d0 83 52     mov      w14, #0x1e81
0x003e8794  8c 01 0e 4a     eor      w12, w12, w14
0x003e8798  2c 2d 00 79     strh     w12, [x9, #0x16]
0x003e879c  a9 0b 00 f0     adrp     x9, #0x55f000
0x003e87a0  29 81 30 91     add      x9, x9, #0xc20
0x003e87a4  2c 01 40 39     ldrb     w12, [x9]
0x003e87a8  8d 01 04 4a     eor      w13, w12, w4
0x003e87ac  ac 0b 00 f0     adrp     x12, #0x55f000
0x003e87b0  8c c1 30 91     add      x12, x12, #0xc30
0x003e87b4  8d 01 00 39     strb     w13, [x12]
0x003e87b8  2d 05 40 39     ldrb     w13, [x9, #1]
0x003e87bc  ab 01 0b 4a     eor      w11, w13, w11
0x003e87c0  8b 05 00 39     strb     w11, [x12, #1]
0x003e87c4  2b 09 40 39     ldrb     w11, [x9, #2]
0x003e87c8  6b 79 19 52     eor      w11, w11, #0xffffffbf
0x003e87cc  8b 09 00 39     strb     w11, [x12, #2]
0x003e87d0  ab 05 80 52     mov      w11, #0x2d
0x003e87d4  2d 0d 40 39     ldrb     w13, [x9, #3]
0x003e87d8  6e 03 80 52     mov      w14, #0x1b
0x003e87dc  ad 01 0e 4a     eor      w13, w13, w14
0x003e87e0  8d 0d 00 39     strb     w13, [x12, #3]
0x003e87e4  2d 11 40 39     ldrb     w13, [x9, #4]
0x003e87e8  ab 01 0b 4a     eor      w11, w13, w11
0x003e87ec  8b 11 00 39     strb     w11, [x12, #4]
0x003e87f0  2b 15 40 39     ldrb     w11, [x9, #5]
0x003e87f4  68 01 08 4a     eor      w8, w11, w8
0x003e87f8  88 15 00 39     strb     w8, [x12, #5]
0x003e87fc  28 19 40 39     ldrb     w8, [x9, #6]
0x003e8800  08 01 07 4a     eor      w8, w8, w7
0x003e8804  88 19 00 39     strb     w8, [x12, #6]
0x003e8808  28 1d 40 39     ldrb     w8, [x9, #7]
0x003e880c  ab 1c 80 52     mov      w11, #0xe5
0x003e8810  08 01 0b 4a     eor      w8, w8, w11
0x003e8814  88 1d 00 39     strb     w8, [x12, #7]
0x003e8818  28 21 40 39     ldrb     w8, [x9, #8]
0x003e881c  2b 0b 80 52     mov      w11, #0x59
0x003e8820  08 01 0b 4a     eor      w8, w8, w11
0x003e8824  88 21 00 39     strb     w8, [x12, #8]
0x003e8828  28 25 40 39     ldrb     w8, [x9, #9]
0x003e882c  08 01 19 52     eor      w8, w8, #0x80
0x003e8830  88 25 00 39     strb     w8, [x12, #9]
0x003e8834  a8 14 80 52     mov      w8, #0xa5
0x003e8838  2b 29 40 39     ldrb     w11, [x9, #0xa]
0x003e883c  ed 0c 80 52     mov      w13, #0x67
0x003e8840  6b 01 0d 4a     eor      w11, w11, w13
0x003e8844  8b 29 00 39     strb     w11, [x12, #0xa]
0x003e8848  2b 2d 40 39     ldrb     w11, [x9, #0xb]
0x003e884c  68 01 08 4a     eor      w8, w11, w8
0x003e8850  88 2d 00 39     strb     w8, [x12, #0xb]
0x003e8854  28 31 40 39     ldrb     w8, [x9, #0xc]
0x003e8858  0b 14 80 52     mov      w11, #0xa0
0x003e885c  08 01 0b 4a     eor      w8, w8, w11
0x003e8860  88 31 00 39     strb     w8, [x12, #0xc]
0x003e8864  28 35 40 39     ldrb     w8, [x9, #0xd]
0x003e8868  08 01 0a 4a     eor      w8, w8, w10
0x003e886c  88 35 00 39     strb     w8, [x12, #0xd]
0x003e8870  28 39 40 39     ldrb     w8, [x9, #0xe]
0x003e8874  ea 1a 80 52     mov      w10, #0xd7
0x003e8878  08 01 0a 4a     eor      w8, w8, w10
0x003e887c  88 39 00 39     strb     w8, [x12, #0xe]
0x003e8880  28 3d 40 39     ldrb     w8, [x9, #0xf]
0x003e8884  08 e5 00 52     eor      w8, w8, #0x33333333
0x003e8888  88 3d 00 39     strb     w8, [x12, #0xf]
0x003e888c  a8 0b 00 f0     adrp     x8, #0x55f000
0x003e8890  08 01 31 91     add      x8, x8, #0xc40
0x003e8894  09 01 40 79     ldrh     w9, [x8]
0x003e8898  8a ae 9b 52     mov      w10, #0xdd74
0x003e889c  4b cf 8c 52     mov      w11, #0x667a
0x003e88a0  29 01 0b 4a     eor      w9, w9, w11
0x003e88a4  ab 0b 00 f0     adrp     x11, #0x55f000
0x003e88a8  6b 31 31 91     add      x11, x11, #0xc4c
0x003e88ac  69 01 00 79     strh     w9, [x11]
0x003e88b0  09 05 40 79     ldrh     w9, [x8, #2]
0x003e88b4  0c c6 99 52     mov      w12, #0xce30
0x003e88b8  29 01 0c 4a     eor      w9, w9, w12
0x003e88bc  69 05 00 79     strh     w9, [x11, #2]
0x003e88c0  09 09 40 79     ldrh     w9, [x8, #4]
0x003e88c4  29 01 0a 4a     eor      w9, w9, w10
0x003e88c8  69 09 00 79     strh     w9, [x11, #4]
0x003e88cc  09 0d 40 79     ldrh     w9, [x8, #6]
0x003e88d0  8a 56 80 52     mov      w10, #0x2b4
0x003e88d4  29 01 0a 4a     eor      w9, w9, w10
0x003e88d8  69 0d 00 79     strh     w9, [x11, #6]
0x003e88dc  09 11 40 79     ldrh     w9, [x8, #8]
0x003e88e0  4a d8 95 52     mov      w10, #0xaec2
0x003e88e4  29 01 0a 4a     eor      w9, w9, w10
0x003e88e8  69 11 00 79     strh     w9, [x11, #8]
0x003e88ec  08 15 40 79     ldrh     w8, [x8, #0xa]
0x003e88f0  a9 3b 90 52     mov      w9, #0x81dd
0x003e88f4  ca 0b 00 90     adrp     x10, #0x560000
0x003e88f8  4a 41 01 91     add      x10, x10, #0x50
0x003e88fc  08 01 09 4a     eor      w8, w8, w9
0x003e8900  68 15 00 79     strh     w8, [x11, #0xa]
0x003e8904  c8 0b 00 90     adrp     x8, #0x560000
0x003e8908  08 11 01 91     add      x8, x8, #0x44
0x003e890c  09 01 40 79     ldrh     w9, [x8]
0x003e8910  cb 66 99 52     mov      w11, #0xcb36
0x003e8914  29 01 0b 4a     eor      w9, w9, w11
0x003e8918  49 01 00 79     strh     w9, [x10]
0x003e891c  09 05 40 79     ldrh     w9, [x8, #2]
0x003e8920  4b 4f 91 52     mov      w11, #0x8a7a
0x003e8924  29 01 0b 4a     eor      w9, w9, w11
0x003e8928  6b b5 92 52     mov      w11, #0x95ab
0x003e892c  49 05 00 79     strh     w9, [x10, #2]
0x003e8930  09 09 40 79     ldrh     w9, [x8, #4]
0x003e8934  6c 80 87 52     mov      w12, #0x3c03
0x003e8938  29 01 0c 4a     eor      w9, w9, w12
0x003e893c  49 09 00 79     strh     w9, [x10, #4]
0x003e8940  09 0d 40 79     ldrh     w9, [x8, #6]
0x003e8944  ec 93 98 52     mov      w12, #0xc49f
0x003e8948  29 01 0c 4a     eor      w9, w9, w12
0x003e894c  49 0d 00 79     strh     w9, [x10, #6]
0x003e8950  09 11 40 79     ldrh     w9, [x8, #8]
0x003e8954  29 01 0b 4a     eor      w9, w9, w11
0x003e8958  49 11 00 79     strh     w9, [x10, #8]
0x003e895c  08 15 40 79     ldrh     w8, [x8, #0xa]
0x003e8960  49 25 98 52     mov      w9, #0xc12a
0x003e8964  08 01 09 4a     eor      w8, w8, w9
0x003e8968  48 15 00 79     strh     w8, [x10, #0xa]
0x003e896c  c8 0b 00 90     adrp     x8, #0x560000
0x003e8970  08 a9 05 91     add      x8, x8, #0x16a
0x003e8974  09 01 40 79     ldrh     w9, [x8]
0x003e8978  6a c3 9b 52     mov      w10, #0xde1b
0x003e897c  29 01 0a 4a     eor      w9, w9, w10
0x003e8980  ca 0b 00 90     adrp     x10, #0x560000
0x003e8984  4a d1 05 91     add      x10, x10, #0x174
0x003e8988  4b 65 92 52     mov      w11, #0x932a
0x003e898c  49 01 00 79     strh     w9, [x10]
0x003e8990  09 05 40 79     ldrh     w9, [x8, #2]
0x003e8994  ec 6f 8a 52     mov      w12, #0x537f
0x003e8998  29 01 0c 4a     eor      w9, w9, w12
0x003e899c  49 05 00 79     strh     w9, [x10, #2]
0x003e89a0  09 09 40 79     ldrh     w9, [x8, #4]
0x003e89a4  ac f6 89 52     mov      w12, #0x4fb5
0x003e89a8  29 01 0c 4a     eor      w9, w9, w12
0x003e89ac  49 09 00 79     strh     w9, [x10, #4]
0x003e89b0  09 0d 40 79     ldrh     w9, [x8, #6]
0x003e89b4  29 01 0b 4a     eor      w9, w9, w11
0x003e89b8  49 0d 00 79     strh     w9, [x10, #6]
0x003e89bc  08 11 40 79     ldrh     w8, [x8, #8]
0x003e89c0  e9 54 90 52     mov      w9, #0x82a7
0x003e89c4  08 01 09 4a     eor      w8, w8, w9
0x003e89c8  48 11 00 79     strh     w8, [x10, #8]
0x003e89cc  a8 0b 00 f0     adrp     x8, #0x55f000
0x003e89d0  08 c1 31 91     add      x8, x8, #0xc70
0x003e89d4  09 01 40 79     ldrh     w9, [x8]
0x003e89d8  0a a1 99 52     mov      w10, #0xcd08
0x003e89dc  29 01 0a 4a     eor      w9, w9, w10
0x003e89e0  aa 0b 00 f0     adrp     x10, #0x55f000
0x003e89e4  4a e1 31 91     add      x10, x10, #0xc78
0x003e89e8  4b ce 88 52     mov      w11, #0x4672
0x003e89ec  49 01 00 79     strh     w9, [x10]
0x003e89f0  09 05 40 79     ldrh     w9, [x8, #2]
0x003e89f4  2c d1 88 52     mov      w12, #0x4689
0x003e89f8  29 01 0c 4a     eor      w9, w9, w12
0x003e89fc  49 05 00 79     strh     w9, [x10, #2]
0x003e8a00  09 09 40 79     ldrh     w9, [x8, #4]
0x003e8a04  0c 49 99 52     mov      w12, #0xca48
0x003e8a08  29 01 0c 4a     eor      w9, w9, w12
0x003e8a0c  49 09 00 79     strh     w9, [x10, #4]
0x003e8a10  c9 0c 00 d0     adrp     x9, #0x582000
0x003e8a14  29 c1 0e 91     add      x9, x9, #0x3b0
0x003e8a18  08 0d 40 79     ldrh     w8, [x8, #6]
0x003e8a1c  08 01 0b 4a     eor      w8, w8, w11
0x003e8a20  48 0d 00 79     strh     w8, [x10, #6]
0x003e8a24  28 00 80 52     mov      w8, #1
0x003e8a28  28 fd 9f 88     stlr     w8, [x9]
0x003e8a2c  f8 03 01 d1     sub      x24, sp, #0x40
0x003e8a30  1f 03 00 91     mov      sp, x24
0x003e8a34  f9 03 02 d1     sub      x25, sp, #0x80
0x003e8a38  3f 03 00 91     mov      sp, x25
0x003e8a3c  e0 03 13 aa     mov      x0, x19
0x003e8a40  9a e4 01 94     bl       #0x461ca8
0x003e8a44  b4 83 16 f8     stur     x20, [x29, #-0x98]
0x003e8a48  e0 03 14 aa     mov      x0, x20
0x003e8a4c  97 e4 01 94     bl       #0x461ca8
0x003e8a50  c8 06 00 90     adrp     x8, #0x4c0000
0x003e8a54  01 ed 43 f9     ldr      x1, [x8, #0x7d8]
0x003e8a58  c2 0b 00 90     adrp     x2, #0x560000
0x003e8a5c  42 00 2e 91     add      x2, x2, #0xb80
0x003e8a60  b3 03 17 f8     stur     x19, [x29, #-0x90]
0x003e8a64  e0 03 13 aa     mov      x0, x19
0x003e8a68  81 e4 01 94     bl       #0x461c6c
0x003e8a6c  fd 03 1d aa     mov      x29, x29
0x003e8a70  97 e4 01 94     bl       #0x461ccc
0x003e8a74  f6 03 00 aa     mov      x22, x0
0x003e8a78  e0 01 00 b5     cbnz     x0, #0x3e8ab4
0x003e8a7c  e8 06 00 90     adrp     x8, #0x4c4000
0x003e8a80  00 5d 41 f9     ldr      x0, [x8, #0x2b8]
0x003e8a84  47 e4 01 94     bl       #0x461ba0
0x003e8a88  c8 06 00 90     adrp     x8, #0x4c0000
0x003e8a8c  01 f1 43 f9     ldr      x1, [x8, #0x7e0]
0x003e8a90  c3 0b 00 90     adrp     x3, #0x560000
0x003e8a94  63 00 2e 91     add      x3, x3, #0xb80
0x003e8a98  02 00 80 d2     mov      x2, #0
0x003e8a9c  74 e4 01 94     bl       #0x461c6c
0x003e8aa0  f6 03 00 aa     mov      x22, x0
0x003e8aa4  c8 06 00 90     adrp     x8, #0x4c0000
0x003e8aa8  01 ed 46 f9     ldr      x1, [x8, #0xdd8]
0x003e8aac  02 00 80 d2     mov      x2, #0
0x003e8ab0  6f e4 01 94     bl       #0x461c6c
0x003e8ab4  00 e4 00 4f     movi     v0.16b, #0
0x003e8ab8  00 03 01 ad     stp      q0, q0, [x24, #0x20]
0x003e8abc  00 03 00 ad     stp      q0, q0, [x24]
0x003e8ac0  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8ac4  01 79 45 f9     ldr      x1, [x8, #0xaf0]
0x003e8ac8  e0 03 16 aa     mov      x0, x22
0x003e8acc  a1 03 18 f8     stur     x1, [x29, #-0x80]
0x003e8ad0  67 e4 01 94     bl       #0x461c6c
0x003e8ad4  fd 03 1d aa     mov      x29, x29
0x003e8ad8  7d e4 01 94     bl       #0x461ccc
0x003e8adc  f5 03 00 aa     mov      x21, x0
0x003e8ae0  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8ae4  01 e1 43 f9     ldr      x1, [x8, #0x7c0]
0x003e8ae8  61 e4 01 94     bl       #0x461c6c
0x003e8aec  fd 03 1d aa     mov      x29, x29
0x003e8af0  77 e4 01 94     bl       #0x461ccc
0x003e8af4  fb 03 00 aa     mov      x27, x0
0x003e8af8  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8afc  01 81 44 f9     ldr      x1, [x8, #0x900]
0x003e8b00  5b e4 01 94     bl       #0x461c6c
0x003e8b04  fa 03 00 aa     mov      x26, x0
0x003e8b08  e0 03 1b aa     mov      x0, x27
0x003e8b0c  64 e4 01 94     bl       #0x461c9c
0x003e8b10  e0 03 15 aa     mov      x0, x21
0x003e8b14  62 e4 01 94     bl       #0x461c9c
0x003e8b18  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8b1c  1b 3d 42 f9     ldr      x27, [x8, #0x478]
0x003e8b20  e0 03 1a aa     mov      x0, x26
0x003e8b24  e1 03 1b aa     mov      x1, x27
0x003e8b28  e2 03 18 aa     mov      x2, x24
0x003e8b2c  e3 03 19 aa     mov      x3, x25
0x003e8b30  04 02 80 52     mov      w4, #0x10
0x003e8b34  4e e4 01 94     bl       #0x461c6c
0x003e8b38  80 03 00 b4     cbz      x0, #0x3e8ba8
0x003e8b3c  fc 03 00 aa     mov      x28, x0
0x003e8b40  08 0b 40 f9     ldr      x8, [x24, #0x10]
0x003e8b44  13 01 40 f9     ldr      x19, [x8]
0x003e8b48  b4 06 00 d0     adrp     x20, #0x4be000
0x003e8b4c  17 00 80 d2     mov      x23, #0
0x003e8b50  95 9a 45 f9     ldr      x21, [x20, #0xb30]
0x003e8b54  08 0b 40 f9     ldr      x8, [x24, #0x10]
0x003e8b58  08 01 40 f9     ldr      x8, [x8]
0x003e8b5c  1f 01 13 eb     cmp      x8, x19
0x003e8b60  60 00 00 54     b.eq     #0x3e8b6c
0x003e8b64  e0 03 1a aa     mov      x0, x26
0x003e8b68  2f e4 01 94     bl       #0x461c24
0x003e8b6c  08 07 40 f9     ldr      x8, [x24, #8]
0x003e8b70  00 79 77 f8     ldr      x0, [x8, x23, lsl #3]
0x003e8b74  e1 03 15 aa     mov      x1, x21
0x003e8b78  3d e4 01 94     bl       #0x461c6c
0x003e8b7c  f7 06 00 91     add      x23, x23, #1
0x003e8b80  9f 03 17 eb     cmp      x28, x23
0x003e8b84  81 fe ff 54     b.ne     #0x3e8b54
0x003e8b88  e0 03 1a aa     mov      x0, x26
0x003e8b8c  e1 03 1b aa     mov      x1, x27
0x003e8b90  e2 03 18 aa     mov      x2, x24
0x003e8b94  e3 03 19 aa     mov      x3, x25
0x003e8b98  04 02 80 52     mov      w4, #0x10
0x003e8b9c  34 e4 01 94     bl       #0x461c6c
0x003e8ba0  fc 03 00 aa     mov      x28, x0
0x003e8ba4  40 fd ff b5     cbnz     x0, #0x3e8b4c
0x003e8ba8  e0 03 1a aa     mov      x0, x26
0x003e8bac  3c e4 01 94     bl       #0x461c9c
0x003e8bb0  fc 06 00 90     adrp     x28, #0x4c4000
0x003e8bb4  80 4b 40 f9     ldr      x0, [x28, #0x90]
0x003e8bb8  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8bbc  15 5d 45 f9     ldr      x21, [x8, #0xab8]
0x003e8bc0  e1 03 15 aa     mov      x1, x21
0x003e8bc4  2a e4 01 94     bl       #0x461c6c
0x003e8bc8  fd 03 1d aa     mov      x29, x29
0x003e8bcc  40 e4 01 94     bl       #0x461ccc
0x003e8bd0  f8 03 00 aa     mov      x24, x0
0x003e8bd4  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8bd8  19 31 42 f9     ldr      x25, [x8, #0x460]
0x003e8bdc  e0 03 16 aa     mov      x0, x22
0x003e8be0  e1 03 19 aa     mov      x1, x25
0x003e8be4  e2 03 18 aa     mov      x2, x24
0x003e8be8  21 e4 01 94     bl       #0x461c6c
0x003e8bec  e0 03 18 aa     mov      x0, x24
0x003e8bf0  2b e4 01 94     bl       #0x461c9c
0x003e8bf4  80 4b 40 f9     ldr      x0, [x28, #0x90]
0x003e8bf8  e1 03 15 aa     mov      x1, x21
0x003e8bfc  1c e4 01 94     bl       #0x461c6c
0x003e8c00  fd 03 1d aa     mov      x29, x29
0x003e8c04  32 e4 01 94     bl       #0x461ccc
0x003e8c08  f5 03 00 aa     mov      x21, x0
0x003e8c0c  e0 03 16 aa     mov      x0, x22
0x003e8c10  b3 03 58 f8     ldur     x19, [x29, #-0x80]
0x003e8c14  e1 03 13 aa     mov      x1, x19
0x003e8c18  15 e4 01 94     bl       #0x461c6c
0x003e8c1c  fd 03 1d aa     mov      x29, x29
0x003e8c20  2b e4 01 94     bl       #0x461ccc
0x003e8c24  f8 03 00 aa     mov      x24, x0
0x003e8c28  e1 03 19 aa     mov      x1, x25
0x003e8c2c  e2 03 15 aa     mov      x2, x21
0x003e8c30  0f e4 01 94     bl       #0x461c6c
0x003e8c34  e0 03 18 aa     mov      x0, x24
0x003e8c38  19 e4 01 94     bl       #0x461c9c
0x003e8c3c  e0 03 15 aa     mov      x0, x21
0x003e8c40  17 e4 01 94     bl       #0x461c9c
0x003e8c44  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8c48  15 1d 42 f9     ldr      x21, [x8, #0x438]
0x003e8c4c  e0 03 16 aa     mov      x0, x22
0x003e8c50  e1 03 15 aa     mov      x1, x21
0x003e8c54  02 00 80 52     mov      w2, #0
0x003e8c58  05 e4 01 94     bl       #0x461c6c
0x003e8c5c  e0 03 16 aa     mov      x0, x22
0x003e8c60  e1 03 13 aa     mov      x1, x19
0x003e8c64  02 e4 01 94     bl       #0x461c6c
0x003e8c68  fd 03 1d aa     mov      x29, x29
0x003e8c6c  18 e4 01 94     bl       #0x461ccc
0x003e8c70  f8 03 00 aa     mov      x24, x0
0x003e8c74  e1 03 15 aa     mov      x1, x21
0x003e8c78  02 00 80 52     mov      w2, #0
0x003e8c7c  fc e3 01 94     bl       #0x461c6c
0x003e8c80  e0 03 18 aa     mov      x0, x24
0x003e8c84  06 e4 01 94     bl       #0x461c9c
0x003e8c88  c8 06 00 d0     adrp     x8, #0x4c2000
0x003e8c8c  01 c9 43 f9     ldr      x1, [x8, #0x790]
0x003e8c90  e0 03 16 aa     mov      x0, x22
0x003e8c94  02 00 80 d2     mov      x2, #0
0x003e8c98  f5 e3 01 94     bl       #0x461c6c
0x003e8c9c  c8 06 00 90     adrp     x8, #0x4c0000
0x003e8ca0  01 15 44 f9     ldr      x1, [x8, #0x828]
0x003e8ca4  e0 03 16 aa     mov      x0, x22
0x003e8ca8  02 00 80 d2     mov      x2, #0
0x003e8cac  f0 e3 01 94     bl       #0x461c6c
0x003e8cb0  e8 06 00 90     adrp     x8, #0x4c4000
0x003e8cb4  00 31 40 f9     ldr      x0, [x8, #0x60]
0x003e8cb8  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8cbc  01 85 41 f9     ldr      x1, [x8, #0x308]
0x003e8cc0  eb e3 01 94     bl       #0x461c6c
0x003e8cc4  fd 03 1d aa     mov      x29, x29
0x003e8cc8  01 e4 01 94     bl       #0x461ccc
0x003e8ccc  f8 03 00 aa     mov      x24, x0
0x003e8cd0  90 c9 f3 97     bl       #0xdb310
0x003e8cd4  fa 03 00 aa     mov      x26, x0
0x003e8cd8  e0 03 16 aa     mov      x0, x22
0x003e8cdc  e1 03 13 aa     mov      x1, x19
0x003e8ce0  e3 e3 01 94     bl       #0x461c6c
0x003e8ce4  fd 03 1d aa     mov      x29, x29
0x003e8ce8  f9 e3 01 94     bl       #0x461ccc
0x003e8cec  f5 03 00 aa     mov      x21, x0
0x003e8cf0  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8cf4  01 59 42 f9     ldr      x1, [x8, #0x4b0]
0x003e8cf8  dd e3 01 94     bl       #0x461c6c
0x003e8cfc  e0 03 15 aa     mov      x0, x21
0x003e8d00  e7 e3 01 94     bl       #0x461c9c
0x003e8d04  e0 03 16 aa     mov      x0, x22
0x003e8d08  e1 03 13 aa     mov      x1, x19
0x003e8d0c  d8 e3 01 94     bl       #0x461c6c
0x003e8d10  fd 03 1d aa     mov      x29, x29
0x003e8d14  ee e3 01 94     bl       #0x461ccc
0x003e8d18  f5 03 00 aa     mov      x21, x0
0x003e8d1c  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8d20  19 6d 42 f9     ldr      x25, [x8, #0x4d8]
0x003e8d24  e1 03 19 aa     mov      x1, x25
0x003e8d28  d1 e3 01 94     bl       #0x461c6c
0x003e8d2c  77 e2 01 94     bl       #0x461708
0x003e8d30  08 40 65 1e     frintm   d8, d0
0x003e8d34  e0 03 15 aa     mov      x0, x21
0x003e8d38  d9 e3 01 94     bl       #0x461c9c
0x003e8d3c  c8 0d e8 d2     mov      x8, #0x406e000000000000
0x003e8d40  00 01 67 9e     fmov     d0, x8
0x003e8d44  00 21 60 1e     fcmp     d8, d0
0x003e8d48  b4 cf 76 a9     ldp      x20, x19, [x29, #-0x98]
0x003e8d4c  05 01 00 54     b.pl     #0x3e8d6c
0x003e8d50  c8 06 00 b0     adrp     x8, #0x4c1000
0x003e8d54  01 5d 47 f9     ldr      x1, [x8, #0xeb8]
0x003e8d58  e0 03 13 aa     mov      x0, x19
0x003e8d5c  e2 03 14 aa     mov      x2, x20
0x003e8d60  c3 e3 01 94     bl       #0x461c6c
0x003e8d64  69 e2 01 94     bl       #0x461708
0x003e8d68  08 40 65 1e     frintm   d8, d0
0x003e8d6c  c8 0d e8 d2     mov      x8, #0x406e000000000000
0x003e8d70  00 01 67 9e     fmov     d0, x8
0x003e8d74  00 21 60 1e     fcmp     d8, d0
0x003e8d78  c5 00 00 54     b.pl     #0x3e8d90
0x003e8d7c  e0 03 13 aa     mov      x0, x19
0x003e8d80  e1 03 19 aa     mov      x1, x25
0x003e8d84  ba e3 01 94     bl       #0x461c6c
0x003e8d88  60 e2 01 94     bl       #0x461708
0x003e8d8c  08 40 65 1e     frintm   d8, d0
0x003e8d90  00 10 76 1e     fmov     d0, #-16.00000000
0x003e8d94  00 29 60 1e     fadd     d0, d8, d0
0x003e8d98  01 90 75 1e     fmov     d1, #-14.00000000
0x003e8d9c  00 28 61 1e     fadd     d0, d0, d1
0x003e8da0  01 10 6c 1e     fmov     d1, #0.50000000
0x003e8da4  08 08 61 1e     fmul     d8, d0, d1
0x003e8da8  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8dac  1b f9 42 f9     ldr      x27, [x8, #0x5f0]
0x003e8db0  e0 03 14 aa     mov      x0, x20
0x003e8db4  e1 03 1b aa     mov      x1, x27
0x003e8db8  ad e3 01 94     bl       #0x461c6c
0x003e8dbc  60 00 00 b4     cbz      x0, #0x3e8dc8
0x003e8dc0  19 00 80 d2     mov      x25, #0
0x003e8dc4  39 00 00 14     b        #0x3e8ea8
0x003e8dc8  e8 06 00 90     adrp     x8, #0x4c4000
0x003e8dcc  00 89 42 f9     ldr      x0, [x8, #0x510]
0x003e8dd0  74 e3 01 94     bl       #0x461ba0
0x003e8dd4  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8dd8  01 9d 45 f9     ldr      x1, [x8, #0xb38]
0x003e8ddc  c8 05 00 90     adrp     x8, #0x4a0000
0x003e8de0  08 05 43 f9     ldr      x8, [x8, #0x608]
0x003e8de4  00 05 40 6d     ldp      d0, d1, [x8]
0x003e8de8  02 0d 41 6d     ldp      d2, d3, [x8, #0x10]
0x003e8dec  a0 e3 01 94     bl       #0x461c6c
0x003e8df0  f9 03 00 aa     mov      x25, x0
0x003e8df4  a8 06 00 f0     adrp     x8, #0x4bf000
0x003e8df8  01 19 46 f9     ldr      x1, [x8, #0xc30]
0x003e8dfc  02 00 80 d2     mov      x2, #0
0x003e8e00  9b e3 01 94     bl       #0x461c6c
0x003e8e04  c8 05 00 f0     adrp     x8, #0x4a3000
0x003e8e08  08 41 23 91     add      x8, x8, #0x8d0
0x003e8e0c  02 01 40 f9     ldr      x2, [x8]
0x003e8e10  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8e14  01 95 41 f9     ldr      x1, [x8, #0x328]
0x003e8e18  e0 03 18 aa     mov      x0, x24
0x003e8e1c  94 e3 01 94     bl       #0x461c6c
0x003e8e20  e2 03 00 aa     mov      x2, x0
0x003e8e24  c8 06 00 b0     adrp     x8, #0x4c1000
0x003e8e28  01 ed 41 f9     ldr      x1, [x8, #0x3d8]
0x003e8e2c  e0 03 19 aa     mov      x0, x25
0x003e8e30  8f e3 01 94     bl       #0x461c6c
0x003e8e34  80 4b 40 f9     ldr      x0, [x28, #0x90]
0x003e8e38  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8e3c  01 7d 44 f9     ldr      x1, [x8, #0x8f8]
0x003e8e40  48 05 00 b0     adrp     x8, #0x491000
0x003e8e44  00 f9 44 fd     ldr      d0, [x8, #0x9f0]
0x003e8e48  48 05 00 b0     adrp     x8, #0x491000
0x003e8e4c  01 25 43 fd     ldr      d1, [x8, #0x648]
0x003e8e50  48 05 00 d0     adrp     x8, #0x492000
0x003e8e54  02 f1 41 fd     ldr      d2, [x8, #0x3e0]
0x003e8e58  03 10 6e 1e     fmov     d3, #1.00000000
0x003e8e5c  84 e3 01 94     bl       #0x461c6c
0x003e8e60  fd 03 1d aa     mov      x29, x29
0x003e8e64  9a e3 01 94     bl       #0x461ccc
0x003e8e68  f5 03 00 aa     mov      x21, x0
0x003e8e6c  c8 06 00 d0     adrp     x8, #0x4c2000
0x003e8e70  01 c5 43 f9     ldr      x1, [x8, #0x788]
0x003e8e74  e0 03 19 aa     mov      x0, x25
0x003e8e78  e2 03 15 aa     mov      x2, x21
0x003e8e7c  7c e3 01 94     bl       #0x461c6c
0x003e8e80  e0 03 15 aa     mov      x0, x21
0x003e8e84  86 e3 01 94     bl       #0x461c9c
0x003e8e88  c8 06 00 d0     adrp     x8, #0x4c2000
0x003e8e8c  03 c1 43 f9     ldr      x3, [x8, #0x780]
0x003e8e90  a8 06 00 f0     adrp     x8, #0x4bf000
0x003e8e94  01 65 47 f9     ldr      x1, [x8, #0xec8]
0x003e8e98  e0 03 19 aa     mov      x0, x25
0x003e8e9c  a2 83 57 f8     ldur     x2, [x29, #-0x88]
0x003e8ea0  04 00 82 52     mov      w4, #0x1000
0x003e8ea4  72 e3 01 94     bl       #0x461c6c
0x003e8ea8  08 41 65 1e     frintm   d8, d8
0x003e8eac  e0 03 14 aa     mov      x0, x20
0x003e8eb0  e1 03 1b aa     mov      x1, x27
0x003e8eb4  6e e3 01 94     bl       #0x461c6c
0x003e8eb8  00 06 00 b4     cbz      x0, #0x3e8f78
0x003e8ebc  e0 03 14 aa     mov      x0, x20
0x003e8ec0  e1 03 1b aa     mov      x1, x27
0x003e8ec4  6a e3 01 94     bl       #0x461c6c
0x003e8ec8  1f 04 00 f1     cmp      x0, #1
0x003e8ecc  41 0b 00 54     b.ne     #0x3e9034
0x003e8ed0  c8 06 00 d0     adrp     x8, #0x4c2000
0x003e8ed4  15 fd 43 f9     ldr      x21, [x8, #0x7f8]
0x003e8ed8  c2 0b 00 90     adrp     x2, #0x560000
0x003e8edc  42 00 32 91     add      x2, x2, #0xc80
0x003e8ee0  c3 0b 00 90     adrp     x3, #0x560000
0x003e8ee4  63 00 3c 91     add      x3, x3, #0xf00
0x003e8ee8  c4 0b 00 90     adrp     x4, #0x560000
0x003e8eec  84 00 39 91     add      x4, x4, #0xe40
0x003e8ef0  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e8ef4  09 01 67 9e     fmov     d9, x8
0x003e8ef8  0a 10 64 1e     fmov     d10, #8.00000000
0x003e8efc  00 10 64 1e     fmov     d0, #8.00000000
0x003e8f00  01 10 64 1e     fmov     d1, #8.00000000
0x003e8f04  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e8f08  e0 03 17 aa     mov      x0, x23
0x003e8f0c  e1 03 15 aa     mov      x1, x21
0x003e8f10  02 41 60 1e     fmov     d2, d8
0x003e8f14  23 41 60 1e     fmov     d3, d9
0x003e8f18  65 65 84 52     mov      w5, #0x232b
0x003e8f1c  26 00 80 52     mov      w6, #1
0x003e8f20  07 00 80 d2     mov      x7, #0
0x003e8f24  52 e3 01 94     bl       #0x461c6c
0x003e8f28  fd 03 1d aa     mov      x29, x29
0x003e8f2c  68 e3 01 94     bl       #0x461ccc
0x003e8f30  fb 03 00 aa     mov      x27, x0
0x003e8f34  00 29 6a 1e     fadd     d0, d8, d10
0x003e8f38  01 90 65 1e     fmov     d1, #14.00000000
0x003e8f3c  00 28 61 1e     fadd     d0, d0, d1
0x003e8f40  c2 0b 00 90     adrp     x2, #0x560000
0x003e8f44  42 00 36 91     add      x2, x2, #0xd80
0x003e8f48  c3 0b 00 90     adrp     x3, #0x560000
0x003e8f4c  63 00 30 91     add      x3, x3, #0xc00
0x003e8f50  c4 0b 00 b0     adrp     x4, #0x561000
0x003e8f54  84 00 00 91     add      x4, x4, #0
0x003e8f58  01 10 64 1e     fmov     d1, #8.00000000
0x003e8f5c  e0 03 17 aa     mov      x0, x23
0x003e8f60  e1 03 15 aa     mov      x1, x21
0x003e8f64  02 41 60 1e     fmov     d2, d8
0x003e8f68  23 41 60 1e     fmov     d3, d9
0x003e8f6c  85 65 84 52     mov      w5, #0x232c
0x003e8f70  26 00 80 52     mov      w6, #1
0x003e8f74  47 01 00 14     b        #0x3e9490
0x003e8f78  c8 06 00 d0     adrp     x8, #0x4c2000
0x003e8f7c  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e8f80  c2 0b 00 90     adrp     x2, #0x560000
0x003e8f84  42 00 2f 91     add      x2, x2, #0xbc0
0x003e8f88  c3 0b 00 90     adrp     x3, #0x560000
0x003e8f8c  63 00 38 91     add      x3, x3, #0xe00
0x003e8f90  c4 0b 00 90     adrp     x4, #0x560000
0x003e8f94  84 00 31 91     add      x4, x4, #0xc40
0x003e8f98  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e8f9c  09 01 67 9e     fmov     d9, x8
0x003e8fa0  0a 10 64 1e     fmov     d10, #8.00000000
0x003e8fa4  00 10 64 1e     fmov     d0, #8.00000000
0x003e8fa8  01 10 64 1e     fmov     d1, #8.00000000
0x003e8fac  b5 83 57 f8     ldur     x21, [x29, #-0x88]
0x003e8fb0  e0 03 15 aa     mov      x0, x21
0x003e8fb4  e1 03 1c aa     mov      x1, x28
0x003e8fb8  02 41 60 1e     fmov     d2, d8
0x003e8fbc  23 41 60 1e     fmov     d3, d9
0x003e8fc0  05 00 80 d2     mov      x5, #0
0x003e8fc4  26 00 80 52     mov      w6, #1
0x003e8fc8  e7 03 19 aa     mov      x7, x25
0x003e8fcc  28 e3 01 94     bl       #0x461c6c
0x003e8fd0  fd 03 1d aa     mov      x29, x29
0x003e8fd4  3e e3 01 94     bl       #0x461ccc
0x003e8fd8  fb 03 00 aa     mov      x27, x0
0x003e8fdc  00 29 6a 1e     fadd     d0, d8, d10
0x003e8fe0  01 90 65 1e     fmov     d1, #14.00000000
0x003e8fe4  0a 28 61 1e     fadd     d10, d0, d1
0x003e8fe8  a8 06 00 d0     adrp     x8, #0x4be000
0x003e8fec  01 89 41 f9     ldr      x1, [x8, #0x310]
0x003e8ff0  e0 03 18 aa     mov      x0, x24
0x003e8ff4  1e e3 01 94     bl       #0x461c6c
0x003e8ff8  c2 0b 00 90     adrp     x2, #0x560000
0x003e8ffc  42 00 3f 91     add      x2, x2, #0xfc0
0x003e9000  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9004  63 00 27 91     add      x3, x3, #0x9c0
0x003e9008  a4 0b 00 f0     adrp     x4, #0x560000
0x003e900c  84 00 22 91     add      x4, x4, #0x880
0x003e9010  01 10 64 1e     fmov     d1, #8.00000000
0x003e9014  06 00 1a 0a     and      w6, w0, w26
0x003e9018  e0 03 15 aa     mov      x0, x21
0x003e901c  40 41 60 1e     fmov     d0, d10
0x003e9020  02 41 60 1e     fmov     d2, d8
0x003e9024  23 41 60 1e     fmov     d3, d9
0x003e9028  e1 03 1c aa     mov      x1, x28
0x003e902c  25 00 80 52     mov      w5, #1
0x003e9030  18 01 00 14     b        #0x3e9490
0x003e9034  e0 03 14 aa     mov      x0, x20
0x003e9038  e1 03 1b aa     mov      x1, x27
0x003e903c  0c e3 01 94     bl       #0x461c6c
0x003e9040  1f 08 00 f1     cmp      x0, #2
0x003e9044  81 06 00 54     b.ne     #0x3e9114
0x003e9048  a8 06 00 b0     adrp     x8, #0x4be000
0x003e904c  15 89 41 f9     ldr      x21, [x8, #0x310]
0x003e9050  e0 03 18 aa     mov      x0, x24
0x003e9054  e1 03 15 aa     mov      x1, x21
0x003e9058  05 e3 01 94     bl       #0x461c6c
0x003e905c  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e9060  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e9064  a2 0b 00 f0     adrp     x2, #0x560000
0x003e9068  42 00 2c 91     add      x2, x2, #0xb00
0x003e906c  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9070  63 00 24 91     add      x3, x3, #0x900
0x003e9074  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9078  84 00 29 91     add      x4, x4, #0xa40
0x003e907c  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e9080  09 01 67 9e     fmov     d9, x8
0x003e9084  0a 10 64 1e     fmov     d10, #8.00000000
0x003e9088  00 10 64 1e     fmov     d0, #8.00000000
0x003e908c  01 10 64 1e     fmov     d1, #8.00000000
0x003e9090  06 00 1a 0a     and      w6, w0, w26
0x003e9094  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e9098  e0 03 17 aa     mov      x0, x23
0x003e909c  02 41 60 1e     fmov     d2, d8
0x003e90a0  23 41 60 1e     fmov     d3, d9
0x003e90a4  e1 03 1c aa     mov      x1, x28
0x003e90a8  85 02 80 52     mov      w5, #0x14
0x003e90ac  07 00 80 d2     mov      x7, #0
0x003e90b0  ef e2 01 94     bl       #0x461c6c
0x003e90b4  fd 03 1d aa     mov      x29, x29
0x003e90b8  05 e3 01 94     bl       #0x461ccc
0x003e90bc  fb 03 00 aa     mov      x27, x0
0x003e90c0  00 29 6a 1e     fadd     d0, d8, d10
0x003e90c4  01 90 65 1e     fmov     d1, #14.00000000
0x003e90c8  0a 28 61 1e     fadd     d10, d0, d1
0x003e90cc  e0 03 18 aa     mov      x0, x24
0x003e90d0  e1 03 15 aa     mov      x1, x21
0x003e90d4  e6 e2 01 94     bl       #0x461c6c
0x003e90d8  a2 0b 00 f0     adrp     x2, #0x560000
0x003e90dc  42 00 3a 91     add      x2, x2, #0xe80
0x003e90e0  a3 0b 00 f0     adrp     x3, #0x560000
0x003e90e4  63 00 2a 91     add      x3, x3, #0xa80
0x003e90e8  a4 0b 00 f0     adrp     x4, #0x560000
0x003e90ec  84 00 3e 91     add      x4, x4, #0xf80
0x003e90f0  01 10 64 1e     fmov     d1, #8.00000000
0x003e90f4  06 00 1a 0a     and      w6, w0, w26
0x003e90f8  e0 03 17 aa     mov      x0, x23
0x003e90fc  40 41 60 1e     fmov     d0, d10
0x003e9100  02 41 60 1e     fmov     d2, d8
0x003e9104  23 41 60 1e     fmov     d3, d9
0x003e9108  e1 03 1c aa     mov      x1, x28
0x003e910c  45 00 80 52     mov      w5, #2
0x003e9110  e0 00 00 14     b        #0x3e9490
0x003e9114  e0 03 14 aa     mov      x0, x20
0x003e9118  e1 03 1b aa     mov      x1, x27
0x003e911c  d4 e2 01 94     bl       #0x461c6c
0x003e9120  1f 0c 00 f1     cmp      x0, #3
0x003e9124  81 06 00 54     b.ne     #0x3e91f4
0x003e9128  a8 06 00 b0     adrp     x8, #0x4be000
0x003e912c  15 89 41 f9     ldr      x21, [x8, #0x310]
0x003e9130  e0 03 18 aa     mov      x0, x24
0x003e9134  e1 03 15 aa     mov      x1, x21
0x003e9138  cd e2 01 94     bl       #0x461c6c
0x003e913c  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e9140  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e9144  a2 0b 00 f0     adrp     x2, #0x560000
0x003e9148  42 00 28 91     add      x2, x2, #0xa00
0x003e914c  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9150  63 00 2d 91     add      x3, x3, #0xb40
0x003e9154  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9158  84 00 25 91     add      x4, x4, #0x940
0x003e915c  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e9160  09 01 67 9e     fmov     d9, x8
0x003e9164  0a 10 64 1e     fmov     d10, #8.00000000
0x003e9168  00 10 64 1e     fmov     d0, #8.00000000
0x003e916c  01 10 64 1e     fmov     d1, #8.00000000
0x003e9170  06 00 1a 0a     and      w6, w0, w26
0x003e9174  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e9178  e0 03 17 aa     mov      x0, x23
0x003e917c  02 41 60 1e     fmov     d2, d8
0x003e9180  23 41 60 1e     fmov     d3, d9
0x003e9184  e1 03 1c aa     mov      x1, x28
0x003e9188  45 01 80 52     mov      w5, #0xa
0x003e918c  07 00 80 d2     mov      x7, #0
0x003e9190  b7 e2 01 94     bl       #0x461c6c
0x003e9194  fd 03 1d aa     mov      x29, x29
0x003e9198  cd e2 01 94     bl       #0x461ccc
0x003e919c  fb 03 00 aa     mov      x27, x0
0x003e91a0  00 29 6a 1e     fadd     d0, d8, d10
0x003e91a4  01 90 65 1e     fmov     d1, #14.00000000
0x003e91a8  0a 28 61 1e     fadd     d10, d0, d1
0x003e91ac  e0 03 18 aa     mov      x0, x24
0x003e91b0  e1 03 15 aa     mov      x1, x21
0x003e91b4  ae e2 01 94     bl       #0x461c6c
0x003e91b8  a2 0b 00 f0     adrp     x2, #0x560000
0x003e91bc  42 00 20 91     add      x2, x2, #0x800
0x003e91c0  a3 0b 00 f0     adrp     x3, #0x560000
0x003e91c4  63 00 23 91     add      x3, x3, #0x8c0
0x003e91c8  a4 0b 00 f0     adrp     x4, #0x560000
0x003e91cc  84 00 3b 91     add      x4, x4, #0xec0
0x003e91d0  01 10 64 1e     fmov     d1, #8.00000000
0x003e91d4  06 00 1a 0a     and      w6, w0, w26
0x003e91d8  e0 03 17 aa     mov      x0, x23
0x003e91dc  40 41 60 1e     fmov     d0, d10
0x003e91e0  02 41 60 1e     fmov     d2, d8
0x003e91e4  23 41 60 1e     fmov     d3, d9
0x003e91e8  e1 03 1c aa     mov      x1, x28
0x003e91ec  05 01 80 52     mov      w5, #8
0x003e91f0  a8 00 00 14     b        #0x3e9490
0x003e91f4  e0 03 14 aa     mov      x0, x20
0x003e91f8  e1 03 1b aa     mov      x1, x27
0x003e91fc  9c e2 01 94     bl       #0x461c6c
0x003e9200  1f 10 00 f1     cmp      x0, #4
0x003e9204  81 06 00 54     b.ne     #0x3e92d4
0x003e9208  a8 06 00 b0     adrp     x8, #0x4be000
0x003e920c  15 89 41 f9     ldr      x21, [x8, #0x310]
0x003e9210  e0 03 18 aa     mov      x0, x24
0x003e9214  e1 03 15 aa     mov      x1, x21
0x003e9218  95 e2 01 94     bl       #0x461c6c
0x003e921c  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e9220  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e9224  a2 0b 00 f0     adrp     x2, #0x560000
0x003e9228  42 00 1f 91     add      x2, x2, #0x7c0
0x003e922c  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9230  63 00 13 91     add      x3, x3, #0x4c0
0x003e9234  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9238  84 00 1d 91     add      x4, x4, #0x740
0x003e923c  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e9240  09 01 67 9e     fmov     d9, x8
0x003e9244  0a 10 64 1e     fmov     d10, #8.00000000
0x003e9248  00 10 64 1e     fmov     d0, #8.00000000
0x003e924c  01 10 64 1e     fmov     d1, #8.00000000
0x003e9250  06 00 1a 0a     and      w6, w0, w26
0x003e9254  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e9258  e0 03 17 aa     mov      x0, x23
0x003e925c  02 41 60 1e     fmov     d2, d8
0x003e9260  23 41 60 1e     fmov     d3, d9
0x003e9264  e1 03 1c aa     mov      x1, x28
0x003e9268  25 01 80 52     mov      w5, #9
0x003e926c  07 00 80 d2     mov      x7, #0
0x003e9270  7f e2 01 94     bl       #0x461c6c
0x003e9274  fd 03 1d aa     mov      x29, x29
0x003e9278  95 e2 01 94     bl       #0x461ccc
0x003e927c  fb 03 00 aa     mov      x27, x0
0x003e9280  00 29 6a 1e     fadd     d0, d8, d10
0x003e9284  01 90 65 1e     fmov     d1, #14.00000000
0x003e9288  0a 28 61 1e     fadd     d10, d0, d1
0x003e928c  e0 03 18 aa     mov      x0, x24
0x003e9290  e1 03 15 aa     mov      x1, x21
0x003e9294  76 e2 01 94     bl       #0x461c6c
0x003e9298  a2 0b 00 f0     adrp     x2, #0x560000
0x003e929c  42 00 1c 91     add      x2, x2, #0x700
0x003e92a0  a3 0b 00 f0     adrp     x3, #0x560000
0x003e92a4  63 00 1b 91     add      x3, x3, #0x6c0
0x003e92a8  a4 0b 00 f0     adrp     x4, #0x560000
0x003e92ac  84 00 1a 91     add      x4, x4, #0x680
0x003e92b0  01 10 64 1e     fmov     d1, #8.00000000
0x003e92b4  06 00 1a 0a     and      w6, w0, w26
0x003e92b8  e0 03 17 aa     mov      x0, x23
0x003e92bc  40 41 60 1e     fmov     d0, d10
0x003e92c0  02 41 60 1e     fmov     d2, d8
0x003e92c4  23 41 60 1e     fmov     d3, d9
0x003e92c8  e1 03 1c aa     mov      x1, x28
0x003e92cc  a5 02 80 52     mov      w5, #0x15
0x003e92d0  70 00 00 14     b        #0x3e9490
0x003e92d4  e0 03 14 aa     mov      x0, x20
0x003e92d8  e1 03 1b aa     mov      x1, x27
0x003e92dc  64 e2 01 94     bl       #0x461c6c
0x003e92e0  1f 14 00 f1     cmp      x0, #5
0x003e92e4  81 06 00 54     b.ne     #0x3e93b4
0x003e92e8  a8 06 00 b0     adrp     x8, #0x4be000
0x003e92ec  15 89 41 f9     ldr      x21, [x8, #0x310]
0x003e92f0  e0 03 18 aa     mov      x0, x24
0x003e92f4  e1 03 15 aa     mov      x1, x21
0x003e92f8  5d e2 01 94     bl       #0x461c6c
0x003e92fc  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e9300  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e9304  a2 0b 00 f0     adrp     x2, #0x560000
0x003e9308  42 00 35 91     add      x2, x2, #0xd40
0x003e930c  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9310  63 00 33 91     add      x3, x3, #0xcc0
0x003e9314  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9318  84 00 34 91     add      x4, x4, #0xd00
0x003e931c  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e9320  09 01 67 9e     fmov     d9, x8
0x003e9324  0a 10 64 1e     fmov     d10, #8.00000000
0x003e9328  00 10 64 1e     fmov     d0, #8.00000000
0x003e932c  01 10 64 1e     fmov     d1, #8.00000000
0x003e9330  06 00 1a 0a     and      w6, w0, w26
0x003e9334  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e9338  e0 03 17 aa     mov      x0, x23
0x003e933c  02 41 60 1e     fmov     d2, d8
0x003e9340  23 41 60 1e     fmov     d3, d9
0x003e9344  e1 03 1c aa     mov      x1, x28
0x003e9348  85 01 80 52     mov      w5, #0xc
0x003e934c  07 00 80 d2     mov      x7, #0
0x003e9350  47 e2 01 94     bl       #0x461c6c
0x003e9354  fd 03 1d aa     mov      x29, x29
0x003e9358  5d e2 01 94     bl       #0x461ccc
0x003e935c  fb 03 00 aa     mov      x27, x0
0x003e9360  00 29 6a 1e     fadd     d0, d8, d10
0x003e9364  01 90 65 1e     fmov     d1, #14.00000000
0x003e9368  0a 28 61 1e     fadd     d10, d0, d1
0x003e936c  e0 03 18 aa     mov      x0, x24
0x003e9370  e1 03 15 aa     mov      x1, x21
0x003e9374  3e e2 01 94     bl       #0x461c6c
0x003e9378  a2 0b 00 f0     adrp     x2, #0x560000
0x003e937c  42 00 21 91     add      x2, x2, #0x840
0x003e9380  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9384  63 00 3d 91     add      x3, x3, #0xf40
0x003e9388  a4 0b 00 f0     adrp     x4, #0x560000
0x003e938c  84 00 19 91     add      x4, x4, #0x640
0x003e9390  01 10 64 1e     fmov     d1, #8.00000000
0x003e9394  06 00 1a 0a     and      w6, w0, w26
0x003e9398  e0 03 17 aa     mov      x0, x23
0x003e939c  40 41 60 1e     fmov     d0, d10
0x003e93a0  02 41 60 1e     fmov     d2, d8
0x003e93a4  23 41 60 1e     fmov     d3, d9
0x003e93a8  e1 03 1c aa     mov      x1, x28
0x003e93ac  85 00 80 52     mov      w5, #4
0x003e93b0  38 00 00 14     b        #0x3e9490
0x003e93b4  e0 03 14 aa     mov      x0, x20
0x003e93b8  e1 03 1b aa     mov      x1, x27
0x003e93bc  2c e2 01 94     bl       #0x461c6c
0x003e93c0  1f 18 00 f1     cmp      x0, #6
0x003e93c4  c1 0d 00 54     b.ne     #0x3e957c
0x003e93c8  a8 06 00 b0     adrp     x8, #0x4be000
0x003e93cc  15 89 41 f9     ldr      x21, [x8, #0x310]
0x003e93d0  e0 03 18 aa     mov      x0, x24
0x003e93d4  e1 03 15 aa     mov      x1, x21
0x003e93d8  25 e2 01 94     bl       #0x461c6c
0x003e93dc  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e93e0  1c fd 43 f9     ldr      x28, [x8, #0x7f8]
0x003e93e4  a2 0b 00 f0     adrp     x2, #0x560000
0x003e93e8  42 00 18 91     add      x2, x2, #0x600
0x003e93ec  a3 0b 00 f0     adrp     x3, #0x560000
0x003e93f0  63 00 17 91     add      x3, x3, #0x5c0
0x003e93f4  a4 0b 00 f0     adrp     x4, #0x560000
0x003e93f8  84 00 15 91     add      x4, x4, #0x540
0x003e93fc  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e9400  09 01 67 9e     fmov     d9, x8
0x003e9404  0a 10 64 1e     fmov     d10, #8.00000000
0x003e9408  00 10 64 1e     fmov     d0, #8.00000000
0x003e940c  01 10 64 1e     fmov     d1, #8.00000000
0x003e9410  06 00 1a 0a     and      w6, w0, w26
0x003e9414  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e9418  e0 03 17 aa     mov      x0, x23
0x003e941c  02 41 60 1e     fmov     d2, d8
0x003e9420  23 41 60 1e     fmov     d3, d9
0x003e9424  e1 03 1c aa     mov      x1, x28
0x003e9428  65 02 80 52     mov      w5, #0x13
0x003e942c  07 00 80 d2     mov      x7, #0
0x003e9430  0f e2 01 94     bl       #0x461c6c
0x003e9434  fd 03 1d aa     mov      x29, x29
0x003e9438  25 e2 01 94     bl       #0x461ccc
0x003e943c  fb 03 00 aa     mov      x27, x0
0x003e9440  00 29 6a 1e     fadd     d0, d8, d10
0x003e9444  01 90 65 1e     fmov     d1, #14.00000000
0x003e9448  0a 28 61 1e     fadd     d10, d0, d1
0x003e944c  e0 03 18 aa     mov      x0, x24
0x003e9450  e1 03 15 aa     mov      x1, x21
0x003e9454  06 e2 01 94     bl       #0x461c6c
0x003e9458  a2 0b 00 f0     adrp     x2, #0x560000
0x003e945c  42 00 37 91     add      x2, x2, #0xdc0
0x003e9460  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9464  63 00 1e 91     add      x3, x3, #0x780
0x003e9468  a4 0b 00 f0     adrp     x4, #0x560000
0x003e946c  84 00 12 91     add      x4, x4, #0x480
0x003e9470  01 10 64 1e     fmov     d1, #8.00000000
0x003e9474  06 00 1a 0a     and      w6, w0, w26
0x003e9478  e0 03 17 aa     mov      x0, x23
0x003e947c  40 41 60 1e     fmov     d0, d10
0x003e9480  02 41 60 1e     fmov     d2, d8
0x003e9484  23 41 60 1e     fmov     d3, d9
0x003e9488  e1 03 1c aa     mov      x1, x28
0x003e948c  65 01 80 52     mov      w5, #0xb
0x003e9490  07 00 80 d2     mov      x7, #0
0x003e9494  f6 e1 01 94     bl       #0x461c6c
0x003e9498  fd 03 1d aa     mov      x29, x29
0x003e949c  0c e2 01 94     bl       #0x461ccc
0x003e94a0  f5 03 00 aa     mov      x21, x0
0x003e94a4  e0 03 16 aa     mov      x0, x22
0x003e94a8  b7 03 58 f8     ldur     x23, [x29, #-0x80]
0x003e94ac  e1 03 17 aa     mov      x1, x23
0x003e94b0  ef e1 01 94     bl       #0x461c6c
0x003e94b4  fd 03 1d aa     mov      x29, x29
0x003e94b8  05 e2 01 94     bl       #0x461ccc
0x003e94bc  fa 03 00 aa     mov      x26, x0
0x003e94c0  a8 06 00 b0     adrp     x8, #0x4be000
0x003e94c4  1c a1 45 f9     ldr      x28, [x8, #0xb40]
0x003e94c8  e1 03 1c aa     mov      x1, x28
0x003e94cc  e2 03 1b aa     mov      x2, x27
0x003e94d0  e7 e1 01 94     bl       #0x461c6c
0x003e94d4  e0 03 1a aa     mov      x0, x26
0x003e94d8  f1 e1 01 94     bl       #0x461c9c
0x003e94dc  e0 03 16 aa     mov      x0, x22
0x003e94e0  e1 03 17 aa     mov      x1, x23
0x003e94e4  e2 e1 01 94     bl       #0x461c6c
0x003e94e8  fd 03 1d aa     mov      x29, x29
0x003e94ec  f8 e1 01 94     bl       #0x461ccc
0x003e94f0  f7 03 00 aa     mov      x23, x0
0x003e94f4  e1 03 1c aa     mov      x1, x28
0x003e94f8  e2 03 15 aa     mov      x2, x21
0x003e94fc  dc e1 01 94     bl       #0x461c6c
0x003e9500  e0 03 17 aa     mov      x0, x23
0x003e9504  e6 e1 01 94     bl       #0x461c9c
0x003e9508  e0 03 15 aa     mov      x0, x21
0x003e950c  e4 e1 01 94     bl       #0x461c9c
0x003e9510  e0 03 1b aa     mov      x0, x27
0x003e9514  e2 e1 01 94     bl       #0x461c9c
0x003e9518  e0 03 19 aa     mov      x0, x25
0x003e951c  e0 e1 01 94     bl       #0x461c9c
0x003e9520  e0 03 18 aa     mov      x0, x24
0x003e9524  de e1 01 94     bl       #0x461c9c
0x003e9528  e0 03 14 aa     mov      x0, x20
0x003e952c  dc e1 01 94     bl       #0x461c9c
0x003e9530  e0 03 13 aa     mov      x0, x19
0x003e9534  da e1 01 94     bl       #0x461c9c
0x003e9538  a8 83 58 f8     ldur     x8, [x29, #-0x78]
0x003e953c  a9 05 00 f0     adrp     x9, #0x4a0000
0x003e9540  29 b1 43 f9     ldr      x9, [x9, #0x760]
0x003e9544  29 01 40 f9     ldr      x9, [x9]
0x003e9548  3f 01 08 eb     cmp      x9, x8
0x003e954c  c1 06 00 54     b.ne     #0x3e9624
0x003e9550  e0 03 16 aa     mov      x0, x22
0x003e9554  bf c3 01 d1     sub      sp, x29, #0x70
0x003e9558  fd 7b 47 a9     ldp      x29, x30, [sp, #0x70]
0x003e955c  f4 4f 46 a9     ldp      x20, x19, [sp, #0x60]
0x003e9560  f6 57 45 a9     ldp      x22, x21, [sp, #0x50]
0x003e9564  f8 5f 44 a9     ldp      x24, x23, [sp, #0x40]
0x003e9568  fa 67 43 a9     ldp      x26, x25, [sp, #0x30]
0x003e956c  fc 6f 42 a9     ldp      x28, x27, [sp, #0x20]
0x003e9570  e9 23 41 6d     ldp      d9, d8, [sp, #0x10]
0x003e9574  eb 2b c8 6c     ldp      d11, d10, [sp], #0x80
0x003e9578  9c e1 01 14     b        #0x461be8
0x003e957c  c8 06 00 b0     adrp     x8, #0x4c2000
0x003e9580  15 fd 43 f9     ldr      x21, [x8, #0x7f8]
0x003e9584  a2 0b 00 f0     adrp     x2, #0x560000
0x003e9588  42 00 11 91     add      x2, x2, #0x440
0x003e958c  a3 0b 00 f0     adrp     x3, #0x560000
0x003e9590  63 00 26 91     add      x3, x3, #0x980
0x003e9594  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9598  84 00 16 91     add      x4, x4, #0x580
0x003e959c  a8 0a e8 d2     mov      x8, #0x4055000000000000
0x003e95a0  09 01 67 9e     fmov     d9, x8
0x003e95a4  0a 10 64 1e     fmov     d10, #8.00000000
0x003e95a8  00 10 64 1e     fmov     d0, #8.00000000
0x003e95ac  01 10 64 1e     fmov     d1, #8.00000000
0x003e95b0  b7 83 57 f8     ldur     x23, [x29, #-0x88]
0x003e95b4  e0 03 17 aa     mov      x0, x23
0x003e95b8  e1 03 15 aa     mov      x1, x21
0x003e95bc  02 41 60 1e     fmov     d2, d8
0x003e95c0  23 41 60 1e     fmov     d3, d9
0x003e95c4  45 65 84 52     mov      w5, #0x232a
0x003e95c8  26 00 80 52     mov      w6, #1
0x003e95cc  07 00 80 d2     mov      x7, #0
0x003e95d0  a7 e1 01 94     bl       #0x461c6c
0x003e95d4  fd 03 1d aa     mov      x29, x29
0x003e95d8  bd e1 01 94     bl       #0x461ccc
0x003e95dc  fb 03 00 aa     mov      x27, x0
0x003e95e0  00 29 6a 1e     fadd     d0, d8, d10
0x003e95e4  01 90 65 1e     fmov     d1, #14.00000000
0x003e95e8  00 28 61 1e     fadd     d0, d0, d1
0x003e95ec  c8 05 00 b0     adrp     x8, #0x4a2000
0x003e95f0  08 81 39 91     add      x8, x8, #0xe60
0x003e95f4  02 01 40 f9     ldr      x2, [x8]
0x003e95f8  a3 0b 00 f0     adrp     x3, #0x560000
0x003e95fc  63 00 14 91     add      x3, x3, #0x500
0x003e9600  a4 0b 00 f0     adrp     x4, #0x560000
0x003e9604  84 00 2b 91     add      x4, x4, #0xac0
0x003e9608  01 10 64 1e     fmov     d1, #8.00000000
0x003e960c  e0 03 17 aa     mov      x0, x23
0x003e9610  e1 03 15 aa     mov      x1, x21
0x003e9614  02 41 60 1e     fmov     d2, d8
0x003e9618  23 41 60 1e     fmov     d3, d9
0x003e961c  25 65 84 52     mov      w5, #0x2329
0x003e9620  54 fe ff 17     b        #0x3e8f70
0x003e9624  a5 e0 01 94     bl       #0x4618b8
