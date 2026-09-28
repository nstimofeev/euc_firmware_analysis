08013b40: 03b5       push      {r0, r1, lr}
08013b42: 93b0       sub       sp, #0x4c
08013b44: 0020       movs      r0, #0
08013b46: 0d90       str       r0, [sp, #0x34]
08013b48: 0c90       str       r0, [sp, #0x30]
08013b4a: 0ea8       add       r0, sp, #0x38
08013b4c: 1399       ldr       r1, [sp, #0x4c]
08013b4e: 03f095f9   bl        #0x8016e7c
08013b52: 80bb       cbnz      r0, #0x8013bb6
08013b54: 0120       movs      r0, #1
08013b56: fe49       ldr       r1, [pc, #0x3f8] ; [0x8013f50] = 0x20004ba4 
08013b58: 4870       strb      r0, [r1, #1]
08013b5a: 1398       ldr       r0, [sp, #0x4c]
08013b5c: 05f038fb   bl        #0x80191d0
08013b60: 0128       cmp       r0, #1
08013b62: 25d1       bne       #0x8013bb0
08013b64: 1398       ldr       r0, [sp, #0x4c]
08013b66: c078       ldrb      r0, [r0, #3]
08013b68: 0128       cmp       r0, #1
08013b6a: 1ad1       bne       #0x8013ba2
08013b6c: 1398       ldr       r0, [sp, #0x4c]
08013b6e: 8078       ldrb      r0, [r0, #2]
08013b70: 3c28       cmp       r0, #0x3c
08013b72: 16dd       ble       #0x8013ba2
08013b74: 1398       ldr       r0, [sp, #0x4c]
08013b76: 8078       ldrb      r0, [r0, #2]
08013b78: 4128       cmp       r0, #0x41
08013b7a: 12da       bge       #0x8013ba2
08013b7c: 1398       ldr       r0, [sp, #0x4c]
08013b7e: 8078       ldrb      r0, [r0, #2]
08013b80: f349       ldr       r1, [pc, #0x3cc] ; [0x8013f50] = 0x20004ba4 
08013b82: 4871       strb      r0, [r1, #5]
08013b84: 1398       ldr       r0, [sp, #0x4c]
08013b86: 0079       ldrb      r0, [r0, #4]
08013b88: 8871       strb      r0, [r1, #6]
08013b8a: 1398       ldr       r0, [sp, #0x4c]
08013b8c: 0079       ldrb      r0, [r0, #4]
08013b8e: 0b90       str       r0, [sp, #0x2c]
08013b90: 1398       ldr       r0, [sp, #0x4c]
08013b92: 8078       ldrb      r0, [r0, #2]
08013b94: 0a90       str       r0, [sp, #0x28]
08013b96: 0146       mov       r1, r0
08013b98: 0020       movs      r0, #0
08013b9a: 0b9a       ldr       r2, [sp, #0x2c]
08013b9c: 03f024f9   bl        #0x8016de8
08013ba0: 06e0       b         #0x8013bb0
08013ba2: 1398       ldr       r0, [sp, #0x4c]
08013ba4: 8078       ldrb      r0, [r0, #2]
08013ba6: ea49       ldr       r1, [pc, #0x3a8] ; [0x8013f50] = 0x20004ba4 
08013ba8: 4871       strb      r0, [r1, #5]
08013baa: 1398       ldr       r0, [sp, #0x4c]
08013bac: 0079       ldrb      r0, [r0, #4]
08013bae: 8871       strb      r0, [r1, #6]
08013bb0: 0020       movs      r0, #0
08013bb2: 15b0       add       sp, #0x54
08013bb4: 00bd       pop       {pc}
08013bb6: ffe7       b         #0x8013bb8
08013bb8: e548       ldr       r0, [pc, #0x394] ; [0x8013f50] = 0x20004ba4 
08013bba: b0f8be01   ldrh.w    r0, [r0, #0x1be]
08013bbe: 401c       adds      r0, r0, #1
08013bc0: e349       ldr       r1, [pc, #0x38c] ; [0x8013f50] = 0x20004ba4 
08013bc2: a1f8be01   strh.w    r0, [r1, #0x1be]
08013bc6: 1398       ldr       r0, [sp, #0x4c]
08013bc8: 8078       ldrb      r0, [r0, #2]
08013bca: 0b90       str       r0, [sp, #0x2c]
08013bcc: 1398       ldr       r0, [sp, #0x4c]
08013bce: 4078       ldrb      r0, [r0, #1]
08013bd0: 0a90       str       r0, [sp, #0x28]
08013bd2: 0b99       ldr       r1, [sp, #0x2c]
08013bd4: fdf71bfc   bl        #0x801140e
08013bd8: 1290       str       r0, [sp, #0x48]
08013bda: 1398       ldr       r0, [sp, #0x4c]
08013bdc: 0079       ldrb      r0, [r0, #4]
08013bde: 0b90       str       r0, [sp, #0x2c]
08013be0: 1398       ldr       r0, [sp, #0x4c]
08013be2: c078       ldrb      r0, [r0, #3]
08013be4: 0a90       str       r0, [sp, #0x28]
08013be6: 0b99       ldr       r1, [sp, #0x2c]
08013be8: fdf711fc   bl        #0x801140e
08013bec: 1190       str       r0, [sp, #0x44]
08013bee: 1398       ldr       r0, [sp, #0x4c]
08013bf0: 8079       ldrb      r0, [r0, #6]
08013bf2: 0b90       str       r0, [sp, #0x2c]
08013bf4: 1398       ldr       r0, [sp, #0x4c]
08013bf6: 4079       ldrb      r0, [r0, #5]
08013bf8: 0a90       str       r0, [sp, #0x28]
08013bfa: 0b99       ldr       r1, [sp, #0x2c]
08013bfc: fdf707fc   bl        #0x801140e
08013c00: 1090       str       r0, [sp, #0x40]
08013c02: 1398       ldr       r0, [sp, #0x4c]
08013c04: 007a       ldrb      r0, [r0, #8]
08013c06: 0b90       str       r0, [sp, #0x2c]
08013c08: 1398       ldr       r0, [sp, #0x4c]
08013c0a: c079       ldrb      r0, [r0, #7]
08013c0c: 0a90       str       r0, [sp, #0x28]
08013c0e: 0b99       ldr       r1, [sp, #0x2c]
08013c10: fdf7fdfb   bl        #0x801140e
08013c14: 0f90       str       r0, [sp, #0x3c]
08013c16: ce48       ldr       r0, [pc, #0x338] ; [0x8013f50] = 0x20004ba4 
08013c18: 4078       ldrb      r0, [r0, #1]
08013c1a: be28       cmp       r0, #0xbe
08013c1c: 7dd0       beq       #0x8013d1a
08013c1e: 36dc       bgt       #0x8013c8e
08013c20: ae28       cmp       r0, #0xae
08013c22: 7bd0       beq       #0x8013d1c
08013c24: 1fdc       bgt       #0x8013c66
08013c26: a628       cmp       r0, #0xa6
08013c28: 79d0       beq       #0x8013d1e
08013c2a: 10dc       bgt       #0x8013c4e
08013c2c: 4428       cmp       r0, #0x44
08013c2e: 77d0       beq       #0x8013d20
08013c30: 06dc       bgt       #0x8013c40
08013c32: 3228       cmp       r0, #0x32
08013c34: 75d0       beq       #0x8013d22
08013c36: 3528       cmp       r0, #0x35
08013c38: 74d0       beq       #0x8013d24
08013c3a: 4228       cmp       r0, #0x42
08013c3c: 73d1       bne       #0x8013d26
08013c3e: 54e0       b         #0x8013cea
08013c40: a028       cmp       r0, #0xa0
08013c42: 71d0       beq       #0x8013d28
08013c44: a128       cmp       r0, #0xa1
08013c46: 70d0       beq       #0x8013d2a
08013c48: a428       cmp       r0, #0xa4
08013c4a: f7d1       bne       #0x8013c3c
08013c4c: b4e2       b         #0x80141b8
08013c4e: a738       subs      r0, #0xa7
08013c50: 0728       cmp       r0, #7
08013c52: 68d2       bhs       #0x8013d26
08013c54: dfe810f0   tbh       [pc, r0, lsl #1]
08013c66: af38       subs      r0, #0xaf
08013c68: 0f28       cmp       r0, #0xf
08013c6a: f2d2       bhs       #0x8013c52
08013c6c: dfe810f0   tbh       [pc, r0, lsl #1]
08013c8e: bf38       subs      r0, #0xbf
08013c90: 2928       cmp       r0, #0x29
08013c92: ded2       bhs       #0x8013c52
08013c94: dfe810f0   tbh       [pc, r0, lsl #1]
08013cea: bdf83800   ldrh.w    r0, [sp, #0x38]
08013cee: ba28       cmp       r0, #0xba
08013cf0: 01d0       beq       #0x8013cf6
08013cf2: 0020       movs      r0, #0
08013cf4: 5de7       b         #0x8013bb2
08013cf6: 1398       ldr       r0, [sp, #0x4c]
08013cf8: 807b       ldrb      r0, [r0, #0xe]
08013cfa: 0790       str       r0, [sp, #0x1c]
08013cfc: 1398       ldr       r0, [sp, #0x4c]
08013cfe: 407b       ldrb      r0, [r0, #0xd]
08013d00: 0690       str       r0, [sp, #0x18]
08013d02: 0799       ldr       r1, [sp, #0x1c]
08013d04: fdf783fb   bl        #0x801140e
08013d08: 0b90       str       r0, [sp, #0x2c]
08013d0a: 1398       ldr       r0, [sp, #0x4c]
08013d0c: 007c       ldrb      r0, [r0, #0x10]
08013d0e: 0790       str       r0, [sp, #0x1c]
08013d10: 1398       ldr       r0, [sp, #0x4c]
08013d12: c07b       ldrb      r0, [r0, #0xf]
08013d14: 0690       str       r0, [sp, #0x18]
08013d16: 0799       ldr       r1, [sp, #0x1c]
08013d18: 08e0       b         #0x8013d2c
08013d1a: 61e3       b         #0x80143e0
08013d1c: 42e2       b         #0x80141a4
08013d1e: fce3       b         #0x801451a
08013d20: 91e0       b         #0x8013e46
08013d22: 3ae3       b         #0x801439a
08013d24: 92e3       b         #0x801444c
08013d26: f9e3       b         #0x801451c
08013d28: a9e2       b         #0x801427e
08013d2a: e8e2       b         #0x80142fe
08013d2c: fdf76ffb   bl        #0x801140e
08013d30: 0a90       str       r0, [sp, #0x28]
08013d32: 1398       ldr       r0, [sp, #0x4c]
08013d34: 807c       ldrb      r0, [r0, #0x12]
08013d36: 0790       str       r0, [sp, #0x1c]
08013d38: 1398       ldr       r0, [sp, #0x4c]
08013d3a: 407c       ldrb      r0, [r0, #0x11]
08013d3c: 0690       str       r0, [sp, #0x18]
08013d3e: 0799       ldr       r1, [sp, #0x1c]
08013d40: fdf765fb   bl        #0x801140e
08013d44: 0990       str       r0, [sp, #0x24]
08013d46: 8249       ldr       r1, [pc, #0x208] ; [0x8013f50] = 0x20004ba4 
08013d48: 0998       ldr       r0, [sp, #0x24]
08013d4a: 81f80301   strb.w    r0, [r1, #0x103]
08013d4e: 0020       movs      r0, #0
08013d50: 0790       str       r0, [sp, #0x1c]
08013d52: 11e0       b         #0x8013d78
08013d54: 1321       movs      r1, #0x13
08013d56: 0798       ldr       r0, [sp, #0x1c]
08013d58: 01eb8001   add.w     r1, r1, r0, lsl #2
08013d5c: 1398       ldr       r0, [sp, #0x4c]
08013d5e: 0844       add       r0, r1
08013d60: 0690       str       r0, [sp, #0x18]
08013d62: 0bf00df9   bl        #0x801ef80
08013d66: 0146       mov       r1, r0
08013d68: 7a48       ldr       r0, [pc, #0x1e8] ; [0x8013f54] = 0x20004ca8 
08013d6a: 079a       ldr       r2, [sp, #0x1c]
08013d6c: 20f81210   strh.w    r1, [r0, r2, lsl #1]
08013d70: 0798       ldr       r0, [sp, #0x1c]
08013d72: 401c       adds      r0, r0, #1
08013d74: c0b2       uxtb      r0, r0
08013d76: 0790       str       r0, [sp, #0x1c]
08013d78: 0798       ldr       r0, [sp, #0x1c]
08013d7a: 1e28       cmp       r0, #0x1e
08013d7c: eadb       blt       #0x8013d54
08013d7e: 1398       ldr       r0, [sp, #0x4c]
08013d80: 90f88c00   ldrb.w    r0, [r0, #0x8c]
08013d84: 0790       str       r0, [sp, #0x1c]
08013d86: 1398       ldr       r0, [sp, #0x4c]
08013d88: 90f88b00   ldrb.w    r0, [r0, #0x8b]
08013d8c: 0690       str       r0, [sp, #0x18]
08013d8e: 0799       ldr       r1, [sp, #0x1c]
08013d90: fdf73dfb   bl        #0x801140e
08013d94: 0890       str       r0, [sp, #0x20]
08013d96: 6e49       ldr       r1, [pc, #0x1b8] ; [0x8013f50] = 0x20004ba4 
08013d98: 0898       ldr       r0, [sp, #0x20]
08013d9a: 81f84401   strb.w    r0, [r1, #0x144]
08013d9e: 0020       movs      r0, #0
08013da0: 0790       str       r0, [sp, #0x1c]
08013da2: 13e0       b         #0x8013dcc
08013da4: 7821       movs      r1, #0x78
08013da6: 0798       ldr       r0, [sp, #0x1c]
08013da8: 01eb8000   add.w     r0, r1, r0, lsl #2
08013dac: 1530       adds      r0, #0x15
08013dae: 1399       ldr       r1, [sp, #0x4c]
08013db0: 0844       add       r0, r1
08013db2: 0690       str       r0, [sp, #0x18]
08013db4: 0bf0e4f8   bl        #0x801ef80
08013db8: 0146       mov       r1, r0
08013dba: 6648       ldr       r0, [pc, #0x198] ; [0x8013f54] = 0x20004ca8 
08013dbc: 4230       adds      r0, #0x42
08013dbe: 079a       ldr       r2, [sp, #0x1c]
08013dc0: 20f81210   strh.w    r1, [r0, r2, lsl #1]
08013dc4: 0798       ldr       r0, [sp, #0x1c]
08013dc6: 401c       adds      r0, r0, #1
08013dc8: c0b2       uxtb      r0, r0
08013dca: 0790       str       r0, [sp, #0x1c]
08013dcc: 0798       ldr       r0, [sp, #0x1c]
08013dce: 0828       cmp       r0, #8
08013dd0: e8db       blt       #0x8013da4
08013dd2: 1398       ldr       r0, [sp, #0x4c]
08013dd4: ad30       adds      r0, #0xad
08013dd6: 0bf0d3f8   bl        #0x801ef80
08013dda: 01b2       sxth      r1, r0
08013ddc: 5c48       ldr       r0, [pc, #0x170] ; [0x8013f50] = 0x20004ba4 
08013dde: a0f85a11   strh.w    r1, [r0, #0x15a]
08013de2: 1398       ldr       r0, [sp, #0x4c]
08013de4: b130       adds      r0, #0xb1
08013de6: 0bf0cbf8   bl        #0x801ef80
08013dea: 5949       ldr       r1, [pc, #0x164] ; [0x8013f50] = 0x20004ba4 
08013dec: a1f85c01   strh.w    r0, [r1, #0x15c]
08013df0: 1398       ldr       r0, [sp, #0x4c]
08013df2: b530       adds      r0, #0xb5
08013df4: 0bf0c4f8   bl        #0x801ef80
08013df8: 5549       ldr       r1, [pc, #0x154] ; [0x8013f50] = 0x20004ba4 
08013dfa: a1f85e01   strh.w    r0, [r1, #0x15e]
08013dfe: 1398       ldr       r0, [sp, #0x4c]
08013e00: 90f8ba00   ldrb.w    r0, [r0, #0xba]
08013e04: 0790       str       r0, [sp, #0x1c]
08013e06: 1398       ldr       r0, [sp, #0x4c]
08013e08: 90f8b900   ldrb.w    r0, [r0, #0xb9]
08013e0c: 0690       str       r0, [sp, #0x18]
08013e0e: 0799       ldr       r1, [sp, #0x1c]
08013e10: fdf7fdfa   bl        #0x801140e
08013e14: 4e49       ldr       r1, [pc, #0x138] ; [0x8013f50] = 0x20004ba4 
08013e16: 81f86001   strb.w    r0, [r1, #0x160]
08013e1a: 1398       ldr       r0, [sp, #0x4c]
08013e1c: bb30       adds      r0, #0xbb
08013e1e: 0bf0aff8   bl        #0x801ef80
08013e22: 4b49       ldr       r1, [pc, #0x12c] ; [0x8013f50] = 0x20004ba4 
08013e24: a1f86201   strh.w    r0, [r1, #0x162]
08013e28: 1398       ldr       r0, [sp, #0x4c]
08013e2a: bf30       adds      r0, #0xbf
08013e2c: 0bf0a8f8   bl        #0x801ef80
08013e30: 4749       ldr       r1, [pc, #0x11c] ; [0x8013f50] = 0x20004ba4 
08013e32: a1f86401   strh.w    r0, [r1, #0x164]
08013e36: 1398       ldr       r0, [sp, #0x4c]
08013e38: c330       adds      r0, #0xc3
08013e3a: 0bf0a1f8   bl        #0x801ef80
08013e3e: 4449       ldr       r1, [pc, #0x110] ; [0x8013f50] = 0x20004ba4 
08013e40: a1f86601   strh.w    r0, [r1, #0x166]
08013e44: ebe3       b         #0x801461e
08013e46: bdf83800   ldrh.w    r0, [sp, #0x38]
08013e4a: 7628       cmp       r0, #0x76
08013e4c: 01d0       beq       #0x8013e52
08013e4e: 0020       movs      r0, #0
08013e50: afe6       b         #0x8013bb2
08013e52: 1398       ldr       r0, [sp, #0x4c]
08013e54: 807b       ldrb      r0, [r0, #0xe]
08013e56: 0790       str       r0, [sp, #0x1c]
08013e58: 1398       ldr       r0, [sp, #0x4c]
08013e5a: 407b       ldrb      r0, [r0, #0xd]
08013e5c: 0690       str       r0, [sp, #0x18]
08013e5e: 0799       ldr       r1, [sp, #0x1c]
08013e60: fdf7d5fa   bl        #0x801140e
08013e64: 0b90       str       r0, [sp, #0x2c]
08013e66: 1398       ldr       r0, [sp, #0x4c]
08013e68: 007c       ldrb      r0, [r0, #0x10]
08013e6a: 0790       str       r0, [sp, #0x1c]
08013e6c: 1398       ldr       r0, [sp, #0x4c]
08013e6e: c07b       ldrb      r0, [r0, #0xf]
08013e70: 0690       str       r0, [sp, #0x18]
08013e72: 0799       ldr       r1, [sp, #0x1c]
08013e74: fdf7cbfa   bl        #0x801140e
08013e78: 0a90       str       r0, [sp, #0x28]
08013e7a: 1398       ldr       r0, [sp, #0x4c]
08013e7c: 807c       ldrb      r0, [r0, #0x12]
08013e7e: 0790       str       r0, [sp, #0x1c]
08013e80: 1398       ldr       r0, [sp, #0x4c]
08013e82: 407c       ldrb      r0, [r0, #0x11]
08013e84: 0690       str       r0, [sp, #0x18]
08013e86: 0799       ldr       r1, [sp, #0x1c]
08013e88: fdf7c1fa   bl        #0x801140e
08013e8c: 0990       str       r0, [sp, #0x24]
08013e8e: 3049       ldr       r1, [pc, #0xc0] ; [0x8013f50] = 0x20004ba4 
08013e90: 0998       ldr       r0, [sp, #0x24]
08013e92: 81f86801   strb.w    r0, [r1, #0x168]
08013e96: 0020       movs      r0, #0
08013e98: 0790       str       r0, [sp, #0x1c]
08013e9a: 19e0       b         #0x8013ed0
08013e9c: 1421       movs      r1, #0x14
08013e9e: 0798       ldr       r0, [sp, #0x1c]
08013ea0: 01eb4001   add.w     r1, r1, r0, lsl #1
08013ea4: 1398       ldr       r0, [sp, #0x4c]
08013ea6: 405c       ldrb      r0, [r0, r1]
08013ea8: 0690       str       r0, [sp, #0x18]
08013eaa: 1321       movs      r1, #0x13
08013eac: 0798       ldr       r0, [sp, #0x1c]
08013eae: 01eb4001   add.w     r1, r1, r0, lsl #1
08013eb2: 1398       ldr       r0, [sp, #0x4c]
08013eb4: 405c       ldrb      r0, [r0, r1]
08013eb6: 0590       str       r0, [sp, #0x14]
08013eb8: 0699       ldr       r1, [sp, #0x18]
08013eba: fdf7a8fa   bl        #0x801140e
08013ebe: 0146       mov       r1, r0
08013ec0: 2448       ldr       r0, [pc, #0x90] ; [0x8013f54] = 0x20004ca8 
08013ec2: 6630       adds      r0, #0x66
08013ec4: 079a       ldr       r2, [sp, #0x1c]
08013ec6: 8154       strb      r1, [r0, r2]
08013ec8: 0798       ldr       r0, [sp, #0x1c]
08013eca: 401c       adds      r0, r0, #1
08013ecc: c0b2       uxtb      r0, r0
08013ece: 0790       str       r0, [sp, #0x1c]
08013ed0: 0798       ldr       r0, [sp, #0x1c]
08013ed2: 1e28       cmp       r0, #0x1e
08013ed4: e2db       blt       #0x8013e9c
08013ed6: 1398       ldr       r0, [sp, #0x4c]
08013ed8: 90f85000   ldrb.w    r0, [r0, #0x50]
08013edc: 0790       str       r0, [sp, #0x1c]
08013ede: 1398       ldr       r0, [sp, #0x4c]
08013ee0: 90f84f00   ldrb.w    r0, [r0, #0x4f]
08013ee4: 0690       str       r0, [sp, #0x18]
08013ee6: 0799       ldr       r1, [sp, #0x1c]
08013ee8: fdf791fa   bl        #0x801140e
08013eec: 0890       str       r0, [sp, #0x20]
08013eee: 1849       ldr       r1, [pc, #0x60] ; [0x8013f50] = 0x20004ba4 
08013ef0: 0898       ldr       r0, [sp, #0x20]
08013ef2: 81f86901   strb.w    r0, [r1, #0x169]
08013ef6: 0020       movs      r0, #0
08013ef8: 0790       str       r0, [sp, #0x1c]
08013efa: 1be0       b         #0x8013f34
08013efc: 3c21       movs      r1, #0x3c
08013efe: 0798       ldr       r0, [sp, #0x1c]
08013f00: 01eb4000   add.w     r0, r1, r0, lsl #1
08013f04: 1630       adds      r0, #0x16
08013f06: 1399       ldr       r1, [sp, #0x4c]
08013f08: 085c       ldrb      r0, [r1, r0]
08013f0a: 0690       str       r0, [sp, #0x18]
08013f0c: 3c21       movs      r1, #0x3c
08013f0e: 0798       ldr       r0, [sp, #0x1c]
08013f10: 01eb4000   add.w     r0, r1, r0, lsl #1
08013f14: 1530       adds      r0, #0x15
08013f16: 1399       ldr       r1, [sp, #0x4c]
08013f18: 085c       ldrb      r0, [r1, r0]
08013f1a: 0590       str       r0, [sp, #0x14]
08013f1c: 0699       ldr       r1, [sp, #0x18]
08013f1e: fdf776fa   bl        #0x801140e
08013f22: 0146       mov       r1, r0
08013f24: 0b48       ldr       r0, [pc, #0x2c] ; [0x8013f54] = 0x20004ca8 
08013f26: 8430       adds      r0, #0x84
08013f28: 079a       ldr       r2, [sp, #0x1c]
08013f2a: 8154       strb      r1, [r0, r2]
08013f2c: 0798       ldr       r0, [sp, #0x1c]
08013f2e: 401c       adds      r0, r0, #1
08013f30: c0b2       uxtb      r0, r0
08013f32: 0790       str       r0, [sp, #0x1c]
08013f34: 0798       ldr       r0, [sp, #0x1c]
08013f36: 0828       cmp       r0, #8
08013f38: e0db       blt       #0x8013efc
08013f3a: 1398       ldr       r0, [sp, #0x4c]
08013f3c: 90f86200   ldrb.w    r0, [r0, #0x62]
08013f40: 0790       str       r0, [sp, #0x1c]
08013f42: 1398       ldr       r0, [sp, #0x4c]
08013f44: 90f86100   ldrb.w    r0, [r0, #0x61]
08013f48: 0690       str       r0, [sp, #0x18]
08013f4a: 0799       ldr       r1, [sp, #0x1c]
08013f4c: 04e0       b         #0x8013f58
08013f58: fdf759fa   bl        #0x801140e
08013f5c: fe49       ldr       r1, [pc, #0x3f8] ; [0x8014358] = 0x20004ba4 
08013f5e: 81f89001   strb.w    r0, [r1, #0x190]
08013f62: 1398       ldr       r0, [sp, #0x4c]
08013f64: 90f86400   ldrb.w    r0, [r0, #0x64]
08013f68: 0790       str       r0, [sp, #0x1c]
08013f6a: 1398       ldr       r0, [sp, #0x4c]
08013f6c: 90f86300   ldrb.w    r0, [r0, #0x63]
08013f70: 0690       str       r0, [sp, #0x18]
08013f72: 0799       ldr       r1, [sp, #0x1c]
08013f74: fdf74bfa   bl        #0x801140e
08013f78: f749       ldr       r1, [pc, #0x3dc] ; [0x8014358] = 0x20004ba4 
08013f7a: 81f89101   strb.w    r0, [r1, #0x191]
08013f7e: 1398       ldr       r0, [sp, #0x4c]
08013f80: 90f86600   ldrb.w    r0, [r0, #0x66]
08013f84: 0790       str       r0, [sp, #0x1c]
08013f86: 1398       ldr       r0, [sp, #0x4c]
08013f88: 90f86500   ldrb.w    r0, [r0, #0x65]
08013f8c: 0690       str       r0, [sp, #0x18]
08013f8e: 0799       ldr       r1, [sp, #0x1c]
08013f90: fdf73dfa   bl        #0x801140e
08013f94: f049       ldr       r1, [pc, #0x3c0] ; [0x8014358] = 0x20004ba4 
08013f96: 81f89201   strb.w    r0, [r1, #0x192]
08013f9a: 0020       movs      r0, #0
08013f9c: 0790       str       r0, [sp, #0x1c]
08013f9e: 1ae0       b         #0x8013fd6
08013fa0: 4c21       movs      r1, #0x4c
08013fa2: 0798       ldr       r0, [sp, #0x1c]
08013fa4: 01eb4000   add.w     r0, r1, r0, lsl #1
08013fa8: 1c30       adds      r0, #0x1c
08013faa: 1399       ldr       r1, [sp, #0x4c]
08013fac: 085c       ldrb      r0, [r1, r0]
08013fae: 0690       str       r0, [sp, #0x18]
08013fb0: 4c21       movs      r1, #0x4c
08013fb2: 0798       ldr       r0, [sp, #0x1c]
08013fb4: 01eb4000   add.w     r0, r1, r0, lsl #1
08013fb8: 1b30       adds      r0, #0x1b
08013fba: 1399       ldr       r1, [sp, #0x4c]
08013fbc: 085c       ldrb      r0, [r1, r0]
08013fbe: 0590       str       r0, [sp, #0x14]
08013fc0: 0699       ldr       r1, [sp, #0x18]
08013fc2: fdf724fa   bl        #0x801140e
08013fc6: 0146       mov       r1, r0
08013fc8: e448       ldr       r0, [pc, #0x390] ; [0x801435c] = 0x20004d37 
08013fca: 079a       ldr       r2, [sp, #0x1c]
08013fcc: 8154       strb      r1, [r0, r2]
08013fce: 0798       ldr       r0, [sp, #0x1c]
08013fd0: 401c       adds      r0, r0, #1
08013fd2: c0b2       uxtb      r0, r0
08013fd4: 0790       str       r0, [sp, #0x1c]
08013fd6: 0798       ldr       r0, [sp, #0x1c]
08013fd8: 0528       cmp       r0, #5
08013fda: e1db       blt       #0x8013fa0
08013fdc: 1398       ldr       r0, [sp, #0x4c]
08013fde: 7130       adds      r0, #0x71
08013fe0: 0af0ceff   bl        #0x801ef80
08013fe4: dc49       ldr       r1, [pc, #0x370] ; [0x8014358] = 0x20004ba4 
08013fe6: a1f89a01   strh.w    r0, [r1, #0x19a]
08013fea: 1398       ldr       r0, [sp, #0x4c]
08013fec: 90f87600   ldrb.w    r0, [r0, #0x76]
08013ff0: 0790       str       r0, [sp, #0x1c]
08013ff2: 1398       ldr       r0, [sp, #0x4c]
08013ff4: 90f87500   ldrb.w    r0, [r0, #0x75]
08013ff8: 0690       str       r0, [sp, #0x18]
08013ffa: 0799       ldr       r1, [sp, #0x1c]
08013ffc: fdf707fa   bl        #0x801140e
08014000: d549       ldr       r1, [pc, #0x354] ; [0x8014358] = 0x20004ba4 
08014002: 81f8a001   strb.w    r0, [r1, #0x1a0]
08014006: 1398       ldr       r0, [sp, #0x4c]
08014008: 90f87800   ldrb.w    r0, [r0, #0x78]
0801400c: 0790       str       r0, [sp, #0x1c]
0801400e: 1398       ldr       r0, [sp, #0x4c]
08014010: 90f87700   ldrb.w    r0, [r0, #0x77]
08014014: 0690       str       r0, [sp, #0x18]
08014016: 0799       ldr       r1, [sp, #0x1c]
08014018: fdf7f9f9   bl        #0x801140e
0801401c: ce49       ldr       r1, [pc, #0x338] ; [0x8014358] = 0x20004ba4 
0801401e: 81f8a101   strb.w    r0, [r1, #0x1a1]
08014022: 1398       ldr       r0, [sp, #0x4c]
08014024: 90f87a00   ldrb.w    r0, [r0, #0x7a]
08014028: 0790       str       r0, [sp, #0x1c]
0801402a: 1398       ldr       r0, [sp, #0x4c]
0801402c: 90f87900   ldrb.w    r0, [r0, #0x79]
08014030: 0690       str       r0, [sp, #0x18]
08014032: 0799       ldr       r1, [sp, #0x1c]
08014034: fdf7ebf9   bl        #0x801140e
08014038: c749       ldr       r1, [pc, #0x31c] ; [0x8014358] = 0x20004ba4 
0801403a: 81f89801   strb.w    r0, [r1, #0x198]
0801403e: 1398       ldr       r0, [sp, #0x4c]
08014040: 90f87c00   ldrb.w    r0, [r0, #0x7c]
08014044: 0790       str       r0, [sp, #0x1c]
08014046: 1398       ldr       r0, [sp, #0x4c]
08014048: 90f87b00   ldrb.w    r0, [r0, #0x7b]
0801404c: 0690       str       r0, [sp, #0x18]
0801404e: 0799       ldr       r1, [sp, #0x1c]
08014050: fdf7ddf9   bl        #0x801140e
08014054: c049       ldr       r1, [pc, #0x300] ; [0x8014358] = 0x20004ba4 
08014056: 81f89e01   strb.w    r0, [r1, #0x19e]
0801405a: 1398       ldr       r0, [sp, #0x4c]
0801405c: 90f87e00   ldrb.w    r0, [r0, #0x7e]
08014060: 0790       str       r0, [sp, #0x1c]
08014062: 1398       ldr       r0, [sp, #0x4c]
08014064: 90f87d00   ldrb.w    r0, [r0, #0x7d]
08014068: 0690       str       r0, [sp, #0x18]
0801406a: 0799       ldr       r1, [sp, #0x1c]
0801406c: fdf7cff9   bl        #0x801140e
08014070: 0146       mov       r1, r0
08014072: b948       ldr       r0, [pc, #0x2e4] ; [0x8014358] = 0x20004ba4 
08014074: 80f89f11   strb.w    r1, [r0, #0x19f]
08014078: 1398       ldr       r0, [sp, #0x4c]
0801407a: 7f30       adds      r0, #0x7f
0801407c: 0af080ff   bl        #0x801ef80
08014080: 0146       mov       r1, r0
08014082: b548       ldr       r0, [pc, #0x2d4] ; [0x8014358] = 0x20004ba4 
08014084: a0f89c11   strh.w    r1, [r0, #0x19c]
08014088: c9e2       b         #0x801461e
0801408a: bdf83800   ldrh.w    r0, [sp, #0x38]
0801408e: 2828       cmp       r0, #0x28
08014090: 01d0       beq       #0x8014096
08014092: 0020       movs      r0, #0
08014094: 8de5       b         #0x8013bb2
08014096: 0020       movs      r0, #0
08014098: 0b90       str       r0, [sp, #0x2c]
0801409a: 18e0       b         #0x80140ce
0801409c: 0e21       movs      r1, #0xe
0801409e: 0b98       ldr       r0, [sp, #0x2c]
080140a0: 01eb4001   add.w     r1, r1, r0, lsl #1
080140a4: 1398       ldr       r0, [sp, #0x4c]
080140a6: 405c       ldrb      r0, [r0, r1]
080140a8: 0a90       str       r0, [sp, #0x28]
080140aa: 0d21       movs      r1, #0xd
080140ac: 0b98       ldr       r0, [sp, #0x2c]
080140ae: 01eb4001   add.w     r1, r1, r0, lsl #1
080140b2: 1398       ldr       r0, [sp, #0x4c]
080140b4: 405c       ldrb      r0, [r0, r1]
080140b6: 0990       str       r0, [sp, #0x24]
080140b8: 0a99       ldr       r1, [sp, #0x28]
080140ba: fdf7a8f9   bl        #0x801140e
080140be: a749       ldr       r1, [pc, #0x29c] ; [0x801435c] = 0x20004d37 
080140c0: c239       subs      r1, #0xc2
080140c2: 0b9a       ldr       r2, [sp, #0x2c]
080140c4: 8854       strb      r0, [r1, r2]
080140c6: 0b98       ldr       r0, [sp, #0x2c]
080140c8: 401c       adds      r0, r0, #1
080140ca: c0b2       uxtb      r0, r0
080140cc: 0b90       str       r0, [sp, #0x2c]
080140ce: 0b98       ldr       r0, [sp, #0x2c]
080140d0: 1428       cmp       r0, #0x14
080140d2: e3db       blt       #0x801409c
080140d4: a3e2       b         #0x801461e
080140d6: bdf83800   ldrh.w    r0, [sp, #0x38]
080140da: 2828       cmp       r0, #0x28
080140dc: 01d0       beq       #0x80140e2
080140de: 0020       movs      r0, #0
080140e0: 67e5       b         #0x8013bb2
080140e2: 0020       movs      r0, #0
080140e4: 0b90       str       r0, [sp, #0x2c]
080140e6: 18e0       b         #0x801411a
080140e8: 0e21       movs      r1, #0xe
080140ea: 0b98       ldr       r0, [sp, #0x2c]
080140ec: 01eb4001   add.w     r1, r1, r0, lsl #1
080140f0: 1398       ldr       r0, [sp, #0x4c]
080140f2: 405c       ldrb      r0, [r0, r1]
080140f4: 0a90       str       r0, [sp, #0x28]
080140f6: 0d21       movs      r1, #0xd
080140f8: 0b98       ldr       r0, [sp, #0x2c]
080140fa: 01eb4001   add.w     r1, r1, r0, lsl #1
080140fe: 1398       ldr       r0, [sp, #0x4c]
08014100: 405c       ldrb      r0, [r0, r1]
08014102: 0990       str       r0, [sp, #0x24]
08014104: 0a99       ldr       r1, [sp, #0x28]
08014106: fdf782f9   bl        #0x801140e
0801410a: 9449       ldr       r1, [pc, #0x250] ; [0x801435c] = 0x20004d37 
0801410c: 1031       adds      r1, #0x10
0801410e: 0b9a       ldr       r2, [sp, #0x2c]
08014110: 8854       strb      r0, [r1, r2]
08014112: 0b98       ldr       r0, [sp, #0x2c]
08014114: 401c       adds      r0, r0, #1
08014116: c0b2       uxtb      r0, r0
08014118: 0b90       str       r0, [sp, #0x2c]
0801411a: 0b98       ldr       r0, [sp, #0x2c]
0801411c: 1428       cmp       r0, #0x14
0801411e: e3db       blt       #0x80140e8
08014120: 7de2       b         #0x801461e
08014122: 0c98       ldr       r0, [sp, #0x30]
08014124: 401c       adds      r0, r0, #1
08014126: 80b2       uxth      r0, r0
08014128: 0c90       str       r0, [sp, #0x30]
0801412a: 00bf       nop       
0801412c: 0c98       ldr       r0, [sp, #0x30]
0801412e: 401c       adds      r0, r0, #1
08014130: 80b2       uxth      r0, r0
08014132: 0c90       str       r0, [sp, #0x30]
08014134: 00bf       nop       
08014136: 0c98       ldr       r0, [sp, #0x30]
08014138: 401c       adds      r0, r0, #1
0801413a: 80b2       uxth      r0, r0
0801413c: 0c90       str       r0, [sp, #0x30]
0801413e: 00bf       nop       
08014140: 0c98       ldr       r0, [sp, #0x30]
08014142: 401c       adds      r0, r0, #1
08014144: 80b2       uxth      r0, r0
08014146: 0c90       str       r0, [sp, #0x30]
08014148: 00bf       nop       
0801414a: 0c98       ldr       r0, [sp, #0x30]
0801414c: 401c       adds      r0, r0, #1
0801414e: 80b2       uxth      r0, r0
08014150: 0c90       str       r0, [sp, #0x30]
08014152: 00bf       nop       
08014154: 0c98       ldr       r0, [sp, #0x30]
08014156: 401c       adds      r0, r0, #1
08014158: 80b2       uxth      r0, r0
0801415a: 0c90       str       r0, [sp, #0x30]
0801415c: 00bf       nop       
0801415e: 0c98       ldr       r0, [sp, #0x30]
08014160: 401c       adds      r0, r0, #1
08014162: 80b2       uxth      r0, r0
08014164: 0c90       str       r0, [sp, #0x30]
08014166: 00bf       nop       
08014168: 0c98       ldr       r0, [sp, #0x30]
0801416a: 401c       adds      r0, r0, #1
0801416c: 80b2       uxth      r0, r0
0801416e: 0c90       str       r0, [sp, #0x30]
08014170: 00bf       nop       
08014172: 0c98       ldr       r0, [sp, #0x30]
08014174: 401c       adds      r0, r0, #1
08014176: 80b2       uxth      r0, r0
08014178: 0c90       str       r0, [sp, #0x30]
0801417a: 00bf       nop       
0801417c: 0c98       ldr       r0, [sp, #0x30]
0801417e: 401c       adds      r0, r0, #1
08014180: 80b2       uxth      r0, r0
08014182: 0c90       str       r0, [sp, #0x30]
08014184: 00bf       nop       
08014186: 0c98       ldr       r0, [sp, #0x30]
08014188: 401c       adds      r0, r0, #1
0801418a: 80b2       uxth      r0, r0
0801418c: 0c90       str       r0, [sp, #0x30]
0801418e: 00bf       nop       
08014190: 0c98       ldr       r0, [sp, #0x30]
08014192: 401c       adds      r0, r0, #1
08014194: 80b2       uxth      r0, r0
08014196: 0c90       str       r0, [sp, #0x30]
08014198: 00bf       nop       
0801419a: 0c98       ldr       r0, [sp, #0x30]
0801419c: 401c       adds      r0, r0, #1
0801419e: 80b2       uxth      r0, r0
080141a0: 0c90       str       r0, [sp, #0x30]
080141a2: 00bf       nop       
080141a4: 0c98       ldr       r0, [sp, #0x30]
080141a6: 401c       adds      r0, r0, #1
080141a8: 80b2       uxth      r0, r0
080141aa: 0c90       str       r0, [sp, #0x30]
080141ac: 00bf       nop       
080141ae: 0c98       ldr       r0, [sp, #0x30]
080141b0: 401c       adds      r0, r0, #1
080141b2: 80b2       uxth      r0, r0
080141b4: 0c90       str       r0, [sp, #0x30]
080141b6: 00bf       nop       
080141b8: 1298       ldr       r0, [sp, #0x48]
080141ba: 2528       cmp       r0, #0x25
080141bc: 10d1       bne       #0x80141e0
080141be: 1198       ldr       r0, [sp, #0x44]
080141c0: 0f28       cmp       r0, #0xf
080141c2: 0dd1       bne       #0x80141e0
080141c4: 1098       ldr       r0, [sp, #0x40]
080141c6: 4628       cmp       r0, #0x46
080141c8: 0ad1       bne       #0x80141e0
080141ca: 0f98       ldr       r0, [sp, #0x3c]
080141cc: 40b9       cbnz      r0, #0x80141e0
080141ce: 0c98       ldr       r0, [sp, #0x30]
080141d0: c0b2       uxtb      r0, r0
080141d2: 0122       movs      r2, #1
080141d4: 0146       mov       r1, r0
080141d6: 0b90       str       r0, [sp, #0x2c]
080141d8: 0020       movs      r0, #0
080141da: 04f0cdf9   bl        #0x8018578
080141de: 07e0       b         #0x80141f0
080141e0: 0c98       ldr       r0, [sp, #0x30]
080141e2: c0b2       uxtb      r0, r0
080141e4: 0022       movs      r2, #0
080141e6: 0146       mov       r1, r0
080141e8: 0b90       str       r0, [sp, #0x2c]
080141ea: 1046       mov       r0, r2
080141ec: 04f0c4f9   bl        #0x8018578
080141f0: 15e2       b         #0x801461e
080141f2: 0c98       ldr       r0, [sp, #0x30]
080141f4: 401c       adds      r0, r0, #1
080141f6: 80b2       uxth      r0, r0
080141f8: 0c90       str       r0, [sp, #0x30]
080141fa: 00bf       nop       
080141fc: 0c98       ldr       r0, [sp, #0x30]
080141fe: 401c       adds      r0, r0, #1
08014200: 80b2       uxth      r0, r0
08014202: 0c90       str       r0, [sp, #0x30]
08014204: 00bf       nop       
08014206: 0c98       ldr       r0, [sp, #0x30]
08014208: 401c       adds      r0, r0, #1
0801420a: 80b2       uxth      r0, r0
0801420c: 0c90       str       r0, [sp, #0x30]
0801420e: 00bf       nop       
08014210: 0c98       ldr       r0, [sp, #0x30]
08014212: 401c       adds      r0, r0, #1
08014214: 80b2       uxth      r0, r0
08014216: 0c90       str       r0, [sp, #0x30]
08014218: 00bf       nop       
0801421a: 0c98       ldr       r0, [sp, #0x30]
0801421c: 401c       adds      r0, r0, #1
0801421e: 80b2       uxth      r0, r0
08014220: 0c90       str       r0, [sp, #0x30]
08014222: 00bf       nop       
08014224: 0c98       ldr       r0, [sp, #0x30]
08014226: 401c       adds      r0, r0, #1
08014228: 80b2       uxth      r0, r0
0801422a: 0c90       str       r0, [sp, #0x30]
0801422c: 00bf       nop       
0801422e: 0c98       ldr       r0, [sp, #0x30]
08014230: 401c       adds      r0, r0, #1
08014232: 80b2       uxth      r0, r0
08014234: 0c90       str       r0, [sp, #0x30]
08014236: 00bf       nop       
08014238: 0c98       ldr       r0, [sp, #0x30]
0801423a: 401c       adds      r0, r0, #1
0801423c: 80b2       uxth      r0, r0
0801423e: 0c90       str       r0, [sp, #0x30]
08014240: 00bf       nop       
08014242: 0c98       ldr       r0, [sp, #0x30]
08014244: 401c       adds      r0, r0, #1
08014246: 80b2       uxth      r0, r0
08014248: 0c90       str       r0, [sp, #0x30]
0801424a: 00bf       nop       
0801424c: 0c98       ldr       r0, [sp, #0x30]
0801424e: 401c       adds      r0, r0, #1
08014250: 80b2       uxth      r0, r0
08014252: 0c90       str       r0, [sp, #0x30]
08014254: 00bf       nop       
08014256: 0c98       ldr       r0, [sp, #0x30]
08014258: 401c       adds      r0, r0, #1
0801425a: 80b2       uxth      r0, r0
0801425c: 0c90       str       r0, [sp, #0x30]
0801425e: 00bf       nop       
08014260: 0c98       ldr       r0, [sp, #0x30]
08014262: 401c       adds      r0, r0, #1
08014264: 80b2       uxth      r0, r0
08014266: 0c90       str       r0, [sp, #0x30]
08014268: 00bf       nop       
0801426a: 0c98       ldr       r0, [sp, #0x30]
0801426c: 401c       adds      r0, r0, #1
0801426e: 80b2       uxth      r0, r0
08014270: 0c90       str       r0, [sp, #0x30]
08014272: 00bf       nop       
08014274: 0c98       ldr       r0, [sp, #0x30]
08014276: 401c       adds      r0, r0, #1
08014278: 80b2       uxth      r0, r0
0801427a: 0c90       str       r0, [sp, #0x30]
0801427c: 00bf       nop       
0801427e: 0c98       ldr       r0, [sp, #0x30]
08014280: 00eb0010   add.w     r0, r0, r0, lsl #4
08014284: 3649       ldr       r1, [pc, #0xd8] ; [0x8014360] = 0x20006300 
08014286: 0844       add       r0, r1
08014288: 4078       ldrb      r0, [r0, #1]
0801428a: 0b90       str       r0, [sp, #0x2c]
0801428c: 1298       ldr       r0, [sp, #0x48]
0801428e: 2528       cmp       r0, #0x25
08014290: 34d1       bne       #0x80142fc
08014292: 1198       ldr       r0, [sp, #0x44]
08014294: 0f28       cmp       r0, #0xf
08014296: 31d1       bne       #0x80142fc
08014298: 1098       ldr       r0, [sp, #0x40]
0801429a: 4628       cmp       r0, #0x46
0801429c: 2ed1       bne       #0x80142fc
0801429e: 0f98       ldr       r0, [sp, #0x3c]
080142a0: 60bb       cbnz      r0, #0x80142fc
080142a2: bdf83810   ldrh.w    r1, [sp, #0x38]
080142a6: 0b98       ldr       r0, [sp, #0x2c]
080142a8: b1eb400f   cmp.w     r1, r0, lsl #1
080142ac: 26d1       bne       #0x80142fc
080142ae: 0020       movs      r0, #0
080142b0: 0690       str       r0, [sp, #0x18]
080142b2: 17e0       b         #0x80142e4
080142b4: 0e21       movs      r1, #0xe
080142b6: 0698       ldr       r0, [sp, #0x18]
080142b8: 01eb4001   add.w     r1, r1, r0, lsl #1
080142bc: 1398       ldr       r0, [sp, #0x4c]
080142be: 405c       ldrb      r0, [r0, r1]
080142c0: 0590       str       r0, [sp, #0x14]
080142c2: 0d21       movs      r1, #0xd
080142c4: 0698       ldr       r0, [sp, #0x18]
080142c6: 01eb4001   add.w     r1, r1, r0, lsl #1
080142ca: 1398       ldr       r0, [sp, #0x4c]
080142cc: 405c       ldrb      r0, [r0, r1]
080142ce: 0490       str       r0, [sp, #0x10]
080142d0: 0599       ldr       r1, [sp, #0x14]
080142d2: fdf79cf8   bl        #0x801140e
080142d6: 07aa       add       r2, sp, #0x1c
080142d8: 0699       ldr       r1, [sp, #0x18]
080142da: 5054       strb      r0, [r2, r1]
080142dc: 0698       ldr       r0, [sp, #0x18]
080142de: 401c       adds      r0, r0, #1
080142e0: c0b2       uxtb      r0, r0
080142e2: 0690       str       r0, [sp, #0x18]
080142e4: 0b99       ldr       r1, [sp, #0x2c]
080142e6: 0698       ldr       r0, [sp, #0x18]
080142e8: 8842       cmp       r0, r1
080142ea: e3db       blt       #0x80142b4
080142ec: 0c98       ldr       r0, [sp, #0x30]
080142ee: c0b2       uxtb      r0, r0
080142f0: 07aa       add       r2, sp, #0x1c
080142f2: 0146       mov       r1, r0
080142f4: 0690       str       r0, [sp, #0x18]
080142f6: 0020       movs      r0, #0
080142f8: 04f066fb   bl        #0x80189c8
080142fc: 8fe1       b         #0x801461e
080142fe: 1298       ldr       r0, [sp, #0x48]
08014300: 2528       cmp       r0, #0x25
08014302: 3bd1       bne       #0x801437c
08014304: 1198       ldr       r0, [sp, #0x44]
08014306: 0f28       cmp       r0, #0xf
08014308: 38d1       bne       #0x801437c
0801430a: 1098       ldr       r0, [sp, #0x40]
0801430c: 4628       cmp       r0, #0x46
0801430e: 35d1       bne       #0x801437c
08014310: 0f98       ldr       r0, [sp, #0x3c]
08014312: 38bb       cbnz      r0, #0x8014364
08014314: bdf83800   ldrh.w    r0, [sp, #0x38]
08014318: 6028       cmp       r0, #0x60
0801431a: 2fd1       bne       #0x801437c
0801431c: 0020       movs      r0, #0
0801431e: 0290       str       r0, [sp, #8]
08014320: 18e0       b         #0x8014354
08014322: 0e21       movs      r1, #0xe
08014324: 0298       ldr       r0, [sp, #8]
08014326: 01eb4001   add.w     r1, r1, r0, lsl #1
0801432a: 1398       ldr       r0, [sp, #0x4c]
0801432c: 405c       ldrb      r0, [r0, r1]
0801432e: 0190       str       r0, [sp, #4]
08014330: 0d21       movs      r1, #0xd
08014332: 0298       ldr       r0, [sp, #8]
08014334: 01eb4001   add.w     r1, r1, r0, lsl #1
08014338: 1398       ldr       r0, [sp, #0x4c]
0801433a: 405c       ldrb      r0, [r0, r1]
0801433c: 0090       str       r0, [sp]
0801433e: 0199       ldr       r1, [sp, #4]
08014340: fdf765f8   bl        #0x801140e
08014344: 0146       mov       r1, r0
08014346: 03aa       add       r2, sp, #0xc
08014348: 0298       ldr       r0, [sp, #8]
0801434a: 1154       strb      r1, [r2, r0]
0801434c: 0298       ldr       r0, [sp, #8]
0801434e: 401c       adds      r0, r0, #1
08014350: c0b2       uxtb      r0, r0
08014352: 0290       str       r0, [sp, #8]
08014354: 0298       ldr       r0, [sp, #8]
08014356: 06e0       b         #0x8014366
08014364: 0ae0       b         #0x801437c
08014366: 2428       cmp       r0, #0x24
08014368: dbdb       blt       #0x8014322
0801436a: b048       ldr       r0, [pc, #0x2c0] ; [0x801462c] = 0x20004ba4 
0801436c: 4078       ldrb      r0, [r0, #1]
0801436e: 03aa       add       r2, sp, #0xc
08014370: 0146       mov       r1, r0
08014372: 0290       str       r0, [sp, #8]
08014374: 0020       movs      r0, #0
08014376: 03f0b1fb   bl        #0x8017adc
0801437a: 07e0       b         #0x801438c
0801437c: ab48       ldr       r0, [pc, #0x2ac] ; [0x801462c] = 0x20004ba4 
0801437e: 4078       ldrb      r0, [r0, #1]
08014380: 0022       movs      r2, #0
08014382: 0146       mov       r1, r0
08014384: 0290       str       r0, [sp, #8]
08014386: 1046       mov       r0, r2
08014388: 03f0bffa   bl        #0x801790a
0801438c: 47e1       b         #0x801461e
0801438e: 00bf       nop       
08014390: 00bf       nop       
08014392: 00bf       nop       
08014394: 00bf       nop       
08014396: 00bf       nop       
08014398: 00bf       nop       
0801439a: 1298       ldr       r0, [sp, #0x48]
0801439c: 2528       cmp       r0, #0x25
0801439e: 13d1       bne       #0x80143c8
080143a0: 1198       ldr       r0, [sp, #0x44]
080143a2: 0f28       cmp       r0, #0xf
080143a4: 10d1       bne       #0x80143c8
080143a6: 1098       ldr       r0, [sp, #0x40]
080143a8: 4628       cmp       r0, #0x46
080143aa: 0dd1       bne       #0x80143c8
080143ac: 0f98       ldr       r0, [sp, #0x3c]
080143ae: 58b9       cbnz      r0, #0x80143c8
080143b0: bdf83800   ldrh.w    r0, [sp, #0x38]
080143b4: 40b9       cbnz      r0, #0x80143c8
080143b6: 9d48       ldr       r0, [pc, #0x274] ; [0x801462c] = 0x20004ba4 
080143b8: 4078       ldrb      r0, [r0, #1]
080143ba: 0122       movs      r2, #1
080143bc: 0146       mov       r1, r0
080143be: 0b90       str       r0, [sp, #0x2c]
080143c0: 0020       movs      r0, #0
080143c2: 03f0a2fa   bl        #0x801790a
080143c6: 07e0       b         #0x80143d8
080143c8: 9848       ldr       r0, [pc, #0x260] ; [0x801462c] = 0x20004ba4 
080143ca: 4078       ldrb      r0, [r0, #1]
080143cc: 0022       movs      r2, #0
080143ce: 0146       mov       r1, r0
080143d0: 0b90       str       r0, [sp, #0x2c]
080143d2: 1046       mov       r0, r2
080143d4: 03f099fa   bl        #0x801790a
080143d8: 21e1       b         #0x801461e
080143da: 00bf       nop       
080143dc: 00bf       nop       
080143de: 00bf       nop       
080143e0: 1298       ldr       r0, [sp, #0x48]
080143e2: 2528       cmp       r0, #0x25
080143e4: 31d1       bne       #0x801444a
080143e6: 1198       ldr       r0, [sp, #0x44]
080143e8: 0f28       cmp       r0, #0xf
080143ea: 2ed1       bne       #0x801444a
080143ec: 1098       ldr       r0, [sp, #0x40]
080143ee: 4628       cmp       r0, #0x46
080143f0: 2bd1       bne       #0x801444a
080143f2: 0f98       ldr       r0, [sp, #0x3c]
080143f4: 48bb       cbnz      r0, #0x801444a
080143f6: bdf83800   ldrh.w    r0, [sp, #0x38]
080143fa: 0c28       cmp       r0, #0xc
080143fc: 25d1       bne       #0x801444a
080143fe: 0020       movs      r0, #0
08014400: 0290       str       r0, [sp, #8]
08014402: 17e0       b         #0x8014434
08014404: 0e21       movs      r1, #0xe
08014406: 0298       ldr       r0, [sp, #8]
08014408: 01eb4001   add.w     r1, r1, r0, lsl #1
0801440c: 1398       ldr       r0, [sp, #0x4c]
0801440e: 405c       ldrb      r0, [r0, r1]
08014410: 0190       str       r0, [sp, #4]
08014412: 0d21       movs      r1, #0xd
08014414: 0298       ldr       r0, [sp, #8]
08014416: 01eb4001   add.w     r1, r1, r0, lsl #1
0801441a: 1398       ldr       r0, [sp, #0x4c]
0801441c: 405c       ldrb      r0, [r0, r1]
0801441e: 0090       str       r0, [sp]
08014420: 0199       ldr       r1, [sp, #4]
08014422: fcf7f4ff   bl        #0x801140e
08014426: 03aa       add       r2, sp, #0xc
08014428: 0299       ldr       r1, [sp, #8]
0801442a: 5054       strb      r0, [r2, r1]
0801442c: 0298       ldr       r0, [sp, #8]
0801442e: 401c       adds      r0, r0, #1
08014430: c0b2       uxtb      r0, r0
08014432: 0290       str       r0, [sp, #8]
08014434: 0298       ldr       r0, [sp, #8]
08014436: 0628       cmp       r0, #6
08014438: e4db       blt       #0x8014404
0801443a: 7c48       ldr       r0, [pc, #0x1f0] ; [0x801462c] = 0x20004ba4 
0801443c: 4078       ldrb      r0, [r0, #1]
0801443e: 03aa       add       r2, sp, #0xc
08014440: 0146       mov       r1, r0
08014442: 0290       str       r0, [sp, #8]
08014444: 0020       movs      r0, #0
08014446: 03f049fb   bl        #0x8017adc
0801444a: e8e0       b         #0x801461e
0801444c: 1298       ldr       r0, [sp, #0x48]
0801444e: 2528       cmp       r0, #0x25
08014450: 2ed1       bne       #0x80144b0
08014452: 1098       ldr       r0, [sp, #0x40]
08014454: 4628       cmp       r0, #0x46
08014456: 2bd1       bne       #0x80144b0
08014458: 0f98       ldr       r0, [sp, #0x3c]
0801445a: 48bb       cbnz      r0, #0x80144b0
0801445c: bdf83800   ldrh.w    r0, [sp, #0x38]
08014460: 1c28       cmp       r0, #0x1c
08014462: 25d1       bne       #0x80144b0
08014464: 0020       movs      r0, #0
08014466: 0290       str       r0, [sp, #8]
08014468: 17e0       b         #0x801449a
0801446a: 0e21       movs      r1, #0xe
0801446c: 0298       ldr       r0, [sp, #8]
0801446e: 01eb4001   add.w     r1, r1, r0, lsl #1
08014472: 1398       ldr       r0, [sp, #0x4c]
08014474: 405c       ldrb      r0, [r0, r1]
08014476: 0190       str       r0, [sp, #4]
08014478: 0d21       movs      r1, #0xd
0801447a: 0298       ldr       r0, [sp, #8]
0801447c: 01eb4001   add.w     r1, r1, r0, lsl #1
08014480: 1398       ldr       r0, [sp, #0x4c]
08014482: 405c       ldrb      r0, [r0, r1]
08014484: 0090       str       r0, [sp]
08014486: 0199       ldr       r1, [sp, #4]
08014488: fcf7c1ff   bl        #0x801140e
0801448c: 03aa       add       r2, sp, #0xc
0801448e: 0299       ldr       r1, [sp, #8]
08014490: 5054       strb      r0, [r2, r1]
08014492: 0298       ldr       r0, [sp, #8]
08014494: 401c       adds      r0, r0, #1
08014496: c0b2       uxtb      r0, r0
08014498: 0290       str       r0, [sp, #8]
0801449a: 0298       ldr       r0, [sp, #8]
0801449c: 0e28       cmp       r0, #0xe
0801449e: e4db       blt       #0x801446a
080144a0: 6248       ldr       r0, [pc, #0x188] ; [0x801462c] = 0x20004ba4 
080144a2: 4078       ldrb      r0, [r0, #1]
080144a4: 03aa       add       r2, sp, #0xc
080144a6: 0146       mov       r1, r0
080144a8: 0290       str       r0, [sp, #8]
080144aa: 0020       movs      r0, #0
080144ac: 03f016fb   bl        #0x8017adc
080144b0: b5e0       b         #0x801461e
080144b2: 1298       ldr       r0, [sp, #0x48]
080144b4: 2528       cmp       r0, #0x25
080144b6: 35d1       bne       #0x8014524
080144b8: 1198       ldr       r0, [sp, #0x44]
080144ba: 0f28       cmp       r0, #0xf
080144bc: 32d1       bne       #0x8014524
080144be: 1098       ldr       r0, [sp, #0x40]
080144c0: 4628       cmp       r0, #0x46
080144c2: 2fd1       bne       #0x8014524
080144c4: 0f98       ldr       r0, [sp, #0x3c]
080144c6: 50bb       cbnz      r0, #0x801451e
080144c8: bdf83800   ldrh.w    r0, [sp, #0x38]
080144cc: 0228       cmp       r0, #2
080144ce: 29d1       bne       #0x8014524
080144d0: 0020       movs      r0, #0
080144d2: 0290       str       r0, [sp, #8]
080144d4: 17e0       b         #0x8014506
080144d6: 0e21       movs      r1, #0xe
080144d8: 0298       ldr       r0, [sp, #8]
080144da: 01eb4001   add.w     r1, r1, r0, lsl #1
080144de: 1398       ldr       r0, [sp, #0x4c]
080144e0: 405c       ldrb      r0, [r0, r1]
080144e2: 0190       str       r0, [sp, #4]
080144e4: 0d21       movs      r1, #0xd
080144e6: 0298       ldr       r0, [sp, #8]
080144e8: 01eb4001   add.w     r1, r1, r0, lsl #1
080144ec: 1398       ldr       r0, [sp, #0x4c]
080144ee: 405c       ldrb      r0, [r0, r1]
080144f0: 0090       str       r0, [sp]
080144f2: 0199       ldr       r1, [sp, #4]
080144f4: fcf78bff   bl        #0x801140e
080144f8: 03aa       add       r2, sp, #0xc
080144fa: 0299       ldr       r1, [sp, #8]
080144fc: 5054       strb      r0, [r2, r1]
080144fe: 0298       ldr       r0, [sp, #8]
08014500: 401c       adds      r0, r0, #1
08014502: c0b2       uxtb      r0, r0
08014504: 0290       str       r0, [sp, #8]
08014506: 0298       ldr       r0, [sp, #8]
08014508: 0128       cmp       r0, #1
0801450a: e4db       blt       #0x80144d6
0801450c: 4748       ldr       r0, [pc, #0x11c] ; [0x801462c] = 0x20004ba4 
0801450e: 4078       ldrb      r0, [r0, #1]
08014510: 03aa       add       r2, sp, #0xc
08014512: 0146       mov       r1, r0
08014514: 0290       str       r0, [sp, #8]
08014516: 0020       movs      r0, #0
08014518: 02e0       b         #0x8014520
0801451a: 29e0       b         #0x8014570
0801451c: 7ee0       b         #0x801461c
0801451e: 01e0       b         #0x8014524
08014520: 03f0dcfa   bl        #0x8017adc
08014524: 7be0       b         #0x801461e
08014526: 00bf       nop       
08014528: 00bf       nop       
0801452a: 00bf       nop       
0801452c: 00bf       nop       
0801452e: 00bf       nop       
08014530: 1298       ldr       r0, [sp, #0x48]
08014532: 2528       cmp       r0, #0x25
08014534: 13d1       bne       #0x801455e
08014536: 1198       ldr       r0, [sp, #0x44]
08014538: 0f28       cmp       r0, #0xf
0801453a: 10d1       bne       #0x801455e
0801453c: 1098       ldr       r0, [sp, #0x40]
0801453e: 4628       cmp       r0, #0x46
08014540: 0dd1       bne       #0x801455e
08014542: 0f98       ldr       r0, [sp, #0x3c]
08014544: 58b9       cbnz      r0, #0x801455e
08014546: bdf83800   ldrh.w    r0, [sp, #0x38]
0801454a: 40b9       cbnz      r0, #0x801455e
0801454c: 3748       ldr       r0, [pc, #0xdc] ; [0x801462c] = 0x20004ba4 
0801454e: 4078       ldrb      r0, [r0, #1]
08014550: 0122       movs      r2, #1
08014552: 0146       mov       r1, r0
08014554: 0b90       str       r0, [sp, #0x2c]
08014556: 0020       movs      r0, #0
08014558: 02f01efd   bl        #0x8016f98
0801455c: 07e0       b         #0x801456e
0801455e: 3348       ldr       r0, [pc, #0xcc] ; [0x801462c] = 0x20004ba4 
08014560: 4078       ldrb      r0, [r0, #1]
08014562: 0022       movs      r2, #0
08014564: 0146       mov       r1, r0
08014566: 0b90       str       r0, [sp, #0x2c]
08014568: 1046       mov       r0, r2
0801456a: 02f015fd   bl        #0x8016f98
0801456e: 56e0       b         #0x801461e
08014570: 1298       ldr       r0, [sp, #0x48]
08014572: 2528       cmp       r0, #0x25
08014574: 31d1       bne       #0x80145da
08014576: 1198       ldr       r0, [sp, #0x44]
08014578: 0f28       cmp       r0, #0xf
0801457a: 2ed1       bne       #0x80145da
0801457c: 1098       ldr       r0, [sp, #0x40]
0801457e: 4628       cmp       r0, #0x46
08014580: 2bd1       bne       #0x80145da
08014582: 0f98       ldr       r0, [sp, #0x3c]
08014584: 48bb       cbnz      r0, #0x80145da
08014586: bdf83800   ldrh.w    r0, [sp, #0x38]
0801458a: 0c28       cmp       r0, #0xc
0801458c: 25d1       bne       #0x80145da
0801458e: 0020       movs      r0, #0
08014590: 0290       str       r0, [sp, #8]
08014592: 17e0       b         #0x80145c4
08014594: 0e21       movs      r1, #0xe
08014596: 0298       ldr       r0, [sp, #8]
08014598: 01eb4001   add.w     r1, r1, r0, lsl #1
0801459c: 1398       ldr       r0, [sp, #0x4c]
0801459e: 405c       ldrb      r0, [r0, r1]
080145a0: 0190       str       r0, [sp, #4]
080145a2: 0d21       movs      r1, #0xd
080145a4: 0298       ldr       r0, [sp, #8]
080145a6: 01eb4001   add.w     r1, r1, r0, lsl #1
080145aa: 1398       ldr       r0, [sp, #0x4c]
080145ac: 405c       ldrb      r0, [r0, r1]
080145ae: 0090       str       r0, [sp]
080145b0: 0199       ldr       r1, [sp, #4]
080145b2: fcf72cff   bl        #0x801140e
080145b6: 03aa       add       r2, sp, #0xc
080145b8: 0299       ldr       r1, [sp, #8]
080145ba: 5054       strb      r0, [r2, r1]
080145bc: 0298       ldr       r0, [sp, #8]
080145be: 401c       adds      r0, r0, #1
080145c0: c0b2       uxtb      r0, r0
080145c2: 0290       str       r0, [sp, #8]
080145c4: 0298       ldr       r0, [sp, #8]
080145c6: 0628       cmp       r0, #6
080145c8: e4db       blt       #0x8014594
080145ca: 1848       ldr       r0, [pc, #0x60] ; [0x801462c] = 0x20004ba4 
080145cc: 4078       ldrb      r0, [r0, #1]
080145ce: 03aa       add       r2, sp, #0xc
080145d0: 0146       mov       r1, r0
080145d2: 0290       str       r0, [sp, #8]
080145d4: 0020       movs      r0, #0
080145d6: 02f0a9fd   bl        #0x801712c
080145da: 20e0       b         #0x801461e
080145dc: 1298       ldr       r0, [sp, #0x48]
080145de: 2528       cmp       r0, #0x25
080145e0: 13d1       bne       #0x801460a
080145e2: 1198       ldr       r0, [sp, #0x44]
080145e4: 0f28       cmp       r0, #0xf
080145e6: 10d1       bne       #0x801460a
080145e8: 1098       ldr       r0, [sp, #0x40]
080145ea: 4628       cmp       r0, #0x46
080145ec: 0dd1       bne       #0x801460a
080145ee: 0f98       ldr       r0, [sp, #0x3c]
080145f0: 58b9       cbnz      r0, #0x801460a
080145f2: bdf83800   ldrh.w    r0, [sp, #0x38]
080145f6: 40b9       cbnz      r0, #0x801460a
080145f8: 0c48       ldr       r0, [pc, #0x30] ; [0x801462c] = 0x20004ba4 
080145fa: 4078       ldrb      r0, [r0, #1]
080145fc: 0122       movs      r2, #1
080145fe: 0146       mov       r1, r0
08014600: 0b90       str       r0, [sp, #0x2c]
08014602: 0020       movs      r0, #0
08014604: 04f09efa   bl        #0x8018b44
08014608: 07e0       b         #0x801461a
0801460a: 0848       ldr       r0, [pc, #0x20] ; [0x801462c] = 0x20004ba4 
0801460c: 4078       ldrb      r0, [r0, #1]
0801460e: 0022       movs      r2, #0
08014610: 0146       mov       r1, r0
08014612: 0b90       str       r0, [sp, #0x2c]
08014614: 1046       mov       r0, r2
08014616: 04f095fa   bl        #0x8018b44
0801461a: 00e0       b         #0x801461e
0801461c: 00bf       nop       
0801461e: 00bf       nop       
08014620: 0020       movs      r0, #0
08014622: 0249       ldr       r1, [pc, #8] ; [0x801462c] = 0x20004ba4 
08014624: 4870       strb      r0, [r1, #1]
08014626: 0b98       ldr       r0, [sp, #0x2c]
08014628: 12e4       b         #0x8013e50
