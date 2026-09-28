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
  (*(code *)0x800816c)(&DAT_08028840,0x20000000,0x9e4);
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
  
  uVar1 = FUN_08023bac();
  FUN_080081e4(uVar1,extraout_r2);
  FUN_0800a42e();
  uVar2 = FUN_08023bf6();
  FUN_080081e8();
  FUN_08023c08((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028840,0x20000000,0x9e4);
  return;
}



/* ENTRY 0x0800820c : FUN_0800820c */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0800820c(void)

{
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028840,0x20000000,0x9e4);
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
  return 0x200076f8200062f8;
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
  FUN_0800a06e();
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
  return &DAT_20006298;
}



/* ENTRY 0x08008320 : FUN_08008320 */

void FUN_08008320(void)

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



/* ENTRY 0x080083f8 : FUN_080083f8 */

void FUN_080083f8(void)

{
  FUN_08008320();
  return;
}



/* ENTRY 0x08008400 : FUN_08008400 */

void FUN_08008400(void)

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
  FUN_080083f8();
  DAT_e000ed08 = 0x8000000;
  return;
}



/* ENTRY 0x0800844e : FUN_0800844e */

int FUN_0800844e(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = DAT_40021004;
  uVar3 = uVar3 & 0xc;
  if (uVar3 == 0) {
    DAT_20000000 = 8000000;
  }
  else if (uVar3 == 4) {
    DAT_20000000 = 8000000;
  }
  else if (uVar3 == 8) {
    uVar3 = DAT_40021004;
    uVar1 = DAT_40021004;
    iVar2 = ((uVar3 & 0x3c0000) >> 0x12) + 2;
    if ((uVar1 & 0x10000) == 0) {
      DAT_20000000 = iVar2 * 4000000;
    }
    else {
      uVar3 = DAT_40021004;
      if ((uVar3 & 0x20000) == 0) {
        DAT_20000000 = iVar2 * 8000000;
      }
      else {
        DAT_20000000 = iVar2 * 4000000;
      }
    }
  }
  else {
    DAT_20000000 = 8000000;
  }
  uVar3 = DAT_40021004;
  DAT_20000000 = DAT_20000000 >> (&DAT_20000004)[(uVar3 & 0xff) >> 4];
  return iVar2;
}



/* ENTRY 0x08008500 : FUN_08008500 */

int FUN_08008500(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* ENTRY 0x0800850e : FUN_0800850e */

int FUN_0800850e(int param_1)

{
  if (param_1 < 0x8001) {
    param_1 = param_1 * param_1;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* ENTRY 0x08008520 : FUN_08008520 */

void FUN_08008520(uint param_1)

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



/* ENTRY 0x0800854e : FUN_0800854e */

int FUN_0800854e(int param_1)

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
  iVar1 = FUN_08008500(param_1,0x9000,param_1,iVar1);
  if (iVar1 < 0xa000) {
    iVar2 = (extraout_r2 * 0x1922) / 0xb4;
    iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x15)) >> 0xb;
  }
  else {
    iVar2 = *(int *)(&DAT_08025254 + extraout_r3 * 4) * iVar2;
  }
  return iVar2;
}



/* ENTRY 0x080085b0 : FUN_080085b0 */

undefined4 FUN_080085b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0800850e(0x1000);
  FUN_0800854e(param_1);
  iVar2 = FUN_0800850e();
  uVar3 = FUN_08008520(iVar1 - iVar2);
  return uVar3;
}



/* ENTRY 0x080085de : FUN_080085de */

int FUN_080085de(int param_1)

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
  iVar1 = FUN_08008500(param_1,iVar1,param_1,iVar2);
  if (iVar1 < 0x424) {
    iVar3 = (extraout_r2 * 0xb4000) / 0x3244;
  }
  else {
    iVar1 = FUN_08008500(extraout_r2);
    if (iVar1 < 0xa49) {
      iVar3 = (*(int *)(&DAT_080261f8 + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_080261f8 + extraout_r3 * 4) * iVar3;
    }
  }
  return iVar3;
}



/* ENTRY 0x08008688 : FUN_08008688 */

void FUN_08008688(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar5 = FUN_080085de(*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0x8c) = iVar5 + *(int *)(param_1 + 0x40);
  iVar5 = FUN_080085de(*(undefined4 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x90) = iVar5 + *(int *)(param_1 + 0x44);
  if (DAT_2000001c != '\0') {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x90);
    uVar2 = (longlong)*(int *)(param_1 + 0x98) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
    uVar16 = FUN_080239ea((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0,param_3,param_4);
    *(undefined8 *)(param_1 + 0x68) = uVar16;
    uVar2 = (longlong)*(int *)(param_1 + 0xa0) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
    uVar16 = FUN_080239ea((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0);
    *(undefined8 *)(param_1 + 0x70) = uVar16;
    DAT_2000001c = '\0';
  }
  piVar1 = (int *)(param_1 + 0x98);
  iVar5 = FUN_0800854e(*piVar1);
  iVar6 = FUN_080085b0(*piVar1);
  iVar7 = FUN_0800854e(*(undefined4 *)(param_1 + 0xa0));
  iVar8 = FUN_080085b0(*(undefined4 *)(param_1 + 0xa0));
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
  uVar16 = FUN_080239ea((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001b4 + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar2 = (longlong)*(int *)(param_1 + 0x90) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b4;
  uVar16 = FUN_080239ea((int)lVar3,
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
  uVar16 = FUN_080239ea(iVar5,uVar14 * ((int)uVar11 >> 0x1f) +
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
  uVar16 = FUN_080239ea(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
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
  iVar5 = FUN_080239ea(uVar15,*(int *)(param_1 + 0x6c) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_20000014 * (uint)DAT_200001b4,
                       (int)(DAT_20000014 * (uint)DAT_200001b4) >> 0x1f,uVar15);
  *piVar1 = iVar5;
  *(int *)(param_1 + 0x9c) = *piVar1 - *(int *)(param_1 + 0xb4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x70) * 0xa000;
  uVar15 = (undefined4)lVar3;
  uVar15 = FUN_080239ea(uVar15,*(int *)(param_1 + 0x74) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                        DAT_20000014 * (uint)DAT_200001b4,
                        (int)(DAT_20000014 * (uint)DAT_200001b4) >> 0x1f,uVar15);
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(int *)(param_1 + 0xa8) = (*(int *)(param_1 + 0x80) * 0xa000) / (int)(uint)DAT_200001b4;
  *(int *)(param_1 + 0xac) = (*(int *)(param_1 + 0x84) * 0xa000) / (int)(uint)DAT_200001b4;
  return;
}



/* ENTRY 0x08008944 : FUN_08008944 */

void FUN_08008944(undefined4 param_1)

{
  DAT_20000014 = param_1;
  return;
}



/* ENTRY 0x0800894a : FUN_0800894a */

void FUN_0800894a(undefined4 param_1)

{
  DAT_20000018 = param_1;
  return;
}



/* ENTRY 0x08008960 : FUN_08008960 */

char FUN_08008960(char *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



/* ENTRY 0x08008974 : FUN_08008974 */

undefined4 FUN_08008974(char *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_20000035 == '\0') {
    cVar1 = *param_1;
    if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
      uVar3 = FUN_0800824c();
      *param_2 = *(undefined4 *)(param_1 + 0x14);
      uVar2 = FUN_08008960(*param_2);
      FUN_08008254(uVar3);
      *param_3 = 0;
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
    }
  }
  else {
    *param_3 = 0x11;
    uVar2 = 0;
  }
  return uVar2;
}



/* ENTRY 0x080089d6 : FUN_080089d6 */

void FUN_080089d6(char *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (DAT_20000035 == '\0') {
    cVar1 = *param_1;
    if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
      uVar2 = FUN_0800824c();
      *(undefined4 *)(param_1 + 0x14) = param_2;
      FUN_08008254(uVar2);
      *param_3 = 0;
    }
    else {
      *param_3 = 1;
    }
  }
  else {
    *param_3 = 0x12;
  }
  return;
}



/* ENTRY 0x08008a2a : FUN_08008a2a */

void FUN_08008a2a(int param_1,int *param_2)

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



/* ENTRY 0x08008a64 : FUN_08008a64 */

void FUN_08008a64(void)

{
  DAT_20000038 = (&DAT_0802719c)[(byte)(&DAT_2000003a)[(byte)(&DAT_0802719c)[DAT_20000039]]] +
                 (&DAT_0802719c)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x08008a7e : FUN_08008a7e */

void FUN_08008a7e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_08008a64();
    DAT_20000050 = (&DAT_200010b4)[DAT_20000038];
    if (DAT_20000038 != DAT_20000037) {
      *(int *)(DAT_20000050 + 0x34) = *(int *)(DAT_20000050 + 0x34) + 1;
      DAT_20000020 = DAT_20000020 + 1;
      FUN_0800827a();
    }
  }
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x08008ad6 : FUN_08008ad6 */

void FUN_08008ad6(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  *(undefined4 *)(DAT_20000048 + 0x1c) = 0;
  *(int **)(DAT_20000048 + 0x20) = param_1;
  iVar2 = *param_1;
  while (iVar2 != 0) {
    *(byte *)(iVar2 + 0xb + (uint)*(byte *)(DAT_20000048 + 0x30)) =
         *(byte *)(iVar2 + 0xb + (uint)*(byte *)(DAT_20000048 + 0x30)) |
         *(byte *)(DAT_20000048 + 0x31);
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | *(byte *)(DAT_20000048 + 0x32);
    param_1 = param_1 + 1;
    iVar2 = *param_1;
  }
  bVar1 = *(byte *)(DAT_20000048 + 0x30);
  (&DAT_2000003a)[bVar1] = (&DAT_2000003a)[bVar1] & ~*(byte *)(DAT_20000048 + 0x31);
  if ((&DAT_2000003a)[bVar1] == '\0') {
    DAT_20000039 = DAT_20000039 & ~*(byte *)(DAT_20000048 + 0x32);
  }
  return;
}



/* ENTRY 0x08008b5e : FUN_08008b5e */

short FUN_08008b5e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  
  *param_2 = 0;
  pcVar7 = (char *)*param_1;
  puVar9 = param_1;
  while (pcVar7 != (char *)0x0) {
    if ((*pcVar7 != '\x01') && (*pcVar7 != '\x02')) {
      *param_5 = 1;
      return 0;
    }
    puVar9 = puVar9 + 1;
    pcVar7 = (char *)*puVar9;
  }
  if (DAT_20000035 == '\0') {
    if (DAT_20000036 == '\0') {
      uVar5 = FUN_0800824c();
      bVar2 = false;
      sVar4 = 0;
      bVar3 = 0;
      pcVar7 = (char *)*param_1;
      puVar9 = param_1;
      while (pcVar7 != (char *)0x0) {
        if (*pcVar7 == '\x01') {
          if (*(int *)(pcVar7 + 4) == 0) {
            bVar3 = bVar3 | 2;
          }
          else {
            *param_3 = *(undefined4 *)(pcVar7 + 4);
            param_3 = param_3 + 1;
            pcVar7[4] = '\0';
            pcVar7[5] = '\0';
            pcVar7[6] = '\0';
            pcVar7[7] = '\0';
            *param_2 = pcVar7;
            param_2 = param_2 + 1;
            bVar2 = true;
            sVar4 = sVar4 + 1;
          }
        }
        else {
          if (*pcVar7 != '\x02') {
            FUN_08008254(uVar5);
            *param_2 = 0;
            *param_5 = 1;
            return sVar4;
          }
          iVar8 = *(int *)(pcVar7 + 4);
          if (*(short *)(iVar8 + 0x16) == 0) {
            bVar3 = bVar3 | 4;
          }
          else {
            puVar6 = *(undefined4 **)(iVar8 + 0x10);
            *(undefined4 **)(iVar8 + 0x10) = puVar6 + 1;
            *param_3 = *puVar6;
            param_3 = param_3 + 1;
            if (*(int *)(iVar8 + 0x10) == *(int *)(iVar8 + 8)) {
              *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar8 + 4);
            }
            *(short *)(iVar8 + 0x16) = *(short *)(iVar8 + 0x16) + -1;
            *param_2 = pcVar7;
            param_2 = param_2 + 1;
            bVar2 = true;
            sVar4 = sVar4 + 1;
          }
        }
        puVar9 = puVar9 + 1;
        pcVar7 = (char *)*puVar9;
      }
      if (bVar2) {
        *param_2 = 0;
        FUN_08008254(uVar5);
        *param_5 = 0;
      }
      else {
        *(byte *)(DAT_20000048 + 0x2c) = *(byte *)(DAT_20000048 + 0x2c) | bVar3 | 0x80;
        *(undefined1 *)(DAT_20000048 + 0x2d) = 0;
        *(undefined4 *)(DAT_20000048 + 0x28) = param_4;
        FUN_08008ad6(param_1);
        FUN_08008254(uVar5);
        FUN_08008a7e();
        uVar5 = FUN_0800824c();
        cVar1 = *(char *)(DAT_20000048 + 0x2d);
        if ((cVar1 == '\0') || ((cVar1 != '\x01' && (cVar1 == '\x02')))) {
          pcVar7 = *(char **)(DAT_20000048 + 0x1c);
          if (pcVar7 == (char *)0x0) {
            *(undefined1 *)(DAT_20000048 + 0x2d) = 1;
            FUN_08008a2a(DAT_20000048,param_1);
          }
          else {
            *param_2 = pcVar7;
            param_2 = param_2 + 1;
            *param_2 = 0;
            sVar4 = sVar4 + 1;
          }
        }
        else {
          FUN_08008a2a(DAT_20000048,param_1);
          pcVar7 = (char *)0x0;
        }
        cVar1 = *(char *)(DAT_20000048 + 0x2d);
        if (cVar1 == '\0') {
          if ((*pcVar7 != '\x01') && (*pcVar7 != '\x02')) {
            FUN_08008254(uVar5);
            *param_2 = 0;
            *param_5 = 1;
            return sVar4;
          }
          *param_3 = *(undefined4 *)(DAT_20000048 + 0x24);
          *param_5 = 0;
        }
        else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
          *param_3 = 0;
          *param_5 = 10;
        }
        else {
          *param_3 = 0;
          *param_5 = 0xe;
        }
        *(undefined1 *)(DAT_20000048 + 0x2c) = 0;
        *(undefined1 *)(DAT_20000048 + 0x2d) = 0;
        *(undefined4 *)(DAT_20000048 + 0x1c) = 0;
        *(undefined4 *)(DAT_20000048 + 0x20) = 0;
        *(undefined4 *)(DAT_20000048 + 0x24) = 0;
        FUN_08008254(uVar5);
      }
    }
    else {
      *param_5 = 0xd;
      sVar4 = 0;
    }
  }
  else {
    *param_5 = 2;
    sVar4 = 0;
  }
  return sVar4;
}



/* ENTRY 0x08008e00 : FUN_08008e00 */

void FUN_08008e00(int param_1)

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
    FUN_08008a7e();
  }
  return;
}



/* ENTRY 0x08008e64 : FUN_08008e64 */

undefined4 FUN_08008e64(uint param_1,int *param_2)

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
  iVar2 = (&DAT_200010b4)[param_1];
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



/* ENTRY 0x08008ee8 : FUN_08008ee8 */

void FUN_08008ee8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = param_3;
  local_14 = param_4;
  for (uVar2 = 0; uVar2 < 0x2c; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = FUN_08008e64(uVar2,&uStack_18);
    if (((iVar1 == 0) && (iVar1 = (&DAT_200010b4)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0xc) * 4;
      *(undefined4 *)(iVar1 + 0x44) = local_14;
    }
  }
  return;
}



/* ENTRY 0x08008f96 : FUN_08008f96 */

undefined4
FUN_08008f96(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5
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
    FUN_0800a070(puVar3);
    FUN_08009fcc(puVar3);
    uVar4 = FUN_0800824c();
    (&DAT_200010b4)[param_1] = puVar3;
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



/* ENTRY 0x080090a2 : FUN_080090a2 */

void FUN_080090a2(undefined4 *param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && ((param_3 & 2) != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}



/* ENTRY 0x080090bc : FUN_080090bc */

int FUN_080090bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  if (DAT_20000035 == '\0') {
    if ((&DAT_200010b4)[param_4] == 0) {
      (&DAT_200010b4)[param_4] = 1;
      FUN_08008254(uVar1);
      FUN_080090a2(param_6,param_7,param_9);
      uVar1 = FUN_08009fd4(param_1,param_2,param_3,param_9);
      iVar2 = FUN_08008f96(param_4,uVar1,param_6,param_5,param_7,param_8,param_9);
      if (iVar2 == 0) {
        if (DAT_20000040 == '\x01') {
          FUN_08008a7e();
        }
      }
      else {
        uVar1 = FUN_0800824c();
        (&DAT_200010b4)[param_4] = 0;
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



/* ENTRY 0x08009166 : FUN_08009166 */

void FUN_08009166(void)

{
  FUN_080090bc(&LAB_08008f1e_1,0,&DAT_20000eb0,0x2a,0xfffe,&DAT_20000cb4,0x80,0,3);
  return;
}



/* ENTRY 0x080091f8 : FUN_080091f8 */

void FUN_080091f8(void)

{
  FUN_080090bc(&LAB_08009190_1,0,&DAT_200010b0,0x2b,0xffff,&DAT_20000eb4,0x80,0,3);
  return;
}



/* ENTRY 0x08009222 : thunk_FUN_0800922e */

void thunk_FUN_0800922e(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x0800922e : FUN_0800922e */

void FUN_0800922e(undefined1 *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xffff) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* ENTRY 0x08009234 : FUN_08009234 */

void FUN_08009234(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200015bc,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200015bc)[uVar1 * 6] = &DAT_200015bc + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_200015bc)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_200015bc;
  return;
}



/* ENTRY 0x08009278 : FUN_08009278 */

void FUN_08009278(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200014f4,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200014f8)[uVar1 * 5] = &DAT_200014f4 + (uVar1 + 1) * 0x14;
  }
  (&DAT_200014f8)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_200014f4;
  return;
}



/* ENTRY 0x080092ba : FUN_080092ba */

void FUN_080092ba(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200009e4,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200009e4)[uVar1 * 0x18] = 0;
    (&DAT_200009e8)[uVar1 * 6] = &DAT_200009e4 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_200009f8)[uVar1 * 6] = &DAT_08009618;
  }
  (&DAT_200009e4)[uVar1 * 0x18] = 0;
  (&DAT_200009e8)[uVar1 * 6] = 0;
  (&DAT_200009f8)[uVar1 * 6] = &DAT_08009618;
  DAT_20000024 = &DAT_200009e4;
  return;
}



/* ENTRY 0x0800930e : FUN_0800930e */

void FUN_0800930e(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_20001164,0x390);
  thunk_FUN_0800922e(&DAT_200010b4,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001178)[uVar1 * 0x13] = &DAT_20001164 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001178)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001164;
  return;
}



/* ENTRY 0x0800936c : FUN_0800936c */

void FUN_0800936c(void)

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



/* ENTRY 0x08009398 : FUN_08009398 */

void FUN_08009398(void)

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



/* ENTRY 0x080093c4 : FUN_080093c4 */

void FUN_080093c4(void)

{
  FUN_08009fc8();
  FUN_08009398();
  FUN_0800936c();
  FUN_0800930e();
  FUN_080092ba();
  FUN_08009278();
  FUN_08009234();
  FUN_080091f8();
  FUN_08009166();
  FUN_08009fca();
  FUN_0800a0c4();
  return;
}



/* ENTRY 0x080093f4 : FUN_080093f4 */

void FUN_080093f4(void)

{
  if ((DAT_20000040 == '\x01') && (DAT_20000035 != -1)) {
    DAT_20000035 = DAT_20000035 + '\x01';
  }
  return;
}



/* ENTRY 0x08009410 : FUN_08009410 */

void FUN_08009410(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if (DAT_20000035 != '\0') {
      DAT_20000035 = DAT_20000035 + -1;
    }
    if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
      FUN_08008a64();
      DAT_20000050 = (&DAT_200010b4)[DAT_20000038];
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



/* ENTRY 0x08009480 : FUN_08009480 */

void FUN_08009480(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if ((DAT_20000035 == '\0') && (DAT_20000036 != -1)) {
      DAT_20000036 = DAT_20000036 + '\x01';
    }
    FUN_08008254(uVar1);
  }
  return;
}



/* ENTRY 0x080094b2 : FUN_080094b2 */

void FUN_080094b2(void)

{
  undefined4 uVar1;
  
  if (DAT_20000040 == '\x01') {
    uVar1 = FUN_0800824c();
    if (DAT_20000036 == '\0') {
      FUN_08008254(uVar1);
    }
    else {
      DAT_20000036 = DAT_20000036 + -1;
      if (DAT_20000036 == '\0') {
        if (DAT_20000035 == '\0') {
          FUN_08008254(uVar1);
          FUN_08008a7e();
        }
        else {
          FUN_08008254(uVar1);
        }
      }
      else {
        FUN_08008254(uVar1);
      }
    }
  }
  return;
}



/* ENTRY 0x08009504 : FUN_08009504 */

void FUN_08009504(void)

{
  if (DAT_20000040 == '\0') {
    FUN_08008a64();
    DAT_20000037 = DAT_20000038;
    DAT_20000048 = (&DAT_200010b4)[DAT_20000038];
    DAT_20000050 = DAT_20000048;
    FUN_0800825a();
  }
  return;
}



/* ENTRY 0x08009534 : FUN_08009534 */

void FUN_08009534(void)

{
  undefined4 uVar1;
  
  FUN_08008e00(2);
  uVar1 = FUN_0800824c();
  DAT_20000044 = 0;
  FUN_08008254(uVar1);
  FUN_08008e00(10);
  uVar1 = FUN_0800824c();
  DAT_2000002c = DAT_20000044;
  DAT_20000034 = 1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x08009572 : FUN_08009572 */

void FUN_08009572(void)

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



/* ENTRY 0x080096c6 : FUN_080096c6 */

void FUN_080096c6(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x30);
  *(byte *)(param_2 + 0xb + uVar1) = *(byte *)(param_2 + 0xb + uVar1) & ~*(byte *)(param_1 + 0x31);
  if (*(char *)(param_2 + 0xb + uVar1) == '\0') {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & ~*(byte *)(param_1 + 0x32);
  }
  return;
}



/* ENTRY 0x080096f0 : FUN_080096f0 */

uint FUN_080096f0(int param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)(&DAT_0802719c)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_0802719c)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_200010b4)[uVar3];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
  *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) & ~param_3;
  *(undefined1 *)(iVar1 + 0x2d) = param_4;
  if ((*(byte *)(iVar1 + 0x2c) & 8) == 0) {
    DAT_20000039 = *(byte *)(iVar1 + 0x32) | DAT_20000039;
    (&DAT_2000003a)[uVar2] = (&DAT_2000003a)[uVar2] | *(byte *)(iVar1 + 0x31);
  }
  FUN_080096c6(iVar1,param_1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_08008a2a(iVar1,*(undefined4 *)(iVar1 + 0x20));
    *(int *)(iVar1 + 0x1c) = param_1;
  }
  return uVar3;
}



/* ENTRY 0x08009770 : FUN_08009770 */

void FUN_08009770(int param_1)

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



/* ENTRY 0x080097e0 : FUN_080097e0 */

void FUN_080097e0(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(param_1 + 0xb + uVar1) = 0;
  }
  return;
}



/* ENTRY 0x08009810 : FUN_08009810 */

undefined4 FUN_08009810(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\x01') {
    uVar2 = FUN_0800824c();
    uVar1 = *(undefined4 *)(param_1 + 4);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    FUN_08008254(uVar2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009836 : FUN_08009836 */

undefined1 * FUN_08009836(undefined4 param_1)

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
      *(undefined **)(puVar1 + 0x14) = &DAT_08009618;
      FUN_080097e0(puVar1);
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* ENTRY 0x08009880 : FUN_08009880 */

int FUN_08009880(char *param_1,undefined4 param_2,undefined1 *param_3)

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
          FUN_08009770(param_1);
          FUN_08008254(uVar3);
          FUN_08008a7e();
          uVar3 = FUN_0800824c();
          cVar1 = *(char *)(DAT_20000048 + 0x2d);
          if (cVar1 == '\0') {
            iVar2 = *(int *)(DAT_20000048 + 0x24);
            *param_3 = 0;
          }
          else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
            FUN_080096c6(DAT_20000048,param_1);
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



/* ENTRY 0x0800997c : FUN_0800997c */

undefined4 FUN_0800997c(char *param_1,undefined4 param_2)

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
      FUN_080096f0(param_1,param_2,2,0);
      FUN_08008254(uVar1);
      FUN_08008a7e();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x080099cc : FUN_080099cc */

undefined4 * FUN_080099cc(undefined4 *param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = FUN_0800824c();
  puVar2 = DAT_2000005c;
  if (DAT_2000005c != (undefined4 *)0x0) {
    DAT_2000005c = (undefined4 *)DAT_2000005c[1];
  }
  FUN_08008254(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    *param_4 = 0x5a;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1;
    for (uVar4 = 0; uVar4 < param_2 - 1U; uVar4 = uVar4 + 1) {
      *puVar3 = (undefined4 *)((int)puVar3 + param_3);
      puVar3 = (undefined4 *)((int)puVar3 + param_3);
    }
    *puVar3 = 0;
    *puVar2 = param_1;
    puVar2[1] = param_1;
    puVar2[4] = param_2;
    puVar2[3] = param_2;
    puVar2[2] = param_3;
    *param_4 = 0;
  }
  return puVar2;
}



/* ENTRY 0x08009a42 : FUN_08009a42 */

undefined4 * FUN_08009a42(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0800824c();
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_08008254(uVar1);
    *param_2 = 0x5d;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = *puVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_08008254(uVar1);
    *param_2 = 0;
  }
  return puVar2;
}



/* ENTRY 0x08009aa6 : FUN_08009aa6 */

undefined4 FUN_08009aa6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0xc)) {
    *param_2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 **)(param_1 + 4) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    FUN_08008254(uVar1);
    uVar1 = 0;
  }
  else {
    FUN_08008254(uVar1);
    uVar1 = 0x5e;
  }
  return uVar1;
}



/* ENTRY 0x08009adc : FUN_08009adc */

undefined4 FUN_08009adc(char *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*param_1 == '\x02') {
    uVar2 = FUN_0800824c();
    iVar4 = *(int *)(param_1 + 4);
    if (*(short *)(iVar4 + 0x16) == 0) {
      *param_2 = 0x1f;
      uVar1 = 0;
    }
    else {
      puVar3 = *(undefined4 **)(iVar4 + 0x10);
      *(undefined4 **)(iVar4 + 0x10) = puVar3 + 1;
      uVar1 = *puVar3;
      *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + -1;
      if (*(int *)(iVar4 + 0x10) == *(int *)(iVar4 + 8)) {
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 4);
      }
      *param_2 = 0;
    }
    FUN_08008254(uVar2);
  }
  else {
    *param_2 = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08009b34 : FUN_08009b34 */

undefined1 * FUN_08009b34(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  if (DAT_20000035 == '\0') {
    uVar3 = FUN_0800824c();
    puVar2 = DAT_20000024;
    if (DAT_20000024 != (undefined1 *)0x0) {
      DAT_20000024 = *(undefined1 **)(DAT_20000024 + 4);
    }
    FUN_08008254(uVar3);
    if (puVar2 != (undefined1 *)0x0) {
      uVar3 = FUN_0800824c();
      piVar1 = DAT_20000060;
      if (DAT_20000060 == (int *)0x0) {
        *(undefined1 **)(puVar2 + 4) = DAT_20000024;
        DAT_20000024 = puVar2;
        FUN_08008254(uVar3);
        puVar2 = (undefined1 *)0x0;
      }
      else {
        DAT_20000060 = (int *)*DAT_20000060;
        FUN_08008254(uVar3);
        piVar1[1] = param_1;
        piVar1[2] = param_1 + param_2 * 4;
        piVar1[3] = param_1;
        piVar1[4] = param_1;
        *(short *)(piVar1 + 5) = (short)param_2;
        *(undefined2 *)((int)piVar1 + 0x16) = 0;
        *puVar2 = 2;
        *(undefined2 *)(puVar2 + 8) = 0;
        *(int **)(puVar2 + 4) = piVar1;
        *(undefined **)(puVar2 + 0x14) = &DAT_08009618;
        FUN_080097e0(puVar2);
      }
    }
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* ENTRY 0x08009bc6 : FUN_08009bc6 */

undefined4 FUN_08009bc6(char *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*param_1 == '\x02') {
    if (DAT_20000035 == '\0') {
      if (DAT_20000036 == '\0') {
        uVar3 = FUN_0800824c();
        iVar5 = *(int *)(param_1 + 4);
        if (*(short *)(iVar5 + 0x16) == 0) {
          *(byte *)(DAT_20000048 + 0x2c) = *(byte *)(DAT_20000048 + 0x2c) | 4;
          *(undefined1 *)(DAT_20000048 + 0x2d) = 0;
          *(undefined4 *)(DAT_20000048 + 0x28) = param_2;
          FUN_08009770(param_1);
          FUN_08008254(uVar3);
          FUN_08008a7e();
          uVar3 = FUN_0800824c();
          cVar1 = *(char *)(DAT_20000048 + 0x2d);
          if (cVar1 == '\0') {
            uVar2 = *(undefined4 *)(DAT_20000048 + 0x24);
            *param_3 = 0;
          }
          else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
            FUN_080096c6(DAT_20000048,param_1);
            uVar2 = 0;
            *param_3 = 10;
          }
          else {
            uVar2 = 0;
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
          puVar4 = *(undefined4 **)(iVar5 + 0x10);
          *(undefined4 **)(iVar5 + 0x10) = puVar4 + 1;
          uVar2 = *puVar4;
          *(short *)(iVar5 + 0x16) = *(short *)(iVar5 + 0x16) + -1;
          if (*(int *)(iVar5 + 0x10) == *(int *)(iVar5 + 8)) {
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 4);
          }
          FUN_08008254(uVar3);
          *param_3 = 0;
        }
      }
      else {
        *param_3 = 0xd;
        uVar2 = 0;
      }
    }
    else {
      *param_3 = 2;
      uVar2 = 0;
    }
  }
  else {
    *param_3 = 1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ENTRY 0x08009cdc : FUN_08009cdc */

undefined4 FUN_08009cdc(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 == '\x02') {
    uVar1 = FUN_0800824c();
    if (param_1[10] == '\0') {
      iVar3 = *(int *)(param_1 + 4);
      if (*(ushort *)(iVar3 + 0x16) < *(ushort *)(iVar3 + 0x14)) {
        puVar2 = *(undefined4 **)(iVar3 + 0xc);
        *(undefined4 **)(iVar3 + 0xc) = puVar2 + 1;
        *puVar2 = param_2;
        *(short *)(iVar3 + 0x16) = *(short *)(iVar3 + 0x16) + 1;
        if (*(int *)(iVar3 + 0xc) == *(int *)(iVar3 + 8)) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + 4);
        }
        FUN_08008254(uVar1);
        uVar1 = 0;
      }
      else {
        FUN_08008254(uVar1);
        uVar1 = 0x1e;
      }
    }
    else {
      FUN_080096f0(param_1,param_2,4,0);
      FUN_08008254(uVar1);
      FUN_08008a7e();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08009d4e : FUN_08009d4e */

undefined4 FUN_08009d4e(uint param_1,uint param_2)

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
  if ((&DAT_200010b4)[param_2] == 0) {
    local_2c = param_1;
    if (param_1 == 0xff) {
      local_2c = (uint)*(byte *)(DAT_20000048 + 0x2e);
    }
    iVar8 = (&DAT_200010b4)[local_2c];
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
      (&DAT_200010b4)[local_2c] = 0;
      (&DAT_200010b4)[param_2] = iVar8;
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
        FUN_08008a7e();
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



/* ENTRY 0x08009eda : FUN_08009eda */

undefined4 FUN_08009eda(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0800824c();
  iVar2 = DAT_20000048;
  if (param_1 != 0xff) {
    iVar2 = (&DAT_200010b4)[param_1];
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x48 + param_2 * 4);
  FUN_08008254(uVar1);
  *param_3 = 0;
  return uVar3;
}



/* ENTRY 0x08009f16 : FUN_08009f16 */

void FUN_08009f16(int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  iVar2 = DAT_20000048;
  if (param_1 != 0xff) {
    iVar2 = (&DAT_200010b4)[param_1];
  }
  *(undefined4 *)(iVar2 + 0x48 + param_2 * 4) = param_3;
  FUN_08008254(uVar1);
  *param_4 = 0;
  return;
}



/* ENTRY 0x08009f8c : FUN_08009f8c */

undefined4 FUN_08009f8c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0800824c();
  uVar1 = DAT_20000064;
  FUN_08008254(uVar2);
  return uVar1;
}



/* ENTRY 0x08009fa4 : FUN_08009fa4 */

void FUN_08009fa4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000064 = param_1;
  FUN_08008254(uVar1);
  return;
}



/* ENTRY 0x08009fc8 : FUN_08009fc8 */

void FUN_08009fc8(void)

{
  return;
}



/* ENTRY 0x08009fca : FUN_08009fca */

void FUN_08009fca(void)

{
  return;
}



/* ENTRY 0x08009fcc : FUN_08009fcc */

void FUN_08009fcc(void)

{
  return;
}



/* ENTRY 0x08009fd0 : FUN_08009fd0 */

void FUN_08009fd0(void)

{
  return;
}



/* ENTRY 0x08009fd2 : FUN_08009fd2 */

void FUN_08009fd2(void)

{
  return;
}



/* ENTRY 0x08009fd4 : FUN_08009fd4 */

undefined4 * FUN_08009fd4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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



/* ENTRY 0x0800a06e : FUN_0800a06e */

void FUN_0800a06e(void)

{
  return;
}



/* ENTRY 0x0800a070 : FUN_0800a070 */

void FUN_0800a070(void)

{
  return;
}



/* ENTRY 0x0800a074 : FUN_0800a074 */

void FUN_0800a074(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  FUN_08009572();
  FUN_08009410();
  return;
}



/* ENTRY 0x0800a096 : FUN_0800a096 */

void FUN_0800a096(void)

{
  uint uVar1;
  
  uVar1 = FUN_0800a794();
  DAT_e000e014 = uVar1 / 100 - 1;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 5;
  uVar1 = DAT_e000e010;
  DAT_e000e010 = uVar1 | 2;
  return;
}



/* ENTRY 0x0800a0c4 : FUN_0800a0c4 */

undefined * FUN_0800a0c4(void)

{
  return &DAT_0802730e;
}



/* ENTRY 0x0800a1dc : FUN_0800a1dc */

void FUN_0800a1dc(void)

{
  FUN_080244c8(0x8000000);
  FUN_080244b4(0x300);
  return;
}



/* ENTRY 0x0800a1f2 : FUN_0800a1f2 */

void FUN_0800a1f2(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_08009836(0);
  FUN_080100ec();
  do {
    FUN_0800fcd4();
    FUN_08010a94();
    FUN_08009880(DAT_20000068,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a21a : FUN_0800a21a */

void FUN_0800a21a(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000006c = FUN_08009836(0);
  do {
    FUN_0800f0f0();
    FUN_0801581e();
    FUN_08009880(DAT_2000006c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a23e : FUN_0800a23e */

void FUN_0800a23e(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000070 = FUN_08009836(0);
  do {
    FUN_0800cea8();
    FUN_0800f8ea();
    FUN_0801cc0a();
    FUN_080130be();
    FUN_0801500a();
    FUN_08009880(DAT_20000070,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a26e : FUN_0800a26e */

void FUN_0800a26e(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000074 = FUN_08009836(0);
  do {
    FUN_0800d2b0();
    FUN_080143ba();
    FUN_08009880(DAT_20000074,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a292 : FUN_0800a292 */

void FUN_0800a292(void)

{
  uint uVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000078 = FUN_08009836(0);
  do {
    FUN_08013b58();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_080143f4();
    }
    FUN_0801626c();
    FUN_08009880(DAT_20000078,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a2d6 : FUN_0800a2d6 */

void FUN_0800a2d6(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_2000007c = FUN_08009836(0);
  FUN_08022154();
  do {
    FUN_080227ca();
    FUN_0800e2b8();
    FUN_08009880(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a42e : FUN_0800a42e */

undefined4 FUN_0800a42e(void)

{
  FUN_0800d816();
  FUN_0800a1dc();
  FUN_080093c4();
  FUN_080090bc(&LAB_0800a2fe_1,0,&DAT_200018a8,2,2,&DAT_200016ac,0x80,0,3);
  FUN_08009fa4(0);
  FUN_08009504();
  return 0;
}



/* ENTRY 0x0800a46e : FUN_0800a46e */

void FUN_0800a46e(void)

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



/* ENTRY 0x0800a4e8 : FUN_0800a4e8 */

undefined8 FUN_0800a4e8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_08024514(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_08025020(&DAT_40000c00,&local_14);
  FUN_080250ce(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_08024444(&local_18);
  FUN_0802490c(&DAT_40000c00,1);
  FUN_08024d38(&DAT_40000c00,1);
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT13(local_15,CONCAT12(local_16,CONCAT11(local_17,
                                                  local_18)))));
}



/* ENTRY 0x0800a554 : FUN_0800a554 */

void FUN_0800a554(void)

{
  FUN_0800a4e8(4000);
  return;
}



/* ENTRY 0x0800a560 : FUN_0800a560 */

void FUN_0800a560(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40000c10;
  if ((uVar1 & 1) != 0) {
    FUN_080093f4();
    DAT_40000c10 = 0xfffe;
    if (DAT_20000068 != 0) {
      FUN_0800997c(DAT_20000068,1);
    }
    DAT_20000082 = DAT_20000082 + 1;
    if (0x27 < DAT_20000082) {
      DAT_20000082 = 0;
      if (DAT_20000070 != 0) {
        FUN_0800997c(DAT_20000070,1);
      }
      if (DAT_2000007c != 0) {
        FUN_0800997c(DAT_2000007c,1);
      }
    }
    DAT_20000086 = DAT_20000086 + 1;
    if ((0x13 < DAT_20000086) && (DAT_20000086 = 0, DAT_2000006c != 0)) {
      FUN_0800997c(DAT_2000006c,1);
    }
    DAT_20000088 = DAT_20000088 + 1;
    if ((3 < DAT_20000088) && (DAT_20000088 = 0, DAT_20000074 != 0)) {
      FUN_0800997c(DAT_20000074,1);
    }
    DAT_20000084 = DAT_20000084 + 1;
    if (99 < DAT_20000084) {
      DAT_20000084 = 0;
      if (DAT_20000078 != 0) {
        FUN_0800997c(DAT_20000078,1);
      }
    }
    FUN_08009410();
  }
  return;
}



/* ENTRY 0x0800a66c : FUN_0800a66c */

bool FUN_0800a66c(void)

{
  int local_18 [5];
  
  FUN_08024580(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a68a : FUN_0800a68a */

void FUN_0800a68a(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(4,1);
  local_8 = 0x10031000;
  FUN_080242ac(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0800a6b2 : FUN_0800a6b2 */

void FUN_0800a6b2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(8,1);
  local_8 = 0x28031000;
  FUN_080242ac(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800a6da : FUN_0800a6da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800a6da(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a66c();
  if (iVar1 != 0) {
    FUN_0800aa4a();
    iVar1 = FUN_0800ab18();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0800aa70();
      iVar1 = FUN_0800e010();
      if (iVar1 == 0) {
        DAT_20003280 = DAT_20003280 | 0x40;
      }
      FUN_0800fce8();
      FUN_08010d0a(1);
    }
    else {
      FUN_08010d0a(0);
    }
    iVar1 = FUN_0800af0a();
    if (iVar1 == 2) {
      FUN_0800af9c();
    }
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    if ((DAT_20000094 & 0x80000000) != 0) {
      DAT_20000094 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    DAT_20003110 = DAT_20000094;
    FUN_0800a68a();
    FUN_0800a6b2();
    FUN_0800e562();
    FUN_0800e270();
    FUN_0800ea48();
    FUN_08013238(0x1c200);
    FUN_0802082c();
    FUN_08014398();
    FUN_080244fc(0x40,1);
    FUN_0800a554();
    FUN_0801d0ac();
    return 1;
  }
  return 0;
}



/* ENTRY 0x0800a794 : FUN_0800a794 */

undefined4 FUN_0800a794(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800a7bc : FUN_0800a7bc */

undefined4 FUN_0800a7bc(int param_1,undefined4 param_2)

{
  FUN_08024230();
  FUN_0800b528((&DAT_200000a6)[param_1],param_2);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800a7da : FUN_0800a7da */

uint FUN_0800a7da(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4;
  FUN_0800b1da((&DAT_200000a6)[param_1],&local_10);
  return local_10 & 0xffff;
}



/* ENTRY 0x0800a7f0 : FUN_0800a7f0 */

undefined4 FUN_0800a7f0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = FUN_0800c160((int)(uint)uVar1 >> 8);
  uVar2 = FUN_0800c188((char)uVar1,uVar2);
  FUN_08024230();
  FUN_0800b528((&DAT_200000a6)[param_1],(uint)uVar1);
  for (uVar3 = 1; (int)uVar3 < param_2; uVar3 = uVar3 + 1 & 0xff) {
    uVar1 = param_3[uVar3];
    uVar2 = FUN_0800c188((int)(uint)uVar1 >> 8,uVar2);
    uVar2 = FUN_0800c188((char)uVar1,uVar2);
    FUN_0800b528((&DAT_200000a6)[param_1 + uVar3],(uint)uVar1);
  }
  FUN_0800b528((&DAT_200000a6)[param_1 + param_2],uVar2);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800a872 : FUN_0800a872 */

undefined4 FUN_0800a872(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0800c160((int)local_20 >> 8);
  uVar4 = FUN_0800c188((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_08024230();
  FUN_0800b528((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0800c188((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0800c188((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b528((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b528((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_08024114();
  FUN_0800b1da((&DAT_200000a6)[param_1],&local_20);
  uVar1 = FUN_0800c160((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0800c188((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800b1da((&DAT_200000a6)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0800c188((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0800c188((char)local_20,uVar1);
  }
  FUN_0800b1da((&DAT_200000a6)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ENTRY 0x0800a990 : FUN_0800a990 */

undefined4 FUN_0800a990(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800b1da((&DAT_200000a6)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0800c160((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0800c188((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800b1da((&DAT_200000a6)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0800c188((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0800c188((char)local_94[0],uVar1);
  }
  FUN_0800b1da((&DAT_200000a6)[param_1 + param_2],local_94);
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



/* ENTRY 0x0800aa4a : FUN_0800aa4a */

void FUN_0800aa4a(void)

{
  FUN_08024230();
  FUN_0800b41a();
  FUN_08024114();
  FUN_0800ba72();
  FUN_0800bfda();
  return;
}



/* ENTRY 0x0800aa70 : FUN_0800aa70 */

void FUN_0800aa70(void)

{
  DAT_200033b8 = 0;
  DAT_200033bc = 0;
  DAT_200033c0 = 0;
  DAT_200033c4 = 0;
  DAT_200033c8 = 0;
  DAT_200033cc = 0;
  DAT_200033d0 = 0;
  return;
}



/* ENTRY 0x0800aa9a : FUN_0800aa9a */

void FUN_0800aa9a(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  _local_18 = CONCAT22((undefined2)DAT_200033bc,(undefined2)DAT_200033b8);
  _local_14 = CONCAT22((short)((uint)((DAT_200033c4 - (DAT_200033c4 >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_200033c0);
  _local_10 = CONCAT22((short)((uint)((DAT_200033cc - (DAT_200033cc >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_200033c8 - (DAT_200033c8 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_200033d0);
  FUN_0800a872(0,8,&local_18);
  return;
}



/* ENTRY 0x0800ab18 : FUN_0800ab18 */

undefined4 FUN_0800ab18(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  iVar1 = FUN_0800a990(0,8,&local_18);
  if ((iVar1 == 0) || (local_c._2_2_ != 0x729)) {
    uVar2 = 0;
  }
  else {
    DAT_200033b8 = (int)(short)local_18;
    DAT_200033bc = (int)local_18._2_2_;
    DAT_200033c0 = (int)(short)local_14;
    DAT_200033c4 = (int)local_14._2_2_ << 1;
    DAT_200033c8 = (int)(short)local_10 << 1;
    DAT_200033cc = (int)local_10._2_2_ << 1;
    DAT_200033d0 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800ab98 : FUN_0800ab98 */

uint FUN_0800ab98(void)

{
  return (uint)DAT_20003282 << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0800abb8 : FUN_0800abb8 */

undefined4 FUN_0800abb8(short *param_1)

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



/* ENTRY 0x0800adf2 : FUN_0800adf2 */

undefined4 FUN_0800adf2(void)

{
  if (DAT_200031b2 < 0x65) {
    if (DAT_200031b2 == 0) {
      DAT_20000606 = 1;
    }
    else {
      DAT_20000606 = (undefined1)DAT_200031b2;
    }
  }
  else {
    DAT_20000606 = 100;
  }
  if (DAT_200031b4 < 0x65) {
    if (DAT_200031b4 == 0) {
      DAT_20000607 = 1;
    }
    else {
      DAT_20000607 = (undefined1)DAT_200031b4;
    }
  }
  else {
    DAT_20000607 = 100;
  }
  if (DAT_200031b6 < 0x65) {
    if (DAT_200031b6 == 0) {
      DAT_20000608 = 1;
    }
    else {
      DAT_20000608 = (undefined1)DAT_200031b6;
    }
  }
  else {
    DAT_20000608 = 100;
  }
  if (DAT_200031b8 < 0x65) {
    if (DAT_200031b8 == 0) {
      DAT_20000609 = 1;
    }
    else {
      DAT_20000609 = (undefined1)DAT_200031b8;
    }
  }
  else {
    DAT_20000609 = 100;
  }
  return 0;
}



/* ENTRY 0x0800aeb0 : FUN_0800aeb0 */

undefined4 FUN_0800aeb0(void)

{
  DAT_20003146 = 1;
  return 0;
}



/* ENTRY 0x0800aebc : FUN_0800aebc */

undefined4 FUN_0800aebc(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
}



/* ENTRY 0x0800aed4 : FUN_0800aed4 */

undefined1 FUN_0800aed4(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0800c0e8(&DAT_2000008c);
  DAT_2000009c = CONCAT22(DAT_2000009c._2_2_,uVar2);
  FUN_0800b73a(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  uVar1 = FUN_0800bca2(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  DAT_200000a0 = 0;
  return uVar1;
}



/* ENTRY 0x0800af0a : FUN_0800af0a */

undefined4 FUN_0800af0a(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 local_20 [16];
  short local_10;
  
  FUN_0800b782(local_20);
  local_20[0] = 0xf;
  sVar1 = FUN_0800c0e8(local_20);
  if (local_10 == sVar1) {
    FUN_08023afa(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800bcea(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0800c0e8(local_20);
    if (local_10 == sVar1) {
      FUN_08023afa(&DAT_2000008c,local_20,0x14);
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* ENTRY 0x0800af6e : FUN_0800af6e */

undefined4 FUN_0800af6e(uint param_1,uint param_2)

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
    FUN_0800aed4();
  }
  return 0;
}



/* ENTRY 0x0800af9c : FUN_0800af9c */

undefined4 FUN_0800af9c(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_20003110 = 0;
  DAT_20003118 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800aed4();
  return 0;
}



/* ENTRY 0x0800afd4 : FUN_0800afd4 */

undefined4 FUN_0800afd4(void)

{
  FUN_08024230();
  FUN_0802415c(&DAT_0803a800,0x28536692);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800afee : FUN_0800afee */

undefined4 FUN_0800afee(void)

{
  FUN_08024230();
  FUN_080240c0(&DAT_0803a800);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800b006 : FUN_0800b006 */

uint FUN_0800b006(uint param_1)

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



/* ENTRY 0x0800b036 : FUN_0800b036 */

uint FUN_0800b036(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_1 >> 0x1e;
    bVar1 = 1 < uVar4;
    if (bVar1) {
      uVar4 = uVar4 - 1;
    }
    uVar2 = (uint)bVar1;
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar3 = uVar2 * 2;
      uVar4 = uVar4 * 4 + ((param_1 & 0x3fffffff) >> 0x1c);
      uVar2 = uVar2 * 4 + 1;
      if (uVar2 <= uVar4) {
        uVar4 = uVar4 - uVar2;
        uVar3 = uVar3 + 1;
      }
      uVar2 = uVar3;
      param_1 = param_1 << 2;
    }
  }
  return uVar2;
}



/* ENTRY 0x0800b080 : FUN_0800b080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b080(int param_1)

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



/* ENTRY 0x0800b0d0 : FUN_0800b0d0 */

undefined4 FUN_0800b0d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800b080(1);
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



/* ENTRY 0x0800b12c : FUN_0800b12c */

int FUN_0800b12c(void)

{
  int iVar1;
  
  iVar1 = FUN_080240c0(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_08024124(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_080240c0(&DAT_0803b800);
  }
  return iVar1;
}



/* ENTRY 0x0800b15e : FUN_0800b15e */

int FUN_0800b15e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b080(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1)
    {
      if (*DAT_20000138 == -1) {
        iVar1 = FUN_08024124(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_08024124((int)DAT_20000138 + 2,param_1);
        DAT_20000138 = DAT_20000138 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}



/* ENTRY 0x0800b1da : FUN_0800b1da */

int FUN_0800b1da(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800b080(0);
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



/* ENTRY 0x0800b232 : FUN_0800b232 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800b232(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b12c();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b1da((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b15e((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08024124(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b1da((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b15e((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08024124(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800b12c();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_080240c0(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_080240c0(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800b12c();
    }
  }
  else {
    iVar1 = FUN_0800b12c();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800b41a : FUN_0800b41a */

undefined4 FUN_0800b41a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800b232();
  FUN_0800b0d0();
  return uVar1;
}



/* ENTRY 0x0800b42a : FUN_0800b42a */

int FUN_0800b42a(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800b080(0);
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
  iVar1 = FUN_08024124(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800b0d0();
    iVar1 = FUN_0800b15e(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_200000a6)[uVar2] != param_1) &&
            (iVar1 = FUN_0800b1da((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b15e((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_080240c0(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_08024124(puVar3,0);
      }
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b528 : FUN_0800b528 */

int FUN_0800b528(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b15e(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800b42a(param_1,param_2);
  }
  return iVar1;
}



/* ENTRY 0x0800b554 : FUN_0800b554 */

int FUN_0800b554(void)

{
  int iVar1;
  
  iVar1 = FUN_080240c0(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_08024124(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_080240c0(&DAT_0803e800);
  }
  return iVar1;
}



/* ENTRY 0x0800b586 : FUN_0800b586 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b586(int param_1)

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



/* ENTRY 0x0800b62a : FUN_0800b62a */

int FUN_0800b62a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800b586(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_08024124(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b62c : FUN_0800b62c */

int FUN_0800b62c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800b586(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_08024124(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b6ae : FUN_0800b6ae */

int FUN_0800b6ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800b586(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_08024124(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b62a(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_080240c0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08024124(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800b6b0 : FUN_0800b6b0 */

int FUN_0800b6b0(void)

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
  iVar1 = FUN_0800b586(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_08024124(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b62a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_080240c0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08024124(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800b73a : FUN_0800b73a */

int FUN_0800b73a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar2 = FUN_0800b62a(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b6ae(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_08024114();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b73c : FUN_0800b73c */

int FUN_0800b73c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar2 = FUN_0800b62a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b6ae(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_08024114();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b782 : FUN_0800b782 */

int FUN_0800b782(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800b586(0);
  if (iVar1 != 0xab) {
    if (DAT_2000013c < iVar1 * 0x800 + 0x803e018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_2000013c - 4) == -1) {
        FUN_08023a70(param_1,DAT_2000013c - 0x28,0x14);
      }
      else {
        FUN_08023a70(param_1,DAT_2000013c - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b7e2 : FUN_0800b7e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800b7e2(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b554();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803e800);
    }
    else {
      FUN_08023b5e(&local_2c,0x14);
      iVar1 = FUN_0800b782(&local_2c);
      if (iVar1 != 1) {
        if (DAT_2000013c < &DAT_0803e800) {
          for (DAT_2000013c = (short *)&DAT_0803e804;
              (DAT_2000013c < (short *)0x803efeb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b73a(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_08024230();
        FUN_080240b4(0x35);
      }
      iVar1 = FUN_08024124(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08023b5e(&local_2c,0x14);
      iVar1 = FUN_0800b782(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_2000013c) {
          for (DAT_2000013c = (short *)&DAT_0803e004;
              (DAT_2000013c < (short *)0x803e7eb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b73a(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_08024230();
        FUN_080240b4(0x35);
      }
      iVar1 = FUN_08024124(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800b554();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_080240c0(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_080240c0(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800b554();
    }
  }
  else {
    iVar1 = FUN_0800b554();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ba1a : FUN_0800ba1a */

int FUN_0800ba1a(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b586(0);
  if (iVar1 != 0xab) {
    for (DAT_2000013c = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_2000013c <= (short *)((iVar1 + 1) * 0x800 + 0x803dfeb) && (*DAT_2000013c != -1));
        DAT_2000013c = DAT_2000013c + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ba72 : FUN_0800ba72 */

undefined4 FUN_0800ba72(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar1 = FUN_0800ba1a();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800b7e2();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ba1a();
  }
  FUN_08024114();
  return uVar3;
}



/* ENTRY 0x0800babc : FUN_0800babc */

int FUN_0800babc(void)

{
  int iVar1;
  
  iVar1 = FUN_080240c0(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_08024124(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_080240c0(&DAT_0803f800);
  }
  return iVar1;
}



/* ENTRY 0x0800baee : FUN_0800baee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800baee(int param_1)

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



/* ENTRY 0x0800bb92 : FUN_0800bb92 */

int FUN_0800bb92(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800baee(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_08024124(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800bb94 : FUN_0800bb94 */

int FUN_0800bb94(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800baee(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_08024124(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800bc16 : FUN_0800bc16 */

int FUN_0800bc16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800baee(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_08024124(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800bb92(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_080240c0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08024124(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800bc18 : FUN_0800bc18 */

int FUN_0800bc18(void)

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
  iVar1 = FUN_0800baee(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_08024124(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800bb92(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_080240c0(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08024124(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800bca2 : FUN_0800bca2 */

int FUN_0800bca2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar2 = FUN_0800bb92(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bc16(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_08024114();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800bca4 : FUN_0800bca4 */

int FUN_0800bca4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar2 = FUN_0800bb92(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bc16(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_08024114();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800bcea : FUN_0800bcea */

int FUN_0800bcea(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800baee(0);
  if (iVar1 != 0xab) {
    if (DAT_20000140 < iVar1 * 0x800 + 0x803f018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_20000140 - 4) == -1) {
        FUN_08023a70(param_1,DAT_20000140 - 0x28,0x14);
      }
      else {
        FUN_08023a70(param_1,DAT_20000140 - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ENTRY 0x0800bd4a : FUN_0800bd4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800bd4a(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800babc();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803f800);
    }
    else {
      FUN_08023b5e(&local_2c,0x14);
      iVar1 = FUN_0800bcea(&local_2c);
      if (iVar1 != 1) {
        if (DAT_20000140 < &DAT_0803f800) {
          for (DAT_20000140 = (short *)&DAT_0803f804;
              (DAT_20000140 < (short *)0x803ffeb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800bca2(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_08024230();
        FUN_080240b4(0x35);
      }
      iVar1 = FUN_08024124(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08023b5e(&local_2c,0x14);
      iVar1 = FUN_0800bcea(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000140) {
          for (DAT_20000140 = (short *)&DAT_0803f004;
              (DAT_20000140 < (short *)0x803f7eb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800bca2(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_08024230();
        FUN_080240b4(0x35);
      }
      iVar1 = FUN_08024124(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080240c0(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_080240c0(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800babc();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_080240c0(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_080240c0(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08024124(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800babc();
    }
  }
  else {
    iVar1 = FUN_0800babc();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800bf82 : FUN_0800bf82 */

int FUN_0800bf82(void)

{
  int iVar1;
  
  iVar1 = FUN_0800baee(0);
  if (iVar1 != 0xab) {
    for (DAT_20000140 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000140 <= (short *)((iVar1 + 1) * 0x800 + 0x803efeb) && (*DAT_20000140 != -1));
        DAT_20000140 = DAT_20000140 + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800bfda : FUN_0800bfda */

undefined4 FUN_0800bfda(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_08024230();
  FUN_080240b4(0x35);
  iVar1 = FUN_0800bf82();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800bd4a();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800bf82();
  }
  FUN_08024114();
  return uVar3;
}



/* ENTRY 0x0800c024 : FUN_0800c024 */

void FUN_0800c024(byte *param_1)

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
  param_1[uVar2] = (byte)uVar1;
  param_1[uVar2 + 1] = (byte)(uVar1 >> 8);
  return;
}



/* ENTRY 0x0800c068 : FUN_0800c068 */

void FUN_0800c068(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = 0xffff;
  for (uVar2 = 1; uVar2 < *param_1 + 1; uVar2 = uVar2 + 1 & 0xff) {
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
  param_1[uVar2] = (byte)uVar1;
  param_1[uVar2 + 1] = (byte)(uVar1 >> 8);
  return;
}



/* ENTRY 0x0800c0ac : FUN_0800c0ac */

void FUN_0800c0ac(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = 0xffff;
  for (uVar2 = 1; uVar2 < *param_1 + 1; uVar2 = uVar2 + 1 & 0xff) {
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



/* ENTRY 0x0800c0e8 : FUN_0800c0e8 */

void FUN_0800c0e8(byte *param_1)

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



/* ENTRY 0x0800c124 : FUN_0800c124 */

void FUN_0800c124(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = 0xffff;
  for (uVar2 = 1; uVar2 < *param_1 + 1; uVar2 = uVar2 + 1 & 0xff) {
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



/* ENTRY 0x0800c160 : FUN_0800c160 */

void FUN_0800c160(uint param_1)

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



/* ENTRY 0x0800c188 : FUN_0800c188 */

uint FUN_0800c188(uint param_1,uint param_2)

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



/* ENTRY 0x0800c1b0 : FUN_0800c1b0 */

void FUN_0800c1b0(void)

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
      DAT_20003282 = DAT_20003282 | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_20003282 = DAT_20003282 & 0xfffd;
  }
  return;
}



/* ENTRY 0x0800c218 : FUN_0800c218 */

void FUN_0800c218(void)

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
      DAT_20003151 = 1;
    }
  }
  else {
    DAT_20000178 = 0;
    DAT_20003151 = 0;
  }
  diag_currentmeter =
       FUN_080238fc((int)((longlong)DAT_200005b8 * 0x1a),
                    (int)((ulonglong)((longlong)DAT_200005b8 * 0x1a) >> 0x20),3000,0);
  if ((diag_currentmeter & 0x80000000) != 0) {
    diag_currentmeter = 0;
  }
  diag_kilometer = diag_readoutmeter + diag_currentmeter;
  DAT_20003118 = diag_this_ws / 0xe10;
  if (DAT_20003118 < 0) {
    DAT_20003118 = -DAT_20003118;
  }
  diag_kiloWh = diag_this_ws / 0xe10 + DAT_20003110;
  if ((DAT_2000017c + 0x708 < DAT_200005b8) && (DAT_20000178 == 100)) {
    DAT_2000017c = DAT_200005b8;
    DAT_20000178 = 0;
    if ((DAT_20003146 == '\0') &&
       ((diag_AgeModeflg == '\0' && ((diag_kilometer & 0x80000000) == 0)))) {
      FUN_0800af6e(diag_kilometer,diag_kiloWh);
    }
  }
  return;
}



/* ENTRY 0x0800c314 : FUN_0800c314 */

void FUN_0800c314(void)

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
                  if (100 < DAT_200034c4) {
                    DAT_200034c4 = DAT_200034c4 + -0x32;
                  }
                  if (0x14 < DAT_200034cc) {
                    DAT_200034cc = DAT_200034cc + -1;
                  }
                }
                else {
                  if (DAT_2000061a < DAT_200034c4) {
                    DAT_200034c4 = DAT_200034c4 + -0x14;
                  }
                  if (0x96 < DAT_200034cc) {
                    DAT_200034cc = DAT_200034cc + -2;
                  }
                }
              }
              else {
                if (DAT_2000061a < DAT_200034c4) {
                  DAT_200034c4 = DAT_200034c4 + -0x14;
                }
                if (DAT_200034c4 < 500) {
                  DAT_200034c4 = DAT_200034c4 + 0x1e;
                }
                if (0x96 < DAT_200034cc) {
                  DAT_200034cc = DAT_200034cc + -2;
                }
                if (DAT_200034cc < 100) {
                  DAT_200034cc = DAT_200034cc + 2;
                }
              }
            }
            else {
              if (DAT_200034c4 < 500) {
                DAT_200034c4 = DAT_200034c4 + 0x1e;
              }
              if (0x96 < DAT_200034cc) {
                DAT_200034cc = DAT_200034cc + -2;
              }
              if (DAT_200034cc < 100) {
                DAT_200034cc = DAT_200034cc + 2;
              }
            }
          }
          else {
            if (DAT_2000061a + 0x1e < DAT_200034c4) {
              DAT_200034c4 = DAT_200034c4 + -0x14;
            }
            if (DAT_200034c4 < DAT_2000061a) {
              DAT_200034c4 = DAT_200034c4 + 0x1e;
            }
            if (0x96 < DAT_200034cc) {
              DAT_200034cc = DAT_200034cc + -2;
            }
            if (DAT_200034cc < 100) {
              DAT_200034cc = DAT_200034cc + 2;
            }
          }
        }
        else {
          if (DAT_200034c4 < DAT_2000061a) {
            DAT_200034c4 = DAT_200034c4 + 0x1e;
          }
          if (DAT_200034cc < 100) {
            DAT_200034cc = DAT_200034cc + 2;
          }
        }
      }
      else {
        if (DAT_2000061c + 0x1e < DAT_200034c4) {
          DAT_200034c4 = DAT_200034c4 + -0x14;
        }
        if (DAT_200034c4 < DAT_2000061c) {
          DAT_200034c4 = DAT_200034c4 + 0x1e;
        }
        if (DAT_200034cc < DAT_2000061e) {
          DAT_200034cc = DAT_200034cc + 2;
        }
      }
    }
    else {
      if (DAT_200034c4 < DAT_2000061c) {
        DAT_200034c4 = DAT_200034c4 + 0x1e;
      }
      if (DAT_2000061e + 2 < DAT_200034cc) {
        DAT_200034cc = DAT_200034cc + -2;
      }
      if (DAT_200034cc < DAT_2000061e) {
        DAT_200034cc = DAT_200034cc + 2;
      }
    }
  }
  else {
    if (DAT_200034c4 < DAT_20000616) {
      DAT_200034c4 = DAT_200034c4 + 0x1e;
    }
    if (DAT_200034cc < DAT_20000618) {
      DAT_200034cc = DAT_200034cc + 2;
    }
  }
  return;
}



/* ENTRY 0x0800c622 : FUN_0800c622 */

void FUN_0800c622(void)

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
  if (DAT_20000628 < diag_TotalVoltage) {
    bVar1 = 0x27 < DAT_20000154;
    DAT_20000154 = DAT_20000154 + 1;
    if ((bVar1) && (DAT_20000154 = 0, DAT_20000160 == 0)) {
      FUN_0800fd02(7);
      DAT_200030ce = DAT_200030ce | 0x4000;
      DAT_20000160 = 400;
      FUN_08022172(7);
    }
  }
  else {
    DAT_20000154 = 0;
    DAT_200030ce = DAT_200030ce & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000620) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002d0 == '\x04')))) {
    bVar1 = 199 < DAT_2000015b;
    DAT_2000015b = DAT_2000015b + 1;
    if ((bVar1) && (DAT_2000015b = '\0', DAT_20000168 == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800fd02(7);
      }
      DAT_200030ce = DAT_200030ce | 0x1000;
      DAT_20000168 = 400;
      FUN_08022172(6);
    }
  }
  else {
    DAT_2000015b = '\0';
    DAT_200030ce = DAT_200030ce & 0xefff;
  }
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if (((DAT_20000624 < iVar2) && (diag_IQCurrent < 0x4b0)) && (0x7b0c < diag_VectorVol)) {
    bVar1 = 0xa0 < DAT_20000156;
    DAT_20000156 = DAT_20000156 + 1;
    if (bVar1) {
      DAT_20000156 = 0;
      if ((DAT_20003146 == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_0800ea6e();
      }
      FUN_08015028(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030ce = DAT_200030ce | 4;
      FUN_08022172(8);
    }
  }
  else if (DAT_20000156 < 2) {
    DAT_200030ce = DAT_200030ce & 0xfffb;
  }
  else {
    DAT_20000156 = DAT_20000156 - 2;
  }
  iVar2 = diag_TotalCurrent;
  if (diag_TotalCurrent < 0) {
    iVar2 = -diag_TotalCurrent;
  }
  if ((DAT_2000062a < iVar2) || ((((byte)DAT_20003280 & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_20000158;
    DAT_20000158 = DAT_20000158 + 1;
    if ((bVar1) && (DAT_20000158 = 0, DAT_20000162 == 0)) {
      FUN_08015028(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030ce = DAT_200030ce | 8;
      DAT_20000162 = 300;
      FUN_08022172(9);
    }
  }
  else if (DAT_20000158 == 0) {
    DAT_200030ce = DAT_200030ce & 0xfff7;
  }
  else {
    DAT_20000158 = DAT_20000158 - 1;
  }
  if (diag_VectorVol < 28000) {
    DAT_2000015d = '\0';
    DAT_200030ce = DAT_200030ce & 0xfffd;
  }
  else {
    bVar1 = 10 < DAT_2000015d;
    DAT_2000015d = DAT_2000015d + 1;
    if ((bVar1) && (DAT_2000015d = '\0', DAT_20000166 == 0)) {
      FUN_08015028(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030ce = DAT_200030ce | 2;
      DAT_20000166 = 100;
      FUN_08022172(10);
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
        DAT_20003282 = DAT_20003282 | 0x10;
      }
      DAT_200030ce = DAT_200030ce | 1;
      DAT_20003280 = DAT_20003280 | 1;
      if (DAT_20000164 == 0) {
        FUN_08015028(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_08022172(5);
      }
    }
  }
  else {
    DAT_20003282 = DAT_20003282 & 0xffef;
    DAT_200030ce = DAT_200030ce & 0xfffe;
    DAT_20003280 = DAT_20003280 & 0xfffe;
    DAT_2000015a = '\0';
  }
  if (diag_MosTemp < DAT_2000062c) {
    DAT_2000015c = '\0';
    DAT_200030ce = DAT_200030ce & 0xffdf;
  }
  else {
    bVar1 = 10 < DAT_2000015c;
    DAT_2000015c = DAT_2000015c + 1;
    if ((bVar1) && (DAT_2000015c = '\0', DAT_2000016a == 0)) {
      if (DAT_200002d0 != '\x01') {
        FUN_0800fd02(7);
        FUN_08015028(0x24,(int)diag_MosTemp,0);
        DAT_200030ce = DAT_200030ce | 0x20;
      }
      DAT_2000016a = 200;
      FUN_08022172(0xb);
    }
  }
  if (((DAT_20003280 & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08015028(0x1a,0);
    DAT_2000016e = 200;
    FUN_08022172(0xd);
  }
  if (((DAT_20003280 & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08015028(0x23,0);
    DAT_2000016c = 200;
    FUN_08022172(0xc);
  }
  if (DAT_20003122 == '\0') {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002d0 != '\x01') {
        FUN_0800fd02(7);
      }
      DAT_20000170 = 200;
      FUN_08022172(0xe);
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
    FUN_08022172(0xf);
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



/* ENTRY 0x0800cbc2 : FUN_0800cbc2 */

void FUN_0800cbc2(void)

{
  int iVar1;
  uint uVar2;
  
  diag_TotalVoltage = DAT_20003294;
  diag_TotalVol_show = DAT_20003298;
  diag_VehicleSpeed = (DAT_20003288 + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)((diag_speedAcc * 9 + (diag_VehicleSpeed - DAT_20000150)) / 10);
  diag_VectorVol = DAT_200032a0;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0800e5c0((int)DAT_200034ba);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0800e5fa((int)DAT_200034b2);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0800e634((int)DAT_200034c0);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0800e64e((int)DAT_200032e4);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_200034bc >> 4));
  diag_lightad = DAT_200034b6;
  DAT_200030e2 = DAT_200034be;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  diag_IQCurrent = (iVar1 + diag_IQCurrent * 0x1d) / 0x1e;
  diag_HallState = DAT_200005a8;
  diag_TotalCurrent = diag_BusCurrent;
  diag_cpurate = DAT_20000028;
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((DAT_2000310c < iVar1) && (DAT_2000310c = diag_VehicleSpeed, diag_VehicleSpeed < 0)) {
    DAT_2000310c = -diag_VehicleSpeed;
  }
  diag_allwarnbit = CONCAT22(DAT_200030ce,DAT_20003280);
  iVar1 = 0;
  if ((DAT_200049b6 == '\0') && (DAT_20004b76 == '\0')) {
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      iVar1 = iVar1 + (uint)(ushort)(&DAT_20004afa)[uVar2] + (uint)(ushort)(&DAT_20004cba)[uVar2];
    }
    iVar1 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4) + -0xaaa;
    if (iVar1 < 0x51) {
      if (iVar1 < 1) {
        if (30000 < DAT_200032a8) {
          DAT_200032a8 = DAT_200032a8 + -10;
        }
      }
      else {
        iVar1 = (iVar1 * 41000) / 0x50;
        if (DAT_200032a8 < iVar1 + 0x7526) {
          DAT_200032a8 = DAT_200032a8 + 10;
        }
        if (iVar1 + 0x753a < DAT_200032a8) {
          DAT_200032a8 = DAT_200032a8 + -10;
        }
      }
    }
    else if (DAT_200032a8 < 71000) {
      DAT_200032a8 = DAT_200032a8 + 10;
    }
  }
  else if (DAT_200032a8 < 71000) {
    DAT_200032a8 = DAT_200032a8 + 10;
  }
  if ((DAT_200030ce & 1) != 0) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if ((6000 < iVar1) && (iVar1 + 1000 < DAT_200032ac)) {
      DAT_200032ac = iVar1 + 1000;
    }
    if (3000 < DAT_200032ac) {
      DAT_200032ac = DAT_200032ac + -0x32;
    }
  }
  return;
}



/* ENTRY 0x0800cea8 : FUN_0800cea8 */

void FUN_0800cea8(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_200030e4 = DAT_200030e4 + 1;
  if (DAT_200030e4 % 0x32 == 0x19) {
    DAT_20003100 = DAT_20003100 + 1;
    DAT_20003108 = DAT_20003104 + DAT_20003100;
  }
  if (DAT_20003153 != '\0') {
    DAT_20003153 = DAT_20003153 + -1;
  }
  FUN_0800e36c();
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
        FUN_0800e2b2();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000609 * 1000;
    FUN_08022172(1);
    diag_cartstep = '\x02';
    DAT_20003153 = -6;
    break;
  case '\x02':
    DAT_20003282 = DAT_20003282 | 0x45;
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
      iVar3 = FUN_08010bc0(diag_TotalVol_show);
      if (iVar3 == 1) {
        iVar3 = FUN_0800aa9a();
        if (iVar3 == 0) {
          FUN_0800e2b2(4);
        }
        else {
          FUN_0800e2ac(1);
          FUN_0800afee();
        }
      }
      else {
        FUN_0800e2b2(4);
      }
      diag_cartstep = '\x06';
    }
    break;
  case '\x06':
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 0x5dc) {
      uVar2 = DAT_20000146 + 1;
      bVar1 = DAT_20000146 < 0xb;
      DAT_20000146 = uVar2;
      if (((bVar1) || (iVar3 = DAT_42220134, iVar3 != 0)) ||
         (DAT_422101b0 = 0, diag_BatState != '\x01')) break;
      FUN_0800d2ba();
    }
    DAT_20000146 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_20000148 == 2) {
      DAT_20003150 = DAT_20003150 | 1;
      FUN_08022172(0xf0);
    }
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 0xdac) {
      iVar3 = DAT_42220134;
      if (iVar3 == 0) {
        uVar2 = DAT_20000148 + 1;
        bVar1 = 0x96 < DAT_20000148;
        DAT_20000148 = uVar2;
        if (bVar1) {
          DAT_422101b0 = 0;
          if (diag_BatState != '\x01') break;
          FUN_0800d2ba();
        }
        uVar2 = DAT_20000148 + 1;
        bVar1 = 5 < DAT_20000148;
        DAT_20000148 = uVar2;
        if (bVar1) {
          FUN_0800ea6e();
        }
      }
    }
    else {
      bVar1 = 300 < DAT_20000148;
      DAT_20000148 = DAT_20000148 + 1;
      if (bVar1) {
        DAT_20000148 = 0;
        diag_cartstep = '\x02';
      }
    }
  }
  iVar3 = FUN_0800e53a();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_0800e2b2(1);
      diag_cartstep = '\b';
      DAT_20003127 = 1;
    }
  }
  DAT_200030e8 = DAT_200030e8 + 1;
  if (((DAT_20003151 == '\0') || (diag_BatState == '\x01')) || ((DAT_2000311f & 0x70) != 0)) {
    DAT_200030e8 = 0;
  }
  if ((DAT_20003152 == '\x01') && (10 < DAT_200030e8)) {
    DAT_200030e8 = DAT_200030e8 - 5;
  }
  if (DAT_200030ec + 300 < DAT_200030e8) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_20003127 = 1;
        FUN_0800e2b2();
        diag_cartstep = '\b';
        DAT_200030e8 = 0;
      }
    }
  }
  else if ((DAT_200030ec < DAT_200030e8) && (DAT_200030e4 % 0x32 == 0x19)) {
    FUN_0800e2b2(1);
  }
  if (DAT_200030e4 % 0x96 == 0x91) {
    DAT_2000014c = '\0';
    DAT_2000014b = '\0';
    DAT_2000014a = '\0';
  }
  else if (DAT_2000014a == '\0') {
    DAT_2000014a = diag_HallState;
  }
  else if ((DAT_2000014b == '\0') && (diag_HallState != DAT_2000014a)) {
    DAT_2000014b = diag_HallState;
  }
  else if ((DAT_2000014c == '\0') &&
          ((diag_HallState != DAT_2000014a && (diag_HallState != DAT_2000014b)))) {
    DAT_200030e8 = 0;
    DAT_2000014c = '\0';
    DAT_2000014b = '\0';
    DAT_2000014a = '\0';
  }
  diag_LimitSpeed = (uint)DAT_20000609 * 1000;
  FUN_0800cbc2();
  FUN_0800c622();
  FUN_0800c314();
  FUN_0800c218();
  FUN_0800c1b0();
  if (DAT_200032d2 != '\0') {
    FUN_0800e2b2(DAT_200032d2);
    DAT_200032d2 = '\0';
  }
  if (DAT_200032d3 != '\0') {
    FUN_0800e2ac(DAT_200032d3);
    DAT_200032d3 = '\0';
  }
  return;
}



/* ENTRY 0x0800d2b0 : FUN_0800d2b0 */

void FUN_0800d2b0(void)

{
  DAT_200030e0 = DAT_200034b8;
  return;
}



/* ENTRY 0x0800d2ba : FUN_0800d2ba */

void FUN_0800d2ba(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d2e8 : FUN_0800d2e8 */

void FUN_0800d2e8(uint *param_1)

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



/* ENTRY 0x0800d3ba : FUN_0800d3ba */

void FUN_0800d3ba(undefined2 *param_1,int *param_2)

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
  FUN_0800d2e8(auStack_34);
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



/* ENTRY 0x0800d4a8 : FUN_0800d4a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d4a8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003158)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003158 = (undefined1)DAT_2000019c;
    DAT_20003159 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000315a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000315b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000315c = (undefined1)DAT_200001a0;
    DAT_2000315d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000315e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000315f = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003160 = (undefined1)DAT_200001a4;
    DAT_20003161 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003162 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003163 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003158)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0800d5f6 : FUN_0800d5f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d5f6(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003158)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003158 = (undefined1)DAT_2000019c;
    DAT_20003159 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000315a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000315b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000315c = (undefined1)DAT_200001a0;
    DAT_2000315d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000315e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000315f = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_20003160 = (undefined1)DAT_200001a4;
    DAT_20003161 = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_20003162 = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_20003163 = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003158)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0800d752 : FUN_0800d752 */

void FUN_0800d752(void)

{
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_0802415c(&DWORD_08008300,0);
  FUN_08024114();
  return;
}



/* ENTRY 0x0800d7a2 : FUN_0800d7a2 */

void FUN_0800d7a2(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0800d4a8();
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_0802415c(&DWORD_08008304,uVar1);
  dVar2 = FUN_0800d4a8();
  if (dVar2 == 0xffffffff) {
    FUN_0800d752();
    FUN_08024114();
    return;
  }
  FUN_08024114();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d816 : FUN_0800d816 */

/* WARNING: Removing unreachable block (ram,0x0800d860) */
/* WARNING: Removing unreachable block (ram,0x0800d8d2) */

void FUN_0800d816(void)

{
  FUN_0800d7a2();
  DAT_200001a8 = 1;
  return;
}



/* ENTRY 0x0800d8d8 : FUN_0800d8d8 */

void FUN_0800d8d8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_08005304 ^ 0x3156;
  uVar1 = FUN_0800d5f6();
  if (uVar1 == (uVar2 + 0x3692 & 0xffff)) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d92e : FUN_0800d92e */

undefined8 FUN_0800d92e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_200001a8 == '\0') {
    iVar2 = FUN_0800d5f6();
    if (iVar2 == 0x53b) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0800d990 : FUN_0800d990 */

void FUN_0800d990(void)

{
  DAT_20000194 = DAT_20000194 + ((ushort)DAT_08005304 ^ 0x3156) + 0x3bcd;
  DAT_20000198 = DAT_20000198 + DAT_20000194;
  return;
}



/* ENTRY 0x0800da34 : FUN_0800da34 */

void FUN_0800da34(void)

{
  short sVar1;
  
  sVar1 = FUN_0800d5f6();
  DAT_20000196 = sVar1 + DAT_20000196;
  sVar1 = FUN_0800d5f6();
  DAT_20000196 = sVar1 + DAT_20000196;
  DAT_20000198 = DAT_20000198 - DAT_20000196;
  return;
}



/* ENTRY 0x0800da60 : FUN_0800da60 */

void FUN_0800da60(void)

{
  int iVar1;
  
  iVar1 = FUN_08024100();
  if (iVar1 == 0) {
    FUN_08024230();
    FUN_080241a4(1);
    FUN_08024114();
  }
  return;
}



/* ENTRY 0x0800da78 : FUN_0800da78 */

void FUN_0800da78(void)

{
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_0802415c(&DWORD_0800830c,0xfee1b00f);
  FUN_08024114();
  return;
}



/* ENTRY 0x0800daa8 : FUN_0800daa8 */

undefined4 FUN_0800daa8(void)

{
  if (diag_BOOTVERSION < 0x1010603) {
    FUN_08024230();
    FUN_080240b4(0x35);
    FUN_0802415c(&DWORD_08008304,0);
    FUN_08024114();
  }
  return 0;
}



/* ENTRY 0x0800dad4 : FUN_0800dad4 */

undefined4 FUN_0800dad4(void)

{
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_0802415c(0x803d800,0x28635690);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800daf4 : FUN_0800daf4 */

undefined4 FUN_0800daf4(void)

{
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_080240c0(0x803d800);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800db12 : FUN_0800db12 */

/* WARNING: Removing unreachable block (ram,0x0800db7c) */
/* WARNING: Removing unreachable block (ram,0x0800db72) */
/* WARNING: Removing unreachable block (ram,0x0800db86) */
/* WARNING: Removing unreachable block (ram,0x0800db62) */

bool FUN_0800db12(void)

{
  uint uVar1;
  dword dVar2;
  
  dVar2 = 0;
  for (uVar1 = 1; uVar1 < 0x8218; uVar1 = uVar1 + 1) {
    dVar2 = dVar2 + (&diag_APPCRCCHECK)[uVar1];
  }
  return dVar2 == 0xa36f466d;
}



/* ENTRY 0x0800dbae : FUN_0800dbae */

/* WARNING: Removing unreachable block (ram,0x0800dc0a) */
/* WARNING: Removing unreachable block (ram,0x0800dc14) */
/* WARNING: Removing unreachable block (ram,0x0800dbfa) */

undefined4 FUN_0800dbae(void)

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
  dVar5 = 0x2085c;
  dVar4 = 0xa36f466d;
  uVar1 = 0xb7c17230;
  FUN_08024230();
  FUN_080240b4(0x35);
  FUN_0802415c(&diag_RUNOKFLG,0xb7c17230,extraout_r2,extraout_r3,uVar2,uVar1,uVar3,dVar4,dVar5);
  FUN_08024114();
  return 1;
}



/* ENTRY 0x0800dc78 : FUN_0800dc78 */

void FUN_0800dc78(void)

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
  
  FUN_08024544(0x1000);
  FUN_08024544(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_080242ac(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_080242ac(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_080242ac(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_080247e4(&DAT_40013000,&local_1c);
  FUN_080247bc(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800dd2e : FUN_0800dd2e */

void FUN_0800dd2e(void)

{
  ushort uVar1;
  
  FUN_080247bc(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_080247bc(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800dd5a : FUN_0800dd5a */

undefined1 FUN_0800dd5a(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_080247ce(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_080247ce(&DAT_40013000,1);
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



/* ENTRY 0x0800ddcc : FUN_0800ddcc */

undefined4 FUN_0800ddcc(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800dd5a(param_1);
  FUN_0800dd5a(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800ddf2 : FUN_0800ddf2 */

undefined4 FUN_0800ddf2(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800dd5a(param_1 | 0x80);
  uVar1 = FUN_0800dd5a(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800de1c : FUN_0800de1c */

undefined8 FUN_0800de1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0800dd5a(0x9d);
    for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800dd5a(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  else {
    DAT_40010814 = 0x10;
    FUN_0800dd5a(0xbb);
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      uVar1 = FUN_0800dd5a(0xff);
      *(undefined1 *)((int)local_20 + uVar2) = uVar1;
    }
    DAT_40010810 = 0x10;
  }
  FUN_08023a70(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800de90 : FUN_0800de90 */

void FUN_0800de90(undefined4 param_1)

{
  FUN_0800ddf2(param_1);
  return;
}



/* ENTRY 0x0800de9c : FUN_0800de9c */

void FUN_0800de9c(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_200001b0 == 'G') {
    bVar1 = FUN_0800de90(0x50);
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
    bVar1 = FUN_0800de90(0x4f);
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
  bVar1 = FUN_0800de90(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b2 = 0x2000;
      goto code_r0x0800dfb4;
    }
    if (uVar2 == 2) {
      DAT_200001b2 = 0x1000;
      goto code_r0x0800dfb4;
    }
    if (uVar2 == 3) {
      DAT_200001b2 = 0x800;
      goto code_r0x0800dfb4;
    }
  }
  DAT_200001b2 = 0x4000;
code_r0x0800dfb4:
  bVar1 = FUN_0800de90(0x1b);
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



/* ENTRY 0x0800e000 : FUN_0800e000 */

void FUN_0800e000(undefined4 param_1,undefined4 param_2)

{
  FUN_0800ddcc(param_1,param_2);
  return;
}



/* ENTRY 0x0800e010 : FUN_0800e010 */

undefined4 FUN_0800e010(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_200001b0 == 0) {
    FUN_0800dc78();
    DAT_200001b0 = FUN_0800de90(0x75);
    if (DAT_200001b0 == 0x47) {
      do {
        iVar2 = FUN_0800e000(0x11,1);
      } while (iVar2 == 0);
      FUN_08008e00(0xf);
      do {
        iVar2 = FUN_0800e000(0x4e,0xf);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x50,0x60);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x4f,0x40);
      } while (iVar2 == 0);
    }
    else {
      do {
        iVar2 = FUN_0800e000(0x6b,0x80);
      } while (iVar2 == 0);
      FUN_08008e00(0xf);
      do {
        iVar2 = FUN_0800e000(0x6b,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x19,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x1a,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x1c,0);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x1b,8);
      } while (iVar2 == 0);
      do {
        iVar2 = FUN_0800e000(0x38,1);
      } while (iVar2 == 0);
    }
    uVar3 = FUN_0800de90(0x75);
    if ((uVar3 == 0) || (uVar3 != DAT_200001b0)) {
      uVar1 = 0;
    }
    else {
      FUN_0800de9c();
      FUN_0800dd2e();
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800e114 : FUN_0800e114 */

void FUN_0800e114(undefined4 param_1)

{
  FUN_0800de1c(param_1);
  return;
}



/* ENTRY 0x0800e120 : FUN_0800e120 */

undefined4 FUN_0800e120(int *param_1)

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
  
  FUN_0800e114(local_2c);
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



/* ENTRY 0x0800e270 : FUN_0800e270 */

void FUN_0800e270(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(8,1);
  local_8 = 0x10030100;
  FUN_080242ac(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800e2ac : FUN_0800e2ac */

void FUN_0800e2ac(undefined1 param_1)

{
  DAT_200001c8 = param_1;
  return;
}



/* ENTRY 0x0800e2b2 : FUN_0800e2b2 */

void FUN_0800e2b2(undefined1 param_1)

{
  DAT_200001c9 = param_1;
  return;
}



/* ENTRY 0x0800e2b8 : FUN_0800e2b8 */

void FUN_0800e2b8(void)

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



/* ENTRY 0x0800e36c : FUN_0800e36c */

void FUN_0800e36c(void)

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



/* ENTRY 0x0800e4cc : FUN_0800e4cc */

undefined4 FUN_0800e4cc(int param_1)

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



/* ENTRY 0x0800e524 : FUN_0800e524 */

bool FUN_0800e524(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d0 == '\x02';
  if (bVar1) {
    DAT_200001d0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e53a : FUN_0800e53a */

bool FUN_0800e53a(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d6 != '\0';
  if (bVar1) {
    DAT_200001d6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e562 : FUN_0800e562 */

void FUN_0800e562(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(0x10,1);
  local_8 = 0x28032000;
  FUN_080242ac(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0800e5c0 : FUN_0800e5c0 */

int FUN_0800e5c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_08027310)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e5fa : FUN_0800e5fa */

int FUN_0800e5fa(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_08027310)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e634 : FUN_0800e634 */

int FUN_0800e634(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0800e64e : FUN_0800e64e */

int FUN_0800e64e(int param_1)

{
  if (DAT_200001b0 == 'G') {
    DAT_200001da = (short)(((param_1 * 100) / 0x84 + 0x9c4 + DAT_200001da * 9) / 10);
  }
  else {
    DAT_200001da = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001da * 9) / 10);
  }
  return (int)(DAT_200001da / 10);
}



/* ENTRY 0x0800e6c6 : FUN_0800e6c6 */

undefined4 FUN_0800e6c6(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_08024230();
  FUN_080240b4(0x34);
  DAT_200001dc = FUN_080240c0((&DAT_080274c0)[param_1]);
  DAT_2000326c = 0;
  DAT_20003270 = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_2000326c,*(uint *)(&DAT_20003164 + uVar1 * 4));
    DAT_2000326c = DAT_2000326c + *(uint *)(&DAT_20003164 + uVar1 * 4);
    DAT_20003270 = DAT_20003270 + (uint)bVar2;
    DAT_200001dc = FUN_0802415c((&DAT_080274c0)[param_1] + uVar1 * 4,
                                *(undefined4 *)(&DAT_20003164 + uVar1 * 4));
  }
  DAT_200001dc = FUN_0802415c((&DAT_080274c0)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003164 + uVar1 * 4));
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001dc = FUN_0802415c((&DAT_080274c0)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003164 + uVar1 * 4));
  FUN_080240b4(0x34);
  FUN_08024114();
  return 0;
}



/* ENTRY 0x0800e76e : FUN_0800e76e */

bool FUN_0800e76e(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_080274c0)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_080274c0)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x0800e7d0 : FUN_0800e7d0 */

undefined4 FUN_0800e7d0(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&DAT_20003164 + uVar1 * 4) =
         *(undefined4 *)((&DAT_080274c0)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x0800e7f2 : FUN_0800e7f2 */

undefined4 FUN_0800e7f2(void)

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
      (&DAT_200031c6)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_200031c6)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x0800e884 : FUN_0800e884 */

undefined4 FUN_0800e884(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e76e(1);
  if (iVar1 == 0) {
    FUN_0800e6c6(1);
    iVar1 = FUN_0800e76e(1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800e76e(0);
      if (iVar1 == 0) {
        FUN_0800e6c6(0);
        iVar1 = FUN_0800e76e(0);
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
      FUN_0800e6c6(0);
      iVar1 = FUN_0800e76e(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_0800e6c6(0);
    iVar1 = FUN_0800e76e(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0800e6c6(1);
      iVar1 = FUN_0800e76e(1);
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



/* ENTRY 0x0800e8fc : FUN_0800e8fc */

undefined4 FUN_0800e8fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e76e(0);
  if (iVar1 == 0) {
    iVar1 = FUN_0800e76e(1);
    if (iVar1 == 0) {
      FUN_0800e7f2();
      uVar2 = 0;
    }
    else {
      FUN_0800e7d0(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_0800e7d0(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800e934 : FUN_0800e934 */

void FUN_0800e934(void)

{
  FUN_08024230();
  FUN_080240c0(0x803a000);
  FUN_08024114();
  DAT_200001e0 = 0;
  DAT_200001de = 0;
  return;
}



/* ENTRY 0x0800e952 : FUN_0800e952 */

bool FUN_0800e952(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001de;
  if (DAT_200001de < 0x3ff) {
    DAT_200001e0 = DAT_200001e0 + param_1;
    FUN_08024230();
    FUN_08024124((uint)DAT_200001de * 2 + 0x803a000,param_1);
    FUN_08024114();
    DAT_200001de = DAT_200001de + 1;
  }
  else {
    FUN_08024230();
    FUN_080240c0(0x803a000);
    FUN_08024114();
    DAT_200001e0 = DAT_200001e0 + param_1 * 10;
    DAT_200031c4 = (undefined2)((uint)DAT_200001e0 >> 0x10);
    DAT_200031c2 = (undefined2)DAT_200001e0;
    DAT_200001de = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x0800e9d4 : FUN_0800e9d4 */

void FUN_0800e9d4(void)

{
  uint uVar1;
  
  DAT_200001e0 = CONCAT22(DAT_200031c4,DAT_200031c2);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001de = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001e0 = DAT_200001e0 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}



/* ENTRY 0x0800ea48 : FUN_0800ea48 */

void FUN_0800ea48(void)

{
  int iVar1;
  
  iVar1 = FUN_0800e010();
  if (iVar1 == 0) {
    DAT_20003280 = DAT_20003280 | 0x40;
  }
  FUN_08012d90();
  FUN_0801110e();
  DAT_200032a8 = 71000;
  DAT_200032ac = 71000;
  return;
}



/* ENTRY 0x0800ea6e : FUN_0800ea6e */

void FUN_0800ea6e(void)

{
  FUN_08010a82();
  FUN_080103d8();
  FUN_0800894a(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x0800ea88 : FUN_0800ea88 */

void FUN_0800ea88(void)

{
  int iVar1;
  
  iVar1 = DAT_20003288;
  if (DAT_20003288 < 0) {
    iVar1 = -DAT_20003288;
  }
  if ((iVar1 < 0x12d) || (DAT_200005bc == '\0')) {
    DAT_20000226 = 0;
  }
  else if (DAT_20000226 < 100) {
    DAT_20000226 = DAT_20000226 + 1;
  }
  if (((byte)DAT_20003282 & 0x10) == 0) {
    if (DAT_20000226 < 0x3c) {
      iVar1 = (int)DAT_20000314;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_20000214 < 800) {
          DAT_20000214 = DAT_20000214 + 1;
        }
        iVar1 = DAT_20003288;
        if (DAT_20003288 < 0) {
          iVar1 = -DAT_20003288;
        }
        if ((iVar1 < 500) && (DAT_20000214 < 600)) {
          DAT_20000214 = DAT_20000214 + 0x1e;
        }
      }
      else if (3 < DAT_20000214) {
        DAT_20000214 = DAT_20000214 + -3;
      }
      iVar1 = (int)DAT_20000314;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_PhcurrLimit_Vq_P < iVar1) {
        if (DAT_20000218 < 800) {
          DAT_20000218 = DAT_20000218 + 1;
        }
        iVar1 = DAT_20003288;
        if (DAT_20003288 < 0) {
          iVar1 = -DAT_20003288;
        }
        if ((iVar1 < 500) && (DAT_20000218 < 600)) {
          DAT_20000218 = DAT_20000218 + 0x1e;
        }
      }
      else if (3 < DAT_20000218) {
        DAT_20000218 = DAT_20000218 + -3;
      }
      if (10 < DAT_2000021c) {
        DAT_2000021c = DAT_2000021c + -10;
      }
    }
    else {
      if (3 < DAT_20000214) {
        DAT_20000214 = DAT_20000214 + -3;
      }
      if (3 < DAT_20000218) {
        DAT_20000218 = DAT_20000218 + -3;
      }
      if (DAT_2000021c < 0x708) {
        DAT_2000021c = DAT_2000021c + 10;
      }
    }
  }
  else {
    if (DAT_20000214 < 200) {
      DAT_20000214 = 200;
    }
    else if (DAT_20000214 < 600) {
      DAT_20000214 = DAT_20000214 + 6;
    }
    else if (DAT_20000214 < 800) {
      DAT_20000214 = DAT_20000214 + 2;
    }
    if (DAT_20000218 < 200) {
      DAT_20000218 = 200;
    }
    else if (DAT_20000218 < 600) {
      DAT_20000218 = DAT_20000218 + 6;
    }
    else if (DAT_20000218 < 800) {
      DAT_20000218 = DAT_20000218 + 2;
    }
    if (10 < DAT_2000021c) {
      DAT_2000021c = DAT_2000021c + -10;
    }
  }
  if (DAT_20000214 < 0xc9) {
    diag_BuscurLimit = diag_BuscurLimit_set;
    DAT_20003280 = DAT_20003280 & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_20000214)) / 900;
    DAT_20003280 = DAT_20003280 | 4;
  }
  if (DAT_20000218 < 0xc9) {
    iVar1 = DAT_2000021c + 900;
  }
  else {
    iVar1 = (0x44c - DAT_20000218) + DAT_2000021c;
  }
  diag_PhcurrLimit = (diag_PhcurrLimit_set * iVar1) / 900;
  iVar1 = (int)DAT_20000314;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (diag_buscurlmt_vq < iVar1) {
LAB_0800ed3a:
    if (DAT_200002d0 != '\x01') {
      if (DAT_20000220 < 100) {
        DAT_20000220 = DAT_20000220 + 1;
      }
      else {
        DAT_20003280 = DAT_20003280 | 2;
      }
      goto LAB_0800ed8c;
    }
  }
  else {
    iVar1 = (int)DAT_20000314;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_0800ed3a;
  }
  if (DAT_20000220 < 0xb) {
    DAT_20003280 = DAT_20003280 & 0xfffd;
  }
  else {
    DAT_20000220 = DAT_20000220 + -1;
  }
LAB_0800ed8c:
  if ((((DAT_20003280 & 6) == 0) || (((byte)DAT_20003282 & 0x10) == 0)) || (DAT_2000328c != '\0')) {
    DAT_20000222 = 0;
  }
  else if (DAT_20000222 < 0x4b0) {
    DAT_20000222 = DAT_20000222 + 1;
  }
  else {
    FUN_0800ea6e();
    DAT_20000222 = 0;
  }
  return;
}



/* ENTRY 0x0800edd4 : FUN_0800edd4 */

void FUN_0800edd4(void)

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
  
  iVar4 = DAT_20003288;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_20003294;
  iVar8 = 1;
  if (DAT_20003288 < 0) {
    iVar8 = -1;
  }
  if (DAT_20003294 < 0x2329) {
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
  if (DAT_200032a8 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032a8;
  }
  if (DAT_200032ac < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032ac;
  }
  if (DAT_200032a0 < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_200032a0 + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001fc * iVar2) / 400;
  }
  iVar6 = DAT_200001fc;
  if ((iVar2 <= DAT_200001fc) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_20003288;
  if (DAT_20003288 < 0) {
    iVar2 = -DAT_20003288;
  }
  if (diag_g_winespeed_lv + -0x3d4 < iVar2) {
    iVar2 = DAT_20003288;
    if (DAT_20003288 < 0) {
      iVar2 = -DAT_20003288;
    }
    iVar2 = ((iVar2 - (diag_g_winespeed_lv + -0x3d4)) * 100) / 1000;
    lVar1 = (longlong)DAT_200001fc * (longlong)iVar2 * (longlong)iVar2;
    local_48 = (undefined4)lVar1;
    uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_080239ea(local_48,uStack_44,90000,0);
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



/* ENTRY 0x0800f0f0 : FUN_0800f0f0 */

void FUN_0800f0f0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_20003278 = DAT_20003278 + 1;
  if (1 < diag_motionstep) {
    if ((DAT_200033b4 < DAT_200032b8 + -0x96) && (DAT_200033b4 < 0xa000)) {
      DAT_200033b4 = DAT_200033b4 + 100;
    }
    else if ((DAT_200032b8 + 0x96 < DAT_200033b4) && (-0xa000 < DAT_200033b4)) {
      DAT_200033b4 = DAT_200033b4 + -100;
    }
  }
  if (DAT_200032c4 != 0) {
    DAT_200032c4 = DAT_200032c4 + -1;
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002d0 = 7;
    iVar2 = FUN_08010304(0);
    if ((iVar2 == 1) && (DAT_20000371 == 1)) {
      diag_motionstep = DAT_20000371;
      DAT_200002d0 = DAT_20000371;
      if (DAT_20000328 != '\0') {
        DAT_20003280 = DAT_20003280 | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_20003282 & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_20003282 & 8) != 0) {
      diag_motionstep = 8;
    }
    if (diag_acce_z < -0x400) {
      DAT_200032c4 = 500;
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
        iVar2 = DAT_20003288;
        if (DAT_20003288 < 0) {
          iVar2 = -DAT_20003288;
        }
        if (((iVar2 < 2000) && (((byte)DAT_20003282 & 5) == 5)) &&
           (((DAT_20003282 & 10) == 0 &&
            ((((DAT_20003280 & 1) == 0 && (DAT_200002d0 == 1)) && (DAT_200032c4 == 0)))))) {
          DAT_200002d0 = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_200032b4 = 0;
          FUN_0800894a(3);
          diag_rollptag_auto = 0x28000;
          FUN_08022172(4);
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
      if (((iVar2 < 0x28000) && (((byte)DAT_20003282 & 4) == 4)) && ((DAT_20003282 & 8) == 0)) {
        if ((DAT_20003282 & 0x20) == 0) {
          if (DAT_200032b4 + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_200032b4 + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_200032b4;
            FUN_0800894a(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_08022172(0xe1);
        }
        break;
      }
    }
    FUN_08010a82();
    diag_motionstep = 2;
    FUN_080103d8();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08022172(0xe0);
    DAT_200032c4 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f4be;
        }
        if ((((byte)DAT_20003282 & 4) == 4) && ((DAT_20003282 & 8) == 0)) {
          FUN_0800edd4();
          iVar2 = DAT_20003288;
          if (DAT_20003288 < 0) {
            iVar2 = -DAT_20003288;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003288;
            if (DAT_20003288 < 0) {
              iVar2 = -DAT_20003288;
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
          else if (diag_rollptag_auto < DAT_200032bc) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_20003282 & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_08022172(0xe1);
          }
          break;
        }
      }
    }
LAB_0800f4be:
    DAT_200032d2 = 1;
    FUN_08010a82();
    diag_motionstep = 2;
    FUN_080103d8();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08022172(0xe0);
    DAT_200032c4 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f68e;
        }
        if ((((byte)DAT_20003282 & 4) == 4) && ((DAT_20003282 & 8) == 0)) {
          iVar2 = DAT_20003288;
          if (DAT_20003288 < 0) {
            iVar2 = -DAT_20003288;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003288;
            if (DAT_20003288 < 0) {
              iVar2 = -DAT_20003288;
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
          else if (diag_rollptag_auto < DAT_200032bc) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_20003288 < 0x2ee1) {
            if (DAT_20003288 < 1) {
              if (DAT_20003288 == 0) {
                DAT_200032b4 = -0x19000;
              }
              else if (DAT_20003288 < -11999) {
                DAT_200032b4 = -0x12000;
              }
              else {
                DAT_200032b4 = -0x19000;
              }
            }
            else {
              DAT_200032b4 = 0x19000;
            }
          }
          else {
            DAT_200032b4 = 0x12000;
          }
          if (DAT_200032b4 + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_200032b4 + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_200032b4;
          }
          break;
        }
      }
    }
LAB_0800f68e:
    DAT_200032d2 = 1;
    FUN_08010a82();
    diag_motionstep = 2;
    FUN_080103d8();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08022172(0xe0);
    DAT_200032c4 = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_200032d2 = 1;
      FUN_08008e00(0x3c);
      iVar2 = FUN_08010072();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_0800fec4();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800894a(0xf0);
    FUN_08008e00(0xa0);
    DAT_20003282 = DAT_20003282 & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_20000328 != '\0') {
      DAT_20003280 = DAT_20003280 | 0x10;
    }
    if (DAT_20000326 != '\0') {
      DAT_20003280 = DAT_20003280 | 0x20;
    }
    if (DAT_200005f4 == '\x01') {
      DAT_20003282 = DAT_20003282 | 1;
    }
    else {
      DAT_20003282 = DAT_20003282 & 0xfffe;
    }
  }
  if (DAT_20000710 == 0) {
    DAT_20003282 = DAT_20003282 | 0x40;
  }
  else if (DAT_2000328c == '\0') {
    DAT_20003282 = DAT_20003282 & 0xffbf;
  }
  FUN_0800ea88();
  uVar5 = CONCAT44(DAT_20003314,DAT_20003310);
  iVar2 = DAT_20003288;
  if (DAT_20003288 < 0) {
    iVar2 = -DAT_20003288;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_20003300;
    if (DAT_20003300 < 0) {
      iVar2 = -DAT_20003300;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003310 * 4999);
      uVar3 = DAT_20003300 * 5000;
      uVar5 = FUN_080239ea(uVar4 + uVar3,
                           DAT_20003314 * 4999 + (int)((ulonglong)DAT_20003310 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_2000331c,DAT_20003318);
    DAT_20003314 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003310 = (uint)uVar5;
    iVar2 = DAT_20003304;
    if (DAT_20003304 < 0) {
      iVar2 = -DAT_20003304;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003318 * 4999);
      uVar3 = DAT_20003304 * 5000;
      uVar6 = FUN_080239ea(uVar4 + uVar3,
                           DAT_2000331c * 4999 + (int)((ulonglong)DAT_20003318 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_20003314,DAT_20003310);
    }
    uVar7 = CONCAT44(DAT_20003324,DAT_20003320);
    DAT_2000331c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003318 = (uint)uVar6;
    DAT_20003314 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003310 = (uint)uVar5;
    iVar2 = DAT_20003308;
    if (DAT_20003308 < 0) {
      iVar2 = -DAT_20003308;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003320 * 4999);
      uVar3 = DAT_20003308 * 5000;
      uVar7 = FUN_080239ea(uVar4 + uVar3,
                           DAT_20003324 * 4999 + (int)((ulonglong)DAT_20003320 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_2000331c,DAT_20003318);
      uVar5 = CONCAT44(DAT_20003314,DAT_20003310);
    }
    DAT_20003324 = (int)((ulonglong)uVar7 >> 0x20);
    DAT_20003320 = (uint)uVar7;
    DAT_2000331c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003318 = (uint)uVar6;
    DAT_20003314 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003310 = (uint)uVar5;
    diag_vttest_0_ = FUN_080239ea(DAT_20003310,DAT_20003314,5000,0);
    diag_vttest_1_ = FUN_080239ea(DAT_20003318,DAT_2000331c,5000,0);
    diag_vttest_2_ = FUN_080239ea(DAT_20003320,DAT_20003324,5000,0);
  }
  return;
}



/* ENTRY 0x0800f8ea : FUN_0800f8ea */

void FUN_0800f8ea(void)

{
  int iVar1;
  int iVar2;
  
  DAT_20003288 = ((diag_HallRSP * 0x13240) / 15000 + DAT_20003288 * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_2000031c) / 10;
  DAT_20003294 = (DAT_20003294 * 9 + DAT_20000320) / 10;
  DAT_200032a0 = FUN_0800b006((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002d0;
  if ((2 < diag_motionstep) && (diag_motionstep < 8)) {
    DAT_20000204 = (diag_BusCurrent / 10) * (DAT_20003294 / 100) + DAT_20000204;
    DAT_20000208 = DAT_20000208 + 1;
    if (0x31 < DAT_20000208) {
      DAT_20000208 = 0;
      diag_this_ws = DAT_20000204 / 500 + diag_this_ws;
      DAT_20000204 = 0;
    }
  }
  iVar1 = DAT_20003288;
  if (DAT_20003288 < 0) {
    iVar1 = -DAT_20003288;
  }
  if (iVar1 < 3000) {
    if (DAT_2000328c != '\0') {
      DAT_2000328c = DAT_2000328c + -1;
    }
  }
  else {
    DAT_2000328c = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_20000200 == '\0') {
      iVar1 = DAT_20003298 - DAT_20003294;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_20003294)) {
        DAT_20000200 = '\x01';
      }
      else {
        DAT_20003298 = (DAT_20003298 * 0x13 + DAT_20003294) / 0x14;
      }
    }
    else if (DAT_20003298 + 1 < DAT_20003294) {
      DAT_20003298 = DAT_20003298 + 1;
    }
    else if (DAT_20003294 + 1 < DAT_20003298) {
      DAT_20003298 = DAT_20003298 + -1;
    }
    else {
      DAT_20003298 = DAT_20003294;
    }
  }
  DAT_2000020a = (short)((DAT_2000020a * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_2000020a / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_20003298 / 100);
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
    if ((0x32 < DAT_20000210) && (iVar2 < 10000)) {
      DAT_20000210 = DAT_20000210 + -1;
    }
  }
  else if (DAT_20000210 < 100) {
    DAT_20000210 = DAT_20000210 + 1;
  }
  iVar1 = (((diag_VqIqRateRT * diag_PhcurrLimit) / 100) * (int)DAT_20000210) / 100;
  if (iVar2 < 0x6d61) {
    if (iVar2 < -28000) {
      iVar2 = -28000;
    }
  }
  else {
    iVar2 = 28000;
  }
  if (DAT_2000020c + 400 < iVar2) {
    iVar2 = DAT_2000020c + 400;
  }
  else if (iVar2 < DAT_2000020c + -400) {
    iVar2 = DAT_2000020c + -400;
  }
  DAT_2000020c = iVar2;
  diag_RsSpeedVq = (diag_VqSpeedRateRT * diag_HallRSP) / 100;
  diag_RtIqVq = (diag_VqIqRateRT * diag_g_average_iq) / 100;
  diag_PhcurrLimit_Vq_P = DAT_2000020c + iVar1;
  diag_PhcurrLimit_Vq_N = -iVar1 - DAT_2000020c;
  if (DAT_20000325 != '\0') {
    DAT_20003280 = DAT_20003280 | 0x80;
  }
  return;
}



/* ENTRY 0x0800fcd4 : FUN_0800fcd4 */

void FUN_0800fcd4(void)

{
  if (diag_motionstep != '\b') {
    FUN_08010146();
    FUN_0801041c();
  }
  return;
}



/* ENTRY 0x0800fce8 : FUN_0800fce8 */

bool FUN_0800fce8(void)

{
  if (DAT_2000328c == '\0') {
    DAT_20003282 = DAT_20003282 | 8;
  }
  return DAT_2000328c == '\0';
}



/* ENTRY 0x0800fd02 : FUN_0800fd02 */

void FUN_0800fd02(int param_1)

{
  if (param_1 == 7) {
    DAT_20003282 = DAT_20003282 | 0x20;
  }
  return;
}



/* ENTRY 0x0800fd14 : FUN_0800fd14 */

void FUN_0800fd14(void)

{
  FUN_0800fd02(7);
  return;
}



/* ENTRY 0x0800fd1e : FUN_0800fd1e */

undefined4 FUN_0800fd1e(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0800fd26 : FUN_0800fd26 */

undefined4 FUN_0800fd26(void)

{
  return diag_pintch;
}



/* ENTRY 0x0800fd2e : FUN_0800fd2e */

undefined4 FUN_0800fd2e(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0800fd34 : FUN_0800fd34 */

void FUN_0800fd34(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_2000328c == '\0') {
    DAT_200032b8 = param_1;
  }
  return;
}



/* ENTRY 0x0800fd54 : FUN_0800fd54 */

void FUN_0800fd54(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_2000328c == '\0') {
    DAT_200032bc = param_1;
  }
  return;
}



/* ENTRY 0x0800fd76 : FUN_0800fd76 */

void FUN_0800fd76(undefined1 param_1)

{
  DAT_200032d1 = param_1;
  return;
}



/* ENTRY 0x0800fd7e : FUN_0800fd7e */

bool FUN_0800fd7e(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0800fde4 : FUN_0800fde4 */

void FUN_0800fde4(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800fe10 : FUN_0800fe10 */

uint FUN_0800fe10(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800fe6a : FUN_0800fe6a */

uint FUN_0800fe6a(undefined4 *param_1,int param_2)

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
  return (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000;
}



/* ENTRY 0x0800fec4 : FUN_0800fec4 */

undefined4 FUN_0800fec4(void)

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
  FUN_08023b5e(&local_64,0x1c);
  FUN_08008e00(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800e120(&local_64);
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
    FUN_08008e00(1);
  }
  DAT_200033b8 = FUN_080239ea(local_38,local_34,sVar1,0);
  DAT_200033bc = FUN_080239ea(local_40,local_3c,sVar1,0);
  DAT_200033c0 = FUN_080239ea(local_48,local_44,sVar1,0);
  DAT_200033c4 = FUN_080239ea(uVar3,iVar4,sVar1,0);
  DAT_200033c8 = FUN_080239ea(uVar5,iVar6,sVar1,0);
  DAT_200033cc = FUN_080239ea(local_30,local_2c,sVar1,0);
  iVar4 = DAT_200033b8;
  if (DAT_200033b8 < 0) {
    iVar4 = -DAT_200033b8;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_200033bc;
    if (DAT_200033bc < 0) {
      iVar4 = -DAT_200033bc;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_200033c0;
      if (DAT_200033c0 < 0) {
        iVar4 = -DAT_200033c0;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_200033c4;
        if (DAT_200033c4 < 0) {
          iVar4 = -DAT_200033c4;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_200033c8;
          if (DAT_200033c8 < 0) {
            iVar4 = -DAT_200033c8;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_200033cc;
            if (DAT_200033cc < 0) {
              iVar4 = -DAT_200033cc;
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



/* ENTRY 0x08010072 : FUN_08010072 */

undefined4 FUN_08010072(void)

{
  FUN_0800e120(&DAT_200032d8);
  return DAT_200032e0;
}



/* ENTRY 0x080100ec : FUN_080100ec */

void FUN_080100ec(void)

{
  FUN_0800fde4(&DAT_20000228);
  FUN_0800fde4(&DAT_20000234);
  FUN_0800fde4(&DAT_20000240);
  FUN_0800fde4(&DAT_2000024c);
  FUN_0800fde4(&DAT_20000258);
  FUN_0800fde4(&DAT_20000264);
  FUN_08008944(2000);
  FUN_0800894a(0xf0);
  DAT_200033b4 = 0;
  DAT_20003310 = 0;
  DAT_20003314 = 0;
  DAT_20003318 = 0;
  DAT_2000331c = 0;
  DAT_20003320 = 0;
  DAT_20003324 = 0;
  return;
}



/* ENTRY 0x08010146 : FUN_08010146 */

void FUN_08010146(void)

{
  int iVar1;
  
  FUN_0800e120(&DAT_200032d8);
  DAT_2000027c = DAT_200032d8 - DAT_200033b8;
  DAT_20000280 = DAT_200032dc - DAT_200033bc;
  DAT_20000284 = DAT_200032e0;
  DAT_20000270 = DAT_200032e8 - DAT_200033c4;
  DAT_20000274 = DAT_200032ec - DAT_200033c8;
  DAT_20000278 = DAT_200032f0 - DAT_200033cc;
  diag_acce_x = FUN_0800fe10(&DAT_20000228,DAT_2000027c);
  diag_acce_y = FUN_0800fe10(&DAT_20000234,DAT_20000280);
  diag_acce_z = FUN_0800fe10(&DAT_20000240,DAT_20000284);
  DAT_20003300 = FUN_0800fe10(&DAT_2000024c,-DAT_20000274);
  DAT_20003304 = FUN_0800fe10(&DAT_20000258,DAT_20000270);
  DAT_20003308 = FUN_0800fe10(&DAT_20000264,DAT_20000278);
  iVar1 = FUN_080239ea(DAT_20003310,DAT_20003314,5000,0);
  diag_gyro_x = DAT_20003300 - iVar1;
  iVar1 = FUN_080239ea(DAT_20003318,DAT_2000331c,5000,0);
  diag_gyro_y = DAT_20003304 - iVar1;
  iVar1 = FUN_080239ea(DAT_20003320,DAT_20003324,5000,0);
  diag_gyro_z = DAT_20003308 - iVar1;
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
  FUN_08008688(&DAT_20003300);
  return;
}



/* ENTRY 0x08010304 : FUN_08010304 */

undefined4 FUN_08010304(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    DAT_20000288 = '\0';
    DAT_20000289 = 0;
  }
  if (DAT_20000288 == '\0') {
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
        if (9 < DAT_20000289) {
          DAT_20000288 = 1;
          FUN_0800894a();
          return 1;
        }
        DAT_20000289 = DAT_20000289 + 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x080103c8 : FUN_080103c8 */

void FUN_080103c8(undefined4 param_1)

{
  FUN_08023a70(&diag_pidk_acc,param_1,0x10);
  return;
}



/* ENTRY 0x080103d8 : FUN_080103d8 */

void FUN_080103d8(void)

{
  DAT_20000294 = 0;
  DAT_20000298 = 0;
  DAT_2000029c = 0;
  diag_angleoffset_int = 0;
  DAT_200002a4 = 0;
  DAT_200002a8 = 0;
  DAT_200002b8 = 0;
  DAT_200002b4 = 0;
  FUN_0800fde4(&DAT_200002bc);
  diag_commbospeed = 0;
  DAT_200002b0 = 0;
  DAT_20000362 = 0;
  FUN_080112d0();
  DAT_2000028c = 0;
  return;
}



/* ENTRY 0x0801041c : FUN_0801041c */

void FUN_0801041c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((diag_motionstep == '\x03') || (diag_motionstep == '\x04')) || (diag_motionstep == '\a')) &&
     ((DAT_200002d0 == '\x03' || (DAT_200002d0 == '\x04')))) {
    DAT_20000298 = diag_pintch + diag_angleoffset_int;
    DAT_2000029c = diag_s_acc;
    iVar2 = DAT_20000298;
    if (0xf000 < DAT_20000298) {
      iVar2 = 0xf000;
    }
    if (iVar2 < -0xf000) {
      iVar2 = -0xf000;
    }
    iVar3 = DAT_20003298 / 100;
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
    if (DAT_200032d1 == '\x01') {
      if (((byte)DAT_20003282 & 0x40) == 0) {
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if ((iVar2 < DAT_200002c8) && (0x4b0 < DAT_200002c8)) {
          DAT_200002c8 = DAT_200002c8 + -100;
        }
        iVar2 = DAT_200002c8;
        if ((iVar1 <= DAT_200002c8) && (iVar2 = iVar1, iVar1 < -DAT_200002c8)) {
          iVar2 = -DAT_200002c8;
        }
        iVar1 = iVar2;
        if (1000 < DAT_20000290) {
          DAT_20000290 = DAT_20000290 + -0x32;
        }
      }
      else {
        if (DAT_200002c8 < 20000) {
          DAT_200002c8 = DAT_200002c8 + 100;
        }
        if (DAT_20000290 < 32000) {
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (iVar2 < 0x5000) {
            iVar2 = iVar4;
            if (iVar4 < 0) {
              iVar2 = -iVar4;
            }
            if (DAT_20000290 < iVar2) {
              DAT_20000290 = DAT_20000290 + 1;
            }
            else {
              DAT_20000290 = DAT_20000290 + 0x32;
            }
          }
        }
      }
    }
    else if (((byte)DAT_20003282 & 0x40) == 0) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = -iVar1;
      }
      if ((iVar2 < DAT_200002cc) && (0x4b0 < DAT_200002cc)) {
        DAT_200002cc = DAT_200002cc + -100;
      }
      iVar2 = DAT_200002cc;
      if ((iVar1 <= DAT_200002cc) && (iVar2 = iVar1, iVar1 < -DAT_200002cc)) {
        iVar2 = -DAT_200002cc;
      }
      iVar1 = iVar2;
      if (100 < DAT_20000290) {
        DAT_20000290 = DAT_20000290 + -0x32;
      }
    }
    else {
      if (DAT_200002cc < 20000) {
        DAT_200002cc = DAT_200002cc + 100;
      }
      if (DAT_20000290 < 32000) {
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 0x5000) {
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = -iVar4;
          }
          if (DAT_20000290 < iVar2) {
            DAT_20000290 = DAT_20000290 + 1;
          }
          else {
            DAT_20000290 = DAT_20000290 + 0x32;
          }
        }
      }
    }
    DAT_200002b0 = (DAT_200002b0 * 99 + iVar1 * 100) / 100;
    diag_commbospeed = DAT_200002b0 / 100;
    iVar2 = (int)((uint)diag_pidk_speed * DAT_200002b0) / 1000;
    if (DAT_200002a4 + 0x14 < iVar2) {
      iVar2 = DAT_200002a4 + 0x14;
    }
    if (iVar2 < DAT_200002a4 + -0x14) {
      iVar2 = DAT_200002a4 + -0x14;
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
    diag_g_dif_iq = (short)(((int)diag_g_dif_iq + (iVar1 - DAT_20000362) * 2) / 2);
    DAT_20000362 = (short)iVar1;
    DAT_200002a8 = diag_commbospeed;
    if (diag_commbospeed < 0) {
      DAT_200002a8 = -diag_commbospeed;
    }
    if (3000 < DAT_200002a8) {
      DAT_200002a8 = 3000;
    }
    iVar1 = (((int)(iVar1 * (uint)diag_k_pcurr) / 100) * (DAT_200002a8 + 2000)) / 5000;
    if (iVar1 < 0x2ee1) {
      if (iVar1 < -12000) {
        iVar1 = -12000;
      }
    }
    else {
      iVar1 = 12000;
    }
    DAT_20000294 = ((iVar4 + iVar2 + iVar1) * 0x72) / iVar3;
    if (DAT_2000028c < 32000) {
      DAT_2000028c = DAT_2000028c + 100;
    }
    if (DAT_2000028c < DAT_20000294) {
      DAT_20000294 = DAT_2000028c;
    }
    else if (DAT_20000294 < -DAT_2000028c) {
      DAT_20000294 = -DAT_2000028c;
    }
    if (DAT_20000290 < DAT_20000294) {
      DAT_20000294 = DAT_20000290;
    }
    else if (DAT_20000294 < -DAT_20000290) {
      DAT_20000294 = -DAT_20000290;
    }
    DAT_20000314 = (undefined2)DAT_20000294;
    DAT_200002a4 = iVar2;
  }
  return;
}



/* ENTRY 0x08010a20 : FUN_08010a20 */

void FUN_08010a20(void)

{
  FUN_08023b5e(&diag_IA,0x38);
  FUN_08010f50(1);
  return;
}



/* ENTRY 0x08010a32 : FUN_08010a32 */

void FUN_08010a32(void)

{
  FUN_08023b5e(&diag_IA,0x38);
  FUN_08010f50(2);
  return;
}



/* ENTRY 0x08010a44 : FUN_08010a44 */

void FUN_08010a44(void)

{
  FUN_08010f50(4);
  return;
}



/* ENTRY 0x08010a4e : FUN_08010a4e */

void FUN_08010a4e(void)

{
  FUN_08010f50(4);
  return;
}



/* ENTRY 0x08010a58 : FUN_08010a58 */

void FUN_08010a58(void)

{
  FUN_08010f50(5);
  return;
}



/* ENTRY 0x08010a62 : FUN_08010a62 */

void FUN_08010a62(void)

{
  FUN_08010f50(3);
  FUN_0801108c(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010a72 : FUN_08010a72 */

void FUN_08010a72(void)

{
  FUN_08010f50(7);
  FUN_0801108c(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010a82 : FUN_08010a82 */

void FUN_08010a82(void)

{
  DAT_200002d0 = 1;
  FUN_08010f50();
  FUN_080112d0();
  return;
}



/* ENTRY 0x08010a94 : FUN_08010a94 */

void FUN_08010a94(void)

{
  switch(DAT_200002d0) {
  case 1:
    FUN_08010a20();
    break;
  case 2:
    FUN_08010a32();
    break;
  case 3:
    FUN_08010a44();
    break;
  case 4:
    FUN_08010a4e();
    break;
  case 7:
    FUN_08010a62();
    break;
  case 8:
    FUN_08010a58();
    break;
  case 10:
    FUN_08010a72();
  }
  DAT_2000031c = (((((int)(uint)DAT_200034b4 >> 4) - (int)(short)DAT_20000374) * 0x26) / 10 +
                 DAT_2000031c * 0x31) / 0x32;
  DAT_200002d8 = (int)(((uint)DAT_200002e4 * ((int)(uint)DAT_200034b0 >> 2)) /
                       (uint)((int)(uint)DAT_200034bc >> 4) + DAT_200002dc * 9) / 10;
  DAT_20000320 = DAT_200002d8 + DAT_200002d4;
  if (15000 < DAT_20000320) {
    DAT_20000324 = 1;
  }
  DAT_200002dc = DAT_200002d8;
  if (((DAT_20000320 < 0x2198) && (diag_cartstep == '\x03')) && (DAT_200002e0 == '\0')) {
    FUN_08022172(0xef);
    DAT_200002e0 = '\x01';
  }
  return;
}



/* ENTRY 0x08010bc0 : FUN_08010bc0 */

int FUN_08010bc0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (DAT_08001340 == -0x3f11) {
    if (DAT_08001344 == 0x3f10) {
      iVar2 = 1;
    }
    else if ((DAT_08001344 == -1) && (DAT_08001342 == -1)) {
      iVar3 = 0;
      DAT_200002d0 = 10;
      FUN_08008e00(5);
      bVar1 = 0;
      while ((bVar1 < 0x14 && (DAT_200002e6 == '\0'))) {
        FUN_08008e00(1);
        bVar1 = bVar1 + 1;
      }
      if (DAT_200002e6 == '\0') {
        iVar2 = 0;
      }
      else {
        for (bVar1 = 0; bVar1 < 0x14; bVar1 = bVar1 + 1) {
          FUN_08008e00(1);
          iVar3 = iVar3 + DAT_20000320;
        }
        iVar3 = 0xd7e970 / (iVar3 / 0x14);
        if ((0x4f9 < iVar3) && (iVar3 < 0x614)) {
          DAT_200002e4 = (undefined2)iVar3;
          for (bVar1 = 0; bVar1 < 10; bVar1 = bVar1 + 1) {
            FUN_08008e00(1);
            if ((0x26de < DAT_20000320) && (DAT_20000320 < 0x2742)) {
              iVar2 = 1;
              break;
            }
          }
        }
        if (iVar2 == 0) {
          DAT_20000325 = 1;
          iVar2 = 0;
        }
        else {
          FUN_08024230();
          FUN_080240b4(0x34);
          FUN_08024124(&DAT_08001342,DAT_200002e4);
          FUN_08024124(&DAT_08001344,0x3f10);
          FUN_080240b4(0x34);
          FUN_08024114();
          iVar2 = 1;
        }
      }
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



/* ENTRY 0x08010d0a : FUN_08010d0a */

undefined4 FUN_08010d0a(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08001340 == -0x3f11) {
    if (((DAT_08001344 == 0x3f10) && (0x4f9 < DAT_08001342)) && (DAT_08001342 < 0x614)) {
      DAT_200002e4 = DAT_08001342;
      uVar1 = 1;
    }
    else if (param_1 == 0) {
      DAT_20000325 = 1;
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



/* ENTRY 0x08010d6a : FUN_08010d6a */

void FUN_08010d6a(void)

{
  uint uVar1;
  
  DAT_200002f0 = FUN_080128d2();
  DAT_200002f1 = DAT_200002f0;
  uVar1 = (uint)DAT_200002f0;
  if (uVar1 == DAT_200002ec) {
    if (DAT_200002ee < 0x15) {
      DAT_200002ee = DAT_200002ee + 1;
    }
    else if (uVar1 == 0) {
      DAT_200002f2 = '\x01';
      DAT_200002ed = 0;
      DAT_200002f8 = 0;
      DAT_200002f4 = 0;
    }
  }
  else if (((DAT_200002f2 != '\0') && (DAT_200002ee = 0, (uVar1 & 2) == 2)) &&
          ((DAT_200002ec & 2) == 0)) {
    if (DAT_200002ed < 0x20) {
      DAT_200002f4 = DAT_200002f4 << 1 | uVar1 & 1;
      DAT_200002ed = DAT_200002ed + 1;
    }
    else if (DAT_200002ed < 0x40) {
      DAT_200002f8 = DAT_200002f8 << 1 | uVar1 & 1;
      DAT_200002ed = DAT_200002ed + 1;
    }
    else {
      DAT_200002ed = 0;
      DAT_200002f2 = '\0';
      if ((DAT_200002f4 ^ DAT_200002f8) == 0xffffffff) {
        DAT_200002fc = DAT_200002f4;
        DAT_200002e8 = DAT_200002f4;
        if ((0x26de < DAT_200002f4) && (DAT_200002f4 < 0x2742)) {
          DAT_200002e6 = 1;
        }
      }
    }
  }
  DAT_200002ec = DAT_200002f0;
  return;
}



/* ENTRY 0x08010ec0 : FUN_08010ec0 */

void FUN_08010ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_08011c42();
    switch(DAT_20000300) {
    case 1:
    case 2:
      FUN_08011af0(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_08012d1a(&DAT_20003450);
      break;
    case 3:
      DAT_20000371 = FUN_08011954();
      break;
    case 4:
    case 5:
      FUN_080112ea(DAT_20000300);
      break;
    case 7:
      FUN_08010d6a();
    }
  }
  else {
    iVar2 = FUN_08023cd2(&DAT_40012400,0x140);
    if (iVar2 == 1) {
      FUN_08023c16(&DAT_40012400,1);
    }
  }
  return;
}



/* ENTRY 0x08010f50 : FUN_08010f50 */

undefined4 FUN_08010f50(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == DAT_20000301) {
    uVar1 = 1;
  }
  else {
    DAT_20000300 = (byte)param_1;
    DAT_20000301 = DAT_20000300;
    switch(param_1) {
    case 1:
    case 7:
      FUN_080248e6(&DAT_40012c00,0);
      FUN_080248e6(&DAT_40012c00,4,0);
      FUN_080248e6(&DAT_40012c00,8,0);
      FUN_080243e6(&DAT_40010c00,0x2000);
      FUN_080243e6(&DAT_40010c00,0x8000);
      FUN_080243e6(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_08024fa8(&DAT_40012c00,0,0x40);
      FUN_080248e6(&DAT_40012c00,0,1);
      FUN_08024fa8(&DAT_40012c00,4,0x40);
      FUN_080248e6(&DAT_40012c00,4,1);
      FUN_08024fa8(&DAT_40012c00,8,0x40);
      FUN_080248e6(&DAT_40012c00,8,1);
      FUN_080243ea(&DAT_40010c00,0x2000);
      FUN_080243ea(&DAT_40010c00,0x8000);
      FUN_080243ea(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_08024fa8(&DAT_40012c00,0,0x60);
      FUN_080248e6(&DAT_40012c00,0,1);
      FUN_08024fa8(&DAT_40012c00,4,0x60);
      FUN_080248e6(&DAT_40012c00,4,1);
      FUN_08024fa8(&DAT_40012c00,8,0x60);
      FUN_080248e6(&DAT_40012c00,8,1);
      FUN_080243ea(&DAT_40010c00,0x2000);
      FUN_080243ea(&DAT_40010c00,0x8000);
      FUN_080243ea(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0801108c : FUN_0801108c */

void FUN_0801108c(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x080110a8 : FUN_080110a8 */

void FUN_080110a8(void)

{
  FUN_080118f6();
  FUN_08011906();
  return;
}



/* ENTRY 0x080110b4 : FUN_080110b4 */

void FUN_080110b4(void)

{
  int iVar1;
  
  iVar1 = FUN_08024b64(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08024900(&DAT_40012c00,1);
    FUN_080110a8();
    FUN_08011c30();
  }
  return;
}



/* ENTRY 0x080110d2 : FUN_080110d2 */

void FUN_080110d2(void)

{
  int iVar1;
  
  iVar1 = FUN_08024b64(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08024900(&DAT_40012c00,0x80);
    DAT_20000326 = 1;
    FUN_08024d38(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x080110fe : FUN_080110fe */

void FUN_080110fe(void)

{
  FUN_08011c88();
  FUN_080115e4();
  FUN_0801166e();
  return;
}



/* ENTRY 0x0801110e : FUN_0801110e */

void FUN_0801110e(void)

{
  DAT_20003498 = 0x18000;
  DAT_2000349c = 0x8000;
  DAT_200034a0 = 0x10000;
  FUN_080124e8(&DAT_200034fc,&DAT_200034c4);
  FUN_080110fe();
  FUN_0802491e(&DAT_40012c00,1);
  FUN_0802490c(&DAT_40012c00,1);
  FUN_0801152c(1);
  FUN_08010f50(1);
  return;
}



/* ENTRY 0x08011154 : FUN_08011154 */

int FUN_08011154(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (diag_BuscurLimit * DAT_20000364) / 15000 + diag_BuscurLimit;
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
    if (1 < DAT_20000364) {
      DAT_20000364 = DAT_20000364 + -1;
    }
  }
  else if (param_1 < -iVar2) {
    if (1 < DAT_20000364) {
      DAT_20000364 = DAT_20000364 + -1;
    }
  }
  else if (DAT_20000364 < 5000) {
    DAT_20000364 = DAT_20000364 + 1;
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



/* ENTRY 0x080112d0 : FUN_080112d0 */

void FUN_080112d0(void)

{
  DAT_20000354 = 0;
  diag_g_average_iq = 0;
  diag_g_averX10_iq = 0;
  DAT_20000362 = 0;
  FUN_080124d4();
  return;
}



/* ENTRY 0x080112ea : FUN_080112ea */

undefined8 FUN_080112ea(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_08011af0(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_080125f0(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_08012d1a();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000350 = FUN_0801290e();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000350 = diag_halloffset;
  }
  else {
    DAT_20000350 = DAT_20000350 + 1;
  }
  FUN_080126c8(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000350);
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
    diag_VQ = FUN_08011154((int)DAT_20000316);
  }
  else {
    diag_VQ = FUN_08011154((int)DAT_20000314);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_080124d4();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_0801255c(DAT_20003454,diag_IDCurrent,&DAT_200034c4);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_08012724();
  FUN_08012780(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_08011e70(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x0801152c : FUN_0801152c */

void FUN_0801152c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_0802436c(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08024900(&DAT_40012c00,1);
    FUN_08024d38(&DAT_40012c00,1);
  }
  else {
    FUN_08024d38(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x08011588 : FUN_08011588 */

void FUN_08011588(void)

{
  DAT_200034a4 = 0;
  DAT_200034a8 = 0;
  DAT_200034ac = 0;
  FUN_08023dbe(&DAT_40012800,2);
  FUN_08023d5c(&DAT_40012800,3,1,2);
  FUN_08023d5c(&DAT_40012800,1,2);
  FUN_08023cb6(&DAT_40012800,0x1000);
  FUN_08023ca4(&DAT_40012800,1);
  FUN_08023cfe(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x080115e4 : FUN_080115e4 */

void FUN_080115e4(void)

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
  
  FUN_080244fc(1);
  FUN_08023f08(&DAT_40020008);
  FUN_0802409a(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_200034b0;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08024044(&DAT_40020008,&local_30);
  FUN_08023ef4(&DAT_40020008,1);
  return;
}



/* ENTRY 0x0801166e : FUN_0801166e */

void FUN_0801166e(void)

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
  
  FUN_080244e8(0x8000);
  FUN_08024544(0x15,1);
  FUN_08024544(0x600,1);
  FUN_080243ee(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_080242ac(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_080242ac(&DAT_40010800,&local_24);
  FUN_080243ee(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_080242ac(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_080242ac(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_080242ac(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_080242ac(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_080242ac(&DAT_40011000,&local_24);
  FUN_08023c40(&DAT_40012400);
  FUN_08023c40(&DAT_40012800);
  FUN_08023c1c(&DAT_40012400,1);
  FUN_08023c1c(&DAT_40012800,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  FUN_08023e86(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 1;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 9;
  FUN_08023d10(&DAT_40012400,&local_1c);
  FUN_08023dce(&DAT_40012400,9,1,7);
  FUN_08023dce(&DAT_40012400,8,2,7);
  FUN_08023dce(&DAT_40012400,0,3,7);
  FUN_08023dce(&DAT_40012400,0xf,4,7);
  FUN_08023dce(&DAT_40012400,0xb,5,7);
  FUN_08023dce(&DAT_40012400,0xd,6,7);
  FUN_08023dce(&DAT_40012400,0x11,7,7);
  FUN_08023dce(&DAT_40012400,10,8,7);
  FUN_08023dce(&DAT_40012400,0x10,9,7);
  FUN_08023e98(1);
  FUN_08023c2e(&DAT_40012400,1);
  FUN_08023e86(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 0;
  FUN_08023d10(&DAT_40012800,&local_1c);
  FUN_08023e60(&DAT_40012400);
  FUN_08023e60(&DAT_40012800);
  do {
    uVar1 = FUN_08023cee(&DAT_40012400);
    uVar2 = FUN_08023cee(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08023e7c(&DAT_40012400);
  FUN_08023e7c(&DAT_40012800);
  do {
    uVar1 = FUN_08023cc2(&DAT_40012400);
    uVar2 = FUN_08023cc2(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08011588();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_08024444(&local_20);
  FUN_08023e6a(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x080118f6 : FUN_080118f6 */

void FUN_080118f6(void)

{
  FUN_08023cb6(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x08011906 : FUN_08011906 */

void FUN_08011906(void)

{
  DAT_40012838 = DAT_2000036c + (DAT_20000368 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x08011954 : FUN_08011954 */

undefined4 FUN_08011954(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_20000378 == '\0') {
    DAT_200034a4 = 0;
    DAT_200034a8 = 0;
    DAT_200034ac = 0;
    DAT_20000368 = DAT_20003498;
    DAT_2000036c = DAT_2000349c;
    bVar1 = 0x500 < DAT_2000037c;
    DAT_2000037c = DAT_2000037c + 1;
    if (bVar1) {
      DAT_2000037c = 0;
      DAT_20000378 = '\x01';
    }
  }
  else if (DAT_20000378 == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_200034a4 = DAT_200034a4 + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_200034a8 = DAT_200034a8 + iVar2 * 2;
    DAT_20000374 = DAT_20000374 + ((int)(uint)DAT_200034b4 >> 4);
    DAT_2000037c = DAT_2000037c + 1;
    if (DAT_2000037c == 0x40) {
      DAT_200034a4 = (int)(DAT_200034a4 + ((uint)(DAT_200034a4 >> 0x1f) >> 0x1a)) >> 6;
      DAT_200034a8 = (int)(DAT_200034a8 + ((uint)(DAT_200034a8 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000378 = '\x02';
      DAT_20000379 = '\x01';
    }
  }
  if (DAT_20000379 == '\x01') {
    DAT_2000037c = 0;
    DAT_2000036c = DAT_200034a0;
    DAT_20000379 = '\x02';
  }
  else if (DAT_20000379 == '\x02') {
    iVar2 = DAT_40012840;
    DAT_200034ac = DAT_200034ac + iVar2 * 2;
    DAT_20000374 = DAT_20000374 + ((int)(uint)DAT_200034b4 >> 4);
    DAT_2000037c = DAT_2000037c + 1;
    if (DAT_2000037c == 0x40) {
      DAT_200034ac = (int)(DAT_200034ac + ((uint)(DAT_200034ac >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000374 = DAT_20000374 >> 7;
      DAT_20000379 = '\x03';
    }
  }
  else if (DAT_20000379 == '\x03') {
    DAT_20000380 = '\x01';
  }
  if (DAT_20000380 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((((0x8f9f < DAT_200034a4) || (0x8f9f < DAT_200034a8)) || (0x8f9f < DAT_200034ac)) ||
       (((DAT_200034a4 < 0x705f || (DAT_200034a8 < 0x705f)) || (DAT_200034ac < 0x705f)))) {
      DAT_20000328 = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x08011af0 : FUN_08011af0 */

void FUN_08011af0(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  switch(DAT_20000370) {
  case 1:
  case 6:
    iVar1 = DAT_4001283c;
    local_8 = DAT_200034a8 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_200034ac) - local_8;
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
    local_c = DAT_200034a4 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_200034ac) - local_c;
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
    local_c = DAT_200034a4 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_200034a8 + iVar1 * -2;
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



/* ENTRY 0x08011c30 : FUN_08011c30 */

void FUN_08011c30(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x08011c42 : FUN_08011c42 */

void FUN_08011c42(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x08011c88 : FUN_08011c88 */

void FUN_08011c88(void)

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
  
  FUN_08024544(0xc,1);
  FUN_080243ee(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_080242ac(&DAT_40010800,&local_38);
  FUN_080243ee(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_080242ac(&DAT_40010c00,&local_38);
  FUN_080243e6(&DAT_40010c00,0x2000);
  FUN_080243e6(&DAT_40010c00,0x8000);
  FUN_080243e6(&DAT_40010c00,0x4000);
  FUN_0802435a(&DAT_40010800,0x700);
  FUN_0802435a(&DAT_40010c00,0xe000);
  FUN_08024544(0x800);
  FUN_0802494c(&DAT_40012c00);
  FUN_080250bc(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_08025020(&DAT_40012c00,&local_10);
  FUN_08024f70(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08024d52(&DAT_40012c00,&local_20);
  FUN_08024de2(&DAT_40012c00,&local_20);
  FUN_08024e72(&DAT_40012c00,&local_20);
  FUN_08024f70(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_08024efe(&DAT_40012c00,&local_20);
  FUN_08024dd6(&DAT_40012c00,8);
  FUN_08024e64(&DAT_40012c00,8);
  FUN_08024ef2(&DAT_40012c00,8);
  FUN_08024f62(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_080248c2(&DAT_40012c00,&local_30);
  FUN_08024ffc(&DAT_40012c00,0x20);
  FUN_08024906(&DAT_40012c00,0x80);
  FUN_08024d38(&DAT_40012c00,0x80,1);
  FUN_08024b5c(&DAT_40012c00,1);
  FUN_08024900(&DAT_40012c00,1);
  FUN_08024d38(&DAT_40012c00,1,0);
  FUN_08024d38(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_08024444(&local_34);
  return;
}



/* ENTRY 0x08011e70 : FUN_08011e70 */

void FUN_08011e70(int param_1,int param_2)

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
      DAT_20000370 = 5;
    }
    else if (iVar3 < 1) {
      DAT_20000370 = 4;
    }
    else {
      DAT_20000370 = 3;
    }
  }
  else if (iVar2 < 0) {
    if (iVar3 < 1) {
      DAT_20000370 = 6;
    }
    else {
      DAT_20000370 = 1;
    }
  }
  else {
    DAT_20000370 = 2;
  }
  DAT_20000381 = 0;
  bVar5 = false;
  if (DAT_20000370 < 7) {
    uVar8 = iVar2 >> 0x1f;
    uVar7 = iVar3 >> 0x1f;
    uVar12 = iVar1 >> 0x1f;
    switch(DAT_20000370) {
    case 0:
      goto switchD_08011f32_caseD_0;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_2000349c;
      DAT_2000036c = DAT_200034a0;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_20003498;
      DAT_2000036c = DAT_200034a0;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_20003498;
      DAT_2000036c = DAT_200034a0;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_20003498;
      DAT_2000036c = DAT_2000349c;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_20003498;
      DAT_2000036c = DAT_2000349c;
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
            DAT_20000381 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000368 = DAT_2000349c;
      DAT_2000036c = DAT_200034a0;
    }
  }
  else {
switchD_08011f32_caseD_0:
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



/* ENTRY 0x080124d4 : FUN_080124d4 */

void FUN_080124d4(void)

{
  DAT_20003524 = 0;
  DAT_200034ec = 0;
  DAT_20003528 = 0;
  DAT_200034f0 = 0;
  return;
}



/* ENTRY 0x080124e8 : FUN_080124e8 */

void FUN_080124e8(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x0801255c : FUN_0801255c */

int FUN_0801255c(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x080125f0 : FUN_080125f0 */

void FUN_080125f0(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x08012624 : FUN_08012624 */

void FUN_08012624(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_0802758c + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_0802758c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_0802758c + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_0802758c + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_0802758c + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_0802758c + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_0802758c + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_0802758c + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x080126c8 : FUN_080126c8 */

void FUN_080126c8(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_08012624(&local_2c,param_4);
  DAT_20000384 = local_2c;
  DAT_20000388 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x08012724 : FUN_08012724 */

void FUN_08012724(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08027508 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08027508 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x08012780 : FUN_08012780 */

void FUN_08012780(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_20000384 * param_3;
  iVar1 = param_2 * DAT_20000388;
  *param_1 = (param_3 * DAT_20000388 + DAT_20000384 * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x080127dc : FUN_080127dc */

void FUN_080127dc(void)

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
  
  FUN_08024544(0x10,1);
  FUN_08024514(2,1);
  FUN_0802436c(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_080242ac(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_080242ac(&DAT_40011000,&local_20);
  FUN_0802494c(&DAT_40000400);
  FUN_080250bc(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_08025020(&DAT_40000400,&local_10);
  FUN_08024d28(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08024b7c(&DAT_40000400,&local_1c);
  FUN_08024f84(&DAT_40000400,400,1);
  FUN_08024d48(&DAT_40000400);
  FUN_08024f8a(&DAT_40000400,1);
  FUN_08024f9c(&DAT_40000400,0x40);
  FUN_0802500c(&DAT_40000400,4);
  FUN_080250e0(&DAT_40000400,1);
  FUN_08024900(&DAT_40000400,0x1e5f);
  FUN_0802501c(&DAT_40000400,0);
  FUN_0802490c(&DAT_40000400,1);
  return;
}



/* ENTRY 0x080128d2 : FUN_080128d2 */

byte FUN_080128d2(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_080243d8(&DAT_40011000,0x40);
  cVar2 = FUN_080243d8(&DAT_40011000,0x80);
  cVar3 = FUN_080243d8(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x0801290e : FUN_0801290e */

int FUN_0801290e(void)

{
  return (int)diag_motor_egdir * (DAT_200005a4 + diag_halloffset);
}



/* ENTRY 0x08012924 : FUN_08012924 */

void FUN_08012924(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_200005c4;
    if (DAT_200005c4 < 0) {
      iVar1 = -DAT_200005c4;
    }
    if (1000 < iVar1) {
      iVar1 = DAT_200005c4;
      if (DAT_200005c4 < 0) {
        iVar1 = -DAT_200005c4;
      }
      if (iVar1 < 10000) {
        if (DAT_200005cf < 4) {
          DAT_200005cf = DAT_200005cf + 1;
        }
        else {
          *(short *)((uint)DAT_20000590 * 0x10 + 0x200003b0 + param_5 * 2) =
               (short)((int)((param_4 * 0x7ff8) /
                             (int)((uint)DAT_200005d0 + param_4 + (uint)DAT_200005d2) +
                            (uint)*(ushort *)((uint)DAT_20000590 * 0x10 + 0x200003b0 + param_5 * 2)
                            * 9) / 10);
        }
        goto LAB_080129b4;
      }
    }
  }
  DAT_200005cf = 0;
LAB_080129b4:
  DAT_200005d2 = DAT_200005d0;
  DAT_200005d0 = (short)param_4;
  if (param_2 == 0) {
    if (param_3 == 1) {
      if (DAT_20000590 == 0x1d) {
        DAT_20000590 = 0;
      }
      else {
        DAT_20000590 = DAT_20000590 + 1;
      }
    }
    else if (DAT_20000590 == 0) {
      DAT_20000590 = 0x1d;
    }
    else {
      DAT_20000590 = DAT_20000590 - 1;
    }
  }
  return;
}



/* ENTRY 0x080129fc : FUN_080129fc */

void FUN_080129fc(void)

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
  uVar5 = FUN_080128d2();
  bVar3 = (byte)uVar5;
  DAT_200005a8 = bVar3;
  if (uVar5 != DAT_200005ca) {
    iVar6 = FUN_08024b60(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_0802778c + (uint)DAT_200005ca * 3 + uVar5 * 0x18);
    DAT_2000038e = *(char *)((int)(&UNK_0802778c + (uint)DAT_200005ca * 3 + uVar5 * 0x18) + 2);
    DAT_2000038c._0_1_ = (char)uVar2;
    DAT_2000038c = uVar2;
    if ((char)DAT_2000038c == '\0') {
      DAT_2000038c._1_1_ = (byte)((ushort)uVar2 >> 8);
      bVar4 = DAT_2000038c._1_1_;
      switch(DAT_2000038c._1_1_) {
      case 0:
        DAT_200005c8 = (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4;
        break;
      case 1:
        DAT_200005c8 = *(short *)(&DAT_200003ba + (uint)DAT_20000590 * 0x10) +
                       (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4;
        break;
      case 2:
        DAT_200005c8 = (0x7ff8 - *(short *)(&DAT_200003b6 + (uint)DAT_20000590 * 0x10)) +
                       (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4;
        break;
      case 3:
        DAT_200005c8 = (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4 + 0x7ff8;
        break;
      case 4:
        DAT_200005c8 = *(short *)(&DAT_200003b4 + (uint)DAT_20000590 * 0x10) + -0x7ff8 +
                       (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4;
        break;
      case 5:
        DAT_200005c8 = (DAT_2000038e * 0xf + DAT_2000038e * 0x3c) * -4 -
                       *(short *)(&DAT_200003b8 + (uint)DAT_20000590 * 0x10);
      }
      if (DAT_2000038e == DAT_200005cb) {
        if (iVar6 < 0x2001) {
          if (iVar6 < 0x14) {
            DAT_200005c0 = (int)((int)DAT_2000038e *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000590 * 0x10 + 0x200003b0 +
                                        (uint)DAT_200005ca * 2) * 100) / 0x14;
            DAT_200005b4 = 0x14;
          }
          else {
            DAT_200005c0 = (int)((int)DAT_2000038e *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000590 * 0x10 + 0x200003b0 +
                                        (uint)DAT_200005ca * 2) * 100) / iVar6;
            DAT_200005b4 = iVar6;
          }
        }
        else {
          DAT_200005c0 = 0;
          DAT_200005c4 = 0;
          DAT_200005b4 = 0x2000;
        }
        if (DAT_200005cc < 0x5b) {
          DAT_200005cc = DAT_200005cc + 1;
        }
        else {
          DAT_200005b8 = DAT_200005b8 + 1;
          DAT_200005bc = 1;
        }
      }
      else {
        DAT_200005cc = 0;
        DAT_200005bc = 0;
        DAT_200005c0 = 0;
        DAT_200005c4 = 0;
        uVar8 = 1;
        DAT_200005c8 = *(short *)(&DAT_20000390 + (uint)DAT_2000038c._1_1_ * 2);
      }
      iVar7 = DAT_200005c0 - DAT_200005c4;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x4b0) || (bVar1 = 10 < DAT_200005cd, DAT_200005cd = DAT_200005cd + 1, bVar1)) {
        DAT_200005c4 = DAT_200005c0;
        DAT_200005cd = 0;
      }
      DAT_200005ac = diag_motor_spdir * DAT_200005c4;
      iVar7 = DAT_200005ac - diag_HallRSP;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x640) || (bVar1 = 10 < DAT_200005ce, DAT_200005ce = DAT_200005ce + 1, bVar1)) {
        DAT_200005ce = 0;
        diag_HallRSP = DAT_200005ac;
      }
      DAT_200005cb = DAT_2000038e;
      FUN_08012924(uVar8,bVar4,(int)DAT_2000038e,iVar6,DAT_200005ca);
      DAT_200005ca = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005ca = bVar3;
    }
  }
  return;
}



/* ENTRY 0x08012d1a : FUN_08012d1a */

void FUN_08012d1a(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_080129fc();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005c4 == 0) || (0x7ff < uVar3)) {
    DAT_200005c0 = 0;
    DAT_200005c4 = 0;
    iVar2 = FUN_080128d2();
    DAT_200005a4 = (int)*(short *)(&DAT_20000390 + iVar2 * 2) + DAT_2000038e * -300;
  }
  else {
    DAT_200005a4 = (int)(uVar3 * DAT_200005c4) / 100 + (int)DAT_200005c8;
  }
  if (0x6000 < uVar3) {
    DAT_200005ac = 0;
    diag_HallRSP = 0;
    DAT_40000424 = 0x8000;
  }
  return;
}



/* ENTRY 0x08012d90 : FUN_08012d90 */

void FUN_08012d90(void)

{
  FUN_080127dc();
  return;
}



/* ENTRY 0x08012de4 : FUN_08012de4 */

bool FUN_08012de4(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x08012df6 : FUN_08012df6 */

bool FUN_08012df6(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08023a70(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x08012e36 : FUN_08012e36 */

bool FUN_08012e36(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != cVar2) {
    FUN_08023a70(param_2,*(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x43,0x43);
    param_1[1] = param_1[1] + 1U & param_1[2] - 1U;
  }
  return cVar1 != cVar2;
}



/* ENTRY 0x08012e6e : FUN_08012e6e */

uint FUN_08012e6e(byte *param_1,char *param_2)

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



/* ENTRY 0x08012ebc : FUN_08012ebc */

undefined4 FUN_08012ebc(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_08012e6e(param_2,auStack_50);
  FUN_08012df6(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x08012eda : FUN_08012eda */

void FUN_08012eda(int param_1)

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
    FUN_08013c24(param_1);
    break;
  default:
    FUN_080144e0(param_1);
  }
  return;
}



/* ENTRY 0x08012f14 : FUN_08012f14 */

void FUN_08012f14(char *param_1,int param_2)

{
  uint uVar1;
  
  if (((*param_1 == 'U') && (param_1[1] == -0x56)) && (param_2 == 0xe)) {
    uVar1 = (uint)(param_1[2] == '\v');
    if (param_1[3] == -0x13) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[4] == DAT_200005dd) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[5] == DAT_200005de) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[6] == DAT_200005df) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[7] == DAT_200005e0) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[8] == DAT_200005e1) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[9] == DAT_200005e2) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[10] == DAT_200005e3) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[0xb] == DAT_200005e4) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 10) {
      DAT_200005dc = 1;
    }
  }
  return;
}



/* ENTRY 0x08012fba : FUN_08012fba */

undefined4 FUN_08012fba(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_0802784c + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_0802784c + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x08013026 : FUN_08013026 */

void FUN_08013026(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005dc == '\0') {
    if (DAT_200030e4 < 500) {
      FUN_08012f14(param_1,param_2 & 0xff);
    }
    FUN_0801b022(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x3f || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_08012fba(&local_54);
    if (iVar1 == 1) {
      FUN_08012eda(&local_54);
    }
  }
  return;
}



/* ENTRY 0x080130be : FUN_080130be */

void FUN_080130be(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  uVar3 = DAT_20000940 & 3;
  uVar2 = DAT_20000947 & 7;
  uVar4 = DAT_20000952 & 3;
  uVar5 = DAT_20000959 & 3;
  if ((DAT_2000093f == uVar3) && (DAT_2000093e != '\x01')) {
    iVar1 = FUN_08012de4(&DAT_200005d4);
    if (iVar1 == 0) {
      FUN_08012e36(&DAT_200005d4,&local_58);
      FUN_0801352c(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000951 == uVar4) && (DAT_20000950 != '\x01')) {
        if ((DAT_20000958 == uVar5) && (DAT_20000957 != '\x01')) {
          if ((DAT_20000946 != uVar2) || (DAT_20000945 == '\x01')) {
            FUN_0801352c(&DAT_20003f4e + uVar2 * 0x14,(&DAT_20000948)[uVar2]);
            DAT_20000947 = (char)uVar2 + 1U & 7;
            DAT_20000945 = '\0';
          }
        }
        else {
          FUN_0801352c(&DAT_2000403e + uVar5 * 0x14,0x14);
          DAT_20000959 = (char)uVar5 + 1U & 3;
          DAT_20000957 = '\0';
        }
      }
      else {
        FUN_0801352c(&DAT_20003fee + uVar4 * 0x14,0x14);
        DAT_20000952 = (char)uVar4 + 1U & 3;
        DAT_20000950 = '\0';
      }
    }
  }
  else {
    FUN_0801352c(&DAT_20003efe + uVar3 * 0x14,0x14);
    DAT_20000940 = (char)uVar3 + 1U & 3;
    DAT_2000093e = '\0';
  }
  return;
}



/* ENTRY 0x08013238 : FUN_08013238 */

void FUN_08013238(undefined4 param_1)

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
  FUN_0802436c(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_080242ac(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_080242ac(&DAT_40010c00,&local_30);
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
  FUN_08024444(&local_34);
  FUN_0802516e(&DAT_40013800,0x360,1);
  FUN_0802516e(&DAT_40013800,0x424,1);
  FUN_08025112(&DAT_40013800,0x80,1);
  FUN_08025112(&DAT_40013800,0x40,1);
  FUN_080244fc(1);
  FUN_08023f08(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_2000378c;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_40020044,&local_60);
  FUN_08024034(&DAT_40020044,2,1);
  FUN_08023ef4(&DAT_40020044,0);
  FUN_08023f08(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_2000374c;
  local_58 = 0;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_40020058,&local_60);
  FUN_08023ef4(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_08024444(&local_34);
  FUN_0800d3ba(&DAT_40013800,&local_2c);
  FUN_08025100(&DAT_40013800,1);
  return;
}



/* ENTRY 0x080133c0 : FUN_080133c0 */

void FUN_080133c0(void)

{
  DAT_200005e8 = 0;
  return;
}



/* ENTRY 0x080133c8 : FUN_080133c8 */

void FUN_080133c8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x2000);
  if (iVar2 != 0) {
    FUN_08023edc(0x2000);
    FUN_08023ef4(&DAT_40020044,0);
    FUN_080133c0();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013404 : FUN_08013404 */

void FUN_08013404(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_08024014(0x20000);
    if (iVar2 != 0) {
      FUN_08023edc(0x20000);
    }
  }
  else {
    FUN_08023edc(0x40000);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013448 : FUN_08013448 */

void FUN_08013448(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_08025122(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_0802400c(&DAT_40020058);
    uVar4 = 0x40 - iVar3;
    FUN_08023ef4(&DAT_40020058,0);
    DAT_4002005c = 0x40;
    FUN_08023ef4(&DAT_40020058,1);
    FUN_080250f2(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x41)) {
      FUN_08013026(&DAT_2000374c,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_08025122(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_080250f2(&DAT_40013800,0x727);
    FUN_0802516e(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_08025122(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_080250f2(&DAT_40013800,0x525);
  }
  iVar3 = FUN_08025122(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_080250f2(&DAT_40013800,0x260);
  }
  iVar3 = FUN_08025122(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_080250f2(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x0801352c : FUN_0801352c */

undefined4 FUN_0801352c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005e8 == '\0') {
    DAT_200005e8 = '\x01';
    if (0x40 < (int)param_2) {
      param_2 = 0x40;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_2000378c)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023edc(0x2000);
    FUN_08023ef4(&DAT_40020044,0);
    FUN_08024096(&DAT_40020044,uVar2);
    FUN_08023ef4(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x080135a4 : FUN_080135a4 */

void FUN_080135a4(int param_1)

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
      DAT_200005ec = 1;
      return;
    }
    local_55 = (undefined1)(&DWORD_08028050)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_08028050 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_0802804c)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_08028050 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_08028058)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_08028058)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_08028050 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_08028054)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_08028050 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_08028058)[uVar1 * 4] + '\x06';
  }
  FUN_08012fba(local_58);
  FUN_08012ebc(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x08013680 : FUN_08013680 */

void FUN_08013680(int param_1)

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
    local_51 = (undefined1)(&DWORD_08028050)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08028050 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_0802804c)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_08028050 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_08028058)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08028058)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_08028050 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_08028054)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_08028050 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_08028058)[param_1 * 4] + '\x06';
  }
  FUN_08012fba(local_54);
  FUN_08012ebc(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x0801374c : FUN_0801374c */

void FUN_0801374c(undefined1 param_1)

{
  DAT_200005ea = param_1;
  return;
}



/* ENTRY 0x08013752 : FUN_08013752 */

void FUN_08013752(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_200037dc;
  local_58[3] = DAT_200037dd;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037dd; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027a50 + (uint)(byte)(&DAT_200037de)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08027a4c)[(uint)(byte)(&DAT_200037de)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012fba(local_58);
  FUN_08012ebc(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x080137ca : FUN_080137ca */

void FUN_080137ca(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_200037dc;
  local_4d = DAT_200037dd;
  for (uVar1 = 0; uVar1 < DAT_200037dd; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037de)[uVar1];
  }
  local_50[0] = DAT_200037dd + 5;
  FUN_08012fba(local_50);
  FUN_08012ebc(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x0801381a : FUN_0801381a */

void FUN_0801381a(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_080137ca();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037dc)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_080137ca();
  }
  return;
}



/* ENTRY 0x08013846 : FUN_08013846 */

void FUN_08013846(undefined1 param_1)

{
  DAT_200005e9 = param_1;
  return;
}



/* ENTRY 0x0801384c : FUN_0801384c */

void FUN_0801384c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_200037e6;
  local_58[3] = DAT_200037e7;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037e7; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027a50 + (uint)(byte)(&DAT_200037e8)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08027a4c)[(uint)(byte)(&DAT_200037e8)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012fba(local_58);
  FUN_08012ebc(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x080138c4 : FUN_080138c4 */

void FUN_080138c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027a50 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_08027a4c)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_08012fba(local_54);
  FUN_08012ebc(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x0801391a : FUN_0801391a */

void FUN_0801391a(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_08027a58 + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027a50 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_08027a4c)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027a50 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_08027a4c)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_08027a4c)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012fba(local_58);
  FUN_08012ebc(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x080139d8 : FUN_080139d8 */

void FUN_080139d8(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_200037e6;
  local_4d = DAT_200037e7;
  for (uVar1 = 0; uVar1 < DAT_200037e7; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037e8)[uVar1];
  }
  local_50[0] = DAT_200037e7 + 5;
  FUN_08012fba(local_50);
  FUN_08012ebc(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x08013a28 : FUN_08013a28 */

void FUN_08013a28(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_080139d8();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037e6)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_080139d8();
  }
  return;
}



/* ENTRY 0x08013a54 : FUN_08013a54 */

void FUN_08013a54(int param_1)

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
      DAT_200005eb = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_08027a50)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_08027a58 + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_08027a58)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08027a58)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_08027a54)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_08027a58)[param_1 * 4] + '\a';
  }
  FUN_08012fba(local_50);
  FUN_08012ebc(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x08013af2 : FUN_08013af2 */

void FUN_08013af2(int param_1,int param_2)

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
  FUN_08012fba(local_54);
  FUN_08012ebc(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x08013b38 : FUN_08013b38 */

void FUN_08013b38(void)

{
  FUN_08013af2(0x10,&DAT_08001300);
  FUN_08013af2(0xe,&DAT_08001310);
  FUN_08013af2(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x08013b58 : FUN_08013b58 */

void FUN_08013b58(void)

{
  uint uVar1;
  
  if (DAT_200005eb == '\0') {
    if (DAT_200005ec == '\0') {
      uVar1 = (uint)DAT_200005ed;
      DAT_200005ed = DAT_200005ed + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005e9 == '\x01') {
          FUN_0801384c();
        }
      }
      else if (DAT_200005ea == '\x01') {
        FUN_08013752();
      }
    }
    else if (DAT_200005ef == 0) {
      FUN_08013680(0xff);
      DAT_200005ef = DAT_200005ef + 1;
    }
    else if (DAT_200005ef < 0x12) {
      FUN_08013680(DAT_200005ef - 1);
      DAT_200005ef = DAT_200005ef + 1;
    }
    else {
      DAT_200005ef = 0;
      DAT_200005ec = '\0';
    }
  }
  else if (DAT_200005ee == 0) {
    FUN_08013a54(0xff);
    DAT_200005ee = DAT_200005ee + 1;
  }
  else if (DAT_200005ee < 0x61) {
    FUN_08013a54(DAT_200005ee - 1);
    DAT_200005ee = DAT_200005ee + 1;
  }
  else {
    DAT_200005ee = 0;
    DAT_200005eb = '\0';
  }
  return;
}



/* ENTRY 0x08013c24 : FUN_08013c24 */

void FUN_08013c24(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_08013a54(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_0801381a(param_1 + 1);
    break;
  case 0xe2:
    FUN_08013a28(param_1 + 1);
    break;
  case 0xe3:
    FUN_0801374c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_08013846(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_080138c4(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_0801391a(param_1 + 1);
    break;
  case 0xe7:
    FUN_08013b38();
    FUN_080135a4(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08013cb0 : FUN_08013cb0 */

void FUN_08013cb0(undefined4 param_1)

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
  FUN_080242ac(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_080242ac(&DAT_40010c00,&local_30);
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
  FUN_08024444(&local_34);
  FUN_0802516e(&DAT_40004800,0x360,1);
  FUN_0802516e(&DAT_40004800,0x424,1);
  FUN_08025112(&DAT_40004800,0x80,1);
  FUN_08025112(&DAT_40004800,0x40,1);
  FUN_080244fc(1);
  FUN_08023f08(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200038f0;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_4002001c,&local_60);
  FUN_08024034(&DAT_4002001c,2,1);
  FUN_08023ef4(&DAT_4002001c,0);
  FUN_08023f08(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200037f0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_40020030,&local_60);
  FUN_08023ef4(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08024444(&local_34);
  FUN_080251a0(&DAT_40004800,&local_2c);
  FUN_08025100(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08013e38 : FUN_08013e38 */

void FUN_08013e38(void)

{
  DAT_200005f0 = 0;
  return;
}



/* ENTRY 0x08013e40 : FUN_08013e40 */

void FUN_08013e40(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x20);
  if (iVar2 != 0) {
    FUN_08023edc(0x20);
    FUN_08023ef4(&DAT_4002001c,0);
    FUN_08013e38();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013e78 : FUN_08013e78 */

void FUN_08013e78(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_08024014(0x200);
    if (iVar2 != 0) {
      FUN_08023edc(0x200);
    }
  }
  else {
    FUN_08023edc(0x400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013ebc : FUN_08013ebc */

void FUN_08013ebc(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08025122(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0802400c(&DAT_40020030);
    FUN_08023ef4(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_08023ef4(&DAT_40020030,1);
    FUN_080250f2(&DAT_40004800,0x424);
    FUN_0801f10a(&DAT_200037f0,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_08025122(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004800,0x727);
    FUN_0802516e(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_08025122(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004800,0x525);
  }
  iVar4 = FUN_08025122(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004800,0x260);
  }
  iVar4 = FUN_08025122(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013f9c : FUN_08013f9c */

undefined4 FUN_08013f9c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f0 == '\0') {
    DAT_200005f0 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_200038f0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023edc(0x20);
    FUN_08023ef4(&DAT_4002001c,0);
    FUN_08024096(&DAT_4002001c,uVar2);
    FUN_08023ef4(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08014010 : FUN_08014010 */

void FUN_08014010(undefined4 param_1)

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
  FUN_080242ac(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_080242ac(&DAT_40011000,&local_30);
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
  FUN_08024444(&local_34);
  FUN_0802516e(&DAT_40004c00,0x360,1);
  FUN_0802516e(&DAT_40004c00,0x424,1);
  FUN_08025112(&DAT_40004c00,0x80,1);
  FUN_08025112(&DAT_40004c00,0x40,1);
  FUN_080244fc(2,1);
  FUN_08023f08(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003ab0;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_40020458,&local_60);
  FUN_08024034(&DAT_40020458,2,1);
  FUN_08023ef4(&DAT_40020458,0);
  FUN_08023f08(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_200039b0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08024044(&DAT_40020430,&local_60);
  FUN_08023ef4(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08024444(&local_34);
  FUN_080251a0(&DAT_40004c00,&local_2c);
  FUN_08025100(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08014198 : FUN_08014198 */

void FUN_08014198(void)

{
  DAT_200005f1 = 0;
  return;
}



/* ENTRY 0x080141a0 : FUN_080141a0 */

void FUN_080141a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x10020000);
  if (iVar2 != 0) {
    FUN_08023edc(0x10020000);
    FUN_08023ef4(&DAT_40020458,0);
    FUN_08014198();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x080141d8 : FUN_080141d8 */

void FUN_080141d8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08024014(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_08024014(0x10000200);
    if (iVar2 != 0) {
      FUN_08023edc(0x10000200);
    }
  }
  else {
    FUN_08023edc(0x10000400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08014214 : FUN_08014214 */

void FUN_08014214(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08025122(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_0802400c(&DAT_40020430);
    FUN_08023ef4(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_08023ef4(&DAT_40020430,1);
    FUN_080250f2(&DAT_40004c00,0x424);
    FUN_0801fbea(&DAT_200039b0,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_08025122(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004c00,0x727);
    FUN_0802516e(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_08025122(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_08025122(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_08025122(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_080250f2(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x080142f4 : FUN_080142f4 */

undefined4 FUN_080142f4(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005f1 == '\0') {
    DAT_200005f1 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003ab0)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023edc(0x10020000);
    FUN_08023ef4(&DAT_40020458,0);
    FUN_08024096(&DAT_40020458,uVar2);
    FUN_08023ef4(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08014374 : FUN_08014374 */

void FUN_08014374(undefined4 param_1,undefined4 param_2)

{
  FUN_08024438(0x5555);
  FUN_08024420(param_1);
  FUN_0802442c(param_2);
  FUN_08024410();
  FUN_08024400();
  return;
}



/* ENTRY 0x08014398 : FUN_08014398 */

void FUN_08014398(void)

{
  FUN_0801a3c0();
  FUN_08014374(4,0xad9);
  FUN_08016bb4();
  FUN_08016c20();
  FUN_080172c2();
  FUN_08017300();
  return;
}



/* ENTRY 0x080143ba : FUN_080143ba */

void FUN_080143ba(void)

{
  DAT_200006a4 = DAT_200006a4 + 1;
  FUN_08016a98(&DAT_200006a0);
  if (DAT_20000630 < 3) {
    DAT_20000630 = DAT_20000630 + 1;
  }
  else {
    DAT_20000630 = '\0';
  }
  FUN_0801d24a(DAT_20000630,&DAT_20003bbc,&DAT_20003bce);
  return;
}



/* ENTRY 0x080143f4 : FUN_080143f4 */

void FUN_080143f4(void)

{
  FUN_08024410();
  FUN_0801686c();
  FUN_08016dca();
  FUN_08019ad2();
  FUN_0801e7a4();
  return;
}



/* ENTRY 0x08014420 : FUN_08014420 */

void FUN_08014420(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_20003288;
      if (DAT_20003288 < 0) {
        iVar2 = -DAT_20003288;
      }
      if ((iVar2 < 1000) && (DAT_200005f5 == '\x01')) {
        DAT_200002d0 = 8;
      }
    }
  }
  else if (cVar1 == '\x01') {
    DAT_20000316 = *(undefined2 *)(param_1 + 2);
  }
  else if ((cVar1 == '\x02') && (diag_motionstep == '\x02')) {
    FUN_08010a82();
    DAT_20000316 = 0;
  }
  return;
}



/* ENTRY 0x0801447e : FUN_0801447e */

void FUN_0801447e(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_20000316;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_08010a82();
      diag_halldebugflg = 0;
      DAT_20000316 = 0;
      uVar1 = DAT_20000316;
      uVar2 = diag_halldebugflg;
    }
  }
  else {
    uVar1 = (short)param_2;
    uVar2 = param_1;
    if ((DAT_200002d0 != '\b') &&
       (uVar1 = DAT_20000316, uVar2 = diag_halldebugflg, diag_motionstep == '\x02')) {
      iVar3 = diag_HallRSP;
      if (diag_HallRSP < 0) {
        iVar3 = -diag_HallRSP;
      }
      if (iVar3 < 100) {
        DAT_200005f5 = 0;
        DAT_200002d0 = '\b';
        uVar1 = (short)param_2;
        uVar2 = param_1;
      }
    }
  }
  diag_halldebugflg = uVar2;
  DAT_20000316 = uVar1;
  return;
}



/* ENTRY 0x080144e0 : FUN_080144e0 */

void FUN_080144e0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_20003151 == '\x01')) {
      FUN_0800fce8();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_08014420(param_1 + 1);
  }
  return;
}



/* ENTRY 0x0801453c : FUN_0801453c */

void FUN_0801453c(void)

{
  int iVar1;
  
  if ((DAT_20000640 == '\x01') &&
     (DAT_2000063e = ((short)((int)(uint)DAT_200034be >> 4) - DAT_20000642) * 0x11,
     diag_ChgCurrShow = DAT_2000063e, DAT_20000664 == '\x02')) {
    if (DAT_2000063e < 0x2ee1) {
      if (DAT_20000658 < 0xb) {
        DAT_20000665 = '\0';
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
      FUN_080243ea(&DAT_40011000,2);
      DAT_20000665 = '\x01';
      if (DAT_20000668 < 10) {
        DAT_20000668 = DAT_20000668 + 1;
      }
      DAT_20000664 = '\x05';
    }
  }
  diag_ChgStepShow = DAT_20000664;
  switch(DAT_20000664) {
  case '\0':
    if (DAT_20000684 < 0x32) {
      DAT_20000684 = DAT_20000684 + 1;
    }
    else {
      DAT_20000664 = '\x01';
    }
    goto code_r0x08014a74;
  case '\x01':
    DAT_2000068c = DAT_2000068c + 1;
    if (DAT_2000068c < 0x14) {
      DAT_422101b0 = 1;
      FUN_080243ea(&DAT_40011000,2);
    }
    else if (DAT_2000068c < 0x28) {
      DAT_20000688 = DAT_20000688 + ((int)(uint)DAT_200034be >> 4);
    }
    else {
      DAT_20000642 = (ushort)(DAT_20000688 / 0x14);
      if ((DAT_20000642 < 0x43a) || (0xcae < DAT_20000642)) {
        DAT_20000640 = '\x02';
      }
      else {
        DAT_20000640 = '\x01';
      }
      FUN_080243e6(&DAT_40011000,2);
      DAT_20000664 = '\x02';
    }
    goto code_r0x08014a74;
  case '\x02':
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000660) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_080243ea(&DAT_40011000,2);
        DAT_2000065c = 0;
        DAT_20000664 = '\x06';
        goto code_r0x08014a74;
      }
      DAT_20000660 = DAT_20000660 + 1;
    }
    else if (10 < DAT_20000660) {
      DAT_20000660 = DAT_20000660 - 10;
    }
    if ((diag_BatState == '\x01') && (0x30ed < (int)diag_TotalVoltage)) {
      if (0x420a3 < DAT_20000644) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_080243ea(&DAT_40011000,2);
        DAT_2000065c = 0;
        DAT_20000664 = '\x03';
        goto code_r0x08014a74;
      }
      DAT_20000644 = DAT_20000644 + 1;
    }
    else if (10 < DAT_20000644) {
      DAT_20000644 = DAT_20000644 - 10;
    }
    if ((diag_BatState == '\x01') && (0x3264 < (int)diag_TotalVoltage)) {
      if (0x13 < DAT_20000648) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_080243ea(&DAT_40011000,2);
        DAT_20000666 = 0xfa;
        DAT_2000065c = 0;
        DAT_20000664 = '\x04';
        goto code_r0x08014a74;
      }
      DAT_20000648 = DAT_20000648 + 1;
    }
    else if (10 < DAT_20000648) {
      DAT_20000648 = DAT_20000648 - 1;
    }
    iVar1 = FUN_08020858();
    if ((diag_BatState == '\x01') &&
       (((DAT_2000066c < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_20000674 < iVar1 && ((DAT_20000674 < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_2000064c) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_080243ea(&DAT_40011000,2);
        DAT_20000678 = -6;
        DAT_2000065c = 0;
        DAT_20000664 = '\b';
        goto code_r0x08014a74;
      }
      DAT_2000064c = DAT_2000064c + 1;
    }
    else if (10 < DAT_2000064c) {
      DAT_2000064c = DAT_2000064c - 1;
    }
    if (DAT_20003124 < 0xb) {
      if (DAT_20000650 < 0xb) {
        DAT_20000679 = '\0';
      }
      else {
        DAT_20000650 = DAT_20000650 - 1;
      }
    }
    else if (DAT_20000650 < 0x32) {
      DAT_20000650 = DAT_20000650 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_080243ea(&DAT_40011000,2);
      DAT_20000679 = '\x01';
      DAT_20000664 = '\t';
    }
    if ((DAT_20003125 < 0xb) || (DAT_2000063e < 0x259)) {
      if (DAT_20000654 < 0xb) {
        DAT_2000067a = '\0';
      }
      else {
        DAT_20000654 = DAT_20000654 - 1;
      }
    }
    else if (DAT_20000654 < 200) {
      DAT_20000654 = DAT_20000654 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_080243ea(&DAT_40011000,2);
      DAT_2000067a = '\x01';
      DAT_20000664 = '\t';
    }
    goto code_r0x08014a74;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_08020858();
    if (((int)diag_TotalVoltage < 0x2db4) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000679 == '\0')))) {
      if (DAT_2000065c < 100) {
        DAT_2000065c = DAT_2000065c + 1;
      }
      else {
        FUN_080243e6(&DAT_40011000,2);
        DAT_20000666 = 0;
        DAT_20000678 = '\0';
        DAT_20000667 = 0;
        DAT_20000665 = '\0';
        DAT_20000664 = '\x02';
      }
    }
    goto code_r0x08014a74;
  default:
    goto code_r0x08014a74;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
  }
  iVar1 = FUN_08020858();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_2000063e < 600)) &&
      ((DAT_20000668 < 8 && ((DAT_20000679 == '\0' && (DAT_2000067a == '\0')))))) &&
     (((diag_TotalVoltage < DAT_20000670 && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_20000676 && (iVar1 < 0x65)))))) {
    if (DAT_2000065c < 100) {
      DAT_2000065c = DAT_2000065c + 1;
    }
    else {
      FUN_080243e6(&DAT_40011000,2);
      DAT_20000666 = 0;
      DAT_20000678 = '\0';
      DAT_20000667 = 0;
      DAT_20000665 = '\0';
      DAT_20000664 = '\x02';
    }
  }
code_r0x08014a74:
  if (((DAT_20000665 == '\x01') || (DAT_20000666 != 0)) || (DAT_20000667 != 0)) {
    DAT_200006d0 = 1;
    DAT_200030ce = DAT_200030ce | 0x40;
  }
  else {
    DAT_200006d0 = 0;
    DAT_200030ce = DAT_200030ce & 0xffbf;
  }
  if (DAT_20000678 == '\0') {
    DAT_200030ce = DAT_200030ce & 0xff7f;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x80;
  }
  if (DAT_20000679 == '\0') {
    DAT_200030ce = DAT_200030ce & 0xfeff;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x100;
  }
  if (DAT_2000067a == '\0') {
    DAT_200030d0 = DAT_200030d0 & 0xfffe;
  }
  else {
    DAT_200030d0 = DAT_200030d0 | 1;
  }
  if ((DAT_200030e4 % 0x96 == 0x4b) &&
     (((DAT_20000665 == '\x01' || (1 < DAT_20000666)) ||
      ((1 < DAT_20000667 || ((DAT_20000679 != '\0' || (DAT_2000067a != '\0')))))))) {
    FUN_0800e2b2(2);
  }
  if (DAT_20000690 != '\x01') {
    if (diag_cartstep != '\0') {
      DAT_20000690 = '\x01';
    }
    if (((0x19 < DAT_200030e8) && (diag_BatState == '\0')) && (diag_cartstep == '\0')) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 1000) {
        if (DAT_20000691 < 0x1a) {
          DAT_20000691 = DAT_20000691 + 1;
          return;
        }
        DAT_422101b0 = 0;
        DAT_20000691 = DAT_20000691 + 1;
        return;
      }
    }
    DAT_20000691 = 0;
  }
  return;
}



/* ENTRY 0x08014bc0 : FUN_08014bc0 */

void FUN_08014bc0(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003b74 < 0xb) {
      DAT_20003b74 = 0;
      DAT_200030ce = DAT_200030ce & 0xffef;
    }
    else {
      DAT_20003b74 = DAT_20003b74 - 10;
    }
  }
  else if (DAT_20003b74 < 0xfa) {
    DAT_20003b74 = DAT_20003b74 + 1;
    DAT_200030ce = DAT_200030ce | 0x10;
  }
  if (10 < DAT_20003b74) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_0800fd14();
    }
  }
  return;
}



/* ENTRY 0x08014c36 : FUN_08014c36 */

void FUN_08014c36(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (diag_AgeModeflg == '\0') {
    if (DAT_2000067c != 0) {
      DAT_2000067c = DAT_2000067c + -1;
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
      if ((int)((uint)DAT_200031b2 * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_200031b4 * 1000)) {
          if (DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) goto LAB_08014cdc;
          bVar3 = DAT_20000638 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_08014f1c;
LAB_08014cdc:
              bVar3 = DAT_200031c0 == 1;
            } while (!bVar3);
            if (DAT_200031b2 == 0) goto LAB_08014f1c;
            bVar3 = DAT_20003146 == '\0';
          } while (!bVar3);
          FUN_0800e2b2(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_200031b6 * 1000)) {
            if ((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
                (DAT_20000638 % 0x32 == 0x14)) &&
               (((DAT_200031c0 == 1 && (DAT_200031b4 != 0)) && (DAT_20003146 == '\0')))) {
              FUN_0800e2b2(1);
            }
          }
          else if (DAT_200031c0 == 1) {
            if (((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
                 (DAT_20000638 % 0x32 == 0x14)) ||
                ((DAT_20000638 % 0x32 == 0x1e || (DAT_20000638 % 0x32 == 0x28)))) &&
               (DAT_20003146 == '\0')) {
              FUN_0800e2b2(1);
            }
          }
          else if ((DAT_2000067c == 0) && (DAT_20003146 == '\0')) {
            if (DAT_2000069c == 0) {
              DAT_200006a0 = 2;
              DAT_2000067c = 300;
            }
            else {
              DAT_200006a0 = 6;
              DAT_2000067c = 300;
            }
          }
        }
      }
    }
    else if (DAT_200031c0 == 1) {
      if (((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
           (DAT_20000638 % 0x32 == 0x14)) ||
          ((DAT_20000638 % 0x32 == 0x1e || (DAT_20000638 % 0x32 == 0x28)))) &&
         (DAT_20003146 == '\0')) {
        FUN_0800e2b2(1);
      }
    }
    else if ((DAT_2000067c == 0) && (DAT_20003146 == '\0')) {
      if (DAT_2000069c == 0) {
        DAT_200006a0 = 2;
        DAT_2000067c = 300;
      }
      else {
        DAT_200006a0 = 6;
        DAT_2000067c = 300;
      }
    }
LAB_08014f1c:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_20000680 = 0x32;
    }
    else {
      bVar1 = DAT_20000680 + 1;
      bVar3 = 0x1e < DAT_20000680;
      DAT_20000680 = bVar1;
      if (bVar3) {
        FUN_0800e2b2(3);
        DAT_20000680 = 0;
      }
    }
    if ((DAT_2000063c == '\0') && (diag_cartstep != '\0')) {
      DAT_2000067e = DAT_2000067e + 1;
      if (DAT_2000067e < 0x1f5) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (100 < iVar2) {
          FUN_0800e2b2(2);
        }
      }
      else {
        FUN_0800e2b2(2);
        DAT_2000067e = 0;
      }
    }
    if (0 < DAT_20000682) {
      DAT_20000682 = DAT_20000682 + -1;
    }
    if ((DAT_20003b74 != '\0') && (DAT_20000682 == 0)) {
      if (DAT_200031c0 == 1) {
        FUN_0800e2b2();
        DAT_20000682 = 100;
      }
      else {
        if (DAT_2000069c == 0) {
          DAT_200006a0 = 4;
        }
        else {
          DAT_200006a0 = 10;
        }
        DAT_20000682 = 300;
      }
    }
    if (DAT_200006c8 != 0) {
      DAT_200006c8 = DAT_200006c8 + -1;
    }
  }
  return;
}



/* ENTRY 0x0801500a : FUN_0801500a */

void FUN_0801500a(void)

{
  DAT_20000638 = DAT_20000638 + 1;
  FUN_08014c36();
  FUN_08014bc0();
  FUN_08019876();
  FUN_0801453c();
  return;
}



/* ENTRY 0x08015028 : FUN_08015028 */

void FUN_08015028(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_0800e2b2(1);
    DAT_200006c6 = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031c0 == 1) {
      FUN_0800e2b2(3);
    }
    else if (DAT_2000069c == 0) {
      DAT_200006a0 = 4;
    }
    else {
      DAT_200006a0 = 9;
    }
    DAT_200006c8 = 500;
    break;
  case 0x23:
    FUN_0800e2b2(1);
    DAT_200006c7 = 1;
    break;
  case 0x24:
    if (DAT_200031c0 == 1) {
      FUN_0800e2b2(3);
    }
    else if (DAT_2000069c == 0) {
      DAT_200006a0 = 4;
    }
    else {
      DAT_200006a0 = 10;
    }
    DAT_200006cc = 2000;
    break;
  case 0x25:
    DAT_200006c4 = 1;
    if (DAT_200031c0 == 1) {
      FUN_0800e2b2(3);
    }
    if (DAT_200031c0 == 0) {
      if (DAT_2000069c == 0) {
        DAT_200006a0 = 0xf;
      }
      else {
        DAT_200006a0 = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_20003146 == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_0800e2b2(4);
    }
  }
  return;
}



/* ENTRY 0x0801511c : FUN_0801511c */

void FUN_0801511c(uint param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    param_1 = 0x32;
  }
  DAT_2000066c = (param_1 * 0xe10) / 100 + 0x24b8;
  DAT_20000670 = (param_1 * 0x708) / 100 + 0x23f0;
  DAT_20000674 = (short)param_1;
  DAT_20000676 = (short)((param_1 * 0x708) / 0xe10);
  return;
}



/* ENTRY 0x080151c4 : FUN_080151c4 */

void FUN_080151c4(void)

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
  
  if (((DAT_20003146 == '\x01') || (DAT_20003151 == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_20000692 = 0;
    DAT_20000694 = 0;
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
    if (DAT_20000694 < iVar1) {
      DAT_20000694 = DAT_20000694 + 100;
    }
    else if (iVar1 + 100 < (int)DAT_20000694) {
      DAT_20000694 = DAT_20000694 + -100;
    }
    if (DAT_20000692 < iVar2) {
      DAT_20000692 = DAT_20000692 + 0x1e;
    }
    else if (iVar2 + 0x1e < (int)DAT_20000692) {
      DAT_20000692 = DAT_20000692 + -0x1e;
    }
    local_38 = DAT_20003b84;
    local_36 = DAT_20003b86;
    local_34 = DAT_20003b88 + DAT_20000692;
    local_32 = DAT_20003b8a + DAT_20000694;
    local_30 = DAT_20003b8c;
    local_2e = DAT_20003b8e;
    local_2c = DAT_20003b90;
    local_1e = DAT_20003b9e;
    local_1c = DAT_20003ba0 + (short)(((int)DAT_20000692 << 1) / 3);
    local_1a = DAT_20003ba2 + (short)(((int)DAT_20000694 << 1) / 3);
    local_18 = DAT_20003ba4;
    local_16 = DAT_20003ba6;
    local_14 = DAT_20003ba8;
    local_2a = DAT_20003b92;
    local_28 = DAT_20003b94 + DAT_20000692 / 3;
    local_26 = DAT_20003b96 + DAT_20000694 / 3;
    local_24 = DAT_20003b98;
    local_22 = DAT_20003b9a;
    local_20 = DAT_20003b9c;
    FUN_0800abb8(&local_38);
  }
  return;
}



/* ENTRY 0x080153cc : FUN_080153cc */

void FUN_080153cc(void)

{
  DAT_20003b84 = 0xe000;
  DAT_20003b86 = 0x28;
  DAT_20003b88 = 7000;
  DAT_20003b8a = 20000;
  DAT_20003b8c = 10000;
  DAT_20003b8e = 0x9c4;
  DAT_20003b90 = 0x5a;
  DAT_20003b9e = 0x3c;
  DAT_20003ba0 = 6000;
  DAT_20003ba2 = 18000;
  DAT_20003ba4 = 8000;
  DAT_20003ba6 = 0x9c4;
  DAT_20003ba8 = 0x50;
  DAT_20003b92 = 0x5a;
  DAT_20003b94 = 5000;
  DAT_20003b96 = 16000;
  DAT_20003b98 = 6000;
  DAT_20003b9a = 0x9c4;
  DAT_20003b9c = 0x50;
  return;
}



/* ENTRY 0x0801543c : FUN_0801543c */

void FUN_0801543c(void)

{
  DAT_20003182 = DAT_20003b84;
  DAT_20003184 = DAT_20003b86;
  DAT_20003186 = DAT_20003b88;
  DAT_20003188 = DAT_20003b8a;
  DAT_2000318a = DAT_20003b8c;
  DAT_2000318c = DAT_20003b8e;
  DAT_2000318e = DAT_20003b90;
  DAT_2000319c = DAT_20003b9e;
  DAT_2000319e = DAT_20003ba0;
  DAT_200031a0 = DAT_20003ba2;
  DAT_200031a2 = DAT_20003ba4;
  DAT_200031a4 = DAT_20003ba6;
  DAT_200031a6 = DAT_20003ba8;
  DAT_20003190 = DAT_20003b92;
  DAT_20003192 = DAT_20003b94;
  DAT_20003194 = DAT_20003b96;
  DAT_20003196 = DAT_20003b98;
  DAT_20003198 = DAT_20003b9a;
  DAT_2000319a = DAT_20003b9c;
  return;
}



/* ENTRY 0x080154da : FUN_080154da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080154da(void)

{
  _DAT_20003164 = 0x5465;
  DAT_20003166 = 0;
  _DAT_20003168 = 0x1450;
  DAT_2000316a = 0;
  _DAT_2000316c = 0;
  DAT_2000316e = 0;
  DAT_20003170 = 0;
  DAT_20003172 = 0;
  DAT_20003174 = 0;
  DAT_20003176 = 0;
  DAT_20003178 = 500;
  DAT_2000317a = 0;
  DAT_2000317c = 0;
  DAT_2000317e = 0;
  DAT_20003180 = 0;
  DAT_200031a8 = 0;
  DAT_200031aa = 0;
  DAT_200031ac = 0;
  DAT_200031ae = 0;
  DAT_200031b0 = 100;
  DAT_200031bc = 0;
  DAT_200031be = 0;
  DAT_200031c2 = 0;
  DAT_200031c4 = 0;
  DAT_200031e2 = 0;
  DAT_200031fc = 0;
  DAT_20003200 = 0;
  DAT_20003204 = 600;
  DAT_20003212 = 0;
  DAT_20003213 = 0;
  return;
}



/* ENTRY 0x08015554 : FUN_08015554 */

void FUN_08015554(void)

{
  FUN_080153cc();
  FUN_0801543c();
  DAT_200031b2 = 0x12;
  DAT_200031b4 = 0x13;
  DAT_200031b6 = 0x14;
  DAT_200031b8 = 0x14;
  DAT_200031c0 = 0;
  DAT_200031ba = 1;
  DAT_200031d8 = 0;
  DAT_200031da = 0;
  DAT_200031dc = 2;
  DAT_200031de = 0;
  DAT_200031df = 0;
  DAT_200031e0 = 0;
  DAT_200031e4 = 0xff;
  DAT_200031e5 = 0;
  DAT_200031e6 = 0;
  DAT_200031e7 = 0;
  DAT_200031e8 = 0;
  DAT_200031e9 = 0xff;
  DAT_200031ea = 0;
  DAT_200031eb = 0;
  DAT_200031ec = 0;
  DAT_200031ed = 0;
  DAT_200031ee = 0xff;
  DAT_200031ef = 0;
  DAT_200031f0 = 0xa0;
  DAT_200031f1 = 0x20;
  DAT_200031f2 = 0xf0;
  DAT_200031f3 = 0;
  DAT_200031f4 = 0;
  DAT_200031f6 = 0xff;
  DAT_200031f7 = 0xff;
  DAT_200031f8 = 0xff;
  DAT_200031f9 = 0xff;
  DAT_20003208 = 1;
  DAT_20003206 = 1;
  DAT_20003210 = 0;
  FUN_080154da();
  FUN_0800e934();
  return;
}



/* ENTRY 0x08015664 : FUN_08015664 */

void FUN_08015664(void)

{
  uint uVar1;
  
  if (DAT_200006c2 != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031c6)[uVar1] = 0;
    }
  }
  FUN_08015554();
  DAT_2000320a = 0x31;
  DAT_2000320b = 0x32;
  DAT_2000320c = 0x33;
  DAT_2000320d = 0x34;
  DAT_2000320e = 0x35;
  DAT_2000320f = 0x36;
  return;
}



/* ENTRY 0x080156c0 : FUN_080156c0 */

void FUN_080156c0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (diag_cartstep != '\0') {
    if (DAT_20000698 == '\0') {
      uVar1 = DAT_4221012c;
      DAT_2000070a = (char)uVar1;
      DAT_2000070b = '\0';
      DAT_2000070c = 0xc;
    }
    DAT_2000070a = DAT_2000070a == '\0';
    DAT_2000070b = DAT_2000070b == '\0';
    if ((((bool)DAT_2000070a) && ((bool)DAT_2000070b)) || (DAT_20003206 == 0)) {
      if (DAT_20000840 != 0) {
        DAT_20000840 = DAT_20000840 - 1;
      }
    }
    else if (DAT_20000840 < DAT_2000070c) {
      DAT_20000840 = DAT_20000840 + 1;
    }
    if (DAT_20000842 != '\0') {
      if (DAT_20000840 == DAT_2000070c) {
        DAT_200030ce = DAT_200030ce | 0x8000;
      }
      else if (DAT_20000840 == 0) {
        DAT_20000842 = '\0';
        DAT_200030ce = DAT_200030ce & 0x7fff;
      }
    }
    if ((((uint)DAT_2000070c << 1) / 3 < (uint)DAT_20000840) && (DAT_20000841 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000710 == 0) {
          FUN_0800e2b2(1);
          DAT_20000710 = 1;
        }
      }
      else {
        DAT_20000841 = '\x01';
      }
      DAT_20000714 = 1;
    }
    else if ((uint)DAT_20000840 < DAT_2000070c / 3) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000710 == 1) {
          FUN_0800e2b2(2);
          DAT_20000710 = 0;
        }
        DAT_20000841 = '\0';
      }
      DAT_20000714 = 0;
    }
  }
  return;
}



/* ENTRY 0x0801581e : FUN_0801581e */

void FUN_0801581e(void)

{
  FUN_080156c0();
  return;
}



/* ENTRY 0x08015826 : FUN_08015826 */

void FUN_08015826(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_200006b8 != 0x12) {
    bVar4 = DAT_200006b8 == 0x14;
    do {
      if (!bVar4) goto LAB_08015a18;
      bVar4 = DAT_200006c0 == '\x01';
    } while (!bVar4);
  }
  bVar4 = diag_cartstep == '\0';
  do {
    if (bVar4) goto LAB_08015a18;
    bVar4 = true;
  } while (diag_cartstep == '\b');
  if (((DAT_200031de == '\x01') || (DAT_200006d3 == '\x02')) &&
     (DAT_2000084c = DAT_2000084c + 1, DAT_2000084c == (DAT_2000084c / 2) * 2)) {
    if (DAT_20000850 == 0) {
      DAT_20000850 = 1;
    }
    else {
      DAT_20000850 = 0;
    }
  }
  if (((DAT_200031de == '\x01') || (DAT_200006d3 == '\x02')) && (DAT_200006b8 != 0x13)) {
    if (DAT_20000850 == 0) {
      if (param_1 == 0x12) {
        DAT_20000720 = 0xffff;
        DAT_20000724 = 0xffff;
      }
      else if (param_1 == 0x15) {
        DAT_20000720 = 0xffff;
        DAT_20000724 = 0;
      }
      else if (param_1 == 0x16) {
        DAT_20000720 = 0;
        DAT_20000724 = 0xffff;
      }
      else {
        DAT_20000720 = 0xffff;
        DAT_20000724 = 0;
      }
    }
    else {
      DAT_20000720 = 0;
      DAT_20000724 = 0;
    }
  }
  else if (DAT_200006b8 == 0x12) {
    if (param_1 == 0x12) {
      DAT_20000720 = 0xffff;
      DAT_20000724 = 0xffff;
    }
    else if (param_1 == 0x15) {
      DAT_20000720 = 0xffff;
      DAT_20000724 = 0;
    }
    else if (param_1 == 0x16) {
      DAT_20000720 = 0;
      DAT_20000724 = 0xffff;
    }
  }
  else {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 10000) {
      DAT_20000720 = 0;
      iVar1 = FUN_0800fd1e();
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x2d000) && (iVar1 = FUN_0800fd26(), 0x2d000 < iVar1)) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 == 0) {
          DAT_20000724 = 0;
          goto LAB_08015a22;
        }
      }
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_20000724 = (iVar1 * 800) / 1000 + 100;
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 20000) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        DAT_20000720 = (iVar1 * 0x41) / 1000;
        DAT_20000724 = 0xffff;
      }
      else {
        DAT_20000720 = 0xffff;
        DAT_20000724 = 0xffff;
      }
    }
  }
LAB_08015a22:
  uVar2 = DAT_20000724;
  if (DAT_20000724 < DAT_20000720) {
    uVar2 = DAT_20000720;
  }
  uVar3 = ((DAT_200031df + 0x32) * 2000) / 0x96;
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  DAT_40000840 = (short)uVar2;
  return;
LAB_08015a18:
  DAT_20000720 = 0;
  DAT_20000724 = 0;
  goto LAB_08015a22;
}



/* ENTRY 0x08015a5c : FUN_08015a5c */

void FUN_08015a5c(void)

{
  int iVar1;
  
  if (DAT_200006bc == 0x14) {
    DAT_20000849 = 0;
    DAT_200006bc = 0;
  }
  else if (DAT_200006bc == 0x12) {
    DAT_20000849 = 1;
    DAT_200006bc = 0;
  }
  else if (DAT_200006bc == 0x13) {
    DAT_20000849 = 4;
    DAT_200006bc = 0;
  }
  iVar1 = FUN_0800e524();
  if (iVar1 != 0) {
    switch(DAT_20000849) {
    case 0:
      DAT_20000849 = DAT_20000849 + 1;
      DAT_200006b8 = 0x12;
      break;
    case 1:
      DAT_20000849 = DAT_20000849 + 1;
      DAT_200006b8 = 0x13;
      break;
    case 2:
      DAT_20000849 = DAT_20000849 + 1;
      DAT_200006b8 = 0x12;
      break;
    case 3:
      DAT_20000849 = DAT_20000849 + 1;
      DAT_200006b8 = 0x13;
      break;
    case 4:
      DAT_20000849 = 1;
      DAT_200006b8 = 0x12;
    }
    FUN_0800e2b2(1);
    FUN_08022172(3);
  }
  if (DAT_200006d3 == '\0') {
    FUN_08015826((&DAT_20000718)[DAT_20000849]);
  }
  else {
    FUN_08015826(DAT_20000719);
    DAT_200006b8 = 0x12;
  }
  return;
}



/* ENTRY 0x08015b9a : FUN_08015b9a */

void FUN_08015b9a(void)

{
  DAT_2000084a = (ushort)(((uint)DAT_2000084a * 9 + ((int)(uint)diag_lightad >> 4)) / 10);
  if (DAT_200005f4 == '\0') {
    DAT_200006c0 = '\0';
  }
  else if (DAT_200006c0 == '\0') {
    if (DAT_2000084a < 0x44c) {
      DAT_200006c1 = DAT_200006c0;
      DAT_200006c0 = '\x01';
    }
  }
  else if ((DAT_200006c0 == '\x01') && (0x514 < DAT_2000084a)) {
    DAT_200006c1 = DAT_200006c0;
    DAT_200006c0 = '\0';
  }
  return;
}



/* ENTRY 0x08015c0a : FUN_08015c0a */

void FUN_08015c0a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x08015c4e : FUN_08015c4e */

undefined2 FUN_08015c4e(void)

{
  DAT_20000854 = DAT_20000854 + 1;
  if ((ushort)((ushort)DAT_20000818 * 4) <= DAT_20000854) {
    DAT_20000854 = 0;
  }
  return (&DAT_20000728)[(int)(uint)DAT_20000854 >> 2];
}



/* ENTRY 0x08015c7e : FUN_08015c7e */

void FUN_08015c7e(void)

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
  iVar4 = FUN_0800fd1e();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_20003151 != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_20003151 == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_20003151 != '\0')) {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = 2;
  }
  if (DAT_2000086a < 0x32) {
    DAT_2000086a = DAT_2000086a + 1;
    if (diag_cartstep == '\b') {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003baa)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003baa)[uVar5] = 0;
      }
    }
    FUN_0801730c(&DAT_20003baa);
  }
  else {
    if (diag_cartstep == '\0') {
      bVar1 = false;
      bVar8 = false;
    }
    else if (diag_cartstep == '\b') {
      bVar1 = false;
      bVar8 = false;
      DAT_2000086a = 0;
    }
    else {
      if ((((ushort)DAT_200006a8 & 3) == 0) &&
         (((1000 < diag_VehicleSpeed && (diag_speedAcc < -0x14)) ||
          ((diag_VehicleSpeed < -1000 && (0x14 < diag_speedAcc)))))) {
        DAT_20000858 = 0x14;
        DAT_2000085c = 0;
      }
      DAT_20000860 = DAT_20000860 + 1;
      if (DAT_20000860 == (DAT_20000860 / 2) * 2) {
        if (DAT_20000864 == 0) {
          DAT_20000864 = 1;
        }
        else {
          DAT_20000864 = 0;
        }
      }
      if ((DAT_2000085c < DAT_20000858) && (DAT_200031de == '\0')) {
        bVar1 = true;
        bVar8 = true;
        iVar6 = DAT_20000858 - (DAT_2000085c + 1);
        DAT_20000868 = 0;
        DAT_2000085c = DAT_2000085c + 1;
      }
      else {
        DAT_2000085c = 0;
        DAT_20000858 = 0;
        iVar6 = 4;
        if (DAT_200031de == '\x01') {
          if (DAT_20000864 == 1) {
            bVar8 = iVar7 != 1;
            if (iVar7 != 2) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            bVar8 = false;
          }
          DAT_20000868 = 0;
        }
        else if ((DAT_200006b8 == 0x12) || ((DAT_200006b8 == 0x14 && (DAT_200006c0 == '\x01')))) {
          bVar1 = true;
          bVar8 = true;
          if (iVar7 == 1) {
            DAT_20000868 = DAT_20000868 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_0802815e)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000868 = DAT_20000868 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_08028170)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000868 = 0;
          }
        }
        else {
          bVar1 = false;
          bVar8 = false;
          if (iVar7 == 1) {
            DAT_20000868 = DAT_20000868 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_0802815e)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000868 = DAT_20000868 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_08028170)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000868 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003baa)[uVar5] = 0;
    }
    if (DAT_20003151 == '\0') {
      if (DAT_20000868 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003bab)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003baa = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003bab = DAT_20003baa;
        }
        else if (bVar8) {
          DAT_20003bb9 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003bba = DAT_20003bb9;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003baa)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000819)[uVar5] * 0x14) / 0x28);
          (&DAT_20003bab)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000819)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08015c4e();
        (&DAT_20003baa)[extraout_r3 * 3] = 0;
        (&DAT_20003bab)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003bac)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_200031dc == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08015c4e();
        bVar3 = DAT_200031e6;
        bVar2 = DAT_200031e4;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_200031e4,(ushort)DAT_200031e5);
        (&DAT_20003baa)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003bab)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003bac)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003baa)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003baa)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003bab)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003bab)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003bac)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003bac)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_200031dc == 1) {
      FUN_08015c0a(&local_28,(ushort)DAT_200006a8);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_08015c4e();
        (&DAT_20003baa)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003bab)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003bac)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_08015c0a(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006a8 * -10 & 0xffff);
        (&DAT_20003baa)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003bab)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003bac)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_0801730c(&DAT_20003baa);
  }
  return;
}



/* ENTRY 0x0801626c : FUN_0801626c */

void FUN_0801626c(void)

{
  int iVar1;
  
  DAT_200006a8 = DAT_200006a8 + 1;
  FUN_08015c7e();
  FUN_08015b9a();
  FUN_08015a5c();
  FUN_080151c4();
  if ((DAT_20003150 & 1) != 0) {
    if ((DAT_2000082b == '\0') && (iVar1 = FUN_0800e952(DAT_20003100 / 10 & 0xffff), iVar1 == 1)) {
      FUN_0800e884();
    }
    DAT_2000082b = '\x01';
    DAT_20003150 = DAT_20003150 & 0xfe;
  }
  return;
}



/* ENTRY 0x080162cc : FUN_080162cc */

void FUN_080162cc(void)

{
  int iVar1;
  
  if (DAT_200006d2 < 5) {
    if (diag_TotalVoltage < 0x2454) {
      DAT_200006d2 = 2;
    }
    else {
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 500) {
          DAT_200006d2 = 3;
          return;
        }
      }
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if ((500 < iVar1) && (diag_TotalCurrent < -0x32)) {
          DAT_200006d2 = 4;
          return;
        }
      }
      DAT_200006d2 = diag_BatState;
    }
  }
  return;
}



/* ENTRY 0x08016374 : FUN_08016374 */

void FUN_08016374(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = diag_VehicleSpeed;
  if ((int)diag_VehicleSpeed < 0) {
    uVar4 = -diag_VehicleSpeed;
  }
  if (DAT_20003126 == 0) {
    if (DAT_20003127 == 0) {
      if ((DAT_2000311f & 0x70) == 0) {
        if ((DAT_20003144 < 0xc9) || (DAT_20003144 == 0xe0)) {
          if (uVar4 == 0) {
            if ((DAT_20003123 == '\0') || (3 < param_1 % 0xc)) {
              if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              iVar3 = FUN_080208b2();
              if ((iVar3 < 7) && (!bVar1)) {
                DAT_20000870 = (byte)iVar3;
              }
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                if (((DAT_20000870 != 0) || (param_1 % 10 < 5)) || (bVar1)) {
                  (&DAT_20000823)[uVar4] = (&DAT_080281e2)[uVar4];
                  if ((int)(7 - (uint)DAT_20000870 % 7) <= (int)uVar4) {
                    (&DAT_20000823)[uVar4] = (&DAT_20000823)[uVar4] | 0x18;
                  }
                }
                else {
                  (&DAT_20000823)[uVar4] = 0;
                }
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] = (&DAT_0802826a)[uVar4];
              }
            }
          }
          else {
            bVar1 = (DAT_20003213 & 1) != 0;
            if (bVar1) {
              uVar4 = (uVar4 * 0x3e) / 100;
            }
            for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
              (&DAT_20000823)[uVar2] =
                   (&DAT_08028182)[uVar2 + ((uVar4 / 10000) % 10) * 8] |
                   (&DAT_08028182)[uVar2 + ((uVar4 / 1000) % 10) * 8] << 4;
            }
            DAT_2000082a = bVar1 << param_1 % 9;
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            if (DAT_20003144 == 0xe2) {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] = 0;
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] = (&DAT_080281d2)[uVar4];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003121 == 0) {
              if (DAT_20003123 == '\0') {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  uVar2 = (byte)DAT_20003144 - 200 & 0xff;
                  (&DAT_20000823)[uVar4] =
                       (&DAT_08028182)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                       (&DAT_08028182)[uVar4 + (uVar2 % 10) * 8] << 4;
                }
              }
              else {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  (&DAT_20000823)[uVar4] = (&DAT_0802826a)[uVar4];
                }
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] =
                     (&DAT_080281da)[uVar4] |
                     (&DAT_08028182)[uVar4 + ((uint)DAT_20003121 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003123 == '\0') {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              uVar2 = (byte)DAT_20003144 - 200 & 0xff;
              (&DAT_20000823)[uVar4] =
                   (&DAT_08028182)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                   (&DAT_08028182)[uVar4 + (uVar2 % 10) * 8] << 4;
            }
          }
          else {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              (&DAT_20000823)[uVar4] = (&DAT_0802826a)[uVar4];
            }
          }
          if ((param_1 % 0x1e == 3) &&
             (((DAT_200030ce & 0x200) == 0x200 || ((DAT_200030ce & 0x400) == 0x400)))) {
            FUN_0800e2b2(3);
          }
        }
      }
      else {
        for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
          (&DAT_20000823)[uVar4] =
               (&DAT_08028182)[uVar4 + ((DAT_20003120 / 10) % 10) * 8] |
               (&DAT_08028182)[uVar4 + ((uint)DAT_20003120 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar4 = DAT_20003127 - 1 & 0xff;
      if (5 < uVar4) {
        uVar4 = 5;
      }
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_20000823)[uVar2] = (&UNK_0802823a)[uVar2 + uVar4 * 8];
      }
      DAT_20003127 = DAT_20003127 + 1;
      if (0x14 < DAT_20003127) {
        DAT_20003127 = 0;
      }
    }
  }
  else {
    uVar4 = DAT_20003126 - 1 & 0xff;
    if (9 < uVar4) {
      uVar4 = 9;
    }
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20000823)[uVar2] = (&UNK_080281ea)[uVar2 + uVar4 * 8];
    }
    DAT_20003126 = DAT_20003126 + 1;
    if (0x14 < DAT_20003126) {
      DAT_20003126 = 0;
    }
  }
  FUN_0801d4cc(&DAT_20000823);
  return;
}



/* ENTRY 0x0801678e : FUN_0801678e */

void FUN_0801678e(void)

{
  int iVar1;
  
  if (DAT_20000822 < 0x10) {
    DAT_20000822 = DAT_20000822 + 1;
  }
  if ((diag_MosTemp < 0x2e) && (0xe < DAT_20000822)) {
    if (diag_MosTemp < 0x28) {
      DAT_200006d1 = 0;
      DAT_20000820 = 0;
    }
  }
  else {
    DAT_200006d1 = 1;
    if (diag_cartstep == '\0') {
      DAT_20000820 = 4000;
    }
    else {
      DAT_20000820 = (diag_MosTemp + -0x2d) * 0x32 + 1000;
    }
    if (1999 < DAT_20000820) {
      DAT_20000820 = 1999;
    }
  }
  if ((((DAT_20000720 != 0) || (DAT_20000724 != 0)) && (DAT_20003152 == '\x01')) &&
     (diag_AgeModeflg != '\0')) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (10000 < iVar1) {
      DAT_20000820 = 1999;
    }
  }
  if (DAT_20000820 < 0x65) {
    FUN_080243ea(&DAT_40010c00,0x200);
  }
  else {
    FUN_080243e6(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x0801686c : FUN_0801686c */

void FUN_0801686c(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031ba == 1) {
    FUN_080243ea(&DAT_40011000,0x80);
  }
  else if (DAT_200005f4 == '\x01') {
    FUN_080243e6(&DAT_40011000,0x80);
  }
  FUN_0801678e();
  if ((DAT_200006ac == (DAT_200006ac / 0x14) * 0x14) && (DAT_200006c2 == '\x01')) {
    FUN_0800e2b2();
  }
  if (DAT_200006ac % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_2000082c == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0800e4cc(0), iVar1 != 0)) {
      DAT_2000082c = '\x01';
    }
  }
  else if (DAT_2000082c == '\x01') {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (2000 < iVar1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 10000) && (iVar1 = FUN_0800e4cc(0), iVar1 != 0)) {
        FUN_0800aeb0();
        FUN_0800e2b2(1);
        DAT_2000082c = '\x02';
      }
    }
  }
  if ((((((DAT_200005f5 == '\0') || (DAT_2000063c == '\0')) || (DAT_200006c2 == '\x01')) ||
       ((DAT_200006c6 == '\x01' || (DAT_200006c7 == '\x01')))) ||
      ((DAT_200006c4 == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     ((DAT_2000311f & 1) != 0)) {
    DAT_200005f4 = 0;
  }
  else {
    DAT_200005f4 = 1;
  }
  if (DAT_20003204 == 0) {
    DAT_200030e8 = 0;
  }
  if (DAT_200006ac % 6 == 2) {
    for (bVar3 = 0; DAT_20003144 = 0, bVar3 < 0x28; bVar3 = bVar3 + 1) {
      DAT_20000830 = DAT_20000830 + 1;
      uVar2 = DAT_20000830 % 0x28;
      DAT_20003144 = 0;
      if (uVar2 < 0x20) {
        if ((diag_allwarnbit >> uVar2 & 1) != 0) {
          if (DAT_20000830 % 0x140 < 0x118) {
            DAT_20003144 = (short)uVar2 + 0xc9;
          }
          break;
        }
      }
      else if (((int)(uint)DAT_200030d0 >> (uVar2 - 0x20 & 0xff) & 1U) != 0) {
        if (DAT_20000830 % 0x140 < 0x118) {
          DAT_20003144 = (short)uVar2 + 0xc9;
        }
        break;
      }
    }
  }
  DAT_20003130 = DAT_20003130 | diag_allwarnbit;
  FUN_08016374(DAT_200006ac);
  FUN_0801d6c4();
  FUN_080162cc();
  if ((DAT_2000314f != '\0') && (DAT_20003151 != '\0')) {
    FUN_0800e884();
    DAT_2000314f = '\0';
  }
  DAT_200006ac = DAT_200006ac + 1;
  return;
}



/* ENTRY 0x08016a98 : FUN_08016a98 */

void FUN_08016a98(void)

{
  return;
}



/* ENTRY 0x08016a9a : FUN_08016a9a */

void FUN_08016a9a(void)

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
  
  FUN_08024544(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_080242ac(&DAT_40010c00,&local_24);
  FUN_08024514(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_08025020(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_08024efe(&DAT_40000800,&local_20);
  FUN_08024f62(&DAT_40000800,8);
  FUN_080248b0(&DAT_40000800,1);
  FUN_0802490c(&DAT_40000800,1);
  FUN_0802491e(&DAT_40000800,1);
  return;
}



/* ENTRY 0x08016b2e : FUN_08016b2e */

void FUN_08016b2e(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(4,1);
  local_8 = 0x48030800;
  FUN_080242ac(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016bb4 : FUN_08016bb4 */

void FUN_08016bb4(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(0x3d,1);
  FUN_0802436c(0x300200,1);
  FUN_0801d510(7);
  DAT_20003126 = 1;
  FUN_0801d85a();
  FUN_0801dbc4();
  local_8 = 0x10010002;
  FUN_080242ac(&DAT_40011000,&local_8);
  FUN_08016b2e();
  DAT_20000698 = 0;
  local_8 = 0x10030004;
  FUN_080242ac(&DAT_40010c00,&local_8);
  FUN_08016a9a();
  return;
}



/* ENTRY 0x08016c20 : FUN_08016c20 */

void FUN_08016c20(void)

{
  int iVar1;
  
  iVar1 = FUN_0800e8fc();
  if (iVar1 == 0) {
    DAT_20003268 = 0x20220430;
    FUN_0801ad02(&DAT_200031c6);
    FUN_08015664();
  }
  else if (DAT_20003268 != 0x20220430) {
    DAT_20003268 = 0x20220430;
    FUN_0801ad02(&DAT_200031c6);
    FUN_08015664();
  }
  FUN_0801ad02(&DAT_200031c6);
  if (DAT_20003204 == 0) {
    DAT_200030ec = 30000;
  }
  else {
    if (DAT_20003204 < 0x3c) {
      DAT_20003204 = 0x3c;
    }
    if (0x3840 < DAT_20003204) {
      DAT_20003204 = 0x3840;
    }
    DAT_200030ec = (uint)DAT_20003204 * 0x32;
  }
  FUN_080153cc();
  DAT_20003b84 = DAT_20003182;
  FUN_0800abb8(&DAT_20003b84);
  FUN_0800adf2();
  DAT_2000063c = DAT_200031f4 == 0;
  DAT_200031de = 0;
  if ((((0x2f < DAT_200031f6) && (DAT_200031f6 < 0x3a)) && (0x2f < DAT_200031f7)) &&
     (((DAT_200031f7 < 0x3a && (0x2f < DAT_200031f8)) &&
      ((DAT_200031f8 < 0x3a && ((0x2f < DAT_200031f9 && (DAT_200031f9 < 0x3a)))))))) {
    DAT_20000971 = 1;
  }
  DAT_2000069c = (uint)DAT_200031d8;
  DAT_200005f5 = 1;
  FUN_0800fd34(((int)DAT_20003176 << 0xc) / 10);
  FUN_0800fd54(((int)DAT_20003178 << 0xc) / 10);
  FUN_0800fd76(DAT_20003212);
  DAT_20003104 = FUN_0800e9d4();
  if (((DAT_200031bc == (DAT_200031be ^ 0xffff)) && (-200 < (short)DAT_200031bc)) &&
     ((short)DAT_200031bc < 200)) {
    DAT_200002d4 = (int)(short)DAT_200031bc;
  }
  FUN_0801511c(DAT_200031b0);
  return;
}



/* ENTRY 0x08016dca : FUN_08016dca */

void FUN_08016dca(void)

{
  int iVar1;
  
  if (diag_AgeModeflg != '\0') {
    if (diag_AgeModeflg == '\x01') {
      if (((diag_MosTemp < 0x53) && (diag_MotorTemp < 0x7e)) && (0x2999 < diag_TotalVoltage)) {
        if (((DAT_20000836 == '\x05') || (0x2b5b < diag_TotalVoltage)) || (diag_BatState != '\x01'))
        {
          if (((byte)DAT_200030ce & 1) != 0) {
            DAT_20000836 = '\x05';
            DAT_20000838 = 0;
            DAT_2000083c = 0;
            FUN_0801447e(0);
          }
        }
        else {
          DAT_20000836 = '\x06';
          DAT_20000838 = 0;
          DAT_2000083c = 0;
          diag_AgeChgflg = 1;
          FUN_0801447e(0);
        }
      }
      else {
        DAT_20000836 = '\x05';
        DAT_20000838 = 0;
        DAT_2000083c = 0;
        FUN_0801447e(0);
        DAT_422101b0 = 0;
      }
      diag_AgeStepShow = DAT_20000836;
      switch(DAT_20000836) {
      case '\0':
        DAT_20000838 = 0;
        DAT_20000836 = '\x01';
        DAT_2000083c = 0;
        break;
      case '\x01':
        if (DAT_20003151 == '\x01') {
          iVar1 = FUN_0800fd1e();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000710 == 0)) {
            DAT_20000838 = 1;
            DAT_20000836 = '\x02';
            DAT_2000083c = 0;
            FUN_0801447e(4,1);
          }
        }
        DAT_200006d3 = 2;
        break;
      case '\x02':
        iVar1 = FUN_0800fd1e();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000710 == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_2000083c < 0xbb9)) ||
             (DAT_2000083c < 0x65)) {
            if (DAT_20000838 < 0x9c4) {
              DAT_20000838 = DAT_20000838 + 10;
              FUN_0801447e(4,(int)DAT_20000838);
            }
          }
          else {
            DAT_20000838 = 0;
            DAT_20000836 = '\x03';
            FUN_0801447e(0);
          }
        }
        else {
          DAT_20000838 = 0;
          DAT_20000836 = '\x01';
          FUN_0801447e(0);
        }
        DAT_200006d3 = 1;
        break;
      case '\x03':
        if (DAT_20003151 == '\x01') {
          iVar1 = FUN_0800fd1e();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000710 == 0)) {
            DAT_20000838 = 1;
            DAT_20000836 = '\x04';
            DAT_2000083c = 0;
            FUN_0801447e(0,1);
          }
        }
        DAT_200006d3 = 2;
        break;
      case '\x04':
        iVar1 = FUN_0800fd1e();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000714 == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_2000083c)) ||
             (2999 < DAT_2000083c)) {
            DAT_20000838 = 0;
            DAT_20000836 = '\x01';
            FUN_0801447e(0);
          }
          else if (DAT_20000838 < 30000) {
            DAT_20000838 = DAT_20000838 + 100;
            FUN_0801447e(0,(int)DAT_20000838);
          }
        }
        else {
          DAT_20000838 = 0;
          DAT_20000836 = '\x03';
          FUN_0801447e(0);
        }
        DAT_200006d3 = 2;
        break;
      case '\x05':
        break;
      case '\x06':
        if ((diag_TotalVoltage < 0x2ee1) && (diag_BatState != '\0')) {
          DAT_2000083c = 0;
        }
        else if (DAT_2000083c < 0x15) {
          DAT_2000083c = DAT_2000083c + 1;
        }
        else {
          DAT_20000838 = 0;
          DAT_20000836 = '\x01';
          diag_AgeChgflg = 0;
          FUN_0801447e(0);
        }
        DAT_200006d3 = 2;
      }
      DAT_2000083c = DAT_2000083c + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030e4 % 10 == 5) {
        FUN_0800e2b2(1);
      }
      DAT_200006d3 = 0;
      diag_AgeChgflg = 0;
      FUN_0801447e(0);
      DAT_20000836 = '\0';
    }
  }
  return;
}



/* ENTRY 0x08017256 : FUN_08017256 */

void FUN_08017256(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(4,1);
  local_8 = 0x10030800;
  FUN_080242ac(&DAT_40010800,&local_8);
  local_8 = 0x48031000;
  FUN_080242ac(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801729a : FUN_0801729a */

void FUN_0801729a(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(4,1);
  local_8 = 0x48032000;
  FUN_080242ac(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x080172c2 : FUN_080172c2 */

void FUN_080172c2(void)

{
  return;
}



/* ENTRY 0x08017300 : FUN_08017300 */

void FUN_08017300(void)

{
  FUN_08024544(0x10,1);
  return;
}



/* ENTRY 0x0801730c : FUN_0801730c */

void FUN_0801730c(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003bbc)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003bce)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x0801732a : FUN_0801732a */

undefined4 FUN_0801732a(void)

{
  return 0;
}



/* ENTRY 0x08017330 : FUN_08017330 */

void FUN_08017330(int param_1)

{
  uint uVar1;
  
  DAT_20000870 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000870 = DAT_20000870 + '\x01';
    }
    (&DAT_20003be0)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003be1)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003be2)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x0801739a : FUN_0801739a */

void FUN_0801739a(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x080173ba : FUN_080173ba */

void FUN_080173ba(int param_1)

{
  int iVar1;
  
  if ((DAT_20000874 % 0x226 == 200) && (DAT_200031c0 == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_08017400;
    }
    FUN_0800e2b2(3);
  }
LAB_08017400:
  if ((DAT_20000874 % 900 == 200) && (DAT_200031c0 == 0)) {
    if (param_1 < 0x2454) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (7000 < iVar1) {
        if (DAT_2000069c == 0) {
          DAT_200006a0 = 1;
          return;
        }
        DAT_200006a0 = 7;
        return;
      }
    }
    if (0x3264 < param_1) {
      if (DAT_2000069c == 0) {
        DAT_200006a0 = 5;
      }
      else {
        DAT_200006a0 = 8;
      }
    }
  }
  return;
}



/* ENTRY 0x0801746e : FUN_0801746e */

void FUN_0801746e(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  uVar2 = 0;
  FUN_08023b5e(local_30,0x14);
  FUN_08023b5e(local_44,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_30[uVar1] = 0;
    local_44[uVar1] = 0;
  }
  if (diag_BatState == '\x01') {
    uVar1 = 0x14;
    if (param_1 < 0x2454) {
      uVar1 = 0xe;
      uVar2 = 6 - DAT_20000918 % 7 & 0xff;
    }
    else if (param_1 < 0x2536) {
      uVar1 = 0xf;
      uVar2 = 5 - DAT_20000918 % 6 & 0xff;
    }
    else if (param_1 < 0x27fe) {
      uVar1 = 0x10;
      uVar2 = 4 - DAT_20000918 % 5 & 0xff;
    }
    else if (param_1 < 0x2ac6) {
      uVar1 = 0x11;
      uVar2 = 3 - (DAT_20000918 & 3);
    }
    else if (param_1 < 0x2d8e) {
      uVar1 = 0x12;
      uVar2 = 2 - DAT_20000918 % 3 & 0xff;
    }
    else if (param_1 < 0x3056) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000918 & 1);
    }
    else if (param_1 < 0x3058) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000918 & 1);
    }
    else if (param_1 < 0x30a3) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000918 & 1);
    }
    else if (0x30a2 < param_1) {
      uVar2 = 0;
    }
    if (DAT_20000874 == uVar1 * (DAT_20000874 / uVar1)) {
      DAT_20000918 = DAT_20000918 + 1;
    }
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else if (param_1 < 0x2454) {
    if (DAT_20000874 % 0x32 < 0x1a) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    uVar4 = 0;
    uVar2 = 0;
    FUN_080173ba(param_1);
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
    if (DAT_20000874 % 0x32 < 0x1a) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 0xff;
      uVar4 = 0x7f;
    }
    uVar2 = 0;
    FUN_080173ba(param_1);
  }
  DAT_20000871 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_0801739a(uVar2,uVar3,uVar4,0,local_30);
    FUN_0801739a(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08017330(local_30,local_44);
  return;
}



/* ENTRY 0x08017724 : FUN_08017724 */

void FUN_08017724(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08023b5e(auStack_28,0x14);
  FUN_08023b5e(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_0801739a(cVar1,(&DAT_20003bf2)[(uVar2 + 6) * 3],(&DAT_20003bf3)[(uVar2 + 6) * 3],
                 (&DAT_20003bf4)[(uVar2 + 6) * 3],auStack_3c);
    FUN_0801739a(uVar2 & 0xff,(&DAT_20003bf2)[uVar2 * 3],(&DAT_20003bf3)[uVar2 * 3],
                 (&DAT_20003bf4)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_0801732a(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x080177a0 : FUN_080177a0 */

void FUN_080177a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_08017724();
  DAT_2000091e = DAT_2000091e + 1;
  if (DAT_2000091e < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000922 = DAT_20000923 + (char)iVar1;
          if (0x1f < DAT_20000922) {
            DAT_20000922 = DAT_20000922 - 0x20;
          }
          (&DAT_20003bf2)[iVar1 * 3] = (&DAT_08028272)[(uint)DAT_20000922 * 3];
          (&DAT_20003bf3)[iVar1 * 3] = (&DAT_08028273)[(uint)DAT_20000922 * 3];
          (&DAT_20003bf4)[iVar1 * 3] = (&DAT_08028274)[(uint)DAT_20000922 * 3];
        }
        bVar4 = DAT_20000923 < '\0';
        DAT_20000923 = DAT_20000923 + -1;
        if (bVar4) {
          DAT_20000923 = '\x1f';
        }
      }
      else {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000922 = DAT_20000921 + (char)iVar1;
          if (0x1f < DAT_20000922) {
            DAT_20000922 = DAT_20000922 - 0x20;
          }
          (&DAT_20003bf2)[iVar1 * 3] = (&DAT_08028272)[(uint)DAT_20000922 * 3];
          (&DAT_20003bf3)[iVar1 * 3] = (&DAT_08028273)[(uint)DAT_20000922 * 3];
          (&DAT_20003bf4)[iVar1 * 3] = (&DAT_08028274)[(uint)DAT_20000922 * 3];
        }
        bVar4 = 0x1f < DAT_20000921;
        DAT_20000921 = DAT_20000921 + 1;
        if (bVar4) {
          DAT_20000921 = 0;
        }
      }
    }
  }
  else if (DAT_2000091e < 0x640) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      switch(DAT_2000091c) {
      case 0:
        if (DAT_200008ef == -1) {
          DAT_2000091c = 1;
        }
        else {
          DAT_200008ef = DAT_200008ef + '\x11';
        }
        break;
      case 1:
        if (DAT_200008ee == '\0') {
          DAT_2000091c = 2;
        }
        else {
          DAT_200008ee = DAT_200008ee + -0x11;
        }
        break;
      case 2:
        if (DAT_200008f0 == -1) {
          DAT_2000091c = 3;
        }
        else {
          DAT_200008f0 = DAT_200008f0 + '\x11';
        }
        break;
      case 3:
        if (DAT_200008ef == '\0') {
          DAT_2000091c = 4;
        }
        else {
          DAT_200008ef = DAT_200008ef + -0x11;
        }
        break;
      case 4:
        if (DAT_200008ee == -1) {
          DAT_2000091c = 5;
        }
        else {
          DAT_200008ee = DAT_200008ee + '\x11';
        }
        break;
      case 5:
        if (DAT_200008f0 == '\0') {
          DAT_2000091c = 0;
        }
        else {
          DAT_200008f0 = DAT_200008f0 + -0x11;
        }
      }
      for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        (&DAT_20003bf2)[iVar1 * 3] = DAT_200008ee;
        (&DAT_20003bf3)[iVar1 * 3] = DAT_200008ef;
        (&DAT_20003bf4)[iVar1 * 3] = DAT_200008f0;
      }
    }
  }
  else if (DAT_2000091e < 0xa8c) {
    if (DAT_20000920 == '\0') {
      DAT_20000920 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003c16)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c17)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c18)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003c16)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003c16)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003c16)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003c16)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003c16)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003c16)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08028272)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c17)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08028273)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c18)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08028274)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_20000926 = DAT_20000924 + (short)iVar1;
      if (0xdf < DAT_20000926) {
        DAT_20000926 = DAT_20000926 + -0xe0;
      }
      (&DAT_20003bf2)[iVar1 * 3] = (&DAT_20003c16)[DAT_20000926 * 3];
      (&DAT_20003bf3)[iVar1 * 3] = (&DAT_20003c17)[DAT_20000926 * 3];
      (&DAT_20003bf4)[iVar1 * 3] = (&DAT_20003c18)[DAT_20000926 * 3];
    }
    if (param_1 == (param_2 + 5) * (param_1 / (param_2 + 5))) {
      if (bVar4) {
        DAT_20000924 = DAT_20000924 + -1;
        if (DAT_20000924 < 1) {
          DAT_20000924 = 0xdf;
        }
      }
      else {
        DAT_20000924 = DAT_20000924 + 1;
        if (0xdf < DAT_20000924) {
          DAT_20000924 = 1;
        }
      }
    }
  }
  else if (DAT_2000091e < 0xdac) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      for (iVar2 = 0; iVar2 < 0xc; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
        DAT_20000929 = DAT_20000928 + (char)iVar2;
        if ('\v' < DAT_20000929) {
          DAT_20000929 = DAT_20000929 + -0xc;
        }
        (&DAT_20003bf2)[iVar2 * 3] = (&DAT_200008f1)[DAT_20000929 * 3];
        (&DAT_20003bf3)[iVar2 * 3] = (&DAT_200008f2)[DAT_20000929 * 3];
        (&DAT_20003bf4)[iVar2 * 3] = (&DAT_200008f3)[DAT_20000929 * 3];
      }
      if (bVar4) {
        if ((0 < iVar1) && (bVar4 = DAT_20000928 == '\0', DAT_20000928 = DAT_20000928 + -1, bVar4))
        {
          DAT_20000928 = '\v';
        }
      }
      else {
        bVar4 = '\v' < DAT_20000928;
        DAT_20000928 = DAT_20000928 + '\x01';
        if (bVar4) {
          DAT_20000928 = '\x01';
        }
      }
    }
  }
  else if (0xdac < DAT_2000091e) {
    DAT_2000091e = 0;
  }
  return;
}



/* ENTRY 0x08017f06 : FUN_08017f06 */

void FUN_08017f06(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  FUN_08023b5e(local_30,0x14);
  FUN_08023b5e(local_44,0x14);
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1 & 0xff) {
    local_30[uVar4] = 0;
    local_44[uVar4] = 0;
  }
  uVar4 = DAT_20000938 >> 0x1f;
  if (DAT_20000938 == ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_200031e4;
    uVar2 = (uint)DAT_200031e5;
    uVar3 = (uint)DAT_200031e6;
  }
  else if (DAT_20000938 + ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_200031e8;
    uVar2 = (uint)DAT_200031e9;
    uVar3 = (uint)DAT_200031ea;
  }
  else if (DAT_20000938 + ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_200031ec;
    uVar2 = (uint)DAT_200031ed;
    uVar3 = (uint)DAT_200031ee;
  }
  else {
    uVar4 = (uint)DAT_200031f0;
    uVar2 = (uint)DAT_200031f1;
    uVar3 = (uint)DAT_200031f2;
  }
  if (DAT_20000934 % 0x18 < 0xc) {
    uVar4 = (int)(uVar4 * (DAT_20000934 % 0x18)) / 0x18;
    uVar2 = (int)(uVar2 * (DAT_20000934 % 0x18)) / 0x18;
    uVar3 = (int)(uVar3 * (DAT_20000934 % 0x18)) / 0x18;
  }
  else {
    uVar4 = uVar4 - (int)(uVar4 * (DAT_20000934 % 0x18)) / 0x18;
    uVar2 = uVar2 - (int)(uVar2 * (DAT_20000934 % 0x18)) / 0x18;
    uVar3 = uVar3 - (int)(uVar3 * (DAT_20000934 % 0x18)) / 0x18;
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0801739a(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_0801739a(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_20000934 == (DAT_20000934 / 0x18) * 0x18) {
    DAT_20000938 = DAT_20000938 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_20000934 = DAT_20000934 + 1;
    FUN_0801732a(local_30,local_44);
  }
  else {
    DAT_20000934 = DAT_20000934 + 1;
    FUN_0801732a(local_44,local_30);
  }
  return;
}



/* ENTRY 0x080180ec : FUN_080180ec */

void FUN_080180ec(int param_1,int param_2)

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
  FUN_08023b5e(auStack_40,0x14);
  FUN_08023b5e(auStack_54,0x14);
  iVar5 = 0;
  iVar8 = 0;
  for (cVar4 = '\0'; cVar4 < '\x06'; cVar4 = cVar4 + '\x01') {
    FUN_0801739a(cVar2,(&DAT_20003bf2)[iVar8 * 3],(&DAT_20003bf3)[iVar8 * 3],
                 (&DAT_20003bf4)[iVar8 * 3],auStack_54);
    FUN_0801739a(cVar2,(&DAT_20003bf2)[iVar5 * 3],(&DAT_20003bf3)[iVar5 * 3],
                 (&DAT_20003bf4)[iVar5 * 3],auStack_40);
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
  FUN_0801732a(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_2000092f = DAT_2000092e + (char)iVar5;
      if ('\v' < DAT_2000092f) {
        DAT_2000092f = DAT_2000092f + -0xc;
      }
      (&DAT_20003bf2)[iVar5 * 3] = (&DAT_20003eda)[DAT_2000092f * 3];
      (&DAT_20003bf3)[iVar5 * 3] = (&DAT_20003edb)[DAT_2000092f * 3];
      (&DAT_20003bf4)[iVar5 * 3] = (&DAT_20003edc)[DAT_2000092f * 3];
    }
    bVar1 = '\v' < DAT_2000092e;
    DAT_2000092e = DAT_2000092e + '\x01';
    if (bVar1) {
      DAT_2000092e = '\x01';
    }
  }
  if (DAT_20000930 < 500) {
    DAT_20003eda = DAT_200031e4;
    DAT_20003edb = DAT_200031e5;
    DAT_20003edc = DAT_200031e6;
    DAT_20003edd = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
    DAT_20003ee4 = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
    DAT_20003ee5 = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
    DAT_20003ee6 = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
    DAT_20003ee7 = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
    DAT_20003ee8 = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
    DAT_20003ee9 = (undefined1)(((uint)DAT_200031e4 * 5) / 100);
    DAT_20003eea = (undefined1)(((uint)DAT_200031e5 * 5) / 100);
    DAT_20003eeb = (undefined1)(((uint)DAT_200031e6 * 5) / 100);
    DAT_20000930 = DAT_20000930 + 1;
  }
  else if ((ushort)(DAT_20000930 + 1) < 1000) {
    DAT_20003eda = DAT_200031e8;
    DAT_20003edb = DAT_200031e9;
    DAT_20003edc = DAT_200031ea;
    DAT_20003edd = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
    DAT_20003ee4 = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
    DAT_20003ee5 = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
    DAT_20003ee6 = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
    DAT_20003ee7 = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
    DAT_20003ee8 = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
    DAT_20003ee9 = (undefined1)(((uint)DAT_200031e8 * 5) / 100);
    DAT_20003eea = (undefined1)(((uint)DAT_200031e9 * 5) / 100);
    DAT_20003eeb = (undefined1)(((uint)DAT_200031ea * 5) / 100);
    DAT_20000930 = DAT_20000930 + 2;
  }
  else if ((ushort)(DAT_20000930 + 2) < 0x5dc) {
    DAT_20003eda = DAT_200031ec;
    DAT_20003edb = DAT_200031ed;
    DAT_20003edc = DAT_200031ee;
    DAT_20003edd = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
    DAT_20003ee4 = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
    DAT_20003ee5 = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
    DAT_20003ee6 = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
    DAT_20003ee7 = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
    DAT_20003ee8 = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
    DAT_20003ee9 = (undefined1)(((uint)DAT_200031ec * 5) / 100);
    DAT_20003eea = (undefined1)(((uint)DAT_200031ed * 5) / 100);
    DAT_20003eeb = (undefined1)(((uint)DAT_200031ee * 5) / 100);
    DAT_20000930 = DAT_20000930 + 3;
  }
  else {
    uVar3 = DAT_20000930 + 4;
    if ((ushort)(DAT_20000930 + 3) < 2000) {
      DAT_20003eda = DAT_200031f0;
      DAT_20003edb = DAT_200031f1;
      DAT_20003edc = DAT_200031f2;
      DAT_20003edd = (undefined1)(((uint)DAT_200031f0 * 0x50) / 100);
      DAT_20003ede = (undefined1)(((uint)DAT_200031f1 * 0x50) / 100);
      DAT_20003edf = (undefined1)(((uint)DAT_200031f2 * 0x50) / 100);
      DAT_20003ee0 = (undefined1)(((uint)DAT_200031f0 * 0x37) / 100);
      DAT_20003ee1 = (undefined1)(((uint)DAT_200031f1 * 0x37) / 100);
      DAT_20003ee2 = (undefined1)(((uint)DAT_200031f2 * 0x37) / 100);
      DAT_20003ee3 = (undefined1)(((uint)DAT_200031f0 * 0x23) / 100);
      DAT_20003ee4 = (undefined1)(((uint)DAT_200031f1 * 0x23) / 100);
      DAT_20003ee5 = (undefined1)(((uint)DAT_200031f2 * 0x23) / 100);
      DAT_20003ee6 = (undefined1)(((uint)DAT_200031f0 * 0xf) / 100);
      DAT_20003ee7 = (undefined1)(((uint)DAT_200031f1 * 0xf) / 100);
      DAT_20003ee8 = (undefined1)(((uint)DAT_200031f2 * 0xf) / 100);
      DAT_20003ee9 = (undefined1)(((uint)DAT_200031f0 * 5) / 100);
      DAT_20003eea = (undefined1)(((uint)DAT_200031f1 * 5) / 100);
      DAT_20003eeb = (undefined1)(((uint)DAT_200031f2 * 5) / 100);
      DAT_20000930 = uVar3;
    }
    else {
      DAT_20000930 = DAT_20000930 + 5;
      if (2000 < uVar3) {
        DAT_20000930 = 0;
      }
    }
  }
  return;
}



/* ENTRY 0x080188da : FUN_080188da */

void FUN_080188da(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_08017724();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_2000092d = DAT_2000092c + (char)uVar6;
      if ('\v' < DAT_2000092d) {
        DAT_2000092d = DAT_2000092d + -0xc;
      }
      (&DAT_20003bf2)[uVar6 * 3] = (&DAT_20003eb6)[DAT_2000092d * 3];
      (&DAT_20003bf3)[uVar6 * 3] = (&DAT_20003eb7)[DAT_2000092d * 3];
      (&DAT_20003bf4)[uVar6 * 3] = (&DAT_20003eb8)[DAT_2000092d * 3];
    }
    if (bVar2) {
      bVar1 = DAT_2000092c == '\0';
      DAT_2000092c = DAT_2000092c + -1;
      if (bVar1) {
        DAT_2000092c = '\v';
      }
    }
    else {
      bVar1 = '\v' < DAT_2000092c;
      DAT_2000092c = DAT_2000092c + '\x01';
      if (bVar1) {
        DAT_2000092c = '\x01';
      }
    }
  }
  uVar4 = DAT_2000092a + 1;
  if (DAT_2000092a < 500) {
    DAT_2000092a = uVar4;
    if (bVar2) {
      DAT_20003ec5 = DAT_200031e4;
      DAT_20003ec6 = DAT_200031e5;
      DAT_20003ec7 = DAT_200031e6;
      DAT_20003ec2 = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
      DAT_20003ec3 = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
      DAT_20003ec4 = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
      DAT_20003ebf = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
      DAT_20003ec0 = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
      DAT_20003ec1 = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
      DAT_20003ebc = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
      DAT_20003ebd = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
      DAT_20003ebe = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
      DAT_20003eb9 = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
      DAT_20003eba = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
      DAT_20003ebb = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
      DAT_20003eb6 = (byte)(((uint)DAT_200031e4 * 5) / 100);
      DAT_20003eb7 = (byte)(((uint)DAT_200031e5 * 5) / 100);
      DAT_20003eb8 = (byte)(((uint)DAT_200031e6 * 5) / 100);
    }
    else {
      DAT_20003eb9 = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
      DAT_20003eba = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
      DAT_20003ebb = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
      DAT_20003ebc = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
      DAT_20003ebd = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
      DAT_20003ebe = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
      DAT_20003ebf = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
      DAT_20003ec0 = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
      DAT_20003ec1 = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
      DAT_20003ec2 = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
      DAT_20003ec3 = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
      DAT_20003ec4 = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
      DAT_20003ec5 = (byte)(((uint)DAT_200031e4 * 5) / 100);
      DAT_20003ec6 = (byte)(((uint)DAT_200031e5 * 5) / 100);
      DAT_20003ec7 = (byte)(((uint)DAT_200031e6 * 5) / 100);
      DAT_20003eb8 = DAT_200031e6;
      DAT_20003eb7 = DAT_200031e5;
      DAT_20003eb6 = DAT_200031e4;
    }
  }
  else {
    uVar5 = DAT_2000092a + 2;
    if (uVar4 < 1000) {
      DAT_2000092a = uVar5;
      if (bVar2) {
        DAT_20003ec5 = DAT_200031e8;
        DAT_20003ec6 = DAT_200031e9;
        DAT_20003ec7 = DAT_200031ea;
        DAT_20003ec2 = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
        DAT_20003ec3 = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
        DAT_20003ec4 = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
        DAT_20003ebf = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
        DAT_20003ec0 = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
        DAT_20003ec1 = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
        DAT_20003ebc = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
        DAT_20003ebd = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
        DAT_20003ebe = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
        DAT_20003eb9 = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
        DAT_20003eba = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
        DAT_20003ebb = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
        DAT_20003eb6 = (byte)(((uint)DAT_200031e8 * 5) / 100);
        DAT_20003eb7 = (byte)(((uint)DAT_200031e9 * 5) / 100);
        DAT_20003eb8 = (byte)(((uint)DAT_200031ea * 5) / 100);
      }
      else {
        DAT_20003eb9 = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
        DAT_20003eba = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
        DAT_20003ebb = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
        DAT_20003ebc = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
        DAT_20003ebd = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
        DAT_20003ebe = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
        DAT_20003ebf = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
        DAT_20003ec0 = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
        DAT_20003ec1 = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
        DAT_20003ec2 = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
        DAT_20003ec3 = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
        DAT_20003ec4 = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
        DAT_20003ec5 = (byte)(((uint)DAT_200031e8 * 5) / 100);
        DAT_20003ec6 = (byte)(((uint)DAT_200031e9 * 5) / 100);
        DAT_20003ec7 = (byte)(((uint)DAT_200031ea * 5) / 100);
        DAT_20003eb8 = DAT_200031ea;
        DAT_20003eb7 = DAT_200031e9;
        DAT_20003eb6 = DAT_200031e8;
      }
    }
    else {
      uVar4 = DAT_2000092a + 3;
      if (uVar5 < 0x5dc) {
        DAT_2000092a = uVar4;
        if (bVar2) {
          DAT_20003ec5 = DAT_200031ec;
          DAT_20003ec6 = DAT_200031ed;
          DAT_20003ec7 = DAT_200031ee;
          DAT_20003ec2 = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
          DAT_20003ec3 = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
          DAT_20003ec4 = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
          DAT_20003ebf = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
          DAT_20003ec0 = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
          DAT_20003ec1 = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
          DAT_20003ebc = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
          DAT_20003ebd = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
          DAT_20003ebe = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
          DAT_20003eb9 = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
          DAT_20003eba = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
          DAT_20003ebb = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
          DAT_20003eb6 = (byte)(((uint)DAT_200031ec * 5) / 100);
          DAT_20003eb7 = (byte)(((uint)DAT_200031ed * 5) / 100);
          DAT_20003eb8 = (byte)(((uint)DAT_200031ee * 5) / 100);
        }
        else {
          DAT_20003eb9 = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
          DAT_20003eba = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
          DAT_20003ebb = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
          DAT_20003ebc = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
          DAT_20003ebd = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
          DAT_20003ebe = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
          DAT_20003ebf = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
          DAT_20003ec0 = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
          DAT_20003ec1 = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
          DAT_20003ec2 = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
          DAT_20003ec3 = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
          DAT_20003ec4 = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
          DAT_20003ec5 = (byte)(((uint)DAT_200031ec * 5) / 100);
          DAT_20003ec6 = (byte)(((uint)DAT_200031ed * 5) / 100);
          DAT_20003ec7 = (byte)(((uint)DAT_200031ee * 5) / 100);
          DAT_20003eb8 = DAT_200031ee;
          DAT_20003eb7 = DAT_200031ed;
          DAT_20003eb6 = DAT_200031ec;
        }
      }
      else {
        uVar5 = DAT_2000092a + 4;
        if (uVar4 < 2000) {
          DAT_2000092a = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20003ec5 = DAT_200031f0;
              DAT_20003ec6 = DAT_200031f1;
              DAT_20003ec7 = DAT_200031f2;
              DAT_20003ec2 = (undefined1)(((uint)DAT_200031f0 * 0x50) / 100);
              DAT_20003ec3 = (undefined1)(((uint)DAT_200031f1 * 0x50) / 100);
              DAT_20003ec4 = (undefined1)(((uint)DAT_200031f2 * 0x50) / 100);
              DAT_20003ebf = (undefined1)(((uint)DAT_200031f0 * 0x37) / 100);
              DAT_20003ec0 = (undefined1)(((uint)DAT_200031f1 * 0x37) / 100);
              DAT_20003ec1 = (undefined1)(((uint)DAT_200031f2 * 0x37) / 100);
              DAT_20003ebc = (undefined1)(((uint)DAT_200031f0 * 0x23) / 100);
              DAT_20003ebd = (undefined1)(((uint)DAT_200031f1 * 0x23) / 100);
              DAT_20003ebe = (undefined1)(((uint)DAT_200031f2 * 0x23) / 100);
              DAT_20003eb9 = (undefined1)(((uint)DAT_200031f0 * 0xf) / 100);
              DAT_20003eba = (undefined1)(((uint)DAT_200031f1 * 0xf) / 100);
              DAT_20003ebb = (undefined1)(((uint)DAT_200031f2 * 0xf) / 100);
              DAT_20003eb6 = (byte)(((uint)DAT_200031f0 * 5) / 100);
              DAT_20003eb7 = (byte)(((uint)DAT_200031f1 * 5) / 100);
              DAT_20003eb8 = (byte)(((uint)DAT_200031f2 * 5) / 100);
            }
          }
          else {
            DAT_20003eb6 = DAT_200031f0;
            DAT_20003eb7 = DAT_200031f1;
            DAT_20003eb8 = DAT_200031f2;
            DAT_20003eb9 = (undefined1)(((uint)DAT_200031f0 * 0x50) / 100);
            DAT_20003eba = (undefined1)(((uint)DAT_200031f1 * 0x50) / 100);
            DAT_20003ebb = (undefined1)(((uint)DAT_200031f2 * 0x50) / 100);
            DAT_20003ebc = (undefined1)(((uint)DAT_200031f0 * 0x37) / 100);
            DAT_20003ebd = (undefined1)(((uint)DAT_200031f1 * 0x37) / 100);
            DAT_20003ebe = (undefined1)(((uint)DAT_200031f2 * 0x37) / 100);
            DAT_20003ebf = (undefined1)(((uint)DAT_200031f0 * 0x23) / 100);
            DAT_20003ec0 = (undefined1)(((uint)DAT_200031f1 * 0x23) / 100);
            DAT_20003ec1 = (undefined1)(((uint)DAT_200031f2 * 0x23) / 100);
            DAT_20003ec2 = (undefined1)(((uint)DAT_200031f0 * 0xf) / 100);
            DAT_20003ec3 = (undefined1)(((uint)DAT_200031f1 * 0xf) / 100);
            DAT_20003ec4 = (undefined1)(((uint)DAT_200031f2 * 0xf) / 100);
            DAT_20003ec5 = (byte)(((uint)DAT_200031f0 * 5) / 100);
            DAT_20003ec6 = (byte)(((uint)DAT_200031f1 * 5) / 100);
            DAT_20003ec7 = (byte)(((uint)DAT_200031f2 * 5) / 100);
          }
        }
        else {
          DAT_2000092a = DAT_2000092a + 5;
          if (2000 < uVar5) {
            DAT_2000092a = 0;
          }
        }
      }
    }
  }
  return;
}



/* ENTRY 0x0801966a : FUN_0801966a */

void FUN_0801966a(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_080188da(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_080180ec(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_08017f06();
    }
  }
  else {
    FUN_080177a0(param_1,param_2);
  }
  return;
}



/* ENTRY 0x080196ac : FUN_080196ac */

void FUN_080196ac(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08023b5e(auStack_2c,0x14);
  FUN_08023b5e(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801739a(bVar1,0,0,0,auStack_2c);
    FUN_0801739a(bVar1,0,0,0,auStack_40);
  }
  if (DAT_20000874 % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801739a(bVar1,uVar2,0,0,auStack_2c);
    FUN_0801739a(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_0801732a(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x08019756 : FUN_08019756 */

undefined4 FUN_08019756(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08023b5e(local_1c,0x14);
  FUN_08023b5e(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_20003146 == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_0801732a(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_200031da == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_0801732a(local_1c,local_30);
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
    FUN_0801732a(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08019840 : FUN_08019840 */

undefined4 FUN_08019840(void)

{
  uint uVar1;
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  
  FUN_08023b5e(local_28,0x14);
  FUN_08023b5e(local_3c,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_28[uVar1] = 0;
    local_3c[uVar1] = 0;
  }
  return 0;
}



/* ENTRY 0x08019876 : FUN_08019876 */

void FUN_08019876(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023b5e(auStack_34,0x14);
  FUN_08023b5e(auStack_48,0x14);
  DAT_20000874 = DAT_20000874 + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_0801739a(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_0801739a(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_0801732a(auStack_34,auStack_48);
    }
    else {
      FUN_0801746e(diag_TotalVoltage);
    }
  }
  else if (DAT_20000878 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_080173ba(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_08019840();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080173ba(diag_TotalVoltage);
      }
    }
    else if (DAT_2000086c == 0) {
      iVar1 = FUN_08019756();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_080173ba(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_0801746e(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031b8 < iVar1 / 1000) {
            FUN_080196ac();
          }
          else {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            DAT_2000087a = (ushort)(iVar1 / 1000);
            if (0x28 < DAT_2000087a) {
              DAT_2000087a = 0x28;
            }
            DAT_2000087c = (int)((uint)DAT_200031b8 - (uint)DAT_2000087a) / 5;
            if (DAT_2000087c == 0) {
              DAT_2000087c = 1;
            }
            if (((DAT_200031dc != 0) && (DAT_200031dc != 1)) &&
               ((DAT_200031dc != 2 && (DAT_200031dc != 3)))) {
              DAT_200031dc = 0;
            }
            FUN_0801966a(DAT_20000874,DAT_2000087c,DAT_200031dc);
          }
        }
      }
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_2000086c = DAT_2000086c + -1;
      FUN_0801966a(DAT_20000874,(int)((uint)DAT_200031b8 - iVar1 / 1000) / 5,DAT_200031dc);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_080173ba(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x08019ad2 : FUN_08019ad2 */

void FUN_08019ad2(void)

{
  if (DAT_20000888 < 0x14) {
    DAT_20000888 = DAT_20000888 + 1;
    DAT_20000884 = ((int)(uint)DAT_200034b8 >> 4) * 100;
  }
  else {
    DAT_20000884 = (DAT_20000884 * 99 + ((int)(uint)DAT_200034b8 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x08019b1e : FUN_08019b1e */

void FUN_08019b1e(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023b5e(auStack_34,0x14);
  FUN_08023b5e(auStack_48,0x14);
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if ((iVar2 < 500) && (DAT_20003208 == 1)) {
    if (DAT_200008aa < 0x2ee) {
      DAT_200008ae = '\x01';
      DAT_200008aa = DAT_200008aa + 1;
    }
    else {
      DAT_200008ae = '\0';
      DAT_200008aa = 1000;
    }
  }
  else {
    DAT_200008ae = '\0';
    DAT_200008aa = 0;
  }
  bVar5 = DAT_20003208 == 1;
  do {
    if (!bVar5) goto code_r0x0801a36e;
    bVar5 = DAT_200008ae == '\0';
  } while (((!bVar5) || (bVar5 = DAT_20003146 == '\0', !bVar5)) ||
          (bVar5 = diag_AgeModeflg == '\0', !bVar5));
  DAT_20000878 = 1;
  DAT_200008a0 = (short)((int)(uint)DAT_200034b8 >> 4);
  if (DAT_200008a6 < 3) {
    iVar2 = (int)DAT_200008a0 - DAT_20000884 / 100;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_2000088e = (short)iVar2 + DAT_2000088e;
    DAT_200008a6 = DAT_200008a6 + 1;
  }
  else {
    DAT_200008a6 = 0;
    DAT_2000088a = DAT_2000088e / 3;
    DAT_2000088e = 0;
  }
  bVar5 = 2000 < DAT_200008a8;
  DAT_200008a8 = DAT_200008a8 + 1;
  if (bVar5) {
    DAT_200008a8 = 0;
  }
  if (DAT_2000088a < 0x4b) {
    bVar5 = 800 < DAT_200008ac;
    DAT_200008ac = DAT_200008ac + 1;
    if (bVar5) {
      DAT_200008ac = 0;
      DAT_200008af = '\0';
      DAT_20003152 = 0;
    }
  }
  else {
    DAT_200008ac = 0;
  }
  if ((DAT_2000088a < 0x82) && (DAT_200008af != '\x01')) {
    if (DAT_200008a4 < 500) {
      DAT_200008a4 = DAT_200008a4 + 1;
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_0801739a(uVar4 & 0xff,0,0,0,auStack_34);
        FUN_0801739a(uVar4 & 0xff,0,0,0,auStack_48);
      }
      if (DAT_200006a4 == (DAT_200006a4 / 5) * 5) {
        FUN_0801732a(auStack_34,auStack_48);
      }
    }
    else {
      DAT_200008a4 = 6000;
code_r0x0801a36e:
      DAT_20000878 = 0;
    }
  }
  else {
    DAT_200008af = '\x01';
    DAT_20003152 = 1;
    if (DAT_200008a7 < 200) {
      DAT_2000089c = DAT_2000089c + DAT_2000088a;
      DAT_200008a7 = DAT_200008a7 + 1;
    }
    else {
      DAT_200008a7 = 0;
      DAT_20000892 = (ushort)(DAT_2000089c / 200);
      DAT_2000089c = 0;
    }
    if ((uint)DAT_200008a8 == (DAT_200008a8 / 0xfa) * 0xfa) {
      uVar1 = DAT_20000892 + 0x50;
      if ((400 < DAT_2000088a) && (uVar1 = DAT_20000892 + 200, 900 < DAT_2000088a)) {
        uVar1 = DAT_20000892 + 400;
      }
      DAT_20000892 = uVar1;
      DAT_200008a2 = DAT_20000892 / 5;
    }
    DAT_200008a4 = 0;
    DAT_20000896 = DAT_2000088a / DAT_200008a2;
    if (6 < DAT_20000896) {
      DAT_20000896 = 6;
    }
    if (DAT_20003210 == 0) {
      DAT_200008b2 = DAT_200008b2 + 1;
      if (DAT_200008b2 < 25000) {
        if (DAT_200008b2 < 15000) {
          if (9999 < DAT_200008b2) {
            DAT_200008b0 = '\x01';
          }
        }
        else {
          DAT_200008b0 = '\x02';
        }
      }
      else {
        DAT_200008b2 = 0;
        DAT_200008b0 = '\0';
      }
    }
    else if (DAT_20003210 == 1) {
      DAT_200008b0 = '\0';
    }
    else if (DAT_20003210 == 2) {
      DAT_200008b0 = '\x01';
    }
    else if (DAT_20003210 == 3) {
      DAT_200008b0 = '\x02';
    }
    if (DAT_200008b0 == '\0') {
      if ((uint)DAT_20000898 < (uint)DAT_20000896 * 0x50) {
        DAT_20000898 = DAT_20000896 * 0x50;
      }
      else if (DAT_20000898 != 0) {
        DAT_20000898 = DAT_20000898 - 1;
      }
      if (DAT_200006a4 % 5 == 0) {
        for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
          if (5 < DAT_200008e6) {
            DAT_200008e6 = 0;
          }
          if (5 < DAT_200008e7) {
            DAT_200008e7 = 0;
          }
          uVar3 = (uint)DAT_200008e6;
          DAT_200008e6 = DAT_200008e6 + 1;
          DAT_200008e4 = DAT_200008e6;
          if ((int)uVar3 < (int)(6 - (uint)DAT_20000896)) {
            DAT_200008e4 = 0;
          }
          if (6 - DAT_20000898 / 0x50 == (uint)DAT_200008e6) {
            DAT_200008e4 = 1;
          }
          if ((int)uVar4 < 6) {
            FUN_0801739a(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b4),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b5),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b6),auStack_48);
            FUN_0801739a(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b4),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b5),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b6),auStack_34);
          }
        }
        DAT_200008e7 = 0;
        DAT_200008e6 = 0;
      }
    }
    else if (DAT_200008b0 == '\x01') {
      DAT_2000089a = (char)((int)((uint)DAT_20000896 * 100) >> 4);
      DAT_200008c9 = (undefined1)
                     ((int)((int)DAT_2000089a * (uint)(byte)(&DAT_200008c9)[(uint)DAT_200008ea * 3])
                     / 100);
      DAT_200008ca = (undefined1)
                     ((int)((int)DAT_2000089a * (uint)(byte)(&DAT_200008ca)[(uint)DAT_200008ea * 3])
                     / 100);
      DAT_200008cb = (undefined1)
                     ((int)((int)DAT_2000089a * (uint)(byte)(&DAT_200008cb)[(uint)DAT_200008ea * 3])
                     / 100);
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_0801739a(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_48);
        FUN_0801739a(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_34);
      }
      if ((DAT_200006a4 % 300 == 0) &&
         (bVar5 = 7 < DAT_200008ea, DAT_200008ea = DAT_200008ea + 1, bVar5)) {
        DAT_200008ea = 2;
      }
    }
    else if (DAT_200008b0 == '\x02') {
      if (DAT_200006a4 % 10 == 0) {
        if ((DAT_2000089a < 'd') && (DAT_200008eb == '\0')) {
          DAT_2000089a = DAT_2000089a + (char)DAT_20000896 * '\x02';
        }
        else if (('\0' < DAT_2000089a) && (DAT_200008eb == '\x01')) {
          DAT_2000089a = DAT_2000089a - (char)DAT_20000896;
        }
        if ((DAT_2000089b < 'd') && (DAT_200008ec == '\0')) {
          DAT_2000089b = DAT_2000089b + (char)DAT_20000896 * '\x02';
        }
        else if (('\0' < DAT_2000089b) && (DAT_200008ec == '\x01')) {
          DAT_2000089b = DAT_2000089b - (char)DAT_20000896;
        }
        if ((DAT_2000089b == 'd') && (DAT_2000089a == 'd')) {
          DAT_2000089b = DAT_2000089a;
          DAT_2000089a = '\0';
        }
        if (DAT_2000089a < 'd') {
          if (DAT_2000089a < '\x01') {
            DAT_200008eb = '\0';
            DAT_2000089a = '\0';
            bVar5 = 7 < DAT_200008e8;
            DAT_200008e8 = DAT_200008e8 + 1;
            if (bVar5) {
              DAT_200008e8 = 2;
            }
          }
        }
        else {
          DAT_200008eb = '\x01';
          DAT_2000089a = 'd';
        }
        if (DAT_2000089b < 'd') {
          if (DAT_2000089b < '\x01') {
            DAT_200008ec = '\0';
            DAT_2000089b = '\0';
            DAT_200008e9 = DAT_200008e8 + 1;
            if (7 < DAT_200008e9) {
              DAT_200008e9 = 2;
            }
          }
        }
        else {
          DAT_200008ec = '\x01';
          DAT_2000089b = 'd';
        }
        DAT_200008c9 = (undefined1)
                       ((int)((int)DAT_2000089a *
                             (uint)(byte)(&DAT_200008c9)[(uint)DAT_200008e8 * 3]) / 100);
        DAT_200008ca = (undefined1)
                       ((int)((int)DAT_2000089a *
                             (uint)(byte)(&DAT_200008ca)[(uint)DAT_200008e8 * 3]) / 100);
        DAT_200008cb = (undefined1)
                       ((int)((int)DAT_2000089a *
                             (uint)(byte)(&DAT_200008cb)[(uint)DAT_200008e8 * 3]) / 100);
        DAT_200008cc = (undefined1)
                       ((int)((int)DAT_2000089b *
                             (uint)(byte)(&DAT_200008c9)[(uint)DAT_200008e9 * 3]) / 100);
        DAT_200008cd = (undefined1)
                       ((int)((int)DAT_2000089b *
                             (uint)(byte)(&DAT_200008ca)[(uint)DAT_200008e9 * 3]) / 100);
        DAT_200008ce = (undefined1)
                       ((int)((int)DAT_2000089b *
                             (uint)(byte)(&DAT_200008cb)[(uint)DAT_200008e9 * 3]) / 100);
      }
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        if ((int)uVar4 < 6) {
          FUN_0801739a(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_48);
          FUN_0801739a(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_34);
        }
      }
    }
    if (DAT_200006a4 == (DAT_200006a4 / 5) * 5) {
      FUN_0801732a(auStack_34,auStack_48);
    }
  }
  return;
}



/* ENTRY 0x0801a3a0 : FUN_0801a3a0 */

void FUN_0801a3a0(void)

{
  FUN_08024230();
  FUN_080240c0(&DAT_0803d000);
  FUN_0802415c(&DAT_0803d000,0x55aaaa55);
  FUN_08024114();
  DAT_2000093c = 1;
  return;
}



/* ENTRY 0x0801a3c0 : FUN_0801a3c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a3c0(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_08024230();
    FUN_080240c0(&DAT_0803d000);
    FUN_08024114();
  }
  return;
}



/* ENTRY 0x0801a3da : FUN_0801a3da */

void FUN_0801a3da(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_08023a32(&DAT_2000095e);
  iVar3 = FUN_08023a32(&DAT_20000965);
  sVar1 = 0;
  uVar5 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003efe)[uVar5 * 0x14] = 0xaa;
    (&DAT_20003eff)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20003f00)[uVar5 * 0x14 + iVar4] = (&DAT_2000095e)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_2000095e)[iVar4] + sVar1;
    }
    (&DAT_20003f00)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20003f01)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_20000965)[iVar4];
      uVar6 = (byte)(&DAT_20000965)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20003f01)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_20003f0e)[uVar5 * 0x14] = 0xbb;
    (&DAT_20003f0f)[uVar5 * 0x14] = 0x14;
    (&DAT_20003f10)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20003f11)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_20000941)[uVar5] = 0x14;
    DAT_2000093f = (char)uVar5 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return;
}



/* ENTRY 0x0801a4f8 : FUN_0801a4f8 */

int FUN_0801a4f8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003efe)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003eff)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f00)[uVar2 * 0x14 + iVar1] = (&DAT_200031c6)[iVar1];
    }
    (&DAT_20003f0e)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f01)[uVar2 * 0x14 + iVar1] = (&DAT_200031c6)[iVar1];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x0801a594 : FUN_0801a594 */

byte FUN_0801a594(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f4e)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
    }
    (&DAT_20000948)[uVar3] = (char)param_2;
    DAT_20000946 = (char)uVar3 + 1U & 7;
    bVar1 = DAT_20000946;
    if (DAT_20000946 == DAT_20000947) {
      bVar1 = 1;
      DAT_20000945 = '\x01';
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* ENTRY 0x0801a5ec : FUN_0801a5ec */

undefined4
FUN_0801a5ec(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_20000945 == '\0') {
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
    uVar2 = DAT_20000946 & 7;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f4e)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a6ec : FUN_0801a6ec */

undefined4
FUN_0801a6ec(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003efe)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003eff)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f00)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20003f01)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20003f02)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f03)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f04)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f05)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f06)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f07)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f08)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f09)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f0a)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f0b)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f0c)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f0d)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f0e)[uVar1 * 0x14] = param_1;
    (&DAT_20003f0f)[uVar1 * 0x14] = 0x14;
    (&DAT_20003f10)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f11)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000941)[uVar1] = 0x14;
    DAT_2000093f = (char)uVar1 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a896 : FUN_0801a896 */

undefined4 FUN_0801a896(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003efe)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a8ee : FUN_0801a8ee */

undefined4
FUN_0801a8ee(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f4e)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003f4f)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f50)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f51)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f52)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f53)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f54)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f55)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f56)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f57)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f58)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f59)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f5a)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f5b)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f5c)[uVar1 * 0x14] = (char)param_9;
    (&DAT_20003f5d)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_20003f5e)[uVar1 * 0x14] = param_1;
    (&DAT_20003f5f)[uVar1 * 0x14] = param_2;
    (&DAT_20003f60)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f61)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000948)[uVar1] = 0x14;
    DAT_20000946 = (char)uVar1 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801aa54 : FUN_0801aa54 */

undefined4 FUN_0801aa54(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f4e)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f4f)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f50)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_20003f5e)[uVar2 * 0x14] = param_1;
    (&DAT_20003f5f)[uVar2 * 0x14] = param_2;
    (&DAT_20003f60)[uVar2 * 0x14] = 0x5a;
    (&DAT_20003f61)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801aaf6 : FUN_0801aaf6 */

undefined4 FUN_0801aaf6(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f4e)[uVar3 * 0x14] = 0xaa;
    (&DAT_20003f4f)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f50)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_20003f5e)[uVar3 * 0x14] = param_1;
    (&DAT_20003f5f)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_08021098(&DAT_20003f50 + uVar3 * 0x14,0x10);
    (&DAT_20003f60)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20003f61)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000948)[uVar3] = 0x14;
    DAT_20000946 = (char)uVar3 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801abb4 : FUN_0801abb4 */

undefined4 FUN_0801abb4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f4e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801ac0c : FUN_0801ac0c */

undefined4 FUN_0801ac0c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000951 & 3;
  if (DAT_20000950 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003fee)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000953)[uVar2] = 0x14;
    DAT_20000951 = (char)uVar2 + 1U & 3;
    if (DAT_20000951 == DAT_20000952) {
      DAT_20000950 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801ac64 : FUN_0801ac64 */

undefined4 FUN_0801ac64(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000958 & 3;
  if (DAT_20000957 != '\0') {
    return 0;
  }
  for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_2000403e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
  }
  (&DAT_2000095a)[uVar2] = 0x14;
  DAT_20000958 = (char)uVar2 + 1U & 3;
  if (DAT_20000958 == DAT_20000959) {
    DAT_20000957 = '\x01';
  }
  return 0;
}



/* ENTRY 0x0801ad02 : FUN_0801ad02 */

bool FUN_0801ad02(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0801ad3e:
      DAT_200031c0 = 1;
      DAT_20003208 = 0;
      if ((*(char *)(param_1 + 4) == '0') && (*(char *)(param_1 + 5) == '2')) {
        diag_BuscurLimit_set = 8000;
      }
      DAT_200006c2 = !bVar1;
      if (DAT_200006c2) {
        DAT_200030ce = DAT_200030ce | 0x800;
      }
      else {
        DAT_200030ce = DAT_200030ce & 0xf7ff;
      }
      return !DAT_200006c2;
    }
    if ((("KSSA09"[uVar2] != '\0') && ("KSSA01"[uVar2] != '\0')) &&
       ((*(byte *)(param_1 + uVar2) < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA09"[uVar2] < *(byte *)(param_1 + uVar2))))) {
      bVar1 = false;
      goto code_r0x0801ad3e;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0801ad8e : FUN_0801ad8e */

undefined8 FUN_0801ad8e(int param_1,int param_2)

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
    iVar7 = (int)DAT_2000062e;
  }
  for (uVar6 = 0; uVar6 < 6; uVar6 = uVar6 + 1 & 0xff) {
    if ((&DAT_2000320a)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_0801ade8;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_200031b2 = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_200031b2;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_200031b4 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_200031b4;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_200031b6 = uVar1;
  }
  uVar1 = DAT_200031b6;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_200031b8 = (short)iVar5;
  }
  sVar4 = DAT_200031b8;
  FUN_0800e2b2(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0801a6ec(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_0800adf2();
LAB_0801ade8:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x0801af0c : FUN_0801af0c */

undefined4 FUN_0801af0c(int param_1)

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
  
  if (DAT_20000970 == '\0') {
    uVar6 = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xb) - 0x30;
    local_c = (undefined1  [2])CONCAT11(bVar1,DAT_2000096a);
    bVar2 = *(char *)(param_1 + 0xd) - 0x30;
    bVar3 = *(char *)(param_1 + 0xf) - 0x30;
    local_8 = (uint)CONCAT11(bVar3,DAT_2000096e);
    uVar7 = (CONCAT12(DAT_2000096c,local_c) & 0xff) + (uint)bVar1 + (uint)DAT_2000096c + (uint)bVar2
            + (local_8 & 0xff) + (uint)bVar3;
    bVar4 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    uVar7 = (uint)bVar4 + (uint)bVar1 + (uint)DAT_2000096c + (uint)bVar2 + (uint)DAT_2000096e +
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



/* ENTRY 0x0801b022 : FUN_0801b022 */

void FUN_0801b022(char *param_1,int param_2)

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
        (&DAT_2000408e)[local_14] = param_1[local_14];
        local_14 = local_14 + 1 & 0xff;
      }
      return;
    }
    bVar10 = *param_1 == -0x56;
  } while ((!bVar10) || (bVar10 = param_1[1] == 'U', !bVar10));
  local_10 = param_1;
  local_c = param_2;
  if (DAT_20000971 == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_2000093d = 1;
      FUN_0800e2b2();
      FUN_0801a3da();
      FUN_0801a6ec(0x46,DAT_20000971,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_0800e2b2(1);
        FUN_0801a6ec(0x46,DAT_20000971,0,0,0,0,0,0);
        return;
      }
      return;
    }
    local_14 = 1;
    FUN_0800e2b2();
    for (local_18 = 0; (int)local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_200031f6)[local_18] != local_10[local_18 + 2]) {
        local_14 = 0;
        break;
      }
    }
    if (local_14 == 0) {
      local_14 = 1;
      for (local_18 = 0; (int)local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_200031c6)[local_18] != local_10[local_18 + 2]) {
          local_14 = 0;
          break;
        }
      }
      for (local_18 = 0xe; (int)local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_200031c6)[local_18] != local_10[local_18 + 3]) {
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
      DAT_20000971 = '\0';
    }
    FUN_0801a6ec(0x46,DAT_20000971,0,0,0,0,0,0);
    return;
  }
  uVar8 = (uint)(byte)param_1[0x10];
  if (uVar8 == 0x7a) {
    if (((DAT_20003151 == '\x01') || (param_1[0x11] != '\x10')) &&
       (iVar9 = FUN_0800fd7e(), iVar9 == 1)) {
      FUN_0802119a(local_10);
      return;
    }
    FUN_08023b5e(&local_24,0x14);
    local_24 = 0x155aa;
    local_20 = (uint)local_20._2_2_ << 0x10;
    local_18 = (uint)(ushort)local_18;
    local_14 = CONCAT22(local_14._2_2_,0xee7a);
    uVar7 = FUN_08021098((int)&local_24 + 2,0x10);
    local_14 = CONCAT13((char)uVar7,CONCAT12((char)((ushort)uVar7 >> 8),(undefined2)local_14));
    FUN_0801a896(&local_24);
    FUN_0800e2b2(3);
    return;
  }
  if (uVar8 < 0x7b) {
    uVar8 = uVar8 - 0x3f;
    bVar10 = 0x3a < uVar8;
switchD_0801b2a8_default:
    if (bVar10) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801b220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801b224 + (uint)*(ushort *)(&DAT_0801b224 + uVar8 * 2) * 2))();
    return;
  }
  if (uVar8 == 0x93) {
    FUN_0800e2b2(1);
    if (DAT_20003146 == '\0') {
      local_28 = DAT_20003b9c;
      uVar2 = DAT_20003b9a;
      uVar3 = DAT_20003b98;
      uVar4 = DAT_20003b96;
      uVar5 = DAT_20003b94;
      uVar6 = DAT_20003b92;
    }
    else {
      local_28 = DAT_2000319a;
      uVar2 = DAT_20003198;
      uVar3 = DAT_20003196;
      uVar4 = DAT_20003194;
      uVar5 = DAT_20003192;
      uVar6 = DAT_20003190;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0801a6ec(0xad,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    return;
  }
  if (0x93 < uVar8) {
    if (uVar8 == 0x9b) {
      FUN_0800e2b2(1);
      FUN_0801a3da();
      DAT_2000093d = 1;
      return;
    }
    if (0x9b < uVar8) {
      if (uVar8 != 0xe4) {
        if (uVar8 < 0xe5) {
          if ((uVar8 == 0xe1) || (uVar8 == 0xe2)) {
            FUN_080217cc(param_1);
            return;
          }
          bVar10 = uVar8 == 0xe3;
        }
        else {
          if ((uVar8 == 0xe5) || (uVar8 == 0xe6)) {
            FUN_080218b0(param_1);
            return;
          }
          bVar10 = false;
          if (uVar8 == 0xf9) {
            FUN_0802241e(param_1);
            return;
          }
        }
        if (!bVar10) {
          return;
        }
      }
      FUN_0802378a(param_1);
      return;
    }
    uVar8 = uVar8 - 0x94;
    bVar10 = true;
    switch(uVar8) {
    case 0:
      FUN_0800e2b2(1);
      if (DAT_20003146 == '\0') {
        local_28 = DAT_20003ba8;
        uVar2 = DAT_20003ba6;
        uVar3 = DAT_20003ba4;
        uVar4 = DAT_20003ba2;
        uVar5 = DAT_20003ba0;
        uVar6 = DAT_20003b9e;
      }
      else {
        local_28 = DAT_200031a6;
        uVar2 = DAT_200031a4;
        uVar3 = DAT_200031a2;
        uVar4 = DAT_200031a0;
        uVar5 = DAT_2000319e;
        uVar6 = DAT_2000319c;
      }
      local_14 = (uint)uVar6;
      local_18 = (uint)uVar5;
      local_1c = (uint)uVar4;
      local_20 = (uint)uVar3;
      local_24 = (uint)uVar2;
      FUN_0801a6ec(0xae,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                   (int)(short)uVar2,(int)local_28);
      return;
    case 1:
      if (param_1[2] == -1) {
        DAT_200006a0 = 0x11;
        return;
      }
      if (param_1[3] == -1) {
        DAT_200006a0 = 0x12;
        return;
      }
      if (param_1[4] == -1) {
        DAT_200006a0 = 0x13;
        FUN_0800e2b2(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_200006a0 = 0x14;
      FUN_0800e2b2(1);
      return;
    case 2:
      FUN_0800e2b2(1);
      local_14 = (uint)(short)DAT_20003210;
      FUN_0801a6ec(0x4d,local_14,0,0,0,0,0,0);
      return;
    case 3:
      FUN_0800e2b2(1);
      DAT_20003210 = (ushort)(byte)local_10[2];
      local_14 = (uint)(short)DAT_20003210;
      FUN_0801a6ec(0x4d,local_14,0,0,0,0,0,0);
      DAT_2000314f = 1;
      return;
    case 4:
      FUN_0800e2b2(1);
      local_14 = (uint)DAT_200031b2;
      local_18 = (uint)DAT_200031b4;
      local_1c = (uint)DAT_200031b6;
      local_20 = (uint)DAT_200031b8;
      FUN_0801a6ec(0xb5,0,(int)(short)DAT_200031b2,(int)(short)DAT_200031b4,(int)(short)DAT_200031b6
                   ,(int)(short)DAT_200031b8,0,0);
      return;
    case 5:
      FUN_0800e2b2(1);
      local_14 = (uint)CONCAT11(DAT_2000320f,DAT_2000320e);
      local_18 = (uint)CONCAT11(DAT_2000320d,DAT_2000320c);
      local_1c = (uint)CONCAT11(DAT_2000320b,DAT_2000320a);
      FUN_0801a6ec(0xe7,local_1c,local_18,local_14,0,0,0,0);
      return;
    case 6:
      FUN_0800e2b2(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_2000320a)[local_14] = local_10[local_14 + 2];
      }
      local_18 = (uint)*(short *)(local_10 + 6);
      local_1c = (uint)*(short *)(local_10 + 4);
      local_20 = (uint)*(short *)(local_10 + 2);
      FUN_0801a6ec(0xe7,local_20,local_1c,local_18,0,0,0,0);
      DAT_2000314f = 1;
      return;
    }
    goto switchD_0801b2a8_default;
  }
  uVar8 = uVar8 - 0x7c;
  bVar10 = true;
  switch(uVar8) {
  case 0:
    local_1c = FUN_0800fd1e();
    local_20 = FUN_0800fd26();
    local_14 = (uint)(byte)local_10[2];
    local_18 = 0;
    if (diag_AgeModeflg == '\0') {
      if (DAT_20003151 != '\0') {
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
          if (iVar9 < 0x42001) goto LAB_0801c862;
        }
        if ((local_14 == 1) && (DAT_20003146 == '\0')) {
          FUN_0800aebc(1);
          FUN_0800e2b2(1);
          local_18 = 1;
          goto LAB_0801c8aa;
        }
      }
LAB_0801c862:
      FUN_0800e2b2(3);
      local_14 = 0;
    }
    else if (local_14 == 0) {
      FUN_0800aebc(2);
      FUN_0800e2b2(2);
      local_18 = 1;
    }
    else if (DAT_20003151 == '\0') {
      FUN_0800e2b2(3);
      local_14 = 0;
    }
    else {
      FUN_0800aebc(1);
      FUN_0800e2b2(1);
      local_18 = 1;
    }
LAB_0801c8aa:
    FUN_0801a6ec(0x48,local_14,0,0,0,0,0,0);
    break;
  case 1:
    local_14 = (uint)DAT_20003208;
    FUN_0801a6ec(0x4a,local_14,0,0,0,0,0,0);
    FUN_0800e2b2(1);
    DAT_2000314f = 1;
    break;
  case 2:
    DAT_20003206 = (ushort)(byte)param_1[2];
    local_14 = (uint)(short)DAT_20003206;
    FUN_0801a6ec(0x4c,local_14,0,0,0,0,0,0);
    FUN_0800e2b2(1);
    DAT_2000314f = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_0800e2b2(1);
    local_14 = (uint)DAT_20003208;
    FUN_0801a6ec(0x4a,local_14,0,0,0,0,0,0);
    break;
  case 5:
    FUN_0800e2b2(1);
    local_14 = (uint)(short)DAT_20003206;
    FUN_0801a6ec(0x4c,local_14,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_20003146 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e2b2(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a6ec(0xac,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_20003184 = (ushort)local_14;
        DAT_20003186 = (ushort)local_18;
        DAT_20003188 = (ushort)local_1c;
        DAT_2000318a = (ushort)local_20;
        DAT_2000318c = (ushort)local_24;
        DAT_2000318e = sVar1;
        FUN_0800abb8(&DAT_20003182);
        DAT_2000314f = 1;
        return;
      }
    }
    FUN_0800e2b2(2);
    break;
  case 7:
    if (DAT_20003146 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e2b2(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a6ec(0xad,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_20003190 = (ushort)local_14;
        DAT_20003192 = (ushort)local_18;
        DAT_20003194 = (ushort)local_1c;
        DAT_20003196 = (ushort)local_20;
        DAT_20003198 = (ushort)local_24;
        DAT_2000319a = sVar1;
        FUN_0800abb8(&DAT_20003182);
        DAT_2000314f = 1;
        return;
      }
    }
    FUN_0800e2b2(2);
    break;
  case 8:
    if (DAT_20003146 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e2b2(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a6ec(0xae,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_2000319c = (ushort)local_14;
        DAT_2000319e = (ushort)local_18;
        DAT_200031a0 = (ushort)local_1c;
        DAT_200031a2 = (ushort)local_20;
        DAT_200031a4 = (ushort)local_24;
        DAT_200031a6 = sVar1;
        FUN_0800abb8(&DAT_20003182);
        DAT_2000314f = 1;
        return;
      }
    }
    FUN_0800e2b2(2);
    break;
  case 9:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_0800e2b2(1);
      FUN_0801ad8e(local_10);
      DAT_2000314f = 1;
    }
    else {
      FUN_0800e2b2(2);
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
      FUN_0800e2b2(1);
      if (local_10[2] == '\0') {
        DAT_20003182 = 0xe000;
        FUN_0801a6ec(0xa2,1,0,0,0,0,0,0);
      }
      else if (local_10[2] == '\x01') {
        DAT_20003182 = 0xe001;
        FUN_0801a6ec(0xa2,1,1,0,0,0,0,0);
      }
      else if (local_10[2] == '\x02') {
        DAT_20003182 = 0xe002;
        FUN_0801a6ec(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003b84 = DAT_20003182;
      if (DAT_20003146 == '\0') {
        FUN_0800abb8(&DAT_20003b84);
      }
      else {
        FUN_0800abb8(&DAT_20003182);
      }
      DAT_2000314f = 1;
    }
    else {
      FUN_0800e2b2(2);
    }
    break;
  case 0xc:
    DAT_2000093d = 1;
    if (DAT_200031c0 == 1) {
      FUN_0800e2b2();
    }
    else {
      DAT_200006a0 = 3;
    }
    break;
  case 0xd:
    FUN_0800e2b2(1);
    if (DAT_20003151 == '\x01') {
      local_14 = diag_VehicleSpeed;
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 1000) {
        FUN_0800afd4();
        uVar8 = DAT_e000ed0c;
        DAT_e000ed0c = (uVar8 & 0x700 | 0x5fa0000) + 4;
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    break;
  case 0xe:
    if (param_1[2] == '\0') {
      local_14 = (uint)DAT_20003176;
      FUN_0801a6ec(0x8a,0,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\x01') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003151 == '\0') {
        FUN_0800e2b2(2);
      }
      else {
        FUN_0800e2b2(1);
        DAT_20003176 = (short)local_14;
        local_18 = ((int)DAT_20003176 << 0xc) / 10;
        FUN_0800fd34();
        local_18 = (uint)DAT_20003176;
        FUN_0801a6ec(0x8a,1,local_18,0,0,0,0,0);
        DAT_2000314f = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      local_14 = (uint)DAT_20003178;
      FUN_0801a6ec(0x8a,2,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\x03') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003151 == '\0') {
        FUN_0800e2b2(2);
      }
      else {
        FUN_0800e2b2(1);
        DAT_20003178 = (short)local_14;
        local_18 = ((int)DAT_20003178 << 0xc) / 10;
        FUN_0800fd54();
        local_18 = (uint)DAT_20003178;
        FUN_0801a6ec(0x8a,3,local_18,0,0,0,0,0);
        DAT_2000314f = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      local_14 = (uint)DAT_20003212;
      FUN_0801a6ec(0x8a,4,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\x05') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003151 == '\0') {
        FUN_0800e2b2(2);
      }
      else {
        FUN_0800e2b2(1);
        DAT_20003212 = (byte)local_14;
        local_18 = local_14 & 0xff;
        FUN_0800fd76();
        local_18 = (uint)DAT_20003212;
        FUN_0801a6ec(0x8a,5,local_18,0,0,0,0,0);
        DAT_2000314f = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      local_14 = (uint)(short)DAT_200031bc;
      FUN_0801a6ec(0x8a,6,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\a') {
      local_14 = (uint)*(ushort *)(param_1 + 4);
      local_18 = (uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100;
      if (DAT_20003151 == '\0') {
        FUN_0800e2b2(2);
      }
      else {
        local_18 = local_18 ^ 0xffff;
        if (local_14 == local_18) {
          if (param_1[3] == -0x32) {
            if (((int)local_14 < DAT_200002d8 + -200) || (DAT_200002d8 + 200 < (int)local_14)) {
              local_1c = (uint)(short)DAT_200031bc;
              FUN_0801a6ec(0x8a,7,local_1c,0,0,0,0,0);
              FUN_0800e2b2(2);
            }
            else {
              DAT_200002d4 = local_14 - DAT_200002d8;
              DAT_200031bc = (ushort)DAT_200002d4;
              DAT_200031be = (ushort)DAT_200002d4 ^ 0xffff;
              FUN_0800e2b2(1);
              local_1c = (uint)(short)DAT_200031bc;
              FUN_0801a6ec(0x8a,0xffffce07,local_1c,0,0,0,0,0);
              DAT_2000314f = 1;
            }
          }
          else if ((param_1[3] == ' ') && (local_14 == 0)) {
            DAT_200002d4 = 0;
            DAT_200031bc = 0;
            DAT_200031be = 0;
            FUN_0800e2b2(1);
            local_1c = (uint)(short)DAT_200031bc;
            FUN_0801a6ec(0x8a,0x2007,local_1c,0,0,0,0,0);
            DAT_2000314f = 1;
          }
        }
        else {
          FUN_0800e2b2(2);
        }
      }
    }
    else if (param_1[2] == '\b') {
      local_14 = (uint)DAT_200031b0;
      FUN_0801a6ec(0x8a,8,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\t') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (((DAT_20003151 == '\0') || (100 < local_14)) || (local_14 < 0x32)) {
        FUN_0800e2b2(2);
      }
      else {
        FUN_0800e2b2(1);
        DAT_200031b0 = (short)local_14;
        local_18 = local_14 & 0xffff;
        FUN_0801511c();
        local_18 = (uint)DAT_200031b0;
        FUN_0801a6ec(0x8a,9,local_18,0,0,0,0,0);
        DAT_2000314f = 1;
      }
    }
    else if (param_1[2] == '\n') {
      local_14 = DAT_20003213 & 1;
      FUN_0801a6ec(0x8a,10,local_14,0,0,0,0,0);
      FUN_0800e2b2(1);
    }
    else if (param_1[2] == '\v') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_20003151 == '\0') {
        FUN_0800e2b2(2);
      }
      else {
        FUN_0800e2b2(1);
        if (local_14 == 0) {
          DAT_20003213 = DAT_20003213 & 0xfe;
        }
        else {
          DAT_20003213 = DAT_20003213 | 1;
        }
        local_18 = DAT_20003213 & 1;
        FUN_0801a6ec(0x8a,0xb,local_18,0,0,0,0,0);
        DAT_2000314f = 1;
      }
    }
    break;
  case 0x16:
    FUN_0800e2b2(1);
    if (DAT_20003146 == '\0') {
      local_28 = DAT_20003b90;
      uVar2 = DAT_20003b8e;
      uVar3 = DAT_20003b8c;
      uVar4 = DAT_20003b8a;
      uVar5 = DAT_20003b88;
      uVar6 = DAT_20003b86;
    }
    else {
      local_28 = DAT_2000318e;
      uVar2 = DAT_2000318c;
      uVar3 = DAT_2000318a;
      uVar4 = DAT_20003188;
      uVar5 = DAT_20003186;
      uVar6 = DAT_20003184;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0801a6ec(0xac,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    break;
  default:
    goto switchD_0801b2a8_default;
  }
  return;
}



/* ENTRY 0x0801cc0a : FUN_0801cc0a */

uint FUN_0801cc0a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
  
  DAT_2000099e = DAT_2000099e + 1;
  if (DAT_2000093d == '\0') {
    if (DAT_200009a0 < 0x15) {
      switch(DAT_200009a1) {
      case 0:
        if (DAT_200031cb < 0x37) {
          for (uVar4 = 0; uVar4 < DAT_2000099d; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000098e)[uVar4] = (&DAT_20000961)[uVar4];
          }
        }
        else {
          DAT_2000099d = 6;
          for (uVar4 = 0; uVar4 < DAT_2000099d; uVar4 = uVar4 + 1 & 0xff) {
            (&DAT_2000098e)[uVar4] = s_S22Pro_2000097e[uVar4];
          }
        }
        DAT_20000986 = DAT_2000099d + 5;
        DAT_200009a1 = 3;
        break;
      case 3:
        puVar6 = (undefined1 *)(DAT_2000099e / 0x28);
        if ((uint)DAT_2000099e % 0x28 == 0x14) {
          if (DAT_200009a0 < 10) {
            puVar7 = param_4;
            if ((DAT_2000408e == -0x44) && (DAT_20004092 == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_2000099d + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_20004093)[uVar4];
                if (puVar7 != (undefined *)(uint)(byte)(&DAT_2000098a)[uVar4]) {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                puVar6 = &DAT_200009a1;
                DAT_200009a1 = 6;
              }
              else {
                DAT_200009a0 = 0;
                puVar6 = &DAT_200009a1;
                DAT_200009a1 = 5;
              }
            }
            DAT_200009a0 = DAT_200009a0 + 1;
            FUN_0801a594(&DAT_20000997,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
          }
          else {
            DAT_200009a0 = 0;
            DAT_200009a1 = 4;
          }
        }
        break;
      case 4:
        if ((uint)DAT_2000099e % 0x78 == 0x1e) {
          DAT_200009a0 = DAT_200009a0 + 1;
          FUN_0801a594(s_AT_ULKTE_20000972,9,DAT_2000099e / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_2000099e / 0x50;
        if ((uint)DAT_2000099e % 0x50 == 0x14) {
          if ((DAT_2000408e == -0x44) && (DAT_20004092 == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_2000099d + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_20004093)[uVar5];
              puVar7 = &DAT_20000985;
              if (uVar4 != (byte)(&DAT_2000098a)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_200009a1 = 6;
            }
            else {
              FUN_0801a594(&DAT_20000985,DAT_2000099d + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_200009a0 = DAT_200009a0 + 1;
        }
        else if ((uint)DAT_2000099e % 0x50 == 0x3c) {
          FUN_0801a594(&DAT_20000997,6,DAT_2000099e / 0x50,param_4,param_1,param_2,param_3,param_4);
        }
        break;
      case 6:
        DAT_200009a0 = DAT_200009a0 + 1;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if ((uint)DAT_2000099e == (DAT_2000099e / 0x18) * 0x18) {
      sVar9 = (short)diag_TotalVoltage;
      if (0x3138 < (short)diag_TotalVoltage) {
        sVar9 = 0x3138;
      }
      sVar1 = (short)diag_TotalCurrent;
      if ((diag_BatState == '\x01') && (200 < DAT_2000063e)) {
        sVar1 = (short)(-(int)DAT_2000063e / 10);
      }
      sVar3 = (short)(diag_VehicleSpeed / 10);
      if (diag_VehicleSpeed / 10 < 0) {
        sVar3 = -sVar3;
      }
      FUN_0801a5ec(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_20003182);
    }
    if ((uint)DAT_2000099e % 0x18 == 4) {
      sVar9 = (short)(DAT_2000310c / 10);
      if (DAT_2000310c / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0801a5ec(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_20003100,(int)sVar9,
                   (int)(short)((ushort)DAT_200006b8 | (ushort)(byte)DAT_200031c0 << 8),
                   (int)CONCAT11(DAT_200006d2,DAT_200006d1),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_2000099e % 0x18 == 8) {
      FUN_0801a5ec(0xf5,(int)(short)DAT_200006c8,(int)(short)DAT_200006cc,
                   (int)CONCAT11(DAT_200006c6,DAT_200006c7),(int)CONCAT11(DAT_200006c2,DAT_200006c4)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_2000099e % 0x18 == 0xc) {
      FUN_0801a5ec(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e8,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003118,(int)(short)(DAT_20003108 / 0xe10),(int)DAT_20003144);
    }
    if ((uint)DAT_2000099e % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003b74 != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0801a5ec(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_2000099e + ((int)(uint)DAT_2000099e >> 2) * -4 == 2) {
      FUN_08022648();
    }
    uVar4 = (uint)DAT_2000099e % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_080218c4();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801d0ac : FUN_0801d0ac */

void FUN_0801d0ac(void)

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
  
  FUN_08024544(0x11,1);
  FUN_080243ee(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_080242ac(&DAT_40011000,&local_34);
  FUN_0802435a(&DAT_40011000,0x200);
  FUN_080244fc(2,1);
  FUN_08023f08(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_200040a4;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08024044(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_08024444(&local_54);
  FUN_08024034(&DAT_40020408,2,1);
  FUN_08023ef4(&DAT_40020408,1);
  FUN_08024544(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_08025020(&DAT_40013400,&local_40);
  FUN_08024f70(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_08024efe(&DAT_40013400,&local_50);
  FUN_08024f62(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_080248c2(&DAT_40013400,&local_64);
  FUN_08024906(&DAT_40013400,0x80);
  FUN_080248b0(&DAT_40013400,1);
  FUN_08024944(&DAT_40013400,0xf,0x100);
  FUN_08024934(&DAT_40013400,0x100);
  FUN_0802491e(&DAT_40013400,1);
  FUN_0802490c(&DAT_40013400,1);
  return;
}



/* ENTRY 0x0801d22c : FUN_0801d22c */

void FUN_0801d22c(void)

{
  int iVar1;
  
  iVar1 = FUN_08024014(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_200009a2 = 0;
    FUN_08023edc(0x10000002);
  }
  return;
}



/* ENTRY 0x0801d24a : FUN_0801d24a */

void FUN_0801d24a(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_200009a2 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_200040a4 + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_200040a4 + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46 +
             (~((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
             0x14 | (((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U)
                     * 0x46 + (~((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >>
                                (7 - uVar2 & 0xff)) & 1U) * 0x14) * 0x10000;
      }
    }
    DAT_200009a2 = '\x01';
  }
  return;
}



/* ENTRY 0x0801d3d4 : thunk_FUN_0801d3e6 */

void thunk_FUN_0801d3e6(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801d3e6 : FUN_0801d3e6 */

void FUN_0801d3e6(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801d3ec : FUN_0801d3ec */

void FUN_0801d3ec(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(0x30,1);
  local_8 = 0x10031000;
  FUN_080242ac(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_080242ac(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_080242ac(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801d444 : FUN_0801d444 */

void FUN_0801d444(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_080243e6(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_080243e6(&DAT_40011000,0x1000);
    }
    else {
      FUN_080243ea(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_080243ea(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x0801d484 : FUN_0801d484 */

void FUN_0801d484(undefined4 param_1)

{
  FUN_080243e6(&DAT_40011000,0x10);
  FUN_0801d444(param_1);
  FUN_080243ea(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d4a0 : FUN_0801d4a0 */

void FUN_0801d4a0(uint param_1,undefined4 param_2)

{
  FUN_0801d484(0x44);
  FUN_080243e6(&DAT_40011000,0x10);
  FUN_0801d444(param_1 | 0xc0);
  FUN_0801d444(param_2);
  FUN_080243ea(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d4cc : FUN_0801d4cc */

void FUN_0801d4cc(int param_1)

{
  uint uVar1;
  
  FUN_0801d484(0x8f);
  FUN_0801d484(0x40);
  FUN_080243e6(&DAT_40011000,0x10);
  FUN_0801d444(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801d444(*(undefined1 *)(param_1 + uVar1));
    FUN_0801d444((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_080243ea(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d510 : FUN_0801d510 */

void FUN_0801d510(void)

{
  byte bVar1;
  
  FUN_0801d3ec();
  thunk_FUN_0801d3e6(10);
  FUN_0801d484(0x8f);
  thunk_FUN_0801d3e6(1);
  FUN_0801d484(0x40);
  thunk_FUN_0801d3e6(1);
  FUN_080243e6(&DAT_40011000,0x10);
  FUN_0801d444(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_0801d444(0);
  }
  FUN_080243ea(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d568 : FUN_0801d568 */

void FUN_0801d568(void)

{
  undefined4 local_8;
  
  local_8 = 0x1000003;
  FUN_08024444(&local_8);
  return;
}



/* ENTRY 0x0801d588 : FUN_0801d588 */

undefined4 FUN_0801d588(int param_1)

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



/* ENTRY 0x0801d5c2 : FUN_0801d5c2 */

void FUN_0801d5c2(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0801d588(sVar1);
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
    iVar2 = FUN_0801d588(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_08028302)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_08028302)[uVar4];
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



/* ENTRY 0x0801d6c4 : FUN_0801d6c4 */

longlong FUN_0801d6c4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_080246d0();
  if ((uint)DAT_200009a4 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_200049a8 = (undefined1)(uVar1 / 0xe10);
    DAT_200049a9 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_200049aa = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_200009a4 = (ushort)(uVar1 / 0x15180);
    FUN_0801d5c2(&local_20,uVar1);
    DAT_200049a8 = (undefined1)local_20;
    DAT_200049a9 = local_20._1_1_;
    DAT_200049aa = local_20._2_1_;
    DAT_200049ac = (undefined2)local_1c;
    DAT_200049ae = local_1c._2_1_;
    DAT_200049af = local_1c._3_1_;
    DAT_200049b0 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0801d764 : FUN_0801d764 */

int FUN_0801d764(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0801d588(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0801d588(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801d800 : FUN_0801d800 */

undefined4
FUN_0801d800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801d764(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_08024514(0x18000000,1);
    FUN_080244dc(1);
    FUN_08024748(uVar1);
    FUN_08024794();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d85a : FUN_0801d85a */

undefined4 FUN_0801d85a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_08024514(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_080244dc(1);
  iVar2 = FUN_08023ec2(4);
  if (iVar2 == 0x5050) {
    FUN_080247a4();
    FUN_08024794();
  }
  else {
    FUN_08023eb0();
    FUN_08024660(1);
    for (; (iVar2 = FUN_08024630(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_08008e00(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_08024690(0x100);
    FUN_08024684(1);
    FUN_08024794();
    FUN_080247a4();
    FUN_08024708(1);
    FUN_08024794();
    FUN_080246b0();
    FUN_08024770(0x7fff);
    FUN_08024794();
    FUN_0801d800(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_080246c0();
    FUN_08023ece(4,0x5050);
  }
  FUN_0801d6c4();
  return 0;
}



/* ENTRY 0x0801d90e : FUN_0801d90e */

void FUN_0801d90e(void)

{
  int iVar1;
  
  iVar1 = FUN_080246e8(1);
  if (iVar1 != 0) {
    FUN_0801d6c4();
  }
  iVar1 = FUN_080246e8(2);
  if (iVar1 != 0) {
    FUN_080246a0(2);
    FUN_0801d6c4();
  }
  FUN_080246a0(5);
  FUN_08024794();
  return;
}



/* ENTRY 0x0801d93a : FUN_0801d93a */

undefined4 FUN_0801d93a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    for (uVar4 = 0x7b2; (int)uVar4 < param_1; uVar4 = uVar4 + 1 & 0xffff) {
      iVar2 = FUN_0801d588(uVar4);
      if (iVar2 == 0) {
        iVar3 = iVar3 + 0x1e13380;
      }
      else {
        iVar3 = iVar3 + 0x1e28500;
      }
    }
    for (uVar4 = 0; uVar4 < (param_2 - 1U & 0xff); uVar4 = uVar4 + 1 & 0xffff) {
      iVar3 = iVar3 + (uint)(byte)(&DAT_08028302)[uVar4] * 0x15180;
      iVar2 = FUN_0801d588(param_1);
      if ((iVar2 != 0) && (uVar4 == 1)) {
        iVar3 = iVar3 + 0x15180;
      }
    }
    FUN_08024514(0x18000000,1);
    FUN_080244dc(1);
    FUN_08024720(iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6);
    FUN_08024794();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801da0c : FUN_0801da0c */

uint FUN_0801da0c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 % 100 & 0xff;
  if (0x13 < (param_1 / 100 & 0xffU)) {
    uVar1 = uVar1 + 100 & 0xff;
  }
  uVar2 = (uint)(byte)(&DAT_080282f5)[param_2] + (uVar1 + ((int)uVar1 >> 2)) % 7 + param_3 & 0xffff;
  if ((uVar1 == ((int)uVar1 >> 2) * 4) && (param_2 < 3)) {
    uVar2 = uVar2 - 1 & 0xffff;
  }
  return uVar2 % 7;
}



/* ENTRY 0x0801da84 : FUN_0801da84 */

undefined1 FUN_0801da84(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_080247ce(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_080247e0(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_080247ce(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_080247dc(&DAT_40003c00);
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



/* ENTRY 0x0801dad2 : FUN_0801dad2 */

void FUN_0801dad2(void)

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
  
  FUN_08024544(8,1);
  FUN_08024514(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_080242ac(&DAT_40010c00,&local_8);
  FUN_080243ea(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_080247e4(&DAT_40003c00,&local_1c);
  FUN_080247bc(&DAT_40003c00,1);
  FUN_0801da84(0xff);
  return;
}



/* ENTRY 0x0801db58 : FUN_0801db58 */

void FUN_0801db58(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_080247bc(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0801db84 : FUN_0801db84 */

uint FUN_0801db84(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801da84(0x90);
  FUN_0801da84(0);
  FUN_0801da84(0);
  FUN_0801da84(0);
  iVar1 = FUN_0801da84(0xff);
  uVar2 = FUN_0801da84(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x0801dbc4 : FUN_0801dbc4 */

void FUN_0801dbc4(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08024544(8,1);
  local_8 = 0x10038000;
  FUN_080242ac(&DAT_40010800,&local_8);
  FUN_080243ea(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_080242ac(&DAT_40011000,&local_8);
  FUN_080243ea(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0801dad2();
  FUN_0801db58(0);
  DAT_200009a6 = FUN_0801db84();
  return;
}



/* ENTRY 0x0801dc30 : FUN_0801dc30 */

undefined4 FUN_0801dc30(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0801da84(5);
  uVar1 = FUN_0801da84(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x0801dc54 : FUN_0801dc54 */

void FUN_0801dc54(undefined4 param_1)

{
  DAT_422101bc = 0;
  FUN_0801da84(1);
  FUN_0801da84(param_1);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801dc74 : FUN_0801dc74 */

void FUN_0801dc74(void)

{
  DAT_422101bc = 0;
  FUN_0801da84(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801dc8c : FUN_0801dc8c */

void FUN_0801dc8c(void)

{
  DAT_422101bc = 0;
  FUN_0801da84(4);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801dca4 : FUN_0801dca4 */

void FUN_0801dca4(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801da84(3);
  FUN_0801da84((param_2 & 0xffffff) >> 0x10);
  FUN_0801da84((param_2 & 0xffff) >> 8);
  FUN_0801da84(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801da84(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801dcee : FUN_0801dcee */

undefined4 FUN_0801dcee(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0801da84(3);
  FUN_0801da84((param_1 & 0xffffff) >> 0x10);
  FUN_0801da84((param_1 & 0xffff) >> 8);
  FUN_0801da84(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801da84(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x0801dd34 : FUN_0801dd34 */

void FUN_0801dd34(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_0801dc74();
  DAT_422101bc = 0;
  FUN_0801da84(2);
  FUN_0801da84((param_2 & 0xffffff) >> 0x10);
  FUN_0801da84((param_2 & 0xffff) >> 8);
  FUN_0801da84(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0801da84(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801dd80 : FUN_0801dd80 */

uint FUN_0801dd80(void)

{
  uint uVar1;
  
  uVar1 = FUN_0801dc30();
  return uVar1 & 1;
}



/* ENTRY 0x0801dd8c : FUN_0801dd8c */

int FUN_0801dd8c(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_0801dd34(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x0801ddac : FUN_0801ddac */

uint FUN_0801ddac(undefined4 param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = 0x100 - *param_2;
  if ((int)(uint)*param_3 <= (int)uVar1) {
    uVar1 = (uint)*param_3;
  }
  FUN_0801dd34(param_1,*(undefined4 *)param_2,uVar1);
  *(uint *)param_2 = *(int *)param_2 + uVar1;
  *param_3 = *param_3 - (short)uVar1;
  return uVar1;
}



/* ENTRY 0x0801dde0 : FUN_0801dde0 */

void FUN_0801dde0(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_0801dc74();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801da84(0x20);
    FUN_0801da84((param_2 << 0xc & 0xffffffU) >> 0x10);
    FUN_0801da84((param_2 << 0xc & 0xffffU) >> 8);
    FUN_0801da84(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801de1e : FUN_0801de1e */

void FUN_0801de1e(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_0801dc74();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801da84(0xd8);
    FUN_0801da84(param_2);
    FUN_0801da84(0);
    FUN_0801da84(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801de5c : FUN_0801de5c */

void FUN_0801de5c(int param_1)

{
  if (param_1 == 0) {
    FUN_0801dc74();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801da84(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801de80 : FUN_0801de80 */

void FUN_0801de80(void)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_0801dc30();
  } while ((uVar1 & 1) != 0);
  return;
}



/* ENTRY 0x0801de92 : FUN_0801de92 */

void FUN_0801de92(void)

{
  DAT_422101bc = 0;
  FUN_0801da84(0xb9);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801deb0 : FUN_0801deb0 */

void FUN_0801deb0(void)

{
  DAT_422101bc = 0;
  FUN_0801da84(0xab);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801df1a : FUN_0801df1a */

void FUN_0801df1a(uint param_1,char *param_2)

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



/* ENTRY 0x0801df5c : FUN_0801df5c */

undefined4 FUN_0801df5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049c5)[uVar1 + param_1 * 0x1c0] = (&DAT_08028314)[uVar1];
  }
  local_14 = param_4;
  FUN_0801df1a(param_2,&DAT_200049cc + param_1 * 0x1c0);
  (&DAT_200049d1)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049d0)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049cf)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049ce)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049c5)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801df1a((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_200049d2)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049d3)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0801df1a(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_200049d4)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049d5)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_200049d6)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x0801e056 : FUN_0801e056 */

undefined4 FUN_0801e056(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049c5)[uVar1 + param_1 * 0x1c0] = (&DAT_08028314)[uVar1];
  }
  local_1c = param_4;
  FUN_0801df1a(param_2,&DAT_200049c8 + param_1 * 0x1c0);
  FUN_0801df1a(param_3,&DAT_200049cc + param_1 * 0x1c0);
  (&DAT_200049ce)[param_1 * 0x1c0] = 0x45;
  (&DAT_200049d0)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049cf)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049d1)[param_1 * 0x1c0] = 0x32;
  FUN_0801df1a(param_4,&local_1c);
  (&DAT_200049d2)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049d3)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049c5)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801df1a((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_200049d4)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049d5)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0801df1a(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_200049d6)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049d7)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_200049d8)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x0801e19a : FUN_0801e19a */

uint FUN_0801e19a(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x0801e1ce : FUN_0801e1ce */

undefined4
FUN_0801e1ce(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0801e19a(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049c5)[uVar2 + param_1 * 0x1c0] = (&DAT_08028314)[uVar2];
  }
  FUN_0801df1a(param_2,&DAT_200049c8 + param_1 * 0x1c0);
  FUN_0801df1a(param_3,&DAT_200049cc + param_1 * 0x1c0);
  FUN_0801df1a((int)uVar1 >> 8,&local_24);
  (&DAT_200049ce)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049cf)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801df1a(uVar1 & 0xff,&local_24);
  (&DAT_200049d0)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d1)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801df1a(param_4,&local_24);
  (&DAT_200049d2)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d3)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801df1a(param_5,&local_24);
  (&DAT_200049d4)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d5)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049c5)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0801df1a((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_200049d6)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d7)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801df1a(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_200049d8)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d9)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_200049da)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x0801e376 : FUN_0801e376 */

int FUN_0801e376(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0801e19a((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049c5)[uVar2 + param_1 * 0x1c0] = (&DAT_08028314)[uVar2];
  }
  FUN_0801df1a(param_2,&DAT_200049c8 + param_1 * 0x1c0);
  FUN_0801df1a(param_3,&DAT_200049cc + param_1 * 0x1c0);
  FUN_0801df1a((int)uVar1 >> 8,&local_28);
  (&DAT_200049ce)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049cf)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0801df1a(uVar1 & 0xff,&local_28);
  (&DAT_200049d0)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049d1)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049c5)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801df1a(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_200049d2)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_200049d3)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0801df1a((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_200049d2)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049d3)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0801df1a(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_200049d4)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049d5)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_200049d6)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x0801e540 : FUN_0801e540 */

uint FUN_0801e540(int param_1,int param_2)

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



/* ENTRY 0x0801e5b2 : FUN_0801e5b2 */

undefined2
FUN_0801e5b2(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0801e540(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_0801e540(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801e5de : FUN_0801e5de */

undefined4 FUN_0801e5de(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801e5b2(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801e5b2(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x0801e68e : FUN_0801e68e */

undefined4 FUN_0801e68e(char *param_1)

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



/* ENTRY 0x0801e6d4 : FUN_0801e6d4 */

void FUN_0801e6d4(undefined4 param_1)

{
  FUN_0801e056(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x0801e6e6 : FUN_0801e6e6 */

undefined4 FUN_0801e6e6(int param_1)

{
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0xb0;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x0801e72a : FUN_0801e72a */

undefined4 FUN_0801e72a(int param_1)

{
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0xbb;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x0801e76e : FUN_0801e76e */

undefined4 FUN_0801e76e(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_200049b7)[param_1 * 0x1c0] == '\0') && ((&DAT_200049bb)[param_1 * 0x1c0] == '\0')) {
    (&DAT_200049b7)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801e7a4 : FUN_0801e7a4 */

void FUN_0801e7a4(void)

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
  DAT_200009a8 = DAT_200009a8 + 1;
  uVar8 = DAT_200009a8 & 1;
  uVar9 = DAT_200009a8 & 1;
  uVar3 = DAT_200009a8 & 1;
  uVar4 = DAT_200009a8 & 1;
  uVar5 = DAT_200009a8 & 1;
  uVar7 = DAT_200009a8 & 1;
  if ((DAT_200049bb == '\0') && (DAT_200049b7 == '\0')) {
    DAT_2000311f = DAT_2000311f & 0xef;
  }
  else {
    DAT_2000311f = DAT_2000311f | 0x10;
  }
  if ((DAT_20004b7b == '\0') && (DAT_20004b77 == '\0')) {
    DAT_2000311f = DAT_2000311f & 0xdf;
  }
  else {
    DAT_2000311f = DAT_2000311f | 0x20;
  }
  if (DAT_200009ac != 0) {
    DAT_200009ac = DAT_200009ac + -1;
  }
  if (DAT_200009ac == 0) {
    DAT_2000311f = DAT_2000311f & 0xbf;
  }
  else {
    DAT_2000311f = DAT_2000311f | 0x40;
  }
  if ((DAT_200049b6 < 0x15) && (DAT_20004b76 < 0x15)) {
    DAT_200030ce = DAT_200030ce & 0xfbff;
    DAT_2000311f = DAT_2000311f & 0x7f;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x400;
    DAT_2000311f = DAT_2000311f | 0x80;
  }
  DAT_20003121 = 0x32 < DAT_200049bc;
  if (0x32 < DAT_20004b7c) {
    DAT_20003121 = DAT_20003121 | 2;
  }
  if (((((DAT_20004b47 & 0xea) == 0 || (int)(DAT_20004b47 & 0xea) < 0) &&
       ((DAT_20004b4b & 0x70) == 0 || (int)(DAT_20004b4b & 0x70) < 0)) &&
      ((DAT_20004d07 & 0xea) == 0 || (int)(DAT_20004d07 & 0xea) < 0)) &&
     ((DAT_20004d0b & 0x70) == 0)) {
    DAT_20003122 = '\0';
    DAT_2000311f = DAT_2000311f & 0xfe;
  }
  else {
    DAT_20003122 = '\x01';
    DAT_2000311f = DAT_2000311f | 1;
  }
  if ((((((DAT_20004b47 & 0x15) == 0 || (int)(DAT_20004b47 & 0x15) < 0) &&
        ((DAT_20004b48 & 0x7f) == 0 || (int)(DAT_20004b48 & 0x7f) < 0)) &&
       (((DAT_20004b4b & 0xf) == 0 || (int)(DAT_20004b4b & 0xf) < 0 &&
        (((DAT_20004d07 & 0x15) == 0 || (int)(DAT_20004d07 & 0x15) < 0 &&
         ((DAT_20004d08 & 0x7f) == 0 || (int)(DAT_20004d08 & 0x7f) < 0)))))) &&
      ((DAT_20004d0b & 0xf) == 0 || (int)(DAT_20004d0b & 0xf) < 0)) &&
     ((((DAT_20004b54 & 0x80) == 0 || (int)(DAT_20004b54 & 0x80) < 0 &&
       ((DAT_20004d14 & 0x80) == 0 || (int)(DAT_20004d14 & 0x80) < 0)) && (DAT_20003122 != '\x01')))
     ) {
    DAT_200030ce = DAT_200030ce & 0xfdff;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x200;
  }
  if ((((DAT_20004b54 & 0x7f) == 0 || (int)(DAT_20004b54 & 0x7f) < 0) && (DAT_20004b55 == 0)) &&
     (((DAT_20004d14 & 0x7f) == 0 || (int)(DAT_20004d14 & 0x7f) < 0 && (DAT_20004d15 == 0)))) {
    DAT_20003123 = 0;
  }
  else {
    DAT_20003123 = 1;
  }
  if ((((DAT_20004b48 & 1) == 0) && ((DAT_20004d08 & 1) == 0)) &&
     (((DAT_20004b4b & 1) == 0 && ((DAT_20004d0b & 1) == 0)))) {
    if ((DAT_20003124 != 0) && (DAT_20003124 < 10)) {
      DAT_20003124 = DAT_20003124 - 1;
    }
  }
  else if (DAT_20003124 < 0x14) {
    DAT_20003124 = DAT_20003124 + 1;
  }
  if (((DAT_20004b47 & 1) == 0) && ((DAT_20004d07 & 1) == 0)) {
    if ((DAT_20003125 != 0) && (DAT_20003125 < 10)) {
      DAT_20003125 = DAT_20003125 - 1;
    }
  }
  else if (DAT_20003125 < 0x14) {
    DAT_20003125 = DAT_20003125 + 1;
  }
  DAT_20003134 = DAT_20003134 | DAT_20004b47;
  DAT_20003135 = DAT_20004b48 | DAT_20003135;
  DAT_20003138 = DAT_20004b4b | DAT_20003138;
  DAT_20003139 = DAT_20003139 | DAT_20004d07;
  DAT_2000313a = DAT_2000313a | DAT_20004d08;
  DAT_2000313d = DAT_2000313d | DAT_20004d0b;
  DAT_2000313e = DAT_2000313e | DAT_20004b54 & 0x3f;
  DAT_2000313f = DAT_2000313f | DAT_20004b55;
  DAT_20003140 = DAT_20004d14 & 0x3f | DAT_20003140;
  DAT_20003141 = DAT_20003141 | DAT_20004d15;
  if (DAT_200009b0 != 0) {
    if (2 < DAT_200009b0) {
      return;
    }
    uVar10 = FUN_0801e056(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_20004b70 = DAT_20004b70 + 1;
      FUN_08013f9c(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d30 = DAT_20004d30 + 1;
      FUN_080142f4(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
    }
    DAT_200009b0 = DAT_200009b0 + 1;
    return;
  }
  if ((&DAT_200049b7)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_200049bb)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_08020dd6(uVar7);
      if (iVar6 == 0) {
        (&DAT_200049bb)[uVar7 * 0x1c0] = (&DAT_200049bb)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_200009b4 & 3) != 2) {
        DAT_200009b4 = DAT_200009b4 + 1;
        return;
      }
      uVar8 = (uint)(DAT_200049c0 * 100) / ((uint)DAT_200009b8 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004b80 * 100) / ((uint)DAT_200009b8 * 0xc) & 0xff;
      DAT_200009b4 = DAT_200009b4 + 1;
      FUN_08021136(uVar8,uVar9);
      DAT_20003120 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_200049b8)[uVar7 * 0x1c0] != -0x50) || ((&DAT_200049b9)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_200049b7)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_200049b7)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_0801e6d4(uVar7);
      }
      else {
        (&DAT_200049b8)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_200049b9)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801e6e6(uVar7);
      }
      if (uVar9 == 0) {
        DAT_20004b70 = DAT_20004b70 + 1;
        FUN_08013f9c(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004d30 = DAT_20004d30 + 1;
        FUN_080142f4(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_200049b7)[uVar7 * 0x1c0] = (&DAT_200049b7)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_200049b7)[uVar7 * 0x1c0] = 0;
    (&DAT_200049bb)[uVar7 * 0x1c0] = 0x32;
    (&DAT_200049c0)[uVar7 * 0x70] = 0;
    (&DAT_200049bd)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_200049b5)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049b6)[uVar7 * 0x1c0] = 0;
    (&DAT_200049bc)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_200049b6)[uVar7 * 0x1c0] < 4) {
      (&DAT_200049b6)[uVar7 * 0x1c0] = (&DAT_200049b6)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_200049b6)[uVar7 * 0x1c0] < 200) {
      (&DAT_200049b6)[uVar7 * 0x1c0] = (&DAT_200049b6)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_200009a8 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_200049b6)[uVar7 * 0x1c0]) {
      if ((DAT_200009a8 & 0x3f) >> 1 == 0) {
        if ((&DAT_200049bc)[uVar7 * 0x1c0] != '\0') {
          (&DAT_200049bc)[uVar7 * 0x1c0] = (&DAT_200049bc)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_200049b8)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_200049b9)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801e72a(uVar7);
        if (uVar3 == 0) {
          DAT_20004b70 = DAT_20004b70 + 1;
          FUN_08013f9c(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004d30 = DAT_20004d30 + 1;
        FUN_080142f4(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_200049b8)[uVar7 * 0x1c0] == -0x45) && ((&DAT_200049b9)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_200049bc)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_20004b56)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049c4)[uVar7 * 0x1c0] = (&DAT_200049c4)[uVar7 * 0x1c0] + '\x01';
    (&DAT_200049c4)[uVar7 * 0x1c0] = (&DAT_200049c4)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_200049c4)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_200049b5)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_0801df5c(uVar7,0xc1,&DAT_200049b4,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_200049b5)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_0801df5c(uVar7,0xc2,&DAT_200049b4,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_200049b5)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_0801e056(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_200049b5)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_20003151 == '\x01') || (iVar6 = FUN_0800fd7e(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_0801e1ce(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_20004b70 = DAT_20004b70 + 1;
      FUN_08013f9c(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d30 = DAT_20004d30 + 1;
      FUN_080142f4(&DAT_200049c5 + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_20004b56)[uVar7 * 0x1c0];
    (&DAT_20004b56)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_0801e376(uVar7,0,uVar2,(&DAT_20004ab5)[uVar7 * 0x1c0],&DAT_20004a9d + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_200049b5)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_20004b70 = DAT_20004b70 + 1;
        FUN_08013f9c(&DAT_200049c5 + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004d30 = DAT_20004d30 + 1;
        FUN_080142f4(&DAT_200049c5 + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x0801f10a : FUN_0801f10a */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801f10a(int param_1,undefined4 param_2)

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
  iVar3 = FUN_0801e5de(local_20,param_1);
  if (iVar3 == 0) {
    DAT_200049b5 = 1;
    iVar3 = FUN_0801e68e(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_200049b9 = *(undefined1 *)(local_c + 2);
        DAT_200049ba = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08020fde(0,local_30,local_2c);
      }
      else {
        DAT_200049b9 = *(undefined1 *)(local_c + 2);
        DAT_200049ba = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004b72 = DAT_20004b72 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801e540(local_30,local_2c);
  uVar4 = (uint)DAT_200049b5;
  if (uVar4 == 0xbe) {
LAB_0801f9a4:
    if (local_10 != 0x25) {
      DAT_200049b5 = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_200049b5 = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_200049b5 = 0;
      return local_2c;
    }
    if (local_1c == 0) {
      if (local_20[0] == 0xc) {
        local_1c = 0;
        puVar5 = extraout_r2;
        uVar6 = extraout_r3;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801e540(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                               uVar1);
          puVar5 = auStack_4c;
          puVar5[local_50] = uVar1;
          uVar6 = extraout_r3_01;
        }
        FUN_0802357c(0,DAT_200049b5,auStack_4c);
        DAT_200049b5 = 0;
        return local_2c;
      }
      DAT_200049b5 = 0;
      return local_2c;
    }
    DAT_200049b5 = 0;
    return local_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar7 = true;
    switch(uVar4) {
    case 0:
LAB_0801f95e:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0)))) {
        local_2c = (uint)DAT_200049b5;
        FUN_0802351a(0,local_2c,1);
        DAT_200049b5 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_200049b5;
      FUN_0802351a(0,local_2c);
      DAT_200049b5 = 0;
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
      goto LAB_0801f17c;
    case 2:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e540(local_34,local_30);
        (&DAT_20004a85)[local_2c] = uVar1;
      }
      break;
    case 3:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e540(local_34,local_30);
        (&DAT_20004b57)[local_2c] = uVar1;
      }
      break;
    case 4:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049b5;
        FUN_08021768(0,local_2c,1);
      }
      else {
        local_2c = (uint)DAT_200049b5;
        FUN_08021768(0,local_2c);
      }
      break;
    case 0x11:
      goto switchD_0801f25e_caseD_11;
    case 0x12:
      goto switchD_0801f25e_caseD_12;
    case 0x13:
      goto switchD_0801f25e_caseD_13;
    case 0x14:
      goto switchD_0801f25e_caseD_14;
    case 0x15:
      goto switchD_0801f25e_caseD_15;
    case 0x16:
      goto switchD_0801f25e_caseD_16;
    case 0x17:
      goto switchD_0801f25e_caseD_17;
    case 0x18:
      goto switchD_0801f25e_caseD_18;
    case 0x19:
      goto switchD_0801f25e_caseD_19;
    case 0x1a:
      goto switchD_0801f25e_caseD_1a;
    case 0x1b:
      goto switchD_0801f25e_caseD_1b;
    case 0x1c:
      goto switchD_0801f25e_caseD_1c;
    case 0x1d:
      goto switchD_0801f25e_caseD_1d;
    case 0x1e:
      goto switchD_0801f25e_caseD_1e;
    case 0x1f:
      goto switchD_0801f25e_caseD_1f;
    case 0x20:
      goto switchD_0801f25e_caseD_20;
    case 0x21:
      goto switchD_0801f25e_caseD_21;
    case 0x22:
      goto switchD_0801f25e_caseD_22;
    case 0x23:
      goto switchD_0801f25e_caseD_23;
    case 0x24:
      goto switchD_0801f25e_caseD_24;
    case 0x27:
      local_28 = local_28 + 1 & 0xffff;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f25e_caseD_23;
    case 0x28:
      local_28 = local_28 + 1 & 0xffff;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f25e_caseD_24;
    default:
      goto switchD_0801f236_default;
    }
    DAT_200049b5 = 0;
    return local_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (local_10 != 0x25) {
          DAT_200049b5 = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_200049b5 = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_200049b5 = 0;
          return local_2c;
        }
        if (local_1c == 0) {
          if (local_20[0] == 0xc) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e540(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_04;
            }
            FUN_0802156c(0,DAT_200049b5,auStack_4c);
            DAT_200049b5 = 0;
            return local_2c;
          }
          DAT_200049b5 = 0;
          return local_2c;
        }
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (local_20[0] != 0x76) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801e540(local_40,local_3c);
          DAT_20004b1c = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004b1e)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_0801e540(local_40,local_3c);
          DAT_20004b1d = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004b3c)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004b44 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004b45 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004b46 = FUN_0801e540(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004b47)[local_3c] = uVar1;
          }
          DAT_20004b4e = FUN_0801e5b2(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004b54 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004b55 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004b4c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004b52 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004b53 = FUN_0801e540(local_40,local_3c);
          DAT_20004b50 = FUN_0801e5b2(local_c + 0x7f);
          DAT_200049b5 = 0;
          return local_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_0801f95e;
          if (uVar4 == 0x35) {
            if (local_10 != 0x25) {
              DAT_200049b5 = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_200049b5 = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_200049b5 = 0;
              return local_2c;
            }
            if (local_20[0] == 0x1c) {
              local_1c = 0;
              puVar5 = extraout_r2;
              uVar6 = extraout_r3;
              for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
                uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
                uVar1 = FUN_0801e540(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,
                                     uVar6,uVar1);
                puVar5 = auStack_4c;
                puVar5[local_50] = uVar1;
                uVar6 = extraout_r3_02;
              }
              FUN_0802357c(0,DAT_200049b5,auStack_4c);
              DAT_200049b5 = 0;
              return local_2c;
            }
            DAT_200049b5 = 0;
            return local_2c;
          }
          bVar7 = uVar4 == 0x42;
LAB_0801f206:
          if (!bVar7) {
            DAT_200049b5 = 0;
            return local_2c;
          }
          if (local_20[0] != 0xba) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801e540(local_40,local_3c);
          DAT_20004ab7 = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_c + local_3c * 4 + 0x13;
            uVar2 = FUN_0801e5b2();
            (&DAT_20004ab8)[local_3c] = uVar2;
          }
          local_3c = (uint)*(byte *)(local_c + 0x8c);
          local_40 = (uint)*(byte *)(local_c + 0x8b);
          local_38 = FUN_0801e540(local_40,local_3c);
          DAT_20004af8 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_3c * 4 + 0x8d + local_c;
            uVar2 = FUN_0801e5b2();
            (&DAT_20004afa)[local_3c] = uVar2;
          }
          DAT_20004b0e = FUN_0801e5b2(local_c + 0xad);
          DAT_20004b10 = FUN_0801e5b2(local_c + 0xb1);
          DAT_20004b12 = FUN_0801e5b2(local_c + 0xb5);
          local_3c = (uint)*(byte *)(local_c + 0xba);
          local_40 = (uint)*(byte *)(local_c + 0xb9);
          DAT_20004b14 = FUN_0801e540(local_40,local_3c);
          DAT_20004b16 = FUN_0801e5b2(local_c + 0xbb);
          DAT_20004b18 = FUN_0801e5b2(local_c + 0xbf);
          DAT_20004b1a = FUN_0801e5b2(local_c + 0xc3);
          DAT_200049b5 = 0;
          return local_2c;
        }
        if (uVar4 == 0xa0) goto LAB_0801f852;
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e540(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_00;
            }
            FUN_0802357c(0,DAT_200049b5,auStack_4c);
            DAT_200049b5 = 0;
            return local_2c;
          }
          FUN_0802351a(0,DAT_200049b5);
          DAT_200049b5 = 0;
          return local_2c;
        }
        bVar7 = false;
        if (uVar4 != 0xa4) goto LAB_0801f206;
        goto LAB_0801f78c;
      }
      uVar4 = uVar4 - 0xa7;
      bVar7 = 6 < uVar4;
switchD_0801f236_default:
      if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x0801f21e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801f222 + (uint)*(ushort *)(&DAT_0801f222 + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801f17c:
      DAT_200049b5 = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar7 = true;
    switch(uVar4) {
    case 0:
switchD_0801f236_caseD_0:
      local_28 = local_28 + 1 & 0xffff;
LAB_0801f852:
      local_2c = (uint)(byte)(&DAT_20006099)[local_28 * 0x11];
      if (local_10 != 0x25) {
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if ((uint)local_20[0] == local_2c * 2) {
          local_1c = 0;
          for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
            local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
            local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
            uVar1 = FUN_0801e540(local_48,local_44);
            *(undefined1 *)((int)&local_3c + local_40) = uVar1;
          }
          local_40 = local_28 & 0xff;
          FUN_0802312c(0,local_40,&local_3c);
          DAT_200049b5 = 0;
          return local_2c;
        }
        DAT_200049b5 = 0;
        return local_2c;
      }
      DAT_200049b5 = 0;
      return local_2c;
    case 1:
    case 5:
      goto LAB_0801f17c;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_0801f9a4;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_0801f95e;
    case 6:
      goto switchD_0801f236_caseD_6;
    case 7:
      goto switchD_0801f236_caseD_7;
    case 9:
      if (local_10 != 0x25) {
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049b5 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049b5 = 0;
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
                 FUN_0801e540(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar5,
                              uVar6,*(undefined1 *)(local_c + 0xd));
            puVar5 = auStack_4c;
            uVar6 = extraout_r3_03;
            bVar7 = true;
          }
          FUN_0802357c(0,DAT_200049b5,auStack_4c);
          DAT_200049b5 = 0;
          return local_2c;
        }
        DAT_200049b5 = 0;
        return local_2c;
      }
      DAT_200049b5 = 0;
      return local_2c;
    case 0xe:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049b5;
        FUN_080215d8(0,local_2c,1);
        DAT_200049b5 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_200049b5;
      FUN_080215d8(0,local_2c);
      DAT_200049b5 = 0;
      return local_2c;
    default:
      goto switchD_0801f236_default;
    }
  }
  goto LAB_0801f778;
switchD_0801f25e_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_22;
switchD_0801f25e_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_21;
switchD_0801f25e_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_20;
switchD_0801f25e_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1f;
switchD_0801f25e_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1e;
switchD_0801f25e_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1d;
switchD_0801f25e_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1c;
switchD_0801f25e_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1b;
switchD_0801f25e_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_1a;
switchD_0801f25e_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_19;
switchD_0801f25e_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_18;
switchD_0801f25e_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_17;
switchD_0801f25e_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_16;
switchD_0801f25e_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_15;
switchD_0801f25e_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_14;
switchD_0801f25e_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_13;
switchD_0801f25e_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_12;
switchD_0801f25e_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f25e_caseD_11;
switchD_0801f25e_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801f236_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f236_caseD_0;
switchD_0801f25e_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801f236_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f778:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801f78c:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08023092(0,local_2c,1);
    DAT_200049b5 = 0;
    return local_2c;
  }
  local_2c = local_28 & 0xff;
  FUN_08023092(0,local_2c);
  DAT_200049b5 = 0;
  return local_2c;
}



/* ENTRY 0x0801fbea : FUN_0801fbea */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801fbea(int param_1,undefined4 param_2)

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
  iVar3 = FUN_0801e5de(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004b75 = 1;
    iVar3 = FUN_0801e68e(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004b79 = *(undefined1 *)(local_c + 2);
        DAT_20004b7a = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08020fde(1,local_30,local_2c);
      }
      else {
        DAT_20004b79 = *(undefined1 *)(local_c + 2);
        DAT_20004b7a = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004d32 = DAT_20004d32 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801e540(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801e540(local_30,local_2c);
  uVar4 = (uint)DAT_20004b75;
  if (uVar4 == 0xbe) {
LAB_080204c8:
    if (local_10 != 0x25) {
      DAT_20004b75 = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_20004b75 = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_20004b75 = 0;
      return local_2c;
    }
    if (local_1c == 0) {
      if (local_20[0] == 0xc) {
        local_1c = 0;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
          local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801e540(local_58,local_54);
          auStack_4c[local_50] = uVar1;
        }
        local_50 = (uint)DAT_20004b75;
        FUN_0802357c(1,local_50,auStack_4c);
        DAT_20004b75 = 0;
        return local_2c;
      }
      DAT_20004b75 = 0;
      return local_2c;
    }
    DAT_20004b75 = 0;
    return local_2c;
  }
  if (0xbe < uVar4) {
    uVar4 = uVar4 - 0xbf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
LAB_0802047e:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
         ((local_1c == 0 && (local_20[0] == 0)))) {
        local_2c = (uint)DAT_20004b75;
        FUN_0802351a(1,local_2c);
        DAT_20004b75 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004b75;
      FUN_0802351a(1,local_2c,0);
      DAT_20004b75 = 0;
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
      goto LAB_0801fc74;
    case 2:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e540(local_34,local_30);
        (&DAT_20004c45)[local_2c] = uVar1;
      }
      break;
    case 3:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e540(local_34,local_30);
        (&DAT_20004d17)[local_2c] = uVar1;
      }
      break;
    case 4:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b75;
        FUN_08021768(1,local_2c);
      }
      else {
        local_2c = (uint)DAT_20004b75;
        FUN_08021768(1,local_2c,0);
      }
      break;
    case 0x11:
      goto switchD_0801fd58_caseD_11;
    case 0x12:
      goto switchD_0801fd58_caseD_12;
    case 0x13:
      goto switchD_0801fd58_caseD_13;
    case 0x14:
      goto switchD_0801fd58_caseD_14;
    case 0x15:
      goto switchD_0801fd58_caseD_15;
    case 0x16:
      goto switchD_0801fd58_caseD_16;
    case 0x17:
      goto switchD_0801fd58_caseD_17;
    case 0x18:
      goto switchD_0801fd58_caseD_18;
    case 0x19:
      goto switchD_0801fd58_caseD_19;
    case 0x1a:
      goto switchD_0801fd58_caseD_1a;
    case 0x1b:
      goto switchD_0801fd58_caseD_1b;
    case 0x1c:
      goto switchD_0801fd58_caseD_1c;
    case 0x1d:
      goto switchD_0801fd58_caseD_1d;
    case 0x1e:
      goto switchD_0801fd58_caseD_1e;
    case 0x1f:
      goto switchD_0801fd58_caseD_1f;
    case 0x20:
      goto switchD_0801fd58_caseD_20;
    case 0x21:
      goto switchD_0801fd58_caseD_21;
    case 0x22:
      goto switchD_0801fd58_caseD_22;
    case 0x23:
      goto switchD_0801fd58_caseD_23;
    case 0x24:
      goto switchD_0801fd58_caseD_24;
    case 0x27:
      local_28 = local_28 + 1 & 0xffff;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801fd58_caseD_23;
    case 0x28:
      local_28 = local_28 + 1 & 0xffff;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801fd58_caseD_24;
    default:
      goto switchD_0801fd30_default;
    }
    DAT_20004b75 = 0;
    return local_2c;
  }
  if (uVar4 != 0xae) {
    if (uVar4 < 0xaf) {
      if (uVar4 == 0xa6) {
        if (local_10 != 0x25) {
          DAT_20004b75 = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_20004b75 = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_20004b75 = 0;
          return local_2c;
        }
        if (local_1c == 0) {
          if (local_20[0] == 0xc) {
            local_1c = 0;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
              local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e540(local_58,local_54);
              auStack_4c[local_50] = uVar1;
            }
            local_50 = (uint)DAT_20004b75;
            FUN_0802156c(1,local_50,auStack_4c);
            DAT_20004b75 = 0;
            return local_2c;
          }
          DAT_20004b75 = 0;
          return local_2c;
        }
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (uVar4 < 0xa7) {
        if (uVar4 == 0x44) {
          if (local_20[0] != 0x76) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801e540(local_40,local_3c);
          DAT_20004cdc = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004cde)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_0801e540(local_40,local_3c);
          DAT_20004cdd = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004cfc)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004d04 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004d05 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004d06 = FUN_0801e540(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_0801e540(local_44,local_40);
            (&DAT_20004d07)[local_3c] = uVar1;
          }
          DAT_20004d0e = FUN_0801e5b2(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004d14 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004d15 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004d0c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004d12 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004d13 = FUN_0801e540(local_40,local_3c);
          DAT_20004d10 = FUN_0801e5b2(local_c + 0x7f);
          DAT_20004b75 = 0;
          return local_2c;
        }
        if (uVar4 < 0x45) {
          if (uVar4 == 0x32) goto LAB_0802047e;
          if (uVar4 == 0x35) {
            if (local_10 != 0x25) {
              DAT_20004b75 = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_20004b75 = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_20004b75 = 0;
              return local_2c;
            }
            if (local_20[0] == 0x1c) {
              local_1c = 0;
              for (local_50 = 0; local_50 < 0xe; local_50 = local_50 + 1 & 0xff) {
                local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
                local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
                uVar1 = FUN_0801e540(local_58,local_54);
                auStack_4c[local_50] = uVar1;
              }
              local_50 = (uint)DAT_20004b75;
              FUN_0802357c(1,local_50,auStack_4c);
              DAT_20004b75 = 0;
              return local_2c;
            }
            DAT_20004b75 = 0;
            return local_2c;
          }
          bVar5 = uVar4 == 0x42;
LAB_0801fd00:
          if (!bVar5) {
            DAT_20004b75 = 0;
            return local_2c;
          }
          if (local_20[0] != 0xba) {
            return 0;
          }
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801e540(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801e540(local_40,local_3c);
          DAT_20004c77 = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_c + local_3c * 4 + 0x13;
            uVar2 = FUN_0801e5b2();
            (&DAT_20004c78)[local_3c] = uVar2;
          }
          local_3c = (uint)*(byte *)(local_c + 0x8c);
          local_40 = (uint)*(byte *)(local_c + 0x8b);
          local_38 = FUN_0801e540(local_40,local_3c);
          DAT_20004cb8 = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = local_3c * 4 + 0x8d + local_c;
            uVar2 = FUN_0801e5b2();
            (&DAT_20004cba)[local_3c] = uVar2;
          }
          DAT_20004cce = FUN_0801e5b2(local_c + 0xad);
          DAT_20004cd0 = FUN_0801e5b2(local_c + 0xb1);
          DAT_20004cd2 = FUN_0801e5b2(local_c + 0xb5);
          local_3c = (uint)*(byte *)(local_c + 0xba);
          local_40 = (uint)*(byte *)(local_c + 0xb9);
          DAT_20004cd4 = FUN_0801e540(local_40,local_3c);
          DAT_20004cd6 = FUN_0801e5b2(local_c + 0xbb);
          DAT_20004cd8 = FUN_0801e5b2(local_c + 0xbf);
          DAT_20004cda = FUN_0801e5b2(local_c + 0xc3);
          DAT_20004b75 = 0;
          return local_2c;
        }
        if (uVar4 == 0xa0) goto LAB_08020362;
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
              uVar1 = FUN_0801e540(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                   *(undefined1 *)(local_c + local_6c * 2 + 0xe));
              auStack_68[local_6c] = uVar1;
            }
            FUN_0802357c(1,DAT_20004b75,auStack_68);
            DAT_20004b75 = 0;
            return local_2c;
          }
          FUN_0802351a(1,DAT_20004b75,0);
          DAT_20004b75 = 0;
          return local_2c;
        }
        bVar5 = false;
        if (uVar4 != 0xa4) goto LAB_0801fd00;
        goto LAB_0802029c;
      }
      uVar4 = uVar4 - 0xa7;
      bVar5 = 6 < uVar4;
switchD_0801fd30_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x0801fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801fd1c + (uint)*(ushort *)(&DAT_0801fd1c + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801fc74:
      DAT_20004b75 = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xaf;
    bVar5 = true;
    switch(uVar4) {
    case 0:
switchD_0801fd30_caseD_0:
      local_28 = local_28 + 1 & 0xffff;
LAB_08020362:
      local_2c = (uint)(byte)(&DAT_20006198)[local_28 * 0x11];
      if (local_10 != 0x25) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if ((uint)local_20[0] == local_2c * 2) {
          local_1c = 0;
          for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
            local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
            local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
            uVar1 = FUN_0801e540(local_48,local_44);
            *(undefined1 *)((int)&local_3c + local_40) = uVar1;
          }
          local_40 = local_28 & 0xff;
          FUN_0802312c(1,local_40,&local_3c);
          DAT_20004b75 = 0;
          return local_2c;
        }
        DAT_20004b75 = 0;
        return local_2c;
      }
      DAT_20004b75 = 0;
      return local_2c;
    case 1:
    case 5:
      goto LAB_0801fc74;
    case 2:
    case 0xb:
    case 0xd:
      goto LAB_080204c8;
    case 3:
    case 4:
    case 8:
    case 10:
    case 0xc:
      goto LAB_0802047e;
    case 6:
      goto switchD_0801fd30_caseD_6;
    case 7:
      goto switchD_0801fd30_caseD_7;
    case 9:
      if (local_10 != 0x25) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b75 = 0;
        return local_2c;
      }
      if (local_1c == 0) {
        if (local_20[0] == 2) {
          local_1c = 0;
          for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
            local_54 = (uint)*(byte *)(local_c + 0xe);
            local_58 = (uint)*(byte *)(local_c + 0xd);
            uVar1 = FUN_0801e540(local_58,local_54);
            auStack_4c[local_50] = uVar1;
          }
          local_50 = (uint)DAT_20004b75;
          FUN_0802357c(1,local_50,auStack_4c);
          DAT_20004b75 = 0;
          return local_2c;
        }
        DAT_20004b75 = 0;
        return local_2c;
      }
      DAT_20004b75 = 0;
      return local_2c;
    case 0xe:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b75;
        FUN_080215d8(1,local_2c);
        DAT_20004b75 = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004b75;
      FUN_080215d8(1,local_2c,0);
      DAT_20004b75 = 0;
      return local_2c;
    default:
      goto switchD_0801fd30_default;
    }
  }
  goto LAB_08020288;
switchD_0801fd58_caseD_24:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_22;
switchD_0801fd58_caseD_23:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_21;
switchD_0801fd58_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_20;
switchD_0801fd58_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1f;
switchD_0801fd58_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1e;
switchD_0801fd58_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1d;
switchD_0801fd58_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1c;
switchD_0801fd58_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1b;
switchD_0801fd58_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_1a;
switchD_0801fd58_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_19;
switchD_0801fd58_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_18;
switchD_0801fd58_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_17;
switchD_0801fd58_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_16;
switchD_0801fd58_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_15;
switchD_0801fd58_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_14;
switchD_0801fd58_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_13;
switchD_0801fd58_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_12;
switchD_0801fd58_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd58_caseD_11;
switchD_0801fd58_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801fd30_caseD_7:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801fd30_caseD_0;
switchD_0801fd58_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801fd30_caseD_6:
  local_28 = local_28 + 1 & 0xffff;
LAB_08020288:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0802029c:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08023092(1,local_2c);
    DAT_20004b75 = 0;
    return local_2c;
  }
  local_2c = local_28 & 0xff;
  FUN_08023092(1,local_2c,0);
  DAT_20004b75 = 0;
  return local_2c;
}



/* ENTRY 0x08020756 : FUN_08020756 */

bool FUN_08020756(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0801e540(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  uVar2 = FUN_0801e540(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  return (~((uVar1 & 0xf) + ((int)uVar2 >> 4) + (uVar2 & 0xf)) + 1 & 0xf) == (int)uVar1 >> 4;
}



/* ENTRY 0x080207a4 : FUN_080207a4 */

bool FUN_080207a4(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 0;
  uVar4 = FUN_0801e540(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  iVar5 = FUN_0801e540(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  uVar4 = iVar5 + (uVar4 & 0xff) * 0x100 & 0xfff;
  for (uVar6 = 1; uVar6 <= uVar4 + 0xc; uVar6 = uVar6 + 1 & 0xffff) {
    uVar1 = *(byte *)(param_1 + uVar6) + uVar1;
  }
  sVar2 = FUN_0801e540(*(undefined1 *)(param_1 + uVar4 + 0xd),*(undefined1 *)(param_1 + uVar4 + 0xe)
                      );
  sVar3 = FUN_0801e540(*(undefined1 *)(param_1 + uVar4 + 0xf),
                       *(undefined1 *)(param_1 + uVar4 + 0x10));
  return (ushort)(~uVar1 + 1) == (ushort)(sVar3 + sVar2 * 0x100);
}



/* ENTRY 0x0802082c : FUN_0802082c */

void FUN_0802082c(void)

{
  DAT_200049b5 = 0;
  DAT_20004b75 = 0;
  FUN_08023010();
  FUN_08013cb0(0x2580);
  FUN_08014010(0x2580);
  return;
}



/* ENTRY 0x08020858 : FUN_08020858 */

uint FUN_08020858(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_200049b6 == '\0') && (DAT_20004b76 == '\0')) {
    uVar1 = ((uint)DAT_20004b12 * 100) / (uint)DAT_20004b16;
    uVar2 = ((uint)DAT_20004cd2 * 100) / (uint)DAT_20004cd6;
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



/* ENTRY 0x080208b2 : FUN_080208b2 */

uint FUN_080208b2(void)

{
  uint uVar1;
  
  if ((DAT_200049b6 == '\0') && (DAT_20004b76 == '\0')) {
    uVar1 = ((((uint)DAT_20004b12 * 0x32) / (uint)DAT_20004b16 +
             ((uint)DAT_20004cd2 * 0x32) / (uint)DAT_20004cd6) * 7) / 100;
    if (6 < uVar1) {
      uVar1 = 6;
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



/* ENTRY 0x08020910 : FUN_08020910 */

void FUN_08020910(int param_1)

{
  (&DAT_200049b8)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0;
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_20004b70 = DAT_20004b70 + 1;
    FUN_08013f9c(&DAT_200049c5,5);
  }
  else {
    DAT_20004d30 = DAT_20004d30 + 1;
    FUN_080142f4(&DAT_200049c5 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x080209b4 : FUN_080209b4 */

void FUN_080209b4(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)DAT_200009b8 * 3;
  bVar2 = 0;
  (&DAT_200049b8)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0;
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049c8)[param_1 * 0x1c0] = 4;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0;
  (&DAT_200049ca)[param_1 * 0x1c0] = (char)(uVar1 >> 0xe);
  (&DAT_200049cb)[param_1 * 0x1c0] = (char)(uVar1 >> 6);
  (&DAT_200049cc)[param_1 * 0x1c0] = (char)uVar1 * '\x04';
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049c5)[uVar1 + param_1 * 0x1c0];
  }
  (&DAT_200049cd)[param_1 * 0x1c0] = bVar2;
  if (param_1 == 0) {
    DAT_20004b70 = DAT_20004b70 + 1;
    FUN_08013f9c(&DAT_200049c5,9);
  }
  else {
    DAT_20004d30 = DAT_20004d30 + 1;
    FUN_080142f4(&DAT_200049c5 + param_1 * 0x1c0,9);
  }
  return;
}



/* ENTRY 0x08020aae : FUN_08020aae */

void FUN_08020aae(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009bc;
  uVar2 = (uint)DAT_200009b8 * 3;
  bVar3 = 0;
  (&DAT_200049b8)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0;
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049c8)[param_1 * 0x1c0] = 6;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0;
  (&DAT_200049ca)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_200049cb)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_200049cc)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_200049cd)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_200049ce)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_200049c5)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_200049cf)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_20004b70 = DAT_20004b70 + 1;
    FUN_08013f9c(&DAT_200049c5,0xb);
  }
  else {
    DAT_20004d30 = DAT_20004d30 + 1;
    FUN_080142f4(&DAT_200049c5 + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x08020bc6 : FUN_08020bc6 */

void FUN_08020bc6(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_200009b8 * 0xc - param_2;
  bVar2 = 0;
  if (uVar3 < 0x80) {
    uVar3 = uVar3 + 4 & 0xff;
  }
  else {
    uVar3 = 0x84;
  }
  (&DAT_200049b8)[param_1 * 0x1c0] = 99;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0;
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 99;
  (&DAT_200049c8)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_200049c9)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_200049ca)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_200049cb)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_200049cc)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049c5)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049cd)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_200049cd)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_200049c9)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20004b70 = DAT_20004b70 + 1;
    FUN_08013f9c(&DAT_200049c5,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004d30 = DAT_20004d30 + 1;
    FUN_080142f4(&DAT_200049c5 + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x08020d32 : FUN_08020d32 */

void FUN_08020d32(int param_1)

{
  (&DAT_200049b8)[param_1 * 0x1c0] = 100;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0;
  (&DAT_200049c5)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049c7)[param_1 * 0x1c0] = 100;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_20004b70 = DAT_20004b70 + 1;
    FUN_08013f9c(&DAT_200049c5,5);
  }
  else {
    DAT_20004d30 = DAT_20004d30 + 1;
    FUN_080142f4(&DAT_200049c5 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08020dd6 : FUN_08020dd6 */

byte FUN_08020dd6(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_200049bd)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_200049ba)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b9)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_200009b8 * 0xc < (&DAT_200049c0)[param_1 * 0x70] + 0x80) {
        (&DAT_200049bd)[param_1 * 0x1c0] = 100;
        FUN_08020d32(param_1);
        return 1;
      }
      (&DAT_200049bd)[param_1 * 0x1c0] = 99;
      (&DAT_200049c0)[param_1 * 0x70] = (&DAT_200049c0)[param_1 * 0x70] + 0x80;
      FUN_08020bc6(param_1,(&DAT_200049c0)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_200049bd)[param_1 * 0x1c0] = 0x61;
    FUN_08020910(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_200049bb)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_200049bd)[param_1 * 0x1c0] = 0x61;
      FUN_08020910(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_200049ba)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b9)[param_1 * 0x1c0] == 'a')) {
        (&DAT_200049bd)[param_1 * 0x1c0] = 0x62;
        FUN_08020aae(param_1);
        return 1;
      }
      (&DAT_200049bd)[param_1 * 0x1c0] = 0x61;
      FUN_08020910(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_200049ba)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b9)[param_1 * 0x1c0] == 'c')) {
        (&DAT_200049bd)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_200049bd)[param_1 * 0x1c0] = 0x61;
      FUN_08020910(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_200049ba)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b9)[param_1 * 0x1c0] == 'b')) {
      (&DAT_200049bd)[param_1 * 0x1c0] = 99;
      (&DAT_200049c0)[param_1 * 0x70] = 0;
      FUN_08020bc6(param_1,(&DAT_200049c0)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_200049bd)[param_1 * 0x1c0] = 0x61;
      FUN_08020910(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x08020fde : FUN_08020fde */

void FUN_08020fde(void)

{
  return;
}



/* ENTRY 0x08020fec : FUN_08020fec */

void FUN_08020fec(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_08024230();
  FUN_080240b4(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009c0 = FUN_080240c0(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_080240b4(0x34);
  DAT_200009c0 = FUN_08024124(&DAT_08029000,param_1);
  DAT_200009c0 = FUN_08024124(&DAT_08029004,param_2);
  FUN_08024114();
  return;
}



/* ENTRY 0x0802103a : FUN_0802103a */

void FUN_0802103a(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_08024230();
  FUN_080240b4(0x34);
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    DAT_200009c0 = FUN_0802415c(param_1 * 0xc + 0x8029008 + uVar1 * 4,
                                *(undefined4 *)(param_2 + uVar1 * 4));
  }
  FUN_080240b4(0x34);
  FUN_08024114();
  return;
}



/* ENTRY 0x0802107c : FUN_0802107c */

short FUN_0802107c(byte *param_1,int param_2)

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



/* ENTRY 0x08021098 : FUN_08021098 */

void FUN_08021098(byte *param_1,int param_2)

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



/* ENTRY 0x080210dc : FUN_080210dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080210dc(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009b8 = _DAT_08029000;
  DAT_200009ba = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_08021098(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009bc = FUN_0802107c(0x8029008,(uint)DAT_200009b8 * 0xc);
    if (DAT_200009ba == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x08021136 : FUN_08021136 */

void FUN_08021136(undefined1 param_1,undefined1 param_2)

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
  
  FUN_08023b5e(&local_24,0x14);
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
  uVar1 = FUN_08021098(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0801ac0c(&local_24);
  return;
}



/* ENTRY 0x0802119a : FUN_0802119a */

uint FUN_0802119a(int param_1)

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
  uVar2 = FUN_08021098(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if ((local_1a == *(char *)(param_1 + 0x12)) && (local_19 == *(char *)(param_1 + 0x13))) {
    DAT_200009ac = 0x14;
    local_2c[0] = 0xaa;
    local_2c[1] = 0x55;
    uVar3 = (uint)local_1b;
    if (uVar3 == 0x10) {
      DAT_200009ba = CONCAT11(local_2c[2],local_2c[3]);
      DAT_200009b8 = local_1e;
      DAT_200009be = 0;
      local_1c = 0x7a;
      local_1b = 0x10;
      if (local_1e < 0x16a9) {
        FUN_08020fec(local_1e,DAT_200009ba);
      }
      else {
        local_1e = 0;
        local_2c[3] = 0;
        local_2c[2] = 0;
        DAT_200009ba = 0;
        DAT_200009b8 = 0;
      }
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 < 0x11) {
      if (((uVar3 != 0) && (uVar3 == 1)) && (uVar3 = FUN_080210dc(), uVar3 == 1)) {
        FUN_0801e76e(0);
        uVar3 = FUN_0801e76e(1);
      }
    }
    else if (uVar3 == 0x11) {
      if (DAT_200009b8 == 0) {
        uVar3 = 0;
      }
      else {
        if (DAT_200009be == local_1e) {
          uVar3 = (uint)DAT_200009be;
          FUN_0802103a(DAT_200009be,local_2c + 2);
          DAT_200009be = DAT_200009be + 1;
          DAT_20003120 = (undefined1)((uVar3 * 0x32) / (uint)DAT_200009b8);
        }
        else if (DAT_200009be == 0) {
          local_1e = 0;
        }
        else {
          local_1e = CONCAT11((char)(DAT_200009be - 1 >> 8),(char)DAT_200009be + -1);
        }
        local_1c = 0x7a;
        local_1b = 0x11;
        uVar3 = 1;
        bVar1 = true;
      }
    }
    else if (uVar3 == 0x12) {
      uVar4 = FUN_08021098(0x8029008,(uint)DAT_200009b8 * 0xc);
      DAT_200009bc = FUN_0802107c(0x8029008,(uint)DAT_200009b8 * 0xc);
      uVar3 = (uint)DAT_200009ba;
      if ((uVar3 == uVar4) && (uVar3 = (uint)DAT_200009b8, 1000 < uVar3)) {
        local_2c[2] = (undefined1)(uVar4 >> 8);
        local_2c[3] = (undefined1)uVar4;
        local_1e = DAT_200009b8;
        local_1c = 0x7a;
        local_1b = 0x12;
        bVar1 = true;
        FUN_0801e76e(0);
        uVar3 = FUN_0801e76e(1);
      }
    }
    if (bVar1) {
      uVar2 = FUN_08021098(local_2c + 2,0x10);
      local_1a = (char)((ushort)uVar2 >> 8);
      local_19 = (char)uVar2;
      uVar3 = FUN_0801a896(local_2c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08021400 : FUN_08021400 */

int FUN_08021400(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003efe)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003eff)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f00)[uVar2 * 0x14 + iVar1] = (&DAT_20004b57)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f0e)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f01)[uVar2 * 0x14 + iVar1] = (&DAT_20004b57)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x080214b8 : FUN_080214b8 */

int FUN_080214b8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003efe)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003eff)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003f00)[uVar2 * 0x14 + iVar1] = (&DAT_20004a85)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f0e)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003f01)[uVar2 * 0x14 + iVar1] = (&DAT_20004a85)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x0802156c : FUN_0802156c */

void FUN_0802156c(byte param_1,int param_2,int param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  if (param_2 == 0xa6) {
    for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
      auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    local_18 = (param_1 & 1) + 0x76;
    local_17 = 0xa6;
    uVar1 = FUN_08021098(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801ac64(&local_28);
  }
  return;
}



/* ENTRY 0x080215d8 : FUN_080215d8 */

void FUN_080215d8(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) + 0x76;
  local_17 = param_2;
  uVar1 = FUN_08021098(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  return;
}



/* ENTRY 0x08021638 : FUN_08021638 */

void FUN_08021638(int param_1)

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
  uVar2 = FUN_08021098(local_2c + 2,0x10);
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
    if (((bVar1) && ((&DAT_20004b6f)[uVar3 * 0x1c0] != '\0')) &&
       ((&DAT_20004b56)[uVar3 * 0x1c0] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20004a9d)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
      }
      (&DAT_20004ab5)[uVar3 * 0x1c0] = (char)uVar5;
      (&DAT_20004b56)[uVar3 * 0x1c0] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x08021768 : FUN_08021768 */

void FUN_08021768(byte param_1,undefined4 param_2,undefined1 param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1f;
  local_17 = 0xc3;
  uVar1 = FUN_08021098(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  return;
}



/* ENTRY 0x080217cc : FUN_080217cc */

void FUN_080217cc(int param_1)

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
    FUN_08021400(uVar3);
  }
  else if (((&DAT_20004b6f)[uVar3 * 0x1c0] != '\0') && ((&DAT_20004b56)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a9d)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004aab)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004aae)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004ab5)[uVar3 * 0x1c0] = 0x14;
    (&DAT_20004b56)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x080218b0 : FUN_080218b0 */

void FUN_080218b0(int param_1)

{
  FUN_080214b8(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x080218c4 : FUN_080218c4 */

void FUN_080218c4(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009c1) {
  case '\0':
    local_10 = (int)DAT_20004ac4;
    local_14 = (uint)DAT_20004b1a;
    local_8 = (uint)DAT_20004b0e;
    local_c = (uint)DAT_20004b10;
    FUN_0801a8ee(0xf1,0,local_c,local_8,(int)DAT_20004b12,(int)DAT_20004b16,(int)DAT_20004b18);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004b06;
    local_14 = (uint)DAT_20004b04;
    local_8 = (uint)DAT_20004afc;
    local_c = (uint)DAT_20004afa;
    FUN_0801a8ee(0xf1,1,local_c,local_8,(int)DAT_20004afe,(int)DAT_20004b00,(int)DAT_20004b02);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004ac4;
    local_14 = (uint)DAT_20004ac2;
    local_8 = (uint)DAT_20004aba;
    local_c = (uint)DAT_20004ab8;
    FUN_0801a8ee(0xf1,2,local_c,local_8,(int)DAT_20004abc,(int)DAT_20004abe,(int)DAT_20004ac0);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004ad2;
    local_14 = (uint)DAT_20004ad0;
    local_8 = (uint)DAT_20004ac8;
    local_c = (uint)DAT_20004ac6;
    FUN_0801a8ee(0xf1,3,local_c,local_8,(int)DAT_20004aca,(int)DAT_20004acc,(int)DAT_20004ace);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004ae0;
    local_14 = (uint)DAT_20004ade;
    local_8 = (uint)DAT_20004ad6;
    local_c = (uint)DAT_20004ad4;
    FUN_0801a8ee(0xf1,4,local_c,local_8,(int)DAT_20004ad8,(int)DAT_20004ada,(int)DAT_20004adc);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_20004aee;
    local_14 = (uint)DAT_20004aec;
    local_8 = (uint)DAT_20004ae4;
    local_c = (uint)DAT_20004ae2;
    FUN_0801a8ee(0xf1,5,local_c,local_8,(int)DAT_20004ae6,(int)DAT_20004ae8,(int)DAT_20004aea);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004af2;
    local_c = (uint)DAT_20004af0;
    FUN_0801a8ee(0xf1,6,local_c,local_8,0,0,(int)DAT_20004b08);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004c84;
    local_14 = (uint)DAT_20004cda;
    local_8 = (uint)DAT_20004cce;
    local_c = (uint)DAT_20004cd0;
    FUN_0801a8ee(0xf2,0,local_c,local_8,(int)DAT_20004cd2,(int)DAT_20004cd6,(int)DAT_20004cd8);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004cc6;
    local_14 = (uint)DAT_20004cc4;
    local_8 = (uint)DAT_20004cbc;
    local_c = (uint)DAT_20004cba;
    FUN_0801a8ee(0xf2,1,local_c,local_8,(int)DAT_20004cbe,(int)DAT_20004cc0,(int)DAT_20004cc2);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004c84;
    local_14 = (uint)DAT_20004c82;
    local_8 = (uint)DAT_20004c7a;
    local_c = (uint)DAT_20004c78;
    FUN_0801a8ee(0xf2,2,local_c,local_8,(int)DAT_20004c7c,(int)DAT_20004c7e,(int)DAT_20004c80);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004c92;
    local_14 = (uint)DAT_20004c90;
    local_8 = (uint)DAT_20004c88;
    local_c = (uint)DAT_20004c86;
    FUN_0801a8ee(0xf2,3,local_c,local_8,(int)DAT_20004c8a,(int)DAT_20004c8c,(int)DAT_20004c8e);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004ca0;
    local_14 = (uint)DAT_20004c9e;
    local_8 = (uint)DAT_20004c96;
    local_c = (uint)DAT_20004c94;
    FUN_0801a8ee(0xf2,4,local_c,local_8,(int)DAT_20004c98,(int)DAT_20004c9a,(int)DAT_20004c9c);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004cae;
    local_14 = (uint)DAT_20004cac;
    local_8 = (uint)DAT_20004ca4;
    local_c = (uint)DAT_20004ca2;
    FUN_0801a8ee(0xf2,5,local_c,local_8,(int)DAT_20004ca6,(int)DAT_20004ca8,(int)DAT_20004caa);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004cb2;
    local_c = (uint)DAT_20004cb0;
    FUN_0801a8ee(0xf2,6,local_c,local_8,0,0,(int)DAT_20004cc8);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x0e':
    FUN_0801aa54(0xf3,0,&DAT_20004b1e);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x0f':
    FUN_0801aa54(0xf3,1,&DAT_20004b2c);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_20004b3b,DAT_20004b3a);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004b48,DAT_20004b47);
    local_10._0_3_ = CONCAT12(DAT_20004b49,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b4a,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004b4b;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004b4e,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004b4e >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004b50);
    FUN_0801aa54(0xf3,2,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_20004b3d,DAT_20004b3c);
    local_14._0_3_ = CONCAT12(DAT_20004b3e,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004b3f,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004b41,DAT_20004b40);
    local_10._0_3_ = CONCAT12(DAT_20004b42,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b43,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004b46,CONCAT11(DAT_20004b44,DAT_20004b45)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004b55,DAT_20004b54);
    FUN_0801aa54(0xf3,3,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x12':
    FUN_0801aa54(0xf4,0,&DAT_20004cde);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x13':
    FUN_0801aa54(0xf4,1,&DAT_20004cec);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004cfb,DAT_20004cfa);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004d08,DAT_20004d07);
    local_10._0_3_ = CONCAT12(DAT_20004d09,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d0a,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004d0b;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004d0e,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004d0e >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004d10);
    FUN_0801aa54(0xf4,2,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004cfd,DAT_20004cfc);
    local_14._0_3_ = CONCAT12(DAT_20004cfe,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004cff,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004d01,DAT_20004d00);
    local_10._0_3_ = CONCAT12(DAT_20004d02,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d03,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004d06,CONCAT11(DAT_20004d04,DAT_20004d05)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004d15,DAT_20004d14);
    FUN_0801aa54(0xf4,3,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200049bc;
    local_c = (uint)DAT_200049b6;
    FUN_0801a8ee(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004b7c;
    local_c = (uint)DAT_20004b76;
    FUN_0801a8ee(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009c1 = '\0';
  }
  return;
}



/* ENTRY 0x08022154 : FUN_08022154 */

void FUN_08022154(void)

{
  uint uVar1;
  
  DAT_20005dff = 0xff;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004d3c)[uVar1 * 0x40] = 0xff;
  }
  return;
}



/* ENTRY 0x08022172 : FUN_08022172 */

void FUN_08022172(undefined1 param_1)

{
  DAT_20005e33 = param_1;
  return;
}



/* ENTRY 0x0802217a : FUN_0802217a */

void FUN_0802217a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0800ab98();
    DAT_20005d74 = 0x1451090;
    DAT_20005d7c = (undefined1)param_1;
    DAT_20005d78 = FUN_080246d0();
    DAT_20005d7d = diag_cartstep;
    DAT_20005d7e = (undefined1)((uint)uVar1 >> 8);
    DAT_20005d7f = (undefined1)uVar1;
    DAT_20005d81 = diag_allwarnbit;
    DAT_20005d80 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005d86 = (undefined2)diag_TotalVoltage;
    DAT_20005d88 = (undefined2)diag_TotalCurrent;
    DAT_20005d8a = (undefined2)(diag_VehicleSpeed / 100);
    DAT_20005d8c = (undefined2)diag_VectorVol;
    DAT_20005d8e = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0800fd1e();
    DAT_20005d90 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800fd26();
    DAT_20005d92 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800fd2e();
    DAT_20005d94 = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005d95 = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005d98 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005d96 = 0x82;
      }
      else {
        DAT_20005d96 = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005d96 = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005d97 = 0x82;
      }
      else {
        DAT_20005d97 = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005d97 = 0x7f;
    }
    DAT_20005d99 = 0;
    if (diag_hall_err < 0x100) {
      DAT_20005d9a = (undefined1)diag_hall_err;
    }
    else {
      DAT_20005d9a = 0xff;
    }
  }
  return;
}



/* ENTRY 0x080222d2 : FUN_080222d2 */

undefined4 FUN_080222d2(undefined4 param_1)

{
  FUN_0802217a(param_1);
  FUN_08023a70(&DAT_20005d34,&DAT_20005d74,0x40);
  return 1;
}



/* ENTRY 0x080222ee : FUN_080222ee */

bool FUN_080222ee(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08023a70(&DAT_20005d34,(uint)DAT_200009c4 * 0x40 + 0x20004d34,0x40);
    }
    (&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] < 0xfe)) {
      FUN_08023a70(&DAT_20005d34,(uint)DAT_200009c4 * 0x40 + 0x20004d34,0x40);
      bVar1 = true;
    }
    (&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d3c)[(uint)DAT_200009c4 * 0x40] < 0xfe)) {
      FUN_08023a70(&DAT_20005d34,(uint)DAT_200009c4 * 0x40 + 0x20004d34,0x40);
      bVar1 = true;
    }
    FUN_0802217a(param_1);
    FUN_08023a70((uint)DAT_200009c4 * 0x40 + 0x20004d34,&DAT_20005d74,0x40);
  }
  DAT_200009c4 = DAT_200009c4 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x080223d8 : FUN_080223d8 */

void FUN_080223d8(void)

{
  FUN_0801dca4(&DAT_20005e38,(((uint)(ushort)DAT_20005e2d - (uint)DAT_20005e36) - 1 & 0x7fff) << 6,
               0x40);
  FUN_0801aa54(0xf9,0x80,&DAT_20005e3c);
  FUN_0801aa54(0xf9,0x81,&DAT_20005e4a);
  FUN_0801aa54(0xf9,0x82,&DAT_20005e58);
  return;
}



/* ENTRY 0x0802241e : FUN_0802241e */

void FUN_0802241e(int param_1)

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
  uVar2 = FUN_08021098(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x60) {
      DAT_20005e31 = 0x60;
    }
    else {
      if (bVar1 < 0x61) {
        if (bVar1 == 1) {
          if ((char)local_22 == '\x01') {
            FUN_0801d800(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                         local_1a);
            return;
          }
          local_22 = CONCAT13((char)((ushort)DAT_200049ac >> 8),
                              CONCAT12((char)DAT_200049ac,(short)local_22)) & 0xffffff00;
          local_1e = CONCAT11(DAT_200049af,DAT_200049ae);
          local_1c = DAT_200049a8;
          local_1b = DAT_200049a9;
          local_1a = DAT_200049aa;
          uVar2 = FUN_08021098(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a896(local_24);
          return;
        }
        if (bVar1 == 0x10) {
          FUN_0801d800(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a
                      );
          DAT_200009c6 = 0xa5;
          return;
        }
        bVar4 = bVar1 == 0x23;
      }
      else {
        if (bVar1 == 0x61) {
          DAT_20005e31 = 0x61;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xa1) {
          local_22 = DAT_20003130;
          local_1e = CONCAT11(DAT_20003135,DAT_20003134);
          local_1c = DAT_20003138;
          local_1b = DAT_2000313e;
          local_1a = DAT_2000313f;
          local_19 = DAT_20003139;
          local_18 = DAT_2000313a;
          local_17 = DAT_2000313d;
          local_16 = DAT_20003140;
          local_15 = DAT_20003141;
          uVar2 = FUN_08021098(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a896(local_24);
          return;
        }
      }
      if (bVar4) {
        if ((uint)local_1e <= (uint)local_22._2_2_) {
          DAT_20005e1d = (uint)local_22._2_2_;
          DAT_20005e25 = (uint)local_1e;
        }
        DAT_20005e31 = 0x23;
      }
    }
  }
  return;
}



/* ENTRY 0x08022648 : FUN_08022648 */

void FUN_08022648(void)

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
  
  if (DAT_20005e32 == '#') {
    local_1a = (undefined1)DAT_20005e0d;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20005e0d >> 8);
    local_18 = (undefined1)DAT_20005e1d;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20005e1d >> 8);
    local_16 = (undefined1)DAT_20005e25;
    local_15 = (undefined1)(DAT_20005e25 >> 8);
    local_14 = (undefined1)DAT_20005e21;
    local_13 = (undefined1)((uint)DAT_20005e21 >> 8);
    local_12 = (undefined1)((uint)DAT_20005e21 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20005e21 >> 0x18);
    local_10 = (undefined1)DAT_20005e29;
    local_f = (undefined1)((uint)DAT_20005e29 >> 8);
    local_e = (undefined1)((uint)DAT_20005e29 >> 0x10);
    local_d = (undefined1)((uint)DAT_20005e29 >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_08021098(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0801aaf6(0xf9,0x23,&local_1a);
    DAT_20005e32 = '\0';
  }
  else if (DAT_20005e32 == 'a') {
    if (DAT_20005e25 < DAT_20005e36) {
      FUN_080223d8();
      DAT_20005e36 = DAT_20005e36 - 1;
    }
    else {
      FUN_080223d8();
      DAT_20005e32 = '\0';
    }
  }
  return;
}



/* ENTRY 0x0802276a : FUN_0802276a */

undefined4 FUN_0802276a(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_0801dcee(uVar3 << 6);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0801dcee(*param_2 << 6);
    if (iVar1 == -1) {
      iVar1 = FUN_0801dcee(*param_1 << 6);
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



/* ENTRY 0x080227ca : FUN_080227ca */

void FUN_080227ca(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009cc = DAT_200009cc + 1;
  if ((DAT_20005db5 != '\0') && (DAT_20005db5 = FUN_0801dd80(), DAT_20005db5 != '\0')) {
    return;
  }
  if (DAT_20005db4 == 0x22) {
LAB_08022f82:
    if (DAT_20005dbb == 0) {
      DAT_20005db4 = 0;
    }
    else {
      DAT_20005db5 = '\x01';
      DAT_20005db7 = (uint)DAT_20005dbd << 0x10;
      FUN_0801de1e(1,DAT_20005dbd);
      DAT_20005dbd = DAT_20005dbd + 1;
      DAT_20005dbb = DAT_20005dbb + -1;
      DAT_20005db4 = 0x25;
    }
  }
  else {
    if (DAT_20005db4 < 0x23) {
      if (DAT_20005db4 == 0) {
        if (DAT_20005dff == 0) {
          if (DAT_20005e31 == 0x60) {
            DAT_20005e32 = 0;
            DAT_20005e31 = 0;
          }
          else if (DAT_20005e31 == 0x61) {
            if (DAT_20005e09 != 0) {
              DAT_20005e32 = 0x61;
            }
            DAT_20005e31 = 0;
          }
          if (DAT_20005e32 != 0) {
            return;
          }
          if (DAT_20005e33 == 0xef) {
            iVar1 = FUN_080222d2(0xef);
            if (iVar1 != 0) {
              DAT_20005dff = 0x30;
            }
            DAT_20005e33 = 0;
            DAT_20005e34 = 'J';
          }
          else if ((DAT_20005e33 & 0xf0) == 0xe0) {
            iVar1 = FUN_080222ee(DAT_20005e33);
            if (iVar1 != 0) {
              DAT_20005dff = 0x30;
            }
            DAT_20005e33 = 0;
            DAT_20005e34 = 'J';
          }
          else if (DAT_20005e34 == '\0') {
            if (DAT_20005e33 == 0xf0) {
              iVar1 = FUN_080222ee(0xf0);
              if (iVar1 != 0) {
                DAT_20005dff = 0x30;
              }
              DAT_20005e33 = 0;
              DAT_20005e35 = 'J';
            }
            else if (DAT_20005e35 == '\0') {
              if (DAT_20005e33 == 0) {
                if (DAT_20005e31 == 0x23) {
                  DAT_20005dff = DAT_20005e31;
                }
                else if (DAT_200009c6 == -0x5b) {
                  DAT_20005dff = 0x10;
                  DAT_200009c6 = '\0';
                }
                else if ((DAT_200009cc % 0x15 == 0x11) && (iVar1 = FUN_080222ee(0), iVar1 != 0)) {
                  DAT_20005dff = 0x30;
                }
              }
              else {
                iVar1 = FUN_080222ee(DAT_20005e33);
                if (iVar1 != 0) {
                  DAT_20005dff = 0x30;
                }
                DAT_20005e33 = 0;
              }
            }
            else {
              iVar1 = FUN_080222ee(0xfe);
              if (iVar1 != 0) {
                DAT_20005dff = 0x30;
              }
              DAT_20005e35 = DAT_20005e35 + -1;
            }
          }
          else {
            iVar1 = FUN_080222ee(0xff);
            if (iVar1 != 0) {
              DAT_20005dff = 0x30;
            }
            DAT_20005e34 = DAT_20005e34 + -1;
          }
        }
        if (DAT_20005dff == 0x22) {
          iVar1 = FUN_0802276a(&DAT_20005e01);
          if (iVar1 == 1) {
            DAT_20005e2d = DAT_20005e01;
            DAT_20005dff = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20005e2d = 0;
            DAT_20005db6 = 0x22;
            DAT_20005dff = 0x23;
          }
          goto code_r0x08022e30;
        }
        if (DAT_20005dff < 0x23) {
          if (DAT_20005dff == 0x12) {
            DAT_20005dbf = 0x1451090;
            DAT_20005dbb = 4;
            DAT_20005dbd = 0;
            DAT_20005db7 = 0x200000;
            DAT_20005db6 = 3;
            DAT_20005e2d = 0;
            DAT_20005dff = 0x20;
            goto code_r0x08022e30;
          }
          if (0x12 < DAT_20005dff) {
            if (DAT_20005dff == 0x20) {
              DAT_20005e01 = 0;
              DAT_20005e05 = 0x3fff;
              DAT_20005dff = 0x21;
            }
            else {
              bVar2 = DAT_20005dff == 0x21;
              if (!bVar2) goto LAB_080229d6;
            }
            iVar1 = FUN_0802276a(&DAT_20005e01);
            if (iVar1 == 1) {
              DAT_20005e2d = DAT_20005e01;
              DAT_20005dff = 0x23;
            }
            else if (iVar1 == 2) {
              DAT_20005e01 = 0x4000;
              DAT_20005e05 = 0x7fff;
              DAT_20005dff = 0x22;
            }
            goto code_r0x08022e30;
          }
          if (DAT_20005dff == 0) goto code_r0x08022e30;
          if (DAT_20005dff == 0x10) {
            DAT_20005db6 = 0x22;
            DAT_20005dff = 0x11;
            goto code_r0x08022e30;
          }
          bVar2 = DAT_20005dff == 0x11;
        }
        else {
          if (DAT_20005dff == 0x31) {
            FUN_08023a70(&DAT_20005dbf,&DAT_20005d34,0x40);
            DAT_20005dbb = 0x40;
            DAT_20005dbd = 0;
            DAT_20005db7 = DAT_20005e2d << 6;
            DAT_20005db6 = 3;
            DAT_20005e2d = DAT_20005e2d + 1 & 0x7fff;
            DAT_20005dff = 0;
            goto code_r0x08022e30;
          }
          if (DAT_20005dff < 0x32) {
            if (DAT_20005dff == 0x23) {
              DAT_20005e09 = 0x3ff8;
              DAT_20005e0d = 0x3ff7;
              iVar1 = FUN_0801dcee(((DAT_20005e2d & 0xffff) - 0x3ff8 & 0x7fff) << 6);
              if ((iVar1 == -1) && (DAT_20005e2d <= DAT_20005e0d)) {
                if (DAT_20005e2d == 0) {
                  DAT_20005e0d = 0;
                  DAT_20005e09 = 0;
                }
                else {
                  DAT_20005e0d = DAT_20005e2d - 1;
                  DAT_20005e09 = DAT_20005e2d;
                }
              }
              if (DAT_20005e09 == 0) {
                DAT_20005e31 = 0;
                DAT_20005dff = 0;
              }
              else {
                DAT_20005e11 = FUN_0801dcee((((DAT_20005e2d & 0xffff) - (DAT_20005e0d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005e15 = 0;
                DAT_20005e19 = FUN_0801dcee(((DAT_20005e2d & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
                if (DAT_20005e1d == 0) {
                  DAT_20005e1d = 0xfffe;
                }
                if (DAT_20005e0d < DAT_20005e1d) {
                  DAT_20005e1d = DAT_20005e0d;
                }
                DAT_20005e21 = FUN_0801dcee((((DAT_20005e2d & 0xffff) - (DAT_20005e1d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                if (DAT_20005e1d < DAT_20005e25) {
                  DAT_20005e25 = DAT_20005e1d;
                }
                DAT_20005e29 = FUN_0801dcee((((DAT_20005e2d & 0xffff) - (DAT_20005e25 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005e36 = (ushort)DAT_20005e1d;
                if (DAT_20005e31 == 0x23) {
                  DAT_20005e32 = DAT_20005e31;
                }
                DAT_20005e31 = 0;
                DAT_20005dff = 0;
              }
              goto code_r0x08022e30;
            }
            bVar2 = false;
            if (DAT_20005dff == 0x30) {
              if (DAT_20005e2d == 0) {
                iVar1 = FUN_0801dcee(0);
                if (iVar1 == -1) {
                  FUN_08023a70(&DAT_20005dbf,&DAT_20005d34,0x40);
                  DAT_20005dbb = 0x40;
                  DAT_20005dbd = 0;
                  DAT_20005db7 = DAT_20005e2d << 6;
                  DAT_20005db6 = 3;
                  DAT_20005e2d = DAT_20005e2d + 1 & 0x7fff;
                  DAT_20005dff = 0;
                }
                else {
                  DAT_20005db6 = 0x23;
                  DAT_20005dff = 0x31;
                }
              }
              else if (DAT_20005e2d == 0x3fff) {
                DAT_20005db6 = 0x24;
                DAT_20005dff = 0x31;
              }
              else if (DAT_20005e2d == 0x4000) {
                iVar1 = FUN_0801dcee(0x100000);
                if (iVar1 == -1) {
                  FUN_08023a70(&DAT_20005dbf,&DAT_20005d34,0x40);
                  DAT_20005dbb = 0x40;
                  DAT_20005dbd = 0;
                  DAT_20005db7 = DAT_20005e2d << 6;
                  DAT_20005db6 = 3;
                  DAT_20005e2d = DAT_20005e2d + 1 & 0x7fff;
                  DAT_20005dff = 0;
                }
                else {
                  DAT_20005db6 = 0x24;
                  DAT_20005dff = 0x31;
                }
              }
              else if (DAT_20005e2d == 0x7fff) {
                DAT_20005db6 = 0x23;
                DAT_20005dff = 0x31;
              }
              else {
                FUN_08023a70(&DAT_20005dbf,&DAT_20005d34,0x40);
                DAT_20005dbb = 0x40;
                DAT_20005dbd = 0;
                DAT_20005db7 = DAT_20005e2d << 6;
                DAT_20005db6 = 3;
                DAT_20005e2d = DAT_20005e2d + 1 & 0x7fff;
                DAT_20005dff = 0;
              }
              goto code_r0x08022e30;
            }
          }
          else {
            if (DAT_20005dff == 0x60) {
              FUN_0801dca4(&DAT_20005e38,(uint)DAT_20005e36 << 6,0x40);
              DAT_20005dff = 0;
              goto code_r0x08022e30;
            }
            bVar2 = false;
            if (DAT_20005dff == 0xff) {
              DAT_20005dff = 0x20;
              goto code_r0x08022e30;
            }
          }
        }
LAB_080229d6:
        if (bVar2) {
          DAT_20005dbd = 0x20;
          DAT_20005db6 = 2;
          DAT_20005dff = 0x12;
        }
code_r0x08022e30:
        if (DAT_20005db6 == 0x22) {
          DAT_20005db5 = '\x01';
          DAT_20005dbb = 0x20;
          DAT_20005dbd = 0;
          DAT_20005db7 = 0;
          FUN_0801de1e(0,0);
          DAT_20005db4 = 0x22;
        }
        else if (DAT_20005db6 < 0x23) {
          if (DAT_20005db6 == 1) {
            DAT_20005db5 = '\x01';
            FUN_0801de5c(0);
            DAT_20005db4 = 1;
          }
          else if (DAT_20005db6 == 2) {
            DAT_20005db5 = '\x01';
            FUN_0801de1e(0,DAT_20005dbd);
            DAT_20005db4 = 2;
          }
          else if (DAT_20005db6 == 3) {
            DAT_20005db5 = '\x01';
            FUN_0801dd8c(&DAT_20005dbf,DAT_20005db7);
            DAT_20005db4 = 0;
          }
        }
        else if (DAT_20005db6 == 0x23) {
          DAT_20005db5 = '\x01';
          DAT_20005dbb = 0x10;
          DAT_20005dbd = 0;
          DAT_20005db7 = 0;
          FUN_0801de1e(0,0);
          DAT_20005db4 = 0x23;
        }
        else if (DAT_20005db6 == 0x24) {
          DAT_20005db5 = '\x01';
          DAT_20005dbb = 0x10;
          DAT_20005dbd = 0x10;
          DAT_20005db7 = 0x100000;
          FUN_0801de1e(0,0x10);
          DAT_20005db4 = 0x24;
        }
        DAT_20005db6 = 0;
        return;
      }
      if (DAT_20005db4 == 1) {
        DAT_20005db5 = 1;
        FUN_0801de5c();
        DAT_20005db4 = 0;
        return;
      }
      bVar2 = DAT_20005db4 == 2;
    }
    else {
      if ((DAT_20005db4 == 0x23) || (DAT_20005db4 == 0x24)) goto LAB_08022f82;
      bVar2 = false;
      if (DAT_20005db4 == 0x25) {
        DAT_20005db5 = 1;
        FUN_0801de1e(0,DAT_20005dbd);
        DAT_20005db4 = 0x24;
        return;
      }
    }
    if (bVar2) {
      DAT_20005db5 = '\x01';
      FUN_0801de1e(1,DAT_20005dbd);
      DAT_20005db4 = 0;
    }
  }
  return;
}



/* ENTRY 0x08023010 : FUN_08023010 */

void FUN_08023010(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005e78)[uVar1 * 0x11] = (&DAT_0802833a)[uVar1];
    (&DAT_20005e79)[uVar1 * 0x11] = (&DAT_0802831b)[uVar1];
    (&DAT_20005f88)[uVar1 * 0x11] = (&DAT_0802833a)[uVar1];
    (&DAT_20005f89)[uVar1 * 0x11] = (&DAT_0802831b)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006098)[uVar1 * 0x11] = (&DAT_0802834a)[uVar1];
    (&DAT_20006099)[uVar1 * 0x11] = (&DAT_0802832b)[uVar1];
    (&DAT_20006197)[uVar1 * 0x11] = (&DAT_0802834a)[uVar1];
    (&DAT_20006198)[uVar1 * 0x11] = (&DAT_0802832b)[uVar1];
  }
  return;
}



/* ENTRY 0x08023092 : FUN_08023092 */

void FUN_08023092(int param_1,int param_2,int param_3)

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
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x20005e7a) = 0;
  }
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e79)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20005e78)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_08021098(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  return;
}



/* ENTRY 0x0802312c : FUN_0802312c */

void FUN_0802312c(int param_1,int param_2,int param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006099)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x2000609b + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006098)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_08021098(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  (&DAT_2000609a)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x080231d4 : FUN_080231d4 */

void FUN_080231d4(int param_1)

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
  uVar1 = FUN_08021098(local_30 + 2,0x10);
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
LAB_08023358:
    uVar4 = uVar4 + 4;
LAB_08023370:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08023376:
    uVar4 = uVar4 + 1 & 0xff;
LAB_0802337c:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08023382:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08023388:
    if ((&DAT_20004b6f)[uVar5 * 0x1c0] == '\0') {
      return;
    }
    if ((&DAT_20004b56)[uVar5 * 0x1c0] != '\0') {
      return;
    }
    for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e79)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a9d)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004ab5)[uVar5 * 0x1c0] = (&DAT_20005e79)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_20004b56)[uVar5 * 0x1c0] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x20005e7a) = 1;
    return;
  }
  if (uVar2 < 0xd9) {
    if (uVar2 == 0xd0) goto LAB_08023370;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_08023278_default;
    }
    if (uVar2 == 0xae) goto LAB_0802337c;
    if (uVar2 < 0xaf) {
      if (uVar2 == 1) {
        uVar6 = 1;
        uVar2 = 0;
        do {
          if (5 < uVar2) {
code_r0x080232b2:
            DAT_20004b6f = uVar6;
            DAT_20004d2f = uVar6;
            FUN_08023b5e(&local_44,0x14);
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
            uVar1 = FUN_08021098(&local_42,0x10);
            local_32 = (undefined1)((ushort)uVar1 >> 8);
            local_31 = (undefined1)uVar1;
            FUN_0801ac0c(&local_44);
            return;
          }
          if (local_30[uVar2 + 2] != (&DAT_0802830e)[uVar2]) {
            uVar6 = 0;
            goto code_r0x080232b2;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while( true );
      }
      if (uVar2 == 0xa0) goto LAB_080234b2;
      if (uVar2 == 0xa4) goto LAB_08023388;
      bVar7 = uVar2 == 0xa8;
LAB_0802324e:
      if (!bVar7) {
        return;
      }
      goto LAB_08023382;
    }
    if (uVar2 != 0xaf) {
      if (uVar2 == 0xb5) goto LAB_08023376;
      bVar7 = uVar2 == 0xb6;
      if (!bVar7) goto LAB_0802324e;
      goto LAB_080234a6;
    }
  }
  else {
    uVar3 = uVar2 - 0xd9;
    bVar7 = true;
    switch(uVar2) {
    case 0xd9:
      goto LAB_08023488;
    case 0xdb:
      goto LAB_08023482;
    case 0xdd:
      break;
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
      goto LAB_08023358;
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
      break;
    default:
switchD_08023278_default:
      if (bVar7) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x08023266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0802326a + (uint)(byte)(&UNK_0802326a)[uVar3] * 2))();
      return;
    }
    uVar4 = uVar4 + 1;
LAB_08023482:
    uVar4 = uVar4 + 1;
LAB_08023488:
    uVar4 = uVar4 + 5;
LAB_080234a6:
    uVar4 = uVar4 + 1 & 0xff;
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_080234b2:
  if (((&DAT_20004b6f)[uVar5 * 0x1c0] != '\0') && ((&DAT_20004b56)[uVar5 * 0x1c0] == '\0')) {
    (&DAT_20004ab5)[uVar5 * 0x1c0] = 0;
    (&DAT_20004b56)[uVar5 * 0x1c0] = local_1f;
    (&DAT_2000609a)[uVar5 * 0xff + uVar4 * 0x11] = 1;
  }
  return;
}



/* ENTRY 0x0802351a : FUN_0802351a */

void FUN_0802351a(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1d;
  local_17 = param_2;
  uVar1 = FUN_08021098(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  return;
}



/* ENTRY 0x0802357c : FUN_0802357c */

void FUN_0802357c(byte param_1,int param_2,char *param_3)

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
  
  FUN_08023b5e(&local_28,0x14);
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
    uVar1 = FUN_08021098(acStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801ac64(&local_28);
    return;
  }
  if (param_2 < 0xb9) {
    if (param_2 == 0x35) {
      for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      uVar1 = FUN_08021098(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801ac64(&local_28);
      return;
    }
    if (param_2 == 0xa1) {
      for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2];
      }
      acStack_26[0xd] = 1;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08021098(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801ac64(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      acStack_26[0xd] = 2;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08021098(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801ac64(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        acStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      acStack_26[0xd] = 3;
      acStack_26[0xe] = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08021098(acStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801ac64(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if (((param_2 == 0xba) || (param_2 == 0xbc)) || (bVar3 = false, param_2 == 0xbe))
  goto LAB_080236b6;
  if (!bVar3) {
    return;
  }
LAB_080236b6:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    acStack_26[uVar2] = param_3[uVar2];
  }
  acStack_26[0xe] = (param_1 & 1) - 0x1d;
  uVar1 = FUN_08021098(acStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801ac64(&local_28);
  return;
}



/* ENTRY 0x0802378a : FUN_0802378a */

void FUN_0802378a(int param_1)

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
  uVar1 = FUN_08021098(local_2c + 2,0x10);
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
            if (DAT_20003151 == '\x01') {
              cVar5 = DAT_20003151;
            }
            goto code_r0x0802388a;
          }
          if (local_1b == 0x35) {
            uVar4 = 1;
            cVar5 = '\x01';
            goto code_r0x0802388a;
          }
          if (local_1b != 0xa1) goto code_r0x0802388a;
        }
        else {
          if (local_1b == 0xb2) goto LAB_08023842;
          if (local_1b != 0xb3) {
            if (local_1b != 0xb7) goto code_r0x0802388a;
            goto LAB_0802385a;
          }
        }
        uVar4 = 2;
        cVar5 = '\x01';
        goto code_r0x0802388a;
      }
    }
    else if (local_1b != 0xbc) {
      if (local_1b < 0xbd) {
        if (local_1b != 0xb9) {
          if (local_1b == 0xba) goto LAB_08023850;
          if (local_1b != 0xbb) goto code_r0x0802388a;
        }
      }
      else {
        if (local_1b == 0xbe) {
LAB_0802385a:
          uVar4 = 1;
          cVar5 = '\x01';
          goto code_r0x0802388a;
        }
        if (local_1b != 0xbf) {
          if ((local_1b == 0xff) && (uVar4 = 1, DAT_20003151 == '\x01')) {
            cVar5 = DAT_20003151;
          }
          goto code_r0x0802388a;
        }
      }
LAB_08023842:
      uVar4 = 6;
      cVar5 = '\x01';
      goto code_r0x0802388a;
    }
  }
LAB_08023850:
  uVar4 = 0;
  cVar5 = '\x01';
code_r0x0802388a:
  if (((cVar5 != '\0') && ((&DAT_20004b6f)[uVar2 * 0x1c0] != '\0')) &&
     ((&DAT_20004b56)[uVar2 * 0x1c0] == '\0')) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_20004a9d)[uVar3 + uVar2 * 0x1c0] = local_2c[uVar3 + 2];
    }
    (&DAT_20004ab5)[uVar2 * 0x1c0] = (char)uVar4;
    (&DAT_20004b56)[uVar2 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x080238fc : FUN_080238fc */

undefined8 FUN_080238fc(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x08023904 : FUN_08023904 */

undefined8 FUN_08023904(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x080239d6 : FUN_080239d6 */

undefined8 FUN_080239d6(void)

{
  return 0;
}



/* ENTRY 0x080239ea : FUN_080239ea */

int FUN_080239ea(int param_1,int param_2,int param_3,uint param_4)

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
  iVar2 = FUN_080238fc(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ENTRY 0x08023a32 : FUN_08023a32 */

int FUN_08023a32(uint *param_1)

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



/* ENTRY 0x08023a70 : FUN_08023a70 */

undefined8 FUN_08023a70(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* ENTRY 0x08023afa : FUN_08023afa */

undefined8 FUN_08023afa(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* ENTRY 0x08023b5e : FUN_08023b5e */

undefined4 * FUN_08023b5e(undefined4 *param_1,uint param_2)

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



/* ENTRY 0x08023b62 : FUN_08023b62 */

undefined4 * FUN_08023b62(undefined4 *param_1,uint param_2,undefined4 param_3)

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



/* ENTRY 0x08023bac : FUN_08023bac */

void FUN_08023bac(void)

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



/* ENTRY 0x08023bc2 : FUN_08023bc2 */

void FUN_08023bc2(void)

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



/* ENTRY 0x08023bf6 : FUN_08023bf6 */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_08023bf6(undefined4 param_1,undefined4 param_2)

{
  FUN_080081e8();
  FUN_08023c08(param_1,param_2);
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028840,0x20000000,0x9e4);
  return;
}



/* ENTRY 0x08023c08 : FUN_08023c08 */

void FUN_08023c08(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x08023c16 : FUN_08023c16 */

void FUN_08023c16(uint *param_1,uint param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 0x08023c1c : FUN_08023c1c */

void FUN_08023c1c(int param_1,int param_2)

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



/* ENTRY 0x08023c2e : FUN_08023c2e */

void FUN_08023c2e(int param_1,int param_2)

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



/* ENTRY 0x08023c40 : FUN_08023c40 */

void FUN_08023c40(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)&DAT_40012400) {
    FUN_0802455c(0x200);
    FUN_0802455c(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_0802455c(0x400);
    FUN_0802455c(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_0802455c(0x8000);
  FUN_0802455c(0x8000,0);
  return;
}



/* ENTRY 0x08023ca4 : FUN_08023ca4 */

void FUN_08023ca4(int param_1,int param_2)

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



/* ENTRY 0x08023cb6 : FUN_08023cb6 */

void FUN_08023cb6(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff8fff;
  return;
}



/* ENTRY 0x08023cc2 : FUN_08023cc2 */

bool FUN_08023cc2(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}



/* ENTRY 0x08023cd2 : FUN_08023cd2 */

bool FUN_08023cd2(uint *param_1,uint param_2)

{
  return (*param_1 & param_2 >> 8) != 0 && (param_1[1] & param_2 & 0xff) != 0;
}



/* ENTRY 0x08023cee : FUN_08023cee */

bool FUN_08023cee(int param_1)

{
  return (*(uint *)(param_1 + 8) & 8) != 0;
}



/* ENTRY 0x08023cfe : FUN_08023cfe */

void FUN_08023cfe(int param_1,byte param_2,int param_3)

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



/* ENTRY 0x08023d10 : FUN_08023d10 */

void FUN_08023d10(int param_1,uint *param_2)

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



/* ENTRY 0x08023d5c : FUN_08023d5c */

void FUN_08023d5c(int param_1,uint param_2,int param_3,int param_4)

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



/* ENTRY 0x08023dbe : FUN_08023dbe */

void FUN_08023dbe(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff | (param_2 + -1) * 0x100000;
  return;
}



/* ENTRY 0x08023dce : FUN_08023dce */

void FUN_08023dce(int param_1,uint param_2,uint param_3,int param_4)

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



/* ENTRY 0x08023e60 : FUN_08023e60 */

void FUN_08023e60(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}



/* ENTRY 0x08023e6a : FUN_08023e6a */

void FUN_08023e6a(int param_1,int param_2)

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



/* ENTRY 0x08023e7c : FUN_08023e7c */

void FUN_08023e7c(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}



/* ENTRY 0x08023e86 : FUN_08023e86 */

void FUN_08023e86(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* ENTRY 0x08023e98 : FUN_08023e98 */

void FUN_08023e98(int param_1)

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



/* ENTRY 0x08023eb0 : FUN_08023eb0 */

void FUN_08023eb0(void)

{
  FUN_08024574(1);
  FUN_08024574(0);
  return;
}



/* ENTRY 0x08023ec2 : FUN_08023ec2 */

undefined2 FUN_08023ec2(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x08023ece : FUN_08023ece */

void FUN_08023ece(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x08023edc : FUN_08023edc */

void FUN_08023edc(uint param_1)

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



/* ENTRY 0x08023ef4 : FUN_08023ef4 */

void FUN_08023ef4(uint *param_1,int param_2)

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



/* ENTRY 0x08023f08 : FUN_08023f08 */

void FUN_08023f08(uint *param_1)

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



/* ENTRY 0x0802400c : FUN_0802400c */

uint FUN_0802400c(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x08024014 : FUN_08024014 */

bool FUN_08024014(uint param_1)

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



/* ENTRY 0x08024034 : FUN_08024034 */

void FUN_08024034(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x08024044 : FUN_08024044 */

void FUN_08024044(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x08024096 : FUN_08024096 */

void FUN_08024096(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x0802409a : FUN_0802409a */

void FUN_0802409a(undefined4 *param_1)

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



/* ENTRY 0x080240b4 : FUN_080240b4 */

void FUN_080240b4(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x080240c0 : FUN_080240c0 */

void FUN_080240c0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08024248(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_08024248(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x08024100 : FUN_08024100 */

bool FUN_08024100(void)

{
  uint uVar1;
  
  uVar1 = DAT_4002201c;
  return (uVar1 & 2) != 0;
}



/* ENTRY 0x08024114 : FUN_08024114 */

void FUN_08024114(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x08024124 : FUN_08024124 */

void FUN_08024124(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08024248(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_08024248(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x0802415c : FUN_0802415c */

void FUN_0802415c(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08024248(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_08024248(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_08024248(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x080241a4 : FUN_080241a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080241a4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08024248(0xb0000);
  if (iVar1 != 4) {
    return;
  }
  DAT_40022008 = 0x45670123;
  DAT_40022008 = 0xcdef89ab;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x20;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x40;
  iVar1 = FUN_08024248(0xb0000);
  if (iVar1 == 4) {
    uVar2 = DAT_40022010;
    DAT_40022010 = uVar2 & 0x1fdf;
    uVar2 = DAT_40022010;
    DAT_40022010 = uVar2 | 0x10;
    if (param_1 == 0) {
      _DAT_1ffff800 = 0xa5;
    }
    else {
      _DAT_1ffff800 = 0;
    }
    iVar1 = FUN_08024248(0xb0000);
    if (iVar1 == 5) {
      return;
    }
    uVar2 = DAT_40022010;
    uVar2 = uVar2 & 0x1fef;
  }
  else {
    if (iVar1 == 5) {
      return;
    }
    uVar2 = DAT_40022010;
    uVar2 = uVar2 & 0x1fdf;
  }
  DAT_40022010 = uVar2;
  return;
}



/* ENTRY 0x08024230 : FUN_08024230 */

void FUN_08024230(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x08024248 : FUN_08024248 */

int FUN_08024248(int param_1)

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



/* ENTRY 0x080242ac : FUN_080242ac */

void FUN_080242ac(uint *param_1,ushort *param_2)

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



/* ENTRY 0x0802435a : FUN_0802435a */

undefined8 FUN_0802435a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x0802436c : FUN_0802436c */

void FUN_0802436c(uint param_1,int param_2)

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



/* ENTRY 0x080243d8 : FUN_080243d8 */

bool FUN_080243d8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x080243e6 : FUN_080243e6 */

void FUN_080243e6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x080243ea : FUN_080243ea */

void FUN_080243ea(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x080243ee : FUN_080243ee */

void FUN_080243ee(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x08024400 : FUN_08024400 */

void FUN_08024400(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x08024410 : FUN_08024410 */

void FUN_08024410(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x08024420 : FUN_08024420 */

void FUN_08024420(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x0802442c : FUN_0802442c */

void FUN_0802442c(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x08024438 : FUN_08024438 */

void FUN_08024438(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x08024444 : FUN_08024444 */

void FUN_08024444(byte *param_1)

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



/* ENTRY 0x080244b4 : FUN_080244b4 */

void FUN_080244b4(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x080244c8 : FUN_080244c8 */

void FUN_080244c8(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x080244dc : FUN_080244dc */

void FUN_080244dc(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x080244e8 : FUN_080244e8 */

void FUN_080244e8(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x080244fc : FUN_080244fc */

void FUN_080244fc(uint param_1,int param_2)

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



/* ENTRY 0x08024514 : FUN_08024514 */

void FUN_08024514(uint param_1,int param_2)

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



/* ENTRY 0x0802452c : FUN_0802452c */

void FUN_0802452c(uint param_1,int param_2)

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



/* ENTRY 0x08024544 : FUN_08024544 */

void FUN_08024544(uint param_1,int param_2)

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



/* ENTRY 0x0802455c : FUN_0802455c */

void FUN_0802455c(uint param_1,int param_2)

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



/* ENTRY 0x08024574 : FUN_08024574 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024574(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x08024580 : FUN_08024580 */

void FUN_08024580(uint *param_1)

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
  uVar3 = *param_1 >> (&DAT_200009d4)[(uVar4 & 0xf0) >> 4];
  param_1[1] = uVar3;
  uVar4 = DAT_40021004;
  param_1[2] = uVar3 >> (&DAT_200009d4)[(uVar4 & 0x700) >> 8];
  uVar4 = DAT_40021004;
  sVar1 = (&DAT_200009d4)[(uVar4 & 0x3800) >> 0xb];
  param_1[3] = uVar3 >> sVar1;
  uVar4 = DAT_40021004;
  param_1[4] = (uVar3 >> sVar1) / (uint)(byte)(&DAT_200009d0)[(uVar4 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x08024630 : FUN_08024630 */

bool FUN_08024630(uint param_1)

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



/* ENTRY 0x08024660 : FUN_08024660 */

void FUN_08024660(int param_1)

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



/* ENTRY 0x08024684 : FUN_08024684 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024684(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x08024690 : FUN_08024690 */

void FUN_08024690(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x080246a0 : FUN_080246a0 */

void FUN_080246a0(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x080246b0 : FUN_080246b0 */

void FUN_080246b0(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x080246c0 : FUN_080246c0 */

void FUN_080246c0(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x080246d0 : FUN_080246d0 */

undefined4 FUN_080246d0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x080246e8 : FUN_080246e8 */

bool FUN_080246e8(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x08024708 : FUN_08024708 */

void FUN_08024708(ushort param_1,int param_2)

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



/* ENTRY 0x08024720 : FUN_08024720 */

void FUN_08024720(undefined4 param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  DAT_40002820 = (short)((uint)param_1 >> 0x10);
  DAT_40002824 = (short)param_1;
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x08024748 : FUN_08024748 */

void FUN_08024748(undefined4 param_1)

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



/* ENTRY 0x08024770 : FUN_08024770 */

void FUN_08024770(int param_1)

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



/* ENTRY 0x08024794 : FUN_08024794 */

void FUN_08024794(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x080247a4 : FUN_080247a4 */

void FUN_080247a4(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x080247bc : FUN_080247bc */

void FUN_080247bc(ushort *param_1,int param_2)

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



/* ENTRY 0x080247ce : FUN_080247ce */

bool FUN_080247ce(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x080247dc : FUN_080247dc */

undefined2 FUN_080247dc(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x080247e0 : FUN_080247e0 */

void FUN_080247e0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x080247e4 : FUN_080247e4 */

void FUN_080247e4(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x08024838 : FUN_08024838 */

void FUN_08024838(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_080248a4;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_080248a4:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x080248b0 : FUN_080248b0 */

void FUN_080248b0(ushort *param_1,int param_2)

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



/* ENTRY 0x080248c2 : FUN_080248c2 */

void FUN_080248c2(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x080248e6 : FUN_080248e6 */

void FUN_080248e6(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08024900 : FUN_08024900 */

void FUN_08024900(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08024906 : FUN_08024906 */

void FUN_08024906(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x0802490c : FUN_0802490c */

void FUN_0802490c(ushort *param_1,int param_2)

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



/* ENTRY 0x0802491e : FUN_0802491e */

void FUN_0802491e(int param_1,int param_2)

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



/* ENTRY 0x08024934 : FUN_08024934 */

void FUN_08024934(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08024944 : FUN_08024944 */

void FUN_08024944(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x0802494c : FUN_0802494c */

void FUN_0802494c(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_0802455c(0x800);
    FUN_0802455c(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_0802452c(1);
    FUN_0802452c(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_0802452c(2,1);
    FUN_0802452c(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_0802452c(4,1);
    FUN_0802452c(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_0802452c(8,1);
    FUN_0802452c(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_0802452c(0x10,1);
    FUN_0802452c(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_0802452c(0x20,1);
    FUN_0802452c(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_0802455c(0x2000);
    FUN_0802455c(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_0802455c(0x80000);
    FUN_0802455c(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_0802455c(0x100000);
    FUN_0802455c(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_0802455c(0x200000);
    FUN_0802455c(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_0802452c(0x40,1);
    FUN_0802452c(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_0802452c(0x80,1);
    FUN_0802452c(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_0802452c(0x100);
    FUN_0802452c(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_0802455c(0x10000);
    FUN_0802455c(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_0802455c(0x20000);
    FUN_0802455c(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_0802455c(0x40000);
  FUN_0802455c(0x40000,0);
  return;
}



/* ENTRY 0x08024b5c : FUN_08024b5c */

void FUN_08024b5c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08024b60 : FUN_08024b60 */

undefined2 FUN_08024b60(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08024b64 : FUN_08024b64 */

bool FUN_08024b64(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08024b7c : FUN_08024b7c */

void FUN_08024b7c(undefined *param_1,short *param_2)

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
  FUN_08024838(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x08024d28 : FUN_08024d28 */

void FUN_08024d28(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x08024d38 : FUN_08024d38 */

void FUN_08024d38(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08024d48 : FUN_08024d48 */

void FUN_08024d48(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x08024d52 : FUN_08024d52 */

void FUN_08024d52(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_08024dc6;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_08024dc6:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x08024dd6 : FUN_08024dd6 */

void FUN_08024dd6(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x08024de2 : FUN_08024de2 */

void FUN_08024de2(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024e64 : FUN_08024e64 */

void FUN_08024e64(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024e72 : FUN_08024e72 */

void FUN_08024e72(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x08024ef2 : FUN_08024ef2 */

void FUN_08024ef2(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x08024efe : FUN_08024efe */

void FUN_08024efe(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024f62 : FUN_08024f62 */

void FUN_08024f62(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024f70 : FUN_08024f70 */

void FUN_08024f70(undefined2 *param_1)

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



/* ENTRY 0x08024f84 : FUN_08024f84 */

void FUN_08024f84(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x08024f8a : FUN_08024f8a */

void FUN_08024f8a(int param_1,int param_2)

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



/* ENTRY 0x08024f9c : FUN_08024f9c */

void FUN_08024f9c(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x08024fa8 : FUN_08024fa8 */

void FUN_08024fa8(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x08024ffc : FUN_08024ffc */

void FUN_08024ffc(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x0802500c : FUN_0802500c */

void FUN_0802500c(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x0802501c : FUN_0802501c */

void FUN_0802501c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x08025020 : FUN_08025020 */

void FUN_08025020(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_08025056:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08025056;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_08025056;
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
    if (!bVar3) goto LAB_080250ac;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_080250ac:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x080250bc : FUN_080250bc */

void FUN_080250bc(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x080250ce : FUN_080250ce */

void FUN_080250ce(ushort *param_1,int param_2)

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



/* ENTRY 0x080250e0 : FUN_080250e0 */

void FUN_080250e0(ushort *param_1,int param_2)

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



/* ENTRY 0x080250f2 : FUN_080250f2 */

void FUN_080250f2(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x08025100 : FUN_08025100 */

void FUN_08025100(int param_1,int param_2)

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



/* ENTRY 0x08025112 : FUN_08025112 */

void FUN_08025112(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08025122 : FUN_08025122 */

bool FUN_08025122(ushort *param_1,uint param_2)

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



/* ENTRY 0x0802516e : FUN_0802516e */

void FUN_0802516e(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x080251a0 : FUN_080251a0 */

void FUN_080251a0(undefined2 *param_1,int *param_2)

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
  FUN_08024580(auStack_20);
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


