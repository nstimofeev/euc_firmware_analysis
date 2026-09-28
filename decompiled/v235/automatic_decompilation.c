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
  (*(code *)0x800816c)(&DAT_080279d8,0x20000000,0x9f0);
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
  FUN_0802017c();
  uVar2 = FUN_0800861a();
  FUN_080081e8();
  FUN_0800862c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_0801088c();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_080279d8,0x20000000,0x9f0);
  return;
}



/* ENTRY 0x0800820c : FUN_0800820c */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0800820c(void)

{
  FUN_0801088c();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_080279d8,0x20000000,0x9f0);
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
  return 0x200077a8200063a8;
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
  FUN_0800e21e();
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
  return &DAT_20006348;
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
  FUN_0801088c();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_080279d8,0x20000000,0x9f0);
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



/* ENTRY 0x0800863c : ADC_irq_vector18 */

void ADC_irq_vector18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0800c350();
    switch(DAT_20000308) {
    case 1:
    case 2:
      FUN_0800c378(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_0800bfe4(&DAT_20003488);
      break;
    case 3:
      DAT_20000379 = FUN_0800c4c8();
      break;
    case 4:
    case 5:
      motor_current_control(DAT_20000308);
      break;
    case 7:
      FUN_0801ae44();
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
    FUN_0800ed28(0x200);
    FUN_0800ed28(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_0800ed28(0x400);
    FUN_0800ed28(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_0800ed28(0x8000);
  FUN_0800ed28(0x8000,0);
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
  
  iVar5 = FUN_08009158(*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0x8c) = iVar5 + *(int *)(param_1 + 0x40);
  iVar5 = FUN_08009158(*(undefined4 *)(param_1 + 0x38));
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
  iVar5 = FUN_0800ff24(*piVar1);
  iVar6 = FUN_0800a5ec(*piVar1);
  iVar7 = FUN_0800ff24(*(undefined4 *)(param_1 + 0xa0));
  iVar8 = FUN_0800a5ec(*(undefined4 *)(param_1 + 0xa0));
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
        if (((DAT_2000083e == '\x05') || (0x2b5b < diag_TotalVoltage)) || (diag_BatState != '\x01'))
        {
          if (((byte)DAT_200030da & 1) != 0) {
            DAT_2000083e = '\x05';
            DAT_20000840 = 0;
            DAT_20000844 = 0;
            FUN_08020720(0);
          }
        }
        else {
          DAT_2000083e = '\x06';
          DAT_20000840 = 0;
          DAT_20000844 = 0;
          diag_AgeChgflg = 1;
          FUN_08020720(0);
        }
      }
      else {
        DAT_2000083e = '\x05';
        DAT_20000840 = 0;
        DAT_20000844 = 0;
        FUN_08020720(0);
        DAT_422101b0 = 0;
      }
      diag_AgeStepShow = DAT_2000083e;
      switch(DAT_2000083e) {
      case '\0':
        DAT_20000840 = 0;
        DAT_2000083e = '\x01';
        DAT_20000844 = 0;
        break;
      case '\x01':
        if (DAT_20003181 == '\x01') {
          iVar1 = FUN_0801ed98();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000718 == 0)) {
            DAT_20000840 = 1;
            DAT_2000083e = '\x02';
            DAT_20000844 = 0;
            FUN_08020720(4,1);
          }
        }
        DAT_200006db = 2;
        break;
      case '\x02':
        iVar1 = FUN_0801ed98();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000718 == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_20000844 < 0xbb9)) ||
             (DAT_20000844 < 0x65)) {
            if (DAT_20000840 < 0x9c4) {
              DAT_20000840 = DAT_20000840 + 10;
              FUN_08020720(4,(int)DAT_20000840);
            }
          }
          else {
            DAT_20000840 = 0;
            DAT_2000083e = '\x03';
            FUN_08020720(0);
          }
        }
        else {
          DAT_20000840 = 0;
          DAT_2000083e = '\x01';
          FUN_08020720(0);
        }
        DAT_200006db = 1;
        break;
      case '\x03':
        if (DAT_20003181 == '\x01') {
          iVar1 = FUN_0801ed98();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000718 == 0)) {
            DAT_20000840 = 1;
            DAT_2000083e = '\x04';
            DAT_20000844 = 0;
            FUN_08020720(0,1);
          }
        }
        DAT_200006db = 2;
        break;
      case '\x04':
        iVar1 = FUN_0801ed98();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_2000071c == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_20000844)) ||
             (2999 < DAT_20000844)) {
            DAT_20000840 = 0;
            DAT_2000083e = '\x01';
            FUN_08020720(0);
          }
          else if (DAT_20000840 < 30000) {
            DAT_20000840 = DAT_20000840 + 100;
            FUN_08020720(0,(int)DAT_20000840);
          }
        }
        else {
          DAT_20000840 = 0;
          DAT_2000083e = '\x03';
          FUN_08020720(0);
        }
        DAT_200006db = 2;
        break;
      case '\x05':
        break;
      case '\x06':
        if ((diag_TotalVoltage < 0x2ee1) && (diag_BatState != '\0')) {
          DAT_20000844 = 0;
        }
        else if (DAT_20000844 < 0x15) {
          DAT_20000844 = DAT_20000844 + 1;
        }
        else {
          DAT_20000840 = 0;
          DAT_2000083e = '\x01';
          diag_AgeChgflg = 0;
          FUN_08020720(0);
        }
        DAT_200006db = 2;
      }
      DAT_20000844 = DAT_20000844 + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030f0 % 10 == 5) {
        FUN_08023100(1);
      }
      DAT_200006db = 0;
      diag_AgeChgflg = 0;
      FUN_08020720(0);
      DAT_2000083e = '\0';
    }
  }
  return;
}



/* ENTRY 0x08009158 : FUN_08009158 */

int FUN_08009158(int param_1)

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
      iVar3 = (*(int *)(&DAT_08025388 + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_08025388 + extraout_r3 * 4) * iVar3;
    }
  }
  return iVar3;
}



/* ENTRY 0x080091ec : FUN_080091ec */

void FUN_080091ec(void)

{
  FUN_0800ed40(1);
  FUN_0800ed40(0);
  return;
}



/* ENTRY 0x080091fe : FUN_080091fe */

undefined2 FUN_080091fe(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x0800920a : FUN_0800920a */

void FUN_0800920a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x08009218 : FUN_08009218 */

void FUN_08009218(void)

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
  DAT_200009b4 = DAT_200009b4 + 1;
  uVar8 = DAT_200009b4 & 1;
  uVar9 = DAT_200009b4 & 1;
  uVar3 = DAT_200009b4 & 1;
  uVar4 = DAT_200009b4 & 1;
  uVar5 = DAT_200009b4 & 1;
  uVar7 = DAT_200009b4 & 1;
  if ((DAT_200049f3 == '\0') && (DAT_200049ef == '\0')) {
    DAT_2000314f = DAT_2000314f & 0xef;
  }
  else {
    DAT_2000314f = DAT_2000314f | 0x10;
  }
  if ((DAT_20004bb3 == '\0') && (DAT_20004baf == '\0')) {
    DAT_2000314f = DAT_2000314f & 0xdf;
  }
  else {
    DAT_2000314f = DAT_2000314f | 0x20;
  }
  if (DAT_200009b8 != 0) {
    DAT_200009b8 = DAT_200009b8 + -1;
  }
  if (DAT_200009b8 == 0) {
    DAT_2000314f = DAT_2000314f & 0xbf;
  }
  else {
    DAT_2000314f = DAT_2000314f | 0x40;
  }
  if ((DAT_200049ee < 0x15) && (DAT_20004bae < 0x15)) {
    DAT_200030da = DAT_200030da & 0xfbff;
    DAT_2000314f = DAT_2000314f & 0x7f;
  }
  else {
    DAT_200030da = DAT_200030da | 0x400;
    DAT_2000314f = DAT_2000314f | 0x80;
  }
  DAT_20003151 = 0x32 < DAT_200049f4;
  if (0x32 < DAT_20004bb4) {
    DAT_20003151 = DAT_20003151 | 2;
  }
  if (((((DAT_20004b7f & 0xea) == 0 || (int)(DAT_20004b7f & 0xea) < 0) &&
       ((DAT_20004b83 & 0x70) == 0 || (int)(DAT_20004b83 & 0x70) < 0)) &&
      ((DAT_20004d3f & 0xea) == 0 || (int)(DAT_20004d3f & 0xea) < 0)) &&
     ((DAT_20004d43 & 0x70) == 0)) {
    DAT_20003152 = '\0';
    DAT_2000314f = DAT_2000314f & 0xfe;
  }
  else {
    DAT_20003152 = '\x01';
    DAT_2000314f = DAT_2000314f | 1;
  }
  if ((((((DAT_20004b7f & 0x15) == 0 || (int)(DAT_20004b7f & 0x15) < 0) &&
        ((DAT_20004b80 & 0x7f) == 0 || (int)(DAT_20004b80 & 0x7f) < 0)) &&
       (((DAT_20004b83 & 0xf) == 0 || (int)(DAT_20004b83 & 0xf) < 0 &&
        (((DAT_20004d3f & 0x15) == 0 || (int)(DAT_20004d3f & 0x15) < 0 &&
         ((DAT_20004d40 & 0x7f) == 0 || (int)(DAT_20004d40 & 0x7f) < 0)))))) &&
      ((DAT_20004d43 & 0xf) == 0 || (int)(DAT_20004d43 & 0xf) < 0)) &&
     ((((DAT_20004b8c & 0x80) == 0 || (int)(DAT_20004b8c & 0x80) < 0 &&
       ((DAT_20004d4c & 0x80) == 0 || (int)(DAT_20004d4c & 0x80) < 0)) && (DAT_20003152 != '\x01')))
     ) {
    DAT_200030da = DAT_200030da & 0xfdff;
  }
  else {
    DAT_200030da = DAT_200030da | 0x200;
  }
  if ((((DAT_20004b8c & 0x7f) == 0 || (int)(DAT_20004b8c & 0x7f) < 0) && (DAT_20004b8d == 0)) &&
     (((DAT_20004d4c & 0x7f) == 0 || (int)(DAT_20004d4c & 0x7f) < 0 && (DAT_20004d4d == 0)))) {
    DAT_20003153 = 0;
  }
  else {
    DAT_20003153 = 1;
  }
  if ((((DAT_20004b80 & 1) == 0) && ((DAT_20004d40 & 1) == 0)) &&
     (((DAT_20004b83 & 1) == 0 && ((DAT_20004d43 & 1) == 0)))) {
    if ((DAT_20003154 != 0) && (DAT_20003154 < 10)) {
      DAT_20003154 = DAT_20003154 - 1;
    }
  }
  else if (DAT_20003154 < 0x14) {
    DAT_20003154 = DAT_20003154 + 1;
  }
  if (((DAT_20004b7f & 1) == 0) && ((DAT_20004d3f & 1) == 0)) {
    if ((DAT_20003155 != 0) && (DAT_20003155 < 10)) {
      DAT_20003155 = DAT_20003155 - 1;
    }
  }
  else if (DAT_20003155 < 0x14) {
    DAT_20003155 = DAT_20003155 + 1;
  }
  DAT_20003164 = DAT_20003164 | DAT_20004b7f;
  DAT_20003165 = DAT_20004b80 | DAT_20003165;
  DAT_20003168 = DAT_20004b83 | DAT_20003168;
  DAT_20003169 = DAT_20003169 | DAT_20004d3f;
  DAT_2000316a = DAT_2000316a | DAT_20004d40;
  DAT_2000316d = DAT_2000316d | DAT_20004d43;
  DAT_2000316e = DAT_2000316e | DAT_20004b8c & 0x3f;
  DAT_2000316f = DAT_2000316f | DAT_20004b8d;
  DAT_20003170 = DAT_20004d4c & 0x3f | DAT_20003170;
  DAT_20003171 = DAT_20003171 | DAT_20004d4d;
  if (DAT_200009bc != 0) {
    if (2 < DAT_200009bc) {
      return;
    }
    uVar10 = FUN_08017058(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_20004ba8 = DAT_20004ba8 + 1;
      FUN_08009d90(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d68 = DAT_20004d68 + 1;
      FUN_08009df0(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
    }
    DAT_200009bc = DAT_200009bc + 1;
    return;
  }
  if ((&DAT_200049ef)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_200049f3)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_08018d60(uVar7);
      if (iVar6 == 0) {
        (&DAT_200049f3)[uVar7 * 0x1c0] = (&DAT_200049f3)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_200009c0 & 3) != 2) {
        DAT_200009c0 = DAT_200009c0 + 1;
        return;
      }
      uVar8 = (uint)(DAT_200049f8 * 100) / ((uint)DAT_200009c4 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004bb8 * 100) / ((uint)DAT_200009c4 * 0xc) & 0xff;
      DAT_200009c0 = DAT_200009c0 + 1;
      FUN_080168e0(uVar8,uVar9);
      DAT_20003150 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_200049f0)[uVar7 * 0x1c0] != -0x50) || ((&DAT_200049f1)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_200049ef)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_200049ef)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_08017698(uVar7);
      }
      else {
        (&DAT_200049f0)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_200049f1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_08016ba8(uVar7);
      }
      if (uVar9 == 0) {
        DAT_20004ba8 = DAT_20004ba8 + 1;
        FUN_08009d90(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004d68 = DAT_20004d68 + 1;
        FUN_08009df0(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_200049ef)[uVar7 * 0x1c0] = (&DAT_200049ef)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_200049ef)[uVar7 * 0x1c0] = 0;
    (&DAT_200049f3)[uVar7 * 0x1c0] = 0x32;
    (&DAT_200049f8)[uVar7 * 0x70] = 0;
    (&DAT_200049f5)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_200049ed)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049ee)[uVar7 * 0x1c0] = 0;
    (&DAT_200049f4)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_200049ee)[uVar7 * 0x1c0] < 4) {
      (&DAT_200049ee)[uVar7 * 0x1c0] = (&DAT_200049ee)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_200049ee)[uVar7 * 0x1c0] < 200) {
      (&DAT_200049ee)[uVar7 * 0x1c0] = (&DAT_200049ee)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_200009b4 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_200049ee)[uVar7 * 0x1c0]) {
      if ((DAT_200009b4 & 0x3f) >> 1 == 0) {
        if ((&DAT_200049f4)[uVar7 * 0x1c0] != '\0') {
          (&DAT_200049f4)[uVar7 * 0x1c0] = (&DAT_200049f4)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_200049f0)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_200049f1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_08016bf0(uVar7);
        if (uVar3 == 0) {
          DAT_20004ba8 = DAT_20004ba8 + 1;
          FUN_08009d90(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004d68 = DAT_20004d68 + 1;
        FUN_08009df0(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_200049f0)[uVar7 * 0x1c0] == -0x45) && ((&DAT_200049f1)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_200049f4)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_20004b8e)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049fc)[uVar7 * 0x1c0] = (&DAT_200049fc)[uVar7 * 0x1c0] + '\x01';
    (&DAT_200049fc)[uVar7 * 0x1c0] = (&DAT_200049fc)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_200049fc)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_200049ed)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_08016f54(uVar7,0xc1,&DAT_200049ec,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_200049ed)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_08016f54(uVar7,0xc2,&DAT_200049ec,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_200049ed)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_08017058(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_200049ed)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_20003181 == '\x01') || (iVar6 = FUN_0801f0c4(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_080171a4(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_20004ba8 = DAT_20004ba8 + 1;
      FUN_08009d90(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d68 = DAT_20004d68 + 1;
      FUN_08009df0(&DAT_200049fd + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_20004b8e)[uVar7 * 0x1c0];
    (&DAT_20004b8e)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_08017348(uVar7,0,uVar2,(&DAT_20004aed)[uVar7 * 0x1c0],&DAT_20004ad5 + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_200049ed)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_20004ba8 = DAT_20004ba8 + 1;
        FUN_08009d90(&DAT_200049fd + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004d68 = DAT_20004d68 + 1;
        FUN_08009df0(&DAT_200049fd + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x08009b88 : FUN_08009b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08009b88(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a520();
  if (iVar1 != 0) {
    FUN_0801e7b0();
    iVar1 = FUN_08020090();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0801bf9c();
      iVar1 = FUN_0800cb54();
      if (iVar1 == 0) {
        DAT_200032b0 = DAT_200032b0 | 0x40;
      }
      FUN_0802065c();
      FUN_08016444(0);
    }
    else {
      FUN_08016444(0);
    }
    iVar1 = FUN_0800c8b4();
    if (iVar1 == 2) {
      FUN_08021f54();
    }
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    if ((DAT_20000094 & 0x80000000) != 0) {
      DAT_20000094 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    DAT_20003138 = DAT_20000094;
    FUN_08021ddc();
    FUN_08009c70();
    FUN_0801f690();
    FUN_0802310c();
    FUN_0800cf2c();
    FUN_08011974(0x1c200);
    FUN_0801766c();
    FUN_080195a4();
    FUN_0800ecc8(0x40,1);
    FUN_08023e64();
    FUN_08021f80();
    return 1;
  }
  return 0;
}



/* ENTRY 0x08009c58 : FUN_08009c58 */

void FUN_08009c58(void)

{
  FUN_0800da1c(0x8000000);
  FUN_0800da08(0x300);
  return;
}



/* ENTRY 0x08009c70 : FUN_08009c70 */

void FUN_08009c70(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(8,1);
  local_8 = 0x28031000;
  FUN_0800b9b4(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08009c9c : FUN_08009c9c */

void FUN_08009c9c(void)

{
  int iVar1;
  
  if (DAT_200006da < 5) {
    if (diag_TotalVoltage < 0x2454) {
      DAT_200006da = 2;
    }
    else {
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 500) {
          DAT_200006da = 3;
          return;
        }
      }
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if ((500 < iVar1) && (diag_TotalCurrent < -0x32)) {
          DAT_200006da = 4;
          return;
        }
      }
      DAT_200006da = diag_BatState;
    }
  }
  return;
}



/* ENTRY 0x08009d2c : FUN_08009d2c */

undefined4 FUN_08009d2c(int param_1,uint param_2)

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
      (&DAT_200037c4)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a7e4(0x2000);
    FUN_0800a7fc(&DAT_40020044,0);
    FUN_0800a99e(&DAT_40020044,uVar2);
    FUN_0800a7fc(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009d90 : FUN_08009d90 */

undefined4 FUN_08009d90(int param_1,uint param_2)

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
      (&DAT_20003928)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a7e4(0x20);
    FUN_0800a7fc(&DAT_4002001c,0);
    FUN_0800a99e(&DAT_4002001c,uVar2);
    FUN_0800a7fc(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009df0 : FUN_08009df0 */

undefined4 FUN_08009df0(int param_1,uint param_2)

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
      (&DAT_20003ae8)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_0800a7e4(0x10020000);
    FUN_0800a7fc(&DAT_40020458,0);
    FUN_0800a99e(&DAT_40020458,uVar2);
    FUN_0800a7fc(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009e54 : FUN_08009e54 */

void FUN_08009e54(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000006c = FUN_0800dc54(0);
  do {
    FUN_0800cf5c();
    FUN_080206a8();
    FUN_0800dca8(DAT_2000006c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009e7c : FUN_08009e7c */

void FUN_08009e7c(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_0800dc54(0);
  FUN_0800fdc0();
  do {
    FUN_080164ec();
    FUN_0800d74c();
    FUN_0800dca8(DAT_20000068,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009ea8 : FUN_08009ea8 */

void FUN_08009ea8(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000070 = FUN_0800dc54(0);
  do {
    FUN_0800a0bc();
    update_power_energy_limits();
    FUN_0801b8c4();
    FUN_08020874();
    FUN_080243c0();
    FUN_0800dca8(DAT_20000070,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08009edc : FUN_08009edc */

void FUN_08009edc(void)

{
  FUN_0800eb5c(3);
  FUN_0800eca8(&DAT_40012c00);
  return;
}



/* ENTRY 0x08009ef0 : FUN_08009ef0 */

undefined4 FUN_08009ef0(void)

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
  FUN_0800e220(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800cc54(&local_64);
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
    FUN_0800e220(1);
  }
  DAT_200033f0 = FUN_0800840e(local_38,local_34,sVar1,0);
  DAT_200033f4 = FUN_0800840e(local_40,local_3c,sVar1,0);
  DAT_200033f8 = FUN_0800840e(local_48,local_44,sVar1,0);
  DAT_200033fc = FUN_0800840e(uVar3,iVar4,sVar1,0);
  DAT_20003400 = FUN_0800840e(uVar5,iVar6,sVar1,0);
  DAT_20003404 = FUN_0800840e(local_30,local_2c,sVar1,0);
  iVar4 = DAT_200033f0;
  if (DAT_200033f0 < 0) {
    iVar4 = -DAT_200033f0;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_200033f4;
    if (DAT_200033f4 < 0) {
      iVar4 = -DAT_200033f4;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_200033f8;
      if (DAT_200033f8 < 0) {
        iVar4 = -DAT_200033f8;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_200033fc;
        if (DAT_200033fc < 0) {
          iVar4 = -DAT_200033fc;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_20003400;
          if (DAT_20003400 < 0) {
            iVar4 = -DAT_20003400;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_20003404;
            if (DAT_20003404 < 0) {
              iVar4 = -DAT_20003404;
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



/* ENTRY 0x0800a0a8 : FUN_0800a0a8 */

void FUN_0800a0a8(void)

{
  FUN_0800eb5c(7);
  FUN_0800eca8(&DAT_40012c00);
  return;
}



/* ENTRY 0x0800a0bc : FUN_0800a0bc */

void FUN_0800a0bc(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_200030f0 = DAT_200030f0 + 1;
  if (DAT_200030f0 % 0x32 == 0x19) {
    DAT_2000310c = DAT_2000310c + 1;
    DAT_20003114 = DAT_20003110 + DAT_2000310c;
  }
  if (DAT_20003183 != '\0') {
    DAT_20003183 = DAT_20003183 + -1;
  }
  FUN_0801f6bc();
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
        FUN_08023100();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    DAT_20003120 = 0x3200;
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000611 * 1000;
    FUN_08019a74(1);
    diag_cartstep = '\x02';
    DAT_20003183 = -6;
    break;
  case '\x02':
    DAT_2000312d = (undefined1)diag_MosTemp;
    DAT_20003128 = FUN_0800f034();
    DAT_200032b2 = DAT_200032b2 | 0x45;
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
          iVar3 = FUN_08022268();
          if (iVar3 == 0) {
            FUN_08023100(4);
          }
          else {
            FUN_080230f4(1);
            FUN_0801b820();
          }
        }
        else {
          DAT_20000146 = DAT_20000146 + 1;
          if (100 < DAT_20000146) {
            diag_cartstep = '\x06';
          }
        }
      }
      else if (DAT_200030f0 % 200 == 0) {
        FUN_08023100(4);
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
      FUN_0800da30();
    }
    DAT_20000148 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_2000014a == 2) {
      DAT_20003180 = DAT_20003180 | 1;
      FUN_08019a74(0xf0);
      FUN_080196e8(0xf0);
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
          FUN_0800da30();
        }
        uVar2 = DAT_2000014a + 1;
        bVar1 = 5 < DAT_2000014a;
        DAT_2000014a = uVar2;
        if (bVar1) {
          FUN_08020688();
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
  iVar3 = FUN_0801f868();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_08023100(1);
      diag_cartstep = '\b';
      DAT_20003157 = 1;
    }
  }
  DAT_200030f4 = DAT_200030f4 + 1;
  if (((DAT_20003181 == '\0') || (diag_BatState == '\x01')) || ((DAT_2000314f & 0x70) != 0)) {
    DAT_200030f4 = 0;
  }
  if ((DAT_20003182 == '\x01') && (10 < DAT_200030f4)) {
    DAT_200030f4 = DAT_200030f4 - 5;
  }
  if (DAT_200030f8 + 300 < DAT_200030f4) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_20003157 = 1;
        FUN_08023100();
        diag_cartstep = '\b';
        DAT_200030f4 = 0;
      }
    }
  }
  else if ((DAT_200030f8 < DAT_200030f4) && (DAT_200030f0 % 0x32 == 0x19)) {
    FUN_08023100(1);
  }
  if (DAT_200030f0 % 0x96 == 0x91) {
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
    DAT_200030f4 = 0;
    DAT_2000014e = '\0';
    DAT_2000014d = '\0';
    DAT_2000014c = '\0';
  }
  diag_LimitSpeed = (uint)DAT_20000611 * 1000;
  FUN_08023478();
  FUN_08023824();
  FUN_0801e8ec();
  FUN_080209dc();
  FUN_0801adcc();
  if (DAT_2000330e != '\0') {
    FUN_08023100(DAT_2000330e);
    DAT_2000330e = '\0';
  }
  if (DAT_2000330f != '\0') {
    FUN_080230f4(DAT_2000330f);
    DAT_2000330f = '\0';
  }
  return;
}



/* ENTRY 0x0800a520 : FUN_0800a520 */

bool FUN_0800a520(void)

{
  int local_18 [5];
  
  FUN_0800ed4c(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a544 : FUN_0800a544 */

void FUN_0800a544(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_0802671c + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_0802671c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_0802671c + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_0802671c + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_0802671c + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_0802671c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_0802671c + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_0802671c + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x0800a5ec : FUN_0800a5ec */

undefined4 FUN_0800a5ec(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0800ff8c(0x1000);
  FUN_0800ff24(param_1);
  iVar2 = FUN_0800ff8c();
  uVar3 = FUN_0800ff9e(iVar1 - iVar2);
  return uVar3;
}



/* ENTRY 0x0800a61c : FUN_0800a61c */

void FUN_0800a61c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x20);
  if (iVar2 != 0) {
    FUN_0800a7e4(0x20);
    FUN_0800a7fc(&DAT_4002001c,0);
    FUN_0800d980();
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a65c : FUN_0800a65c */

void FUN_0800a65c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a91c(0x200);
    if (iVar2 != 0) {
      FUN_0800a7e4(0x200);
    }
  }
  else {
    FUN_0800a7e4(0x400);
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a6a4 : FUN_0800a6a4 */

void FUN_0800a6a4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x2000);
  if (iVar2 != 0) {
    FUN_0800a7e4(0x2000);
    FUN_0800a7fc(&DAT_40020044,0);
    FUN_0800d974();
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a6e8 : FUN_0800a6e8 */

void FUN_0800a6e8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a91c(0x20000);
    if (iVar2 != 0) {
      FUN_0800a7e4(0x20000);
    }
  }
  else {
    FUN_0800a7e4(0x40000);
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a730 : FUN_0800a730 */

void FUN_0800a730(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a91c(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_200009ae = 0;
    FUN_0800a7e4(0x10000002);
  }
  return;
}



/* ENTRY 0x0800a758 : FUN_0800a758 */

void FUN_0800a758(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_0800a91c(0x10000200);
    if (iVar2 != 0) {
      FUN_0800a7e4(0x10000200);
    }
  }
  else {
    FUN_0800a7e4(0x10000400);
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a7a0 : FUN_0800a7a0 */

void FUN_0800a7a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_0800a91c(0x10020000);
  if (iVar2 != 0) {
    FUN_0800a7e4(0x10020000);
    FUN_0800a7fc(&DAT_40020458,0);
    FUN_0800d98c();
  }
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800a7e4 : FUN_0800a7e4 */

void FUN_0800a7e4(uint param_1)

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



/* ENTRY 0x0800a7fc : FUN_0800a7fc */

void FUN_0800a7fc(uint *param_1,int param_2)

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



/* ENTRY 0x0800a810 : FUN_0800a810 */

void FUN_0800a810(uint *param_1)

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



/* ENTRY 0x0800a914 : FUN_0800a914 */

uint FUN_0800a914(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x0800a91c : FUN_0800a91c */

bool FUN_0800a91c(uint param_1)

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



/* ENTRY 0x0800a93c : FUN_0800a93c */

void FUN_0800a93c(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x0800a94c : FUN_0800a94c */

void FUN_0800a94c(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x0800a99e : FUN_0800a99e */

void FUN_0800a99e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x0800a9a2 : FUN_0800a9a2 */

void FUN_0800a9a2(undefined4 *param_1)

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



/* ENTRY 0x0800a9bc : FUN_0800a9bc */

void FUN_0800a9bc(void)

{
  FUN_0800eb5c(5);
  return;
}



/* ENTRY 0x0800a9c8 : FUN_0800a9c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800a9c8(int param_1)

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



/* ENTRY 0x0800aa20 : FUN_0800aa20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800aa20(int param_1)

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



/* ENTRY 0x0800aacc : FUN_0800aacc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800aacc(int param_1)

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



/* ENTRY 0x0800ab78 : FUN_0800ab78 */

int FUN_0800ab78(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a0(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f0(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a0(&DAT_0803b800);
  }
  return iVar1;
}



/* ENTRY 0x0800abb4 : FUN_0800abb4 */

int FUN_0800abb4(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a0(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f0(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a0(&DAT_0803e800);
  }
  return iVar1;
}



/* ENTRY 0x0800abf0 : FUN_0800abf0 */

int FUN_0800abf0(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b3a0(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_0800b3f0(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_0800b3a0(&DAT_0803f800);
  }
  return iVar1;
}



/* ENTRY 0x0800ac2c : FUN_0800ac2c */

int FUN_0800ac2c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800aa20(0);
  if (iVar1 != 0xab) {
    for (DAT_2000013c = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_2000013c <= (short *)((iVar1 + 1) * 0x800 + 0x803dfeb) && (*DAT_2000013c != -1));
        DAT_2000013c = DAT_2000013c + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ac8c : FUN_0800ac8c */

int FUN_0800ac8c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800aacc(0);
  if (iVar1 != 0xab) {
    for (DAT_20000140 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000140 <= (short *)((iVar1 + 1) * 0x800 + 0x803efeb) && (*DAT_20000140 != -1));
        DAT_20000140 = DAT_20000140 + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800acec : FUN_0800acec */

undefined4 FUN_0800acec(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08015ca0();
  FUN_0800c080();
  return uVar1;
}



/* ENTRY 0x0800acfc : FUN_0800acfc */

undefined4 FUN_0800acfc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar1 = FUN_0800ac2c();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_08015e98();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ac2c();
  }
  FUN_0800b3e0();
  return uVar3;
}



/* ENTRY 0x0800ad34 : FUN_0800ad34 */

undefined4 FUN_0800ad34(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar1 = FUN_0800ac8c();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_080160d0();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ac8c();
  }
  FUN_0800b3e0();
  return uVar3;
}



/* ENTRY 0x0800ad6c : FUN_0800ad6c */

int FUN_0800ad6c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800a9c8(0);
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
  iVar1 = FUN_0800b3f0(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800c080();
    iVar1 = FUN_0800b0c8(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_200000a6)[uVar2] != param_1) &&
            (iVar1 = FUN_0800af94((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0c8((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3a0(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_0800b3f0(puVar3,0);
      }
    }
  }
  return iVar1;
}



/* ENTRY 0x0800ae64 : FUN_0800ae64 */

int FUN_0800ae64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800aa20(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b3f0(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b150(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b3a0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f0(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800ae66 : FUN_0800ae66 */

int FUN_0800ae66(void)

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
  iVar1 = FUN_0800aa20(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_0800b3f0(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b150(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b3a0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f0(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800aefc : FUN_0800aefc */

int FUN_0800aefc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800aacc(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b3f0(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b1e0(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_0800b3a0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f0(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800aefe : FUN_0800aefe */

int FUN_0800aefe(void)

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
  iVar1 = FUN_0800aacc(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_0800b3f0(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b1e0(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_0800b3a0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_0800b3f0(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800af94 : FUN_0800af94 */

int FUN_0800af94(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800a9c8(0);
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



/* ENTRY 0x0800aff8 : FUN_0800aff8 */

int FUN_0800aff8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800aa20(0);
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



/* ENTRY 0x0800b060 : FUN_0800b060 */

int FUN_0800b060(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800aacc(0);
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



/* ENTRY 0x0800b0c8 : FUN_0800b0c8 */

int FUN_0800b0c8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800a9c8(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1)
    {
      if (*DAT_20000138 == -1) {
        iVar1 = FUN_0800b3f0(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_0800b3f0((int)DAT_20000138 + 2,param_1);
        DAT_20000138 = DAT_20000138 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}



/* ENTRY 0x0800b150 : FUN_0800b150 */

int FUN_0800b150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800aa20(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f0(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b152 : FUN_0800b152 */

int FUN_0800b152(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800aa20(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f0(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b1e0 : FUN_0800b1e0 */

int FUN_0800b1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800aacc(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f0(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b1e2 : FUN_0800b1e2 */

int FUN_0800b1e2(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800aacc(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_0800b3f0(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b270 : FUN_0800b270 */

int FUN_0800b270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b0c8(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800ad6c(param_1,param_2);
  }
  return iVar1;
}



/* ENTRY 0x0800b294 : FUN_0800b294 */

int FUN_0800b294(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar2 = FUN_0800b150(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800ae64(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b3e0();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b296 : FUN_0800b296 */

int FUN_0800b296(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar2 = FUN_0800b150(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800ae64(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b3e0();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b2dc : FUN_0800b2dc */

int FUN_0800b2dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar2 = FUN_0800b1e0(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800aefc(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_0800b3e0();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b2de : FUN_0800b2de */

int FUN_0800b2de(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_0800b470();
  FUN_0800b394(0x35);
  iVar2 = FUN_0800b1e0(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800aefc(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_0800b3e0();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b324 : FUN_0800b324 */

uint FUN_0800b324(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800b37e : FUN_0800b37e */

void FUN_0800b37e(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800b394 : FUN_0800b394 */

void FUN_0800b394(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x0800b3a0 : FUN_0800b3a0 */

void FUN_0800b3a0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b488(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_0800b488(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x0800b3e0 : FUN_0800b3e0 */

void FUN_0800b3e0(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x0800b3f0 : FUN_0800b3f0 */

void FUN_0800b3f0(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b488(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_0800b488(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x0800b428 : FUN_0800b428 */

void FUN_0800b428(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b488(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_0800b488(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_0800b488(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x0800b470 : FUN_0800b470 */

void FUN_0800b470(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x0800b488 : FUN_0800b488 */

int FUN_0800b488(int param_1)

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



/* ENTRY 0x0800b4ec : FUN_0800b4ec */

void FUN_0800b4ec(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x0800b520 : FUN_0800b520 */

void FUN_0800b520(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_0800a544(&local_2c,param_4);
  DAT_2000038c = local_2c;
  DAT_20000390 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x0800b580 : FUN_0800b580 */

void FUN_0800b580(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_2000038c * param_3;
  iVar1 = param_2 * DAT_20000390;
  *param_1 = (param_3 * DAT_20000390 + DAT_2000038c * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x0800b5cc : FUN_0800b5cc */

void FUN_0800b5cc(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08026698 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08026698 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x0800b634 : FUN_0800b634 */

int FUN_0800b634(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x0800b6b4 : FUN_0800b6b4 */

void FUN_0800b6b4(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x0800b734 : motor_current_control */

undefined8 motor_current_control(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800c378(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_0800b4ec(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_0800bfe4();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000358 = FUN_0800bc14();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000358 = diag_halloffset;
  }
  else {
    DAT_20000358 = DAT_20000358 + 1;
  }
  FUN_0800b520(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000358);
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
    diag_VQ = adaptive_bus_limiter((int)DAT_2000031e);
  }
  else {
    diag_VQ = adaptive_bus_limiter((int)DAT_2000031c);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_0800f234();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_0800b634(DAT_2000348c,diag_IDCurrent,&DAT_200034fc);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_0800b5cc();
  FUN_0800b580(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_0800ffcc(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x0800b93c : FUN_0800b93c */

void FUN_0800b93c(void)

{
  DAT_200034d0 = 0x18000;
  DAT_200034d4 = 0x8000;
  DAT_200034d8 = 0x10000;
  FUN_0800b6b4(&DAT_20003534,&DAT_200034fc);
  FUN_0800b998();
  FUN_08010b32(&DAT_40012c00,1);
  FUN_08010b20(&DAT_40012c00,1);
  FUN_0800c690(1);
  FUN_0800eb5c(1);
  return;
}



/* ENTRY 0x0800b998 : FUN_0800b998 */

void FUN_0800b998(void)

{
  setup_motor_timer();
  FUN_0800c6f8();
  FUN_0800c0e4();
  return;
}



/* ENTRY 0x0800b9a8 : FUN_0800b9a8 */

void FUN_0800b9a8(void)

{
  FUN_0800c77c();
  FUN_0800c75c();
  return;
}



/* ENTRY 0x0800b9b4 : FUN_0800b9b4 */

void FUN_0800b9b4(uint *param_1,ushort *param_2)

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



/* ENTRY 0x0800ba62 : FUN_0800ba62 */

undefined8 FUN_0800ba62(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x0800ba74 : FUN_0800ba74 */

void FUN_0800ba74(uint param_1,int param_2)

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



/* ENTRY 0x0800bae0 : FUN_0800bae0 */

bool FUN_0800bae0(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800baee : FUN_0800baee */

void FUN_0800baee(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x0800baf2 : FUN_0800baf2 */

void FUN_0800baf2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x0800baf6 : FUN_0800baf6 */

void FUN_0800baf6(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x0800bb08 : FUN_0800bb08 */

void FUN_0800bb08(void)

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
  
  FUN_0800ed10(0x10,1);
  FUN_0800ece0(2,1);
  FUN_0800ba74(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_0800b9b4(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_0800b9b4(&DAT_40011000,&local_20);
  FUN_08010b60(&DAT_40000400);
  FUN_080112d0(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_08011234(&DAT_40000400,&local_10);
  FUN_08010f3c(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08010d90(&DAT_40000400,&local_1c);
  FUN_08011198(&DAT_40000400,400,1);
  FUN_08010f5c(&DAT_40000400);
  FUN_0801119e(&DAT_40000400,1);
  FUN_080111b0(&DAT_40000400,0x40);
  FUN_08011220(&DAT_40000400,4);
  FUN_080112f4(&DAT_40000400,1);
  FUN_08010b14(&DAT_40000400,0x1e5f);
  FUN_08011230(&DAT_40000400,0);
  FUN_08010b20(&DAT_40000400,1);
  return;
}



/* ENTRY 0x0800bc0c : FUN_0800bc0c */

void FUN_0800bc0c(void)

{
  FUN_0800bb08();
  return;
}



/* ENTRY 0x0800bc14 : FUN_0800bc14 */

int FUN_0800bc14(void)

{
  return (int)diag_motor_egdir * (DAT_200005ac + diag_halloffset);
}



/* ENTRY 0x0800bc38 : FUN_0800bc38 */

byte FUN_0800bc38(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_0800bae0(&DAT_40011000,0x40);
  cVar2 = FUN_0800bae0(&DAT_40011000,0x80);
  cVar3 = FUN_0800bae0(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x0800bc78 : FUN_0800bc78 */

void FUN_0800bc78(int param_1,int param_2,int param_3,int param_4,int param_5)

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
        goto LAB_0800bd08;
      }
    }
  }
  DAT_200005d7 = 0;
LAB_0800bd08:
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



/* ENTRY 0x0800bd68 : FUN_0800bd68 */

void FUN_0800bd68(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (diag_cartstep != '\0') {
    if (DAT_200006a0 == '\0') {
      uVar1 = DAT_4221012c;
      DAT_20000712 = (char)uVar1;
      DAT_20000713 = '\0';
      DAT_20000714 = 0xc;
    }
    DAT_20000712 = DAT_20000712 == '\0';
    DAT_20000713 = DAT_20000713 == '\0';
    if ((((bool)DAT_20000712) && ((bool)DAT_20000713)) || (DAT_20003236 == 0)) {
      if (DAT_20000848 != 0) {
        DAT_20000848 = DAT_20000848 - 1;
      }
    }
    else if (DAT_20000848 < DAT_20000714) {
      DAT_20000848 = DAT_20000848 + 1;
    }
    if (DAT_2000084a != '\0') {
      if (DAT_20000848 == DAT_20000714) {
        DAT_200030da = DAT_200030da | 0x8000;
      }
      else if (DAT_20000848 == 0) {
        DAT_2000084a = '\0';
        DAT_200030da = DAT_200030da & 0x7fff;
      }
    }
    if ((((uint)DAT_20000714 << 1) / 3 < (uint)DAT_20000848) && (DAT_20000849 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000718 == 0) {
          FUN_08023100(1);
          DAT_20000718 = 1;
        }
      }
      else {
        DAT_20000849 = '\x01';
      }
      DAT_2000071c = 1;
    }
    else if ((uint)DAT_20000848 < DAT_20000714 / 3) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000718 == 1) {
          FUN_08023100(2);
          DAT_20000718 = 0;
        }
        DAT_20000849 = '\0';
      }
      DAT_2000071c = 0;
    }
  }
  return;
}



/* ENTRY 0x0800bef4 : FUN_0800bef4 */

void FUN_0800bef4(void)

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



/* ENTRY 0x0800bf08 : FUN_0800bf08 */

void FUN_0800bf08(uint param_1,char *param_2)

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



/* ENTRY 0x0800bf4c : FUN_0800bf4c */

void FUN_0800bf4c(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x0800bf5c : FUN_0800bf5c */

void FUN_0800bf5c(undefined4 param_1,undefined4 param_2)

{
  FUN_0800bfa8(0x5555);
  FUN_0800bf90(param_1);
  FUN_0800bf9c(param_2);
  FUN_0800bf80();
  FUN_0800bf4c();
  return;
}



/* ENTRY 0x0800bf80 : FUN_0800bf80 */

void FUN_0800bf80(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x0800bf90 : FUN_0800bf90 */

void FUN_0800bf90(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x0800bf9c : FUN_0800bf9c */

void FUN_0800bf9c(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x0800bfa8 : FUN_0800bfa8 */

void FUN_0800bfa8(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x0800bfb4 : FUN_0800bfb4 */

void FUN_0800bfb4(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800eb5c(2);
  return;
}



/* ENTRY 0x0800bfcc : FUN_0800bfcc */

void FUN_0800bfcc(void)

{
  FUN_08008582(&diag_IA,0x38);
  FUN_0800eb5c(1);
  return;
}



/* ENTRY 0x0800bfe4 : FUN_0800bfe4 */

void FUN_0800bfe4(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0801f210();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005cc == 0) || (0x7ff < uVar3)) {
    DAT_200005c8 = 0;
    DAT_200005cc = 0;
    iVar2 = FUN_0800bc38();
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



/* ENTRY 0x0800c080 : FUN_0800c080 */

undefined4 FUN_0800c080(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800a9c8(1);
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



/* ENTRY 0x0800c0e4 : FUN_0800c0e4 */

void FUN_0800c0e4(void)

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
  
  FUN_0800ecb4(0x8000);
  FUN_0800ed10(0x15,1);
  FUN_0800ed10(0x600,1);
  FUN_0800baf6(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40010800,&local_24);
  FUN_0800baf6(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_0800b9b4(&DAT_40011000,&local_24);
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
  FUN_0800c790();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_0800d998(&local_20);
  FUN_08008922(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x0800c350 : FUN_0800c350 */

void FUN_0800c350(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x0800c364 : FUN_0800c364 */

void FUN_0800c364(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x0800c378 : FUN_0800c378 */

void FUN_0800c378(int *param_1)

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
    local_8 = DAT_200034e0 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_200034e4) - local_8;
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
    local_c = DAT_200034dc + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_200034e4) - local_c;
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
    local_c = DAT_200034dc + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_200034e0 + iVar1 * -2;
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



/* ENTRY 0x0800c4c8 : FUN_0800c4c8 */

undefined4 FUN_0800c4c8(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_20000380 == '\0') {
    DAT_200034dc = 0;
    DAT_200034e0 = 0;
    DAT_200034e4 = 0;
    DAT_20000370 = DAT_200034d0;
    DAT_20000374 = DAT_200034d4;
    bVar1 = 0x500 < DAT_20000384;
    DAT_20000384 = DAT_20000384 + 1;
    if (bVar1) {
      DAT_20000384 = 0;
      DAT_20000380 = '\x01';
    }
  }
  else if (DAT_20000380 == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_200034dc = DAT_200034dc + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_200034e0 = DAT_200034e0 + iVar2 * 2;
    DAT_2000037c = DAT_2000037c + ((int)(uint)DAT_200034ec >> 4);
    DAT_20000384 = DAT_20000384 + 1;
    if (DAT_20000384 == 0x40) {
      DAT_200034dc = (int)(DAT_200034dc + ((uint)(DAT_200034dc >> 0x1f) >> 0x1a)) >> 6;
      DAT_200034e0 = (int)(DAT_200034e0 + ((uint)(DAT_200034e0 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000380 = '\x02';
      DAT_20000381 = '\x01';
    }
  }
  if (DAT_20000381 == '\x01') {
    DAT_20000384 = 0;
    DAT_20000374 = DAT_200034d8;
    DAT_20000381 = '\x02';
  }
  else if (DAT_20000381 == '\x02') {
    iVar2 = DAT_40012840;
    DAT_200034e4 = DAT_200034e4 + iVar2 * 2;
    DAT_2000037c = DAT_2000037c + ((int)(uint)DAT_200034ec >> 4);
    DAT_20000384 = DAT_20000384 + 1;
    if (DAT_20000384 == 0x40) {
      DAT_200034e4 = (int)(DAT_200034e4 + ((uint)(DAT_200034e4 >> 0x1f) >> 0x1a)) >> 6;
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
    if ((((0x8f9f < DAT_200034dc) || (0x8f9f < DAT_200034e0)) || (0x8f9f < DAT_200034e4)) ||
       (((DAT_200034dc < 0x705f || (DAT_200034e0 < 0x705f)) || (DAT_200034e4 < 0x705f)))) {
      DAT_20000330 = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x0800c690 : FUN_0800c690 */

void FUN_0800c690(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_0800ba74(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08010b14(&DAT_40012c00,1);
    FUN_08010f4c(&DAT_40012c00,1);
  }
  else {
    FUN_08010f4c(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x0800c6f8 : FUN_0800c6f8 */

void FUN_0800c6f8(void)

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
  
  FUN_0800ecc8(1);
  FUN_0800a810(&DAT_40020008);
  FUN_0800a9a2(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_200034e8;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_0800a94c(&DAT_40020008,&local_30);
  FUN_0800a7fc(&DAT_40020008,1);
  return;
}



/* ENTRY 0x0800c75c : FUN_0800c75c */

void FUN_0800c75c(void)

{
  DAT_40012838 = DAT_20000374 + (DAT_20000370 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x0800c77c : FUN_0800c77c */

void FUN_0800c77c(void)

{
  FUN_0800876c(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x0800c790 : FUN_0800c790 */

void FUN_0800c790(void)

{
  DAT_200034dc = 0;
  DAT_200034e0 = 0;
  DAT_200034e4 = 0;
  FUN_08008876(&DAT_40012800,2);
  FUN_08008814(&DAT_40012800,3,1,2);
  FUN_08008814(&DAT_40012800,1,2);
  FUN_0800876c(&DAT_40012800,0x1000);
  FUN_0800875a(&DAT_40012800,1);
  FUN_080087b4(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x0800c7ec : FUN_0800c7ec */

undefined4 FUN_0800c7ec(int param_1)

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



/* ENTRY 0x0800c826 : FUN_0800c826 */

void FUN_0800c826(void)

{
  FUN_0800ed10(0x10,1);
  return;
}



/* ENTRY 0x0800c834 : FUN_0800c834 */

void FUN_0800c834(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08008582(auStack_28,0x14);
  FUN_08008582(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_0801ff2c(cVar1,(&DAT_20003c2a)[(uVar2 + 6) * 3],(&DAT_20003c2b)[(uVar2 + 6) * 3],
                 (&DAT_20003c2c)[(uVar2 + 6) * 3],auStack_3c);
    FUN_0801ff2c(uVar2 & 0xff,(&DAT_20003c2a)[uVar2 * 3],(&DAT_20003c2b)[uVar2 * 3],
                 (&DAT_20003c2c)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_0802248c(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x0800c8b4 : FUN_0800c8b4 */

undefined4 FUN_0800c8b4(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 local_20 [16];
  short local_10;
  
  FUN_0800aff8(local_20);
  local_20[0] = 0xf;
  sVar1 = FUN_0801bdca(local_20);
  if (local_10 == sVar1) {
    FUN_0800851e(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800b060(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0801bdca(local_20);
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



/* ENTRY 0x0800c91c : FUN_0800c91c */

void FUN_0800c91c(void)

{
  ushort uVar1;
  
  FUN_0800f400(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_0800f400(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800c94c : FUN_0800c94c */

void FUN_0800c94c(void)

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
  
  FUN_0800ed10(0x1000);
  FUN_0800ed10(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_0800f428(&DAT_40013000,&local_1c);
  FUN_0800f400(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800ca0c : FUN_0800ca0c */

undefined8 FUN_0800ca0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0800cab0(0x9d);
    for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cab0(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  else {
    DAT_40010814 = 0x10;
    FUN_0800cab0(0xbb);
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800cab0(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  FUN_08008494(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800ca84 : FUN_0800ca84 */

undefined4 FUN_0800ca84(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800cab0(param_1 | 0x80);
  uVar1 = FUN_0800cab0(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800cab0 : FUN_0800cab0 */

undefined1 FUN_0800cab0(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_0800f412(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_0800f412(&DAT_40013000,1);
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



/* ENTRY 0x0800cb2c : FUN_0800cb2c */

undefined4 FUN_0800cb2c(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800cab0(param_1);
  FUN_0800cab0(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800cb54 : FUN_0800cb54 */

undefined4 FUN_0800cb54(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_200001b0 == 0) {
    FUN_0800c94c();
    DAT_200001b0 = FUN_0800cda4(0x75);
    if (DAT_200001b0 == 0x47) {
      do {
        iVar2 = FUN_0800cf1c(0x11,1);
      } while (iVar2 == 0);
      FUN_0800e220(0xf);
      do {
        iVar2 = FUN_0800cf1c(0x4e,0xf);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x50,0x60);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x4f,0x40);
      } while (iVar2 == 0);
    }
    else {
      do {
        iVar2 = FUN_0800cf1c(0x6b,0x80);
      } while (iVar2 == 0);
      FUN_0800e220(0xf);
      do {
        iVar2 = FUN_0800cf1c(0x6b,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x19,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x1a,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x1c,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x1b,8);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800cf1c(0x38,1);
      } while (iVar2 == 0);
    }
    uVar3 = FUN_0800cda4(0x75);
    if ((uVar3 == 0) || (uVar3 != DAT_200001b0)) {
      uVar1 = 0;
    }
    else {
      FUN_0800cdb0();
      FUN_0800c91c();
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800cc48 : FUN_0800cc48 */

void FUN_0800cc48(undefined4 param_1)

{
  FUN_0800ca0c(param_1);
  return;
}



/* ENTRY 0x0800cc54 : FUN_0800cc54 */

undefined4 FUN_0800cc54(int *param_1)

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
  
  FUN_0800cc48(local_2c);
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



/* ENTRY 0x0800cda4 : FUN_0800cda4 */

void FUN_0800cda4(undefined4 param_1)

{
  FUN_0800ca84(param_1);
  return;
}



/* ENTRY 0x0800cdb0 : FUN_0800cdb0 */

void FUN_0800cdb0(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_200001b0 == 'G') {
    bVar1 = FUN_0800cda4(0x50);
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
    bVar1 = FUN_0800cda4(0x4f);
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
  bVar1 = FUN_0800cda4(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b2 = 0x2000;
      goto code_r0x0800cec8;
    }
    if (uVar2 == 2) {
      DAT_200001b2 = 0x1000;
      goto code_r0x0800cec8;
    }
    if (uVar2 == 3) {
      DAT_200001b2 = 0x800;
      goto code_r0x0800cec8;
    }
  }
  DAT_200001b2 = 0x4000;
code_r0x0800cec8:
  bVar1 = FUN_0800cda4(0x1b);
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



/* ENTRY 0x0800cf1c : FUN_0800cf1c */

void FUN_0800cf1c(undefined4 param_1,undefined4 param_2)

{
  FUN_0800cb2c(param_1,param_2);
  return;
}



/* ENTRY 0x0800cf2c : FUN_0800cf2c */

void FUN_0800cf2c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800cb54();
  if (iVar1 == 0) {
    DAT_200032b0 = DAT_200032b0 | 0x40;
  }
  FUN_0800bc0c();
  FUN_0800b93c();
  DAT_200032d8 = 71000;
  DAT_200032dc = 71000;
  return;
}



/* ENTRY 0x0800cf5c : FUN_0800cf5c */

void FUN_0800cf5c(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_200032a8 = DAT_200032a8 + 1;
  if (1 < diag_motionstep) {
    if ((DAT_200033ec < DAT_200032f4 + -0x96) && (DAT_200033ec < 0xa000)) {
      DAT_200033ec = DAT_200033ec + 100;
    }
    else if ((DAT_200032f4 + 0x96 < DAT_200033ec) && (-0xa000 < DAT_200033ec)) {
      DAT_200033ec = DAT_200033ec + -100;
    }
  }
  if (DAT_20003300 != 0) {
    DAT_20003300 = DAT_20003300 + -1;
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002d8 = 7;
    iVar2 = FUN_0801f89c(0);
    if ((iVar2 == 1) && (DAT_20000379 == 1)) {
      diag_motionstep = DAT_20000379;
      DAT_200002d8 = DAT_20000379;
      if (DAT_20000330 != '\0') {
        DAT_200032b0 = DAT_200032b0 | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_200032b2 & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_200032b2 & 8) != 0) {
      diag_motionstep = 8;
    }
    if (diag_acce_z < -0x400) {
      DAT_20003300 = 500;
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
        iVar2 = DAT_200032b8;
        if (DAT_200032b8 < 0) {
          iVar2 = -DAT_200032b8;
        }
        if (((iVar2 < 2000) && (((byte)DAT_200032b2 & 5) == 5)) &&
           (((DAT_200032b2 & 10) == 0 &&
            ((((DAT_200032b0 & 1) == 0 && (DAT_200002d8 == 1)) && (DAT_20003300 == 0)))))) {
          DAT_200002d8 = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_200032f0 = 0;
          FUN_0800ff18(3);
          diag_rollptag_auto = 0x28000;
          FUN_08019a74(4);
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
      if (((iVar2 < 0x28000) && (((byte)DAT_200032b2 & 4) == 4)) && ((DAT_200032b2 & 8) == 0)) {
        if ((DAT_200032b2 & 0x20) == 0) {
          if (DAT_200032f0 + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_200032f0 + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_200032f0;
            FUN_0800ff18(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_08019a74(0xe1);
        }
        break;
      }
    }
    FUN_0800d870();
    diag_motionstep = 2;
    FUN_08021b94();
    FUN_0800ff18(0x30);
    diag_motorstep = 1;
    FUN_08019a74(0xe0);
    DAT_20003300 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800d2f2;
        }
        if ((((byte)DAT_200032b2 & 4) == 4) && ((DAT_200032b2 & 8) == 0)) {
          FUN_08020c0c();
          iVar2 = DAT_200032b8;
          if (DAT_200032b8 < 0) {
            iVar2 = -DAT_200032b8;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_200032b8;
            if (DAT_200032b8 < 0) {
              iVar2 = -DAT_200032b8;
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
          else if (diag_rollptag_auto < DAT_200032f8) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_200032b2 & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_08019a74(0xe1);
          }
          break;
        }
      }
    }
LAB_0800d2f2:
    DAT_2000330e = 1;
    FUN_0800d870();
    diag_motionstep = 2;
    FUN_08021b94();
    FUN_0800ff18(0x30);
    diag_motorstep = 1;
    FUN_08019a74(0xe0);
    DAT_20003300 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800d4dc;
        }
        if ((((byte)DAT_200032b2 & 4) == 4) && ((DAT_200032b2 & 8) == 0)) {
          iVar2 = DAT_200032b8;
          if (DAT_200032b8 < 0) {
            iVar2 = -DAT_200032b8;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_200032b8;
            if (DAT_200032b8 < 0) {
              iVar2 = -DAT_200032b8;
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
          else if (diag_rollptag_auto < DAT_200032f8) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_200032b8 < 0x2ee1) {
            if (DAT_200032b8 < 1) {
              if (DAT_200032b8 == 0) {
                DAT_200032f0 = -0x19000;
              }
              else if (DAT_200032b8 < -11999) {
                DAT_200032f0 = -0x12000;
              }
              else {
                DAT_200032f0 = -0x19000;
              }
            }
            else {
              DAT_200032f0 = 0x19000;
            }
          }
          else {
            DAT_200032f0 = 0x12000;
          }
          if (DAT_200032f0 + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_200032f0 + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_200032f0;
          }
          break;
        }
      }
    }
LAB_0800d4dc:
    DAT_2000330e = 1;
    FUN_0800d870();
    diag_motionstep = 2;
    FUN_08021b94();
    FUN_0800ff18(0x30);
    diag_motorstep = 1;
    FUN_08019a74(0xe0);
    DAT_20003300 = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_2000330e = 1;
      FUN_0800e220(0x3c);
      iVar2 = FUN_08022a38();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_08009ef0();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800ff18(0xf0);
    FUN_0800e220(0xa0);
    DAT_200032b2 = DAT_200032b2 & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_20000330 != '\0') {
      DAT_200032b0 = DAT_200032b0 | 0x10;
    }
    if (DAT_2000032e != '\0') {
      DAT_200032b0 = DAT_200032b0 | 0x20;
    }
    if (DAT_200005fc == '\x01') {
      DAT_200032b2 = DAT_200032b2 | 1;
    }
    else {
      DAT_200032b2 = DAT_200032b2 & 0xfffe;
    }
  }
  if (DAT_20000718 == 0) {
    DAT_200032b2 = DAT_200032b2 | 0x40;
  }
  else if (DAT_200032bc == '\0') {
    DAT_200032b2 = DAT_200032b2 & 0xffbf;
  }
  FUN_08016504();
  uVar5 = CONCAT44(DAT_2000334c,DAT_20003348);
  iVar2 = DAT_200032b8;
  if (DAT_200032b8 < 0) {
    iVar2 = -DAT_200032b8;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_20003338;
    if (DAT_20003338 < 0) {
      iVar2 = -DAT_20003338;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003348 * 4999);
      uVar3 = DAT_20003338 * 5000;
      uVar5 = FUN_0800840e(uVar4 + uVar3,
                           DAT_2000334c * 4999 + (int)((ulonglong)DAT_20003348 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_20003354,DAT_20003350);
    DAT_2000334c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003348 = (uint)uVar5;
    iVar2 = DAT_2000333c;
    if (DAT_2000333c < 0) {
      iVar2 = -DAT_2000333c;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003350 * 4999);
      uVar3 = DAT_2000333c * 5000;
      uVar6 = FUN_0800840e(uVar4 + uVar3,
                           DAT_20003354 * 4999 + (int)((ulonglong)DAT_20003350 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_2000334c,DAT_20003348);
    }
    uVar7 = CONCAT44(DAT_2000335c,DAT_20003358);
    DAT_20003354 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003350 = (uint)uVar6;
    DAT_2000334c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003348 = (uint)uVar5;
    iVar2 = DAT_20003340;
    if (DAT_20003340 < 0) {
      iVar2 = -DAT_20003340;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003358 * 4999);
      uVar3 = DAT_20003340 * 5000;
      uVar7 = FUN_0800840e(uVar4 + uVar3,
                           DAT_2000335c * 4999 + (int)((ulonglong)DAT_20003358 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_20003354,DAT_20003350);
      uVar5 = CONCAT44(DAT_2000334c,DAT_20003348);
    }
    DAT_2000335c = (int)((ulonglong)uVar7 >> 0x20);
    DAT_20003358 = (uint)uVar7;
    DAT_20003354 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003350 = (uint)uVar6;
    DAT_2000334c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003348 = (uint)uVar5;
    diag_vttest_0_ = FUN_0800840e(DAT_20003348,DAT_2000334c,5000,0);
    diag_vttest_1_ = FUN_0800840e(DAT_20003350,DAT_20003354,5000,0);
    diag_vttest_2_ = FUN_0800840e(DAT_20003358,DAT_2000335c,5000,0);
  }
  return;
}



/* ENTRY 0x0800d74c : FUN_0800d74c */

void FUN_0800d74c(void)

{
  switch(DAT_200002d8) {
  case 1:
    FUN_0800bfcc();
    break;
  case 2:
    FUN_0800bfb4();
    break;
  case 3:
    FUN_080113f8();
    break;
  case 4:
    FUN_0800ead2();
    break;
  case 7:
    FUN_08009edc();
    break;
  case 8:
    FUN_0800a9bc();
    break;
  case 10:
    FUN_0800a0a8();
  }
  DAT_20000324 = (((((int)(uint)DAT_200034ec >> 4) - (int)(short)DAT_2000037c) * 0x26) / 10 +
                 DAT_20000324 * 0x31) / 0x32;
  DAT_200002e0 = (int)(((uint)DAT_200002ec * ((int)(uint)DAT_200034e8 >> 2)) /
                       (uint)((int)(uint)DAT_200034f4 >> 4) + DAT_200002e4 * 9) / 10;
  DAT_20000328 = DAT_200002e0 + DAT_200002dc;
  if (15000 < DAT_20000328) {
    DAT_2000032c = 1;
  }
  DAT_200002e4 = DAT_200002e0;
  if (((DAT_20000328 < 0x2198) && (diag_cartstep == '\x03')) && (DAT_200002e8 == '\0')) {
    FUN_08019a74(0xef);
    DAT_200002e8 = '\x01';
  }
  return;
}



/* ENTRY 0x0800d870 : FUN_0800d870 */

void FUN_0800d870(void)

{
  DAT_200002d8 = 1;
  FUN_0800eb5c();
  FUN_0800d888();
  return;
}



/* ENTRY 0x0800d888 : FUN_0800d888 */

void FUN_0800d888(void)

{
  DAT_2000035c = 0;
  diag_g_average_iq = 0;
  diag_g_averX10_iq = 0;
  DAT_2000036a = 0;
  FUN_0800f234();
  return;
}



/* ENTRY 0x0800d8b4 : validate_or_fill_crc16 */

undefined4 validate_or_fill_crc16(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_080269dc + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_080269dc + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x0800d924 : encode_extended_frame */

uint encode_extended_frame(byte *param_1,char *param_2)

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



/* ENTRY 0x0800d974 : FUN_0800d974 */

void FUN_0800d974(void)

{
  DAT_200005f0 = 0;
  return;
}



/* ENTRY 0x0800d980 : FUN_0800d980 */

void FUN_0800d980(void)

{
  DAT_200005f8 = 0;
  return;
}



/* ENTRY 0x0800d98c : FUN_0800d98c */

void FUN_0800d98c(void)

{
  DAT_200005f9 = 0;
  return;
}



/* ENTRY 0x0800d998 : FUN_0800d998 */

void FUN_0800d998(byte *param_1)

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



/* ENTRY 0x0800da08 : FUN_0800da08 */

void FUN_0800da08(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x0800da1c : FUN_0800da1c */

void FUN_0800da1c(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x0800da30 : FUN_0800da30 */

void FUN_0800da30(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800da54 : FUN_0800da54 */

undefined * FUN_0800da54(void)

{
  return &DAT_0802649e;
}



/* ENTRY 0x0800db6c : FUN_0800db6c */

void FUN_0800db6c(void)

{
  FUN_0800db9c();
  FUN_0800e5e8();
  FUN_0800e63c();
  FUN_0800e680();
  FUN_0800e588();
  FUN_0800e76c();
  FUN_0800e7b8();
  FUN_0800e6f0();
  FUN_0800e724();
  FUN_0800db9e();
  FUN_0800da54();
  return;
}



/* ENTRY 0x0800db9c : FUN_0800db9c */

void FUN_0800db9c(void)

{
  return;
}



/* ENTRY 0x0800db9e : FUN_0800db9e */

void FUN_0800db9e(void)

{
  return;
}



/* ENTRY 0x0800dba0 : FUN_0800dba0 */

void FUN_0800dba0(void)

{
  if ((DAT_20000040 == '\x01') && (DAT_20000035 != -1)) {
    DAT_20000035 = DAT_20000035 + '\x01';
  }
  return;
}



/* ENTRY 0x0800dbc4 : FUN_0800dbc4 */

void FUN_0800dbc4(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if (DAT_20000035 != '\0') {
      DAT_20000035 = DAT_20000035 + -1;
    }
    if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
      FUN_0800e878();
      DAT_20000050 = (&DAT_200010c0)[DAT_20000038];
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



/* ENTRY 0x0800dc54 : FUN_0800dc54 */

undefined1 * FUN_0800dc54(undefined4 param_1)

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
      *(undefined **)(puVar1 + 0x14) = &DAT_0800dca4;
      FUN_0800e56c(puVar1);
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* ENTRY 0x0800dca8 : FUN_0800dca8 */

int FUN_0800dca8(char *param_1,undefined4 param_2,undefined1 *param_3)

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
          FUN_0800e4f0(param_1);
          FUN_08008254(uVar3);
          FUN_0800e804();
          uVar3 = FUN_0800824c();
          cVar1 = *(char *)(DAT_20000048 + 0x2d);
          if (cVar1 == '\0') {
            iVar2 = *(int *)(DAT_20000048 + 0x24);
            *param_3 = 0;
          }
          else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
            FUN_0800e48c(DAT_20000048,param_1);
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



/* ENTRY 0x0800ddb0 : FUN_0800ddb0 */

undefined4 FUN_0800ddb0(char *param_1,undefined4 param_2)

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
      FUN_0800e3fc(param_1,param_2,2,0);
      FUN_08008254(uVar1);
      FUN_0800e804();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800de00 : FUN_0800de00 */

void FUN_0800de00(void)

{
  if (DAT_20000040 == '\0') {
    FUN_0800e878();
    DAT_20000037 = DAT_20000038;
    DAT_20000048 = (&DAT_200010c0)[DAT_20000038];
    DAT_20000050 = DAT_20000048;
    FUN_0800825a();
  }
  return;
}



/* ENTRY 0x0800de48 : FUN_0800de48 */

void FUN_0800de48(void)

{
  undefined4 uVar1;
  
  FUN_0800e220(2);
  uVar1 = FUN_0800824c();
  DAT_20000044 = 0;
  FUN_08008254(uVar1);
  FUN_0800e220(10);
  uVar1 = FUN_0800824c();
  DAT_2000002c = DAT_20000044;
  DAT_20000034 = 1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800de94 : FUN_0800de94 */

void FUN_0800de94(void)

{
  return;
}



/* ENTRY 0x0800de98 : FUN_0800de98 */

undefined4 FUN_0800de98(uint param_1,uint param_2)

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
  if ((&DAT_200010c0)[param_2] == 0) {
    local_2c = param_1;
    if (param_1 == 0xff) {
      local_2c = (uint)*(byte *)(DAT_20000048 + 0x2e);
    }
    iVar8 = (&DAT_200010c0)[local_2c];
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
      (&DAT_200010c0)[local_2c] = 0;
      (&DAT_200010c0)[param_2] = iVar8;
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
        FUN_0800e804();
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



/* ENTRY 0x0800e038 : FUN_0800e038 */

int FUN_0800e038(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  if (DAT_20000035 == '\0') {
    if ((&DAT_200010c0)[param_4] == 0) {
      (&DAT_200010c0)[param_4] = 1;
      FUN_08008254(uVar1);
      FUN_0800eab8(param_6,param_7,param_9);
      uVar1 = FUN_0800e184(param_1,param_2,param_3,param_9);
      iVar2 = FUN_0800e8a4(param_4,uVar1,param_6,param_5,param_7,param_8,param_9);
      if (iVar2 == 0) {
        if (DAT_20000040 == '\x01') {
          FUN_0800e804();
        }
      }
      else {
        uVar1 = FUN_0800824c();
        (&DAT_200010c0)[param_4] = 0;
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



/* ENTRY 0x0800e0f0 : FUN_0800e0f0 */

void FUN_0800e0f0(void)

{
  return;
}



/* ENTRY 0x0800e0f2 : FUN_0800e0f2 */

void FUN_0800e0f2(void)

{
  return;
}



/* ENTRY 0x0800e0f4 : FUN_0800e0f4 */

void FUN_0800e0f4(void)

{
  return;
}



/* ENTRY 0x0800e0f8 : FUN_0800e0f8 */

undefined4 FUN_0800e0f8(uint param_1,int *param_2)

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
  iVar2 = (&DAT_200010c0)[param_1];
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



/* ENTRY 0x0800e184 : FUN_0800e184 */

undefined4 * FUN_0800e184(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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



/* ENTRY 0x0800e21e : FUN_0800e21e */

void FUN_0800e21e(void)

{
  return;
}



/* ENTRY 0x0800e220 : FUN_0800e220 */

void FUN_0800e220(int param_1)

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
    FUN_0800e804();
  }
  return;
}



/* ENTRY 0x0800e298 : FUN_0800e298 */

void FUN_0800e298(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000064 = param_1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800e2b4 : FUN_0800e2b4 */

void FUN_0800e2b4(void)

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



/* ENTRY 0x0800e39c : FUN_0800e39c */

undefined4 FUN_0800e39c(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800e3a8 : FUN_0800e3a8 */

void FUN_0800e3a8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  FUN_0800e2b4();
  FUN_0800dbc4();
  return;
}



/* ENTRY 0x0800e3d0 : FUN_0800e3d0 */

void FUN_0800e3d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0800e39c();
  DAT_e000e014 = uVar1 / 100 - 1;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 5;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 2;
  return;
}



/* ENTRY 0x0800e3fc : FUN_0800e3fc */

uint FUN_0800e3fc(int param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)(&DAT_0802632c)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_0802632c)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_200010c0)[uVar3];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) & ~param_3;
  *(undefined1 *)(iVar1 + 0x2d) = param_4;
  if ((*(byte *)(iVar1 + 0x2c) & 8) == 0) {
    DAT_20000039 = *(byte *)(iVar1 + 0x32) | DAT_20000039;
    (&DAT_2000003a)[uVar2] = (&DAT_2000003a)[uVar2] | *(byte *)(iVar1 + 0x31);
  }
  FUN_0800e48c(iVar1,param_1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_0800e4b6(iVar1,*(undefined4 *)(iVar1 + 0x20));
    *(int *)(iVar1 + 0x1c) = param_1;
  }
  return uVar3;
}



/* ENTRY 0x0800e48c : FUN_0800e48c */

void FUN_0800e48c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x30);
  *(byte *)(param_2 + 0xb + uVar1) = *(byte *)(param_2 + 0xb + uVar1) & ~*(byte *)(param_1 + 0x31);
  if (*(char *)(param_2 + 0xb + uVar1) == '\0') {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & ~*(byte *)(param_1 + 0x32);
  }
  return;
}



/* ENTRY 0x0800e4b6 : FUN_0800e4b6 */

void FUN_0800e4b6(int param_1,int *param_2)

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



/* ENTRY 0x0800e4f0 : FUN_0800e4f0 */

void FUN_0800e4f0(int param_1)

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



/* ENTRY 0x0800e56c : FUN_0800e56c */

void FUN_0800e56c(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(param_1 + 0xb + uVar1) = 0;
  }
  return;
}



/* ENTRY 0x0800e588 : FUN_0800e588 */

void FUN_0800e588(void)

{
  uint uVar1;
  
  thunk_FUN_0800e764(&DAT_200009f0,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200009f0)[uVar1 * 0x18] = 0;
    (&DAT_200009f4)[uVar1 * 6] = &DAT_200009f0 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_20000a04)[uVar1 * 6] = &DAT_0800e5e0;
  }
  (&DAT_200009f0)[uVar1 * 0x18] = 0;
  (&DAT_200009f4)[uVar1 * 6] = 0;
  (&DAT_20000a04)[uVar1 * 6] = &DAT_0800e5e0;
  DAT_20000024 = &DAT_200009f0;
  return;
}



/* ENTRY 0x0800e5e8 : FUN_0800e5e8 */

void FUN_0800e5e8(void)

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



/* ENTRY 0x0800e63c : FUN_0800e63c */

void FUN_0800e63c(void)

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



/* ENTRY 0x0800e680 : FUN_0800e680 */

void FUN_0800e680(void)

{
  uint uVar1;
  
  thunk_FUN_0800e764(&DAT_20001170,0x390);
  thunk_FUN_0800e764(&DAT_200010c0,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001184)[uVar1 * 0x13] = &DAT_20001170 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001184)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001170;
  return;
}



/* ENTRY 0x0800e6f0 : FUN_0800e6f0 */

void FUN_0800e6f0(void)

{
  FUN_0800e038(&LAB_0800e9c8_1,0,&DAT_200010bc,0x2b,0xffff,&DAT_20000ec0,0x80,0,3);
  return;
}



/* ENTRY 0x0800e724 : FUN_0800e724 */

void FUN_0800e724(void)

{
  FUN_0800e038(&LAB_0800e9f0_1,0,&DAT_20000ebc,0x2a,0xfffe,&DAT_20000cc0,0x80,0,3);
  return;
}



/* ENTRY 0x0800e758 : thunk_FUN_0800e764 */

void thunk_FUN_0800e764(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e764 : FUN_0800e764 */

void FUN_0800e764(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800e76c : FUN_0800e76c */

void FUN_0800e76c(void)

{
  uint uVar1;
  
  thunk_FUN_0800e764(&DAT_20001500,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_20001504)[uVar1 * 5] = &DAT_20001500 + (uVar1 + 1) * 0x14;
  }
  (&DAT_20001504)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_20001500;
  return;
}



/* ENTRY 0x0800e7b8 : FUN_0800e7b8 */

void FUN_0800e7b8(void)

{
  uint uVar1;
  
  thunk_FUN_0800e764(&DAT_200015c8,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200015c8)[uVar1 * 6] = &DAT_200015c8 + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_200015c8)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_200015c8;
  return;
}



/* ENTRY 0x0800e804 : FUN_0800e804 */

void FUN_0800e804(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_0800e878();
    DAT_20000050 = (&DAT_200010c0)[DAT_20000038];
    if (DAT_20000038 != DAT_20000037) {
      *(int *)(DAT_20000050 + 0x34) = *(int *)(DAT_20000050 + 0x34) + 1;
      DAT_20000020 = DAT_20000020 + 1;
      FUN_0800827a();
    }
  }
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x0800e878 : FUN_0800e878 */

void FUN_0800e878(void)

{
  DAT_20000038 = (&DAT_0802632c)[(byte)(&DAT_2000003a)[(byte)(&DAT_0802632c)[DAT_20000039]]] +
                 (&DAT_0802632c)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x0800e8a4 : FUN_0800e8a4 */

undefined4
FUN_0800e8a4(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5
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
    FUN_0800de94(puVar3);
    FUN_0800e0f0(puVar3);
    uVar4 = FUN_0800824c();
    (&DAT_200010c0)[param_1] = puVar3;
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



/* ENTRY 0x0800ea7c : FUN_0800ea7c */

void FUN_0800ea7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = param_3;
  local_14 = param_4;
  for (uVar2 = 0; uVar2 < 0x2c; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = FUN_0800e0f8(uVar2,&uStack_18);
    if (((iVar1 == 0) && (iVar1 = (&DAT_200010c0)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0xc) * 4;
      *(undefined4 *)(iVar1 + 0x44) = local_14;
    }
  }
  return;
}



/* ENTRY 0x0800eab8 : FUN_0800eab8 */

void FUN_0800eab8(undefined4 *param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* ENTRY 0x0800ead2 : FUN_0800ead2 */

void FUN_0800ead2(void)

{
  FUN_0800eb5c(4);
  return;
}



/* ENTRY 0x0800eadc : FUN_0800eadc */

void FUN_0800eadc(void)

{
  uint uVar1;
  
  if (DAT_200006ca != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031f6)[uVar1] = 0;
    }
  }
  FUN_08021228();
  DAT_2000323a = 0x31;
  DAT_2000323b = 0x32;
  DAT_2000323c = 0x33;
  DAT_2000323d = 0x34;
  DAT_2000323e = 0x35;
  DAT_2000323f = 0x36;
  return;
}



/* ENTRY 0x0800eb38 : FUN_0800eb38 */

void FUN_0800eb38(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x0800eb44 : FUN_0800eb44 */

void FUN_0800eb44(int param_1)

{
  if (param_1 == 7) {
    DAT_200032b2 = DAT_200032b2 | 0x20;
  }
  return;
}



/* ENTRY 0x0800eb5c : FUN_0800eb5c */

undefined4 FUN_0800eb5c(uint param_1)

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
      FUN_08010afa(&DAT_40012c00,0);
      FUN_08010afa(&DAT_40012c00,4,0);
      FUN_08010afa(&DAT_40012c00,8,0);
      FUN_0800baee(&DAT_40010c00,0x2000);
      FUN_0800baee(&DAT_40010c00,0x8000);
      FUN_0800baee(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_080111bc(&DAT_40012c00,0,0x40);
      FUN_08010afa(&DAT_40012c00,0,1);
      FUN_080111bc(&DAT_40012c00,4,0x40);
      FUN_08010afa(&DAT_40012c00,4,1);
      FUN_080111bc(&DAT_40012c00,8,0x40);
      FUN_08010afa(&DAT_40012c00,8,1);
      FUN_0800baf2(&DAT_40010c00,0x2000);
      FUN_0800baf2(&DAT_40010c00,0x8000);
      FUN_0800baf2(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_080111bc(&DAT_40012c00,0,0x60);
      FUN_08010afa(&DAT_40012c00,0,1);
      FUN_080111bc(&DAT_40012c00,4,0x60);
      FUN_08010afa(&DAT_40012c00,4,1);
      FUN_080111bc(&DAT_40012c00,8,0x60);
      FUN_08010afa(&DAT_40012c00,8,1);
      FUN_0800baf2(&DAT_40010c00,0x2000);
      FUN_0800baf2(&DAT_40010c00,0x8000);
      FUN_0800baf2(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800eca8 : FUN_0800eca8 */

void FUN_0800eca8(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x0800ecb4 : FUN_0800ecb4 */

void FUN_0800ecb4(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x0800ecc8 : FUN_0800ecc8 */

void FUN_0800ecc8(uint param_1,int param_2)

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



/* ENTRY 0x0800ece0 : FUN_0800ece0 */

void FUN_0800ece0(uint param_1,int param_2)

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



/* ENTRY 0x0800ecf8 : FUN_0800ecf8 */

void FUN_0800ecf8(uint param_1,int param_2)

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



/* ENTRY 0x0800ed10 : FUN_0800ed10 */

void FUN_0800ed10(uint param_1,int param_2)

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



/* ENTRY 0x0800ed28 : FUN_0800ed28 */

void FUN_0800ed28(uint param_1,int param_2)

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



/* ENTRY 0x0800ed40 : FUN_0800ed40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ed40(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x0800ed4c : FUN_0800ed4c */

void FUN_0800ed4c(uint *param_1)

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
  uVar3 = *param_1 >> (&DAT_200009e0)[(uVar4 & 0xf0) >> 4];
  param_1[1] = uVar3;
  uVar4 = DAT_40021004;
  param_1[2] = uVar3 >> (&DAT_200009e0)[(uVar4 & 0x700) >> 8];
  uVar4 = DAT_40021004;
  sVar1 = (&DAT_200009e0)[(uVar4 & 0x3800) >> 0xb];
  param_1[3] = uVar3 >> sVar1;
  uVar4 = DAT_40021004;
  param_1[4] = (uVar3 >> sVar1) / (uint)(byte)(&DAT_200009dc)[(uVar4 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x0800edfc : FUN_0800edfc */

void FUN_0800edfc(uint *param_1)

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



/* ENTRY 0x0800eee8 : FUN_0800eee8 */

bool FUN_0800eee8(uint param_1)

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



/* ENTRY 0x0800ef18 : FUN_0800ef18 */

void FUN_0800ef18(int param_1)

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



/* ENTRY 0x0800ef3c : FUN_0800ef3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ef3c(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x0800ef48 : FUN_0800ef48 */

void FUN_0800ef48(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x0800ef58 : FUN_0800ef58 */

void FUN_0800ef58(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x0800ef68 : FUN_0800ef68 */

void FUN_0800ef68(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x0800ef78 : FUN_0800ef78 */

void FUN_0800ef78(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x0800ef88 : FUN_0800ef88 */

longlong FUN_0800ef88(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_0800f034();
  if ((uint)DAT_200009b0 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_200049e0 = (undefined1)(uVar1 / 0xe10);
    DAT_200049e1 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_200049e2 = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_200009b0 = (ushort)(uVar1 / 0x15180);
    FUN_08022380(&local_20,uVar1);
    DAT_200049e0 = (undefined1)local_20;
    DAT_200049e1 = local_20._1_1_;
    DAT_200049e2 = local_20._2_1_;
    DAT_200049e4 = (undefined2)local_1c;
    DAT_200049e6 = local_1c._2_1_;
    DAT_200049e7 = local_1c._3_1_;
    DAT_200049e8 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0800f034 : FUN_0800f034 */

undefined4 FUN_0800f034(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x0800f04c : FUN_0800f04c */

bool FUN_0800f04c(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x0800f06c : FUN_0800f06c */

void FUN_0800f06c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800f04c(1);
  if (iVar1 != 0) {
    FUN_0800ef88();
  }
  iVar1 = FUN_0800f04c(2);
  if (iVar1 != 0) {
    FUN_0800ef58(2);
    FUN_0800ef88();
  }
  FUN_0800ef58(5);
  FUN_0800f20c();
  return;
}



/* ENTRY 0x0800f098 : FUN_0800f098 */

void FUN_0800f098(ushort param_1,int param_2)

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



/* ENTRY 0x0800f0b0 : FUN_0800f0b0 */

undefined4 FUN_0800f0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_0800ece0(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_0800eb38(1);
  iVar2 = FUN_080091fe(4);
  if (iVar2 == 0x5050) {
    FUN_0800f21c();
    FUN_0800f20c();
  }
  else {
    FUN_080091ec();
    FUN_0800ef18(1);
    for (; (iVar2 = FUN_0800eee8(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_0800e220(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_0800ef48(0x100);
    FUN_0800ef3c(1);
    FUN_0800f20c();
    FUN_0800f21c();
    FUN_0800f098(1);
    FUN_0800f20c();
    FUN_0800ef68();
    FUN_0800f1e8(0x7fff);
    FUN_0800f20c();
    FUN_0800f164(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_0800ef78();
    FUN_0800920a(4,0x5050);
  }
  FUN_0800ef88();
  return 0;
}



/* ENTRY 0x0800f164 : FUN_0800f164 */

undefined4
FUN_0800f164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801bef0(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_0800ece0(0x18000000,1);
    FUN_0800eb38(1);
    FUN_0800f1c0(uVar1);
    FUN_0800f20c();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0800f1c0 : FUN_0800f1c0 */

void FUN_0800f1c0(undefined4 param_1)

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



/* ENTRY 0x0800f1e8 : FUN_0800f1e8 */

void FUN_0800f1e8(int param_1)

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



/* ENTRY 0x0800f20c : FUN_0800f20c */

void FUN_0800f20c(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x0800f21c : FUN_0800f21c */

void FUN_0800f21c(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x0800f234 : FUN_0800f234 */

void FUN_0800f234(void)

{
  DAT_2000355c = 0;
  DAT_20003524 = 0;
  DAT_20003560 = 0;
  DAT_20003528 = 0;
  return;
}



/* ENTRY 0x0800f250 : FUN_0800f250 */

bool FUN_0800f250(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0800f28c:
      DAT_200031f0 = 1;
      DAT_20003238 = 0;
      if ((*(char *)(param_1 + 4) == '0') && (*(char *)(param_1 + 5) == '2')) {
        diag_BuscurLimit_set = 8000;
      }
      DAT_200006ca = !bVar1;
      if (DAT_200006ca) {
        DAT_200030da = DAT_200030da | 0x800;
      }
      else {
        DAT_200030da = DAT_200030da & 0xf7ff;
      }
      return !DAT_200006ca;
    }
    if ((("KSSA09"[uVar2] != '\0') && ("KSSA01"[uVar2] != '\0')) &&
       ((*(byte *)(param_1 + uVar2) < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA09"[uVar2] < *(byte *)(param_1 + uVar2))))) {
      bVar1 = false;
      goto code_r0x0800f28c;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0800f2f4 : FUN_0800f2f4 */

void FUN_0800f2f4(void)

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
  
  FUN_0800ed10(8,1);
  FUN_0800ece0(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_0800b9b4(&DAT_40010c00,&local_8);
  FUN_0800baf2(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_0800f428(&DAT_40003c00,&local_1c);
  FUN_0800f400(&DAT_40003c00,1);
  FUN_0800f384(0xff);
  return;
}



/* ENTRY 0x0800f384 : FUN_0800f384 */

undefined1 FUN_0800f384(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_0800f412(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_0800f424(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_0800f412(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_0800f420(&DAT_40003c00);
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



/* ENTRY 0x0800f3d8 : FUN_0800f3d8 */

void FUN_0800f3d8(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_0800f400(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0800f400 : FUN_0800f400 */

void FUN_0800f400(ushort *param_1,int param_2)

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



/* ENTRY 0x0800f412 : FUN_0800f412 */

bool FUN_0800f412(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x0800f420 : FUN_0800f420 */

undefined2 FUN_0800f420(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x0800f424 : FUN_0800f424 */

void FUN_0800f424(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x0800f428 : FUN_0800f428 */

void FUN_0800f428(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x0800f47c : FUN_0800f47c */

undefined1 FUN_0800f47c(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0801bdca(&DAT_2000008c);
  DAT_2000009c = CONCAT22(DAT_2000009c._2_2_,uVar2);
  FUN_0800b294(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  uVar1 = FUN_0800b2dc(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  DAT_200000a0 = 0;
  return uVar1;
}



/* ENTRY 0x0800f4bc : FUN_0800f4bc */

undefined4
FUN_0800f4bc(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    (&DAT_20003f36)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f38)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20003f39)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20003f3a)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f3b)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f3c)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f3d)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f3e)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f3f)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f40)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f41)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f42)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f43)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f44)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f45)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f46)[uVar1 * 0x14] = param_1;
    (&DAT_20003f47)[uVar1 * 0x14] = 0x14;
    (&DAT_20003f48)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f49)[uVar1 * 0x14] = 0x5a;
    (&DAT_2000094d)[uVar1] = 0x14;
    DAT_2000094b = (char)uVar1 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f638 : FUN_0800f638 */

undefined4 FUN_0800f638(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f36)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000094d)[uVar2] = 0x14;
    DAT_2000094b = (char)uVar2 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f6a4 : FUN_0800f6a4 */

undefined4
FUN_0800f6a4(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_20000952 & 7;
  if (DAT_20000951 == '\0') {
    (&DAT_20003f86)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003f87)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f88)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f89)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f8a)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f8b)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f8c)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f8d)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f8e)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f8f)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f90)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f91)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f92)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f93)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f94)[uVar1 * 0x14] = (char)param_9;
    (&DAT_20003f95)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_20003f96)[uVar1 * 0x14] = param_1;
    (&DAT_20003f97)[uVar1 * 0x14] = param_2;
    (&DAT_20003f98)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f99)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000954)[uVar1] = 0x14;
    DAT_20000952 = (char)uVar1 + 1U & 7;
    if (DAT_20000952 == DAT_20000953) {
      DAT_20000951 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f820 : FUN_0800f820 */

undefined4 FUN_0800f820(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000952 & 7;
  if (DAT_20000951 == '\0') {
    (&DAT_20003f86)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f87)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f88)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_20003f96)[uVar2 * 0x14] = param_1;
    (&DAT_20003f97)[uVar2 * 0x14] = param_2;
    (&DAT_20003f98)[uVar2 * 0x14] = 0x5a;
    (&DAT_20003f99)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000954)[uVar2] = 0x14;
    DAT_20000952 = (char)uVar2 + 1U & 7;
    if (DAT_20000952 == DAT_20000953) {
      DAT_20000951 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f8d8 : FUN_0800f8d8 */

undefined4 FUN_0800f8d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000095d & 3;
  if (DAT_2000095c == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20004026)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000095f)[uVar2] = 0x14;
    DAT_2000095d = (char)uVar2 + 1U & 3;
    if (DAT_2000095d == DAT_2000095e) {
      DAT_2000095c = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f944 : FUN_0800f944 */

undefined4 FUN_0800f944(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000964 & 3;
  if (DAT_20000963 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20004076)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000966)[uVar2] = 0x14;
    DAT_20000964 = (char)uVar2 + 1U & 3;
    if (DAT_20000964 == DAT_20000965) {
      DAT_20000963 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800f9b0 : FUN_0800f9b0 */

undefined4 FUN_0800f9b0(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000952 & 7;
  if (DAT_20000951 == '\0') {
    (&DAT_20003f86)[uVar3 * 0x14] = 0xaa;
    (&DAT_20003f87)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f88)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_20003f96)[uVar3 * 0x14] = param_1;
    (&DAT_20003f97)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_08015c5c(&DAT_20003f88 + uVar3 * 0x14,0x10);
    (&DAT_20003f98)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20003f99)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000954)[uVar3] = 0x14;
    DAT_20000952 = (char)uVar3 + 1U & 7;
    if (DAT_20000952 == DAT_20000953) {
      DAT_20000951 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fa84 : FUN_0800fa84 */

undefined4
FUN_0800fa84(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_20000951 == '\0') {
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
    uVar2 = DAT_20000952 & 7;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f86)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000954)[uVar2] = 0x14;
    DAT_20000952 = (char)uVar2 + 1U & 7;
    if (DAT_20000952 == DAT_20000953) {
      DAT_20000951 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0800fb98 : FUN_0800fb98 */

byte FUN_0800fb98(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000952 & 7;
  if (DAT_20000951 == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f86)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
    }
    (&DAT_20000954)[uVar3] = (char)param_2;
    DAT_20000952 = (char)uVar3 + 1U & 7;
    bVar1 = DAT_20000952;
    if (DAT_20000952 == DAT_20000953) {
      bVar1 = 1;
      DAT_20000951 = '\x01';
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* ENTRY 0x0800fc04 : FUN_0800fc04 */

void FUN_0800fc04(void)

{
  int iVar1;
  
  FUN_0800cc54(&DAT_20003310);
  DAT_20000284 = DAT_20003310 - DAT_200033f0;
  DAT_20000288 = DAT_20003314 - DAT_200033f4;
  DAT_2000028c = DAT_20003318;
  DAT_20000278 = DAT_20003320 - DAT_200033fc;
  DAT_2000027c = DAT_20003324 - DAT_20003400;
  DAT_20000280 = DAT_20003328 - DAT_20003404;
  diag_acce_x = FUN_0800b324(&DAT_20000230,DAT_20000284);
  diag_acce_y = FUN_0800b324(&DAT_2000023c,DAT_20000288);
  diag_acce_z = FUN_0800b324(&DAT_20000248,DAT_2000028c);
  DAT_20003338 = FUN_0800b324(&DAT_20000254,-DAT_2000027c);
  DAT_2000333c = FUN_0800b324(&DAT_20000260,DAT_20000278);
  DAT_20003340 = FUN_0800b324(&DAT_2000026c,DAT_20000280);
  iVar1 = FUN_0800840e(DAT_20003348,DAT_2000334c,5000,0);
  diag_gyro_x = DAT_20003338 - iVar1;
  iVar1 = FUN_0800840e(DAT_20003350,DAT_20003354,5000,0);
  diag_gyro_y = DAT_2000333c - iVar1;
  iVar1 = FUN_0800840e(DAT_20003358,DAT_2000335c,5000,0);
  diag_gyro_z = DAT_20003340 - iVar1;
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
  FUN_08008974(&DAT_20003338);
  return;
}



/* ENTRY 0x0800fdc0 : FUN_0800fdc0 */

void FUN_0800fdc0(void)

{
  FUN_0800b37e(&DAT_20000230);
  FUN_0800b37e(&DAT_2000023c);
  FUN_0800b37e(&DAT_20000248);
  FUN_0800b37e(&DAT_20000254);
  FUN_0800b37e(&DAT_20000260);
  FUN_0800b37e(&DAT_2000026c);
  FUN_08008968(2000);
  FUN_0800ff18(0xf0);
  DAT_200033ec = 0;
  DAT_20003348 = 0;
  DAT_2000334c = 0;
  DAT_20003350 = 0;
  DAT_20003354 = 0;
  DAT_20003358 = 0;
  DAT_2000335c = 0;
  return;
}



/* ENTRY 0x0800fe30 : FUN_0800fe30 */

void FUN_0800fe30(void)

{
  FUN_0800fe38();
  return;
}



/* ENTRY 0x0800fe38 : FUN_0800fe38 */

void FUN_0800fe38(void)

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



/* ENTRY 0x0800ff18 : FUN_0800ff18 */

void FUN_0800ff18(undefined4 param_1)

{
  DAT_20000018 = param_1;
  return;
}



/* ENTRY 0x0800ff24 : FUN_0800ff24 */

int FUN_0800ff24(int param_1)

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
    iVar2 = *(int *)(&DAT_080243e4 + extraout_r3 * 4) * iVar2;
  }
  return iVar2;
}



/* ENTRY 0x0800ff8c : FUN_0800ff8c */

int FUN_0800ff8c(int param_1)

{
  if (param_1 < 0x8001) {
    param_1 = param_1 * param_1;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ENTRY 0x0800ff9e : FUN_0800ff9e */

void FUN_0800ff9e(uint param_1)

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



/* ENTRY 0x0800ffcc : FUN_0800ffcc */

void FUN_0800ffcc(int param_1,int param_2)

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
      goto switchD_0801008e_caseD_0;
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
      DAT_20000370 = DAT_200034d4;
      DAT_20000374 = DAT_200034d8;
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
      DAT_20000370 = DAT_200034d0;
      DAT_20000374 = DAT_200034d8;
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
      DAT_20000370 = DAT_200034d0;
      DAT_20000374 = DAT_200034d8;
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
      DAT_20000370 = DAT_200034d0;
      DAT_20000374 = DAT_200034d4;
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
      DAT_20000370 = DAT_200034d0;
      DAT_20000374 = DAT_200034d4;
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
      DAT_20000370 = DAT_200034d4;
      DAT_20000374 = DAT_200034d8;
    }
  }
  else {
switchD_0801008e_caseD_0:
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



/* ENTRY 0x08010618 : setup_motor_timer */

void setup_motor_timer(void)

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
  
  FUN_0800ed10(0xc,1);
  FUN_0800baf6(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_0800b9b4(&DAT_40010800,&local_38);
  FUN_0800baf6(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_0800b9b4(&DAT_40010c00,&local_38);
  FUN_0800baee(&DAT_40010c00,0x2000);
  FUN_0800baee(&DAT_40010c00,0x8000);
  FUN_0800baee(&DAT_40010c00,0x4000);
  FUN_0800ba62(&DAT_40010800,0x700);
  FUN_0800ba62(&DAT_40010c00,0xe000);
  FUN_0800ed10(0x800);
  FUN_08010b60(&DAT_40012c00);
  FUN_080112d0(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_08011234(&DAT_40012c00,&local_10);
  FUN_08011184(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08010f66(&DAT_40012c00,&local_20);
  FUN_08010ff6(&DAT_40012c00,&local_20);
  FUN_08011086(&DAT_40012c00,&local_20);
  FUN_08011184(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_08011112(&DAT_40012c00,&local_20);
  FUN_08010fea(&DAT_40012c00,8);
  FUN_08011078(&DAT_40012c00,8);
  FUN_08011106(&DAT_40012c00,8);
  FUN_08011176(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_08010ad6(&DAT_40012c00,&local_30);
  FUN_08011210(&DAT_40012c00,0x20);
  FUN_08010b1a(&DAT_40012c00,0x80);
  FUN_08010f4c(&DAT_40012c00,0x80,1);
  FUN_08010d70(&DAT_40012c00,1);
  FUN_08010b14(&DAT_40012c00,1);
  FUN_08010f4c(&DAT_40012c00,1,0);
  FUN_08010f4c(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d998(&local_34);
  return;
}



/* ENTRY 0x0801080c : FUN_0801080c */

void FUN_0801080c(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003bac < 0xb) {
      DAT_20003bac = 0;
      DAT_200030da = DAT_200030da & 0xffef;
    }
    else {
      DAT_20003bac = DAT_20003bac - 10;
    }
  }
  else if (DAT_20003bac < 0xfa) {
    DAT_20003bac = DAT_20003bac + 1;
    DAT_200030da = DAT_200030da | 0x10;
  }
  if (10 < DAT_20003bac) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_0802067c();
    }
  }
  return;
}



/* ENTRY 0x0801088c : FUN_0801088c */

void FUN_0801088c(void)

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
  FUN_0800fe30();
  DAT_e000ed08 = 0x8000000;
  return;
}



/* ENTRY 0x080108ec : FUN_080108ec */

void FUN_080108ec(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_08010958;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_08010958:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08010964 : FUN_08010964 */

void FUN_08010964(void)

{
  int iVar1;
  
  iVar1 = FUN_08010d78(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08010b14(&DAT_40012c00,0x80);
    DAT_2000032e = 1;
    FUN_08010f4c(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x0801099c : FUN_0801099c */

void FUN_0801099c(void)

{
  int iVar1;
  
  iVar1 = FUN_08010d78(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08010b14(&DAT_40012c00,1);
    FUN_0800b9a8();
    FUN_0800c364();
  }
  return;
}



/* ENTRY 0x080109c0 : FUN_080109c0 */

void FUN_080109c0(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40000c10;
  if ((uVar1 & 1) != 0) {
    FUN_0800dba0();
    DAT_40000c10 = 0xfffe;
    if (DAT_20000068 != 0) {
      FUN_0800ddb0(DAT_20000068,1);
    }
    DAT_20000082 = DAT_20000082 + 1;
    if (0x27 < DAT_20000082) {
      DAT_20000082 = 0;
      if (DAT_20000070 != 0) {
        FUN_0800ddb0(DAT_20000070,1);
      }
      if (DAT_2000007c != 0) {
        FUN_0800ddb0(DAT_2000007c,1);
      }
    }
    DAT_20000086 = DAT_20000086 + 1;
    if ((0x13 < DAT_20000086) && (DAT_20000086 = 0, DAT_2000006c != 0)) {
      FUN_0800ddb0(DAT_2000006c,1);
    }
    DAT_20000088 = DAT_20000088 + 1;
    if ((3 < DAT_20000088) && (DAT_20000088 = 0, DAT_20000074 != 0)) {
      FUN_0800ddb0(DAT_20000074,1);
    }
    DAT_20000084 = DAT_20000084 + 1;
    if (99 < DAT_20000084) {
      DAT_20000084 = 0;
      if (DAT_20000078 != 0) {
        FUN_0800ddb0(DAT_20000078,1);
      }
    }
    FUN_0800dbc4();
  }
  return;
}



/* ENTRY 0x08010ac4 : FUN_08010ac4 */

void FUN_08010ac4(ushort *param_1,int param_2)

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



/* ENTRY 0x08010ad6 : FUN_08010ad6 */

void FUN_08010ad6(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x08010afa : FUN_08010afa */

void FUN_08010afa(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08010b14 : FUN_08010b14 */

void FUN_08010b14(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010b1a : FUN_08010b1a */

void FUN_08010b1a(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08010b20 : FUN_08010b20 */

void FUN_08010b20(ushort *param_1,int param_2)

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



/* ENTRY 0x08010b32 : FUN_08010b32 */

void FUN_08010b32(int param_1,int param_2)

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



/* ENTRY 0x08010b48 : FUN_08010b48 */

void FUN_08010b48(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08010b58 : FUN_08010b58 */

void FUN_08010b58(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x08010b60 : FUN_08010b60 */

void FUN_08010b60(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_0800ed28(0x800);
    FUN_0800ed28(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_0800ecf8(1);
    FUN_0800ecf8(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_0800ecf8(2,1);
    FUN_0800ecf8(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_0800ecf8(4,1);
    FUN_0800ecf8(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_0800ecf8(8,1);
    FUN_0800ecf8(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_0800ecf8(0x10,1);
    FUN_0800ecf8(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_0800ecf8(0x20,1);
    FUN_0800ecf8(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_0800ed28(0x2000);
    FUN_0800ed28(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_0800ed28(0x80000);
    FUN_0800ed28(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_0800ed28(0x100000);
    FUN_0800ed28(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_0800ed28(0x200000);
    FUN_0800ed28(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_0800ecf8(0x40,1);
    FUN_0800ecf8(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_0800ecf8(0x80,1);
    FUN_0800ecf8(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_0800ecf8(0x100);
    FUN_0800ecf8(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_0800ed28(0x10000);
    FUN_0800ed28(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_0800ed28(0x20000);
    FUN_0800ed28(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_0800ed28(0x40000);
  FUN_0800ed28(0x40000,0);
  return;
}



/* ENTRY 0x08010d70 : FUN_08010d70 */

void FUN_08010d70(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08010d74 : FUN_08010d74 */

undefined2 FUN_08010d74(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08010d78 : FUN_08010d78 */

bool FUN_08010d78(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08010d90 : FUN_08010d90 */

void FUN_08010d90(undefined *param_1,short *param_2)

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
  FUN_080108ec(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x08010f3c : FUN_08010f3c */

void FUN_08010f3c(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x08010f4c : FUN_08010f4c */

void FUN_08010f4c(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08010f5c : FUN_08010f5c */

void FUN_08010f5c(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x08010f66 : FUN_08010f66 */

void FUN_08010f66(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_08010fda;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_08010fda:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x08010fea : FUN_08010fea */

void FUN_08010fea(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x08010ff6 : FUN_08010ff6 */

void FUN_08010ff6(undefined *param_1,short *param_2)

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



/* ENTRY 0x08011078 : FUN_08011078 */

void FUN_08011078(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08011086 : FUN_08011086 */

void FUN_08011086(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x08011106 : FUN_08011106 */

void FUN_08011106(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x08011112 : FUN_08011112 */

void FUN_08011112(undefined *param_1,short *param_2)

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



/* ENTRY 0x08011176 : FUN_08011176 */

void FUN_08011176(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08011184 : FUN_08011184 */

void FUN_08011184(undefined2 *param_1)

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



/* ENTRY 0x08011198 : FUN_08011198 */

void FUN_08011198(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x0801119e : FUN_0801119e */

void FUN_0801119e(int param_1,int param_2)

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



/* ENTRY 0x080111b0 : FUN_080111b0 */

void FUN_080111b0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x080111bc : FUN_080111bc */

void FUN_080111bc(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x08011210 : FUN_08011210 */

void FUN_08011210(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x08011220 : FUN_08011220 */

void FUN_08011220(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x08011230 : FUN_08011230 */

void FUN_08011230(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x08011234 : FUN_08011234 */

void FUN_08011234(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_0801126a:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_0801126a;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_0801126a;
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
    if (!bVar3) goto LAB_080112c0;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_080112c0:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x080112d0 : FUN_080112d0 */

void FUN_080112d0(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x080112e2 : FUN_080112e2 */

void FUN_080112e2(ushort *param_1,int param_2)

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



/* ENTRY 0x080112f4 : FUN_080112f4 */

void FUN_080112f4(ushort *param_1,int param_2)

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



/* ENTRY 0x08011308 : FUN_08011308 */

void FUN_08011308(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(0x30,1);
  local_8 = 0x10031000;
  FUN_0800b9b4(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_0800b9b4(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_0800b9b4(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x08011368 : FUN_08011368 */

void FUN_08011368(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0800baee(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_0800baee(&DAT_40011000,0x1000);
    }
    else {
      FUN_0800baf2(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_0800baf2(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x080113b0 : FUN_080113b0 */

void FUN_080113b0(int param_1)

{
  uint uVar1;
  
  FUN_08015c20(0x8f);
  FUN_08015c20(0x40);
  FUN_0800baee(&DAT_40011000,0x10);
  FUN_08011368(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_08011368(*(undefined1 *)(param_1 + uVar1));
    FUN_08011368((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_0800baf2(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x080113f8 : FUN_080113f8 */

void FUN_080113f8(void)

{
  FUN_0800eb5c(4);
  return;
}



/* ENTRY 0x08011402 : FUN_08011402 */

uint FUN_08011402(int param_1,int param_2)

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



/* ENTRY 0x08011474 : FUN_08011474 */

void FUN_08011474(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_0801176c(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800a914(&DAT_40020430);
    FUN_0800a7fc(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_0800a7fc(&DAT_40020430,1);
    FUN_0801173c(&DAT_40004c00,0x424);
    FUN_08014554(&DAT_200039e8,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_0801176c(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004c00,0x727);
    FUN_080117b8(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_0801176c(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_0801176c(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_0801176c(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_0800dbc4(uVar1);
  return;
}



/* ENTRY 0x08011560 : FUN_08011560 */

void FUN_08011560(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_0801176c(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_0800a914(&DAT_40020058);
    uVar4 = 0x40 - iVar3;
    FUN_0800a7fc(&DAT_40020058,0);
    DAT_4002005c = 0x40;
    FUN_0800a7fc(&DAT_40020058,1);
    FUN_0801173c(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x41)) {
      uart_frame_router(&DAT_20003784,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_0801176c(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_0801173c(&DAT_40013800,0x727);
    FUN_080117b8(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_0801176c(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_0801173c(&DAT_40013800,0x525);
  }
  iVar3 = FUN_0801176c(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_0801173c(&DAT_40013800,0x260);
  }
  iVar3 = FUN_0801176c(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_0801173c(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_0800dbc4(uVar1);
  return;
}



/* ENTRY 0x08011650 : FUN_08011650 */

void FUN_08011650(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_0801176c(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0800a914(&DAT_40020030);
    FUN_0800a7fc(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_0800a7fc(&DAT_40020030,1);
    FUN_0801173c(&DAT_40004800,0x424);
    FUN_08013a64(&DAT_20003828,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_0801176c(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004800,0x727);
    FUN_080117b8(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_0801176c(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004800,0x525);
  }
  iVar4 = FUN_0801176c(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004800,0x260);
  }
  iVar4 = FUN_0801176c(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_0801173c(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_0800dbc4(uVar1);
  return;
}



/* ENTRY 0x0801173c : FUN_0801173c */

void FUN_0801173c(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x0801174a : FUN_0801174a */

void FUN_0801174a(int param_1,int param_2)

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



/* ENTRY 0x0801175c : FUN_0801175c */

void FUN_0801175c(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x0801176c : FUN_0801176c */

bool FUN_0801176c(ushort *param_1,uint param_2)

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



/* ENTRY 0x080117b8 : FUN_080117b8 */

void FUN_080117b8(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x080117e8 : FUN_080117e8 */

void FUN_080117e8(undefined2 *param_1,int *param_2)

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
  FUN_0800ed4c(auStack_20);
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



/* ENTRY 0x0801189c : FUN_0801189c */

void FUN_0801189c(undefined2 *param_1,int *param_2)

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
  FUN_0800edfc(auStack_34);
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



/* ENTRY 0x08011974 : FUN_08011974 */

void FUN_08011974(undefined4 param_1)

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
  FUN_0800ba74(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_0800b9b4(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_0800b9b4(&DAT_40010c00,&local_30);
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
  FUN_0800d998(&local_34);
  FUN_080117b8(&DAT_40013800,0x360,1);
  FUN_080117b8(&DAT_40013800,0x424,1);
  FUN_0801175c(&DAT_40013800,0x80,1);
  FUN_0801175c(&DAT_40013800,0x40,1);
  FUN_0800ecc8(1);
  FUN_0800a810(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_200037c4;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_40020044,&local_60);
  FUN_0800a93c(&DAT_40020044,2,1);
  FUN_0800a7fc(&DAT_40020044,0);
  FUN_0800a810(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_20003784;
  local_58 = 0;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_40020058,&local_60);
  FUN_0800a7fc(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d998(&local_34);
  FUN_0801189c(&DAT_40013800,&local_2c);
  FUN_0801174a(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08011b14 : FUN_08011b14 */

void FUN_08011b14(undefined4 param_1)

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
  FUN_0800b9b4(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800b9b4(&DAT_40010c00,&local_30);
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
  FUN_0800d998(&local_34);
  FUN_080117b8(&DAT_40004800,0x360,1);
  FUN_080117b8(&DAT_40004800,0x424,1);
  FUN_0801175c(&DAT_40004800,0x80,1);
  FUN_0801175c(&DAT_40004800,0x40,1);
  FUN_0800ecc8(1);
  FUN_0800a810(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003928;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_4002001c,&local_60);
  FUN_0800a93c(&DAT_4002001c,2,1);
  FUN_0800a7fc(&DAT_4002001c,0);
  FUN_0800a810(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003828;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_40020030,&local_60);
  FUN_0800a7fc(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d998(&local_34);
  FUN_080117e8(&DAT_40004800,&local_2c);
  FUN_0801174a(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08011cb4 : FUN_08011cb4 */

void FUN_08011cb4(undefined4 param_1)

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
  FUN_0800b9b4(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_0800b9b4(&DAT_40011000,&local_30);
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
  FUN_0800d998(&local_34);
  FUN_080117b8(&DAT_40004c00,0x360,1);
  FUN_080117b8(&DAT_40004c00,0x424,1);
  FUN_0801175c(&DAT_40004c00,0x80,1);
  FUN_0801175c(&DAT_40004c00,0x40,1);
  FUN_0800ecc8(2,1);
  FUN_0800a810(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003ae8;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_40020458,&local_60);
  FUN_0800a93c(&DAT_40020458,2,1);
  FUN_0800a7fc(&DAT_40020458,0);
  FUN_0800a810(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_200039e8;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_0800a94c(&DAT_40020430,&local_60);
  FUN_0800a7fc(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_0800d998(&local_34);
  FUN_080117e8(&DAT_40004c00,&local_2c);
  FUN_0801174a(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08011e54 : FUN_08011e54 */

void FUN_08011e54(char *param_1,int param_2)

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
    if (!bVar10) {
      local_14 = 0;
      while( true ) {
        if (param_2 <= (int)local_14) {
          return;
        }
        if (0x13 < local_14) break;
        (&DAT_200040c6)[local_14] = param_1[local_14];
        local_14 = local_14 + 1 & 0xff;
      }
      return;
    }
    bVar10 = *param_1 == -0x56;
  } while ((!bVar10) || (bVar10 = param_1[1] == 'U', !bVar10));
  local_10 = param_1;
  local_c = param_2;
  if (DAT_2000097d == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_20000949 = 1;
      FUN_08023100();
      FUN_08022848();
      FUN_0800f4bc(0x46,DAT_2000097d,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_08023100(1);
        FUN_0800f4bc(0x46,DAT_2000097d,0,0,0,0,0,0);
        return;
      }
      return;
    }
    local_14 = 1;
    FUN_08023100();
    for (local_18 = 0; (int)local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_20003226)[local_18] != local_10[local_18 + 2]) {
        local_14 = 0;
        break;
      }
    }
    if (local_14 == 0) {
      local_14 = 1;
      for (local_18 = 0; (int)local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_200031f6)[local_18] != local_10[local_18 + 2]) {
          local_14 = 0;
          break;
        }
      }
      for (local_18 = 0xe; (int)local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_200031f6)[local_18] != local_10[local_18 + 3]) {
          local_14 = 0;
          break;
        }
      }
    }
    if ((((local_14 == 0) && (local_10[2] == '6')) && (local_10[3] == '3')) &&
       ((local_10[4] == '9' && (local_10[5] == '0')))) {
      local_14 = 1;
    }
    if (local_14 == 1) {
      DAT_2000097d = '\0';
    }
    FUN_0800f4bc(0x46,DAT_2000097d,0,0,0,0,0,0);
    return;
  }
  uVar8 = (uint)(byte)param_1[0x10];
  if (uVar8 == 0x7a) {
    if (((DAT_20003181 == '\x01') || (param_1[0x11] != '\x10')) &&
       (iVar9 = FUN_0801f0c4(), iVar9 == 1)) {
      FUN_08016944(local_10);
      return;
    }
    FUN_08008582(&local_24,0x14);
    local_24 = 0x155aa;
    local_20 = (uint)local_20._2_2_ << 0x10;
    local_18 = (uint)(ushort)local_18;
    local_14 = CONCAT22(local_14._2_2_,0xee7a);
    uVar7 = FUN_08015c5c((int)&local_24 + 2,0x10);
    local_14 = CONCAT13((char)uVar7,CONCAT12((char)((ushort)uVar7 >> 8),(undefined2)local_14));
    FUN_0800f638(&local_24);
    FUN_08023100(3);
    return;
  }
  if (uVar8 < 0x7b) {
    uVar8 = uVar8 - 0x3f;
    bVar10 = 0x3a < uVar8;
switchD_08012092_default:
    if (bVar10) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801200a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801200e + (uint)*(ushort *)(&DAT_0801200e + uVar8 * 2) * 2))();
    return;
  }
  if (uVar8 == 0x93) {
    FUN_08023100(1);
    if (DAT_20003176 == '\0') {
      local_28 = DAT_20003bd4;
      uVar2 = DAT_20003bd2;
      uVar3 = DAT_20003bd0;
      uVar4 = DAT_20003bce;
      uVar5 = DAT_20003bcc;
      uVar6 = DAT_20003bca;
    }
    else {
      local_28 = DAT_200031ca;
      uVar2 = DAT_200031c8;
      uVar3 = DAT_200031c6;
      uVar4 = DAT_200031c4;
      uVar5 = DAT_200031c2;
      uVar6 = DAT_200031c0;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0800f4bc(0xad,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    return;
  }
  if (0x93 < uVar8) {
    if (uVar8 == 0x9b) {
      FUN_08023100(1);
      FUN_08022848();
      DAT_20000949 = 1;
      return;
    }
    if (0x9b < uVar8) {
      if (uVar8 != 0xe4) {
        if (uVar8 < 0xe5) {
          if ((uVar8 == 0xe1) || (uVar8 == 0xe2)) {
            FUN_08018814(param_1);
            return;
          }
          bVar10 = uVar8 == 0xe3;
        }
        else {
          if ((uVar8 == 0xe5) || (uVar8 == 0xe6)) {
            FUN_08018fae(param_1);
            return;
          }
          bVar10 = false;
          if (uVar8 == 0xf9) {
            FUN_0801aabc(param_1);
            return;
          }
        }
        if (!bVar10) {
          return;
        }
      }
      FUN_0801770c(param_1);
      return;
    }
    uVar8 = uVar8 - 0x94;
    bVar10 = true;
    switch(uVar8) {
    case 0:
      FUN_08023100(1);
      if (DAT_20003176 == '\0') {
        local_28 = DAT_20003be0;
        uVar2 = DAT_20003bde;
        uVar3 = DAT_20003bdc;
        uVar4 = DAT_20003bda;
        uVar5 = DAT_20003bd8;
        uVar6 = DAT_20003bd6;
      }
      else {
        local_28 = DAT_200031d6;
        uVar2 = DAT_200031d4;
        uVar3 = DAT_200031d2;
        uVar4 = DAT_200031d0;
        uVar5 = DAT_200031ce;
        uVar6 = DAT_200031cc;
      }
      local_14 = (uint)uVar6;
      local_18 = (uint)uVar5;
      local_1c = (uint)uVar4;
      local_20 = (uint)uVar3;
      local_24 = (uint)uVar2;
      FUN_0800f4bc(0xae,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                   (int)(short)uVar2,(int)local_28);
      return;
    case 1:
      if (param_1[2] == -1) {
        DAT_200006a8 = 0x11;
        return;
      }
      if (param_1[3] == -1) {
        DAT_200006a8 = 0x12;
        return;
      }
      if (param_1[4] == -1) {
        DAT_200006a8 = 0x13;
        FUN_08023100(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_200006a8 = 0x14;
      FUN_08023100(1);
      return;
    case 2:
      FUN_08023100(1);
      local_14 = (uint)(short)DAT_20003240;
      FUN_0800f4bc(0x4d,local_14,0,0,0,0,0,0);
      return;
    case 3:
      FUN_08023100(1);
      DAT_20003240 = (ushort)(byte)local_10[2];
      local_14 = (uint)(short)DAT_20003240;
      FUN_0800f4bc(0x4d,local_14,0,0,0,0,0,0);
      DAT_2000317f = 1;
      return;
    case 4:
      FUN_08023100(1);
      local_14 = (uint)DAT_200031e2;
      local_18 = (uint)DAT_200031e4;
      local_1c = (uint)DAT_200031e6;
      local_20 = (uint)DAT_200031e8;
      FUN_0800f4bc(0xb5,0,(int)(short)DAT_200031e2,(int)(short)DAT_200031e4,(int)(short)DAT_200031e6
                   ,(int)(short)DAT_200031e8,0,0);
      return;
    case 5:
      FUN_08023100(1);
      local_14 = (uint)CONCAT11(DAT_2000323f,DAT_2000323e);
      local_18 = (uint)CONCAT11(DAT_2000323d,DAT_2000323c);
      local_1c = (uint)CONCAT11(DAT_2000323b,DAT_2000323a);
      FUN_0800f4bc(0xe7,local_1c,local_18,local_14,0,0,0,0);
      return;
    case 6:
      FUN_08023100(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_2000323a)[local_14] = local_10[local_14 + 2];
      }
      local_18 = (uint)*(short *)(local_10 + 6);
      local_1c = (uint)*(short *)(local_10 + 4);
      local_20 = (uint)*(short *)(local_10 + 2);
      FUN_0800f4bc(0xe7,local_20,local_1c,local_18,0,0,0,0);
      DAT_2000317f = 1;
      return;
    }
    goto switchD_08012092_default;
  }
  uVar8 = uVar8 - 0x7c;
  bVar10 = true;
  switch(uVar8) {
  case 0:
    local_1c = FUN_0801ed98();
    local_20 = FUN_0801ed80();
    local_14 = (uint)(byte)local_10[2];
    local_18 = 0;
    if (diag_AgeModeflg == '\0') {
      if (DAT_20003181 != '\0') {
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
          if (iVar9 < 0x42001) goto LAB_080136c8;
        }
        if ((local_14 == 1) && (DAT_20003176 == '\0')) {
          FUN_08022a4c(1);
          FUN_08023100(1);
          local_18 = 1;
          goto LAB_0801370e;
        }
      }
LAB_080136c8:
      FUN_08023100(3);
      local_14 = 0;
    }
    else if (local_14 == 0) {
      FUN_08022a4c(2);
      FUN_08023100(2);
      local_18 = 1;
    }
    else if (DAT_20003181 == '\0') {
      FUN_08023100(3);
      local_14 = 0;
    }
    else {
      FUN_08022a4c(1);
      FUN_08023100(1);
      local_18 = 1;
    }
LAB_0801370e:
    FUN_0800f4bc(0x48,local_14,0,0,0,0,0,0);
    break;
  case 1:
    local_14 = (uint)DAT_20003238;
    FUN_0800f4bc(0x4a,local_14,0,0,0,0,0,0);
    FUN_08023100(1);
    DAT_2000317f = 1;
    break;
  case 2:
    DAT_20003236 = (ushort)(byte)param_1[2];
    local_14 = (uint)(short)DAT_20003236;
    FUN_0800f4bc(0x4c,local_14,0,0,0,0,0,0);
    FUN_08023100(1);
    DAT_2000317f = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_08023100(1);
    local_14 = (uint)DAT_20003238;
    FUN_0800f4bc(0x4a,local_14,0,0,0,0,0,0);
    break;
  case 5:
    FUN_08023100(1);
    local_14 = (uint)(short)DAT_20003236;
    FUN_0800f4bc(0x4c,local_14,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_20003176 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023100(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4bc(0xac,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031b4 = (ushort)local_14;
        DAT_200031b6 = (ushort)local_18;
        DAT_200031b8 = (ushort)local_1c;
        DAT_200031ba = (ushort)local_20;
        DAT_200031bc = (ushort)local_24;
        DAT_200031be = sVar1;
        FUN_08023f70(&DAT_200031b2);
        DAT_2000317f = 1;
        return;
      }
    }
    FUN_08023100(2);
    break;
  case 7:
    if (DAT_20003176 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023100(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4bc(0xad,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031c0 = (ushort)local_14;
        DAT_200031c2 = (ushort)local_18;
        DAT_200031c4 = (ushort)local_1c;
        DAT_200031c6 = (ushort)local_20;
        DAT_200031c8 = (ushort)local_24;
        DAT_200031ca = sVar1;
        FUN_08023f70(&DAT_200031b2);
        DAT_2000317f = 1;
        return;
      }
    }
    FUN_08023100(2);
    break;
  case 8:
    if (DAT_20003176 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_08023100(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0800f4bc(0xae,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_200031cc = (ushort)local_14;
        DAT_200031ce = (ushort)local_18;
        DAT_200031d0 = (ushort)local_1c;
        DAT_200031d2 = (ushort)local_20;
        DAT_200031d4 = (ushort)local_24;
        DAT_200031d6 = sVar1;
        FUN_08023f70(&DAT_200031b2);
        DAT_2000317f = 1;
        return;
      }
    }
    FUN_08023100(2);
    break;
  case 9:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_08023100(1);
      FUN_08022bd8(local_10);
      DAT_2000317f = 1;
    }
    else {
      FUN_08023100(2);
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
      FUN_08023100(1);
      if (local_10[2] == '\0') {
        DAT_200031b2 = 0xe000;
        FUN_0800f4bc(0xa2,1,0,0,0,0,0,0);
      }
      else if (local_10[2] == '\x01') {
        DAT_200031b2 = 0xe001;
        FUN_0800f4bc(0xa2,1,1,0,0,0,0,0);
      }
      else if (local_10[2] == '\x02') {
        DAT_200031b2 = 0xe002;
        FUN_0800f4bc(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003bbc = DAT_200031b2;
      if (DAT_20003176 == '\0') {
        FUN_08023f70(&DAT_20003bbc);
      }
      else {
        FUN_08023f70(&DAT_200031b2);
      }
      DAT_2000317f = 1;
    }
    else {
      FUN_08023100(2);
    }
    break;
  case 0xc:
    DAT_20000949 = 1;
    if (DAT_200031f0 == 1) {
      FUN_08023100();
    }
    else {
      DAT_200006a8 = 3;
    }
    break;
  case 0xd:
    if ((param_1[2] == -0x4c) && (param_1[3] == -0x32)) {
      if (param_1[0xf] == '\0') {
        local_14 = 0;
        local_18 = (uint)*(ushort *)(param_1 + 4);
        local_1c = *(ushort *)(param_1 + 6) ^ 0xffff;
        if (local_18 == local_1c) {
          local_14 = FUN_08022a5c(local_18);
          local_20 = (uint)(ushort)diag_TotalVoltage;
          local_24 = local_20 ^ 0xffff;
          FUN_0800f4bc(0x89,0xffffceb4,(int)(short)(ushort)diag_TotalVoltage,(int)(short)local_24,
                       0x1e,local_14,0,0xe00);
        }
      }
    }
    else {
      FUN_08023100(1);
      if (DAT_20003181 == '\x01') {
        local_14 = diag_VehicleSpeed;
        iVar9 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar9 = -diag_VehicleSpeed;
        }
        if (iVar9 < 1000) {
          FUN_08022b48();
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
      local_14 = (uint)DAT_200031a6;
      FUN_0800f4bc(0x8a,0,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\x01') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003181 == '\0') {
        FUN_08023100(2);
      }
      else {
        FUN_08023100(1);
        DAT_200031a6 = (short)local_14;
        local_18 = ((int)DAT_200031a6 << 0xc) / 10;
        FUN_08022b88();
        local_18 = (uint)DAT_200031a6;
        FUN_0800f4bc(0x8a,1,local_18,0,0,0,0,0);
        DAT_2000317f = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      local_14 = (uint)DAT_200031a8;
      FUN_0800f4bc(0x8a,2,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\x03') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003181 == '\0') {
        FUN_08023100(2);
      }
      else {
        FUN_08023100(1);
        DAT_200031a8 = (short)local_14;
        local_18 = ((int)DAT_200031a8 << 0xc) / 10;
        FUN_08022bb0();
        local_18 = (uint)DAT_200031a8;
        FUN_0800f4bc(0x8a,3,local_18,0,0,0,0,0);
        DAT_2000317f = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      local_14 = (uint)DAT_20003242;
      FUN_0800f4bc(0x8a,4,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\x05') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003181 == '\0') {
        FUN_08023100(2);
      }
      else {
        FUN_08023100(1);
        DAT_20003242 = (byte)local_14;
        local_18 = local_14 & 0xff;
        FUN_08022b6c();
        local_18 = (uint)DAT_20003242;
        FUN_0800f4bc(0x8a,5,local_18,0,0,0,0,0);
        DAT_2000317f = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      local_14 = (uint)(short)DAT_200031ec;
      FUN_0800f4bc(0x8a,6,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\a') {
      local_14 = (uint)*(ushort *)(param_1 + 4);
      local_18 = (uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100;
      if (DAT_20003181 == '\0') {
        FUN_08023100(2);
      }
      else {
        local_18 = local_18 ^ 0xffff;
        if (local_14 == local_18) {
          if (param_1[3] == -0x32) {
            if (((int)local_14 < DAT_200002e0 + -200) || (DAT_200002e0 + 200 < (int)local_14)) {
              local_1c = (uint)(short)DAT_200031ec;
              FUN_0800f4bc(0x8a,7,local_1c,0,0,0,0,0);
              FUN_08023100(2);
            }
            else {
              DAT_200002dc = local_14 - DAT_200002e0;
              DAT_200031ec = (ushort)DAT_200002dc;
              DAT_200031ee = (ushort)DAT_200002dc ^ 0xffff;
              FUN_08023100(1);
              local_1c = (uint)(short)DAT_200031ec;
              FUN_0800f4bc(0x8a,0xffffce07,local_1c,0,0,0,0,0);
              DAT_2000317f = 1;
            }
          }
          else if ((param_1[3] == ' ') && (local_14 == 0)) {
            DAT_200002dc = 0;
            DAT_200031ec = 0;
            DAT_200031ee = 0;
            FUN_08023100(1);
            local_1c = (uint)(short)DAT_200031ec;
            FUN_0800f4bc(0x8a,0x2007,local_1c,0,0,0,0,0);
            DAT_2000317f = 1;
          }
        }
        else {
          FUN_08023100(2);
        }
      }
    }
    else if (param_1[2] == '\b') {
      local_14 = (uint)DAT_200031e0;
      FUN_0800f4bc(0x8a,8,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\t') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (((DAT_20003181 == '\0') || (100 < local_14)) || (local_14 < 0x32)) {
        FUN_08023100(2);
      }
      else {
        FUN_08023100(1);
        DAT_200031e0 = (short)local_14;
        local_18 = local_14 & 0xffff;
        FUN_0801ad64();
        local_18 = (uint)DAT_200031e0;
        FUN_0800f4bc(0x8a,9,local_18,0,0,0,0,0);
        DAT_2000317f = 1;
      }
    }
    else if (param_1[2] == '\n') {
      local_14 = DAT_20003243 & 1;
      FUN_0800f4bc(0x8a,10,local_14,0,0,0,0,0);
      FUN_08023100(1);
    }
    else if (param_1[2] == '\v') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003181 == '\0') {
        FUN_08023100(2);
      }
      else {
        FUN_08023100(1);
        if (local_14 == 0) {
          DAT_20003243 = DAT_20003243 & 0xfe;
        }
        else {
          DAT_20003243 = DAT_20003243 | 1;
        }
        local_18 = DAT_20003243 & 1;
        FUN_0800f4bc(0x8a,0xb,local_18,0,0,0,0,0);
        DAT_2000317f = 1;
      }
    }
    break;
  case 0x16:
    FUN_08023100(1);
    if (DAT_20003176 == '\0') {
      local_28 = DAT_20003bc8;
      uVar2 = DAT_20003bc6;
      uVar3 = DAT_20003bc4;
      uVar4 = DAT_20003bc2;
      uVar5 = DAT_20003bc0;
      uVar6 = DAT_20003bbe;
    }
    else {
      local_28 = DAT_200031be;
      uVar2 = DAT_200031bc;
      uVar3 = DAT_200031ba;
      uVar4 = DAT_200031b8;
      uVar5 = DAT_200031b6;
      uVar6 = DAT_200031b4;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0800f4bc(0xac,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    break;
  default:
    goto switchD_08012092_default;
  }
  return;
}



/* ENTRY 0x08013a64 : FUN_08013a64 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_08013a64(int param_1,undefined4 param_2)

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
  iVar3 = FUN_08016c38(local_20,param_1);
  if (iVar3 == 0) {
    DAT_200049ed = 1;
    iVar3 = FUN_08018f70(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_200049f1 = *(undefined1 *)(local_c + 2);
        DAT_200049f2 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08016ba4(0,local_30,local_2c);
      }
      else {
        DAT_200049f1 = *(undefined1 *)(local_c + 2);
        DAT_200049f2 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004baa = DAT_20004baa + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_08011402(local_30,local_2c);
  uVar4 = (uint)DAT_200049ed;
  if (uVar4 == 0xbe) {
LAB_08014304:
    if (local_10 != 0x25) {
      DAT_200049ed = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_200049ed = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_200049ed = 0;
      return local_2c;
    }
    if (local_1c == 0) {
      if (local_20[0] == 0xc) {
        local_1c = 0;
        puVar5 = extraout_r2;
        uVar6 = extraout_r3;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_08011402(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                               uVar1);
          puVar5 = auStack_4c;
          puVar5[local_50] = uVar1;
          uVar6 = extraout_r3_01;
        }
        FUN_0801787c(0,DAT_200049ed,auStack_4c);
        DAT_200049ed = 0;
        return local_2c;
      }
      DAT_200049ed = 0;
      return local_2c;
    }
    DAT_200049ed = 0;
    return local_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar7 = true;
    switch(uVar4) {
    case 0:
LAB_080142be:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0)))) {
        local_2c = (uint)DAT_200049ed;
        FUN_080176aa(0,local_2c,1);
        DAT_200049ed = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_200049ed;
      FUN_080176aa(0,local_2c);
      DAT_200049ed = 0;
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
      goto LAB_08013ad6;
    case 2:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_08011402(local_34,local_30);
        (&DAT_20004abd)[local_2c] = uVar1;
      }
      break;
    case 3:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_08011402(local_34,local_30);
        (&DAT_20004b8f)[local_2c] = uVar1;
      }
      break;
    case 4:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049ed;
        FUN_080188e4(0,local_2c,1);
      }
      else {
        local_2c = (uint)DAT_200049ed;
        FUN_080188e4(0,local_2c);
      }
      break;
    case 0x11:
      goto switchD_08013bb8_caseD_11;
    case 0x12:
      goto switchD_08013bb8_caseD_12;
    case 0x13:
      goto switchD_08013bb8_caseD_13;
    case 0x14:
      goto switchD_08013bb8_caseD_14;
    case 0x15:
      goto switchD_08013bb8_caseD_15;
    case 0x16:
      goto switchD_08013bb8_caseD_16;
    case 0x17:
      goto switchD_08013bb8_caseD_17;
    case 0x18:
      goto switchD_08013bb8_caseD_18;
    case 0x19:
      goto switchD_08013bb8_caseD_19;
    case 0x1a:
      goto switchD_08013bb8_caseD_1a;
    case 0x1b:
      goto switchD_08013bb8_caseD_1b;
    case 0x1c:
      goto switchD_08013bb8_caseD_1c;
    case 0x1d:
      goto switchD_08013bb8_caseD_1d;
    case 0x1e:
      goto switchD_08013bb8_caseD_1e;
    case 0x1f:
      goto switchD_08013bb8_caseD_1f;
    case 0x20:
      goto switchD_08013bb8_caseD_20;
    case 0x21:
      goto switchD_08013bb8_caseD_21;
    case 0x22:
      goto switchD_08013bb8_caseD_22;
    case 0x23:
      goto switchD_08013bb8_caseD_23;
    case 0x24:
      goto switchD_08013bb8_caseD_24;
    case 0x27:
      local_28 = local_28 + 1 & 0xffff;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_08013bb8_caseD_23;
    case 0x28:
      local_28 = local_28 + 1 & 0xffff;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_08013bb8_caseD_24;
    default:
      goto switchD_08013b90_default;
    }
    DAT_200049ed = 0;
    return local_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (local_10 != 0x25) {
          DAT_200049ed = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_200049ed = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_200049ed = 0;
          return local_2c;
        }
        if (local_1c == 0) {
          if (local_20[0] == 0xc) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_08011402(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_04;
            }
            FUN_08016ee8(0,DAT_200049ed,auStack_4c);
            DAT_200049ed = 0;
            return local_2c;
          }
          DAT_200049ed = 0;
          return local_2c;
        }
        DAT_200049ed = 0;
        return local_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (local_20[0] != 0x76) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_08011402(local_40,local_3c);
          DAT_20004b54 = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004b56)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_08011402(local_40,local_3c);
          DAT_20004b55 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004b74)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004b7c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004b7d = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004b7e = FUN_08011402(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004b7f)[local_3c] = uVar1;
          }
          DAT_20004b86 = FUN_0801ebe0(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004b8c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004b8d = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004b84 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004b8a = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004b8b = FUN_08011402(local_40,local_3c);
          DAT_20004b88 = FUN_0801ebe0(local_c + 0x7f);
          DAT_200049ed = 0;
          return local_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_080142be;
          if (uVar4 == 0x35) {
            if (local_10 != 0x25) {
              DAT_200049ed = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_200049ed = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_200049ed = 0;
              return local_2c;
            }
            if (local_20[0] == 0x1c) {
              local_1c = 0;
              puVar5 = extraout_r2;
              uVar6 = extraout_r3;
              for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
                uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
                uVar1 = FUN_08011402(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,
                                     uVar6,uVar1);
                puVar5 = auStack_4c;
                puVar5[local_50] = uVar1;
                uVar6 = extraout_r3_02;
              }
              FUN_0801787c(0,DAT_200049ed,auStack_4c);
              DAT_200049ed = 0;
              return local_2c;
            }
            DAT_200049ed = 0;
            return local_2c;
          }
          bVar7 = uVar4 == 0x42;
LAB_08013b60:
          if (!bVar7) {
            DAT_200049ed = 0;
            return local_2c;
          }
          if (local_20[0] != 0xba) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_08011402(local_40,local_3c);
          DAT_20004aef = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_c + local_3c * 4 + 0x13;
            uVar2 = FUN_0801ebe0();
            (&DAT_20004af0)[local_3c] = uVar2;
          }
          local_3c = (uint)*(byte *)(local_c + 0x8c);
          local_40 = (uint)*(byte *)(local_c + 0x8b);
          local_38 = FUN_08011402(local_40,local_3c);
          DAT_20004b30 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_3c * 4 + 0x8d + local_c;
            uVar2 = FUN_0801ebe0();
            (&DAT_20004b32)[local_3c] = uVar2;
          }
          DAT_20004b46 = FUN_0801ebe0(local_c + 0xad);
          DAT_20004b48 = FUN_0801ebe0(local_c + 0xb1);
          DAT_20004b4a = FUN_0801ebe0(local_c + 0xb5);
          local_3c = (uint)*(byte *)(local_c + 0xba);
          local_40 = (uint)*(byte *)(local_c + 0xb9);
          DAT_20004b4c = FUN_08011402(local_40,local_3c);
          DAT_20004b4e = FUN_0801ebe0(local_c + 0xbb);
          DAT_20004b50 = FUN_0801ebe0(local_c + 0xbf);
          DAT_20004b52 = FUN_0801ebe0(local_c + 0xc3);
          DAT_200049ed = 0;
          return local_2c;
        }
        if (uVar4 == 0xa0) goto LAB_080141a2;
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_08011402(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_00;
            }
            FUN_0801787c(0,DAT_200049ed,auStack_4c);
            DAT_200049ed = 0;
            return local_2c;
          }
          FUN_080176aa(0,DAT_200049ed);
          DAT_200049ed = 0;
          return local_2c;
        }
        bVar7 = false;
        if (uVar4 != 0xa4) goto LAB_08013b60;
        goto LAB_080140dc;
      }
      uVar4 = uVar4 - 0xa7;
      bVar7 = 6 < uVar4;
switchD_08013b90_default:
      if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x08013b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_08013b7c + (uint)*(ushort *)(&DAT_08013b7c + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_08013ad6:
      DAT_200049ed = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar7 = true;
    switch(uVar4) {
    case 0:
switchD_08013b90_caseD_0:
      local_28 = local_28 + 1 & 0xffff;
LAB_080141a2:
      local_2c = (uint)(byte)(&DAT_20006149)[local_28 * 0x11];
      if (local_10 != 0x25) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if ((uint)local_20[0] == local_2c * 2) {
          local_1c = 0;
          for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
            local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
            local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
            uVar1 = FUN_08011402(local_48,local_44);
            *(undefined1 *)((int)&local_3c + local_40) = uVar1;
          }
          local_40 = local_28 & 0xff;
          FUN_08018768(0,local_40,&local_3c);
          DAT_200049ed = 0;
          return local_2c;
        }
        DAT_200049ed = 0;
        return local_2c;
      }
      DAT_200049ed = 0;
      return local_2c;
    case 1:
    case 5:
      goto LAB_08013ad6;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_08014304;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_080142be;
    case 6:
      goto switchD_08013b90_caseD_6;
    case 7:
      goto switchD_08013b90_caseD_7;
    case 9:
      if (local_10 != 0x25) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049ed = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if (local_20[0] == 2) {
          local_1c = 0;
          bVar7 = false;
          puVar5 = extraout_r2;
          uVar6 = extraout_r3;
          while (!bVar7) {
            auStack_4c[0] =
                 FUN_08011402(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar5,
                              uVar6,*(undefined1 *)(local_c + 0xd));
            puVar5 = auStack_4c;
            uVar6 = extraout_r3_03;
            bVar7 = true;
          }
          FUN_0801787c(0,DAT_200049ed,auStack_4c);
          DAT_200049ed = 0;
          return local_2c;
        }
        DAT_200049ed = 0;
        return local_2c;
      }
      DAT_200049ed = 0;
      return local_2c;
    case 0xe:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049ed;
        FUN_08016d54(0,local_2c,1);
        DAT_200049ed = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_200049ed;
      FUN_08016d54(0,local_2c);
      DAT_200049ed = 0;
      return local_2c;
    default:
      goto switchD_08013b90_default;
    }
  }
  goto LAB_080140c8;
switchD_08013bb8_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_22;
switchD_08013bb8_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_21;
switchD_08013bb8_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_20;
switchD_08013bb8_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1f;
switchD_08013bb8_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1e;
switchD_08013bb8_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1d;
switchD_08013bb8_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1c;
switchD_08013bb8_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1b;
switchD_08013bb8_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_1a;
switchD_08013bb8_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_19;
switchD_08013bb8_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_18;
switchD_08013bb8_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_17;
switchD_08013bb8_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_16;
switchD_08013bb8_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_15;
switchD_08013bb8_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_14;
switchD_08013bb8_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_13;
switchD_08013bb8_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_12;
switchD_08013bb8_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013bb8_caseD_11;
switchD_08013bb8_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_08013b90_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08013b90_caseD_0;
switchD_08013bb8_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_08013b90_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_080140c8:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_080140dc:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08018318(0,local_2c,1);
    DAT_200049ed = 0;
    return local_2c;
  }
  local_2c = local_28 & 0xff;
  FUN_08018318(0,local_2c);
  DAT_200049ed = 0;
  return local_2c;
}



/* ENTRY 0x08014554 : FUN_08014554 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_08014554(int param_1,undefined4 param_2)

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
  iVar3 = FUN_08016c38(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004bad = 1;
    iVar3 = FUN_08018f70(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004bb1 = *(undefined1 *)(local_c + 2);
        DAT_20004bb2 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08016ba4(1,local_30,local_2c);
      }
      else {
        DAT_20004bb1 = *(undefined1 *)(local_c + 2);
        DAT_20004bb2 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004d6a = DAT_20004d6a + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_08011402(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_08011402(local_30,local_2c);
  uVar4 = (uint)DAT_20004bad;
  if (uVar4 == 0xbe) {
LAB_08014e2c:
    if (local_10 != 0x25) {
      DAT_20004bad = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_20004bad = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_20004bad = 0;
      return local_2c;
    }
    if (local_1c == 0) {
      if (local_20[0] == 0xc) {
        local_1c = 0;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
          local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_08011402(local_58,local_54);
          auStack_4c[local_50] = uVar1;
        }
        local_50 = (uint)DAT_20004bad;
        FUN_0801787c(1,local_50,auStack_4c);
        DAT_20004bad = 0;
        return local_2c;
      }
      DAT_20004bad = 0;
      return local_2c;
    }
    DAT_20004bad = 0;
    return local_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
LAB_08014de2:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0)))) {
        local_2c = (uint)DAT_20004bad;
        FUN_080176aa(1,local_2c);
        DAT_20004bad = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004bad;
      FUN_080176aa(1,local_2c,0);
      DAT_20004bad = 0;
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
      goto LAB_080145d4;
    case 2:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_08011402(local_34,local_30);
        (&DAT_20004c7d)[local_2c] = uVar1;
      }
      break;
    case 3:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_08011402(local_34,local_30);
        (&DAT_20004d4f)[local_2c] = uVar1;
      }
      break;
    case 4:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004bad;
        FUN_080188e4(1,local_2c);
      }
      else {
        local_2c = (uint)DAT_20004bad;
        FUN_080188e4(1,local_2c,0);
      }
      break;
    case 0x11:
      goto switchD_080146ba_caseD_11;
    case 0x12:
      goto switchD_080146ba_caseD_12;
    case 0x13:
      goto switchD_080146ba_caseD_13;
    case 0x14:
      goto switchD_080146ba_caseD_14;
    case 0x15:
      goto switchD_080146ba_caseD_15;
    case 0x16:
      goto switchD_080146ba_caseD_16;
    case 0x17:
      goto switchD_080146ba_caseD_17;
    case 0x18:
      goto switchD_080146ba_caseD_18;
    case 0x19:
      goto switchD_080146ba_caseD_19;
    case 0x1a:
      goto switchD_080146ba_caseD_1a;
    case 0x1b:
      goto switchD_080146ba_caseD_1b;
    case 0x1c:
      goto switchD_080146ba_caseD_1c;
    case 0x1d:
      goto switchD_080146ba_caseD_1d;
    case 0x1e:
      goto switchD_080146ba_caseD_1e;
    case 0x1f:
      goto switchD_080146ba_caseD_1f;
    case 0x20:
      goto switchD_080146ba_caseD_20;
    case 0x21:
      goto switchD_080146ba_caseD_21;
    case 0x22:
      goto switchD_080146ba_caseD_22;
    case 0x23:
      goto switchD_080146ba_caseD_23;
    case 0x24:
      goto switchD_080146ba_caseD_24;
    case 0x27:
      local_28 = local_28 + 1 & 0xffff;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_080146ba_caseD_23;
    case 0x28:
      local_28 = local_28 + 1 & 0xffff;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_080146ba_caseD_24;
    default:
      goto switchD_08014692_default;
    }
    DAT_20004bad = 0;
    return local_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (local_10 != 0x25) {
          DAT_20004bad = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_20004bad = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_20004bad = 0;
          return local_2c;
        }
        if (local_1c == 0) {
          if (local_20[0] == 0xc) {
            local_1c = 0;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
              local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_08011402(local_58,local_54);
              auStack_4c[local_50] = uVar1;
            }
            local_50 = (uint)DAT_20004bad;
            FUN_08016ee8(1,local_50,auStack_4c);
            DAT_20004bad = 0;
            return local_2c;
          }
          DAT_20004bad = 0;
          return local_2c;
        }
        DAT_20004bad = 0;
        return local_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (local_20[0] != 0x76) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_08011402(local_40,local_3c);
          DAT_20004d14 = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004d16)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_08011402(local_40,local_3c);
          DAT_20004d15 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004d34)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004d3c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004d3d = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004d3e = FUN_08011402(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_08011402(local_44,local_40);
            (&DAT_20004d3f)[local_3c] = uVar1;
          }
          DAT_20004d46 = FUN_0801ebe0(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004d4c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004d4d = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004d44 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004d4a = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004d4b = FUN_08011402(local_40,local_3c);
          DAT_20004d48 = FUN_0801ebe0(local_c + 0x7f);
          DAT_20004bad = 0;
          return local_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_08014de2;
          if (uVar4 == 0x35) {
            if (local_10 != 0x25) {
              DAT_20004bad = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_20004bad = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_20004bad = 0;
              return local_2c;
            }
            if (local_20[0] == 0x1c) {
              local_1c = 0;
              for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
                local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
                local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
                uVar1 = FUN_08011402(local_58,local_54);
                auStack_4c[local_50] = uVar1;
              }
              local_50 = (uint)DAT_20004bad;
              FUN_0801787c(1,local_50,auStack_4c);
              DAT_20004bad = 0;
              return local_2c;
            }
            DAT_20004bad = 0;
            return local_2c;
          }
          bVar5 = uVar4 == 0x42;
LAB_08014662:
          if (!bVar5) {
            DAT_20004bad = 0;
            return local_2c;
          }
          if (local_20[0] != 0xba) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_08011402(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_08011402(local_40,local_3c);
          DAT_20004caf = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_c + local_3c * 4 + 0x13;
            uVar2 = FUN_0801ebe0();
            (&DAT_20004cb0)[local_3c] = uVar2;
          }
          local_3c = (uint)*(byte *)(local_c + 0x8c);
          local_40 = (uint)*(byte *)(local_c + 0x8b);
          local_38 = FUN_08011402(local_40,local_3c);
          DAT_20004cf0 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_3c * 4 + 0x8d + local_c;
            uVar2 = FUN_0801ebe0();
            (&DAT_20004cf2)[local_3c] = uVar2;
          }
          DAT_20004d06 = FUN_0801ebe0(local_c + 0xad);
          DAT_20004d08 = FUN_0801ebe0(local_c + 0xb1);
          DAT_20004d0a = FUN_0801ebe0(local_c + 0xb5);
          local_3c = (uint)*(byte *)(local_c + 0xba);
          local_40 = (uint)*(byte *)(local_c + 0xb9);
          DAT_20004d0c = FUN_08011402(local_40,local_3c);
          DAT_20004d0e = FUN_0801ebe0(local_c + 0xbb);
          DAT_20004d10 = FUN_0801ebe0(local_c + 0xbf);
          DAT_20004d12 = FUN_0801ebe0(local_c + 0xc3);
          DAT_20004bad = 0;
          return local_2c;
        }
        if (uVar4 == 0xa0) goto LAB_08014cc2;
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
              uVar1 = FUN_08011402(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                   *(undefined1 *)(local_c + local_6c * 2 + 0xe));
              auStack_68[local_6c] = uVar1;
            }
            FUN_0801787c(1,DAT_20004bad,auStack_68);
            DAT_20004bad = 0;
            return local_2c;
          }
          FUN_080176aa(1,DAT_20004bad,0);
          DAT_20004bad = 0;
          return local_2c;
        }
        bVar5 = false;
        if (uVar4 != 0xa4) goto LAB_08014662;
        goto LAB_08014bfc;
      }
      uVar4 = uVar4 - 0xa7;
      bVar5 = 6 < uVar4;
switchD_08014692_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x0801467a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801467e + (uint)*(ushort *)(&DAT_0801467e + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_080145d4:
      DAT_20004bad = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
switchD_08014692_caseD_0:
      local_28 = local_28 + 1 & 0xffff;
LAB_08014cc2:
      local_2c = (uint)(byte)(&DAT_20006248)[local_28 * 0x11];
      if (local_10 != 0x25) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if ((uint)local_20[0] == local_2c * 2) {
          local_1c = 0;
          for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
            local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
            local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
            uVar1 = FUN_08011402(local_48,local_44);
            *(undefined1 *)((int)&local_3c + local_40) = uVar1;
          }
          local_40 = local_28 & 0xff;
          FUN_08018768(1,local_40,&local_3c);
          DAT_20004bad = 0;
          return local_2c;
        }
        DAT_20004bad = 0;
        return local_2c;
      }
      DAT_20004bad = 0;
      return local_2c;
    case 1:
    case 5:
      goto LAB_080145d4;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_08014e2c;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_08014de2;
    case 6:
      goto switchD_08014692_caseD_6;
    case 7:
      goto switchD_08014692_caseD_7;
    case 9:
      if (local_10 != 0x25) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004bad = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if (local_20[0] == 2) {
          local_1c = 0;
          for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
            local_54 = (uint)*(byte *)(local_c + 0xe);
            local_58 = (uint)*(byte *)(local_c + 0xd);
            uVar1 = FUN_08011402(local_58,local_54);
            auStack_4c[local_50] = uVar1;
          }
          local_50 = (uint)DAT_20004bad;
          FUN_0801787c(1,local_50,auStack_4c);
          DAT_20004bad = 0;
          return local_2c;
        }
        DAT_20004bad = 0;
        return local_2c;
      }
      DAT_20004bad = 0;
      return local_2c;
    case 0xe:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004bad;
        FUN_08016d54(1,local_2c);
        DAT_20004bad = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004bad;
      FUN_08016d54(1,local_2c,0);
      DAT_20004bad = 0;
      return local_2c;
    default:
      goto switchD_08014692_default;
    }
  }
  goto LAB_08014be8;
switchD_080146ba_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_22;
switchD_080146ba_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_21;
switchD_080146ba_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_20;
switchD_080146ba_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1f;
switchD_080146ba_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1e;
switchD_080146ba_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1d;
switchD_080146ba_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1c;
switchD_080146ba_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1b;
switchD_080146ba_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_1a;
switchD_080146ba_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_19;
switchD_080146ba_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_18;
switchD_080146ba_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_17;
switchD_080146ba_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_16;
switchD_080146ba_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_15;
switchD_080146ba_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_14;
switchD_080146ba_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_13;
switchD_080146ba_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_12;
switchD_080146ba_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_080146ba_caseD_11;
switchD_080146ba_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_08014692_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_08014692_caseD_0;
switchD_080146ba_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_08014692_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_08014be8:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_08014bfc:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08018318(1,local_2c);
    DAT_20004bad = 0;
    return local_2c;
  }
  local_2c = local_28 & 0xff;
  FUN_08018318(1,local_2c,0);
  DAT_20004bad = 0;
  return local_2c;
}



/* ENTRY 0x08015088 : dispatch_E0_E7 */

void dispatch_E0_E7(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_080152bc(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_080155cc(param_1 + 1);
    break;
  case 0xe2:
    FUN_080155fc(param_1 + 1);
    break;
  case 0xe3:
    FUN_080152a4(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_080152b0(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_08015520(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    diagnostic_table_access(param_1 + 1);
    break;
  case 0xe7:
    FUN_08021e08();
    FUN_080150e8(param_1 + 1);
  }
  return;
}



/* ENTRY 0x080150e8 : FUN_080150e8 */

void FUN_080150e8(int param_1)

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
    local_55 = (undefined1)(&DWORD_080271e0)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_080271e0 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_080271dc)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_080271e0 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_080271e8)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_080271e8)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_080271e0 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_080271e4)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_080271e0 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_080271e8)[uVar1 * 4] + '\x06';
  }
  validate_or_fill_crc16(local_58);
  FUN_080207dc(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x080151d0 : FUN_080151d0 */

void FUN_080151d0(int param_1)

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
    local_51 = (undefined1)(&DWORD_080271e0)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080271e0 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_080271dc)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_080271e0 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_080271e8)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_080271e8)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_080271e0 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_080271e4)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_080271e0 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_080271e8)[param_1 * 4] + '\x06';
  }
  validate_or_fill_crc16(local_54);
  FUN_080207dc(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x080152a4 : FUN_080152a4 */

void FUN_080152a4(undefined1 param_1)

{
  DAT_200005f2 = param_1;
  return;
}



/* ENTRY 0x080152b0 : FUN_080152b0 */

void FUN_080152b0(undefined1 param_1)

{
  DAT_200005f1 = param_1;
  return;
}



/* ENTRY 0x080152bc : FUN_080152bc */

void FUN_080152bc(int param_1)

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
    local_4d = 0x60;
    local_50[0] = '\x05';
  }
  else {
    if (param_1 == 0xfe) {
      DAT_200005f3 = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_08026be0)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_08026be8 + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_08026be8)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08026be8)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_08026be4)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_08026be8)[param_1 * 4] + '\a';
  }
  validate_or_fill_crc16(local_50);
  FUN_080207dc(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08015368 : FUN_08015368 */

void FUN_08015368(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_20003814;
  local_4d = DAT_20003815;
  for (uVar1 = 0; uVar1 < DAT_20003815; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_20003816)[uVar1];
  }
  local_50[0] = DAT_20003815 + 5;
  validate_or_fill_crc16(local_50);
  FUN_080207dc(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x080153c0 : FUN_080153c0 */

void FUN_080153c0(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_2000381e;
  local_4d = DAT_2000381f;
  for (uVar1 = 0; uVar1 < DAT_2000381f; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_20003820)[uVar1];
  }
  local_50[0] = DAT_2000381f + 5;
  validate_or_fill_crc16(local_50);
  FUN_080207dc(&DAT_200005dc,local_50);
  return;
}



/* ENTRY 0x08015418 : FUN_08015418 */

void FUN_08015418(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_20003814;
  local_58[3] = DAT_20003815;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_20003815; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08026be0 + (uint)(byte)(&DAT_20003816)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08026bdc)[(uint)(byte)(&DAT_20003816)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  validate_or_fill_crc16(local_58);
  FUN_080207dc(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x0801549c : FUN_0801549c */

void FUN_0801549c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_2000381e;
  local_58[3] = DAT_2000381f;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_2000381f; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08026be0 + (uint)(byte)(&DAT_20003820)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08026bdc)[(uint)(byte)(&DAT_20003820)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  validate_or_fill_crc16(local_58);
  FUN_080207dc(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x08015520 : FUN_08015520 */

void FUN_08015520(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026be0 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_08026bdc)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  validate_or_fill_crc16(local_54);
  FUN_080207dc(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x08015580 : FUN_08015580 */

void FUN_08015580(int param_1,int param_2)

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
  validate_or_fill_crc16(local_54);
  FUN_080207dc(&DAT_200005dc,local_54);
  return;
}



/* ENTRY 0x080155cc : FUN_080155cc */

void FUN_080155cc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08015368();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003814)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08015368();
  }
  return;
}



/* ENTRY 0x080155fc : FUN_080155fc */

void FUN_080155fc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_080153c0();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000381e)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_080153c0();
  }
  return;
}



/* ENTRY 0x0801562c : diagnostic_table_access */

void diagnostic_table_access(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_08026be8 + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026be0 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_08026bdc)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026be0 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_08026bdc)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_08026bdc)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  validate_or_fill_crc16(local_58);
  FUN_080207dc(&DAT_200005dc,local_58);
  return;
}



/* ENTRY 0x080156d0 : adaptive_bus_limiter */

int adaptive_bus_limiter(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (diag_BuscurLimit * DAT_2000036c) / 15000 + diag_BuscurLimit;
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
  else if (DAT_2000036c < 5000) {
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



/* ENTRY 0x0801586c : FUN_0801586c */

uint FUN_0801586c(void)

{
  uint uVar1;
  
  uVar1 = FUN_08015a00();
  return uVar1 & 1;
}



/* ENTRY 0x08015878 : FUN_08015878 */

void FUN_08015878(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_08015a78();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f384(0xd8);
    FUN_0800f384(param_2);
    FUN_0800f384(0);
    FUN_0800f384(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x080158c0 : FUN_080158c0 */

void FUN_080158c0(int param_1)

{
  if (param_1 == 0) {
    FUN_08015a78();
  }
  else {
    DAT_422101bc = 0;
    FUN_0800f384(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x080158ec : FUN_080158ec */

void FUN_080158ec(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(8,1);
  local_8 = 0x10038000;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  FUN_0800baf2(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_0800b9b4(&DAT_40011000,&local_8);
  FUN_0800baf2(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0800f2f4();
  FUN_0800f3d8(0);
  DAT_200009b2 = FUN_080159b8();
  return;
}



/* ENTRY 0x08015968 : FUN_08015968 */

void FUN_08015968(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f384(3);
  FUN_0800f384((param_2 & 0xffffff) >> 0x10);
  FUN_0800f384((param_2 & 0xffff) >> 8);
  FUN_0800f384(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f384(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x080159b8 : FUN_080159b8 */

uint FUN_080159b8(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0800f384(0x90);
  FUN_0800f384(0);
  FUN_0800f384(0);
  FUN_0800f384(0);
  iVar1 = FUN_0800f384(0xff);
  uVar2 = FUN_0800f384(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x08015a00 : FUN_08015a00 */

undefined4 FUN_08015a00(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0800f384(5);
  uVar1 = FUN_0800f384(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x08015a2c : FUN_08015a2c */

undefined4 FUN_08015a2c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0800f384(3);
  FUN_0800f384((param_1 & 0xffffff) >> 0x10);
  FUN_0800f384((param_1 & 0xffff) >> 8);
  FUN_0800f384(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0800f384(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x08015a78 : FUN_08015a78 */

void FUN_08015a78(void)

{
  DAT_422101bc = 0;
  FUN_0800f384(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015a98 : FUN_08015a98 */

void FUN_08015a98(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_08015a78();
  DAT_422101bc = 0;
  FUN_0800f384(2);
  FUN_0800f384((param_2 & 0xffffff) >> 0x10);
  FUN_0800f384((param_2 & 0xffff) >> 8);
  FUN_0800f384(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0800f384(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x08015ae8 : FUN_08015ae8 */

int FUN_08015ae8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_08015a98(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x08015b08 : FUN_08015b08 */

void FUN_08015b08(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_08023100(1);
    DAT_200006ce = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031f0 == 1) {
      FUN_08023100(3);
    }
    else if (DAT_200006a4 == 0) {
      DAT_200006a8 = 4;
    }
    else {
      DAT_200006a8 = 9;
    }
    DAT_200006d0 = 500;
    break;
  case 0x23:
    FUN_08023100(1);
    DAT_200006cf = 1;
    break;
  case 0x24:
    if (DAT_200031f0 == 1) {
      FUN_08023100(3);
    }
    else if (DAT_200006a4 == 0) {
      DAT_200006a8 = 4;
    }
    else {
      DAT_200006a8 = 10;
    }
    DAT_200006d4 = 2000;
    break;
  case 0x25:
    DAT_200006cc = 1;
    if (DAT_200031f0 == 1) {
      FUN_08023100(3);
    }
    if (DAT_200031f0 == 0) {
      if (DAT_200006a4 == 0) {
        DAT_200006a8 = 0xf;
      }
      else {
        DAT_200006a8 = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_20003176 == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_08023100(4);
    }
  }
  return;
}



/* ENTRY 0x08015c20 : FUN_08015c20 */

void FUN_08015c20(undefined4 param_1)

{
  FUN_0800baee(&DAT_40011000,0x10);
  FUN_08011368(param_1);
  FUN_0800baf2(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x08015c40 : FUN_08015c40 */

short FUN_08015c40(byte *param_1,int param_2)

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



/* ENTRY 0x08015c5c : FUN_08015c5c */

void FUN_08015c5c(byte *param_1,int param_2)

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



/* ENTRY 0x08015ca0 : FUN_08015ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015ca0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800ab78();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800af94((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0c8((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3f0(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800af94((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0c8((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_0800b3f0(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800ab78();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b3a0(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_0800b3a0(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800ab78();
    }
  }
  else {
    iVar1 = FUN_0800ab78();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x08015e98 : FUN_08015e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08015e98(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800abb4();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803e800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800aff8(&local_2c);
      if (iVar1 != 1) {
        if (DAT_2000013c < &DAT_0803e800) {
          for (DAT_2000013c = (short *)&DAT_0803e804;
              (DAT_2000013c < (short *)0x803efeb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b294(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b470();
        FUN_0800b394(0x35);
      }
      iVar1 = FUN_0800b3f0(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800aff8(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_2000013c) {
          for (DAT_2000013c = (short *)&DAT_0803e004;
              (DAT_2000013c < (short *)0x803e7eb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b294(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b470();
        FUN_0800b394(0x35);
      }
      iVar1 = FUN_0800b3f0(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800abb4();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b3a0(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_0800b3a0(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800abb4();
    }
  }
  else {
    iVar1 = FUN_0800abb4();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x080160d0 : FUN_080160d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_080160d0(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800abf0();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803f800);
    }
    else {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b060(&local_2c);
      if (iVar1 != 1) {
        if (DAT_20000140 < &DAT_0803f800) {
          for (DAT_20000140 = (short *)&DAT_0803f804;
              (DAT_20000140 < (short *)0x803ffeb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b2dc(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b470();
        FUN_0800b394(0x35);
      }
      iVar1 = FUN_0800b3f0(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08008582(&local_2c,0x14);
      iVar1 = FUN_0800b060(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000140) {
          for (DAT_20000140 = (short *)&DAT_0803f004;
              (DAT_20000140 < (short *)0x803f7eb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800b2dc(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_0800b470();
        FUN_0800b394(0x35);
      }
      iVar1 = FUN_0800b3f0(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3a0(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_0800b3a0(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800abf0();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800b3a0(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_0800b3a0(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_0800b3f0(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800abf0();
    }
  }
  else {
    iVar1 = FUN_0800abf0();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x08016308 : FUN_08016308 */

void FUN_08016308(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_08015968(&DAT_20005ee8,
                 (((uint)(ushort)DAT_20005ea9 - (uint)DAT_20005ee4) - 1 & 0x7fff) * 0x40,0x40);
    FUN_0800f820(0xf9,0x80,&DAT_20005eec);
    FUN_0800f820(0xf9,0x81,&DAT_20005efa);
    FUN_0800f820(0xf9,0x82,&DAT_20005f08);
  }
  else {
    uVar1 = (uint)DAT_20005ee6;
    DAT_20005ee6 = DAT_20005ee6 + 1;
    FUN_08015968(&DAT_20005ee8,((((ushort)DAT_20005edf - uVar1) - 1 & 0x7fff) + param_1) * 0x40,0x40
                );
    FUN_0800f820(0xf9,0x70,&DAT_20005eec);
    FUN_0800f820(0xf9,0x71,&DAT_20005efa);
    FUN_0800f820(0xf9,0x72,&DAT_20005f08);
  }
  return;
}



/* ENTRY 0x080163b4 : FUN_080163b4 */

/* WARNING: Removing unreachable block (ram,0x0801640e) */
/* WARNING: Removing unreachable block (ram,0x08016418) */
/* WARNING: Removing unreachable block (ram,0x080163fe) */

undefined4 FUN_080163b4(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  dword dVar4;
  dword dVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  dVar5 = 0x1f9f4;
  dVar4 = 0x5808687f;
  uVar1 = 0x6c5a85da;
  FUN_0800b470();
  FUN_0800b394(0x35);
  FUN_0800b428(&diag_RUNOKFLG,0x6c5a85da,extraout_r2,extraout_r3,uVar2,uVar1,uVar3,dVar4,dVar5);
  FUN_0800b3e0();
  return 1;
}



/* ENTRY 0x08016444 : FUN_08016444 */

undefined4 FUN_08016444(int param_1)

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



/* ENTRY 0x080164b0 : dispatch_extended_command */

void dispatch_extended_command(int param_1)

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
    dispatch_E0_E7(param_1);
    break;
  default:
    FUN_0801b880(param_1);
  }
  return;
}



/* ENTRY 0x080164ec : FUN_080164ec */

void FUN_080164ec(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fc04();
    FUN_080215b0();
  }
  return;
}



/* ENTRY 0x08016504 : FUN_08016504 */

void FUN_08016504(void)

{
  int iVar1;
  
  iVar1 = DAT_200032b8;
  if (DAT_200032b8 < 0) {
    iVar1 = -DAT_200032b8;
  }
  if ((iVar1 < 0x12d) || (DAT_200005c4 == '\0')) {
    DAT_2000022e = 0;
  }
  else if (DAT_2000022e < 100) {
    DAT_2000022e = DAT_2000022e + 1;
  }
  if (((byte)DAT_200032b2 & 0x10) == 0) {
    if (DAT_2000022e < 0x3c) {
      iVar1 = (int)DAT_2000031c;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_2000021c < 800) {
          DAT_2000021c = DAT_2000021c + 1;
        }
        iVar1 = DAT_200032b8;
        if (DAT_200032b8 < 0) {
          iVar1 = -DAT_200032b8;
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
        iVar1 = DAT_200032b8;
        if (DAT_200032b8 < 0) {
          iVar1 = -DAT_200032b8;
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
    DAT_200032b0 = DAT_200032b0 & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_2000021c)) / 900;
    DAT_200032b0 = DAT_200032b0 | 4;
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
LAB_080167b6:
    if (DAT_200002d8 != '\x01') {
      if (DAT_20000228 < 100) {
        DAT_20000228 = DAT_20000228 + 1;
      }
      else {
        DAT_200032b0 = DAT_200032b0 | 2;
      }
      goto LAB_08016808;
    }
  }
  else {
    iVar1 = (int)DAT_2000031c;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_080167b6;
  }
  if (DAT_20000228 < 0xb) {
    DAT_200032b0 = DAT_200032b0 & 0xfffd;
  }
  else {
    DAT_20000228 = DAT_20000228 + -1;
  }
LAB_08016808:
  if ((((DAT_200032b0 & 6) == 0) || (((byte)DAT_200032b2 & 0x10) == 0)) || (DAT_200032bc != '\0')) {
    DAT_2000022a = 0;
  }
  else if (DAT_2000022a < 0x4b0) {
    DAT_2000022a = DAT_2000022a + 1;
  }
  else {
    FUN_08020688();
    DAT_2000022a = 0;
  }
  return;
}



/* ENTRY 0x08016890 : FUN_08016890 */

void FUN_08016890(void)

{
  return;
}



/* ENTRY 0x08016894 : FUN_08016894 */

void FUN_08016894(void)

{
  uint uVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000078 = FUN_0800dc54(0);
  do {
    FUN_0801be08();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_0801b868();
    }
    FUN_0801e880();
    FUN_0800dca8(DAT_20000078,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x080168e0 : FUN_080168e0 */

void FUN_080168e0(undefined1 param_1,undefined1 param_2)

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
  uVar1 = FUN_08015c5c(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0800f8d8(&local_24);
  return;
}



/* ENTRY 0x08016944 : FUN_08016944 */

uint FUN_08016944(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_2c [14];
  undefined2 local_1e;
  undefined1 local_1c;
  byte local_1b;
  char local_1a;
  char local_19;
  
  bVar1 = false;
  for (uVar3 = 0; uVar3 < 0x14; uVar3 = uVar3 + 1 & 0xff) {
    local_2c[uVar3] = *(undefined1 *)(param_1 + uVar3);
  }
  uVar2 = FUN_08015c5c(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if ((local_1a == *(char *)(param_1 + 0x12)) && (local_19 == *(char *)(param_1 + 0x13))) {
    DAT_200009b8 = 0x14;
    local_2c[0] = 0xaa;
    local_2c[1] = 0x55;
    uVar3 = (uint)local_1b;
    if (uVar3 == 0x10) {
      DAT_200009c6 = CONCAT11(local_2c[2],local_2c[3]);
      DAT_200009c4 = local_1e;
      DAT_200009ca = 0;
      local_1c = 0x7a;
      local_1b = 0x10;
      if (local_1e < 0x16a9) {
        FUN_0801751c(local_1e,DAT_200009c6);
      }
      else {
        local_1e = 0;
        local_2c[3] = 0;
        local_2c[2] = 0;
        DAT_200009c6 = 0;
        DAT_200009c4 = 0;
      }
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 < 0x11) {
      if (((uVar3 != 0) && (uVar3 == 1)) && (uVar3 = FUN_08016ce8(), uVar3 == 1)) {
        FUN_08018d24(0);
        uVar3 = FUN_08018d24(1);
      }
    }
    else if (uVar3 == 0x11) {
      if (DAT_200009c4 == 0) {
        uVar3 = 0;
      }
      else {
        if (DAT_200009ca == local_1e) {
          uVar3 = (uint)DAT_200009ca;
          FUN_08017574(DAT_200009ca,local_2c + 2);
          DAT_200009ca = DAT_200009ca + 1;
          DAT_20003150 = (undefined1)((uVar3 * 0x32) / (uint)DAT_200009c4);
        }
        else if (DAT_200009ca == 0) {
          local_1e = 0;
        }
        else {
          local_1e = CONCAT11((char)(DAT_200009ca - 1 >> 8),(char)DAT_200009ca + -1);
        }
        local_1c = 0x7a;
        local_1b = 0x11;
        uVar3 = 1;
        bVar1 = true;
      }
    }
    else if (uVar3 == 0x12) {
      uVar4 = FUN_08015c5c(0x8029008,(uint)DAT_200009c4 * 0xc);
      DAT_200009c8 = FUN_08015c40(0x8029008,(uint)DAT_200009c4 * 0xc);
      uVar3 = (uint)DAT_200009c6;
      if ((uVar3 == uVar4) && (uVar3 = (uint)DAT_200009c4, 1000 < uVar3)) {
        local_2c[2] = (undefined1)(uVar4 >> 8);
        local_2c[3] = (undefined1)uVar4;
        local_1e = DAT_200009c4;
        local_1c = 0x7a;
        local_1b = 0x12;
        bVar1 = true;
        FUN_08018d24(0);
        uVar3 = FUN_08018d24(1);
      }
    }
    if (bVar1) {
      uVar2 = FUN_08015c5c(local_2c + 2,0x10);
      local_1a = (char)((ushort)uVar2 >> 8);
      local_19 = (char)uVar2;
      uVar3 = FUN_0800f638(local_2c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08016ba4 : FUN_08016ba4 */

void FUN_08016ba4(void)

{
  return;
}



/* ENTRY 0x08016ba8 : FUN_08016ba8 */

undefined4 FUN_08016ba8(int param_1)

{
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 0xb0;
  (&DAT_20004a00)[param_1 * 0x1c0] = 0;
  (&DAT_20004a01)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x08016bf0 : FUN_08016bf0 */

undefined4 FUN_08016bf0(int param_1)

{
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 0xbb;
  (&DAT_20004a00)[param_1 * 0x1c0] = 0;
  (&DAT_20004a01)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x08016c38 : FUN_08016c38 */

undefined4 FUN_08016c38(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801ebe0(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801ebe0(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x08016ce8 : FUN_08016ce8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016ce8(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009c4 = _DAT_08029000;
  DAT_200009c6 = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_08015c5c(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009c8 = FUN_08015c40(0x8029008,(uint)DAT_200009c4 * 0xc);
    if (DAT_200009c6 == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x08016d54 : FUN_08016d54 */

void FUN_08016d54(byte param_1,undefined1 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015c5c(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  return;
}



/* ENTRY 0x08016db4 : FUN_08016db4 */

void FUN_08016db4(int param_1)

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
  uVar2 = FUN_08015c5c(local_2c + 2,0x10);
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
    if (((bVar1) && ((&DAT_20004ba7)[uVar3 * 0x1c0] != '\0')) &&
       ((&DAT_20004b8e)[uVar3 * 0x1c0] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20004ad5)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
      }
      (&DAT_20004aed)[uVar3 * 0x1c0] = (char)uVar5;
      (&DAT_20004b8e)[uVar3 * 0x1c0] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x08016ee8 : FUN_08016ee8 */

void FUN_08016ee8(byte param_1,int param_2,int param_3)

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
    uVar1 = FUN_08015c5c(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800f944(&local_28);
  }
  return;
}



/* ENTRY 0x08016f54 : FUN_08016f54 */

undefined4 FUN_08016f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049fd)[uVar1 + param_1 * 0x1c0] = (&DAT_080274ac)[uVar1];
  }
  local_14 = param_4;
  FUN_0800bf08(param_2,&DAT_20004a04 + param_1 * 0x1c0);
  (&DAT_20004a09)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004a08)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004a07)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004a06)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049fd)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0800bf08((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_20004a0a)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004a0b)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0800bf08(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_20004a0c)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004a0d)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_20004a0e)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x08017058 : FUN_08017058 */

undefined4 FUN_08017058(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049fd)[uVar1 + param_1 * 0x1c0] = (&DAT_080274ac)[uVar1];
  }
  local_1c = param_4;
  FUN_0800bf08(param_2,&DAT_20004a00 + param_1 * 0x1c0);
  FUN_0800bf08(param_3,&DAT_20004a04 + param_1 * 0x1c0);
  (&DAT_20004a06)[param_1 * 0x1c0] = 0x45;
  (&DAT_20004a08)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004a07)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004a09)[param_1 * 0x1c0] = 0x32;
  FUN_0800bf08(param_4,&local_1c);
  (&DAT_20004a0a)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004a0b)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049fd)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0800bf08((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_20004a0c)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004a0d)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0800bf08(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_20004a0e)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004a0f)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_20004a10)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x080171a4 : FUN_080171a4 */

undefined4
FUN_080171a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0801fef8(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049fd)[uVar2 + param_1 * 0x1c0] = (&DAT_080274ac)[uVar2];
  }
  FUN_0800bf08(param_2,&DAT_20004a00 + param_1 * 0x1c0);
  FUN_0800bf08(param_3,&DAT_20004a04 + param_1 * 0x1c0);
  FUN_0800bf08((int)uVar1 >> 8,&local_24);
  (&DAT_20004a06)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a07)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf08(uVar1 & 0xff,&local_24);
  (&DAT_20004a08)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a09)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf08(param_4,&local_24);
  (&DAT_20004a0a)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a0b)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf08(param_5,&local_24);
  (&DAT_20004a0c)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a0d)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049fd)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0800bf08((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_20004a0e)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a0f)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0800bf08(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_20004a10)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004a11)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_20004a12)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x08017348 : FUN_08017348 */

int FUN_08017348(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0801fef8((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049fd)[uVar2 + param_1 * 0x1c0] = (&DAT_080274ac)[uVar2];
  }
  FUN_0800bf08(param_2,&DAT_20004a00 + param_1 * 0x1c0);
  FUN_0800bf08(param_3,&DAT_20004a04 + param_1 * 0x1c0);
  FUN_0800bf08((int)uVar1 >> 8,&local_28);
  (&DAT_20004a06)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_20004a07)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0800bf08(uVar1 & 0xff,&local_28);
  (&DAT_20004a08)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_20004a09)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049fd)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0800bf08(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_20004a0a)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_20004a0b)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0800bf08((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_20004a0a)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004a0b)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0800bf08(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_20004a0c)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004a0d)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_20004a0e)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x0801751c : FUN_0801751c */

void FUN_0801751c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0800b470();
  FUN_0800b394(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009cc = FUN_0800b3a0(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_0800b394(0x34);
  DAT_200009cc = FUN_0800b3f0(&DAT_08029000,param_1);
  DAT_200009cc = FUN_0800b3f0(&DAT_08029004,param_2);
  FUN_0800b3e0();
  return;
}



/* ENTRY 0x08017574 : FUN_08017574 */

void FUN_08017574(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_0800b470();
  FUN_0800b394(0x34);
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    DAT_200009cc = FUN_0800b428(param_1 * 0xc + 0x8029008 + uVar1 * 4,
                                *(undefined4 *)(param_2 + uVar1 * 4));
  }
  FUN_0800b394(0x34);
  FUN_0800b3e0();
  return;
}



/* ENTRY 0x080175bc : FUN_080175bc */

uint FUN_080175bc(void)

{
  uint uVar1;
  
  if ((DAT_200049ee == '\0') && (DAT_20004bae == '\0')) {
    uVar1 = ((uint)DAT_20004b4a * 0x32) / (uint)DAT_20004b4e +
            ((uint)DAT_20004d0a * 0x32) / (uint)DAT_20004d0e & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* ENTRY 0x0801760c : FUN_0801760c */

uint FUN_0801760c(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_200049ee == '\0') && (DAT_20004bae == '\0')) {
    uVar1 = ((uint)DAT_20004b4a * 100) / (uint)DAT_20004b4e;
    uVar2 = ((uint)DAT_20004d0a * 100) / (uint)DAT_20004d0e;
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



/* ENTRY 0x0801766c : FUN_0801766c */

void FUN_0801766c(void)

{
  DAT_200049ed = 0;
  DAT_20004bad = 0;
  FUN_080183b8();
  FUN_08011b14(0x2580);
  FUN_08011cb4(0x2580);
  return;
}



/* ENTRY 0x08017698 : FUN_08017698 */

void FUN_08017698(undefined4 param_1)

{
  FUN_08017058(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x080176aa : FUN_080176aa */

void FUN_080176aa(byte param_1,undefined1 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015c5c(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  return;
}



/* ENTRY 0x0801770c : FUN_0801770c */

void FUN_0801770c(int param_1)

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
  uVar1 = FUN_08015c5c(local_2c + 2,0x10);
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
            if (DAT_20003181 == '\x01') {
              cVar5 = DAT_20003181;
            }
            goto code_r0x0801780c;
          }
          if (local_1b == 0x35) {
            uVar4 = 1;
            cVar5 = '\x01';
            goto code_r0x0801780c;
          }
          if (local_1b != 0xa1) goto code_r0x0801780c;
        }
        else {
          if (local_1b == 0xb2) goto LAB_080177c4;
          if (local_1b != 0xb3) {
            if (local_1b != 0xb7) goto code_r0x0801780c;
            goto LAB_080177dc;
          }
        }
        uVar4 = 2;
        cVar5 = '\x01';
        goto code_r0x0801780c;
      }
    }
    else if (local_1b != 0xbc) {
      if (local_1b < 0xbd) {
        if (local_1b != 0xb9) {
          if (local_1b == 0xba) goto LAB_080177d2;
          if (local_1b != 0xbb) goto code_r0x0801780c;
        }
      }
      else {
        if (local_1b == 0xbe) {
LAB_080177dc:
          uVar4 = 1;
          cVar5 = '\x01';
          goto code_r0x0801780c;
        }
        if (local_1b != 0xbf) {
          if ((local_1b == 0xff) && (uVar4 = 1, DAT_20003181 == '\x01')) {
            cVar5 = DAT_20003181;
          }
          goto code_r0x0801780c;
        }
      }
LAB_080177c4:
      uVar4 = 6;
      cVar5 = '\x01';
      goto code_r0x0801780c;
    }
  }
LAB_080177d2:
  uVar4 = 0;
  cVar5 = '\x01';
code_r0x0801780c:
  if (((cVar5 != '\0') && ((&DAT_20004ba7)[uVar2 * 0x1c0] != '\0')) &&
     ((&DAT_20004b8e)[uVar2 * 0x1c0] == '\0')) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_20004ad5)[uVar3 + uVar2 * 0x1c0] = local_2c[uVar3 + 2];
    }
    (&DAT_20004aed)[uVar2 * 0x1c0] = (char)uVar4;
    (&DAT_20004b8e)[uVar2 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x0801787c : FUN_0801787c */

void FUN_0801787c(byte param_1,int param_2,char *param_3)

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
    uVar1 = FUN_08015c5c(acStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0800f944(&local_28);
    return;
  }
  if (param_2 < 0xb9) {
    if (param_2 == 0x35) {
      for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      uVar1 = FUN_08015c5c(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f944(&local_28);
      return;
    }
    if (param_2 == 0xa1) {
      for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xd] = 1;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015c5c(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f944(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      acStack_26[0xd] = 2;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015c5c(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f944(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      acStack_26[0xd] = 3;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08015c5c(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0800f944(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if (((param_2 == 0xba) || (param_2 == 0xbc)) || (bVar3 = false, param_2 == 0xbe))
  goto LAB_080179b6;
  if (!bVar3) {
    return;
  }
LAB_080179b6:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    acStack_26[uVar2] = param_3[uVar2];
  }
  acStack_26[0xe] = (param_1 & 1) - 0x1d;
  uVar1 = FUN_08015c5c(acStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  return;
}



/* ENTRY 0x08017a8c : FUN_08017a8c */

void FUN_08017a8c(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009cd) {
  case '\0':
    local_10 = (int)DAT_20004afc;
    local_14 = (uint)DAT_20004b52;
    local_8 = (uint)DAT_20004b46;
    local_c = (uint)DAT_20004b48;
    FUN_0800f6a4(0xf1,0,local_c,local_8,(int)DAT_20004b4a,(int)DAT_20004b4e,(int)DAT_20004b50);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004b3e;
    local_14 = (uint)DAT_20004b3c;
    local_8 = (uint)DAT_20004b34;
    local_c = (uint)DAT_20004b32;
    FUN_0800f6a4(0xf1,1,local_c,local_8,(int)DAT_20004b36,(int)DAT_20004b38,(int)DAT_20004b3a);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004afc;
    local_14 = (uint)DAT_20004afa;
    local_8 = (uint)DAT_20004af2;
    local_c = (uint)DAT_20004af0;
    FUN_0800f6a4(0xf1,2,local_c,local_8,(int)DAT_20004af4,(int)DAT_20004af6,(int)DAT_20004af8);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004b0a;
    local_14 = (uint)DAT_20004b08;
    local_8 = (uint)DAT_20004b00;
    local_c = (uint)DAT_20004afe;
    FUN_0800f6a4(0xf1,3,local_c,local_8,(int)DAT_20004b02,(int)DAT_20004b04,(int)DAT_20004b06);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004b18;
    local_14 = (uint)DAT_20004b16;
    local_8 = (uint)DAT_20004b0e;
    local_c = (uint)DAT_20004b0c;
    FUN_0800f6a4(0xf1,4,local_c,local_8,(int)DAT_20004b10,(int)DAT_20004b12,(int)DAT_20004b14);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_20004b26;
    local_14 = (uint)DAT_20004b24;
    local_8 = (uint)DAT_20004b1c;
    local_c = (uint)DAT_20004b1a;
    FUN_0800f6a4(0xf1,5,local_c,local_8,(int)DAT_20004b1e,(int)DAT_20004b20,(int)DAT_20004b22);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004b2a;
    local_c = (uint)DAT_20004b28;
    FUN_0800f6a4(0xf1,6,local_c,local_8,0,0,(int)DAT_20004b40);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004cbc;
    local_14 = (uint)DAT_20004d12;
    local_8 = (uint)DAT_20004d06;
    local_c = (uint)DAT_20004d08;
    FUN_0800f6a4(0xf2,0,local_c,local_8,(int)DAT_20004d0a,(int)DAT_20004d0e,(int)DAT_20004d10);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004cfe;
    local_14 = (uint)DAT_20004cfc;
    local_8 = (uint)DAT_20004cf4;
    local_c = (uint)DAT_20004cf2;
    FUN_0800f6a4(0xf2,1,local_c,local_8,(int)DAT_20004cf6,(int)DAT_20004cf8,(int)DAT_20004cfa);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004cbc;
    local_14 = (uint)DAT_20004cba;
    local_8 = (uint)DAT_20004cb2;
    local_c = (uint)DAT_20004cb0;
    FUN_0800f6a4(0xf2,2,local_c,local_8,(int)DAT_20004cb4,(int)DAT_20004cb6,(int)DAT_20004cb8);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004cca;
    local_14 = (uint)DAT_20004cc8;
    local_8 = (uint)DAT_20004cc0;
    local_c = (uint)DAT_20004cbe;
    FUN_0800f6a4(0xf2,3,local_c,local_8,(int)DAT_20004cc2,(int)DAT_20004cc4,(int)DAT_20004cc6);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004cd8;
    local_14 = (uint)DAT_20004cd6;
    local_8 = (uint)DAT_20004cce;
    local_c = (uint)DAT_20004ccc;
    FUN_0800f6a4(0xf2,4,local_c,local_8,(int)DAT_20004cd0,(int)DAT_20004cd2,(int)DAT_20004cd4);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004ce6;
    local_14 = (uint)DAT_20004ce4;
    local_8 = (uint)DAT_20004cdc;
    local_c = (uint)DAT_20004cda;
    FUN_0800f6a4(0xf2,5,local_c,local_8,(int)DAT_20004cde,(int)DAT_20004ce0,(int)DAT_20004ce2);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004cea;
    local_c = (uint)DAT_20004ce8;
    FUN_0800f6a4(0xf2,6,local_c,local_8,0,0,(int)DAT_20004d00);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x0e':
    FUN_0800f820(0xf3,0,&DAT_20004b56);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x0f':
    FUN_0800f820(0xf3,1,&DAT_20004b64);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_20004b73,DAT_20004b72);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004b80,DAT_20004b7f);
    local_10._0_3_ = CONCAT12(DAT_20004b81,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b82,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004b83;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004b86,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004b86 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004b88);
    FUN_0800f820(0xf3,2,&local_14);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_20004b75,DAT_20004b74);
    local_14._0_3_ = CONCAT12(DAT_20004b76,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004b77,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004b79,DAT_20004b78);
    local_10._0_3_ = CONCAT12(DAT_20004b7a,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b7b,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004b7e,CONCAT11(DAT_20004b7c,DAT_20004b7d)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004b8d,DAT_20004b8c);
    FUN_0800f820(0xf3,3,&local_14);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x12':
    FUN_0800f820(0xf4,0,&DAT_20004d16);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x13':
    FUN_0800f820(0xf4,1,&DAT_20004d24);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004d33,DAT_20004d32);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004d40,DAT_20004d3f);
    local_10._0_3_ = CONCAT12(DAT_20004d41,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d42,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004d43;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004d46,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004d46 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004d48);
    FUN_0800f820(0xf4,2,&local_14);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004d35,DAT_20004d34);
    local_14._0_3_ = CONCAT12(DAT_20004d36,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004d37,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004d39,DAT_20004d38);
    local_10._0_3_ = CONCAT12(DAT_20004d3a,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d3b,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004d3e,CONCAT11(DAT_20004d3c,DAT_20004d3d)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004d4d,DAT_20004d4c);
    FUN_0800f820(0xf4,3,&local_14);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200049f4;
    local_c = (uint)DAT_200049ee;
    FUN_0800f6a4(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009cd = DAT_200009cd + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004bb4;
    local_c = (uint)DAT_20004bae;
    FUN_0800f6a4(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009cd = '\0';
  }
  return;
}



/* ENTRY 0x08018318 : FUN_08018318 */

void FUN_08018318(int param_1,int param_2,int param_3)

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
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x20005f2a) = 0;
  }
  FUN_08008582(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20005f29)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20005f28)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_08015c5c(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  return;
}



/* ENTRY 0x080183b8 : FUN_080183b8 */

void FUN_080183b8(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005f28)[uVar1 * 0x11] = (&DAT_080274d2)[uVar1];
    (&DAT_20005f29)[uVar1 * 0x11] = (&DAT_080274b3)[uVar1];
    (&DAT_20006038)[uVar1 * 0x11] = (&DAT_080274d2)[uVar1];
    (&DAT_20006039)[uVar1 * 0x11] = (&DAT_080274b3)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006148)[uVar1 * 0x11] = (&DAT_080274e2)[uVar1];
    (&DAT_20006149)[uVar1 * 0x11] = (&DAT_080274c3)[uVar1];
    (&DAT_20006247)[uVar1 * 0x11] = (&DAT_080274e2)[uVar1];
    (&DAT_20006248)[uVar1 * 0x11] = (&DAT_080274c3)[uVar1];
  }
  return;
}



/* ENTRY 0x08018458 : FUN_08018458 */

void FUN_08018458(int param_1)

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
  uVar1 = FUN_08015c5c(local_30 + 2,0x10);
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
LAB_080185dc:
    uVar4 = uVar4 + 4;
LAB_080185f4:
    uVar4 = uVar4 + 1 & 0xff;
LAB_080185fa:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08018600:
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
LAB_080186f2:
        uVar4 = uVar4 + 1 & 0xff;
LAB_080186f8:
        uVar4 = uVar4 + 1 & 0xff;
LAB_080186fe:
        if ((&DAT_20004ba7)[uVar5 * 0x1c0] == '\0') {
          return;
        }
        if ((&DAT_20004b8e)[uVar5 * 0x1c0] != '\0') {
          return;
        }
        (&DAT_20004aed)[uVar5 * 0x1c0] = 0;
        (&DAT_20004b8e)[uVar5 * 0x1c0] = local_1f;
        (&DAT_2000614a)[uVar5 * 0xff + uVar4 * 0x11] = 1;
        return;
      default:
switchD_080184fc_default:
        if (bVar7) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x080184ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_080184ee + (uint)(byte)(&UNK_080184ee)[uVar3] * 2))();
        return;
      }
      goto LAB_080185dc;
    }
    if (uVar2 == 0xd0) goto LAB_080185f4;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_080184fc_default;
    }
    if (uVar2 == 0xae) goto LAB_08018600;
    if (0xae < uVar2) {
      if (uVar2 == 0xaf) goto LAB_080186f8;
      if (uVar2 != 0xb5) {
        bVar7 = false;
        if (uVar2 == 0xb6) goto LAB_080186f2;
        goto LAB_080184d2;
      }
      goto LAB_080185fa;
    }
    if (uVar2 == 1) {
      uVar6 = 1;
      uVar2 = 0;
      do {
        if (5 < uVar2) {
code_r0x08018536:
          DAT_20004ba7 = uVar6;
          DAT_20004d67 = uVar6;
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
          uVar1 = FUN_08015c5c(&local_42,0x10);
          local_32 = (undefined1)((ushort)uVar1 >> 8);
          local_31 = (undefined1)uVar1;
          FUN_0800f8d8(&local_44);
          return;
        }
        if (local_30[uVar2 + 2] != (&DAT_080274a6)[uVar2]) {
          uVar6 = 0;
          goto code_r0x08018536;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while( true );
    }
    if (uVar2 == 0xa0) goto LAB_080186fe;
    if (uVar2 == 0xa4) goto LAB_0801860c;
    bVar7 = uVar2 == 0xa8;
LAB_080184d2:
    if (!bVar7) {
      return;
    }
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_0801860c:
  if (((&DAT_20004ba7)[uVar5 * 0x1c0] != '\0') && ((&DAT_20004b8e)[uVar5 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < (byte)(&DAT_20005f29)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004ad5)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004aed)[uVar5 * 0x1c0] = (&DAT_20005f29)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_20004b8e)[uVar5 * 0x1c0] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x20005f2a) = 1;
  }
  return;
}



/* ENTRY 0x08018768 : FUN_08018768 */

void FUN_08018768(int param_1,int param_2,int param_3)

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
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006149)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x2000614b + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006148)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_08015c5c(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  (&DAT_2000614a)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x08018814 : FUN_08018814 */

void FUN_08018814(int param_1)

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
    FUN_080226ac(uVar3);
  }
  else if (((&DAT_20004ba7)[uVar3 * 0x1c0] != '\0') && ((&DAT_20004b8e)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004ad5)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004ae3)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004ae6)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004aed)[uVar3 * 0x1c0] = 0x14;
    (&DAT_20004b8e)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x080188e4 : FUN_080188e4 */

void FUN_080188e4(byte param_1,undefined4 param_2,undefined1 param_3)

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
  uVar1 = FUN_08015c5c(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0800f944(&local_28);
  return;
}



/* ENTRY 0x08018948 : FUN_08018948 */

void FUN_08018948(int param_1)

{
  (&DAT_200049f0)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049f1)[param_1 * 0x1c0] = 0;
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 0x61;
  (&DAT_20004a00)[param_1 * 0x1c0] = 0;
  (&DAT_20004a01)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_20004ba8 = DAT_20004ba8 + 1;
    FUN_08009d90(&DAT_200049fd,5);
  }
  else {
    DAT_20004d68 = DAT_20004d68 + 1;
    FUN_08009df0(&DAT_200049fd + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x080189f0 : FUN_080189f0 */

void FUN_080189f0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009c8;
  uVar2 = (uint)DAT_200009c4 * 3;
  bVar3 = 0;
  (&DAT_200049f0)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049f1)[param_1 * 0x1c0] = 0;
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004a00)[param_1 * 0x1c0] = 6;
  (&DAT_20004a01)[param_1 * 0x1c0] = 0;
  (&DAT_20004a02)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_20004a03)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_20004a04)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_20004a05)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_20004a06)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_200049fd)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_20004a07)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_20004ba8 = DAT_20004ba8 + 1;
    FUN_08009d90(&DAT_200049fd,0xb);
  }
  else {
    DAT_20004d68 = DAT_20004d68 + 1;
    FUN_08009df0(&DAT_200049fd + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x08018b14 : FUN_08018b14 */

void FUN_08018b14(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_200009c4 * 0xc - param_2;
  bVar2 = 0;
  if (uVar3 < 0x80) {
    uVar3 = uVar3 + 4 & 0xff;
  }
  else {
    uVar3 = 0x84;
  }
  (&DAT_200049f0)[param_1 * 0x1c0] = 99;
  (&DAT_200049f1)[param_1 * 0x1c0] = 0;
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 99;
  (&DAT_20004a00)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_20004a01)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_20004a02)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_20004a03)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_20004a04)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049fd)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004a05)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_20004a05)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_20004a01)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20004ba8 = DAT_20004ba8 + 1;
    FUN_08009d90(&DAT_200049fd,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004d68 = DAT_20004d68 + 1;
    FUN_08009df0(&DAT_200049fd + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x08018c7c : FUN_08018c7c */

void FUN_08018c7c(int param_1)

{
  (&DAT_200049f0)[param_1 * 0x1c0] = 100;
  (&DAT_200049f1)[param_1 * 0x1c0] = 0;
  (&DAT_200049fd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049fe)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049ff)[param_1 * 0x1c0] = 100;
  (&DAT_20004a00)[param_1 * 0x1c0] = 0;
  (&DAT_20004a01)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_20004ba8 = DAT_20004ba8 + 1;
    FUN_08009d90(&DAT_200049fd,5);
  }
  else {
    DAT_20004d68 = DAT_20004d68 + 1;
    FUN_08009df0(&DAT_200049fd + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08018d24 : FUN_08018d24 */

undefined4 FUN_08018d24(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_200049ef)[param_1 * 0x1c0] == '\0') && ((&DAT_200049f3)[param_1 * 0x1c0] == '\0')) {
    (&DAT_200049ef)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08018d60 : FUN_08018d60 */

byte FUN_08018d60(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_200049f5)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_200049f2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049f1)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_200009c4 * 0xc < (&DAT_200049f8)[param_1 * 0x70] + 0x80) {
        (&DAT_200049f5)[param_1 * 0x1c0] = 100;
        FUN_08018c7c(param_1);
        return 1;
      }
      (&DAT_200049f5)[param_1 * 0x1c0] = 99;
      (&DAT_200049f8)[param_1 * 0x70] = (&DAT_200049f8)[param_1 * 0x70] + 0x80;
      FUN_08018b14(param_1,(&DAT_200049f8)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_200049f5)[param_1 * 0x1c0] = 0x61;
    FUN_08018948(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_200049f3)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_200049f5)[param_1 * 0x1c0] = 0x61;
      FUN_08018948(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_200049f2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049f1)[param_1 * 0x1c0] == 'a')) {
        (&DAT_200049f5)[param_1 * 0x1c0] = 0x62;
        FUN_080189f0(param_1);
        return 1;
      }
      (&DAT_200049f5)[param_1 * 0x1c0] = 0x61;
      FUN_08018948(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_200049f2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049f1)[param_1 * 0x1c0] == 'c')) {
        (&DAT_200049f5)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_200049f5)[param_1 * 0x1c0] = 0x61;
      FUN_08018948(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_200049f2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049f1)[param_1 * 0x1c0] == 'b')) {
      (&DAT_200049f5)[param_1 * 0x1c0] = 99;
      (&DAT_200049f8)[param_1 * 0x70] = 0;
      FUN_08018b14(param_1,(&DAT_200049f8)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_200049f5)[param_1 * 0x1c0] = 0x61;
      FUN_08018948(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x08018f70 : FUN_08018f70 */

undefined4 FUN_08018f70(char *param_1)

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



/* ENTRY 0x08018fae : FUN_08018fae */

void FUN_08018fae(int param_1)

{
  FUN_0802277c(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x08018fc4 : FUN_08018fc4 */

void FUN_08018fc4(void)

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
  iVar4 = FUN_0801ed98();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_20003181 != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_20003181 == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_20003181 != '\0')) {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = 2;
  }
  if (DAT_20000872 < 0x32) {
    DAT_20000872 = DAT_20000872 + 1;
    if (diag_cartstep == '\b') {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003be2)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003be2)[uVar5] = 0;
      }
    }
    FUN_08022610(&DAT_20003be2);
  }
  else {
    if (diag_cartstep == '\0') {
      bVar1 = false;
      bVar8 = false;
    }
    else if (diag_cartstep == '\b') {
      bVar1 = false;
      bVar8 = false;
      DAT_20000872 = 0;
    }
    else {
      if ((((ushort)DAT_200006b0 & 3) == 0) &&
         (((1000 < diag_VehicleSpeed && (diag_speedAcc < -0x14)) ||
          ((diag_VehicleSpeed < -1000 && (0x14 < diag_speedAcc)))))) {
        DAT_20000860 = 0x14;
        DAT_20000864 = 0;
      }
      DAT_20000868 = DAT_20000868 + 1;
      if (DAT_20000868 == (DAT_20000868 / 2) * 2) {
        if (DAT_2000086c == 0) {
          DAT_2000086c = 1;
        }
        else {
          DAT_2000086c = 0;
        }
      }
      if ((DAT_20000864 < DAT_20000860) && (DAT_2000320e == '\0')) {
        bVar1 = true;
        bVar8 = true;
        iVar6 = DAT_20000860 - (DAT_20000864 + 1);
        DAT_20000870 = 0;
        DAT_20000864 = DAT_20000864 + 1;
      }
      else {
        DAT_20000864 = 0;
        DAT_20000860 = 0;
        iVar6 = 4;
        if (DAT_2000320e == '\x01') {
          if (DAT_2000086c == 1) {
            bVar8 = iVar7 != 1;
            if (iVar7 != 2) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            bVar8 = false;
          }
          DAT_20000870 = 0;
        }
        else if ((DAT_200006c0 == 0x12) || ((DAT_200006c0 == 0x14 && (DAT_200006c8 == '\x01')))) {
          bVar1 = true;
          bVar8 = true;
          if (iVar7 == 1) {
            DAT_20000870 = DAT_20000870 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000821)[uVar5] = (&DAT_080272ee)[(uint)DAT_20000870 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000870 = DAT_20000870 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000821)[uVar5] = (&DAT_08027300)[(uint)DAT_20000870 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000870 = 0;
          }
        }
        else {
          bVar1 = false;
          bVar8 = false;
          if (iVar7 == 1) {
            DAT_20000870 = DAT_20000870 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000821)[uVar5] = (&DAT_080272ee)[(uint)DAT_20000870 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000870 = DAT_20000870 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000821)[uVar5] = (&DAT_08027300)[(uint)DAT_20000870 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000870 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003be2)[uVar5] = 0;
    }
    if (DAT_20003181 == '\0') {
      if (DAT_20000870 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003be3)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003be2 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003be3 = DAT_20003be2;
        }
        else if (bVar8) {
          DAT_20003bf1 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003bf2 = DAT_20003bf1;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003be2)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000821)[uVar5] * 0x14) / 0x28);
          (&DAT_20003be3)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000821)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fb20();
        (&DAT_20003be2)[extraout_r3 * 3] = 0;
        (&DAT_20003be3)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003be4)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_2000320c == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fb20();
        bVar3 = DAT_20003216;
        bVar2 = DAT_20003214;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_20003214,(ushort)DAT_20003215);
        (&DAT_20003be2)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003be3)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003be4)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003be2)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003be2)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003be3)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003be3)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003be4)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003be4)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_2000320c == 1) {
      FUN_0801feb4(&local_28,(ushort)DAT_200006b0);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801fb20();
        (&DAT_20003be2)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003be3)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003be4)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_0801feb4(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006b0 * -10 & 0xffff);
        (&DAT_20003be2)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003be3)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003be4)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_08022610(&DAT_20003be2);
  }
  return;
}



/* ENTRY 0x080195a4 : FUN_080195a4 */

void FUN_080195a4(void)

{
  FUN_0801f5f0();
  FUN_0800bf5c(4,0xad9);
  FUN_0801e800();
  FUN_08021c0c();
  FUN_0801ed08();
  FUN_0800c826();
  return;
}



/* ENTRY 0x080195d4 : FUN_080195d4 */

void FUN_080195d4(undefined1 param_1)

{
  DAT_20005dec = 0x1451090;
  DAT_20005df0 = FUN_0800f034();
  DAT_20005df4 = param_1;
  DAT_20005dfa = (char)(diag_TotalVol_show / 100);
  DAT_20005dfc = DAT_2000312e;
  DAT_20005dfd = 0;
  DAT_20005dfb = DAT_2000312d;
  DAT_20005df9 = DAT_2000312c;
  DAT_20005df5 = DAT_20003128;
  DAT_20005e01 = DAT_2000312f;
  DAT_20005e02 = (char)(DAT_20003124 / 100);
  DAT_20005e00 = (char)(DAT_20003118 / 1000);
  DAT_20005dfe = DAT_20003130;
  DAT_20005e03 = diag_readoutmeter;
  DAT_20005e07 = (short)(diag_currentmeter / 100);
  DAT_20005e09 = (undefined2)DAT_20003140;
  DAT_20005e10 = (undefined2)DAT_20003144;
  DAT_20005e12 = (undefined2)DAT_20003148;
  DAT_20005e0c = (char)(DAT_20003120 / 100);
  DAT_20005e0d = (char)(DAT_2000311c / 100);
  DAT_20005e0e = DAT_20003132;
  DAT_20005e0f = DAT_20003133;
  return;
}



/* ENTRY 0x080196e8 : FUN_080196e8 */

void FUN_080196e8(undefined1 param_1)

{
  DAT_20005ede = param_1;
  return;
}



/* ENTRY 0x080196f4 : FUN_080196f4 */

undefined4 FUN_080196f4(undefined4 param_1)

{
  FUN_08019a80(param_1);
  FUN_08008494(&DAT_20005d6c,&DAT_20005dac,0x40);
  return 1;
}



/* ENTRY 0x08019718 : FUN_08019718 */

bool FUN_08019718(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08008494(&DAT_20005d6c,(uint)DAT_200009d0 * 0x40 + 0x20004d6c,0x40);
    }
    (&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20005d6c,(uint)DAT_200009d0 * 0x40 + 0x20004d6c,0x40);
      bVar1 = true;
    }
    (&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d74)[(uint)DAT_200009d0 * 0x40] < 0xfe)) {
      FUN_08008494(&DAT_20005d6c,(uint)DAT_200009d0 * 0x40 + 0x20004d6c,0x40);
      bVar1 = true;
    }
    FUN_08019a80(param_1);
    FUN_08008494((uint)DAT_200009d0 * 0x40 + 0x20004d6c,&DAT_20005dac,0x40);
  }
  DAT_200009d0 = DAT_200009d0 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x08019814 : FUN_08019814 */

void FUN_08019814(void)

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
  
  if (DAT_20005eae == '#') {
    local_1a = (undefined1)DAT_20005e89;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20005e89 >> 8);
    local_18 = (undefined1)DAT_20005e99;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20005e99 >> 8);
    local_16 = (undefined1)DAT_20005ea1;
    local_15 = (undefined1)(DAT_20005ea1 >> 8);
    local_14 = (undefined1)DAT_20005e9d;
    local_13 = (undefined1)((uint)DAT_20005e9d >> 8);
    local_12 = (undefined1)((uint)DAT_20005e9d >> 0x10);
    local_11 = (undefined1)((uint)DAT_20005e9d >> 0x18);
    local_10 = (undefined1)DAT_20005ea5;
    local_f = (undefined1)((uint)DAT_20005ea5 >> 8);
    local_e = (undefined1)((uint)DAT_20005ea5 >> 0x10);
    local_d = (undefined1)((uint)DAT_20005ea5 >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_08015c5c(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800f9b0(0xf9,0x23,&local_1a);
    DAT_20005eae = '\0';
  }
  else if (DAT_20005eae == -0x5d) {
    local_1a = (undefined1)DAT_20005ebe;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20005ebe >> 8);
    local_18 = (undefined1)DAT_20005ece;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20005ece >> 8);
    local_16 = (undefined1)DAT_20005ed6;
    local_15 = (undefined1)(DAT_20005ed6 >> 8);
    local_14 = (undefined1)DAT_20005ed2;
    local_13 = (undefined1)((uint)DAT_20005ed2 >> 8);
    local_12 = (undefined1)((uint)DAT_20005ed2 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20005ed2 >> 0x18);
    local_10 = (undefined1)DAT_20005eda;
    local_f = (undefined1)((uint)DAT_20005eda >> 8);
    local_e = (undefined1)((uint)DAT_20005eda >> 0x10);
    local_d = (undefined1)((uint)DAT_20005eda >> 0x18);
    local_c = 0xf9;
    local_b = 0xa3;
    uVar1 = FUN_08015c5c(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0800f9b0(0xf9,0xa3,&local_1a);
    DAT_20005eae = '\0';
  }
  else if (DAT_20005eae == 'a') {
    if (DAT_20005ea1 < DAT_20005ee4) {
      FUN_08016308(0);
      DAT_20005ee4 = DAT_20005ee4 - 1;
    }
    else {
      FUN_08016308(0);
      DAT_20005eae = '\0';
    }
  }
  else if (DAT_20005eae == -0x1f) {
    if (DAT_20005ed6 < DAT_20005ee4) {
      FUN_08016308(0x10000);
      DAT_20005ee4 = DAT_20005ee4 - 1;
    }
    else {
      FUN_08016308(0x10000);
      DAT_20005eae = '\0';
    }
  }
  return;
}



/* ENTRY 0x08019a74 : FUN_08019a74 */

void FUN_08019a74(undefined1 param_1)

{
  DAT_20005eaf = param_1;
  return;
}



/* ENTRY 0x08019a80 : FUN_08019a80 */

void FUN_08019a80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0801eda4();
    DAT_20005dac = 0x1451090;
    DAT_20005db4 = (undefined1)param_1;
    DAT_20005db0 = FUN_0800f034();
    DAT_20005db5 = diag_cartstep;
    DAT_20005db6 = (undefined1)((uint)uVar1 >> 8);
    DAT_20005db7 = (undefined1)uVar1;
    DAT_20005db9 = diag_allwarnbit;
    DAT_20005db8 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005dbe = (undefined2)diag_TotalVoltage;
    DAT_20005dc0 = (undefined2)diag_TotalCurrent;
    DAT_20005dc2 = (undefined2)(diag_VehicleSpeed / 100);
    DAT_20005dc4 = (undefined2)diag_VectorVol;
    DAT_20005dc6 = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0801ed98();
    DAT_20005dc8 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801ed80();
    DAT_20005dca = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0801ed8c();
    DAT_20005dcc = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005dcd = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005dd0 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005dce = 0x82;
      }
      else {
        DAT_20005dce = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005dce = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005dcf = 0x82;
      }
      else {
        DAT_20005dcf = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005dcf = 0x7f;
    }
    DAT_20005dd1 = 0;
    if (diag_hall_err < 0x100) {
      DAT_20005dd2 = (undefined1)diag_hall_err;
    }
    else {
      DAT_20005dd2 = 0xff;
    }
  }
  return;
}



/* ENTRY 0x08019be8 : FUN_08019be8 */

undefined4 FUN_08019be8(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_08015a2c((uVar3 + param_3) * 0x40);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08015a2c((*param_2 + param_3) * 0x40);
    if (iVar1 == -1) {
      iVar1 = FUN_08015a2c((*param_1 + param_3) * 0x40);
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



/* ENTRY 0x08019c54 : FUN_08019c54 */

void FUN_08019c54(void)

{
  uint uVar1;
  
  DAT_20005e7b = 0xff;
  DAT_20005ee3 = 0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004d74)[uVar1 * 0x40] = 0xff;
  }
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005e14)[uVar1] = 0;
    (&DAT_20005e1a)[uVar1] = 0;
  }
  return;
}



/* ENTRY 0x08019c9c : FUN_08019c9c */

void FUN_08019c9c(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009d8 = DAT_200009d8 + 1;
  if ((DAT_20005e2d != '\0') && (DAT_20005e2d = FUN_0801586c(), DAT_20005e2d != '\0')) {
    return;
  }
  if (DAT_20005e2c == 0x24) {
LAB_0801aa48:
    if (DAT_20005e33 == 0) {
      DAT_20005e2c = 0;
    }
    else {
      DAT_20005e2d = '\x01';
      DAT_20005e2f = DAT_20005e37 << 0x10;
      FUN_08015878(1,DAT_20005e37);
      DAT_20005e37 = DAT_20005e37 + 1;
      DAT_20005e33 = DAT_20005e33 + -1;
      DAT_20005e2c = 0x25;
    }
    return;
  }
  if (0x24 < DAT_20005e2c) {
    if (DAT_20005e2c == 0x25) {
      DAT_20005e2d = 1;
      FUN_08015878(0,DAT_20005e37);
      DAT_20005e2c = 0x24;
      return;
    }
    if (((DAT_20005e2c != 0xd2) && (DAT_20005e2c != 0xd3)) && (bVar2 = DAT_20005e2c == 0xd4, !bVar2)
       ) goto LAB_08019cd2;
    goto LAB_0801aa48;
  }
  if (DAT_20005e2c == 2) {
    DAT_20005e2d = 1;
    FUN_08015878(1,DAT_20005e37);
    DAT_20005e2c = 0;
    return;
  }
  if (2 < DAT_20005e2c) {
    if ((DAT_20005e2c == 0x22) || (bVar2 = false, DAT_20005e2c == 0x23)) goto LAB_0801aa48;
LAB_08019cd2:
    if (!bVar2) {
      return;
    }
    DAT_20005e2d = 1;
    FUN_080158c0();
    DAT_20005e2c = 0;
    return;
  }
  if (DAT_20005e2c != 0) {
    bVar2 = DAT_20005e2c == 1;
    goto LAB_08019cd2;
  }
  if (DAT_20005e7b == 0) {
    if (DAT_20005ead == 0x60) {
      DAT_20005eae = 0;
      DAT_20005ead = 0;
    }
    else if (DAT_20005ead == 0x61) {
      if (DAT_20005e85 != 0) {
        DAT_20005eae = 0x61;
      }
      DAT_20005ead = 0;
    }
    else if (DAT_20005ead == 0xe0) {
      DAT_20005eae = 0;
      DAT_20005ead = 0;
    }
    else if (DAT_20005ead == 0xe1) {
      if (DAT_20005eba != 0) {
        DAT_20005eae = 0xe1;
      }
      DAT_20005ead = 0;
    }
    if (DAT_20005eae != 0) {
      return;
    }
    if (DAT_20005eaf == 0xef) {
      iVar1 = FUN_080196f4(0xef);
      if (iVar1 != 0) {
        DAT_20005e7b = 0x30;
      }
      DAT_20005eaf = 0;
      DAT_20005eb0 = 'J';
    }
    else if ((DAT_20005eaf & 0xf0) == 0xe0) {
      iVar1 = FUN_08019718(DAT_20005eaf);
      if (iVar1 != 0) {
        DAT_20005e7b = 0x30;
      }
      DAT_20005eaf = 0;
      DAT_20005eb0 = 'J';
    }
    else if (DAT_20005eb0 == '\0') {
      if (DAT_20005eaf == 0xf0) {
        iVar1 = FUN_08019718(0xf0);
        if (iVar1 != 0) {
          DAT_20005e7b = 0x30;
        }
        DAT_20005eaf = 0;
        DAT_20005eb1 = 'J';
      }
      else if (DAT_20005eb1 == '\0') {
        if (DAT_20005eaf == 0) {
          if (DAT_20005ead == 0x23) {
            DAT_20005e7b = DAT_20005ead;
          }
          else if (DAT_20005ede == '\0') {
            if (DAT_20005ead == 0xa3) {
              DAT_20005e7b = DAT_20005ead;
            }
            else if (DAT_200009d2 == -0x5b) {
              DAT_20005e7b = 0x10;
              DAT_200009d2 = '\0';
            }
            else if (DAT_200009d2 == -0x5a) {
              DAT_20005e7b = 0x90;
              DAT_200009d2 = '\0';
            }
            else if ((DAT_200009d8 % 0x15 == 0x11) && (iVar1 = FUN_08019718(0), iVar1 != 0)) {
              DAT_20005e7b = 0x30;
            }
          }
          else {
            FUN_080195d4(DAT_20005ede);
            DAT_20005e7b = 0xb0;
            DAT_20005ede = '\0';
          }
        }
        else {
          iVar1 = FUN_08019718(DAT_20005eaf);
          if (iVar1 != 0) {
            DAT_20005e7b = 0x30;
          }
          DAT_20005eaf = 0;
        }
      }
      else {
        iVar1 = FUN_08019718(0xfe);
        if (iVar1 != 0) {
          DAT_20005e7b = 0x30;
        }
        DAT_20005eb1 = DAT_20005eb1 + -1;
      }
    }
    else {
      iVar1 = FUN_08019718(0xff);
      if (iVar1 != 0) {
        DAT_20005e7b = 0x30;
      }
      DAT_20005eb0 = DAT_20005eb0 + -1;
    }
  }
  if (DAT_20005e7b == 0x90) {
    DAT_20005e2e = 0xd2;
    DAT_20005e7b = 0x91;
    goto code_r0x0801a85e;
  }
  if (DAT_20005e7b < 0x91) {
    if (DAT_20005e7b == 0x21) {
LAB_08019ff0:
      iVar1 = FUN_08019be8(&DAT_20005e7d,&DAT_20005e81,0);
      if (iVar1 == 1) {
        DAT_20005ea9 = DAT_20005e7d;
        DAT_20005e7b = 0x23;
      }
      else if (iVar1 == 2) {
        DAT_20005e7d = 0x4000;
        DAT_20005e81 = 0x7fff;
        DAT_20005e7b = 0x22;
      }
      goto code_r0x0801a85e;
    }
    if (DAT_20005e7b < 0x22) {
      if (DAT_20005e7b == 0x11) {
        DAT_20005e37 = 0x20;
        DAT_20005e2e = 2;
        DAT_20005e7b = 0x12;
        goto code_r0x0801a85e;
      }
      if (DAT_20005e7b < 0x12) {
        if (DAT_20005e7b == 0) goto code_r0x0801a85e;
        bVar2 = DAT_20005e7b == 0x10;
      }
      else {
        if (DAT_20005e7b == 0x12) {
          DAT_20005e3b = 0x1451090;
          DAT_20005e33 = 4;
          DAT_20005e37 = 0;
          DAT_20005e2f = 0x200000;
          DAT_20005e2e = 3;
          DAT_20005ea9 = 0;
          DAT_20005e7b = 0x20;
          goto code_r0x0801a85e;
        }
        bVar2 = false;
        if (DAT_20005e7b == 0x20) {
          DAT_20005e7d = 0;
          DAT_20005e81 = 0x3fff;
          DAT_20005e7b = 0x21;
          goto LAB_08019ff0;
        }
      }
    }
    else {
      if (DAT_20005e7b == 0x30) {
        if (DAT_20005ea9 == 0) {
          iVar1 = FUN_08015a2c(0);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005e3b,&DAT_20005d6c,0x40);
            DAT_20005e33 = 0x40;
            DAT_20005e37 = 0;
            DAT_20005e2f = DAT_20005ea9 << 6;
            DAT_20005e2e = 3;
            DAT_20005ea9 = DAT_20005ea9 + 1 & 0x7fff;
            DAT_20005e7b = 0;
          }
          else {
            DAT_20005e2e = 0x23;
            DAT_20005e7b = 0x31;
          }
        }
        else if (DAT_20005ea9 == 0x3fff) {
          DAT_20005e2e = 0x24;
          DAT_20005e7b = 0x31;
        }
        else if (DAT_20005ea9 == 0x4000) {
          iVar1 = FUN_08015a2c(0x100000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005e3b,&DAT_20005d6c,0x40);
            DAT_20005e33 = 0x40;
            DAT_20005e37 = 0;
            DAT_20005e2f = DAT_20005ea9 << 6;
            DAT_20005e2e = 3;
            DAT_20005ea9 = DAT_20005ea9 + 1 & 0x7fff;
            DAT_20005e7b = 0;
          }
          else {
            DAT_20005e2e = 0x24;
            DAT_20005e7b = 0x31;
          }
        }
        else if (DAT_20005ea9 == 0x7fff) {
          DAT_20005e2e = 0x23;
          DAT_20005e7b = 0x31;
        }
        else {
          FUN_08008494(&DAT_20005e3b,&DAT_20005d6c,0x40);
          DAT_20005e33 = 0x40;
          DAT_20005e37 = 0;
          DAT_20005e2f = DAT_20005ea9 << 6;
          DAT_20005e2e = 3;
          DAT_20005ea9 = DAT_20005ea9 + 1 & 0x7fff;
          DAT_20005e7b = 0;
        }
        goto code_r0x0801a85e;
      }
      if (DAT_20005e7b < 0x31) {
        if (DAT_20005e7b == 0x22) {
          iVar1 = FUN_08019be8(&DAT_20005e7d,&DAT_20005e81,0);
          if (iVar1 == 1) {
            DAT_20005ea9 = DAT_20005e7d;
            DAT_20005e7b = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20005ea9 = 0;
            DAT_20005e2e = 0x22;
            DAT_20005e7b = 0x23;
          }
          goto code_r0x0801a85e;
        }
        bVar2 = false;
        if (DAT_20005e7b == 0x23) {
          DAT_20005e85 = 0x3ff8;
          DAT_20005e89 = 0x3ff7;
          iVar1 = FUN_08015a2c(((DAT_20005ea9 & 0xffff) - 0x3ff8 & 0x7fff) << 6);
          if ((iVar1 == -1) && (DAT_20005ea9 <= DAT_20005e89)) {
            if (DAT_20005ea9 == 0) {
              DAT_20005e89 = 0;
              DAT_20005e85 = 0;
            }
            else {
              DAT_20005e89 = DAT_20005ea9 - 1;
              DAT_20005e85 = DAT_20005ea9;
            }
          }
          if (DAT_20005e85 == 0) {
            DAT_20005ead = 0;
            if (DAT_20005ee3 == '\0') {
              DAT_20005e7b = 0xa0;
              DAT_20005ee3 = '\x01';
            }
            else {
              DAT_20005e7b = 0;
            }
          }
          else {
            DAT_20005e8d = FUN_08015a2c((((DAT_20005ea9 & 0xffff) - (DAT_20005e89 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_20005e91 = 0;
            DAT_20005e95 = FUN_08015a2c(((DAT_20005ea9 & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
            if (DAT_20005e99 == 0) {
              DAT_20005e99 = 0xfffe;
            }
            if (DAT_20005e89 < DAT_20005e99) {
              DAT_20005e99 = DAT_20005e89;
            }
            DAT_20005e9d = FUN_08015a2c((((DAT_20005ea9 & 0xffff) - (DAT_20005e99 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            if (DAT_20005e99 < DAT_20005ea1) {
              DAT_20005ea1 = DAT_20005e99;
            }
            DAT_20005ea5 = FUN_08015a2c((((DAT_20005ea9 & 0xffff) - (DAT_20005ea1 & 0xffff)) - 1 &
                                        0x7fff) * 0x40 + 4);
            DAT_20005ee4 = (ushort)DAT_20005e99;
            DAT_20005ee6 = 0;
            if (DAT_20005ead == 0x23) {
              DAT_20005eae = DAT_20005ead;
            }
            DAT_20005ead = 0;
            if (DAT_20005ee3 == '\0') {
              DAT_20005e7b = 0xa0;
              DAT_20005ee3 = '\x01';
            }
            else {
              DAT_20005e7b = 0;
            }
          }
          goto code_r0x0801a85e;
        }
      }
      else {
        if (DAT_20005e7b == 0x31) {
          FUN_08008494(&DAT_20005e3b,&DAT_20005d6c,0x40);
          DAT_20005e33 = 0x40;
          DAT_20005e37 = 0;
          DAT_20005e2f = DAT_20005ea9 << 6;
          DAT_20005e2e = 3;
          DAT_20005ea9 = DAT_20005ea9 + 1 & 0x7fff;
          DAT_20005e7b = 0;
          goto code_r0x0801a85e;
        }
        bVar2 = false;
        if (DAT_20005e7b == 0x60) {
          FUN_08015968(&DAT_20005ee8,(uint)DAT_20005ee4 << 6,0x40);
          DAT_20005e7b = 0;
          goto code_r0x0801a85e;
        }
      }
    }
  }
  else {
    if (DAT_20005e7b == 0xa3) {
      DAT_20005eba = 0x3ff8;
      DAT_20005ebe = 0x3ff7;
      iVar1 = FUN_08015a2c((((DAT_20005edf & 0xffff) - 0x3ff8 & 0x7fff) + 0x10000) * 0x40);
      if ((iVar1 == -1) && (DAT_20005edf <= DAT_20005ebe)) {
        if (DAT_20005edf == 0) {
          DAT_20005ebe = 0;
          DAT_20005eba = 0;
        }
        else {
          DAT_20005ebe = DAT_20005edf - 1;
          DAT_20005eba = DAT_20005edf;
        }
      }
      if (DAT_20005eba == 0) {
        DAT_20005ead = 0;
        DAT_20005e7b = 0;
      }
      else {
        DAT_20005ec2 = FUN_08015a2c(((((DAT_20005edf & 0xffff) - (DAT_20005ebe & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_20005ec6 = 0;
        DAT_20005eca = FUN_08015a2c((((DAT_20005edf & 0xffff) - 1 & 0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20005ece == 0) {
          DAT_20005ece = 0xfffe;
        }
        if (DAT_20005ebe < DAT_20005ece) {
          DAT_20005ece = DAT_20005ebe;
        }
        DAT_20005ed2 = FUN_08015a2c(((((DAT_20005edf & 0xffff) - (DAT_20005ece & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        if (DAT_20005ece < DAT_20005ed6) {
          DAT_20005ed6 = DAT_20005ece;
        }
        DAT_20005eda = FUN_08015a2c(((((DAT_20005edf & 0xffff) - (DAT_20005ed6 & 0xffff)) - 1 &
                                     0x7fff) + 0x10000) * 0x40 + 4);
        DAT_20005ee4 = (ushort)DAT_20005ece;
        DAT_20005ee6 = 0;
        if (DAT_20005ead == 0xa3) {
          DAT_20005eae = DAT_20005ead;
        }
        DAT_20005ead = 0;
        DAT_20005e7b = 0;
      }
      goto code_r0x0801a85e;
    }
    if (DAT_20005e7b < 0xa4) {
      if (DAT_20005e7b == 0xa0) {
        DAT_20005eb2 = 0;
        DAT_20005eb6 = 0x3fff;
        DAT_20005e7b = 0xa1;
LAB_0801a46a:
        iVar1 = FUN_08019be8(&DAT_20005eb2,&DAT_20005eb6,0x10000);
        if (iVar1 == 1) {
          DAT_20005edf = DAT_20005eb2;
          DAT_20005e7b = 0xa3;
        }
        else if (iVar1 == 2) {
          DAT_20005eb2 = 0x4000;
          DAT_20005eb6 = 0x7fff;
          DAT_20005e7b = 0xa2;
        }
        goto code_r0x0801a85e;
      }
      if (DAT_20005e7b < 0xa1) {
        if (DAT_20005e7b == 0x91) {
          DAT_20005e37 = 0x60;
          DAT_20005e2e = 2;
          DAT_20005e7b = 0x92;
          goto code_r0x0801a85e;
        }
        bVar2 = false;
        if (DAT_20005e7b == 0x92) {
          DAT_20005e3b = 0x1451090;
          DAT_20005e33 = 4;
          DAT_20005e37 = 0x10000;
          DAT_20005e2f = 0x600000;
          DAT_20005e2e = 3;
          DAT_20005edf = 0;
          DAT_20005e7b = 0xa0;
          goto code_r0x0801a85e;
        }
      }
      else {
        if (DAT_20005e7b == 0xa1) goto LAB_0801a46a;
        bVar2 = false;
        if (DAT_20005e7b == 0xa2) {
          iVar1 = FUN_08019be8(&DAT_20005eb2,&DAT_20005eb6,0x10000);
          if (iVar1 == 1) {
            DAT_20005edf = DAT_20005eb2;
            DAT_20005e7b = 0xa3;
          }
          else if (iVar1 == 2) {
            DAT_20005edf = 0;
            DAT_20005e2e = 0xd2;
            DAT_20005e7b = 0xa3;
          }
          goto code_r0x0801a85e;
        }
      }
    }
    else {
      if (DAT_20005e7b == 0xb0) {
        if (DAT_20005edf == 0) {
          iVar1 = FUN_08015a2c(0x400000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005e3b,&DAT_20005dec,0x40);
            DAT_20005e33 = 0x40;
            DAT_20005e37 = 0x10000;
            DAT_20005e2f = (DAT_20005edf + 0x10000) * 0x40;
            DAT_20005e2e = 3;
            DAT_20005edf = DAT_20005edf + 1 & 0x7fff;
            DAT_20005e7b = 0;
          }
          else {
            DAT_20005e2e = 0xd3;
            DAT_20005e7b = 0xb1;
          }
        }
        else if (DAT_20005edf == 0x3fff) {
          DAT_20005e2e = 0xd4;
          DAT_20005e7b = 0xb1;
        }
        else if (DAT_20005edf == 0x4000) {
          iVar1 = FUN_08015a2c(0x500000);
          if (iVar1 == -1) {
            FUN_08008494(&DAT_20005e3b,&DAT_20005dec,0x40);
            DAT_20005e33 = 0x40;
            DAT_20005e37 = 0x10000;
            DAT_20005e2f = (DAT_20005edf + 0x10000) * 0x40;
            DAT_20005e2e = 3;
            DAT_20005edf = DAT_20005edf + 1 & 0x7fff;
            DAT_20005e7b = 0;
          }
          else {
            DAT_20005e2e = 0xd4;
            DAT_20005e7b = 0xb1;
          }
        }
        else if (DAT_20005edf == 0x7fff) {
          DAT_20005e2e = 0xd3;
          DAT_20005e7b = 0xb1;
        }
        else {
          FUN_08008494(&DAT_20005e3b,&DAT_20005dec,0x40);
          DAT_20005e33 = 0x40;
          DAT_20005e37 = 0x10000;
          DAT_20005e2f = (DAT_20005edf + 0x10000) * 0x40;
          DAT_20005e2e = 3;
          DAT_20005edf = DAT_20005edf + 1 & 0x7fff;
          DAT_20005e7b = 0;
        }
        goto code_r0x0801a85e;
      }
      if (DAT_20005e7b == 0xb1) {
        FUN_08008494(&DAT_20005e3b,&DAT_20005dec,0x40);
        DAT_20005e33 = 0x40;
        DAT_20005e37 = 0x10000;
        DAT_20005e2f = (DAT_20005edf + 0x10000) * 0x40;
        DAT_20005e2e = 3;
        DAT_20005edf = DAT_20005edf + 1 & 0x7fff;
        DAT_20005e7b = 0;
        goto code_r0x0801a85e;
      }
      if (DAT_20005e7b == 0xe0) {
        FUN_08015968(&DAT_20005ee8,(DAT_20005ee4 + 0x10000) * 0x40,0x40);
        DAT_20005e7b = 0;
        goto code_r0x0801a85e;
      }
      bVar2 = false;
      if (DAT_20005e7b == 0xff) {
        DAT_20005e7b = 0x20;
        goto code_r0x0801a85e;
      }
    }
  }
  if (bVar2) {
    DAT_20005e2e = 0x22;
    DAT_20005e7b = 0x11;
  }
code_r0x0801a85e:
  if (DAT_20005e2e == 0x24) {
    DAT_20005e2d = '\x01';
    DAT_20005e33 = 0x10;
    DAT_20005e37 = 0x10;
    DAT_20005e2f = 0x100000;
    FUN_08015878(0,0x10);
    DAT_20005e2c = 0x24;
  }
  else if (DAT_20005e2e < 0x25) {
    if (DAT_20005e2e == 3) {
      DAT_20005e2d = '\x01';
      FUN_08015ae8(&DAT_20005e3b,DAT_20005e2f);
      DAT_20005e2c = 0;
    }
    else if (DAT_20005e2e < 4) {
      if (DAT_20005e2e == 1) {
        DAT_20005e2d = '\x01';
        FUN_080158c0(0);
        DAT_20005e2c = 1;
      }
      else if (DAT_20005e2e == 2) {
        DAT_20005e2d = '\x01';
        FUN_08015878(0,DAT_20005e37);
        DAT_20005e2c = 2;
      }
    }
    else if (DAT_20005e2e == 0x22) {
      DAT_20005e2d = '\x01';
      DAT_20005e33 = 0x20;
      DAT_20005e37 = 0;
      DAT_20005e2f = 0;
      FUN_08015878(0,0);
      DAT_20005e2c = 0x22;
    }
    else if (DAT_20005e2e == 0x23) {
      DAT_20005e2d = '\x01';
      DAT_20005e33 = 0x10;
      DAT_20005e37 = 0;
      DAT_20005e2f = 0;
      FUN_08015878(0,0);
      DAT_20005e2c = 0x23;
    }
  }
  else if (DAT_20005e2e != 0xb3) {
    if (DAT_20005e2e == 0xd2) {
      DAT_20005e2d = '\x01';
      DAT_20005e33 = 0x20;
      DAT_20005e37 = 0x40;
      DAT_20005e2f = 0x400000;
      FUN_08015878(0,0x40);
      DAT_20005e2c = 0xd2;
    }
    else if (DAT_20005e2e == 0xd3) {
      DAT_20005e2d = '\x01';
      DAT_20005e33 = 0x10;
      DAT_20005e37 = 0x40;
      DAT_20005e2f = 0x400000;
      FUN_08015878(0,0x40);
      DAT_20005e2c = 0xd3;
    }
    else if (DAT_20005e2e == 0xd4) {
      DAT_20005e2d = '\x01';
      DAT_20005e33 = 0x10;
      DAT_20005e37 = 0x50;
      DAT_20005e2f = 0x500000;
      FUN_08015878(0,0x50);
      DAT_20005e2c = 0xd4;
    }
  }
  DAT_20005e2e = 0;
  return;
}



/* ENTRY 0x0801aabc : FUN_0801aabc */

void FUN_0801aabc(int param_1)

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
  uVar2 = FUN_08015c5c(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x90) {
      if ((char)local_22 == '\x01') {
        FUN_0800f164(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d2 = 0xa6;
      }
    }
    else {
      if (bVar1 < 0x91) {
        if (bVar1 == 0x23) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20005e99 = (uint)local_22._2_2_;
            DAT_20005ea1 = (uint)local_1e;
          }
          DAT_20005ead = 0x23;
          return;
        }
        if (bVar1 < 0x24) {
          if (bVar1 == 1) {
            if ((char)local_22 == '\x01') {
              FUN_0800f164(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                           local_1a);
              return;
            }
            local_22 = CONCAT13((char)((ushort)DAT_200049e4 >> 8),
                                CONCAT12((char)DAT_200049e4,(short)local_22)) & 0xffffff00;
            local_1e = CONCAT11(DAT_200049e7,DAT_200049e6);
            local_1c = DAT_200049e0;
            local_1b = DAT_200049e1;
            local_1a = DAT_200049e2;
            uVar2 = FUN_08015c5c(&local_22,0x10);
            local_12 = (char)((ushort)uVar2 >> 8);
            local_11 = (char)uVar2;
            FUN_0800f638(local_24);
            return;
          }
          bVar4 = bVar1 == 0x10;
        }
        else {
          if (bVar1 == 0x60) {
            DAT_20005ead = 0x60;
            return;
          }
          bVar4 = false;
          if (bVar1 == 0x61) {
            DAT_20005ead = 0x61;
            return;
          }
        }
      }
      else {
        if (bVar1 == 0xa1) {
          local_22 = DAT_20003160;
          local_1e = CONCAT11(DAT_20003165,DAT_20003164);
          local_1c = DAT_20003168;
          local_1b = DAT_2000316e;
          local_1a = DAT_2000316f;
          local_19 = DAT_20003169;
          local_18 = DAT_2000316a;
          local_17 = DAT_2000316d;
          local_16 = DAT_20003170;
          local_15 = DAT_20003171;
          uVar2 = FUN_08015c5c(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0800f638(local_24);
          return;
        }
        if (bVar1 == 0xa3) {
          if ((uint)local_1e <= (uint)local_22._2_2_) {
            DAT_20005ece = (uint)local_22._2_2_;
            DAT_20005ed6 = (uint)local_1e;
          }
          DAT_20005ead = 0xa3;
          return;
        }
        if (bVar1 == 0xe0) {
          DAT_20005ead = 0xe0;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xe1) {
          DAT_20005ead = 0xe1;
          return;
        }
      }
      if ((bVar4) && ((char)local_22 == '\x01')) {
        FUN_0800f164(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_200009d2 = 0xa5;
      }
    }
  }
  return;
}



/* ENTRY 0x0801ad64 : FUN_0801ad64 */

void FUN_0801ad64(uint param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    param_1 = 0x32;
  }
  DAT_20000674 = (param_1 * 0xe10) / 100 + 0x24b8;
  DAT_20000678 = (param_1 * 0x708) / 100 + 0x23f0;
  DAT_2000067c = (short)param_1;
  DAT_2000067e = (short)((param_1 * 0x708) / 0xe10);
  return;
}



/* ENTRY 0x0801adcc : FUN_0801adcc */

void FUN_0801adcc(void)

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
      DAT_200032b2 = DAT_200032b2 | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_200032b2 = DAT_200032b2 & 0xfffd;
  }
  return;
}



/* ENTRY 0x0801ae44 : FUN_0801ae44 */

void FUN_0801ae44(void)

{
  uint uVar1;
  
  DAT_200002f8 = FUN_0800bc38();
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



/* ENTRY 0x0801af84 : FUN_0801af84 */

/* WARNING: Removing unreachable block (ram,0x0801afce) */
/* WARNING: Removing unreachable block (ram,0x0801b018) */

void FUN_0801af84(void)

{
  FUN_08022cc0();
  DAT_200001a8 = 1;
  return;
}



/* ENTRY 0x0801b034 : FUN_0801b034 */

undefined4 FUN_0801b034(int param_1)

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
  
  if (DAT_2000097c == '\0') {
    uVar6 = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xb) - 0x30;
    local_c = (undefined1  [2])CONCAT11(bVar1,DAT_20000976);
    bVar2 = *(char *)(param_1 + 0xd) - 0x30;
    bVar3 = *(char *)(param_1 + 0xf) - 0x30;
    local_8 = (uint)CONCAT11(bVar3,DAT_2000097a);
    uVar7 = (CONCAT12(DAT_20000978,local_c) & 0xff) + (uint)bVar1 + (uint)DAT_20000978 + (uint)bVar2
            + (local_8 & 0xff) + (uint)bVar3;
    bVar4 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    uVar7 = (uint)bVar4 + (uint)bVar1 + (uint)DAT_20000978 + (uint)bVar2 + (uint)DAT_2000097a +
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



/* ENTRY 0x0801b15c : FUN_0801b15c */

void FUN_0801b15c(void)

{
  int iVar1;
  
  if ((DAT_20000648 == '\x01') &&
     (DAT_20000646 = ((short)((int)(uint)DAT_200034f6 >> 4) - DAT_2000064a) * 0x11,
     diag_ChgCurrShow = DAT_20000646, DAT_2000066c == '\x02')) {
    if (DAT_20000646 < 0x2ee1) {
      if (DAT_20000660 < 0xb) {
        DAT_2000066d = '\0';
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
      FUN_0800baf2(&DAT_40011000,2);
      DAT_2000066d = '\x01';
      if (DAT_20000670 < 10) {
        DAT_20000670 = DAT_20000670 + 1;
      }
      DAT_2000066c = '\x05';
    }
  }
  diag_ChgStepShow = DAT_2000066c;
  switch(DAT_2000066c) {
  case '\0':
    if (DAT_2000068c < 0x32) {
      DAT_2000068c = DAT_2000068c + 1;
    }
    else {
      DAT_2000066c = '\x01';
    }
    goto code_r0x0801b694;
  case '\x01':
    DAT_20000694 = DAT_20000694 + 1;
    if (DAT_20000694 < 0x14) {
      DAT_422101b0 = 1;
      FUN_0800baf2(&DAT_40011000,2);
    }
    else if (DAT_20000694 < 0x28) {
      DAT_20000690 = DAT_20000690 + ((int)(uint)DAT_200034f6 >> 4);
    }
    else {
      DAT_2000064a = (ushort)(DAT_20000690 / 0x14);
      if ((DAT_2000064a < 0x43a) || (0xcae < DAT_2000064a)) {
        DAT_20000648 = '\x02';
      }
      else {
        DAT_20000648 = '\x01';
      }
      FUN_0800baee(&DAT_40011000,2);
      DAT_2000066c = '\x02';
    }
    goto code_r0x0801b694;
  case '\x02':
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000668) {
        DAT_20000696 = 0;
        DAT_422101b0 = 1;
        FUN_0800baf2(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x06';
        goto code_r0x0801b694;
      }
      DAT_20000668 = DAT_20000668 + 1;
    }
    else if (10 < DAT_20000668) {
      DAT_20000668 = DAT_20000668 - 10;
    }
    if ((diag_BatState == '\x01') && (0x30ed < (int)diag_TotalVoltage)) {
      if (0x420a3 < DAT_2000064c) {
        DAT_20000696 = 0;
        DAT_422101b0 = 1;
        FUN_0800baf2(&DAT_40011000,2);
        DAT_20000664 = 0;
        DAT_2000066c = '\x03';
        goto code_r0x0801b694;
      }
      DAT_2000064c = DAT_2000064c + 1;
    }
    else if (10 < DAT_2000064c) {
      DAT_2000064c = DAT_2000064c - 10;
    }
    if ((diag_BatState == '\x01') && (0x3264 < (int)diag_TotalVoltage)) {
      if (0x13 < DAT_20000650) {
        DAT_20000696 = 0;
        DAT_422101b0 = 1;
        FUN_0800baf2(&DAT_40011000,2);
        DAT_2000066e = 0xfa;
        DAT_20000664 = 0;
        DAT_2000066c = '\x04';
        goto code_r0x0801b694;
      }
      DAT_20000650 = DAT_20000650 + 1;
    }
    else if (10 < DAT_20000650) {
      DAT_20000650 = DAT_20000650 - 1;
    }
    iVar1 = FUN_0801760c();
    if ((diag_BatState == '\x01') &&
       (((DAT_20000674 < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_2000067c < iVar1 && ((DAT_2000067c < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_20000654) {
        DAT_20000696 = 0;
        DAT_422101b0 = 1;
        FUN_0800baf2(&DAT_40011000,2);
        DAT_20000680 = -6;
        DAT_20000664 = 0;
        DAT_2000066c = '\b';
        goto code_r0x0801b694;
      }
      DAT_20000654 = DAT_20000654 + 1;
    }
    else if (10 < DAT_20000654) {
      DAT_20000654 = DAT_20000654 - 1;
    }
    if (DAT_20003154 < 0xb) {
      if (DAT_20000658 < 0xb) {
        DAT_20000681 = '\0';
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
      FUN_0800baf2(&DAT_40011000,2);
      DAT_20000681 = '\x01';
      DAT_2000066c = '\t';
    }
    if ((DAT_20003155 < 0xb) || (DAT_20000646 < 0x259)) {
      if (DAT_2000065c < 0xb) {
        DAT_20000682 = '\0';
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
      FUN_0800baf2(&DAT_40011000,2);
      DAT_20000682 = '\x01';
      DAT_2000066c = '\t';
    }
    goto code_r0x0801b694;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_0801760c();
    if (((int)diag_TotalVoltage < 0x2db4) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000681 == '\0')))) {
      if (DAT_20000664 < 100) {
        DAT_20000664 = DAT_20000664 + 1;
      }
      else {
        FUN_0800baee(&DAT_40011000,2);
        DAT_2000066e = 0;
        DAT_20000680 = '\0';
        DAT_2000066f = 0;
        DAT_2000066d = '\0';
        DAT_2000066c = '\x02';
      }
    }
    goto code_r0x0801b694;
  default:
    goto code_r0x0801b694;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
  }
  iVar1 = FUN_0801760c();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_20000646 < 600)) &&
      ((DAT_20000670 < 8 && ((DAT_20000681 == '\0' && (DAT_20000682 == '\0')))))) &&
     (((diag_TotalVoltage < DAT_20000678 && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_2000067e && (iVar1 < 0x65)))))) {
    if (DAT_20000664 < 100) {
      DAT_20000664 = DAT_20000664 + 1;
    }
    else {
      FUN_0800baee(&DAT_40011000,2);
      DAT_2000066e = 0;
      DAT_20000680 = '\0';
      DAT_2000066f = 0;
      DAT_2000066d = '\0';
      DAT_2000066c = '\x02';
    }
  }
code_r0x0801b694:
  if (((DAT_2000066d == '\x01') || (DAT_2000066e != 0)) || (DAT_2000066f != 0)) {
    DAT_200006d8 = 1;
    DAT_200030da = DAT_200030da | 0x40;
  }
  else {
    DAT_200006d8 = 0;
    DAT_200030da = DAT_200030da & 0xffbf;
  }
  if (DAT_20000680 == '\0') {
    DAT_200030da = DAT_200030da & 0xff7f;
  }
  else {
    DAT_200030da = DAT_200030da | 0x80;
  }
  if (DAT_20000681 == '\0') {
    DAT_200030da = DAT_200030da & 0xfeff;
  }
  else {
    DAT_200030da = DAT_200030da | 0x100;
  }
  if (DAT_20000682 == '\0') {
    DAT_200030dc = DAT_200030dc & 0xfffe;
  }
  else {
    DAT_200030dc = DAT_200030dc | 1;
  }
  if ((DAT_200030f0 % 0x96 == 0x4b) &&
     (((DAT_2000066d == '\x01' || (1 < DAT_2000066e)) ||
      ((1 < DAT_2000066f || ((DAT_20000681 != '\0' || (DAT_20000682 != '\0')))))))) {
    FUN_08023100(2);
  }
  if (DAT_20000698 != '\x01') {
    if (diag_cartstep != '\0') {
      DAT_20000698 = '\x01';
    }
    if (((0x19 < DAT_200030f4) && (diag_BatState == '\0')) && (diag_cartstep == '\0')) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 1000) {
        if (DAT_20000699 < 0x1a) {
          DAT_20000699 = DAT_20000699 + 1;
          return;
        }
        DAT_422101b0 = 0;
        DAT_20000699 = DAT_20000699 + 1;
        return;
      }
    }
    DAT_20000699 = 0;
  }
  return;
}



/* ENTRY 0x0801b820 : FUN_0801b820 */

undefined4 FUN_0801b820(void)

{
  FUN_0800b470();
  FUN_0800b3a0(&DAT_0803a800);
  FUN_0800b3e0();
  return 0;
}



/* ENTRY 0x0801b83c : FUN_0801b83c */

void FUN_0801b83c(void)

{
  FUN_0800b470();
  FUN_0800b3a0(0x803a000);
  FUN_0800b3e0();
  DAT_200001e0 = 0;
  DAT_200001de = 0;
  return;
}



/* ENTRY 0x0801b868 : FUN_0801b868 */

void FUN_0801b868(void)

{
  FUN_0800bf80();
  FUN_08023214();
  FUN_08008c50();
  FUN_080242a0();
  FUN_08009218();
  return;
}



/* ENTRY 0x0801b880 : FUN_0801b880 */

void FUN_0801b880(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_20003181 == '\x01')) {
      FUN_0802065c();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_080206b0(param_1 + 1);
  }
  return;
}



/* ENTRY 0x0801b8c4 : FUN_0801b8c4 */

uint FUN_0801b8c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
  
  DAT_200009aa = DAT_200009aa + 1;
  if (DAT_20000949 == '\0') {
    if (DAT_200009ac < 0x15) {
      switch(DAT_200009ad) {
      case 0:
        if (DAT_200031fb < 0x37) {
          for (uVar4 = 0; uVar4 < DAT_200009a9; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000099a)[uVar4] = (&DAT_2000096d)[uVar4];
          }
        }
        else {
          DAT_200009a9 = 6;
          for (uVar4 = 0; uVar4 < DAT_200009a9; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000099a)[uVar4] = s_S22Pro_2000098a[uVar4];
          }
          if (DAT_200031fb == 0x39) {
            (&DAT_2000099a)[uVar4] = 0x2b;
            DAT_200009a9 = DAT_200009a9 + 1;
          }
        }
        DAT_20000992 = DAT_200009a9 + 5;
        DAT_200009ad = 3;
        break;
      case 3:
        puVar6 = (undefined1 *)(DAT_200009aa / 0x28);
        if ((uint)DAT_200009aa % 0x28 == 0x14) {
          if (DAT_200009ac < 10) {
            puVar7 = param_4;
            if ((DAT_200040c6 == -0x44) && (DAT_200040ca == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_200009a9 + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_200040cb)[uVar4];
                if (puVar7 != (undefined *)(uint)(byte)(&DAT_20000996)[uVar4]) {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                puVar6 = &DAT_200009ad;
                DAT_200009ad = 6;
              }
              else {
                DAT_200009ac = 0;
                puVar6 = &DAT_200009ad;
                DAT_200009ad = 5;
              }
            }
            DAT_200009ac = DAT_200009ac + 1;
            FUN_0800fb98(&DAT_200009a3,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
          }
          else {
            DAT_200009ac = 0;
            DAT_200009ad = 4;
          }
        }
        break;
      case 4:
        if ((uint)DAT_200009aa % 0x78 == 0x1e) {
          DAT_200009ac = DAT_200009ac + 1;
          FUN_0800fb98(s_AT_ULKTE_2000097e,9,DAT_200009aa / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_200009aa / 0x50;
        if ((uint)DAT_200009aa % 0x50 == 0x14) {
          if ((DAT_200040c6 == -0x44) && (DAT_200040ca == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_200009a9 + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_200040cb)[uVar5];
              puVar7 = &DAT_20000991;
              if (uVar4 != (byte)(&DAT_20000996)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_200009ad = 6;
            }
            else {
              FUN_0800fb98(&DAT_20000991,DAT_200009a9 + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_200009ac = DAT_200009ac + 1;
        }
        else if ((uint)DAT_200009aa % 0x50 == 0x3c) {
          FUN_0800fb98(&DAT_200009a3,6,DAT_200009aa / 0x50,param_4,param_1,param_2,param_3,param_4);
        }
        break;
      case 6:
        DAT_200009ac = DAT_200009ac + 1;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if ((uint)DAT_200009aa == (DAT_200009aa / 0x18) * 0x18) {
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
      FUN_0800fa84(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_200031b2);
    }
    if ((uint)DAT_200009aa % 0x18 == 4) {
      sVar9 = (short)(DAT_20003118 / 10);
      if (DAT_20003118 / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0800fa84(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_2000310c,(int)sVar9,
                   (int)(short)((ushort)DAT_200006c0 | (ushort)(byte)DAT_200031f0 << 8),
                   (int)CONCAT11(DAT_200006da,DAT_200006d9),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_200009aa % 0x18 == 8) {
      FUN_0800fa84(0xf5,(int)(short)DAT_200006d0,(int)(short)DAT_200006d4,
                   (int)CONCAT11(DAT_200006ce,DAT_200006cf),(int)CONCAT11(DAT_200006ca,DAT_200006cc)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_200009aa % 0x18 == 0xc) {
      FUN_0800fa84(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e8,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003140,(int)(short)(DAT_20003114 / 0xe10),(int)DAT_20003174);
    }
    if ((uint)DAT_200009aa % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003bac != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0800fa84(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_200009aa + ((int)(uint)DAT_200009aa >> 2) * -4 == 2) {
      FUN_08019814();
    }
    uVar4 = (uint)DAT_200009aa % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_08017a8c();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801bd7c : FUN_0801bd7c */

void FUN_0801bd7c(uint param_1)

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



/* ENTRY 0x0801bda4 : FUN_0801bda4 */

uint FUN_0801bda4(uint param_1,uint param_2)

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



/* ENTRY 0x0801bdca : FUN_0801bdca */

void FUN_0801bdca(byte *param_1)

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



/* ENTRY 0x0801be08 : FUN_0801be08 */

void FUN_0801be08(void)

{
  uint uVar1;
  
  if (DAT_200005f3 == '\0') {
    if (DAT_200005f4 == '\0') {
      uVar1 = (uint)DAT_200005f5;
      DAT_200005f5 = DAT_200005f5 + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005f1 == '\x01') {
          FUN_0801549c();
        }
      }
      else if (DAT_200005f2 == '\x01') {
        FUN_08015418();
      }
    }
    else if (DAT_200005f7 == 0) {
      FUN_080151d0(0xff);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else if (DAT_200005f7 < 0x12) {
      FUN_080151d0(DAT_200005f7 - 1);
      DAT_200005f7 = DAT_200005f7 + 1;
    }
    else {
      DAT_200005f7 = 0;
      DAT_200005f4 = '\0';
    }
  }
  else if (DAT_200005f6 == 0) {
    FUN_080152bc(0xff);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else if (DAT_200005f6 < 0x61) {
    FUN_080152bc(DAT_200005f6 - 1);
    DAT_200005f6 = DAT_200005f6 + 1;
  }
  else {
    DAT_200005f6 = 0;
    DAT_200005f3 = '\0';
  }
  return;
}



/* ENTRY 0x0801bef0 : FUN_0801bef0 */

int FUN_0801bef0(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0800c7ec(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0800c7ec(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801bf9c : FUN_0801bf9c */

void FUN_0801bf9c(void)

{
  DAT_200033f0 = 0;
  DAT_200033f4 = 0;
  DAT_200033f8 = 0;
  DAT_200033fc = 0;
  DAT_20003400 = 0;
  DAT_20003404 = 0;
  DAT_20003408 = 0;
  return;
}



/* ENTRY 0x0801bfcc : FUN_0801bfcc */

void FUN_0801bfcc(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0801c79c(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_0801d528(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_0801dd08();
    }
  }
  else {
    FUN_0801c010(param_1,param_2);
  }
  return;
}



/* ENTRY 0x0801c010 : FUN_0801c010 */

void FUN_0801c010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_0800c834();
  DAT_2000092a = DAT_2000092a + 1;
  if (DAT_2000092a < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_2000092e = DAT_2000092f + (char)iVar1;
          if (0x1f < DAT_2000092e) {
            DAT_2000092e = DAT_2000092e - 0x20;
          }
          (&DAT_20003c2a)[iVar1 * 3] = (&DAT_0802740a)[(uint)DAT_2000092e * 3];
          (&DAT_20003c2b)[iVar1 * 3] = (&DAT_0802740b)[(uint)DAT_2000092e * 3];
          (&DAT_20003c2c)[iVar1 * 3] = (&DAT_0802740c)[(uint)DAT_2000092e * 3];
        }
        bVar4 = DAT_2000092f < '\0';
        DAT_2000092f = DAT_2000092f + -1;
        if (bVar4) {
          DAT_2000092f = '\x1f';
        }
      }
      else {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_2000092e = DAT_2000092d + (char)iVar1;
          if (0x1f < DAT_2000092e) {
            DAT_2000092e = DAT_2000092e - 0x20;
          }
          (&DAT_20003c2a)[iVar1 * 3] = (&DAT_0802740a)[(uint)DAT_2000092e * 3];
          (&DAT_20003c2b)[iVar1 * 3] = (&DAT_0802740b)[(uint)DAT_2000092e * 3];
          (&DAT_20003c2c)[iVar1 * 3] = (&DAT_0802740c)[(uint)DAT_2000092e * 3];
        }
        bVar4 = 0x1f < DAT_2000092d;
        DAT_2000092d = DAT_2000092d + 1;
        if (bVar4) {
          DAT_2000092d = 0;
        }
      }
    }
  }
  else if (DAT_2000092a < 0x640) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      switch(DAT_20000928) {
      case 0:
        if (DAT_200008fb == -1) {
          DAT_20000928 = 1;
        }
        else {
          DAT_200008fb = DAT_200008fb + '\x11';
        }
        break;
      case 1:
        if (DAT_200008fa == '\0') {
          DAT_20000928 = 2;
        }
        else {
          DAT_200008fa = DAT_200008fa + -0x11;
        }
        break;
      case 2:
        if (DAT_200008fc == -1) {
          DAT_20000928 = 3;
        }
        else {
          DAT_200008fc = DAT_200008fc + '\x11';
        }
        break;
      case 3:
        if (DAT_200008fb == '\0') {
          DAT_20000928 = 4;
        }
        else {
          DAT_200008fb = DAT_200008fb + -0x11;
        }
        break;
      case 4:
        if (DAT_200008fa == -1) {
          DAT_20000928 = 5;
        }
        else {
          DAT_200008fa = DAT_200008fa + '\x11';
        }
        break;
      case 5:
        if (DAT_200008fc == '\0') {
          DAT_20000928 = 0;
        }
        else {
          DAT_200008fc = DAT_200008fc + -0x11;
        }
      }
      for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        (&DAT_20003c2a)[iVar1 * 3] = DAT_200008fa;
        (&DAT_20003c2b)[iVar1 * 3] = DAT_200008fb;
        (&DAT_20003c2c)[iVar1 * 3] = DAT_200008fc;
      }
    }
  }
  else if (DAT_2000092a < 0xa8c) {
    if (DAT_2000092c == '\0') {
      DAT_2000092c = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003c4e)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c4f)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c50)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003c4e)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003c4e)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003c4e)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003c4e)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003c4e)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003c4e)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740a)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c4f)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740b)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c50)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_0802740c)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_20000932 = DAT_20000930 + (short)iVar1;
      if (0xdf < DAT_20000932) {
        DAT_20000932 = DAT_20000932 + -0xe0;
      }
      (&DAT_20003c2a)[iVar1 * 3] = (&DAT_20003c4e)[DAT_20000932 * 3];
      (&DAT_20003c2b)[iVar1 * 3] = (&DAT_20003c4f)[DAT_20000932 * 3];
      (&DAT_20003c2c)[iVar1 * 3] = (&DAT_20003c50)[DAT_20000932 * 3];
    }
    if (param_1 == (param_2 + 5) * (param_1 / (param_2 + 5))) {
      if (bVar4) {
        DAT_20000930 = DAT_20000930 + -1;
        if (DAT_20000930 < 1) {
          DAT_20000930 = 0xdf;
        }
      }
      else {
        DAT_20000930 = DAT_20000930 + 1;
        if (0xdf < DAT_20000930) {
          DAT_20000930 = 1;
        }
      }
    }
  }
  else if (DAT_2000092a < 0xdac) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      for (iVar2 = 0; iVar2 < 0xc; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
        DAT_20000935 = DAT_20000934 + (char)iVar2;
        if ('\v' < DAT_20000935) {
          DAT_20000935 = DAT_20000935 + -0xc;
        }
        (&DAT_20003c2a)[iVar2 * 3] = (&DAT_200008fd)[DAT_20000935 * 3];
        (&DAT_20003c2b)[iVar2 * 3] = (&DAT_200008fe)[DAT_20000935 * 3];
        (&DAT_20003c2c)[iVar2 * 3] = (&DAT_200008ff)[DAT_20000935 * 3];
      }
      if (bVar4) {
        if ((0 < iVar1) && (bVar4 = DAT_20000934 == '\0', DAT_20000934 = DAT_20000934 + -1, bVar4))
        {
          DAT_20000934 = '\v';
        }
      }
      else {
        bVar4 = '\v' < DAT_20000934;
        DAT_20000934 = DAT_20000934 + '\x01';
        if (bVar4) {
          DAT_20000934 = '\x01';
        }
      }
    }
  }
  else if (0xdac < DAT_2000092a) {
    DAT_2000092a = 0;
  }
  return;
}



/* ENTRY 0x0801c79c : FUN_0801c79c */

void FUN_0801c79c(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_0800c834();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_20000939 = DAT_20000938 + (char)uVar6;
      if ('\v' < DAT_20000939) {
        DAT_20000939 = DAT_20000939 + -0xc;
      }
      (&DAT_20003c2a)[uVar6 * 3] = (&DAT_20003eee)[DAT_20000939 * 3];
      (&DAT_20003c2b)[uVar6 * 3] = (&DAT_20003eef)[DAT_20000939 * 3];
      (&DAT_20003c2c)[uVar6 * 3] = (&DAT_20003ef0)[DAT_20000939 * 3];
    }
    if (bVar2) {
      bVar1 = DAT_20000938 == '\0';
      DAT_20000938 = DAT_20000938 + -1;
      if (bVar1) {
        DAT_20000938 = '\v';
      }
    }
    else {
      bVar1 = '\v' < DAT_20000938;
      DAT_20000938 = DAT_20000938 + '\x01';
      if (bVar1) {
        DAT_20000938 = '\x01';
      }
    }
  }
  uVar4 = DAT_20000936 + 1;
  if (DAT_20000936 < 500) {
    DAT_20000936 = uVar4;
    if (bVar2) {
      DAT_20003efd = DAT_20003214;
      DAT_20003efe = DAT_20003215;
      DAT_20003eff = DAT_20003216;
      DAT_20003efa = (undefined1)(((uint)DAT_20003214 * 0x50) / 100);
      DAT_20003efb = (undefined1)(((uint)DAT_20003215 * 0x50) / 100);
      DAT_20003efc = (undefined1)(((uint)DAT_20003216 * 0x50) / 100);
      DAT_20003ef7 = (undefined1)(((uint)DAT_20003214 * 0x37) / 100);
      DAT_20003ef8 = (undefined1)(((uint)DAT_20003215 * 0x37) / 100);
      DAT_20003ef9 = (undefined1)(((uint)DAT_20003216 * 0x37) / 100);
      DAT_20003ef4 = (undefined1)(((uint)DAT_20003214 * 0x23) / 100);
      DAT_20003ef5 = (undefined1)(((uint)DAT_20003215 * 0x23) / 100);
      DAT_20003ef6 = (undefined1)(((uint)DAT_20003216 * 0x23) / 100);
      DAT_20003ef1 = (undefined1)(((uint)DAT_20003214 * 0xf) / 100);
      DAT_20003ef2 = (undefined1)(((uint)DAT_20003215 * 0xf) / 100);
      DAT_20003ef3 = (undefined1)(((uint)DAT_20003216 * 0xf) / 100);
      DAT_20003eee = (byte)(((uint)DAT_20003214 * 5) / 100);
      DAT_20003eef = (byte)(((uint)DAT_20003215 * 5) / 100);
      DAT_20003ef0 = (byte)(((uint)DAT_20003216 * 5) / 100);
    }
    else {
      DAT_20003ef1 = (undefined1)(((uint)DAT_20003214 * 0x50) / 100);
      DAT_20003ef2 = (undefined1)(((uint)DAT_20003215 * 0x50) / 100);
      DAT_20003ef3 = (undefined1)(((uint)DAT_20003216 * 0x50) / 100);
      DAT_20003ef4 = (undefined1)(((uint)DAT_20003214 * 0x37) / 100);
      DAT_20003ef5 = (undefined1)(((uint)DAT_20003215 * 0x37) / 100);
      DAT_20003ef6 = (undefined1)(((uint)DAT_20003216 * 0x37) / 100);
      DAT_20003ef7 = (undefined1)(((uint)DAT_20003214 * 0x23) / 100);
      DAT_20003ef8 = (undefined1)(((uint)DAT_20003215 * 0x23) / 100);
      DAT_20003ef9 = (undefined1)(((uint)DAT_20003216 * 0x23) / 100);
      DAT_20003efa = (undefined1)(((uint)DAT_20003214 * 0xf) / 100);
      DAT_20003efb = (undefined1)(((uint)DAT_20003215 * 0xf) / 100);
      DAT_20003efc = (undefined1)(((uint)DAT_20003216 * 0xf) / 100);
      DAT_20003efd = (byte)(((uint)DAT_20003214 * 5) / 100);
      DAT_20003efe = (byte)(((uint)DAT_20003215 * 5) / 100);
      DAT_20003eff = (byte)(((uint)DAT_20003216 * 5) / 100);
      DAT_20003ef0 = DAT_20003216;
      DAT_20003eef = DAT_20003215;
      DAT_20003eee = DAT_20003214;
    }
  }
  else {
    uVar5 = DAT_20000936 + 2;
    if (uVar4 < 1000) {
      DAT_20000936 = uVar5;
      if (bVar2) {
        DAT_20003efd = DAT_20003218;
        DAT_20003efe = DAT_20003219;
        DAT_20003eff = DAT_2000321a;
        DAT_20003efa = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
        DAT_20003efb = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
        DAT_20003efc = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
        DAT_20003ef7 = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
        DAT_20003ef8 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
        DAT_20003ef9 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
        DAT_20003ef4 = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
        DAT_20003ef5 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
        DAT_20003ef6 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
        DAT_20003ef1 = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
        DAT_20003ef2 = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
        DAT_20003ef3 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
        DAT_20003eee = (byte)(((uint)DAT_20003218 * 5) / 100);
        DAT_20003eef = (byte)(((uint)DAT_20003219 * 5) / 100);
        DAT_20003ef0 = (byte)(((uint)DAT_2000321a * 5) / 100);
      }
      else {
        DAT_20003ef1 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
        DAT_20003ef2 = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
        DAT_20003ef3 = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
        DAT_20003ef4 = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
        DAT_20003ef5 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
        DAT_20003ef6 = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
        DAT_20003ef7 = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
        DAT_20003ef8 = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
        DAT_20003ef9 = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
        DAT_20003efa = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
        DAT_20003efb = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
        DAT_20003efc = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
        DAT_20003efd = (byte)(((uint)DAT_20003218 * 5) / 100);
        DAT_20003efe = (byte)(((uint)DAT_20003219 * 5) / 100);
        DAT_20003eff = (byte)(((uint)DAT_2000321a * 5) / 100);
        DAT_20003ef0 = DAT_2000321a;
        DAT_20003eef = DAT_20003219;
        DAT_20003eee = DAT_20003218;
      }
    }
    else {
      uVar4 = DAT_20000936 + 3;
      if (uVar5 < 0x5dc) {
        DAT_20000936 = uVar4;
        if (bVar2) {
          DAT_20003efd = DAT_2000321c;
          DAT_20003efe = DAT_2000321d;
          DAT_20003eff = DAT_2000321e;
          DAT_20003efa = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
          DAT_20003efb = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
          DAT_20003efc = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
          DAT_20003ef7 = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
          DAT_20003ef8 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
          DAT_20003ef9 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
          DAT_20003ef4 = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
          DAT_20003ef5 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
          DAT_20003ef6 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
          DAT_20003ef1 = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
          DAT_20003ef2 = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
          DAT_20003ef3 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
          DAT_20003eee = (byte)(((uint)DAT_2000321c * 5) / 100);
          DAT_20003eef = (byte)(((uint)DAT_2000321d * 5) / 100);
          DAT_20003ef0 = (byte)(((uint)DAT_2000321e * 5) / 100);
        }
        else {
          DAT_20003ef1 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
          DAT_20003ef2 = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
          DAT_20003ef3 = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
          DAT_20003ef4 = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
          DAT_20003ef5 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
          DAT_20003ef6 = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
          DAT_20003ef7 = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
          DAT_20003ef8 = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
          DAT_20003ef9 = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
          DAT_20003efa = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
          DAT_20003efb = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
          DAT_20003efc = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
          DAT_20003efd = (byte)(((uint)DAT_2000321c * 5) / 100);
          DAT_20003efe = (byte)(((uint)DAT_2000321d * 5) / 100);
          DAT_20003eff = (byte)(((uint)DAT_2000321e * 5) / 100);
          DAT_20003ef0 = DAT_2000321e;
          DAT_20003eef = DAT_2000321d;
          DAT_20003eee = DAT_2000321c;
        }
      }
      else {
        uVar5 = DAT_20000936 + 4;
        if (uVar4 < 2000) {
          DAT_20000936 = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20003efd = DAT_20003220;
              DAT_20003efe = DAT_20003221;
              DAT_20003eff = DAT_20003222;
              DAT_20003efa = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
              DAT_20003efb = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
              DAT_20003efc = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
              DAT_20003ef7 = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
              DAT_20003ef8 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
              DAT_20003ef9 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
              DAT_20003ef4 = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
              DAT_20003ef5 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
              DAT_20003ef6 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
              DAT_20003ef1 = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
              DAT_20003ef2 = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
              DAT_20003ef3 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
              DAT_20003eee = (byte)(((uint)DAT_20003220 * 5) / 100);
              DAT_20003eef = (byte)(((uint)DAT_20003221 * 5) / 100);
              DAT_20003ef0 = (byte)(((uint)DAT_20003222 * 5) / 100);
            }
          }
          else {
            DAT_20003eee = DAT_20003220;
            DAT_20003eef = DAT_20003221;
            DAT_20003ef0 = DAT_20003222;
            DAT_20003ef1 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
            DAT_20003ef2 = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
            DAT_20003ef3 = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
            DAT_20003ef4 = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
            DAT_20003ef5 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
            DAT_20003ef6 = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
            DAT_20003ef7 = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
            DAT_20003ef8 = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
            DAT_20003ef9 = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
            DAT_20003efa = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
            DAT_20003efb = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
            DAT_20003efc = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
            DAT_20003efd = (byte)(((uint)DAT_20003220 * 5) / 100);
            DAT_20003efe = (byte)(((uint)DAT_20003221 * 5) / 100);
            DAT_20003eff = (byte)(((uint)DAT_20003222 * 5) / 100);
          }
        }
        else {
          DAT_20000936 = DAT_20000936 + 5;
          if (2000 < uVar5) {
            DAT_20000936 = 0;
          }
        }
      }
    }
  }
  return;
}



/* ENTRY 0x0801d528 : FUN_0801d528 */

void FUN_0801d528(int param_1,int param_2)

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
    FUN_0801ff2c(cVar2,(&DAT_20003c2a)[iVar8 * 3],(&DAT_20003c2b)[iVar8 * 3],
                 (&DAT_20003c2c)[iVar8 * 3],auStack_54);
    FUN_0801ff2c(cVar2,(&DAT_20003c2a)[iVar5 * 3],(&DAT_20003c2b)[iVar5 * 3],
                 (&DAT_20003c2c)[iVar5 * 3],auStack_40);
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
  FUN_0802248c(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_2000093b = DAT_2000093a + (char)iVar5;
      if ('\v' < DAT_2000093b) {
        DAT_2000093b = DAT_2000093b + -0xc;
      }
      (&DAT_20003c2a)[iVar5 * 3] = (&DAT_20003f12)[DAT_2000093b * 3];
      (&DAT_20003c2b)[iVar5 * 3] = (&DAT_20003f13)[DAT_2000093b * 3];
      (&DAT_20003c2c)[iVar5 * 3] = (&DAT_20003f14)[DAT_2000093b * 3];
    }
    bVar1 = '\v' < DAT_2000093a;
    DAT_2000093a = DAT_2000093a + '\x01';
    if (bVar1) {
      DAT_2000093a = '\x01';
    }
  }
  if (DAT_2000093c < 500) {
    DAT_20003f12 = DAT_20003214;
    DAT_20003f13 = DAT_20003215;
    DAT_20003f14 = DAT_20003216;
    DAT_20003f15 = (undefined1)(((uint)DAT_20003214 * 0x50) / 100);
    DAT_20003f16 = (undefined1)(((uint)DAT_20003215 * 0x50) / 100);
    DAT_20003f17 = (undefined1)(((uint)DAT_20003216 * 0x50) / 100);
    DAT_20003f18 = (undefined1)(((uint)DAT_20003214 * 0x37) / 100);
    DAT_20003f19 = (undefined1)(((uint)DAT_20003215 * 0x37) / 100);
    DAT_20003f1a = (undefined1)(((uint)DAT_20003216 * 0x37) / 100);
    DAT_20003f1b = (undefined1)(((uint)DAT_20003214 * 0x23) / 100);
    DAT_20003f1c = (undefined1)(((uint)DAT_20003215 * 0x23) / 100);
    DAT_20003f1d = (undefined1)(((uint)DAT_20003216 * 0x23) / 100);
    DAT_20003f1e = (undefined1)(((uint)DAT_20003214 * 0xf) / 100);
    DAT_20003f1f = (undefined1)(((uint)DAT_20003215 * 0xf) / 100);
    DAT_20003f20 = (undefined1)(((uint)DAT_20003216 * 0xf) / 100);
    DAT_20003f21 = (undefined1)(((uint)DAT_20003214 * 5) / 100);
    DAT_20003f22 = (undefined1)(((uint)DAT_20003215 * 5) / 100);
    DAT_20003f23 = (undefined1)(((uint)DAT_20003216 * 5) / 100);
    DAT_2000093c = DAT_2000093c + 1;
  }
  else if ((ushort)(DAT_2000093c + 1) < 1000) {
    DAT_20003f12 = DAT_20003218;
    DAT_20003f13 = DAT_20003219;
    DAT_20003f14 = DAT_2000321a;
    DAT_20003f15 = (undefined1)(((uint)DAT_20003218 * 0x50) / 100);
    DAT_20003f16 = (undefined1)(((uint)DAT_20003219 * 0x50) / 100);
    DAT_20003f17 = (undefined1)(((uint)DAT_2000321a * 0x50) / 100);
    DAT_20003f18 = (undefined1)(((uint)DAT_20003218 * 0x37) / 100);
    DAT_20003f19 = (undefined1)(((uint)DAT_20003219 * 0x37) / 100);
    DAT_20003f1a = (undefined1)(((uint)DAT_2000321a * 0x37) / 100);
    DAT_20003f1b = (undefined1)(((uint)DAT_20003218 * 0x23) / 100);
    DAT_20003f1c = (undefined1)(((uint)DAT_20003219 * 0x23) / 100);
    DAT_20003f1d = (undefined1)(((uint)DAT_2000321a * 0x23) / 100);
    DAT_20003f1e = (undefined1)(((uint)DAT_20003218 * 0xf) / 100);
    DAT_20003f1f = (undefined1)(((uint)DAT_20003219 * 0xf) / 100);
    DAT_20003f20 = (undefined1)(((uint)DAT_2000321a * 0xf) / 100);
    DAT_20003f21 = (undefined1)(((uint)DAT_20003218 * 5) / 100);
    DAT_20003f22 = (undefined1)(((uint)DAT_20003219 * 5) / 100);
    DAT_20003f23 = (undefined1)(((uint)DAT_2000321a * 5) / 100);
    DAT_2000093c = DAT_2000093c + 2;
  }
  else if ((ushort)(DAT_2000093c + 2) < 0x5dc) {
    DAT_20003f12 = DAT_2000321c;
    DAT_20003f13 = DAT_2000321d;
    DAT_20003f14 = DAT_2000321e;
    DAT_20003f15 = (undefined1)(((uint)DAT_2000321c * 0x50) / 100);
    DAT_20003f16 = (undefined1)(((uint)DAT_2000321d * 0x50) / 100);
    DAT_20003f17 = (undefined1)(((uint)DAT_2000321e * 0x50) / 100);
    DAT_20003f18 = (undefined1)(((uint)DAT_2000321c * 0x37) / 100);
    DAT_20003f19 = (undefined1)(((uint)DAT_2000321d * 0x37) / 100);
    DAT_20003f1a = (undefined1)(((uint)DAT_2000321e * 0x37) / 100);
    DAT_20003f1b = (undefined1)(((uint)DAT_2000321c * 0x23) / 100);
    DAT_20003f1c = (undefined1)(((uint)DAT_2000321d * 0x23) / 100);
    DAT_20003f1d = (undefined1)(((uint)DAT_2000321e * 0x23) / 100);
    DAT_20003f1e = (undefined1)(((uint)DAT_2000321c * 0xf) / 100);
    DAT_20003f1f = (undefined1)(((uint)DAT_2000321d * 0xf) / 100);
    DAT_20003f20 = (undefined1)(((uint)DAT_2000321e * 0xf) / 100);
    DAT_20003f21 = (undefined1)(((uint)DAT_2000321c * 5) / 100);
    DAT_20003f22 = (undefined1)(((uint)DAT_2000321d * 5) / 100);
    DAT_20003f23 = (undefined1)(((uint)DAT_2000321e * 5) / 100);
    DAT_2000093c = DAT_2000093c + 3;
  }
  else {
    uVar3 = DAT_2000093c + 4;
    if ((ushort)(DAT_2000093c + 3) < 2000) {
      DAT_20003f12 = DAT_20003220;
      DAT_20003f13 = DAT_20003221;
      DAT_20003f14 = DAT_20003222;
      DAT_20003f15 = (undefined1)(((uint)DAT_20003220 * 0x50) / 100);
      DAT_20003f16 = (undefined1)(((uint)DAT_20003221 * 0x50) / 100);
      DAT_20003f17 = (undefined1)(((uint)DAT_20003222 * 0x50) / 100);
      DAT_20003f18 = (undefined1)(((uint)DAT_20003220 * 0x37) / 100);
      DAT_20003f19 = (undefined1)(((uint)DAT_20003221 * 0x37) / 100);
      DAT_20003f1a = (undefined1)(((uint)DAT_20003222 * 0x37) / 100);
      DAT_20003f1b = (undefined1)(((uint)DAT_20003220 * 0x23) / 100);
      DAT_20003f1c = (undefined1)(((uint)DAT_20003221 * 0x23) / 100);
      DAT_20003f1d = (undefined1)(((uint)DAT_20003222 * 0x23) / 100);
      DAT_20003f1e = (undefined1)(((uint)DAT_20003220 * 0xf) / 100);
      DAT_20003f1f = (undefined1)(((uint)DAT_20003221 * 0xf) / 100);
      DAT_20003f20 = (undefined1)(((uint)DAT_20003222 * 0xf) / 100);
      DAT_20003f21 = (undefined1)(((uint)DAT_20003220 * 5) / 100);
      DAT_20003f22 = (undefined1)(((uint)DAT_20003221 * 5) / 100);
      DAT_20003f23 = (undefined1)(((uint)DAT_20003222 * 5) / 100);
      DAT_2000093c = uVar3;
    }
    else {
      DAT_2000093c = DAT_2000093c + 5;
      if (2000 < uVar3) {
        DAT_2000093c = 0;
      }
    }
  }
  return;
}



/* ENTRY 0x0801dd08 : FUN_0801dd08 */

void FUN_0801dd08(void)

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
  uVar4 = DAT_20000944 >> 0x1f;
  if (DAT_20000944 == ((int)(DAT_20000944 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_20003214;
    uVar2 = (uint)DAT_20003215;
    uVar3 = (uint)DAT_20003216;
  }
  else if (DAT_20000944 + ((int)(DAT_20000944 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_20003218;
    uVar2 = (uint)DAT_20003219;
    uVar3 = (uint)DAT_2000321a;
  }
  else if (DAT_20000944 + ((int)(DAT_20000944 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_2000321c;
    uVar2 = (uint)DAT_2000321d;
    uVar3 = (uint)DAT_2000321e;
  }
  else {
    uVar4 = (uint)DAT_20003220;
    uVar2 = (uint)DAT_20003221;
    uVar3 = (uint)DAT_20003222;
  }
  if (DAT_20000940 % 0x18 < 0xc) {
    uVar4 = (int)(uVar4 * (DAT_20000940 % 0x18)) / 0x18;
    uVar2 = (int)(uVar2 * (DAT_20000940 % 0x18)) / 0x18;
    uVar3 = (int)(uVar3 * (DAT_20000940 % 0x18)) / 0x18;
  }
  else {
    uVar4 = uVar4 - (int)(uVar4 * (DAT_20000940 % 0x18)) / 0x18;
    uVar2 = uVar2 - (int)(uVar2 * (DAT_20000940 % 0x18)) / 0x18;
    uVar3 = uVar3 - (int)(uVar3 * (DAT_20000940 % 0x18)) / 0x18;
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0801ff2c(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_0801ff2c(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_20000940 == (DAT_20000940 / 0x18) * 0x18) {
    DAT_20000944 = DAT_20000944 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_20000940 = DAT_20000940 + 1;
    FUN_0802248c(local_30,local_44);
  }
  else {
    DAT_20000940 = DAT_20000940 + 1;
    FUN_0802248c(local_44,local_30);
  }
  return;
}



/* ENTRY 0x0801ded0 : FUN_0801ded0 */

void FUN_0801ded0(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08008582(auStack_2c,0x14);
  FUN_08008582(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801ff2c(bVar1,0,0,0,auStack_2c);
    FUN_0801ff2c(bVar1,0,0,0,auStack_40);
  }
  if (DAT_20000880 % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801ff2c(bVar1,uVar2,0,0,auStack_2c);
    FUN_0801ff2c(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_0802248c(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x0801df80 : FUN_0801df80 */

void FUN_0801df80(int param_1)

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
      uVar2 = 6 - DAT_20000924 % 7 & 0xff;
    }
    else if (param_1 < 0x2536) {
      uVar1 = 0xf;
      uVar2 = 5 - DAT_20000924 % 6 & 0xff;
    }
    else if (param_1 < 0x27fe) {
      uVar1 = 0x10;
      uVar2 = 4 - DAT_20000924 % 5 & 0xff;
    }
    else if (param_1 < 0x2ac6) {
      uVar1 = 0x11;
      uVar2 = 3 - (DAT_20000924 & 3);
    }
    else if (param_1 < 0x2d8e) {
      uVar1 = 0x12;
      uVar2 = 2 - DAT_20000924 % 3 & 0xff;
    }
    else if (param_1 < 0x3056) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000924 & 1);
    }
    else if (param_1 < 0x3058) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000924 & 1);
    }
    else if (param_1 < 0x30a3) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000924 & 1);
    }
    else if (0x30a2 < param_1) {
      uVar2 = 0;
    }
    if (DAT_20000880 == uVar1 * (DAT_20000880 / uVar1)) {
      DAT_20000924 = DAT_20000924 + 1;
    }
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else if (param_1 < 0x2454) {
    if (DAT_20000880 % 0x32 < 0x1a) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    uVar4 = 0;
    uVar2 = 0;
    FUN_080242f8(param_1);
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
    if (DAT_20000880 % 0x32 < 0x1a) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 0xff;
      uVar4 = 0x7f;
    }
    uVar2 = 0;
    FUN_080242f8(param_1);
  }
  DAT_2000087d = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_0801ff2c(uVar2,uVar3,uVar4,0,local_30);
    FUN_0801ff2c(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08022638(local_30,local_44);
  return;
}



/* ENTRY 0x0801e218 : FUN_0801e218 */

void FUN_0801e218(uint param_1)

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
  if (DAT_20003156 == 0) {
    if (DAT_20003157 == 0) {
      if ((DAT_2000314f & 0x70) == 0) {
        if ((DAT_20003174 < 0xc9) || (DAT_20003174 == 0xe0)) {
          if (uVar3 == 0) {
            if ((DAT_20003153 == '\0') || (3 < param_1 % 0xc)) {
              if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              iVar2 = FUN_080175bc();
              if (DAT_20000874 < 0) {
                if ((iVar2 < 0x65) && (!bVar6)) {
                  DAT_2000087c = (byte)((iVar2 * 7) / 100);
                  if (6 < DAT_2000087c) {
                    DAT_2000087c = 6;
                  }
                  iVar2 = 0xff;
                }
                if (DAT_20000874 < -0x30) {
                  DAT_20000874 = 0x18;
                }
              }
              DAT_20000874 = DAT_20000874 + -1;
              if ((100 < iVar2) || (bVar6)) {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  if (((DAT_2000087c != 0) || (param_1 % 10 < 5)) || (bVar6)) {
                    (&DAT_2000082b)[uVar3] = (&DAT_0802737a)[uVar3];
                    if ((int)(7 - (uint)DAT_2000087c % 7) <= (int)uVar3) {
                      (&DAT_2000082b)[uVar3] = (&DAT_2000082b)[uVar3] | 0x18;
                    }
                  }
                  else {
                    (&DAT_2000082b)[uVar3] = 0;
                  }
                }
              }
              else {
                sVar5 = (short)(DAT_20000874 + 0xfc) + (short)((DAT_20000874 + 0xfc) / 0x18) * -0x18
                        + -0xc;
                if (sVar5 < 0) {
                  sVar5 = -sVar5;
                }
                sVar5 = sVar5 + -7;
                sVar4 = 0;
                DAT_2000087c = (byte)iVar2;
                if (sVar5 < 5) {
                  if (0 < sVar5) {
                    sVar4 = (sbyte)sVar5;
                  }
                }
                else {
                  sVar4 = 4;
                }
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  (&DAT_2000082b)[uVar3] =
                       (char)((int)((uint)CONCAT11((&DAT_08027372)[uVar3],
                                                   (&DAT_08027312)
                                                   [uVar3 + ((DAT_2000087c / 10) % 10) * 8]) |
                                   (uint)(byte)(&DAT_08027312)
                                               [uVar3 + ((uint)DAT_2000087c % 10) * 8] << 4) >>
                             sVar4);
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082b)[uVar3] = (&DAT_08027402)[uVar3];
              }
            }
          }
          else {
            bVar6 = (DAT_20003243 & 1) != 0;
            if (bVar6) {
              uVar3 = (uVar3 * 0x3e) / 100;
            }
            for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
              (&DAT_2000082b)[uVar1] =
                   (&DAT_08027312)[uVar1 + ((uVar3 / 10000) % 10) * 8] |
                   (&DAT_08027312)[uVar1 + ((uVar3 / 1000) % 10) * 8] << 4;
            }
            DAT_20000832 = bVar6 << param_1 % 9;
            DAT_20000874 = 0x18;
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            if (DAT_20003174 == 0xe2) {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082b)[uVar3] = 0;
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082b)[uVar3] = (&DAT_08027362)[uVar3];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003151 == 0) {
              if (DAT_20003153 == '\0') {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  uVar1 = (byte)DAT_20003174 - 200 & 0xff;
                  (&DAT_2000082b)[uVar3] =
                       (&DAT_08027312)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                       (&DAT_08027312)[uVar3 + (uVar1 % 10) * 8] << 4;
                }
              }
              else {
                for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                  (&DAT_2000082b)[uVar3] = (&DAT_08027402)[uVar3];
                }
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_2000082b)[uVar3] =
                     (&DAT_0802736a)[uVar3] |
                     (&DAT_08027312)[uVar3 + ((uint)DAT_20003151 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003153 == '\0') {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              uVar1 = (byte)DAT_20003174 - 200 & 0xff;
              (&DAT_2000082b)[uVar3] =
                   (&DAT_08027312)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                   (&DAT_08027312)[uVar3 + (uVar1 % 10) * 8] << 4;
            }
          }
          else {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              (&DAT_2000082b)[uVar3] = (&DAT_08027402)[uVar3];
            }
          }
          bVar6 = param_1 % 0x1e == 3;
          do {
            if (!bVar6) goto LAB_0801e71e;
          } while (((DAT_200030da & 0x200) != 0x200) &&
                  (bVar6 = (DAT_200030da & 0x400) == 0x400, !bVar6));
          FUN_08023100(3);
        }
      }
      else {
        for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
          (&DAT_2000082b)[uVar3] =
               (&DAT_08027312)[uVar3 + ((DAT_20003150 / 10) % 10) * 8] |
               (&DAT_08027312)[uVar3 + ((uint)DAT_20003150 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar3 = DAT_20003157 - 1 & 0xff;
      if (5 < uVar3) {
        uVar3 = 5;
      }
      for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
        (&DAT_2000082b)[uVar1] = (&UNK_080273d2)[uVar1 + uVar3 * 8];
      }
      DAT_20003157 = DAT_20003157 + 1;
      if (0x14 < DAT_20003157) {
        DAT_20003157 = 0;
      }
    }
  }
  else {
    uVar3 = DAT_20003156 - 1 & 0xff;
    if (9 < uVar3) {
      uVar3 = 9;
    }
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_2000082b)[uVar1] = (&UNK_08027382)[uVar1 + uVar3 * 8];
    }
    DAT_20003156 = DAT_20003156 + 1;
    if (0x14 < DAT_20003156) {
      DAT_20003156 = 0;
    }
  }
LAB_0801e71e:
  FUN_080113b0(&DAT_2000082b);
  return;
}



/* ENTRY 0x0801e738 : thunk_FUN_0801e74a */

void thunk_FUN_0801e74a(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801e74a : FUN_0801e74a */

void FUN_0801e74a(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801e750 : FUN_0801e750 */

void FUN_0801e750(void)

{
  FUN_0800b470();
  FUN_0800b394(0x35);
  FUN_0800b428(&DWORD_08008300,0);
  FUN_0800b3e0();
  return;
}



/* ENTRY 0x0801e7b0 : FUN_0801e7b0 */

void FUN_0801e7b0(void)

{
  FUN_0800b470();
  FUN_0800acec();
  FUN_0800b3e0();
  FUN_0800acfc();
  FUN_0800ad34();
  return;
}



/* ENTRY 0x0801e7c8 : FUN_0801e7c8 */

undefined4 FUN_0801e7c8(void)

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



/* ENTRY 0x0801e800 : FUN_0801e800 */

void FUN_0801e800(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(0x3d,1);
  FUN_0800ba74(0x300200,1);
  FUN_0801f63c(7);
  DAT_20003156 = 1;
  FUN_0800f0b0();
  FUN_080158ec();
  local_8 = 0x10010002;
  FUN_0800b9b4(&DAT_40011000,&local_8);
  FUN_0801f528();
  DAT_200006a0 = 0;
  local_8 = 0x10030004;
  FUN_0800b9b4(&DAT_40010c00,&local_8);
  FUN_0801f554();
  return;
}



/* ENTRY 0x0801e880 : FUN_0801e880 */

void FUN_0801e880(void)

{
  int iVar1;
  
  DAT_200006b0 = DAT_200006b0 + 1;
  FUN_08018fc4();
  FUN_0801ff4c();
  FUN_0801fdd4();
  FUN_08021398();
  if ((DAT_20003180 & 1) != 0) {
    if ((DAT_20000833 == '\0') && (iVar1 = FUN_080222ec(DAT_2000310c / 10 & 0xffff), iVar1 == 1)) {
      FUN_080210fc();
    }
    DAT_20000833 = '\x01';
    DAT_20003180 = DAT_20003180 & 0xfe;
  }
  return;
}



/* ENTRY 0x0801e8ec : FUN_0801e8ec */

void FUN_0801e8ec(void)

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
                  if (100 < DAT_200034fc) {
                    DAT_200034fc = DAT_200034fc + -0x32;
                  }
                  if (0x14 < DAT_20003504) {
                    DAT_20003504 = DAT_20003504 + -1;
                  }
                }
                else {
                  if (DAT_20000622 < DAT_200034fc) {
                    DAT_200034fc = DAT_200034fc + -0x14;
                  }
                  if (0x96 < DAT_20003504) {
                    DAT_20003504 = DAT_20003504 + -2;
                  }
                }
              }
              else {
                if (DAT_20000622 < DAT_200034fc) {
                  DAT_200034fc = DAT_200034fc + -0x14;
                }
                if (DAT_200034fc < 500) {
                  DAT_200034fc = DAT_200034fc + 0x1e;
                }
                if (0x96 < DAT_20003504) {
                  DAT_20003504 = DAT_20003504 + -2;
                }
                if (DAT_20003504 < 100) {
                  DAT_20003504 = DAT_20003504 + 2;
                }
              }
            }
            else {
              if (DAT_200034fc < 500) {
                DAT_200034fc = DAT_200034fc + 0x1e;
              }
              if (0x96 < DAT_20003504) {
                DAT_20003504 = DAT_20003504 + -2;
              }
              if (DAT_20003504 < 100) {
                DAT_20003504 = DAT_20003504 + 2;
              }
            }
          }
          else {
            if (DAT_20000622 + 0x1e < DAT_200034fc) {
              DAT_200034fc = DAT_200034fc + -0x14;
            }
            if (DAT_200034fc < DAT_20000622) {
              DAT_200034fc = DAT_200034fc + 0x1e;
            }
            if (0x96 < DAT_20003504) {
              DAT_20003504 = DAT_20003504 + -2;
            }
            if (DAT_20003504 < 100) {
              DAT_20003504 = DAT_20003504 + 2;
            }
          }
        }
        else {
          if (DAT_200034fc < DAT_20000622) {
            DAT_200034fc = DAT_200034fc + 0x1e;
          }
          if (DAT_20003504 < 100) {
            DAT_20003504 = DAT_20003504 + 2;
          }
        }
      }
      else {
        if (DAT_20000624 + 0x1e < DAT_200034fc) {
          DAT_200034fc = DAT_200034fc + -0x14;
        }
        if (DAT_200034fc < DAT_20000624) {
          DAT_200034fc = DAT_200034fc + 0x1e;
        }
        if (DAT_20003504 < DAT_20000626) {
          DAT_20003504 = DAT_20003504 + 2;
        }
      }
    }
    else {
      if (DAT_200034fc < DAT_20000624) {
        DAT_200034fc = DAT_200034fc + 0x1e;
      }
      if (DAT_20000626 + 2 < DAT_20003504) {
        DAT_20003504 = DAT_20003504 + -2;
      }
      if (DAT_20003504 < DAT_20000626) {
        DAT_20003504 = DAT_20003504 + 2;
      }
    }
  }
  else {
    if (DAT_200034fc < DAT_2000061e) {
      DAT_200034fc = DAT_200034fc + 0x1e;
    }
    if (DAT_20003504 < DAT_20000620) {
      DAT_20003504 = DAT_20003504 + 2;
    }
  }
  return;
}



/* ENTRY 0x0801ebe0 : FUN_0801ebe0 */

undefined2
FUN_0801ebe0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_08011402(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_08011402(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801ec0c : FUN_0801ec0c */

void FUN_0801ec0c(void)

{
  int iVar1;
  
  if (DAT_2000082a < 0x10) {
    DAT_2000082a = DAT_2000082a + 1;
  }
  if ((diag_MosTemp < 0x2e) && (0xe < DAT_2000082a)) {
    if (diag_MosTemp < 0x28) {
      DAT_200006d9 = 0;
      DAT_20000828 = 0;
    }
  }
  else {
    DAT_200006d9 = 1;
    if (diag_cartstep == '\0') {
      DAT_20000828 = 4000;
    }
    else {
      DAT_20000828 = (diag_MosTemp + -0x2d) * 0x32 + 1000;
    }
    if (1999 < DAT_20000828) {
      DAT_20000828 = 1999;
    }
  }
  if ((((DAT_20000728 != 0) || (DAT_2000072c != 0)) && (DAT_20003182 == '\x01')) &&
     (diag_AgeModeflg != '\0')) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (10000 < iVar1) {
      DAT_20000828 = 1999;
    }
  }
  if (DAT_20000828 < 0x65) {
    FUN_0800baf2(&DAT_40010c00,0x200);
  }
  else {
    FUN_0800baee(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x0801ed08 : FUN_0801ed08 */

void FUN_0801ed08(void)

{
  return;
}



/* ENTRY 0x0801ed0c : FUN_0801ed0c */

int FUN_0801ed0c(int param_1)

{
  if (DAT_200001b0 == 'G') {
    DAT_200001da = (short)(((param_1 * 100) / 0x84 + 0x9c4 + DAT_200001da * 9) / 10);
  }
  else {
    DAT_200001da = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001da * 9) / 10);
  }
  return (int)(DAT_200001da / 10);
}



/* ENTRY 0x0801ed80 : FUN_0801ed80 */

undefined4 FUN_0801ed80(void)

{
  return diag_pintch;
}



/* ENTRY 0x0801ed8c : FUN_0801ed8c */

undefined4 FUN_0801ed8c(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0801ed98 : FUN_0801ed98 */

undefined4 FUN_0801ed98(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0801eda4 : FUN_0801eda4 */

uint FUN_0801eda4(void)

{
  return (uint)DAT_200032b2 << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0801edbc : FUN_0801edbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801edbc(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003188)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003188 = (undefined1)DAT_2000019c;
    DAT_20003189 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000318a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000318b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000318c = (undefined1)DAT_200001a0;
    DAT_2000318d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000318e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000318f = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003190 = (undefined1)DAT_200001a4;
    DAT_20003191 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003192 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003193 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003188)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0801ef38 : FUN_0801ef38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801ef38(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003188)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003188 = (undefined1)DAT_2000019c;
    DAT_20003189 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000318a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000318b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000318c = (undefined1)DAT_200001a0;
    DAT_2000318d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000318e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000318f = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003190 = (undefined1)DAT_200001a4;
    DAT_20003191 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003192 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003193 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003188)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0801f0a8 : FUN_0801f0a8 */

int FUN_0801f0a8(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0801f0c4 : FUN_0801f0c4 */

bool FUN_0801f0c4(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0801f190 : FUN_0801f190 */

int FUN_0801f190(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_080264a0)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801f1d0 : FUN_0801f1d0 */

int FUN_0801f1d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_080264a0)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0801f210 : FUN_0801f210 */

void FUN_0801f210(void)

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
  uVar5 = FUN_0800bc38();
  bVar3 = (byte)uVar5;
  DAT_200005b0 = bVar3;
  if (uVar5 != DAT_200005d2) {
    iVar6 = FUN_08010d74(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_0802691c + (uint)DAT_200005d2 * 3 + uVar5 * 0x18);
    DAT_20000396 = *(char *)((int)(&UNK_0802691c + (uint)DAT_200005d2 * 3 + uVar5 * 0x18) + 2);
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
      FUN_0800bc78(uVar8,bVar4,(int)DAT_20000396,iVar6,DAT_200005d2);
      DAT_200005d2 = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005d2 = bVar3;
    }
  }
  return;
}



/* ENTRY 0x0801f528 : FUN_0801f528 */

void FUN_0801f528(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(4,1);
  local_8 = 0x48030800;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801f554 : FUN_0801f554 */

void FUN_0801f554(void)

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
  
  FUN_0800ed10(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_0800b9b4(&DAT_40010c00,&local_24);
  FUN_0800ece0(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_08011234(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_08011112(&DAT_40000800,&local_20);
  FUN_08011176(&DAT_40000800,8);
  FUN_08010ac4(&DAT_40000800,1);
  FUN_08010b20(&DAT_40000800,1);
  FUN_08010b32(&DAT_40000800,1);
  return;
}



/* ENTRY 0x0801f5f0 : FUN_0801f5f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f5f0(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_0800b470();
    FUN_0800b3a0(&DAT_0803d000);
    FUN_0800b3e0();
  }
  return;
}



/* ENTRY 0x0801f610 : FUN_0801f610 */

void FUN_0801f610(void)

{
  FUN_0800b470();
  FUN_0800b3a0(&DAT_0803d000);
  FUN_0800b428(&DAT_0803d000,0x55aaaa55);
  FUN_0800b3e0();
  DAT_20000948 = 1;
  return;
}



/* ENTRY 0x0801f63c : FUN_0801f63c */

void FUN_0801f63c(void)

{
  byte bVar1;
  
  FUN_08011308();
  thunk_FUN_0801e74a(10);
  FUN_08015c20(0x8f);
  thunk_FUN_0801e74a(1);
  FUN_08015c20(0x40);
  thunk_FUN_0801e74a(1);
  FUN_0800baee(&DAT_40011000,0x10);
  FUN_08011368(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_08011368(0);
  }
  FUN_0800baf2(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801f690 : FUN_0801f690 */

void FUN_0801f690(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(0x10,1);
  local_8 = 0x28032000;
  FUN_0800b9b4(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801f6bc : FUN_0801f6bc */

void FUN_0801f6bc(void)

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



/* ENTRY 0x0801f84c : FUN_0801f84c */

bool FUN_0801f84c(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d0 == '\x02';
  if (bVar1) {
    DAT_200001d0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0801f868 : FUN_0801f868 */

bool FUN_0801f868(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d6 != '\0';
  if (bVar1) {
    DAT_200001d6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0801f880 : FUN_0801f880 */

undefined4 FUN_0801f880(int param_1)

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



/* ENTRY 0x0801f89c : FUN_0801f89c */

undefined4 FUN_0801f89c(int param_1)

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
          FUN_0800ff18();
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



/* ENTRY 0x0801f920 : FUN_0801f920 */

void FUN_0801f920(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_200006c0 != 0x12) {
    bVar3 = DAT_200006c0 == 0x14;
    do {
      if (!bVar3) goto LAB_0801fabc;
      bVar3 = DAT_200006c8 == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_0801fabc;
    bVar3 = true;
  } while (diag_cartstep == '\b');
  if (((DAT_2000320e == '\x01') || (DAT_200006db == '\x02')) &&
     (DAT_20000854 = DAT_20000854 + 1, DAT_20000854 == (DAT_20000854 / 2) * 2)) {
    if (DAT_20000858 == 0) {
      DAT_20000858 = 1;
    }
    else {
      DAT_20000858 = 0;
    }
  }
  if (((DAT_2000320e == '\x01') || (DAT_200006db == '\x02')) && (DAT_200006c0 != 0x13)) {
    if (DAT_20000858 == 0) {
      if (param_1 == 0x12) {
        DAT_20000728 = 0xffff;
        DAT_2000072c = 0xffff;
      }
      else if (param_1 == 0x15) {
        DAT_20000728 = 0xffff;
        DAT_2000072c = 0;
      }
      else if (param_1 == 0x16) {
        DAT_20000728 = 0;
        DAT_2000072c = 0xffff;
      }
      else {
        DAT_20000728 = 0xffff;
        DAT_2000072c = 0;
      }
    }
    else {
      DAT_20000728 = 0;
      DAT_2000072c = 0;
    }
  }
  else if (DAT_200006c0 == 0x12) {
    if (param_1 == 0x12) {
      DAT_20000728 = 0xffff;
    }
    else if (param_1 == 0x15) {
      DAT_20000728 = 0xffff;
    }
    else if (param_1 == 0x16) {
      DAT_20000728 = 1000;
    }
  }
  else {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 10000) {
      DAT_20000728 = 0;
      iVar1 = FUN_0801ed98();
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x2d000) && (iVar1 = FUN_0801ed80(), 0x2d000 < iVar1)) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 == 0) {
          DAT_2000072c = 0;
          goto LAB_0801fac6;
        }
      }
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_20000728 = (iVar1 * 800) / 1000 + 100;
    }
    else {
      DAT_20000728 = 0xffff;
    }
  }
LAB_0801fac6:
  uVar2 = DAT_20000728;
  if (1999 < DAT_20000728) {
    uVar2 = 2000;
  }
  DAT_40000840 = (short)(((DAT_2000320f + 0x32) * uVar2) / 0x96);
  return;
LAB_0801fabc:
  DAT_20000728 = 0;
  DAT_2000072c = 0;
  goto LAB_0801fac6;
}



/* ENTRY 0x0801fb20 : FUN_0801fb20 */

undefined2 FUN_0801fb20(void)

{
  DAT_2000085c = DAT_2000085c + 1;
  if ((ushort)((ushort)DAT_20000820 * 4) <= DAT_2000085c) {
    DAT_2000085c = 0;
  }
  return (&DAT_20000730)[(int)(uint)DAT_2000085c >> 2];
}



/* ENTRY 0x0801fb5c : FUN_0801fb5c */

void FUN_0801fb5c(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08008582(auStack_34,0x14);
  FUN_08008582(auStack_48,0x14);
  DAT_20000880 = DAT_20000880 + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_0801ff2c(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_0801ff2c(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_0802248c(auStack_34,auStack_48);
    }
    else {
      FUN_0801df80(diag_TotalVoltage);
    }
  }
  else if (DAT_20000884 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_080242f8(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_0801e7c8();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080242f8(diag_TotalVoltage);
      }
    }
    else if (DAT_20000878 == 0) {
      iVar1 = FUN_08020b2c();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_080242f8(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_0801df80(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031e8 < iVar1 / 1000) {
            FUN_0801ded0();
          }
          else {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            DAT_20000886 = (ushort)(iVar1 / 1000);
            if (0x28 < DAT_20000886) {
              DAT_20000886 = 0x28;
            }
            DAT_20000888 = (int)((uint)DAT_200031e8 - (uint)DAT_20000886) / 5;
            if (DAT_20000888 == 0) {
              DAT_20000888 = 1;
            }
            if (((DAT_2000320c != 0) && (DAT_2000320c != 1)) &&
               ((DAT_2000320c != 2 && (DAT_2000320c != 3)))) {
              DAT_2000320c = 0;
            }
            FUN_0801bfcc(DAT_20000880,DAT_20000888,DAT_2000320c);
          }
        }
      }
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_20000878 = DAT_20000878 + -1;
      FUN_0801bfcc(DAT_20000880,(int)((uint)DAT_200031e8 - iVar1 / 1000) / 5,DAT_2000320c);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080242f8(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x0801fdd4 : FUN_0801fdd4 */

void FUN_0801fdd4(void)

{
  int iVar1;
  
  if (DAT_200006c4 == 0x14) {
    DAT_20000851 = 0;
    DAT_200006c4 = 0;
  }
  else if (DAT_200006c4 == 0x12) {
    DAT_20000851 = 2;
    DAT_200006c4 = 0;
  }
  else if (DAT_200006c4 == 0x13) {
    DAT_20000851 = 4;
    DAT_200006c4 = 0;
  }
  iVar1 = FUN_0801f84c();
  if (iVar1 != 0) {
    switch(DAT_20000851) {
    case 0:
      DAT_20000851 = 1;
    case 1:
    case 2:
      DAT_20000851 = DAT_20000851 + 1;
      DAT_200006c0 = 0x12;
      break;
    case 3:
      DAT_20000851 = DAT_20000851 + 1;
      DAT_200006c0 = 0x13;
      break;
    case 4:
      DAT_20000851 = 2;
      DAT_200006c0 = 0x12;
    }
    FUN_08023100(1);
    FUN_08019a74(3);
  }
  if (DAT_200006db == '\0') {
    FUN_0801f920((&DAT_20000720)[DAT_20000851]);
  }
  else {
    FUN_0801f920(DAT_20000721);
    DAT_200006c0 = 0x12;
  }
  return;
}



/* ENTRY 0x0801feb4 : FUN_0801feb4 */

void FUN_0801feb4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x0801fef8 : FUN_0801fef8 */

uint FUN_0801fef8(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x0801ff2c : FUN_0801ff2c */

void FUN_0801ff2c(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x0801ff4c : FUN_0801ff4c */

void FUN_0801ff4c(void)

{
  DAT_20000852 = (ushort)(((uint)DAT_20000852 * 9 + ((int)(uint)diag_lightad >> 4)) / 10);
  if (DAT_200005fc == '\0') {
    DAT_200006c8 = '\0';
  }
  else if (DAT_200006c8 == '\0') {
    if (DAT_20000852 < 0x44c) {
      DAT_200006c9 = DAT_200006c8;
      DAT_200006c8 = '\x01';
    }
  }
  else if ((DAT_200006c8 == '\x01') && (0x514 < DAT_20000852)) {
    DAT_200006c9 = DAT_200006c8;
    DAT_200006c8 = '\0';
  }
  return;
}



/* ENTRY 0x0801ffd0 : FUN_0801ffd0 */

undefined4 FUN_0801ffd0(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800af94((&DAT_200000a6)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0801bd7c((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0801bda4((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800af94((&DAT_200000a6)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0801bda4((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0801bda4((char)local_94[0],uVar1);
  }
  FUN_0800af94((&DAT_200000a6)[param_1 + param_2],local_94);
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



/* ENTRY 0x08020090 : FUN_08020090 */

undefined4 FUN_08020090(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  iVar1 = FUN_0801ffd0(0,8,&local_18);
  if ((iVar1 == 0) || (local_c._2_2_ != 0x729)) {
    uVar2 = 0;
  }
  else {
    DAT_200033f0 = (int)(short)local_18;
    DAT_200033f4 = (int)local_18._2_2_;
    DAT_200033f8 = (int)(short)local_14;
    DAT_200033fc = (int)local_14._2_2_ << 1;
    DAT_20003400 = (int)(short)local_10 << 1;
    DAT_20003404 = (int)local_10._2_2_ << 1;
    DAT_20003408 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x08020114 : FUN_08020114 */

void FUN_08020114(void)

{
  uint uVar1;
  
  DAT_200001e0 = CONCAT22(DAT_200031f4,DAT_200031f2);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001de = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001e0 = DAT_200001e0 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}



/* ENTRY 0x0802017c : FUN_0802017c */

undefined4 FUN_0802017c(void)

{
  FUN_0801af84();
  FUN_08009c58();
  FUN_0800db6c();
  FUN_0800e038(&LAB_08008fdc_1,0,&DAT_200018b4,2,2,&DAT_200016b8,0x80,0,3);
  FUN_0800e298(0);
  FUN_0800de00();
  return 0;
}



/* ENTRY 0x080201c8 : update_power_energy_limits */

void update_power_energy_limits(void)

{
  int iVar1;
  int iVar2;
  
  DAT_200032b8 = ((diag_HallRSP * 0x13240) / 15000 + DAT_200032b8 * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000324) / 10;
  DAT_200032c4 = (DAT_200032c4 * 9 + DAT_20000328) / 10;
  DAT_200032d0 = FUN_08020844((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002d8;
  if ((2 < diag_motionstep) && (diag_motionstep < 8)) {
    iVar1 = ((diag_BusCurrent * 0xd) / 100) * (DAT_200032c4 / 100);
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
      DAT_200032e4 = DAT_20000208 / 500 + DAT_200032e4;
      DAT_200032e8 = DAT_2000020c / 500 + DAT_200032e8;
      DAT_20000204 = 0;
      DAT_20000208 = 0;
      DAT_2000020c = 0;
    }
    DAT_200032ec = (short)((iVar1 / 10 + DAT_200032ec * 9) / 10);
  }
  iVar1 = DAT_200032b8;
  if (DAT_200032b8 < 0) {
    iVar1 = -DAT_200032b8;
  }
  if (iVar1 < 3000) {
    if (DAT_200032bc != '\0') {
      DAT_200032bc = DAT_200032bc + -1;
    }
  }
  else {
    DAT_200032bc = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_20000200 == '\0') {
      iVar1 = DAT_200032c8 - DAT_200032c4;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_200032c4)) {
        DAT_20000200 = '\x01';
      }
      else {
        DAT_200032c8 = (DAT_200032c8 * 0x13 + DAT_200032c4) / 0x14;
      }
    }
    else if (DAT_200032c8 + 1 < DAT_200032c4) {
      DAT_200032c8 = DAT_200032c8 + 1;
    }
    else if (DAT_200032c4 + 1 < DAT_200032c8) {
      DAT_200032c8 = DAT_200032c8 + -1;
    }
    else {
      DAT_200032c8 = DAT_200032c4;
    }
  }
  DAT_20000212 = (short)((DAT_20000212 * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_20000212 / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_200032c8 / 100);
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
    DAT_200032b0 = DAT_200032b0 | 0x80;
  }
  return;
}



/* ENTRY 0x0802065c : FUN_0802065c */

bool FUN_0802065c(void)

{
  if (DAT_200032bc == '\0') {
    DAT_200032b2 = DAT_200032b2 | 8;
  }
  return DAT_200032bc == '\0';
}



/* ENTRY 0x0802067c : FUN_0802067c */

void FUN_0802067c(void)

{
  FUN_0800eb44(7);
  return;
}



/* ENTRY 0x08020688 : FUN_08020688 */

void FUN_08020688(void)

{
  FUN_0800d870();
  FUN_08021b94();
  FUN_0800ff18(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x080206a8 : FUN_080206a8 */

void FUN_080206a8(void)

{
  FUN_0800bd68();
  return;
}



/* ENTRY 0x080206b0 : FUN_080206b0 */

void FUN_080206b0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_200032b8;
      if (DAT_200032b8 < 0) {
        iVar2 = -DAT_200032b8;
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
    FUN_0800d870();
    DAT_2000031e = 0;
  }
  return;
}



/* ENTRY 0x08020720 : FUN_08020720 */

void FUN_08020720(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_2000031e;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_0800d870();
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



/* ENTRY 0x0802079c : FUN_0802079c */

bool FUN_0802079c(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08008494(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x080207dc : FUN_080207dc */

undefined4 FUN_080207dc(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  encode_extended_frame(param_2,auStack_50);
  FUN_0802079c(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x080207fa : FUN_080207fa */

bool FUN_080207fa(char *param_1,undefined4 param_2)

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



/* ENTRY 0x08020832 : FUN_08020832 */

bool FUN_08020832(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x08020844 : FUN_08020844 */

uint FUN_08020844(uint param_1)

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



/* ENTRY 0x08020874 : FUN_08020874 */

void FUN_08020874(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  uVar3 = DAT_2000094c & 3;
  uVar2 = DAT_20000953 & 7;
  uVar4 = DAT_2000095e & 3;
  uVar5 = DAT_20000965 & 3;
  if ((DAT_2000094b == uVar3) && (DAT_2000094a != '\x01')) {
    iVar1 = FUN_08020832(&DAT_200005dc);
    if (iVar1 == 0) {
      FUN_080207fa(&DAT_200005dc,&local_58);
      FUN_08009d2c(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_2000095d == uVar4) && (DAT_2000095c != '\x01')) {
        if ((DAT_20000964 == uVar5) && (DAT_20000963 != '\x01')) {
          if ((DAT_20000952 != uVar2) || (DAT_20000951 == '\x01')) {
            FUN_08009d2c(&DAT_20003f86 + uVar2 * 0x14,(&DAT_20000954)[uVar2]);
            DAT_20000953 = (char)uVar2 + 1U & 7;
            DAT_20000951 = '\0';
          }
        }
        else {
          FUN_08009d2c(&DAT_20004076 + uVar5 * 0x14,0x14);
          DAT_20000965 = (char)uVar5 + 1U & 3;
          DAT_20000963 = '\0';
        }
      }
      else {
        FUN_08009d2c(&DAT_20004026 + uVar4 * 0x14,0x14);
        DAT_2000095e = (char)uVar4 + 1U & 3;
        DAT_2000095c = '\0';
      }
    }
  }
  else {
    FUN_08009d2c(&DAT_20003f36 + uVar3 * 0x14,0x14);
    DAT_2000094c = (char)uVar3 + 1U & 3;
    DAT_2000094a = '\0';
  }
  return;
}



/* ENTRY 0x080209dc : FUN_080209dc */

void FUN_080209dc(void)

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
      DAT_20003181 = 1;
    }
  }
  else {
    DAT_20000178 = 0;
    DAT_20003181 = 0;
  }
  diag_currentmeter =
       FUN_08008320((int)((longlong)DAT_200005c0 * 0x1a),
                    (int)((ulonglong)((longlong)DAT_200005c0 * 0x1a) >> 0x20),3000,0);
  if ((diag_currentmeter & 0x80000000) != 0) {
    diag_currentmeter = 0;
  }
  diag_kilometer = diag_readoutmeter + diag_currentmeter;
  DAT_20003140 = diag_this_ws / 0xe10;
  if (DAT_20003140 < 0) {
    DAT_20003140 = -DAT_20003140;
  }
  diag_kiloWh = diag_this_ws / 0xe10 + DAT_20003138;
  DAT_20003144 = DAT_200032e8 / 0xe10;
  if (DAT_20003144 < 0) {
    DAT_20003144 = -DAT_20003144;
  }
  DAT_20003148 = DAT_200032e4 / 0xe10;
  if (DAT_20003148 < 0) {
    DAT_20003148 = -DAT_20003148;
  }
  if ((DAT_2000017c + 0x708 < DAT_200005c0) && (DAT_20000178 == 100)) {
    DAT_2000017c = DAT_200005c0;
    DAT_20000178 = 0;
    if ((DAT_20003176 == '\0') &&
       ((diag_AgeModeflg == '\0' && ((diag_kilometer & 0x80000000) == 0)))) {
      FUN_08022110(diag_kilometer,diag_kiloWh);
    }
  }
  return;
}



/* ENTRY 0x08020b2c : FUN_08020b2c */

undefined4 FUN_08020b2c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08008582(local_1c,0x14);
  FUN_08008582(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_20003176 == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_0802248c(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_2000320a == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_0802248c(local_1c,local_30);
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
    FUN_0802248c(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08020c0c : FUN_08020c0c */

void FUN_08020c0c(void)

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
  
  iVar4 = DAT_200032b8;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_200032c4;
  iVar8 = 1;
  if (DAT_200032b8 < 0) {
    iVar8 = -1;
  }
  if (DAT_200032c4 < 0x2329) {
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
  if (DAT_200032d8 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032d8;
  }
  if (DAT_200032dc < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032dc;
  }
  if (DAT_200032d0 < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_200032d0 + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001fc * iVar2) / 400;
  }
  iVar6 = DAT_200001fc;
  if ((iVar2 <= DAT_200001fc) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_200032b8;
  if (DAT_200032b8 < 0) {
    iVar2 = -DAT_200032b8;
  }
  if (diag_g_winespeed_lv + -0x3d4 < iVar2) {
    iVar2 = DAT_200032b8;
    if (DAT_200032b8 < 0) {
      iVar2 = -DAT_200032b8;
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



/* ENTRY 0x08020f00 : uart_frame_router */

void uart_frame_router(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005e4 == '\0') {
    if (DAT_200030f0 < 500) {
      diagnostic_mode_handshake(param_1,param_2 & 0xff);
    }
    FUN_08011e54(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x3f || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = validate_or_fill_crc16(&local_54);
    if (iVar1 == 1) {
      dispatch_extended_command(&local_54);
    }
  }
  return;
}



/* ENTRY 0x08020fa0 : FUN_08020fa0 */

bool FUN_08020fa0(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_08026650)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08026650)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x08021008 : FUN_08021008 */

undefined4 FUN_08021008(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08020fa0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_08020fa0(1);
    if (iVar1 == 0) {
      FUN_08021064();
      uVar2 = 0;
    }
    else {
      FUN_08021038(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_08021038(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x08021038 : FUN_08021038 */

undefined4 FUN_08021038(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003194)[uVar1] = *(undefined4 *)((&DAT_08026650)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x08021064 : FUN_08021064 */

undefined4 FUN_08021064(void)

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
      (&DAT_200031f6)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_200031f6)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x080210fc : FUN_080210fc */

undefined4 FUN_080210fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08020fa0(1);
  if (iVar1 == 0) {
    FUN_08021174(1);
    iVar1 = FUN_08020fa0(1);
    if (iVar1 == 0) {
      iVar1 = FUN_08020fa0(0);
      if (iVar1 == 0) {
        FUN_08021174(0);
        iVar1 = FUN_08020fa0(0);
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
      FUN_08021174(0);
      iVar1 = FUN_08020fa0(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_08021174(0);
    iVar1 = FUN_08020fa0(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08021174(1);
      iVar1 = FUN_08020fa0(1);
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



/* ENTRY 0x08021174 : FUN_08021174 */

undefined4 FUN_08021174(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_0800b470();
  FUN_0800b394(0x34);
  DAT_200001dc = FUN_0800b3a0((&DAT_08026650)[param_1]);
  DAT_2000329c = 0;
  DAT_200032a0 = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_2000329c,(&DAT_20003194)[uVar1]);
    DAT_2000329c = DAT_2000329c + (&DAT_20003194)[uVar1];
    DAT_200032a0 = DAT_200032a0 + (uint)bVar2;
    DAT_200001dc = FUN_0800b428((&DAT_08026650)[param_1] + uVar1 * 4,(&DAT_20003194)[uVar1]);
  }
  DAT_200001dc = FUN_0800b428((&DAT_08026650)[param_1] + uVar1 * 4,(&DAT_20003194)[uVar1]);
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001dc = FUN_0800b428((&DAT_08026650)[param_1] + uVar1 * 4,(&DAT_20003194)[uVar1]);
  FUN_0800b394(0x34);
  FUN_0800b3e0();
  return 0;
}



/* ENTRY 0x08021228 : FUN_08021228 */

void FUN_08021228(void)

{
  FUN_08021324();
  FUN_08021e2c();
  DAT_200031e2 = 0x12;
  DAT_200031e4 = 0x13;
  DAT_200031e6 = 0x14;
  DAT_200031e8 = 0x14;
  DAT_200031f0 = 0;
  DAT_200031ea = 1;
  DAT_20003208 = 0;
  DAT_2000320a = 0;
  DAT_2000320c = 2;
  DAT_2000320e = 0;
  DAT_2000320f = 0;
  DAT_20003210 = 0;
  DAT_20003214 = 0xff;
  DAT_20003215 = 0;
  DAT_20003216 = 0;
  DAT_20003217 = 0;
  DAT_20003218 = 0;
  DAT_20003219 = 0xff;
  DAT_2000321a = 0;
  DAT_2000321b = 0;
  DAT_2000321c = 0;
  DAT_2000321d = 0;
  DAT_2000321e = 0xff;
  DAT_2000321f = 0;
  DAT_20003220 = 0xa0;
  DAT_20003221 = 0x20;
  DAT_20003222 = 0xf0;
  DAT_20003223 = 0;
  DAT_20003224 = 0;
  DAT_20003226 = 0xff;
  DAT_20003227 = 0xff;
  DAT_20003228 = 0xff;
  DAT_20003229 = 0xff;
  DAT_20003238 = 1;
  DAT_20003236 = 1;
  DAT_20003240 = 0;
  FUN_08021ed4();
  FUN_0801b83c();
  return;
}



/* ENTRY 0x08021324 : FUN_08021324 */

void FUN_08021324(void)

{
  DAT_20003bbc = 0xe000;
  DAT_20003bbe = 0x28;
  DAT_20003bc0 = 7000;
  DAT_20003bc2 = 20000;
  DAT_20003bc4 = 10000;
  DAT_20003bc6 = 0x9c4;
  DAT_20003bc8 = 0x5a;
  DAT_20003bd6 = 0x3c;
  DAT_20003bd8 = 6000;
  DAT_20003bda = 18000;
  DAT_20003bdc = 8000;
  DAT_20003bde = 0x9c4;
  DAT_20003be0 = 0x50;
  DAT_20003bca = 0x5a;
  DAT_20003bcc = 5000;
  DAT_20003bce = 16000;
  DAT_20003bd0 = 6000;
  DAT_20003bd2 = 0x9c4;
  DAT_20003bd4 = 0x50;
  return;
}



/* ENTRY 0x08021398 : FUN_08021398 */

void FUN_08021398(void)

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
  
  if (((DAT_20003176 == '\x01') || (DAT_20003181 == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_2000069a = 0;
    DAT_2000069c = 0;
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
    if (DAT_2000069c < iVar1) {
      DAT_2000069c = DAT_2000069c + 100;
    }
    else if (iVar1 + 100 < (int)DAT_2000069c) {
      DAT_2000069c = DAT_2000069c + -100;
    }
    if (DAT_2000069a < iVar2) {
      DAT_2000069a = DAT_2000069a + 0x1e;
    }
    else if (iVar2 + 0x1e < (int)DAT_2000069a) {
      DAT_2000069a = DAT_2000069a + -0x1e;
    }
    local_38 = DAT_20003bbc;
    local_36 = DAT_20003bbe;
    local_34 = DAT_20003bc0 + DAT_2000069a;
    local_32 = DAT_20003bc2 + DAT_2000069c;
    local_30 = DAT_20003bc4;
    local_2e = DAT_20003bc6;
    local_2c = DAT_20003bc8;
    local_1e = DAT_20003bd6;
    local_1c = DAT_20003bd8 + (short)(((int)DAT_2000069a << 1) / 3);
    local_1a = DAT_20003bda + (short)(((int)DAT_2000069c << 1) / 3);
    local_18 = DAT_20003bdc;
    local_16 = DAT_20003bde;
    local_14 = DAT_20003be0;
    local_2a = DAT_20003bca;
    local_28 = DAT_20003bcc + DAT_2000069a / 3;
    local_26 = DAT_20003bce + DAT_2000069c / 3;
    local_24 = DAT_20003bd0;
    local_22 = DAT_20003bd2;
    local_20 = DAT_20003bd4;
    FUN_08023f70(&local_38);
  }
  return;
}



/* ENTRY 0x080215b0 : FUN_080215b0 */

void FUN_080215b0(void)

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
    iVar3 = DAT_200032c8 / 100;
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
    if (DAT_2000330d == '\x01') {
      if (((byte)DAT_200032b2 & 0x40) == 0) {
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
    else if (((byte)DAT_200032b2 & 0x40) == 0) {
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



/* ENTRY 0x08021b94 : FUN_08021b94 */

void FUN_08021b94(void)

{
  DAT_2000029c = 0;
  DAT_200002a0 = 0;
  DAT_200002a4 = 0;
  diag_angleoffset_int = 0;
  DAT_200002ac = 0;
  DAT_200002b0 = 0;
  DAT_200002c0 = 0;
  DAT_200002bc = 0;
  FUN_0800b37e(&DAT_200002c4);
  diag_commbospeed = 0;
  DAT_200002b8 = 0;
  DAT_2000036a = 0;
  FUN_0800d888();
  DAT_20000294 = 0;
  return;
}



/* ENTRY 0x08021c0c : FUN_08021c0c */

void FUN_08021c0c(void)

{
  int iVar1;
  
  iVar1 = FUN_08021008();
  if (iVar1 == 0) {
    DAT_20003298 = 0x20220430;
    FUN_0800f250(&DAT_200031f6);
    FUN_0800eadc();
  }
  else if (DAT_20003298 != 0x20220430) {
    DAT_20003298 = 0x20220430;
    FUN_0800f250(&DAT_200031f6);
    FUN_0800eadc();
  }
  FUN_0800f250(&DAT_200031f6);
  if (DAT_20003234 == 0) {
    DAT_200030f8 = 30000;
  }
  else {
    if (DAT_20003234 < 0x3c) {
      DAT_20003234 = 0x3c;
    }
    if (0x3840 < DAT_20003234) {
      DAT_20003234 = 0x3840;
    }
    DAT_200030f8 = (uint)DAT_20003234 * 0x32;
  }
  FUN_08021324();
  DAT_20003bbc = DAT_200031b2;
  FUN_08023f70(&DAT_20003bbc);
  FUN_080241b0();
  DAT_20000644 = DAT_20003224 == 0;
  DAT_2000320e = 0;
  if ((((0x2f < DAT_20003226) && (DAT_20003226 < 0x3a)) && (0x2f < DAT_20003227)) &&
     (((DAT_20003227 < 0x3a && (0x2f < DAT_20003228)) &&
      ((DAT_20003228 < 0x3a && ((0x2f < DAT_20003229 && (DAT_20003229 < 0x3a)))))))) {
    DAT_2000097d = 1;
  }
  DAT_200006a4 = (uint)DAT_20003208;
  DAT_200005fd = 1;
  FUN_08022b88(((int)DAT_200031a6 << 0xc) / 10);
  FUN_08022bb0(((int)DAT_200031a8 << 0xc) / 10);
  FUN_08022b6c(DAT_20003242);
  DAT_20003110 = FUN_08020114();
  if (((DAT_200031ec == (DAT_200031ee ^ 0xffff)) && (-200 < (short)DAT_200031ec)) &&
     ((short)DAT_200031ec < 200)) {
    DAT_200002dc = (int)(short)DAT_200031ec;
  }
  FUN_0801ad64(DAT_200031e0);
  return;
}



/* ENTRY 0x08021ddc : FUN_08021ddc */

void FUN_08021ddc(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(4,1);
  local_8 = 0x10031000;
  FUN_0800b9b4(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08021e08 : FUN_08021e08 */

void FUN_08021e08(void)

{
  FUN_08015580(0x10,&DAT_08001300);
  FUN_08015580(0xe,&DAT_08001310);
  FUN_08015580(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x08021e2c : FUN_08021e2c */

void FUN_08021e2c(void)

{
  DAT_200031b2 = DAT_20003bbc;
  DAT_200031b4 = DAT_20003bbe;
  DAT_200031b6 = DAT_20003bc0;
  DAT_200031b8 = DAT_20003bc2;
  DAT_200031ba = DAT_20003bc4;
  DAT_200031bc = DAT_20003bc6;
  DAT_200031be = DAT_20003bc8;
  DAT_200031cc = DAT_20003bd6;
  DAT_200031ce = DAT_20003bd8;
  DAT_200031d0 = DAT_20003bda;
  DAT_200031d2 = DAT_20003bdc;
  DAT_200031d4 = DAT_20003bde;
  DAT_200031d6 = DAT_20003be0;
  DAT_200031c0 = DAT_20003bca;
  DAT_200031c2 = DAT_20003bcc;
  DAT_200031c4 = DAT_20003bce;
  DAT_200031c6 = DAT_20003bd0;
  DAT_200031c8 = DAT_20003bd2;
  DAT_200031ca = DAT_20003bd4;
  return;
}



/* ENTRY 0x08021ed4 : FUN_08021ed4 */

void FUN_08021ed4(void)

{
  DAT_20003194._0_2_ = 0x5465;
  DAT_20003194._2_2_ = 0;
  DAT_20003198._0_2_ = 0x1450;
  DAT_20003198._2_2_ = 0;
  DAT_2000319c._0_2_ = 0;
  DAT_2000319c._2_2_ = 0;
  DAT_200031a0 = 0;
  DAT_200031a2 = 0;
  DAT_200031a4 = 0;
  DAT_200031a6 = 0;
  DAT_200031a8 = 500;
  DAT_200031aa = 0;
  DAT_200031ac = 0;
  DAT_200031ae = 0;
  DAT_200031b0 = 0;
  DAT_200031d8 = 0;
  DAT_200031da = 0;
  DAT_200031dc = 0;
  DAT_200031de = 0;
  DAT_200031e0 = 100;
  DAT_200031ec = 0;
  DAT_200031ee = 0;
  DAT_200031f2 = 0;
  DAT_200031f4 = 0;
  DAT_20003212 = 0;
  DAT_2000322c = 0;
  DAT_20003230 = 0;
  DAT_20003234 = 600;
  DAT_20003242 = 0;
  DAT_20003243 = 0;
  return;
}



/* ENTRY 0x08021f54 : FUN_08021f54 */

undefined4 FUN_08021f54(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_20003138 = 0;
  DAT_20003140 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800f47c();
  return 0;
}



/* ENTRY 0x08021f80 : FUN_08021f80 */

void FUN_08021f80(void)

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
  
  FUN_0800ed10(0x11,1);
  FUN_0800baf6(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_0800b9b4(&DAT_40011000,&local_34);
  FUN_0800ba62(&DAT_40011000,0x200);
  FUN_0800ecc8(2,1);
  FUN_0800a810(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_200040dc;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_0800a94c(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_0800d998(&local_54);
  FUN_0800a93c(&DAT_40020408,2,1);
  FUN_0800a7fc(&DAT_40020408,1);
  FUN_0800ed10(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_08011234(&DAT_40013400,&local_40);
  FUN_08011184(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_08011112(&DAT_40013400,&local_50);
  FUN_08011176(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_08010ad6(&DAT_40013400,&local_64);
  FUN_08010b1a(&DAT_40013400,0x80);
  FUN_08010ac4(&DAT_40013400,1);
  FUN_08010b58(&DAT_40013400,0xf,0x100);
  FUN_08010b48(&DAT_40013400,0x100);
  FUN_08010b32(&DAT_40013400,1);
  FUN_08010b20(&DAT_40013400,1);
  return;
}



/* ENTRY 0x08022110 : FUN_08022110 */

undefined4 FUN_08022110(uint param_1,uint param_2)

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
    FUN_0800f47c();
  }
  return 0;
}



/* ENTRY 0x08022144 : FUN_08022144 */

undefined4 FUN_08022144(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0801bd7c((int)local_20 >> 8);
  uVar4 = FUN_0801bda4((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_0800b470();
  FUN_0800b270((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0801bda4((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0801bda4((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b270((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b270((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_0800b3e0();
  FUN_0800af94((&DAT_200000a6)[param_1],&local_20);
  uVar1 = FUN_0801bd7c((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0801bda4((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800af94((&DAT_200000a6)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0801bda4((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0801bda4((char)local_20,uVar1);
  }
  FUN_0800af94((&DAT_200000a6)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ENTRY 0x08022268 : FUN_08022268 */

void FUN_08022268(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  _local_18 = CONCAT22((undefined2)DAT_200033f4,(undefined2)DAT_200033f0);
  _local_14 = CONCAT22((short)((uint)((DAT_200033fc - (DAT_200033fc >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_200033f8);
  _local_10 = CONCAT22((short)((uint)((DAT_20003404 - (DAT_20003404 >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_20003400 - (DAT_20003400 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_20003408);
  FUN_08022144(0,8,&local_18);
  return;
}



/* ENTRY 0x080222ec : FUN_080222ec */

bool FUN_080222ec(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001de;
  if (DAT_200001de < 0x3ff) {
    DAT_200001e0 = DAT_200001e0 + param_1;
    FUN_0800b470();
    FUN_0800b3f0((uint)DAT_200001de * 2 + 0x803a000,param_1);
    FUN_0800b3e0();
    DAT_200001de = DAT_200001de + 1;
  }
  else {
    FUN_0800b470();
    FUN_0800b3a0(0x803a000);
    FUN_0800b3e0();
    DAT_200001e0 = DAT_200001e0 + param_1 * 10;
    DAT_200031f4 = (undefined2)((uint)DAT_200001e0 >> 0x10);
    DAT_200031f2 = (undefined2)DAT_200001e0;
    DAT_200001de = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x08022380 : FUN_08022380 */

void FUN_08022380(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0800c7ec(sVar1);
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
    iVar2 = FUN_0800c7ec(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_0802749a)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_0802749a)[uVar4];
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



/* ENTRY 0x0802248c : FUN_0802248c */

undefined4 FUN_0802248c(void)

{
  return 0;
}



/* ENTRY 0x08022494 : FUN_08022494 */

void FUN_08022494(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_200009ae == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_200040dc + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_200040dc + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46 +
             (~((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
             0x14 | (((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U)
                     * 0x46 + (~((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >>
                                (7 - uVar2 & 0xff)) & 1U) * 0x14) * 0x10000;
      }
    }
    DAT_200009ae = '\x01';
  }
  return;
}



/* ENTRY 0x08022610 : FUN_08022610 */

void FUN_08022610(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003bf4)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003c06)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x08022638 : FUN_08022638 */

void FUN_08022638(int param_1)

{
  uint uVar1;
  
  DAT_2000087c = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_2000087c = DAT_2000087c + '\x01';
    }
    (&DAT_20003c18)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003c19)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003c1a)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x080226ac : FUN_080226ac */

int FUN_080226ac(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    (&DAT_20003f36)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f38)[uVar2 * 0x14 + iVar1] = (&DAT_20004b8f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f46)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f39)[uVar2 * 0x14 + iVar1] = (&DAT_20004b8f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_2000094d)[uVar2] = 0x14;
    DAT_2000094b = (char)uVar2 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x0802277c : FUN_0802277c */

int FUN_0802277c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    (&DAT_20003f36)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f38)[uVar2 * 0x14 + iVar1] = (&DAT_20004abd)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f46)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f39)[uVar2 * 0x14 + iVar1] = (&DAT_20004abd)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_2000094d)[uVar2] = 0x14;
    DAT_2000094b = (char)uVar2 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08022848 : FUN_08022848 */

void FUN_08022848(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_08008456(&DAT_2000096a);
  iVar3 = FUN_08008456(&DAT_20000971);
  sVar1 = 0;
  uVar5 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    (&DAT_20003f36)[uVar5 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20003f38)[uVar5 * 0x14 + iVar4] = (&DAT_2000096a)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_2000096a)[iVar4] + sVar1;
    }
    (&DAT_20003f38)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20003f39)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_20000971)[iVar4];
      uVar6 = (byte)(&DAT_20000971)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20003f39)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_20003f46)[uVar5 * 0x14] = 0xbb;
    (&DAT_20003f47)[uVar5 * 0x14] = 0x14;
    (&DAT_20003f48)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20003f49)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_2000094d)[uVar5] = 0x14;
    DAT_2000094b = (char)uVar5 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return;
}



/* ENTRY 0x08022984 : FUN_08022984 */

int FUN_08022984(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000094b & 3;
  if (DAT_2000094a == '\0') {
    (&DAT_20003f36)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f38)[uVar2 * 0x14 + iVar1] = (&DAT_200031f6)[iVar1];
    }
    (&DAT_20003f46)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f39)[uVar2 * 0x14 + iVar1] = (&DAT_200031f6)[iVar1];
    }
    (&DAT_2000094d)[uVar2] = 0x14;
    DAT_2000094b = (char)uVar2 + 1U & 3;
    if (DAT_2000094b == DAT_2000094c) {
      DAT_2000094a = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08022a38 : FUN_08022a38 */

undefined4 FUN_08022a38(void)

{
  FUN_0800cc54(&DAT_20003310);
  return DAT_20003318;
}



/* ENTRY 0x08022a4c : FUN_08022a4c */

undefined4 FUN_08022a4c(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
}



/* ENTRY 0x08022a5c : FUN_08022a5c */

undefined4 FUN_08022a5c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (DAT_08001340 == -0x3f11) {
    if (DAT_08001344 == 0x3f10) {
      uVar1 = 1;
    }
    else if (DAT_200030f0 < 300) {
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
          FUN_0800b470();
          FUN_0800b394(0x34);
          FUN_0800b3f0(&DAT_08001342,DAT_200002ec);
          FUN_0800b3f0(&DAT_08001344,0x3f10);
          FUN_0800b394(0x34);
          FUN_0800b3e0();
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



/* ENTRY 0x08022b48 : FUN_08022b48 */

undefined4 FUN_08022b48(void)

{
  FUN_0800b470();
  FUN_0800b428(&DAT_0803a800,0x28536692);
  FUN_0800b3e0();
  return 0;
}



/* ENTRY 0x08022b6c : FUN_08022b6c */

void FUN_08022b6c(undefined1 param_1)

{
  DAT_2000330d = param_1;
  return;
}



/* ENTRY 0x08022b78 : FUN_08022b78 */

undefined4 FUN_08022b78(void)

{
  DAT_20003176 = 1;
  return 0;
}



/* ENTRY 0x08022b88 : FUN_08022b88 */

void FUN_08022b88(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_200032bc == '\0') {
    DAT_200032f4 = param_1;
  }
  return;
}



/* ENTRY 0x08022bb0 : FUN_08022bb0 */

void FUN_08022bb0(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_200032bc == '\0') {
    DAT_200032f8 = param_1;
  }
  return;
}



/* ENTRY 0x08022bd8 : FUN_08022bd8 */

undefined8 FUN_08022bd8(int param_1,int param_2)

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
  if (2000 < diag_kilometer) {
    iVar7 = (int)DAT_20000636;
  }
  for (uVar6 = 0; uVar6 < 6; uVar6 = uVar6 + 1 & 0xff) {
    if ((&DAT_2000323a)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_08022c30;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_200031e2 = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_200031e2;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_200031e4 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_200031e4;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_200031e6 = uVar1;
  }
  uVar1 = DAT_200031e6;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_200031e8 = (short)iVar5;
  }
  sVar4 = DAT_200031e8;
  FUN_08023100(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0800f4bc(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_080241b0();
LAB_08022c30:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x08022cc0 : FUN_08022cc0 */

void FUN_08022cc0(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0801ef38();
  FUN_0800b470();
  FUN_0800b394(0x35);
  FUN_0800b428(&DWORD_08008304,uVar1);
  dVar2 = FUN_0801ef38();
  if (dVar2 == 0xffffffff) {
    FUN_0801e750();
    FUN_0800b3e0();
    return;
  }
  FUN_0800b3e0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08022d44 : FUN_08022d44 */

void FUN_08022d44(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (diag_AgeModeflg == '\0') {
    if (DAT_20000684 != 0) {
      DAT_20000684 = DAT_20000684 + -1;
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
      if ((int)((uint)DAT_200031e2 * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_200031e4 * 1000)) {
          if (DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) goto LAB_08022dea;
          bVar3 = DAT_20000640 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_08022fce;
LAB_08022dea:
              bVar3 = DAT_200031f0 == 1;
            } while (!bVar3);
            if (DAT_200031e2 == 0) goto LAB_08022fce;
            bVar3 = DAT_20003176 == '\0';
          } while (!bVar3);
          FUN_08023100(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_200031e6 * 1000)) {
            if ((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
                (DAT_20000640 % 0x32 == 0x14)) &&
               (((DAT_200031f0 == 1 && (DAT_200031e4 != 0)) && (DAT_20003176 == '\0')))) {
              FUN_08023100(1);
            }
          }
          else if (DAT_200031f0 == 1) {
            if (((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
                 (DAT_20000640 % 0x32 == 0x14)) ||
                ((DAT_20000640 % 0x32 == 0x1e || (DAT_20000640 % 0x32 == 0x28)))) &&
               (DAT_20003176 == '\0')) {
              FUN_08023100(1);
            }
          }
          else if ((DAT_20000684 == 0) && (DAT_20003176 == '\0')) {
            if (DAT_200006a4 == 0) {
              DAT_200006a8 = 2;
              DAT_20000684 = 300;
            }
            else {
              DAT_200006a8 = 6;
              DAT_20000684 = 300;
            }
          }
        }
      }
    }
    else if (DAT_200031f0 == 1) {
      if (((((DAT_20000640 == (DAT_20000640 / 0x32) * 0x32) || (DAT_20000640 % 0x32 == 10)) ||
           (DAT_20000640 % 0x32 == 0x14)) ||
          ((DAT_20000640 % 0x32 == 0x1e || (DAT_20000640 % 0x32 == 0x28)))) &&
         (DAT_20003176 == '\0')) {
        FUN_08023100(1);
      }
    }
    else if ((DAT_20000684 == 0) && (DAT_20003176 == '\0')) {
      if (DAT_200006a4 == 0) {
        DAT_200006a8 = 2;
        DAT_20000684 = 300;
      }
      else {
        DAT_200006a8 = 6;
        DAT_20000684 = 300;
      }
    }
LAB_08022fce:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_20000688 = 0x32;
    }
    else {
      bVar1 = DAT_20000688 + 1;
      bVar3 = 0x1e < DAT_20000688;
      DAT_20000688 = bVar1;
      if (bVar3) {
        FUN_08023100(3);
        DAT_20000688 = 0;
      }
    }
    if ((DAT_20000644 == '\0') && (diag_cartstep != '\0')) {
      DAT_20000686 = DAT_20000686 + 1;
      if (DAT_20000686 < 0x1f5) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (100 < iVar2) {
          FUN_08023100(2);
        }
      }
      else {
        FUN_08023100(2);
        DAT_20000686 = 0;
      }
    }
    if (0 < DAT_2000068a) {
      DAT_2000068a = DAT_2000068a + -1;
    }
    if ((DAT_20003bac != '\0') && (DAT_2000068a == 0)) {
      if (DAT_200031f0 == 1) {
        FUN_08023100();
        DAT_2000068a = 100;
      }
      else {
        if (DAT_200006a4 == 0) {
          DAT_200006a8 = 4;
        }
        else {
          DAT_200006a8 = 10;
        }
        DAT_2000068a = 300;
      }
    }
    if (DAT_200006d0 != 0) {
      DAT_200006d0 = DAT_200006d0 + -1;
    }
  }
  return;
}



/* ENTRY 0x080230f4 : FUN_080230f4 */

void FUN_080230f4(undefined1 param_1)

{
  DAT_200001c8 = param_1;
  return;
}



/* ENTRY 0x08023100 : FUN_08023100 */

void FUN_08023100(undefined1 param_1)

{
  DAT_200001c9 = param_1;
  return;
}



/* ENTRY 0x0802310c : FUN_0802310c */

void FUN_0802310c(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_0800ed10(8,1);
  local_8 = 0x10030100;
  FUN_0800b9b4(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x08023138 : FUN_08023138 */

void FUN_08023138(void)

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



/* ENTRY 0x080231e8 : FUN_080231e8 */

void FUN_080231e8(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000007c = FUN_0800dc54(0);
  FUN_08019c54();
  do {
    FUN_08019c9c();
    FUN_08023138();
    FUN_0800dca8(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x08023214 : FUN_08023214 */

void FUN_08023214(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031ea == 1) {
    FUN_0800baf2(&DAT_40011000,0x80);
  }
  else if (DAT_200005fc == '\x01') {
    FUN_0800baee(&DAT_40011000,0x80);
  }
  FUN_0801ec0c();
  if ((DAT_200006b4 == (DAT_200006b4 / 0x14) * 0x14) && (DAT_200006ca == '\x01')) {
    FUN_08023100();
  }
  if (DAT_200006b4 % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_20000834 == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0801f880(0), iVar1 != 0)) {
      DAT_20000834 = '\x01';
    }
  }
  else if (DAT_20000834 == '\x01') {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (2000 < iVar1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 10000) && (iVar1 = FUN_0801f880(0), iVar1 != 0)) {
        FUN_08022b78();
        FUN_08023100(1);
        DAT_20000834 = '\x02';
      }
    }
  }
  if ((((((DAT_200005fd == '\0') || (DAT_20000644 == '\0')) || (DAT_200006ca == '\x01')) ||
       ((DAT_200006ce == '\x01' || (DAT_200006cf == '\x01')))) ||
      ((DAT_200006cc == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     ((DAT_2000314f & 1) != 0)) {
    DAT_200005fc = 0;
  }
  else {
    DAT_200005fc = 1;
  }
  if (DAT_20003234 == 0) {
    DAT_200030f4 = 0;
  }
  if (DAT_200006b4 % 6 == 2) {
    for (bVar3 = 0; DAT_20003174 = 0, bVar3 < 0x28; bVar3 = bVar3 + 1) {
      DAT_20000838 = DAT_20000838 + 1;
      uVar2 = DAT_20000838 % 0x28;
      DAT_20003174 = 0;
      if (uVar2 < 0x20) {
        if ((diag_allwarnbit >> uVar2 & 1) != 0) {
          if (DAT_20000838 % 0x140 < 0x118) {
            DAT_20003174 = (short)uVar2 + 0xc9;
          }
          break;
        }
      }
      else if (((int)(uint)DAT_200030dc >> (uVar2 - 0x20 & 0xff) & 1U) != 0) {
        if (DAT_20000838 % 0x140 < 0x118) {
          DAT_20003174 = (short)uVar2 + 0xc9;
        }
        break;
      }
    }
  }
  DAT_20003160 = DAT_20003160 | diag_allwarnbit;
  FUN_0801e218(DAT_200006b4);
  FUN_0800ef88();
  FUN_08009c9c();
  if ((DAT_2000317f != '\0') && (DAT_20003181 != '\0')) {
    FUN_080210fc();
    DAT_2000317f = '\0';
  }
  DAT_200006b4 = DAT_200006b4 + 1;
  return;
}



/* ENTRY 0x08023478 : FUN_08023478 */

void FUN_08023478(void)

{
  int iVar1;
  uint uVar2;
  
  diag_TotalVoltage = DAT_200032c4;
  diag_TotalVol_show = DAT_200032c8;
  diag_VehicleSpeed = (DAT_200032b8 + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)(((diag_VehicleSpeed - DAT_20000150) + diag_speedAcc * 9) / 10);
  diag_VectorVol = DAT_200032d0;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0801f1d0((int)DAT_200034f2);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0801f190((int)DAT_200034ea);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0801f0a8((int)DAT_200034f8);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0801ed0c((int)DAT_2000331c);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_200034f4 >> 4));
  diag_lightad = DAT_200034ee;
  DAT_200030ee = DAT_200034f6;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  diag_IQCurrent = (iVar1 + diag_IQCurrent * 0x1d) / 0x1e;
  diag_HallState = DAT_200005b0;
  if (0x96 < DAT_200030f0) {
    diag_TotalCurrent = diag_BusCurrent;
  }
  diag_cpurate = DAT_20000028;
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if (DAT_20003118 < iVar1) {
    DAT_20003118 = iVar1;
  }
  DAT_2000312f = (char)(((ulonglong)(uint)(diag_currentmeter * 0x12) / 5) / (ulonglong)DAT_2000310c)
  ;
  if (DAT_2000310c < 6) {
    DAT_2000312c = (undefined1)(DAT_200032c4 / 100);
  }
  else {
    if ((int)DAT_2000312e < (int)diag_MosTemp) {
      DAT_2000312e = (char)diag_MosTemp;
    }
    iVar1 = (int)DAT_200032ec;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((int)(uint)DAT_20003130 < iVar1) {
      DAT_20003130 = (ushort)iVar1;
    }
    iVar1 = diag_TotalCurrent;
    if (diag_TotalCurrent < 0) {
      iVar1 = -diag_TotalCurrent;
    }
    if (DAT_20003124 < iVar1) {
      DAT_20003124 = iVar1;
    }
    if (DAT_2000311c < diag_TotalVol_show) {
      DAT_2000311c = diag_TotalVol_show;
    }
    if (diag_TotalVol_show < DAT_20003120) {
      DAT_20003120 = diag_TotalVol_show;
    }
    if ((int)DAT_20003132 < (int)diag_MotorTemp) {
      DAT_20003132 = (char)diag_MotorTemp;
    }
    if (DAT_20003133 < DAT_20003134) {
      DAT_20003133 = DAT_20003134;
    }
  }
  diag_allwarnbit = CONCAT22(DAT_200030da,DAT_200032b0);
  iVar1 = 0;
  if ((DAT_200049ee == '\0') && (DAT_20004bae == '\0')) {
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      iVar1 = iVar1 + (uint)(ushort)(&DAT_20004b32)[uVar2] + (uint)(ushort)(&DAT_20004cf2)[uVar2];
    }
    iVar1 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4) + -0xaaa;
    DAT_20003134 = (char)(iVar1 / 10);
    if (iVar1 < 0x51) {
      if (iVar1 < 1) {
        if (30000 < DAT_200032d8) {
          DAT_200032d8 = DAT_200032d8 + -10;
        }
      }
      else {
        iVar1 = (iVar1 * 41000) / 0x50;
        if (DAT_200032d8 < iVar1 + 0x7526) {
          DAT_200032d8 = DAT_200032d8 + 10;
        }
        if (iVar1 + 0x753a < DAT_200032d8) {
          DAT_200032d8 = DAT_200032d8 + -10;
        }
      }
    }
    else if (DAT_200032d8 < 71000) {
      DAT_200032d8 = DAT_200032d8 + 10;
    }
  }
  else if (DAT_200032d8 < 71000) {
    DAT_200032d8 = DAT_200032d8 + 10;
  }
  if ((DAT_200030da & 1) != 0) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if ((6000 < iVar1) && (iVar1 + 1000 < DAT_200032dc)) {
      DAT_200032dc = iVar1 + 1000;
    }
    if (3000 < DAT_200032dc) {
      DAT_200032dc = DAT_200032dc + -0x32;
    }
  }
  return;
}



/* ENTRY 0x08023810 : FUN_08023810 */

void FUN_08023810(void)

{
  DAT_200030ec = DAT_200034f0;
  return;
}



/* ENTRY 0x08023824 : FUN_08023824 */

void FUN_08023824(void)

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
      FUN_0800eb44(7);
      DAT_200030da = DAT_200030da | 0x4000;
      DAT_20000160 = 400;
      FUN_08019a74(7);
    }
  }
  else {
    DAT_20000154 = 0;
    DAT_200030da = DAT_200030da & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000628) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002d8 == '\x04')))) {
    bVar1 = 199 < DAT_2000015b;
    DAT_2000015b = DAT_2000015b + 1;
    if ((bVar1) && (DAT_2000015b = '\0', DAT_20000168 == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800eb44(7);
      }
      DAT_200030da = DAT_200030da | 0x1000;
      DAT_20000168 = 400;
      FUN_08019a74(6);
    }
  }
  else {
    DAT_2000015b = '\0';
    DAT_200030da = DAT_200030da & 0xefff;
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
      if ((DAT_20003176 == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_08020688();
      }
      FUN_08015b08(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030da = DAT_200030da | 4;
      FUN_08019a74(8);
    }
  }
  else if (DAT_20000156 < 2) {
    DAT_200030da = DAT_200030da & 0xfffb;
  }
  else {
    DAT_20000156 = DAT_20000156 - 2;
  }
  iVar2 = diag_TotalCurrent;
  if (diag_TotalCurrent < 0) {
    iVar2 = -diag_TotalCurrent;
  }
  if ((DAT_20000632 < iVar2) || ((((byte)DAT_200032b0 & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_20000158;
    DAT_20000158 = DAT_20000158 + 1;
    if ((bVar1) && (DAT_20000158 = 0, DAT_20000162 == 0)) {
      FUN_08015b08(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030da = DAT_200030da | 8;
      DAT_20000162 = 300;
      FUN_08019a74(9);
    }
  }
  else if (DAT_20000158 == 0) {
    DAT_200030da = DAT_200030da & 0xfff7;
  }
  else {
    DAT_20000158 = DAT_20000158 - 1;
  }
  if (diag_VectorVol < 28000) {
    DAT_2000015d = '\0';
    DAT_200030da = DAT_200030da & 0xfffd;
  }
  else {
    bVar1 = 10 < DAT_2000015d;
    DAT_2000015d = DAT_2000015d + 1;
    if ((bVar1) && (DAT_2000015d = '\0', DAT_20000166 == 0)) {
      FUN_08015b08(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030da = DAT_200030da | 2;
      DAT_20000166 = 100;
      FUN_08019a74(10);
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
        DAT_200032b2 = DAT_200032b2 | 0x10;
      }
      DAT_200030da = DAT_200030da | 1;
      DAT_200032b0 = DAT_200032b0 | 1;
      if (DAT_20000164 == 0) {
        FUN_08015b08(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_08019a74(5);
      }
    }
  }
  else {
    DAT_200032b2 = DAT_200032b2 & 0xffef;
    DAT_200030da = DAT_200030da & 0xfffe;
    DAT_200032b0 = DAT_200032b0 & 0xfffe;
    DAT_2000015a = '\0';
  }
  if (diag_MosTemp < DAT_20000634) {
    DAT_2000015c = '\0';
    DAT_200030da = DAT_200030da & 0xffdf;
  }
  else {
    bVar1 = 10 < DAT_2000015c;
    DAT_2000015c = DAT_2000015c + 1;
    if ((bVar1) && (DAT_2000015c = '\0', DAT_2000016a == 0)) {
      if (DAT_200002d8 != '\x01') {
        FUN_0800eb44(7);
        FUN_08015b08(0x24,(int)diag_MosTemp,0);
        DAT_200030da = DAT_200030da | 0x20;
      }
      DAT_2000016a = 200;
      FUN_08019a74(0xb);
    }
  }
  if (((DAT_200032b0 & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08015b08(0x1a,0);
    DAT_2000016e = 200;
    FUN_08019a74(0xd);
  }
  if (((DAT_200032b0 & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08015b08(0x23,0);
    DAT_2000016c = 200;
    FUN_08019a74(0xc);
  }
  if (DAT_20003152 == '\0') {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002d8 != '\x01') {
        FUN_0800eb44(7);
      }
      DAT_20000170 = 200;
      FUN_08019a74(0xe);
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
    FUN_08019a74(0xf);
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



/* ENTRY 0x08023df0 : FUN_08023df0 */

undefined8 FUN_08023df0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800ece0(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_08011234(&DAT_40000c00,&local_14);
  FUN_080112e2(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_0800d998(&local_18);
  FUN_08010b20(&DAT_40000c00,1);
  FUN_08010f4c(&DAT_40000c00,1);
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT13(local_15,CONCAT12(local_16,CONCAT11(local_17,
                                                  local_18)))));
}



/* ENTRY 0x08023e64 : FUN_08023e64 */

void FUN_08023e64(void)

{
  FUN_08023df0(4000);
  return;
}



/* ENTRY 0x08023e70 : diagnostic_mode_handshake */

void diagnostic_mode_handshake(char *param_1,int param_2)

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



/* ENTRY 0x08023f20 : FUN_08023f20 */

void FUN_08023f20(void)

{
  DAT_200006ac = DAT_200006ac + 1;
  FUN_08016890(&DAT_200006a8);
  if (DAT_20000638 < 3) {
    DAT_20000638 = DAT_20000638 + 1;
  }
  else {
    DAT_20000638 = '\0';
  }
  FUN_08022494(DAT_20000638,&DAT_20003bf4,&DAT_20003c06);
  return;
}



/* ENTRY 0x08023f70 : FUN_08023f70 */

undefined4 FUN_08023f70(short *param_1)

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



/* ENTRY 0x080241b0 : FUN_080241b0 */

undefined4 FUN_080241b0(void)

{
  if (DAT_200031e2 < 0x65) {
    if (DAT_200031e2 == 0) {
      DAT_2000060e = 1;
    }
    else {
      DAT_2000060e = (undefined1)DAT_200031e2;
    }
  }
  else {
    DAT_2000060e = 100;
  }
  if (DAT_200031e4 < 0x65) {
    if (DAT_200031e4 == 0) {
      DAT_2000060f = 1;
    }
    else {
      DAT_2000060f = (undefined1)DAT_200031e4;
    }
  }
  else {
    DAT_2000060f = 100;
  }
  if (DAT_200031e6 < 0x65) {
    if (DAT_200031e6 == 0) {
      DAT_20000610 = 1;
    }
    else {
      DAT_20000610 = (undefined1)DAT_200031e6;
    }
  }
  else {
    DAT_20000610 = 100;
  }
  if (DAT_200031e8 < 0x65) {
    if (DAT_200031e8 == 0) {
      DAT_20000611 = 1;
    }
    else {
      DAT_20000611 = (undefined1)DAT_200031e8;
    }
  }
  else {
    DAT_20000611 = 100;
  }
  return 0;
}



/* ENTRY 0x08024278 : FUN_08024278 */

void FUN_08024278(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000074 = FUN_0800dc54(0);
  do {
    FUN_08023810();
    FUN_08023f20();
    FUN_0800dca8(DAT_20000074,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x080242a0 : FUN_080242a0 */

void FUN_080242a0(void)

{
  if (DAT_20000894 < 0x14) {
    DAT_20000894 = DAT_20000894 + 1;
    DAT_20000890 = ((int)(uint)DAT_200034f0 >> 4) * 100;
  }
  else {
    DAT_20000890 = (DAT_20000890 * 99 + ((int)(uint)DAT_200034f0 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x080242f8 : FUN_080242f8 */

void FUN_080242f8(int param_1)

{
  int iVar1;
  
  if ((DAT_20000880 % 0x226 == 200) && (DAT_200031f0 == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_0802433e;
    }
    FUN_08023100(3);
  }
LAB_0802433e:
  if ((DAT_20000880 % 900 == 200) && (DAT_200031f0 == 0)) {
    if (param_1 < 0x2454) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (7000 < iVar1) {
        if (DAT_200006a4 == 0) {
          DAT_200006a8 = 1;
          return;
        }
        DAT_200006a8 = 7;
        return;
      }
    }
    if (0x3264 < param_1) {
      if (DAT_200006a4 == 0) {
        DAT_200006a8 = 5;
      }
      else {
        DAT_200006a8 = 8;
      }
    }
  }
  return;
}



/* ENTRY 0x080243c0 : FUN_080243c0 */

void FUN_080243c0(void)

{
  DAT_20000640 = DAT_20000640 + 1;
  FUN_08022d44();
  FUN_0801080c();
  FUN_0801fb5c();
  FUN_0801b15c();
  return;
}


