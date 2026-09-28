08010618: 00b5       push      {lr}
0801061a: 8db0       sub       sp, #0x34
0801061c: 0121       movs      r1, #1
0801061e: 0c20       movs      r0, #0xc
08010620: fef776fb   bl        #0x800ed10
08010624: 6846       mov       r0, sp
08010626: fbf766fa   bl        #0x800baf6
0801062a: 4ff4e060   mov.w     r0, #0x700
0801062e: adf80000   strh.w    r0, [sp]
08010632: 1820       movs      r0, #0x18
08010634: 8df80300   strb.w    r0, [sp, #3]
08010638: 0320       movs      r0, #3
0801063a: 8df80200   strb.w    r0, [sp, #2]
0801063e: 6946       mov       r1, sp
08010640: 6f48       ldr       r0, [pc, #0x1bc] ; [0x8010800] = 0x40010800 
08010642: fbf7b7f9   bl        #0x800b9b4
08010646: 6846       mov       r0, sp
08010648: fbf755fa   bl        #0x800baf6
0801064c: 4ff46040   mov.w     r0, #0xe000
08010650: adf80000   strh.w    r0, [sp]
08010654: 1020       movs      r0, #0x10
08010656: 8df80300   strb.w    r0, [sp, #3]
0801065a: 0320       movs      r0, #3
0801065c: 8df80200   strb.w    r0, [sp, #2]
08010660: 6946       mov       r1, sp
08010662: 6848       ldr       r0, [pc, #0x1a0] ; [0x8010804] = 0x40010c00 
08010664: fbf7a6f9   bl        #0x800b9b4
08010668: 4ff40051   mov.w     r1, #0x2000
0801066c: 6548       ldr       r0, [pc, #0x194] ; [0x8010804] = 0x40010c00 
0801066e: fbf73efa   bl        #0x800baee
08010672: 4ff40041   mov.w     r1, #0x8000
08010676: 6348       ldr       r0, [pc, #0x18c] ; [0x8010804] = 0x40010c00 
08010678: fbf739fa   bl        #0x800baee
0801067c: 4ff48041   mov.w     r1, #0x4000
08010680: 6048       ldr       r0, [pc, #0x180] ; [0x8010804] = 0x40010c00 
08010682: fbf734fa   bl        #0x800baee
08010686: 4ff4e061   mov.w     r1, #0x700
0801068a: 5d48       ldr       r0, [pc, #0x174] ; [0x8010800] = 0x40010800 
0801068c: fbf7e9f9   bl        #0x800ba62
08010690: 4ff46041   mov.w     r1, #0xe000
08010694: 5b48       ldr       r0, [pc, #0x16c] ; [0x8010804] = 0x40010c00 
08010696: fbf7e4f9   bl        #0x800ba62
0801069a: 0121       movs      r1, #1
0801069c: c802       lsls      r0, r1, #0xb
0801069e: fef737fb   bl        #0x800ed10
080106a2: 5948       ldr       r0, [pc, #0x164] ; [0x8010808] = 0x40012c00 
080106a4: 00f05cfa   bl        #0x8010b60
080106a8: 0aa8       add       r0, sp, #0x28
080106aa: 00f011fe   bl        #0x80112d0
080106ae: 0020       movs      r0, #0
080106b0: adf82800   strh.w    r0, [sp, #0x28]
080106b4: 2020       movs      r0, #0x20
080106b6: adf82a00   strh.w    r0, [sp, #0x2a]
080106ba: 40f6b830   movw      r0, #0xbb8
080106be: adf82c00   strh.w    r0, [sp, #0x2c]
080106c2: 4ff48070   mov.w     r0, #0x100
080106c6: adf82e00   strh.w    r0, [sp, #0x2e]
080106ca: 0120       movs      r0, #1
080106cc: 8df83000   strb.w    r0, [sp, #0x30]
080106d0: 0aa9       add       r1, sp, #0x28
080106d2: 4d48       ldr       r0, [pc, #0x134] ; [0x8010808] = 0x40012c00 
080106d4: 00f0aefd   bl        #0x8011234
080106d8: 06a8       add       r0, sp, #0x18
080106da: 00f053fd   bl        #0x8011184
080106de: 6020       movs      r0, #0x60
080106e0: adf81800   strh.w    r0, [sp, #0x18]
080106e4: 0120       movs      r0, #1
080106e6: adf81a00   strh.w    r0, [sp, #0x1a]
080106ea: 0020       movs      r0, #0
080106ec: adf81e00   strh.w    r0, [sp, #0x1e]
080106f0: adf82000   strh.w    r0, [sp, #0x20]
080106f4: adf82400   strh.w    r0, [sp, #0x24]
080106f8: 06a9       add       r1, sp, #0x18
080106fa: 4348       ldr       r0, [pc, #0x10c] ; [0x8010808] = 0x40012c00 
080106fc: 00f033fc   bl        #0x8010f66
08010700: 06a9       add       r1, sp, #0x18
08010702: 4148       ldr       r0, [pc, #0x104] ; [0x8010808] = 0x40012c00 
08010704: 00f077fc   bl        #0x8010ff6
08010708: 06a9       add       r1, sp, #0x18
0801070a: 3f48       ldr       r0, [pc, #0xfc] ; [0x8010808] = 0x40012c00 
0801070c: 00f0bbfc   bl        #0x8011086
08010710: 06a8       add       r0, sp, #0x18
08010712: 00f037fd   bl        #0x8011184
08010716: 7020       movs      r0, #0x70
08010718: adf81800   strh.w    r0, [sp, #0x18]
0801071c: 0120       movs      r0, #1
0801071e: adf81a00   strh.w    r0, [sp, #0x1a]
08010722: 0420       movs      r0, #4
08010724: adf81c00   strh.w    r0, [sp, #0x1c]
08010728: 40f6b730   movw      r0, #0xbb7
0801072c: adf81e00   strh.w    r0, [sp, #0x1e]
08010730: 0020       movs      r0, #0
08010732: adf82000   strh.w    r0, [sp, #0x20]
08010736: 0820       movs      r0, #8
08010738: adf82200   strh.w    r0, [sp, #0x22]
0801073c: 0020       movs      r0, #0
0801073e: adf82400   strh.w    r0, [sp, #0x24]
08010742: 4ff40070   mov.w     r0, #0x200
08010746: adf82600   strh.w    r0, [sp, #0x26]
0801074a: 06a9       add       r1, sp, #0x18
0801074c: 2e48       ldr       r0, [pc, #0xb8] ; [0x8010808] = 0x40012c00 
0801074e: 00f0e0fc   bl        #0x8011112
08010752: 0821       movs      r1, #8
08010754: 2c48       ldr       r0, [pc, #0xb0] ; [0x8010808] = 0x40012c00 
08010756: 00f048fc   bl        #0x8010fea
0801075a: 0821       movs      r1, #8
0801075c: 2a48       ldr       r0, [pc, #0xa8] ; [0x8010808] = 0x40012c00 
0801075e: 00f08bfc   bl        #0x8011078
08010762: 0821       movs      r1, #8
08010764: 2848       ldr       r0, [pc, #0xa0] ; [0x8010808] = 0x40012c00 
08010766: 00f0cefc   bl        #0x8011106
0801076a: 0821       movs      r1, #8
0801076c: 2648       ldr       r0, [pc, #0x98] ; [0x8010808] = 0x40012c00 
0801076e: 00f002fd   bl        #0x8011176
08010772: 4ff40060   mov.w     r0, #0x800
08010776: adf80800   strh.w    r0, [sp, #8]
0801077a: 4010       asrs      r0, r0, #1
0801077c: adf80a00   strh.w    r0, [sp, #0xa]
08010780: 8010       asrs      r0, r0, #2
08010782: adf80c00   strh.w    r0, [sp, #0xc]
08010786: 1520       movs      r0, #0x15
08010788: adf80e00   strh.w    r0, [sp, #0xe]
0801078c: 0020       movs      r0, #0
0801078e: adf81000   strh.w    r0, [sp, #0x10]
08010792: adf81200   strh.w    r0, [sp, #0x12]
08010796: adf81400   strh.w    r0, [sp, #0x14]
0801079a: 02a9       add       r1, sp, #8
0801079c: 1a48       ldr       r0, [pc, #0x68] ; [0x8010808] = 0x40012c00 
0801079e: 00f09af9   bl        #0x8010ad6
080107a2: 2021       movs      r1, #0x20
080107a4: 1848       ldr       r0, [pc, #0x60] ; [0x8010808] = 0x40012c00 
080107a6: 00f033fd   bl        #0x8011210
080107aa: 8021       movs      r1, #0x80
080107ac: 1648       ldr       r0, [pc, #0x58] ; [0x8010808] = 0x40012c00 
080107ae: 00f0b4f9   bl        #0x8010b1a
080107b2: 0122       movs      r2, #1
080107b4: 8021       movs      r1, #0x80
080107b6: 1448       ldr       r0, [pc, #0x50] ; [0x8010808] = 0x40012c00 
080107b8: 00f0c8fb   bl        #0x8010f4c
080107bc: 0121       movs      r1, #1
080107be: 1248       ldr       r0, [pc, #0x48] ; [0x8010808] = 0x40012c00 
080107c0: 00f0d6fa   bl        #0x8010d70
080107c4: 0121       movs      r1, #1
080107c6: 1048       ldr       r0, [pc, #0x40] ; [0x8010808] = 0x40012c00 
080107c8: 00f0a4f9   bl        #0x8010b14
080107cc: 0022       movs      r2, #0
080107ce: 0121       movs      r1, #1
080107d0: 0d48       ldr       r0, [pc, #0x34] ; [0x8010808] = 0x40012c00 
080107d2: 00f0bbfb   bl        #0x8010f4c
080107d6: 0022       movs      r2, #0
080107d8: 1021       movs      r1, #0x10
080107da: 0b48       ldr       r0, [pc, #0x2c] ; [0x8010808] = 0x40012c00 
080107dc: 00f0b6fb   bl        #0x8010f4c
080107e0: 1920       movs      r0, #0x19
080107e2: 8df80400   strb.w    r0, [sp, #4]
080107e6: 0020       movs      r0, #0
080107e8: 8df80500   strb.w    r0, [sp, #5]
080107ec: 8df80600   strb.w    r0, [sp, #6]
080107f0: 0120       movs      r0, #1
080107f2: 8df80700   strb.w    r0, [sp, #7]
080107f6: 01a8       add       r0, sp, #4
080107f8: fdf7cef8   bl        #0x800d998
080107fc: 0db0       add       sp, #0x34
080107fe: 00bd       pop       {pc}
