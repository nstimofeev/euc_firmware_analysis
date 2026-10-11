/* AUTOMATIC GHIDRA PSEUDOCODE: navigation only; original bytes in selected-code.asm. */

/* ENTRY 0x08009d6c : FUN_08009d6c */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08009d6c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a708();
  if (iVar1 != 0) {
    FUN_0801f11c();
    iVar1 = FUN_08020a04();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0801c8c8();
      iVar1 = FUN_0800cd3c();
      if (iVar1 == 0) {
        DAT_200032b4 = DAT_200032b4 | 0x40;
      }
      FUN_08020fd0();
      FUN_08015fbc(0);
    }
    else {
      FUN_08015fbc(0);
    }
    iVar1 = FUN_0800ca9c();
    if (iVar1 == 2) {
      FUN_08022928();
    }
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    if ((DAT_20000094 & 0x80000000) != 0) {
      DAT_20000094 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    DAT_2000313c = DAT_20000094;
    FUN_080227b0();
    FUN_08009e54();
    FUN_0801fffc();
    FUN_08023af4();
    FUN_0800d114();
    FUN_08011b60(0x1c200);
    FUN_080174b0();
    FUN_08019dd8();
    FUN_0800eeb0(0x40,1);
    FUN_08024884();
    FUN_08022954();
    return 1;
  }
  return 0;
}




/* ENTRY 0x0800abb0 : FUN_0800abb0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800abb0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (_DAT_0803b000 == 0) {
      uVar1 = 0;
    }
    else if (_DAT_0803b800 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xab;
    }
  }
  else if (param_1 == 1) {
    if (_DAT_0803b800 == 0) {
      if (_DAT_0803b000 == -0x1112) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (_DAT_0803b000 == 0) {
      if (_DAT_0803b800 == -0x1112) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xab;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




/* ENTRY 0x0800ac08 : FUN_0800ac08 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800ac08(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (_DAT_0803e000 == 0) {
      if ((_DAT_0803e800 == -0x1112) && (_DAT_0803e814 != -1)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if (_DAT_0803e800 == 0) {
      if ((_DAT_0803e000 == -0x1112) && (_DAT_0803e014 != -1)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if ((_DAT_0803e000 == -0x1112) && (_DAT_0803e014 != -1)) {
      uVar1 = 0;
    }
    else if ((_DAT_0803e800 == -0x1112) && (_DAT_0803e814 != -1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xab;
    }
  }
  else if (param_1 == 1) {
    if (_DAT_0803e800 == 0) {
      if (_DAT_0803e000 == -0x1112) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (_DAT_0803e000 == 0) {
      if (_DAT_0803e800 == -0x1112) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xab;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




/* ENTRY 0x0800acb4 : FUN_0800acb4 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800acb4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (_DAT_0803f000 == 0) {
      if ((_DAT_0803f800 == -0x1112) && (_DAT_0803f814 != -1)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if (_DAT_0803f800 == 0) {
      if ((_DAT_0803f000 == -0x1112) && (_DAT_0803f014 != -1)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if ((_DAT_0803f000 == -0x1112) && (_DAT_0803f014 != -1)) {
      uVar1 = 0;
    }
    else if ((_DAT_0803f800 == -0x1112) && (_DAT_0803f814 != -1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xab;
    }
  }
  else if (param_1 == 1) {
    if (_DAT_0803f800 == 0) {
      if (_DAT_0803f000 == -0x1112) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (_DAT_0803f000 == 0) {
      if (_DAT_0803f800 == -0x1112) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xab;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




/* ENTRY 0x0800ad60 : FUN_0800ad60 */


int FUN_0800ad60(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b588(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b5d8(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b588(&DAT_0803b800);
  }
  return iVar1;
}




/* ENTRY 0x0800ad9c : FUN_0800ad9c */


int FUN_0800ad9c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b588(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b5d8(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b588(&DAT_0803e800);
  }
  return iVar1;
}




/* ENTRY 0x0800add8 : FUN_0800add8 */


int FUN_0800add8(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b588(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b5d8(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b588(&DAT_0803f800);
  }
  return iVar1;
}




/* ENTRY 0x0800ae14 : FUN_0800ae14 */


int FUN_0800ae14(void)

{
  int iVar1;
  
  iVar1 = FUN_0800ac08(0);
  if (iVar1 != 0xab) {
    for (DAT_2000013c = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_2000013c <= (short *)((iVar1 + 1) * 0x800 + 0x803dfeb) && (*DAT_2000013c != -1));
        DAT_2000013c = DAT_2000013c + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}




/* ENTRY 0x0800ae74 : FUN_0800ae74 */


int FUN_0800ae74(void)

{
  int iVar1;
  
  iVar1 = FUN_0800acb4(0);
  if (iVar1 != 0xab) {
    for (DAT_20000140 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000140 <= (short *)((iVar1 + 1) * 0x800 + 0x803efeb) && (*DAT_20000140 != -1));
        DAT_20000140 = DAT_20000140 + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}




/* ENTRY 0x0800aee4 : FUN_0800aee4 */


undefined4 FUN_0800aee4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar1 = FUN_0800ae14();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_08015a10();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ae14();
  }
  FUN_0800b5c8();
  return uVar3;
}




/* ENTRY 0x0800af1c : FUN_0800af1c */


undefined4 FUN_0800af1c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar1 = FUN_0800ae74();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_08015c48();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ae74();
  }
  FUN_0800b5c8();
  return uVar3;
}




/* ENTRY 0x0800af54 : FUN_0800af54 */


int FUN_0800af54(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800abb0(0);
  if (iVar1 == 1) {
    puVar3 = &DAT_0803b000;
    local_28 = &DAT_0803b800;
  }
  else {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar3 = &DAT_0803b800;
    local_28 = &DAT_0803b000;
  }
  iVar1 = FUN_0800b5d8(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800c268();
    iVar1 = FUN_0800b2b0(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_200000a6)[uVar2] != param_1) &&
            (iVar1 = FUN_0800b17c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b2b0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b588(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_0800b5d8(puVar3,0);
      }
    }
  }
  return iVar1;
}




/* ENTRY 0x0800b04c : FUN_0800b04c */


int FUN_0800b04c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800ac08(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b5d8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b338(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b588(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b5d8(puVar2,0);
  }
  return iVar1;
}




/* ENTRY 0x0800b04e : FUN_0800b04e */


int FUN_0800b04e(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800ac08(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b5d8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b338(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b588(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b5d8(puVar2,0);
  }
  return iVar1;
}




/* ENTRY 0x0800b0e4 : FUN_0800b0e4 */


int FUN_0800b0e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800acb4(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b5d8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b3c8(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b588(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b5d8(puVar2,0);
  }
  return iVar1;
}




/* ENTRY 0x0800b0e6 : FUN_0800b0e6 */


int FUN_0800b0e6(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800acb4(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b5d8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b3c8(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b588(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b5d8(puVar2,0);
  }
  return iVar1;
}




/* ENTRY 0x0800b17c : FUN_0800b17c */


int FUN_0800b17c(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800abb0(0);
  iVar2 = iVar1;
  if (iVar1 != 0xab) {
    for (puVar3 = (ushort *)(DAT_20000138 + -2); iVar2 = 1,
        (ushort *)(iVar1 * 0x800 + 0x803b002) < puVar3; puVar3 = puVar3 + -2) {
      if (*puVar3 == param_1) {
        *param_2 = puVar3[-1];
        return 0;
      }
    }
  }
  return iVar2;
}




/* ENTRY 0x0800b2b0 : FUN_0800b2b0 */


int FUN_0800b2b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800abb0(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1)
    {
      if (*DAT_20000138 == -1) {
        iVar1 = FUN_0800b5d8(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_0800b5d8((int)DAT_20000138 + 2,param_1);
        DAT_20000138 = DAT_20000138 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}




/* ENTRY 0x0800b338 : FUN_0800b338 */


int FUN_0800b338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0800ac08(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b5d8(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
        if (iVar1 != 4) {
          return iVar1;
        }
        DAT_2000013c = DAT_2000013c + 1;
      }
      iVar1 = 4;
    }
  }
  return iVar1;
}




/* ENTRY 0x0800b33a : FUN_0800b33a */


int FUN_0800b33a(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800ac08(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b5d8(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
        if (iVar1 != 4) {
          return iVar1;
        }
        DAT_2000013c = DAT_2000013c + 1;
      }
      iVar1 = 4;
    }
  }
  return iVar1;
}




/* ENTRY 0x0800b3c8 : FUN_0800b3c8 */


int FUN_0800b3c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0800acb4(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b5d8(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
        if (iVar1 != 4) {
          return iVar1;
        }
        DAT_20000140 = DAT_20000140 + 1;
      }
      iVar1 = 4;
    }
  }
  return iVar1;
}




/* ENTRY 0x0800b3ca : FUN_0800b3ca */


int FUN_0800b3ca(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800acb4(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b5d8(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
        if (iVar1 != 4) {
          return iVar1;
        }
        DAT_20000140 = DAT_20000140 + 1;
      }
      iVar1 = 4;
    }
  }
  return iVar1;
}




/* ENTRY 0x0800b47c : FUN_0800b47c */


int FUN_0800b47c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar2 = FUN_0800b338(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b04c(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b5c8();
  FUN_08008254(uVar1);
  return iVar2;
}




/* ENTRY 0x0800b47e : FUN_0800b47e */


int FUN_0800b47e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar2 = FUN_0800b338(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b04c(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b5c8();
  FUN_08008254(uVar1);
  return iVar2;
}




/* ENTRY 0x0800b4c4 : FUN_0800b4c4 */


int FUN_0800b4c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar2 = FUN_0800b3c8(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b0e4(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b5c8();
  FUN_08008254(uVar1);
  return iVar2;
}




/* ENTRY 0x0800b4c6 : FUN_0800b4c6 */


int FUN_0800b4c6(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b658();
  FUN_0800b57c(0x35);
  iVar2 = FUN_0800b3c8(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b0e4(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b5c8();
  FUN_08008254(uVar1);
  return iVar2;
}




/* ENTRY 0x0800b57c : FUN_0800b57c */


void FUN_0800b57c(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}




/* ENTRY 0x0800b588 : FUN_0800b588 */


void FUN_0800b588(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b670(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_0800b670(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}




/* ENTRY 0x0800b5c8 : FUN_0800b5c8 */


void FUN_0800b5c8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}




/* ENTRY 0x0800b5d8 : FUN_0800b5d8 */


void FUN_0800b5d8(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b670(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_0800b670(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}




/* ENTRY 0x0800b610 : FUN_0800b610 */


void FUN_0800b610(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b670(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_0800b670(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_0800b670(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}




/* ENTRY 0x0800b658 : FUN_0800b658 */


void FUN_0800b658(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}




/* ENTRY 0x0800c268 : FUN_0800c268 */


undefined4 FUN_0800c268(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800abb0(1);
  if (iVar1 == 0xab) {
    DAT_20000138 = (int *)0x8090800;
    uVar2 = 0xab;
  }
  else {
    for (DAT_20000138 = (int *)(&DAT_0803b000 + iVar1 * 0x800);
        DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1) {
      if (*DAT_20000138 == -1) {
        return 4;
      }
    }
    uVar2 = 0x80;
  }
  return uVar2;
}




/* ENTRY 0x0800f664 : FUN_0800f664 */


undefined1 FUN_0800f664(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0801c6f6(&DAT_2000008c);
  DAT_2000009c = CONCAT22(DAT_2000009c._2_2_,uVar2);
  FUN_0800b47c(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  uVar1 = FUN_0800b4c4(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  DAT_200000a0 = 0;
  return uVar1;
}




/* ENTRY 0x0800fdec : FUN_0800fdec */


void FUN_0800fdec(void)

{
  int iVar1;
  
  FUN_0800ce3c(&DAT_20003318);
  DAT_20000284 = DAT_20003318 - DAT_200033f8;
  DAT_20000288 = DAT_2000331c - DAT_200033fc;
  DAT_2000028c = DAT_20003320;
  DAT_20000278 = DAT_20003328 - DAT_20003404;
  DAT_2000027c = DAT_2000332c - DAT_20003408;
  DAT_20000280 = DAT_20003330 - DAT_2000340c;
  diag_acce_x = FUN_0800b50c(&DAT_20000230,DAT_20000284);
  diag_acce_y = FUN_0800b50c(&DAT_2000023c,DAT_20000288);
  diag_acce_z = FUN_0800b50c(&DAT_20000248,DAT_2000028c);
  DAT_20003340 = FUN_0800b50c(&DAT_20000254,-DAT_2000027c);
  DAT_20003344 = FUN_0800b50c(&DAT_20000260,DAT_20000278);
  DAT_20003348 = FUN_0800b50c(&DAT_2000026c,DAT_20000280);
  iVar1 = FUN_0800840e(DAT_20003350,DAT_20003354,5000,0);
  diag_gyro_x = DAT_20003340 - iVar1;
  iVar1 = FUN_0800840e(DAT_20003358,DAT_2000335c,5000,0);
  diag_gyro_y = DAT_20003344 - iVar1;
  iVar1 = FUN_0800840e(DAT_20003360,DAT_20003364,5000,0);
  diag_gyro_z = DAT_20003348 - iVar1;
  if (diag_acce_x < 0x1001) {
    if (diag_acce_x < -0x1000) {
      diag_acce_x = -0x1000;
    }
  }
  else {
    diag_acce_x = 0x1000;
  }
  if (diag_acce_y < 0x1001) {
    if (diag_acce_y < -0x1000) {
      diag_acce_y = -0x1000;
    }
  }
  else {
    diag_acce_y = 0x1000;
  }
  if (diag_acce_z < 0x1001) {
    if (diag_acce_z < -0x1000) {
      diag_acce_z = -0x1000;
    }
  }
  else {
    diag_acce_z = 0x1000;
  }
  FUN_08008974(&DAT_20003340);
  return;
}




/* ENTRY 0x080153f0 : FUN_080153f0 */


void FUN_080153f0(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_080155f0();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f56c(0xd8);
    FUN_0800f56c(param_2);
    FUN_0800f56c(0);
    FUN_0800f56c(0);
    DAT_422101bc = 1;
  }
  return;
}




/* ENTRY 0x08015438 : FUN_08015438 */


void FUN_08015438(int param_1)

{
  if (param_1 == 0) {
    FUN_080155f0();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f56c(199);
    DAT_422101bc = 1;
  }
  return;
}




/* ENTRY 0x08015610 : FUN_08015610 */


void FUN_08015610(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_080155f0();
  DAT_422101bc = 0;
  FUN_0800f56c(2);
  FUN_0800f56c((param_2 & 0xffffff) >> 0x10);
  FUN_0800f56c((param_2 & 0xffff) >> 8);
  FUN_0800f56c(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0800f56c(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}




/* ENTRY 0x08015660 : FUN_08015660 */


int FUN_08015660(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_08015610(param_1,param_2,iVar1);
  return iVar1;
}




/* ENTRY 0x08015818 : FUN_08015818 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015818(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800ad60();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b17c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b2b0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b5d8(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b17c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b2b0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b5d8(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800ad60();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b588(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_0800b588(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800ad60();
    }
  }
  else {
    iVar1 = FUN_0800ad60();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}




/* ENTRY 0x08015a10 : FUN_08015a10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015a10(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800ad9c();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803e800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b1e0(&local_2c);
      if (iVar1 != 1) {
        if (DAT_2000013c < &DAT_0803e800) {
          for (DAT_2000013c = (short *)&DAT_0803e804;
              (DAT_2000013c < (short *)0x803efeb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b47c(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b658();
        FUN_0800b57c(0x35);
      }
      iVar1 = FUN_0800b5d8(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b1e0(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_2000013c) {
          for (DAT_2000013c = (short *)&DAT_0803e004;
              (DAT_2000013c < (short *)0x803e7eb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b47c(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b658();
        FUN_0800b57c(0x35);
      }
      iVar1 = FUN_0800b5d8(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800ad9c();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b588(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_0800b588(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800ad9c();
    }
  }
  else {
    iVar1 = FUN_0800ad9c();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}




/* ENTRY 0x08015c48 : FUN_08015c48 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015c48(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800add8();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803f800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b248(&local_2c);
      if (iVar1 != 1) {
        if (DAT_20000140 < &DAT_0803f800) {
          for (DAT_20000140 = (short *)&DAT_0803f804;
              (DAT_20000140 < (short *)0x803ffeb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b4c4(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b658();
        FUN_0800b57c(0x35);
      }
      iVar1 = FUN_0800b5d8(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b248(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000140) {
          for (DAT_20000140 = (short *)&DAT_0803f004;
              (DAT_20000140 < (short *)0x803f7eb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b4c4(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b658();
        FUN_0800b57c(0x35);
      }
      iVar1 = FUN_0800b5d8(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b588(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b588(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800add8();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800b588(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_0800b588(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b5d8(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800add8();
    }
  }
  else {
    iVar1 = FUN_0800add8();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}




/* ENTRY 0x08015fbc : FUN_08015fbc */


undefined4 FUN_08015fbc(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08001340 == -0x3f11) {
    if (((DAT_08001344 == 0x3f10) && (0x4f9 < DAT_08001342)) && (DAT_08001342 < 0x614)) {
      DAT_200002ec = DAT_08001342;
      uVar1 = 1;
    }
    else if (param_1 == 0) {
      DAT_2000032d = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




/* ENTRY 0x080164bc : FUN_080164bc */


undefined4 FUN_080164bc(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_22c [4];
  ushort local_228;
  undefined1 local_226;
  ushort local_21e;
  undefined1 local_21c;
  byte local_21b;
  char local_21a;
  char local_219;
  undefined1 auStack_218 [496];
  int local_28;
  
  local_28 = 0;
  for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xffff) {
    local_22c[uVar2] = *(undefined1 *)(param_1 + uVar2);
  }
  uVar1 = FUN_080157d4(local_22c + 2,0x10);
  local_21a = (char)((ushort)uVar1 >> 8);
  local_219 = (char)uVar1;
  if ((local_21a == *(char *)(param_1 + 0x12)) && (local_219 == *(char *)(param_1 + 0x13))) {
    DAT_200009bc = 0x14;
    local_22c[0] = 0xaa;
    local_22c[1] = 0x55;
    if (local_21b == 0x10) {
      DAT_200009ca = CONCAT11(local_22c[2],local_22c[3]);
      DAT_200009c8 = local_21e;
      DAT_200009ce = 0;
      local_21c = 0x7a;
      if (local_21e < 0x16a9) {
        FUN_08017344(local_21e,DAT_200009ca);
      }
      else {
        DAT_200009ca = 0;
        DAT_200009c8 = 0;
      }
      local_21b = 0x30;
      local_21e = 0;
      local_22c[3] = 0;
      local_22c[2] = 0;
      DAT_200009d0 = '\0';
      DAT_20003154 = 0;
      local_28 = 1;
    }
    else if (local_21b < 0x11) {
      if (((local_21b != 0) && (local_21b == 1)) && (iVar4 = FUN_080169f0(), iVar4 == 1)) {
        FUN_080194d0(0);
        FUN_080194d0(1);
      }
    }
    else if (local_21b == 0x30) {
      DAT_200009ca = CONCAT11(local_22c[2],local_22c[3]);
      DAT_200009c8 = local_21e;
      DAT_200009ce = 0;
      local_21c = 0x7a;
      if (local_21e < 0x16a9) {
        FUN_08017344(local_21e,DAT_200009ca);
        local_21b = 0x31;
      }
      else {
        local_21b = 0x30;
        DAT_200009ca = 0;
        DAT_200009c8 = 0;
      }
      local_21e = 0;
      local_22c[3] = 0;
      local_22c[2] = 0;
      DAT_200009d0 = '\0';
      DAT_20003154 = 0;
      local_28 = 1;
    }
    else if (local_21b == 0x31) {
      if (DAT_200009c8 != 0) {
        uVar2 = (uint)local_228;
        if (DAT_200009ce < DAT_200009c8) {
          if (((DAT_200009ce == local_21e) && (uVar2 < 0x25)) &&
             (uVar5 = FUN_080157d4(auStack_218,uVar2 * 0xc),
             CONCAT11(local_22c[2],local_22c[3]) == uVar5)) {
            uVar5 = (uint)DAT_200009ce;
            FUN_0801739c(DAT_200009ce,auStack_218,uVar2);
            DAT_200009ce = DAT_200009ce + local_228;
            DAT_20003154 = (undefined1)((uVar5 * 0x32) / (uint)DAT_200009c8);
          }
          local_22c[2] = DAT_20003154;
          local_22c[3] = 0;
          local_228 = 0;
          local_226 = 0;
          local_21e = DAT_200009ce;
        }
        else {
          uVar2 = FUN_080157d4(0x8029008,(uint)DAT_200009c8 * 0xc);
          DAT_200009cc = FUN_080157b8(0x8029008,(uint)DAT_200009c8 * 0xc);
          if ((DAT_200009ca == uVar2) && (1000 < DAT_200009c8)) {
            local_22c[2] = DAT_20003154;
            local_22c[3] = 0;
            local_228 = 0;
            local_226 = 1;
            local_21e = 0xffff;
            local_21c = 0x7a;
            local_21b = 0x32;
            local_28 = 1;
            if (DAT_200009d0 == '\0') {
              FUN_080194d0(0);
              FUN_080194d0(1);
              DAT_200009d0 = '\x01';
            }
          }
          else {
            local_22c[2] = DAT_20003154;
            local_22c[3] = 0;
            local_228 = 0;
            local_226 = 0;
            local_21e = 0xffff;
            local_21c = 0x7a;
            local_21b = 0x32;
          }
        }
        local_28 = 1;
      }
    }
    else if (local_21b == 0x32) {
      local_22c[2] = 100;
      local_22c[3] = 0;
      local_228 = 0;
      local_226 = 0;
      local_21e = 0xffff;
      local_21c = 0x7a;
      local_21b = 0x32;
      local_28 = 1;
    }
    uVar3 = 0;
    if (local_28 != 0) {
      uVar1 = FUN_080157d4(local_22c + 2,0x10);
      local_21a = (char)((ushort)uVar1 >> 8);
      local_219 = (char)uVar1;
      uVar3 = FUN_0800f820(local_22c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* ENTRY 0x08017344 : FUN_08017344 */


void FUN_08017344(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0800b658();
  FUN_0800b57c(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009d1 = FUN_0800b588(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_0800b57c(0x34);
  DAT_200009d1 = FUN_0800b5d8(&DAT_08029000,param_1);
  DAT_200009d1 = FUN_0800b5d8(&DAT_08029004,param_2);
  FUN_0800b5c8();
  return;
}




/* ENTRY 0x0801739c : FUN_0801739c */


void FUN_0801739c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0800b658();
  FUN_0800b57c(0x34);
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
    for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
      DAT_200009d1 = FUN_0800b610((param_1 + uVar2) * 0xc + 0x8029008 + uVar1 * 4,
                                  *(undefined4 *)(param_2 + (uVar1 + (uVar2 * 3 & 0x3fffffff)) * 4))
      ;
    }
  }
  FUN_0800b57c(0x34);
  FUN_0800b5c8();
  return;
}




/* ENTRY 0x0801a4d0 : FUN_0801a4d0 */


void FUN_0801a4d0(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009dc = DAT_200009dc + 1;
  if ((DAT_200065f5 != '\0') && (DAT_200065f5 = FUN_080153e4(), DAT_200065f5 != '\0')) {
    return;
  }
  if (DAT_200065f4 == 0x24) {
LAB_0801b27c:
    if (DAT_200065fb == 0) {
      DAT_200065f4 = 0;
    }
    else {
      DAT_200065f5 = '\x01';
      DAT_200065f7 = DAT_200065ff << 0x10;
      FUN_080153f0(1,DAT_200065ff);
      DAT_200065ff = DAT_200065ff + 1;
      DAT_200065fb = DAT_200065fb + -1;
      DAT_200065f4 = 0x25;
    }
    return;
  }
  if (0x24 < DAT_200065f4) {
    if (DAT_200065f4 == 0x25) {
      DAT_200065f5 = 1;
      FUN_080153f0(0,DAT_200065ff);
      DAT_200065f4 = 0x24;
      return;
    }
    if (((DAT_200065f4 != 0xd2) && (DAT_200065f4 != 0xd3)) && (bVar2 = DAT_200065f4 == 0xd4, !bVar2)
       ) goto LAB_0801a506;
    goto LAB_0801b27c;
  }
  if (DAT_200065f4 == 2) {
    DAT_200065f5 = 1;
    FUN_080153f0(1,DAT_200065ff);
    DAT_200065f4 = 0;
    return;
  }
  if (2 < DAT_200065f4) {
    if ((DAT_200065f4 == 0x22) || (bVar2 = false, DAT_200065f4 == 0x23)) goto LAB_0801b27c;
LAB_0801a506:
    if (!bVar2) {
      return;
    }
    DAT_200065f5 = 1;
    FUN_08015438();
    DAT_200065f4 = 0;
    return;
  }
  if (DAT_200065f4 != 0) {
    bVar2 = DAT_200065f4 == 1;
    goto LAB_0801a506;
  }
  if (DAT_20006643 == 0) {
    if (DAT_20006675 == 0x60) {
      DAT_20006676 = 0;
      DAT_20006675 = 0;
    }
    else if (DAT_20006675 == 0x61) {
      if (DAT_2000664d != 0) {
        DAT_20006676 = 0x61;
      }
      DAT_20006675 = 0;
    }
    else if (DAT_20006675 == 0xe0) {
      DAT_20006676 = 0;
      DAT_20006675 = 0;
    }
    else if (DAT_20006675 == 0xe1) {
      if (DAT_20006682 != 0) {
        DAT_20006676 = 0xe1;
      }
      DAT_20006675 = 0;
    }
    if (DAT_20006676 != 0) {
      return;
    }
    if (DAT_20006677 == 0xef) {
      iVar1 = FUN_08019f28(0xef);
      if (iVar1 != 0) {
        DAT_20006643 = 0x30;
      }
      DAT_20006677 = 0;
      DAT_20006678 = 'J';
    }
    else if ((DAT_20006677 & 0xf0) == 0xe0) {
      iVar1 = FUN_08019f4c(DAT_20006677);
      if (iVar1 != 0) {
        DAT_20006643 = 0x30;
      }
      DAT_20006677 = 0;
      DAT_20006678 = 'J';
    }
    else if (DAT_20006678 == '\0') {
      if (DAT_20006677 == 0xf0) {
        iVar1 = FUN_08019f4c(0xf0);
        if (iVar1 != 0) {
          DAT_20006643 = 0x30;
        }
        DAT_20006677 = 0;
        DAT_20006679 = 'J';
      }
      else if (DAT_20006679 == '\0') {
        if (DAT_20006677 == 0) {
          if (DAT_20006675 == 0x23) {
            DAT_20006643 = DAT_20006675;
          }
          else if (DAT_200066a6 == '\0') {
            if (DAT_20006675 == 0xa3) {
              DAT_20006643 = DAT_20006675;
            }
            else if (DAT_200009d6 == -0x5b) {
              DAT_20006643 = 0x10;
              DAT_200009d6 = '\0';
            }
            else if (DAT_200009d6 == -0x5a) {
              DAT_20006643 = 0x90;
              DAT_200009d6 = '\0';
            }
            else if ((DAT_200009dc % 0x15 == 0x11) && (iVar1 = FUN_08019f4c(0), iVar1 != 0)) {
              DAT_20006643 = 0x30;
            }
          }
          else {
            FUN_08019e08(DAT_200066a6);
            DAT_20006643 = 0xb0;
            DAT_200066a6 = '\0';
          }
        }
        else {
          iVar1 = FUN_08019f4c(DAT_20006677);
          if (iVar1 != 0) {
            DAT_20006643 = 0x30;
          }
          DAT_20006677 = 0;
        }
      }
      else {
        iVar1 = FUN_08019f4c(0xfe);
        if (iVar1 != 0) {
          DAT_20006643 = 0x30;
        }
        DAT_20006679 = DAT_20006679 + -1;
      }
    }
    else {
      iVar1 = FUN_08019f4c(0xff);
      if (iVar1 != 0) {
        DAT_20006643 = 0x30;
      }
      DAT_20006678 = DAT_20006678 + -1;
    }
  }
  if (DAT_20006643 == 0x90) {
    DAT_200065f6 = 0xd2;
    DAT_20006643 = 0x91;
    goto code_r0x0801b092;
  }
  if (DAT_20006643 < 0x91) {
    if (DAT_20006643 == 0x21) {
LAB_0801a824:
      iVar1 = FUN_0801a41c(&DAT_20006645,&DAT_20006649,0);
      if (iVar1 == 1) {
        DAT_20006671 = DAT_20006645;
        DAT_20006643 = 0x23;
      }
      else if (iVar1 == 2) {
        DAT_20006645 = 0x4000;
        DAT_20006649 = 0x7fff;
        DAT_20006643 = 0x22;
      }
      goto code_r0x0801b092;
    }
    if (DAT_20006643 < 0x22) {
      if (DAT_20006643 == 0x11) {
        DAT_200065ff = 0x20;
        DAT_200065f6 = 2;
        DAT_20006643 = 0x12;
        goto code_r0x0801b092;
      }
      if (DAT_20006643 < 0x12) {
        if (DAT_20006643 == 0) goto code_r0x0801b092;
        bVar2 = DAT_20006643 == 0x10;
      }
      else {
        if (DAT_20006643 == 0x12) {
          DAT_20006603 = 0x1451090;
          DAT_200065fb = 4;
          DAT_200065ff = 0;
          DAT_200065f7 = 0x200000;
          DAT_200065f6 = 3;
          DAT_20006671 = 0;
          DAT_20006643 = 0x20;
          goto code_r0x0801b092;
        }
        bVar2 = false;
        if (DAT_20006643 == 0x20) {
          DAT_20006645 = 0;
          DAT_20006649 = 0x3fff;
          DAT_20006643 = 0x21;
          goto LAB_0801a824;
        }
      }
    }
    else {
      if (DAT_20006643 == 0x30) {
        if (DAT_20006671 == 0) {
          iVar1 = FUN_080155a4(0);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20006603,&DAT_20006534,0x40);
            DAT_200065fb = 0x40;
            DAT_200065ff = 0;
            DAT_200065f7 = DAT_20006671 << 6;
            DAT_200065f6 = 3;
            DAT_20006671 = DAT_20006671 + 1 & 0x7fff;
            DAT_20006643 = 0;
          }
          else {
            DAT_200065f6 = 0x23;
            DAT_20006643 = 0x31;
          }
        }
        else if (DAT_20006671 == 0x3fff) {
          DAT_200065f6 = 0x24;
          DAT_20006643 = 0x31;
        }
        else if (DAT_20006671 == 0x4000) {
          iVar1 = FUN_080155a4(0x100000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20006603,&DAT_20006534,0x40);
            DAT_200065fb = 0x40;
            DAT_200065ff = 0;
            DAT_200065f7 = DAT_20006671 << 6;
            DAT_200065f6 = 3;
            DAT_20006671 = DAT_20006671 + 1 & 0x7fff;
            DAT_20006643 = 0;
          }
          else {
            DAT_200065f6 = 0x24;
            DAT_20006643 = 0x31;
          }
        }
        else if (DAT_20006671 == 0x7fff) {
          DAT_200065f6 = 0x23;
          DAT_20006643 = 0x31;
        }
        else {
          FUN_08008494(&DAT_20006603,&DAT_20006534,0x40);
          DAT_200065fb = 0x40;
          DAT_200065ff = 0;
          DAT_200065f7 = DAT_20006671 << 6;
          DAT_200065f6 = 3;
          DAT_20006671 = DAT_20006671 + 1 & 0x7fff;
          DAT_20006643 = 0;
        }
        goto code_r0x0801b092;
      }
      if (DAT_20006643 < 0x31) {
        if (DAT_20006643 == 0x22) {
          iVar1 = FUN_0801a41c(&DAT_20006645,&DAT_20006649,0);
          if (iVar1 == 1) {
            DAT_20006671 = DAT_20006645;
            DAT_20006643 = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20006671 = 0;
            DAT_200065f6 = 0x22;
            DAT_20006643 = 0x23;
          }
          goto code_r0x0801b092;
        }
        bVar2 = false;
        if (DAT_20006643 == 0x23) {
          DAT_2000664d = 0x3ff8;
          DAT_20006651 = 0x3ff7;
          iVar1 = FUN_080155a4(((DAT_20006671 & 0xffff) - 0x3ff8 & 0x7fff) << 6);
          if ((iVar1 == -1) && (DAT_20006671 <= DAT_20006651)) {
            if (DAT_20006671 == 0) {
              DAT_20006651 = 0;
              DAT_2000664d = 0;
            }
            else {
              DAT_20006651 = DAT_20006671 - 1;
              DAT_2000664d = DAT_20006671;
            }
          }
          if (DAT_2000664d == 0) {
            DAT_20006675 = 0;
            if (DAT_200066ab == '\0') {
              DAT_20006643 = 0xa0;
              DAT_200066ab = '\x01';
            }
            else {
              DAT_20006643 = 0;
            }
          }
          else {
            DAT_20006655 = FUN_080155a4((((DAT_20006671 & 0xffff) - (DAT_20006651 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_20006659 = 0;
            DAT_2000665d = FUN_080155a4(((DAT_20006671 & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
            if (DAT_20006661 == 0) {
              DAT_20006661 = 0xfffe;
            }
            if (DAT_20006651 < DAT_20006661) {
              DAT_20006661 = DAT_20006651;
            }
            DAT_20006665 = FUN_080155a4((((DAT_20006671 & 0xffff) - (DAT_20006661 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            if (DAT_20006661 < DAT_20006669) {
              DAT_20006669 = DAT_20006661;
            }
            DAT_2000666d = FUN_080155a4((((DAT_20006671 & 0xffff) - (DAT_20006669 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_200066ac = (ushort)DAT_20006661;
            DAT_200066ae = 0;
            if (DAT_20006675 == 0x23) {
              DAT_20006676 = DAT_20006675;
            }
            DAT_20006675 = 0;
            if (DAT_200066ab == '\0') {
              DAT_20006643 = 0xa0;
              DAT_200066ab = '\x01';
            }
            else {
              DAT_20006643 = 0;
            }
          }
          goto code_r0x0801b092;
        }
      }
      else {
        if (DAT_20006643 == 0x31) {
          FUN_08008494(&DAT_20006603,&DAT_20006534,0x40);
          DAT_200065fb = 0x40;
          DAT_200065ff = 0;
          DAT_200065f7 = DAT_20006671 << 6;
          DAT_200065f6 = 3;
          DAT_20006671 = DAT_20006671 + 1 & 0x7fff;
          DAT_20006643 = 0;
          goto code_r0x0801b092;
        }
        bVar2 = false;
        if (DAT_20006643 == 0x60) {
          FUN_080154e0(&DAT_200066b0,(uint)DAT_200066ac << 6,0x40);
          DAT_20006643 = 0;
          goto code_r0x0801b092;
        }
      }
    }
  }
  else {
    if (DAT_20006643 == 0xa3) {
      DAT_20006682 = 0x3ff8;
      DAT_20006686 = 0x3ff7;
      iVar1 = FUN_080155a4((((DAT_200066a7 & 0xffff) - 0x3ff8 & 0x7fff) + 0x10000) * 0x40);
      if ((iVar1 == -1) && (DAT_200066a7 <= DAT_20006686)) {
        if (DAT_200066a7 == 0) {
          DAT_20006686 = 0;
          DAT_20006682 = 0;
        }
        else {
          DAT_20006686 = DAT_200066a7 - 1;
          DAT_20006682 = DAT_200066a7;
        }
      }
      if (DAT_20006682 == 0) {
        DAT_20006675 = 0;
        DAT_20006643 = 0;
      }
      else {
        DAT_2000668a = FUN_080155a4(((((DAT_200066a7 & 0xffff) - (DAT_20006686 & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_2000668e = 0;
        DAT_20006692 = FUN_080155a4((((DAT_200066a7 & 0xffff) - 1 & 0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20006696 == 0) {
          DAT_20006696 = 0xfffe;
        }
        if (DAT_20006686 < DAT_20006696) {
          DAT_20006696 = DAT_20006686;
        }
        DAT_2000669a = FUN_080155a4(((((DAT_200066a7 & 0xffff) - (DAT_20006696 & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20006696 < DAT_2000669e) {
          DAT_2000669e = DAT_20006696;
        }
        DAT_200066a2 = FUN_080155a4(((((DAT_200066a7 & 0xffff) - (DAT_2000669e & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_200066ac = (ushort)DAT_20006696;
        DAT_200066ae = 0;
        if (DAT_20006675 == 0xa3) {
          DAT_20006676 = DAT_20006675;
        }
        DAT_20006675 = 0;
        DAT_20006643 = 0;
      }
      goto code_r0x0801b092;
    }
    if (DAT_20006643 < 0xa4) {
      if (DAT_20006643 == 0xa0) {
        DAT_2000667a = 0;
        DAT_2000667e = 0x3fff;
        DAT_20006643 = 0xa1;
LAB_0801ac9e:
        iVar1 = FUN_0801a41c(&DAT_2000667a,&DAT_2000667e,0x10000);
        if (iVar1 == 1) {
          DAT_200066a7 = DAT_2000667a;
          DAT_20006643 = 0xa3;
        }
        else if (iVar1 == 2) {
          DAT_2000667a = 0x4000;
          DAT_2000667e = 0x7fff;
          DAT_20006643 = 0xa2;
        }
        goto code_r0x0801b092;
      }
      if (DAT_20006643 < 0xa1) {
        if (DAT_20006643 == 0x91) {
          DAT_200065ff = 0x60;
          DAT_200065f6 = 2;
          DAT_20006643 = 0x92;
          goto code_r0x0801b092;
        }
        bVar2 = false;
        if (DAT_20006643 == 0x92) {
          DAT_20006603 = 0x1451090;
          DAT_200065fb = 4;
          DAT_200065ff = 0x10000;
          DAT_200065f7 = 0x600000;
          DAT_200065f6 = 3;
          DAT_200066a7 = 0;
          DAT_20006643 = 0xa0;
          goto code_r0x0801b092;
        }
      }
      else {
        if (DAT_20006643 == 0xa1) goto LAB_0801ac9e;
        bVar2 = false;
        if (DAT_20006643 == 0xa2) {
          iVar1 = FUN_0801a41c(&DAT_2000667a,&DAT_2000667e,0x10000);
          if (iVar1 == 1) {
            DAT_200066a7 = DAT_2000667a;
            DAT_20006643 = 0xa3;
          }
          else if (iVar1 == 2) {
            DAT_200066a7 = 0;
            DAT_200065f6 = 0xd2;
            DAT_20006643 = 0xa3;
          }
          goto code_r0x0801b092;
        }
      }
    }
    else {
      if (DAT_20006643 == 0xb0) {
        if (DAT_200066a7 == 0) {
          iVar1 = FUN_080155a4(0x400000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20006603,&DAT_200065b4,0x40);
            DAT_200065fb = 0x40;
            DAT_200065ff = 0x10000;
            DAT_200065f7 = (DAT_200066a7 + 0x10000) * 0x40;
            DAT_200065f6 = 3;
            DAT_200066a7 = DAT_200066a7 + 1 & 0x7fff;
            DAT_20006643 = 0;
          }
          else {
            DAT_200065f6 = 0xd3;
            DAT_20006643 = 0xb1;
          }
        }
        else if (DAT_200066a7 == 0x3fff) {
          DAT_200065f6 = 0xd4;
          DAT_20006643 = 0xb1;
        }
        else if (DAT_200066a7 == 0x4000) {
          iVar1 = FUN_080155a4(0x500000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20006603,&DAT_200065b4,0x40);
            DAT_200065fb = 0x40;
            DAT_200065ff = 0x10000;
            DAT_200065f7 = (DAT_200066a7 + 0x10000) * 0x40;
            DAT_200065f6 = 3;
            DAT_200066a7 = DAT_200066a7 + 1 & 0x7fff;
            DAT_20006643 = 0;
          }
          else {
            DAT_200065f6 = 0xd4;
            DAT_20006643 = 0xb1;
          }
        }
        else if (DAT_200066a7 == 0x7fff) {
          DAT_200065f6 = 0xd3;
          DAT_20006643 = 0xb1;
        }
        else {
          FUN_08008494(&DAT_20006603,&DAT_200065b4,0x40);
          DAT_200065fb = 0x40;
          DAT_200065ff = 0x10000;
          DAT_200065f7 = (DAT_200066a7 + 0x10000) * 0x40;
          DAT_200065f6 = 3;
          DAT_200066a7 = DAT_200066a7 + 1 & 0x7fff;
          DAT_20006643 = 0;
        }
        goto code_r0x0801b092;
      }
      if (DAT_20006643 == 0xb1) {
        FUN_08008494(&DAT_20006603,&DAT_200065b4,0x40);
        DAT_200065fb = 0x40;
        DAT_200065ff = 0x10000;
        DAT_200065f7 = (DAT_200066a7 + 0x10000) * 0x40;
        DAT_200065f6 = 3;
        DAT_200066a7 = DAT_200066a7 + 1 & 0x7fff;
        DAT_20006643 = 0;
        goto code_r0x0801b092;
      }
      if (DAT_20006643 == 0xe0) {
        FUN_080154e0(&DAT_200066b0,(DAT_200066ac + 0x10000) * 0x40,0x40);
        DAT_20006643 = 0;
        goto code_r0x0801b092;
      }
      bVar2 = false;
      if (DAT_20006643 == 0xff) {
        DAT_20006643 = 0x20;
        goto code_r0x0801b092;
      }
    }
  }
  if (bVar2) {
    DAT_200065f6 = 0x22;
    DAT_20006643 = 0x11;
  }
code_r0x0801b092:
  if (DAT_200065f6 == 0x24) {
    DAT_200065f5 = '\x01';
    DAT_200065fb = 0x10;
    DAT_200065ff = 0x10;
    DAT_200065f7 = 0x100000;
    FUN_080153f0(0,0x10);
    DAT_200065f4 = 0x24;
  }
  else if (DAT_200065f6 < 0x25) {
    if (DAT_200065f6 == 3) {
      DAT_200065f5 = '\x01';
      FUN_08015660(&DAT_20006603,DAT_200065f7);
      DAT_200065f4 = 0;
    }
    else if (DAT_200065f6 < 4) {
      if (DAT_200065f6 == 1) {
        DAT_200065f5 = '\x01';
        FUN_08015438(0);
        DAT_200065f4 = 1;
      }
      else if (DAT_200065f6 == 2) {
        DAT_200065f5 = '\x01';
        FUN_080153f0(0,DAT_200065ff);
        DAT_200065f4 = 2;
      }
    }
    else if (DAT_200065f6 == 0x22) {
      DAT_200065f5 = '\x01';
      DAT_200065fb = 0x20;
      DAT_200065ff = 0;
      DAT_200065f7 = 0;
      FUN_080153f0(0,0);
      DAT_200065f4 = 0x22;
    }
    else if (DAT_200065f6 == 0x23) {
      DAT_200065f5 = '\x01';
      DAT_200065fb = 0x10;
      DAT_200065ff = 0;
      DAT_200065f7 = 0;
      FUN_080153f0(0,0);
      DAT_200065f4 = 0x23;
    }
  }
  else if (DAT_200065f6 != 0xb3) {
    if (DAT_200065f6 == 0xd2) {
      DAT_200065f5 = '\x01';
      DAT_200065fb = 0x20;
      DAT_200065ff = 0x40;
      DAT_200065f7 = 0x400000;
      FUN_080153f0(0,0x40);
      DAT_200065f4 = 0xd2;
    }
    else if (DAT_200065f6 == 0xd3) {
      DAT_200065f5 = '\x01';
      DAT_200065fb = 0x10;
      DAT_200065ff = 0x40;
      DAT_200065f7 = 0x400000;
      FUN_080153f0(0,0x40);
      DAT_200065f4 = 0xd3;
    }
    else if (DAT_200065f6 == 0xd4) {
      DAT_200065f5 = '\x01';
      DAT_200065fb = 0x10;
      DAT_200065ff = 0x50;
      DAT_200065f7 = 0x500000;
      FUN_080153f0(0,0x50);
      DAT_200065f4 = 0xd4;
    }
  }
  DAT_200065f6 = 0;
  return;
}




/* ENTRY 0x0801c14c : FUN_0801c14c */


undefined4 FUN_0801c14c(void)

{
  FUN_0800b658();
  FUN_0800b588(&DAT_0803a800);
  FUN_0800b5c8();
  return 0;
}




/* ENTRY 0x0801c168 : FUN_0801c168 */


void FUN_0801c168(void)

{
  FUN_0800b658();
  FUN_0800b588(0x803a000);
  FUN_0800b5c8();
  DAT_200001e0 = 0;
  DAT_200001de = 0;
  return;
}




/* ENTRY 0x0801f0bc : FUN_0801f0bc */


void FUN_0801f0bc(void)

{
  FUN_0800b658();
  FUN_0800b57c(0x35);
  FUN_0800b610(&DWORD_08008300,0);
  FUN_0800b5c8();
  return;
}




/* ENTRY 0x0801f11c : FUN_0801f11c */


void FUN_0801f11c(void)

{
  FUN_0800b658();
  FUN_0800aed4();
  FUN_0800b5c8();
  FUN_0800aee4();
  FUN_0800af1c();
  return;
}




/* ENTRY 0x0801ff5c : FUN_0801ff5c */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ff5c(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_0800b658();
    FUN_0800b588(&DAT_0803d000);
    FUN_0800b5c8();
  }
  return;
}




/* ENTRY 0x0801ff7c : FUN_0801ff7c */


void FUN_0801ff7c(void)

{
  FUN_0800b658();
  FUN_0800b588(&DAT_0803d000);
  FUN_0800b610(&DAT_0803d000,0x55aaaa55);
  FUN_0800b5c8();
  DAT_2000094c = 1;
  return;
}




/* ENTRY 0x08020944 : FUN_08020944 */


undefined4 FUN_08020944(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800b17c((&DAT_200000a6)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0801c6a8((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0801c6d0((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800b17c((&DAT_200000a6)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0801c6d0((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0801c6d0((char)local_94[0],uVar1);
  }
  FUN_0800b17c((&DAT_200000a6)[param_1 + param_2],local_94);
  if (local_94[0] == uVar2) {
    for (uVar4 = 0; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
      *(ushort *)(param_3 + uVar4 * 2) = local_90[uVar4];
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* ENTRY 0x08020a04 : FUN_08020a04 */


undefined4 FUN_08020a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_08020944(0,8,&local_18);
  if ((iVar1 == 0) || (local_c._2_2_ != 0x729)) {
    uVar2 = 0;
  }
  else {
    DAT_200033f8 = (int)(short)local_18;
    DAT_200033fc = (int)local_18._2_2_;
    DAT_20003400 = (int)(short)local_14;
    DAT_20003404 = (int)local_14._2_2_ << 1;
    DAT_20003408 = (int)(short)local_10 << 1;
    DAT_2000340c = (int)local_10._2_2_ << 1;
    DAT_20003410 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}




/* ENTRY 0x08020a88 : FUN_08020a88 */


void FUN_08020a88(void)

{
  uint uVar1;
  
  DAT_200001e0 = CONCAT22(DAT_200031f8,DAT_200031f6);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001de = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001e0 = DAT_200001e0 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}




/* ENTRY 0x08021934 : FUN_08021934 */


bool FUN_08021934(int param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint local_124 [66];
  uint local_1c;
  uint local_18;
  
  local_1c = 0;
  local_18 = 0;
  for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
    local_124[uVar2] = *(uint *)((&DAT_08027070)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08027070)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}




/* ENTRY 0x0802199c : FUN_0802199c */


undefined4 FUN_0802199c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08021934(0);
  if (iVar1 == 0) {
    iVar1 = FUN_08021934(1);
    if (iVar1 == 0) {
      FUN_080219f8();
      uVar2 = 0;
    }
    else {
      FUN_080219cc(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_080219cc(0);
    uVar2 = 1;
  }
  return uVar2;
}




/* ENTRY 0x080219cc : FUN_080219cc */


undefined4 FUN_080219cc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&DAT_20003198 + uVar1 * 4) =
         *(undefined4 *)((&DAT_08027070)[param_1] + uVar1 * 4);
  }
  return 1;
}




/* ENTRY 0x080219f8 : FUN_080219f8 */


undefined4 FUN_080219f8(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_110 [24];
  char local_ae [174];
  
  for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
    local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c000);
  }
  if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
    for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200031fa)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_200031fa)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




/* ENTRY 0x08021a90 : FUN_08021a90 */


undefined4 FUN_08021a90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08021934(1);
  if (iVar1 == 0) {
    FUN_08021b08(1);
    iVar1 = FUN_08021934(1);
    if (iVar1 == 0) {
      iVar1 = FUN_08021934(0);
      if (iVar1 == 0) {
        FUN_08021b08(0);
        iVar1 = FUN_08021934(0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      FUN_08021b08(0);
      iVar1 = FUN_08021934(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_08021b08(0);
    iVar1 = FUN_08021934(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08021b08(1);
      iVar1 = FUN_08021934(1);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}




/* ENTRY 0x08021b08 : FUN_08021b08 */


undefined4 FUN_08021b08(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_0800b658();
  FUN_0800b57c(0x34);
  DAT_200001dc = FUN_0800b588((&DAT_08027070)[param_1]);
  DAT_200032a0 = 0;
  DAT_200032a4 = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_200032a0,*(uint *)(&DAT_20003198 + uVar1 * 4));
    DAT_200032a0 = DAT_200032a0 + *(uint *)(&DAT_20003198 + uVar1 * 4);
    DAT_200032a4 = DAT_200032a4 + (uint)bVar2;
    DAT_200001dc = FUN_0800b610((&DAT_08027070)[param_1] + uVar1 * 4,
                                *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  }
  DAT_200001dc = FUN_0800b610((&DAT_08027070)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001dc = FUN_0800b610((&DAT_08027070)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  FUN_0800b57c(0x34);
  FUN_0800b5c8();
  return 0;
}




/* ENTRY 0x080225b8 : FUN_080225b8 */


void FUN_080225b8(void)

{
  int iVar1;
  
  iVar1 = FUN_0802199c();
  if (iVar1 == 0) {
    DAT_2000329c = 0x20220430;
    FUN_0800f438(&DAT_200031fa);
    FUN_0800ecc0();
  }
  else if (DAT_2000329c != 0x20220430) {
    DAT_2000329c = 0x20220430;
    FUN_0800f438(&DAT_200031fa);
    FUN_0800ecc0();
  }
  FUN_0800f438(&DAT_200031fa);
  if (DAT_20003238 == 0) {
    DAT_200030fc = 30000;
  }
  else {
    if (DAT_20003238 < 0x3c) {
      DAT_20003238 = 0x3c;
    }
    if (0x3840 < DAT_20003238) {
      DAT_20003238 = 0x3840;
    }
    DAT_200030fc = (uint)DAT_20003238 * 0x32;
  }
  FUN_08021cd0();
  DAT_20003ff4 = DAT_200031b6;
  FUN_08024990(&DAT_20003ff4);
  FUN_08024bd0();
  DAT_20000644 = DAT_20003228 == 0;
  DAT_20003212 = DAT_20003212 & 0xf0;
  if ((((0x2f < DAT_2000322a) && (DAT_2000322a < 0x3a)) && (0x2f < DAT_2000322b)) &&
     (((DAT_2000322b < 0x3a && (0x2f < DAT_2000322c)) &&
      ((DAT_2000322c < 0x3a && ((0x2f < DAT_2000322d && (DAT_2000322d < 0x3a)))))))) {
    DAT_20000981 = 1;
  }
  DAT_200006a8 = (uint)DAT_2000320c;
  DAT_200005fd = 1;
  FUN_08023570(((int)DAT_200031aa << 0xc) / 10);
  FUN_08023598(((int)DAT_200031ac << 0xc) / 10);
  FUN_08023554(DAT_20003246);
  DAT_20003114 = FUN_08020a88();
  if (((DAT_200031f0 == (DAT_200031f2 ^ 0xffff)) && (-200 < (short)DAT_200031f0)) &&
     ((short)DAT_200031f0 < 200)) {
    DAT_200002dc = (int)(short)DAT_200031f0;
  }
  FUN_0801b598(DAT_200031e4);
  if (DAT_20003212 >> 4 == 1) {
    DAT_200006c4 = 0x13;
    DAT_200006c8 = 0x13;
  }
  return;
}




/* ENTRY 0x08022800 : FUN_08022800 */


void FUN_08022800(void)

{
  DAT_200031b6 = DAT_20003ff4;
  DAT_200031b8 = DAT_20003ff6;
  DAT_200031ba = DAT_20003ff8;
  DAT_200031bc = DAT_20003ffa;
  DAT_200031be = DAT_20003ffc;
  DAT_200031c0 = DAT_20003ffe;
  DAT_200031c2 = DAT_20004000;
  DAT_200031d0 = DAT_2000400e;
  DAT_200031d2 = DAT_20004010;
  DAT_200031d4 = DAT_20004012;
  DAT_200031d6 = DAT_20004014;
  DAT_200031d8 = DAT_20004016;
  DAT_200031da = DAT_20004018;
  DAT_200031c4 = DAT_20004002;
  DAT_200031c6 = DAT_20004004;
  DAT_200031c8 = DAT_20004006;
  DAT_200031ca = DAT_20004008;
  DAT_200031cc = DAT_2000400a;
  DAT_200031ce = DAT_2000400c;
  return;
}




/* ENTRY 0x08022ae4 : FUN_08022ae4 */


undefined4 FUN_08022ae4(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = DAT_20000090 < param_1;
  if (bVar1) {
    DAT_20000090 = param_1;
  }
  bVar2 = DAT_20000094 < param_2;
  if (bVar2) {
    DAT_20000094 = param_2;
  }
  if (bVar2 || bVar1) {
    FUN_0800f664();
  }
  return 0;
}




/* ENTRY 0x08022b18 : FUN_08022b18 */


undefined4 FUN_08022b18(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0801c6a8((int)local_20 >> 8);
  uVar4 = FUN_0801c6d0((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_0800b658();
  FUN_0800b458((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0801c6d0((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0801c6d0((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b458((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b458((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_0800b5c8();
  FUN_0800b17c((&DAT_200000a6)[param_1],&local_20);
  uVar1 = FUN_0801c6a8((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0801c6d0((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800b17c((&DAT_200000a6)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0801c6d0((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0801c6d0((char)local_20,uVar1);
  }
  FUN_0800b17c((&DAT_200000a6)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}




/* ENTRY 0x08022c3c : FUN_08022c3c */


void FUN_08022c3c(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  _local_18 = CONCAT22((undefined2)DAT_200033fc,(undefined2)DAT_200033f8);
  _local_14 = CONCAT22((short)((uint)((DAT_20003404 - (DAT_20003404 >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_20003400);
  _local_10 = CONCAT22((short)((uint)((DAT_2000340c - (DAT_2000340c >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_20003408 - (DAT_20003408 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_20003410);
  FUN_08022b18(0,8,&local_18);
  return;
}




/* ENTRY 0x08022cc0 : FUN_08022cc0 */


bool FUN_08022cc0(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001de;
  if (DAT_200001de < 0x3ff) {
    DAT_200001e0 = DAT_200001e0 + param_1;
    FUN_0800b658();
    FUN_0800b5d8((uint)DAT_200001de * 2 + 0x803a000,param_1);
    FUN_0800b5c8();
    DAT_200001de = DAT_200001de + 1;
  }
  else {
    FUN_0800b658();
    FUN_0800b588(0x803a000);
    FUN_0800b5c8();
    DAT_200001e0 = DAT_200001e0 + param_1 * 10;
    DAT_200031f8 = (undefined2)((uint)DAT_200001e0 >> 0x10);
    DAT_200031f6 = (undefined2)DAT_200001e0;
    DAT_200001de = 0;
  }
  return 0x3fe < uVar1;
}




/* ENTRY 0x08023444 : FUN_08023444 */


undefined4 FUN_08023444(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (DAT_08001340 == -0x3f11) {
    if (DAT_08001344 == 0x3f10) {
      uVar1 = 1;
    }
    else if (DAT_200030f4 < 300) {
      uVar1 = 0;
    }
    else if ((diag_cartstep == '\x05') && ((diag_motionstep == '\b' || (diag_motionstep == '\t'))))
    {
      uVar1 = 0;
    }
    else {
      if ((DAT_08001344 == -1) && (DAT_08001342 == -1)) {
        iVar2 = (int)(param_1 * (uint)DAT_200002ec) / diag_TotalVoltage;
        if ((0x4f9 < iVar2) && (iVar2 < 0x614)) {
          DAT_200002ec = (ushort)iVar2;
          bVar3 = true;
        }
        if (bVar3) {
          FUN_0800b658();
          FUN_0800b57c(0x34);
          FUN_0800b5d8(&DAT_08001342,DAT_200002ec);
          FUN_0800b5d8(&DAT_08001344,0x3f10);
          FUN_0800b57c(0x34);
          FUN_0800b5c8();
          DAT_2000032d = 0;
          return 1;
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
                    /* WARNING: Read-only address (ram,0x08001340) is written */
                    /* WARNING: Read-only address (ram,0x08001342) is written */
                    /* WARNING: Read-only address (ram,0x08001344) is written */
  return uVar1;
}




/* ENTRY 0x08023530 : FUN_08023530 */


undefined4 FUN_08023530(void)

{
  FUN_0800b658();
  FUN_0800b610(&DAT_0803a800,0x28536692);
  FUN_0800b5c8();
  return 0;
}




/* ENTRY 0x080236a8 : FUN_080236a8 */


void FUN_080236a8(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0801f8a4();
  FUN_0800b658();
  FUN_0800b57c(0x35);
  FUN_0800b610(&DWORD_08008304,uVar1);
  dVar2 = FUN_0801f8a4();
  if (dVar2 == 0xffffffff) {
    FUN_0801f0bc();
    FUN_0800b5c8();
    return;
  }
  FUN_0800b5c8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




/* ENTRY 0x08024990 : FUN_08024990 */


undefined4 FUN_08024990(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (sVar1 == -0x2000) {
    if ((ushort)param_1[3] < 0xfa01) {
      if ((ushort)param_1[3] < 100) {
        diag_pidk_acc = 1;
      }
      else {
        diag_pidk_acc = (ushort)param_1[3] / 100;
      }
    }
    else {
      diag_pidk_acc = 0x280;
    }
    if ((ushort)param_1[2] < 0x5dc1) {
      if ((ushort)param_1[2] < 100) {
        diag_pidk_p = 1;
      }
      else {
        diag_pidk_p = (ushort)param_1[2] / 100;
      }
    }
    else {
      diag_pidk_p = 0xf0;
    }
    if ((ushort)param_1[5] < 0x4e21) {
      if ((ushort)param_1[5] < 100) {
        diag_pidk_speed = 1;
      }
      else {
        diag_pidk_speed = (ushort)param_1[5] / 100;
      }
    }
    else {
      diag_pidk_speed = 200;
    }
    if ((ushort)param_1[4] < 0x4e21) {
      if ((ushort)param_1[4] < 100) {
        diag_k_pcurr = 1;
      }
      else {
        diag_k_pcurr = (ushort)param_1[4] / 100;
      }
    }
    else {
      diag_k_pcurr = 200;
    }
  }
  else if (sVar1 == -0x1fff) {
    if ((ushort)param_1[0xf] < 0xfa01) {
      if ((ushort)param_1[0xf] < 100) {
        diag_pidk_acc = 1;
      }
      else {
        diag_pidk_acc = (ushort)param_1[0xf] / 100;
      }
    }
    else {
      diag_pidk_acc = 0x280;
    }
    if ((ushort)param_1[0xe] < 0x5dc1) {
      if ((ushort)param_1[0xe] < 100) {
        diag_pidk_p = 1;
      }
      else {
        diag_pidk_p = (ushort)param_1[0xe] / 100;
      }
    }
    else {
      diag_pidk_p = 0xf0;
    }
    if ((ushort)param_1[0x11] < 0x4e21) {
      if ((ushort)param_1[0x11] < 100) {
        diag_pidk_speed = 1;
      }
      else {
        diag_pidk_speed = (ushort)param_1[0x11] / 100;
      }
    }
    else {
      diag_pidk_speed = 200;
    }
    if ((ushort)param_1[0x10] < 0x4e21) {
      if ((ushort)param_1[0x10] < 100) {
        diag_k_pcurr = 1;
      }
      else {
        diag_k_pcurr = (ushort)param_1[0x10] / 100;
      }
    }
    else {
      diag_k_pcurr = 200;
    }
  }
  else if (sVar1 == -0x1ffe) {
    if ((ushort)param_1[9] < 0xfa01) {
      if ((ushort)param_1[9] < 100) {
        diag_pidk_acc = 1;
      }
      else {
        diag_pidk_acc = (ushort)param_1[9] / 100;
      }
    }
    else {
      diag_pidk_acc = 0x280;
    }
    if ((ushort)param_1[8] < 0x5dc1) {
      if ((ushort)param_1[8] < 100) {
        diag_pidk_p = 1;
      }
      else {
        diag_pidk_p = (ushort)param_1[8] / 100;
      }
    }
    else {
      diag_pidk_p = 0xf0;
    }
    if ((ushort)param_1[0xb] < 0x4e21) {
      if ((ushort)param_1[0xb] < 100) {
        diag_pidk_speed = 1;
      }
      else {
        diag_pidk_speed = (ushort)param_1[0xb] / 100;
      }
    }
    else {
      diag_pidk_speed = 200;
    }
    if ((ushort)param_1[10] < 0x4e21) {
      if ((ushort)param_1[10] < 100) {
        diag_k_pcurr = 1;
      }
      else {
        diag_k_pcurr = (ushort)param_1[10] / 100;
      }
    }
    else {
      diag_k_pcurr = 200;
    }
  }
  return 0;
}



