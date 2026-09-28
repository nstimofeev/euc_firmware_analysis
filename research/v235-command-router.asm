080164b0: 10b5       push      {r4, lr}
080164b2: 0446       mov       r4, r0
080164b4: 6078       ldrb      r0, [r4, #1]
080164b6: e038       subs      r0, #0xe0
080164b8: 0828       cmp       r0, #8
080164ba: 10d2       bhs       #0x80164de
080164bc: dfe800f0   tbb       [pc, r0]
080164c8: 00bf       nop       
080164ca: 00bf       nop       
080164cc: 00bf       nop       
080164ce: 00bf       nop       
080164d0: 00bf       nop       
080164d2: 00bf       nop       
080164d4: 00bf       nop       
080164d6: 2046       mov       r0, r4
080164d8: fef7d6fd   bl        #0x8015088
080164dc: 03e0       b         #0x80164e6
080164de: 2046       mov       r0, r4
080164e0: 05f0cef9   bl        #0x801b880
080164e4: 00bf       nop       
080164e6: 00bf       nop       
080164e8: 10bd       pop       {r4, pc}
