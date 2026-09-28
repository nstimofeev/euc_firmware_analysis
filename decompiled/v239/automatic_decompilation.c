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
  (*(code *)0x800816c)(&DAT_08027e04,0x20000000,0x9f4);
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
  FUN_08020524();
  uVar2 = FUN_0800861a();
  FUN_080081e8();
  FUN_0800862c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08010898();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08027e04,0x20000000,0x9f4);
  return;
}



/* ENTRY 0x0800820c : FUN_0800820c */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0800820c(void)

{
  FUN_08010898();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08027e04,0x20000000,0x9f4);
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
  return 0x2000796020006560;
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
  FUN_0800e226();
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
  return &DAT_20006500;
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
  FUN_08010898();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08027e04,0x20000000,0x9f4);
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
    FUN_0800c358();
    switch(DAT_20000308) {
    case 1:
    case 2:
      FUN_0800c380(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_0800bfec(&DAT_20003490);
      break;
    case 3:
      DAT_20000379 = FUN_0800c4d0();
      break;
    case 4:
    case 5:
      FUN_0800b73c(DAT_20000308);
      break;
    case 7:
      FUN_0801b0ac();
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
    FUN_0800ed34(0x200);
    FUN_0800ed34(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_0800ed34(0x400);
    FUN_0800ed34(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_0800ed34(0x8000);
  FUN_0800ed34(0x8000,0);
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
  iVar5 = FUN_0800ff30(*piVar1);
  iVar6 = FUN_0800a5f4(*piVar1);
  iVar7 = FUN_0800ff30(*(undefined4 *)(param_1 + 0xa0));
  iVar8 = FUN_0800a5f4(*(undefined4 *)(param_1 + 0xa0));
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
  uVar14 = *(uint *)(param_1 + 0x68) + uVar10;
  uVar11 = 0x4000 - DAT_20000018;
  lVar3 = (ulonglong)uVar14 * (ulonglong)uVar11;
  uVar13 = (uint)lVar3;
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x50) * (ulonglong)DAT_20000018;
  uVar12 = (uint)lVar4;
  iVar5 = uVar13 + uVar12;
  uVar16 = FUN_0800840e(iVar5,uVar14 * ((int)uVar11 >> 0x1f) +
                              (*(int *)(param_1 + 0x6c) +
                              ((int)uVar10 >> 0x1f) + (uint)CARRY4(*(uint *)(param_1 + 0x68),uVar10)
                              ) * uVar11 + (int)((ulonglong)lVar3 >> 0x20) +
                              *(uint *)(param_1 + 0x50) * ((int)DAT_20000018 >> 0x1f) +
                              *(int *)(param_1 + 0x54) * DAT_20000018 +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar13,uVar12),0x4000,0
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
            FUN_08020ac8(0);
          }
        }
        else {
          DAT_20000842 = '\x06';
          DAT_20000844 = 0;
          DAT_20000848 = 0;
          diag_AgeChgflg = 1;
          FUN_08020ac8(0);
        }
      }
      else {
        DAT_20000842 = '\x05';
        DAT_20000844 = 0;
        DAT_20000848 = 0;
        FUN_08020ac8(0);
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
          iVar1 = FUN_0801f138();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_2000071c == 0)) {
            DAT_20000844 = 1;
            DAT_20000842 = '\x02';
            DAT_20000848 = 0;
            FUN_08020ac8(4,1);
          }
        }
        DAT_200006df = 2;
        break;
      case '\x02':
        iVar1 = FUN_0801f138();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_2000071c == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_20000848 < 0xbb9)) ||
             (DAT_20000848 < 0x65)) {
            if (DAT_20000844 < 0x9c4) {
              DAT_20000844 = DAT_20000844 + 10;
              FUN_08020ac8(4,(int)DAT_20000844);
            }
          }
          else {
            DAT_20000844 = 0;
            DAT_20000842 = '\x03';
            FUN_08020ac8(0);
          }
        }
        else {
          DAT_20000844 = 0;
          DAT_20000842 = '\x01';
          FUN_08020ac8(0);
        }
        DAT_200006df = 1;
        break;
      case '\x03':
        if (DAT_20003185 == '\x01') {
          iVar1 = FUN_0801f138();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_2000071c == 0)) {
            DAT_20000844 = 1;
            DAT_20000842 = '\x04';
            DAT_20000848 = 0;
            FUN_08020ac8(0,1);
          }
        }
        DAT_200006df = 2;
        break;
      case '\x04':
        iVar1 = FUN_0801f138();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000720 == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_20000848)) ||
             (2999 < DAT_20000848)) {
            DAT_20000844 = 0;
            DAT_20000842 = '\x01';
            FUN_08020ac8(0);
          }
          else if (DAT_20000844 < 30000) {
            DAT_20000844 = DAT_20000844 + 100;
            FUN_08020ac8(0,(int)DAT_20000844);
          }
        }
        else {
          DAT_20000844 = 0;
          DAT_20000842 = '\x03';
          FUN_08020ac8(0);
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
          FUN_08020ac8(0);
        }
        DAT_200006df = 2;
      }
      DAT_20000848 = DAT_20000848 + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030f4 % 10 == 5) {
        FUN_080234ec(1);
      }
      DAT_200006df = 0;
      diag_AgeChgflg = 0;
      FUN_08020ac8(0);
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
      iVar3 = (*(int *)(&DAT_08025774 + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_08025774 + extraout_r3 * 4) * iVar3;
    }
  }
  return iVar3;
}



/* ENTRY 0x080091f4 : FUN_080091f4 */

void FUN_080091f4(void)

{
  FUN_0800ed4c(1);
  FUN_0800ed4c(0);
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
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar10 = 0;
  DAT_200009b8 = DAT_200009b8 + 1;
  uVar8 = DAT_200009b8 & 1;
  uVar9 = DAT_200009b8 & 1;
  uVar3 = DAT_200009b8 & 1;
  uVar4 = DAT_200009b8 & 1;
  uVar5 = DAT_200009b8 & 1;
  uVar7 = DAT_200009b8 & 1;
  if ((DAT_20004bab == '\0') && (DAT_20004ba7 == '\0')) {
    DAT_20003153 = DAT_20003153 & 0xef;
  }
  else {
    DAT_20003153 = DAT_20003153 | 0x10;
  }
  if ((DAT_20004d6b == '\0') && (DAT_20004d67 == '\0')) {
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
  if ((DAT_20004ba6 < 0x15) && (DAT_20004d66 < 0x15)) {
    DAT_200030de = DAT_200030de & 0xfbff;
    DAT_20003153 = DAT_20003153 & 0x7f;
  }
  else {
    DAT_200030de = DAT_200030de | 0x400;
    DAT_20003153 = DAT_20003153 | 0x80;
  }
  DAT_20003155 = 0x32 < DAT_20004bac;
  if (0x32 < DAT_20004d6c) {
    DAT_20003155 = DAT_20003155 | 2;
  }
  if (((((DAT_20004d37 & 0xea) == 0 || (int)(DAT_20004d37 & 0xea) < 0) &&
       ((DAT_20004d3b & 0x70) == 0 || (int)(DAT_20004d3b & 0x70) < 0)) &&
      ((DAT_20004ef7 & 0xea) == 0 || (int)(DAT_20004ef7 & 0xea) < 0)) &&
     ((DAT_20004efb & 0x70) == 0)) {
    DAT_20003156 = '\0';
    DAT_20003153 = DAT_20003153 & 0xfe;
  }
  else {
    DAT_20003156 = '\x01';
    DAT_20003153 = DAT_20003153 | 1;
  }
  if ((((((DAT_20004d37 & 0x15) == 0 || (int)(DAT_20004d37 & 0x15) < 0) &&
        ((DAT_20004d38 & 0x7f) == 0 || (int)(DAT_20004d38 & 0x7f) < 0)) &&
       (((DAT_20004d3b & 0xf) == 0 || (int)(DAT_20004d3b & 0xf) < 0 &&
        (((DAT_20004ef7 & 0x15) == 0 || (int)(DAT_20004ef7 & 0x15) < 0 &&
         ((DAT_20004ef8 & 0x7f) == 0 || (int)(DAT_20004ef8 & 0x7f) < 0)))))) &&
      ((DAT_20004efb & 0xf) == 0 || (int)(DAT_20004efb & 0xf) < 0)) &&
     ((((DAT_20004d44 & 0x80) == 0 || (int)(DAT_20004d44 & 0x80) < 0 &&
       ((DAT_20004f04 & 0x80) == 0 || (int)(DAT_20004f04 & 0x80) < 0)) && (DAT_20003156 != '\x01')))
     ) {
    DAT_200030de = DAT_200030de & 0xfdff;
  }
  else {
    DAT_200030de = DAT_200030de | 0x200;
  }
  if ((((DAT_20004d44 & 0x7f) == 0 || (int)(DAT_20004d44 & 0x7f) < 0) && (DAT_20004d45 == 0)) &&
     (((DAT_20004f04 & 0x7f) == 0 || (int)(DAT_20004f04 & 0x7f) < 0 && (DAT_20004f05 == 0)))) {
    DAT_20003157 = 0;
  }
  else {
    DAT_20003157 = 1;
  }
  if ((((DAT_20004d38 & 1) == 0) && ((DAT_20004ef8 & 1) == 0)) &&
     (((DAT_20004d3b & 1) == 0 && ((DAT_20004efb & 1) == 0)))) {
    if ((DAT_20003158 != 0) && (DAT_20003158 < 10)) {
      DAT_20003158 = DAT_20003158 - 1;
    }
  }
  else if (DAT_20003158 < 0x14) {
    DAT_20003158 = DAT_20003158 + 1;
  }
  if (((DAT_20004d37 & 1) == 0) && ((DAT_20004ef7 & 1) == 0)) {
    if ((DAT_20003159 != 0) && (DAT_20003159 < 10)) {
      DAT_20003159 = DAT_20003159 - 1;
    }
  }
  else if (DAT_20003159 < 0x14) {
    DAT_20003159 = DAT_20003159 + 1;
  }
  DAT_20003168 = DAT_20003168 | DAT_20004d37;
  DAT_20003169 = DAT_20004d38 | DAT_20003169;
  DAT_2000316c = DAT_20004d3b | DAT_2000316c;
  DAT_2000316d = DAT_2000316d | DAT_20004ef7;
  DAT_2000316e = DAT_2000316e | DAT_20004ef8;
  DAT_20003171 = DAT_20003171 | DAT_20004efb;
  DAT_20003172 = DAT_20003172 | DAT_20004d44 & 0x3f;
  DAT_20003173 = DAT_20003173 | DAT_20004d45;
  DAT_20003174 = DAT_20004f04 & 0x3f | DAT_20003174;
  DAT_20003175 = DAT_20003175 | DAT_20004f05;
  if (DAT_200009c0 != 0) {
    if (2 < DAT_200009c0) {
      return;
    }
    uVar10 = FUN_0801729c(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_20004d60 = DAT_20004d60 + 1;
      FUN_08009d98(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004f20 = DAT_20004f20 + 1;
      FUN_08009df8(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
    }
    DAT_200009c0 = DAT_200009c0 + 1;
    return;
  }
  if ((&DAT_20004ba7)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_20004bab)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_08018fc0(uVar7);
      if (iVar6 == 0) {
        (&DAT_20004bab)[uVar7 * 0x1c0] = (&DAT_20004bab)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_200009c4 & 3) != 2) {
        DAT_200009c4 = DAT_200009c4 + 1;
        return;
      }
      uVar8 = (uint)(DAT_20004bb0 * 100) / ((uint)DAT_200009c8 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004d70 * 100) / ((uint)DAT_200009c8 * 0xc) & 0xff;
      DAT_200009c4 = DAT_200009c4 + 1;
      FUN_080169bc(uVar8,uVar9);
      DAT_20003154 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_20004ba8)[uVar7 * 0x1c0] != -0x50) || ((&DAT_20004ba9)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_20004ba7)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_20004ba7)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_080178f8(uVar7);
      }
      else {
        (&DAT_20004ba8)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_20004ba9)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_08016dec(uVar7);
      }
      if (uVar9 == 0) {
        DAT_20004d60 = DAT_20004d60 + 1;
        FUN_08009d98(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004f20 = DAT_20004f20 + 1;
        FUN_08009df8(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_20004ba7)[uVar7 * 0x1c0] = (&DAT_20004ba7)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_20004ba7)[uVar7 * 0x1c0] = 0;
    (&DAT_20004bab)[uVar7 * 0x1c0] = 0x32;
    (&DAT_20004bb0)[uVar7 * 0x70] = 0;
    (&DAT_20004bad)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_20004ba5)[uVar7 * 0x1c0] == '\0') {
    (&DAT_20004ba6)[uVar7 * 0x1c0] = 0;
    (&DAT_20004bac)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_20004ba6)[uVar7 * 0x1c0] < 4) {
      (&DAT_20004ba6)[uVar7 * 0x1c0] = (&DAT_20004ba6)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_20004ba6)[uVar7 * 0x1c0] < 200) {
      (&DAT_20004ba6)[uVar7 * 0x1c0] = (&DAT_20004ba6)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_200009b8 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_20004ba6)[uVar7 * 0x1c0]) {
      if ((DAT_200009b8 & 0x3f) >> 1 == 0) {
        if ((&DAT_20004bac)[uVar7 * 0x1c0] != '\0') {
          (&DAT_20004bac)[uVar7 * 0x1c0] = (&DAT_20004bac)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_20004ba8)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_20004ba9)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_08016e34(uVar7);
        if (uVar3 == 0) {
          DAT_20004d60 = DAT_20004d60 + 1;
          FUN_08009d98(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004f20 = DAT_20004f20 + 1;
        FUN_08009df8(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_20004ba8)[uVar7 * 0x1c0] == -0x45) && ((&DAT_20004ba9)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_20004bac)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_20004d46)[uVar7 * 0x1c0] == '\0') {
    (&DAT_20004bb4)[uVar7 * 0x1c0] = (&DAT_20004bb4)[uVar7 * 0x1c0] + '\x01';
    (&DAT_20004bb4)[uVar7 * 0x1c0] = (&DAT_20004bb4)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_20004bb4)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_20004ba5)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_08017198(uVar7,0xc1,&DAT_20004ba4,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_20004ba5)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_08017198(uVar7,0xc2,&DAT_20004ba4,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_20004ba5)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_0801729c(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_20004ba5)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_20003185 == '\x01') || (iVar6 = FUN_0801f464(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_080173e8(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_20004d60 = DAT_20004d60 + 1;
      FUN_08009d98(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004f20 = DAT_20004f20 + 1;
      FUN_08009df8(&DAT_20004bb5 + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_20004d46)[uVar7 * 0x1c0];
    (&DAT_20004d46)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_0801758c(uVar7,0,uVar2,(&DAT_20004ca5)[uVar7 * 0x1c0],&DAT_20004c8d + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_20004ba5)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_20004d60 = DAT_20004d60 + 1;
        FUN_08009d98(&DAT_20004bb5 + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004f20 = DAT_20004f20 + 1;
        FUN_08009df8(&DAT_20004bb5 + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x08009b90 : FUN_08009b90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08009b90(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a528();
  if (iVar1 != 0) {
    FUN_0801eb50();
    iVar1 = FUN_08020438();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0801c2fc();
      iVar1 = FUN_0800cb5c();
      if (iVar1 == 0) {
        DAT_200032b4 = DAT_200032b4 | 0x40;
      }
      FUN_08020a04();
      FUN_08016520(0);
    }
    else {
      FUN_08016520(0);
    }
    iVar1 = FUN_0800c8bc();
    if (iVar1 == 2) {
      FUN_08022340();
    }
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    if ((DAT_20000094 & 0x80000000) != 0) {
      DAT_20000094 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    DAT_2000313c = DAT_20000094;
    FUN_080221c8();
    FUN_08009c78();
    FUN_0801fa30();
    FUN_080234f8();
    FUN_0800cf34();
    FUN_08011984(0x1c200);
    FUN_080178cc();
    FUN_0801980c();
    FUN_0800ecd4(0x40,1);
    FUN_08024250();
    FUN_0802236c();
    return 1;
  }
  return 0;
}



/* ENTRY 0x08009c60 : FUN_08009c60 */

void FUN_08009c60(void)

{
  FUN_0800da24(0x8000000);
  FUN_0800da10(0x300);
  return;
}



/* ENTRY 0x08009c78 : FUN_08009c78 */

void FUN_08009c78(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(8,1);
  local_8 = 0x28031000;
  FUN_0800b9bc(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08009ca4 : FUN_08009ca4 */

void FUN_08009ca4(void)

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



/* ENTRY 0x08009d34 : FUN_08009d34 */

undefined4 FUN_08009d34(int param_1,uint param_2)

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
    FUN_0800a7ec(0x2000);
    FUN_0800a804(&DAT_40020044,0);
    FUN_0800a9a6(&DAT_40020044,uVar2);
    FUN_0800a804(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009d98 : FUN_08009d98 */

undefined4 FUN_08009d98(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f8 == '\0') {
    DAT_200005f8 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003ae0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a7ec(0x20);
    FUN_0800a804(&DAT_4002001c,0);
    FUN_0800a9a6(&DAT_4002001c,uVar2);
    FUN_0800a804(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009df8 : FUN_08009df8 */

undefined4 FUN_08009df8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f9 == '\0') {
    DAT_200005f9 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003ca0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a7ec(0x10020000);
    FUN_0800a804(&DAT_40020458,0);
    FUN_0800a9a6(&DAT_40020458,uVar2);
    FUN_0800a804(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009e5c : FUN_08009e5c */

void FUN_08009e5c(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000006c = FUN_0800dc5c(0);
  do {
    FUN_0800cf64();
    FUN_08020a50();
    FUN_0800dcb0(DAT_2000006c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009e84 : FUN_08009e84 */

void FUN_08009e84(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_0800dc5c(0);
  FUN_0800fdcc();
  do {
    FUN_080165c8();
    FUN_0800d754();
    FUN_0800dcb0(DAT_20000068,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009eb0 : FUN_08009eb0 */

void FUN_08009eb0(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000070 = FUN_0800dc5c(0);
  do {
    FUN_0800a0c4();
    FUN_08020570();
    FUN_0801bc24();
    FUN_08020c1c();
    FUN_080247ac();
    FUN_0800dcb0(DAT_20000070,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009ee4 : FUN_08009ee4 */

void FUN_08009ee4(void)

{
  FUN_0800eb68(3);
  FUN_0800ecb4(&DAT_40012c00);
  return;
}



/* ENTRY 0x08009ef8 : FUN_08009ef8 */

undefined4 FUN_08009ef8(void)

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
  FUN_0800e228(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800cc5c(&local_64);
    if (iVar2 != 0) {
      bVar7 = CARRY4(local_54,uVar3);
      uVar3 = local_54 + uVar3;
      iVar4 = iVar4 + ((int)local_54 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_50,uVar5);
      uVar5 = local_50 + uVar5;
      iVar6 = iVar6 + ((int)local_50 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_4c,local_30);
      local_30 = local_4c + local_30;
      local_2c = local_2c + ((int)local_4c >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_64,local_38);
      local_38 = local_64 + local_38;
      local_34 = local_34 + ((int)local_64 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_60,local_40);
      local_40 = local_60 + local_40;
      local_3c = local_3c + ((int)local_60 >> 0x1f) + (uint)bVar7;
      bVar7 = CARRY4(local_5c,local_48);
      local_48 = local_5c + local_48;
      local_44 = local_44 + ((int)local_5c >> 0x1f) + (uint)bVar7;
      sVar1 = sVar1 + 1;
    }
    local_28 = local_28 + 1 & 0xffff;
    FUN_0800e228(1);
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



/* ENTRY 0x0800a0b0 : FUN_0800a0b0 */

void FUN_0800a0b0(void)

{
  FUN_0800eb68(7);
  FUN_0800ecb4(&DAT_40012c00);
  return;
}



/* ENTRY 0x0800a0c4 : FUN_0800a0c4 */

void FUN_0800a0c4(void)

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
  FUN_0801fa5c();
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
        FUN_080234ec();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    DAT_20003124 = 0x3200;
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000611 * 1000;
    FUN_08019cdc(1);
    diag_cartstep = '\x02';
    DAT_20003187 = -6;
    break;
  case '\x02':
    DAT_20003131 = (undefined1)diag_MosTemp;
    DAT_2000312c = FUN_0800f040();
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
          iVar3 = FUN_08022654();
          if (iVar3 == 0) {
            FUN_080234ec(4);
          }
          else {
            FUN_080234e0(1);
            FUN_0801bb80();
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
        FUN_080234ec(4);
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
      FUN_0800da38();
    }
    DAT_20000148 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_2000014a == 2) {
      DAT_20003184 = DAT_20003184 | 1;
      FUN_08019cdc(0xf0);
      FUN_08019950(0xf0);
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
          FUN_0800da38();
        }
        uVar2 = DAT_2000014a + 1;
        bVar1 = 5 < DAT_2000014a;
        DAT_2000014a = uVar2;
        if (bVar1) {
          FUN_08020a30();
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
  iVar3 = FUN_0801fc08();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_080234ec(1);
      diag_cartstep = '\b';
      DAT_2000315b = 1;
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
        DAT_2000315b = 1;
        FUN_080234ec();
        diag_cartstep = '\b';
        DAT_200030f8 = 0;
      }
    }
  }
  else if ((DAT_200030fc < DAT_200030f8) && (DAT_200030f4 % 0x32 == 0x19)) {
    FUN_080234ec(1);
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
  FUN_08023c10();
  FUN_0801ec8c();
  FUN_08020d84();
  FUN_0801b034();
  if (DAT_20003312 != '\0') {
    FUN_080234ec(DAT_20003312);
    DAT_20003312 = '\0';
  }
  if (DAT_20003313 != '\0') {
    FUN_080234e0(DAT_20003313);
    DAT_20003313 = '\0';
  }
  return;
}



/* ENTRY 0x0800a528 : FUN_0800a528 */

bool FUN_0800a528(void)

{
  int local_18 [5];
  
  FUN_0800ed58(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a54c : FUN_0800a54c */

void FUN_0800a54c(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_08026b08 + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_08026b08 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_08026b08 + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_08026b08 + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_08026b08 + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_08026b08 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_08026b08 + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_08026b08 + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x0800a5f4 : FUN_0800a5f4 */

undefined4 FUN_0800a5f4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0800ff98(0x1000);
  FUN_0800ff30(param_1);
  iVar2 = FUN_0800ff98();
  uVar3 = FUN_0800ffaa(iVar1 - iVar2);
  return uVar3;
}



/* ENTRY 0x0800a624 : FUN_0800a624 */

void FUN_0800a624(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x20);
  if (iVar2 != 0) {
    FUN_0800a7ec(0x20);
    FUN_0800a804(&DAT_4002001c,0);
    FUN_0800d988();
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a664 : FUN_0800a664 */

void FUN_0800a664(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a924(0x200);
    if (iVar2 != 0) {
      FUN_0800a7ec(0x200);
    }
  }
  else {
    FUN_0800a7ec(0x400);
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a6ac : FUN_0800a6ac */

void FUN_0800a6ac(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x2000);
  if (iVar2 != 0) {
    FUN_0800a7ec(0x2000);
    FUN_0800a804(&DAT_40020044,0);
    FUN_0800d97c();
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a6f0 : FUN_0800a6f0 */

void FUN_0800a6f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a924(0x20000);
    if (iVar2 != 0) {
      FUN_0800a7ec(0x20000);
    }
  }
  else {
    FUN_0800a7ec(0x40000);
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a738 : FUN_0800a738 */

void FUN_0800a738(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a924(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_200009b2 = 0;
    FUN_0800a7ec(0x10000002);
  }
  return;
}



/* ENTRY 0x0800a760 : FUN_0800a760 */

void FUN_0800a760(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a924(0x10000200);
    if (iVar2 != 0) {
      FUN_0800a7ec(0x10000200);
    }
  }
  else {
    FUN_0800a7ec(0x10000400);
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a7a8 : FUN_0800a7a8 */

void FUN_0800a7a8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a924(0x10020000);
  if (iVar2 != 0) {
    FUN_0800a7ec(0x10020000);
    FUN_0800a804(&DAT_40020458,0);
    FUN_0800d994();
  }
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800a7ec : FUN_0800a7ec */

void FUN_0800a7ec(uint param_1)

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



/* ENTRY 0x0800a804 : FUN_0800a804 */

void FUN_0800a804(uint *param_1,int param_2)

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



/* ENTRY 0x0800a818 : FUN_0800a818 */

void FUN_0800a818(uint *param_1)

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



/* ENTRY 0x0800a91c : FUN_0800a91c */

uint FUN_0800a91c(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x0800a924 : FUN_0800a924 */

bool FUN_0800a924(uint param_1)

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



/* ENTRY 0x0800a944 : FUN_0800a944 */

void FUN_0800a944(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x0800a954 : FUN_0800a954 */

void FUN_0800a954(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x0800a9a6 : FUN_0800a9a6 */

void FUN_0800a9a6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x0800a9aa : FUN_0800a9aa */

void FUN_0800a9aa(undefined4 *param_1)

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



/* ENTRY 0x0800a9c4 : FUN_0800a9c4 */

void FUN_0800a9c4(void)

{
  FUN_0800eb68(5);
  return;
}



/* ENTRY 0x0800a9d0 : FUN_0800a9d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800a9d0(int param_1)

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



/* ENTRY 0x0800aa28 : FUN_0800aa28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800aa28(int param_1)

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



/* ENTRY 0x0800aad4 : FUN_0800aad4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800aad4(int param_1)

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



/* ENTRY 0x0800ab80 : FUN_0800ab80 */

int FUN_0800ab80(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a8(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f8(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a8(&DAT_0803b800);
  }
  return iVar1;
}



/* ENTRY 0x0800abbc : FUN_0800abbc */

int FUN_0800abbc(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a8(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f8(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a8(&DAT_0803e800);
  }
  return iVar1;
}



/* ENTRY 0x0800abf8 : FUN_0800abf8 */

int FUN_0800abf8(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a8(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f8(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a8(&DAT_0803f800);
  }
  return iVar1;
}



/* ENTRY 0x0800ac34 : FUN_0800ac34 */

int FUN_0800ac34(void)

{
  int iVar1;
  
  iVar1 = FUN_0800aa28(0);
  if (iVar1 != 0xab) {
    for (DAT_2000013c = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_2000013c <= (short *)((iVar1 + 1) * 0x800 + 0x803dfeb) && (*DAT_2000013c != -1));
        DAT_2000013c = DAT_2000013c + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ac94 : FUN_0800ac94 */

int FUN_0800ac94(void)

{
  int iVar1;
  
  iVar1 = FUN_0800aad4(0);
  if (iVar1 != 0xab) {
    for (DAT_20000140 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000140 <= (short *)((iVar1 + 1) * 0x800 + 0x803efeb) && (*DAT_20000140 != -1));
        DAT_20000140 = DAT_20000140 + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800acf4 : FUN_0800acf4 */

undefined4 FUN_0800acf4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08015d7c();
  FUN_0800c088();
  return uVar1;
}



/* ENTRY 0x0800ad04 : FUN_0800ad04 */

undefined4 FUN_0800ad04(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar1 = FUN_0800ac34();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_08015f74();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ac34();
  }
  FUN_0800b3e8();
  return uVar3;
}



/* ENTRY 0x0800ad3c : FUN_0800ad3c */

undefined4 FUN_0800ad3c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar1 = FUN_0800ac94();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_080161ac();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ac94();
  }
  FUN_0800b3e8();
  return uVar3;
}



/* ENTRY 0x0800ad74 : FUN_0800ad74 */

int FUN_0800ad74(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800a9d0(0);
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
  iVar1 = FUN_0800b3f8(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800c088();
    iVar1 = FUN_0800b0d0(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_200000a6)[uVar2] != param_1) &&
            (iVar1 = FUN_0800af9c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0d0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3a8(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_0800b3f8(puVar3,0);
      }
    }
  }
  return iVar1;
}



/* ENTRY 0x0800ae6c : FUN_0800ae6c */

int FUN_0800ae6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800aa28(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b3f8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b158(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b3a8(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800ae6e : FUN_0800ae6e */

int FUN_0800ae6e(void)

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
  iVar1 = FUN_0800aa28(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b3f8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b158(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b3a8(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800af04 : FUN_0800af04 */

int FUN_0800af04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800aad4(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b3f8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b1e8(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b3a8(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800af06 : FUN_0800af06 */

int FUN_0800af06(void)

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
  iVar1 = FUN_0800aad4(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b3f8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b1e8(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b3a8(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800af9c : FUN_0800af9c */

int FUN_0800af9c(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800a9d0(0);
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



/* ENTRY 0x0800b000 : FUN_0800b000 */

int FUN_0800b000(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800aa28(0);
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



/* ENTRY 0x0800b068 : FUN_0800b068 */

int FUN_0800b068(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800aad4(0);
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



/* ENTRY 0x0800b0d0 : FUN_0800b0d0 */

int FUN_0800b0d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800a9d0(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1)
    {
      if (*DAT_20000138 == -1) {
        iVar1 = FUN_0800b3f8(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_0800b3f8((int)DAT_20000138 + 2,param_1);
        DAT_20000138 = DAT_20000138 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}



/* ENTRY 0x0800b158 : FUN_0800b158 */

int FUN_0800b158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800aa28(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f8(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b15a : FUN_0800b15a */

int FUN_0800b15a(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800aa28(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f8(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b1e8 : FUN_0800b1e8 */

int FUN_0800b1e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800aad4(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f8(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b1ea : FUN_0800b1ea */

int FUN_0800b1ea(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800aad4(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f8(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b278 : FUN_0800b278 */

int FUN_0800b278(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b0d0(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800ad74(param_1,param_2);
  }
  return iVar1;
}



/* ENTRY 0x0800b29c : FUN_0800b29c */

int FUN_0800b29c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar2 = FUN_0800b158(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800ae6c(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b3e8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b29e : FUN_0800b29e */

int FUN_0800b29e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar2 = FUN_0800b158(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800ae6c(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b3e8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b2e4 : FUN_0800b2e4 */

int FUN_0800b2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar2 = FUN_0800b1e8(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800af04(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b3e8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b2e6 : FUN_0800b2e6 */

int FUN_0800b2e6(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b478();
  FUN_0800b39c(0x35);
  iVar2 = FUN_0800b1e8(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800af04(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b3e8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b32c : FUN_0800b32c */

uint FUN_0800b32c(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800b386 : FUN_0800b386 */

void FUN_0800b386(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800b39c : FUN_0800b39c */

void FUN_0800b39c(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x0800b3a8 : FUN_0800b3a8 */

void FUN_0800b3a8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b490(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_0800b490(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x0800b3e8 : FUN_0800b3e8 */

void FUN_0800b3e8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x0800b3f8 : FUN_0800b3f8 */

void FUN_0800b3f8(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b490(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_0800b490(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x0800b430 : FUN_0800b430 */

void FUN_0800b430(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b490(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_0800b490(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_0800b490(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x0800b478 : FUN_0800b478 */

void FUN_0800b478(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x0800b490 : FUN_0800b490 */

int FUN_0800b490(int param_1)

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



/* ENTRY 0x0800b4f4 : FUN_0800b4f4 */

void FUN_0800b4f4(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x0800b528 : FUN_0800b528 */

void FUN_0800b528(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_0800a54c(&local_2c,param_4);
  DAT_2000038c = local_2c;
  DAT_20000390 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x0800b588 : FUN_0800b588 */

void FUN_0800b588(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_2000038c * param_3;
  iVar1 = param_2 * DAT_20000390;
  *param_1 = (param_3 * DAT_20000390 + DAT_2000038c * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x0800b5d4 : FUN_0800b5d4 */

void FUN_0800b5d4(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08026a84 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08026a84 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x0800b63c : FUN_0800b63c */

int FUN_0800b63c(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x0800b6bc : FUN_0800b6bc */

void FUN_0800b6bc(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x0800b73c : FUN_0800b73c */

undefined8 FUN_0800b73c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800c380(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_0800b4f4(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_0800bfec();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000358 = FUN_0800bc1c();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000358 = diag_halloffset;
  }
  else {
    DAT_20000358 = DAT_20000358 + 1;
  }
  FUN_0800b528(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000358);
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
    diag_VQ = FUN_080157ac((int)DAT_2000031e);
  }
  else {
    diag_VQ = FUN_080157ac((int)DAT_2000031c);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_0800f240();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_0800b63c(DAT_20003494,diag_IDCurrent,&DAT_20003504);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_0800b5d4();
  FUN_0800b588(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_0800ffd8(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x0800b944 : FUN_0800b944 */

void FUN_0800b944(void)

{
  DAT_200034d8 = 0x18000;
  DAT_200034dc = 0x8000;
  DAT_200034e0 = 0x10000;
  FUN_0800b6bc(&DAT_2000353c,&DAT_20003504);
  FUN_0800b9a0();
  FUN_08010b3e(&DAT_40012c00,1);
  FUN_08010b2c(&DAT_40012c00,1);
  FUN_0800c698(1);
  FUN_0800eb68(1);
  return;
}



/* ENTRY 0x0800b9a0 : FUN_0800b9a0 */

void FUN_0800b9a0(void)

{
  FUN_08010624();
  FUN_0800c700();
  FUN_0800c0ec();
  return;
}



/* ENTRY 0x0800b9b0 : FUN_0800b9b0 */

void FUN_0800b9b0(void)

{
  FUN_0800c784();
  FUN_0800c764();
  return;
}



/* ENTRY 0x0800b9bc : FUN_0800b9bc */

void FUN_0800b9bc(uint *param_1,ushort *param_2)

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



/* ENTRY 0x0800ba6a : FUN_0800ba6a */

undefined8 FUN_0800ba6a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x0800ba7c : FUN_0800ba7c */

void FUN_0800ba7c(uint param_1,int param_2)

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



/* ENTRY 0x0800bae8 : FUN_0800bae8 */

bool FUN_0800bae8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800baf6 : FUN_0800baf6 */

void FUN_0800baf6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x0800bafa : FUN_0800bafa */

void FUN_0800bafa(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x0800bafe : FUN_0800bafe */

void FUN_0800bafe(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x0800bb10 : FUN_0800bb10 */

void FUN_0800bb10(void)

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
  
  FUN_0800ed1c(0x10,1);
  FUN_0800ecec(2,1);
  FUN_0800ba7c(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_0800b9bc(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_0800b9bc(&DAT_40011000,&local_20);
  FUN_08010b6c(&DAT_40000400);
  FUN_080112dc(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_08011240(&DAT_40000400,&local_10);
  FUN_08010f48(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08010d9c(&DAT_40000400,&local_1c);
  FUN_080111a4(&DAT_40000400,400,1);
  FUN_08010f68(&DAT_40000400);
  FUN_080111aa(&DAT_40000400,1);
  FUN_080111bc(&DAT_40000400,0x40);
  FUN_0801122c(&DAT_40000400,4);
  FUN_08011300(&DAT_40000400,1);
  FUN_08010b20(&DAT_40000400,0x1e5f);
  FUN_0801123c(&DAT_40000400,0);
  FUN_08010b2c(&DAT_40000400,1);
  return;
}



/* ENTRY 0x0800bc14 : FUN_0800bc14 */

void FUN_0800bc14(void)

{
  FUN_0800bb10();
  return;
}



/* ENTRY 0x0800bc1c : FUN_0800bc1c */

int FUN_0800bc1c(void)

{
  return (int)diag_motor_egdir * (DAT_200005ac + diag_halloffset);
}



/* ENTRY 0x0800bc40 : FUN_0800bc40 */

byte FUN_0800bc40(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_0800bae8(&DAT_40011000,0x40);
  cVar2 = FUN_0800bae8(&DAT_40011000,0x80);
  cVar3 = FUN_0800bae8(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x0800bc80 : FUN_0800bc80 */

void FUN_0800bc80(int param_1,int param_2,int param_3,int param_4,int param_5)

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
        goto LAB_0800bd10;
      }
    }
  }
  DAT_200005d7 = 0;
LAB_0800bd10:
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



/* ENTRY 0x0800bd70 : FUN_0800bd70 */

void FUN_0800bd70(void)

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
          FUN_080234ec(1);
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
          FUN_080234ec(2);
          DAT_2000071c = 0;
        }
        DAT_2000084d = '\0';
      }
      DAT_20000720 = 0;
    }
  }
  return;
}



/* ENTRY 0x0800befc : FUN_0800befc */

void FUN_0800befc(void)

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



/* ENTRY 0x0800bf10 : FUN_0800bf10 */

void FUN_0800bf10(uint param_1,char *param_2)

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



/* ENTRY 0x0800bf54 : FUN_0800bf54 */

void FUN_0800bf54(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x0800bf64 : FUN_0800bf64 */

void FUN_0800bf64(undefined4 param_1,undefined4 param_2)

{
  FUN_0800bfb0(0x5555);
  FUN_0800bf98(param_1);
  FUN_0800bfa4(param_2);
  FUN_0800bf88();
  FUN_0800bf54();
  return;
}



/* ENTRY 0x0800bf88 : FUN_0800bf88 */

void FUN_0800bf88(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x0800bf98 : FUN_0800bf98 */

void FUN_0800bf98(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x0800bfa4 : FUN_0800bfa4 */

void FUN_0800bfa4(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x0800bfb0 : FUN_0800bfb0 */

void FUN_0800bfb0(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x0800bfbc : FUN_0800bfbc */

void FUN_0800bfbc(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800eb68(2);
  return;
}



/* ENTRY 0x0800bfd4 : FUN_0800bfd4 */

void FUN_0800bfd4(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800eb68(1);
  return;
}



/* ENTRY 0x0800bfec : FUN_0800bfec */

void FUN_0800bfec(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0801f5b0();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005cc == 0) || (0x7ff < uVar3)) {
    DAT_200005c8 = 0;
    DAT_200005cc = 0;
    iVar2 = FUN_0800bc40();
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



/* ENTRY 0x0800c088 : FUN_0800c088 */

undefined4 FUN_0800c088(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800a9d0(1);
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



/* ENTRY 0x0800c0ec : FUN_0800c0ec */

void FUN_0800c0ec(void)

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
  
  FUN_0800ecc0(0x8000);
  FUN_0800ed1c(0x15,1);
  FUN_0800ed1c(0x600,1);
  FUN_0800bafe(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40010800,&local_24);
  FUN_0800bafe(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9bc(&DAT_40011000,&local_24);
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
  FUN_0800c798();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_0800d9a0(&local_20);
  FUN_08008922(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x0800c358 : FUN_0800c358 */

void FUN_0800c358(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x0800c36c : FUN_0800c36c */

void FUN_0800c36c(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x0800c380 : FUN_0800c380 */

void FUN_0800c380(int *param_1)

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



/* ENTRY 0x0800c4d0 : FUN_0800c4d0 */

undefined4 FUN_0800c4d0(void)

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



/* ENTRY 0x0800c698 : FUN_0800c698 */

void FUN_0800c698(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_0800ba7c(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08010b20(&DAT_40012c00,1);
    FUN_08010f58(&DAT_40012c00,1);
  }
  else {
    FUN_08010f58(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x0800c700 : FUN_0800c700 */

void FUN_0800c700(void)

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
  
  FUN_0800ecd4(1);
  FUN_0800a818(&DAT_40020008);
  FUN_0800a9aa(&local_30);
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
  FUN_0800a954(&DAT_40020008,&local_30);
  FUN_0800a804(&DAT_40020008,1);
  return;
}



/* ENTRY 0x0800c764 : FUN_0800c764 */

void FUN_0800c764(void)

{
  DAT_40012838 = DAT_20000374 + (DAT_20000370 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x0800c784 : FUN_0800c784 */

void FUN_0800c784(void)

{
  FUN_0800876c(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x0800c798 : FUN_0800c798 */

void FUN_0800c798(void)

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



/* ENTRY 0x0800c7f4 : FUN_0800c7f4 */

undefined4 FUN_0800c7f4(int param_1)

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



/* ENTRY 0x0800c82e : FUN_0800c82e */

void FUN_0800c82e(void)

{
  FUN_0800ed1c(0x10,1);
  return;
}



/* ENTRY 0x0800c83c : FUN_0800c83c */

void FUN_0800c83c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08008582(auStack_28,0x14);
  FUN_08008582(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_080202d4(cVar1,(&DAT_20003de2)[(uVar2 + 6) * 3],(&DAT_20003de3)[(uVar2 + 6) * 3],
                 (&DAT_20003de4)[(uVar2 + 6) * 3],auStack_3c);
    FUN_080202d4(uVar2 & 0xff,(&DAT_20003de2)[uVar2 * 3],(&DAT_20003de3)[uVar2 * 3],
                 (&DAT_20003de4)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_08022878(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x0800c8bc : FUN_0800c8bc */

undefined4 FUN_0800c8bc(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 local_20 [16];
  short local_10;
  
  FUN_0800b000(local_20);
  local_20[0] = 0xf;
  sVar1 = FUN_0801c12a(local_20);
  if (local_10 == sVar1) {
    FUN_0800851e(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800b068(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0801c12a(local_20);
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



/* ENTRY 0x0800c924 : FUN_0800c924 */

void FUN_0800c924(void)

{
  ushort uVar1;
  
  FUN_0800f40c(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_0800f40c(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800c954 : FUN_0800c954 */

void FUN_0800c954(void)

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
  
  FUN_0800ed1c(0x1000);
  FUN_0800ed1c(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_0800f434(&DAT_40013000,&local_1c);
  FUN_0800f40c(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800ca14 : FUN_0800ca14 */

undefined8 FUN_0800ca14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0800cab8(0x9d);
    for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cab8(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  else {
    DAT_40010814 = 0x10;
    FUN_0800cab8(0xbb);
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cab8(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  FUN_08008494(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800ca8c : FUN_0800ca8c */

undefined4 FUN_0800ca8c(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800cab8(param_1 | 0x80);
  uVar1 = FUN_0800cab8(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800cab8 : FUN_0800cab8 */

undefined1 FUN_0800cab8(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_0800f41e(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_0800f41e(&DAT_40013000,1);
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



/* ENTRY 0x0800cb34 : FUN_0800cb34 */

undefined4 FUN_0800cb34(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800cab8(param_1);
  FUN_0800cab8(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800cb5c : FUN_0800cb5c */

undefined4 FUN_0800cb5c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_200001b0 == 0) {
    FUN_0800c954();
    DAT_200001b0 = FUN_0800cdac(0x75);
    if (DAT_200001b0 == 0x47) {
      do {
        iVar2 = FUN_0800cf24(0x11,1);
      } while (iVar2 == 0);
      FUN_0800e228(0xf);
      do {
        iVar2 = FUN_0800cf24(0x4e,0xf);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x50,0x60);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x4f,0x40);
      } while (iVar2 == 0);
    }
    else {
      do {
        iVar2 = FUN_0800cf24(0x6b,0x80);
      } while (iVar2 == 0);
      FUN_0800e228(0xf);
      do {
        iVar2 = FUN_0800cf24(0x6b,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x19,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x1a,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x1c,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x1b,8);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf24(0x38,1);
      } while (iVar2 == 0);
    }
    uVar3 = FUN_0800cdac(0x75);
    if ((uVar3 == 0) || (uVar3 != DAT_200001b0)) {
      uVar1 = 0;
    }
    else {
      FUN_0800cdb8();
      FUN_0800c924();
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800cc50 : FUN_0800cc50 */

void FUN_0800cc50(undefined4 param_1)

{
  FUN_0800ca14(param_1);
  return;
}



/* ENTRY 0x0800cc5c : FUN_0800cc5c */

undefined4 FUN_0800cc5c(int *param_1)

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
  
  FUN_0800cc50(local_2c);
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



/* ENTRY 0x0800cdac : FUN_0800cdac */

void FUN_0800cdac(undefined4 param_1)

{
  FUN_0800ca8c(param_1);
  return;
}



/* ENTRY 0x0800cdb8 : FUN_0800cdb8 */

void FUN_0800cdb8(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_200001b0 == 'G') {
    bVar1 = FUN_0800cdac(0x50);
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
    bVar1 = FUN_0800cdac(0x4f);
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
  bVar1 = FUN_0800cdac(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b2 = 0x2000;
      goto code_r0x0800ced0;
    }
    if (uVar2 == 2) {
      DAT_200001b2 = 0x1000;
      goto code_r0x0800ced0;
    }
    if (uVar2 == 3) {
      DAT_200001b2 = 0x800;
      goto code_r0x0800ced0;
    }
  }
  DAT_200001b2 = 0x4000;
code_r0x0800ced0:
  bVar1 = FUN_0800cdac(0x1b);
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



/* ENTRY 0x0800cf24 : FUN_0800cf24 */

void FUN_0800cf24(undefined4 param_1,undefined4 param_2)

{
  FUN_0800cb34(param_1,param_2);
  return;
}



/* ENTRY 0x0800cf34 : FUN_0800cf34 */

void FUN_0800cf34(void)

{
  int iVar1;
  
  iVar1 = FUN_0800cb5c();
  if (iVar1 == 0) {
    DAT_200032b4 = DAT_200032b4 | 0x40;
  }
  FUN_0800bc14();
  FUN_0800b944();
  DAT_200032dc = 71000;
  DAT_200032e0 = 71000;
  return;
}



/* ENTRY 0x0800cf64 : FUN_0800cf64 */

void FUN_0800cf64(void)

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
    iVar2 = FUN_0801fc3c(0);
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
          FUN_0800ff24(3);
          diag_rollptag_auto = 0x28000;
          FUN_08019cdc(4);
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
            FUN_0800ff24(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_08019cdc(0xe1);
        }
        break;
      }
    }
    FUN_0800d878();
    diag_motionstep = 2;
    FUN_08021f58();
    FUN_0800ff24(0x30);
    diag_motorstep = 1;
    FUN_08019cdc(0xe0);
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
          if (0x27fff < iVar2) goto LAB_0800d2fa;
        }
        if ((((byte)DAT_200032b6 & 4) == 4) && ((DAT_200032b6 & 8) == 0)) {
          FUN_08020fb4();
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
            FUN_08019cdc(0xe1);
          }
          break;
        }
      }
    }
LAB_0800d2fa:
    DAT_20003312 = 1;
    FUN_0800d878();
    diag_motionstep = 2;
    FUN_08021f58();
    FUN_0800ff24(0x30);
    diag_motorstep = 1;
    FUN_08019cdc(0xe0);
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
          if (0x27fff < iVar2) goto LAB_0800d4e4;
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
LAB_0800d4e4:
    DAT_20003312 = 1;
    FUN_0800d878();
    diag_motionstep = 2;
    FUN_08021f58();
    FUN_0800ff24(0x30);
    diag_motorstep = 1;
    FUN_08019cdc(0xe0);
    DAT_20003304 = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_20003312 = 1;
      FUN_0800e228(0x3c);
      iVar2 = FUN_08022e24();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_08009ef8();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800ff24(0xf0);
    FUN_0800e228(0xa0);
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
  FUN_080165e0();
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



/* ENTRY 0x0800d754 : FUN_0800d754 */

void FUN_0800d754(void)

{
  switch(DAT_200002d8) {
  case 1:
    FUN_0800bfd4();
    break;
  case 2:
    FUN_0800bfbc();
    break;
  case 3:
    FUN_08011404();
    break;
  case 4:
    FUN_0800eada();
    break;
  case 7:
    FUN_08009ee4();
    break;
  case 8:
    FUN_0800a9c4();
    break;
  case 10:
    FUN_0800a0b0();
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
    FUN_08019cdc(0xef);
    DAT_200002e8 = '\x01';
  }
  return;
}



/* ENTRY 0x0800d878 : FUN_0800d878 */

void FUN_0800d878(void)

{
  DAT_200002d8 = 1;
  FUN_0800eb68();
  FUN_0800d890();
  return;
}



/* ENTRY 0x0800d890 : FUN_0800d890 */

void FUN_0800d890(void)

{
  DAT_2000035c = 0;
  diag_g_average_iq = 0;
  diag_g_averX10_iq = 0;
  DAT_2000036a = 0;
  FUN_0800f240();
  return;
}



/* ENTRY 0x0800d8bc : FUN_0800d8bc */

undefined4 FUN_0800d8bc(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_08026dc8 + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_08026dc8 + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x0800d92c : FUN_0800d92c */

uint FUN_0800d92c(byte *param_1,char *param_2)

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



/* ENTRY 0x0800d97c : FUN_0800d97c */

void FUN_0800d97c(void)

{
  DAT_200005f0 = 0;
  return;
}



/* ENTRY 0x0800d988 : FUN_0800d988 */

void FUN_0800d988(void)

{
  DAT_200005f8 = 0;
  return;
}



/* ENTRY 0x0800d994 : FUN_0800d994 */

void FUN_0800d994(void)

{
  DAT_200005f9 = 0;
  return;
}



/* ENTRY 0x0800d9a0 : FUN_0800d9a0 */

void FUN_0800d9a0(byte *param_1)

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



/* ENTRY 0x0800da10 : FUN_0800da10 */

void FUN_0800da10(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x0800da24 : FUN_0800da24 */

void FUN_0800da24(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x0800da38 : FUN_0800da38 */

void FUN_0800da38(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800da5c : FUN_0800da5c */

undefined * FUN_0800da5c(void)

{
  return &DAT_0802688a;
}



/* ENTRY 0x0800db74 : FUN_0800db74 */

void FUN_0800db74(void)

{
  FUN_0800dba4();
  FUN_0800e5f0();
  FUN_0800e644();
  FUN_0800e688();
  FUN_0800e590();
  FUN_0800e774();
  FUN_0800e7c0();
  FUN_0800e6f8();
  FUN_0800e72c();
  FUN_0800dba6();
  FUN_0800da5c();
  return;
}



/* ENTRY 0x0800dba4 : FUN_0800dba4 */

void FUN_0800dba4(void)

{
  return;
}



/* ENTRY 0x0800dba6 : FUN_0800dba6 */

void FUN_0800dba6(void)

{
  return;
}



/* ENTRY 0x0800dba8 : FUN_0800dba8 */

void FUN_0800dba8(void)

{
  if ((DAT_20000040 == '\x01') && (DAT_20000035 != -1)) {
    DAT_20000035 = DAT_20000035 + '\x01';
  }
  return;
}



/* ENTRY 0x0800dbcc : FUN_0800dbcc */

void FUN_0800dbcc(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if (DAT_20000035 != '\0') {
      DAT_20000035 = DAT_20000035 + -1;
    }
    if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
      FUN_0800e880();
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



/* ENTRY 0x0800dc5c : FUN_0800dc5c */

undefined1 * FUN_0800dc5c(undefined4 param_1)

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
      *(undefined **)(puVar1 + 0x14) = &DAT_0800dcac;
      FUN_0800e574(puVar1);
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* ENTRY 0x0800dcb0 : FUN_0800dcb0 */

int FUN_0800dcb0(char *param_1,undefined4 param_2,undefined1 *param_3)

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
          FUN_0800e4f8(param_1);
          FUN_08008254(uVar3);
          FUN_0800e80c();
          uVar3 = FUN_0800824c();
          cVar1 = *(char *)(DAT_20000048 + 0x2d);
          if (cVar1 == '\0') {
            iVar2 = *(int *)(DAT_20000048 + 0x24);
            *param_3 = 0;
          }
          else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
            FUN_0800e494(DAT_20000048,param_1);
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



/* ENTRY 0x0800ddb8 : FUN_0800ddb8 */

undefined4 FUN_0800ddb8(char *param_1,undefined4 param_2)

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
      FUN_0800e404(param_1,param_2,2,0);
      FUN_08008254(uVar1);
      FUN_0800e80c();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800de08 : FUN_0800de08 */

void FUN_0800de08(void)

{
  if (DAT_20000040 == '\0') {
    FUN_0800e880();
    DAT_20000037 = DAT_20000038;
    DAT_20000048 = (&DAT_200010c4)[DAT_20000038];
    DAT_20000050 = DAT_20000048;
    FUN_0800825a();
  }
  return;
}



/* ENTRY 0x0800de50 : FUN_0800de50 */

void FUN_0800de50(void)

{
  undefined4 uVar1;
  
  FUN_0800e228(2);
  uVar1 = FUN_0800824c();
  DAT_20000044 = 0;
  FUN_08008254(uVar1);
  FUN_0800e228(10);
  uVar1 = FUN_0800824c();
  DAT_2000002c = DAT_20000044;
  DAT_20000034 = 1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800de9c : FUN_0800de9c */

void FUN_0800de9c(void)

{
  return;
}



/* ENTRY 0x0800dea0 : FUN_0800dea0 */

undefined4 FUN_0800dea0(uint param_1,uint param_2)

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
        FUN_0800e80c();
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



/* ENTRY 0x0800e040 : FUN_0800e040 */

int FUN_0800e040(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
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
      FUN_0800eac0(param_6,param_7,param_9);
      uVar1 = FUN_0800e18c(param_1,param_2,param_3,param_9);
      iVar2 = FUN_0800e8ac(param_4,uVar1,param_6,param_5,param_7,param_8,param_9);
      if (iVar2 == 0) {
        if (DAT_20000040 == '\x01') {
          FUN_0800e80c();
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



/* ENTRY 0x0800e0f8 : FUN_0800e0f8 */

void FUN_0800e0f8(void)

{
  return;
}



/* ENTRY 0x0800e0fa : FUN_0800e0fa */

void FUN_0800e0fa(void)

{
  return;
}



/* ENTRY 0x0800e0fc : FUN_0800e0fc */

void FUN_0800e0fc(void)

{
  return;
}



/* ENTRY 0x0800e100 : FUN_0800e100 */

undefined4 FUN_0800e100(uint param_1,int *param_2)

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



/* ENTRY 0x0800e18c : FUN_0800e18c */

undefined4 * FUN_0800e18c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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



/* ENTRY 0x0800e226 : FUN_0800e226 */

void FUN_0800e226(void)

{
  return;
}



/* ENTRY 0x0800e228 : FUN_0800e228 */

void FUN_0800e228(int param_1)

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
    FUN_0800e80c();
  }
  return;
}



/* ENTRY 0x0800e2a0 : FUN_0800e2a0 */

void FUN_0800e2a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000064 = param_1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800e2bc : FUN_0800e2bc */

void FUN_0800e2bc(void)

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



/* ENTRY 0x0800e3a4 : FUN_0800e3a4 */

undefined4 FUN_0800e3a4(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800e3b0 : FUN_0800e3b0 */

void FUN_0800e3b0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  FUN_0800e2bc();
  FUN_0800dbcc();
  return;
}



/* ENTRY 0x0800e3d8 : FUN_0800e3d8 */

void FUN_0800e3d8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0800e3a4();
  DAT_e000e014 = uVar1 / 100 - 1;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 5;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 2;
  return;
}



/* ENTRY 0x0800e404 : FUN_0800e404 */

uint FUN_0800e404(int param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)(&DAT_08026718)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_08026718)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_200010c4)[uVar3];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) & ~param_3;
  *(undefined1 *)(iVar1 + 0x2d) = param_4;
  if ((*(byte *)(iVar1 + 0x2c) & 8) == 0) {
    DAT_20000039 = *(byte *)(iVar1 + 0x32) | DAT_20000039;
    (&DAT_2000003a)[uVar2] = (&DAT_2000003a)[uVar2] | *(byte *)(iVar1 + 0x31);
  }
  FUN_0800e494(iVar1,param_1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_0800e4be(iVar1,*(undefined4 *)(iVar1 + 0x20));
    *(int *)(iVar1 + 0x1c) = param_1;
  }
  return uVar3;
}



/* ENTRY 0x0800e494 : FUN_0800e494 */

void FUN_0800e494(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x30);
  *(byte *)(param_2 + 0xb + uVar1) = *(byte *)(param_2 + 0xb + uVar1) & ~*(byte *)(param_1 + 0x31);
  if (*(char *)(param_2 + 0xb + uVar1) == '\0') {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & ~*(byte *)(param_1 + 0x32);
  }
  return;
}



/* ENTRY 0x0800e4be : FUN_0800e4be */

void FUN_0800e4be(int param_1,int *param_2)

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



/* ENTRY 0x0800e4f8 : FUN_0800e4f8 */

void FUN_0800e4f8(int param_1)

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



/* ENTRY 0x0800e574 : FUN_0800e574 */

void FUN_0800e574(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(param_1 + 0xb + uVar1) = 0;
  }
  return;
}



/* ENTRY 0x0800e590 : FUN_0800e590 */

void FUN_0800e590(void)

{
  uint uVar1;
  
  thunk_FUN_0800e76c(&DAT_200009f4,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200009f4)[uVar1 * 0x18] = 0;
    (&DAT_200009f8)[uVar1 * 6] = &DAT_200009f4 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_20000a08)[uVar1 * 6] = &DAT_0800e5e8;
  }
  (&DAT_200009f4)[uVar1 * 0x18] = 0;
  (&DAT_200009f8)[uVar1 * 6] = 0;
  (&DAT_20000a08)[uVar1 * 6] = &DAT_0800e5e8;
  DAT_20000024 = &DAT_200009f4;
  return;
}



/* ENTRY 0x0800e5f0 : FUN_0800e5f0 */

void FUN_0800e5f0(void)

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



/* ENTRY 0x0800e644 : FUN_0800e644 */

void FUN_0800e644(void)

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



/* ENTRY 0x0800e688 : FUN_0800e688 */

void FUN_0800e688(void)

{
  uint uVar1;
  
  thunk_FUN_0800e76c(&DAT_20001174,0x390);
  thunk_FUN_0800e76c(&DAT_200010c4,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001188)[uVar1 * 0x13] = &DAT_20001174 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001188)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001174;
  return;
}



/* ENTRY 0x0800e6f8 : FUN_0800e6f8 */

void FUN_0800e6f8(void)

{
  FUN_0800e040(&LAB_0800e9d0_1,0,&DAT_200010c0,0x2b,0xffff,&DAT_20000ec4,0x80,0,3);
  return;
}



/* ENTRY 0x0800e72c : FUN_0800e72c */

void FUN_0800e72c(void)

{
  FUN_0800e040(&LAB_0800e9f8_1,0,&DAT_20000ec0,0x2a,0xfffe,&DAT_20000cc4,0x80,0,3);
  return;
}



/* ENTRY 0x0800e760 : thunk_FUN_0800e76c */

void thunk_FUN_0800e76c(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e76c : FUN_0800e76c */

void FUN_0800e76c(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e774 : FUN_0800e774 */

void FUN_0800e774(void)

{
  uint uVar1;
  
  thunk_FUN_0800e76c(&DAT_20001504,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_20001508)[uVar1 * 5] = &DAT_20001504 + (uVar1 + 1) * 0x14;
  }
  (&DAT_20001508)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_20001504;
  return;
}



/* ENTRY 0x0800e7c0 : FUN_0800e7c0 */

void FUN_0800e7c0(void)

{
  uint uVar1;
  
  thunk_FUN_0800e76c(&DAT_200015cc,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200015cc)[uVar1 * 6] = &DAT_200015cc + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_200015cc)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_200015cc;
  return;
}



/* ENTRY 0x0800e80c : FUN_0800e80c */

void FUN_0800e80c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_0800e880();
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



/* ENTRY 0x0800e880 : FUN_0800e880 */

void FUN_0800e880(void)

{
  DAT_20000038 = (&DAT_08026718)[(byte)(&DAT_2000003a)[(byte)(&DAT_08026718)[DAT_20000039]]] +
                 (&DAT_08026718)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x0800e8ac : FUN_0800e8ac */

undefined4
FUN_0800e8ac(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5
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
    FUN_0800de9c(puVar3);
    FUN_0800e0f8(puVar3);
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



/* ENTRY 0x0800ea84 : FUN_0800ea84 */

void FUN_0800ea84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = param_3;
  local_14 = param_4;
  for (uVar2 = 0; uVar2 < 0x2c; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = FUN_0800e100(uVar2,&uStack_18);
    if (((iVar1 == 0) && (iVar1 = (&DAT_200010c4)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0xc) * 4;
      *(undefined4 *)(iVar1 + 0x44) = local_14;
    }
  }
  return;
}



/* ENTRY 0x0800eac0 : FUN_0800eac0 */

void FUN_0800eac0(undefined4 *param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* ENTRY 0x0800eada : FUN_0800eada */

void FUN_0800eada(void)

{
  FUN_0800eb68(4);
  return;
}



/* ENTRY 0x0800eae4 : FUN_0800eae4 */

void FUN_0800eae4(void)

{
  uint uVar1;
  
  if (DAT_200006ce != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031fa)[uVar1] = 0;
    }
  }
  FUN_080215d4();
  DAT_2000323e = 0x31;
  DAT_2000323f = 0x32;
  DAT_20003240 = 0x33;
  DAT_20003241 = 0x34;
  DAT_20003242 = 0x35;
  DAT_20003243 = 0x36;
  return;
}



/* ENTRY 0x0800eb40 : FUN_0800eb40 */

void FUN_0800eb40(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x0800eb4c : FUN_0800eb4c */

void FUN_0800eb4c(int param_1)

{
  if ((param_1 == 7) && (DAT_200032c0 == '\0')) {
    DAT_200032b6 = DAT_200032b6 | 0x20;
  }
  return;
}



/* ENTRY 0x0800eb68 : FUN_0800eb68 */

undefined4 FUN_0800eb68(uint param_1)

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
      FUN_08010b06(&DAT_40012c00,0);
      FUN_08010b06(&DAT_40012c00,4,0);
      FUN_08010b06(&DAT_40012c00,8,0);
      FUN_0800baf6(&DAT_40010c00,0x2000);
      FUN_0800baf6(&DAT_40010c00,0x8000);
      FUN_0800baf6(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_080111c8(&DAT_40012c00,0,0x40);
      FUN_08010b06(&DAT_40012c00,0,1);
      FUN_080111c8(&DAT_40012c00,4,0x40);
      FUN_08010b06(&DAT_40012c00,4,1);
      FUN_080111c8(&DAT_40012c00,8,0x40);
      FUN_08010b06(&DAT_40012c00,8,1);
      FUN_0800bafa(&DAT_40010c00,0x2000);
      FUN_0800bafa(&DAT_40010c00,0x8000);
      FUN_0800bafa(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_080111c8(&DAT_40012c00,0,0x60);
      FUN_08010b06(&DAT_40012c00,0,1);
      FUN_080111c8(&DAT_40012c00,4,0x60);
      FUN_08010b06(&DAT_40012c00,4,1);
      FUN_080111c8(&DAT_40012c00,8,0x60);
      FUN_08010b06(&DAT_40012c00,8,1);
      FUN_0800bafa(&DAT_40010c00,0x2000);
      FUN_0800bafa(&DAT_40010c00,0x8000);
      FUN_0800bafa(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800ecb4 : FUN_0800ecb4 */

void FUN_0800ecb4(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x0800ecc0 : FUN_0800ecc0 */

void FUN_0800ecc0(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x0800ecd4 : FUN_0800ecd4 */

void FUN_0800ecd4(uint param_1,int param_2)

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



/* ENTRY 0x0800ecec : FUN_0800ecec */

void FUN_0800ecec(uint param_1,int param_2)

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



/* ENTRY 0x0800ed04 : FUN_0800ed04 */

void FUN_0800ed04(uint param_1,int param_2)

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



/* ENTRY 0x0800ed1c : FUN_0800ed1c */

void FUN_0800ed1c(uint param_1,int param_2)

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



/* ENTRY 0x0800ed34 : FUN_0800ed34 */

void FUN_0800ed34(uint param_1,int param_2)

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



/* ENTRY 0x0800ed4c : FUN_0800ed4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ed4c(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x0800ed58 : FUN_0800ed58 */

void FUN_0800ed58(uint *param_1)

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



/* ENTRY 0x0800ee08 : FUN_0800ee08 */

void FUN_0800ee08(uint *param_1)

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



/* ENTRY 0x0800eef4 : FUN_0800eef4 */

bool FUN_0800eef4(uint param_1)

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



/* ENTRY 0x0800ef24 : FUN_0800ef24 */

void FUN_0800ef24(int param_1)

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



/* ENTRY 0x0800ef48 : FUN_0800ef48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ef48(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x0800ef54 : FUN_0800ef54 */

void FUN_0800ef54(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x0800ef64 : FUN_0800ef64 */

void FUN_0800ef64(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x0800ef74 : FUN_0800ef74 */

void FUN_0800ef74(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x0800ef84 : FUN_0800ef84 */

void FUN_0800ef84(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x0800ef94 : FUN_0800ef94 */

longlong FUN_0800ef94(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_0800f040();
  if ((uint)DAT_200009b4 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_20004b98 = (undefined1)(uVar1 / 0xe10);
    DAT_20004b99 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_20004b9a = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_200009b4 = (ushort)(uVar1 / 0x15180);
    FUN_0802276c(&local_20,uVar1);
    DAT_20004b98 = (undefined1)local_20;
    DAT_20004b99 = local_20._1_1_;
    DAT_20004b9a = local_20._2_1_;
    DAT_20004b9c = (undefined2)local_1c;
    DAT_20004b9e = local_1c._2_1_;
    DAT_20004b9f = local_1c._3_1_;
    DAT_20004ba0 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0800f040 : FUN_0800f040 */

undefined4 FUN_0800f040(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x0800f058 : FUN_0800f058 */

bool FUN_0800f058(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x0800f078 : FUN_0800f078 */

void FUN_0800f078(void)

{
  int iVar1;
  
  iVar1 = FUN_0800f058(1);
  if (iVar1 != 0) {
    FUN_0800ef94();
  }
  iVar1 = FUN_0800f058(2);
  if (iVar1 != 0) {
    FUN_0800ef64(2);
    FUN_0800ef94();
  }
  FUN_0800ef64(5);
  FUN_0800f218();
  return;
}



/* ENTRY 0x0800f0a4 : FUN_0800f0a4 */

void FUN_0800f0a4(ushort param_1,int param_2)

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



/* ENTRY 0x0800f0bc : FUN_0800f0bc */

undefined4 FUN_0800f0bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_0800ecec(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_0800eb40(1);
  iVar2 = FUN_08009206(4);
  if (iVar2 == 0x5050) {
    FUN_0800f228();
    FUN_0800f218();
  }
  else {
    FUN_080091f4();
    FUN_0800ef24(1);
    for (; (iVar2 = FUN_0800eef4(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_0800e228(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_0800ef54(0x100);
    FUN_0800ef48(1);
    FUN_0800f218();
    FUN_0800f228();
    FUN_0800f0a4(1);
    FUN_0800f218();
    FUN_0800ef74();
    FUN_0800f1f4(0x7fff);
    FUN_0800f218();
    FUN_0800f170(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_0800ef84();
    FUN_08009212(4,0x5050);
  }
  FUN_0800ef94();
  return 0;
}



/* ENTRY 0x0800f170 : FUN_0800f170 */

undefined4
FUN_0800f170(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801c250(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_0800ecec(0x18000000,1);
    FUN_0800eb40(1);
    FUN_0800f1cc(uVar1);
    FUN_0800f218();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800f1cc : FUN_0800f1cc */

void FUN_0800f1cc(undefined4 param_1)

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



/* ENTRY 0x0800f1f4 : FUN_0800f1f4 */

void FUN_0800f1f4(int param_1)

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



/* ENTRY 0x0800f218 : FUN_0800f218 */

void FUN_0800f218(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x0800f228 : FUN_0800f228 */

void FUN_0800f228(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x0800f240 : FUN_0800f240 */

void FUN_0800f240(void)

{
  DAT_20003564 = 0;
  DAT_2000352c = 0;
  DAT_20003568 = 0;
  DAT_20003530 = 0;
  return;
}



/* ENTRY 0x0800f25c : FUN_0800f25c */

bool FUN_0800f25c(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0800f298:
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
      goto code_r0x0800f298;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0800f300 : FUN_0800f300 */

void FUN_0800f300(void)

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
  
  FUN_0800ed1c(8,1);
  FUN_0800ecec(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_0800b9bc(&DAT_40010c00,&local_8);
  FUN_0800bafa(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_0800f434(&DAT_40003c00,&local_1c);
  FUN_0800f40c(&DAT_40003c00,1);
  FUN_0800f390(0xff);
  return;
}



/* ENTRY 0x0800f390 : FUN_0800f390 */

undefined1 FUN_0800f390(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_0800f41e(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_0800f430(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_0800f41e(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_0800f42c(&DAT_40003c00);
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



/* ENTRY 0x0800f3e4 : FUN_0800f3e4 */

void FUN_0800f3e4(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_0800f40c(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0800f40c : FUN_0800f40c */

void FUN_0800f40c(ushort *param_1,int param_2)

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



/* ENTRY 0x0800f41e : FUN_0800f41e */

bool FUN_0800f41e(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800f42c : FUN_0800f42c */

undefined2 FUN_0800f42c(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x0800f430 : FUN_0800f430 */

void FUN_0800f430(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x0800f434 : FUN_0800f434 */

void FUN_0800f434(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x0800f488 : FUN_0800f488 */

undefined1 FUN_0800f488(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0801c12a(&DAT_2000008c);
  DAT_2000009c = CONCAT22(DAT_2000009c._2_2_,uVar2);
  FUN_0800b29c(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  uVar1 = FUN_0800b2e4(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  DAT_200000a0 = 0;
  return uVar1;
}



/* ENTRY 0x0800f4c8 : FUN_0800f4c8 */

undefined4
FUN_0800f4c8(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_200040ee)[uVar1 * 0x14] = 0xaa;
    (&DAT_200040ef)[uVar1 * 0x14] = 0x55;
    (&DAT_200040f0)[uVar1 * 0x14] = (char)param_2;
    (&DAT_200040f1)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_200040f2)[uVar1 * 0x14] = (char)param_3;
    (&DAT_200040f3)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_200040f4)[uVar1 * 0x14] = (char)param_4;
    (&DAT_200040f5)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_200040f6)[uVar1 * 0x14] = (char)param_5;
    (&DAT_200040f7)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_200040f8)[uVar1 * 0x14] = (char)param_6;
    (&DAT_200040f9)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_200040fa)[uVar1 * 0x14] = (char)param_7;
    (&DAT_200040fb)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_200040fc)[uVar1 * 0x14] = (char)param_8;
    (&DAT_200040fd)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_200040fe)[uVar1 * 0x14] = param_1;
    (&DAT_200040ff)[uVar1 * 0x14] = 0x14;
    (&DAT_20004100)[uVar1 * 0x14] = 0x5a;
    (&DAT_20004101)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000951)[uVar1] = 0x14;
    DAT_2000094f = (char)uVar1 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f644 : FUN_0800f644 */

undefined4 FUN_0800f644(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200040ee)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f6b0 : FUN_0800f6b0 */

undefined4
FUN_0800f6b0(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_2000413e)[uVar1 * 0x14] = 0xaa;
    (&DAT_2000413f)[uVar1 * 0x14] = 0x55;
    (&DAT_20004140)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20004141)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20004142)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20004143)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20004144)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20004145)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20004146)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20004147)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20004148)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20004149)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_2000414a)[uVar1 * 0x14] = (char)param_8;
    (&DAT_2000414b)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_2000414c)[uVar1 * 0x14] = (char)param_9;
    (&DAT_2000414d)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_2000414e)[uVar1 * 0x14] = param_1;
    (&DAT_2000414f)[uVar1 * 0x14] = param_2;
    (&DAT_20004150)[uVar1 * 0x14] = 0x5a;
    (&DAT_20004151)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000958)[uVar1] = 0x14;
    DAT_20000956 = (char)uVar1 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f82c : FUN_0800f82c */

undefined4 FUN_0800f82c(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_2000413e)[uVar2 * 0x14] = 0xaa;
    (&DAT_2000413f)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20004140)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_2000414e)[uVar2 * 0x14] = param_1;
    (&DAT_2000414f)[uVar2 * 0x14] = param_2;
    (&DAT_20004150)[uVar2 * 0x14] = 0x5a;
    (&DAT_20004151)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000958)[uVar2] = 0x14;
    DAT_20000956 = (char)uVar2 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f8e4 : FUN_0800f8e4 */

undefined4 FUN_0800f8e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000961 & 3;
  if (DAT_20000960 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200041de)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000963)[uVar2] = 0x14;
    DAT_20000961 = (char)uVar2 + 1U & 3;
    if (DAT_20000961 == DAT_20000962) {
      DAT_20000960 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f950 : FUN_0800f950 */

undefined4 FUN_0800f950(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000968 & 3;
  if (DAT_20000967 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000422e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000096a)[uVar2] = 0x14;
    DAT_20000968 = (char)uVar2 + 1U & 3;
    if (DAT_20000968 == DAT_20000969) {
      DAT_20000967 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f9bc : FUN_0800f9bc */

undefined4 FUN_0800f9bc(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    (&DAT_2000413e)[uVar3 * 0x14] = 0xaa;
    (&DAT_2000413f)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004140)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_2000414e)[uVar3 * 0x14] = param_1;
    (&DAT_2000414f)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_08015d38(&DAT_20004140 + uVar3 * 0x14,0x10);
    (&DAT_20004150)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20004151)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000958)[uVar3] = 0x14;
    DAT_20000956 = (char)uVar3 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fa90 : FUN_0800fa90 */

undefined4
FUN_0800fa90(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
      (&DAT_2000413e)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000958)[uVar2] = 0x14;
    DAT_20000956 = (char)uVar2 + 1U & 7;
    if (DAT_20000956 == DAT_20000957) {
      DAT_20000955 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fba4 : FUN_0800fba4 */

byte FUN_0800fba4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000956 & 7;
  if (DAT_20000955 == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000413e)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
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



/* ENTRY 0x0800fc10 : FUN_0800fc10 */

void FUN_0800fc10(void)

{
  int iVar1;
  
  FUN_0800cc5c(&DAT_20003318);
  DAT_20000284 = DAT_20003318 - DAT_200033f8;
  DAT_20000288 = DAT_2000331c - DAT_200033fc;
  DAT_2000028c = DAT_20003320;
  DAT_20000278 = DAT_20003328 - DAT_20003404;
  DAT_2000027c = DAT_2000332c - DAT_20003408;
  DAT_20000280 = DAT_20003330 - DAT_2000340c;
  diag_acce_x = FUN_0800b32c(&DAT_20000230,DAT_20000284);
  diag_acce_y = FUN_0800b32c(&DAT_2000023c,DAT_20000288);
  diag_acce_z = FUN_0800b32c(&DAT_20000248,DAT_2000028c);
  DAT_20003340 = FUN_0800b32c(&DAT_20000254,-DAT_2000027c);
  DAT_20003344 = FUN_0800b32c(&DAT_20000260,DAT_20000278);
  DAT_20003348 = FUN_0800b32c(&DAT_2000026c,DAT_20000280);
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



/* ENTRY 0x0800fdcc : FUN_0800fdcc */

void FUN_0800fdcc(void)

{
  FUN_0800b386(&DAT_20000230);
  FUN_0800b386(&DAT_2000023c);
  FUN_0800b386(&DAT_20000248);
  FUN_0800b386(&DAT_20000254);
  FUN_0800b386(&DAT_20000260);
  FUN_0800b386(&DAT_2000026c);
  FUN_08008968(2000);
  FUN_0800ff24(0xf0);
  DAT_200033f4 = 0;
  DAT_20003350 = 0;
  DAT_20003354 = 0;
  DAT_20003358 = 0;
  DAT_2000335c = 0;
  DAT_20003360 = 0;
  DAT_20003364 = 0;
  return;
}



/* ENTRY 0x0800fe3c : FUN_0800fe3c */

void FUN_0800fe3c(void)

{
  FUN_0800fe44();
  return;
}



/* ENTRY 0x0800fe44 : FUN_0800fe44 */

void FUN_0800fe44(void)

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



/* ENTRY 0x0800ff24 : FUN_0800ff24 */

void FUN_0800ff24(undefined4 param_1)

{
  DAT_20000018 = param_1;
  return;
}



/* ENTRY 0x0800ff30 : FUN_0800ff30 */

int FUN_0800ff30(int param_1)

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
    iVar2 = *(int *)(&DAT_080247d0 + extraout_r3 * 4) * iVar2;
  }
  return iVar2;
}



/* ENTRY 0x0800ff98 : FUN_0800ff98 */

int FUN_0800ff98(int param_1)

{
  if (param_1 < 0x8001) {
    param_1 = param_1 * param_1;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ENTRY 0x0800ffaa : FUN_0800ffaa */

void FUN_0800ffaa(uint param_1)

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



/* ENTRY 0x0800ffd8 : FUN_0800ffd8 */

void FUN_0800ffd8(int param_1,int param_2)

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
      goto switchD_0801009a_caseD_0;
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
switchD_0801009a_caseD_0:
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



/* ENTRY 0x08010624 : FUN_08010624 */

void FUN_08010624(void)

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
  
  FUN_0800ed1c(0xc,1);
  FUN_0800bafe(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_0800b9bc(&DAT_40010800,&local_38);
  FUN_0800bafe(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_0800b9bc(&DAT_40010c00,&local_38);
  FUN_0800baf6(&DAT_40010c00,0x2000);
  FUN_0800baf6(&DAT_40010c00,0x8000);
  FUN_0800baf6(&DAT_40010c00,0x4000);
  FUN_0800ba6a(&DAT_40010800,0x700);
  FUN_0800ba6a(&DAT_40010c00,0xe000);
  FUN_0800ed1c(0x800);
  FUN_08010b6c(&DAT_40012c00);
  FUN_080112dc(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_08011240(&DAT_40012c00,&local_10);
  FUN_08011190(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08010f72(&DAT_40012c00,&local_20);
  FUN_08011002(&DAT_40012c00,&local_20);
  FUN_08011092(&DAT_40012c00,&local_20);
  FUN_08011190(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_0801111e(&DAT_40012c00,&local_20);
  FUN_08010ff6(&DAT_40012c00,8);
  FUN_08011084(&DAT_40012c00,8);
  FUN_08011112(&DAT_40012c00,8);
  FUN_08011182(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_08010ae2(&DAT_40012c00,&local_30);
  FUN_0801121c(&DAT_40012c00,0x20);
  FUN_08010b26(&DAT_40012c00,0x80);
  FUN_08010f58(&DAT_40012c00,0x80,1);
  FUN_08010d7c(&DAT_40012c00,1);
  FUN_08010b20(&DAT_40012c00,1);
  FUN_08010f58(&DAT_40012c00,1,0);
  FUN_08010f58(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d9a0(&local_34);
  return;
}



/* ENTRY 0x08010818 : FUN_08010818 */

void FUN_08010818(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003d64 < 0xb) {
      DAT_20003d64 = 0;
      DAT_200030de = DAT_200030de & 0xffef;
    }
    else {
      DAT_20003d64 = DAT_20003d64 - 10;
    }
  }
  else if (DAT_20003d64 < 0xfa) {
    DAT_20003d64 = DAT_20003d64 + 1;
    DAT_200030de = DAT_200030de | 0x10;
  }
  if (10 < DAT_20003d64) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_08020a24();
    }
  }
  return;
}



/* ENTRY 0x08010898 : FUN_08010898 */

void FUN_08010898(void)

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
  FUN_0800fe3c();
  DAT_e000ed08 = 0x8000000;
  return;
}



/* ENTRY 0x080108f8 : FUN_080108f8 */

void FUN_080108f8(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_08010964;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_08010964:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08010970 : FUN_08010970 */

void FUN_08010970(void)

{
  int iVar1;
  
  iVar1 = FUN_08010d84(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08010b20(&DAT_40012c00,0x80);
    DAT_2000032e = 1;
    FUN_08010f58(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x080109a8 : FUN_080109a8 */

void FUN_080109a8(void)

{
  int iVar1;
  
  iVar1 = FUN_08010d84(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08010b20(&DAT_40012c00,1);
    FUN_0800b9b0();
    FUN_0800c36c();
  }
  return;
}



/* ENTRY 0x080109cc : FUN_080109cc */

void FUN_080109cc(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40000c10;
  if ((uVar1 & 1) != 0) {
    FUN_0800dba8();
    DAT_40000c10 = 0xfffe;
    if (DAT_20000068 != 0) {
      FUN_0800ddb8(DAT_20000068,1);
    }
    DAT_20000082 = DAT_20000082 + 1;
    if (0x27 < DAT_20000082) {
      DAT_20000082 = 0;
      if (DAT_20000070 != 0) {
        FUN_0800ddb8(DAT_20000070,1);
      }
      if (DAT_2000007c != 0) {
        FUN_0800ddb8(DAT_2000007c,1);
      }
    }
    DAT_20000086 = DAT_20000086 + 1;
    if ((0x13 < DAT_20000086) && (DAT_20000086 = 0, DAT_2000006c != 0)) {
      FUN_0800ddb8(DAT_2000006c,1);
    }
    DAT_20000088 = DAT_20000088 + 1;
    if ((3 < DAT_20000088) && (DAT_20000088 = 0, DAT_20000074 != 0)) {
      FUN_0800ddb8(DAT_20000074,1);
    }
    DAT_20000084 = DAT_20000084 + 1;
    if (99 < DAT_20000084) {
      DAT_20000084 = 0;
      if (DAT_20000078 != 0) {
        FUN_0800ddb8(DAT_20000078,1);
      }
    }
    FUN_0800dbcc();
  }
  return;
}



/* ENTRY 0x08010ad0 : FUN_08010ad0 */

void FUN_08010ad0(ushort *param_1,int param_2)

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



/* ENTRY 0x08010ae2 : FUN_08010ae2 */

void FUN_08010ae2(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x08010b06 : FUN_08010b06 */

void FUN_08010b06(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08010b20 : FUN_08010b20 */

void FUN_08010b20(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010b26 : FUN_08010b26 */

void FUN_08010b26(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010b2c : FUN_08010b2c */

void FUN_08010b2c(ushort *param_1,int param_2)

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



/* ENTRY 0x08010b3e : FUN_08010b3e */

void FUN_08010b3e(int param_1,int param_2)

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



/* ENTRY 0x08010b54 : FUN_08010b54 */

void FUN_08010b54(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08010b64 : FUN_08010b64 */

void FUN_08010b64(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x08010b6c : FUN_08010b6c */

void FUN_08010b6c(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_0800ed34(0x800);
    FUN_0800ed34(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_0800ed04(1);
    FUN_0800ed04(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_0800ed04(2,1);
    FUN_0800ed04(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_0800ed04(4,1);
    FUN_0800ed04(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_0800ed04(8,1);
    FUN_0800ed04(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_0800ed04(0x10,1);
    FUN_0800ed04(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_0800ed04(0x20,1);
    FUN_0800ed04(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_0800ed34(0x2000);
    FUN_0800ed34(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_0800ed34(0x80000);
    FUN_0800ed34(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_0800ed34(0x100000);
    FUN_0800ed34(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_0800ed34(0x200000);
    FUN_0800ed34(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_0800ed04(0x40,1);
    FUN_0800ed04(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_0800ed04(0x80,1);
    FUN_0800ed04(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_0800ed04(0x100);
    FUN_0800ed04(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_0800ed34(0x10000);
    FUN_0800ed34(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_0800ed34(0x20000);
    FUN_0800ed34(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_0800ed34(0x40000);
  FUN_0800ed34(0x40000,0);
  return;
}



/* ENTRY 0x08010d7c : FUN_08010d7c */

void FUN_08010d7c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08010d80 : FUN_08010d80 */

undefined2 FUN_08010d80(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08010d84 : FUN_08010d84 */

bool FUN_08010d84(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08010d9c : FUN_08010d9c */

void FUN_08010d9c(undefined *param_1,short *param_2)

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
  FUN_080108f8(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x08010f48 : FUN_08010f48 */

void FUN_08010f48(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x08010f58 : FUN_08010f58 */

void FUN_08010f58(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08010f68 : FUN_08010f68 */

void FUN_08010f68(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x08010f72 : FUN_08010f72 */

void FUN_08010f72(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_08010fe6;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_08010fe6:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x08010ff6 : FUN_08010ff6 */

void FUN_08010ff6(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x08011002 : FUN_08011002 */

void FUN_08011002(undefined *param_1,short *param_2)

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



/* ENTRY 0x08011084 : FUN_08011084 */

void FUN_08011084(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08011092 : FUN_08011092 */

void FUN_08011092(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x08011112 : FUN_08011112 */

void FUN_08011112(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x0801111e : FUN_0801111e */

void FUN_0801111e(undefined *param_1,short *param_2)

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



/* ENTRY 0x08011182 : FUN_08011182 */

void FUN_08011182(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08011190 : FUN_08011190 */

void FUN_08011190(undefined2 *param_1)

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



/* ENTRY 0x080111a4 : FUN_080111a4 */

void FUN_080111a4(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x080111aa : FUN_080111aa */

void FUN_080111aa(int param_1,int param_2)

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



/* ENTRY 0x080111bc : FUN_080111bc */

void FUN_080111bc(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x080111c8 : FUN_080111c8 */

void FUN_080111c8(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x0801121c : FUN_0801121c */

void FUN_0801121c(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x0801122c : FUN_0801122c */

void FUN_0801122c(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x0801123c : FUN_0801123c */

void FUN_0801123c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x08011240 : FUN_08011240 */

void FUN_08011240(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_08011276:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08011276;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_08011276;
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
    if (!bVar3) goto LAB_080112cc;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_080112cc:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x080112dc : FUN_080112dc */

void FUN_080112dc(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x080112ee : FUN_080112ee */

void FUN_080112ee(ushort *param_1,int param_2)

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



/* ENTRY 0x08011300 : FUN_08011300 */

void FUN_08011300(ushort *param_1,int param_2)

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



/* ENTRY 0x08011314 : FUN_08011314 */

void FUN_08011314(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(0x30,1);
  local_8 = 0x10031000;
  FUN_0800b9bc(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_0800b9bc(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_0800b9bc(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x08011374 : FUN_08011374 */

void FUN_08011374(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0800baf6(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_0800baf6(&DAT_40011000,0x1000);
    }
    else {
      FUN_0800bafa(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_0800bafa(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x080113bc : FUN_080113bc */

void FUN_080113bc(int param_1)

{
  uint uVar1;
  
  FUN_08015cfc(0x8f);
  FUN_08015cfc(0x40);
  FUN_0800baf6(&DAT_40011000,0x10);
  FUN_08011374(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_08011374(*(undefined1 *)(param_1 + uVar1));
    FUN_08011374((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_0800bafa(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x08011404 : FUN_08011404 */

void FUN_08011404(void)

{
  FUN_0800eb68(4);
  return;
}



/* ENTRY 0x0801140e : FUN_0801140e */

uint FUN_0801140e(int param_1,int param_2)

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



/* ENTRY 0x08011480 : FUN_08011480 */

void FUN_08011480(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_0801177c(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800a91c(&DAT_40020430);
    FUN_0800a804(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_0800a804(&DAT_40020430,1);
    FUN_0801174c(&DAT_40004c00,0x424);
    FUN_08014630(&DAT_20003ba0,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_0801177c(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004c00,0x727);
    FUN_080117c8(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_0801177c(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_0801177c(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_0801177c(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_0800dbcc(uVar1);
  return;
}



/* ENTRY 0x0801156c : FUN_0801156c */

void FUN_0801156c(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_0801177c(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_0800a91c(&DAT_40020058);
    uVar4 = 0x1f0 - iVar3;
    FUN_0800a804(&DAT_40020058,0);
    DAT_4002005c = 0x1f0;
    FUN_0800a804(&DAT_40020058,1);
    FUN_0801174c(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x1f1)) {
      FUN_080212a8(&DAT_2000378c,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_0801177c(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_0801174c(&DAT_40013800,0x727);
    FUN_080117c8(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_0801177c(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_0801174c(&DAT_40013800,0x525);
  }
  iVar3 = FUN_0801177c(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_0801174c(&DAT_40013800,0x260);
  }
  iVar3 = FUN_0801177c(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_0801174c(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_0800dbcc(uVar1);
  return;
}



/* ENTRY 0x08011660 : FUN_08011660 */

void FUN_08011660(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_0801177c(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800a91c(&DAT_40020030);
    FUN_0800a804(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_0800a804(&DAT_40020030,1);
    FUN_0801174c(&DAT_40004800,0x424);
    parse_bms_slot0(&DAT_200039e0,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_0801177c(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004800,0x727);
    FUN_080117c8(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_0801177c(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004800,0x525);
  }
  iVar4 = FUN_0801177c(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004800,0x260);
  }
  iVar4 = FUN_0801177c(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_0801174c(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_0800dbcc(uVar1);
  return;
}



/* ENTRY 0x0801174c : FUN_0801174c */

void FUN_0801174c(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x0801175a : FUN_0801175a */

void FUN_0801175a(int param_1,int param_2)

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



/* ENTRY 0x0801176c : FUN_0801176c */

void FUN_0801176c(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x0801177c : FUN_0801177c */

bool FUN_0801177c(ushort *param_1,uint param_2)

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



/* ENTRY 0x080117c8 : FUN_080117c8 */

void FUN_080117c8(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x080117f8 : FUN_080117f8 */

void FUN_080117f8(undefined2 *param_1,int *param_2)

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
  FUN_0800ed58(auStack_20);
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



/* ENTRY 0x080118ac : FUN_080118ac */

void FUN_080118ac(undefined2 *param_1,int *param_2)

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
  FUN_0800ee08(auStack_34);
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



/* ENTRY 0x08011984 : FUN_08011984 */

void FUN_08011984(undefined4 param_1)

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
  FUN_0800ba7c(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_0800b9bc(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_0800b9bc(&DAT_40010c00,&local_30);
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
  FUN_0800d9a0(&local_34);
  FUN_080117c8(&DAT_40013800,0x360,1);
  FUN_080117c8(&DAT_40013800,0x424,1);
  FUN_0801176c(&DAT_40013800,0x80,1);
  FUN_0801176c(&DAT_40013800,0x40,1);
  FUN_0800ecd4(1);
  FUN_0800a818(&DAT_40020044);
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
  FUN_0800a954(&DAT_40020044,&local_60);
  FUN_0800a944(&DAT_40020044,2,1);
  FUN_0800a804(&DAT_40020044,0);
  FUN_0800a818(&DAT_40020058);
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
  FUN_0800a954(&DAT_40020058,&local_60);
  FUN_0800a804(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d9a0(&local_34);
  FUN_080118ac(&DAT_40013800,&local_2c);
  FUN_0801175a(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08011b28 : FUN_08011b28 */

void FUN_08011b28(undefined4 param_1)

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
  FUN_0800b9bc(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800b9bc(&DAT_40010c00,&local_30);
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
  FUN_0800d9a0(&local_34);
  FUN_080117c8(&DAT_40004800,0x360,1);
  FUN_080117c8(&DAT_40004800,0x424,1);
  FUN_0801176c(&DAT_40004800,0x80,1);
  FUN_0801176c(&DAT_40004800,0x40,1);
  FUN_0800ecd4(1);
  FUN_0800a818(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003ae0;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a954(&DAT_4002001c,&local_60);
  FUN_0800a944(&DAT_4002001c,2,1);
  FUN_0800a804(&DAT_4002001c,0);
  FUN_0800a818(&DAT_40020030);
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
  FUN_0800a954(&DAT_40020030,&local_60);
  FUN_0800a804(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d9a0(&local_34);
  FUN_080117f8(&DAT_40004800,&local_2c);
  FUN_0801175a(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08011cc8 : FUN_08011cc8 */

void FUN_08011cc8(undefined4 param_1)

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
  FUN_0800b9bc(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800b9bc(&DAT_40011000,&local_30);
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
  FUN_0800d9a0(&local_34);
  FUN_080117c8(&DAT_40004c00,0x360,1);
  FUN_080117c8(&DAT_40004c00,0x424,1);
  FUN_0801176c(&DAT_40004c00,0x80,1);
  FUN_0801176c(&DAT_40004c00,0x40,1);
  FUN_0800ecd4(2,1);
  FUN_0800a818(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003ca0;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a954(&DAT_40020458,&local_60);
  FUN_0800a944(&DAT_40020458,2,1);
  FUN_0800a804(&DAT_40020458,0);
  FUN_0800a818(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003ba0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a954(&DAT_40020430,&local_60);
  FUN_0800a804(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d9a0(&local_34);
  FUN_080117f8(&DAT_40004c00,&local_2c);
  FUN_0801175a(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08011e68 : FUN_08011e68 */

void FUN_08011e68(char *param_1,int param_2)

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
          (&DAT_2000427e)[local_18] = param_1[local_18];
          local_18 = local_18 + 1 & 0xff;
        }
        return;
      }
      goto LAB_08012034;
    }
    bVar10 = *param_1 == -0x56;
  } while ((!bVar10) || (bVar10 = param_1[1] == 'U', !bVar10));
  if (DAT_20000981 == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_2000094d = 1;
      FUN_080234ec();
      FUN_08022c34();
      FUN_0800f4c8(0x46,DAT_20000981,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_080234ec(1);
        FUN_0800f4c8(0x46,DAT_20000981,0,0,0,0,0,0);
        return;
      }
      return;
    }
    local_14 = 1;
    FUN_080234ec();
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
    FUN_0800f4c8(0x46,DAT_20000981,0,0,0,0,0,0);
    return;
  }
LAB_08012034:
  uVar8 = (uint)(byte)param_1[0x10];
  if (uVar8 == 0x7a) {
    if (((DAT_20003185 == '\x01') || (param_1[0x11] != '\x10')) &&
       (iVar9 = FUN_0801f464(), iVar9 == 1)) {
      FUN_08016a20(local_10,local_c);
      return;
    }
    FUN_08008582(&local_24,0x14);
    local_24 = 0x155aa;
    local_20 = (uint)local_20._2_2_ << 0x10;
    local_18 = (uint)(ushort)local_18;
    local_14 = CONCAT22(local_14._2_2_,0xee7a);
    uVar7 = FUN_08015d38((int)&local_24 + 2,0x10);
    local_14 = CONCAT13((char)uVar7,CONCAT12((char)((ushort)uVar7 >> 8),(undefined2)local_14));
    FUN_0800f644(&local_24);
    FUN_080234ec(3);
    return;
  }
  if (uVar8 < 0x7b) {
    uVar8 = uVar8 - 0x3f;
    bVar10 = 0x3a < uVar8;
switchD_080120d2_default:
    if (bVar10) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801204a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801204e + (uint)*(ushort *)(&DAT_0801204e + uVar8 * 2) * 2))();
    return;
  }
  if (uVar8 == 0x93) {
    FUN_080234ec(1);
    if (DAT_2000317a == '\0') {
      local_28 = DAT_20003d8c;
      uVar2 = DAT_20003d8a;
      uVar3 = DAT_20003d88;
      uVar4 = DAT_20003d86;
      uVar5 = DAT_20003d84;
      uVar6 = DAT_20003d82;
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
    FUN_0800f4c8(0xad,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    return;
  }
  if (0x93 < uVar8) {
    if (uVar8 == 0x9b) {
      FUN_080234ec(1);
      FUN_08022c34();
      DAT_2000094d = 1;
      return;
    }
    if (0x9b < uVar8) {
      if (uVar8 != 0xe4) {
        if (uVar8 < 0xe5) {
          if ((uVar8 == 0xe1) || (uVar8 == 0xe2)) {
            FUN_08018a74(param_1);
            return;
          }
          bVar10 = uVar8 == 0xe3;
        }
        else {
          if ((uVar8 == 0xe5) || (uVar8 == 0xe6)) {
            FUN_0801920e(param_1);
            return;
          }
          bVar10 = false;
          if (uVar8 == 0xf9) {
            FUN_0801ad24(param_1);
            return;
          }
        }
        if (!bVar10) {
          return;
        }
      }
      FUN_0801796c(param_1);
      return;
    }
    uVar8 = uVar8 - 0x94;
    bVar10 = true;
    switch(uVar8) {
    case 0:
      FUN_080234ec(1);
      if (DAT_2000317a == '\0') {
        local_28 = DAT_20003d98;
        uVar2 = DAT_20003d96;
        uVar3 = DAT_20003d94;
        uVar4 = DAT_20003d92;
        uVar5 = DAT_20003d90;
        uVar6 = DAT_20003d8e;
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
      FUN_0800f4c8(0xae,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
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
        FUN_080234ec(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_200006ac = 0x14;
      FUN_080234ec(1);
      return;
    case 2:
      FUN_080234ec(1);
      local_14 = (uint)(short)DAT_20003244;
      FUN_0800f4c8(0x4d,local_14,0,0,0,0,0,0);
      return;
    case 3:
      FUN_080234ec(1);
      DAT_20003244 = (ushort)(byte)local_10[2];
      local_14 = (uint)(short)DAT_20003244;
      FUN_0800f4c8(0x4d,local_14,0,0,0,0,0,0);
      DAT_20003183 = 1;
      return;
    case 4:
      FUN_080234ec(1);
      local_14 = (uint)DAT_200031e6;
      local_18 = (uint)DAT_200031e8;
      local_1c = (uint)DAT_200031ea;
      local_20 = (uint)DAT_200031ec;
      FUN_0800f4c8(0xb5,0,(int)(short)DAT_200031e6,(int)(short)DAT_200031e8,(int)(short)DAT_200031ea
                   ,(int)(short)DAT_200031ec,0,0);
      return;
    case 5:
      FUN_080234ec(1);
      local_14 = (uint)CONCAT11(DAT_20003243,DAT_20003242);
      local_18 = (uint)CONCAT11(DAT_20003241,DAT_20003240);
      local_1c = (uint)CONCAT11(DAT_2000323f,DAT_2000323e);
      FUN_0800f4c8(0xe7,local_1c,local_18,local_14,0,0,0,0);
      return;
    case 6:
      FUN_080234ec(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_2000323e)[local_14] = local_10[local_14 + 2];
      }
      local_18 = (uint)*(short *)(local_10 + 6);
      local_1c = (uint)*(short *)(local_10 + 4);
      local_20 = (uint)*(short *)(local_10 + 2);
      FUN_0800f4c8(0xe7,local_20,local_1c,local_18,0,0,0,0);
      DAT_20003183 = 1;
      return;
    }
    goto switchD_080120d2_default;
  }
  uVar8 = uVar8 - 0x7c;
  bVar10 = true;
  switch(uVar8) {
  case 0:
    local_1c = FUN_0801f138();
    local_20 = FUN_0801f120();
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
          if (iVar9 < 0x42001) goto LAB_0801379e;
        }
        if ((local_14 == 1) && (DAT_2000317a == '\0')) {
          FUN_08022e38(1);
          FUN_080234ec(1);
          local_18 = 1;
          goto LAB_080137e6;
        }
      }
LAB_0801379e:
      FUN_080234ec(3);
      local_14 = 0;
    }
    else if (local_14 == 0) {
      FUN_08022e38(2);
      FUN_080234ec(2);
      local_18 = 1;
    }
    else if (DAT_20003185 == '\0') {
      FUN_080234ec(3);
      local_14 = 0;
    }
    else {
      FUN_08022e38(1);
      FUN_080234ec(1);
      local_18 = 1;
    }
LAB_080137e6:
    FUN_0800f4c8(0x48,local_14,0,0,0,0,0,0);
    break;
  case 1:
    local_14 = (uint)DAT_2000323c;
    FUN_0800f4c8(0x4a,local_14,0,0,0,0,0,0);
    FUN_080234ec(1);
    DAT_20003183 = 1;
    break;
  case 2:
    DAT_2000323a = (ushort)(byte)param_1[2];
    local_14 = (uint)(short)DAT_2000323a;
    FUN_0800f4c8(0x4c,local_14,0,0,0,0,0,0);
    FUN_080234ec(1);
    DAT_20003183 = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_080234ec(1);
    local_14 = (uint)DAT_2000323c;
    FUN_0800f4c8(0x4a,local_14,0,0,0,0,0,0);
    break;
  case 5:
    FUN_080234ec(1);
    local_14 = (uint)(short)DAT_2000323a;
    FUN_0800f4c8(0x4c,local_14,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_080234ec(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4c8(0xac,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031b8 = (ushort)local_14;
        DAT_200031ba = (ushort)local_18;
        DAT_200031bc = (ushort)local_1c;
        DAT_200031be = (ushort)local_20;
        DAT_200031c0 = (ushort)local_24;
        DAT_200031c2 = sVar1;
        FUN_0802435c(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_080234ec(2);
    break;
  case 7:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_080234ec(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4c8(0xad,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031c4 = (ushort)local_14;
        DAT_200031c6 = (ushort)local_18;
        DAT_200031c8 = (ushort)local_1c;
        DAT_200031ca = (ushort)local_20;
        DAT_200031cc = (ushort)local_24;
        DAT_200031ce = sVar1;
        FUN_0802435c(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_080234ec(2);
    break;
  case 8:
    if (DAT_2000317a != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_080234ec(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4c8(0xae,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031d0 = (ushort)local_14;
        DAT_200031d2 = (ushort)local_18;
        DAT_200031d4 = (ushort)local_1c;
        DAT_200031d6 = (ushort)local_20;
        DAT_200031d8 = (ushort)local_24;
        DAT_200031da = sVar1;
        FUN_0802435c(&DAT_200031b6);
        DAT_20003183 = 1;
        return;
      }
    }
    FUN_080234ec(2);
    break;
  case 9:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_080234ec(1);
      accept_speed_alarm_settings(local_10);
      DAT_20003183 = 1;
    }
    else {
      FUN_080234ec(2);
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
      FUN_080234ec(1);
      if (local_10[2] == '\0') {
        DAT_200031b6 = 0xe000;
        FUN_0800f4c8(0xa2,1,0,0,0,0,0,0);
      }
      else if (local_10[2] == '\x01') {
        DAT_200031b6 = 0xe001;
        FUN_0800f4c8(0xa2,1,1,0,0,0,0,0);
      }
      else if (local_10[2] == '\x02') {
        DAT_200031b6 = 0xe002;
        FUN_0800f4c8(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003d74 = DAT_200031b6;
      if (DAT_2000317a == '\0') {
        FUN_0802435c(&DAT_20003d74);
      }
      else {
        FUN_0802435c(&DAT_200031b6);
      }
      DAT_20003183 = 1;
    }
    else {
      FUN_080234ec(2);
    }
    break;
  case 0xc:
    DAT_2000094d = 1;
    if (DAT_200031f4 == 1) {
      FUN_080234ec();
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
          local_14 = FUN_08022e48(local_18);
          local_20 = (uint)(ushort)diag_TotalVoltage;
          local_24 = local_20 ^ 0xffff;
          FUN_0800f4c8(0x89,0xffffceb4,(int)(short)(ushort)diag_TotalVoltage,(int)(short)local_24,
                       0x1e,local_14,0,0xe00);
        }
      }
    }
    else {
      FUN_080234ec(1);
      if (DAT_20003185 == '\x01') {
        local_14 = diag_VehicleSpeed;
        iVar9 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar9 = -diag_VehicleSpeed;
        }
        if (iVar9 < 1000) {
          FUN_08022f34();
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
      FUN_0800f4c8(0x8a,0,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\x01') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_080234ec(2);
      }
      else {
        FUN_080234ec(1);
        DAT_200031aa = (short)local_14;
        local_18 = ((int)DAT_200031aa << 0xc) / 10;
        FUN_08022f74();
        local_18 = (uint)DAT_200031aa;
        FUN_0800f4c8(0x8a,1,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      local_14 = (uint)DAT_200031ac;
      FUN_0800f4c8(0x8a,2,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\x03') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_080234ec(2);
      }
      else {
        FUN_080234ec(1);
        DAT_200031ac = (short)local_14;
        local_18 = ((int)DAT_200031ac << 0xc) / 10;
        FUN_08022f9c();
        local_18 = (uint)DAT_200031ac;
        FUN_0800f4c8(0x8a,3,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      local_14 = (uint)DAT_20003246;
      FUN_0800f4c8(0x8a,4,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\x05') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_080234ec(2);
      }
      else {
        FUN_080234ec(1);
        DAT_20003246 = (byte)local_14;
        local_18 = local_14 & 0xff;
        FUN_08022f58();
        local_18 = (uint)DAT_20003246;
        FUN_0800f4c8(0x8a,5,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      local_14 = (uint)(short)DAT_200031f0;
      FUN_0800f4c8(0x8a,6,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\a') {
      local_14 = (uint)*(ushort *)(param_1 + 4);
      local_18 = (uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_080234ec(2);
      }
      else {
        local_18 = local_18 ^ 0xffff;
        if (local_14 == local_18) {
          if (param_1[3] == -0x32) {
            if (((int)local_14 < DAT_200002e0 + -1000) || (DAT_200002e0 + 1000 < (int)local_14)) {
              local_1c = (uint)(short)DAT_200031f0;
              FUN_0800f4c8(0x8a,7,local_1c,0,0,0,0,0);
              FUN_080234ec(2);
            }
            else {
              DAT_200002dc = local_14 - DAT_200002e0;
              DAT_200031f0 = (ushort)DAT_200002dc;
              DAT_200031f2 = (ushort)DAT_200002dc ^ 0xffff;
              FUN_080234ec(1);
              local_1c = (uint)(short)DAT_200031f0;
              FUN_0800f4c8(0x8a,0xffffce07,local_1c,0,0,0,0,0);
              DAT_20003183 = 1;
            }
          }
          else if ((param_1[3] == ' ') && (local_14 == 0)) {
            DAT_200002dc = 0;
            DAT_200031f0 = 0;
            DAT_200031f2 = 0;
            FUN_080234ec(1);
            local_1c = (uint)(short)DAT_200031f0;
            FUN_0800f4c8(0x8a,0x2007,local_1c,0,0,0,0,0);
            DAT_20003183 = 1;
          }
        }
        else {
          FUN_080234ec(2);
        }
      }
    }
    else if (param_1[2] == '\b') {
      local_14 = (uint)DAT_200031e4;
      FUN_0800f4c8(0x8a,8,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\t') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (((DAT_20003185 == '\0') || (100 < local_14)) || (local_14 < 0x32)) {
        FUN_080234ec(2);
      }
      else {
        FUN_080234ec(1);
        DAT_200031e4 = (short)local_14;
        local_18 = local_14 & 0xffff;
        FUN_0801afcc();
        local_18 = (uint)DAT_200031e4;
        FUN_0800f4c8(0x8a,9,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    else if (param_1[2] == '\n') {
      local_14 = DAT_20003247 & 1;
      FUN_0800f4c8(0x8a,10,local_14,0,0,0,0,0);
      FUN_080234ec(1);
    }
    else if (param_1[2] == '\v') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003185 == '\0') {
        FUN_080234ec(2);
      }
      else {
        FUN_080234ec(1);
        if (local_14 == 0) {
          DAT_20003247 = DAT_20003247 & 0xfe;
        }
        else {
          DAT_20003247 = DAT_20003247 | 1;
        }
        local_18 = DAT_20003247 & 1;
        FUN_0800f4c8(0x8a,0xb,local_18,0,0,0,0,0);
        DAT_20003183 = 1;
      }
    }
    break;
  case 0x16:
    FUN_080234ec(1);
    if (DAT_2000317a == '\0') {
      local_28 = DAT_20003d80;
      uVar2 = DAT_20003d7e;
      uVar3 = DAT_20003d7c;
      uVar4 = DAT_20003d7a;
      uVar5 = DAT_20003d78;
      uVar6 = DAT_20003d76;
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
    FUN_0800f4c8(0xac,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    break;
  default:
    goto switchD_080120d2_default;
  }
  return;
}



/* ENTRY 0x08013b40 : parse_bms_slot0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint parse_bms_slot0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *extraout_r2;
  undefined1 *puVar5;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar6;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  bool bVar7;
  uint local_50;
  undefined1 auStack_4c [4];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  ushort local_20 [2];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_24 = 0;
  local_28 = 0;
  local_c = param_1;
  uStack_8 = param_2;
  iVar3 = FUN_08016e7c(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004ba5 = 1;
    iVar3 = FUN_080191d0(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004ba9 = *(undefined1 *)(local_c + 2);
        DAT_20004baa = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08016de8(0,local_30,local_2c);
      }
      else {
        DAT_20004ba9 = *(undefined1 *)(local_c + 2);
        DAT_20004baa = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004d62 = DAT_20004d62 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801140e(local_30,local_2c);
  uVar4 = (uint)DAT_20004ba5;
  if (uVar4 == 0xbe) {
LAB_080143e0:
    if (((local_10 == 0x25) && (local_14 == 0xf)) &&
       ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0xc)))))) {
      local_1c = 0;
      puVar5 = extraout_r2;
      uVar6 = extraout_r3;
      for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
        uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
        uVar1 = FUN_0801140e(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,uVar1)
        ;
        puVar5 = auStack_4c;
        puVar5[local_50] = uVar1;
        uVar6 = extraout_r3_01;
      }
      FUN_08017adc(0,*(undefined1 *)(_parse_bms_slot1 + 1),auStack_4c);
    }
    goto code_r0x08014620;
  }
  if (uVar4 < 0xbf) {
    if (uVar4 == 0xae) goto LAB_080141a4;
    if (0xae < uVar4) {
      uVar4 = uVar4 - 0xaf;
      bVar7 = true;
      switch(uVar4) {
      case 0:
        goto switchD_08013c6c_caseD_0;
      case 1:
      case 5:
        goto LAB_0801451c;
      case 2:
      case 0xb:
      case 0xd:
        goto LAB_080143e0;
      case 3:
      case 4:
      case 8:
      case 10:
      case 0xc:
        goto LAB_0801439a;
      case 6:
        goto switchD_08013c6c_caseD_6;
      case 7:
        goto switchD_08013c6c_caseD_7;
      case 9:
        if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
           ((local_1c == 0 && (local_20[0] == 2)))) {
          local_1c = 0;
          bVar7 = false;
          puVar5 = extraout_r2;
          uVar6 = extraout_r3;
          while (!bVar7) {
            auStack_4c[0] =
                 FUN_0801140e(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar5,
                              uVar6,*(undefined1 *)(local_c + 0xd));
            puVar5 = auStack_4c;
            uVar6 = extraout_r3_03;
            bVar7 = true;
          }
          FUN_08017adc(0,*(undefined1 *)(_parse_bms_slot1 + 1),auStack_4c);
        }
        break;
      case 0xe:
        if (((local_10 == 0x25) && (local_14 == 0xf)) &&
           ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
          local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
          FUN_08016f98(0,local_2c,1);
        }
        else {
          local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
          FUN_08016f98(0,local_2c);
        }
        break;
      default:
switchD_08013c6c_default:
        if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x08013c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)(&DAT_08013c58 + (uint)*(ushort *)(&DAT_08013c58 + uVar4 * 2) * 2))();
          return uVar4;
        }
        goto LAB_0801451c;
      }
      goto code_r0x08014620;
    }
    if (uVar4 == 0xa6) {
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0xc)))) {
        local_1c = 0;
        puVar5 = extraout_r2;
        uVar6 = extraout_r3;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801140e(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                               uVar1);
          puVar5 = auStack_4c;
          puVar5[local_50] = uVar1;
          uVar6 = extraout_r3_04;
        }
        FUN_0801712c(0,*(undefined1 *)(_parse_bms_slot1 + 1),auStack_4c);
      }
      goto code_r0x08014620;
    }
    if (0xa6 < uVar4) {
      uVar4 = uVar4 - 0xa7;
      bVar7 = 6 < uVar4;
      goto switchD_08013c6c_default;
    }
    if (uVar4 == 0x44) {
      if (local_20[0] != 0x76) {
        return 0;
      }
      local_3c = (uint)*(byte *)(local_c + 0xe);
      local_40 = (uint)*(byte *)(local_c + 0xd);
      local_2c = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x10);
      local_40 = (uint)*(byte *)(local_c + 0xf);
      local_30 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x12);
      local_40 = (uint)*(byte *)(local_c + 0x11);
      local_34 = FUN_0801140e(local_40,local_3c);
      DAT_20004d0c = (undefined1)local_34;
      for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
        local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
        local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
        uVar1 = FUN_0801140e(local_44,local_40);
        (&DAT_20004d0e)[local_3c] = uVar1;
      }
      local_3c = (uint)*(byte *)(local_c + 0x50);
      local_40 = (uint)*(byte *)(local_c + 0x4f);
      local_38 = FUN_0801140e(local_40,local_3c);
      DAT_20004d0d = (undefined1)local_38;
      for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
        local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
        local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
        uVar1 = FUN_0801140e(local_44,local_40);
        (&DAT_20004d2c)[local_3c] = uVar1;
      }
      local_3c = (uint)*(byte *)(local_c + 0x62);
      local_40 = (uint)*(byte *)(local_c + 0x61);
      DAT_20004d34 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 100);
      local_40 = (uint)*(byte *)(local_c + 99);
      DAT_20004d35 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x66);
      local_40 = (uint)*(byte *)(local_c + 0x65);
      DAT_20004d36 = FUN_0801140e(local_40,local_3c);
      for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
        local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
        local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
        uVar1 = FUN_0801140e(local_44,local_40);
        (&DAT_20004d37)[local_3c] = uVar1;
      }
      DAT_20004d3e = FUN_0801ef80(local_c + 0x71);
      local_3c = (uint)*(byte *)(local_c + 0x76);
      local_40 = (uint)*(byte *)(local_c + 0x75);
      DAT_20004d44 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x78);
      local_40 = (uint)*(byte *)(local_c + 0x77);
      DAT_20004d45 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x7a);
      local_40 = (uint)*(byte *)(local_c + 0x79);
      DAT_20004d3c = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x7c);
      local_40 = (uint)*(byte *)(local_c + 0x7b);
      DAT_20004d42 = FUN_0801140e(local_40,local_3c);
      local_3c = (uint)*(byte *)(local_c + 0x7e);
      local_40 = (uint)*(byte *)(local_c + 0x7d);
      DAT_20004d43 = FUN_0801140e(local_40,local_3c);
      DAT_20004d40 = FUN_0801ef80(local_c + 0x7f);
      goto code_r0x08014620;
    }
    if (uVar4 < 0x45) {
      if (uVar4 == 0x32) goto LAB_0801439a;
      if (uVar4 == 0x35) {
        if (((local_10 == 0x25) && (local_18 == 0x46)) && ((local_1c == 0 && (local_20[0] == 0x1c)))
           ) {
          local_1c = 0;
          puVar5 = extraout_r2;
          uVar6 = extraout_r3;
          for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
            uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
            uVar1 = FUN_0801140e(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                 uVar1);
            puVar5 = auStack_4c;
            puVar5[local_50] = uVar1;
            uVar6 = extraout_r3_02;
          }
          FUN_08017adc(0,*(undefined1 *)(_parse_bms_slot1 + 1),auStack_4c);
        }
        goto code_r0x08014620;
      }
      bVar7 = uVar4 == 0x42;
LAB_08013c3c:
      if (bVar7) {
        if (local_20[0] != 0xba) {
          return 0;
        }
        local_3c = (uint)*(byte *)(local_c + 0xe);
        local_40 = (uint)*(byte *)(local_c + 0xd);
        local_2c = FUN_0801140e(local_40,local_3c);
        local_3c = (uint)*(byte *)(local_c + 0x10);
        local_40 = (uint)*(byte *)(local_c + 0xf);
        local_30 = FUN_0801140e(local_40,local_3c);
        local_3c = (uint)*(byte *)(local_c + 0x12);
        local_40 = (uint)*(byte *)(local_c + 0x11);
        local_34 = FUN_0801140e(local_40,local_3c);
        DAT_20004ca7 = (undefined1)local_34;
        for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
          local_40 = local_c + local_3c * 4 + 0x13;
          uVar2 = FUN_0801ef80();
          (&DAT_20004ca8)[local_3c] = uVar2;
        }
        local_3c = (uint)*(byte *)(local_c + 0x8c);
        local_40 = (uint)*(byte *)(local_c + 0x8b);
        local_38 = FUN_0801140e(local_40,local_3c);
        DAT_20004ce8 = (undefined1)local_38;
        for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
          local_40 = local_3c * 4 + 0x8d + local_c;
          uVar2 = FUN_0801ef80();
          (&DAT_20004cea)[local_3c] = uVar2;
        }
        DAT_20004cfe = FUN_0801ef80(local_c + 0xad);
        DAT_20004d00 = FUN_0801ef80(local_c + 0xb1);
        DAT_20004d02 = FUN_0801ef80(local_c + 0xb5);
        local_3c = (uint)*(byte *)(local_c + 0xba);
        local_40 = (uint)*(byte *)(local_c + 0xb9);
        DAT_20004d04 = FUN_0801140e(local_40,local_3c);
        DAT_20004d06 = FUN_0801ef80(local_c + 0xbb);
        DAT_20004d08 = FUN_0801ef80(local_c + 0xbf);
        DAT_20004d0a = FUN_0801ef80(local_c + 0xc3);
        goto code_r0x08014620;
      }
      goto LAB_0801451c;
    }
    if (uVar4 == 0xa0) goto LAB_0801427e;
    if (uVar4 == 0xa1) {
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0x60)))) {
        local_1c = 0;
        puVar5 = extraout_r2;
        uVar6 = extraout_r3;
        for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
          uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801140e(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                               uVar1);
          puVar5 = auStack_4c;
          puVar5[local_50] = uVar1;
          uVar6 = extraout_r3_00;
        }
        FUN_08017adc(0,*(undefined1 *)(_parse_bms_slot1 + 1),auStack_4c);
      }
      else {
        FUN_0801790a(0,*(undefined1 *)(_parse_bms_slot1 + 1));
      }
      goto code_r0x08014620;
    }
    bVar7 = uVar4 == 0xa4;
    if (!bVar7) goto LAB_08013c3c;
    goto LAB_080141b8;
  }
  uVar4 = uVar4 - 0xbf;
  bVar7 = true;
  switch(uVar4) {
  case 0:
LAB_0801439a:
    if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
       ((local_1c == 0 && (local_20[0] == 0)))) {
      local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
      FUN_0801790a(0,local_2c,1);
    }
    else {
      local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
      FUN_0801790a(0,local_2c);
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
LAB_0801451c:
    break;
  case 2:
    if (local_20[0] != 0x28) {
      return 0;
    }
    for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
      local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
      local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
      uVar1 = FUN_0801140e(local_34,local_30);
      (&DAT_20004c75)[local_2c] = uVar1;
    }
    break;
  case 3:
    if (local_20[0] != 0x28) {
      return 0;
    }
    for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
      local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
      local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
      uVar1 = FUN_0801140e(local_34,local_30);
      (&DAT_20004d47)[local_2c] = uVar1;
    }
    break;
  case 4:
    if (((local_10 == 0x25) && (local_14 == 0xf)) &&
       ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
      local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
      FUN_08018b44(0,local_2c,1);
    }
    else {
      local_2c = (uint)*(byte *)(_parse_bms_slot1 + 1);
      FUN_08018b44(0,local_2c);
    }
    break;
  case 0x11:
    goto switchD_08013c94_caseD_11;
  case 0x12:
    goto switchD_08013c94_caseD_12;
  case 0x13:
    goto switchD_08013c94_caseD_13;
  case 0x14:
    goto switchD_08013c94_caseD_14;
  case 0x15:
    goto switchD_08013c94_caseD_15;
  case 0x16:
    goto switchD_08013c94_caseD_16;
  case 0x17:
    goto switchD_08013c94_caseD_17;
  case 0x18:
    goto switchD_08013c94_caseD_18;
  case 0x19:
    goto switchD_08013c94_caseD_19;
  case 0x1a:
    goto switchD_08013c94_caseD_1a;
  case 0x1b:
    goto switchD_08013c94_caseD_1b;
  case 0x1c:
    goto switchD_08013c94_caseD_1c;
  case 0x1d:
    goto switchD_08013c94_caseD_1d;
  case 0x1e:
    goto switchD_08013c94_caseD_1e;
  case 0x1f:
    goto switchD_08013c94_caseD_1f;
  case 0x20:
    goto switchD_08013c94_caseD_20;
  case 0x21:
    goto switchD_08013c94_caseD_21;
  case 0x22:
    goto switchD_08013c94_caseD_22;
  case 0x23:
    goto switchD_08013c94_caseD_23;
  case 0x24:
    goto switchD_08013c94_caseD_24;
  case 0x27:
    local_28 = local_28 + 1 & 0xffff;
  case 0x25:
    local_28 = local_28 + 1 & 0xffff;
    goto switchD_08013c94_caseD_23;
  case 0x28:
    local_28 = local_28 + 1 & 0xffff;
  case 0x26:
    local_28 = local_28 + 1 & 0xffff;
    goto switchD_08013c94_caseD_24;
  default:
    goto switchD_08013c6c_default;
  }
code_r0x08014620:
  *(undefined1 *)(_parse_bms_slot1 + 1) = 0;
  return local_2c;
switchD_08013c94_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_22;
switchD_08013c94_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_21;
switchD_08013c94_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_20;
switchD_08013c94_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1f;
switchD_08013c94_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1e;
switchD_08013c94_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1d;
switchD_08013c94_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1c;
switchD_08013c94_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1b;
switchD_08013c94_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_1a;
switchD_08013c94_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_19;
switchD_08013c94_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_18;
switchD_08013c94_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_17;
switchD_08013c94_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_16;
switchD_08013c94_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_15;
switchD_08013c94_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_14;
switchD_08013c94_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_13;
switchD_08013c94_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_12;
switchD_08013c94_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013c94_caseD_11;
switchD_08013c94_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_08013c6c_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
switchD_08013c6c_caseD_0:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801427e:
  local_2c = (uint)(byte)(&DAT_20006301)[local_28 * 0x11];
  if (((local_10 == 0x25) && (local_14 == 0xf)) &&
     ((local_18 == 0x46 && ((local_1c == 0 && ((uint)local_20[0] == local_2c * 2)))))) {
    local_1c = 0;
    for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
      local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
      local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
      uVar1 = FUN_0801140e(local_48,local_44);
      *(undefined1 *)((int)&local_3c + local_40) = uVar1;
    }
    local_40 = local_28 & 0xff;
    FUN_080189c8(0,local_40,&local_3c);
  }
  goto code_r0x08014620;
switchD_08013c94_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_08013c6c_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_080141a4:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_080141b8:
  if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) && (local_1c == 0)) {
    local_2c = local_28 & 0xff;
    FUN_08018578(0,local_2c,1);
  }
  else {
    local_2c = local_28 & 0xff;
    FUN_08018578(0,local_2c);
  }
  goto code_r0x08014620;
}



/* ENTRY 0x0801462c : parse_bms_slot1 */

/* WARNING: Type propagation algorithm not settling */

uint parse_bms_slot1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uStack_6c;
  undefined1 auStack_68 [16];
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined1 auStack_4c [4];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  ushort auStack_20 [2];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iStack_c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_8 = param_2;
  iVar3 = FUN_08016e7c(auStack_20,0,param_3,0xf8209a0f);
  if (iVar3 == 0) {
    DAT_20004d65 = 1;
    iVar3 = FUN_080191d0(iStack_c);
    if (iVar3 == 1) {
      if (((*(char *)(iStack_c + 3) == '\x01') && (0x3c < *(byte *)(iStack_c + 2))) &&
         (*(byte *)(iStack_c + 2) < 0x41)) {
        DAT_20004d69 = *(undefined1 *)(iStack_c + 2);
        DAT_20004d6a = *(undefined1 *)(iStack_c + 4);
        uStack_2c = (uint)*(byte *)(iStack_c + 4);
        uStack_30 = (uint)*(byte *)(iStack_c + 2);
        FUN_08016de8(1,uStack_30,uStack_2c);
      }
      else {
        DAT_20004d69 = *(undefined1 *)(iStack_c + 2);
        DAT_20004d6a = *(undefined1 *)(iStack_c + 4);
      }
    }
    return 0;
  }
  DAT_20004f22 = DAT_20004f22 + 1;
  uStack_2c = (uint)*(byte *)(iStack_c + 2);
  uStack_30 = (uint)*(byte *)(iStack_c + 1);
  iStack_10 = FUN_0801140e(uStack_30,uStack_2c);
  uStack_2c = (uint)*(byte *)(iStack_c + 4);
  uStack_30 = (uint)*(byte *)(iStack_c + 3);
  iStack_14 = FUN_0801140e(uStack_30,uStack_2c);
  uStack_2c = (uint)*(byte *)(iStack_c + 6);
  uStack_30 = (uint)*(byte *)(iStack_c + 5);
  iStack_18 = FUN_0801140e(uStack_30,uStack_2c);
  uStack_2c = (uint)*(byte *)(iStack_c + 8);
  uStack_30 = (uint)*(byte *)(iStack_c + 7);
  iStack_1c = FUN_0801140e(uStack_30,uStack_2c);
  uVar4 = (uint)DAT_20004d65;
  if (uVar4 == 0xbe) {
LAB_08014f08:
    if (iStack_10 != 0x25) {
      DAT_20004d65 = 0;
      return uStack_2c;
    }
    if (iStack_14 != 0xf) {
      DAT_20004d65 = 0;
      return uStack_2c;
    }
    if (iStack_18 != 0x46) {
      DAT_20004d65 = 0;
      return uStack_2c;
    }
    if (iStack_1c == 0) {
      if (auStack_20[0] == 0xc) {
        iStack_1c = 0;
        for (uStack_50 = 0; uStack_50 < 6; uStack_50 = uStack_50 + 1 & 0xff) {
          uStack_54 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xe);
          uStack_58 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xd);
          uVar1 = FUN_0801140e(uStack_58,uStack_54);
          auStack_4c[uStack_50] = uVar1;
        }
        uStack_50 = (uint)DAT_20004d65;
        FUN_08017adc(1,uStack_50,auStack_4c);
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      DAT_20004d65 = 0;
      return uStack_2c;
    }
    DAT_20004d65 = 0;
    return uStack_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
LAB_08014ebe:
      if ((((iStack_10 == 0x25) && (iStack_14 == 0xf)) && (iStack_18 == 0x46)) &&
         ((iStack_1c == 0 && (auStack_20[0] == 0)))) {
        uStack_2c = (uint)DAT_20004d65;
        FUN_0801790a(1,uStack_2c);
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      uStack_2c = (uint)DAT_20004d65;
      FUN_0801790a(1,uStack_2c,0);
      DAT_20004d65 = 0;
      return uStack_2c;
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
      goto LAB_080146b0;
    case 2:
      if (auStack_20[0] != 0x28) {
        return 0;
      }
      for (uStack_2c = 0; uStack_2c < 0x14; uStack_2c = uStack_2c + 1 & 0xff) {
        uStack_30 = (uint)*(byte *)(iStack_c + uStack_2c * 2 + 0xe);
        uStack_34 = (uint)*(byte *)(iStack_c + uStack_2c * 2 + 0xd);
        uVar1 = FUN_0801140e(uStack_34,uStack_30);
        (&DAT_20004e35)[uStack_2c] = uVar1;
      }
      break;
    case 3:
      if (auStack_20[0] != 0x28) {
        return 0;
      }
      for (uStack_2c = 0; uStack_2c < 0x14; uStack_2c = uStack_2c + 1 & 0xff) {
        uStack_30 = (uint)*(byte *)(iStack_c + uStack_2c * 2 + 0xe);
        uStack_34 = (uint)*(byte *)(iStack_c + uStack_2c * 2 + 0xd);
        uVar1 = FUN_0801140e(uStack_34,uStack_30);
        (&DAT_20004f07)[uStack_2c] = uVar1;
      }
      break;
    case 4:
      if (((iStack_10 == 0x25) && (iStack_14 == 0xf)) &&
         ((iStack_18 == 0x46 && ((iStack_1c == 0 && (auStack_20[0] == 0)))))) {
        uStack_2c = (uint)DAT_20004d65;
        FUN_08018b44(1,uStack_2c);
      }
      else {
        uStack_2c = (uint)DAT_20004d65;
        FUN_08018b44(1,uStack_2c,0);
      }
      break;
    case 0x11:
      goto switchD_08014796_caseD_11;
    case 0x12:
      goto switchD_08014796_caseD_12;
    case 0x13:
      goto switchD_08014796_caseD_13;
    case 0x14:
      goto switchD_08014796_caseD_14;
    case 0x15:
      goto switchD_08014796_caseD_15;
    case 0x16:
      goto switchD_08014796_caseD_16;
    case 0x17:
      goto switchD_08014796_caseD_17;
    case 0x18:
      goto switchD_08014796_caseD_18;
    case 0x19:
      goto switchD_08014796_caseD_19;
    case 0x1a:
      goto switchD_08014796_caseD_1a;
    case 0x1b:
      goto switchD_08014796_caseD_1b;
    case 0x1c:
      goto switchD_08014796_caseD_1c;
    case 0x1d:
      goto switchD_08014796_caseD_1d;
    case 0x1e:
      goto switchD_08014796_caseD_1e;
    case 0x1f:
      goto switchD_08014796_caseD_1f;
    case 0x20:
      goto switchD_08014796_caseD_20;
    case 0x21:
      goto switchD_08014796_caseD_21;
    case 0x22:
      goto switchD_08014796_caseD_22;
    case 0x23:
      goto switchD_08014796_caseD_23;
    case 0x24:
      goto switchD_08014796_caseD_24;
    case 0x27:
      uStack_28 = uStack_28 + 1 & 0xffff;
    case 0x25:
      uStack_28 = uStack_28 + 1 & 0xffff;
      goto switchD_08014796_caseD_23;
    case 0x28:
      uStack_28 = uStack_28 + 1 & 0xffff;
    case 0x26:
      uStack_28 = uStack_28 + 1 & 0xffff;
      goto switchD_08014796_caseD_24;
    default:
      goto switchD_0801476e_default;
    }
    DAT_20004d65 = 0;
    return uStack_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (iStack_10 != 0x25) {
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        if (iStack_14 != 0xf) {
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        if (iStack_18 != 0x46) {
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        if (iStack_1c == 0) {
          if (auStack_20[0] == 0xc) {
            iStack_1c = 0;
            for (uStack_50 = 0; uStack_50 < 6; uStack_50 = uStack_50 + 1 & 0xff) {
              uStack_54 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xe);
              uStack_58 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xd);
              uVar1 = FUN_0801140e(uStack_58,uStack_54);
              auStack_4c[uStack_50] = uVar1;
            }
            uStack_50 = (uint)DAT_20004d65;
            FUN_0801712c(1,uStack_50,auStack_4c);
            DAT_20004d65 = 0;
            return uStack_2c;
          }
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (auStack_20[0] != 0x76) {
            return 0;
          }
          uStack_3c = (uint)*(byte *)(iStack_c + 0xe);
          uStack_40 = (uint)*(byte *)(iStack_c + 0xd);
          uStack_2c = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x10);
          uStack_40 = (uint)*(byte *)(iStack_c + 0xf);
          uStack_30 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x12);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x11);
          uStack_34 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004ecc = (undefined1)uStack_34;
          for (uStack_3c = 0; uStack_3c < 0x1e; uStack_3c = uStack_3c + 1 & 0xff) {
            uStack_40 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x14);
            uStack_44 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x13);
            uVar1 = FUN_0801140e(uStack_44,uStack_40);
            (&DAT_20004ece)[uStack_3c] = uVar1;
          }
          uStack_3c = (uint)*(byte *)(iStack_c + 0x50);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x4f);
          uStack_38 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004ecd = (undefined1)uStack_38;
          for (uStack_3c = 0; uStack_3c < 8; uStack_3c = uStack_3c + 1 & 0xff) {
            uStack_40 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x52);
            uStack_44 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x51);
            uVar1 = FUN_0801140e(uStack_44,uStack_40);
            (&DAT_20004eec)[uStack_3c] = uVar1;
          }
          uStack_3c = (uint)*(byte *)(iStack_c + 0x62);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x61);
          DAT_20004ef4 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 100);
          uStack_40 = (uint)*(byte *)(iStack_c + 99);
          DAT_20004ef5 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x66);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x65);
          DAT_20004ef6 = FUN_0801140e(uStack_40,uStack_3c);
          for (uStack_3c = 0; uStack_3c < 5; uStack_3c = uStack_3c + 1 & 0xff) {
            uStack_40 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x68);
            uStack_44 = (uint)*(byte *)(iStack_c + uStack_3c * 2 + 0x67);
            uVar1 = FUN_0801140e(uStack_44,uStack_40);
            (&DAT_20004ef7)[uStack_3c] = uVar1;
          }
          DAT_20004efe = FUN_0801ef80(iStack_c + 0x71);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x76);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x75);
          DAT_20004f04 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x78);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x77);
          DAT_20004f05 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x7a);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x79);
          DAT_20004efc = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x7c);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x7b);
          DAT_20004f02 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x7e);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x7d);
          DAT_20004f03 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004f00 = FUN_0801ef80(iStack_c + 0x7f);
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_08014ebe;
          if (uVar4 == 0x35) {
            if (iStack_10 != 0x25) {
              DAT_20004d65 = 0;
              return uStack_2c;
            }
            if (iStack_18 != 0x46) {
              DAT_20004d65 = 0;
              return uStack_2c;
            }
            if (iStack_1c != 0) {
              DAT_20004d65 = 0;
              return uStack_2c;
            }
            if (auStack_20[0] == 0x1c) {
              iStack_1c = 0;
              for (uStack_50 = 0; uStack_50 < 0xe; uStack_50 = uStack_50 + 1 & 0xff) {
                uStack_54 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xe);
                uStack_58 = (uint)*(byte *)(iStack_c + uStack_50 * 2 + 0xd);
                uVar1 = FUN_0801140e(uStack_58,uStack_54);
                auStack_4c[uStack_50] = uVar1;
              }
              uStack_50 = (uint)DAT_20004d65;
              FUN_08017adc(1,uStack_50,auStack_4c);
              DAT_20004d65 = 0;
              return uStack_2c;
            }
            DAT_20004d65 = 0;
            return uStack_2c;
          }
          bVar5 = uVar4 == 0x42;
LAB_0801473e:
          if (!bVar5) {
            DAT_20004d65 = 0;
            return uStack_2c;
          }
          if (auStack_20[0] != 0xba) {
            return 0;
          }
          uStack_3c = (uint)*(byte *)(iStack_c + 0xe);
          uStack_40 = (uint)*(byte *)(iStack_c + 0xd);
          uStack_2c = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x10);
          uStack_40 = (uint)*(byte *)(iStack_c + 0xf);
          uStack_30 = FUN_0801140e(uStack_40,uStack_3c);
          uStack_3c = (uint)*(byte *)(iStack_c + 0x12);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x11);
          uStack_34 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004e67 = (undefined1)uStack_34;
          for (uStack_3c = 0; uStack_3c < 0x1e; uStack_3c = uStack_3c + 1 & 0xff) {
            uStack_40 = iStack_c + uStack_3c * 4 + 0x13;
            uVar2 = FUN_0801ef80();
            (&DAT_20004e68)[uStack_3c] = uVar2;
          }
          uStack_3c = (uint)*(byte *)(iStack_c + 0x8c);
          uStack_40 = (uint)*(byte *)(iStack_c + 0x8b);
          uStack_38 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004ea8 = (undefined1)uStack_38;
          for (uStack_3c = 0; uStack_3c < 8; uStack_3c = uStack_3c + 1 & 0xff) {
            uStack_40 = uStack_3c * 4 + 0x8d + iStack_c;
            uVar2 = FUN_0801ef80();
            (&DAT_20004eaa)[uStack_3c] = uVar2;
          }
          DAT_20004ebe = FUN_0801ef80(iStack_c + 0xad);
          DAT_20004ec0 = FUN_0801ef80(iStack_c + 0xb1);
          DAT_20004ec2 = FUN_0801ef80(iStack_c + 0xb5);
          uStack_3c = (uint)*(byte *)(iStack_c + 0xba);
          uStack_40 = (uint)*(byte *)(iStack_c + 0xb9);
          DAT_20004ec4 = FUN_0801140e(uStack_40,uStack_3c);
          DAT_20004ec6 = FUN_0801ef80(iStack_c + 0xbb);
          DAT_20004ec8 = FUN_0801ef80(iStack_c + 0xbf);
          DAT_20004eca = FUN_0801ef80(iStack_c + 0xc3);
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        if (uVar4 == 0xa0) goto LAB_08014d9e;
        if (uVar4 == 0xa1) {
          if ((((iStack_10 == 0x25) && (iStack_14 == 0xf)) && (iStack_18 == 0x46)) &&
             ((iStack_1c == 0 && (auStack_20[0] == 0x60)))) {
            iStack_1c = 0;
            for (uStack_6c = 0; uStack_6c < 0x24; uStack_6c = uStack_6c + 1 & 0xff) {
              uVar1 = FUN_0801140e(*(undefined1 *)(iStack_c + uStack_6c * 2 + 0xd),
                                   *(undefined1 *)(iStack_c + uStack_6c * 2 + 0xe));
              auStack_68[uStack_6c] = uVar1;
            }
            FUN_08017adc(1,DAT_20004d65,auStack_68);
            DAT_20004d65 = 0;
            return uStack_2c;
          }
          FUN_0801790a(1,DAT_20004d65,0);
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        bVar5 = false;
        if (uVar4 != 0xa4) goto LAB_0801473e;
        goto LAB_08014cd8;
      }
      uVar4 = uVar4 - 0xa7;
      bVar5 = 6 < uVar4;
switchD_0801476e_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x08014756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801475a + (uint)*(ushort *)(&DAT_0801475a + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_080146b0:
      DAT_20004d65 = 0;
      return uStack_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
switchD_0801476e_caseD_0:
      uStack_28 = uStack_28 + 1 & 0xffff;
LAB_08014d9e:
      uStack_2c = (uint)(byte)(&DAT_20006400)[uStack_28 * 0x11];
      if (iStack_10 != 0x25) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_14 != 0xf) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_18 != 0x46) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_1c == 0) {
        if ((uint)auStack_20[0] == uStack_2c * 2) {
          iStack_1c = 0;
          for (uStack_40 = 0; (int)uStack_40 < (int)uStack_2c; uStack_40 = uStack_40 + 1 & 0xff) {
            uStack_44 = (uint)*(byte *)(iStack_c + uStack_40 * 2 + 0xe);
            uStack_48 = (uint)*(byte *)(iStack_c + uStack_40 * 2 + 0xd);
            uVar1 = FUN_0801140e(uStack_48,uStack_44);
            *(undefined1 *)((int)&uStack_3c + uStack_40) = uVar1;
          }
          uStack_40 = uStack_28 & 0xff;
          FUN_080189c8(1,uStack_40,&uStack_3c);
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      DAT_20004d65 = 0;
      return uStack_2c;
    case 1:
    case 5:
      goto LAB_080146b0;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_08014f08;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_08014ebe;
    case 6:
      goto switchD_0801476e_caseD_6;
    case 7:
      goto switchD_0801476e_caseD_7;
    case 9:
      if (iStack_10 != 0x25) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_14 != 0xf) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_18 != 0x46) {
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      if (iStack_1c == 0) {
        if (auStack_20[0] == 2) {
          iStack_1c = 0;
          for (uStack_50 = 0; uStack_50 == 0; uStack_50 = uStack_50 + 1 & 0xff) {
            uStack_54 = (uint)*(byte *)(iStack_c + 0xe);
            uStack_58 = (uint)*(byte *)(iStack_c + 0xd);
            uVar1 = FUN_0801140e(uStack_58,uStack_54);
            auStack_4c[uStack_50] = uVar1;
          }
          uStack_50 = (uint)DAT_20004d65;
          FUN_08017adc(1,uStack_50,auStack_4c);
          DAT_20004d65 = 0;
          return uStack_2c;
        }
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      DAT_20004d65 = 0;
      return uStack_2c;
    case 0xe:
      if (((iStack_10 == 0x25) && (iStack_14 == 0xf)) &&
         ((iStack_18 == 0x46 && ((iStack_1c == 0 && (auStack_20[0] == 0)))))) {
        uStack_2c = (uint)DAT_20004d65;
        FUN_08016f98(1,uStack_2c);
        DAT_20004d65 = 0;
        return uStack_2c;
      }
      uStack_2c = (uint)DAT_20004d65;
      FUN_08016f98(1,uStack_2c,0);
      DAT_20004d65 = 0;
      return uStack_2c;
    default:
      goto switchD_0801476e_default;
    }
  }
  goto LAB_08014cc4;
switchD_08014796_caseD_24:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_22;
switchD_08014796_caseD_23:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_21;
switchD_08014796_caseD_22:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_20;
switchD_08014796_caseD_21:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1f;
switchD_08014796_caseD_20:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1e;
switchD_08014796_caseD_1f:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1d;
switchD_08014796_caseD_1e:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1c;
switchD_08014796_caseD_1d:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1b;
switchD_08014796_caseD_1c:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1a;
switchD_08014796_caseD_1b:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_19;
switchD_08014796_caseD_1a:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_18;
switchD_08014796_caseD_19:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_17;
switchD_08014796_caseD_18:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_16;
switchD_08014796_caseD_17:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_15;
switchD_08014796_caseD_16:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_14;
switchD_08014796_caseD_15:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_13;
switchD_08014796_caseD_14:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_12;
switchD_08014796_caseD_13:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_11;
switchD_08014796_caseD_12:
  uStack_28 = uStack_28 + 1 & 0xffff;
switchD_0801476e_caseD_7:
  uStack_28 = uStack_28 + 1 & 0xffff;
  goto switchD_0801476e_caseD_0;
switchD_08014796_caseD_11:
  uStack_28 = uStack_28 + 1 & 0xffff;
switchD_0801476e_caseD_6:
  uStack_28 = uStack_28 + 1 & 0xffff;
LAB_08014cc4:
  uStack_28 = (uStack_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_08014cd8:
  if (((iStack_10 == 0x25) && (iStack_14 == 0xf)) && ((iStack_18 == 0x46 && (iStack_1c == 0)))) {
    uStack_2c = uStack_28 & 0xff;
    FUN_08018578(1,uStack_2c);
    DAT_20004d65 = 0;
    return uStack_2c;
  }
  uStack_2c = uStack_28 & 0xff;
  FUN_08018578(1,uStack_2c,0);
  DAT_20004d65 = 0;
  return uStack_2c;
}



/* ENTRY 0x08014630 : FUN_08014630 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_08014630(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_6c;
  undefined1 auStack_68 [16];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 auStack_4c [4];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  ushort local_20 [2];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_24 = 0;
  local_28 = 0;
  local_c = param_1;
  uStack_8 = param_2;
  iVar3 = FUN_08016e7c(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004d65 = 1;
    iVar3 = FUN_080191d0(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004d69 = *(undefined1 *)(local_c + 2);
        DAT_20004d6a = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08016de8(1,local_30,local_2c);
      }
      else {
        DAT_20004d69 = *(undefined1 *)(local_c + 2);
        DAT_20004d6a = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004f22 = DAT_20004f22 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801140e(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801140e(local_30,local_2c);
  uVar4 = (uint)DAT_20004d65;
  if (uVar4 == 0xbe) {
LAB_08014f08:
    if (local_10 != 0x25) {
      DAT_20004d65 = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_20004d65 = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_20004d65 = 0;
      return local_2c;
    }
    if (local_1c == 0) {
      if (local_20[0] == 0xc) {
        local_1c = 0;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
          local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801140e(local_58,local_54);
          auStack_4c[local_50] = uVar1;
        }
        local_50 = (uint)DAT_20004d65;
        FUN_08017adc(1,local_50,auStack_4c);
        DAT_20004d65 = 0;
        return local_2c;
      }
      DAT_20004d65 = 0;
      return local_2c;
    }
    DAT_20004d65 = 0;
    return local_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
LAB_08014ebe:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0)))) {
        local_2c = (uint)DAT_20004d65;
        FUN_0801790a(1,local_2c);
        DAT_20004d65 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004d65;
      FUN_0801790a(1,local_2c,0);
      DAT_20004d65 = 0;
      return local_2c;
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
      goto LAB_080146b0;
    case 2:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801140e(local_34,local_30);
        (&DAT_20004e35)[local_2c] = uVar1;
      }
      break;
    case 3:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801140e(local_34,local_30);
        (&DAT_20004f07)[local_2c] = uVar1;
      }
      break;
    case 4:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004d65;
        FUN_08018b44(1,local_2c);
      }
      else {
        local_2c = (uint)DAT_20004d65;
        FUN_08018b44(1,local_2c,0);
      }
      break;
    case 0x11:
      goto switchD_08014796_caseD_11;
    case 0x12:
      goto switchD_08014796_caseD_12;
    case 0x13:
      goto switchD_08014796_caseD_13;
    case 0x14:
      goto switchD_08014796_caseD_14;
    case 0x15:
      goto switchD_08014796_caseD_15;
    case 0x16:
      goto switchD_08014796_caseD_16;
    case 0x17:
      goto switchD_08014796_caseD_17;
    case 0x18:
      goto switchD_08014796_caseD_18;
    case 0x19:
      goto switchD_08014796_caseD_19;
    case 0x1a:
      goto switchD_08014796_caseD_1a;
    case 0x1b:
      goto switchD_08014796_caseD_1b;
    case 0x1c:
      goto switchD_08014796_caseD_1c;
    case 0x1d:
      goto switchD_08014796_caseD_1d;
    case 0x1e:
      goto switchD_08014796_caseD_1e;
    case 0x1f:
      goto switchD_08014796_caseD_1f;
    case 0x20:
      goto switchD_08014796_caseD_20;
    case 0x21:
      goto switchD_08014796_caseD_21;
    case 0x22:
      goto switchD_08014796_caseD_22;
    case 0x23:
      goto switchD_08014796_caseD_23;
    case 0x24:
      goto switchD_08014796_caseD_24;
    case 0x27:
      local_28 = local_28 + 1 & 0xffff;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_08014796_caseD_23;
    case 0x28:
      local_28 = local_28 + 1 & 0xffff;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_08014796_caseD_24;
    default:
      goto switchD_0801476e_default;
    }
    DAT_20004d65 = 0;
    return local_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (local_10 != 0x25) {
          DAT_20004d65 = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_20004d65 = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_20004d65 = 0;
          return local_2c;
        }
        if (local_1c == 0) {
          if (local_20[0] == 0xc) {
            local_1c = 0;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
              local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801140e(local_58,local_54);
              auStack_4c[local_50] = uVar1;
            }
            local_50 = (uint)DAT_20004d65;
            FUN_0801712c(1,local_50,auStack_4c);
            DAT_20004d65 = 0;
            return local_2c;
          }
          DAT_20004d65 = 0;
          return local_2c;
        }
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (local_20[0] != 0x76) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801140e(local_40,local_3c);
          DAT_20004ecc = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_0801140e(local_44,local_40);
            (&DAT_20004ece)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_0801140e(local_40,local_3c);
          DAT_20004ecd = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_0801140e(local_44,local_40);
            (&DAT_20004eec)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004ef4 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004ef5 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004ef6 = FUN_0801140e(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_0801140e(local_44,local_40);
            (&DAT_20004ef7)[local_3c] = uVar1;
          }
          DAT_20004efe = FUN_0801ef80(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004f04 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004f05 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004efc = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004f02 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004f03 = FUN_0801140e(local_40,local_3c);
          DAT_20004f00 = FUN_0801ef80(local_c + 0x7f);
          DAT_20004d65 = 0;
          return local_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_08014ebe;
          if (uVar4 == 0x35) {
            if (local_10 != 0x25) {
              DAT_20004d65 = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_20004d65 = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_20004d65 = 0;
              return local_2c;
            }
            if (local_20[0] == 0x1c) {
              local_1c = 0;
              for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
                local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
                local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
                uVar1 = FUN_0801140e(local_58,local_54);
                auStack_4c[local_50] = uVar1;
              }
              local_50 = (uint)DAT_20004d65;
              FUN_08017adc(1,local_50,auStack_4c);
              DAT_20004d65 = 0;
              return local_2c;
            }
            DAT_20004d65 = 0;
            return local_2c;
          }
          bVar5 = uVar4 == 0x42;
LAB_0801473e:
          if (!bVar5) {
            DAT_20004d65 = 0;
            return local_2c;
          }
          if (local_20[0] != 0xba) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801140e(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801140e(local_40,local_3c);
          DAT_20004e67 = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_c + local_3c * 4 + 0x13;
            uVar2 = FUN_0801ef80();
            (&DAT_20004e68)[local_3c] = uVar2;
          }
          local_3c = (uint)*(byte *)(local_c + 0x8c);
          local_40 = (uint)*(byte *)(local_c + 0x8b);
          local_38 = FUN_0801140e(local_40,local_3c);
          DAT_20004ea8 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_3c * 4 + 0x8d + local_c;
            uVar2 = FUN_0801ef80();
            (&DAT_20004eaa)[local_3c] = uVar2;
          }
          DAT_20004ebe = FUN_0801ef80(local_c + 0xad);
          DAT_20004ec0 = FUN_0801ef80(local_c + 0xb1);
          DAT_20004ec2 = FUN_0801ef80(local_c + 0xb5);
          local_3c = (uint)*(byte *)(local_c + 0xba);
          local_40 = (uint)*(byte *)(local_c + 0xb9);
          DAT_20004ec4 = FUN_0801140e(local_40,local_3c);
          DAT_20004ec6 = FUN_0801ef80(local_c + 0xbb);
          DAT_20004ec8 = FUN_0801ef80(local_c + 0xbf);
          DAT_20004eca = FUN_0801ef80(local_c + 0xc3);
          DAT_20004d65 = 0;
          return local_2c;
        }
        if (uVar4 == 0xa0) goto LAB_08014d9e;
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
              uVar1 = FUN_0801140e(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                   *(undefined1 *)(local_c + local_6c * 2 + 0xe));
              auStack_68[local_6c] = uVar1;
            }
            FUN_08017adc(1,DAT_20004d65,auStack_68);
            DAT_20004d65 = 0;
            return local_2c;
          }
          FUN_0801790a(1,DAT_20004d65,0);
          DAT_20004d65 = 0;
          return local_2c;
        }
        bVar5 = false;
        if (uVar4 != 0xa4) goto LAB_0801473e;
        goto LAB_08014cd8;
      }
      uVar4 = uVar4 - 0xa7;
      bVar5 = 6 < uVar4;
switchD_0801476e_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x08014756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801475a + (uint)*(ushort *)(&DAT_0801475a + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_080146b0:
      DAT_20004d65 = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
switchD_0801476e_caseD_0:
      local_28 = local_28 + 1 & 0xffff;
LAB_08014d9e:
      local_2c = (uint)(byte)(&DAT_20006400)[local_28 * 0x11];
      if (local_10 != 0x25) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if ((uint)local_20[0] == local_2c * 2) {
          local_1c = 0;
          for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
            local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
            local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
            uVar1 = FUN_0801140e(local_48,local_44);
            *(undefined1 *)((int)&local_3c + local_40) = uVar1;
          }
          local_40 = local_28 & 0xff;
          FUN_080189c8(1,local_40,&local_3c);
          DAT_20004d65 = 0;
          return local_2c;
        }
        DAT_20004d65 = 0;
        return local_2c;
      }
      DAT_20004d65 = 0;
      return local_2c;
    case 1:
    case 5:
      goto LAB_080146b0;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_08014f08;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_08014ebe;
    case 6:
      goto switchD_0801476e_caseD_6;
    case 7:
      goto switchD_0801476e_caseD_7;
    case 9:
      if (local_10 != 0x25) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004d65 = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if (local_20[0] == 2) {
          local_1c = 0;
          for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
            local_54 = (uint)*(byte *)(local_c + 0xe);
            local_58 = (uint)*(byte *)(local_c + 0xd);
            uVar1 = FUN_0801140e(local_58,local_54);
            auStack_4c[local_50] = uVar1;
          }
          local_50 = (uint)DAT_20004d65;
          FUN_08017adc(1,local_50,auStack_4c);
          DAT_20004d65 = 0;
          return local_2c;
        }
        DAT_20004d65 = 0;
        return local_2c;
      }
      DAT_20004d65 = 0;
      return local_2c;
    case 0xe:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004d65;
        FUN_08016f98(1,local_2c);
        DAT_20004d65 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004d65;
      FUN_08016f98(1,local_2c,0);
      DAT_20004d65 = 0;
      return local_2c;
    default:
      goto switchD_0801476e_default;
    }
  }
  goto LAB_08014cc4;
switchD_08014796_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_22;
switchD_08014796_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_21;
switchD_08014796_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_20;
switchD_08014796_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1f;
switchD_08014796_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1e;
switchD_08014796_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1d;
switchD_08014796_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1c;
switchD_08014796_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1b;
switchD_08014796_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_1a;
switchD_08014796_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_19;
switchD_08014796_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_18;
switchD_08014796_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_17;
switchD_08014796_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_16;
switchD_08014796_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_15;
switchD_08014796_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_14;
switchD_08014796_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_13;
switchD_08014796_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_12;
switchD_08014796_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014796_caseD_11;
switchD_08014796_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801476e_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801476e_caseD_0;
switchD_08014796_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801476e_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_08014cc4:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_08014cd8:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08018578(1,local_2c);
    DAT_20004d65 = 0;
    return local_2c;
  }
  local_2c = local_28 & 0xff;
  FUN_08018578(1,local_2c,0);
  DAT_20004d65 = 0;
  return local_2c;
}



/* ENTRY 0x08015164 : FUN_08015164 */

void FUN_08015164(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_08015398(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_080156a8(param_1 + 1);
    break;
  case 0xe2:
    FUN_080156d8(param_1 + 1);
    break;
  case 0xe3:
    FUN_08015380(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_0801538c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_080155fc(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_08015708(param_1 + 1);
    break;
  case 0xe7:
    FUN_080221f4();
    FUN_080151c4(param_1 + 1);
  }
  return;
}



/* ENTRY 0x080151c4 : FUN_080151c4 */

void FUN_080151c4(int param_1)

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
    local_55 = (undefined1)(&DWORD_080275ec)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_080275ec + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_080275e8)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_080275ec + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_080275f4)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_080275f4)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_080275ec + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_080275f0)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_080275ec + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_080275f4)[uVar1 * 4] + '\x06';
  }
  FUN_0800d8bc(local_58);
  FUN_08020b84(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x080152ac : FUN_080152ac */

void FUN_080152ac(int param_1)

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
    local_51 = (undefined1)(&DWORD_080275ec)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080275ec + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_080275e8)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_080275ec + param_1 * 0x10 + 1)] =
         (char)(&DWORD_080275f4)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_080275f4)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_080275ec + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_080275f0)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_080275ec + param_1 * 0x10 + 1) +
                  (char)(&DWORD_080275f4)[param_1 * 4] + '\x06';
  }
  FUN_0800d8bc(local_54);
  FUN_08020b84(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x08015380 : FUN_08015380 */

void FUN_08015380(undefined1 param_1)

{
  DAT_200005f2 = param_1;
  return;
}



/* ENTRY 0x0801538c : FUN_0801538c */

void FUN_0801538c(undefined1 param_1)

{
  DAT_200005f1 = param_1;
  return;
}



/* ENTRY 0x08015398 : FUN_08015398 */

void FUN_08015398(int param_1)

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
    local_4d = (undefined1)(&DWORD_08026fcc)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_08026fd4 + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_08026fd4)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08026fd4)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_08026fd0)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_08026fd4)[param_1 * 4] + '\a';
  }
  FUN_0800d8bc(local_50);
  FUN_08020b84(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08015444 : FUN_08015444 */

void FUN_08015444(void)

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
  FUN_0800d8bc(local_50);
  FUN_08020b84(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x0801549c : FUN_0801549c */

void FUN_0801549c(void)

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
  FUN_0800d8bc(local_50);
  FUN_08020b84(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x080154f4 : FUN_080154f4 */

void FUN_080154f4(void)

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
        uVar2 < *(byte *)((int)&DWORD_08026fcc + (uint)(byte)(&DAT_200039ce)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08026fc8)[(uint)(byte)(&DAT_200039ce)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800d8bc(local_58);
  FUN_08020b84(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08015578 : FUN_08015578 */

void FUN_08015578(void)

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
        uVar2 < *(byte *)((int)&DWORD_08026fcc + (uint)(byte)(&DAT_200039d8)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08026fc8)[(uint)(byte)(&DAT_200039d8)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800d8bc(local_58);
  FUN_08020b84(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x080155fc : FUN_080155fc */

void FUN_080155fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026fcc + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_08026fc8)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_0800d8bc(local_54);
  FUN_08020b84(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x0801565c : FUN_0801565c */

void FUN_0801565c(int param_1,int param_2)

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
  FUN_0800d8bc(local_54);
  FUN_08020b84(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x080156a8 : FUN_080156a8 */

void FUN_080156a8(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08015444();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200039cc)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08015444();
  }
  return;
}



/* ENTRY 0x080156d8 : FUN_080156d8 */

void FUN_080156d8(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_0801549c();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200039d6)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_0801549c();
  }
  return;
}



/* ENTRY 0x08015708 : FUN_08015708 */

void FUN_08015708(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_08026fd4 + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026fcc + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_08026fc8)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026fcc + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_08026fc8)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_08026fc8)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_0800d8bc(local_58);
  FUN_08020b84(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x080157ac : FUN_080157ac */

int FUN_080157ac(int param_1)

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



/* ENTRY 0x08015948 : FUN_08015948 */

uint FUN_08015948(void)

{
  uint uVar1;
  
  uVar1 = FUN_08015adc();
  return uVar1 & 1;
}



/* ENTRY 0x08015954 : FUN_08015954 */

void FUN_08015954(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_08015b54();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f390(0xd8);
    FUN_0800f390(param_2);
    FUN_0800f390(0);
    FUN_0800f390(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801599c : FUN_0801599c */

void FUN_0801599c(int param_1)

{
  if (param_1 == 0) {
    FUN_08015b54();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f390(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x080159c8 : FUN_080159c8 */

void FUN_080159c8(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(8,1);
  local_8 = 0x10038000;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  FUN_0800bafa(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_0800b9bc(&DAT_40011000,&local_8);
  FUN_0800bafa(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0800f300();
  FUN_0800f3e4(0);
  DAT_200009b6 = FUN_08015a94();
  return;
}



/* ENTRY 0x08015a44 : FUN_08015a44 */

void FUN_08015a44(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f390(3);
  FUN_0800f390((param_2 & 0xffffff) >> 0x10);
  FUN_0800f390((param_2 & 0xffff) >> 8);
  FUN_0800f390(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f390(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015a94 : FUN_08015a94 */

uint FUN_08015a94(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f390(0x90);
  FUN_0800f390(0);
  FUN_0800f390(0);
  FUN_0800f390(0);
  iVar1 = FUN_0800f390(0xff);
  uVar2 = FUN_0800f390(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x08015adc : FUN_08015adc */

undefined4 FUN_08015adc(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0800f390(5);
  uVar1 = FUN_0800f390(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x08015b08 : FUN_08015b08 */

undefined4 FUN_08015b08(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0800f390(3);
  FUN_0800f390((param_1 & 0xffffff) >> 0x10);
  FUN_0800f390((param_1 & 0xffff) >> 8);
  FUN_0800f390(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f390(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x08015b54 : FUN_08015b54 */

void FUN_08015b54(void)

{
  DAT_422101bc = 0;
  FUN_0800f390(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015b74 : FUN_08015b74 */

void FUN_08015b74(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_08015b54();
  DAT_422101bc = 0;
  FUN_0800f390(2);
  FUN_0800f390((param_2 & 0xffffff) >> 0x10);
  FUN_0800f390((param_2 & 0xffff) >> 8);
  FUN_0800f390(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0800f390(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015bc4 : FUN_08015bc4 */

int FUN_08015bc4(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_08015b74(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x08015be4 : FUN_08015be4 */

void FUN_08015be4(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_080234ec(1);
    DAT_200006d2 = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031f4 == 1) {
      FUN_080234ec(3);
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
    FUN_080234ec(1);
    DAT_200006d3 = 1;
    break;
  case 0x24:
    if (DAT_200031f4 == 1) {
      FUN_080234ec(3);
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
      FUN_080234ec(3);
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
      FUN_080234ec(4);
    }
  }
  return;
}



/* ENTRY 0x08015cfc : FUN_08015cfc */

void FUN_08015cfc(undefined4 param_1)

{
  FUN_0800baf6(&DAT_40011000,0x10);
  FUN_08011374(param_1);
  FUN_0800bafa(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x08015d1c : FUN_08015d1c */

short FUN_08015d1c(byte *param_1,int param_2)

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



/* ENTRY 0x08015d38 : FUN_08015d38 */

void FUN_08015d38(byte *param_1,int param_2)

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



/* ENTRY 0x08015d7c : FUN_08015d7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015d7c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800ab80();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800af9c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0d0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3f8(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800af9c((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0d0((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3f8(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800ab80();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b3a8(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_0800b3a8(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800ab80();
    }
  }
  else {
    iVar1 = FUN_0800ab80();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x08015f74 : FUN_08015f74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015f74(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800abbc();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803e800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b000(&local_2c);
      if (iVar1 != 1) {
        if (DAT_2000013c < &DAT_0803e800) {
          for (DAT_2000013c = (short *)&DAT_0803e804;
              (DAT_2000013c < (short *)0x803efeb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b29c(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b478();
        FUN_0800b39c(0x35);
      }
      iVar1 = FUN_0800b3f8(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b000(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_2000013c) {
          for (DAT_2000013c = (short *)&DAT_0803e004;
              (DAT_2000013c < (short *)0x803e7eb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b29c(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b478();
        FUN_0800b39c(0x35);
      }
      iVar1 = FUN_0800b3f8(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800abbc();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b3a8(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_0800b3a8(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800abbc();
    }
  }
  else {
    iVar1 = FUN_0800abbc();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x080161ac : FUN_080161ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_080161ac(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800abf8();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803f800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b068(&local_2c);
      if (iVar1 != 1) {
        if (DAT_20000140 < &DAT_0803f800) {
          for (DAT_20000140 = (short *)&DAT_0803f804;
              (DAT_20000140 < (short *)0x803ffeb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b2e4(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b478();
        FUN_0800b39c(0x35);
      }
      iVar1 = FUN_0800b3f8(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b068(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000140) {
          for (DAT_20000140 = (short *)&DAT_0803f004;
              (DAT_20000140 < (short *)0x803f7eb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b2e4(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b478();
        FUN_0800b39c(0x35);
      }
      iVar1 = FUN_0800b3f8(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a8(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b3a8(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800abf8();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800b3a8(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_0800b3a8(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f8(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800abf8();
    }
  }
  else {
    iVar1 = FUN_0800abf8();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x080163e4 : FUN_080163e4 */

void FUN_080163e4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_08015a44(&DAT_200060a0,
                 (((uint)(ushort)DAT_20006061 - (uint)DAT_2000609c) - 1 & 0x7fff) * 0x40,0x40);
    FUN_0800f82c(0xf9,0x80,&DAT_200060a4);
    FUN_0800f82c(0xf9,0x81,&DAT_200060b2);
    FUN_0800f82c(0xf9,0x82,&DAT_200060c0);
  }
  else {
    uVar1 = (uint)DAT_2000609e;
    DAT_2000609e = DAT_2000609e + 1;
    FUN_08015a44(&DAT_200060a0,((((ushort)DAT_20006097 - uVar1) - 1 & 0x7fff) + param_1) * 0x40,0x40
                );
    FUN_0800f82c(0xf9,0x70,&DAT_200060a4);
    FUN_0800f82c(0xf9,0x71,&DAT_200060b2);
    FUN_0800f82c(0xf9,0x72,&DAT_200060c0);
  }
  return;
}



/* ENTRY 0x08016490 : FUN_08016490 */

/* WARNING: Removing unreachable block (ram,0x080164f8) */
/* WARNING: Removing unreachable block (ram,0x080164ee) */
/* WARNING: Removing unreachable block (ram,0x080164f4) */
/* WARNING: Removing unreachable block (ram,0x080164da) */

undefined4 FUN_08016490(void)

{
  return 1;
}



/* ENTRY 0x08016520 : FUN_08016520 */

undefined4 FUN_08016520(int param_1)

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



/* ENTRY 0x0801658c : FUN_0801658c */

void FUN_0801658c(int param_1)

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
    FUN_08015164(param_1);
    break;
  default:
    FUN_0801bbe0(param_1);
  }
  return;
}



/* ENTRY 0x080165c8 : FUN_080165c8 */

void FUN_080165c8(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fc10();
    balance_control_candidate();
  }
  return;
}



/* ENTRY 0x080165e0 : FUN_080165e0 */

void FUN_080165e0(void)

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
LAB_08016892:
    if (DAT_200002d8 != '\x01') {
      if (DAT_20000228 < 100) {
        DAT_20000228 = DAT_20000228 + 1;
      }
      else {
        DAT_200032b4 = DAT_200032b4 | 2;
      }
      goto LAB_080168e4;
    }
  }
  else {
    iVar1 = (int)DAT_2000031c;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_08016892;
  }
  if (DAT_20000228 < 0xb) {
    DAT_200032b4 = DAT_200032b4 & 0xfffd;
  }
  else {
    DAT_20000228 = DAT_20000228 + -1;
  }
LAB_080168e4:
  if ((((DAT_200032b4 & 6) == 0) || (((byte)DAT_200032b6 & 0x10) == 0)) || (DAT_200032c0 != '\0')) {
    DAT_2000022a = 0;
  }
  else if (DAT_2000022a < 0x4b0) {
    DAT_2000022a = DAT_2000022a + 1;
  }
  else {
    FUN_08020a30();
    DAT_2000022a = 0;
  }
  return;
}



/* ENTRY 0x0801696c : FUN_0801696c */

void FUN_0801696c(void)

{
  return;
}



/* ENTRY 0x08016970 : FUN_08016970 */

void FUN_08016970(void)

{
  uint uVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000078 = FUN_0800dc5c(0);
  do {
    FUN_0801c168();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_0801bbc8();
    }
    FUN_0801ec20();
    FUN_0800dcb0(DAT_20000078,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x080169bc : FUN_080169bc */

void FUN_080169bc(undefined1 param_1,undefined1 param_2)

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
  uVar1 = FUN_08015d38(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0800f8e4(&local_24);
  return;
}



/* ENTRY 0x08016a20 : FUN_08016a20 */

undefined4 FUN_08016a20(int param_1,int param_2)

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
  uVar1 = FUN_08015d38(local_22c + 2,0x10);
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
        FUN_08017760(local_21e,DAT_200009ca);
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
      if (((local_21b != 0) && (local_21b == 1)) && (iVar4 = FUN_08016f2c(), iVar4 == 1)) {
        FUN_08018f84(0);
        FUN_08018f84(1);
      }
    }
    else if (local_21b == 0x30) {
      DAT_200009ca = CONCAT11(local_22c[2],local_22c[3]);
      DAT_200009c8 = local_21e;
      DAT_200009ce = 0;
      local_21c = 0x7a;
      if (local_21e < 0x16a9) {
        FUN_08017760(local_21e,DAT_200009ca);
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
             (uVar5 = FUN_08015d38(auStack_218,uVar2 * 0xc),
             CONCAT11(local_22c[2],local_22c[3]) == uVar5)) {
            uVar5 = (uint)DAT_200009ce;
            FUN_080177b8(DAT_200009ce,auStack_218,uVar2);
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
          uVar2 = FUN_08015d38(0x8029008,(uint)DAT_200009c8 * 0xc);
          DAT_200009cc = FUN_08015d1c(0x8029008,(uint)DAT_200009c8 * 0xc);
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
              FUN_08018f84(0);
              FUN_08018f84(1);
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
      uVar1 = FUN_08015d38(local_22c + 2,0x10);
      local_21a = (char)((ushort)uVar1 >> 8);
      local_219 = (char)uVar1;
      uVar3 = FUN_0800f644(local_22c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08016de8 : FUN_08016de8 */

void FUN_08016de8(void)

{
  return;
}



/* ENTRY 0x08016dec : FUN_08016dec */

undefined4 FUN_08016dec(int param_1)

{
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 0xb0;
  (&DAT_20004bb8)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb9)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x08016e34 : FUN_08016e34 */

undefined4 FUN_08016e34(int param_1)

{
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 0xbb;
  (&DAT_20004bb8)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb9)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x08016e7c : FUN_08016e7c */

undefined4 FUN_08016e7c(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801ef80(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801ef80(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x08016f2c : FUN_08016f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016f2c(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009c8 = _DAT_08029000;
  DAT_200009ca = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_08015d38(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009cc = FUN_08015d1c(0x8029008,(uint)DAT_200009c8 * 0xc);
    if (DAT_200009ca == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x08016f98 : FUN_08016f98 */

void FUN_08016f98(byte param_1,undefined1 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015d38(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  return;
}



/* ENTRY 0x08016ff8 : FUN_08016ff8 */

void FUN_08016ff8(int param_1)

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
  uVar2 = FUN_08015d38(local_2c + 2,0x10);
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
    if (((bVar1) && ((&DAT_20004d5f)[uVar3 * 0x1c0] != '\0')) &&
       ((&DAT_20004d46)[uVar3 * 0x1c0] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20004c8d)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
      }
      (&DAT_20004ca5)[uVar3 * 0x1c0] = (char)uVar5;
      (&DAT_20004d46)[uVar3 * 0x1c0] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x0801712c : FUN_0801712c */

void FUN_0801712c(byte param_1,int param_2,int param_3)

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
    uVar1 = FUN_08015d38(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800f950(&local_28);
  }
  return;
}



/* ENTRY 0x08017198 : FUN_08017198 */

undefined4 FUN_08017198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] = (&DAT_080278c0)[uVar1];
  }
  local_14 = param_4;
  FUN_0800bf10(param_2,&DAT_20004bbc + param_1 * 0x1c0);
  (&DAT_20004bc1)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004bc0)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004bbf)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004bbe)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0800bf10((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_20004bc2)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004bc3)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0800bf10(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_20004bc4)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004bc5)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_20004bc6)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x0801729c : FUN_0801729c */

undefined4 FUN_0801729c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] = (&DAT_080278c0)[uVar1];
  }
  local_1c = param_4;
  FUN_0800bf10(param_2,&DAT_20004bb8 + param_1 * 0x1c0);
  FUN_0800bf10(param_3,&DAT_20004bbc + param_1 * 0x1c0);
  (&DAT_20004bbe)[param_1 * 0x1c0] = 0x45;
  (&DAT_20004bc0)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004bbf)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004bc1)[param_1 * 0x1c0] = 0x32;
  FUN_0800bf10(param_4,&local_1c);
  (&DAT_20004bc2)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004bc3)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0800bf10((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_20004bc4)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004bc5)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0800bf10(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_20004bc6)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004bc7)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_20004bc8)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x080173e8 : FUN_080173e8 */

undefined4
FUN_080173e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_080202a0(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004bb5)[uVar2 + param_1 * 0x1c0] = (&DAT_080278c0)[uVar2];
  }
  FUN_0800bf10(param_2,&DAT_20004bb8 + param_1 * 0x1c0);
  FUN_0800bf10(param_3,&DAT_20004bbc + param_1 * 0x1c0);
  FUN_0800bf10((int)uVar1 >> 8,&local_24);
  (&DAT_20004bbe)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bbf)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf10(uVar1 & 0xff,&local_24);
  (&DAT_20004bc0)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bc1)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf10(param_4,&local_24);
  (&DAT_20004bc2)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bc3)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf10(param_5,&local_24);
  (&DAT_20004bc4)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bc5)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0800bf10((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_20004bc6)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bc7)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf10(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_20004bc8)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004bc9)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_20004bca)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x0801758c : FUN_0801758c */

int FUN_0801758c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_080202a0((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004bb5)[uVar2 + param_1 * 0x1c0] = (&DAT_080278c0)[uVar2];
  }
  FUN_0800bf10(param_2,&DAT_20004bb8 + param_1 * 0x1c0);
  FUN_0800bf10(param_3,&DAT_20004bbc + param_1 * 0x1c0);
  FUN_0800bf10((int)uVar1 >> 8,&local_28);
  (&DAT_20004bbe)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_20004bbf)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0800bf10(uVar1 & 0xff,&local_28);
  (&DAT_20004bc0)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_20004bc1)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004bb5)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0800bf10(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_20004bc2)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_20004bc3)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0800bf10((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_20004bc2)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004bc3)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0800bf10(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_20004bc4)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004bc5)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_20004bc6)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x08017760 : FUN_08017760 */

void FUN_08017760(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0800b478();
  FUN_0800b39c(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009d1 = FUN_0800b3a8(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_0800b39c(0x34);
  DAT_200009d1 = FUN_0800b3f8(&DAT_08029000,param_1);
  DAT_200009d1 = FUN_0800b3f8(&DAT_08029004,param_2);
  FUN_0800b3e8();
  return;
}



/* ENTRY 0x080177b8 : FUN_080177b8 */

void FUN_080177b8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0800b478();
  FUN_0800b39c(0x34);
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
    for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
      DAT_200009d1 = FUN_0800b430((param_1 + uVar2) * 0xc + 0x8029008 + uVar1 * 4,
                                  *(undefined4 *)(param_2 + (uVar1 + (uVar2 * 3 & 0x3fffffff)) * 4))
      ;
    }
  }
  FUN_0800b39c(0x34);
  FUN_0800b3e8();
  return;
}



/* ENTRY 0x0801781c : FUN_0801781c */

uint FUN_0801781c(void)

{
  uint uVar1;
  
  if ((DAT_20004ba6 == '\0') && (DAT_20004d66 == '\0')) {
    uVar1 = ((uint)DAT_20004d02 * 0x32) / (uint)DAT_20004d06 +
            ((uint)DAT_20004ec2 * 0x32) / (uint)DAT_20004ec6 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* ENTRY 0x0801786c : FUN_0801786c */

uint FUN_0801786c(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_20004ba6 == '\0') && (DAT_20004d66 == '\0')) {
    uVar1 = ((uint)DAT_20004d02 * 100) / (uint)DAT_20004d06;
    uVar2 = ((uint)DAT_20004ec2 * 100) / (uint)DAT_20004ec6;
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



/* ENTRY 0x080178cc : FUN_080178cc */

void FUN_080178cc(void)

{
  DAT_20004ba5 = 0;
  DAT_20004d65 = 0;
  FUN_08018618();
  FUN_08011b28(0x2580);
  FUN_08011cc8(0x2580);
  return;
}



/* ENTRY 0x080178f8 : FUN_080178f8 */

void FUN_080178f8(undefined4 param_1)

{
  FUN_0801729c(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x0801790a : FUN_0801790a */

void FUN_0801790a(byte param_1,undefined1 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015d38(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  return;
}



/* ENTRY 0x0801796c : FUN_0801796c */

void FUN_0801796c(int param_1)

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
  uVar1 = FUN_08015d38(local_2c + 2,0x10);
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
            goto code_r0x08017a6c;
          }
          if (local_1b == 0x35) {
            uVar4 = 1;
            cVar5 = '\x01';
            goto code_r0x08017a6c;
          }
          if (local_1b != 0xa1) goto code_r0x08017a6c;
        }
        else {
          if (local_1b == 0xb2) goto LAB_08017a24;
          if (local_1b != 0xb3) {
            if (local_1b != 0xb7) goto code_r0x08017a6c;
            goto LAB_08017a3c;
          }
        }
        uVar4 = 2;
        cVar5 = '\x01';
        goto code_r0x08017a6c;
      }
    }
    else if (local_1b != 0xbc) {
      if (local_1b < 0xbd) {
        if (local_1b != 0xb9) {
          if (local_1b == 0xba) goto LAB_08017a32;
          if (local_1b != 0xbb) goto code_r0x08017a6c;
        }
      }
      else {
        if (local_1b == 0xbe) {
LAB_08017a3c:
          uVar4 = 1;
          cVar5 = '\x01';
          goto code_r0x08017a6c;
        }
        if (local_1b != 0xbf) {
          if ((local_1b == 0xff) && (uVar4 = 1, DAT_20003185 == '\x01')) {
            cVar5 = DAT_20003185;
          }
          goto code_r0x08017a6c;
        }
      }
LAB_08017a24:
      uVar4 = 6;
      cVar5 = '\x01';
      goto code_r0x08017a6c;
    }
  }
LAB_08017a32:
  uVar4 = 0;
  cVar5 = '\x01';
code_r0x08017a6c:
  if (((cVar5 != '\0') && ((&DAT_20004d5f)[uVar2 * 0x1c0] != '\0')) &&
     ((&DAT_20004d46)[uVar2 * 0x1c0] == '\0')) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_20004c8d)[uVar3 + uVar2 * 0x1c0] = local_2c[uVar3 + 2];
    }
    (&DAT_20004ca5)[uVar2 * 0x1c0] = (char)uVar4;
    (&DAT_20004d46)[uVar2 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x08017adc : FUN_08017adc */

void FUN_08017adc(byte param_1,int param_2,char *param_3)

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
    uVar1 = FUN_08015d38(acStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800f950(&local_28);
    return;
  }
  if (param_2 < 0xb9) {
    if (param_2 == 0x35) {
      for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      uVar1 = FUN_08015d38(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f950(&local_28);
      return;
    }
    if (param_2 == 0xa1) {
      for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xd] = 1;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015d38(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f950(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      acStack_26[0xd] = 2;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015d38(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f950(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      acStack_26[0xd] = 3;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015d38(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f950(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if (((param_2 == 0xba) || (param_2 == 0xbc)) || (bVar3 = false, param_2 == 0xbe))
  goto LAB_08017c16;
  if (!bVar3) {
    return;
  }
LAB_08017c16:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    acStack_26[uVar2] = param_3[uVar2];
  }
  acStack_26[0xe] = (param_1 & 1) - 0x1d;
  uVar1 = FUN_08015d38(acStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  return;
}



/* ENTRY 0x08017cec : FUN_08017cec */

void FUN_08017cec(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009d2) {
  case '\0':
    local_10 = (int)DAT_20004cb4;
    local_14 = (uint)DAT_20004d0a;
    local_8 = (uint)DAT_20004cfe;
    local_c = (uint)DAT_20004d00;
    FUN_0800f6b0(0xf1,0,local_c,local_8,(int)DAT_20004d02,(int)DAT_20004d06,(int)DAT_20004d08);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004cf6;
    local_14 = (uint)DAT_20004cf4;
    local_8 = (uint)DAT_20004cec;
    local_c = (uint)DAT_20004cea;
    FUN_0800f6b0(0xf1,1,local_c,local_8,(int)DAT_20004cee,(int)DAT_20004cf0,(int)DAT_20004cf2);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004cb4;
    local_14 = (uint)DAT_20004cb2;
    local_8 = (uint)DAT_20004caa;
    local_c = (uint)DAT_20004ca8;
    FUN_0800f6b0(0xf1,2,local_c,local_8,(int)DAT_20004cac,(int)DAT_20004cae,(int)DAT_20004cb0);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004cc2;
    local_14 = (uint)DAT_20004cc0;
    local_8 = (uint)DAT_20004cb8;
    local_c = (uint)DAT_20004cb6;
    FUN_0800f6b0(0xf1,3,local_c,local_8,(int)DAT_20004cba,(int)DAT_20004cbc,(int)DAT_20004cbe);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004cd0;
    local_14 = (uint)DAT_20004cce;
    local_8 = (uint)DAT_20004cc6;
    local_c = (uint)DAT_20004cc4;
    FUN_0800f6b0(0xf1,4,local_c,local_8,(int)DAT_20004cc8,(int)DAT_20004cca,(int)DAT_20004ccc);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_20004cde;
    local_14 = (uint)DAT_20004cdc;
    local_8 = (uint)DAT_20004cd4;
    local_c = (uint)DAT_20004cd2;
    FUN_0800f6b0(0xf1,5,local_c,local_8,(int)DAT_20004cd6,(int)DAT_20004cd8,(int)DAT_20004cda);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004ce2;
    local_c = (uint)DAT_20004ce0;
    FUN_0800f6b0(0xf1,6,local_c,local_8,0,0,(int)DAT_20004cf8);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004e74;
    local_14 = (uint)DAT_20004eca;
    local_8 = (uint)DAT_20004ebe;
    local_c = (uint)DAT_20004ec0;
    FUN_0800f6b0(0xf2,0,local_c,local_8,(int)DAT_20004ec2,(int)DAT_20004ec6,(int)DAT_20004ec8);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004eb6;
    local_14 = (uint)DAT_20004eb4;
    local_8 = (uint)DAT_20004eac;
    local_c = (uint)DAT_20004eaa;
    FUN_0800f6b0(0xf2,1,local_c,local_8,(int)DAT_20004eae,(int)DAT_20004eb0,(int)DAT_20004eb2);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004e74;
    local_14 = (uint)DAT_20004e72;
    local_8 = (uint)DAT_20004e6a;
    local_c = (uint)DAT_20004e68;
    FUN_0800f6b0(0xf2,2,local_c,local_8,(int)DAT_20004e6c,(int)DAT_20004e6e,(int)DAT_20004e70);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004e82;
    local_14 = (uint)DAT_20004e80;
    local_8 = (uint)DAT_20004e78;
    local_c = (uint)DAT_20004e76;
    FUN_0800f6b0(0xf2,3,local_c,local_8,(int)DAT_20004e7a,(int)DAT_20004e7c,(int)DAT_20004e7e);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004e90;
    local_14 = (uint)DAT_20004e8e;
    local_8 = (uint)DAT_20004e86;
    local_c = (uint)DAT_20004e84;
    FUN_0800f6b0(0xf2,4,local_c,local_8,(int)DAT_20004e88,(int)DAT_20004e8a,(int)DAT_20004e8c);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004e9e;
    local_14 = (uint)DAT_20004e9c;
    local_8 = (uint)DAT_20004e94;
    local_c = (uint)DAT_20004e92;
    FUN_0800f6b0(0xf2,5,local_c,local_8,(int)DAT_20004e96,(int)DAT_20004e98,(int)DAT_20004e9a);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004ea2;
    local_c = (uint)DAT_20004ea0;
    FUN_0800f6b0(0xf2,6,local_c,local_8,0,0,(int)DAT_20004eb8);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x0e':
    FUN_0800f82c(0xf3,0,&DAT_20004d0e);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x0f':
    FUN_0800f82c(0xf3,1,&DAT_20004d1c);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_20004d2b,DAT_20004d2a);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004d38,DAT_20004d37);
    local_10._0_3_ = CONCAT12(DAT_20004d39,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d3a,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004d3b;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004d3e,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004d3e >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004d40);
    FUN_0800f82c(0xf3,2,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_20004d2d,DAT_20004d2c);
    local_14._0_3_ = CONCAT12(DAT_20004d2e,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004d2f,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004d31,DAT_20004d30);
    local_10._0_3_ = CONCAT12(DAT_20004d32,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d33,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004d36,CONCAT11(DAT_20004d34,DAT_20004d35)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004d45,DAT_20004d44);
    FUN_0800f82c(0xf3,3,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x12':
    FUN_0800f82c(0xf4,0,&DAT_20004ece);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x13':
    FUN_0800f82c(0xf4,1,&DAT_20004edc);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004eeb,DAT_20004eea);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004ef8,DAT_20004ef7);
    local_10._0_3_ = CONCAT12(DAT_20004ef9,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004efa,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004efb;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004efe,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004efe >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004f00);
    FUN_0800f82c(0xf4,2,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004eed,DAT_20004eec);
    local_14._0_3_ = CONCAT12(DAT_20004eee,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004eef,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004ef1,DAT_20004ef0);
    local_10._0_3_ = CONCAT12(DAT_20004ef2,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004ef3,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004ef6,CONCAT11(DAT_20004ef4,DAT_20004ef5)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004f05,DAT_20004f04);
    FUN_0800f82c(0xf4,3,&local_14);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004bac;
    local_c = (uint)DAT_20004ba6;
    FUN_0800f6b0(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009d2 = DAT_200009d2 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004d6c;
    local_c = (uint)DAT_20004d66;
    FUN_0800f6b0(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009d2 = '\0';
  }
  return;
}



/* ENTRY 0x08018578 : FUN_08018578 */

void FUN_08018578(int param_1,int param_2,int param_3)

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
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x200060e2) = 0;
  }
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_200060e1)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_200060e0)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_08015d38(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  return;
}



/* ENTRY 0x08018618 : FUN_08018618 */

void FUN_08018618(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200060e0)[uVar1 * 0x11] = (&DAT_080278e6)[uVar1];
    (&DAT_200060e1)[uVar1 * 0x11] = (&DAT_080278c7)[uVar1];
    (&DAT_200061f0)[uVar1 * 0x11] = (&DAT_080278e6)[uVar1];
    (&DAT_200061f1)[uVar1 * 0x11] = (&DAT_080278c7)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006300)[uVar1 * 0x11] = (&DAT_080278f6)[uVar1];
    (&DAT_20006301)[uVar1 * 0x11] = (&DAT_080278d7)[uVar1];
    (&DAT_200063ff)[uVar1 * 0x11] = (&DAT_080278f6)[uVar1];
    (&DAT_20006400)[uVar1 * 0x11] = (&DAT_080278d7)[uVar1];
  }
  return;
}



/* ENTRY 0x080186b8 : FUN_080186b8 */

void FUN_080186b8(int param_1)

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
  uVar1 = FUN_08015d38(local_30 + 2,0x10);
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
LAB_0801883c:
    uVar4 = uVar4 + 4;
LAB_08018854:
    uVar4 = uVar4 + 1 & 0xff;
LAB_0801885a:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08018860:
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
LAB_08018952:
        uVar4 = uVar4 + 1 & 0xff;
LAB_08018958:
        uVar4 = uVar4 + 1 & 0xff;
LAB_0801895e:
        if ((&DAT_20004d5f)[uVar5 * 0x1c0] == '\0') {
          return;
        }
        if ((&DAT_20004d46)[uVar5 * 0x1c0] != '\0') {
          return;
        }
        (&DAT_20004ca5)[uVar5 * 0x1c0] = 0;
        (&DAT_20004d46)[uVar5 * 0x1c0] = local_1f;
        (&DAT_20006302)[uVar5 * 0xff + uVar4 * 0x11] = 1;
        return;
      default:
switchD_0801875c_default:
        if (bVar7) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0801874a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0801874e + (uint)(byte)(&UNK_0801874e)[uVar3] * 2))();
        return;
      }
      goto LAB_0801883c;
    }
    if (uVar2 == 0xd0) goto LAB_08018854;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_0801875c_default;
    }
    if (uVar2 == 0xae) goto LAB_08018860;
    if (0xae < uVar2) {
      if (uVar2 == 0xaf) goto LAB_08018958;
      if (uVar2 != 0xb5) {
        bVar7 = false;
        if (uVar2 == 0xb6) goto LAB_08018952;
        goto LAB_08018732;
      }
      goto LAB_0801885a;
    }
    if (uVar2 == 1) {
      uVar6 = 1;
      uVar2 = 0;
      do {
        if (5 < uVar2) {
code_r0x08018796:
          DAT_20004d5f = uVar6;
          DAT_20004f1f = uVar6;
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
          uVar1 = FUN_08015d38(&local_42,0x10);
          local_32 = (undefined1)((ushort)uVar1 >> 8);
          local_31 = (undefined1)uVar1;
          FUN_0800f8e4(&local_44);
          return;
        }
        if (local_30[uVar2 + 2] != (&DAT_080278ba)[uVar2]) {
          uVar6 = 0;
          goto code_r0x08018796;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while( true );
    }
    if (uVar2 == 0xa0) goto LAB_0801895e;
    if (uVar2 == 0xa4) goto LAB_0801886c;
    bVar7 = uVar2 == 0xa8;
LAB_08018732:
    if (!bVar7) {
      return;
    }
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_0801886c:
  if (((&DAT_20004d5f)[uVar5 * 0x1c0] != '\0') && ((&DAT_20004d46)[uVar5 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < (byte)(&DAT_200060e1)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004c8d)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004ca5)[uVar5 * 0x1c0] = (&DAT_200060e1)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_20004d46)[uVar5 * 0x1c0] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x200060e2) = 1;
  }
  return;
}



/* ENTRY 0x080189c8 : FUN_080189c8 */

void FUN_080189c8(int param_1,int param_2,int param_3)

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
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006301)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x20006303 + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006300)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_08015d38(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  (&DAT_20006302)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x08018a74 : FUN_08018a74 */

void FUN_08018a74(int param_1)

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
    FUN_08022a98(uVar3);
  }
  else if (((&DAT_20004d5f)[uVar3 * 0x1c0] != '\0') && ((&DAT_20004d46)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004c8d)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004c9b)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004c9e)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004ca5)[uVar3 * 0x1c0] = 0x14;
    (&DAT_20004d46)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x08018b44 : FUN_08018b44 */

void FUN_08018b44(byte param_1,undefined4 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015d38(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f950(&local_28);
  return;
}



/* ENTRY 0x08018ba8 : FUN_08018ba8 */

void FUN_08018ba8(int param_1)

{
  (&DAT_20004ba8)[param_1 * 0x1c0] = 0x61;
  (&DAT_20004ba9)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 0x61;
  (&DAT_20004bb8)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb9)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_20004d60 = DAT_20004d60 + 1;
    FUN_08009d98(&DAT_20004bb5,5);
  }
  else {
    DAT_20004f20 = DAT_20004f20 + 1;
    FUN_08009df8(&DAT_20004bb5 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08018c50 : FUN_08018c50 */

void FUN_08018c50(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009cc;
  uVar2 = (uint)DAT_200009c8 * 3;
  bVar3 = 0;
  (&DAT_20004ba8)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004ba9)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004bb8)[param_1 * 0x1c0] = 6;
  (&DAT_20004bb9)[param_1 * 0x1c0] = 0;
  (&DAT_20004bba)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_20004bbb)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_20004bbc)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_20004bbd)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_20004bbe)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_20004bb5)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_20004bbf)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_20004d60 = DAT_20004d60 + 1;
    FUN_08009d98(&DAT_20004bb5,0xb);
  }
  else {
    DAT_20004f20 = DAT_20004f20 + 1;
    FUN_08009df8(&DAT_20004bb5 + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x08018d74 : FUN_08018d74 */

void FUN_08018d74(int param_1,int param_2)

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
  (&DAT_20004ba8)[param_1 * 0x1c0] = 99;
  (&DAT_20004ba9)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 99;
  (&DAT_20004bb8)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_20004bb9)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_20004bba)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_20004bbb)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_20004bbc)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_20004bb5)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004bbd)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_20004bbd)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_20004bb9)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20004d60 = DAT_20004d60 + 1;
    FUN_08009d98(&DAT_20004bb5,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004f20 = DAT_20004f20 + 1;
    FUN_08009df8(&DAT_20004bb5 + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x08018edc : FUN_08018edc */

void FUN_08018edc(int param_1)

{
  (&DAT_20004ba8)[param_1 * 0x1c0] = 100;
  (&DAT_20004ba9)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004bb6)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004bb7)[param_1 * 0x1c0] = 100;
  (&DAT_20004bb8)[param_1 * 0x1c0] = 0;
  (&DAT_20004bb9)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_20004d60 = DAT_20004d60 + 1;
    FUN_08009d98(&DAT_20004bb5,5);
  }
  else {
    DAT_20004f20 = DAT_20004f20 + 1;
    FUN_08009df8(&DAT_20004bb5 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08018f84 : FUN_08018f84 */

undefined4 FUN_08018f84(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_20004ba7)[param_1 * 0x1c0] == '\0') && ((&DAT_20004bab)[param_1 * 0x1c0] == '\0')) {
    (&DAT_20004ba7)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08018fc0 : FUN_08018fc0 */

byte FUN_08018fc0(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_20004bad)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_20004baa)[param_1 * 0x1c0] == '\0') && ((&DAT_20004ba9)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_200009c8 * 0xc < (&DAT_20004bb0)[param_1 * 0x70] + 0x80) {
        (&DAT_20004bad)[param_1 * 0x1c0] = 100;
        FUN_08018edc(param_1);
        return 1;
      }
      (&DAT_20004bad)[param_1 * 0x1c0] = 99;
      (&DAT_20004bb0)[param_1 * 0x70] = (&DAT_20004bb0)[param_1 * 0x70] + 0x80;
      FUN_08018d74(param_1,(&DAT_20004bb0)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_20004bad)[param_1 * 0x1c0] = 0x61;
    FUN_08018ba8(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_20004bab)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_20004bad)[param_1 * 0x1c0] = 0x61;
      FUN_08018ba8(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_20004baa)[param_1 * 0x1c0] == '\0') && ((&DAT_20004ba9)[param_1 * 0x1c0] == 'a')) {
        (&DAT_20004bad)[param_1 * 0x1c0] = 0x62;
        FUN_08018c50(param_1);
        return 1;
      }
      (&DAT_20004bad)[param_1 * 0x1c0] = 0x61;
      FUN_08018ba8(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_20004baa)[param_1 * 0x1c0] == '\0') && ((&DAT_20004ba9)[param_1 * 0x1c0] == 'c')) {
        (&DAT_20004bad)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_20004bad)[param_1 * 0x1c0] = 0x61;
      FUN_08018ba8(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_20004baa)[param_1 * 0x1c0] == '\0') && ((&DAT_20004ba9)[param_1 * 0x1c0] == 'b')) {
      (&DAT_20004bad)[param_1 * 0x1c0] = 99;
      (&DAT_20004bb0)[param_1 * 0x70] = 0;
      FUN_08018d74(param_1,(&DAT_20004bb0)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_20004bad)[param_1 * 0x1c0] = 0x61;
      FUN_08018ba8(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x080191d0 : FUN_080191d0 */

undefined4 FUN_080191d0(char *param_1)

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



/* ENTRY 0x0801920e : FUN_0801920e */

void FUN_0801920e(int param_1)

{
  FUN_08022b68(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x08019224 : FUN_08019224 */

void FUN_08019224(void)

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
  iVar4 = FUN_0801f138();
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
        (&DAT_20003d9a)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003d9a)[uVar5] = 0;
      }
    }
    FUN_080229fc(&DAT_20003d9a);
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
              (&DAT_20000825)[uVar5] = (&DAT_080276fa)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000874 = DAT_20000874 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_0802770c)[(uint)DAT_20000874 % 0xc + uVar5];
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
              (&DAT_20000825)[uVar5] = (&DAT_080276fa)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000874 = DAT_20000874 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000825)[uVar5] = (&DAT_0802770c)[(uint)DAT_20000874 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000874 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003d9a)[uVar5] = 0;
    }
    if (DAT_20003185 == '\0') {
      if (DAT_20000874 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003d9b)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003d9a = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003d9b = DAT_20003d9a;
        }
        else if (bVar8) {
          DAT_20003da9 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003daa = DAT_20003da9;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003d9a)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000825)[uVar5] * 0x14) / 0x28);
          (&DAT_20003d9b)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000825)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fec8();
        (&DAT_20003d9a)[extraout_r3 * 3] = 0;
        (&DAT_20003d9b)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003d9c)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_20003210 == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fec8();
        bVar3 = DAT_2000321a;
        bVar2 = DAT_20003218;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_20003218,(ushort)DAT_20003219);
        (&DAT_20003d9a)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003d9b)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003d9c)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003d9a)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003d9a)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003d9b)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003d9b)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003d9c)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003d9c)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_20003210 == 1) {
      FUN_0802025c(&local_28,(ushort)DAT_200006b4);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fec8();
        (&DAT_20003d9a)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003d9b)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003d9c)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_0802025c(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006b4 * -10 & 0xffff);
        (&DAT_20003d9a)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003d9b)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003d9c)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_080229fc(&DAT_20003d9a);
  }
  return;
}



/* ENTRY 0x0801980c : FUN_0801980c */

void FUN_0801980c(void)

{
  FUN_0801f990();
  FUN_0800bf64(4,0xad9);
  FUN_0801eba0();
  FUN_08021fd0();
  FUN_0801f0a8();
  FUN_0800c82e();
  return;
}



/* ENTRY 0x0801983c : FUN_0801983c */

void FUN_0801983c(undefined1 param_1)

{
  DAT_20005fa4 = 0x1451090;
  DAT_20005fa8 = FUN_0800f040();
  DAT_20005fac = param_1;
  DAT_20005fb2 = (char)(diag_TotalVol_show / 100);
  DAT_20005fb4 = DAT_20003132;
  DAT_20005fb5 = 0;
  DAT_20005fb3 = DAT_20003131;
  DAT_20005fb1 = DAT_20003130;
  DAT_20005fad = DAT_2000312c;
  DAT_20005fb9 = DAT_20003133;
  DAT_20005fba = (char)(DAT_20003128 / 100);
  DAT_20005fb8 = (char)(DAT_2000311c / 1000);
  DAT_20005fb6 = DAT_20003134;
  DAT_20005fbb = diag_readoutmeter;
  DAT_20005fbf = (short)(diag_currentmeter / 100);
  DAT_20005fc1 = (undefined2)DAT_20003144;
  DAT_20005fc8 = (undefined2)diag_curr_wsp;
  DAT_20005fca = (undefined2)diag_curr_wsn;
  DAT_20005fc4 = (char)(DAT_20003124 / 100);
  DAT_20005fc5 = (char)(DAT_20003120 / 100);
  DAT_20005fc6 = DAT_20003136;
  DAT_20005fc7 = DAT_20003137;
  return;
}



/* ENTRY 0x08019950 : FUN_08019950 */

void FUN_08019950(undefined1 param_1)

{
  DAT_20006096 = param_1;
  return;
}



/* ENTRY 0x0801995c : FUN_0801995c */

undefined4 FUN_0801995c(undefined4 param_1)

{
  FUN_08019ce8(param_1);
  FUN_08008494(&DAT_20005f24,&DAT_20005f64,0x40);
  return 1;
}



/* ENTRY 0x08019980 : FUN_08019980 */

bool FUN_08019980(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08008494(&DAT_20005f24,(uint)DAT_200009d4 * 0x40 + 0x20004f24,0x40);
    }
    (&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20005f24,(uint)DAT_200009d4 * 0x40 + 0x20004f24,0x40);
      bVar1 = true;
    }
    (&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004f2c)[(uint)DAT_200009d4 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20005f24,(uint)DAT_200009d4 * 0x40 + 0x20004f24,0x40);
      bVar1 = true;
    }
    FUN_08019ce8(param_1);
    FUN_08008494((uint)DAT_200009d4 * 0x40 + 0x20004f24,&DAT_20005f64,0x40);
  }
  DAT_200009d4 = DAT_200009d4 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x08019a7c : FUN_08019a7c */

void FUN_08019a7c(void)

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
  
  if (DAT_20006066 == '#') {
    local_1a = (undefined1)DAT_20006041;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20006041 >> 8);
    local_18 = (undefined1)DAT_20006051;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20006051 >> 8);
    local_16 = (undefined1)DAT_20006059;
    local_15 = (undefined1)(DAT_20006059 >> 8);
    local_14 = (undefined1)DAT_20006055;
    local_13 = (undefined1)((uint)DAT_20006055 >> 8);
    local_12 = (undefined1)((uint)DAT_20006055 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20006055 >> 0x18);
    local_10 = (undefined1)DAT_2000605d;
    local_f = (undefined1)((uint)DAT_2000605d >> 8);
    local_e = (undefined1)((uint)DAT_2000605d >> 0x10);
    local_d = (undefined1)((uint)DAT_2000605d >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_08015d38(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800f9bc(0xf9,0x23,&local_1a);
    DAT_20006066 = '\0';
  }
  else if (DAT_20006066 == -0x5d) {
    local_1a = (undefined1)DAT_20006076;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20006076 >> 8);
    local_18 = (undefined1)DAT_20006086;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20006086 >> 8);
    local_16 = (undefined1)DAT_2000608e;
    local_15 = (undefined1)(DAT_2000608e >> 8);
    local_14 = (undefined1)DAT_2000608a;
    local_13 = (undefined1)((uint)DAT_2000608a >> 8);
    local_12 = (undefined1)((uint)DAT_2000608a >> 0x10);
    local_11 = (undefined1)((uint)DAT_2000608a >> 0x18);
    local_10 = (undefined1)DAT_20006092;
    local_f = (undefined1)((uint)DAT_20006092 >> 8);
    local_e = (undefined1)((uint)DAT_20006092 >> 0x10);
    local_d = (undefined1)((uint)DAT_20006092 >> 0x18);
    local_c = 0xf9;
    local_b = 0xa3;
    uVar1 = FUN_08015d38(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800f9bc(0xf9,0xa3,&local_1a);
    DAT_20006066 = '\0';
  }
  else if (DAT_20006066 == 'a') {
    if (DAT_20006059 < DAT_2000609c) {
      FUN_080163e4(0);
      DAT_2000609c = DAT_2000609c - 1;
    }
    else {
      FUN_080163e4(0);
      DAT_20006066 = '\0';
    }
  }
  else if (DAT_20006066 == -0x1f) {
    if (DAT_2000608e < DAT_2000609c) {
      FUN_080163e4(0x10000);
      DAT_2000609c = DAT_2000609c - 1;
    }
    else {
      FUN_080163e4(0x10000);
      DAT_20006066 = '\0';
    }
  }
  return;
}



/* ENTRY 0x08019cdc : FUN_08019cdc */

void FUN_08019cdc(undefined1 param_1)

{
  DAT_20006067 = param_1;
  return;
}



/* ENTRY 0x08019ce8 : FUN_08019ce8 */

void FUN_08019ce8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0801f144();
    DAT_20005f64 = 0x1451090;
    DAT_20005f6c = (undefined1)param_1;
    DAT_20005f68 = FUN_0800f040();
    DAT_20005f6d = diag_cartstep;
    DAT_20005f6e = (undefined1)((uint)uVar1 >> 8);
    DAT_20005f6f = (undefined1)uVar1;
    DAT_20005f71 = diag_allwarnbit;
    DAT_20005f70 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005f76 = (undefined2)diag_TotalVoltage;
    DAT_20005f78 = (undefined2)diag_TotalCurrent;
    DAT_20005f7a = (undefined2)(diag_VehicleSpeed / 100);
    DAT_20005f7c = (undefined2)diag_VectorVol;
    DAT_20005f7e = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0801f138();
    DAT_20005f80 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801f120();
    DAT_20005f82 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801f12c();
    DAT_20005f84 = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005f85 = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005f88 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005f86 = 0x82;
      }
      else {
        DAT_20005f86 = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005f86 = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005f87 = 0x82;
      }
      else {
        DAT_20005f87 = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005f87 = 0x7f;
    }
    DAT_20005f89 = 0;
    if (diag_hall_err < 0x100) {
      DAT_20005f8a = (undefined1)diag_hall_err;
    }
    else {
      DAT_20005f8a = 0xff;
    }
  }
  return;
}



/* ENTRY 0x08019e50 : FUN_08019e50 */

undefined4 FUN_08019e50(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_08015b08((uVar3 + param_3) * 0x40);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08015b08((*param_2 + param_3) * 0x40);
    if (iVar1 == -1) {
      iVar1 = FUN_08015b08((*param_1 + param_3) * 0x40);
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



/* ENTRY 0x08019ebc : FUN_08019ebc */

void FUN_08019ebc(void)

{
  uint uVar1;
  
  DAT_20006033 = 0xff;
  DAT_2000609b = 0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004f2c)[uVar1 * 0x40] = 0xff;
  }
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005fcc)[uVar1] = 0;
    (&DAT_20005fd2)[uVar1] = 0;
  }
  return;
}



/* ENTRY 0x08019f04 : FUN_08019f04 */

void FUN_08019f04(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009dc = DAT_200009dc + 1;
  if ((DAT_20005fe5 != '\0') && (DAT_20005fe5 = FUN_08015948(), DAT_20005fe5 != '\0')) {
    return;
  }
  if (DAT_20005fe4 == 0x24) {
LAB_0801acb0:
    if (DAT_20005feb == 0) {
      DAT_20005fe4 = 0;
    }
    else {
      DAT_20005fe5 = '\x01';
      DAT_20005fe7 = DAT_20005fef << 0x10;
      FUN_08015954(1,DAT_20005fef);
      DAT_20005fef = DAT_20005fef + 1;
      DAT_20005feb = DAT_20005feb + -1;
      DAT_20005fe4 = 0x25;
    }
    return;
  }
  if (0x24 < DAT_20005fe4) {
    if (DAT_20005fe4 == 0x25) {
      DAT_20005fe5 = 1;
      FUN_08015954(0,DAT_20005fef);
      DAT_20005fe4 = 0x24;
      return;
    }
    if (((DAT_20005fe4 != 0xd2) && (DAT_20005fe4 != 0xd3)) && (bVar2 = DAT_20005fe4 == 0xd4, !bVar2)
       ) goto LAB_08019f3a;
    goto LAB_0801acb0;
  }
  if (DAT_20005fe4 == 2) {
    DAT_20005fe5 = 1;
    FUN_08015954(1,DAT_20005fef);
    DAT_20005fe4 = 0;
    return;
  }
  if (2 < DAT_20005fe4) {
    if ((DAT_20005fe4 == 0x22) || (bVar2 = false, DAT_20005fe4 == 0x23)) goto LAB_0801acb0;
LAB_08019f3a:
    if (!bVar2) {
      return;
    }
    DAT_20005fe5 = 1;
    FUN_0801599c();
    DAT_20005fe4 = 0;
    return;
  }
  if (DAT_20005fe4 != 0) {
    bVar2 = DAT_20005fe4 == 1;
    goto LAB_08019f3a;
  }
  if (DAT_20006033 == 0) {
    if (DAT_20006065 == 0x60) {
      DAT_20006066 = 0;
      DAT_20006065 = 0;
    }
    else if (DAT_20006065 == 0x61) {
      if (DAT_2000603d != 0) {
        DAT_20006066 = 0x61;
      }
      DAT_20006065 = 0;
    }
    else if (DAT_20006065 == 0xe0) {
      DAT_20006066 = 0;
      DAT_20006065 = 0;
    }
    else if (DAT_20006065 == 0xe1) {
      if (DAT_20006072 != 0) {
        DAT_20006066 = 0xe1;
      }
      DAT_20006065 = 0;
    }
    if (DAT_20006066 != 0) {
      return;
    }
    if (DAT_20006067 == 0xef) {
      iVar1 = FUN_0801995c(0xef);
      if (iVar1 != 0) {
        DAT_20006033 = 0x30;
      }
      DAT_20006067 = 0;
      DAT_20006068 = 'J';
    }
    else if ((DAT_20006067 & 0xf0) == 0xe0) {
      iVar1 = FUN_08019980(DAT_20006067);
      if (iVar1 != 0) {
        DAT_20006033 = 0x30;
      }
      DAT_20006067 = 0;
      DAT_20006068 = 'J';
    }
    else if (DAT_20006068 == '\0') {
      if (DAT_20006067 == 0xf0) {
        iVar1 = FUN_08019980(0xf0);
        if (iVar1 != 0) {
          DAT_20006033 = 0x30;
        }
        DAT_20006067 = 0;
        DAT_20006069 = 'J';
      }
      else if (DAT_20006069 == '\0') {
        if (DAT_20006067 == 0) {
          if (DAT_20006065 == 0x23) {
            DAT_20006033 = DAT_20006065;
          }
          else if (DAT_20006096 == '\0') {
            if (DAT_20006065 == 0xa3) {
              DAT_20006033 = DAT_20006065;
            }
            else if (DAT_200009d6 == -0x5b) {
              DAT_20006033 = 0x10;
              DAT_200009d6 = '\0';
            }
            else if (DAT_200009d6 == -0x5a) {
              DAT_20006033 = 0x90;
              DAT_200009d6 = '\0';
            }
            else if ((DAT_200009dc % 0x15 == 0x11) && (iVar1 = FUN_08019980(0), iVar1 != 0)) {
              DAT_20006033 = 0x30;
            }
          }
          else {
            FUN_0801983c(DAT_20006096);
            DAT_20006033 = 0xb0;
            DAT_20006096 = '\0';
          }
        }
        else {
          iVar1 = FUN_08019980(DAT_20006067);
          if (iVar1 != 0) {
            DAT_20006033 = 0x30;
          }
          DAT_20006067 = 0;
        }
      }
      else {
        iVar1 = FUN_08019980(0xfe);
        if (iVar1 != 0) {
          DAT_20006033 = 0x30;
        }
        DAT_20006069 = DAT_20006069 + -1;
      }
    }
    else {
      iVar1 = FUN_08019980(0xff);
      if (iVar1 != 0) {
        DAT_20006033 = 0x30;
      }
      DAT_20006068 = DAT_20006068 + -1;
    }
  }
  if (DAT_20006033 == 0x90) {
    DAT_20005fe6 = 0xd2;
    DAT_20006033 = 0x91;
    goto code_r0x0801aac6;
  }
  if (DAT_20006033 < 0x91) {
    if (DAT_20006033 == 0x21) {
LAB_0801a258:
      iVar1 = FUN_08019e50(&DAT_20006035,&DAT_20006039,0);
      if (iVar1 == 1) {
        DAT_20006061 = DAT_20006035;
        DAT_20006033 = 0x23;
      }
      else if (iVar1 == 2) {
        DAT_20006035 = 0x4000;
        DAT_20006039 = 0x7fff;
        DAT_20006033 = 0x22;
      }
      goto code_r0x0801aac6;
    }
    if (DAT_20006033 < 0x22) {
      if (DAT_20006033 == 0x11) {
        DAT_20005fef = 0x20;
        DAT_20005fe6 = 2;
        DAT_20006033 = 0x12;
        goto code_r0x0801aac6;
      }
      if (DAT_20006033 < 0x12) {
        if (DAT_20006033 == 0) goto code_r0x0801aac6;
        bVar2 = DAT_20006033 == 0x10;
      }
      else {
        if (DAT_20006033 == 0x12) {
          DAT_20005ff3 = 0x1451090;
          DAT_20005feb = 4;
          DAT_20005fef = 0;
          DAT_20005fe7 = 0x200000;
          DAT_20005fe6 = 3;
          DAT_20006061 = 0;
          DAT_20006033 = 0x20;
          goto code_r0x0801aac6;
        }
        bVar2 = false;
        if (DAT_20006033 == 0x20) {
          DAT_20006035 = 0;
          DAT_20006039 = 0x3fff;
          DAT_20006033 = 0x21;
          goto LAB_0801a258;
        }
      }
    }
    else {
      if (DAT_20006033 == 0x30) {
        if (DAT_20006061 == 0) {
          iVar1 = FUN_08015b08(0);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005ff3,&DAT_20005f24,0x40);
            DAT_20005feb = 0x40;
            DAT_20005fef = 0;
            DAT_20005fe7 = DAT_20006061 << 6;
            DAT_20005fe6 = 3;
            DAT_20006061 = DAT_20006061 + 1 & 0x7fff;
            DAT_20006033 = 0;
          }
          else {
            DAT_20005fe6 = 0x23;
            DAT_20006033 = 0x31;
          }
        }
        else if (DAT_20006061 == 0x3fff) {
          DAT_20005fe6 = 0x24;
          DAT_20006033 = 0x31;
        }
        else if (DAT_20006061 == 0x4000) {
          iVar1 = FUN_08015b08(0x100000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005ff3,&DAT_20005f24,0x40);
            DAT_20005feb = 0x40;
            DAT_20005fef = 0;
            DAT_20005fe7 = DAT_20006061 << 6;
            DAT_20005fe6 = 3;
            DAT_20006061 = DAT_20006061 + 1 & 0x7fff;
            DAT_20006033 = 0;
          }
          else {
            DAT_20005fe6 = 0x24;
            DAT_20006033 = 0x31;
          }
        }
        else if (DAT_20006061 == 0x7fff) {
          DAT_20005fe6 = 0x23;
          DAT_20006033 = 0x31;
        }
        else {
          FUN_08008494(&DAT_20005ff3,&DAT_20005f24,0x40);
          DAT_20005feb = 0x40;
          DAT_20005fef = 0;
          DAT_20005fe7 = DAT_20006061 << 6;
          DAT_20005fe6 = 3;
          DAT_20006061 = DAT_20006061 + 1 & 0x7fff;
          DAT_20006033 = 0;
        }
        goto code_r0x0801aac6;
      }
      if (DAT_20006033 < 0x31) {
        if (DAT_20006033 == 0x22) {
          iVar1 = FUN_08019e50(&DAT_20006035,&DAT_20006039,0);
          if (iVar1 == 1) {
            DAT_20006061 = DAT_20006035;
            DAT_20006033 = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20006061 = 0;
            DAT_20005fe6 = 0x22;
            DAT_20006033 = 0x23;
          }
          goto code_r0x0801aac6;
        }
        bVar2 = false;
        if (DAT_20006033 == 0x23) {
          DAT_2000603d = 0x3ff8;
          DAT_20006041 = 0x3ff7;
          iVar1 = FUN_08015b08(((DAT_20006061 & 0xffff) - 0x3ff8 & 0x7fff) << 6);
          if ((iVar1 == -1) && (DAT_20006061 <= DAT_20006041)) {
            if (DAT_20006061 == 0) {
              DAT_20006041 = 0;
              DAT_2000603d = 0;
            }
            else {
              DAT_20006041 = DAT_20006061 - 1;
              DAT_2000603d = DAT_20006061;
            }
          }
          if (DAT_2000603d == 0) {
            DAT_20006065 = 0;
            if (DAT_2000609b == '\0') {
              DAT_20006033 = 0xa0;
              DAT_2000609b = '\x01';
            }
            else {
              DAT_20006033 = 0;
            }
          }
          else {
            DAT_20006045 = FUN_08015b08((((DAT_20006061 & 0xffff) - (DAT_20006041 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_20006049 = 0;
            DAT_2000604d = FUN_08015b08(((DAT_20006061 & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
            if (DAT_20006051 == 0) {
              DAT_20006051 = 0xfffe;
            }
            if (DAT_20006041 < DAT_20006051) {
              DAT_20006051 = DAT_20006041;
            }
            DAT_20006055 = FUN_08015b08((((DAT_20006061 & 0xffff) - (DAT_20006051 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            if (DAT_20006051 < DAT_20006059) {
              DAT_20006059 = DAT_20006051;
            }
            DAT_2000605d = FUN_08015b08((((DAT_20006061 & 0xffff) - (DAT_20006059 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_2000609c = (ushort)DAT_20006051;
            DAT_2000609e = 0;
            if (DAT_20006065 == 0x23) {
              DAT_20006066 = DAT_20006065;
            }
            DAT_20006065 = 0;
            if (DAT_2000609b == '\0') {
              DAT_20006033 = 0xa0;
              DAT_2000609b = '\x01';
            }
            else {
              DAT_20006033 = 0;
            }
          }
          goto code_r0x0801aac6;
        }
      }
      else {
        if (DAT_20006033 == 0x31) {
          FUN_08008494(&DAT_20005ff3,&DAT_20005f24,0x40);
          DAT_20005feb = 0x40;
          DAT_20005fef = 0;
          DAT_20005fe7 = DAT_20006061 << 6;
          DAT_20005fe6 = 3;
          DAT_20006061 = DAT_20006061 + 1 & 0x7fff;
          DAT_20006033 = 0;
          goto code_r0x0801aac6;
        }
        bVar2 = false;
        if (DAT_20006033 == 0x60) {
          FUN_08015a44(&DAT_200060a0,(uint)DAT_2000609c << 6,0x40);
          DAT_20006033 = 0;
          goto code_r0x0801aac6;
        }
      }
    }
  }
  else {
    if (DAT_20006033 == 0xa3) {
      DAT_20006072 = 0x3ff8;
      DAT_20006076 = 0x3ff7;
      iVar1 = FUN_08015b08((((DAT_20006097 & 0xffff) - 0x3ff8 & 0x7fff) + 0x10000) * 0x40);
      if ((iVar1 == -1) && (DAT_20006097 <= DAT_20006076)) {
        if (DAT_20006097 == 0) {
          DAT_20006076 = 0;
          DAT_20006072 = 0;
        }
        else {
          DAT_20006076 = DAT_20006097 - 1;
          DAT_20006072 = DAT_20006097;
        }
      }
      if (DAT_20006072 == 0) {
        DAT_20006065 = 0;
        DAT_20006033 = 0;
      }
      else {
        DAT_2000607a = FUN_08015b08(((((DAT_20006097 & 0xffff) - (DAT_20006076 & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_2000607e = 0;
        DAT_20006082 = FUN_08015b08((((DAT_20006097 & 0xffff) - 1 & 0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20006086 == 0) {
          DAT_20006086 = 0xfffe;
        }
        if (DAT_20006076 < DAT_20006086) {
          DAT_20006086 = DAT_20006076;
        }
        DAT_2000608a = FUN_08015b08(((((DAT_20006097 & 0xffff) - (DAT_20006086 & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20006086 < DAT_2000608e) {
          DAT_2000608e = DAT_20006086;
        }
        DAT_20006092 = FUN_08015b08(((((DAT_20006097 & 0xffff) - (DAT_2000608e & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_2000609c = (ushort)DAT_20006086;
        DAT_2000609e = 0;
        if (DAT_20006065 == 0xa3) {
          DAT_20006066 = DAT_20006065;
        }
        DAT_20006065 = 0;
        DAT_20006033 = 0;
      }
      goto code_r0x0801aac6;
    }
    if (DAT_20006033 < 0xa4) {
      if (DAT_20006033 == 0xa0) {
        DAT_2000606a = 0;
        DAT_2000606e = 0x3fff;
        DAT_20006033 = 0xa1;
LAB_0801a6d2:
        iVar1 = FUN_08019e50(&DAT_2000606a,&DAT_2000606e,0x10000);
        if (iVar1 == 1) {
          DAT_20006097 = DAT_2000606a;
          DAT_20006033 = 0xa3;
        }
        else if (iVar1 == 2) {
          DAT_2000606a = 0x4000;
          DAT_2000606e = 0x7fff;
          DAT_20006033 = 0xa2;
        }
        goto code_r0x0801aac6;
      }
      if (DAT_20006033 < 0xa1) {
        if (DAT_20006033 == 0x91) {
          DAT_20005fef = 0x60;
          DAT_20005fe6 = 2;
          DAT_20006033 = 0x92;
          goto code_r0x0801aac6;
        }
        bVar2 = false;
        if (DAT_20006033 == 0x92) {
          DAT_20005ff3 = 0x1451090;
          DAT_20005feb = 4;
          DAT_20005fef = 0x10000;
          DAT_20005fe7 = 0x600000;
          DAT_20005fe6 = 3;
          DAT_20006097 = 0;
          DAT_20006033 = 0xa0;
          goto code_r0x0801aac6;
        }
      }
      else {
        if (DAT_20006033 == 0xa1) goto LAB_0801a6d2;
        bVar2 = false;
        if (DAT_20006033 == 0xa2) {
          iVar1 = FUN_08019e50(&DAT_2000606a,&DAT_2000606e,0x10000);
          if (iVar1 == 1) {
            DAT_20006097 = DAT_2000606a;
            DAT_20006033 = 0xa3;
          }
          else if (iVar1 == 2) {
            DAT_20006097 = 0;
            DAT_20005fe6 = 0xd2;
            DAT_20006033 = 0xa3;
          }
          goto code_r0x0801aac6;
        }
      }
    }
    else {
      if (DAT_20006033 == 0xb0) {
        if (DAT_20006097 == 0) {
          iVar1 = FUN_08015b08(0x400000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005ff3,&DAT_20005fa4,0x40);
            DAT_20005feb = 0x40;
            DAT_20005fef = 0x10000;
            DAT_20005fe7 = (DAT_20006097 + 0x10000) * 0x40;
            DAT_20005fe6 = 3;
            DAT_20006097 = DAT_20006097 + 1 & 0x7fff;
            DAT_20006033 = 0;
          }
          else {
            DAT_20005fe6 = 0xd3;
            DAT_20006033 = 0xb1;
          }
        }
        else if (DAT_20006097 == 0x3fff) {
          DAT_20005fe6 = 0xd4;
          DAT_20006033 = 0xb1;
        }
        else if (DAT_20006097 == 0x4000) {
          iVar1 = FUN_08015b08(0x500000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005ff3,&DAT_20005fa4,0x40);
            DAT_20005feb = 0x40;
            DAT_20005fef = 0x10000;
            DAT_20005fe7 = (DAT_20006097 + 0x10000) * 0x40;
            DAT_20005fe6 = 3;
            DAT_20006097 = DAT_20006097 + 1 & 0x7fff;
            DAT_20006033 = 0;
          }
          else {
            DAT_20005fe6 = 0xd4;
            DAT_20006033 = 0xb1;
          }
        }
        else if (DAT_20006097 == 0x7fff) {
          DAT_20005fe6 = 0xd3;
          DAT_20006033 = 0xb1;
        }
        else {
          FUN_08008494(&DAT_20005ff3,&DAT_20005fa4,0x40);
          DAT_20005feb = 0x40;
          DAT_20005fef = 0x10000;
          DAT_20005fe7 = (DAT_20006097 + 0x10000) * 0x40;
          DAT_20005fe6 = 3;
          DAT_20006097 = DAT_20006097 + 1 & 0x7fff;
          DAT_20006033 = 0;
        }
        goto code_r0x0801aac6;
      }
      if (DAT_20006033 == 0xb1) {
        FUN_08008494(&DAT_20005ff3,&DAT_20005fa4,0x40);
        DAT_20005feb = 0x40;
        DAT_20005fef = 0x10000;
        DAT_20005fe7 = (DAT_20006097 + 0x10000) * 0x40;
        DAT_20005fe6 = 3;
        DAT_20006097 = DAT_20006097 + 1 & 0x7fff;
        DAT_20006033 = 0;
        goto code_r0x0801aac6;
      }
      if (DAT_20006033 == 0xe0) {
        FUN_08015a44(&DAT_200060a0,(DAT_2000609c + 0x10000) * 0x40,0x40);
        DAT_20006033 = 0;
        goto code_r0x0801aac6;
      }
      bVar2 = false;
      if (DAT_20006033 == 0xff) {
        DAT_20006033 = 0x20;
        goto code_r0x0801aac6;
      }
    }
  }
  if (bVar2) {
    DAT_20005fe6 = 0x22;
    DAT_20006033 = 0x11;
  }
code_r0x0801aac6:
  if (DAT_20005fe6 == 0x24) {
    DAT_20005fe5 = '\x01';
    DAT_20005feb = 0x10;
    DAT_20005fef = 0x10;
    DAT_20005fe7 = 0x100000;
    FUN_08015954(0,0x10);
    DAT_20005fe4 = 0x24;
  }
  else if (DAT_20005fe6 < 0x25) {
    if (DAT_20005fe6 == 3) {
      DAT_20005fe5 = '\x01';
      FUN_08015bc4(&DAT_20005ff3,DAT_20005fe7);
      DAT_20005fe4 = 0;
    }
    else if (DAT_20005fe6 < 4) {
      if (DAT_20005fe6 == 1) {
        DAT_20005fe5 = '\x01';
        FUN_0801599c(0);
        DAT_20005fe4 = 1;
      }
      else if (DAT_20005fe6 == 2) {
        DAT_20005fe5 = '\x01';
        FUN_08015954(0,DAT_20005fef);
        DAT_20005fe4 = 2;
      }
    }
    else if (DAT_20005fe6 == 0x22) {
      DAT_20005fe5 = '\x01';
      DAT_20005feb = 0x20;
      DAT_20005fef = 0;
      DAT_20005fe7 = 0;
      FUN_08015954(0,0);
      DAT_20005fe4 = 0x22;
    }
    else if (DAT_20005fe6 == 0x23) {
      DAT_20005fe5 = '\x01';
      DAT_20005feb = 0x10;
      DAT_20005fef = 0;
      DAT_20005fe7 = 0;
      FUN_08015954(0,0);
      DAT_20005fe4 = 0x23;
    }
  }
  else if (DAT_20005fe6 != 0xb3) {
    if (DAT_20005fe6 == 0xd2) {
      DAT_20005fe5 = '\x01';
      DAT_20005feb = 0x20;
      DAT_20005fef = 0x40;
      DAT_20005fe7 = 0x400000;
      FUN_08015954(0,0x40);
      DAT_20005fe4 = 0xd2;
    }
    else if (DAT_20005fe6 == 0xd3) {
      DAT_20005fe5 = '\x01';
      DAT_20005feb = 0x10;
      DAT_20005fef = 0x40;
      DAT_20005fe7 = 0x400000;
      FUN_08015954(0,0x40);
      DAT_20005fe4 = 0xd3;
    }
    else if (DAT_20005fe6 == 0xd4) {
      DAT_20005fe5 = '\x01';
      DAT_20005feb = 0x10;
      DAT_20005fef = 0x50;
      DAT_20005fe7 = 0x500000;
      FUN_08015954(0,0x50);
      DAT_20005fe4 = 0xd4;
    }
  }
  DAT_20005fe6 = 0;
  return;
}



/* ENTRY 0x0801ad24 : FUN_0801ad24 */

void FUN_0801ad24(int param_1)

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
  uVar2 = FUN_08015d38(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x90) {
      if ((char)local_22 == '\x01') {
        FUN_0800f170(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d6 = 0xa6;
      }
    }
    else {
      if (bVar1 < 0x91) {
        if (bVar1 == 0x23) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20006051 = (uint)local_22._2_2_;
            DAT_20006059 = (uint)local_1e;
          }
          DAT_20006065 = 0x23;
          return;
        }
        if (bVar1 < 0x24) {
          if (bVar1 == 1) {
            if ((char)local_22 == '\x01') {
              FUN_0800f170(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                           local_1a);
              return;
            }
            local_22 = CONCAT13((char)((ushort)DAT_20004b9c >> 8),
                                CONCAT12((char)DAT_20004b9c,(short)local_22)) & 0xffffff00;
            local_1e = CONCAT11(DAT_20004b9f,DAT_20004b9e);
            local_1c = DAT_20004b98;
            local_1b = DAT_20004b99;
            local_1a = DAT_20004b9a;
            uVar2 = FUN_08015d38(&local_22,0x10);
            local_12 = (char)((ushort)uVar2 >> 8);
            local_11 = (char)uVar2;
            FUN_0800f644(local_24);
            return;
          }
          bVar4 = bVar1 == 0x10;
        }
        else {
          if (bVar1 == 0x60) {
            DAT_20006065 = 0x60;
            return;
          }
          bVar4 = false;
          if (bVar1 == 0x61) {
            DAT_20006065 = 0x61;
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
          uVar2 = FUN_08015d38(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0800f644(local_24);
          return;
        }
        if (bVar1 == 0xa3) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20006086 = (uint)local_22._2_2_;
            DAT_2000608e = (uint)local_1e;
          }
          DAT_20006065 = 0xa3;
          return;
        }
        if (bVar1 == 0xe0) {
          DAT_20006065 = 0xe0;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xe1) {
          DAT_20006065 = 0xe1;
          return;
        }
      }
      if ((bVar4) && ((char)local_22 == '\x01')) {
        FUN_0800f170(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d6 = 0xa5;
      }
    }
  }
  return;
}



/* ENTRY 0x0801afcc : FUN_0801afcc */

void FUN_0801afcc(uint param_1)

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



/* ENTRY 0x0801b034 : FUN_0801b034 */

void FUN_0801b034(void)

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



/* ENTRY 0x0801b0ac : FUN_0801b0ac */

void FUN_0801b0ac(void)

{
  uint uVar1;
  
  DAT_200002f8 = FUN_0800bc40();
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



/* ENTRY 0x0801b1ec : FUN_0801b1ec */

/* WARNING: Removing unreachable block (ram,0x0801b236) */
/* WARNING: Removing unreachable block (ram,0x0801b280) */

void FUN_0801b1ec(void)

{
  FUN_080230ac();
  DAT_200001a8 = 1;
  return;
}



/* ENTRY 0x0801b29c : FUN_0801b29c */

undefined4 FUN_0801b29c(int param_1)

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



/* ENTRY 0x0801b3c4 : FUN_0801b3c4 */

void FUN_0801b3c4(void)

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
      FUN_0800bafa(&DAT_40011000,2);
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
    goto code_r0x0801b9be;
  case '\x01':
    DAT_20000698 = DAT_20000698 + 1;
    if (DAT_20000698 < 0x14) {
      DAT_422101b0 = 1;
      FUN_0800bafa(&DAT_40011000,2);
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
      FUN_0800baf6(&DAT_40011000,2);
      DAT_2000066c = '\x02';
    }
    goto code_r0x0801b9be;
  case '\x02':
    if ((DAT_20004d39 & 2) == 0) {
      if (DAT_2000066e == '\x01') {
        DAT_20000670 = 0;
        FUN_0800bafa(&DAT_40011000,2);
        DAT_2000066c = '\x14';
      }
      DAT_2000066e = '\0';
    }
    else {
      DAT_2000066e = '\x01';
    }
    if ((DAT_20004ef9 & 2) == 0) {
      if (DAT_2000066f == '\x01') {
        DAT_20000670 = 0;
        FUN_0800bafa(&DAT_40011000,2);
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
        FUN_0800bafa(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x06';
        goto code_r0x0801b9be;
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
        FUN_0800bafa(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x03';
        goto code_r0x0801b9be;
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
        FUN_0800bafa(&DAT_40011000,2);
        DAT_20000673 = 0xfa;
        DAT_20000664 = 0;
        DAT_2000066c = '\x04';
        goto code_r0x0801b9be;
      }
      DAT_20000650 = DAT_20000650 + 1;
    }
    else if (10 < DAT_20000650) {
      DAT_20000650 = DAT_20000650 - 1;
    }
    iVar1 = FUN_0801786c();
    if ((diag_BatState == '\x01') &&
       (((DAT_20000678 < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_20000680 < iVar1 && ((DAT_20000680 < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_20000654) {
        DAT_2000069a = 0;
        DAT_422101b0 = 1;
        FUN_0800bafa(&DAT_40011000,2);
        DAT_20000684 = -6;
        DAT_20000664 = 0;
        DAT_2000066c = '\b';
        goto code_r0x0801b9be;
      }
      DAT_20000654 = DAT_20000654 + 1;
    }
    else if (10 < DAT_20000654) {
      DAT_20000654 = DAT_20000654 - 1;
    }
    if (DAT_20003158 < 0xb) {
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
      FUN_0800bafa(&DAT_40011000,2);
      DAT_20000685 = '\x01';
      DAT_2000066c = '\t';
    }
    if ((DAT_20003159 < 0xb) || (DAT_20000646 < 0x259)) {
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
      FUN_0800bafa(&DAT_40011000,2);
      DAT_20000686 = '\x01';
      DAT_2000066c = '\t';
    }
    goto code_r0x0801b9be;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_0801786c();
    if (((int)diag_TotalVoltage < 0x2db4) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000685 == '\0')))) {
      if (DAT_20000664 < 100) {
        DAT_20000664 = DAT_20000664 + 1;
      }
      else {
        FUN_0800baf6(&DAT_40011000,2);
        DAT_20000673 = 0;
        DAT_20000684 = '\0';
        DAT_20000674 = 0;
        DAT_20000672 = '\0';
        DAT_2000066c = '\x02';
      }
    }
    goto code_r0x0801b9be;
  default:
    goto code_r0x0801b9be;
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
        FUN_0800baf6(&DAT_40011000,2);
        DAT_2000066c = '\x02';
      }
      DAT_2000066d = '\x01';
    }
    if (DAT_20000670 < 2000) {
      DAT_20000670 = DAT_20000670 + 1;
    }
    goto code_r0x0801b9be;
  }
  iVar1 = FUN_0801786c();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_20000646 < 600)) &&
      ((DAT_20000675 < 8 && ((DAT_20000685 == '\0' && (DAT_20000686 == '\0')))))) &&
     (((diag_TotalVoltage < DAT_2000067c && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_20000682 && (iVar1 < 0x65)))))) {
    if (DAT_20000664 < 100) {
      DAT_20000664 = DAT_20000664 + 1;
    }
    else {
      FUN_0800baf6(&DAT_40011000,2);
      DAT_20000673 = 0;
      DAT_20000684 = '\0';
      DAT_20000674 = 0;
      DAT_20000672 = '\0';
      DAT_2000066c = '\x02';
    }
  }
code_r0x0801b9be:
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
    FUN_080234ec(2);
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



/* ENTRY 0x0801bb80 : FUN_0801bb80 */

undefined4 FUN_0801bb80(void)

{
  FUN_0800b478();
  FUN_0800b3a8(&DAT_0803a800);
  FUN_0800b3e8();
  return 0;
}



/* ENTRY 0x0801bb9c : FUN_0801bb9c */

void FUN_0801bb9c(void)

{
  FUN_0800b478();
  FUN_0800b3a8(0x803a000);
  FUN_0800b3e8();
  DAT_200001e0 = 0;
  DAT_200001de = 0;
  return;
}



/* ENTRY 0x0801bbc8 : FUN_0801bbc8 */

void FUN_0801bbc8(void)

{
  FUN_0800bf88();
  FUN_08023600();
  FUN_08008c50();
  FUN_0802468c();
  FUN_08009220();
  return;
}



/* ENTRY 0x0801bbe0 : FUN_0801bbe0 */

void FUN_0801bbe0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_20003185 == '\x01')) {
      FUN_08020a04();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_08020a58(param_1 + 1);
  }
  return;
}



/* ENTRY 0x0801bc24 : FUN_0801bc24 */

uint FUN_0801bc24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
            if ((DAT_2000427e == -0x44) && (DAT_20004282 == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_200009ad + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_20004283)[uVar4];
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
            FUN_0800fba4(&DAT_200009a7,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
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
          FUN_0800fba4(s_AT_ULKTE_20000982,9,DAT_200009ae / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_200009ae / 0x50;
        if ((uint)DAT_200009ae % 0x50 == 0x14) {
          if ((DAT_2000427e == -0x44) && (DAT_20004282 == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_200009ad + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_20004283)[uVar5];
              puVar7 = &DAT_20000995;
              if (uVar4 != (byte)(&DAT_2000099a)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_200009b1 = 6;
            }
            else {
              FUN_0800fba4(&DAT_20000995,DAT_200009ad + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_200009b0 = DAT_200009b0 + 1;
        }
        else if ((uint)DAT_200009ae % 0x50 == 0x3c) {
          FUN_0800fba4(&DAT_200009a7,6,DAT_200009ae / 0x50,param_4,param_1,param_2,param_3,param_4);
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
      FUN_0800fa90(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_200031b6);
    }
    if ((uint)DAT_200009ae % 0x18 == 4) {
      sVar9 = (short)(DAT_2000311c / 10);
      if (DAT_2000311c / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0800fa90(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_20003110,(int)sVar9,
                   (int)(short)((ushort)DAT_200006c4 | (ushort)(byte)DAT_200031f4 << 8),
                   (int)CONCAT11(DAT_200006de,DAT_200006dd),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_200009ae % 0x18 == 8) {
      FUN_0800fa90(0xf5,(int)(short)DAT_200006d4,(int)(short)DAT_200006d8,
                   (int)CONCAT11(DAT_200006d2,DAT_200006d3),(int)CONCAT11(DAT_200006ce,DAT_200006d0)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_200009ae % 0x18 == 0xc) {
      FUN_0800fa90(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e8,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003144,(int)(short)(DAT_20003118 / 0xe10),(int)DAT_20003178);
    }
    if ((uint)DAT_200009ae % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003d64 != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0800fa90(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_200009ae + ((int)(uint)DAT_200009ae >> 2) * -4 == 2) {
      FUN_08019a7c();
    }
    uVar4 = (uint)DAT_200009ae % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_08017cec();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801c0dc : FUN_0801c0dc */

void FUN_0801c0dc(uint param_1)

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



/* ENTRY 0x0801c104 : FUN_0801c104 */

uint FUN_0801c104(uint param_1,uint param_2)

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



/* ENTRY 0x0801c12a : FUN_0801c12a */

void FUN_0801c12a(byte *param_1)

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



/* ENTRY 0x0801c168 : FUN_0801c168 */

void FUN_0801c168(void)

{
  uint uVar1;
  
  if (DAT_200005f3 == '\0') {
    if (DAT_200005f4 == '\0') {
      uVar1 = (uint)DAT_200005f5;
      DAT_200005f5 = DAT_200005f5 + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005f1 == '\x01') {
          FUN_08015578();
        }
      }
      else if (DAT_200005f2 == '\x01') {
        FUN_080154f4();
      }
    }
    else if (DAT_200005f7 == 0) {
      FUN_080152ac(0xff);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else if (DAT_200005f7 < 0x12) {
      FUN_080152ac(DAT_200005f7 - 1);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else {
      DAT_200005f7 = 0;
      DAT_200005f4 = '\0';
    }
  }
  else if (DAT_200005f6 == 0) {
    FUN_08015398(0xff);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else if (DAT_200005f6 < 99) {
    FUN_08015398(DAT_200005f6 - 1);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else {
    DAT_200005f6 = 0;
    DAT_200005f3 = '\0';
  }
  return;
}



/* ENTRY 0x0801c250 : FUN_0801c250 */

int FUN_0801c250(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0800c7f4(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0800c7f4(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801c2fc : FUN_0801c2fc */

void FUN_0801c2fc(void)

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



/* ENTRY 0x0801c32c : FUN_0801c32c */

void FUN_0801c32c(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0801cafc(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_0801d888(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_0801e068();
    }
  }
  else {
    FUN_0801c370(param_1,param_2);
  }
  return;
}



/* ENTRY 0x0801c370 : FUN_0801c370 */

void FUN_0801c370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_0800c83c();
  DAT_2000092e = DAT_2000092e + 1;
  if (DAT_2000092e < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000932 = DAT_20000933 + (char)iVar1;
          if (0x1f < DAT_20000932) {
            DAT_20000932 = DAT_20000932 - 0x20;
          }
          (&DAT_20003de2)[iVar1 * 3] = (&DAT_0802781e)[(uint)DAT_20000932 * 3];
          (&DAT_20003de3)[iVar1 * 3] = (&DAT_0802781f)[(uint)DAT_20000932 * 3];
          (&DAT_20003de4)[iVar1 * 3] = (&DAT_08027820)[(uint)DAT_20000932 * 3];
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
          (&DAT_20003de2)[iVar1 * 3] = (&DAT_0802781e)[(uint)DAT_20000932 * 3];
          (&DAT_20003de3)[iVar1 * 3] = (&DAT_0802781f)[(uint)DAT_20000932 * 3];
          (&DAT_20003de4)[iVar1 * 3] = (&DAT_08027820)[(uint)DAT_20000932 * 3];
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
        (&DAT_20003de2)[iVar1 * 3] = DAT_200008fe;
        (&DAT_20003de3)[iVar1 * 3] = DAT_200008ff;
        (&DAT_20003de4)[iVar1 * 3] = DAT_20000900;
      }
    }
  }
  else if (DAT_2000092e < 0xa8c) {
    if (DAT_20000930 == '\0') {
      DAT_20000930 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003e06)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 3) / 100);
            (&DAT_20003e07)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 3) / 100);
            (&DAT_20003e08)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003e06)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003e06)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003e06)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 100) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 100) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003e06)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003e06)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003e06)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781e)[iVar1 * 3] * 3) / 100);
            (&DAT_20003e07)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_0802781f)[iVar1 * 3] * 3) / 100);
            (&DAT_20003e08)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027820)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_20000936 = DAT_20000934 + (short)iVar1;
      if (0xdf < DAT_20000936) {
        DAT_20000936 = DAT_20000936 + -0xe0;
      }
      (&DAT_20003de2)[iVar1 * 3] = (&DAT_20003e06)[DAT_20000936 * 3];
      (&DAT_20003de3)[iVar1 * 3] = (&DAT_20003e07)[DAT_20000936 * 3];
      (&DAT_20003de4)[iVar1 * 3] = (&DAT_20003e08)[DAT_20000936 * 3];
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
        (&DAT_20003de2)[iVar2 * 3] = (&DAT_20000901)[DAT_20000939 * 3];
        (&DAT_20003de3)[iVar2 * 3] = (&DAT_20000902)[DAT_20000939 * 3];
        (&DAT_20003de4)[iVar2 * 3] = (&DAT_20000903)[DAT_20000939 * 3];
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



/* ENTRY 0x0801cafc : FUN_0801cafc */

void FUN_0801cafc(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_0800c83c();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_2000093d = DAT_2000093c + (char)uVar6;
      if ('\v' < DAT_2000093d) {
        DAT_2000093d = DAT_2000093d + -0xc;
      }
      (&DAT_20003de2)[uVar6 * 3] = (&DAT_200040a6)[DAT_2000093d * 3];
      (&DAT_20003de3)[uVar6 * 3] = (&DAT_200040a7)[DAT_2000093d * 3];
      (&DAT_20003de4)[uVar6 * 3] = (&DAT_200040a8)[DAT_2000093d * 3];
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
      DAT_200040b5 = DAT_20003218;
      DAT_200040b6 = DAT_20003219;
      DAT_200040b7 = DAT_2000321a;
      DAT_200040b2 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
      DAT_200040b3 = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
      DAT_200040b4 = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
      DAT_200040af = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
      DAT_200040b0 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
      DAT_200040b1 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
      DAT_200040ac = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
      DAT_200040ad = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
      DAT_200040ae = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
      DAT_200040a9 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
      DAT_200040aa = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
      DAT_200040ab = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
      DAT_200040a6 = (byte)(((uint)DAT_20003218 * 5) / 100);
      DAT_200040a7 = (byte)(((uint)DAT_20003219 * 5) / 100);
      DAT_200040a8 = (byte)(((uint)DAT_2000321a * 5) / 100);
    }
    else {
      DAT_200040a9 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
      DAT_200040aa = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
      DAT_200040ab = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
      DAT_200040ac = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
      DAT_200040ad = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
      DAT_200040ae = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
      DAT_200040af = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
      DAT_200040b0 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
      DAT_200040b1 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
      DAT_200040b2 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
      DAT_200040b3 = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
      DAT_200040b4 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
      DAT_200040b5 = (byte)(((uint)DAT_20003218 * 5) / 100);
      DAT_200040b6 = (byte)(((uint)DAT_20003219 * 5) / 100);
      DAT_200040b7 = (byte)(((uint)DAT_2000321a * 5) / 100);
      DAT_200040a8 = DAT_2000321a;
      DAT_200040a7 = DAT_20003219;
      DAT_200040a6 = DAT_20003218;
    }
  }
  else {
    uVar5 = DAT_2000093a + 2;
    if (uVar4 < 1000) {
      DAT_2000093a = uVar5;
      if (bVar2) {
        DAT_200040b5 = DAT_2000321c;
        DAT_200040b6 = DAT_2000321d;
        DAT_200040b7 = DAT_2000321e;
        DAT_200040b2 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
        DAT_200040b3 = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
        DAT_200040b4 = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
        DAT_200040af = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
        DAT_200040b0 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
        DAT_200040b1 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
        DAT_200040ac = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
        DAT_200040ad = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
        DAT_200040ae = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
        DAT_200040a9 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
        DAT_200040aa = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
        DAT_200040ab = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
        DAT_200040a6 = (byte)(((uint)DAT_2000321c * 5) / 100);
        DAT_200040a7 = (byte)(((uint)DAT_2000321d * 5) / 100);
        DAT_200040a8 = (byte)(((uint)DAT_2000321e * 5) / 100);
      }
      else {
        DAT_200040a9 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
        DAT_200040aa = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
        DAT_200040ab = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
        DAT_200040ac = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
        DAT_200040ad = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
        DAT_200040ae = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
        DAT_200040af = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
        DAT_200040b0 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
        DAT_200040b1 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
        DAT_200040b2 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
        DAT_200040b3 = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
        DAT_200040b4 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
        DAT_200040b5 = (byte)(((uint)DAT_2000321c * 5) / 100);
        DAT_200040b6 = (byte)(((uint)DAT_2000321d * 5) / 100);
        DAT_200040b7 = (byte)(((uint)DAT_2000321e * 5) / 100);
        DAT_200040a8 = DAT_2000321e;
        DAT_200040a7 = DAT_2000321d;
        DAT_200040a6 = DAT_2000321c;
      }
    }
    else {
      uVar4 = DAT_2000093a + 3;
      if (uVar5 < 0x5dc) {
        DAT_2000093a = uVar4;
        if (bVar2) {
          DAT_200040b5 = DAT_20003220;
          DAT_200040b6 = DAT_20003221;
          DAT_200040b7 = DAT_20003222;
          DAT_200040b2 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
          DAT_200040b3 = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
          DAT_200040b4 = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
          DAT_200040af = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
          DAT_200040b0 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
          DAT_200040b1 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
          DAT_200040ac = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
          DAT_200040ad = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
          DAT_200040ae = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
          DAT_200040a9 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
          DAT_200040aa = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
          DAT_200040ab = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
          DAT_200040a6 = (byte)(((uint)DAT_20003220 * 5) / 100);
          DAT_200040a7 = (byte)(((uint)DAT_20003221 * 5) / 100);
          DAT_200040a8 = (byte)(((uint)DAT_20003222 * 5) / 100);
        }
        else {
          DAT_200040a9 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
          DAT_200040aa = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
          DAT_200040ab = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
          DAT_200040ac = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
          DAT_200040ad = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
          DAT_200040ae = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
          DAT_200040af = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
          DAT_200040b0 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
          DAT_200040b1 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
          DAT_200040b2 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
          DAT_200040b3 = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
          DAT_200040b4 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
          DAT_200040b5 = (byte)(((uint)DAT_20003220 * 5) / 100);
          DAT_200040b6 = (byte)(((uint)DAT_20003221 * 5) / 100);
          DAT_200040b7 = (byte)(((uint)DAT_20003222 * 5) / 100);
          DAT_200040a8 = DAT_20003222;
          DAT_200040a7 = DAT_20003221;
          DAT_200040a6 = DAT_20003220;
        }
      }
      else {
        uVar5 = DAT_2000093a + 4;
        if (uVar4 < 2000) {
          DAT_2000093a = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_200040b5 = DAT_20003224;
              DAT_200040b6 = DAT_20003225;
              DAT_200040b7 = DAT_20003226;
              DAT_200040b2 = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
              DAT_200040b3 = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
              DAT_200040b4 = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
              DAT_200040af = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
              DAT_200040b0 = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
              DAT_200040b1 = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
              DAT_200040ac = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
              DAT_200040ad = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
              DAT_200040ae = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
              DAT_200040a9 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
              DAT_200040aa = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
              DAT_200040ab = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
              DAT_200040a6 = (byte)(((uint)DAT_20003224 * 5) / 100);
              DAT_200040a7 = (byte)(((uint)DAT_20003225 * 5) / 100);
              DAT_200040a8 = (byte)(((uint)DAT_20003226 * 5) / 100);
            }
          }
          else {
            DAT_200040a6 = DAT_20003224;
            DAT_200040a7 = DAT_20003225;
            DAT_200040a8 = DAT_20003226;
            DAT_200040a9 = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
            DAT_200040aa = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
            DAT_200040ab = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
            DAT_200040ac = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
            DAT_200040ad = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
            DAT_200040ae = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
            DAT_200040af = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
            DAT_200040b0 = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
            DAT_200040b1 = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
            DAT_200040b2 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
            DAT_200040b3 = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
            DAT_200040b4 = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
            DAT_200040b5 = (byte)(((uint)DAT_20003224 * 5) / 100);
            DAT_200040b6 = (byte)(((uint)DAT_20003225 * 5) / 100);
            DAT_200040b7 = (byte)(((uint)DAT_20003226 * 5) / 100);
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



/* ENTRY 0x0801d888 : FUN_0801d888 */

void FUN_0801d888(int param_1,int param_2)

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
    FUN_080202d4(cVar2,(&DAT_20003de2)[iVar8 * 3],(&DAT_20003de3)[iVar8 * 3],
                 (&DAT_20003de4)[iVar8 * 3],auStack_54);
    FUN_080202d4(cVar2,(&DAT_20003de2)[iVar5 * 3],(&DAT_20003de3)[iVar5 * 3],
                 (&DAT_20003de4)[iVar5 * 3],auStack_40);
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
  FUN_08022878(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_2000093f = DAT_2000093e + (char)iVar5;
      if ('\v' < DAT_2000093f) {
        DAT_2000093f = DAT_2000093f + -0xc;
      }
      (&DAT_20003de2)[iVar5 * 3] = (&DAT_200040ca)[DAT_2000093f * 3];
      (&DAT_20003de3)[iVar5 * 3] = (&DAT_200040cb)[DAT_2000093f * 3];
      (&DAT_20003de4)[iVar5 * 3] = (&DAT_200040cc)[DAT_2000093f * 3];
    }
    bVar1 = '\v' < DAT_2000093e;
    DAT_2000093e = DAT_2000093e + '\x01';
    if (bVar1) {
      DAT_2000093e = '\x01';
    }
  }
  if (DAT_20000940 < 500) {
    DAT_200040ca = DAT_20003218;
    DAT_200040cb = DAT_20003219;
    DAT_200040cc = DAT_2000321a;
    DAT_200040cd = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
    DAT_200040ce = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
    DAT_200040cf = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
    DAT_200040d0 = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
    DAT_200040d1 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
    DAT_200040d2 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
    DAT_200040d3 = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
    DAT_200040d4 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
    DAT_200040d5 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
    DAT_200040d6 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
    DAT_200040d7 = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
    DAT_200040d8 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
    DAT_200040d9 = (undefined1)(((uint)DAT_20003218 * 5) / 100);
    DAT_200040da = (undefined1)(((uint)DAT_20003219 * 5) / 100);
    DAT_200040db = (undefined1)(((uint)DAT_2000321a * 5) / 100);
    DAT_20000940 = DAT_20000940 + 1;
  }
  else if ((ushort)(DAT_20000940 + 1) < 1000) {
    DAT_200040ca = DAT_2000321c;
    DAT_200040cb = DAT_2000321d;
    DAT_200040cc = DAT_2000321e;
    DAT_200040cd = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
    DAT_200040ce = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
    DAT_200040cf = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
    DAT_200040d0 = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
    DAT_200040d1 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
    DAT_200040d2 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
    DAT_200040d3 = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
    DAT_200040d4 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
    DAT_200040d5 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
    DAT_200040d6 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
    DAT_200040d7 = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
    DAT_200040d8 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
    DAT_200040d9 = (undefined1)(((uint)DAT_2000321c * 5) / 100);
    DAT_200040da = (undefined1)(((uint)DAT_2000321d * 5) / 100);
    DAT_200040db = (undefined1)(((uint)DAT_2000321e * 5) / 100);
    DAT_20000940 = DAT_20000940 + 2;
  }
  else if ((ushort)(DAT_20000940 + 2) < 0x5dc) {
    DAT_200040ca = DAT_20003220;
    DAT_200040cb = DAT_20003221;
    DAT_200040cc = DAT_20003222;
    DAT_200040cd = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
    DAT_200040ce = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
    DAT_200040cf = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
    DAT_200040d0 = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
    DAT_200040d1 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
    DAT_200040d2 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
    DAT_200040d3 = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
    DAT_200040d4 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
    DAT_200040d5 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
    DAT_200040d6 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
    DAT_200040d7 = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
    DAT_200040d8 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
    DAT_200040d9 = (undefined1)(((uint)DAT_20003220 * 5) / 100);
    DAT_200040da = (undefined1)(((uint)DAT_20003221 * 5) / 100);
    DAT_200040db = (undefined1)(((uint)DAT_20003222 * 5) / 100);
    DAT_20000940 = DAT_20000940 + 3;
  }
  else {
    uVar3 = DAT_20000940 + 4;
    if ((ushort)(DAT_20000940 + 3) < 2000) {
      DAT_200040ca = DAT_20003224;
      DAT_200040cb = DAT_20003225;
      DAT_200040cc = DAT_20003226;
      DAT_200040cd = (undefined1)(((uint)DAT_20003224 * 0x50) / 100);
      DAT_200040ce = (undefined1)(((uint)DAT_20003225 * 0x50) / 100);
      DAT_200040cf = (undefined1)(((uint)DAT_20003226 * 0x50) / 100);
      DAT_200040d0 = (undefined1)(((uint)DAT_20003224 * 0x37) / 100);
      DAT_200040d1 = (undefined1)(((uint)DAT_20003225 * 0x37) / 100);
      DAT_200040d2 = (undefined1)(((uint)DAT_20003226 * 0x37) / 100);
      DAT_200040d3 = (undefined1)(((uint)DAT_20003224 * 0x23) / 100);
      DAT_200040d4 = (undefined1)(((uint)DAT_20003225 * 0x23) / 100);
      DAT_200040d5 = (undefined1)(((uint)DAT_20003226 * 0x23) / 100);
      DAT_200040d6 = (undefined1)(((uint)DAT_20003224 * 0xf) / 100);
      DAT_200040d7 = (undefined1)(((uint)DAT_20003225 * 0xf) / 100);
      DAT_200040d8 = (undefined1)(((uint)DAT_20003226 * 0xf) / 100);
      DAT_200040d9 = (undefined1)(((uint)DAT_20003224 * 5) / 100);
      DAT_200040da = (undefined1)(((uint)DAT_20003225 * 5) / 100);
      DAT_200040db = (undefined1)(((uint)DAT_20003226 * 5) / 100);
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



/* ENTRY 0x0801e068 : FUN_0801e068 */

void FUN_0801e068(void)

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
    FUN_080202d4(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_080202d4(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_20000944 == (DAT_20000944 / 0x18) * 0x18) {
    DAT_20000948 = DAT_20000948 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_20000944 = DAT_20000944 + 1;
    FUN_08022878(local_30,local_44);
  }
  else {
    DAT_20000944 = DAT_20000944 + 1;
    FUN_08022878(local_44,local_30);
  }
  return;
}



/* ENTRY 0x0801e230 : FUN_0801e230 */

void FUN_0801e230(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08008582(auStack_2c,0x14);
  FUN_08008582(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080202d4(bVar1,0,0,0,auStack_2c);
    FUN_080202d4(bVar1,0,0,0,auStack_40);
  }
  if (DAT_20000884 % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080202d4(bVar1,uVar2,0,0,auStack_2c);
    FUN_080202d4(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_08022878(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x0801e2e0 : FUN_0801e2e0 */

void FUN_0801e2e0(int param_1)

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
    FUN_080246e4(param_1);
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
    FUN_080246e4(param_1);
  }
  DAT_20000881 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_080202d4(uVar2,uVar3,uVar4,0,local_30);
    FUN_080202d4(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08022a24(local_30,local_44);
  return;
}



/* ENTRY 0x0801e578 : FUN_0801e578 */

void FUN_0801e578(uint param_1)

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
  if (DAT_2000315a == 0) {
    if (DAT_2000315b == 0) {
      if ((DAT_20003153 & 0x70) == 0) {
        if ((DAT_20003178 < 0xc9) || (DAT_20003178 == 0xe0)) {
          if (uVar3 == 0) {
            if ((DAT_20003157 == '\0') || (3 < param_1 % 0xc)) {
              if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              iVar2 = FUN_0801781c();
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
                    (&DAT_2000082f)[uVar3] = (&DAT_08027786)[uVar3];
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
                         (char)((int)(uint)CONCAT11((&DAT_0802777e)[uVar3],(&DAT_0802778e)[uVar3])
                               >> sVar4);
                  }
                }
                else {
                  for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                    (&DAT_2000082f)[uVar3] =
                         (char)((int)((uint)CONCAT11((&DAT_0802777e)[uVar3],
                                                     (&DAT_0802771e)
                                                     [uVar3 + ((DAT_20000880 / 10) % 10) * 8]) |
                                     (uint)(byte)(&DAT_0802771e)
                                                 [uVar3 + ((uint)DAT_20000880 % 10) * 8] << 4) >>
                               sVar4);
                  }
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] = (&DAT_08027816)[uVar3];
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
                   (&DAT_0802771e)[uVar1 + ((uVar3 / 10000) % 10) * 8] |
                   (&DAT_0802771e)[uVar1 + ((uVar3 / 1000) % 10) * 8] << 4;
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
                (&DAT_2000082f)[uVar3] = (&DAT_0802776e)[uVar3];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003155 == 0) {
              if (DAT_20003157 == '\0') {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  uVar1 = (byte)DAT_20003178 - 200 & 0xff;
                  (&DAT_2000082f)[uVar3] =
                       (&DAT_0802771e)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                       (&DAT_0802771e)[uVar3 + (uVar1 % 10) * 8] << 4;
                }
              }
              else {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  (&DAT_2000082f)[uVar3] = (&DAT_08027816)[uVar3];
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082f)[uVar3] =
                     (&DAT_08027776)[uVar3] |
                     (&DAT_0802771e)[uVar3 + ((uint)DAT_20003155 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003157 == '\0') {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              uVar1 = (byte)DAT_20003178 - 200 & 0xff;
              (&DAT_2000082f)[uVar3] =
                   (&DAT_0802771e)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                   (&DAT_0802771e)[uVar3 + (uVar1 % 10) * 8] << 4;
            }
          }
          else {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              (&DAT_2000082f)[uVar3] = (&DAT_08027816)[uVar3];
            }
          }
          bVar6 = param_1 % 0x1e == 3;
          do {
            if (!bVar6) goto LAB_0801eab8;
          } while (((DAT_200030de & 0x200) != 0x200) &&
                  (bVar6 = (DAT_200030de & 0x400) == 0x400, !bVar6));
          FUN_080234ec(3);
        }
      }
      else {
        for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
          (&DAT_2000082f)[uVar3] =
               (&DAT_0802771e)[uVar3 + ((DAT_20003154 / 10) % 10) * 8] |
               (&DAT_0802771e)[uVar3 + ((uint)DAT_20003154 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar3 = DAT_2000315b - 1 & 0xff;
      if (5 < uVar3) {
        uVar3 = 5;
      }
      for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
        (&DAT_2000082f)[uVar1] = (&UNK_080277e6)[uVar1 + uVar3 * 8];
      }
      DAT_2000315b = DAT_2000315b + 1;
      if (0x14 < DAT_2000315b) {
        DAT_2000315b = 0;
      }
    }
  }
  else {
    uVar3 = DAT_2000315a - 1 & 0xff;
    if (9 < uVar3) {
      uVar3 = 9;
    }
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000082f)[uVar1] = (&UNK_08027796)[uVar1 + uVar3 * 8];
    }
    DAT_2000315a = DAT_2000315a + 1;
    if (0x14 < DAT_2000315a) {
      DAT_2000315a = 0;
    }
  }
LAB_0801eab8:
  FUN_080113bc(&DAT_2000082f);
  return;
}



/* ENTRY 0x0801ead8 : thunk_FUN_0801eaea */

void thunk_FUN_0801eaea(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801eaea : FUN_0801eaea */

void FUN_0801eaea(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801eaf0 : FUN_0801eaf0 */

void FUN_0801eaf0(void)

{
  FUN_0800b478();
  FUN_0800b39c(0x35);
  FUN_0800b430(&DWORD_08008300,0);
  FUN_0800b3e8();
  return;
}



/* ENTRY 0x0801eb50 : FUN_0801eb50 */

void FUN_0801eb50(void)

{
  FUN_0800b478();
  FUN_0800acf4();
  FUN_0800b3e8();
  FUN_0800ad04();
  FUN_0800ad3c();
  return;
}



/* ENTRY 0x0801eb68 : FUN_0801eb68 */

undefined4 FUN_0801eb68(void)

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



/* ENTRY 0x0801eba0 : FUN_0801eba0 */

void FUN_0801eba0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(0x3d,1);
  FUN_0800ba7c(0x300200,1);
  FUN_0801f9dc(7);
  DAT_2000315a = 1;
  FUN_0800f0bc();
  FUN_080159c8();
  local_8 = 0x10010002;
  FUN_0800b9bc(&DAT_40011000,&local_8);
  FUN_0801f8c8();
  DAT_200006a4 = 0;
  local_8 = 0x10030004;
  FUN_0800b9bc(&DAT_40010c00,&local_8);
  FUN_0801f8f4();
  return;
}



/* ENTRY 0x0801ec20 : FUN_0801ec20 */

void FUN_0801ec20(void)

{
  int iVar1;
  
  DAT_200006b4 = DAT_200006b4 + 1;
  FUN_08019224();
  FUN_080202f4();
  FUN_0802017c();
  FUN_0802175c();
  if ((DAT_20003184 & 1) != 0) {
    if ((DAT_20000837 == '\0') && (iVar1 = FUN_080226d8(DAT_20003110 / 10 & 0xffff), iVar1 == 1)) {
      FUN_080214a8();
    }
    DAT_20000837 = '\x01';
    DAT_20003184 = DAT_20003184 & 0xfe;
  }
  return;
}



/* ENTRY 0x0801ec8c : FUN_0801ec8c */

void FUN_0801ec8c(void)

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



/* ENTRY 0x0801ef80 : FUN_0801ef80 */

undefined2
FUN_0801ef80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0801140e(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_0801140e(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801efac : FUN_0801efac */

void FUN_0801efac(void)

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
    FUN_0800bafa(&DAT_40010c00,0x200);
  }
  else {
    FUN_0800baf6(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x0801f0a8 : FUN_0801f0a8 */

void FUN_0801f0a8(void)

{
  return;
}



/* ENTRY 0x0801f0ac : FUN_0801f0ac */

int FUN_0801f0ac(int param_1)

{
  if (DAT_200001b0 == 'G') {
    DAT_200001da = (short)(((param_1 * 100) / 0x84 + 0x9c4 + DAT_200001da * 9) / 10);
  }
  else {
    DAT_200001da = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001da * 9) / 10);
  }
  return (int)(DAT_200001da / 10);
}



/* ENTRY 0x0801f120 : FUN_0801f120 */

undefined4 FUN_0801f120(void)

{
  return diag_pintch;
}



/* ENTRY 0x0801f12c : FUN_0801f12c */

undefined4 FUN_0801f12c(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0801f138 : FUN_0801f138 */

undefined4 FUN_0801f138(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0801f144 : FUN_0801f144 */

uint FUN_0801f144(void)

{
  return (uint)DAT_200032b6 << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0801f15c : FUN_0801f15c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801f15c(void)

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



/* ENTRY 0x0801f2d8 : FUN_0801f2d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801f2d8(void)

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



/* ENTRY 0x0801f448 : FUN_0801f448 */

int FUN_0801f448(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0801f464 : FUN_0801f464 */

bool FUN_0801f464(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0801f530 : FUN_0801f530 */

int FUN_0801f530(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_0802688c)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801f570 : FUN_0801f570 */

int FUN_0801f570(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_0802688c)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801f5b0 : FUN_0801f5b0 */

void FUN_0801f5b0(void)

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
  uVar5 = FUN_0800bc40();
  bVar3 = (byte)uVar5;
  DAT_200005b0 = bVar3;
  if (uVar5 != DAT_200005d2) {
    iVar6 = FUN_08010d80(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_08026d08 + (uint)DAT_200005d2 * 3 + uVar5 * 0x18);
    DAT_20000396 = *(char *)((int)(&UNK_08026d08 + (uint)DAT_200005d2 * 3 + uVar5 * 0x18) + 2);
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
      FUN_0800bc80(uVar8,bVar4,(int)DAT_20000396,iVar6,DAT_200005d2);
      DAT_200005d2 = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005d2 = bVar3;
    }
  }
  return;
}



/* ENTRY 0x0801f8c8 : FUN_0801f8c8 */

void FUN_0801f8c8(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(4,1);
  local_8 = 0x48030800;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801f8f4 : FUN_0801f8f4 */

void FUN_0801f8f4(void)

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
  
  FUN_0800ed1c(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_0800b9bc(&DAT_40010c00,&local_24);
  FUN_0800ecec(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_08011240(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_0801111e(&DAT_40000800,&local_20);
  FUN_08011182(&DAT_40000800,8);
  FUN_08010ad0(&DAT_40000800,1);
  FUN_08010b2c(&DAT_40000800,1);
  FUN_08010b3e(&DAT_40000800,1);
  return;
}



/* ENTRY 0x0801f990 : FUN_0801f990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f990(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_0800b478();
    FUN_0800b3a8(&DAT_0803d000);
    FUN_0800b3e8();
  }
  return;
}



/* ENTRY 0x0801f9b0 : FUN_0801f9b0 */

void FUN_0801f9b0(void)

{
  FUN_0800b478();
  FUN_0800b3a8(&DAT_0803d000);
  FUN_0800b430(&DAT_0803d000,0x55aaaa55);
  FUN_0800b3e8();
  DAT_2000094c = 1;
  return;
}



/* ENTRY 0x0801f9dc : FUN_0801f9dc */

void FUN_0801f9dc(void)

{
  byte bVar1;
  
  FUN_08011314();
  thunk_FUN_0801eaea(10);
  FUN_08015cfc(0x8f);
  thunk_FUN_0801eaea(1);
  FUN_08015cfc(0x40);
  thunk_FUN_0801eaea(1);
  FUN_0800baf6(&DAT_40011000,0x10);
  FUN_08011374(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_08011374(0);
  }
  FUN_0800bafa(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801fa30 : FUN_0801fa30 */

void FUN_0801fa30(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(0x10,1);
  local_8 = 0x28032000;
  FUN_0800b9bc(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801fa5c : FUN_0801fa5c */

void FUN_0801fa5c(void)

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



/* ENTRY 0x0801fbec : FUN_0801fbec */

bool FUN_0801fbec(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d0 == '\x02';
  if (bVar1) {
    DAT_200001d0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0801fc08 : FUN_0801fc08 */

bool FUN_0801fc08(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d6 != '\0';
  if (bVar1) {
    DAT_200001d6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0801fc20 : FUN_0801fc20 */

undefined4 FUN_0801fc20(int param_1)

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



/* ENTRY 0x0801fc3c : FUN_0801fc3c */

undefined4 FUN_0801fc3c(int param_1)

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
          FUN_0800ff24();
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



/* ENTRY 0x0801fcc0 : FUN_0801fcc0 */

void FUN_0801fcc0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_200006c4 != 0x12) {
    bVar3 = DAT_200006c4 == 0x14;
    do {
      if (!bVar3) goto LAB_0801fe64;
      bVar3 = DAT_200006cc == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_0801fe64;
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
      iVar1 = FUN_0801f138();
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x2d000) && (iVar1 = FUN_0801f120(), 0x2d000 < iVar1)) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 == 0) {
          DAT_20000730 = 0;
          goto LAB_0801fe6e;
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
LAB_0801fe6e:
  uVar2 = DAT_2000072c;
  if (1999 < DAT_2000072c) {
    uVar2 = 2000;
  }
  DAT_40000840 = (short)(((DAT_20003213 + 0x32) * uVar2) / 0x96);
  return;
LAB_0801fe64:
  DAT_2000072c = 0;
  DAT_20000730 = 0;
  goto LAB_0801fe6e;
}



/* ENTRY 0x0801fec8 : FUN_0801fec8 */

undefined2 FUN_0801fec8(void)

{
  DAT_20000860 = DAT_20000860 + 1;
  if ((ushort)((ushort)DAT_20000824 * 4) <= DAT_20000860) {
    DAT_20000860 = 0;
  }
  return (&DAT_20000734)[(int)(uint)DAT_20000860 >> 2];
}



/* ENTRY 0x0801ff04 : FUN_0801ff04 */

void FUN_0801ff04(void)

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
        FUN_080202d4(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_080202d4(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_08022878(auStack_34,auStack_48);
    }
    else {
      FUN_0801e2e0(diag_TotalVoltage);
    }
  }
  else if (DAT_20000888 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_080246e4(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_0801eb68();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080246e4(diag_TotalVoltage);
      }
    }
    else if (DAT_2000087c == 0) {
      iVar1 = FUN_08020ed4();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_080246e4(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_0801e2e0(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031ec < iVar1 / 1000) {
            FUN_0801e230();
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
            FUN_0801c32c(DAT_20000884,DAT_2000088c,DAT_20003210);
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
      FUN_0801c32c(DAT_20000884,(int)((uint)DAT_200031ec - iVar1 / 1000) / 5,DAT_20003210);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080246e4(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x0802017c : FUN_0802017c */

void FUN_0802017c(void)

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
  iVar1 = FUN_0801fbec();
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
    FUN_080234ec(1);
    FUN_08019cdc(3);
  }
  if (DAT_200006df == '\0') {
    FUN_0801fcc0((&DAT_20000724)[DAT_20000855]);
  }
  else {
    FUN_0801fcc0(DAT_20000725);
    DAT_200006c4 = 0x12;
  }
  return;
}



/* ENTRY 0x0802025c : FUN_0802025c */

void FUN_0802025c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x080202a0 : FUN_080202a0 */

uint FUN_080202a0(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x080202d4 : FUN_080202d4 */

void FUN_080202d4(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x080202f4 : FUN_080202f4 */

void FUN_080202f4(void)

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



/* ENTRY 0x08020378 : FUN_08020378 */

undefined4 FUN_08020378(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800af9c((&DAT_200000a6)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0801c0dc((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0801c104((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800af9c((&DAT_200000a6)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0801c104((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0801c104((char)local_94[0],uVar1);
  }
  FUN_0800af9c((&DAT_200000a6)[param_1 + param_2],local_94);
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



/* ENTRY 0x08020438 : FUN_08020438 */

undefined4 FUN_08020438(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  iVar1 = FUN_08020378(0,8,&local_18);
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



/* ENTRY 0x080204bc : FUN_080204bc */

void FUN_080204bc(void)

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



/* ENTRY 0x08020524 : FUN_08020524 */

undefined4 FUN_08020524(void)

{
  FUN_0801b1ec();
  FUN_08009c60();
  FUN_0800db74();
  FUN_0800e040(&LAB_08008fdc_1,0,&DAT_200018b8,2,2,&DAT_200016bc,0x80,0,3);
  FUN_0800e2a0(0);
  FUN_0800de08();
  return 0;
}



/* ENTRY 0x08020570 : FUN_08020570 */

void FUN_08020570(void)

{
  int iVar1;
  int iVar2;
  
  DAT_200032bc = ((diag_HallRSP * 0x13240) / 15000 + DAT_200032bc * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000324) / 10;
  DAT_200032c8 = (DAT_200032c8 * 9 + DAT_20000328) / 10;
  DAT_200032d4 = FUN_08020bec((int)(short)diag_VD * (int)(short)diag_VD +
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



/* ENTRY 0x08020a04 : FUN_08020a04 */

bool FUN_08020a04(void)

{
  if (DAT_200032c0 == '\0') {
    DAT_200032b6 = DAT_200032b6 | 8;
  }
  return DAT_200032c0 == '\0';
}



/* ENTRY 0x08020a24 : FUN_08020a24 */

void FUN_08020a24(void)

{
  FUN_0800eb4c(7);
  return;
}



/* ENTRY 0x08020a30 : FUN_08020a30 */

void FUN_08020a30(void)

{
  FUN_0800d878();
  FUN_08021f58();
  FUN_0800ff24(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x08020a50 : FUN_08020a50 */

void FUN_08020a50(void)

{
  FUN_0800bd70();
  return;
}



/* ENTRY 0x08020a58 : FUN_08020a58 */

void FUN_08020a58(int param_1)

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
    FUN_0800d878();
    DAT_2000031e = 0;
  }
  return;
}



/* ENTRY 0x08020ac8 : FUN_08020ac8 */

void FUN_08020ac8(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_2000031e;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_0800d878();
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



/* ENTRY 0x08020b44 : FUN_08020b44 */

bool FUN_08020b44(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08008494(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x08020b84 : FUN_08020b84 */

undefined4 FUN_08020b84(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_0800d92c(param_2,auStack_50);
  FUN_08020b44(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x08020ba2 : FUN_08020ba2 */

bool FUN_08020ba2(char *param_1,undefined4 param_2)

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



/* ENTRY 0x08020bda : FUN_08020bda */

bool FUN_08020bda(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x08020bec : FUN_08020bec */

uint FUN_08020bec(uint param_1)

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



/* ENTRY 0x08020c1c : FUN_08020c1c */

void FUN_08020c1c(void)

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
    iVar1 = FUN_08020bda(&DAT_200005dc);
    if (iVar1 == 0) {
      FUN_08020ba2(&DAT_200005dc,&local_58);
      FUN_08009d34(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000961 == uVar4) && (DAT_20000960 != '\x01')) {
        if ((DAT_20000968 == uVar5) && (DAT_20000967 != '\x01')) {
          if ((DAT_20000956 != uVar2) || (DAT_20000955 == '\x01')) {
            FUN_08009d34(&DAT_2000413e + uVar2 * 0x14,(&DAT_20000958)[uVar2]);
            DAT_20000957 = (char)uVar2 + 1U & 7;
            DAT_20000955 = '\0';
          }
        }
        else {
          FUN_08009d34(&DAT_2000422e + uVar5 * 0x14,0x14);
          DAT_20000969 = (char)uVar5 + 1U & 3;
          DAT_20000967 = '\0';
        }
      }
      else {
        FUN_08009d34(&DAT_200041de + uVar4 * 0x14,0x14);
        DAT_20000962 = (char)uVar4 + 1U & 3;
        DAT_20000960 = '\0';
      }
    }
  }
  else {
    FUN_08009d34(&DAT_200040ee + uVar3 * 0x14,0x14);
    DAT_20000950 = (char)uVar3 + 1U & 3;
    DAT_2000094e = '\0';
  }
  return;
}



/* ENTRY 0x08020d84 : FUN_08020d84 */

void FUN_08020d84(void)

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
      FUN_080224fc(diag_kilometer,diag_kiloWh);
    }
  }
  return;
}



/* ENTRY 0x08020ed4 : FUN_08020ed4 */

undefined4 FUN_08020ed4(void)

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
      FUN_08022878(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_2000320e == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_08022878(local_1c,local_30);
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
    FUN_08022878(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08020fb4 : FUN_08020fb4 */

void FUN_08020fb4(void)

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



/* ENTRY 0x080212a8 : FUN_080212a8 */

void FUN_080212a8(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005e4 == '\0') {
    if (DAT_200030f4 < 500) {
      FUN_0802425c(param_1,param_2 & 0xff);
    }
    FUN_08011e68(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x1ef || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_0800d8bc(&local_54);
    if (iVar1 == 1) {
      FUN_0801658c(&local_54);
    }
  }
  return;
}



/* ENTRY 0x0802134c : FUN_0802134c */

bool FUN_0802134c(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_08026a3c)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08026a3c)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x080213b4 : FUN_080213b4 */

undefined4 FUN_080213b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0802134c(0);
  if (iVar1 == 0) {
    iVar1 = FUN_0802134c(1);
    if (iVar1 == 0) {
      FUN_08021410();
      uVar2 = 0;
    }
    else {
      FUN_080213e4(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_080213e4(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x080213e4 : FUN_080213e4 */

undefined4 FUN_080213e4(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&DAT_20003198 + uVar1 * 4) =
         *(undefined4 *)((&DAT_08026a3c)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x08021410 : FUN_08021410 */

undefined4 FUN_08021410(void)

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



/* ENTRY 0x080214a8 : FUN_080214a8 */

undefined4 FUN_080214a8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0802134c(1);
  if (iVar1 == 0) {
    FUN_08021520(1);
    iVar1 = FUN_0802134c(1);
    if (iVar1 == 0) {
      iVar1 = FUN_0802134c(0);
      if (iVar1 == 0) {
        FUN_08021520(0);
        iVar1 = FUN_0802134c(0);
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
      FUN_08021520(0);
      iVar1 = FUN_0802134c(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_08021520(0);
    iVar1 = FUN_0802134c(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08021520(1);
      iVar1 = FUN_0802134c(1);
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



/* ENTRY 0x08021520 : FUN_08021520 */

undefined4 FUN_08021520(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_0800b478();
  FUN_0800b39c(0x34);
  DAT_200001dc = FUN_0800b3a8((&DAT_08026a3c)[param_1]);
  DAT_200032a0 = 0;
  DAT_200032a4 = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_200032a0,*(uint *)(&DAT_20003198 + uVar1 * 4));
    DAT_200032a0 = DAT_200032a0 + *(uint *)(&DAT_20003198 + uVar1 * 4);
    DAT_200032a4 = DAT_200032a4 + (uint)bVar2;
    DAT_200001dc = FUN_0800b430((&DAT_08026a3c)[param_1] + uVar1 * 4,
                                *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  }
  DAT_200001dc = FUN_0800b430((&DAT_08026a3c)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001dc = FUN_0800b430((&DAT_08026a3c)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003198 + uVar1 * 4));
  FUN_0800b39c(0x34);
  FUN_0800b3e8();
  return 0;
}



/* ENTRY 0x080215d4 : FUN_080215d4 */

void FUN_080215d4(void)

{
  FUN_080216e8();
  FUN_08022218();
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
  FUN_080222c0();
  FUN_0801bb9c();
  return;
}



/* ENTRY 0x080216e8 : FUN_080216e8 */

void FUN_080216e8(void)

{
  DAT_20003d74 = 0xe000;
  DAT_20003d76 = 0x28;
  DAT_20003d78 = 7000;
  DAT_20003d7a = 20000;
  DAT_20003d7c = 10000;
  DAT_20003d7e = 0x9c4;
  DAT_20003d80 = 0x5a;
  DAT_20003d8e = 0x3c;
  DAT_20003d90 = 6000;
  DAT_20003d92 = 18000;
  DAT_20003d94 = 8000;
  DAT_20003d96 = 0x9c4;
  DAT_20003d98 = 0x50;
  DAT_20003d82 = 0x5a;
  DAT_20003d84 = 5000;
  DAT_20003d86 = 16000;
  DAT_20003d88 = 6000;
  DAT_20003d8a = 0x9c4;
  DAT_20003d8c = 0x50;
  return;
}



/* ENTRY 0x0802175c : FUN_0802175c */

void FUN_0802175c(void)

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
    local_38 = DAT_20003d74;
    local_36 = DAT_20003d76;
    local_34 = DAT_20003d78 + DAT_200006a0;
    local_32 = DAT_20003d7a + DAT_200006a2;
    local_30 = DAT_20003d7c;
    local_2e = DAT_20003d7e;
    local_2c = DAT_20003d80;
    local_1e = DAT_20003d8e;
    local_1c = DAT_20003d90 + (short)(((int)DAT_200006a0 << 1) / 3);
    local_1a = DAT_20003d92 + (short)(((int)DAT_200006a2 << 1) / 3);
    local_18 = DAT_20003d94;
    local_16 = DAT_20003d96;
    local_14 = DAT_20003d98;
    local_2a = DAT_20003d82;
    local_28 = DAT_20003d84 + DAT_200006a0 / 3;
    local_26 = DAT_20003d86 + DAT_200006a2 / 3;
    local_24 = DAT_20003d88;
    local_22 = DAT_20003d8a;
    local_20 = DAT_20003d8c;
    FUN_0802435c(&local_38);
  }
  return;
}



/* ENTRY 0x08021974 : balance_control_candidate */

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
          iVar1 = (iVar1 * (diag_commbospeed + 0xc80)) / 0xc80;
        }
      }
      else if (iVar1 < 0xc9) {
        if (iVar1 < -199) {
          iVar1 = iVar1 + 200;
        }
        else {
          iVar1 = 0;
        }
        iVar1 = (iVar1 * (0xc80 - diag_commbospeed)) / 0xc80;
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



/* ENTRY 0x08021f58 : FUN_08021f58 */

void FUN_08021f58(void)

{
  DAT_2000029c = 0;
  DAT_200002a0 = 0;
  DAT_200002a4 = 0;
  diag_angleoffset_int = 0;
  DAT_200002ac = 0;
  DAT_200002b0 = 0;
  DAT_200002c0 = 0;
  DAT_200002bc = 0;
  FUN_0800b386(&DAT_200002c4);
  diag_commbospeed = 0;
  DAT_200002b8 = 0;
  DAT_2000036a = 0;
  FUN_0800d890();
  DAT_20000294 = 0;
  return;
}



/* ENTRY 0x08021fd0 : FUN_08021fd0 */

void FUN_08021fd0(void)

{
  int iVar1;
  
  iVar1 = FUN_080213b4();
  if (iVar1 == 0) {
    DAT_2000329c = 0x20220430;
    FUN_0800f25c(&DAT_200031fa);
    FUN_0800eae4();
  }
  else if (DAT_2000329c != 0x20220430) {
    DAT_2000329c = 0x20220430;
    FUN_0800f25c(&DAT_200031fa);
    FUN_0800eae4();
  }
  FUN_0800f25c(&DAT_200031fa);
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
  FUN_080216e8();
  DAT_20003d74 = DAT_200031b6;
  FUN_0802435c(&DAT_20003d74);
  FUN_0802459c();
  DAT_20000644 = DAT_20003228 == 0;
  DAT_20003212 = DAT_20003212 & 0xf0;
  if ((((0x2f < DAT_2000322a) && (DAT_2000322a < 0x3a)) && (0x2f < DAT_2000322b)) &&
     (((DAT_2000322b < 0x3a && (0x2f < DAT_2000322c)) &&
      ((DAT_2000322c < 0x3a && ((0x2f < DAT_2000322d && (DAT_2000322d < 0x3a)))))))) {
    DAT_20000981 = 1;
  }
  DAT_200006a8 = (uint)DAT_2000320c;
  DAT_200005fd = 1;
  FUN_08022f74(((int)DAT_200031aa << 0xc) / 10);
  FUN_08022f9c(((int)DAT_200031ac << 0xc) / 10);
  FUN_08022f58(DAT_20003246);
  DAT_20003114 = FUN_080204bc();
  if (((DAT_200031f0 == (DAT_200031f2 ^ 0xffff)) && (-200 < (short)DAT_200031f0)) &&
     ((short)DAT_200031f0 < 200)) {
    DAT_200002dc = (int)(short)DAT_200031f0;
  }
  FUN_0801afcc(DAT_200031e4);
  if (DAT_20003212 >> 4 == 1) {
    DAT_200006c4 = 0x13;
    DAT_200006c8 = 0x13;
  }
  return;
}



/* ENTRY 0x080221c8 : FUN_080221c8 */

void FUN_080221c8(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(4,1);
  local_8 = 0x10031000;
  FUN_0800b9bc(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x080221f4 : FUN_080221f4 */

void FUN_080221f4(void)

{
  FUN_0801565c(0x10,&DAT_08001300);
  FUN_0801565c(0xe,&DAT_08001310);
  FUN_0801565c(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x08022218 : FUN_08022218 */

void FUN_08022218(void)

{
  DAT_200031b6 = DAT_20003d74;
  DAT_200031b8 = DAT_20003d76;
  DAT_200031ba = DAT_20003d78;
  DAT_200031bc = DAT_20003d7a;
  DAT_200031be = DAT_20003d7c;
  DAT_200031c0 = DAT_20003d7e;
  DAT_200031c2 = DAT_20003d80;
  DAT_200031d0 = DAT_20003d8e;
  DAT_200031d2 = DAT_20003d90;
  DAT_200031d4 = DAT_20003d92;
  DAT_200031d6 = DAT_20003d94;
  DAT_200031d8 = DAT_20003d96;
  DAT_200031da = DAT_20003d98;
  DAT_200031c4 = DAT_20003d82;
  DAT_200031c6 = DAT_20003d84;
  DAT_200031c8 = DAT_20003d86;
  DAT_200031ca = DAT_20003d88;
  DAT_200031cc = DAT_20003d8a;
  DAT_200031ce = DAT_20003d8c;
  return;
}



/* ENTRY 0x080222c0 : FUN_080222c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080222c0(void)

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



/* ENTRY 0x08022340 : FUN_08022340 */

undefined4 FUN_08022340(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_2000313c = 0;
  DAT_20003144 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800f488();
  return 0;
}



/* ENTRY 0x0802236c : FUN_0802236c */

void FUN_0802236c(void)

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
  
  FUN_0800ed1c(0x11,1);
  FUN_0800bafe(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_0800b9bc(&DAT_40011000,&local_34);
  FUN_0800ba6a(&DAT_40011000,0x200);
  FUN_0800ecd4(2,1);
  FUN_0800a818(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_20004294;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_0800a954(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_0800d9a0(&local_54);
  FUN_0800a944(&DAT_40020408,2,1);
  FUN_0800a804(&DAT_40020408,1);
  FUN_0800ed1c(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_08011240(&DAT_40013400,&local_40);
  FUN_08011190(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_0801111e(&DAT_40013400,&local_50);
  FUN_08011182(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_08010ae2(&DAT_40013400,&local_64);
  FUN_08010b26(&DAT_40013400,0x80);
  FUN_08010ad0(&DAT_40013400,1);
  FUN_08010b64(&DAT_40013400,0xf,0x100);
  FUN_08010b54(&DAT_40013400,0x100);
  FUN_08010b3e(&DAT_40013400,1);
  FUN_08010b2c(&DAT_40013400,1);
  return;
}



/* ENTRY 0x080224fc : FUN_080224fc */

undefined4 FUN_080224fc(uint param_1,uint param_2)

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
    FUN_0800f488();
  }
  return 0;
}



/* ENTRY 0x08022530 : FUN_08022530 */

undefined4 FUN_08022530(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0801c0dc((int)local_20 >> 8);
  uVar4 = FUN_0801c104((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_0800b478();
  FUN_0800b278((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0801c104((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0801c104((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b278((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b278((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_0800b3e8();
  FUN_0800af9c((&DAT_200000a6)[param_1],&local_20);
  uVar1 = FUN_0801c0dc((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0801c104((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800af9c((&DAT_200000a6)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0801c104((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0801c104((char)local_20,uVar1);
  }
  FUN_0800af9c((&DAT_200000a6)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ENTRY 0x08022654 : FUN_08022654 */

void FUN_08022654(void)

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
  FUN_08022530(0,8,&local_18);
  return;
}



/* ENTRY 0x080226d8 : FUN_080226d8 */

bool FUN_080226d8(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001de;
  if (DAT_200001de < 0x3ff) {
    DAT_200001e0 = DAT_200001e0 + param_1;
    FUN_0800b478();
    FUN_0800b3f8((uint)DAT_200001de * 2 + 0x803a000,param_1);
    FUN_0800b3e8();
    DAT_200001de = DAT_200001de + 1;
  }
  else {
    FUN_0800b478();
    FUN_0800b3a8(0x803a000);
    FUN_0800b3e8();
    DAT_200001e0 = DAT_200001e0 + param_1 * 10;
    DAT_200031f8 = (undefined2)((uint)DAT_200001e0 >> 0x10);
    DAT_200031f6 = (undefined2)DAT_200001e0;
    DAT_200001de = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x0802276c : FUN_0802276c */

void FUN_0802276c(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0800c7f4(sVar1);
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
    iVar2 = FUN_0800c7f4(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_080278ae)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_080278ae)[uVar4];
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



/* ENTRY 0x08022878 : FUN_08022878 */

undefined4 FUN_08022878(void)

{
  return 0;
}



/* ENTRY 0x08022880 : FUN_08022880 */

void FUN_08022880(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_200009b2 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_20004294 + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_20004294 + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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



/* ENTRY 0x080229fc : FUN_080229fc */

void FUN_080229fc(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003dac)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003dbe)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x08022a24 : FUN_08022a24 */

void FUN_08022a24(int param_1)

{
  uint uVar1;
  
  DAT_20000880 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000880 = DAT_20000880 + '\x01';
    }
    (&DAT_20003dd0)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003dd1)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003dd2)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x08022a98 : FUN_08022a98 */

int FUN_08022a98(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_200040ee)[uVar2 * 0x14] = 0xaa;
    (&DAT_200040ef)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_200040f0)[uVar2 * 0x14 + iVar1] = (&DAT_20004d47)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_200040fe)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_200040f1)[uVar2 * 0x14 + iVar1] = (&DAT_20004d47)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08022b68 : FUN_08022b68 */

int FUN_08022b68(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_200040ee)[uVar2 * 0x14] = 0xaa;
    (&DAT_200040ef)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_200040f0)[uVar2 * 0x14 + iVar1] = (&DAT_20004c75)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_200040fe)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_200040f1)[uVar2 * 0x14 + iVar1] = (&DAT_20004c75)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08022c34 : FUN_08022c34 */

void FUN_08022c34(void)

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
    (&DAT_200040ee)[uVar5 * 0x14] = 0xaa;
    (&DAT_200040ef)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_200040f0)[uVar5 * 0x14 + iVar4] = (&DAT_2000096e)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_2000096e)[iVar4] + sVar1;
    }
    (&DAT_200040f0)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_200040f1)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_20000975)[iVar4];
      uVar6 = (byte)(&DAT_20000975)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_200040f1)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_200040fe)[uVar5 * 0x14] = 0xbb;
    (&DAT_200040ff)[uVar5 * 0x14] = 0x14;
    (&DAT_20004100)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20004101)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_20000951)[uVar5] = 0x14;
    DAT_2000094f = (char)uVar5 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return;
}



/* ENTRY 0x08022d70 : FUN_08022d70 */

int FUN_08022d70(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094f & 3;
  if (DAT_2000094e == '\0') {
    (&DAT_200040ee)[uVar2 * 0x14] = 0xaa;
    (&DAT_200040ef)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_200040f0)[uVar2 * 0x14 + iVar1] = (&DAT_200031fa)[iVar1];
    }
    (&DAT_200040fe)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_200040f1)[uVar2 * 0x14 + iVar1] = (&DAT_200031fa)[iVar1];
    }
    (&DAT_20000951)[uVar2] = 0x14;
    DAT_2000094f = (char)uVar2 + 1U & 3;
    if (DAT_2000094f == DAT_20000950) {
      DAT_2000094e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08022e24 : FUN_08022e24 */

undefined4 FUN_08022e24(void)

{
  FUN_0800cc5c(&DAT_20003318);
  return DAT_20003320;
}



/* ENTRY 0x08022e38 : FUN_08022e38 */

undefined4 FUN_08022e38(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
}



/* ENTRY 0x08022e48 : FUN_08022e48 */

undefined4 FUN_08022e48(int param_1)

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
          FUN_0800b478();
          FUN_0800b39c(0x34);
          FUN_0800b3f8(&DAT_08001342,DAT_200002ec);
          FUN_0800b3f8(&DAT_08001344,0x3f10);
          FUN_0800b39c(0x34);
          FUN_0800b3e8();
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



/* ENTRY 0x08022f34 : FUN_08022f34 */

undefined4 FUN_08022f34(void)

{
  FUN_0800b478();
  FUN_0800b430(&DAT_0803a800,0x28536692);
  FUN_0800b3e8();
  return 0;
}



/* ENTRY 0x08022f58 : FUN_08022f58 */

void FUN_08022f58(undefined1 param_1)

{
  DAT_20003311 = param_1;
  return;
}



/* ENTRY 0x08022f64 : FUN_08022f64 */

undefined4 FUN_08022f64(void)

{
  DAT_2000317a = 1;
  return 0;
}



/* ENTRY 0x08022f74 : FUN_08022f74 */

void FUN_08022f74(int param_1)

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



/* ENTRY 0x08022f9c : FUN_08022f9c */

void FUN_08022f9c(int param_1)

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



/* ENTRY 0x08022fc4 : accept_speed_alarm_settings */

undefined8 accept_speed_alarm_settings(int param_1,int param_2)

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
    if ((&DAT_2000323e)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_0802301c;
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
  FUN_080234ec(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0800f4c8(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_0802459c();
LAB_0802301c:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x080230ac : FUN_080230ac */

void FUN_080230ac(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0801f2d8();
  FUN_0800b478();
  FUN_0800b39c(0x35);
  FUN_0800b430(&DWORD_08008304,uVar1);
  dVar2 = FUN_0801f2d8();
  if (dVar2 == 0xffffffff) {
    FUN_0801eaf0();
    FUN_0800b3e8();
    return;
  }
  FUN_0800b3e8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08023130 : FUN_08023130 */

void FUN_08023130(void)

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
          if (DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) goto LAB_080231d6;
          bVar3 = DAT_20000640 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_080233ba;
LAB_080231d6:
              bVar3 = DAT_200031f4 == 1;
            } while (!bVar3);
            if (DAT_200031e6 == 0) goto LAB_080233ba;
            bVar3 = DAT_2000317a == '\0';
          } while (!bVar3);
          FUN_080234ec(1);
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
              FUN_080234ec(1);
            }
          }
          else if (DAT_200031f4 == 1) {
            if (((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
                 (DAT_20000640 % 0x32 == 0x14)) ||
                ((DAT_20000640 % 0x32 == 0x1e || (DAT_20000640 % 0x32 == 0x28)))) &&
               (DAT_2000317a == '\0')) {
              FUN_080234ec(1);
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
        FUN_080234ec(1);
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
LAB_080233ba:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_2000068c = 0x32;
    }
    else {
      bVar1 = DAT_2000068c + 1;
      bVar3 = 0x1e < DAT_2000068c;
      DAT_2000068c = bVar1;
      if (bVar3) {
        FUN_080234ec(3);
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
          FUN_080234ec(2);
        }
      }
      else {
        FUN_080234ec(2);
        DAT_2000068a = 0;
      }
    }
    if (0 < DAT_2000068e) {
      DAT_2000068e = DAT_2000068e + -1;
    }
    if ((DAT_20003d64 != '\0') && (DAT_2000068e == 0)) {
      if (DAT_200031f4 == 1) {
        FUN_080234ec();
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



/* ENTRY 0x080234e0 : FUN_080234e0 */

void FUN_080234e0(undefined1 param_1)

{
  DAT_200001c8 = param_1;
  return;
}



/* ENTRY 0x080234ec : FUN_080234ec */

void FUN_080234ec(undefined1 param_1)

{
  DAT_200001c9 = param_1;
  return;
}



/* ENTRY 0x080234f8 : FUN_080234f8 */

void FUN_080234f8(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed1c(8,1);
  local_8 = 0x10030100;
  FUN_0800b9bc(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08023524 : FUN_08023524 */

void FUN_08023524(void)

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



/* ENTRY 0x080235d4 : FUN_080235d4 */

void FUN_080235d4(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000007c = FUN_0800dc5c(0);
  FUN_08019ebc();
  do {
    FUN_08019f04();
    FUN_08023524();
    FUN_0800dcb0(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08023600 : FUN_08023600 */

void FUN_08023600(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031ee == 1) {
    FUN_0800bafa(&DAT_40011000,0x80);
  }
  else if (DAT_200005fc == '\x01') {
    FUN_0800baf6(&DAT_40011000,0x80);
  }
  FUN_0801efac();
  if ((DAT_200006b8 == (DAT_200006b8 / 0x14) * 0x14) && (DAT_200006ce == '\x01')) {
    FUN_080234ec();
  }
  if (DAT_200006b8 % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_20000838 == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0801fc20(0), iVar1 != 0)) {
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
      if ((iVar1 < 10000) && (iVar1 = FUN_0801fc20(0), iVar1 != 0)) {
        FUN_08022f64();
        FUN_080234ec(1);
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
  FUN_0801e578(DAT_200006b8);
  FUN_0800ef94();
  FUN_08009ca4();
  if ((DAT_20003183 != '\0') && (DAT_20003185 != '\0')) {
    FUN_080214a8();
    DAT_20003183 = '\0';
  }
  DAT_200006b8 = DAT_200006b8 + 1;
  return;
}



/* ENTRY 0x08023864 : aggregate_telemetry */

void aggregate_telemetry(void)

{
  int iVar1;
  uint uVar2;
  
  diag_TotalVoltage = DAT_200032c8;
  diag_TotalVol_show = DAT_200032cc;
  diag_VehicleSpeed = (DAT_200032bc + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)(((diag_VehicleSpeed - DAT_20000150) + diag_speedAcc * 9) / 10);
  diag_VectorVol = DAT_200032d4;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0801f570((int)DAT_200034fa);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0801f530((int)DAT_200034f2);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0801f448((int)DAT_20003500);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0801f0ac((int)DAT_20003324);
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
  if ((DAT_20004ba6 == '\0') && (DAT_20004d66 == '\0')) {
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      iVar1 = iVar1 + (uint)(ushort)(&DAT_20004cea)[uVar2] + (uint)(ushort)(&DAT_20004eaa)[uVar2];
    }
    iVar1 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4) + -0xaaa;
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



/* ENTRY 0x08023bfc : FUN_08023bfc */

void FUN_08023bfc(void)

{
  DAT_200030f0 = DAT_200034f8;
  return;
}



/* ENTRY 0x08023c10 : FUN_08023c10 */

void FUN_08023c10(void)

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
      FUN_0800eb4c(7);
      DAT_200030de = DAT_200030de | 0x4000;
      DAT_20000160 = 400;
      FUN_08019cdc(7);
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
        FUN_0800eb4c(7);
      }
      DAT_200030de = DAT_200030de | 0x1000;
      DAT_20000168 = 400;
      FUN_08019cdc(6);
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
        FUN_08020a30();
      }
      FUN_08015be4(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030de = DAT_200030de | 4;
      FUN_08019cdc(8);
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
      FUN_08015be4(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030de = DAT_200030de | 8;
      DAT_20000162 = 300;
      FUN_08019cdc(9);
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
      FUN_08015be4(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030de = DAT_200030de | 2;
      DAT_20000166 = 100;
      FUN_08019cdc(10);
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
        FUN_08015be4(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_08019cdc(5);
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
        FUN_0800eb4c(7);
        FUN_08015be4(0x24,(int)diag_MosTemp,0);
        DAT_200030de = DAT_200030de | 0x20;
      }
      DAT_2000016a = 200;
      FUN_08019cdc(0xb);
    }
  }
  if (((DAT_200032b4 & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08015be4(0x1a,0);
    DAT_2000016e = 200;
    FUN_08019cdc(0xd);
  }
  if (((DAT_200032b4 & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08015be4(0x23,0);
    DAT_2000016c = 200;
    FUN_08019cdc(0xc);
  }
  if (DAT_20003156 == '\0') {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002d8 != '\x01') {
        FUN_0800eb4c(7);
      }
      DAT_20000170 = 200;
      FUN_08019cdc(0xe);
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
    FUN_08019cdc(0xf);
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



/* ENTRY 0x080241dc : FUN_080241dc */

undefined8 FUN_080241dc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800ecec(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_08011240(&DAT_40000c00,&local_14);
  FUN_080112ee(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_0800d9a0(&local_18);
  FUN_08010b2c(&DAT_40000c00,1);
  FUN_08010f58(&DAT_40000c00,1);
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT13(local_15,CONCAT12(local_16,CONCAT11(local_17,
                                                  local_18)))));
}



/* ENTRY 0x08024250 : FUN_08024250 */

void FUN_08024250(void)

{
  FUN_080241dc(4000);
  return;
}



/* ENTRY 0x0802425c : FUN_0802425c */

void FUN_0802425c(char *param_1,int param_2)

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



/* ENTRY 0x0802430c : FUN_0802430c */

void FUN_0802430c(void)

{
  DAT_200006b0 = DAT_200006b0 + 1;
  FUN_0801696c(&DAT_200006ac);
  if (DAT_20000638 < 3) {
    DAT_20000638 = DAT_20000638 + 1;
  }
  else {
    DAT_20000638 = '\0';
  }
  FUN_08022880(DAT_20000638,&DAT_20003dac,&DAT_20003dbe);
  return;
}



/* ENTRY 0x0802435c : FUN_0802435c */

undefined4 FUN_0802435c(short *param_1)

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



/* ENTRY 0x0802459c : FUN_0802459c */

undefined4 FUN_0802459c(void)

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



/* ENTRY 0x08024664 : FUN_08024664 */

void FUN_08024664(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000074 = FUN_0800dc5c(0);
  do {
    FUN_08023bfc();
    FUN_0802430c();
    FUN_0800dcb0(DAT_20000074,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0802468c : FUN_0802468c */

void FUN_0802468c(void)

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



/* ENTRY 0x080246e4 : FUN_080246e4 */

void FUN_080246e4(int param_1)

{
  int iVar1;
  
  if ((DAT_20000884 % 0x226 == 200) && (DAT_200031f4 == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_0802472a;
    }
    FUN_080234ec(3);
  }
LAB_0802472a:
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



/* ENTRY 0x080247ac : FUN_080247ac */

void FUN_080247ac(void)

{
  DAT_20000640 = DAT_20000640 + 1;
  FUN_08023130();
  FUN_08010818();
  FUN_0801ff04();
  FUN_0801b3c4();
  return;
}


