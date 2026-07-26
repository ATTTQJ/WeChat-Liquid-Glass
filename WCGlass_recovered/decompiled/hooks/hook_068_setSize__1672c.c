/* Hook replacement 68/418
 * Selectors: SEL_setSize_
 * Address: 0x1672c; original size: 184 bytes
 * Status: fallback; elapsed: 0.548s
 */

/* Capstone ARM64 fallback */
0x0001672c  e9 23 bd 6d     stp      d9, d8, [sp, #-0x30]!
0x00016730  f4 4f 01 a9     stp      x20, x19, [sp, #0x10]
0x00016734  fd 7b 02 a9     stp      x29, x30, [sp, #0x20]
0x00016738  fd 83 00 91     add      x29, sp, #0x20
0x0001673c  28 40 60 1e     fmov     d8, d1
0x00016740  09 40 60 1e     fmov     d9, d0
0x00016744  f3 03 01 aa     mov      x19, x1
0x00016748  f4 03 00 aa     mov      x20, x0
0x0001674c  68 2b 00 90     adrp     x8, #0x582000
0x00016750  08 21 3e 91     add      x8, x8, #0xf88
0x00016754  08 01 40 39     ldrb     w8, [x8]
0x00016758  28 03 00 36     tbz      w8, #0, #0x167bc
0x0001675c  68 2b 00 90     adrp     x8, #0x582000
0x00016760  08 2d 3e 91     add      x8, x8, #0xf8b
0x00016764  08 01 40 39     ldrb     w8, [x8]
0x00016768  a8 02 00 36     tbz      w8, #0, #0x167bc
0x0001676c  35 42 04 94     bl       #0x127040
0x00016770  08 08 00 d1     sub      x8, x0, #2
0x00016774  1f 09 00 f1     cmp      x8, #2
0x00016778  28 02 00 54     b.hi     #0x167bc
0x0001677c  e0 03 14 aa     mov      x0, x20
0x00016780  0c 4a 04 94     bl       #0x128fb0
0x00016784  88 08 e8 d2     mov      x8, #0x4044000000000000
0x00016788  01 01 67 9e     fmov     d1, x8
0x0001678c  00 20 61 1e     fcmp     d0, d1
0x00016790  6b 01 00 54     b.lt     #0x167bc
0x00016794  28 01 66 9e     fmov     x8, d9
0x00016798  08 f9 40 92     and      x8, x8, #0x7fffffffffffffff
0x0001679c  09 02 f0 92     mov      x9, #0x7fefffffffffffff
0x000167a0  1f 01 09 eb     cmp      x8, x9
0x000167a4  ac 00 00 54     b.gt     #0x167b8
0x000167a8  21 d5 e0 7e     fabd     d1, d9, d0
0x000167ac  02 10 6c 1e     fmov     d2, #0.50000000
0x000167b0  20 20 62 1e     fcmp     d1, d2
0x000167b4  4d 00 00 54     b.le     #0x167bc
0x000167b8  09 40 60 1e     fmov     d9, d0
0x000167bc  28 2b 00 b0     adrp     x8, #0x57b000
0x000167c0  02 49 43 f9     ldr      x2, [x8, #0x690]
0x000167c4  e0 03 14 aa     mov      x0, x20
0x000167c8  e1 03 13 aa     mov      x1, x19
0x000167cc  20 41 60 1e     fmov     d0, d9
0x000167d0  01 41 60 1e     fmov     d1, d8
0x000167d4  fd 7b 42 a9     ldp      x29, x30, [sp, #0x20]
0x000167d8  f4 4f 41 a9     ldp      x20, x19, [sp, #0x10]
0x000167dc  e9 23 c3 6c     ldp      d9, d8, [sp], #0x30
0x000167e0  40 00 1f d6     br       x2
