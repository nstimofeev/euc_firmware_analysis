0801b368: 10b5       push      {r4, lr}
0801b36a: fe48       ldr       r0, [pc, #0x3f8] ; [0x801b764] = 0x20000648 
0801b36c: 0078       ldrb      r0, [r0]
0801b36e: 0128       cmp       r0, #1
0801b370: 49d1       bne       #0x801b406
0801b372: fd48       ldr       r0, [pc, #0x3f4] ; [0x801b768] = 0x200034e8 
0801b374: c089       ldrh      r0, [r0, #0xe]
0801b376: fd49       ldr       r1, [pc, #0x3f4] ; [0x801b76c] = 0x2000064a 
0801b378: 0988       ldrh      r1, [r1]
0801b37a: c1eb2010   rsb       r0, r1, r0, asr #4
0801b37e: 00eb0010   add.w     r0, r0, r0, lsl #4
0801b382: 00b2       sxth      r0, r0
0801b384: fa49       ldr       r1, [pc, #0x3e8] ; [0x801b770] = 0x20000646 
0801b386: 0880       strh      r0, [r1]
0801b388: 0846       mov       r0, r1
0801b38a: b0f90000   ldrsh.w   r0, [r0]
0801b38e: f949       ldr       r1, [pc, #0x3e4] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b390: a1f8c400   strh.w    r0, [r1, #0xc4]
0801b394: f848       ldr       r0, [pc, #0x3e0] ; [0x801b778] = 0x2000066c 
0801b396: 0078       ldrb      r0, [r0]
0801b398: 0228       cmp       r0, #2
0801b39a: 34d1       bne       #0x801b406
0801b39c: f448       ldr       r0, [pc, #0x3d0] ; [0x801b770] = 0x20000646 
0801b39e: b0f90000   ldrsh.w   r0, [r0]
0801b3a2: 42f6e061   movw      r1, #0x2ee0
0801b3a6: 8842       cmp       r0, r1
0801b3a8: 20dd       ble       #0x801b3ec
0801b3aa: f448       ldr       r0, [pc, #0x3d0] ; [0x801b77c] = 0x20000660 
0801b3ac: 0068       ldr       r0, [r0]
0801b3ae: 3228       cmp       r0, #0x32
0801b3b0: 05d2       bhs       #0x801b3be
0801b3b2: f248       ldr       r0, [pc, #0x3c8] ; [0x801b77c] = 0x20000660 
0801b3b4: 0068       ldr       r0, [r0]
0801b3b6: 401c       adds      r0, r0, #1
0801b3b8: f049       ldr       r1, [pc, #0x3c0] ; [0x801b77c] = 0x20000660 
0801b3ba: 0860       str       r0, [r1]
0801b3bc: 23e0       b         #0x801b406
0801b3be: 0120       movs      r0, #1
0801b3c0: ef49       ldr       r1, [pc, #0x3bc] ; [0x801b780] = 0x422101b0 
0801b3c2: 0860       str       r0, [r1]
0801b3c4: 0221       movs      r1, #2
0801b3c6: ef48       ldr       r0, [pc, #0x3bc] ; [0x801b784] = 0x40011000 
0801b3c8: f0f793fb   bl        #0x800baf2
0801b3cc: 0120       movs      r0, #1
0801b3ce: ee49       ldr       r1, [pc, #0x3b8] ; [0x801b788] = 0x2000066d 
0801b3d0: 0870       strb      r0, [r1]
0801b3d2: ee48       ldr       r0, [pc, #0x3b8] ; [0x801b78c] = 0x20000670 
0801b3d4: 0078       ldrb      r0, [r0]
0801b3d6: 0a28       cmp       r0, #0xa
0801b3d8: 04da       bge       #0x801b3e4
0801b3da: ec48       ldr       r0, [pc, #0x3b0] ; [0x801b78c] = 0x20000670 
0801b3dc: 0078       ldrb      r0, [r0]
0801b3de: 401c       adds      r0, r0, #1
0801b3e0: ea49       ldr       r1, [pc, #0x3a8] ; [0x801b78c] = 0x20000670 
0801b3e2: 0870       strb      r0, [r1]
0801b3e4: 0520       movs      r0, #5
0801b3e6: e449       ldr       r1, [pc, #0x390] ; [0x801b778] = 0x2000066c 
0801b3e8: 0870       strb      r0, [r1]
0801b3ea: 0ce0       b         #0x801b406
0801b3ec: e348       ldr       r0, [pc, #0x38c] ; [0x801b77c] = 0x20000660 
0801b3ee: 0068       ldr       r0, [r0]
0801b3f0: 0a28       cmp       r0, #0xa
0801b3f2: 05d9       bls       #0x801b400
0801b3f4: e148       ldr       r0, [pc, #0x384] ; [0x801b77c] = 0x20000660 
0801b3f6: 0068       ldr       r0, [r0]
0801b3f8: 401e       subs      r0, r0, #1
0801b3fa: e049       ldr       r1, [pc, #0x380] ; [0x801b77c] = 0x20000660 
0801b3fc: 0860       str       r0, [r1]
0801b3fe: 02e0       b         #0x801b406
0801b400: 0020       movs      r0, #0
0801b402: e149       ldr       r1, [pc, #0x384] ; [0x801b788] = 0x2000066d 
0801b404: 0870       strb      r0, [r1]
0801b406: dc48       ldr       r0, [pc, #0x370] ; [0x801b778] = 0x2000066c 
0801b408: 0078       ldrb      r0, [r0]
0801b40a: da49       ldr       r1, [pc, #0x368] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b40c: 81f8c200   strb.w    r0, [r1, #0xc2]
0801b410: d948       ldr       r0, [pc, #0x364] ; [0x801b778] = 0x2000066c 
0801b412: 0078       ldrb      r0, [r0]
0801b414: 0b28       cmp       r0, #0xb
0801b416: 7dd2       bhs       #0x801b514
0801b418: dfe800f0   tbb       [pc, r0]
0801b428: d948       ldr       r0, [pc, #0x364] ; [0x801b790] = 0x2000068c 
0801b42a: 0088       ldrh      r0, [r0]
0801b42c: 3228       cmp       r0, #0x32
0801b42e: 05da       bge       #0x801b43c
0801b430: d748       ldr       r0, [pc, #0x35c] ; [0x801b790] = 0x2000068c 
0801b432: 0088       ldrh      r0, [r0]
0801b434: 401c       adds      r0, r0, #1
0801b436: d649       ldr       r1, [pc, #0x358] ; [0x801b790] = 0x2000068c 
0801b438: 0880       strh      r0, [r1]
0801b43a: 02e0       b         #0x801b442
0801b43c: 0120       movs      r0, #1
0801b43e: ce49       ldr       r1, [pc, #0x338] ; [0x801b778] = 0x2000066c 
0801b440: 0870       strb      r0, [r1]
0801b442: 2ce2       b         #0x801b89e
0801b444: d348       ldr       r0, [pc, #0x34c] ; [0x801b794] = 0x20000694 
0801b446: 0078       ldrb      r0, [r0]
0801b448: 401c       adds      r0, r0, #1
0801b44a: d249       ldr       r1, [pc, #0x348] ; [0x801b794] = 0x20000694 
0801b44c: 0870       strb      r0, [r1]
0801b44e: 0846       mov       r0, r1
0801b450: 0078       ldrb      r0, [r0]
0801b452: 1428       cmp       r0, #0x14
0801b454: 07da       bge       #0x801b466
0801b456: 0120       movs      r0, #1
0801b458: c949       ldr       r1, [pc, #0x324] ; [0x801b780] = 0x422101b0 
0801b45a: 0860       str       r0, [r1]
0801b45c: 0221       movs      r1, #2
0801b45e: c948       ldr       r0, [pc, #0x324] ; [0x801b784] = 0x40011000 
0801b460: f0f747fb   bl        #0x800baf2
0801b464: 2de0       b         #0x801b4c2
0801b466: cb48       ldr       r0, [pc, #0x32c] ; [0x801b794] = 0x20000694 
0801b468: 0078       ldrb      r0, [r0]
0801b46a: 2828       cmp       r0, #0x28
0801b46c: 08da       bge       #0x801b480
0801b46e: be48       ldr       r0, [pc, #0x2f8] ; [0x801b768] = 0x200034e8 
0801b470: c089       ldrh      r0, [r0, #0xe]
0801b472: c949       ldr       r1, [pc, #0x324] ; [0x801b798] = 0x20000690 
0801b474: 0968       ldr       r1, [r1]
0801b476: 01eb2010   add.w     r0, r1, r0, asr #4
0801b47a: c749       ldr       r1, [pc, #0x31c] ; [0x801b798] = 0x20000690 
0801b47c: 0860       str       r0, [r1]
0801b47e: 20e0       b         #0x801b4c2
0801b480: c548       ldr       r0, [pc, #0x314] ; [0x801b798] = 0x20000690 
0801b482: 0068       ldr       r0, [r0]
0801b484: 1421       movs      r1, #0x14
0801b486: b0fbf1f0   udiv      r0, r0, r1
0801b48a: b849       ldr       r1, [pc, #0x2e0] ; [0x801b76c] = 0x2000064a 
0801b48c: 0880       strh      r0, [r1]
0801b48e: 0846       mov       r0, r1
0801b490: 0088       ldrh      r0, [r0]
0801b492: 40f23a41   movw      r1, #0x43a
0801b496: 8842       cmp       r0, r1
0801b498: 05db       blt       #0x801b4a6
0801b49a: b448       ldr       r0, [pc, #0x2d0] ; [0x801b76c] = 0x2000064a 
0801b49c: 0088       ldrh      r0, [r0]
0801b49e: 40f6ae41   movw      r1, #0xcae
0801b4a2: 8842       cmp       r0, r1
0801b4a4: 03dd       ble       #0x801b4ae
0801b4a6: 0220       movs      r0, #2
0801b4a8: ae49       ldr       r1, [pc, #0x2b8] ; [0x801b764] = 0x20000648 
0801b4aa: 0870       strb      r0, [r1]
0801b4ac: 02e0       b         #0x801b4b4
0801b4ae: 0120       movs      r0, #1
0801b4b0: ac49       ldr       r1, [pc, #0x2b0] ; [0x801b764] = 0x20000648 
0801b4b2: 0870       strb      r0, [r1]
0801b4b4: 0221       movs      r1, #2
0801b4b6: b348       ldr       r0, [pc, #0x2cc] ; [0x801b784] = 0x40011000 
0801b4b8: f0f719fb   bl        #0x800baee
0801b4bc: 0220       movs      r0, #2
0801b4be: ae49       ldr       r1, [pc, #0x2b8] ; [0x801b778] = 0x2000066c 
0801b4c0: 0870       strb      r0, [r1]
0801b4c2: ece1       b         #0x801b89e
0801b4c4: ab48       ldr       r0, [pc, #0x2ac] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b4c6: 90f89600   ldrb.w    r0, [r0, #0x96]
0801b4ca: 0128       cmp       r0, #1
0801b4cc: 25d1       bne       #0x801b51a
0801b4ce: a948       ldr       r0, [pc, #0x2a4] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b4d0: 90f8bf00   ldrb.w    r0, [r0, #0xbf]
0801b4d4: 0128       cmp       r0, #1
0801b4d6: 20d1       bne       #0x801b51a
0801b4d8: a648       ldr       r0, [pc, #0x298] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b4da: 90f8c000   ldrb.w    r0, [r0, #0xc0]
0801b4de: e0b9       cbnz      r0, #0x801b51a
0801b4e0: ae48       ldr       r0, [pc, #0x2b8] ; [0x801b79c] = 0x20000668 
0801b4e2: 0068       ldr       r0, [r0]
0801b4e4: 6428       cmp       r0, #0x64
0801b4e6: 05d2       bhs       #0x801b4f4
0801b4e8: ac48       ldr       r0, [pc, #0x2b0] ; [0x801b79c] = 0x20000668 
0801b4ea: 0068       ldr       r0, [r0]
0801b4ec: 401c       adds      r0, r0, #1
0801b4ee: ab49       ldr       r1, [pc, #0x2ac] ; [0x801b79c] = 0x20000668 
0801b4f0: 0860       str       r0, [r1]
0801b4f2: 1be0       b         #0x801b52c
0801b4f4: 0020       movs      r0, #0
0801b4f6: aa49       ldr       r1, [pc, #0x2a8] ; [0x801b7a0] = 0x20000696 
0801b4f8: 0880       strh      r0, [r1]
0801b4fa: 0120       movs      r0, #1
0801b4fc: a049       ldr       r1, [pc, #0x280] ; [0x801b780] = 0x422101b0 
0801b4fe: 0860       str       r0, [r1]
0801b500: 0221       movs      r1, #2
0801b502: a048       ldr       r0, [pc, #0x280] ; [0x801b784] = 0x40011000 
0801b504: f0f7f5fa   bl        #0x800baf2
0801b508: 0020       movs      r0, #0
0801b50a: a649       ldr       r1, [pc, #0x298] ; [0x801b7a4] = 0x20000664 
0801b50c: 0860       str       r0, [r1]
0801b50e: 0620       movs      r0, #6
0801b510: 9949       ldr       r1, [pc, #0x264] ; [0x801b778] = 0x2000066c 
0801b512: 00e0       b         #0x801b516
0801b514: c2e1       b         #0x801b89c
0801b516: 0870       strb      r0, [r1]
0801b518: c1e1       b         #0x801b89e
0801b51a: a048       ldr       r0, [pc, #0x280] ; [0x801b79c] = 0x20000668 
0801b51c: 0068       ldr       r0, [r0]
0801b51e: 0a28       cmp       r0, #0xa
0801b520: 04d9       bls       #0x801b52c
0801b522: 9e48       ldr       r0, [pc, #0x278] ; [0x801b79c] = 0x20000668 
0801b524: 0068       ldr       r0, [r0]
0801b526: 0a38       subs      r0, #0xa
0801b528: 9c49       ldr       r1, [pc, #0x270] ; [0x801b79c] = 0x20000668 
0801b52a: 0860       str       r0, [r1]
0801b52c: 9148       ldr       r0, [pc, #0x244] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b52e: 90f89600   ldrb.w    r0, [r0, #0x96]
0801b532: 0128       cmp       r0, #1
0801b534: 21d1       bne       #0x801b57a
0801b536: 8f48       ldr       r0, [pc, #0x23c] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b538: 0068       ldr       r0, [r0]
0801b53a: 43f2ed01   movw      r1, #0x30ed
0801b53e: 8842       cmp       r0, r1
0801b540: 1bdd       ble       #0x801b57a
0801b542: 9948       ldr       r0, [pc, #0x264] ; [0x801b7a8] = 0x2000064c 
0801b544: 0068       ldr       r0, [r0]
0801b546: 9949       ldr       r1, [pc, #0x264] ; [0x801b7ac] = 0x420a4 
0801b548: 8842       cmp       r0, r1
0801b54a: 05d2       bhs       #0x801b558
0801b54c: 9648       ldr       r0, [pc, #0x258] ; [0x801b7a8] = 0x2000064c 
0801b54e: 0068       ldr       r0, [r0]
0801b550: 401c       adds      r0, r0, #1
0801b552: 9549       ldr       r1, [pc, #0x254] ; [0x801b7a8] = 0x2000064c 
0801b554: 0860       str       r0, [r1]
0801b556: 19e0       b         #0x801b58c
0801b558: 0020       movs      r0, #0
0801b55a: 9149       ldr       r1, [pc, #0x244] ; [0x801b7a0] = 0x20000696 
0801b55c: 0880       strh      r0, [r1]
0801b55e: 0120       movs      r0, #1
0801b560: 8749       ldr       r1, [pc, #0x21c] ; [0x801b780] = 0x422101b0 
0801b562: 0860       str       r0, [r1]
0801b564: 0221       movs      r1, #2
0801b566: 8748       ldr       r0, [pc, #0x21c] ; [0x801b784] = 0x40011000 
0801b568: f0f7c3fa   bl        #0x800baf2
0801b56c: 0020       movs      r0, #0
0801b56e: 8d49       ldr       r1, [pc, #0x234] ; [0x801b7a4] = 0x20000664 
0801b570: 0860       str       r0, [r1]
0801b572: 0320       movs      r0, #3
0801b574: 8049       ldr       r1, [pc, #0x200] ; [0x801b778] = 0x2000066c 
0801b576: 0870       strb      r0, [r1]
0801b578: 91e1       b         #0x801b89e
0801b57a: 8b48       ldr       r0, [pc, #0x22c] ; [0x801b7a8] = 0x2000064c 
0801b57c: 0068       ldr       r0, [r0]
0801b57e: 0a28       cmp       r0, #0xa
0801b580: 04d9       bls       #0x801b58c
0801b582: 8948       ldr       r0, [pc, #0x224] ; [0x801b7a8] = 0x2000064c 
0801b584: 0068       ldr       r0, [r0]
0801b586: 0a38       subs      r0, #0xa
0801b588: 8749       ldr       r1, [pc, #0x21c] ; [0x801b7a8] = 0x2000064c 
0801b58a: 0860       str       r0, [r1]
0801b58c: 7948       ldr       r0, [pc, #0x1e4] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b58e: 90f89600   ldrb.w    r0, [r0, #0x96]
0801b592: 0128       cmp       r0, #1
0801b594: 23d1       bne       #0x801b5de
0801b596: 7748       ldr       r0, [pc, #0x1dc] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b598: 0068       ldr       r0, [r0]
0801b59a: 43f26421   movw      r1, #0x3264
0801b59e: 8842       cmp       r0, r1
0801b5a0: 1ddd       ble       #0x801b5de
0801b5a2: 8348       ldr       r0, [pc, #0x20c] ; [0x801b7b0] = 0x20000650 
0801b5a4: 0068       ldr       r0, [r0]
0801b5a6: 1428       cmp       r0, #0x14
0801b5a8: 05d2       bhs       #0x801b5b6
0801b5aa: 8148       ldr       r0, [pc, #0x204] ; [0x801b7b0] = 0x20000650 
0801b5ac: 0068       ldr       r0, [r0]
0801b5ae: 401c       adds      r0, r0, #1
0801b5b0: 7f49       ldr       r1, [pc, #0x1fc] ; [0x801b7b0] = 0x20000650 
0801b5b2: 0860       str       r0, [r1]
0801b5b4: 1ce0       b         #0x801b5f0
0801b5b6: 0020       movs      r0, #0
0801b5b8: 7949       ldr       r1, [pc, #0x1e4] ; [0x801b7a0] = 0x20000696 
0801b5ba: 0880       strh      r0, [r1]
0801b5bc: 0120       movs      r0, #1
0801b5be: 7049       ldr       r1, [pc, #0x1c0] ; [0x801b780] = 0x422101b0 
0801b5c0: 0860       str       r0, [r1]
0801b5c2: 0221       movs      r1, #2
0801b5c4: 6f48       ldr       r0, [pc, #0x1bc] ; [0x801b784] = 0x40011000 
0801b5c6: f0f794fa   bl        #0x800baf2
0801b5ca: fa20       movs      r0, #0xfa
0801b5cc: 7949       ldr       r1, [pc, #0x1e4] ; [0x801b7b4] = 0x2000066e 
0801b5ce: 0870       strb      r0, [r1]
0801b5d0: 0020       movs      r0, #0
0801b5d2: 7449       ldr       r1, [pc, #0x1d0] ; [0x801b7a4] = 0x20000664 
0801b5d4: 0860       str       r0, [r1]
0801b5d6: 0420       movs      r0, #4
0801b5d8: 6749       ldr       r1, [pc, #0x19c] ; [0x801b778] = 0x2000066c 
0801b5da: 0870       strb      r0, [r1]
0801b5dc: 5fe1       b         #0x801b89e
0801b5de: 7448       ldr       r0, [pc, #0x1d0] ; [0x801b7b0] = 0x20000650 
0801b5e0: 0068       ldr       r0, [r0]
0801b5e2: 0a28       cmp       r0, #0xa
0801b5e4: 04d9       bls       #0x801b5f0
0801b5e6: 7248       ldr       r0, [pc, #0x1c8] ; [0x801b7b0] = 0x20000650 
0801b5e8: 0068       ldr       r0, [r0]
0801b5ea: 401e       subs      r0, r0, #1
0801b5ec: 7049       ldr       r1, [pc, #0x1c0] ; [0x801b7b0] = 0x20000650 
0801b5ee: 0860       str       r0, [r1]
0801b5f0: fcf712f9   bl        #0x8017818
0801b5f4: 0446       mov       r4, r0
0801b5f6: 5f48       ldr       r0, [pc, #0x17c] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b5f8: 90f89600   ldrb.w    r0, [r0, #0x96]
0801b5fc: 0128       cmp       r0, #1
0801b5fe: 37d1       bne       #0x801b670
0801b600: 5c48       ldr       r0, [pc, #0x170] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b602: 0068       ldr       r0, [r0]
0801b604: 6c49       ldr       r1, [pc, #0x1b0] ; [0x801b7b8] = 0x20000674 
0801b606: 0968       ldr       r1, [r1]
0801b608: 8842       cmp       r0, r1
0801b60a: 06e0       b         #0x801b61a
0801b60c: 99e0       b         #0x801b742
0801b60e: 97e0       b         #0x801b740
0801b610: 95e0       b         #0x801b73e
0801b612: 13e1       b         #0x801b83c
0801b614: 92e0       b         #0x801b73c
0801b616: 90e0       b         #0x801b73a
0801b618: 8ee0       b         #0x801b738
0801b61a: 01d9       bls       #0x801b620
0801b61c: 642c       cmp       r4, #0x64
0801b61e: 09dc       bgt       #0x801b634
0801b620: 6648       ldr       r0, [pc, #0x198] ; [0x801b7bc] = 0x2000067c 
0801b622: 0088       ldrh      r0, [r0]
0801b624: 8442       cmp       r4, r0
0801b626: 23dd       ble       #0x801b670
0801b628: 6448       ldr       r0, [pc, #0x190] ; [0x801b7bc] = 0x2000067c 
0801b62a: 0088       ldrh      r0, [r0]
0801b62c: 6428       cmp       r0, #0x64
0801b62e: 1fda       bge       #0x801b670
0801b630: 642c       cmp       r4, #0x64
0801b632: 1ddc       bgt       #0x801b670
0801b634: 6248       ldr       r0, [pc, #0x188] ; [0x801b7c0] = 0x20000654 
0801b636: 0068       ldr       r0, [r0]
0801b638: 1428       cmp       r0, #0x14
0801b63a: 05d2       bhs       #0x801b648
0801b63c: 6048       ldr       r0, [pc, #0x180] ; [0x801b7c0] = 0x20000654 
0801b63e: 0068       ldr       r0, [r0]
0801b640: 401c       adds      r0, r0, #1
0801b642: 5f49       ldr       r1, [pc, #0x17c] ; [0x801b7c0] = 0x20000654 
0801b644: 0860       str       r0, [r1]
0801b646: 1ce0       b         #0x801b682
0801b648: 0020       movs      r0, #0
0801b64a: 5549       ldr       r1, [pc, #0x154] ; [0x801b7a0] = 0x20000696 
0801b64c: 0880       strh      r0, [r1]
0801b64e: 0120       movs      r0, #1
0801b650: 4b49       ldr       r1, [pc, #0x12c] ; [0x801b780] = 0x422101b0 
0801b652: 0860       str       r0, [r1]
0801b654: 0221       movs      r1, #2
0801b656: 4b48       ldr       r0, [pc, #0x12c] ; [0x801b784] = 0x40011000 
0801b658: f0f74bfa   bl        #0x800baf2
0801b65c: fa20       movs      r0, #0xfa
0801b65e: 5949       ldr       r1, [pc, #0x164] ; [0x801b7c4] = 0x20000680 
0801b660: 0870       strb      r0, [r1]
0801b662: 0020       movs      r0, #0
0801b664: 4f49       ldr       r1, [pc, #0x13c] ; [0x801b7a4] = 0x20000664 
0801b666: 0860       str       r0, [r1]
0801b668: 0820       movs      r0, #8
0801b66a: 4349       ldr       r1, [pc, #0x10c] ; [0x801b778] = 0x2000066c 
0801b66c: 0870       strb      r0, [r1]
0801b66e: 16e1       b         #0x801b89e
0801b670: 5348       ldr       r0, [pc, #0x14c] ; [0x801b7c0] = 0x20000654 
0801b672: 0068       ldr       r0, [r0]
0801b674: 0a28       cmp       r0, #0xa
0801b676: 04d9       bls       #0x801b682
0801b678: 5148       ldr       r0, [pc, #0x144] ; [0x801b7c0] = 0x20000654 
0801b67a: 0068       ldr       r0, [r0]
0801b67c: 401e       subs      r0, r0, #1
0801b67e: 5049       ldr       r1, [pc, #0x140] ; [0x801b7c0] = 0x20000654 
0801b680: 0860       str       r0, [r1]
0801b682: 3c48       ldr       r0, [pc, #0xf0] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b684: 90f89c00   ldrb.w    r0, [r0, #0x9c]
0801b688: 0a28       cmp       r0, #0xa
0801b68a: 17dd       ble       #0x801b6bc
0801b68c: 4e48       ldr       r0, [pc, #0x138] ; [0x801b7c8] = 0x20000658 
0801b68e: 0068       ldr       r0, [r0]
0801b690: 3228       cmp       r0, #0x32
0801b692: 05d2       bhs       #0x801b6a0
0801b694: 4c48       ldr       r0, [pc, #0x130] ; [0x801b7c8] = 0x20000658 
0801b696: 0068       ldr       r0, [r0]
0801b698: 401c       adds      r0, r0, #1
0801b69a: 4b49       ldr       r1, [pc, #0x12c] ; [0x801b7c8] = 0x20000658 
0801b69c: 0860       str       r0, [r1]
0801b69e: 1ae0       b         #0x801b6d6
0801b6a0: 0120       movs      r0, #1
0801b6a2: 3749       ldr       r1, [pc, #0xdc] ; [0x801b780] = 0x422101b0 
0801b6a4: 0860       str       r0, [r1]
0801b6a6: 0221       movs      r1, #2
0801b6a8: 3648       ldr       r0, [pc, #0xd8] ; [0x801b784] = 0x40011000 
0801b6aa: f0f722fa   bl        #0x800baf2
0801b6ae: 0120       movs      r0, #1
0801b6b0: 4649       ldr       r1, [pc, #0x118] ; [0x801b7cc] = 0x20000681 
0801b6b2: 0870       strb      r0, [r1]
0801b6b4: 0920       movs      r0, #9
0801b6b6: 3049       ldr       r1, [pc, #0xc0] ; [0x801b778] = 0x2000066c 
0801b6b8: 0870       strb      r0, [r1]
0801b6ba: 0ce0       b         #0x801b6d6
0801b6bc: 4248       ldr       r0, [pc, #0x108] ; [0x801b7c8] = 0x20000658 
0801b6be: 0068       ldr       r0, [r0]
0801b6c0: 0a28       cmp       r0, #0xa
0801b6c2: 05d9       bls       #0x801b6d0
0801b6c4: 4048       ldr       r0, [pc, #0x100] ; [0x801b7c8] = 0x20000658 
0801b6c6: 0068       ldr       r0, [r0]
0801b6c8: 401e       subs      r0, r0, #1
0801b6ca: 3f49       ldr       r1, [pc, #0xfc] ; [0x801b7c8] = 0x20000658 
0801b6cc: 0860       str       r0, [r1]
0801b6ce: 02e0       b         #0x801b6d6
0801b6d0: 0020       movs      r0, #0
0801b6d2: 3e49       ldr       r1, [pc, #0xf8] ; [0x801b7cc] = 0x20000681 
0801b6d4: 0870       strb      r0, [r1]
0801b6d6: 2748       ldr       r0, [pc, #0x9c] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b6d8: 90f89d00   ldrb.w    r0, [r0, #0x9d]
0801b6dc: 0a28       cmp       r0, #0xa
0801b6de: 1ddd       ble       #0x801b71c
0801b6e0: 2348       ldr       r0, [pc, #0x8c] ; [0x801b770] = 0x20000646 
0801b6e2: b0f90000   ldrsh.w   r0, [r0]
0801b6e6: b0f5167f   cmp.w     r0, #0x258
0801b6ea: 17dd       ble       #0x801b71c
0801b6ec: 3848       ldr       r0, [pc, #0xe0] ; [0x801b7d0] = 0x2000065c 
0801b6ee: 0068       ldr       r0, [r0]
0801b6f0: c828       cmp       r0, #0xc8
0801b6f2: 05d2       bhs       #0x801b700
0801b6f4: 3648       ldr       r0, [pc, #0xd8] ; [0x801b7d0] = 0x2000065c 
0801b6f6: 0068       ldr       r0, [r0]
0801b6f8: 401c       adds      r0, r0, #1
0801b6fa: 3549       ldr       r1, [pc, #0xd4] ; [0x801b7d0] = 0x2000065c 
0801b6fc: 0860       str       r0, [r1]
0801b6fe: 1ae0       b         #0x801b736
0801b700: 0120       movs      r0, #1
0801b702: 1f49       ldr       r1, [pc, #0x7c] ; [0x801b780] = 0x422101b0 
0801b704: 0860       str       r0, [r1]
0801b706: 0221       movs      r1, #2
0801b708: 1e48       ldr       r0, [pc, #0x78] ; [0x801b784] = 0x40011000 
0801b70a: f0f7f2f9   bl        #0x800baf2
0801b70e: 0120       movs      r0, #1
0801b710: 3049       ldr       r1, [pc, #0xc0] ; [0x801b7d4] = 0x20000682 
0801b712: 0870       strb      r0, [r1]
0801b714: 0920       movs      r0, #9
0801b716: 1849       ldr       r1, [pc, #0x60] ; [0x801b778] = 0x2000066c 
0801b718: 0870       strb      r0, [r1]
0801b71a: 0ce0       b         #0x801b736
0801b71c: 2c48       ldr       r0, [pc, #0xb0] ; [0x801b7d0] = 0x2000065c 
0801b71e: 0068       ldr       r0, [r0]
0801b720: 0a28       cmp       r0, #0xa
0801b722: 05d9       bls       #0x801b730
0801b724: 2a48       ldr       r0, [pc, #0xa8] ; [0x801b7d0] = 0x2000065c 
0801b726: 0068       ldr       r0, [r0]
0801b728: 401e       subs      r0, r0, #1
0801b72a: 2949       ldr       r1, [pc, #0xa4] ; [0x801b7d0] = 0x2000065c 
0801b72c: 0860       str       r0, [r1]
0801b72e: 02e0       b         #0x801b736
0801b730: 0020       movs      r0, #0
0801b732: 2849       ldr       r1, [pc, #0xa0] ; [0x801b7d4] = 0x20000682 
0801b734: 0870       strb      r0, [r1]
0801b736: b2e0       b         #0x801b89e
0801b738: 00bf       nop       
0801b73a: 00bf       nop       
0801b73c: 00bf       nop       
0801b73e: 00bf       nop       
0801b740: 00bf       nop       
0801b742: fcf769f8   bl        #0x8017818
0801b746: 0446       mov       r4, r0
0801b748: 0a48       ldr       r0, [pc, #0x28] ; [0x801b774] = 0x200030b8 TotalVoltage
0801b74a: 0068       ldr       r0, [r0]
0801b74c: 42f65c31   movw      r1, #0x2b5c
0801b750: 8842       cmp       r0, r1
0801b752: 72da       bge       #0x801b83a
0801b754: 0648       ldr       r0, [pc, #0x18] ; [0x801b770] = 0x20000646 
0801b756: b0f90000   ldrsh.w   r0, [r0]
0801b75a: b0f5167f   cmp.w     r0, #0x258
0801b75e: 6cda       bge       #0x801b83a
0801b760: 0a48       ldr       r0, [pc, #0x28] ; [0x801b78c] = 0x20000670 
0801b762: 39e0       b         #0x801b7d8
0801b7d8: 0078       ldrb      r0, [r0]
0801b7da: 0828       cmp       r0, #8
0801b7dc: 2dda       bge       #0x801b83a
0801b7de: 8348       ldr       r0, [pc, #0x20c] ; [0x801b9ec] = 0x20000681 
0801b7e0: 0078       ldrb      r0, [r0]
0801b7e2: c8b9       cbnz      r0, #0x801b818
0801b7e4: 8248       ldr       r0, [pc, #0x208] ; [0x801b9f0] = 0x20000682 
0801b7e6: 0078       ldrb      r0, [r0]
0801b7e8: b0b9       cbnz      r0, #0x801b818
0801b7ea: 8248       ldr       r0, [pc, #0x208] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b7ec: 0068       ldr       r0, [r0]
0801b7ee: 8249       ldr       r1, [pc, #0x208] ; [0x801b9f8] = 0x20000678 
0801b7f0: 0968       ldr       r1, [r1]
0801b7f2: 8842       cmp       r0, r1
0801b7f4: 01d2       bhs       #0x801b7fa
0801b7f6: 642c       cmp       r4, #0x64
0801b7f8: 05dc       bgt       #0x801b806
0801b7fa: 8048       ldr       r0, [pc, #0x200] ; [0x801b9fc] = 0x2000067e 
0801b7fc: 0088       ldrh      r0, [r0]
0801b7fe: 8442       cmp       r4, r0
0801b800: 1bda       bge       #0x801b83a
0801b802: 642c       cmp       r4, #0x64
0801b804: 19dc       bgt       #0x801b83a
0801b806: 7e48       ldr       r0, [pc, #0x1f8] ; [0x801ba00] = 0x20000664 
0801b808: 0068       ldr       r0, [r0]
0801b80a: 6428       cmp       r0, #0x64
0801b80c: 05d2       bhs       #0x801b81a
0801b80e: 7c48       ldr       r0, [pc, #0x1f0] ; [0x801ba00] = 0x20000664 
0801b810: 0068       ldr       r0, [r0]
0801b812: 401c       adds      r0, r0, #1
0801b814: 7a49       ldr       r1, [pc, #0x1e8] ; [0x801ba00] = 0x20000664 
0801b816: 0860       str       r0, [r1]
0801b818: 0fe0       b         #0x801b83a
0801b81a: 0221       movs      r1, #2
0801b81c: 7948       ldr       r0, [pc, #0x1e4] ; [0x801ba04] = 0x40011000 
0801b81e: f0f766f9   bl        #0x800baee
0801b822: 0020       movs      r0, #0
0801b824: 7849       ldr       r1, [pc, #0x1e0] ; [0x801ba08] = 0x2000066e 
0801b826: 0870       strb      r0, [r1]
0801b828: 7849       ldr       r1, [pc, #0x1e0] ; [0x801ba0c] = 0x20000680 
0801b82a: 0870       strb      r0, [r1]
0801b82c: 7849       ldr       r1, [pc, #0x1e0] ; [0x801ba10] = 0x2000066f 
0801b82e: 0870       strb      r0, [r1]
0801b830: 7849       ldr       r1, [pc, #0x1e0] ; [0x801ba14] = 0x2000066d 
0801b832: 0870       strb      r0, [r1]
0801b834: 0220       movs      r0, #2
0801b836: 7849       ldr       r1, [pc, #0x1e0] ; [0x801ba18] = 0x2000066c 
0801b838: 0870       strb      r0, [r1]
0801b83a: 30e0       b         #0x801b89e
0801b83c: fbf7ecff   bl        #0x8017818
0801b840: 0446       mov       r4, r0
0801b842: 6c48       ldr       r0, [pc, #0x1b0] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b844: 0068       ldr       r0, [r0]
0801b846: 42f6b451   movw      r1, #0x2db4
0801b84a: 8842       cmp       r0, r1
0801b84c: 25da       bge       #0x801b89a
0801b84e: 6948       ldr       r0, [pc, #0x1a4] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b850: 90f8bf00   ldrb.w    r0, [r0, #0xbf]
0801b854: 20b1       cbz       r0, #0x801b860
0801b856: 6748       ldr       r0, [pc, #0x19c] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b858: 90f8c000   ldrb.w    r0, [r0, #0xc0]
0801b85c: 0128       cmp       r0, #1
0801b85e: 1cd1       bne       #0x801b89a
0801b860: 6248       ldr       r0, [pc, #0x188] ; [0x801b9ec] = 0x20000681 
0801b862: 0078       ldrb      r0, [r0]
0801b864: c8b9       cbnz      r0, #0x801b89a
0801b866: 6648       ldr       r0, [pc, #0x198] ; [0x801ba00] = 0x20000664 
0801b868: 0068       ldr       r0, [r0]
0801b86a: 6428       cmp       r0, #0x64
0801b86c: 05d2       bhs       #0x801b87a
0801b86e: 6448       ldr       r0, [pc, #0x190] ; [0x801ba00] = 0x20000664 
0801b870: 0068       ldr       r0, [r0]
0801b872: 401c       adds      r0, r0, #1
0801b874: 6249       ldr       r1, [pc, #0x188] ; [0x801ba00] = 0x20000664 
0801b876: 0860       str       r0, [r1]
0801b878: 0fe0       b         #0x801b89a
0801b87a: 0221       movs      r1, #2
0801b87c: 6148       ldr       r0, [pc, #0x184] ; [0x801ba04] = 0x40011000 
0801b87e: f0f736f9   bl        #0x800baee
0801b882: 0020       movs      r0, #0
0801b884: 6049       ldr       r1, [pc, #0x180] ; [0x801ba08] = 0x2000066e 
0801b886: 0870       strb      r0, [r1]
0801b888: 6049       ldr       r1, [pc, #0x180] ; [0x801ba0c] = 0x20000680 
0801b88a: 0870       strb      r0, [r1]
0801b88c: 6049       ldr       r1, [pc, #0x180] ; [0x801ba10] = 0x2000066f 
0801b88e: 0870       strb      r0, [r1]
0801b890: 6049       ldr       r1, [pc, #0x180] ; [0x801ba14] = 0x2000066d 
0801b892: 0870       strb      r0, [r1]
0801b894: 0220       movs      r0, #2
0801b896: 6049       ldr       r1, [pc, #0x180] ; [0x801ba18] = 0x2000066c 
0801b898: 0870       strb      r0, [r1]
0801b89a: 00e0       b         #0x801b89e
0801b89c: 00bf       nop       
0801b89e: 00bf       nop       
0801b8a0: 5c48       ldr       r0, [pc, #0x170] ; [0x801ba14] = 0x2000066d 
0801b8a2: 0078       ldrb      r0, [r0]
0801b8a4: 0128       cmp       r0, #1
0801b8a6: 07d0       beq       #0x801b8b8
0801b8a8: 5748       ldr       r0, [pc, #0x15c] ; [0x801ba08] = 0x2000066e 
0801b8aa: 0078       ldrb      r0, [r0]
0801b8ac: 0028       cmp       r0, #0
0801b8ae: 03dc       bgt       #0x801b8b8
0801b8b0: 5748       ldr       r0, [pc, #0x15c] ; [0x801ba10] = 0x2000066f 
0801b8b2: 0078       ldrb      r0, [r0]
0801b8b4: 0028       cmp       r0, #0
0801b8b6: 09dd       ble       #0x801b8cc
0801b8b8: 0120       movs      r0, #1
0801b8ba: 5849       ldr       r1, [pc, #0x160] ; [0x801ba1c] = 0x200006d8 
0801b8bc: 0870       strb      r0, [r1]
0801b8be: 4d48       ldr       r0, [pc, #0x134] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8c0: 408c       ldrh      r0, [r0, #0x22]
0801b8c2: 40f04000   orr       r0, r0, #0x40
0801b8c6: 4b49       ldr       r1, [pc, #0x12c] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8c8: 4884       strh      r0, [r1, #0x22]
0801b8ca: 08e0       b         #0x801b8de
0801b8cc: 0020       movs      r0, #0
0801b8ce: 5349       ldr       r1, [pc, #0x14c] ; [0x801ba1c] = 0x200006d8 
0801b8d0: 0870       strb      r0, [r1]
0801b8d2: 4848       ldr       r0, [pc, #0x120] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8d4: 408c       ldrh      r0, [r0, #0x22]
0801b8d6: 20f04000   bic       r0, r0, #0x40
0801b8da: 4649       ldr       r1, [pc, #0x118] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8dc: 4884       strh      r0, [r1, #0x22]
0801b8de: 4b48       ldr       r0, [pc, #0x12c] ; [0x801ba0c] = 0x20000680 
0801b8e0: 0078       ldrb      r0, [r0]
0801b8e2: 0028       cmp       r0, #0
0801b8e4: 06dd       ble       #0x801b8f4
0801b8e6: 4348       ldr       r0, [pc, #0x10c] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8e8: 408c       ldrh      r0, [r0, #0x22]
0801b8ea: 40f08000   orr       r0, r0, #0x80
0801b8ee: 4149       ldr       r1, [pc, #0x104] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8f0: 4884       strh      r0, [r1, #0x22]
0801b8f2: 05e0       b         #0x801b900
0801b8f4: 3f48       ldr       r0, [pc, #0xfc] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8f6: 408c       ldrh      r0, [r0, #0x22]
0801b8f8: 20f08000   bic       r0, r0, #0x80
0801b8fc: 3d49       ldr       r1, [pc, #0xf4] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b8fe: 4884       strh      r0, [r1, #0x22]
0801b900: 3a48       ldr       r0, [pc, #0xe8] ; [0x801b9ec] = 0x20000681 
0801b902: 0078       ldrb      r0, [r0]
0801b904: 0028       cmp       r0, #0
0801b906: 06dd       ble       #0x801b916
0801b908: 3a48       ldr       r0, [pc, #0xe8] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b90a: 408c       ldrh      r0, [r0, #0x22]
0801b90c: 40f48070   orr       r0, r0, #0x100
0801b910: 3849       ldr       r1, [pc, #0xe0] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b912: 4884       strh      r0, [r1, #0x22]
0801b914: 05e0       b         #0x801b922
0801b916: 3748       ldr       r0, [pc, #0xdc] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b918: 408c       ldrh      r0, [r0, #0x22]
0801b91a: 20f48070   bic       r0, r0, #0x100
0801b91e: 3549       ldr       r1, [pc, #0xd4] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b920: 4884       strh      r0, [r1, #0x22]
0801b922: 3348       ldr       r0, [pc, #0xcc] ; [0x801b9f0] = 0x20000682 
0801b924: 0078       ldrb      r0, [r0]
0801b926: 0028       cmp       r0, #0
0801b928: 06dd       ble       #0x801b938
0801b92a: 3248       ldr       r0, [pc, #0xc8] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b92c: 808c       ldrh      r0, [r0, #0x24]
0801b92e: 40f00100   orr       r0, r0, #1
0801b932: 3049       ldr       r1, [pc, #0xc0] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b934: 8884       strh      r0, [r1, #0x24]
0801b936: 05e0       b         #0x801b944
0801b938: 2e48       ldr       r0, [pc, #0xb8] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b93a: 808c       ldrh      r0, [r0, #0x24]
0801b93c: 20f00100   bic       r0, r0, #1
0801b940: 2c49       ldr       r1, [pc, #0xb0] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b942: 8884       strh      r0, [r1, #0x24]
0801b944: 2b48       ldr       r0, [pc, #0xac] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b946: 806b       ldr       r0, [r0, #0x38]
0801b948: 9621       movs      r1, #0x96
0801b94a: b0fbf1f2   udiv      r2, r0, r1
0801b94e: 01fb1200   mls       r0, r1, r2, r0
0801b952: 4b28       cmp       r0, #0x4b
0801b954: 16d1       bne       #0x801b984
0801b956: 2f48       ldr       r0, [pc, #0xbc] ; [0x801ba14] = 0x2000066d 
0801b958: 0078       ldrb      r0, [r0]
0801b95a: 0128       cmp       r0, #1
0801b95c: 0fd0       beq       #0x801b97e
0801b95e: 2a48       ldr       r0, [pc, #0xa8] ; [0x801ba08] = 0x2000066e 
0801b960: 0078       ldrb      r0, [r0]
0801b962: 0128       cmp       r0, #1
0801b964: 0bdc       bgt       #0x801b97e
0801b966: 2a48       ldr       r0, [pc, #0xa8] ; [0x801ba10] = 0x2000066f 
0801b968: 0078       ldrb      r0, [r0]
0801b96a: 0128       cmp       r0, #1
0801b96c: 07dc       bgt       #0x801b97e
0801b96e: 1f48       ldr       r0, [pc, #0x7c] ; [0x801b9ec] = 0x20000681 
0801b970: 0078       ldrb      r0, [r0]
0801b972: 0028       cmp       r0, #0
0801b974: 03dc       bgt       #0x801b97e
0801b976: 1e48       ldr       r0, [pc, #0x78] ; [0x801b9f0] = 0x20000682 
0801b978: 0078       ldrb      r0, [r0]
0801b97a: 0028       cmp       r0, #0
0801b97c: 02dd       ble       #0x801b984
0801b97e: 0220       movs      r0, #2
0801b980: 07f0e6fc   bl        #0x8023350
0801b984: 2648       ldr       r0, [pc, #0x98] ; [0x801ba20] = 0x20000698 
0801b986: 0078       ldrb      r0, [r0]
0801b988: 0128       cmp       r0, #1
0801b98a: 00d1       bne       #0x801b98e
0801b98c: 10bd       pop       {r4, pc}
0801b98e: 1948       ldr       r0, [pc, #0x64] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b990: 90f8cc00   ldrb.w    r0, [r0, #0xcc]
0801b994: 0028       cmp       r0, #0
0801b996: 02dd       ble       #0x801b99e
0801b998: 0120       movs      r0, #1
0801b99a: 2149       ldr       r1, [pc, #0x84] ; [0x801ba20] = 0x20000698 
0801b99c: 0870       strb      r0, [r1]
0801b99e: 1549       ldr       r1, [pc, #0x54] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b9a0: c96b       ldr       r1, [r1, #0x3c]
0801b9a2: 1929       cmp       r1, #0x19
0801b9a4: 1dd9       bls       #0x801b9e2
0801b9a6: 1349       ldr       r1, [pc, #0x4c] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b9a8: 91f89610   ldrb.w    r1, [r1, #0x96]
0801b9ac: c9b9       cbnz      r1, #0x801b9e2
0801b9ae: 1149       ldr       r1, [pc, #0x44] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b9b0: 91f8cc10   ldrb.w    r1, [r1, #0xcc]
0801b9b4: a9b9       cbnz      r1, #0x801b9e2
0801b9b6: 0f49       ldr       r1, [pc, #0x3c] ; [0x801b9f4] = 0x200030b8 TotalVoltage
0801b9b8: 8868       ldr       r0, [r1, #8]
0801b9ba: 0028       cmp       r0, #0
0801b9bc: 01db       blt       #0x801b9c2
0801b9be: 0146       mov       r1, r0
0801b9c0: 00e0       b         #0x801b9c4
0801b9c2: 4142       rsbs      r1, r0, #0
0801b9c4: b1f57a7f   cmp.w     r1, #0x3e8
0801b9c8: 0bda       bge       #0x801b9e2
0801b9ca: 1648       ldr       r0, [pc, #0x58] ; [0x801ba24] = 0x20000699 
0801b9cc: 0178       ldrb      r1, [r0]
0801b9ce: 0078       ldrb      r0, [r0]
0801b9d0: 401c       adds      r0, r0, #1
0801b9d2: 144a       ldr       r2, [pc, #0x50] ; [0x801ba24] = 0x20000699 
0801b9d4: 1070       strb      r0, [r2]
0801b9d6: 1929       cmp       r1, #0x19
0801b9d8: 06dd       ble       #0x801b9e8
0801b9da: 0020       movs      r0, #0
0801b9dc: 1249       ldr       r1, [pc, #0x48] ; [0x801ba28] = 0x422101b0 
0801b9de: 0860       str       r0, [r1]
0801b9e0: 02e0       b         #0x801b9e8
0801b9e2: 0020       movs      r0, #0
0801b9e4: 0f49       ldr       r1, [pc, #0x3c] ; [0x801ba24] = 0x20000699 
0801b9e6: 0870       strb      r0, [r1]
0801b9e8: 00bf       nop       
0801b9ea: cfe7       b         #0x801b98c
