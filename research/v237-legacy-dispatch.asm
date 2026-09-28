08011e5c: 13b5       push      {r0, r1, r4, lr}
08011e5e: 8ab0       sub       sp, #0x28
08011e60: 0b98       ldr       r0, [sp, #0x2c]
08011e62: 1428       cmp       r0, #0x14
08011e64: 7ed1       bne       #0x8011f64
08011e66: 0a98       ldr       r0, [sp, #0x28]
08011e68: 0078       ldrb      r0, [r0]
08011e6a: aa28       cmp       r0, #0xaa
08011e6c: fad1       bne       #0x8011e64
08011e6e: 0a98       ldr       r0, [sp, #0x28]
08011e70: 4078       ldrb      r0, [r0, #1]
08011e72: 5528       cmp       r0, #0x55
08011e74: f6d1       bne       #0x8011e64
08011e76: fe48       ldr       r0, [pc, #0x3f8] ; [0x8012270] = 0x20000981 
08011e78: 0078       ldrb      r0, [r0]
08011e7a: 0128       cmp       r0, #1
08011e7c: 73d1       bne       #0x8011f66
08011e7e: 0a98       ldr       r0, [sp, #0x28]
08011e80: 007c       ldrb      r0, [r0, #0x10]
08011e82: 9b28       cmp       r0, #0x9b
08011e84: 13d1       bne       #0x8011eae
08011e86: 0120       movs      r0, #1
08011e88: fa49       ldr       r1, [pc, #0x3e8] ; [0x8012274] = 0x2000094d 
08011e8a: 0870       strb      r0, [r1]
08011e8c: 11f026fb   bl        #0x80234dc
08011e90: 10f0c8fe   bl        #0x8022c24
08011e94: 0020       movs      r0, #0
08011e96: 0090       str       r0, [sp]
08011e98: 0190       str       r0, [sp, #4]
08011e9a: 0290       str       r0, [sp, #8]
08011e9c: 0346       mov       r3, r0
08011e9e: 0246       mov       r2, r0
08011ea0: 0390       str       r0, [sp, #0xc]
08011ea2: f348       ldr       r0, [pc, #0x3cc] ; [0x8012270] = 0x20000981 
08011ea4: 0178       ldrb      r1, [r0]
08011ea6: 4620       movs      r0, #0x46
08011ea8: fdf708fb   bl        #0x800f4bc
08011eac: 8de0       b         #0x8011fca
08011eae: 0a98       ldr       r0, [sp, #0x28]
08011eb0: 007c       ldrb      r0, [r0, #0x10]
08011eb2: 4428       cmp       r0, #0x44
08011eb4: 76d1       bne       #0x8011fa4
08011eb6: 0120       movs      r0, #1
08011eb8: 0990       str       r0, [sp, #0x24]
08011eba: 11f00ffb   bl        #0x80234dc
08011ebe: 0020       movs      r0, #0
08011ec0: 0890       str       r0, [sp, #0x20]
08011ec2: 0ee0       b         #0x8011ee2
08011ec4: ec48       ldr       r0, [pc, #0x3b0] ; [0x8012278] = 0x2000322a 
08011ec6: 0899       ldr       r1, [sp, #0x20]
08011ec8: 425c       ldrb      r2, [r0, r1]
08011eca: 0898       ldr       r0, [sp, #0x20]
08011ecc: 801c       adds      r0, r0, #2
08011ece: 0a99       ldr       r1, [sp, #0x28]
08011ed0: 085c       ldrb      r0, [r1, r0]
08011ed2: 8242       cmp       r2, r0
08011ed4: 02d0       beq       #0x8011edc
08011ed6: 0020       movs      r0, #0
08011ed8: 0990       str       r0, [sp, #0x24]
08011eda: 05e0       b         #0x8011ee8
08011edc: 0898       ldr       r0, [sp, #0x20]
08011ede: 401c       adds      r0, r0, #1
08011ee0: 0890       str       r0, [sp, #0x20]
08011ee2: 0898       ldr       r0, [sp, #0x20]
08011ee4: 0428       cmp       r0, #4
08011ee6: eddb       blt       #0x8011ec4
08011ee8: 00bf       nop       
08011eea: 0998       ldr       r0, [sp, #0x24]
08011eec: 78bb       cbnz      r0, #0x8011f4e
08011eee: 0120       movs      r0, #1
08011ef0: 0990       str       r0, [sp, #0x24]
08011ef2: 0020       movs      r0, #0
08011ef4: 0890       str       r0, [sp, #0x20]
08011ef6: 0fe0       b         #0x8011f18
08011ef8: df48       ldr       r0, [pc, #0x37c] ; [0x8012278] = 0x2000322a 
08011efa: 3038       subs      r0, #0x30
08011efc: 0899       ldr       r1, [sp, #0x20]
08011efe: 425c       ldrb      r2, [r0, r1]
08011f00: 0898       ldr       r0, [sp, #0x20]
08011f02: 801c       adds      r0, r0, #2
08011f04: 0a99       ldr       r1, [sp, #0x28]
08011f06: 085c       ldrb      r0, [r1, r0]
08011f08: 8242       cmp       r2, r0
08011f0a: 02d0       beq       #0x8011f12
08011f0c: 0020       movs      r0, #0
08011f0e: 0990       str       r0, [sp, #0x24]
08011f10: 05e0       b         #0x8011f1e
08011f12: 0898       ldr       r0, [sp, #0x20]
08011f14: 401c       adds      r0, r0, #1
08011f16: 0890       str       r0, [sp, #0x20]
08011f18: 0898       ldr       r0, [sp, #0x20]
08011f1a: 0e28       cmp       r0, #0xe
08011f1c: ecdb       blt       #0x8011ef8
08011f1e: 00bf       nop       
08011f20: 0e20       movs      r0, #0xe
08011f22: 0890       str       r0, [sp, #0x20]
08011f24: 0fe0       b         #0x8011f46
08011f26: d448       ldr       r0, [pc, #0x350] ; [0x8012278] = 0x2000322a 
08011f28: 3038       subs      r0, #0x30
08011f2a: 0899       ldr       r1, [sp, #0x20]
08011f2c: 425c       ldrb      r2, [r0, r1]
08011f2e: 0898       ldr       r0, [sp, #0x20]
08011f30: c01c       adds      r0, r0, #3
08011f32: 0a99       ldr       r1, [sp, #0x28]
08011f34: 085c       ldrb      r0, [r1, r0]
08011f36: 8242       cmp       r2, r0
08011f38: 02d0       beq       #0x8011f40
08011f3a: 0020       movs      r0, #0
08011f3c: 0990       str       r0, [sp, #0x24]
08011f3e: 05e0       b         #0x8011f4c
08011f40: 0898       ldr       r0, [sp, #0x20]
08011f42: 401c       adds      r0, r0, #1
08011f44: 0890       str       r0, [sp, #0x20]
08011f46: 0898       ldr       r0, [sp, #0x20]
08011f48: 1128       cmp       r0, #0x11
08011f4a: ecdb       blt       #0x8011f26
08011f4c: 00bf       nop       
08011f4e: 0998       ldr       r0, [sp, #0x24]
08011f50: a0b9       cbnz      r0, #0x8011f7c
08011f52: 0a98       ldr       r0, [sp, #0x28]
08011f54: 8078       ldrb      r0, [r0, #2]
08011f56: 3628       cmp       r0, #0x36
08011f58: 10d1       bne       #0x8011f7c
08011f5a: 0a98       ldr       r0, [sp, #0x28]
08011f5c: c078       ldrb      r0, [r0, #3]
08011f5e: 3328       cmp       r0, #0x33
08011f60: 0cd1       bne       #0x8011f7c
08011f62: 01e0       b         #0x8011f68
08011f64: 33e0       b         #0x8011fce
08011f66: 5fe0       b         #0x8012028
08011f68: 0a98       ldr       r0, [sp, #0x28]
08011f6a: 0079       ldrb      r0, [r0, #4]
08011f6c: 3928       cmp       r0, #0x39
08011f6e: 05d1       bne       #0x8011f7c
08011f70: 0a98       ldr       r0, [sp, #0x28]
08011f72: 4079       ldrb      r0, [r0, #5]
08011f74: 3028       cmp       r0, #0x30
08011f76: 01d1       bne       #0x8011f7c
08011f78: 0120       movs      r0, #1
08011f7a: 0990       str       r0, [sp, #0x24]
08011f7c: 0998       ldr       r0, [sp, #0x24]
08011f7e: 0128       cmp       r0, #1
08011f80: 02d1       bne       #0x8011f88
08011f82: 0020       movs      r0, #0
08011f84: ba49       ldr       r1, [pc, #0x2e8] ; [0x8012270] = 0x20000981 
08011f86: 0870       strb      r0, [r1]
08011f88: 0020       movs      r0, #0
08011f8a: 0090       str       r0, [sp]
08011f8c: 0190       str       r0, [sp, #4]
08011f8e: 0290       str       r0, [sp, #8]
08011f90: 0346       mov       r3, r0
08011f92: 0246       mov       r2, r0
08011f94: 0390       str       r0, [sp, #0xc]
08011f96: b648       ldr       r0, [pc, #0x2d8] ; [0x8012270] = 0x20000981 
08011f98: 0178       ldrb      r1, [r0]
08011f9a: 4620       movs      r0, #0x46
08011f9c: fdf78efa   bl        #0x800f4bc
08011fa0: 13e0       b         #0x8011fca
08011fa4: 0a98       ldr       r0, [sp, #0x28]
08011fa6: 007c       ldrb      r0, [r0, #0x10]
08011fa8: 4528       cmp       r0, #0x45
08011faa: 0ed1       bne       #0x8011fca
08011fac: 0120       movs      r0, #1
08011fae: 11f095fa   bl        #0x80234dc
08011fb2: 0020       movs      r0, #0
08011fb4: 0090       str       r0, [sp]
08011fb6: 0190       str       r0, [sp, #4]
08011fb8: 0290       str       r0, [sp, #8]
08011fba: 0346       mov       r3, r0
08011fbc: 0246       mov       r2, r0
08011fbe: 0390       str       r0, [sp, #0xc]
08011fc0: ab48       ldr       r0, [pc, #0x2ac] ; [0x8012270] = 0x20000981 
08011fc2: 0178       ldrb      r1, [r0]
08011fc4: 4620       movs      r0, #0x46
08011fc6: fdf779fa   bl        #0x800f4bc
08011fca: 0cb0       add       sp, #0x30
08011fcc: 10bd       pop       {r4, pc}
08011fce: 0020       movs      r0, #0
08011fd0: 0990       str       r0, [sp, #0x24]
08011fd2: 0b98       ldr       r0, [sp, #0x2c]
08011fd4: 1428       cmp       r0, #0x14
08011fd6: 0ddd       ble       #0x8011ff4
08011fd8: 0a98       ldr       r0, [sp, #0x28]
08011fda: 007c       ldrb      r0, [r0, #0x10]
08011fdc: 7a28       cmp       r0, #0x7a
08011fde: 03d0       beq       #0x8011fe8
08011fe0: 0a98       ldr       r0, [sp, #0x28]
08011fe2: 007c       ldrb      r0, [r0, #0x10]
08011fe4: 1d28       cmp       r0, #0x1d
08011fe6: 05d1       bne       #0x8011ff4
08011fe8: 0a98       ldr       r0, [sp, #0x28]
08011fea: 407c       ldrb      r0, [r0, #0x11]
08011fec: 3128       cmp       r0, #0x31
08011fee: 01d1       bne       #0x8011ff4
08011ff0: 0120       movs      r0, #1
08011ff2: 0990       str       r0, [sp, #0x24]
08011ff4: 0998       ldr       r0, [sp, #0x24]
08011ff6: b0b9       cbnz      r0, #0x8012026
08011ff8: 0020       movs      r0, #0
08011ffa: 0890       str       r0, [sp, #0x20]
08011ffc: 0de0       b         #0x801201a
08011ffe: 0898       ldr       r0, [sp, #0x20]
08012000: 1428       cmp       r0, #0x14
08012002: 00db       blt       #0x8012006
08012004: 0de0       b         #0x8012022
08012006: 0899       ldr       r1, [sp, #0x20]
08012008: 0a98       ldr       r0, [sp, #0x28]
0801200a: 415c       ldrb      r1, [r0, r1]
0801200c: 9b4a       ldr       r2, [pc, #0x26c] ; [0x801227c] = 0x2000427e 
0801200e: 0898       ldr       r0, [sp, #0x20]
08012010: 1154       strb      r1, [r2, r0]
08012012: 0898       ldr       r0, [sp, #0x20]
08012014: 401c       adds      r0, r0, #1
08012016: c0b2       uxtb      r0, r0
08012018: 0890       str       r0, [sp, #0x20]
0801201a: 0b99       ldr       r1, [sp, #0x2c]
0801201c: 0898       ldr       r0, [sp, #0x20]
0801201e: 8842       cmp       r0, r1
08012020: eddb       blt       #0x8011ffe
08012022: 00bf       nop       
08012024: d1e7       b         #0x8011fca
08012026: 00bf       nop       
08012028: 0a98       ldr       r0, [sp, #0x28]
0801202a: 007c       ldrb      r0, [r0, #0x10]
0801202c: 7a28       cmp       r0, #0x7a
0801202e: 01f01985   beq.w     #0x8013a64
08012032: 41dc       bgt       #0x80120b8
08012034: a0f13f00   sub.w     r0, r0, #0x3f
08012038: 3b28       cmp       r0, #0x3b
0801203a: 81f07385   bhs.w     #0x8013b24
0801203e: dfe810f0   tbh       [pc, r0, lsl #1]
080120b8: 9328       cmp       r0, #0x93
080120ba: 78d0       beq       #0x80121ae
080120bc: 1cdc       bgt       #0x80120f8
080120be: a0f17c00   sub.w     r0, r0, #0x7c
080120c2: 1728       cmp       r0, #0x17
080120c4: b9d2       bhs       #0x801203a
080120c6: dfe810f0   tbh       [pc, r0, lsl #1]
080120f8: 9b28       cmp       r0, #0x9b
080120fa: 26d0       beq       #0x801214a
080120fc: 0cdc       bgt       #0x8012118
080120fe: a0f19400   sub.w     r0, r0, #0x94
08012102: 0728       cmp       r0, #7
08012104: 99d2       bhs       #0x801203a
08012106: dfe810f0   tbh       [pc, r0, lsl #1]
08012118: e428       cmp       r0, #0xe4
0801211a: 01f0ef84   beq.w     #0x8013afc
0801211e: 0adc       bgt       #0x8012136
08012120: e128       cmp       r0, #0xe1
08012122: 01f0e584   beq.w     #0x8013af0
08012126: e228       cmp       r0, #0xe2
08012128: 01f0e384   beq.w     #0x8013af2
0801212c: e328       cmp       r0, #0xe3
0801212e: 41f0f984   bne.w     #0x8013b24
08012132: 01f0e2bc   b.w       #0x8013afa
08012136: e528       cmp       r0, #0xe5
08012138: 01f0e484   beq.w     #0x8013b04
0801213c: e628       cmp       r0, #0xe6
0801213e: 01f0e284   beq.w     #0x8013b06
08012142: f928       cmp       r0, #0xf9
08012144: f3d1       bne       #0x801212e
08012146: 01f0e9bc   b.w       #0x8013b1c
0801214a: 0120       movs      r0, #1
0801214c: 11f0c6f9   bl        #0x80234dc
08012150: 10f068fd   bl        #0x8022c24
08012154: 0120       movs      r0, #1
08012156: 4749       ldr       r1, [pc, #0x11c] ; [0x8012274] = 0x2000094d 
08012158: 0870       strb      r0, [r1]
0801215a: 01f0e4bc   b.w       #0x8013b26
0801215e: 4848       ldr       r0, [pc, #0x120] ; [0x8012280] = 0x200030bc TotalVoltage
08012160: 8068       ldr       r0, [r0, #8]
08012162: 0990       str       r0, [sp, #0x24]
08012164: 0028       cmp       r0, #0
08012166: 01db       blt       #0x801216c
08012168: 0998       ldr       r0, [sp, #0x24]
0801216a: 01e0       b         #0x8012170
0801216c: 0998       ldr       r0, [sp, #0x24]
0801216e: 4042       rsbs      r0, r0, #0
08012170: 40f6b831   movw      r1, #0xbb8
08012174: 8842       cmp       r0, r1
08012176: 03dd       ble       #0x8012180
08012178: 0220       movs      r0, #2
0801217a: 11f0aff9   bl        #0x80234dc
0801217e: ece7       b         #0x801215a
08012180: 0120       movs      r0, #1
08012182: 11f0abf9   bl        #0x80234dc
08012186: 0a98       ldr       r0, [sp, #0x28]
08012188: 8078       ldrb      r0, [r0, #2]
0801218a: 88b9       cbnz      r0, #0x80121b0
0801218c: 4ff46040   mov.w     r0, #0xe000
08012190: 3949       ldr       r1, [pc, #0xe4] ; [0x8012278] = 0x2000322a 
08012192: 9239       subs      r1, #0x92
08012194: c883       strh      r0, [r1, #0x1e]
08012196: 0020       movs      r0, #0
08012198: 0090       str       r0, [sp]
0801219a: 0190       str       r0, [sp, #4]
0801219c: 0290       str       r0, [sp, #8]
0801219e: 0346       mov       r3, r0
080121a0: 0246       mov       r2, r0
080121a2: 0121       movs      r1, #1
080121a4: 0390       str       r0, [sp, #0xc]
080121a6: a220       movs      r0, #0xa2
080121a8: fdf788f9   bl        #0x800f4bc
080121ac: 29e0       b         #0x8012202
080121ae: e2e3       b         #0x8012976
080121b0: 0a98       ldr       r0, [sp, #0x28]
080121b2: 8078       ldrb      r0, [r0, #2]
080121b4: 0128       cmp       r0, #1
080121b6: 10d1       bne       #0x80121da
080121b8: 4ef20100   movw      r0, #0xe001
080121bc: 2e49       ldr       r1, [pc, #0xb8] ; [0x8012278] = 0x2000322a 
080121be: 9239       subs      r1, #0x92
080121c0: c883       strh      r0, [r1, #0x1e]
080121c2: 0020       movs      r0, #0
080121c4: 0090       str       r0, [sp]
080121c6: 0190       str       r0, [sp, #4]
080121c8: 0290       str       r0, [sp, #8]
080121ca: 0346       mov       r3, r0
080121cc: 0122       movs      r2, #1
080121ce: 1146       mov       r1, r2
080121d0: 0390       str       r0, [sp, #0xc]
080121d2: a220       movs      r0, #0xa2
080121d4: fdf772f9   bl        #0x800f4bc
080121d8: 13e0       b         #0x8012202
080121da: 0a98       ldr       r0, [sp, #0x28]
080121dc: 8078       ldrb      r0, [r0, #2]
080121de: 0228       cmp       r0, #2
080121e0: 0fd1       bne       #0x8012202
080121e2: 4ef20200   movw      r0, #0xe002
080121e6: 2449       ldr       r1, [pc, #0x90] ; [0x8012278] = 0x2000322a 
080121e8: 9239       subs      r1, #0x92
080121ea: c883       strh      r0, [r1, #0x1e]
080121ec: 0020       movs      r0, #0
080121ee: 0090       str       r0, [sp]
080121f0: 0190       str       r0, [sp, #4]
080121f2: 0290       str       r0, [sp, #8]
080121f4: 0346       mov       r3, r0
080121f6: 0222       movs      r2, #2
080121f8: 0121       movs      r1, #1
080121fa: 0390       str       r0, [sp, #0xc]
080121fc: a220       movs      r0, #0xa2
080121fe: fdf75df9   bl        #0x800f4bc
08012202: 1d48       ldr       r0, [pc, #0x74] ; [0x8012278] = 0x2000322a 
08012204: 9238       subs      r0, #0x92
08012206: c08b       ldrh      r0, [r0, #0x1e]
08012208: 1e49       ldr       r1, [pc, #0x78] ; [0x8012284] = 0x20003d74 
0801220a: 0880       strh      r0, [r1]
0801220c: 1c48       ldr       r0, [pc, #0x70] ; [0x8012280] = 0x200030bc TotalVoltage
0801220e: 90f8be00   ldrb.w    r0, [r0, #0xbe]
08012212: 18b9       cbnz      r0, #0x801221c
08012214: 0846       mov       r0, r1
08012216: 12f099f8   bl        #0x802434c
0801221a: 03e0       b         #0x8012224
0801221c: 1648       ldr       r0, [pc, #0x58] ; [0x8012278] = 0x2000322a 
0801221e: 7438       subs      r0, #0x74
08012220: 12f094f8   bl        #0x802434c
08012224: 0120       movs      r0, #1
08012226: 1649       ldr       r1, [pc, #0x58] ; [0x8012280] = 0x200030bc TotalVoltage
08012228: 81f8c700   strb.w    r0, [r1, #0xc7]
0801222c: 95e7       b         #0x801215a
0801222e: 0120       movs      r0, #1
08012230: 1049       ldr       r1, [pc, #0x40] ; [0x8012274] = 0x2000094d 
08012232: 0870       strb      r0, [r1]
08012234: 1048       ldr       r0, [pc, #0x40] ; [0x8012278] = 0x2000322a 
08012236: 9238       subs      r0, #0x92
08012238: b0f85c00   ldrh.w    r0, [r0, #0x5c]
0801223c: 0128       cmp       r0, #1
0801223e: 02d1       bne       #0x8012246
08012240: 11f04cf9   bl        #0x80234dc
08012244: 02e0       b         #0x801224c
08012246: 0320       movs      r0, #3
08012248: 0f49       ldr       r1, [pc, #0x3c] ; [0x8012288] = 0x200006ac 
0801224a: 0860       str       r0, [r1]
0801224c: 85e7       b         #0x801215a
0801224e: 0a98       ldr       r0, [sp, #0x28]
08012250: 8078       ldrb      r0, [r0, #2]
08012252: b428       cmp       r0, #0xb4
08012254: 4cd1       bne       #0x80122f0
08012256: 0a98       ldr       r0, [sp, #0x28]
08012258: c078       ldrb      r0, [r0, #3]
0801225a: ce28       cmp       r0, #0xce
0801225c: 48d1       bne       #0x80122f0
0801225e: 0a98       ldr       r0, [sp, #0x28]
08012260: c07b       ldrb      r0, [r0, #0xf]
08012262: e8bb       cbnz      r0, #0x80122e0
08012264: 0020       movs      r0, #0
08012266: 0990       str       r0, [sp, #0x24]
08012268: 0a98       ldr       r0, [sp, #0x28]
0801226a: 0179       ldrb      r1, [r0, #4]
0801226c: 4079       ldrb      r0, [r0, #5]
0801226e: 0de0       b         #0x801228c
0801228c: 41ea0020   orr.w     r0, r1, r0, lsl #8
08012290: 0890       str       r0, [sp, #0x20]
08012292: 0a98       ldr       r0, [sp, #0x28]
08012294: 8179       ldrb      r1, [r0, #6]
08012296: c079       ldrb      r0, [r0, #7]
08012298: 41ea0020   orr.w     r0, r1, r0, lsl #8
0801229c: 4ff6ff71   movw      r1, #0xffff
080122a0: 4840       eors      r0, r1
080122a2: 0790       str       r0, [sp, #0x1c]
080122a4: dde90710   ldrd      r1, r0, [sp, #0x1c]
080122a8: 4840       eors      r0, r1
080122aa: 00b1       cbz       r0, #0x80122ae
080122ac: 55e7       b         #0x801215a
080122ae: 0898       ldr       r0, [sp, #0x20]
080122b0: 10f0c2fd   bl        #0x8022e38
080122b4: 0990       str       r0, [sp, #0x24]
080122b6: fc48       ldr       r0, [pc, #0x3f0] ; [0x80126a8] = 0x200030bc TotalVoltage
080122b8: 0088       ldrh      r0, [r0]
080122ba: 80b2       uxth      r0, r0
080122bc: 0690       str       r0, [sp, #0x18]
080122be: 4ff6ff71   movw      r1, #0xffff
080122c2: 0698       ldr       r0, [sp, #0x18]
080122c4: 4840       eors      r0, r1
080122c6: 0590       str       r0, [sp, #0x14]
080122c8: 4ff46061   mov.w     r1, #0xe00
080122cc: 0022       movs      r2, #0
080122ce: 1e23       movs      r3, #0x1e
080122d0: 0998       ldr       r0, [sp, #0x24]
080122d2: cde90030   strd      r3, r0, [sp]
080122d6: cde90221   strd      r2, r1, [sp, #8]
080122da: 0598       ldr       r0, [sp, #0x14]
080122dc: 03b2       sxth      r3, r0
080122de: 00e0       b         #0x80122e2
080122e0: 2be0       b         #0x801233a
080122e2: 0698       ldr       r0, [sp, #0x18]
080122e4: 02b2       sxth      r2, r0
080122e6: f149       ldr       r1, [pc, #0x3c4] ; [0x80126ac] = 0xffffceb4 
080122e8: 8920       movs      r0, #0x89
080122ea: fdf7e7f8   bl        #0x800f4bc
080122ee: 24e0       b         #0x801233a
080122f0: 0120       movs      r0, #1
080122f2: 11f0f3f8   bl        #0x80234dc
080122f6: ec48       ldr       r0, [pc, #0x3b0] ; [0x80126a8] = 0x200030bc TotalVoltage
080122f8: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080122fc: 0128       cmp       r0, #1
080122fe: 1cd1       bne       #0x801233a
08012300: e948       ldr       r0, [pc, #0x3a4] ; [0x80126a8] = 0x200030bc TotalVoltage
08012302: 8068       ldr       r0, [r0, #8]
08012304: 0990       str       r0, [sp, #0x24]
08012306: 0028       cmp       r0, #0
08012308: 01db       blt       #0x801230e
0801230a: 0998       ldr       r0, [sp, #0x24]
0801230c: 01e0       b         #0x8012312
0801230e: 0998       ldr       r0, [sp, #0x24]
08012310: 4042       rsbs      r0, r0, #0
08012312: b0f57a7f   cmp.w     r0, #0x3e8
08012316: 10da       bge       #0x801233a
08012318: 10f004fe   bl        #0x8022f24
0801231c: 00bf       nop       
0801231e: e448       ldr       r0, [pc, #0x390] ; [0x80126b0] = 0xe000ed0c 
08012320: 0068       ldr       r0, [r0]
08012322: 00f4e060   and       r0, r0, #0x700
08012326: e349       ldr       r1, [pc, #0x38c] ; [0x80126b4] = 0x5fa0000 
08012328: 0843       orrs      r0, r1
0801232a: 001d       adds      r0, r0, #4
0801232c: e049       ldr       r1, [pc, #0x380] ; [0x80126b0] = 0xe000ed0c 
0801232e: 0860       str       r0, [r1]
08012330: bff34f8f   dsb       sy
08012334: 00bf       nop       
08012336: 00bf       nop       
08012338: fee7       b         #0x8012338
0801233a: 0ee7       b         #0x801215a
0801233c: 0a98       ldr       r0, [sp, #0x28]
0801233e: 8078       ldrb      r0, [r0, #2]
08012340: 90b9       cbnz      r0, #0x8012368
08012342: 0020       movs      r0, #0
08012344: 0090       str       r0, [sp]
08012346: 0190       str       r0, [sp, #4]
08012348: 0290       str       r0, [sp, #8]
0801234a: 0390       str       r0, [sp, #0xc]
0801234c: da48       ldr       r0, [pc, #0x368] ; [0x80126b8] = 0x20003198 
0801234e: 408a       ldrh      r0, [r0, #0x12]
08012350: 00b2       sxth      r0, r0
08012352: 0023       movs      r3, #0
08012354: 0246       mov       r2, r0
08012356: 1946       mov       r1, r3
08012358: 0990       str       r0, [sp, #0x24]
0801235a: 8a20       movs      r0, #0x8a
0801235c: fdf7aef8   bl        #0x800f4bc
08012360: 0120       movs      r0, #1
08012362: 11f0bbf8   bl        #0x80234dc
08012366: 40e2       b         #0x80127ea
08012368: 0a98       ldr       r0, [sp, #0x28]
0801236a: 8078       ldrb      r0, [r0, #2]
0801236c: 0128       cmp       r0, #1
0801236e: 32d1       bne       #0x80123d6
08012370: 0a98       ldr       r0, [sp, #0x28]
08012372: 0179       ldrb      r1, [r0, #4]
08012374: 4079       ldrb      r0, [r0, #5]
08012376: 01eb0020   add.w     r0, r1, r0, lsl #8
0801237a: 80b2       uxth      r0, r0
0801237c: 0990       str       r0, [sp, #0x24]
0801237e: ca48       ldr       r0, [pc, #0x328] ; [0x80126a8] = 0x200030bc TotalVoltage
08012380: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08012384: 18b9       cbnz      r0, #0x801238e
08012386: 0220       movs      r0, #2
08012388: 11f0a8f8   bl        #0x80234dc
0801238c: e5e6       b         #0x801215a
0801238e: 0120       movs      r0, #1
08012390: 11f0a4f8   bl        #0x80234dc
08012394: c849       ldr       r1, [pc, #0x320] ; [0x80126b8] = 0x20003198 
08012396: 0998       ldr       r0, [sp, #0x24]
08012398: 4882       strh      r0, [r1, #0x12]
0801239a: 0846       mov       r0, r1
0801239c: 408a       ldrh      r0, [r0, #0x12]
0801239e: 00b2       sxth      r0, r0
080123a0: 0003       lsls      r0, r0, #0xc
080123a2: 0a21       movs      r1, #0xa
080123a4: 90fbf1f0   sdiv      r0, r0, r1
080123a8: 0890       str       r0, [sp, #0x20]
080123aa: 10f0dbfd   bl        #0x8022f64
080123ae: 0020       movs      r0, #0
080123b0: 0090       str       r0, [sp]
080123b2: 0190       str       r0, [sp, #4]
080123b4: 0290       str       r0, [sp, #8]
080123b6: 0390       str       r0, [sp, #0xc]
080123b8: bf48       ldr       r0, [pc, #0x2fc] ; [0x80126b8] = 0x20003198 
080123ba: 408a       ldrh      r0, [r0, #0x12]
080123bc: 00b2       sxth      r0, r0
080123be: 0023       movs      r3, #0
080123c0: 0246       mov       r2, r0
080123c2: 0121       movs      r1, #1
080123c4: 0890       str       r0, [sp, #0x20]
080123c6: 8a20       movs      r0, #0x8a
080123c8: fdf778f8   bl        #0x800f4bc
080123cc: 0120       movs      r0, #1
080123ce: b649       ldr       r1, [pc, #0x2d8] ; [0x80126a8] = 0x200030bc TotalVoltage
080123d0: 81f8c700   strb.w    r0, [r1, #0xc7]
080123d4: 09e2       b         #0x80127ea
080123d6: 0a98       ldr       r0, [sp, #0x28]
080123d8: 8078       ldrb      r0, [r0, #2]
080123da: 0228       cmp       r0, #2
080123dc: 12d1       bne       #0x8012404
080123de: 0020       movs      r0, #0
080123e0: 0090       str       r0, [sp]
080123e2: 0190       str       r0, [sp, #4]
080123e4: 0290       str       r0, [sp, #8]
080123e6: 0390       str       r0, [sp, #0xc]
080123e8: b348       ldr       r0, [pc, #0x2cc] ; [0x80126b8] = 0x20003198 
080123ea: 808a       ldrh      r0, [r0, #0x14]
080123ec: 00b2       sxth      r0, r0
080123ee: 0023       movs      r3, #0
080123f0: 0246       mov       r2, r0
080123f2: 0221       movs      r1, #2
080123f4: 0990       str       r0, [sp, #0x24]
080123f6: 8a20       movs      r0, #0x8a
080123f8: fdf760f8   bl        #0x800f4bc
080123fc: 0120       movs      r0, #1
080123fe: 11f06df8   bl        #0x80234dc
08012402: f2e1       b         #0x80127ea
08012404: 0a98       ldr       r0, [sp, #0x28]
08012406: 8078       ldrb      r0, [r0, #2]
08012408: 0328       cmp       r0, #3
0801240a: 32d1       bne       #0x8012472
0801240c: 0a98       ldr       r0, [sp, #0x28]
0801240e: 0179       ldrb      r1, [r0, #4]
08012410: 4079       ldrb      r0, [r0, #5]
08012412: 01eb0020   add.w     r0, r1, r0, lsl #8
08012416: 80b2       uxth      r0, r0
08012418: 0990       str       r0, [sp, #0x24]
0801241a: a348       ldr       r0, [pc, #0x28c] ; [0x80126a8] = 0x200030bc TotalVoltage
0801241c: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08012420: 18b9       cbnz      r0, #0x801242a
08012422: 0220       movs      r0, #2
08012424: 11f05af8   bl        #0x80234dc
08012428: 97e6       b         #0x801215a
0801242a: 0120       movs      r0, #1
0801242c: 11f056f8   bl        #0x80234dc
08012430: a149       ldr       r1, [pc, #0x284] ; [0x80126b8] = 0x20003198 
08012432: 0998       ldr       r0, [sp, #0x24]
08012434: 8882       strh      r0, [r1, #0x14]
08012436: 0846       mov       r0, r1
08012438: 808a       ldrh      r0, [r0, #0x14]
0801243a: 00b2       sxth      r0, r0
0801243c: 0003       lsls      r0, r0, #0xc
0801243e: 0a21       movs      r1, #0xa
08012440: 90fbf1f0   sdiv      r0, r0, r1
08012444: 0890       str       r0, [sp, #0x20]
08012446: 10f0a1fd   bl        #0x8022f8c
0801244a: 0020       movs      r0, #0
0801244c: 0090       str       r0, [sp]
0801244e: 0190       str       r0, [sp, #4]
08012450: 0290       str       r0, [sp, #8]
08012452: 0390       str       r0, [sp, #0xc]
08012454: 9848       ldr       r0, [pc, #0x260] ; [0x80126b8] = 0x20003198 
08012456: 808a       ldrh      r0, [r0, #0x14]
08012458: 00b2       sxth      r0, r0
0801245a: 0023       movs      r3, #0
0801245c: 0246       mov       r2, r0
0801245e: 0321       movs      r1, #3
08012460: 0890       str       r0, [sp, #0x20]
08012462: 8a20       movs      r0, #0x8a
08012464: fdf72af8   bl        #0x800f4bc
08012468: 0120       movs      r0, #1
0801246a: 8f49       ldr       r1, [pc, #0x23c] ; [0x80126a8] = 0x200030bc TotalVoltage
0801246c: 81f8c700   strb.w    r0, [r1, #0xc7]
08012470: bbe1       b         #0x80127ea
08012472: 0a98       ldr       r0, [sp, #0x28]
08012474: 8078       ldrb      r0, [r0, #2]
08012476: 0428       cmp       r0, #4
08012478: 12d1       bne       #0x80124a0
0801247a: 0020       movs      r0, #0
0801247c: 0090       str       r0, [sp]
0801247e: 0190       str       r0, [sp, #4]
08012480: 0290       str       r0, [sp, #8]
08012482: 0390       str       r0, [sp, #0xc]
08012484: 8c48       ldr       r0, [pc, #0x230] ; [0x80126b8] = 0x20003198 
08012486: 90f8ae00   ldrb.w    r0, [r0, #0xae]
0801248a: 0023       movs      r3, #0
0801248c: 0246       mov       r2, r0
0801248e: 0421       movs      r1, #4
08012490: 0990       str       r0, [sp, #0x24]
08012492: 8a20       movs      r0, #0x8a
08012494: fdf712f8   bl        #0x800f4bc
08012498: 0120       movs      r0, #1
0801249a: 11f01ff8   bl        #0x80234dc
0801249e: a4e1       b         #0x80127ea
080124a0: 0a98       ldr       r0, [sp, #0x28]
080124a2: 8078       ldrb      r0, [r0, #2]
080124a4: 0528       cmp       r0, #5
080124a6: 2fd1       bne       #0x8012508
080124a8: 0a98       ldr       r0, [sp, #0x28]
080124aa: 0179       ldrb      r1, [r0, #4]
080124ac: 4079       ldrb      r0, [r0, #5]
080124ae: 01eb0020   add.w     r0, r1, r0, lsl #8
080124b2: 80b2       uxth      r0, r0
080124b4: 0990       str       r0, [sp, #0x24]
080124b6: 7c48       ldr       r0, [pc, #0x1f0] ; [0x80126a8] = 0x200030bc TotalVoltage
080124b8: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080124bc: 18b9       cbnz      r0, #0x80124c6
080124be: 0220       movs      r0, #2
080124c0: 11f00cf8   bl        #0x80234dc
080124c4: 49e6       b         #0x801215a
080124c6: 0120       movs      r0, #1
080124c8: 11f008f8   bl        #0x80234dc
080124cc: 7a49       ldr       r1, [pc, #0x1e8] ; [0x80126b8] = 0x20003198 
080124ce: 0998       ldr       r0, [sp, #0x24]
080124d0: 81f8ae00   strb.w    r0, [r1, #0xae]
080124d4: 0846       mov       r0, r1
080124d6: 90f8ae00   ldrb.w    r0, [r0, #0xae]
080124da: 0890       str       r0, [sp, #0x20]
080124dc: 10f034fd   bl        #0x8022f48
080124e0: 0020       movs      r0, #0
080124e2: 0090       str       r0, [sp]
080124e4: 0190       str       r0, [sp, #4]
080124e6: 0290       str       r0, [sp, #8]
080124e8: 0390       str       r0, [sp, #0xc]
080124ea: 7348       ldr       r0, [pc, #0x1cc] ; [0x80126b8] = 0x20003198 
080124ec: 90f8ae00   ldrb.w    r0, [r0, #0xae]
080124f0: 0023       movs      r3, #0
080124f2: 0246       mov       r2, r0
080124f4: 0521       movs      r1, #5
080124f6: 0890       str       r0, [sp, #0x20]
080124f8: 8a20       movs      r0, #0x8a
080124fa: fcf7dfff   bl        #0x800f4bc
080124fe: 0120       movs      r0, #1
08012500: 6949       ldr       r1, [pc, #0x1a4] ; [0x80126a8] = 0x200030bc TotalVoltage
08012502: 81f8c700   strb.w    r0, [r1, #0xc7]
08012506: 70e1       b         #0x80127ea
08012508: 0a98       ldr       r0, [sp, #0x28]
0801250a: 8078       ldrb      r0, [r0, #2]
0801250c: 0628       cmp       r0, #6
0801250e: 12d1       bne       #0x8012536
08012510: 0020       movs      r0, #0
08012512: 0090       str       r0, [sp]
08012514: 0190       str       r0, [sp, #4]
08012516: 0290       str       r0, [sp, #8]
08012518: 0390       str       r0, [sp, #0xc]
0801251a: 6748       ldr       r0, [pc, #0x19c] ; [0x80126b8] = 0x20003198 
0801251c: b0f95800   ldrsh.w   r0, [r0, #0x58]
08012520: 0023       movs      r3, #0
08012522: 0246       mov       r2, r0
08012524: 0621       movs      r1, #6
08012526: 0990       str       r0, [sp, #0x24]
08012528: 8a20       movs      r0, #0x8a
0801252a: fcf7c7ff   bl        #0x800f4bc
0801252e: 0120       movs      r0, #1
08012530: 10f0d4ff   bl        #0x80234dc
08012534: 59e1       b         #0x80127ea
08012536: 0a98       ldr       r0, [sp, #0x28]
08012538: 8078       ldrb      r0, [r0, #2]
0801253a: 0728       cmp       r0, #7
0801253c: 72d1       bne       #0x8012624
0801253e: 0a98       ldr       r0, [sp, #0x28]
08012540: 0179       ldrb      r1, [r0, #4]
08012542: 4079       ldrb      r0, [r0, #5]
08012544: 01eb0020   add.w     r0, r1, r0, lsl #8
08012548: 80b2       uxth      r0, r0
0801254a: 0990       str       r0, [sp, #0x24]
0801254c: 0a98       ldr       r0, [sp, #0x28]
0801254e: 8179       ldrb      r1, [r0, #6]
08012550: c079       ldrb      r0, [r0, #7]
08012552: 01eb0020   add.w     r0, r1, r0, lsl #8
08012556: 80b2       uxth      r0, r0
08012558: 0890       str       r0, [sp, #0x20]
0801255a: 5348       ldr       r0, [pc, #0x14c] ; [0x80126a8] = 0x200030bc TotalVoltage
0801255c: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08012560: 18b9       cbnz      r0, #0x801256a
08012562: 0220       movs      r0, #2
08012564: 10f0baff   bl        #0x80234dc
08012568: f7e5       b         #0x801215a
0801256a: 4ff6ff71   movw      r1, #0xffff
0801256e: 0898       ldr       r0, [sp, #0x20]
08012570: 4840       eors      r0, r1
08012572: 0890       str       r0, [sp, #0x20]
08012574: dde90810   ldrd      r1, r0, [sp, #0x20]
08012578: 8842       cmp       r0, r1
0801257a: 03d0       beq       #0x8012584
0801257c: 0220       movs      r0, #2
0801257e: 10f0adff   bl        #0x80234dc
08012582: eae5       b         #0x801215a
08012584: 0a98       ldr       r0, [sp, #0x28]
08012586: c078       ldrb      r0, [r0, #3]
08012588: ce28       cmp       r0, #0xce
0801258a: 4cd1       bne       #0x8012626
0801258c: 4b48       ldr       r0, [pc, #0x12c] ; [0x80126bc] = 0x200002e0 
0801258e: 0068       ldr       r0, [r0]
08012590: c838       subs      r0, #0xc8
08012592: 0999       ldr       r1, [sp, #0x24]
08012594: 8842       cmp       r0, r1
08012596: 05dc       bgt       #0x80125a4
08012598: 4849       ldr       r1, [pc, #0x120] ; [0x80126bc] = 0x200002e0 
0801259a: 0998       ldr       r0, [sp, #0x24]
0801259c: 0968       ldr       r1, [r1]
0801259e: c831       adds      r1, #0xc8
080125a0: 8842       cmp       r0, r1
080125a2: 12dd       ble       #0x80125ca
080125a4: 0020       movs      r0, #0
080125a6: 0090       str       r0, [sp]
080125a8: 0190       str       r0, [sp, #4]
080125aa: 0290       str       r0, [sp, #8]
080125ac: 0390       str       r0, [sp, #0xc]
080125ae: 4248       ldr       r0, [pc, #0x108] ; [0x80126b8] = 0x20003198 
080125b0: b0f95800   ldrsh.w   r0, [r0, #0x58]
080125b4: 0023       movs      r3, #0
080125b6: 0246       mov       r2, r0
080125b8: 0721       movs      r1, #7
080125ba: 0790       str       r0, [sp, #0x1c]
080125bc: 8a20       movs      r0, #0x8a
080125be: fcf77dff   bl        #0x800f4bc
080125c2: 0220       movs      r0, #2
080125c4: 10f08aff   bl        #0x80234dc
080125c8: c7e5       b         #0x801215a
080125ca: 3c49       ldr       r1, [pc, #0xf0] ; [0x80126bc] = 0x200002e0 
080125cc: 0998       ldr       r0, [sp, #0x24]
080125ce: 0968       ldr       r1, [r1]
080125d0: 411a       subs      r1, r0, r1
080125d2: 3b48       ldr       r0, [pc, #0xec] ; [0x80126c0] = 0x200002dc 
080125d4: 0160       str       r1, [r0]
080125d6: 0088       ldrh      r0, [r0]
080125d8: 00b2       sxth      r0, r0
080125da: 3749       ldr       r1, [pc, #0xdc] ; [0x80126b8] = 0x20003198 
080125dc: a1f85800   strh.w    r0, [r1, #0x58]
080125e0: 0846       mov       r0, r1
080125e2: b0f85800   ldrh.w    r0, [r0, #0x58]
080125e6: 4ff6ff71   movw      r1, #0xffff
080125ea: 4840       eors      r0, r1
080125ec: 01b2       sxth      r1, r0
080125ee: 3248       ldr       r0, [pc, #0xc8] ; [0x80126b8] = 0x20003198 
080125f0: a0f85a10   strh.w    r1, [r0, #0x5a]
080125f4: 0120       movs      r0, #1
080125f6: 10f071ff   bl        #0x80234dc
080125fa: 0020       movs      r0, #0
080125fc: 0090       str       r0, [sp]
080125fe: 0190       str       r0, [sp, #4]
08012600: 0290       str       r0, [sp, #8]
08012602: 0390       str       r0, [sp, #0xc]
08012604: 2c48       ldr       r0, [pc, #0xb0] ; [0x80126b8] = 0x20003198 
08012606: b0f95800   ldrsh.w   r0, [r0, #0x58]
0801260a: 0023       movs      r3, #0
0801260c: 0246       mov       r2, r0
0801260e: 2749       ldr       r1, [pc, #0x9c] ; [0x80126ac] = 0xffffceb4 
08012610: ad39       subs      r1, #0xad
08012612: 0790       str       r0, [sp, #0x1c]
08012614: 8a20       movs      r0, #0x8a
08012616: fcf751ff   bl        #0x800f4bc
0801261a: 0121       movs      r1, #1
0801261c: 2248       ldr       r0, [pc, #0x88] ; [0x80126a8] = 0x200030bc TotalVoltage
0801261e: 80f8c710   strb.w    r1, [r0, #0xc7]
08012622: 27e0       b         #0x8012674
08012624: 27e0       b         #0x8012676
08012626: 0a98       ldr       r0, [sp, #0x28]
08012628: c078       ldrb      r0, [r0, #3]
0801262a: 2028       cmp       r0, #0x20
0801262c: 22d1       bne       #0x8012674
0801262e: 0998       ldr       r0, [sp, #0x24]
08012630: 00bb       cbnz      r0, #0x8012674
08012632: 0020       movs      r0, #0
08012634: 2249       ldr       r1, [pc, #0x88] ; [0x80126c0] = 0x200002dc 
08012636: 0860       str       r0, [r1]
08012638: 1f49       ldr       r1, [pc, #0x7c] ; [0x80126b8] = 0x20003198 
0801263a: a1f85800   strh.w    r0, [r1, #0x58]
0801263e: 0021       movs      r1, #0
08012640: 1d48       ldr       r0, [pc, #0x74] ; [0x80126b8] = 0x20003198 
08012642: a0f85a10   strh.w    r1, [r0, #0x5a]
08012646: 0120       movs      r0, #1
08012648: 10f048ff   bl        #0x80234dc
0801264c: 0020       movs      r0, #0
0801264e: 0090       str       r0, [sp]
08012650: 0190       str       r0, [sp, #4]
08012652: 0290       str       r0, [sp, #8]
08012654: 0390       str       r0, [sp, #0xc]
08012656: 1848       ldr       r0, [pc, #0x60] ; [0x80126b8] = 0x20003198 
08012658: b0f95800   ldrsh.w   r0, [r0, #0x58]
0801265c: 0023       movs      r3, #0
0801265e: 0246       mov       r2, r0
08012660: 42f20701   movw      r1, #0x2007
08012664: 0790       str       r0, [sp, #0x1c]
08012666: 8a20       movs      r0, #0x8a
08012668: fcf728ff   bl        #0x800f4bc
0801266c: 0120       movs      r0, #1
0801266e: 0e49       ldr       r1, [pc, #0x38] ; [0x80126a8] = 0x200030bc TotalVoltage
08012670: 81f8c700   strb.w    r0, [r1, #0xc7]
08012674: b9e0       b         #0x80127ea
08012676: 0a98       ldr       r0, [sp, #0x28]
08012678: 8078       ldrb      r0, [r0, #2]
0801267a: 0828       cmp       r0, #8
0801267c: 22d1       bne       #0x80126c4
0801267e: 0020       movs      r0, #0
08012680: 0090       str       r0, [sp]
08012682: 0190       str       r0, [sp, #4]
08012684: 0290       str       r0, [sp, #8]
08012686: 0390       str       r0, [sp, #0xc]
08012688: 0b48       ldr       r0, [pc, #0x2c] ; [0x80126b8] = 0x20003198 
0801268a: b0f84c00   ldrh.w    r0, [r0, #0x4c]
0801268e: 00b2       sxth      r0, r0
08012690: 0023       movs      r3, #0
08012692: 0246       mov       r2, r0
08012694: 0821       movs      r1, #8
08012696: 0990       str       r0, [sp, #0x24]
08012698: 8a20       movs      r0, #0x8a
0801269a: fcf70fff   bl        #0x800f4bc
0801269e: 0120       movs      r0, #1
080126a0: 10f01cff   bl        #0x80234dc
080126a4: a1e0       b         #0x80127ea
080126c4: 0a98       ldr       r0, [sp, #0x28]
080126c6: 8078       ldrb      r0, [r0, #2]
080126c8: 0928       cmp       r0, #9
080126ca: 36d1       bne       #0x801273a
080126cc: 0a98       ldr       r0, [sp, #0x28]
080126ce: 0179       ldrb      r1, [r0, #4]
080126d0: 4079       ldrb      r0, [r0, #5]
080126d2: 01eb0020   add.w     r0, r1, r0, lsl #8
080126d6: 80b2       uxth      r0, r0
080126d8: 0990       str       r0, [sp, #0x24]
080126da: fd48       ldr       r0, [pc, #0x3f4] ; [0x8012ad0] = 0x200030bc TotalVoltage
080126dc: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080126e0: 28b1       cbz       r0, #0x80126ee
080126e2: 0998       ldr       r0, [sp, #0x24]
080126e4: 6428       cmp       r0, #0x64
080126e6: 02dc       bgt       #0x80126ee
080126e8: 0998       ldr       r0, [sp, #0x24]
080126ea: 3228       cmp       r0, #0x32
080126ec: 03da       bge       #0x80126f6
080126ee: 0220       movs      r0, #2
080126f0: 10f0f4fe   bl        #0x80234dc
080126f4: 31e5       b         #0x801215a
080126f6: 0120       movs      r0, #1
080126f8: 10f0f0fe   bl        #0x80234dc
080126fc: f549       ldr       r1, [pc, #0x3d4] ; [0x8012ad4] = 0x20003198 
080126fe: 0998       ldr       r0, [sp, #0x24]
08012700: a1f84c00   strh.w    r0, [r1, #0x4c]
08012704: 0846       mov       r0, r1
08012706: b0f84c00   ldrh.w    r0, [r0, #0x4c]
0801270a: 0890       str       r0, [sp, #0x20]
0801270c: 08f056fc   bl        #0x801afbc
08012710: 0020       movs      r0, #0
08012712: 0090       str       r0, [sp]
08012714: 0190       str       r0, [sp, #4]
08012716: 0290       str       r0, [sp, #8]
08012718: 0390       str       r0, [sp, #0xc]
0801271a: ee48       ldr       r0, [pc, #0x3b8] ; [0x8012ad4] = 0x20003198 
0801271c: b0f84c00   ldrh.w    r0, [r0, #0x4c]
08012720: 00b2       sxth      r0, r0
08012722: 0023       movs      r3, #0
08012724: 0246       mov       r2, r0
08012726: 0921       movs      r1, #9
08012728: 0890       str       r0, [sp, #0x20]
0801272a: 8a20       movs      r0, #0x8a
0801272c: fcf7c6fe   bl        #0x800f4bc
08012730: 0120       movs      r0, #1
08012732: e749       ldr       r1, [pc, #0x39c] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012734: 81f8c700   strb.w    r0, [r1, #0xc7]
08012738: 57e0       b         #0x80127ea
0801273a: 0a98       ldr       r0, [sp, #0x28]
0801273c: 8078       ldrb      r0, [r0, #2]
0801273e: 0a28       cmp       r0, #0xa
08012740: 14d1       bne       #0x801276c
08012742: 0020       movs      r0, #0
08012744: 0090       str       r0, [sp]
08012746: 0190       str       r0, [sp, #4]
08012748: 0290       str       r0, [sp, #8]
0801274a: 0390       str       r0, [sp, #0xc]
0801274c: e148       ldr       r0, [pc, #0x384] ; [0x8012ad4] = 0x20003198 
0801274e: 90f8af00   ldrb.w    r0, [r0, #0xaf]
08012752: 00f00100   and       r0, r0, #1
08012756: 0023       movs      r3, #0
08012758: 0246       mov       r2, r0
0801275a: 0a21       movs      r1, #0xa
0801275c: 0990       str       r0, [sp, #0x24]
0801275e: 8a20       movs      r0, #0x8a
08012760: fcf7acfe   bl        #0x800f4bc
08012764: 0120       movs      r0, #1
08012766: 10f0b9fe   bl        #0x80234dc
0801276a: 3ee0       b         #0x80127ea
0801276c: 0a98       ldr       r0, [sp, #0x28]
0801276e: 8078       ldrb      r0, [r0, #2]
08012770: 0b28       cmp       r0, #0xb
08012772: 3ad1       bne       #0x80127ea
08012774: 0a98       ldr       r0, [sp, #0x28]
08012776: 0179       ldrb      r1, [r0, #4]
08012778: 4079       ldrb      r0, [r0, #5]
0801277a: 01eb0020   add.w     r0, r1, r0, lsl #8
0801277e: 80b2       uxth      r0, r0
08012780: 0990       str       r0, [sp, #0x24]
08012782: d348       ldr       r0, [pc, #0x34c] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012784: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08012788: 18b9       cbnz      r0, #0x8012792
0801278a: 0220       movs      r0, #2
0801278c: 10f0a6fe   bl        #0x80234dc
08012790: e3e4       b         #0x801215a
08012792: 0120       movs      r0, #1
08012794: 10f0a2fe   bl        #0x80234dc
08012798: 0998       ldr       r0, [sp, #0x24]
0801279a: 40b1       cbz       r0, #0x80127ae
0801279c: cd48       ldr       r0, [pc, #0x334] ; [0x8012ad4] = 0x20003198 
0801279e: 90f8af00   ldrb.w    r0, [r0, #0xaf]
080127a2: 40f00101   orr       r1, r0, #1
080127a6: cb48       ldr       r0, [pc, #0x32c] ; [0x8012ad4] = 0x20003198 
080127a8: 80f8af10   strb.w    r1, [r0, #0xaf]
080127ac: 07e0       b         #0x80127be
080127ae: c948       ldr       r0, [pc, #0x324] ; [0x8012ad4] = 0x20003198 
080127b0: 90f8af00   ldrb.w    r0, [r0, #0xaf]
080127b4: 20f00100   bic       r0, r0, #1
080127b8: c649       ldr       r1, [pc, #0x318] ; [0x8012ad4] = 0x20003198 
080127ba: 81f8af00   strb.w    r0, [r1, #0xaf]
080127be: 0020       movs      r0, #0
080127c0: 0090       str       r0, [sp]
080127c2: 0190       str       r0, [sp, #4]
080127c4: 0290       str       r0, [sp, #8]
080127c6: 0390       str       r0, [sp, #0xc]
080127c8: c248       ldr       r0, [pc, #0x308] ; [0x8012ad4] = 0x20003198 
080127ca: 90f8af00   ldrb.w    r0, [r0, #0xaf]
080127ce: 00f00100   and       r0, r0, #1
080127d2: 0023       movs      r3, #0
080127d4: 0246       mov       r2, r0
080127d6: 0b21       movs      r1, #0xb
080127d8: 0890       str       r0, [sp, #0x20]
080127da: 8a20       movs      r0, #0x8a
080127dc: fcf76efe   bl        #0x800f4bc
080127e0: 0120       movs      r0, #1
080127e2: bb49       ldr       r1, [pc, #0x2ec] ; [0x8012ad0] = 0x200030bc TotalVoltage
080127e4: 81f8c700   strb.w    r0, [r1, #0xc7]
080127e8: 00bf       nop       
080127ea: b6e4       b         #0x801215a
080127ec: 0120       movs      r0, #1
080127ee: 10f075fe   bl        #0x80234dc
080127f2: b848       ldr       r0, [pc, #0x2e0] ; [0x8012ad4] = 0x20003198 
080127f4: b0f84e00   ldrh.w    r0, [r0, #0x4e]
080127f8: 0990       str       r0, [sp, #0x24]
080127fa: b648       ldr       r0, [pc, #0x2d8] ; [0x8012ad4] = 0x20003198 
080127fc: b0f85000   ldrh.w    r0, [r0, #0x50]
08012800: 0890       str       r0, [sp, #0x20]
08012802: b448       ldr       r0, [pc, #0x2d0] ; [0x8012ad4] = 0x20003198 
08012804: b0f85200   ldrh.w    r0, [r0, #0x52]
08012808: 0790       str       r0, [sp, #0x1c]
0801280a: b248       ldr       r0, [pc, #0x2c8] ; [0x8012ad4] = 0x20003198 
0801280c: b0f85400   ldrh.w    r0, [r0, #0x54]
08012810: 0690       str       r0, [sp, #0x18]
08012812: 0022       movs      r2, #0
08012814: 0698       ldr       r0, [sp, #0x18]
08012816: 00b2       sxth      r0, r0
08012818: 0799       ldr       r1, [sp, #0x1c]
0801281a: 09b2       sxth      r1, r1
0801281c: cde90102   strd      r0, r2, [sp, #4]
08012820: 0392       str       r2, [sp, #0xc]
08012822: 0091       str       r1, [sp]
08012824: 0898       ldr       r0, [sp, #0x20]
08012826: 03b2       sxth      r3, r0
08012828: 0998       ldr       r0, [sp, #0x24]
0801282a: 02b2       sxth      r2, r0
0801282c: 0021       movs      r1, #0
0801282e: b520       movs      r0, #0xb5
08012830: fcf744fe   bl        #0x800f4bc
08012834: 91e4       b         #0x801215a
08012836: a648       ldr       r0, [pc, #0x298] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012838: 8068       ldr       r0, [r0, #8]
0801283a: 0990       str       r0, [sp, #0x24]
0801283c: 0028       cmp       r0, #0
0801283e: 01db       blt       #0x8012844
08012840: 0998       ldr       r0, [sp, #0x24]
08012842: 01e0       b         #0x8012848
08012844: 0998       ldr       r0, [sp, #0x24]
08012846: 4042       rsbs      r0, r0, #0
08012848: 40f6b831   movw      r1, #0xbb8
0801284c: 8842       cmp       r0, r1
0801284e: 03dd       ble       #0x8012858
08012850: 0220       movs      r0, #2
08012852: 10f043fe   bl        #0x80234dc
08012856: 80e4       b         #0x801215a
08012858: 0120       movs      r0, #1
0801285a: 10f03ffe   bl        #0x80234dc
0801285e: 0a98       ldr       r0, [sp, #0x28]
08012860: 10f0a8fb   bl        #0x8022fb4
08012864: 0120       movs      r0, #1
08012866: 9a49       ldr       r1, [pc, #0x268] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012868: 81f8c700   strb.w    r0, [r1, #0xc7]
0801286c: 75e4       b         #0x801215a
0801286e: 0120       movs      r0, #1
08012870: 10f034fe   bl        #0x80234dc
08012874: 9648       ldr       r0, [pc, #0x258] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012876: 90f8be00   ldrb.w    r0, [r0, #0xbe]
0801287a: 90b9       cbnz      r0, #0x80128a2
0801287c: 9648       ldr       r0, [pc, #0x258] ; [0x8012ad8] = 0x20003d74 
0801287e: 4088       ldrh      r0, [r0, #2]
08012880: 0990       str       r0, [sp, #0x24]
08012882: 9548       ldr       r0, [pc, #0x254] ; [0x8012ad8] = 0x20003d74 
08012884: 8088       ldrh      r0, [r0, #4]
08012886: 0890       str       r0, [sp, #0x20]
08012888: 9348       ldr       r0, [pc, #0x24c] ; [0x8012ad8] = 0x20003d74 
0801288a: c088       ldrh      r0, [r0, #6]
0801288c: 0790       str       r0, [sp, #0x1c]
0801288e: 9248       ldr       r0, [pc, #0x248] ; [0x8012ad8] = 0x20003d74 
08012890: 0089       ldrh      r0, [r0, #8]
08012892: 0690       str       r0, [sp, #0x18]
08012894: 9048       ldr       r0, [pc, #0x240] ; [0x8012ad8] = 0x20003d74 
08012896: 4089       ldrh      r0, [r0, #0xa]
08012898: 0590       str       r0, [sp, #0x14]
0801289a: 8f48       ldr       r0, [pc, #0x23c] ; [0x8012ad8] = 0x20003d74 
0801289c: 8089       ldrh      r0, [r0, #0xc]
0801289e: 0490       str       r0, [sp, #0x10]
080128a0: 11e0       b         #0x80128c6
080128a2: 8c48       ldr       r0, [pc, #0x230] ; [0x8012ad4] = 0x20003198 
080128a4: 008c       ldrh      r0, [r0, #0x20]
080128a6: 0990       str       r0, [sp, #0x24]
080128a8: 8a48       ldr       r0, [pc, #0x228] ; [0x8012ad4] = 0x20003198 
080128aa: 408c       ldrh      r0, [r0, #0x22]
080128ac: 0890       str       r0, [sp, #0x20]
080128ae: 8948       ldr       r0, [pc, #0x224] ; [0x8012ad4] = 0x20003198 
080128b0: 808c       ldrh      r0, [r0, #0x24]
080128b2: 0790       str       r0, [sp, #0x1c]
080128b4: 8748       ldr       r0, [pc, #0x21c] ; [0x8012ad4] = 0x20003198 
080128b6: c08c       ldrh      r0, [r0, #0x26]
080128b8: 0690       str       r0, [sp, #0x18]
080128ba: 8648       ldr       r0, [pc, #0x218] ; [0x8012ad4] = 0x20003198 
080128bc: 008d       ldrh      r0, [r0, #0x28]
080128be: 0590       str       r0, [sp, #0x14]
080128c0: 8448       ldr       r0, [pc, #0x210] ; [0x8012ad4] = 0x20003198 
080128c2: 408d       ldrh      r0, [r0, #0x2a]
080128c4: 0490       str       r0, [sp, #0x10]
080128c6: 0498       ldr       r0, [sp, #0x10]
080128c8: 01b2       sxth      r1, r0
080128ca: 0598       ldr       r0, [sp, #0x14]
080128cc: 00b2       sxth      r0, r0
080128ce: 069a       ldr       r2, [sp, #0x18]
080128d0: 12b2       sxth      r2, r2
080128d2: 079b       ldr       r3, [sp, #0x1c]
080128d4: 1bb2       sxth      r3, r3
080128d6: cde90032   strd      r3, r2, [sp]
080128da: cde90201   strd      r0, r1, [sp, #8]
080128de: 0898       ldr       r0, [sp, #0x20]
080128e0: 03b2       sxth      r3, r0
080128e2: 0998       ldr       r0, [sp, #0x24]
080128e4: 02b2       sxth      r2, r0
080128e6: 0021       movs      r1, #0
080128e8: ac20       movs      r0, #0xac
080128ea: fcf7e7fd   bl        #0x800f4bc
080128ee: 34e4       b         #0x801215a
080128f0: 0120       movs      r0, #1
080128f2: 10f0f3fd   bl        #0x80234dc
080128f6: 7648       ldr       r0, [pc, #0x1d8] ; [0x8012ad0] = 0x200030bc TotalVoltage
080128f8: 90f8be00   ldrb.w    r0, [r0, #0xbe]
080128fc: 90b9       cbnz      r0, #0x8012924
080128fe: 7648       ldr       r0, [pc, #0x1d8] ; [0x8012ad8] = 0x20003d74 
08012900: 408b       ldrh      r0, [r0, #0x1a]
08012902: 0990       str       r0, [sp, #0x24]
08012904: 7448       ldr       r0, [pc, #0x1d0] ; [0x8012ad8] = 0x20003d74 
08012906: 808b       ldrh      r0, [r0, #0x1c]
08012908: 0890       str       r0, [sp, #0x20]
0801290a: 7348       ldr       r0, [pc, #0x1cc] ; [0x8012ad8] = 0x20003d74 
0801290c: c08b       ldrh      r0, [r0, #0x1e]
0801290e: 0790       str       r0, [sp, #0x1c]
08012910: 7148       ldr       r0, [pc, #0x1c4] ; [0x8012ad8] = 0x20003d74 
08012912: 008c       ldrh      r0, [r0, #0x20]
08012914: 0690       str       r0, [sp, #0x18]
08012916: 7048       ldr       r0, [pc, #0x1c0] ; [0x8012ad8] = 0x20003d74 
08012918: 408c       ldrh      r0, [r0, #0x22]
0801291a: 0590       str       r0, [sp, #0x14]
0801291c: 6e48       ldr       r0, [pc, #0x1b8] ; [0x8012ad8] = 0x20003d74 
0801291e: 808c       ldrh      r0, [r0, #0x24]
08012920: 0490       str       r0, [sp, #0x10]
08012922: 13e0       b         #0x801294c
08012924: 6b48       ldr       r0, [pc, #0x1ac] ; [0x8012ad4] = 0x20003198 
08012926: 008f       ldrh      r0, [r0, #0x38]
08012928: 0990       str       r0, [sp, #0x24]
0801292a: 6a48       ldr       r0, [pc, #0x1a8] ; [0x8012ad4] = 0x20003198 
0801292c: 408f       ldrh      r0, [r0, #0x3a]
0801292e: 0890       str       r0, [sp, #0x20]
08012930: 6848       ldr       r0, [pc, #0x1a0] ; [0x8012ad4] = 0x20003198 
08012932: 808f       ldrh      r0, [r0, #0x3c]
08012934: 0790       str       r0, [sp, #0x1c]
08012936: 6748       ldr       r0, [pc, #0x19c] ; [0x8012ad4] = 0x20003198 
08012938: c08f       ldrh      r0, [r0, #0x3e]
0801293a: 0690       str       r0, [sp, #0x18]
0801293c: 6548       ldr       r0, [pc, #0x194] ; [0x8012ad4] = 0x20003198 
0801293e: b0f84000   ldrh.w    r0, [r0, #0x40]
08012942: 0590       str       r0, [sp, #0x14]
08012944: 6348       ldr       r0, [pc, #0x18c] ; [0x8012ad4] = 0x20003198 
08012946: b0f84200   ldrh.w    r0, [r0, #0x42]
0801294a: 0490       str       r0, [sp, #0x10]
0801294c: 0498       ldr       r0, [sp, #0x10]
0801294e: 01b2       sxth      r1, r0
08012950: 0598       ldr       r0, [sp, #0x14]
08012952: 02b2       sxth      r2, r0
08012954: 0698       ldr       r0, [sp, #0x18]
08012956: 00b2       sxth      r0, r0
08012958: 079b       ldr       r3, [sp, #0x1c]
0801295a: 1bb2       sxth      r3, r3
0801295c: cde90030   strd      r3, r0, [sp]
08012960: cde90221   strd      r2, r1, [sp, #8]
08012964: 0898       ldr       r0, [sp, #0x20]
08012966: 03b2       sxth      r3, r0
08012968: 0998       ldr       r0, [sp, #0x24]
0801296a: 02b2       sxth      r2, r0
0801296c: 0021       movs      r1, #0
0801296e: ae20       movs      r0, #0xae
08012970: fcf7a4fd   bl        #0x800f4bc
08012974: 5ae4       b         #0x801222c
08012976: 0120       movs      r0, #1
08012978: 10f0b0fd   bl        #0x80234dc
0801297c: 5448       ldr       r0, [pc, #0x150] ; [0x8012ad0] = 0x200030bc TotalVoltage
0801297e: 90f8be00   ldrb.w    r0, [r0, #0xbe]
08012982: 90b9       cbnz      r0, #0x80129aa
08012984: 5448       ldr       r0, [pc, #0x150] ; [0x8012ad8] = 0x20003d74 
08012986: c089       ldrh      r0, [r0, #0xe]
08012988: 0990       str       r0, [sp, #0x24]
0801298a: 5348       ldr       r0, [pc, #0x14c] ; [0x8012ad8] = 0x20003d74 
0801298c: 008a       ldrh      r0, [r0, #0x10]
0801298e: 0890       str       r0, [sp, #0x20]
08012990: 5148       ldr       r0, [pc, #0x144] ; [0x8012ad8] = 0x20003d74 
08012992: 408a       ldrh      r0, [r0, #0x12]
08012994: 0790       str       r0, [sp, #0x1c]
08012996: 5048       ldr       r0, [pc, #0x140] ; [0x8012ad8] = 0x20003d74 
08012998: 808a       ldrh      r0, [r0, #0x14]
0801299a: 0690       str       r0, [sp, #0x18]
0801299c: 4e48       ldr       r0, [pc, #0x138] ; [0x8012ad8] = 0x20003d74 
0801299e: c08a       ldrh      r0, [r0, #0x16]
080129a0: 0590       str       r0, [sp, #0x14]
080129a2: 4d48       ldr       r0, [pc, #0x134] ; [0x8012ad8] = 0x20003d74 
080129a4: 008b       ldrh      r0, [r0, #0x18]
080129a6: 0490       str       r0, [sp, #0x10]
080129a8: 11e0       b         #0x80129ce
080129aa: 4a48       ldr       r0, [pc, #0x128] ; [0x8012ad4] = 0x20003198 
080129ac: 808d       ldrh      r0, [r0, #0x2c]
080129ae: 0990       str       r0, [sp, #0x24]
080129b0: 4848       ldr       r0, [pc, #0x120] ; [0x8012ad4] = 0x20003198 
080129b2: c08d       ldrh      r0, [r0, #0x2e]
080129b4: 0890       str       r0, [sp, #0x20]
080129b6: 4748       ldr       r0, [pc, #0x11c] ; [0x8012ad4] = 0x20003198 
080129b8: 008e       ldrh      r0, [r0, #0x30]
080129ba: 0790       str       r0, [sp, #0x1c]
080129bc: 4548       ldr       r0, [pc, #0x114] ; [0x8012ad4] = 0x20003198 
080129be: 408e       ldrh      r0, [r0, #0x32]
080129c0: 0690       str       r0, [sp, #0x18]
080129c2: 4448       ldr       r0, [pc, #0x110] ; [0x8012ad4] = 0x20003198 
080129c4: 808e       ldrh      r0, [r0, #0x34]
080129c6: 0590       str       r0, [sp, #0x14]
080129c8: 4248       ldr       r0, [pc, #0x108] ; [0x8012ad4] = 0x20003198 
080129ca: c08e       ldrh      r0, [r0, #0x36]
080129cc: 0490       str       r0, [sp, #0x10]
080129ce: 0498       ldr       r0, [sp, #0x10]
080129d0: 00b2       sxth      r0, r0
080129d2: 0599       ldr       r1, [sp, #0x14]
080129d4: 09b2       sxth      r1, r1
080129d6: 069a       ldr       r2, [sp, #0x18]
080129d8: 12b2       sxth      r2, r2
080129da: 079b       ldr       r3, [sp, #0x1c]
080129dc: 1bb2       sxth      r3, r3
080129de: cde90032   strd      r3, r2, [sp]
080129e2: cde90210   strd      r1, r0, [sp, #8]
080129e6: 0898       ldr       r0, [sp, #0x20]
080129e8: 03b2       sxth      r3, r0
080129ea: 0998       ldr       r0, [sp, #0x24]
080129ec: 02b2       sxth      r2, r0
080129ee: 0021       movs      r1, #0
080129f0: ad20       movs      r0, #0xad
080129f2: fcf763fd   bl        #0x800f4bc
080129f6: 19e4       b         #0x801222c
080129f8: 3548       ldr       r0, [pc, #0xd4] ; [0x8012ad0] = 0x200030bc TotalVoltage
080129fa: 90f8be00   ldrb.w    r0, [r0, #0xbe]
080129fe: 60b1       cbz       r0, #0x8012a1a
08012a00: 3348       ldr       r0, [pc, #0xcc] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012a02: 8068       ldr       r0, [r0, #8]
08012a04: 0390       str       r0, [sp, #0xc]
08012a06: 0028       cmp       r0, #0
08012a08: 01db       blt       #0x8012a0e
08012a0a: 0398       ldr       r0, [sp, #0xc]
08012a0c: 01e0       b         #0x8012a12
08012a0e: 0398       ldr       r0, [sp, #0xc]
08012a10: 4042       rsbs      r0, r0, #0
08012a12: 40f6b831   movw      r1, #0xbb8
08012a16: 8842       cmp       r0, r1
08012a18: 03dd       ble       #0x8012a22
08012a1a: 0220       movs      r0, #2
08012a1c: 10f05efd   bl        #0x80234dc
08012a20: 04e4       b         #0x801222c
08012a22: 0120       movs      r0, #1
08012a24: 10f05afd   bl        #0x80234dc
08012a28: 0a98       ldr       r0, [sp, #0x28]
08012a2a: 8178       ldrb      r1, [r0, #2]
08012a2c: c078       ldrb      r0, [r0, #3]
08012a2e: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a32: 80b2       uxth      r0, r0
08012a34: 0990       str       r0, [sp, #0x24]
08012a36: 0a98       ldr       r0, [sp, #0x28]
08012a38: 0179       ldrb      r1, [r0, #4]
08012a3a: 4079       ldrb      r0, [r0, #5]
08012a3c: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a40: 80b2       uxth      r0, r0
08012a42: 0890       str       r0, [sp, #0x20]
08012a44: 0a98       ldr       r0, [sp, #0x28]
08012a46: 8179       ldrb      r1, [r0, #6]
08012a48: c079       ldrb      r0, [r0, #7]
08012a4a: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a4e: 80b2       uxth      r0, r0
08012a50: 0790       str       r0, [sp, #0x1c]
08012a52: 0a98       ldr       r0, [sp, #0x28]
08012a54: 017a       ldrb      r1, [r0, #8]
08012a56: 407a       ldrb      r0, [r0, #9]
08012a58: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a5c: 80b2       uxth      r0, r0
08012a5e: 0690       str       r0, [sp, #0x18]
08012a60: 0a98       ldr       r0, [sp, #0x28]
08012a62: 817a       ldrb      r1, [r0, #0xa]
08012a64: c07a       ldrb      r0, [r0, #0xb]
08012a66: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a6a: 80b2       uxth      r0, r0
08012a6c: 0590       str       r0, [sp, #0x14]
08012a6e: 0a98       ldr       r0, [sp, #0x28]
08012a70: 017b       ldrb      r1, [r0, #0xc]
08012a72: 407b       ldrb      r0, [r0, #0xd]
08012a74: 01eb0020   add.w     r0, r1, r0, lsl #8
08012a78: 80b2       uxth      r0, r0
08012a7a: 0490       str       r0, [sp, #0x10]
08012a7c: 0498       ldr       r0, [sp, #0x10]
08012a7e: 01b2       sxth      r1, r0
08012a80: 0598       ldr       r0, [sp, #0x14]
08012a82: 02b2       sxth      r2, r0
08012a84: 0698       ldr       r0, [sp, #0x18]
08012a86: 03b2       sxth      r3, r0
08012a88: 0798       ldr       r0, [sp, #0x1c]
08012a8a: 00b2       sxth      r0, r0
08012a8c: cde90132   strd      r3, r2, [sp, #4]
08012a90: 0391       str       r1, [sp, #0xc]
08012a92: 0090       str       r0, [sp]
08012a94: 0898       ldr       r0, [sp, #0x20]
08012a96: 03b2       sxth      r3, r0
08012a98: 0998       ldr       r0, [sp, #0x24]
08012a9a: 02b2       sxth      r2, r0
08012a9c: 0021       movs      r1, #0
08012a9e: ac20       movs      r0, #0xac
08012aa0: fcf70cfd   bl        #0x800f4bc
08012aa4: 0b49       ldr       r1, [pc, #0x2c] ; [0x8012ad4] = 0x20003198 
08012aa6: 0998       ldr       r0, [sp, #0x24]
08012aa8: 0884       strh      r0, [r1, #0x20]
08012aaa: 0898       ldr       r0, [sp, #0x20]
08012aac: 4884       strh      r0, [r1, #0x22]
08012aae: 0798       ldr       r0, [sp, #0x1c]
08012ab0: 8884       strh      r0, [r1, #0x24]
08012ab2: 0698       ldr       r0, [sp, #0x18]
08012ab4: c884       strh      r0, [r1, #0x26]
08012ab6: 0598       ldr       r0, [sp, #0x14]
08012ab8: 0885       strh      r0, [r1, #0x28]
08012aba: 0498       ldr       r0, [sp, #0x10]
08012abc: 4885       strh      r0, [r1, #0x2a]
08012abe: 01f11e00   add.w     r0, r1, #0x1e
08012ac2: 11f043fc   bl        #0x802434c
08012ac6: 0121       movs      r1, #1
08012ac8: 0148       ldr       r0, [pc, #4] ; [0x8012ad0] = 0x200030bc TotalVoltage
08012aca: 80f8c710   strb.w    r1, [r0, #0xc7]
08012ace: 34e4       b         #0x801233a
08012adc: fb48       ldr       r0, [pc, #0x3ec] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012ade: 90f8be00   ldrb.w    r0, [r0, #0xbe]
08012ae2: 60b1       cbz       r0, #0x8012afe
08012ae4: f948       ldr       r0, [pc, #0x3e4] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012ae6: 8068       ldr       r0, [r0, #8]
08012ae8: 0390       str       r0, [sp, #0xc]
08012aea: 0028       cmp       r0, #0
08012aec: 01db       blt       #0x8012af2
08012aee: 0398       ldr       r0, [sp, #0xc]
08012af0: 01e0       b         #0x8012af6
08012af2: 0398       ldr       r0, [sp, #0xc]
08012af4: 4042       rsbs      r0, r0, #0
08012af6: 40f6b831   movw      r1, #0xbb8
08012afa: 8842       cmp       r0, r1
08012afc: 03dd       ble       #0x8012b06
08012afe: 0220       movs      r0, #2
08012b00: 10f0ecfc   bl        #0x80234dc
08012b04: 19e4       b         #0x801233a
08012b06: 0120       movs      r0, #1
08012b08: 10f0e8fc   bl        #0x80234dc
08012b0c: 0a98       ldr       r0, [sp, #0x28]
08012b0e: 8178       ldrb      r1, [r0, #2]
08012b10: c078       ldrb      r0, [r0, #3]
08012b12: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b16: 80b2       uxth      r0, r0
08012b18: 0990       str       r0, [sp, #0x24]
08012b1a: 0a98       ldr       r0, [sp, #0x28]
08012b1c: 0179       ldrb      r1, [r0, #4]
08012b1e: 4079       ldrb      r0, [r0, #5]
08012b20: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b24: 80b2       uxth      r0, r0
08012b26: 0890       str       r0, [sp, #0x20]
08012b28: 0a98       ldr       r0, [sp, #0x28]
08012b2a: 8179       ldrb      r1, [r0, #6]
08012b2c: c079       ldrb      r0, [r0, #7]
08012b2e: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b32: 80b2       uxth      r0, r0
08012b34: 0790       str       r0, [sp, #0x1c]
08012b36: 0a98       ldr       r0, [sp, #0x28]
08012b38: 017a       ldrb      r1, [r0, #8]
08012b3a: 407a       ldrb      r0, [r0, #9]
08012b3c: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b40: 80b2       uxth      r0, r0
08012b42: 0690       str       r0, [sp, #0x18]
08012b44: 0a98       ldr       r0, [sp, #0x28]
08012b46: 817a       ldrb      r1, [r0, #0xa]
08012b48: c07a       ldrb      r0, [r0, #0xb]
08012b4a: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b4e: 80b2       uxth      r0, r0
08012b50: 0590       str       r0, [sp, #0x14]
08012b52: 0a98       ldr       r0, [sp, #0x28]
08012b54: 017b       ldrb      r1, [r0, #0xc]
08012b56: 407b       ldrb      r0, [r0, #0xd]
08012b58: 01eb0020   add.w     r0, r1, r0, lsl #8
08012b5c: 80b2       uxth      r0, r0
08012b5e: 0490       str       r0, [sp, #0x10]
08012b60: 0498       ldr       r0, [sp, #0x10]
08012b62: 01b2       sxth      r1, r0
08012b64: 0598       ldr       r0, [sp, #0x14]
08012b66: 02b2       sxth      r2, r0
08012b68: 0698       ldr       r0, [sp, #0x18]
08012b6a: 03b2       sxth      r3, r0
08012b6c: 0798       ldr       r0, [sp, #0x1c]
08012b6e: 00b2       sxth      r0, r0
08012b70: cde90132   strd      r3, r2, [sp, #4]
08012b74: 0391       str       r1, [sp, #0xc]
08012b76: 0090       str       r0, [sp]
08012b78: 0898       ldr       r0, [sp, #0x20]
08012b7a: 03b2       sxth      r3, r0
08012b7c: 0998       ldr       r0, [sp, #0x24]
08012b7e: 02b2       sxth      r2, r0
08012b80: 0021       movs      r1, #0
08012b82: ae20       movs      r0, #0xae
08012b84: fcf79afc   bl        #0x800f4bc
08012b88: d149       ldr       r1, [pc, #0x344] ; [0x8012ed0] = 0x20003198 
08012b8a: 0998       ldr       r0, [sp, #0x24]
08012b8c: 0887       strh      r0, [r1, #0x38]
08012b8e: 0898       ldr       r0, [sp, #0x20]
08012b90: 4887       strh      r0, [r1, #0x3a]
08012b92: 0798       ldr       r0, [sp, #0x1c]
08012b94: 8887       strh      r0, [r1, #0x3c]
08012b96: 0698       ldr       r0, [sp, #0x18]
08012b98: c887       strh      r0, [r1, #0x3e]
08012b9a: 0598       ldr       r0, [sp, #0x14]
08012b9c: a1f84000   strh.w    r0, [r1, #0x40]
08012ba0: 0498       ldr       r0, [sp, #0x10]
08012ba2: a1f84200   strh.w    r0, [r1, #0x42]
08012ba6: 01f11e00   add.w     r0, r1, #0x1e
08012baa: 11f0cffb   bl        #0x802434c
08012bae: 0120       movs      r0, #1
08012bb0: c649       ldr       r1, [pc, #0x318] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012bb2: 81f8c700   strb.w    r0, [r1, #0xc7]
08012bb6: 37e4       b         #0x8012428
08012bb8: c448       ldr       r0, [pc, #0x310] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012bba: 90f8be00   ldrb.w    r0, [r0, #0xbe]
08012bbe: 60b1       cbz       r0, #0x8012bda
08012bc0: c248       ldr       r0, [pc, #0x308] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012bc2: 8068       ldr       r0, [r0, #8]
08012bc4: 0390       str       r0, [sp, #0xc]
08012bc6: 0028       cmp       r0, #0
08012bc8: 01db       blt       #0x8012bce
08012bca: 0398       ldr       r0, [sp, #0xc]
08012bcc: 01e0       b         #0x8012bd2
08012bce: 0398       ldr       r0, [sp, #0xc]
08012bd0: 4042       rsbs      r0, r0, #0
08012bd2: 40f6b831   movw      r1, #0xbb8
08012bd6: 8842       cmp       r0, r1
08012bd8: 03dd       ble       #0x8012be2
08012bda: 0220       movs      r0, #2
08012bdc: 10f07efc   bl        #0x80234dc
08012be0: 22e4       b         #0x8012428
08012be2: 0120       movs      r0, #1
08012be4: 10f07afc   bl        #0x80234dc
08012be8: 0a98       ldr       r0, [sp, #0x28]
08012bea: 8178       ldrb      r1, [r0, #2]
08012bec: c078       ldrb      r0, [r0, #3]
08012bee: 01eb0020   add.w     r0, r1, r0, lsl #8
08012bf2: 80b2       uxth      r0, r0
08012bf4: 0990       str       r0, [sp, #0x24]
08012bf6: 0a98       ldr       r0, [sp, #0x28]
08012bf8: 0179       ldrb      r1, [r0, #4]
08012bfa: 4079       ldrb      r0, [r0, #5]
08012bfc: 01eb0020   add.w     r0, r1, r0, lsl #8
08012c00: 80b2       uxth      r0, r0
08012c02: 0890       str       r0, [sp, #0x20]
08012c04: 0a98       ldr       r0, [sp, #0x28]
08012c06: 8179       ldrb      r1, [r0, #6]
08012c08: c079       ldrb      r0, [r0, #7]
08012c0a: 01eb0020   add.w     r0, r1, r0, lsl #8
08012c0e: 80b2       uxth      r0, r0
08012c10: 0790       str       r0, [sp, #0x1c]
08012c12: 0a98       ldr       r0, [sp, #0x28]
08012c14: 017a       ldrb      r1, [r0, #8]
08012c16: 407a       ldrb      r0, [r0, #9]
08012c18: 01eb0020   add.w     r0, r1, r0, lsl #8
08012c1c: 80b2       uxth      r0, r0
08012c1e: 0690       str       r0, [sp, #0x18]
08012c20: 0a98       ldr       r0, [sp, #0x28]
08012c22: 817a       ldrb      r1, [r0, #0xa]
08012c24: c07a       ldrb      r0, [r0, #0xb]
08012c26: 01eb0020   add.w     r0, r1, r0, lsl #8
08012c2a: 80b2       uxth      r0, r0
08012c2c: 0590       str       r0, [sp, #0x14]
08012c2e: 0a98       ldr       r0, [sp, #0x28]
08012c30: 017b       ldrb      r1, [r0, #0xc]
08012c32: 407b       ldrb      r0, [r0, #0xd]
08012c34: 01eb0020   add.w     r0, r1, r0, lsl #8
08012c38: 80b2       uxth      r0, r0
08012c3a: 0490       str       r0, [sp, #0x10]
08012c3c: 0498       ldr       r0, [sp, #0x10]
08012c3e: 01b2       sxth      r1, r0
08012c40: 0598       ldr       r0, [sp, #0x14]
08012c42: 02b2       sxth      r2, r0
08012c44: 0698       ldr       r0, [sp, #0x18]
08012c46: 03b2       sxth      r3, r0
08012c48: 0798       ldr       r0, [sp, #0x1c]
08012c4a: 00b2       sxth      r0, r0
08012c4c: cde90132   strd      r3, r2, [sp, #4]
08012c50: 0391       str       r1, [sp, #0xc]
08012c52: 0090       str       r0, [sp]
08012c54: 0898       ldr       r0, [sp, #0x20]
08012c56: 03b2       sxth      r3, r0
08012c58: 0998       ldr       r0, [sp, #0x24]
08012c5a: 02b2       sxth      r2, r0
08012c5c: 0021       movs      r1, #0
08012c5e: ad20       movs      r0, #0xad
08012c60: fcf72cfc   bl        #0x800f4bc
08012c64: 9a49       ldr       r1, [pc, #0x268] ; [0x8012ed0] = 0x20003198 
08012c66: 0998       ldr       r0, [sp, #0x24]
08012c68: 8885       strh      r0, [r1, #0x2c]
08012c6a: 0898       ldr       r0, [sp, #0x20]
08012c6c: c885       strh      r0, [r1, #0x2e]
08012c6e: 0798       ldr       r0, [sp, #0x1c]
08012c70: 0886       strh      r0, [r1, #0x30]
08012c72: 0698       ldr       r0, [sp, #0x18]
08012c74: 4886       strh      r0, [r1, #0x32]
08012c76: 0598       ldr       r0, [sp, #0x14]
08012c78: 8886       strh      r0, [r1, #0x34]
08012c7a: 0498       ldr       r0, [sp, #0x10]
08012c7c: c886       strh      r0, [r1, #0x36]
08012c7e: 01f11e00   add.w     r0, r1, #0x1e
08012c82: 11f063fb   bl        #0x802434c
08012c86: 0120       movs      r0, #1
08012c88: 9049       ldr       r1, [pc, #0x240] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012c8a: 81f8c700   strb.w    r0, [r1, #0xc7]
08012c8e: 19e4       b         #0x80124c4
08012c90: 0120       movs      r0, #1
08012c92: 10f023fc   bl        #0x80234dc
08012c96: 0a98       ldr       r0, [sp, #0x28]
08012c98: 8078       ldrb      r0, [r0, #2]
08012c9a: 1228       cmp       r0, #0x12
08012c9c: 03d0       beq       #0x8012ca6
08012c9e: 0a98       ldr       r0, [sp, #0x28]
08012ca0: 8078       ldrb      r0, [r0, #2]
08012ca2: 1328       cmp       r0, #0x13
08012ca4: 0fd1       bne       #0x8012cc6
08012ca6: 8a48       ldr       r0, [pc, #0x228] ; [0x8012ed0] = 0x20003198 
08012ca8: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08012cac: 20f0f000   bic       r0, r0, #0xf0
08012cb0: 1030       adds      r0, #0x10
08012cb2: 8749       ldr       r1, [pc, #0x21c] ; [0x8012ed0] = 0x20003198 
08012cb4: 81f87a00   strb.w    r0, [r1, #0x7a]
08012cb8: 0a98       ldr       r0, [sp, #0x28]
08012cba: 8078       ldrb      r0, [r0, #2]
08012cbc: 8549       ldr       r1, [pc, #0x214] ; [0x8012ed4] = 0x200006c4 
08012cbe: 0860       str       r0, [r1]
08012cc0: 8549       ldr       r1, [pc, #0x214] ; [0x8012ed8] = 0x200006c8 
08012cc2: 0860       str       r0, [r1]
08012cc4: 11e0       b         #0x8012cea
08012cc6: 0a98       ldr       r0, [sp, #0x28]
08012cc8: 8078       ldrb      r0, [r0, #2]
08012cca: 1428       cmp       r0, #0x14
08012ccc: 0dd1       bne       #0x8012cea
08012cce: 8048       ldr       r0, [pc, #0x200] ; [0x8012ed0] = 0x20003198 
08012cd0: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08012cd4: 20f0f000   bic       r0, r0, #0xf0
08012cd8: 7d49       ldr       r1, [pc, #0x1f4] ; [0x8012ed0] = 0x20003198 
08012cda: 81f87a00   strb.w    r0, [r1, #0x7a]
08012cde: 0a98       ldr       r0, [sp, #0x28]
08012ce0: 8078       ldrb      r0, [r0, #2]
08012ce2: 7c49       ldr       r1, [pc, #0x1f0] ; [0x8012ed4] = 0x200006c4 
08012ce4: 0860       str       r0, [r1]
08012ce6: 7c49       ldr       r1, [pc, #0x1f0] ; [0x8012ed8] = 0x200006c8 
08012ce8: 0860       str       r0, [r1]
08012cea: 0a98       ldr       r0, [sp, #0x28]
08012cec: c078       ldrb      r0, [r0, #3]
08012cee: 18b1       cbz       r0, #0x8012cf8
08012cf0: 0120       movs      r0, #1
08012cf2: 7749       ldr       r1, [pc, #0x1dc] ; [0x8012ed0] = 0x20003198 
08012cf4: a1f85c00   strh.w    r0, [r1, #0x5c]
08012cf8: 0120       movs      r0, #1
08012cfa: 7449       ldr       r1, [pc, #0x1d0] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012cfc: 81f8c700   strb.w    r0, [r1, #0xc7]
08012d00: 32e4       b         #0x8012568
08012d02: 0120       movs      r0, #1
08012d04: 10f0eafb   bl        #0x80234dc
08012d08: 0020       movs      r0, #0
08012d0a: 0490       str       r0, [sp, #0x10]
08012d0c: 09e0       b         #0x8012d22
08012d0e: 0498       ldr       r0, [sp, #0x10]
08012d10: 801c       adds      r0, r0, #2
08012d12: 0a99       ldr       r1, [sp, #0x28]
08012d14: 095c       ldrb      r1, [r1, r0]
08012d16: 05aa       add       r2, sp, #0x14
08012d18: 0498       ldr       r0, [sp, #0x10]
08012d1a: 1154       strb      r1, [r2, r0]
08012d1c: 0498       ldr       r0, [sp, #0x10]
08012d1e: 401c       adds      r0, r0, #1
08012d20: 0490       str       r0, [sp, #0x10]
08012d22: 0498       ldr       r0, [sp, #0x10]
08012d24: 0e28       cmp       r0, #0xe
08012d26: f2db       blt       #0x8012d0e
08012d28: 0e20       movs      r0, #0xe
08012d2a: 0490       str       r0, [sp, #0x10]
08012d2c: 09e0       b         #0x8012d42
08012d2e: 0498       ldr       r0, [sp, #0x10]
08012d30: c01c       adds      r0, r0, #3
08012d32: 0a99       ldr       r1, [sp, #0x28]
08012d34: 095c       ldrb      r1, [r1, r0]
08012d36: 05aa       add       r2, sp, #0x14
08012d38: 0498       ldr       r0, [sp, #0x10]
08012d3a: 1154       strb      r1, [r2, r0]
08012d3c: 0498       ldr       r0, [sp, #0x10]
08012d3e: 401c       adds      r0, r0, #1
08012d40: 0490       str       r0, [sp, #0x10]
08012d42: 0498       ldr       r0, [sp, #0x10]
08012d44: 1128       cmp       r0, #0x11
08012d46: f2db       blt       #0x8012d2e
08012d48: 05a8       add       r0, sp, #0x14
08012d4a: fcf781fa   bl        #0x800f250
08012d4e: a8b1       cbz       r0, #0x8012d7c
08012d50: 0020       movs      r0, #0
08012d52: 0490       str       r0, [sp, #0x10]
08012d54: 09e0       b         #0x8012d6a
08012d56: 05a9       add       r1, sp, #0x14
08012d58: 0498       ldr       r0, [sp, #0x10]
08012d5a: 0a5c       ldrb      r2, [r1, r0]
08012d5c: 5c48       ldr       r0, [pc, #0x170] ; [0x8012ed0] = 0x20003198 
08012d5e: 6230       adds      r0, #0x62
08012d60: 0499       ldr       r1, [sp, #0x10]
08012d62: 4254       strb      r2, [r0, r1]
08012d64: 0498       ldr       r0, [sp, #0x10]
08012d66: 401c       adds      r0, r0, #1
08012d68: 0490       str       r0, [sp, #0x10]
08012d6a: 0498       ldr       r0, [sp, #0x10]
08012d6c: 1228       cmp       r0, #0x12
08012d6e: f2db       blt       #0x8012d56
08012d70: 0ff0f6ff   bl        #0x8022d60
08012d74: 0120       movs      r0, #1
08012d76: 5549       ldr       r1, [pc, #0x154] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012d78: 81f8c700   strb.w    r0, [r1, #0xc7]
08012d7c: 24e4       b         #0x80125c8
08012d7e: 0120       movs      r0, #1
08012d80: 10f0acfb   bl        #0x80234dc
08012d84: 0ff0ecff   bl        #0x8022d60
08012d88: 1ee4       b         #0x80125c8
08012d8a: 0120       movs      r0, #1
08012d8c: 10f0a6fb   bl        #0x80234dc
08012d90: fbf7cefe   bl        #0x800eb30
08012d94: 0ff0ccfa   bl        #0x8022330
08012d98: 0120       movs      r0, #1
08012d9a: 4c49       ldr       r1, [pc, #0x130] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012d9c: 81f8c700   strb.w    r0, [r1, #0xc7]
08012da0: 12e4       b         #0x80125c8
08012da2: 4a48       ldr       r0, [pc, #0x128] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012da4: 8068       ldr       r0, [r0, #8]
08012da6: 0990       str       r0, [sp, #0x24]
08012da8: 0028       cmp       r0, #0
08012daa: 01db       blt       #0x8012db0
08012dac: 0998       ldr       r0, [sp, #0x24]
08012dae: 01e0       b         #0x8012db4
08012db0: 0998       ldr       r0, [sp, #0x24]
08012db2: 4042       rsbs      r0, r0, #0
08012db4: 40f6b831   movw      r1, #0xbb8
08012db8: 8842       cmp       r0, r1
08012dba: 04dc       bgt       #0x8012dc6
08012dbc: 4348       ldr       r0, [pc, #0x10c] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012dbe: 90f8bf00   ldrb.w    r0, [r0, #0xbf]
08012dc2: 0028       cmp       r0, #0
08012dc4: 03dd       ble       #0x8012dce
08012dc6: 0220       movs      r0, #2
08012dc8: 10f088fb   bl        #0x80234dc
08012dcc: 92e4       b         #0x80126f4
08012dce: 0120       movs      r0, #1
08012dd0: 10f084fb   bl        #0x80234dc
08012dd4: 10f0bef8   bl        #0x8022f54
08012dd8: 3d48       ldr       r0, [pc, #0xf4] ; [0x8012ed0] = 0x20003198 
08012dda: 1e30       adds      r0, #0x1e
08012ddc: 11f0b6fa   bl        #0x802434c
08012de0: 88e4       b         #0x80126f4
08012de2: 0120       movs      r0, #1
08012de4: 10f07afb   bl        #0x80234dc
08012de8: 0a98       ldr       r0, [sp, #0x28]
08012dea: 8078       ldrb      r0, [r0, #2]
08012dec: 0128       cmp       r0, #1
08012dee: 03d1       bne       #0x8012df8
08012df0: 3749       ldr       r1, [pc, #0xdc] ; [0x8012ed0] = 0x20003198 
08012df2: a1f87400   strh.w    r0, [r1, #0x74]
08012df6: 03e0       b         #0x8012e00
08012df8: 0020       movs      r0, #0
08012dfa: 3549       ldr       r1, [pc, #0xd4] ; [0x8012ed0] = 0x20003198 
08012dfc: a1f87400   strh.w    r0, [r1, #0x74]
08012e00: 3348       ldr       r0, [pc, #0xcc] ; [0x8012ed0] = 0x20003198 
08012e02: b0f87400   ldrh.w    r0, [r0, #0x74]
08012e06: 3549       ldr       r1, [pc, #0xd4] ; [0x8012edc] = 0x200006a8 
08012e08: 0860       str       r0, [r1]
08012e0a: 0020       movs      r0, #0
08012e0c: 0090       str       r0, [sp]
08012e0e: 0190       str       r0, [sp, #4]
08012e10: 0290       str       r0, [sp, #8]
08012e12: 0390       str       r0, [sp, #0xc]
08012e14: 2e48       ldr       r0, [pc, #0xb8] ; [0x8012ed0] = 0x20003198 
08012e16: b0f87400   ldrh.w    r0, [r0, #0x74]
08012e1a: 00b2       sxth      r0, r0
08012e1c: 0023       movs      r3, #0
08012e1e: 1a46       mov       r2, r3
08012e20: 0146       mov       r1, r0
08012e22: 0990       str       r0, [sp, #0x24]
08012e24: 6b20       movs      r0, #0x6b
08012e26: fcf749fb   bl        #0x800f4bc
08012e2a: 0120       movs      r0, #1
08012e2c: 2749       ldr       r1, [pc, #0x9c] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012e2e: 81f8c700   strb.w    r0, [r1, #0xc7]
08012e32: 5fe4       b         #0x80126f4
08012e34: 0120       movs      r0, #1
08012e36: 10f051fb   bl        #0x80234dc
08012e3a: 0020       movs      r0, #0
08012e3c: 0090       str       r0, [sp]
08012e3e: 0190       str       r0, [sp, #4]
08012e40: 0290       str       r0, [sp, #8]
08012e42: 0390       str       r0, [sp, #0xc]
08012e44: 2248       ldr       r0, [pc, #0x88] ; [0x8012ed0] = 0x20003198 
08012e46: b0f87400   ldrh.w    r0, [r0, #0x74]
08012e4a: 00b2       sxth      r0, r0
08012e4c: 0023       movs      r3, #0
08012e4e: 1a46       mov       r2, r3
08012e50: 0146       mov       r1, r0
08012e52: 0990       str       r0, [sp, #0x24]
08012e54: 6b20       movs      r0, #0x6b
08012e56: fcf731fb   bl        #0x800f4bc
08012e5a: 4be4       b         #0x80126f4
08012e5c: 0120       movs      r0, #1
08012e5e: 10f03dfb   bl        #0x80234dc
08012e62: 0a98       ldr       r0, [sp, #0x28]
08012e64: 8078       ldrb      r0, [r0, #2]
08012e66: 0128       cmp       r0, #1
08012e68: 03d1       bne       #0x8012e72
08012e6a: 1949       ldr       r1, [pc, #0x64] ; [0x8012ed0] = 0x20003198 
08012e6c: a1f87600   strh.w    r0, [r1, #0x76]
08012e70: 03e0       b         #0x8012e7a
08012e72: 0020       movs      r0, #0
08012e74: 1649       ldr       r1, [pc, #0x58] ; [0x8012ed0] = 0x20003198 
08012e76: a1f87600   strh.w    r0, [r1, #0x76]
08012e7a: 0020       movs      r0, #0
08012e7c: 0090       str       r0, [sp]
08012e7e: 0190       str       r0, [sp, #4]
08012e80: 0290       str       r0, [sp, #8]
08012e82: 0390       str       r0, [sp, #0xc]
08012e84: 1248       ldr       r0, [pc, #0x48] ; [0x8012ed0] = 0x20003198 
08012e86: b0f87600   ldrh.w    r0, [r0, #0x76]
08012e8a: 00b2       sxth      r0, r0
08012e8c: 0023       movs      r3, #0
08012e8e: 1a46       mov       r2, r3
08012e90: 0146       mov       r1, r0
08012e92: 0990       str       r0, [sp, #0x24]
08012e94: 6e20       movs      r0, #0x6e
08012e96: fcf711fb   bl        #0x800f4bc
08012e9a: 0120       movs      r0, #1
08012e9c: 0b49       ldr       r1, [pc, #0x2c] ; [0x8012ecc] = 0x200030bc TotalVoltage
08012e9e: 81f8c700   strb.w    r0, [r1, #0xc7]
08012ea2: 27e4       b         #0x80126f4
08012ea4: 0120       movs      r0, #1
08012ea6: 10f019fb   bl        #0x80234dc
08012eaa: 0020       movs      r0, #0
08012eac: 0090       str       r0, [sp]
08012eae: 0190       str       r0, [sp, #4]
08012eb0: 0290       str       r0, [sp, #8]
08012eb2: 0390       str       r0, [sp, #0xc]
08012eb4: 0648       ldr       r0, [pc, #0x18] ; [0x8012ed0] = 0x20003198 
08012eb6: b0f87600   ldrh.w    r0, [r0, #0x76]
08012eba: 00b2       sxth      r0, r0
08012ebc: 0023       movs      r3, #0
08012ebe: 1a46       mov       r2, r3
08012ec0: 0146       mov       r1, r0
08012ec2: 0990       str       r0, [sp, #0x24]
08012ec4: 6e20       movs      r0, #0x6e
08012ec6: fcf7f9fa   bl        #0x800f4bc
08012eca: 13e4       b         #0x80126f4
08012ee0: 0120       movs      r0, #1
08012ee2: 10f0fbfa   bl        #0x80234dc
08012ee6: 4ff44870   mov.w     r0, #0x320
08012eea: fe49       ldr       r1, [pc, #0x3f8] ; [0x80132e4] = 0x2000087c 
08012eec: 0860       str       r0, [r1]
08012eee: 0a98       ldr       r0, [sp, #0x28]
08012ef0: 8078       ldrb      r0, [r0, #2]
08012ef2: fd49       ldr       r1, [pc, #0x3f4] ; [0x80132e8] = 0x20003198 
08012ef4: a1f87800   strh.w    r0, [r1, #0x78]
08012ef8: 0020       movs      r0, #0
08012efa: 0090       str       r0, [sp]
08012efc: 0190       str       r0, [sp, #4]
08012efe: 0290       str       r0, [sp, #8]
08012f00: 0390       str       r0, [sp, #0xc]
08012f02: 0846       mov       r0, r1
08012f04: b0f87800   ldrh.w    r0, [r0, #0x78]
08012f08: 00b2       sxth      r0, r0
08012f0a: 0023       movs      r3, #0
08012f0c: 1a46       mov       r2, r3
08012f0e: 0146       mov       r1, r0
08012f10: 0990       str       r0, [sp, #0x24]
08012f12: 5220       movs      r0, #0x52
08012f14: fcf7d2fa   bl        #0x800f4bc
08012f18: 0120       movs      r0, #1
08012f1a: f449       ldr       r1, [pc, #0x3d0] ; [0x80132ec] = 0x200030bc TotalVoltage
08012f1c: 81f8c700   strb.w    r0, [r1, #0xc7]
08012f20: 36e4       b         #0x8012790
08012f22: 0120       movs      r0, #1
08012f24: 10f0dafa   bl        #0x80234dc
08012f28: 0020       movs      r0, #0
08012f2a: 0090       str       r0, [sp]
08012f2c: 0190       str       r0, [sp, #4]
08012f2e: 0290       str       r0, [sp, #8]
08012f30: 0390       str       r0, [sp, #0xc]
08012f32: ed48       ldr       r0, [pc, #0x3b4] ; [0x80132e8] = 0x20003198 
08012f34: b0f87800   ldrh.w    r0, [r0, #0x78]
08012f38: 00b2       sxth      r0, r0
08012f3a: 0023       movs      r3, #0
08012f3c: 1a46       mov       r2, r3
08012f3e: 0146       mov       r1, r0
08012f40: 0990       str       r0, [sp, #0x24]
08012f42: 5220       movs      r0, #0x52
08012f44: fcf7bafa   bl        #0x800f4bc
08012f48: 22e4       b         #0x8012790
08012f4a: 0120       movs      r0, #1
08012f4c: 10f0c6fa   bl        #0x80234dc
08012f50: 0a98       ldr       r0, [sp, #0x28]
08012f52: 8178       ldrb      r1, [r0, #2]
08012f54: e448       ldr       r0, [pc, #0x390] ; [0x80132e8] = 0x20003198 
08012f56: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08012f5a: 61f30300   bfi       r0, r1, #0, #4
08012f5e: e249       ldr       r1, [pc, #0x388] ; [0x80132e8] = 0x20003198 
08012f60: 81f87a00   strb.w    r0, [r1, #0x7a]
08012f64: 0020       movs      r0, #0
08012f66: 0090       str       r0, [sp]
08012f68: 0190       str       r0, [sp, #4]
08012f6a: 0290       str       r0, [sp, #8]
08012f6c: 0390       str       r0, [sp, #0xc]
08012f6e: 0846       mov       r0, r1
08012f70: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08012f74: 00f00f00   and       r0, r0, #0xf
08012f78: 0023       movs      r3, #0
08012f7a: 1a46       mov       r2, r3
08012f7c: 0146       mov       r1, r0
08012f7e: 0990       str       r0, [sp, #0x24]
08012f80: 5520       movs      r0, #0x55
08012f82: fcf79bfa   bl        #0x800f4bc
08012f86: 0120       movs      r0, #1
08012f88: d849       ldr       r1, [pc, #0x360] ; [0x80132ec] = 0x200030bc TotalVoltage
08012f8a: 81f8c700   strb.w    r0, [r1, #0xc7]
08012f8e: 2ce4       b         #0x80127ea
08012f90: 0a98       ldr       r0, [sp, #0x28]
08012f92: 8078       ldrb      r0, [r0, #2]
08012f94: c0bb       cbnz      r0, #0x8013008
08012f96: 0a98       ldr       r0, [sp, #0x28]
08012f98: c078       ldrb      r0, [r0, #3]
08012f9a: a8bb       cbnz      r0, #0x8013008
08012f9c: 0a98       ldr       r0, [sp, #0x28]
08012f9e: c07b       ldrb      r0, [r0, #0xf]
08012fa0: f228       cmp       r0, #0xf2
08012fa2: 32d1       bne       #0x801300a
08012fa4: 0a98       ldr       r0, [sp, #0x28]
08012fa6: 807b       ldrb      r0, [r0, #0xe]
08012fa8: 0128       cmp       r0, #1
08012faa: 1cd1       bne       #0x8012fe6
08012fac: 0a98       ldr       r0, [sp, #0x28]
08012fae: 0079       ldrb      r0, [r0, #4]
08012fb0: 6521       movs      r1, #0x65
08012fb2: 90fbf1f2   sdiv      r2, r0, r1
08012fb6: 01fb1200   mls       r0, r1, r2, r0
08012fba: c0b2       uxtb      r0, r0
08012fbc: 0990       str       r0, [sp, #0x24]
08012fbe: ca49       ldr       r1, [pc, #0x328] ; [0x80132e8] = 0x20003198 
08012fc0: 0998       ldr       r0, [sp, #0x24]
08012fc2: 81f87b00   strb.w    r0, [r1, #0x7b]
08012fc6: ca48       ldr       r0, [pc, #0x328] ; [0x80132f0] = 0xfffff200 
08012fc8: 0021       movs      r1, #0
08012fca: 0091       str       r1, [sp]
08012fcc: 0191       str       r1, [sp, #4]
08012fce: 0b46       mov       r3, r1
08012fd0: cde90210   strd      r1, r0, [sp, #8]
08012fd4: 5420       movs      r0, #0x54
08012fd6: 099a       ldr       r2, [sp, #0x24]
08012fd8: fcf770fa   bl        #0x800f4bc
08012fdc: 0120       movs      r0, #1
08012fde: c349       ldr       r1, [pc, #0x30c] ; [0x80132ec] = 0x200030bc TotalVoltage
08012fe0: 81f8c700   strb.w    r0, [r1, #0xc7]
08012fe4: 25e0       b         #0x8013032
08012fe6: c048       ldr       r0, [pc, #0x300] ; [0x80132e8] = 0x20003198 
08012fe8: 90f87b00   ldrb.w    r0, [r0, #0x7b]
08012fec: 0990       str       r0, [sp, #0x24]
08012fee: c04a       ldr       r2, [pc, #0x300] ; [0x80132f0] = 0xfffff200 
08012ff0: 0020       movs      r0, #0
08012ff2: 0090       str       r0, [sp]
08012ff4: 0190       str       r0, [sp, #4]
08012ff6: 0346       mov       r3, r0
08012ff8: cde90202   strd      r0, r2, [sp, #8]
08012ffc: 0146       mov       r1, r0
08012ffe: 5420       movs      r0, #0x54
08013000: 099a       ldr       r2, [sp, #0x24]
08013002: fcf75bfa   bl        #0x800f4bc
08013006: 14e0       b         #0x8013032
08013008: ffe7       b         #0x801300a
0801300a: 0120       movs      r0, #1
0801300c: 10f066fa   bl        #0x80234dc
08013010: 0020       movs      r0, #0
08013012: 0090       str       r0, [sp]
08013014: 0190       str       r0, [sp, #4]
08013016: 0290       str       r0, [sp, #8]
08013018: 0390       str       r0, [sp, #0xc]
0801301a: b348       ldr       r0, [pc, #0x2cc] ; [0x80132e8] = 0x20003198 
0801301c: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08013020: 00f00f00   and       r0, r0, #0xf
08013024: 0023       movs      r3, #0
08013026: 1a46       mov       r2, r3
08013028: 0146       mov       r1, r0
0801302a: 0990       str       r0, [sp, #0x24]
0801302c: 5520       movs      r0, #0x55
0801302e: fcf745fa   bl        #0x800f4bc
08013032: 10e4       b         #0x8012856
08013034: 0120       movs      r0, #1
08013036: 10f051fa   bl        #0x80234dc
0801303a: 0a98       ldr       r0, [sp, #0x28]
0801303c: 8078       ldrb      r0, [r0, #2]
0801303e: 0128       cmp       r0, #1
08013040: 03d1       bne       #0x801304a
08013042: a949       ldr       r1, [pc, #0x2a4] ; [0x80132e8] = 0x20003198 
08013044: a1f85600   strh.w    r0, [r1, #0x56]
08013048: 03e0       b         #0x8013052
0801304a: 0020       movs      r0, #0
0801304c: a649       ldr       r1, [pc, #0x298] ; [0x80132e8] = 0x20003198 
0801304e: a1f85600   strh.w    r0, [r1, #0x56]
08013052: 0020       movs      r0, #0
08013054: 0090       str       r0, [sp]
08013056: 0190       str       r0, [sp, #4]
08013058: 0290       str       r0, [sp, #8]
0801305a: 0390       str       r0, [sp, #0xc]
0801305c: a248       ldr       r0, [pc, #0x288] ; [0x80132e8] = 0x20003198 
0801305e: b0f85600   ldrh.w    r0, [r0, #0x56]
08013062: 00b2       sxth      r0, r0
08013064: 0023       movs      r3, #0
08013066: 1a46       mov       r2, r3
08013068: 0146       mov       r1, r0
0801306a: 0990       str       r0, [sp, #0x24]
0801306c: 5820       movs      r0, #0x58
0801306e: fcf725fa   bl        #0x800f4bc
08013072: 0120       movs      r0, #1
08013074: 9d49       ldr       r1, [pc, #0x274] ; [0x80132ec] = 0x200030bc TotalVoltage
08013076: 81f8c700   strb.w    r0, [r1, #0xc7]
0801307a: 38e4       b         #0x80128ee
0801307c: 0120       movs      r0, #1
0801307e: 10f02dfa   bl        #0x80234dc
08013082: 0020       movs      r0, #0
08013084: 0090       str       r0, [sp]
08013086: 0190       str       r0, [sp, #4]
08013088: 0290       str       r0, [sp, #8]
0801308a: 0390       str       r0, [sp, #0xc]
0801308c: 9648       ldr       r0, [pc, #0x258] ; [0x80132e8] = 0x20003198 
0801308e: b0f85600   ldrh.w    r0, [r0, #0x56]
08013092: 00b2       sxth      r0, r0
08013094: 0023       movs      r3, #0
08013096: 1a46       mov       r2, r3
08013098: 0146       mov       r1, r0
0801309a: 0990       str       r0, [sp, #0x24]
0801309c: 5820       movs      r0, #0x58
0801309e: fcf70dfa   bl        #0x800f4bc
080130a2: 24e4       b         #0x80128ee
080130a4: 0120       movs      r0, #1
080130a6: 10f019fa   bl        #0x80234dc
080130aa: 4ff44870   mov.w     r0, #0x320
080130ae: 8d49       ldr       r1, [pc, #0x234] ; [0x80132e4] = 0x2000087c 
080130b0: 0860       str       r0, [r1]
080130b2: 0a98       ldr       r0, [sp, #0x28]
080130b4: 8078       ldrb      r0, [r0, #2]
080130b6: 8c49       ldr       r1, [pc, #0x230] ; [0x80132e8] = 0x20003198 
080130b8: 81f88000   strb.w    r0, [r1, #0x80]
080130bc: 0a98       ldr       r0, [sp, #0x28]
080130be: c178       ldrb      r1, [r0, #3]
080130c0: 8948       ldr       r0, [pc, #0x224] ; [0x80132e8] = 0x20003198 
080130c2: 80f88110   strb.w    r1, [r0, #0x81]
080130c6: 0a98       ldr       r0, [sp, #0x28]
080130c8: 0179       ldrb      r1, [r0, #4]
080130ca: 8748       ldr       r0, [pc, #0x21c] ; [0x80132e8] = 0x20003198 
080130cc: 80f88210   strb.w    r1, [r0, #0x82]
080130d0: 0a98       ldr       r0, [sp, #0x28]
080130d2: 4079       ldrb      r0, [r0, #5]
080130d4: 8449       ldr       r1, [pc, #0x210] ; [0x80132e8] = 0x20003198 
080130d6: 81f88400   strb.w    r0, [r1, #0x84]
080130da: 0a98       ldr       r0, [sp, #0x28]
080130dc: 8179       ldrb      r1, [r0, #6]
080130de: 8248       ldr       r0, [pc, #0x208] ; [0x80132e8] = 0x20003198 
080130e0: 80f88510   strb.w    r1, [r0, #0x85]
080130e4: 0a98       ldr       r0, [sp, #0x28]
080130e6: c179       ldrb      r1, [r0, #7]
080130e8: 7f48       ldr       r0, [pc, #0x1fc] ; [0x80132e8] = 0x20003198 
080130ea: 80f88610   strb.w    r1, [r0, #0x86]
080130ee: 0a98       ldr       r0, [sp, #0x28]
080130f0: 007a       ldrb      r0, [r0, #8]
080130f2: 7d49       ldr       r1, [pc, #0x1f4] ; [0x80132e8] = 0x20003198 
080130f4: 81f88800   strb.w    r0, [r1, #0x88]
080130f8: 0a98       ldr       r0, [sp, #0x28]
080130fa: 417a       ldrb      r1, [r0, #9]
080130fc: 7a48       ldr       r0, [pc, #0x1e8] ; [0x80132e8] = 0x20003198 
080130fe: 80f88910   strb.w    r1, [r0, #0x89]
08013102: 0a98       ldr       r0, [sp, #0x28]
08013104: 817a       ldrb      r1, [r0, #0xa]
08013106: 7848       ldr       r0, [pc, #0x1e0] ; [0x80132e8] = 0x20003198 
08013108: 80f88a10   strb.w    r1, [r0, #0x8a]
0801310c: 0a98       ldr       r0, [sp, #0x28]
0801310e: c07a       ldrb      r0, [r0, #0xb]
08013110: 7549       ldr       r1, [pc, #0x1d4] ; [0x80132e8] = 0x20003198 
08013112: 81f88c00   strb.w    r0, [r1, #0x8c]
08013116: 0a98       ldr       r0, [sp, #0x28]
08013118: 017b       ldrb      r1, [r0, #0xc]
0801311a: 7348       ldr       r0, [pc, #0x1cc] ; [0x80132e8] = 0x20003198 
0801311c: 80f88d10   strb.w    r1, [r0, #0x8d]
08013120: 0a98       ldr       r0, [sp, #0x28]
08013122: 417b       ldrb      r1, [r0, #0xd]
08013124: 7048       ldr       r0, [pc, #0x1c0] ; [0x80132e8] = 0x20003198 
08013126: 80f88e10   strb.w    r1, [r0, #0x8e]
0801312a: 0023       movs      r3, #0
0801312c: 0a98       ldr       r0, [sp, #0x28]
0801312e: 017b       ldrb      r1, [r0, #0xc]
08013130: 407b       ldrb      r0, [r0, #0xd]
08013132: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013136: 00b2       sxth      r0, r0
08013138: 0a99       ldr       r1, [sp, #0x28]
0801313a: 8a7a       ldrb      r2, [r1, #0xa]
0801313c: c97a       ldrb      r1, [r1, #0xb]
0801313e: 42ea0121   orr.w     r1, r2, r1, lsl #8
08013142: 09b2       sxth      r1, r1
08013144: 0a9a       ldr       r2, [sp, #0x28]
08013146: 147a       ldrb      r4, [r2, #8]
08013148: 527a       ldrb      r2, [r2, #9]
0801314a: 44ea0222   orr.w     r2, r4, r2, lsl #8
0801314e: 12b2       sxth      r2, r2
08013150: cde90203   strd      r0, r3, [sp, #8]
08013154: cde90021   strd      r2, r1, [sp]
08013158: 0a98       ldr       r0, [sp, #0x28]
0801315a: 8179       ldrb      r1, [r0, #6]
0801315c: c079       ldrb      r0, [r0, #7]
0801315e: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013162: 00b2       sxth      r0, r0
08013164: 0990       str       r0, [sp, #0x24]
08013166: 0a98       ldr       r0, [sp, #0x28]
08013168: 0179       ldrb      r1, [r0, #4]
0801316a: 4079       ldrb      r0, [r0, #5]
0801316c: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013170: 00b2       sxth      r0, r0
08013172: 0890       str       r0, [sp, #0x20]
08013174: 0a98       ldr       r0, [sp, #0x28]
08013176: 8178       ldrb      r1, [r0, #2]
08013178: c078       ldrb      r0, [r0, #3]
0801317a: 41ea0020   orr.w     r0, r1, r0, lsl #8
0801317e: 00b2       sxth      r0, r0
08013180: 0790       str       r0, [sp, #0x1c]
08013182: 0146       mov       r1, r0
08013184: 5c20       movs      r0, #0x5c
08013186: dde90823   ldrd      r2, r3, [sp, #0x20]
0801318a: fcf797f9   bl        #0x800f4bc
0801318e: 0120       movs      r0, #1
08013190: 5649       ldr       r1, [pc, #0x158] ; [0x80132ec] = 0x200030bc TotalVoltage
08013192: 81f8c700   strb.w    r0, [r1, #0xc7]
08013196: 2ee4       b         #0x80129f6
08013198: 0120       movs      r0, #1
0801319a: 10f09ff9   bl        #0x80234dc
0801319e: 5248       ldr       r0, [pc, #0x148] ; [0x80132e8] = 0x20003198 
080131a0: 90f88000   ldrb.w    r0, [r0, #0x80]
080131a4: 8df81c00   strb.w    r0, [sp, #0x1c]
080131a8: 4f48       ldr       r0, [pc, #0x13c] ; [0x80132e8] = 0x20003198 
080131aa: 90f88100   ldrb.w    r0, [r0, #0x81]
080131ae: 8df81d00   strb.w    r0, [sp, #0x1d]
080131b2: 4d48       ldr       r0, [pc, #0x134] ; [0x80132e8] = 0x20003198 
080131b4: 90f88200   ldrb.w    r0, [r0, #0x82]
080131b8: 8df81e00   strb.w    r0, [sp, #0x1e]
080131bc: 4a48       ldr       r0, [pc, #0x128] ; [0x80132e8] = 0x20003198 
080131be: 90f88400   ldrb.w    r0, [r0, #0x84]
080131c2: 8df81f00   strb.w    r0, [sp, #0x1f]
080131c6: 4848       ldr       r0, [pc, #0x120] ; [0x80132e8] = 0x20003198 
080131c8: 90f88500   ldrb.w    r0, [r0, #0x85]
080131cc: 8df82000   strb.w    r0, [sp, #0x20]
080131d0: 4548       ldr       r0, [pc, #0x114] ; [0x80132e8] = 0x20003198 
080131d2: 90f88600   ldrb.w    r0, [r0, #0x86]
080131d6: 8df82100   strb.w    r0, [sp, #0x21]
080131da: 4348       ldr       r0, [pc, #0x10c] ; [0x80132e8] = 0x20003198 
080131dc: 90f88800   ldrb.w    r0, [r0, #0x88]
080131e0: 8df82200   strb.w    r0, [sp, #0x22]
080131e4: 4048       ldr       r0, [pc, #0x100] ; [0x80132e8] = 0x20003198 
080131e6: 90f88900   ldrb.w    r0, [r0, #0x89]
080131ea: 8df82300   strb.w    r0, [sp, #0x23]
080131ee: 3e48       ldr       r0, [pc, #0xf8] ; [0x80132e8] = 0x20003198 
080131f0: 90f88a00   ldrb.w    r0, [r0, #0x8a]
080131f4: 8df82400   strb.w    r0, [sp, #0x24]
080131f8: 3b48       ldr       r0, [pc, #0xec] ; [0x80132e8] = 0x20003198 
080131fa: 90f88c00   ldrb.w    r0, [r0, #0x8c]
080131fe: 8df82500   strb.w    r0, [sp, #0x25]
08013202: 3948       ldr       r0, [pc, #0xe4] ; [0x80132e8] = 0x20003198 
08013204: 90f88d00   ldrb.w    r0, [r0, #0x8d]
08013208: 8df82600   strb.w    r0, [sp, #0x26]
0801320c: 3648       ldr       r0, [pc, #0xd8] ; [0x80132e8] = 0x20003198 
0801320e: 90f88e00   ldrb.w    r0, [r0, #0x8e]
08013212: 8df82700   strb.w    r0, [sp, #0x27]
08013216: 0023       movs      r3, #0
08013218: 9df82600   ldrb.w    r0, [sp, #0x26]
0801321c: 9df82710   ldrb.w    r1, [sp, #0x27]
08013220: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013224: 00b2       sxth      r0, r0
08013226: 9df82410   ldrb.w    r1, [sp, #0x24]
0801322a: 9df82520   ldrb.w    r2, [sp, #0x25]
0801322e: 41ea0221   orr.w     r1, r1, r2, lsl #8
08013232: 09b2       sxth      r1, r1
08013234: 9df82220   ldrb.w    r2, [sp, #0x22]
08013238: 9df82340   ldrb.w    r4, [sp, #0x23]
0801323c: 42ea0422   orr.w     r2, r2, r4, lsl #8
08013240: 12b2       sxth      r2, r2
08013242: cde90203   strd      r0, r3, [sp, #8]
08013246: cde90021   strd      r2, r1, [sp]
0801324a: 9df82000   ldrb.w    r0, [sp, #0x20]
0801324e: 9df82110   ldrb.w    r1, [sp, #0x21]
08013252: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013256: 00b2       sxth      r0, r0
08013258: 0690       str       r0, [sp, #0x18]
0801325a: 9df81e00   ldrb.w    r0, [sp, #0x1e]
0801325e: 9df81f10   ldrb.w    r1, [sp, #0x1f]
08013262: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013266: 00b2       sxth      r0, r0
08013268: 0590       str       r0, [sp, #0x14]
0801326a: 9df81c00   ldrb.w    r0, [sp, #0x1c]
0801326e: 9df81d10   ldrb.w    r1, [sp, #0x1d]
08013272: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013276: 00b2       sxth      r0, r0
08013278: 0490       str       r0, [sp, #0x10]
0801327a: 0146       mov       r1, r0
0801327c: 5c20       movs      r0, #0x5c
0801327e: dde90523   ldrd      r2, r3, [sp, #0x14]
08013282: fcf71bf9   bl        #0x800f4bc
08013286: 22e4       b         #0x8012ace
08013288: 0120       movs      r0, #1
0801328a: 10f027f9   bl        #0x80234dc
0801328e: 0a98       ldr       r0, [sp, #0x28]
08013290: 8078       ldrb      r0, [r0, #2]
08013292: 0128       cmp       r0, #1
08013294: 03d1       bne       #0x801329e
08013296: 1449       ldr       r1, [pc, #0x50] ; [0x80132e8] = 0x20003198 
08013298: a1f89000   strh.w    r0, [r1, #0x90]
0801329c: 08e0       b         #0x80132b0
0801329e: 0a98       ldr       r0, [sp, #0x28]
080132a0: 07f0f4ff   bl        #0x801b28c
080132a4: 0128       cmp       r0, #1
080132a6: 03d1       bne       #0x80132b0
080132a8: 0020       movs      r0, #0
080132aa: 0f49       ldr       r1, [pc, #0x3c] ; [0x80132e8] = 0x20003198 
080132ac: a1f89000   strh.w    r0, [r1, #0x90]
080132b0: 0d48       ldr       r0, [pc, #0x34] ; [0x80132e8] = 0x20003198 
080132b2: b0f89000   ldrh.w    r0, [r0, #0x90]
080132b6: 08b9       cbnz      r0, #0x80132bc
080132b8: 0120       movs      r0, #1
080132ba: 00e0       b         #0x80132be
080132bc: 0020       movs      r0, #0
080132be: 0d49       ldr       r1, [pc, #0x34] ; [0x80132f4] = 0x20000644 
080132c0: 0870       strb      r0, [r1]
080132c2: 0020       movs      r0, #0
080132c4: 0090       str       r0, [sp]
080132c6: 0190       str       r0, [sp, #4]
080132c8: 0290       str       r0, [sp, #8]
080132ca: 0390       str       r0, [sp, #0xc]
080132cc: 0648       ldr       r0, [pc, #0x18] ; [0x80132e8] = 0x20003198 
080132ce: b0f89000   ldrh.w    r0, [r0, #0x90]
080132d2: 00b2       sxth      r0, r0
080132d4: 0023       movs      r3, #0
080132d6: 1a46       mov       r2, r3
080132d8: 0146       mov       r1, r0
080132da: 0990       str       r0, [sp, #0x24]
080132dc: 5f20       movs      r0, #0x5f
080132de: fcf7edf8   bl        #0x800f4bc
080132e2: 09e0       b         #0x80132f8
080132f8: 0120       movs      r0, #1
080132fa: fe49       ldr       r1, [pc, #0x3f8] ; [0x80136f4] = 0x200030bc TotalVoltage
080132fc: 81f8c700   strb.w    r0, [r1, #0xc7]
08013300: 74e2       b         #0x80137ec
08013302: 0120       movs      r0, #1
08013304: 10f0eaf8   bl        #0x80234dc
08013308: 0a98       ldr       r0, [sp, #0x28]
0801330a: 07f0bfff   bl        #0x801b28c
0801330e: 0128       cmp       r0, #1
08013310: 01d1       bne       #0x8013316
08013312: f949       ldr       r1, [pc, #0x3e4] ; [0x80136f8] = 0x20000644 
08013314: 0870       strb      r0, [r1]
08013316: 69e2       b         #0x80137ec
08013318: 0cf0a6f8   bl        #0x801f468
0801331c: f748       ldr       r0, [pc, #0x3dc] ; [0x80136fc] = 0x2000097a 
0801331e: 0078       ldrb      r0, [r0]
08013320: 3030       adds      r0, #0x30
08013322: f649       ldr       r1, [pc, #0x3d8] ; [0x80136fc] = 0x2000097a 
08013324: 4978       ldrb      r1, [r1, #1]
08013326: 3031       adds      r1, #0x30
08013328: 40ea0120   orr.w     r0, r0, r1, lsl #8
0801332c: 80b2       uxth      r0, r0
0801332e: adf82000   strh.w    r0, [sp, #0x20]
08013332: f248       ldr       r0, [pc, #0x3c8] ; [0x80136fc] = 0x2000097a 
08013334: 8078       ldrb      r0, [r0, #2]
08013336: 3030       adds      r0, #0x30
08013338: f049       ldr       r1, [pc, #0x3c0] ; [0x80136fc] = 0x2000097a 
0801333a: c978       ldrb      r1, [r1, #3]
0801333c: 3031       adds      r1, #0x30
0801333e: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013342: 80b2       uxth      r0, r0
08013344: adf82200   strh.w    r0, [sp, #0x22]
08013348: ec48       ldr       r0, [pc, #0x3b0] ; [0x80136fc] = 0x2000097a 
0801334a: 0079       ldrb      r0, [r0, #4]
0801334c: 3030       adds      r0, #0x30
0801334e: eb49       ldr       r1, [pc, #0x3ac] ; [0x80136fc] = 0x2000097a 
08013350: 4979       ldrb      r1, [r1, #5]
08013352: 3031       adds      r1, #0x30
08013354: 40ea0120   orr.w     r0, r0, r1, lsl #8
08013358: 80b2       uxth      r0, r0
0801335a: adf82400   strh.w    r0, [sp, #0x24]
0801335e: 0120       movs      r0, #1
08013360: 10f0bcf8   bl        #0x80234dc
08013364: 0021       movs      r1, #0
08013366: bdf82400   ldrh.w    r0, [sp, #0x24]
0801336a: 00b2       sxth      r0, r0
0801336c: cde90001   strd      r0, r1, [sp]
08013370: 0291       str       r1, [sp, #8]
08013372: 0391       str       r1, [sp, #0xc]
08013374: bdf82200   ldrh.w    r0, [sp, #0x22]
08013378: 00b2       sxth      r0, r0
0801337a: 0790       str       r0, [sp, #0x1c]
0801337c: bdf82000   ldrh.w    r0, [sp, #0x20]
08013380: 00b2       sxth      r0, r0
08013382: 0690       str       r0, [sp, #0x18]
08013384: de48       ldr       r0, [pc, #0x378] ; [0x8013700] = 0x20003198 
08013386: b0f89000   ldrh.w    r0, [r0, #0x90]
0801338a: 00b2       sxth      r0, r0
0801338c: 0590       str       r0, [sp, #0x14]
0801338e: 0146       mov       r1, r0
08013390: 5f20       movs      r0, #0x5f
08013392: dde90623   ldrd      r2, r3, [sp, #0x18]
08013396: fcf791f8   bl        #0x800f4bc
0801339a: c4e3       b         #0x8013b26
0801339c: 0120       movs      r0, #1
0801339e: 0990       str       r0, [sp, #0x24]
080133a0: d748       ldr       r0, [pc, #0x35c] ; [0x8013700] = 0x20003198 
080133a2: 90f89200   ldrb.w    r0, [r0, #0x92]
080133a6: ff28       cmp       r0, #0xff
080133a8: 26d0       beq       #0x80133f8
080133aa: d548       ldr       r0, [pc, #0x354] ; [0x8013700] = 0x20003198 
080133ac: 90f89300   ldrb.w    r0, [r0, #0x93]
080133b0: ff28       cmp       r0, #0xff
080133b2: 21d0       beq       #0x80133f8
080133b4: d248       ldr       r0, [pc, #0x348] ; [0x8013700] = 0x20003198 
080133b6: 90f89400   ldrb.w    r0, [r0, #0x94]
080133ba: ff28       cmp       r0, #0xff
080133bc: 1cd0       beq       #0x80133f8
080133be: d048       ldr       r0, [pc, #0x340] ; [0x8013700] = 0x20003198 
080133c0: 90f89500   ldrb.w    r0, [r0, #0x95]
080133c4: ff28       cmp       r0, #0xff
080133c6: 17d0       beq       #0x80133f8
080133c8: 0020       movs      r0, #0
080133ca: 0890       str       r0, [sp, #0x20]
080133cc: 0fe0       b         #0x80133ee
080133ce: cc48       ldr       r0, [pc, #0x330] ; [0x8013700] = 0x20003198 
080133d0: 9230       adds      r0, #0x92
080133d2: 0899       ldr       r1, [sp, #0x20]
080133d4: 425c       ldrb      r2, [r0, r1]
080133d6: 0898       ldr       r0, [sp, #0x20]
080133d8: 801d       adds      r0, r0, #6
080133da: 0a99       ldr       r1, [sp, #0x28]
080133dc: 085c       ldrb      r0, [r1, r0]
080133de: 8242       cmp       r2, r0
080133e0: 02d0       beq       #0x80133e8
080133e2: 0020       movs      r0, #0
080133e4: 0990       str       r0, [sp, #0x24]
080133e6: 05e0       b         #0x80133f4
080133e8: 0898       ldr       r0, [sp, #0x20]
080133ea: 401c       adds      r0, r0, #1
080133ec: 0890       str       r0, [sp, #0x20]
080133ee: 0898       ldr       r0, [sp, #0x20]
080133f0: 0428       cmp       r0, #4
080133f2: ecdb       blt       #0x80133ce
080133f4: 00bf       nop       
080133f6: 00bf       nop       
080133f8: 0998       ldr       r0, [sp, #0x24]
080133fa: 0128       cmp       r0, #1
080133fc: 36d1       bne       #0x801346c
080133fe: 10f06df8   bl        #0x80234dc
08013402: 0a98       ldr       r0, [sp, #0x28]
08013404: 8078       ldrb      r0, [r0, #2]
08013406: be49       ldr       r1, [pc, #0x2f8] ; [0x8013700] = 0x20003198 
08013408: 81f89200   strb.w    r0, [r1, #0x92]
0801340c: 0a98       ldr       r0, [sp, #0x28]
0801340e: c178       ldrb      r1, [r0, #3]
08013410: bb48       ldr       r0, [pc, #0x2ec] ; [0x8013700] = 0x20003198 
08013412: 80f89310   strb.w    r1, [r0, #0x93]
08013416: 0a98       ldr       r0, [sp, #0x28]
08013418: 0179       ldrb      r1, [r0, #4]
0801341a: b948       ldr       r0, [pc, #0x2e4] ; [0x8013700] = 0x20003198 
0801341c: 80f89410   strb.w    r1, [r0, #0x94]
08013420: 0a98       ldr       r0, [sp, #0x28]
08013422: 4179       ldrb      r1, [r0, #5]
08013424: b648       ldr       r0, [pc, #0x2d8] ; [0x8013700] = 0x20003198 
08013426: 80f89510   strb.w    r1, [r0, #0x95]
0801342a: 0022       movs      r2, #0
0801342c: 0092       str       r2, [sp]
0801342e: 0192       str       r2, [sp, #4]
08013430: 0292       str       r2, [sp, #8]
08013432: 0392       str       r2, [sp, #0xc]
08013434: 90f89410   ldrb.w    r1, [r0, #0x94]
08013438: 90f89500   ldrb.w    r0, [r0, #0x95]
0801343c: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013440: 00b2       sxth      r0, r0
08013442: 0890       str       r0, [sp, #0x20]
08013444: ae48       ldr       r0, [pc, #0x2b8] ; [0x8013700] = 0x20003198 
08013446: 90f89210   ldrb.w    r1, [r0, #0x92]
0801344a: 90f89300   ldrb.w    r0, [r0, #0x93]
0801344e: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013452: 00b2       sxth      r0, r0
08013454: 0790       str       r0, [sp, #0x1c]
08013456: 0998       ldr       r0, [sp, #0x24]
08013458: 03b2       sxth      r3, r0
0801345a: 4320       movs      r0, #0x43
0801345c: dde90712   ldrd      r1, r2, [sp, #0x1c]
08013460: fcf72cf8   bl        #0x800f4bc
08013464: 0120       movs      r0, #1
08013466: a349       ldr       r1, [pc, #0x28c] ; [0x80136f4] = 0x200030bc TotalVoltage
08013468: 81f8c700   strb.w    r0, [r1, #0xc7]
0801346c: 5be3       b         #0x8013b26
0801346e: a448       ldr       r0, [pc, #0x290] ; [0x8013700] = 0x20003198 
08013470: 90f89200   ldrb.w    r0, [r0, #0x92]
08013474: ff28       cmp       r0, #0xff
08013476: 7cd0       beq       #0x8013572
08013478: a148       ldr       r0, [pc, #0x284] ; [0x8013700] = 0x20003198 
0801347a: 90f89300   ldrb.w    r0, [r0, #0x93]
0801347e: ff28       cmp       r0, #0xff
08013480: 77d0       beq       #0x8013572
08013482: 9f48       ldr       r0, [pc, #0x27c] ; [0x8013700] = 0x20003198 
08013484: 90f89400   ldrb.w    r0, [r0, #0x94]
08013488: ff28       cmp       r0, #0xff
0801348a: 72d0       beq       #0x8013572
0801348c: 9c48       ldr       r0, [pc, #0x270] ; [0x8013700] = 0x20003198 
0801348e: 90f89500   ldrb.w    r0, [r0, #0x95]
08013492: ff28       cmp       r0, #0xff
08013494: 6dd0       beq       #0x8013572
08013496: 0120       movs      r0, #1
08013498: 0990       str       r0, [sp, #0x24]
0801349a: 0020       movs      r0, #0
0801349c: 0890       str       r0, [sp, #0x20]
0801349e: 0fe0       b         #0x80134c0
080134a0: 9748       ldr       r0, [pc, #0x25c] ; [0x8013700] = 0x20003198 
080134a2: 9230       adds      r0, #0x92
080134a4: 0899       ldr       r1, [sp, #0x20]
080134a6: 425c       ldrb      r2, [r0, r1]
080134a8: 0898       ldr       r0, [sp, #0x20]
080134aa: 801c       adds      r0, r0, #2
080134ac: 0a99       ldr       r1, [sp, #0x28]
080134ae: 085c       ldrb      r0, [r1, r0]
080134b0: 8242       cmp       r2, r0
080134b2: 02d0       beq       #0x80134ba
080134b4: 0020       movs      r0, #0
080134b6: 0990       str       r0, [sp, #0x24]
080134b8: 05e0       b         #0x80134c6
080134ba: 0898       ldr       r0, [sp, #0x20]
080134bc: 401c       adds      r0, r0, #1
080134be: 0890       str       r0, [sp, #0x20]
080134c0: 0898       ldr       r0, [sp, #0x20]
080134c2: 0428       cmp       r0, #4
080134c4: ecdb       blt       #0x80134a0
080134c6: 00bf       nop       
080134c8: 0998       ldr       r0, [sp, #0x24]
080134ca: 78bb       cbnz      r0, #0x801352c
080134cc: 0120       movs      r0, #1
080134ce: 0990       str       r0, [sp, #0x24]
080134d0: 0020       movs      r0, #0
080134d2: 0890       str       r0, [sp, #0x20]
080134d4: 0fe0       b         #0x80134f6
080134d6: 8a48       ldr       r0, [pc, #0x228] ; [0x8013700] = 0x20003198 
080134d8: 6230       adds      r0, #0x62
080134da: 0899       ldr       r1, [sp, #0x20]
080134dc: 425c       ldrb      r2, [r0, r1]
080134de: 0898       ldr       r0, [sp, #0x20]
080134e0: 801c       adds      r0, r0, #2
080134e2: 0a99       ldr       r1, [sp, #0x28]
080134e4: 085c       ldrb      r0, [r1, r0]
080134e6: 8242       cmp       r2, r0
080134e8: 02d0       beq       #0x80134f0
080134ea: 0020       movs      r0, #0
080134ec: 0990       str       r0, [sp, #0x24]
080134ee: 05e0       b         #0x80134fc
080134f0: 0898       ldr       r0, [sp, #0x20]
080134f2: 401c       adds      r0, r0, #1
080134f4: 0890       str       r0, [sp, #0x20]
080134f6: 0898       ldr       r0, [sp, #0x20]
080134f8: 0e28       cmp       r0, #0xe
080134fa: ecdb       blt       #0x80134d6
080134fc: 00bf       nop       
080134fe: 0e20       movs      r0, #0xe
08013500: 0890       str       r0, [sp, #0x20]
08013502: 0fe0       b         #0x8013524
08013504: 7e48       ldr       r0, [pc, #0x1f8] ; [0x8013700] = 0x20003198 
08013506: 6230       adds      r0, #0x62
08013508: 0899       ldr       r1, [sp, #0x20]
0801350a: 425c       ldrb      r2, [r0, r1]
0801350c: 0898       ldr       r0, [sp, #0x20]
0801350e: c01c       adds      r0, r0, #3
08013510: 0a99       ldr       r1, [sp, #0x28]
08013512: 085c       ldrb      r0, [r1, r0]
08013514: 8242       cmp       r2, r0
08013516: 02d0       beq       #0x801351e
08013518: 0020       movs      r0, #0
0801351a: 0990       str       r0, [sp, #0x24]
0801351c: 05e0       b         #0x801352a
0801351e: 0898       ldr       r0, [sp, #0x20]
08013520: 401c       adds      r0, r0, #1
08013522: 0890       str       r0, [sp, #0x20]
08013524: 0898       ldr       r0, [sp, #0x20]
08013526: 1128       cmp       r0, #0x11
08013528: ecdb       blt       #0x8013504
0801352a: 00bf       nop       
0801352c: 0998       ldr       r0, [sp, #0x24]
0801352e: 0128       cmp       r0, #1
08013530: 31d1       bne       #0x8013596
08013532: 0ff0d3ff   bl        #0x80234dc
08013536: ff20       movs      r0, #0xff
08013538: 7149       ldr       r1, [pc, #0x1c4] ; [0x8013700] = 0x20003198 
0801353a: 81f89200   strb.w    r0, [r1, #0x92]
0801353e: ff21       movs      r1, #0xff
08013540: 6f48       ldr       r0, [pc, #0x1bc] ; [0x8013700] = 0x20003198 
08013542: 80f89310   strb.w    r1, [r0, #0x93]
08013546: 80f89410   strb.w    r1, [r0, #0x94]
0801354a: 80f89510   strb.w    r1, [r0, #0x95]
0801354e: 0020       movs      r0, #0
08013550: 0090       str       r0, [sp]
08013552: 0190       str       r0, [sp, #4]
08013554: 0290       str       r0, [sp, #8]
08013556: 0390       str       r0, [sp, #0xc]
08013558: 6948       ldr       r0, [pc, #0x1a4] ; [0x8013700] = 0x20003198 
0801355a: 90f89410   ldrb.w    r1, [r0, #0x94]
0801355e: 90f89500   ldrb.w    r0, [r0, #0x95]
08013562: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013566: 00b2       sxth      r0, r0
08013568: 0790       str       r0, [sp, #0x1c]
0801356a: 6548       ldr       r0, [pc, #0x194] ; [0x8013700] = 0x20003198 
0801356c: 90f89210   ldrb.w    r1, [r0, #0x92]
08013570: 00e0       b         #0x8013574
08013572: 11e0       b         #0x8013598
08013574: 90f89300   ldrb.w    r0, [r0, #0x93]
08013578: 41ea0020   orr.w     r0, r1, r0, lsl #8
0801357c: 00b2       sxth      r0, r0
0801357e: 0690       str       r0, [sp, #0x18]
08013580: 0998       ldr       r0, [sp, #0x24]
08013582: 03b2       sxth      r3, r0
08013584: 4320       movs      r0, #0x43
08013586: dde90612   ldrd      r1, r2, [sp, #0x18]
0801358a: fbf797ff   bl        #0x800f4bc
0801358e: 0120       movs      r0, #1
08013590: 5849       ldr       r1, [pc, #0x160] ; [0x80136f4] = 0x200030bc TotalVoltage
08013592: 81f8c700   strb.w    r0, [r1, #0xc7]
08013596: 00bf       nop       
08013598: c5e2       b         #0x8013b26
0801359a: 0120       movs      r0, #1
0801359c: 0ff09eff   bl        #0x80234dc
080135a0: 0020       movs      r0, #0
080135a2: 0090       str       r0, [sp]
080135a4: 0190       str       r0, [sp, #4]
080135a6: 0290       str       r0, [sp, #8]
080135a8: 0346       mov       r3, r0
080135aa: 0246       mov       r2, r0
080135ac: 0390       str       r0, [sp, #0xc]
080135ae: 5548       ldr       r0, [pc, #0x154] ; [0x8013704] = 0x20000981 
080135b0: 0178       ldrb      r1, [r0]
080135b2: 4620       movs      r0, #0x46
080135b4: fbf782ff   bl        #0x800f4bc
080135b8: b5e2       b         #0x8013b26
080135ba: 0a98       ldr       r0, [sp, #0x28]
080135bc: 8078       ldrb      r0, [r0, #2]
080135be: 78b9       cbnz      r0, #0x80135e0
080135c0: 4c48       ldr       r0, [pc, #0x130] ; [0x80136f4] = 0x200030bc TotalVoltage
080135c2: 90f8cc00   ldrb.w    r0, [r0, #0xcc]
080135c6: 0028       cmp       r0, #0
080135c8: 0add       ble       #0x80135e0
080135ca: 4a48       ldr       r0, [pc, #0x128] ; [0x80136f4] = 0x200030bc TotalVoltage
080135cc: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080135d0: 0128       cmp       r0, #1
080135d2: 05d1       bne       #0x80135e0
080135d4: 0ff082ff   bl        #0x80234dc
080135d8: 0821       movs      r1, #8
080135da: 4648       ldr       r0, [pc, #0x118] ; [0x80136f4] = 0x200030bc TotalVoltage
080135dc: 80f8cc10   strb.w    r1, [r0, #0xcc]
080135e0: a1e2       b         #0x8013b26
080135e2: 0a98       ldr       r0, [sp, #0x28]
080135e4: 8078       ldrb      r0, [r0, #2]
080135e6: 98b9       cbnz      r0, #0x8013610
080135e8: 0020       movs      r0, #0
080135ea: 0090       str       r0, [sp]
080135ec: 0190       str       r0, [sp, #4]
080135ee: 0290       str       r0, [sp, #8]
080135f0: 0390       str       r0, [sp, #0xc]
080135f2: 4348       ldr       r0, [pc, #0x10c] ; [0x8013700] = 0x20003198 
080135f4: b0f8a000   ldrh.w    r0, [r0, #0xa0]
080135f8: 00b2       sxth      r0, r0
080135fa: 0023       movs      r3, #0
080135fc: 0246       mov       r2, r0
080135fe: 1946       mov       r1, r3
08013600: 0990       str       r0, [sp, #0x24]
08013602: 3f20       movs      r0, #0x3f
08013604: fbf75aff   bl        #0x800f4bc
08013608: 0120       movs      r0, #1
0801360a: 0ff067ff   bl        #0x80234dc
0801360e: 4be0       b         #0x80136a8
08013610: 0a98       ldr       r0, [sp, #0x28]
08013612: 8078       ldrb      r0, [r0, #2]
08013614: 0128       cmp       r0, #1
08013616: 47d1       bne       #0x80136a8
08013618: 0a98       ldr       r0, [sp, #0x28]
0801361a: 0179       ldrb      r1, [r0, #4]
0801361c: 4079       ldrb      r0, [r0, #5]
0801361e: 01eb0020   add.w     r0, r1, r0, lsl #8
08013622: 80b2       uxth      r0, r0
08013624: 0990       str       r0, [sp, #0x24]
08013626: 0120       movs      r0, #1
08013628: 0ff058ff   bl        #0x80234dc
0801362c: 3449       ldr       r1, [pc, #0xd0] ; [0x8013700] = 0x20003198 
0801362e: 0998       ldr       r0, [sp, #0x24]
08013630: a1f8a000   strh.w    r0, [r1, #0xa0]
08013634: 0846       mov       r0, r1
08013636: b0f8a000   ldrh.w    r0, [r0, #0xa0]
0801363a: 0028       cmp       r0, #0
0801363c: 1bdd       ble       #0x8013676
0801363e: 0846       mov       r0, r1
08013640: b0f8a000   ldrh.w    r0, [r0, #0xa0]
08013644: 3c28       cmp       r0, #0x3c
08013646: 03da       bge       #0x8013650
08013648: 3c21       movs      r1, #0x3c
0801364a: 2d48       ldr       r0, [pc, #0xb4] ; [0x8013700] = 0x20003198 
0801364c: a0f8a010   strh.w    r1, [r0, #0xa0]
08013650: 2b48       ldr       r0, [pc, #0xac] ; [0x8013700] = 0x20003198 
08013652: b0f8a000   ldrh.w    r0, [r0, #0xa0]
08013656: b0f5615f   cmp.w     r0, #0x3840
0801365a: 04dd       ble       #0x8013666
0801365c: 4ff46150   mov.w     r0, #0x3840
08013660: 2749       ldr       r1, [pc, #0x9c] ; [0x8013700] = 0x20003198 
08013662: a1f8a000   strh.w    r0, [r1, #0xa0]
08013666: 2648       ldr       r0, [pc, #0x98] ; [0x8013700] = 0x20003198 
08013668: b0f8a000   ldrh.w    r0, [r0, #0xa0]
0801366c: 3221       movs      r1, #0x32
0801366e: 4843       muls      r0, r1, r0
08013670: 2049       ldr       r1, [pc, #0x80] ; [0x80136f4] = 0x200030bc TotalVoltage
08013672: 0864       str       r0, [r1, #0x40]
08013674: 03e0       b         #0x801367e
08013676: 47f23050   movw      r0, #0x7530
0801367a: 1e49       ldr       r1, [pc, #0x78] ; [0x80136f4] = 0x200030bc TotalVoltage
0801367c: 0864       str       r0, [r1, #0x40]
0801367e: 0020       movs      r0, #0
08013680: 0090       str       r0, [sp]
08013682: 0190       str       r0, [sp, #4]
08013684: 0290       str       r0, [sp, #8]
08013686: 0390       str       r0, [sp, #0xc]
08013688: 1d48       ldr       r0, [pc, #0x74] ; [0x8013700] = 0x20003198 
0801368a: b0f8a000   ldrh.w    r0, [r0, #0xa0]
0801368e: 00b2       sxth      r0, r0
08013690: 0023       movs      r3, #0
08013692: 0246       mov       r2, r0
08013694: 0121       movs      r1, #1
08013696: 0890       str       r0, [sp, #0x20]
08013698: 3f20       movs      r0, #0x3f
0801369a: fbf70fff   bl        #0x800f4bc
0801369e: 0120       movs      r0, #1
080136a0: 1449       ldr       r1, [pc, #0x50] ; [0x80136f4] = 0x200030bc TotalVoltage
080136a2: 81f8c700   strb.w    r0, [r1, #0xc7]
080136a6: 00bf       nop       
080136a8: 3de2       b         #0x8013b26
080136aa: 0a98       ldr       r0, [sp, #0x28]
080136ac: 407c       ldrb      r0, [r0, #0x11]
080136ae: 38b1       cbz       r0, #0x80136c0
080136b0: 0a98       ldr       r0, [sp, #0x28]
080136b2: 407c       ldrb      r0, [r0, #0x11]
080136b4: 1428       cmp       r0, #0x14
080136b6: 03d0       beq       #0x80136c0
080136b8: 0a98       ldr       r0, [sp, #0x28]
080136ba: 407c       ldrb      r0, [r0, #0x11]
080136bc: 1528       cmp       r0, #0x15
080136be: 06d1       bne       #0x80136ce
080136c0: 0c48       ldr       r0, [pc, #0x30] ; [0x80136f4] = 0x200030bc TotalVoltage
080136c2: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080136c6: a0b1       cbz       r0, #0x80136f2
080136c8: 0cf06af9   bl        #0x801f9a0
080136cc: 11e0       b         #0x80136f2
080136ce: 0a98       ldr       r0, [sp, #0x28]
080136d0: 407c       ldrb      r0, [r0, #0x11]
080136d2: 4128       cmp       r0, #0x41
080136d4: 03d0       beq       #0x80136de
080136d6: 0a98       ldr       r0, [sp, #0x28]
080136d8: 407c       ldrb      r0, [r0, #0x11]
080136da: 4228       cmp       r0, #0x42
080136dc: 09d1       bne       #0x80136f2
080136de: 1422       movs      r2, #0x14
080136e0: 09a1       adr       r1, #0x24
080136e2: 05a8       add       r0, sp, #0x14
080136e4: f4f71bff   bl        #0x800851e
080136e8: 1421       movs      r1, #0x14
080136ea: 05a8       add       r0, sp, #0x14
080136ec: fcf754fa   bl        #0x800fb98
080136f0: 00bf       nop       
080136f2: 18e2       b         #0x8013b26
0801371c: 0bf004fd   bl        #0x801f128
08013720: 0790       str       r0, [sp, #0x1c]
08013722: 0bf0f5fc   bl        #0x801f110
08013726: 0690       str       r0, [sp, #0x18]
08013728: 0a98       ldr       r0, [sp, #0x28]
0801372a: 8078       ldrb      r0, [r0, #2]
0801372c: 0990       str       r0, [sp, #0x24]
0801372e: 0020       movs      r0, #0
08013730: 0890       str       r0, [sp, #0x20]
08013732: f748       ldr       r0, [pc, #0x3dc] ; [0x8013b10] = 0x200030bc TotalVoltage
08013734: 90f8bf00   ldrb.w    r0, [r0, #0xbf]
08013738: 78bb       cbnz      r0, #0x801379a
0801373a: f548       ldr       r0, [pc, #0x3d4] ; [0x8013b10] = 0x200030bc TotalVoltage
0801373c: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08013740: 28b3       cbz       r0, #0x801378e
08013742: 0798       ldr       r0, [sp, #0x1c]
08013744: 0490       str       r0, [sp, #0x10]
08013746: 0028       cmp       r0, #0
08013748: 01db       blt       #0x801374e
0801374a: 0498       ldr       r0, [sp, #0x10]
0801374c: 01e0       b         #0x8013752
0801374e: 0498       ldr       r0, [sp, #0x10]
08013750: 4042       rsbs      r0, r0, #0
08013752: b0f5383f   cmp.w     r0, #0x2e000
08013756: 0adc       bgt       #0x801376e
08013758: 0698       ldr       r0, [sp, #0x18]
0801375a: 0590       str       r0, [sp, #0x14]
0801375c: 0028       cmp       r0, #0
0801375e: 01db       blt       #0x8013764
08013760: 0598       ldr       r0, [sp, #0x14]
08013762: 01e0       b         #0x8013768
08013764: 0598       ldr       r0, [sp, #0x14]
08013766: 4042       rsbs      r0, r0, #0
08013768: b0f5842f   cmp.w     r0, #0x42000
0801376c: 0fdd       ble       #0x801378e
0801376e: 0998       ldr       r0, [sp, #0x24]
08013770: 0128       cmp       r0, #1
08013772: 0cd1       bne       #0x801378e
08013774: e648       ldr       r0, [pc, #0x398] ; [0x8013b10] = 0x200030bc TotalVoltage
08013776: 90f8be00   ldrb.w    r0, [r0, #0xbe]
0801377a: 40b9       cbnz      r0, #0x801378e
0801377c: 0120       movs      r0, #1
0801377e: 0ff053fb   bl        #0x8022e28
08013782: 0120       movs      r0, #1
08013784: 0ff0aafe   bl        #0x80234dc
08013788: 0120       movs      r0, #1
0801378a: 0890       str       r0, [sp, #0x20]
0801378c: 23e0       b         #0x80137d6
0801378e: 0320       movs      r0, #3
08013790: 0ff0a4fe   bl        #0x80234dc
08013794: 0020       movs      r0, #0
08013796: 0990       str       r0, [sp, #0x24]
08013798: 1de0       b         #0x80137d6
0801379a: ffe7       b         #0x801379c
0801379c: 0998       ldr       r0, [sp, #0x24]
0801379e: 90b1       cbz       r0, #0x80137c6
080137a0: db48       ldr       r0, [pc, #0x36c] ; [0x8013b10] = 0x200030bc TotalVoltage
080137a2: 90f8c900   ldrb.w    r0, [r0, #0xc9]
080137a6: 40b1       cbz       r0, #0x80137ba
080137a8: 0120       movs      r0, #1
080137aa: 0ff03dfb   bl        #0x8022e28
080137ae: 0120       movs      r0, #1
080137b0: 0ff094fe   bl        #0x80234dc
080137b4: 0120       movs      r0, #1
080137b6: 0890       str       r0, [sp, #0x20]
080137b8: 0de0       b         #0x80137d6
080137ba: 0320       movs      r0, #3
080137bc: 0ff08efe   bl        #0x80234dc
080137c0: 0020       movs      r0, #0
080137c2: 0990       str       r0, [sp, #0x24]
080137c4: 07e0       b         #0x80137d6
080137c6: 0220       movs      r0, #2
080137c8: 0ff02efb   bl        #0x8022e28
080137cc: 0220       movs      r0, #2
080137ce: 0ff085fe   bl        #0x80234dc
080137d2: 0120       movs      r0, #1
080137d4: 0890       str       r0, [sp, #0x20]
080137d6: 0020       movs      r0, #0
080137d8: 0090       str       r0, [sp]
080137da: 0190       str       r0, [sp, #4]
080137dc: 0290       str       r0, [sp, #8]
080137de: 0346       mov       r3, r0
080137e0: 0246       mov       r2, r0
080137e2: 0390       str       r0, [sp, #0xc]
080137e4: 4820       movs      r0, #0x48
080137e6: 0999       ldr       r1, [sp, #0x24]
080137e8: fbf768fe   bl        #0x800f4bc
080137ec: 9be1       b         #0x8013b26
080137ee: 0020       movs      r0, #0
080137f0: 0090       str       r0, [sp]
080137f2: 0190       str       r0, [sp, #4]
080137f4: 0290       str       r0, [sp, #8]
080137f6: 0390       str       r0, [sp, #0xc]
080137f8: c648       ldr       r0, [pc, #0x318] ; [0x8013b14] = 0x20003198 
080137fa: b0f8a400   ldrh.w    r0, [r0, #0xa4]
080137fe: 00b2       sxth      r0, r0
08013800: 0023       movs      r3, #0
08013802: 1a46       mov       r2, r3
08013804: 0146       mov       r1, r0
08013806: 0990       str       r0, [sp, #0x24]
08013808: 4a20       movs      r0, #0x4a
0801380a: fbf757fe   bl        #0x800f4bc
0801380e: 0120       movs      r0, #1
08013810: 0ff064fe   bl        #0x80234dc
08013814: 0121       movs      r1, #1
08013816: be48       ldr       r0, [pc, #0x2f8] ; [0x8013b10] = 0x200030bc TotalVoltage
08013818: 80f8c710   strb.w    r1, [r0, #0xc7]
0801381c: 83e1       b         #0x8013b26
0801381e: 0a98       ldr       r0, [sp, #0x28]
08013820: 8078       ldrb      r0, [r0, #2]
08013822: bc49       ldr       r1, [pc, #0x2f0] ; [0x8013b14] = 0x20003198 
08013824: a1f8a200   strh.w    r0, [r1, #0xa2]
08013828: 0020       movs      r0, #0
0801382a: 0090       str       r0, [sp]
0801382c: 0190       str       r0, [sp, #4]
0801382e: 0290       str       r0, [sp, #8]
08013830: 0390       str       r0, [sp, #0xc]
08013832: 0846       mov       r0, r1
08013834: b0f8a200   ldrh.w    r0, [r0, #0xa2]
08013838: 00b2       sxth      r0, r0
0801383a: 0023       movs      r3, #0
0801383c: 1a46       mov       r2, r3
0801383e: 0146       mov       r1, r0
08013840: 0990       str       r0, [sp, #0x24]
08013842: 4c20       movs      r0, #0x4c
08013844: fbf73afe   bl        #0x800f4bc
08013848: 0120       movs      r0, #1
0801384a: 0ff047fe   bl        #0x80234dc
0801384e: 0120       movs      r0, #1
08013850: af49       ldr       r1, [pc, #0x2bc] ; [0x8013b10] = 0x200030bc TotalVoltage
08013852: 81f8c700   strb.w    r0, [r1, #0xc7]
08013856: 66e1       b         #0x8013b26
08013858: 65e1       b         #0x8013b26
0801385a: 0120       movs      r0, #1
0801385c: 0ff03efe   bl        #0x80234dc
08013860: 0020       movs      r0, #0
08013862: 0090       str       r0, [sp]
08013864: 0190       str       r0, [sp, #4]
08013866: 0290       str       r0, [sp, #8]
08013868: 0390       str       r0, [sp, #0xc]
0801386a: aa48       ldr       r0, [pc, #0x2a8] ; [0x8013b14] = 0x20003198 
0801386c: b0f8a400   ldrh.w    r0, [r0, #0xa4]
08013870: 00b2       sxth      r0, r0
08013872: 0023       movs      r3, #0
08013874: 1a46       mov       r2, r3
08013876: 0146       mov       r1, r0
08013878: 0990       str       r0, [sp, #0x24]
0801387a: 4a20       movs      r0, #0x4a
0801387c: fbf71efe   bl        #0x800f4bc
08013880: 51e1       b         #0x8013b26
08013882: 0120       movs      r0, #1
08013884: 0ff02afe   bl        #0x80234dc
08013888: 0020       movs      r0, #0
0801388a: 0090       str       r0, [sp]
0801388c: 0190       str       r0, [sp, #4]
0801388e: 0290       str       r0, [sp, #8]
08013890: 0390       str       r0, [sp, #0xc]
08013892: a048       ldr       r0, [pc, #0x280] ; [0x8013b14] = 0x20003198 
08013894: b0f8a200   ldrh.w    r0, [r0, #0xa2]
08013898: 00b2       sxth      r0, r0
0801389a: 0023       movs      r3, #0
0801389c: 1a46       mov       r2, r3
0801389e: 0146       mov       r1, r0
080138a0: 0990       str       r0, [sp, #0x24]
080138a2: 4c20       movs      r0, #0x4c
080138a4: fbf70afe   bl        #0x800f4bc
080138a8: 3de1       b         #0x8013b26
080138aa: 0120       movs      r0, #1
080138ac: 0ff016fe   bl        #0x80234dc
080138b0: 0020       movs      r0, #0
080138b2: 0990       str       r0, [sp, #0x24]
080138b4: 0be0       b         #0x80138ce
080138b6: dde90901   ldrd      r0, r1, [sp, #0x24]
080138ba: 801c       adds      r0, r0, #2
080138bc: 0a5c       ldrb      r2, [r1, r0]
080138be: 9548       ldr       r0, [pc, #0x254] ; [0x8013b14] = 0x20003198 
080138c0: a630       adds      r0, #0xa6
080138c2: 0999       ldr       r1, [sp, #0x24]
080138c4: 4254       strb      r2, [r0, r1]
080138c6: 0998       ldr       r0, [sp, #0x24]
080138c8: 401c       adds      r0, r0, #1
080138ca: c0b2       uxtb      r0, r0
080138cc: 0990       str       r0, [sp, #0x24]
080138ce: 0998       ldr       r0, [sp, #0x24]
080138d0: 0628       cmp       r0, #6
080138d2: f0db       blt       #0x80138b6
080138d4: 0022       movs      r2, #0
080138d6: 0092       str       r2, [sp]
080138d8: 0192       str       r2, [sp, #4]
080138da: 0292       str       r2, [sp, #8]
080138dc: 0392       str       r2, [sp, #0xc]
080138de: 0a98       ldr       r0, [sp, #0x28]
080138e0: 8179       ldrb      r1, [r0, #6]
080138e2: c079       ldrb      r0, [r0, #7]
080138e4: 41ea0020   orr.w     r0, r1, r0, lsl #8
080138e8: 00b2       sxth      r0, r0
080138ea: 0890       str       r0, [sp, #0x20]
080138ec: 0a98       ldr       r0, [sp, #0x28]
080138ee: 0179       ldrb      r1, [r0, #4]
080138f0: 4079       ldrb      r0, [r0, #5]
080138f2: 41ea0020   orr.w     r0, r1, r0, lsl #8
080138f6: 00b2       sxth      r0, r0
080138f8: 0790       str       r0, [sp, #0x1c]
080138fa: 0a98       ldr       r0, [sp, #0x28]
080138fc: 8178       ldrb      r1, [r0, #2]
080138fe: c078       ldrb      r0, [r0, #3]
08013900: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013904: 00b2       sxth      r0, r0
08013906: 0690       str       r0, [sp, #0x18]
08013908: 0146       mov       r1, r0
0801390a: e720       movs      r0, #0xe7
0801390c: dde90723   ldrd      r2, r3, [sp, #0x1c]
08013910: fbf7d4fd   bl        #0x800f4bc
08013914: 0120       movs      r0, #1
08013916: 7e49       ldr       r1, [pc, #0x1f8] ; [0x8013b10] = 0x200030bc TotalVoltage
08013918: 81f8c700   strb.w    r0, [r1, #0xc7]
0801391c: 03e1       b         #0x8013b26
0801391e: 0120       movs      r0, #1
08013920: 0ff0dcfd   bl        #0x80234dc
08013924: 0020       movs      r0, #0
08013926: 0090       str       r0, [sp]
08013928: 0190       str       r0, [sp, #4]
0801392a: 0290       str       r0, [sp, #8]
0801392c: 0390       str       r0, [sp, #0xc]
0801392e: 7948       ldr       r0, [pc, #0x1e4] ; [0x8013b14] = 0x20003198 
08013930: 90f8aa10   ldrb.w    r1, [r0, #0xaa]
08013934: 90f8ab00   ldrb.w    r0, [r0, #0xab]
08013938: 41ea0020   orr.w     r0, r1, r0, lsl #8
0801393c: 00b2       sxth      r0, r0
0801393e: 0990       str       r0, [sp, #0x24]
08013940: 7448       ldr       r0, [pc, #0x1d0] ; [0x8013b14] = 0x20003198 
08013942: 90f8a810   ldrb.w    r1, [r0, #0xa8]
08013946: 90f8a900   ldrb.w    r0, [r0, #0xa9]
0801394a: 41ea0020   orr.w     r0, r1, r0, lsl #8
0801394e: 00b2       sxth      r0, r0
08013950: 0890       str       r0, [sp, #0x20]
08013952: 7048       ldr       r0, [pc, #0x1c0] ; [0x8013b14] = 0x20003198 
08013954: 90f8a610   ldrb.w    r1, [r0, #0xa6]
08013958: 90f8a700   ldrb.w    r0, [r0, #0xa7]
0801395c: 41ea0020   orr.w     r0, r1, r0, lsl #8
08013960: 00b2       sxth      r0, r0
08013962: 0790       str       r0, [sp, #0x1c]
08013964: 0146       mov       r1, r0
08013966: e720       movs      r0, #0xe7
08013968: dde90823   ldrd      r2, r3, [sp, #0x20]
0801396c: fbf7a6fd   bl        #0x800f4bc
08013970: d9e0       b         #0x8013b26
08013972: 0a98       ldr       r0, [sp, #0x28]
08013974: 8078       ldrb      r0, [r0, #2]
08013976: ff28       cmp       r0, #0xff
08013978: 03d1       bne       #0x8013982
0801397a: 1120       movs      r0, #0x11
0801397c: 6649       ldr       r1, [pc, #0x198] ; [0x8013b18] = 0x200006ac 
0801397e: 0860       str       r0, [r1]
08013980: 1ce0       b         #0x80139bc
08013982: 0a98       ldr       r0, [sp, #0x28]
08013984: c078       ldrb      r0, [r0, #3]
08013986: ff28       cmp       r0, #0xff
08013988: 03d1       bne       #0x8013992
0801398a: 1220       movs      r0, #0x12
0801398c: 6249       ldr       r1, [pc, #0x188] ; [0x8013b18] = 0x200006ac 
0801398e: 0860       str       r0, [r1]
08013990: 14e0       b         #0x80139bc
08013992: 0a98       ldr       r0, [sp, #0x28]
08013994: 0079       ldrb      r0, [r0, #4]
08013996: ff28       cmp       r0, #0xff
08013998: 06d1       bne       #0x80139a8
0801399a: 1320       movs      r0, #0x13
0801399c: 5e49       ldr       r1, [pc, #0x178] ; [0x8013b18] = 0x200006ac 
0801399e: 0860       str       r0, [r1]
080139a0: 0120       movs      r0, #1
080139a2: 0ff09bfd   bl        #0x80234dc
080139a6: 09e0       b         #0x80139bc
080139a8: 0a98       ldr       r0, [sp, #0x28]
080139aa: 4079       ldrb      r0, [r0, #5]
080139ac: ff28       cmp       r0, #0xff
080139ae: 05d1       bne       #0x80139bc
080139b0: 1420       movs      r0, #0x14
080139b2: 5949       ldr       r1, [pc, #0x164] ; [0x8013b18] = 0x200006ac 
080139b4: 0860       str       r0, [r1]
080139b6: 0120       movs      r0, #1
080139b8: 0ff090fd   bl        #0x80234dc
080139bc: b3e0       b         #0x8013b26
080139be: 0120       movs      r0, #1
080139c0: 0ff08cfd   bl        #0x80234dc
080139c4: 0021       movs      r1, #0
080139c6: 0091       str       r1, [sp]
080139c8: 0191       str       r1, [sp, #4]
080139ca: 0291       str       r1, [sp, #8]
080139cc: 5148       ldr       r0, [pc, #0x144] ; [0x8013b14] = 0x20003198 
080139ce: 0391       str       r1, [sp, #0xc]
080139d0: b0f8ac00   ldrh.w    r0, [r0, #0xac]
080139d4: 00b2       sxth      r0, r0
080139d6: 0b46       mov       r3, r1
080139d8: 0a46       mov       r2, r1
080139da: 0146       mov       r1, r0
080139dc: 0990       str       r0, [sp, #0x24]
080139de: 4d20       movs      r0, #0x4d
080139e0: fbf76cfd   bl        #0x800f4bc
080139e4: 9fe0       b         #0x8013b26
080139e6: 0120       movs      r0, #1
080139e8: 0ff078fd   bl        #0x80234dc
080139ec: 0a98       ldr       r0, [sp, #0x28]
080139ee: 8078       ldrb      r0, [r0, #2]
080139f0: 4849       ldr       r1, [pc, #0x120] ; [0x8013b14] = 0x20003198 
080139f2: a1f8ac00   strh.w    r0, [r1, #0xac]
080139f6: 0021       movs      r1, #0
080139f8: 0091       str       r1, [sp]
080139fa: 0191       str       r1, [sp, #4]
080139fc: 0291       str       r1, [sp, #8]
080139fe: 4548       ldr       r0, [pc, #0x114] ; [0x8013b14] = 0x20003198 
08013a00: 0391       str       r1, [sp, #0xc]
08013a02: b0f8ac00   ldrh.w    r0, [r0, #0xac]
08013a06: 00b2       sxth      r0, r0
08013a08: 0b46       mov       r3, r1
08013a0a: 0a46       mov       r2, r1
08013a0c: 0146       mov       r1, r0
08013a0e: 0990       str       r0, [sp, #0x24]
08013a10: 4d20       movs      r0, #0x4d
08013a12: fbf753fd   bl        #0x800f4bc
08013a16: 0120       movs      r0, #1
08013a18: 3d49       ldr       r1, [pc, #0xf4] ; [0x8013b10] = 0x200030bc TotalVoltage
08013a1a: 81f8c700   strb.w    r0, [r1, #0xc7]
08013a1e: 82e0       b         #0x8013b26
08013a20: 00bf       nop       
08013a22: 3b48       ldr       r0, [pc, #0xec] ; [0x8013b10] = 0x200030bc TotalVoltage
08013a24: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08013a28: 0128       cmp       r0, #1
08013a2a: 02d1       bne       #0x8013a32
08013a2c: 0a98       ldr       r0, [sp, #0x28]
08013a2e: 04f03bfe   bl        #0x80186a8
08013a32: 78e0       b         #0x8013b26
08013a34: 00bf       nop       
08013a36: 3648       ldr       r0, [pc, #0xd8] ; [0x8013b10] = 0x200030bc TotalVoltage
08013a38: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08013a3c: 0128       cmp       r0, #1
08013a3e: 02d1       bne       #0x8013a46
08013a40: 0a98       ldr       r0, [sp, #0x28]
08013a42: 03f0d1fa   bl        #0x8016fe8
08013a46: 6ee0       b         #0x8013b26
08013a48: 00bf       nop       
08013a4a: 3148       ldr       r0, [pc, #0xc4] ; [0x8013b10] = 0x200030bc TotalVoltage
08013a4c: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08013a50: 0128       cmp       r0, #1
08013a52: 06d1       bne       #0x8013a62
08013a54: 0bf0fefc   bl        #0x801f454
08013a58: 0128       cmp       r0, #1
08013a5a: 02d1       bne       #0x8013a62
08013a5c: 0a98       ldr       r0, [sp, #0x28]
08013a5e: 04f081fd   bl        #0x8018564
08013a62: 60e0       b         #0x8013b26
08013a64: 2a48       ldr       r0, [pc, #0xa8] ; [0x8013b10] = 0x200030bc TotalVoltage
08013a66: 90f8c900   ldrb.w    r0, [r0, #0xc9]
08013a6a: 0128       cmp       r0, #1
08013a6c: 03d0       beq       #0x8013a76
08013a6e: 0a98       ldr       r0, [sp, #0x28]
08013a70: 407c       ldrb      r0, [r0, #0x11]
08013a72: 1028       cmp       r0, #0x10
08013a74: 08d0       beq       #0x8013a88
08013a76: 0bf0edfc   bl        #0x801f454
08013a7a: 0128       cmp       r0, #1
08013a7c: 04d1       bne       #0x8013a88
08013a7e: dde90a01   ldrd      r0, r1, [sp, #0x28]
08013a82: 02f0c5ff   bl        #0x8016a10
08013a86: 32e0       b         #0x8013aee
08013a88: 1421       movs      r1, #0x14
08013a8a: 05a8       add       r0, sp, #0x14
08013a8c: f4f779fd   bl        #0x8008582
08013a90: aa20       movs      r0, #0xaa
08013a92: 8df81400   strb.w    r0, [sp, #0x14]
08013a96: 5520       movs      r0, #0x55
08013a98: 8df81500   strb.w    r0, [sp, #0x15]
08013a9c: 0120       movs      r0, #1
08013a9e: 8df81600   strb.w    r0, [sp, #0x16]
08013aa2: 0020       movs      r0, #0
08013aa4: 8df81700   strb.w    r0, [sp, #0x17]
08013aa8: 8df81800   strb.w    r0, [sp, #0x18]
08013aac: 8df81900   strb.w    r0, [sp, #0x19]
08013ab0: 8df82200   strb.w    r0, [sp, #0x22]
08013ab4: 8df82300   strb.w    r0, [sp, #0x23]
08013ab8: 7a20       movs      r0, #0x7a
08013aba: 8df82400   strb.w    r0, [sp, #0x24]
08013abe: ee20       movs      r0, #0xee
08013ac0: 8df82500   strb.w    r0, [sp, #0x25]
08013ac4: 1021       movs      r1, #0x10
08013ac6: 0df11600   add.w     r0, sp, #0x16
08013aca: 02f02df9   bl        #0x8015d28
08013ace: 0490       str       r0, [sp, #0x10]
08013ad0: 0498       ldr       r0, [sp, #0x10]
08013ad2: 0012       asrs      r0, r0, #8
08013ad4: 8df82600   strb.w    r0, [sp, #0x26]
08013ad8: 0498       ldr       r0, [sp, #0x10]
08013ada: c0b2       uxtb      r0, r0
08013adc: 8df82700   strb.w    r0, [sp, #0x27]
08013ae0: 05a8       add       r0, sp, #0x14
08013ae2: fbf7a9fd   bl        #0x800f638
08013ae6: 0320       movs      r0, #3
08013ae8: 0ff0f8fc   bl        #0x80234dc
08013aec: 00bf       nop       
08013aee: 1ae0       b         #0x8013b26
08013af0: 00bf       nop       
08013af2: 0a98       ldr       r0, [sp, #0x28]
08013af4: 04f0b6ff   bl        #0x8018a64
08013af8: 15e0       b         #0x8013b26
08013afa: 00bf       nop       
08013afc: 0a98       ldr       r0, [sp, #0x28]
08013afe: 03f02dff   bl        #0x801795c
08013b02: 10e0       b         #0x8013b26
08013b04: 00bf       nop       
08013b06: 0a98       ldr       r0, [sp, #0x28]
08013b08: 05f079fb   bl        #0x80191fe
08013b0c: 0be0       b         #0x8013b26
08013b1c: 0a98       ldr       r0, [sp, #0x28]
08013b1e: 07f0f9f8   bl        #0x801ad14
08013b22: 00e0       b         #0x8013b26
08013b24: 00bf       nop       
08013b26: 00bf       nop       
08013b28: 00bf       nop       
08013b2a: fef74eba   b.w       #0x8011fca
