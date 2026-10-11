# Pinned original bytes; Thumb disassembly, interspersed pools may decode as instructions.
# Do not infer reachability from a linear listing. Automatic C + bounded execution accompany it.

# range 0x8000844 .. 0x800091c
08000844: f0b5       push      {r4, r5, r6, r7, lr}
08000846: 85b0       sub       sp, #0x14
08000848: 0646       mov       r6, r0
0800084a: 0020       movs      r0, #0
0800084c: 0090       str       r0, [sp]
0800084e: 0025       movs      r5, #0
08000850: 3446       mov       r4, r6
08000852: 05e0       b         #0x8000860
08000854: 14f8012b   ldrb      r2, [r4], #1
08000858: 2846       mov       r0, r5
0800085a: 6d1c       adds      r5, r5, #1
0800085c: 2749       ldr       r1, [pc, #0x9c] ; literal 0x200006fc
0800085e: 0a54       strb      r2, [r1, r0]
08000860: 2078       ldrb      r0, [r4]
08000862: 08b1       cbz       r0, #0x8000868
08000864: ff2d       cmp       r5, #0xff
08000866: f5d9       bls       #0x8000854
08000868: 0022       movs      r2, #0
0800086a: 2846       mov       r0, r5
0800086c: 6d1c       adds      r5, r5, #1
0800086e: 2349       ldr       r1, [pc, #0x8c] ; literal 0x200006fc
08000870: 0a54       strb      r2, [r1, r0]
08000872: 0025       movs      r5, #0
08000874: 641c       adds      r4, r4, #1
08000876: 05e0       b         #0x8000884
08000878: 14f8012b   ldrb      r2, [r4], #1
0800087c: 2846       mov       r0, r5
0800087e: 6d1c       adds      r5, r5, #1
08000880: 01a9       add       r1, sp, #4
08000882: 0a54       strb      r2, [r1, r0]
08000884: 2078       ldrb      r0, [r4]
08000886: 2028       cmp       r0, #0x20
08000888: 01d0       beq       #0x800088e
0800088a: 102d       cmp       r5, #0x10
0800088c: f4d3       blo       #0x8000878
0800088e: 0022       movs      r2, #0
08000890: 2846       mov       r0, r5
08000892: 6d1c       adds      r5, r5, #1
08000894: 01a9       add       r1, sp, #4
08000896: 0a54       strb      r2, [r1, r0]
08000898: 6946       mov       r1, sp
0800089a: 01a8       add       r0, sp, #4
0800089c: 00f0eefe   bl        #0x800167c
080008a0: 1021       movs      r1, #0x10
080008a2: 1748       ldr       r0, [pc, #0x5c] ; literal 0x200007fc
080008a4: fff748fd   bl        #0x8000338
080008a8: 01f020ff   bl        #0x80026ec
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
080008fa: eee7       b         #0x80008da
080008fc: fc06       lsls      r4, r7, #0x1b
080008fe: 0020       movs      r0, #0
08000900: fc07       lsls      r4, r7, #0x1f
08000902: 0020       movs      r0, #0

# range 0x8000b6c .. 0x8000be4
08000b6c: 0246       mov       r2, r0
08000b6e: 0020       movs      r0, #0
08000b70: 9368       ldr       r3, [r2, #8]
08000b72: 0b40       ands      r3, r1
08000b74: 0bb1       cbz       r3, #0x8000b7a
08000b76: 0120       movs      r0, #1
08000b78: 00e0       b         #0x8000b7c
08000b7a: 0020       movs      r0, #0
08000b7c: 7047       bx        lr
08000b7e: 4161       str       r1, [r0, #0x14]
08000b80: 7047       bx        lr
08000b82: 0161       str       r1, [r0, #0x10]
08000b84: 7047       bx        lr
08000b86: 0000       movs      r0, r0
08000b88: 10b5       push      {r4, lr}
08000b8a: 02f0f3f8   bl        #0x8002d74
08000b8e: 1149       ldr       r1, [pc, #0x44] ; literal 0x200000a2
08000b90: 0880       strh      r0, [r1]
08000b92: 4021       movs      r1, #0x40
08000b94: 1048       ldr       r0, [pc, #0x40] ; literal 0x40011000
08000b96: fff7e9ff   bl        #0x8000b6c
08000b9a: 0446       mov       r4, r0
08000b9c: 8021       movs      r1, #0x80
08000b9e: 0e48       ldr       r0, [pc, #0x38] ; literal 0x40011000
08000ba0: fff7e4ff   bl        #0x8000b6c
08000ba4: 4006       lsls      r0, r0, #0x19
08000ba6: 44ea1064   orr.w     r4, r4, r0, lsr #24
08000baa: 4ff48071   mov.w     r1, #0x100
08000bae: 0a48       ldr       r0, [pc, #0x28] ; literal 0x40011000
08000bb0: fff7dcff   bl        #0x8000b6c
08000bb4: 8006       lsls      r0, r0, #0x1a
08000bb6: 44ea1064   orr.w     r4, r4, r0, lsr #24
08000bba: 0648       ldr       r0, [pc, #0x18] ; literal 0x200000a2
08000bbc: b0f90000   ldrsh.w   r0, [r0]
08000bc0: 0649       ldr       r1, [pc, #0x18] ; literal 0xfffff448
08000bc2: 8842       cmp       r0, r1
08000bc4: 04da       bge       #0x8000bd0
08000bc6: 0648       ldr       r0, [pc, #0x18] ; literal 0x200000a1
08000bc8: 0078       ldrb      r0, [r0]
08000bca: 08b1       cbz       r0, #0x8000bd0
08000bcc: 0720       movs      r0, #7
08000bce: 10bd       pop       {r4, pc}
08000bd0: 2046       mov       r0, r4
08000bd2: fce7       b         #0x8000bce
08000bd4: a200       lsls      r2, r4, #2
08000bd6: 0020       movs      r0, #0
08000bd8: 0010       asrs      r0, r0, #0x20
08000bda: 0140       ands      r1, r0
08000bdc: 48f4ffff   bl        #0x7c49bde
08000be0: a100       lsls      r1, r4, #2
08000be2: 0020       movs      r0, #0

# range 0x8000be4 .. 0x8000c4c
08000be4: 4cf6cc40   movw      r0, #0xcccc
08000be8: 0149       ldr       r1, [pc, #4] ; literal 0x40003000
08000bea: 0860       str       r0, [r1]
08000bec: 7047       bx        lr
08000bee: 0000       movs      r0, r0
08000bf0: 0030       adds      r0, #0
08000bf2: 0040       ands      r0, r0
08000bf4: 70b5       push      {r4, r5, r6, lr}
08000bf6: 0546       mov       r5, r0
08000bf8: 0c46       mov       r4, r1
08000bfa: 45f25550   movw      r0, #0x5555
08000bfe: 00f01ff8   bl        #0x8000c40
08000c02: 2846       mov       r0, r5
08000c04: 00f010f8   bl        #0x8000c28
08000c08: 2046       mov       r0, r4
08000c0a: 00f013f8   bl        #0x8000c34
08000c0e: 00f003f8   bl        #0x8000c18
08000c12: fff7e7ff   bl        #0x8000be4
08000c16: 70bd       pop       {r4, r5, r6, pc}
08000c18: 4af6aa20   movw      r0, #0xaaaa
08000c1c: 0149       ldr       r1, [pc, #4] ; literal 0x40003000
08000c1e: 0860       str       r0, [r1]
08000c20: 7047       bx        lr
08000c22: 0000       movs      r0, r0
08000c24: 0030       adds      r0, #0
08000c26: 0040       ands      r0, r0
08000c28: 0149       ldr       r1, [pc, #4] ; literal 0x40003000
08000c2a: 4860       str       r0, [r1, #4]
08000c2c: 7047       bx        lr
08000c2e: 0000       movs      r0, r0
08000c30: 0030       adds      r0, #0
08000c32: 0040       ands      r0, r0
08000c34: 0149       ldr       r1, [pc, #4] ; literal 0x40003000
08000c36: 8860       str       r0, [r1, #8]
08000c38: 7047       bx        lr
08000c3a: 0000       movs      r0, r0
08000c3c: 0030       adds      r0, #0
08000c3e: 0040       ands      r0, r0
08000c40: 0149       ldr       r1, [pc, #4] ; literal 0x40003000
08000c42: 0860       str       r0, [r1]
08000c44: 7047       bx        lr
08000c46: 0000       movs      r0, r0
08000c48: 0030       adds      r0, #0
08000c4a: 0040       ands      r0, r0

# range 0x8001454 .. 0x800156c
08001454: 2de9f84f   push.w    {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}
08001458: 0446       mov       r4, r0
0800145a: 0e46       mov       r6, r1
0800145c: 1746       mov       r7, r2
0800145e: 9846       mov       r8, r3
08001460: dde90a9b   ldrd      sb, fp, [sp, #0x28]
08001464: 0025       movs      r5, #0
08001466: aa46       mov       sl, r5
08001468: 0020       movs      r0, #0
0800146a: 0090       str       r0, [sp]
0800146c: 2078       ldrb      r0, [r4]
0800146e: 0128       cmp       r0, #1
08001470: 07d1       bne       #0x8001482
08001472: 607c       ldrb      r0, [r4, #0x11]
08001474: 217c       ldrb      r1, [r4, #0x10]
08001476: 40ea0120   orr.w     r0, r0, r1, lsl #8
0800147a: 2c49       ldr       r1, [pc, #0xb0] ; literal 0x2000007e
0800147c: 0880       strh      r0, [r1]
0800147e: 1025       movs      r5, #0x10
08001480: 23e0       b         #0x80014ca
08001482: 2078       ldrb      r0, [r4]
08001484: 0228       cmp       r0, #2
08001486: 01d1       bne       #0x800148c
08001488: 4502       lsls      r5, r0, #9
0800148a: 1ee0       b         #0x80014ca
0800148c: 2078       ldrb      r0, [r4]
0800148e: 0428       cmp       r0, #4
08001490: 08d1       bne       #0x80014a4
08001492: 607c       ldrb      r0, [r4, #0x11]
08001494: 217c       ldrb      r1, [r4, #0x10]
08001496: 40ea0120   orr.w     r0, r0, r1, lsl #8
0800149a: 2449       ldr       r1, [pc, #0x90] ; literal 0x2000007e
0800149c: 0880       strh      r0, [r1]
0800149e: 0020       movs      r0, #0
080014a0: bde8f88f   pop.w     {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
080014a4: 2078       ldrb      r0, [r4]
080014a6: 0328       cmp       r0, #3
080014a8: 01d1       bne       #0x80014ae
080014aa: 0020       movs      r0, #0
080014ac: f8e7       b         #0x80014a0
080014ae: 2078       ldrb      r0, [r4]
080014b0: 1828       cmp       r0, #0x18
080014b2: 07d1       bne       #0x80014c4
080014b4: 6078       ldrb      r0, [r4, #1]
080014b6: 1828       cmp       r0, #0x18
080014b8: 01d1       bne       #0x80014be
080014ba: 0020       movs      r0, #0
080014bc: f0e7       b         #0x80014a0
080014be: 6ff00500   mvn       r0, #5
080014c2: ede7       b         #0x80014a0
080014c4: 4ff0ff30   mov.w     r0, #-1
080014c8: eae7       b         #0x80014a0
080014ca: 6078       ldrb      r0, [r4, #1]
080014cc: 4845       cmp       r0, sb
080014ce: 02dd       ble       #0x80014d6
080014d0: 6ff00100   mvn       r0, #1
080014d4: e4e7       b         #0x80014a0
080014d6: 6078       ldrb      r0, [r4, #1]
080014d8: 4845       cmp       r0, sb
080014da: 01da       bge       #0x80014e0
080014dc: 0120       movs      r0, #1
080014de: 0090       str       r0, [sp]
080014e0: 281d       adds      r0, r5, #4
080014e2: 8642       cmp       r6, r0
080014e4: 01da       bge       #0x80014ea
080014e6: 0220       movs      r0, #2
080014e8: dae7       b         #0x80014a0
080014ea: a9b2       uxth      r1, r5
080014ec: a01c       adds      r0, r4, #2
080014ee: 00f0fefe   bl        #0x80022ee
080014f2: 8246       mov       sl, r0
080014f4: e81c       adds      r0, r5, #3
080014f6: 215c       ldrb      r1, [r4, r0]
080014f8: a81c       adds      r0, r5, #2
080014fa: 205c       ldrb      r0, [r4, r0]
080014fc: 41ea0020   orr.w     r0, r1, r0, lsl #8
08001500: 5045       cmp       r0, sl
08001502: 02d0       beq       #0x800150a
08001504: 6ff00400   mvn       r0, #4
08001508: cae7       b         #0x80014a0
0800150a: 0098       ldr       r0, [sp]
0800150c: 10b1       cbz       r0, #0x8001514
0800150e: 6ff00800   mvn       r0, #8
08001512: c5e7       b         #0x80014a0
08001514: 2a46       mov       r2, r5
08001516: a11c       adds      r1, r4, #2
08001518: 3846       mov       r0, r7
0800151a: fef796fe   bl        #0x800024a
0800151e: c8f80050   str.w     r5, [r8]
08001522: abf800a0   strh.w    sl, [fp]
08001526: 0120       movs      r0, #1
08001528: bae7       b         #0x80014a0
0800152a: 0000       movs      r0, r0
0800152c: 7e00       lsls      r6, r7, #1
0800152e: 0020       movs      r0, #0
08001530: 10b5       push      {r4, lr}
08001532: 0022       movs      r2, #0
08001534: 0288       ldrh      r2, [r0]
08001536: 02f44152   and       r2, r2, #0x3040
0800153a: 0b88       ldrh      r3, [r1]
0800153c: 4c88       ldrh      r4, [r1, #2]
0800153e: 2343       orrs      r3, r4
08001540: 8c88       ldrh      r4, [r1, #4]
08001542: 2343       orrs      r3, r4
08001544: cc88       ldrh      r4, [r1, #6]
08001546: 2343       orrs      r3, r4
08001548: 0c89       ldrh      r4, [r1, #8]
0800154a: 2343       orrs      r3, r4
0800154c: 4c89       ldrh      r4, [r1, #0xa]
0800154e: 2343       orrs      r3, r4
08001550: 8c89       ldrh      r4, [r1, #0xc]
08001552: 2343       orrs      r3, r4
08001554: cc89       ldrh      r4, [r1, #0xe]
08001556: 2343       orrs      r3, r4
08001558: 1a43       orrs      r2, r3
0800155a: 0280       strh      r2, [r0]
0800155c: 838b       ldrh      r3, [r0, #0x1c]
0800155e: 4ff2ff74   movw      r4, #0xf7ff
08001562: 2340       ands      r3, r4
08001564: 8383       strh      r3, [r0, #0x1c]
08001566: 0b8a       ldrh      r3, [r1, #0x10]
08001568: 0382       strh      r3, [r0, #0x10]
0800156a: 10bd       pop       {r4, pc}

# range 0x8002334 .. 0x80026b8
08002334: 2de9f043   push.w    {r4, r5, r6, r7, r8, sb, lr}
08002338: c5b0       sub       sp, #0x114
0800233a: 0646       mov       r6, r0
0800233c: 0c46       mov       r4, r1
0800233e: 4ff48071   mov.w     r1, #0x100
08002342: 05a8       add       r0, sp, #0x14
08002344: fef71af8   bl        #0x800037c
08002348: 0020       movs      r0, #0
0800234a: 0490       str       r0, [sp, #0x10]
0800234c: 0390       str       r0, [sp, #0xc]
0800234e: 8146       mov       sb, r0
08002350: 0025       movs      r5, #0
08002352: cb48       ldr       r0, [pc, #0x32c] ; literal 0x20000090
08002354: 0068       ldr       r0, [r0]
08002356: 401c       adds      r0, r0, #1
08002358: c949       ldr       r1, [pc, #0x324] ; literal 0x20000090
0800235a: 0860       str       r0, [r1]
0800235c: b0f5803f   cmp.w     r0, #0x10000
08002360: 02db       blt       #0x8002368
08002362: 4ff48030   mov.w     r0, #0x10000
08002366: 0860       str       r0, [r1]
08002368: c648       ldr       r0, [pc, #0x318] ; literal 0x20000080
0800236a: 0078       ldrb      r0, [r0]
0800236c: 0528       cmp       r0, #5
0800236e: 11d2       bhs       #0x8002394
08002370: dfe800f0   tbb       [pc, r0]
08002374: 0311       asrs      r3, r0, #4
08002376: 8f9f       ldr       r7, [sp, #0x23c]
08002378: ef00       lsls      r7, r5, #3
0800237a: 0020       movs      r0, #0
0800237c: c249       ldr       r1, [pc, #0x308] ; literal 0x20000084
0800237e: 0860       str       r0, [r1]
08002380: c249       ldr       r1, [pc, #0x308] ; literal 0x20000088
08002382: 0860       str       r0, [r1]
08002384: c249       ldr       r1, [pc, #0x308] ; literal 0x20000082
08002386: 0870       strb      r0, [r1]
08002388: 0120       movs      r0, #1
0800238a: be49       ldr       r1, [pc, #0x2f8] ; literal 0x20000080
0800238c: 0870       strb      r0, [r1]
0800238e: 0020       movs      r0, #0
08002390: bb49       ldr       r1, [pc, #0x2ec] ; literal 0x20000090
08002392: 0860       str       r0, [r1]
08002394: 70e1       b         #0x8002678
08002396: ba48       ldr       r0, [pc, #0x2e8] ; literal 0x20000090
08002398: 0068       ldr       r0, [r0]
0800239a: b0f5803f   cmp.w     r0, #0x10000
0800239e: 1edb       blt       #0x80023de
080023a0: bc48       ldr       r0, [pc, #0x2f0] ; literal 0x2000008c
080023a2: 0168       ldr       r1, [r0]
080023a4: 0068       ldr       r0, [r0]
080023a6: 401c       adds      r0, r0, #1
080023a8: ba4a       ldr       r2, [pc, #0x2e8] ; literal 0x2000008c
080023aa: 1060       str       r0, [r2]
080023ac: 0329       cmp       r1, #3
080023ae: 08dd       ble       #0x80023c2
080023b0: 0020       movs      r0, #0
080023b2: 1146       mov       r1, r2
080023b4: 0860       str       r0, [r1]
080023b6: b249       ldr       r1, [pc, #0x2c8] ; literal 0x20000090
080023b8: 0860       str       r0, [r1]
080023ba: 0420       movs      r0, #4
080023bc: b149       ldr       r1, [pc, #0x2c4] ; literal 0x20000080
080023be: 0870       strb      r0, [r1]
080023c0: 0ce0       b         #0x80023dc
080023c2: 4320       movs      r0, #0x43
080023c4: b449       ldr       r1, [pc, #0x2d0] ; literal 0x20000078
080023c6: 0870       strb      r0, [r1]
080023c8: 0020       movs      r0, #0
080023ca: 4870       strb      r0, [r1, #1]
080023cc: af4a       ldr       r2, [pc, #0x2bc] ; literal 0x20000088
080023ce: ad49       ldr       r1, [pc, #0x2b4] ; literal 0x20000080
080023d0: b148       ldr       r0, [pc, #0x2c4] ; literal 0x20000078
080023d2: 00f071f9   bl        #0x80026b8
080023d6: 0020       movs      r0, #0
080023d8: aa49       ldr       r1, [pc, #0x2a8] ; literal 0x20000080
080023da: 0870       strb      r0, [r1]
080023dc: 4ce1       b         #0x8002678
080023de: 04b9       cbnz      r4, #0x80023e2
080023e0: 4ae1       b         #0x8002678
080023e2: 03a9       add       r1, sp, #0xc
080023e4: a848       ldr       r0, [pc, #0x2a0] ; literal 0x20000084
080023e6: 0078       ldrb      r0, [r0]
080023e8: 04ab       add       r3, sp, #0x10
080023ea: 05aa       add       r2, sp, #0x14
080023ec: cde90001   strd      r0, r1, [sp]
080023f0: 2146       mov       r1, r4
080023f2: 3046       mov       r0, r6
080023f4: fff72ef8   bl        #0x8001454
080023f8: 45b2       sxtb      r5, r0
080023fa: 95b3       cbz       r5, #0x8002462
080023fc: 012d       cmp       r5, #1
080023fe: 07d0       beq       #0x8002410
08002400: 022d       cmp       r5, #2
08002402: 33d1       bne       #0x800246c
08002404: 4ff00309   mov.w     sb, #3
08002408: 4846       mov       r0, sb
0800240a: 45b0       add       sp, #0x114
0800240c: bde8f083   pop.w     {r4, r5, r6, r7, r8, sb, pc}
08002410: b078       ldrb      r0, [r6, #2]
08002412: 88b9       cbnz      r0, #0x8002438
08002414: 0420       movs      r0, #4
08002416: 9b49       ldr       r1, [pc, #0x26c] ; literal 0x20000080
08002418: 0870       strb      r0, [r1]
0800241a: a048       ldr       r0, [pc, #0x280] ; literal 0x20000081
0800241c: 0078       ldrb      r0, [r0]
0800241e: f8b1       cbz       r0, #0x8002460
08002420: 9f48       ldr       r0, [pc, #0x27c] ; literal 0x2000007c
08002422: 0088       ldrh      r0, [r0]
08002424: 9f49       ldr       r1, [pc, #0x27c] ; literal 0x2000007e
08002426: 0988       ldrh      r1, [r1]
08002428: 8842       cmp       r0, r1
0800242a: 02d0       beq       #0x8002432
0800242c: 9d48       ldr       r0, [pc, #0x274] ; literal 0x2000007e
0800242e: 0088       ldrh      r0, [r0]
08002430: b0b9       cbnz      r0, #0x8002460
08002432: 4ff00409   mov.w     sb, #4
08002436: 13e0       b         #0x8002460
08002438: 0220       movs      r0, #2
0800243a: 9249       ldr       r1, [pc, #0x248] ; literal 0x20000080
0800243c: 0870       strb      r0, [r1]
0800243e: 8146       mov       sb, r0
08002440: 9148       ldr       r0, [pc, #0x244] ; literal 0x20000084
08002442: 0068       ldr       r0, [r0]
08002444: 401c       adds      r0, r0, #1
08002446: 9049       ldr       r1, [pc, #0x240] ; literal 0x20000084
08002448: 0860       str       r0, [r1]
0800244a: 0020       movs      r0, #0
0800244c: 9049       ldr       r1, [pc, #0x240] ; literal 0x20000082
0800244e: 0870       strb      r0, [r1]
08002450: 05a8       add       r0, sp, #0x14
08002452: fef7f7f9   bl        #0x8000844
08002456: 0020       movs      r0, #0
08002458: 9049       ldr       r1, [pc, #0x240] ; literal 0x20000081
0800245a: 0870       strb      r0, [r1]
0800245c: 9049       ldr       r1, [pc, #0x240] ; literal 0x2000007c
0800245e: 0880       strh      r0, [r1]
08002460: 12e0       b         #0x8002488
08002462: ffe7       b         #0x8002464
08002464: 0420       movs      r0, #4
08002466: 8749       ldr       r1, [pc, #0x21c] ; literal 0x20000080
08002468: 0870       strb      r0, [r1]
0800246a: 0de0       b         #0x8002488
0800246c: 0020       movs      r0, #0
0800246e: 8849       ldr       r1, [pc, #0x220] ; literal 0x20000082
08002470: 0870       strb      r0, [r1]
08002472: 1520       movs      r0, #0x15
08002474: 8849       ldr       r1, [pc, #0x220] ; literal 0x20000078
08002476: 0870       strb      r0, [r1]
08002478: 0020       movs      r0, #0
0800247a: 4870       strb      r0, [r1, #1]
0800247c: 834a       ldr       r2, [pc, #0x20c] ; literal 0x20000088
0800247e: 8149       ldr       r1, [pc, #0x204] ; literal 0x20000080
08002480: 8548       ldr       r0, [pc, #0x214] ; literal 0x20000078
08002482: 00f019f9   bl        #0x80026b8
08002486: 00bf       nop       
08002488: 00bf       nop       
0800248a: 0020       movs      r0, #0
0800248c: 7c49       ldr       r1, [pc, #0x1f0] ; literal 0x20000090
0800248e: 0860       str       r0, [r1]
08002490: f2e0       b         #0x8002678
08002492: 0320       movs      r0, #3
08002494: 7b49       ldr       r1, [pc, #0x1ec] ; literal 0x20000080
08002496: 0870       strb      r0, [r1]
08002498: 0620       movs      r0, #6
0800249a: 7f49       ldr       r1, [pc, #0x1fc] ; literal 0x20000078
0800249c: 0870       strb      r0, [r1]
0800249e: 4320       movs      r0, #0x43
080024a0: 4870       strb      r0, [r1, #1]
080024a2: 0020       movs      r0, #0
080024a4: 8870       strb      r0, [r1, #2]
080024a6: 794a       ldr       r2, [pc, #0x1e4] ; literal 0x20000088
080024a8: 7649       ldr       r1, [pc, #0x1d8] ; literal 0x20000080
080024aa: 7b48       ldr       r0, [pc, #0x1ec] ; literal 0x20000078
080024ac: 00f004f9   bl        #0x80026b8
080024b0: e2e0       b         #0x8002678
080024b2: 7348       ldr       r0, [pc, #0x1cc] ; literal 0x20000090
080024b4: 0068       ldr       r0, [r0]
080024b6: b0f5803f   cmp.w     r0, #0x10000
080024ba: 1adb       blt       #0x80024f2
080024bc: 7a48       ldr       r0, [pc, #0x1e8] ; literal 0x20000094
080024be: 0078       ldrb      r0, [r0]
080024c0: 0628       cmp       r0, #6
080024c2: 12da       bge       #0x80024ea
080024c4: 7848       ldr       r0, [pc, #0x1e0] ; literal 0x20000094
080024c6: 0078       ldrb      r0, [r0]
080024c8: 401c       adds      r0, r0, #1
080024ca: 7749       ldr       r1, [pc, #0x1dc] ; literal 0x20000094
080024cc: 0870       strb      r0, [r1]
080024ce: 0020       movs      r0, #0
080024d0: 6b49       ldr       r1, [pc, #0x1ac] ; literal 0x20000090
080024d2: 0860       str       r0, [r1]
080024d4: 1520       movs      r0, #0x15
080024d6: 7049       ldr       r1, [pc, #0x1c0] ; literal 0x20000078
080024d8: 0870       strb      r0, [r1]
080024da: 0020       movs      r0, #0
080024dc: 4870       strb      r0, [r1, #1]
080024de: 6b4a       ldr       r2, [pc, #0x1ac] ; literal 0x20000088
080024e0: 6849       ldr       r1, [pc, #0x1a0] ; literal 0x20000080
080024e2: 6d48       ldr       r0, [pc, #0x1b4] ; literal 0x20000078
080024e4: 00f0e8f8   bl        #0x80026b8
080024e8: 02e0       b         #0x80024f0
080024ea: 0420       movs      r0, #4
080024ec: 6549       ldr       r1, [pc, #0x194] ; literal 0x20000080
080024ee: 0870       strb      r0, [r1]
080024f0: c2e0       b         #0x8002678
080024f2: 04b9       cbnz      r4, #0x80024f6
080024f4: c0e0       b         #0x8002678
080024f6: 03a9       add       r1, sp, #0xc
080024f8: 6348       ldr       r0, [pc, #0x18c] ; literal 0x20000084
080024fa: 0078       ldrb      r0, [r0]
080024fc: 04ab       add       r3, sp, #0x10
080024fe: 05aa       add       r2, sp, #0x14
08002500: cde90001   strd      r0, r1, [sp]
08002504: 2146       mov       r1, r4
08002506: 3046       mov       r0, r6
08002508: fef7a4ff   bl        #0x8001454
0800250c: 45b2       sxtb      r5, r0
0800250e: 0020       movs      r0, #0
08002510: 6549       ldr       r1, [pc, #0x194] ; literal 0x20000094
08002512: 0870       strb      r0, [r1]
08002514: f5b3       cbz       r5, #0x8002594
08002516: 012d       cmp       r5, #1
08002518: 05d0       beq       #0x8002526
0800251a: 022d       cmp       r5, #2
0800251c: 7ed1       bne       #0x800261c
0800251e: 4ff00309   mov.w     sb, #3
08002522: 4846       mov       r0, sb
08002524: 71e7       b         #0x800240a
08002526: 5e48       ldr       r0, [pc, #0x178] ; literal 0x2000007c
08002528: 0088       ldrh      r0, [r0]
0800252a: bdf80c10   ldrh.w    r1, [sp, #0xc]
0800252e: 4840       eors      r0, r1
08002530: 5b49       ldr       r1, [pc, #0x16c] ; literal 0x2000007c
08002532: 0880       strh      r0, [r1]
08002534: 4ff00109   mov.w     sb, #1
08002538: 5348       ldr       r0, [pc, #0x14c] ; literal 0x20000084
0800253a: 0068       ldr       r0, [r0]
0800253c: 401c       adds      r0, r0, #1
0800253e: 5249       ldr       r1, [pc, #0x148] ; literal 0x20000084
08002540: 0860       str       r0, [r1]
08002542: 0020       movs      r0, #0
08002544: 5249       ldr       r1, [pc, #0x148] ; literal 0x20000082
08002546: 0870       strb      r0, [r1]
08002548: 0027       movs      r7, #0
0800254a: 0df11408   add.w     r8, sp, #0x14
0800254e: 00bf       nop       
08002550: 07e0       b         #0x8002562
08002552: 7ee0       b         #0x8002652
08002554: 5549       ldr       r1, [pc, #0x154] ; literal 0x200007fc
08002556: 4046       mov       r0, r8
08002558: 00f0fef8   bl        #0x8002758
0800255c: 1037       adds      r7, #0x10
0800255e: 08f11008   add.w     r8, r8, #0x10
08002562: 0498       ldr       r0, [sp, #0x10]
08002564: 8742       cmp       r7, r0
08002566: f5db       blt       #0x8002554
08002568: 5148       ldr       r0, [pc, #0x144] ; literal 0x20000070
0800256a: 0068       ldr       r0, [r0]
0800256c: 0499       ldr       r1, [sp, #0x10]
0800256e: 0844       add       r0, r1
08002570: 4f49       ldr       r1, [pc, #0x13c] ; literal 0x20000070
08002572: 0860       str       r0, [r1]
08002574: 05a9       add       r1, sp, #0x14
08002576: 4f48       ldr       r0, [pc, #0x13c] ; literal 0x20000074
08002578: 049a       ldr       r2, [sp, #0x10]
0800257a: 0068       ldr       r0, [r0]
0800257c: 00f09df9   bl        #0x80028ba
08002580: 4c48       ldr       r0, [pc, #0x130] ; literal 0x20000074
08002582: 0068       ldr       r0, [r0]
08002584: 0499       ldr       r1, [sp, #0x10]
08002586: 0844       add       r0, r1
08002588: 4a49       ldr       r1, [pc, #0x128] ; literal 0x20000074
0800258a: 0860       str       r0, [r1]
0800258c: 0620       movs      r0, #6
0800258e: 4249       ldr       r1, [pc, #0x108] ; literal 0x20000078
08002590: 0870       strb      r0, [r1]
08002592: 00e0       b         #0x8002596
08002594: 07e0       b         #0x80025a6
08002596: 0020       movs      r0, #0
08002598: 4870       strb      r0, [r1, #1]
0800259a: 3c4a       ldr       r2, [pc, #0xf0] ; literal 0x20000088
0800259c: 3949       ldr       r1, [pc, #0xe4] ; literal 0x20000080
0800259e: 3e48       ldr       r0, [pc, #0xf8] ; literal 0x20000078
080025a0: 00f08af8   bl        #0x80026b8
080025a4: 50e0       b         #0x8002648
080025a6: 3e48       ldr       r0, [pc, #0xf8] ; literal 0x2000007c
080025a8: 0088       ldrh      r0, [r0]
080025aa: 3e49       ldr       r1, [pc, #0xf8] ; literal 0x2000007e
080025ac: 0988       ldrh      r1, [r1]
080025ae: 8842       cmp       r0, r1
080025b0: 02d0       beq       #0x80025b8
080025b2: 3c48       ldr       r0, [pc, #0xf0] ; literal 0x2000007e
080025b4: 0088       ldrh      r0, [r0]
080025b6: 38bb       cbnz      r0, #0x8002608
080025b8: 0120       movs      r0, #1
080025ba: 3849       ldr       r1, [pc, #0xe0] ; literal 0x20000081
080025bc: 0870       strb      r0, [r1]
080025be: 3448       ldr       r0, [pc, #0xd0] ; literal 0x20000082
080025c0: 0078       ldrb      r0, [r0]
080025c2: 80b1       cbz       r0, #0x80025e6
080025c4: 0020       movs      r0, #0
080025c6: 3049       ldr       r1, [pc, #0xc0] ; literal 0x20000084
080025c8: 0860       str       r0, [r1]
080025ca: 0120       movs      r0, #1
080025cc: 2d49       ldr       r1, [pc, #0xb4] ; literal 0x20000080
080025ce: 0870       strb      r0, [r1]
080025d0: 0620       movs      r0, #6
080025d2: 3149       ldr       r1, [pc, #0xc4] ; literal 0x20000078
080025d4: 0870       strb      r0, [r1]
080025d6: 0020       movs      r0, #0
080025d8: 4870       strb      r0, [r1, #1]
080025da: 2c4a       ldr       r2, [pc, #0xb0] ; literal 0x20000088
080025dc: 2949       ldr       r1, [pc, #0xa4] ; literal 0x20000080
080025de: 2e48       ldr       r0, [pc, #0xb8] ; literal 0x20000078
080025e0: 00f06af8   bl        #0x80026b8
080025e4: 19e0       b         #0x800261a
080025e6: 1520       movs      r0, #0x15
080025e8: 2b49       ldr       r1, [pc, #0xac] ; literal 0x20000078
080025ea: 0870       strb      r0, [r1]
080025ec: 0020       movs      r0, #0
080025ee: 4870       strb      r0, [r1, #1]
080025f0: 264a       ldr       r2, [pc, #0x98] ; literal 0x20000088
080025f2: 2449       ldr       r1, [pc, #0x90] ; literal 0x20000080
080025f4: 2848       ldr       r0, [pc, #0xa0] ; literal 0x20000078
080025f6: 00f05ff8   bl        #0x80026b8
080025fa: 2548       ldr       r0, [pc, #0x94] ; literal 0x20000082
080025fc: 0078       ldrb      r0, [r0]
080025fe: 401c       adds      r0, r0, #1
08002600: 2349       ldr       r1, [pc, #0x8c] ; literal 0x20000082
08002602: 0870       strb      r0, [r1]
08002604: 09e0       b         #0x800261a
08002606: 09e0       b         #0x800261c
08002608: ffe7       b         #0x800260a
0800260a: 0020       movs      r0, #0
0800260c: 2349       ldr       r1, [pc, #0x8c] ; literal 0x20000081
0800260e: 0870       strb      r0, [r1]
08002610: 2349       ldr       r1, [pc, #0x8c] ; literal 0x2000007c
08002612: 0880       strh      r0, [r1]
08002614: 0420       movs      r0, #4
08002616: 1b49       ldr       r1, [pc, #0x6c] ; literal 0x20000080
08002618: 0870       strb      r0, [r1]
0800261a: 15e0       b         #0x8002648
0800261c: 0020       movs      r0, #0
0800261e: 1c49       ldr       r1, [pc, #0x70] ; literal 0x20000082
08002620: 0870       strb      r0, [r1]
08002622: 05f10900   add.w     r0, r5, #9
08002626: 18b9       cbnz      r0, #0x8002630
08002628: 0620       movs      r0, #6
0800262a: 1b49       ldr       r1, [pc, #0x6c] ; literal 0x20000078
0800262c: 0870       strb      r0, [r1]
0800262e: 02e0       b         #0x8002636
08002630: 1520       movs      r0, #0x15
08002632: 1949       ldr       r1, [pc, #0x64] ; literal 0x20000078
08002634: 0870       strb      r0, [r1]
08002636: 0020       movs      r0, #0
08002638: 1749       ldr       r1, [pc, #0x5c] ; literal 0x20000078
0800263a: 4870       strb      r0, [r1, #1]
0800263c: 134a       ldr       r2, [pc, #0x4c] ; literal 0x20000088
0800263e: 1149       ldr       r1, [pc, #0x44] ; literal 0x20000080
08002640: 1548       ldr       r0, [pc, #0x54] ; literal 0x20000078
08002642: 00f039f8   bl        #0x80026b8
08002646: 00bf       nop       
08002648: 00bf       nop       
0800264a: 0020       movs      r0, #0
0800264c: 0c49       ldr       r1, [pc, #0x30] ; literal 0x20000090
0800264e: 0860       str       r0, [r1]
08002650: 12e0       b         #0x8002678
08002652: 0620       movs      r0, #6
08002654: 1049       ldr       r1, [pc, #0x40] ; literal 0x20000078
08002656: 0870       strb      r0, [r1]
08002658: 1820       movs      r0, #0x18
0800265a: 4870       strb      r0, [r1, #1]
0800265c: 8870       strb      r0, [r1, #2]
0800265e: 0020       movs      r0, #0
08002660: c870       strb      r0, [r1, #3]
08002662: 0a4a       ldr       r2, [pc, #0x28] ; literal 0x20000088
08002664: 0749       ldr       r1, [pc, #0x1c] ; literal 0x20000080
08002666: 0c48       ldr       r0, [pc, #0x30] ; literal 0x20000078
08002668: 00f026f8   bl        #0x80026b8
0800266c: 4ff0ff39   mov.w     sb, #-1
08002670: 0020       movs      r0, #0
08002672: 0449       ldr       r1, [pc, #0x10] ; literal 0x20000080
08002674: 0870       strb      r0, [r1]
08002676: 00bf       nop       
08002678: 00bf       nop       
0800267a: 4846       mov       r0, sb
0800267c: c5e6       b         #0x800240a
0800267e: 0000       movs      r0, r0
08002680: 9000       lsls      r0, r2, #2
08002682: 0020       movs      r0, #0
08002684: 8000       lsls      r0, r0, #2
08002686: 0020       movs      r0, #0
08002688: 8400       lsls      r4, r0, #2
0800268a: 0020       movs      r0, #0
0800268c: 8800       lsls      r0, r1, #2
0800268e: 0020       movs      r0, #0
08002690: 8200       lsls      r2, r0, #2
08002692: 0020       movs      r0, #0
08002694: 8c00       lsls      r4, r1, #2
08002696: 0020       movs      r0, #0
08002698: 7800       lsls      r0, r7, #1
0800269a: 0020       movs      r0, #0
0800269c: 8100       lsls      r1, r0, #2
0800269e: 0020       movs      r0, #0
080026a0: 7c00       lsls      r4, r7, #1
080026a2: 0020       movs      r0, #0
080026a4: 7e00       lsls      r6, r7, #1
080026a6: 0020       movs      r0, #0
080026a8: 9400       lsls      r4, r2, #2
080026aa: 0020       movs      r0, #0
080026ac: fc07       lsls      r4, r7, #0x1f
080026ae: 0020       movs      r0, #0
080026b0: 7000       lsls      r0, r6, #1
080026b2: 0020       movs      r0, #0
080026b4: 7400       lsls      r4, r6, #1
080026b6: 0020       movs      r0, #0

# range 0x80026ec .. 0x8002850
080026ec: 00b5       push      {lr}
080026ee: 1248       ldr       r0, [pc, #0x48] ; literal 0x200000cc
080026f0: 1249       ldr       r1, [pc, #0x48] ; literal 0x20000020
080026f2: 0860       str       r0, [r1]
080026f4: 1248       ldr       r0, [pc, #0x48] ; literal 0x200001cc
080026f6: 1349       ldr       r1, [pc, #0x4c] ; literal 0x20000024
080026f8: 0860       str       r0, [r1]
080026fa: 0846       mov       r0, r1
080026fc: 0168       ldr       r1, [r0]
080026fe: 0f48       ldr       r0, [pc, #0x3c] ; literal 0x20000020
08002700: 0068       ldr       r0, [r0]
08002702: fdf79efe   bl        #0x8000442
08002706: 1048       ldr       r0, [pc, #0x40] ; literal 0x200002cc
08002708: 1049       ldr       r1, [pc, #0x40] ; literal 0x20000028
0800270a: 0860       str       r0, [r1]
0800270c: 0846       mov       r0, r1
0800270e: 0068       ldr       r0, [r0]
08002710: fdf7b2fe   bl        #0x8000478
08002714: 0848       ldr       r0, [pc, #0x20] ; literal 0x200000cc
08002716: 0e49       ldr       r1, [pc, #0x38] ; literal 0x20000030
08002718: 0860       str       r0, [r1]
0800271a: 0846       mov       r0, r1
0800271c: 0068       ldr       r0, [r0]
0800271e: fef7c9fb   bl        #0x8000eb4
08002722: 0748       ldr       r0, [pc, #0x1c] ; literal 0x200001cc
08002724: 0b49       ldr       r1, [pc, #0x2c] ; literal 0x2000002c
08002726: 0860       str       r0, [r1]
08002728: 0846       mov       r0, r1
0800272a: 0168       ldr       r1, [r0]
0800272c: 0748       ldr       r0, [pc, #0x1c] ; literal 0x20000028
0800272e: 0068       ldr       r0, [r0]
08002730: fdf7cafe   bl        #0x80004c8
08002734: 00bd       pop       {pc}
08002736: 0000       movs      r0, r0
08002738: cc00       lsls      r4, r1, #3
0800273a: 0020       movs      r0, #0
0800273c: 2000       movs      r0, r4
0800273e: 0020       movs      r0, #0
08002740: cc01       lsls      r4, r1, #7
08002742: 0020       movs      r0, #0
08002744: 2400       movs      r4, r4
08002746: 0020       movs      r0, #0
08002748: cc02       lsls      r4, r1, #0xb
0800274a: 0020       movs      r0, #0
0800274c: 2800       movs      r0, r5
0800274e: 0020       movs      r0, #0
08002750: 3000       movs      r0, r6
08002752: 0020       movs      r0, #0
08002754: 2c00       movs      r4, r5
08002756: 0020       movs      r0, #0
08002758: 3fb5       push      {r0, r1, r2, r3, r4, r5, lr}
0800275a: 0446       mov       r4, r0
0800275c: 0d46       mov       r5, r1
0800275e: 1022       movs      r2, #0x10
08002760: 2146       mov       r1, r4
08002762: 6846       mov       r0, sp
08002764: fdf7c5fe   bl        #0x80004f2
08002768: 0748       ldr       r0, [pc, #0x1c] ; literal 0x20000030
0800276a: 0168       ldr       r1, [r0]
0800276c: 2046       mov       r0, r4
0800276e: fef76dfa   bl        #0x8000c4c
08002772: 1022       movs      r2, #0x10
08002774: 2946       mov       r1, r5
08002776: 2046       mov       r0, r4
08002778: fff7acfd   bl        #0x80022d4
0800277c: 1022       movs      r2, #0x10
0800277e: 6946       mov       r1, sp
08002780: 2846       mov       r0, r5
08002782: fdf7b6fe   bl        #0x80004f2
08002786: 3fbd       pop       {r0, r1, r2, r3, r4, r5, pc}
08002788: 3000       movs      r0, r6
0800278a: 0020       movs      r0, #0
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
08002842: 0000       movs      r0, r0
08002844: 1083       strh      r0, [r2, #0x18]
08002846: 0008       lsrs      r0, r0, #0x20
08002848: 6723       movs      r3, #0x67
0800284a: 5014       asrs      r0, r2, #0x11
0800284c: 2710       asrs      r7, r4, #0x20
0800284e: 2120       movs      r0, #0x21

# range 0x8002868 .. 0x8002904
08002868: 2de9f047   push.w    {r4, r5, r6, r7, r8, sb, sl, lr}
0800286c: 0746       mov       r7, r0
0800286e: 0d46       mov       r5, r1
08002870: 4ff00009   mov.w     sb, #0
08002874: 4fead528   lsr.w     r8, r5, #0xb
08002878: c5f30a00   ubfx      r0, r5, #0, #0xb
0800287c: 08b1       cbz       r0, #0x8002882
0800287e: 08f10108   add.w     r8, r8, #1
08002882: fef781f8   bl        #0x8000988
08002886: 3520       movs      r0, #0x35
08002888: fdf78cff   bl        #0x80007a4
0800288c: 0024       movs      r4, #0
0800288e: 0ce0       b         #0x80028aa
08002890: 4ff40061   mov.w     r1, #0x800
08002894: 01fb0470   mla       r0, r1, r4, r7
08002898: fdf78aff   bl        #0x80007b0
0800289c: 0646       mov       r6, r0
0800289e: 042e       cmp       r6, #4
080028a0: 02d0       beq       #0x80028a8
080028a2: 4ff00109   mov.w     sb, #1
080028a6: 02e0       b         #0x80028ae
080028a8: 641c       adds      r4, r4, #1
080028aa: 4445       cmp       r4, r8
080028ac: f0d3       blo       #0x8002890
080028ae: 00bf       nop       
080028b0: fdf7beff   bl        #0x8000830
080028b4: 4846       mov       r0, sb
080028b6: bde8f087   pop.w     {r4, r5, r6, r7, r8, sb, sl, pc}
080028ba: 2de9f047   push.w    {r4, r5, r6, r7, r8, sb, sl, lr}
080028be: 0546       mov       r5, r0
080028c0: 0c46       mov       r4, r1
080028c2: 1646       mov       r6, r2
080028c4: 4ff00009   mov.w     sb, #0
080028c8: fef75ef8   bl        #0x8000988
080028cc: 3520       movs      r0, #0x35
080028ce: fdf769ff   bl        #0x80007a4
080028d2: 0027       movs      r7, #0
080028d4: 0ee0       b         #0x80028f4
080028d6: 2846       mov       r0, r5
080028d8: 2168       ldr       r1, [r4]
080028da: fef71ff8   bl        #0x800091c
080028de: d5f80080   ldr.w     r8, [r5]
080028e2: 2068       ldr       r0, [r4]
080028e4: 4045       cmp       r0, r8
080028e6: 02d0       beq       #0x80028ee
080028e8: 4ff00209   mov.w     sb, #2
080028ec: 04e0       b         #0x80028f8
080028ee: 3f1d       adds      r7, r7, #4
080028f0: 241d       adds      r4, r4, #4
080028f2: 2d1d       adds      r5, r5, #4
080028f4: b742       cmp       r7, r6
080028f6: eed3       blo       #0x80028d6
080028f8: 00bf       nop       
080028fa: fdf799ff   bl        #0x8000830
080028fe: 4846       mov       r0, sb
08002900: bde8f087   pop.w     {r4, r5, r6, r7, r8, sb, sl, pc}

# range 0x8002b2c .. 0x8002d60
08002b2c: adf5007d   sub.w     sp, sp, #0x200
08002b30: fef71cfb   bl        #0x800116c
08002b34: fff7e6fe   bl        #0x8002904
08002b38: 7d48       ldr       r0, [pc, #0x1f4] ; literal 0x803d000
08002b3a: fef7d4fb   bl        #0x80012e6
08002b3e: 7d49       ldr       r1, [pc, #0x1f4] ; literal 0x55aaaa55
08002b40: 8842       cmp       r0, r1
08002b42: 03d0       beq       #0x8002b4c
08002b44: fef720f8   bl        #0x8000b88
08002b48: 0728       cmp       r0, #7
08002b4a: 09d1       bne       #0x8002b60
08002b4c: 00f0b4f9   bl        #0x8002eb8
08002b50: fef722fa   bl        #0x8000f98
08002b54: 00f014fa   bl        #0x8002f80
08002b58: fff728f9   bl        #0x8001dac
08002b5c: 00f046f9   bl        #0x8002dec
08002b60: 7348       ldr       r0, [pc, #0x1cc] ; literal 0x803d000
08002b62: fef7c0fb   bl        #0x80012e6
08002b66: 7349       ldr       r1, [pc, #0x1cc] ; literal 0x55aaaa55
08002b68: 8842       cmp       r0, r1
08002b6a: 02d0       beq       #0x8002b72
08002b6c: fff70efe   bl        #0x800278c
08002b70: 18b9       cbnz      r0, #0x8002b7a
08002b72: 0120       movs      r0, #1
08002b74: 7049       ldr       r1, [pc, #0x1c0] ; literal 0x20000044
08002b76: 0860       str       r0, [r1]
08002b78: 06e0       b         #0x8002b88
08002b7a: fef705f8   bl        #0x8000b88
08002b7e: 0728       cmp       r0, #7
08002b80: 02d1       bne       #0x8002b88
08002b82: 0120       movs      r0, #1
08002b84: 6d49       ldr       r1, [pc, #0x1b4] ; literal 0x200000a0
08002b86: 0870       strb      r0, [r1]
08002b88: d1e0       b         #0x8002d2e
08002b8a: 6b48       ldr       r0, [pc, #0x1ac] ; literal 0x20000044
08002b8c: 0068       ldr       r0, [r0]
08002b8e: 0128       cmp       r0, #1
08002b90: 03d0       beq       #0x8002b9a
08002b92: 6a48       ldr       r0, [pc, #0x1a8] ; literal 0x200000a0
08002b94: 0078       ldrb      r0, [r0]
08002b96: 0128       cmp       r0, #1
08002b98: 7dd1       bne       #0x8002c96
08002b9a: fc22       movs      r2, #0xfc
08002b9c: 6849       ldr       r1, [pc, #0x1a0] ; literal 0x20000500
08002b9e: 6846       mov       r0, sp
08002ba0: fdf798fb   bl        #0x80002d4
08002ba4: 6648       ldr       r0, [pc, #0x198] ; literal 0x20000500
08002ba6: 1038       subs      r0, #0x10
08002ba8: 0fc8       ldm       r0, {r0, r1, r2, r3}
08002baa: 00f0a5fa   bl        #0x80030f8
08002bae: 0446       mov       r4, r0
08002bb0: 0025       movs      r5, #0
08002bb2: 002c       cmp       r4, #0
08002bb4: 03dd       ble       #0x8002bbe
08002bb6: 2146       mov       r1, r4
08002bb8: 40a8       add       r0, sp, #0x100
08002bba: 00f0c5f9   bl        #0x8002f48
08002bbe: 6148       ldr       r0, [pc, #0x184] ; literal 0x20000080
08002bc0: 0078       ldrb      r0, [r0]
08002bc2: 18b1       cbz       r0, #0x8002bcc
08002bc4: 5f48       ldr       r0, [pc, #0x17c] ; literal 0x20000080
08002bc6: 0078       ldrb      r0, [r0]
08002bc8: 0128       cmp       r0, #1
08002bca: 1bd1       bne       #0x8002c04
08002bcc: 142c       cmp       r4, #0x14
08002bce: 19d1       bne       #0x8002c04
08002bd0: 9df80001   ldrb.w    r0, [sp, #0x100]
08002bd4: aa28       cmp       r0, #0xaa
08002bd6: 15d1       bne       #0x8002c04
08002bd8: 9df80101   ldrb.w    r0, [sp, #0x101]
08002bdc: 5528       cmp       r0, #0x55
08002bde: 11d1       bne       #0x8002c04
08002be0: 9df81001   ldrb.w    r0, [sp, #0x110]
08002be4: 9b28       cmp       r0, #0x9b
08002be6: 0dd1       bne       #0x8002c04
08002be8: 9df81101   ldrb.w    r0, [sp, #0x111]
08002bec: 1428       cmp       r0, #0x14
08002bee: 09d1       bne       #0x8002c04
08002bf0: 9df81201   ldrb.w    r0, [sp, #0x112]
08002bf4: 5a28       cmp       r0, #0x5a
08002bf6: 05d1       bne       #0x8002c04
08002bf8: 9df81301   ldrb.w    r0, [sp, #0x113]
08002bfc: 5a28       cmp       r0, #0x5a
08002bfe: 01d1       bne       #0x8002c04
08002c00: 00f0faf8   bl        #0x8002df8
08002c04: 2146       mov       r1, r4
08002c06: 40a8       add       r0, sp, #0x100
08002c08: fff794fb   bl        #0x8002334
08002c0c: 0546       mov       r5, r0
08002c0e: 022d       cmp       r5, #2
08002c10: 14d1       bne       #0x8002c3c
08002c12: 4948       ldr       r0, [pc, #0x124] ; literal 0x20000044
08002c14: 0068       ldr       r0, [r0]
08002c16: 88bb       cbnz      r0, #0x8002c7c
08002c18: fdf7b6fe   bl        #0x8000988
08002c1c: 4448       ldr       r0, [pc, #0x110] ; literal 0x803d000
08002c1e: fdf7c7fd   bl        #0x80007b0
08002c22: 4449       ldr       r1, [pc, #0x110] ; literal 0x55aaaa55
08002c24: 4248       ldr       r0, [pc, #0x108] ; literal 0x803d000
08002c26: fdf779fe   bl        #0x800091c
08002c2a: fdf701fe   bl        #0x8000830
08002c2e: 0020       movs      r0, #0
08002c30: 4249       ldr       r1, [pc, #0x108] ; literal 0x200000a0
08002c32: 0870       strb      r0, [r1]
08002c34: 0120       movs      r0, #1
08002c36: 4049       ldr       r1, [pc, #0x100] ; literal 0x20000044
08002c38: 0860       str       r0, [r1]
08002c3a: 1fe0       b         #0x8002c7c
08002c3c: 032d       cmp       r5, #3
08002c3e: 1dd0       beq       #0x8002c7c
08002c40: 042d       cmp       r5, #4
08002c42: 1bd1       bne       #0x8002c7c
08002c44: 2146       mov       r1, r4
08002c46: 40a8       add       r0, sp, #0x100
08002c48: fff774fb   bl        #0x8002334
08002c4c: fff79efd   bl        #0x800278c
08002c50: 0128       cmp       r0, #1
08002c52: 13d1       bne       #0x8002c7c
08002c54: fdf7ecfd   bl        #0x8000830
08002c58: 40f6d921   movw      r1, #0xad9
08002c5c: 0420       movs      r0, #4
08002c5e: fdf7c9ff   bl        #0x8000bf4
08002c62: 3548       ldr       r0, [pc, #0xd4] ; literal 0x20000044
08002c64: 0068       ldr       r0, [r0]
08002c66: 0128       cmp       r0, #1
08002c68: 05d1       bne       #0x8002c76
08002c6a: fff7f7fa   bl        #0x800225c
08002c6e: fff78df8   bl        #0x8001d8c
08002c72: 00f09df8   bl        #0x8002db0
08002c76: 0020       movs      r0, #0
08002c78: 2f49       ldr       r1, [pc, #0xbc] ; literal 0x20000044
08002c7a: 0860       str       r0, [r1]
08002c7c: 2e48       ldr       r0, [pc, #0xb8] ; literal 0x20000044
08002c7e: 0068       ldr       r0, [r0]
08002c80: 78b9       cbnz      r0, #0x8002ca2
08002c82: 3148       ldr       r0, [pc, #0xc4] ; literal 0x2000009c
08002c84: 0068       ldr       r0, [r0]
08002c86: b0f5fa6f   cmp.w     r0, #0x7d0
08002c8a: 0ad3       blo       #0x8002ca2
08002c8c: fff7e6fa   bl        #0x800225c
08002c90: fff77cf8   bl        #0x8001d8c
08002c94: 00e0       b         #0x8002c98
08002c96: 05e0       b         #0x8002ca4
08002c98: 00f08af8   bl        #0x8002db0
08002c9c: 0020       movs      r0, #0
08002c9e: 2749       ldr       r1, [pc, #0x9c] ; literal 0x200000a0
08002ca0: 0870       strb      r0, [r1]
08002ca2: 44e0       b         #0x8002d2e
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
08002d2c: 0860       str       r0, [r1]
08002d2e: 2ce7       b         #0x8002b8a
08002d30: 00d0       beq       #0x8002d34
08002d32: 0308       lsrs      r3, r0, #0x20
08002d34: 55aa       add       r2, sp, #0x154
08002d36: aa55       strb      r2, [r5, r6]
08002d38: 4400       lsls      r4, r0, #1
08002d3a: 0020       movs      r0, #0
08002d3c: a000       lsls      r0, r4, #2
08002d3e: 0020       movs      r0, #0
08002d40: 0005       lsls      r0, r0, #0x14
08002d42: 0020       movs      r0, #0
08002d44: 8000       lsls      r0, r0, #2
08002d46: 0020       movs      r0, #0
08002d48: 9c00       lsls      r4, r3, #2
08002d4a: 0020       movs      r0, #0
08002d4c: 00d8       bhi       #0x8002d50
08002d4e: 0308       lsrs      r3, r0, #0x20
08002d50: 9056       ldrsb     r0, [r2, r2]
08002d52: 6328       cmp       r0, #0x63
08002d54: 0040       ands      r0, r0
08002d56: 0008       lsrs      r0, r0, #0x20
08002d58: 0000       movs      r0, r0
08002d5a: fe2f       cmp       r7, #0xfe
08002d5c: 0080       strh      r0, [r0]
08002d5e: 0008       lsrs      r0, r0, #0x20

# range 0x80043d6 .. 0x8004580
080043d6: 00f015fa   bl        #0x8004804
080043da: 4ff48041   mov.w     r1, #0x4000
080043de: 4803       lsls      r0, r1, #0xd
080043e0: 01f026fb   bl        #0x8005a30
080043e4: 4ff44070   mov.w     r0, #0x300
080043e8: 01f018fb   bl        #0x8005a1c
080043ec: fff7caff   bl        #0x8004384
080043f0: 00f0c6f8   bl        #0x8004580
080043f4: 00f00af9   bl        #0x800460c
080043f8: 4ff4e130   mov.w     r0, #0x1c200
080043fc: 00f018fe   bl        #0x8005030
08004400: 0121       movs      r1, #1
08004402: 5248       ldr       r0, [pc, #0x148] ; literal 0x300200
08004404: 01f09cfa   bl        #0x8005940
08004408: dff844a1   ldr.w     sl, [pc, #0x144] ; literal 0x20000041
0800440c: dff844b1   ldr.w     fp, [pc, #0x144] ; literal 0x927c0
08004410: 0126       movs      r6, #1
08004412: 514c       ldr       r4, [pc, #0x144] ; literal 0x42218000
08004414: 514f       ldr       r7, [pc, #0x144] ; literal 0x20000044
08004416: dff84891   ldr.w     sb, [pc, #0x148] ; literal 0x20000014
0800441a: 0025       movs      r5, #0
0800441c: 44f62068   movw      r8, #0x4e20
08004420: d9f80010   ldr.w     r1, [sb]
08004424: 4846       mov       r0, sb
08004426: 491c       adds      r1, r1, #1
08004428: c9f80010   str.w     r1, [sb]
0800442c: 9af80020   ldrb.w    r2, [sl]
08004430: 1ab3       cbz       r2, #0x800447a
08004432: b1fbfbf3   udiv      r3, r1, fp
08004436: 0bfb1311   mls       r1, fp, r3, r1
0800443a: 81b3       cbz       r1, #0x800449e
0800443c: 494a       ldr       r2, [pc, #0x124] ; literal 0x493e0
0800443e: 9142       cmp       r1, r2
08004440: 04d1       bne       #0x800444c
08004442: 00bf       nop       
08004444: c4f89051   str.w     r5, [r4, #0x190]
08004448: c4f89461   str.w     r6, [r4, #0x194]
0800444c: 3978       ldrb      r1, [r7]
0800444e: 51b1       cbz       r1, #0x8004466
08004450: c4f8ac61   str.w     r6, [r4, #0x1ac]
08004454: 00bf       nop       
08004456: 4349       ldr       r1, [pc, #0x10c] ; literal 0x493e0
08004458: 891e       subs      r1, r1, #2
0800445a: 00bf       nop       
0800445c: 491e       subs      r1, r1, #1
0800445e: fcd2       bhs       #0x800445a
08004460: c4f8ac51   str.w     r5, [r4, #0x1ac]
08004464: 3d70       strb      r5, [r7]
08004466: 4049       ldr       r1, [pc, #0x100] ; literal 0x20000040
08004468: 0978       ldrb      r1, [r1]
0800446a: 89b3       cbz       r1, #0x80044d0
0800446c: 4168       ldr       r1, [r0, #4]
0800446e: 4145       cmp       r1, r8
08004470: 3ed8       bhi       #0x80044f0
08004472: 491c       adds      r1, r1, #1
08004474: c9f80410   str.w     r1, [sb, #4]
08004478: d2e7       b         #0x8004420
0800447a: 3c4a       ldr       r2, [pc, #0xf0] ; literal 0x20000043
0800447c: 1278       ldrb      r2, [r2]
0800447e: 5f2a       cmp       r2, #0x5f
08004480: 0ed2       bhs       #0x80044a0
08004482: 3b4a       ldr       r2, [pc, #0xec] ; literal 0x30d40
08004484: b1fbf2f3   udiv      r3, r1, r2
08004488: 02fb1311   mls       r1, r2, r3, r1
0800448c: 11b9       cbnz      r1, #0x8004494
0800448e: c4f89061   str.w     r6, [r4, #0x190]
08004492: d9e7       b         #0x8004448
08004494: 374a       ldr       r2, [pc, #0xdc] ; literal 0x186a0
08004496: 13e0       b         #0x80044c0
08004498: c4f89051   str.w     r5, [r4, #0x190]
0800449c: 15e0       b         #0x80044ca
0800449e: 12e0       b         #0x80044c6
080044a0: f52a       cmp       r2, #0xf5
080044a2: 07d2       bhs       #0x80044b4
080044a4: 324a       ldr       r2, [pc, #0xc8] ; literal 0x30d40
080044a6: b1fbf2f3   udiv      r3, r1, r2
080044aa: 02fb1311   mls       r1, r2, r3, r1
080044ae: 0029       cmp       r1, #0
080044b0: c8d0       beq       #0x8004444
080044b2: efe7       b         #0x8004494
080044b4: b1fbfbf3   udiv      r3, r1, fp
080044b8: 0bfb1311   mls       r1, fp, r3, r1
080044bc: 19b1       cbz       r1, #0x80044c6
080044be: 294a       ldr       r2, [pc, #0xa4] ; literal 0x493e0
080044c0: 9142       cmp       r1, r2
080044c2: e9d0       beq       #0x8004498
080044c4: c2e7       b         #0x800444c
080044c6: c4f89061   str.w     r6, [r4, #0x190]
080044ca: c4f89451   str.w     r5, [r4, #0x194]
080044ce: bde7       b         #0x800444c
080044d0: ffe7       b         #0x80044d2
080044d2: 2949       ldr       r1, [pc, #0xa4] ; literal 0x2000003e
080044d4: 0978       ldrb      r1, [r1]
080044d6: 0029       cmp       r1, #0
080044d8: a2d0       beq       #0x8004420
080044da: 8168       ldr       r1, [r0, #8]
080044dc: 4145       cmp       r1, r8
080044de: 19d9       bls       #0x8004514
080044e0: 00f0fcfb   bl        #0x8004cdc
080044e4: 0028       cmp       r0, #0
080044e6: 9bd0       beq       #0x8004420
080044e8: 00f0c3f9   bl        #0x8004872
080044ec: 0028       cmp       r0, #0
080044ee: 97d0       beq       #0x8004420
080044f0: 0021       movs      r1, #0
080044f2: 4ff08040   mov.w     r0, #0x40000000
080044f6: 01f099fb   bl        #0x8005c2c
080044fa: 0121       movs      r1, #1
080044fc: 0022       movs      r2, #0
080044fe: 8807       lsls      r0, r1, #0x1e
08004500: 01f09dfb   bl        #0x8005c3e
08004504: 4ff08041   mov.w     r1, #0x40000000
08004508: 4ff6fe70   movw      r0, #0xfffe
0800450c: 0882       strh      r0, [r1, #0x10]
0800450e: 00f0dbfb   bl        #0x8004cc8
08004512: 85e7       b         #0x8004420
08004514: 491c       adds      r1, r1, #1
08004516: c9f80810   str.w     r1, [sb, #8]
0800451a: 81e7       b         #0x8004420
0800451c: 1748       ldr       r0, [pc, #0x5c] ; literal 0x1ffff7e8
0800451e: 1049       ldr       r1, [pc, #0x40] ; literal 0x20000014
08004520: 0068       ldr       r0, [r0]
08004522: 164a       ldr       r2, [pc, #0x58] ; literal 0x1ffff7e8
08004524: 121d       adds      r2, r2, #4
08004526: 1268       ldr       r2, [r2]
08004528: 1044       add       r0, r2
0800452a: 144a       ldr       r2, [pc, #0x50] ; literal 0x1ffff7e8
0800452c: 0832       adds      r2, #8
0800452e: 1268       ldr       r2, [r2]
08004530: 1044       add       r0, r2
08004532: c860       str       r0, [r1, #0xc]
08004534: 7047       bx        lr
08004536: 1148       ldr       r0, [pc, #0x44] ; literal 0x1ffff7e8
08004538: 0838       subs      r0, #8
0800453a: 0088       ldrh      r0, [r0]
0800453c: 8028       cmp       r0, #0x80
0800453e: 02d9       bls       #0x8004546
08004540: 4ff40060   mov.w     r0, #0x800
08004544: 7047       bx        lr
08004546: 4ff48060   mov.w     r0, #0x400
0800454a: 7047       bx        lr
0800454c: 0002       lsls      r0, r0, #8
0800454e: 3000       movs      r0, r6
08004550: 4100       lsls      r1, r0, #1
08004552: 0020       movs      r0, #0
08004554: c027       movs      r7, #0xc0
08004556: 0900       movs      r1, r1
08004558: 0080       strh      r0, [r0]
0800455a: 2142       tst       r1, r4
0800455c: 4400       lsls      r4, r0, #1
0800455e: 0020       movs      r0, #0
08004560: 1400       movs      r4, r2
08004562: 0020       movs      r0, #0
08004564: e093       str       r3, [sp, #0x380]
08004566: 0400       movs      r4, r0
08004568: 4000       lsls      r0, r0, #1
0800456a: 0020       movs      r0, #0
0800456c: 4300       lsls      r3, r0, #1
0800456e: 0020       movs      r0, #0
08004570: 400d       lsrs      r0, r0, #0x15
08004572: 0300       movs      r3, r0
08004574: a086       strh      r0, [r4, #0x34]
08004576: 0100       movs      r1, r0
08004578: 3e00       movs      r6, r7
0800457a: 0020       movs      r0, #0

# range 0x8004732 .. 0x80049b4
08004732: fcb5       push      {r2, r3, r4, r5, r6, r7, lr}
08004734: 9548       ldr       r0, [pc, #0x254] ; literal 0x127b7bb9
08004736: 0190       str       r0, [sp, #4]
08004738: 9548       ldr       r0, [pc, #0x254] ; literal 0x1ffff7e8
0800473a: 0025       movs      r5, #0
0800473c: 0090       str       r0, [sp]
0800473e: 0268       ldr       r2, [r0]
08004740: 2946       mov       r1, r5
08004742: 2f46       mov       r7, r5
08004744: 934e       ldr       r6, [pc, #0x24c] ; literal 0x20000028
08004746: b260       str       r2, [r6, #8]
08004748: 4468       ldr       r4, [r0, #4]
0800474a: f460       str       r4, [r6, #0xc]
0800474c: 8368       ldr       r3, [r0, #8]
0800474e: 9248       ldr       r0, [pc, #0x248] ; literal 0x20000084
08004750: 3361       str       r3, [r6, #0x10]
08004752: 0646       mov       r6, r0
08004754: 4755       strb      r7, [r0, r5]
08004756: 6d1c       adds      r5, r5, #1
08004758: edb2       uxtb      r5, r5
0800475a: 0c2d       cmp       r5, #0xc
0800475c: f9d3       blo       #0x8004752
0800475e: a2b1       cbz       r2, #0x800478a
08004760: 0270       strb      r2, [r0]
08004762: 150a       lsrs      r5, r2, #8
08004764: 4570       strb      r5, [r0, #1]
08004766: 150c       lsrs      r5, r2, #0x10
08004768: 8570       strb      r5, [r0, #2]
0800476a: 120e       lsrs      r2, r2, #0x18
0800476c: c270       strb      r2, [r0, #3]
0800476e: 0471       strb      r4, [r0, #4]
08004770: 220a       lsrs      r2, r4, #8
08004772: 4271       strb      r2, [r0, #5]
08004774: 220c       lsrs      r2, r4, #0x10
08004776: 8271       strb      r2, [r0, #6]
08004778: 220e       lsrs      r2, r4, #0x18
0800477a: c271       strb      r2, [r0, #7]
0800477c: 0372       strb      r3, [r0, #8]
0800477e: 1a0a       lsrs      r2, r3, #8
08004780: 4272       strb      r2, [r0, #9]
08004782: 1a0c       lsrs      r2, r3, #0x10
08004784: 8272       strb      r2, [r0, #0xa]
08004786: 1a0e       lsrs      r2, r3, #0x18
08004788: f272       strb      r2, [r6, #0xb]
0800478a: 0022       movs      r2, #0
0800478c: 43f29260   movw      r0, #0x3692
08004790: b35c       ldrb      r3, [r6, r2]
08004792: 521c       adds      r2, r2, #1
08004794: 1944       add       r1, r3
08004796: 89b2       uxth      r1, r1
08004798: 4140       eors      r1, r0
0800479a: d2b2       uxtb      r2, r2
0800479c: 0c2a       cmp       r2, #0xc
0800479e: f7d3       blo       #0x8004790
080047a0: 43f25612   movw      r2, #0x3156
080047a4: 5140       eors      r1, r2
080047a6: 0844       add       r0, r1
080047a8: 80b2       uxth      r0, r0
080047aa: fcbd       pop       {r2, r3, r4, r5, r6, r7, pc}
080047ac: 08b5       push      {r3, lr}
080047ae: 7748       ldr       r0, [pc, #0x1dc] ; literal 0x127b7bb9
080047b0: 7a48       ldr       r0, [pc, #0x1e8] ; literal 0x8005300
080047b2: 0090       str       r0, [sp]
080047b4: 01f02ef8   bl        #0x8005814
080047b8: 0021       movs      r1, #0
080047ba: 0098       ldr       r0, [sp]
080047bc: 00f0b6ff   bl        #0x800572c
080047c0: bde80840   pop.w     {r3, lr}
080047c4: 00f09ebf   b.w       #0x8005704
080047c8: 1cb5       push      {r2, r3, r4, lr}
080047ca: 7048       ldr       r0, [pc, #0x1c0] ; literal 0x127b7bb9
080047cc: 0090       str       r0, [sp]
080047ce: 7348       ldr       r0, [pc, #0x1cc] ; literal 0x8005300
080047d0: 001d       adds      r0, r0, #4
080047d2: 0190       str       r0, [sp, #4]
080047d4: fff774ff   bl        #0x80046c0
080047d8: 0446       mov       r4, r0
080047da: 01f01bf8   bl        #0x8005814
080047de: 2146       mov       r1, r4
080047e0: 0198       ldr       r0, [sp, #4]
080047e2: 00f0a3ff   bl        #0x800572c
080047e6: 0198       ldr       r0, [sp, #4]
080047e8: 0468       ldr       r4, [r0]
080047ea: fff769ff   bl        #0x80046c0
080047ee: a042       cmp       r0, r4
080047f0: 05d1       bne       #0x80047fe
080047f2: fff7dbff   bl        #0x80047ac
080047f6: bde81c40   pop.w     {r2, r3, r4, lr}
080047fa: 00f083bf   b.w       #0x8005704
080047fe: 00f081ff   bl        #0x8005704
08004802: fee7       b         #0x8004802
08004804: 38b5       push      {r3, r4, r5, lr}
08004806: 6548       ldr       r0, [pc, #0x194] ; literal 0x8005300
08004808: 0090       str       r0, [sp]
0800480a: 6148       ldr       r0, [pc, #0x184] ; literal 0x1ffff7e8
0800480c: 5f49       ldr       r1, [pc, #0x17c] ; literal 0x127b7bb9
0800480e: 0838       subs      r0, #8
08004810: 0088       ldrh      r0, [r0]
08004812: 80b2       uxth      r0, r0
08004814: b0f5807f   cmp.w     r0, #0x100
08004818: 00d0       beq       #0x800481c
0800481a: fee7       b         #0x800481a
0800481c: 0098       ldr       r0, [sp]
0800481e: 0068       ldr       r0, [r0]
08004820: 20b1       cbz       r0, #0x800482c
08004822: 8047       blx       r0
08004824: 5b49       ldr       r1, [pc, #0x16c] ; literal 0x20000028
08004826: 0120       movs      r0, #1
08004828: 0870       strb      r0, [r1]
0800482a: 38bd       pop       {r3, r4, r5, pc}
0800482c: 5b48       ldr       r0, [pc, #0x16c] ; literal 0x8005300
0800482e: 43f25611   movw      r1, #0x3156
08004832: 001d       adds      r0, r0, #4
08004834: 0090       str       r0, [sp]
08004836: 0088       ldrh      r0, [r0]
08004838: 4840       eors      r0, r1
0800483a: 43f29261   movw      r1, #0x3692
0800483e: 0844       add       r0, r1
08004840: 84b2       uxth      r4, r0
08004842: fff776ff   bl        #0x8004732
08004846: a042       cmp       r0, r4
08004848: efd0       beq       #0x800482a
0800484a: fee7       b         #0x800484a
0800484c: 18b5       push      {r3, r4, lr}
0800484e: 4f48       ldr       r0, [pc, #0x13c] ; literal 0x127b7bb9
08004850: 5248       ldr       r0, [pc, #0x148] ; literal 0x8005300
08004852: 43f25611   movw      r1, #0x3156
08004856: 001d       adds      r0, r0, #4
08004858: 0090       str       r0, [sp]
0800485a: 0088       ldrh      r0, [r0]
0800485c: 4840       eors      r0, r1
0800485e: 43f29261   movw      r1, #0x3692
08004862: 0844       add       r0, r1
08004864: 84b2       uxth      r4, r0
08004866: fff764ff   bl        #0x8004732
0800486a: a042       cmp       r0, r4
0800486c: 00d0       beq       #0x8004870
0800486e: fee7       b         #0x800486e
08004870: 18bd       pop       {r3, r4, pc}
08004872: 18b5       push      {r3, r4, lr}
08004874: 4548       ldr       r0, [pc, #0x114] ; literal 0x127b7bb9
08004876: 4a48       ldr       r0, [pc, #0x128] ; literal 0x8008304
08004878: 0090       str       r0, [sp]
0800487a: 4648       ldr       r0, [pc, #0x118] ; literal 0x20000028
0800487c: 0078       ldrb      r0, [r0]
0800487e: 60b9       cbnz      r0, #0x800489a
08004880: 0098       ldr       r0, [sp]
08004882: 43f25611   movw      r1, #0x3156
08004886: 0088       ldrh      r0, [r0]
08004888: 4840       eors      r0, r1
0800488a: 43f29261   movw      r1, #0x3692
0800488e: 0844       add       r0, r1
08004890: 84b2       uxth      r4, r0
08004892: fff74eff   bl        #0x8004732
08004896: a042       cmp       r0, r4
08004898: 01d1       bne       #0x800489e
0800489a: 0120       movs      r0, #1
0800489c: 18bd       pop       {r3, r4, pc}
0800489e: 0020       movs      r0, #0
080048a0: 18bd       pop       {r3, r4, pc}
080048a2: 38b5       push      {r3, r4, r5, lr}
080048a4: 3d48       ldr       r0, [pc, #0xf4] ; literal 0x8005300
080048a6: 394a       ldr       r2, [pc, #0xe4] ; literal 0x127b7bb9
080048a8: 001d       adds      r0, r0, #4
080048aa: 0092       str       r2, [sp]
080048ac: 3949       ldr       r1, [pc, #0xe4] ; literal 0x20000028
080048ae: 0088       ldrh      r0, [r0]
080048b0: 43f25613   movw      r3, #0x3156
080048b4: 5840       eors      r0, r3
080048b6: 43f29264   movw      r4, #0x3692
080048ba: 4d88       ldrh      r5, [r1, #2]
080048bc: 2044       add       r0, r4
080048be: 0544       add       r5, r0
080048c0: 3748       ldr       r0, [pc, #0xdc] ; literal 0x8008304
080048c2: 0090       str       r0, [sp]
080048c4: 0088       ldrh      r0, [r0]
080048c6: 5840       eors      r0, r3
080048c8: 2044       add       r0, r4
080048ca: 2844       add       r0, r5
080048cc: 4880       strh      r0, [r1, #2]
080048ce: ca88       ldrh      r2, [r1, #6]
080048d0: 1044       add       r0, r2
080048d2: c880       strh      r0, [r1, #6]
080048d4: 38bd       pop       {r3, r4, r5, pc}
080048d6: 10b5       push      {r4, lr}
080048d8: fff72bff   bl        #0x8004732
080048dc: 2d4c       ldr       r4, [pc, #0xb4] ; literal 0x20000028
080048de: a188       ldrh      r1, [r4, #4]
080048e0: 0844       add       r0, r1
080048e2: a080       strh      r0, [r4, #4]
080048e4: fff725ff   bl        #0x8004732
080048e8: a188       ldrh      r1, [r4, #4]
080048ea: 0844       add       r0, r1
080048ec: a080       strh      r0, [r4, #4]
080048ee: e188       ldrh      r1, [r4, #6]
080048f0: 081a       subs      r0, r1, r0
080048f2: e080       strh      r0, [r4, #6]
080048f4: 10bd       pop       {r4, pc}
080048f6: 10b5       push      {r4, lr}
080048f8: 00f0fafe   bl        #0x80056f0
080048fc: 0028       cmp       r0, #0
080048fe: 08d1       bne       #0x8004912
08004900: 00f088ff   bl        #0x8005814
08004904: 0120       movs      r0, #1
08004906: 00f035ff   bl        #0x8005774
0800490a: bde81040   pop.w     {r4, lr}
0800490e: 00f0f9be   b.w       #0x8005704
08004912: 10bd       pop       {r4, pc}
08004914: 10b5       push      {r4, lr}
08004916: 00f07dff   bl        #0x8005814
0800491a: 2148       ldr       r0, [pc, #0x84] ; literal 0x8008304
0800491c: 2149       ldr       r1, [pc, #0x84] ; literal 0xfee1b00f
0800491e: 0830       adds      r0, #8
08004920: 00f004ff   bl        #0x800572c
08004924: bde81040   pop.w     {r4, lr}
08004928: 00f0ecbe   b.w       #0x8005704
0800492c: 1c48       ldr       r0, [pc, #0x70] ; literal 0x8008304
0800492e: 1d49       ldr       r1, [pc, #0x74] ; literal 0xfee1b00f
08004930: 0830       adds      r0, #8
08004932: 0068       ldr       r0, [r0]
08004934: 8842       cmp       r0, r1
08004936: 01d1       bne       #0x800493c
08004938: 0020       movs      r0, #0
0800493a: 7047       bx        lr
0800493c: 0120       movs      r0, #1
0800493e: 7047       bx        lr
08004940: 1648       ldr       r0, [pc, #0x58] ; literal 0x8005300
08004942: 10b5       push      {r4, lr}
08004944: 0830       adds      r0, #8
08004946: 1849       ldr       r1, [pc, #0x60] ; literal 0x1010602
08004948: 0068       ldr       r0, [r0]
0800494a: 8842       cmp       r0, r1
0800494c: 07d8       bhi       #0x800495e
0800494e: 00f061ff   bl        #0x8005814
08004952: 0021       movs      r1, #0
08004954: 1248       ldr       r0, [pc, #0x48] ; literal 0x8008304
08004956: 00f0e9fe   bl        #0x800572c
0800495a: 00f0d3fe   bl        #0x8005704
0800495e: 0020       movs      r0, #0
08004960: 10bd       pop       {r4, pc}
08004962: 10b5       push      {r4, lr}
08004964: 00f056ff   bl        #0x8005814
08004968: 1049       ldr       r1, [pc, #0x40] ; literal 0x28635690
0800496a: 1148       ldr       r0, [pc, #0x44] ; literal 0x803d800
0800496c: 00f0defe   bl        #0x800572c
08004970: 00f0c8fe   bl        #0x8005704
08004974: 0020       movs      r0, #0
08004976: 10bd       pop       {r4, pc}
08004978: 10b5       push      {r4, lr}
0800497a: 00f04bff   bl        #0x8005814
0800497e: 0c48       ldr       r0, [pc, #0x30] ; literal 0x803d800
08004980: 00f096fe   bl        #0x80056b0
08004984: 00f0befe   bl        #0x8005704
08004988: 0020       movs      r0, #0
0800498a: 10bd       pop       {r4, pc}
0800498c: b97b       ldrb      r1, [r7, #0xe]
0800498e: 7b12       asrs      r3, r7, #9

# range 0x8004a12 .. 0x8004abe
08004a12: 70b5       push      {r4, r5, r6, lr}
08004a14: 524c       ldr       r4, [pc, #0x148] ; literal 0x2000003c
08004a16: 2278       ldrb      r2, [r4]
08004a18: 8ab1       cbz       r2, #0x8004a3e
08004a1a: 0025       movs      r5, #0
08004a1c: 012a       cmp       r2, #1
08004a1e: 12d0       beq       #0x8004a46
08004a20: 5049       ldr       r1, [pc, #0x140] ; literal 0x20000090
08004a22: 022a       cmp       r2, #2
08004a24: 16d0       beq       #0x8004a54
08004a26: 2346       mov       r3, r4
08004a28: 0e78       ldrb      r6, [r1]
08004a2a: 1b78       ldrb      r3, [r3]
08004a2c: 761c       adds      r6, r6, #1
08004a2e: 5b1c       adds      r3, r3, #1
08004a30: dbb2       uxtb      r3, r3
08004a32: 9642       cmp       r6, r2
08004a34: 13d9       bls       #0x8004a5e
08004a36: 1144       add       r1, r2
08004a38: 01f8020c   strb      r0, [r1, #-0x2]
08004a3c: 12e0       b         #0x8004a64
08004a3e: 5528       cmp       r0, #0x55
08004a40: 05d1       bne       #0x8004a4e
08004a42: 0120       movs      r0, #1
08004a44: 02e0       b         #0x8004a4c
08004a46: aa28       cmp       r0, #0xaa
08004a48: 02d1       bne       #0x8004a50
08004a4a: 0220       movs      r0, #2
08004a4c: 2070       strb      r0, [r4]
08004a4e: 70bd       pop       {r4, r5, r6, pc}
08004a50: 2570       strb      r5, [r4]
08004a52: 70bd       pop       {r4, r5, r6, pc}
08004a54: 2d28       cmp       r0, #0x2d
08004a56: fbd2       bhs       #0x8004a50
08004a58: 0870       strb      r0, [r1]
08004a5a: 0320       movs      r0, #3
08004a5c: f6e7       b         #0x8004a4c
08004a5e: 03d1       bne       #0x8004a68
08004a60: 81f82b00   strb.w    r0, [r1, #0x2b]
08004a64: 2370       strb      r3, [r4]
08004a66: 70bd       pop       {r4, r5, r6, pc}
08004a68: 81f82c00   strb.w    r0, [r1, #0x2c]
08004a6c: 3d48       ldr       r0, [pc, #0xf4] ; literal 0x20000090
08004a6e: fff7a1ff   bl        #0x80049b4
08004a72: 0128       cmp       r0, #1
08004a74: ecd1       bne       #0x8004a50
08004a76: 3b49       ldr       r1, [pc, #0xec] ; literal 0x20000090
08004a78: 3b48       ldr       r0, [pc, #0xec] ; literal 0x20000058
08004a7a: 00f0ebf8   bl        #0x8004c54
08004a7e: e7e7       b         #0x8004a50
08004a80: 70b5       push      {r4, r5, r6, lr}
08004a82: 0346       mov       r3, r0
08004a84: 0078       ldrb      r0, [r0]
08004a86: 08b1       cbz       r0, #0x8004a8c
08004a88: 2d28       cmp       r0, #0x2d
08004a8a: 01d9       bls       #0x8004a90
08004a8c: 0020       movs      r0, #0
08004a8e: 70bd       pop       {r4, r5, r6, pc}
08004a90: 5522       movs      r2, #0x55
08004a92: 0a70       strb      r2, [r1]
08004a94: aa22       movs      r2, #0xaa
08004a96: 4a70       strb      r2, [r1, #1]
08004a98: 0022       movs      r2, #0
08004a9a: 8870       strb      r0, [r1, #2]
08004a9c: 841e       subs      r4, r0, #2
08004a9e: 05e0       b         #0x8004aac
08004aa0: 9d18       adds      r5, r3, r2
08004aa2: 8e18       adds      r6, r1, r2
08004aa4: 6d78       ldrb      r5, [r5, #1]
08004aa6: 521c       adds      r2, r2, #1
08004aa8: f570       strb      r5, [r6, #3]
08004aaa: d2b2       uxtb      r2, r2
08004aac: a242       cmp       r2, r4
08004aae: f7db       blt       #0x8004aa0
08004ab0: 0144       add       r1, r0
08004ab2: 13f82b2f   ldrb      r2, [r3, #0x2b]!
08004ab6: 4a70       strb      r2, [r1, #1]
08004ab8: 5a78       ldrb      r2, [r3, #1]
08004aba: 8a70       strb      r2, [r1, #2]
08004abc: 70bd       pop       {r4, r5, r6, pc}

# range 0x8004cc8 .. 0x8004ce8
08004cc8: d248       ldr       r0, [pc, #0x348] ; literal 0x8008000
08004cca: 10b5       push      {r4, lr}
08004ccc: 4468       ldr       r4, [r0, #4]
08004cce: 0068       ldr       r0, [r0]
08004cd0: fff785fa   bl        #0x80041de
08004cd4: a446       mov       ip, r4
08004cd6: bde81040   pop.w     {r4, lr}
08004cda: 6047       bx        ip
08004cdc: cd48       ldr       r0, [pc, #0x334] ; literal 0x8008000
08004cde: 0068       ldr       r0, [r0]
08004ce0: 401c       adds      r0, r0, #1
08004ce2: 00d0       beq       #0x8004ce6
08004ce4: 0120       movs      r0, #1
08004ce6: 7047       bx        lr

# range 0x8005326 .. 0x8005384
08005326: 1548       ldr       r0, [pc, #0x54] ; literal 0x20000064
08005328: 10b5       push      {r4, lr}
0800532a: 0c38       subs      r0, #0xc
0800532c: fff722fc   bl        #0x8004b74
08005330: 0028       cmp       r0, #0
08005332: 22d1       bne       #0x800537a
08005334: 1148       ldr       r0, [pc, #0x44] ; literal 0x20000064
08005336: 1249       ldr       r1, [pc, #0x48] ; literal 0x20001040
08005338: 0c38       subs      r0, #0xc
0800533a: fff7a9fc   bl        #0x8004c90
0800533e: 1048       ldr       r0, [pc, #0x40] ; literal 0x20001040
08005340: 4178       ldrb      r1, [r0, #1]
08005342: d029       cmp       r1, #0xd0
08005344: 06d0       beq       #0x8005354
08005346: d129       cmp       r1, #0xd1
08005348: 17d1       bne       #0x800537a
0800534a: bde81040   pop.w     {r4, lr}
0800534e: 401c       adds      r0, r0, #1
08005350: fff7eabc   b.w       #0x8004d28
08005354: c178       ldrb      r1, [r0, #3]
08005356: 39b1       cbz       r1, #0x8005368
08005358: 0129       cmp       r1, #1
0800535a: 09d0       beq       #0x8005370
0800535c: 0229       cmp       r1, #2
0800535e: 0cd1       bne       #0x800537a
08005360: bde81040   pop.w     {r4, lr}
08005364: fff706be   b.w       #0x8004f74
08005368: bde81040   pop.w     {r4, lr}
0800536c: fff789bd   b.w       #0x8004e82
08005370: bde81040   pop.w     {r4, lr}
08005374: 401c       adds      r0, r0, #1
08005376: fff7abbd   b.w       #0x8004ed0
0800537a: 10bd       pop       {r4, pc}
0800537c: 6400       lsls      r4, r4, #1
0800537e: 0020       movs      r0, #0
08005380: 4010       asrs      r0, r0, #1
08005382: 0020       movs      r0, #0
