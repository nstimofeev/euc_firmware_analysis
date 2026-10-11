0800863c: 1cb5       push      {r2, r3, r4, lr}
0800863e: 1e48       ldr       r0, [pc, #0x78] ; [0x80086b8] = 0x40012800 
08008640: 0068       ldr       r0, [r0]
08008642: 00f00400   and       r0, r0, #4
08008646: 0428       cmp       r0, #4
08008648: 29d1       bne       #0x800869e
0800864a: c043       mvns      r0, r0
0800864c: 1a49       ldr       r1, [pc, #0x68] ; [0x80086b8] = 0x40012800 
0800864e: 0860       str       r0, [r1]
08008650: 03f072ff   bl        #0x800c538
08008654: 1948       ldr       r0, [pc, #0x64] ; [0x80086bc] = 0x20000308 
08008656: 0078       ldrb      r0, [r0]
08008658: 0828       cmp       r0, #8
0800865a: 1ed2       bhs       #0x800869a
0800865c: dfe800f0   tbb       [pc, r0]
08008688: 00bf       nop       
0800868a: 0c48       ldr       r0, [pc, #0x30] ; [0x80086bc] = 0x20000308 
0800868c: 0078       ldrb      r0, [r0]
0800868e: 03f045f9   bl        #0x800b91c
0800b6d4: 07b5       push      {r0, r1, r2, lr}
0800b6d6: 82b0       sub       sp, #8
0800b6d8: 0399       ldr       r1, [sp, #0xc]
0800b6da: 0091       str       r1, [sp]
0800b6dc: 44f6e611   movw      r1, #0x49e6
0800b6e0: 039a       ldr       r2, [sp, #0xc]
0800b6e2: 4a43       muls      r2, r1, r2
0800b6e4: 44f6e613   movw      r3, #0x49e6
0800b6e8: 0499       ldr       r1, [sp, #0x10]
0800b6ea: 5943       muls      r1, r3, r1
0800b6ec: 02eb4101   add.w     r1, r2, r1, lsl #1
0800b6f0: 4942       rsbs      r1, r1, #0
0800b6f2: 47f6ff72   movw      r2, #0x7fff
0800b6f6: 91fbf2f1   sdiv      r1, r1, r2
0800b6fa: 0191       str       r1, [sp, #4]
0800b6fc: dde90012   ldrd      r1, r2, [sp]
0800b700: c0e90012   strd      r1, r2, [r0]
0800b704: 05b0       add       sp, #0x14
0800b706: 00bd       pop       {pc}
0800b708: 3fb5       push      {r0, r1, r2, r3, r4, r5, lr}
0800b70a: 85b0       sub       sp, #0x14
0800b70c: 0446       mov       r4, r0
0800b70e: 1d46       mov       r5, r3
0800b710: 2946       mov       r1, r5
0800b712: 01a8       add       r0, sp, #4
0800b714: fff70af8   bl        #0x800a72c
0800b718: 1248       ldr       r0, [pc, #0x48] ; [0x800b764] = 0x2000038c 
0800b71a: dde90112   ldrd      r1, r2, [sp, #4]
0800b71e: 06c0       stm       r0!, {r1, r2}
0800b720: 1049       ldr       r1, [pc, #0x40] ; [0x800b764] = 0x2000038c 
0800b722: 0698       ldr       r0, [sp, #0x18]
0800b724: 0968       ldr       r1, [r1]
0800b726: 4843       muls      r0, r1, r0
0800b728: 0e4a       ldr       r2, [pc, #0x38] ; [0x800b764] = 0x2000038c 
0800b72a: 0799       ldr       r1, [sp, #0x1c]
0800b72c: 5268       ldr       r2, [r2, #4]
0800b72e: 01fb1200   mls       r0, r1, r2, r0
0800b732: 47f6ff71   movw      r1, #0x7fff
0800b736: 90fbf1f0   sdiv      r0, r0, r1
0800b73a: 0390       str       r0, [sp, #0xc]
0800b73c: 0949       ldr       r1, [pc, #0x24] ; [0x800b764] = 0x2000038c 
0800b73e: 0698       ldr       r0, [sp, #0x18]
0800b740: 4968       ldr       r1, [r1, #4]
0800b742: 4843       muls      r0, r1, r0
0800b744: 074a       ldr       r2, [pc, #0x1c] ; [0x800b764] = 0x2000038c 
0800b746: 0799       ldr       r1, [sp, #0x1c]
0800b748: 1268       ldr       r2, [r2]
0800b74a: 01fb0200   mla       r0, r1, r2, r0
0800b74e: 47f6ff71   movw      r1, #0x7fff
0800b752: 90fbf1f0   sdiv      r0, r0, r1
0800b756: 0490       str       r0, [sp, #0x10]
0800b758: dde90301   ldrd      r0, r1, [sp, #0xc]
0800b75c: c4e90001   strd      r0, r1, [r4]
0800b760: 09b0       add       sp, #0x24
0800b762: 30bd       pop       {r4, r5, pc}
0800b91c: 7fb5       push      {r0, r1, r2, r3, r4, r5, r6, lr}
0800b91e: 0446       mov       r4, r0
0800b920: 6846       mov       r0, sp
0800b922: 00f01dfe   bl        #0x800c560
0800b926: 7448       ldr       r0, [pc, #0x1d0] ; [0x800baf8] = 0x20003488 IA
0800b928: dde90012   ldrd      r1, r2, [sp]
0800b92c: 06c0       stm       r0!, {r1, r2}
0800b92e: 0838       subs      r0, #8
0800b930: 06c8       ldm       r0!, {r1, r2}
0800b932: 6846       mov       r0, sp
0800b934: fff7cefe   bl        #0x800b6d4
0800b938: 6f48       ldr       r0, [pc, #0x1bc] ; [0x800baf8] = 0x20003488 IA
0800b93a: dde90012   ldrd      r1, r2, [sp]
0800b93e: c0e90412   strd      r1, r2, [r0, #0x10]
0800b998: dde90001   ldrd      r0, r1, [sp]
0800b99c: cde90201   strd      r0, r1, [sp, #8]
0800b9a0: 5548       ldr       r0, [pc, #0x154] ; [0x800baf8] = 0x20003488 IA
0800b9a2: 0299       ldr       r1, [sp, #8]
0800b9a4: 8069       ldr       r0, [r0, #0x18]
0800b9a6: 00f6b830   addw      r0, r0, #0xbb8
0800b9aa: 8142       cmp       r1, r0
0800b9ac: 06dd       ble       #0x800b9bc
0800b9bc: 4e48       ldr       r0, [pc, #0x138] ; [0x800baf8] = 0x20003488 IA
0800b9be: 0299       ldr       r1, [sp, #8]
0800b9c0: 8069       ldr       r0, [r0, #0x18]
0800b9c2: a0f6b830   subw      r0, r0, #0xbb8
0800b9c6: 8142       cmp       r1, r0
0800b9c8: 06da       bge       #0x800b9d8
0800b9ca: 4b48       ldr       r0, [pc, #0x12c] ; [0x800baf8] = 0x20003488 IA
0800b9cc: 8069       ldr       r0, [r0, #0x18]
0800b9ce: a0f6b830   subw      r0, r0, #0xbb8
0800b9d2: 4949       ldr       r1, [pc, #0x124] ; [0x800baf8] = 0x20003488 IA
0800b9d4: 8861       str       r0, [r1, #0x18]
0800b9d6: 02e0       b         #0x800b9de
0800b9d8: 4749       ldr       r1, [pc, #0x11c] ; [0x800baf8] = 0x20003488 IA
0800b9da: 0298       ldr       r0, [sp, #8]
0800b9dc: 8861       str       r0, [r1, #0x18]
0800b9de: 4648       ldr       r0, [pc, #0x118] ; [0x800baf8] = 0x20003488 IA
0800b9e0: 0399       ldr       r1, [sp, #0xc]
0800b9e2: c069       ldr       r0, [r0, #0x1c]
0800b9e4: 00f6b830   addw      r0, r0, #0xbb8
0800b9e8: 8142       cmp       r1, r0
0800b9ea: 06dd       ble       #0x800b9fa
0800b9ec: 4248       ldr       r0, [pc, #0x108] ; [0x800baf8] = 0x20003488 IA
0800b9ee: c069       ldr       r0, [r0, #0x1c]
0800b9f0: 00f6b830   addw      r0, r0, #0xbb8
0800b9f4: 4049       ldr       r1, [pc, #0x100] ; [0x800baf8] = 0x20003488 IA
0800b9f6: c861       str       r0, [r1, #0x1c]
0800b9f8: 10e0       b         #0x800ba1c
0800b9fa: 3f48       ldr       r0, [pc, #0xfc] ; [0x800baf8] = 0x20003488 IA
0800b9fc: 0399       ldr       r1, [sp, #0xc]
0800b9fe: c069       ldr       r0, [r0, #0x1c]
0800ba00: a0f6b830   subw      r0, r0, #0xbb8
0800ba04: 8142       cmp       r1, r0
0800ba06: 06da       bge       #0x800ba16
0800ba16: 3848       ldr       r0, [pc, #0xe0] ; [0x800baf8] = 0x20003488 IA
0800ba18: 0399       ldr       r1, [sp, #0xc]
0800ba1a: c161       str       r1, [r0, #0x1c]
0800bb24: 10b5       push      {r4, lr}
0800bb26: 1148       ldr       r0, [pc, #0x44] ; [0x800bb6c] = 0x80270ac 
0800bb28: 0068       ldr       r0, [r0]
0800bb2a: c003       lsls      r0, r0, #0xf
0800bb2c: 1049       ldr       r1, [pc, #0x40] ; [0x800bb70] = 0x200034d8 
0800bb2e: 0860       str       r0, [r1]
0800bb30: 0e48       ldr       r0, [pc, #0x38] ; [0x800bb6c] = 0x80270ac 
0800bb32: 4068       ldr       r0, [r0, #4]
0800bb34: c003       lsls      r0, r0, #0xf
0800bb36: 4860       str       r0, [r1, #4]
0800bb38: 0c48       ldr       r0, [pc, #0x30] ; [0x800bb6c] = 0x80270ac 
0800bb3a: 8068       ldr       r0, [r0, #8]
0800bb3c: c003       lsls      r0, r0, #0xf
0800bb3e: 8860       str       r0, [r1, #8]
0800c560: 0cb5       push      {r2, r3, lr}
0800c562: 0146       mov       r1, r0
0800c564: 0022       movs      r2, #0
0800c566: 0092       str       r2, [sp]
0800c568: 0192       str       r2, [sp, #4]
0800c56a: 4d4a       ldr       r2, [pc, #0x134] ; [0x800c6a0] = 0x20000378 
0800c56c: 1278       ldrb      r2, [r2]
0800c56e: 072a       cmp       r2, #7
0800c570: 71d2       bhs       #0x800c656
0800c572: dfe802f0   tbb       [pc, r2]
0800c580: 484a       ldr       r2, [pc, #0x120] ; [0x800c6a4] = 0x200034e4 
0800c582: 1268       ldr       r2, [r2]
0800c584: 484b       ldr       r3, [pc, #0x120] ; [0x800c6a8] = 0x4001283c 
0800c586: 1b68       ldr       r3, [r3]
0800c588: a2eb4300   sub.w     r0, r2, r3, lsl #1
0800c58c: 10f5004f   cmn.w     r0, #0x8000
0800c590: 02da       bge       #0x800c598
0800c598: b0f5004f   cmp.w     r0, #0x8000
0800c59c: 03db       blt       #0x800c5a6
0800c59e: 47f6ff72   movw      r2, #0x7fff
0800c5a2: 0092       str       r2, [sp]
0800c5a4: 00e0       b         #0x800c5a8
0800c5a6: 0090       str       r0, [sp]
0800c5a8: 3e4a       ldr       r2, [pc, #0xf8] ; [0x800c6a4] = 0x200034e4 
0800c5aa: 5268       ldr       r2, [r2, #4]
0800c5ac: 3e4b       ldr       r3, [pc, #0xf8] ; [0x800c6a8] = 0x4001283c 
0800c5ae: 1b1d       adds      r3, r3, #4
0800c5b0: 1b68       ldr       r3, [r3]
0800c5b2: a2eb4300   sub.w     r0, r2, r3, lsl #1
0800c5b6: 10f5004f   cmn.w     r0, #0x8000
0800c5ba: 02da       bge       #0x800c5c2
0800c5bc: 3b4a       ldr       r2, [pc, #0xec] ; [0x800c6ac] = 0xffff8000 
0800c5be: 0192       str       r2, [sp, #4]
0800c5c0: 07e0       b         #0x800c5d2
0800c5c2: b0f5004f   cmp.w     r0, #0x8000
0800c5c6: 03db       blt       #0x800c5d0
0800c5d0: 0190       str       r0, [sp, #4]
0800c5d2: 5be0       b         #0x800c68c
0800c5d4: 00bf       nop       
0800c5d6: 334a       ldr       r2, [pc, #0xcc] ; [0x800c6a4] = 0x200034e4 
0800c5d8: 5268       ldr       r2, [r2, #4]
0800c5da: 334b       ldr       r3, [pc, #0xcc] ; [0x800c6a8] = 0x4001283c 
0800c5dc: 1b68       ldr       r3, [r3]
0800c5de: a2eb4300   sub.w     r0, r2, r3, lsl #1
0800c5e2: 10f5004f   cmn.w     r0, #0x8000
0800c5e6: 02da       bge       #0x800c5ee
0800c5ee: b0f5004f   cmp.w     r0, #0x8000
0800c5f2: 03db       blt       #0x800c5fc
0800c5f4: 47f6ff72   movw      r2, #0x7fff
0800c5f8: 0192       str       r2, [sp, #4]
0800c5fa: 00e0       b         #0x800c5fe
0800c5fc: 0190       str       r0, [sp, #4]
0800c5fe: 294a       ldr       r2, [pc, #0xa4] ; [0x800c6a4] = 0x200034e4 
0800c600: 9268       ldr       r2, [r2, #8]
0800c602: 294b       ldr       r3, [pc, #0xa4] ; [0x800c6a8] = 0x4001283c 
0800c604: 1b1d       adds      r3, r3, #4
0800c606: 1b68       ldr       r3, [r3]
0800c608: c2eb4302   rsb       r2, r2, r3, lsl #1
0800c60c: 019b       ldr       r3, [sp, #4]
0800c60e: d01a       subs      r0, r2, r3
0800c610: b0f5004f   cmp.w     r0, #0x8000
0800c614: 03db       blt       #0x800c61e
0800c616: 47f6ff72   movw      r2, #0x7fff
0800c61a: 0092       str       r2, [sp]
0800c61c: 06e0       b         #0x800c62c
0800c61e: 10f5004f   cmn.w     r0, #0x8000
0800c622: 02da       bge       #0x800c62a
0800c62a: 0090       str       r0, [sp]
0800c62c: 2ee0       b         #0x800c68c
0800c62e: 00bf       nop       
0800c630: 1c4a       ldr       r2, [pc, #0x70] ; [0x800c6a4] = 0x200034e4 
0800c632: 1268       ldr       r2, [r2]
0800c634: 1c4b       ldr       r3, [pc, #0x70] ; [0x800c6a8] = 0x4001283c 
0800c636: 1b68       ldr       r3, [r3]
0800c638: a2eb4300   sub.w     r0, r2, r3, lsl #1
0800c63c: 10f5004f   cmn.w     r0, #0x8000
0800c640: 02da       bge       #0x800c648
0800c648: b0f5004f   cmp.w     r0, #0x8000
0800c64c: 04db       blt       #0x800c658
0800c64e: 47f6ff72   movw      r2, #0x7fff
0800c652: 0092       str       r2, [sp]
0800c654: 01e0       b         #0x800c65a
0800c658: 0090       str       r0, [sp]
0800c65a: 124a       ldr       r2, [pc, #0x48] ; [0x800c6a4] = 0x200034e4 
0800c65c: 9268       ldr       r2, [r2, #8]
0800c65e: 124b       ldr       r3, [pc, #0x48] ; [0x800c6a8] = 0x4001283c 
0800c660: 1b1d       adds      r3, r3, #4
0800c662: 1b68       ldr       r3, [r3]
0800c664: c2eb4302   rsb       r2, r2, r3, lsl #1
0800c668: 009b       ldr       r3, [sp]
0800c66a: d01a       subs      r0, r2, r3
0800c66c: b0f5004f   cmp.w     r0, #0x8000
0800c670: 03db       blt       #0x800c67a
0800c672: 47f6ff72   movw      r2, #0x7fff
0800c676: 0192       str       r2, [sp, #4]
0800c678: 06e0       b         #0x800c688
0800c67a: 10f5004f   cmn.w     r0, #0x8000
0800c67e: 02da       bge       #0x800c686
0800c686: 0190       str       r0, [sp, #4]
0800c688: 00e0       b         #0x800c68c
0800c68c: 00bf       nop       
0800c68e: 009a       ldr       r2, [sp]
0800c690: 0092       str       r2, [sp]
0800c692: 019a       ldr       r2, [sp, #4]
0800c694: 0192       str       r2, [sp, #4]
0800c696: dde90023   ldrd      r2, r3, [sp]
0800c69a: c1e90023   strd      r2, r3, [r1]
0800c69e: 0cbd       pop       {r2, r3, pc}
0800c6b0: 6648       ldr       r0, [pc, #0x198] ; [0x800c84c] = 0x20000380 
0800c6b2: 0078       ldrb      r0, [r0]
0800c6b4: 20b1       cbz       r0, #0x800c6c0
0800c6b6: 0128       cmp       r0, #1
0800c6b8: 1ed0       beq       #0x800c6f8
0800c6ba: 0228       cmp       r0, #2
0800c6bc: 55d1       bne       #0x800c76a
0800c6be: 53e0       b         #0x800c768
0800c6f8: 5548       ldr       r0, [pc, #0x154] ; [0x800c850] = 0x200034e4 
0800c6fa: 0068       ldr       r0, [r0]
0800c6fc: 5849       ldr       r1, [pc, #0x160] ; [0x800c860] = 0x4001283c 
0800c6fe: 0968       ldr       r1, [r1]
0800c700: 00eb4100   add.w     r0, r0, r1, lsl #1
0800c704: 5249       ldr       r1, [pc, #0x148] ; [0x800c850] = 0x200034e4 
0800c706: 0860       str       r0, [r1]
0800c708: 0846       mov       r0, r1
0800c70a: 4068       ldr       r0, [r0, #4]
0800c70c: 5449       ldr       r1, [pc, #0x150] ; [0x800c860] = 0x4001283c 
0800c70e: 091d       adds      r1, r1, #4
0800c710: 0968       ldr       r1, [r1]
0800c712: 00eb4100   add.w     r0, r0, r1, lsl #1
0800c716: 4e49       ldr       r1, [pc, #0x138] ; [0x800c850] = 0x200034e4 
0800c718: 4860       str       r0, [r1, #4]
0800c71a: 5248       ldr       r0, [pc, #0x148] ; [0x800c864] = 0x200034f0 
0800c71c: 8088       ldrh      r0, [r0, #4]
0800c71e: 5249       ldr       r1, [pc, #0x148] ; [0x800c868] = 0x2000037c 
0800c720: 0968       ldr       r1, [r1]
0800c722: 01eb2010   add.w     r0, r1, r0, asr #4
0800c726: 5049       ldr       r1, [pc, #0x140] ; [0x800c868] = 0x2000037c 
0800c728: 0860       str       r0, [r1]
0800c72a: 4c48       ldr       r0, [pc, #0x130] ; [0x800c85c] = 0x20000384 
0800c72c: 0068       ldr       r0, [r0]
0800c72e: 401c       adds      r0, r0, #1
0800c730: 4a49       ldr       r1, [pc, #0x128] ; [0x800c85c] = 0x20000384 
0800c732: 0860       str       r0, [r1]
0800c734: 0846       mov       r0, r1
0800c736: 0068       ldr       r0, [r0]
0800c738: 4028       cmp       r0, #0x40
0800c73a: 14d1       bne       #0x800c766
0800c73c: 4449       ldr       r1, [pc, #0x110] ; [0x800c850] = 0x200034e4 
0800c73e: 0868       ldr       r0, [r1]
0800c740: c117       asrs      r1, r0, #0x1f
0800c742: 00eb9161   add.w     r1, r0, r1, lsr #26
0800c746: 8911       asrs      r1, r1, #6
0800c748: 414a       ldr       r2, [pc, #0x104] ; [0x800c850] = 0x200034e4 
0800c74a: 1160       str       r1, [r2]
0800c74c: 1146       mov       r1, r2
0800c74e: 4868       ldr       r0, [r1, #4]
0800c750: c117       asrs      r1, r0, #0x1f
0800c752: 00eb9161   add.w     r1, r0, r1, lsr #26
0800c756: 8911       asrs      r1, r1, #6
0800c758: 5160       str       r1, [r2, #4]
0800c75a: 0220       movs      r0, #2
0800c75c: 3b49       ldr       r1, [pc, #0xec] ; [0x800c84c] = 0x20000380 
0800c75e: 0870       strb      r0, [r1]
0800c760: 0120       movs      r0, #1
0800c762: 4249       ldr       r1, [pc, #0x108] ; [0x800c86c] = 0x20000381 
0800c764: 0870       strb      r0, [r1]
0800c766: 01e0       b         #0x800c76c
0800c768: 00e0       b         #0x800c76c
0800c76c: 00bf       nop       
0800c76e: 3f48       ldr       r0, [pc, #0xfc] ; [0x800c86c] = 0x20000381 
0800c770: 0078       ldrb      r0, [r0]
0800c772: 0128       cmp       r0, #1
0800c774: 04d0       beq       #0x800c780
0800c776: 0228       cmp       r0, #2
0800c778: 0dd0       beq       #0x800c796
0800c77a: 0328       cmp       r0, #3
0800c77c: 3ed1       bne       #0x800c7fc
0800c780: 0020       movs      r0, #0
0800c782: 3649       ldr       r1, [pc, #0xd8] ; [0x800c85c] = 0x20000384 
0800c784: 0860       str       r0, [r1]
0800c786: 3348       ldr       r0, [pc, #0xcc] ; [0x800c854] = 0x200034d8 
0800c788: 8068       ldr       r0, [r0, #8]
0800c78a: 3349       ldr       r1, [pc, #0xcc] ; [0x800c858] = 0x20000370 
0800c78c: 4860       str       r0, [r1, #4]
0800c78e: 0220       movs      r0, #2
0800c790: 3649       ldr       r1, [pc, #0xd8] ; [0x800c86c] = 0x20000381 
0800c792: 0870       strb      r0, [r1]
0800c794: 33e0       b         #0x800c7fe
0800c796: 2e48       ldr       r0, [pc, #0xb8] ; [0x800c850] = 0x200034e4 
0800c798: 8068       ldr       r0, [r0, #8]
0800c79a: 3149       ldr       r1, [pc, #0xc4] ; [0x800c860] = 0x4001283c 
0800c79c: 091d       adds      r1, r1, #4
0800c79e: 0968       ldr       r1, [r1]
0800c7a0: 00eb4100   add.w     r0, r0, r1, lsl #1
0800c7a4: 2a49       ldr       r1, [pc, #0xa8] ; [0x800c850] = 0x200034e4 
0800c7a6: 8860       str       r0, [r1, #8]
0800c7a8: 2e48       ldr       r0, [pc, #0xb8] ; [0x800c864] = 0x200034f0 
0800c7aa: 8088       ldrh      r0, [r0, #4]
0800c7ac: 2e49       ldr       r1, [pc, #0xb8] ; [0x800c868] = 0x2000037c 
0800c7ae: 0968       ldr       r1, [r1]
0800c7b0: 01eb2010   add.w     r0, r1, r0, asr #4
0800c7b4: 2c49       ldr       r1, [pc, #0xb0] ; [0x800c868] = 0x2000037c 
0800c7b6: 0860       str       r0, [r1]
0800c7b8: 2848       ldr       r0, [pc, #0xa0] ; [0x800c85c] = 0x20000384 
0800c7ba: 0068       ldr       r0, [r0]
0800c7bc: 401c       adds      r0, r0, #1
0800c7be: 2749       ldr       r1, [pc, #0x9c] ; [0x800c85c] = 0x20000384 
0800c7c0: 0860       str       r0, [r1]
0800c7c2: 0846       mov       r0, r1
0800c7c4: 0068       ldr       r0, [r0]
0800c7c6: 4028       cmp       r0, #0x40
0800c7c8: 0fd1       bne       #0x800c7ea
0800c7ca: 2149       ldr       r1, [pc, #0x84] ; [0x800c850] = 0x200034e4 
0800c7cc: 8868       ldr       r0, [r1, #8]
0800c7ce: c117       asrs      r1, r0, #0x1f
0800c7d0: 00eb9161   add.w     r1, r0, r1, lsr #26
0800c7d4: 8911       asrs      r1, r1, #6
0800c7d6: 1e4a       ldr       r2, [pc, #0x78] ; [0x800c850] = 0x200034e4 
0800c7d8: 9160       str       r1, [r2, #8]
0800c7da: 2348       ldr       r0, [pc, #0x8c] ; [0x800c868] = 0x2000037c 
0800c7dc: 0068       ldr       r0, [r0]
0800c7de: c009       lsrs      r0, r0, #7
0800c7e0: 2149       ldr       r1, [pc, #0x84] ; [0x800c868] = 0x2000037c 
0800c7e2: 0860       str       r0, [r1]
0800c7e4: 0320       movs      r0, #3
0800c7e6: 2149       ldr       r1, [pc, #0x84] ; [0x800c86c] = 0x20000381 
0800c7e8: 0870       strb      r0, [r1]
0800c7ea: 08e0       b         #0x800c7fe
0800c7fc: 00bf       nop       
0800c7fe: 00bf       nop       
0800c800: 1b48       ldr       r0, [pc, #0x6c] ; [0x800c870] = 0x20000388 
0800c802: 0078       ldrb      r0, [r0]
0800c804: 00b3       cbz       r0, #0x800c848
0800c944: 0548       ldr       r0, [pc, #0x14] ; [0x800c95c] = 0x20000370 
0800c946: 4068       ldr       r0, [r0, #4]
0800c948: 0449       ldr       r1, [pc, #0x10] ; [0x800c95c] = 0x20000370 
0800c94a: 0968       ldr       r1, [r1]
0800c94c: 00eb5110   add.w     r0, r0, r1, lsr #5
0800c950: 00f58010   add.w     r0, r0, #0x100000
0800c954: 0249       ldr       r1, [pc, #8] ; [0x800c960] = 0x40012838 
0800c956: 0860       str       r0, [r1]
0800c958: 7047       bx        lr
0800c978: 10b5       push      {r4, lr}
0800c97a: 1348       ldr       r0, [pc, #0x4c] ; [0x800c9c8] = 0x200034e4 
0800c97c: 0021       movs      r1, #0
0800c97e: 0160       str       r1, [r0]
0800c980: 4160       str       r1, [r0, #4]
0800c982: 8160       str       r1, [r0, #8]
0800c984: 0221       movs      r1, #2
0800c986: 1148       ldr       r0, [pc, #0x44] ; [0x800c9cc] = 0x40012800 
0800c988: fbf775ff   bl        #0x8008876
0800c98c: 1048       ldr       r0, [pc, #0x40] ; [0x800c9d0] = 0x80270ac 
0800c98e: 0178       ldrb      r1, [r0]
0800c990: 0223       movs      r3, #2
0800c992: 0122       movs      r2, #1
0800c994: 0d48       ldr       r0, [pc, #0x34] ; [0x800c9cc] = 0x40012800 
0800c996: fbf73dff   bl        #0x8008814
0800c99a: 0d48       ldr       r0, [pc, #0x34] ; [0x800c9d0] = 0x80270ac 
0800c99c: 0179       ldrb      r1, [r0, #4]
0800c99e: 0223       movs      r3, #2
0800c9a0: 1a46       mov       r2, r3
0800c9a2: 0a48       ldr       r0, [pc, #0x28] ; [0x800c9cc] = 0x40012800 
0800c9a4: fbf736ff   bl        #0x8008814
0800c9a8: 4ff48051   mov.w     r1, #0x1000
0800c9ac: 0748       ldr       r0, [pc, #0x1c] ; [0x800c9cc] = 0x40012800 
0800c9ae: fbf7ddfe   bl        #0x800876c
0800c9b2: 0121       movs      r1, #1
0800c9b4: 0548       ldr       r0, [pc, #0x14] ; [0x800c9cc] = 0x40012800 
0800c9b6: fbf7d0fe   bl        #0x800875a
0800c9ba: 0122       movs      r2, #1
0800c9bc: 4ff49061   mov.w     r1, #0x480
0800c9c0: 0248       ldr       r0, [pc, #8] ; [0x800c9cc] = 0x40012800 
0800c9c2: fbf7f7fe   bl        #0x80087b4
0800c9c6: 10bd       pop       {r4, pc}
080101b4: 2de9f34f   push.w    {r0, r1, r4, r5, r6, r7, r8, sb, sl, fp, lr}
080101b8: 0020       movs      r0, #0
080101ba: 0024       movs      r4, #0
080101bc: 0025       movs      r5, #0
080101be: 0026       movs      r6, #0
080101c0: 45f2301a   movw      sl, #0x5130
080101c4: ddf80090   ldr.w     sb, [sp]
080101c8: 09fb0af8   mul       r8, sb, sl
080101cc: 42f6e06a   movw      sl, #0x2ee0
080101d0: ddf80490   ldr.w     sb, [sp, #4]
080101d4: 09fb0af9   mul       sb, sb, sl
080101d8: c9f1000c   rsb.w     ip, sb, #0
080101dc: 6146       mov       r1, ip
080101de: 0ceb0809   add.w     sb, ip, r8
080101e2: 09ebd97a   add.w     sl, sb, sb, lsr #31
080101e6: 4fea6a03   asr.w     r3, sl, #1
080101ea: aceb0809   sub.w     sb, ip, r8
080101ee: 09ebd97a   add.w     sl, sb, sb, lsr #31
080101f2: 4fea6a02   asr.w     r2, sl, #1
080101f6: 002b       cmp       r3, #0
080101f8: 18da       bge       #0x801022c
080101fa: 002a       cmp       r2, #0
080101fc: 06da       bge       #0x801020c
080101fe: 4ff00509   mov.w     sb, #5
08010202: dff8e8a5   ldr.w     sl, [pc, #0x5e8] ; [0x80107ec] = 0x20000378 
08010206: 8af80090   strb.w    sb, [sl]
0801020a: 27e0       b         #0x801025c
0801020c: 0029       cmp       r1, #0
0801020e: 06dc       bgt       #0x801021e
08010210: 4ff00409   mov.w     sb, #4
08010214: dff8d4a5   ldr.w     sl, [pc, #0x5d4] ; [0x80107ec] = 0x20000378 
08010218: 8af80090   strb.w    sb, [sl]
0801021c: 1ee0       b         #0x801025c
0801021e: 4ff00309   mov.w     sb, #3
08010222: dff8c8a5   ldr.w     sl, [pc, #0x5c8] ; [0x80107ec] = 0x20000378 
08010226: 8af80090   strb.w    sb, [sl]
0801022a: 17e0       b         #0x801025c
0801022c: 002a       cmp       r2, #0
0801022e: 06db       blt       #0x801023e
08010230: 4ff00209   mov.w     sb, #2
08010234: dff8b4a5   ldr.w     sl, [pc, #0x5b4] ; [0x80107ec] = 0x20000378 
08010238: 8af80090   strb.w    sb, [sl]
0801023c: 0ee0       b         #0x801025c
0801023e: 0029       cmp       r1, #0
08010240: 06dc       bgt       #0x8010250
08010242: 4ff00609   mov.w     sb, #6
08010246: dff8a4a5   ldr.w     sl, [pc, #0x5a4] ; [0x80107ec] = 0x20000378 
0801024a: 8af80090   strb.w    sb, [sl]
0801024e: 05e0       b         #0x801025c
08010250: 4ff00109   mov.w     sb, #1
08010254: dff894a5   ldr.w     sl, [pc, #0x594] ; [0x80107ec] = 0x20000378 
08010258: 8af80090   strb.w    sb, [sl]
0801025c: 4ff00009   mov.w     sb, #0
08010260: dff88ca5   ldr.w     sl, [pc, #0x58c] ; [0x80107f0] = 0x20000389 
08010264: 8af80090   strb.w    sb, [sl]
08010268: dff88095   ldr.w     sb, [pc, #0x580] ; [0x80107ec] = 0x20000378 
0801026c: 99f80090   ldrb.w    sb, [sb]
08010270: b9f1070f   cmp.w     sb, #7
08010274: 7dd2       bhs       #0x8010372
08010276: dfe809f0   tbb       [pc, sb]
08010282: 42f6e06b   movw      fp, #0x2ee0
08010286: 8b44       add       fp, r1
08010288: abeb020a   sub.w     sl, fp, r2
0801028c: 0aebda7b   add.w     fp, sl, sl, lsr #31
08010290: 4fea6b09   asr.w     sb, fp, #1
08010294: 4feae97b   asr.w     fp, sb, #0x1f
08010298: 09ebdb3b   add.w     fp, sb, fp, lsr #15
0801029c: 4fea6b4b   asr.w     fp, fp, #0x11
080102a0: 0bf2dc5b   addw      fp, fp, #0x5dc
080102a4: 1ffa8bf0   uxth.w    r0, fp
080102a8: 9146       mov       sb, r2
080102aa: 4feae27a   asr.w     sl, r2, #0x1f
080102ae: 02ebda3a   add.w     sl, r2, sl, lsr #15
080102b2: 00eb6a4a   add.w     sl, r0, sl, asr #17
080102b6: 1ffa8af4   uxth.w    r4, sl
080102ba: 8946       mov       sb, r1
080102bc: 4feae17a   asr.w     sl, r1, #0x1f
080102c0: 01ebda3a   add.w     sl, r1, sl, lsr #15
080102c4: a4eb6a4a   sub.w     sl, r4, sl, asr #17
080102c8: 1ffa8af5   uxth.w    r5, sl
080102cc: 40f6b839   movw      sb, #0xbb8
080102d0: a9eb0009   sub.w     sb, sb, r0
080102d4: 1ffa89f9   uxth.w    sb, sb
080102d8: b9f1bb0f   cmp.w     sb, #0xbb
080102dc: 02dd       ble       #0x80102e4
080102de: 40f6b736   movw      r6, #0xbb7
080102e2: 27e0       b         #0x8010334
08010334: dff8bc94   ldr.w     sb, [pc, #0x4bc] ; [0x80107f4] = 0x200034d8 
08010338: d9f80490   ldr.w     sb, [sb, #4]
0801033c: dff8b8a4   ldr.w     sl, [pc, #0x4b8] ; [0x80107f8] = 0x20000370 
08010340: caf80090   str.w     sb, [sl]
08010344: dff8ac94   ldr.w     sb, [pc, #0x4ac] ; [0x80107f4] = 0x200034d8 
08010348: d9f80890   ldr.w     sb, [sb, #8]
0801034c: caf80490   str.w     sb, [sl, #4]
08010350: 10e2       b         #0x8010774
08010352: 42f6e06b   movw      fp, #0x2ee0
08010356: 9b44       add       fp, r3
08010358: abeb020a   sub.w     sl, fp, r2
0801035c: 0aebda7b   add.w     fp, sl, sl, lsr #31
08010360: 4fea6b09   asr.w     sb, fp, #1
08010364: 4feae97b   asr.w     fp, sb, #0x1f
08010368: 09ebdb3b   add.w     fp, sb, fp, lsr #15
0801036c: 4fea6b4b   asr.w     fp, fp, #0x11
08010370: 00e0       b         #0x8010374
08010374: 0bf2dc5b   addw      fp, fp, #0x5dc
08010378: 1ffa8bf0   uxth.w    r0, fp
0801037c: 9146       mov       sb, r2
0801037e: 4feae27a   asr.w     sl, r2, #0x1f
08010382: 02ebda3a   add.w     sl, r2, sl, lsr #15
08010386: 00eb6a4a   add.w     sl, r0, sl, asr #17
0801038a: 1ffa8af4   uxth.w    r4, sl
0801038e: 9946       mov       sb, r3
08010390: 4feae37a   asr.w     sl, r3, #0x1f
08010394: 03ebda3a   add.w     sl, r3, sl, lsr #15
08010398: a0eb6a4a   sub.w     sl, r0, sl, asr #17
0801039c: 1ffa8af5   uxth.w    r5, sl
080103a0: 40f6b839   movw      sb, #0xbb8
080103a4: a9eb0409   sub.w     sb, sb, r4
080103a8: 1ffa89f9   uxth.w    sb, sb
080103ac: b9f1bb0f   cmp.w     sb, #0xbb
080103b0: 02dd       ble       #0x80103b8
080103b2: 40f6b736   movw      r6, #0xbb7
080103b6: 27e0       b         #0x8010408
08010408: dff8e893   ldr.w     sb, [pc, #0x3e8] ; [0x80107f4] = 0x200034d8 
0801040c: d9f80090   ldr.w     sb, [sb]
08010410: dff8e4a3   ldr.w     sl, [pc, #0x3e4] ; [0x80107f8] = 0x20000370 
08010414: caf80090   str.w     sb, [sl]
08010418: dff8d893   ldr.w     sb, [pc, #0x3d8] ; [0x80107f4] = 0x200034d8 
0801041c: d9f80890   ldr.w     sb, [sb, #8]
08010420: caf80490   str.w     sb, [sl, #4]
08010424: a6e1       b         #0x8010774
08010426: 42f6e06b   movw      fp, #0x2ee0
0801042a: abeb010b   sub.w     fp, fp, r1
0801042e: 0beb030a   add.w     sl, fp, r3
08010432: 0aebda7b   add.w     fp, sl, sl, lsr #31
08010436: 4fea6b09   asr.w     sb, fp, #1
0801043a: 4feae97b   asr.w     fp, sb, #0x1f
0801043e: 09ebdb3b   add.w     fp, sb, fp, lsr #15
08010442: 4fea6b4b   asr.w     fp, fp, #0x11
08010446: 0bf2dc5b   addw      fp, fp, #0x5dc
0801044a: 1ffa8bf0   uxth.w    r0, fp
0801044e: 9946       mov       sb, r3
08010450: 4feae37a   asr.w     sl, r3, #0x1f
08010454: 03ebda3a   add.w     sl, r3, sl, lsr #15
08010458: a0eb6a4a   sub.w     sl, r0, sl, asr #17
0801045c: 1ffa8af5   uxth.w    r5, sl
08010460: 8946       mov       sb, r1
08010462: 4feae17a   asr.w     sl, r1, #0x1f
08010466: 01ebda3a   add.w     sl, r1, sl, lsr #15
0801046a: 05eb6a4a   add.w     sl, r5, sl, asr #17
0801046e: 02e0       b         #0x8010476
08010470: 16e1       b         #0x80106a0
08010472: ade0       b         #0x80105d0
08010474: 44e0       b         #0x8010500
08010476: 1ffa8af4   uxth.w    r4, sl
0801047a: 40f6b839   movw      sb, #0xbb8
0801047e: a9eb0409   sub.w     sb, sb, r4
08010482: 1ffa89f9   uxth.w    sb, sb
08010486: b9f1bb0f   cmp.w     sb, #0xbb
0801048a: 02dd       ble       #0x8010492
0801048c: 40f6b736   movw      r6, #0xbb7
08010490: 27e0       b         #0x80104e2
080104e2: dff81093   ldr.w     sb, [pc, #0x310] ; [0x80107f4] = 0x200034d8 
080104e6: d9f80090   ldr.w     sb, [sb]
080104ea: dff80ca3   ldr.w     sl, [pc, #0x30c] ; [0x80107f8] = 0x20000370 
080104ee: caf80090   str.w     sb, [sl]
080104f2: dff80093   ldr.w     sb, [pc, #0x300] ; [0x80107f4] = 0x200034d8 
080104f6: d9f80890   ldr.w     sb, [sb, #8]
080104fa: caf80490   str.w     sb, [sl, #4]
080104fe: 39e1       b         #0x8010774
08010500: 42f6e06b   movw      fp, #0x2ee0
08010504: 8b44       add       fp, r1
08010506: abeb020a   sub.w     sl, fp, r2
0801050a: 0aebda7b   add.w     fp, sl, sl, lsr #31
0801050e: 4fea6b09   asr.w     sb, fp, #1
08010512: 4feae97b   asr.w     fp, sb, #0x1f
08010516: 09ebdb3b   add.w     fp, sb, fp, lsr #15
0801051a: 4fea6b4b   asr.w     fp, fp, #0x11
0801051e: 0bf2dc5b   addw      fp, fp, #0x5dc
08010522: 1ffa8bf0   uxth.w    r0, fp
08010526: 9146       mov       sb, r2
08010528: 4feae27a   asr.w     sl, r2, #0x1f
0801052c: 02ebda3a   add.w     sl, r2, sl, lsr #15
08010530: 00eb6a4a   add.w     sl, r0, sl, asr #17
08010534: 1ffa8af4   uxth.w    r4, sl
08010538: 8946       mov       sb, r1
0801053a: 4feae17a   asr.w     sl, r1, #0x1f
0801053e: 01ebda3a   add.w     sl, r1, sl, lsr #15
08010542: a4eb6a4a   sub.w     sl, r4, sl, asr #17
08010546: 1ffa8af5   uxth.w    r5, sl
0801054a: 40f6b839   movw      sb, #0xbb8
0801054e: a9eb0509   sub.w     sb, sb, r5
08010552: 1ffa89f9   uxth.w    sb, sb
08010556: b9f1bb0f   cmp.w     sb, #0xbb
0801055a: 02dd       ble       #0x8010562
0801055c: 40f6b736   movw      r6, #0xbb7
08010560: 27e0       b         #0x80105b2
080105b2: dff84092   ldr.w     sb, [pc, #0x240] ; [0x80107f4] = 0x200034d8 
080105b6: d9f80090   ldr.w     sb, [sb]
080105ba: dff83ca2   ldr.w     sl, [pc, #0x23c] ; [0x80107f8] = 0x20000370 
080105be: caf80090   str.w     sb, [sl]
080105c2: dff83092   ldr.w     sb, [pc, #0x230] ; [0x80107f4] = 0x200034d8 
080105c6: d9f80490   ldr.w     sb, [sb, #4]
080105ca: caf80490   str.w     sb, [sl, #4]
080105ce: d1e0       b         #0x8010774
080105d0: 42f6e06b   movw      fp, #0x2ee0
080105d4: 9b44       add       fp, r3
080105d6: abeb020a   sub.w     sl, fp, r2
080105da: 0aebda7b   add.w     fp, sl, sl, lsr #31
080105de: 4fea6b09   asr.w     sb, fp, #1
080105e2: 4feae97b   asr.w     fp, sb, #0x1f
080105e6: 09ebdb3b   add.w     fp, sb, fp, lsr #15
080105ea: 4fea6b4b   asr.w     fp, fp, #0x11
080105ee: 0bf2dc5b   addw      fp, fp, #0x5dc
080105f2: 1ffa8bf0   uxth.w    r0, fp
080105f6: 9146       mov       sb, r2
080105f8: 4feae27a   asr.w     sl, r2, #0x1f
080105fc: 02ebda3a   add.w     sl, r2, sl, lsr #15
08010600: 00eb6a4a   add.w     sl, r0, sl, asr #17
08010604: 1ffa8af4   uxth.w    r4, sl
08010608: 9946       mov       sb, r3
0801060a: 4feae37a   asr.w     sl, r3, #0x1f
0801060e: 03ebda3a   add.w     sl, r3, sl, lsr #15
08010612: a0eb6a4a   sub.w     sl, r0, sl, asr #17
08010616: 1ffa8af5   uxth.w    r5, sl
0801061a: 40f6b839   movw      sb, #0xbb8
0801061e: a9eb0509   sub.w     sb, sb, r5
08010622: 1ffa89f9   uxth.w    sb, sb
08010626: b9f1bb0f   cmp.w     sb, #0xbb
0801062a: 02dd       ble       #0x8010632
0801062c: 40f6b736   movw      r6, #0xbb7
08010630: 27e0       b         #0x8010682
08010682: dff87091   ldr.w     sb, [pc, #0x170] ; [0x80107f4] = 0x200034d8 
08010686: d9f80090   ldr.w     sb, [sb]
0801068a: dff86ca1   ldr.w     sl, [pc, #0x16c] ; [0x80107f8] = 0x20000370 
0801068e: caf80090   str.w     sb, [sl]
08010692: dff86091   ldr.w     sb, [pc, #0x160] ; [0x80107f4] = 0x200034d8 
08010696: d9f80490   ldr.w     sb, [sb, #4]
0801069a: caf80490   str.w     sb, [sl, #4]
0801069e: 69e0       b         #0x8010774
080106a0: 42f6e06b   movw      fp, #0x2ee0
080106a4: abeb010b   sub.w     fp, fp, r1
080106a8: 0beb030a   add.w     sl, fp, r3
080106ac: 0aebda7b   add.w     fp, sl, sl, lsr #31
080106b0: 4fea6b09   asr.w     sb, fp, #1
080106b4: 4feae97b   asr.w     fp, sb, #0x1f
080106b8: 09ebdb3b   add.w     fp, sb, fp, lsr #15
080106bc: 4fea6b4b   asr.w     fp, fp, #0x11
080106c0: 0bf2dc5b   addw      fp, fp, #0x5dc
080106c4: 1ffa8bf0   uxth.w    r0, fp
080106c8: 9946       mov       sb, r3
080106ca: 4feae37a   asr.w     sl, r3, #0x1f
080106ce: 03ebda3a   add.w     sl, r3, sl, lsr #15
080106d2: a0eb6a4a   sub.w     sl, r0, sl, asr #17
080106d6: 1ffa8af5   uxth.w    r5, sl
080106da: 8946       mov       sb, r1
080106dc: 4feae17a   asr.w     sl, r1, #0x1f
080106e0: 01ebda3a   add.w     sl, r1, sl, lsr #15
080106e4: 05eb6a4a   add.w     sl, r5, sl, asr #17
080106e8: 1ffa8af4   uxth.w    r4, sl
080106ec: 40f6b839   movw      sb, #0xbb8
080106f0: a9eb0009   sub.w     sb, sb, r0
080106f4: 1ffa89f9   uxth.w    sb, sb
080106f8: b9f1bb0f   cmp.w     sb, #0xbb
080106fc: 02dd       ble       #0x8010704
080106fe: 40f6b736   movw      r6, #0xbb7
08010702: 27e0       b         #0x8010754
08010754: dff89c90   ldr.w     sb, [pc, #0x9c] ; [0x80107f4] = 0x200034d8 
08010758: d9f80490   ldr.w     sb, [sb, #4]
0801075c: dff898a0   ldr.w     sl, [pc, #0x98] ; [0x80107f8] = 0x20000370 
08010760: caf80090   str.w     sb, [sl]
08010764: dff88c90   ldr.w     sb, [pc, #0x8c] ; [0x80107f4] = 0x200034d8 
08010768: d9f80890   ldr.w     sb, [sb, #8]
0801076c: caf80490   str.w     sb, [sl, #4]
08010770: 00e0       b         #0x8010774
08010774: 00bf       nop       
08010776: dff87890   ldr.w     sb, [pc, #0x78] ; [0x80107f0] = 0x20000389 
0801077a: 99f80090   ldrb.w    sb, [sb]
0801077e: b9f1000f   cmp.w     sb, #0
08010782: 0cd1       bne       #0x801079e
08010784: dff87490   ldr.w     sb, [pc, #0x74] ; [0x80107fc] = 0x40012c20 
08010788: b9f80090   ldrh.w    sb, [sb]
0801078c: 4df6ff7a   movw      sl, #0xdfff
08010790: 09ea0a09   and.w     sb, sb, sl
08010794: dff864a0   ldr.w     sl, [pc, #0x64] ; [0x80107fc] = 0x40012c20 
08010798: aaf80090   strh.w    sb, [sl]
0801079c: 10e0       b         #0x80107c0
080107c0: dff83890   ldr.w     sb, [pc, #0x38] ; [0x80107fc] = 0x40012c20 
080107c4: 09f12009   add.w     sb, sb, #0x20
080107c8: a9f80060   strh.w    r6, [sb]
080107cc: dff82c90   ldr.w     sb, [pc, #0x2c] ; [0x80107fc] = 0x40012c20 
080107d0: 09f11409   add.w     sb, sb, #0x14
080107d4: a9f80000   strh.w    r0, [sb]
080107d8: 09f10409   add.w     sb, sb, #4
080107dc: a9f80050   strh.w    r5, [sb]
080107e0: 09f10409   add.w     sb, sb, #4
080107e4: a9f80040   strh.w    r4, [sb]
080107e8: bde8fc8f   pop.w     {r2, r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
08010b84: 10b5       push      {r4, lr}
08010b86: 0121       movs      r1, #1
08010b88: 0648       ldr       r0, [pc, #0x18] ; [0x8010ba4] = 0x40012c00 
08010b8a: 00f0e9f9   bl        #0x8010f60
08010b8e: 38b1       cbz       r0, #0x8010ba0
08010b90: 0121       movs      r1, #1
08010b92: 0448       ldr       r0, [pc, #0x10] ; [0x8010ba4] = 0x40012c00 
08010b94: 00f0b2f8   bl        #0x8010cfc
08010b98: faf7faff   bl        #0x800bb90
08010b9c: fbf7d6fc   bl        #0x800c54c
08010ba0: 10bd       pop       {r4, pc}
