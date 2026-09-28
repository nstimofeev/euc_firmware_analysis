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
  (*(code *)0x800816c)(&DAT_080272f0,0x20000000,0x994);
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
  
  uVar1 = FUN_08022614();
  FUN_080081e4(uVar1,extraout_r2);
  FUN_0800a430();
  uVar2 = FUN_0802265e();
  FUN_080081e8();
  FUN_08022670((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_080272f0,0x20000000,0x994);
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
  (*(code *)0x800816c)(&DAT_080272f0,0x20000000,0x994);
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
  return 0x20006d5820005958;
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
  return &DAT_200058f4;
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
    iVar2 = *(int *)(&DAT_08023cbc + extraout_r3 * 4) * iVar2;
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
      iVar3 = (*(int *)(&DAT_08024c60 + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_08024c60 + extraout_r3 * 4) * iVar3;
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
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001a2;
    uVar16 = FUN_08022452((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001a2 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0,param_3,param_4);
    *(undefined8 *)(param_1 + 0x68) = uVar16;
    uVar2 = (longlong)*(int *)(param_1 + 0xa0) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001a2;
    uVar16 = FUN_08022452((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001a2 +
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
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001a2;
  uVar16 = FUN_08022452((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001a2 + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar2 = (longlong)*(int *)(param_1 + 0x90) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001a2;
  uVar16 = FUN_08022452((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001a2 + (int)((ulonglong)lVar3 >> 0x20),
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
  uVar16 = FUN_08022452(iVar5,uVar14 * ((int)uVar11 >> 0x1f) +
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
  uVar16 = FUN_08022452(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
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
  iVar5 = FUN_08022452(uVar15,*(int *)(param_1 + 0x6c) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_20000014 * (uint)DAT_200001a2,
                       (int)(DAT_20000014 * (uint)DAT_200001a2) >> 0x1f,uVar15);
  *piVar1 = iVar5;
  *(int *)(param_1 + 0x9c) = *piVar1 - *(int *)(param_1 + 0xb4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x70) * 0xa000;
  uVar15 = (undefined4)lVar3;
  uVar15 = FUN_08022452(uVar15,*(int *)(param_1 + 0x74) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                        DAT_20000014 * (uint)DAT_200001a2,
                        (int)(DAT_20000014 * (uint)DAT_200001a2) >> 0x1f,uVar15);
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(int *)(param_1 + 0xa8) = (*(int *)(param_1 + 0x80) * 0xa000) / (int)(uint)DAT_200001a2;
  *(int *)(param_1 + 0xac) = (*(int *)(param_1 + 0x84) * 0xa000) / (int)(uint)DAT_200001a2;
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
  DAT_20000038 = (&DAT_08025c04)[(byte)(&DAT_2000003a)[(byte)(&DAT_08025c04)[DAT_20000039]]] +
                 (&DAT_08025c04)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x08008a7e : FUN_08008a7e */

void FUN_08008a7e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_08008a64();
    DAT_20000050 = (&DAT_20001064)[DAT_20000038];
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
  iVar2 = (&DAT_20001064)[param_1];
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
    if (((iVar1 == 0) && (iVar1 = (&DAT_20001064)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
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
    (&DAT_20001064)[param_1] = puVar3;
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
    if ((&DAT_20001064)[param_4] == 0) {
      (&DAT_20001064)[param_4] = 1;
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
        (&DAT_20001064)[param_4] = 0;
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
  FUN_080090bc(&LAB_08008f1e_1,0,&DAT_20000e60,0x2a,0xfffe,&DAT_20000c64,0x80,0,3);
  return;
}



/* ENTRY 0x080091f8 : FUN_080091f8 */

void FUN_080091f8(void)

{
  FUN_080090bc(&LAB_08009190_1,0,&DAT_20001060,0x2b,0xffff,&DAT_20000e64,0x80,0,3);
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
  
  thunk_FUN_0800922e(&DAT_2000156c,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_2000156c)[uVar1 * 6] = &DAT_2000156c + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_2000156c)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_2000156c;
  return;
}



/* ENTRY 0x08009278 : FUN_08009278 */

void FUN_08009278(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200014a4,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200014a8)[uVar1 * 5] = &DAT_200014a4 + (uVar1 + 1) * 0x14;
  }
  (&DAT_200014a8)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_200014a4;
  return;
}



/* ENTRY 0x080092ba : FUN_080092ba */

void FUN_080092ba(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_20000994,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_20000994)[uVar1 * 0x18] = 0;
    (&DAT_20000998)[uVar1 * 6] = &DAT_20000994 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_200009a8)[uVar1 * 6] = &DAT_08009618;
  }
  (&DAT_20000994)[uVar1 * 0x18] = 0;
  (&DAT_20000998)[uVar1 * 6] = 0;
  (&DAT_200009a8)[uVar1 * 6] = &DAT_08009618;
  DAT_20000024 = &DAT_20000994;
  return;
}



/* ENTRY 0x0800930e : FUN_0800930e */

void FUN_0800930e(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_20001114,0x390);
  thunk_FUN_0800922e(&DAT_20001064,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001128)[uVar1 * 0x13] = &DAT_20001114 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001128)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001114;
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
      DAT_20000050 = (&DAT_20001064)[DAT_20000038];
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
    DAT_20000048 = (&DAT_20001064)[DAT_20000038];
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
  
  uVar2 = (uint)(byte)(&DAT_08025c04)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_08025c04)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_20001064)[uVar3];
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
  if ((&DAT_20001064)[param_2] == 0) {
    local_2c = param_1;
    if (param_1 == 0xff) {
      local_2c = (uint)*(byte *)(DAT_20000048 + 0x2e);
    }
    iVar8 = (&DAT_20001064)[local_2c];
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
      (&DAT_20001064)[local_2c] = 0;
      (&DAT_20001064)[param_2] = iVar8;
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
    iVar2 = (&DAT_20001064)[param_1];
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
    iVar2 = (&DAT_20001064)[param_1];
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
  
  uVar1 = FUN_0800a764();
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
  return &DAT_08025d76;
}



/* ENTRY 0x0800a1dc : FUN_0800a1dc */

void FUN_0800a1dc(void)

{
  FUN_08022f30(0x8000000);
  FUN_08022f1c(0x300);
  return;
}



/* ENTRY 0x0800a1f2 : FUN_0800a1f2 */

void FUN_0800a1f2(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_08009836(0);
  FUN_0800faac();
  do {
    FUN_0800f70e();
    FUN_08010498();
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
    FUN_0800ebd6();
    FUN_08014e52();
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
    FUN_0800cbbc();
    FUN_0800f378();
    FUN_0801be12();
    FUN_08012a86();
    FUN_08014740();
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
    FUN_0800cfe2();
    FUN_08013d90();
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
    FUN_08013520();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_08013dca();
    }
    FUN_08015840();
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
  FUN_08020da4();
  do {
    FUN_08021368();
    FUN_0800ddf8();
    FUN_08009880(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a430 : FUN_0800a430 */

undefined4 FUN_0800a430(void)

{
  FUN_0800d55e();
  FUN_0800a1dc();
  FUN_080093c4();
  FUN_080090bc(&LAB_0800a2fe_1,0,&DAT_20001858,2,2,&DAT_2000165c,0x80,0,3);
  FUN_08009fa4(0);
  FUN_08009504();
  return 0;
}



/* ENTRY 0x0800a470 : FUN_0800a470 */

void FUN_0800a470(void)

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
  FUN_08022f7c(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_08023a88(&DAT_40000c00,&local_14);
  FUN_08023b36(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_08022eac(&local_18);
  FUN_08023374(&DAT_40000c00,1);
  FUN_080237a0(&DAT_40000c00,1);
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
  
  FUN_08022fe8(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a68a : FUN_0800a68a */

void FUN_0800a68a(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(4,1);
  local_8 = 0x10031000;
  FUN_08022d14(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0800a6b2 : FUN_0800a6b2 */

void FUN_0800a6b2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(8,1);
  local_8 = 0x28031000;
  FUN_08022d14(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800a6da : FUN_0800a6da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800a6da(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a66c();
  if (iVar1 != 0) {
    FUN_0800aa16();
    iVar1 = FUN_0800aae4();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0800aa3c();
      FUN_0800f722();
      FUN_080106de(1);
    }
    else {
      FUN_080106de(0);
    }
    FUN_0800aeca();
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    FUN_0800a68a();
    FUN_0800a6b2();
    FUN_0800e0a2();
    FUN_0800ddb0();
    FUN_0800e554();
    FUN_08012c00(0x1c200);
    FUN_0801f5d6();
    FUN_08013d60();
    FUN_08022f64(0x40,1);
    FUN_0800a554();
    FUN_0801c260();
    return 1;
  }
  return 0;
}



/* ENTRY 0x0800a764 : FUN_0800a764 */

undefined4 FUN_0800a764(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800a788 : FUN_0800a788 */

undefined4 FUN_0800a788(int param_1,undefined4 param_2)

{
  FUN_08022c98();
  FUN_0800b4c0((&DAT_2000009e)[param_1],param_2);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800a7a6 : FUN_0800a7a6 */

uint FUN_0800a7a6(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4;
  FUN_0800b172((&DAT_2000009e)[param_1],&local_10);
  return local_10 & 0xffff;
}



/* ENTRY 0x0800a7bc : FUN_0800a7bc */

undefined4 FUN_0800a7bc(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = FUN_0800c0a8((int)(uint)uVar1 >> 8);
  uVar2 = FUN_0800c0d0((char)uVar1,uVar2);
  FUN_08022c98();
  FUN_0800b4c0((&DAT_2000009e)[param_1],(uint)uVar1);
  for (uVar3 = 1; (int)uVar3 < param_2; uVar3 = uVar3 + 1 & 0xff) {
    uVar1 = param_3[uVar3];
    uVar2 = FUN_0800c0d0((int)(uint)uVar1 >> 8,uVar2);
    uVar2 = FUN_0800c0d0((char)uVar1,uVar2);
    FUN_0800b4c0((&DAT_2000009e)[param_1 + uVar3],(uint)uVar1);
  }
  FUN_0800b4c0((&DAT_2000009e)[param_1 + param_2],uVar2);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800a83e : FUN_0800a83e */

undefined4 FUN_0800a83e(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0800c0a8((int)local_20 >> 8);
  uVar4 = FUN_0800c0d0((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_08022c98();
  FUN_0800b4c0((&DAT_2000009e)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0800c0d0((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0800c0d0((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b4c0((&DAT_2000009e)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b4c0((&DAT_2000009e)[param_1 + param_2],uVar4);
  FUN_08022b7c();
  FUN_0800b172((&DAT_2000009e)[param_1],&local_20);
  uVar1 = FUN_0800c0a8((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0800c0d0((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800b172((&DAT_2000009e)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0800c0d0((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0800c0d0((char)local_20,uVar1);
  }
  FUN_0800b172((&DAT_2000009e)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ENTRY 0x0800a95c : FUN_0800a95c */

undefined4 FUN_0800a95c(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800b172((&DAT_2000009e)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0800c0a8((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0800c0d0((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800b172((&DAT_2000009e)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0800c0d0((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0800c0d0((char)local_94[0],uVar1);
  }
  FUN_0800b172((&DAT_2000009e)[param_1 + param_2],local_94);
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



/* ENTRY 0x0800aa16 : FUN_0800aa16 */

void FUN_0800aa16(void)

{
  FUN_08022c98();
  FUN_0800b3b2();
  FUN_08022b7c();
  FUN_0800b9e4();
  FUN_0800bf24();
  return;
}



/* ENTRY 0x0800aa3c : FUN_0800aa3c */

void FUN_0800aa3c(void)

{
  DAT_20003238 = 0;
  DAT_2000323c = 0;
  DAT_20003240 = 0;
  DAT_20003244 = 0;
  DAT_20003248 = 0;
  DAT_2000324c = 0;
  DAT_20003250 = 0;
  return;
}



/* ENTRY 0x0800aa66 : FUN_0800aa66 */

void FUN_0800aa66(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  _local_18 = CONCAT22((undefined2)DAT_2000323c,(undefined2)DAT_20003238);
  _local_14 = CONCAT22((short)((uint)((DAT_20003244 - (DAT_20003244 >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_20003240);
  _local_10 = CONCAT22((short)((uint)((DAT_2000324c - (DAT_2000324c >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_20003248 - (DAT_20003248 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_20003250);
  FUN_0800a83e(0,8,&local_18);
  return;
}



/* ENTRY 0x0800aae4 : FUN_0800aae4 */

undefined4 FUN_0800aae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  iVar1 = FUN_0800a95c(0,8,&local_18);
  if ((iVar1 == 0) || (local_c._2_2_ != 0x729)) {
    uVar2 = 0;
  }
  else {
    DAT_20003238 = (int)(short)local_18;
    DAT_2000323c = (int)local_18._2_2_;
    DAT_20003240 = (int)(short)local_14;
    DAT_20003244 = (int)local_14._2_2_ << 1;
    DAT_20003248 = (int)(short)local_10 << 1;
    DAT_2000324c = (int)local_10._2_2_ << 1;
    DAT_20003250 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800ab64 : FUN_0800ab64 */

uint FUN_0800ab64(void)

{
  return (uint)DAT_2000310e << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0800ab84 : FUN_0800ab84 */

undefined4 FUN_0800ab84(short *param_1)

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



/* ENTRY 0x0800adbe : FUN_0800adbe */

undefined4 FUN_0800adbe(void)

{
  if (DAT_2000303e < 0x65) {
    if (DAT_2000303e == 0) {
      DAT_200005ea = 1;
    }
    else {
      DAT_200005ea = (undefined1)DAT_2000303e;
    }
  }
  else {
    DAT_200005ea = 100;
  }
  if (DAT_20003040 < 0x65) {
    if (DAT_20003040 == 0) {
      DAT_200005eb = 1;
    }
    else {
      DAT_200005eb = (undefined1)DAT_20003040;
    }
  }
  else {
    DAT_200005eb = 100;
  }
  if (DAT_20003042 < 0x65) {
    if (DAT_20003042 == 0) {
      DAT_200005ec = 1;
    }
    else {
      DAT_200005ec = (undefined1)DAT_20003042;
    }
  }
  else {
    DAT_200005ec = 100;
  }
  if (DAT_20003044 < 0x65) {
    if (DAT_20003044 == 0) {
      DAT_200005ed = 1;
    }
    else {
      DAT_200005ed = (undefined1)DAT_20003044;
    }
  }
  else {
    DAT_200005ed = 100;
  }
  return 0;
}



/* ENTRY 0x0800ae7c : FUN_0800ae7c */

undefined4 FUN_0800ae7c(void)

{
  DAT_20002fd4 = 1;
  return 0;
}



/* ENTRY 0x0800ae88 : FUN_0800ae88 */

undefined4 FUN_0800ae88(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
}



/* ENTRY 0x0800aea0 : FUN_0800aea0 */

undefined1 FUN_0800aea0(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0800c030(&DAT_2000008c);
  DAT_20000094 = CONCAT22(DAT_20000094._2_2_,uVar2);
  FUN_0800b6c0(DAT_2000008c,DAT_20000090,DAT_20000094);
  uVar1 = FUN_0800bc00(DAT_2000008c,DAT_20000090,DAT_20000094);
  DAT_20000098 = 0;
  return uVar1;
}



/* ENTRY 0x0800aeca : FUN_0800aeca */

undefined8 FUN_0800aeca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_0800b6fa(&local_18);
  local_18 = CONCAT31(local_18._1_3_,7);
  sVar1 = FUN_0800c030(&local_18);
  if ((short)local_10 == sVar1) {
    DAT_2000008c = local_18;
    DAT_20000090 = uStack_14;
    DAT_20000094 = local_10;
    uVar2 = 0;
  }
  else {
    FUN_0800bc3a(&local_18);
    local_18 = CONCAT31(local_18._1_3_,7);
    sVar1 = FUN_0800c030(&local_18);
    if ((short)local_10 == sVar1) {
      DAT_2000008c = local_18;
      DAT_20000090 = uStack_14;
      DAT_20000094 = local_10;
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return CONCAT44(local_18,uVar2);
}



/* ENTRY 0x0800af26 : FUN_0800af26 */

undefined4 FUN_0800af26(uint param_1)

{
  if (DAT_20000090 < param_1) {
    DAT_20000090 = param_1;
    FUN_0800aea0();
  }
  return 0;
}



/* ENTRY 0x0800af3e : FUN_0800af3e */

undefined4 FUN_0800af3e(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_20000090 = 0;
  FUN_0800aea0();
  return 0;
}



/* ENTRY 0x0800af54 : FUN_0800af54 */

undefined4 FUN_0800af54(void)

{
  FUN_08022c98();
  FUN_08022bc4(&DAT_0803a800,0x28536692);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800af6e : FUN_0800af6e */

undefined4 FUN_0800af6e(void)

{
  FUN_08022c98();
  FUN_08022b28(&DAT_0803a800);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800afa8 : FUN_0800afa8 */

uint FUN_0800afa8(uint param_1)

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



/* ENTRY 0x0800afd8 : FUN_0800afd8 */

uint FUN_0800afd8(uint param_1)

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



/* ENTRY 0x0800b018 : FUN_0800b018 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b018(int param_1)

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



/* ENTRY 0x0800b068 : FUN_0800b068 */

undefined4 FUN_0800b068(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800b018(1);
  if (iVar1 == 0xab) {
    DAT_20000130 = (int *)0x8090800;
    uVar2 = 0xab;
  }
  else {
    for (DAT_20000130 = (int *)(&DAT_0803b000 + iVar1 * 0x800);
        DAT_20000130 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000130 = DAT_20000130 + 1) {
      if (*DAT_20000130 == -1) {
        return 4;
      }
    }
    uVar2 = 0x80;
  }
  return uVar2;
}



/* ENTRY 0x0800b0c4 : FUN_0800b0c4 */

int FUN_0800b0c4(void)

{
  int iVar1;
  
  iVar1 = FUN_08022b28(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_08022b8c(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_08022b28(&DAT_0803b800);
  }
  return iVar1;
}



/* ENTRY 0x0800b0f6 : FUN_0800b0f6 */

int FUN_0800b0f6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b018(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000130 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000130 = DAT_20000130 + 1)
    {
      if (*DAT_20000130 == -1) {
        iVar1 = FUN_08022b8c(DAT_20000130,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_08022b8c((int)DAT_20000130 + 2,param_1);
        DAT_20000130 = DAT_20000130 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}



/* ENTRY 0x0800b172 : FUN_0800b172 */

int FUN_0800b172(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800b018(0);
  iVar2 = iVar1;
  if (iVar1 != 0xab) {
    for (puVar3 = (ushort *)(DAT_20000130 + -2); iVar2 = 1,
        (ushort *)(iVar1 * 0x800 + 0x803b002) < puVar3; puVar3 = puVar3 + -2) {
      if (*puVar3 == param_1) {
        *param_2 = puVar3[-1];
        return 0;
      }
    }
  }
  return iVar2;
}



/* ENTRY 0x0800b1ca : FUN_0800b1ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800b1ca(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b0c4();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_2000009e)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b172((&DAT_2000009e)[uVar2],&DAT_2000012c), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0f6((&DAT_2000009e)[uVar2],DAT_2000012c), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08022b8c(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08022b28(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_2000009e)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b172((&DAT_2000009e)[uVar2],&DAT_2000012c), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0f6((&DAT_2000009e)[uVar2],DAT_2000012c), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08022b8c(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08022b28(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08022b8c(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800b0c4();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_08022b28(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_08022b28(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08022b8c(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800b0c4();
    }
  }
  else {
    iVar1 = FUN_0800b0c4();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800b3b2 : FUN_0800b3b2 */

undefined4 FUN_0800b3b2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800b1ca();
  FUN_0800b068();
  return uVar1;
}



/* ENTRY 0x0800b3c2 : FUN_0800b3c2 */

int FUN_0800b3c2(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800b018(0);
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
  iVar1 = FUN_08022b8c(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800b068();
    iVar1 = FUN_0800b0f6(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_2000009e)[uVar2] != param_1) &&
            (iVar1 = FUN_0800b172((&DAT_2000009e)[uVar2],&DAT_2000012c), iVar1 != 1)) &&
           (iVar1 = FUN_0800b0f6((&DAT_2000009e)[uVar2],DAT_2000012c), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08022b28(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_08022b8c(puVar3,0);
      }
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b4c0 : FUN_0800b4c0 */

int FUN_0800b4c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b0f6(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800b3c2(param_1,param_2);
  }
  return iVar1;
}



/* ENTRY 0x0800b4ec : FUN_0800b4ec */

int FUN_0800b4ec(void)

{
  int iVar1;
  
  iVar1 = FUN_08022b28(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_08022b8c(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_08022b28(&DAT_0803e800);
  }
  return iVar1;
}



/* ENTRY 0x0800b51e : FUN_0800b51e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b51e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (_DAT_0803e000 == 0) {
      if ((_DAT_0803e800 == -0x1112) && (_DAT_0803e80c != -1)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if (_DAT_0803e800 == 0) {
      if ((_DAT_0803e000 == -0x1112) && (_DAT_0803e00c != -1)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if ((_DAT_0803e000 == -0x1112) && (_DAT_0803e00c != -1)) {
      uVar1 = 0;
    }
    else if ((_DAT_0803e800 == -0x1112) && (_DAT_0803e80c != -1)) {
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



/* ENTRY 0x0800b5c2 : FUN_0800b5c2 */

undefined8 FUN_0800b5c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_0800b51e(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dff3) < DAT_20000134) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1) {
        if (*DAT_20000134 != -1) {
          iVar1 = 0x80;
          goto LAB_0800b5dc;
        }
        iVar1 = FUN_08022b8c(DAT_20000134,*(undefined2 *)((int)&local_28 + uVar2 * 2));
        if (iVar1 != 4) goto LAB_0800b5dc;
        DAT_20000134 = DAT_20000134 + 1;
      }
      iVar1 = 4;
    }
  }
LAB_0800b5dc:
  return CONCAT44(local_28,iVar1);
}



/* ENTRY 0x0800b63e : FUN_0800b63e */

undefined8 FUN_0800b63e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800b51e(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      iVar1 = 0xab;
      goto LAB_0800b66a;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_08022b8c(puVar2,0xeeee);
  DAT_20000134 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b5c2(param_1,param_2,param_3), iVar1 == 4)) &&
     (iVar1 = FUN_08022b28(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08022b8c(puVar2,0);
  }
LAB_0800b66a:
  return CONCAT44(param_1,iVar1);
}



/* ENTRY 0x0800b6c0 : FUN_0800b6c0 */

undefined8 FUN_0800b6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_08022c98();
  FUN_08022b1c(0x35);
  iVar2 = FUN_0800b5c2(param_1,param_2,param_3);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b63e(param_1,param_2,param_3);
  }
  FUN_08022b7c();
  FUN_08008254(uVar1);
  return CONCAT44(param_1,iVar2);
}



/* ENTRY 0x0800b6fa : FUN_0800b6fa */

int FUN_0800b6fa(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800b51e(0);
  uVar1 = DAT_20000134;
  if (iVar2 != 0xab) {
    if (DAT_20000134 < iVar2 * 0x800 + 0x803e010U) {
      iVar2 = 1;
    }
    else {
      if (*(int *)(DAT_20000134 - 4) == -1) {
        *param_1 = *(undefined4 *)(DAT_20000134 - 0x18);
        param_1[1] = *(undefined4 *)(uVar1 - 0x14);
        param_1[2] = *(undefined4 *)(uVar1 - 0x10);
      }
      else {
        *param_1 = *(undefined4 *)(DAT_20000134 - 0xc);
        param_1[1] = *(undefined4 *)(uVar1 - 8);
        param_1[2] = *(undefined4 *)(uVar1 - 4);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ENTRY 0x0800b75e : FUN_0800b75e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800b75e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b4ec();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803e800);
    }
    else {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar1 = FUN_0800b6fa(&local_28);
      if (iVar1 != 1) {
        if (DAT_20000134 < &DAT_0803e800) {
          for (DAT_20000134 = (short *)&DAT_0803e804;
              (DAT_20000134 < (short *)0x803eff3 && (*DAT_20000134 != -1));
              DAT_20000134 = DAT_20000134 + 6) {
          }
        }
        iVar1 = FUN_0800b6c0(local_28,local_24,local_20);
        if (iVar1 != 4) goto LAB_0800b79e;
        FUN_08022c98();
        FUN_08022b1c(0x35);
      }
      iVar1 = FUN_08022b8c(&DAT_0803e800,0);
      if (iVar1 != 4) goto LAB_0800b79e;
      iVar1 = FUN_08022b28(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar1 = FUN_0800b6fa(&local_28);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_20000134) {
          for (DAT_20000134 = (short *)&DAT_0803e004;
              (DAT_20000134 < (short *)0x803e7f3 && (*DAT_20000134 != -1));
              DAT_20000134 = DAT_20000134 + 6) {
          }
        }
        iVar1 = FUN_0800b6c0(local_28,local_24,local_20);
        if (iVar1 != 4) goto LAB_0800b79e;
        FUN_08022c98();
        FUN_08022b1c(0x35);
      }
      iVar1 = FUN_08022b8c(&DAT_0803e000,0);
      if (iVar1 != 4) goto LAB_0800b79e;
      iVar1 = FUN_08022b28(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803e800);
      if (iVar1 != 4) goto LAB_0800b79e;
      iVar1 = FUN_08022b8c(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800b4ec();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_08022b28(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_08022b28(&DAT_0803e000);
      if (iVar1 != 4) goto LAB_0800b79e;
      iVar1 = FUN_08022b8c(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800b4ec();
    }
  }
  else {
    iVar1 = FUN_0800b4ec();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
LAB_0800b79e:
  return CONCAT44(local_28,iVar1);
}



/* ENTRY 0x0800b98c : FUN_0800b98c */

int FUN_0800b98c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b51e(0);
  if (iVar1 != 0xab) {
    for (DAT_20000134 = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_20000134 <= (short *)((iVar1 + 1) * 0x800 + 0x803dff3) && (*DAT_20000134 != -1));
        DAT_20000134 = DAT_20000134 + 6) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800b9e4 : FUN_0800b9e4 */

undefined4 FUN_0800b9e4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_08022c98();
  FUN_08022b1c(0x35);
  iVar1 = FUN_0800b98c();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800b75e();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800b98c();
  }
  FUN_08022b7c();
  return uVar3;
}



/* ENTRY 0x0800ba2c : FUN_0800ba2c */

int FUN_0800ba2c(void)

{
  int iVar1;
  
  iVar1 = FUN_08022b28(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_08022b8c(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_08022b28(&DAT_0803f800);
  }
  return iVar1;
}



/* ENTRY 0x0800ba5e : FUN_0800ba5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800ba5e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (_DAT_0803f000 == 0) {
      if ((_DAT_0803f800 == -0x1112) && (_DAT_0803f80c != -1)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if (_DAT_0803f800 == 0) {
      if ((_DAT_0803f000 == -0x1112) && (_DAT_0803f00c != -1)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if ((_DAT_0803f000 == -0x1112) && (_DAT_0803f00c != -1)) {
      uVar1 = 0;
    }
    else if ((_DAT_0803f800 == -0x1112) && (_DAT_0803f80c != -1)) {
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



/* ENTRY 0x0800bb02 : FUN_0800bb02 */

undefined8 FUN_0800bb02(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_0800ba5e(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803eff3) < DAT_20000138) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1) {
        if (*DAT_20000138 != -1) {
          iVar1 = 0x80;
          goto LAB_0800bb1c;
        }
        iVar1 = FUN_08022b8c(DAT_20000138,*(undefined2 *)((int)&local_28 + uVar2 * 2));
        if (iVar1 != 4) goto LAB_0800bb1c;
        DAT_20000138 = DAT_20000138 + 1;
      }
      iVar1 = 4;
    }
  }
LAB_0800bb1c:
  return CONCAT44(local_28,iVar1);
}



/* ENTRY 0x0800bb7e : FUN_0800bb7e */

undefined8 FUN_0800bb7e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800ba5e(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      iVar1 = 0xab;
      goto LAB_0800bbaa;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_08022b8c(puVar2,0xeeee);
  DAT_20000138 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800bb02(param_1,param_2,param_3), iVar1 == 4)) &&
     (iVar1 = FUN_08022b28(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08022b8c(puVar2,0);
  }
LAB_0800bbaa:
  return CONCAT44(param_1,iVar1);
}



/* ENTRY 0x0800bc00 : FUN_0800bc00 */

undefined8 FUN_0800bc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_08022c98();
  FUN_08022b1c(0x35);
  iVar2 = FUN_0800bb02(param_1,param_2,param_3);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bb7e(param_1,param_2,param_3);
  }
  FUN_08022b7c();
  FUN_08008254(uVar1);
  return CONCAT44(param_1,iVar2);
}



/* ENTRY 0x0800bc3a : FUN_0800bc3a */

int FUN_0800bc3a(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0800ba5e(0);
  uVar1 = DAT_20000138;
  if (iVar2 != 0xab) {
    if (DAT_20000138 < iVar2 * 0x800 + 0x803f010U) {
      iVar2 = 1;
    }
    else {
      if (*(int *)(DAT_20000138 - 4) == -1) {
        *param_1 = *(undefined4 *)(DAT_20000138 - 0x18);
        param_1[1] = *(undefined4 *)(uVar1 - 0x14);
        param_1[2] = *(undefined4 *)(uVar1 - 0x10);
      }
      else {
        *param_1 = *(undefined4 *)(DAT_20000138 - 0xc);
        param_1[1] = *(undefined4 *)(uVar1 - 8);
        param_1[2] = *(undefined4 *)(uVar1 - 4);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ENTRY 0x0800bc9e : FUN_0800bc9e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800bc9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800ba2c();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803f800);
    }
    else {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar1 = FUN_0800bc3a(&local_28);
      if (iVar1 != 1) {
        if (DAT_20000138 < &DAT_0803f800) {
          for (DAT_20000138 = (short *)&DAT_0803f804;
              (DAT_20000138 < (short *)0x803fff3 && (*DAT_20000138 != -1));
              DAT_20000138 = DAT_20000138 + 6) {
          }
        }
        iVar1 = FUN_0800bc00(local_28,local_24,local_20);
        if (iVar1 != 4) goto LAB_0800bcde;
        FUN_08022c98();
        FUN_08022b1c(0x35);
      }
      iVar1 = FUN_08022b8c(&DAT_0803f800,0);
      if (iVar1 != 4) goto LAB_0800bcde;
      iVar1 = FUN_08022b28(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      iVar1 = FUN_0800bc3a(&local_28);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000138) {
          for (DAT_20000138 = (short *)&DAT_0803f004;
              (DAT_20000138 < (short *)0x803f7f3 && (*DAT_20000138 != -1));
              DAT_20000138 = DAT_20000138 + 6) {
          }
        }
        iVar1 = FUN_0800bc00(local_28,local_24,local_20);
        if (iVar1 != 4) goto LAB_0800bcde;
        FUN_08022c98();
        FUN_08022b1c(0x35);
      }
      iVar1 = FUN_08022b8c(&DAT_0803f000,0);
      if (iVar1 != 4) goto LAB_0800bcde;
      iVar1 = FUN_08022b28(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_08022b28(&DAT_0803f800);
      if (iVar1 != 4) goto LAB_0800bcde;
      iVar1 = FUN_08022b8c(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800ba2c();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_08022b28(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_08022b28(&DAT_0803f000);
      if (iVar1 != 4) goto LAB_0800bcde;
      iVar1 = FUN_08022b8c(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800ba2c();
    }
  }
  else {
    iVar1 = FUN_0800ba2c();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
LAB_0800bcde:
  return CONCAT44(local_28,iVar1);
}



/* ENTRY 0x0800becc : FUN_0800becc */

int FUN_0800becc(void)

{
  int iVar1;
  
  iVar1 = FUN_0800ba5e(0);
  if (iVar1 != 0xab) {
    for (DAT_20000138 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000138 <= (short *)((iVar1 + 1) * 0x800 + 0x803eff3) && (*DAT_20000138 != -1));
        DAT_20000138 = DAT_20000138 + 6) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800bf24 : FUN_0800bf24 */

undefined4 FUN_0800bf24(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_08022c98();
  FUN_08022b1c(0x35);
  iVar1 = FUN_0800becc();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800bc9e();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800becc();
  }
  FUN_08022b7c();
  return uVar3;
}



/* ENTRY 0x0800bf6c : FUN_0800bf6c */

void FUN_0800bf6c(byte *param_1)

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



/* ENTRY 0x0800bfb0 : FUN_0800bfb0 */

void FUN_0800bfb0(byte *param_1)

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



/* ENTRY 0x0800bff4 : FUN_0800bff4 */

void FUN_0800bff4(byte *param_1)

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



/* ENTRY 0x0800c030 : FUN_0800c030 */

void FUN_0800c030(byte *param_1)

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



/* ENTRY 0x0800c06c : FUN_0800c06c */

void FUN_0800c06c(byte *param_1)

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



/* ENTRY 0x0800c0a8 : FUN_0800c0a8 */

void FUN_0800c0a8(uint param_1)

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



/* ENTRY 0x0800c0d0 : FUN_0800c0d0 */

uint FUN_0800c0d0(uint param_1,uint param_2)

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



/* ENTRY 0x0800c0f8 : FUN_0800c0f8 */

void FUN_0800c0f8(void)

{
  int iVar1;
  
  iVar1 = DAT_42218130;
  if (iVar1 == 0) {
    if (DAT_20000168 < 0x32) {
      DAT_20000168 = DAT_20000168 + 1;
    }
  }
  else if (DAT_20000168 != 0) {
    DAT_20000168 = DAT_20000168 - 1;
  }
  if (DAT_20000168 < 0x24) {
    if (DAT_20000168 < 0xc) {
      diag_BatState = 1;
      DAT_2000310e = DAT_2000310e | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_2000310e = DAT_2000310e & 0xfffd;
  }
  return;
}



/* ENTRY 0x0800c160 : FUN_0800c160 */

void FUN_0800c160(void)

{
  int iVar1;
  
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((iVar1 < 1000) && (diag_IQCurrent < 0x708)) {
    if (DAT_2000016a < 0x65) {
      DAT_2000016a = DAT_2000016a + 1;
    }
    else {
      DAT_20002fdf = 1;
    }
  }
  else {
    DAT_2000016a = 0;
    DAT_20002fdf = 0;
  }
  diag_currentmeter =
       FUN_08022364((int)((longlong)DAT_2000059c * 0x1a),
                    (int)((ulonglong)((longlong)DAT_2000059c * 0x1a) >> 0x20),3000,0);
  if ((diag_currentmeter & 0x80000000) != 0) {
    diag_currentmeter = 0;
  }
  diag_kilometer = diag_readoutmeter + diag_currentmeter;
  if ((DAT_2000016c + 0x708 < DAT_2000059c) && (DAT_2000016a == 100)) {
    DAT_2000016c = DAT_2000059c;
    DAT_2000016a = 0;
    if ((DAT_20002fd4 == '\0') &&
       ((diag_AgeModeflg == '\0' && ((diag_kilometer & 0x80000000) == 0)))) {
      FUN_0800af26(diag_kilometer);
    }
  }
  return;
}



/* ENTRY 0x0800c22c : FUN_0800c22c */

void FUN_0800c22c(void)

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
                  if (100 < DAT_20003344) {
                    DAT_20003344 = DAT_20003344 + -0x32;
                  }
                  if (0x14 < DAT_2000334c) {
                    DAT_2000334c = DAT_2000334c + -1;
                  }
                }
                else {
                  if (DAT_200005fe < DAT_20003344) {
                    DAT_20003344 = DAT_20003344 + -0x14;
                  }
                  if (0x96 < DAT_2000334c) {
                    DAT_2000334c = DAT_2000334c + -2;
                  }
                }
              }
              else {
                if (DAT_200005fe < DAT_20003344) {
                  DAT_20003344 = DAT_20003344 + -0x14;
                }
                if (DAT_20003344 < 500) {
                  DAT_20003344 = DAT_20003344 + 0x1e;
                }
                if (0x96 < DAT_2000334c) {
                  DAT_2000334c = DAT_2000334c + -2;
                }
                if (DAT_2000334c < 100) {
                  DAT_2000334c = DAT_2000334c + 2;
                }
              }
            }
            else {
              if (DAT_20003344 < 500) {
                DAT_20003344 = DAT_20003344 + 0x1e;
              }
              if (0x96 < DAT_2000334c) {
                DAT_2000334c = DAT_2000334c + -2;
              }
              if (DAT_2000334c < 100) {
                DAT_2000334c = DAT_2000334c + 2;
              }
            }
          }
          else {
            if (DAT_200005fe + 0x1e < DAT_20003344) {
              DAT_20003344 = DAT_20003344 + -0x14;
            }
            if (DAT_20003344 < DAT_200005fe) {
              DAT_20003344 = DAT_20003344 + 0x1e;
            }
            if (0x96 < DAT_2000334c) {
              DAT_2000334c = DAT_2000334c + -2;
            }
            if (DAT_2000334c < 100) {
              DAT_2000334c = DAT_2000334c + 2;
            }
          }
        }
        else {
          if (DAT_20003344 < DAT_200005fe) {
            DAT_20003344 = DAT_20003344 + 0x1e;
          }
          if (DAT_2000334c < 100) {
            DAT_2000334c = DAT_2000334c + 2;
          }
        }
      }
      else {
        if (DAT_20000600 + 0x1e < DAT_20003344) {
          DAT_20003344 = DAT_20003344 + -0x14;
        }
        if (DAT_20003344 < DAT_20000600) {
          DAT_20003344 = DAT_20003344 + 0x1e;
        }
        if (DAT_2000334c < DAT_20000602) {
          DAT_2000334c = DAT_2000334c + 2;
        }
      }
    }
    else {
      if (DAT_20003344 < DAT_20000600) {
        DAT_20003344 = DAT_20003344 + 0x1e;
      }
      if (DAT_20000602 + 2 < DAT_2000334c) {
        DAT_2000334c = DAT_2000334c + -2;
      }
      if (DAT_2000334c < DAT_20000602) {
        DAT_2000334c = DAT_2000334c + 2;
      }
    }
  }
  else {
    if (DAT_20003344 < DAT_200005fa) {
      DAT_20003344 = DAT_20003344 + 0x1e;
    }
    if (DAT_2000334c < DAT_200005fc) {
      DAT_2000334c = DAT_2000334c + 2;
    }
  }
  return;
}



/* ENTRY 0x0800c53a : FUN_0800c53a */

void FUN_0800c53a(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_20000154 != 0) {
    DAT_20000154 = DAT_20000154 + -1;
  }
  if (DAT_20000156 != 0) {
    DAT_20000156 = DAT_20000156 + -1;
  }
  if (DAT_20000158 != 0) {
    DAT_20000158 = DAT_20000158 + -1;
  }
  if (DAT_2000015a != 0) {
    DAT_2000015a = DAT_2000015a + -1;
  }
  if (DAT_2000015e != 0) {
    DAT_2000015e = DAT_2000015e + -1;
  }
  if (DAT_20000160 != 0) {
    DAT_20000160 = DAT_20000160 + -1;
  }
  if (DAT_20000162 != 0) {
    DAT_20000162 = DAT_20000162 + -1;
  }
  if (DAT_20000164 != 0) {
    DAT_20000164 = DAT_20000164 + -1;
  }
  if (DAT_2000060c < diag_TotalVoltage) {
    bVar1 = 0x27 < DAT_20000148;
    DAT_20000148 = DAT_20000148 + 1;
    if ((bVar1) && (DAT_20000148 = 0, DAT_20000154 == 0)) {
      FUN_0800f73c(7);
      DAT_20002f7e = DAT_20002f7e | 0x4000;
      DAT_20000154 = 400;
      FUN_08020dc2(7);
    }
  }
  else {
    DAT_20000148 = 0;
    DAT_20002f7e = DAT_20002f7e & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000604) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002bc == '\x04')))) {
    bVar1 = 199 < DAT_2000014f;
    DAT_2000014f = DAT_2000014f + 1;
    if ((bVar1) && (DAT_2000014f = '\0', DAT_2000015c == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800f73c(7);
      }
      DAT_20002f7e = DAT_20002f7e | 0x1000;
      DAT_2000015c = 400;
      FUN_08020dc2(6);
    }
  }
  else {
    DAT_2000014f = '\0';
    DAT_20002f7e = DAT_20002f7e & 0xefff;
  }
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if (((DAT_20000608 < iVar2) && (diag_IQCurrent < 0x4b0)) && (0x7b0c < diag_VectorVol)) {
    bVar1 = 0xa0 < DAT_2000014a;
    DAT_2000014a = DAT_2000014a + 1;
    if (bVar1) {
      DAT_2000014a = 0;
      if ((DAT_20002fd4 == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_0800e572();
      }
      FUN_08014798(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_20002f7e = DAT_20002f7e | 4;
      FUN_08020dc2(8);
    }
  }
  else if (DAT_2000014a < 2) {
    DAT_20002f7e = DAT_20002f7e & 0xfffb;
  }
  else {
    DAT_2000014a = DAT_2000014a - 2;
  }
  iVar2 = diag_TotalCurrent;
  if (diag_TotalCurrent < 0) {
    iVar2 = -diag_TotalCurrent;
  }
  if ((DAT_2000060e < iVar2) || ((((byte)DAT_2000310c & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_2000014c;
    DAT_2000014c = DAT_2000014c + 1;
    if ((bVar1) && (DAT_2000014c = 0, DAT_20000156 == 0)) {
      FUN_08014798(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_20002f7e = DAT_20002f7e | 8;
      DAT_20000156 = 300;
      FUN_08020dc2(9);
    }
  }
  else if (DAT_2000014c == 0) {
    DAT_20002f7e = DAT_20002f7e & 0xfff7;
  }
  else {
    DAT_2000014c = DAT_2000014c - 1;
  }
  if (diag_VectorVol < 28000) {
    DAT_20000151 = '\0';
    DAT_20002f7e = DAT_20002f7e & 0xfffd;
  }
  else {
    bVar1 = 10 < DAT_20000151;
    DAT_20000151 = DAT_20000151 + 1;
    if ((bVar1) && (DAT_20000151 = '\0', DAT_2000015a == 0)) {
      FUN_08014798(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_20002f7e = DAT_20002f7e | 2;
      DAT_2000015a = 100;
      FUN_08020dc2(10);
    }
  }
  if ((((diag_HallState == '\a') || (diag_HallState == '\0')) || (10 < diag_hall_err)) ||
     (0x14 < DAT_20000166)) {
    bVar1 = 4 < DAT_2000014e;
    DAT_2000014e = DAT_2000014e + 1;
    if (bVar1) {
      DAT_2000014e = '\0';
      if (diag_VehicleSpeed < 6000) {
        DAT_2000310e = DAT_2000310e | 0x10;
      }
      DAT_20002f7e = DAT_20002f7e | 1;
      if (DAT_20000158 == 0) {
        FUN_08014798(0x25,diag_HallState,0);
        DAT_20000158 = 200;
        DAT_20000166 = 0x15;
        FUN_08020dc2(5);
      }
    }
  }
  else {
    DAT_2000310e = DAT_2000310e & 0xffef;
    DAT_20002f7e = DAT_20002f7e & 0xfffe;
    DAT_2000014e = '\0';
  }
  if (diag_MosTemp < DAT_20000610) {
    DAT_20000150 = '\0';
    DAT_20002f7e = DAT_20002f7e & 0xffdf;
  }
  else {
    bVar1 = 10 < DAT_20000150;
    DAT_20000150 = DAT_20000150 + 1;
    if ((bVar1) && (DAT_20000150 = '\0', DAT_2000015e == 0)) {
      if (DAT_200002bc != '\x01') {
        FUN_0800f73c(7);
        FUN_08014798(0x24,(int)diag_MosTemp,0);
        DAT_20002f7e = DAT_20002f7e | 0x20;
      }
      DAT_2000015e = 200;
      FUN_08020dc2(0xb);
    }
  }
  if ((((byte)DAT_2000310c & 0x40) != 0) && (DAT_20000162 == 0)) {
    FUN_08014798(0x1a,0);
    DAT_20000162 = 200;
    FUN_08020dc2(0xd);
  }
  if ((((byte)DAT_2000310c & 0x30) != 0) && (DAT_20000160 == 0)) {
    FUN_08014798(0x23,0);
    DAT_20000160 = 200;
    FUN_08020dc2(0xc);
  }
  if ((DAT_20002fc6 == '\0') && ((DAT_20002f7e & 0x400) != 0x400)) {
    DAT_20000152 = '\0';
  }
  else {
    bVar1 = 10 < DAT_20000152;
    DAT_20000152 = DAT_20000152 + 1;
    if ((bVar1) && (DAT_20000152 = '\0', DAT_20000164 == 0)) {
      if (DAT_200002bc != '\x01') {
        FUN_0800f73c(7);
      }
      DAT_20000164 = 200;
      FUN_08020dc2(0xe);
    }
  }
  return;
}



/* ENTRY 0x0800ca4a : FUN_0800ca4a */

void FUN_0800ca4a(void)

{
  int iVar1;
  
  diag_TotalVoltage = DAT_20003120;
  diag_TotalVol_show = DAT_20003124;
  diag_VehicleSpeed = (DAT_20003114 + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)(((diag_VehicleSpeed - DAT_20000144) + diag_speedAcc * 9) / 10);
  diag_VectorVol = DAT_2000312c;
  DAT_20000144 = diag_VehicleSpeed;
  iVar1 = FUN_0800e100((int)DAT_2000333a);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0800e13a((int)DAT_20003332);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0800e174((int)DAT_20003340);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0800e18e((int)DAT_20003164);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_2000333c >> 4));
  diag_lightad = DAT_20003336;
  DAT_20002f90 = DAT_2000333e;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  diag_IQCurrent = (iVar1 + diag_IQCurrent * 0x1d) / 0x1e;
  diag_HallState = DAT_2000058c;
  diag_TotalCurrent = diag_BusCurrent;
  diag_cpurate = DAT_20000028;
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((DAT_20002fbc < iVar1) && (DAT_20002fbc = diag_VehicleSpeed, diag_VehicleSpeed < 0)) {
    DAT_20002fbc = -diag_VehicleSpeed;
  }
  diag_allwarnbit = CONCAT22(DAT_20002f7e,DAT_2000310c);
  return;
}



/* ENTRY 0x0800cbbc : FUN_0800cbbc */

void FUN_0800cbbc(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  DAT_20002f94 = DAT_20002f94 + 1;
  if (DAT_20002f94 % 0x32 == 0x19) {
    DAT_20002fb0 = DAT_20002fb0 + 1;
    DAT_20002fb8 = DAT_20002fb4 + DAT_20002fb0;
  }
  if (DAT_20002fe1 != '\0') {
    DAT_20002fe1 = DAT_20002fe1 + -1;
  }
  FUN_0800deac();
  switch(diag_cartstep) {
  case '\0':
    iVar3 = DAT_42220134;
    if (iVar3 == 0) {
      if (9 < DAT_2000013c) {
        diag_cartstep = '\x01';
        DAT_422101b0 = 1;
      }
    }
    else if (DAT_2000013c < 0xb) {
      if (DAT_2000013c == 9) {
        DAT_422101b0 = 1;
        FUN_0800ddf2();
      }
      DAT_2000013c = DAT_2000013c + 1;
    }
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_200005ed * 1000;
    FUN_08020dc2(1);
    diag_cartstep = '\x02';
    DAT_20002fe1 = -6;
    break;
  case '\x02':
    DAT_2000310e = DAT_2000310e | 0x45;
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
      iVar3 = FUN_08010594(diag_TotalVol_show);
      if (iVar3 == 1) {
        iVar3 = FUN_0800aa66();
        if (iVar3 == 0) {
          FUN_0800ddf2(4);
        }
        else {
          FUN_0800ddec(1);
          FUN_0800af6e();
        }
      }
      else {
        FUN_0800ddf2(4);
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
      bVar2 = DAT_2000013e + 1;
      bVar1 = DAT_2000013e < 0xb;
      DAT_2000013e = bVar2;
      if (((bVar1) || (iVar3 = DAT_42220134, iVar3 != 0)) ||
         (DAT_422101b0 = 0, diag_BatState != '\x01')) break;
      FUN_0800cfec();
    }
    DAT_2000013e = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_2000013f == 2) {
      DAT_20002fde = DAT_20002fde | 1;
      FUN_08020dc2(0xf0);
    }
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 0x5dc) {
      iVar3 = DAT_42220134;
      if (iVar3 == 0) {
        bVar2 = DAT_2000013f + 1;
        bVar1 = 100 < DAT_2000013f;
        DAT_2000013f = bVar2;
        if (bVar1) {
          DAT_422101b0 = 0;
          if (diag_BatState != '\x01') break;
          FUN_0800cfec();
        }
        bVar2 = DAT_2000013f + 1;
        bVar1 = 5 < DAT_2000013f;
        DAT_2000013f = bVar2;
        if (bVar1) {
          FUN_0800e572();
        }
      }
    }
    else {
      DAT_2000013f = 0;
      diag_cartstep = '\x02';
    }
  }
  iVar3 = FUN_0800e07a();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_0800ddf2(1);
      diag_cartstep = '\b';
      DAT_20002fc8 = 1;
    }
  }
  DAT_20002f98 = DAT_20002f98 + 1;
  if (((DAT_20002fdf == '\0') || (diag_BatState == '\x01')) || ((DAT_20002fc3 & 0x70) != 0)) {
    DAT_20002f98 = 0;
  }
  if ((DAT_20002fe0 == '\x01') && (10 < DAT_20002f98)) {
    DAT_20002f98 = DAT_20002f98 - 5;
  }
  if (DAT_20002f9c + 300 < DAT_20002f98) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_20002fc8 = 1;
        FUN_0800ddf2();
        diag_cartstep = '\b';
        DAT_20002f98 = 0;
      }
    }
  }
  else if ((DAT_20002f9c < DAT_20002f98) && (DAT_20002f94 % 0x32 == 0x19)) {
    FUN_0800ddf2(1);
  }
  if (DAT_20002f94 % 0x96 == 0x91) {
    DAT_20000142 = '\0';
    DAT_20000141 = '\0';
    DAT_20000140 = '\0';
  }
  else if (DAT_20000140 == '\0') {
    DAT_20000140 = diag_HallState;
  }
  else if ((DAT_20000141 == '\0') && (diag_HallState != DAT_20000140)) {
    DAT_20000141 = diag_HallState;
  }
  else if ((DAT_20000142 == '\0') &&
          ((diag_HallState != DAT_20000140 && (diag_HallState != DAT_20000141)))) {
    DAT_20002f98 = 0;
    DAT_20000142 = '\0';
    DAT_20000141 = '\0';
    DAT_20000140 = '\0';
  }
  diag_LimitSpeed = (uint)DAT_200005ed * 1000;
  FUN_0800ca4a();
  FUN_0800c53a();
  FUN_0800c22c();
  FUN_0800c160();
  FUN_0800c0f8();
  if (DAT_20003152 != '\0') {
    FUN_0800ddf2(DAT_20003152);
    DAT_20003152 = '\0';
  }
  if (DAT_20003153 != '\0') {
    FUN_0800ddec(DAT_20003153);
    DAT_20003153 = '\0';
  }
  return;
}



/* ENTRY 0x0800cfe2 : FUN_0800cfe2 */

void FUN_0800cfe2(void)

{
  DAT_20002f8e = DAT_20003338;
  return;
}



/* ENTRY 0x0800cfec : FUN_0800cfec */

void FUN_0800cfec(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d030 : FUN_0800d030 */

void FUN_0800d030(uint *param_1)

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
  param_1[1] = *param_1 >> (&DAT_20000170)[(uVar2 & 0xf0) >> 4];
  uVar2 = DAT_40021004;
  param_1[2] = param_1[1] >> (&DAT_20000170)[(uVar2 & 0x700) >> 8];
  uVar2 = DAT_40021004;
  param_1[3] = param_1[1] >> (&DAT_20000170)[(uVar2 & 0x3800) >> 0xb];
  uVar2 = DAT_40021004;
  param_1[4] = param_1[3] / (uint)(byte)(&DAT_20000180)[(uVar2 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x0800d102 : FUN_0800d102 */

void FUN_0800d102(undefined2 *param_1,int *param_2)

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
  FUN_0800d030(auStack_34);
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



/* ENTRY 0x0800d1f0 : FUN_0800d1f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d1f0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000018c = _DAT_1ffff7e8;
  DAT_20000190 = _DAT_1ffff7ec;
  DAT_20000194 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20002fe4)[uVar2] = 0;
  }
  if (DAT_2000018c != 0) {
    DAT_20002fe4 = (undefined1)DAT_2000018c;
    DAT_20002fe5 = (undefined1)((uint)DAT_2000018c >> 8);
    DAT_20002fe6 = (undefined1)((uint)DAT_2000018c >> 0x10);
    DAT_20002fe7 = (undefined1)((uint)DAT_2000018c >> 0x18);
    DAT_20002fe8 = (undefined1)DAT_20000190;
    DAT_20002fe9 = (undefined1)((uint)DAT_20000190 >> 8);
    DAT_20002fea = (undefined1)((uint)DAT_20000190 >> 0x10);
    DAT_20002feb = (undefined1)((uint)DAT_20000190 >> 0x18);
    DAT_20002fec = (undefined1)DAT_20000194;
    DAT_20002fed = (undefined1)((uint)DAT_20000194 >> 8);
    DAT_20002fee = (undefined1)((uint)DAT_20000194 >> 0x10);
    DAT_20002fef = (undefined1)((uint)DAT_20000194 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20002fe4)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0800d33e : FUN_0800d33e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d33e(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000018c = _DAT_1ffff7e8;
  DAT_20000190 = _DAT_1ffff7ec;
  DAT_20000194 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20002fe4)[uVar2] = 0;
  }
  if (DAT_2000018c != 0) {
    DAT_20002fe4 = (undefined1)DAT_2000018c;
    DAT_20002fe5 = (undefined1)((uint)DAT_2000018c >> 8);
    DAT_20002fe6 = (undefined1)((uint)DAT_2000018c >> 0x10);
    DAT_20002fe7 = (undefined1)((uint)DAT_2000018c >> 0x18);
    DAT_20002fe8 = (undefined1)DAT_20000190;
    DAT_20002fe9 = (undefined1)((uint)DAT_20000190 >> 8);
    DAT_20002fea = (undefined1)((uint)DAT_20000190 >> 0x10);
    DAT_20002feb = (undefined1)((uint)DAT_20000190 >> 0x18);
    DAT_20002fec = (undefined1)DAT_20000194;
    DAT_20002fed = (undefined1)((uint)DAT_20000194 >> 8);
    DAT_20002fee = (undefined1)((uint)DAT_20000194 >> 0x10);
    DAT_20002fef = (undefined1)((uint)DAT_20000194 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20002fe4)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0800d49a : FUN_0800d49a */

void FUN_0800d49a(void)

{
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022bc4(&DWORD_08008300,0);
  FUN_08022b7c();
  return;
}



/* ENTRY 0x0800d4ea : FUN_0800d4ea */

void FUN_0800d4ea(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0800d1f0();
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022bc4(&DWORD_08008304,uVar1);
  dVar2 = FUN_0800d1f0();
  if (dVar2 == 0xffffffff) {
    FUN_0800d49a();
    FUN_08022b7c();
    return;
  }
  FUN_08022b7c();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d55e : FUN_0800d55e */

/* WARNING: Removing unreachable block (ram,0x0800d5a8) */
/* WARNING: Removing unreachable block (ram,0x0800d61a) */

void FUN_0800d55e(void)

{
  FUN_0800d4ea();
  DAT_20000198 = 1;
  return;
}



/* ENTRY 0x0800d620 : FUN_0800d620 */

void FUN_0800d620(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_08005304 ^ 0x3156;
  uVar1 = FUN_0800d33e();
  if (uVar1 == (uVar2 + 0x3692 & 0xffff)) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d676 : FUN_0800d676 */

undefined8 FUN_0800d676(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_20000198 == '\0') {
    iVar2 = FUN_0800d33e();
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



/* ENTRY 0x0800d6d8 : FUN_0800d6d8 */

void FUN_0800d6d8(void)

{
  DAT_20000184 = DAT_20000184 + ((ushort)DAT_08005304 ^ 0x3156) + 0x3bcd;
  DAT_20000188 = DAT_20000188 + DAT_20000184;
  return;
}



/* ENTRY 0x0800d77c : FUN_0800d77c */

void FUN_0800d77c(void)

{
  short sVar1;
  
  sVar1 = FUN_0800d33e();
  DAT_20000186 = sVar1 + DAT_20000186;
  sVar1 = FUN_0800d33e();
  DAT_20000186 = sVar1 + DAT_20000186;
  DAT_20000188 = DAT_20000188 - DAT_20000186;
  return;
}



/* ENTRY 0x0800d7a8 : FUN_0800d7a8 */

void FUN_0800d7a8(void)

{
  int iVar1;
  
  iVar1 = FUN_08022b68();
  if (iVar1 == 0) {
    FUN_08022c98();
    FUN_08022c0c(1);
    FUN_08022b7c();
  }
  return;
}



/* ENTRY 0x0800d7c0 : FUN_0800d7c0 */

void FUN_0800d7c0(void)

{
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022bc4(&DWORD_0800830c,0xfee1b00f);
  FUN_08022b7c();
  return;
}



/* ENTRY 0x0800d7f0 : FUN_0800d7f0 */

undefined4 FUN_0800d7f0(void)

{
  if (diag_BOOTVERSION < 0x1010603) {
    FUN_08022c98();
    FUN_08022b1c(0x35);
    FUN_08022bc4(&DWORD_08008304,0);
    FUN_08022b7c();
  }
  return 0;
}



/* ENTRY 0x0800d81c : FUN_0800d81c */

undefined4 FUN_0800d81c(void)

{
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022bc4(0x803d800,0x28635690);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800d83c : FUN_0800d83c */

undefined4 FUN_0800d83c(void)

{
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022b28(0x803d800);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800d85a : FUN_0800d85a */

/* WARNING: Removing unreachable block (ram,0x0800d8c4) */
/* WARNING: Removing unreachable block (ram,0x0800d8ba) */
/* WARNING: Removing unreachable block (ram,0x0800d8ce) */
/* WARNING: Removing unreachable block (ram,0x0800d8aa) */

bool FUN_0800d85a(void)

{
  uint uVar1;
  dword dVar2;
  
  dVar2 = 0;
  for (uVar1 = 1; uVar1 < 0x7cc0; uVar1 = uVar1 + 1) {
    dVar2 = dVar2 + (&diag_APPCRCCHECK)[uVar1];
  }
  return dVar2 == 0xead9007f;
}



/* ENTRY 0x0800d8f6 : FUN_0800d8f6 */

/* WARNING: Removing unreachable block (ram,0x0800d952) */
/* WARNING: Removing unreachable block (ram,0x0800d95c) */
/* WARNING: Removing unreachable block (ram,0x0800d942) */

undefined4 FUN_0800d8f6(void)

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
  dVar5 = 0x1f2fc;
  dVar4 = 0xead9007f;
  uVar1 = 0xff2b16e2;
  FUN_08022c98();
  FUN_08022b1c(0x35);
  FUN_08022bc4(&diag_RUNOKFLG,0xff2b16e2,extraout_r2,extraout_r3,uVar2,uVar1,uVar3,dVar4,dVar5);
  FUN_08022b7c();
  return 1;
}



/* ENTRY 0x0800d9c0 : FUN_0800d9c0 */

void FUN_0800d9c0(void)

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
  
  FUN_08022fac(0x1000);
  FUN_08022fac(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08022d14(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08022d14(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_08022d14(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_0802324c(&DAT_40013000,&local_1c);
  FUN_08023224(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800da76 : FUN_0800da76 */

void FUN_0800da76(void)

{
  ushort uVar1;
  
  FUN_08023224(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_08023224(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800daa2 : FUN_0800daa2 */

undefined1 FUN_0800daa2(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_08023236(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_08023236(&DAT_40013000,1);
        if (iVar3 != 0) {
          uVar1 = DAT_4001300c;
          return (char)uVar1;
        }
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      DAT_200001b4 = DAT_200001b4 + (uint)(0xfffffffe < DAT_200001b0);
      DAT_200001b0 = DAT_200001b0 + 1;
      return 0;
    }
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  bVar4 = 0xfffffffe < DAT_200001b0;
  DAT_200001b0 = DAT_200001b0 + 1;
  DAT_200001b4 = DAT_200001b4 + (uint)bVar4;
  return 0;
}



/* ENTRY 0x0800db14 : FUN_0800db14 */

undefined4 FUN_0800db14(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800daa2(param_1);
  FUN_0800daa2(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800db3a : FUN_0800db3a */

undefined4 FUN_0800db3a(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800daa2(param_1 | 0x80);
  uVar1 = FUN_0800daa2(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800db64 : FUN_0800db64 */

undefined8 FUN_0800db64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_20 [4];
  
  uVar2 = 0;
  DAT_40010814 = 0x10;
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  FUN_0800daa2(0xbb);
  for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = FUN_0800daa2(0xff);
    *(undefined1 *)((int)local_20 + uVar2) = uVar1;
  }
  DAT_40010810 = 0x10;
  FUN_080224d8(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800dba2 : FUN_0800dba2 */

void FUN_0800dba2(undefined4 param_1)

{
  FUN_0800db3a(param_1);
  return;
}



/* ENTRY 0x0800dbae : FUN_0800dbae */

void FUN_0800dbae(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_0800dba2(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001a0 = 0x2000;
      goto code_r0x0800dc00;
    }
    if (uVar2 == 2) {
      DAT_200001a0 = 0x1000;
      goto code_r0x0800dc00;
    }
    if (uVar2 == 3) {
      DAT_200001a0 = 0x800;
      goto code_r0x0800dc00;
    }
  }
  DAT_200001a0 = 0x4000;
code_r0x0800dc00:
  bVar1 = FUN_0800dba2(0x1b);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001a2 = 0x28f;
      return;
    }
    if (uVar2 == 2) {
      DAT_200001a2 = 0x147;
      return;
    }
    if (uVar2 == 3) {
      DAT_200001a2 = 0xa3;
      return;
    }
  }
  DAT_200001a2 = 0x51e;
  return;
}



/* ENTRY 0x0800dc4c : FUN_0800dc4c */

void FUN_0800dc4c(undefined4 param_1,undefined4 param_2)

{
  FUN_0800db14(param_1,param_2);
  return;
}



/* ENTRY 0x0800dc5c : FUN_0800dc5c */

bool FUN_0800dc5c(void)

{
  int iVar1;
  
  FUN_0800d9c0();
  do {
    iVar1 = FUN_0800dc4c(0x6b,0x80);
  } while (iVar1 == 0);
  FUN_08008e00(0xf);
  do {
    iVar1 = FUN_0800dc4c(0x6b,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800dc4c(0x19,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800dc4c(0x1a,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800dc4c(0x1c,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800dc4c(0x1b,8);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800dc4c(0x38,1);
  } while (iVar1 == 0);
  iVar1 = FUN_0800dba2(0x75);
  if (iVar1 != 0) {
    FUN_0800dbae();
    FUN_0800da76();
  }
  return iVar1 != 0;
}



/* ENTRY 0x0800dce4 : FUN_0800dce4 */

void FUN_0800dce4(undefined4 param_1)

{
  FUN_0800db64(param_1);
  return;
}



/* ENTRY 0x0800dcf0 : FUN_0800dcf0 */

undefined4 FUN_0800dcf0(int *param_1)

{
  undefined1 local_2c [12];
  undefined1 auStack_20 [4];
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
  
  auStack_20._0_2_ = auStack_20._1_2_;
  FUN_0800dce4(local_2c);
  uStack_1b = SUB41(local_2c._0_4_,1);
  local_1c = (undefined1)local_2c._0_4_;
  *param_1 = ((int)CONCAT11(local_1c,uStack_1b) << 0xc) / (int)(uint)DAT_200001a0;
  uStack_19 = SUB41(local_2c._0_4_,3);
  uStack_1a = SUB41(local_2c._0_4_,2);
  param_1[1] = ((int)CONCAT11(uStack_1a,uStack_19) << 0xc) / (int)(uint)DAT_200001a0;
  local_17 = SUB41(local_2c._4_4_,1);
  local_18 = (undefined1)local_2c._4_4_;
  param_1[2] = ((int)CONCAT11(local_18,local_17) << 0xc) / (int)(uint)DAT_200001a0;
  local_15 = SUB41(local_2c._4_4_,3);
  local_16 = SUB41(local_2c._4_4_,2);
  *(ushort *)(param_1 + 3) = CONCAT11(local_16,local_15);
  uStack_13 = SUB41(local_2c._8_4_,1);
  local_14 = (undefined1)local_2c._8_4_;
  param_1[4] = (int)CONCAT11(local_14,uStack_13);
  uStack_11 = SUB41(local_2c._8_4_,3);
  uStack_12 = SUB41(local_2c._8_4_,2);
  param_1[5] = (int)CONCAT11(uStack_12,uStack_11);
  local_f = SUB21(auStack_20._0_2_,1);
  local_10 = (undefined1)auStack_20._0_2_;
  param_1[6] = (int)CONCAT11(local_10,local_f);
  return 1;
}



/* ENTRY 0x0800ddb0 : FUN_0800ddb0 */

void FUN_0800ddb0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(8,1);
  local_8 = 0x10030100;
  FUN_08022d14(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800ddec : FUN_0800ddec */

void FUN_0800ddec(undefined1 param_1)

{
  DAT_200001b8 = param_1;
  return;
}



/* ENTRY 0x0800ddf2 : FUN_0800ddf2 */

void FUN_0800ddf2(undefined1 param_1)

{
  DAT_200001b9 = param_1;
  return;
}



/* ENTRY 0x0800ddf8 : FUN_0800ddf8 */

void FUN_0800ddf8(void)

{
  if (DAT_200001b8 == '\0') {
    if (DAT_200001b9 != '\0') {
      if (DAT_200001ba < 4) {
        DAT_422181a0 = 1;
        DAT_200001ba = DAT_200001ba + 1;
      }
      else if (DAT_200001ba < 6) {
        DAT_422181a0 = 0;
        DAT_200001ba = DAT_200001ba + 1;
      }
      else {
        DAT_200001ba = 0;
        DAT_200001b9 = DAT_200001b9 + -1;
      }
    }
  }
  else if (DAT_200001ba < 0x1e) {
    DAT_422181a0 = 1;
    DAT_200001ba = DAT_200001ba + 1;
  }
  else if (DAT_200001ba < 0x32) {
    DAT_422181a0 = 0;
    DAT_200001ba = DAT_200001ba + 1;
  }
  else {
    DAT_200001ba = 0;
    DAT_200001b8 = DAT_200001b8 + -1;
  }
  return;
}



/* ENTRY 0x0800deac : FUN_0800deac */

void FUN_0800deac(void)

{
  int iVar1;
  
  iVar1 = DAT_42220134;
  if (iVar1 == 0) {
    if (DAT_200001c8 == '\0') {
      if (DAT_200001be < 0xfe) {
        DAT_200001be = DAT_200001be + 1;
        if (0x14 < DAT_200001be) {
          if (DAT_200001c3 == 1) {
            DAT_200001c1 = DAT_200001c3;
          }
          else if (DAT_200001c3 == 2) {
            DAT_200001c2 = 1;
          }
          else if ((3 < DAT_200001c3) && (DAT_200001c3 < 8)) {
            DAT_200001c4 = 1;
          }
          DAT_200001c3 = 0;
        }
      }
      else {
        DAT_200001c0 = '\0';
        DAT_200001c1 = 0;
        DAT_200001c2 = 0;
        DAT_200001c4 = 0;
        DAT_200001c3 = 0;
      }
    }
    else {
      if (1 < DAT_200001bc) {
        if (DAT_200001bc < 0x14) {
          DAT_200001c3 = DAT_200001c3 + 1;
        }
        DAT_200001c0 = DAT_200001c0 + '\x01';
      }
      DAT_200001c5 = 0;
      DAT_200001bc = 0;
    }
    DAT_200001c8 = 0;
  }
  else {
    if (DAT_200001c8 == '\0') {
      if (0x14 < DAT_200001be) {
        DAT_200001c3 = 0;
        DAT_200001c2 = 0;
        DAT_200001c4 = 0;
      }
      if (2 < DAT_200001be) {
        DAT_200001c0 = '\x01';
      }
      DAT_200001c6 = 0;
      DAT_200001c7 = 0;
      DAT_200001be = 0;
      DAT_200001c1 = 0;
    }
    else {
      if (DAT_200001bc < 0xfe) {
        DAT_200001bc = DAT_200001bc + 1;
      }
      if (DAT_200001c3 == 4) {
        DAT_200001c5 = 1;
      }
      if (100 < DAT_200001bc) {
        DAT_200001c4 = 0;
        DAT_200001c2 = 0;
        DAT_200001c3 = 0;
      }
      if ((DAT_200001bc == 0x28) && (DAT_200001c3 == 0)) {
        DAT_200001c6 = 1;
      }
      if (DAT_200001bc == 0xfa) {
        DAT_200001c7 = 1;
      }
      if (0x27 < DAT_200001bc) {
        DAT_200001c0 = '\0';
      }
    }
    DAT_200001c8 = 1;
  }
  return;
}



/* ENTRY 0x0800e00c : FUN_0800e00c */

undefined4 FUN_0800e00c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_200001c5 == '\0') {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      DAT_200001c5 = '\0';
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800e064 : FUN_0800e064 */

bool FUN_0800e064(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001c0 == '\x02';
  if (bVar1) {
    DAT_200001c0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e07a : FUN_0800e07a */

bool FUN_0800e07a(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001c6 != '\0';
  if (bVar1) {
    DAT_200001c6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e0a2 : FUN_0800e0a2 */

void FUN_0800e0a2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(0x10,1);
  local_8 = 0x28032000;
  FUN_08022d14(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0800e100 : FUN_0800e100 */

int FUN_0800e100(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_08025d78)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e13a : FUN_0800e13a */

int FUN_0800e13a(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_08025d78)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e174 : FUN_0800e174 */

int FUN_0800e174(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0800e18e : FUN_0800e18e */

int FUN_0800e18e(int param_1)

{
  DAT_200001ca = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001ca * 9) / 10);
  return (int)(DAT_200001ca / 100);
}



/* ENTRY 0x0800e1d2 : FUN_0800e1d2 */

undefined4 FUN_0800e1d2(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_08022c98();
  FUN_08022b1c(0x34);
  DAT_200001cc = FUN_08022b28((&DAT_08025f28)[param_1]);
  DAT_200030f8 = 0;
  DAT_200030fc = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_200030f8,(&DAT_20002ff0)[uVar1]);
    DAT_200030f8 = DAT_200030f8 + (&DAT_20002ff0)[uVar1];
    DAT_200030fc = DAT_200030fc + (uint)bVar2;
    DAT_200001cc = FUN_08022bc4((&DAT_08025f28)[param_1] + uVar1 * 4,(&DAT_20002ff0)[uVar1]);
  }
  DAT_200001cc = FUN_08022bc4((&DAT_08025f28)[param_1] + uVar1 * 4,(&DAT_20002ff0)[uVar1]);
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001cc = FUN_08022bc4((&DAT_08025f28)[param_1] + uVar1 * 4,(&DAT_20002ff0)[uVar1]);
  FUN_08022b1c(0x34);
  FUN_08022b7c();
  return 0;
}



/* ENTRY 0x0800e27a : FUN_0800e27a */

bool FUN_0800e27a(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_08025f28)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08025f28)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x0800e2dc : FUN_0800e2dc */

undefined4 FUN_0800e2dc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20002ff0)[uVar1] = *(undefined4 *)((&DAT_08025f28)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x0800e2fe : FUN_0800e2fe */

undefined4 FUN_0800e2fe(void)

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
      (&DAT_20003052)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_20003052)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x0800e390 : FUN_0800e390 */

undefined4 FUN_0800e390(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e27a(1);
  if (iVar1 == 0) {
    FUN_0800e1d2(1);
    iVar1 = FUN_0800e27a(1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800e27a(0);
      if (iVar1 == 0) {
        FUN_0800e1d2(0);
        iVar1 = FUN_0800e27a(0);
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
      FUN_0800e1d2(0);
      iVar1 = FUN_0800e27a(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_0800e1d2(0);
    iVar1 = FUN_0800e27a(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0800e1d2(1);
      iVar1 = FUN_0800e27a(1);
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



/* ENTRY 0x0800e408 : FUN_0800e408 */

undefined4 FUN_0800e408(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e27a(0);
  if (iVar1 == 0) {
    iVar1 = FUN_0800e27a(1);
    if (iVar1 == 0) {
      FUN_0800e2fe();
      uVar2 = 0;
    }
    else {
      FUN_0800e2dc(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_0800e2dc(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800e440 : FUN_0800e440 */

void FUN_0800e440(void)

{
  FUN_08022c98();
  FUN_08022b28(0x803a000);
  FUN_08022b7c();
  DAT_200001d0 = 0;
  DAT_200001ce = 0;
  return;
}



/* ENTRY 0x0800e45e : FUN_0800e45e */

bool FUN_0800e45e(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001ce;
  if (DAT_200001ce < 0x3ff) {
    DAT_200001d0 = DAT_200001d0 + param_1;
    FUN_08022c98();
    FUN_08022b8c((uint)DAT_200001ce * 2 + 0x803a000,param_1);
    FUN_08022b7c();
    DAT_200001ce = DAT_200001ce + 1;
  }
  else {
    FUN_08022c98();
    FUN_08022b28(0x803a000);
    FUN_08022b7c();
    DAT_200001d0 = DAT_200001d0 + param_1 * 10;
    DAT_20003050 = (undefined2)((uint)DAT_200001d0 >> 0x10);
    DAT_2000304e = (undefined2)DAT_200001d0;
    DAT_200001ce = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x0800e4e0 : FUN_0800e4e0 */

void FUN_0800e4e0(void)

{
  uint uVar1;
  
  DAT_200001d0 = CONCAT22(DAT_20003050,DAT_2000304e);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001ce = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001d0 = DAT_200001d0 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}



/* ENTRY 0x0800e554 : FUN_0800e554 */

void FUN_0800e554(void)

{
  int iVar1;
  
  iVar1 = FUN_0800dc5c();
  if (iVar1 == 0) {
    DAT_2000310c = DAT_2000310c | 0x40;
  }
  FUN_08012758();
  FUN_08010ae2();
  return;
}



/* ENTRY 0x0800e572 : FUN_0800e572 */

void FUN_0800e572(void)

{
  FUN_08010486();
  FUN_0800fd98();
  FUN_0800894a(0x18);
  return;
}



/* ENTRY 0x0800e584 : FUN_0800e584 */

void FUN_0800e584(void)

{
  int iVar1;
  
  iVar1 = DAT_20003114;
  if (DAT_20003114 < 0) {
    iVar1 = -DAT_20003114;
  }
  if ((iVar1 < 0x12d) || (DAT_200005a0 == '\0')) {
    DAT_2000020e = 0;
  }
  else if (DAT_2000020e < 100) {
    DAT_2000020e = DAT_2000020e + 1;
  }
  if (((byte)DAT_2000310e & 0x10) == 0) {
    if (DAT_2000020e < 0x3c) {
      iVar1 = (int)DAT_200002fc;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_200001fc < 800) {
          DAT_200001fc = DAT_200001fc + 1;
        }
        iVar1 = DAT_20003114;
        if (DAT_20003114 < 0) {
          iVar1 = -DAT_20003114;
        }
        if ((iVar1 < 500) && (DAT_200001fc < 600)) {
          DAT_200001fc = DAT_200001fc + 0x1e;
        }
      }
      else if (3 < DAT_200001fc) {
        DAT_200001fc = DAT_200001fc + -3;
      }
      iVar1 = (int)DAT_200002fc;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_PhcurrLimit_Vq_P < iVar1) {
        if (DAT_20000200 < 800) {
          DAT_20000200 = DAT_20000200 + 1;
        }
        iVar1 = DAT_20003114;
        if (DAT_20003114 < 0) {
          iVar1 = -DAT_20003114;
        }
        if ((iVar1 < 500) && (DAT_20000200 < 600)) {
          DAT_20000200 = DAT_20000200 + 0x1e;
        }
      }
      else if (3 < DAT_20000200) {
        DAT_20000200 = DAT_20000200 + -3;
      }
      if (10 < DAT_20000204) {
        DAT_20000204 = DAT_20000204 + -10;
      }
    }
    else {
      if (3 < DAT_200001fc) {
        DAT_200001fc = DAT_200001fc + -3;
      }
      if (3 < DAT_20000200) {
        DAT_20000200 = DAT_20000200 + -3;
      }
      if (DAT_20000204 < 0x708) {
        DAT_20000204 = DAT_20000204 + 10;
      }
    }
  }
  else {
    if (DAT_200001fc < 200) {
      DAT_200001fc = 200;
    }
    else if (DAT_200001fc < 600) {
      DAT_200001fc = DAT_200001fc + 6;
    }
    else if (DAT_200001fc < 800) {
      DAT_200001fc = DAT_200001fc + 2;
    }
    if (DAT_20000200 < 200) {
      DAT_20000200 = 200;
    }
    else if (DAT_20000200 < 600) {
      DAT_20000200 = DAT_20000200 + 6;
    }
    else if (DAT_20000200 < 800) {
      DAT_20000200 = DAT_20000200 + 2;
    }
    if (10 < DAT_20000204) {
      DAT_20000204 = DAT_20000204 + -10;
    }
  }
  if (DAT_200001fc < 0xc9) {
    diag_BuscurLimit = diag_BuscurLimit_set;
    DAT_2000310c = DAT_2000310c & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_200001fc)) / 900;
    DAT_2000310c = DAT_2000310c | 4;
  }
  if (DAT_20000200 < 0xc9) {
    iVar1 = DAT_20000204 + 900;
  }
  else {
    iVar1 = (0x44c - DAT_20000200) + DAT_20000204;
  }
  diag_PhcurrLimit = (diag_PhcurrLimit_set * iVar1) / 900;
  iVar1 = (int)DAT_200002fc;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (diag_buscurlmt_vq < iVar1) {
LAB_0800e836:
    if (DAT_200002bc != '\x01') {
      if (DAT_20000208 < 100) {
        DAT_20000208 = DAT_20000208 + 1;
      }
      else {
        DAT_2000310c = DAT_2000310c | 2;
      }
      goto LAB_0800e888;
    }
  }
  else {
    iVar1 = (int)DAT_200002fc;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_0800e836;
  }
  if (DAT_20000208 < 0xb) {
    DAT_2000310c = DAT_2000310c & 0xfffd;
  }
  else {
    DAT_20000208 = DAT_20000208 + -1;
  }
LAB_0800e888:
  if ((((DAT_2000310c & 6) == 0) || (((byte)DAT_2000310e & 0x10) == 0)) || (DAT_20003118 != '\0')) {
    DAT_2000020a = 0;
  }
  else if (DAT_2000020a < 0x4b0) {
    DAT_2000020a = DAT_2000020a + 1;
  }
  else {
    FUN_0800e572();
    DAT_2000020a = 0;
  }
  return;
}



/* ENTRY 0x0800e8d0 : FUN_0800e8d0 */

void FUN_0800e8d0(void)

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
  
  iVar4 = DAT_20003114;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_20003120;
  iVar8 = 1;
  if (DAT_20003114 < 0) {
    iVar8 = -1;
  }
  if (DAT_20003120 < 0x2329) {
    local_30 = 9000;
  }
  local_34 = diag_LimitSpeed;
  if (70000 < diag_LimitSpeed) {
    local_34 = 70000;
  }
  if (local_34 < 0x61a9) {
    local_34 = 25000;
  }
  if (DAT_200001d4 < local_30) {
    diag_g_winespeed_lv = diag_LimitSpeed;
    if (70000 < diag_LimitSpeed) {
      diag_g_winespeed_lv = 70000;
    }
    DAT_200001d8 = 0;
  }
  else {
    diag_g_winespeed_lv =
         ((((local_30 + -9000) * 100) / (DAT_200001d4 + -9000)) * (local_34 + -25000)) / 100 + 25000
    ;
    DAT_200001d8 = 1;
    if (diag_LimitSpeed < diag_g_winespeed_lv) {
      diag_g_winespeed_lv = diag_LimitSpeed;
    }
  }
  if (DAT_2000312c < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_2000312c + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001ec * iVar2) / 400;
  }
  iVar6 = DAT_200001ec;
  if ((iVar2 <= DAT_200001ec) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_20003114;
  if (DAT_20003114 < 0) {
    iVar2 = -DAT_20003114;
  }
  if (diag_g_winespeed_lv + 4000 < iVar2) {
    iVar2 = DAT_20003114;
    if (DAT_20003114 < 0) {
      iVar2 = -DAT_20003114;
    }
    iVar2 = ((iVar2 - (diag_g_winespeed_lv + 4000)) * 100) / 1000;
    lVar1 = (longlong)DAT_200001ec * (longlong)iVar2 * (longlong)iVar2;
    local_48 = (undefined4)lVar1;
    uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_08022452(local_48,uStack_44,90000,0);
  }
  else {
    iVar2 = 0;
  }
  iVar3 = DAT_200001ec;
  if ((iVar2 <= DAT_200001ec) && (iVar3 = iVar2, iVar2 < 0)) {
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
      iVar5 = iVar5 + (short)(&DAT_200001e0)[uVar7];
    }
    else if (iVar3 < iVar5) {
      iVar5 = iVar5 - (int)(short)(&DAT_200001e0)[uVar7] / 3;
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
      iVar5 = iVar5 - (short)(&DAT_200001e0)[uVar7];
    }
    else if (iVar5 < -iVar3) {
      iVar5 = iVar5 + (int)(short)(&DAT_200001e0)[uVar7] / 3;
    }
  }
  diag_angleoffset_int = iVar5;
  return;
}



/* ENTRY 0x0800ebd6 : FUN_0800ebd6 */

void FUN_0800ebd6(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_20003104 = DAT_20003104 + 1;
  if (1 < diag_motionstep) {
    if ((DAT_20003234 < DAT_20003138 + -0x96) && (DAT_20003234 < 0xa000)) {
      DAT_20003234 = DAT_20003234 + 100;
    }
    else if ((DAT_20003138 + 0x96 < DAT_20003234) && (-0xa000 < DAT_20003234)) {
      DAT_20003234 = DAT_20003234 + -100;
    }
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002bc = 7;
    iVar2 = FUN_0800fcc4(0);
    if ((iVar2 == 1) && (DAT_20000355 == 1)) {
      diag_motionstep = DAT_20000355;
      DAT_200002bc = DAT_20000355;
      if (DAT_20000310 != '\0') {
        DAT_2000310c = DAT_2000310c | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_2000310e & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_2000310e & 8) != 0) {
      diag_motionstep = 8;
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
        iVar2 = DAT_20003114;
        if (DAT_20003114 < 0) {
          iVar2 = -DAT_20003114;
        }
        if (((iVar2 < 2000) && (((byte)DAT_2000310e & 5) == 5)) &&
           (((DAT_2000310e & 10) == 0 && (((DAT_2000310c & 1) == 0 && (DAT_200002bc == 1)))))) {
          DAT_200002bc = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_20003134 = 0;
          FUN_0800894a(3);
          diag_rollptag_auto = 0x28000;
          FUN_08020dc2(4);
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
      if (((iVar2 < 0x28000) && (((byte)DAT_2000310e & 4) == 4)) && ((DAT_2000310e & 8) == 0)) {
        if ((DAT_2000310e & 0x20) == 0) {
          if (DAT_20003134 + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_20003134 + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_20003134;
            FUN_0800894a(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_08020dc2(0xe1);
        }
        break;
      }
    }
    FUN_08010486();
    diag_motionstep = 2;
    FUN_0800fd98();
    FUN_0800894a(0x30);
    FUN_08020dc2(0xe0);
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
          if (0x27fff < iVar2) goto LAB_0800ef5e;
        }
        if ((((byte)DAT_2000310e & 4) == 4) && ((DAT_2000310e & 8) == 0)) {
          FUN_0800e8d0();
          iVar2 = DAT_20003114;
          if (DAT_20003114 < 0) {
            iVar2 = -DAT_20003114;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003114;
            if (DAT_20003114 < 0) {
              iVar2 = -DAT_20003114;
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
          else if (diag_rollptag_auto < DAT_2000313c) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_2000310e & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_08020dc2(0xe1);
          }
          break;
        }
      }
    }
LAB_0800ef5e:
    DAT_20003152 = 1;
    FUN_08010486();
    diag_motionstep = 2;
    FUN_0800fd98();
    FUN_0800894a(0x30);
    FUN_08020dc2(0xe0);
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
          if (0x27fff < iVar2) goto LAB_0800f11e;
        }
        if ((((byte)DAT_2000310e & 4) == 4) && ((DAT_2000310e & 8) == 0)) {
          iVar2 = DAT_20003114;
          if (DAT_20003114 < 0) {
            iVar2 = -DAT_20003114;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003114;
            if (DAT_20003114 < 0) {
              iVar2 = -DAT_20003114;
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
          else if (diag_rollptag_auto < DAT_2000313c) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_20003114 < 0x2ee1) {
            if (DAT_20003114 < 1) {
              if (DAT_20003114 == 0) {
                DAT_20003134 = -0x19000;
              }
              else if (DAT_20003114 < -11999) {
                DAT_20003134 = -0x12000;
              }
              else {
                DAT_20003134 = -0x19000;
              }
            }
            else {
              DAT_20003134 = 0x19000;
            }
          }
          else {
            DAT_20003134 = 0x12000;
          }
          if (DAT_20003134 + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_20003134 + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_20003134;
          }
          break;
        }
      }
    }
LAB_0800f11e:
    DAT_20003152 = 1;
    FUN_08010486();
    diag_motionstep = 2;
    FUN_0800fd98();
    FUN_0800894a(0x30);
    FUN_08020dc2(0xe0);
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_20003152 = 1;
      FUN_08008e00(0x3c);
      iVar2 = FUN_0800fa32();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_0800f884();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800894a(0xf0);
    FUN_08008e00(0xa0);
    DAT_2000310e = DAT_2000310e & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_20000310 != '\0') {
      DAT_2000310c = DAT_2000310c | 0x10;
    }
    if (DAT_2000030e != '\0') {
      DAT_2000310c = DAT_2000310c | 0x20;
    }
    if (DAT_200005d8 == '\x01') {
      DAT_2000310e = DAT_2000310e | 1;
    }
    else {
      DAT_2000310e = DAT_2000310e & 0xfffe;
    }
  }
  if (DAT_200006d4 == 0) {
    DAT_2000310e = DAT_2000310e | 0x40;
  }
  else if (DAT_20003118 == '\0') {
    DAT_2000310e = DAT_2000310e & 0xffbf;
  }
  FUN_0800e584();
  uVar5 = CONCAT44(DAT_20003194,DAT_20003190);
  iVar2 = DAT_20003114;
  if (DAT_20003114 < 0) {
    iVar2 = -DAT_20003114;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_20003180;
    if (DAT_20003180 < 0) {
      iVar2 = -DAT_20003180;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003190 * 4999);
      uVar3 = DAT_20003180 * 5000;
      uVar5 = FUN_08022452(uVar4 + uVar3,
                           DAT_20003194 * 4999 + (int)((ulonglong)DAT_20003190 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_2000319c,DAT_20003198);
    DAT_20003194 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003190 = (uint)uVar5;
    iVar2 = DAT_20003184;
    if (DAT_20003184 < 0) {
      iVar2 = -DAT_20003184;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003198 * 4999);
      uVar3 = DAT_20003184 * 5000;
      uVar6 = FUN_08022452(uVar4 + uVar3,
                           DAT_2000319c * 4999 + (int)((ulonglong)DAT_20003198 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_20003194,DAT_20003190);
    }
    uVar7 = CONCAT44(DAT_200031a4,DAT_200031a0);
    DAT_2000319c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003198 = (uint)uVar6;
    DAT_20003194 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003190 = (uint)uVar5;
    iVar2 = DAT_20003188;
    if (DAT_20003188 < 0) {
      iVar2 = -DAT_20003188;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_200031a0 * 4999);
      uVar3 = DAT_20003188 * 5000;
      uVar7 = FUN_08022452(uVar4 + uVar3,
                           DAT_200031a4 * 4999 + (int)((ulonglong)DAT_200031a0 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_2000319c,DAT_20003198);
      uVar5 = CONCAT44(DAT_20003194,DAT_20003190);
    }
    DAT_200031a4 = (int)((ulonglong)uVar7 >> 0x20);
    DAT_200031a0 = (uint)uVar7;
    DAT_2000319c = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003198 = (uint)uVar6;
    DAT_20003194 = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003190 = (uint)uVar5;
    diag_vttest_0_ = FUN_08022452(DAT_20003190,DAT_20003194,5000,0);
    diag_vttest_1_ = FUN_08022452(DAT_20003198,DAT_2000319c,5000,0);
    diag_vttest_2_ = FUN_08022452(DAT_200031a0,DAT_200031a4,5000,0);
  }
  return;
}



/* ENTRY 0x0800f378 : FUN_0800f378 */

void FUN_0800f378(void)

{
  int iVar1;
  int iVar2;
  
  DAT_20003114 = ((diag_HallRSP * 0x13240) / 15000 + DAT_20003114 * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000304) / 10;
  DAT_20003120 = (DAT_20003120 * 9 + DAT_20000308) / 10;
  DAT_2000312c = FUN_0800afa8((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002bc;
  iVar1 = DAT_20003114;
  if (DAT_20003114 < 0) {
    iVar1 = -DAT_20003114;
  }
  if (iVar1 < 3000) {
    if (DAT_20003118 != '\0') {
      DAT_20003118 = DAT_20003118 + -1;
    }
  }
  else {
    DAT_20003118 = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_200001f0 == '\0') {
      iVar1 = DAT_20003124 - DAT_20003120;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_20003120)) {
        DAT_200001f0 = '\x01';
      }
      else {
        DAT_20003124 = (DAT_20003124 * 0x13 + DAT_20003120) / 0x14;
      }
    }
    else if (DAT_20003124 + 1 < DAT_20003120) {
      DAT_20003124 = DAT_20003124 + 1;
    }
    else if (DAT_20003120 + 1 < DAT_20003124) {
      DAT_20003124 = DAT_20003124 + -1;
    }
    else {
      DAT_20003124 = DAT_20003120;
    }
  }
  DAT_200001f2 = (short)((DAT_200001f2 * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_200001f2 / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_20003124 / 100);
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
    if ((0x32 < DAT_200001f8) && (iVar2 < 10000)) {
      DAT_200001f8 = DAT_200001f8 + -1;
    }
  }
  else if (DAT_200001f8 < 100) {
    DAT_200001f8 = DAT_200001f8 + 1;
  }
  iVar1 = (((diag_VqIqRateRT * diag_PhcurrLimit) / 100) * (int)DAT_200001f8) / 100;
  if (iVar2 < 0x6d61) {
    if (iVar2 < -28000) {
      iVar2 = -28000;
    }
  }
  else {
    iVar2 = 28000;
  }
  if (DAT_200001f4 + 400 < iVar2) {
    iVar2 = DAT_200001f4 + 400;
  }
  else if (iVar2 < DAT_200001f4 + -400) {
    iVar2 = DAT_200001f4 + -400;
  }
  DAT_200001f4 = iVar2;
  diag_RsSpeedVq = (diag_VqSpeedRateRT * diag_HallRSP) / 100;
  diag_RtIqVq = (diag_VqIqRateRT * diag_g_average_iq) / 100;
  diag_PhcurrLimit_Vq_P = DAT_200001f4 + iVar1;
  diag_PhcurrLimit_Vq_N = -iVar1 - DAT_200001f4;
  if (DAT_2000030d != '\0') {
    DAT_2000310c = DAT_2000310c | 0x80;
  }
  return;
}



/* ENTRY 0x0800f70e : FUN_0800f70e */

void FUN_0800f70e(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fb06();
    FUN_0800fddc();
  }
  return;
}



/* ENTRY 0x0800f722 : FUN_0800f722 */

bool FUN_0800f722(void)

{
  if (DAT_20003118 == '\0') {
    DAT_2000310e = DAT_2000310e | 8;
  }
  return DAT_20003118 == '\0';
}



/* ENTRY 0x0800f73c : FUN_0800f73c */

void FUN_0800f73c(int param_1)

{
  if (param_1 == 7) {
    DAT_2000310e = DAT_2000310e | 0x20;
  }
  return;
}



/* ENTRY 0x0800f74e : FUN_0800f74e */

void FUN_0800f74e(void)

{
  FUN_0800f73c(7);
  return;
}



/* ENTRY 0x0800f758 : FUN_0800f758 */

undefined4 FUN_0800f758(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0800f760 : FUN_0800f760 */

undefined4 FUN_0800f760(void)

{
  return diag_pintch;
}



/* ENTRY 0x0800f768 : FUN_0800f768 */

undefined4 FUN_0800f768(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0800f76e : FUN_0800f76e */

void FUN_0800f76e(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_20003118 == '\0') {
    DAT_20003138 = param_1;
  }
  return;
}



/* ENTRY 0x0800f78e : FUN_0800f78e */

void FUN_0800f78e(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_20003118 == '\0') {
    DAT_2000313c = param_1;
  }
  return;
}



/* ENTRY 0x0800f7b0 : FUN_0800f7b0 */

void FUN_0800f7b0(undefined1 param_1)

{
  DAT_20003151 = param_1;
  return;
}



/* ENTRY 0x0800f7b8 : FUN_0800f7b8 */

bool FUN_0800f7b8(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0800f7fc : FUN_0800f7fc */

void FUN_0800f7fc(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800f828 : FUN_0800f828 */

uint FUN_0800f828(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800f884 : FUN_0800f884 */

undefined4 FUN_0800f884(void)

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
  FUN_08022562(&local_64,0x1c);
  FUN_08008e00(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800dcf0(&local_64);
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
  DAT_20003238 = FUN_08022452(local_38,local_34,sVar1,0);
  DAT_2000323c = FUN_08022452(local_40,local_3c,sVar1,0);
  DAT_20003240 = FUN_08022452(local_48,local_44,sVar1,0);
  DAT_20003244 = FUN_08022452(uVar3,iVar4,sVar1,0);
  DAT_20003248 = FUN_08022452(uVar5,iVar6,sVar1,0);
  DAT_2000324c = FUN_08022452(local_30,local_2c,sVar1,0);
  iVar4 = DAT_20003238;
  if (DAT_20003238 < 0) {
    iVar4 = -DAT_20003238;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_2000323c;
    if (DAT_2000323c < 0) {
      iVar4 = -DAT_2000323c;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_20003240;
      if (DAT_20003240 < 0) {
        iVar4 = -DAT_20003240;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_20003244;
        if (DAT_20003244 < 0) {
          iVar4 = -DAT_20003244;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_20003248;
          if (DAT_20003248 < 0) {
            iVar4 = -DAT_20003248;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_2000324c;
            if (DAT_2000324c < 0) {
              iVar4 = -DAT_2000324c;
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



/* ENTRY 0x0800fa32 : FUN_0800fa32 */

undefined4 FUN_0800fa32(void)

{
  FUN_0800dcf0(&DAT_20003158);
  return DAT_20003160;
}



/* ENTRY 0x0800faac : FUN_0800faac */

void FUN_0800faac(void)

{
  FUN_0800f7fc(&DAT_20000210);
  FUN_0800f7fc(&DAT_2000021c);
  FUN_0800f7fc(&DAT_20000228);
  FUN_0800f7fc(&DAT_20000234);
  FUN_0800f7fc(&DAT_20000240);
  FUN_0800f7fc(&DAT_2000024c);
  FUN_08008944(2000);
  FUN_0800894a(0xf0);
  DAT_20003234 = 0;
  DAT_20003190 = 0;
  DAT_20003194 = 0;
  DAT_20003198 = 0;
  DAT_2000319c = 0;
  DAT_200031a0 = 0;
  DAT_200031a4 = 0;
  return;
}



/* ENTRY 0x0800fb06 : FUN_0800fb06 */

void FUN_0800fb06(void)

{
  int iVar1;
  
  FUN_0800dcf0(&DAT_20003158);
  DAT_20000264 = DAT_20003158 - DAT_20003238;
  DAT_20000268 = DAT_2000315c - DAT_2000323c;
  DAT_2000026c = DAT_20003160;
  DAT_20000258 = DAT_20003168 - DAT_20003244;
  DAT_2000025c = DAT_2000316c - DAT_20003248;
  DAT_20000260 = DAT_20003170 - DAT_2000324c;
  diag_acce_x = FUN_0800f828(&DAT_20000210,DAT_20000264);
  diag_acce_y = FUN_0800f828(&DAT_2000021c,DAT_20000268);
  diag_acce_z = FUN_0800f828(&DAT_20000228,DAT_2000026c);
  DAT_20003180 = FUN_0800f828(&DAT_20000234,-DAT_2000025c);
  DAT_20003184 = FUN_0800f828(&DAT_20000240,DAT_20000258);
  DAT_20003188 = FUN_0800f828(&DAT_2000024c,DAT_20000260);
  iVar1 = FUN_08022452(DAT_20003190,DAT_20003194,5000,0);
  diag_gyro_x = DAT_20003180 - iVar1;
  iVar1 = FUN_08022452(DAT_20003198,DAT_2000319c,5000,0);
  diag_gyro_y = DAT_20003184 - iVar1;
  iVar1 = FUN_08022452(DAT_200031a0,DAT_200031a4,5000,0);
  diag_gyro_z = DAT_20003188 - iVar1;
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
  FUN_08008688(&DAT_20003180);
  return;
}



/* ENTRY 0x0800fcc4 : FUN_0800fcc4 */

undefined4 FUN_0800fcc4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    DAT_20000270 = '\0';
    DAT_20000271 = 0;
  }
  if (DAT_20000270 == '\0') {
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
        if (9 < DAT_20000271) {
          DAT_20000270 = 1;
          FUN_0800894a();
          return 1;
        }
        DAT_20000271 = DAT_20000271 + 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800fd88 : FUN_0800fd88 */

void FUN_0800fd88(undefined4 param_1)

{
  FUN_080224d8(&diag_pidk_acc,param_1,0x10);
  return;
}



/* ENTRY 0x0800fd98 : FUN_0800fd98 */

void FUN_0800fd98(void)

{
  DAT_2000027c = 0;
  DAT_20000280 = 0;
  DAT_20000284 = 0;
  diag_angleoffset_int = 0;
  DAT_2000028c = 0;
  DAT_20000290 = 0;
  DAT_200002a4 = 0;
  DAT_200002a0 = 0;
  FUN_0800f7fc(&DAT_200002a8);
  DAT_20000294 = 0;
  diag_commbospeed0 = 0;
  diag_commbopcurr = 0;
  FUN_08010ca4();
  DAT_20000274 = 0;
  return;
}



/* ENTRY 0x0800fddc : FUN_0800fddc */

void FUN_0800fddc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((((diag_motionstep == '\x03') || (diag_motionstep == '\x04')) || (diag_motionstep == '\a')) &&
     ((DAT_200002bc == '\x03' || (DAT_200002bc == '\x04')))) {
    DAT_20000280 = diag_pintch + diag_angleoffset_int;
    DAT_20000284 = diag_s_acc;
    iVar3 = DAT_20000280;
    if (0xf000 < DAT_20000280) {
      iVar3 = 0xf000;
    }
    if (iVar3 < -0xf000) {
      iVar3 = -0xf000;
    }
    iVar5 = DAT_20003124 / 100;
    if (0x7b < iVar5) {
      iVar5 = 0x7b;
    }
    if (iVar5 < 0x60) {
      iVar5 = 0x60;
    }
    iVar4 = (((int)(iVar3 * (uint)diag_pidk_p) / 100 +
             ((int)((uint)diag_pidk_acc * diag_s_acc +
                   ((uint)((int)((uint)diag_pidk_acc * diag_s_acc) >> 0x1f) >> 0x12)) >> 0xe)) *
            0x72) / iVar5;
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
    if (DAT_20003151 == '\x01') {
      if (((byte)DAT_2000310e & 0x40) == 0) {
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if ((iVar2 < DAT_200002b4) && (0x4b0 < DAT_200002b4)) {
          DAT_200002b4 = DAT_200002b4 + -100;
        }
        iVar2 = DAT_200002b4;
        if ((iVar1 <= DAT_200002b4) && (iVar2 = iVar1, iVar1 < -DAT_200002b4)) {
          iVar2 = -DAT_200002b4;
        }
        iVar1 = iVar2;
        if (1000 < DAT_20000278) {
          DAT_20000278 = DAT_20000278 + -0x32;
        }
      }
      else {
        if (DAT_200002b4 < 20000) {
          DAT_200002b4 = DAT_200002b4 + 100;
        }
        if (DAT_20000278 < 32000) {
          iVar2 = iVar3;
          if (iVar3 < 0) {
            iVar2 = -iVar3;
          }
          if (iVar2 < 0x5000) {
            iVar2 = iVar4;
            if (iVar4 < 0) {
              iVar2 = -iVar4;
            }
            if (DAT_20000278 < iVar2) {
              DAT_20000278 = DAT_20000278 + 1;
            }
            else {
              DAT_20000278 = DAT_20000278 + 0x32;
            }
          }
        }
      }
    }
    else if (((byte)DAT_2000310e & 0x40) == 0) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = -iVar1;
      }
      if ((iVar2 < DAT_200002b8) && (0x4b0 < DAT_200002b8)) {
        DAT_200002b8 = DAT_200002b8 + -100;
      }
      iVar2 = DAT_200002b8;
      if ((iVar1 <= DAT_200002b8) && (iVar2 = iVar1, iVar1 < -DAT_200002b8)) {
        iVar2 = -DAT_200002b8;
      }
      iVar1 = iVar2;
      if (100 < DAT_20000278) {
        DAT_20000278 = DAT_20000278 + -0x32;
      }
    }
    else {
      if (DAT_200002b8 < 20000) {
        DAT_200002b8 = DAT_200002b8 + 100;
      }
      if (DAT_20000278 < 32000) {
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = -iVar3;
        }
        if (iVar2 < 0x5000) {
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = -iVar4;
          }
          if (DAT_20000278 < iVar2) {
            DAT_20000278 = DAT_20000278 + 1;
          }
          else {
            DAT_20000278 = DAT_20000278 + 0x32;
          }
        }
      }
    }
    DAT_20000294 = (DAT_20000294 * 0x31 + iVar1 * 0x32) / 0x32;
    diag_commbospeed0 = (diag_commbospeed0 * 9 + iVar1 * 10) / 10;
    iVar1 = (int)((uint)diag_pidk_speed * diag_commbospeed0) / 100;
    if (DAT_20000290 + 0x14 < iVar1) {
      iVar1 = DAT_20000290 + 0x14;
    }
    if (iVar1 < DAT_20000290 + -0x14) {
      iVar1 = DAT_20000290 + -0x14;
    }
    if (diag_g_average_iq < 0x3e9) {
      if (diag_g_average_iq < -1000) {
        iVar2 = diag_g_average_iq + 1000;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = diag_g_average_iq + -1000;
    }
    if (diag_commbopcurr < 1) {
      if (diag_commbopcurr + 0x50 < iVar2) {
        diag_commbopcurr = diag_commbopcurr + 0x50;
      }
      else if (iVar2 < diag_commbopcurr + -10) {
        diag_commbopcurr = diag_commbopcurr + -10;
      }
    }
    else if (diag_commbopcurr + 10 < iVar2) {
      diag_commbopcurr = diag_commbopcurr + 10;
    }
    else if (iVar2 < diag_commbopcurr + -0x50) {
      diag_commbopcurr = diag_commbopcurr + -0x50;
    }
    iVar2 = (DAT_20000294 << 2) / 10;
    if (iVar2 < 0x1801) {
      if (iVar2 < -0x1800) {
        iVar2 = -0x1800;
      }
    }
    else {
      iVar2 = 0x1800;
    }
    iVar3 = iVar3 + iVar2 + DAT_200002a0;
    if (iVar3 < 0x801) {
      if (iVar3 < -0x800) {
        iVar3 = iVar3 + 0x800;
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = iVar3 + -0x800;
    }
    iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x17)) >> 9;
    if (iVar3 < 0x1f) {
      if (iVar3 < -0x1e) {
        iVar3 = -0x1e;
      }
    }
    else {
      iVar3 = 0x1e;
    }
    DAT_2000028c = DAT_2000028c + iVar3;
    if (DAT_2000028c < 0x7149) {
      if (DAT_2000028c < -29000) {
        DAT_2000028c = -29000;
      }
    }
    else {
      DAT_2000028c = 29000;
    }
    DAT_2000027c = iVar4 + (iVar1 * 0x72) / iVar5 + diag_commbopcurr / (int)(diag_k_pcurr + 1);
    if (DAT_20000274 < 32000) {
      DAT_20000274 = DAT_20000274 + 100;
    }
    if (DAT_20000274 < DAT_2000027c) {
      DAT_2000027c = DAT_20000274;
    }
    else if (DAT_2000027c < -DAT_20000274) {
      DAT_2000027c = -DAT_20000274;
    }
    if (DAT_20000278 < DAT_2000027c) {
      DAT_2000027c = DAT_20000278;
    }
    else if (DAT_2000027c < -DAT_20000278) {
      DAT_2000027c = -DAT_20000278;
    }
    DAT_200002fc = (undefined2)DAT_2000027c;
    DAT_20000290 = iVar1;
  }
  return;
}



/* ENTRY 0x08010424 : FUN_08010424 */

void FUN_08010424(void)

{
  FUN_08022562(&diag_IA,0x38);
  FUN_08010924(1);
  return;
}



/* ENTRY 0x08010436 : FUN_08010436 */

void FUN_08010436(void)

{
  FUN_08022562(&diag_IA,0x38);
  FUN_08010924(2);
  return;
}



/* ENTRY 0x08010448 : FUN_08010448 */

void FUN_08010448(void)

{
  FUN_08010924(4);
  return;
}



/* ENTRY 0x08010452 : FUN_08010452 */

void FUN_08010452(void)

{
  FUN_08010924(4);
  return;
}



/* ENTRY 0x0801045c : FUN_0801045c */

void FUN_0801045c(void)

{
  FUN_08010924(5);
  return;
}



/* ENTRY 0x08010466 : FUN_08010466 */

void FUN_08010466(void)

{
  FUN_08010924(3);
  FUN_08010a60(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010476 : FUN_08010476 */

void FUN_08010476(void)

{
  FUN_08010924(7);
  FUN_08010a60(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010486 : FUN_08010486 */

void FUN_08010486(void)

{
  DAT_200002bc = 1;
  FUN_08010924();
  FUN_08010ca4();
  return;
}



/* ENTRY 0x08010498 : FUN_08010498 */

void FUN_08010498(void)

{
  switch(DAT_200002bc) {
  case 1:
    FUN_08010424();
    break;
  case 2:
    FUN_08010436();
    break;
  case 3:
    FUN_08010448();
    break;
  case 4:
    FUN_08010452();
    break;
  case 7:
    FUN_08010466();
    break;
  case 8:
    FUN_0801045c();
    break;
  case 10:
    FUN_08010476();
  }
  DAT_20000304 = (((((int)(uint)DAT_20003334 >> 4) - (int)(short)DAT_20000358) * 0x26) / 10 +
                 DAT_20000304 * 0x31) / 0x32;
  DAT_200002c8 = (int)(((uint)DAT_200002cc * ((int)(uint)DAT_20003330 >> 2)) /
                       (uint)((int)(uint)DAT_2000333c >> 4) + DAT_200002c8 * 9) / 10;
  DAT_200002c4 = DAT_200002c8;
  DAT_20000308 = DAT_200002c8 + DAT_200002c0;
  if (15000 < DAT_200002c8 + DAT_200002c0) {
    DAT_2000030c = 1;
  }
  return;
}



/* ENTRY 0x08010594 : FUN_08010594 */

int FUN_08010594(void)

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
      DAT_200002bc = 10;
      FUN_08008e00(5);
      bVar1 = 0;
      while ((bVar1 < 0x14 && (DAT_200002ce == '\0'))) {
        FUN_08008e00(1);
        bVar1 = bVar1 + 1;
      }
      if (DAT_200002ce == '\0') {
        iVar2 = 0;
      }
      else {
        for (bVar1 = 0; bVar1 < 0x14; bVar1 = bVar1 + 1) {
          FUN_08008e00(1);
          iVar3 = iVar3 + DAT_20000308;
        }
        iVar3 = 0xd7e970 / (iVar3 / 0x14);
        if ((0x4f9 < iVar3) && (iVar3 < 0x614)) {
          DAT_200002cc = (undefined2)iVar3;
          for (bVar1 = 0; bVar1 < 10; bVar1 = bVar1 + 1) {
            FUN_08008e00(1);
            if ((0x26de < DAT_20000308) && (DAT_20000308 < 0x2742)) {
              iVar2 = 1;
              break;
            }
          }
        }
        if (iVar2 == 0) {
          DAT_2000030d = 1;
          iVar2 = 0;
        }
        else {
          FUN_08022c98();
          FUN_08022b1c(0x34);
          FUN_08022b8c(&DAT_08001342,DAT_200002cc);
          FUN_08022b8c(&DAT_08001344,0x3f10);
          FUN_08022b1c(0x34);
          FUN_08022b7c();
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



/* ENTRY 0x080106de : FUN_080106de */

undefined4 FUN_080106de(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08001340 == -0x3f11) {
    if (((DAT_08001344 == 0x3f10) && (0x4f9 < DAT_08001342)) && (DAT_08001342 < 0x614)) {
      DAT_200002cc = DAT_08001342;
      uVar1 = 1;
    }
    else if (param_1 == 0) {
      DAT_2000030d = 1;
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



/* ENTRY 0x0801073e : FUN_0801073e */

void FUN_0801073e(void)

{
  uint uVar1;
  
  DAT_200002d8 = FUN_0801229a();
  DAT_200002d9 = DAT_200002d8;
  uVar1 = (uint)DAT_200002d8;
  if (uVar1 == DAT_200002d4) {
    if (DAT_200002d6 < 0x15) {
      DAT_200002d6 = DAT_200002d6 + 1;
    }
    else if (uVar1 == 0) {
      DAT_200002da = '\x01';
      DAT_200002d5 = 0;
      DAT_200002e0 = 0;
      DAT_200002dc = 0;
    }
  }
  else if (((DAT_200002da != '\0') && (DAT_200002d6 = 0, (uVar1 & 2) == 2)) &&
          ((DAT_200002d4 & 2) == 0)) {
    if (DAT_200002d5 < 0x20) {
      DAT_200002dc = DAT_200002dc << 1 | uVar1 & 1;
      DAT_200002d5 = DAT_200002d5 + 1;
    }
    else if (DAT_200002d5 < 0x40) {
      DAT_200002e0 = DAT_200002e0 << 1 | uVar1 & 1;
      DAT_200002d5 = DAT_200002d5 + 1;
    }
    else {
      DAT_200002d5 = 0;
      DAT_200002da = '\0';
      if ((DAT_200002dc ^ DAT_200002e0) == 0xffffffff) {
        DAT_200002e4 = DAT_200002dc;
        DAT_200002d0 = DAT_200002dc;
        if ((0x26de < DAT_200002dc) && (DAT_200002dc < 0x2742)) {
          DAT_200002ce = 1;
        }
      }
    }
  }
  DAT_200002d4 = DAT_200002d8;
  return;
}



/* ENTRY 0x08010894 : FUN_08010894 */

void FUN_08010894(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0801160a();
    switch(DAT_200002e8) {
    case 1:
    case 2:
      FUN_080114b8(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_080126e2(&DAT_200032d0);
      break;
    case 3:
      DAT_20000355 = FUN_0801131c();
      break;
    case 4:
    case 5:
      FUN_08010cba(DAT_200002e8);
      break;
    case 7:
      FUN_0801073e();
    }
  }
  else {
    iVar2 = FUN_0802273a(&DAT_40012400,0x140);
    if (iVar2 == 1) {
      FUN_0802267e(&DAT_40012400,1);
    }
  }
  return;
}



/* ENTRY 0x08010924 : FUN_08010924 */

undefined4 FUN_08010924(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == DAT_200002e9) {
    uVar1 = 1;
  }
  else {
    DAT_200002e8 = (byte)param_1;
    DAT_200002e9 = DAT_200002e8;
    switch(param_1) {
    case 1:
    case 7:
      FUN_0802334e(&DAT_40012c00,0);
      FUN_0802334e(&DAT_40012c00,4,0);
      FUN_0802334e(&DAT_40012c00,8,0);
      FUN_08022e4e(&DAT_40010c00,0x2000);
      FUN_08022e4e(&DAT_40010c00,0x8000);
      FUN_08022e4e(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_08023a10(&DAT_40012c00,0,0x40);
      FUN_0802334e(&DAT_40012c00,0,1);
      FUN_08023a10(&DAT_40012c00,4,0x40);
      FUN_0802334e(&DAT_40012c00,4,1);
      FUN_08023a10(&DAT_40012c00,8,0x40);
      FUN_0802334e(&DAT_40012c00,8,1);
      FUN_08022e52(&DAT_40010c00,0x2000);
      FUN_08022e52(&DAT_40010c00,0x8000);
      FUN_08022e52(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_08023a10(&DAT_40012c00,0,0x60);
      FUN_0802334e(&DAT_40012c00,0,1);
      FUN_08023a10(&DAT_40012c00,4,0x60);
      FUN_0802334e(&DAT_40012c00,4,1);
      FUN_08023a10(&DAT_40012c00,8,0x60);
      FUN_0802334e(&DAT_40012c00,8,1);
      FUN_08022e52(&DAT_40010c00,0x2000);
      FUN_08022e52(&DAT_40010c00,0x8000);
      FUN_08022e52(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08010a60 : FUN_08010a60 */

void FUN_08010a60(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x08010a7c : FUN_08010a7c */

void FUN_08010a7c(void)

{
  FUN_080112be();
  FUN_080112ce();
  return;
}



/* ENTRY 0x08010a88 : FUN_08010a88 */

void FUN_08010a88(void)

{
  int iVar1;
  
  iVar1 = FUN_080235cc(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08023368(&DAT_40012c00,1);
    FUN_08010a7c();
    FUN_080115f8();
  }
  return;
}



/* ENTRY 0x08010aa6 : FUN_08010aa6 */

void FUN_08010aa6(void)

{
  int iVar1;
  
  iVar1 = FUN_080235cc(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08023368(&DAT_40012c00,0x80);
    DAT_2000030e = 1;
    FUN_080237a0(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x08010ad2 : FUN_08010ad2 */

void FUN_08010ad2(void)

{
  FUN_08011650();
  FUN_08010fac();
  FUN_08011036();
  return;
}



/* ENTRY 0x08010ae2 : FUN_08010ae2 */

void FUN_08010ae2(void)

{
  DAT_20003318 = 0x18000;
  DAT_2000331c = 0x8000;
  DAT_20003320 = 0x10000;
  FUN_08011eb0(&DAT_2000337c,&DAT_20003344);
  FUN_08010ad2();
  FUN_08023386(&DAT_40012c00,1);
  FUN_08023374(&DAT_40012c00,1);
  FUN_08010ef4(1);
  FUN_08010924(1);
  return;
}



/* ENTRY 0x08010b28 : FUN_08010b28 */

int FUN_08010b28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (diag_BuscurLimit * DAT_20000348) / 15000 + diag_BuscurLimit;
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
    if (1 < DAT_20000348) {
      DAT_20000348 = DAT_20000348 + -1;
    }
  }
  else if (param_1 < -iVar2) {
    if (1 < DAT_20000348) {
      DAT_20000348 = DAT_20000348 + -1;
    }
  }
  else if (DAT_20000348 < 5000) {
    DAT_20000348 = DAT_20000348 + 1;
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



/* ENTRY 0x08010ca4 : FUN_08010ca4 */

void FUN_08010ca4(void)

{
  DAT_2000033c = 0;
  diag_g_average_iq = 0;
  DAT_20000346 = 0;
  FUN_08011e9c();
  return;
}



/* ENTRY 0x08010cba : FUN_08010cba */

undefined8 FUN_08010cba(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_080114b8(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_08011fb8(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_080126e2();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000338 = FUN_080122d6();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000338 = diag_halloffset;
  }
  else {
    DAT_20000338 = DAT_20000338 + 1;
  }
  FUN_08012090(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000338);
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
  diag_g_dif_iq = (short)diag_g_average_iq - DAT_20000346;
  DAT_20000346 = (short)diag_g_average_iq;
  if (param_1 == 5) {
    diag_VQ = FUN_08010b28((int)DAT_200002fe);
  }
  else {
    diag_VQ = FUN_08010b28((int)DAT_200002fc);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_08011e9c();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_08011f24(DAT_200032d4,diag_IDCurrent,&DAT_20003344);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_080120ec();
  FUN_08012148(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_08011838(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x08010ef4 : FUN_08010ef4 */

void FUN_08010ef4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_08022dd4(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08023368(&DAT_40012c00,1);
    FUN_080237a0(&DAT_40012c00,1);
  }
  else {
    FUN_080237a0(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x08010f50 : FUN_08010f50 */

void FUN_08010f50(void)

{
  DAT_20003324 = 0;
  DAT_20003328 = 0;
  DAT_2000332c = 0;
  FUN_08022826(&DAT_40012800,2);
  FUN_080227c4(&DAT_40012800,3,1,2);
  FUN_080227c4(&DAT_40012800,1,2);
  FUN_0802271e(&DAT_40012800,0x1000);
  FUN_0802270c(&DAT_40012800,1);
  FUN_08022766(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x08010fac : FUN_08010fac */

void FUN_08010fac(void)

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
  
  FUN_08022f64(1);
  FUN_08022970(&DAT_40020008);
  FUN_08022b02(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_20003330;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08022aac(&DAT_40020008,&local_30);
  FUN_0802295c(&DAT_40020008,1);
  return;
}



/* ENTRY 0x08011036 : FUN_08011036 */

void FUN_08011036(void)

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
  
  FUN_08022f50(0x8000);
  FUN_08022fac(0x15,1);
  FUN_08022fac(0x600,1);
  FUN_08022e56(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_08022d14(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_08022d14(&DAT_40010800,&local_24);
  FUN_08022e56(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_08022d14(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_08022d14(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_08022d14(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_08022d14(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_08022d14(&DAT_40011000,&local_24);
  FUN_080226a8(&DAT_40012400);
  FUN_080226a8(&DAT_40012800);
  FUN_08022684(&DAT_40012400,1);
  FUN_08022684(&DAT_40012800,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  FUN_080228ee(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 1;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 9;
  FUN_08022778(&DAT_40012400,&local_1c);
  FUN_08022836(&DAT_40012400,9,1,7);
  FUN_08022836(&DAT_40012400,8,2,7);
  FUN_08022836(&DAT_40012400,0,3,7);
  FUN_08022836(&DAT_40012400,0xf,4,7);
  FUN_08022836(&DAT_40012400,0xb,5,7);
  FUN_08022836(&DAT_40012400,0xd,6,7);
  FUN_08022836(&DAT_40012400,0x11,7,7);
  FUN_08022836(&DAT_40012400,10,8,7);
  FUN_08022836(&DAT_40012400,0x10,9,7);
  FUN_08022900(1);
  FUN_08022696(&DAT_40012400,1);
  FUN_080228ee(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 0;
  FUN_08022778(&DAT_40012800,&local_1c);
  FUN_080228c8(&DAT_40012400);
  FUN_080228c8(&DAT_40012800);
  do {
    uVar1 = FUN_08022756(&DAT_40012400);
    uVar2 = FUN_08022756(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_080228e4(&DAT_40012400);
  FUN_080228e4(&DAT_40012800);
  do {
    uVar1 = FUN_0802272a(&DAT_40012400);
    uVar2 = FUN_0802272a(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08010f50();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_08022eac(&local_20);
  FUN_080228d2(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x080112be : FUN_080112be */

void FUN_080112be(void)

{
  FUN_0802271e(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x080112ce : FUN_080112ce */

void FUN_080112ce(void)

{
  DAT_40012838 = DAT_20000350 + (DAT_2000034c >> 5) + 0x100000;
  return;
}



/* ENTRY 0x0801131c : FUN_0801131c */

undefined4 FUN_0801131c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_2000035c == '\0') {
    DAT_20003324 = 0;
    DAT_20003328 = 0;
    DAT_2000332c = 0;
    DAT_2000034c = DAT_20003318;
    DAT_20000350 = DAT_2000331c;
    bVar1 = 0x500 < DAT_20000360;
    DAT_20000360 = DAT_20000360 + 1;
    if (bVar1) {
      DAT_20000360 = 0;
      DAT_2000035c = '\x01';
    }
  }
  else if (DAT_2000035c == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_20003324 = DAT_20003324 + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_20003328 = DAT_20003328 + iVar2 * 2;
    DAT_20000358 = DAT_20000358 + ((int)(uint)DAT_20003334 >> 4);
    DAT_20000360 = DAT_20000360 + 1;
    if (DAT_20000360 == 0x40) {
      DAT_20003324 = (int)(DAT_20003324 + ((uint)(DAT_20003324 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20003328 = (int)(DAT_20003328 + ((uint)(DAT_20003328 >> 0x1f) >> 0x1a)) >> 6;
      DAT_2000035c = '\x02';
      DAT_2000035d = '\x01';
    }
  }
  if (DAT_2000035d == '\x01') {
    DAT_20000360 = 0;
    DAT_20000350 = DAT_20003320;
    DAT_2000035d = '\x02';
  }
  else if (DAT_2000035d == '\x02') {
    iVar2 = DAT_40012840;
    DAT_2000332c = DAT_2000332c + iVar2 * 2;
    DAT_20000358 = DAT_20000358 + ((int)(uint)DAT_20003334 >> 4);
    DAT_20000360 = DAT_20000360 + 1;
    if (DAT_20000360 == 0x40) {
      DAT_2000332c = (int)(DAT_2000332c + ((uint)(DAT_2000332c >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000358 = DAT_20000358 >> 7;
      DAT_2000035d = '\x03';
    }
  }
  else if (DAT_2000035d == '\x03') {
    DAT_20000364 = '\x01';
  }
  if (DAT_20000364 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((((0x8f9f < DAT_20003324) || (0x8f9f < DAT_20003328)) || (0x8f9f < DAT_2000332c)) ||
       (((DAT_20003324 < 0x705f || (DAT_20003328 < 0x705f)) || (DAT_2000332c < 0x705f)))) {
      DAT_20000310 = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x080114b8 : FUN_080114b8 */

void FUN_080114b8(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  switch(DAT_20000354) {
  case 1:
  case 6:
    iVar1 = DAT_4001283c;
    local_8 = DAT_20003328 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_2000332c) - local_8;
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
    local_c = DAT_20003324 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_2000332c) - local_c;
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
    local_c = DAT_20003324 + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_20003328 + iVar1 * -2;
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



/* ENTRY 0x080115f8 : FUN_080115f8 */

void FUN_080115f8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x0801160a : FUN_0801160a */

void FUN_0801160a(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x08011650 : FUN_08011650 */

void FUN_08011650(void)

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
  
  FUN_08022fac(0xc,1);
  FUN_08022e56(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_08022d14(&DAT_40010800,&local_38);
  FUN_08022e56(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_08022d14(&DAT_40010c00,&local_38);
  FUN_08022e4e(&DAT_40010c00,0x2000);
  FUN_08022e4e(&DAT_40010c00,0x8000);
  FUN_08022e4e(&DAT_40010c00,0x4000);
  FUN_08022dc2(&DAT_40010800,0x700);
  FUN_08022dc2(&DAT_40010c00,0xe000);
  FUN_08022fac(0x800);
  FUN_080233b4(&DAT_40012c00);
  FUN_08023b24(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_08023a88(&DAT_40012c00,&local_10);
  FUN_080239d8(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_080237ba(&DAT_40012c00,&local_20);
  FUN_0802384a(&DAT_40012c00,&local_20);
  FUN_080238da(&DAT_40012c00,&local_20);
  FUN_080239d8(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_08023966(&DAT_40012c00,&local_20);
  FUN_0802383e(&DAT_40012c00,8);
  FUN_080238cc(&DAT_40012c00,8);
  FUN_0802395a(&DAT_40012c00,8);
  FUN_080239ca(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_0802332a(&DAT_40012c00,&local_30);
  FUN_08023a64(&DAT_40012c00,0x20);
  FUN_0802336e(&DAT_40012c00,0x80);
  FUN_080237a0(&DAT_40012c00,0x80,1);
  FUN_080235c4(&DAT_40012c00,1);
  FUN_08023368(&DAT_40012c00,1);
  FUN_080237a0(&DAT_40012c00,1,0);
  FUN_080237a0(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_08022eac(&local_34);
  return;
}



/* ENTRY 0x08011838 : FUN_08011838 */

void FUN_08011838(int param_1,int param_2)

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
      DAT_20000354 = 5;
    }
    else if (iVar3 < 1) {
      DAT_20000354 = 4;
    }
    else {
      DAT_20000354 = 3;
    }
  }
  else if (iVar2 < 0) {
    if (iVar3 < 1) {
      DAT_20000354 = 6;
    }
    else {
      DAT_20000354 = 1;
    }
  }
  else {
    DAT_20000354 = 2;
  }
  DAT_20000365 = 0;
  bVar5 = false;
  if (DAT_20000354 < 7) {
    uVar8 = iVar2 >> 0x1f;
    uVar7 = iVar3 >> 0x1f;
    uVar12 = iVar1 >> 0x1f;
    switch(DAT_20000354) {
    case 0:
      goto switchD_080118fa_caseD_0;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_2000331c;
      DAT_20000350 = DAT_20003320;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_20003318;
      DAT_20000350 = DAT_20003320;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_20003318;
      DAT_20000350 = DAT_20003320;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_20003318;
      DAT_20000350 = DAT_2000331c;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_20003318;
      DAT_20000350 = DAT_2000331c;
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
            DAT_20000365 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_2000034c = DAT_2000331c;
      DAT_20000350 = DAT_20003320;
    }
  }
  else {
switchD_080118fa_caseD_0:
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



/* ENTRY 0x08011e9c : FUN_08011e9c */

void FUN_08011e9c(void)

{
  DAT_200033a4 = 0;
  DAT_2000336c = 0;
  DAT_200033a8 = 0;
  DAT_20003370 = 0;
  return;
}



/* ENTRY 0x08011eb0 : FUN_08011eb0 */

void FUN_08011eb0(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x08011f24 : FUN_08011f24 */

int FUN_08011f24(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x08011fb8 : FUN_08011fb8 */

void FUN_08011fb8(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x08011fec : FUN_08011fec */

void FUN_08011fec(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_08025ff4 + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_08025ff4 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_08025ff4 + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_08025ff4 + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_08025ff4 + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_08025ff4 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_08025ff4 + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_08025ff4 + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x08012090 : FUN_08012090 */

void FUN_08012090(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_08011fec(&local_2c,param_4);
  DAT_20000368 = local_2c;
  DAT_2000036c = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x080120ec : FUN_080120ec */

void FUN_080120ec(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08025f70 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08025f70 + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x08012148 : FUN_08012148 */

void FUN_08012148(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_20000368 * param_3;
  iVar1 = param_2 * DAT_2000036c;
  *param_1 = (param_3 * DAT_2000036c + DAT_20000368 * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x080121a4 : FUN_080121a4 */

void FUN_080121a4(void)

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
  
  FUN_08022fac(0x10,1);
  FUN_08022f7c(2,1);
  FUN_08022dd4(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_08022d14(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_08022d14(&DAT_40011000,&local_20);
  FUN_080233b4(&DAT_40000400);
  FUN_08023b24(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_08023a88(&DAT_40000400,&local_10);
  FUN_08023790(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_080235e4(&DAT_40000400,&local_1c);
  FUN_080239ec(&DAT_40000400,400,1);
  FUN_080237b0(&DAT_40000400);
  FUN_080239f2(&DAT_40000400,1);
  FUN_08023a04(&DAT_40000400,0x40);
  FUN_08023a74(&DAT_40000400,4);
  FUN_08023b48(&DAT_40000400,1);
  FUN_08023368(&DAT_40000400,0x1e5f);
  FUN_08023a84(&DAT_40000400,0);
  FUN_08023374(&DAT_40000400,1);
  return;
}



/* ENTRY 0x0801229a : FUN_0801229a */

byte FUN_0801229a(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_08022e40(&DAT_40011000,0x40);
  cVar2 = FUN_08022e40(&DAT_40011000,0x80);
  cVar3 = FUN_08022e40(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x080122d6 : FUN_080122d6 */

int FUN_080122d6(void)

{
  return (int)diag_motor_egdir * (DAT_20000588 + diag_halloffset);
}



/* ENTRY 0x080122ec : FUN_080122ec */

void FUN_080122ec(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_200005a8;
    if (DAT_200005a8 < 0) {
      iVar1 = -DAT_200005a8;
    }
    if (1000 < iVar1) {
      iVar1 = DAT_200005a8;
      if (DAT_200005a8 < 0) {
        iVar1 = -DAT_200005a8;
      }
      if (iVar1 < 10000) {
        if (DAT_200005b3 < 4) {
          DAT_200005b3 = DAT_200005b3 + 1;
        }
        else {
          *(short *)((uint)DAT_20000574 * 0x10 + 0x20000394 + param_5 * 2) =
               (short)((int)((param_4 * 0x7ff8) /
                             (int)((uint)DAT_200005b4 + param_4 + (uint)DAT_200005b6) +
                            (uint)*(ushort *)((uint)DAT_20000574 * 0x10 + 0x20000394 + param_5 * 2)
                            * 9) / 10);
        }
        goto LAB_0801237c;
      }
    }
  }
  DAT_200005b3 = 0;
LAB_0801237c:
  DAT_200005b6 = DAT_200005b4;
  DAT_200005b4 = (short)param_4;
  if (param_2 == 0) {
    if (param_3 == 1) {
      if (DAT_20000574 == 0x1d) {
        DAT_20000574 = 0;
      }
      else {
        DAT_20000574 = DAT_20000574 + 1;
      }
    }
    else if (DAT_20000574 == 0) {
      DAT_20000574 = 0x1d;
    }
    else {
      DAT_20000574 = DAT_20000574 - 1;
    }
  }
  return;
}



/* ENTRY 0x080123c4 : FUN_080123c4 */

void FUN_080123c4(void)

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
  uVar5 = FUN_0801229a();
  bVar3 = (byte)uVar5;
  DAT_2000058c = bVar3;
  if (uVar5 != DAT_200005ae) {
    iVar6 = FUN_080235c8(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_080261f4 + (uint)DAT_200005ae * 3 + uVar5 * 0x18);
    DAT_20000372 = *(char *)((int)(&UNK_080261f4 + (uint)DAT_200005ae * 3 + uVar5 * 0x18) + 2);
    DAT_20000370._0_1_ = (char)uVar2;
    DAT_20000370 = uVar2;
    if ((char)DAT_20000370 == '\0') {
      DAT_20000370._1_1_ = (byte)((ushort)uVar2 >> 8);
      bVar4 = DAT_20000370._1_1_;
      switch(DAT_20000370._1_1_) {
      case 0:
        DAT_200005ac = (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4;
        break;
      case 1:
        DAT_200005ac = *(short *)(&DAT_2000039e + (uint)DAT_20000574 * 0x10) +
                       (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4;
        break;
      case 2:
        DAT_200005ac = (0x7ff8 - *(short *)(&DAT_2000039a + (uint)DAT_20000574 * 0x10)) +
                       (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4;
        break;
      case 3:
        DAT_200005ac = (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4 + 0x7ff8;
        break;
      case 4:
        DAT_200005ac = *(short *)(&DAT_20000398 + (uint)DAT_20000574 * 0x10) + -0x7ff8 +
                       (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4;
        break;
      case 5:
        DAT_200005ac = (DAT_20000372 * 0xf + DAT_20000372 * 0x3c) * -4 -
                       *(short *)(&DAT_2000039c + (uint)DAT_20000574 * 0x10);
      }
      if (DAT_20000372 == DAT_200005af) {
        if (iVar6 < 0x2001) {
          if (iVar6 < 0x14) {
            DAT_200005a4 = (int)((int)DAT_20000372 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000574 * 0x10 + 0x20000394 +
                                        (uint)DAT_200005ae * 2) * 100) / 0x14;
            DAT_20000598 = 0x14;
          }
          else {
            DAT_200005a4 = (int)((int)DAT_20000372 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000574 * 0x10 + 0x20000394 +
                                        (uint)DAT_200005ae * 2) * 100) / iVar6;
            DAT_20000598 = iVar6;
          }
        }
        else {
          DAT_200005a4 = 0;
          DAT_200005a8 = 0;
          DAT_20000598 = 0x2000;
        }
        if (DAT_200005b0 < 0x5b) {
          DAT_200005b0 = DAT_200005b0 + 1;
        }
        else {
          DAT_2000059c = DAT_2000059c + 1;
          DAT_200005a0 = 1;
        }
      }
      else {
        DAT_200005b0 = 0;
        DAT_200005a0 = 0;
        DAT_200005a4 = 0;
        DAT_200005a8 = 0;
        uVar8 = 1;
        DAT_200005ac = *(short *)(&DAT_20000374 + (uint)DAT_20000370._1_1_ * 2);
      }
      iVar7 = DAT_200005a4 - DAT_200005a8;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x4b0) || (bVar1 = 10 < DAT_200005b1, DAT_200005b1 = DAT_200005b1 + 1, bVar1)) {
        DAT_200005a8 = DAT_200005a4;
        DAT_200005b1 = 0;
      }
      DAT_20000590 = diag_motor_spdir * DAT_200005a8;
      iVar7 = DAT_20000590 - diag_HallRSP;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x640) || (bVar1 = 10 < DAT_200005b2, DAT_200005b2 = DAT_200005b2 + 1, bVar1)) {
        DAT_200005b2 = 0;
        diag_HallRSP = DAT_20000590;
      }
      DAT_200005af = DAT_20000372;
      FUN_080122ec(uVar8,bVar4,(int)DAT_20000372,iVar6,DAT_200005ae);
      DAT_200005ae = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005ae = bVar3;
    }
  }
  return;
}



/* ENTRY 0x080126e2 : FUN_080126e2 */

void FUN_080126e2(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_080123c4();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005a8 == 0) || (0x7ff < uVar3)) {
    DAT_200005a4 = 0;
    DAT_200005a8 = 0;
    iVar2 = FUN_0801229a();
    DAT_20000588 = (int)*(short *)(&DAT_20000374 + iVar2 * 2) + DAT_20000372 * -300;
  }
  else {
    DAT_20000588 = (int)(uVar3 * DAT_200005a8) / 100 + (int)DAT_200005ac;
  }
  if (0x6000 < uVar3) {
    DAT_20000590 = 0;
    diag_HallRSP = 0;
    DAT_40000424 = 0x8000;
  }
  return;
}



/* ENTRY 0x08012758 : FUN_08012758 */

void FUN_08012758(void)

{
  FUN_080121a4();
  return;
}



/* ENTRY 0x080127ac : FUN_080127ac */

bool FUN_080127ac(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x080127be : FUN_080127be */

bool FUN_080127be(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_080224d8(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x080127fe : FUN_080127fe */

bool FUN_080127fe(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != cVar2) {
    FUN_080224d8(param_2,*(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x43,0x43);
    param_1[1] = param_1[1] + 1U & param_1[2] - 1U;
  }
  return cVar1 != cVar2;
}



/* ENTRY 0x08012836 : FUN_08012836 */

uint FUN_08012836(byte *param_1,char *param_2)

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



/* ENTRY 0x08012884 : FUN_08012884 */

undefined4 FUN_08012884(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_08012836(param_2,auStack_50);
  FUN_080127be(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x080128a2 : FUN_080128a2 */

void FUN_080128a2(int param_1)

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
    FUN_080135ec(param_1);
    break;
  default:
    FUN_08013eb8(param_1);
  }
  return;
}



/* ENTRY 0x080128dc : FUN_080128dc */

void FUN_080128dc(char *param_1,int param_2)

{
  uint uVar1;
  
  if (((*param_1 == 'U') && (param_1[1] == -0x56)) && (param_2 == 0xe)) {
    uVar1 = (uint)(param_1[2] == '\v');
    if (param_1[3] == -0x13) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[4] == DAT_200005c1) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[5] == DAT_200005c2) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[6] == DAT_200005c3) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[7] == DAT_200005c4) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[8] == DAT_200005c5) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[9] == DAT_200005c6) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[10] == DAT_200005c7) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[0xb] == DAT_200005c8) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 10) {
      DAT_200005c0 = 1;
    }
  }
  return;
}



/* ENTRY 0x08012982 : FUN_08012982 */

undefined4 FUN_08012982(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_080262b4 + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_080262b4 + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x080129ee : FUN_080129ee */

void FUN_080129ee(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005c0 == '\0') {
    if (DAT_20002f94 < 500) {
      FUN_080128dc(param_1,param_2 & 0xff);
    }
    FUN_0801a472(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x3f || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_08012982(&local_54);
    if (iVar1 == 1) {
      FUN_080128a2(&local_54);
    }
  }
  return;
}



/* ENTRY 0x08012a86 : FUN_08012a86 */

void FUN_08012a86(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  uVar3 = DAT_200008f8 & 3;
  uVar2 = DAT_200008ff & 7;
  uVar4 = DAT_2000090a & 3;
  uVar5 = DAT_20000911 & 3;
  if ((DAT_200008f7 == uVar3) && (DAT_200008f6 != '\x01')) {
    iVar1 = FUN_080127ac(&DAT_200005b8);
    if (iVar1 == 0) {
      FUN_080127fe(&DAT_200005b8,&local_58);
      FUN_08012ef4(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000909 == uVar4) && (DAT_20000908 != '\x01')) {
        if ((DAT_20000910 == uVar5) && (DAT_2000090f != '\x01')) {
          if ((DAT_200008fe != uVar2) || (DAT_200008fd == '\x01')) {
            FUN_08012ef4(&DAT_20003dce + uVar2 * 0x14,(&DAT_20000900)[uVar2]);
            DAT_200008ff = (char)uVar2 + 1U & 7;
            DAT_200008fd = '\0';
          }
        }
        else {
          FUN_08012ef4(&DAT_20003ebe + uVar5 * 0x14,0x14);
          DAT_20000911 = (char)uVar5 + 1U & 3;
          DAT_2000090f = '\0';
        }
      }
      else {
        FUN_08012ef4(&DAT_20003e6e + uVar4 * 0x14,0x14);
        DAT_2000090a = (char)uVar4 + 1U & 3;
        DAT_20000908 = '\0';
      }
    }
  }
  else {
    FUN_08012ef4(&DAT_20003d7e + uVar3 * 0x14,0x14);
    DAT_200008f8 = (char)uVar3 + 1U & 3;
    DAT_200008f6 = '\0';
  }
  return;
}



/* ENTRY 0x08012c00 : FUN_08012c00 */

void FUN_08012c00(undefined4 param_1)

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
  FUN_08022dd4(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_08022d14(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_08022d14(&DAT_40010c00,&local_30);
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
  FUN_08022eac(&local_34);
  FUN_08023bd6(&DAT_40013800,0x360,1);
  FUN_08023bd6(&DAT_40013800,0x424,1);
  FUN_08023b7a(&DAT_40013800,0x80,1);
  FUN_08023b7a(&DAT_40013800,0x40,1);
  FUN_08022f64(1);
  FUN_08022970(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_2000360c;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_40020044,&local_60);
  FUN_08022a9c(&DAT_40020044,2,1);
  FUN_0802295c(&DAT_40020044,0);
  FUN_08022970(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_200035cc;
  local_58 = 0;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_40020058,&local_60);
  FUN_0802295c(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_08022eac(&local_34);
  FUN_0800d102(&DAT_40013800,&local_2c);
  FUN_08023b68(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08012d88 : FUN_08012d88 */

void FUN_08012d88(void)

{
  DAT_200005cc = 0;
  return;
}



/* ENTRY 0x08012d90 : FUN_08012d90 */

void FUN_08012d90(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x2000);
  if (iVar2 != 0) {
    FUN_08022944(0x2000);
    FUN_0802295c(&DAT_40020044,0);
    FUN_08012d88();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08012dcc : FUN_08012dcc */

void FUN_08012dcc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_08022a7c(0x20000);
    if (iVar2 != 0) {
      FUN_08022944(0x20000);
    }
  }
  else {
    FUN_08022944(0x40000);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08012e10 : FUN_08012e10 */

void FUN_08012e10(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_08023b8a(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_08022a74(&DAT_40020058);
    uVar4 = 0x40 - iVar3;
    FUN_0802295c(&DAT_40020058,0);
    DAT_4002005c = 0x40;
    FUN_0802295c(&DAT_40020058,1);
    FUN_08023b5a(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x41)) {
      FUN_080129ee(&DAT_200035cc,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_08023b8a(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_08023b5a(&DAT_40013800,0x727);
    FUN_08023bd6(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_08023b8a(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_08023b5a(&DAT_40013800,0x525);
  }
  iVar3 = FUN_08023b8a(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_08023b5a(&DAT_40013800,0x260);
  }
  iVar3 = FUN_08023b8a(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_08023b5a(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08012ef4 : FUN_08012ef4 */

undefined4 FUN_08012ef4(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005cc == '\0') {
    DAT_200005cc = '\x01';
    if (0x40 < (int)param_2) {
      param_2 = 0x40;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_2000360c)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08022944(0x2000);
    FUN_0802295c(&DAT_40020044,0);
    FUN_08022afe(&DAT_40020044,uVar2);
    FUN_0802295c(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08012f6c : FUN_08012f6c */

void FUN_08012f6c(int param_1)

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
      DAT_200005d0 = 1;
      return;
    }
    local_55 = (undefined1)(&DWORD_08026af8)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_08026af8 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_08026af4)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_08026af8 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_08026b00)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_08026b00)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_08026af8 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_08026afc)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_08026af8 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_08026b00)[uVar1 * 4] + '\x06';
  }
  FUN_08012982(local_58);
  FUN_08012884(&DAT_200005b8,local_58);
  return;
}



/* ENTRY 0x08013048 : FUN_08013048 */

void FUN_08013048(int param_1)

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
    local_51 = (undefined1)(&DWORD_08026af8)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08026af8 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_08026af4)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_08026af8 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_08026b00)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08026b00)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_08026af8 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_08026afc)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_08026af8 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_08026b00)[param_1 * 4] + '\x06';
  }
  FUN_08012982(local_54);
  FUN_08012884(&DAT_200005b8,local_54);
  return;
}



/* ENTRY 0x08013114 : FUN_08013114 */

void FUN_08013114(undefined1 param_1)

{
  DAT_200005ce = param_1;
  return;
}



/* ENTRY 0x0801311a : FUN_0801311a */

void FUN_0801311a(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_2000365c;
  local_58[3] = DAT_2000365d;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_2000365d; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_080264b8 + (uint)(byte)(&DAT_2000365e)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080264b4)[(uint)(byte)(&DAT_2000365e)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012982(local_58);
  FUN_08012884(&DAT_200005b8,local_58);
  return;
}



/* ENTRY 0x08013192 : FUN_08013192 */

void FUN_08013192(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_2000365c;
  local_4d = DAT_2000365d;
  for (uVar1 = 0; uVar1 < DAT_2000365d; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_2000365e)[uVar1];
  }
  local_50[0] = DAT_2000365d + 5;
  FUN_08012982(local_50);
  FUN_08012884(&DAT_200005b8,local_50);
  return;
}



/* ENTRY 0x080131e2 : FUN_080131e2 */

void FUN_080131e2(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08013192();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000365c)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08013192();
  }
  return;
}



/* ENTRY 0x0801320e : FUN_0801320e */

void FUN_0801320e(undefined1 param_1)

{
  DAT_200005cd = param_1;
  return;
}



/* ENTRY 0x08013214 : FUN_08013214 */

void FUN_08013214(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_20003666;
  local_58[3] = DAT_20003667;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_20003667; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_080264b8 + (uint)(byte)(&DAT_20003668)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080264b4)[(uint)(byte)(&DAT_20003668)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012982(local_58);
  FUN_08012884(&DAT_200005b8,local_58);
  return;
}



/* ENTRY 0x0801328c : FUN_0801328c */

void FUN_0801328c(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080264b8 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_080264b4)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_08012982(local_54);
  FUN_08012884(&DAT_200005b8,local_54);
  return;
}



/* ENTRY 0x080132e2 : FUN_080132e2 */

void FUN_080132e2(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_080264c0 + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080264b8 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_080264b4)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080264b8 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_080264b4)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_080264b4)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012982(local_58);
  FUN_08012884(&DAT_200005b8,local_58);
  return;
}



/* ENTRY 0x080133a0 : FUN_080133a0 */

void FUN_080133a0(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_20003666;
  local_4d = DAT_20003667;
  for (uVar1 = 0; uVar1 < DAT_20003667; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_20003668)[uVar1];
  }
  local_50[0] = DAT_20003667 + 5;
  FUN_08012982(local_50);
  FUN_08012884(&DAT_200005b8,local_50);
  return;
}



/* ENTRY 0x080133f0 : FUN_080133f0 */

void FUN_080133f0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_080133a0();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003666)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_080133a0();
  }
  return;
}



/* ENTRY 0x0801341c : FUN_0801341c */

void FUN_0801341c(int param_1)

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
    local_4d = 100;
    local_50[0] = '\x05';
  }
  else {
    if (param_1 == 0xfe) {
      DAT_200005cf = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_080264b8)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_080264c0 + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_080264c0)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_080264c0)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_080264bc)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_080264c0)[param_1 * 4] + '\a';
  }
  FUN_08012982(local_50);
  FUN_08012884(&DAT_200005b8,local_50);
  return;
}



/* ENTRY 0x080134ba : FUN_080134ba */

void FUN_080134ba(int param_1,int param_2)

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
  FUN_08012982(local_54);
  FUN_08012884(&DAT_200005b8,local_54);
  return;
}



/* ENTRY 0x08013500 : FUN_08013500 */

void FUN_08013500(void)

{
  FUN_080134ba(0x10,&DAT_08001300);
  FUN_080134ba(0xe,&DAT_08001310);
  FUN_080134ba(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x08013520 : FUN_08013520 */

void FUN_08013520(void)

{
  uint uVar1;
  
  if (DAT_200005cf == '\0') {
    if (DAT_200005d0 == '\0') {
      uVar1 = (uint)DAT_200005d1;
      DAT_200005d1 = DAT_200005d1 + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005cd == '\x01') {
          FUN_08013214();
        }
      }
      else if (DAT_200005ce == '\x01') {
        FUN_0801311a();
      }
    }
    else if (DAT_200005d3 == 0) {
      FUN_08013048(0xff);
      DAT_200005d3 = DAT_200005d3 + 1;
    }
    else if (DAT_200005d3 < 0x12) {
      FUN_08013048(DAT_200005d3 - 1);
      DAT_200005d3 = DAT_200005d3 + 1;
    }
    else {
      DAT_200005d3 = 0;
      DAT_200005d0 = '\0';
    }
  }
  else if (DAT_200005d2 == 0) {
    FUN_0801341c(0xff);
    DAT_200005d2 = DAT_200005d2 + 1;
  }
  else if (DAT_200005d2 < 0x65) {
    FUN_0801341c(DAT_200005d2 - 1);
    DAT_200005d2 = DAT_200005d2 + 1;
  }
  else {
    DAT_200005d2 = 0;
    DAT_200005cf = '\0';
  }
  return;
}



/* ENTRY 0x080135ec : FUN_080135ec */

void FUN_080135ec(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_0801341c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_080131e2(param_1 + 1);
    break;
  case 0xe2:
    FUN_080133f0(param_1 + 1);
    break;
  case 0xe3:
    FUN_08013114(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_0801320e(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_0801328c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_080132e2(param_1 + 1);
    break;
  case 0xe7:
    FUN_08013500();
    FUN_08012f6c(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08013678 : FUN_08013678 */

void FUN_08013678(undefined4 param_1)

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
  FUN_08022d14(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08022d14(&DAT_40010c00,&local_30);
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
  FUN_08022eac(&local_34);
  FUN_08023bd6(&DAT_40004800,0x360,1);
  FUN_08023bd6(&DAT_40004800,0x424,1);
  FUN_08023b7a(&DAT_40004800,0x80,1);
  FUN_08023b7a(&DAT_40004800,0x40,1);
  FUN_08022f64(1);
  FUN_08022970(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003770;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_4002001c,&local_60);
  FUN_08022a9c(&DAT_4002001c,2,1);
  FUN_0802295c(&DAT_4002001c,0);
  FUN_08022970(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_20003670;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_40020030,&local_60);
  FUN_0802295c(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08022eac(&local_34);
  FUN_08023c08(&DAT_40004800,&local_2c);
  FUN_08023b68(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08013800 : FUN_08013800 */

void FUN_08013800(void)

{
  DAT_200005d4 = 0;
  return;
}



/* ENTRY 0x08013808 : FUN_08013808 */

void FUN_08013808(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x20);
  if (iVar2 != 0) {
    FUN_08022944(0x20);
    FUN_0802295c(&DAT_4002001c,0);
    FUN_08013800();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013840 : FUN_08013840 */

void FUN_08013840(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_08022a7c(0x200);
    if (iVar2 != 0) {
      FUN_08022944(0x200);
    }
  }
  else {
    FUN_08022944(0x400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013884 : FUN_08013884 */

void FUN_08013884(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08023b8a(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_08022a74(&DAT_40020030);
    FUN_0802295c(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_0802295c(&DAT_40020030,1);
    FUN_08023b5a(&DAT_40004800,0x424);
    FUN_0801e0b0(&DAT_20003670,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_08023b8a(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004800,0x727);
    FUN_08023bd6(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_08023b8a(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004800,0x525);
  }
  iVar4 = FUN_08023b8a(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004800,0x260);
  }
  iVar4 = FUN_08023b8a(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013964 : FUN_08013964 */

undefined4 FUN_08013964(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005d4 == '\0') {
    DAT_200005d4 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003770)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08022944(0x20);
    FUN_0802295c(&DAT_4002001c,0);
    FUN_08022afe(&DAT_4002001c,uVar2);
    FUN_0802295c(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x080139d8 : FUN_080139d8 */

void FUN_080139d8(undefined4 param_1)

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
  FUN_08022d14(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08022d14(&DAT_40011000,&local_30);
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
  FUN_08022eac(&local_34);
  FUN_08023bd6(&DAT_40004c00,0x360,1);
  FUN_08023bd6(&DAT_40004c00,0x424,1);
  FUN_08023b7a(&DAT_40004c00,0x80,1);
  FUN_08023b7a(&DAT_40004c00,0x40,1);
  FUN_08022f64(2,1);
  FUN_08022970(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003930;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_40020458,&local_60);
  FUN_08022a9c(&DAT_40020458,2,1);
  FUN_0802295c(&DAT_40020458,0);
  FUN_08022970(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003830;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08022aac(&DAT_40020430,&local_60);
  FUN_0802295c(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08022eac(&local_34);
  FUN_08023c08(&DAT_40004c00,&local_2c);
  FUN_08023b68(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08013b60 : FUN_08013b60 */

void FUN_08013b60(void)

{
  DAT_200005d5 = 0;
  return;
}



/* ENTRY 0x08013b68 : FUN_08013b68 */

void FUN_08013b68(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x10020000);
  if (iVar2 != 0) {
    FUN_08022944(0x10020000);
    FUN_0802295c(&DAT_40020458,0);
    FUN_08013b60();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013ba0 : FUN_08013ba0 */

void FUN_08013ba0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_08022a7c(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_08022a7c(0x10000200);
    if (iVar2 != 0) {
      FUN_08022944(0x10000200);
    }
  }
  else {
    FUN_08022944(0x10000400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013bdc : FUN_08013bdc */

void FUN_08013bdc(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08023b8a(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_08022a74(&DAT_40020430);
    FUN_0802295c(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_0802295c(&DAT_40020430,1);
    FUN_08023b5a(&DAT_40004c00,0x424);
    FUN_0801ea9c(&DAT_20003830,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_08023b8a(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004c00,0x727);
    FUN_08023bd6(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_08023b8a(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_08023b8a(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_08023b8a(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_08023b5a(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013cbc : FUN_08013cbc */

undefined4 FUN_08013cbc(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005d5 == '\0') {
    DAT_200005d5 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003930)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08022944(0x10020000);
    FUN_0802295c(&DAT_40020458,0);
    FUN_08022afe(&DAT_40020458,uVar2);
    FUN_0802295c(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08013d3c : FUN_08013d3c */

void FUN_08013d3c(undefined4 param_1,undefined4 param_2)

{
  FUN_08022ea0(0x5555);
  FUN_08022e88(param_1);
  FUN_08022e94(param_2);
  FUN_08022e78();
  FUN_08022e68();
  return;
}



/* ENTRY 0x08013d60 : FUN_08013d60 */

void FUN_08013d60(void)

{
  FUN_08019818();
  FUN_08013d3c(4,0xad9);
  FUN_08016026();
  FUN_08016092();
  FUN_0801673a();
  FUN_08016758();
  return;
}



/* ENTRY 0x08013d90 : FUN_08013d90 */

void FUN_08013d90(void)

{
  DAT_20000668 = DAT_20000668 + 1;
  FUN_08015f68(&DAT_20000664);
  if (DAT_20000614 < 3) {
    DAT_20000614 = DAT_20000614 + 1;
  }
  else {
    DAT_20000614 = '\0';
  }
  FUN_0801c3fe(DAT_20000614,&DAT_20003a3c,&DAT_20003a4e);
  return;
}



/* ENTRY 0x08013dca : FUN_08013dca */

void FUN_08013dca(void)

{
  FUN_08022e78();
  FUN_08015d4a();
  FUN_0801627c();
  FUN_08018f2a();
  FUN_0801d958();
  return;
}



/* ENTRY 0x08013df8 : FUN_08013df8 */

void FUN_08013df8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_20003114;
      if (DAT_20003114 < 0) {
        iVar2 = -DAT_20003114;
      }
      if ((iVar2 < 1000) && (DAT_200005d9 == '\x01')) {
        DAT_200002bc = 8;
      }
    }
  }
  else if (cVar1 == '\x01') {
    DAT_200002fe = *(undefined2 *)(param_1 + 2);
  }
  else if ((cVar1 == '\x02') && (diag_motionstep == '\x02')) {
    FUN_08010486();
    DAT_200002fe = 0;
  }
  return;
}



/* ENTRY 0x08013e56 : FUN_08013e56 */

void FUN_08013e56(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_200002fe;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_08010486();
      diag_halldebugflg = 0;
      DAT_200002fe = 0;
      uVar1 = DAT_200002fe;
      uVar2 = diag_halldebugflg;
    }
  }
  else {
    uVar1 = (short)param_2;
    uVar2 = param_1;
    if ((DAT_200002bc != '\b') &&
       (uVar1 = DAT_200002fe, uVar2 = diag_halldebugflg, diag_motionstep == '\x02')) {
      iVar3 = diag_HallRSP;
      if (diag_HallRSP < 0) {
        iVar3 = -diag_HallRSP;
      }
      if (iVar3 < 100) {
        DAT_200005d9 = 0;
        DAT_200002bc = '\b';
        uVar1 = (short)param_2;
        uVar2 = param_1;
      }
    }
  }
  diag_halldebugflg = uVar2;
  DAT_200002fe = uVar1;
  return;
}



/* ENTRY 0x08013eb8 : FUN_08013eb8 */

void FUN_08013eb8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_20002fdf == '\x01')) {
      FUN_0800f722();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_08013df8(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08013f14 : FUN_08013f14 */

void FUN_08013f14(void)

{
  int iVar1;
  
  if (DAT_20000624 == '\x01') {
    DAT_20000622 = ((short)((int)(uint)DAT_2000333e >> 4) - DAT_20000626) * 0x11;
    diag_ChgCurrShow = DAT_20000622;
    if (DAT_20000622 < 0x2ee1) {
      if (DAT_20000630 < 0xb) {
        DAT_2000063d = '\0';
      }
      else {
        DAT_20000630 = DAT_20000630 - 1;
      }
    }
    else if (DAT_20000630 < 0x32) {
      DAT_20000630 = DAT_20000630 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_08022e52(&DAT_40011000,2);
      DAT_2000063d = '\x01';
      if (DAT_20000640 < 10) {
        DAT_20000640 = DAT_20000640 + 1;
      }
      DAT_2000063c = 5;
    }
  }
  diag_ChgStepShow = DAT_2000063c;
  switch(DAT_2000063c) {
  case 0:
    if (DAT_2000064a < 0x32) {
      DAT_2000064a = DAT_2000064a + 1;
    }
    else {
      DAT_2000063c = 1;
    }
    break;
  case 1:
    DAT_20000650 = DAT_20000650 + 1;
    if (DAT_20000650 < 0x14) {
      DAT_422101b0 = 1;
      FUN_08022e52(&DAT_40011000,2);
    }
    else if (DAT_20000650 < 0x28) {
      DAT_2000064c = DAT_2000064c + ((int)(uint)DAT_2000333e >> 4);
    }
    else {
      DAT_20000626 = (ushort)(DAT_2000064c / 0x14);
      if ((DAT_20000626 < 0x43a) || (0xcae < DAT_20000626)) {
        DAT_20000624 = '\x02';
      }
      else {
        DAT_20000624 = '\x01';
      }
      FUN_08022e4e(&DAT_40011000,2);
      if (diag_cartstep == '\0') {
        DAT_422101b0 = 0;
      }
      DAT_2000063c = 2;
    }
    break;
  case 2:
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000638) {
        DAT_20000652 = 0;
        DAT_422101b0 = 1;
        FUN_08022e52(&DAT_40011000,2);
        DAT_20000634 = 0;
        DAT_2000063c = 6;
        break;
      }
      DAT_20000638 = DAT_20000638 + 1;
    }
    else if (10 < DAT_20000638) {
      DAT_20000638 = DAT_20000638 - 10;
    }
    if ((diag_BatState == '\x01') && (0x30ed < diag_TotalVoltage)) {
      if (0x420a3 < DAT_20000628) {
        DAT_20000652 = 0;
        DAT_422101b0 = 1;
        FUN_08022e52(&DAT_40011000,2);
        DAT_20000634 = 0;
        DAT_2000063c = 3;
        break;
      }
      DAT_20000628 = DAT_20000628 + 1;
    }
    else if (10 < DAT_20000628) {
      DAT_20000628 = DAT_20000628 - 10;
    }
    if ((diag_BatState == '\x01') && (0x3264 < diag_TotalVoltage)) {
      if (DAT_2000062c < 0x14) {
        DAT_2000062c = DAT_2000062c + 1;
      }
      else {
        DAT_20000652 = 0;
        DAT_422101b0 = 1;
        FUN_08022e52(&DAT_40011000,2);
        DAT_2000063e = 0xfa;
        DAT_20000634 = 0;
        DAT_2000063c = 4;
      }
    }
    else if (10 < DAT_2000062c) {
      DAT_2000062c = DAT_2000062c - 1;
    }
    break;
  case 3:
  case 4:
  case 5:
    if (((diag_TotalVoltage < 0x2b5c) && (DAT_20000622 < 600)) && (DAT_20000640 < 8)) {
      if (DAT_20000634 < 100) {
        DAT_20000634 = DAT_20000634 + 1;
      }
      else {
        FUN_08022e4e(&DAT_40011000,2);
        DAT_2000063e = 0;
        DAT_2000063f = 0;
        DAT_2000063d = '\0';
        DAT_2000063c = 2;
      }
    }
    break;
  case 6:
  }
  if (((DAT_2000063d == '\x01') || (DAT_2000063e != 0)) || (DAT_2000063f != 0)) {
    DAT_20000694 = 1;
    DAT_20002f7e = DAT_20002f7e | 0x40;
  }
  else {
    DAT_20000694 = 0;
    DAT_20002f7e = DAT_20002f7e & 0xffbf;
  }
  if ((DAT_20002f94 % 0x96 == 0x4b) &&
     (((DAT_2000063d == '\x01' || (1 < DAT_2000063e)) || (1 < DAT_2000063f)))) {
    FUN_0800ddf2(2);
  }
  if (DAT_20000654 != '\x01') {
    if (diag_cartstep != '\0') {
      DAT_20000654 = '\x01';
    }
    if (((3000 < DAT_20002f98) && (diag_BatState == '\0')) && (diag_cartstep == '\0')) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 1000) && (diag_TotalVoltage < 0x2706)) {
        if (DAT_20000655 < 0xc9) {
          DAT_20000655 = DAT_20000655 + 1;
          return;
        }
        DAT_422101b0 = 0;
        DAT_20000655 = DAT_20000655 + 1;
        return;
      }
    }
    DAT_20000655 = 0;
  }
  return;
}



/* ENTRY 0x080142e8 : FUN_080142e8 */

void FUN_080142e8(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_200039f4 < 0xb) {
      DAT_200039f4 = 0;
      DAT_20002f7e = DAT_20002f7e & 0xffef;
    }
    else {
      DAT_200039f4 = DAT_200039f4 - 10;
    }
  }
  else if (DAT_200039f4 < 0xfa) {
    DAT_200039f4 = DAT_200039f4 + 1;
    DAT_20002f7e = DAT_20002f7e | 0x10;
  }
  if (10 < DAT_200039f4) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_0800f74e();
    }
  }
  return;
}



/* ENTRY 0x080143c8 : FUN_080143c8 */

void FUN_080143c8(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (diag_AgeModeflg == '\0') {
    if (DAT_20000642 != 0) {
      DAT_20000642 = DAT_20000642 + -1;
    }
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if ((iVar2 < diag_g_winespeed_lv + -1000) || (DAT_200001d8 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if ((int)((uint)DAT_2000303e * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_20003040 * 1000)) {
          if (DAT_2000061c == (DAT_2000061c / 0x32) * 0x32) goto LAB_0801446e;
          bVar3 = DAT_2000061c % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_08014652;
LAB_0801446e:
              bVar3 = DAT_2000304c == 1;
            } while (!bVar3);
            if (DAT_2000303e == 0) goto LAB_08014652;
            bVar3 = DAT_20002fd4 == '\0';
          } while (!bVar3);
          FUN_0800ddf2(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_20003042 * 1000)) {
            if ((((DAT_2000061c == (DAT_2000061c / 0x32) * 0x32) || (DAT_2000061c % 0x32 == 10)) ||
                (DAT_2000061c % 0x32 == 0x14)) &&
               (((DAT_2000304c == 1 && (DAT_20003040 != 0)) && (DAT_20002fd4 == '\0')))) {
              FUN_0800ddf2(1);
            }
          }
          else if (DAT_2000304c == 1) {
            if (((((DAT_2000061c == (DAT_2000061c / 0x32) * 0x32) || (DAT_2000061c % 0x32 == 10)) ||
                 (DAT_2000061c % 0x32 == 0x14)) ||
                ((DAT_2000061c % 0x32 == 0x1e || (DAT_2000061c % 0x32 == 0x28)))) &&
               (DAT_20002fd4 == '\0')) {
              FUN_0800ddf2(1);
            }
          }
          else if ((DAT_20000642 == 0) && (DAT_20002fd4 == '\0')) {
            if (DAT_20000660 == 0) {
              DAT_20000664 = 2;
              DAT_20000642 = 300;
            }
            else {
              DAT_20000664 = 6;
              DAT_20000642 = 300;
            }
          }
        }
      }
    }
    else if (DAT_2000304c == 1) {
      if (((((DAT_2000061c == (DAT_2000061c / 0x32) * 0x32) || (DAT_2000061c % 0x32 == 10)) ||
           (DAT_2000061c % 0x32 == 0x14)) ||
          ((DAT_2000061c % 0x32 == 0x1e || (DAT_2000061c % 0x32 == 0x28)))) &&
         (DAT_20002fd4 == '\0')) {
        FUN_0800ddf2(1);
      }
    }
    else if ((DAT_20000642 == 0) && (DAT_20002fd4 == '\0')) {
      if (DAT_20000660 == 0) {
        DAT_20000664 = 2;
        DAT_20000642 = 300;
      }
      else {
        DAT_20000664 = 6;
        DAT_20000642 = 300;
      }
    }
LAB_08014652:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_20000646 = 0x32;
    }
    else {
      bVar1 = DAT_20000646 + 1;
      bVar3 = 0x1e < DAT_20000646;
      DAT_20000646 = bVar1;
      if (bVar3) {
        FUN_0800ddf2(3);
        DAT_20000646 = 0;
      }
    }
    if ((DAT_20000620 == '\0') && (diag_cartstep != '\0')) {
      DAT_20000644 = DAT_20000644 + 1;
      if (DAT_20000644 < 0x1f5) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (100 < iVar2) {
          FUN_0800ddf2(2);
        }
      }
      else {
        FUN_0800ddf2(2);
        DAT_20000644 = 0;
      }
    }
    if (0 < DAT_20000648) {
      DAT_20000648 = DAT_20000648 + -1;
    }
    if ((DAT_200039f4 != '\0') && (DAT_20000648 == 0)) {
      if (DAT_2000304c == 1) {
        FUN_0800ddf2();
        DAT_20000648 = 100;
      }
      else {
        if (DAT_20000660 == 0) {
          DAT_20000664 = 4;
        }
        else {
          DAT_20000664 = 10;
        }
        DAT_20000648 = 300;
      }
    }
    if (DAT_2000068c != 0) {
      DAT_2000068c = DAT_2000068c + -1;
    }
  }
  return;
}



/* ENTRY 0x08014740 : FUN_08014740 */

void FUN_08014740(void)

{
  DAT_2000061c = DAT_2000061c + 1;
  FUN_080143c8();
  FUN_080142e8();
  FUN_08018cce();
  FUN_08013f14();
  return;
}



/* ENTRY 0x08014798 : FUN_08014798 */

void FUN_08014798(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_0800ddf2(1);
    DAT_2000068a = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_2000304c == 1) {
      FUN_0800ddf2(3);
    }
    else if (DAT_20000660 == 0) {
      DAT_20000664 = 4;
    }
    else {
      DAT_20000664 = 9;
    }
    DAT_2000068c = 500;
    break;
  case 0x23:
    FUN_0800ddf2(1);
    DAT_2000068b = 1;
    break;
  case 0x24:
    if (DAT_2000304c == 1) {
      FUN_0800ddf2(3);
    }
    else if (DAT_20000660 == 0) {
      DAT_20000664 = 4;
    }
    else {
      DAT_20000664 = 10;
    }
    DAT_20000690 = 2000;
    break;
  case 0x25:
    DAT_20000688 = 1;
    if (DAT_2000304c == 1) {
      FUN_0800ddf2(3);
    }
    if (DAT_2000304c == 0) {
      if (DAT_20000660 == 0) {
        DAT_20000664 = 0xf;
      }
      else {
        DAT_20000664 = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_20002fd4 == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_0800ddf2(4);
    }
  }
  return;
}



/* ENTRY 0x080148b0 : FUN_080148b0 */

void FUN_080148b0(void)

{
  int iVar1;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  if (((DAT_20002fd4 == '\x01') || (DAT_20002fdf == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_20000656 = 0;
    DAT_20000658 = 0;
  }
  else {
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
        if (iVar1 < 0x1771) {
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        iVar1 = (int)(short)(((iVar1 + -10000) * 5000) / 10000);
      }
    }
    else {
      iVar1 = 5000;
    }
    if (DAT_20000658 < iVar1) {
      DAT_20000658 = DAT_20000658 + 100;
    }
    else if (iVar1 + 100 < (int)DAT_20000658) {
      DAT_20000658 = DAT_20000658 + -100;
    }
    local_34 = DAT_20003a04;
    local_32 = DAT_20003a06;
    local_30 = DAT_20003a08;
    local_2e = DAT_20003a0a + DAT_20000658;
    local_2c = DAT_20003a0c;
    local_2a = DAT_20003a0e;
    local_28 = DAT_20003a10;
    local_1a = DAT_20003a1e;
    local_18 = DAT_20003a20;
    local_16 = DAT_20003a22;
    local_14 = DAT_20003a24;
    local_12 = DAT_20003a26;
    local_10 = DAT_20003a28;
    local_26 = DAT_20003a12;
    local_24 = DAT_20003a14;
    local_22 = DAT_20003a16;
    local_20 = DAT_20003a18;
    local_1e = DAT_20003a1a;
    local_1c = DAT_20003a1c;
    FUN_0800ab84(&local_34);
  }
  return;
}



/* ENTRY 0x08014a16 : FUN_08014a16 */

void FUN_08014a16(void)

{
  DAT_20003a04 = 0xe000;
  DAT_20003a06 = 0x28;
  DAT_20003a08 = 10000;
  DAT_20003a0a = 32000;
  DAT_20003a0c = 300;
  DAT_20003a0e = 0x9c4;
  DAT_20003a10 = 0x5a;
  DAT_20003a1e = 0x3c;
  DAT_20003a20 = 8000;
  DAT_20003a22 = 26000;
  DAT_20003a24 = 1000;
  DAT_20003a26 = 0x9c4;
  DAT_20003a28 = 0x50;
  DAT_20003a12 = 0x5a;
  DAT_20003a14 = 6000;
  DAT_20003a16 = 22000;
  DAT_20003a18 = 1000;
  DAT_20003a1a = 0x9c4;
  DAT_20003a1c = 0x50;
  return;
}



/* ENTRY 0x08014a8a : FUN_08014a8a */

void FUN_08014a8a(void)

{
  DAT_2000300e = DAT_20003a04;
  DAT_20003010 = DAT_20003a06;
  DAT_20003012 = DAT_20003a08;
  DAT_20003014 = DAT_20003a0a;
  DAT_20003016 = DAT_20003a0c;
  DAT_20003018 = DAT_20003a0e;
  DAT_2000301a = DAT_20003a10;
  DAT_20003028 = DAT_20003a1e;
  DAT_2000302a = DAT_20003a20;
  DAT_2000302c = DAT_20003a22;
  DAT_2000302e = DAT_20003a24;
  DAT_20003030 = DAT_20003a26;
  DAT_20003032 = DAT_20003a28;
  DAT_2000301c = DAT_20003a12;
  DAT_2000301e = DAT_20003a14;
  DAT_20003020 = DAT_20003a16;
  DAT_20003022 = DAT_20003a18;
  DAT_20003024 = DAT_20003a1a;
  DAT_20003026 = DAT_20003a1c;
  return;
}



/* ENTRY 0x08014b28 : FUN_08014b28 */

void FUN_08014b28(void)

{
  DAT_20002ff0._0_2_ = 0x5465;
  DAT_20002ff0._2_2_ = 0;
  DAT_20002ff4._0_2_ = 0x1450;
  DAT_20002ff4._2_2_ = 0;
  DAT_20002ff8._0_2_ = 0;
  DAT_20002ff8._2_2_ = 0;
  DAT_20002ffc = 0;
  DAT_20002ffe = 0;
  DAT_20003000 = 0;
  DAT_20003002 = 0;
  DAT_20003004 = 500;
  DAT_20003006 = 0;
  DAT_20003008 = 0;
  DAT_2000300a = 0;
  DAT_2000300c = 0;
  DAT_20003034 = 0;
  DAT_20003036 = 0;
  DAT_20003038 = 0;
  DAT_2000303a = 0;
  DAT_2000303c = 0;
  DAT_20003048 = 0;
  DAT_2000304a = 0;
  DAT_2000304e = 0;
  DAT_20003050 = 0;
  DAT_2000306e = 0;
  DAT_20003088 = 0;
  DAT_2000308c = 0;
  DAT_20003090 = 600;
  DAT_2000309e = 0;
  DAT_2000309f = 0;
  return;
}



/* ENTRY 0x08014b9e : FUN_08014b9e */

void FUN_08014b9e(void)

{
  FUN_08014a16();
  FUN_08014a8a();
  DAT_2000303e = 0x12;
  DAT_20003040 = 0x13;
  DAT_20003042 = 0x14;
  DAT_20003044 = 0x14;
  DAT_2000304c = 0;
  DAT_20003046 = 1;
  DAT_20003064 = 0;
  DAT_20003066 = 0;
  DAT_20003068 = 0;
  DAT_2000306a = 0;
  DAT_2000306c = 0;
  DAT_20003070 = 0xff;
  DAT_20003071 = 0;
  DAT_20003072 = 0;
  DAT_20003073 = 0;
  DAT_20003074 = 0;
  DAT_20003075 = 0xff;
  DAT_20003076 = 0;
  DAT_20003077 = 0;
  DAT_20003078 = 0;
  DAT_20003079 = 0;
  DAT_2000307a = 0xff;
  DAT_2000307b = 0;
  DAT_2000307c = 0xa0;
  DAT_2000307d = 0x20;
  DAT_2000307e = 0xf0;
  DAT_2000307f = 0;
  DAT_20003080 = 0;
  DAT_20003082 = 0xff;
  DAT_20003083 = 0xff;
  DAT_20003084 = 0xff;
  DAT_20003085 = 0xff;
  DAT_20003094 = 1;
  DAT_20003092 = 1;
  DAT_2000309c = 0;
  FUN_08014b28();
  FUN_0800e440();
  return;
}



/* ENTRY 0x08014c8e : FUN_08014c8e */

void FUN_08014c8e(void)

{
  uint uVar1;
  
  if (DAT_20000686 != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003052)[uVar1] = 0;
    }
  }
  FUN_08014b9e();
  DAT_20003096 = 0x31;
  DAT_20003097 = 0x32;
  DAT_20003098 = 0x33;
  DAT_20003099 = 0x34;
  DAT_2000309a = 0x35;
  DAT_2000309b = 0x36;
  return;
}



/* ENTRY 0x08014d00 : FUN_08014d00 */

void FUN_08014d00(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (diag_cartstep != '\0') {
    if (DAT_2000065c == '\0') {
      uVar1 = DAT_4221012c;
      DAT_200006ce = (char)uVar1;
      DAT_200006cf = '\0';
      DAT_200006d0 = 0xc;
    }
    DAT_200006ce = DAT_200006ce == '\0';
    DAT_200006cf = DAT_200006cf == '\0';
    if ((((bool)DAT_200006ce) && ((bool)DAT_200006cf)) || (DAT_20003092 == 0)) {
      if (DAT_200007f8 != 0) {
        DAT_200007f8 = DAT_200007f8 - 1;
      }
    }
    else if (DAT_200007f8 < DAT_200006d0) {
      DAT_200007f8 = DAT_200007f8 + 1;
    }
    if (DAT_200007fa != '\0') {
      if (DAT_200007f8 == DAT_200006d0) {
        DAT_20002f7e = DAT_20002f7e | 0x8000;
      }
      else if (DAT_200007f8 == 0) {
        DAT_200007fa = '\0';
        DAT_20002f7e = DAT_20002f7e & 0x7fff;
      }
    }
    if ((((uint)DAT_200006d0 << 1) / 3 < (uint)DAT_200007f8) && (DAT_200007f9 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_200006d4 == 0) {
          FUN_0800ddf2(1);
          DAT_200006d4 = 1;
        }
      }
      else {
        DAT_200007f9 = '\x01';
      }
    }
    else if ((uint)DAT_200007f8 < DAT_200006d0 / 3) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_200006d4 == 1) {
          FUN_0800ddf2(2);
          DAT_200006d4 = 0;
        }
        DAT_200007f9 = '\0';
      }
    }
  }
  return;
}



/* ENTRY 0x08014e52 : FUN_08014e52 */

void FUN_08014e52(void)

{
  FUN_08014d00();
  return;
}



/* ENTRY 0x08014e5a : FUN_08014e5a */

void FUN_08014e5a(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_2000067c != 0x12) {
    bVar3 = DAT_2000067c == 0x14;
    do {
      if (!bVar3) goto LAB_0801500c;
      bVar3 = DAT_20000684 == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_0801500c;
    bVar3 = true;
  } while (diag_cartstep == '\b');
  if (((DAT_2000306a == 1) || (DAT_20000697 == '\x02')) &&
     (DAT_20000804 = DAT_20000804 + 1, DAT_20000804 == (DAT_20000804 / 2) * 2)) {
    if (DAT_20000808 == 0) {
      DAT_20000808 = 1;
    }
    else {
      DAT_20000808 = 0;
    }
  }
  if (((DAT_2000306a == 1) || (DAT_20000697 == '\x02')) && (DAT_2000067c != 0x13)) {
    if (DAT_20000808 == 0) {
      if (param_1 == 0x12) {
        DAT_200006e0 = 0xffff;
        DAT_200006e4 = 0xffff;
      }
      else if (param_1 == 0x15) {
        DAT_200006e0 = 0xffff;
        DAT_200006e4 = 0;
      }
      else if (param_1 == 0x16) {
        DAT_200006e0 = 0;
        DAT_200006e4 = 0xffff;
      }
      else {
        DAT_200006e0 = 0xffff;
        DAT_200006e4 = 0;
      }
    }
    else {
      DAT_200006e0 = 0;
      DAT_200006e4 = 0;
    }
  }
  else if (DAT_2000067c == 0x12) {
    if (param_1 == 0x12) {
      DAT_200006e0 = 0xffff;
      DAT_200006e4 = 0xffff;
    }
    else if (param_1 == 0x15) {
      DAT_200006e0 = 0xffff;
      DAT_200006e4 = 0;
    }
    else if (param_1 == 0x16) {
      DAT_200006e0 = 0;
      DAT_200006e4 = 0xffff;
    }
  }
  else {
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if (iVar2 < 10000) {
      DAT_200006e0 = 0;
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      DAT_200006e4 = (iVar2 * 800) / 1000 + 100;
    }
    else {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 20000) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        DAT_200006e0 = (iVar2 * 0x41) / 1000;
        DAT_200006e4 = 0xffff;
      }
      else {
        DAT_200006e0 = 0xffff;
        DAT_200006e4 = 0xffff;
      }
    }
  }
LAB_08015016:
  if (DAT_200006e4 < DAT_200006e0) {
    uVar1 = (undefined2)DAT_200006e0;
  }
  else {
    uVar1 = (undefined2)DAT_200006e4;
  }
  DAT_40000840 = uVar1;
  return;
LAB_0801500c:
  DAT_200006e0 = 0;
  DAT_200006e4 = 0;
  goto LAB_08015016;
}



/* ENTRY 0x08015032 : FUN_08015032 */

void FUN_08015032(void)

{
  int iVar1;
  
  if (DAT_20000680 == 0x14) {
    DAT_20000801 = 0;
    DAT_20000680 = 0;
  }
  else if (DAT_20000680 == 0x12) {
    DAT_20000801 = 1;
    DAT_20000680 = 0;
  }
  else if (DAT_20000680 == 0x13) {
    DAT_20000801 = 4;
    DAT_20000680 = 0;
  }
  iVar1 = FUN_0800e064();
  if (iVar1 != 0) {
    switch(DAT_20000801) {
    case 0:
      DAT_20000801 = DAT_20000801 + 1;
      DAT_2000067c = 0x12;
      break;
    case 1:
      DAT_20000801 = DAT_20000801 + 1;
      DAT_2000067c = 0x13;
      break;
    case 2:
      DAT_20000801 = DAT_20000801 + 1;
      DAT_2000067c = 0x12;
      break;
    case 3:
      DAT_20000801 = DAT_20000801 + 1;
      DAT_2000067c = 0x13;
      break;
    case 4:
      DAT_20000801 = 1;
      DAT_2000067c = 0x12;
    }
    FUN_0800ddf2(1);
    FUN_08020dc2(3);
  }
  if (DAT_20000697 == '\0') {
    FUN_08014e5a((&DAT_200006d8)[DAT_20000801]);
  }
  else {
    FUN_08014e5a(DAT_200006d9);
    DAT_2000067c = 0x12;
  }
  return;
}



/* ENTRY 0x0801516a : FUN_0801516a */

void FUN_0801516a(void)

{
  DAT_20000802 = (ushort)(((uint)DAT_20000802 * 9 + ((int)(uint)diag_lightad >> 4)) / 10);
  if (DAT_200005d8 == '\0') {
    DAT_20000684 = '\0';
  }
  else if (DAT_20000684 == '\0') {
    if (DAT_20000802 < 0x44c) {
      DAT_20000685 = DAT_20000684;
      DAT_20000684 = '\x01';
    }
  }
  else if ((DAT_20000684 == '\x01') && (0x514 < DAT_20000802)) {
    DAT_20000685 = DAT_20000684;
    DAT_20000684 = '\0';
  }
  return;
}



/* ENTRY 0x080151da : FUN_080151da */

void FUN_080151da(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x0801521e : FUN_0801521e */

undefined2 FUN_0801521e(void)

{
  DAT_2000080c = DAT_2000080c + 1;
  if ((ushort)((ushort)DAT_200007d8 * 4) <= DAT_2000080c) {
    DAT_2000080c = 0;
  }
  return (&DAT_200006e8)[(int)(uint)DAT_2000080c >> 2];
}



/* ENTRY 0x0801524e : FUN_0801524e */

void FUN_0801524e(void)

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
  iVar4 = FUN_0800f758();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_20002fdf != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_20002fdf == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_20002fdf != '\0')) {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = 2;
  }
  if (DAT_20000822 < 0x32) {
    DAT_20000822 = DAT_20000822 + 1;
    if (diag_cartstep == '\b') {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003a2a)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003a2a)[uVar5] = 0;
      }
    }
    FUN_08016764(&DAT_20003a2a);
  }
  else {
    if (diag_cartstep == '\0') {
      bVar1 = false;
      bVar8 = false;
    }
    else if (diag_cartstep == '\b') {
      bVar1 = false;
      bVar8 = false;
      DAT_20000822 = 0;
    }
    else {
      if ((((ushort)DAT_2000066c & 3) == 0) &&
         (((1000 < diag_VehicleSpeed && (diag_speedAcc < -0x14)) ||
          ((diag_VehicleSpeed < -1000 && (0x14 < diag_speedAcc)))))) {
        DAT_20000810 = 0x14;
        DAT_20000814 = 0;
      }
      DAT_20000818 = DAT_20000818 + 1;
      if (DAT_20000818 == (DAT_20000818 / 2) * 2) {
        if (DAT_2000081c == 0) {
          DAT_2000081c = 1;
        }
        else {
          DAT_2000081c = 0;
        }
      }
      if ((DAT_20000814 < DAT_20000810) && (DAT_2000306a == 0)) {
        bVar1 = true;
        bVar8 = true;
        iVar6 = DAT_20000810 - (DAT_20000814 + 1);
        DAT_20000820 = 0;
        DAT_20000814 = DAT_20000814 + 1;
      }
      else {
        DAT_20000814 = 0;
        DAT_20000810 = 0;
        iVar6 = 4;
        if (DAT_2000306a == 1) {
          if (DAT_2000081c == 1) {
            bVar8 = iVar7 != 1;
            if (iVar7 != 2) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            bVar8 = false;
          }
          DAT_20000820 = 0;
        }
        else if ((DAT_2000067c == 0x12) || ((DAT_2000067c == 0x14 && (DAT_20000684 == '\x01')))) {
          bVar1 = true;
          bVar8 = true;
          if (iVar7 == 1) {
            DAT_20000820 = DAT_20000820 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_200007d9)[uVar5] = (&DAT_08026c06)[(uint)DAT_20000820 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000820 = DAT_20000820 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_200007d9)[uVar5] = (&DAT_08026c18)[(uint)DAT_20000820 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000820 = 0;
          }
        }
        else {
          bVar1 = false;
          bVar8 = false;
          if (iVar7 == 1) {
            DAT_20000820 = DAT_20000820 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_200007d9)[uVar5] = (&DAT_08026c06)[(uint)DAT_20000820 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000820 = DAT_20000820 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_200007d9)[uVar5] = (&DAT_08026c18)[(uint)DAT_20000820 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000820 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003a2a)[uVar5] = 0;
    }
    if (DAT_20002fdf == '\0') {
      if (DAT_20000820 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003a2b)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003a2a = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003a2b = DAT_20003a2a;
        }
        else if (bVar8) {
          DAT_20003a39 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003a3a = DAT_20003a39;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003a2a)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_200007d9)[uVar5] * 0x14) / 0x28);
          (&DAT_20003a2b)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_200007d9)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801521e();
        (&DAT_20003a2a)[extraout_r3 * 3] = 0;
        (&DAT_20003a2b)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003a2c)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_20003068 == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801521e();
        bVar3 = DAT_20003072;
        bVar2 = DAT_20003070;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_20003070,(ushort)DAT_20003071);
        (&DAT_20003a2a)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003a2b)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003a2c)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003a2a)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003a2a)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003a2b)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003a2b)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003a2c)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003a2c)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_20003068 == 1) {
      FUN_080151da(&local_28,(ushort)DAT_2000066c);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801521e();
        (&DAT_20003a2a)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003a2b)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003a2c)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_080151da(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_2000066c * -10 & 0xffff);
        (&DAT_20003a2a)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003a2b)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003a2c)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_08016764(&DAT_20003a2a);
  }
  return;
}



/* ENTRY 0x08015840 : FUN_08015840 */

void FUN_08015840(void)

{
  int iVar1;
  
  DAT_2000066c = DAT_2000066c + 1;
  FUN_0801524e();
  FUN_0801516a();
  FUN_08015032();
  FUN_080148b0();
  if ((DAT_20002fde & 1) != 0) {
    if ((DAT_200007eb == '\0') && (iVar1 = FUN_0800e45e(DAT_20002fb0 / 10 & 0xffff), iVar1 == 1)) {
      FUN_0800e390();
    }
    DAT_200007eb = '\x01';
    DAT_20002fde = DAT_20002fde & 0xfe;
  }
  return;
}



/* ENTRY 0x080158a0 : FUN_080158a0 */

void FUN_080158a0(void)

{
  int iVar1;
  
  if (DAT_20000696 < 5) {
    if (diag_TotalVoltage < 0x2454) {
      DAT_20000696 = 2;
    }
    else {
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 500) {
          DAT_20000696 = 3;
          return;
        }
      }
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if ((500 < iVar1) && (diag_TotalCurrent < -0x32)) {
          DAT_20000696 = 4;
          return;
        }
      }
      DAT_20000696 = diag_BatState;
    }
  }
  return;
}



/* ENTRY 0x08015926 : FUN_08015926 */

void FUN_08015926(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = diag_VehicleSpeed;
  if ((int)diag_VehicleSpeed < 0) {
    uVar3 = -diag_VehicleSpeed;
  }
  if (DAT_20002fc7 == 0) {
    if (DAT_20002fc8 == 0) {
      if ((DAT_20002fc3 & 0x70) == 0) {
        if (DAT_20002fd2 < 0xc9) {
          if (uVar3 == 0) {
            iVar2 = FUN_0801f604();
            if ((iVar2 < 7) && (diag_BatState == '\0')) {
              DAT_20000828 = (byte)iVar2;
            }
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              if (((DAT_20000828 == 0) && (4 < param_1 % 10)) && (diag_BatState != '\x01')) {
                (&DAT_200007e3)[uVar3] = 0;
              }
              else {
                (&DAT_200007e3)[uVar3] = (&DAT_08026c8a)[uVar3];
                if ((int)(7 - (uint)DAT_20000828 % 7) <= (int)uVar3) {
                  (&DAT_200007e3)[uVar3] = (&DAT_200007e3)[uVar3] | 0x18;
                }
              }
            }
          }
          else {
            for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
              (&DAT_200007e3)[uVar1] =
                   (&DAT_08026c2a)[uVar1 + ((uVar3 / 10000) % 10) * 8] |
                   (&DAT_08026c2a)[uVar1 + ((uVar3 / 1000) % 10) * 8] << 4;
            }
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              (&DAT_200007e3)[uVar3] = (&DAT_08026c7a)[uVar3];
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20002fc5 == 0) {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                uVar1 = (byte)DAT_20002fd2 - 200 & 0xff;
                (&DAT_200007e3)[uVar3] =
                     (&DAT_08026c2a)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                     (&DAT_08026c2a)[uVar3 + (uVar1 % 10) * 8] << 4;
              }
            }
            else {
              for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
                (&DAT_200007e3)[uVar3] =
                     (&DAT_08026c82)[uVar3] |
                     (&DAT_08026c2a)[uVar3 + ((uint)DAT_20002fc5 % 10) * 8] << 4;
              }
            }
          }
          else {
            for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
              uVar1 = (byte)DAT_20002fd2 - 200 & 0xff;
              (&DAT_200007e3)[uVar3] =
                   (&DAT_08026c2a)[uVar3 + ((uVar1 / 10) % 10) * 8] |
                   (&DAT_08026c2a)[uVar3 + (uVar1 % 10) * 8] << 4;
            }
          }
          if ((param_1 % 0x1e == 3) &&
             (((DAT_20002f7e & 0x200) == 0x200 || ((DAT_20002f7e & 0x400) == 0x400)))) {
            FUN_0800ddf2(3);
          }
        }
      }
      else {
        for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1 & 0xff) {
          (&DAT_200007e3)[uVar3] =
               (&DAT_08026c2a)[uVar3 + ((DAT_20002fc4 / 10) % 10) * 8] |
               (&DAT_08026c2a)[uVar3 + ((uint)DAT_20002fc4 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar3 = DAT_20002fc8 - 1 & 0xff;
      if (5 < uVar3) {
        uVar3 = 5;
      }
      for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
        (&DAT_200007e3)[uVar1] = (&UNK_08026ce2)[uVar1 + uVar3 * 8];
      }
      DAT_20002fc8 = DAT_20002fc8 + 1;
      if (0x14 < DAT_20002fc8) {
        DAT_20002fc8 = 0;
      }
    }
  }
  else {
    uVar3 = DAT_20002fc7 - 1 & 0xff;
    if (9 < uVar3) {
      uVar3 = 9;
    }
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200007e3)[uVar1] = (&UNK_08026c92)[uVar1 + uVar3 * 8];
    }
    DAT_20002fc7 = DAT_20002fc7 + 1;
    if (0x14 < DAT_20002fc7) {
      DAT_20002fc7 = 0;
    }
  }
  FUN_0801c680(&DAT_200007e3);
  return;
}



/* ENTRY 0x08015c6c : FUN_08015c6c */

void FUN_08015c6c(void)

{
  int iVar1;
  
  if (DAT_200007e2 < 0x10) {
    DAT_200007e2 = DAT_200007e2 + 1;
  }
  if ((diag_MosTemp < 0x2e) && (0xe < DAT_200007e2)) {
    if (diag_MosTemp < 0x28) {
      DAT_20000695 = 0;
      DAT_200007e0 = 0;
    }
  }
  else {
    DAT_20000695 = 1;
    if (diag_cartstep == '\0') {
      DAT_200007e0 = 4000;
    }
    else {
      DAT_200007e0 = (diag_MosTemp + -0x2d) * 0x32 + 1000;
    }
    if (1999 < DAT_200007e0) {
      DAT_200007e0 = 1999;
    }
  }
  if ((((DAT_200006e0 != 0) || (DAT_200006e4 != 0)) && (DAT_20002fe0 == '\x01')) &&
     (diag_AgeModeflg != '\0')) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (10000 < iVar1) {
      DAT_200007e0 = 1999;
    }
  }
  if (DAT_200007e0 < 0x65) {
    FUN_08022e52(&DAT_40010c00,0x200);
  }
  else {
    FUN_08022e4e(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x08015d4a : FUN_08015d4a */

void FUN_08015d4a(void)

{
  int iVar1;
  byte bVar2;
  
  if (DAT_20003046 == 1) {
    FUN_08022e52(&DAT_40011000,0x80);
  }
  else if (DAT_200005d8 == '\x01') {
    FUN_08022e4e(&DAT_40011000,0x80);
  }
  FUN_08015c6c();
  if ((DAT_20000670 == (DAT_20000670 / 0x14) * 0x14) && (DAT_20000686 == '\x01')) {
    FUN_0800ddf2();
  }
  if (DAT_20000670 % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_200007ec == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0800e00c(0), iVar1 != 0)) {
      DAT_200007ec = '\x01';
    }
  }
  else if (DAT_200007ec == '\x01') {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (2000 < iVar1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 10000) && (iVar1 = FUN_0800e00c(0), iVar1 != 0)) {
        FUN_0800ae7c();
        FUN_0800ddf2(1);
        DAT_200007ec = '\x02';
      }
    }
  }
  if ((((((DAT_200005d9 == '\0') || (DAT_20000620 == '\0')) || (DAT_20000686 == '\x01')) ||
       ((DAT_2000068a == '\x01' || (DAT_2000068b == '\x01')))) ||
      ((DAT_20000688 == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     (DAT_20002fc3 != '\0')) {
    DAT_200005d8 = 0;
  }
  else {
    DAT_200005d8 = 1;
  }
  if (DAT_20003090 == 0) {
    DAT_20002f98 = 0;
  }
  if (DAT_20000670 % 6 == 2) {
    for (bVar2 = 0; DAT_20002fd2 = 0, bVar2 < 0x20; bVar2 = bVar2 + 1) {
      DAT_200007ed = DAT_200007ed + 1;
      if ((diag_allwarnbit >> (DAT_200007ed & 0x1f) & 1) != 0) {
        DAT_20002fd2 = 0;
        if (DAT_200007ed < 0xe0) {
          DAT_20002fd2 = (short)(DAT_200007ed & 0x1f) + 0xc9;
        }
        break;
      }
    }
  }
  FUN_08015926(DAT_20000670);
  FUN_0801c878();
  FUN_080158a0();
  if ((DAT_20002fdd != '\0') && (DAT_20002fdf != '\0')) {
    FUN_0800e390();
    DAT_20002fdd = '\0';
  }
  DAT_20000670 = DAT_20000670 + 1;
  return;
}



/* ENTRY 0x08015f68 : FUN_08015f68 */

void FUN_08015f68(void)

{
  return;
}



/* ENTRY 0x08015f6a : FUN_08015f6a */

void FUN_08015f6a(void)

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
  
  FUN_08022fac(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_08022d14(&DAT_40010c00,&local_24);
  FUN_08022f7c(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_08023a88(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_08023966(&DAT_40000800,&local_20);
  FUN_080239ca(&DAT_40000800,8);
  FUN_08023318(&DAT_40000800,1);
  FUN_08023374(&DAT_40000800,1);
  FUN_08023386(&DAT_40000800,1);
  return;
}



/* ENTRY 0x08015ffe : FUN_08015ffe */

void FUN_08015ffe(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(4,1);
  local_8 = 0x48030800;
  FUN_08022d14(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016026 : FUN_08016026 */

void FUN_08016026(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(0x3d,1);
  FUN_08022dd4(0x300200,1);
  FUN_0801c6c4(7);
  DAT_20002fc7 = 1;
  FUN_0801ca0e();
  FUN_0801cd78();
  local_8 = 0x10010002;
  FUN_08022d14(&DAT_40011000,&local_8);
  FUN_08015ffe();
  DAT_2000065c = 0;
  local_8 = 0x10030004;
  FUN_08022d14(&DAT_40010c00,&local_8);
  FUN_08015f6a();
  return;
}



/* ENTRY 0x08016092 : FUN_08016092 */

void FUN_08016092(void)

{
  int iVar1;
  
  iVar1 = FUN_0800e408();
  FUN_0801a15a();
  if (iVar1 == 0) {
    DAT_200030f4 = 0x20190815;
    FUN_08014c8e();
  }
  else if (DAT_200030f4 != 0x20190815) {
    DAT_200030f4 = 0x20190815;
    FUN_08014c8e();
  }
  if (DAT_20003090 == 0) {
    DAT_20002f9c = 30000;
  }
  else {
    if (DAT_20003090 < 0x3c) {
      DAT_20003090 = 0x3c;
    }
    if (0x3840 < DAT_20003090) {
      DAT_20003090 = 0x3840;
    }
    DAT_20002f9c = (uint)DAT_20003090 * 0x32;
  }
  FUN_08014a16();
  DAT_20003a04 = DAT_2000300e;
  FUN_0800ab84(&DAT_20003a04);
  FUN_0800adbe();
  DAT_20000620 = DAT_20003080 == 0;
  DAT_2000306a = 0;
  if ((((0x2f < DAT_20003082) && (DAT_20003082 < 0x3a)) && (0x2f < DAT_20003083)) &&
     (((DAT_20003083 < 0x3a && (0x2f < DAT_20003084)) &&
      ((DAT_20003084 < 0x3a && ((0x2f < DAT_20003085 && (DAT_20003085 < 0x3a)))))))) {
    DAT_20000929 = 1;
  }
  DAT_20000660 = (uint)DAT_20003064;
  DAT_200005d9 = 1;
  FUN_0800f76e(((int)DAT_20003002 << 0xc) / 10);
  FUN_0800f78e(((int)DAT_20003004 << 0xc) / 10);
  FUN_0800f7b0(DAT_2000309e);
  DAT_20002fb4 = FUN_0800e4e0();
  if (((DAT_20003048 == (DAT_2000304a ^ 0xffff)) && (-200 < (short)DAT_20003048)) &&
     ((short)DAT_20003048 < 200)) {
    DAT_200002c0 = (int)(short)DAT_20003048;
  }
  return;
}



/* ENTRY 0x0801627c : FUN_0801627c */

void FUN_0801627c(void)

{
  int iVar1;
  
  if (diag_AgeModeflg != '\0') {
    if (diag_AgeModeflg == '\x01') {
      if (((diag_MosTemp < 0x53) && (diag_MotorTemp < 0x7e)) && (0x286d < diag_TotalVoltage)) {
        if (((DAT_200007f0 != '\x05') && (diag_TotalVoltage < 0x2a30)) && (diag_BatState == '\x01'))
        {
          DAT_200007f0 = '\x06';
          DAT_200007f2 = 0;
          DAT_200007f4 = 0;
          diag_AgeChgflg = 1;
          FUN_08013e56(0);
        }
      }
      else {
        DAT_200007f0 = '\x05';
        DAT_200007f2 = 0;
        DAT_200007f4 = 0;
        FUN_08013e56(0);
        DAT_422101b0 = 0;
      }
      diag_AgeStepShow = DAT_200007f0;
      switch(DAT_200007f0) {
      case '\0':
        DAT_200007f2 = 0;
        DAT_200007f0 = '\x01';
        DAT_200007f4 = 0;
        break;
      case '\x01':
        if (DAT_20002fdf == '\x01') {
          iVar1 = FUN_0800f758();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_200006d4 == 0)) {
            DAT_200007f2 = 1;
            DAT_200007f0 = '\x02';
            DAT_200007f4 = 0;
            FUN_08013e56(4,1);
          }
        }
        DAT_20000697 = 2;
        break;
      case '\x02':
        iVar1 = FUN_0800f758();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_200006d4 == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_200007f4 < 0xbb9)) ||
             (DAT_200007f4 < 0x65)) {
            if (DAT_200007f2 < 0x9c4) {
              DAT_200007f2 = DAT_200007f2 + 10;
              FUN_08013e56(4,(int)DAT_200007f2);
            }
          }
          else {
            DAT_200007f2 = 0;
            DAT_200007f0 = '\x03';
            FUN_08013e56(0);
          }
        }
        else {
          DAT_200007f2 = 0;
          DAT_200007f0 = '\x01';
          FUN_08013e56(0);
        }
        DAT_20000697 = 1;
        break;
      case '\x03':
        if (DAT_20002fdf == '\x01') {
          iVar1 = FUN_0800f758();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_200006d4 == 0)) {
            DAT_200007f2 = 1;
            DAT_200007f0 = '\x04';
            DAT_200007f4 = 0;
            FUN_08013e56(0,1);
          }
        }
        DAT_20000697 = 2;
        break;
      case '\x04':
        iVar1 = FUN_0800f758();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_200006d4 == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_200007f4)) ||
             (2999 < DAT_200007f4)) {
            DAT_200007f2 = 0;
            DAT_200007f0 = '\x01';
            FUN_08013e56(0);
          }
          else if (DAT_200007f2 < 30000) {
            DAT_200007f2 = DAT_200007f2 + 100;
            FUN_08013e56(0,(int)DAT_200007f2);
          }
        }
        else {
          DAT_200007f2 = 0;
          DAT_200007f0 = '\x03';
          FUN_08013e56(0);
        }
        DAT_20000697 = 2;
        break;
      case '\x05':
        break;
      case '\x06':
        if ((diag_TotalVoltage < 0x2ee1) && (diag_BatState != '\0')) {
          DAT_200007f4 = 0;
        }
        else if (DAT_200007f4 < 0x15) {
          DAT_200007f4 = DAT_200007f4 + 1;
        }
        else {
          DAT_200007f2 = 0;
          DAT_200007f0 = '\x01';
          diag_AgeChgflg = 0;
          FUN_08013e56(0);
        }
        DAT_20000697 = 2;
      }
      DAT_200007f4 = DAT_200007f4 + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_20002f94 % 10 == 5) {
        FUN_0800ddf2(1);
      }
      DAT_20000697 = 0;
      diag_AgeChgflg = 0;
      FUN_08013e56(0);
      DAT_200007f0 = '\0';
    }
  }
  return;
}



/* ENTRY 0x080166ce : FUN_080166ce */

void FUN_080166ce(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(4,1);
  local_8 = 0x10030800;
  FUN_08022d14(&DAT_40010800,&local_8);
  local_8 = 0x48031000;
  FUN_08022d14(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016712 : FUN_08016712 */

void FUN_08016712(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(4,1);
  local_8 = 0x48032000;
  FUN_08022d14(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801673a : FUN_0801673a */

void FUN_0801673a(void)

{
  return;
}



/* ENTRY 0x08016758 : FUN_08016758 */

void FUN_08016758(void)

{
  FUN_08022fac(0x10,1);
  return;
}



/* ENTRY 0x08016764 : FUN_08016764 */

void FUN_08016764(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003a3c)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003a4e)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x08016782 : FUN_08016782 */

undefined4 FUN_08016782(void)

{
  return 0;
}



/* ENTRY 0x08016788 : FUN_08016788 */

void FUN_08016788(int param_1)

{
  uint uVar1;
  
  DAT_20000828 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000828 = DAT_20000828 + '\x01';
    }
    (&DAT_20003a60)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003a61)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003a62)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x080167f2 : FUN_080167f2 */

void FUN_080167f2(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x08016812 : FUN_08016812 */

void FUN_08016812(int param_1)

{
  int iVar1;
  
  if ((DAT_2000082c % 0x226 == 200) && (DAT_2000304c == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_08016858;
    }
    FUN_0800ddf2(3);
  }
LAB_08016858:
  if ((DAT_2000082c % 900 == 200) && (DAT_2000304c == 0)) {
    if (param_1 < 0x2454) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (7000 < iVar1) {
        if (DAT_20000660 == 0) {
          DAT_20000664 = 1;
          return;
        }
        DAT_20000664 = 7;
        return;
      }
    }
    if (0x3264 < param_1) {
      if (DAT_20000660 == 0) {
        DAT_20000664 = 5;
      }
      else {
        DAT_20000664 = 8;
      }
    }
  }
  return;
}



/* ENTRY 0x080168c6 : FUN_080168c6 */

void FUN_080168c6(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  uVar2 = 0;
  FUN_08022562(local_30,0x14);
  FUN_08022562(local_44,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_30[uVar1] = 0;
    local_44[uVar1] = 0;
  }
  if (diag_BatState == '\x01') {
    uVar1 = 0x14;
    if (param_1 < 0x2454) {
      uVar1 = 0xe;
      uVar2 = 6 - DAT_200008d0 % 7 & 0xff;
    }
    else if (param_1 < 0x2536) {
      uVar1 = 0xf;
      uVar2 = 5 - DAT_200008d0 % 6 & 0xff;
    }
    else if (param_1 < 0x27fe) {
      uVar1 = 0x10;
      uVar2 = 4 - DAT_200008d0 % 5 & 0xff;
    }
    else if (param_1 < 0x2ac6) {
      uVar1 = 0x11;
      uVar2 = 3 - (DAT_200008d0 & 3);
    }
    else if (param_1 < 0x2d8e) {
      uVar1 = 0x12;
      uVar2 = 2 - DAT_200008d0 % 3 & 0xff;
    }
    else if (param_1 < 0x3056) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_200008d0 & 1);
    }
    else if (param_1 < 0x3058) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_200008d0 & 1);
    }
    else if (param_1 < 0x30a3) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_200008d0 & 1);
    }
    else if (0x30a2 < param_1) {
      uVar2 = 0;
    }
    if (DAT_2000082c == uVar1 * (DAT_2000082c / uVar1)) {
      DAT_200008d0 = DAT_200008d0 + 1;
    }
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else if (param_1 < 0x2454) {
    if (DAT_2000082c % 0x32 < 0x1a) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    uVar4 = 0;
    uVar2 = 0;
    FUN_08016812(param_1);
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
    if (DAT_2000082c % 0x32 < 0x1a) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 0xff;
      uVar4 = 0x7f;
    }
    uVar2 = 0;
    FUN_08016812(param_1);
  }
  DAT_20000829 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_080167f2(uVar2,uVar3,uVar4,0,local_30);
    FUN_080167f2(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08016788(local_30,local_44);
  return;
}



/* ENTRY 0x08016b7c : FUN_08016b7c */

void FUN_08016b7c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08022562(auStack_28,0x14);
  FUN_08022562(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_080167f2(cVar1,(&DAT_20003a72)[(uVar2 + 6) * 3],(&DAT_20003a73)[(uVar2 + 6) * 3],
                 (&DAT_20003a74)[(uVar2 + 6) * 3],auStack_3c);
    FUN_080167f2(uVar2 & 0xff,(&DAT_20003a72)[uVar2 * 3],(&DAT_20003a73)[uVar2 * 3],
                 (&DAT_20003a74)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_08016782(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x08016bf8 : FUN_08016bf8 */

void FUN_08016bf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_08016b7c();
  DAT_200008d6 = DAT_200008d6 + 1;
  if (DAT_200008d6 < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_200008da = DAT_200008db + (char)iVar1;
          if (0x1f < DAT_200008da) {
            DAT_200008da = DAT_200008da - 0x20;
          }
          (&DAT_20003a72)[iVar1 * 3] = (&DAT_08026d12)[(uint)DAT_200008da * 3];
          (&DAT_20003a73)[iVar1 * 3] = (&DAT_08026d13)[(uint)DAT_200008da * 3];
          (&DAT_20003a74)[iVar1 * 3] = (&DAT_08026d14)[(uint)DAT_200008da * 3];
        }
        bVar4 = DAT_200008db < '\0';
        DAT_200008db = DAT_200008db + -1;
        if (bVar4) {
          DAT_200008db = '\x1f';
        }
      }
      else {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_200008da = DAT_200008d9 + (char)iVar1;
          if (0x1f < DAT_200008da) {
            DAT_200008da = DAT_200008da - 0x20;
          }
          (&DAT_20003a72)[iVar1 * 3] = (&DAT_08026d12)[(uint)DAT_200008da * 3];
          (&DAT_20003a73)[iVar1 * 3] = (&DAT_08026d13)[(uint)DAT_200008da * 3];
          (&DAT_20003a74)[iVar1 * 3] = (&DAT_08026d14)[(uint)DAT_200008da * 3];
        }
        bVar4 = 0x1f < DAT_200008d9;
        DAT_200008d9 = DAT_200008d9 + 1;
        if (bVar4) {
          DAT_200008d9 = 0;
        }
      }
    }
  }
  else if (DAT_200008d6 < 0x640) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      switch(DAT_200008d4) {
      case 0:
        if (DAT_200008a7 == -1) {
          DAT_200008d4 = 1;
        }
        else {
          DAT_200008a7 = DAT_200008a7 + '\x11';
        }
        break;
      case 1:
        if (DAT_200008a6 == '\0') {
          DAT_200008d4 = 2;
        }
        else {
          DAT_200008a6 = DAT_200008a6 + -0x11;
        }
        break;
      case 2:
        if (DAT_200008a8 == -1) {
          DAT_200008d4 = 3;
        }
        else {
          DAT_200008a8 = DAT_200008a8 + '\x11';
        }
        break;
      case 3:
        if (DAT_200008a7 == '\0') {
          DAT_200008d4 = 4;
        }
        else {
          DAT_200008a7 = DAT_200008a7 + -0x11;
        }
        break;
      case 4:
        if (DAT_200008a6 == -1) {
          DAT_200008d4 = 5;
        }
        else {
          DAT_200008a6 = DAT_200008a6 + '\x11';
        }
        break;
      case 5:
        if (DAT_200008a8 == '\0') {
          DAT_200008d4 = 0;
        }
        else {
          DAT_200008a8 = DAT_200008a8 + -0x11;
        }
      }
      for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        (&DAT_20003a72)[iVar1 * 3] = DAT_200008a6;
        (&DAT_20003a73)[iVar1 * 3] = DAT_200008a7;
        (&DAT_20003a74)[iVar1 * 3] = DAT_200008a8;
      }
    }
  }
  else if (DAT_200008d6 < 0xa8c) {
    if (DAT_200008d8 == '\0') {
      DAT_200008d8 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003a96)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 3) / 100);
            (&DAT_20003a97)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 3) / 100);
            (&DAT_20003a98)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003a96)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003a96)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003a96)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 100) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 100) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003a96)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003a96)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003a96)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d12)[iVar1 * 3] * 3) / 100);
            (&DAT_20003a97)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d13)[iVar1 * 3] * 3) / 100);
            (&DAT_20003a98)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08026d14)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_200008de = DAT_200008dc + (short)iVar1;
      if (0xdf < DAT_200008de) {
        DAT_200008de = DAT_200008de + -0xe0;
      }
      (&DAT_20003a72)[iVar1 * 3] = (&DAT_20003a96)[DAT_200008de * 3];
      (&DAT_20003a73)[iVar1 * 3] = (&DAT_20003a97)[DAT_200008de * 3];
      (&DAT_20003a74)[iVar1 * 3] = (&DAT_20003a98)[DAT_200008de * 3];
    }
    if (param_1 == (param_2 + 5) * (param_1 / (param_2 + 5))) {
      if (bVar4) {
        DAT_200008dc = DAT_200008dc + -1;
        if (DAT_200008dc < 1) {
          DAT_200008dc = 0xdf;
        }
      }
      else {
        DAT_200008dc = DAT_200008dc + 1;
        if (0xdf < DAT_200008dc) {
          DAT_200008dc = 1;
        }
      }
    }
  }
  else if (DAT_200008d6 < 0xdac) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      for (iVar2 = 0; iVar2 < 0xc; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
        DAT_200008e1 = DAT_200008e0 + (char)iVar2;
        if ('\v' < DAT_200008e1) {
          DAT_200008e1 = DAT_200008e1 + -0xc;
        }
        (&DAT_20003a72)[iVar2 * 3] = (&DAT_200008a9)[DAT_200008e1 * 3];
        (&DAT_20003a73)[iVar2 * 3] = (&DAT_200008aa)[DAT_200008e1 * 3];
        (&DAT_20003a74)[iVar2 * 3] = (&DAT_200008ab)[DAT_200008e1 * 3];
      }
      if (bVar4) {
        if ((0 < iVar1) && (bVar4 = DAT_200008e0 == '\0', DAT_200008e0 = DAT_200008e0 + -1, bVar4))
        {
          DAT_200008e0 = '\v';
        }
      }
      else {
        bVar4 = '\v' < DAT_200008e0;
        DAT_200008e0 = DAT_200008e0 + '\x01';
        if (bVar4) {
          DAT_200008e0 = '\x01';
        }
      }
    }
  }
  else if (0xdac < DAT_200008d6) {
    DAT_200008d6 = 0;
  }
  return;
}



/* ENTRY 0x0801735e : FUN_0801735e */

void FUN_0801735e(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  FUN_08022562(local_30,0x14);
  FUN_08022562(local_44,0x14);
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1 & 0xff) {
    local_30[uVar4] = 0;
    local_44[uVar4] = 0;
  }
  uVar4 = DAT_200008f0 >> 0x1f;
  if (DAT_200008f0 == ((int)(DAT_200008f0 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_20003070;
    uVar2 = (uint)DAT_20003071;
    uVar3 = (uint)DAT_20003072;
  }
  else if (DAT_200008f0 + ((int)(DAT_200008f0 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_20003074;
    uVar2 = (uint)DAT_20003075;
    uVar3 = (uint)DAT_20003076;
  }
  else if (DAT_200008f0 + ((int)(DAT_200008f0 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_20003078;
    uVar2 = (uint)DAT_20003079;
    uVar3 = (uint)DAT_2000307a;
  }
  else {
    uVar4 = (uint)DAT_2000307c;
    uVar2 = (uint)DAT_2000307d;
    uVar3 = (uint)DAT_2000307e;
  }
  if (DAT_200008ec % 0x18 < 0xc) {
    uVar4 = (int)(uVar4 * (DAT_200008ec % 0x18)) / 0x18;
    uVar2 = (int)(uVar2 * (DAT_200008ec % 0x18)) / 0x18;
    uVar3 = (int)(uVar3 * (DAT_200008ec % 0x18)) / 0x18;
  }
  else {
    uVar4 = uVar4 - (int)(uVar4 * (DAT_200008ec % 0x18)) / 0x18;
    uVar2 = uVar2 - (int)(uVar2 * (DAT_200008ec % 0x18)) / 0x18;
    uVar3 = uVar3 - (int)(uVar3 * (DAT_200008ec % 0x18)) / 0x18;
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_080167f2(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_080167f2(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_200008ec == (DAT_200008ec / 0x18) * 0x18) {
    DAT_200008f0 = DAT_200008f0 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_200008ec = DAT_200008ec + 1;
    FUN_08016782(local_30,local_44);
  }
  else {
    DAT_200008ec = DAT_200008ec + 1;
    FUN_08016782(local_44,local_30);
  }
  return;
}



/* ENTRY 0x08017544 : FUN_08017544 */

void FUN_08017544(int param_1,int param_2)

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
  FUN_08022562(auStack_40,0x14);
  FUN_08022562(auStack_54,0x14);
  iVar5 = 0;
  iVar8 = 0;
  for (cVar4 = '\0'; cVar4 < '\x06'; cVar4 = cVar4 + '\x01') {
    FUN_080167f2(cVar2,(&DAT_20003a72)[iVar8 * 3],(&DAT_20003a73)[iVar8 * 3],
                 (&DAT_20003a74)[iVar8 * 3],auStack_54);
    FUN_080167f2(cVar2,(&DAT_20003a72)[iVar5 * 3],(&DAT_20003a73)[iVar5 * 3],
                 (&DAT_20003a74)[iVar5 * 3],auStack_40);
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
  FUN_08016782(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_200008e7 = DAT_200008e6 + (char)iVar5;
      if ('\v' < DAT_200008e7) {
        DAT_200008e7 = DAT_200008e7 + -0xc;
      }
      (&DAT_20003a72)[iVar5 * 3] = (&DAT_20003d5a)[DAT_200008e7 * 3];
      (&DAT_20003a73)[iVar5 * 3] = (&DAT_20003d5b)[DAT_200008e7 * 3];
      (&DAT_20003a74)[iVar5 * 3] = (&DAT_20003d5c)[DAT_200008e7 * 3];
    }
    bVar1 = '\v' < DAT_200008e6;
    DAT_200008e6 = DAT_200008e6 + '\x01';
    if (bVar1) {
      DAT_200008e6 = '\x01';
    }
  }
  if (DAT_200008e8 < 500) {
    DAT_20003d5a = DAT_20003070;
    DAT_20003d5b = DAT_20003071;
    DAT_20003d5c = DAT_20003072;
    DAT_20003d5d = (undefined1)(((uint)DAT_20003070 * 0x50) / 100);
    DAT_20003d5e = (undefined1)(((uint)DAT_20003071 * 0x50) / 100);
    DAT_20003d5f = (undefined1)(((uint)DAT_20003072 * 0x50) / 100);
    DAT_20003d60 = (undefined1)(((uint)DAT_20003070 * 0x37) / 100);
    DAT_20003d61 = (undefined1)(((uint)DAT_20003071 * 0x37) / 100);
    DAT_20003d62 = (undefined1)(((uint)DAT_20003072 * 0x37) / 100);
    DAT_20003d63 = (undefined1)(((uint)DAT_20003070 * 0x23) / 100);
    DAT_20003d64 = (undefined1)(((uint)DAT_20003071 * 0x23) / 100);
    DAT_20003d65 = (undefined1)(((uint)DAT_20003072 * 0x23) / 100);
    DAT_20003d66 = (undefined1)(((uint)DAT_20003070 * 0xf) / 100);
    DAT_20003d67 = (undefined1)(((uint)DAT_20003071 * 0xf) / 100);
    DAT_20003d68 = (undefined1)(((uint)DAT_20003072 * 0xf) / 100);
    DAT_20003d69 = (undefined1)(((uint)DAT_20003070 * 5) / 100);
    DAT_20003d6a = (undefined1)(((uint)DAT_20003071 * 5) / 100);
    DAT_20003d6b = (undefined1)(((uint)DAT_20003072 * 5) / 100);
    DAT_200008e8 = DAT_200008e8 + 1;
  }
  else if ((ushort)(DAT_200008e8 + 1) < 1000) {
    DAT_20003d5a = DAT_20003074;
    DAT_20003d5b = DAT_20003075;
    DAT_20003d5c = DAT_20003076;
    DAT_20003d5d = (undefined1)(((uint)DAT_20003074 * 0x50) / 100);
    DAT_20003d5e = (undefined1)(((uint)DAT_20003075 * 0x50) / 100);
    DAT_20003d5f = (undefined1)(((uint)DAT_20003076 * 0x50) / 100);
    DAT_20003d60 = (undefined1)(((uint)DAT_20003074 * 0x37) / 100);
    DAT_20003d61 = (undefined1)(((uint)DAT_20003075 * 0x37) / 100);
    DAT_20003d62 = (undefined1)(((uint)DAT_20003076 * 0x37) / 100);
    DAT_20003d63 = (undefined1)(((uint)DAT_20003074 * 0x23) / 100);
    DAT_20003d64 = (undefined1)(((uint)DAT_20003075 * 0x23) / 100);
    DAT_20003d65 = (undefined1)(((uint)DAT_20003076 * 0x23) / 100);
    DAT_20003d66 = (undefined1)(((uint)DAT_20003074 * 0xf) / 100);
    DAT_20003d67 = (undefined1)(((uint)DAT_20003075 * 0xf) / 100);
    DAT_20003d68 = (undefined1)(((uint)DAT_20003076 * 0xf) / 100);
    DAT_20003d69 = (undefined1)(((uint)DAT_20003074 * 5) / 100);
    DAT_20003d6a = (undefined1)(((uint)DAT_20003075 * 5) / 100);
    DAT_20003d6b = (undefined1)(((uint)DAT_20003076 * 5) / 100);
    DAT_200008e8 = DAT_200008e8 + 2;
  }
  else if ((ushort)(DAT_200008e8 + 2) < 0x5dc) {
    DAT_20003d5a = DAT_20003078;
    DAT_20003d5b = DAT_20003079;
    DAT_20003d5c = DAT_2000307a;
    DAT_20003d5d = (undefined1)(((uint)DAT_20003078 * 0x50) / 100);
    DAT_20003d5e = (undefined1)(((uint)DAT_20003079 * 0x50) / 100);
    DAT_20003d5f = (undefined1)(((uint)DAT_2000307a * 0x50) / 100);
    DAT_20003d60 = (undefined1)(((uint)DAT_20003078 * 0x37) / 100);
    DAT_20003d61 = (undefined1)(((uint)DAT_20003079 * 0x37) / 100);
    DAT_20003d62 = (undefined1)(((uint)DAT_2000307a * 0x37) / 100);
    DAT_20003d63 = (undefined1)(((uint)DAT_20003078 * 0x23) / 100);
    DAT_20003d64 = (undefined1)(((uint)DAT_20003079 * 0x23) / 100);
    DAT_20003d65 = (undefined1)(((uint)DAT_2000307a * 0x23) / 100);
    DAT_20003d66 = (undefined1)(((uint)DAT_20003078 * 0xf) / 100);
    DAT_20003d67 = (undefined1)(((uint)DAT_20003079 * 0xf) / 100);
    DAT_20003d68 = (undefined1)(((uint)DAT_2000307a * 0xf) / 100);
    DAT_20003d69 = (undefined1)(((uint)DAT_20003078 * 5) / 100);
    DAT_20003d6a = (undefined1)(((uint)DAT_20003079 * 5) / 100);
    DAT_20003d6b = (undefined1)(((uint)DAT_2000307a * 5) / 100);
    DAT_200008e8 = DAT_200008e8 + 3;
  }
  else {
    uVar3 = DAT_200008e8 + 4;
    if ((ushort)(DAT_200008e8 + 3) < 2000) {
      DAT_20003d5a = DAT_2000307c;
      DAT_20003d5b = DAT_2000307d;
      DAT_20003d5c = DAT_2000307e;
      DAT_20003d5d = (undefined1)(((uint)DAT_2000307c * 0x50) / 100);
      DAT_20003d5e = (undefined1)(((uint)DAT_2000307d * 0x50) / 100);
      DAT_20003d5f = (undefined1)(((uint)DAT_2000307e * 0x50) / 100);
      DAT_20003d60 = (undefined1)(((uint)DAT_2000307c * 0x37) / 100);
      DAT_20003d61 = (undefined1)(((uint)DAT_2000307d * 0x37) / 100);
      DAT_20003d62 = (undefined1)(((uint)DAT_2000307e * 0x37) / 100);
      DAT_20003d63 = (undefined1)(((uint)DAT_2000307c * 0x23) / 100);
      DAT_20003d64 = (undefined1)(((uint)DAT_2000307d * 0x23) / 100);
      DAT_20003d65 = (undefined1)(((uint)DAT_2000307e * 0x23) / 100);
      DAT_20003d66 = (undefined1)(((uint)DAT_2000307c * 0xf) / 100);
      DAT_20003d67 = (undefined1)(((uint)DAT_2000307d * 0xf) / 100);
      DAT_20003d68 = (undefined1)(((uint)DAT_2000307e * 0xf) / 100);
      DAT_20003d69 = (undefined1)(((uint)DAT_2000307c * 5) / 100);
      DAT_20003d6a = (undefined1)(((uint)DAT_2000307d * 5) / 100);
      DAT_20003d6b = (undefined1)(((uint)DAT_2000307e * 5) / 100);
      DAT_200008e8 = uVar3;
    }
    else {
      DAT_200008e8 = DAT_200008e8 + 5;
      if (2000 < uVar3) {
        DAT_200008e8 = 0;
      }
    }
  }
  return;
}



/* ENTRY 0x08017d32 : FUN_08017d32 */

void FUN_08017d32(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_08016b7c();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_200008e5 = DAT_200008e4 + (char)uVar6;
      if ('\v' < DAT_200008e5) {
        DAT_200008e5 = DAT_200008e5 + -0xc;
      }
      (&DAT_20003a72)[uVar6 * 3] = (&DAT_20003d36)[DAT_200008e5 * 3];
      (&DAT_20003a73)[uVar6 * 3] = (&DAT_20003d37)[DAT_200008e5 * 3];
      (&DAT_20003a74)[uVar6 * 3] = (&DAT_20003d38)[DAT_200008e5 * 3];
    }
    if (bVar2) {
      bVar1 = DAT_200008e4 == '\0';
      DAT_200008e4 = DAT_200008e4 + -1;
      if (bVar1) {
        DAT_200008e4 = '\v';
      }
    }
    else {
      bVar1 = '\v' < DAT_200008e4;
      DAT_200008e4 = DAT_200008e4 + '\x01';
      if (bVar1) {
        DAT_200008e4 = '\x01';
      }
    }
  }
  uVar4 = DAT_200008e2 + 1;
  if (DAT_200008e2 < 500) {
    DAT_200008e2 = uVar4;
    if (bVar2) {
      DAT_20003d45 = DAT_20003070;
      DAT_20003d46 = DAT_20003071;
      DAT_20003d47 = DAT_20003072;
      DAT_20003d42 = (undefined1)(((uint)DAT_20003070 * 0x50) / 100);
      DAT_20003d43 = (undefined1)(((uint)DAT_20003071 * 0x50) / 100);
      DAT_20003d44 = (undefined1)(((uint)DAT_20003072 * 0x50) / 100);
      DAT_20003d3f = (undefined1)(((uint)DAT_20003070 * 0x37) / 100);
      DAT_20003d40 = (undefined1)(((uint)DAT_20003071 * 0x37) / 100);
      DAT_20003d41 = (undefined1)(((uint)DAT_20003072 * 0x37) / 100);
      DAT_20003d3c = (undefined1)(((uint)DAT_20003070 * 0x23) / 100);
      DAT_20003d3d = (undefined1)(((uint)DAT_20003071 * 0x23) / 100);
      DAT_20003d3e = (undefined1)(((uint)DAT_20003072 * 0x23) / 100);
      DAT_20003d39 = (undefined1)(((uint)DAT_20003070 * 0xf) / 100);
      DAT_20003d3a = (undefined1)(((uint)DAT_20003071 * 0xf) / 100);
      DAT_20003d3b = (undefined1)(((uint)DAT_20003072 * 0xf) / 100);
      DAT_20003d36 = (byte)(((uint)DAT_20003070 * 5) / 100);
      DAT_20003d37 = (byte)(((uint)DAT_20003071 * 5) / 100);
      DAT_20003d38 = (byte)(((uint)DAT_20003072 * 5) / 100);
    }
    else {
      DAT_20003d39 = (undefined1)(((uint)DAT_20003070 * 0x50) / 100);
      DAT_20003d3a = (undefined1)(((uint)DAT_20003071 * 0x50) / 100);
      DAT_20003d3b = (undefined1)(((uint)DAT_20003072 * 0x50) / 100);
      DAT_20003d3c = (undefined1)(((uint)DAT_20003070 * 0x37) / 100);
      DAT_20003d3d = (undefined1)(((uint)DAT_20003071 * 0x37) / 100);
      DAT_20003d3e = (undefined1)(((uint)DAT_20003072 * 0x37) / 100);
      DAT_20003d3f = (undefined1)(((uint)DAT_20003070 * 0x23) / 100);
      DAT_20003d40 = (undefined1)(((uint)DAT_20003071 * 0x23) / 100);
      DAT_20003d41 = (undefined1)(((uint)DAT_20003072 * 0x23) / 100);
      DAT_20003d42 = (undefined1)(((uint)DAT_20003070 * 0xf) / 100);
      DAT_20003d43 = (undefined1)(((uint)DAT_20003071 * 0xf) / 100);
      DAT_20003d44 = (undefined1)(((uint)DAT_20003072 * 0xf) / 100);
      DAT_20003d45 = (byte)(((uint)DAT_20003070 * 5) / 100);
      DAT_20003d46 = (byte)(((uint)DAT_20003071 * 5) / 100);
      DAT_20003d47 = (byte)(((uint)DAT_20003072 * 5) / 100);
      DAT_20003d38 = DAT_20003072;
      DAT_20003d37 = DAT_20003071;
      DAT_20003d36 = DAT_20003070;
    }
  }
  else {
    uVar5 = DAT_200008e2 + 2;
    if (uVar4 < 1000) {
      DAT_200008e2 = uVar5;
      if (bVar2) {
        DAT_20003d45 = DAT_20003074;
        DAT_20003d46 = DAT_20003075;
        DAT_20003d47 = DAT_20003076;
        DAT_20003d42 = (undefined1)(((uint)DAT_20003074 * 0x50) / 100);
        DAT_20003d43 = (undefined1)(((uint)DAT_20003075 * 0x50) / 100);
        DAT_20003d44 = (undefined1)(((uint)DAT_20003076 * 0x50) / 100);
        DAT_20003d3f = (undefined1)(((uint)DAT_20003074 * 0x37) / 100);
        DAT_20003d40 = (undefined1)(((uint)DAT_20003075 * 0x37) / 100);
        DAT_20003d41 = (undefined1)(((uint)DAT_20003076 * 0x37) / 100);
        DAT_20003d3c = (undefined1)(((uint)DAT_20003074 * 0x23) / 100);
        DAT_20003d3d = (undefined1)(((uint)DAT_20003075 * 0x23) / 100);
        DAT_20003d3e = (undefined1)(((uint)DAT_20003076 * 0x23) / 100);
        DAT_20003d39 = (undefined1)(((uint)DAT_20003074 * 0xf) / 100);
        DAT_20003d3a = (undefined1)(((uint)DAT_20003075 * 0xf) / 100);
        DAT_20003d3b = (undefined1)(((uint)DAT_20003076 * 0xf) / 100);
        DAT_20003d36 = (byte)(((uint)DAT_20003074 * 5) / 100);
        DAT_20003d37 = (byte)(((uint)DAT_20003075 * 5) / 100);
        DAT_20003d38 = (byte)(((uint)DAT_20003076 * 5) / 100);
      }
      else {
        DAT_20003d39 = (undefined1)(((uint)DAT_20003074 * 0x50) / 100);
        DAT_20003d3a = (undefined1)(((uint)DAT_20003075 * 0x50) / 100);
        DAT_20003d3b = (undefined1)(((uint)DAT_20003076 * 0x50) / 100);
        DAT_20003d3c = (undefined1)(((uint)DAT_20003074 * 0x37) / 100);
        DAT_20003d3d = (undefined1)(((uint)DAT_20003075 * 0x37) / 100);
        DAT_20003d3e = (undefined1)(((uint)DAT_20003076 * 0x37) / 100);
        DAT_20003d3f = (undefined1)(((uint)DAT_20003074 * 0x23) / 100);
        DAT_20003d40 = (undefined1)(((uint)DAT_20003075 * 0x23) / 100);
        DAT_20003d41 = (undefined1)(((uint)DAT_20003076 * 0x23) / 100);
        DAT_20003d42 = (undefined1)(((uint)DAT_20003074 * 0xf) / 100);
        DAT_20003d43 = (undefined1)(((uint)DAT_20003075 * 0xf) / 100);
        DAT_20003d44 = (undefined1)(((uint)DAT_20003076 * 0xf) / 100);
        DAT_20003d45 = (byte)(((uint)DAT_20003074 * 5) / 100);
        DAT_20003d46 = (byte)(((uint)DAT_20003075 * 5) / 100);
        DAT_20003d47 = (byte)(((uint)DAT_20003076 * 5) / 100);
        DAT_20003d38 = DAT_20003076;
        DAT_20003d37 = DAT_20003075;
        DAT_20003d36 = DAT_20003074;
      }
    }
    else {
      uVar4 = DAT_200008e2 + 3;
      if (uVar5 < 0x5dc) {
        DAT_200008e2 = uVar4;
        if (bVar2) {
          DAT_20003d45 = DAT_20003078;
          DAT_20003d46 = DAT_20003079;
          DAT_20003d47 = DAT_2000307a;
          DAT_20003d42 = (undefined1)(((uint)DAT_20003078 * 0x50) / 100);
          DAT_20003d43 = (undefined1)(((uint)DAT_20003079 * 0x50) / 100);
          DAT_20003d44 = (undefined1)(((uint)DAT_2000307a * 0x50) / 100);
          DAT_20003d3f = (undefined1)(((uint)DAT_20003078 * 0x37) / 100);
          DAT_20003d40 = (undefined1)(((uint)DAT_20003079 * 0x37) / 100);
          DAT_20003d41 = (undefined1)(((uint)DAT_2000307a * 0x37) / 100);
          DAT_20003d3c = (undefined1)(((uint)DAT_20003078 * 0x23) / 100);
          DAT_20003d3d = (undefined1)(((uint)DAT_20003079 * 0x23) / 100);
          DAT_20003d3e = (undefined1)(((uint)DAT_2000307a * 0x23) / 100);
          DAT_20003d39 = (undefined1)(((uint)DAT_20003078 * 0xf) / 100);
          DAT_20003d3a = (undefined1)(((uint)DAT_20003079 * 0xf) / 100);
          DAT_20003d3b = (undefined1)(((uint)DAT_2000307a * 0xf) / 100);
          DAT_20003d36 = (byte)(((uint)DAT_20003078 * 5) / 100);
          DAT_20003d37 = (byte)(((uint)DAT_20003079 * 5) / 100);
          DAT_20003d38 = (byte)(((uint)DAT_2000307a * 5) / 100);
        }
        else {
          DAT_20003d39 = (undefined1)(((uint)DAT_20003078 * 0x50) / 100);
          DAT_20003d3a = (undefined1)(((uint)DAT_20003079 * 0x50) / 100);
          DAT_20003d3b = (undefined1)(((uint)DAT_2000307a * 0x50) / 100);
          DAT_20003d3c = (undefined1)(((uint)DAT_20003078 * 0x37) / 100);
          DAT_20003d3d = (undefined1)(((uint)DAT_20003079 * 0x37) / 100);
          DAT_20003d3e = (undefined1)(((uint)DAT_2000307a * 0x37) / 100);
          DAT_20003d3f = (undefined1)(((uint)DAT_20003078 * 0x23) / 100);
          DAT_20003d40 = (undefined1)(((uint)DAT_20003079 * 0x23) / 100);
          DAT_20003d41 = (undefined1)(((uint)DAT_2000307a * 0x23) / 100);
          DAT_20003d42 = (undefined1)(((uint)DAT_20003078 * 0xf) / 100);
          DAT_20003d43 = (undefined1)(((uint)DAT_20003079 * 0xf) / 100);
          DAT_20003d44 = (undefined1)(((uint)DAT_2000307a * 0xf) / 100);
          DAT_20003d45 = (byte)(((uint)DAT_20003078 * 5) / 100);
          DAT_20003d46 = (byte)(((uint)DAT_20003079 * 5) / 100);
          DAT_20003d47 = (byte)(((uint)DAT_2000307a * 5) / 100);
          DAT_20003d38 = DAT_2000307a;
          DAT_20003d37 = DAT_20003079;
          DAT_20003d36 = DAT_20003078;
        }
      }
      else {
        uVar5 = DAT_200008e2 + 4;
        if (uVar4 < 2000) {
          DAT_200008e2 = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20003d45 = DAT_2000307c;
              DAT_20003d46 = DAT_2000307d;
              DAT_20003d47 = DAT_2000307e;
              DAT_20003d42 = (undefined1)(((uint)DAT_2000307c * 0x50) / 100);
              DAT_20003d43 = (undefined1)(((uint)DAT_2000307d * 0x50) / 100);
              DAT_20003d44 = (undefined1)(((uint)DAT_2000307e * 0x50) / 100);
              DAT_20003d3f = (undefined1)(((uint)DAT_2000307c * 0x37) / 100);
              DAT_20003d40 = (undefined1)(((uint)DAT_2000307d * 0x37) / 100);
              DAT_20003d41 = (undefined1)(((uint)DAT_2000307e * 0x37) / 100);
              DAT_20003d3c = (undefined1)(((uint)DAT_2000307c * 0x23) / 100);
              DAT_20003d3d = (undefined1)(((uint)DAT_2000307d * 0x23) / 100);
              DAT_20003d3e = (undefined1)(((uint)DAT_2000307e * 0x23) / 100);
              DAT_20003d39 = (undefined1)(((uint)DAT_2000307c * 0xf) / 100);
              DAT_20003d3a = (undefined1)(((uint)DAT_2000307d * 0xf) / 100);
              DAT_20003d3b = (undefined1)(((uint)DAT_2000307e * 0xf) / 100);
              DAT_20003d36 = (byte)(((uint)DAT_2000307c * 5) / 100);
              DAT_20003d37 = (byte)(((uint)DAT_2000307d * 5) / 100);
              DAT_20003d38 = (byte)(((uint)DAT_2000307e * 5) / 100);
            }
          }
          else {
            DAT_20003d36 = DAT_2000307c;
            DAT_20003d37 = DAT_2000307d;
            DAT_20003d38 = DAT_2000307e;
            DAT_20003d39 = (undefined1)(((uint)DAT_2000307c * 0x50) / 100);
            DAT_20003d3a = (undefined1)(((uint)DAT_2000307d * 0x50) / 100);
            DAT_20003d3b = (undefined1)(((uint)DAT_2000307e * 0x50) / 100);
            DAT_20003d3c = (undefined1)(((uint)DAT_2000307c * 0x37) / 100);
            DAT_20003d3d = (undefined1)(((uint)DAT_2000307d * 0x37) / 100);
            DAT_20003d3e = (undefined1)(((uint)DAT_2000307e * 0x37) / 100);
            DAT_20003d3f = (undefined1)(((uint)DAT_2000307c * 0x23) / 100);
            DAT_20003d40 = (undefined1)(((uint)DAT_2000307d * 0x23) / 100);
            DAT_20003d41 = (undefined1)(((uint)DAT_2000307e * 0x23) / 100);
            DAT_20003d42 = (undefined1)(((uint)DAT_2000307c * 0xf) / 100);
            DAT_20003d43 = (undefined1)(((uint)DAT_2000307d * 0xf) / 100);
            DAT_20003d44 = (undefined1)(((uint)DAT_2000307e * 0xf) / 100);
            DAT_20003d45 = (byte)(((uint)DAT_2000307c * 5) / 100);
            DAT_20003d46 = (byte)(((uint)DAT_2000307d * 5) / 100);
            DAT_20003d47 = (byte)(((uint)DAT_2000307e * 5) / 100);
          }
        }
        else {
          DAT_200008e2 = DAT_200008e2 + 5;
          if (2000 < uVar5) {
            DAT_200008e2 = 0;
          }
        }
      }
    }
  }
  return;
}



/* ENTRY 0x08018ac2 : FUN_08018ac2 */

void FUN_08018ac2(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_08017d32(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_08017544(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_0801735e();
    }
  }
  else {
    FUN_08016bf8(param_1,param_2);
  }
  return;
}



/* ENTRY 0x08018b04 : FUN_08018b04 */

void FUN_08018b04(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08022562(auStack_2c,0x14);
  FUN_08022562(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080167f2(bVar1,0,0,0,auStack_2c);
    FUN_080167f2(bVar1,0,0,0,auStack_40);
  }
  if (DAT_2000082c % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_080167f2(bVar1,uVar2,0,0,auStack_2c);
    FUN_080167f2(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_08016782(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x08018bae : FUN_08018bae */

undefined4 FUN_08018bae(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08022562(local_1c,0x14);
  FUN_08022562(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_20002fd4 == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_08016782(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_20003066 == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_08016782(local_1c,local_30);
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
    FUN_08016782(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08018c98 : FUN_08018c98 */

undefined4 FUN_08018c98(void)

{
  uint uVar1;
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  
  FUN_08022562(local_28,0x14);
  FUN_08022562(local_3c,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_28[uVar1] = 0;
    local_3c[uVar1] = 0;
  }
  return 0;
}



/* ENTRY 0x08018cce : FUN_08018cce */

void FUN_08018cce(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08022562(auStack_34,0x14);
  FUN_08022562(auStack_48,0x14);
  DAT_2000082c = DAT_2000082c + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_080167f2(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_080167f2(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_08016782(auStack_34,auStack_48);
    }
    else {
      FUN_080168c6(diag_TotalVoltage);
    }
  }
  else if (DAT_20000830 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_08016812(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_08018c98();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08016812(diag_TotalVoltage);
      }
    }
    else if (DAT_20000824 == 0) {
      iVar1 = FUN_08018bae();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_08016812(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_080168c6(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_20003044 < iVar1 / 1000) {
            FUN_08018b04();
          }
          else {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            DAT_20000832 = (ushort)(iVar1 / 1000);
            if (0x28 < DAT_20000832) {
              DAT_20000832 = 0x28;
            }
            DAT_20000834 = (int)((uint)DAT_20003044 - (uint)DAT_20000832) / 5;
            if (DAT_20000834 == 0) {
              DAT_20000834 = 1;
            }
            if (((DAT_20003068 != 0) && (DAT_20003068 != 1)) &&
               ((DAT_20003068 != 2 && (DAT_20003068 != 3)))) {
              DAT_20003068 = 0;
            }
            FUN_08018ac2(DAT_2000082c,DAT_20000834,DAT_20003068);
          }
        }
      }
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_20000824 = DAT_20000824 + -1;
      FUN_08018ac2(DAT_2000082c,(int)((uint)DAT_20003044 - iVar1 / 1000) / 5,DAT_20003068);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08016812(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x08018f2a : FUN_08018f2a */

void FUN_08018f2a(void)

{
  if (DAT_20000840 < 0x14) {
    DAT_20000840 = DAT_20000840 + 1;
    DAT_2000083c = ((int)(uint)DAT_20003338 >> 4) * 100;
  }
  else {
    DAT_2000083c = (DAT_2000083c * 99 + ((int)(uint)DAT_20003338 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x08018f76 : FUN_08018f76 */

void FUN_08018f76(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08022562(auStack_34,0x14);
  FUN_08022562(auStack_48,0x14);
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if ((iVar2 < 500) && (DAT_20003094 == 1)) {
    if (DAT_20000862 < 0x2ee) {
      DAT_20000866 = '\x01';
      DAT_20000862 = DAT_20000862 + 1;
    }
    else {
      DAT_20000866 = '\0';
      DAT_20000862 = 1000;
    }
  }
  else {
    DAT_20000866 = '\0';
    DAT_20000862 = 0;
  }
  bVar5 = DAT_20003094 == 1;
  do {
    if (!bVar5) goto code_r0x080197c6;
    bVar5 = DAT_20000866 == '\0';
  } while (((!bVar5) || (bVar5 = DAT_20002fd4 == '\0', !bVar5)) ||
          (bVar5 = diag_AgeModeflg == '\0', !bVar5));
  DAT_20000830 = 1;
  DAT_20000858 = (short)((int)(uint)DAT_20003338 >> 4);
  if (DAT_2000085e < 3) {
    iVar2 = (int)DAT_20000858 - DAT_2000083c / 100;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_20000846 = (short)iVar2 + DAT_20000846;
    DAT_2000085e = DAT_2000085e + 1;
  }
  else {
    DAT_2000085e = 0;
    DAT_20000842 = DAT_20000846 / 3;
    DAT_20000846 = 0;
  }
  bVar5 = 2000 < DAT_20000860;
  DAT_20000860 = DAT_20000860 + 1;
  if (bVar5) {
    DAT_20000860 = 0;
  }
  if (DAT_20000842 < 0x4b) {
    bVar5 = 800 < DAT_20000864;
    DAT_20000864 = DAT_20000864 + 1;
    if (bVar5) {
      DAT_20000864 = 0;
      DAT_20000867 = '\0';
      DAT_20002fe0 = 0;
    }
  }
  else {
    DAT_20000864 = 0;
  }
  if ((DAT_20000842 < 0x82) && (DAT_20000867 != '\x01')) {
    if (DAT_2000085c < 500) {
      DAT_2000085c = DAT_2000085c + 1;
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_080167f2(uVar4 & 0xff,0,0,0,auStack_34);
        FUN_080167f2(uVar4 & 0xff,0,0,0,auStack_48);
      }
      if (DAT_20000668 == (DAT_20000668 / 5) * 5) {
        FUN_08016782(auStack_34,auStack_48);
      }
    }
    else {
      DAT_2000085c = 6000;
code_r0x080197c6:
      DAT_20000830 = 0;
    }
  }
  else {
    DAT_20000867 = '\x01';
    DAT_20002fe0 = 1;
    if (DAT_2000085f < 200) {
      DAT_20000854 = DAT_20000854 + DAT_20000842;
      DAT_2000085f = DAT_2000085f + 1;
    }
    else {
      DAT_2000085f = 0;
      DAT_2000084a = (ushort)(DAT_20000854 / 200);
      DAT_20000854 = 0;
    }
    if ((uint)DAT_20000860 == (DAT_20000860 / 0xfa) * 0xfa) {
      uVar1 = DAT_2000084a + 0x50;
      if ((400 < DAT_20000842) && (uVar1 = DAT_2000084a + 200, 900 < DAT_20000842)) {
        uVar1 = DAT_2000084a + 400;
      }
      DAT_2000084a = uVar1;
      DAT_2000085a = DAT_2000084a / 5;
    }
    DAT_2000085c = 0;
    DAT_2000084e = DAT_20000842 / DAT_2000085a;
    if (6 < DAT_2000084e) {
      DAT_2000084e = 6;
    }
    if (DAT_2000309c == 0) {
      DAT_2000086a = DAT_2000086a + 1;
      if (DAT_2000086a < 25000) {
        if (DAT_2000086a < 15000) {
          if (9999 < DAT_2000086a) {
            DAT_20000868 = '\x01';
          }
        }
        else {
          DAT_20000868 = '\x02';
        }
      }
      else {
        DAT_2000086a = 0;
        DAT_20000868 = '\0';
      }
    }
    else if (DAT_2000309c == 1) {
      DAT_20000868 = '\0';
    }
    else if (DAT_2000309c == 2) {
      DAT_20000868 = '\x01';
    }
    else if (DAT_2000309c == 3) {
      DAT_20000868 = '\x02';
    }
    if (DAT_20000868 == '\0') {
      if ((uint)DAT_20000850 < (uint)DAT_2000084e * 0x50) {
        DAT_20000850 = DAT_2000084e * 0x50;
      }
      else if (DAT_20000850 != 0) {
        DAT_20000850 = DAT_20000850 - 1;
      }
      if (DAT_20000668 % 5 == 0) {
        for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
          if (5 < DAT_2000089e) {
            DAT_2000089e = 0;
          }
          if (5 < DAT_2000089f) {
            DAT_2000089f = 0;
          }
          uVar3 = (uint)DAT_2000089e;
          DAT_2000089e = DAT_2000089e + 1;
          DAT_2000089c = DAT_2000089e;
          if ((int)uVar3 < (int)(6 - (uint)DAT_2000084e)) {
            DAT_2000089c = 0;
          }
          if (6 - DAT_20000850 / 0x50 == (uint)DAT_2000089e) {
            DAT_2000089c = 1;
          }
          if ((int)uVar4 < 6) {
            FUN_080167f2(uVar4 & 0xff,*(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086c),
                         *(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086d),
                         *(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086e),auStack_48);
            FUN_080167f2(uVar4 & 0xff,*(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086c),
                         *(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086d),
                         *(undefined1 *)((uint)DAT_2000089c * 3 + 0x2000086e),auStack_34);
          }
        }
        DAT_2000089f = 0;
        DAT_2000089e = 0;
      }
    }
    else if (DAT_20000868 == '\x01') {
      DAT_20000852 = (char)((int)((uint)DAT_2000084e * 100) >> 4);
      DAT_20000881 = (undefined1)
                     ((int)((int)DAT_20000852 * (uint)(byte)(&DAT_20000881)[(uint)DAT_200008a2 * 3])
                     / 100);
      DAT_20000882 = (undefined1)
                     ((int)((int)DAT_20000852 * (uint)(byte)(&DAT_20000882)[(uint)DAT_200008a2 * 3])
                     / 100);
      DAT_20000883 = (undefined1)
                     ((int)((int)DAT_20000852 * (uint)(byte)(&DAT_20000883)[(uint)DAT_200008a2 * 3])
                     / 100);
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_080167f2(uVar4 & 0xff,DAT_20000881,DAT_20000882,DAT_20000883,auStack_48);
        FUN_080167f2(uVar4 & 0xff,DAT_20000881,DAT_20000882,DAT_20000883,auStack_34);
      }
      if ((DAT_20000668 % 300 == 0) &&
         (bVar5 = 7 < DAT_200008a2, DAT_200008a2 = DAT_200008a2 + 1, bVar5)) {
        DAT_200008a2 = 2;
      }
    }
    else if (DAT_20000868 == '\x02') {
      if (DAT_20000668 % 10 == 0) {
        if ((DAT_20000852 < 'd') && (DAT_200008a3 == '\0')) {
          DAT_20000852 = DAT_20000852 + (char)DAT_2000084e * '\x02';
        }
        else if (('\0' < DAT_20000852) && (DAT_200008a3 == '\x01')) {
          DAT_20000852 = DAT_20000852 - (char)DAT_2000084e;
        }
        if ((DAT_20000853 < 'd') && (DAT_200008a4 == '\0')) {
          DAT_20000853 = DAT_20000853 + (char)DAT_2000084e * '\x02';
        }
        else if (('\0' < DAT_20000853) && (DAT_200008a4 == '\x01')) {
          DAT_20000853 = DAT_20000853 - (char)DAT_2000084e;
        }
        if ((DAT_20000853 == 'd') && (DAT_20000852 == 'd')) {
          DAT_20000853 = DAT_20000852;
          DAT_20000852 = '\0';
        }
        if (DAT_20000852 < 'd') {
          if (DAT_20000852 < '\x01') {
            DAT_200008a3 = '\0';
            DAT_20000852 = '\0';
            bVar5 = 7 < DAT_200008a0;
            DAT_200008a0 = DAT_200008a0 + 1;
            if (bVar5) {
              DAT_200008a0 = 2;
            }
          }
        }
        else {
          DAT_200008a3 = '\x01';
          DAT_20000852 = 'd';
        }
        if (DAT_20000853 < 'd') {
          if (DAT_20000853 < '\x01') {
            DAT_200008a4 = '\0';
            DAT_20000853 = '\0';
            DAT_200008a1 = DAT_200008a0 + 1;
            if (7 < DAT_200008a1) {
              DAT_200008a1 = 2;
            }
          }
        }
        else {
          DAT_200008a4 = '\x01';
          DAT_20000853 = 'd';
        }
        DAT_20000881 = (undefined1)
                       ((int)((int)DAT_20000852 *
                             (uint)(byte)(&DAT_20000881)[(uint)DAT_200008a0 * 3]) / 100);
        DAT_20000882 = (undefined1)
                       ((int)((int)DAT_20000852 *
                             (uint)(byte)(&DAT_20000882)[(uint)DAT_200008a0 * 3]) / 100);
        DAT_20000883 = (undefined1)
                       ((int)((int)DAT_20000852 *
                             (uint)(byte)(&DAT_20000883)[(uint)DAT_200008a0 * 3]) / 100);
        DAT_20000884 = (undefined1)
                       ((int)((int)DAT_20000853 *
                             (uint)(byte)(&DAT_20000881)[(uint)DAT_200008a1 * 3]) / 100);
        DAT_20000885 = (undefined1)
                       ((int)((int)DAT_20000853 *
                             (uint)(byte)(&DAT_20000882)[(uint)DAT_200008a1 * 3]) / 100);
        DAT_20000886 = (undefined1)
                       ((int)((int)DAT_20000853 *
                             (uint)(byte)(&DAT_20000883)[(uint)DAT_200008a1 * 3]) / 100);
      }
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        if ((int)uVar4 < 6) {
          FUN_080167f2(uVar4 & 0xff,DAT_20000881,DAT_20000882,DAT_20000883,auStack_48);
          FUN_080167f2(uVar4 & 0xff,DAT_20000881,DAT_20000882,DAT_20000883,auStack_34);
        }
      }
    }
    if (DAT_20000668 == (DAT_20000668 / 5) * 5) {
      FUN_08016782(auStack_34,auStack_48);
    }
  }
  return;
}



/* ENTRY 0x080197f8 : FUN_080197f8 */

void FUN_080197f8(void)

{
  FUN_08022c98();
  FUN_08022b28(&DAT_0803d000);
  FUN_08022bc4(&DAT_0803d000,0x55aaaa55);
  FUN_08022b7c();
  DAT_200008f4 = 1;
  return;
}



/* ENTRY 0x08019818 : FUN_08019818 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019818(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_08022c98();
    FUN_08022b28(&DAT_0803d000);
    FUN_08022b7c();
  }
  return;
}



/* ENTRY 0x08019832 : FUN_08019832 */

void FUN_08019832(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_0802249a(&DAT_20000916);
  iVar3 = FUN_0802249a(&DAT_2000091d);
  sVar1 = 0;
  uVar5 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    (&DAT_20003d7e)[uVar5 * 0x14] = 0xaa;
    (&DAT_20003d7f)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20003d80)[uVar5 * 0x14 + iVar4] = (&DAT_20000916)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_20000916)[iVar4] + sVar1;
    }
    (&DAT_20003d80)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20003d81)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_2000091d)[iVar4];
      uVar6 = (byte)(&DAT_2000091d)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20003d81)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_20003d8e)[uVar5 * 0x14] = 0xbb;
    (&DAT_20003d8f)[uVar5 * 0x14] = 0x14;
    (&DAT_20003d90)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20003d91)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_200008f9)[uVar5] = 0x14;
    DAT_200008f7 = (char)uVar5 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return;
}



/* ENTRY 0x08019950 : FUN_08019950 */

int FUN_08019950(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    (&DAT_20003d7e)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003d7f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003d80)[uVar2 * 0x14 + iVar1] = (&DAT_20003052)[iVar1];
    }
    (&DAT_20003d8e)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003d81)[uVar2 * 0x14 + iVar1] = (&DAT_20003052)[iVar1];
    }
    (&DAT_200008f9)[uVar2] = 0x14;
    DAT_200008f7 = (char)uVar2 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x080199ec : FUN_080199ec */

byte FUN_080199ec(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_200008fe & 7;
  if (DAT_200008fd == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003dce)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
    }
    (&DAT_20000900)[uVar3] = (char)param_2;
    DAT_200008fe = (char)uVar3 + 1U & 7;
    bVar1 = DAT_200008fe;
    if (DAT_200008fe == DAT_200008ff) {
      bVar1 = 1;
      DAT_200008fd = '\x01';
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* ENTRY 0x08019a44 : FUN_08019a44 */

undefined4
FUN_08019a44(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_200008fd == '\0') {
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
    uVar2 = DAT_200008fe & 7;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003dce)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000900)[uVar2] = 0x14;
    DAT_200008fe = (char)uVar2 + 1U & 7;
    if (DAT_200008fe == DAT_200008ff) {
      DAT_200008fd = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x08019b44 : FUN_08019b44 */

undefined4
FUN_08019b44(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    (&DAT_20003d7e)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003d7f)[uVar1 * 0x14] = 0x55;
    (&DAT_20003d80)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20003d81)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20003d82)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003d83)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003d84)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003d85)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003d86)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003d87)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003d88)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003d89)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003d8a)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003d8b)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003d8c)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003d8d)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003d8e)[uVar1 * 0x14] = param_1;
    (&DAT_20003d8f)[uVar1 * 0x14] = 0x14;
    (&DAT_20003d90)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003d91)[uVar1 * 0x14] = 0x5a;
    (&DAT_200008f9)[uVar1] = 0x14;
    DAT_200008f7 = (char)uVar1 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x08019cee : FUN_08019cee */

undefined4 FUN_08019cee(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003d7e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_200008f9)[uVar2] = 0x14;
    DAT_200008f7 = (char)uVar2 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x08019d46 : FUN_08019d46 */

undefined4
FUN_08019d46(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_200008fe & 7;
  if (DAT_200008fd == '\0') {
    (&DAT_20003dce)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003dcf)[uVar1 * 0x14] = 0x55;
    (&DAT_20003dd0)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003dd1)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003dd2)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003dd3)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003dd4)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003dd5)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003dd6)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003dd7)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003dd8)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003dd9)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003dda)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003ddb)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003ddc)[uVar1 * 0x14] = (char)param_9;
    (&DAT_20003ddd)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_20003dde)[uVar1 * 0x14] = param_1;
    (&DAT_20003ddf)[uVar1 * 0x14] = param_2;
    (&DAT_20003de0)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003de1)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000900)[uVar1] = 0x14;
    DAT_200008fe = (char)uVar1 + 1U & 7;
    if (DAT_200008fe == DAT_200008ff) {
      DAT_200008fd = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x08019eac : FUN_08019eac */

undefined4 FUN_08019eac(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_200008fe & 7;
  if (DAT_200008fd == '\0') {
    (&DAT_20003dce)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003dcf)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003dd0)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_20003dde)[uVar2 * 0x14] = param_1;
    (&DAT_20003ddf)[uVar2 * 0x14] = param_2;
    (&DAT_20003de0)[uVar2 * 0x14] = 0x5a;
    (&DAT_20003de1)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000900)[uVar2] = 0x14;
    DAT_200008fe = (char)uVar2 + 1U & 7;
    if (DAT_200008fe == DAT_200008ff) {
      DAT_200008fd = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x08019f4e : FUN_08019f4e */

undefined4 FUN_08019f4e(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_200008fe & 7;
  if (DAT_200008fd == '\0') {
    (&DAT_20003dce)[uVar3 * 0x14] = 0xaa;
    (&DAT_20003dcf)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003dd0)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_20003dde)[uVar3 * 0x14] = param_1;
    (&DAT_20003ddf)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_0801fdec(&DAT_20003dd0 + uVar3 * 0x14,0x10);
    (&DAT_20003de0)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20003de1)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000900)[uVar3] = 0x14;
    DAT_200008fe = (char)uVar3 + 1U & 7;
    if (DAT_200008fe == DAT_200008ff) {
      DAT_200008fd = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a00c : FUN_0801a00c */

undefined4 FUN_0801a00c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_200008fe & 7;
  if (DAT_200008fd == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003dce)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000900)[uVar2] = 0x14;
    DAT_200008fe = (char)uVar2 + 1U & 7;
    if (DAT_200008fe == DAT_200008ff) {
      DAT_200008fd = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a064 : FUN_0801a064 */

undefined4 FUN_0801a064(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000909 & 3;
  if (DAT_20000908 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003e6e)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000090b)[uVar2] = 0x14;
    DAT_20000909 = (char)uVar2 + 1U & 3;
    if (DAT_20000909 == DAT_2000090a) {
      DAT_20000908 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a0bc : FUN_0801a0bc */

undefined4 FUN_0801a0bc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000910 & 3;
  if (DAT_2000090f != '\0') {
    return 0;
  }
  for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003ebe)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
  }
  (&DAT_20000912)[uVar2] = 0x14;
  DAT_20000910 = (char)uVar2 + 1U & 3;
  if (DAT_20000910 == DAT_20000911) {
    DAT_2000090f = '\x01';
  }
  return 0;
}



/* ENTRY 0x0801a15a : FUN_0801a15a */

bool FUN_0801a15a(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0801a196:
      DAT_2000304c = 1;
      DAT_20003094 = 0;
      DAT_20000686 = !bVar1;
      if (DAT_20000686) {
        DAT_20002f7e = DAT_20002f7e | 0x800;
      }
      else {
        DAT_20002f7e = DAT_20002f7e & 0xf7ff;
      }
      return !DAT_20000686;
    }
    if ((("KSSA04"[uVar2] != '\0') && ("KSSA01"[uVar2] != '\0')) &&
       (((byte)(&DAT_20003052)[uVar2] < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA04"[uVar2] < (byte)(&DAT_20003052)[uVar2])))) {
      bVar1 = false;
      goto code_r0x0801a196;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0801a1d4 : FUN_0801a1d4 */

undefined8 FUN_0801a1d4(int param_1,int param_2)

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
    iVar7 = (int)DAT_20000612;
  }
  for (uVar6 = 0; uVar6 < 6; uVar6 = uVar6 + 1 & 0xff) {
    if ((&DAT_20003096)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_0801a22e;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_2000303e = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_2000303e;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_20003040 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_20003040;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_20003042 = uVar1;
  }
  uVar1 = DAT_20003042;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_20003044 = (short)iVar5;
  }
  sVar4 = DAT_20003044;
  FUN_0800ddf2(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_08019b44(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_0800adbe();
LAB_0801a22e:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x0801a35c : FUN_0801a35c */

undefined4 FUN_0801a35c(int param_1)

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
  
  if (DAT_20000928 == '\0') {
    uVar6 = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xb) - 0x30;
    local_c = (undefined1  [2])CONCAT11(bVar1,DAT_20000922);
    bVar2 = *(char *)(param_1 + 0xd) - 0x30;
    bVar3 = *(char *)(param_1 + 0xf) - 0x30;
    local_8 = (uint)CONCAT11(bVar3,DAT_20000926);
    uVar7 = (CONCAT12(DAT_20000924,local_c) & 0xff) + (uint)bVar1 + (uint)DAT_20000924 + (uint)bVar2
            + (local_8 & 0xff) + (uint)bVar3;
    bVar4 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    uVar7 = (uint)bVar4 + (uint)bVar1 + (uint)DAT_20000924 + (uint)bVar2 + (uint)DAT_20000926 +
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



/* ENTRY 0x0801a472 : FUN_0801a472 */

void FUN_0801a472(char *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  short local_28;
  short local_24;
  short local_20;
  short local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = param_2 == 0x14;
  do {
    if (!bVar12) {
      local_14 = 0;
      while( true ) {
        if (param_2 <= (int)local_14) {
          return;
        }
        if (0x13 < local_14) break;
        (&DAT_20003f0e)[local_14] = param_1[local_14];
        local_14 = local_14 + 1 & 0xff;
      }
      return;
    }
    bVar12 = *param_1 == -0x56;
  } while ((!bVar12) || (bVar12 = param_1[1] == 'U', !bVar12));
  if (DAT_20000929 == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_200008f5 = 1;
      FUN_0800ddf2();
      FUN_08019832();
      FUN_08019b44(0x46,DAT_20000929,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_0800ddf2(1);
        FUN_08019b44(0x46,DAT_20000929,0,0,0,0,0,0);
        return;
      }
      return;
    }
    bVar12 = true;
    FUN_0800ddf2();
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_20003082)[local_18] != param_1[local_18 + 2]) {
        bVar12 = false;
        break;
      }
    }
    if (bVar12) {
      bVar12 = true;
    }
    else {
      bVar12 = true;
      for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_20003052)[local_18] != param_1[local_18 + 2]) {
          bVar12 = false;
          break;
        }
      }
      for (local_18 = 0xe; local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_20003052)[local_18] != param_1[local_18 + 3]) {
          bVar12 = false;
          break;
        }
      }
    }
    if ((((!bVar12) && (param_1[2] == '6')) && (param_1[3] == '3')) &&
       ((param_1[4] == '9' && (param_1[5] == '0')))) {
      bVar12 = true;
    }
    if (bVar12) {
      DAT_20000929 = '\0';
    }
    FUN_08019b44(0x46,DAT_20000929,0,0,0,0,0,0);
    return;
  }
  uVar10 = (uint)(byte)param_1[0x10];
  if (uVar10 == 0x7a) {
    if ((DAT_20002fdf != '\x01') && (param_1[0x11] == '\x10')) {
      return;
    }
    iVar11 = FUN_0800f7b8();
    if (iVar11 != 1) {
      return;
    }
    FUN_0801feee(param_1);
    return;
  }
  if (uVar10 < 0x7b) {
    uVar10 = uVar10 - 0x3f;
    bVar12 = 0x3a < uVar10;
switchD_0801a6f4_default:
    if (bVar12) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801a670 + (uint)*(ushort *)(&DAT_0801a670 + uVar10 * 2) * 2))();
    return;
  }
  if (uVar10 == 0x93) {
    FUN_0800ddf2(1);
    if (DAT_20002fd4 == '\0') {
      local_14._0_2_ = DAT_20003a12;
      local_18._0_2_ = DAT_20003a14;
      local_1c = DAT_20003a16;
      local_20 = DAT_20003a18;
      local_24 = DAT_20003a1a;
      local_28 = DAT_20003a1c;
    }
    else {
      local_14._0_2_ = DAT_2000301c;
      local_18._0_2_ = DAT_2000301e;
      local_1c = DAT_20003020;
      local_20 = DAT_20003022;
      local_24 = DAT_20003024;
      local_28 = DAT_20003026;
    }
    FUN_08019b44(0xad,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                 (int)local_24,(int)local_28);
    return;
  }
  if (0x93 < uVar10) {
    if (uVar10 == 0x9b) {
      FUN_0800ddf2(1);
      FUN_08019832();
      DAT_200008f5 = 1;
      return;
    }
    if (0x9b < uVar10) {
      if (uVar10 != 0xe4) {
        if (uVar10 < 0xe5) {
          if ((uVar10 == 0xe1) || (uVar10 == 0xe2)) {
            FUN_08020418(param_1);
            return;
          }
          bVar12 = uVar10 == 0xe3;
        }
        else {
          if ((uVar10 == 0xe5) || (uVar10 == 0xe6)) {
            FUN_080204e2(param_1);
            return;
          }
          bVar12 = false;
          if (uVar10 == 0xf9) {
            FUN_08021050(param_1);
            return;
          }
        }
        if (!bVar12) {
          return;
        }
      }
      FUN_0802223a(param_1);
      return;
    }
    uVar10 = uVar10 - 0x94;
    bVar12 = true;
    switch(uVar10) {
    case 0:
      FUN_0800ddf2(1);
      if (DAT_20002fd4 == '\0') {
        local_14._0_2_ = DAT_20003a1e;
        local_18._0_2_ = DAT_20003a20;
        local_1c = DAT_20003a22;
        local_20 = DAT_20003a24;
        local_24 = DAT_20003a26;
        local_28 = DAT_20003a28;
      }
      else {
        local_14._0_2_ = DAT_20003028;
        local_18._0_2_ = DAT_2000302a;
        local_1c = DAT_2000302c;
        local_20 = DAT_2000302e;
        local_24 = DAT_20003030;
        local_28 = DAT_20003032;
      }
      FUN_08019b44(0xae,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                   (int)local_24,(int)local_28);
      return;
    case 1:
      if (param_1[2] == -1) {
        DAT_20000664 = 0x11;
        return;
      }
      if (param_1[3] == -1) {
        DAT_20000664 = 0x12;
        return;
      }
      if (param_1[4] == -1) {
        DAT_20000664 = 0x13;
        FUN_0800ddf2(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_20000664 = 0x14;
      FUN_0800ddf2(1);
      return;
    case 2:
      FUN_0800ddf2(1);
      FUN_08019b44(0x4d,(int)(short)DAT_2000309c,0,0,0,0,0,0);
      return;
    case 3:
      FUN_0800ddf2(1);
      DAT_2000309c = (ushort)(byte)param_1[2];
      FUN_08019b44(0x4d,DAT_2000309c,0,0,0,0,0,0);
      DAT_20002fdd = 1;
      return;
    case 4:
      FUN_0800ddf2(1);
      FUN_08019b44(0xb5,0,(int)DAT_2000303e,(int)DAT_20003040,(int)DAT_20003042,(int)DAT_20003044,0,
                   0);
      return;
    case 5:
      FUN_0800ddf2(1);
      FUN_08019b44(0xe7,(int)CONCAT11(DAT_20003097,DAT_20003096),
                   (int)CONCAT11(DAT_20003099,DAT_20003098),(int)CONCAT11(DAT_2000309b,DAT_2000309a)
                   ,0,0,0,0);
      return;
    case 6:
      FUN_0800ddf2(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_20003096)[local_14] = param_1[local_14 + 2];
      }
      FUN_08019b44(0xe7,(int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),
                   (int)*(short *)(param_1 + 6),0,0,0,0);
      DAT_20002fdd = 1;
      return;
    }
    goto switchD_0801a6f4_default;
  }
  uVar10 = uVar10 - 0x7c;
  bVar12 = true;
  switch(uVar10) {
  case 0:
    iVar11 = FUN_0800f758();
    cVar3 = param_1[2];
    if (diag_AgeModeflg == '\0') {
      if (DAT_20002fdf != '\0') {
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (((0x42000 < iVar11) && (cVar3 == '\x01')) && (DAT_20002fd4 == '\0')) {
          FUN_0800ae88(1);
          FUN_0800ddf2(1);
          goto LAB_0801bb26;
        }
      }
      FUN_0800ddf2(3);
      cVar3 = '\0';
    }
    else if (cVar3 == '\0') {
      FUN_0800ae88(2);
      FUN_0800ddf2(2);
    }
    else if (DAT_20002fdf == '\0') {
      FUN_0800ddf2(3);
      cVar3 = '\0';
    }
    else {
      FUN_0800ae88(1);
      FUN_0800ddf2(1);
    }
LAB_0801bb26:
    FUN_08019b44(0x48,cVar3,0,0,0,0,0,0);
    break;
  case 1:
    FUN_08019b44(0x4a,(int)DAT_20003094,0,0,0,0,0,0);
    FUN_0800ddf2(1);
    DAT_20002fdd = 1;
    break;
  case 2:
    DAT_20003092 = (ushort)(byte)param_1[2];
    FUN_08019b44(0x4c,DAT_20003092,0,0,0,0,0,0);
    FUN_0800ddf2(1);
    DAT_20002fdd = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_0800ddf2(1);
    FUN_08019b44(0x4a,(int)DAT_20003094,0,0,0,0,0,0);
    break;
  case 5:
    FUN_0800ddf2(1);
    FUN_08019b44(0x4c,(int)(short)DAT_20003092,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_20002fd4 != '\0') {
      iVar11 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar11 = -diag_VehicleSpeed;
      }
      if (iVar11 < 0xbb9) {
        FUN_0800ddf2(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_08019b44(0xac,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_20003010 = sVar4;
        DAT_20003012 = sVar5;
        DAT_20003014 = sVar6;
        DAT_20003016 = sVar7;
        DAT_20003018 = sVar8;
        DAT_2000301a = sVar9;
        FUN_0800ab84(&DAT_2000300e);
        DAT_20002fdd = 1;
        return;
      }
    }
    FUN_0800ddf2(2);
    break;
  case 7:
    if (DAT_20002fd4 != '\0') {
      iVar11 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar11 = -diag_VehicleSpeed;
      }
      if (iVar11 < 0xbb9) {
        FUN_0800ddf2(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_08019b44(0xad,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_2000301c = sVar4;
        DAT_2000301e = sVar5;
        DAT_20003020 = sVar6;
        DAT_20003022 = sVar7;
        DAT_20003024 = sVar8;
        DAT_20003026 = sVar9;
        FUN_0800ab84(&DAT_2000300e);
        DAT_20002fdd = 1;
        return;
      }
    }
    FUN_0800ddf2(2);
    break;
  case 8:
    if (DAT_20002fd4 != '\0') {
      iVar11 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar11 = -diag_VehicleSpeed;
      }
      if (iVar11 < 0xbb9) {
        FUN_0800ddf2(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_08019b44(0xae,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_20003028 = sVar4;
        DAT_2000302a = sVar5;
        DAT_2000302c = sVar6;
        DAT_2000302e = sVar7;
        DAT_20003030 = sVar8;
        DAT_20003032 = sVar9;
        FUN_0800ab84(&DAT_2000300e);
        DAT_20002fdd = 1;
        return;
      }
    }
    FUN_0800ddf2(2);
    break;
  case 9:
    iVar11 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar11 = -diag_VehicleSpeed;
    }
    if (iVar11 < 0xbb9) {
      FUN_0800ddf2(1);
      FUN_0801a1d4(param_1);
      DAT_20002fdd = 1;
    }
    else {
      FUN_0800ddf2(2);
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
    iVar11 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar11 = -diag_VehicleSpeed;
    }
    if (iVar11 < 0xbb9) {
      FUN_0800ddf2(1);
      if (param_1[2] == '\0') {
        DAT_2000300e = 0xe000;
        FUN_08019b44(0xa2,1,0,0,0,0,0,0);
      }
      else if (param_1[2] == '\x01') {
        DAT_2000300e = 0xe001;
        FUN_08019b44(0xa2,1,1,0,0,0,0,0);
      }
      else if (param_1[2] == '\x02') {
        DAT_2000300e = 0xe002;
        FUN_08019b44(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003a04 = DAT_2000300e;
      if (DAT_20002fd4 == '\0') {
        FUN_0800ab84(&DAT_20003a04);
      }
      else {
        FUN_0800ab84(&DAT_2000300e);
      }
      DAT_20002fdd = 1;
    }
    else {
      FUN_0800ddf2(2);
    }
    break;
  case 0xc:
    DAT_200008f5 = 1;
    if (DAT_2000304c == 1) {
      FUN_0800ddf2();
    }
    else {
      DAT_20000664 = 3;
    }
    break;
  case 0xd:
    FUN_0800ddf2(1);
    if (DAT_20002fdf == '\x01') {
      iVar11 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar11 = -diag_VehicleSpeed;
      }
      if (iVar11 < 1000) {
        FUN_0800af54();
        uVar10 = DAT_e000ed0c;
        DAT_e000ed0c = (uVar10 & 0x700 | 0x5fa0000) + 4;
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    break;
  case 0xe:
    if (param_1[2] == '\0') {
      FUN_08019b44(0x8a,0,(int)DAT_20003002,0,0,0,0,0);
      FUN_0800ddf2(1);
    }
    else if (param_1[2] == '\x01') {
      bVar1 = param_1[4];
      bVar2 = param_1[5];
      if (DAT_20002fdf == '\0') {
        FUN_0800ddf2(2);
      }
      else {
        FUN_0800ddf2(1);
        DAT_20003002 = (ushort)bVar1 + (ushort)bVar2 * 0x100;
        FUN_0800f76e();
        FUN_08019b44(0x8a,1,(int)DAT_20003002,0,0,0,0,0);
        DAT_20002fdd = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      FUN_08019b44(0x8a,2,(int)DAT_20003004,0,0,0,0,0);
      FUN_0800ddf2(1);
    }
    else if (param_1[2] == '\x03') {
      bVar1 = param_1[4];
      bVar2 = param_1[5];
      if (DAT_20002fdf == '\0') {
        FUN_0800ddf2(2);
      }
      else {
        FUN_0800ddf2(1);
        DAT_20003004 = (ushort)bVar1 + (ushort)bVar2 * 0x100;
        FUN_0800f78e();
        FUN_08019b44(0x8a,3,(int)DAT_20003004,0,0,0,0,0);
        DAT_20002fdd = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      FUN_08019b44(0x8a,4,DAT_2000309e,0,0,0,0,0);
      FUN_0800ddf2(1);
    }
    else if (param_1[2] == '\x05') {
      cVar3 = param_1[4];
      if (DAT_20002fdf == '\0') {
        FUN_0800ddf2(2);
      }
      else {
        FUN_0800ddf2(1);
        DAT_2000309e = cVar3;
        FUN_0800f7b0();
        FUN_08019b44(0x8a,5,DAT_2000309e,0,0,0,0,0);
        DAT_20002fdd = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      FUN_08019b44(0x8a,6,(int)(short)DAT_20003048,0,0,0,0,0);
      FUN_0800ddf2(1);
    }
    else if (param_1[2] == '\a') {
      uVar10 = (uint)*(ushort *)(param_1 + 4);
      if (DAT_20002fdf == '\0') {
        FUN_0800ddf2(2);
      }
      else if (uVar10 == ((uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100 ^ 0xffff)) {
        if (param_1[3] == -0x32) {
          if (((int)uVar10 < DAT_200002c4 + -200) || (DAT_200002c4 + 200 < (int)uVar10)) {
            FUN_08019b44(0x8a,7,(int)(short)DAT_20003048,0,0,0,0,0);
            FUN_0800ddf2(2);
          }
          else {
            DAT_200002c0 = uVar10 - DAT_200002c4;
            DAT_20003048 = (ushort)DAT_200002c0;
            DAT_2000304a = (ushort)DAT_200002c0 ^ 0xffff;
            FUN_0800ddf2(1);
            FUN_08019b44(0x8a,0xffffce07,(int)(short)DAT_20003048,0,0,0,0,0);
            DAT_20002fdd = 1;
          }
        }
        else if ((param_1[3] == ' ') && (uVar10 == 0)) {
          DAT_200002c0 = 0;
          DAT_20003048 = 0;
          DAT_2000304a = 0;
          FUN_0800ddf2(1);
          FUN_08019b44(0x8a,0x2007,(int)(short)DAT_20003048,0,0,0,0,0);
          DAT_20002fdd = 1;
        }
      }
      else {
        FUN_0800ddf2(2);
      }
    }
    break;
  case 0x16:
    FUN_0800ddf2(1);
    if (DAT_20002fd4 == '\0') {
      local_14._0_2_ = DAT_20003a06;
      local_18._0_2_ = DAT_20003a08;
      local_1c = DAT_20003a0a;
      local_20 = DAT_20003a0c;
      local_24 = DAT_20003a0e;
      local_28 = DAT_20003a10;
    }
    else {
      local_14._0_2_ = DAT_20003010;
      local_18._0_2_ = DAT_20003012;
      local_1c = DAT_20003014;
      local_20 = DAT_20003016;
      local_24 = DAT_20003018;
      local_28 = DAT_2000301a;
    }
    FUN_08019b44(0xac,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                 (int)local_24,(int)local_28);
    break;
  default:
    goto switchD_0801a6f4_default;
  }
  return;
}



/* ENTRY 0x0801be12 : FUN_0801be12 */

uint FUN_0801be12(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
  
  DAT_2000094c = DAT_2000094c + 1;
  if (DAT_200008f5 == '\0') {
    if (DAT_2000094e < 0x15) {
      switch(DAT_2000094f) {
      case 0:
        for (uVar4 = 0; uVar4 < DAT_2000094b; uVar4 = uVar4 + 1 & 0xff) {
          (&DAT_2000093c)[uVar4] = (&DAT_20000919)[uVar4];
        }
        DAT_20000934 = DAT_2000094b + 5;
        DAT_2000094f = 3;
        break;
      case 3:
        puVar6 = (undefined1 *)(DAT_2000094c / 0x28);
        if ((uint)DAT_2000094c % 0x28 == 0x14) {
          if (DAT_2000094e < 10) {
            puVar7 = param_4;
            if ((DAT_20003f0e == -0x44) && (DAT_20003f12 == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_2000094b + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_20003f13)[uVar4];
                if (puVar7 != (undefined *)(uint)(byte)(&DAT_20000938)[uVar4]) {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                puVar6 = &DAT_2000094f;
                DAT_2000094f = 6;
              }
              else {
                DAT_2000094e = 0;
                puVar6 = &DAT_2000094f;
                DAT_2000094f = 5;
              }
            }
            DAT_2000094e = DAT_2000094e + 1;
            FUN_080199ec(&DAT_20000945,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
          }
          else {
            DAT_2000094e = 0;
            DAT_2000094f = 4;
          }
        }
        break;
      case 4:
        if ((uint)DAT_2000094c % 0x78 == 0x1e) {
          DAT_2000094e = DAT_2000094e + 1;
          FUN_080199ec(s_AT_ULKTE_2000092a,9,DAT_2000094c / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_2000094c / 0x50;
        if ((uint)DAT_2000094c % 0x50 == 0x14) {
          if ((DAT_20003f0e == -0x44) && (DAT_20003f12 == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_2000094b + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_20003f13)[uVar5];
              puVar7 = &DAT_20000933;
              if (uVar4 != (byte)(&DAT_20000938)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_2000094f = 6;
            }
            else {
              FUN_080199ec(&DAT_20000933,DAT_2000094b + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_2000094e = DAT_2000094e + 1;
        }
        else if ((uint)DAT_2000094c % 0x50 == 0x3c) {
          FUN_080199ec(&DAT_20000945,6,DAT_2000094c / 0x50,param_4,param_1,param_2,param_3,param_4);
        }
        break;
      case 6:
        DAT_2000094e = DAT_2000094e + 1;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if ((uint)DAT_2000094c == (DAT_2000094c / 0x18) * 0x18) {
      sVar9 = (short)diag_TotalVoltage;
      if (0x3138 < (short)diag_TotalVoltage) {
        sVar9 = 0x3138;
      }
      sVar1 = (short)diag_TotalCurrent;
      if ((diag_BatState == '\x01') && (200 < DAT_20000622)) {
        sVar1 = (short)(-(int)DAT_20000622 / 10);
      }
      sVar3 = (short)(diag_VehicleSpeed / 10);
      if (diag_VehicleSpeed / 10 < 0) {
        sVar3 = -sVar3;
      }
      FUN_08019a44(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_2000300e);
    }
    if ((uint)DAT_2000094c % 0x18 == 4) {
      sVar9 = (short)(DAT_20002fbc / 10);
      if (DAT_20002fbc / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_08019a44(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_20002fb0,(int)sVar9,
                   (int)(short)((ushort)DAT_2000067c | (ushort)(byte)DAT_2000304c << 8),
                   (int)CONCAT11(DAT_20000696,DAT_20000695),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_2000094c % 0x18 == 8) {
      FUN_08019a44(0xf5,(int)(short)DAT_2000068c,(int)(short)DAT_20000690,
                   (int)CONCAT11(DAT_2000068a,DAT_2000068b),(int)CONCAT11(DAT_20000686,DAT_20000688)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_2000094c % 0x18 == 0xc) {
      FUN_08019a44(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001d8,0,0,0,
                   (int)(short)(DAT_20002fb8 / 0xe10),(int)DAT_20002fd2);
    }
    if ((uint)DAT_2000094c % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_200039f4 != '\0') {
        uVar8 = 0x1000;
      }
      FUN_08019a44(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_2000094c + ((int)(uint)DAT_2000094c >> 2) * -4 == 2) {
      FUN_080211e6();
    }
    uVar4 = (uint)DAT_2000094c % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_080204f6();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801c260 : FUN_0801c260 */

void FUN_0801c260(void)

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
  
  FUN_08022fac(0x11,1);
  FUN_08022e56(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_08022d14(&DAT_40011000,&local_34);
  FUN_08022dc2(&DAT_40011000,0x200);
  FUN_08022f64(2,1);
  FUN_08022970(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_20003f24;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08022aac(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_08022eac(&local_54);
  FUN_08022a9c(&DAT_40020408,2,1);
  FUN_0802295c(&DAT_40020408,1);
  FUN_08022fac(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_08023a88(&DAT_40013400,&local_40);
  FUN_080239d8(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_08023966(&DAT_40013400,&local_50);
  FUN_080239ca(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_0802332a(&DAT_40013400,&local_64);
  FUN_0802336e(&DAT_40013400,0x80);
  FUN_08023318(&DAT_40013400,1);
  FUN_080233ac(&DAT_40013400,0xf,0x100);
  FUN_0802339c(&DAT_40013400,0x100);
  FUN_08023386(&DAT_40013400,1);
  FUN_08023374(&DAT_40013400,1);
  return;
}



/* ENTRY 0x0801c3e0 : FUN_0801c3e0 */

void FUN_0801c3e0(void)

{
  int iVar1;
  
  iVar1 = FUN_08022a7c(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_20000950 = 0;
    FUN_08022944(0x10000002);
  }
  return;
}



/* ENTRY 0x0801c3fe : FUN_0801c3fe */

void FUN_0801c3fe(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_20000950 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_20003f24 + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_20003f24 + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46 +
             (~((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
             0x14 | (((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U)
                     * 0x46 + (~((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >>
                                (7 - uVar2 & 0xff)) & 1U) * 0x14) * 0x10000;
      }
    }
    DAT_20000950 = '\x01';
  }
  return;
}



/* ENTRY 0x0801c588 : thunk_FUN_0801c59a */

void thunk_FUN_0801c59a(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801c59a : FUN_0801c59a */

void FUN_0801c59a(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801c5a0 : FUN_0801c5a0 */

void FUN_0801c5a0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(0x30,1);
  local_8 = 0x10031000;
  FUN_08022d14(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_08022d14(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_08022d14(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801c5f8 : FUN_0801c5f8 */

void FUN_0801c5f8(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_08022e4e(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_08022e4e(&DAT_40011000,0x1000);
    }
    else {
      FUN_08022e52(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_08022e52(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x0801c638 : FUN_0801c638 */

void FUN_0801c638(undefined4 param_1)

{
  FUN_08022e4e(&DAT_40011000,0x10);
  FUN_0801c5f8(param_1);
  FUN_08022e52(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801c654 : FUN_0801c654 */

void FUN_0801c654(uint param_1,undefined4 param_2)

{
  FUN_0801c638(0x44);
  FUN_08022e4e(&DAT_40011000,0x10);
  FUN_0801c5f8(param_1 | 0xc0);
  FUN_0801c5f8(param_2);
  FUN_08022e52(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801c680 : FUN_0801c680 */

void FUN_0801c680(int param_1)

{
  uint uVar1;
  
  FUN_0801c638(0x8f);
  FUN_0801c638(0x40);
  FUN_08022e4e(&DAT_40011000,0x10);
  FUN_0801c5f8(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801c5f8(*(undefined1 *)(param_1 + uVar1));
    FUN_0801c5f8((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_08022e52(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801c6c4 : FUN_0801c6c4 */

void FUN_0801c6c4(void)

{
  byte bVar1;
  
  FUN_0801c5a0();
  thunk_FUN_0801c59a(10);
  FUN_0801c638(0x8f);
  thunk_FUN_0801c59a(1);
  FUN_0801c638(0x40);
  thunk_FUN_0801c59a(1);
  FUN_08022e4e(&DAT_40011000,0x10);
  FUN_0801c5f8(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_0801c5f8(0);
  }
  FUN_08022e52(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801c71c : FUN_0801c71c */

void FUN_0801c71c(void)

{
  undefined4 local_8;
  
  local_8 = 0x1000003;
  FUN_08022eac(&local_8);
  return;
}



/* ENTRY 0x0801c73c : FUN_0801c73c */

undefined4 FUN_0801c73c(int param_1)

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



/* ENTRY 0x0801c776 : FUN_0801c776 */

void FUN_0801c776(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0801c73c(sVar1);
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
    iVar2 = FUN_0801c73c(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_08026da2)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_08026da2)[uVar4];
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



/* ENTRY 0x0801c878 : FUN_0801c878 */

longlong FUN_0801c878(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_08023138();
  if ((uint)DAT_20000952 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_20004828 = (undefined1)(uVar1 / 0xe10);
    DAT_20004829 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_2000482a = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_20000952 = (ushort)(uVar1 / 0x15180);
    FUN_0801c776(&local_20,uVar1);
    DAT_20004828 = (undefined1)local_20;
    DAT_20004829 = local_20._1_1_;
    DAT_2000482a = local_20._2_1_;
    DAT_2000482c = (undefined2)local_1c;
    DAT_2000482e = local_1c._2_1_;
    DAT_2000482f = local_1c._3_1_;
    DAT_20004830 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0801c918 : FUN_0801c918 */

int FUN_0801c918(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0801c73c(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0801c73c(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801c9b4 : FUN_0801c9b4 */

undefined4
FUN_0801c9b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801c918(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_08022f7c(0x18000000,1);
    FUN_08022f44(1);
    FUN_080231b0(uVar1);
    FUN_080231fc();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801ca0e : FUN_0801ca0e */

undefined4 FUN_0801ca0e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_08022f7c(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_08022f44(1);
  iVar2 = FUN_0802292a(4);
  if (iVar2 == 0x5050) {
    FUN_0802320c();
    FUN_080231fc();
  }
  else {
    FUN_08022918();
    FUN_080230c8(1);
    for (; (iVar2 = FUN_08023098(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_08008e00(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_080230f8(0x100);
    FUN_080230ec(1);
    FUN_080231fc();
    FUN_0802320c();
    FUN_08023170(1);
    FUN_080231fc();
    FUN_08023118();
    FUN_080231d8(0x7fff);
    FUN_080231fc();
    FUN_0801c9b4(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_08023128();
    FUN_08022936(4,0x5050);
  }
  FUN_0801c878();
  return 0;
}



/* ENTRY 0x0801cac2 : FUN_0801cac2 */

void FUN_0801cac2(void)

{
  int iVar1;
  
  iVar1 = FUN_08023150(1);
  if (iVar1 != 0) {
    FUN_0801c878();
  }
  iVar1 = FUN_08023150(2);
  if (iVar1 != 0) {
    FUN_08023108(2);
    FUN_0801c878();
  }
  FUN_08023108(5);
  FUN_080231fc();
  return;
}



/* ENTRY 0x0801caee : FUN_0801caee */

undefined4 FUN_0801caee(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar2 = FUN_0801c73c(uVar4);
      if (iVar2 == 0) {
        iVar3 = iVar3 + 0x1e13380;
      }
      else {
        iVar3 = iVar3 + 0x1e28500;
      }
    }
    for (uVar4 = 0; uVar4 < (param_2 - 1U & 0xff); uVar4 = uVar4 + 1 & 0xffff) {
      iVar3 = iVar3 + (uint)(byte)(&DAT_08026da2)[uVar4] * 0x15180;
      iVar2 = FUN_0801c73c(param_1);
      if ((iVar2 != 0) && (uVar4 == 1)) {
        iVar3 = iVar3 + 0x15180;
      }
    }
    FUN_08022f7c(0x18000000,1);
    FUN_08022f44(1);
    FUN_08023188(iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6);
    FUN_080231fc();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801cbc0 : FUN_0801cbc0 */

uint FUN_0801cbc0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 % 100 & 0xff;
  if (0x13 < (param_1 / 100 & 0xffU)) {
    uVar1 = uVar1 + 100 & 0xff;
  }
  uVar2 = (uint)(byte)(&DAT_08026d95)[param_2] + (uVar1 + ((int)uVar1 >> 2)) % 7 + param_3 & 0xffff;
  if ((uVar1 == ((int)uVar1 >> 2) * 4) && (param_2 < 3)) {
    uVar2 = uVar2 - 1 & 0xffff;
  }
  return uVar2 % 7;
}



/* ENTRY 0x0801cc38 : FUN_0801cc38 */

undefined1 FUN_0801cc38(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_08023236(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_08023248(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_08023236(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_08023244(&DAT_40003c00);
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



/* ENTRY 0x0801cc86 : FUN_0801cc86 */

void FUN_0801cc86(void)

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
  
  FUN_08022fac(8,1);
  FUN_08022f7c(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_08022d14(&DAT_40010c00,&local_8);
  FUN_08022e52(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_0802324c(&DAT_40003c00,&local_1c);
  FUN_08023224(&DAT_40003c00,1);
  FUN_0801cc38(0xff);
  return;
}



/* ENTRY 0x0801cd0c : FUN_0801cd0c */

void FUN_0801cd0c(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_08023224(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0801cd38 : FUN_0801cd38 */

uint FUN_0801cd38(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801cc38(0x90);
  FUN_0801cc38(0);
  FUN_0801cc38(0);
  FUN_0801cc38(0);
  iVar1 = FUN_0801cc38(0xff);
  uVar2 = FUN_0801cc38(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x0801cd78 : FUN_0801cd78 */

void FUN_0801cd78(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08022fac(8,1);
  local_8 = 0x10038000;
  FUN_08022d14(&DAT_40010800,&local_8);
  FUN_08022e52(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_08022d14(&DAT_40011000,&local_8);
  FUN_08022e52(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0801cc86();
  FUN_0801cd0c(0);
  DAT_20000954 = FUN_0801cd38();
  return;
}



/* ENTRY 0x0801cde4 : FUN_0801cde4 */

undefined4 FUN_0801cde4(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0801cc38(5);
  uVar1 = FUN_0801cc38(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x0801ce08 : FUN_0801ce08 */

void FUN_0801ce08(undefined4 param_1)

{
  DAT_422101bc = 0;
  FUN_0801cc38(1);
  FUN_0801cc38(param_1);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801ce28 : FUN_0801ce28 */

void FUN_0801ce28(void)

{
  DAT_422101bc = 0;
  FUN_0801cc38(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801ce40 : FUN_0801ce40 */

void FUN_0801ce40(void)

{
  DAT_422101bc = 0;
  FUN_0801cc38(4);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801ce58 : FUN_0801ce58 */

void FUN_0801ce58(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801cc38(3);
  FUN_0801cc38((param_2 & 0xffffff) >> 0x10);
  FUN_0801cc38((param_2 & 0xffff) >> 8);
  FUN_0801cc38(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801cc38(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801cea2 : FUN_0801cea2 */

undefined4 FUN_0801cea2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0801cc38(3);
  FUN_0801cc38((param_1 & 0xffffff) >> 0x10);
  FUN_0801cc38((param_1 & 0xffff) >> 8);
  FUN_0801cc38(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801cc38(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x0801cee8 : FUN_0801cee8 */

void FUN_0801cee8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_0801ce28();
  DAT_422101bc = 0;
  FUN_0801cc38(2);
  FUN_0801cc38((param_2 & 0xffffff) >> 0x10);
  FUN_0801cc38((param_2 & 0xffff) >> 8);
  FUN_0801cc38(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0801cc38(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801cf34 : FUN_0801cf34 */

uint FUN_0801cf34(void)

{
  uint uVar1;
  
  uVar1 = FUN_0801cde4();
  return uVar1 & 1;
}



/* ENTRY 0x0801cf40 : FUN_0801cf40 */

int FUN_0801cf40(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_0801cee8(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x0801cf60 : FUN_0801cf60 */

uint FUN_0801cf60(undefined4 param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = 0x100 - *param_2;
  if ((int)(uint)*param_3 <= (int)uVar1) {
    uVar1 = (uint)*param_3;
  }
  FUN_0801cee8(param_1,*(undefined4 *)param_2,uVar1);
  *(uint *)param_2 = *(int *)param_2 + uVar1;
  *param_3 = *param_3 - (short)uVar1;
  return uVar1;
}



/* ENTRY 0x0801cf94 : FUN_0801cf94 */

void FUN_0801cf94(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_0801ce28();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801cc38(0x20);
    FUN_0801cc38((param_2 << 0xc & 0xffffffU) >> 0x10);
    FUN_0801cc38((param_2 << 0xc & 0xffffU) >> 8);
    FUN_0801cc38(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801cfd2 : FUN_0801cfd2 */

void FUN_0801cfd2(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_0801ce28();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801cc38(0xd8);
    FUN_0801cc38(param_2);
    FUN_0801cc38(0);
    FUN_0801cc38(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d010 : FUN_0801d010 */

void FUN_0801d010(int param_1)

{
  if (param_1 == 0) {
    FUN_0801ce28();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801cc38(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d034 : FUN_0801d034 */

void FUN_0801d034(void)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_0801cde4();
  } while ((uVar1 & 1) != 0);
  return;
}



/* ENTRY 0x0801d046 : FUN_0801d046 */

void FUN_0801d046(void)

{
  DAT_422101bc = 0;
  FUN_0801cc38(0xb9);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801d064 : FUN_0801d064 */

void FUN_0801d064(void)

{
  DAT_422101bc = 0;
  FUN_0801cc38(0xab);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801d0ce : FUN_0801d0ce */

void FUN_0801d0ce(uint param_1,char *param_2)

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



/* ENTRY 0x0801d110 : FUN_0801d110 */

undefined4 FUN_0801d110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004845)[uVar1 + param_1 * 0x1c0] = (&DAT_08026db4)[uVar1];
  }
  local_14 = param_4;
  FUN_0801d0ce(param_2,&DAT_2000484c + param_1 * 0x1c0);
  (&DAT_20004851)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004850)[param_1 * 0x1c0] = 0x30;
  (&DAT_2000484f)[param_1 * 0x1c0] = 0x30;
  (&DAT_2000484e)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004845)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801d0ce((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_20004852)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004853)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0801d0ce(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_20004854)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_20004855)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_20004856)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x0801d20a : FUN_0801d20a */

undefined4 FUN_0801d20a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004845)[uVar1 + param_1 * 0x1c0] = (&DAT_08026db4)[uVar1];
  }
  local_1c = param_4;
  FUN_0801d0ce(param_2,&DAT_20004848 + param_1 * 0x1c0);
  FUN_0801d0ce(param_3,&DAT_2000484c + param_1 * 0x1c0);
  (&DAT_2000484e)[param_1 * 0x1c0] = 0x45;
  (&DAT_20004850)[param_1 * 0x1c0] = 0x30;
  (&DAT_2000484f)[param_1 * 0x1c0] = 0x30;
  (&DAT_20004851)[param_1 * 0x1c0] = 0x32;
  FUN_0801d0ce(param_4,&local_1c);
  (&DAT_20004852)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004853)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_20004845)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801d0ce((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_20004854)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004855)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0801d0ce(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_20004856)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_20004857)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_20004858)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x0801d34e : FUN_0801d34e */

uint FUN_0801d34e(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x0801d382 : FUN_0801d382 */

undefined4
FUN_0801d382(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0801d34e(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004845)[uVar2 + param_1 * 0x1c0] = (&DAT_08026db4)[uVar2];
  }
  FUN_0801d0ce(param_2,&DAT_20004848 + param_1 * 0x1c0);
  FUN_0801d0ce(param_3,&DAT_2000484c + param_1 * 0x1c0);
  FUN_0801d0ce((int)uVar1 >> 8,&local_24);
  (&DAT_2000484e)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_2000484f)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d0ce(uVar1 & 0xff,&local_24);
  (&DAT_20004850)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004851)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d0ce(param_4,&local_24);
  (&DAT_20004852)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004853)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d0ce(param_5,&local_24);
  (&DAT_20004854)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004855)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004845)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0801d0ce((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_20004856)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004857)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d0ce(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_20004858)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_20004859)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_2000485a)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x0801d52a : FUN_0801d52a */

int FUN_0801d52a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0801d34e((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20004845)[uVar2 + param_1 * 0x1c0] = (&DAT_08026db4)[uVar2];
  }
  FUN_0801d0ce(param_2,&DAT_20004848 + param_1 * 0x1c0);
  FUN_0801d0ce(param_3,&DAT_2000484c + param_1 * 0x1c0);
  FUN_0801d0ce((int)uVar1 >> 8,&local_28);
  (&DAT_2000484e)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_2000484f)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0801d0ce(uVar1 & 0xff,&local_28);
  (&DAT_20004850)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_20004851)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_20004845)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801d0ce(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_20004852)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_20004853)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0801d0ce((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_20004852)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004853)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0801d0ce(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_20004854)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_20004855)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_20004856)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x0801d6f4 : FUN_0801d6f4 */

uint FUN_0801d6f4(int param_1,int param_2)

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



/* ENTRY 0x0801d766 : FUN_0801d766 */

undefined2
FUN_0801d766(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0801d6f4(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_0801d6f4(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801d792 : FUN_0801d792 */

undefined4 FUN_0801d792(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801d766(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801d766(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x0801d842 : FUN_0801d842 */

undefined4 FUN_0801d842(char *param_1)

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



/* ENTRY 0x0801d888 : FUN_0801d888 */

void FUN_0801d888(undefined4 param_1)

{
  FUN_0801d20a(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x0801d89a : FUN_0801d89a */

undefined4 FUN_0801d89a(int param_1)

{
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 0xb0;
  (&DAT_20004848)[param_1 * 0x1c0] = 0;
  (&DAT_20004849)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x0801d8de : FUN_0801d8de */

undefined4 FUN_0801d8de(int param_1)

{
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 0xbb;
  (&DAT_20004848)[param_1 * 0x1c0] = 0;
  (&DAT_20004849)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x0801d922 : FUN_0801d922 */

undefined4 FUN_0801d922(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_20004837)[param_1 * 0x1c0] == '\0') && ((&DAT_2000483b)[param_1 * 0x1c0] == '\0')) {
    (&DAT_20004837)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d958 : FUN_0801d958 */

void FUN_0801d958(void)

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
  DAT_20000958 = DAT_20000958 + 1;
  uVar8 = DAT_20000958 & 1;
  uVar9 = DAT_20000958 & 1;
  uVar3 = DAT_20000958 & 1;
  uVar4 = DAT_20000958 & 1;
  uVar5 = DAT_20000958 & 1;
  uVar7 = DAT_20000958 & 1;
  if ((DAT_2000483b == '\0') && (DAT_20004837 == '\0')) {
    DAT_20002fc3 = DAT_20002fc3 & 0xef;
  }
  else {
    DAT_20002fc3 = DAT_20002fc3 | 0x10;
  }
  if ((DAT_200049fb == '\0') && (DAT_200049f7 == '\0')) {
    DAT_20002fc3 = DAT_20002fc3 & 0xdf;
  }
  else {
    DAT_20002fc3 = DAT_20002fc3 | 0x20;
  }
  if (DAT_2000095c != 0) {
    DAT_2000095c = DAT_2000095c + -1;
  }
  if (DAT_2000095c == 0) {
    DAT_20002fc3 = DAT_20002fc3 & 0xbf;
  }
  else {
    DAT_20002fc3 = DAT_20002fc3 | 0x40;
  }
  if ((DAT_20004836 < 0x15) && (DAT_200049f6 < 0x15)) {
    DAT_20002f7e = DAT_20002f7e & 0xfbff;
    DAT_20002fc3 = DAT_20002fc3 & 0x7f;
  }
  else {
    DAT_20002f7e = DAT_20002f7e | 0x400;
    DAT_20002fc3 = DAT_20002fc3 | 0x80;
  }
  DAT_20002fc5 = 0x32 < DAT_2000483c;
  if (0x32 < DAT_200049fc) {
    DAT_20002fc5 = DAT_20002fc5 | 2;
  }
  if (((((DAT_200049c7 == '\0') && (DAT_200049c8 == '\0')) && (DAT_200049cb == '\0')) &&
      ((DAT_20004b87 == '\0' && (DAT_20004b88 == '\0')))) && (DAT_20004b8b == '\0')) {
    DAT_20002fc6 = '\0';
    DAT_20002fc3 = DAT_20002fc3 & 0xfe;
  }
  else {
    DAT_20002fc6 = '\x01';
    DAT_20002fc3 = DAT_20002fc3 | 1;
  }
  if ((((DAT_200049d4 & 0x3f) == 0 || (int)(DAT_200049d4 & 0x3f) < 0) && (DAT_200049d5 == '\0')) &&
     (((DAT_20004b94 & 0x3f) == 0 || (int)(DAT_20004b94 & 0x3f) < 0 &&
      ((DAT_20004b95 == '\0' && (DAT_20002fc6 == '\0')))))) {
    DAT_20002f7e = DAT_20002f7e & 0xfdff;
  }
  else {
    DAT_20002f7e = DAT_20002f7e | 0x200;
  }
  if (DAT_20000960 != 0) {
    if (2 < DAT_20000960) {
      return;
    }
    uVar10 = FUN_0801d20a(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_200049f0 = DAT_200049f0 + 1;
      FUN_08013964(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004bb0 = DAT_20004bb0 + 1;
      FUN_08013cbc(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
    }
    DAT_20000960 = DAT_20000960 + 1;
    return;
  }
  if ((&DAT_20004837)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_2000483b)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_0801fb2a(uVar7);
      if (iVar6 == 0) {
        (&DAT_2000483b)[uVar7 * 0x1c0] = (&DAT_2000483b)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_20000964 & 3) != 2) {
        DAT_20000964 = DAT_20000964 + 1;
        return;
      }
      uVar8 = (uint)(DAT_20004840 * 100) / ((uint)DAT_20000968 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004a00 * 100) / ((uint)DAT_20000968 * 0xc) & 0xff;
      DAT_20000964 = DAT_20000964 + 1;
      FUN_0801fe8a(uVar8,uVar9);
      DAT_20002fc4 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_20004838)[uVar7 * 0x1c0] != -0x50) || ((&DAT_20004839)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_20004837)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_20004837)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_0801d888(uVar7);
      }
      else {
        (&DAT_20004838)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_20004839)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801d89a(uVar7);
      }
      if (uVar9 == 0) {
        DAT_200049f0 = DAT_200049f0 + 1;
        FUN_08013964(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004bb0 = DAT_20004bb0 + 1;
        FUN_08013cbc(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_20004837)[uVar7 * 0x1c0] = (&DAT_20004837)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_20004837)[uVar7 * 0x1c0] = 0;
    (&DAT_2000483b)[uVar7 * 0x1c0] = 0x32;
    (&DAT_20004840)[uVar7 * 0x70] = 0;
    (&DAT_2000483d)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_20004835)[uVar7 * 0x1c0] == '\0') {
    (&DAT_20004836)[uVar7 * 0x1c0] = 0;
    (&DAT_2000483c)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_20004836)[uVar7 * 0x1c0] < 4) {
      (&DAT_20004836)[uVar7 * 0x1c0] = (&DAT_20004836)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_20004836)[uVar7 * 0x1c0] < 200) {
      (&DAT_20004836)[uVar7 * 0x1c0] = (&DAT_20004836)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_20000958 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_20004836)[uVar7 * 0x1c0]) {
      if ((DAT_20000958 & 0x3f) >> 1 == 0) {
        if ((&DAT_2000483c)[uVar7 * 0x1c0] != '\0') {
          (&DAT_2000483c)[uVar7 * 0x1c0] = (&DAT_2000483c)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_20004838)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_20004839)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801d8de(uVar7);
        if (uVar3 == 0) {
          DAT_200049f0 = DAT_200049f0 + 1;
          FUN_08013964(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004bb0 = DAT_20004bb0 + 1;
        FUN_08013cbc(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_20004838)[uVar7 * 0x1c0] == -0x45) && ((&DAT_20004839)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_2000483c)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_200049d6)[uVar7 * 0x1c0] == '\0') {
    (&DAT_20004844)[uVar7 * 0x1c0] = (&DAT_20004844)[uVar7 * 0x1c0] + '\x01';
    (&DAT_20004844)[uVar7 * 0x1c0] = (&DAT_20004844)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_20004844)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_20004835)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_0801d110(uVar7,0xc1,&DAT_20004834,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_20004835)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_0801d110(uVar7,0xc2,&DAT_20004834,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_20004835)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_0801d20a(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_20004835)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_20002fdf == '\x01') || (iVar6 = FUN_0800f7b8(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_0801d382(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_200049f0 = DAT_200049f0 + 1;
      FUN_08013964(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004bb0 = DAT_20004bb0 + 1;
      FUN_08013cbc(&DAT_20004845 + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_200049d6)[uVar7 * 0x1c0];
    (&DAT_200049d6)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_0801d52a(uVar7,0,uVar2,(&DAT_20004935)[uVar7 * 0x1c0],&DAT_2000491d + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_20004835)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_200049f0 = DAT_200049f0 + 1;
        FUN_08013964(&DAT_20004845 + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004bb0 = DAT_20004bb0 + 1;
        FUN_08013cbc(&DAT_20004845 + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x0801e0b0 : FUN_0801e0b0 */

uint FUN_0801e0b0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *extraout_r2;
  undefined1 *puVar6;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar7;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  bool bVar8;
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
  iVar3 = FUN_0801d792(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004835 = 1;
    iVar3 = FUN_0801d842(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004839 = *(undefined1 *)(local_c + 2);
        DAT_2000483a = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_0801fd32(0,local_30,local_2c);
      }
      else {
        DAT_20004839 = *(undefined1 *)(local_c + 2);
        DAT_2000483a = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_200049f2 = DAT_200049f2 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801d6f4(local_30,local_2c);
  uVar4 = (uint)DAT_20004835;
  if (uVar4 == 0xd1) goto LAB_0801e7bc;
  if (uVar4 < 0xd2) {
    if (uVar4 == 0xb6) goto LAB_0801e7c6;
    if (0xb6 < uVar4) {
      if (uVar4 == 0xbc) {
code_r0x0801e934:
        if (local_10 != 0x25) {
          DAT_20004835 = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_20004835 = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_20004835 = 0;
          return local_2c;
        }
        if (local_1c != 0) {
          DAT_20004835 = 0;
          return local_2c;
        }
        if (local_20[0] != 0xc) {
          DAT_20004835 = 0;
          return local_2c;
        }
        local_1c = 0;
        puVar6 = extraout_r2;
        uVar7 = extraout_r3;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801d6f4(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar6,uVar7,
                               uVar1);
          puVar6 = auStack_4c;
          puVar6[local_50] = uVar1;
          uVar7 = extraout_r3_01;
        }
        FUN_08022084(0,DAT_20004835,auStack_4c);
        DAT_20004835 = 0;
        return local_2c;
      }
      if (uVar4 < 0xbd) {
        uVar5 = uVar4 - 0xb7;
        bVar8 = true;
        switch(uVar5) {
        case 0:
        case 2:
        case 4:
          if (((local_10 == 0x25) && (local_14 == 0xf)) &&
             ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
            local_2c = (uint)DAT_20004835;
            FUN_08022022(0,local_2c,1);
            DAT_20004835 = 0;
            return local_2c;
          }
          local_2c = (uint)DAT_20004835;
          FUN_08022022(0,local_2c);
          DAT_20004835 = 0;
          return local_2c;
        case 1:
          if (local_10 != 0x25) {
            DAT_20004835 = 0;
            return local_2c;
          }
          if (local_14 != 0xf) {
            DAT_20004835 = 0;
            return local_2c;
          }
          if (local_18 != 0x46) {
            DAT_20004835 = 0;
            return local_2c;
          }
          if (local_1c != 0) {
            DAT_20004835 = 0;
            return local_2c;
          }
          if (local_20[0] != 2) {
            DAT_20004835 = 0;
            return local_2c;
          }
          local_1c = 0;
          bVar8 = false;
          puVar6 = extraout_r2;
          uVar7 = extraout_r3;
          while (!bVar8) {
            auStack_4c[0] =
                 FUN_0801d6f4(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar6,
                              uVar7,*(undefined1 *)(local_c + 0xd));
            puVar6 = auStack_4c;
            uVar7 = extraout_r3_02;
            bVar8 = true;
          }
          FUN_08022084(0,DAT_20004835,auStack_4c);
          DAT_20004835 = 0;
          return local_2c;
        case 3:
          goto code_r0x0801e934;
        default:
          goto switchD_0801e1dc_default;
        }
      }
      if (uVar4 == 0xc2) {
        if (local_20[0] == 0x28) {
          for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
            local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
            local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
            uVar1 = FUN_0801d6f4(local_34,local_30);
            (&DAT_200049d7)[local_2c] = uVar1;
          }
          DAT_20004835 = 0;
          return local_2c;
        }
        return 0;
      }
      if (uVar4 < 0xc3) {
        if (uVar4 == 0xbd) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0)))) {
            local_2c = (uint)DAT_20004835;
            FUN_08020290(0,local_2c,1);
            DAT_20004835 = 0;
            return local_2c;
          }
          local_2c = (uint)DAT_20004835;
          FUN_08020290(0,local_2c);
          DAT_20004835 = 0;
          return local_2c;
        }
        bVar8 = false;
        if (uVar4 == 0xc1) {
          if (local_20[0] == 0x28) {
            for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
              local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
              local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
              uVar1 = FUN_0801d6f4(local_34,local_30);
              (&DAT_20004905)[local_2c] = uVar1;
            }
            DAT_20004835 = 0;
            return local_2c;
          }
          return 0;
        }
LAB_0801e1a8:
        if (!bVar8) {
          DAT_20004835 = 0;
          return local_2c;
        }
        if (local_20[0] == 0x76) {
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801d6f4(local_40,local_3c);
          DAT_2000499c = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_2000499e)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_0801d6f4(local_40,local_3c);
          DAT_2000499d = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_200049bc)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_200049c4 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_200049c5 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_200049c6 = FUN_0801d6f4(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_200049c7)[local_3c] = uVar1;
          }
          DAT_200049ce = FUN_0801d766(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_200049d4 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_200049d5 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_200049cc = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_200049d2 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_200049d3 = FUN_0801d6f4(local_40,local_3c);
          DAT_200049d0 = FUN_0801d766(local_c + 0x7f);
          DAT_20004835 = 0;
          return local_2c;
        }
        return 0;
      }
      if (uVar4 == 0xc3) {
        if (((local_10 == 0x25) && (local_14 == 0xf)) &&
           ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
          local_2c = (uint)DAT_20004835;
          FUN_080203b4(0,local_2c,1);
          DAT_20004835 = 0;
          return local_2c;
        }
        local_2c = (uint)DAT_20004835;
        FUN_080203b4(0,local_2c);
        DAT_20004835 = 0;
        return local_2c;
      }
      bVar8 = uVar4 == 0xd0;
      if (!bVar8) goto LAB_0801e1a8;
      goto LAB_0801e6f6;
    }
    if (uVar4 != 0xae) {
      if (0xae < uVar4) {
        uVar5 = uVar4 - 0xaf;
        bVar8 = 6 < uVar5;
        goto switchD_0801e1dc_default;
      }
      if (uVar4 == 0xa0) goto LAB_0801e7da;
      if (uVar4 < 0xa1) {
        if (uVar4 == 0x42) {
          if (local_20[0] == 0xba) {
            local_3c = (uint)*(byte *)(local_c + 0xe);
            local_40 = (uint)*(byte *)(local_c + 0xd);
            local_2c = FUN_0801d6f4(local_40,local_3c);
            local_3c = (uint)*(byte *)(local_c + 0x10);
            local_40 = (uint)*(byte *)(local_c + 0xf);
            local_30 = FUN_0801d6f4(local_40,local_3c);
            local_3c = (uint)*(byte *)(local_c + 0x12);
            local_40 = (uint)*(byte *)(local_c + 0x11);
            local_34 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004937 = (undefined1)local_34;
            for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
              local_40 = local_c + local_3c * 4 + 0x13;
              uVar2 = FUN_0801d766();
              (&DAT_20004938)[local_3c] = uVar2;
            }
            local_3c = (uint)*(byte *)(local_c + 0x8c);
            local_40 = (uint)*(byte *)(local_c + 0x8b);
            local_38 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004978 = (undefined1)local_38;
            for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
              local_40 = local_3c * 4 + 0x8d + local_c;
              uVar2 = FUN_0801d766();
              (&DAT_2000497a)[local_3c] = uVar2;
            }
            DAT_2000498e = FUN_0801d766(local_c + 0xad);
            DAT_20004990 = FUN_0801d766(local_c + 0xb1);
            DAT_20004992 = FUN_0801d766(local_c + 0xb5);
            local_3c = (uint)*(byte *)(local_c + 0xba);
            local_40 = (uint)*(byte *)(local_c + 0xb9);
            DAT_20004994 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004996 = FUN_0801d766(local_c + 0xbb);
            DAT_20004998 = FUN_0801d766(local_c + 0xbf);
            DAT_2000499a = FUN_0801d766(local_c + 0xc3);
            DAT_20004835 = 0;
            return local_2c;
          }
          return 0;
        }
        bVar8 = uVar4 == 0x44;
        goto LAB_0801e1a8;
      }
      if (uVar4 == 0xa1) {
        if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
           ((local_1c == 0 && (local_20[0] == 0x60)))) {
          local_1c = 0;
          puVar6 = extraout_r2;
          uVar7 = extraout_r3;
          for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
            uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
            uVar1 = FUN_0801d6f4(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar6,uVar7,
                                 uVar1);
            puVar6 = auStack_4c;
            puVar6[local_50] = uVar1;
            uVar7 = extraout_r3_00;
          }
          FUN_08022084(0,DAT_20004835,auStack_4c);
          DAT_20004835 = 0;
          return local_2c;
        }
        FUN_08022022(0,DAT_20004835);
        DAT_20004835 = 0;
        return local_2c;
      }
      bVar8 = uVar4 == 0xa8;
      if (!bVar8) goto LAB_0801e1a8;
      goto LAB_0801e714;
    }
    goto LAB_0801e70a;
  }
  uVar5 = uVar4 - 0xd2;
  bVar8 = true;
  switch(uVar4) {
  case 0xd2:
    goto LAB_0801e6ec;
  case 0xd3:
    goto LAB_0801e7b2;
  case 0xd4:
    goto LAB_0801e6e2;
  case 0xd5:
    goto LAB_0801e7a8;
  case 0xd6:
    goto LAB_0801e6d8;
  case 0xd7:
    goto LAB_0801e79e;
  case 0xd8:
    goto LAB_0801e6ce;
  case 0xd9:
    goto LAB_0801e794;
  case 0xda:
    goto LAB_0801e6c4;
  case 0xdb:
    goto LAB_0801e78a;
  case 0xdc:
    goto LAB_0801e6ba;
  case 0xdd:
    goto LAB_0801e780;
  case 0xde:
    goto LAB_0801e6b0;
  case 0xdf:
    goto LAB_0801e776;
  case 0xe0:
    goto LAB_0801e6a6;
  case 0xe1:
    goto LAB_0801e76c;
  case 0xe2:
    goto LAB_0801e69c;
  case 0xe3:
    goto LAB_0801e762;
  case 0xe4:
    break;
  case 0xe5:
    goto LAB_0801e758;
  case 0xe6:
    local_28 = local_28 + 1 & 0xffff;
    break;
  case 0xe7:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e758:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e762:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e76c:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e776:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e780:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e78a:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e794:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e79e:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e7a8:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e7b2:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e7bc:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801e7c6:
    local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801e7da:
    local_2c = (uint)(byte)(&DAT_200056f7)[local_28 * 0x11];
    if (local_10 != 0x25) {
      DAT_20004835 = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_20004835 = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_20004835 = 0;
      return local_2c;
    }
    if (local_1c != 0) {
      DAT_20004835 = 0;
      return local_2c;
    }
    if ((uint)local_20[0] != local_2c * 2) {
      DAT_20004835 = 0;
      return local_2c;
    }
    local_1c = 0;
    for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
      local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
      local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
      uVar1 = FUN_0801d6f4(local_48,local_44);
      *(undefined1 *)((int)&local_3c + local_40) = uVar1;
    }
    local_40 = local_28 & 0xff;
    FUN_08021c4e(0,local_40,&local_3c);
    DAT_20004835 = 0;
    return local_2c;
  default:
switchD_0801e1dc_default:
    if (bVar8) {
      DAT_20004835 = 0;
      return local_2c;
    }
                    /* WARNING: Could not recover jumptable at 0x0801e1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_0801e1c0 + (uint)*(ushort *)(&DAT_0801e1c0 + uVar5 * 2) * 2))();
    return uVar4;
  }
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e69c:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6a6:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6b0:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6ba:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6c4:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6ce:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6d8:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6e2:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6ec:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e6f6:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801e70a:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801e714:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08021bba(0,local_2c,1);
  }
  else {
    local_2c = local_28 & 0xff;
    FUN_08021bba(0,local_2c);
  }
  DAT_20004835 = 0;
  return local_2c;
}



/* ENTRY 0x0801ea9c : FUN_0801ea9c */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801ea9c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
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
  iVar3 = FUN_0801d792(local_20,param_1);
  if (iVar3 == 0) {
    DAT_200049f5 = 1;
    iVar3 = FUN_0801d842(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_200049f9 = *(undefined1 *)(local_c + 2);
        DAT_200049fa = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_0801fd32(1,local_30,local_2c);
      }
      else {
        DAT_200049f9 = *(undefined1 *)(local_c + 2);
        DAT_200049fa = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004bb2 = DAT_20004bb2 + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801d6f4(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801d6f4(local_30,local_2c);
  uVar4 = (uint)DAT_200049f5;
  if (uVar4 == 0xd1) goto LAB_0801f1e4;
  if (uVar4 < 0xd2) {
    if (uVar4 == 0xb6) goto LAB_0801f1ee;
    if (0xb6 < uVar4) {
      if (uVar4 == 0xbc) {
code_r0x0801f354:
        if (local_10 != 0x25) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        if (local_14 != 0xf) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        if (local_18 != 0x46) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        if (local_1c != 0) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        if (local_20[0] != 0xc) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        local_1c = 0;
        for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
          local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
          local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
          uVar1 = FUN_0801d6f4(local_58,local_54);
          auStack_4c[local_50] = uVar1;
        }
        local_50 = (uint)DAT_200049f5;
        FUN_08022084(1,local_50,auStack_4c);
        DAT_200049f5 = 0;
        return local_2c;
      }
      if (uVar4 < 0xbd) {
        uVar5 = uVar4 - 0xb7;
        bVar6 = true;
        switch(uVar5) {
        case 0:
        case 2:
        case 4:
          if (((local_10 == 0x25) && (local_14 == 0xf)) &&
             ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
            local_2c = (uint)DAT_200049f5;
            FUN_08022022(1,local_2c);
            DAT_200049f5 = 0;
            return local_2c;
          }
          local_2c = (uint)DAT_200049f5;
          FUN_08022022(1,local_2c,0);
          DAT_200049f5 = 0;
          return local_2c;
        case 1:
          if (local_10 != 0x25) {
            DAT_200049f5 = 0;
            return local_2c;
          }
          if (local_14 != 0xf) {
            DAT_200049f5 = 0;
            return local_2c;
          }
          if (local_18 != 0x46) {
            DAT_200049f5 = 0;
            return local_2c;
          }
          if (local_1c != 0) {
            DAT_200049f5 = 0;
            return local_2c;
          }
          if (local_20[0] != 2) {
            DAT_200049f5 = 0;
            return local_2c;
          }
          local_1c = 0;
          for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
            local_54 = (uint)*(byte *)(local_c + 0xe);
            local_58 = (uint)*(byte *)(local_c + 0xd);
            uVar1 = FUN_0801d6f4(local_58,local_54);
            auStack_4c[local_50] = uVar1;
          }
          local_50 = (uint)DAT_200049f5;
          FUN_08022084(1,local_50,auStack_4c);
          DAT_200049f5 = 0;
          return local_2c;
        case 3:
          goto code_r0x0801f354;
        default:
          goto switchD_0801ebda_default;
        }
      }
      if (uVar4 == 0xc2) {
        if (local_20[0] == 0x28) {
          for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
            local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
            local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
            uVar1 = FUN_0801d6f4(local_34,local_30);
            (&DAT_20004b97)[local_2c] = uVar1;
          }
          DAT_200049f5 = 0;
          return local_2c;
        }
        return 0;
      }
      if (uVar4 < 0xc3) {
        if (uVar4 == 0xbd) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0)))) {
            local_2c = (uint)DAT_200049f5;
            FUN_08020290(1,local_2c);
            DAT_200049f5 = 0;
            return local_2c;
          }
          local_2c = (uint)DAT_200049f5;
          FUN_08020290(1,local_2c,0);
          DAT_200049f5 = 0;
          return local_2c;
        }
        bVar6 = false;
        if (uVar4 == 0xc1) {
          if (local_20[0] == 0x28) {
            for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
              local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
              local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
              uVar1 = FUN_0801d6f4(local_34,local_30);
              (&DAT_20004ac5)[local_2c] = uVar1;
            }
            DAT_200049f5 = 0;
            return local_2c;
          }
          return 0;
        }
LAB_0801eba6:
        if (!bVar6) {
          DAT_200049f5 = 0;
          return local_2c;
        }
        if (local_20[0] == 0x76) {
          local_3c = (uint)*(byte *)(local_c + 0xe);
          local_40 = (uint)*(byte *)(local_c + 0xd);
          local_2c = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x10);
          local_40 = (uint)*(byte *)(local_c + 0xf);
          local_30 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x12);
          local_40 = (uint)*(byte *)(local_c + 0x11);
          local_34 = FUN_0801d6f4(local_40,local_3c);
          DAT_20004b5c = (undefined1)local_34;
          for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_20004b5e)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x50);
          local_40 = (uint)*(byte *)(local_c + 0x4f);
          local_38 = FUN_0801d6f4(local_40,local_3c);
          DAT_20004b5d = (undefined1)local_38;
          for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_20004b7c)[local_3c] = uVar1;
          }
          local_3c = (uint)*(byte *)(local_c + 0x62);
          local_40 = (uint)*(byte *)(local_c + 0x61);
          DAT_20004b84 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 100);
          local_40 = (uint)*(byte *)(local_c + 99);
          DAT_20004b85 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x66);
          local_40 = (uint)*(byte *)(local_c + 0x65);
          DAT_20004b86 = FUN_0801d6f4(local_40,local_3c);
          for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
            local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
            local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
            uVar1 = FUN_0801d6f4(local_44,local_40);
            (&DAT_20004b87)[local_3c] = uVar1;
          }
          DAT_20004b8e = FUN_0801d766(local_c + 0x71);
          local_3c = (uint)*(byte *)(local_c + 0x76);
          local_40 = (uint)*(byte *)(local_c + 0x75);
          DAT_20004b94 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x78);
          local_40 = (uint)*(byte *)(local_c + 0x77);
          DAT_20004b95 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7a);
          local_40 = (uint)*(byte *)(local_c + 0x79);
          DAT_20004b8c = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7c);
          local_40 = (uint)*(byte *)(local_c + 0x7b);
          DAT_20004b92 = FUN_0801d6f4(local_40,local_3c);
          local_3c = (uint)*(byte *)(local_c + 0x7e);
          local_40 = (uint)*(byte *)(local_c + 0x7d);
          DAT_20004b93 = FUN_0801d6f4(local_40,local_3c);
          DAT_20004b90 = FUN_0801d766(local_c + 0x7f);
          DAT_200049f5 = 0;
          return local_2c;
        }
        return 0;
      }
      if (uVar4 == 0xc3) {
        if (((local_10 == 0x25) && (local_14 == 0xf)) &&
           ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
          local_2c = (uint)DAT_200049f5;
          FUN_080203b4(1,local_2c);
          DAT_200049f5 = 0;
          return local_2c;
        }
        local_2c = (uint)DAT_200049f5;
        FUN_080203b4(1,local_2c,0);
        DAT_200049f5 = 0;
        return local_2c;
      }
      bVar6 = uVar4 == 0xd0;
      if (!bVar6) goto LAB_0801eba6;
      goto LAB_0801f11e;
    }
    if (uVar4 != 0xae) {
      if (0xae < uVar4) {
        uVar5 = uVar4 - 0xaf;
        bVar6 = 6 < uVar5;
        goto switchD_0801ebda_default;
      }
      if (uVar4 == 0xa0) goto LAB_0801f202;
      if (uVar4 < 0xa1) {
        if (uVar4 == 0x42) {
          if (local_20[0] == 0xba) {
            local_3c = (uint)*(byte *)(local_c + 0xe);
            local_40 = (uint)*(byte *)(local_c + 0xd);
            local_2c = FUN_0801d6f4(local_40,local_3c);
            local_3c = (uint)*(byte *)(local_c + 0x10);
            local_40 = (uint)*(byte *)(local_c + 0xf);
            local_30 = FUN_0801d6f4(local_40,local_3c);
            local_3c = (uint)*(byte *)(local_c + 0x12);
            local_40 = (uint)*(byte *)(local_c + 0x11);
            local_34 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004af7 = (undefined1)local_34;
            for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
              local_40 = local_c + local_3c * 4 + 0x13;
              uVar2 = FUN_0801d766();
              (&DAT_20004af8)[local_3c] = uVar2;
            }
            local_3c = (uint)*(byte *)(local_c + 0x8c);
            local_40 = (uint)*(byte *)(local_c + 0x8b);
            local_38 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004b38 = (undefined1)local_38;
            for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
              local_40 = local_3c * 4 + 0x8d + local_c;
              uVar2 = FUN_0801d766();
              (&DAT_20004b3a)[local_3c] = uVar2;
            }
            DAT_20004b4e = FUN_0801d766(local_c + 0xad);
            DAT_20004b50 = FUN_0801d766(local_c + 0xb1);
            DAT_20004b52 = FUN_0801d766(local_c + 0xb5);
            local_3c = (uint)*(byte *)(local_c + 0xba);
            local_40 = (uint)*(byte *)(local_c + 0xb9);
            DAT_20004b54 = FUN_0801d6f4(local_40,local_3c);
            DAT_20004b56 = FUN_0801d766(local_c + 0xbb);
            DAT_20004b58 = FUN_0801d766(local_c + 0xbf);
            DAT_20004b5a = FUN_0801d766(local_c + 0xc3);
            DAT_200049f5 = 0;
            return local_2c;
          }
          return 0;
        }
        bVar6 = uVar4 == 0x44;
        goto LAB_0801eba6;
      }
      if (uVar4 == 0xa1) {
        if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
           ((local_1c == 0 && (local_20[0] == 0x60)))) {
          local_1c = 0;
          for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
            uVar1 = FUN_0801d6f4(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                 *(undefined1 *)(local_c + local_6c * 2 + 0xe));
            auStack_68[local_6c] = uVar1;
          }
          FUN_08022084(1,DAT_200049f5,auStack_68);
          DAT_200049f5 = 0;
          return local_2c;
        }
        FUN_08022022(1,DAT_200049f5,0);
        DAT_200049f5 = 0;
        return local_2c;
      }
      bVar6 = uVar4 == 0xa8;
      if (!bVar6) goto LAB_0801eba6;
      goto LAB_0801f13c;
    }
    goto LAB_0801f132;
  }
  uVar5 = uVar4 - 0xd2;
  bVar6 = true;
  switch(uVar4) {
  case 0xd2:
    goto LAB_0801f114;
  case 0xd3:
    goto LAB_0801f1da;
  case 0xd4:
    goto LAB_0801f10a;
  case 0xd5:
    goto LAB_0801f1d0;
  case 0xd6:
    goto LAB_0801f0f6;
  case 0xd7:
    goto LAB_0801f1c6;
  case 0xd8:
    goto LAB_0801f0ec;
  case 0xd9:
    goto LAB_0801f1bc;
  case 0xda:
    goto LAB_0801f0e2;
  case 0xdb:
    goto LAB_0801f1b2;
  case 0xdc:
    goto LAB_0801f0d8;
  case 0xdd:
    goto LAB_0801f1a8;
  case 0xde:
    goto LAB_0801f0ce;
  case 0xdf:
    goto LAB_0801f19e;
  case 0xe0:
    goto LAB_0801f0c4;
  case 0xe1:
    goto LAB_0801f194;
  case 0xe2:
    goto LAB_0801f0ba;
  case 0xe3:
    goto LAB_0801f18a;
  case 0xe4:
    break;
  case 0xe5:
    goto LAB_0801f180;
  case 0xe6:
    local_28 = local_28 + 1 & 0xffff;
    break;
  case 0xe7:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f180:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f18a:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f194:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f19e:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1a8:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1b2:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1bc:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1c6:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1d0:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1da:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1e4:
    local_28 = local_28 + 1 & 0xffff;
LAB_0801f1ee:
    local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801f202:
    local_2c = (uint)(byte)(&DAT_200057f6)[local_28 * 0x11];
    if (local_10 != 0x25) {
      DAT_200049f5 = 0;
      return local_2c;
    }
    if (local_14 != 0xf) {
      DAT_200049f5 = 0;
      return local_2c;
    }
    if (local_18 != 0x46) {
      DAT_200049f5 = 0;
      return local_2c;
    }
    if (local_1c != 0) {
      DAT_200049f5 = 0;
      return local_2c;
    }
    if ((uint)local_20[0] != local_2c * 2) {
      DAT_200049f5 = 0;
      return local_2c;
    }
    local_1c = 0;
    for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
      local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
      local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
      uVar1 = FUN_0801d6f4(local_48,local_44);
      *(undefined1 *)((int)&local_3c + local_40) = uVar1;
    }
    local_40 = local_28 & 0xff;
    FUN_08021c4e(1,local_40,&local_3c);
    DAT_200049f5 = 0;
    return local_2c;
  default:
switchD_0801ebda_default:
    if (bVar6) {
      DAT_200049f5 = 0;
      return local_2c;
    }
                    /* WARNING: Could not recover jumptable at 0x0801ebba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_0801ebbe + (uint)*(ushort *)(&DAT_0801ebbe + uVar5 * 2) * 2))();
    return uVar4;
  }
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0ba:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0c4:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0ce:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0d8:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0e2:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0ec:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0f6:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f10a:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f114:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f11e:
  local_28 = (local_28 + 1 & 0xffff) + 1 & 0xffff;
LAB_0801f132:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f13c:
  if (((local_10 == 0x25) && (local_14 == 0xf)) && ((local_18 == 0x46 && (local_1c == 0)))) {
    local_2c = local_28 & 0xff;
    FUN_08021bba(1,local_2c);
  }
  else {
    local_2c = local_28 & 0xff;
    FUN_08021bba(1,local_2c,0);
  }
  DAT_200049f5 = 0;
  return local_2c;
}



/* ENTRY 0x0801f500 : FUN_0801f500 */

bool FUN_0801f500(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0801d6f4(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  uVar2 = FUN_0801d6f4(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  return (~((uVar1 & 0xf) + ((int)uVar2 >> 4) + (uVar2 & 0xf)) + 1 & 0xf) == (int)uVar1 >> 4;
}



/* ENTRY 0x0801f54e : FUN_0801f54e */

bool FUN_0801f54e(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 0;
  uVar4 = FUN_0801d6f4(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  iVar5 = FUN_0801d6f4(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  uVar4 = iVar5 + (uVar4 & 0xff) * 0x100 & 0xfff;
  for (uVar6 = 1; uVar6 <= uVar4 + 0xc; uVar6 = uVar6 + 1 & 0xffff) {
    uVar1 = *(byte *)(param_1 + uVar6) + uVar1;
  }
  sVar2 = FUN_0801d6f4(*(undefined1 *)(param_1 + uVar4 + 0xd),*(undefined1 *)(param_1 + uVar4 + 0xe)
                      );
  sVar3 = FUN_0801d6f4(*(undefined1 *)(param_1 + uVar4 + 0xf),
                       *(undefined1 *)(param_1 + uVar4 + 0x10));
  return (ushort)(~uVar1 + 1) == (ushort)(sVar3 + sVar2 * 0x100);
}



/* ENTRY 0x0801f5d6 : FUN_0801f5d6 */

void FUN_0801f5d6(void)

{
  DAT_20004835 = 0;
  DAT_200049f5 = 0;
  FUN_08021b40();
  FUN_08013678(0x2580);
  FUN_080139d8(0x2580);
  return;
}



/* ENTRY 0x0801f604 : FUN_0801f604 */

uint FUN_0801f604(void)

{
  uint uVar1;
  
  if ((DAT_20004836 == '\0') && (DAT_200049f6 == '\0')) {
    uVar1 = ((((uint)DAT_20004992 * 0x32) / (uint)DAT_20004996 +
             ((uint)DAT_20004b52 * 0x32) / (uint)DAT_20004b56) * 7) / 100;
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



/* ENTRY 0x0801f664 : FUN_0801f664 */

void FUN_0801f664(int param_1)

{
  (&DAT_20004838)[param_1 * 0x1c0] = 0x61;
  (&DAT_20004839)[param_1 * 0x1c0] = 0;
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 0x61;
  (&DAT_20004848)[param_1 * 0x1c0] = 0;
  (&DAT_20004849)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_200049f0 = DAT_200049f0 + 1;
    FUN_08013964(&DAT_20004845,5);
  }
  else {
    DAT_20004bb0 = DAT_20004bb0 + 1;
    FUN_08013cbc(&DAT_20004845 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x0801f708 : FUN_0801f708 */

void FUN_0801f708(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)DAT_20000968 * 3;
  bVar2 = 0;
  (&DAT_20004838)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004839)[param_1 * 0x1c0] = 0;
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004848)[param_1 * 0x1c0] = 4;
  (&DAT_20004849)[param_1 * 0x1c0] = 0;
  (&DAT_2000484a)[param_1 * 0x1c0] = (char)(uVar1 >> 0xe);
  (&DAT_2000484b)[param_1 * 0x1c0] = (char)(uVar1 >> 6);
  (&DAT_2000484c)[param_1 * 0x1c0] = (char)uVar1 * '\x04';
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_20004845)[uVar1 + param_1 * 0x1c0];
  }
  (&DAT_2000484d)[param_1 * 0x1c0] = bVar2;
  if (param_1 == 0) {
    DAT_200049f0 = DAT_200049f0 + 1;
    FUN_08013964(&DAT_20004845,9);
  }
  else {
    DAT_20004bb0 = DAT_20004bb0 + 1;
    FUN_08013cbc(&DAT_20004845 + param_1 * 0x1c0,9);
  }
  return;
}



/* ENTRY 0x0801f802 : FUN_0801f802 */

void FUN_0801f802(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_2000096c;
  uVar2 = (uint)DAT_20000968 * 3;
  bVar3 = 0;
  (&DAT_20004838)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004839)[param_1 * 0x1c0] = 0;
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 0x62;
  (&DAT_20004848)[param_1 * 0x1c0] = 6;
  (&DAT_20004849)[param_1 * 0x1c0] = 0;
  (&DAT_2000484a)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_2000484b)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_2000484c)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_2000484d)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_2000484e)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_20004845)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_2000484f)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_200049f0 = DAT_200049f0 + 1;
    FUN_08013964(&DAT_20004845,0xb);
  }
  else {
    DAT_20004bb0 = DAT_20004bb0 + 1;
    FUN_08013cbc(&DAT_20004845 + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x0801f91a : FUN_0801f91a */

void FUN_0801f91a(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_20000968 * 0xc - param_2;
  bVar2 = 0;
  if (uVar3 < 0x80) {
    uVar3 = uVar3 + 4 & 0xff;
  }
  else {
    uVar3 = 0x84;
  }
  (&DAT_20004838)[param_1 * 0x1c0] = 99;
  (&DAT_20004839)[param_1 * 0x1c0] = 0;
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 99;
  (&DAT_20004848)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_20004849)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_2000484a)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_2000484b)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_2000484c)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_20004845)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_2000484d)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8028008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_2000484d)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_20004849)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_200049f0 = DAT_200049f0 + 1;
    FUN_08013964(&DAT_20004845,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004bb0 = DAT_20004bb0 + 1;
    FUN_08013cbc(&DAT_20004845 + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x0801fa86 : FUN_0801fa86 */

void FUN_0801fa86(int param_1)

{
  (&DAT_20004838)[param_1 * 0x1c0] = 100;
  (&DAT_20004839)[param_1 * 0x1c0] = 0;
  (&DAT_20004845)[param_1 * 0x1c0] = 0xaa;
  (&DAT_20004846)[param_1 * 0x1c0] = 0x55;
  (&DAT_20004847)[param_1 * 0x1c0] = 100;
  (&DAT_20004848)[param_1 * 0x1c0] = 0;
  (&DAT_20004849)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_200049f0 = DAT_200049f0 + 1;
    FUN_08013964(&DAT_20004845,5);
  }
  else {
    DAT_20004bb0 = DAT_20004bb0 + 1;
    FUN_08013cbc(&DAT_20004845 + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x0801fb2a : FUN_0801fb2a */

byte FUN_0801fb2a(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_2000483d)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_2000483a)[param_1 * 0x1c0] == '\0') && ((&DAT_20004839)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_20000968 * 0xc < (&DAT_20004840)[param_1 * 0x70] + 0x80) {
        (&DAT_2000483d)[param_1 * 0x1c0] = 100;
        FUN_0801fa86(param_1);
        return 1;
      }
      (&DAT_2000483d)[param_1 * 0x1c0] = 99;
      (&DAT_20004840)[param_1 * 0x70] = (&DAT_20004840)[param_1 * 0x70] + 0x80;
      FUN_0801f91a(param_1,(&DAT_20004840)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_2000483d)[param_1 * 0x1c0] = 0x61;
    FUN_0801f664(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_2000483b)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_2000483d)[param_1 * 0x1c0] = 0x61;
      FUN_0801f664(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_2000483a)[param_1 * 0x1c0] == '\0') && ((&DAT_20004839)[param_1 * 0x1c0] == 'a')) {
        (&DAT_2000483d)[param_1 * 0x1c0] = 0x62;
        FUN_0801f802(param_1);
        return 1;
      }
      (&DAT_2000483d)[param_1 * 0x1c0] = 0x61;
      FUN_0801f664(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_2000483a)[param_1 * 0x1c0] == '\0') && ((&DAT_20004839)[param_1 * 0x1c0] == 'c')) {
        (&DAT_2000483d)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_2000483d)[param_1 * 0x1c0] = 0x61;
      FUN_0801f664(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_2000483a)[param_1 * 0x1c0] == '\0') && ((&DAT_20004839)[param_1 * 0x1c0] == 'b')) {
      (&DAT_2000483d)[param_1 * 0x1c0] = 99;
      (&DAT_20004840)[param_1 * 0x70] = 0;
      FUN_0801f91a(param_1,(&DAT_20004840)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_2000483d)[param_1 * 0x1c0] = 0x61;
      FUN_0801f664(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x0801fd32 : FUN_0801fd32 */

void FUN_0801fd32(void)

{
  return;
}



/* ENTRY 0x0801fd40 : FUN_0801fd40 */

void FUN_0801fd40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_08022c98();
  FUN_08022b1c(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_20000970 = FUN_08022b28(&DAT_08028000 + uVar1 * 0x800);
  }
  FUN_08022b1c(0x34);
  DAT_20000970 = FUN_08022b8c(&DAT_08028000,param_1);
  DAT_20000970 = FUN_08022b8c(&DAT_08028004,param_2);
  FUN_08022b7c();
  return;
}



/* ENTRY 0x0801fd8e : FUN_0801fd8e */

void FUN_0801fd8e(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_08022c98();
  FUN_08022b1c(0x34);
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    DAT_20000970 = FUN_08022bc4(param_1 * 0xc + 0x8028008 + uVar1 * 4,
                                *(undefined4 *)(param_2 + uVar1 * 4));
  }
  FUN_08022b1c(0x34);
  FUN_08022b7c();
  return;
}



/* ENTRY 0x0801fdd0 : FUN_0801fdd0 */

short FUN_0801fdd0(byte *param_1,int param_2)

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



/* ENTRY 0x0801fdec : FUN_0801fdec */

void FUN_0801fdec(byte *param_1,int param_2)

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



/* ENTRY 0x0801fe30 : FUN_0801fe30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801fe30(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_20000968 = _DAT_08028000;
  DAT_2000096a = _DAT_08028004;
  if (_DAT_08028000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_0801fdec(0x8028008,(uint)_DAT_08028000 * 0xc);
    DAT_2000096c = FUN_0801fdd0(0x8028008,(uint)DAT_20000968 * 0xc);
    if (DAT_2000096a == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x0801fe8a : FUN_0801fe8a */

void FUN_0801fe8a(undefined1 param_1,undefined1 param_2)

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
  
  FUN_08022562(&local_24,0x14);
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
  uVar1 = FUN_0801fdec(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0801a064(&local_24);
  return;
}



/* ENTRY 0x0801feee : FUN_0801feee */

uint FUN_0801feee(int param_1)

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
  uVar2 = FUN_0801fdec(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if ((local_1a == *(char *)(param_1 + 0x12)) && (local_19 == *(char *)(param_1 + 0x13))) {
    DAT_2000095c = 0x14;
    local_2c[0] = 0xaa;
    local_2c[1] = 0x55;
    uVar3 = (uint)local_1b;
    if (uVar3 == 0x10) {
      DAT_2000096a = CONCAT11(local_2c[2],local_2c[3]);
      DAT_20000968 = local_1e;
      DAT_2000096e = 0;
      local_1c = 0x7a;
      local_1b = 0x10;
      FUN_0801fd40(local_1e,DAT_2000096a);
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 < 0x11) {
      if (((uVar3 != 0) && (uVar3 == 1)) && (uVar3 = FUN_0801fe30(), uVar3 == 1)) {
        FUN_0801d922(0);
        uVar3 = FUN_0801d922(1);
      }
    }
    else if (uVar3 == 0x11) {
      if (DAT_2000096e == local_1e) {
        uVar3 = (uint)DAT_2000096e;
        FUN_0801fd8e(DAT_2000096e,local_2c + 2);
        DAT_2000096e = DAT_2000096e + 1;
        DAT_20002fc4 = (undefined1)((uVar3 * 0x32) / (uint)DAT_20000968);
      }
      else if (DAT_2000096e == 0) {
        local_1e = 0;
      }
      else {
        local_1e = CONCAT11((char)(DAT_2000096e - 1 >> 8),(char)DAT_2000096e + -1);
      }
      local_1c = 0x7a;
      local_1b = 0x11;
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 == 0x12) {
      uVar4 = FUN_0801fdec(0x8028008,(uint)DAT_20000968 * 0xc);
      DAT_2000096c = FUN_0801fdd0(0x8028008,(uint)DAT_20000968 * 0xc);
      uVar3 = (uint)DAT_2000096a;
      if ((uVar3 == uVar4) && (uVar3 = (uint)DAT_20000968, 1000 < uVar3)) {
        local_2c[2] = (undefined1)(uVar4 >> 8);
        local_2c[3] = (undefined1)uVar4;
        local_1e = DAT_20000968;
        local_1c = 0x7a;
        local_1b = 0x12;
        bVar1 = true;
        FUN_0801d922(0);
        uVar3 = FUN_0801d922(1);
      }
    }
    if (bVar1) {
      uVar2 = FUN_0801fdec(local_2c + 2,0x10);
      local_1a = (char)((ushort)uVar2 >> 8);
      local_19 = (char)uVar2;
      uVar3 = FUN_08019cee(local_2c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08020124 : FUN_08020124 */

int FUN_08020124(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    (&DAT_20003d7e)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003d7f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003d80)[uVar2 * 0x14 + iVar1] = (&DAT_200049d7)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003d8e)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003d81)[uVar2 * 0x14 + iVar1] = (&DAT_200049d7)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_200008f9)[uVar2] = 0x14;
    DAT_200008f7 = (char)uVar2 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x080201dc : FUN_080201dc */

int FUN_080201dc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_200008f7 & 3;
  if (DAT_200008f6 == '\0') {
    (&DAT_20003d7e)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003d7f)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003d80)[uVar2 * 0x14 + iVar1] = (&DAT_20004905)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003d8e)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003d81)[uVar2 * 0x14 + iVar1] = (&DAT_20004905)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_200008f9)[uVar2] = 0x14;
    DAT_200008f7 = (char)uVar2 + 1U & 3;
    if (DAT_200008f7 == DAT_200008f8) {
      DAT_200008f6 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08020290 : FUN_08020290 */

void FUN_08020290(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) + 0x76;
  local_17 = param_2;
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  return;
}



/* ENTRY 0x080202f0 : FUN_080202f0 */

void FUN_080202f0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_2c [16];
  byte local_1c;
  char local_1b;
  
  for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
    local_2c[uVar2] = *(undefined1 *)(param_1 + uVar2);
  }
  uVar1 = FUN_0801fdec(local_2c + 2,0x10);
  if (((((char)((ushort)uVar1 >> 8) == *(char *)(param_1 + 0x12)) &&
       ((char)uVar1 == *(char *)(param_1 + 0x13))) && (uVar2 = local_1c & 1, local_1b == -0x43)) &&
     (((&DAT_200049ef)[uVar2 * 0x1c0] != '\0' && ((&DAT_200049d6)[uVar2 * 0x1c0] == '\0')))) {
    for (uVar3 = 0; uVar3 < 2; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_2000491d)[uVar3 + uVar2 * 0x1c0] = local_2c[uVar3 + 2];
    }
    (&DAT_20004935)[uVar2 * 0x1c0] = 2;
    (&DAT_200049d6)[uVar2 * 0x1c0] = 0xbd;
  }
  return;
}



/* ENTRY 0x080203b4 : FUN_080203b4 */

void FUN_080203b4(byte param_1,undefined4 param_2,undefined1 param_3)

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
  
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1f;
  local_17 = 0xc3;
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  return;
}



/* ENTRY 0x08020418 : FUN_08020418 */

void FUN_08020418(int param_1)

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
    FUN_08020124(uVar3);
  }
  else if (((&DAT_200049ef)[uVar3 * 0x1c0] != '\0') && ((&DAT_200049d6)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000491d)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000492b)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000492e)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004935)[uVar3 * 0x1c0] = 0x14;
    (&DAT_200049d6)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x080204e2 : FUN_080204e2 */

void FUN_080204e2(int param_1)

{
  FUN_080201dc(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x080204f6 : FUN_080204f6 */

void FUN_080204f6(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_20000971) {
  case '\0':
    local_10 = (int)DAT_20004944;
    local_14 = (uint)DAT_2000499a;
    local_8 = (uint)DAT_2000498e;
    local_c = (uint)DAT_20004990;
    FUN_08019d46(0xf1,0,local_c,local_8,(int)DAT_20004992,(int)DAT_20004996,(int)DAT_20004998);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004986;
    local_14 = (uint)DAT_20004984;
    local_8 = (uint)DAT_2000497c;
    local_c = (uint)DAT_2000497a;
    FUN_08019d46(0xf1,1,local_c,local_8,(int)DAT_2000497e,(int)DAT_20004980,(int)DAT_20004982);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004944;
    local_14 = (uint)DAT_20004942;
    local_8 = (uint)DAT_2000493a;
    local_c = (uint)DAT_20004938;
    FUN_08019d46(0xf1,2,local_c,local_8,(int)DAT_2000493c,(int)DAT_2000493e,(int)DAT_20004940);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004952;
    local_14 = (uint)DAT_20004950;
    local_8 = (uint)DAT_20004948;
    local_c = (uint)DAT_20004946;
    FUN_08019d46(0xf1,3,local_c,local_8,(int)DAT_2000494a,(int)DAT_2000494c,(int)DAT_2000494e);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004960;
    local_14 = (uint)DAT_2000495e;
    local_8 = (uint)DAT_20004956;
    local_c = (uint)DAT_20004954;
    FUN_08019d46(0xf1,4,local_c,local_8,(int)DAT_20004958,(int)DAT_2000495a,(int)DAT_2000495c);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_2000496e;
    local_14 = (uint)DAT_2000496c;
    local_8 = (uint)DAT_20004964;
    local_c = (uint)DAT_20004962;
    FUN_08019d46(0xf1,5,local_c,local_8,(int)DAT_20004966,(int)DAT_20004968,(int)DAT_2000496a);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004972;
    local_c = (uint)DAT_20004970;
    FUN_08019d46(0xf1,6,local_c,local_8,0,0,(int)DAT_20004988);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004b04;
    local_14 = (uint)DAT_20004b5a;
    local_8 = (uint)DAT_20004b4e;
    local_c = (uint)DAT_20004b50;
    FUN_08019d46(0xf2,0,local_c,local_8,(int)DAT_20004b52,(int)DAT_20004b56,(int)DAT_20004b58);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004b46;
    local_14 = (uint)DAT_20004b44;
    local_8 = (uint)DAT_20004b3c;
    local_c = (uint)DAT_20004b3a;
    FUN_08019d46(0xf2,1,local_c,local_8,(int)DAT_20004b3e,(int)DAT_20004b40,(int)DAT_20004b42);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004b04;
    local_14 = (uint)DAT_20004b02;
    local_8 = (uint)DAT_20004afa;
    local_c = (uint)DAT_20004af8;
    FUN_08019d46(0xf2,2,local_c,local_8,(int)DAT_20004afc,(int)DAT_20004afe,(int)DAT_20004b00);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004b12;
    local_14 = (uint)DAT_20004b10;
    local_8 = (uint)DAT_20004b08;
    local_c = (uint)DAT_20004b06;
    FUN_08019d46(0xf2,3,local_c,local_8,(int)DAT_20004b0a,(int)DAT_20004b0c,(int)DAT_20004b0e);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004b20;
    local_14 = (uint)DAT_20004b1e;
    local_8 = (uint)DAT_20004b16;
    local_c = (uint)DAT_20004b14;
    FUN_08019d46(0xf2,4,local_c,local_8,(int)DAT_20004b18,(int)DAT_20004b1a,(int)DAT_20004b1c);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004b2e;
    local_14 = (uint)DAT_20004b2c;
    local_8 = (uint)DAT_20004b24;
    local_c = (uint)DAT_20004b22;
    FUN_08019d46(0xf2,5,local_c,local_8,(int)DAT_20004b26,(int)DAT_20004b28,(int)DAT_20004b2a);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004b32;
    local_c = (uint)DAT_20004b30;
    FUN_08019d46(0xf2,6,local_c,local_8,0,0,(int)DAT_20004b48);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x0e':
    FUN_08019eac(0xf3,0,&DAT_2000499e);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x0f':
    FUN_08019eac(0xf3,1,&DAT_200049ac);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_200049bb,DAT_200049ba);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_200049c8,DAT_200049c7);
    local_10._0_3_ = CONCAT12(DAT_200049c9,(undefined2)local_10);
    local_10 = CONCAT13(DAT_200049ca,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_200049cb;
    local_c._0_3_ = CONCAT12((undefined1)DAT_200049ce,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_200049ce >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_200049d0);
    FUN_08019eac(0xf3,2,&local_14);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_200049bd,DAT_200049bc);
    local_14._0_3_ = CONCAT12(DAT_200049be,(ushort)local_14);
    local_14 = CONCAT13(DAT_200049bf,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_200049c1,DAT_200049c0);
    local_10._0_3_ = CONCAT12(DAT_200049c2,(undefined2)local_10);
    local_10 = CONCAT13(DAT_200049c3,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_200049c6,CONCAT11(DAT_200049c4,DAT_200049c5)) << 8;
    local_8._0_2_ = CONCAT11(DAT_200049d5,DAT_200049d4);
    FUN_08019eac(0xf3,3,&local_14);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x12':
    FUN_08019eac(0xf4,0,&DAT_20004b5e);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x13':
    FUN_08019eac(0xf4,1,&DAT_20004b6c);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004b7b,DAT_20004b7a);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004b88,DAT_20004b87);
    local_10._0_3_ = CONCAT12(DAT_20004b89,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b8a,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004b8b;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004b8e,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004b8e >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004b90);
    FUN_08019eac(0xf4,2,&local_14);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004b7d,DAT_20004b7c);
    local_14._0_3_ = CONCAT12(DAT_20004b7e,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004b7f,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004b81,DAT_20004b80);
    local_10._0_3_ = CONCAT12(DAT_20004b82,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b83,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004b86,CONCAT11(DAT_20004b84,DAT_20004b85)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004b95,DAT_20004b94);
    FUN_08019eac(0xf4,3,&local_14);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_2000483c;
    local_c = (uint)DAT_20004836;
    FUN_08019d46(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_20000971 = DAT_20000971 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200049fc;
    local_c = (uint)DAT_200049f6;
    FUN_08019d46(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_20000971 = '\0';
  }
  return;
}



/* ENTRY 0x08020da4 : FUN_08020da4 */

void FUN_08020da4(void)

{
  uint uVar1;
  
  DAT_2000547f = 0xff;
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004bbc)[uVar1 * 0x40] = 0xff;
  }
  return;
}



/* ENTRY 0x08020dc2 : FUN_08020dc2 */

void FUN_08020dc2(undefined1 param_1)

{
  DAT_200054b3 = param_1;
  return;
}



/* ENTRY 0x08020dca : FUN_08020dca */

void FUN_08020dca(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0800ab64();
    DAT_200053f4 = 0x1451090;
    DAT_200053fc = (undefined1)param_1;
    DAT_200053f8 = FUN_08023138();
    DAT_200053fd = diag_cartstep;
    DAT_200053fe = (undefined1)((uint)uVar1 >> 8);
    DAT_200053ff = (undefined1)uVar1;
    DAT_20005401 = diag_allwarnbit;
    DAT_20005400 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005406 = (undefined2)diag_TotalVoltage;
    DAT_20005408 = (undefined2)diag_TotalCurrent;
    DAT_2000540a = (undefined2)(diag_VehicleSpeed / 100);
    DAT_2000540c = (undefined2)diag_VectorVol;
    DAT_2000540e = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0800f758();
    DAT_20005410 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800f760();
    DAT_20005412 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800f768();
    DAT_20005414 = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005415 = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005418 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005416 = 0x82;
      }
      else {
        DAT_20005416 = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005416 = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005417 = 0x82;
      }
      else {
        DAT_20005417 = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005417 = 0x7f;
    }
    DAT_20005419 = 0;
    if (diag_hall_err < 0x100) {
      DAT_2000541a = (undefined1)diag_hall_err;
    }
    else {
      DAT_2000541a = 0xff;
    }
  }
  return;
}



/* ENTRY 0x08020f20 : FUN_08020f20 */

bool FUN_08020f20(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_080224d8(&DAT_200053b4,(uint)DAT_20000974 * 0x40 + 0x20004bb4,0x40);
    }
    (&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] != '\0') &&
       ((byte)(&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] < 0xfe)) {
      FUN_080224d8(&DAT_200053b4,(uint)DAT_20000974 * 0x40 + 0x20004bb4,0x40);
      bVar1 = true;
    }
    (&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] != '\0') &&
       ((byte)(&DAT_20004bbc)[(uint)DAT_20000974 * 0x40] < 0xfe)) {
      FUN_080224d8(&DAT_200053b4,(uint)DAT_20000974 * 0x40 + 0x20004bb4,0x40);
      bVar1 = true;
    }
    FUN_08020dca(param_1);
    FUN_080224d8((uint)DAT_20000974 * 0x40 + 0x20004bb4,&DAT_200053f4,0x40);
  }
  DAT_20000974 = DAT_20000974 + 1 & 0x1f;
  return bVar1;
}



/* ENTRY 0x0802100a : FUN_0802100a */

void FUN_0802100a(void)

{
  FUN_0801ce58(&DAT_200054b8,(((uint)(ushort)DAT_200054ad - (uint)DAT_200054b6) - 1 & 0x7fff) << 6,
               0x40);
  FUN_08019eac(0xf9,0x80,&DAT_200054bc);
  FUN_08019eac(0xf9,0x81,&DAT_200054ca);
  FUN_08019eac(0xf9,0x82,&DAT_200054d8);
  return;
}



/* ENTRY 0x08021050 : FUN_08021050 */

void FUN_08021050(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  char local_24 [4];
  ushort local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  char local_12;
  char local_11;
  
  for (uVar3 = 0; uVar3 < 0x14; uVar3 = uVar3 + 1 & 0xff) {
    local_24[uVar3] = *(char *)(param_1 + uVar3);
  }
  uVar2 = FUN_0801fdec(local_24 + 2,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x23) {
      if ((uint)local_1e <= (uint)local_20) {
        DAT_2000549d = (uint)local_20;
        DAT_200054a5 = (uint)local_1e;
      }
      DAT_200054b1 = 0x23;
    }
    else if (bVar1 < 0x24) {
      if (bVar1 == 1) {
        if (local_24[2] == '\x01') {
          FUN_0801c9b4(local_20,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        }
        else {
          local_24[2] = 0;
          local_20 = DAT_2000482c;
          local_1e = CONCAT11(DAT_2000482f,DAT_2000482e);
          local_1c = DAT_20004828;
          local_1b = DAT_20004829;
          local_1a = DAT_2000482a;
          uVar2 = FUN_0801fdec(local_24 + 2,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_08019cee(local_24);
        }
      }
      else if (bVar1 == 0x10) {
        FUN_0801c9b4(local_20,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a);
        DAT_20000976 = 0xa5;
      }
    }
    else if (bVar1 == 0x60) {
      DAT_200054b1 = 0x60;
    }
    else if (bVar1 == 0x61) {
      DAT_200054b1 = 0x61;
    }
  }
  return;
}



/* ENTRY 0x080211e6 : FUN_080211e6 */

void FUN_080211e6(void)

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
  
  if (DAT_200054b2 == '#') {
    local_1a = (undefined1)DAT_2000548d;
    local_19 = (undefined1)((ushort)(undefined2)DAT_2000548d >> 8);
    local_18 = (undefined1)DAT_2000549d;
    local_17 = (undefined1)((ushort)(undefined2)DAT_2000549d >> 8);
    local_16 = (undefined1)DAT_200054a5;
    local_15 = (undefined1)(DAT_200054a5 >> 8);
    local_14 = (undefined1)DAT_200054a1;
    local_13 = (undefined1)((uint)DAT_200054a1 >> 8);
    local_12 = (undefined1)((uint)DAT_200054a1 >> 0x10);
    local_11 = (undefined1)((uint)DAT_200054a1 >> 0x18);
    local_10 = (undefined1)DAT_200054a9;
    local_f = (undefined1)((uint)DAT_200054a9 >> 8);
    local_e = (undefined1)((uint)DAT_200054a9 >> 0x10);
    local_d = (undefined1)((uint)DAT_200054a9 >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_0801fdec(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_08019f4e(0xf9,0x23,&local_1a);
    DAT_200054b2 = '\0';
  }
  else if (DAT_200054b2 == 'a') {
    if (DAT_200054a5 < DAT_200054b6) {
      FUN_0802100a();
      DAT_200054b6 = DAT_200054b6 - 1;
    }
    else {
      FUN_0802100a();
      DAT_200054b2 = '\0';
    }
  }
  return;
}



/* ENTRY 0x08021308 : FUN_08021308 */

undefined4 FUN_08021308(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_0801cea2(uVar3 << 6);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0801cea2(*param_2 << 6);
    if (iVar1 == -1) {
      iVar1 = FUN_0801cea2(*param_1 << 6);
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



/* ENTRY 0x08021368 : FUN_08021368 */

void FUN_08021368(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_2000097c = DAT_2000097c + 1;
  if ((DAT_20005435 != '\0') && (DAT_20005435 = FUN_0801cf34(), DAT_20005435 != '\0')) {
    return;
  }
  if (DAT_20005434 == 0x22) {
LAB_08021aca:
    if (DAT_2000543b == 0) {
      DAT_20005434 = 0;
    }
    else {
      DAT_20005435 = '\x01';
      DAT_20005437 = (uint)DAT_2000543d << 0x10;
      FUN_0801cfd2(1,DAT_2000543d);
      DAT_2000543d = DAT_2000543d + 1;
      DAT_2000543b = DAT_2000543b + -1;
      DAT_20005434 = 0x25;
    }
  }
  else {
    if (DAT_20005434 < 0x23) {
      if (DAT_20005434 == 0) {
        if (DAT_2000547f == 0) {
          if (DAT_200054b1 == 0x60) {
            DAT_200054b2 = 0;
            DAT_200054b1 = 0;
          }
          else if (DAT_200054b1 == 0x61) {
            if (DAT_20005489 != 0) {
              DAT_200054b2 = 0x61;
            }
            DAT_200054b1 = 0;
          }
          if (DAT_200054b2 != 0) {
            return;
          }
          if ((DAT_200054b3 & 0xf0) == 0xe0) {
            iVar1 = FUN_08020f20(DAT_200054b3);
            if (iVar1 != 0) {
              DAT_2000547f = 0x30;
            }
            DAT_200054b3 = 0;
            DAT_200054b4 = ' ';
          }
          else if (DAT_200054b4 == '\0') {
            if (DAT_200054b3 == 0xf0) {
              iVar1 = FUN_08020f20(0xf0);
              if (iVar1 != 0) {
                DAT_2000547f = 0x30;
              }
              DAT_200054b3 = 0;
              DAT_200054b5 = ' ';
            }
            else if (DAT_200054b5 == '\0') {
              if (DAT_200054b3 == 0) {
                if (DAT_200054b1 == 0x23) {
                  DAT_2000547f = DAT_200054b1;
                }
                else if (DAT_20000976 == -0x5b) {
                  DAT_2000547f = 0x10;
                  DAT_20000976 = '\0';
                }
                else if ((DAT_2000097c % 0x32 == 0x2b) && (iVar1 = FUN_08020f20(0), iVar1 != 0)) {
                  DAT_2000547f = 0x30;
                }
              }
              else {
                iVar1 = FUN_08020f20(DAT_200054b3);
                if (iVar1 != 0) {
                  DAT_2000547f = 0x30;
                }
                DAT_200054b3 = 0;
              }
            }
            else {
              iVar1 = FUN_08020f20(0xfe);
              if (iVar1 != 0) {
                DAT_2000547f = 0x30;
              }
              DAT_200054b5 = DAT_200054b5 + -1;
            }
          }
          else {
            iVar1 = FUN_08020f20(0xff);
            if (iVar1 != 0) {
              DAT_2000547f = 0x30;
            }
            DAT_200054b4 = DAT_200054b4 + -1;
          }
        }
        if (DAT_2000547f == 0x22) {
          iVar1 = FUN_08021308(&DAT_20005481);
          if (iVar1 == 1) {
            DAT_200054ad = DAT_20005481;
            DAT_2000547f = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_200054ad = 0;
            DAT_20005436 = 0x22;
            DAT_2000547f = 0x23;
          }
          goto code_r0x0802198e;
        }
        if (DAT_2000547f < 0x23) {
          if (DAT_2000547f == 0x12) {
            DAT_2000543f = 0x1451090;
            DAT_2000543b = 4;
            DAT_2000543d = 0;
            DAT_20005437 = 0x200000;
            DAT_20005436 = 3;
            DAT_200054ad = 0;
            DAT_2000547f = 0x20;
            goto code_r0x0802198e;
          }
          if (0x12 < DAT_2000547f) {
            if (DAT_2000547f == 0x20) {
              DAT_20005481 = 0;
              DAT_20005485 = 0x3fff;
              DAT_2000547f = 0x21;
            }
            else {
              bVar2 = DAT_2000547f == 0x21;
              if (!bVar2) goto LAB_08021534;
            }
            iVar1 = FUN_08021308(&DAT_20005481);
            if (iVar1 == 1) {
              DAT_200054ad = DAT_20005481;
              DAT_2000547f = 0x23;
            }
            else if (iVar1 == 2) {
              DAT_20005481 = 0x4000;
              DAT_20005485 = 0x7fff;
              DAT_2000547f = 0x22;
            }
            goto code_r0x0802198e;
          }
          if (DAT_2000547f == 0) goto code_r0x0802198e;
          if (DAT_2000547f == 0x10) {
            DAT_20005436 = 0x22;
            DAT_2000547f = 0x11;
            goto code_r0x0802198e;
          }
          bVar2 = DAT_2000547f == 0x11;
        }
        else {
          if (DAT_2000547f == 0x31) {
            FUN_080224d8(&DAT_2000543f,&DAT_200053b4,0x40);
            DAT_2000543b = 0x40;
            DAT_2000543d = 0;
            DAT_20005437 = DAT_200054ad << 6;
            DAT_20005436 = 3;
            DAT_200054ad = DAT_200054ad + 1 & 0x7fff;
            DAT_2000547f = 0;
            goto code_r0x0802198e;
          }
          if (DAT_2000547f < 0x32) {
            if (DAT_2000547f == 0x23) {
              DAT_20005489 = 0x3ff8;
              DAT_2000548d = 0x3ff7;
              iVar1 = FUN_0801cea2(((DAT_200054ad & 0xffff) - 0x3ff8 & 0x7fff) << 6);
              if ((iVar1 == -1) && (DAT_200054ad <= DAT_2000548d)) {
                if (DAT_200054ad == 0) {
                  DAT_2000548d = 0;
                  DAT_20005489 = 0;
                }
                else {
                  DAT_2000548d = DAT_200054ad - 1;
                  DAT_20005489 = DAT_200054ad;
                }
              }
              if (DAT_20005489 == 0) {
                DAT_200054b1 = 0;
                DAT_2000547f = 0;
              }
              else {
                DAT_20005491 = FUN_0801cea2((((DAT_200054ad & 0xffff) - (DAT_2000548d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005495 = 0;
                DAT_20005499 = FUN_0801cea2(((DAT_200054ad & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
                if (DAT_2000549d == 0) {
                  DAT_2000549d = 0xfffe;
                }
                if (DAT_2000548d < DAT_2000549d) {
                  DAT_2000549d = DAT_2000548d;
                }
                DAT_200054a1 = FUN_0801cea2((((DAT_200054ad & 0xffff) - (DAT_2000549d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                if (DAT_2000549d < DAT_200054a5) {
                  DAT_200054a5 = DAT_2000549d;
                }
                DAT_200054a9 = FUN_0801cea2((((DAT_200054ad & 0xffff) - (DAT_200054a5 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_200054b6 = (ushort)DAT_2000549d;
                if (DAT_200054b1 == 0x23) {
                  DAT_200054b2 = DAT_200054b1;
                }
                DAT_200054b1 = 0;
                DAT_2000547f = 0;
              }
              goto code_r0x0802198e;
            }
            bVar2 = false;
            if (DAT_2000547f == 0x30) {
              if (DAT_200054ad == 0) {
                iVar1 = FUN_0801cea2(0);
                if (iVar1 == -1) {
                  FUN_080224d8(&DAT_2000543f,&DAT_200053b4,0x40);
                  DAT_2000543b = 0x40;
                  DAT_2000543d = 0;
                  DAT_20005437 = DAT_200054ad << 6;
                  DAT_20005436 = 3;
                  DAT_200054ad = DAT_200054ad + 1 & 0x7fff;
                  DAT_2000547f = 0;
                }
                else {
                  DAT_20005436 = 0x23;
                  DAT_2000547f = 0x31;
                }
              }
              else if (DAT_200054ad == 0x3fff) {
                DAT_20005436 = 0x24;
                DAT_2000547f = 0x31;
              }
              else if (DAT_200054ad == 0x4000) {
                iVar1 = FUN_0801cea2(0x100000);
                if (iVar1 == -1) {
                  FUN_080224d8(&DAT_2000543f,&DAT_200053b4,0x40);
                  DAT_2000543b = 0x40;
                  DAT_2000543d = 0;
                  DAT_20005437 = DAT_200054ad << 6;
                  DAT_20005436 = 3;
                  DAT_200054ad = DAT_200054ad + 1 & 0x7fff;
                  DAT_2000547f = 0;
                }
                else {
                  DAT_20005436 = 0x24;
                  DAT_2000547f = 0x31;
                }
              }
              else if (DAT_200054ad == 0x7fff) {
                DAT_20005436 = 0x23;
                DAT_2000547f = 0x31;
              }
              else {
                FUN_080224d8(&DAT_2000543f,&DAT_200053b4,0x40);
                DAT_2000543b = 0x40;
                DAT_2000543d = 0;
                DAT_20005437 = DAT_200054ad << 6;
                DAT_20005436 = 3;
                DAT_200054ad = DAT_200054ad + 1 & 0x7fff;
                DAT_2000547f = 0;
              }
              goto code_r0x0802198e;
            }
          }
          else {
            if (DAT_2000547f == 0x60) {
              FUN_0801ce58(&DAT_200054b8,(uint)DAT_200054b6 << 6,0x40);
              DAT_2000547f = 0;
              goto code_r0x0802198e;
            }
            bVar2 = false;
            if (DAT_2000547f == 0xff) {
              DAT_2000547f = 0x20;
              goto code_r0x0802198e;
            }
          }
        }
LAB_08021534:
        if (bVar2) {
          DAT_2000543d = 0x20;
          DAT_20005436 = 2;
          DAT_2000547f = 0x12;
        }
code_r0x0802198e:
        if (DAT_20005436 == 0x22) {
          DAT_20005435 = '\x01';
          DAT_2000543b = 0x20;
          DAT_2000543d = 0;
          DAT_20005437 = 0;
          FUN_0801cfd2(0,0);
          DAT_20005434 = 0x22;
        }
        else if (DAT_20005436 < 0x23) {
          if (DAT_20005436 == 1) {
            DAT_20005435 = '\x01';
            FUN_0801d010(0);
            DAT_20005434 = 1;
          }
          else if (DAT_20005436 == 2) {
            DAT_20005435 = '\x01';
            FUN_0801cfd2(0,DAT_2000543d);
            DAT_20005434 = 2;
          }
          else if (DAT_20005436 == 3) {
            DAT_20005435 = '\x01';
            FUN_0801cf40(&DAT_2000543f,DAT_20005437);
            DAT_20005434 = 0;
          }
        }
        else if (DAT_20005436 == 0x23) {
          DAT_20005435 = '\x01';
          DAT_2000543b = 0x10;
          DAT_2000543d = 0;
          DAT_20005437 = 0;
          FUN_0801cfd2(0,0);
          DAT_20005434 = 0x23;
        }
        else if (DAT_20005436 == 0x24) {
          DAT_20005435 = '\x01';
          DAT_2000543b = 0x10;
          DAT_2000543d = 0x10;
          DAT_20005437 = 0x100000;
          FUN_0801cfd2(0,0x10);
          DAT_20005434 = 0x24;
        }
        DAT_20005436 = 0;
        return;
      }
      if (DAT_20005434 == 1) {
        DAT_20005435 = 1;
        FUN_0801d010();
        DAT_20005434 = 0;
        return;
      }
      bVar2 = DAT_20005434 == 2;
    }
    else {
      if ((DAT_20005434 == 0x23) || (DAT_20005434 == 0x24)) goto LAB_08021aca;
      bVar2 = false;
      if (DAT_20005434 == 0x25) {
        DAT_20005435 = 1;
        FUN_0801cfd2(0,DAT_2000543d);
        DAT_20005434 = 0x24;
        return;
      }
    }
    if (bVar2) {
      DAT_20005435 = '\x01';
      FUN_0801cfd2(1,DAT_2000543d);
      DAT_20005434 = 0;
    }
  }
  return;
}



/* ENTRY 0x08021b40 : FUN_08021b40 */

void FUN_08021b40(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200054f8)[uVar1 * 0x11] = (&DAT_08026dd9)[uVar1];
    (&DAT_200054f9)[uVar1 * 0x11] = (&DAT_08026dbb)[uVar1];
    (&DAT_200056f6)[uVar1 * 0x11] = (&DAT_08026de8)[uVar1];
    (&DAT_200056f7)[uVar1 * 0x11] = (&DAT_08026dca)[uVar1];
    (&DAT_200055f7)[uVar1 * 0x11] = (&DAT_08026dd9)[uVar1];
    (&DAT_200055f8)[uVar1 * 0x11] = (&DAT_08026dbb)[uVar1];
    (&DAT_200057f5)[uVar1 * 0x11] = (&DAT_08026de8)[uVar1];
    (&DAT_200057f6)[uVar1 * 0x11] = (&DAT_08026dca)[uVar1];
  }
  return;
}



/* ENTRY 0x08021bba : FUN_08021bba */

void FUN_08021bba(int param_1,int param_2,int param_3)

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
    (&DAT_200054fa)[param_1 * 0xff + param_2 * 0x11] = 0;
  }
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_200054f9)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_200054f8)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  return;
}



/* ENTRY 0x08021c4e : FUN_08021c4e */

void FUN_08021c4e(int param_1,int param_2,int param_3)

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
  
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_200056f7)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x200056f9 + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_200056f6)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  (&DAT_200056f8)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x08021cf6 : FUN_08021cf6 */

void FUN_08021cf6(int param_1)

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
  uVar1 = FUN_0801fdec(local_30 + 2,0x10);
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
LAB_08021e74:
    uVar4 = uVar4 + 4;
LAB_08021e8c:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08021e92:
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
LAB_08021fb2:
        uVar4 = uVar4 + 1 & 0xff;
LAB_08021fb8:
        uVar4 = uVar4 + 1 & 0xff;
LAB_08021fbe:
        if ((&DAT_200049ef)[uVar5 * 0x1c0] == '\0') {
          return;
        }
        if ((&DAT_200049d6)[uVar5 * 0x1c0] != '\0') {
          return;
        }
        (&DAT_20004935)[uVar5 * 0x1c0] = 0;
        (&DAT_200049d6)[uVar5 * 0x1c0] = local_1f;
        (&DAT_200056f8)[uVar5 * 0xff + uVar4 * 0x11] = 1;
        return;
      default:
switchD_08021d96_default:
        if (bVar7) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x08021d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_08021d88 + (uint)(byte)(&UNK_08021d88)[uVar3] * 2))();
        return;
      }
      goto LAB_08021e74;
    }
    if (uVar2 == 0xd0) goto LAB_08021e8c;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_08021d96_default;
    }
    if (uVar2 != 0xae) {
      if (uVar2 < 0xaf) {
        if (uVar2 == 1) {
          uVar6 = 1;
          uVar2 = 0;
          do {
            if (5 < uVar2) {
code_r0x08021dd0:
              DAT_200049ef = uVar6;
              DAT_20004baf = uVar6;
              FUN_08022562(&local_44,0x14);
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
              uVar1 = FUN_0801fdec(&local_42,0x10);
              local_32 = (undefined1)((ushort)uVar1 >> 8);
              local_31 = (undefined1)uVar1;
              FUN_0801a064(&local_44);
              return;
            }
            if (local_30[uVar2 + 2] != (&DAT_08026dae)[uVar2]) {
              uVar6 = 0;
              goto code_r0x08021dd0;
            }
            uVar2 = uVar2 + 1 & 0xff;
          } while( true );
        }
        if (uVar2 == 0xa0) goto LAB_08021fbe;
        bVar7 = uVar2 == 0xa8;
LAB_08021d6c:
        if (!bVar7) {
          return;
        }
        goto LAB_08021e9e;
      }
      if (uVar2 == 0xaf) goto LAB_08021fb8;
      if (uVar2 != 0xb5) {
        bVar7 = false;
        if (uVar2 == 0xb6) goto LAB_08021fb2;
        goto LAB_08021d6c;
      }
      goto LAB_08021e92;
    }
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_08021e9e:
  if (((&DAT_200049ef)[uVar5 * 0x1c0] != '\0') && ((&DAT_200049d6)[uVar5 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < (byte)(&DAT_200054f9)[uVar5 * 0xff + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000491d)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004935)[uVar5 * 0x1c0] = (&DAT_200054f9)[uVar5 * 0xff + uVar4 * 0x11];
    (&DAT_200049d6)[uVar5 * 0x1c0] = local_1f;
    (&DAT_200054fa)[uVar5 * 0xff + uVar4 * 0x11] = 1;
  }
  return;
}



/* ENTRY 0x08022022 : FUN_08022022 */

void FUN_08022022(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1d;
  local_17 = param_2;
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  return;
}



/* ENTRY 0x08022084 : FUN_08022084 */

void FUN_08022084(byte param_1,int param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 auStack_26 [13];
  undefined1 local_19;
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  FUN_08022562(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  local_17 = (undefined1)param_2;
  if (param_2 == 0xb8) {
    bVar3 = false;
    while (!bVar3) {
      auStack_26[0] = *param_3;
      bVar3 = true;
    }
    local_18 = (param_1 & 1) - 0x1d;
    uVar1 = FUN_0801fdec(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801a0bc(&local_28);
    return;
  }
  if (param_2 < 0xb9) {
    if (param_2 == 0xa1) {
      for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
        auStack_26[uVar2] = param_3[uVar2];
      }
      local_19 = 1;
      local_18 = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_0801fdec(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a0bc(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        auStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      local_19 = 2;
      local_18 = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_0801fdec(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a0bc(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        auStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      local_19 = 3;
      local_18 = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_0801fdec(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a0bc(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if ((param_2 == 0xba) || (bVar3 = false, param_2 == 0xbc)) goto LAB_080221ac;
  if (!bVar3) {
    return;
  }
LAB_080221ac:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3[uVar2];
  }
  local_18 = (param_1 & 1) - 0x1d;
  uVar1 = FUN_0801fdec(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a0bc(&local_28);
  return;
}



/* ENTRY 0x0802223a : FUN_0802223a */

void FUN_0802223a(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_2c [16];
  byte local_1c;
  byte local_1b;
  char local_1a;
  char local_19;
  
  uVar5 = 0;
  bVar1 = false;
  for (uVar3 = 0; uVar3 < 0x14; uVar3 = uVar3 + 1 & 0xff) {
    local_2c[uVar3] = *(undefined1 *)(param_1 + uVar3);
  }
  uVar2 = FUN_0801fdec(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if (local_1a != *(char *)(param_1 + 0x12)) {
    return;
  }
  if ((char)uVar2 != *(char *)(param_1 + 0x13)) {
    return;
  }
  uVar3 = local_1c - 3 & 1;
  if (local_1b == 0xb8) goto LAB_080222e6;
  if (local_1b < 0xb9) {
    if (local_1b != 0xb2) {
      if (local_1b < 0xb3) {
        if (local_1b != 0xa1) {
          if (local_1b != 0xb1) goto code_r0x080222f8;
          goto LAB_080222e6;
        }
      }
      else if (local_1b != 0xb3) {
        if (local_1b == 0xb7) {
          uVar5 = 1;
          bVar1 = true;
        }
        goto code_r0x080222f8;
      }
      uVar5 = 2;
      bVar1 = true;
      goto code_r0x080222f8;
    }
  }
  else if (local_1b != 0xb9) {
    if (local_1b != 0xba) {
      if (local_1b == 0xbb) goto LAB_080222d8;
      if (local_1b != 0xbc) goto code_r0x080222f8;
    }
LAB_080222e6:
    uVar5 = 0;
    bVar1 = true;
    goto code_r0x080222f8;
  }
LAB_080222d8:
  uVar5 = 6;
  bVar1 = true;
code_r0x080222f8:
  if (((bVar1) && ((&DAT_200049ef)[uVar3 * 0x1c0] != '\0')) &&
     ((&DAT_200049d6)[uVar3 * 0x1c0] == '\0')) {
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
      (&DAT_2000491d)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
    }
    (&DAT_20004935)[uVar3 * 0x1c0] = (char)uVar5;
    (&DAT_200049d6)[uVar3 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x08022364 : FUN_08022364 */

undefined8 FUN_08022364(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x0802236c : FUN_0802236c */

undefined8 FUN_0802236c(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x0802243e : FUN_0802243e */

undefined8 FUN_0802243e(void)

{
  return 0;
}



/* ENTRY 0x08022452 : FUN_08022452 */

int FUN_08022452(int param_1,int param_2,int param_3,uint param_4)

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
  iVar2 = FUN_08022364(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ENTRY 0x0802249a : FUN_0802249a */

int FUN_0802249a(uint *param_1)

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



/* ENTRY 0x080224d8 : FUN_080224d8 */

undefined8 FUN_080224d8(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* ENTRY 0x08022562 : FUN_08022562 */

undefined4 * FUN_08022562(undefined4 *param_1,uint param_2)

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



/* ENTRY 0x08022566 : FUN_08022566 */

undefined4 * FUN_08022566(undefined4 *param_1,uint param_2,undefined4 param_3)

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



/* ENTRY 0x080225b0 : FUN_080225b0 */

undefined8 FUN_080225b0(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* ENTRY 0x08022614 : FUN_08022614 */

void FUN_08022614(void)

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



/* ENTRY 0x0802262a : FUN_0802262a */

void FUN_0802262a(void)

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



/* ENTRY 0x0802265e : FUN_0802265e */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0802265e(undefined4 param_1,undefined4 param_2)

{
  FUN_080081e8();
  FUN_08022670(param_1,param_2);
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_080272f0,0x20000000,0x994);
  return;
}



/* ENTRY 0x08022670 : FUN_08022670 */

void FUN_08022670(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0802267e : FUN_0802267e */

void FUN_0802267e(uint *param_1,uint param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 0x08022684 : FUN_08022684 */

void FUN_08022684(int param_1,int param_2)

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



/* ENTRY 0x08022696 : FUN_08022696 */

void FUN_08022696(int param_1,int param_2)

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



/* ENTRY 0x080226a8 : FUN_080226a8 */

void FUN_080226a8(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)&DAT_40012400) {
    FUN_08022fc4(0x200);
    FUN_08022fc4(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_08022fc4(0x400);
    FUN_08022fc4(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_08022fc4(0x8000);
  FUN_08022fc4(0x8000,0);
  return;
}



/* ENTRY 0x0802270c : FUN_0802270c */

void FUN_0802270c(int param_1,int param_2)

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



/* ENTRY 0x0802271e : FUN_0802271e */

void FUN_0802271e(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff8fff;
  return;
}



/* ENTRY 0x0802272a : FUN_0802272a */

bool FUN_0802272a(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}



/* ENTRY 0x0802273a : FUN_0802273a */

bool FUN_0802273a(uint *param_1,uint param_2)

{
  return (*param_1 & param_2 >> 8) != 0 && (param_1[1] & param_2 & 0xff) != 0;
}



/* ENTRY 0x08022756 : FUN_08022756 */

bool FUN_08022756(int param_1)

{
  return (*(uint *)(param_1 + 8) & 8) != 0;
}



/* ENTRY 0x08022766 : FUN_08022766 */

void FUN_08022766(int param_1,byte param_2,int param_3)

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



/* ENTRY 0x08022778 : FUN_08022778 */

void FUN_08022778(int param_1,uint *param_2)

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



/* ENTRY 0x080227c4 : FUN_080227c4 */

void FUN_080227c4(int param_1,uint param_2,int param_3,int param_4)

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



/* ENTRY 0x08022826 : FUN_08022826 */

void FUN_08022826(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff | (param_2 + -1) * 0x100000;
  return;
}



/* ENTRY 0x08022836 : FUN_08022836 */

void FUN_08022836(int param_1,uint param_2,uint param_3,int param_4)

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



/* ENTRY 0x080228c8 : FUN_080228c8 */

void FUN_080228c8(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}



/* ENTRY 0x080228d2 : FUN_080228d2 */

void FUN_080228d2(int param_1,int param_2)

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



/* ENTRY 0x080228e4 : FUN_080228e4 */

void FUN_080228e4(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}



/* ENTRY 0x080228ee : FUN_080228ee */

void FUN_080228ee(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* ENTRY 0x08022900 : FUN_08022900 */

void FUN_08022900(int param_1)

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



/* ENTRY 0x08022918 : FUN_08022918 */

void FUN_08022918(void)

{
  FUN_08022fdc(1);
  FUN_08022fdc(0);
  return;
}



/* ENTRY 0x0802292a : FUN_0802292a */

undefined2 FUN_0802292a(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x08022936 : FUN_08022936 */

void FUN_08022936(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x08022944 : FUN_08022944 */

void FUN_08022944(uint param_1)

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



/* ENTRY 0x0802295c : FUN_0802295c */

void FUN_0802295c(uint *param_1,int param_2)

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



/* ENTRY 0x08022970 : FUN_08022970 */

void FUN_08022970(uint *param_1)

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



/* ENTRY 0x08022a74 : FUN_08022a74 */

uint FUN_08022a74(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x08022a7c : FUN_08022a7c */

bool FUN_08022a7c(uint param_1)

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



/* ENTRY 0x08022a9c : FUN_08022a9c */

void FUN_08022a9c(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x08022aac : FUN_08022aac */

void FUN_08022aac(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x08022afe : FUN_08022afe */

void FUN_08022afe(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x08022b02 : FUN_08022b02 */

void FUN_08022b02(undefined4 *param_1)

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



/* ENTRY 0x08022b1c : FUN_08022b1c */

void FUN_08022b1c(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x08022b28 : FUN_08022b28 */

void FUN_08022b28(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08022cb0(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_08022cb0(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x08022b68 : FUN_08022b68 */

bool FUN_08022b68(void)

{
  uint uVar1;
  
  uVar1 = DAT_4002201c;
  return (uVar1 & 2) != 0;
}



/* ENTRY 0x08022b7c : FUN_08022b7c */

void FUN_08022b7c(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x08022b8c : FUN_08022b8c */

void FUN_08022b8c(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08022cb0(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_08022cb0(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08022bc4 : FUN_08022bc4 */

void FUN_08022bc4(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08022cb0(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_08022cb0(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_08022cb0(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08022c0c : FUN_08022c0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022c0c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08022cb0(0xb0000);
  if (iVar1 != 4) {
    return;
  }
  DAT_40022008 = 0x45670123;
  DAT_40022008 = 0xcdef89ab;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x20;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x40;
  iVar1 = FUN_08022cb0(0xb0000);
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
    iVar1 = FUN_08022cb0(0xb0000);
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



/* ENTRY 0x08022c98 : FUN_08022c98 */

void FUN_08022c98(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x08022cb0 : FUN_08022cb0 */

int FUN_08022cb0(int param_1)

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



/* ENTRY 0x08022d14 : FUN_08022d14 */

void FUN_08022d14(uint *param_1,ushort *param_2)

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



/* ENTRY 0x08022dc2 : FUN_08022dc2 */

undefined8 FUN_08022dc2(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x08022dd4 : FUN_08022dd4 */

void FUN_08022dd4(uint param_1,int param_2)

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



/* ENTRY 0x08022e40 : FUN_08022e40 */

bool FUN_08022e40(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x08022e4e : FUN_08022e4e */

void FUN_08022e4e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08022e52 : FUN_08022e52 */

void FUN_08022e52(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x08022e56 : FUN_08022e56 */

void FUN_08022e56(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x08022e68 : FUN_08022e68 */

void FUN_08022e68(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x08022e78 : FUN_08022e78 */

void FUN_08022e78(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x08022e88 : FUN_08022e88 */

void FUN_08022e88(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x08022e94 : FUN_08022e94 */

void FUN_08022e94(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x08022ea0 : FUN_08022ea0 */

void FUN_08022ea0(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x08022eac : FUN_08022eac */

void FUN_08022eac(byte *param_1)

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



/* ENTRY 0x08022f1c : FUN_08022f1c */

void FUN_08022f1c(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x08022f30 : FUN_08022f30 */

void FUN_08022f30(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x08022f44 : FUN_08022f44 */

void FUN_08022f44(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x08022f50 : FUN_08022f50 */

void FUN_08022f50(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x08022f64 : FUN_08022f64 */

void FUN_08022f64(uint param_1,int param_2)

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



/* ENTRY 0x08022f7c : FUN_08022f7c */

void FUN_08022f7c(uint param_1,int param_2)

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



/* ENTRY 0x08022f94 : FUN_08022f94 */

void FUN_08022f94(uint param_1,int param_2)

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



/* ENTRY 0x08022fac : FUN_08022fac */

void FUN_08022fac(uint param_1,int param_2)

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



/* ENTRY 0x08022fc4 : FUN_08022fc4 */

void FUN_08022fc4(uint param_1,int param_2)

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



/* ENTRY 0x08022fdc : FUN_08022fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022fdc(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x08022fe8 : FUN_08022fe8 */

void FUN_08022fe8(uint *param_1)

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
  uVar3 = *param_1 >> (&DAT_20000984)[(uVar4 & 0xf0) >> 4];
  param_1[1] = uVar3;
  uVar4 = DAT_40021004;
  param_1[2] = uVar3 >> (&DAT_20000984)[(uVar4 & 0x700) >> 8];
  uVar4 = DAT_40021004;
  sVar1 = (&DAT_20000984)[(uVar4 & 0x3800) >> 0xb];
  param_1[3] = uVar3 >> sVar1;
  uVar4 = DAT_40021004;
  param_1[4] = (uVar3 >> sVar1) / (uint)(byte)(&DAT_20000980)[(uVar4 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x08023098 : FUN_08023098 */

bool FUN_08023098(uint param_1)

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



/* ENTRY 0x080230c8 : FUN_080230c8 */

void FUN_080230c8(int param_1)

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



/* ENTRY 0x080230ec : FUN_080230ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080230ec(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x080230f8 : FUN_080230f8 */

void FUN_080230f8(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x08023108 : FUN_08023108 */

void FUN_08023108(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x08023118 : FUN_08023118 */

void FUN_08023118(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x08023128 : FUN_08023128 */

void FUN_08023128(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x08023138 : FUN_08023138 */

undefined4 FUN_08023138(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x08023150 : FUN_08023150 */

bool FUN_08023150(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x08023170 : FUN_08023170 */

void FUN_08023170(ushort param_1,int param_2)

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



/* ENTRY 0x08023188 : FUN_08023188 */

void FUN_08023188(undefined4 param_1)

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



/* ENTRY 0x080231b0 : FUN_080231b0 */

void FUN_080231b0(undefined4 param_1)

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



/* ENTRY 0x080231d8 : FUN_080231d8 */

void FUN_080231d8(int param_1)

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



/* ENTRY 0x080231fc : FUN_080231fc */

void FUN_080231fc(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x0802320c : FUN_0802320c */

void FUN_0802320c(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x08023224 : FUN_08023224 */

void FUN_08023224(ushort *param_1,int param_2)

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



/* ENTRY 0x08023236 : FUN_08023236 */

bool FUN_08023236(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x08023244 : FUN_08023244 */

undefined2 FUN_08023244(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x08023248 : FUN_08023248 */

void FUN_08023248(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x0802324c : FUN_0802324c */

void FUN_0802324c(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x080232a0 : FUN_080232a0 */

void FUN_080232a0(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_0802330c;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_0802330c:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08023318 : FUN_08023318 */

void FUN_08023318(ushort *param_1,int param_2)

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



/* ENTRY 0x0802332a : FUN_0802332a */

void FUN_0802332a(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x0802334e : FUN_0802334e */

void FUN_0802334e(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08023368 : FUN_08023368 */

void FUN_08023368(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x0802336e : FUN_0802336e */

void FUN_0802336e(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08023374 : FUN_08023374 */

void FUN_08023374(ushort *param_1,int param_2)

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



/* ENTRY 0x08023386 : FUN_08023386 */

void FUN_08023386(int param_1,int param_2)

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



/* ENTRY 0x0802339c : FUN_0802339c */

void FUN_0802339c(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x080233ac : FUN_080233ac */

void FUN_080233ac(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x080233b4 : FUN_080233b4 */

void FUN_080233b4(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_08022fc4(0x800);
    FUN_08022fc4(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_08022f94(1);
    FUN_08022f94(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_08022f94(2,1);
    FUN_08022f94(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_08022f94(4,1);
    FUN_08022f94(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_08022f94(8,1);
    FUN_08022f94(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_08022f94(0x10,1);
    FUN_08022f94(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_08022f94(0x20,1);
    FUN_08022f94(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_08022fc4(0x2000);
    FUN_08022fc4(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_08022fc4(0x80000);
    FUN_08022fc4(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_08022fc4(0x100000);
    FUN_08022fc4(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_08022fc4(0x200000);
    FUN_08022fc4(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_08022f94(0x40,1);
    FUN_08022f94(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_08022f94(0x80,1);
    FUN_08022f94(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_08022f94(0x100);
    FUN_08022f94(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_08022fc4(0x10000);
    FUN_08022fc4(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_08022fc4(0x20000);
    FUN_08022fc4(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_08022fc4(0x40000);
  FUN_08022fc4(0x40000,0);
  return;
}



/* ENTRY 0x080235c4 : FUN_080235c4 */

void FUN_080235c4(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x080235c8 : FUN_080235c8 */

undefined2 FUN_080235c8(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x080235cc : FUN_080235cc */

bool FUN_080235cc(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x080235e4 : FUN_080235e4 */

void FUN_080235e4(undefined *param_1,short *param_2)

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
  FUN_080232a0(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x08023790 : FUN_08023790 */

void FUN_08023790(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x080237a0 : FUN_080237a0 */

void FUN_080237a0(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x080237b0 : FUN_080237b0 */

void FUN_080237b0(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x080237ba : FUN_080237ba */

void FUN_080237ba(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_0802382e;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_0802382e:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x0802383e : FUN_0802383e */

void FUN_0802383e(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x0802384a : FUN_0802384a */

void FUN_0802384a(undefined *param_1,short *param_2)

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



/* ENTRY 0x080238cc : FUN_080238cc */

void FUN_080238cc(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x080238da : FUN_080238da */

void FUN_080238da(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x0802395a : FUN_0802395a */

void FUN_0802395a(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x08023966 : FUN_08023966 */

void FUN_08023966(undefined *param_1,short *param_2)

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



/* ENTRY 0x080239ca : FUN_080239ca */

void FUN_080239ca(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x080239d8 : FUN_080239d8 */

void FUN_080239d8(undefined2 *param_1)

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



/* ENTRY 0x080239ec : FUN_080239ec */

void FUN_080239ec(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x080239f2 : FUN_080239f2 */

void FUN_080239f2(int param_1,int param_2)

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



/* ENTRY 0x08023a04 : FUN_08023a04 */

void FUN_08023a04(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x08023a10 : FUN_08023a10 */

void FUN_08023a10(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x08023a64 : FUN_08023a64 */

void FUN_08023a64(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x08023a74 : FUN_08023a74 */

void FUN_08023a74(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x08023a84 : FUN_08023a84 */

void FUN_08023a84(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x08023a88 : FUN_08023a88 */

void FUN_08023a88(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_08023abe:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08023abe;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_08023abe;
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
    if (!bVar3) goto LAB_08023b14;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_08023b14:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x08023b24 : FUN_08023b24 */

void FUN_08023b24(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x08023b36 : FUN_08023b36 */

void FUN_08023b36(ushort *param_1,int param_2)

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



/* ENTRY 0x08023b48 : FUN_08023b48 */

void FUN_08023b48(ushort *param_1,int param_2)

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



/* ENTRY 0x08023b5a : FUN_08023b5a */

void FUN_08023b5a(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x08023b68 : FUN_08023b68 */

void FUN_08023b68(int param_1,int param_2)

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



/* ENTRY 0x08023b7a : FUN_08023b7a */

void FUN_08023b7a(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08023b8a : FUN_08023b8a */

bool FUN_08023b8a(ushort *param_1,uint param_2)

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



/* ENTRY 0x08023bd6 : FUN_08023bd6 */

void FUN_08023bd6(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x08023c08 : FUN_08023c08 */

void FUN_08023c08(undefined2 *param_1,int *param_2)

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
  FUN_08022fe8(auStack_20);
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


