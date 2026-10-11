; ADC rank 3 channel 0
0800c40c: 2346       mov       r3, r4
0800c40e: 0322       movs      r2, #3
0800c410: 0021       movs      r1, #0
0800c412: 4748       ldr       r0, [pc, #0x11c] ; [0x800c530] = 0x40012400 
0800c414: fcf737fa   bl        #0x8008886

; DMA configuration (literal pool excluded)
0800c8e0: 00b5       push      {lr}
0800c8e2: 8bb0       sub       sp, #0x2c
0800c8e4: 0121       movs      r1, #1
0800c8e6: 0846       mov       r0, r1
0800c8e8: 02f0e2fa   bl        #0x800eeb0
0800c8ec: 1248       ldr       r0, [pc, #0x48] ; [0x800c938] = 0x40020008 
0800c8ee: fef783f8   bl        #0x800a9f8
0800c8f2: 6846       mov       r0, sp
0800c8f4: fef749f9   bl        #0x800ab8a
0800c8f8: 1048       ldr       r0, [pc, #0x40] ; [0x800c93c] = 0x4001244c 
0800c8fa: 0090       str       r0, [sp]
0800c8fc: 1048       ldr       r0, [pc, #0x40] ; [0x800c940] = 0x200034f0 
0800c8fe: 0190       str       r0, [sp, #4]
0800c900: 0020       movs      r0, #0
0800c902: 0290       str       r0, [sp, #8]
0800c904: 0920       movs      r0, #9
0800c906: 0390       str       r0, [sp, #0xc]
0800c908: 0020       movs      r0, #0
0800c90a: 0490       str       r0, [sp, #0x10]
0800c90c: 8020       movs      r0, #0x80
0800c90e: 0590       str       r0, [sp, #0x14]
0800c910: 4000       lsls      r0, r0, #1
0800c912: 0690       str       r0, [sp, #0x18]
0800c914: 8000       lsls      r0, r0, #2
0800c916: 0790       str       r0, [sp, #0x1c]
0800c918: 2020       movs      r0, #0x20
0800c91a: 0890       str       r0, [sp, #0x20]
0800c91c: 0020       movs      r0, #0
0800c91e: 0990       str       r0, [sp, #0x24]
0800c920: 0a90       str       r0, [sp, #0x28]
0800c922: 6946       mov       r1, sp
0800c924: 0448       ldr       r0, [pc, #0x10] ; [0x800c938] = 0x40020008 
0800c926: fef705f9   bl        #0x800ab34
0800c92a: 0121       movs      r1, #1
0800c92c: 0248       ldr       r0, [pc, #8] ; [0x800c938] = 0x40020008 
0800c92e: fef759f8   bl        #0x800a9e4
0800c932: 0bb0       add       sp, #0x2c
0800c934: 00bd       pop       {pc}

; Current conversion and first filter
0800d978: 2b48       ldr       r0, [pc, #0xac] ; [0x800da28] = 0x200034f0 
0800d97a: 8088       ldrh      r0, [r0, #4]
0800d97c: 2b49       ldr       r1, [pc, #0xac] ; [0x800da2c] = 0x2000037c 
0800d97e: 0988       ldrh      r1, [r1]
0800d980: 09b2       sxth      r1, r1
0800d982: c1eb2010   rsb       r0, r1, r0, asr #4
0800d986: 2621       movs      r1, #0x26
0800d988: 4843       muls      r0, r1, r0
0800d98a: 0a21       movs      r1, #0xa
0800d98c: 90fbf1f0   sdiv      r0, r0, r1
0800d990: 2749       ldr       r1, [pc, #0x9c] ; [0x800da30] = 0x20000324 
0800d992: 0968       ldr       r1, [r1]
0800d994: 01eb0112   add.w     r2, r1, r1, lsl #4
0800d998: 02eb4111   add.w     r1, r2, r1, lsl #5
0800d99c: 0844       add       r0, r1
0800d99e: 3221       movs      r1, #0x32
0800d9a0: 90fbf1f0   sdiv      r0, r0, r1
0800d9a4: 2249       ldr       r1, [pc, #0x88] ; [0x800da30] = 0x20000324 
0800d9a6: 0860       str       r0, [r1]

; BusCurrent second filter
08020ba8: c069       ldr       r0, [r0, #0x1c]
08020baa: 00ebc000   add.w     r0, r0, r0, lsl #3
08020bae: e549       ldr       r1, [pc, #0x394] ; [0x8020f44] = 0x20000324 
08020bb0: 0968       ldr       r1, [r1]
08020bb2: 0844       add       r0, r1
08020bb4: 0a21       movs      r1, #0xa
08020bb6: 90fbf1f0   sdiv      r0, r0, r1
08020bba: e149       ldr       r1, [pc, #0x384] ; [0x8020f40] = 0x200032a8 motionstep
08020bbc: c861       str       r0, [r1, #0x1c]

; BMS field extraction
080141ea: 0828       cmp       r0, #8
080141ec: e0db       blt       #0x80141b0
080141ee: 1798       ldr       r0, [sp, #0x5c]
080141f0: ad30       adds      r0, #0xad
080141f2: 0bf0abf9   bl        #0x801f54c
080141f6: 01b2       sxth      r1, r0
080141f8: 1698       ldr       r0, [sp, #0x58]
080141fa: 00eb4012   add.w     r2, r0, r0, lsl #5
080141fe: 02eb8010   add.w     r0, r2, r0, lsl #6
08014202: d54a       ldr       r2, [pc, #0x354] ; [0x8014558] = 0x20004e24 
08014204: 02ebc000   add.w     r0, r2, r0, lsl #3
08014208: a0f8a212   strh.w    r1, [r0, #0x2a2]
0801420c: 1798       ldr       r0, [sp, #0x5c]
0801420e: b130       adds      r0, #0xb1
08014210: 0bf09cf9   bl        #0x801f54c
08014214: 1699       ldr       r1, [sp, #0x58]
08014216: 01eb4112   add.w     r2, r1, r1, lsl #5
0801421a: 02eb8111   add.w     r1, r2, r1, lsl #6
0801421e: ce4a       ldr       r2, [pc, #0x338] ; [0x8014558] = 0x20004e24 
08014220: 02ebc101   add.w     r1, r2, r1, lsl #3

