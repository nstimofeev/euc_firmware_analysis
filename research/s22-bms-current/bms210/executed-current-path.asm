0x09b28: ce 07 c4         ldw X, $7c4
0x09b2b: a6 30            ld A, #$30
0x09b2d: d7 02 ff         ld ($2ff,X),A
0x09b30: ce 07 c4         ldw X, $7c4
0x09b33: 5c               incw X
0x09b34: cf 07 c4         ldw $7c4,X
0x09b37: ce 07 c4         ldw X, $7c4
0x09b3a: d7 02 ff         ld ($2ff,X),A
0x09b3d: ce 07 c4         ldw X, $7c4
0x09b40: 5c               incw X
0x09b41: cf 07 c4         ldw $7c4,X
0x09b44: 7b 01            ld A, ($01,SP)
0x09b46: 4c               inc A
0x09b47: 26 35            jrne $9b7e  (offset=53)
0x09b7e: ae 07 d0         ldw X, #$7d0
0x09b81: 7b 01            ld A, ($01,SP)
0x09b83: 8d 01 74 24      callf $17424
0x09b87: ce 07 c4         ldw X, $7c4
0x09b8a: c6 07 d0         ld A, $7d0
0x09b8d: d7 02 ff         ld ($2ff,X),A
0x09b90: ce 07 c4         ldw X, $7c4
0x09b93: 5c               incw X
0x09b94: cf 07 c4         ldw $7c4,X
0x09b97: c6 07 d1         ld A, $7d1
0x09b9a: ce 07 c4         ldw X, $7c4
0x09b9d: d7 02 ff         ld ($2ff,X),A
0x09ba0: ce 07 c4         ldw X, $7c4
0x09ba3: 5c               incw X
0x09ba4: cf 07 c4         ldw $7c4,X
0x09ba7: 0d 01            tnz ($01,SP)
0x09ba9: 26 03            jrne $9bae  (offset=3)
0x09bae: 7b 01            ld A, ($01,SP)
0x09bb0: a1 02            cp A, #$02
0x09bb2: 25 03            jrc $9bb7  (offset=3)
0x09bb7: ae 07 c4         ldw X, #$7c4
0x09bba: 7b 01            ld A, ($01,SP)
0x09bbc: 4a               dec A
0x09bbd: 8d 00 e5 a6      callf $e5a6
0x09bc1: cc c9 3e         jp $c93e
0x0e5a6: 8d 01 3b d5      callf $13bd5
0x0e5aa: 8d 01 3b 8e      callf $13b8e
0x0e5ae: 3b 00 0c         push $c
0x0e5b1: 52 02            sub SP, #$02
0x0e5b3: bf 08            ldw $08,X
0x0e5b5: 90 5f            clrw Y
0x0e5b7: 61               exg A, YL
0x0e5b8: ae 00 75         ldw X, #$75
0x0e5bb: bf 00            ldw $00,X
0x0e5bd: 93               ldw X, Y
0x0e5be: 8d 01 6b 72      callf $16b72
0x0e5c2: 1c 04 9b         addw X, #$49b
0x0e5c5: 1f 01            ldw ($01,SP),X
0x0e5c7: 1e 01            ldw X, ($01,SP)
0x0e5c9: 5c               incw X
0x0e5ca: bf 0e            ldw $0e,X
0x0e5cc: ae 07 d0         ldw X, #$7d0
0x0e5cf: 92 c6 0e         ld A, [$0e.w]
0x0e5d2: 8d 01 74 24      callf $17424
0x0e5d6: 92 ce 08         ldw X, [$08.w]
0x0e5d9: c6 07 d0         ld A, $7d0
0x0e5dc: d7 02 ff         ld ($2ff,X),A
0x0e5df: 92 ce 08         ldw X, [$08.w]
0x0e5e2: 5c               incw X
0x0e5e3: 92 cf 08         ldw [$08.w],X
0x0e5e6: c6 07 d1         ld A, $7d1
0x0e5e9: d7 02 ff         ld ($2ff,X),A
0x0e5ec: 92 ce 08         ldw X, [$08.w]
0x0e5ef: 5c               incw X
0x0e5f0: 92 cf 08         ldw [$08.w],X
0x0e5f3: 3f 0c            clr $0c
0x0e5f5: 20 60            jra $e657  (offset=96)
0x0e5f7: 5f               clrw X
0x0e5f8: 97               ld XL, A
0x0e5f9: 58               sllw X
0x0e5fa: 72 fb 01         addw X, ($01,SP)
0x0e5fd: 5c               incw X
0x0e5fe: 5c               incw X
0x0e5ff: bf 0a            ldw $0a,X
0x0e601: ae 07 d0         ldw X, #$7d0
0x0e604: 89               pushw X
0x0e605: 92 ce 0a         ldw X, [$0a.w]
0x0e608: 9e               ld A, XH
0x0e609: 85               popw X
0x0e60a: 8d 01 74 24      callf $17424
0x0e60e: 92 ce 08         ldw X, [$08.w]
0x0e611: c6 07 d0         ld A, $7d0
0x0e614: d7 02 ff         ld ($2ff,X),A
0x0e617: 92 ce 08         ldw X, [$08.w]
0x0e61a: 5c               incw X
0x0e61b: 92 cf 08         ldw [$08.w],X
0x0e61e: c6 07 d1         ld A, $7d1
0x0e621: d7 02 ff         ld ($2ff,X),A
0x0e624: 92 ce 08         ldw X, [$08.w]
0x0e627: 5c               incw X
0x0e628: 92 cf 08         ldw [$08.w],X
0x0e62b: ae 07 d0         ldw X, #$7d0
0x0e62e: 89               pushw X
0x0e62f: 92 ce 0a         ldw X, [$0a.w]
0x0e632: 9f               ld A, XL
0x0e633: 85               popw X
0x0e634: 8d 01 74 24      callf $17424
0x0e638: 92 ce 08         ldw X, [$08.w]
0x0e63b: c6 07 d0         ld A, $7d0
0x0e63e: d7 02 ff         ld ($2ff,X),A
0x0e641: 92 ce 08         ldw X, [$08.w]
0x0e644: 5c               incw X
0x0e645: 92 cf 08         ldw [$08.w],X
0x0e648: c6 07 d1         ld A, $7d1
0x0e64b: d7 02 ff         ld ($2ff,X),A
0x0e64e: 92 ce 08         ldw X, [$08.w]
0x0e651: 5c               incw X
0x0e652: 92 cf 08         ldw [$08.w],X
0x0e655: 3c 0c            inc $0c
0x0e657: b6 0c            ld A, $0c
0x0e659: 92 c1 0e         cp A, [$0e.w]
0x0e65c: 25 99            jrc $e5f7  (offset=-103)
0x0e65e: 1e 01            ldw X, ($01,SP)
0x0e660: 1c 00 42         addw X, #$42
0x0e663: bf 0e            ldw $0e,X
0x0e665: ae 07 d0         ldw X, #$7d0
0x0e668: 92 c6 0e         ld A, [$0e.w]
0x0e66b: 8d 01 74 24      callf $17424
0x0e66f: 92 ce 08         ldw X, [$08.w]
0x0e672: c6 07 d0         ld A, $7d0
0x0e675: d7 02 ff         ld ($2ff,X),A
0x0e678: 92 ce 08         ldw X, [$08.w]
0x0e67b: 5c               incw X
0x0e67c: 92 cf 08         ldw [$08.w],X
0x0e67f: c6 07 d1         ld A, $7d1
0x0e682: d7 02 ff         ld ($2ff,X),A
0x0e685: 92 ce 08         ldw X, [$08.w]
0x0e688: 5c               incw X
0x0e689: 92 cf 08         ldw [$08.w],X
0x0e68c: 3f 0c            clr $0c
0x0e68e: 20 61            jra $e6f1  (offset=97)
0x0e690: 5f               clrw X
0x0e691: 97               ld XL, A
0x0e692: 58               sllw X
0x0e693: 72 fb 01         addw X, ($01,SP)
0x0e696: 1c 00 43         addw X, #$43
0x0e699: bf 0a            ldw $0a,X
0x0e69b: ae 07 d0         ldw X, #$7d0
0x0e69e: 89               pushw X
0x0e69f: 92 ce 0a         ldw X, [$0a.w]
0x0e6a2: 9e               ld A, XH
0x0e6a3: 85               popw X
0x0e6a4: 8d 01 74 24      callf $17424
0x0e6a8: 92 ce 08         ldw X, [$08.w]
0x0e6ab: c6 07 d0         ld A, $7d0
0x0e6ae: d7 02 ff         ld ($2ff,X),A
0x0e6b1: 92 ce 08         ldw X, [$08.w]
0x0e6b4: 5c               incw X
0x0e6b5: 92 cf 08         ldw [$08.w],X
0x0e6b8: c6 07 d1         ld A, $7d1
0x0e6bb: d7 02 ff         ld ($2ff,X),A
0x0e6be: 92 ce 08         ldw X, [$08.w]
0x0e6c1: 5c               incw X
0x0e6c2: 92 cf 08         ldw [$08.w],X
0x0e6c5: ae 07 d0         ldw X, #$7d0
0x0e6c8: 89               pushw X
0x0e6c9: 92 ce 0a         ldw X, [$0a.w]
0x0e6cc: 9f               ld A, XL
0x0e6cd: 85               popw X
0x0e6ce: 8d 01 74 24      callf $17424
0x0e6d2: 92 ce 08         ldw X, [$08.w]
0x0e6d5: c6 07 d0         ld A, $7d0
0x0e6d8: d7 02 ff         ld ($2ff,X),A
0x0e6db: 92 ce 08         ldw X, [$08.w]
0x0e6de: 5c               incw X
0x0e6df: 92 cf 08         ldw [$08.w],X
0x0e6e2: c6 07 d1         ld A, $7d1
0x0e6e5: d7 02 ff         ld ($2ff,X),A
0x0e6e8: 92 ce 08         ldw X, [$08.w]
0x0e6eb: 5c               incw X
0x0e6ec: 92 cf 08         ldw [$08.w],X
0x0e6ef: 3c 0c            inc $0c
0x0e6f1: b6 0c            ld A, $0c
0x0e6f3: 92 c1 0e         cp A, [$0e.w]
0x0e6f6: 25 98            jrc $e690  (offset=-104)
0x0e6f8: 1e 01            ldw X, ($01,SP)
0x0e6fa: 1c 00 57         addw X, #$57
0x0e6fd: bf 0a            ldw $0a,X
0x0e6ff: ae 07 d0         ldw X, #$7d0
0x0e702: 89               pushw X
0x0e703: 92 ce 0a         ldw X, [$0a.w]
0x0e706: 9e               ld A, XH
0x0e707: 85               popw X
0x0e708: 8d 01 74 24      callf $17424
0x0e70c: 92 ce 08         ldw X, [$08.w]
0x0e70f: c6 07 d0         ld A, $7d0
0x0e712: d7 02 ff         ld ($2ff,X),A
0x0e715: 92 ce 08         ldw X, [$08.w]
0x0e718: 5c               incw X
0x0e719: 92 cf 08         ldw [$08.w],X
0x0e71c: c6 07 d1         ld A, $7d1
0x0e71f: d7 02 ff         ld ($2ff,X),A
0x0e722: 92 ce 08         ldw X, [$08.w]
0x0e725: 5c               incw X
0x0e726: 92 cf 08         ldw [$08.w],X
0x0e729: ae 07 d0         ldw X, #$7d0
0x0e72c: 89               pushw X
0x0e72d: 92 ce 0a         ldw X, [$0a.w]
0x0e730: 9f               ld A, XL
0x0e731: 85               popw X
0x0e732: 8d 01 74 24      callf $17424
0x0e736: 92 ce 08         ldw X, [$08.w]
0x0e739: c6 07 d0         ld A, $7d0
0x0e73c: d7 02 ff         ld ($2ff,X),A
0x0e73f: 92 ce 08         ldw X, [$08.w]
0x0e742: 5c               incw X
0x0e743: 92 cf 08         ldw [$08.w],X
0x0e746: c6 07 d1         ld A, $7d1
0x0e749: d7 02 ff         ld ($2ff,X),A
0x0e74c: 92 ce 08         ldw X, [$08.w]
0x0e74f: 5c               incw X
0x0e750: 92 cf 08         ldw [$08.w],X
0x0e753: 1e 01            ldw X, ($01,SP)
0x0e755: 1c 00 59         addw X, #$59
0x0e758: bf 0a            ldw $0a,X
0x0e75a: ae 07 d0         ldw X, #$7d0
0x0e75d: 89               pushw X
0x0e75e: 92 ce 0a         ldw X, [$0a.w]
0x0e761: 9e               ld A, XH
0x0e762: 85               popw X
0x0e763: 8d 01 74 24      callf $17424
0x0e767: 92 ce 08         ldw X, [$08.w]
0x0e76a: c6 07 d0         ld A, $7d0
0x0e76d: d7 02 ff         ld ($2ff,X),A
0x0e770: 92 ce 08         ldw X, [$08.w]
0x0e773: 5c               incw X
0x0e774: 92 cf 08         ldw [$08.w],X
0x0e777: c6 07 d1         ld A, $7d1
0x0e77a: d7 02 ff         ld ($2ff,X),A
0x0e77d: 92 ce 08         ldw X, [$08.w]
0x0e780: 5c               incw X
0x0e781: 92 cf 08         ldw [$08.w],X
0x0e784: ae 07 d0         ldw X, #$7d0
0x0e787: 89               pushw X
0x0e788: 92 ce 0a         ldw X, [$0a.w]
0x0e78b: 9f               ld A, XL
0x0e78c: 85               popw X
0x0e78d: 8d 01 74 24      callf $17424
0x0e791: 92 ce 08         ldw X, [$08.w]
0x0e794: c6 07 d0         ld A, $7d0
0x0e797: d7 02 ff         ld ($2ff,X),A
0x0e79a: 92 ce 08         ldw X, [$08.w]
0x0e79d: 5c               incw X
0x0e79e: 92 cf 08         ldw [$08.w],X
0x0e7a1: c6 07 d1         ld A, $7d1
0x0e7a4: d7 02 ff         ld ($2ff,X),A
0x0e7a7: 92 ce 08         ldw X, [$08.w]
0x0e7aa: 5c               incw X
0x0e7ab: 92 cf 08         ldw [$08.w],X
0x114ac: 8d 01 3b d5      callf $13bd5
0x114b0: 8d 01 3b da      callf $13bda
0x114b4: 52 01            sub SP, #$01
0x114b6: ae d8 f1         ldw X, #$d8f1
0x114b9: bf 0c            ldw $0c,X
0x114bb: ae 27 0f         ldw X, #$270f
0x114be: bf 0e            ldw $0e,X
0x114c0: 5f               clrw X
0x114c1: bf 0a            ldw $0a,X
0x114c3: bf 08            ldw $08,X
0x114c5: c6 08 62         ld A, $862
0x114c8: a1 0a            cp A, #$0a
0x114ca: 24 03            jrnc $114cf  (offset=3)
0x114cf: 72 5f 08 62      clr $862
0x114d3: 0f 01            clr ($01,SP)
0x114d5: 20 34            jra $1150b  (offset=52)
0x114d7: 7b 01            ld A, ($01,SP)
0x114d9: 5f               clrw X
0x114da: 97               ld XL, A
0x114db: 58               sllw X
0x114dc: de 01 6f         ldw X, ($16f,X)
0x114df: 90 93            ldw Y, X
0x114e1: 8d 01 32 bd      callf $132bd
0x114e5: 8d 01 3c 7d      callf $13c7d
0x114e9: 8d 01 3c 63      callf $13c63
0x114ed: 8d 01 31 69      callf $13169
0x114f1: 8d 01 3c a4      callf $13ca4
0x114f5: 90 bf 00         ldw $00,Y
0x114f8: be 0c            ldw X, $0c
0x114fa: b3 00            cpw X, $00
0x114fc: 2e 03            jrsge $11501  (offset=3)
0x114fe: 90 bf 0c         ldw $0c,Y
0x11501: 90 b3 0e         cpw Y, $0e
0x11504: 2e 03            jrsge $11509  (offset=3)
0x11506: 90 bf 0e         ldw $0e,Y
0x11509: 0c 01            inc ($01,SP)
0x1150b: 7b 01            ld A, ($01,SP)
0x1150d: a1 c8            cp A, #$c8
0x1150f: 25 c6            jrc $114d7  (offset=-58)
0x11511: be 0e            ldw X, $0e
0x11513: 72 bb 00 0c      addw X, $c
0x11517: 8d 01 32 bd      callf $132bd
0x1151b: 8d 01 3c 7d      callf $13c7d
0x1151f: 8d 01 3c 63      callf $13c63
0x11523: 8d 01 31 84      callf $13184
0x11527: 8d 01 3c a4      callf $13ca4
0x1152b: ce 00 10         ldw X, $10
0x1152e: 8d 00 df 6c      callf $df6c
0x11532: 8d 00 dd 6f      callf $dd6f
0x1153a: 8d 01 3c be      callf $13cbe
0x1153e: 8d 01 3c 63      callf $13c63
0x11542: 8d 00 e0 39      callf $e039
0x11546: 8d 00 de 13      callf $de13
0x1154e: 8d 01 3c 97      callf $13c97
0x11552: 8d 00 dd 78      callf $dd78
0x11556: 8d 00 dd 6f      callf $dd6f
0x1155e: 8d 01 3c be      callf $13cbe
0x11562: 5f               clrw X
0x11563: bf 04            ldw $04,X
0x11565: 5c               incw X
0x11566: bf 06            ldw $06,X
0x11568: 8d 01 3c 63      callf $13c63
0x1156c: 8d 01 32 95      callf $13295
0x11570: 2f 24            jrslt $11596  (offset=36)
0x11572: 8d 01 3c 70      callf $13c70
0x11576: 8d 00 dd 6f      callf $dd6f
0x1157e: 8d 00 de 13      callf $de13
0x11586: ae 07 43         ldw X, #$743
0x11589: 8d 00 dd 75      callf $dd75
0x1158d: ae 07 37         ldw X, #$737
0x11590: 8d 01 5a ac      callf $15aac
0x11594: 20 1a            jra $115b0  (offset=26)
0x11596: 8d 01 3c 70      callf $13c70
0x1159a: 8d 00 dd 6f      callf $dd6f
0x115a2: ae 07 3f         ldw X, #$73f
0x115a5: 8d 00 dd 75      callf $dd75
0x115a9: ae 07 37         ldw X, #$737
0x115ac: 8d 01 5a ac      callf $15aac
0x115b0: 8d 01 5a 58      callf $15a58
0x115b4: 8d 00 df 08      callf $df08
0x115bc: 24 11            jrnc $115cf  (offset=17)
0x115be: ae 07 37         ldw X, #$737
0x115c1: 8d 01 5a 58      callf $15a58
0x115c5: 8d 00 de fd      callf $defd
0x115cd: 24 4e            jrnc $1161d  (offset=78)
0x115cf: ae 07 37         ldw X, #$737
0x115d2: 8d 01 5a 58      callf $15a58
0x115d6: 8d 00 df 08      callf $df08
0x115de: 24 16            jrnc $115f6  (offset=22)
0x115e0: ae 07 37         ldw X, #$737
0x115e3: 8d 01 5a 58      callf $15a58
0x115e7: 8d 00 de fd      callf $defd
0x115ef: 25 05            jrc $115f6  (offset=5)
0x115f6: 72 04 08 15 29   btjt $815, #2, $11624  (offset=41)
0x115fb: ae 07 37         ldw X, #$737
0x115fe: 8d 01 5a 58      callf $15a58
0x11602: 8d 00 df 08      callf $df08
0x1160a: 24 18            jrnc $11624  (offset=24)
0x1161d: 5f               clrw X
0x1161e: cf 07 37         ldw $737,X
0x11621: cf 07 39         ldw $739,X
0x11624: ae 07 37         ldw X, #$737
0x11627: 8d 01 5a 58      callf $15a58
0x1162b: 8d 00 de fd      callf $defd
0x11633: 24 14            jrnc $11649  (offset=20)
0x11635: ae 07 37         ldw X, #$737
0x11638: 8d 01 5a 58      callf $15a58
0x1163c: 8d 00 df 08      callf $df08
0x11644: 25 03            jrc $11649  (offset=3)
0x11646: cc 17 2d         jp $172d
0x11649: ae 07 37         ldw X, #$737
0x1164c: 8d 01 5a 58      callf $15a58
0x11650: ae 07 3b         ldw X, #$73b
0x11653: 8d 01 5a ac      callf $15aac
0x11657: 8d 01 5a 58      callf $15a58
0x1165b: 8d 00 dc 98      callf $dc98
0x11663: ae 07 37         ldw X, #$737
0x11666: 8d 00 df 0f      callf $df0f
0x1166a: 24 31            jrnc $1169d  (offset=49)
0x1169d: ae 07 3b         ldw X, #$73b
0x116a0: 8d 01 5a 58      callf $15a58
0x116a4: 8d 00 dc 98      callf $dc98
0x116ac: 8d 01 3c 7d      callf $13c7d
0x116b0: ae 07 37         ldw X, #$737
0x116b3: 8d 01 5a 58      callf $15a58
0x116b7: 8d 00 df 0c      callf $df0c
0x116bb: 24 66            jrnc $11723  (offset=102)
0x116f0: ae 07 37         ldw X, #$737
0x116f3: 8d 01 5a 58      callf $15a58
0x116f7: 8d 00 dd 6f      callf $dd6f
0x116ff: 8d 01 3c a4      callf $13ca4
0x11703: ae 07 3b         ldw X, #$73b
0x11706: 8d 01 5a 58      callf $15a58
0x1170a: 8d 00 dd 6f      callf $dd6f
0x11712: 8d 01 3c 8a      callf $13c8a
0x11716: 8d 00 dc a1      callf $dca1
0x1171a: ae 07 3b         ldw X, #$73b
0x1171d: 8d 01 5a ac      callf $15aac
0x11723: 72 5f 07 d6      clr $7d6
0x11727: 72 5f 07 d7      clr $7d7
0x1172b: 20 07            jra $11734  (offset=7)
0x1172d: 5f               clrw X
0x1172e: cf 07 3b         ldw $73b,X
0x11731: cf 07 3d         ldw $73d,X
0x12534: ae 07 3b         ldw X, #$73b
0x12537: 8d 01 5a 58      callf $15a58
0x1253b: 8d 00 de fd      callf $defd
0x12543: 25 31            jrc $12576  (offset=49)
0x12545: ae 07 3b         ldw X, #$73b
0x12548: 8d 01 5a 58      callf $15a58
0x1254c: 8d 00 df 08      callf $df08
0x12554: 24 20            jrnc $12576  (offset=32)
0x12556: ae 07 3b         ldw X, #$73b
0x12559: 8d 01 5a 58      callf $15a58
0x1255d: 8d 00 dc 98      callf $dc98
0x12565: 8d 00 de 13      callf $de13
0x1256d: 8d 00 df 8a      callf $df8a
0x12571: cf 04 f2         ldw $4f2,X
0x12574: 20 58            jra $125ce  (offset=88)
0x12576: ae 07 3b         ldw X, #$73b
0x12579: 8d 01 5a 58      callf $15a58
0x1257d: 8d 00 df 08      callf $df08
0x12585: 24 31            jrnc $125b8  (offset=49)
0x12587: ae 07 3b         ldw X, #$73b
0x1258a: 8d 01 5a 58      callf $15a58
0x1258e: 8d 00 de fd      callf $defd
0x12596: 25 20            jrc $125b8  (offset=32)
0x12598: ae 07 3b         ldw X, #$73b
0x1259b: 8d 01 5a 58      callf $15a58
0x1259f: 8d 00 dc 98      callf $dc98
0x125a7: 8d 00 de 13      callf $de13
0x125af: 8d 00 df 8a      callf $df8a
0x125b3: cf 04 f2         ldw $4f2,X
0x125b6: 20 16            jra $125ce  (offset=22)
0x125b8: ae 07 3b         ldw X, #$73b
0x125bb: 8d 01 5a 58      callf $15a58
0x125bf: 8d 00 de 13      callf $de13
0x125c7: 8d 00 df 8a      callf $df8a
0x125cb: cf 04 f2         ldw $4f2,X
0x15072: c6 53 44         ld A, $5344
0x15075: 5f               clrw X
0x15076: 97               ld XL, A
0x15077: 4f               clr A
0x15078: 02               rlwa X, A
0x15079: c6 53 45         ld A, $5345
0x1507c: 3f 00            clr $00
0x1507e: b7 01            ld $01,A
0x15080: 72 bb 00 00      addw X, $0
0x15084: bf 00            ldw $00,X
0x15086: c6 53 4a         ld A, $534a
0x15089: a4 f0            and A, #$f0
0x1508b: c7 53 4a         ld $534a,A
0x1508e: 72 5f 53 4b      clr $534b
0x15092: 72 5f 53 4c      clr $534c
0x15096: 72 5f 53 4d      clr $534d
0x1509a: c6 07 d4         ld A, $7d4
0x1509d: a1 c8            cp A, #$c8
0x1509f: 25 04            jrc $150a5  (offset=4)
0x150a5: c6 07 d2         ld A, $7d2
0x150a8: 27 08            jreq $150b2  (offset=8)
0x150aa: 4a               dec A
0x150ab: 27 12            jreq $150bf  (offset=18)
0x150b2: cf 07 92         ldw $792,X
0x150b5: 35 02 53 4b      mov $534b, #$02
0x150b9: 35 01 07 d2      mov $7d2, #$01
0x150bd: 20 67            jra $15126  (offset=103)
0x150bf: c6 07 d4         ld A, $7d4
0x150c2: 5f               clrw X
0x150c3: 97               ld XL, A
0x150c4: 58               sllw X
0x150c5: 1c 01 6f         addw X, #$16f
0x150c8: 90 ce 07 92      ldw Y, $792
0x150cc: 90 b3 00         cpw Y, $00
0x150cf: 24 0c            jrnc $150dd  (offset=12)
0x150d1: 90 be 00         ldw Y, $00
0x150d4: 90 50            negw Y
0x150d6: ff               ldw (X),Y
0x150d7: 72 5c 07 d4      inc $7d4
0x150db: 20 09            jra $150e6  (offset=9)
0x150dd: 90 ce 07 92      ldw Y, $792
0x150e1: ff               ldw (X),Y
0x150e2: 72 5c 07 d4      inc $7d4
0x150e6: c6 07 d3         ld A, $7d3
0x150e9: 27 37            jreq $15122  (offset=55)
0x15122: 72 5f 07 d2      clr $7d2
0x15126: c6 07 d2         ld A, $7d2
0x15129: 27 05            jreq $15130  (offset=5)
0x1512b: 72 12 53 40      bset $5340, #1
0x15130: c6 53 4a         ld A, $534a
0x15133: a4 f0            and A, #$f0
0x15135: c7 53 4a         ld $534a,A
0x15138: 72 5f 53 4b      clr $534b
0x1513c: 72 5f 53 4c      clr $534c
0x15140: 72 5f 53 4d      clr $534d
