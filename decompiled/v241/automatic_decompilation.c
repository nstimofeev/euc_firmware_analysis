/* AUTOMATIC GHIDRA OUTPUT. NOT ORIGINAL SOURCE, NOT BUILDABLE FIRMWARE.
 * Unreviewed functions, types, names, signatures and control flow may be incorrect.
 * See confirmed findings and isolated emulation tests for validated conclusions. */

/* ENTRY 0x08008138 : FUN_08008138 */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_08008138(void)

{
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028438,0x20000000,0x9f4);
  return;
}



/* ENTRY 0x080081e4 : FUN_080081e4 */

undefined8 FUN_080081e4(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x080081e8 : FUN_080081e8 */

void FUN_080081e8(void)

{
  return;
}



/* ENTRY 0x080081ec : FUN_080081ec */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_080081ec(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar1 = FUN_080085d0();
  FUN_080081e4(uVar1,extraout_r2);
  FUN_08020af0();
  uVar2 = FUN_0800861a();
  FUN_080081e8();
  FUN_0800862c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08010a74();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028438,0x20000000,0x9f4);
  return;
}



/* ENTRY 0x0800820c : FUN_0800820c */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0800820c(void)

{
  FUN_08010a74();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028438,0x20000000,0x9f4);
  return;
}



/* ENTRY 0x08008214 : FUN_08008214 */

void FUN_08008214(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08008218 : FUN_08008218 */

void FUN_08008218(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800821a : FUN_0800821a */

void FUN_0800821a(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800821c : FUN_0800821c */

void FUN_0800821c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800821e : FUN_0800821e */

void FUN_0800821e(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08008220 : FUN_08008220 */

void FUN_08008220(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08008226 : FUN_08008226 */

void FUN_08008226(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08008228 : FUN_08008228 */

undefined8 FUN_08008228(void)

{
  return 0x20007f7020006b70;
}



/* ENTRY 0x0800824c : FUN_0800824c */

undefined4 FUN_0800824c(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  return uVar2;
}



/* ENTRY 0x08008254 : FUN_08008254 */

void FUN_08008254(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}



/* ENTRY 0x0800825a : FUN_0800825a */

void FUN_0800825a(void)

{
  bool bVar1;
  
  DAT_e000ed22 = 0xff;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(0);
  }
  DAT_e000ed04 = 0x10000000;
  enableIRQinterrupts();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800827a : FUN_0800827a */

void FUN_0800827a(void)

{
  DAT_e000ed04 = 0x10000000;
  return;
}



/* ENTRY 0x08008284 : FUN_08008284 */

void FUN_08008284(void)

{
  DAT_e000ed04 = 0x10000000;
  return;
}



/* ENTRY 0x0800828e : FUN_0800828e */

int FUN_0800828e(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  
  disableIRQinterrupts();
  iVar2 = getProcessStackPointer();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + -0x20) = unaff_r4;
    *(undefined4 *)(iVar2 + -0x1c) = unaff_r5;
    *(undefined4 *)(iVar2 + -0x18) = unaff_r6;
    *(undefined4 *)(iVar2 + -0x14) = unaff_r7;
    *(undefined4 *)(iVar2 + -0x10) = unaff_r8;
    *(undefined4 *)(iVar2 + -0xc) = unaff_r9;
    *(undefined4 *)(iVar2 + -8) = unaff_r10;
    *(undefined4 *)(iVar2 + -4) = unaff_r11;
    *DAT_20000048 = iVar2 + -0x20;
  }
  FUN_0800e402();
  DAT_20000037 = DAT_20000038;
  DAT_20000048 = DAT_20000050;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(*DAT_20000050 + 0x20);
  }
  enableIRQinterrupts();
  return *DAT_20000050 + 0x20;
}



/* ENTRY 0x080082f8 : FUN_080082f8 */

undefined * FUN_080082f8(void)

{
  return &DAT_20006b10;
}



/* ENTRY 0x08008320 : FUN_08008320 */

undefined8 FUN_08008320(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  if (param_4 == 0 && param_3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (param_4 != 0) {
    iVar3 = LZCOUNT(param_4);
    uVar1 = param_4 << iVar3;
    uVar5 = uVar1 >> iVar3 ^ param_4 | param_3;
  }
  else {
    iVar3 = LZCOUNT(param_3);
    uVar1 = param_3 << iVar3;
  }
  uVar4 = -iVar3 + 0x20;
  if (param_4 != 0) {
    uVar1 = uVar1 | param_3 >> (uVar4 & 0xff);
    uVar4 = -iVar3 + 0x40;
  }
  uVar2 = uVar1 >> 0x10;
  if (uVar5 != 0 || (uVar1 & 0xffff) != 0) {
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  uVar5 = 0;
  for (; param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1);
      param_2 = (param_2 -
                (uVar6 * param_4 +
                uVar8 * param_3 + (int)((ulonglong)uVar6 * (ulonglong)param_3 >> 0x20))) -
                (uint)bVar10) {
    if (param_2 != 0) {
      iVar7 = LZCOUNT(param_2);
      uVar1 = param_2 << iVar7;
    }
    else {
      iVar7 = LZCOUNT(param_1);
      uVar1 = param_1 << iVar7;
    }
    uVar8 = -iVar7 + 0x20;
    if (param_2 != 0) {
      uVar1 = uVar1 | param_1 >> (uVar8 & 0xff);
      uVar8 = -iVar7 + 0x40;
    }
    uVar9 = (uVar8 - uVar4) - 0x10;
    uVar6 = uVar1 / uVar2 >> (0x20 - (uVar9 & 0x1f) & 0xff);
    uVar8 = uVar6;
    uVar1 = uVar1 / uVar2 << (uVar9 & 0x1f);
    if ((int)uVar9 < 0) {
      uVar8 = 0;
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
    if (0x1f < (int)uVar9) {
      uVar6 = 0;
      uVar8 = uVar1;
    }
    if (uVar6 == 0 && uVar8 == 0) {
      uVar6 = 1;
    }
    bVar10 = CARRY4(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar1 = (uint)((ulonglong)uVar6 * (ulonglong)param_3);
    iVar3 = iVar3 + uVar8 + bVar10;
    bVar10 = param_1 < uVar1;
    param_1 = param_1 - uVar1;
  }
  return CONCAT44(iVar3,uVar5);
}



/* ENTRY 0x08008328 : FUN_08008328 */

undefined8 FUN_08008328(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = 0;
  if (param_4 != 0) {
    iVar3 = LZCOUNT(param_4);
    uVar1 = param_4 << iVar3;
    uVar5 = uVar1 >> iVar3 ^ param_4 | param_3;
  }
  else {
    iVar3 = LZCOUNT(param_3);
    uVar1 = param_3 << iVar3;
  }
  uVar4 = -iVar3 + 0x20;
  if (param_4 != 0) {
    uVar1 = uVar1 | param_3 >> (uVar4 & 0xff);
    uVar4 = -iVar3 + 0x40;
  }
  uVar2 = uVar1 >> 0x10;
  if (uVar5 != 0 || (uVar1 & 0xffff) != 0) {
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  uVar5 = 0;
  for (; param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1);
      param_2 = (param_2 -
                (uVar6 * param_4 +
                uVar8 * param_3 + (int)((ulonglong)uVar6 * (ulonglong)param_3 >> 0x20))) -
                (uint)bVar10) {
    if (param_2 != 0) {
      iVar7 = LZCOUNT(param_2);
      uVar1 = param_2 << iVar7;
    }
    else {
      iVar7 = LZCOUNT(param_1);
      uVar1 = param_1 << iVar7;
    }
    uVar8 = -iVar7 + 0x20;
    if (param_2 != 0) {
      uVar1 = uVar1 | param_1 >> (uVar8 & 0xff);
      uVar8 = -iVar7 + 0x40;
    }
    uVar9 = (uVar8 - uVar4) - 0x10;
    uVar6 = uVar1 / uVar2 >> (0x20 - (uVar9 & 0x1f) & 0xff);
    uVar8 = uVar6;
    uVar1 = uVar1 / uVar2 << (uVar9 & 0x1f);
    if ((int)uVar9 < 0) {
      uVar8 = 0;
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
    if (0x1f < (int)uVar9) {
      uVar6 = 0;
      uVar8 = uVar1;
    }
    if (uVar6 == 0 && uVar8 == 0) {
      uVar6 = 1;
    }
    bVar10 = CARRY4(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar1 = (uint)((ulonglong)uVar6 * (ulonglong)param_3);
    iVar3 = iVar3 + uVar8 + bVar10;
    bVar10 = param_1 < uVar1;
    param_1 = param_1 - uVar1;
  }
  return CONCAT44(iVar3,uVar5);
}



/* ENTRY 0x080083fa : FUN_080083fa */

undefined8 FUN_080083fa(void)

{
  return 0;
}



/* ENTRY 0x0800840e : FUN_0800840e */

int FUN_0800840e(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar3 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2;
    if (bVar4) {
      param_2 = param_2 + -1;
    }
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -param_4;
    if (bVar4) {
      param_4 = param_4 - 1;
    }
  }
  iVar2 = FUN_08008320(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ENTRY 0x08008456 : FUN_08008456 */

int FUN_08008456(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_1;
  while (((uint)puVar2 & 3) != 0) {
    puVar1 = (uint *)((int)puVar2 + 1);
    uVar4 = *puVar2;
    puVar2 = puVar1;
    if ((char)uVar4 == '\0') {
      return (int)puVar1 - ((int)param_1 + 1);
    }
  }
  do {
    uVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar4 = uVar4 + 0xfefefeff & ~uVar4;
  } while ((uVar4 & 0x80808080) == 0);
  iVar3 = (int)puVar2 - (int)((int)param_1 + 1);
  if ((uVar4 & 0x80) == 0) {
    if ((uVar4 & 0x8080) == 0) {
      if ((uVar4 & 0x808080) != 0) {
        return iVar3 + -1;
      }
    }
    else {
      iVar3 = iVar3 + -2;
    }
    return iVar3;
  }
  return iVar3 + -3;
}



/* ENTRY 0x08008494 : FUN_08008494 */

undefined8 FUN_08008494(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 uVar7;
  byte in_r12;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar4 = param_2;
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    puVar2 = param_1;
    uVar9 = uVar8;
    if (uVar8 != 0) {
      bVar6 = (byte)*param_2;
      puVar4 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar4;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar4 + 1);
        bVar6 = (byte)*puVar4;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar4 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar9;
      }
      puVar2 = puVar4;
      if (uVar8 < 2) {
        puVar2 = (uint *)((int)puVar4 + 1);
        *(byte *)puVar4 = bVar6;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar9 = 0;
      while (uVar8 = param_3 - 0x20, 0x1f < param_3) {
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *puVar2 = *param_2;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        puVar2[4] = uVar9;
        puVar2[5] = uVar10;
        puVar2[6] = uVar11;
        puVar2[7] = uVar12;
        puVar2 = puVar2 + 8;
        param_3 = uVar8;
      }
      if ((uVar8 & 0x10) != 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2 = puVar2 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = puVar2 + 2;
      }
      puVar3 = puVar2;
      puVar4 = param_2;
      if ((uVar8 & 4) != 0) {
        puVar4 = param_2 + 1;
        uVar9 = *param_2;
        puVar3 = puVar2 + 1;
        *puVar2 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar8 & 3) != 0) {
        bVar1 = (uVar8 & 2) != 0;
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar2 = puVar4;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar4 + 2);
          uVar7 = (undefined2)*puVar4;
        }
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 1);
          param_3 = (uint)(byte)*puVar2;
        }
        puVar2 = puVar3;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar3 + 2);
          *(undefined2 *)puVar3 = uVar7;
        }
        puVar3 = puVar2;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar2 + 1);
          *(byte *)puVar2 = (byte)param_3;
        }
        return CONCAT44(puVar4,puVar3);
      }
      return CONCAT44(puVar4,puVar3);
    }
    while( true ) {
      in_r12 = (byte)uVar9;
      if (param_3 < 8) break;
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar4;
      *puVar2 = param_4;
      puVar2[1] = uVar9;
      puVar2 = puVar2 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar2;
    puVar4 = param_2;
    if (-1 < (int)param_3) {
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_1 = puVar2 + 1;
      *puVar2 = param_4;
    }
  }
  bVar6 = (byte)param_4;
  bVar1 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar1) {
    pbVar5 = (byte *)((int)puVar4 + 1);
    bVar6 = (byte)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
    in_r12 = *pbVar5;
  }
  puVar2 = puVar4;
  if (bVar13) {
    puVar2 = (uint *)((int)puVar4 + 1);
    param_3 = (uint)(byte)*puVar4;
  }
  if (bVar1) {
    pbVar5 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar5 = in_r12;
  }
  puVar4 = param_1;
  if (bVar13) {
    puVar4 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar2,puVar4);
}



/* ENTRY 0x0800851e : FUN_0800851e */

undefined8 FUN_0800851e(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  while (uVar2 = param_3 - 0x20, 0x1f < param_3) {
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_4 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(undefined4 *)(param_2 + 0x14);
    uVar9 = *(undefined4 *)(param_2 + 0x18);
    uVar10 = *(undefined4 *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    param_1[4] = param_4;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    param_1 = param_1 + 8;
    param_3 = uVar2;
  }
  if ((uVar2 & 0x10) != 0) {
    param_4 = *(undefined4 *)param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar8;
    param_1 = param_1 + 2;
  }
  puVar4 = param_1;
  pbVar5 = param_2;
  if ((uVar2 & 4) != 0) {
    pbVar5 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar4 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar7 = (undefined2)param_4;
  if ((uVar2 & 3) == 0) {
    return CONCAT44(pbVar5,puVar4);
  }
  bVar1 = (uVar2 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar11 = (int)param_3 < 0;
  pbVar6 = pbVar5;
  if (bVar1) {
    pbVar6 = pbVar5 + 2;
    uVar7 = *(undefined2 *)pbVar5;
  }
  pbVar5 = pbVar6;
  if (bVar11) {
    pbVar5 = pbVar6 + 1;
    param_3 = (uint)*pbVar6;
  }
  puVar3 = puVar4;
  if (bVar1) {
    puVar3 = (undefined4 *)((int)puVar4 + 2);
    *(undefined2 *)puVar4 = uVar7;
  }
  puVar4 = puVar3;
  if (bVar11) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)param_3;
  }
  return CONCAT44(pbVar5,puVar4);
}



/* ENTRY 0x08008582 : FUN_08008582 */

undefined4 * FUN_08008582(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((param_2 & 0x10) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar3 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar3 != 0) {
    puVar1 = puVar2;
    if ((int)uVar3 < 0) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = 0;
    }
    puVar2 = puVar1;
    if ((uVar3 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = 0;
    }
    return puVar2;
  }
  return puVar2;
}



/* ENTRY 0x08008586 : FUN_08008586 */

undefined4 * FUN_08008586(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = param_3;
      param_1[1] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_3;
      param_1[4] = param_3;
      param_1[5] = param_3;
      param_1[6] = param_3;
      param_1[7] = param_3;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((param_2 & 0x10) != 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1 = param_1 + 2;
  }
  uVar3 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = param_3;
  }
  if (uVar3 != 0) {
    puVar1 = puVar2;
    if ((int)uVar3 < 0) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(short *)puVar2 = (short)param_3;
    }
    puVar2 = puVar1;
    if ((uVar3 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)param_3;
    }
    return puVar2;
  }
  return puVar2;
}



/* ENTRY 0x080085d0 : FUN_080085d0 */

void FUN_080085d0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  uint *puVar3;
  
  uVar1 = FUN_080082f8();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = unaff_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_08008228();
  puVar2 = (undefined4 *)*puVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  return;
}



/* ENTRY 0x080085e6 : FUN_080085e6 */

void FUN_080085e6(void)

{
  undefined4 *unaff_r5;
  
  FUN_08008228();
  *unaff_r5 = 0;
  unaff_r5[1] = 0;
  unaff_r5[2] = 0;
  unaff_r5[3] = 0;
  unaff_r5[4] = 0;
  unaff_r5[5] = 0;
  unaff_r5[6] = 0;
  unaff_r5[7] = 0;
  unaff_r5[8] = 0;
  unaff_r5[9] = 0;
  unaff_r5[10] = 0;
  unaff_r5[0xb] = 0;
  unaff_r5[0xc] = 0;
  unaff_r5[0xd] = 0;
  unaff_r5[0xe] = 0;
  unaff_r5[0xf] = 0;
  return;
}



/* ENTRY 0x0800861a : FUN_0800861a */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0800861a(undefined4 param_1,undefined4 param_2)

{
  FUN_080081e8();
  FUN_0800862c(param_1,param_2);
  FUN_08010a74();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028438,0x20000000,0x9f4);
  return;
}



/* ENTRY 0x0800862c : FUN_0800862c */

void FUN_0800862c(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800863c : FUN_0800863c */

void FUN_0800863c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = DAT_40012800;
  local_10 = param_3;
  uStack_c = param_4;
  if ((uVar1 & 4) == 4) {
    DAT_40012800 = 0xfffffffb;
    FUN_0800c538();
    switch(DAT_20000308) {
    case 1:
    case 2:
      FUN_0800c560(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_0800c1cc(&DAT_20003490);
      break;
    case 3:
      DAT_20000379 = FUN_0800c6b0();
      break;
    case 4:
    case 5:
      FUN_0800b91c(DAT_20000308);
      break;
    case 7:
      FUN_0801b678();
    }
  }
  else {
    iVar2 = FUN_08008788(&DAT_40012400,0x140);
    if (iVar2 == 1) {
      FUN_080086cc(&DAT_40012400,1);
    }
  }
  return;
}



/* ENTRY 0x080086cc : FUN_080086cc */

void FUN_080086cc(uint *param_1,uint param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 0x080086d2 : FUN_080086d2 */

void FUN_080086d2(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 1;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



/* ENTRY 0x080086e4 : FUN_080086e4 */

void FUN_080086e4(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xfffffeff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 0x100;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



/* ENTRY 0x080086f6 : FUN_080086f6 */

void FUN_080086f6(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)&DAT_40012400) {
    FUN_0800ef10(0x200);
    FUN_0800ef10(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_0800ef10(0x400);
    FUN_0800ef10(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_0800ef10(0x8000);
  FUN_0800ef10(0x8000,0);
  return;
}



/* ENTRY 0x0800875a : FUN_0800875a */

void FUN_0800875a(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xffff7fff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 0x8000;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



/* ENTRY 0x0800876c : FUN_0800876c */

void FUN_0800876c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff8fff;
  return;
}



/* ENTRY 0x08008778 : FUN_08008778 */

bool FUN_08008778(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}



/* ENTRY 0x08008788 : FUN_08008788 */

bool FUN_08008788(uint *param_1,uint param_2)

{
  return (*param_1 & param_2 >> 8) != 0 && (param_1[1] & param_2 & 0xff) != 0;
}



/* ENTRY 0x080087a4 : FUN_080087a4 */

bool FUN_080087a4(int param_1)

{
  return (*(uint *)(param_1 + 8) & 8) != 0;
}



/* ENTRY 0x080087b4 : FUN_080087b4 */

void FUN_080087b4(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 4) & ~(uint)param_2;
  }
  else {
    uVar1 = (uint)param_2 | *(uint *)(param_1 + 4);
  }
  *(uint *)(param_1 + 4) = uVar1;
  return;
}



/* ENTRY 0x080087c8 : FUN_080087c8 */

void FUN_080087c8(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) & 0xfff0feff | (uint)(byte)param_2[1] << 8 | *param_2;
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) & 0xfff1f7fd | (uint)*(byte *)((int)param_2 + 5) << 1 |
       param_2[3] | param_2[2];
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | ((byte)param_2[4] - 1 & 0xff) << 0x14;
  return;
}



/* ENTRY 0x08008814 : FUN_08008814 */

void FUN_08008814(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & ~(7 << (param_2 * 3 & 0xff)) | param_4 << (param_2 * 3 & 0xff);
  }
  else {
    uVar1 = (param_2 - 10) * 3;
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & ~(7 << (uVar1 & 0xff)) | param_4 << (uVar1 & 0xff);
  }
  uVar1 = ((param_3 - ((*(uint *)(param_1 + 0x38) & 0x3fffff) >> 0x14)) + 2) * 5;
  *(uint *)(param_1 + 0x38) =
       param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x38) & ~(0x1f << (uVar1 & 0xff));
  return;
}



/* ENTRY 0x08008876 : FUN_08008876 */

void FUN_08008876(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff | (param_2 + -1) * 0x100000;
  return;
}



/* ENTRY 0x08008886 : FUN_08008886 */

void FUN_08008886(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         param_4 << (param_2 * 3 & 0xff) | *(uint *)(param_1 + 0x10) & ~(7 << (param_2 * 3 & 0xff));
  }
  else {
    uVar1 = (param_2 - 10) * 3;
    *(uint *)(param_1 + 0xc) =
         param_4 << (uVar1 & 0xff) | *(uint *)(param_1 + 0xc) & ~(7 << (uVar1 & 0xff));
  }
  if (param_3 < 7) {
    uVar1 = (param_3 - 1) * 5;
    *(uint *)(param_1 + 0x34) =
         param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x34) & ~(0x1f << (uVar1 & 0xff));
    return;
  }
  if (param_3 < 0xd) {
    uVar1 = (param_3 - 7) * 5;
    *(uint *)(param_1 + 0x30) =
         param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x30) & ~(0x1f << (uVar1 & 0xff));
    return;
  }
  uVar1 = (param_3 - 0xd) * 5;
  *(uint *)(param_1 + 0x2c) =
       param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x2c) & ~(0x1f << (uVar1 & 0xff));
  return;
}



/* ENTRY 0x08008918 : FUN_08008918 */

void FUN_08008918(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}



/* ENTRY 0x08008922 : FUN_08008922 */

void FUN_08008922(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xffafffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 0x500000;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



/* ENTRY 0x08008934 : FUN_08008934 */

void FUN_08008934(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}



/* ENTRY 0x0800893e : FUN_0800893e */

void FUN_0800893e(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* ENTRY 0x08008950 : FUN_08008950 */

void FUN_08008950(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40012408;
  if (param_1 == 0) {
    uVar1 = uVar1 & 0xff7fffff;
  }
  else {
    uVar1 = uVar1 | 0x800000;
  }
  DAT_40012408 = uVar1;
  return;
}



/* ENTRY 0x08008968 : FUN_08008968 */

void FUN_08008968(undefined4 param_1)

{
  DAT_20000014 = param_1;
  return;
}



/* ENTRY 0x08008974 : FUN_08008974 */

void FUN_08008974(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  iVar5 = FUN_08009160(*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0x8c) = iVar5 + *(int *)(param_1 + 0x40);
  iVar5 = FUN_08009160(*(undefined4 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x90) = iVar5 + *(int *)(param_1 + 0x44);
  if (DAT_2000001c != '\0') {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x90);
    uVar2 = (longlong)*(int *)(param_1 + 0x98) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
    uVar16 = FUN_0800840e((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0,param_3,param_4);
    *(undefined8 *)(param_1 + 0x68) = uVar16;
    uVar2 = (longlong)*(int *)(param_1 + 0xa0) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
    uVar16 = FUN_0800840e((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0);
    *(undefined8 *)(param_1 + 0x70) = uVar16;
    DAT_2000001c = '\0';
  }
  piVar1 = (int *)(param_1 + 0x98);
  iVar5 = FUN_0801010c(*piVar1);
  iVar6 = FUN_0800a7d4(*piVar1);
  iVar7 = FUN_0801010c(*(undefined4 *)(param_1 + 0xa0));
  iVar8 = FUN_0800a7d4(*(undefined4 *)(param_1 + 0xa0));
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  iVar9 = iVar7 * *(int *)(param_1 + 0x30) + iVar8 * *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x80) = (int)(iVar9 + ((uint)(iVar9 >> 0x1f) >> 0x14)) >> 0xc;
  iVar7 = ((iVar5 * iVar7) / iVar6) * *(int *)(param_1 + 0x28);
  iVar5 = ((iVar8 * iVar5) / iVar6) * *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x84) =
       (*(int *)(param_1 + 0x2c) + ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x14)) >> 0xc)) -
       ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x14)) >> 0xc);
  uVar2 = (longlong)*(int *)(param_1 + 0x8c) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
  uVar16 = FUN_0800840e((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar2 = (longlong)*(int *)(param_1 + 0x90) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
  uVar16 = FUN_0800840e((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x58) = uVar16;
  uVar10 = *(uint *)(param_1 + 0x80);
  uVar13 = *(uint *)(param_1 + 0x68) + uVar10;
  uVar11 = 0x4000 - DAT_20000018;
  lVar3 = (ulonglong)uVar13 * (ulonglong)uVar11;
  uVar12 = (uint)lVar3;
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x50) * (ulonglong)DAT_20000018;
  uVar14 = (uint)lVar4;
  iVar5 = uVar12 + uVar14;
  uVar16 = FUN_0800840e(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
                              (*(int *)(param_1 + 0x6c) +
                              ((int)uVar10 >> 0x1f) + (uint)CARRY4(*(uint *)(param_1 + 0x68),uVar10)
                              ) * uVar11 + (int)((ulonglong)lVar3 >> 0x20) +
                              *(uint *)(param_1 + 0x50) * ((int)DAT_20000018 >> 0x1f) +
                              *(int *)(param_1 + 0x54) * DAT_20000018 +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar12,uVar14),0x4000,0
                        ,iVar5);
  *(undefined8 *)(param_1 + 0x68) = uVar16;
  uVar10 = *(uint *)(param_1 + 0x84);
  uVar13 = *(uint *)(param_1 + 0x70) + uVar10;
  uVar11 = 0x4000 - DAT_20000018;
  lVar3 = (ulonglong)uVar13 * (ulonglong)uVar11;
  uVar12 = (uint)lVar3;
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x58) * (ulonglong)DAT_20000018;
  uVar14 = (uint)lVar4;
  iVar5 = uVar12 + uVar14;
  uVar16 = FUN_0800840e(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
                              (*(int *)(param_1 + 0x74) +
                              ((int)uVar10 >> 0x1f) + (uint)CARRY4(*(uint *)(param_1 + 0x70),uVar10)
                              ) * uVar11 + (int)((ulonglong)lVar3 >> 0x20) +
                              *(uint *)(param_1 + 0x58) * ((int)DAT_20000018 >> 0x1f) +
                              *(int *)(param_1 + 0x5c) * DAT_20000018 +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar12,uVar14),0x4000,0
                        ,iVar5);
  *(undefined8 *)(param_1 + 0x70) = uVar16;
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x68) * 0xa000;
  uVar15 = (undefined4)lVar3;
  iVar5 = FUN_0800840e(uVar15,*(int *)(param_1 + 0x6c) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_20000014 * (uint)DAT_200001b4,
                       (int)(DAT_20000014 * (uint)DAT_200001b4) >> 0x1f,uVar15);
  *piVar1 = iVar5;
  *(int *)(param_1 + 0x9c) = *piVar1 - *(int *)(param_1 + 0xb4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x70) * 0xa000;
  uVar15 = (undefined4)lVar3;
  uVar15 = FUN_0800840e(uVar15,*(int *)(param_1 + 0x74) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                        DAT_20000014 * (uint)DAT_200001b4,
                        (int)(DAT_20000014 * (uint)DAT_200001b4) >> 0x1f,uVar15);
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(int *)(param_1 + 0xa8) = (*(int *)(param_1 + 0x80) * 0xa000) / (int)(uint)DAT_200001b4;
  *(int *)(param_1 + 0xac) = (*(int *)(param_1 + 0x84) * 0xa000) / (int)(uint)DAT_200001b4;
  return;
}



/* ENTRY 0x08008c40 : FUN_08008c40 */

int FUN_08008c40(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* ENTRY 0x08008c50 : FUN_08008c50 */

void FUN_08008c50(void)

{
  int iVar1;
  
  if (diag_AgeModeflg != '\0') {
    if (diag_AgeModeflg == '\x01') {
      if (((diag_MosTemp < 0x53) && (diag_MotorTemp < 0x7e)) && (0x2999 < diag_TotalVoltage)) {
        if (((DAT_20000842 == '\x05') || (0x2b5b < diag_TotalVoltage)) || (diag_BatState != '\x01'))
        {
          if (((byte)DAT_200030de & 1) != 0) {
            DAT_20000842 = '\x05';
            DAT_20000844 = 0;
            DAT_20000848 = 0;
            FUN_08021094(0);
          }
        }
        else {
          DAT_20000842 = '\x06';
          DAT_20000844 = 0;
          DAT_20000848 = 0;
          diag_AgeChgflg = 1;
          FUN_08021094(0);
        }
      }
      else {
        DAT_20000842 = '\x05';
        DAT_20000844 = 0;
        DAT_20000848 = 0;
        FUN_08021094(0);
        DAT_422101b0 = 0;
      }
      diag_AgeStepShow = DAT_20000842;
      switch(DAT_20000842) {
      case '\0':
        DAT_20000844 = 0;
        DAT_20000842 = '\x01';
        DAT_20000848 = 0;
        break;
      case '\x01':
        if (DAT_20003185 == '\x01') {
          iVar1 = FUN_0801f704();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_2000071c == 0)) {
            DAT_20000844 = 1;
            DAT_20000842 = '\x02';
            DAT_20000848 = 0;
            FUN_08021094(4,1);
          }
        }
        DAT_200006df = 2;
        break;
      case '\x02':
        iVar1 = FUN_0801f704();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_2000071c == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_20000848 < 0xbb9)) ||
             (DAT_20000848 < 0x65)) {
            if (DAT_20000844 < 0x9c4) {
              DAT_20000844 = DAT_20000844 + 10;
              FUN_08021094(4,(int)DAT_20000844);
            }
          }
          else {
            DAT_20000844 = 0;
            DAT_20000842 = '\x03';
            FUN_08021094(0);
          }
        }
        else {
          DAT_20000844 = 0;
          DAT_20000842 = '\x01';
          FUN_08021094(0);
        }
        DAT_200006df = 1;
        break;
      case '\x03':
        if (DAT_20003185 == '\x01') {
          iVar1 = FUN_0801f704();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_2000071c == 0)) {
            DAT_20000844 = 1;
            DAT_20000842 = '\x04';
            DAT_20000848 = 0;
            FUN_08021094(0,1);
          }
        }
        DAT_200006df = 2;
        break;
      case '\x04':
        iVar1 = FUN_0801f704();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000720 == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_20000848)) ||
             (2999 < DAT_20000848)) {
            DAT_20000844 = 0;
            DAT_20000842 = '\x01';
            FUN_08021094(0);
          }
          else if (DAT_20000844 < 30000) {
            DAT_20000844 = DAT_20000844 + 100;
            FUN_08021094(0,(int)DAT_20000844);
          }
        }
        else {
          DAT_20000844 = 0;
          DAT_20000842 = '\x03';
          FUN_08021094(0);
        }
        DAT_200006df = 2;
        break;
      case '\x05':
        break;
      case '\x06':
        if ((diag_TotalVoltage < 0x2ee1) && (diag_BatState != '\0')) {
          DAT_20000848 = 0;
        }
        else if (DAT_20000848 < 0x15) {
          DAT_20000848 = DAT_20000848 + 1;
        }
        else {
          DAT_20000844 = 0;
          DAT_20000842 = '\x01';
          diag_AgeChgflg = 0;
          FUN_08021094(0);
        }
        DAT_200006df = 2;
      }
      DAT_20000848 = DAT_20000848 + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030f4 % 10 == 5) {
        FUN_08023ae8(1);
      }
      DAT_200006df = 0;
      diag_AgeChgflg = 0;
      FUN_08021094(0);
      DAT_20000842 = '\0';
    }
  }
  return;
}



/* ENTRY 0x08009160 : FUN_08009160 */

int FUN_08009160(int param_1)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  int iVar2;
  int extraout_r3;
  int iVar3;
  
  if (param_1 < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  iVar1 = iVar3 * 1000 * param_1;
  iVar1 = iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x14);
  iVar2 = iVar1 >> 0xc;
  if (iVar2 < 0x3e9) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1000;
  }
  iVar1 = FUN_08008c40(param_1,iVar1,param_1,iVar2);
  if (iVar1 < 0x424) {
    iVar3 = (extraout_r2 * 0xb4000) / 0x3244;
  }
  else {
    iVar1 = FUN_08008c40(extraout_r2);
    if (iVar1 < 0xa49) {
      iVar3 = (*(int *)(&DAT_08025da8 + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_08025da8 + extraout_r3 * 4) * iVar3;
    }
  }
  return iVar3;
}



/* ENTRY 0x080091f4 : FUN_080091f4 */

void FUN_080091f4(void)

{
  FUN_0800ef28(1);
  FUN_0800ef28(0);
  return;
}



/* ENTRY 0x08009206 : FUN_08009206 */

undefined2 FUN_08009206(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x08009212 : FUN_08009212 */

void FUN_08009212(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x08009220 : FUN_08009220 */

void FUN_08009220(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_r3;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = 0;
  DAT_200009b8 = DAT_200009b8 + 1;
  uVar9 = DAT_200009b8 & 1;
  uVar10 = DAT_200009b8 & 1;
  uVar3 = DAT_200009b8 & 1;
  uVar4 = DAT_200009b8 & 1;
  uVar5 = DAT_200009b8 & 1;
  uVar7 = DAT_200009b8 & 1;
  if ((DAT_20004e2e == '\0') && (DAT_20004e27 == '\0')) {
    DAT_20003153 = DAT_20003153 & 0xef;
  }
  else {
    DAT_20003153 = DAT_20003153 | 0x10;
  }
  if ((DAT_20005136 == '\0') && (DAT_2000512f == '\0')) {
    DAT_20003153 = DAT_20003153 & 0xdf;
  }
  else {
    DAT_20003153 = DAT_20003153 | 0x20;
  }
  if (DAT_200009bc != 0) {
    DAT_200009bc = DAT_200009bc + -1;
  }
  if (DAT_200009bc == 0) {
    DAT_20003153 = DAT_20003153 & 0xbf;
  }
  else {
    DAT_20003153 = DAT_20003153 | 0x40;
  }
  if ((DAT_20004e26 < 0x15) && (DAT_2000512e < 0x15)) {
    DAT_200030de = DAT_200030de & 0xfbff;
    DAT_20003153 = DAT_20003153 & 0x7f;
  }
  else {
    DAT_200030de = DAT_200030de | 0x400;
    DAT_20003153 = DAT_20003153 | 0x80;
  }
  DAT_20003157 = 0x32 < DAT_20004e2f;
  if (0x32 < DAT_20005137) {
    DAT_20003157 = DAT_20003157 | 2;
  }
  if (((((DAT_200050ff & 0xea) == 0 || (int)(DAT_200050ff & 0xea) < 0) &&
       ((DAT_20005103 & 0x70) == 0 || (int)(DAT_20005103 & 0x70) < 0)) &&
      ((DAT_20005407 & 0xea) == 0 || (int)(DAT_20005407 & 0xea) < 0)) &&
     ((DAT_2000540b & 0x70) == 0)) {
    DAT_20003158 = '\0';
    DAT_20003153 = DAT_20003153 & 0xfe;
  }
  else {
    DAT_20003158 = '\x01';
    DAT_20003153 = DAT_20003153 | 1;
  }
  if ((((((DAT_200050ff & 0x15) == 0 || (int)(DAT_200050ff & 0x15) < 0) &&
        ((DAT_20005100 & 0x7f) == 0 || (int)(DAT_20005100 & 0x7f) < 0)) &&
       (((DAT_20005103 & 0xf) == 0 || (int)(DAT_20005103 & 0xf) < 0 &&
        (((DAT_20005407 & 0x15) == 0 || (int)(DAT_20005407 & 0x15) < 0 &&
         ((DAT_20005408 & 0x7f) == 0 || (int)(DAT_20005408 & 0x7f) < 0)))))) &&
      ((DAT_2000540b & 0xf) == 0 || (int)(DAT_2000540b & 0xf) < 0)) &&
     ((((DAT_2000510c & 0x80) == 0 || (int)(DAT_2000510c & 0x80) < 0 &&
       ((DAT_20005414 & 0x80) == 0 || (int)(DAT_20005414 & 0x80) < 0)) && (DAT_20003158 != '\x01')))
     ) {
    DAT_200030de = DAT_200030de & 0xfdff;
  }
  else {
    DAT_200030de = DAT_200030de | 0x200;
  }
  if ((((DAT_2000510c & 0x7f) == 0 || (int)(DAT_2000510c & 0x7f) < 0) && (DAT_2000510d == 0)) &&
     (((DAT_20005414 & 0x7f) == 0 || (int)(DAT_20005414 & 0x7f) < 0 && (DAT_20005415 == 0)))) {
    DAT_20003159 = 0;
  }
  else {
    DAT_20003159 = 1;
  }
  if ((((DAT_20005100 & 1) == 0) && ((DAT_20005408 & 1) == 0)) &&
     (((DAT_20005103 & 1) == 0 && ((DAT_2000540b & 1) == 0)))) {
    if ((DAT_2000315a != 0) && (DAT_2000315a < 10)) {
      DAT_2000315a = DAT_2000315a - 1;
    }
  }
  else if (DAT_2000315a < 0x14) {
    DAT_2000315a = DAT_2000315a + 1;
  }
  if (((DAT_200050ff & 1) == 0) && ((DAT_20005407 & 1) == 0)) {
    if ((DAT_2000315b != 0) && (DAT_2000315b < 10)) {
      DAT_2000315b = DAT_2000315b - 1;
    }
  }
  else if (DAT_2000315b < 0x14) {
    DAT_2000315b = DAT_2000315b + 1;
  }
  DAT_20003168 = DAT_20003168 | DAT_200050ff;
  DAT_20003169 = DAT_20003169 | DAT_20005100;
  DAT_2000316c = DAT_20005103 | DAT_2000316c;
  DAT_2000316d = DAT_2000316d | DAT_20005407;
  DAT_2000316e = DAT_2000316e | DAT_20005408;
  DAT_20003171 = DAT_20003171 | DAT_2000540b;
  DAT_20003172 = DAT_20003172 | DAT_2000510c & 0x3f;
  DAT_20003173 = DAT_20003173 | DAT_2000510d;
  DAT_20003174 = DAT_20003174 | DAT_20005414 & 0x3f;
  DAT_20003175 = DAT_20003175 | DAT_20005415;
  if (DAT_200009c0 != 0) {
    if (2 < DAT_200009c0) {
      return;
    }
    uVar8 = FUN_08016dac(uVar7,0,0x9c,1,in_r3);
    if (uVar9 == 0) {
      DAT_20005128 = DAT_20005128 + 1;
      FUN_08009f74(&DAT_20004e3d + uVar7 * 0x308,uVar8);
    }
    else {
      DAT_20005430 = DAT_20005430 + 1;
      FUN_08009fd8(&DAT_20004e3d + uVar7 * 0x308,uVar8);
    }
    DAT_200009c0 = DAT_200009c0 + 1;
    return;
  }
  if ((&DAT_20004e27)[uVar7 * 0x308] == '\0') {
    if ((&DAT_20004e2e)[uVar7 * 0x308] != '\0') {
      if ((&DAT_20004e34)[uVar7 * 0x308] == '\0') {
        iVar6 = FUN_08019518(uVar7);
        if (iVar6 == 0) {
          (&DAT_20004e2e)[uVar7 * 0x308] = (&DAT_20004e2e)[uVar7 * 0x308] + -1;
        }
      }
      else {
        iVar6 = FUN_080187f4(uVar7);
        if (iVar6 == 0) {
          (&DAT_20004e2e)[uVar7 * 0x308] = (&DAT_20004e2e)[uVar7 * 0x308] + -1;
        }
      }
      if ((DAT_200009c4 & 3) != 2) {
        DAT_200009c4 = DAT_200009c4 + 1;
        return;
      }
      uVar9 = (uint)(DAT_20004e38 * 100) / ((uint)DAT_200009c8 * 0xc) & 0xff;
      uVar10 = (uint)(DAT_20005140 * 100) / ((uint)DAT_200009c8 * 0xc) & 0xff;
      DAT_200009c4 = DAT_200009c4 + 1;
      FUN_08016458(uVar9,uVar10);
      DAT_20003154 = (char)((int)(uVar9 + uVar10) >> 2) + '2';
      return;
    }
  }
  else {
    if ((((&DAT_20004e28)[uVar7 * 0x308] != -0x50) ||
        (((&DAT_20004e29)[uVar7 * 0x308] != -0x50 && ((&DAT_20004e2b)[uVar7 * 0x308] != -0x50)))) &&
       (((&DAT_20004e28)[uVar7 * 0x308] != '0' || ((&DAT_20004e2b)[uVar7 * 0x308] != '0')))) {
      if ((uint)(byte)(&DAT_20004e27)[uVar7 * 0x308] ==
          ((int)(uint)(byte)(&DAT_20004e27)[uVar7 * 0x308] >> 2) * 4) {
        (&DAT_20004e28)[uVar7 * 0x308] = 0x30;
        uVar8 = FUN_080174dc(uVar7);
      }
      else {
        (&DAT_20004e28)[uVar7 * 0x308] = 0xb0;
        (&DAT_20004e29)[uVar7 * 0x308] = 0;
        uVar8 = FUN_08016888(uVar7);
      }
      if (uVar10 == 0) {
        DAT_20005128 = DAT_20005128 + 1;
        FUN_08009f74(&DAT_20004e3d + uVar7 * 0x308,uVar8);
      }
      else {
        DAT_20005430 = DAT_20005430 + 1;
        FUN_08009fd8(&DAT_20004e3d + uVar7 * 0x308,uVar8);
      }
      (&DAT_20004e27)[uVar7 * 0x308] = (&DAT_20004e27)[uVar7 * 0x308] + -1;
      return;
    }
    if ((&DAT_20004e34)[uVar7 * 0x308] == '\0') {
      (&DAT_20004e27)[uVar7 * 0x308] = 0;
      iVar6 = FUN_080211e8();
      if (iVar6 == 0) {
        (&DAT_20004e2e)[uVar7 * 0x308] = 0x32;
      }
      (&DAT_20004e38)[uVar7 * 0xc2] = 0;
      (&DAT_20004e30)[uVar7 * 0x308] = 0;
    }
    else {
      (&DAT_20004e27)[uVar7 * 0x308] = 0;
      iVar6 = FUN_080211e8();
      if (iVar6 == 1) {
        (&DAT_20004e2e)[uVar7 * 0x308] = 0x32;
      }
      (&DAT_20004e38)[uVar7 * 0xc2] = 0;
      (&DAT_20004e30)[uVar7 * 0x308] = 0;
    }
  }
  if ((&DAT_20004e25)[uVar7 * 0x308] == '\0') {
    (&DAT_20004e26)[uVar7 * 0x308] = 0;
    (&DAT_20004e2f)[uVar7 * 0x308] = 0;
  }
  else {
    if ((&DAT_20004e26)[uVar7 * 0x308] < 4) {
      (&DAT_20004e26)[uVar7 * 0x308] = (&DAT_20004e26)[uVar7 * 0x308] + '\x01';
      return;
    }
    if ((&DAT_20004e26)[uVar7 * 0x308] < 200) {
      (&DAT_20004e26)[uVar7 * 0x308] = (&DAT_20004e26)[uVar7 * 0x308] + '\x01';
    }
    if ((DAT_200009b8 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_20004e26)[uVar7 * 0x308]) {
      if ((DAT_200009b8 & 0x3f) >> 1 == 0) {
        if ((&DAT_20004e2f)[uVar7 * 0x308] != '\0') {
          (&DAT_20004e2f)[uVar7 * 0x308] = (&DAT_20004e2f)[uVar7 * 0x308] + -1;
        }
        (&DAT_20004e28)[uVar7 * 0x308] = 0xbb;
        (&DAT_20004e29)[uVar7 * 0x308] = 0;
        uVar8 = FUN_080168e4(uVar7);
        if (uVar3 == 0) {
          DAT_20005128 = DAT_20005128 + 1;
          FUN_08009f74(&DAT_20004e3d + uVar7 * 0x308,uVar8);
          return;
        }
        DAT_20005430 = DAT_20005430 + 1;
        FUN_08009fd8(&DAT_20004e3d + uVar7 * 0x308,uVar8);
        return;
      }
      if (((&DAT_20004e28)[uVar7 * 0x308] == -0x45) && ((&DAT_20004e29)[uVar7 * 0x308] == -0x45)) {
        (&DAT_20004e2f)[uVar7 * 0x308] = 200;
      }
    }
  }
  if ((&DAT_2000510e)[uVar7 * 0x308] == '\0') {
    (&DAT_20004e3c)[uVar7 * 0x308] = (&DAT_20004e3c)[uVar7 * 0x308] + '\x01';
    (&DAT_20004e3c)[uVar7 * 0x308] = (&DAT_20004e3c)[uVar7 * 0x308] & 3;
    cVar1 = (&DAT_20004e3c)[uVar7 * 0x308];
    if (cVar1 == '\0') {
      (&DAT_20004e25)[uVar7 * 0x308] = 0xc1;
      uVar8 = FUN_08016c70(uVar7,0xc1);
    }
    else if (cVar1 == '\x01') {
      (&DAT_20004e25)[uVar7 * 0x308] = 0xc2;
      uVar8 = FUN_08016c70(uVar7,0xc2);
    }
    else if (cVar1 == '\x02') {
      (&DAT_20004e25)[uVar7 * 0x308] = 0x42;
      uVar8 = FUN_08016dac(uVar7,1,0x42,1,in_r3);
    }
    else if (cVar1 == '\x03') {
      uVar8 = 0;
      (&DAT_20004e25)[uVar7 * 0x308] = 0x44;
      if ((DAT_20003185 == '\x01') || (iVar6 = FUN_0801fa30(), iVar6 == 1)) {
        uVar8 = 1;
      }
      uVar8 = FUN_08016f40(uVar7,1,0x44,1,uVar8);
    }
    if (uVar5 == 0) {
      DAT_20005128 = DAT_20005128 + 1;
      FUN_08009f74(&DAT_20004e3d + uVar7 * 0x308,uVar8);
    }
    else {
      DAT_20005430 = DAT_20005430 + 1;
      FUN_08009fd8(&DAT_20004e3d + uVar7 * 0x308,uVar8);
    }
  }
  else {
    uVar2 = (&DAT_2000510e)[uVar7 * 0x308];
    (&DAT_2000510e)[uVar7 * 0x308] = 0;
    iVar6 = FUN_08017130(uVar7,0,uVar2,(&DAT_2000506d)[uVar7 * 0x308],&DAT_20005055 + uVar7 * 0x308)
    ;
    if (iVar6 != 0) {
      (&DAT_20004e25)[uVar7 * 0x308] = uVar2;
      if (uVar4 == 0) {
        DAT_20005128 = DAT_20005128 + 1;
        FUN_08009f74(&DAT_20004e3d + uVar7 * 0x308,iVar6);
      }
      else {
        DAT_20005430 = DAT_20005430 + 1;
        FUN_08009fd8(&DAT_20004e3d + uVar7 * 0x308,iVar6);
      }
    }
  }
  return;
}



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



/* ENTRY 0x08009e3c : FUN_08009e3c */

void FUN_08009e3c(void)

{
  FUN_0800dc00(0x8000000);
  FUN_0800dbec(0x300);
  return;
}



/* ENTRY 0x08009e54 : FUN_08009e54 */

void FUN_08009e54(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(8,1);
  local_8 = 0x28031000;
  FUN_0800bb9c(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08009e80 : FUN_08009e80 */

void FUN_08009e80(void)

{
  int iVar1;
  
  if (DAT_200006de < 5) {
    if (diag_TotalVoltage < 0x2454) {
      DAT_200006de = 2;
    }
    else {
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 500) {
          DAT_200006de = 3;
          return;
        }
      }
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if ((500 < iVar1) && (diag_TotalCurrent < -0x32)) {
          DAT_200006de = 4;
          return;
        }
      }
      DAT_200006de = diag_BatState;
    }
  }
  return;
}



/* ENTRY 0x08009f10 : FUN_08009f10 */

undefined4 FUN_08009f10(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f0 == '\0') {
    DAT_200005f0 = '\x01';
    if (0x40 < (int)param_2) {
      param_2 = 0x40;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_2000397c)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a9cc(0x2000);
    FUN_0800a9e4(&DAT_40020044,0);
    FUN_0800ab86(&DAT_40020044,uVar2);
    FUN_0800a9e4(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009f74 : FUN_08009f74 */

undefined4 FUN_08009f74(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f8 == '\0') {
    DAT_200005f8 = '\x01';
    if (0x200 < (int)param_2) {
      param_2 = 0x200;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xffff) {
      (&DAT_20003ae0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xffff;
    }
    FUN_0800a9cc(0x20);
    FUN_0800a9e4(&DAT_4002001c,0);
    FUN_0800ab86(&DAT_4002001c,uVar2);
    FUN_0800a9e4(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009fd8 : FUN_08009fd8 */

undefined4 FUN_08009fd8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f9 == '\0') {
    DAT_200005f9 = '\x01';
    if (0x200 < (int)param_2) {
      param_2 = 0x200;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xffff) {
      (&DAT_20003de0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xffff;
    }
    FUN_0800a9cc(0x10020000);
    FUN_0800a9e4(&DAT_40020458,0);
    FUN_0800ab86(&DAT_40020458,uVar2);
    FUN_0800a9e4(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800a040 : FUN_0800a040 */

void FUN_0800a040(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000006c = FUN_0800de38(0);
  do {
    FUN_0800d144();
    FUN_0802101c();
    FUN_0800de8c(DAT_2000006c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a068 : FUN_0800a068 */

void FUN_0800a068(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_0800de38(0);
  FUN_0800ffa8();
  do {
    FUN_08016064();
    FUN_0800d930();
    FUN_0800de8c(DAT_20000068,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a094 : FUN_0800a094 */

void FUN_0800a094(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000070 = FUN_0800de38(0);
  do {
    FUN_0800a2a4();
    FUN_08020b3c();
    FUN_0801c1f0();
    FUN_08021204();
    FUN_08024de0();
    FUN_0800de8c(DAT_20000070,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a0c8 : FUN_0800a0c8 */

void FUN_0800a0c8(void)

{
  FUN_0800ed44(3);
  FUN_0800ee90(&DAT_40012c00);
  return;
}



/* ENTRY 0x0800a0dc : FUN_0800a0dc */

undefined4 FUN_0800a0dc(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  local_28 = 0;
  sVar1 = 0;
  uVar3 = 0;
  iVar4 = 0;
  uVar5 = 0;
  iVar6 = 0;
  local_30 = 0;
  local_2c = 0;
  local_38 = 0;
  local_34 = 0;
  local_40 = 0;
  local_3c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_08008582(&local_64,0x1c);
  FUN_0800e404(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800ce3c(&local_64);
    if (iVar2 != 0) {
      bVar7 = CARRY4(local_54,uVar3);
      uVar3 = local_54 + uVar3;
      iVar4 = iVar4 + ((int)local_54 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_50,uVar5);
      uVar5 = local_50 + uVar5;
      iVar6 = iVar6 + ((int)local_50 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_4c,local_30);
      local_30 = local_4c + local_30;
      local_2c = ((int)local_4c >> 0x1f) + local_2c + (uint)bVar7;
      bVar7 = CARRY4(local_64,local_38);
      local_38 = local_64 + local_38;
      local_34 = ((int)local_64 >> 0x1f) + local_34 + (uint)bVar7;
      bVar7 = CARRY4(local_60,local_40);
      local_40 = local_60 + local_40;
      local_3c = ((int)local_60 >> 0x1f) + local_3c + (uint)bVar7;
      bVar7 = CARRY4(local_5c,local_48);
      local_48 = local_5c + local_48;
      local_44 = ((int)local_5c >> 0x1f) + local_44 + (uint)bVar7;
      sVar1 = sVar1 + 1;
    }
    local_28 = local_28 + 1 & 0xffff;
    FUN_0800e404(1);
  }
  DAT_200033f8 = FUN_0800840e(local_38,local_34,sVar1,0);
  DAT_200033fc = FUN_0800840e(local_40,local_3c,sVar1,0);
  DAT_20003400 = FUN_0800840e(local_48,local_44,sVar1,0);
  DAT_20003404 = FUN_0800840e(uVar3,iVar4,sVar1,0);
  DAT_20003408 = FUN_0800840e(uVar5,iVar6,sVar1,0);
  DAT_2000340c = FUN_0800840e(local_30,local_2c,sVar1,0);
  iVar4 = DAT_200033f8;
  if (DAT_200033f8 < 0) {
    iVar4 = -DAT_200033f8;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_200033fc;
    if (DAT_200033fc < 0) {
      iVar4 = -DAT_200033fc;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_20003400;
      if (DAT_20003400 < 0) {
        iVar4 = -DAT_20003400;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_20003404;
        if (DAT_20003404 < 0) {
          iVar4 = -DAT_20003404;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_20003408;
          if (DAT_20003408 < 0) {
            iVar4 = -DAT_20003408;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_2000340c;
            if (DAT_2000340c < 0) {
              iVar4 = -DAT_2000340c;
            }
            if (iVar4 < 80000) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ENTRY 0x0800a290 : FUN_0800a290 */

void FUN_0800a290(void)

{
  FUN_0800ed44(7);
  FUN_0800ee90(&DAT_40012c00);
  return;
}



/* ENTRY 0x0800a2a4 : FUN_0800a2a4 */

void FUN_0800a2a4(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_200030f4 = DAT_200030f4 + 1;
  if (DAT_200030f4 % 0x32 == 0x19) {
    DAT_20003110 = DAT_20003110 + 1;
    DAT_20003118 = DAT_20003114 + DAT_20003110;
  }
  if (DAT_20003187 != '\0') {
    DAT_20003187 = DAT_20003187 + -1;
  }
  FUN_08020028();
  switch(diag_cartstep) {
  case '\0':
    iVar3 = DAT_42220134;
    if (iVar3 == 0) {
      if (9 < DAT_20000144) {
        diag_cartstep = '\x01';
        DAT_422101b0 = 1;
      }
    }
    else if (DAT_20000144 < 0xb) {
      if (DAT_20000144 == 9) {
        DAT_422101b0 = 1;
        FUN_08023ae8();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    DAT_20003124 = 0x3200;
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000611 * 1000;
    FUN_0801a2a8(1);
    diag_cartstep = '\x02';
    DAT_20003187 = -6;
    break;
  case '\x02':
    DAT_20003131 = (undefined1)diag_MosTemp;
    DAT_2000312c = FUN_0800f21c();
    DAT_200032b6 = DAT_200032b6 | 0x45;
    diag_cartstep = '\x03';
    break;
  case '\x03':
    if (diag_motionstep == '\b') {
      diag_cartstep = '\x05';
    }
    break;
  case '\x04':
    break;
  case '\x05':
    if ((diag_motionstep != '\b') && (diag_motionstep != '\t')) {
      if (DAT_2000032d == '\0') {
        if (DAT_20000146 == 0) {
          DAT_20000146 = 1;
          iVar3 = FUN_08022c3c();
          if (iVar3 == 0) {
            FUN_08023ae8(4);
          }
          else {
            FUN_08023adc(1);
            FUN_0801c14c();
          }
        }
        else {
          DAT_20000146 = DAT_20000146 + 1;
          if (100 < DAT_20000146) {
            diag_cartstep = '\x06';
          }
        }
      }
      else if (DAT_200030f4 % 200 == 0) {
        FUN_08023ae8(4);
      }
    }
    break;
  case '\x06':
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 0x5dc) {
      uVar2 = DAT_20000148 + 1;
      bVar1 = DAT_20000148 < 0xb;
      DAT_20000148 = uVar2;
      if (((bVar1) || (iVar3 = DAT_42220134, iVar3 != 0)) ||
         (DAT_422101b0 = 0, diag_BatState != '\x01')) break;
      FUN_0800dc14();
    }
    DAT_20000148 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_2000014a == 2) {
      DAT_20003184 = DAT_20003184 | 1;
      FUN_0801a2a8(0xf0);
      FUN_08019f1c(0xf0);
    }
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 0xdac) {
      iVar3 = DAT_42220134;
      if (iVar3 == 0) {
        uVar2 = DAT_2000014a + 1;
        bVar1 = 0x96 < DAT_2000014a;
        DAT_2000014a = uVar2;
        if (bVar1) {
          DAT_422101b0 = 0;
          if (diag_BatState != '\x01') break;
          FUN_0800dc14();
        }
        uVar2 = DAT_2000014a + 1;
        bVar1 = 5 < DAT_2000014a;
        DAT_2000014a = uVar2;
        if (bVar1) {
          FUN_08020ffc();
        }
      }
    }
    else {
      bVar1 = 300 < DAT_2000014a;
      DAT_2000014a = DAT_2000014a + 1;
      if (bVar1) {
        DAT_2000014a = 0;
        diag_cartstep = '\x02';
      }
    }
  }
  iVar3 = FUN_080201d4();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_08023ae8(1);
      diag_cartstep = '\b';
      DAT_2000315d = 1;
    }
  }
  DAT_200030f8 = DAT_200030f8 + 1;
  if (((DAT_20003185 == '\0') || (diag_BatState == '\x01')) || ((DAT_20003153 & 0x70) != 0)) {
    DAT_200030f8 = 0;
  }
  if ((DAT_20003186 == '\x01') && (10 < DAT_200030f8)) {
    DAT_200030f8 = DAT_200030f8 - 5;
  }
  if (DAT_200030fc + 300 < DAT_200030f8) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_2000315d = 1;
        FUN_08023ae8();
        diag_cartstep = '\b';
        DAT_200030f8 = 0;
      }
    }
  }
  else if ((DAT_200030fc < DAT_200030f8) && (DAT_200030f4 % 0x32 == 0x19)) {
    FUN_08023ae8(1);
  }
  if (DAT_200030f4 % 0x96 == 0x91) {
    DAT_2000014e = '\0';
    DAT_2000014d = '\0';
    DAT_2000014c = '\0';
  }
  else if (DAT_2000014c == '\0') {
    DAT_2000014c = diag_HallState;
  }
  else if ((DAT_2000014d == '\0') && (diag_HallState != DAT_2000014c)) {
    DAT_2000014d = diag_HallState;
  }
  else if ((DAT_2000014e == '\0') &&
          ((diag_HallState != DAT_2000014c && (diag_HallState != DAT_2000014d)))) {
    DAT_200030f8 = 0;
    DAT_2000014e = '\0';
    DAT_2000014d = '\0';
    DAT_2000014c = '\0';
  }
  diag_LimitSpeed = (uint)DAT_20000611 * 1000;
  aggregate_telemetry();
  FUN_08024244();
  FUN_0801f258();
  FUN_0802136c();
  FUN_0801b600();
  if (DAT_20003312 != '\0') {
    FUN_08023ae8(DAT_20003312);
    DAT_20003312 = '\0';
  }
  if (DAT_20003313 != '\0') {
    FUN_08023adc(DAT_20003313);
    DAT_20003313 = '\0';
  }
  return;
}



/* ENTRY 0x0800a708 : FUN_0800a708 */

bool FUN_0800a708(void)

{
  int local_18 [5];
  
  FUN_0800ef34(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a72c : FUN_0800a72c */

void FUN_0800a72c(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_0802713c + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_0802713c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_0802713c + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_0802713c + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_0802713c + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_0802713c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_0802713c + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_0802713c + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x0800a7d4 : FUN_0800a7d4 */

undefined4 FUN_0800a7d4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08010174(0x1000);
  FUN_0801010c(param_1);
  iVar2 = FUN_08010174();
  uVar3 = FUN_08010186(iVar1 - iVar2);
  return uVar3;
}



/* ENTRY 0x0800a804 : FUN_0800a804 */

void FUN_0800a804(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x20);
  if (iVar2 != 0) {
    FUN_0800a9cc(0x20);
    FUN_0800a9e4(&DAT_4002001c,0);
    FUN_0800db64();
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a844 : FUN_0800a844 */

void FUN_0800a844(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800ab04(0x200);
    if (iVar2 != 0) {
      FUN_0800a9cc(0x200);
    }
  }
  else {
    FUN_0800a9cc(0x400);
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a88c : FUN_0800a88c */

void FUN_0800a88c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x2000);
  if (iVar2 != 0) {
    FUN_0800a9cc(0x2000);
    FUN_0800a9e4(&DAT_40020044,0);
    FUN_0800db58();
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a8d0 : FUN_0800a8d0 */

void FUN_0800a8d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_0800ab04(0x20000);
    if (iVar2 != 0) {
      FUN_0800a9cc(0x20000);
    }
  }
  else {
    FUN_0800a9cc(0x40000);
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a918 : FUN_0800a918 */

void FUN_0800a918(void)

{
  int iVar1;
  
  iVar1 = FUN_0800ab04(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_200009b2 = 0;
    FUN_0800a9cc(0x10000002);
  }
  return;
}



/* ENTRY 0x0800a940 : FUN_0800a940 */

void FUN_0800a940(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800ab04(0x10000200);
    if (iVar2 != 0) {
      FUN_0800a9cc(0x10000200);
    }
  }
  else {
    FUN_0800a9cc(0x10000400);
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a988 : FUN_0800a988 */

void FUN_0800a988(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800ab04(0x10020000);
  if (iVar2 != 0) {
    FUN_0800a9cc(0x10020000);
    FUN_0800a9e4(&DAT_40020458,0);
    FUN_0800db70();
  }
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800a9cc : FUN_0800a9cc */

void FUN_0800a9cc(uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = (param_1 & 0x10000000) != 0;
  if (bVar2) {
    puVar1 = &DAT_40020404;
    DAT_40020404 = param_1;
  }
  else {
    puVar1 = &DAT_40020000;
  }
  if (!bVar2) {
    puVar1[1] = param_1;
  }
  return;
}



/* ENTRY 0x0800a9e4 : FUN_0800a9e4 */

void FUN_0800a9e4(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xfffe;
  }
  else {
    uVar1 = *param_1 | 1;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x0800a9f8 : FUN_0800a9f8 */

void FUN_0800a9f8(uint *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 & 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 == (uint *)&DAT_40020008) {
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf;
  }
  else if (param_1 == (uint *)&DAT_4002001c) {
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf0;
  }
  else if (param_1 == (uint *)&DAT_40020030) {
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf00;
  }
  else if (param_1 == (uint *)&DAT_40020044) {
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf000;
  }
  else if (param_1 == (uint *)&DAT_40020058) {
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf0000;
  }
  else {
    if (param_1 != (uint *)&UNK_4002006c) {
      if (param_1 == (uint *)&UNK_40020080) {
        uVar1 = DAT_40020004;
        DAT_40020004 = uVar1 | 0xf000000;
        return;
      }
      if (param_1 == &DAT_40020408) {
        uVar1 = DAT_40020404;
        uVar1 = uVar1 | 0xf;
      }
      else if (param_1 == (uint *)&UNK_4002041c) {
        uVar1 = DAT_40020404;
        uVar1 = uVar1 | 0xf0;
      }
      else if (param_1 == (uint *)&DAT_40020430) {
        uVar1 = DAT_40020404;
        uVar1 = uVar1 | 0xf00;
      }
      else {
        if (param_1 != (uint *)&UNK_40020444) {
          if (param_1 == (uint *)&DAT_40020458) {
            uVar1 = DAT_40020404;
            DAT_40020404 = uVar1 | 0xf0000;
            return;
          }
          return;
        }
        uVar1 = DAT_40020404;
        uVar1 = uVar1 | 0xf000;
      }
      DAT_40020404 = uVar1;
      return;
    }
    uVar1 = DAT_40020004;
    uVar1 = uVar1 | 0xf00000;
  }
  DAT_40020004 = uVar1;
  return;
}



/* ENTRY 0x0800aafc : FUN_0800aafc */

uint FUN_0800aafc(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x0800ab04 : FUN_0800ab04 */

bool FUN_0800ab04(uint param_1)

{
  uint *puVar1;
  
  if ((param_1 & 0x10000000) == 0) {
    puVar1 = &DAT_40020000;
  }
  else {
    puVar1 = &DAT_40020400;
  }
  return (*puVar1 & param_1) != 0;
}



/* ENTRY 0x0800ab24 : FUN_0800ab24 */

void FUN_0800ab24(uint *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *param_1 & ~param_2;
  }
  else {
    param_2 = param_2 | *param_1;
  }
  *param_1 = param_2;
  return;
}



/* ENTRY 0x0800ab34 : FUN_0800ab34 */

void FUN_0800ab34(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x0800ab86 : FUN_0800ab86 */

void FUN_0800ab86(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x0800ab8a : FUN_0800ab8a */

void FUN_0800ab8a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



/* ENTRY 0x0800aba4 : FUN_0800aba4 */

void FUN_0800aba4(void)

{
  FUN_0800ed44(5);
  return;
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



/* ENTRY 0x0800aed4 : FUN_0800aed4 */

undefined4 FUN_0800aed4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08015818();
  FUN_0800c268();
  return uVar1;
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



/* ENTRY 0x0800b1e0 : FUN_0800b1e0 */

int FUN_0800b1e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800ac08(0);
  if (iVar1 != 0xab) {
    if (DAT_2000013c < iVar1 * 0x800 + 0x803e018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_2000013c - 4) == -1) {
        FUN_08008494(param_1,DAT_2000013c - 0x28,0x14);
      }
      else {
        FUN_08008494(param_1,DAT_2000013c - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b248 : FUN_0800b248 */

int FUN_0800b248(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800acb4(0);
  if (iVar1 != 0xab) {
    if (DAT_20000140 < iVar1 * 0x800 + 0x803f018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_20000140 - 4) == -1) {
        FUN_08008494(param_1,DAT_20000140 - 0x28,0x14);
      }
      else {
        FUN_08008494(param_1,DAT_20000140 - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
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



/* ENTRY 0x0800b458 : FUN_0800b458 */

int FUN_0800b458(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b2b0(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800af54(param_1,param_2);
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



/* ENTRY 0x0800b50c : FUN_0800b50c */

uint FUN_0800b50c(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  piVar4 = (int *)param_1[1];
  iVar2 = param_1[2];
  lVar1 = 0;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    *piVar3 = piVar3[1];
    lVar1 = (longlong)*piVar3 * (longlong)*piVar4 + lVar1;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  *piVar3 = param_2;
  lVar1 = lVar1 + (longlong)*piVar3 * (longlong)*piVar4;
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000;
}



/* ENTRY 0x0800b566 : FUN_0800b566 */

void FUN_0800b566(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
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



/* ENTRY 0x0800b670 : FUN_0800b670 */

int FUN_0800b670(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = DAT_4002200c;
  if ((uVar1 & 1) == 0) {
    uVar1 = DAT_4002200c;
    if ((uVar1 & 4) == 0) {
      uVar1 = DAT_4002200c;
      if ((uVar1 & 0x10) != 0) {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  else {
    do {
      if (param_1 == 0) {
        return 5;
      }
      uVar1 = DAT_4002200c;
      iVar2 = 4;
      if ((uVar1 & 1) == 0) {
        uVar1 = DAT_4002200c;
        if ((uVar1 & 4) == 0) {
          uVar1 = DAT_4002200c;
          if ((uVar1 & 0x10) != 0) {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 1;
      }
      param_1 = param_1 + -1;
    } while (iVar2 == 1);
  }
  if (param_1 == 0) {
    return 5;
  }
  return iVar2;
}



/* ENTRY 0x0800b6d4 : FUN_0800b6d4 */

void FUN_0800b6d4(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x0800b708 : FUN_0800b708 */

void FUN_0800b708(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int local_2c;
  int iStack_28;
  int *piStack_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  piStack_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_0800a72c(&local_2c,param_4);
  DAT_2000038c = local_2c;
  DAT_20000390 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x0800b768 : FUN_0800b768 */

void FUN_0800b768(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_2000038c * param_3;
  iVar1 = param_2 * DAT_20000390;
  *param_1 = (param_3 * DAT_20000390 + DAT_2000038c * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x0800b7b4 : FUN_0800b7b4 */

void FUN_0800b7b4(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_080270b8 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_080270b8 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x0800b81c : FUN_0800b81c */

int FUN_0800b81c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  param_1 = param_1 - param_2;
  iVar1 = param_3[2] * param_1 + param_3[10];
  if (param_3[9] < iVar1) {
    param_3[10] = param_3[9];
  }
  else if (iVar1 < param_3[8]) {
    param_3[10] = param_3[8];
  }
  else {
    param_3[10] = iVar1;
  }
  iVar1 = param_3[0xb];
  param_3[0xb] = param_1;
  iVar1 = (*param_3 * param_1) / param_3[1] + param_3[10] / param_3[3] +
          ((param_1 - iVar1) * param_3[4]) / param_3[5];
  if (iVar1 < param_3[7]) {
    if (iVar1 < param_3[6]) {
      iVar1 = param_3[6];
    }
    else {
      param_3[0xd] = param_1;
      iVar1 = (int)(short)iVar1;
    }
  }
  else {
    iVar1 = param_3[7];
  }
  return iVar1;
}



/* ENTRY 0x0800b89c : FUN_0800b89c */

void FUN_0800b89c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 300;
  param_1[1] = 0x800;
  param_1[2] = 0xc;
  param_1[3] = 10000;
  param_1[4] = 0x14;
  param_1[5] = 0x2000;
  param_1[0xb] = 0;
  param_1[6] = 0xffff8000;
  param_1[7] = 0x7fff;
  param_1[8] = 0xec780000;
  param_1[9] = 0x1387d8f0;
  param_1[10] = 0;
  param_2[10] = 0;
  *param_2 = 0x9c4;
  param_2[1] = 0x800;
  param_2[2] = 200;
  param_2[3] = 10000;
  param_2[4] = 0;
  param_2[5] = 0x2000;
  param_2[0xb] = 0;
  param_2[6] = 0xffff8000;
  param_2[7] = 0x7fff;
  param_2[8] = 0xec780000;
  param_2[9] = 0x1387d8f0;
  param_2[10] = 0;
  return;
}



/* ENTRY 0x0800b91c : FUN_0800b91c */

undefined8 FUN_0800b91c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  local_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_0800c560(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_0800b6d4(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_0800c1cc();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000358 = FUN_0800bdfc();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000358 = diag_halloffset;
  }
  else {
    DAT_20000358 = DAT_20000358 + 1;
  }
  FUN_0800b708(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000358);
  local_18 = local_20;
  local_14 = iStack_1c;
  if (diag_IQCurrent + 3000 < local_20) {
    diag_IQCurrent = diag_IQCurrent + 3000;
  }
  else if (local_20 < diag_IQCurrent + -3000) {
    diag_IQCurrent = diag_IQCurrent + -3000;
  }
  else {
    diag_IQCurrent = local_20;
  }
  if (diag_IDCurrent + 3000 < iStack_1c) {
    diag_IDCurrent = diag_IDCurrent + 3000;
  }
  else if (iStack_1c < diag_IDCurrent + -3000) {
    diag_IDCurrent = diag_IDCurrent + -3000;
  }
  else {
    diag_IDCurrent = iStack_1c;
  }
  diag_g_average_iq = (diag_g_average_iq * 9 + diag_IQCurrent) / 10;
  diag_g_averX10_iq = (diag_g_averX10_iq * 399 + diag_IQCurrent * 0x50) / 400;
  if (param_1 == 5) {
    diag_VQ = FUN_08015248((int)DAT_2000031e);
  }
  else {
    diag_VQ = FUN_08015248((int)DAT_2000031c);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_0800f41c();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_0800b81c(DAT_20003494,diag_IDCurrent,&DAT_20003504);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_0800b7b4();
  FUN_0800b768(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_080101b4(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x0800bb24 : FUN_0800bb24 */

void FUN_0800bb24(void)

{
  DAT_200034d8 = 0x18000;
  DAT_200034dc = 0x8000;
  DAT_200034e0 = 0x10000;
  FUN_0800b89c(&DAT_2000353c,&DAT_20003504);
  FUN_0800bb80();
  FUN_08010d1a(&DAT_40012c00,1);
  FUN_08010d08(&DAT_40012c00,1);
  FUN_0800c878(1);
  FUN_0800ed44(1);
  return;
}



/* ENTRY 0x0800bb80 : FUN_0800bb80 */

void FUN_0800bb80(void)

{
  FUN_08010800();
  FUN_0800c8e0();
  FUN_0800c2cc();
  return;
}



/* ENTRY 0x0800bb90 : FUN_0800bb90 */

void FUN_0800bb90(void)

{
  FUN_0800c964();
  FUN_0800c944();
  return;
}



/* ENTRY 0x0800bb9c : FUN_0800bb9c */

void FUN_0800bb9c(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = *(byte *)((int)param_2 + 3) & 0xf;
  if ((*(byte *)((int)param_2 + 3) & 0x10) != 0) {
    uVar4 = (byte)param_2[1] | uVar4;
  }
  if ((*param_2 & 0xff) != 0) {
    uVar3 = *param_1;
    do {
      uVar2 = 1 << (uVar1 & 0xff);
      if ((*param_2 & uVar2) == uVar2) {
        uVar3 = uVar3 & ~(0xf << (uVar1 << 2 & 0xff)) | uVar4 << (uVar1 << 2 & 0xff);
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = uVar2;
        }
        else if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = uVar2;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    *param_1 = uVar3;
  }
  if (*param_2 < 0x100) {
    return;
  }
  uVar3 = param_1[1];
  uVar1 = 0;
  do {
    uVar2 = 1 << (uVar1 + 8 & 0xff);
    if ((*param_2 & uVar2) == uVar2) {
      uVar3 = uVar3 & ~(0xf << (uVar1 << 2 & 0xff)) | uVar4 << (uVar1 << 2 & 0xff);
      if (*(char *)((int)param_2 + 3) == '(') {
        param_1[5] = uVar2;
      }
      if (*(char *)((int)param_2 + 3) == 'H') {
        param_1[4] = uVar2;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  param_1[1] = uVar3;
  return;
}



/* ENTRY 0x0800bc4a : FUN_0800bc4a */

undefined8 FUN_0800bc4a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x0800bc5c : FUN_0800bc5c */

void FUN_0800bc5c(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 & 0x80000000) == 0) {
    uVar2 = DAT_40010004;
  }
  else {
    uVar2 = DAT_4001001c;
  }
  uVar3 = (param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4);
  if ((~param_1 & 0x300000) == 0) {
    uVar1 = DAT_40010004;
    uVar2 = uVar2 & 0xf0ffffff;
    DAT_40010004 = uVar1 & 0xf0ffffff;
  }
  else {
    uVar1 = uVar3;
    if ((param_1 & 0x100000) != 0) {
      uVar1 = 3 << ((param_1 & 0xfffff) >> 0x10);
    }
    uVar2 = uVar2 & ~uVar1 | 0xf000000;
  }
  if (param_2 != 0) {
    uVar2 = uVar3 | uVar2;
  }
  if ((param_1 & 0x80000000) == 0) {
    DAT_40010004 = uVar2;
  }
  else {
    DAT_4001001c = uVar2;
  }
  return;
}



/* ENTRY 0x0800bcc8 : FUN_0800bcc8 */

bool FUN_0800bcc8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800bcd6 : FUN_0800bcd6 */

void FUN_0800bcd6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x0800bcda : FUN_0800bcda */

void FUN_0800bcda(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x0800bcde : FUN_0800bcde */

void FUN_0800bcde(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x0800bcf0 : FUN_0800bcf0 */

void FUN_0800bcf0(void)

{
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_0800eef8(0x10,1);
  FUN_0800eec8(2,1);
  FUN_0800bc5c(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_0800bb9c(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_0800bb9c(&DAT_40011000,&local_20);
  FUN_08010d48(&DAT_40000400);
  FUN_080114b8(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_0801141c(&DAT_40000400,&local_10);
  FUN_08011124(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08010f78(&DAT_40000400,&local_1c);
  FUN_08011380(&DAT_40000400,400,1);
  FUN_08011144(&DAT_40000400);
  FUN_08011386(&DAT_40000400,1);
  FUN_08011398(&DAT_40000400,0x40);
  FUN_08011408(&DAT_40000400,4);
  FUN_080114dc(&DAT_40000400,1);
  FUN_08010cfc(&DAT_40000400,0x1e5f);
  FUN_08011418(&DAT_40000400,0);
  FUN_08010d08(&DAT_40000400,1);
  return;
}



/* ENTRY 0x0800bdf4 : FUN_0800bdf4 */

void FUN_0800bdf4(void)

{
  FUN_0800bcf0();
  return;
}



/* ENTRY 0x0800bdfc : FUN_0800bdfc */

int FUN_0800bdfc(void)

{
  return (int)diag_motor_egdir * (DAT_200005ac + diag_halloffset);
}



/* ENTRY 0x0800be20 : FUN_0800be20 */

byte FUN_0800be20(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_0800bcc8(&DAT_40011000,0x40);
  cVar2 = FUN_0800bcc8(&DAT_40011000,0x80);
  cVar3 = FUN_0800bcc8(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x0800be60 : FUN_0800be60 */

void FUN_0800be60(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_200005cc;
    if (DAT_200005cc < 0) {
      iVar1 = -DAT_200005cc;
    }
    if (1000 < iVar1) {
      iVar1 = DAT_200005cc;
      if (DAT_200005cc < 0) {
        iVar1 = -DAT_200005cc;
      }
      if (iVar1 < 10000) {
        if (DAT_200005d7 < 4) {
          DAT_200005d7 = DAT_200005d7 + 1;
        }
        else {
          *(short *)((uint)DAT_20000598 * 0x10 + 0x200003b8 + param_5 * 2) =
               (short)((int)((param_4 * 0x7ff8) /
                             (int)((uint)DAT_200005d8 + param_4 + (uint)DAT_200005da) +
                            (uint)*(ushort *)((uint)DAT_20000598 * 0x10 + 0x200003b8 + param_5 * 2)
                            * 9) / 10);
        }
        goto LAB_0800bef0;
      }
    }
  }
  DAT_200005d7 = 0;
LAB_0800bef0:
  DAT_200005da = DAT_200005d8;
  DAT_200005d8 = (short)param_4;
  if (param_2 == 0) {
    if (param_3 == 1) {
      if (DAT_20000598 == 0x1d) {
        DAT_20000598 = 0;
      }
      else {
        DAT_20000598 = DAT_20000598 + 1;
      }
    }
    else if (DAT_20000598 == 0) {
      DAT_20000598 = 0x1d;
    }
    else {
      DAT_20000598 = DAT_20000598 - 1;
    }
  }
  return;
}



/* ENTRY 0x0800bf50 : FUN_0800bf50 */

void FUN_0800bf50(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (diag_cartstep != '\0') {
    if (DAT_200006a4 == '\0') {
      uVar1 = DAT_4221012c;
      DAT_20000716 = (char)uVar1;
      DAT_20000717 = '\0';
      DAT_20000718 = 0xc;
    }
    DAT_20000716 = DAT_20000716 == '\0';
    DAT_20000717 = DAT_20000717 == '\0';
    if ((((bool)DAT_20000716) && ((bool)DAT_20000717)) || (DAT_2000323a == 0)) {
      if (DAT_2000084c != 0) {
        DAT_2000084c = DAT_2000084c - 1;
      }
    }
    else if (DAT_2000084c < DAT_20000718) {
      DAT_2000084c = DAT_2000084c + 1;
    }
    if (DAT_2000084e != '\0') {
      if (DAT_2000084c == DAT_20000718) {
        DAT_200030de = DAT_200030de | 0x8000;
      }
      else if (DAT_2000084c == 0) {
        DAT_2000084e = '\0';
        DAT_200030de = DAT_200030de & 0x7fff;
      }
    }
    if ((((uint)DAT_20000718 << 1) / 3 < (uint)DAT_2000084c) && (DAT_2000084d == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_2000071c == 0) {
          FUN_08023ae8(1);
          DAT_2000071c = 1;
        }
      }
      else {
        DAT_2000084d = '\x01';
      }
      DAT_20000720 = 1;
    }
    else if ((uint)DAT_2000084c < DAT_20000718 / 3) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_2000071c == 1) {
          FUN_08023ae8(2);
          DAT_2000071c = 0;
        }
        DAT_2000084d = '\0';
      }
      DAT_20000720 = 0;
    }
  }
  return;
}



/* ENTRY 0x0800c0dc : FUN_0800c0dc */

void FUN_0800c0dc(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000edf0;
  if ((uVar1 & 1) != 0) {
    software_bkpt(0);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800c0f0 : FUN_0800c0f0 */

void FUN_0800c0f0(uint param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 >> 4;
  if (iVar1 < 10) {
    *param_2 = (char)iVar1 + '0';
  }
  else if (iVar1 < 10) {
    *param_2 = '\0';
  }
  else {
    *param_2 = (char)iVar1 + '7';
  }
  param_1 = param_1 & 0xf;
  if (param_1 < 10) {
    param_2[1] = (char)param_1 + '0';
  }
  else if (param_1 < 10) {
    param_2[1] = '\0';
  }
  else {
    param_2[1] = (char)param_1 + '7';
  }
  return;
}



/* ENTRY 0x0800c134 : FUN_0800c134 */

void FUN_0800c134(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x0800c144 : FUN_0800c144 */

void FUN_0800c144(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c190(0x5555);
  FUN_0800c178(param_1);
  FUN_0800c184(param_2);
  FUN_0800c168();
  FUN_0800c134();
  return;
}



/* ENTRY 0x0800c168 : FUN_0800c168 */

void FUN_0800c168(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x0800c178 : FUN_0800c178 */

void FUN_0800c178(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x0800c184 : FUN_0800c184 */

void FUN_0800c184(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x0800c190 : FUN_0800c190 */

void FUN_0800c190(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x0800c19c : FUN_0800c19c */

void FUN_0800c19c(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800ed44(2);
  return;
}



/* ENTRY 0x0800c1b4 : FUN_0800c1b4 */

void FUN_0800c1b4(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800ed44(1);
  return;
}



/* ENTRY 0x0800c1cc : FUN_0800c1cc */

void FUN_0800c1cc(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0801fb7c();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005cc == 0) || (0x7ff < uVar3)) {
    DAT_200005c8 = 0;
    DAT_200005cc = 0;
    iVar2 = FUN_0800be20();
    DAT_200005ac = (int)*(short *)(&DAT_20000398 + iVar2 * 2) + DAT_20000396 * -300;
  }
  else {
    DAT_200005ac = (int)(uVar3 * DAT_200005cc) / 100 + (int)DAT_200005d0;
  }
  if (0x6000 < uVar3) {
    DAT_200005b4 = 0;
    diag_HallRSP = 0;
    DAT_40000424 = 0x8000;
  }
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



/* ENTRY 0x0800c2cc : FUN_0800c2cc */

void FUN_0800c2cc(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  FUN_0800ee9c(0x8000);
  FUN_0800eef8(0x15,1);
  FUN_0800eef8(0x600,1);
  FUN_0800bcde(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40010800,&local_24);
  FUN_0800bcde(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_0800bb9c(&DAT_40011000,&local_24);
  FUN_080086f6(&DAT_40012400);
  FUN_080086f6(&DAT_40012800);
  FUN_080086d2(&DAT_40012400,1);
  FUN_080086d2(&DAT_40012800,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  FUN_0800893e(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 1;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 9;
  FUN_080087c8(&DAT_40012400,&local_1c);
  FUN_08008886(&DAT_40012400,9,1,7);
  FUN_08008886(&DAT_40012400,8,2,7);
  FUN_08008886(&DAT_40012400,0,3,7);
  FUN_08008886(&DAT_40012400,0xf,4,7);
  FUN_08008886(&DAT_40012400,0xb,5,7);
  FUN_08008886(&DAT_40012400,0xd,6,7);
  FUN_08008886(&DAT_40012400,0x11,7,7);
  FUN_08008886(&DAT_40012400,10,8,7);
  FUN_08008886(&DAT_40012400,0x10,9,7);
  FUN_08008950(1);
  FUN_080086e4(&DAT_40012400,1);
  FUN_0800893e(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 0;
  FUN_080087c8(&DAT_40012800,&local_1c);
  FUN_08008918(&DAT_40012400);
  FUN_08008918(&DAT_40012800);
  do {
    uVar1 = FUN_080087a4(&DAT_40012400);
    uVar2 = FUN_080087a4(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08008934(&DAT_40012400);
  FUN_08008934(&DAT_40012800);
  do {
    uVar1 = FUN_08008778(&DAT_40012400);
    uVar2 = FUN_08008778(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_0800c978();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_0800db7c(&local_20);
  FUN_08008922(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x0800c538 : FUN_0800c538 */

void FUN_0800c538(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x0800c54c : FUN_0800c54c */

void FUN_0800c54c(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x0800c560 : FUN_0800c560 */

void FUN_0800c560(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  switch(DAT_20000378) {
  case 1:
  case 6:
    iVar1 = DAT_4001283c;
    local_8 = DAT_200034e8 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_200034ec) - local_8;
    if (local_c < 0x8000) {
      if (local_c < -0x8000) {
        local_c = -0x8000;
      }
    }
    else {
      local_c = 0x7fff;
    }
    break;
  case 2:
  case 3:
    iVar1 = DAT_4001283c;
    local_c = DAT_200034e4 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_200034ec) - local_c;
    if (local_8 < 0x8000) {
      if (local_8 < -0x8000) {
        local_8 = -0x8000;
      }
    }
    else {
      local_8 = 0x7fff;
    }
    break;
  case 4:
  case 5:
    iVar1 = DAT_4001283c;
    local_c = DAT_200034e4 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_200034e8 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}



/* ENTRY 0x0800c6b0 : FUN_0800c6b0 */

undefined4 FUN_0800c6b0(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_20000380 == '\0') {
    DAT_200034e4 = 0;
    DAT_200034e8 = 0;
    DAT_200034ec = 0;
    DAT_20000370 = DAT_200034d8;
    DAT_20000374 = DAT_200034dc;
    bVar1 = 0x500 < DAT_20000384;
    DAT_20000384 = DAT_20000384 + 1;
    if (bVar1) {
      DAT_20000384 = 0;
      DAT_20000380 = '\x01';
    }
  }
  else if (DAT_20000380 == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_200034e4 = DAT_200034e4 + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_200034e8 = DAT_200034e8 + iVar2 * 2;
    DAT_2000037c = DAT_2000037c + ((int)(uint)DAT_200034f4 >> 4);
    DAT_20000384 = DAT_20000384 + 1;
    if (DAT_20000384 == 0x40) {
      DAT_200034e4 = (int)(DAT_200034e4 + ((uint)(DAT_200034e4 >> 0x1f) >> 0x1a)) >> 6;
      DAT_200034e8 = (int)(DAT_200034e8 + ((uint)(DAT_200034e8 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000380 = '\x02';
      DAT_20000381 = '\x01';
    }
  }
  if (DAT_20000381 == '\x01') {
    DAT_20000384 = 0;
    DAT_20000374 = DAT_200034e0;
    DAT_20000381 = '\x02';
  }
  else if (DAT_20000381 == '\x02') {
    iVar2 = DAT_40012840;
    DAT_200034ec = DAT_200034ec + iVar2 * 2;
    DAT_2000037c = DAT_2000037c + ((int)(uint)DAT_200034f4 >> 4);
    DAT_20000384 = DAT_20000384 + 1;
    if (DAT_20000384 == 0x40) {
      DAT_200034ec = (int)(DAT_200034ec + ((uint)(DAT_200034ec >> 0x1f) >> 0x1a)) >> 6;
      DAT_2000037c = DAT_2000037c >> 7;
      DAT_20000381 = '\x03';
    }
  }
  else if (DAT_20000381 == '\x03') {
    DAT_20000388 = '\x01';
  }
  if (DAT_20000388 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((((0x8f9f < DAT_200034e4) || (0x8f9f < DAT_200034e8)) || (0x8f9f < DAT_200034ec)) ||
       (((DAT_200034e4 < 0x705f || (DAT_200034e8 < 0x705f)) || (DAT_200034ec < 0x705f)))) {
      DAT_20000330 = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x0800c878 : FUN_0800c878 */

void FUN_0800c878(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_0800bc5c(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08010cfc(&DAT_40012c00,1);
    FUN_08011134(&DAT_40012c00,1);
  }
  else {
    FUN_08011134(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x0800c8e0 : FUN_0800c8e0 */

void FUN_0800c8e0(void)

{
  undefined *local_30;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0800eeb0(1);
  FUN_0800a9f8(&DAT_40020008);
  FUN_0800ab8a(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_200034f0;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_0800ab34(&DAT_40020008,&local_30);
  FUN_0800a9e4(&DAT_40020008,1);
  return;
}



/* ENTRY 0x0800c944 : FUN_0800c944 */

void FUN_0800c944(void)

{
  DAT_40012838 = DAT_20000374 + (DAT_20000370 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x0800c964 : FUN_0800c964 */

void FUN_0800c964(void)

{
  FUN_0800876c(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x0800c978 : FUN_0800c978 */

void FUN_0800c978(void)

{
  DAT_200034e4 = 0;
  DAT_200034e8 = 0;
  DAT_200034ec = 0;
  FUN_08008876(&DAT_40012800,2);
  FUN_08008814(&DAT_40012800,3,1,2);
  FUN_08008814(&DAT_40012800,1,2);
  FUN_0800876c(&DAT_40012800,0x1000);
  FUN_0800875a(&DAT_40012800,1);
  FUN_080087b4(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x0800c9d4 : FUN_0800c9d4 */

undefined4 FUN_0800c9d4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == ((int)(param_1 + ((uint)(param_1 >> 0x1f) >> 0x1e)) >> 2) * 4) {
    if (param_1 == (param_1 / 100) * 100) {
      if (param_1 == (param_1 / 400) * 400) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800ca0e : FUN_0800ca0e */

void FUN_0800ca0e(void)

{
  FUN_0800eef8(0x10,1);
  return;
}



/* ENTRY 0x0800ca1c : FUN_0800ca1c */

void FUN_0800ca1c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08008582(auStack_28,0x14);
  FUN_08008582(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_080208a0(cVar1,(&DAT_20004062)[(uVar2 + 6) * 3],(&DAT_20004063)[(uVar2 + 6) * 3],
                 (&DAT_20004064)[(uVar2 + 6) * 3],auStack_3c);
    FUN_080208a0(uVar2 & 0xff,(&DAT_20004062)[uVar2 * 3],(&DAT_20004063)[uVar2 * 3],
                 (&DAT_20004064)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_08022e60(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x0800ca9c : FUN_0800ca9c */

undefined4 FUN_0800ca9c(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 local_20 [16];
  short local_10;
  
  FUN_0800b1e0(local_20);
  local_20[0] = 0xf;
  sVar1 = FUN_0801c6f6(local_20);
  if (local_10 == sVar1) {
    FUN_0800851e(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800b248(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0801c6f6(local_20);
    if (local_10 == sVar1) {
      FUN_0800851e(&DAT_2000008c,local_20,0x14);
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* ENTRY 0x0800cb04 : FUN_0800cb04 */

void FUN_0800cb04(void)

{
  ushort uVar1;
  
  FUN_0800f5e8(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_0800f5e8(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800cb34 : FUN_0800cb34 */

void FUN_0800cb34(void)

{
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_0800eef8(0x1000);
  FUN_0800eef8(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_0800f610(&DAT_40013000,&local_1c);
  FUN_0800f5e8(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800cbf4 : FUN_0800cbf4 */

undefined8 FUN_0800cbf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_20 [4];
  
  uVar2 = 0;
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  if (DAT_200001b0 == 'G') {
    DAT_40010814 = 0x10;
    FUN_0800cc98(0x9d);
    for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cc98(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  else {
    DAT_40010814 = 0x10;
    FUN_0800cc98(0xbb);
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cc98(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  FUN_08008494(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800cc6c : FUN_0800cc6c */

undefined4 FUN_0800cc6c(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800cc98(param_1 | 0x80);
  uVar1 = FUN_0800cc98(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800cc98 : FUN_0800cc98 */

undefined1 FUN_0800cc98(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_0800f5fa(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_0800f5fa(&DAT_40013000,1);
        if (iVar3 != 0) {
          uVar1 = DAT_4001300c;
          return (char)uVar1;
        }
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      DAT_200001c4 = DAT_200001c4 + (uint)(0xfffffffe < DAT_200001c0);
      DAT_200001c0 = DAT_200001c0 + 1;
      return 0;
    }
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  bVar4 = 0xfffffffe < DAT_200001c0;
  DAT_200001c0 = DAT_200001c0 + 1;
  DAT_200001c4 = DAT_200001c4 + (uint)bVar4;
  return 0;
}



/* ENTRY 0x0800cd14 : FUN_0800cd14 */

undefined4 FUN_0800cd14(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800cc98(param_1);
  FUN_0800cc98(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800cd3c : FUN_0800cd3c */

undefined4 FUN_0800cd3c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_200001b0 == 0) {
    FUN_0800cb34();
    DAT_200001b0 = FUN_0800cf8c(0x75);
    if (DAT_200001b0 == 0x47) {
      do {
        iVar2 = FUN_0800d104(0x11,1);
      } while (iVar2 == 0);
      FUN_0800e404(0xf);
      do {
        iVar2 = FUN_0800d104(0x4e,0xf);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x50,0x60);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x4f,0x40);
      } while (iVar2 == 0);
    }
    else {
      do {
        iVar2 = FUN_0800d104(0x6b,0x80);
      } while (iVar2 == 0);
      FUN_0800e404(0xf);
      do {
        iVar2 = FUN_0800d104(0x6b,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x19,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x1a,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x1c,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x1b,8);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800d104(0x38,1);
      } while (iVar2 == 0);
    }
    uVar3 = FUN_0800cf8c(0x75);
    if ((uVar3 == 0) || (uVar3 != DAT_200001b0)) {
      uVar1 = 0;
    }
    else {
      FUN_0800cf98();
      FUN_0800cb04();
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800ce30 : FUN_0800ce30 */

void FUN_0800ce30(undefined4 param_1)

{
  FUN_0800cbf4(param_1);
  return;
}



/* ENTRY 0x0800ce3c : FUN_0800ce3c */

undefined4 FUN_0800ce3c(int *param_1)

{
  undefined1 local_2c [16];
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_10;
  undefined1 local_f;
  
  FUN_0800ce30(local_2c);
  local_1c = (undefined1)local_2c._0_4_;
  uStack_1b = SUB41(local_2c._0_4_,1);
  uStack_1a = SUB41(local_2c._0_4_,2);
  uStack_19 = SUB41(local_2c._0_4_,3);
  local_18 = (undefined1)local_2c._4_4_;
  local_17 = SUB41(local_2c._4_4_,1);
  local_16 = SUB41(local_2c._4_4_,2);
  local_15 = SUB41(local_2c._4_4_,3);
  local_14 = (undefined1)local_2c._8_4_;
  uStack_13 = SUB41(local_2c._8_4_,1);
  uStack_12 = SUB41(local_2c._8_4_,2);
  uStack_11 = SUB41(local_2c._8_4_,3);
  local_10 = (undefined1)local_2c._12_2_;
  local_f = SUB21(local_2c._12_2_,1);
  if (DAT_200001b0 == 'G') {
    *(ushort *)(param_1 + 3) = CONCAT11(local_1c,uStack_1b);
    *param_1 = ((int)CONCAT11(uStack_1a,uStack_19) << 0xc) / (int)(uint)DAT_200001b2;
    param_1[1] = ((int)CONCAT11(local_18,local_17) << 0xc) / (int)(uint)DAT_200001b2;
    param_1[2] = ((int)CONCAT11(local_16,local_15) << 0xc) / (int)(uint)DAT_200001b2;
    param_1[4] = (int)CONCAT11(local_14,uStack_13);
    param_1[5] = (int)CONCAT11(uStack_12,uStack_11);
    param_1[6] = (int)CONCAT11(local_10,local_f);
  }
  else {
    *param_1 = ((int)CONCAT11(local_1c,uStack_1b) << 0xc) / (int)(uint)DAT_200001b2;
    param_1[1] = ((int)CONCAT11(uStack_1a,uStack_19) << 0xc) / (int)(uint)DAT_200001b2;
    param_1[2] = ((int)CONCAT11(local_18,local_17) << 0xc) / (int)(uint)DAT_200001b2;
    *(ushort *)(param_1 + 3) = CONCAT11(local_16,local_15);
    param_1[4] = (int)CONCAT11(local_14,uStack_13);
    param_1[5] = (int)CONCAT11(uStack_12,uStack_11);
    param_1[6] = (int)CONCAT11(local_10,local_f);
  }
  return 1;
}



/* ENTRY 0x0800cf8c : FUN_0800cf8c */

void FUN_0800cf8c(undefined4 param_1)

{
  FUN_0800cc6c(param_1);
  return;
}



/* ENTRY 0x0800cf98 : FUN_0800cf98 */

void FUN_0800cf98(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_200001b0 == 'G') {
    bVar1 = FUN_0800cf8c(0x50);
    uVar2 = (bVar1 & 0x7f) >> 5;
    if (uVar2 == 0) {
      DAT_200001b2 = 0x800;
    }
    else if (uVar2 == 1) {
      DAT_200001b2 = 0x1000;
    }
    else if (uVar2 == 2) {
      DAT_200001b2 = 0x2000;
    }
    else {
      DAT_200001b2 = 0x4000;
    }
    bVar1 = FUN_0800cf8c(0x4f);
    switch(bVar1 >> 5) {
    case 0:
      DAT_200001b4 = 0xa3;
      return;
    case 1:
      DAT_200001b4 = 0x147;
      return;
    case 2:
      DAT_200001b4 = 0x28f;
      return;
    default:
      DAT_200001b4 = 0x51e;
      return;
    case 4:
      DAT_200001b4 = 0xa3d;
      return;
    case 5:
      DAT_200001b4 = 0x147a;
      return;
    case 6:
      DAT_200001b4 = 0x28f5;
      return;
    case 7:
      DAT_200001b4 = 0x51eb;
      return;
    }
  }
  bVar1 = FUN_0800cf8c(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b2 = 0x2000;
      goto code_r0x0800d0b0;
    }
    if (uVar2 == 2) {
      DAT_200001b2 = 0x1000;
      goto code_r0x0800d0b0;
    }
    if (uVar2 == 3) {
      DAT_200001b2 = 0x800;
      goto code_r0x0800d0b0;
    }
  }
  DAT_200001b2 = 0x4000;
code_r0x0800d0b0:
  bVar1 = FUN_0800cf8c(0x1b);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b4 = 0x28f;
      return;
    }
    if (uVar2 == 2) {
      DAT_200001b4 = 0x147;
      return;
    }
    if (uVar2 == 3) {
      DAT_200001b4 = 0xa3;
      return;
    }
  }
  DAT_200001b4 = 0x51e;
  return;
}



/* ENTRY 0x0800d104 : FUN_0800d104 */

void FUN_0800d104(undefined4 param_1,undefined4 param_2)

{
  FUN_0800cd14(param_1,param_2);
  return;
}



/* ENTRY 0x0800d114 : FUN_0800d114 */

void FUN_0800d114(void)

{
  int iVar1;
  
  iVar1 = FUN_0800cd3c();
  if (iVar1 == 0) {
    DAT_200032b4 = DAT_200032b4 | 0x40;
  }
  FUN_0800bdf4();
  FUN_0800bb24();
  DAT_200032dc = 71000;
  DAT_200032e0 = 71000;
  return;
}



/* ENTRY 0x0800d144 : FUN_0800d144 */

void FUN_0800d144(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_200032ac = DAT_200032ac + 1;
  if (1 < diag_motionstep) {
    if ((DAT_200033f4 < DAT_200032f8 + -0x96) && (DAT_200033f4 < 0xa000)) {
      DAT_200033f4 = DAT_200033f4 + 100;
    }
    else if ((DAT_200032f8 + 0x96 < DAT_200033f4) && (-0xa000 < DAT_200033f4)) {
      DAT_200033f4 = DAT_200033f4 + -100;
    }
  }
  if (DAT_20003304 != 0) {
    DAT_20003304 = DAT_20003304 + -1;
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002d8 = 7;
    iVar2 = FUN_08020208(0);
    if ((iVar2 == 1) && (DAT_20000379 == 1)) {
      diag_motionstep = DAT_20000379;
      DAT_200002d8 = DAT_20000379;
      if (DAT_20000330 != '\0') {
        DAT_200032b4 = DAT_200032b4 | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_200032b6 & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_200032b6 & 8) != 0) {
      diag_motionstep = 8;
    }
    if (diag_acce_z < -0x400) {
      DAT_20003304 = 500;
    }
    iVar2 = diag_pintch;
    if (diag_pintch < 0) {
      iVar2 = -diag_pintch;
    }
    if (iVar2 < 0xa000) {
      iVar2 = diag_fus_roll;
      if (diag_fus_roll < 0) {
        iVar2 = -diag_fus_roll;
      }
      if ((iVar2 < 0xa000) && (0x400 < diag_acce_z)) {
        iVar2 = DAT_200032bc;
        if (DAT_200032bc < 0) {
          iVar2 = -DAT_200032bc;
        }
        if (((iVar2 < 2000) && (((byte)DAT_200032b6 & 5) == 5)) &&
           (((DAT_200032b6 & 10) == 0 &&
            ((((DAT_200032b4 & 1) == 0 && (DAT_200002d8 == 1)) && (DAT_20003304 == 0)))))) {
          DAT_200002d8 = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_200032f4 = 0;
          FUN_08010100(3);
          diag_rollptag_auto = 0x28000;
          FUN_0801a2a8(4);
        }
      }
    }
    break;
  case 3:
    iVar2 = diag_pintch;
    if (diag_pintch < 0) {
      iVar2 = -diag_pintch;
    }
    if (iVar2 < 0x3c000) {
      iVar2 = diag_fus_roll;
      if (diag_fus_roll < 0) {
        iVar2 = -diag_fus_roll;
      }
      if (((iVar2 < 0x28000) && (((byte)DAT_200032b6 & 4) == 4)) && ((DAT_200032b6 & 8) == 0)) {
        if ((DAT_200032b6 & 0x20) == 0) {
          if (DAT_200032f4 + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_200032f4 + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_200032f4;
            FUN_08010100(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_0801a2a8(0xe1);
        }
        break;
      }
    }
    FUN_0800da54();
    diag_motionstep = 2;
    FUN_08022540();
    FUN_08010100(0x30);
    diag_motorstep = 1;
    FUN_0801a2a8(0xe0);
    DAT_20003304 = 200;
    break;
  case 4:
    iVar2 = diag_pintch;
    if (diag_pintch < 0) {
      iVar2 = -diag_pintch;
    }
    if (iVar2 < 0x3c000) {
      iVar2 = diag_fus_roll;
      if (diag_fus_roll < 0) {
        iVar2 = -diag_fus_roll;
      }
      if (iVar2 < 0x46000) {
        iVar2 = diag_fus_roll;
        if (diag_fus_roll < 0) {
          iVar2 = -diag_fus_roll;
        }
        if (diag_rollptag_auto <= iVar2) {
          iVar2 = diag_fus_roll;
          if (diag_fus_roll < 0) {
            iVar2 = -diag_fus_roll;
          }
          if (0x27fff < iVar2) goto LAB_0800d4da;
        }
        if ((((byte)DAT_200032b6 & 4) == 4) && ((DAT_200032b6 & 8) == 0)) {
          FUN_0802159c();
          iVar2 = DAT_200032bc;
          if (DAT_200032bc < 0) {
            iVar2 = -DAT_200032bc;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_200032bc;
            if (DAT_200032bc < 0) {
              iVar2 = -DAT_200032bc;
            }
            if ((iVar2 < 0xfa1) && (0x28000 < diag_rollptag_auto)) {
              iVar2 = diag_fus_roll;
              if (diag_fus_roll < 0) {
                iVar2 = -diag_fus_roll;
              }
              if (iVar2 + 0xa000 < diag_rollptag_auto) {
                diag_rollptag_auto = diag_rollptag_auto + -300;
              }
            }
          }
          else if (diag_rollptag_auto < DAT_200032fc) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_200032b6 & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_0801a2a8(0xe1);
          }
          break;
        }
      }
    }
LAB_0800d4da:
    DAT_20003312 = 1;
    FUN_0800da54();
    diag_motionstep = 2;
    FUN_08022540();
    FUN_08010100(0x30);
    diag_motorstep = 1;
    FUN_0801a2a8(0xe0);
    DAT_20003304 = 200;
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    iVar2 = diag_pintch;
    if (diag_pintch < 0) {
      iVar2 = -diag_pintch;
    }
    if (iVar2 < 0x3c000) {
      iVar2 = diag_fus_roll;
      if (diag_fus_roll < 0) {
        iVar2 = -diag_fus_roll;
      }
      if (iVar2 < 0x46000) {
        iVar2 = diag_fus_roll;
        if (diag_fus_roll < 0) {
          iVar2 = -diag_fus_roll;
        }
        if (diag_rollptag_auto <= iVar2) {
          iVar2 = diag_fus_roll;
          if (diag_fus_roll < 0) {
            iVar2 = -diag_fus_roll;
          }
          if (0x27fff < iVar2) goto LAB_0800d6c4;
        }
        if ((((byte)DAT_200032b6 & 4) == 4) && ((DAT_200032b6 & 8) == 0)) {
          iVar2 = DAT_200032bc;
          if (DAT_200032bc < 0) {
            iVar2 = -DAT_200032bc;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_200032bc;
            if (DAT_200032bc < 0) {
              iVar2 = -DAT_200032bc;
            }
            if ((iVar2 < 0xfa1) && (0x28000 < diag_rollptag_auto)) {
              iVar2 = diag_fus_roll;
              if (diag_fus_roll < 0) {
                iVar2 = -diag_fus_roll;
              }
              if (iVar2 + 0xa000 < diag_rollptag_auto) {
                diag_rollptag_auto = diag_rollptag_auto + -300;
              }
            }
          }
          else if (diag_rollptag_auto < DAT_200032fc) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_200032bc < 0x2ee1) {
            if (DAT_200032bc < 1) {
              if (DAT_200032bc == 0) {
                DAT_200032f4 = -0x19000;
              }
              else if (DAT_200032bc < -11999) {
                DAT_200032f4 = -0x12000;
              }
              else {
                DAT_200032f4 = -0x19000;
              }
            }
            else {
              DAT_200032f4 = 0x19000;
            }
          }
          else {
            DAT_200032f4 = 0x12000;
          }
          if (DAT_200032f4 + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_200032f4 + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_200032f4;
          }
          break;
        }
      }
    }
LAB_0800d6c4:
    DAT_20003312 = 1;
    FUN_0800da54();
    diag_motionstep = 2;
    FUN_08022540();
    FUN_08010100(0x30);
    diag_motorstep = 1;
    FUN_0801a2a8(0xe0);
    DAT_20003304 = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_20003312 = 1;
      FUN_0800e404(0x3c);
      iVar2 = FUN_08023420();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_0800a0dc();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_08010100(0xf0);
    FUN_0800e404(0xa0);
    DAT_200032b6 = DAT_200032b6 & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_20000330 != '\0') {
      DAT_200032b4 = DAT_200032b4 | 0x10;
    }
    if (DAT_2000032e != '\0') {
      DAT_200032b4 = DAT_200032b4 | 0x20;
    }
    if (DAT_200005fc == '\x01') {
      DAT_200032b6 = DAT_200032b6 | 1;
    }
    else {
      DAT_200032b6 = DAT_200032b6 & 0xfffe;
    }
  }
  if (DAT_2000071c == 0) {
    DAT_200032b6 = DAT_200032b6 | 0x40;
  }
  else if (DAT_200032c0 == '\0') {
    DAT_200032b6 = DAT_200032b6 & 0xffbf;
  }
  FUN_0801607c();
  uVar5 = CONCAT44(DAT_20003354,DAT_20003350);
  iVar2 = DAT_200032bc;
  if (DAT_200032bc < 0) {
    iVar2 = -DAT_200032bc;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_20003340;
    if (DAT_20003340 < 0) {
      iVar2 = -DAT_20003340;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003350 * 4999);
      uVar3 = DAT_20003340 * 5000;
      uVar5 = FUN_0800840e(uVar4 + uVar3,
                           DAT_20003354 * 4999 + (int)((ulonglong)DAT_20003350 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_2000335c,DAT_20003358);
    DAT_20003354 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003350 = (uint)uVar5;
    iVar2 = DAT_20003344;
    if (DAT_20003344 < 0) {
      iVar2 = -DAT_20003344;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003358 * 4999);
      uVar3 = DAT_20003344 * 5000;
      uVar6 = FUN_0800840e(uVar4 + uVar3,
                           DAT_2000335c * 4999 + (int)((ulonglong)DAT_20003358 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_20003354,DAT_20003350);
    }
    uVar7 = CONCAT44(DAT_20003364,DAT_20003360);
    DAT_2000335c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003358 = (uint)uVar6;
    DAT_20003354 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003350 = (uint)uVar5;
    iVar2 = DAT_20003348;
    if (DAT_20003348 < 0) {
      iVar2 = -DAT_20003348;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003360 * 4999);
      uVar3 = DAT_20003348 * 5000;
      uVar7 = FUN_0800840e(uVar4 + uVar3,
                           DAT_20003364 * 4999 + (int)((ulonglong)DAT_20003360 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_2000335c,DAT_20003358);
      uVar5 = CONCAT44(DAT_20003354,DAT_20003350);
    }
    DAT_20003364 = (int)((ulonglong)uVar7 >> 0x20);
    DAT_20003360 = (uint)uVar7;
    DAT_2000335c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003358 = (uint)uVar6;
    DAT_20003354 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003350 = (uint)uVar5;
    diag_vttest_0_ = FUN_0800840e(DAT_20003350,DAT_20003354,5000,0);
    diag_vttest_1_ = FUN_0800840e(DAT_20003358,DAT_2000335c,5000,0);
    diag_vttest_2_ = FUN_0800840e(DAT_20003360,DAT_20003364,5000,0);
  }
  return;
}



/* ENTRY 0x0800d930 : FUN_0800d930 */

void FUN_0800d930(void)

{
  switch(DAT_200002d8) {
  case 1:
    FUN_0800c1b4();
    break;
  case 2:
    FUN_0800c19c();
    break;
  case 3:
    FUN_080115e0();
    break;
  case 4:
    FUN_0800ecb6();
    break;
  case 7:
    FUN_0800a0c8();
    break;
  case 8:
    FUN_0800aba4();
    break;
  case 10:
    FUN_0800a290();
  }
  DAT_20000324 = (((((int)(uint)DAT_200034f4 >> 4) - (int)(short)DAT_2000037c) * 0x26) / 10 +
                 DAT_20000324 * 0x31) / 0x32;
  DAT_200002e0 = (int)(((uint)DAT_200002ec * ((int)(uint)DAT_200034f0 >> 2)) /
                       (uint)((int)(uint)DAT_200034fc >> 4) + DAT_200002e4 * 9) / 10;
  DAT_20000328 = DAT_200002e0 + DAT_200002dc;
  if (15000 < DAT_20000328) {
    DAT_2000032c = 1;
  }
  DAT_200002e4 = DAT_200002e0;
  if (((DAT_20000328 < 0x2198) && (diag_cartstep == '\x03')) && (DAT_200002e8 == '\0')) {
    FUN_0801a2a8(0xef);
    DAT_200002e8 = '\x01';
  }
  return;
}



/* ENTRY 0x0800da54 : FUN_0800da54 */

void FUN_0800da54(void)

{
  DAT_200002d8 = 1;
  FUN_0800ed44();
  FUN_0800da6c();
  return;
}



/* ENTRY 0x0800da6c : FUN_0800da6c */

void FUN_0800da6c(void)

{
  DAT_2000035c = 0;
  diag_g_average_iq = 0;
  diag_g_averX10_iq = 0;
  DAT_2000036a = 0;
  FUN_0800f41c();
  return;
}



/* ENTRY 0x0800da98 : FUN_0800da98 */

undefined4 FUN_0800da98(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_080273fc + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_080273fc + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
            uVar2 << 8) & 0xffff;
  }
  uVar2 = uVar2 ^ 0xffff;
  if (((uint)param_1[0x41] == (int)uVar2 >> 8) && ((uint)param_1[0x42] == (uVar2 & 0xff))) {
    uVar1 = 1;
  }
  else {
    param_1[0x41] = (byte)(uVar2 >> 8);
    param_1[0x42] = (byte)uVar2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800db08 : FUN_0800db08 */

uint FUN_0800db08(byte *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  *param_2 = bVar1 + 3;
  if ((uVar2 == 0) || (0x43 < uVar2)) {
    uVar2 = 0;
  }
  else {
    param_2[1] = 'U';
    param_2[2] = -0x56;
    param_2[3] = bVar1;
    for (uVar3 = 0; (int)uVar3 < (int)(uVar2 - 2); uVar3 = uVar3 + 1 & 0xff) {
      param_2[uVar3 + 4] = param_1[uVar3 + 1];
    }
    param_2[uVar2 + 2] = param_1[0x41];
    param_2[uVar2 + 3] = param_1[0x42];
    uVar2 = uVar2 + 3 & 0xff;
  }
  return uVar2;
}



/* ENTRY 0x0800db58 : FUN_0800db58 */

void FUN_0800db58(void)

{
  DAT_200005f0 = 0;
  return;
}



/* ENTRY 0x0800db64 : FUN_0800db64 */

void FUN_0800db64(void)

{
  DAT_200005f8 = 0;
  return;
}



/* ENTRY 0x0800db70 : FUN_0800db70 */

void FUN_0800db70(void)

{
  DAT_200005f9 = 0;
  return;
}



/* ENTRY 0x0800db7c : FUN_0800db7c */

void FUN_0800db7c(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if (param_1[3] != 0) {
    uVar2 = DAT_e000ed0c;
    uVar2 = 0x700 - (uVar2 & 0x700) >> 8;
    (&DAT_e000e400)[bVar1] =
         (char)((0xfU >> (uVar2 & 0xff) & (uint)param_1[2] | (uint)param_1[1] << (4 - uVar2 & 0xff))
               << 4);
    *(int *)(&DAT_e000e100 + (uint)(*param_1 >> 5) * 4) = 1 << (*param_1 & 0x1f);
    return;
  }
  *(int *)(&DAT_e000e180 + (uint)(bVar1 >> 5) * 4) = 1 << (bVar1 & 0x1f);
  return;
}



/* ENTRY 0x0800dbec : FUN_0800dbec */

void FUN_0800dbec(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x0800dc00 : FUN_0800dc00 */

void FUN_0800dc00(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x0800dc14 : FUN_0800dc14 */

void FUN_0800dc14(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800dc38 : FUN_0800dc38 */

undefined * FUN_0800dc38(void)

{
  return &DAT_08026ebe;
}



/* ENTRY 0x0800dd50 : FUN_0800dd50 */

void FUN_0800dd50(void)

{
  FUN_0800dd80();
  FUN_0800e7cc();
  FUN_0800e820();
  FUN_0800e864();
  FUN_0800e76c();
  FUN_0800e950();
  FUN_0800e99c();
  FUN_0800e8d4();
  FUN_0800e908();
  FUN_0800dd82();
  FUN_0800dc38();
  return;
}



/* ENTRY 0x0800dd80 : FUN_0800dd80 */

void FUN_0800dd80(void)

{
  return;
}



/* ENTRY 0x0800dd82 : FUN_0800dd82 */

void FUN_0800dd82(void)

{
  return;
}



/* ENTRY 0x0800dd84 : FUN_0800dd84 */

void FUN_0800dd84(void)

{
  if ((DAT_20000040 == '\x01') && (DAT_20000035 != -1)) {
    DAT_20000035 = DAT_20000035 + '\x01';
  }
  return;
}



/* ENTRY 0x0800dda8 : FUN_0800dda8 */

void FUN_0800dda8(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if (DAT_20000035 != '\0') {
      DAT_20000035 = DAT_20000035 + -1;
    }
    if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
      FUN_0800ea5c();
      DAT_20000050 = (&DAT_200010c4)[DAT_20000038];
      if (DAT_20000038 != DAT_20000037) {
        *(int *)(DAT_20000050 + 0x34) = *(int *)(DAT_20000050 + 0x34) + 1;
        DAT_20000020 = DAT_20000020 + 1;
        FUN_08008284();
      }
    }
    FUN_08008254(uVar1);
  }
  return;
}



/* ENTRY 0x0800de38 : FUN_0800de38 */

undefined1 * FUN_0800de38(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (DAT_20000035 == '\0') {
    uVar2 = FUN_0800824c();
    puVar1 = DAT_20000024;
    if (DAT_20000024 != (undefined1 *)0x0) {
      DAT_20000024 = *(undefined1 **)(DAT_20000024 + 4);
    }
    FUN_08008254(uVar2);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 1;
      *(undefined2 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 4) = param_1;
      *(undefined **)(puVar1 + 0x14) = &DAT_0800de88;
      FUN_0800e750(puVar1);
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* ENTRY 0x0800de8c : FUN_0800de8c */

int FUN_0800de8c(char *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == '\x01') {
    if (DAT_20000035 == '\0') {
      if (DAT_20000036 == '\0') {
        uVar3 = FUN_0800824c();
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          *(byte *)(DAT_20000048 + 0x2c) = *(byte *)(DAT_20000048 + 0x2c) | 2;
          *(undefined1 *)(DAT_20000048 + 0x2d) = 0;
          *(undefined4 *)(DAT_20000048 + 0x28) = param_2;
          FUN_0800e6d4(param_1);
          FUN_08008254(uVar3);
          FUN_0800e9e8();
          uVar3 = FUN_0800824c();
          cVar1 = *(char *)(DAT_20000048 + 0x2d);
          if (cVar1 == '\0') {
            iVar2 = *(int *)(DAT_20000048 + 0x24);
            *param_3 = 0;
          }
          else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
            FUN_0800e670(DAT_20000048,param_1);
            iVar2 = 0;
            *param_3 = 10;
          }
          else {
            iVar2 = 0;
            *param_3 = 0xe;
          }
          *(undefined1 *)(DAT_20000048 + 0x2c) = 0;
          *(undefined1 *)(DAT_20000048 + 0x2d) = 0;
          *(undefined4 *)(DAT_20000048 + 0x1c) = 0;
          *(undefined4 *)(DAT_20000048 + 0x20) = 0;
          *(undefined4 *)(DAT_20000048 + 0x24) = 0;
          FUN_08008254(uVar3);
        }
        else {
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          FUN_08008254(uVar3);
          *param_3 = 0;
        }
      }
      else {
        *param_3 = 0xd;
        iVar2 = 0;
      }
    }
    else {
      *param_3 = 2;
      iVar2 = 0;
    }
  }
  else {
    *param_3 = 1;
    iVar2 = 0;
  }
  return iVar2;
}



/* ENTRY 0x0800df94 : FUN_0800df94 */

undefined4 FUN_0800df94(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_0800824c();
    if (param_1[10] == '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(param_1 + 4) = param_2;
        FUN_08008254(uVar1);
        uVar1 = 0;
      }
      else {
        FUN_08008254(uVar1);
        uVar1 = 0x14;
      }
    }
    else {
      FUN_0800e5e0(param_1,param_2,2,0);
      FUN_08008254(uVar1);
      FUN_0800e9e8();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800dfe4 : FUN_0800dfe4 */

void FUN_0800dfe4(void)

{
  if (DAT_20000040 == '\0') {
    FUN_0800ea5c();
    DAT_20000037 = DAT_20000038;
    DAT_20000048 = (&DAT_200010c4)[DAT_20000038];
    DAT_20000050 = DAT_20000048;
    FUN_0800825a();
  }
  return;
}



/* ENTRY 0x0800e02c : FUN_0800e02c */

void FUN_0800e02c(void)

{
  undefined4 uVar1;
  
  FUN_0800e404(2);
  uVar1 = FUN_0800824c();
  DAT_20000044 = 0;
  FUN_08008254(uVar1);
  FUN_0800e404(10);
  uVar1 = FUN_0800824c();
  DAT_2000002c = DAT_20000044;
  DAT_20000034 = 1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800e078 : FUN_0800e078 */

void FUN_0800e078(void)

{
  return;
}



/* ENTRY 0x0800e07c : FUN_0800e07c */

undefined4 FUN_0800e07c(uint param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *local_30;
  uint local_2c;
  
  uVar6 = FUN_0800824c();
  if ((&DAT_200010c4)[param_2] == 0) {
    local_2c = param_1;
    if (param_1 == 0xff) {
      local_2c = (uint)*(byte *)(DAT_20000048 + 0x2e);
    }
    iVar8 = (&DAT_200010c4)[local_2c];
    if (iVar8 == 0) {
      FUN_08008254(uVar6);
      uVar6 = 0x29;
    }
    else if (iVar8 == 1) {
      FUN_08008254(uVar6);
      uVar6 = 0x43;
    }
    else {
      uVar1 = (int)param_2 >> 3;
      bVar4 = (byte)(1 << (uVar1 & 0xff));
      bVar5 = (byte)(1 << (param_2 & 7));
      (&DAT_200010c4)[local_2c] = 0;
      (&DAT_200010c4)[param_2] = iVar8;
      uVar9 = (uint)*(byte *)(iVar8 + 0x30);
      bVar2 = *(byte *)(iVar8 + 0x32);
      bVar3 = *(byte *)(iVar8 + 0x31);
      if (((&DAT_2000003a)[uVar9] & bVar3) != 0) {
        (&DAT_2000003a)[uVar9] = (&DAT_2000003a)[uVar9] & ~bVar3;
        if ((&DAT_2000003a)[uVar9] == '\0') {
          DAT_20000039 = DAT_20000039 & ~bVar2;
        }
        DAT_20000039 = DAT_20000039 | bVar4;
        (&DAT_2000003a)[uVar1] = (&DAT_2000003a)[uVar1] | bVar5;
      }
      iVar7 = *(int *)(iVar8 + 0x1c);
      if (iVar7 != 0) {
        *(byte *)(iVar7 + 0xb + uVar9) = *(byte *)(iVar7 + 0xb + uVar9) & ~bVar3;
        if (*(char *)(iVar7 + 0xb + uVar9) == '\0') {
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & ~bVar2;
        }
        *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) | bVar4;
        *(byte *)(iVar7 + 0xb + uVar1) = *(byte *)(iVar7 + 0xb + uVar1) | bVar5;
      }
      if (*(int *)(iVar8 + 0x20) != 0) {
        local_30 = *(int **)(iVar8 + 0x20);
        iVar7 = *local_30;
        while (iVar7 != 0) {
          *(byte *)(iVar7 + 0xb + uVar9) = *(byte *)(iVar7 + 0xb + uVar9) & ~bVar3;
          if (*(char *)(iVar7 + 0xb + uVar9) == '\0') {
            *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & ~bVar2;
          }
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) | bVar4;
          *(byte *)(iVar7 + 0xb + uVar1) = *(byte *)(iVar7 + 0xb + uVar1) | bVar5;
          local_30 = local_30 + 1;
          iVar7 = *local_30;
        }
      }
      *(char *)(iVar8 + 0x2e) = (char)param_2;
      *(char *)(iVar8 + 0x30) = (char)uVar1;
      *(char *)(iVar8 + 0x2f) = (char)(param_2 & 7);
      *(byte *)(iVar8 + 0x32) = bVar4;
      *(byte *)(iVar8 + 0x31) = bVar5;
      FUN_08008254(uVar6);
      if (DAT_20000040 == '\x01') {
        FUN_0800e9e8();
      }
      uVar6 = 0;
    }
  }
  else {
    FUN_08008254(uVar6);
    uVar6 = 0x28;
  }
  return uVar6;
}



/* ENTRY 0x0800e21c : FUN_0800e21c */

int FUN_0800e21c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  if (DAT_20000035 == '\0') {
    if ((&DAT_200010c4)[param_4] == 0) {
      (&DAT_200010c4)[param_4] = 1;
      FUN_08008254(uVar1);
      FUN_0800ec9c(param_6,param_7,param_9);
      uVar1 = FUN_0800e368(param_1,param_2,param_3,param_9);
      iVar2 = FUN_0800ea88(param_4,uVar1,param_6,param_5,param_7,param_8,param_9);
      if (iVar2 == 0) {
        if (DAT_20000040 == '\x01') {
          FUN_0800e9e8();
        }
      }
      else {
        uVar1 = FUN_0800824c();
        (&DAT_200010c4)[param_4] = 0;
        FUN_08008254(uVar1);
      }
    }
    else {
      FUN_08008254(uVar1);
      iVar2 = 0x28;
    }
  }
  else {
    FUN_08008254(uVar1);
    iVar2 = 0x3c;
  }
  return iVar2;
}



/* ENTRY 0x0800e2d4 : FUN_0800e2d4 */

void FUN_0800e2d4(void)

{
  return;
}



/* ENTRY 0x0800e2d6 : FUN_0800e2d6 */

void FUN_0800e2d6(void)

{
  return;
}



/* ENTRY 0x0800e2d8 : FUN_0800e2d8 */

void FUN_0800e2d8(void)

{
  return;
}



/* ENTRY 0x0800e2dc : FUN_0800e2dc */

undefined4 FUN_0800e2dc(uint param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_0800824c();
  if (param_1 == 0xff) {
    param_1 = (uint)*(byte *)(DAT_20000048 + 0x2e);
  }
  iVar2 = (&DAT_200010c4)[param_1];
  if (iVar2 == 0) {
    FUN_08008254(uVar1);
    uVar1 = 0x43;
  }
  else if (iVar2 == 1) {
    FUN_08008254(uVar1);
    uVar1 = 0x43;
  }
  else if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
    FUN_08008254(uVar1);
    uVar1 = 0x45;
  }
  else {
    iVar3 = 0;
    iVar5 = *(int *)(iVar2 + 0xc);
    piVar4 = *(int **)(iVar2 + 8);
    FUN_08008254(uVar1);
    while (*piVar4 == 0) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    *param_2 = iVar3 << 2;
    param_2[1] = (iVar5 - iVar3) * 4;
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800e368 : FUN_0800e368 */

undefined4 * FUN_0800e368(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0x1000000;
  param_3[-1] = param_1;
  param_3[-2] = 0xfffffffe;
  param_3[-3] = 0x12121212;
  param_3[-4] = 0x3030303;
  param_3[-5] = 0x2020202;
  param_3[-6] = 0x1010101;
  param_3[-7] = param_2;
  param_3[-8] = 0x11111111;
  param_3[-9] = 0x10101010;
  param_3[-10] = 0x9090909;
  param_3[-0xb] = 0x8080808;
  param_3[-0xc] = 0x7070707;
  param_3[-0xd] = 0x6060606;
  param_3[-0xe] = 0x5050505;
  param_3[-0xf] = 0x4040404;
  return param_3 + -0xf;
}



/* ENTRY 0x0800e402 : FUN_0800e402 */

void FUN_0800e402(void)

{
  return;
}



/* ENTRY 0x0800e404 : FUN_0800e404 */

void FUN_0800e404(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) && (param_1 != 0)) {
    uVar2 = FUN_0800824c();
    bVar1 = *(byte *)(DAT_20000048 + 0x30);
    (&DAT_2000003a)[bVar1] = (&DAT_2000003a)[bVar1] & ~*(byte *)(DAT_20000048 + 0x31);
    if ((&DAT_2000003a)[bVar1] == '\0') {
      DAT_20000039 = DAT_20000039 & ~*(byte *)(DAT_20000048 + 0x32);
    }
    *(int *)(DAT_20000048 + 0x28) = param_1;
    FUN_08008254(uVar2);
    FUN_0800e9e8();
  }
  return;
}



/* ENTRY 0x0800e47c : FUN_0800e47c */

void FUN_0800e47c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000064 = param_1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800e498 : FUN_0800e498 */

void FUN_0800e498(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0800824c();
  DAT_20000064 = DAT_20000064 + 1;
  FUN_08008254(uVar2);
  if (DAT_20000040 == '\x01') {
    if (DAT_20000058 == '\0') {
      bVar1 = true;
    }
    else if (DAT_20000058 == '\x01') {
      bVar1 = false;
    }
    else if (DAT_20000058 == '\x02') {
      bVar1 = true;
      DAT_20000058 = '\x01';
    }
    else {
      bVar1 = true;
      DAT_20000058 = '\0';
    }
    iVar3 = DAT_20000054;
    if (bVar1) {
      while (*(char *)(iVar3 + 0x2e) != '+') {
        uVar2 = FUN_0800824c();
        if ((*(int *)(iVar3 + 0x28) != 0) &&
           (*(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + -1, *(int *)(iVar3 + 0x28) == 0)) {
          if ((*(byte *)(iVar3 + 0x2c) & 0x37) == 0) {
            *(undefined1 *)(iVar3 + 0x2d) = 0;
          }
          else {
            *(byte *)(iVar3 + 0x2c) = *(byte *)(iVar3 + 0x2c) & 200;
            *(undefined1 *)(iVar3 + 0x2d) = 1;
          }
          if ((*(byte *)(iVar3 + 0x2c) & 8) == 0) {
            DAT_20000039 = *(byte *)(iVar3 + 0x32) | DAT_20000039;
            (&DAT_2000003a)[*(byte *)(iVar3 + 0x30)] =
                 (&DAT_2000003a)[*(byte *)(iVar3 + 0x30)] | *(byte *)(iVar3 + 0x31);
          }
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        FUN_08008254(uVar2);
      }
    }
  }
  return;
}



/* ENTRY 0x0800e580 : FUN_0800e580 */

undefined4 FUN_0800e580(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800e58c : FUN_0800e58c */

void FUN_0800e58c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  FUN_0800e498();
  FUN_0800dda8();
  return;
}



/* ENTRY 0x0800e5b4 : FUN_0800e5b4 */

void FUN_0800e5b4(void)

{
  uint uVar1;
  
  uVar1 = FUN_0800e580();
  DAT_e000e014 = uVar1 / 100 - 1;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 5;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 2;
  return;
}



/* ENTRY 0x0800e5e0 : FUN_0800e5e0 */

uint FUN_0800e5e0(int param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)(&DAT_08026d4c)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_08026d4c)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_200010c4)[uVar3];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) & ~param_3;
  *(undefined1 *)(iVar1 + 0x2d) = param_4;
  if ((*(byte *)(iVar1 + 0x2c) & 8) == 0) {
    DAT_20000039 = *(byte *)(iVar1 + 0x32) | DAT_20000039;
    (&DAT_2000003a)[uVar2] = (&DAT_2000003a)[uVar2] | *(byte *)(iVar1 + 0x31);
  }
  FUN_0800e670(iVar1,param_1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_0800e69a(iVar1,*(undefined4 *)(iVar1 + 0x20));
    *(int *)(iVar1 + 0x1c) = param_1;
  }
  return uVar3;
}



/* ENTRY 0x0800e670 : FUN_0800e670 */

void FUN_0800e670(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x30);
  *(byte *)(param_2 + 0xb + uVar1) = *(byte *)(param_2 + 0xb + uVar1) & ~*(byte *)(param_1 + 0x31);
  if (*(char *)(param_2 + 0xb + uVar1) == '\0') {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & ~*(byte *)(param_1 + 0x32);
  }
  return;
}



/* ENTRY 0x0800e69a : FUN_0800e69a */

void FUN_0800e69a(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x30);
  bVar1 = *(byte *)(param_1 + 0x32);
  bVar2 = *(byte *)(param_1 + 0x31);
  iVar3 = *param_2;
  while (iVar3 != 0) {
    *(byte *)(iVar3 + 0xb + uVar4) = *(byte *)(iVar3 + 0xb + uVar4) & ~bVar2;
    if (*(char *)(iVar3 + 0xb + uVar4) == '\0') {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & ~bVar1;
    }
    param_2 = param_2 + 1;
    iVar3 = *param_2;
  }
  return;
}



/* ENTRY 0x0800e6d4 : FUN_0800e6d4 */

void FUN_0800e6d4(int param_1)

{
  byte bVar1;
  
  *(int *)(DAT_20000048 + 0x1c) = param_1;
  *(byte *)(param_1 + 0xb + (uint)*(byte *)(DAT_20000048 + 0x30)) =
       *(byte *)(param_1 + 0xb + (uint)*(byte *)(DAT_20000048 + 0x30)) |
       *(byte *)(DAT_20000048 + 0x31);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | *(byte *)(DAT_20000048 + 0x32);
  bVar1 = *(byte *)(DAT_20000048 + 0x30);
  (&DAT_2000003a)[bVar1] = (&DAT_2000003a)[bVar1] & ~*(byte *)(DAT_20000048 + 0x31);
  if ((&DAT_2000003a)[bVar1] == '\0') {
    DAT_20000039 = DAT_20000039 & ~*(byte *)(DAT_20000048 + 0x32);
  }
  return;
}



/* ENTRY 0x0800e750 : FUN_0800e750 */

void FUN_0800e750(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(param_1 + 0xb + uVar1) = 0;
  }
  return;
}



/* ENTRY 0x0800e76c : FUN_0800e76c */

void FUN_0800e76c(void)

{
  uint uVar1;
  
  thunk_FUN_0800e948(&DAT_200009f4,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200009f4)[uVar1 * 0x18] = 0;
    (&DAT_200009f8)[uVar1 * 6] = &DAT_200009f4 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_20000a08)[uVar1 * 6] = &DAT_0800e7c4;
  }
  (&DAT_200009f4)[uVar1 * 0x18] = 0;
  (&DAT_200009f8)[uVar1 * 6] = 0;
  (&DAT_20000a08)[uVar1 * 6] = &DAT_0800e7c4;
  DAT_20000024 = &DAT_200009f4;
  return;
}



/* ENTRY 0x0800e7cc : FUN_0800e7cc */

void FUN_0800e7cc(void)

{
  DAT_20000064 = 0;
  DAT_20000035 = 0;
  DAT_20000036 = 0;
  DAT_20000041 = 0;
  DAT_20000040 = 0;
  DAT_20000020 = 0;
  DAT_20000044 = 0;
  DAT_20000030 = 0;
  DAT_2000002c = 0;
  DAT_20000034 = 0;
  return;
}



/* ENTRY 0x0800e820 : FUN_0800e820 */

void FUN_0800e820(void)

{
  uint uVar1;
  
  DAT_20000039 = 0;
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_2000003a)[uVar1] = 0;
  }
  DAT_20000037 = 0;
  DAT_20000038 = 0;
  DAT_20000050 = 0;
  DAT_20000048 = 0;
  return;
}



/* ENTRY 0x0800e864 : FUN_0800e864 */

void FUN_0800e864(void)

{
  uint uVar1;
  
  thunk_FUN_0800e948(&DAT_20001174,0x390);
  thunk_FUN_0800e948(&DAT_200010c4,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001188)[uVar1 * 0x13] = &DAT_20001174 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001188)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001174;
  return;
}



/* ENTRY 0x0800e8d4 : FUN_0800e8d4 */

void FUN_0800e8d4(void)

{
  FUN_0800e21c(&LAB_0800ebac_1,0,&DAT_200010c0,0x2b,0xffff,&DAT_20000ec4,0x80,0,3);
  return;
}



/* ENTRY 0x0800e908 : FUN_0800e908 */

void FUN_0800e908(void)

{
  FUN_0800e21c(&LAB_0800ebd4_1,0,&DAT_20000ec0,0x2a,0xfffe,&DAT_20000cc4,0x80,0,3);
  return;
}



/* ENTRY 0x0800e93c : thunk_FUN_0800e948 */

void thunk_FUN_0800e948(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e948 : FUN_0800e948 */

void FUN_0800e948(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e950 : FUN_0800e950 */

void FUN_0800e950(void)

{
  uint uVar1;
  
  thunk_FUN_0800e948(&DAT_20001504,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_20001508)[uVar1 * 5] = &DAT_20001504 + (uVar1 + 1) * 0x14;
  }
  (&DAT_20001508)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_20001504;
  return;
}



/* ENTRY 0x0800e99c : FUN_0800e99c */

void FUN_0800e99c(void)

{
  uint uVar1;
  
  thunk_FUN_0800e948(&DAT_200015cc,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200015cc)[uVar1 * 6] = &DAT_200015cc + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_200015cc)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_200015cc;
  return;
}



/* ENTRY 0x0800e9e8 : FUN_0800e9e8 */

void FUN_0800e9e8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_0800ea5c();
    DAT_20000050 = (&DAT_200010c4)[DAT_20000038];
    if (DAT_20000038 != DAT_20000037) {
      *(int *)(DAT_20000050 + 0x34) = *(int *)(DAT_20000050 + 0x34) + 1;
      DAT_20000020 = DAT_20000020 + 1;
      FUN_0800827a();
    }
  }
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800ea5c : FUN_0800ea5c */

void FUN_0800ea5c(void)

{
  DAT_20000038 = (&DAT_08026d4c)[(byte)(&DAT_2000003a)[(byte)(&DAT_08026d4c)[DAT_20000039]]] +
                 (&DAT_08026d4c)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x0800ea88 : FUN_0800ea88 */

undefined4
FUN_0800ea88(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5
            ,undefined4 param_6,undefined2 param_7)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_0800824c();
  puVar3 = DAT_2000004c;
  if (DAT_2000004c == (undefined4 *)0x0) {
    FUN_08008254(uVar4);
    uVar4 = 0x42;
  }
  else {
    piVar1 = DAT_2000004c + 5;
    DAT_2000004c = (undefined4 *)*piVar1;
    FUN_08008254(uVar4);
    *puVar3 = param_2;
    *(byte *)((int)puVar3 + 0x2e) = (byte)param_1;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined1 *)((int)puVar3 + 0x2d) = 0;
    puVar3[10] = 0;
    puVar3[1] = param_6;
    puVar3[3] = param_5;
    puVar3[2] = param_3;
    *(undefined2 *)(puVar3 + 4) = param_7;
    *(undefined2 *)((int)puVar3 + 0x12) = param_4;
    *(char *)(puVar3 + 0xc) = (char)(param_1 >> 3);
    *(byte *)((int)puVar3 + 0x2f) = (byte)param_1 & 7;
    *(char *)((int)puVar3 + 0x32) = (char)(1 << *(sbyte *)(puVar3 + 0xc));
    *(char *)((int)puVar3 + 0x31) = (char)(1 << (uint)*(byte *)((int)puVar3 + 0x2f));
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    bVar2 = false;
    while (!bVar2) {
      puVar3[0x12] = 0;
      bVar2 = true;
    }
    FUN_0800e078(puVar3);
    FUN_0800e2d4(puVar3);
    uVar4 = FUN_0800824c();
    (&DAT_200010c4)[param_1] = puVar3;
    *piVar1 = (int)DAT_20000054;
    puVar3[6] = 0;
    if (DAT_20000054 != (undefined4 *)0x0) {
      DAT_20000054[6] = puVar3;
    }
    DAT_20000054 = puVar3;
    DAT_20000039 = *(byte *)((int)puVar3 + 0x32) | DAT_20000039;
    (&DAT_2000003a)[*(byte *)(puVar3 + 0xc)] =
         (&DAT_2000003a)[*(byte *)(puVar3 + 0xc)] | *(byte *)((int)puVar3 + 0x31);
    DAT_20000041 = DAT_20000041 + '\x01';
    FUN_08008254(uVar4);
    uVar4 = 0;
  }
  return uVar4;
}



/* ENTRY 0x0800ec60 : FUN_0800ec60 */

void FUN_0800ec60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = param_3;
  local_14 = param_4;
  for (uVar2 = 0; uVar2 < 0x2c; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = FUN_0800e2dc(uVar2,&uStack_18);
    if (((iVar1 == 0) && (iVar1 = (&DAT_200010c4)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0xc) * 4;
      *(undefined4 *)(iVar1 + 0x44) = local_14;
    }
  }
  return;
}



/* ENTRY 0x0800ec9c : FUN_0800ec9c */

void FUN_0800ec9c(undefined4 *param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* ENTRY 0x0800ecb6 : FUN_0800ecb6 */

void FUN_0800ecb6(void)

{
  FUN_0800ed44(4);
  return;
}



/* ENTRY 0x0800ecc0 : FUN_0800ecc0 */

void FUN_0800ecc0(void)

{
  uint uVar1;
  
  if (DAT_200006ce != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031fa)[uVar1] = 0;
    }
  }
  FUN_08021bbc();
  DAT_2000323e = 0x31;
  DAT_2000323f = 0x32;
  DAT_20003240 = 0x33;
  DAT_20003241 = 0x34;
  DAT_20003242 = 0x35;
  DAT_20003243 = 0x36;
  return;
}



/* ENTRY 0x0800ed1c : FUN_0800ed1c */

void FUN_0800ed1c(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x0800ed28 : FUN_0800ed28 */

void FUN_0800ed28(int param_1)

{
  if ((param_1 == 7) && (DAT_200032c0 == '\0')) {
    DAT_200032b6 = DAT_200032b6 | 0x20;
  }
  return;
}



/* ENTRY 0x0800ed44 : FUN_0800ed44 */

undefined4 FUN_0800ed44(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == DAT_20000309) {
    uVar1 = 1;
  }
  else {
    DAT_20000308 = (byte)param_1;
    DAT_20000309 = DAT_20000308;
    switch(param_1) {
    case 1:
    case 7:
      FUN_08010ce2(&DAT_40012c00,0);
      FUN_08010ce2(&DAT_40012c00,4,0);
      FUN_08010ce2(&DAT_40012c00,8,0);
      FUN_0800bcd6(&DAT_40010c00,0x2000);
      FUN_0800bcd6(&DAT_40010c00,0x8000);
      FUN_0800bcd6(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_080113a4(&DAT_40012c00,0,0x40);
      FUN_08010ce2(&DAT_40012c00,0,1);
      FUN_080113a4(&DAT_40012c00,4,0x40);
      FUN_08010ce2(&DAT_40012c00,4,1);
      FUN_080113a4(&DAT_40012c00,8,0x40);
      FUN_08010ce2(&DAT_40012c00,8,1);
      FUN_0800bcda(&DAT_40010c00,0x2000);
      FUN_0800bcda(&DAT_40010c00,0x8000);
      FUN_0800bcda(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_080113a4(&DAT_40012c00,0,0x60);
      FUN_08010ce2(&DAT_40012c00,0,1);
      FUN_080113a4(&DAT_40012c00,4,0x60);
      FUN_08010ce2(&DAT_40012c00,4,1);
      FUN_080113a4(&DAT_40012c00,8,0x60);
      FUN_08010ce2(&DAT_40012c00,8,1);
      FUN_0800bcda(&DAT_40010c00,0x2000);
      FUN_0800bcda(&DAT_40010c00,0x8000);
      FUN_0800bcda(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800ee90 : FUN_0800ee90 */

void FUN_0800ee90(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x0800ee9c : FUN_0800ee9c */

void FUN_0800ee9c(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x0800eeb0 : FUN_0800eeb0 */

void FUN_0800eeb0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_40021014;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_40021014 = param_1;
  return;
}



/* ENTRY 0x0800eec8 : FUN_0800eec8 */

void FUN_0800eec8(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_4002101c;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_4002101c = param_1;
  return;
}



/* ENTRY 0x0800eee0 : FUN_0800eee0 */

void FUN_0800eee0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_40021010;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_40021010 = param_1;
  return;
}



/* ENTRY 0x0800eef8 : FUN_0800eef8 */

void FUN_0800eef8(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_40021018;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_40021018 = param_1;
  return;
}



/* ENTRY 0x0800ef10 : FUN_0800ef10 */

void FUN_0800ef10(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = DAT_4002100c;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_4002100c = param_1;
  return;
}



/* ENTRY 0x0800ef28 : FUN_0800ef28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ef28(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x0800ef34 : FUN_0800ef34 */

void FUN_0800ef34(uint *param_1)

{
  sbyte sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = DAT_40021004;
  uVar4 = uVar4 & 0xc;
  if ((uVar4 == 0 || uVar4 == 4) || (uVar4 != 8)) {
    *param_1 = 8000000;
  }
  else {
    uVar4 = DAT_40021004;
    uVar3 = DAT_40021004;
    iVar2 = ((uVar4 & 0x3c0000) >> 0x12) + 2;
    if (((uVar3 & 0x10000) == 0) || (uVar4 = DAT_40021004, (uVar4 & 0x20000) != 0)) {
      *param_1 = iVar2 * 4000000;
    }
    else {
      *param_1 = iVar2 * 8000000;
    }
  }
  uVar4 = DAT_40021004;
  uVar3 = *param_1 >> (&DAT_200009e4)[(uVar4 & 0xf0) >> 4];
  param_1[1] = uVar3;
  uVar4 = DAT_40021004;
  param_1[2] = uVar3 >> (&DAT_200009e4)[(uVar4 & 0x700) >> 8];
  uVar4 = DAT_40021004;
  sVar1 = (&DAT_200009e4)[(uVar4 & 0x3800) >> 0xb];
  param_1[3] = uVar3 >> sVar1;
  uVar4 = DAT_40021004;
  param_1[4] = (uVar3 >> sVar1) / (uint)(byte)(&DAT_200009e0)[(uVar4 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x0800efe4 : FUN_0800efe4 */

void FUN_0800efe4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_40021004;
  uVar2 = uVar2 & 0xc;
  if (uVar2 == 0) {
    *param_1 = 8000000;
  }
  else if (uVar2 == 4) {
    *param_1 = 8000000;
  }
  else if (uVar2 == 8) {
    uVar2 = DAT_40021004;
    uVar1 = DAT_40021004;
    if ((uVar2 & 0x8000000) == 0) {
      iVar3 = ((uVar2 & 0x83c0000) >> 0x12) + 2;
    }
    else {
      iVar3 = ((uVar2 & 0x3c0000) >> 0x12) + 0x11;
    }
    if ((uVar1 & 0x10000) == 0) {
      *param_1 = iVar3 * 4000000;
    }
    else {
      uVar2 = DAT_40021004;
      if ((uVar2 & 0x20000) == 0) {
        *param_1 = iVar3 * 8000000;
      }
      else {
        *param_1 = iVar3 * 4000000;
      }
    }
  }
  else {
    *param_1 = 8000000;
  }
  uVar2 = DAT_40021004;
  param_1[1] = *param_1 >> (&DAT_20000180)[(uVar2 & 0xf0) >> 4];
  uVar2 = DAT_40021004;
  param_1[2] = param_1[1] >> (&DAT_20000180)[(uVar2 & 0x700) >> 8];
  uVar2 = DAT_40021004;
  param_1[3] = param_1[1] >> (&DAT_20000180)[(uVar2 & 0x3800) >> 0xb];
  uVar2 = DAT_40021004;
  param_1[4] = param_1[3] / (uint)(byte)(&DAT_20000190)[(uVar2 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x0800f0d0 : FUN_0800f0d0 */

bool FUN_0800f0d0(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 5 == 1) {
    uVar1 = DAT_40021000;
  }
  else if (param_1 >> 5 == 2) {
    uVar1 = DAT_40021020;
  }
  else {
    uVar1 = Ram40021024;
  }
  return (1 << (param_1 & 0x1f) & uVar1) != 0;
}



/* ENTRY 0x0800f100 : FUN_0800f100 */

void FUN_0800f100(int param_1)

{
  undefined1 uVar1;
  
  DAT_40021020._0_1_ = 0;
  DAT_40021020._0_1_ = 0;
  uVar1 = 1;
  if (param_1 != 1) {
    if (param_1 != 4) {
      return;
    }
    uVar1 = 5;
  }
  DAT_40021020._0_1_ = uVar1;
  return;
}



/* ENTRY 0x0800f124 : FUN_0800f124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800f124(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x0800f130 : FUN_0800f130 */

void FUN_0800f130(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x0800f140 : FUN_0800f140 */

void FUN_0800f140(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x0800f150 : FUN_0800f150 */

void FUN_0800f150(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x0800f160 : FUN_0800f160 */

void FUN_0800f160(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x0800f170 : FUN_0800f170 */

longlong FUN_0800f170(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_0800f21c();
  if ((uint)DAT_200009b4 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_20004e18 = (undefined1)(uVar1 / 0xe10);
    DAT_20004e19 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_20004e1a = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_200009b4 = (ushort)(uVar1 / 0x15180);
    FUN_08022d54(&local_20,uVar1);
    DAT_20004e18 = (undefined1)local_20;
    DAT_20004e19 = local_20._1_1_;
    DAT_20004e1a = local_20._2_1_;
    DAT_20004e1c = (undefined2)local_1c;
    DAT_20004e1e = local_1c._2_1_;
    DAT_20004e1f = local_1c._3_1_;
    DAT_20004e20 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0800f21c : FUN_0800f21c */

undefined4 FUN_0800f21c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x0800f234 : FUN_0800f234 */

bool FUN_0800f234(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x0800f254 : FUN_0800f254 */

void FUN_0800f254(void)

{
  int iVar1;
  
  iVar1 = FUN_0800f234(1);
  if (iVar1 != 0) {
    FUN_0800f170();
  }
  iVar1 = FUN_0800f234(2);
  if (iVar1 != 0) {
    FUN_0800f140(2);
    FUN_0800f170();
  }
  FUN_0800f140(5);
  FUN_0800f3f4();
  return;
}



/* ENTRY 0x0800f280 : FUN_0800f280 */

void FUN_0800f280(ushort param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = DAT_40002800;
  if (param_2 == 0) {
    param_1 = uVar1 & ~param_1;
  }
  else {
    param_1 = param_1 | uVar1;
  }
  DAT_40002800 = param_1;
  return;
}



/* ENTRY 0x0800f298 : FUN_0800f298 */

undefined4 FUN_0800f298(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_0800eec8(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_0800ed1c(1);
  iVar2 = FUN_08009206(4);
  if (iVar2 == 0x5050) {
    FUN_0800f404();
    FUN_0800f3f4();
  }
  else {
    FUN_080091f4();
    FUN_0800f100(1);
    for (; (iVar2 = FUN_0800f0d0(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_0800e404(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_0800f130(0x100);
    FUN_0800f124(1);
    FUN_0800f3f4();
    FUN_0800f404();
    FUN_0800f280(1);
    FUN_0800f3f4();
    FUN_0800f150();
    FUN_0800f3d0(0x7fff);
    FUN_0800f3f4();
    FUN_0800f34c(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_0800f160();
    FUN_08009212(4,0x5050);
  }
  FUN_0800f170();
  return 0;
}



/* ENTRY 0x0800f34c : FUN_0800f34c */

undefined4
FUN_0800f34c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801c81c(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_0800eec8(0x18000000,1);
    FUN_0800ed1c(1);
    FUN_0800f3a8(uVar1);
    FUN_0800f3f4();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800f3a8 : FUN_0800f3a8 */

void FUN_0800f3a8(undefined4 param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  DAT_40002818 = (short)((uint)param_1 >> 0x10);
  DAT_4000281c = (short)param_1;
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x0800f3d0 : FUN_0800f3d0 */

void FUN_0800f3d0(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  DAT_40002808 = (ushort)((uint)(param_1 << 0xc) >> 0x1c);
  DAT_4000280c = (short)param_1;
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x0800f3f4 : FUN_0800f3f4 */

void FUN_0800f3f4(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x0800f404 : FUN_0800f404 */

void FUN_0800f404(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x0800f41c : FUN_0800f41c */

void FUN_0800f41c(void)

{
  DAT_20003564 = 0;
  DAT_2000352c = 0;
  DAT_20003568 = 0;
  DAT_20003530 = 0;
  return;
}



/* ENTRY 0x0800f438 : FUN_0800f438 */

bool FUN_0800f438(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0800f474:
      DAT_200031f4 = 1;
      DAT_2000323c = 0;
      if ((*(char *)(param_1 + 4) == '0') && (*(char *)(param_1 + 5) == '2')) {
        diag_BuscurLimit_set = 8000;
      }
      DAT_200006ce = !bVar1;
      if (DAT_200006ce) {
        DAT_200030de = DAT_200030de | 0x800;
      }
      else {
        DAT_200030de = DAT_200030de & 0xf7ff;
      }
      return !DAT_200006ce;
    }
    if ((("KSSA09"[uVar2] != '\0') && ("KSSA01"[uVar2] != '\0')) &&
       ((*(byte *)(param_1 + uVar2) < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA09"[uVar2] < *(byte *)(param_1 + uVar2))))) {
      bVar1 = false;
      goto code_r0x0800f474;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0800f4dc : FUN_0800f4dc */

void FUN_0800f4dc(void)

{
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_0800eef8(8,1);
  FUN_0800eec8(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_0800bb9c(&DAT_40010c00,&local_8);
  FUN_0800bcda(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_0800f610(&DAT_40003c00,&local_1c);
  FUN_0800f5e8(&DAT_40003c00,1);
  FUN_0800f56c(0xff);
  return;
}



/* ENTRY 0x0800f56c : FUN_0800f56c */

undefined1 FUN_0800f56c(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_0800f5fa(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_0800f60c(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_0800f5fa(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_0800f608(&DAT_40003c00);
          return uVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < 0xc9);
      return 0;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xc9);
  return 0;
}



/* ENTRY 0x0800f5c0 : FUN_0800f5c0 */

void FUN_0800f5c0(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_0800f5e8(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0800f5e8 : FUN_0800f5e8 */

void FUN_0800f5e8(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xffbf;
  }
  else {
    uVar1 = *param_1 | 0x40;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x0800f5fa : FUN_0800f5fa */

bool FUN_0800f5fa(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800f608 : FUN_0800f608 */

undefined2 FUN_0800f608(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x0800f60c : FUN_0800f60c */

void FUN_0800f60c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x0800f610 : FUN_0800f610 */

void FUN_0800f610(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
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



/* ENTRY 0x0800f6a4 : FUN_0800f6a4 */

undefined4
FUN_0800f6a4(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_2000436e)[uVar1 * 0x14] = 0xaa;
    (&DAT_2000436f)[uVar1 * 0x14] = 0x55;
    (&DAT_20004370)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20004371)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20004372)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20004373)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20004374)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20004375)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20004376)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20004377)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20004378)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20004379)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_2000437a)[uVar1 * 0x14] = (char)param_7;
    (&DAT_2000437b)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_2000437c)[uVar1 * 0x14] = (char)param_8;
    (&DAT_2000437d)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_2000437e)[uVar1 * 0x14] = param_1;
    (&DAT_2000437f)[uVar1 * 0x14] = 0x14;
    (&DAT_20004380)[uVar1 * 0x14] = 0x5a;
    (&DAT_20004381)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000951)[uVar1] = 0x14;
    DAT_2000094f = (char)uVar1 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f820 : FUN_0800f820 */

undefined4 FUN_0800f820(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000436e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f88c : FUN_0800f88c */

undefined4
FUN_0800f88c(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_200043be)[uVar1 * 0x14] = 0xaa;
    (&DAT_200043bf)[uVar1 * 0x14] = 0x55;
    (&DAT_200043c0)[uVar1 * 0x14] = (char)param_3;
    (&DAT_200043c1)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_200043c2)[uVar1 * 0x14] = (char)param_4;
    (&DAT_200043c3)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_200043c4)[uVar1 * 0x14] = (char)param_5;
    (&DAT_200043c5)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_200043c6)[uVar1 * 0x14] = (char)param_6;
    (&DAT_200043c7)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_200043c8)[uVar1 * 0x14] = (char)param_7;
    (&DAT_200043c9)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_200043ca)[uVar1 * 0x14] = (char)param_8;
    (&DAT_200043cb)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_200043cc)[uVar1 * 0x14] = (char)param_9;
    (&DAT_200043cd)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_200043ce)[uVar1 * 0x14] = param_1;
    (&DAT_200043cf)[uVar1 * 0x14] = param_2;
    (&DAT_200043d0)[uVar1 * 0x14] = 0x5a;
    (&DAT_200043d1)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000958)[uVar1] = 0x14;
    DAT_20000956 = (char)uVar1 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fa08 : FUN_0800fa08 */

undefined4 FUN_0800fa08(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_200043be)[uVar2 * 0x14] = 0xaa;
    (&DAT_200043bf)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200043c0)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_200043ce)[uVar2 * 0x14] = param_1;
    (&DAT_200043cf)[uVar2 * 0x14] = param_2;
    (&DAT_200043d0)[uVar2 * 0x14] = 0x5a;
    (&DAT_200043d1)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000958)[uVar2] = 0x14;
    DAT_20000956 = (char)uVar2 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fac0 : FUN_0800fac0 */

undefined4 FUN_0800fac0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000961 & 3;
  if (DAT_20000960 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000445e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000963)[uVar2] = 0x14;
    DAT_20000961 = (char)uVar2 + 1U & 3;
    if (DAT_20000961 == DAT_20000962) {
      DAT_20000960 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fb2c : FUN_0800fb2c */

undefined4 FUN_0800fb2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000968 & 3;
  if (DAT_20000967 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200044ae)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000096a)[uVar2] = 0x14;
    DAT_20000968 = (char)uVar2 + 1U & 3;
    if (DAT_20000968 == DAT_20000969) {
      DAT_20000967 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fb98 : FUN_0800fb98 */

undefined4 FUN_0800fb98(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_200043be)[uVar3 * 0x14] = 0xaa;
    (&DAT_200043bf)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200043c0)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_200043ce)[uVar3 * 0x14] = param_1;
    (&DAT_200043cf)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_080157d4(&DAT_200043c0 + uVar3 * 0x14,0x10);
    (&DAT_200043d0)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_200043d1)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000958)[uVar3] = 0x14;
    DAT_20000956 = (char)uVar3 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fc6c : FUN_0800fc6c */

undefined4
FUN_0800fc6c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (DAT_20000955 == '\0') {
    local_38[0] = 0xaa;
    local_38[1] = 0x55;
    local_38[2] = (char)param_2;
    local_38[3] = (char)((uint)param_2 >> 8);
    local_34 = (char)param_3;
    local_33 = (char)((uint)param_3 >> 8);
    local_32 = (char)param_4;
    local_31 = (char)((uint)param_4 >> 8);
    local_30 = (char)param_5;
    local_2f = (char)((uint)param_5 >> 8);
    local_2e = (char)param_6;
    local_2d = (char)((uint)param_6 >> 8);
    local_2c = (char)param_7;
    local_2b = (char)((uint)param_7 >> 8);
    local_2a = (char)param_8;
    local_29 = (char)((uint)param_8 >> 8);
    local_28 = param_1;
    local_27 = 0x14;
    local_26 = 0x5a;
    local_25 = 0x5a;
    uVar2 = DAT_20000956 & 7;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200043be)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000958)[uVar2] = 0x14;
    DAT_20000956 = (char)uVar2 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fd80 : FUN_0800fd80 */

byte FUN_0800fd80(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200043be)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
    }
    (&DAT_20000958)[uVar3] = (char)param_2;
    DAT_20000956 = (char)uVar3 + 1U & 7;
    bVar1 = DAT_20000956;
    if (DAT_20000956 == DAT_20000957) {
      bVar1 = 1;
      DAT_20000955 = '\x01';
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
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



/* ENTRY 0x0800ffa8 : FUN_0800ffa8 */

void FUN_0800ffa8(void)

{
  FUN_0800b566(&DAT_20000230);
  FUN_0800b566(&DAT_2000023c);
  FUN_0800b566(&DAT_20000248);
  FUN_0800b566(&DAT_20000254);
  FUN_0800b566(&DAT_20000260);
  FUN_0800b566(&DAT_2000026c);
  FUN_08008968(2000);
  FUN_08010100(0xf0);
  DAT_200033f4 = 0;
  DAT_20003350 = 0;
  DAT_20003354 = 0;
  DAT_20003358 = 0;
  DAT_2000335c = 0;
  DAT_20003360 = 0;
  DAT_20003364 = 0;
  return;
}



/* ENTRY 0x08010018 : FUN_08010018 */

void FUN_08010018(void)

{
  FUN_08010020();
  return;
}



/* ENTRY 0x08010020 : FUN_08010020 */

void FUN_08010020(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  uVar1 = DAT_40021000;
  DAT_40021000 = uVar1 | 0x10000;
  do {
    uVar1 = DAT_40021000;
    local_8 = local_8 + 1;
    if ((uVar1 & 0x20000) != 0) break;
  } while (local_8 != 0xffff);
  uVar1 = DAT_40021000;
  if ((uVar1 & 0x20000) != 0) {
    uVar1 = DAT_40022000;
    DAT_40022000 = uVar1 | 0x10;
    uVar1 = DAT_40022000;
    DAT_40022000 = uVar1 & 0xfffffffc;
    uVar1 = DAT_40022000;
    DAT_40022000 = uVar1 | 2;
    uVar2 = DAT_40021004;
    DAT_40021004 = uVar2;
    uVar2 = DAT_40021004;
    DAT_40021004 = uVar2;
    uVar1 = DAT_40021004;
    DAT_40021004 = uVar1 | 0x400;
    uVar1 = DAT_40021004;
    DAT_40021004 = uVar1 & 0xffc0ffff;
    uVar1 = DAT_40021004;
    DAT_40021004 = uVar1 | 0x1d0000;
    uVar1 = DAT_40021000;
    DAT_40021000 = uVar1 | 0x1000000;
    do {
      uVar1 = DAT_40021000;
    } while ((uVar1 & 0x2000000) == 0);
    uVar1 = DAT_40021004;
    DAT_40021004 = uVar1 & 0xfffffffc;
    uVar1 = DAT_40021004;
    DAT_40021004 = uVar1 | 2;
    do {
      uVar1 = DAT_40021004;
    } while ((uVar1 & 0xc) != 8);
  }
  return;
}



/* ENTRY 0x08010100 : FUN_08010100 */

void FUN_08010100(undefined4 param_1)

{
  DAT_20000018 = param_1;
  return;
}



/* ENTRY 0x0801010c : FUN_0801010c */

int FUN_0801010c(int param_1)

{
  int extraout_r2;
  int iVar1;
  int extraout_r3;
  int iVar2;
  
  if (param_1 < 1) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  iVar1 = (iVar2 * param_1 * 100) / 0x9000;
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  iVar1 = FUN_08008c40(param_1,0x9000,param_1,iVar1);
  if (iVar1 < 0xa000) {
    iVar2 = (extraout_r2 * 0x1922) / 0xb4;
    iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x15)) >> 0xb;
  }
  else {
    iVar2 = *(int *)(&DAT_08024e04 + extraout_r3 * 4) * iVar2;
  }
  return iVar2;
}



/* ENTRY 0x08010174 : FUN_08010174 */

int FUN_08010174(int param_1)

{
  if (param_1 < 0x8001) {
    param_1 = param_1 * param_1;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ENTRY 0x08010186 : FUN_08010186 */

void FUN_08010186(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar2 = 0;
  for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
    iVar1 = iVar2 * 2;
    uVar3 = uVar3 * 4 + (param_1 >> 0x1e);
    param_1 = param_1 << 2;
    uVar5 = iVar2 * 4 + 1;
    if (uVar5 <= uVar3) {
      uVar3 = uVar3 - uVar5;
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar1;
  }
  return;
}



/* ENTRY 0x080101b4 : FUN_080101b4 */

void FUN_080101b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  
  sVar9 = 0;
  sVar10 = 0;
  sVar11 = 0;
  iVar3 = param_2 * -12000;
  iVar1 = (iVar3 + param_1 * 0x5130) / 2;
  iVar2 = (iVar3 + param_1 * -0x5130) / 2;
  if (iVar1 < 0) {
    if (iVar2 < 0) {
      DAT_20000378 = 5;
    }
    else if (iVar3 < 1) {
      DAT_20000378 = 4;
    }
    else {
      DAT_20000378 = 3;
    }
  }
  else if (iVar2 < 0) {
    if (iVar3 < 1) {
      DAT_20000378 = 6;
    }
    else {
      DAT_20000378 = 1;
    }
  }
  else {
    DAT_20000378 = 2;
  }
  DAT_20000389 = 0;
  bVar5 = false;
  if (DAT_20000378 < 7) {
    uVar8 = iVar2 >> 0x1f;
    uVar7 = iVar3 >> 0x1f;
    uVar12 = iVar1 >> 0x1f;
    switch(DAT_20000378) {
    case 0:
      goto switchD_08010276_caseD_0;
    case 1:
      iVar1 = ((iVar3 + 12000) - iVar2) / 2;
      uVar13 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      uVar12 = uVar13 & 0xffff;
      sVar6 = (short)uVar13;
      uVar8 = uVar12 + ((int)(iVar2 + (uVar8 >> 0xf)) >> 0x11);
      sVar9 = (short)uVar8;
      sVar10 = sVar9 - (short)((int)(iVar3 + (uVar7 >> 0xf)) >> 0x11);
      if ((3000 - uVar12 & 0xffff) < 0xbc) {
        if ((3000 - uVar12 & 0xffff) * 2 < (uVar12 - (uVar8 & 0xffff) & 0xffff)) {
          sVar11 = sVar6 + -0x57;
        }
        else {
          sVar11 = (short)(uVar12 + 0xbb);
          if (2999 < (uVar12 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034dc;
      DAT_20000374 = DAT_200034e0;
      break;
    case 2:
      iVar3 = ((iVar1 + 12000) - iVar2) / 2;
      uVar13 = ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      uVar7 = uVar13 & 0xffff;
      sVar6 = (short)uVar13;
      uVar13 = uVar7 + ((int)(iVar2 + (uVar8 >> 0xf)) >> 0x11);
      uVar8 = uVar13 & 0xffff;
      sVar9 = (short)uVar13;
      sVar10 = sVar6 - (short)((int)(iVar1 + (uVar12 >> 0xf)) >> 0x11);
      if ((3000 - uVar8 & 0xffff) < 0xbc) {
        if ((3000 - uVar8 & 0xffff) * 2 < (uVar8 - uVar7 & 0xffff)) {
          sVar11 = sVar9 + -0x57;
        }
        else {
          sVar11 = (short)(uVar8 + 0xbb);
          if (2999 < (uVar8 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034d8;
      DAT_20000374 = DAT_200034e0;
      break;
    case 3:
      iVar2 = (param_2 * 12000 + 12000 + iVar1) / 2;
      uVar8 = ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      sVar6 = (short)uVar8;
      uVar8 = (uVar8 & 0xffff) - ((int)(iVar1 + (uVar12 >> 0xf)) >> 0x11);
      uVar12 = uVar8 & 0xffff;
      sVar10 = (short)uVar8;
      uVar8 = uVar12 + ((int)(iVar3 + (uVar7 >> 0xf)) >> 0x11);
      uVar7 = uVar8 & 0xffff;
      sVar9 = (short)uVar8;
      if ((3000 - uVar7 & 0xffff) < 0xbc) {
        if ((3000 - uVar7 & 0xffff) * 2 < (uVar7 - uVar12 & 0xffff)) {
          sVar11 = sVar9 + -0x57;
        }
        else {
          sVar11 = (short)(uVar7 + 0xbb);
          if (2999 < (uVar7 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034d8;
      DAT_20000374 = DAT_200034e0;
      break;
    case 4:
      iVar1 = ((iVar3 + 12000) - iVar2) / 2;
      uVar12 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      sVar6 = (short)uVar12;
      uVar8 = (uVar12 & 0xffff) + ((int)(iVar2 + (uVar8 >> 0xf)) >> 0x11);
      uVar12 = uVar8 & 0xffff;
      sVar9 = (short)uVar8;
      uVar8 = uVar12 - ((int)(iVar3 + (uVar7 >> 0xf)) >> 0x11);
      uVar7 = uVar8 & 0xffff;
      sVar10 = (short)uVar8;
      if ((3000 - uVar7 & 0xffff) < 0xbc) {
        if ((3000 - uVar7 & 0xffff) * 2 < (uVar7 - uVar12 & 0xffff)) {
          sVar11 = sVar10 + -0x57;
        }
        else {
          sVar11 = (short)(uVar7 + 0xbb);
          if (2999 < (uVar7 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034d8;
      DAT_20000374 = DAT_200034dc;
      break;
    case 5:
      iVar3 = ((iVar1 + 12000) - iVar2) / 2;
      uVar13 = ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      uVar7 = uVar13 & 0xffff;
      sVar6 = (short)uVar13;
      sVar9 = sVar6 + (short)((int)(iVar2 + (uVar8 >> 0xf)) >> 0x11);
      uVar8 = uVar7 - ((int)(iVar1 + (uVar12 >> 0xf)) >> 0x11);
      uVar12 = uVar8 & 0xffff;
      sVar10 = (short)uVar8;
      if ((3000 - uVar12 & 0xffff) < 0xbc) {
        if ((3000 - uVar12 & 0xffff) * 2 < (uVar12 - uVar7 & 0xffff)) {
          sVar11 = sVar10 + -0x57;
        }
        else {
          sVar11 = (short)(uVar12 + 0xbb);
          if (2999 < (uVar12 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034d8;
      DAT_20000374 = DAT_200034dc;
      break;
    case 6:
      iVar2 = (param_2 * 12000 + 12000 + iVar1) / 2;
      uVar13 = ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0xf)) >> 0x11) + 0x5dc;
      uVar8 = uVar13 & 0xffff;
      sVar6 = (short)uVar13;
      uVar12 = uVar8 - ((int)(iVar1 + (uVar12 >> 0xf)) >> 0x11);
      sVar10 = (short)uVar12;
      sVar9 = sVar10 + (short)((int)(iVar3 + (uVar7 >> 0xf)) >> 0x11);
      if ((3000 - uVar8 & 0xffff) < 0xbc) {
        if ((3000 - uVar8 & 0xffff) * 2 < (uVar8 - (uVar12 & 0xffff) & 0xffff)) {
          sVar11 = sVar6 + -0x57;
        }
        else {
          sVar11 = (short)(uVar8 + 0xbb);
          if (2999 < (uVar8 + 0xbb & 0xffff)) {
            DAT_20000389 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000370 = DAT_200034dc;
      DAT_20000374 = DAT_200034e0;
    }
  }
  else {
switchD_08010276_caseD_0:
    sVar6 = 0;
  }
  if (bVar5) {
    uVar4 = DAT_40012c20;
    DAT_40012c20 = uVar4 | 0x2000;
  }
  else {
    uVar4 = DAT_40012c20;
    DAT_40012c20 = uVar4 & 0xdfff;
  }
  DAT_40012c40 = sVar11;
  DAT_40012c34 = sVar6;
  DAT_40012c38 = sVar10;
  DAT_40012c3c = sVar9;
  return;
}



/* ENTRY 0x08010800 : FUN_08010800 */

void FUN_08010800(void)

{
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined1 local_8;
  
  FUN_0800eef8(0xc,1);
  FUN_0800bcde(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_0800bb9c(&DAT_40010800,&local_38);
  FUN_0800bcde(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_0800bb9c(&DAT_40010c00,&local_38);
  FUN_0800bcd6(&DAT_40010c00,0x2000);
  FUN_0800bcd6(&DAT_40010c00,0x8000);
  FUN_0800bcd6(&DAT_40010c00,0x4000);
  FUN_0800bc4a(&DAT_40010800,0x700);
  FUN_0800bc4a(&DAT_40010c00,0xe000);
  FUN_0800eef8(0x800);
  FUN_08010d48(&DAT_40012c00);
  FUN_080114b8(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_0801141c(&DAT_40012c00,&local_10);
  FUN_0801136c(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0801114e(&DAT_40012c00,&local_20);
  FUN_080111de(&DAT_40012c00,&local_20);
  FUN_0801126e(&DAT_40012c00,&local_20);
  FUN_0801136c(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_080112fa(&DAT_40012c00,&local_20);
  FUN_080111d2(&DAT_40012c00,8);
  FUN_08011260(&DAT_40012c00,8);
  FUN_080112ee(&DAT_40012c00,8);
  FUN_0801135e(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_08010cbe(&DAT_40012c00,&local_30);
  FUN_080113f8(&DAT_40012c00,0x20);
  FUN_08010d02(&DAT_40012c00,0x80);
  FUN_08011134(&DAT_40012c00,0x80,1);
  FUN_08010f58(&DAT_40012c00,1);
  FUN_08010cfc(&DAT_40012c00,1);
  FUN_08011134(&DAT_40012c00,1,0);
  FUN_08011134(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_0800db7c(&local_34);
  return;
}



/* ENTRY 0x080109f4 : FUN_080109f4 */

void FUN_080109f4(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003fe4 < 0xb) {
      DAT_20003fe4 = 0;
      DAT_200030de = DAT_200030de & 0xffef;
    }
    else {
      DAT_20003fe4 = DAT_20003fe4 - 10;
    }
  }
  else if (DAT_20003fe4 < 0xfa) {
    DAT_20003fe4 = DAT_20003fe4 + 1;
    DAT_200030de = DAT_200030de | 0x10;
  }
  if (10 < DAT_20003fe4) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_08020ff0();
    }
  }
  return;
}



/* ENTRY 0x08010a74 : FUN_08010a74 */

void FUN_08010a74(void)

{
  uint uVar1;
  
  uVar1 = DAT_40021000;
  DAT_40021000 = uVar1 | 1;
  uVar1 = DAT_40021004;
  DAT_40021004 = uVar1 & 0xf8ff0000;
  uVar1 = DAT_40021000;
  DAT_40021000 = uVar1 & 0xfef6ffff;
  uVar1 = DAT_40021000;
  DAT_40021000 = uVar1 & 0xfffbffff;
  uVar1 = DAT_40021004;
  DAT_40021004 = uVar1 & 0xff80ffff;
  DAT_40021008 = 0x9f0000;
  FUN_08010018();
  DAT_e000ed08 = 0x8000000;
  return;
}



/* ENTRY 0x08010ad4 : FUN_08010ad4 */

void FUN_08010ad4(undefined *param_1,ushort param_2,short param_3,short param_4)

{
  undefined *puVar1;
  bool bVar2;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
  bVar2 = param_1 == &DAT_40012c00;
  puVar1 = (undefined *)0x0;
  if (!bVar2) {
    puVar1 = param_1 + -0x40013400;
    bVar2 = puVar1 == (undefined *)0x0;
  }
  if (!bVar2) {
    if (param_1 != (undefined *)0x40000000) {
      puVar1 = param_1 + -0x40000000;
    }
    if ((param_1 != (undefined *)0x40000000 && puVar1 != (undefined *)0x400) &&
       (param_1 != &DAT_40000800 && param_1 != &DAT_40000c00)) {
      param_2 = param_2 | *(ushort *)(param_1 + 0x20) & 0xff5f;
      goto LAB_08010b40;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_08010b40:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08010b4c : FUN_08010b4c */

void FUN_08010b4c(void)

{
  int iVar1;
  
  iVar1 = FUN_08010f60(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08010cfc(&DAT_40012c00,0x80);
    DAT_2000032e = 1;
    FUN_08011134(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x08010b84 : FUN_08010b84 */

void FUN_08010b84(void)

{
  int iVar1;
  
  iVar1 = FUN_08010f60(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08010cfc(&DAT_40012c00,1);
    FUN_0800bb90();
    FUN_0800c54c();
  }
  return;
}



/* ENTRY 0x08010ba8 : FUN_08010ba8 */

void FUN_08010ba8(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40000c10;
  if ((uVar1 & 1) != 0) {
    FUN_0800dd84();
    DAT_40000c10 = 0xfffe;
    if (DAT_20000068 != 0) {
      FUN_0800df94(DAT_20000068,1);
    }
    DAT_20000082 = DAT_20000082 + 1;
    if (0x27 < DAT_20000082) {
      DAT_20000082 = 0;
      if (DAT_20000070 != 0) {
        FUN_0800df94(DAT_20000070,1);
      }
      if (DAT_2000007c != 0) {
        FUN_0800df94(DAT_2000007c,1);
      }
    }
    DAT_20000086 = DAT_20000086 + 1;
    if ((0x13 < DAT_20000086) && (DAT_20000086 = 0, DAT_2000006c != 0)) {
      FUN_0800df94(DAT_2000006c,1);
    }
    DAT_20000088 = DAT_20000088 + 1;
    if ((3 < DAT_20000088) && (DAT_20000088 = 0, DAT_20000074 != 0)) {
      FUN_0800df94(DAT_20000074,1);
    }
    DAT_20000084 = DAT_20000084 + 1;
    if (99 < DAT_20000084) {
      DAT_20000084 = 0;
      if (DAT_20000078 != 0) {
        FUN_0800df94(DAT_20000078,1);
      }
    }
    FUN_0800dda8();
  }
  return;
}



/* ENTRY 0x08010cac : FUN_08010cac */

void FUN_08010cac(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xff7f;
  }
  else {
    uVar1 = *param_1 | 0x80;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x08010cbe : FUN_08010cbe */

void FUN_08010cbe(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x08010ce2 : FUN_08010ce2 */

void FUN_08010ce2(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08010cfc : FUN_08010cfc */

void FUN_08010cfc(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010d02 : FUN_08010d02 */

void FUN_08010d02(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010d08 : FUN_08010d08 */

void FUN_08010d08(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xfffe;
  }
  else {
    uVar1 = *param_1 | 1;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x08010d1a : FUN_08010d1a */

void FUN_08010d1a(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x44) & 0x7fff;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x44) | 0x8000;
  }
  *(ushort *)(param_1 + 0x44) = uVar1;
  return;
}



/* ENTRY 0x08010d30 : FUN_08010d30 */

void FUN_08010d30(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    param_2 = param_2 | *(ushort *)(param_1 + 0xc);
  }
  *(ushort *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x08010d40 : FUN_08010d40 */

void FUN_08010d40(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x08010d48 : FUN_08010d48 */

void FUN_08010d48(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_0800ef10(0x800);
    FUN_0800ef10(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_0800eee0(1);
    FUN_0800eee0(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_0800eee0(2,1);
    FUN_0800eee0(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_0800eee0(4,1);
    FUN_0800eee0(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_0800eee0(8,1);
    FUN_0800eee0(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_0800eee0(0x10,1);
    FUN_0800eee0(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_0800eee0(0x20,1);
    FUN_0800eee0(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_0800ef10(0x2000);
    FUN_0800ef10(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_0800ef10(0x80000);
    FUN_0800ef10(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_0800ef10(0x100000);
    FUN_0800ef10(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_0800ef10(0x200000);
    FUN_0800ef10(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_0800eee0(0x40,1);
    FUN_0800eee0(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_0800eee0(0x80,1);
    FUN_0800eee0(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_0800eee0(0x100);
    FUN_0800eee0(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_0800ef10(0x10000);
    FUN_0800ef10(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_0800ef10(0x20000);
    FUN_0800ef10(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_0800ef10(0x40000);
  FUN_0800ef10(0x40000,0);
  return;
}



/* ENTRY 0x08010f58 : FUN_08010f58 */

void FUN_08010f58(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08010f5c : FUN_08010f5c */

undefined2 FUN_08010f5c(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08010f60 : FUN_08010f60 */

bool FUN_08010f60(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08010f78 : FUN_08010f78 */

void FUN_08010f78(undefined *param_1,short *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  
  sVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = (uint)(ushort)param_2[4];
  if (sVar3 == 0) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
    if (((param_1 == &DAT_40012c00 || param_1 == &DAT_40013400) ||
        (param_1 == (undefined *)0x40000000 || param_1 == &DAT_40000400)) ||
       (param_1 == &DAT_40000800 || param_1 == &DAT_40000c00)) {
      uVar1 = 0xfffd;
    }
    else {
      uVar1 = 0xfff5;
    }
    *(ushort *)(param_1 + 0x18) =
         uVar2 | (ushort)((uVar5 & 0xfff) << 4) | *(ushort *)(param_1 + 0x18) & 0xff0c;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & uVar1 | uVar4 | 1;
    uVar4 = param_2[3];
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfff3;
    *(ushort *)(param_1 + 0x18) = uVar4 | *(ushort *)(param_1 + 0x18);
    return;
  }
  if (sVar3 != 4) {
    if (sVar3 != 8) {
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xefff;
      if (((param_1 == &DAT_40012c00 || param_1 == &DAT_40013400) ||
          (param_1 == (undefined *)0x40000000 || param_1 == &DAT_40000400)) ||
         (param_1 == &DAT_40000800 || param_1 == &DAT_40000c00)) {
        uVar4 = *(ushort *)(param_1 + 0x20) & 0xdfff | (ushort)((uVar4 & 0xf) << 0xc);
      }
      else {
        uVar4 = *(ushort *)(param_1 + 0x20) & 0x7dff | uVar4;
      }
      *(ushort *)(param_1 + 0x1c) =
           *(ushort *)(param_1 + 0x1c) & 0xcff | uVar2 << 8 | (ushort)((uVar5 & 0xf) << 0xc);
      *(ushort *)(param_1 + 0x20) = uVar4 | 0x1000;
      sVar3 = param_2[3];
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf3ff;
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | sVar3 << 8;
      return;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfeff;
    if (((param_1 == &DAT_40012c00 || param_1 == &DAT_40013400) ||
        (param_1 == (undefined *)0x40000000 || param_1 == &DAT_40000400)) ||
       (param_1 == &DAT_40000800 || param_1 == &DAT_40000c00)) {
      uVar4 = *(ushort *)(param_1 + 0x20) & 0xfdff | (ushort)((uVar4 & 0xff) << 8);
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0x20) & 0xf5ff | uVar4;
    }
    *(ushort *)(param_1 + 0x1c) =
         uVar2 | (ushort)((uVar5 & 0xfff) << 4) | *(ushort *)(param_1 + 0x1c) & 0xff0c;
    *(ushort *)(param_1 + 0x20) = uVar4 | 0x100;
    uVar4 = param_2[3];
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfff3;
    *(ushort *)(param_1 + 0x1c) = uVar4 | *(ushort *)(param_1 + 0x1c);
    return;
  }
  FUN_08010ad4(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x08011124 : FUN_08011124 */

void FUN_08011124(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x08011134 : FUN_08011134 */

void FUN_08011134(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    param_2 = param_2 | *(ushort *)(param_1 + 0xc);
  }
  *(ushort *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x08011144 : FUN_08011144 */

void FUN_08011144(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x0801114e : FUN_0801114e */

void FUN_0801114e(undefined *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  uVar3 = *(ushort *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = *(ushort *)(param_1 + 0x20) & 0xfffd | param_2[4] | param_2[1];
  puVar4 = (undefined *)0x0;
  if (param_1 != &DAT_40012c00) {
    puVar4 = param_1 + -0x40000000;
  }
  if (param_1 != &DAT_40012c00 && puVar4 != (undefined *)0x13400) {
    bVar5 = param_1 == &UNK_40014000 || param_1 == &UNK_40014400;
    if (param_1 != &UNK_40014000 && param_1 != &UNK_40014400) {
      bVar5 = param_1 == &UNK_40014800;
    }
    if (!bVar5) goto LAB_080111c2;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_080111c2:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x080111d2 : FUN_080111d2 */

void FUN_080111d2(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x080111de : FUN_080111de */

void FUN_080111de(undefined *param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
  uVar3 = *(ushort *)(param_1 + 4);
  sVar1 = *param_2;
  uVar2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2[4] << 4 | param_2[1] << 4;
  puVar4 = (undefined *)0x0;
  if (param_1 != &DAT_40012c00) {
    puVar4 = param_1 + -0x40000000;
  }
  if (param_1 == &DAT_40012c00 || puVar4 == (undefined *)0x13400) {
    uVar2 = (uVar2 & 0xff7f | param_2[5] << 4) & 0xffbf | param_2[2] << 4;
    uVar3 = uVar3 & 0xf3ff | param_2[6] << 2 | param_2[7] << 2;
  }
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0x8cff | sVar1 << 8;
  *(short *)(param_1 + 0x38) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x08011260 : FUN_08011260 */

void FUN_08011260(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x0801126e : FUN_0801126e */

void FUN_0801126e(undefined *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfeff;
  uVar3 = *(ushort *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = *(ushort *)(param_1 + 0x20) & 0xfdff | param_2[4] << 8 | param_2[1] << 8;
  puVar4 = (undefined *)0x0;
  if (param_1 != &DAT_40012c00) {
    puVar4 = param_1 + -0x40000000;
  }
  if (param_1 == &DAT_40012c00 || puVar4 == (undefined *)0x13400) {
    uVar2 = (uVar2 & 0xf7ff | param_2[5] << 8) & 0xfbff | param_2[2] << 8;
    uVar3 = uVar3 & 0xcfff | param_2[6] << 4 | param_2[7] << 4;
  }
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x1c) = uVar1 | *(ushort *)(param_1 + 0x1c) & 0xff8c;
  *(ushort *)(param_1 + 0x3c) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x080112ee : FUN_080112ee */

void FUN_080112ee(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x080112fa : FUN_080112fa */

void FUN_080112fa(undefined *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xefff;
  uVar4 = *(ushort *)(param_1 + 4);
  sVar1 = *param_2;
  sVar2 = param_2[4];
  sVar3 = param_2[1];
  puVar5 = (undefined *)0x0;
  if (param_1 != &DAT_40012c00) {
    puVar5 = param_1 + -0x40000000;
  }
  if (param_1 == &DAT_40012c00 || puVar5 == (undefined *)0x13400) {
    uVar4 = uVar4 & 0xbfff | param_2[6] << 6;
  }
  *(ushort *)(param_1 + 4) = uVar4;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x8cff | sVar1 << 8;
  *(short *)(param_1 + 0x40) = param_2[3];
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xdfff | sVar2 << 0xc | sVar3 << 0xc;
  return;
}



/* ENTRY 0x0801135e : FUN_0801135e */

void FUN_0801135e(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x0801136c : FUN_0801136c */

void FUN_0801136c(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* ENTRY 0x08011380 : FUN_08011380 */

void FUN_08011380(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x08011386 : FUN_08011386 */

void FUN_08011386(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 4) & 0xff7f;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 4) | 0x80;
  }
  *(ushort *)(param_1 + 4) = uVar1;
  return;
}



/* ENTRY 0x08011398 : FUN_08011398 */

void FUN_08011398(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x080113a4 : FUN_080113a4 */

void FUN_080113a4(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  if (param_2 != 0 && param_2 != 8) {
    puVar1 = (uint *)(param_1 + 0x18 + ((param_2 - 4 & 0xffff) >> 1));
    *puVar1 = *puVar1 & 0xffff8fff;
    *puVar1 = *puVar1 | (param_3 & 0xff) << 8;
    return;
  }
  puVar1 = (uint *)(param_1 + 0x18 + (param_2 >> 1));
  *puVar1 = *puVar1 & 0xffffff8f;
  *puVar1 = *puVar1 | param_3;
  return;
}



/* ENTRY 0x080113f8 : FUN_080113f8 */

void FUN_080113f8(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x08011408 : FUN_08011408 */

void FUN_08011408(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x08011418 : FUN_08011418 */

void FUN_08011418(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x0801141c : FUN_0801141c */

void FUN_0801141c(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_08011452:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08011452;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_08011452;
  }
  puVar2 = (ushort *)0x0;
  if (param_1 != (ushort *)&UNK_40001000) {
    puVar2 = param_1 + -0x20000000;
  }
  if (param_1 != (ushort *)&UNK_40001000 && puVar2 != (ushort *)0x1400) {
    uVar1 = uVar1 & 0xfcff | param_2[3];
  }
  *param_1 = uVar1;
  param_1[0x16] = param_2[2];
  param_1[0x14] = *param_2;
  if (param_1 != (ushort *)&DAT_40012c00 && param_1 != (ushort *)&DAT_40013400) {
    bVar3 = param_1 == (ushort *)&UNK_40014000 || param_1 == (ushort *)&UNK_40014400;
    if (param_1 != (ushort *)&UNK_40014000 && param_1 != (ushort *)&UNK_40014400) {
      bVar3 = param_1 == (ushort *)&UNK_40014800;
    }
    if (!bVar3) goto LAB_080114a8;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_080114a8:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x080114b8 : FUN_080114b8 */

void FUN_080114b8(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x080114ca : FUN_080114ca */

void FUN_080114ca(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xfffd;
  }
  else {
    uVar1 = *param_1 | 2;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x080114dc : FUN_080114dc */

void FUN_080114dc(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 & 0xfffb;
  }
  else {
    uVar1 = *param_1 | 4;
  }
  *param_1 = uVar1;
  return;
}



/* ENTRY 0x080114f0 : FUN_080114f0 */

void FUN_080114f0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(0x30,1);
  local_8 = 0x10031000;
  FUN_0800bb9c(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_0800bb9c(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_0800bb9c(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x08011550 : FUN_08011550 */

void FUN_08011550(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0800bcd6(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_0800bcd6(&DAT_40011000,0x1000);
    }
    else {
      FUN_0800bcda(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_0800bcda(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x08011598 : FUN_08011598 */

void FUN_08011598(int param_1)

{
  uint uVar1;
  
  FUN_08015798(0x8f);
  FUN_08015798(0x40);
  FUN_0800bcd6(&DAT_40011000,0x10);
  FUN_08011550(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_08011550(*(undefined1 *)(param_1 + uVar1));
    FUN_08011550((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_0800bcda(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x080115e0 : FUN_080115e0 */

void FUN_080115e0(void)

{
  FUN_0800ed44(4);
  return;
}



/* ENTRY 0x080115ea : FUN_080115ea */

uint FUN_080115ea(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    if ((param_1 < 0x41) || (0x46 < param_1)) {
      if ((param_1 < 0x61) || (0x66 < param_1)) {
        uVar1 = 0;
      }
      else {
        uVar1 = param_1 - 0x57U & 0xff;
      }
    }
    else {
      uVar1 = param_1 - 0x37U & 0xff;
    }
  }
  else {
    uVar1 = param_1 - 0x30U & 0xff;
  }
  uVar1 = (uVar1 & 0xf) * 0x10;
  if ((param_2 < 0x30) || (0x39 < param_2)) {
    if ((param_2 < 0x41) || (0x46 < param_2)) {
      if ((0x60 < param_2) && (param_2 < 0x67)) {
        uVar1 = param_2 + -0x57 + uVar1 & 0xff;
      }
    }
    else {
      uVar1 = param_2 + -0x37 + uVar1 & 0xff;
    }
  }
  else {
    uVar1 = param_2 + -0x30 + uVar1 & 0xff;
  }
  return uVar1;
}



/* ENTRY 0x0801165c : FUN_0801165c */

void FUN_0801165c(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08011958(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800aafc(&DAT_40020430);
    FUN_0800a9e4(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_0800a9e4(&DAT_40020430,1);
    FUN_08011928(&DAT_40004c00,0x424);
    parse_bms_indexed(1,&DAT_20003ce0,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_08011958(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004c00,0x727);
    FUN_080119a4(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_08011958(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_08011958(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_08011958(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_0800dda8(uVar1);
  return;
}



/* ENTRY 0x08011748 : FUN_08011748 */

void FUN_08011748(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_08011958(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_0800aafc(&DAT_40020058);
    uVar4 = 0x1f0 - iVar3;
    FUN_0800a9e4(&DAT_40020058,0);
    DAT_4002005c = 0x1f0;
    FUN_0800a9e4(&DAT_40020058,1);
    FUN_08011928(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x1f1)) {
      FUN_08021890(&DAT_2000378c,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_08011958(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_08011928(&DAT_40013800,0x727);
    FUN_080119a4(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_08011958(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_08011928(&DAT_40013800,0x525);
  }
  iVar3 = FUN_08011958(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_08011928(&DAT_40013800,0x260);
  }
  iVar3 = FUN_08011958(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_08011928(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_0800dda8(uVar1);
  return;
}



/* ENTRY 0x0801183c : FUN_0801183c */

void FUN_0801183c(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08011958(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800aafc(&DAT_40020030);
    FUN_0800a9e4(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_0800a9e4(&DAT_40020030,1);
    FUN_08011928(&DAT_40004800,0x424);
    parse_bms_indexed(0,&DAT_200039e0,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_08011958(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004800,0x727);
    FUN_080119a4(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_08011958(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004800,0x525);
  }
  iVar4 = FUN_08011958(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004800,0x260);
  }
  iVar4 = FUN_08011958(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_08011928(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_0800dda8(uVar1);
  return;
}



/* ENTRY 0x08011928 : FUN_08011928 */

void FUN_08011928(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x08011936 : FUN_08011936 */

void FUN_08011936(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0xc) & 0xdfff;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xc) | 0x2000;
  }
  *(ushort *)(param_1 + 0xc) = uVar1;
  return;
}



/* ENTRY 0x08011948 : FUN_08011948 */

void FUN_08011948(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(ushort *)(param_1 + 0x14) & ~param_2;
  }
  else {
    param_2 = param_2 | *(ushort *)(param_1 + 0x14);
  }
  *(ushort *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08011958 : FUN_08011958 */

bool FUN_08011958(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xff) >> 5;
  if (uVar2 == 1) {
    uVar1 = param_1[6];
  }
  else if (uVar2 == 2) {
    uVar1 = param_1[8];
  }
  else {
    uVar1 = param_1[10];
  }
  return ((uint)uVar1 & 1 << (param_2 & 0x1f)) != 0 &&
         ((uint)*param_1 & 1 << (param_2 >> 8 & 0xff)) != 0;
}



/* ENTRY 0x080119a4 : FUN_080119a4 */

void FUN_080119a4(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0xff) >> 5;
  uVar2 = 1 << (param_2 & 0x1f);
  if (uVar3 == 1) {
    puVar1 = (uint *)(param_1 + 0xc);
  }
  else if (uVar3 == 2) {
    puVar1 = (uint *)(param_1 + 0x10);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x14);
  }
  if (param_3 == 0) {
    uVar2 = *puVar1 & ~uVar2;
  }
  else {
    uVar2 = uVar2 | *puVar1;
  }
  *puVar1 = uVar2;
  return;
}



/* ENTRY 0x080119d4 : FUN_080119d4 */

void FUN_080119d4(undefined2 *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  
  param_1[8] = param_1[8] & 0xcfff | *(ushort *)((int)param_2 + 6);
  param_1[6] = param_1[6] & 0xe9f3 | *(ushort *)((int)param_2 + 10) |
               *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2);
  param_1[10] = param_1[10] & 0xfcff | *(ushort *)(param_2 + 3);
  FUN_0800ef34(auStack_20);
  if (param_1 != &DAT_40013800) {
    local_14 = local_18;
  }
  if ((param_1[6] & 0x8000) == 0) {
    uVar4 = *param_2 << 2;
  }
  else {
    uVar4 = *param_2 << 1;
  }
  uVar4 = (uint)(local_14 * 0x19) / uVar4;
  uVar3 = uVar4 % 100;
  bVar5 = (param_1[6] & 0x8000) != 0;
  if (bVar5) {
    iVar1 = uVar3 * 8;
  }
  else {
    iVar1 = uVar3 * 0x10;
  }
  uVar2 = (ushort)((iVar1 + 0x32U) / 100);
  if (bVar5) {
    uVar2 = uVar2 & 7;
  }
  else {
    uVar2 = uVar2 & 0xf;
  }
  param_1[4] = uVar2 | (ushort)(uVar4 / 100 << 4);
  return;
}



/* ENTRY 0x08011a88 : FUN_08011a88 */

void FUN_08011a88(undefined2 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  
  param_1[8] = param_1[8] & 0xcfff | *(ushort *)((int)param_2 + 6);
  param_1[6] = param_1[6] & 0xe9f3 |
               *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2) | *(ushort *)((int)param_2 + 10);
  param_1[10] = param_1[10] & 0xfcff | *(ushort *)(param_2 + 3);
  FUN_0800efe4(auStack_34);
  if (param_1 == &DAT_40013800) {
    local_2c = local_28;
  }
  if ((param_1[6] & 0x8000) == 0) {
    uVar2 = (uint)(local_2c * 0x19) / (uint)(*param_2 << 2);
  }
  else {
    uVar2 = (uint)(local_2c * 0x19) / (uint)(*param_2 << 1);
  }
  if ((param_1[6] & 0x8000) == 0) {
    uVar1 = (ushort)(((uVar2 % 100) * 0x10 + 0x32) / 100) & 0xf;
  }
  else {
    uVar1 = (ushort)(((uVar2 % 100) * 8 + 0x32) / 100) & 7;
  }
  param_1[4] = (ushort)(uVar2 / 100 << 4) | uVar1;
  return;
}



/* ENTRY 0x08011b60 : FUN_08011b60 */

void FUN_08011b60(undefined4 param_1)

{
  uint uVar1;
  undefined2 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  
  uVar1 = DAT_40021018;
  DAT_40021018 = uVar1 | 0x4009;
  FUN_0800bc5c(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_0800bb9c(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_0800bb9c(&DAT_40010c00,&local_30);
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_22 = 0xc;
  local_34 = 0x25;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  local_2c = param_1;
  FUN_0800db7c(&local_34);
  FUN_080119a4(&DAT_40013800,0x360,1);
  FUN_080119a4(&DAT_40013800,0x424,1);
  FUN_08011948(&DAT_40013800,0x80,1);
  FUN_08011948(&DAT_40013800,0x40,1);
  FUN_0800eeb0(1);
  FUN_0800a9f8(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_2000397c;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_40020044,&local_60);
  FUN_0800ab24(&DAT_40020044,2,1);
  FUN_0800a9e4(&DAT_40020044,0);
  FUN_0800a9f8(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_2000378c;
  local_58 = 0;
  local_54 = 0x1f0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_40020058,&local_60);
  FUN_0800a9e4(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_0800db7c(&local_34);
  FUN_08011a88(&DAT_40013800,&local_2c);
  FUN_08011936(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08011d04 : FUN_08011d04 */

void FUN_08011d04(undefined4 param_1)

{
  uint uVar1;
  undefined2 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  
  uVar1 = DAT_40021018;
  DAT_40021018 = uVar1 | 9;
  uVar1 = DAT_4002101c;
  DAT_4002101c = uVar1 | 0x40000;
  local_30 = 0x400;
  local_2d = 0x18;
  local_2e = 3;
  FUN_0800bb9c(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800bb9c(&DAT_40010c00,&local_30);
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_22 = 0xc;
  local_34 = 0x27;
  local_33 = 1;
  local_32 = 0;
  local_31 = 1;
  local_2c = param_1;
  FUN_0800db7c(&local_34);
  FUN_080119a4(&DAT_40004800,0x360,1);
  FUN_080119a4(&DAT_40004800,0x424,1);
  FUN_08011948(&DAT_40004800,0x80,1);
  FUN_08011948(&DAT_40004800,0x40,1);
  FUN_0800eeb0(1);
  FUN_0800a9f8(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003ae0;
  local_58 = 0x10;
  local_54 = 0x200;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_4002001c,&local_60);
  FUN_0800ab24(&DAT_4002001c,2,1);
  FUN_0800a9e4(&DAT_4002001c,0);
  FUN_0800a9f8(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200039e0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_40020030,&local_60);
  FUN_0800a9e4(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800db7c(&local_34);
  FUN_080119d4(&DAT_40004800,&local_2c);
  FUN_08011936(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08011ea4 : FUN_08011ea4 */

void FUN_08011ea4(undefined4 param_1)

{
  uint uVar1;
  undefined2 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  
  uVar1 = DAT_40021018;
  DAT_40021018 = uVar1 | 0x11;
  uVar1 = DAT_4002101c;
  DAT_4002101c = uVar1 | 0x80000;
  local_30 = 0x400;
  local_2d = 0x18;
  local_2e = 3;
  FUN_0800bb9c(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800bb9c(&DAT_40011000,&local_30);
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_22 = 0xc;
  local_34 = 0x34;
  local_33 = 1;
  local_32 = 0;
  local_31 = 1;
  local_2c = param_1;
  FUN_0800db7c(&local_34);
  FUN_080119a4(&DAT_40004c00,0x360,1);
  FUN_080119a4(&DAT_40004c00,0x424,1);
  FUN_08011948(&DAT_40004c00,0x80,1);
  FUN_08011948(&DAT_40004c00,0x40,1);
  FUN_0800eeb0(2,1);
  FUN_0800a9f8(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003de0;
  local_58 = 0x10;
  local_54 = 0x200;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_40020458,&local_60);
  FUN_0800ab24(&DAT_40020458,2,1);
  FUN_0800a9e4(&DAT_40020458,0);
  FUN_0800a9f8(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003ce0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800ab34(&DAT_40020430,&local_60);
  FUN_0800a9e4(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800db7c(&local_34);
  FUN_080119d4(&DAT_40004c00,&local_2c);
  FUN_08011936(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08012044 : FUN_08012044 */

void FUN_08012044(char *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  short local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  bVar10 = param_2 == 0x14;
  do {
    local_10 = param_1;
    local_c = param_2;
    if (!bVar10) {
      local_14 = 0;
      if ((0x14 < param_2) &&
         (((param_1[0x10] == 'z' || (param_1[0x10] == '\x1d')) && (param_1[0x11] == '1')))) {
        local_14 = 1;
      }
      if (local_14 == 0) {
        local_18 = 0;
        while( true ) {
          if (param_2 <= (int)local_18) {
            return;
          }
          if (0x13 < local_18) break;
          (&DAT_200044fe)[local_18] = param_1[local_18];
          local_18 = local_18 + 1 & 0xff;
        }
        return;
      }
      goto LAB_08012210;
    }
    bVar10 = *param_1 == -0x56;
  } while ((!bVar10) || (bVar10 = param_1[1] == 'U', !bVar10));
  if (DAT_20000981 == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_2000094d = 1;
      FUN_08023ae8();
      FUN_08023230();
      FUN_0800f6a4(0x46,DAT_20000981,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_08023ae8(1);
        FUN_0800f6a4(0x46,DAT_20000981,0,0,0,0,0,0);
        return;
      }
      return;
    }
    local_14 = 1;
    FUN_08023ae8();
    for (local_18 = 0; (int)local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_2000322a)[local_18] != local_10[local_18 + 2]) {
        local_14 = 0;
        break;
      }
    }
    if (local_14 == 0) {
      local_14 = 1;
      for (local_18 = 0; (int)local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_200031fa)[local_18] != local_10[local_18 + 2]) {
          local_14 = 0;
          break;
        }
      }
      for (local_18 = 0xe; (int)local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_200031fa)[local_18] != local_10[local_18 + 3]) {
          local_14 = 0;
          break;
        }
      }
    }
    if (((local_14 == 0) && (local_10[2] == '6')) &&
       ((local_10[3] == '3' && ((local_10[4] == '9' && (local_10[5] == '0')))))) {
      local_14 = 1;
    }
    if (local_14 == 1) {
      DAT_20000981 = '\0';
    }
    FUN_0800f6a4(0x46,DAT_20000981,0,0,0,0,0,0);
    return;
  }
LAB_08012210:
  uVar8 = (uint)(byte)param_1[0x10];
  if (uVar8 == 0x7a) {
    if (((DAT_20003185 == '\x01') || (param_1[0x11] != '\x10')) &&
       (iVar9 = FUN_0801fa30(), iVar9 == 1)) {
      FUN_080164bc(local_10,local_c);
      return;
    }
    FUN_08008582(&local_24,0x14);
    local_24 = 0x155aa;
    local_20 = (uint)local_20._2_2_ << 0x10;
    local_18 = (uint)(ushort)local_18;
    local_14 = CONCAT22(local_14._2_2_,0xee7a);
    uVar7 = FUN_080157d4((int)&local_24 + 2,0x10);
    local_14 = CONCAT13((char)uVar7,CONCAT12((char)((ushort)uVar7 >> 8),(undefined2)local_14));
    FUN_0800f820(&local_24);
    FUN_08023ae8(3);
    return;
  }
  if (uVar8 < 0x7b) {
    uVar8 = uVar8 - 0x3f;
    bVar10 = 0x3a < uVar8;
switchD_080122ae_default:
    if (bVar10) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x08012226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801222a + (uint)*(ushort *)(&DAT_0801222a + uVar8 * 2) * 2))();
    return;
  }
  if (uVar8 == 0x93) {
    FUN_08023ae8(1);
    if (DAT_2000317a == '\0') {
      local_28 = DAT_2000400c;
      uVar2 = DAT_2000400a;
      uVar3 = DAT_20004008;
      uVar4 = DAT_20004006;
      uVar5 = DAT_20004004;
      uVar6 = DAT_20004002;
    }
    else {
      local_28 = DAT_200031ce;
      uVar2 = DAT_200031cc;
      uVar3 = DAT_200031ca;
      uVar4 = DAT_200031c8;
      uVar5 = DAT_200031c6;
      uVar6 = DAT_200031c4;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0800f6a4(0xad,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    return;
  }
  if (0x93 < uVar8) {
    if (uVar8 == 0x9b) {
      FUN_08023ae8(1);
      FUN_08023230();
      DAT_2000094d = 1;
      return;
    }
    if (0x9b < uVar8) {
      if (uVar8 != 0xe4) {
        if (uVar8 < 0xe5) {
          if ((uVar8 == 0xe1) || (uVar8 == 0xe2)) {
            FUN_080186a0(param_1);
            return;
          }
          bVar10 = uVar8 == 0xe3;
        }
        else {
          if ((uVar8 == 0xe5) || (uVar8 == 0xe6)) {
            FUN_080197da(param_1);
            return;
          }
          bVar10 = false;
          if (uVar8 == 0xf9) {
            FUN_0801b2f0(param_1);
            return;
          }
        }
        if (!bVar10) {
          return;
        }
      }
      FUN_08017550(param_1);
      return;
    }
    uVar8 = uVar8 - 0x94;
    bVar10 = true;
    switch(uVar8) {
    case 0:
      FUN_08023ae8(1);
      if (DAT_2000317a == '\0') {
        local_28 = DAT_20004018;
        uVar2 = DAT_20004016;
        uVar3 = DAT_20004014;
        uVar4 = DAT_20004012;
        uVar5 = DAT_20004010;
        uVar6 = DAT_2000400e;
      }
      else {
        local_28 = DAT_200031da;
        uVar2 = DAT_200031d8;
        uVar3 = DAT_200031d6;
        uVar4 = DAT_200031d4;
        uVar5 = DAT_200031d2;
        uVar6 = DAT_200031d0;
      }
      local_14 = (uint)uVar6;
      local_18 = (uint)uVar5;
      local_1c = (uint)uVar4;
      local_20 = (uint)uVar3;
      local_24 = (uint)uVar2;
      FUN_0800f6a4(0xae,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                   (int)(short)uVar2,(int)local_28);
      return;
    case 1:
      if (param_1[2] == -1) {
        DAT_200006ac = 0x11;
        return;
      }
      if (param_1[3] == -1) {
        DAT_200006ac = 0x12;
        return;
      }
      if (param_1[4] == -1) {
        DAT_200006ac = 0x13;
        FUN_08023ae8(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_200006ac = 0x14;
      FUN_08023ae8(1);
      return;
    case 2:
      FUN_08023ae8(1);
      local_14 = (uint)(short)DAT_20003244;
      FUN_0800f6a4(0x4d,local_14,0,0,0,0,0,0);
      return;
    case 3:
      FUN_08023ae8(1);
      DAT_20003244 = (ushort)(byte)local_10[2];
      local_14 = (uint)(short)DAT_20003244;
      FUN_0800f6a4(0x4d,local_14,0,0,0,0,0,0);
      DAT_20003183 = 1;
      return;
    case 4:
      FUN_08023ae8(1);
      local_14 = (uint)DAT_200031e6;
      local_18 = (uint)DAT_200031e8;
      local_1c = (uint)DAT_200031ea;
      local_20 = (uint)DAT_200031ec;
      FUN_0800f6a4(0xb5,0,(int)(short)DAT_200031e6,(int)(short)DAT_200031e8,(int)(short)DAT_200031ea
                   ,(int)(short)DAT_200031ec,0,0);
      return;
    case 5:
      FUN_08023ae8(1);
      local_14 = (uint)CONCAT11(DAT_20003243,DAT_20003242);
      local_18 = (uint)CONCAT11(DAT_20003241,DAT_20003240);
      local_1c = (uint)CONCAT11(DAT_2000323f,DAT_2000323e);
      FUN_0800f6a4(0xe7,local_1c,local_18,local_14,0,0,0,0);
      return;
    case 6:
      FUN_08023ae8(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_2000323e)[local_14] = local_10[local_14 + 2];
      }
      local_18 = (uint)*(short *)(local_10 + 6);
      local_1c = (uint)*(short *)(local_10 + 4);
      local_20 = (uint)*(short *)(local_10 + 2);
      FUN_0800f6a4(0xe7,local_20,local_1c,local_18,0,0,0,0);
      DAT_20003183 = 1;
      return;
    }
    goto switchD_080122ae_default;
  }
  uVar8 = uVar8 - 0x7c;
  bVar10 = true;
  switch(uVar8) {
  case 0:
    local_1c = FUN_0801f704();
    local_20 = FUN_0801f6ec();
    local_14 = (uint)(byte)local_10[2];
    local_18 = 0;
    if (diag_AgeModeflg == '\0') {
      if (DAT_20003185 != '\0') {
        uVar8 = local_1c;
        if ((int)local_1c < 0) {
          uVar8 = -local_1c;
        }
        if ((int)uVar8 < 0x2e001) {
          iVar9 = local_20;
          if ((int)local_20 < 0) {
            iVar9 = -local_20;
          }
          local_24 = local_20;
          if (iVar9 < 0x42001) goto LAB_0801397a;
        }
        if ((local_14 == 1) && (DAT_2000317a == '\0')) {
          FUN_08023434(1);
          FUN_08023ae8(1);
          local_18 = 1;
          goto LAB_080139c2;
        }
      }
LAB_0801397a:
      FUN_08023ae8(3);
      local_14 = 0;
    }
    else if (local_14 == 0) {
      FUN_08023434(2);
      FUN_08023ae8(2);
      local_18 = 1;
    }
    else if (DAT_20003185 == '\0') {
      FUN_08023ae8(3);
      local_14 = 0;
    }
    else {
      FUN_08023434(1);
      FUN_08023ae8(1);
      local_18 = 1;
    }
LAB_080139c2:
    FUN_0800f6a4(0x48,local_14,0,0,0,0,0,0);
    break;
  case 1:
    local_14 = (uint)DAT_2000323c;
    FUN_0800f6a4(0x4a,local_14,0,0,0,0,0,0);
    FUN_08023ae8(1);
    DAT_20003183 = 1;
    break;
  case 2:
    DAT_2000323a = (ushort)(byte)param_1[2];
    local_14 = (uint)(short)DAT_2000323a;
    FUN_0800f6a4(0x4c,local_14,0,0,0,0,0,0);
    FUN_08023ae8(1);
    DAT_20003183 = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_08023ae8(1);
    local_14 = (uint)DAT_2000323c;
    FUN_0800f6a4(0x4a,local_14,0,0,0,0,0,0);
    break;
  case 5:
    FUN_08023ae8(1);
    local_14 = (uint)(short)DAT_2000323a;
    FUN_0800f6a4(0x4c,local_14,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023ae8(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f6a4(0xac,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031b8 = (ushort)local_14;
        DAT_200031ba = (ushort)local_18;
        DAT_200031bc = (ushort)local_1c;
        DAT_200031be = (ushort)local_20;
        DAT_200031c0 = (ushort)local_24;
        DAT_200031c2 = sVar1;
        FUN_08024990(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_08023ae8(2);
    break;
  case 7:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023ae8(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f6a4(0xad,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031c4 = (ushort)local_14;
        DAT_200031c6 = (ushort)local_18;
        DAT_200031c8 = (ushort)local_1c;
        DAT_200031ca = (ushort)local_20;
        DAT_200031cc = (ushort)local_24;
        DAT_200031ce = sVar1;
        FUN_08024990(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_08023ae8(2);
    break;
  case 8:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023ae8(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f6a4(0xae,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031d0 = (ushort)local_14;
        DAT_200031d2 = (ushort)local_18;
        DAT_200031d4 = (ushort)local_1c;
        DAT_200031d6 = (ushort)local_20;
        DAT_200031d8 = (ushort)local_24;
        DAT_200031da = sVar1;
        FUN_08024990(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_08023ae8(2);
    break;
  case 9:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_08023ae8(1);
      FUN_080235c0(local_10);
      DAT_20003183 = 1;
    }
    else {
      FUN_08023ae8(2);
    }
    break;
  case 10:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    break;
  case 0xb:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_08023ae8(1);
      if (local_10[2] == '\0') {
        DAT_200031b6 = 0xe000;
        FUN_0800f6a4(0xa2,1,0,0,0,0,0,0);
      }
      else if (local_10[2] == '\x01') {
        DAT_200031b6 = 0xe001;
        FUN_0800f6a4(0xa2,1,1,0,0,0,0,0);
      }
      else if (local_10[2] == '\x02') {
        DAT_200031b6 = 0xe002;
        FUN_0800f6a4(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003ff4 = DAT_200031b6;
      if (DAT_2000317a == '\0') {
        FUN_08024990(&DAT_20003ff4);
      }
      else {
        FUN_08024990(&DAT_200031b6);
      }
      DAT_20003183 = 1;
    }
    else {
      FUN_08023ae8(2);
    }
    break;
  case 0xc:
    DAT_2000094d = 1;
    if (DAT_200031f4 == 1) {
      FUN_08023ae8();
    }
    else {
      DAT_200006ac = 3;
    }
    break;
  case 0xd:
    if ((param_1[2] == -0x4c) && (param_1[3] == -0x32)) {
      if (param_1[0xf] == '\0') {
        local_14 = 0;
        local_18 = (uint)*(ushort *)(param_1 + 4);
        local_1c = *(ushort *)(param_1 + 6) ^ 0xffff;
        if (local_18 == local_1c) {
          local_14 = FUN_08023444(local_18);
          local_20 = (uint)(ushort)diag_TotalVoltage;
          local_24 = local_20 ^ 0xffff;
          FUN_0800f6a4(0x89,0xffffceb4,(int)(short)(ushort)diag_TotalVoltage,(int)(short)local_24,
                       0x1e,local_14,0,0xe00);
        }
      }
    }
    else {
      FUN_08023ae8(1);
      if (DAT_20003185 == '\x01') {
        local_14 = diag_VehicleSpeed;
        iVar9 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar9 = -diag_VehicleSpeed;
        }
        if (iVar9 < 1000) {
          FUN_08023530();
          uVar8 = DAT_e000ed0c;
          DAT_e000ed0c = (uVar8 & 0x700 | 0x5fa0000) + 4;
          DataSynchronizationBarrier(0xf);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
    }
    break;
  case 0xe:
    if (param_1[2] == '\0') {
      local_14 = (uint)DAT_200031aa;
      FUN_0800f6a4(0x8a,0,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\x01') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_08023ae8(2);
      }
      else {
        FUN_08023ae8(1);
        DAT_200031aa = (short)local_14;
        local_18 = ((int)DAT_200031aa << 0xc) / 10;
        FUN_08023570();
        local_18 = (uint)DAT_200031aa;
        FUN_0800f6a4(0x8a,1,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      local_14 = (uint)DAT_200031ac;
      FUN_0800f6a4(0x8a,2,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\x03') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_08023ae8(2);
      }
      else {
        FUN_08023ae8(1);
        DAT_200031ac = (short)local_14;
        local_18 = ((int)DAT_200031ac << 0xc) / 10;
        FUN_08023598();
        local_18 = (uint)DAT_200031ac;
        FUN_0800f6a4(0x8a,3,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      local_14 = (uint)DAT_20003246;
      FUN_0800f6a4(0x8a,4,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\x05') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_08023ae8(2);
      }
      else {
        FUN_08023ae8(1);
        DAT_20003246 = (byte)local_14;
        local_18 = local_14 & 0xff;
        FUN_08023554();
        local_18 = (uint)DAT_20003246;
        FUN_0800f6a4(0x8a,5,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      local_14 = (uint)(short)DAT_200031f0;
      FUN_0800f6a4(0x8a,6,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\a') {
      local_14 = (uint)*(ushort *)(param_1 + 4);
      local_18 = (uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_08023ae8(2);
      }
      else {
        local_18 = local_18 ^ 0xffff;
        if (local_14 == local_18) {
          if (param_1[3] == -0x32) {
            if (((int)local_14 < DAT_200002e0 + -1000) || (DAT_200002e0 + 1000 < (int)local_14)) {
              local_1c = (uint)(short)DAT_200031f0;
              FUN_0800f6a4(0x8a,7,local_1c,0,0,0,0,0);
              FUN_08023ae8(2);
            }
            else {
              DAT_200002dc = local_14 - DAT_200002e0;
              DAT_200031f0 = (ushort)DAT_200002dc;
              DAT_200031f2 = (ushort)DAT_200002dc ^ 0xffff;
              FUN_08023ae8(1);
              local_1c = (uint)(short)DAT_200031f0;
              FUN_0800f6a4(0x8a,0xffffce07,local_1c,0,0,0,0,0);
              DAT_20003183 = 1;
            }
          }
          else if ((param_1[3] == ' ') && (local_14 == 0)) {
            DAT_200002dc = 0;
            DAT_200031f0 = 0;
            DAT_200031f2 = 0;
            FUN_08023ae8(1);
            local_1c = (uint)(short)DAT_200031f0;
            FUN_0800f6a4(0x8a,0x2007,local_1c,0,0,0,0,0);
            DAT_20003183 = 1;
          }
        }
        else {
          FUN_08023ae8(2);
        }
      }
    }
    else if (param_1[2] == '\b') {
      local_14 = (uint)DAT_200031e4;
      FUN_0800f6a4(0x8a,8,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\t') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (((DAT_20003185 == '\0') || (100 < local_14)) || (local_14 < 0x32)) {
        FUN_08023ae8(2);
      }
      else {
        FUN_08023ae8(1);
        DAT_200031e4 = (short)local_14;
        local_18 = local_14 & 0xffff;
        FUN_0801b598();
        local_18 = (uint)DAT_200031e4;
        FUN_0800f6a4(0x8a,9,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\n') {
      local_14 = DAT_20003247 & 1;
      FUN_0800f6a4(0x8a,10,local_14,0,0,0,0,0);
      FUN_08023ae8(1);
    }
    else if (param_1[2] == '\v') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_08023ae8(2);
      }
      else {
        FUN_08023ae8(1);
        if (local_14 == 0) {
          DAT_20003247 = DAT_20003247 & 0xfe;
        }
        else {
          DAT_20003247 = DAT_20003247 | 1;
        }
        local_18 = DAT_20003247 & 1;
        FUN_0800f6a4(0x8a,0xb,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    break;
  case 0x16:
    FUN_08023ae8(1);
    if (DAT_2000317a == '\0') {
      local_28 = DAT_20004000;
      uVar2 = DAT_20003ffe;
      uVar3 = DAT_20003ffc;
      uVar4 = DAT_20003ffa;
      uVar5 = DAT_20003ff8;
      uVar6 = DAT_20003ff6;
    }
    else {
      local_28 = DAT_200031c2;
      uVar2 = DAT_200031c0;
      uVar3 = DAT_200031be;
      uVar4 = DAT_200031bc;
      uVar5 = DAT_200031ba;
      uVar6 = DAT_200031b8;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0800f6a4(0xac,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    break;
  default:
    goto switchD_080122ae_default;
  }
  return;
}



/* ENTRY 0x08013d1c : parse_bms_indexed */

uint parse_bms_indexed(uint param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_5c;
  undefined1 auStack_58 [4];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  ushort local_2c [2];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_30 = 0;
  local_34 = 0;
  local_10 = param_1 & 1;
  local_c = param_2;
  uStack_8 = param_3;
  iVar3 = validate_bms_ascii_frame(local_2c,param_2);
  if (iVar3 == 0) {
    (&DAT_20004e25)[local_10 * 0x308] = 1;
    iVar3 = FUN_0801979c(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        (&DAT_20004e29)[local_10 * 0x308] = *(undefined1 *)(local_c + 2);
        (&DAT_20004e2a)[local_10 * 0x308] = *(undefined1 *)(local_c + 4);
        local_38 = (uint)*(byte *)(local_c + 4);
        local_3c = (uint)*(byte *)(local_c + 2);
        FUN_08016884(local_10,local_3c,local_38);
      }
      else {
        (&DAT_20004e29)[local_10 * 0x308] = *(undefined1 *)(local_c + 2);
        (&DAT_20004e2a)[local_10 * 0x308] = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  *(short *)(&DAT_2000512a + local_10 * 0x308) = *(short *)(&DAT_2000512a + local_10 * 0x308) + 1;
  local_38 = (uint)*(byte *)(local_c + 2);
  local_3c = (uint)*(byte *)(local_c + 1);
  local_14 = FUN_080115ea(local_3c,local_38);
  local_38 = (uint)*(byte *)(local_c + 4);
  local_3c = (uint)*(byte *)(local_c + 3);
  local_18 = FUN_080115ea(local_3c,local_38);
  local_38 = (uint)*(byte *)(local_c + 6);
  local_3c = (uint)*(byte *)(local_c + 5);
  local_1c = FUN_080115ea(local_3c,local_38);
  local_38 = (uint)*(byte *)(local_c + 8);
  local_3c = (uint)*(byte *)(local_c + 7);
  local_24 = FUN_080115ea(local_3c,local_38);
  local_38 = (uint)local_2c[0];
  local_28 = (local_38 & 0x1ff) >> 1;
  if (local_24 == 0x3d) {
    local_24 = 0x3d;
    local_20 = 0x3d;
    for (local_5c = 0; local_5c < (local_2c[0] & 0x1ff) >> 1; local_5c = local_5c + 1 & 0xffff) {
      uVar1 = FUN_080115ea(*(undefined1 *)(local_c + local_5c * 2 + 0xd),
                           *(undefined1 *)(local_c + local_5c * 2 + 0xe));
      (&DAT_20005434)[local_5c] = uVar1;
    }
    if ((DAT_20005443 != -0x50) && (DAT_20005443 != -0x45)) {
      if (DAT_20005443 == '0') {
        (&DAT_20004e34)[local_10 * 0x308] = 1;
        (&DAT_20004e2e)[local_10 * 0x308] = 0x32;
      }
      else if (DAT_20005443 == '1') {
        (&DAT_20004e2e)[local_10 * 0x308] = 0x32;
        (&DAT_20003155)[local_10] = DAT_20005434;
      }
      else if (DAT_20005443 == '2') {
        (&DAT_20004e2e)[local_10 * 0x308] = 0x32;
        (&DAT_20003155)[local_10] = DAT_20005434;
      }
      for (local_5c = 0; local_5c < 0x10; local_5c = local_5c + 1 & 0xff) {
        auStack_58[local_5c] = (&DAT_20005434)[local_5c];
      }
      FUN_08019480(local_10,auStack_58);
      (&DAT_20004e25)[local_10 * 0x308] = 0;
      return 0;
    }
    (&DAT_20004e34)[local_10 * 0x308] = 1;
    (&DAT_20004e2f)[local_10 * 0x308] = 200;
    (&DAT_20004e25)[local_10 * 0x308] = 0;
    return 0;
  }
  uVar4 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
  local_20 = local_24;
  if (uVar4 == 0xbe) {
LAB_08014972:
    if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0xc)) {
      local_28 = 6;
      for (local_5c = 0; local_5c < 6; local_5c = local_5c + 1 & 0xff) {
        uVar1 = FUN_080115ea(*(undefined1 *)(local_c + local_5c * 2 + 0xd),
                             *(undefined1 *)(local_c + local_5c * 2 + 0xe));
        auStack_58[local_5c] = uVar1;
      }
      FUN_080176d8(local_10,(&DAT_20004e25)[local_10 * 0x308],auStack_58);
    }
    goto code_r0x08014be4;
  }
  if (uVar4 < 0xbf) {
    if (uVar4 == 0xae) goto LAB_0801471a;
    if (0xae < uVar4) {
      uVar4 = uVar4 - 0xaf;
      bVar5 = true;
      switch(uVar4) {
      case 0:
        goto switchD_08014038_caseD_0;
      case 1:
      case 5:
        goto LAB_08014902;
      case 2:
      case 0xb:
      case 0xd:
        goto LAB_08014972;
      case 3:
      case 4:
      case 8:
      case 10:
      case 0xc:
        goto LAB_08014910;
      case 6:
        goto switchD_08014038_caseD_6;
      case 7:
        goto switchD_08014038_caseD_7;
      case 9:
        if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 2)) {
          local_28 = 1;
          bVar5 = false;
          while (!bVar5) {
            auStack_58[0] =
                 FUN_080115ea(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe));
            bVar5 = true;
          }
          FUN_080176d8(local_10,(&DAT_20004e25)[local_10 * 0x308],auStack_58);
        }
        break;
      case 0xe:
        if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0)) {
          local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
          FUN_08016a5c(local_10,local_38,1);
        }
        else {
          local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
          FUN_08016a5c(local_10,local_38,0);
        }
        break;
      default:
switchD_08014038_default:
        if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x08014020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)(&DAT_08014024 + (uint)*(ushort *)(&DAT_08014024 + uVar4 * 2) * 2))();
          return uVar4;
        }
        goto LAB_08014902;
      }
      goto code_r0x08014be4;
    }
    if (uVar4 == 0xa6) {
      if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0xc)) {
        local_28 = 6;
        for (local_5c = 0; local_5c < 6; local_5c = local_5c + 1 & 0xff) {
          uVar1 = FUN_080115ea(*(undefined1 *)(local_c + local_5c * 2 + 0xd),
                               *(undefined1 *)(local_c + local_5c * 2 + 0xe));
          auStack_58[local_5c] = uVar1;
        }
        FUN_08016c04(local_10,(&DAT_20004e25)[local_10 * 0x308],auStack_58);
      }
      goto code_r0x08014be4;
    }
    if (0xa6 < uVar4) {
      uVar4 = uVar4 - 0xa7;
      bVar5 = 6 < uVar4;
      goto switchD_08014038_default;
    }
    if (uVar4 == 0x44) {
      if ((local_2c[0] != 0x76) && (local_2c[0] != 0x7a)) {
        return 0;
      }
      local_40 = (uint)*(byte *)(local_c + 0xe);
      local_44 = (uint)*(byte *)(local_c + 0xd);
      FUN_080115ea(local_44,local_40);
      local_40 = (uint)*(byte *)(local_c + 0x10);
      local_44 = (uint)*(byte *)(local_c + 0xf);
      FUN_080115ea(local_44,local_40);
      local_40 = (uint)*(byte *)(local_c + 0x12);
      local_44 = (uint)*(byte *)(local_c + 0x11);
      local_38 = FUN_080115ea(local_44,local_40);
      (&DAT_200050d4)[local_10 * 0x308] = (char)local_38;
      for (local_40 = 0; local_40 < 0x1e; local_40 = local_40 + 1 & 0xff) {
        local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0x14);
        local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0x13);
        uVar1 = FUN_080115ea(local_48,local_44);
        (&DAT_200050d6)[local_40 + local_10 * 0x308] = uVar1;
      }
      local_40 = (uint)*(byte *)(local_c + 0x50);
      local_44 = (uint)*(byte *)(local_c + 0x4f);
      local_3c = FUN_080115ea(local_44,local_40);
      (&DAT_200050d5)[local_10 * 0x308] = (char)local_3c;
      for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1 & 0xff) {
        local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0x52);
        local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0x51);
        uVar1 = FUN_080115ea(local_48,local_44);
        (&DAT_200050f4)[local_40 + local_10 * 0x308] = uVar1;
      }
      local_40 = (uint)*(byte *)(local_c + 0x62);
      local_44 = (uint)*(byte *)(local_c + 0x61);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_200050fc)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 100);
      local_44 = (uint)*(byte *)(local_c + 99);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_200050fd)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 0x66);
      local_44 = (uint)*(byte *)(local_c + 0x65);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_200050fe)[local_10 * 0x308] = uVar1;
      for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1 & 0xff) {
        local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0x68);
        local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0x67);
        uVar1 = FUN_080115ea(local_48,local_44);
        (&DAT_200050ff)[local_40 + local_10 * 0x308] = uVar1;
      }
      uVar2 = FUN_0801f54c(local_c + 0x71);
      (&DAT_20005106)[local_10 * 0x184] = uVar2;
      local_40 = (uint)*(byte *)(local_c + 0x76);
      local_44 = (uint)*(byte *)(local_c + 0x75);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_2000510c)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 0x78);
      local_44 = (uint)*(byte *)(local_c + 0x77);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_2000510d)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 0x7a);
      local_44 = (uint)*(byte *)(local_c + 0x79);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_20005104)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 0x7c);
      local_44 = (uint)*(byte *)(local_c + 0x7b);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_2000510a)[local_10 * 0x308] = uVar1;
      local_40 = (uint)*(byte *)(local_c + 0x7e);
      local_44 = (uint)*(byte *)(local_c + 0x7d);
      uVar1 = FUN_080115ea(local_44,local_40);
      (&DAT_2000510b)[local_10 * 0x308] = uVar1;
      uVar2 = FUN_0801f54c(local_c + 0x7f);
      (&DAT_20005108)[local_10 * 0x184] = uVar2;
      goto code_r0x08014be4;
    }
    if (uVar4 < 0x45) {
      if (uVar4 == 0x32) goto LAB_08014910;
      if (uVar4 == 0x35) {
        if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0x1c)) {
          local_28 = 0xe;
          for (local_5c = 0; local_5c < 0xe; local_5c = local_5c + 1 & 0xff) {
            uVar1 = FUN_080115ea(*(undefined1 *)(local_c + local_5c * 2 + 0xd),
                                 *(undefined1 *)(local_c + local_5c * 2 + 0xe));
            auStack_58[local_5c] = uVar1;
          }
          FUN_080176d8(local_10,(&DAT_20004e25)[local_10 * 0x308],auStack_58);
        }
        goto code_r0x08014be4;
      }
      bVar5 = uVar4 == 0x42;
LAB_08014008:
      if (bVar5) {
        if ((local_2c[0] != 0xba) && (local_2c[0] != 0xd0)) {
          return 0;
        }
        local_40 = (uint)*(byte *)(local_c + 0xe);
        local_44 = (uint)*(byte *)(local_c + 0xd);
        FUN_080115ea(local_44,local_40);
        local_40 = (uint)*(byte *)(local_c + 0x10);
        local_44 = (uint)*(byte *)(local_c + 0xf);
        FUN_080115ea(local_44,local_40);
        local_40 = (uint)*(byte *)(local_c + 0x12);
        local_44 = (uint)*(byte *)(local_c + 0x11);
        local_38 = FUN_080115ea(local_44,local_40);
        (&DAT_2000506f)[local_10 * 0x308] = (char)local_38;
        for (local_40 = 0; local_40 < 0x1e; local_40 = local_40 + 1 & 0xff) {
          local_44 = local_c + local_40 * 4 + 0x13;
          uVar2 = FUN_0801f54c();
          (&DAT_20005070)[local_10 * 0x184 + local_40] = uVar2;
        }
        local_40 = (uint)*(byte *)(local_c + 0x8c);
        local_44 = (uint)*(byte *)(local_c + 0x8b);
        local_3c = FUN_080115ea(local_44,local_40);
        (&DAT_200050b0)[local_10 * 0x308] = (char)local_3c;
        for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1 & 0xff) {
          local_44 = local_40 * 4 + 0x8d + local_c;
          uVar2 = FUN_0801f54c();
          (&DAT_200050b2)[local_10 * 0x184 + local_40] = uVar2;
        }
        uVar2 = FUN_0801f54c(local_c + 0xad);
        (&DAT_200050c6)[local_10 * 0x184] = uVar2;
        uVar2 = FUN_0801f54c(local_c + 0xb1);
        (&DAT_200050c8)[local_10 * 0x184] = uVar2;
        uVar2 = FUN_0801f54c(local_c + 0xb5);
        (&DAT_200050ca)[local_10 * 0x184] = uVar2;
        local_40 = (uint)*(byte *)(local_c + 0xba);
        local_44 = (uint)*(byte *)(local_c + 0xb9);
        uVar1 = FUN_080115ea(local_44,local_40);
        (&DAT_200050cc)[local_10 * 0x308] = uVar1;
        uVar2 = FUN_0801f54c(local_c + 0xbb);
        (&DAT_200050ce)[local_10 * 0x184] = uVar2;
        uVar2 = FUN_0801f54c(local_c + 0xbf);
        (&DAT_200050d0)[local_10 * 0x184] = uVar2;
        uVar2 = FUN_0801f54c(local_c + 0xc3);
        (&DAT_200050d2)[local_10 * 0x184] = uVar2;
        goto code_r0x08014be4;
      }
      goto LAB_08014902;
    }
    if (uVar4 == 0xa0) goto LAB_080147ea;
    if (uVar4 == 0xa1) {
      if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0x60)) {
        local_28 = 0x30;
        for (local_5c = 0; local_5c < 0x24; local_5c = local_5c + 1 & 0xff) {
          uVar1 = FUN_080115ea(*(undefined1 *)(local_c + local_5c * 2 + 0xd),
                               *(undefined1 *)(local_c + local_5c * 2 + 0xe));
          auStack_58[local_5c] = uVar1;
        }
        FUN_080176d8(local_10,(&DAT_20004e25)[local_10 * 0x308],auStack_58);
      }
      else {
        FUN_080174ee(local_10,(&DAT_20004e25)[local_10 * 0x308],0);
      }
      goto code_r0x08014be4;
    }
    bVar5 = uVar4 == 0xa4;
    if (!bVar5) goto LAB_08014008;
    goto LAB_0801472e;
  }
  uVar4 = uVar4 - 0xbf;
  bVar5 = true;
  switch(uVar4) {
  case 0:
LAB_08014910:
    if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0)) {
      local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
      FUN_080174ee(local_10,local_38,1);
    }
    else {
      local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
      FUN_080174ee(local_10,local_38,0);
    }
    break;
  case 1:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
LAB_08014902:
    break;
  case 2:
    if (local_2c[0] != 0x28) {
      return 0;
    }
    local_28 = 0x14;
    for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1 & 0xff) {
      local_3c = (uint)*(byte *)(local_c + local_38 * 2 + 0xe);
      local_40 = (uint)*(byte *)(local_c + local_38 * 2 + 0xd);
      uVar1 = FUN_080115ea(local_40,local_3c);
      (&DAT_2000503d)[local_38 + local_10 * 0x308] = uVar1;
    }
    break;
  case 3:
    if (local_2c[0] != 0x28) {
      return 0;
    }
    local_28 = 0x14;
    for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1 & 0xff) {
      local_3c = (uint)*(byte *)(local_c + local_38 * 2 + 0xe);
      local_40 = (uint)*(byte *)(local_c + local_38 * 2 + 0xd);
      uVar1 = FUN_080115ea(local_40,local_3c);
      (&DAT_2000510f)[local_38 + local_10 * 0x308] = uVar1;
    }
    break;
  case 4:
    if (((local_14 == 0x25) && (local_1c == 0x46)) && (local_2c[0] == 0)) {
      local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
      FUN_08018790(local_10,local_38,1);
    }
    else {
      local_38 = (uint)(byte)(&DAT_20004e25)[local_10 * 0x308];
      FUN_08018790(local_10,local_38,0);
    }
    break;
  case 0x11:
    goto switchD_08014060_caseD_11;
  case 0x12:
    goto switchD_08014060_caseD_12;
  case 0x13:
    goto switchD_08014060_caseD_13;
  case 0x14:
    goto switchD_08014060_caseD_14;
  case 0x15:
    goto switchD_08014060_caseD_15;
  case 0x16:
    goto switchD_08014060_caseD_16;
  case 0x17:
    goto switchD_08014060_caseD_17;
  case 0x18:
    goto switchD_08014060_caseD_18;
  case 0x19:
    goto switchD_08014060_caseD_19;
  case 0x1a:
    goto switchD_08014060_caseD_1a;
  case 0x1b:
    goto switchD_08014060_caseD_1b;
  case 0x1c:
    goto switchD_08014060_caseD_1c;
  case 0x1d:
    goto switchD_08014060_caseD_1d;
  case 0x1e:
    goto switchD_08014060_caseD_1e;
  case 0x1f:
    goto switchD_08014060_caseD_1f;
  case 0x20:
    goto switchD_08014060_caseD_20;
  case 0x21:
    goto switchD_08014060_caseD_21;
  case 0x22:
    goto switchD_08014060_caseD_22;
  case 0x23:
    goto switchD_08014060_caseD_23;
  case 0x24:
    goto switchD_08014060_caseD_24;
  case 0x27:
    local_34 = local_34 + 1 & 0xffff;
  case 0x25:
    local_34 = local_34 + 1 & 0xffff;
    goto switchD_08014060_caseD_23;
  case 0x28:
    local_34 = local_34 + 1 & 0xffff;
  case 0x26:
    local_34 = local_34 + 1 & 0xffff;
    goto switchD_08014060_caseD_24;
  default:
    goto switchD_08014038_default;
  }
code_r0x08014be4:
  (&DAT_20004e25)[local_10 * 0x308] = 0;
  return local_38;
switchD_08014060_caseD_24:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_22;
switchD_08014060_caseD_23:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_21;
switchD_08014060_caseD_22:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_20;
switchD_08014060_caseD_21:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1f;
switchD_08014060_caseD_20:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1e;
switchD_08014060_caseD_1f:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1d;
switchD_08014060_caseD_1e:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1c;
switchD_08014060_caseD_1d:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1b;
switchD_08014060_caseD_1c:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_1a;
switchD_08014060_caseD_1b:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_19;
switchD_08014060_caseD_1a:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_18;
switchD_08014060_caseD_19:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_17;
switchD_08014060_caseD_18:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_16;
switchD_08014060_caseD_17:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_15;
switchD_08014060_caseD_16:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_14;
switchD_08014060_caseD_15:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_13;
switchD_08014060_caseD_14:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_12;
switchD_08014060_caseD_13:
  local_34 = local_34 + 1 & 0xffff;
  goto switchD_08014060_caseD_11;
switchD_08014060_caseD_12:
  local_34 = local_34 + 1 & 0xffff;
switchD_08014038_caseD_7:
  local_34 = local_34 + 1 & 0xffff;
switchD_08014038_caseD_0:
  local_34 = local_34 + 1 & 0xffff;
LAB_080147ea:
  local_38 = (uint)(byte)(&DAT_20006911)[local_34 * 0x11 + local_10 * 0xff];
  if (((local_14 == 0x25) && (local_1c == 0x46)) && ((uint)local_2c[0] == local_38 * 2)) {
    for (local_4c = 0; (int)local_4c < (int)local_38; local_4c = local_4c + 1 & 0xff) {
      local_50 = (uint)*(byte *)(local_c + local_4c * 2 + 0xe);
      local_54 = (uint)*(byte *)(local_c + local_4c * 2 + 0xd);
      uVar1 = FUN_080115ea(local_54,local_50);
      *(undefined1 *)((int)&local_48 + local_4c) = uVar1;
    }
    local_4c = local_34 & 0xff;
    FUN_080185f4(local_10,local_4c,&local_48);
  }
  goto code_r0x08014be4;
switchD_08014060_caseD_11:
  local_34 = local_34 + 1 & 0xffff;
switchD_08014038_caseD_6:
  local_34 = local_34 + 1 & 0xffff;
LAB_0801471a:
  local_34 = (local_34 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801472e:
  if ((local_14 == 0x25) && (local_1c == 0x46)) {
    local_38 = local_34 & 0xff;
    FUN_08018174(local_10,local_38,1);
  }
  else {
    local_38 = local_34 & 0xff;
    FUN_08018174(local_10,local_38,0);
  }
  goto code_r0x08014be4;
}



/* ENTRY 0x08014c00 : FUN_08014c00 */

void FUN_08014c00(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_08014e34(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_08015144(param_1 + 1);
    break;
  case 0xe2:
    FUN_08015174(param_1 + 1);
    break;
  case 0xe3:
    FUN_08014e1c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_08014e28(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_08015098(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_080151a4(param_1 + 1);
    break;
  case 0xe7:
    FUN_080227dc();
    FUN_08014c60(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08014c60 : FUN_08014c60 */

void FUN_08014c60(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_58 [3];
  undefined1 local_55;
  undefined1 auStack_54 [64];
  
  local_58[2] = *(byte *)(param_1 + 1);
  uVar1 = (uint)(byte)local_58[2];
  local_58[1] = 0xe7;
  if (uVar1 == 0xff) {
    local_55 = 0x11;
    local_58[0] = '\x05';
  }
  else {
    if (uVar1 == 0xfe) {
      DAT_200005f4 = 1;
      return;
    }
    local_55 = (undefined1)(&DWORD_08027c20)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_08027c20 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_08027c1c)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_08027c20 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_08027c28)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_08027c28)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_08027c20 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_08027c24)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_08027c20 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_08027c28)[uVar1 * 4] + '\x06';
  }
  FUN_0800da98(local_58);
  FUN_08021150(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08014d48 : FUN_08014d48 */

void FUN_08014d48(int param_1)

{
  uint uVar1;
  char local_54 [3];
  undefined1 local_51;
  undefined1 auStack_50 [64];
  
  local_54[1] = 0xe7;
  local_54[2] = (char)param_1;
  if (param_1 == 0xff) {
    local_51 = 0x11;
    local_54[0] = '\x05';
  }
  else {
    local_51 = (undefined1)(&DWORD_08027c20)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027c20 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_08027c1c)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_08027c20 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_08027c28)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08027c28)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_08027c20 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_08027c24)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_08027c20 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_08027c28)[param_1 * 4] + '\x06';
  }
  FUN_0800da98(local_54);
  FUN_08021150(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x08014e1c : FUN_08014e1c */

void FUN_08014e1c(undefined1 param_1)

{
  DAT_200005f2 = param_1;
  return;
}



/* ENTRY 0x08014e28 : FUN_08014e28 */

void FUN_08014e28(undefined1 param_1)

{
  DAT_200005f1 = param_1;
  return;
}



/* ENTRY 0x08014e34 : FUN_08014e34 */

void FUN_08014e34(int param_1)

{
  uint uVar1;
  char local_50 [3];
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 auStack_4a [62];
  
  local_50[1] = 0xe0;
  local_50[2] = (char)param_1;
  if (param_1 == 0xff) {
    local_4d = 0x62;
    local_50[0] = '\x05';
  }
  else {
    if (param_1 == 0xfe) {
      DAT_200005f3 = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_08027600)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_08027608 + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_08027608)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08027608)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_08027604)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_08027608)[param_1 * 4] + '\a';
  }
  FUN_0800da98(local_50);
  FUN_08021150(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08014ee0 : FUN_08014ee0 */

void FUN_08014ee0(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_200039cc;
  local_4d = DAT_200039cd;
  for (uVar1 = 0; uVar1 < DAT_200039cd; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200039ce)[uVar1];
  }
  local_50[0] = DAT_200039cd + 5;
  FUN_0800da98(local_50);
  FUN_08021150(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08014f38 : FUN_08014f38 */

void FUN_08014f38(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_200039d6;
  local_4d = DAT_200039d7;
  for (uVar1 = 0; uVar1 < DAT_200039d7; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200039d8)[uVar1];
  }
  local_50[0] = DAT_200039d7 + 5;
  FUN_0800da98(local_50);
  FUN_08021150(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08014f90 : FUN_08014f90 */

void FUN_08014f90(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_200039cc;
  local_58[3] = DAT_200039cd;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200039cd; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027600 + (uint)(byte)(&DAT_200039ce)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080275fc)[(uint)(byte)(&DAT_200039ce)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800da98(local_58);
  FUN_08021150(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08015014 : FUN_08015014 */

void FUN_08015014(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_200039d6;
  local_58[3] = DAT_200039d7;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200039d7; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027600 + (uint)(byte)(&DAT_200039d8)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080275fc)[(uint)(byte)(&DAT_200039d8)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800da98(local_58);
  FUN_08021150(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08015098 : FUN_08015098 */

void FUN_08015098(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027600 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_080275fc)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_0800da98(local_54);
  FUN_08021150(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x080150f8 : FUN_080150f8 */

void FUN_080150f8(int param_1,int param_2)

{
  uint uVar1;
  char local_54 [68];
  
  local_54[1] = 0xea;
  if (0x20 < param_1) {
    param_1 = 0x20;
  }
  for (uVar1 = 0; (int)uVar1 < param_1; uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar1 + 2] = *(char *)(param_2 + uVar1);
  }
  local_54[0] = (char)param_1 + '\x03';
  FUN_0800da98(local_54);
  FUN_08021150(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x08015144 : FUN_08015144 */

void FUN_08015144(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08014ee0();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200039cc)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08014ee0();
  }
  return;
}



/* ENTRY 0x08015174 : FUN_08015174 */

void FUN_08015174(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08014f38();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200039d6)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08014f38();
  }
  return;
}



/* ENTRY 0x080151a4 : FUN_080151a4 */

void FUN_080151a4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_08027608 + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027600 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_080275fc)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027600 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_080275fc)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_080275fc)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800da98(local_58);
  FUN_08021150(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08015248 : FUN_08015248 */

int FUN_08015248(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (diag_BuscurLimit * DAT_2000036c) / 45000 + diag_BuscurLimit;
  iVar2 = 32000;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  if (diag_g_average_iq < 0x1f5) {
    if (diag_g_average_iq < -499) {
      if (param_1 < 0) {
        diag_buscurlmt_vq = ((iVar3 * diag_IbusRateRT * 100) / (iVar1 * 7)) * 6;
        iVar2 = ((diag_IbusRateRT * diag_BuscurLimit * 100) / (iVar1 * 7)) * 6;
      }
      else {
        diag_buscurlmt_vq = 32000;
      }
    }
    else {
      diag_buscurlmt_vq = 32000;
    }
  }
  else if (param_1 < 1) {
    diag_buscurlmt_vq = 32000;
  }
  else {
    diag_buscurlmt_vq = ((iVar3 * diag_IbusRateRT * 100) / (iVar1 * 7)) * 6;
    iVar2 = ((diag_IbusRateRT * diag_BuscurLimit * 100) / (iVar1 * 7)) * 6;
  }
  if (iVar2 < param_1) {
    if (1 < DAT_2000036c) {
      DAT_2000036c = DAT_2000036c + -1;
    }
  }
  else if (param_1 < -iVar2) {
    if (1 < DAT_2000036c) {
      DAT_2000036c = DAT_2000036c + -1;
    }
  }
  else if (DAT_2000036c < 15000) {
    DAT_2000036c = DAT_2000036c + 1;
  }
  iVar1 = diag_buscurlmt_vq;
  if ((param_1 <= diag_buscurlmt_vq) && (iVar1 = param_1, param_1 < -diag_buscurlmt_vq)) {
    iVar1 = -diag_buscurlmt_vq;
  }
  if (diag_PhcurrLimit_Vq_P < iVar1) {
    iVar1 = diag_PhcurrLimit_Vq_P;
  }
  if (iVar1 < diag_PhcurrLimit_Vq_N) {
    iVar1 = diag_PhcurrLimit_Vq_N;
  }
  if (iVar1 < 0x7d01) {
    if (iVar1 < -32000) {
      iVar1 = -32000;
    }
  }
  else {
    iVar1 = 32000;
  }
  return iVar1;
}



/* ENTRY 0x080153e4 : FUN_080153e4 */

uint FUN_080153e4(void)

{
  uint uVar1;
  
  uVar1 = FUN_08015578();
  return uVar1 & 1;
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



/* ENTRY 0x08015464 : FUN_08015464 */

void FUN_08015464(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(8,1);
  local_8 = 0x10038000;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  FUN_0800bcda(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_0800bb9c(&DAT_40011000,&local_8);
  FUN_0800bcda(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0800f4dc();
  FUN_0800f5c0(0);
  DAT_200009b6 = FUN_08015530();
  return;
}



/* ENTRY 0x080154e0 : FUN_080154e0 */

void FUN_080154e0(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f56c(3);
  FUN_0800f56c((param_2 & 0xffffff) >> 0x10);
  FUN_0800f56c((param_2 & 0xffff) >> 8);
  FUN_0800f56c(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f56c(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015530 : FUN_08015530 */

uint FUN_08015530(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f56c(0x90);
  FUN_0800f56c(0);
  FUN_0800f56c(0);
  FUN_0800f56c(0);
  iVar1 = FUN_0800f56c(0xff);
  uVar2 = FUN_0800f56c(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x08015578 : FUN_08015578 */

undefined4 FUN_08015578(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0800f56c(5);
  uVar1 = FUN_0800f56c(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x080155a4 : FUN_080155a4 */

undefined4 FUN_080155a4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0800f56c(3);
  FUN_0800f56c((param_1 & 0xffffff) >> 0x10);
  FUN_0800f56c((param_1 & 0xffff) >> 8);
  FUN_0800f56c(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f56c(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x080155f0 : FUN_080155f0 */

void FUN_080155f0(void)

{
  DAT_422101bc = 0;
  FUN_0800f56c(6);
  DAT_422101bc = 1;
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



/* ENTRY 0x08015680 : FUN_08015680 */

void FUN_08015680(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_08023ae8(1);
    DAT_200006d2 = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031f4 == 1) {
      FUN_08023ae8(3);
    }
    else if (DAT_200006a8 == 0) {
      DAT_200006ac = 4;
    }
    else {
      DAT_200006ac = 9;
    }
    DAT_200006d4 = 500;
    break;
  case 0x23:
    FUN_08023ae8(1);
    DAT_200006d3 = 1;
    break;
  case 0x24:
    if (DAT_200031f4 == 1) {
      FUN_08023ae8(3);
    }
    else if (DAT_200006a8 == 0) {
      DAT_200006ac = 4;
    }
    else {
      DAT_200006ac = 10;
    }
    DAT_200006d8 = 2000;
    break;
  case 0x25:
    DAT_200006d0 = 1;
    if (DAT_200031f4 == 1) {
      FUN_08023ae8(3);
    }
    if (DAT_200031f4 == 0) {
      if (DAT_200006a8 == 0) {
        DAT_200006ac = 0xf;
      }
      else {
        DAT_200006ac = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_2000317a == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_08023ae8(4);
    }
  }
  return;
}



/* ENTRY 0x08015798 : FUN_08015798 */

void FUN_08015798(undefined4 param_1)

{
  FUN_0800bcd6(&DAT_40011000,0x10);
  FUN_08011550(param_1);
  FUN_0800bcda(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x080157b8 : FUN_080157b8 */

short FUN_080157b8(byte *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  
  sVar1 = 0;
  while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
    sVar1 = (ushort)*param_1 + sVar1;
    param_1 = param_1 + 1;
  }
  return sVar1;
}



/* ENTRY 0x080157d4 : FUN_080157d4 */

void FUN_080157d4(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  short sVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (bVar4 = param_2 != 0, param_2 = param_2 + -1, bVar4) {
    pbVar2 = param_1 + 1;
    uVar1 = uVar1 ^ (uint)*param_1 << 8;
    for (sVar3 = 8; param_1 = pbVar2, sVar3 != 0; sVar3 = sVar3 + -1) {
      if ((uVar1 & 0x8000) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 0x1021;
      }
      uVar1 = uVar1 & 0xffff;
    }
  }
  return;
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



/* ENTRY 0x08015e80 : FUN_08015e80 */

void FUN_08015e80(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_080154e0(&DAT_200066b0,
                 (((uint)(ushort)DAT_20006671 - (uint)DAT_200066ac) - 1 & 0x7fff) * 0x40,0x40);
    FUN_0800fa08(0xf9,0x80,&DAT_200066b4);
    FUN_0800fa08(0xf9,0x81,&DAT_200066c2);
    FUN_0800fa08(0xf9,0x82,&DAT_200066d0);
  }
  else {
    uVar1 = (uint)DAT_200066ae;
    DAT_200066ae = DAT_200066ae + 1;
    FUN_080154e0(&DAT_200066b0,((((ushort)DAT_200066a7 - uVar1) - 1 & 0x7fff) + param_1) * 0x40,0x40
                );
    FUN_0800fa08(0xf9,0x70,&DAT_200066b4);
    FUN_0800fa08(0xf9,0x71,&DAT_200066c2);
    FUN_0800fa08(0xf9,0x72,&DAT_200066d0);
  }
  return;
}



/* ENTRY 0x08015f2c : FUN_08015f2c */

/* WARNING: Removing unreachable block (ram,0x08015f94) */
/* WARNING: Removing unreachable block (ram,0x08015f8a) */
/* WARNING: Removing unreachable block (ram,0x08015f90) */
/* WARNING: Removing unreachable block (ram,0x08015f76) */

undefined4 FUN_08015f2c(void)

{
  return 1;
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



/* ENTRY 0x08016028 : FUN_08016028 */

void FUN_08016028(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
    FUN_08014c00(param_1);
    break;
  default:
    FUN_0801c1ac(param_1);
  }
  return;
}



/* ENTRY 0x08016064 : FUN_08016064 */

void FUN_08016064(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fdec();
    balance_control_candidate();
  }
  return;
}



/* ENTRY 0x0801607c : FUN_0801607c */

void FUN_0801607c(void)

{
  int iVar1;
  
  iVar1 = DAT_200032bc;
  if (DAT_200032bc < 0) {
    iVar1 = -DAT_200032bc;
  }
  if ((iVar1 < 0x12d) || (DAT_200005c4 == '\0')) {
    DAT_2000022e = 0;
  }
  else if (DAT_2000022e < 100) {
    DAT_2000022e = DAT_2000022e + 1;
  }
  if (((byte)DAT_200032b6 & 0x10) == 0) {
    if (DAT_2000022e < 0x3c) {
      iVar1 = (int)DAT_2000031c;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_2000021c < 800) {
          DAT_2000021c = DAT_2000021c + 1;
        }
        iVar1 = DAT_200032bc;
        if (DAT_200032bc < 0) {
          iVar1 = -DAT_200032bc;
        }
        if ((iVar1 < 500) && (DAT_2000021c < 600)) {
          DAT_2000021c = DAT_2000021c + 0x1e;
        }
      }
      else if (3 < DAT_2000021c) {
        DAT_2000021c = DAT_2000021c + -3;
      }
      iVar1 = (int)DAT_2000031c;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_PhcurrLimit_Vq_P < iVar1) {
        if (DAT_20000220 < 800) {
          DAT_20000220 = DAT_20000220 + 1;
        }
        iVar1 = DAT_200032bc;
        if (DAT_200032bc < 0) {
          iVar1 = -DAT_200032bc;
        }
        if ((iVar1 < 500) && (DAT_20000220 < 600)) {
          DAT_20000220 = DAT_20000220 + 0x1e;
        }
      }
      else if (3 < DAT_20000220) {
        DAT_20000220 = DAT_20000220 + -3;
      }
      if (10 < DAT_20000224) {
        DAT_20000224 = DAT_20000224 + -10;
      }
    }
    else {
      if (3 < DAT_2000021c) {
        DAT_2000021c = DAT_2000021c + -3;
      }
      if (3 < DAT_20000220) {
        DAT_20000220 = DAT_20000220 + -3;
      }
      if (DAT_20000224 < 0x708) {
        DAT_20000224 = DAT_20000224 + 10;
      }
    }
  }
  else {
    if (DAT_2000021c < 200) {
      DAT_2000021c = 200;
    }
    else if (DAT_2000021c < 600) {
      DAT_2000021c = DAT_2000021c + 6;
    }
    else if (DAT_2000021c < 800) {
      DAT_2000021c = DAT_2000021c + 2;
    }
    if (DAT_20000220 < 200) {
      DAT_20000220 = 200;
    }
    else if (DAT_20000220 < 600) {
      DAT_20000220 = DAT_20000220 + 6;
    }
    else if (DAT_20000220 < 800) {
      DAT_20000220 = DAT_20000220 + 2;
    }
    if (10 < DAT_20000224) {
      DAT_20000224 = DAT_20000224 + -10;
    }
  }
  if (DAT_2000021c < 0xc9) {
    diag_BuscurLimit = diag_BuscurLimit_set;
    DAT_200032b4 = DAT_200032b4 & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_2000021c)) / 900;
    DAT_200032b4 = DAT_200032b4 | 4;
  }
  if (DAT_20000220 < 0xc9) {
    iVar1 = DAT_20000224 + 900;
  }
  else {
    iVar1 = (0x44c - DAT_20000220) + DAT_20000224;
  }
  diag_PhcurrLimit = (diag_PhcurrLimit_set * iVar1) / 900;
  iVar1 = (int)DAT_2000031c;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (diag_buscurlmt_vq < iVar1) {
LAB_0801632e:
    if (DAT_200002d8 != '\x01') {
      if (DAT_20000228 < 100) {
        DAT_20000228 = DAT_20000228 + 1;
      }
      else {
        DAT_200032b4 = DAT_200032b4 | 2;
      }
      goto LAB_08016380;
    }
  }
  else {
    iVar1 = (int)DAT_2000031c;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_0801632e;
  }
  if (DAT_20000228 < 0xb) {
    DAT_200032b4 = DAT_200032b4 & 0xfffd;
  }
  else {
    DAT_20000228 = DAT_20000228 + -1;
  }
LAB_08016380:
  if ((((DAT_200032b4 & 6) == 0) || (((byte)DAT_200032b6 & 0x10) == 0)) || (DAT_200032c0 != '\0')) {
    DAT_2000022a = 0;
  }
  else if (DAT_2000022a < 0x4b0) {
    DAT_2000022a = DAT_2000022a + 1;
  }
  else {
    FUN_08020ffc();
    DAT_2000022a = 0;
  }
  return;
}



/* ENTRY 0x08016408 : FUN_08016408 */

void FUN_08016408(void)

{
  return;
}



/* ENTRY 0x0801640c : FUN_0801640c */

void FUN_0801640c(void)

{
  uint uVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000078 = FUN_0800de38(0);
  do {
    FUN_0801c734();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_0801c194();
    }
    FUN_0801f1ec();
    FUN_0800de8c(DAT_20000078,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08016458 : FUN_08016458 */

void FUN_08016458(undefined1 param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  FUN_08008582(&local_24,0x14);
  local_24 = 0xaa;
  local_23 = 0x55;
  local_21 = 0;
  local_1f = 0;
  local_16 = 0;
  local_15 = 0;
  local_14 = 0x7a;
  local_13 = 2;
  local_22 = param_1;
  local_20 = param_2;
  uVar1 = FUN_080157d4(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0800fac0(&local_24);
  return;
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



/* ENTRY 0x08016884 : FUN_08016884 */

void FUN_08016884(void)

{
  return;
}



/* ENTRY 0x08016888 : FUN_08016888 */

undefined4 FUN_08016888(int param_1)

{
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 0xb0;
  (&DAT_20004e40)[param_1 * 0x308] = 0;
  (&DAT_20004e41)[param_1 * 0x308] = 0x4f;
  return 5;
}



/* ENTRY 0x080168e4 : FUN_080168e4 */

undefined4 FUN_080168e4(int param_1)

{
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 0xbb;
  (&DAT_20004e40)[param_1 * 0x308] = 0;
  (&DAT_20004e41)[param_1 * 0x308] = 0x44;
  return 5;
}



/* ENTRY 0x08016940 : validate_bms_ascii_frame */

undefined4 validate_bms_ascii_frame(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801f54c(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801f54c(param_2 + uVar4 + 0xd);
        if (uVar4 == (~uVar5 + 1 & 0xffff)) {
          *param_1 = (ushort)((uVar2 << 0x14) >> 0x14);
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x080169f0 : FUN_080169f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080169f0(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009c8 = _DAT_08029000;
  DAT_200009ca = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_080157d4(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009cc = FUN_080157b8(0x8029008,(uint)DAT_200009c8 * 0xc);
    if (DAT_200009ca == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x08016a5c : FUN_08016a5c */

void FUN_08016a5c(byte param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) + 0x76;
  local_17 = param_2;
  uVar1 = FUN_080157d4(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  return;
}



/* ENTRY 0x08016abc : FUN_08016abc */

void FUN_08016abc(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_2c [16];
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  
  uVar5 = 0;
  bVar1 = false;
  for (uVar3 = 0; uVar3 < 0x14; uVar3 = uVar3 + 1 & 0xff) {
    local_2c[uVar3] = *(undefined1 *)(param_1 + uVar3);
  }
  uVar2 = FUN_080157d4(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if ((local_1a == *(char *)(param_1 + 0x12)) && ((char)uVar2 == *(char *)(param_1 + 0x13))) {
    uVar3 = local_1c & 1;
    if (local_1b == -0x43) {
      uVar5 = 2;
      bVar1 = true;
    }
    else if (local_1b == -0x59) {
      uVar5 = 6;
      bVar1 = true;
    }
    else if (local_1b == -0x5a) {
      uVar5 = 0;
      bVar1 = true;
    }
    else if (local_1b == -0x57) {
      uVar5 = 2;
      bVar1 = true;
    }
    else if (local_1b == -0x53) {
      uVar5 = 2;
      bVar1 = true;
    }
    else if (local_1b == -0x54) {
      uVar5 = 2;
      bVar1 = true;
    }
    else if (local_1b == -0x55) {
      uVar5 = 2;
      bVar1 = true;
    }
    if (((bVar1) && ((&DAT_20005127)[uVar3 * 0x308] != '\0')) &&
       ((&DAT_2000510e)[uVar3 * 0x308] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20005055)[uVar4 + uVar3 * 0x308] = local_2c[uVar4 + 2];
      }
      (&DAT_2000506d)[uVar3 * 0x308] = (char)uVar5;
      (&DAT_2000510e)[uVar3 * 0x308] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x08016c04 : FUN_08016c04 */

void FUN_08016c04(byte param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  if (param_2 == 0xa6) {
    for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
      auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    local_18 = (param_1 & 1) + 0x76;
    local_17 = 0xa6;
    uVar1 = FUN_080157d4(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800fb2c(&local_28);
  }
  return;
}



/* ENTRY 0x08016c70 : FUN_08016c70 */

undefined4 FUN_08016c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004e3d)[uVar1 + param_1 * 0x308] = (&DAT_08027ef4)[uVar1];
  }
  local_14 = param_4;
  FUN_0800c0f0(param_2,&DAT_20004e44 + param_1 * 0x308);
  (&DAT_20004e49)[param_1 * 0x308] = 0x30;
  (&DAT_20004e48)[param_1 * 0x308] = 0x30;
  (&DAT_20004e47)[param_1 * 0x308] = 0x30;
  (&DAT_20004e46)[param_1 * 0x308] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004e3d)[uVar1 + param_1 * 0x308] + uVar2;
  }
  FUN_0800c0f0((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_20004e4a)[param_1 * 0x308] = (undefined1)local_14;
  (&DAT_20004e4b)[param_1 * 0x308] = local_14._1_1_;
  FUN_0800c0f0(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_20004e4c)[param_1 * 0x308] = (undefined1)local_14;
  (&DAT_20004e4d)[param_1 * 0x308] = local_14._1_1_;
  (&DAT_20004e4e)[param_1 * 0x308] = 0xd;
  return 0x12;
}



/* ENTRY 0x08016dac : FUN_08016dac */

undefined4 FUN_08016dac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004e3d)[uVar1 + param_1 * 0x308] = (&DAT_08027ef4)[uVar1];
  }
  local_1c = param_4;
  FUN_0800c0f0(param_2,&DAT_20004e40 + param_1 * 0x308);
  FUN_0800c0f0(param_3,&DAT_20004e44 + param_1 * 0x308);
  (&DAT_20004e46)[param_1 * 0x308] = 0x45;
  (&DAT_20004e48)[param_1 * 0x308] = 0x30;
  (&DAT_20004e47)[param_1 * 0x308] = 0x30;
  (&DAT_20004e49)[param_1 * 0x308] = 0x32;
  FUN_0800c0f0(param_4,&local_1c);
  (&DAT_20004e4a)[param_1 * 0x308] = (undefined1)local_1c;
  (&DAT_20004e4b)[param_1 * 0x308] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004e3d)[uVar1 + param_1 * 0x308] + uVar2;
  }
  FUN_0800c0f0((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_20004e4c)[param_1 * 0x308] = (undefined1)local_1c;
  (&DAT_20004e4d)[param_1 * 0x308] = local_1c._1_1_;
  FUN_0800c0f0(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_20004e4e)[param_1 * 0x308] = (undefined1)local_1c;
  (&DAT_20004e4f)[param_1 * 0x308] = local_1c._1_1_;
  (&DAT_20004e50)[param_1 * 0x308] = 0xd;
  return 0x14;
}



/* ENTRY 0x08016f40 : FUN_08016f40 */

undefined4
FUN_08016f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0802086c(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004e3d)[uVar2 + param_1 * 0x308] = (&DAT_08027ef4)[uVar2];
  }
  FUN_0800c0f0(param_2,&DAT_20004e40 + param_1 * 0x308);
  FUN_0800c0f0(param_3,&DAT_20004e44 + param_1 * 0x308);
  FUN_0800c0f0((int)uVar1 >> 8,&local_24);
  (&DAT_20004e46)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e47)[param_1 * 0x308] = local_24._1_1_;
  FUN_0800c0f0(uVar1 & 0xff,&local_24);
  (&DAT_20004e48)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e49)[param_1 * 0x308] = local_24._1_1_;
  FUN_0800c0f0(param_4,&local_24);
  (&DAT_20004e4a)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e4b)[param_1 * 0x308] = local_24._1_1_;
  FUN_0800c0f0(param_5,&local_24);
  (&DAT_20004e4c)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e4d)[param_1 * 0x308] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004e3d)[uVar1 + param_1 * 0x308] + uVar3;
  }
  FUN_0800c0f0((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_20004e4e)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e4f)[param_1 * 0x308] = local_24._1_1_;
  FUN_0800c0f0(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_20004e50)[param_1 * 0x308] = (undefined1)local_24;
  (&DAT_20004e51)[param_1 * 0x308] = local_24._1_1_;
  (&DAT_20004e52)[param_1 * 0x308] = 0xd;
  return 0x16;
}



/* ENTRY 0x08017130 : FUN_08017130 */

int FUN_08017130(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0802086c((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004e3d)[uVar2 + param_1 * 0x308] = (&DAT_08027ef4)[uVar2];
  }
  FUN_0800c0f0(param_2,&DAT_20004e40 + param_1 * 0x308);
  FUN_0800c0f0(param_3,&DAT_20004e44 + param_1 * 0x308);
  FUN_0800c0f0((int)uVar1 >> 8,&local_28);
  (&DAT_20004e46)[param_1 * 0x308] = (byte)local_28;
  (&DAT_20004e47)[param_1 * 0x308] = local_28._1_1_;
  FUN_0800c0f0(uVar1 & 0xff,&local_28);
  (&DAT_20004e48)[param_1 * 0x308] = (byte)local_28;
  (&DAT_20004e49)[param_1 * 0x308] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004e3d)[uVar1 + param_1 * 0x308] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0800c0f0(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_20004e4a)[param_1 * 0x308 + uVar1 * 2] = (byte)local_28;
    (&DAT_20004e4b)[param_1 * 0x308 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + uVar3 + (byte)local_28;
  }
  FUN_0800c0f0((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_20004e4a)[param_1 * 0x308 + iVar4] = (byte)local_28;
  (&DAT_20004e4b)[param_1 * 0x308 + iVar4] = local_28._1_1_;
  FUN_0800c0f0(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_20004e4c)[param_1 * 0x308 + iVar4] = (byte)local_28;
  (&DAT_20004e4d)[param_1 * 0x308 + iVar4] = local_28._1_1_;
  (&DAT_20004e4e)[param_1 * 0x308 + iVar4] = 0xd;
  return iVar4 + 0x12;
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



/* ENTRY 0x08017400 : FUN_08017400 */

uint FUN_08017400(void)

{
  uint uVar1;
  
  if ((DAT_20004e26 == '\0') && (DAT_2000512e == '\0')) {
    uVar1 = ((uint)DAT_200050ca * 0x32) / (uint)DAT_200050ce +
            ((uint)DAT_200053d2 * 0x32) / (uint)DAT_200053d6 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* ENTRY 0x08017450 : FUN_08017450 */

uint FUN_08017450(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_20004e26 == '\0') && (DAT_2000512e == '\0')) {
    uVar1 = ((uint)DAT_200050ca * 100) / (uint)DAT_200050ce;
    uVar2 = ((uint)DAT_200053d2 * 100) / (uint)DAT_200053d6;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    if (100 < uVar2) {
      uVar2 = 100;
    }
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}



/* ENTRY 0x080174b0 : FUN_080174b0 */

void FUN_080174b0(void)

{
  DAT_20004e25 = 0;
  DAT_2000512d = 0;
  FUN_08018214();
  FUN_08011d04(0x2580);
  FUN_08011ea4(0x2580);
  return;
}



/* ENTRY 0x080174dc : FUN_080174dc */

void FUN_080174dc(undefined4 param_1)

{
  FUN_08016dac(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x080174ee : FUN_080174ee */

void FUN_080174ee(byte param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1d;
  local_17 = param_2;
  uVar1 = FUN_080157d4(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  return;
}



/* ENTRY 0x08017550 : FUN_08017550 */

void FUN_08017550(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 local_2c [16];
  byte local_1c;
  byte local_1b;
  char local_1a;
  char local_19;
  
  uVar4 = 0;
  cVar5 = '\0';
  for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
    local_2c[uVar2] = *(undefined1 *)(param_1 + uVar2);
  }
  uVar1 = FUN_080157d4(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar1 >> 8);
  local_19 = (char)uVar1;
  if (local_1a != *(char *)(param_1 + 0x12)) {
    return;
  }
  if ((char)uVar1 != *(char *)(param_1 + 0x13)) {
    return;
  }
  uVar2 = local_1c - 3 & 1;
  if (local_1b != 0xb8) {
    if (local_1b < 0xb9) {
      if (local_1b != 0xb1) {
        if (local_1b < 0xb2) {
          if (local_1b == 0x32) {
            uVar4 = 0xe;
            if (DAT_20003185 == '\x01') {
              cVar5 = DAT_20003185;
            }
            goto code_r0x08017650;
          }
          if (local_1b == 0x35) {
            uVar4 = 1;
            cVar5 = '\x01';
            goto code_r0x08017650;
          }
          if (local_1b != 0xa1) goto code_r0x08017650;
        }
        else {
          if (local_1b == 0xb2) goto LAB_08017608;
          if (local_1b != 0xb3) {
            if (local_1b != 0xb7) goto code_r0x08017650;
            goto LAB_08017620;
          }
        }
        uVar4 = 2;
        cVar5 = '\x01';
        goto code_r0x08017650;
      }
    }
    else if (local_1b != 0xbc) {
      if (local_1b < 0xbd) {
        if (local_1b != 0xb9) {
          if (local_1b == 0xba) goto LAB_08017616;
          if (local_1b != 0xbb) goto code_r0x08017650;
        }
      }
      else {
        if (local_1b == 0xbe) {
LAB_08017620:
          uVar4 = 1;
          cVar5 = '\x01';
          goto code_r0x08017650;
        }
        if (local_1b != 0xbf) {
          if ((local_1b == 0xff) && (uVar4 = 1, DAT_20003185 == '\x01')) {
            cVar5 = DAT_20003185;
          }
          goto code_r0x08017650;
        }
      }
LAB_08017608:
      uVar4 = 6;
      cVar5 = '\x01';
      goto code_r0x08017650;
    }
  }
LAB_08017616:
  uVar4 = 0;
  cVar5 = '\x01';
code_r0x08017650:
  if (((cVar5 != '\0') && ((&DAT_20005127)[uVar2 * 0x308] != '\0')) &&
     ((&DAT_2000510e)[uVar2 * 0x308] == '\0')) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_20005055)[uVar3 + uVar2 * 0x308] = local_2c[uVar3 + 2];
    }
    (&DAT_2000506d)[uVar2 * 0x308] = (char)uVar4;
    (&DAT_2000510e)[uVar2 * 0x308] = local_1b;
  }
  return;
}



/* ENTRY 0x080176d8 : FUN_080176d8 */

void FUN_080176d8(byte param_1,int param_2,char *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_28;
  undefined1 local_27;
  char acStack_26 [15];
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  local_17 = (undefined1)param_2;
  if (param_2 == 0xb8) {
    bVar3 = false;
    while (!bVar3) {
      acStack_26[0] = *param_3;
      bVar3 = true;
    }
    acStack_26[0xe] = (param_1 & 1) - 0x1d;
    uVar1 = FUN_080157d4(acStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800fb2c(&local_28);
    return;
  }
  if (param_2 < 0xb9) {
    if (param_2 == 0x35) {
      for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      uVar1 = FUN_080157d4(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800fb2c(&local_28);
      return;
    }
    if (param_2 == 0xa1) {
      for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xd] = 1;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_080157d4(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800fb2c(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      acStack_26[0xd] = 2;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_080157d4(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800fb2c(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      acStack_26[0xd] = 3;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_080157d4(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800fb2c(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if (((param_2 == 0xba) || (param_2 == 0xbc)) || (bVar3 = false, param_2 == 0xbe))
  goto LAB_08017812;
  if (!bVar3) {
    return;
  }
LAB_08017812:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    acStack_26[uVar2] = param_3[uVar2];
  }
  acStack_26[0xe] = (param_1 & 1) - 0x1d;
  uVar1 = FUN_080157d4(acStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  return;
}



/* ENTRY 0x080178e8 : FUN_080178e8 */

void FUN_080178e8(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009d2) {
  case '\0':
    local_10 = (int)DAT_2000507c;
    local_14 = (uint)DAT_200050d2;
    local_8 = (uint)DAT_200050c6;
    local_c = (uint)DAT_200050c8;
    FUN_0800f88c(0xf1,0,local_c,local_8,(int)DAT_200050ca,(int)DAT_200050ce,(int)DAT_200050d0);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_200050be;
    local_14 = (uint)DAT_200050bc;
    local_8 = (uint)DAT_200050b4;
    local_c = (uint)DAT_200050b2;
    FUN_0800f88c(0xf1,1,local_c,local_8,(int)DAT_200050b6,(int)DAT_200050b8,(int)DAT_200050ba);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_2000507c;
    local_14 = (uint)DAT_2000507a;
    local_8 = (uint)DAT_20005072;
    local_c = (uint)DAT_20005070;
    FUN_0800f88c(0xf1,2,local_c,local_8,(int)DAT_20005074,(int)DAT_20005076,(int)DAT_20005078);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_2000508a;
    local_14 = (uint)DAT_20005088;
    local_8 = (uint)DAT_20005080;
    local_c = (uint)DAT_2000507e;
    FUN_0800f88c(0xf1,3,local_c,local_8,(int)DAT_20005082,(int)DAT_20005084,(int)DAT_20005086);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20005098;
    local_14 = (uint)DAT_20005096;
    local_8 = (uint)DAT_2000508e;
    local_c = (uint)DAT_2000508c;
    FUN_0800f88c(0xf1,4,local_c,local_8,(int)DAT_20005090,(int)DAT_20005092,(int)DAT_20005094);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_200050a6;
    local_14 = (uint)DAT_200050a4;
    local_8 = (uint)DAT_2000509c;
    local_c = (uint)DAT_2000509a;
    FUN_0800f88c(0xf1,5,local_c,local_8,(int)DAT_2000509e,(int)DAT_200050a0,(int)DAT_200050a2);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200050aa;
    local_c = (uint)DAT_200050a8;
    FUN_0800f88c(0xf1,6,local_c,local_8,0,0,(int)DAT_200050c0);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20005384;
    local_14 = (uint)DAT_200053da;
    local_8 = (uint)DAT_200053ce;
    local_c = (uint)DAT_200053d0;
    FUN_0800f88c(0xf2,0,local_c,local_8,(int)DAT_200053d2,(int)DAT_200053d6,(int)DAT_200053d8);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_200053c6;
    local_14 = (uint)DAT_200053c4;
    local_8 = (uint)DAT_200053bc;
    local_c = (uint)DAT_200053ba;
    FUN_0800f88c(0xf2,1,local_c,local_8,(int)DAT_200053be,(int)DAT_200053c0,(int)DAT_200053c2);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20005384;
    local_14 = (uint)DAT_20005382;
    local_8 = (uint)DAT_2000537a;
    local_c = (uint)DAT_20005378;
    FUN_0800f88c(0xf2,2,local_c,local_8,(int)DAT_2000537c,(int)DAT_2000537e,(int)DAT_20005380);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20005392;
    local_14 = (uint)DAT_20005390;
    local_8 = (uint)DAT_20005388;
    local_c = (uint)DAT_20005386;
    FUN_0800f88c(0xf2,3,local_c,local_8,(int)DAT_2000538a,(int)DAT_2000538c,(int)DAT_2000538e);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_200053a0;
    local_14 = (uint)DAT_2000539e;
    local_8 = (uint)DAT_20005396;
    local_c = (uint)DAT_20005394;
    FUN_0800f88c(0xf2,4,local_c,local_8,(int)DAT_20005398,(int)DAT_2000539a,(int)DAT_2000539c);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_200053ae;
    local_14 = (uint)DAT_200053ac;
    local_8 = (uint)DAT_200053a4;
    local_c = (uint)DAT_200053a2;
    FUN_0800f88c(0xf2,5,local_c,local_8,(int)DAT_200053a6,(int)DAT_200053a8,(int)DAT_200053aa);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200053b2;
    local_c = (uint)DAT_200053b0;
    FUN_0800f88c(0xf2,6,local_c,local_8,0,0,(int)DAT_200053c8);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x0e':
    FUN_0800fa08(0xf3,0,&DAT_200050d6);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x0f':
    FUN_0800fa08(0xf3,1,&DAT_200050e4);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_200050f3,DAT_200050f2);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20005100,DAT_200050ff);
    local_10._0_3_ = CONCAT12(DAT_20005101,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20005102,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20005103;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20005106,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20005106 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20005108);
    FUN_0800fa08(0xf3,2,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_200050f5,DAT_200050f4);
    local_14._0_3_ = CONCAT12(DAT_200050f6,(ushort)local_14);
    local_14 = CONCAT13(DAT_200050f7,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_200050f9,DAT_200050f8);
    local_10._0_3_ = CONCAT12(DAT_200050fa,(undefined2)local_10);
    local_10 = CONCAT13(DAT_200050fb,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_200050fe,CONCAT11(DAT_200050fc,DAT_200050fd)) << 8;
    local_8._0_2_ = CONCAT11(DAT_2000510d,DAT_2000510c);
    FUN_0800fa08(0xf3,3,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x12':
    FUN_0800fa08(0xf4,0,&DAT_200053de);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x13':
    FUN_0800fa08(0xf4,1,&DAT_200053ec);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_200053fb,DAT_200053fa);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20005408,DAT_20005407);
    local_10._0_3_ = CONCAT12(DAT_20005409,(undefined2)local_10);
    local_10 = CONCAT13(DAT_2000540a,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_2000540b;
    local_c._0_3_ = CONCAT12((undefined1)DAT_2000540e,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_2000540e >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20005410);
    FUN_0800fa08(0xf4,2,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_200053fd,DAT_200053fc);
    local_14._0_3_ = CONCAT12(DAT_200053fe,(ushort)local_14);
    local_14 = CONCAT13(DAT_200053ff,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20005401,DAT_20005400);
    local_10._0_3_ = CONCAT12(DAT_20005402,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20005403,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20005406,CONCAT11(DAT_20005404,DAT_20005405)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20005415,DAT_20005414);
    FUN_0800fa08(0xf4,3,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004e2f;
    local_c = (uint)DAT_20004e26;
    FUN_0800f88c(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20005137;
    local_c = (uint)DAT_2000512e;
    FUN_0800f88c(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009d2 = '\0';
  }
  return;
}



/* ENTRY 0x08018174 : FUN_08018174 */

void FUN_08018174(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  if (param_3 == 1) {
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x200066f2) = 0;
  }
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_200066f1)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_200066f0)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_080157d4(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  return;
}



/* ENTRY 0x08018214 : FUN_08018214 */

void FUN_08018214(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200066f0)[uVar1 * 0x11] = (&DAT_08027f1a)[uVar1];
    (&DAT_200066f1)[uVar1 * 0x11] = (&DAT_08027efb)[uVar1];
    (&DAT_20006800)[uVar1 * 0x11] = (&DAT_08027f1a)[uVar1];
    (&DAT_20006801)[uVar1 * 0x11] = (&DAT_08027efb)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006910)[uVar1 * 0x11] = (&DAT_08027f2a)[uVar1];
    (&DAT_20006911)[uVar1 * 0x11] = (&DAT_08027f0b)[uVar1];
    (&DAT_20006a0f)[uVar1 * 0x11] = (&DAT_08027f2a)[uVar1];
    (&DAT_20006a10)[uVar1 * 0x11] = (&DAT_08027f0b)[uVar1];
  }
  return;
}



/* ENTRY 0x080182b4 : FUN_080182b4 */

void FUN_080182b4(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_36;
  undefined1 local_35;
  char local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  char local_30 [16];
  byte local_20;
  byte local_1f;
  char local_1e;
  char local_1d;
  
  uVar4 = 0;
  for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
    local_30[uVar2] = *(char *)(param_1 + uVar2);
  }
  uVar1 = FUN_080157d4(local_30 + 2,0x10);
  local_1e = (char)((ushort)uVar1 >> 8);
  local_1d = (char)uVar1;
  if (local_1e != *(char *)(param_1 + 0x12)) {
    return;
  }
  if ((char)uVar1 != *(char *)(param_1 + 0x13)) {
    return;
  }
  uVar5 = local_20 & 1;
  uVar2 = (uint)local_1f;
  if (uVar2 == 0xd8) {
LAB_08018438:
    uVar4 = uVar4 + 4;
LAB_08018450:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08018456:
    uVar4 = uVar4 + 1 & 0xff;
LAB_0801845c:
    uVar4 = uVar4 + 1 & 0xff;
  }
  else {
    if (0xd8 < uVar2) {
      uVar3 = uVar2 - 0xd9;
      bVar7 = true;
      switch(uVar2) {
      case 0xe6:
        uVar4 = 1;
      case 0xe4:
        uVar4 = uVar4 + 1;
      case 0xe2:
        uVar4 = uVar4 + 1;
      case 0xe0:
        uVar4 = uVar4 + 1;
      case 0xde:
        uVar4 = uVar4 + 1;
      case 0xdc:
        uVar4 = uVar4 + 1;
      case 0xda:
        uVar4 = uVar4 + 1;
        break;
      case 0xe7:
        uVar4 = 1;
      case 0xe5:
        uVar4 = uVar4 + 1;
      case 0xe3:
        uVar4 = uVar4 + 1;
      case 0xe1:
        uVar4 = uVar4 + 1;
      case 0xdf:
        uVar4 = uVar4 + 1;
      case 0xdd:
        uVar4 = uVar4 + 1;
      case 0xdb:
        uVar4 = uVar4 + 1;
      case 0xd9:
        uVar4 = uVar4 + 5;
LAB_0801856c:
        uVar4 = uVar4 + 1 & 0xff;
LAB_08018572:
        uVar4 = uVar4 + 1 & 0xff;
LAB_08018578:
        if ((&DAT_20005127)[uVar5 * 0x308] == '\0') {
          return;
        }
        if ((&DAT_2000510e)[uVar5 * 0x308] != '\0') {
          return;
        }
        (&DAT_2000506d)[uVar5 * 0x308] = 0;
        (&DAT_2000510e)[uVar5 * 0x308] = local_1f;
        (&DAT_20006912)[uVar5 * 0xff + uVar4 * 0x11] = 1;
        return;
      default:
switchD_08018358_default:
        if (bVar7) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x08018346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0801834a + (uint)(byte)(&UNK_0801834a)[uVar3] * 2))();
        return;
      }
      goto LAB_08018438;
    }
    if (uVar2 == 0xd0) goto LAB_08018450;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_08018358_default;
    }
    if (uVar2 == 0xae) goto LAB_0801845c;
    if (0xae < uVar2) {
      if (uVar2 == 0xaf) goto LAB_08018572;
      if (uVar2 != 0xb5) {
        bVar7 = false;
        if (uVar2 == 0xb6) goto LAB_0801856c;
        goto LAB_0801832e;
      }
      goto LAB_08018456;
    }
    if (uVar2 == 1) {
      uVar6 = 1;
      uVar2 = 0;
      do {
        if (5 < uVar2) {
code_r0x08018392:
          DAT_20005127 = uVar6;
          DAT_2000542f = uVar6;
          FUN_08008582(&local_44,0x14);
          local_44 = 0xaa;
          local_43 = 0x55;
          local_41 = 0;
          local_3f = 0;
          local_36 = 0;
          local_35 = 0;
          local_34 = (char)uVar5 + 't';
          local_33 = 1;
          local_42 = uVar6;
          local_40 = uVar6;
          uVar1 = FUN_080157d4(&local_42,0x10);
          local_32 = (undefined1)((ushort)uVar1 >> 8);
          local_31 = (undefined1)uVar1;
          FUN_0800fac0(&local_44);
          return;
        }
        if (local_30[uVar2 + 2] != (&DAT_08027eee)[uVar2]) {
          uVar6 = 0;
          goto code_r0x08018392;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while( true );
    }
    if (uVar2 == 0xa0) goto LAB_08018578;
    if (uVar2 == 0xa4) goto LAB_08018468;
    bVar7 = uVar2 == 0xa8;
LAB_0801832e:
    if (!bVar7) {
      return;
    }
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_08018468:
  if (((&DAT_20005127)[uVar5 * 0x308] != '\0') && ((&DAT_2000510e)[uVar5 * 0x308] == '\0')) {
    for (uVar2 = 0; uVar2 < (byte)(&DAT_200066f1)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20005055)[uVar2 + uVar5 * 0x308] = local_30[uVar2 + 2];
    }
    (&DAT_2000506d)[uVar5 * 0x308] = (&DAT_200066f1)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_2000510e)[uVar5 * 0x308] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x200066f2) = 1;
  }
  return;
}



/* ENTRY 0x080185f4 : FUN_080185f4 */

void FUN_080185f4(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006911)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x20006913 + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006910)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_080157d4(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  (&DAT_20006912)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x080186a0 : FUN_080186a0 */

void FUN_080186a0(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(byte *)(param_1 + 0x10) - 1 & 1;
  bVar1 = true;
  if ((*(char *)(param_1 + 2) == 'K') && (*(char *)(param_1 + 3) == 'S')) {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_08023080(uVar3);
  }
  else if (((&DAT_20005127)[uVar3 * 0x308] != '\0') && ((&DAT_2000510e)[uVar3 * 0x308] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20005055)[uVar2 + uVar3 * 0x308] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20005063)[uVar3 * 0x308 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20005066)[uVar3 * 0x308 + uVar2] = 0x30;
    }
    (&DAT_2000506d)[uVar3 * 0x308] = 0x14;
    (&DAT_2000510e)[uVar3 * 0x308] = 0xc3;
  }
  return;
}



/* ENTRY 0x08018790 : FUN_08018790 */

void FUN_08018790(byte param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [14];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1f;
  local_17 = 0xc3;
  uVar1 = FUN_080157d4(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800fb2c(&local_28);
  return;
}



/* ENTRY 0x080187f4 : FUN_080187f4 */

undefined4 FUN_080187f4(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (&DAT_20004e30)[param_1 * 0x308];
  if (bVar1 != 0x61) {
    if (bVar1 < 0x62) {
      if (bVar1 == 0x30) {
        if ((&DAT_20004e31)[param_1 * 0x308] == '\0') {
          *(undefined2 *)(&DAT_20004e2c + param_1 * 0x308) = 0;
          *(undefined2 *)(&DAT_20004e32 + param_1 * 0x308) = 0;
          FUN_08018c08(param_1);
          (&DAT_20004e31)[param_1 * 0x308] = 0x32;
          return 1;
        }
        if (((&DAT_20004e2b)[param_1 * 0x308] == '1') &&
           ((&DAT_20004e29)[param_1 * 0x308] == '\x01')) {
          (&DAT_20004e30)[param_1 * 0x308] = 0x31;
          (&DAT_20004e31)[param_1 * 0x308] = 0x14;
          *(undefined2 *)(&DAT_20004e32 + param_1 * 0x308) = 0;
          FUN_08018d38(param_1,*(undefined2 *)(&DAT_20004e32 + param_1 * 0x308));
          return 1;
        }
        (&DAT_20004e31)[param_1 * 0x308] = (&DAT_20004e31)[param_1 * 0x308] + -1;
        return 0;
      }
      if (bVar1 < 0x31) {
        if (bVar1 != 0) {
          return 0;
        }
        iVar2 = FUN_080211e8();
        if (iVar2 != 0) {
          if ((&DAT_20004e2e)[param_1 * 0x308] == '\x01') {
            return 0;
          }
          (&DAT_20004e30)[param_1 * 0x308] = 0x30;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
          *(undefined2 *)(&DAT_20004e2c + param_1 * 0x308) = 0;
          *(undefined2 *)(&DAT_20004e32 + param_1 * 0x308) = 0;
          return 0;
        }
        return 0;
      }
      if (bVar1 != 0x31) {
        return 0;
      }
      if ((&DAT_20004e31)[param_1 * 0x308] == '\0') {
        if ((*(ushort *)(&DAT_20004e32 + param_1 * 0x308) < DAT_200009c8) &&
           (*(ushort *)(&DAT_20004e2c + param_1 * 0x308) < DAT_200009c8)) {
          (&DAT_20004e30)[param_1 * 0x308] = 0x30;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
        }
        else {
          (&DAT_20004e30)[param_1 * 0x308] = 0x32;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
        }
        return 0;
      }
      if ((&DAT_20004e29)[param_1 * 0x308] == '\x01') {
        if ((&DAT_20004e2b)[param_1 * 0x308] == '1') {
          if (*(ushort *)(&DAT_20004e2c + param_1 * 0x308) < DAT_200009c8) {
            (&DAT_20004e31)[param_1 * 0x308] = 0x14;
            *(undefined2 *)(&DAT_20004e32 + param_1 * 0x308) =
                 *(undefined2 *)(&DAT_20004e2c + param_1 * 0x308);
            FUN_08018d38(param_1,*(undefined2 *)(&DAT_20004e32 + param_1 * 0x308));
            return 1;
          }
          if ((uint)*(ushort *)(&DAT_20004e2c + param_1 * 0x308) < DAT_200009c8 + 0x24) {
            (&DAT_20004e30)[param_1 * 0x308] = 0x32;
            (&DAT_20004e31)[param_1 * 0x308] = 0x14;
            *(undefined2 *)(&DAT_20004e32 + param_1 * 0x308) =
                 *(undefined2 *)(&DAT_20004e2c + param_1 * 0x308);
            FUN_08018d38(param_1,*(undefined2 *)(&DAT_20004e32 + param_1 * 0x308));
            return 1;
          }
          (&DAT_20004e30)[param_1 * 0x308] = 0x32;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
          return 1;
        }
        if ((&DAT_20004e2b)[param_1 * 0x308] == '2') {
          (&DAT_20004e30)[param_1 * 0x308] = 0x32;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
          return 1;
        }
        if ((&DAT_20004e2b)[param_1 * 0x308] == '0') {
          (&DAT_20004e30)[param_1 * 0x308] = 0x30;
          (&DAT_20004e31)[param_1 * 0x308] = 0;
          return 0;
        }
      }
      (&DAT_20004e31)[param_1 * 0x308] = (&DAT_20004e31)[param_1 * 0x308] + -1;
      return 0;
    }
    if ((((bVar1 != 0x62) && (bVar1 != 99)) && (bVar1 != 100)) && (bVar1 != 0x65)) {
      return 0;
    }
  }
  (&DAT_20004e38)[param_1 * 0xc2] = 0;
  (&DAT_20004e30)[param_1 * 0x308] = 0;
  return 0;
}



/* ENTRY 0x08018c08 : FUN_08018c08 */

void FUN_08018c08(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_200009ca;
  (&DAT_20004e28)[param_1 * 0x308] = 0x30;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  (&DAT_20005055)[param_1 * 0x308] = (char)((ushort)uVar1 >> 8);
  (&DAT_20005056)[param_1 * 0x308] = (char)uVar1;
  (&DAT_20005061)[param_1 * 0x308] = (undefined1)DAT_200009c8;
  (&DAT_20005062)[param_1 * 0x308] = (char)((ushort)DAT_200009c8 >> 8);
  (&DAT_20005063)[param_1 * 0x308] = 0x7a;
  (&DAT_20005064)[param_1 * 0x308] = 0x30;
  uVar2 = FUN_08017130(param_1,0,0x3d,0x10,&DAT_20005055 + param_1 * 0x308);
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,uVar2);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,uVar2);
  }
  return;
}



/* ENTRY 0x08018d38 : FUN_08018d38 */

void FUN_08018d38(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = (uint)DAT_200009c8;
  uVar7 = DAT_200009c8 - param_2 & 0xffff;
  if (0x23 < uVar7) {
    uVar7 = 0x24;
  }
  uVar6 = uVar7 * 0xc & 0xffff;
  (&DAT_20004e28)[param_1 * 0x308] = 0x31;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  uVar2 = (undefined1)(param_2 >> 8);
  if ((param_2 == 0xffff) || (DAT_200009c8 < param_2)) {
    (&DAT_20005055)[param_1 * 0x308] = 0;
    (&DAT_20005056)[param_1 * 0x308] = 0;
    (&DAT_20005057)[param_1 * 0x308] = 0;
    (&DAT_20005058)[param_1 * 0x308] = 0;
    (&DAT_20005061)[param_1 * 0x308] = (char)param_2;
    (&DAT_20005062)[param_1 * 0x308] = uVar2;
    (&DAT_20005063)[param_1 * 0x308] = 0x7a;
    (&DAT_20005064)[param_1 * 0x308] = 0x31;
    uVar4 = FUN_08017130(param_1,0,0x3d,0x10,&DAT_20005055 + param_1 * 0x308);
  }
  else {
    for (uVar5 = 0; uVar5 < uVar6; uVar5 = uVar5 + 1 & 0xffff) {
      bVar1 = *(byte *)(param_2 * 0xc + 0x8029008 + uVar5);
      param_4 = (uint)bVar1;
      (&DAT_20004e7d)[param_1 * 0x308 + uVar5] = bVar1;
    }
    uVar3 = FUN_080157d4(param_2 * 0xc + 0x8029008,uVar6,0x8029008,param_4,param_3,
                         uVar4 * 0xc + param_2 * -0xc);
    (&DAT_20005055)[param_1 * 0x308] = (char)((ushort)uVar3 >> 8);
    (&DAT_20005056)[param_1 * 0x308] = (char)uVar3;
    (&DAT_20005057)[param_1 * 0x308] = (char)uVar7;
    (&DAT_20005058)[param_1 * 0x308] = (char)(uVar7 >> 8);
    (&DAT_20005061)[param_1 * 0x308] = (char)param_2;
    (&DAT_20005062)[param_1 * 0x308] = uVar2;
    (&DAT_20005063)[param_1 * 0x308] = 0x7a;
    (&DAT_20005064)[param_1 * 0x308] = 0x31;
    FUN_08017130(param_1,0,0x3d,0x10,&DAT_20005055 + param_1 * 0x308);
    uVar4 = uVar6 + 0x40 & 0xffff;
    (&DAT_20004e38)[param_1 * 0xc2] = param_2 * 0xc;
  }
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,uVar4);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,uVar4);
  }
  return;
}



/* ENTRY 0x08018fd4 : FUN_08018fd4 */

void FUN_08018fd4(int param_1)

{
  (&DAT_20004e28)[param_1 * 0x308] = 0x61;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 0x61;
  (&DAT_20004e40)[param_1 * 0x308] = 0;
  (&DAT_20004e41)[param_1 * 0x308] = 0x9e;
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,5);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,5);
  }
  return;
}



/* ENTRY 0x080190a0 : FUN_080190a0 */

void FUN_080190a0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009cc;
  uVar2 = (uint)DAT_200009c8 * 3;
  bVar3 = 0;
  (&DAT_20004e28)[param_1 * 0x308] = 0x62;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 0x62;
  (&DAT_20004e40)[param_1 * 0x308] = 6;
  (&DAT_20004e41)[param_1 * 0x308] = 0;
  (&DAT_20004e42)[param_1 * 0x308] = (char)(uVar2 >> 0xe);
  (&DAT_20004e43)[param_1 * 0x308] = (char)(uVar2 >> 6);
  (&DAT_20004e44)[param_1 * 0x308] = (char)uVar2 * '\x04';
  (&DAT_20004e45)[param_1 * 0x308] = (char)((ushort)uVar1 >> 8);
  (&DAT_20004e46)[param_1 * 0x308] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_20004e3d)[uVar2 + param_1 * 0x308];
  }
  (&DAT_20004e47)[param_1 * 0x308] = bVar3;
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,0xb);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,0xb);
  }
  return;
}



/* ENTRY 0x0801920c : FUN_0801920c */

void FUN_0801920c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_200009c8 * 0xc - param_2;
  bVar2 = 0;
  if (uVar3 < 0x80) {
    uVar3 = uVar3 + 4 & 0xff;
  }
  else {
    uVar3 = 0x84;
  }
  (&DAT_20004e28)[param_1 * 0x308] = 99;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 99;
  (&DAT_20004e40)[param_1 * 0x308] = (char)uVar3;
  (&DAT_20004e41)[param_1 * 0x308] = (char)((uint)param_2 >> 0x18);
  (&DAT_20004e42)[param_1 * 0x308] = (char)((uint)param_2 >> 0x10);
  (&DAT_20004e43)[param_1 * 0x308] = (char)((uint)param_2 >> 8);
  (&DAT_20004e44)[param_1 * 0x308] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_20004e3d)[uVar1 + param_1 * 0x308];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004e45)[param_1 * 0x308 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_20004e45)[param_1 * 0x308 + uVar1];
  }
  (&DAT_20004e41)[param_1 * 0x308 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,uVar3 + 5);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,uVar3 + 5);
  }
  return;
}



/* ENTRY 0x080193b4 : FUN_080193b4 */

void FUN_080193b4(int param_1)

{
  (&DAT_20004e28)[param_1 * 0x308] = 100;
  (&DAT_20004e29)[param_1 * 0x308] = 0;
  (&DAT_20004e3d)[param_1 * 0x308] = 0xaa;
  (&DAT_20004e3e)[param_1 * 0x308] = 0x55;
  (&DAT_20004e3f)[param_1 * 0x308] = 100;
  (&DAT_20004e40)[param_1 * 0x308] = 0;
  (&DAT_20004e41)[param_1 * 0x308] = 0x9b;
  if (param_1 == 0) {
    DAT_20005128 = DAT_20005128 + 1;
    FUN_08009f74(&DAT_20004e3d,5);
  }
  else {
    DAT_20005430 = DAT_20005430 + 1;
    FUN_08009fd8(&DAT_20004e3d + param_1 * 0x308,5);
  }
  return;
}



/* ENTRY 0x08019480 : FUN_08019480 */

void FUN_08019480(int param_1,int param_2)

{
  *(undefined2 *)(&DAT_20004e2c + param_1 * 0x308) = *(undefined2 *)(param_2 + 0xc);
  (&DAT_20004e2b)[param_1 * 0x308] = *(undefined1 *)(param_2 + 0xf);
  (&DAT_20004e2a)[param_1 * 0x308] = *(undefined1 *)(param_2 + 4);
  (&DAT_20004e29)[param_1 * 0x308] = 1;
  return;
}



/* ENTRY 0x080194d0 : FUN_080194d0 */

undefined4 FUN_080194d0(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_20004e27)[param_1 * 0x308] == '\0') && ((&DAT_20004e2e)[param_1 * 0x308] == '\0')) {
    (&DAT_20004e27)[param_1 * 0x308] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08019518 : FUN_08019518 */

byte FUN_08019518(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  bVar1 = (&DAT_20004e30)[param_1 * 0x308];
  if (bVar1 == 99) {
    if (((&DAT_20004e2a)[param_1 * 0x308] == '\0') && ((&DAT_20004e29)[param_1 * 0x308] == 'c')) {
      if ((uint)DAT_200009c8 * 0xc < (&DAT_20004e38)[param_1 * 0xc2] + 0x80) {
        (&DAT_20004e30)[param_1 * 0x308] = 100;
        FUN_080193b4(param_1);
        return 1;
      }
      (&DAT_20004e30)[param_1 * 0x308] = 99;
      (&DAT_20004e38)[param_1 * 0xc2] = (&DAT_20004e38)[param_1 * 0xc2] + 0x80;
      FUN_0801920c(param_1,(&DAT_20004e38)[param_1 * 0xc2]);
      return 1;
    }
    (&DAT_20004e30)[param_1 * 0x308] = 0x61;
    FUN_08018fd4(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      iVar2 = FUN_080211e8();
      if (iVar2 == 1) {
        return 0;
      }
      if ((&DAT_20004e2e)[param_1 * 0x308] == '\x01') {
        return 0;
      }
      (&DAT_20004e30)[param_1 * 0x308] = 0x61;
      FUN_08018fd4(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_20004e2a)[param_1 * 0x308] == '\0') && ((&DAT_20004e29)[param_1 * 0x308] == 'a')) {
        (&DAT_20004e30)[param_1 * 0x308] = 0x62;
        FUN_080190a0(param_1);
        return 1;
      }
      (&DAT_20004e30)[param_1 * 0x308] = 0x61;
      FUN_08018fd4(param_1);
      return 0;
    }
    bVar3 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_20004e2a)[param_1 * 0x308] == '\0') && ((&DAT_20004e29)[param_1 * 0x308] == 'c')) {
        (&DAT_20004e30)[param_1 * 0x308] = 0x65;
        return 0;
      }
      (&DAT_20004e30)[param_1 * 0x308] = 0x61;
      FUN_08018fd4(param_1);
      return 0;
    }
    bVar3 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar3) {
    if (((&DAT_20004e2a)[param_1 * 0x308] == '\0') && ((&DAT_20004e29)[param_1 * 0x308] == 'b')) {
      (&DAT_20004e30)[param_1 * 0x308] = 99;
      (&DAT_20004e38)[param_1 * 0xc2] = 0;
      FUN_0801920c(param_1,(&DAT_20004e38)[param_1 * 0xc2]);
      bVar1 = 1;
    }
    else {
      (&DAT_20004e30)[param_1 * 0x308] = 0x61;
      FUN_08018fd4(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x0801979c : FUN_0801979c */

undefined4 FUN_0801979c(char *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*param_1 == -0x56) {
    if (param_1[1] == 'U') {
      for (uVar2 = 0; uVar2 < (byte)param_1[3] + 4; uVar2 = uVar2 + 1 & 0xff) {
        bVar3 = bVar3 ^ param_1[uVar2];
      }
      if (param_1[(byte)param_1[3] + 4] == bVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x080197da : FUN_080197da */

void FUN_080197da(int param_1)

{
  FUN_08023158(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x080197f0 : FUN_080197f0 */

void FUN_080197f0(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint in_r3;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint local_30;
  undefined4 local_28;
  
  iVar7 = 0;
  bVar1 = false;
  local_28 = in_r3;
  iVar4 = FUN_0801f704();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_20003185 != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_20003185 == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_20003185 != '\0')) {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = 2;
  }
  if (DAT_20000876 < 0x32) {
    DAT_20000876 = DAT_20000876 + 1;
    if (diag_cartstep == '\b') {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_2000401a)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_2000401a)[uVar5] = 0;
      }
    }
    FUN_08022fe4(&DAT_2000401a);
  }
  else {
    if (diag_cartstep == '\0') {
      bVar1 = false;
      bVar8 = false;
    }
    else if (diag_cartstep == '\b') {
      bVar1 = false;
      bVar8 = false;
      DAT_20000876 = 0;
    }
    else {
      if ((((ushort)DAT_200006b4 & 3) == 0) &&
         (((1000 < diag_VehicleSpeed && (diag_speedAcc < -0x14)) ||
          ((diag_VehicleSpeed < -1000 && (0x14 < diag_speedAcc)))))) {
        DAT_20000864 = 0x14;
        DAT_20000868 = 0;
      }
      DAT_2000086c = DAT_2000086c + 1;
      if (DAT_2000086c == (DAT_2000086c / 2) * 2) {
        if (DAT_20000870 == 0) {
          DAT_20000870 = 1;
        }
        else {
          DAT_20000870 = 0;
        }
      }
      if ((DAT_20000868 < DAT_20000864) && ((DAT_20003212 & 0xf) == 0)) {
        bVar1 = true;
        bVar8 = true;
        iVar6 = DAT_20000864 - (DAT_20000868 + 1);
        DAT_20000874 = 0;
        DAT_20000868 = DAT_20000868 + 1;
      }
      else {
        DAT_20000868 = 0;
        DAT_20000864 = 0;
        iVar6 = 4;
        if ((DAT_20003212 & 0xf) == 1) {
          if (DAT_20000870 == 1) {
            bVar8 = iVar7 != 1;
            if (iVar7 != 2) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            bVar8 = false;
          }
          DAT_20000874 = 0;
        }
        else if ((DAT_200006c4 == 0x12) || ((DAT_200006c4 == 0x14 && (DAT_200006cc == '\x01')))) {
          bVar1 = true;
          bVar8 = true;
          if (iVar7 == 1) {
            DAT_20000874 = DAT_20000874 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_08027d2e)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000874 = DAT_20000874 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_08027d40)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000874 = 0;
          }
        }
        else {
          bVar1 = false;
          bVar8 = false;
          if (iVar7 == 1) {
            DAT_20000874 = DAT_20000874 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_08027d2e)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000874 = DAT_20000874 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_08027d40)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000874 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_2000401a)[uVar5] = 0;
    }
    if (DAT_20003185 == '\0') {
      if (DAT_20000874 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_2000401b)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_2000401a = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_2000401b = DAT_2000401a;
        }
        else if (bVar8) {
          DAT_20004029 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_2000402a = DAT_20004029;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_2000401a)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000825)[uVar5] * 0x14) / 0x28);
          (&DAT_2000401b)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000825)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08020494();
        (&DAT_2000401a)[extraout_r3 * 3] = 0;
        (&DAT_2000401b)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_2000401c)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_20003210 == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08020494();
        bVar3 = DAT_2000321a;
        bVar2 = DAT_20003218;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_20003218,(ushort)DAT_20003219);
        (&DAT_2000401a)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_2000401b)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_2000401c)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_2000401a)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_2000401a)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_2000401b)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_2000401b)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_2000401c)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_2000401c)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_20003210 == 1) {
      FUN_08020828(&local_28,(ushort)DAT_200006b4);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08020494();
        (&DAT_2000401a)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_2000401b)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_2000401c)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_08020828(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006b4 * -10 & 0xffff);
        (&DAT_2000401a)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_2000401b)[uVar5 * 3] = local_28._1_1_;
        (&DAT_2000401c)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_08022fe4(&DAT_2000401a);
  }
  return;
}



/* ENTRY 0x08019dd8 : FUN_08019dd8 */

void FUN_08019dd8(void)

{
  FUN_0801ff5c();
  FUN_0800c144(4,0xad9);
  FUN_0801f16c();
  FUN_080225b8();
  FUN_0801f674();
  FUN_0800ca0e();
  return;
}



/* ENTRY 0x08019e08 : FUN_08019e08 */

void FUN_08019e08(undefined1 param_1)

{
  DAT_200065b4 = 0x1451090;
  DAT_200065b8 = FUN_0800f21c();
  DAT_200065bc = param_1;
  DAT_200065c2 = (char)(diag_TotalVol_show / 100);
  DAT_200065c4 = DAT_20003132;
  DAT_200065c5 = 0;
  DAT_200065c3 = DAT_20003131;
  DAT_200065c1 = DAT_20003130;
  DAT_200065bd = DAT_2000312c;
  DAT_200065c9 = DAT_20003133;
  DAT_200065ca = (char)(DAT_20003128 / 100);
  DAT_200065c8 = (char)(DAT_2000311c / 1000);
  DAT_200065c6 = DAT_20003134;
  DAT_200065cb = diag_readoutmeter;
  DAT_200065cf = (short)(diag_currentmeter / 100);
  DAT_200065d1 = (undefined2)DAT_20003144;
  DAT_200065d8 = (undefined2)diag_curr_wsp;
  DAT_200065da = (undefined2)diag_curr_wsn;
  DAT_200065d4 = (char)(DAT_20003124 / 100);
  DAT_200065d5 = (char)(DAT_20003120 / 100);
  DAT_200065d6 = DAT_20003136;
  DAT_200065d7 = DAT_20003137;
  return;
}



/* ENTRY 0x08019f1c : FUN_08019f1c */

void FUN_08019f1c(undefined1 param_1)

{
  DAT_200066a6 = param_1;
  return;
}



/* ENTRY 0x08019f28 : FUN_08019f28 */

undefined4 FUN_08019f28(undefined4 param_1)

{
  FUN_0801a2b4(param_1);
  FUN_08008494(&DAT_20006534,&DAT_20006574,0x40);
  return 1;
}



/* ENTRY 0x08019f4c : FUN_08019f4c */

bool FUN_08019f4c(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08008494(&DAT_20006534,(uint)DAT_200009d4 * 0x40 + 0x20005534,0x40);
    }
    (&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] != '\0') &&
       ((byte)(&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20006534,(uint)DAT_200009d4 * 0x40 + 0x20005534,0x40);
      bVar1 = true;
    }
    (&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] != '\0') &&
       ((byte)(&DAT_2000553c)[(uint)DAT_200009d4 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20006534,(uint)DAT_200009d4 * 0x40 + 0x20005534,0x40);
      bVar1 = true;
    }
    FUN_0801a2b4(param_1);
    FUN_08008494((uint)DAT_200009d4 * 0x40 + 0x20005534,&DAT_20006574,0x40);
  }
  DAT_200009d4 = DAT_200009d4 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x0801a048 : FUN_0801a048 */

void FUN_0801a048(void)

{
  undefined2 uVar1;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  if (DAT_20006676 == '#') {
    local_1a = (undefined1)DAT_20006651;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20006651 >> 8);
    local_18 = (undefined1)DAT_20006661;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20006661 >> 8);
    local_16 = (undefined1)DAT_20006669;
    local_15 = (undefined1)(DAT_20006669 >> 8);
    local_14 = (undefined1)DAT_20006665;
    local_13 = (undefined1)((uint)DAT_20006665 >> 8);
    local_12 = (undefined1)((uint)DAT_20006665 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20006665 >> 0x18);
    local_10 = (undefined1)DAT_2000666d;
    local_f = (undefined1)((uint)DAT_2000666d >> 8);
    local_e = (undefined1)((uint)DAT_2000666d >> 0x10);
    local_d = (undefined1)((uint)DAT_2000666d >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_080157d4(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800fb98(0xf9,0x23,&local_1a);
    DAT_20006676 = '\0';
  }
  else if (DAT_20006676 == -0x5d) {
    local_1a = (undefined1)DAT_20006686;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20006686 >> 8);
    local_18 = (undefined1)DAT_20006696;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20006696 >> 8);
    local_16 = (undefined1)DAT_2000669e;
    local_15 = (undefined1)(DAT_2000669e >> 8);
    local_14 = (undefined1)DAT_2000669a;
    local_13 = (undefined1)((uint)DAT_2000669a >> 8);
    local_12 = (undefined1)((uint)DAT_2000669a >> 0x10);
    local_11 = (undefined1)((uint)DAT_2000669a >> 0x18);
    local_10 = (undefined1)DAT_200066a2;
    local_f = (undefined1)((uint)DAT_200066a2 >> 8);
    local_e = (undefined1)((uint)DAT_200066a2 >> 0x10);
    local_d = (undefined1)((uint)DAT_200066a2 >> 0x18);
    local_c = 0xf9;
    local_b = 0xa3;
    uVar1 = FUN_080157d4(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800fb98(0xf9,0xa3,&local_1a);
    DAT_20006676 = '\0';
  }
  else if (DAT_20006676 == 'a') {
    if (DAT_20006669 < DAT_200066ac) {
      FUN_08015e80(0);
      DAT_200066ac = DAT_200066ac - 1;
    }
    else {
      FUN_08015e80(0);
      DAT_20006676 = '\0';
    }
  }
  else if (DAT_20006676 == -0x1f) {
    if (DAT_2000669e < DAT_200066ac) {
      FUN_08015e80(0x10000);
      DAT_200066ac = DAT_200066ac - 1;
    }
    else {
      FUN_08015e80(0x10000);
      DAT_20006676 = '\0';
    }
  }
  return;
}



/* ENTRY 0x0801a2a8 : FUN_0801a2a8 */

void FUN_0801a2a8(undefined1 param_1)

{
  DAT_20006677 = param_1;
  return;
}



/* ENTRY 0x0801a2b4 : FUN_0801a2b4 */

void FUN_0801a2b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0801f710();
    DAT_20006574 = 0x1451090;
    DAT_2000657c = (undefined1)param_1;
    DAT_20006578 = FUN_0800f21c();
    DAT_2000657d = diag_cartstep;
    DAT_2000657e = (undefined1)((uint)uVar1 >> 8);
    DAT_2000657f = (undefined1)uVar1;
    DAT_20006581 = diag_allwarnbit;
    DAT_20006580 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20006586 = (undefined2)diag_TotalVoltage;
    DAT_20006588 = (undefined2)diag_TotalCurrent;
    DAT_2000658a = (undefined2)(diag_VehicleSpeed / 100);
    DAT_2000658c = (undefined2)diag_VectorVol;
    DAT_2000658e = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0801f704();
    DAT_20006590 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801f6ec();
    DAT_20006592 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801f6f8();
    DAT_20006594 = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20006595 = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20006598 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20006596 = 0x82;
      }
      else {
        DAT_20006596 = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20006596 = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20006597 = 0x82;
      }
      else {
        DAT_20006597 = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20006597 = 0x7f;
    }
    DAT_20006599 = 0;
    if (diag_hall_err < 0x100) {
      DAT_2000659a = (undefined1)diag_hall_err;
    }
    else {
      DAT_2000659a = 0xff;
    }
  }
  return;
}



/* ENTRY 0x0801a41c : FUN_0801a41c */

undefined4 FUN_0801a41c(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_080155a4((uVar3 + param_3) * 0x40);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_080155a4((*param_2 + param_3) * 0x40);
    if (iVar1 == -1) {
      iVar1 = FUN_080155a4((*param_1 + param_3) * 0x40);
      if (iVar1 == -1) {
        *param_2 = *param_1;
        uVar2 = 1;
      }
      else {
        *param_1 = *param_2;
        uVar2 = 1;
      }
    }
    else {
      uVar3 = *param_2;
      *param_2 = uVar3 + 1;
      *param_1 = uVar3 + 1;
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* ENTRY 0x0801a488 : FUN_0801a488 */

void FUN_0801a488(void)

{
  uint uVar1;
  
  DAT_20006643 = 0xff;
  DAT_200066ab = 0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_2000553c)[uVar1 * 0x40] = 0xff;
  }
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200065dc)[uVar1] = 0;
    (&DAT_200065e2)[uVar1] = 0;
  }
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



/* ENTRY 0x0801b2f0 : FUN_0801b2f0 */

void FUN_0801b2f0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  char local_24 [2];
  undefined4 local_22;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  char local_12;
  char local_11;
  
  for (uVar3 = 0; uVar3 < 0x14; uVar3 = uVar3 + 1 & 0xff) {
    local_24[uVar3] = *(char *)(param_1 + uVar3);
  }
  uVar2 = FUN_080157d4(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x90) {
      if ((char)local_22 == '\x01') {
        FUN_0800f34c(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d6 = 0xa6;
      }
    }
    else {
      if (bVar1 < 0x91) {
        if (bVar1 == 0x23) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20006661 = (uint)local_22._2_2_;
            DAT_20006669 = (uint)local_1e;
          }
          DAT_20006675 = 0x23;
          return;
        }
        if (bVar1 < 0x24) {
          if (bVar1 == 1) {
            if ((char)local_22 == '\x01') {
              FUN_0800f34c(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                           local_1a);
              return;
            }
            local_22 = CONCAT13((char)((ushort)DAT_20004e1c >> 8),
                                CONCAT12((char)DAT_20004e1c,(short)local_22)) & 0xffffff00;
            local_1e = CONCAT11(DAT_20004e1f,DAT_20004e1e);
            local_1c = DAT_20004e18;
            local_1b = DAT_20004e19;
            local_1a = DAT_20004e1a;
            uVar2 = FUN_080157d4(&local_22,0x10);
            local_12 = (char)((ushort)uVar2 >> 8);
            local_11 = (char)uVar2;
            FUN_0800f820(local_24);
            return;
          }
          bVar4 = bVar1 == 0x10;
        }
        else {
          if (bVar1 == 0x60) {
            DAT_20006675 = 0x60;
            return;
          }
          bVar4 = false;
          if (bVar1 == 0x61) {
            DAT_20006675 = 0x61;
            return;
          }
        }
      }
      else {
        if (bVar1 == 0xa1) {
          local_22 = DAT_20003164;
          local_1e = CONCAT11(DAT_20003169,DAT_20003168);
          local_1c = DAT_2000316c;
          local_1b = DAT_20003172;
          local_1a = DAT_20003173;
          local_19 = DAT_2000316d;
          local_18 = DAT_2000316e;
          local_17 = DAT_20003171;
          local_16 = DAT_20003174;
          local_15 = DAT_20003175;
          uVar2 = FUN_080157d4(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0800f820(local_24);
          return;
        }
        if (bVar1 == 0xa3) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20006696 = (uint)local_22._2_2_;
            DAT_2000669e = (uint)local_1e;
          }
          DAT_20006675 = 0xa3;
          return;
        }
        if (bVar1 == 0xe0) {
          DAT_20006675 = 0xe0;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xe1) {
          DAT_20006675 = 0xe1;
          return;
        }
      }
      if ((bVar4) && ((char)local_22 == '\x01')) {
        FUN_0800f34c(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d6 = 0xa5;
      }
    }
  }
  return;
}



/* ENTRY 0x0801b598 : FUN_0801b598 */

void FUN_0801b598(uint param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    param_1 = 0x32;
  }
  DAT_20000678 = (param_1 * 0xe10) / 100 + 0x24b8;
  DAT_2000067c = (param_1 * 0x708) / 100 + 0x23f0;
  DAT_20000680 = (short)param_1;
  DAT_20000682 = (short)((param_1 * 0x708) / 0xe10);
  return;
}



/* ENTRY 0x0801b600 : FUN_0801b600 */

void FUN_0801b600(void)

{
  int iVar1;
  
  iVar1 = DAT_42218130;
  if (iVar1 == 0) {
    if (DAT_20000176 < 0x32) {
      DAT_20000176 = DAT_20000176 + 1;
    }
  }
  else if (DAT_20000176 != 0) {
    DAT_20000176 = DAT_20000176 - 1;
  }
  if (DAT_20000176 < 0x24) {
    if (DAT_20000176 < 0xc) {
      diag_BatState = 1;
      DAT_200032b6 = DAT_200032b6 | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_200032b6 = DAT_200032b6 & 0xfffd;
  }
  return;
}



/* ENTRY 0x0801b678 : FUN_0801b678 */

void FUN_0801b678(void)

{
  uint uVar1;
  
  DAT_200002f8 = FUN_0800be20();
  DAT_200002f9 = DAT_200002f8;
  uVar1 = (uint)DAT_200002f8;
  if (uVar1 == DAT_200002f4) {
    if (DAT_200002f6 < 0x15) {
      DAT_200002f6 = DAT_200002f6 + 1;
    }
    else if (uVar1 == 0) {
      DAT_200002fa = '\x01';
      DAT_200002f5 = 0;
      DAT_20000300 = 0;
      DAT_200002fc = 0;
    }
  }
  else if (((DAT_200002fa != '\0') && (DAT_200002f6 = 0, (uVar1 & 2) == 2)) &&
          ((DAT_200002f4 & 2) == 0)) {
    if (DAT_200002f5 < 0x20) {
      DAT_200002fc = DAT_200002fc << 1 | uVar1 & 1;
      DAT_200002f5 = DAT_200002f5 + 1;
    }
    else if (DAT_200002f5 < 0x40) {
      DAT_20000300 = DAT_20000300 << 1 | uVar1 & 1;
      DAT_200002f5 = DAT_200002f5 + 1;
    }
    else {
      DAT_200002f5 = 0;
      DAT_200002fa = '\0';
      if ((DAT_200002fc ^ DAT_20000300) == 0xffffffff) {
        DAT_20000304 = DAT_200002fc;
        DAT_200002f0 = DAT_200002fc;
        if ((0x26de < DAT_200002fc) && (DAT_200002fc < 0x2742)) {
          DAT_200002ee = 1;
        }
      }
    }
  }
  DAT_200002f4 = DAT_200002f8;
  return;
}



/* ENTRY 0x0801b7b8 : FUN_0801b7b8 */

/* WARNING: Removing unreachable block (ram,0x0801b802) */
/* WARNING: Removing unreachable block (ram,0x0801b84c) */

void FUN_0801b7b8(void)

{
  FUN_080236a8();
  DAT_200001a8 = 1;
  return;
}



/* ENTRY 0x0801b868 : FUN_0801b868 */

undefined4 FUN_0801b868(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_c [2];
  undefined1 uStack_a;
  undefined4 local_8;
  
  if (DAT_20000980 == '\0') {
    uVar6 = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xb) - 0x30;
    local_c = (undefined1  [2])CONCAT11(bVar1,DAT_2000097a);
    bVar2 = *(char *)(param_1 + 0xd) - 0x30;
    bVar3 = *(char *)(param_1 + 0xf) - 0x30;
    local_8 = (uint)CONCAT11(bVar3,DAT_2000097e);
    uVar7 = (CONCAT12(DAT_2000097c,local_c) & 0xff) + (uint)bVar1 + (uint)DAT_2000097c + (uint)bVar2
            + (local_8 & 0xff) + (uint)bVar3;
    bVar4 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    uVar7 = (uint)bVar4 + (uint)bVar1 + (uint)DAT_2000097c + (uint)bVar2 + (uint)DAT_2000097e +
            (uint)bVar3;
    bVar5 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    local_c = (undefined1  [2])CONCAT11(0,bVar4);
    _local_c = CONCAT12(bVar5,local_c);
    uVar7 = (_local_c & 0xff) + (uint)bVar1 + (uint)bVar5 + (uint)bVar2 + (local_8 & 0xff) +
            (uint)bVar3;
    if ((uint)bVar4 == *(byte *)(param_1 + 10) - 0x30) {
      if ((uint)bVar5 == *(byte *)(param_1 + 0xc) - 0x30) {
        if ((uint)(byte)((char)uVar7 + (char)(uVar7 / 10) * -10) == *(byte *)(param_1 + 0xe) - 0x30)
        {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}



/* ENTRY 0x0801b990 : FUN_0801b990 */

void FUN_0801b990(void)

{
  int iVar1;
  
  if ((DAT_20000648 == '\x01') &&
     (DAT_20000646 = ((short)((int)(uint)DAT_200034fe >> 4) - DAT_2000064a) * 0x11,
     diag_ChgCurrShow = DAT_20000646, DAT_2000066c == '\x02')) {
    if (DAT_20000646 < 0x2ee1) {
      if (DAT_20000660 < 0xb) {
        DAT_20000672 = '\0';
      }
      else {
        DAT_20000660 = DAT_20000660 - 1;
      }
    }
    else if (DAT_20000660 < 0x32) {
      DAT_20000660 = DAT_20000660 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_0800bcda(&DAT_40011000,2);
      DAT_20000672 = '\x01';
      if (DAT_20000675 < 10) {
        DAT_20000675 = DAT_20000675 + 1;
      }
      DAT_2000066c = '\x05';
    }
  }
  diag_ChgStepShow = DAT_2000066c;
  switch(DAT_2000066c) {
  case '\0':
    if (DAT_20000690 < 0x32) {
      DAT_20000690 = DAT_20000690 + 1;
    }
    else {
      DAT_2000066c = '\x01';
    }
    goto code_r0x0801bf8a;
  case '\x01':
    DAT_20000698 = DAT_20000698 + 1;
    if (DAT_20000698 < 0x14) {
      DAT_422101b0 = 1;
      FUN_0800bcda(&DAT_40011000,2);
    }
    else if (DAT_20000698 < 0x28) {
      DAT_20000694 = DAT_20000694 + ((int)(uint)DAT_200034fe >> 4);
    }
    else {
      DAT_2000064a = (ushort)(DAT_20000694 / 0x14);
      if ((DAT_2000064a < 0x43a) || (0xcae < DAT_2000064a)) {
        DAT_20000648 = '\x02';
      }
      else {
        DAT_20000648 = '\x01';
      }
      FUN_0800bcd6(&DAT_40011000,2);
      DAT_2000066c = '\x02';
    }
    goto code_r0x0801bf8a;
  case '\x02':
    if ((DAT_20005101 & 2) == 0) {
      if (DAT_2000066e == '\x01') {
        DAT_20000670 = 0;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_2000066c = '\x14';
      }
      DAT_2000066e = '\0';
    }
    else {
      DAT_2000066e = '\x01';
    }
    if ((DAT_20005409 & 2) == 0) {
      if (DAT_2000066f == '\x01') {
        DAT_20000670 = 0;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_2000066c = '\x14';
      }
      DAT_2000066f = '\0';
    }
    else {
      DAT_2000066f = '\x01';
    }
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000668) {
        DAT_2000069a = 0;
        DAT_422101b0 = 1;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x06';
        goto code_r0x0801bf8a;
      }
      DAT_20000668 = DAT_20000668 + 1;
    }
    else if (10 < DAT_20000668) {
      DAT_20000668 = DAT_20000668 - 10;
    }
    if ((diag_BatState == '\x01') && (0x30ed < (int)diag_TotalVoltage)) {
      if (0x420a3 < DAT_2000064c) {
        DAT_2000069a = 0;
        DAT_422101b0 = 1;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x03';
        goto code_r0x0801bf8a;
      }
      DAT_2000064c = DAT_2000064c + 1;
    }
    else if (10 < DAT_2000064c) {
      DAT_2000064c = DAT_2000064c - 10;
    }
    if ((diag_BatState == '\x01') && (0x3264 < (int)diag_TotalVoltage)) {
      if (0x13 < DAT_20000650) {
        DAT_2000069a = 0;
        DAT_422101b0 = 1;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_20000673 = 0xfa;
        DAT_20000664 = 0;
        DAT_2000066c = '\x04';
        goto code_r0x0801bf8a;
      }
      DAT_20000650 = DAT_20000650 + 1;
    }
    else if (10 < DAT_20000650) {
      DAT_20000650 = DAT_20000650 - 1;
    }
    iVar1 = FUN_08017450();
    if ((diag_BatState == '\x01') &&
       (((DAT_20000678 < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_20000680 < iVar1 && ((DAT_20000680 < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_20000654) {
        DAT_2000069a = 0;
        DAT_422101b0 = 1;
        FUN_0800bcda(&DAT_40011000,2);
        DAT_20000684 = -6;
        DAT_20000664 = 0;
        DAT_2000066c = '\b';
        goto code_r0x0801bf8a;
      }
      DAT_20000654 = DAT_20000654 + 1;
    }
    else if (10 < DAT_20000654) {
      DAT_20000654 = DAT_20000654 - 1;
    }
    if (DAT_2000315a < 0xb) {
      if (DAT_20000658 < 0xb) {
        DAT_20000685 = '\0';
      }
      else {
        DAT_20000658 = DAT_20000658 - 1;
      }
    }
    else if (DAT_20000658 < 0x32) {
      DAT_20000658 = DAT_20000658 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_0800bcda(&DAT_40011000,2);
      DAT_20000685 = '\x01';
      DAT_2000066c = '\t';
    }
    if ((DAT_2000315b < 0xb) || (DAT_20000646 < 0x259)) {
      if (DAT_2000065c < 0xb) {
        DAT_20000686 = '\0';
      }
      else {
        DAT_2000065c = DAT_2000065c - 1;
      }
    }
    else if (DAT_2000065c < 200) {
      DAT_2000065c = DAT_2000065c + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_0800bcda(&DAT_40011000,2);
      DAT_20000686 = '\x01';
      DAT_2000066c = '\t';
    }
    goto code_r0x0801bf8a;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_08017450();
    if (((int)diag_TotalVoltage < 0x2db4) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000685 == '\0')))) {
      if (DAT_20000664 < 100) {
        DAT_20000664 = DAT_20000664 + 1;
      }
      else {
        FUN_0800bcd6(&DAT_40011000,2);
        DAT_20000673 = 0;
        DAT_20000684 = '\0';
        DAT_20000674 = 0;
        DAT_20000672 = '\0';
        DAT_2000066c = '\x02';
      }
    }
    goto code_r0x0801bf8a;
  default:
    goto code_r0x0801bf8a;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
    break;
  case '\x14':
    if (diag_BatState == '\0') {
      DAT_2000066d = '\0';
    }
    else {
      if ((DAT_2000066d == '\0') && (0x708 < DAT_20000670)) {
        FUN_0800bcd6(&DAT_40011000,2);
        DAT_2000066c = '\x02';
      }
      DAT_2000066d = '\x01';
    }
    if (DAT_20000670 < 2000) {
      DAT_20000670 = DAT_20000670 + 1;
    }
    goto code_r0x0801bf8a;
  }
  iVar1 = FUN_08017450();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_20000646 < 600)) &&
      ((DAT_20000675 < 8 && ((DAT_20000685 == '\0' && (DAT_20000686 == '\0')))))) &&
     (((diag_TotalVoltage < DAT_2000067c && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_20000682 && (iVar1 < 0x65)))))) {
    if (DAT_20000664 < 100) {
      DAT_20000664 = DAT_20000664 + 1;
    }
    else {
      FUN_0800bcd6(&DAT_40011000,2);
      DAT_20000673 = 0;
      DAT_20000684 = '\0';
      DAT_20000674 = 0;
      DAT_20000672 = '\0';
      DAT_2000066c = '\x02';
    }
  }
code_r0x0801bf8a:
  if (((DAT_20000672 == '\x01') || (DAT_20000673 != 0)) || (DAT_20000674 != 0)) {
    DAT_200006dc = 1;
    DAT_200030de = DAT_200030de | 0x40;
  }
  else {
    DAT_200006dc = 0;
    DAT_200030de = DAT_200030de & 0xffbf;
  }
  if (DAT_20000684 == '\0') {
    DAT_200030de = DAT_200030de & 0xff7f;
  }
  else {
    DAT_200030de = DAT_200030de | 0x80;
  }
  if (DAT_20000685 == '\0') {
    DAT_200030de = DAT_200030de & 0xfeff;
  }
  else {
    DAT_200030de = DAT_200030de | 0x100;
  }
  if (DAT_20000686 == '\0') {
    DAT_200030e0 = DAT_200030e0 & 0xfffe;
  }
  else {
    DAT_200030e0 = DAT_200030e0 | 1;
  }
  if ((DAT_200030f4 % 0x96 == 0x4b) &&
     (((DAT_20000672 == '\x01' || (1 < DAT_20000673)) ||
      ((1 < DAT_20000674 || ((DAT_20000685 != '\0' || (DAT_20000686 != '\0')))))))) {
    FUN_08023ae8(2);
  }
  if (DAT_2000069c != '\x01') {
    if (diag_cartstep != '\0') {
      DAT_2000069c = '\x01';
    }
    if (diag_BatState == '\0') {
      if (DAT_2000069e < 200) {
        DAT_2000069e = DAT_2000069e + 1;
      }
    }
    else {
      DAT_2000069e = 0;
    }
    if (((0x19 < DAT_2000069e) && (diag_BatState == '\0')) && (diag_cartstep == '\0')) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 1000) {
        if (DAT_2000069d < 0x1a) {
          DAT_2000069d = DAT_2000069d + 1;
          return;
        }
        DAT_422101b0 = 0;
        DAT_2000069d = DAT_2000069d + 1;
        return;
      }
    }
    DAT_2000069d = 0;
  }
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



/* ENTRY 0x0801c194 : FUN_0801c194 */

void FUN_0801c194(void)

{
  FUN_0800c168();
  FUN_08023bfc();
  FUN_08008c50();
  FUN_08024cc0();
  FUN_08009220();
  return;
}



/* ENTRY 0x0801c1ac : FUN_0801c1ac */

void FUN_0801c1ac(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_20003185 == '\x01')) {
      FUN_08020fd0();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_08021024(param_1 + 1);
  }
  return;
}



/* ENTRY 0x0801c1f0 : FUN_0801c1f0 */

uint FUN_0801c1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  short sVar9;
  
  DAT_200009ae = DAT_200009ae + 1;
  if (DAT_2000094d == '\0') {
    if (DAT_200009b0 < 0x15) {
      switch(DAT_200009b1) {
      case 0:
        if (DAT_200031ff < 0x37) {
          for (uVar4 = 0; uVar4 < DAT_200009ad; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000099e)[uVar4] = (&DAT_20000971)[uVar4];
          }
        }
        else {
          DAT_200009ad = 6;
          for (uVar4 = 0; uVar4 < DAT_200009ad; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000099e)[uVar4] = s_S22Pro_2000098e[uVar4];
          }
          if (DAT_200031ff == 0x39) {
            (&DAT_2000099e)[uVar4] = 0x2b;
            DAT_200009ad = DAT_200009ad + 1;
          }
        }
        DAT_20000996 = DAT_200009ad + 5;
        DAT_200009b1 = 3;
        break;
      case 3:
        puVar6 = (undefined1 *)(DAT_200009ae / 0x28);
        if ((uint)DAT_200009ae % 0x28 == 0x14) {
          if (DAT_200009b0 < 10) {
            puVar7 = param_4;
            if ((DAT_200044fe == -0x44) && (DAT_20004502 == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_200009ad + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_20004503)[uVar4];
                if (puVar7 != (undefined *)(uint)(byte)(&DAT_2000099a)[uVar4]) {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                puVar6 = &DAT_200009b1;
                DAT_200009b1 = 6;
              }
              else {
                DAT_200009b0 = 0;
                puVar6 = &DAT_200009b1;
                DAT_200009b1 = 5;
              }
            }
            DAT_200009b0 = DAT_200009b0 + 1;
            FUN_0800fd80(&DAT_200009a7,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
          }
          else {
            DAT_200009b0 = 0;
            DAT_200009b1 = 4;
          }
        }
        break;
      case 4:
        if ((uint)DAT_200009ae % 0x78 == 0x1e) {
          DAT_200009b0 = DAT_200009b0 + 1;
          FUN_0800fd80(s_AT_ULKTE_20000982,9,DAT_200009ae / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_200009ae / 0x50;
        if ((uint)DAT_200009ae % 0x50 == 0x14) {
          if ((DAT_200044fe == -0x44) && (DAT_20004502 == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_200009ad + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_20004503)[uVar5];
              puVar7 = &DAT_20000995;
              if (uVar4 != (byte)(&DAT_2000099a)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_200009b1 = 6;
            }
            else {
              FUN_0800fd80(&DAT_20000995,DAT_200009ad + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_200009b0 = DAT_200009b0 + 1;
        }
        else if ((uint)DAT_200009ae % 0x50 == 0x3c) {
          FUN_0800fd80(&DAT_200009a7,6,DAT_200009ae / 0x50,param_4,param_1,param_2,param_3,param_4);
        }
        break;
      case 6:
        DAT_200009b0 = DAT_200009b0 + 1;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if ((uint)DAT_200009ae == (DAT_200009ae / 0x18) * 0x18) {
      sVar9 = (short)diag_TotalVoltage;
      if (0x3138 < (short)diag_TotalVoltage) {
        sVar9 = 0x3138;
      }
      sVar1 = (short)diag_TotalCurrent;
      if ((diag_BatState == '\x01') && (200 < DAT_20000646)) {
        sVar1 = (short)(-(int)DAT_20000646 / 10);
      }
      sVar3 = (short)(diag_VehicleSpeed / 10);
      if (diag_VehicleSpeed / 10 < 0) {
        sVar3 = -sVar3;
      }
      FUN_0800fc6c(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_200031b6);
    }
    if ((uint)DAT_200009ae % 0x18 == 4) {
      sVar9 = (short)(DAT_2000311c / 10);
      if (DAT_2000311c / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0800fc6c(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_20003110,(int)sVar9,
                   (int)(short)((ushort)DAT_200006c4 | (ushort)(byte)DAT_200031f4 << 8),
                   (int)CONCAT11(DAT_200006de,DAT_200006dd),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_200009ae % 0x18 == 8) {
      FUN_0800fc6c(0xf5,(int)(short)DAT_200006d4,(int)(short)DAT_200006d8,
                   (int)CONCAT11(DAT_200006d2,DAT_200006d3),(int)CONCAT11(DAT_200006ce,DAT_200006d0)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_200009ae % 0x18 == 0xc) {
      FUN_0800fc6c(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e8,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003144,(int)(short)(DAT_20003118 / 0xe10),(int)DAT_20003178);
    }
    if ((uint)DAT_200009ae % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003fe4 != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0800fc6c(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_200009ae + ((int)(uint)DAT_200009ae >> 2) * -4 == 2) {
      FUN_0801a048();
    }
    uVar4 = (uint)DAT_200009ae % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_080178e8();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801c6a8 : FUN_0801c6a8 */

void FUN_0801c6a8(uint param_1)

{
  byte bVar1;
  
  param_1 = param_1 ^ 0xffff;
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    if ((param_1 & 1) == 0) {
      param_1 = param_1 >> 1;
    }
    else {
      param_1 = param_1 >> 1 ^ 0xa001;
    }
  }
  return;
}



/* ENTRY 0x0801c6d0 : FUN_0801c6d0 */

uint FUN_0801c6d0(uint param_1,uint param_2)

{
  byte bVar1;
  
  param_2 = param_2 ^ param_1;
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    if ((param_2 & 1) == 0) {
      param_2 = param_2 >> 1;
    }
    else {
      param_2 = param_2 >> 1 ^ 0xa001;
    }
  }
  return param_2;
}



/* ENTRY 0x0801c6f6 : FUN_0801c6f6 */

void FUN_0801c6f6(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = 0xffff;
  for (uVar2 = 0; uVar2 < *param_1 + 1; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = uVar1 ^ param_1[uVar2];
    for (bVar3 = 0; bVar3 < 8; bVar3 = bVar3 + 1) {
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xa001;
      }
    }
  }
  return;
}



/* ENTRY 0x0801c734 : FUN_0801c734 */

void FUN_0801c734(void)

{
  uint uVar1;
  
  if (DAT_200005f3 == '\0') {
    if (DAT_200005f4 == '\0') {
      uVar1 = (uint)DAT_200005f5;
      DAT_200005f5 = DAT_200005f5 + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005f1 == '\x01') {
          FUN_08015014();
        }
      }
      else if (DAT_200005f2 == '\x01') {
        FUN_08014f90();
      }
    }
    else if (DAT_200005f7 == 0) {
      FUN_08014d48(0xff);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else if (DAT_200005f7 < 0x12) {
      FUN_08014d48(DAT_200005f7 - 1);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else {
      DAT_200005f7 = 0;
      DAT_200005f4 = '\0';
    }
  }
  else if (DAT_200005f6 == 0) {
    FUN_08014e34(0xff);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else if (DAT_200005f6 < 99) {
    FUN_08014e34(DAT_200005f6 - 1);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else {
    DAT_200005f6 = 0;
    DAT_200005f3 = '\0';
  }
  return;
}



/* ENTRY 0x0801c81c : FUN_0801c81c */

int FUN_0801c81c(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar4;
  
  iVar3 = 0;
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    param_6 = 0;
  }
  else {
    for (uVar4 = 0x7b2; (int)uVar4 < param_1; uVar4 = uVar4 + 1 & 0xffff) {
      iVar3 = FUN_0800c9d4(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0800c9d4(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801c8c8 : FUN_0801c8c8 */

void FUN_0801c8c8(void)

{
  DAT_200033f8 = 0;
  DAT_200033fc = 0;
  DAT_20003400 = 0;
  DAT_20003404 = 0;
  DAT_20003408 = 0;
  DAT_2000340c = 0;
  DAT_20003410 = 0;
  return;
}



/* ENTRY 0x0801c8f8 : FUN_0801c8f8 */

void FUN_0801c8f8(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0801d0c8(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_0801de54(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_0801e634();
    }
  }
  else {
    FUN_0801c93c(param_1,param_2);
  }
  return;
}



/* ENTRY 0x0801c93c : FUN_0801c93c */

void FUN_0801c93c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_0800ca1c();
  DAT_2000092e = DAT_2000092e + 1;
  if (DAT_2000092e < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000932 = DAT_20000933 + (char)iVar1;
          if (0x1f < DAT_20000932) {
            DAT_20000932 = DAT_20000932 - 0x20;
          }
          (&DAT_20004062)[iVar1 * 3] = (&DAT_08027e52)[(uint)DAT_20000932 * 3];
          (&DAT_20004063)[iVar1 * 3] = (&DAT_08027e53)[(uint)DAT_20000932 * 3];
          (&DAT_20004064)[iVar1 * 3] = (&DAT_08027e54)[(uint)DAT_20000932 * 3];
        }
        bVar4 = DAT_20000933 < '\0';
        DAT_20000933 = DAT_20000933 + -1;
        if (bVar4) {
          DAT_20000933 = '\x1f';
        }
      }
      else {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000932 = DAT_20000931 + (char)iVar1;
          if (0x1f < DAT_20000932) {
            DAT_20000932 = DAT_20000932 - 0x20;
          }
          (&DAT_20004062)[iVar1 * 3] = (&DAT_08027e52)[(uint)DAT_20000932 * 3];
          (&DAT_20004063)[iVar1 * 3] = (&DAT_08027e53)[(uint)DAT_20000932 * 3];
          (&DAT_20004064)[iVar1 * 3] = (&DAT_08027e54)[(uint)DAT_20000932 * 3];
        }
        bVar4 = 0x1f < DAT_20000931;
        DAT_20000931 = DAT_20000931 + 1;
        if (bVar4) {
          DAT_20000931 = 0;
        }
      }
    }
  }
  else if (DAT_2000092e < 0x640) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      switch(DAT_2000092c) {
      case 0:
        if (DAT_200008ff == -1) {
          DAT_2000092c = 1;
        }
        else {
          DAT_200008ff = DAT_200008ff + '\x11';
        }
        break;
      case 1:
        if (DAT_200008fe == '\0') {
          DAT_2000092c = 2;
        }
        else {
          DAT_200008fe = DAT_200008fe + -0x11;
        }
        break;
      case 2:
        if (DAT_20000900 == -1) {
          DAT_2000092c = 3;
        }
        else {
          DAT_20000900 = DAT_20000900 + '\x11';
        }
        break;
      case 3:
        if (DAT_200008ff == '\0') {
          DAT_2000092c = 4;
        }
        else {
          DAT_200008ff = DAT_200008ff + -0x11;
        }
        break;
      case 4:
        if (DAT_200008fe == -1) {
          DAT_2000092c = 5;
        }
        else {
          DAT_200008fe = DAT_200008fe + '\x11';
        }
        break;
      case 5:
        if (DAT_20000900 == '\0') {
          DAT_2000092c = 0;
        }
        else {
          DAT_20000900 = DAT_20000900 + -0x11;
        }
      }
      for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        (&DAT_20004062)[iVar1 * 3] = DAT_200008fe;
        (&DAT_20004063)[iVar1 * 3] = DAT_200008ff;
        (&DAT_20004064)[iVar1 * 3] = DAT_20000900;
      }
    }
  }
  else if (DAT_2000092e < 0xa8c) {
    if (DAT_20000930 == '\0') {
      DAT_20000930 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20004086)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 3) / 100);
            (&DAT_20004087)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 3) / 100);
            (&DAT_20004088)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20004086)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20004086)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20004086)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 100) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 100) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20004086)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20004086)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20004086)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e52)[iVar1 * 3] * 3) / 100);
            (&DAT_20004087)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e53)[iVar1 * 3] * 3) / 100);
            (&DAT_20004088)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027e54)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_20000936 = DAT_20000934 + (short)iVar1;
      if (0xdf < DAT_20000936) {
        DAT_20000936 = DAT_20000936 + -0xe0;
      }
      (&DAT_20004062)[iVar1 * 3] = (&DAT_20004086)[DAT_20000936 * 3];
      (&DAT_20004063)[iVar1 * 3] = (&DAT_20004087)[DAT_20000936 * 3];
      (&DAT_20004064)[iVar1 * 3] = (&DAT_20004088)[DAT_20000936 * 3];
    }
    if (param_1 == (param_2 + 5) * (param_1 / (param_2 + 5))) {
      if (bVar4) {
        DAT_20000934 = DAT_20000934 + -1;
        if (DAT_20000934 < 1) {
          DAT_20000934 = 0xdf;
        }
      }
      else {
        DAT_20000934 = DAT_20000934 + 1;
        if (0xdf < DAT_20000934) {
          DAT_20000934 = 1;
        }
      }
    }
  }
  else if (DAT_2000092e < 0xdac) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      for (iVar2 = 0; iVar2 < 0xc; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
        DAT_20000939 = DAT_20000938 + (char)iVar2;
        if ('\v' < DAT_20000939) {
          DAT_20000939 = DAT_20000939 + -0xc;
        }
        (&DAT_20004062)[iVar2 * 3] = (&DAT_20000901)[DAT_20000939 * 3];
        (&DAT_20004063)[iVar2 * 3] = (&DAT_20000902)[DAT_20000939 * 3];
        (&DAT_20004064)[iVar2 * 3] = (&DAT_20000903)[DAT_20000939 * 3];
      }
      if (bVar4) {
        if ((0 < iVar1) && (bVar4 = DAT_20000938 == '\0', DAT_20000938 = DAT_20000938 + -1, bVar4))
        {
          DAT_20000938 = '\v';
        }
      }
      else {
        bVar4 = '\v' < DAT_20000938;
        DAT_20000938 = DAT_20000938 + '\x01';
        if (bVar4) {
          DAT_20000938 = '\x01';
        }
      }
    }
  }
  else if (0xdac < DAT_2000092e) {
    DAT_2000092e = 0;
  }
  return;
}



/* ENTRY 0x0801d0c8 : FUN_0801d0c8 */

void FUN_0801d0c8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_0800ca1c();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_2000093d = DAT_2000093c + (char)uVar6;
      if ('\v' < DAT_2000093d) {
        DAT_2000093d = DAT_2000093d + -0xc;
      }
      (&DAT_20004062)[uVar6 * 3] = (&DAT_20004326)[DAT_2000093d * 3];
      (&DAT_20004063)[uVar6 * 3] = (&DAT_20004327)[DAT_2000093d * 3];
      (&DAT_20004064)[uVar6 * 3] = (&DAT_20004328)[DAT_2000093d * 3];
    }
    if (bVar2) {
      bVar1 = DAT_2000093c == '\0';
      DAT_2000093c = DAT_2000093c + -1;
      if (bVar1) {
        DAT_2000093c = '\v';
      }
    }
    else {
      bVar1 = '\v' < DAT_2000093c;
      DAT_2000093c = DAT_2000093c + '\x01';
      if (bVar1) {
        DAT_2000093c = '\x01';
      }
    }
  }
  uVar4 = DAT_2000093a + 1;
  if (DAT_2000093a < 500) {
    DAT_2000093a = uVar4;
    if (bVar2) {
      DAT_20004335 = DAT_20003218;
      DAT_20004336 = DAT_20003219;
      DAT_20004337 = DAT_2000321a;
      DAT_20004332 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
      DAT_20004333 = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
      DAT_20004334 = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
      DAT_2000432f = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
      DAT_20004330 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
      DAT_20004331 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
      DAT_2000432c = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
      DAT_2000432d = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
      DAT_2000432e = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
      DAT_20004329 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
      DAT_2000432a = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
      DAT_2000432b = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
      DAT_20004326 = (byte)(((uint)DAT_20003218 * 5) / 100);
      DAT_20004327 = (byte)(((uint)DAT_20003219 * 5) / 100);
      DAT_20004328 = (byte)(((uint)DAT_2000321a * 5) / 100);
    }
    else {
      DAT_20004329 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
      DAT_2000432a = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
      DAT_2000432b = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
      DAT_2000432c = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
      DAT_2000432d = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
      DAT_2000432e = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
      DAT_2000432f = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
      DAT_20004330 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
      DAT_20004331 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
      DAT_20004332 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
      DAT_20004333 = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
      DAT_20004334 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
      DAT_20004335 = (byte)(((uint)DAT_20003218 * 5) / 100);
      DAT_20004336 = (byte)(((uint)DAT_20003219 * 5) / 100);
      DAT_20004337 = (byte)(((uint)DAT_2000321a * 5) / 100);
      DAT_20004328 = DAT_2000321a;
      DAT_20004327 = DAT_20003219;
      DAT_20004326 = DAT_20003218;
    }
  }
  else {
    uVar5 = DAT_2000093a + 2;
    if (uVar4 < 1000) {
      DAT_2000093a = uVar5;
      if (bVar2) {
        DAT_20004335 = DAT_2000321c;
        DAT_20004336 = DAT_2000321d;
        DAT_20004337 = DAT_2000321e;
        DAT_20004332 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
        DAT_20004333 = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
        DAT_20004334 = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
        DAT_2000432f = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
        DAT_20004330 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
        DAT_20004331 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
        DAT_2000432c = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
        DAT_2000432d = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
        DAT_2000432e = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
        DAT_20004329 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
        DAT_2000432a = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
        DAT_2000432b = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
        DAT_20004326 = (byte)(((uint)DAT_2000321c * 5) / 100);
        DAT_20004327 = (byte)(((uint)DAT_2000321d * 5) / 100);
        DAT_20004328 = (byte)(((uint)DAT_2000321e * 5) / 100);
      }
      else {
        DAT_20004329 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
        DAT_2000432a = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
        DAT_2000432b = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
        DAT_2000432c = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
        DAT_2000432d = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
        DAT_2000432e = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
        DAT_2000432f = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
        DAT_20004330 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
        DAT_20004331 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
        DAT_20004332 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
        DAT_20004333 = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
        DAT_20004334 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
        DAT_20004335 = (byte)(((uint)DAT_2000321c * 5) / 100);
        DAT_20004336 = (byte)(((uint)DAT_2000321d * 5) / 100);
        DAT_20004337 = (byte)(((uint)DAT_2000321e * 5) / 100);
        DAT_20004328 = DAT_2000321e;
        DAT_20004327 = DAT_2000321d;
        DAT_20004326 = DAT_2000321c;
      }
    }
    else {
      uVar4 = DAT_2000093a + 3;
      if (uVar5 < 0x5dc) {
        DAT_2000093a = uVar4;
        if (bVar2) {
          DAT_20004335 = DAT_20003220;
          DAT_20004336 = DAT_20003221;
          DAT_20004337 = DAT_20003222;
          DAT_20004332 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
          DAT_20004333 = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
          DAT_20004334 = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
          DAT_2000432f = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
          DAT_20004330 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
          DAT_20004331 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
          DAT_2000432c = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
          DAT_2000432d = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
          DAT_2000432e = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
          DAT_20004329 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
          DAT_2000432a = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
          DAT_2000432b = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
          DAT_20004326 = (byte)(((uint)DAT_20003220 * 5) / 100);
          DAT_20004327 = (byte)(((uint)DAT_20003221 * 5) / 100);
          DAT_20004328 = (byte)(((uint)DAT_20003222 * 5) / 100);
        }
        else {
          DAT_20004329 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
          DAT_2000432a = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
          DAT_2000432b = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
          DAT_2000432c = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
          DAT_2000432d = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
          DAT_2000432e = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
          DAT_2000432f = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
          DAT_20004330 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
          DAT_20004331 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
          DAT_20004332 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
          DAT_20004333 = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
          DAT_20004334 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
          DAT_20004335 = (byte)(((uint)DAT_20003220 * 5) / 100);
          DAT_20004336 = (byte)(((uint)DAT_20003221 * 5) / 100);
          DAT_20004337 = (byte)(((uint)DAT_20003222 * 5) / 100);
          DAT_20004328 = DAT_20003222;
          DAT_20004327 = DAT_20003221;
          DAT_20004326 = DAT_20003220;
        }
      }
      else {
        uVar5 = DAT_2000093a + 4;
        if (uVar4 < 2000) {
          DAT_2000093a = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20004335 = DAT_20003224;
              DAT_20004336 = DAT_20003225;
              DAT_20004337 = DAT_20003226;
              DAT_20004332 = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
              DAT_20004333 = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
              DAT_20004334 = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
              DAT_2000432f = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
              DAT_20004330 = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
              DAT_20004331 = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
              DAT_2000432c = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
              DAT_2000432d = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
              DAT_2000432e = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
              DAT_20004329 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
              DAT_2000432a = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
              DAT_2000432b = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
              DAT_20004326 = (byte)(((uint)DAT_20003224 * 5) / 100);
              DAT_20004327 = (byte)(((uint)DAT_20003225 * 5) / 100);
              DAT_20004328 = (byte)(((uint)DAT_20003226 * 5) / 100);
            }
          }
          else {
            DAT_20004326 = DAT_20003224;
            DAT_20004327 = DAT_20003225;
            DAT_20004328 = DAT_20003226;
            DAT_20004329 = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
            DAT_2000432a = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
            DAT_2000432b = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
            DAT_2000432c = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
            DAT_2000432d = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
            DAT_2000432e = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
            DAT_2000432f = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
            DAT_20004330 = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
            DAT_20004331 = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
            DAT_20004332 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
            DAT_20004333 = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
            DAT_20004334 = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
            DAT_20004335 = (byte)(((uint)DAT_20003224 * 5) / 100);
            DAT_20004336 = (byte)(((uint)DAT_20003225 * 5) / 100);
            DAT_20004337 = (byte)(((uint)DAT_20003226 * 5) / 100);
          }
        }
        else {
          DAT_2000093a = DAT_2000093a + 5;
          if (2000 < uVar5) {
            DAT_2000093a = 0;
          }
        }
      }
    }
  }
  return;
}



/* ENTRY 0x0801de54 : FUN_0801de54 */

void FUN_0801de54(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  
  cVar2 = '\x05';
  local_28 = 0;
  local_2c = 0;
  FUN_08008582(auStack_40,0x14);
  FUN_08008582(auStack_54,0x14);
  iVar5 = 0;
  iVar8 = 0;
  for (cVar4 = '\0'; cVar4 < '\x06'; cVar4 = cVar4 + '\x01') {
    FUN_080208a0(cVar2,(&DAT_20004062)[iVar8 * 3],(&DAT_20004063)[iVar8 * 3],
                 (&DAT_20004064)[iVar8 * 3],auStack_54);
    FUN_080208a0(cVar2,(&DAT_20004062)[iVar5 * 3],(&DAT_20004063)[iVar5 * 3],
                 (&DAT_20004064)[iVar5 * 3],auStack_40);
    cVar2 = cVar2 + -1;
    iVar6 = iVar5;
    iVar7 = iVar8;
    if (cVar4 < '\x05') {
      iVar6 = (int)(char)((char)iVar5 + '\x01');
      if (4 < iVar5) {
        iVar6 = 0;
      }
      iVar7 = (int)(char)((char)iVar8 + '\x01');
      if (4 < iVar8) {
        iVar7 = 0;
      }
    }
    iVar5 = iVar6;
    iVar8 = iVar7;
  }
  FUN_08022e60(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_2000093f = DAT_2000093e + (char)iVar5;
      if ('\v' < DAT_2000093f) {
        DAT_2000093f = DAT_2000093f + -0xc;
      }
      (&DAT_20004062)[iVar5 * 3] = (&DAT_2000434a)[DAT_2000093f * 3];
      (&DAT_20004063)[iVar5 * 3] = (&DAT_2000434b)[DAT_2000093f * 3];
      (&DAT_20004064)[iVar5 * 3] = (&DAT_2000434c)[DAT_2000093f * 3];
    }
    bVar1 = '\v' < DAT_2000093e;
    DAT_2000093e = DAT_2000093e + '\x01';
    if (bVar1) {
      DAT_2000093e = '\x01';
    }
  }
  if (DAT_20000940 < 500) {
    DAT_2000434a = DAT_20003218;
    DAT_2000434b = DAT_20003219;
    DAT_2000434c = DAT_2000321a;
    DAT_2000434d = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
    DAT_2000434e = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
    DAT_2000434f = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
    DAT_20004350 = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
    DAT_20004351 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
    DAT_20004352 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
    DAT_20004353 = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
    DAT_20004354 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
    DAT_20004355 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
    DAT_20004356 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
    DAT_20004357 = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
    DAT_20004358 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
    DAT_20004359 = (undefined1)(((uint)DAT_20003218 * 5) / 100);
    DAT_2000435a = (undefined1)(((uint)DAT_20003219 * 5) / 100);
    DAT_2000435b = (undefined1)(((uint)DAT_2000321a * 5) / 100);
    DAT_20000940 = DAT_20000940 + 1;
  }
  else if ((ushort)(DAT_20000940 + 1) < 1000) {
    DAT_2000434a = DAT_2000321c;
    DAT_2000434b = DAT_2000321d;
    DAT_2000434c = DAT_2000321e;
    DAT_2000434d = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
    DAT_2000434e = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
    DAT_2000434f = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
    DAT_20004350 = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
    DAT_20004351 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
    DAT_20004352 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
    DAT_20004353 = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
    DAT_20004354 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
    DAT_20004355 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
    DAT_20004356 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
    DAT_20004357 = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
    DAT_20004358 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
    DAT_20004359 = (undefined1)(((uint)DAT_2000321c * 5) / 100);
    DAT_2000435a = (undefined1)(((uint)DAT_2000321d * 5) / 100);
    DAT_2000435b = (undefined1)(((uint)DAT_2000321e * 5) / 100);
    DAT_20000940 = DAT_20000940 + 2;
  }
  else if ((ushort)(DAT_20000940 + 2) < 0x5dc) {
    DAT_2000434a = DAT_20003220;
    DAT_2000434b = DAT_20003221;
    DAT_2000434c = DAT_20003222;
    DAT_2000434d = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
    DAT_2000434e = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
    DAT_2000434f = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
    DAT_20004350 = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
    DAT_20004351 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
    DAT_20004352 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
    DAT_20004353 = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
    DAT_20004354 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
    DAT_20004355 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
    DAT_20004356 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
    DAT_20004357 = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
    DAT_20004358 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
    DAT_20004359 = (undefined1)(((uint)DAT_20003220 * 5) / 100);
    DAT_2000435a = (undefined1)(((uint)DAT_20003221 * 5) / 100);
    DAT_2000435b = (undefined1)(((uint)DAT_20003222 * 5) / 100);
    DAT_20000940 = DAT_20000940 + 3;
  }
  else {
    uVar3 = DAT_20000940 + 4;
    if ((ushort)(DAT_20000940 + 3) < 2000) {
      DAT_2000434a = DAT_20003224;
      DAT_2000434b = DAT_20003225;
      DAT_2000434c = DAT_20003226;
      DAT_2000434d = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
      DAT_2000434e = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
      DAT_2000434f = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
      DAT_20004350 = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
      DAT_20004351 = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
      DAT_20004352 = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
      DAT_20004353 = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
      DAT_20004354 = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
      DAT_20004355 = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
      DAT_20004356 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
      DAT_20004357 = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
      DAT_20004358 = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
      DAT_20004359 = (undefined1)(((uint)DAT_20003224 * 5) / 100);
      DAT_2000435a = (undefined1)(((uint)DAT_20003225 * 5) / 100);
      DAT_2000435b = (undefined1)(((uint)DAT_20003226 * 5) / 100);
      DAT_20000940 = uVar3;
    }
    else {
      DAT_20000940 = DAT_20000940 + 5;
      if (2000 < uVar3) {
        DAT_20000940 = 0;
      }
    }
  }
  return;
}



/* ENTRY 0x0801e634 : FUN_0801e634 */

void FUN_0801e634(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  FUN_08008582(local_30,0x14);
  FUN_08008582(local_44,0x14);
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1 & 0xff) {
    local_30[uVar4] = 0;
    local_44[uVar4] = 0;
  }
  uVar4 = DAT_20000948 >> 0x1f;
  if (DAT_20000948 == ((int)(DAT_20000948 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_20003218;
    uVar2 = (uint)DAT_20003219;
    uVar3 = (uint)DAT_2000321a;
  }
  else if (DAT_20000948 + ((int)(DAT_20000948 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_2000321c;
    uVar2 = (uint)DAT_2000321d;
    uVar3 = (uint)DAT_2000321e;
  }
  else if (DAT_20000948 + ((int)(DAT_20000948 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_20003220;
    uVar2 = (uint)DAT_20003221;
    uVar3 = (uint)DAT_20003222;
  }
  else {
    uVar4 = (uint)DAT_20003224;
    uVar2 = (uint)DAT_20003225;
    uVar3 = (uint)DAT_20003226;
  }
  if (DAT_20000944 % 0x18 < 0xc) {
    uVar4 = (int)(uVar4 * (DAT_20000944 % 0x18)) / 0x18;
    uVar2 = (int)(uVar2 * (DAT_20000944 % 0x18)) / 0x18;
    uVar3 = (int)(uVar3 * (DAT_20000944 % 0x18)) / 0x18;
  }
  else {
    uVar4 = uVar4 - (int)(uVar4 * (DAT_20000944 % 0x18)) / 0x18;
    uVar2 = uVar2 - (int)(uVar2 * (DAT_20000944 % 0x18)) / 0x18;
    uVar3 = uVar3 - (int)(uVar3 * (DAT_20000944 % 0x18)) / 0x18;
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_080208a0(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_080208a0(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_20000944 == (DAT_20000944 / 0x18) * 0x18) {
    DAT_20000948 = DAT_20000948 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_20000944 = DAT_20000944 + 1;
    FUN_08022e60(local_30,local_44);
  }
  else {
    DAT_20000944 = DAT_20000944 + 1;
    FUN_08022e60(local_44,local_30);
  }
  return;
}



/* ENTRY 0x0801e7fc : FUN_0801e7fc */

void FUN_0801e7fc(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08008582(auStack_2c,0x14);
  FUN_08008582(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080208a0(bVar1,0,0,0,auStack_2c);
    FUN_080208a0(bVar1,0,0,0,auStack_40);
  }
  if (DAT_20000884 % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080208a0(bVar1,uVar2,0,0,auStack_2c);
    FUN_080208a0(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_08022e60(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x0801e8ac : FUN_0801e8ac */

void FUN_0801e8ac(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  uVar2 = 0;
  FUN_08008582(local_30,0x14);
  FUN_08008582(local_44,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_30[uVar1] = 0;
    local_44[uVar1] = 0;
  }
  if (diag_BatState == '\x01') {
    uVar1 = 0x14;
    if (param_1 < 0x2454) {
      uVar1 = 0xe;
      uVar2 = 6 - DAT_20000928 % 7 & 0xff;
    }
    else if (param_1 < 0x2536) {
      uVar1 = 0xf;
      uVar2 = 5 - DAT_20000928 % 6 & 0xff;
    }
    else if (param_1 < 0x27fe) {
      uVar1 = 0x10;
      uVar2 = 4 - DAT_20000928 % 5 & 0xff;
    }
    else if (param_1 < 0x2ac6) {
      uVar1 = 0x11;
      uVar2 = 3 - (DAT_20000928 & 3);
    }
    else if (param_1 < 0x2d8e) {
      uVar1 = 0x12;
      uVar2 = 2 - DAT_20000928 % 3 & 0xff;
    }
    else if (param_1 < 0x3056) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000928 & 1);
    }
    else if (param_1 < 0x3058) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000928 & 1);
    }
    else if (param_1 < 0x30a3) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000928 & 1);
    }
    else if (0x30a2 < param_1) {
      uVar2 = 0;
    }
    if (DAT_20000884 == uVar1 * (DAT_20000884 / uVar1)) {
      DAT_20000928 = DAT_20000928 + 1;
    }
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else if (param_1 < 0x2454) {
    if (DAT_20000884 % 0x32 < 0x1a) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    uVar4 = 0;
    uVar2 = 0;
    FUN_08024d18(param_1);
  }
  else if (param_1 < 0x3265) {
    if (param_1 < 0x2536) {
      uVar3 = 0xff;
      uVar4 = 0;
      uVar2 = 5;
    }
    else if (param_1 < 0x27fe) {
      uVar3 = 0x6f;
      uVar4 = 0x6f;
      uVar2 = 4;
    }
    else if (param_1 < 0x2ac6) {
      uVar3 = 0x6f;
      uVar4 = 0x6f;
      uVar2 = 3;
    }
    else if (param_1 < 0x2d8e) {
      uVar3 = 0;
      uVar4 = 0xff;
      uVar2 = 2;
    }
    else if (param_1 < 0x3056) {
      uVar3 = 0;
      uVar4 = 0xff;
      uVar2 = 1;
    }
    else if (param_1 < 0x3058) {
      uVar3 = 0;
      uVar4 = 0xff;
      uVar2 = 1;
    }
    else {
      uVar3 = 0;
      uVar4 = 0xff;
      uVar2 = 0;
    }
  }
  else {
    if (DAT_20000884 % 0x32 < 0x1a) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 0xff;
      uVar4 = 0x7f;
    }
    uVar2 = 0;
    FUN_08024d18(param_1);
  }
  DAT_20000881 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_080208a0(uVar2,uVar3,uVar4,0,local_30);
    FUN_080208a0(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_0802300c(local_30,local_44);
  return;
}



/* ENTRY 0x0801eb44 : FUN_0801eb44 */

void FUN_0801eb44(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  sbyte sVar4;
  short sVar5;
  bool bVar6;
  
  uVar3 = diag_VehicleSpeed;
  if ((int)diag_VehicleSpeed < 0) {
    uVar3 = -diag_VehicleSpeed;
  }
  if (DAT_2000315c == 0) {
    if (DAT_2000315d == 0) {
      if ((DAT_20003153 & 0x70) == 0) {
        if ((DAT_20003178 < 0xc9) || (DAT_20003178 == 0xe0)) {
          if (uVar3 == 0) {
            if ((DAT_20003159 == '\0') || (3 < param_1 % 0xc)) {
              if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              iVar2 = FUN_08017400();
              if (DAT_20000878 < 0) {
                if ((iVar2 < 0x65) && (!bVar6)) {
                  DAT_20000880 = (byte)((iVar2 * 7) / 100);
                  if (6 < DAT_20000880) {
                    DAT_20000880 = 6;
                  }
                  iVar2 = 0xff;
                }
                if (DAT_20000878 < -0x30) {
                  DAT_20000878 = 0x18;
                }
              }
              DAT_20000878 = DAT_20000878 + -1;
              if ((100 < iVar2) || (bVar6)) {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  if (((DAT_20000880 != 0) || (param_1 % 10 < 5)) || (bVar6)) {
                    (&DAT_2000082f)[uVar3] = (&DAT_08027dba)[uVar3];
                    if ((int)(7 - (uint)DAT_20000880 % 7) <= (int)uVar3) {
                      (&DAT_2000082f)[uVar3] = (&DAT_2000082f)[uVar3] | 0x18;
                    }
                  }
                  else {
                    (&DAT_2000082f)[uVar3] = 0;
                  }
                }
              }
              else {
                sVar5 = (short)(DAT_20000878 + 0xfc) + (short)((DAT_20000878 + 0xfc) / 0x18) * -0x18
                        + -0xc;
                if (sVar5 < 0) {
                  sVar5 = -sVar5;
                }
                sVar5 = sVar5 + -7;
                sVar4 = 0;
                DAT_20000880 = (byte)iVar2;
                if (sVar5 < 5) {
                  if (0 < sVar5) {
                    sVar4 = (sbyte)sVar5;
                  }
                }
                else {
                  sVar4 = 4;
                }
                if (DAT_20000880 == 100) {
                  for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                    (&DAT_2000082f)[uVar3] =
                         (char)((int)(uint)CONCAT11((&DAT_08027db2)[uVar3],(&DAT_08027dc2)[uVar3])
                               >> sVar4);
                  }
                }
                else {
                  for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                    (&DAT_2000082f)[uVar3] =
                         (char)((int)((uint)CONCAT11((&DAT_08027db2)[uVar3],
                                                     (&DAT_08027d52)
                                                     [uVar3 + ((DAT_20000880 / 10) % 10) * 8]) |
                                     (uint)(byte)(&DAT_08027d52)
                                                 [uVar3 + ((uint)DAT_20000880 % 10) * 8] << 4) >>
                               sVar4);
                  }
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] = (&DAT_08027e4a)[uVar3];
              }
            }
          }
          else {
            bVar6 = (DAT_20003247 & 1) != 0;
            if (bVar6) {
              uVar3 = (uVar3 * 0x3e) / 100;
            }
            for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
              (&DAT_2000082f)[uVar1] =
                   (&DAT_08027d52)[uVar1 + ((uVar3 / 10000) % 10) * 8] |
                   (&DAT_08027d52)[uVar1 + ((uVar3 / 1000) % 10) * 8] << 4;
            }
            DAT_20000836 = bVar6 << param_1 % 9;
            DAT_20000878 = 0x18;
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            if (DAT_20003178 == 0xe2) {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] = 0;
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] = (&DAT_08027da2)[uVar3];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003157 == 0) {
              if (DAT_20003159 == '\0') {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  uVar1 = (byte)DAT_20003178 - 200 & 0xff;
                  (&DAT_2000082f)[uVar3] =
                       (&DAT_08027d52)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                       (&DAT_08027d52)[uVar3 + (uVar1 % 10) * 8] << 4;
                }
              }
              else {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  (&DAT_2000082f)[uVar3] = (&DAT_08027e4a)[uVar3];
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] =
                     (&DAT_08027daa)[uVar3] |
                     (&DAT_08027d52)[uVar3 + ((uint)DAT_20003157 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003159 == '\0') {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              uVar1 = (byte)DAT_20003178 - 200 & 0xff;
              (&DAT_2000082f)[uVar3] =
                   (&DAT_08027d52)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                   (&DAT_08027d52)[uVar3 + (uVar1 % 10) * 8] << 4;
            }
          }
          else {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              (&DAT_2000082f)[uVar3] = (&DAT_08027e4a)[uVar3];
            }
          }
          bVar6 = param_1 % 0x1e == 3;
          do {
            if (!bVar6) goto LAB_0801f084;
          } while (((DAT_200030de & 0x200) != 0x200) &&
                  (bVar6 = (DAT_200030de & 0x400) == 0x400, !bVar6));
          FUN_08023ae8(3);
        }
      }
      else {
        for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
          (&DAT_2000082f)[uVar3] =
               (&DAT_08027d52)[uVar3 + ((DAT_20003154 / 10) % 10) * 8] |
               (&DAT_08027d52)[uVar3 + ((uint)DAT_20003154 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar3 = DAT_2000315d - 1 & 0xff;
      if (5 < uVar3) {
        uVar3 = 5;
      }
      for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
        (&DAT_2000082f)[uVar1] = (&UNK_08027e1a)[uVar1 + uVar3 * 8];
      }
      DAT_2000315d = DAT_2000315d + 1;
      if (0x14 < DAT_2000315d) {
        DAT_2000315d = 0;
      }
    }
  }
  else {
    uVar3 = DAT_2000315c - 1 & 0xff;
    if (9 < uVar3) {
      uVar3 = 9;
    }
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000082f)[uVar1] = (&UNK_08027dca)[uVar1 + uVar3 * 8];
    }
    DAT_2000315c = DAT_2000315c + 1;
    if (0x14 < DAT_2000315c) {
      DAT_2000315c = 0;
    }
  }
LAB_0801f084:
  FUN_08011598(&DAT_2000082f);
  return;
}



/* ENTRY 0x0801f0a4 : thunk_FUN_0801f0b6 */

void thunk_FUN_0801f0b6(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801f0b6 : FUN_0801f0b6 */

void FUN_0801f0b6(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
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



/* ENTRY 0x0801f134 : FUN_0801f134 */

undefined4 FUN_0801f134(void)

{
  uint uVar1;
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  
  FUN_08008582(local_28,0x14);
  FUN_08008582(local_3c,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_28[uVar1] = 0;
    local_3c[uVar1] = 0;
  }
  return 0;
}



/* ENTRY 0x0801f16c : FUN_0801f16c */

void FUN_0801f16c(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(0x3d,1);
  FUN_0800bc5c(0x300200,1);
  FUN_0801ffa8(7);
  DAT_2000315c = 1;
  FUN_0800f298();
  FUN_08015464();
  local_8 = 0x10010002;
  FUN_0800bb9c(&DAT_40011000,&local_8);
  FUN_0801fe94();
  DAT_200006a4 = 0;
  local_8 = 0x10030004;
  FUN_0800bb9c(&DAT_40010c00,&local_8);
  FUN_0801fec0();
  return;
}



/* ENTRY 0x0801f1ec : FUN_0801f1ec */

void FUN_0801f1ec(void)

{
  int iVar1;
  
  DAT_200006b4 = DAT_200006b4 + 1;
  FUN_080197f0();
  FUN_080208c0();
  FUN_08020748();
  FUN_08021d44();
  if ((DAT_20003184 & 1) != 0) {
    if ((DAT_20000837 == '\0') && (iVar1 = FUN_08022cc0(DAT_20003110 / 10 & 0xffff), iVar1 == 1)) {
      FUN_08021a90();
    }
    DAT_20000837 = '\x01';
    DAT_20003184 = DAT_20003184 & 0xfe;
  }
  return;
}



/* ENTRY 0x0801f258 : FUN_0801f258 */

void FUN_0801f258(void)

{
  int iVar1;
  
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if (iVar1 < 0xafc9) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 0x9c41) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x61a9) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 0x4e21) {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if (iVar1 < 0x2711) {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            if (iVar1 < 0x1f41) {
              iVar1 = diag_VehicleSpeed;
              if (diag_VehicleSpeed < 0) {
                iVar1 = -diag_VehicleSpeed;
              }
              if (iVar1 < 0x1771) {
                iVar1 = diag_VehicleSpeed;
                if (diag_VehicleSpeed < 0) {
                  iVar1 = -diag_VehicleSpeed;
                }
                if (iVar1 < 0x7d1) {
                  if (100 < DAT_20003504) {
                    DAT_20003504 = DAT_20003504 + -0x32;
                  }
                  if (0x14 < DAT_2000350c) {
                    DAT_2000350c = DAT_2000350c + -1;
                  }
                }
                else {
                  if (DAT_20000622 < DAT_20003504) {
                    DAT_20003504 = DAT_20003504 + -0x14;
                  }
                  if (0x96 < DAT_2000350c) {
                    DAT_2000350c = DAT_2000350c + -2;
                  }
                }
              }
              else {
                if (DAT_20000622 < DAT_20003504) {
                  DAT_20003504 = DAT_20003504 + -0x14;
                }
                if (DAT_20003504 < 500) {
                  DAT_20003504 = DAT_20003504 + 0x1e;
                }
                if (0x96 < DAT_2000350c) {
                  DAT_2000350c = DAT_2000350c + -2;
                }
                if (DAT_2000350c < 100) {
                  DAT_2000350c = DAT_2000350c + 2;
                }
              }
            }
            else {
              if (DAT_20003504 < 500) {
                DAT_20003504 = DAT_20003504 + 0x1e;
              }
              if (0x96 < DAT_2000350c) {
                DAT_2000350c = DAT_2000350c + -2;
              }
              if (DAT_2000350c < 100) {
                DAT_2000350c = DAT_2000350c + 2;
              }
            }
          }
          else {
            if (DAT_20000622 + 0x1e < DAT_20003504) {
              DAT_20003504 = DAT_20003504 + -0x14;
            }
            if (DAT_20003504 < DAT_20000622) {
              DAT_20003504 = DAT_20003504 + 0x1e;
            }
            if (0x96 < DAT_2000350c) {
              DAT_2000350c = DAT_2000350c + -2;
            }
            if (DAT_2000350c < 100) {
              DAT_2000350c = DAT_2000350c + 2;
            }
          }
        }
        else {
          if (DAT_20003504 < DAT_20000622) {
            DAT_20003504 = DAT_20003504 + 0x1e;
          }
          if (DAT_2000350c < 100) {
            DAT_2000350c = DAT_2000350c + 2;
          }
        }
      }
      else {
        if (DAT_20000624 + 0x1e < DAT_20003504) {
          DAT_20003504 = DAT_20003504 + -0x14;
        }
        if (DAT_20003504 < DAT_20000624) {
          DAT_20003504 = DAT_20003504 + 0x1e;
        }
        if (DAT_2000350c < DAT_20000626) {
          DAT_2000350c = DAT_2000350c + 2;
        }
      }
    }
    else {
      if (DAT_20003504 < DAT_20000624) {
        DAT_20003504 = DAT_20003504 + 0x1e;
      }
      if (DAT_20000626 + 2 < DAT_2000350c) {
        DAT_2000350c = DAT_2000350c + -2;
      }
      if (DAT_2000350c < DAT_20000626) {
        DAT_2000350c = DAT_2000350c + 2;
      }
    }
  }
  else {
    if (DAT_20003504 < DAT_2000061e) {
      DAT_20003504 = DAT_20003504 + 0x1e;
    }
    if (DAT_2000350c < DAT_20000620) {
      DAT_2000350c = DAT_2000350c + 2;
    }
  }
  return;
}



/* ENTRY 0x0801f54c : FUN_0801f54c */

undefined2
FUN_0801f54c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_080115ea(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_080115ea(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801f578 : FUN_0801f578 */

void FUN_0801f578(void)

{
  int iVar1;
  
  if (DAT_2000082e < 0x10) {
    DAT_2000082e = DAT_2000082e + 1;
  }
  if ((diag_MosTemp < 0x2e) && (0xe < DAT_2000082e)) {
    if (diag_MosTemp < 0x28) {
      DAT_200006dd = 0;
      DAT_2000082c = 0;
    }
  }
  else {
    DAT_200006dd = 1;
    if (diag_cartstep == '\0') {
      DAT_2000082c = 4000;
    }
    else {
      DAT_2000082c = (diag_MosTemp + -0x2d) * 0x32 + 1000;
    }
    if (1999 < DAT_2000082c) {
      DAT_2000082c = 1999;
    }
  }
  if ((((DAT_2000072c != 0) || (DAT_20000730 != 0)) && (DAT_20003186 == '\x01')) &&
     (diag_AgeModeflg != '\0')) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (10000 < iVar1) {
      DAT_2000082c = 1999;
    }
  }
  if (DAT_2000082c < 0x65) {
    FUN_0800bcda(&DAT_40010c00,0x200);
  }
  else {
    FUN_0800bcd6(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x0801f674 : FUN_0801f674 */

void FUN_0801f674(void)

{
  return;
}



/* ENTRY 0x0801f678 : FUN_0801f678 */

int FUN_0801f678(int param_1)

{
  if (DAT_200001b0 == 'G') {
    DAT_200001da = (short)(((param_1 * 100) / 0x84 + 0x9c4 + DAT_200001da * 9) / 10);
  }
  else {
    DAT_200001da = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001da * 9) / 10);
  }
  return (int)(DAT_200001da / 10);
}



/* ENTRY 0x0801f6ec : FUN_0801f6ec */

undefined4 FUN_0801f6ec(void)

{
  return diag_pintch;
}



/* ENTRY 0x0801f6f8 : FUN_0801f6f8 */

undefined4 FUN_0801f6f8(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0801f704 : FUN_0801f704 */

undefined4 FUN_0801f704(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0801f710 : FUN_0801f710 */

uint FUN_0801f710(void)

{
  return (uint)DAT_200032b6 << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0801f728 : FUN_0801f728 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801f728(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_2000318c)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_2000318c = (undefined1)DAT_2000019c;
    DAT_2000318d = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000318e = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000318f = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_20003190 = (undefined1)DAT_200001a0;
    DAT_20003191 = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_20003192 = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_20003193 = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003194 = (undefined1)DAT_200001a4;
    DAT_20003195 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003196 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003197 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_2000318c)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0801f8a4 : FUN_0801f8a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801f8a4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_2000318c)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_2000318c = (undefined1)DAT_2000019c;
    DAT_2000318d = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000318e = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000318f = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_20003190 = (undefined1)DAT_200001a0;
    DAT_20003191 = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_20003192 = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_20003193 = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003194 = (undefined1)DAT_200001a4;
    DAT_20003195 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003196 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003197 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_2000318c)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0801fa14 : FUN_0801fa14 */

int FUN_0801fa14(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0801fa30 : FUN_0801fa30 */

bool FUN_0801fa30(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0801fafc : FUN_0801fafc */

int FUN_0801fafc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_08026ec0)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801fb3c : FUN_0801fb3c */

int FUN_0801fb3c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_08026ec0)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801fb7c : FUN_0801fb7c */

void FUN_0801fb7c(void)

{
  bool bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar5 = FUN_0800be20();
  bVar3 = (byte)uVar5;
  DAT_200005b0 = bVar3;
  if (uVar5 != DAT_200005d2) {
    iVar6 = FUN_08010f5c(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_0802733c + (uint)DAT_200005d2 * 3 + uVar5 * 0x18);
    DAT_20000396 = *(char *)((int)(&UNK_0802733c + (uint)DAT_200005d2 * 3 + uVar5 * 0x18) + 2);
    DAT_20000394._0_1_ = (char)uVar2;
    DAT_20000394 = uVar2;
    if ((char)DAT_20000394 == '\0') {
      DAT_20000394._1_1_ = (byte)((ushort)uVar2 >> 8);
      bVar4 = DAT_20000394._1_1_;
      switch(DAT_20000394._1_1_) {
      case 0:
        DAT_200005d0 = (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4;
        break;
      case 1:
        DAT_200005d0 = *(short *)(&DAT_200003c2 + (uint)DAT_20000598 * 0x10) +
                       (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4;
        break;
      case 2:
        DAT_200005d0 = (0x7ff8 - *(short *)(&DAT_200003be + (uint)DAT_20000598 * 0x10)) +
                       (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4;
        break;
      case 3:
        DAT_200005d0 = (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4 + 0x7ff8;
        break;
      case 4:
        DAT_200005d0 = *(short *)(&DAT_200003bc + (uint)DAT_20000598 * 0x10) + -0x7ff8 +
                       (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4;
        break;
      case 5:
        DAT_200005d0 = (DAT_20000396 * 0xf + DAT_20000396 * 0x3c) * -4 -
                       *(short *)(&DAT_200003c0 + (uint)DAT_20000598 * 0x10);
      }
      if (DAT_20000396 == DAT_200005d3) {
        if (iVar6 < 0x2001) {
          if (iVar6 < 0x14) {
            DAT_200005c8 = (int)((int)DAT_20000396 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000598 * 0x10 + 0x200003b8 +
                                        (uint)DAT_200005d2 * 2) * 100) / 0x14;
            DAT_200005bc = 0x14;
          }
          else {
            DAT_200005c8 = (int)((int)DAT_20000396 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000598 * 0x10 + 0x200003b8 +
                                        (uint)DAT_200005d2 * 2) * 100) / iVar6;
            DAT_200005bc = iVar6;
          }
        }
        else {
          DAT_200005c8 = 0;
          DAT_200005cc = 0;
          DAT_200005bc = 0x2000;
        }
        if (DAT_200005d4 < 0x5b) {
          DAT_200005d4 = DAT_200005d4 + 1;
        }
        else {
          DAT_200005c0 = DAT_200005c0 + 1;
          DAT_200005c4 = 1;
        }
      }
      else {
        DAT_200005d4 = 0;
        DAT_200005c4 = 0;
        DAT_200005c8 = 0;
        DAT_200005cc = 0;
        uVar8 = 1;
        DAT_200005d0 = *(short *)(&DAT_20000398 + (uint)DAT_20000394._1_1_ * 2);
      }
      iVar7 = DAT_200005c8 - DAT_200005cc;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x4b0) || (bVar1 = 10 < DAT_200005d5, DAT_200005d5 = DAT_200005d5 + 1, bVar1)) {
        DAT_200005cc = DAT_200005c8;
        DAT_200005d5 = 0;
      }
      DAT_200005b4 = diag_motor_spdir * DAT_200005cc;
      iVar7 = DAT_200005b4 - diag_HallRSP;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x640) || (bVar1 = 10 < DAT_200005d6, DAT_200005d6 = DAT_200005d6 + 1, bVar1)) {
        DAT_200005d6 = 0;
        diag_HallRSP = DAT_200005b4;
      }
      DAT_200005d3 = DAT_20000396;
      FUN_0800be60(uVar8,bVar4,(int)DAT_20000396,iVar6,DAT_200005d2);
      DAT_200005d2 = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005d2 = bVar3;
    }
  }
  return;
}



/* ENTRY 0x0801fe94 : FUN_0801fe94 */

void FUN_0801fe94(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(4,1);
  local_8 = 0x48030800;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801fec0 : FUN_0801fec0 */

void FUN_0801fec0(void)

{
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_0800eef8(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_0800bb9c(&DAT_40010c00,&local_24);
  FUN_0800eec8(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_0801141c(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_080112fa(&DAT_40000800,&local_20);
  FUN_0801135e(&DAT_40000800,8);
  FUN_08010cac(&DAT_40000800,1);
  FUN_08010d08(&DAT_40000800,1);
  FUN_08010d1a(&DAT_40000800,1);
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



/* ENTRY 0x0801ffa8 : FUN_0801ffa8 */

void FUN_0801ffa8(void)

{
  byte bVar1;
  
  FUN_080114f0();
  thunk_FUN_0801f0b6(10);
  FUN_08015798(0x8f);
  thunk_FUN_0801f0b6(1);
  FUN_08015798(0x40);
  thunk_FUN_0801f0b6(1);
  FUN_0800bcd6(&DAT_40011000,0x10);
  FUN_08011550(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_08011550(0);
  }
  FUN_0800bcda(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801fffc : FUN_0801fffc */

void FUN_0801fffc(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(0x10,1);
  local_8 = 0x28032000;
  FUN_0800bb9c(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x08020028 : FUN_08020028 */

void FUN_08020028(void)

{
  int iVar1;
  
  iVar1 = DAT_42220134;
  if (iVar1 == 0) {
    if (DAT_200001d8 == '\0') {
      if (DAT_200001ce < 0xfe) {
        DAT_200001ce = DAT_200001ce + 1;
        if (0x14 < DAT_200001ce) {
          if (DAT_200001d3 == 1) {
            DAT_200001d1 = DAT_200001d3;
          }
          else if (DAT_200001d3 == 2) {
            DAT_200001d2 = 1;
          }
          else if ((3 < DAT_200001d3) && (DAT_200001d3 < 8)) {
            DAT_200001d4 = 1;
          }
          DAT_200001d3 = 0;
        }
      }
      else {
        DAT_200001d0 = '\0';
        DAT_200001d1 = 0;
        DAT_200001d2 = 0;
        DAT_200001d4 = 0;
        DAT_200001d3 = 0;
      }
    }
    else {
      if (1 < DAT_200001cc) {
        if (DAT_200001cc < 0x14) {
          DAT_200001d3 = DAT_200001d3 + 1;
        }
        DAT_200001d0 = DAT_200001d0 + '\x01';
      }
      DAT_200001d5 = 0;
      DAT_200001cc = 0;
    }
    DAT_200001d8 = 0;
  }
  else {
    if (DAT_200001d8 == '\0') {
      if (0x14 < DAT_200001ce) {
        DAT_200001d3 = 0;
        DAT_200001d2 = 0;
        DAT_200001d4 = 0;
      }
      if (2 < DAT_200001ce) {
        DAT_200001d0 = '\x01';
      }
      DAT_200001d6 = 0;
      DAT_200001d7 = 0;
      DAT_200001ce = 0;
      DAT_200001d1 = 0;
    }
    else {
      if (DAT_200001cc < 0xfe) {
        DAT_200001cc = DAT_200001cc + 1;
      }
      if (DAT_200001d3 == 4) {
        DAT_200001d5 = 1;
      }
      if (100 < DAT_200001cc) {
        DAT_200001d4 = 0;
        DAT_200001d2 = 0;
        DAT_200001d3 = 0;
      }
      if ((DAT_200001cc == 0x28) && (DAT_200001d3 == 0)) {
        DAT_200001d6 = 1;
      }
      if (DAT_200001cc == 0xfa) {
        DAT_200001d7 = 1;
      }
      if (0x27 < DAT_200001cc) {
        DAT_200001d0 = '\0';
      }
    }
    DAT_200001d8 = 1;
  }
  return;
}



/* ENTRY 0x080201b8 : FUN_080201b8 */

bool FUN_080201b8(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d0 == '\x02';
  if (bVar1) {
    DAT_200001d0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x080201d4 : FUN_080201d4 */

bool FUN_080201d4(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d6 != '\0';
  if (bVar1) {
    DAT_200001d6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x080201ec : FUN_080201ec */

undefined4 FUN_080201ec(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_200001d5 == '\0') {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      DAT_200001d5 = '\0';
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08020208 : FUN_08020208 */

undefined4 FUN_08020208(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    DAT_20000290 = '\0';
    DAT_20000291 = 0;
  }
  if (DAT_20000290 == '\0') {
    iVar2 = diag_pintch_in - diag_sta_pitch;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x1000) {
      iVar2 = diag_fus_roll - diag_sta_roll;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x1000) {
        if (9 < DAT_20000291) {
          DAT_20000290 = 1;
          FUN_08010100();
          return 1;
        }
        DAT_20000291 = DAT_20000291 + 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0802028c : FUN_0802028c */

void FUN_0802028c(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_200006c4 != 0x12) {
    bVar3 = DAT_200006c4 == 0x14;
    do {
      if (!bVar3) goto LAB_08020430;
      bVar3 = DAT_200006cc == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_08020430;
    bVar3 = true;
  } while (diag_cartstep == '\b');
  if ((((DAT_20003212 & 0xf) == 1) || (DAT_200006df == '\x02')) &&
     (DAT_20000858 = DAT_20000858 + 1, DAT_20000858 == (DAT_20000858 / 2) * 2)) {
    if (DAT_2000085c == 0) {
      DAT_2000085c = 1;
    }
    else {
      DAT_2000085c = 0;
    }
  }
  if ((((DAT_20003212 & 0xf) == 1) || (DAT_200006df == '\x02')) && (DAT_200006c4 != 0x13)) {
    if (DAT_2000085c == 0) {
      if (param_1 == 0x12) {
        DAT_2000072c = 0xffff;
        DAT_20000730 = 0xffff;
      }
      else if (param_1 == 0x15) {
        DAT_2000072c = 0xffff;
        DAT_20000730 = 0;
      }
      else if (param_1 == 0x16) {
        DAT_2000072c = 0;
        DAT_20000730 = 0xffff;
      }
      else {
        DAT_2000072c = 0xffff;
        DAT_20000730 = 0;
      }
    }
    else {
      DAT_2000072c = 0;
      DAT_20000730 = 0;
    }
  }
  else if (DAT_200006c4 == 0x12) {
    if (param_1 == 0x12) {
      DAT_2000072c = 0xffff;
    }
    else if (param_1 == 0x15) {
      DAT_2000072c = 0xffff;
    }
    else if (param_1 == 0x16) {
      DAT_2000072c = 1000;
    }
  }
  else {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 10000) {
      DAT_2000072c = 0;
      iVar1 = FUN_0801f704();
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x2d000) && (iVar1 = FUN_0801f6ec(), 0x2d000 < iVar1)) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 == 0) {
          DAT_20000730 = 0;
          goto LAB_0802043a;
        }
      }
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_2000072c = (iVar1 * 800) / 1000 + 100;
    }
    else {
      DAT_2000072c = 0xffff;
    }
  }
LAB_0802043a:
  uVar2 = DAT_2000072c;
  if (1999 < DAT_2000072c) {
    uVar2 = 2000;
  }
  DAT_40000840 = (short)(((DAT_20003213 + 0x32) * uVar2) / 0x96);
  return;
LAB_08020430:
  DAT_2000072c = 0;
  DAT_20000730 = 0;
  goto LAB_0802043a;
}



/* ENTRY 0x08020494 : FUN_08020494 */

undefined2 FUN_08020494(void)

{
  DAT_20000860 = DAT_20000860 + 1;
  if ((ushort)((ushort)DAT_20000824 * 4) <= DAT_20000860) {
    DAT_20000860 = 0;
  }
  return (&DAT_20000734)[(int)(uint)DAT_20000860 >> 2];
}



/* ENTRY 0x080204d0 : FUN_080204d0 */

void FUN_080204d0(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08008582(auStack_34,0x14);
  FUN_08008582(auStack_48,0x14);
  DAT_20000884 = DAT_20000884 + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_080208a0(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_080208a0(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_08022e60(auStack_34,auStack_48);
    }
    else {
      FUN_0801e8ac(diag_TotalVoltage);
    }
  }
  else if (DAT_20000888 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_08024d18(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_0801f134();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08024d18(diag_TotalVoltage);
      }
    }
    else if (DAT_2000087c == 0) {
      iVar1 = FUN_080214bc();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_08024d18(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_0801e8ac(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031ec < iVar1 / 1000) {
            FUN_0801e7fc();
          }
          else {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            DAT_2000088a = (ushort)(iVar1 / 1000);
            if (0x28 < DAT_2000088a) {
              DAT_2000088a = 0x28;
            }
            DAT_2000088c = (int)((uint)DAT_200031ec - (uint)DAT_2000088a) / 5;
            if (DAT_2000088c == 0) {
              DAT_2000088c = 1;
            }
            if (((DAT_20003210 != 0) && (DAT_20003210 != 1)) &&
               ((DAT_20003210 != 2 && (DAT_20003210 != 3)))) {
              DAT_20003210 = 0;
            }
            FUN_0801c8f8(DAT_20000884,DAT_2000088c,DAT_20003210);
          }
        }
      }
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_2000087c = DAT_2000087c + -1;
      FUN_0801c8f8(DAT_20000884,(int)((uint)DAT_200031ec - iVar1 / 1000) / 5,DAT_20003210);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08024d18(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x08020748 : FUN_08020748 */

void FUN_08020748(void)

{
  int iVar1;
  
  if (DAT_200006c8 == 0x14) {
    DAT_20000855 = 0;
    DAT_200006c8 = 0;
  }
  else if (DAT_200006c8 == 0x12) {
    DAT_20000855 = 2;
    DAT_200006c8 = 0;
  }
  else if (DAT_200006c8 == 0x13) {
    DAT_20000855 = 4;
    DAT_200006c8 = 0;
  }
  iVar1 = FUN_080201b8();
  if (iVar1 != 0) {
    switch(DAT_20000855) {
    case 0:
      DAT_20000855 = 1;
    case 1:
    case 2:
      DAT_20000855 = DAT_20000855 + 1;
      DAT_200006c4 = 0x12;
      break;
    case 3:
      DAT_20000855 = DAT_20000855 + 1;
      DAT_200006c4 = 0x13;
      break;
    case 4:
      DAT_20000855 = 2;
      DAT_200006c4 = 0x12;
    }
    FUN_08023ae8(1);
    FUN_0801a2a8(3);
  }
  if (DAT_200006df == '\0') {
    FUN_0802028c((&DAT_20000724)[DAT_20000855]);
  }
  else {
    FUN_0802028c(DAT_20000725);
    DAT_200006c4 = 0x12;
  }
  return;
}



/* ENTRY 0x08020828 : FUN_08020828 */

void FUN_08020828(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x0802086c : FUN_0802086c */

uint FUN_0802086c(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x080208a0 : FUN_080208a0 */

void FUN_080208a0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x080208c0 : FUN_080208c0 */

void FUN_080208c0(void)

{
  DAT_20000856 = (ushort)(((uint)DAT_20000856 * 9 + ((int)(uint)diag_lightad >> 4)) / 10);
  if (DAT_200005fc == '\0') {
    DAT_200006cc = '\0';
  }
  else if (DAT_200006cc == '\0') {
    if (DAT_20000856 < 0x44c) {
      DAT_200006cd = DAT_200006cc;
      DAT_200006cc = '\x01';
    }
  }
  else if ((DAT_200006cc == '\x01') && (0x514 < DAT_20000856)) {
    DAT_200006cd = DAT_200006cc;
    DAT_200006cc = '\0';
  }
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



/* ENTRY 0x08020af0 : FUN_08020af0 */

undefined4 FUN_08020af0(void)

{
  FUN_0801b7b8();
  FUN_08009e3c();
  FUN_0800dd50();
  FUN_0800e21c(&LAB_08008fdc_1,0,&DAT_200018b8,2,2,&DAT_200016bc,0x80,0,3);
  FUN_0800e47c(0);
  FUN_0800dfe4();
  return 0;
}



/* ENTRY 0x08020b3c : FUN_08020b3c */

void FUN_08020b3c(void)

{
  int iVar1;
  int iVar2;
  
  DAT_200032bc = ((diag_HallRSP * 0x13240) / 15000 + DAT_200032bc * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000324) / 10;
  DAT_200032c8 = (DAT_200032c8 * 9 + DAT_20000328) / 10;
  DAT_200032d4 = FUN_080211b8((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002d8;
  if ((2 < diag_motionstep) && (diag_motionstep < 8)) {
    iVar1 = ((diag_BusCurrent * 0xd) / 100) * (DAT_200032c8 / 100);
    DAT_20000204 = DAT_20000204 + iVar1;
    if (iVar1 < 1) {
      DAT_20000208 = DAT_20000208 - iVar1;
    }
    else {
      DAT_2000020c = DAT_2000020c + iVar1;
    }
    DAT_20000210 = DAT_20000210 + 1;
    if (0x31 < DAT_20000210) {
      DAT_20000210 = 0;
      diag_this_ws = DAT_20000204 / 500 + diag_this_ws;
      DAT_200032e8 = DAT_20000208 / 500 + DAT_200032e8;
      DAT_200032ec = DAT_2000020c / 500 + DAT_200032ec;
      DAT_20000204 = 0;
      DAT_20000208 = 0;
      DAT_2000020c = 0;
    }
    DAT_200032f0 = (short)((iVar1 / 10 + DAT_200032f0 * 9) / 10);
  }
  iVar1 = DAT_200032bc;
  if (DAT_200032bc < 0) {
    iVar1 = -DAT_200032bc;
  }
  if (iVar1 < 3000) {
    if (DAT_200032c0 != '\0') {
      DAT_200032c0 = DAT_200032c0 + -1;
    }
  }
  else {
    DAT_200032c0 = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_20000200 == '\0') {
      iVar1 = DAT_200032cc - DAT_200032c8;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_200032c8)) {
        DAT_20000200 = '\x01';
      }
      else {
        DAT_200032cc = (DAT_200032cc * 0x13 + DAT_200032c8) / 0x14;
      }
    }
    else if (DAT_200032cc + 1 < DAT_200032c8) {
      DAT_200032cc = DAT_200032cc + 1;
    }
    else if (DAT_200032c8 + 1 < DAT_200032cc) {
      DAT_200032cc = DAT_200032cc + -1;
    }
    else {
      DAT_200032cc = DAT_200032c8;
    }
  }
  DAT_20000212 = (short)((DAT_20000212 * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_20000212 / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_200032cc / 100);
  if (iVar1 < 0x1e) {
    iVar1 = 0x1e;
  }
  else if (0x7d < iVar1) {
    iVar1 = 0x7d;
  }
  diag_VqSpeedRateRT = (short)(((int)diag_VqSpeedRateCFG * (int)diag_VqSprate_vpCFG) / iVar1);
  diag_VqIqRateRT = (short)(((int)diag_VqIqRateCFG * (int)diag_VqIqrate_vpCFG) / iVar1);
  iVar1 = diag_HallRSP;
  if (diag_HallRSP < 0) {
    iVar1 = -diag_HallRSP;
  }
  iVar2 = (diag_VqSpeedRateRT * iVar1) / 100;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  if ((diag_PhcurrLimit * 0x15) / 0x14 < iVar1) {
    if ((0x32 < DAT_20000218) && (iVar2 < 10000)) {
      DAT_20000218 = DAT_20000218 + -1;
    }
  }
  else if (DAT_20000218 < 100) {
    DAT_20000218 = DAT_20000218 + 1;
  }
  iVar1 = (((diag_VqIqRateRT * diag_PhcurrLimit) / 100) * (int)DAT_20000218) / 100;
  if (iVar2 < 0x6d61) {
    if (iVar2 < -28000) {
      iVar2 = -28000;
    }
  }
  else {
    iVar2 = 28000;
  }
  if (DAT_20000214 + 400 < iVar2) {
    iVar2 = DAT_20000214 + 400;
  }
  else if (iVar2 < DAT_20000214 + -400) {
    iVar2 = DAT_20000214 + -400;
  }
  DAT_20000214 = iVar2;
  diag_RsSpeedVq = (diag_VqSpeedRateRT * diag_HallRSP) / 100;
  diag_RtIqVq = (diag_VqIqRateRT * diag_g_average_iq) / 100;
  diag_PhcurrLimit_Vq_P = DAT_20000214 + iVar1;
  diag_PhcurrLimit_Vq_N = -iVar1 - DAT_20000214;
  if (DAT_2000032d != '\0') {
    DAT_200032b4 = DAT_200032b4 | 0x80;
  }
  return;
}



/* ENTRY 0x08020fd0 : FUN_08020fd0 */

bool FUN_08020fd0(void)

{
  if (DAT_200032c0 == '\0') {
    DAT_200032b6 = DAT_200032b6 | 8;
  }
  return DAT_200032c0 == '\0';
}



/* ENTRY 0x08020ff0 : FUN_08020ff0 */

void FUN_08020ff0(void)

{
  FUN_0800ed28(7);
  return;
}



/* ENTRY 0x08020ffc : FUN_08020ffc */

void FUN_08020ffc(void)

{
  FUN_0800da54();
  FUN_08022540();
  FUN_08010100(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x0802101c : FUN_0802101c */

void FUN_0802101c(void)

{
  FUN_0800bf50();
  return;
}



/* ENTRY 0x08021024 : FUN_08021024 */

void FUN_08021024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_200032bc;
      if (DAT_200032bc < 0) {
        iVar2 = -DAT_200032bc;
      }
      if ((iVar2 < 1000) && (DAT_200005fd == '\x01')) {
        DAT_200002d8 = 8;
      }
    }
  }
  else if (cVar1 == '\x01') {
    DAT_2000031e = *(undefined2 *)(param_1 + 2);
  }
  else if ((cVar1 == '\x02') && (diag_motionstep == '\x02')) {
    FUN_0800da54();
    DAT_2000031e = 0;
  }
  return;
}



/* ENTRY 0x08021094 : FUN_08021094 */

void FUN_08021094(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_2000031e;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_0800da54();
      diag_halldebugflg = 0;
      DAT_2000031e = 0;
      uVar1 = DAT_2000031e;
      uVar2 = diag_halldebugflg;
    }
  }
  else {
    uVar1 = (short)param_2;
    uVar2 = param_1;
    if ((DAT_200002d8 != '\b') &&
       (uVar1 = DAT_2000031e, uVar2 = diag_halldebugflg, diag_motionstep == '\x02')) {
      iVar3 = diag_HallRSP;
      if (diag_HallRSP < 0) {
        iVar3 = -diag_HallRSP;
      }
      if (iVar3 < 100) {
        DAT_200005fd = 0;
        DAT_200002d8 = '\b';
        uVar1 = (short)param_2;
        uVar2 = param_1;
      }
    }
  }
  diag_halldebugflg = uVar2;
  DAT_2000031e = uVar1;
  return;
}



/* ENTRY 0x08021110 : FUN_08021110 */

bool FUN_08021110(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08008494(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x08021150 : FUN_08021150 */

undefined4 FUN_08021150(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_0800db08(param_2,auStack_50);
  FUN_08021110(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x0802116e : FUN_0802116e */

bool FUN_0802116e(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != cVar2) {
    FUN_08008494(param_2,*(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x43,0x43);
    param_1[1] = param_1[1] + 1U & param_1[2] - 1U;
  }
  return cVar1 != cVar2;
}



/* ENTRY 0x080211a6 : FUN_080211a6 */

bool FUN_080211a6(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x080211b8 : FUN_080211b8 */

uint FUN_080211b8(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    uVar2 = uVar4 * 2;
    uVar3 = uVar3 * 4 + (param_1 >> 0x1e);
    param_1 = param_1 << 2;
    uVar4 = uVar4 * 4 + 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar3 - uVar4;
      uVar2 = uVar2 + 1;
    }
    uVar4 = uVar2;
  }
  return uVar4 & 0xffff;
}



/* ENTRY 0x080211e8 : FUN_080211e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_080211e8(void)

{
  return _DAT_0802a308 == 0x145b22b5;
}



/* ENTRY 0x08021204 : FUN_08021204 */

void FUN_08021204(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  uVar3 = DAT_20000950 & 3;
  uVar2 = DAT_20000957 & 7;
  uVar4 = DAT_20000962 & 3;
  uVar5 = DAT_20000969 & 3;
  if ((DAT_2000094f == uVar3) && (DAT_2000094e != '\x01')) {
    iVar1 = FUN_080211a6(&DAT_200005dc);
    if (iVar1 == 0) {
      FUN_0802116e(&DAT_200005dc,&local_58);
      FUN_08009f10(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000961 == uVar4) && (DAT_20000960 != '\x01')) {
        if ((DAT_20000968 == uVar5) && (DAT_20000967 != '\x01')) {
          if ((DAT_20000956 != uVar2) || (DAT_20000955 == '\x01')) {
            FUN_08009f10(&DAT_200043be + uVar2 * 0x14,(&DAT_20000958)[uVar2]);
            DAT_20000957 = (char)uVar2 + 1U & 7;
            DAT_20000955 = '\0';
          }
        }
        else {
          FUN_08009f10(&DAT_200044ae + uVar5 * 0x14,0x14);
          DAT_20000969 = (char)uVar5 + 1U & 3;
          DAT_20000967 = '\0';
        }
      }
      else {
        FUN_08009f10(&DAT_2000445e + uVar4 * 0x14,0x14);
        DAT_20000962 = (char)uVar4 + 1U & 3;
        DAT_20000960 = '\0';
      }
    }
  }
  else {
    FUN_08009f10(&DAT_2000436e + uVar3 * 0x14,0x14);
    DAT_20000950 = (char)uVar3 + 1U & 3;
    DAT_2000094e = '\0';
  }
  return;
}



/* ENTRY 0x0802136c : FUN_0802136c */

void FUN_0802136c(void)

{
  int iVar1;
  
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((iVar1 < 1000) && (diag_IQCurrent < 0x708)) {
    if (DAT_20000178 < 0x65) {
      DAT_20000178 = DAT_20000178 + 1;
    }
    else {
      DAT_20003185 = 1;
    }
  }
  else {
    DAT_20000178 = 0;
    DAT_20003185 = 0;
  }
  diag_currentmeter =
       FUN_08008320((int)((longlong)DAT_200005c0 * 0x1a),
                    (int)((ulonglong)((longlong)DAT_200005c0 * 0x1a) >> 0x20),3000,0);
  if ((diag_currentmeter & 0x80000000) != 0) {
    diag_currentmeter = 0;
  }
  diag_kilometer = diag_readoutmeter + diag_currentmeter;
  DAT_20003144 = diag_this_ws / 0xe10;
  if (DAT_20003144 < 0) {
    DAT_20003144 = -DAT_20003144;
  }
  diag_kiloWh = diag_this_ws / 0xe10 + DAT_2000313c;
  diag_curr_wsp = DAT_200032ec / 0xe10;
  if (diag_curr_wsp < 0) {
    diag_curr_wsp = -diag_curr_wsp;
  }
  diag_curr_wsn = DAT_200032e8 / 0xe10;
  if (diag_curr_wsn < 0) {
    diag_curr_wsn = -diag_curr_wsn;
  }
  if ((DAT_2000017c + 0x708 < DAT_200005c0) && (DAT_20000178 == 100)) {
    DAT_2000017c = DAT_200005c0;
    DAT_20000178 = 0;
    if ((DAT_2000317a == '\0') &&
       ((diag_AgeModeflg == '\0' && ((diag_kilometer & 0x80000000) == 0)))) {
      FUN_08022ae4(diag_kilometer,diag_kiloWh);
    }
  }
  return;
}



/* ENTRY 0x080214bc : FUN_080214bc */

undefined4 FUN_080214bc(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08008582(local_1c,0x14);
  FUN_08008582(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_2000317a == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_08022e60(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_2000320e == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_08022e60(local_1c,local_30);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
      local_1c[uVar2] = 0xff;
      local_30[uVar2] = 0xff;
    }
    FUN_08022e60(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0802159c : FUN_0802159c */

void FUN_0802159c(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_34;
  int local_30;
  
  iVar4 = DAT_200032bc;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_200032c8;
  iVar8 = 1;
  if (DAT_200032bc < 0) {
    iVar8 = -1;
  }
  if (DAT_200032c8 < 0x2329) {
    local_30 = 9000;
  }
  local_34 = diag_LimitSpeed;
  if (70000 < diag_LimitSpeed) {
    local_34 = 70000;
  }
  if (local_34 < 0x61a9) {
    local_34 = 25000;
  }
  if (DAT_200001e4 < local_30) {
    diag_g_winespeed_lv = diag_LimitSpeed;
    if (70000 < diag_LimitSpeed) {
      diag_g_winespeed_lv = 70000;
    }
    DAT_200001e8 = 0;
  }
  else {
    diag_g_winespeed_lv =
         ((((local_30 + -9000) * 100) / (DAT_200001e4 + -9000)) * (local_34 + -25000)) / 100 + 25000
    ;
    DAT_200001e8 = 1;
    if (diag_LimitSpeed < diag_g_winespeed_lv) {
      diag_g_winespeed_lv = diag_LimitSpeed;
    }
  }
  if (DAT_200032dc < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032dc;
  }
  if (DAT_200032e0 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032e0;
  }
  if (DAT_200032d4 < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_200032d4 + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001fc * iVar2) / 400;
  }
  iVar6 = DAT_200001fc;
  if ((iVar2 <= DAT_200001fc) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_200032bc;
  if (DAT_200032bc < 0) {
    iVar2 = -DAT_200032bc;
  }
  if (diag_g_winespeed_lv + -0x3d4 < iVar2) {
    iVar2 = DAT_200032bc;
    if (DAT_200032bc < 0) {
      iVar2 = -DAT_200032bc;
    }
    iVar2 = ((iVar2 - (diag_g_winespeed_lv + -0x3d4)) * 100) / 1000;
    lVar1 = (longlong)DAT_200001fc * (longlong)iVar2 * (longlong)iVar2;
    local_48 = (undefined4)lVar1;
    uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_0800840e(local_48,uStack_44,90000,0);
  }
  else {
    iVar2 = 0;
  }
  iVar3 = DAT_200001fc;
  if ((iVar2 <= DAT_200001fc) && (iVar3 = iVar2, iVar2 < 0)) {
    iVar3 = 0;
  }
  if (iVar3 < iVar6) {
    iVar3 = iVar6;
  }
  iVar2 = iVar5 - iVar3 * iVar8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x2000) {
    uVar7 = 0;
  }
  else {
    iVar2 = iVar5 - iVar3 * iVar8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x4000) {
      uVar7 = 1;
    }
    else {
      iVar2 = iVar5 - iVar3 * iVar8;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x8000) {
        uVar7 = 2;
      }
      else {
        iVar2 = iVar5 - iVar3 * iVar8;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 0xe000) {
          uVar7 = 3;
        }
        else {
          uVar7 = 4;
        }
      }
    }
  }
  if (iVar8 == 1) {
    if (iVar5 < iVar3) {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((30000 < iVar4) && (2 < uVar7)) {
        uVar7 = 2;
      }
      iVar5 = iVar5 + (short)(&DAT_200001f0)[uVar7];
    }
    else if (iVar3 < iVar5) {
      iVar5 = iVar5 - (int)(short)(&DAT_200001f0)[uVar7] / 3;
    }
  }
  else if (iVar8 == -1) {
    if (-iVar3 < iVar5) {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((30000 < iVar4) && (2 < uVar7)) {
        uVar7 = 2;
      }
      iVar5 = iVar5 - (short)(&DAT_200001f0)[uVar7];
    }
    else if (iVar5 < -iVar3) {
      iVar5 = iVar5 + (int)(short)(&DAT_200001f0)[uVar7] / 3;
    }
  }
  diag_angleoffset_int = iVar5;
  return;
}



/* ENTRY 0x08021890 : FUN_08021890 */

void FUN_08021890(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005e4 == '\0') {
    if (DAT_200030f4 < 500) {
      FUN_08024890(param_1,param_2 & 0xff);
    }
    FUN_08012044(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x1ef || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_0800da98(&local_54);
    if (iVar1 == 1) {
      FUN_08016028(&local_54);
    }
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



/* ENTRY 0x08021bbc : FUN_08021bbc */

void FUN_08021bbc(void)

{
  FUN_08021cd0();
  FUN_08022800();
  DAT_200031e6 = 0x12;
  DAT_200031e8 = 0x13;
  DAT_200031ea = 0x14;
  DAT_200031ec = 0x14;
  DAT_200031f4 = 0;
  DAT_200031ee = 1;
  DAT_2000320c = 0;
  DAT_2000320e = 0;
  DAT_20003210 = 2;
  DAT_20003212 = 0;
  DAT_20003213 = 0;
  DAT_20003214 = 0;
  DAT_20003218 = 0xff;
  DAT_20003219 = 0;
  DAT_2000321a = 0;
  DAT_2000321b = 0;
  DAT_2000321c = 0;
  DAT_2000321d = 0xff;
  DAT_2000321e = 0;
  DAT_2000321f = 0;
  DAT_20003220 = 0;
  DAT_20003221 = 0;
  DAT_20003222 = 0xff;
  DAT_20003223 = 0;
  DAT_20003224 = 0xa0;
  DAT_20003225 = 0x20;
  DAT_20003226 = 0xf0;
  DAT_20003227 = 0;
  DAT_20003228 = 0;
  DAT_2000322a = 0xff;
  DAT_2000322b = 0xff;
  DAT_2000322c = 0xff;
  DAT_2000322d = 0xff;
  DAT_2000323c = 1;
  DAT_2000323a = 1;
  DAT_20003244 = 0;
  FUN_080228a8();
  FUN_0801c168();
  return;
}



/* ENTRY 0x08021cd0 : FUN_08021cd0 */

void FUN_08021cd0(void)

{
  DAT_20003ff4 = 0xe000;
  DAT_20003ff6 = 0x28;
  DAT_20003ff8 = 7000;
  DAT_20003ffa = 20000;
  DAT_20003ffc = 10000;
  DAT_20003ffe = 0x9c4;
  DAT_20004000 = 0x5a;
  DAT_2000400e = 0x3c;
  DAT_20004010 = 6000;
  DAT_20004012 = 18000;
  DAT_20004014 = 8000;
  DAT_20004016 = 0x9c4;
  DAT_20004018 = 0x50;
  DAT_20004002 = 0x5a;
  DAT_20004004 = 5000;
  DAT_20004006 = 16000;
  DAT_20004008 = 6000;
  DAT_2000400a = 0x9c4;
  DAT_2000400c = 0x50;
  return;
}



/* ENTRY 0x08021d44 : FUN_08021d44 */

void FUN_08021d44(void)

{
  int iVar1;
  int iVar2;
  undefined2 local_38;
  undefined2 local_36;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  short local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  if (((DAT_2000317a == '\x01') || (DAT_20003185 == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_200006a0 = 0;
    DAT_200006a2 = 0;
  }
  else {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 0x2ee1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1f41) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 0x1771) {
          iVar1 = 0;
          iVar2 = 0;
        }
        else {
          iVar1 = 0;
          iVar2 = 0;
        }
      }
      else {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        iVar1 = (int)(short)(((iVar2 + -8000) * 12000) / 4000);
        iVar2 = (int)(short)(((iVar2 + -8000) * 3000) / 4000);
      }
    }
    else {
      iVar1 = 12000;
      iVar2 = 3000;
    }
    if (DAT_200006a2 < iVar1) {
      DAT_200006a2 = DAT_200006a2 + 100;
    }
    else if (iVar1 + 100 < (int)DAT_200006a2) {
      DAT_200006a2 = DAT_200006a2 + -100;
    }
    if (DAT_200006a0 < iVar2) {
      DAT_200006a0 = DAT_200006a0 + 0x1e;
    }
    else if (iVar2 + 0x1e < (int)DAT_200006a0) {
      DAT_200006a0 = DAT_200006a0 + -0x1e;
    }
    local_38 = DAT_20003ff4;
    local_36 = DAT_20003ff6;
    local_34 = DAT_20003ff8 + DAT_200006a0;
    local_32 = DAT_20003ffa + DAT_200006a2;
    local_30 = DAT_20003ffc;
    local_2e = DAT_20003ffe;
    local_2c = DAT_20004000;
    local_1e = DAT_2000400e;
    local_1c = DAT_20004010 + (short)(((int)DAT_200006a0 << 1) / 3);
    local_1a = DAT_20004012 + (short)(((int)DAT_200006a2 << 1) / 3);
    local_18 = DAT_20004014;
    local_16 = DAT_20004016;
    local_14 = DAT_20004018;
    local_2a = DAT_20004002;
    local_28 = DAT_20004004 + DAT_200006a0 / 3;
    local_26 = DAT_20004006 + DAT_200006a2 / 3;
    local_24 = DAT_20004008;
    local_22 = DAT_2000400a;
    local_20 = DAT_2000400c;
    FUN_08024990(&local_38);
  }
  return;
}



/* ENTRY 0x08021f5c : balance_control_candidate */

void balance_control_candidate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((diag_motionstep == '\x03') || (diag_motionstep == '\x04')) || (diag_motionstep == '\a')) &&
     ((DAT_200002d8 == '\x03' || (DAT_200002d8 == '\x04')))) {
    DAT_200002a0 = diag_pintch + diag_angleoffset_int;
    DAT_200002a4 = diag_s_acc;
    iVar2 = DAT_200002a0;
    if (0xf000 < DAT_200002a0) {
      iVar2 = 0xf000;
    }
    if (iVar2 < -0xf000) {
      iVar2 = -0xf000;
    }
    iVar3 = DAT_200032cc / 100;
    if (0x7b < iVar3) {
      iVar3 = 0x7b;
    }
    if (iVar3 < 0x60) {
      iVar3 = 0x60;
    }
    iVar4 = (int)(iVar2 * (uint)diag_pidk_p) / 100 +
            ((int)((uint)diag_pidk_acc * diag_s_acc +
                  ((uint)((int)((uint)diag_pidk_acc * diag_s_acc) >> 0x1f) >> 0x12)) >> 0xe);
    if (diag_HallRSP < 0x86) {
      if (diag_HallRSP < -0x85) {
        iVar1 = diag_HallRSP + 0x85;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = diag_HallRSP + -0x85;
    }
    if (DAT_20003311 == '\x01') {
      if (((byte)DAT_200032b6 & 0x40) == 0) {
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if ((iVar2 < DAT_200002d0) && (0x4b0 < DAT_200002d0)) {
          DAT_200002d0 = DAT_200002d0 + -100;
        }
        iVar2 = DAT_200002d0;
        if ((iVar1 <= DAT_200002d0) && (iVar2 = iVar1, iVar1 < -DAT_200002d0)) {
          iVar2 = -DAT_200002d0;
        }
        iVar1 = iVar2;
        if (1000 < DAT_20000298) {
          DAT_20000298 = DAT_20000298 + -0x32;
        }
      }
      else {
        if (DAT_200002d0 < 20000) {
          DAT_200002d0 = DAT_200002d0 + 100;
        }
        if (DAT_20000298 < 32000) {
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (iVar2 < 0x5000) {
            iVar2 = iVar4;
            if (iVar4 < 0) {
              iVar2 = -iVar4;
            }
            if (DAT_20000298 < iVar2) {
              DAT_20000298 = DAT_20000298 + 1;
            }
            else {
              DAT_20000298 = DAT_20000298 + 0x32;
            }
          }
        }
      }
    }
    else if (((byte)DAT_200032b6 & 0x40) == 0) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = -iVar1;
      }
      if ((iVar2 < DAT_200002d4) && (0x4b0 < DAT_200002d4)) {
        DAT_200002d4 = DAT_200002d4 + -100;
      }
      iVar2 = DAT_200002d4;
      if ((iVar1 <= DAT_200002d4) && (iVar2 = iVar1, iVar1 < -DAT_200002d4)) {
        iVar2 = -DAT_200002d4;
      }
      iVar1 = iVar2;
      if (100 < DAT_20000298) {
        DAT_20000298 = DAT_20000298 + -0x32;
      }
    }
    else {
      if (DAT_200002d4 < 20000) {
        DAT_200002d4 = DAT_200002d4 + 100;
      }
      if (DAT_20000298 < 32000) {
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 0x5000) {
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = -iVar4;
          }
          if (DAT_20000298 < iVar2) {
            DAT_20000298 = DAT_20000298 + 1;
          }
          else {
            DAT_20000298 = DAT_20000298 + 0x32;
          }
        }
      }
    }
    DAT_200002b8 = (DAT_200002b8 * 99 + iVar1 * 100) / 100;
    diag_commbospeed = DAT_200002b8 / 100;
    iVar2 = (int)((uint)diag_pidk_speed * DAT_200002b8) / 1000;
    if (DAT_200002ac + 0x14 < iVar2) {
      iVar2 = DAT_200002ac + 0x14;
    }
    if (iVar2 < DAT_200002ac + -0x14) {
      iVar2 = DAT_200002ac + -0x14;
    }
    iVar1 = diag_g_averX10_iq / 0x50;
    if (diag_commbospeed < 0x641) {
      if (diag_commbospeed < 1) {
        if (diag_commbospeed < -0x63f) {
          if (iVar1 < -200) {
            iVar1 = iVar1 + 200;
          }
          else {
            iVar1 = 0;
          }
        }
        else if (iVar1 < -200) {
          iVar1 = iVar1 + 200;
        }
        else {
          if (iVar1 < 0xc9) {
            iVar1 = 0;
          }
          else {
            iVar1 = iVar1 + -200;
          }
          iVar1 = (iVar1 * (diag_commbospeed + 0x640)) / 0x640;
        }
      }
      else if (iVar1 < 0xc9) {
        if (iVar1 < -199) {
          iVar1 = iVar1 + 200;
        }
        else {
          iVar1 = 0;
        }
        iVar1 = (iVar1 * (0x640 - diag_commbospeed)) / 0x640;
      }
      else {
        iVar1 = iVar1 + -200;
      }
    }
    else if (iVar1 < 0xc9) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -200;
    }
    diag_g_dif_iq = (short)(((int)diag_g_dif_iq + (iVar1 - DAT_2000036a) * 2) / 2);
    DAT_2000036a = (short)iVar1;
    DAT_200002b0 = diag_commbospeed;
    if (diag_commbospeed < 0) {
      DAT_200002b0 = -diag_commbospeed;
    }
    if (3000 < DAT_200002b0) {
      DAT_200002b0 = 3000;
    }
    iVar1 = (((int)(iVar1 * (uint)diag_k_pcurr) / 100) * (DAT_200002b0 + 2000)) / 5000;
    if (iVar1 < 0x2ee1) {
      if (iVar1 < -12000) {
        iVar1 = -12000;
      }
    }
    else {
      iVar1 = 12000;
    }
    DAT_2000029c = ((iVar4 + iVar2 + iVar1) * 0x72) / iVar3;
    if (DAT_20000294 < 32000) {
      DAT_20000294 = DAT_20000294 + 100;
    }
    if (DAT_20000294 < DAT_2000029c) {
      DAT_2000029c = DAT_20000294;
    }
    else if (DAT_2000029c < -DAT_20000294) {
      DAT_2000029c = -DAT_20000294;
    }
    if (DAT_20000298 < DAT_2000029c) {
      DAT_2000029c = DAT_20000298;
    }
    else if (DAT_2000029c < -DAT_20000298) {
      DAT_2000029c = -DAT_20000298;
    }
    DAT_2000031c = (undefined2)DAT_2000029c;
    DAT_200002ac = iVar2;
  }
  return;
}



/* ENTRY 0x08022540 : FUN_08022540 */

void FUN_08022540(void)

{
  DAT_2000029c = 0;
  DAT_200002a0 = 0;
  DAT_200002a4 = 0;
  diag_angleoffset_int = 0;
  DAT_200002ac = 0;
  DAT_200002b0 = 0;
  DAT_200002c0 = 0;
  DAT_200002bc = 0;
  FUN_0800b566(&DAT_200002c4);
  diag_commbospeed = 0;
  DAT_200002b8 = 0;
  DAT_2000036a = 0;
  FUN_0800da6c();
  DAT_20000294 = 0;
  return;
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



/* ENTRY 0x080227b0 : FUN_080227b0 */

void FUN_080227b0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(4,1);
  local_8 = 0x10031000;
  FUN_0800bb9c(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x080227dc : FUN_080227dc */

void FUN_080227dc(void)

{
  FUN_080150f8(0x10,&DAT_08001300);
  FUN_080150f8(0xe,&DAT_08001310);
  FUN_080150f8(0xc,&DAT_0800131e);
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



/* ENTRY 0x080228a8 : FUN_080228a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080228a8(void)

{
  _DAT_20003198 = 0x5465;
  DAT_2000319a = 0;
  _DAT_2000319c = 0x1450;
  DAT_2000319e = 0;
  _DAT_200031a0 = 0;
  DAT_200031a2 = 0;
  DAT_200031a4 = 0;
  DAT_200031a6 = 0;
  DAT_200031a8 = 0;
  DAT_200031aa = 0;
  DAT_200031ac = 500;
  DAT_200031ae = 0;
  DAT_200031b0 = 0;
  DAT_200031b2 = 0;
  DAT_200031b4 = 0;
  DAT_200031dc = 0;
  DAT_200031de = 0;
  DAT_200031e0 = 0;
  DAT_200031e2 = 0;
  DAT_200031e4 = 100;
  DAT_200031f0 = 0;
  DAT_200031f2 = 0;
  DAT_200031f6 = 0;
  DAT_200031f8 = 0;
  DAT_20003216 = 0;
  DAT_20003230 = 0;
  DAT_20003234 = 0;
  DAT_20003238 = 600;
  DAT_20003246 = 0;
  DAT_20003247 = 0;
  return;
}



/* ENTRY 0x08022928 : FUN_08022928 */

undefined4 FUN_08022928(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_2000313c = 0;
  DAT_20003144 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800f664();
  return 0;
}



/* ENTRY 0x08022954 : FUN_08022954 */

void FUN_08022954(void)

{
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0800eef8(0x11,1);
  FUN_0800bcde(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_0800bb9c(&DAT_40011000,&local_34);
  FUN_0800bc4a(&DAT_40011000,0x200);
  FUN_0800eeb0(2,1);
  FUN_0800a9f8(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_20004514;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_0800ab34(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_0800db7c(&local_54);
  FUN_0800ab24(&DAT_40020408,2,1);
  FUN_0800a9e4(&DAT_40020408,1);
  FUN_0800eef8(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_0801141c(&DAT_40013400,&local_40);
  FUN_0801136c(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_080112fa(&DAT_40013400,&local_50);
  FUN_0801135e(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_08010cbe(&DAT_40013400,&local_64);
  FUN_08010d02(&DAT_40013400,0x80);
  FUN_08010cac(&DAT_40013400,1);
  FUN_08010d40(&DAT_40013400,0xf,0x100);
  FUN_08010d30(&DAT_40013400,0x100);
  FUN_08010d1a(&DAT_40013400,1);
  FUN_08010d08(&DAT_40013400,1);
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



/* ENTRY 0x08022d54 : FUN_08022d54 */

void FUN_08022d54(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar4;
  undefined1 local_1c;
  
  sVar1 = 0x7b2;
  uVar3 = param_2 / 0x15180;
  while (0x16c < uVar3) {
    iVar2 = FUN_0800c9d4(sVar1);
    if (iVar2 == 0) {
      iVar2 = -0x16d;
    }
    else {
      if (extraout_r3 < 0x16e) {
        sVar1 = sVar1 + 1;
        uVar3 = extraout_r3;
        break;
      }
      iVar2 = -0x16e;
    }
    sVar1 = sVar1 + 1;
    uVar3 = extraout_r3 + iVar2;
  }
  uVar4 = 0;
  while (0x1b < uVar3) {
    iVar2 = FUN_0800c9d4(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_08027ee2)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_08027ee2)[uVar4];
    }
    else {
      if (extraout_r3_00 < 0x1d) break;
      iVar2 = -0x1d;
    }
    uVar4 = uVar4 + 1 & 0xffff;
    uVar3 = extraout_r3_00 + iVar2;
  }
  param_2 = param_2 % 0x15180;
  local_1c = (undefined1)(param_2 / 0xe10);
  *param_1 = local_1c;
  param_1[1] = (char)((param_2 % 0xe10) / 0x3c);
  param_1[2] = (char)(param_2 % 0xe10) + (char)((param_2 % 0xe10) / 0x3c) * -0x3c;
  *(short *)(param_1 + 4) = sVar1;
  param_1[6] = (char)uVar4 + '\x01';
  param_1[7] = (char)uVar3 + '\x01';
  param_1[8] = param_4;
  return;
}



/* ENTRY 0x08022e60 : FUN_08022e60 */

undefined4 FUN_08022e60(void)

{
  return 0;
}



/* ENTRY 0x08022e68 : FUN_08022e68 */

void FUN_08022e68(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_200009b2 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_20004514 + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + param_1 * 6 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46
             + (~((int)(uint)*(byte *)(param_2 + param_1 * 6 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
               0x14 | (((int)(uint)*(byte *)(param_3 + param_1 * 6 + uVar1) >> (7 - uVar2 & 0xff) &
                       1U) * 0x46 +
                      (~((int)(uint)*(byte *)(param_3 + param_1 * 6 + uVar1) >> (7 - uVar2 & 0xff))
                      & 1U) * 0x14) * 0x10000;
      }
    }
    iVar3 = param_1 * 2 + 1;
    for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_20004514 + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46 +
             (~((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
             0x14 | (((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U)
                     * 0x46 + (~((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >>
                                (7 - uVar2 & 0xff)) & 1U) * 0x14) * 0x10000;
      }
    }
    DAT_200009b2 = '\x01';
  }
  return;
}



/* ENTRY 0x08022fe4 : FUN_08022fe4 */

void FUN_08022fe4(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_2000402c)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_2000403e)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x0802300c : FUN_0802300c */

void FUN_0802300c(int param_1)

{
  uint uVar1;
  
  DAT_20000880 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000880 = DAT_20000880 + '\x01';
    }
    (&DAT_20004050)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20004051)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20004052)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x08023080 : FUN_08023080 */

int FUN_08023080(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_2000436e)[uVar2 * 0x14] = 0xaa;
    (&DAT_2000436f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20004370)[uVar2 * 0x14 + iVar1] = (&DAT_2000510f)[iVar1 + param_1 * 0x308];
    }
    (&DAT_2000437e)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20004371)[uVar2 * 0x14 + iVar1] = (&DAT_2000510f)[iVar1 + param_1 * 0x308];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08023158 : FUN_08023158 */

int FUN_08023158(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_2000436e)[uVar2 * 0x14] = 0xaa;
    (&DAT_2000436f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20004370)[uVar2 * 0x14 + iVar1] = (&DAT_2000503d)[iVar1 + param_1 * 0x308];
    }
    (&DAT_2000437e)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20004371)[uVar2 * 0x14 + iVar1] = (&DAT_2000503d)[iVar1 + param_1 * 0x308];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08023230 : FUN_08023230 */

void FUN_08023230(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_08008456(&DAT_2000096e);
  iVar3 = FUN_08008456(&DAT_20000975);
  sVar1 = 0;
  uVar5 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_2000436e)[uVar5 * 0x14] = 0xaa;
    (&DAT_2000436f)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20004370)[uVar5 * 0x14 + iVar4] = (&DAT_2000096e)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_2000096e)[iVar4] + sVar1;
    }
    (&DAT_20004370)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20004371)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_20000975)[iVar4];
      uVar6 = (byte)(&DAT_20000975)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20004371)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_2000437e)[uVar5 * 0x14] = 0xbb;
    (&DAT_2000437f)[uVar5 * 0x14] = 0x14;
    (&DAT_20004380)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20004381)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_20000951)[uVar5] = 0x14;
    DAT_2000094f = (char)uVar5 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return;
}



/* ENTRY 0x0802336c : FUN_0802336c */

int FUN_0802336c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_2000436e)[uVar2 * 0x14] = 0xaa;
    (&DAT_2000436f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20004370)[uVar2 * 0x14 + iVar1] = (&DAT_200031fa)[iVar1];
    }
    (&DAT_2000437e)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20004371)[uVar2 * 0x14 + iVar1] = (&DAT_200031fa)[iVar1];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08023420 : FUN_08023420 */

undefined4 FUN_08023420(void)

{
  FUN_0800ce3c(&DAT_20003318);
  return DAT_20003320;
}



/* ENTRY 0x08023434 : FUN_08023434 */

undefined4 FUN_08023434(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
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



/* ENTRY 0x08023554 : FUN_08023554 */

void FUN_08023554(undefined1 param_1)

{
  DAT_20003311 = param_1;
  return;
}



/* ENTRY 0x08023560 : FUN_08023560 */

undefined4 FUN_08023560(void)

{
  DAT_2000317a = 1;
  return 0;
}



/* ENTRY 0x08023570 : FUN_08023570 */

void FUN_08023570(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_200032c0 == '\0') {
    DAT_200032f8 = param_1;
  }
  return;
}



/* ENTRY 0x08023598 : FUN_08023598 */

void FUN_08023598(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_200032c0 == '\0') {
    DAT_200032fc = param_1;
  }
  return;
}



/* ENTRY 0x080235c0 : FUN_080235c0 */

undefined8 FUN_080235c0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + 6);
  iVar5 = (uint)*(byte *)(param_1 + 8) + (uint)*(byte *)(param_1 + 9) * 0x100;
  iVar7 = 0x2e;
  if (1000 < diag_kilometer) {
    iVar7 = (int)DAT_20000636;
  }
  for (uVar6 = 0; uVar6 < 6; uVar6 = uVar6 + 1 & 0xff) {
    if ((&DAT_2000323e)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_08023618;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_200031e6 = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_200031e6;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_200031e8 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_200031e8;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_200031ea = uVar1;
  }
  uVar1 = DAT_200031ea;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_200031ec = (short)iVar5;
  }
  sVar4 = DAT_200031ec;
  FUN_08023ae8(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0800f6a4(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_08024bd0();
LAB_08023618:
  return CONCAT44(param_2,param_1);
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



/* ENTRY 0x0802372c : FUN_0802372c */

void FUN_0802372c(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (diag_AgeModeflg == '\0') {
    if (DAT_20000688 != 0) {
      DAT_20000688 = DAT_20000688 + -1;
    }
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if ((iVar2 < diag_g_winespeed_lv + -1000) || (DAT_200001e8 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if ((int)((uint)DAT_200031e6 * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_200031e8 * 1000)) {
          if (DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) goto LAB_080237d2;
          bVar3 = DAT_20000640 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_080239b6;
LAB_080237d2:
              bVar3 = DAT_200031f4 == 1;
            } while (!bVar3);
            if (DAT_200031e6 == 0) goto LAB_080239b6;
            bVar3 = DAT_2000317a == '\0';
          } while (!bVar3);
          FUN_08023ae8(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_200031ea * 1000)) {
            if ((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
                (DAT_20000640 % 0x32 == 0x14)) &&
               (((DAT_200031f4 == 1 && (DAT_200031e8 != 0)) && (DAT_2000317a == '\0')))) {
              FUN_08023ae8(1);
            }
          }
          else if (DAT_200031f4 == 1) {
            if (((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
                 (DAT_20000640 % 0x32 == 0x14)) ||
                ((DAT_20000640 % 0x32 == 0x1e || (DAT_20000640 % 0x32 == 0x28)))) &&
               (DAT_2000317a == '\0')) {
              FUN_08023ae8(1);
            }
          }
          else if ((DAT_20000688 == 0) && (DAT_2000317a == '\0')) {
            if (DAT_200006a8 == 0) {
              DAT_200006ac = 2;
              DAT_20000688 = 300;
            }
            else {
              DAT_200006ac = 6;
              DAT_20000688 = 300;
            }
          }
        }
      }
    }
    else if (DAT_200031f4 == 1) {
      if (((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
           (DAT_20000640 % 0x32 == 0x14)) ||
          ((DAT_20000640 % 0x32 == 0x1e || (DAT_20000640 % 0x32 == 0x28)))) &&
         (DAT_2000317a == '\0')) {
        FUN_08023ae8(1);
      }
    }
    else if ((DAT_20000688 == 0) && (DAT_2000317a == '\0')) {
      if (DAT_200006a8 == 0) {
        DAT_200006ac = 2;
        DAT_20000688 = 300;
      }
      else {
        DAT_200006ac = 6;
        DAT_20000688 = 300;
      }
    }
LAB_080239b6:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_2000068c = 0x32;
    }
    else {
      bVar1 = DAT_2000068c + 1;
      bVar3 = 0x1e < DAT_2000068c;
      DAT_2000068c = bVar1;
      if (bVar3) {
        FUN_08023ae8(3);
        DAT_2000068c = 0;
      }
    }
    if ((DAT_20000644 == '\0') && (diag_cartstep != '\0')) {
      DAT_2000068a = DAT_2000068a + 1;
      if (DAT_2000068a < 0x1f5) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (100 < iVar2) {
          FUN_08023ae8(2);
        }
      }
      else {
        FUN_08023ae8(2);
        DAT_2000068a = 0;
      }
    }
    if (0 < DAT_2000068e) {
      DAT_2000068e = DAT_2000068e + -1;
    }
    if ((DAT_20003fe4 != '\0') && (DAT_2000068e == 0)) {
      if (DAT_200031f4 == 1) {
        FUN_08023ae8();
        DAT_2000068e = 100;
      }
      else {
        if (DAT_200006a8 == 0) {
          DAT_200006ac = 4;
        }
        else {
          DAT_200006ac = 10;
        }
        DAT_2000068e = 300;
      }
    }
    if (DAT_200006d4 != 0) {
      DAT_200006d4 = DAT_200006d4 + -1;
    }
  }
  return;
}



/* ENTRY 0x08023adc : FUN_08023adc */

void FUN_08023adc(undefined1 param_1)

{
  DAT_200001c8 = param_1;
  return;
}



/* ENTRY 0x08023ae8 : FUN_08023ae8 */

void FUN_08023ae8(undefined1 param_1)

{
  DAT_200001c9 = param_1;
  return;
}



/* ENTRY 0x08023af4 : FUN_08023af4 */

void FUN_08023af4(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800eef8(8,1);
  local_8 = 0x10030100;
  FUN_0800bb9c(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08023b20 : FUN_08023b20 */

void FUN_08023b20(void)

{
  if (DAT_200001c8 == '\0') {
    if (DAT_200001c9 != '\0') {
      if (DAT_200001ca < 4) {
        DAT_422181a0 = 1;
        DAT_200001ca = DAT_200001ca + 1;
      }
      else if (DAT_200001ca < 6) {
        DAT_422181a0 = 0;
        DAT_200001ca = DAT_200001ca + 1;
      }
      else {
        DAT_200001ca = 0;
        DAT_200001c9 = DAT_200001c9 + -1;
      }
    }
  }
  else if (DAT_200001ca < 0x1e) {
    DAT_422181a0 = 1;
    DAT_200001ca = DAT_200001ca + 1;
  }
  else if (DAT_200001ca < 0x32) {
    DAT_422181a0 = 0;
    DAT_200001ca = DAT_200001ca + 1;
  }
  else {
    DAT_200001ca = 0;
    DAT_200001c8 = DAT_200001c8 + -1;
  }
  return;
}



/* ENTRY 0x08023bd0 : FUN_08023bd0 */

void FUN_08023bd0(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000007c = FUN_0800de38(0);
  FUN_0801a488();
  do {
    FUN_0801a4d0();
    FUN_08023b20();
    FUN_0800de8c(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08023bfc : FUN_08023bfc */

void FUN_08023bfc(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031ee == 1) {
    FUN_0800bcda(&DAT_40011000,0x80);
  }
  else if (DAT_200005fc == '\x01') {
    FUN_0800bcd6(&DAT_40011000,0x80);
  }
  FUN_0801f578();
  if ((DAT_200006b8 == (DAT_200006b8 / 0x14) * 0x14) && (DAT_200006ce == '\x01')) {
    FUN_08023ae8();
  }
  if (DAT_200006b8 % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_20000838 == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_080201ec(0), iVar1 != 0)) {
      DAT_20000838 = '\x01';
    }
  }
  else if (DAT_20000838 == '\x01') {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (2000 < iVar1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 10000) && (iVar1 = FUN_080201ec(0), iVar1 != 0)) {
        FUN_08023560();
        FUN_08023ae8(1);
        DAT_20000838 = '\x02';
      }
    }
  }
  if ((((((DAT_200005fd == '\0') || (DAT_20000644 == '\0')) || (DAT_200006ce == '\x01')) ||
       ((DAT_200006d2 == '\x01' || (DAT_200006d3 == '\x01')))) ||
      ((DAT_200006d0 == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     ((DAT_20003153 & 1) != 0)) {
    DAT_200005fc = 0;
  }
  else {
    DAT_200005fc = 1;
  }
  if (DAT_20003238 == 0) {
    DAT_200030f8 = 0;
  }
  if (DAT_200006b8 % 6 == 2) {
    for (bVar3 = 0; DAT_20003178 = 0, bVar3 < 0x28; bVar3 = bVar3 + 1) {
      DAT_2000083c = DAT_2000083c + 1;
      uVar2 = DAT_2000083c % 0x28;
      DAT_20003178 = 0;
      if (uVar2 < 0x20) {
        if ((diag_allwarnbit >> uVar2 & 1) != 0) {
          if (DAT_2000083c % 0x140 < 0x118) {
            DAT_20003178 = (short)uVar2 + 0xc9;
          }
          break;
        }
      }
      else if (((int)(uint)DAT_200030e0 >> (uVar2 - 0x20 & 0xff) & 1U) != 0) {
        if (DAT_2000083c % 0x140 < 0x118) {
          DAT_20003178 = (short)uVar2 + 0xc9;
        }
        break;
      }
    }
  }
  DAT_20003164 = DAT_20003164 | diag_allwarnbit;
  FUN_0801eb44(DAT_200006b8);
  FUN_0800f170();
  FUN_08009e80();
  if ((DAT_20003183 != '\0') && (DAT_20003185 != '\0')) {
    FUN_08021a90();
    DAT_20003183 = '\0';
  }
  DAT_200006b8 = DAT_200006b8 + 1;
  return;
}



/* ENTRY 0x08023e60 : aggregate_telemetry */

void aggregate_telemetry(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  diag_TotalVoltage = DAT_200032c8;
  diag_TotalVol_show = DAT_200032cc;
  diag_VehicleSpeed = (DAT_200032bc + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)(((diag_VehicleSpeed - DAT_20000150) + diag_speedAcc * 9) / 10);
  diag_VectorVol = DAT_200032d4;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0801fb3c((int)DAT_200034fa);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0801fafc((int)DAT_200034f2);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0801fa14((int)DAT_20003500);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0801f678((int)DAT_20003324);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_200034fc >> 4));
  diag_lightad = DAT_200034f6;
  DAT_200030f2 = DAT_200034fe;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  diag_IQCurrent = (iVar1 + diag_IQCurrent * 0x1d) / 0x1e;
  diag_HallState = DAT_200005b0;
  if (0x96 < DAT_200030f4) {
    diag_TotalCurrent = diag_BusCurrent;
  }
  diag_cpurate = DAT_20000028;
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if (DAT_2000311c < iVar1) {
    DAT_2000311c = iVar1;
  }
  DAT_20003133 = (char)(((ulonglong)(uint)(diag_currentmeter * 0x12) / 5) / (ulonglong)DAT_20003110)
  ;
  if (DAT_20003110 < 6) {
    DAT_20003130 = (undefined1)(DAT_200032c8 / 100);
  }
  else {
    if ((int)DAT_20003132 < (int)diag_MosTemp) {
      DAT_20003132 = (char)diag_MosTemp;
    }
    iVar1 = (int)DAT_200032f0;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((int)(uint)DAT_20003134 < iVar1) {
      DAT_20003134 = (ushort)iVar1;
    }
    iVar1 = diag_TotalCurrent;
    if (diag_TotalCurrent < 0) {
      iVar1 = -diag_TotalCurrent;
    }
    if (DAT_20003128 < iVar1) {
      DAT_20003128 = iVar1;
    }
    if (DAT_20003120 < diag_TotalVol_show) {
      DAT_20003120 = diag_TotalVol_show;
    }
    if (diag_TotalVol_show < DAT_20003124) {
      DAT_20003124 = diag_TotalVol_show;
    }
    if ((int)DAT_20003136 < (int)diag_MotorTemp) {
      DAT_20003136 = (char)diag_MotorTemp;
    }
    if (DAT_20003137 < DAT_20003138) {
      DAT_20003137 = DAT_20003138;
    }
  }
  diag_allwarnbit = CONCAT22(DAT_200030de,DAT_200032b4);
  iVar1 = 0;
  if ((DAT_20004e26 == '\0') && (DAT_2000512e == '\0')) {
    uVar3 = 0;
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      if (((&DAT_200050b2)[uVar2] != 0) && ((&DAT_200050b2)[uVar2] != -1)) {
        iVar1 = iVar1 + (uint)(ushort)(&DAT_200050b2)[uVar2];
        uVar3 = uVar3 + 1 & 0xff;
      }
      if (((&DAT_200053ba)[uVar2] != 0) && ((&DAT_200053ba)[uVar2] != -1)) {
        iVar1 = iVar1 + (uint)(ushort)(&DAT_200053ba)[uVar2];
        uVar3 = uVar3 + 1 & 0xff;
      }
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar1 = iVar1 / (int)uVar3 + -0xaaa;
    DAT_20003138 = (char)(iVar1 / 10);
    if (iVar1 < 0x51) {
      if (iVar1 < 1) {
        if (30000 < DAT_200032dc) {
          DAT_200032dc = DAT_200032dc + -10;
        }
      }
      else {
        iVar1 = (iVar1 * 41000) / 0x50;
        if (DAT_200032dc < iVar1 + 0x7526) {
          DAT_200032dc = DAT_200032dc + 10;
        }
        if (iVar1 + 0x753a < DAT_200032dc) {
          DAT_200032dc = DAT_200032dc + -10;
        }
      }
    }
    else if (DAT_200032dc < 71000) {
      DAT_200032dc = DAT_200032dc + 10;
    }
  }
  else if (DAT_200032dc < 71000) {
    DAT_200032dc = DAT_200032dc + 10;
  }
  if ((DAT_200030de & 1) != 0) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if ((6000 < iVar1) && (iVar1 + 1000 < DAT_200032e0)) {
      DAT_200032e0 = iVar1 + 1000;
    }
    if (3000 < DAT_200032e0) {
      DAT_200032e0 = DAT_200032e0 + -0x32;
    }
  }
  return;
}



/* ENTRY 0x08024230 : FUN_08024230 */

void FUN_08024230(void)

{
  DAT_200030f0 = DAT_200034f8;
  return;
}



/* ENTRY 0x08024244 : FUN_08024244 */

void FUN_08024244(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_20000160 != 0) {
    DAT_20000160 = DAT_20000160 + -1;
  }
  if (DAT_20000162 != 0) {
    DAT_20000162 = DAT_20000162 + -1;
  }
  if (DAT_20000164 != 0) {
    DAT_20000164 = DAT_20000164 + -1;
  }
  if (DAT_20000166 != 0) {
    DAT_20000166 = DAT_20000166 + -1;
  }
  if (DAT_2000016a != 0) {
    DAT_2000016a = DAT_2000016a + -1;
  }
  if (DAT_2000016c != 0) {
    DAT_2000016c = DAT_2000016c + -1;
  }
  if (DAT_2000016e != 0) {
    DAT_2000016e = DAT_2000016e + -1;
  }
  if (DAT_20000170 != 0) {
    DAT_20000170 = DAT_20000170 + -1;
  }
  if (DAT_20000630 < diag_TotalVoltage) {
    bVar1 = 0x27 < DAT_20000154;
    DAT_20000154 = DAT_20000154 + 1;
    if ((bVar1) && (DAT_20000154 = 0, DAT_20000160 == 0)) {
      FUN_0800ed28(7);
      DAT_200030de = DAT_200030de | 0x4000;
      DAT_20000160 = 400;
      FUN_0801a2a8(7);
    }
  }
  else {
    DAT_20000154 = 0;
    DAT_200030de = DAT_200030de & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000628) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002d8 == '\x04')))) {
    bVar1 = 199 < DAT_2000015b;
    DAT_2000015b = DAT_2000015b + 1;
    if ((bVar1) && (DAT_2000015b = '\0', DAT_20000168 == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800ed28(7);
      }
      DAT_200030de = DAT_200030de | 0x1000;
      DAT_20000168 = 400;
      FUN_0801a2a8(6);
    }
  }
  else {
    DAT_2000015b = '\0';
    DAT_200030de = DAT_200030de & 0xefff;
  }
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if (((DAT_2000062c < iVar2) && (diag_IQCurrent < 0x4b0)) && (0x7b0c < diag_VectorVol)) {
    bVar1 = 0xa0 < DAT_20000156;
    DAT_20000156 = DAT_20000156 + 1;
    if (bVar1) {
      DAT_20000156 = 0;
      if ((DAT_2000317a == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_08020ffc();
      }
      FUN_08015680(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030de = DAT_200030de | 4;
      FUN_0801a2a8(8);
    }
  }
  else if (DAT_20000156 < 2) {
    DAT_200030de = DAT_200030de & 0xfffb;
  }
  else {
    DAT_20000156 = DAT_20000156 - 2;
  }
  iVar2 = diag_TotalCurrent;
  if (diag_TotalCurrent < 0) {
    iVar2 = -diag_TotalCurrent;
  }
  if ((DAT_20000632 < iVar2) || ((((byte)DAT_200032b4 & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_20000158;
    DAT_20000158 = DAT_20000158 + 1;
    if ((bVar1) && (DAT_20000158 = 0, DAT_20000162 == 0)) {
      FUN_08015680(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030de = DAT_200030de | 8;
      DAT_20000162 = 300;
      FUN_0801a2a8(9);
    }
  }
  else if (DAT_20000158 == 0) {
    DAT_200030de = DAT_200030de & 0xfff7;
  }
  else {
    DAT_20000158 = DAT_20000158 - 1;
  }
  if (diag_VectorVol < 28000) {
    DAT_2000015d = '\0';
    DAT_200030de = DAT_200030de & 0xfffd;
  }
  else {
    bVar1 = 10 < DAT_2000015d;
    DAT_2000015d = DAT_2000015d + 1;
    if ((bVar1) && (DAT_2000015d = '\0', DAT_20000166 == 0)) {
      FUN_08015680(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030de = DAT_200030de | 2;
      DAT_20000166 = 100;
      FUN_0801a2a8(10);
    }
  }
  if ((((diag_HallState == '\a') || (diag_HallState == '\0')) || (10 < diag_hall_err)) ||
     (0x14 < DAT_20000172)) {
    bVar1 = 4 < DAT_2000015a;
    DAT_2000015a = DAT_2000015a + 1;
    if (bVar1) {
      DAT_2000015a = '\0';
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 6000) {
        DAT_200032b6 = DAT_200032b6 | 0x10;
      }
      DAT_200030de = DAT_200030de | 1;
      DAT_200032b4 = DAT_200032b4 | 1;
      if (DAT_20000164 == 0) {
        FUN_08015680(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_0801a2a8(5);
      }
    }
  }
  else {
    DAT_200032b6 = DAT_200032b6 & 0xffef;
    DAT_200030de = DAT_200030de & 0xfffe;
    DAT_200032b4 = DAT_200032b4 & 0xfffe;
    DAT_2000015a = '\0';
  }
  if (diag_MosTemp < DAT_20000634) {
    DAT_2000015c = '\0';
    DAT_200030de = DAT_200030de & 0xffdf;
  }
  else {
    bVar1 = 10 < DAT_2000015c;
    DAT_2000015c = DAT_2000015c + 1;
    if ((bVar1) && (DAT_2000015c = '\0', DAT_2000016a == 0)) {
      if (DAT_200002d8 != '\x01') {
        FUN_0800ed28(7);
        FUN_08015680(0x24,(int)diag_MosTemp,0);
        DAT_200030de = DAT_200030de | 0x20;
      }
      DAT_2000016a = 200;
      FUN_0801a2a8(0xb);
    }
  }
  if (((DAT_200032b4 & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08015680(0x1a,0);
    DAT_2000016e = 200;
    FUN_0801a2a8(0xd);
  }
  if (((DAT_200032b4 & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08015680(0x23,0);
    DAT_2000016c = 200;
    FUN_0801a2a8(0xc);
  }
  if (DAT_20003158 == '\0') {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002d8 != '\x01') {
        FUN_0800ed28(7);
      }
      DAT_20000170 = 200;
      FUN_0801a2a8(0xe);
    }
  }
  if (DAT_200001e8 == '\0') {
    if (DAT_20000174 != 0) {
      DAT_20000174 = DAT_20000174 + -1;
    }
  }
  else if (DAT_20000174 == 0) {
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    FUN_0801a2a8(0xf);
    if (iVar2 < 0xea61) {
      if (iVar2 < 0xc351) {
        if (iVar2 < 0x7531) {
          DAT_20000174 = 800;
        }
        else {
          DAT_20000174 = 400;
        }
      }
      else {
        DAT_20000174 = 200;
      }
    }
    else {
      DAT_20000174 = 100;
    }
  }
  else {
    DAT_20000174 = DAT_20000174 + -1;
  }
  return;
}



/* ENTRY 0x08024810 : FUN_08024810 */

undefined8 FUN_08024810(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  uint local_10;
  undefined4 uStack_c;
  
  local_14 = (undefined2)param_2;
  local_12 = (undefined2)((uint)param_2 >> 0x10);
  local_18 = (undefined1)param_1;
  local_17 = (undefined1)(param_1 >> 8);
  local_16 = (undefined1)(param_1 >> 0x10);
  local_15 = (undefined1)(param_1 >> 0x18);
  local_10 = param_3;
  uStack_c = param_4;
  FUN_0800eec8(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_0801141c(&DAT_40000c00,&local_14);
  FUN_080114ca(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_0800db7c(&local_18);
  FUN_08010d08(&DAT_40000c00,1);
  FUN_08011134(&DAT_40000c00,1);
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT13(local_15,CONCAT12(local_16,CONCAT11(local_17,
                                                  local_18)))));
}



/* ENTRY 0x08024884 : FUN_08024884 */

void FUN_08024884(void)

{
  FUN_08024810(4000);
  return;
}



/* ENTRY 0x08024890 : FUN_08024890 */

void FUN_08024890(char *param_1,int param_2)

{
  uint uVar1;
  
  if (((*param_1 == 'U') && (param_1[1] == -0x56)) && (param_2 == 0xe)) {
    uVar1 = (uint)(param_1[2] == '\v');
    if (param_1[3] == -0x13) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[4] == DAT_200005e5) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[5] == DAT_200005e6) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[6] == DAT_200005e7) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[7] == DAT_200005e8) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[8] == DAT_200005e9) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[9] == DAT_200005ea) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[10] == DAT_200005eb) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[0xb] == DAT_200005ec) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 10) {
      DAT_200005e4 = 1;
    }
  }
  return;
}



/* ENTRY 0x08024940 : FUN_08024940 */

void FUN_08024940(void)

{
  DAT_200006b0 = DAT_200006b0 + 1;
  FUN_08016408(&DAT_200006ac);
  if (DAT_20000638 < 3) {
    DAT_20000638 = DAT_20000638 + 1;
  }
  else {
    DAT_20000638 = '\0';
  }
  FUN_08022e68(DAT_20000638,&DAT_2000402c,&DAT_2000403e);
  return;
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



/* ENTRY 0x08024bd0 : FUN_08024bd0 */

undefined4 FUN_08024bd0(void)

{
  if (DAT_200031e6 < 0x65) {
    if (DAT_200031e6 == 0) {
      DAT_2000060e = 1;
    }
    else {
      DAT_2000060e = (undefined1)DAT_200031e6;
    }
  }
  else {
    DAT_2000060e = 100;
  }
  if (DAT_200031e8 < 0x65) {
    if (DAT_200031e8 == 0) {
      DAT_2000060f = 1;
    }
    else {
      DAT_2000060f = (undefined1)DAT_200031e8;
    }
  }
  else {
    DAT_2000060f = 100;
  }
  if (DAT_200031ea < 0x65) {
    if (DAT_200031ea == 0) {
      DAT_20000610 = 1;
    }
    else {
      DAT_20000610 = (undefined1)DAT_200031ea;
    }
  }
  else {
    DAT_20000610 = 100;
  }
  if (DAT_200031ec < 0x65) {
    if (DAT_200031ec == 0) {
      DAT_20000611 = 1;
    }
    else {
      DAT_20000611 = (undefined1)DAT_200031ec;
    }
  }
  else {
    DAT_20000611 = 100;
  }
  return 0;
}



/* ENTRY 0x08024c98 : FUN_08024c98 */

void FUN_08024c98(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000074 = FUN_0800de38(0);
  do {
    FUN_08024230();
    FUN_08024940();
    FUN_0800de8c(DAT_20000074,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08024cc0 : FUN_08024cc0 */

void FUN_08024cc0(void)

{
  if (DAT_20000898 < 0x14) {
    DAT_20000898 = DAT_20000898 + 1;
    DAT_20000894 = ((int)(uint)DAT_200034f8 >> 4) * 100;
  }
  else {
    DAT_20000894 = (DAT_20000894 * 99 + ((int)(uint)DAT_200034f8 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x08024d18 : FUN_08024d18 */

void FUN_08024d18(int param_1)

{
  int iVar1;
  
  if ((DAT_20000884 % 0x226 == 200) && (DAT_200031f4 == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_08024d5e;
    }
    FUN_08023ae8(3);
  }
LAB_08024d5e:
  if ((DAT_20000884 % 900 == 200) && (DAT_200031f4 == 0)) {
    if (param_1 < 0x2454) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (7000 < iVar1) {
        if (DAT_200006a8 == 0) {
          DAT_200006ac = 1;
          return;
        }
        DAT_200006ac = 7;
        return;
      }
    }
    if (0x3264 < param_1) {
      if (DAT_200006a8 == 0) {
        DAT_200006ac = 5;
      }
      else {
        DAT_200006ac = 8;
      }
    }
  }
  return;
}



/* ENTRY 0x08024de0 : FUN_08024de0 */

void FUN_08024de0(void)

{
  DAT_20000640 = DAT_20000640 + 1;
  FUN_0802372c();
  FUN_080109f4();
  FUN_080204d0();
  FUN_0801b990();
  return;
}


