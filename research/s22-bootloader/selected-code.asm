080001cc: 0948       ldr       r0, [pc, #0x24] ; literal 0x800179d
080001ce: 8047       blx       r0
080001d0: 0948       ldr       r0, [pc, #0x24] ; literal 0x8000131
080001d2: 0047       bx        r0
080008ac: 1548       ldr       r0, [pc, #0x54] ; literal 0x1ffff7e0
080008ae: 0088       ldrh      r0, [r0]
080008b0: 4ff00061   mov.w     r1, #0x8000000
080008b4: 01ebc020   add.w     r0, r1, r0, lsl #11
080008b8: 1349       ldr       r1, [pc, #0x4c] ; literal 0x8008000
080008ba: 471a       subs      r7, r0, r1
080008bc: 781e       subs      r0, r7, #1
080008be: 0099       ldr       r1, [sp]
080008c0: 8842       cmp       r0, r1
080008c2: 0cd2       bhs       #0x80008de
080008c4: 0620       movs      r0, #6
080008c6: 1149       ldr       r1, [pc, #0x44] ; literal 0x20000078
080008c8: 0870       strb      r0, [r1]
080008ca: 1820       movs      r0, #0x18
080008cc: 4870       strb      r0, [r1, #1]
080008ce: 8870       strb      r0, [r1, #2]
080008d0: 0020       movs      r0, #0
080008d2: c870       strb      r0, [r1, #3]
080008d4: 0846       mov       r0, r1
080008d6: 00f049fe   bl        #0x800156c
080008da: 05b0       add       sp, #0x14
080008dc: f0bd       pop       {r4, r5, r6, r7, pc}
080008de: 0c49       ldr       r1, [pc, #0x30] ; literal 0x2000006c
080008e0: 0098       ldr       r0, [sp]
080008e2: 0860       str       r0, [r1]
080008e4: 0020       movs      r0, #0
080008e6: 0b49       ldr       r1, [pc, #0x2c] ; literal 0x20000070
080008e8: 0860       str       r0, [r1]
080008ea: 0748       ldr       r0, [pc, #0x1c] ; literal 0x8008000
080008ec: 0099       ldr       r1, [sp]
080008ee: 01f0bbff   bl        #0x8002868
080008f2: 0548       ldr       r0, [pc, #0x14] ; literal 0x8008000
080008f4: 0849       ldr       r1, [pc, #0x20] ; literal 0x20000074
080008f6: 0860       str       r0, [r1]
080008f8: 00bf       nop       
0800278c: 2de9f84f   push.w    {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}
08002790: 2c4c       ldr       r4, [pc, #0xb0] ; literal 0x8008310
08002792: 211d       adds      r1, r4, #4
08002794: 0a1d       adds      r2, r1, #4
08002796: 131d       adds      r3, r2, #4
08002798: 0e68       ldr       r6, [r1]
0800279a: 0025       movs      r5, #0
0800279c: 0020       movs      r0, #0
0800279e: 0090       str       r0, [sp]
080027a0: 0027       movs      r7, #0
080027a2: d4f80090   ldr.w     sb, [r4]
080027a6: d1f800a0   ldr.w     sl, [r1]
080027aa: d2f800b0   ldr.w     fp, [r2]
080027ae: d3f800e0   ldr.w     lr, [r3]
080027b2: 0e68       ldr       r6, [r1]
080027b4: 0868       ldr       r0, [r1]
080027b6: d2f800c0   ldr.w     ip, [r2]
080027ba: 6044       add       r0, ip
080027bc: dff888c0   ldr.w     ip, [pc, #0x88] ; literal 0x14502367
080027c0: 6044       add       r0, ip
080027c2: 0090       str       r0, [sp]
080027c4: dff87c80   ldr.w     r8, [pc, #0x7c] ; literal 0x8008310
080027c8: a8f10808   sub.w     r8, r8, #8
080027cc: d8f800c0   ldr.w     ip, [r8]
080027d0: 0cf10100   add.w     r0, ip, #1
080027d4: 10b1       cbz       r0, #0x80027dc
080027d6: 1d48       ldr       r0, [pc, #0x74] ; literal 0x20211027
080027d8: 8445       cmp       ip, r0
080027da: 02d2       bhs       #0x80027e2
080027dc: 0020       movs      r0, #0
080027de: bde8f88f   pop.w     {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
080027e2: 0868       ldr       r0, [r1]
080027e4: d2f800c0   ldr.w     ip, [r2]
080027e8: 6044       add       r0, ip
080027ea: dff85cc0   ldr.w     ip, [pc, #0x5c] ; literal 0x14502367
080027ee: 6044       add       r0, ip
080027f0: d3f800c0   ldr.w     ip, [r3]
080027f4: 6045       cmp       r0, ip
080027f6: 01d0       beq       #0x80027fc
080027f8: 0120       movs      r0, #1
080027fa: f0e7       b         #0x80027de
080027fc: 2068       ldr       r0, [r4]
080027fe: d3f800c0   ldr.w     ip, [r3]
08002802: 6045       cmp       r0, ip
08002804: 01d1       bne       #0x800280a
08002806: 0120       movs      r0, #1
08002808: e9e7       b         #0x80027de
0800280a: 2068       ldr       r0, [r4]
0800280c: 401c       adds      r0, r0, #1
0800280e: 08b1       cbz       r0, #0x8002814
08002810: 0020       movs      r0, #0
08002812: e4e7       b         #0x80027de
08002814: b6f54a3f   cmp.w     r6, #0x32800
08002818: 01d9       bls       #0x800281e
0800281a: 0020       movs      r0, #0
0800281c: dfe7       b         #0x80027de
0800281e: 0125       movs      r5, #1
08002820: 03e0       b         #0x800282a
08002822: 53f82500   ldr.w     r0, [r3, r5, lsl #2]
08002826: 0744       add       r7, r0
08002828: 6d1c       adds      r5, r5, #1
0800282a: 0120       movs      r0, #1
0800282c: 00eb9600   add.w     r0, r0, r6, lsr #2
08002830: a842       cmp       r0, r5
08002832: f6d8       bhi       #0x8002822
08002834: 1068       ldr       r0, [r2]
08002836: b842       cmp       r0, r7
08002838: 01d0       beq       #0x800283e
0800283a: 0020       movs      r0, #0
0800283c: cfe7       b         #0x80027de
0800283e: 0120       movs      r0, #1
08002840: cde7       b         #0x80027de
08002ca4: 2948       ldr       r0, [pc, #0xa4] ; literal 0x803d800
08002ca6: 0068       ldr       r0, [r0]
08002ca8: 2949       ldr       r1, [pc, #0xa4] ; literal 0x28635690
08002caa: 8842       cmp       r0, r1
08002cac: 17d1       bne       #0x8002cde
08002cae: 2948       ldr       r0, [pc, #0xa4] ; literal 0x8004000
08002cb0: 0068       ldr       r0, [r0]
08002cb2: 2949       ldr       r1, [pc, #0xa4] ; literal 0x2ffe0000
08002cb4: 0840       ands      r0, r1
08002cb6: b0f1005f   cmp.w     r0, #0x20000000
08002cba: 10d1       bne       #0x8002cde
08002cbc: fff7cefa   bl        #0x800225c
08002cc0: fff764f8   bl        #0x8001d8c
08002cc4: 00f074f8   bl        #0x8002db0
08002cc8: 2248       ldr       r0, [pc, #0x88] ; literal 0x8004000
08002cca: 4068       ldr       r0, [r0, #4]
08002ccc: 0446       mov       r4, r0
08002cce: 2546       mov       r5, r4
08002cd0: 2049       ldr       r1, [pc, #0x80] ; literal 0x8004000
08002cd2: 0868       ldr       r0, [r1]
08002cd4: 80f30888   msr       msp, r0
08002cd8: 00bf       nop       
08002cda: a847       blx       r5
08002cdc: 27e0       b         #0x8002d2e
08002cde: 1f48       ldr       r0, [pc, #0x7c] ; literal 0x8008000
08002ce0: 0068       ldr       r0, [r0]
08002ce2: 1d49       ldr       r1, [pc, #0x74] ; literal 0x2ffe0000
08002ce4: 0840       ands      r0, r1
08002ce6: b0f1005f   cmp.w     r0, #0x20000000
08002cea: 10d1       bne       #0x8002d0e
08002cec: fff7b6fa   bl        #0x800225c
08002cf0: fff74cf8   bl        #0x8001d8c
08002cf4: 00f05cf8   bl        #0x8002db0
08002cf8: 1848       ldr       r0, [pc, #0x60] ; literal 0x8008000
08002cfa: 4068       ldr       r0, [r0, #4]
08002cfc: 0446       mov       r4, r0
08002cfe: 2546       mov       r5, r4
08002d00: 1649       ldr       r1, [pc, #0x58] ; literal 0x8008000
08002d02: 0868       ldr       r0, [r1]
08002d04: 80f30888   msr       msp, r0
08002d08: 00bf       nop       
08002d0a: a847       blx       r5
08002d0c: 0fe0       b         #0x8002d2e
08002d0e: 0a48       ldr       r0, [pc, #0x28] ; literal 0x20000044
08002d10: 0068       ldr       r0, [r0]
08002d12: 60b9       cbnz      r0, #0x8002d2e
08002d14: 00f0d0f8   bl        #0x8002eb8
08002d18: fef73ef9   bl        #0x8000f98
08002d1c: 00f030f9   bl        #0x8002f80
08002d20: fff744f8   bl        #0x8001dac
08002d24: 00f062f8   bl        #0x8002dec
08002d28: 0120       movs      r0, #1
08002d2a: 0349       ldr       r1, [pc, #0xc] ; literal 0x20000044
