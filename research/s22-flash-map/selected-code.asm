
# Original v2.41 bytes, entry 0x0800abb0, span 0x58
0800abb0: 0346       mov       r3, r0
0800abb2: 0621       movs      r1, #6
0800abb4: 0622       movs      r2, #6
0800abb6: 1248       ldr       r0, [pc, #0x48] ; [0x800ac00] = 0x803b000 
0800abb8: 0188       ldrh      r1, [r0]
0800abba: 1248       ldr       r0, [pc, #0x48] ; [0x800ac04] = 0x803b800 
0800abbc: 0288       ldrh      r2, [r0]
0800abbe: abb1       cbz       r3, #0x800abec
0800abc0: 012b       cmp       r3, #1
0800abc2: 1bd1       bne       #0x800abfc
0800abc4: 3ab9       cbnz      r2, #0x800abd6
0800abc6: 4ef6ee60   movw      r0, #0xeeee
0800abca: 8142       cmp       r1, r0
0800abcc: 01d1       bne       #0x800abd2
0800abce: 0020       movs      r0, #0
0800abd0: 7047       bx        lr
0800abd2: 0120       movs      r0, #1
0800abd4: fce7       b         #0x800abd0
0800abd6: 39b9       cbnz      r1, #0x800abe8
0800abd8: 4ef6ee60   movw      r0, #0xeeee
0800abdc: 8242       cmp       r2, r0
0800abde: 01d1       bne       #0x800abe4
0800abe0: 0120       movs      r0, #1
0800abe2: f5e7       b         #0x800abd0
0800abe4: 0020       movs      r0, #0
0800abe6: f3e7       b         #0x800abd0
0800abe8: ab20       movs      r0, #0xab
0800abea: f1e7       b         #0x800abd0
0800abec: 09b9       cbnz      r1, #0x800abf2
0800abee: 0020       movs      r0, #0
0800abf0: eee7       b         #0x800abd0
0800abf2: 0ab9       cbnz      r2, #0x800abf8
0800abf4: 0120       movs      r0, #1
0800abf6: ebe7       b         #0x800abd0
0800abf8: ab20       movs      r0, #0xab
0800abfa: e9e7       b         #0x800abd0
0800abfc: 0020       movs      r0, #0
0800abfe: e7e7       b         #0x800abd0
0800ac00: 00b0       add       sp, #0
0800ac02: 0308       lsrs      r3, r0, #0x20

# Original v2.41 bytes, entry 0x0800af54, span 0xf8
0800af54: 2de9f84f   push.w    {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}
0800af58: 0746       mov       r7, r0
0800af5a: 8946       mov       sb, r1
0800af5c: 0425       movs      r5, #4
0800af5e: dff8d4a0   ldr.w     sl, [pc, #0xd4] ; [0x800b034] = 0x80103ff 
0800af62: 3548       ldr       r0, [pc, #0xd4] ; [0x800b038] = 0x8010000 
0800af64: 0090       str       r0, [sp]
0800af66: 4ff00008   mov.w     r8, #0
0800af6a: 0024       movs      r4, #0
0800af6c: 0026       movs      r6, #0
0800af6e: 4ff0000b   mov.w     fp, #0
0800af72: 0020       movs      r0, #0
0800af74: fff71cfe   bl        #0x800abb0
0800af78: 8046       mov       r8, r0
0800af7a: b8f1010f   cmp.w     r8, #1
0800af7e: 04d1       bne       #0x800af8a
0800af80: dff8b8a0   ldr.w     sl, [pc, #0xb8] ; [0x800b03c] = 0x803b000 
0800af84: 2e48       ldr       r0, [pc, #0xb8] ; [0x800b040] = 0x803b800 
0800af86: 0090       str       r0, [sp]
0800af88: 0ae0       b         #0x800afa0
0800af8a: b8f1000f   cmp.w     r8, #0
0800af8e: 04d1       bne       #0x800af9a
0800af90: dff8aca0   ldr.w     sl, [pc, #0xac] ; [0x800b040] = 0x803b800 
0800af94: 2948       ldr       r0, [pc, #0xa4] ; [0x800b03c] = 0x803b000 
0800af96: 0090       str       r0, [sp]
0800af98: 02e0       b         #0x800afa0
0800af9a: ab20       movs      r0, #0xab
0800af9c: bde8f88f   pop.w     {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
0800afa0: 4ef6ee61   movw      r1, #0xeeee
0800afa4: 5046       mov       r0, sl
0800afa6: 00f017fb   bl        #0x800b5d8
0800afaa: 0546       mov       r5, r0
0800afac: 042d       cmp       r5, #4
0800afae: 01d0       beq       #0x800afb4
0800afb0: 2846       mov       r0, r5
0800afb2: f3e7       b         #0x800af9c
0800afb4: 01f058f9   bl        #0x800c268
0800afb8: 4946       mov       r1, sb
0800afba: 3846       mov       r0, r7
0800afbc: 00f078f9   bl        #0x800b2b0
0800afc0: 0646       mov       r6, r0
0800afc2: 042e       cmp       r6, #4
0800afc4: 01d0       beq       #0x800afca
0800afc6: 3046       mov       r0, r6
0800afc8: e8e7       b         #0x800af9c
0800afca: 0024       movs      r4, #0
0800afcc: 1ce0       b         #0x800b008
0800afce: 1d48       ldr       r0, [pc, #0x74] ; [0x800b044] = 0x200000a6 
0800afd0: 30f81400   ldrh.w    r0, [r0, r4, lsl #1]
0800afd4: b842       cmp       r0, r7
0800afd6: 15d0       beq       #0x800b004
0800afd8: 1a49       ldr       r1, [pc, #0x68] ; [0x800b044] = 0x200000a6 
0800afda: 31f81400   ldrh.w    r0, [r1, r4, lsl #1]
0800afde: 1a49       ldr       r1, [pc, #0x68] ; [0x800b048] = 0x20000134 
0800afe0: 00f0ccf8   bl        #0x800b17c
0800afe4: 8346       mov       fp, r0
0800afe6: bbf1010f   cmp.w     fp, #1
0800afea: 0bd0       beq       #0x800b004
0800afec: 1549       ldr       r1, [pc, #0x54] ; [0x800b044] = 0x200000a6 
0800afee: 31f81400   ldrh.w    r0, [r1, r4, lsl #1]
0800aff2: 1549       ldr       r1, [pc, #0x54] ; [0x800b048] = 0x20000134 
0800aff4: 0988       ldrh      r1, [r1]
0800aff6: 00f05bf9   bl        #0x800b2b0
0800affa: 0646       mov       r6, r0
0800affc: 042e       cmp       r6, #4
0800affe: 01d0       beq       #0x800b004
0800b000: 3046       mov       r0, r6
0800b002: cbe7       b         #0x800af9c
0800b004: 601c       adds      r0, r4, #1
0800b006: 84b2       uxth      r4, r0
0800b008: 462c       cmp       r4, #0x46
0800b00a: e0db       blt       #0x800afce
0800b00c: 0098       ldr       r0, [sp]
0800b00e: 00f0bbfa   bl        #0x800b588
0800b012: 0546       mov       r5, r0
0800b014: 042d       cmp       r5, #4
0800b016: 01d0       beq       #0x800b01c
0800b018: 2846       mov       r0, r5
0800b01a: bfe7       b         #0x800af9c
0800b01c: 0021       movs      r1, #0
0800b01e: 5046       mov       r0, sl
0800b020: 00f0dafa   bl        #0x800b5d8
0800b024: 0546       mov       r5, r0
0800b026: 042d       cmp       r5, #4
0800b028: 01d0       beq       #0x800b02e
0800b02a: 2846       mov       r0, r5
0800b02c: b6e7       b         #0x800af9c
0800b02e: 2846       mov       r0, r5
0800b030: b4e7       b         #0x800af9c
0800b032: 0000       movs      r0, r0
0800b034: ff03       lsls      r7, r7, #0xf
0800b036: 0108       lsrs      r1, r0, #0x20
0800b038: 0000       movs      r0, r0
0800b03a: 0108       lsrs      r1, r0, #0x20
0800b03c: 00b0       add       sp, #0
0800b03e: 0308       lsrs      r3, r0, #0x20

# Original v2.41 bytes, entry 0x0800b2b0, span 0x88
0800b2b0: 2de9f041   push.w    {r4, r5, r6, r7, r8, lr}
0800b2b4: 0446       mov       r4, r0
0800b2b6: 0f46       mov       r7, r1
0800b2b8: 0425       movs      r5, #4
0800b2ba: 0026       movs      r6, #0
0800b2bc: dff86c80   ldr.w     r8, [pc, #0x6c] ; [0x800b32c] = 0x80107ff 
0800b2c0: 0120       movs      r0, #1
0800b2c2: fff775fc   bl        #0x800abb0
0800b2c6: 0646       mov       r6, r0
0800b2c8: ab2e       cmp       r6, #0xab
0800b2ca: 01d1       bne       #0x800b2d0
0800b2cc: bde8f081   pop.w     {r4, r5, r6, r7, r8, pc}
0800b2d0: 701c       adds      r0, r6, #1
0800b2d2: 1749       ldr       r1, [pc, #0x5c] ; [0x800b330] = 0x803affe 
0800b2d4: 01ebc028   add.w     r8, r1, r0, lsl #11
0800b2d8: 21e0       b         #0x800b31e
0800b2da: 1648       ldr       r0, [pc, #0x58] ; [0x800b334] = 0x20000138 
0800b2dc: 0068       ldr       r0, [r0]
0800b2de: 0068       ldr       r0, [r0]
0800b2e0: 401c       adds      r0, r0, #1
0800b2e2: b8b9       cbnz      r0, #0x800b314
0800b2e4: 3946       mov       r1, r7
0800b2e6: 1348       ldr       r0, [pc, #0x4c] ; [0x800b334] = 0x20000138 
0800b2e8: 0068       ldr       r0, [r0]
0800b2ea: 00f075f9   bl        #0x800b5d8
0800b2ee: 0546       mov       r5, r0
0800b2f0: 042d       cmp       r5, #4
0800b2f2: 01d0       beq       #0x800b2f8
0800b2f4: 2846       mov       r0, r5
0800b2f6: e9e7       b         #0x800b2cc
0800b2f8: 2146       mov       r1, r4
0800b2fa: 0e48       ldr       r0, [pc, #0x38] ; [0x800b334] = 0x20000138 
0800b2fc: 0068       ldr       r0, [r0]
0800b2fe: 801c       adds      r0, r0, #2
0800b300: 00f06af9   bl        #0x800b5d8
0800b304: 0546       mov       r5, r0
0800b306: 0b48       ldr       r0, [pc, #0x2c] ; [0x800b334] = 0x20000138 
0800b308: 0068       ldr       r0, [r0]
0800b30a: 001d       adds      r0, r0, #4
0800b30c: 0949       ldr       r1, [pc, #0x24] ; [0x800b334] = 0x20000138 
0800b30e: 0860       str       r0, [r1]
0800b310: 2846       mov       r0, r5
0800b312: dbe7       b         #0x800b2cc
0800b314: 0748       ldr       r0, [pc, #0x1c] ; [0x800b334] = 0x20000138 
0800b316: 0068       ldr       r0, [r0]
0800b318: 001d       adds      r0, r0, #4
0800b31a: 0649       ldr       r1, [pc, #0x18] ; [0x800b334] = 0x20000138 
0800b31c: 0860       str       r0, [r1]
0800b31e: 0548       ldr       r0, [pc, #0x14] ; [0x800b334] = 0x20000138 
0800b320: 0068       ldr       r0, [r0]
0800b322: 4045       cmp       r0, r8
0800b324: d9d3       blo       #0x800b2da
0800b326: 8020       movs      r0, #0x80
0800b328: d0e7       b         #0x800b2cc
0800b32a: 0000       movs      r0, r0
0800b32c: ff07       lsls      r7, r7, #0x1f
0800b32e: 0108       lsrs      r1, r0, #0x20
0800b330: feaf       add       r7, sp, #0x3f8
0800b332: 0308       lsrs      r3, r0, #0x20
0800b334: 3801       lsls      r0, r7, #4
0800b336: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x0800b338, span 0x90
0800b338: 0fb4       push      {r0, r1, r2, r3}
0800b33a: 2de9f041   push.w    {r4, r5, r6, r7, r8, lr}
0800b33e: 0425       movs      r5, #4
0800b340: 0026       movs      r6, #0
0800b342: 1e4f       ldr       r7, [pc, #0x78] ; [0x800b3bc] = 0x80107ff 
0800b344: 0024       movs      r4, #0
0800b346: a046       mov       r8, r4
0800b348: 0120       movs      r0, #1
0800b34a: fff75dfc   bl        #0x800ac08
0800b34e: 0646       mov       r6, r0
0800b350: ab2e       cmp       r6, #0xab
0800b352: 03d1       bne       #0x800b35c
0800b354: bde8f001   pop.w     {r4, r5, r6, r7, r8}
0800b358: 5df814fb   ldr       pc, [sp], #0x14
0800b35c: 701c       adds      r0, r6, #1
0800b35e: 1849       ldr       r1, [pc, #0x60] ; [0x800b3c0] = 0x803dfff 
0800b360: 01ebc027   add.w     r7, r1, r0, lsl #11
0800b364: a7f11400   sub.w     r0, r7, #0x14
0800b368: 1649       ldr       r1, [pc, #0x58] ; [0x800b3c4] = 0x2000013c 
0800b36a: 0968       ldr       r1, [r1]
0800b36c: 8842       cmp       r0, r1
0800b36e: 22d3       blo       #0x800b3b6
0800b370: 0024       movs      r4, #0
0800b372: 1ce0       b         #0x800b3ae
0800b374: 1348       ldr       r0, [pc, #0x4c] ; [0x800b3c4] = 0x2000013c 
0800b376: 0068       ldr       r0, [r0]
0800b378: 0088       ldrh      r0, [r0]
0800b37a: 4ff6ff71   movw      r1, #0xffff
0800b37e: 8842       cmp       r0, r1
0800b380: 12d1       bne       #0x800b3a8
0800b382: 06a8       add       r0, sp, #0x18
0800b384: 30f81480   ldrh.w    r8, [r0, r4, lsl #1]
0800b388: 4146       mov       r1, r8
0800b38a: 0e48       ldr       r0, [pc, #0x38] ; [0x800b3c4] = 0x2000013c 
0800b38c: 0068       ldr       r0, [r0]
0800b38e: 00f023f9   bl        #0x800b5d8
0800b392: 0546       mov       r5, r0
0800b394: 042d       cmp       r5, #4
0800b396: 01d0       beq       #0x800b39c
0800b398: 2846       mov       r0, r5
0800b39a: dbe7       b         #0x800b354
0800b39c: 0948       ldr       r0, [pc, #0x24] ; [0x800b3c4] = 0x2000013c 
0800b39e: 0068       ldr       r0, [r0]
0800b3a0: 801c       adds      r0, r0, #2
0800b3a2: 0849       ldr       r1, [pc, #0x20] ; [0x800b3c4] = 0x2000013c 
0800b3a4: 0860       str       r0, [r1]
0800b3a6: 01e0       b         #0x800b3ac
0800b3a8: 8020       movs      r0, #0x80
0800b3aa: d3e7       b         #0x800b354
0800b3ac: 641c       adds      r4, r4, #1
0800b3ae: 0a2c       cmp       r4, #0xa
0800b3b0: e0d3       blo       #0x800b374
0800b3b2: 0420       movs      r0, #4
0800b3b4: cee7       b         #0x800b354
0800b3b6: 8020       movs      r0, #0x80
0800b3b8: cce7       b         #0x800b354
0800b3ba: 0000       movs      r0, r0
0800b3bc: ff07       lsls      r7, r7, #0x1f
0800b3be: 0108       lsrs      r1, r0, #0x20
0800b3c0: ffdf       svc       #0xff
0800b3c2: 0308       lsrs      r3, r0, #0x20
0800b3c4: 3c01       lsls      r4, r7, #4
0800b3c6: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x0800f664, span 0x40
0800f664: 38b5       push      {r3, r4, r5, lr}
0800f666: 0d48       ldr       r0, [pc, #0x34] ; [0x800f69c] = 0x2000008c 
0800f668: 0df045f8   bl        #0x801c6f6
0800f66c: 0b49       ldr       r1, [pc, #0x2c] ; [0x800f69c] = 0x2000008c 
0800f66e: 0882       strh      r0, [r1, #0x10]
0800f670: 0846       mov       r0, r1
0800f672: 0069       ldr       r0, [r0, #0x10]
0800f674: 0090       str       r0, [sp]
0800f676: 0846       mov       r0, r1
0800f678: 0fc8       ldm       r0, {r0, r1, r2, r3}
0800f67a: fbf7fffe   bl        #0x800b47c
0800f67e: 0446       mov       r4, r0
0800f680: 0648       ldr       r0, [pc, #0x18] ; [0x800f69c] = 0x2000008c 
0800f682: 0069       ldr       r0, [r0, #0x10]
0800f684: 0090       str       r0, [sp]
0800f686: 0548       ldr       r0, [pc, #0x14] ; [0x800f69c] = 0x2000008c 
0800f688: 0fc8       ldm       r0, {r0, r1, r2, r3}
0800f68a: fbf71bff   bl        #0x800b4c4
0800f68e: 0446       mov       r4, r0
0800f690: 0020       movs      r0, #0
0800f692: 0349       ldr       r1, [pc, #0xc] ; [0x800f6a0] = 0x200000a0 
0800f694: 0870       strb      r0, [r1]
0800f696: e0b2       uxtb      r0, r4
0800f698: 38bd       pop       {r3, r4, r5, pc}
0800f69a: 0000       movs      r0, r0
0800f69c: 8c00       lsls      r4, r1, #2
0800f69e: 0020       movs      r0, #0
0800f6a0: a000       lsls      r0, r4, #2
0800f6a2: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x0800fdec, span 0x130
0800fdec: 70b5       push      {r4, r5, r6, lr}
0800fdee: 5f48       ldr       r0, [pc, #0x17c] ; [0x800ff6c] = 0x20003318 
0800fdf0: fdf724f8   bl        #0x800ce3c
0800fdf4: 5d48       ldr       r0, [pc, #0x174] ; [0x800ff6c] = 0x20003318 
0800fdf6: 0068       ldr       r0, [r0]
0800fdf8: 5d49       ldr       r1, [pc, #0x174] ; [0x800ff70] = 0x20003338 
0800fdfa: d1f8c010   ldr.w     r1, [r1, #0xc0]
0800fdfe: 401a       subs      r0, r0, r1
0800fe00: 5c49       ldr       r1, [pc, #0x170] ; [0x800ff74] = 0x20000284 
0800fe02: 0860       str       r0, [r1]
0800fe04: 5948       ldr       r0, [pc, #0x164] ; [0x800ff6c] = 0x20003318 
0800fe06: 4168       ldr       r1, [r0, #4]
0800fe08: 5948       ldr       r0, [pc, #0x164] ; [0x800ff70] = 0x20003338 
0800fe0a: d0f8c400   ldr.w     r0, [r0, #0xc4]
0800fe0e: 081a       subs      r0, r1, r0
0800fe10: 5949       ldr       r1, [pc, #0x164] ; [0x800ff78] = 0x20000288 
0800fe12: 0860       str       r0, [r1]
0800fe14: 5548       ldr       r0, [pc, #0x154] ; [0x800ff6c] = 0x20003318 
0800fe16: 8068       ldr       r0, [r0, #8]
0800fe18: 5849       ldr       r1, [pc, #0x160] ; [0x800ff7c] = 0x2000028c 
0800fe1a: 0860       str       r0, [r1]
0800fe1c: 5348       ldr       r0, [pc, #0x14c] ; [0x800ff6c] = 0x20003318 
0800fe1e: 0169       ldr       r1, [r0, #0x10]
0800fe20: 5348       ldr       r0, [pc, #0x14c] ; [0x800ff70] = 0x20003338 
0800fe22: d0f8cc00   ldr.w     r0, [r0, #0xcc]
0800fe26: 081a       subs      r0, r1, r0
0800fe28: 5549       ldr       r1, [pc, #0x154] ; [0x800ff80] = 0x20000278 
0800fe2a: 0860       str       r0, [r1]
0800fe2c: 4f48       ldr       r0, [pc, #0x13c] ; [0x800ff6c] = 0x20003318 
0800fe2e: 4169       ldr       r1, [r0, #0x14]
0800fe30: 4f48       ldr       r0, [pc, #0x13c] ; [0x800ff70] = 0x20003338 
0800fe32: d0f8d000   ldr.w     r0, [r0, #0xd0]
0800fe36: 081a       subs      r0, r1, r0
0800fe38: 5249       ldr       r1, [pc, #0x148] ; [0x800ff84] = 0x2000027c 
0800fe3a: 0860       str       r0, [r1]
0800fe3c: 4b48       ldr       r0, [pc, #0x12c] ; [0x800ff6c] = 0x20003318 
0800fe3e: 8169       ldr       r1, [r0, #0x18]
0800fe40: 4b48       ldr       r0, [pc, #0x12c] ; [0x800ff70] = 0x20003338 
0800fe42: d0f8d400   ldr.w     r0, [r0, #0xd4]
0800fe46: 081a       subs      r0, r1, r0
0800fe48: 4f49       ldr       r1, [pc, #0x13c] ; [0x800ff88] = 0x20000280 
0800fe4a: 0860       str       r0, [r1]
0800fe4c: 4948       ldr       r0, [pc, #0x124] ; [0x800ff74] = 0x20000284 
0800fe4e: 0168       ldr       r1, [r0]
0800fe50: 4e48       ldr       r0, [pc, #0x138] ; [0x800ff8c] = 0x20000230 
0800fe52: fbf75bfb   bl        #0x800b50c
0800fe56: 4649       ldr       r1, [pc, #0x118] ; [0x800ff70] = 0x20003338 
0800fe58: c863       str       r0, [r1, #0x3c]
0800fe5a: 4748       ldr       r0, [pc, #0x11c] ; [0x800ff78] = 0x20000288 
0800fe5c: 0168       ldr       r1, [r0]
0800fe5e: 4c48       ldr       r0, [pc, #0x130] ; [0x800ff90] = 0x2000023c 
0800fe60: fbf754fb   bl        #0x800b50c
0800fe64: 4249       ldr       r1, [pc, #0x108] ; [0x800ff70] = 0x20003338 
0800fe66: 0864       str       r0, [r1, #0x40]
0800fe68: 4448       ldr       r0, [pc, #0x110] ; [0x800ff7c] = 0x2000028c 
0800fe6a: 0168       ldr       r1, [r0]
0800fe6c: 4948       ldr       r0, [pc, #0x124] ; [0x800ff94] = 0x20000248 
0800fe6e: fbf74dfb   bl        #0x800b50c
0800fe72: 3f49       ldr       r1, [pc, #0xfc] ; [0x800ff70] = 0x20003338 
0800fe74: 4864       str       r0, [r1, #0x44]
0800fe76: 4348       ldr       r0, [pc, #0x10c] ; [0x800ff84] = 0x2000027c 
0800fe78: 0068       ldr       r0, [r0]
0800fe7a: 4142       rsbs      r1, r0, #0
0800fe7c: 4648       ldr       r0, [pc, #0x118] ; [0x800ff98] = 0x20000254 
0800fe7e: fbf745fb   bl        #0x800b50c
0800fe82: 3b49       ldr       r1, [pc, #0xec] ; [0x800ff70] = 0x20003338 
0800fe84: 8860       str       r0, [r1, #8]
0800fe86: 3e48       ldr       r0, [pc, #0xf8] ; [0x800ff80] = 0x20000278 
0800fe88: 0168       ldr       r1, [r0]
0800fe8a: 4448       ldr       r0, [pc, #0x110] ; [0x800ff9c] = 0x20000260 
0800fe8c: fbf73efb   bl        #0x800b50c
0800fe90: 3749       ldr       r1, [pc, #0xdc] ; [0x800ff70] = 0x20003338 
0800fe92: c860       str       r0, [r1, #0xc]
0800fe94: 3c48       ldr       r0, [pc, #0xf0] ; [0x800ff88] = 0x20000280 
0800fe96: 0168       ldr       r1, [r0]
0800fe98: 4148       ldr       r0, [pc, #0x104] ; [0x800ffa0] = 0x2000026c 
0800fe9a: fbf737fb   bl        #0x800b50c
0800fe9e: 3449       ldr       r1, [pc, #0xd0] ; [0x800ff70] = 0x20003338 
0800fea0: 0861       str       r0, [r1, #0x10]
0800fea2: d1e90641   ldrd      r4, r1, [r1, #0x18]
0800fea6: 41f28832   movw      r2, #0x1388
0800feaa: 0023       movs      r3, #0
0800feac: 2046       mov       r0, r4
0800feae: f8f7aefa   bl        #0x800840e
0800feb2: 2f49       ldr       r1, [pc, #0xbc] ; [0x800ff70] = 0x20003338 
0800feb4: 8968       ldr       r1, [r1, #8]
0800feb6: 081a       subs      r0, r1, r0
0800feb8: 2d49       ldr       r1, [pc, #0xb4] ; [0x800ff70] = 0x20003338 
0800feba: 0863       str       r0, [r1, #0x30]
0800febc: 0846       mov       r0, r1
0800febe: 41f28832   movw      r2, #0x1388
0800fec2: 4ff00003   mov.w     r3, #0
0800fec6: d0e90841   ldrd      r4, r1, [r0, #0x20]
0800feca: 2046       mov       r0, r4
0800fecc: f8f79ffa   bl        #0x800840e
0800fed0: 2749       ldr       r1, [pc, #0x9c] ; [0x800ff70] = 0x20003338 
0800fed2: c968       ldr       r1, [r1, #0xc]
0800fed4: 081a       subs      r0, r1, r0
0800fed6: 2649       ldr       r1, [pc, #0x98] ; [0x800ff70] = 0x20003338 
0800fed8: 4863       str       r0, [r1, #0x34]
0800feda: d1e90a41   ldrd      r4, r1, [r1, #0x28]
0800fede: 41f28832   movw      r2, #0x1388
0800fee2: 4ff00003   mov.w     r3, #0
0800fee6: 2046       mov       r0, r4
0800fee8: f8f791fa   bl        #0x800840e
0800feec: 2049       ldr       r1, [pc, #0x80] ; [0x800ff70] = 0x20003338 
0800feee: 0969       ldr       r1, [r1, #0x10]
0800fef0: 081a       subs      r0, r1, r0
0800fef2: 1f49       ldr       r1, [pc, #0x7c] ; [0x800ff70] = 0x20003338 
0800fef4: 8863       str       r0, [r1, #0x38]
0800fef6: 0846       mov       r0, r1
0800fef8: c06b       ldr       r0, [r0, #0x3c]
0800fefa: b0f5805f   cmp.w     r0, #0x1000
0800fefe: 04dd       ble       #0x800ff0a
0800ff00: 4ff48051   mov.w     r1, #0x1000
0800ff04: 1a48       ldr       r0, [pc, #0x68] ; [0x800ff70] = 0x20003338 
0800ff06: c163       str       r1, [r0, #0x3c]
0800ff08: 07e0       b         #0x800ff1a
0800ff0a: 1948       ldr       r0, [pc, #0x64] ; [0x800ff70] = 0x20003338 
0800ff0c: c06b       ldr       r0, [r0, #0x3c]
0800ff0e: 10f5805f   cmn.w     r0, #0x1000
0800ff12: 02da       bge       #0x800ff1a
0800ff14: 2349       ldr       r1, [pc, #0x8c] ; [0x800ffa4] = 0xfffff000 
0800ff16: 1648       ldr       r0, [pc, #0x58] ; [0x800ff70] = 0x20003338 
0800ff18: c163       str       r1, [r0, #0x3c]
0800ff1a: 1548       ldr       r0, [pc, #0x54] ; [0x800ff70] = 0x20003338 

# Original v2.41 bytes, entry 0x080153f0, span 0x48
080153f0: 70b5       push      {r4, r5, r6, lr}
080153f2: 0546       mov       r5, r0
080153f4: 0c46       mov       r4, r1
080153f6: 15b9       cbnz      r5, #0x80153fe
080153f8: 00f0faf8   bl        #0x80155f0
080153fc: 70bd       pop       {r4, r5, r6, pc}
080153fe: 2404       lsls      r4, r4, #0x10
08015400: 0020       movs      r0, #0
08015402: 0b49       ldr       r1, [pc, #0x2c] ; [0x8015430] = 0x422101bc 
08015404: 0860       str       r0, [r1]
08015406: d820       movs      r0, #0xd8
08015408: faf7b0f8   bl        #0x800f56c
0801540c: c4f30740   ubfx      r0, r4, #0x10, #8
08015410: faf7acf8   bl        #0x800f56c
08015414: c4f30720   ubfx      r0, r4, #8, #8
08015418: faf7a8f8   bl        #0x800f56c
0801541c: e0b2       uxtb      r0, r4
0801541e: faf7a5f8   bl        #0x800f56c
08015422: 0120       movs      r0, #1
08015424: 0349       ldr       r1, [pc, #0xc] ; [0x8015434] = 0x42210000 
08015426: c1f8bc01   str.w     r0, [r1, #0x1bc]
0801542a: 00bf       nop       
0801542c: e6e7       b         #0x80153fc
0801542e: 0000       movs      r0, r0
08015430: bc01       lsls      r4, r7, #6
08015432: 2142       tst       r1, r4
08015434: 0000       movs      r0, r0
08015436: 2142       tst       r1, r4

# Original v2.41 bytes, entry 0x08015438, span 0x2c
08015438: 10b5       push      {r4, lr}
0801543a: 0446       mov       r4, r0
0801543c: 14b9       cbnz      r4, #0x8015444
0801543e: 00f0d7f8   bl        #0x80155f0
08015442: 10bd       pop       {r4, pc}
08015444: 0020       movs      r0, #0
08015446: 0549       ldr       r1, [pc, #0x14] ; [0x801545c] = 0x422101bc 
08015448: 0860       str       r0, [r1]
0801544a: c720       movs      r0, #0xc7
0801544c: faf78ef8   bl        #0x800f56c
08015450: 0120       movs      r0, #1
08015452: 0349       ldr       r1, [pc, #0xc] ; [0x8015460] = 0x42210000 
08015454: c1f8bc01   str.w     r0, [r1, #0x1bc]
08015458: 00bf       nop       
0801545a: f2e7       b         #0x8015442
0801545c: bc01       lsls      r4, r7, #6
0801545e: 2142       tst       r1, r4
08015460: 0000       movs      r0, r0
08015462: 2142       tst       r1, r4

# Original v2.41 bytes, entry 0x08015610, span 0x50
08015610: 2de9f041   push.w    {r4, r5, r6, r7, r8, lr}
08015614: 0646       mov       r6, r0
08015616: 0c46       mov       r4, r1
08015618: 1746       mov       r7, r2
0801561a: fff7e9ff   bl        #0x80155f0
0801561e: 0020       movs      r0, #0
08015620: 0e49       ldr       r1, [pc, #0x38] ; [0x801565c] = 0x422101bc 
08015622: 0860       str       r0, [r1]
08015624: 0220       movs      r0, #2
08015626: f9f7a1ff   bl        #0x800f56c
0801562a: c4f30740   ubfx      r0, r4, #0x10, #8
0801562e: f9f79dff   bl        #0x800f56c
08015632: c4f30720   ubfx      r0, r4, #8, #8
08015636: f9f799ff   bl        #0x800f56c
0801563a: e0b2       uxtb      r0, r4
0801563c: f9f796ff   bl        #0x800f56c
08015640: 0025       movs      r5, #0
08015642: 04e0       b         #0x801564e
08015644: 705d       ldrb      r0, [r6, r5]
08015646: f9f791ff   bl        #0x800f56c
0801564a: 681c       adds      r0, r5, #1
0801564c: 85b2       uxth      r5, r0
0801564e: bd42       cmp       r5, r7
08015650: f8db       blt       #0x8015644
08015652: 0120       movs      r0, #1
08015654: 0149       ldr       r1, [pc, #4] ; [0x801565c] = 0x422101bc 
08015656: 0860       str       r0, [r1]
08015658: bde8f081   pop.w     {r4, r5, r6, r7, r8, pc}
0801565c: bc01       lsls      r4, r7, #6
0801565e: 2142       tst       r1, r4

# Original v2.41 bytes, entry 0x08015660, span 0x20
08015660: 70b5       push      {r4, r5, r6, lr}
08015662: 0646       mov       r6, r0
08015664: 0d46       mov       r5, r1
08015666: e8b2       uxtb      r0, r5
08015668: c0f58074   rsb.w     r4, r0, #0x100
0801566c: 402c       cmp       r4, #0x40
0801566e: 00db       blt       #0x8015672
08015670: 4024       movs      r4, #0x40
08015672: 2246       mov       r2, r4
08015674: 2946       mov       r1, r5
08015676: 3046       mov       r0, r6
08015678: fff7caff   bl        #0x8015610
0801567c: 2046       mov       r0, r4
0801567e: 70bd       pop       {r4, r5, r6, pc}

# Original v2.41 bytes, entry 0x0801a4d0, span 0xe20
0801a4d0: 10b5       push      {r4, lr}
0801a4d2: f948       ldr       r0, [pc, #0x3e4] ; [0x801a8b8] = 0x200009dc 
0801a4d4: 0068       ldr       r0, [r0]
0801a4d6: 401c       adds      r0, r0, #1
0801a4d8: f749       ldr       r1, [pc, #0x3dc] ; [0x801a8b8] = 0x200009dc 
0801a4da: 0860       str       r0, [r1]
0801a4dc: f748       ldr       r0, [pc, #0x3dc] ; [0x801a8bc] = 0x200065f4 
0801a4de: 4078       ldrb      r0, [r0, #1]
0801a4e0: 38b1       cbz       r0, #0x801a4f2
0801a4e2: faf77fff   bl        #0x80153e4
0801a4e6: f549       ldr       r1, [pc, #0x3d4] ; [0x801a8bc] = 0x200065f4 
0801a4e8: 4870       strb      r0, [r1, #1]
0801a4ea: 0846       mov       r0, r1
0801a4ec: 4078       ldrb      r0, [r0, #1]
0801a4ee: 00b1       cbz       r0, #0x801a4f2
0801a4f0: 10bd       pop       {r4, pc}
0801a4f2: f248       ldr       r0, [pc, #0x3c8] ; [0x801a8bc] = 0x200065f4 
0801a4f4: 0078       ldrb      r0, [r0]
0801a4f6: 2428       cmp       r0, #0x24
0801a4f8: 70d0       beq       #0x801a5dc
0801a4fa: 0bdc       bgt       #0x801a514
0801a4fc: 0228       cmp       r0, #2
0801a4fe: 6ed0       beq       #0x801a5de
0801a500: 03dc       bgt       #0x801a50a
0801a502: 80b1       cbz       r0, #0x801a526
0801a504: 0128       cmp       r0, #1
0801a506: 52d1       bne       #0x801a5ae
0801a508: dbe3       b         #0x801acc2
0801a50a: 2228       cmp       r0, #0x22
0801a50c: 68d0       beq       #0x801a5e0
0801a50e: 2328       cmp       r0, #0x23
0801a510: f9d1       bne       #0x801a506
0801a512: fde3       b         #0x801ad10
0801a514: 2528       cmp       r0, #0x25
0801a516: 7cd0       beq       #0x801a612
0801a518: d228       cmp       r0, #0xd2
0801a51a: 7bd0       beq       #0x801a614
0801a51c: d328       cmp       r0, #0xd3
0801a51e: 7ad0       beq       #0x801a616
0801a520: d428       cmp       r0, #0xd4
0801a522: f0d1       bne       #0x801a506
0801a524: f5e3       b         #0x801ad12
0801a526: e648       ldr       r0, [pc, #0x398] ; [0x801a8c0] = 0x20006643 
0801a528: 0078       ldrb      r0, [r0]
0801a52a: 0028       cmp       r0, #0
0801a52c: 55d1       bne       #0x801a5da
0801a52e: e448       ldr       r0, [pc, #0x390] ; [0x801a8c0] = 0x20006643 
0801a530: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a534: 6028       cmp       r0, #0x60
0801a536: 06d1       bne       #0x801a546
0801a538: 0020       movs      r0, #0
0801a53a: e149       ldr       r1, [pc, #0x384] ; [0x801a8c0] = 0x20006643 
0801a53c: 81f83300   strb.w    r0, [r1, #0x33]
0801a540: 81f83200   strb.w    r0, [r1, #0x32]
0801a544: 2ee0       b         #0x801a5a4
0801a546: de48       ldr       r0, [pc, #0x378] ; [0x801a8c0] = 0x20006643 
0801a548: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a54c: 6128       cmp       r0, #0x61
0801a54e: 0cd1       bne       #0x801a56a
0801a550: db48       ldr       r0, [pc, #0x36c] ; [0x801a8c0] = 0x20006643 
0801a552: d0f80a00   ldr.w     r0, [r0, #0xa]
0801a556: 18b1       cbz       r0, #0x801a560
0801a558: 6120       movs      r0, #0x61
0801a55a: d949       ldr       r1, [pc, #0x364] ; [0x801a8c0] = 0x20006643 
0801a55c: 81f83300   strb.w    r0, [r1, #0x33]
0801a560: 0020       movs      r0, #0
0801a562: d749       ldr       r1, [pc, #0x35c] ; [0x801a8c0] = 0x20006643 
0801a564: 81f83200   strb.w    r0, [r1, #0x32]
0801a568: 1ce0       b         #0x801a5a4
0801a56a: d548       ldr       r0, [pc, #0x354] ; [0x801a8c0] = 0x20006643 
0801a56c: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a570: e028       cmp       r0, #0xe0
0801a572: 06d1       bne       #0x801a582
0801a574: 0020       movs      r0, #0
0801a576: d249       ldr       r1, [pc, #0x348] ; [0x801a8c0] = 0x20006643 
0801a578: 81f83300   strb.w    r0, [r1, #0x33]
0801a57c: 81f83200   strb.w    r0, [r1, #0x32]
0801a580: 10e0       b         #0x801a5a4
0801a582: cf48       ldr       r0, [pc, #0x33c] ; [0x801a8c0] = 0x20006643 
0801a584: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a588: e128       cmp       r0, #0xe1
0801a58a: 0bd1       bne       #0x801a5a4
0801a58c: cc48       ldr       r0, [pc, #0x330] ; [0x801a8c0] = 0x20006643 
0801a58e: d0f83f00   ldr.w     r0, [r0, #0x3f]
0801a592: 18b1       cbz       r0, #0x801a59c
0801a594: e120       movs      r0, #0xe1
0801a596: ca49       ldr       r1, [pc, #0x328] ; [0x801a8c0] = 0x20006643 
0801a598: 81f83300   strb.w    r0, [r1, #0x33]
0801a59c: 0020       movs      r0, #0
0801a59e: c849       ldr       r1, [pc, #0x320] ; [0x801a8c0] = 0x20006643 
0801a5a0: 81f83200   strb.w    r0, [r1, #0x32]
0801a5a4: c648       ldr       r0, [pc, #0x318] ; [0x801a8c0] = 0x20006643 
0801a5a6: 90f83300   ldrb.w    r0, [r0, #0x33]
0801a5aa: 0028       cmp       r0, #0
0801a5ac: 00dd       ble       #0x801a5b0
0801a5ae: efe3       b         #0x801ad90
0801a5b0: c348       ldr       r0, [pc, #0x30c] ; [0x801a8c0] = 0x20006643 
0801a5b2: 90f83400   ldrb.w    r0, [r0, #0x34]
0801a5b6: ef28       cmp       r0, #0xef
0801a5b8: 13d1       bne       #0x801a5e2
0801a5ba: c149       ldr       r1, [pc, #0x304] ; [0x801a8c0] = 0x20006643 
0801a5bc: 91f83400   ldrb.w    r0, [r1, #0x34]
0801a5c0: fff7b2fc   bl        #0x8019f28
0801a5c4: 10b1       cbz       r0, #0x801a5cc
0801a5c6: 3020       movs      r0, #0x30
0801a5c8: bd49       ldr       r1, [pc, #0x2f4] ; [0x801a8c0] = 0x20006643 
0801a5ca: 0870       strb      r0, [r1]
0801a5cc: 0020       movs      r0, #0
0801a5ce: bc49       ldr       r1, [pc, #0x2f0] ; [0x801a8c0] = 0x20006643 
0801a5d0: 81f83400   strb.w    r0, [r1, #0x34]
0801a5d4: 4a20       movs      r0, #0x4a
0801a5d6: 81f83500   strb.w    r0, [r1, #0x35]
0801a5da: b5e0       b         #0x801a748
0801a5dc: fee3       b         #0x801addc
0801a5de: fee3       b         #0x801adde
0801a5e0: fee3       b         #0x801ade0
0801a5e2: b748       ldr       r0, [pc, #0x2dc] ; [0x801a8c0] = 0x20006643 
0801a5e4: 90f83400   ldrb.w    r0, [r0, #0x34]
0801a5e8: 00f0f000   and       r0, r0, #0xf0
0801a5ec: e028       cmp       r0, #0xe0
0801a5ee: 13d1       bne       #0x801a618
0801a5f0: b349       ldr       r1, [pc, #0x2cc] ; [0x801a8c0] = 0x20006643 
0801a5f2: 91f83400   ldrb.w    r0, [r1, #0x34]
0801a5f6: fff7a9fc   bl        #0x8019f4c
0801a5fa: 10b1       cbz       r0, #0x801a602
0801a5fc: 3020       movs      r0, #0x30
0801a5fe: b049       ldr       r1, [pc, #0x2c0] ; [0x801a8c0] = 0x20006643 
0801a600: 0870       strb      r0, [r1]
0801a602: 0020       movs      r0, #0
0801a604: ae49       ldr       r1, [pc, #0x2b8] ; [0x801a8c0] = 0x20006643 
0801a606: 81f83400   strb.w    r0, [r1, #0x34]
0801a60a: 4a20       movs      r0, #0x4a
0801a60c: 81f83500   strb.w    r0, [r1, #0x35]
0801a610: 9ae0       b         #0x801a748
0801a612: e6e3       b         #0x801ade2
0801a614: e6e3       b         #0x801ade4
0801a616: e6e3       b         #0x801ade6
0801a618: a948       ldr       r0, [pc, #0x2a4] ; [0x801a8c0] = 0x20006643 
0801a61a: 90f83500   ldrb.w    r0, [r0, #0x35]
0801a61e: 0028       cmp       r0, #0
0801a620: 0edd       ble       #0x801a640
0801a622: ff20       movs      r0, #0xff
0801a624: fff792fc   bl        #0x8019f4c
0801a628: 10b1       cbz       r0, #0x801a630
0801a62a: 3020       movs      r0, #0x30
0801a62c: a449       ldr       r1, [pc, #0x290] ; [0x801a8c0] = 0x20006643 
0801a62e: 0870       strb      r0, [r1]
0801a630: a348       ldr       r0, [pc, #0x28c] ; [0x801a8c0] = 0x20006643 
0801a632: 90f83500   ldrb.w    r0, [r0, #0x35]
0801a636: 401e       subs      r0, r0, #1
0801a638: a149       ldr       r1, [pc, #0x284] ; [0x801a8c0] = 0x20006643 
0801a63a: 81f83500   strb.w    r0, [r1, #0x35]
0801a63e: 83e0       b         #0x801a748
0801a640: 9f48       ldr       r0, [pc, #0x27c] ; [0x801a8c0] = 0x20006643 
0801a642: 90f83400   ldrb.w    r0, [r0, #0x34]
0801a646: f028       cmp       r0, #0xf0
0801a648: 10d1       bne       #0x801a66c
0801a64a: 9d49       ldr       r1, [pc, #0x274] ; [0x801a8c0] = 0x20006643 
0801a64c: 91f83400   ldrb.w    r0, [r1, #0x34]
0801a650: fff77cfc   bl        #0x8019f4c
0801a654: 10b1       cbz       r0, #0x801a65c
0801a656: 3020       movs      r0, #0x30
0801a658: 9949       ldr       r1, [pc, #0x264] ; [0x801a8c0] = 0x20006643 
0801a65a: 0870       strb      r0, [r1]
0801a65c: 0020       movs      r0, #0
0801a65e: 9849       ldr       r1, [pc, #0x260] ; [0x801a8c0] = 0x20006643 
0801a660: 81f83400   strb.w    r0, [r1, #0x34]
0801a664: 4a20       movs      r0, #0x4a
0801a666: 81f83600   strb.w    r0, [r1, #0x36]
0801a66a: 6de0       b         #0x801a748
0801a66c: 9448       ldr       r0, [pc, #0x250] ; [0x801a8c0] = 0x20006643 
0801a66e: 90f83600   ldrb.w    r0, [r0, #0x36]
0801a672: 0028       cmp       r0, #0
0801a674: 0edd       ble       #0x801a694
0801a676: fe20       movs      r0, #0xfe
0801a678: fff768fc   bl        #0x8019f4c
0801a67c: 10b1       cbz       r0, #0x801a684
0801a67e: 3020       movs      r0, #0x30
0801a680: 8f49       ldr       r1, [pc, #0x23c] ; [0x801a8c0] = 0x20006643 
0801a682: 0870       strb      r0, [r1]
0801a684: 8e48       ldr       r0, [pc, #0x238] ; [0x801a8c0] = 0x20006643 
0801a686: 90f83600   ldrb.w    r0, [r0, #0x36]
0801a68a: 401e       subs      r0, r0, #1
0801a68c: 8c49       ldr       r1, [pc, #0x230] ; [0x801a8c0] = 0x20006643 
0801a68e: 81f83600   strb.w    r0, [r1, #0x36]
0801a692: 59e0       b         #0x801a748
0801a694: 8a48       ldr       r0, [pc, #0x228] ; [0x801a8c0] = 0x20006643 
0801a696: 90f83400   ldrb.w    r0, [r0, #0x34]
0801a69a: 0028       cmp       r0, #0
0801a69c: 0ddd       ble       #0x801a6ba
0801a69e: 8849       ldr       r1, [pc, #0x220] ; [0x801a8c0] = 0x20006643 
0801a6a0: 91f83400   ldrb.w    r0, [r1, #0x34]
0801a6a4: fff752fc   bl        #0x8019f4c
0801a6a8: 10b1       cbz       r0, #0x801a6b0
0801a6aa: 3020       movs      r0, #0x30
0801a6ac: 8449       ldr       r1, [pc, #0x210] ; [0x801a8c0] = 0x20006643 
0801a6ae: 0870       strb      r0, [r1]
0801a6b0: 0020       movs      r0, #0
0801a6b2: 8349       ldr       r1, [pc, #0x20c] ; [0x801a8c0] = 0x20006643 
0801a6b4: 81f83400   strb.w    r0, [r1, #0x34]
0801a6b8: 46e0       b         #0x801a748
0801a6ba: 8148       ldr       r0, [pc, #0x204] ; [0x801a8c0] = 0x20006643 
0801a6bc: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a6c0: 2328       cmp       r0, #0x23
0801a6c2: 02d1       bne       #0x801a6ca
0801a6c4: 7e49       ldr       r1, [pc, #0x1f8] ; [0x801a8c0] = 0x20006643 
0801a6c6: 0870       strb      r0, [r1]
0801a6c8: 3ee0       b         #0x801a748
0801a6ca: 7d48       ldr       r0, [pc, #0x1f4] ; [0x801a8c0] = 0x20006643 
0801a6cc: 90f86300   ldrb.w    r0, [r0, #0x63]
0801a6d0: 0028       cmp       r0, #0
0801a6d2: 0bdd       ble       #0x801a6ec
0801a6d4: 7a49       ldr       r1, [pc, #0x1e8] ; [0x801a8c0] = 0x20006643 
0801a6d6: 91f86300   ldrb.w    r0, [r1, #0x63]
0801a6da: fff795fb   bl        #0x8019e08
0801a6de: b020       movs      r0, #0xb0
0801a6e0: 7749       ldr       r1, [pc, #0x1dc] ; [0x801a8c0] = 0x20006643 
0801a6e2: 0870       strb      r0, [r1]
0801a6e4: 0020       movs      r0, #0
0801a6e6: 81f86300   strb.w    r0, [r1, #0x63]
0801a6ea: 2de0       b         #0x801a748
0801a6ec: 7448       ldr       r0, [pc, #0x1d0] ; [0x801a8c0] = 0x20006643 
0801a6ee: 90f83200   ldrb.w    r0, [r0, #0x32]
0801a6f2: a328       cmp       r0, #0xa3
0801a6f4: 02d1       bne       #0x801a6fc
0801a6f6: 7249       ldr       r1, [pc, #0x1c8] ; [0x801a8c0] = 0x20006643 
0801a6f8: 0870       strb      r0, [r1]
0801a6fa: 25e0       b         #0x801a748
0801a6fc: 7148       ldr       r0, [pc, #0x1c4] ; [0x801a8c4] = 0x200009d6 
0801a6fe: 0078       ldrb      r0, [r0]
0801a700: a528       cmp       r0, #0xa5
0801a702: 06d1       bne       #0x801a712
0801a704: 1020       movs      r0, #0x10
0801a706: 6e49       ldr       r1, [pc, #0x1b8] ; [0x801a8c0] = 0x20006643 
0801a708: 0870       strb      r0, [r1]
0801a70a: 0020       movs      r0, #0
0801a70c: 6d49       ldr       r1, [pc, #0x1b4] ; [0x801a8c4] = 0x200009d6 
0801a70e: 0870       strb      r0, [r1]
0801a710: 1ae0       b         #0x801a748
0801a712: 6c48       ldr       r0, [pc, #0x1b0] ; [0x801a8c4] = 0x200009d6 
0801a714: 0078       ldrb      r0, [r0]
0801a716: a628       cmp       r0, #0xa6
0801a718: 06d1       bne       #0x801a728
0801a71a: 9020       movs      r0, #0x90
0801a71c: 6849       ldr       r1, [pc, #0x1a0] ; [0x801a8c0] = 0x20006643 
0801a71e: 0870       strb      r0, [r1]
0801a720: 0020       movs      r0, #0
0801a722: 6849       ldr       r1, [pc, #0x1a0] ; [0x801a8c4] = 0x200009d6 
0801a724: 0870       strb      r0, [r1]
0801a726: 0fe0       b         #0x801a748
0801a728: 6348       ldr       r0, [pc, #0x18c] ; [0x801a8b8] = 0x200009dc 
0801a72a: 0068       ldr       r0, [r0]
0801a72c: 1521       movs      r1, #0x15
0801a72e: b0fbf1f2   udiv      r2, r0, r1
0801a732: 01fb1200   mls       r0, r1, r2, r0
0801a736: 1128       cmp       r0, #0x11
0801a738: 06d1       bne       #0x801a748
0801a73a: 0020       movs      r0, #0
0801a73c: fff706fc   bl        #0x8019f4c
0801a740: 10b1       cbz       r0, #0x801a748
0801a742: 3020       movs      r0, #0x30
0801a744: 5e49       ldr       r1, [pc, #0x178] ; [0x801a8c0] = 0x20006643 
0801a746: 0870       strb      r0, [r1]
0801a748: 5d48       ldr       r0, [pc, #0x174] ; [0x801a8c0] = 0x20006643 
0801a74a: 0078       ldrb      r0, [r0]
0801a74c: 9028       cmp       r0, #0x90
0801a74e: 7bd0       beq       #0x801a848
0801a750: 1bdc       bgt       #0x801a78a
0801a752: 2128       cmp       r0, #0x21
0801a754: 66d0       beq       #0x801a824
0801a756: 0bdc       bgt       #0x801a770
0801a758: 1128       cmp       r0, #0x11
0801a75a: 37d0       beq       #0x801a7cc
0801a75c: 03dc       bgt       #0x801a766
0801a75e: 68b3       cbz       r0, #0x801a7bc
0801a760: 1028       cmp       r0, #0x10
0801a762: 2bd1       bne       #0x801a7bc
0801a764: 2be0       b         #0x801a7be
0801a766: 1228       cmp       r0, #0x12
0801a768: 3ad0       beq       #0x801a7e0
0801a76a: 2028       cmp       r0, #0x20
0801a76c: f9d1       bne       #0x801a762
0801a76e: 4ee0       b         #0x801a80e
0801a770: 3028       cmp       r0, #0x30
0801a772: 6ad0       beq       #0x801a84a
0801a774: 04dc       bgt       #0x801a780
0801a776: 2228       cmp       r0, #0x22
0801a778: 7ad0       beq       #0x801a870
0801a77a: 2328       cmp       r0, #0x23
0801a77c: f1d1       bne       #0x801a762
0801a77e: a5e0       b         #0x801a8cc
0801a780: 3128       cmp       r0, #0x31
0801a782: 71d0       beq       #0x801a868
0801a784: 6028       cmp       r0, #0x60
0801a786: ecd1       bne       #0x801a762
0801a788: 47e2       b         #0x801ac1a
0801a78a: a328       cmp       r0, #0xa3
0801a78c: 6dd0       beq       #0x801a86a
0801a78e: 0cdc       bgt       #0x801a7aa
0801a790: a028       cmp       r0, #0xa0
0801a792: 6bd0       beq       #0x801a86c
0801a794: 04dc       bgt       #0x801a7a0
0801a796: 9128       cmp       r0, #0x91
0801a798: 69d0       beq       #0x801a86e
0801a79a: 9228       cmp       r0, #0x92
0801a79c: e1d1       bne       #0x801a762
0801a79e: 5ce2       b         #0x801ac5a
0801a7a0: a128       cmp       r0, #0xa1
0801a7a2: 77d0       beq       #0x801a894
0801a7a4: a228       cmp       r0, #0xa2
0801a7a6: dcd1       bne       #0x801a762
0801a7a8: a1e2       b         #0x801acee
0801a7aa: b028       cmp       r0, #0xb0
0801a7ac: 73d0       beq       #0x801a896
0801a7ae: b128       cmp       r0, #0xb1
0801a7b0: 72d0       beq       #0x801a898
0801a7b2: e028       cmp       r0, #0xe0
0801a7b4: 71d0       beq       #0x801a89a
0801a7b6: ff28       cmp       r0, #0xff
0801a7b8: d3d1       bne       #0x801a762
0801a7ba: f9e3       b         #0x801afb0
0801a7bc: 07e2       b         #0x801abce
0801a7be: 2220       movs      r0, #0x22
0801a7c0: 3e49       ldr       r1, [pc, #0xf8] ; [0x801a8bc] = 0x200065f4 
0801a7c2: 8870       strb      r0, [r1, #2]
0801a7c4: 1120       movs      r0, #0x11
0801a7c6: 3e49       ldr       r1, [pc, #0xf8] ; [0x801a8c0] = 0x20006643 
0801a7c8: 0870       strb      r0, [r1]
0801a7ca: f7e7       b         #0x801a7bc
0801a7cc: 2020       movs      r0, #0x20
0801a7ce: 3b49       ldr       r1, [pc, #0xec] ; [0x801a8bc] = 0x200065f4 
0801a7d0: c1f80b00   str.w     r0, [r1, #0xb]
0801a7d4: 0220       movs      r0, #2
0801a7d6: 8870       strb      r0, [r1, #2]
0801a7d8: 1220       movs      r0, #0x12
0801a7da: 3949       ldr       r1, [pc, #0xe4] ; [0x801a8c0] = 0x20006643 
0801a7dc: 0870       strb      r0, [r1]
0801a7de: ede7       b         #0x801a7bc
0801a7e0: 3948       ldr       r0, [pc, #0xe4] ; [0x801a8c8] = 0x1451090 
0801a7e2: 3649       ldr       r1, [pc, #0xd8] ; [0x801a8bc] = 0x200065f4 
0801a7e4: c1f80f00   str.w     r0, [r1, #0xf]
0801a7e8: 0420       movs      r0, #4
0801a7ea: c1f80700   str.w     r0, [r1, #7]
0801a7ee: 0020       movs      r0, #0
0801a7f0: c1f80b00   str.w     r0, [r1, #0xb]
0801a7f4: 4ff40010   mov.w     r0, #0x200000
0801a7f8: c1f80300   str.w     r0, [r1, #3]
0801a7fc: 0320       movs      r0, #3
0801a7fe: 8870       strb      r0, [r1, #2]
0801a800: 0020       movs      r0, #0
0801a802: 2f49       ldr       r1, [pc, #0xbc] ; [0x801a8c0] = 0x20006643 
0801a804: c1f82e00   str.w     r0, [r1, #0x2e]
0801a808: 2020       movs      r0, #0x20
0801a80a: 0870       strb      r0, [r1]
0801a80c: d6e7       b         #0x801a7bc
0801a80e: 0020       movs      r0, #0
0801a810: 2b49       ldr       r1, [pc, #0xac] ; [0x801a8c0] = 0x20006643 
0801a812: c1f80200   str.w     r0, [r1, #2]
0801a816: 43f6ff70   movw      r0, #0x3fff
0801a81a: c1f80600   str.w     r0, [r1, #6]
0801a81e: 2120       movs      r0, #0x21
0801a820: 0870       strb      r0, [r1]
0801a822: 00bf       nop       
0801a824: 0022       movs      r2, #0
0801a826: 2649       ldr       r1, [pc, #0x98] ; [0x801a8c0] = 0x20006643 
0801a828: 891d       adds      r1, r1, #6
0801a82a: 081f       subs      r0, r1, #4
0801a82c: fff7f6fd   bl        #0x801a41c
0801a830: 0446       mov       r4, r0
0801a832: 012c       cmp       r4, #1
0801a834: 0bd1       bne       #0x801a84e
0801a836: 2248       ldr       r0, [pc, #0x88] ; [0x801a8c0] = 0x20006643 
0801a838: d0f80200   ldr.w     r0, [r0, #2]
0801a83c: 2049       ldr       r1, [pc, #0x80] ; [0x801a8c0] = 0x20006643 
0801a83e: c1f82e00   str.w     r0, [r1, #0x2e]
0801a842: 2320       movs      r0, #0x23
0801a844: 0870       strb      r0, [r1]
0801a846: 0ee0       b         #0x801a866
0801a848: f4e1       b         #0x801ac34
0801a84a: 0ee1       b         #0x801aa6a
0801a84c: 10e0       b         #0x801a870
0801a84e: 022c       cmp       r4, #2
0801a850: 09d1       bne       #0x801a866
0801a852: 6003       lsls      r0, r4, #0xd
0801a854: 1a49       ldr       r1, [pc, #0x68] ; [0x801a8c0] = 0x20006643 
0801a856: c1f80200   str.w     r0, [r1, #2]
0801a85a: 47f6ff70   movw      r0, #0x7fff
0801a85e: c1f80600   str.w     r0, [r1, #6]
0801a862: 2220       movs      r0, #0x22
0801a864: 0870       strb      r0, [r1]
0801a866: a9e7       b         #0x801a7bc
0801a868: b2e1       b         #0x801abd0
0801a86a: 61e2       b         #0x801ad30
0801a86c: 0ce2       b         #0x801ac88
0801a86e: e9e1       b         #0x801ac44
0801a870: 0022       movs      r2, #0
0801a872: 1349       ldr       r1, [pc, #0x4c] ; [0x801a8c0] = 0x20006643 
0801a874: 891d       adds      r1, r1, #6
0801a876: 081f       subs      r0, r1, #4
0801a878: fff7d0fd   bl        #0x801a41c
0801a87c: 0446       mov       r4, r0
0801a87e: 012c       cmp       r4, #1
0801a880: 0cd1       bne       #0x801a89c
0801a882: 0f48       ldr       r0, [pc, #0x3c] ; [0x801a8c0] = 0x20006643 
0801a884: d0f80200   ldr.w     r0, [r0, #2]
0801a888: 0d49       ldr       r1, [pc, #0x34] ; [0x801a8c0] = 0x20006643 
0801a88a: c1f82e00   str.w     r0, [r1, #0x2e]
0801a88e: 2320       movs      r0, #0x23
0801a890: 0870       strb      r0, [r1]
0801a892: 0fe0       b         #0x801a8b4
0801a894: 03e2       b         #0x801ac9e
0801a896: 1ae3       b         #0x801aece
0801a898: c3e3       b         #0x801b022
0801a89a: e6e3       b         #0x801b06a
0801a89c: 022c       cmp       r4, #2
0801a89e: 09d1       bne       #0x801a8b4
0801a8a0: 0020       movs      r0, #0
0801a8a2: 0749       ldr       r1, [pc, #0x1c] ; [0x801a8c0] = 0x20006643 
0801a8a4: c1f82e00   str.w     r0, [r1, #0x2e]
0801a8a8: 2220       movs      r0, #0x22
0801a8aa: 0449       ldr       r1, [pc, #0x10] ; [0x801a8bc] = 0x200065f4 
0801a8ac: 8870       strb      r0, [r1, #2]
0801a8ae: 2320       movs      r0, #0x23
0801a8b0: 0349       ldr       r1, [pc, #0xc] ; [0x801a8c0] = 0x20006643 
0801a8b2: 0870       strb      r0, [r1]
0801a8b4: ece3       b         #0x801b090
0801a8b6: 0000       movs      r0, r0
0801a8b8: dc09       lsrs      r4, r3, #7
0801a8ba: 0020       movs      r0, #0
0801a8bc: f465       str       r4, [r6, #0x5c]
0801a8be: 0020       movs      r0, #0
0801a8c0: 4366       str       r3, [r0, #0x64]
0801a8c2: 0020       movs      r0, #0
0801a8c4: d609       lsrs      r6, r2, #7
0801a8c6: 0020       movs      r0, #0
0801a8c8: 9010       asrs      r0, r2, #2
0801a8ca: 4501       lsls      r5, r0, #5
0801a8cc: 43f6f870   movw      r0, #0x3ff8
0801a8d0: fc49       ldr       r1, [pc, #0x3f0] ; [0x801acc4] = 0x20006643 
0801a8d2: c1f80a00   str.w     r0, [r1, #0xa]
0801a8d6: 0846       mov       r0, r1
0801a8d8: d0f80a00   ldr.w     r0, [r0, #0xa]
0801a8dc: 401e       subs      r0, r0, #1
0801a8de: c1f80e00   str.w     r0, [r1, #0xe]
0801a8e2: 0846       mov       r0, r1
0801a8e4: c08d       ldrh      r0, [r0, #0x2e]
0801a8e6: c989       ldrh      r1, [r1, #0xe]
0801a8e8: 401a       subs      r0, r0, r1
0801a8ea: 401e       subs      r0, r0, #1
0801a8ec: c0f30e04   ubfx      r4, r0, #0, #0xf
0801a8f0: a001       lsls      r0, r4, #6
0801a8f2: faf757fe   bl        #0x80155a4
0801a8f6: 401c       adds      r0, r0, #1
0801a8f8: f0b9       cbnz      r0, #0x801a938
0801a8fa: f248       ldr       r0, [pc, #0x3c8] ; [0x801acc4] = 0x20006643 
0801a8fc: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801a900: f049       ldr       r1, [pc, #0x3c0] ; [0x801acc4] = 0x20006643 
0801a902: d1f80e10   ldr.w     r1, [r1, #0xe]
0801a906: 8842       cmp       r0, r1
0801a908: 16d8       bhi       #0x801a938
0801a90a: ee48       ldr       r0, [pc, #0x3b8] ; [0x801acc4] = 0x20006643 
0801a90c: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801a910: 60b1       cbz       r0, #0x801a92c
0801a912: ec48       ldr       r0, [pc, #0x3b0] ; [0x801acc4] = 0x20006643 
0801a914: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801a918: 401e       subs      r0, r0, #1
0801a91a: ea49       ldr       r1, [pc, #0x3a8] ; [0x801acc4] = 0x20006643 
0801a91c: c1f80e00   str.w     r0, [r1, #0xe]
0801a920: 0846       mov       r0, r1
0801a922: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801a926: c1f80a00   str.w     r0, [r1, #0xa]
0801a92a: 05e0       b         #0x801a938
0801a92c: 0020       movs      r0, #0
0801a92e: e549       ldr       r1, [pc, #0x394] ; [0x801acc4] = 0x20006643 
0801a930: c1f80e00   str.w     r0, [r1, #0xe]
0801a934: c1f80a00   str.w     r0, [r1, #0xa]
0801a938: e248       ldr       r0, [pc, #0x388] ; [0x801acc4] = 0x20006643 
0801a93a: d0f80a00   ldr.w     r0, [r0, #0xa]
0801a93e: 88b9       cbnz      r0, #0x801a964
0801a940: 0020       movs      r0, #0
0801a942: e049       ldr       r1, [pc, #0x380] ; [0x801acc4] = 0x20006643 
0801a944: 81f83200   strb.w    r0, [r1, #0x32]
0801a948: 0846       mov       r0, r1
0801a94a: 90f86800   ldrb.w    r0, [r0, #0x68]
0801a94e: 28b9       cbnz      r0, #0x801a95c
0801a950: a020       movs      r0, #0xa0
0801a952: 0870       strb      r0, [r1]
0801a954: 0120       movs      r0, #1
0801a956: 81f86800   strb.w    r0, [r1, #0x68]
0801a95a: 02e0       b         #0x801a962
0801a95c: 0020       movs      r0, #0
0801a95e: d949       ldr       r1, [pc, #0x364] ; [0x801acc4] = 0x20006643 
0801a960: 0870       strb      r0, [r1]
0801a962: 95e3       b         #0x801b090
0801a964: d748       ldr       r0, [pc, #0x35c] ; [0x801acc4] = 0x20006643 
0801a966: c08d       ldrh      r0, [r0, #0x2e]
0801a968: d649       ldr       r1, [pc, #0x358] ; [0x801acc4] = 0x20006643 
0801a96a: c989       ldrh      r1, [r1, #0xe]
0801a96c: 401a       subs      r0, r0, r1
0801a96e: 401e       subs      r0, r0, #1
0801a970: c0f30e04   ubfx      r4, r0, #0, #0xf
0801a974: 0421       movs      r1, #4
0801a976: 01eb8410   add.w     r0, r1, r4, lsl #6
0801a97a: faf713fe   bl        #0x80155a4
0801a97e: d149       ldr       r1, [pc, #0x344] ; [0x801acc4] = 0x20006643 
0801a980: c1f81200   str.w     r0, [r1, #0x12]
0801a984: 0020       movs      r0, #0
0801a986: c1f81600   str.w     r0, [r1, #0x16]
0801a98a: 0846       mov       r0, r1
0801a98c: c08d       ldrh      r0, [r0, #0x2e]
0801a98e: 401e       subs      r0, r0, #1
0801a990: c0f30e04   ubfx      r4, r0, #0, #0xf
0801a994: 0421       movs      r1, #4
0801a996: 01eb8410   add.w     r0, r1, r4, lsl #6
0801a99a: faf703fe   bl        #0x80155a4
0801a99e: c949       ldr       r1, [pc, #0x324] ; [0x801acc4] = 0x20006643 
0801a9a0: c1f81a00   str.w     r0, [r1, #0x1a]
0801a9a4: 0846       mov       r0, r1
0801a9a6: d0f81e00   ldr.w     r0, [r0, #0x1e]
0801a9aa: 18b9       cbnz      r0, #0x801a9b4
0801a9ac: 4ff6fe70   movw      r0, #0xfffe
0801a9b0: c1f81e00   str.w     r0, [r1, #0x1e]
0801a9b4: c348       ldr       r0, [pc, #0x30c] ; [0x801acc4] = 0x20006643 
0801a9b6: d0f81e00   ldr.w     r0, [r0, #0x1e]
0801a9ba: c249       ldr       r1, [pc, #0x308] ; [0x801acc4] = 0x20006643 
0801a9bc: d1f80e10   ldr.w     r1, [r1, #0xe]
0801a9c0: 8842       cmp       r0, r1
0801a9c2: 05d9       bls       #0x801a9d0
0801a9c4: bf48       ldr       r0, [pc, #0x2fc] ; [0x801acc4] = 0x20006643 
0801a9c6: d0f80e00   ldr.w     r0, [r0, #0xe]
0801a9ca: be49       ldr       r1, [pc, #0x2f8] ; [0x801acc4] = 0x20006643 
0801a9cc: c1f81e00   str.w     r0, [r1, #0x1e]
0801a9d0: bc48       ldr       r0, [pc, #0x2f0] ; [0x801acc4] = 0x20006643 
0801a9d2: c08d       ldrh      r0, [r0, #0x2e]
0801a9d4: bb49       ldr       r1, [pc, #0x2ec] ; [0x801acc4] = 0x20006643 
0801a9d6: c98b       ldrh      r1, [r1, #0x1e]
0801a9d8: 401a       subs      r0, r0, r1
0801a9da: 401e       subs      r0, r0, #1
0801a9dc: c0f30e04   ubfx      r4, r0, #0, #0xf
0801a9e0: 0421       movs      r1, #4
0801a9e2: 01eb8410   add.w     r0, r1, r4, lsl #6
0801a9e6: faf7ddfd   bl        #0x80155a4
0801a9ea: b649       ldr       r1, [pc, #0x2d8] ; [0x801acc4] = 0x20006643 
0801a9ec: c1f82200   str.w     r0, [r1, #0x22]
0801a9f0: 0846       mov       r0, r1
0801a9f2: d0f82600   ldr.w     r0, [r0, #0x26]
0801a9f6: d1f81e10   ldr.w     r1, [r1, #0x1e]
0801a9fa: 8842       cmp       r0, r1
0801a9fc: 05d9       bls       #0x801aa0a
0801a9fe: b148       ldr       r0, [pc, #0x2c4] ; [0x801acc4] = 0x20006643 
0801aa00: d0f81e00   ldr.w     r0, [r0, #0x1e]
0801aa04: af49       ldr       r1, [pc, #0x2bc] ; [0x801acc4] = 0x20006643 
0801aa06: c1f82600   str.w     r0, [r1, #0x26]
0801aa0a: ae48       ldr       r0, [pc, #0x2b8] ; [0x801acc4] = 0x20006643 
0801aa0c: c08d       ldrh      r0, [r0, #0x2e]
0801aa0e: ad49       ldr       r1, [pc, #0x2b4] ; [0x801acc4] = 0x20006643 
0801aa10: c98c       ldrh      r1, [r1, #0x26]
0801aa12: 401a       subs      r0, r0, r1
0801aa14: 401e       subs      r0, r0, #1
0801aa16: c0f30e04   ubfx      r4, r0, #0, #0xf
0801aa1a: 0421       movs      r1, #4
0801aa1c: 01eb8410   add.w     r0, r1, r4, lsl #6
0801aa20: faf7c0fd   bl        #0x80155a4
0801aa24: a749       ldr       r1, [pc, #0x29c] ; [0x801acc4] = 0x20006643 
0801aa26: c1f82a00   str.w     r0, [r1, #0x2a]
0801aa2a: 0846       mov       r0, r1
0801aa2c: c08b       ldrh      r0, [r0, #0x1e]
0801aa2e: a1f86900   strh.w    r0, [r1, #0x69]
0801aa32: 0020       movs      r0, #0
0801aa34: a1f86b00   strh.w    r0, [r1, #0x6b]
0801aa38: 0846       mov       r0, r1
0801aa3a: 90f83200   ldrb.w    r0, [r0, #0x32]
0801aa3e: 2328       cmp       r0, #0x23
0801aa40: 01d1       bne       #0x801aa46
0801aa42: 81f83300   strb.w    r0, [r1, #0x33]
0801aa46: 0020       movs      r0, #0
0801aa48: 9e49       ldr       r1, [pc, #0x278] ; [0x801acc4] = 0x20006643 
0801aa4a: 81f83200   strb.w    r0, [r1, #0x32]
0801aa4e: 0846       mov       r0, r1
0801aa50: 90f86800   ldrb.w    r0, [r0, #0x68]
0801aa54: 28b9       cbnz      r0, #0x801aa62
0801aa56: a020       movs      r0, #0xa0
0801aa58: 0870       strb      r0, [r1]
0801aa5a: 0120       movs      r0, #1
0801aa5c: 81f86800   strb.w    r0, [r1, #0x68]
0801aa60: 02e0       b         #0x801aa68
0801aa62: 0020       movs      r0, #0
0801aa64: 9749       ldr       r1, [pc, #0x25c] ; [0x801acc4] = 0x20006643 
0801aa66: 0870       strb      r0, [r1]
0801aa68: 12e3       b         #0x801b090
0801aa6a: 9648       ldr       r0, [pc, #0x258] ; [0x801acc4] = 0x20006643 
0801aa6c: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aa70: 88bb       cbnz      r0, #0x801aad6
0801aa72: 0020       movs      r0, #0
0801aa74: faf796fd   bl        #0x80155a4
0801aa78: 401c       adds      r0, r0, #1
0801aa7a: 20bb       cbnz      r0, #0x801aac6
0801aa7c: 4022       movs      r2, #0x40
0801aa7e: 9249       ldr       r1, [pc, #0x248] ; [0x801acc8] = 0x20006534 
0801aa80: 9248       ldr       r0, [pc, #0x248] ; [0x801accc] = 0x20006603 
0801aa82: edf707fd   bl        #0x8008494
0801aa86: 4020       movs      r0, #0x40
0801aa88: 9049       ldr       r1, [pc, #0x240] ; [0x801accc] = 0x20006603 
0801aa8a: 0f39       subs      r1, #0xf
0801aa8c: c1f80700   str.w     r0, [r1, #7]
0801aa90: 0020       movs      r0, #0
0801aa92: c1f80b00   str.w     r0, [r1, #0xb]
0801aa96: 8b48       ldr       r0, [pc, #0x22c] ; [0x801acc4] = 0x20006643 
0801aa98: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aa9c: 8001       lsls      r0, r0, #6
0801aa9e: c1f80300   str.w     r0, [r1, #3]
0801aaa2: 0320       movs      r0, #3
0801aaa4: 8870       strb      r0, [r1, #2]
0801aaa6: 8748       ldr       r0, [pc, #0x21c] ; [0x801acc4] = 0x20006643 
0801aaa8: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aaac: 401c       adds      r0, r0, #1
0801aaae: 8549       ldr       r1, [pc, #0x214] ; [0x801acc4] = 0x20006643 
0801aab0: c1f82e00   str.w     r0, [r1, #0x2e]
0801aab4: 0846       mov       r0, r1
0801aab6: c08d       ldrh      r0, [r0, #0x2e]
0801aab8: c0f30e00   ubfx      r0, r0, #0, #0xf
0801aabc: c1f82e00   str.w     r0, [r1, #0x2e]
0801aac0: 0020       movs      r0, #0
0801aac2: 0870       strb      r0, [r1]
0801aac4: 83e0       b         #0x801abce
0801aac6: 2320       movs      r0, #0x23
0801aac8: 8049       ldr       r1, [pc, #0x200] ; [0x801accc] = 0x20006603 
0801aaca: 0f39       subs      r1, #0xf
0801aacc: 8870       strb      r0, [r1, #2]
0801aace: 3120       movs      r0, #0x31
0801aad0: 7c49       ldr       r1, [pc, #0x1f0] ; [0x801acc4] = 0x20006643 
0801aad2: 0870       strb      r0, [r1]
0801aad4: 7be0       b         #0x801abce
0801aad6: ffe7       b         #0x801aad8
0801aad8: 7a48       ldr       r0, [pc, #0x1e8] ; [0x801acc4] = 0x20006643 
0801aada: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aade: 43f6ff71   movw      r1, #0x3fff
0801aae2: 8842       cmp       r0, r1
0801aae4: 07d1       bne       #0x801aaf6
0801aae6: 2420       movs      r0, #0x24
0801aae8: 7849       ldr       r1, [pc, #0x1e0] ; [0x801accc] = 0x20006603 
0801aaea: 0f39       subs      r1, #0xf
0801aaec: 8870       strb      r0, [r1, #2]
0801aaee: 3120       movs      r0, #0x31
0801aaf0: 7449       ldr       r1, [pc, #0x1d0] ; [0x801acc4] = 0x20006643 
0801aaf2: 0870       strb      r0, [r1]
0801aaf4: 6be0       b         #0x801abce
0801aaf6: 7348       ldr       r0, [pc, #0x1cc] ; [0x801acc4] = 0x20006643 
0801aaf8: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aafc: b0f5804f   cmp.w     r0, #0x4000
0801ab00: 32d1       bne       #0x801ab68
0801ab02: 4ff48010   mov.w     r0, #0x100000
0801ab06: faf74dfd   bl        #0x80155a4
0801ab0a: 401c       adds      r0, r0, #1
0801ab0c: 20bb       cbnz      r0, #0x801ab58
0801ab0e: 4022       movs      r2, #0x40
0801ab10: 6d49       ldr       r1, [pc, #0x1b4] ; [0x801acc8] = 0x20006534 
0801ab12: 6e48       ldr       r0, [pc, #0x1b8] ; [0x801accc] = 0x20006603 
0801ab14: edf7befc   bl        #0x8008494
0801ab18: 4020       movs      r0, #0x40
0801ab1a: 6c49       ldr       r1, [pc, #0x1b0] ; [0x801accc] = 0x20006603 
0801ab1c: 0f39       subs      r1, #0xf
0801ab1e: c1f80700   str.w     r0, [r1, #7]
0801ab22: 0020       movs      r0, #0
0801ab24: c1f80b00   str.w     r0, [r1, #0xb]
0801ab28: 6648       ldr       r0, [pc, #0x198] ; [0x801acc4] = 0x20006643 
0801ab2a: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801ab2e: 8001       lsls      r0, r0, #6
0801ab30: c1f80300   str.w     r0, [r1, #3]
0801ab34: 0320       movs      r0, #3
0801ab36: 8870       strb      r0, [r1, #2]
0801ab38: 6248       ldr       r0, [pc, #0x188] ; [0x801acc4] = 0x20006643 
0801ab3a: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801ab3e: 401c       adds      r0, r0, #1
0801ab40: 6049       ldr       r1, [pc, #0x180] ; [0x801acc4] = 0x20006643 
0801ab42: c1f82e00   str.w     r0, [r1, #0x2e]
0801ab46: 0846       mov       r0, r1
0801ab48: c08d       ldrh      r0, [r0, #0x2e]
0801ab4a: c0f30e00   ubfx      r0, r0, #0, #0xf
0801ab4e: c1f82e00   str.w     r0, [r1, #0x2e]
0801ab52: 0020       movs      r0, #0
0801ab54: 0870       strb      r0, [r1]
0801ab56: 3ae0       b         #0x801abce
0801ab58: 2420       movs      r0, #0x24
0801ab5a: 5c49       ldr       r1, [pc, #0x170] ; [0x801accc] = 0x20006603 
0801ab5c: 0f39       subs      r1, #0xf
0801ab5e: 8870       strb      r0, [r1, #2]
0801ab60: 3120       movs      r0, #0x31
0801ab62: 5849       ldr       r1, [pc, #0x160] ; [0x801acc4] = 0x20006643 
0801ab64: 0870       strb      r0, [r1]
0801ab66: 32e0       b         #0x801abce
0801ab68: 5648       ldr       r0, [pc, #0x158] ; [0x801acc4] = 0x20006643 
0801ab6a: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801ab6e: 47f6ff71   movw      r1, #0x7fff
0801ab72: 8842       cmp       r0, r1
0801ab74: 07d1       bne       #0x801ab86
0801ab76: 2320       movs      r0, #0x23
0801ab78: 5449       ldr       r1, [pc, #0x150] ; [0x801accc] = 0x20006603 
0801ab7a: 0f39       subs      r1, #0xf
0801ab7c: 8870       strb      r0, [r1, #2]
0801ab7e: 3120       movs      r0, #0x31
0801ab80: 5049       ldr       r1, [pc, #0x140] ; [0x801acc4] = 0x20006643 
0801ab82: 0870       strb      r0, [r1]
0801ab84: 23e0       b         #0x801abce
0801ab86: 4022       movs      r2, #0x40
0801ab88: 4f49       ldr       r1, [pc, #0x13c] ; [0x801acc8] = 0x20006534 
0801ab8a: 5048       ldr       r0, [pc, #0x140] ; [0x801accc] = 0x20006603 
0801ab8c: edf782fc   bl        #0x8008494
0801ab90: 4020       movs      r0, #0x40
0801ab92: 4e49       ldr       r1, [pc, #0x138] ; [0x801accc] = 0x20006603 
0801ab94: 0f39       subs      r1, #0xf
0801ab96: c1f80700   str.w     r0, [r1, #7]
0801ab9a: 0020       movs      r0, #0
0801ab9c: c1f80b00   str.w     r0, [r1, #0xb]
0801aba0: 4848       ldr       r0, [pc, #0x120] ; [0x801acc4] = 0x20006643 
0801aba2: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801aba6: 8001       lsls      r0, r0, #6
0801aba8: c1f80300   str.w     r0, [r1, #3]
0801abac: 0320       movs      r0, #3
0801abae: 8870       strb      r0, [r1, #2]
0801abb0: 4448       ldr       r0, [pc, #0x110] ; [0x801acc4] = 0x20006643 
0801abb2: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801abb6: 401c       adds      r0, r0, #1
0801abb8: 4249       ldr       r1, [pc, #0x108] ; [0x801acc4] = 0x20006643 
0801abba: c1f82e00   str.w     r0, [r1, #0x2e]
0801abbe: 0846       mov       r0, r1
0801abc0: c08d       ldrh      r0, [r0, #0x2e]
0801abc2: c0f30e00   ubfx      r0, r0, #0, #0xf
0801abc6: c1f82e00   str.w     r0, [r1, #0x2e]
0801abca: 0020       movs      r0, #0
0801abcc: 0870       strb      r0, [r1]
0801abce: 5fe2       b         #0x801b090
0801abd0: 4022       movs      r2, #0x40
0801abd2: 3d49       ldr       r1, [pc, #0xf4] ; [0x801acc8] = 0x20006534 
0801abd4: 3d48       ldr       r0, [pc, #0xf4] ; [0x801accc] = 0x20006603 
0801abd6: edf75dfc   bl        #0x8008494
0801abda: 4020       movs      r0, #0x40
0801abdc: 3b49       ldr       r1, [pc, #0xec] ; [0x801accc] = 0x20006603 
0801abde: 0f39       subs      r1, #0xf
0801abe0: c1f80700   str.w     r0, [r1, #7]
0801abe4: 0020       movs      r0, #0
0801abe6: c1f80b00   str.w     r0, [r1, #0xb]
0801abea: 3648       ldr       r0, [pc, #0xd8] ; [0x801acc4] = 0x20006643 
0801abec: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801abf0: 8001       lsls      r0, r0, #6
0801abf2: c1f80300   str.w     r0, [r1, #3]
0801abf6: 0320       movs      r0, #3
0801abf8: 8870       strb      r0, [r1, #2]
0801abfa: 3248       ldr       r0, [pc, #0xc8] ; [0x801acc4] = 0x20006643 
0801abfc: d0f82e00   ldr.w     r0, [r0, #0x2e]
0801ac00: 401c       adds      r0, r0, #1
0801ac02: 3049       ldr       r1, [pc, #0xc0] ; [0x801acc4] = 0x20006643 
0801ac04: c1f82e00   str.w     r0, [r1, #0x2e]
0801ac08: 0846       mov       r0, r1
0801ac0a: c08d       ldrh      r0, [r0, #0x2e]
0801ac0c: c0f30e00   ubfx      r0, r0, #0, #0xf
0801ac10: c1f82e00   str.w     r0, [r1, #0x2e]
0801ac14: 0020       movs      r0, #0
0801ac16: 0870       strb      r0, [r1]
0801ac18: 3ae2       b         #0x801b090
0801ac1a: 2a48       ldr       r0, [pc, #0xa8] ; [0x801acc4] = 0x20006643 
0801ac1c: b0f86900   ldrh.w    r0, [r0, #0x69]
0801ac20: 8101       lsls      r1, r0, #6
0801ac22: 4022       movs      r2, #0x40
0801ac24: 2748       ldr       r0, [pc, #0x9c] ; [0x801acc4] = 0x20006643 
0801ac26: 6d30       adds      r0, #0x6d
0801ac28: faf75afc   bl        #0x80154e0
0801ac2c: 0020       movs      r0, #0
0801ac2e: 2549       ldr       r1, [pc, #0x94] ; [0x801acc4] = 0x20006643 
0801ac30: 0870       strb      r0, [r1]
0801ac32: 2de2       b         #0x801b090
0801ac34: d220       movs      r0, #0xd2
0801ac36: 2549       ldr       r1, [pc, #0x94] ; [0x801accc] = 0x20006603 
0801ac38: 0f39       subs      r1, #0xf
0801ac3a: 8870       strb      r0, [r1, #2]
0801ac3c: 9120       movs      r0, #0x91
0801ac3e: 2149       ldr       r1, [pc, #0x84] ; [0x801acc4] = 0x20006643 
0801ac40: 0870       strb      r0, [r1]
0801ac42: 25e2       b         #0x801b090
0801ac44: 6020       movs      r0, #0x60
0801ac46: 2149       ldr       r1, [pc, #0x84] ; [0x801accc] = 0x20006603 
0801ac48: 0f39       subs      r1, #0xf
0801ac4a: c1f80b00   str.w     r0, [r1, #0xb]
0801ac4e: 0220       movs      r0, #2
0801ac50: 8870       strb      r0, [r1, #2]
0801ac52: 9220       movs      r0, #0x92
0801ac54: 1b49       ldr       r1, [pc, #0x6c] ; [0x801acc4] = 0x20006643 
0801ac56: 0870       strb      r0, [r1]
0801ac58: 1ae2       b         #0x801b090
0801ac5a: 1d48       ldr       r0, [pc, #0x74] ; [0x801acd0] = 0x1451090 
0801ac5c: 1b49       ldr       r1, [pc, #0x6c] ; [0x801accc] = 0x20006603 
0801ac5e: 0f39       subs      r1, #0xf
0801ac60: c1f80f00   str.w     r0, [r1, #0xf]
0801ac64: 0420       movs      r0, #4
0801ac66: c1f80700   str.w     r0, [r1, #7]
0801ac6a: 8003       lsls      r0, r0, #0xe
0801ac6c: c1f80b00   str.w     r0, [r1, #0xb]
0801ac70: 4ff4c000   mov.w     r0, #0x600000
0801ac74: c1f80300   str.w     r0, [r1, #3]
0801ac78: 0320       movs      r0, #3
0801ac7a: 8870       strb      r0, [r1, #2]
0801ac7c: 0020       movs      r0, #0
0801ac7e: 1149       ldr       r1, [pc, #0x44] ; [0x801acc4] = 0x20006643 
0801ac80: 4866       str       r0, [r1, #0x64]
0801ac82: a020       movs      r0, #0xa0
0801ac84: 0870       strb      r0, [r1]
0801ac86: 03e2       b         #0x801b090
0801ac88: 0020       movs      r0, #0
0801ac8a: 0e49       ldr       r1, [pc, #0x38] ; [0x801acc4] = 0x20006643 
0801ac8c: c1f83700   str.w     r0, [r1, #0x37]
0801ac90: 43f6ff70   movw      r0, #0x3fff
0801ac94: c1f83b00   str.w     r0, [r1, #0x3b]
0801ac98: a120       movs      r0, #0xa1
0801ac9a: 0870       strb      r0, [r1]
0801ac9c: 00bf       nop       
0801ac9e: 4ff48032   mov.w     r2, #0x10000
0801aca2: 0849       ldr       r1, [pc, #0x20] ; [0x801acc4] = 0x20006643 
0801aca4: 3b31       adds      r1, #0x3b
0801aca6: 081f       subs      r0, r1, #4
0801aca8: fff7b8fb   bl        #0x801a41c
0801acac: 0446       mov       r4, r0
0801acae: 012c       cmp       r4, #1
0801acb0: 10d1       bne       #0x801acd4
0801acb2: 0448       ldr       r0, [pc, #0x10] ; [0x801acc4] = 0x20006643 
0801acb4: d0f83700   ldr.w     r0, [r0, #0x37]
0801acb8: 0249       ldr       r1, [pc, #8] ; [0x801acc4] = 0x20006643 
0801acba: 4866       str       r0, [r1, #0x64]
0801acbc: a320       movs      r0, #0xa3
0801acbe: 0870       strb      r0, [r1]
0801acc0: 14e0       b         #0x801acec
0801acc2: c0e2       b         #0x801b246
0801acc4: 4366       str       r3, [r0, #0x64]
0801acc6: 0020       movs      r0, #0
0801acc8: 3465       str       r4, [r6, #0x50]
0801acca: 0020       movs      r0, #0
0801accc: 0366       str       r3, [r0, #0x60]
0801acce: 0020       movs      r0, #0
0801acd0: 9010       asrs      r0, r2, #2
0801acd2: 4501       lsls      r5, r0, #5
0801acd4: 022c       cmp       r4, #2
0801acd6: 09d1       bne       #0x801acec
0801acd8: 6003       lsls      r0, r4, #0xd
0801acda: f749       ldr       r1, [pc, #0x3dc] ; [0x801b0b8] = 0x20006643 
0801acdc: c1f83700   str.w     r0, [r1, #0x37]
0801ace0: 47f6ff70   movw      r0, #0x7fff
0801ace4: c1f83b00   str.w     r0, [r1, #0x3b]
0801ace8: a220       movs      r0, #0xa2
0801acea: 0870       strb      r0, [r1]
0801acec: d0e1       b         #0x801b090
0801acee: 4ff48032   mov.w     r2, #0x10000
0801acf2: f149       ldr       r1, [pc, #0x3c4] ; [0x801b0b8] = 0x20006643 
0801acf4: 3b31       adds      r1, #0x3b
0801acf6: 081f       subs      r0, r1, #4
0801acf8: fff790fb   bl        #0x801a41c
0801acfc: 0446       mov       r4, r0
0801acfe: 012c       cmp       r4, #1
0801ad00: 0ad1       bne       #0x801ad18
0801ad02: ed48       ldr       r0, [pc, #0x3b4] ; [0x801b0b8] = 0x20006643 
0801ad04: d0f83700   ldr.w     r0, [r0, #0x37]
0801ad08: eb49       ldr       r1, [pc, #0x3ac] ; [0x801b0b8] = 0x20006643 
0801ad0a: 4866       str       r0, [r1, #0x64]
0801ad0c: a320       movs      r0, #0xa3
0801ad0e: 01e0       b         #0x801ad14
0801ad10: b0e2       b         #0x801b274
0801ad12: b3e2       b         #0x801b27c
0801ad14: 0870       strb      r0, [r1]
0801ad16: 0ae0       b         #0x801ad2e
0801ad18: 022c       cmp       r4, #2
0801ad1a: 08d1       bne       #0x801ad2e
0801ad1c: 0020       movs      r0, #0
0801ad1e: e649       ldr       r1, [pc, #0x398] ; [0x801b0b8] = 0x20006643 
0801ad20: 4866       str       r0, [r1, #0x64]
0801ad22: d220       movs      r0, #0xd2
0801ad24: e549       ldr       r1, [pc, #0x394] ; [0x801b0bc] = 0x200065f4 
0801ad26: 8870       strb      r0, [r1, #2]
0801ad28: a320       movs      r0, #0xa3
0801ad2a: e349       ldr       r1, [pc, #0x38c] ; [0x801b0b8] = 0x20006643 
0801ad2c: 0870       strb      r0, [r1]
0801ad2e: afe1       b         #0x801b090
0801ad30: 43f6f870   movw      r0, #0x3ff8
0801ad34: e049       ldr       r1, [pc, #0x380] ; [0x801b0b8] = 0x20006643 
0801ad36: c1f83f00   str.w     r0, [r1, #0x3f]
0801ad3a: 0846       mov       r0, r1
0801ad3c: d0f83f00   ldr.w     r0, [r0, #0x3f]
0801ad40: 401e       subs      r0, r0, #1
0801ad42: c1f84300   str.w     r0, [r1, #0x43]
0801ad46: 0846       mov       r0, r1
0801ad48: b0f86400   ldrh.w    r0, [r0, #0x64]
0801ad4c: b1f84310   ldrh.w    r1, [r1, #0x43]
0801ad50: 401a       subs      r0, r0, r1
0801ad52: 401e       subs      r0, r0, #1
0801ad54: c0f30e04   ubfx      r4, r0, #0, #0xf
0801ad58: 04f58031   add.w     r1, r4, #0x10000
0801ad5c: 8801       lsls      r0, r1, #6
0801ad5e: faf721fc   bl        #0x80155a4
0801ad62: 401c       adds      r0, r0, #1
0801ad64: d8b9       cbnz      r0, #0x801ad9e
0801ad66: d448       ldr       r0, [pc, #0x350] ; [0x801b0b8] = 0x20006643 
0801ad68: 406e       ldr       r0, [r0, #0x64]
0801ad6a: d349       ldr       r1, [pc, #0x34c] ; [0x801b0b8] = 0x20006643 
0801ad6c: d1f84310   ldr.w     r1, [r1, #0x43]
0801ad70: 8842       cmp       r0, r1
0801ad72: 14d8       bhi       #0x801ad9e
0801ad74: d048       ldr       r0, [pc, #0x340] ; [0x801b0b8] = 0x20006643 
0801ad76: 406e       ldr       r0, [r0, #0x64]
0801ad78: 58b1       cbz       r0, #0x801ad92
0801ad7a: cf48       ldr       r0, [pc, #0x33c] ; [0x801b0b8] = 0x20006643 
0801ad7c: 406e       ldr       r0, [r0, #0x64]
0801ad7e: 401e       subs      r0, r0, #1
0801ad80: cd49       ldr       r1, [pc, #0x334] ; [0x801b0b8] = 0x20006643 
0801ad82: c1f84300   str.w     r0, [r1, #0x43]
0801ad86: 0846       mov       r0, r1
0801ad88: 406e       ldr       r0, [r0, #0x64]
0801ad8a: c1f83f00   str.w     r0, [r1, #0x3f]
0801ad8e: 06e0       b         #0x801ad9e
0801ad90: 58e2       b         #0x801b244
0801ad92: 0020       movs      r0, #0
0801ad94: c849       ldr       r1, [pc, #0x320] ; [0x801b0b8] = 0x20006643 
0801ad96: c1f84300   str.w     r0, [r1, #0x43]
0801ad9a: c1f83f00   str.w     r0, [r1, #0x3f]
0801ad9e: c648       ldr       r0, [pc, #0x318] ; [0x801b0b8] = 0x20006643 
0801ada0: d0f83f00   ldr.w     r0, [r0, #0x3f]
0801ada4: 28b9       cbnz      r0, #0x801adb2
0801ada6: 0020       movs      r0, #0
0801ada8: c349       ldr       r1, [pc, #0x30c] ; [0x801b0b8] = 0x20006643 
0801adaa: 81f83200   strb.w    r0, [r1, #0x32]
0801adae: 0870       strb      r0, [r1]
0801adb0: 6ee1       b         #0x801b090
0801adb2: c148       ldr       r0, [pc, #0x304] ; [0x801b0b8] = 0x20006643 
0801adb4: b0f86400   ldrh.w    r0, [r0, #0x64]
0801adb8: bf49       ldr       r1, [pc, #0x2fc] ; [0x801b0b8] = 0x20006643 
0801adba: b1f84310   ldrh.w    r1, [r1, #0x43]
0801adbe: 401a       subs      r0, r0, r1
0801adc0: 401e       subs      r0, r0, #1
0801adc2: c0f30e04   ubfx      r4, r0, #0, #0xf
0801adc6: 04f58031   add.w     r1, r4, #0x10000
0801adca: 0422       movs      r2, #4
0801adcc: 02eb8110   add.w     r0, r2, r1, lsl #6
0801add0: faf7e8fb   bl        #0x80155a4
0801add4: b849       ldr       r1, [pc, #0x2e0] ; [0x801b0b8] = 0x20006643 
0801add6: c1f84700   str.w     r0, [r1, #0x47]
0801adda: 05e0       b         #0x801ade8
0801addc: 4be2       b         #0x801b276
0801adde: 3be2       b         #0x801b258
0801ade0: 47e2       b         #0x801b272
0801ade2: 72e2       b         #0x801b2ca
0801ade4: 48e2       b         #0x801b278
0801ade6: 48e2       b         #0x801b27a
0801ade8: 0020       movs      r0, #0
0801adea: c1f84b00   str.w     r0, [r1, #0x4b]
0801adee: 0846       mov       r0, r1
0801adf0: b0f86400   ldrh.w    r0, [r0, #0x64]
0801adf4: 401e       subs      r0, r0, #1
0801adf6: c0f30e04   ubfx      r4, r0, #0, #0xf
0801adfa: 04f58031   add.w     r1, r4, #0x10000
0801adfe: 0422       movs      r2, #4
0801ae00: 02eb8110   add.w     r0, r2, r1, lsl #6
0801ae04: faf7cefb   bl        #0x80155a4
0801ae08: ab49       ldr       r1, [pc, #0x2ac] ; [0x801b0b8] = 0x20006643 
0801ae0a: c1f84f00   str.w     r0, [r1, #0x4f]
0801ae0e: 0846       mov       r0, r1
0801ae10: d0f85300   ldr.w     r0, [r0, #0x53]
0801ae14: 18b9       cbnz      r0, #0x801ae1e
0801ae16: 4ff6fe70   movw      r0, #0xfffe
0801ae1a: c1f85300   str.w     r0, [r1, #0x53]
0801ae1e: a648       ldr       r0, [pc, #0x298] ; [0x801b0b8] = 0x20006643 
0801ae20: d0f85300   ldr.w     r0, [r0, #0x53]
0801ae24: a449       ldr       r1, [pc, #0x290] ; [0x801b0b8] = 0x20006643 
0801ae26: d1f84310   ldr.w     r1, [r1, #0x43]
0801ae2a: 8842       cmp       r0, r1
0801ae2c: 05d9       bls       #0x801ae3a
0801ae2e: a248       ldr       r0, [pc, #0x288] ; [0x801b0b8] = 0x20006643 
0801ae30: d0f84300   ldr.w     r0, [r0, #0x43]
0801ae34: a049       ldr       r1, [pc, #0x280] ; [0x801b0b8] = 0x20006643 
0801ae36: c1f85300   str.w     r0, [r1, #0x53]
0801ae3a: 9f48       ldr       r0, [pc, #0x27c] ; [0x801b0b8] = 0x20006643 
0801ae3c: b0f86400   ldrh.w    r0, [r0, #0x64]
0801ae40: 9d49       ldr       r1, [pc, #0x274] ; [0x801b0b8] = 0x20006643 
0801ae42: b1f85310   ldrh.w    r1, [r1, #0x53]
0801ae46: 401a       subs      r0, r0, r1
0801ae48: 401e       subs      r0, r0, #1
0801ae4a: c0f30e04   ubfx      r4, r0, #0, #0xf
0801ae4e: 04f58031   add.w     r1, r4, #0x10000
0801ae52: 0422       movs      r2, #4
0801ae54: 02eb8110   add.w     r0, r2, r1, lsl #6
0801ae58: faf7a4fb   bl        #0x80155a4
0801ae5c: 9649       ldr       r1, [pc, #0x258] ; [0x801b0b8] = 0x20006643 
0801ae5e: c1f85700   str.w     r0, [r1, #0x57]
0801ae62: 0846       mov       r0, r1
0801ae64: d0f85b00   ldr.w     r0, [r0, #0x5b]
0801ae68: d1f85310   ldr.w     r1, [r1, #0x53]
0801ae6c: 8842       cmp       r0, r1
0801ae6e: 05d9       bls       #0x801ae7c
0801ae70: 9148       ldr       r0, [pc, #0x244] ; [0x801b0b8] = 0x20006643 
0801ae72: d0f85300   ldr.w     r0, [r0, #0x53]
0801ae76: 9049       ldr       r1, [pc, #0x240] ; [0x801b0b8] = 0x20006643 
0801ae78: c1f85b00   str.w     r0, [r1, #0x5b]
0801ae7c: 8e48       ldr       r0, [pc, #0x238] ; [0x801b0b8] = 0x20006643 
0801ae7e: b0f86400   ldrh.w    r0, [r0, #0x64]
0801ae82: 8d49       ldr       r1, [pc, #0x234] ; [0x801b0b8] = 0x20006643 
0801ae84: b1f85b10   ldrh.w    r1, [r1, #0x5b]
0801ae88: 401a       subs      r0, r0, r1
0801ae8a: 401e       subs      r0, r0, #1
0801ae8c: c0f30e04   ubfx      r4, r0, #0, #0xf
0801ae90: 04f58031   add.w     r1, r4, #0x10000
0801ae94: 0422       movs      r2, #4
0801ae96: 02eb8110   add.w     r0, r2, r1, lsl #6
0801ae9a: faf783fb   bl        #0x80155a4
0801ae9e: 8649       ldr       r1, [pc, #0x218] ; [0x801b0b8] = 0x20006643 
0801aea0: c1f85f00   str.w     r0, [r1, #0x5f]
0801aea4: 0846       mov       r0, r1
0801aea6: b0f85300   ldrh.w    r0, [r0, #0x53]
0801aeaa: a1f86900   strh.w    r0, [r1, #0x69]
0801aeae: 0020       movs      r0, #0
0801aeb0: a1f86b00   strh.w    r0, [r1, #0x6b]
0801aeb4: 0846       mov       r0, r1
0801aeb6: 90f83200   ldrb.w    r0, [r0, #0x32]
0801aeba: a328       cmp       r0, #0xa3
0801aebc: 01d1       bne       #0x801aec2
0801aebe: 81f83300   strb.w    r0, [r1, #0x33]
0801aec2: 0020       movs      r0, #0
0801aec4: 7c49       ldr       r1, [pc, #0x1f0] ; [0x801b0b8] = 0x20006643 
0801aec6: 81f83200   strb.w    r0, [r1, #0x32]
0801aeca: 0870       strb      r0, [r1]
0801aecc: e0e0       b         #0x801b090
0801aece: 7a48       ldr       r0, [pc, #0x1e8] ; [0x801b0b8] = 0x20006643 
0801aed0: 406e       ldr       r0, [r0, #0x64]
0801aed2: 80bb       cbnz      r0, #0x801af36
0801aed4: 4ff48000   mov.w     r0, #0x400000
0801aed8: faf764fb   bl        #0x80155a4
0801aedc: 401c       adds      r0, r0, #1
0801aede: 18bb       cbnz      r0, #0x801af28
0801aee0: 4022       movs      r2, #0x40
0801aee2: 7749       ldr       r1, [pc, #0x1dc] ; [0x801b0c0] = 0x200065b4 
0801aee4: 7548       ldr       r0, [pc, #0x1d4] ; [0x801b0bc] = 0x200065f4 
0801aee6: 0f30       adds      r0, #0xf
0801aee8: edf7d4fa   bl        #0x8008494
0801aeec: 4020       movs      r0, #0x40
0801aeee: 7349       ldr       r1, [pc, #0x1cc] ; [0x801b0bc] = 0x200065f4 
0801aef0: c1f80700   str.w     r0, [r1, #7]
0801aef4: 8002       lsls      r0, r0, #0xa
0801aef6: c1f80b00   str.w     r0, [r1, #0xb]
0801aefa: 6f48       ldr       r0, [pc, #0x1bc] ; [0x801b0b8] = 0x20006643 
0801aefc: 406e       ldr       r0, [r0, #0x64]
0801aefe: 00f58030   add.w     r0, r0, #0x10000
0801af02: 8001       lsls      r0, r0, #6
0801af04: c1f80300   str.w     r0, [r1, #3]
0801af08: 0320       movs      r0, #3
0801af0a: 8870       strb      r0, [r1, #2]
0801af0c: 6a48       ldr       r0, [pc, #0x1a8] ; [0x801b0b8] = 0x20006643 
0801af0e: 406e       ldr       r0, [r0, #0x64]
0801af10: 401c       adds      r0, r0, #1
0801af12: 6949       ldr       r1, [pc, #0x1a4] ; [0x801b0b8] = 0x20006643 
0801af14: 4866       str       r0, [r1, #0x64]
0801af16: 0846       mov       r0, r1
0801af18: b0f86400   ldrh.w    r0, [r0, #0x64]
0801af1c: c0f30e00   ubfx      r0, r0, #0, #0xf
0801af20: 4866       str       r0, [r1, #0x64]
0801af22: 0020       movs      r0, #0
0801af24: 0870       strb      r0, [r1]
0801af26: 7be0       b         #0x801b020
0801af28: d320       movs      r0, #0xd3
0801af2a: 6449       ldr       r1, [pc, #0x190] ; [0x801b0bc] = 0x200065f4 
0801af2c: 8870       strb      r0, [r1, #2]
0801af2e: b120       movs      r0, #0xb1
0801af30: 6149       ldr       r1, [pc, #0x184] ; [0x801b0b8] = 0x20006643 
0801af32: 0870       strb      r0, [r1]
0801af34: 74e0       b         #0x801b020
0801af36: ffe7       b         #0x801af38
0801af38: 5f48       ldr       r0, [pc, #0x17c] ; [0x801b0b8] = 0x20006643 
0801af3a: 406e       ldr       r0, [r0, #0x64]
0801af3c: 43f6ff71   movw      r1, #0x3fff
0801af40: 8842       cmp       r0, r1
0801af42: 06d1       bne       #0x801af52
0801af44: d420       movs      r0, #0xd4
0801af46: 5d49       ldr       r1, [pc, #0x174] ; [0x801b0bc] = 0x200065f4 
0801af48: 8870       strb      r0, [r1, #2]
0801af4a: b120       movs      r0, #0xb1
0801af4c: 5a49       ldr       r1, [pc, #0x168] ; [0x801b0b8] = 0x20006643 
0801af4e: 0870       strb      r0, [r1]
0801af50: 66e0       b         #0x801b020
0801af52: 5948       ldr       r0, [pc, #0x164] ; [0x801b0b8] = 0x20006643 
0801af54: 406e       ldr       r0, [r0, #0x64]
0801af56: b0f5804f   cmp.w     r0, #0x4000
0801af5a: 31d1       bne       #0x801afc0
0801af5c: 4ff4a000   mov.w     r0, #0x500000
0801af60: faf720fb   bl        #0x80155a4
0801af64: 401c       adds      r0, r0, #1
0801af66: 20bb       cbnz      r0, #0x801afb2
0801af68: 4022       movs      r2, #0x40
0801af6a: 5549       ldr       r1, [pc, #0x154] ; [0x801b0c0] = 0x200065b4 
0801af6c: 5348       ldr       r0, [pc, #0x14c] ; [0x801b0bc] = 0x200065f4 
0801af6e: 0f30       adds      r0, #0xf
0801af70: edf790fa   bl        #0x8008494
0801af74: 4020       movs      r0, #0x40
0801af76: 5149       ldr       r1, [pc, #0x144] ; [0x801b0bc] = 0x200065f4 
0801af78: c1f80700   str.w     r0, [r1, #7]
0801af7c: 8002       lsls      r0, r0, #0xa
0801af7e: c1f80b00   str.w     r0, [r1, #0xb]
0801af82: 4d48       ldr       r0, [pc, #0x134] ; [0x801b0b8] = 0x20006643 
0801af84: 406e       ldr       r0, [r0, #0x64]
0801af86: 00f58030   add.w     r0, r0, #0x10000
0801af8a: 8001       lsls      r0, r0, #6
0801af8c: c1f80300   str.w     r0, [r1, #3]
0801af90: 0320       movs      r0, #3
0801af92: 8870       strb      r0, [r1, #2]
0801af94: 4848       ldr       r0, [pc, #0x120] ; [0x801b0b8] = 0x20006643 
0801af96: 406e       ldr       r0, [r0, #0x64]
0801af98: 401c       adds      r0, r0, #1
0801af9a: 4749       ldr       r1, [pc, #0x11c] ; [0x801b0b8] = 0x20006643 
0801af9c: 4866       str       r0, [r1, #0x64]
0801af9e: 0846       mov       r0, r1
0801afa0: b0f86400   ldrh.w    r0, [r0, #0x64]
0801afa4: c0f30e00   ubfx      r0, r0, #0, #0xf
0801afa8: 4866       str       r0, [r1, #0x64]
0801afaa: 0020       movs      r0, #0
0801afac: 0870       strb      r0, [r1]
0801afae: 37e0       b         #0x801b020
0801afb0: 6ae0       b         #0x801b088
0801afb2: d420       movs      r0, #0xd4
0801afb4: 4149       ldr       r1, [pc, #0x104] ; [0x801b0bc] = 0x200065f4 
0801afb6: 8870       strb      r0, [r1, #2]
0801afb8: b120       movs      r0, #0xb1
0801afba: 3f49       ldr       r1, [pc, #0xfc] ; [0x801b0b8] = 0x20006643 
0801afbc: 0870       strb      r0, [r1]
0801afbe: 2fe0       b         #0x801b020
0801afc0: 3d48       ldr       r0, [pc, #0xf4] ; [0x801b0b8] = 0x20006643 
0801afc2: 406e       ldr       r0, [r0, #0x64]
0801afc4: 47f6ff71   movw      r1, #0x7fff
0801afc8: 8842       cmp       r0, r1
0801afca: 06d1       bne       #0x801afda
0801afcc: d320       movs      r0, #0xd3
0801afce: 3b49       ldr       r1, [pc, #0xec] ; [0x801b0bc] = 0x200065f4 
0801afd0: 8870       strb      r0, [r1, #2]
0801afd2: b120       movs      r0, #0xb1
0801afd4: 3849       ldr       r1, [pc, #0xe0] ; [0x801b0b8] = 0x20006643 
0801afd6: 0870       strb      r0, [r1]
0801afd8: 22e0       b         #0x801b020
0801afda: 4022       movs      r2, #0x40
0801afdc: 3849       ldr       r1, [pc, #0xe0] ; [0x801b0c0] = 0x200065b4 
0801afde: 3748       ldr       r0, [pc, #0xdc] ; [0x801b0bc] = 0x200065f4 
0801afe0: 0f30       adds      r0, #0xf
0801afe2: edf757fa   bl        #0x8008494
0801afe6: 4020       movs      r0, #0x40
0801afe8: 3449       ldr       r1, [pc, #0xd0] ; [0x801b0bc] = 0x200065f4 
0801afea: c1f80700   str.w     r0, [r1, #7]
0801afee: 8002       lsls      r0, r0, #0xa
0801aff0: c1f80b00   str.w     r0, [r1, #0xb]
0801aff4: 3048       ldr       r0, [pc, #0xc0] ; [0x801b0b8] = 0x20006643 
0801aff6: 406e       ldr       r0, [r0, #0x64]
0801aff8: 00f58030   add.w     r0, r0, #0x10000
0801affc: 8001       lsls      r0, r0, #6
0801affe: c1f80300   str.w     r0, [r1, #3]
0801b002: 0320       movs      r0, #3
0801b004: 8870       strb      r0, [r1, #2]
0801b006: 2c48       ldr       r0, [pc, #0xb0] ; [0x801b0b8] = 0x20006643 
0801b008: 406e       ldr       r0, [r0, #0x64]
0801b00a: 401c       adds      r0, r0, #1
0801b00c: 2a49       ldr       r1, [pc, #0xa8] ; [0x801b0b8] = 0x20006643 
0801b00e: 4866       str       r0, [r1, #0x64]
0801b010: 0846       mov       r0, r1
0801b012: b0f86400   ldrh.w    r0, [r0, #0x64]
0801b016: c0f30e00   ubfx      r0, r0, #0, #0xf
0801b01a: 4866       str       r0, [r1, #0x64]
0801b01c: 0020       movs      r0, #0
0801b01e: 0870       strb      r0, [r1]
0801b020: 36e0       b         #0x801b090
0801b022: 4022       movs      r2, #0x40
0801b024: 2649       ldr       r1, [pc, #0x98] ; [0x801b0c0] = 0x200065b4 
0801b026: 2548       ldr       r0, [pc, #0x94] ; [0x801b0bc] = 0x200065f4 
0801b028: 0f30       adds      r0, #0xf
0801b02a: edf733fa   bl        #0x8008494
0801b02e: 4020       movs      r0, #0x40
0801b030: 2249       ldr       r1, [pc, #0x88] ; [0x801b0bc] = 0x200065f4 
0801b032: c1f80700   str.w     r0, [r1, #7]
0801b036: 8002       lsls      r0, r0, #0xa
0801b038: c1f80b00   str.w     r0, [r1, #0xb]
0801b03c: 1e48       ldr       r0, [pc, #0x78] ; [0x801b0b8] = 0x20006643 
0801b03e: 406e       ldr       r0, [r0, #0x64]
0801b040: 00f58030   add.w     r0, r0, #0x10000
0801b044: 8001       lsls      r0, r0, #6
0801b046: c1f80300   str.w     r0, [r1, #3]
0801b04a: 0320       movs      r0, #3
0801b04c: 8870       strb      r0, [r1, #2]
0801b04e: 1a48       ldr       r0, [pc, #0x68] ; [0x801b0b8] = 0x20006643 
0801b050: 406e       ldr       r0, [r0, #0x64]
0801b052: 401c       adds      r0, r0, #1
0801b054: 1849       ldr       r1, [pc, #0x60] ; [0x801b0b8] = 0x20006643 
0801b056: 4866       str       r0, [r1, #0x64]
0801b058: 0846       mov       r0, r1
0801b05a: b0f86400   ldrh.w    r0, [r0, #0x64]
0801b05e: c0f30e00   ubfx      r0, r0, #0, #0xf
0801b062: 4866       str       r0, [r1, #0x64]
0801b064: 0020       movs      r0, #0
0801b066: 0870       strb      r0, [r1]
0801b068: 12e0       b         #0x801b090
0801b06a: 1348       ldr       r0, [pc, #0x4c] ; [0x801b0b8] = 0x20006643 
0801b06c: b0f86900   ldrh.w    r0, [r0, #0x69]
0801b070: 00f58030   add.w     r0, r0, #0x10000
0801b074: 8101       lsls      r1, r0, #6
0801b076: 4022       movs      r2, #0x40
0801b078: 0f48       ldr       r0, [pc, #0x3c] ; [0x801b0b8] = 0x20006643 
0801b07a: 6d30       adds      r0, #0x6d
0801b07c: faf730fa   bl        #0x80154e0
0801b080: 0020       movs      r0, #0
0801b082: 0d49       ldr       r1, [pc, #0x34] ; [0x801b0b8] = 0x20006643 
0801b084: 0870       strb      r0, [r1]
0801b086: 03e0       b         #0x801b090
0801b088: 2020       movs      r0, #0x20
0801b08a: 0b49       ldr       r1, [pc, #0x2c] ; [0x801b0b8] = 0x20006643 
0801b08c: 0870       strb      r0, [r1]
0801b08e: 00bf       nop       
0801b090: 00bf       nop       
0801b092: 0a48       ldr       r0, [pc, #0x28] ; [0x801b0bc] = 0x200065f4 
0801b094: 8078       ldrb      r0, [r0, #2]
0801b096: 2428       cmp       r0, #0x24
0801b098: 6bd0       beq       #0x801b172
0801b09a: 13dc       bgt       #0x801b0c4
0801b09c: 0328       cmp       r0, #3
0801b09e: 31d0       beq       #0x801b104
0801b0a0: 04dc       bgt       #0x801b0ac
0801b0a2: 0128       cmp       r0, #1
0801b0a4: 17d0       beq       #0x801b0d6
0801b0a6: 0228       cmp       r0, #2
0801b0a8: 7cd1       bne       #0x801b1a4
0801b0aa: 1ee0       b         #0x801b0ea
0801b0ac: 2228       cmp       r0, #0x22
0801b0ae: 36d0       beq       #0x801b11e
0801b0b0: 2328       cmp       r0, #0x23
0801b0b2: 77d1       bne       #0x801b1a4
0801b0b4: 48e0       b         #0x801b148
0801b0b6: 0000       movs      r0, r0
0801b0b8: 4366       str       r3, [r0, #0x64]
0801b0ba: 0020       movs      r0, #0
0801b0bc: f465       str       r4, [r6, #0x5c]
0801b0be: 0020       movs      r0, #0
0801b0c0: b465       str       r4, [r6, #0x58]
0801b0c2: 0020       movs      r0, #0
0801b0c4: b328       cmp       r0, #0xb3
0801b0c6: 71d0       beq       #0x801b1ac
0801b0c8: d228       cmp       r0, #0xd2
0801b0ca: 70d0       beq       #0x801b1ae
0801b0cc: d328       cmp       r0, #0xd3
0801b0ce: 6cd0       beq       #0x801b1aa
0801b0d0: d428       cmp       r0, #0xd4
0801b0d2: 67d1       bne       #0x801b1a4
0801b0d4: 97e0       b         #0x801b206
0801b0d6: 0120       movs      r0, #1
0801b0d8: 8449       ldr       r1, [pc, #0x210] ; [0x801b2ec] = 0x200065f4 
0801b0da: 4870       strb      r0, [r1, #1]
0801b0dc: 0020       movs      r0, #0
0801b0de: faf7abf9   bl        #0x8015438
0801b0e2: 0120       movs      r0, #1
0801b0e4: 8149       ldr       r1, [pc, #0x204] ; [0x801b2ec] = 0x200065f4 
0801b0e6: 0870       strb      r0, [r1]
0801b0e8: a8e0       b         #0x801b23c
0801b0ea: 0120       movs      r0, #1
0801b0ec: 7f49       ldr       r1, [pc, #0x1fc] ; [0x801b2ec] = 0x200065f4 
0801b0ee: 4870       strb      r0, [r1, #1]
0801b0f0: 0846       mov       r0, r1
0801b0f2: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b0f6: 0020       movs      r0, #0
0801b0f8: faf77af9   bl        #0x80153f0
0801b0fc: 0220       movs      r0, #2
0801b0fe: 7b49       ldr       r1, [pc, #0x1ec] ; [0x801b2ec] = 0x200065f4 
0801b100: 0870       strb      r0, [r1]
0801b102: 9be0       b         #0x801b23c
0801b104: 0120       movs      r0, #1
0801b106: 7949       ldr       r1, [pc, #0x1e4] ; [0x801b2ec] = 0x200065f4 
0801b108: 4870       strb      r0, [r1, #1]
0801b10a: 0846       mov       r0, r1
0801b10c: d0f80310   ldr.w     r1, [r0, #3]
0801b110: 0f30       adds      r0, #0xf
0801b112: faf7a5fa   bl        #0x8015660
0801b116: 0020       movs      r0, #0
0801b118: 7449       ldr       r1, [pc, #0x1d0] ; [0x801b2ec] = 0x200065f4 
0801b11a: 0870       strb      r0, [r1]
0801b11c: 8ee0       b         #0x801b23c
0801b11e: 0120       movs      r0, #1
0801b120: 7249       ldr       r1, [pc, #0x1c8] ; [0x801b2ec] = 0x200065f4 
0801b122: 4870       strb      r0, [r1, #1]
0801b124: 2020       movs      r0, #0x20
0801b126: c1f80700   str.w     r0, [r1, #7]
0801b12a: 0020       movs      r0, #0
0801b12c: c1f80b00   str.w     r0, [r1, #0xb]
0801b130: c1f80300   str.w     r0, [r1, #3]
0801b134: 0846       mov       r0, r1
0801b136: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b13a: 0020       movs      r0, #0
0801b13c: faf758f9   bl        #0x80153f0
0801b140: 2220       movs      r0, #0x22
0801b142: 6a49       ldr       r1, [pc, #0x1a8] ; [0x801b2ec] = 0x200065f4 
0801b144: 0870       strb      r0, [r1]
0801b146: 79e0       b         #0x801b23c
0801b148: 0120       movs      r0, #1
0801b14a: 6849       ldr       r1, [pc, #0x1a0] ; [0x801b2ec] = 0x200065f4 
0801b14c: 4870       strb      r0, [r1, #1]
0801b14e: 1020       movs      r0, #0x10
0801b150: c1f80700   str.w     r0, [r1, #7]
0801b154: 0020       movs      r0, #0
0801b156: c1f80b00   str.w     r0, [r1, #0xb]
0801b15a: c1f80300   str.w     r0, [r1, #3]
0801b15e: 0846       mov       r0, r1
0801b160: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b164: 0020       movs      r0, #0
0801b166: faf743f9   bl        #0x80153f0
0801b16a: 2320       movs      r0, #0x23
0801b16c: 5f49       ldr       r1, [pc, #0x17c] ; [0x801b2ec] = 0x200065f4 
0801b16e: 0870       strb      r0, [r1]
0801b170: 64e0       b         #0x801b23c
0801b172: 0120       movs      r0, #1
0801b174: 5d49       ldr       r1, [pc, #0x174] ; [0x801b2ec] = 0x200065f4 
0801b176: 4870       strb      r0, [r1, #1]
0801b178: 1020       movs      r0, #0x10
0801b17a: c1f80700   str.w     r0, [r1, #7]
0801b17e: 0846       mov       r0, r1
0801b180: d0f80700   ldr.w     r0, [r0, #7]
0801b184: c1f80b00   str.w     r0, [r1, #0xb]
0801b188: 4ff48010   mov.w     r0, #0x100000
0801b18c: c1f80300   str.w     r0, [r1, #3]
0801b190: 0846       mov       r0, r1
0801b192: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b196: 0020       movs      r0, #0
0801b198: faf72af9   bl        #0x80153f0
0801b19c: 2420       movs      r0, #0x24
0801b19e: 5349       ldr       r1, [pc, #0x14c] ; [0x801b2ec] = 0x200065f4 
0801b1a0: 0870       strb      r0, [r1]
0801b1a2: 4be0       b         #0x801b23c
0801b1a4: 49e0       b         #0x801b23a
0801b1a6: 01e0       b         #0x801b1ac
0801b1a8: 01e0       b         #0x801b1ae
0801b1aa: 16e0       b         #0x801b1da
0801b1ac: 46e0       b         #0x801b23c
0801b1ae: 0120       movs      r0, #1
0801b1b0: 4e49       ldr       r1, [pc, #0x138] ; [0x801b2ec] = 0x200065f4 
0801b1b2: 4870       strb      r0, [r1, #1]
0801b1b4: 2020       movs      r0, #0x20
0801b1b6: c1f80700   str.w     r0, [r1, #7]
0801b1ba: 4020       movs      r0, #0x40
0801b1bc: c1f80b00   str.w     r0, [r1, #0xb]
0801b1c0: 0004       lsls      r0, r0, #0x10
0801b1c2: c1f80300   str.w     r0, [r1, #3]
0801b1c6: 0846       mov       r0, r1
0801b1c8: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b1cc: 0020       movs      r0, #0
0801b1ce: faf70ff9   bl        #0x80153f0
0801b1d2: d220       movs      r0, #0xd2
0801b1d4: 4549       ldr       r1, [pc, #0x114] ; [0x801b2ec] = 0x200065f4 
0801b1d6: 0870       strb      r0, [r1]
0801b1d8: 30e0       b         #0x801b23c
0801b1da: 0120       movs      r0, #1
0801b1dc: 4349       ldr       r1, [pc, #0x10c] ; [0x801b2ec] = 0x200065f4 
0801b1de: 4870       strb      r0, [r1, #1]
0801b1e0: 1020       movs      r0, #0x10
0801b1e2: c1f80700   str.w     r0, [r1, #7]
0801b1e6: 4020       movs      r0, #0x40
0801b1e8: c1f80b00   str.w     r0, [r1, #0xb]
0801b1ec: 0004       lsls      r0, r0, #0x10
0801b1ee: c1f80300   str.w     r0, [r1, #3]
0801b1f2: 0846       mov       r0, r1
0801b1f4: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b1f8: 0020       movs      r0, #0
0801b1fa: faf7f9f8   bl        #0x80153f0
0801b1fe: d320       movs      r0, #0xd3
0801b200: 3a49       ldr       r1, [pc, #0xe8] ; [0x801b2ec] = 0x200065f4 
0801b202: 0870       strb      r0, [r1]
0801b204: 1ae0       b         #0x801b23c
0801b206: 0120       movs      r0, #1
0801b208: 3849       ldr       r1, [pc, #0xe0] ; [0x801b2ec] = 0x200065f4 
0801b20a: 4870       strb      r0, [r1, #1]
0801b20c: 1020       movs      r0, #0x10
0801b20e: c1f80700   str.w     r0, [r1, #7]
0801b212: 0846       mov       r0, r1
0801b214: d0f80700   ldr.w     r0, [r0, #7]
0801b218: 4030       adds      r0, #0x40
0801b21a: c1f80b00   str.w     r0, [r1, #0xb]
0801b21e: 4ff4a000   mov.w     r0, #0x500000
0801b222: c1f80300   str.w     r0, [r1, #3]
0801b226: 0846       mov       r0, r1
0801b228: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b22c: 0020       movs      r0, #0
0801b22e: faf7dff8   bl        #0x80153f0
0801b232: d420       movs      r0, #0xd4
0801b234: 2d49       ldr       r1, [pc, #0xb4] ; [0x801b2ec] = 0x200065f4 
0801b236: 0870       strb      r0, [r1]
0801b238: 00e0       b         #0x801b23c
0801b23a: 00bf       nop       
0801b23c: 00bf       nop       
0801b23e: 0020       movs      r0, #0
0801b240: 2a49       ldr       r1, [pc, #0xa8] ; [0x801b2ec] = 0x200065f4 
0801b242: 8870       strb      r0, [r1, #2]
0801b244: 4ee0       b         #0x801b2e4
0801b246: 0120       movs      r0, #1
0801b248: 2849       ldr       r1, [pc, #0xa0] ; [0x801b2ec] = 0x200065f4 
0801b24a: 4870       strb      r0, [r1, #1]
0801b24c: faf7f4f8   bl        #0x8015438
0801b250: 0020       movs      r0, #0
0801b252: 2649       ldr       r1, [pc, #0x98] ; [0x801b2ec] = 0x200065f4 
0801b254: 0870       strb      r0, [r1]
0801b256: 45e0       b         #0x801b2e4
0801b258: 0120       movs      r0, #1
0801b25a: 2449       ldr       r1, [pc, #0x90] ; [0x801b2ec] = 0x200065f4 
0801b25c: 4870       strb      r0, [r1, #1]
0801b25e: 0846       mov       r0, r1
0801b260: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b264: 0120       movs      r0, #1
0801b266: faf7c3f8   bl        #0x80153f0
0801b26a: 0020       movs      r0, #0
0801b26c: 1f49       ldr       r1, [pc, #0x7c] ; [0x801b2ec] = 0x200065f4 
0801b26e: 0870       strb      r0, [r1]
0801b270: 38e0       b         #0x801b2e4
0801b272: 00bf       nop       
0801b274: 00bf       nop       
0801b276: 00bf       nop       
0801b278: 00bf       nop       
0801b27a: 00bf       nop       
0801b27c: 1b48       ldr       r0, [pc, #0x6c] ; [0x801b2ec] = 0x200065f4 
0801b27e: d0f80700   ldr.w     r0, [r0, #7]
0801b282: f0b1       cbz       r0, #0x801b2c2
0801b284: 0120       movs      r0, #1
0801b286: 1949       ldr       r1, [pc, #0x64] ; [0x801b2ec] = 0x200065f4 
0801b288: 4870       strb      r0, [r1, #1]
0801b28a: 0846       mov       r0, r1
0801b28c: b0f80b00   ldrh.w    r0, [r0, #0xb]
0801b290: 0004       lsls      r0, r0, #0x10
0801b292: c1f80300   str.w     r0, [r1, #3]
0801b296: 0846       mov       r0, r1
0801b298: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b29c: 0120       movs      r0, #1
0801b29e: faf7a7f8   bl        #0x80153f0
0801b2a2: 1248       ldr       r0, [pc, #0x48] ; [0x801b2ec] = 0x200065f4 
0801b2a4: d0f80b00   ldr.w     r0, [r0, #0xb]
0801b2a8: 401c       adds      r0, r0, #1
0801b2aa: 1049       ldr       r1, [pc, #0x40] ; [0x801b2ec] = 0x200065f4 
0801b2ac: c1f80b00   str.w     r0, [r1, #0xb]
0801b2b0: 0846       mov       r0, r1
0801b2b2: d0f80700   ldr.w     r0, [r0, #7]
0801b2b6: 401e       subs      r0, r0, #1
0801b2b8: c1f80700   str.w     r0, [r1, #7]
0801b2bc: 2520       movs      r0, #0x25
0801b2be: 0870       strb      r0, [r1]
0801b2c0: 02e0       b         #0x801b2c8
0801b2c2: 0020       movs      r0, #0
0801b2c4: 0949       ldr       r1, [pc, #0x24] ; [0x801b2ec] = 0x200065f4 
0801b2c6: 0870       strb      r0, [r1]
0801b2c8: 0ce0       b         #0x801b2e4
0801b2ca: 0120       movs      r0, #1
0801b2cc: 0749       ldr       r1, [pc, #0x1c] ; [0x801b2ec] = 0x200065f4 
0801b2ce: 4870       strb      r0, [r1, #1]
0801b2d0: 0846       mov       r0, r1
0801b2d2: d0f80b10   ldr.w     r1, [r0, #0xb]
0801b2d6: 0020       movs      r0, #0
0801b2d8: faf78af8   bl        #0x80153f0
0801b2dc: 2420       movs      r0, #0x24
0801b2de: 0349       ldr       r1, [pc, #0xc] ; [0x801b2ec] = 0x200065f4 
0801b2e0: 0870       strb      r0, [r1]
0801b2e2: 00bf       nop       
0801b2e4: 00bf       nop       
0801b2e6: 00bf       nop       
0801b2e8: fff702b9   b.w       #0x801a4f0
0801b2ec: f465       str       r4, [r6, #0x5c]
0801b2ee: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08020a04, span 0x84
08020a04: 1fb5       push      {r0, r1, r2, r3, r4, lr}
08020a06: 0024       movs      r4, #0
08020a08: 6a46       mov       r2, sp
08020a0a: 0821       movs      r1, #8
08020a0c: 0020       movs      r0, #0
08020a0e: fff799ff   bl        #0x8020944
08020a12: 0446       mov       r4, r0
08020a14: 2cb1       cbz       r4, #0x8020a22
08020a16: bdf80e00   ldrh.w    r0, [sp, #0xe]
08020a1a: 40f22971   movw      r1, #0x729
08020a1e: 8842       cmp       r0, r1
08020a20: 02d0       beq       #0x8020a28
08020a22: 0020       movs      r0, #0
08020a24: 04b0       add       sp, #0x10
08020a26: 10bd       pop       {r4, pc}
08020a28: bdf80000   ldrh.w    r0, [sp]
08020a2c: 00b2       sxth      r0, r0
08020a2e: 1549       ldr       r1, [pc, #0x54] ; [0x8020a84] = 0x20003338 
08020a30: c1f8c000   str.w     r0, [r1, #0xc0]
08020a34: bdf80200   ldrh.w    r0, [sp, #2]
08020a38: 01b2       sxth      r1, r0
08020a3a: 1248       ldr       r0, [pc, #0x48] ; [0x8020a84] = 0x20003338 
08020a3c: c0f8c410   str.w     r1, [r0, #0xc4]
08020a40: bdf80400   ldrh.w    r0, [sp, #4]
08020a44: 01b2       sxth      r1, r0
08020a46: 0f48       ldr       r0, [pc, #0x3c] ; [0x8020a84] = 0x20003338 
08020a48: c0f8c810   str.w     r1, [r0, #0xc8]
08020a4c: bdf80600   ldrh.w    r0, [sp, #6]
08020a50: 00b2       sxth      r0, r0
08020a52: 4100       lsls      r1, r0, #1
08020a54: 0b48       ldr       r0, [pc, #0x2c] ; [0x8020a84] = 0x20003338 
08020a56: c0f8cc10   str.w     r1, [r0, #0xcc]
08020a5a: bdf80800   ldrh.w    r0, [sp, #8]
08020a5e: 00b2       sxth      r0, r0
08020a60: 4100       lsls      r1, r0, #1
08020a62: 0848       ldr       r0, [pc, #0x20] ; [0x8020a84] = 0x20003338 
08020a64: c0f8d010   str.w     r1, [r0, #0xd0]
08020a68: bdf80a00   ldrh.w    r0, [sp, #0xa]
08020a6c: 00b2       sxth      r0, r0
08020a6e: 4100       lsls      r1, r0, #1
08020a70: 0448       ldr       r0, [pc, #0x10] ; [0x8020a84] = 0x20003338 
08020a72: c0f8d410   str.w     r1, [r0, #0xd4]
08020a76: bdf80c00   ldrh.w    r0, [sp, #0xc]
08020a7a: 0249       ldr       r1, [pc, #8] ; [0x8020a84] = 0x20003338 
08020a7c: c1f8d800   str.w     r0, [r1, #0xd8]
08020a80: 0120       movs      r0, #1
08020a82: cfe7       b         #0x8020a24
08020a84: 3833       adds      r3, #0x38
08020a86: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08022c3c, span 0x84
08022c3c: 1fb5       push      {r0, r1, r2, r3, r4, lr}
08022c3e: 1f48       ldr       r0, [pc, #0x7c] ; [0x8022cbc] = 0x20003338 
08022c40: b0f8c000   ldrh.w    r0, [r0, #0xc0]
08022c44: 80b2       uxth      r0, r0
08022c46: adf80000   strh.w    r0, [sp]
08022c4a: 1c48       ldr       r0, [pc, #0x70] ; [0x8022cbc] = 0x20003338 
08022c4c: b0f8c400   ldrh.w    r0, [r0, #0xc4]
08022c50: 80b2       uxth      r0, r0
08022c52: adf80200   strh.w    r0, [sp, #2]
08022c56: 1948       ldr       r0, [pc, #0x64] ; [0x8022cbc] = 0x20003338 
08022c58: b0f8c800   ldrh.w    r0, [r0, #0xc8]
08022c5c: 80b2       uxth      r0, r0
08022c5e: adf80400   strh.w    r0, [sp, #4]
08022c62: 1649       ldr       r1, [pc, #0x58] ; [0x8022cbc] = 0x20003338 
08022c64: d1f8cc00   ldr.w     r0, [r1, #0xcc]
08022c68: 00ebd071   add.w     r1, r0, r0, lsr #31
08022c6c: c1f34f01   ubfx      r1, r1, #1, #0x10
08022c70: adf80610   strh.w    r1, [sp, #6]
08022c74: 1149       ldr       r1, [pc, #0x44] ; [0x8022cbc] = 0x20003338 
08022c76: d1f8d000   ldr.w     r0, [r1, #0xd0]
08022c7a: 00ebd071   add.w     r1, r0, r0, lsr #31
08022c7e: c1f34f01   ubfx      r1, r1, #1, #0x10
08022c82: adf80810   strh.w    r1, [sp, #8]
08022c86: 0d49       ldr       r1, [pc, #0x34] ; [0x8022cbc] = 0x20003338 
08022c88: d1f8d400   ldr.w     r0, [r1, #0xd4]
08022c8c: 00ebd071   add.w     r1, r0, r0, lsr #31
08022c90: c1f34f01   ubfx      r1, r1, #1, #0x10
08022c94: adf80a10   strh.w    r1, [sp, #0xa]
08022c98: 0848       ldr       r0, [pc, #0x20] ; [0x8022cbc] = 0x20003338 
08022c9a: b0f8d800   ldrh.w    r0, [r0, #0xd8]
08022c9e: 80b2       uxth      r0, r0
08022ca0: adf80c00   strh.w    r0, [sp, #0xc]
08022ca4: 40f22970   movw      r0, #0x729
08022ca8: adf80e00   strh.w    r0, [sp, #0xe]
08022cac: 6a46       mov       r2, sp
08022cae: 0821       movs      r1, #8
08022cb0: 0020       movs      r0, #0
08022cb2: fff731ff   bl        #0x8022b18
08022cb6: 04b0       add       sp, #0x10
08022cb8: 10bd       pop       {r4, pc}
08022cba: 0000       movs      r0, r0
08022cbc: 3833       adds      r3, #0x38
08022cbe: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08015fbc, span 0x6c
08015fbc: 0146       mov       r1, r0
08015fbe: 0022       movs      r2, #0
08015fc0: 1648       ldr       r0, [pc, #0x58] ; [0x801601c] = 0x8001340 
08015fc2: 0088       ldrh      r0, [r0]
08015fc4: 4cf2ef03   movw      r3, #0xc0ef
08015fc8: 9842       cmp       r0, r3
08015fca: 01d0       beq       #0x8015fd0
08015fcc: 0120       movs      r0, #1
08015fce: 7047       bx        lr
08015fd0: 1248       ldr       r0, [pc, #0x48] ; [0x801601c] = 0x8001340 
08015fd2: 001d       adds      r0, r0, #4
08015fd4: 0088       ldrh      r0, [r0]
08015fd6: 43f61073   movw      r3, #0x3f10
08015fda: 9842       cmp       r0, r3
08015fdc: 15d1       bne       #0x801600a
08015fde: 0f48       ldr       r0, [pc, #0x3c] ; [0x801601c] = 0x8001340 
08015fe0: 801c       adds      r0, r0, #2
08015fe2: 0088       ldrh      r0, [r0]
08015fe4: 40f2f943   movw      r3, #0x4f9
08015fe8: 9842       cmp       r0, r3
08015fea: 0edd       ble       #0x801600a
08015fec: 0b48       ldr       r0, [pc, #0x2c] ; [0x801601c] = 0x8001340 
08015fee: 801c       adds      r0, r0, #2
08015ff0: 0088       ldrh      r0, [r0]
08015ff2: 40f21463   movw      r3, #0x614
08015ff6: 9842       cmp       r0, r3
08015ff8: 07da       bge       #0x801600a
08015ffa: 0848       ldr       r0, [pc, #0x20] ; [0x801601c] = 0x8001340 
08015ffc: 801c       adds      r0, r0, #2
08015ffe: 0088       ldrh      r0, [r0]
08016000: 074b       ldr       r3, [pc, #0x1c] ; [0x8016020] = 0x200002ec 
08016002: 1880       strh      r0, [r3]
08016004: 0122       movs      r2, #1
08016006: 0120       movs      r0, #1
08016008: e1e7       b         #0x8015fce
0801600a: 29b9       cbnz      r1, #0x8016018
0801600c: 22b9       cbnz      r2, #0x8016018
0801600e: 0120       movs      r0, #1
08016010: 044b       ldr       r3, [pc, #0x10] ; [0x8016024] = 0x2000032d 
08016012: 1870       strb      r0, [r3]
08016014: 0020       movs      r0, #0
08016016: dae7       b         #0x8015fce
08016018: 0020       movs      r0, #0
0801601a: d8e7       b         #0x8015fce
0801601c: 4013       asrs      r0, r0, #0xd
0801601e: 0008       lsrs      r0, r0, #0x20
08016020: ec02       lsls      r4, r5, #0xb
08016022: 0020       movs      r0, #0
08016024: 2d03       lsls      r5, r5, #0xc
08016026: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x080164bc, span 0x540
080164bc: 2de9f04f   push.w    {r4, r5, r6, r7, r8, sb, sl, fp, lr}
080164c0: adf5037d   sub.w     sp, sp, #0x20c
080164c4: 0646       mov       r6, r0
080164c6: 0f46       mov       r7, r1
080164c8: 0020       movs      r0, #0
080164ca: 8290       str       r0, [sp, #0x208]
080164cc: 00bf       nop       
080164ce: 04e0       b         #0x80164da
080164d0: 315c       ldrb      r1, [r6, r0]
080164d2: 01aa       add       r2, sp, #4
080164d4: 1154       strb      r1, [r2, r0]
080164d6: 411c       adds      r1, r0, #1
080164d8: 88b2       uxth      r0, r1
080164da: b842       cmp       r0, r7
080164dc: f8db       blt       #0x80164d0
080164de: 1021       movs      r1, #0x10
080164e0: 0df10600   add.w     r0, sp, #6
080164e4: fff776f9   bl        #0x80157d4
080164e8: 0446       mov       r4, r0
080164ea: 2012       asrs      r0, r4, #8
080164ec: 8df81600   strb.w    r0, [sp, #0x16]
080164f0: e0b2       uxtb      r0, r4
080164f2: 8df81700   strb.w    r0, [sp, #0x17]
080164f6: 9df81600   ldrb.w    r0, [sp, #0x16]
080164fa: b17c       ldrb      r1, [r6, #0x12]
080164fc: 8842       cmp       r0, r1
080164fe: 04d1       bne       #0x801650a
08016500: 9df81700   ldrb.w    r0, [sp, #0x17]
08016504: f17c       ldrb      r1, [r6, #0x13]
08016506: 8842       cmp       r0, r1
08016508: 04d0       beq       #0x8016514
0801650a: 0020       movs      r0, #0
0801650c: 0df5037d   add.w     sp, sp, #0x20c
08016510: bde8f08f   pop.w     {r4, r5, r6, r7, r8, sb, sl, fp, pc}
08016514: 1420       movs      r0, #0x14
08016516: d349       ldr       r1, [pc, #0x34c] ; [0x8016864] = 0x200009bc 
08016518: 0860       str       r0, [r1]
0801651a: aa20       movs      r0, #0xaa
0801651c: 8df80400   strb.w    r0, [sp, #4]
08016520: 5520       movs      r0, #0x55
08016522: 8df80500   strb.w    r0, [sp, #5]
08016526: 9df81500   ldrb.w    r0, [sp, #0x15]
0801652a: 1028       cmp       r0, #0x10
0801652c: 1ad0       beq       #0x8016564
0801652e: 05dc       bgt       #0x801653c
08016530: 58b1       cbz       r0, #0x801654a
08016532: 0128       cmp       r0, #1
08016534: 0ad0       beq       #0x801654c
08016536: 0228       cmp       r0, #2
08016538: 7dd1       bne       #0x8016636
0801653a: 12e0       b         #0x8016562
0801653c: 3028       cmp       r0, #0x30
0801653e: 59d0       beq       #0x80165f4
08016540: 3128       cmp       r0, #0x31
08016542: 79d0       beq       #0x8016638
08016544: 3228       cmp       r0, #0x32
08016546: f7d1       bne       #0x8016538
08016548: 5de1       b         #0x8016806
0801654a: 77e1       b         #0x801683c
0801654c: 00f050fa   bl        #0x80169f0
08016550: 0128       cmp       r0, #1
08016552: 05d1       bne       #0x8016560
08016554: 0020       movs      r0, #0
08016556: 02f0bbff   bl        #0x80194d0
0801655a: 0120       movs      r0, #1
0801655c: 02f0b8ff   bl        #0x80194d0
08016560: 6ce1       b         #0x801683c
08016562: 6be1       b         #0x801683c
08016564: 9df80700   ldrb.w    r0, [sp, #7]
08016568: 9df80610   ldrb.w    r1, [sp, #6]
0801656c: 40ea0120   orr.w     r0, r0, r1, lsl #8
08016570: bd49       ldr       r1, [pc, #0x2f4] ; [0x8016868] = 0x200009ca 
08016572: 0880       strh      r0, [r1]
08016574: 9df81200   ldrb.w    r0, [sp, #0x12]
08016578: 9df81310   ldrb.w    r1, [sp, #0x13]
0801657c: 40ea0120   orr.w     r0, r0, r1, lsl #8
08016580: ba49       ldr       r1, [pc, #0x2e8] ; [0x801686c] = 0x200009c8 
08016582: 0880       strh      r0, [r1]
08016584: 0020       movs      r0, #0
08016586: ba49       ldr       r1, [pc, #0x2e8] ; [0x8016870] = 0x200009ce 
08016588: 0880       strh      r0, [r1]
0801658a: 7a20       movs      r0, #0x7a
0801658c: 8df81400   strb.w    r0, [sp, #0x14]
08016590: b648       ldr       r0, [pc, #0x2d8] ; [0x801686c] = 0x200009c8 
08016592: 0088       ldrh      r0, [r0]
08016594: 41f2a861   movw      r1, #0x16a8
08016598: 8842       cmp       r0, r1
0801659a: 12dc       bgt       #0x80165c2
0801659c: b248       ldr       r0, [pc, #0x2c8] ; [0x8016868] = 0x200009ca 
0801659e: 0188       ldrh      r1, [r0]
080165a0: b248       ldr       r0, [pc, #0x2c8] ; [0x801686c] = 0x200009c8 
080165a2: 0088       ldrh      r0, [r0]
080165a4: 00f0cefe   bl        #0x8017344
080165a8: 3020       movs      r0, #0x30
080165aa: 8df81500   strb.w    r0, [sp, #0x15]
080165ae: 0020       movs      r0, #0
080165b0: 8df81300   strb.w    r0, [sp, #0x13]
080165b4: 8df81200   strb.w    r0, [sp, #0x12]
080165b8: 8df80700   strb.w    r0, [sp, #7]
080165bc: 8df80600   strb.w    r0, [sp, #6]
080165c0: 0fe0       b         #0x80165e2
080165c2: 3020       movs      r0, #0x30
080165c4: 8df81500   strb.w    r0, [sp, #0x15]
080165c8: 0020       movs      r0, #0
080165ca: 8df81300   strb.w    r0, [sp, #0x13]
080165ce: 8df81200   strb.w    r0, [sp, #0x12]
080165d2: 8df80700   strb.w    r0, [sp, #7]
080165d6: 8df80600   strb.w    r0, [sp, #6]
080165da: a349       ldr       r1, [pc, #0x28c] ; [0x8016868] = 0x200009ca 
080165dc: 0880       strh      r0, [r1]
080165de: a349       ldr       r1, [pc, #0x28c] ; [0x801686c] = 0x200009c8 
080165e0: 0880       strh      r0, [r1]
080165e2: 0020       movs      r0, #0
080165e4: a349       ldr       r1, [pc, #0x28c] ; [0x8016874] = 0x200009d0 
080165e6: 0870       strb      r0, [r1]
080165e8: a349       ldr       r1, [pc, #0x28c] ; [0x8016878] = 0x200030bc TotalVoltage
080165ea: 81f89800   strb.w    r0, [r1, #0x98]
080165ee: 0120       movs      r0, #1
080165f0: 8290       str       r0, [sp, #0x208]
080165f2: 23e1       b         #0x801683c
080165f4: 9df80700   ldrb.w    r0, [sp, #7]
080165f8: 9df80610   ldrb.w    r1, [sp, #6]
080165fc: 40ea0120   orr.w     r0, r0, r1, lsl #8
08016600: 9949       ldr       r1, [pc, #0x264] ; [0x8016868] = 0x200009ca 
08016602: 0880       strh      r0, [r1]
08016604: 9df81200   ldrb.w    r0, [sp, #0x12]
08016608: 9df81310   ldrb.w    r1, [sp, #0x13]
0801660c: 40ea0120   orr.w     r0, r0, r1, lsl #8
08016610: 9649       ldr       r1, [pc, #0x258] ; [0x801686c] = 0x200009c8 
08016612: 0880       strh      r0, [r1]
08016614: 0020       movs      r0, #0
08016616: 9649       ldr       r1, [pc, #0x258] ; [0x8016870] = 0x200009ce 
08016618: 0880       strh      r0, [r1]
0801661a: 7a20       movs      r0, #0x7a
0801661c: 8df81400   strb.w    r0, [sp, #0x14]
08016620: 9248       ldr       r0, [pc, #0x248] ; [0x801686c] = 0x200009c8 
08016622: 0088       ldrh      r0, [r0]
08016624: 41f2a861   movw      r1, #0x16a8
08016628: 8842       cmp       r0, r1
0801662a: 15dc       bgt       #0x8016658
0801662c: 8e48       ldr       r0, [pc, #0x238] ; [0x8016868] = 0x200009ca 
0801662e: 0188       ldrh      r1, [r0]
08016630: 8e48       ldr       r0, [pc, #0x238] ; [0x801686c] = 0x200009c8 
08016632: 0088       ldrh      r0, [r0]
08016634: 01e0       b         #0x801663a
08016636: 00e1       b         #0x801683a
08016638: 27e0       b         #0x801668a
0801663a: 00f083fe   bl        #0x8017344
0801663e: 3120       movs      r0, #0x31
08016640: 8df81500   strb.w    r0, [sp, #0x15]
08016644: 0020       movs      r0, #0
08016646: 8df81300   strb.w    r0, [sp, #0x13]
0801664a: 8df81200   strb.w    r0, [sp, #0x12]
0801664e: 8df80700   strb.w    r0, [sp, #7]
08016652: 8df80600   strb.w    r0, [sp, #6]
08016656: 0fe0       b         #0x8016678
08016658: 3020       movs      r0, #0x30
0801665a: 8df81500   strb.w    r0, [sp, #0x15]
0801665e: 0020       movs      r0, #0
08016660: 8df81300   strb.w    r0, [sp, #0x13]
08016664: 8df81200   strb.w    r0, [sp, #0x12]
08016668: 8df80700   strb.w    r0, [sp, #7]
0801666c: 8df80600   strb.w    r0, [sp, #6]
08016670: 7d49       ldr       r1, [pc, #0x1f4] ; [0x8016868] = 0x200009ca 
08016672: 0880       strh      r0, [r1]
08016674: 7d49       ldr       r1, [pc, #0x1f4] ; [0x801686c] = 0x200009c8 
08016676: 0880       strh      r0, [r1]
08016678: 0020       movs      r0, #0
0801667a: 7e49       ldr       r1, [pc, #0x1f8] ; [0x8016874] = 0x200009d0 
0801667c: 0870       strb      r0, [r1]
0801667e: 7e49       ldr       r1, [pc, #0x1f8] ; [0x8016878] = 0x200030bc TotalVoltage
08016680: 81f89800   strb.w    r0, [r1, #0x98]
08016684: 0120       movs      r0, #1
08016686: 8290       str       r0, [sp, #0x208]
08016688: d8e0       b         #0x801683c
0801668a: 7848       ldr       r0, [pc, #0x1e0] ; [0x801686c] = 0x200009c8 
0801668c: 0088       ldrh      r0, [r0]
0801668e: 00b9       cbnz      r0, #0x8016692
08016690: d4e0       b         #0x801683c
08016692: 9df81200   ldrb.w    r0, [sp, #0x12]
08016696: 9df81310   ldrb.w    r1, [sp, #0x13]
0801669a: 40ea0128   orr.w     r8, r0, r1, lsl #8
0801669e: 9df80700   ldrb.w    r0, [sp, #7]
080166a2: 9df80610   ldrb.w    r1, [sp, #6]
080166a6: 40ea0129   orr.w     sb, r0, r1, lsl #8
080166aa: 9df80800   ldrb.w    r0, [sp, #8]
080166ae: 9df80910   ldrb.w    r1, [sp, #9]
080166b2: 40ea0125   orr.w     r5, r0, r1, lsl #8
080166b6: 6e48       ldr       r0, [pc, #0x1b8] ; [0x8016870] = 0x200009ce 
080166b8: 0088       ldrh      r0, [r0]
080166ba: 6c49       ldr       r1, [pc, #0x1b0] ; [0x801686c] = 0x200009c8 
080166bc: 0988       ldrh      r1, [r1]
080166be: 8842       cmp       r0, r1
080166c0: 3fda       bge       #0x8016742
080166c2: 6b48       ldr       r0, [pc, #0x1ac] ; [0x8016870] = 0x200009ce 
080166c4: 0088       ldrh      r0, [r0]
080166c6: 4045       cmp       r0, r8
080166c8: 23d1       bne       #0x8016712
080166ca: 242d       cmp       r5, #0x24
080166cc: 21dc       bgt       #0x8016712
080166ce: 05eb4500   add.w     r0, r5, r5, lsl #1
080166d2: 8100       lsls      r1, r0, #2
080166d4: 06a8       add       r0, sp, #0x18
080166d6: fff77df8   bl        #0x80157d4
080166da: 8246       mov       sl, r0
080166dc: d145       cmp       sb, sl
080166de: 17d1       bne       #0x8016710
080166e0: 6348       ldr       r0, [pc, #0x18c] ; [0x8016870] = 0x200009ce 
080166e2: b0f800b0   ldrh.w    fp, [r0]
080166e6: 2a46       mov       r2, r5
080166e8: 06a9       add       r1, sp, #0x18
080166ea: 0088       ldrh      r0, [r0]
080166ec: 00f056fe   bl        #0x801739c
080166f0: 5f48       ldr       r0, [pc, #0x17c] ; [0x8016870] = 0x200009ce 
080166f2: 0088       ldrh      r0, [r0]
080166f4: 2844       add       r0, r5
080166f6: 5e49       ldr       r1, [pc, #0x178] ; [0x8016870] = 0x200009ce 
080166f8: 0880       strh      r0, [r1]
080166fa: 3220       movs      r0, #0x32
080166fc: 0bfb00f0   mul       r0, fp, r0
08016700: 5a49       ldr       r1, [pc, #0x168] ; [0x801686c] = 0x200009c8 
08016702: 0988       ldrh      r1, [r1]
08016704: b0fbf1f0   udiv      r0, r0, r1
08016708: 5b49       ldr       r1, [pc, #0x16c] ; [0x8016878] = 0x200030bc TotalVoltage
0801670a: 81f89800   strb.w    r0, [r1, #0x98]
0801670e: 00bf       nop       
08016710: 00bf       nop       
08016712: 5948       ldr       r0, [pc, #0x164] ; [0x8016878] = 0x200030bc TotalVoltage
08016714: 90f89800   ldrb.w    r0, [r0, #0x98]
08016718: 8df80600   strb.w    r0, [sp, #6]
0801671c: 0020       movs      r0, #0
0801671e: 8df80700   strb.w    r0, [sp, #7]
08016722: 8df80800   strb.w    r0, [sp, #8]
08016726: 8df80900   strb.w    r0, [sp, #9]
0801672a: 8df80a00   strb.w    r0, [sp, #0xa]
0801672e: 5048       ldr       r0, [pc, #0x140] ; [0x8016870] = 0x200009ce 
08016730: 0078       ldrb      r0, [r0]
08016732: 8df81200   strb.w    r0, [sp, #0x12]
08016736: 4e48       ldr       r0, [pc, #0x138] ; [0x8016870] = 0x200009ce 
08016738: 0088       ldrh      r0, [r0]
0801673a: 0012       asrs      r0, r0, #8
0801673c: 8df81300   strb.w    r0, [sp, #0x13]
08016740: 5ee0       b         #0x8016800
08016742: 4a48       ldr       r0, [pc, #0x128] ; [0x801686c] = 0x200009c8 
08016744: 0088       ldrh      r0, [r0]
08016746: 00eb4000   add.w     r0, r0, r0, lsl #1
0801674a: 8100       lsls      r1, r0, #2
0801674c: 4b48       ldr       r0, [pc, #0x12c] ; [0x801687c] = 0x8029008 
0801674e: fff741f8   bl        #0x80157d4
08016752: 8246       mov       sl, r0
08016754: 4548       ldr       r0, [pc, #0x114] ; [0x801686c] = 0x200009c8 
08016756: 0088       ldrh      r0, [r0]
08016758: 00eb4000   add.w     r0, r0, r0, lsl #1
0801675c: 8100       lsls      r1, r0, #2
0801675e: 4748       ldr       r0, [pc, #0x11c] ; [0x801687c] = 0x8029008 
08016760: fff72af8   bl        #0x80157b8
08016764: 4649       ldr       r1, [pc, #0x118] ; [0x8016880] = 0x200009cc 
08016766: 0880       strh      r0, [r1]
08016768: 3f48       ldr       r0, [pc, #0xfc] ; [0x8016868] = 0x200009ca 
0801676a: 0088       ldrh      r0, [r0]
0801676c: 5045       cmp       r0, sl
0801676e: 2dd1       bne       #0x80167cc
08016770: 3e48       ldr       r0, [pc, #0xf8] ; [0x801686c] = 0x200009c8 
08016772: 0088       ldrh      r0, [r0]
08016774: b0f57a7f   cmp.w     r0, #0x3e8
08016778: 28dd       ble       #0x80167cc
0801677a: 3f48       ldr       r0, [pc, #0xfc] ; [0x8016878] = 0x200030bc TotalVoltage
0801677c: 90f89800   ldrb.w    r0, [r0, #0x98]
08016780: 8df80600   strb.w    r0, [sp, #6]
08016784: 0020       movs      r0, #0
08016786: 8df80700   strb.w    r0, [sp, #7]
0801678a: 8df80800   strb.w    r0, [sp, #8]
0801678e: 8df80900   strb.w    r0, [sp, #9]
08016792: 0120       movs      r0, #1
08016794: 8df80a00   strb.w    r0, [sp, #0xa]
08016798: ff20       movs      r0, #0xff
0801679a: 8df81200   strb.w    r0, [sp, #0x12]
0801679e: 8df81300   strb.w    r0, [sp, #0x13]
080167a2: 7a20       movs      r0, #0x7a
080167a4: 8df81400   strb.w    r0, [sp, #0x14]
080167a8: 3220       movs      r0, #0x32
080167aa: 8df81500   strb.w    r0, [sp, #0x15]
080167ae: 0120       movs      r0, #1
080167b0: 8290       str       r0, [sp, #0x208]
080167b2: 3048       ldr       r0, [pc, #0xc0] ; [0x8016874] = 0x200009d0 
080167b4: 0078       ldrb      r0, [r0]
080167b6: 10bb       cbnz      r0, #0x80167fe
080167b8: 0020       movs      r0, #0
080167ba: 02f089fe   bl        #0x80194d0
080167be: 0120       movs      r0, #1
080167c0: 02f086fe   bl        #0x80194d0
080167c4: 0120       movs      r0, #1
080167c6: 2b49       ldr       r1, [pc, #0xac] ; [0x8016874] = 0x200009d0 
080167c8: 0870       strb      r0, [r1]
080167ca: 18e0       b         #0x80167fe
080167cc: 2a48       ldr       r0, [pc, #0xa8] ; [0x8016878] = 0x200030bc TotalVoltage
080167ce: 90f89800   ldrb.w    r0, [r0, #0x98]
080167d2: 8df80600   strb.w    r0, [sp, #6]
080167d6: 0020       movs      r0, #0
080167d8: 8df80700   strb.w    r0, [sp, #7]
080167dc: 8df80800   strb.w    r0, [sp, #8]
080167e0: 8df80900   strb.w    r0, [sp, #9]
080167e4: 8df80a00   strb.w    r0, [sp, #0xa]
080167e8: ff20       movs      r0, #0xff
080167ea: 8df81200   strb.w    r0, [sp, #0x12]
080167ee: 8df81300   strb.w    r0, [sp, #0x13]
080167f2: 7a20       movs      r0, #0x7a
080167f4: 8df81400   strb.w    r0, [sp, #0x14]
080167f8: 3220       movs      r0, #0x32
080167fa: 8df81500   strb.w    r0, [sp, #0x15]
080167fe: 00bf       nop       
08016800: 0120       movs      r0, #1
08016802: 8290       str       r0, [sp, #0x208]
08016804: 1ae0       b         #0x801683c
08016806: 6420       movs      r0, #0x64
08016808: 8df80600   strb.w    r0, [sp, #6]
0801680c: 0020       movs      r0, #0
0801680e: 8df80700   strb.w    r0, [sp, #7]
08016812: 8df80800   strb.w    r0, [sp, #8]
08016816: 8df80900   strb.w    r0, [sp, #9]
0801681a: 8df80a00   strb.w    r0, [sp, #0xa]
0801681e: ff20       movs      r0, #0xff
08016820: 8df81200   strb.w    r0, [sp, #0x12]
08016824: 8df81300   strb.w    r0, [sp, #0x13]
08016828: 7a20       movs      r0, #0x7a
0801682a: 8df81400   strb.w    r0, [sp, #0x14]
0801682e: 3220       movs      r0, #0x32
08016830: 8df81500   strb.w    r0, [sp, #0x15]
08016834: 0120       movs      r0, #1
08016836: 8290       str       r0, [sp, #0x208]
08016838: 00e0       b         #0x801683c
0801683a: 00bf       nop       
0801683c: 00bf       nop       
0801683e: 8298       ldr       r0, [sp, #0x208]
08016840: 70b1       cbz       r0, #0x8016860
08016842: 1021       movs      r1, #0x10
08016844: 0df10600   add.w     r0, sp, #6
08016848: fef7c4ff   bl        #0x80157d4
0801684c: 0446       mov       r4, r0
0801684e: 2012       asrs      r0, r4, #8
08016850: 8df81600   strb.w    r0, [sp, #0x16]
08016854: e0b2       uxtb      r0, r4
08016856: 8df81700   strb.w    r0, [sp, #0x17]
0801685a: 01a8       add       r0, sp, #4
0801685c: f8f7e0ff   bl        #0x800f820
08016860: 00bf       nop       
08016862: 53e6       b         #0x801650c
08016864: bc09       lsrs      r4, r7, #6
08016866: 0020       movs      r0, #0
08016868: ca09       lsrs      r2, r1, #7
0801686a: 0020       movs      r0, #0
0801686c: c809       lsrs      r0, r1, #7
0801686e: 0020       movs      r0, #0
08016870: ce09       lsrs      r6, r1, #7
08016872: 0020       movs      r0, #0
08016874: d009       lsrs      r0, r2, #7
08016876: 0020       movs      r0, #0
08016878: bc30       adds      r0, #0xbc
0801687a: 0020       movs      r0, #0
0801687c: 0890       str       r0, [sp, #0x20]
0801687e: 0208       lsrs      r2, r0, #0x20
08016880: cc09       lsrs      r4, r1, #7
08016882: 0020       movs      r0, #0
08016884: 0346       mov       r3, r0
08016886: 7047       bx        lr
08016888: 0146       mov       r1, r0
0801688a: aa20       movs      r0, #0xaa
0801688c: 01eb4112   add.w     r2, r1, r1, lsl #5
08016890: 02eb8112   add.w     r2, r2, r1, lsl #6
08016894: 124b       ldr       r3, [pc, #0x48] ; [0x80168e0] = 0x20004e24 
08016896: 03ebc202   add.w     r2, r3, r2, lsl #3
0801689a: 5076       strb      r0, [r2, #0x19]
0801689c: 5522       movs      r2, #0x55
0801689e: 01eb4110   add.w     r0, r1, r1, lsl #5
080168a2: 00eb8110   add.w     r0, r0, r1, lsl #6
080168a6: 03ebc000   add.w     r0, r3, r0, lsl #3
080168aa: 8276       strb      r2, [r0, #0x1a]
080168ac: b022       movs      r2, #0xb0
080168ae: 01eb4110   add.w     r0, r1, r1, lsl #5
080168b2: 00eb8110   add.w     r0, r0, r1, lsl #6
080168b6: 03ebc000   add.w     r0, r3, r0, lsl #3
080168ba: c276       strb      r2, [r0, #0x1b]
080168bc: 0022       movs      r2, #0
080168be: 01eb4110   add.w     r0, r1, r1, lsl #5
080168c2: 00eb8110   add.w     r0, r0, r1, lsl #6
080168c6: 03ebc000   add.w     r0, r3, r0, lsl #3
080168ca: 0277       strb      r2, [r0, #0x1c]
080168cc: 4f22       movs      r2, #0x4f
080168ce: 01eb4110   add.w     r0, r1, r1, lsl #5
080168d2: 00eb8110   add.w     r0, r0, r1, lsl #6
080168d6: 03ebc000   add.w     r0, r3, r0, lsl #3
080168da: 4277       strb      r2, [r0, #0x1d]
080168dc: 0520       movs      r0, #5
080168de: 7047       bx        lr
080168e0: 244e       ldr       r6, [pc, #0x90] ; [0x8016974] = 0x46381847 
080168e2: 0020       movs      r0, #0
080168e4: 0146       mov       r1, r0
080168e6: aa20       movs      r0, #0xaa
080168e8: 01eb4112   add.w     r2, r1, r1, lsl #5
080168ec: 02eb8112   add.w     r2, r2, r1, lsl #6
080168f0: 124b       ldr       r3, [pc, #0x48] ; [0x801693c] = 0x20004e24 
080168f2: 03ebc202   add.w     r2, r3, r2, lsl #3
080168f6: 5076       strb      r0, [r2, #0x19]
080168f8: 5522       movs      r2, #0x55
080168fa: 01eb4110   add.w     r0, r1, r1, lsl #5
080168fe: 00eb8110   add.w     r0, r0, r1, lsl #6
08016902: 03ebc000   add.w     r0, r3, r0, lsl #3
08016906: 8276       strb      r2, [r0, #0x1a]
08016908: bb22       movs      r2, #0xbb
0801690a: 01eb4110   add.w     r0, r1, r1, lsl #5
0801690e: 00eb8110   add.w     r0, r0, r1, lsl #6
08016912: 03ebc000   add.w     r0, r3, r0, lsl #3
08016916: c276       strb      r2, [r0, #0x1b]
08016918: 0022       movs      r2, #0
0801691a: 01eb4110   add.w     r0, r1, r1, lsl #5
0801691e: 00eb8110   add.w     r0, r0, r1, lsl #6
08016922: 03ebc000   add.w     r0, r3, r0, lsl #3
08016926: 0277       strb      r2, [r0, #0x1c]
08016928: 4422       movs      r2, #0x44
0801692a: 01eb4110   add.w     r0, r1, r1, lsl #5
0801692e: 00eb8110   add.w     r0, r0, r1, lsl #6
08016932: 03ebc000   add.w     r0, r3, r0, lsl #3
08016936: 4277       strb      r2, [r0, #0x1d]
08016938: 0520       movs      r0, #5
0801693a: 7047       bx        lr
0801693c: 244e       ldr       r6, [pc, #0x90] ; [0x80169d0] = 0xb28d1c49 
0801693e: 0020       movs      r0, #0
08016940: 2de9f04f   push.w    {r4, r5, r6, r7, r8, sb, sl, fp, lr}
08016944: 8346       mov       fp, r0
08016946: 0e46       mov       r6, r1
08016948: 0025       movs      r5, #0
0801694a: 3078       ldrb      r0, [r6]
0801694c: 7e28       cmp       r0, #0x7e
0801694e: 02d0       beq       #0x8016956
08016950: 0020       movs      r0, #0
08016952: bde8f08f   pop.w     {r4, r5, r6, r7, r8, sb, sl, fp, pc}
08016956: 06f10900   add.w     r0, r6, #9
0801695a: 08f0f7fd   bl        #0x801f54c
0801695e: 0446       mov       r4, r0
08016960: 4fea2428   asr.w     r8, r4, #8
08016964: 04f0ff09   and       sb, r4, #0xff
08016968: 08f00f00   and       r0, r8, #0xf
0801696c: 00eb2910   add.w     r0, r0, sb, asr #4
08016970: 09f00f01   and       r1, sb, #0xf
08016974: 4718       adds      r7, r0, r1
08016976: 3846       mov       r0, r7
08016978: f917       asrs      r1, r7, #0x1f
0801697a: 07eb1171   add.w     r1, r7, r1, lsr #28
0801697e: 0911       asrs      r1, r1, #4
08016980: a7eb0111   sub.w     r1, r7, r1, lsl #4
08016984: c943       mvns      r1, r1
08016986: 491c       adds      r1, r1, #1
08016988: cfb2       uxtb      r7, r1
0801698a: 07f00f00   and       r0, r7, #0xf
0801698e: b0eb281f   cmp.w     r0, r8, asr #4
08016992: 01d0       beq       #0x8016998
08016994: 0020       movs      r0, #0
08016996: dce7       b         #0x8016952
08016998: c4f30b04   ubfx      r4, r4, #0, #0xc
0801699c: 04f11200   add.w     r0, r4, #0x12
080169a0: fa28       cmp       r0, #0xfa
080169a2: 01dd       ble       #0x80169a8
080169a4: 0020       movs      r0, #0
080169a6: d4e7       b         #0x8016952
080169a8: 0020       movs      r0, #0
080169aa: 05e0       b         #0x80169b8
080169ac: 411c       adds      r1, r0, #1
080169ae: 715c       ldrb      r1, [r6, r1]
080169b0: 2944       add       r1, r5
080169b2: 8db2       uxth      r5, r1
080169b4: 411c       adds      r1, r0, #1
080169b6: c8b2       uxtb      r0, r1
080169b8: 04f10c01   add.w     r1, r4, #0xc
080169bc: 8842       cmp       r0, r1
080169be: f5db       blt       #0x80169ac
080169c0: 2846       mov       r0, r5
080169c2: e917       asrs      r1, r5, #0x1f
080169c4: 05eb1141   add.w     r1, r5, r1, lsr #16
080169c8: 0914       asrs      r1, r1, #0x10
080169ca: a5eb0141   sub.w     r1, r5, r1, lsl #16
080169ce: c943       mvns      r1, r1
080169d0: 491c       adds      r1, r1, #1
080169d2: 8db2       uxth      r5, r1
080169d4: 04f10d01   add.w     r1, r4, #0xd
080169d8: 8819       adds      r0, r1, r6
080169da: 08f0b7fd   bl        #0x801f54c
080169de: 8246       mov       sl, r0
080169e0: aa45       cmp       sl, r5
080169e2: 01d0       beq       #0x80169e8
080169e4: 0020       movs      r0, #0
080169e6: b4e7       b         #0x8016952
080169e8: abf80040   strh.w    r4, [fp]
080169ec: 0120       movs      r0, #1
080169ee: b0e7       b         #0x8016952
080169f0: 10b5       push      {r4, lr}
080169f2: 1648       ldr       r0, [pc, #0x58] ; [0x8016a4c] = 0x8029000 
080169f4: 0088       ldrh      r0, [r0]
080169f6: 1649       ldr       r1, [pc, #0x58] ; [0x8016a50] = 0x200009c8 
080169f8: 0880       strh      r0, [r1]
080169fa: 1448       ldr       r0, [pc, #0x50] ; [0x8016a4c] = 0x8029000 

# Original v2.41 bytes, entry 0x08017344, span 0x58
08017344: 70b5       push      {r4, r5, r6, lr}
08017346: 0546       mov       r5, r0
08017348: 0e46       mov       r6, r1
0801734a: f4f785f9   bl        #0x800b658
0801734e: 3420       movs      r0, #0x34
08017350: f4f714f9   bl        #0x800b57c
08017354: 0024       movs      r4, #0
08017356: 07e0       b         #0x8017368
08017358: 0e49       ldr       r1, [pc, #0x38] ; [0x8017394] = 0x8029000 
0801735a: 01ebc420   add.w     r0, r1, r4, lsl #11
0801735e: f4f713f9   bl        #0x800b588
08017362: 0d49       ldr       r1, [pc, #0x34] ; [0x8017398] = 0x200009d1 
08017364: 0870       strb      r0, [r1]
08017366: 641c       adds      r4, r4, #1
08017368: 202c       cmp       r4, #0x20
0801736a: f5d3       blo       #0x8017358
0801736c: 3420       movs      r0, #0x34
0801736e: f4f705f9   bl        #0x800b57c
08017372: 2946       mov       r1, r5
08017374: 0748       ldr       r0, [pc, #0x1c] ; [0x8017394] = 0x8029000 
08017376: f4f72ff9   bl        #0x800b5d8
0801737a: 0749       ldr       r1, [pc, #0x1c] ; [0x8017398] = 0x200009d1 
0801737c: 0870       strb      r0, [r1]
0801737e: 3146       mov       r1, r6
08017380: 0448       ldr       r0, [pc, #0x10] ; [0x8017394] = 0x8029000 
08017382: 001d       adds      r0, r0, #4
08017384: f4f728f9   bl        #0x800b5d8
08017388: 0349       ldr       r1, [pc, #0xc] ; [0x8017398] = 0x200009d1 
0801738a: 0870       strb      r0, [r1]
0801738c: f4f71cf9   bl        #0x800b5c8
08017390: 70bd       pop       {r4, r5, r6, pc}
08017392: 0000       movs      r0, r0
08017394: 0090       str       r0, [sp]
08017396: 0208       lsrs      r2, r0, #0x20
08017398: d109       lsrs      r1, r2, #7
0801739a: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x0801739c, span 0x64
0801739c: 2de9f041   push.w    {r4, r5, r6, r7, r8, lr}
080173a0: 0646       mov       r6, r0
080173a2: 0f46       mov       r7, r1
080173a4: 9046       mov       r8, r2
080173a6: f4f757f9   bl        #0x800b658
080173aa: 3420       movs      r0, #0x34
080173ac: f4f7e6f8   bl        #0x800b57c
080173b0: 0025       movs      r5, #0
080173b2: 18e0       b         #0x80173e6
080173b4: 0024       movs      r4, #0
080173b6: 13e0       b         #0x80173e0
080173b8: 7219       adds      r2, r6, r5
080173ba: 02eb4202   add.w     r2, r2, r2, lsl #1
080173be: 0e4b       ldr       r3, [pc, #0x38] ; [0x80173f8] = 0x8029008 
080173c0: 03eb8202   add.w     r2, r3, r2, lsl #2
080173c4: 02eb8400   add.w     r0, r2, r4, lsl #2
080173c8: 05eb4502   add.w     r2, r5, r5, lsl #1
080173cc: 9200       lsls      r2, r2, #2
080173ce: 04eb9202   add.w     r2, r4, r2, lsr #2
080173d2: 57f82210   ldr.w     r1, [r7, r2, lsl #2]
080173d6: f4f71bf9   bl        #0x800b610
080173da: 0849       ldr       r1, [pc, #0x20] ; [0x80173fc] = 0x200009d1 
080173dc: 0870       strb      r0, [r1]
080173de: 641c       adds      r4, r4, #1
080173e0: 032c       cmp       r4, #3
080173e2: e9d3       blo       #0x80173b8
080173e4: 6d1c       adds      r5, r5, #1
080173e6: 4545       cmp       r5, r8
080173e8: e4d3       blo       #0x80173b4
080173ea: 3420       movs      r0, #0x34
080173ec: f4f7c6f8   bl        #0x800b57c
080173f0: f4f7eaf8   bl        #0x800b5c8
080173f4: bde8f081   pop.w     {r4, r5, r6, r7, r8, pc}
080173f8: 0890       str       r0, [sp, #0x20]
080173fa: 0208       lsrs      r2, r0, #0x20
080173fc: d109       lsrs      r1, r2, #7
080173fe: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08021934, span 0x68
08021934: f0b5       push      {r4, r5, r6, r7, lr}
08021936: c4b0       sub       sp, #0x110
08021938: 0446       mov       r4, r0
0802193a: 00bf       nop       
0802193c: 6d46       mov       r5, sp
0802193e: 0026       movs      r6, #0
08021940: 4296       str       r6, [sp, #0x108]
08021942: 4396       str       r6, [sp, #0x10c]
08021944: 0021       movs      r1, #0
08021946: 13e0       b         #0x8021970
08021948: 1348       ldr       r0, [pc, #0x4c] ; [0x8021998] = 0x8027070 
0802194a: 50f82400   ldr.w     r0, [r0, r4, lsl #2]
0802194e: 50f82100   ldr.w     r0, [r0, r1, lsl #2]
08021952: 45f82100   str.w     r0, [r5, r1, lsl #2]
08021956: 55f82160   ldr.w     r6, [r5, r1, lsl #2]
0802195a: ddf808c1   ldr.w     ip, [sp, #0x108]
0802195e: 4398       ldr       r0, [sp, #0x10c]
08021960: 1ceb0606   adds.w    r6, ip, r6
08021964: 40f10000   adc       r0, r0, #0
08021968: 4296       str       r6, [sp, #0x108]
0802196a: 4390       str       r0, [sp, #0x10c]
0802196c: 481c       adds      r0, r1, #1
0802196e: c1b2       uxtb      r1, r0
08021970: 4229       cmp       r1, #0x42
08021972: e9d3       blo       #0x8021948
08021974: 0848       ldr       r0, [pc, #0x20] ; [0x8021998] = 0x8027070 
08021976: 50f82400   ldr.w     r0, [r0, r4, lsl #2]
0802197a: 00eb8100   add.w     r0, r0, r1, lsl #2
0802197e: 0cc8       ldm       r0!, {r2, r3}
08021980: 4298       ldr       r0, [sp, #0x108]
08021982: 5040       eors      r0, r2
08021984: 439e       ldr       r6, [sp, #0x10c]
08021986: 5e40       eors      r6, r3
08021988: 3043       orrs      r0, r6
0802198a: 02d1       bne       #0x8021992
0802198c: 0120       movs      r0, #1
0802198e: 44b0       add       sp, #0x110
08021990: f0bd       pop       {r4, r5, r6, r7, pc}
08021992: 0020       movs      r0, #0
08021994: fbe7       b         #0x802198e
08021996: 0000       movs      r0, r0
08021998: 7070       strb      r0, [r6, #1]
0802199a: 0208       lsrs      r2, r0, #0x20

# Original v2.41 bytes, entry 0x0802199c, span 0x30
0802199c: 00b5       push      {lr}
0802199e: 0020       movs      r0, #0
080219a0: fff7c8ff   bl        #0x8021934
080219a4: 20b1       cbz       r0, #0x80219b0
080219a6: 0020       movs      r0, #0
080219a8: 00f010f8   bl        #0x80219cc
080219ac: 0120       movs      r0, #1
080219ae: 00bd       pop       {pc}
080219b0: 0120       movs      r0, #1
080219b2: fff7bfff   bl        #0x8021934
080219b6: 20b1       cbz       r0, #0x80219c2
080219b8: 0120       movs      r0, #1
080219ba: 00f007f8   bl        #0x80219cc
080219be: 0220       movs      r0, #2
080219c0: f5e7       b         #0x80219ae
080219c2: 00f019f8   bl        #0x80219f8
080219c6: 0020       movs      r0, #0
080219c8: f1e7       b         #0x80219ae
080219ca: 0000       movs      r0, r0

# Original v2.41 bytes, entry 0x080219f8, span 0x98
080219f8: c4b0       sub       sp, #0x110
080219fa: 6a46       mov       r2, sp
080219fc: 0021       movs      r1, #0
080219fe: 07e0       b         #0x8021a10
08021a00: 2148       ldr       r0, [pc, #0x84] ; [0x8021a88] = 0x8027070 
08021a02: 0068       ldr       r0, [r0]
08021a04: 50f82100   ldr.w     r0, [r0, r1, lsl #2]
08021a08: 42f82100   str.w     r0, [r2, r1, lsl #2]
08021a0c: 481c       adds      r0, r1, #1
08021a0e: c1b2       uxtb      r1, r0
08021a10: 4229       cmp       r1, #0x42
08021a12: f5d3       blo       #0x8021a00
08021a14: 9df86200   ldrb.w    r0, [sp, #0x62]
08021a18: 4b28       cmp       r0, #0x4b
08021a1a: 11d1       bne       #0x8021a40
08021a1c: 9df86300   ldrb.w    r0, [sp, #0x63]
08021a20: 5328       cmp       r0, #0x53
08021a22: 0dd1       bne       #0x8021a40
08021a24: 0021       movs      r1, #0
08021a26: 06e0       b         #0x8021a36
08021a28: 0df16200   add.w     r0, sp, #0x62
08021a2c: 435c       ldrb      r3, [r0, r1]
08021a2e: 1748       ldr       r0, [pc, #0x5c] ; [0x8021a8c] = 0x200031fa 
08021a30: 4354       strb      r3, [r0, r1]
08021a32: 481c       adds      r0, r1, #1
08021a34: c1b2       uxtb      r1, r0
08021a36: 1429       cmp       r1, #0x14
08021a38: f6db       blt       #0x8021a28
08021a3a: 0120       movs      r0, #1
08021a3c: 44b0       add       sp, #0x110
08021a3e: 7047       bx        lr
08021a40: 0021       movs      r1, #0
08021a42: 07e0       b         #0x8021a54
08021a44: 1048       ldr       r0, [pc, #0x40] ; [0x8021a88] = 0x8027070 
08021a46: 4068       ldr       r0, [r0, #4]
08021a48: 50f82100   ldr.w     r0, [r0, r1, lsl #2]
08021a4c: 42f82100   str.w     r0, [r2, r1, lsl #2]
08021a50: 481c       adds      r0, r1, #1
08021a52: c1b2       uxtb      r1, r0
08021a54: 4229       cmp       r1, #0x42
08021a56: f5d3       blo       #0x8021a44
08021a58: 9df86200   ldrb.w    r0, [sp, #0x62]
08021a5c: 4b28       cmp       r0, #0x4b
08021a5e: 10d1       bne       #0x8021a82
08021a60: 9df86300   ldrb.w    r0, [sp, #0x63]
08021a64: 5328       cmp       r0, #0x53
08021a66: 0cd1       bne       #0x8021a82
08021a68: 0021       movs      r1, #0
08021a6a: 06e0       b         #0x8021a7a
08021a6c: 0df16200   add.w     r0, sp, #0x62
08021a70: 435c       ldrb      r3, [r0, r1]
08021a72: 0648       ldr       r0, [pc, #0x18] ; [0x8021a8c] = 0x200031fa 
08021a74: 4354       strb      r3, [r0, r1]
08021a76: 481c       adds      r0, r1, #1
08021a78: c1b2       uxtb      r1, r0
08021a7a: 1429       cmp       r1, #0x14
08021a7c: f6db       blt       #0x8021a6c
08021a7e: 0220       movs      r0, #2
08021a80: dce7       b         #0x8021a3c
08021a82: 0020       movs      r0, #0
08021a84: dae7       b         #0x8021a3c
08021a86: 0000       movs      r0, r0
08021a88: 7070       strb      r0, [r6, #1]
08021a8a: 0208       lsrs      r2, r0, #0x20
08021a8c: fa31       adds      r1, #0xfa
08021a8e: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08021a90, span 0x78
08021a90: 10b5       push      {r4, lr}
08021a92: 0120       movs      r0, #1
08021a94: fff74eff   bl        #0x8021934
08021a98: 98b1       cbz       r0, #0x8021ac2
08021a9a: 0020       movs      r0, #0
08021a9c: 00f034f8   bl        #0x8021b08
08021aa0: 0020       movs      r0, #0
08021aa2: fff747ff   bl        #0x8021934
08021aa6: 50b1       cbz       r0, #0x8021abe
08021aa8: 0120       movs      r0, #1
08021aaa: 00f02df8   bl        #0x8021b08
08021aae: 0120       movs      r0, #1
08021ab0: fff740ff   bl        #0x8021934
08021ab4: 08b1       cbz       r0, #0x8021aba
08021ab6: 0320       movs      r0, #3
08021ab8: 10bd       pop       {r4, pc}
08021aba: 0120       movs      r0, #1
08021abc: fce7       b         #0x8021ab8
08021abe: 0020       movs      r0, #0
08021ac0: fae7       b         #0x8021ab8
08021ac2: 0120       movs      r0, #1
08021ac4: 00f020f8   bl        #0x8021b08
08021ac8: 0120       movs      r0, #1
08021aca: fff733ff   bl        #0x8021934
08021ace: 50b1       cbz       r0, #0x8021ae6
08021ad0: 0020       movs      r0, #0
08021ad2: 00f019f8   bl        #0x8021b08
08021ad6: 0020       movs      r0, #0
08021ad8: fff72cff   bl        #0x8021934
08021adc: 08b1       cbz       r0, #0x8021ae2
08021ade: 0320       movs      r0, #3
08021ae0: eae7       b         #0x8021ab8
08021ae2: 0220       movs      r0, #2
08021ae4: e8e7       b         #0x8021ab8
08021ae6: 0020       movs      r0, #0
08021ae8: fff724ff   bl        #0x8021934
08021aec: 08b1       cbz       r0, #0x8021af2
08021aee: 0020       movs      r0, #0
08021af0: e2e7       b         #0x8021ab8
08021af2: 0020       movs      r0, #0
08021af4: 00f008f8   bl        #0x8021b08
08021af8: 0020       movs      r0, #0
08021afa: fff71bff   bl        #0x8021934
08021afe: 08b1       cbz       r0, #0x8021b04
08021b00: 0120       movs      r0, #1
08021b02: d9e7       b         #0x8021ab8
08021b04: 0020       movs      r0, #0
08021b06: d7e7       b         #0x8021ab8

# Original v2.41 bytes, entry 0x08021b08, span 0xb4
08021b08: 70b5       push      {r4, r5, r6, lr}
08021b0a: 0546       mov       r5, r0
08021b0c: e9f7a4fd   bl        #0x800b658
08021b10: 3420       movs      r0, #0x34
08021b12: e9f733fd   bl        #0x800b57c
08021b16: 2649       ldr       r1, [pc, #0x98] ; [0x8021bb0] = 0x8027070 
08021b18: 51f82500   ldr.w     r0, [r1, r5, lsl #2]
08021b1c: e9f734fd   bl        #0x800b588
08021b20: 2449       ldr       r1, [pc, #0x90] ; [0x8021bb4] = 0x200001dc 
08021b22: 0870       strb      r0, [r1]
08021b24: 244e       ldr       r6, [pc, #0x90] ; [0x8021bb8] = 0x20003198 
08021b26: 0021       movs      r1, #0
08021b28: 3246       mov       r2, r6
08021b2a: c2f80811   str.w     r1, [r2, #0x108]
08021b2e: c2f80c11   str.w     r1, [r2, #0x10c]
08021b32: 0024       movs      r4, #0
08021b34: 1be0       b         #0x8021b6e
08021b36: 2048       ldr       r0, [pc, #0x80] ; [0x8021bb8] = 0x20003198 
08021b38: d0f80831   ldr.w     r3, [r0, #0x108]
08021b3c: d0f80c01   ldr.w     r0, [r0, #0x10c]
08021b40: 56f82410   ldr.w     r1, [r6, r4, lsl #2]
08021b44: 5918       adds      r1, r3, r1
08021b46: 40f10000   adc       r0, r0, #0
08021b4a: 1b4a       ldr       r2, [pc, #0x6c] ; [0x8021bb8] = 0x20003198 
08021b4c: c2f80811   str.w     r1, [r2, #0x108]
08021b50: c2f80c01   str.w     r0, [r2, #0x10c]
08021b54: 164a       ldr       r2, [pc, #0x58] ; [0x8021bb0] = 0x8027070 
08021b56: 52f82520   ldr.w     r2, [r2, r5, lsl #2]
08021b5a: 02eb8400   add.w     r0, r2, r4, lsl #2
08021b5e: 56f82410   ldr.w     r1, [r6, r4, lsl #2]
08021b62: e9f755fd   bl        #0x800b610
08021b66: 1349       ldr       r1, [pc, #0x4c] ; [0x8021bb4] = 0x200001dc 
08021b68: 0870       strb      r0, [r1]
08021b6a: 601c       adds      r0, r4, #1
08021b6c: c4b2       uxtb      r4, r0
08021b6e: 422c       cmp       r4, #0x42
08021b70: e1d3       blo       #0x8021b36
08021b72: 0f4a       ldr       r2, [pc, #0x3c] ; [0x8021bb0] = 0x8027070 
08021b74: 52f82520   ldr.w     r2, [r2, r5, lsl #2]
08021b78: 02eb8400   add.w     r0, r2, r4, lsl #2
08021b7c: 56f82410   ldr.w     r1, [r6, r4, lsl #2]
08021b80: e9f746fd   bl        #0x800b610
08021b84: 0b49       ldr       r1, [pc, #0x2c] ; [0x8021bb4] = 0x200001dc 
08021b86: 0870       strb      r0, [r1]
08021b88: 601c       adds      r0, r4, #1
08021b8a: c4b2       uxtb      r4, r0
08021b8c: 084a       ldr       r2, [pc, #0x20] ; [0x8021bb0] = 0x8027070 
08021b8e: 52f82520   ldr.w     r2, [r2, r5, lsl #2]
08021b92: 02eb8400   add.w     r0, r2, r4, lsl #2
08021b96: 56f82410   ldr.w     r1, [r6, r4, lsl #2]
08021b9a: e9f739fd   bl        #0x800b610
08021b9e: 0549       ldr       r1, [pc, #0x14] ; [0x8021bb4] = 0x200001dc 
08021ba0: 0870       strb      r0, [r1]
08021ba2: 3420       movs      r0, #0x34
08021ba4: e9f7eafc   bl        #0x800b57c
08021ba8: e9f70efd   bl        #0x800b5c8
08021bac: 0020       movs      r0, #0
08021bae: 70bd       pop       {r4, r5, r6, pc}
08021bb0: 7070       strb      r0, [r6, #1]
08021bb2: 0208       lsrs      r2, r0, #0x20
08021bb4: dc01       lsls      r4, r3, #7
08021bb6: 0020       movs      r0, #0
08021bb8: 9831       adds      r1, #0x98
08021bba: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08022cc0, span 0x94
08022cc0: 70b5       push      {r4, r5, r6, lr}
08022cc2: 0446       mov       r4, r0
08022cc4: 0025       movs      r5, #0
08022cc6: 1f48       ldr       r0, [pc, #0x7c] ; [0x8022d44] = 0x200001de 
08022cc8: 0088       ldrh      r0, [r0]
08022cca: 40f2fe31   movw      r1, #0x3fe
08022cce: 8842       cmp       r0, r1
08022cd0: 1edd       ble       #0x8022d10
08022cd2: e8f7c1fc   bl        #0x800b658
08022cd6: 1c48       ldr       r0, [pc, #0x70] ; [0x8022d48] = 0x803a000 
08022cd8: e8f756fc   bl        #0x800b588
08022cdc: 0646       mov       r6, r0
08022cde: e8f773fc   bl        #0x800b5c8
08022ce2: 04eb8400   add.w     r0, r4, r4, lsl #2
08022ce6: 1949       ldr       r1, [pc, #0x64] ; [0x8022d4c] = 0x200001e0 
08022ce8: 0968       ldr       r1, [r1]
08022cea: 01eb4000   add.w     r0, r1, r0, lsl #1
08022cee: 1749       ldr       r1, [pc, #0x5c] ; [0x8022d4c] = 0x200001e0 
08022cf0: 0860       str       r0, [r1]
08022cf2: 0846       mov       r0, r1
08022cf4: 0068       ldr       r0, [r0]
08022cf6: 000c       lsrs      r0, r0, #0x10
08022cf8: 1549       ldr       r1, [pc, #0x54] ; [0x8022d50] = 0x20003198 
08022cfa: a1f86000   strh.w    r0, [r1, #0x60]
08022cfe: 1348       ldr       r0, [pc, #0x4c] ; [0x8022d4c] = 0x200001e0 
08022d00: 0088       ldrh      r0, [r0]
08022d02: a1f85e00   strh.w    r0, [r1, #0x5e]
08022d06: 0125       movs      r5, #1
08022d08: 0020       movs      r0, #0
08022d0a: 0e49       ldr       r1, [pc, #0x38] ; [0x8022d44] = 0x200001de 
08022d0c: 0880       strh      r0, [r1]
08022d0e: 16e0       b         #0x8022d3e
08022d10: 0e48       ldr       r0, [pc, #0x38] ; [0x8022d4c] = 0x200001e0 
08022d12: 0068       ldr       r0, [r0]
08022d14: 2044       add       r0, r4
08022d16: 0d49       ldr       r1, [pc, #0x34] ; [0x8022d4c] = 0x200001e0 
08022d18: 0860       str       r0, [r1]
08022d1a: e8f79dfc   bl        #0x800b658
08022d1e: 0949       ldr       r1, [pc, #0x24] ; [0x8022d44] = 0x200001de 
08022d20: 0988       ldrh      r1, [r1]
08022d22: 094a       ldr       r2, [pc, #0x24] ; [0x8022d48] = 0x803a000 
08022d24: 02eb4100   add.w     r0, r2, r1, lsl #1
08022d28: 2146       mov       r1, r4
08022d2a: e8f755fc   bl        #0x800b5d8
08022d2e: 0646       mov       r6, r0
08022d30: e8f74afc   bl        #0x800b5c8
08022d34: 0348       ldr       r0, [pc, #0xc] ; [0x8022d44] = 0x200001de 
08022d36: 0088       ldrh      r0, [r0]
08022d38: 401c       adds      r0, r0, #1
08022d3a: 0249       ldr       r1, [pc, #8] ; [0x8022d44] = 0x200001de 
08022d3c: 0880       strh      r0, [r1]
08022d3e: 2846       mov       r0, r5
08022d40: 70bd       pop       {r4, r5, r6, pc}
08022d42: 0000       movs      r0, r0
08022d44: de01       lsls      r6, r3, #7
08022d46: 0020       movs      r0, #0
08022d48: 00a0       adr       r0, #0
08022d4a: 0308       lsrs      r3, r0, #0x20
08022d4c: e001       lsls      r0, r4, #7
08022d4e: 0020       movs      r0, #0
08022d50: 9831       adds      r1, #0x98
08022d52: 0020       movs      r0, #0

# Original v2.41 bytes, entry 0x08023444, span 0xec
08023444: f8b5       push      {r3, r4, r5, r6, r7, lr}
08023446: 0546       mov       r5, r0
08023448: 0420       movs      r0, #4
0802344a: 0090       str       r0, [sp]
0802344c: 0026       movs      r6, #0
0802344e: 3348       ldr       r0, [pc, #0xcc] ; [0x802351c] = 0x8001340 
08023450: 0088       ldrh      r0, [r0]
08023452: 4cf2ef01   movw      r1, #0xc0ef
08023456: 8842       cmp       r0, r1
08023458: 01d0       beq       #0x802345e
0802345a: 0120       movs      r0, #1
0802345c: f8bd       pop       {r3, r4, r5, r6, r7, pc}
0802345e: 2f48       ldr       r0, [pc, #0xbc] ; [0x802351c] = 0x8001340 
08023460: 001d       adds      r0, r0, #4
08023462: 0088       ldrh      r0, [r0]
08023464: 43f61071   movw      r1, #0x3f10
08023468: 8842       cmp       r0, r1
0802346a: 01d1       bne       #0x8023470
0802346c: 0120       movs      r0, #1
0802346e: f5e7       b         #0x802345c
08023470: 2b48       ldr       r0, [pc, #0xac] ; [0x8023520] = 0x200030bc TotalVoltage
08023472: 806b       ldr       r0, [r0, #0x38]
08023474: b0f5967f   cmp.w     r0, #0x12c
08023478: 01d2       bhs       #0x802347e
0802347a: 0020       movs      r0, #0
0802347c: eee7       b         #0x802345c
0802347e: 2848       ldr       r0, [pc, #0xa0] ; [0x8023520] = 0x200030bc TotalVoltage
08023480: 90f8cc00   ldrb.w    r0, [r0, #0xcc]
08023484: 0528       cmp       r0, #5
08023486: 09d1       bne       #0x802349c
08023488: 2648       ldr       r0, [pc, #0x98] ; [0x8023524] = 0x200032a8 motionstep
0802348a: 0078       ldrb      r0, [r0]
0802348c: 0828       cmp       r0, #8
0802348e: 03d0       beq       #0x8023498
08023490: 2448       ldr       r0, [pc, #0x90] ; [0x8023524] = 0x200032a8 motionstep
08023492: 0078       ldrb      r0, [r0]
08023494: 0928       cmp       r0, #9
08023496: 01d1       bne       #0x802349c
08023498: 0020       movs      r0, #0
0802349a: dfe7       b         #0x802345c
0802349c: 1f48       ldr       r0, [pc, #0x7c] ; [0x802351c] = 0x8001340 
0802349e: 001d       adds      r0, r0, #4
080234a0: 0088       ldrh      r0, [r0]
080234a2: 4ff6ff71   movw      r1, #0xffff
080234a6: 8842       cmp       r0, r1
080234a8: 35d1       bne       #0x8023516
080234aa: 1c48       ldr       r0, [pc, #0x70] ; [0x802351c] = 0x8001340 
080234ac: 801c       adds      r0, r0, #2
080234ae: 0088       ldrh      r0, [r0]
080234b0: 8842       cmp       r0, r1
080234b2: 30d1       bne       #0x8023516
080234b4: 1c48       ldr       r0, [pc, #0x70] ; [0x8023528] = 0x200002ec 
080234b6: 0088       ldrh      r0, [r0]
080234b8: 6843       muls      r0, r5, r0
080234ba: 1949       ldr       r1, [pc, #0x64] ; [0x8023520] = 0x200030bc TotalVoltage
080234bc: 0968       ldr       r1, [r1]
080234be: 90fbf1f4   sdiv      r4, r0, r1
080234c2: 40f2f940   movw      r0, #0x4f9
080234c6: 8442       cmp       r4, r0
080234c8: 06dd       ble       #0x80234d8
080234ca: 40f21460   movw      r0, #0x614
080234ce: 8442       cmp       r4, r0
080234d0: 02da       bge       #0x80234d8
080234d2: 1549       ldr       r1, [pc, #0x54] ; [0x8023528] = 0x200002ec 
080234d4: 0c80       strh      r4, [r1]
080234d6: 0126       movs      r6, #1
080234d8: e6b1       cbz       r6, #0x8023514
080234da: e8f7bdf8   bl        #0x800b658
080234de: 3420       movs      r0, #0x34
080234e0: e8f74cf8   bl        #0x800b57c
080234e4: 1048       ldr       r0, [pc, #0x40] ; [0x8023528] = 0x200002ec 
080234e6: 0188       ldrh      r1, [r0]
080234e8: 0c48       ldr       r0, [pc, #0x30] ; [0x802351c] = 0x8001340 
080234ea: 801c       adds      r0, r0, #2
080234ec: e8f774f8   bl        #0x800b5d8
080234f0: 0090       str       r0, [sp]
080234f2: 43f61071   movw      r1, #0x3f10
080234f6: 0948       ldr       r0, [pc, #0x24] ; [0x802351c] = 0x8001340 
080234f8: 001d       adds      r0, r0, #4
080234fa: e8f76df8   bl        #0x800b5d8
080234fe: 0090       str       r0, [sp]
08023500: 3420       movs      r0, #0x34
08023502: e8f73bf8   bl        #0x800b57c
08023506: e8f75ff8   bl        #0x800b5c8
0802350a: 0020       movs      r0, #0
0802350c: 0749       ldr       r1, [pc, #0x1c] ; [0x802352c] = 0x2000032d 
0802350e: 0870       strb      r0, [r1]
08023510: 0120       movs      r0, #1
08023512: a3e7       b         #0x802345c
08023514: 00bf       nop       
08023516: 3046       mov       r0, r6
08023518: a0e7       b         #0x802345c
0802351a: 0000       movs      r0, r0
0802351c: 4013       asrs      r0, r0, #0xd
0802351e: 0008       lsrs      r0, r0, #0x20
08023520: bc30       adds      r0, #0xbc
08023522: 0020       movs      r0, #0
08023524: a832       adds      r2, #0xa8
08023526: 0020       movs      r0, #0
08023528: ec02       lsls      r4, r5, #0xb
0802352a: 0020       movs      r0, #0
0802352c: 2d03       lsls      r5, r5, #0xc
0802352e: 0020       movs      r0, #0
