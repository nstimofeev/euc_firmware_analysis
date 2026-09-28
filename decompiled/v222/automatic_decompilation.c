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
  (*(code *)0x800816c)(&DAT_08027f68,0x20000000,0x9d4);
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
  
  uVar1 = FUN_08023250();
  FUN_080081e4(uVar1,extraout_r2);
  FUN_0800a42e();
  uVar2 = FUN_0802329a();
  FUN_080081e8();
  FUN_080232ac((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08027f68,0x20000000,0x9d4);
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
  (*(code *)0x800816c)(&DAT_08027f68,0x20000000,0x9d4);
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
  return 0x200076e0200062e0;
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
  return &DAT_20006280;
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
    iVar2 = *(int *)(&DAT_080248f8 + extraout_r3 * 4) * iVar2;
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
      iVar3 = (*(int *)(&DAT_0802589c + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_0802589c + extraout_r3 * 4) * iVar3;
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
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001aa;
    uVar16 = FUN_0802308e((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001aa +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0,param_3,param_4);
    *(undefined8 *)(param_1 + 0x68) = uVar16;
    uVar2 = (longlong)*(int *)(param_1 + 0xa0) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001aa;
    uVar16 = FUN_0802308e((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001aa +
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
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001aa;
  uVar16 = FUN_0802308e((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001aa + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar2 = (longlong)*(int *)(param_1 + 0x90) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001aa;
  uVar16 = FUN_0802308e((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001aa + (int)((ulonglong)lVar3 >> 0x20),
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
  uVar16 = FUN_0802308e(iVar5,uVar14 * ((int)uVar11 >> 0x1f) +
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
  uVar16 = FUN_0802308e(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
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
  iVar5 = FUN_0802308e(uVar15,*(int *)(param_1 + 0x6c) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_20000014 * (uint)DAT_200001aa,
                       (int)(DAT_20000014 * (uint)DAT_200001aa) >> 0x1f,uVar15);
  *piVar1 = iVar5;
  *(int *)(param_1 + 0x9c) = *piVar1 - *(int *)(param_1 + 0xb4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x70) * 0xa000;
  uVar15 = (undefined4)lVar3;
  uVar15 = FUN_0802308e(uVar15,*(int *)(param_1 + 0x74) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                        DAT_20000014 * (uint)DAT_200001aa,
                        (int)(DAT_20000014 * (uint)DAT_200001aa) >> 0x1f,uVar15);
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(int *)(param_1 + 0xa8) = (*(int *)(param_1 + 0x80) * 0xa000) / (int)(uint)DAT_200001aa;
  *(int *)(param_1 + 0xac) = (*(int *)(param_1 + 0x84) * 0xa000) / (int)(uint)DAT_200001aa;
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
  DAT_20000038 = (&DAT_08026840)[(byte)(&DAT_2000003a)[(byte)(&DAT_08026840)[DAT_20000039]]] +
                 (&DAT_08026840)[DAT_20000039] * '\b';
  return;
}



/* ENTRY 0x08008a7e : FUN_08008a7e */

void FUN_08008a7e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800824c();
  if ((DAT_20000035 == '\0') && (DAT_20000036 == '\0')) {
    FUN_08008a64();
    DAT_20000050 = (&DAT_200010a4)[DAT_20000038];
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
  iVar2 = (&DAT_200010a4)[param_1];
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
    if (((iVar1 == 0) && (iVar1 = (&DAT_200010a4)[uVar2], iVar1 != 0)) && (iVar1 != 1)) {
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
    (&DAT_200010a4)[param_1] = puVar3;
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
    if ((&DAT_200010a4)[param_4] == 0) {
      (&DAT_200010a4)[param_4] = 1;
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
        (&DAT_200010a4)[param_4] = 0;
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
  FUN_080090bc(&LAB_08008f1e_1,0,&DAT_20000ea0,0x2a,0xfffe,&DAT_20000ca4,0x80,0,3);
  return;
}



/* ENTRY 0x080091f8 : FUN_080091f8 */

void FUN_080091f8(void)

{
  FUN_080090bc(&LAB_08009190_1,0,&DAT_200010a0,0x2b,0xffff,&DAT_20000ea4,0x80,0,3);
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
  
  thunk_FUN_0800922e(&DAT_200015ac,0xf0);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200015ac)[uVar1 * 6] = &DAT_200015ac + (uVar1 + 1 & 0xffff) * 6;
  }
  (&DAT_200015ac)[uVar1 * 6] = 0;
  DAT_20000060 = &DAT_200015ac;
  return;
}



/* ENTRY 0x08009278 : FUN_08009278 */

void FUN_08009278(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200014e4,200);
  for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200014e8)[uVar1 * 5] = &DAT_200014e4 + (uVar1 + 1) * 0x14;
  }
  (&DAT_200014e8)[uVar1 * 5] = 0;
  DAT_2000005c = &DAT_200014e4;
  return;
}



/* ENTRY 0x080092ba : FUN_080092ba */

void FUN_080092ba(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_200009d4,0x2d0);
  for (uVar1 = 0; uVar1 < 0x1d; uVar1 = uVar1 + 1 & 0xffff) {
    (&DAT_200009d4)[uVar1 * 0x18] = 0;
    (&DAT_200009d8)[uVar1 * 6] = &DAT_200009d4 + (uVar1 + 1 & 0xffff) * 0x18;
    (&DAT_200009e8)[uVar1 * 6] = &DAT_08009618;
  }
  (&DAT_200009d4)[uVar1 * 0x18] = 0;
  (&DAT_200009d8)[uVar1 * 6] = 0;
  (&DAT_200009e8)[uVar1 * 6] = &DAT_08009618;
  DAT_20000024 = &DAT_200009d4;
  return;
}



/* ENTRY 0x0800930e : FUN_0800930e */

void FUN_0800930e(void)

{
  uint uVar1;
  
  thunk_FUN_0800922e(&DAT_20001154,0x390);
  thunk_FUN_0800922e(&DAT_200010a4,0xb0);
  for (uVar1 = 0; uVar1 < 0xb; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20001168)[uVar1 * 0x13] = &DAT_20001154 + (uVar1 + 1 & 0xff) * 0x4c;
  }
  (&DAT_20001168)[uVar1 * 0x13] = 0;
  DAT_20000054 = 0;
  DAT_2000004c = &DAT_20001154;
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
      DAT_20000050 = (&DAT_200010a4)[DAT_20000038];
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
    DAT_20000048 = (&DAT_200010a4)[DAT_20000038];
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
  
  uVar2 = (uint)(byte)(&DAT_08026840)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_08026840)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
  iVar1 = (&DAT_200010a4)[uVar3];
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
  if ((&DAT_200010a4)[param_2] == 0) {
    local_2c = param_1;
    if (param_1 == 0xff) {
      local_2c = (uint)*(byte *)(DAT_20000048 + 0x2e);
    }
    iVar8 = (&DAT_200010a4)[local_2c];
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
      (&DAT_200010a4)[local_2c] = 0;
      (&DAT_200010a4)[param_2] = iVar8;
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
    iVar2 = (&DAT_200010a4)[param_1];
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
    iVar2 = (&DAT_200010a4)[param_1];
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
  
  uVar1 = FUN_0800a782();
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
  return &DAT_080269b2;
}



/* ENTRY 0x0800a1dc : FUN_0800a1dc */

void FUN_0800a1dc(void)

{
  FUN_08023b6c(0x8000000);
  FUN_08023b58(0x300);
  return;
}



/* ENTRY 0x0800a1f2 : FUN_0800a1f2 */

void FUN_0800a1f2(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_08009836(0);
  FUN_0800fd58();
  do {
    FUN_0800f998();
    FUN_08010744();
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
    FUN_0800edb2();
    FUN_0801544e();
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
    FUN_0800cd58();
    FUN_0800f5ae();
    FUN_0801c53a();
    FUN_08012d62();
    FUN_08014cdc();
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
    FUN_0800d19a();
    FUN_0801406c();
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
    FUN_080137fc();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_080140a6();
    }
    FUN_08015e3e();
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
  FUN_080218a0();
  do {
    FUN_08021f14();
    FUN_0800dfb4();
    FUN_08009880(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a42e : FUN_0800a42e */

undefined4 FUN_0800a42e(void)

{
  FUN_0800d71a();
  FUN_0800a1dc();
  FUN_080093c4();
  FUN_080090bc(&LAB_0800a2fe_1,0,&DAT_20001898,2,2,&DAT_2000169c,0x80,0,3);
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
  FUN_08023bb8(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_080246c4(&DAT_40000c00,&local_14);
  FUN_08024772(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_08023ae8(&local_18);
  FUN_08023fb0(&DAT_40000c00,1);
  FUN_080243dc(&DAT_40000c00,1);
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
  
  FUN_08023c24(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a68a : FUN_0800a68a */

void FUN_0800a68a(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(4,1);
  local_8 = 0x10031000;
  FUN_08023950(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0800a6b2 : FUN_0800a6b2 */

void FUN_0800a6b2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(8,1);
  local_8 = 0x28031000;
  FUN_08023950(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800a6da : FUN_0800a6da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800a6da(void)

{
  int iVar1;
  
  iVar1 = FUN_0800a66c();
  if (iVar1 != 0) {
    FUN_0800aa32();
    iVar1 = FUN_0800ab00();
    if ((iVar1 == 0) || (_DAT_0803a800 == 0x28536692)) {
      FUN_0800aa58();
      FUN_0800f9ac();
      FUN_080109ba(1);
    }
    else {
      FUN_080109ba(0);
    }
    iVar1 = FUN_0800aef2();
    if (iVar1 == 2) {
      FUN_0800af84();
    }
    if ((DAT_20000090 & 0x80000000) != 0) {
      DAT_20000090 = 0;
    }
    if ((DAT_20000094 & 0x80000000) != 0) {
      DAT_20000094 = 0;
    }
    diag_readoutmeter = DAT_20000090;
    DAT_20003100 = DAT_20000094;
    FUN_0800a68a();
    FUN_0800a6b2();
    FUN_0800e25e();
    FUN_0800df6c();
    FUN_0800e710();
    FUN_08012edc(0x1c200);
    FUN_0801ffae();
    FUN_0801403c();
    FUN_08023ba0(0x40,1);
    FUN_0800a554();
    FUN_0801c9a4();
    return 1;
  }
  return 0;
}



/* ENTRY 0x0800a782 : FUN_0800a782 */

undefined4 FUN_0800a782(void)

{
  return DAT_20000000;
}



/* ENTRY 0x0800a7a4 : FUN_0800a7a4 */

undefined4 FUN_0800a7a4(int param_1,undefined4 param_2)

{
  FUN_080238d4();
  FUN_0800b510((&DAT_200000a6)[param_1],param_2);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800a7c2 : FUN_0800a7c2 */

uint FUN_0800a7c2(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4;
  FUN_0800b1c2((&DAT_200000a6)[param_1],&local_10);
  return local_10 & 0xffff;
}



/* ENTRY 0x0800a7d8 : FUN_0800a7d8 */

undefined4 FUN_0800a7d8(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = FUN_0800c148((int)(uint)uVar1 >> 8);
  uVar2 = FUN_0800c170((char)uVar1,uVar2);
  FUN_080238d4();
  FUN_0800b510((&DAT_200000a6)[param_1],(uint)uVar1);
  for (uVar3 = 1; (int)uVar3 < param_2; uVar3 = uVar3 + 1 & 0xff) {
    uVar1 = param_3[uVar3];
    uVar2 = FUN_0800c170((int)(uint)uVar1 >> 8,uVar2);
    uVar2 = FUN_0800c170((char)uVar1,uVar2);
    FUN_0800b510((&DAT_200000a6)[param_1 + uVar3],(uint)uVar1);
  }
  FUN_0800b510((&DAT_200000a6)[param_1 + param_2],uVar2);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800a85a : FUN_0800a85a */

undefined4 FUN_0800a85a(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_20;
  
  local_20 = (uint)*param_3;
  uVar1 = FUN_0800c148((int)local_20 >> 8);
  uVar4 = FUN_0800c170((char)local_20,uVar1);
  uVar4 = uVar4 & 0xffff;
  FUN_080238d4();
  FUN_0800b510((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0800c170((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0800c170((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b510((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b510((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_080237b8();
  FUN_0800b1c2((&DAT_200000a6)[param_1],&local_20);
  uVar1 = FUN_0800c148((int)(local_20 & 0xffff) >> 8);
  sVar3 = FUN_0800c170((char)local_20,uVar1);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    FUN_0800b1c2((&DAT_200000a6)[param_1 + uVar6],&local_20);
    uVar1 = FUN_0800c170((int)(local_20 & 0xffff) >> 8,sVar3);
    sVar3 = FUN_0800c170((char)local_20,uVar1);
  }
  FUN_0800b1c2((&DAT_200000a6)[param_1 + param_2],&local_20);
  if (((local_20 & 0xffff) == uVar4) && ((short)local_20 == sVar3)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* ENTRY 0x0800a978 : FUN_0800a978 */

undefined4 FUN_0800a978(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_94 [2];
  ushort local_90 [60];
  
  FUN_0800b1c2((&DAT_200000a6)[param_1],local_94);
  local_90[0] = local_94[0];
  uVar1 = FUN_0800c148((int)(uint)local_94[0] >> 8);
  uVar2 = FUN_0800c170((char)local_94[0],uVar1);
  for (uVar4 = 1; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    FUN_0800b1c2((&DAT_200000a6)[param_1 + uVar4],local_94);
    local_90[uVar4] = local_94[0];
    uVar1 = FUN_0800c170((int)(uint)local_94[0] >> 8,uVar2);
    uVar2 = FUN_0800c170((char)local_94[0],uVar1);
  }
  FUN_0800b1c2((&DAT_200000a6)[param_1 + param_2],local_94);
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



/* ENTRY 0x0800aa32 : FUN_0800aa32 */

void FUN_0800aa32(void)

{
  FUN_080238d4();
  FUN_0800b402();
  FUN_080237b8();
  FUN_0800ba5a();
  FUN_0800bfc2();
  return;
}



/* ENTRY 0x0800aa58 : FUN_0800aa58 */

void FUN_0800aa58(void)

{
  DAT_200033a0 = 0;
  DAT_200033a4 = 0;
  DAT_200033a8 = 0;
  DAT_200033ac = 0;
  DAT_200033b0 = 0;
  DAT_200033b4 = 0;
  DAT_200033b8 = 0;
  return;
}



/* ENTRY 0x0800aa82 : FUN_0800aa82 */

void FUN_0800aa82(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  _local_18 = CONCAT22((undefined2)DAT_200033a4,(undefined2)DAT_200033a0);
  _local_14 = CONCAT22((short)((uint)((DAT_200033ac - (DAT_200033ac >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_200033a8);
  _local_10 = CONCAT22((short)((uint)((DAT_200033b4 - (DAT_200033b4 >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_200033b0 - (DAT_200033b0 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_200033b8);
  FUN_0800a85a(0,8,&local_18);
  return;
}



/* ENTRY 0x0800ab00 : FUN_0800ab00 */

undefined4 FUN_0800ab00(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  iVar1 = FUN_0800a978(0,8,&local_18);
  if ((iVar1 == 0) || (local_c._2_2_ != 0x729)) {
    uVar2 = 0;
  }
  else {
    DAT_200033a0 = (int)(short)local_18;
    DAT_200033a4 = (int)local_18._2_2_;
    DAT_200033a8 = (int)(short)local_14;
    DAT_200033ac = (int)local_14._2_2_ << 1;
    DAT_200033b0 = (int)(short)local_10 << 1;
    DAT_200033b4 = (int)local_10._2_2_ << 1;
    DAT_200033b8 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800ab80 : FUN_0800ab80 */

uint FUN_0800ab80(void)

{
  return (uint)DAT_2000326e << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
}



/* ENTRY 0x0800aba0 : FUN_0800aba0 */

undefined4 FUN_0800aba0(short *param_1)

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



/* ENTRY 0x0800adda : FUN_0800adda */

undefined4 FUN_0800adda(void)

{
  if (DAT_2000319e < 0x65) {
    if (DAT_2000319e == 0) {
      DAT_200005fe = 1;
    }
    else {
      DAT_200005fe = (undefined1)DAT_2000319e;
    }
  }
  else {
    DAT_200005fe = 100;
  }
  if (DAT_200031a0 < 0x65) {
    if (DAT_200031a0 == 0) {
      DAT_200005ff = 1;
    }
    else {
      DAT_200005ff = (undefined1)DAT_200031a0;
    }
  }
  else {
    DAT_200005ff = 100;
  }
  if (DAT_200031a2 < 0x65) {
    if (DAT_200031a2 == 0) {
      DAT_20000600 = 1;
    }
    else {
      DAT_20000600 = (undefined1)DAT_200031a2;
    }
  }
  else {
    DAT_20000600 = 100;
  }
  if (DAT_200031a4 < 0x65) {
    if (DAT_200031a4 == 0) {
      DAT_20000601 = 1;
    }
    else {
      DAT_20000601 = (undefined1)DAT_200031a4;
    }
  }
  else {
    DAT_20000601 = 100;
  }
  return 0;
}



/* ENTRY 0x0800ae98 : FUN_0800ae98 */

undefined4 FUN_0800ae98(void)

{
  DAT_20003132 = 1;
  return 0;
}



/* ENTRY 0x0800aea4 : FUN_0800aea4 */

undefined4 FUN_0800aea4(undefined1 param_1)

{
  diag_AgeModeflg = param_1;
  return 0;
}



/* ENTRY 0x0800aebc : FUN_0800aebc */

undefined1 FUN_0800aebc(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0800c0d0(&DAT_2000008c);
  DAT_2000009c = CONCAT22(DAT_2000009c._2_2_,uVar2);
  FUN_0800b722(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  uVar1 = FUN_0800bc8a(DAT_2000008c,DAT_20000090,DAT_20000094,DAT_20000098,DAT_2000009c);
  DAT_200000a0 = 0;
  return uVar1;
}



/* ENTRY 0x0800aef2 : FUN_0800aef2 */

undefined4 FUN_0800aef2(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 local_20 [16];
  short local_10;
  
  FUN_0800b76a(local_20);
  local_20[0] = 0xf;
  sVar1 = FUN_0800c0d0(local_20);
  if (local_10 == sVar1) {
    FUN_0802319e(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800bcd2(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0800c0d0(local_20);
    if (local_10 == sVar1) {
      FUN_0802319e(&DAT_2000008c,local_20,0x14);
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* ENTRY 0x0800af56 : FUN_0800af56 */

undefined4 FUN_0800af56(uint param_1,uint param_2)

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
    FUN_0800aebc();
  }
  return 0;
}



/* ENTRY 0x0800af84 : FUN_0800af84 */

undefined4 FUN_0800af84(void)

{
  diag_readoutmeter = 0;
  diag_currentmeter = 0;
  DAT_20003100 = 0;
  DAT_20003108 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800aebc();
  return 0;
}



/* ENTRY 0x0800afbc : FUN_0800afbc */

undefined4 FUN_0800afbc(void)

{
  FUN_080238d4();
  FUN_08023800(&DAT_0803a800,0x28536692);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800afd6 : FUN_0800afd6 */

undefined4 FUN_0800afd6(void)

{
  FUN_080238d4();
  FUN_08023764(&DAT_0803a800);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800afee : FUN_0800afee */

uint FUN_0800afee(uint param_1)

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



/* ENTRY 0x0800b01e : FUN_0800b01e */

uint FUN_0800b01e(uint param_1)

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



/* ENTRY 0x0800b068 : FUN_0800b068 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b068(int param_1)

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



/* ENTRY 0x0800b0b8 : FUN_0800b0b8 */

undefined4 FUN_0800b0b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800b068(1);
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



/* ENTRY 0x0800b114 : FUN_0800b114 */

int FUN_0800b114(void)

{
  int iVar1;
  
  iVar1 = FUN_08023764(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_080237c8(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_08023764(&DAT_0803b800);
  }
  return iVar1;
}



/* ENTRY 0x0800b146 : FUN_0800b146 */

int FUN_0800b146(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b068(1);
  if (iVar1 != 0xab) {
    for (; DAT_20000138 < (int *)((iVar1 + 1) * 0x800 + 0x803affe); DAT_20000138 = DAT_20000138 + 1)
    {
      if (*DAT_20000138 == -1) {
        iVar1 = FUN_080237c8(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_080237c8((int)DAT_20000138 + 2,param_1);
        DAT_20000138 = DAT_20000138 + 1;
        return iVar1;
      }
    }
    iVar1 = 0x80;
  }
  return iVar1;
}



/* ENTRY 0x0800b1c2 : FUN_0800b1c2 */

int FUN_0800b1c2(uint param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_0800b068(0);
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



/* ENTRY 0x0800b21a : FUN_0800b21a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800b21a(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (_DAT_0803b000 == 0) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_0800b114();
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803b800);
    }
    else {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b806 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b1c2((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b146((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_080237c8(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803b000);
    }
  }
  else if (_DAT_0803b000 == -0x1112) {
    if (_DAT_0803b800 == 0) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if (_DAT_0803b006 == (&DAT_200000a6)[uVar2]) {
          uVar3 = (uint)(short)uVar2;
        }
        if (((uVar2 != uVar3) &&
            (iVar1 = FUN_0800b1c2((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b146((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_080237c8(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800b114();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_08023764(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_08023764(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803b800,0);
    }
    else {
      iVar1 = FUN_0800b114();
    }
  }
  else {
    iVar1 = FUN_0800b114();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800b402 : FUN_0800b402 */

undefined4 FUN_0800b402(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800b21a();
  FUN_0800b0b8();
  return uVar1;
}



/* ENTRY 0x0800b412 : FUN_0800b412 */

int FUN_0800b412(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  
  iVar1 = FUN_0800b068(0);
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
  iVar1 = FUN_080237c8(puVar3,0xeeee);
  if (iVar1 == 4) {
    FUN_0800b0b8();
    iVar1 = FUN_0800b146(param_1,param_2);
    if (iVar1 == 4) {
      for (uVar2 = 0; uVar2 < 0x46; uVar2 = uVar2 + 1 & 0xffff) {
        if ((((ushort)(&DAT_200000a6)[uVar2] != param_1) &&
            (iVar1 = FUN_0800b1c2((&DAT_200000a6)[uVar2],&DAT_20000134), iVar1 != 1)) &&
           (iVar1 = FUN_0800b146((&DAT_200000a6)[uVar2],DAT_20000134), iVar1 != 4)) {
          return iVar1;
        }
      }
      iVar1 = FUN_08023764(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_080237c8(puVar3,0);
      }
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b510 : FUN_0800b510 */

int FUN_0800b510(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800b146(param_1,param_2);
  if (iVar1 == 0x80) {
    iVar1 = FUN_0800b412(param_1,param_2);
  }
  return iVar1;
}



/* ENTRY 0x0800b53c : FUN_0800b53c */

int FUN_0800b53c(void)

{
  int iVar1;
  
  iVar1 = FUN_08023764(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_080237c8(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_08023764(&DAT_0803e800);
  }
  return iVar1;
}



/* ENTRY 0x0800b56e : FUN_0800b56e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800b56e(int param_1)

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



/* ENTRY 0x0800b612 : FUN_0800b612 */

int FUN_0800b612(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800b56e(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_080237c8(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800b614 : FUN_0800b614 */

int FUN_0800b614(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800b56e(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803dfeb) < DAT_2000013c) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_2000013c != -1) {
          return 0x80;
        }
        iVar1 = FUN_080237c8(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800b696 : FUN_0800b696 */

int FUN_0800b696(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803e000;
  puVar3 = &DAT_0803e800;
  iVar1 = FUN_0800b56e(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_080237c8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b612(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_08023764(puVar3), iVar1 == 4)) {
    iVar1 = FUN_080237c8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800b698 : FUN_0800b698 */

int FUN_0800b698(void)

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
  iVar1 = FUN_0800b56e(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803e800;
    puVar3 = &DAT_0803e000;
  }
  iVar1 = FUN_080237c8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b612(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_08023764(puVar3), iVar1 == 4)) {
    iVar1 = FUN_080237c8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800b722 : FUN_0800b722 */

int FUN_0800b722(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar2 = FUN_0800b612(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b696(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_080237b8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b724 : FUN_0800b724 */

int FUN_0800b724(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar2 = FUN_0800b612(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b696(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_080237b8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800b76a : FUN_0800b76a */

int FUN_0800b76a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800b56e(0);
  if (iVar1 != 0xab) {
    if (DAT_2000013c < iVar1 * 0x800 + 0x803e018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_2000013c - 4) == -1) {
        FUN_08023114(param_1,DAT_2000013c - 0x28,0x14);
      }
      else {
        FUN_08023114(param_1,DAT_2000013c - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ENTRY 0x0800b7ca : FUN_0800b7ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800b7ca(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803e000 == 0) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_0800b53c();
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803e800);
    }
    else {
      FUN_08023202(&local_2c,0x14);
      iVar1 = FUN_0800b76a(&local_2c);
      if (iVar1 != 1) {
        if (DAT_2000013c < &DAT_0803e800) {
          for (DAT_2000013c = (short *)&DAT_0803e804;
              (DAT_2000013c < (short *)0x803efeb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b722(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_080238d4();
        FUN_08023758(0x35);
      }
      iVar1 = FUN_080237c8(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08023202(&local_2c,0x14);
      iVar1 = FUN_0800b76a(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803e800 < DAT_2000013c) {
          for (DAT_2000013c = (short *)&DAT_0803e004;
              (DAT_2000013c < (short *)0x803e7eb && (*DAT_2000013c != -1));
              DAT_2000013c = DAT_2000013c + 10) {
          }
        }
        iVar1 = FUN_0800b722(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_080238d4();
        FUN_08023758(0x35);
      }
      iVar1 = FUN_080237c8(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800b53c();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_08023764(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_08023764(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803e800,0);
    }
    else {
      iVar1 = FUN_0800b53c();
    }
  }
  else {
    iVar1 = FUN_0800b53c();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ba02 : FUN_0800ba02 */

int FUN_0800ba02(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b56e(0);
  if (iVar1 != 0xab) {
    for (DAT_2000013c = (short *)(&DAT_0803e004 + iVar1 * 0x800);
        (DAT_2000013c <= (short *)((iVar1 + 1) * 0x800 + 0x803dfeb) && (*DAT_2000013c != -1));
        DAT_2000013c = DAT_2000013c + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800ba5a : FUN_0800ba5a */

undefined4 FUN_0800ba5a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar1 = FUN_0800ba02();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800b7ca();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ba02();
  }
  FUN_080237b8();
  return uVar3;
}



/* ENTRY 0x0800baa4 : FUN_0800baa4 */

int FUN_0800baa4(void)

{
  int iVar1;
  
  iVar1 = FUN_08023764(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_080237c8(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_08023764(&DAT_0803f800);
  }
  return iVar1;
}



/* ENTRY 0x0800bad6 : FUN_0800bad6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800bad6(int param_1)

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



/* ENTRY 0x0800bb7a : FUN_0800bb7a */

int FUN_0800bb7a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0800bad6(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_080237c8(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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



/* ENTRY 0x0800bb7c : FUN_0800bb7c */

int FUN_0800bb7c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800bad6(1);
  if (iVar1 != 0xab) {
    if ((short *)((iVar1 + 1) * 0x800 + 0x803efeb) < DAT_20000140) {
      iVar1 = 0x80;
    }
    else {
      for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1) {
        if (*DAT_20000140 != -1) {
          return 0x80;
        }
        iVar1 = FUN_080237c8(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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



/* ENTRY 0x0800bbfe : FUN_0800bbfe */

int FUN_0800bbfe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_0803f000;
  puVar3 = &DAT_0803f800;
  iVar1 = FUN_0800bad6(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_080237c8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800bb7a(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_08023764(puVar3), iVar1 == 4)) {
    iVar1 = FUN_080237c8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800bc00 : FUN_0800bc00 */

int FUN_0800bc00(void)

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
  iVar1 = FUN_0800bad6(0);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0xab;
    }
    puVar2 = &DAT_0803f800;
    puVar3 = &DAT_0803f000;
  }
  iVar1 = FUN_080237c8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800bb7a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_08023764(puVar3), iVar1 == 4)) {
    iVar1 = FUN_080237c8(puVar2,0);
  }
  return iVar1;
}



/* ENTRY 0x0800bc8a : FUN_0800bc8a */

int FUN_0800bc8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar2 = FUN_0800bb7a(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bbfe(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_080237b8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800bc8c : FUN_0800bc8c */

int FUN_0800bc8c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0800824c();
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar2 = FUN_0800bb7a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bbfe(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_080237b8();
  FUN_08008254(uVar1);
  return iVar2;
}



/* ENTRY 0x0800bcd2 : FUN_0800bcd2 */

int FUN_0800bcd2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800bad6(0);
  if (iVar1 != 0xab) {
    if (DAT_20000140 < iVar1 * 0x800 + 0x803f018U) {
      iVar1 = 1;
    }
    else {
      if (*(int *)(DAT_20000140 - 4) == -1) {
        FUN_08023114(param_1,DAT_20000140 - 0x28,0x14);
      }
      else {
        FUN_08023114(param_1,DAT_20000140 - 0x14,0x14);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ENTRY 0x0800bd32 : FUN_0800bd32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0800bd32(void)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if (_DAT_0803f000 == 0) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_0800baa4();
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803f800);
    }
    else {
      FUN_08023202(&local_2c,0x14);
      iVar1 = FUN_0800bcd2(&local_2c);
      if (iVar1 != 1) {
        if (DAT_20000140 < &DAT_0803f800) {
          for (DAT_20000140 = (short *)&DAT_0803f804;
              (DAT_20000140 < (short *)0x803ffeb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800bc8a(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_080238d4();
        FUN_08023758(0x35);
      }
      iVar1 = FUN_080237c8(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08023202(&local_2c,0x14);
      iVar1 = FUN_0800bcd2(&local_2c);
      if (iVar1 != 1) {
        if (&DAT_0803f800 < DAT_20000140) {
          for (DAT_20000140 = (short *)&DAT_0803f004;
              (DAT_20000140 < (short *)0x803f7eb && (*DAT_20000140 != -1));
              DAT_20000140 = DAT_20000140 + 10) {
          }
        }
        iVar1 = FUN_0800bc8a(local_2c,uStack_28,uStack_24,uStack_20,local_1c);
        if (iVar1 != 4) {
          return iVar1;
        }
        FUN_080238d4();
        FUN_08023758(0x35);
      }
      iVar1 = FUN_080237c8(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023764(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_08023764(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800baa4();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_08023764(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_08023764(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_080237c8(&DAT_0803f800,0);
    }
    else {
      iVar1 = FUN_0800baa4();
    }
  }
  else {
    iVar1 = FUN_0800baa4();
  }
  if (iVar1 == 4) {
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800bf6a : FUN_0800bf6a */

int FUN_0800bf6a(void)

{
  int iVar1;
  
  iVar1 = FUN_0800bad6(0);
  if (iVar1 != 0xab) {
    for (DAT_20000140 = (short *)(&DAT_0803f004 + iVar1 * 0x800);
        (DAT_20000140 <= (short *)((iVar1 + 1) * 0x800 + 0x803efeb) && (*DAT_20000140 != -1));
        DAT_20000140 = DAT_20000140 + 10) {
    }
    iVar1 = 4;
  }
  return iVar1;
}



/* ENTRY 0x0800bfc2 : FUN_0800bfc2 */

undefined4 FUN_0800bfc2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_080238d4();
  FUN_08023758(0x35);
  iVar1 = FUN_0800bf6a();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800bd32();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800bf6a();
  }
  FUN_080237b8();
  return uVar3;
}



/* ENTRY 0x0800c00c : FUN_0800c00c */

void FUN_0800c00c(byte *param_1)

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



/* ENTRY 0x0800c050 : FUN_0800c050 */

void FUN_0800c050(byte *param_1)

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



/* ENTRY 0x0800c094 : FUN_0800c094 */

void FUN_0800c094(byte *param_1)

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



/* ENTRY 0x0800c0d0 : FUN_0800c0d0 */

void FUN_0800c0d0(byte *param_1)

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



/* ENTRY 0x0800c10c : FUN_0800c10c */

void FUN_0800c10c(byte *param_1)

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



/* ENTRY 0x0800c148 : FUN_0800c148 */

void FUN_0800c148(uint param_1)

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



/* ENTRY 0x0800c170 : FUN_0800c170 */

uint FUN_0800c170(uint param_1,uint param_2)

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



/* ENTRY 0x0800c198 : FUN_0800c198 */

void FUN_0800c198(void)

{
  int iVar1;
  
  iVar1 = DAT_42218130;
  if (iVar1 == 0) {
    if (DAT_20000174 < 0x32) {
      DAT_20000174 = DAT_20000174 + 1;
    }
  }
  else if (DAT_20000174 != 0) {
    DAT_20000174 = DAT_20000174 - 1;
  }
  if (DAT_20000174 < 0x24) {
    if (DAT_20000174 < 0xc) {
      diag_BatState = 1;
      DAT_2000326e = DAT_2000326e | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_2000326e = DAT_2000326e & 0xfffd;
  }
  return;
}



/* ENTRY 0x0800c200 : FUN_0800c200 */

void FUN_0800c200(void)

{
  int iVar1;
  
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((iVar1 < 1000) && (diag_IQCurrent < 0x708)) {
    if (DAT_20000176 < 0x65) {
      DAT_20000176 = DAT_20000176 + 1;
    }
    else {
      DAT_2000313d = 1;
    }
  }
  else {
    DAT_20000176 = 0;
    DAT_2000313d = 0;
  }
  diag_currentmeter =
       FUN_08022fa0((int)((longlong)DAT_200005b0 * 0x1a),
                    (int)((ulonglong)((longlong)DAT_200005b0 * 0x1a) >> 0x20),3000,0);
  if ((diag_currentmeter & 0x80000000) != 0) {
    diag_currentmeter = 0;
  }
  diag_kilometer = diag_readoutmeter + diag_currentmeter;
  DAT_20003108 = diag_this_ws / 0xe10;
  if (DAT_20003108 < 0) {
    DAT_20003108 = -DAT_20003108;
  }
  diag_kiloWh = diag_this_ws / 0xe10 + DAT_20003100;
  if ((DAT_20000178 + 0x708 < DAT_200005b0) && (DAT_20000176 == 100)) {
    DAT_20000178 = DAT_200005b0;
    DAT_20000176 = 0;
    if ((DAT_20003132 == '\0') &&
       ((diag_AgeModeflg == '\0' && ((diag_kilometer & 0x80000000) == 0)))) {
      FUN_0800af56(diag_kilometer,diag_kiloWh);
    }
  }
  return;
}



/* ENTRY 0x0800c2fc : FUN_0800c2fc */

void FUN_0800c2fc(void)

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
                  if (100 < DAT_200034ac) {
                    DAT_200034ac = DAT_200034ac + -0x32;
                  }
                  if (0x14 < DAT_200034b4) {
                    DAT_200034b4 = DAT_200034b4 + -1;
                  }
                }
                else {
                  if (DAT_20000612 < DAT_200034ac) {
                    DAT_200034ac = DAT_200034ac + -0x14;
                  }
                  if (0x96 < DAT_200034b4) {
                    DAT_200034b4 = DAT_200034b4 + -2;
                  }
                }
              }
              else {
                if (DAT_20000612 < DAT_200034ac) {
                  DAT_200034ac = DAT_200034ac + -0x14;
                }
                if (DAT_200034ac < 500) {
                  DAT_200034ac = DAT_200034ac + 0x1e;
                }
                if (0x96 < DAT_200034b4) {
                  DAT_200034b4 = DAT_200034b4 + -2;
                }
                if (DAT_200034b4 < 100) {
                  DAT_200034b4 = DAT_200034b4 + 2;
                }
              }
            }
            else {
              if (DAT_200034ac < 500) {
                DAT_200034ac = DAT_200034ac + 0x1e;
              }
              if (0x96 < DAT_200034b4) {
                DAT_200034b4 = DAT_200034b4 + -2;
              }
              if (DAT_200034b4 < 100) {
                DAT_200034b4 = DAT_200034b4 + 2;
              }
            }
          }
          else {
            if (DAT_20000612 + 0x1e < DAT_200034ac) {
              DAT_200034ac = DAT_200034ac + -0x14;
            }
            if (DAT_200034ac < DAT_20000612) {
              DAT_200034ac = DAT_200034ac + 0x1e;
            }
            if (0x96 < DAT_200034b4) {
              DAT_200034b4 = DAT_200034b4 + -2;
            }
            if (DAT_200034b4 < 100) {
              DAT_200034b4 = DAT_200034b4 + 2;
            }
          }
        }
        else {
          if (DAT_200034ac < DAT_20000612) {
            DAT_200034ac = DAT_200034ac + 0x1e;
          }
          if (DAT_200034b4 < 100) {
            DAT_200034b4 = DAT_200034b4 + 2;
          }
        }
      }
      else {
        if (DAT_20000614 + 0x1e < DAT_200034ac) {
          DAT_200034ac = DAT_200034ac + -0x14;
        }
        if (DAT_200034ac < DAT_20000614) {
          DAT_200034ac = DAT_200034ac + 0x1e;
        }
        if (DAT_200034b4 < DAT_20000616) {
          DAT_200034b4 = DAT_200034b4 + 2;
        }
      }
    }
    else {
      if (DAT_200034ac < DAT_20000614) {
        DAT_200034ac = DAT_200034ac + 0x1e;
      }
      if (DAT_20000616 + 2 < DAT_200034b4) {
        DAT_200034b4 = DAT_200034b4 + -2;
      }
      if (DAT_200034b4 < DAT_20000616) {
        DAT_200034b4 = DAT_200034b4 + 2;
      }
    }
  }
  else {
    if (DAT_200034ac < DAT_2000060e) {
      DAT_200034ac = DAT_200034ac + 0x1e;
    }
    if (DAT_200034b4 < DAT_20000610) {
      DAT_200034b4 = DAT_200034b4 + 2;
    }
  }
  return;
}



/* ENTRY 0x0800c60a : FUN_0800c60a */

void FUN_0800c60a(void)

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
  if (DAT_20000620 < diag_TotalVoltage) {
    bVar1 = 0x27 < DAT_20000154;
    DAT_20000154 = DAT_20000154 + 1;
    if ((bVar1) && (DAT_20000154 = 0, DAT_20000160 == 0)) {
      FUN_0800f9c6(7);
      DAT_200030be = DAT_200030be | 0x4000;
      DAT_20000160 = 400;
      FUN_080218be(7);
    }
  }
  else {
    DAT_20000154 = 0;
    DAT_200030be = DAT_200030be & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000618) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002cc == '\x04')))) {
    bVar1 = 199 < DAT_2000015b;
    DAT_2000015b = DAT_2000015b + 1;
    if ((bVar1) && (DAT_2000015b = '\0', DAT_20000168 == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800f9c6(7);
      }
      DAT_200030be = DAT_200030be | 0x1000;
      DAT_20000168 = 400;
      FUN_080218be(6);
    }
  }
  else {
    DAT_2000015b = '\0';
    DAT_200030be = DAT_200030be & 0xefff;
  }
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if (((DAT_2000061c < iVar2) && (diag_IQCurrent < 0x4b0)) && (0x7b0c < diag_VectorVol)) {
    bVar1 = 0xa0 < DAT_20000156;
    DAT_20000156 = DAT_20000156 + 1;
    if (bVar1) {
      DAT_20000156 = 0;
      if ((DAT_20003132 == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_0800e734();
      }
      FUN_08014cfa(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030be = DAT_200030be | 4;
      FUN_080218be(8);
    }
  }
  else if (DAT_20000156 < 2) {
    DAT_200030be = DAT_200030be & 0xfffb;
  }
  else {
    DAT_20000156 = DAT_20000156 - 2;
  }
  iVar2 = diag_TotalCurrent;
  if (diag_TotalCurrent < 0) {
    iVar2 = -diag_TotalCurrent;
  }
  if ((DAT_20000622 < iVar2) || ((((byte)DAT_2000326c & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_20000158;
    DAT_20000158 = DAT_20000158 + 1;
    if ((bVar1) && (DAT_20000158 = 0, DAT_20000162 == 0)) {
      FUN_08014cfa(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030be = DAT_200030be | 8;
      DAT_20000162 = 300;
      FUN_080218be(9);
    }
  }
  else if (DAT_20000158 == 0) {
    DAT_200030be = DAT_200030be & 0xfff7;
  }
  else {
    DAT_20000158 = DAT_20000158 - 1;
  }
  if (diag_VectorVol < 28000) {
    DAT_2000015d = '\0';
    DAT_200030be = DAT_200030be & 0xfffd;
  }
  else {
    bVar1 = 10 < DAT_2000015d;
    DAT_2000015d = DAT_2000015d + 1;
    if ((bVar1) && (DAT_2000015d = '\0', DAT_20000166 == 0)) {
      FUN_08014cfa(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030be = DAT_200030be | 2;
      DAT_20000166 = 100;
      FUN_080218be(10);
    }
  }
  if ((((diag_HallState == '\a') || (diag_HallState == '\0')) || (10 < diag_hall_err)) ||
     (0x14 < DAT_20000172)) {
    bVar1 = 4 < DAT_2000015a;
    DAT_2000015a = DAT_2000015a + 1;
    if (bVar1) {
      DAT_2000015a = '\0';
      if (diag_VehicleSpeed < 6000) {
        DAT_2000326e = DAT_2000326e | 0x10;
      }
      DAT_200030be = DAT_200030be | 1;
      if (DAT_20000164 == 0) {
        FUN_08014cfa(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_080218be(5);
      }
    }
  }
  else {
    DAT_2000326e = DAT_2000326e & 0xffef;
    DAT_200030be = DAT_200030be & 0xfffe;
    DAT_2000015a = '\0';
  }
  if (diag_MosTemp < DAT_20000624) {
    DAT_2000015c = '\0';
    DAT_200030be = DAT_200030be & 0xffdf;
  }
  else {
    bVar1 = 10 < DAT_2000015c;
    DAT_2000015c = DAT_2000015c + 1;
    if ((bVar1) && (DAT_2000015c = '\0', DAT_2000016a == 0)) {
      if (DAT_200002cc != '\x01') {
        FUN_0800f9c6(7);
        FUN_08014cfa(0x24,(int)diag_MosTemp,0);
        DAT_200030be = DAT_200030be | 0x20;
      }
      DAT_2000016a = 200;
      FUN_080218be(0xb);
    }
  }
  if ((((byte)DAT_2000326c & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08014cfa(0x1a,0);
    DAT_2000016e = 200;
    FUN_080218be(0xd);
  }
  if ((((byte)DAT_2000326c & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08014cfa(0x23,0);
    DAT_2000016c = 200;
    FUN_080218be(0xc);
  }
  if ((DAT_20003112 == '\0') && ((DAT_200030be & 0x400) != 0x400)) {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002cc != '\x01') {
        FUN_0800f9c6(7);
      }
      DAT_20000170 = 200;
      FUN_080218be(0xe);
    }
  }
  return;
}



/* ENTRY 0x0800cb1a : FUN_0800cb1a */

void FUN_0800cb1a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  diag_TotalVoltage = DAT_20003280;
  diag_TotalVol_show = DAT_20003284;
  diag_VehicleSpeed = (DAT_20003274 + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)(((diag_VehicleSpeed - DAT_20000150) + diag_speedAcc * 9) / 10);
  diag_VectorVol = DAT_2000328c;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0800e2bc((int)DAT_200034a2);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0800e2f6((int)DAT_2000349a);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0800e330((int)DAT_200034a8);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0800e34a((int)DAT_200032cc);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_200034a4 >> 4));
  diag_lightad = DAT_2000349e;
  DAT_200030d2 = DAT_200034a6;
  iVar1 = diag_g_average_iq;
  if (diag_g_average_iq < 0) {
    iVar1 = -diag_g_average_iq;
  }
  diag_IQCurrent = (iVar1 + diag_IQCurrent * 0x1d) / 0x1e;
  diag_HallState = DAT_200005a0;
  diag_TotalCurrent = diag_BusCurrent;
  diag_cpurate = DAT_20000028;
  iVar1 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar1 = -diag_VehicleSpeed;
  }
  if ((DAT_200030fc < iVar1) && (DAT_200030fc = diag_VehicleSpeed, diag_VehicleSpeed < 0)) {
    DAT_200030fc = -diag_VehicleSpeed;
  }
  diag_allwarnbit = CONCAT22(DAT_200030be,DAT_2000326c);
  iVar1 = 0;
  if ((DAT_2000499e == '\0') && (DAT_20004b5e == '\0')) {
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      iVar1 = iVar1 + (uint)(ushort)(&DAT_20004ae2)[uVar2] + (uint)(ushort)(&DAT_20004ca2)[uVar2];
    }
    iVar3 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4;
    iVar1 = iVar3 + -0xaaa;
    if (iVar1 < 0x79) {
      if (iVar1 < 0x51) {
        if (30000 < DAT_20003294) {
          DAT_20003294 = DAT_20003294 + -10;
        }
      }
      else {
        iVar1 = ((iVar3 + -0xafa) * 41000) / 0x28;
        if (DAT_20003294 < iVar1 + 0x7526) {
          DAT_20003294 = DAT_20003294 + 10;
        }
        if (iVar1 + 0x753a < DAT_20003294) {
          DAT_20003294 = DAT_20003294 + -10;
        }
      }
    }
    else if (DAT_20003294 < 71000) {
      DAT_20003294 = DAT_20003294 + 10;
    }
  }
  else if (DAT_20003294 < 71000) {
    DAT_20003294 = DAT_20003294 + 10;
  }
  return;
}



/* ENTRY 0x0800cd58 : FUN_0800cd58 */

void FUN_0800cd58(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_200030d4 = DAT_200030d4 + 1;
  if (DAT_200030d4 % 0x32 == 0x19) {
    DAT_200030f0 = DAT_200030f0 + 1;
    DAT_200030f8 = DAT_200030f4 + DAT_200030f0;
  }
  if (DAT_2000313f != '\0') {
    DAT_2000313f = DAT_2000313f + -1;
  }
  FUN_0800e068();
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
        FUN_0800dfae();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000601 * 1000;
    FUN_080218be(1);
    diag_cartstep = '\x02';
    DAT_2000313f = -6;
    break;
  case '\x02':
    DAT_2000326e = DAT_2000326e | 0x45;
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
      iVar3 = FUN_08010870(diag_TotalVol_show);
      if (iVar3 == 1) {
        iVar3 = FUN_0800aa82();
        if (iVar3 == 0) {
          FUN_0800dfae(4);
        }
        else {
          FUN_0800dfa8(1);
          FUN_0800afd6();
        }
      }
      else {
        FUN_0800dfae(4);
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
      FUN_0800d1a4();
    }
    DAT_20000146 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_20000148 == 2) {
      DAT_2000313c = DAT_2000313c | 1;
      FUN_080218be(0xf0);
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
          FUN_0800d1a4();
        }
        uVar2 = DAT_20000148 + 1;
        bVar1 = 5 < DAT_20000148;
        DAT_20000148 = uVar2;
        if (bVar1) {
          FUN_0800e734();
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
  iVar3 = FUN_0800e236();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_0800dfae(1);
      diag_cartstep = '\b';
      DAT_20003116 = 1;
    }
  }
  DAT_200030d8 = DAT_200030d8 + 1;
  if (((DAT_2000313d == '\0') || (diag_BatState == '\x01')) || ((DAT_2000310f & 0x70) != 0)) {
    DAT_200030d8 = 0;
  }
  if ((DAT_2000313e == '\x01') && (10 < DAT_200030d8)) {
    DAT_200030d8 = DAT_200030d8 - 5;
  }
  if (DAT_200030dc + 300 < DAT_200030d8) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_20003116 = 1;
        FUN_0800dfae();
        diag_cartstep = '\b';
        DAT_200030d8 = 0;
      }
    }
  }
  else if ((DAT_200030dc < DAT_200030d8) && (DAT_200030d4 % 0x32 == 0x19)) {
    FUN_0800dfae(1);
  }
  if (DAT_200030d4 % 0x96 == 0x91) {
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
    DAT_200030d8 = 0;
    DAT_2000014c = '\0';
    DAT_2000014b = '\0';
    DAT_2000014a = '\0';
  }
  diag_LimitSpeed = (uint)DAT_20000601 * 1000;
  FUN_0800cb1a();
  FUN_0800c60a();
  FUN_0800c2fc();
  FUN_0800c200();
  FUN_0800c198();
  if (DAT_200032ba != '\0') {
    FUN_0800dfae(DAT_200032ba);
    DAT_200032ba = '\0';
  }
  if (DAT_200032bb != '\0') {
    FUN_0800dfa8(DAT_200032bb);
    DAT_200032bb = '\0';
  }
  return;
}



/* ENTRY 0x0800d19a : FUN_0800d19a */

void FUN_0800d19a(void)

{
  DAT_200030d0 = DAT_200034a0;
  return;
}



/* ENTRY 0x0800d1a4 : FUN_0800d1a4 */

void FUN_0800d1a4(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d1ec : FUN_0800d1ec */

void FUN_0800d1ec(uint *param_1)

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
  param_1[1] = *param_1 >> (&DAT_2000017c)[(uVar2 & 0xf0) >> 4];
  uVar2 = DAT_40021004;
  param_1[2] = param_1[1] >> (&DAT_2000017c)[(uVar2 & 0x700) >> 8];
  uVar2 = DAT_40021004;
  param_1[3] = param_1[1] >> (&DAT_2000017c)[(uVar2 & 0x3800) >> 0xb];
  uVar2 = DAT_40021004;
  param_1[4] = param_1[3] / (uint)(byte)(&DAT_2000018c)[(uVar2 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x0800d2be : FUN_0800d2be */

void FUN_0800d2be(undefined2 *param_1,int *param_2)

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
  FUN_0800d1ec(auStack_34);
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



/* ENTRY 0x0800d3ac : FUN_0800d3ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d3ac(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_20000198 = _DAT_1ffff7e8;
  DAT_2000019c = _DAT_1ffff7ec;
  DAT_200001a0 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003144)[uVar2] = 0;
  }
  if (DAT_20000198 != 0) {
    DAT_20003144 = (undefined1)DAT_20000198;
    DAT_20003145 = (undefined1)((uint)DAT_20000198 >> 8);
    DAT_20003146 = (undefined1)((uint)DAT_20000198 >> 0x10);
    DAT_20003147 = (undefined1)((uint)DAT_20000198 >> 0x18);
    DAT_20003148 = (undefined1)DAT_2000019c;
    DAT_20003149 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000314a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000314b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000314c = (undefined1)DAT_200001a0;
    DAT_2000314d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000314e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000314f = (undefined1)((uint)DAT_200001a0 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003144)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0800d4fa : FUN_0800d4fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d4fa(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_20000198 = _DAT_1ffff7e8;
  DAT_2000019c = _DAT_1ffff7ec;
  DAT_200001a0 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003144)[uVar2] = 0;
  }
  if (DAT_20000198 != 0) {
    DAT_20003144 = (undefined1)DAT_20000198;
    DAT_20003145 = (undefined1)((uint)DAT_20000198 >> 8);
    DAT_20003146 = (undefined1)((uint)DAT_20000198 >> 0x10);
    DAT_20003147 = (undefined1)((uint)DAT_20000198 >> 0x18);
    DAT_20003148 = (undefined1)DAT_2000019c;
    DAT_20003149 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_2000314a = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_2000314b = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_2000314c = (undefined1)DAT_200001a0;
    DAT_2000314d = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000314e = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000314f = (undefined1)((uint)DAT_200001a0 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003144)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0800d656 : FUN_0800d656 */

void FUN_0800d656(void)

{
  FUN_080238d4();
  FUN_08023758(0x35);
  FUN_08023800(&DWORD_08008300,0);
  FUN_080237b8();
  return;
}



/* ENTRY 0x0800d6a6 : FUN_0800d6a6 */

void FUN_0800d6a6(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0800d3ac();
  FUN_080238d4();
  FUN_08023758(0x35);
  FUN_08023800(&DWORD_08008304,uVar1);
  dVar2 = FUN_0800d3ac();
  if (dVar2 == 0xffffffff) {
    FUN_0800d656();
    FUN_080237b8();
    return;
  }
  FUN_080237b8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d71a : FUN_0800d71a */

/* WARNING: Removing unreachable block (ram,0x0800d764) */
/* WARNING: Removing unreachable block (ram,0x0800d7d6) */

void FUN_0800d71a(void)

{
  FUN_0800d6a6();
  DAT_200001a4 = 1;
  return;
}



/* ENTRY 0x0800d7dc : FUN_0800d7dc */

void FUN_0800d7dc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_08005304 ^ 0x3156;
  uVar1 = FUN_0800d4fa();
  if (uVar1 == (uVar2 + 0x3692 & 0xffff)) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d832 : FUN_0800d832 */

undefined8 FUN_0800d832(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_200001a4 == '\0') {
    iVar2 = FUN_0800d4fa();
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



/* ENTRY 0x0800d894 : FUN_0800d894 */

void FUN_0800d894(void)

{
  DAT_20000190 = DAT_20000190 + ((ushort)DAT_08005304 ^ 0x3156) + 0x3bcd;
  DAT_20000194 = DAT_20000194 + DAT_20000190;
  return;
}



/* ENTRY 0x0800d938 : FUN_0800d938 */

void FUN_0800d938(void)

{
  short sVar1;
  
  sVar1 = FUN_0800d4fa();
  DAT_20000192 = sVar1 + DAT_20000192;
  sVar1 = FUN_0800d4fa();
  DAT_20000192 = sVar1 + DAT_20000192;
  DAT_20000194 = DAT_20000194 - DAT_20000192;
  return;
}



/* ENTRY 0x0800d964 : FUN_0800d964 */

void FUN_0800d964(void)

{
  int iVar1;
  
  iVar1 = FUN_080237a4();
  if (iVar1 == 0) {
    FUN_080238d4();
    FUN_08023848(1);
    FUN_080237b8();
  }
  return;
}



/* ENTRY 0x0800d97c : FUN_0800d97c */

void FUN_0800d97c(void)

{
  FUN_080238d4();
  FUN_08023758(0x35);
  FUN_08023800(&DWORD_0800830c,0xfee1b00f);
  FUN_080237b8();
  return;
}



/* ENTRY 0x0800d9ac : FUN_0800d9ac */

undefined4 FUN_0800d9ac(void)

{
  if (diag_BOOTVERSION < 0x1010603) {
    FUN_080238d4();
    FUN_08023758(0x35);
    FUN_08023800(&DWORD_08008304,0);
    FUN_080237b8();
  }
  return 0;
}



/* ENTRY 0x0800d9d8 : FUN_0800d9d8 */

undefined4 FUN_0800d9d8(void)

{
  FUN_080238d4();
  FUN_08023758(0x35);
  FUN_08023800(0x803d800,0x28635690);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800d9f8 : FUN_0800d9f8 */

undefined4 FUN_0800d9f8(void)

{
  FUN_080238d4();
  FUN_08023758(0x35);
  FUN_08023764(0x803d800);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800da16 : FUN_0800da16 */

/* WARNING: Removing unreachable block (ram,0x0800da84) */
/* WARNING: Removing unreachable block (ram,0x0800da8e) */
/* WARNING: Removing unreachable block (ram,0x0800da9a) */
/* WARNING: Removing unreachable block (ram,0x0800da92) */
/* WARNING: Removing unreachable block (ram,0x0800daa4) */
/* WARNING: Removing unreachable block (ram,0x0800daae) */
/* WARNING: Removing unreachable block (ram,0x0800daaa) */
/* WARNING: Removing unreachable block (ram,0x0800da8a) */
/* WARNING: Removing unreachable block (ram,0x0800da7a) */
/* WARNING: Removing unreachable block (ram,0x0800da80) */
/* WARNING: Removing unreachable block (ram,0x0800da66) */

undefined4 FUN_0800da16(void)

{
  return 1;
}



/* ENTRY 0x0800dab2 : FUN_0800dab2 */

/* WARNING: Removing unreachable block (ram,0x0800db1c) */
/* WARNING: Removing unreachable block (ram,0x0800db12) */
/* WARNING: Removing unreachable block (ram,0x0800db18) */
/* WARNING: Removing unreachable block (ram,0x0800dafe) */

undefined4 FUN_0800dab2(void)

{
  return 1;
}



/* ENTRY 0x0800db7c : FUN_0800db7c */

void FUN_0800db7c(void)

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
  
  FUN_08023be8(0x1000);
  FUN_08023be8(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08023950(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08023950(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_08023950(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_08023e88(&DAT_40013000,&local_1c);
  FUN_08023e60(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800dc32 : FUN_0800dc32 */

void FUN_0800dc32(void)

{
  ushort uVar1;
  
  FUN_08023e60(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_08023e60(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800dc5e : FUN_0800dc5e */

undefined1 FUN_0800dc5e(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_08023e72(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_08023e72(&DAT_40013000,1);
        if (iVar3 != 0) {
          uVar1 = DAT_4001300c;
          return (char)uVar1;
        }
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      DAT_200001bc = DAT_200001bc + (uint)(0xfffffffe < DAT_200001b8);
      DAT_200001b8 = DAT_200001b8 + 1;
      return 0;
    }
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  bVar4 = 0xfffffffe < DAT_200001b8;
  DAT_200001b8 = DAT_200001b8 + 1;
  DAT_200001bc = DAT_200001bc + (uint)bVar4;
  return 0;
}



/* ENTRY 0x0800dcd0 : FUN_0800dcd0 */

undefined4 FUN_0800dcd0(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800dc5e(param_1);
  FUN_0800dc5e(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800dcf6 : FUN_0800dcf6 */

undefined4 FUN_0800dcf6(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800dc5e(param_1 | 0x80);
  uVar1 = FUN_0800dc5e(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800dd20 : FUN_0800dd20 */

undefined8 FUN_0800dd20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800dc5e(0xbb);
  for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = FUN_0800dc5e(0xff);
    *(undefined1 *)((int)local_20 + uVar2) = uVar1;
  }
  DAT_40010810 = 0x10;
  FUN_08023114(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800dd5e : FUN_0800dd5e */

void FUN_0800dd5e(undefined4 param_1)

{
  FUN_0800dcf6(param_1);
  return;
}



/* ENTRY 0x0800dd6a : FUN_0800dd6a */

void FUN_0800dd6a(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_0800dd5e(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001a8 = 0x2000;
      goto code_r0x0800ddbc;
    }
    if (uVar2 == 2) {
      DAT_200001a8 = 0x1000;
      goto code_r0x0800ddbc;
    }
    if (uVar2 == 3) {
      DAT_200001a8 = 0x800;
      goto code_r0x0800ddbc;
    }
  }
  DAT_200001a8 = 0x4000;
code_r0x0800ddbc:
  bVar1 = FUN_0800dd5e(0x1b);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001aa = 0x28f;
      return;
    }
    if (uVar2 == 2) {
      DAT_200001aa = 0x147;
      return;
    }
    if (uVar2 == 3) {
      DAT_200001aa = 0xa3;
      return;
    }
  }
  DAT_200001aa = 0x51e;
  return;
}



/* ENTRY 0x0800de08 : FUN_0800de08 */

void FUN_0800de08(undefined4 param_1,undefined4 param_2)

{
  FUN_0800dcd0(param_1,param_2);
  return;
}



/* ENTRY 0x0800de18 : FUN_0800de18 */

bool FUN_0800de18(void)

{
  int iVar1;
  
  FUN_0800db7c();
  do {
    iVar1 = FUN_0800de08(0x6b,0x80);
  } while (iVar1 == 0);
  FUN_08008e00(0xf);
  do {
    iVar1 = FUN_0800de08(0x6b,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800de08(0x19,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800de08(0x1a,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800de08(0x1c,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800de08(0x1b,8);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800de08(0x38,1);
  } while (iVar1 == 0);
  iVar1 = FUN_0800dd5e(0x75);
  if (iVar1 != 0) {
    FUN_0800dd6a();
    FUN_0800dc32();
  }
  return iVar1 != 0;
}



/* ENTRY 0x0800dea0 : FUN_0800dea0 */

void FUN_0800dea0(undefined4 param_1)

{
  FUN_0800dd20(param_1);
  return;
}



/* ENTRY 0x0800deac : FUN_0800deac */

undefined4 FUN_0800deac(int *param_1)

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
  FUN_0800dea0(local_2c);
  uStack_1b = SUB41(local_2c._0_4_,1);
  local_1c = (undefined1)local_2c._0_4_;
  *param_1 = ((int)CONCAT11(local_1c,uStack_1b) << 0xc) / (int)(uint)DAT_200001a8;
  uStack_19 = SUB41(local_2c._0_4_,3);
  uStack_1a = SUB41(local_2c._0_4_,2);
  param_1[1] = ((int)CONCAT11(uStack_1a,uStack_19) << 0xc) / (int)(uint)DAT_200001a8;
  local_17 = SUB41(local_2c._4_4_,1);
  local_18 = (undefined1)local_2c._4_4_;
  param_1[2] = ((int)CONCAT11(local_18,local_17) << 0xc) / (int)(uint)DAT_200001a8;
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



/* ENTRY 0x0800df6c : FUN_0800df6c */

void FUN_0800df6c(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(8,1);
  local_8 = 0x10030100;
  FUN_08023950(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800dfa8 : FUN_0800dfa8 */

void FUN_0800dfa8(undefined1 param_1)

{
  DAT_200001c0 = param_1;
  return;
}



/* ENTRY 0x0800dfae : FUN_0800dfae */

void FUN_0800dfae(undefined1 param_1)

{
  DAT_200001c1 = param_1;
  return;
}



/* ENTRY 0x0800dfb4 : FUN_0800dfb4 */

void FUN_0800dfb4(void)

{
  if (DAT_200001c0 == '\0') {
    if (DAT_200001c1 != '\0') {
      if (DAT_200001c2 < 4) {
        DAT_422181a0 = 1;
        DAT_200001c2 = DAT_200001c2 + 1;
      }
      else if (DAT_200001c2 < 6) {
        DAT_422181a0 = 0;
        DAT_200001c2 = DAT_200001c2 + 1;
      }
      else {
        DAT_200001c2 = 0;
        DAT_200001c1 = DAT_200001c1 + -1;
      }
    }
  }
  else if (DAT_200001c2 < 0x1e) {
    DAT_422181a0 = 1;
    DAT_200001c2 = DAT_200001c2 + 1;
  }
  else if (DAT_200001c2 < 0x32) {
    DAT_422181a0 = 0;
    DAT_200001c2 = DAT_200001c2 + 1;
  }
  else {
    DAT_200001c2 = 0;
    DAT_200001c0 = DAT_200001c0 + -1;
  }
  return;
}



/* ENTRY 0x0800e068 : FUN_0800e068 */

void FUN_0800e068(void)

{
  int iVar1;
  
  iVar1 = DAT_42220134;
  if (iVar1 == 0) {
    if (DAT_200001d0 == '\0') {
      if (DAT_200001c6 < 0xfe) {
        DAT_200001c6 = DAT_200001c6 + 1;
        if (0x14 < DAT_200001c6) {
          if (DAT_200001cb == 1) {
            DAT_200001c9 = DAT_200001cb;
          }
          else if (DAT_200001cb == 2) {
            DAT_200001ca = 1;
          }
          else if ((3 < DAT_200001cb) && (DAT_200001cb < 8)) {
            DAT_200001cc = 1;
          }
          DAT_200001cb = 0;
        }
      }
      else {
        DAT_200001c8 = '\0';
        DAT_200001c9 = 0;
        DAT_200001ca = 0;
        DAT_200001cc = 0;
        DAT_200001cb = 0;
      }
    }
    else {
      if (1 < DAT_200001c4) {
        if (DAT_200001c4 < 0x14) {
          DAT_200001cb = DAT_200001cb + 1;
        }
        DAT_200001c8 = DAT_200001c8 + '\x01';
      }
      DAT_200001cd = 0;
      DAT_200001c4 = 0;
    }
    DAT_200001d0 = 0;
  }
  else {
    if (DAT_200001d0 == '\0') {
      if (0x14 < DAT_200001c6) {
        DAT_200001cb = 0;
        DAT_200001ca = 0;
        DAT_200001cc = 0;
      }
      if (2 < DAT_200001c6) {
        DAT_200001c8 = '\x01';
      }
      DAT_200001ce = 0;
      DAT_200001cf = 0;
      DAT_200001c6 = 0;
      DAT_200001c9 = 0;
    }
    else {
      if (DAT_200001c4 < 0xfe) {
        DAT_200001c4 = DAT_200001c4 + 1;
      }
      if (DAT_200001cb == 4) {
        DAT_200001cd = 1;
      }
      if (100 < DAT_200001c4) {
        DAT_200001cc = 0;
        DAT_200001ca = 0;
        DAT_200001cb = 0;
      }
      if ((DAT_200001c4 == 0x28) && (DAT_200001cb == 0)) {
        DAT_200001ce = 1;
      }
      if (DAT_200001c4 == 0xfa) {
        DAT_200001cf = 1;
      }
      if (0x27 < DAT_200001c4) {
        DAT_200001c8 = '\0';
      }
    }
    DAT_200001d0 = 1;
  }
  return;
}



/* ENTRY 0x0800e1c8 : FUN_0800e1c8 */

undefined4 FUN_0800e1c8(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_200001cd == '\0') {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      DAT_200001cd = '\0';
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x0800e220 : FUN_0800e220 */

bool FUN_0800e220(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001c8 == '\x02';
  if (bVar1) {
    DAT_200001c8 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e236 : FUN_0800e236 */

bool FUN_0800e236(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001ce != '\0';
  if (bVar1) {
    DAT_200001ce = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e25e : FUN_0800e25e */

void FUN_0800e25e(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(0x10,1);
  local_8 = 0x28032000;
  FUN_08023950(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0800e2bc : FUN_0800e2bc */

int FUN_0800e2bc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_080269b4)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e2f6 : FUN_0800e2f6 */

int FUN_0800e2f6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_080269b4)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e330 : FUN_0800e330 */

int FUN_0800e330(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0800e34a : FUN_0800e34a */

int FUN_0800e34a(int param_1)

{
  DAT_200001d2 = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001d2 * 9) / 10);
  return (int)(DAT_200001d2 / 100);
}



/* ENTRY 0x0800e38e : FUN_0800e38e */

undefined4 FUN_0800e38e(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_080238d4();
  FUN_08023758(0x34);
  DAT_200001d4 = FUN_08023764((&DAT_08026b64)[param_1]);
  DAT_20003258 = 0;
  DAT_2000325c = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_20003258,*(uint *)(&DAT_20003150 + uVar1 * 4));
    DAT_20003258 = DAT_20003258 + *(uint *)(&DAT_20003150 + uVar1 * 4);
    DAT_2000325c = DAT_2000325c + (uint)bVar2;
    DAT_200001d4 = FUN_08023800((&DAT_08026b64)[param_1] + uVar1 * 4,
                                *(undefined4 *)(&DAT_20003150 + uVar1 * 4));
  }
  DAT_200001d4 = FUN_08023800((&DAT_08026b64)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003150 + uVar1 * 4));
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001d4 = FUN_08023800((&DAT_08026b64)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003150 + uVar1 * 4));
  FUN_08023758(0x34);
  FUN_080237b8();
  return 0;
}



/* ENTRY 0x0800e436 : FUN_0800e436 */

bool FUN_0800e436(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_08026b64)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08026b64)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x0800e498 : FUN_0800e498 */

undefined4 FUN_0800e498(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&DAT_20003150 + uVar1 * 4) =
         *(undefined4 *)((&DAT_08026b64)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x0800e4ba : FUN_0800e4ba */

undefined4 FUN_0800e4ba(void)

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
      (&DAT_200031b2)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_200031b2)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x0800e54c : FUN_0800e54c */

undefined4 FUN_0800e54c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e436(1);
  if (iVar1 == 0) {
    FUN_0800e38e(1);
    iVar1 = FUN_0800e436(1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800e436(0);
      if (iVar1 == 0) {
        FUN_0800e38e(0);
        iVar1 = FUN_0800e436(0);
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
      FUN_0800e38e(0);
      iVar1 = FUN_0800e436(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_0800e38e(0);
    iVar1 = FUN_0800e436(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0800e38e(1);
      iVar1 = FUN_0800e436(1);
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



/* ENTRY 0x0800e5c4 : FUN_0800e5c4 */

undefined4 FUN_0800e5c4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e436(0);
  if (iVar1 == 0) {
    iVar1 = FUN_0800e436(1);
    if (iVar1 == 0) {
      FUN_0800e4ba();
      uVar2 = 0;
    }
    else {
      FUN_0800e498(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_0800e498(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800e5fc : FUN_0800e5fc */

void FUN_0800e5fc(void)

{
  FUN_080238d4();
  FUN_08023764(0x803a000);
  FUN_080237b8();
  DAT_200001d8 = 0;
  DAT_200001d6 = 0;
  return;
}



/* ENTRY 0x0800e61a : FUN_0800e61a */

bool FUN_0800e61a(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001d6;
  if (DAT_200001d6 < 0x3ff) {
    DAT_200001d8 = DAT_200001d8 + param_1;
    FUN_080238d4();
    FUN_080237c8((uint)DAT_200001d6 * 2 + 0x803a000,param_1);
    FUN_080237b8();
    DAT_200001d6 = DAT_200001d6 + 1;
  }
  else {
    FUN_080238d4();
    FUN_08023764(0x803a000);
    FUN_080237b8();
    DAT_200001d8 = DAT_200001d8 + param_1 * 10;
    DAT_200031b0 = (undefined2)((uint)DAT_200001d8 >> 0x10);
    DAT_200031ae = (undefined2)DAT_200001d8;
    DAT_200001d6 = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x0800e69c : FUN_0800e69c */

void FUN_0800e69c(void)

{
  uint uVar1;
  
  DAT_200001d8 = CONCAT22(DAT_200031b0,DAT_200031ae);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001d6 = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001d8 = DAT_200001d8 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}



/* ENTRY 0x0800e710 : FUN_0800e710 */

void FUN_0800e710(void)

{
  int iVar1;
  
  iVar1 = FUN_0800de18();
  if (iVar1 == 0) {
    DAT_2000326c = DAT_2000326c | 0x40;
  }
  FUN_08012a34();
  FUN_08010dbe();
  DAT_20003294 = 71000;
  return;
}



/* ENTRY 0x0800e734 : FUN_0800e734 */

void FUN_0800e734(void)

{
  FUN_08010732();
  FUN_08010044();
  FUN_0800894a(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x0800e74e : FUN_0800e74e */

void FUN_0800e74e(void)

{
  int iVar1;
  
  iVar1 = DAT_20003274;
  if (DAT_20003274 < 0) {
    iVar1 = -DAT_20003274;
  }
  if ((iVar1 < 0x12d) || (DAT_200005b4 == '\0')) {
    DAT_2000021e = 0;
  }
  else if (DAT_2000021e < 100) {
    DAT_2000021e = DAT_2000021e + 1;
  }
  if (((byte)DAT_2000326e & 0x10) == 0) {
    if (DAT_2000021e < 0x3c) {
      iVar1 = (int)DAT_20000310;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_2000020c < 800) {
          DAT_2000020c = DAT_2000020c + 1;
        }
        iVar1 = DAT_20003274;
        if (DAT_20003274 < 0) {
          iVar1 = -DAT_20003274;
        }
        if ((iVar1 < 500) && (DAT_2000020c < 600)) {
          DAT_2000020c = DAT_2000020c + 0x1e;
        }
      }
      else if (3 < DAT_2000020c) {
        DAT_2000020c = DAT_2000020c + -3;
      }
      iVar1 = (int)DAT_20000310;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_PhcurrLimit_Vq_P < iVar1) {
        if (DAT_20000210 < 800) {
          DAT_20000210 = DAT_20000210 + 1;
        }
        iVar1 = DAT_20003274;
        if (DAT_20003274 < 0) {
          iVar1 = -DAT_20003274;
        }
        if ((iVar1 < 500) && (DAT_20000210 < 600)) {
          DAT_20000210 = DAT_20000210 + 0x1e;
        }
      }
      else if (3 < DAT_20000210) {
        DAT_20000210 = DAT_20000210 + -3;
      }
      if (10 < DAT_20000214) {
        DAT_20000214 = DAT_20000214 + -10;
      }
    }
    else {
      if (3 < DAT_2000020c) {
        DAT_2000020c = DAT_2000020c + -3;
      }
      if (3 < DAT_20000210) {
        DAT_20000210 = DAT_20000210 + -3;
      }
      if (DAT_20000214 < 0x708) {
        DAT_20000214 = DAT_20000214 + 10;
      }
    }
  }
  else {
    if (DAT_2000020c < 200) {
      DAT_2000020c = 200;
    }
    else if (DAT_2000020c < 600) {
      DAT_2000020c = DAT_2000020c + 6;
    }
    else if (DAT_2000020c < 800) {
      DAT_2000020c = DAT_2000020c + 2;
    }
    if (DAT_20000210 < 200) {
      DAT_20000210 = 200;
    }
    else if (DAT_20000210 < 600) {
      DAT_20000210 = DAT_20000210 + 6;
    }
    else if (DAT_20000210 < 800) {
      DAT_20000210 = DAT_20000210 + 2;
    }
    if (10 < DAT_20000214) {
      DAT_20000214 = DAT_20000214 + -10;
    }
  }
  if (DAT_2000020c < 0xc9) {
    diag_BuscurLimit = diag_BuscurLimit_set;
    DAT_2000326c = DAT_2000326c & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_2000020c)) / 900;
    DAT_2000326c = DAT_2000326c | 4;
  }
  if (DAT_20000210 < 0xc9) {
    iVar1 = DAT_20000214 + 900;
  }
  else {
    iVar1 = (0x44c - DAT_20000210) + DAT_20000214;
  }
  diag_PhcurrLimit = (diag_PhcurrLimit_set * iVar1) / 900;
  iVar1 = (int)DAT_20000310;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (diag_buscurlmt_vq < iVar1) {
LAB_0800ea00:
    if (DAT_200002cc != '\x01') {
      if (DAT_20000218 < 100) {
        DAT_20000218 = DAT_20000218 + 1;
      }
      else {
        DAT_2000326c = DAT_2000326c | 2;
      }
      goto LAB_0800ea52;
    }
  }
  else {
    iVar1 = (int)DAT_20000310;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_0800ea00;
  }
  if (DAT_20000218 < 0xb) {
    DAT_2000326c = DAT_2000326c & 0xfffd;
  }
  else {
    DAT_20000218 = DAT_20000218 + -1;
  }
LAB_0800ea52:
  if ((((DAT_2000326c & 6) == 0) || (((byte)DAT_2000326e & 0x10) == 0)) || (DAT_20003278 != '\0')) {
    DAT_2000021a = 0;
  }
  else if (DAT_2000021a < 0x4b0) {
    DAT_2000021a = DAT_2000021a + 1;
  }
  else {
    FUN_0800e734();
    DAT_2000021a = 0;
  }
  return;
}



/* ENTRY 0x0800ea9a : FUN_0800ea9a */

void FUN_0800ea9a(void)

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
  
  iVar4 = DAT_20003274;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_20003280;
  iVar8 = 1;
  if (DAT_20003274 < 0) {
    iVar8 = -1;
  }
  if (DAT_20003280 < 0x2329) {
    local_30 = 9000;
  }
  local_34 = diag_LimitSpeed;
  if (70000 < diag_LimitSpeed) {
    local_34 = 70000;
  }
  if (local_34 < 0x61a9) {
    local_34 = 25000;
  }
  if (DAT_200001dc < local_30) {
    diag_g_winespeed_lv = diag_LimitSpeed;
    if (70000 < diag_LimitSpeed) {
      diag_g_winespeed_lv = 70000;
    }
    DAT_200001e0 = 0;
  }
  else {
    diag_g_winespeed_lv =
         ((((local_30 + -9000) * 100) / (DAT_200001dc + -9000)) * (local_34 + -25000)) / 100 + 25000
    ;
    DAT_200001e0 = 1;
    if (diag_LimitSpeed < diag_g_winespeed_lv) {
      diag_g_winespeed_lv = diag_LimitSpeed;
    }
  }
  if (DAT_20003294 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_20003294;
  }
  if (DAT_2000328c < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_2000328c + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001f4 * iVar2) / 400;
  }
  iVar6 = DAT_200001f4;
  if ((iVar2 <= DAT_200001f4) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_20003274;
  if (DAT_20003274 < 0) {
    iVar2 = -DAT_20003274;
  }
  if (diag_g_winespeed_lv + 4000 < iVar2) {
    iVar2 = DAT_20003274;
    if (DAT_20003274 < 0) {
      iVar2 = -DAT_20003274;
    }
    iVar2 = ((iVar2 - (diag_g_winespeed_lv + 4000)) * 100) / 1000;
    lVar1 = (longlong)DAT_200001f4 * (longlong)iVar2 * (longlong)iVar2;
    local_48 = (undefined4)lVar1;
    uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_0802308e(local_48,uStack_44,90000,0);
  }
  else {
    iVar2 = 0;
  }
  iVar3 = DAT_200001f4;
  if ((iVar2 <= DAT_200001f4) && (iVar3 = iVar2, iVar2 < 0)) {
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
      iVar5 = iVar5 + (short)(&DAT_200001e8)[uVar7];
    }
    else if (iVar3 < iVar5) {
      iVar5 = iVar5 - (int)(short)(&DAT_200001e8)[uVar7] / 3;
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
      iVar5 = iVar5 - (short)(&DAT_200001e8)[uVar7];
    }
    else if (iVar5 < -iVar3) {
      iVar5 = iVar5 + (int)(short)(&DAT_200001e8)[uVar7] / 3;
    }
  }
  diag_angleoffset_int = iVar5;
  return;
}



/* ENTRY 0x0800edb2 : FUN_0800edb2 */

void FUN_0800edb2(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_20003264 = DAT_20003264 + 1;
  if (1 < diag_motionstep) {
    if ((DAT_2000339c < DAT_200032a0 + -0x96) && (DAT_2000339c < 0xa000)) {
      DAT_2000339c = DAT_2000339c + 100;
    }
    else if ((DAT_200032a0 + 0x96 < DAT_2000339c) && (-0xa000 < DAT_2000339c)) {
      DAT_2000339c = DAT_2000339c + -100;
    }
  }
  if (DAT_200032ac != 0) {
    DAT_200032ac = DAT_200032ac + -1;
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002cc = 7;
    iVar2 = FUN_0800ff70(0);
    if ((iVar2 == 1) && (DAT_20000369 == 1)) {
      diag_motionstep = DAT_20000369;
      DAT_200002cc = DAT_20000369;
      if (DAT_20000324 != '\0') {
        DAT_2000326c = DAT_2000326c | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_2000326e & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_2000326e & 8) != 0) {
      diag_motionstep = 8;
    }
    if (diag_acce_z < -0x400) {
      DAT_200032ac = 500;
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
        iVar2 = DAT_20003274;
        if (DAT_20003274 < 0) {
          iVar2 = -DAT_20003274;
        }
        if (((iVar2 < 2000) && (((byte)DAT_2000326e & 5) == 5)) &&
           (((DAT_2000326e & 10) == 0 &&
            ((((DAT_2000326c & 1) == 0 && (DAT_200002cc == 1)) && (DAT_200032ac == 0)))))) {
          DAT_200002cc = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_2000329c = 0;
          FUN_0800894a(3);
          diag_rollptag_auto = 0x28000;
          FUN_080218be(4);
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
      if (((iVar2 < 0x28000) && (((byte)DAT_2000326e & 4) == 4)) && ((DAT_2000326e & 8) == 0)) {
        if ((DAT_2000326e & 0x20) == 0) {
          if (DAT_2000329c + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_2000329c + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_2000329c;
            FUN_0800894a(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_080218be(0xe1);
        }
        break;
      }
    }
    FUN_08010732();
    diag_motionstep = 2;
    FUN_08010044();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_080218be(0xe0);
    DAT_200032ac = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f182;
        }
        if ((((byte)DAT_2000326e & 4) == 4) && ((DAT_2000326e & 8) == 0)) {
          FUN_0800ea9a();
          iVar2 = DAT_20003274;
          if (DAT_20003274 < 0) {
            iVar2 = -DAT_20003274;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003274;
            if (DAT_20003274 < 0) {
              iVar2 = -DAT_20003274;
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
          else if (diag_rollptag_auto < DAT_200032a4) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_2000326e & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_080218be(0xe1);
          }
          break;
        }
      }
    }
LAB_0800f182:
    DAT_200032ba = 1;
    FUN_08010732();
    diag_motionstep = 2;
    FUN_08010044();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_080218be(0xe0);
    DAT_200032ac = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f352;
        }
        if ((((byte)DAT_2000326e & 4) == 4) && ((DAT_2000326e & 8) == 0)) {
          iVar2 = DAT_20003274;
          if (DAT_20003274 < 0) {
            iVar2 = -DAT_20003274;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003274;
            if (DAT_20003274 < 0) {
              iVar2 = -DAT_20003274;
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
          else if (diag_rollptag_auto < DAT_200032a4) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_20003274 < 0x2ee1) {
            if (DAT_20003274 < 1) {
              if (DAT_20003274 == 0) {
                DAT_2000329c = -0x19000;
              }
              else if (DAT_20003274 < -11999) {
                DAT_2000329c = -0x12000;
              }
              else {
                DAT_2000329c = -0x19000;
              }
            }
            else {
              DAT_2000329c = 0x19000;
            }
          }
          else {
            DAT_2000329c = 0x12000;
          }
          if (DAT_2000329c + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_2000329c + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_2000329c;
          }
          break;
        }
      }
    }
LAB_0800f352:
    DAT_200032ba = 1;
    FUN_08010732();
    diag_motionstep = 2;
    FUN_08010044();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_080218be(0xe0);
    DAT_200032ac = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_200032ba = 1;
      FUN_08008e00(0x3c);
      iVar2 = FUN_0800fcde();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_0800fb30();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800894a(0xf0);
    FUN_08008e00(0xa0);
    DAT_2000326e = DAT_2000326e & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_20000324 != '\0') {
      DAT_2000326c = DAT_2000326c | 0x10;
    }
    if (DAT_20000322 != '\0') {
      DAT_2000326c = DAT_2000326c | 0x20;
    }
    if (DAT_200005ec == '\x01') {
      DAT_2000326e = DAT_2000326e | 1;
    }
    else {
      DAT_2000326e = DAT_2000326e & 0xfffe;
    }
  }
  if (DAT_20000708 == 0) {
    DAT_2000326e = DAT_2000326e | 0x40;
  }
  else if (DAT_20003278 == '\0') {
    DAT_2000326e = DAT_2000326e & 0xffbf;
  }
  FUN_0800e74e();
  uVar5 = CONCAT44(DAT_200032fc,DAT_200032f8);
  iVar2 = DAT_20003274;
  if (DAT_20003274 < 0) {
    iVar2 = -DAT_20003274;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_200032e8;
    if (DAT_200032e8 < 0) {
      iVar2 = -DAT_200032e8;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_200032f8 * 4999);
      uVar3 = DAT_200032e8 * 5000;
      uVar5 = FUN_0802308e(uVar4 + uVar3,
                           DAT_200032fc * 4999 + (int)((ulonglong)DAT_200032f8 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_20003304,DAT_20003300);
    DAT_200032fc = (int)((ulonglong)uVar5 >> 0x20);
    DAT_200032f8 = (uint)uVar5;
    iVar2 = DAT_200032ec;
    if (DAT_200032ec < 0) {
      iVar2 = -DAT_200032ec;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003300 * 4999);
      uVar3 = DAT_200032ec * 5000;
      uVar6 = FUN_0802308e(uVar4 + uVar3,
                           DAT_20003304 * 4999 + (int)((ulonglong)DAT_20003300 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_200032fc,DAT_200032f8);
    }
    uVar7 = CONCAT44(DAT_2000330c,DAT_20003308);
    DAT_20003304 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003300 = (uint)uVar6;
    DAT_200032fc = (int)((ulonglong)uVar5 >> 0x20);
    DAT_200032f8 = (uint)uVar5;
    iVar2 = DAT_200032f0;
    if (DAT_200032f0 < 0) {
      iVar2 = -DAT_200032f0;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003308 * 4999);
      uVar3 = DAT_200032f0 * 5000;
      uVar7 = FUN_0802308e(uVar4 + uVar3,
                           DAT_2000330c * 4999 + (int)((ulonglong)DAT_20003308 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_20003304,DAT_20003300);
      uVar5 = CONCAT44(DAT_200032fc,DAT_200032f8);
    }
    DAT_2000330c = (int)((ulonglong)uVar7 >> 0x20);
    DAT_20003308 = (uint)uVar7;
    DAT_20003304 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003300 = (uint)uVar6;
    DAT_200032fc = (int)((ulonglong)uVar5 >> 0x20);
    DAT_200032f8 = (uint)uVar5;
    diag_vttest_0_ = FUN_0802308e(DAT_200032f8,DAT_200032fc,5000,0);
    diag_vttest_1_ = FUN_0802308e(DAT_20003300,DAT_20003304,5000,0);
    diag_vttest_2_ = FUN_0802308e(DAT_20003308,DAT_2000330c,5000,0);
  }
  return;
}



/* ENTRY 0x0800f5ae : FUN_0800f5ae */

void FUN_0800f5ae(void)

{
  int iVar1;
  int iVar2;
  
  DAT_20003274 = ((diag_HallRSP * 0x13240) / 15000 + DAT_20003274 * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000318) / 10;
  DAT_20003280 = (DAT_20003280 * 9 + DAT_2000031c) / 10;
  DAT_2000328c = FUN_0800afee((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002cc;
  if ((2 < diag_motionstep) && (diag_motionstep < 8)) {
    DAT_200001fc = (diag_BusCurrent / 10) * (DAT_20003280 / 100) + DAT_200001fc;
    DAT_20000200 = DAT_20000200 + 1;
    if (0x31 < DAT_20000200) {
      DAT_20000200 = 0;
      diag_this_ws = DAT_200001fc / 500 + diag_this_ws;
      DAT_200001fc = 0;
    }
  }
  iVar1 = DAT_20003274;
  if (DAT_20003274 < 0) {
    iVar1 = -DAT_20003274;
  }
  if (iVar1 < 3000) {
    if (DAT_20003278 != '\0') {
      DAT_20003278 = DAT_20003278 + -1;
    }
  }
  else {
    DAT_20003278 = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_200001f8 == '\0') {
      iVar1 = DAT_20003284 - DAT_20003280;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_20003280)) {
        DAT_200001f8 = '\x01';
      }
      else {
        DAT_20003284 = (DAT_20003284 * 0x13 + DAT_20003280) / 0x14;
      }
    }
    else if (DAT_20003284 + 1 < DAT_20003280) {
      DAT_20003284 = DAT_20003284 + 1;
    }
    else if (DAT_20003280 + 1 < DAT_20003284) {
      DAT_20003284 = DAT_20003284 + -1;
    }
    else {
      DAT_20003284 = DAT_20003280;
    }
  }
  DAT_20000202 = (short)((DAT_20000202 * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_20000202 / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_20003284 / 100);
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
    if ((0x32 < DAT_20000208) && (iVar2 < 10000)) {
      DAT_20000208 = DAT_20000208 + -1;
    }
  }
  else if (DAT_20000208 < 100) {
    DAT_20000208 = DAT_20000208 + 1;
  }
  iVar1 = (((diag_VqIqRateRT * diag_PhcurrLimit) / 100) * (int)DAT_20000208) / 100;
  if (iVar2 < 0x6d61) {
    if (iVar2 < -28000) {
      iVar2 = -28000;
    }
  }
  else {
    iVar2 = 28000;
  }
  if (DAT_20000204 + 400 < iVar2) {
    iVar2 = DAT_20000204 + 400;
  }
  else if (iVar2 < DAT_20000204 + -400) {
    iVar2 = DAT_20000204 + -400;
  }
  DAT_20000204 = iVar2;
  diag_RsSpeedVq = (diag_VqSpeedRateRT * diag_HallRSP) / 100;
  diag_RtIqVq = (diag_VqIqRateRT * diag_g_average_iq) / 100;
  diag_PhcurrLimit_Vq_P = DAT_20000204 + iVar1;
  diag_PhcurrLimit_Vq_N = -iVar1 - DAT_20000204;
  if (DAT_20000321 != '\0') {
    DAT_2000326c = DAT_2000326c | 0x80;
  }
  return;
}



/* ENTRY 0x0800f998 : FUN_0800f998 */

void FUN_0800f998(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fdb2();
    FUN_08010088();
  }
  return;
}



/* ENTRY 0x0800f9ac : FUN_0800f9ac */

bool FUN_0800f9ac(void)

{
  if (DAT_20003278 == '\0') {
    DAT_2000326e = DAT_2000326e | 8;
  }
  return DAT_20003278 == '\0';
}



/* ENTRY 0x0800f9c6 : FUN_0800f9c6 */

void FUN_0800f9c6(int param_1)

{
  if (param_1 == 7) {
    DAT_2000326e = DAT_2000326e | 0x20;
  }
  return;
}



/* ENTRY 0x0800f9d8 : FUN_0800f9d8 */

void FUN_0800f9d8(void)

{
  FUN_0800f9c6(7);
  return;
}



/* ENTRY 0x0800f9e2 : FUN_0800f9e2 */

undefined4 FUN_0800f9e2(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0800f9ea : FUN_0800f9ea */

undefined4 FUN_0800f9ea(void)

{
  return diag_pintch;
}



/* ENTRY 0x0800f9f2 : FUN_0800f9f2 */

undefined4 FUN_0800f9f2(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0800f9f8 : FUN_0800f9f8 */

void FUN_0800f9f8(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_20003278 == '\0') {
    DAT_200032a0 = param_1;
  }
  return;
}



/* ENTRY 0x0800fa18 : FUN_0800fa18 */

void FUN_0800fa18(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_20003278 == '\0') {
    DAT_200032a4 = param_1;
  }
  return;
}



/* ENTRY 0x0800fa3a : FUN_0800fa3a */

void FUN_0800fa3a(undefined1 param_1)

{
  DAT_200032b9 = param_1;
  return;
}



/* ENTRY 0x0800fa42 : FUN_0800fa42 */

bool FUN_0800fa42(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0800faa8 : FUN_0800faa8 */

void FUN_0800faa8(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800fad4 : FUN_0800fad4 */

uint FUN_0800fad4(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800fb30 : FUN_0800fb30 */

undefined4 FUN_0800fb30(void)

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
  FUN_08023202(&local_64,0x1c);
  FUN_08008e00(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800deac(&local_64);
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
  DAT_200033a0 = FUN_0802308e(local_38,local_34,sVar1,0);
  DAT_200033a4 = FUN_0802308e(local_40,local_3c,sVar1,0);
  DAT_200033a8 = FUN_0802308e(local_48,local_44,sVar1,0);
  DAT_200033ac = FUN_0802308e(uVar3,iVar4,sVar1,0);
  DAT_200033b0 = FUN_0802308e(uVar5,iVar6,sVar1,0);
  DAT_200033b4 = FUN_0802308e(local_30,local_2c,sVar1,0);
  iVar4 = DAT_200033a0;
  if (DAT_200033a0 < 0) {
    iVar4 = -DAT_200033a0;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_200033a4;
    if (DAT_200033a4 < 0) {
      iVar4 = -DAT_200033a4;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_200033a8;
      if (DAT_200033a8 < 0) {
        iVar4 = -DAT_200033a8;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_200033ac;
        if (DAT_200033ac < 0) {
          iVar4 = -DAT_200033ac;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_200033b0;
          if (DAT_200033b0 < 0) {
            iVar4 = -DAT_200033b0;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_200033b4;
            if (DAT_200033b4 < 0) {
              iVar4 = -DAT_200033b4;
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



/* ENTRY 0x0800fcde : FUN_0800fcde */

undefined4 FUN_0800fcde(void)

{
  FUN_0800deac(&DAT_200032c0);
  return DAT_200032c8;
}



/* ENTRY 0x0800fd58 : FUN_0800fd58 */

void FUN_0800fd58(void)

{
  FUN_0800faa8(&DAT_20000220);
  FUN_0800faa8(&DAT_2000022c);
  FUN_0800faa8(&DAT_20000238);
  FUN_0800faa8(&DAT_20000244);
  FUN_0800faa8(&DAT_20000250);
  FUN_0800faa8(&DAT_2000025c);
  FUN_08008944(2000);
  FUN_0800894a(0xf0);
  DAT_2000339c = 0;
  DAT_200032f8 = 0;
  DAT_200032fc = 0;
  DAT_20003300 = 0;
  DAT_20003304 = 0;
  DAT_20003308 = 0;
  DAT_2000330c = 0;
  return;
}



/* ENTRY 0x0800fdb2 : FUN_0800fdb2 */

void FUN_0800fdb2(void)

{
  int iVar1;
  
  FUN_0800deac(&DAT_200032c0);
  DAT_20000274 = DAT_200032c0 - DAT_200033a0;
  DAT_20000278 = DAT_200032c4 - DAT_200033a4;
  DAT_2000027c = DAT_200032c8;
  DAT_20000268 = DAT_200032d0 - DAT_200033ac;
  DAT_2000026c = DAT_200032d4 - DAT_200033b0;
  DAT_20000270 = DAT_200032d8 - DAT_200033b4;
  diag_acce_x = FUN_0800fad4(&DAT_20000220,DAT_20000274);
  diag_acce_y = FUN_0800fad4(&DAT_2000022c,DAT_20000278);
  diag_acce_z = FUN_0800fad4(&DAT_20000238,DAT_2000027c);
  DAT_200032e8 = FUN_0800fad4(&DAT_20000244,-DAT_2000026c);
  DAT_200032ec = FUN_0800fad4(&DAT_20000250,DAT_20000268);
  DAT_200032f0 = FUN_0800fad4(&DAT_2000025c,DAT_20000270);
  iVar1 = FUN_0802308e(DAT_200032f8,DAT_200032fc,5000,0);
  diag_gyro_x = DAT_200032e8 - iVar1;
  iVar1 = FUN_0802308e(DAT_20003300,DAT_20003304,5000,0);
  diag_gyro_y = DAT_200032ec - iVar1;
  iVar1 = FUN_0802308e(DAT_20003308,DAT_2000330c,5000,0);
  diag_gyro_z = DAT_200032f0 - iVar1;
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
  FUN_08008688(&DAT_200032e8);
  return;
}



/* ENTRY 0x0800ff70 : FUN_0800ff70 */

undefined4 FUN_0800ff70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    DAT_20000280 = '\0';
    DAT_20000281 = 0;
  }
  if (DAT_20000280 == '\0') {
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
        if (9 < DAT_20000281) {
          DAT_20000280 = 1;
          FUN_0800894a();
          return 1;
        }
        DAT_20000281 = DAT_20000281 + 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08010034 : FUN_08010034 */

void FUN_08010034(undefined4 param_1)

{
  FUN_08023114(&diag_pidk_acc,param_1,0x10);
  return;
}



/* ENTRY 0x08010044 : FUN_08010044 */

void FUN_08010044(void)

{
  DAT_2000028c = 0;
  DAT_20000290 = 0;
  DAT_20000294 = 0;
  diag_angleoffset_int = 0;
  DAT_2000029c = 0;
  DAT_200002a0 = 0;
  DAT_200002b4 = 0;
  DAT_200002b0 = 0;
  FUN_0800faa8(&DAT_200002b8);
  DAT_200002a4 = 0;
  diag_commbospeed0 = 0;
  diag_commbopcurr = 0;
  FUN_08010f80();
  DAT_20000284 = 0;
  return;
}



/* ENTRY 0x08010088 : FUN_08010088 */

void FUN_08010088(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((((diag_motionstep == '\x03') || (diag_motionstep == '\x04')) || (diag_motionstep == '\a')) &&
     ((DAT_200002cc == '\x03' || (DAT_200002cc == '\x04')))) {
    DAT_20000290 = diag_pintch + diag_angleoffset_int;
    DAT_20000294 = diag_s_acc;
    iVar3 = DAT_20000290;
    if (0xf000 < DAT_20000290) {
      iVar3 = 0xf000;
    }
    if (iVar3 < -0xf000) {
      iVar3 = -0xf000;
    }
    iVar5 = DAT_20003284 / 100;
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
    if (DAT_200032b9 == '\x01') {
      if (((byte)DAT_2000326e & 0x40) == 0) {
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        if ((iVar2 < DAT_200002c4) && (0x4b0 < DAT_200002c4)) {
          DAT_200002c4 = DAT_200002c4 + -100;
        }
        iVar2 = DAT_200002c4;
        if ((iVar1 <= DAT_200002c4) && (iVar2 = iVar1, iVar1 < -DAT_200002c4)) {
          iVar2 = -DAT_200002c4;
        }
        iVar1 = iVar2;
        if (1000 < DAT_20000288) {
          DAT_20000288 = DAT_20000288 + -0x32;
        }
      }
      else {
        if (DAT_200002c4 < 20000) {
          DAT_200002c4 = DAT_200002c4 + 100;
        }
        if (DAT_20000288 < 32000) {
          iVar2 = iVar3;
          if (iVar3 < 0) {
            iVar2 = -iVar3;
          }
          if (iVar2 < 0x5000) {
            iVar2 = iVar4;
            if (iVar4 < 0) {
              iVar2 = -iVar4;
            }
            if (DAT_20000288 < iVar2) {
              DAT_20000288 = DAT_20000288 + 1;
            }
            else {
              DAT_20000288 = DAT_20000288 + 0x32;
            }
          }
        }
      }
    }
    else if (((byte)DAT_2000326e & 0x40) == 0) {
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
      if (100 < DAT_20000288) {
        DAT_20000288 = DAT_20000288 + -0x32;
      }
    }
    else {
      if (DAT_200002c8 < 20000) {
        DAT_200002c8 = DAT_200002c8 + 100;
      }
      if (DAT_20000288 < 32000) {
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = -iVar3;
        }
        if (iVar2 < 0x5000) {
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = -iVar4;
          }
          if (DAT_20000288 < iVar2) {
            DAT_20000288 = DAT_20000288 + 1;
          }
          else {
            DAT_20000288 = DAT_20000288 + 0x32;
          }
        }
      }
    }
    DAT_200002a4 = (DAT_200002a4 * 0x31 + iVar1 * 0x32) / 0x32;
    diag_commbospeed0 = (diag_commbospeed0 * 9 + iVar1 * 10) / 10;
    iVar1 = (int)((uint)diag_pidk_speed * diag_commbospeed0) / 100;
    if (DAT_200002a0 + 0x14 < iVar1) {
      iVar1 = DAT_200002a0 + 0x14;
    }
    if (iVar1 < DAT_200002a0 + -0x14) {
      iVar1 = DAT_200002a0 + -0x14;
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
    iVar2 = (DAT_200002a4 << 2) / 10;
    if (iVar2 < 0x1801) {
      if (iVar2 < -0x1800) {
        iVar2 = -0x1800;
      }
    }
    else {
      iVar2 = 0x1800;
    }
    iVar3 = iVar3 + iVar2 + DAT_200002b0;
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
    DAT_2000029c = DAT_2000029c + iVar3;
    if (DAT_2000029c < 0x7149) {
      if (DAT_2000029c < -29000) {
        DAT_2000029c = -29000;
      }
    }
    else {
      DAT_2000029c = 29000;
    }
    DAT_2000028c = iVar4 + (iVar1 * 0x72) / iVar5 + diag_commbopcurr / (int)(diag_k_pcurr + 1);
    if (DAT_20000284 < 32000) {
      DAT_20000284 = DAT_20000284 + 100;
    }
    if (DAT_20000284 < DAT_2000028c) {
      DAT_2000028c = DAT_20000284;
    }
    else if (DAT_2000028c < -DAT_20000284) {
      DAT_2000028c = -DAT_20000284;
    }
    if (DAT_20000288 < DAT_2000028c) {
      DAT_2000028c = DAT_20000288;
    }
    else if (DAT_2000028c < -DAT_20000288) {
      DAT_2000028c = -DAT_20000288;
    }
    DAT_20000310 = (undefined2)DAT_2000028c;
    DAT_200002a0 = iVar1;
  }
  return;
}



/* ENTRY 0x080106d0 : FUN_080106d0 */

void FUN_080106d0(void)

{
  FUN_08023202(&diag_IA,0x38);
  FUN_08010c00(1);
  return;
}



/* ENTRY 0x080106e2 : FUN_080106e2 */

void FUN_080106e2(void)

{
  FUN_08023202(&diag_IA,0x38);
  FUN_08010c00(2);
  return;
}



/* ENTRY 0x080106f4 : FUN_080106f4 */

void FUN_080106f4(void)

{
  FUN_08010c00(4);
  return;
}



/* ENTRY 0x080106fe : FUN_080106fe */

void FUN_080106fe(void)

{
  FUN_08010c00(4);
  return;
}



/* ENTRY 0x08010708 : FUN_08010708 */

void FUN_08010708(void)

{
  FUN_08010c00(5);
  return;
}



/* ENTRY 0x08010712 : FUN_08010712 */

void FUN_08010712(void)

{
  FUN_08010c00(3);
  FUN_08010d3c(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010722 : FUN_08010722 */

void FUN_08010722(void)

{
  FUN_08010c00(7);
  FUN_08010d3c(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010732 : FUN_08010732 */

void FUN_08010732(void)

{
  DAT_200002cc = 1;
  FUN_08010c00();
  FUN_08010f80();
  return;
}



/* ENTRY 0x08010744 : FUN_08010744 */

void FUN_08010744(void)

{
  switch(DAT_200002cc) {
  case 1:
    FUN_080106d0();
    break;
  case 2:
    FUN_080106e2();
    break;
  case 3:
    FUN_080106f4();
    break;
  case 4:
    FUN_080106fe();
    break;
  case 7:
    FUN_08010712();
    break;
  case 8:
    FUN_08010708();
    break;
  case 10:
    FUN_08010722();
  }
  DAT_20000318 = (((((int)(uint)DAT_2000349c >> 4) - (int)(short)DAT_2000036c) * 0x26) / 10 +
                 DAT_20000318 * 0x31) / 0x32;
  DAT_200002d4 = (int)(((uint)DAT_200002e0 * ((int)(uint)DAT_20003498 >> 2)) /
                       (uint)((int)(uint)DAT_200034a4 >> 4) + DAT_200002d8 * 9) / 10;
  DAT_2000031c = DAT_200002d4 + DAT_200002d0;
  if (15000 < DAT_2000031c) {
    DAT_20000320 = 1;
  }
  DAT_200002d8 = DAT_200002d4;
  if (((DAT_2000031c < 0x2198) && (diag_cartstep == '\x03')) && (DAT_200002dc == '\0')) {
    FUN_080218be(0xef);
    DAT_200002dc = '\x01';
  }
  return;
}



/* ENTRY 0x08010870 : FUN_08010870 */

int FUN_08010870(void)

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
      DAT_200002cc = 10;
      FUN_08008e00(5);
      bVar1 = 0;
      while ((bVar1 < 0x14 && (DAT_200002e2 == '\0'))) {
        FUN_08008e00(1);
        bVar1 = bVar1 + 1;
      }
      if (DAT_200002e2 == '\0') {
        iVar2 = 0;
      }
      else {
        for (bVar1 = 0; bVar1 < 0x14; bVar1 = bVar1 + 1) {
          FUN_08008e00(1);
          iVar3 = iVar3 + DAT_2000031c;
        }
        iVar3 = 0xd7e970 / (iVar3 / 0x14);
        if ((0x4f9 < iVar3) && (iVar3 < 0x614)) {
          DAT_200002e0 = (undefined2)iVar3;
          for (bVar1 = 0; bVar1 < 10; bVar1 = bVar1 + 1) {
            FUN_08008e00(1);
            if ((0x26de < DAT_2000031c) && (DAT_2000031c < 0x2742)) {
              iVar2 = 1;
              break;
            }
          }
        }
        if (iVar2 == 0) {
          DAT_20000321 = 1;
          iVar2 = 0;
        }
        else {
          FUN_080238d4();
          FUN_08023758(0x34);
          FUN_080237c8(&DAT_08001342,DAT_200002e0);
          FUN_080237c8(&DAT_08001344,0x3f10);
          FUN_08023758(0x34);
          FUN_080237b8();
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



/* ENTRY 0x080109ba : FUN_080109ba */

undefined4 FUN_080109ba(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08001340 == -0x3f11) {
    if (((DAT_08001344 == 0x3f10) && (0x4f9 < DAT_08001342)) && (DAT_08001342 < 0x614)) {
      DAT_200002e0 = DAT_08001342;
      uVar1 = 1;
    }
    else if (param_1 == 0) {
      DAT_20000321 = 1;
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



/* ENTRY 0x08010a1a : FUN_08010a1a */

void FUN_08010a1a(void)

{
  uint uVar1;
  
  DAT_200002ec = FUN_08012576();
  DAT_200002ed = DAT_200002ec;
  uVar1 = (uint)DAT_200002ec;
  if (uVar1 == DAT_200002e8) {
    if (DAT_200002ea < 0x15) {
      DAT_200002ea = DAT_200002ea + 1;
    }
    else if (uVar1 == 0) {
      DAT_200002ee = '\x01';
      DAT_200002e9 = 0;
      DAT_200002f4 = 0;
      DAT_200002f0 = 0;
    }
  }
  else if (((DAT_200002ee != '\0') && (DAT_200002ea = 0, (uVar1 & 2) == 2)) &&
          ((DAT_200002e8 & 2) == 0)) {
    if (DAT_200002e9 < 0x20) {
      DAT_200002f0 = DAT_200002f0 << 1 | uVar1 & 1;
      DAT_200002e9 = DAT_200002e9 + 1;
    }
    else if (DAT_200002e9 < 0x40) {
      DAT_200002f4 = DAT_200002f4 << 1 | uVar1 & 1;
      DAT_200002e9 = DAT_200002e9 + 1;
    }
    else {
      DAT_200002e9 = 0;
      DAT_200002ee = '\0';
      if ((DAT_200002f0 ^ DAT_200002f4) == 0xffffffff) {
        DAT_200002f8 = DAT_200002f0;
        DAT_200002e4 = DAT_200002f0;
        if ((0x26de < DAT_200002f0) && (DAT_200002f0 < 0x2742)) {
          DAT_200002e2 = 1;
        }
      }
    }
  }
  DAT_200002e8 = DAT_200002ec;
  return;
}



/* ENTRY 0x08010b70 : FUN_08010b70 */

void FUN_08010b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_080118e6();
    switch(DAT_200002fc) {
    case 1:
    case 2:
      FUN_08011794(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_080129be(&DAT_20003438);
      break;
    case 3:
      DAT_20000369 = FUN_080115f8();
      break;
    case 4:
    case 5:
      FUN_08010f96(DAT_200002fc);
      break;
    case 7:
      FUN_08010a1a();
    }
  }
  else {
    iVar2 = FUN_08023376(&DAT_40012400,0x140);
    if (iVar2 == 1) {
      FUN_080232ba(&DAT_40012400,1);
    }
  }
  return;
}



/* ENTRY 0x08010c00 : FUN_08010c00 */

undefined4 FUN_08010c00(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == DAT_200002fd) {
    uVar1 = 1;
  }
  else {
    DAT_200002fc = (byte)param_1;
    DAT_200002fd = DAT_200002fc;
    switch(param_1) {
    case 1:
    case 7:
      FUN_08023f8a(&DAT_40012c00,0);
      FUN_08023f8a(&DAT_40012c00,4,0);
      FUN_08023f8a(&DAT_40012c00,8,0);
      FUN_08023a8a(&DAT_40010c00,0x2000);
      FUN_08023a8a(&DAT_40010c00,0x8000);
      FUN_08023a8a(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_0802464c(&DAT_40012c00,0,0x40);
      FUN_08023f8a(&DAT_40012c00,0,1);
      FUN_0802464c(&DAT_40012c00,4,0x40);
      FUN_08023f8a(&DAT_40012c00,4,1);
      FUN_0802464c(&DAT_40012c00,8,0x40);
      FUN_08023f8a(&DAT_40012c00,8,1);
      FUN_08023a8e(&DAT_40010c00,0x2000);
      FUN_08023a8e(&DAT_40010c00,0x8000);
      FUN_08023a8e(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_0802464c(&DAT_40012c00,0,0x60);
      FUN_08023f8a(&DAT_40012c00,0,1);
      FUN_0802464c(&DAT_40012c00,4,0x60);
      FUN_08023f8a(&DAT_40012c00,4,1);
      FUN_0802464c(&DAT_40012c00,8,0x60);
      FUN_08023f8a(&DAT_40012c00,8,1);
      FUN_08023a8e(&DAT_40010c00,0x2000);
      FUN_08023a8e(&DAT_40010c00,0x8000);
      FUN_08023a8e(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08010d3c : FUN_08010d3c */

void FUN_08010d3c(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x08010d58 : FUN_08010d58 */

void FUN_08010d58(void)

{
  FUN_0801159a();
  FUN_080115aa();
  return;
}



/* ENTRY 0x08010d64 : FUN_08010d64 */

void FUN_08010d64(void)

{
  int iVar1;
  
  iVar1 = FUN_08024208(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_08023fa4(&DAT_40012c00,1);
    FUN_08010d58();
    FUN_080118d4();
  }
  return;
}



/* ENTRY 0x08010d82 : FUN_08010d82 */

void FUN_08010d82(void)

{
  int iVar1;
  
  iVar1 = FUN_08024208(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_08023fa4(&DAT_40012c00,0x80);
    DAT_20000322 = 1;
    FUN_080243dc(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x08010dae : FUN_08010dae */

void FUN_08010dae(void)

{
  FUN_0801192c();
  FUN_08011288();
  FUN_08011312();
  return;
}



/* ENTRY 0x08010dbe : FUN_08010dbe */

void FUN_08010dbe(void)

{
  DAT_20003480 = 0x18000;
  DAT_20003484 = 0x8000;
  DAT_20003488 = 0x10000;
  FUN_0801218c(&DAT_200034e4,&DAT_200034ac);
  FUN_08010dae();
  FUN_08023fc2(&DAT_40012c00,1);
  FUN_08023fb0(&DAT_40012c00,1);
  FUN_080111d0(1);
  FUN_08010c00(1);
  return;
}



/* ENTRY 0x08010e04 : FUN_08010e04 */

int FUN_08010e04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (diag_BuscurLimit * DAT_2000035c) / 15000 + diag_BuscurLimit;
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
    if (1 < DAT_2000035c) {
      DAT_2000035c = DAT_2000035c + -1;
    }
  }
  else if (param_1 < -iVar2) {
    if (1 < DAT_2000035c) {
      DAT_2000035c = DAT_2000035c + -1;
    }
  }
  else if (DAT_2000035c < 5000) {
    DAT_2000035c = DAT_2000035c + 1;
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



/* ENTRY 0x08010f80 : FUN_08010f80 */

void FUN_08010f80(void)

{
  DAT_20000350 = 0;
  diag_g_average_iq = 0;
  DAT_2000035a = 0;
  FUN_08012178();
  return;
}



/* ENTRY 0x08010f96 : FUN_08010f96 */

undefined8 FUN_08010f96(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_08011794(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_08012294(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_080129be();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_2000034c = FUN_080125b2();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_2000034c = diag_halloffset;
  }
  else {
    DAT_2000034c = DAT_2000034c + 1;
  }
  FUN_0801236c(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_2000034c);
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
  diag_g_dif_iq = (short)diag_g_average_iq - DAT_2000035a;
  DAT_2000035a = (short)diag_g_average_iq;
  if (param_1 == 5) {
    diag_VQ = FUN_08010e04((int)DAT_20000312);
  }
  else {
    diag_VQ = FUN_08010e04((int)DAT_20000310);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_08012178();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_08012200(DAT_2000343c,diag_IDCurrent,&DAT_200034ac);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_080123c8();
  FUN_08012424(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_08011b14(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x080111d0 : FUN_080111d0 */

void FUN_080111d0(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_08023a10(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_08023fa4(&DAT_40012c00,1);
    FUN_080243dc(&DAT_40012c00,1);
  }
  else {
    FUN_080243dc(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x0801122c : FUN_0801122c */

void FUN_0801122c(void)

{
  DAT_2000348c = 0;
  DAT_20003490 = 0;
  DAT_20003494 = 0;
  FUN_08023462(&DAT_40012800,2);
  FUN_08023400(&DAT_40012800,3,1,2);
  FUN_08023400(&DAT_40012800,1,2);
  FUN_0802335a(&DAT_40012800,0x1000);
  FUN_08023348(&DAT_40012800,1);
  FUN_080233a2(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x08011288 : FUN_08011288 */

void FUN_08011288(void)

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
  
  FUN_08023ba0(1);
  FUN_080235ac(&DAT_40020008);
  FUN_0802373e(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_20003498;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_080236e8(&DAT_40020008,&local_30);
  FUN_08023598(&DAT_40020008,1);
  return;
}



/* ENTRY 0x08011312 : FUN_08011312 */

void FUN_08011312(void)

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
  
  FUN_08023b8c(0x8000);
  FUN_08023be8(0x15,1);
  FUN_08023be8(0x600,1);
  FUN_08023a92(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_08023950(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_08023950(&DAT_40010800,&local_24);
  FUN_08023a92(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_08023950(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_08023950(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_08023950(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_08023950(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_08023950(&DAT_40011000,&local_24);
  FUN_080232e4(&DAT_40012400);
  FUN_080232e4(&DAT_40012800);
  FUN_080232c0(&DAT_40012400,1);
  FUN_080232c0(&DAT_40012800,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  FUN_0802352a(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 1;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 9;
  FUN_080233b4(&DAT_40012400,&local_1c);
  FUN_08023472(&DAT_40012400,9,1,7);
  FUN_08023472(&DAT_40012400,8,2,7);
  FUN_08023472(&DAT_40012400,0,3,7);
  FUN_08023472(&DAT_40012400,0xf,4,7);
  FUN_08023472(&DAT_40012400,0xb,5,7);
  FUN_08023472(&DAT_40012400,0xd,6,7);
  FUN_08023472(&DAT_40012400,0x11,7,7);
  FUN_08023472(&DAT_40012400,10,8,7);
  FUN_08023472(&DAT_40012400,0x10,9,7);
  FUN_0802353c(1);
  FUN_080232d2(&DAT_40012400,1);
  FUN_0802352a(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 0;
  FUN_080233b4(&DAT_40012800,&local_1c);
  FUN_08023504(&DAT_40012400);
  FUN_08023504(&DAT_40012800);
  do {
    uVar1 = FUN_08023392(&DAT_40012400);
    uVar2 = FUN_08023392(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08023520(&DAT_40012400);
  FUN_08023520(&DAT_40012800);
  do {
    uVar1 = FUN_08023366(&DAT_40012400);
    uVar2 = FUN_08023366(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_0801122c();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_08023ae8(&local_20);
  FUN_0802350e(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x0801159a : FUN_0801159a */

void FUN_0801159a(void)

{
  FUN_0802335a(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x080115aa : FUN_080115aa */

void FUN_080115aa(void)

{
  DAT_40012838 = DAT_20000364 + (DAT_20000360 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x080115f8 : FUN_080115f8 */

undefined4 FUN_080115f8(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_20000370 == '\0') {
    DAT_2000348c = 0;
    DAT_20003490 = 0;
    DAT_20003494 = 0;
    DAT_20000360 = DAT_20003480;
    DAT_20000364 = DAT_20003484;
    bVar1 = 0x500 < DAT_20000374;
    DAT_20000374 = DAT_20000374 + 1;
    if (bVar1) {
      DAT_20000374 = 0;
      DAT_20000370 = '\x01';
    }
  }
  else if (DAT_20000370 == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_2000348c = DAT_2000348c + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_20003490 = DAT_20003490 + iVar2 * 2;
    DAT_2000036c = DAT_2000036c + ((int)(uint)DAT_2000349c >> 4);
    DAT_20000374 = DAT_20000374 + 1;
    if (DAT_20000374 == 0x40) {
      DAT_2000348c = (int)(DAT_2000348c + ((uint)(DAT_2000348c >> 0x1f) >> 0x1a)) >> 6;
      DAT_20003490 = (int)(DAT_20003490 + ((uint)(DAT_20003490 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000370 = '\x02';
      DAT_20000371 = '\x01';
    }
  }
  if (DAT_20000371 == '\x01') {
    DAT_20000374 = 0;
    DAT_20000364 = DAT_20003488;
    DAT_20000371 = '\x02';
  }
  else if (DAT_20000371 == '\x02') {
    iVar2 = DAT_40012840;
    DAT_20003494 = DAT_20003494 + iVar2 * 2;
    DAT_2000036c = DAT_2000036c + ((int)(uint)DAT_2000349c >> 4);
    DAT_20000374 = DAT_20000374 + 1;
    if (DAT_20000374 == 0x40) {
      DAT_20003494 = (int)(DAT_20003494 + ((uint)(DAT_20003494 >> 0x1f) >> 0x1a)) >> 6;
      DAT_2000036c = DAT_2000036c >> 7;
      DAT_20000371 = '\x03';
    }
  }
  else if (DAT_20000371 == '\x03') {
    DAT_20000378 = '\x01';
  }
  if (DAT_20000378 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((((0x8f9f < DAT_2000348c) || (0x8f9f < DAT_20003490)) || (0x8f9f < DAT_20003494)) ||
       (((DAT_2000348c < 0x705f || (DAT_20003490 < 0x705f)) || (DAT_20003494 < 0x705f)))) {
      DAT_20000324 = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x08011794 : FUN_08011794 */

void FUN_08011794(int *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  switch(DAT_20000368) {
  case 1:
  case 6:
    iVar1 = DAT_4001283c;
    local_8 = DAT_20003490 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_20003494) - local_8;
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
    local_c = DAT_2000348c + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_20003494) - local_c;
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
    local_c = DAT_2000348c + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_20003490 + iVar1 * -2;
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



/* ENTRY 0x080118d4 : FUN_080118d4 */

void FUN_080118d4(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x080118e6 : FUN_080118e6 */

void FUN_080118e6(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x0801192c : FUN_0801192c */

void FUN_0801192c(void)

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
  
  FUN_08023be8(0xc,1);
  FUN_08023a92(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_08023950(&DAT_40010800,&local_38);
  FUN_08023a92(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_08023950(&DAT_40010c00,&local_38);
  FUN_08023a8a(&DAT_40010c00,0x2000);
  FUN_08023a8a(&DAT_40010c00,0x8000);
  FUN_08023a8a(&DAT_40010c00,0x4000);
  FUN_080239fe(&DAT_40010800,0x700);
  FUN_080239fe(&DAT_40010c00,0xe000);
  FUN_08023be8(0x800);
  FUN_08023ff0(&DAT_40012c00);
  FUN_08024760(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_080246c4(&DAT_40012c00,&local_10);
  FUN_08024614(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_080243f6(&DAT_40012c00,&local_20);
  FUN_08024486(&DAT_40012c00,&local_20);
  FUN_08024516(&DAT_40012c00,&local_20);
  FUN_08024614(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_080245a2(&DAT_40012c00,&local_20);
  FUN_0802447a(&DAT_40012c00,8);
  FUN_08024508(&DAT_40012c00,8);
  FUN_08024596(&DAT_40012c00,8);
  FUN_08024606(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_08023f66(&DAT_40012c00,&local_30);
  FUN_080246a0(&DAT_40012c00,0x20);
  FUN_08023faa(&DAT_40012c00,0x80);
  FUN_080243dc(&DAT_40012c00,0x80,1);
  FUN_08024200(&DAT_40012c00,1);
  FUN_08023fa4(&DAT_40012c00,1);
  FUN_080243dc(&DAT_40012c00,1,0);
  FUN_080243dc(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_08023ae8(&local_34);
  return;
}



/* ENTRY 0x08011b14 : FUN_08011b14 */

void FUN_08011b14(int param_1,int param_2)

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
      DAT_20000368 = 5;
    }
    else if (iVar3 < 1) {
      DAT_20000368 = 4;
    }
    else {
      DAT_20000368 = 3;
    }
  }
  else if (iVar2 < 0) {
    if (iVar3 < 1) {
      DAT_20000368 = 6;
    }
    else {
      DAT_20000368 = 1;
    }
  }
  else {
    DAT_20000368 = 2;
  }
  DAT_20000379 = 0;
  bVar5 = false;
  if (DAT_20000368 < 7) {
    uVar8 = iVar2 >> 0x1f;
    uVar7 = iVar3 >> 0x1f;
    uVar12 = iVar1 >> 0x1f;
    switch(DAT_20000368) {
    case 0:
      goto switchD_08011bd6_caseD_0;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003484;
      DAT_20000364 = DAT_20003488;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003480;
      DAT_20000364 = DAT_20003488;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003480;
      DAT_20000364 = DAT_20003488;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003480;
      DAT_20000364 = DAT_20003484;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003480;
      DAT_20000364 = DAT_20003484;
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
            DAT_20000379 = 1;
            bVar5 = true;
            sVar11 = 5999 - sVar11;
          }
        }
      }
      else {
        sVar11 = 2999;
      }
      DAT_20000360 = DAT_20003484;
      DAT_20000364 = DAT_20003488;
    }
  }
  else {
switchD_08011bd6_caseD_0:
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



/* ENTRY 0x08012178 : FUN_08012178 */

void FUN_08012178(void)

{
  DAT_2000350c = 0;
  DAT_200034d4 = 0;
  DAT_20003510 = 0;
  DAT_200034d8 = 0;
  return;
}



/* ENTRY 0x0801218c : FUN_0801218c */

void FUN_0801218c(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x08012200 : FUN_08012200 */

int FUN_08012200(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x08012294 : FUN_08012294 */

void FUN_08012294(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x080122c8 : FUN_080122c8 */

void FUN_080122c8(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_08026c30 + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_08026c30 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_08026c30 + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_08026c30 + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_08026c30 + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_08026c30 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_08026c30 + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_08026c30 + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x0801236c : FUN_0801236c */

void FUN_0801236c(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_080122c8(&local_2c,param_4);
  DAT_2000037c = local_2c;
  DAT_20000380 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x080123c8 : FUN_080123c8 */

void FUN_080123c8(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08026bac + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08026bac + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x08012424 : FUN_08012424 */

void FUN_08012424(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_2000037c * param_3;
  iVar1 = param_2 * DAT_20000380;
  *param_1 = (param_3 * DAT_20000380 + DAT_2000037c * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x08012480 : FUN_08012480 */

void FUN_08012480(void)

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
  
  FUN_08023be8(0x10,1);
  FUN_08023bb8(2,1);
  FUN_08023a10(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_08023950(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_08023950(&DAT_40011000,&local_20);
  FUN_08023ff0(&DAT_40000400);
  FUN_08024760(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_080246c4(&DAT_40000400,&local_10);
  FUN_080243cc(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08024220(&DAT_40000400,&local_1c);
  FUN_08024628(&DAT_40000400,400,1);
  FUN_080243ec(&DAT_40000400);
  FUN_0802462e(&DAT_40000400,1);
  FUN_08024640(&DAT_40000400,0x40);
  FUN_080246b0(&DAT_40000400,4);
  FUN_08024784(&DAT_40000400,1);
  FUN_08023fa4(&DAT_40000400,0x1e5f);
  FUN_080246c0(&DAT_40000400,0);
  FUN_08023fb0(&DAT_40000400,1);
  return;
}



/* ENTRY 0x08012576 : FUN_08012576 */

byte FUN_08012576(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_08023a7c(&DAT_40011000,0x40);
  cVar2 = FUN_08023a7c(&DAT_40011000,0x80);
  cVar3 = FUN_08023a7c(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x080125b2 : FUN_080125b2 */

int FUN_080125b2(void)

{
  return (int)diag_motor_egdir * (DAT_2000059c + diag_halloffset);
}



/* ENTRY 0x080125c8 : FUN_080125c8 */

void FUN_080125c8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_200005bc;
    if (DAT_200005bc < 0) {
      iVar1 = -DAT_200005bc;
    }
    if (1000 < iVar1) {
      iVar1 = DAT_200005bc;
      if (DAT_200005bc < 0) {
        iVar1 = -DAT_200005bc;
      }
      if (iVar1 < 10000) {
        if (DAT_200005c7 < 4) {
          DAT_200005c7 = DAT_200005c7 + 1;
        }
        else {
          *(short *)((uint)DAT_20000588 * 0x10 + 0x200003a8 + param_5 * 2) =
               (short)((int)((param_4 * 0x7ff8) /
                             (int)((uint)DAT_200005c8 + param_4 + (uint)DAT_200005ca) +
                            (uint)*(ushort *)((uint)DAT_20000588 * 0x10 + 0x200003a8 + param_5 * 2)
                            * 9) / 10);
        }
        goto LAB_08012658;
      }
    }
  }
  DAT_200005c7 = 0;
LAB_08012658:
  DAT_200005ca = DAT_200005c8;
  DAT_200005c8 = (short)param_4;
  if (param_2 == 0) {
    if (param_3 == 1) {
      if (DAT_20000588 == 0x1d) {
        DAT_20000588 = 0;
      }
      else {
        DAT_20000588 = DAT_20000588 + 1;
      }
    }
    else if (DAT_20000588 == 0) {
      DAT_20000588 = 0x1d;
    }
    else {
      DAT_20000588 = DAT_20000588 - 1;
    }
  }
  return;
}



/* ENTRY 0x080126a0 : FUN_080126a0 */

void FUN_080126a0(void)

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
  uVar5 = FUN_08012576();
  bVar3 = (byte)uVar5;
  DAT_200005a0 = bVar3;
  if (uVar5 != DAT_200005c2) {
    iVar6 = FUN_08024204(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_08026e30 + (uint)DAT_200005c2 * 3 + uVar5 * 0x18);
    DAT_20000386 = *(char *)((int)(&UNK_08026e30 + (uint)DAT_200005c2 * 3 + uVar5 * 0x18) + 2);
    DAT_20000384._0_1_ = (char)uVar2;
    DAT_20000384 = uVar2;
    if ((char)DAT_20000384 == '\0') {
      DAT_20000384._1_1_ = (byte)((ushort)uVar2 >> 8);
      bVar4 = DAT_20000384._1_1_;
      switch(DAT_20000384._1_1_) {
      case 0:
        DAT_200005c0 = (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4;
        break;
      case 1:
        DAT_200005c0 = *(short *)(&DAT_200003b2 + (uint)DAT_20000588 * 0x10) +
                       (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4;
        break;
      case 2:
        DAT_200005c0 = (0x7ff8 - *(short *)(&DAT_200003ae + (uint)DAT_20000588 * 0x10)) +
                       (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4;
        break;
      case 3:
        DAT_200005c0 = (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4 + 0x7ff8;
        break;
      case 4:
        DAT_200005c0 = *(short *)(&DAT_200003ac + (uint)DAT_20000588 * 0x10) + -0x7ff8 +
                       (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4;
        break;
      case 5:
        DAT_200005c0 = (DAT_20000386 * 0xf + DAT_20000386 * 0x3c) * -4 -
                       *(short *)(&DAT_200003b0 + (uint)DAT_20000588 * 0x10);
      }
      if (DAT_20000386 == DAT_200005c3) {
        if (iVar6 < 0x2001) {
          if (iVar6 < 0x14) {
            DAT_200005b8 = (int)((int)DAT_20000386 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000588 * 0x10 + 0x200003a8 +
                                        (uint)DAT_200005c2 * 2) * 100) / 0x14;
            DAT_200005ac = 0x14;
          }
          else {
            DAT_200005b8 = (int)((int)DAT_20000386 *
                                 (uint)*(ushort *)
                                        ((uint)DAT_20000588 * 0x10 + 0x200003a8 +
                                        (uint)DAT_200005c2 * 2) * 100) / iVar6;
            DAT_200005ac = iVar6;
          }
        }
        else {
          DAT_200005b8 = 0;
          DAT_200005bc = 0;
          DAT_200005ac = 0x2000;
        }
        if (DAT_200005c4 < 0x5b) {
          DAT_200005c4 = DAT_200005c4 + 1;
        }
        else {
          DAT_200005b0 = DAT_200005b0 + 1;
          DAT_200005b4 = 1;
        }
      }
      else {
        DAT_200005c4 = 0;
        DAT_200005b4 = 0;
        DAT_200005b8 = 0;
        DAT_200005bc = 0;
        uVar8 = 1;
        DAT_200005c0 = *(short *)(&DAT_20000388 + (uint)DAT_20000384._1_1_ * 2);
      }
      iVar7 = DAT_200005b8 - DAT_200005bc;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x4b0) || (bVar1 = 10 < DAT_200005c5, DAT_200005c5 = DAT_200005c5 + 1, bVar1)) {
        DAT_200005bc = DAT_200005b8;
        DAT_200005c5 = 0;
      }
      DAT_200005a4 = diag_motor_spdir * DAT_200005bc;
      iVar7 = DAT_200005a4 - diag_HallRSP;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if ((iVar7 < 0x640) || (bVar1 = 10 < DAT_200005c6, DAT_200005c6 = DAT_200005c6 + 1, bVar1)) {
        DAT_200005c6 = 0;
        diag_HallRSP = DAT_200005a4;
      }
      DAT_200005c3 = DAT_20000386;
      FUN_080125c8(uVar8,bVar4,(int)DAT_20000386,iVar6,DAT_200005c2);
      DAT_200005c2 = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005c2 = bVar3;
    }
  }
  return;
}



/* ENTRY 0x080129be : FUN_080129be */

void FUN_080129be(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_080126a0();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005bc == 0) || (0x7ff < uVar3)) {
    DAT_200005b8 = 0;
    DAT_200005bc = 0;
    iVar2 = FUN_08012576();
    DAT_2000059c = (int)*(short *)(&DAT_20000388 + iVar2 * 2) + DAT_20000386 * -300;
  }
  else {
    DAT_2000059c = (int)(uVar3 * DAT_200005bc) / 100 + (int)DAT_200005c0;
  }
  if (0x6000 < uVar3) {
    DAT_200005a4 = 0;
    diag_HallRSP = 0;
    DAT_40000424 = 0x8000;
  }
  return;
}



/* ENTRY 0x08012a34 : FUN_08012a34 */

void FUN_08012a34(void)

{
  FUN_08012480();
  return;
}



/* ENTRY 0x08012a88 : FUN_08012a88 */

bool FUN_08012a88(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x08012a9a : FUN_08012a9a */

bool FUN_08012a9a(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08023114(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x08012ada : FUN_08012ada */

bool FUN_08012ada(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != cVar2) {
    FUN_08023114(param_2,*(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x43,0x43);
    param_1[1] = param_1[1] + 1U & param_1[2] - 1U;
  }
  return cVar1 != cVar2;
}



/* ENTRY 0x08012b12 : FUN_08012b12 */

uint FUN_08012b12(byte *param_1,char *param_2)

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



/* ENTRY 0x08012b60 : FUN_08012b60 */

undefined4 FUN_08012b60(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_08012b12(param_2,auStack_50);
  FUN_08012a9a(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x08012b7e : FUN_08012b7e */

void FUN_08012b7e(int param_1)

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
    FUN_080138c8(param_1);
    break;
  default:
    FUN_08014194(param_1);
  }
  return;
}



/* ENTRY 0x08012bb8 : FUN_08012bb8 */

void FUN_08012bb8(char *param_1,int param_2)

{
  uint uVar1;
  
  if (((*param_1 == 'U') && (param_1[1] == -0x56)) && (param_2 == 0xe)) {
    uVar1 = (uint)(param_1[2] == '\v');
    if (param_1[3] == -0x13) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[4] == DAT_200005d5) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[5] == DAT_200005d6) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[6] == DAT_200005d7) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[7] == DAT_200005d8) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[8] == DAT_200005d9) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[9] == DAT_200005da) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[10] == DAT_200005db) {
      uVar1 = uVar1 + 1;
    }
    if (param_1[0xb] == DAT_200005dc) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 10) {
      DAT_200005d4 = 1;
    }
  }
  return;
}



/* ENTRY 0x08012c5e : FUN_08012c5e */

undefined4 FUN_08012c5e(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_08026ef0 + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_08026ef0 + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x08012cca : FUN_08012cca */

void FUN_08012cca(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005d4 == '\0') {
    if (DAT_200030d4 < 500) {
      FUN_08012bb8(param_1,param_2 & 0xff);
    }
    FUN_0801ab3a(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x3f || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_08012c5e(&local_54);
    if (iVar1 == 1) {
      FUN_08012b7e(&local_54);
    }
  }
  return;
}



/* ENTRY 0x08012d62 : FUN_08012d62 */

void FUN_08012d62(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58;
  undefined1 auStack_57 [67];
  
  uVar3 = DAT_20000938 & 3;
  uVar2 = DAT_2000093f & 7;
  uVar4 = DAT_2000094a & 3;
  uVar5 = DAT_20000951 & 3;
  if ((DAT_20000937 == uVar3) && (DAT_20000936 != '\x01')) {
    iVar1 = FUN_08012a88(&DAT_200005cc);
    if (iVar1 == 0) {
      FUN_08012ada(&DAT_200005cc,&local_58);
      FUN_080131d0(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000949 == uVar4) && (DAT_20000948 != '\x01')) {
        if ((DAT_20000950 == uVar5) && (DAT_2000094f != '\x01')) {
          if ((DAT_2000093e != uVar2) || (DAT_2000093d == '\x01')) {
            FUN_080131d0(&DAT_20003f36 + uVar2 * 0x14,(&DAT_20000940)[uVar2]);
            DAT_2000093f = (char)uVar2 + 1U & 7;
            DAT_2000093d = '\0';
          }
        }
        else {
          FUN_080131d0(&DAT_20004026 + uVar5 * 0x14,0x14);
          DAT_20000951 = (char)uVar5 + 1U & 3;
          DAT_2000094f = '\0';
        }
      }
      else {
        FUN_080131d0(&DAT_20003fd6 + uVar4 * 0x14,0x14);
        DAT_2000094a = (char)uVar4 + 1U & 3;
        DAT_20000948 = '\0';
      }
    }
  }
  else {
    FUN_080131d0(&DAT_20003ee6 + uVar3 * 0x14,0x14);
    DAT_20000938 = (char)uVar3 + 1U & 3;
    DAT_20000936 = '\0';
  }
  return;
}



/* ENTRY 0x08012edc : FUN_08012edc */

void FUN_08012edc(undefined4 param_1)

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
  FUN_08023a10(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_08023950(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_08023950(&DAT_40010c00,&local_30);
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
  FUN_08023ae8(&local_34);
  FUN_08024812(&DAT_40013800,0x360,1);
  FUN_08024812(&DAT_40013800,0x424,1);
  FUN_080247b6(&DAT_40013800,0x80,1);
  FUN_080247b6(&DAT_40013800,0x40,1);
  FUN_08023ba0(1);
  FUN_080235ac(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_20003774;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_40020044,&local_60);
  FUN_080236d8(&DAT_40020044,2,1);
  FUN_08023598(&DAT_40020044,0);
  FUN_080235ac(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_20003734;
  local_58 = 0;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_40020058,&local_60);
  FUN_08023598(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_08023ae8(&local_34);
  FUN_0800d2be(&DAT_40013800,&local_2c);
  FUN_080247a4(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08013064 : FUN_08013064 */

void FUN_08013064(void)

{
  DAT_200005e0 = 0;
  return;
}



/* ENTRY 0x0801306c : FUN_0801306c */

void FUN_0801306c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x2000);
  if (iVar2 != 0) {
    FUN_08023580(0x2000);
    FUN_08023598(&DAT_40020044,0);
    FUN_08013064();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x080130a8 : FUN_080130a8 */

void FUN_080130a8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_080236b8(0x20000);
    if (iVar2 != 0) {
      FUN_08023580(0x20000);
    }
  }
  else {
    FUN_08023580(0x40000);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x080130ec : FUN_080130ec */

void FUN_080130ec(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_080247c6(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_080236b0(&DAT_40020058);
    uVar4 = 0x40 - iVar3;
    FUN_08023598(&DAT_40020058,0);
    DAT_4002005c = 0x40;
    FUN_08023598(&DAT_40020058,1);
    FUN_08024796(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x41)) {
      FUN_08012cca(&DAT_20003734,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_080247c6(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_08024796(&DAT_40013800,0x727);
    FUN_08024812(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_080247c6(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_08024796(&DAT_40013800,0x525);
  }
  iVar3 = FUN_080247c6(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_08024796(&DAT_40013800,0x260);
  }
  iVar3 = FUN_080247c6(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_08024796(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x080131d0 : FUN_080131d0 */

undefined4 FUN_080131d0(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005e0 == '\0') {
    DAT_200005e0 = '\x01';
    if (0x40 < (int)param_2) {
      param_2 = 0x40;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003774)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023580(0x2000);
    FUN_08023598(&DAT_40020044,0);
    FUN_0802373a(&DAT_40020044,uVar2);
    FUN_08023598(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08013248 : FUN_08013248 */

void FUN_08013248(int param_1)

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
      DAT_200005e4 = 1;
      return;
    }
    local_55 = (undefined1)(&DWORD_08027754)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_08027754 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_08027750)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_08027754 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_0802775c)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_0802775c)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_08027754 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_08027758)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_08027754 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_0802775c)[uVar1 * 4] + '\x06';
  }
  FUN_08012c5e(local_58);
  FUN_08012b60(&DAT_200005cc,local_58);
  return;
}



/* ENTRY 0x08013324 : FUN_08013324 */

void FUN_08013324(int param_1)

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
    local_51 = (undefined1)(&DWORD_08027754)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027754 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_08027750)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_08027754 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_0802775c)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_0802775c)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_08027754 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_08027758)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_08027754 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_0802775c)[param_1 * 4] + '\x06';
  }
  FUN_08012c5e(local_54);
  FUN_08012b60(&DAT_200005cc,local_54);
  return;
}



/* ENTRY 0x080133f0 : FUN_080133f0 */

void FUN_080133f0(undefined1 param_1)

{
  DAT_200005e2 = param_1;
  return;
}



/* ENTRY 0x080133f6 : FUN_080133f6 */

void FUN_080133f6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_200037c4;
  local_58[3] = DAT_200037c5;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037c5; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_080270f4 + (uint)(byte)(&DAT_200037c6)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080270f0)[(uint)(byte)(&DAT_200037c6)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012c5e(local_58);
  FUN_08012b60(&DAT_200005cc,local_58);
  return;
}



/* ENTRY 0x0801346e : FUN_0801346e */

void FUN_0801346e(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_200037c4;
  local_4d = DAT_200037c5;
  for (uVar1 = 0; uVar1 < DAT_200037c5; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037c6)[uVar1];
  }
  local_50[0] = DAT_200037c5 + 5;
  FUN_08012c5e(local_50);
  FUN_08012b60(&DAT_200005cc,local_50);
  return;
}



/* ENTRY 0x080134be : FUN_080134be */

void FUN_080134be(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_0801346e();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037c4)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_0801346e();
  }
  return;
}



/* ENTRY 0x080134ea : FUN_080134ea */

void FUN_080134ea(undefined1 param_1)

{
  DAT_200005e1 = param_1;
  return;
}



/* ENTRY 0x080134f0 : FUN_080134f0 */

void FUN_080134f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_200037ce;
  local_58[3] = DAT_200037cf;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037cf; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_080270f4 + (uint)(byte)(&DAT_200037d0)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_080270f0)[(uint)(byte)(&DAT_200037d0)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012c5e(local_58);
  FUN_08012b60(&DAT_200005cc,local_58);
  return;
}



/* ENTRY 0x08013568 : FUN_08013568 */

void FUN_08013568(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080270f4 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_080270f0)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_08012c5e(local_54);
  FUN_08012b60(&DAT_200005cc,local_54);
  return;
}



/* ENTRY 0x080135be : FUN_080135be */

void FUN_080135be(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_080270fc + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080270f4 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_080270f0)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_080270f4 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_080270f0)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_080270f0)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012c5e(local_58);
  FUN_08012b60(&DAT_200005cc,local_58);
  return;
}



/* ENTRY 0x0801367c : FUN_0801367c */

void FUN_0801367c(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_200037ce;
  local_4d = DAT_200037cf;
  for (uVar1 = 0; uVar1 < DAT_200037cf; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037d0)[uVar1];
  }
  local_50[0] = DAT_200037cf + 5;
  FUN_08012c5e(local_50);
  FUN_08012b60(&DAT_200005cc,local_50);
  return;
}



/* ENTRY 0x080136cc : FUN_080136cc */

void FUN_080136cc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_0801367c();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037ce)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_0801367c();
  }
  return;
}



/* ENTRY 0x080136f8 : FUN_080136f8 */

void FUN_080136f8(int param_1)

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
    local_4d = 0x66;
    local_50[0] = '\x05';
  }
  else {
    if (param_1 == 0xfe) {
      DAT_200005e3 = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_080270f4)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_080270fc + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_080270fc)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_080270fc)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_080270f8)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_080270fc)[param_1 * 4] + '\a';
  }
  FUN_08012c5e(local_50);
  FUN_08012b60(&DAT_200005cc,local_50);
  return;
}



/* ENTRY 0x08013796 : FUN_08013796 */

void FUN_08013796(int param_1,int param_2)

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
  FUN_08012c5e(local_54);
  FUN_08012b60(&DAT_200005cc,local_54);
  return;
}



/* ENTRY 0x080137dc : FUN_080137dc */

void FUN_080137dc(void)

{
  FUN_08013796(0x10,&DAT_08001300);
  FUN_08013796(0xe,&DAT_08001310);
  FUN_08013796(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x080137fc : FUN_080137fc */

void FUN_080137fc(void)

{
  uint uVar1;
  
  if (DAT_200005e3 == '\0') {
    if (DAT_200005e4 == '\0') {
      uVar1 = (uint)DAT_200005e5;
      DAT_200005e5 = DAT_200005e5 + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005e1 == '\x01') {
          FUN_080134f0();
        }
      }
      else if (DAT_200005e2 == '\x01') {
        FUN_080133f6();
      }
    }
    else if (DAT_200005e7 == 0) {
      FUN_08013324(0xff);
      DAT_200005e7 = DAT_200005e7 + 1;
    }
    else if (DAT_200005e7 < 0x12) {
      FUN_08013324(DAT_200005e7 - 1);
      DAT_200005e7 = DAT_200005e7 + 1;
    }
    else {
      DAT_200005e7 = 0;
      DAT_200005e4 = '\0';
    }
  }
  else if (DAT_200005e6 == 0) {
    FUN_080136f8(0xff);
    DAT_200005e6 = DAT_200005e6 + 1;
  }
  else if (DAT_200005e6 < 0x67) {
    FUN_080136f8(DAT_200005e6 - 1);
    DAT_200005e6 = DAT_200005e6 + 1;
  }
  else {
    DAT_200005e6 = 0;
    DAT_200005e3 = '\0';
  }
  return;
}



/* ENTRY 0x080138c8 : FUN_080138c8 */

void FUN_080138c8(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_080136f8(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_080134be(param_1 + 1);
    break;
  case 0xe2:
    FUN_080136cc(param_1 + 1);
    break;
  case 0xe3:
    FUN_080133f0(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_080134ea(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_08013568(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_080135be(param_1 + 1);
    break;
  case 0xe7:
    FUN_080137dc();
    FUN_08013248(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08013954 : FUN_08013954 */

void FUN_08013954(undefined4 param_1)

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
  FUN_08023950(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08023950(&DAT_40010c00,&local_30);
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
  FUN_08023ae8(&local_34);
  FUN_08024812(&DAT_40004800,0x360,1);
  FUN_08024812(&DAT_40004800,0x424,1);
  FUN_080247b6(&DAT_40004800,0x80,1);
  FUN_080247b6(&DAT_40004800,0x40,1);
  FUN_08023ba0(1);
  FUN_080235ac(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200038d8;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_4002001c,&local_60);
  FUN_080236d8(&DAT_4002001c,2,1);
  FUN_08023598(&DAT_4002001c,0);
  FUN_080235ac(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200037d8;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_40020030,&local_60);
  FUN_08023598(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08023ae8(&local_34);
  FUN_08024844(&DAT_40004800,&local_2c);
  FUN_080247a4(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08013adc : FUN_08013adc */

void FUN_08013adc(void)

{
  DAT_200005e8 = 0;
  return;
}



/* ENTRY 0x08013ae4 : FUN_08013ae4 */

void FUN_08013ae4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x20);
  if (iVar2 != 0) {
    FUN_08023580(0x20);
    FUN_08023598(&DAT_4002001c,0);
    FUN_08013adc();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013b1c : FUN_08013b1c */

void FUN_08013b1c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_080236b8(0x200);
    if (iVar2 != 0) {
      FUN_08023580(0x200);
    }
  }
  else {
    FUN_08023580(0x400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013b60 : FUN_08013b60 */

void FUN_08013b60(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_080247c6(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_080236b0(&DAT_40020030);
    FUN_08023598(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_08023598(&DAT_40020030,1);
    FUN_08024796(&DAT_40004800,0x424);
    FUN_0801e982(&DAT_200037d8,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_080247c6(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004800,0x727);
    FUN_08024812(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_080247c6(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004800,0x525);
  }
  iVar4 = FUN_080247c6(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004800,0x260);
  }
  iVar4 = FUN_080247c6(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013c40 : FUN_08013c40 */

undefined4 FUN_08013c40(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005e8 == '\0') {
    DAT_200005e8 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_200038d8)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023580(0x20);
    FUN_08023598(&DAT_4002001c,0);
    FUN_0802373a(&DAT_4002001c,uVar2);
    FUN_08023598(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08013cb4 : FUN_08013cb4 */

void FUN_08013cb4(undefined4 param_1)

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
  FUN_08023950(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08023950(&DAT_40011000,&local_30);
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
  FUN_08023ae8(&local_34);
  FUN_08024812(&DAT_40004c00,0x360,1);
  FUN_08024812(&DAT_40004c00,0x424,1);
  FUN_080247b6(&DAT_40004c00,0x80,1);
  FUN_080247b6(&DAT_40004c00,0x40,1);
  FUN_08023ba0(2,1);
  FUN_080235ac(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003a98;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_40020458,&local_60);
  FUN_080236d8(&DAT_40020458,2,1);
  FUN_08023598(&DAT_40020458,0);
  FUN_080235ac(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003998;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_080236e8(&DAT_40020430,&local_60);
  FUN_08023598(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08023ae8(&local_34);
  FUN_08024844(&DAT_40004c00,&local_2c);
  FUN_080247a4(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08013e3c : FUN_08013e3c */

void FUN_08013e3c(void)

{
  DAT_200005e9 = 0;
  return;
}



/* ENTRY 0x08013e44 : FUN_08013e44 */

void FUN_08013e44(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x10020000);
  if (iVar2 != 0) {
    FUN_08023580(0x10020000);
    FUN_08023598(&DAT_40020458,0);
    FUN_08013e3c();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013e7c : FUN_08013e7c */

void FUN_08013e7c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080236b8(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_080236b8(0x10000200);
    if (iVar2 != 0) {
      FUN_08023580(0x10000200);
    }
  }
  else {
    FUN_08023580(0x10000400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013eb8 : FUN_08013eb8 */

void FUN_08013eb8(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_080247c6(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_080236b0(&DAT_40020430);
    FUN_08023598(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_08023598(&DAT_40020430,1);
    FUN_08024796(&DAT_40004c00,0x424);
    FUN_0801f3e6(&DAT_20003998,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_080247c6(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004c00,0x727);
    FUN_08024812(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_080247c6(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_080247c6(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_080247c6(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_08024796(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013f98 : FUN_08013f98 */

undefined4 FUN_08013f98(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_200005e9 == '\0') {
    DAT_200005e9 = '\x01';
    if (0xc0 < (int)param_2) {
      param_2 = 0xc0;
    }
    for (; 0 < (int)param_2; param_2 = param_2 - 1 & 0xff) {
      (&DAT_20003a98)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_08023580(0x10020000);
    FUN_08023598(&DAT_40020458,0);
    FUN_0802373a(&DAT_40020458,uVar2);
    FUN_08023598(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08014018 : FUN_08014018 */

void FUN_08014018(undefined4 param_1,undefined4 param_2)

{
  FUN_08023adc(0x5555);
  FUN_08023ac4(param_1);
  FUN_08023ad0(param_2);
  FUN_08023ab4();
  FUN_08023aa4();
  return;
}



/* ENTRY 0x0801403c : FUN_0801403c */

void FUN_0801403c(void)

{
  FUN_08019ee0();
  FUN_08014018(4,0xad9);
  FUN_080166da();
  FUN_08016746();
  FUN_08016dee();
  FUN_08016e20();
  return;
}



/* ENTRY 0x0801406c : FUN_0801406c */

void FUN_0801406c(void)

{
  DAT_2000069c = DAT_2000069c + 1;
  FUN_0801661c(&DAT_20000698);
  if (DAT_20000628 < 3) {
    DAT_20000628 = DAT_20000628 + 1;
  }
  else {
    DAT_20000628 = '\0';
  }
  FUN_0801cb42(DAT_20000628,&DAT_20003ba4,&DAT_20003bb6);
  return;
}



/* ENTRY 0x080140a6 : FUN_080140a6 */

void FUN_080140a6(void)

{
  FUN_08023ab4();
  FUN_080163f8();
  FUN_08016932();
  FUN_080195f2();
  FUN_0801e09c();
  return;
}



/* ENTRY 0x080140d4 : FUN_080140d4 */

void FUN_080140d4(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_20003274;
      if (DAT_20003274 < 0) {
        iVar2 = -DAT_20003274;
      }
      if ((iVar2 < 1000) && (DAT_200005ed == '\x01')) {
        DAT_200002cc = 8;
      }
    }
  }
  else if (cVar1 == '\x01') {
    DAT_20000312 = *(undefined2 *)(param_1 + 2);
  }
  else if ((cVar1 == '\x02') && (diag_motionstep == '\x02')) {
    FUN_08010732();
    DAT_20000312 = 0;
  }
  return;
}



/* ENTRY 0x08014132 : FUN_08014132 */

void FUN_08014132(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_20000312;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_08010732();
      diag_halldebugflg = 0;
      DAT_20000312 = 0;
      uVar1 = DAT_20000312;
      uVar2 = diag_halldebugflg;
    }
  }
  else {
    uVar1 = (short)param_2;
    uVar2 = param_1;
    if ((DAT_200002cc != '\b') &&
       (uVar1 = DAT_20000312, uVar2 = diag_halldebugflg, diag_motionstep == '\x02')) {
      iVar3 = diag_HallRSP;
      if (diag_HallRSP < 0) {
        iVar3 = -diag_HallRSP;
      }
      if (iVar3 < 100) {
        DAT_200005ed = 0;
        DAT_200002cc = '\b';
        uVar1 = (short)param_2;
        uVar2 = param_1;
      }
    }
  }
  diag_halldebugflg = uVar2;
  DAT_20000312 = uVar1;
  return;
}



/* ENTRY 0x08014194 : FUN_08014194 */

void FUN_08014194(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_2000313d == '\x01')) {
      FUN_0800f9ac();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_080140d4(param_1 + 1);
  }
  return;
}



/* ENTRY 0x080141f0 : FUN_080141f0 */

void FUN_080141f0(void)

{
  int iVar1;
  
  if ((DAT_20000638 == '\x01') &&
     (DAT_20000636 = ((short)((int)(uint)DAT_200034a6 >> 4) - DAT_2000063a) * 0x11,
     diag_ChgCurrShow = DAT_20000636, DAT_2000065c == '\x02')) {
    if (DAT_20000636 < 0x2ee1) {
      if (DAT_20000650 < 0xb) {
        DAT_2000065d = '\0';
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
      FUN_08023a8e(&DAT_40011000,2);
      DAT_2000065d = '\x01';
      if (DAT_20000660 < 10) {
        DAT_20000660 = DAT_20000660 + 1;
      }
      DAT_2000065c = '\x05';
    }
  }
  diag_ChgStepShow = DAT_2000065c;
  switch(DAT_2000065c) {
  case '\0':
    if (DAT_2000067c < 0x32) {
      DAT_2000067c = DAT_2000067c + 1;
    }
    else {
      DAT_2000065c = '\x01';
    }
    goto code_r0x08014734;
  case '\x01':
    DAT_20000684 = DAT_20000684 + 1;
    if (DAT_20000684 < 0x14) {
      DAT_422101b0 = 1;
      FUN_08023a8e(&DAT_40011000,2);
    }
    else if (DAT_20000684 < 0x28) {
      DAT_20000680 = DAT_20000680 + ((int)(uint)DAT_200034a6 >> 4);
    }
    else {
      DAT_2000063a = (ushort)(DAT_20000680 / 0x14);
      if ((DAT_2000063a < 0x43a) || (0xcae < DAT_2000063a)) {
        DAT_20000638 = '\x02';
      }
      else {
        DAT_20000638 = '\x01';
      }
      FUN_08023a8a(&DAT_40011000,2);
      if (diag_cartstep == '\0') {
        DAT_422101b0 = 0;
      }
      DAT_2000065c = '\x02';
    }
    goto code_r0x08014734;
  case '\x02':
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000658) {
        DAT_20000686 = 0;
        DAT_422101b0 = 1;
        FUN_08023a8e(&DAT_40011000,2);
        DAT_20000654 = 0;
        DAT_2000065c = '\x06';
        goto code_r0x08014734;
      }
      DAT_20000658 = DAT_20000658 + 1;
    }
    else if (10 < DAT_20000658) {
      DAT_20000658 = DAT_20000658 - 10;
    }
    if ((diag_BatState == '\x01') && (0x30ed < (int)diag_TotalVoltage)) {
      if (0x420a3 < DAT_2000063c) {
        DAT_20000686 = 0;
        DAT_422101b0 = 1;
        FUN_08023a8e(&DAT_40011000,2);
        DAT_20000654 = 0;
        DAT_2000065c = '\x03';
        goto code_r0x08014734;
      }
      DAT_2000063c = DAT_2000063c + 1;
    }
    else if (10 < DAT_2000063c) {
      DAT_2000063c = DAT_2000063c - 10;
    }
    if ((diag_BatState == '\x01') && (0x3264 < (int)diag_TotalVoltage)) {
      if (0x13 < DAT_20000640) {
        DAT_20000686 = 0;
        DAT_422101b0 = 1;
        FUN_08023a8e(&DAT_40011000,2);
        DAT_2000065e = 0xfa;
        DAT_20000654 = 0;
        DAT_2000065c = '\x04';
        goto code_r0x08014734;
      }
      DAT_20000640 = DAT_20000640 + 1;
    }
    else if (10 < DAT_20000640) {
      DAT_20000640 = DAT_20000640 - 1;
    }
    iVar1 = FUN_0801ffd4();
    if ((diag_BatState == '\x01') &&
       (((DAT_20000664 < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_2000066c < iVar1 && ((DAT_2000066c < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_20000644) {
        DAT_20000686 = 0;
        DAT_422101b0 = 1;
        FUN_08023a8e(&DAT_40011000,2);
        DAT_20000670 = -6;
        DAT_20000654 = 0;
        DAT_2000065c = '\b';
        goto code_r0x08014734;
      }
      DAT_20000644 = DAT_20000644 + 1;
    }
    else if (10 < DAT_20000644) {
      DAT_20000644 = DAT_20000644 - 1;
    }
    if (DAT_20003113 < 0xb) {
      if (DAT_20000648 < 0xb) {
        DAT_20000671 = '\0';
      }
      else {
        DAT_20000648 = DAT_20000648 - 1;
      }
    }
    else if (DAT_20000648 < 0x32) {
      DAT_20000648 = DAT_20000648 + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_08023a8e(&DAT_40011000,2);
      DAT_20000671 = '\x01';
      DAT_2000065c = '\t';
    }
    if ((DAT_20003114 < 0xb) || (DAT_20000636 < 0x259)) {
      if (DAT_2000064c < 0xb) {
        DAT_20000672 = '\0';
      }
      else {
        DAT_2000064c = DAT_2000064c - 1;
      }
    }
    else if (DAT_2000064c < 200) {
      DAT_2000064c = DAT_2000064c + 1;
    }
    else {
      DAT_422101b0 = 1;
      FUN_08023a8e(&DAT_40011000,2);
      DAT_20000672 = '\x01';
      DAT_2000065c = '\t';
    }
    goto code_r0x08014734;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_0801ffd4();
    if (((int)diag_TotalVoltage < 0x2d50) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000671 == '\0')))) {
      if (DAT_20000654 < 100) {
        DAT_20000654 = DAT_20000654 + 1;
      }
      else {
        FUN_08023a8a(&DAT_40011000,2);
        DAT_2000065e = 0;
        DAT_20000670 = '\0';
        DAT_2000065f = 0;
        DAT_2000065d = '\0';
        DAT_2000065c = '\x02';
      }
    }
    goto code_r0x08014734;
  default:
    goto code_r0x08014734;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
  }
  iVar1 = FUN_0801ffd4();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_20000636 < 600)) &&
      ((DAT_20000660 < 8 && ((DAT_20000671 == '\0' && (DAT_20000672 == '\0')))))) &&
     (((diag_TotalVoltage < DAT_20000668 && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_2000066e && (iVar1 < 0x65)))))) {
    if (DAT_20000654 < 100) {
      DAT_20000654 = DAT_20000654 + 1;
    }
    else {
      FUN_08023a8a(&DAT_40011000,2);
      DAT_2000065e = 0;
      DAT_20000670 = '\0';
      DAT_2000065f = 0;
      DAT_2000065d = '\0';
      DAT_2000065c = '\x02';
    }
  }
code_r0x08014734:
  if (((DAT_2000065d == '\x01') || (DAT_2000065e != 0)) || (DAT_2000065f != 0)) {
    DAT_200006c8 = 1;
    DAT_200030be = DAT_200030be | 0x40;
  }
  else {
    DAT_200006c8 = 0;
    DAT_200030be = DAT_200030be & 0xffbf;
  }
  if (DAT_20000670 == '\0') {
    DAT_200030be = DAT_200030be & 0xff7f;
  }
  else {
    DAT_200030be = DAT_200030be | 0x80;
  }
  if (DAT_20000671 == '\0') {
    DAT_200030be = DAT_200030be & 0xfeff;
  }
  else {
    DAT_200030be = DAT_200030be | 0x100;
  }
  if (DAT_20000672 == '\0') {
    DAT_200030c0 = DAT_200030c0 & 0xfffe;
  }
  else {
    DAT_200030c0 = DAT_200030c0 | 1;
  }
  if ((DAT_200030d4 % 0x96 == 0x4b) &&
     (((DAT_2000065d == '\x01' || (1 < DAT_2000065e)) ||
      ((1 < DAT_2000065f || ((DAT_20000671 != '\0' || (DAT_20000672 != '\0')))))))) {
    FUN_0800dfae(2);
  }
  if (DAT_20000688 != '\x01') {
    if (diag_cartstep != '\0') {
      DAT_20000688 = '\x01';
    }
    if (((3000 < DAT_200030d8) && (diag_BatState == '\0')) && (diag_cartstep == '\0')) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 1000) && ((int)diag_TotalVoltage < 0x2706)) {
        if (DAT_20000689 < 0xc9) {
          DAT_20000689 = DAT_20000689 + 1;
          return;
        }
        DAT_422101b0 = 0;
        DAT_20000689 = DAT_20000689 + 1;
        return;
      }
    }
    DAT_20000689 = 0;
  }
  return;
}



/* ENTRY 0x08014890 : FUN_08014890 */

void FUN_08014890(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003b5c < 0xb) {
      DAT_20003b5c = 0;
      DAT_200030be = DAT_200030be & 0xffef;
    }
    else {
      DAT_20003b5c = DAT_20003b5c - 10;
    }
  }
  else if (DAT_20003b5c < 0xfa) {
    DAT_20003b5c = DAT_20003b5c + 1;
    DAT_200030be = DAT_200030be | 0x10;
  }
  if (10 < DAT_20003b5c) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_0800f9d8();
    }
  }
  return;
}



/* ENTRY 0x08014906 : FUN_08014906 */

void FUN_08014906(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if (diag_AgeModeflg == '\0') {
    if (DAT_20000674 != 0) {
      DAT_20000674 = DAT_20000674 + -1;
    }
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if ((iVar2 < diag_g_winespeed_lv + -1000) || (DAT_200001e0 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if ((int)((uint)DAT_2000319e * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_200031a0 * 1000)) {
          if (DAT_20000630 == (DAT_20000630 / 0x32) * 0x32) goto LAB_080149ac;
          bVar3 = DAT_20000630 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_08014bee;
LAB_080149ac:
              bVar3 = DAT_200031ac == 1;
            } while (!bVar3);
            if (DAT_2000319e == 0) goto LAB_08014bee;
            bVar3 = DAT_20003132 == '\0';
          } while (!bVar3);
          FUN_0800dfae(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_200031a2 * 1000)) {
            if ((((DAT_20000630 == (DAT_20000630 / 0x32) * 0x32) || (DAT_20000630 % 0x32 == 10)) ||
                (DAT_20000630 % 0x32 == 0x14)) &&
               (((DAT_200031ac == 1 && (DAT_200031a0 != 0)) && (DAT_20003132 == '\0')))) {
              FUN_0800dfae(1);
            }
          }
          else if (DAT_200031ac == 1) {
            if (((((DAT_20000630 == (DAT_20000630 / 0x32) * 0x32) || (DAT_20000630 % 0x32 == 10)) ||
                 (DAT_20000630 % 0x32 == 0x14)) ||
                ((DAT_20000630 % 0x32 == 0x1e || (DAT_20000630 % 0x32 == 0x28)))) &&
               (DAT_20003132 == '\0')) {
              FUN_0800dfae(1);
            }
          }
          else if ((DAT_20000674 == 0) && (DAT_20003132 == '\0')) {
            if (DAT_20000694 == 0) {
              DAT_20000698 = 2;
              DAT_20000674 = 300;
            }
            else {
              DAT_20000698 = 6;
              DAT_20000674 = 300;
            }
          }
        }
      }
    }
    else if (DAT_200031ac == 1) {
      if (((((DAT_20000630 == (DAT_20000630 / 0x32) * 0x32) || (DAT_20000630 % 0x32 == 10)) ||
           (DAT_20000630 % 0x32 == 0x14)) ||
          ((DAT_20000630 % 0x32 == 0x1e || (DAT_20000630 % 0x32 == 0x28)))) &&
         (DAT_20003132 == '\0')) {
        FUN_0800dfae(1);
      }
    }
    else if ((DAT_20000674 == 0) && (DAT_20003132 == '\0')) {
      if (DAT_20000694 == 0) {
        DAT_20000698 = 2;
        DAT_20000674 = 300;
      }
      else {
        DAT_20000698 = 6;
        DAT_20000674 = 300;
      }
    }
LAB_08014bee:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_20000678 = 0x32;
    }
    else {
      bVar1 = DAT_20000678 + 1;
      bVar3 = 0x1e < DAT_20000678;
      DAT_20000678 = bVar1;
      if (bVar3) {
        FUN_0800dfae(3);
        DAT_20000678 = 0;
      }
    }
    if ((DAT_20000634 == '\0') && (diag_cartstep != '\0')) {
      DAT_20000676 = DAT_20000676 + 1;
      if (DAT_20000676 < 0x1f5) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (100 < iVar2) {
          FUN_0800dfae(2);
        }
      }
      else {
        FUN_0800dfae(2);
        DAT_20000676 = 0;
      }
    }
    if (0 < DAT_2000067a) {
      DAT_2000067a = DAT_2000067a + -1;
    }
    if ((DAT_20003b5c != '\0') && (DAT_2000067a == 0)) {
      if (DAT_200031ac == 1) {
        FUN_0800dfae();
        DAT_2000067a = 100;
      }
      else {
        if (DAT_20000694 == 0) {
          DAT_20000698 = 4;
        }
        else {
          DAT_20000698 = 10;
        }
        DAT_2000067a = 300;
      }
    }
    if (DAT_200006c0 != 0) {
      DAT_200006c0 = DAT_200006c0 + -1;
    }
  }
  return;
}



/* ENTRY 0x08014cdc : FUN_08014cdc */

void FUN_08014cdc(void)

{
  DAT_20000630 = DAT_20000630 + 1;
  FUN_08014906();
  FUN_08014890();
  FUN_08019396();
  FUN_080141f0();
  return;
}



/* ENTRY 0x08014cfa : FUN_08014cfa */

void FUN_08014cfa(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_0800dfae(1);
    DAT_200006be = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031ac == 1) {
      FUN_0800dfae(3);
    }
    else if (DAT_20000694 == 0) {
      DAT_20000698 = 4;
    }
    else {
      DAT_20000698 = 9;
    }
    DAT_200006c0 = 500;
    break;
  case 0x23:
    FUN_0800dfae(1);
    DAT_200006bf = 1;
    break;
  case 0x24:
    if (DAT_200031ac == 1) {
      FUN_0800dfae(3);
    }
    else if (DAT_20000694 == 0) {
      DAT_20000698 = 4;
    }
    else {
      DAT_20000698 = 10;
    }
    DAT_200006c4 = 2000;
    break;
  case 0x25:
    DAT_200006bc = 1;
    if (DAT_200031ac == 1) {
      FUN_0800dfae(3);
    }
    if (DAT_200031ac == 0) {
      if (DAT_20000694 == 0) {
        DAT_20000698 = 0xf;
      }
      else {
        DAT_20000698 = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_20003132 == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_0800dfae(4);
    }
  }
  return;
}



/* ENTRY 0x08014dee : FUN_08014dee */

void FUN_08014dee(uint param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    param_1 = 0x32;
  }
  DAT_20000664 = (param_1 * 0xe10) / 100 + 0x24b8;
  DAT_20000668 = (param_1 * 0x708) / 100 + 0x23f0;
  DAT_2000066c = (short)param_1;
  DAT_2000066e = (short)((param_1 * 0x708) / 0xe10);
  return;
}



/* ENTRY 0x08014e98 : FUN_08014e98 */

void FUN_08014e98(void)

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
  
  if (((DAT_20003132 == '\x01') || (DAT_2000313d == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_2000068a = 0;
    DAT_2000068c = 0;
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
    if (DAT_2000068c < iVar1) {
      DAT_2000068c = DAT_2000068c + 100;
    }
    else if (iVar1 + 100 < (int)DAT_2000068c) {
      DAT_2000068c = DAT_2000068c + -100;
    }
    local_34 = DAT_20003b6c;
    local_32 = DAT_20003b6e;
    local_30 = DAT_20003b70;
    local_2e = DAT_20003b72 + DAT_2000068c;
    local_2c = DAT_20003b74;
    local_2a = DAT_20003b76;
    local_28 = DAT_20003b78;
    local_1a = DAT_20003b86;
    local_18 = DAT_20003b88;
    local_16 = DAT_20003b8a;
    local_14 = DAT_20003b8c;
    local_12 = DAT_20003b8e;
    local_10 = DAT_20003b90;
    local_26 = DAT_20003b7a;
    local_24 = DAT_20003b7c;
    local_22 = DAT_20003b7e;
    local_20 = DAT_20003b80;
    local_1e = DAT_20003b82;
    local_1c = DAT_20003b84;
    FUN_0800aba0(&local_34);
  }
  return;
}



/* ENTRY 0x08014ffe : FUN_08014ffe */

void FUN_08014ffe(void)

{
  DAT_20003b6c = 0xe000;
  DAT_20003b6e = 0x28;
  DAT_20003b70 = 10000;
  DAT_20003b72 = 32000;
  DAT_20003b74 = 300;
  DAT_20003b76 = 0x9c4;
  DAT_20003b78 = 0x5a;
  DAT_20003b86 = 0x3c;
  DAT_20003b88 = 8000;
  DAT_20003b8a = 26000;
  DAT_20003b8c = 1000;
  DAT_20003b8e = 0x9c4;
  DAT_20003b90 = 0x50;
  DAT_20003b7a = 0x5a;
  DAT_20003b7c = 6000;
  DAT_20003b7e = 22000;
  DAT_20003b80 = 1000;
  DAT_20003b82 = 0x9c4;
  DAT_20003b84 = 0x50;
  return;
}



/* ENTRY 0x08015072 : FUN_08015072 */

void FUN_08015072(void)

{
  DAT_2000316e = DAT_20003b6c;
  DAT_20003170 = DAT_20003b6e;
  DAT_20003172 = DAT_20003b70;
  DAT_20003174 = DAT_20003b72;
  DAT_20003176 = DAT_20003b74;
  DAT_20003178 = DAT_20003b76;
  DAT_2000317a = DAT_20003b78;
  DAT_20003188 = DAT_20003b86;
  DAT_2000318a = DAT_20003b88;
  DAT_2000318c = DAT_20003b8a;
  DAT_2000318e = DAT_20003b8c;
  DAT_20003190 = DAT_20003b8e;
  DAT_20003192 = DAT_20003b90;
  DAT_2000317c = DAT_20003b7a;
  DAT_2000317e = DAT_20003b7c;
  DAT_20003180 = DAT_20003b7e;
  DAT_20003182 = DAT_20003b80;
  DAT_20003184 = DAT_20003b82;
  DAT_20003186 = DAT_20003b84;
  return;
}



/* ENTRY 0x08015110 : FUN_08015110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015110(void)

{
  _DAT_20003150 = 0x5465;
  DAT_20003152 = 0;
  _DAT_20003154 = 0x1450;
  DAT_20003156 = 0;
  _DAT_20003158 = 0;
  DAT_2000315a = 0;
  DAT_2000315c = 0;
  DAT_2000315e = 0;
  DAT_20003160 = 0;
  DAT_20003162 = 0;
  DAT_20003164 = 500;
  DAT_20003166 = 0;
  DAT_20003168 = 0;
  DAT_2000316a = 0;
  DAT_2000316c = 0;
  DAT_20003194 = 0;
  DAT_20003196 = 0;
  DAT_20003198 = 0;
  DAT_2000319a = 0;
  DAT_2000319c = 100;
  DAT_200031a8 = 0;
  DAT_200031aa = 0;
  DAT_200031ae = 0;
  DAT_200031b0 = 0;
  DAT_200031ce = 0;
  DAT_200031e8 = 0;
  DAT_200031ec = 0;
  DAT_200031f0 = 600;
  DAT_200031fe = 0;
  DAT_200031ff = 0;
  return;
}



/* ENTRY 0x0801518a : FUN_0801518a */

void FUN_0801518a(void)

{
  FUN_08014ffe();
  FUN_08015072();
  DAT_2000319e = 0x12;
  DAT_200031a0 = 0x13;
  DAT_200031a2 = 0x14;
  DAT_200031a4 = 0x14;
  DAT_200031ac = 0;
  DAT_200031a6 = 1;
  DAT_200031c4 = 0;
  DAT_200031c6 = 0;
  DAT_200031c8 = 2;
  DAT_200031ca = 0;
  DAT_200031cc = 0;
  DAT_200031d0 = 0xff;
  DAT_200031d1 = 0;
  DAT_200031d2 = 0;
  DAT_200031d3 = 0;
  DAT_200031d4 = 0;
  DAT_200031d5 = 0xff;
  DAT_200031d6 = 0;
  DAT_200031d7 = 0;
  DAT_200031d8 = 0;
  DAT_200031d9 = 0;
  DAT_200031da = 0xff;
  DAT_200031db = 0;
  DAT_200031dc = 0xa0;
  DAT_200031dd = 0x20;
  DAT_200031de = 0xf0;
  DAT_200031df = 0;
  DAT_200031e0 = 0;
  DAT_200031e2 = 0xff;
  DAT_200031e3 = 0xff;
  DAT_200031e4 = 0xff;
  DAT_200031e5 = 0xff;
  DAT_200031f4 = 1;
  DAT_200031f2 = 1;
  DAT_200031fc = 0;
  FUN_08015110();
  FUN_0800e5fc();
  return;
}



/* ENTRY 0x08015294 : FUN_08015294 */

void FUN_08015294(void)

{
  uint uVar1;
  
  if (DAT_200006ba != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031b2)[uVar1] = 0;
    }
  }
  FUN_0801518a();
  DAT_200031f6 = 0x31;
  DAT_200031f7 = 0x32;
  DAT_200031f8 = 0x33;
  DAT_200031f9 = 0x34;
  DAT_200031fa = 0x35;
  DAT_200031fb = 0x36;
  return;
}



/* ENTRY 0x080152f0 : FUN_080152f0 */

void FUN_080152f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (diag_cartstep != '\0') {
    if (DAT_20000690 == '\0') {
      uVar1 = DAT_4221012c;
      DAT_20000702 = (char)uVar1;
      DAT_20000703 = '\0';
      DAT_20000704 = 0xc;
    }
    DAT_20000702 = DAT_20000702 == '\0';
    DAT_20000703 = DAT_20000703 == '\0';
    if ((((bool)DAT_20000702) && ((bool)DAT_20000703)) || (DAT_200031f2 == 0)) {
      if (DAT_20000838 != 0) {
        DAT_20000838 = DAT_20000838 - 1;
      }
    }
    else if (DAT_20000838 < DAT_20000704) {
      DAT_20000838 = DAT_20000838 + 1;
    }
    if (DAT_2000083a != '\0') {
      if (DAT_20000838 == DAT_20000704) {
        DAT_200030be = DAT_200030be | 0x8000;
      }
      else if (DAT_20000838 == 0) {
        DAT_2000083a = '\0';
        DAT_200030be = DAT_200030be & 0x7fff;
      }
    }
    if ((((uint)DAT_20000704 << 1) / 3 < (uint)DAT_20000838) && (DAT_20000839 == '\0')) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000708 == 0) {
          FUN_0800dfae(1);
          DAT_20000708 = 1;
        }
      }
      else {
        DAT_20000839 = '\x01';
      }
      DAT_2000070c = 1;
    }
    else if ((uint)DAT_20000838 < DAT_20000704 / 3) {
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      if (iVar2 < 2000) {
        if (DAT_20000708 == 1) {
          FUN_0800dfae(2);
          DAT_20000708 = 0;
        }
        DAT_20000839 = '\0';
      }
      DAT_2000070c = 0;
    }
  }
  return;
}



/* ENTRY 0x0801544e : FUN_0801544e */

void FUN_0801544e(void)

{
  FUN_080152f0();
  return;
}



/* ENTRY 0x08015456 : FUN_08015456 */

void FUN_08015456(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_200006b0 != 0x12) {
    bVar3 = DAT_200006b0 == 0x14;
    do {
      if (!bVar3) goto LAB_08015608;
      bVar3 = DAT_200006b8 == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_08015608;
    bVar3 = true;
  } while (diag_cartstep == '\b');
  if (((DAT_200031ca == 1) || (DAT_200006cb == '\x02')) &&
     (DAT_20000844 = DAT_20000844 + 1, DAT_20000844 == (DAT_20000844 / 2) * 2)) {
    if (DAT_20000848 == 0) {
      DAT_20000848 = 1;
    }
    else {
      DAT_20000848 = 0;
    }
  }
  if (((DAT_200031ca == 1) || (DAT_200006cb == '\x02')) && (DAT_200006b0 != 0x13)) {
    if (DAT_20000848 == 0) {
      if (param_1 == 0x12) {
        DAT_20000718 = 0xffff;
        DAT_2000071c = 0xffff;
      }
      else if (param_1 == 0x15) {
        DAT_20000718 = 0xffff;
        DAT_2000071c = 0;
      }
      else if (param_1 == 0x16) {
        DAT_20000718 = 0;
        DAT_2000071c = 0xffff;
      }
      else {
        DAT_20000718 = 0xffff;
        DAT_2000071c = 0;
      }
    }
    else {
      DAT_20000718 = 0;
      DAT_2000071c = 0;
    }
  }
  else if (DAT_200006b0 == 0x12) {
    if (param_1 == 0x12) {
      DAT_20000718 = 0xffff;
      DAT_2000071c = 0xffff;
    }
    else if (param_1 == 0x15) {
      DAT_20000718 = 0xffff;
      DAT_2000071c = 0;
    }
    else if (param_1 == 0x16) {
      DAT_20000718 = 0;
      DAT_2000071c = 0xffff;
    }
  }
  else {
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if (iVar2 < 10000) {
      DAT_20000718 = 0;
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      DAT_2000071c = (iVar2 * 800) / 1000 + 100;
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
        DAT_20000718 = (iVar2 * 0x41) / 1000;
        DAT_2000071c = 0xffff;
      }
      else {
        DAT_20000718 = 0xffff;
        DAT_2000071c = 0xffff;
      }
    }
  }
LAB_08015612:
  if (DAT_2000071c < DAT_20000718) {
    uVar1 = (undefined2)DAT_20000718;
  }
  else {
    uVar1 = (undefined2)DAT_2000071c;
  }
  DAT_40000840 = uVar1;
  return;
LAB_08015608:
  DAT_20000718 = 0;
  DAT_2000071c = 0;
  goto LAB_08015612;
}



/* ENTRY 0x0801562e : FUN_0801562e */

void FUN_0801562e(void)

{
  int iVar1;
  
  if (DAT_200006b4 == 0x14) {
    DAT_20000841 = 0;
    DAT_200006b4 = 0;
  }
  else if (DAT_200006b4 == 0x12) {
    DAT_20000841 = 1;
    DAT_200006b4 = 0;
  }
  else if (DAT_200006b4 == 0x13) {
    DAT_20000841 = 4;
    DAT_200006b4 = 0;
  }
  iVar1 = FUN_0800e220();
  if (iVar1 != 0) {
    switch(DAT_20000841) {
    case 0:
      DAT_20000841 = DAT_20000841 + 1;
      DAT_200006b0 = 0x12;
      break;
    case 1:
      DAT_20000841 = DAT_20000841 + 1;
      DAT_200006b0 = 0x13;
      break;
    case 2:
      DAT_20000841 = DAT_20000841 + 1;
      DAT_200006b0 = 0x12;
      break;
    case 3:
      DAT_20000841 = DAT_20000841 + 1;
      DAT_200006b0 = 0x13;
      break;
    case 4:
      DAT_20000841 = 1;
      DAT_200006b0 = 0x12;
    }
    FUN_0800dfae(1);
    FUN_080218be(3);
  }
  if (DAT_200006cb == '\0') {
    FUN_08015456((&DAT_20000710)[DAT_20000841]);
  }
  else {
    FUN_08015456(DAT_20000711);
    DAT_200006b0 = 0x12;
  }
  return;
}



/* ENTRY 0x08015768 : FUN_08015768 */

void FUN_08015768(void)

{
  DAT_20000842 = (ushort)(((uint)DAT_20000842 * 9 + ((int)(uint)diag_lightad >> 4)) / 10);
  if (DAT_200005ec == '\0') {
    DAT_200006b8 = '\0';
  }
  else if (DAT_200006b8 == '\0') {
    if (DAT_20000842 < 0x44c) {
      DAT_200006b9 = DAT_200006b8;
      DAT_200006b8 = '\x01';
    }
  }
  else if ((DAT_200006b8 == '\x01') && (0x514 < DAT_20000842)) {
    DAT_200006b9 = DAT_200006b8;
    DAT_200006b8 = '\0';
  }
  return;
}



/* ENTRY 0x080157d8 : FUN_080157d8 */

void FUN_080157d8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x0801581c : FUN_0801581c */

undefined2 FUN_0801581c(void)

{
  DAT_2000084c = DAT_2000084c + 1;
  if ((ushort)((ushort)DAT_20000810 * 4) <= DAT_2000084c) {
    DAT_2000084c = 0;
  }
  return (&DAT_20000720)[(int)(uint)DAT_2000084c >> 2];
}



/* ENTRY 0x0801584c : FUN_0801584c */

void FUN_0801584c(void)

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
  iVar4 = FUN_0800f9e2();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_2000313d != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_2000313d == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_2000313d != '\0')) {
        iVar7 = 0;
      }
    }
  }
  else {
    iVar7 = 2;
  }
  if (DAT_20000862 < 0x32) {
    DAT_20000862 = DAT_20000862 + 1;
    if (diag_cartstep == '\b') {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003b92)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003b92)[uVar5] = 0;
      }
    }
    FUN_08016e2c(&DAT_20003b92);
  }
  else {
    if (diag_cartstep == '\0') {
      bVar1 = false;
      bVar8 = false;
    }
    else if (diag_cartstep == '\b') {
      bVar1 = false;
      bVar8 = false;
      DAT_20000862 = 0;
    }
    else {
      if ((((ushort)DAT_200006a0 & 3) == 0) &&
         (((1000 < diag_VehicleSpeed && (diag_speedAcc < -0x14)) ||
          ((diag_VehicleSpeed < -1000 && (0x14 < diag_speedAcc)))))) {
        DAT_20000850 = 0x14;
        DAT_20000854 = 0;
      }
      DAT_20000858 = DAT_20000858 + 1;
      if (DAT_20000858 == (DAT_20000858 / 2) * 2) {
        if (DAT_2000085c == 0) {
          DAT_2000085c = 1;
        }
        else {
          DAT_2000085c = 0;
        }
      }
      if ((DAT_20000854 < DAT_20000850) && (DAT_200031ca == 0)) {
        bVar1 = true;
        bVar8 = true;
        iVar6 = DAT_20000850 - (DAT_20000854 + 1);
        DAT_20000860 = 0;
        DAT_20000854 = DAT_20000854 + 1;
      }
      else {
        DAT_20000854 = 0;
        DAT_20000850 = 0;
        iVar6 = 4;
        if (DAT_200031ca == 1) {
          if (DAT_2000085c == 1) {
            bVar8 = iVar7 != 1;
            if (iVar7 != 2) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            bVar8 = false;
          }
          DAT_20000860 = 0;
        }
        else if ((DAT_200006b0 == 0x12) || ((DAT_200006b0 == 0x14 && (DAT_200006b8 == '\x01')))) {
          bVar1 = true;
          bVar8 = true;
          if (iVar7 == 1) {
            DAT_20000860 = DAT_20000860 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000811)[uVar5] = (&DAT_08027862)[(uint)DAT_20000860 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000860 = DAT_20000860 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000811)[uVar5] = (&DAT_08027874)[(uint)DAT_20000860 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000860 = 0;
          }
        }
        else {
          bVar1 = false;
          bVar8 = false;
          if (iVar7 == 1) {
            DAT_20000860 = DAT_20000860 + 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000811)[uVar5] = (&DAT_08027862)[(uint)DAT_20000860 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000860 = DAT_20000860 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000811)[uVar5] = (&DAT_08027874)[(uint)DAT_20000860 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000860 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003b92)[uVar5] = 0;
    }
    if (DAT_2000313d == '\0') {
      if (DAT_20000860 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003b93)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003b92 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003b93 = DAT_20003b92;
        }
        else if (bVar8) {
          DAT_20003ba1 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003ba2 = DAT_20003ba1;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003b92)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000811)[uVar5] * 0x14) / 0x28);
          (&DAT_20003b93)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000811)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801581c();
        (&DAT_20003b92)[extraout_r3 * 3] = 0;
        (&DAT_20003b93)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003b94)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_200031c8 == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801581c();
        bVar3 = DAT_200031d2;
        bVar2 = DAT_200031d0;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_200031d0,(ushort)DAT_200031d1);
        (&DAT_20003b92)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003b93)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003b94)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003b92)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003b92)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003b93)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003b93)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003b94)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003b94)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_200031c8 == 1) {
      FUN_080157d8(&local_28,(ushort)DAT_200006a0);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801581c();
        (&DAT_20003b92)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003b93)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003b94)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_080157d8(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006a0 * -10 & 0xffff);
        (&DAT_20003b92)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003b93)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003b94)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_08016e2c(&DAT_20003b92);
  }
  return;
}



/* ENTRY 0x08015e3e : FUN_08015e3e */

void FUN_08015e3e(void)

{
  int iVar1;
  
  DAT_200006a0 = DAT_200006a0 + 1;
  FUN_0801584c();
  FUN_08015768();
  FUN_0801562e();
  FUN_08014e98();
  if ((DAT_2000313c & 1) != 0) {
    if ((DAT_20000823 == '\0') && (iVar1 = FUN_0800e61a(DAT_200030f0 / 10 & 0xffff), iVar1 == 1)) {
      FUN_0800e54c();
    }
    DAT_20000823 = '\x01';
    DAT_2000313c = DAT_2000313c & 0xfe;
  }
  return;
}



/* ENTRY 0x08015e9e : FUN_08015e9e */

void FUN_08015e9e(void)

{
  int iVar1;
  
  if (DAT_200006ca < 5) {
    if (diag_TotalVoltage < 0x2454) {
      DAT_200006ca = 2;
    }
    else {
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (iVar1 < 500) {
          DAT_200006ca = 3;
          return;
        }
      }
      if (0x32af < diag_TotalVoltage) {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if ((500 < iVar1) && (diag_TotalCurrent < -0x32)) {
          DAT_200006ca = 4;
          return;
        }
      }
      DAT_200006ca = diag_BatState;
    }
  }
  return;
}



/* ENTRY 0x08015f24 : FUN_08015f24 */

void FUN_08015f24(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = diag_VehicleSpeed;
  if ((int)diag_VehicleSpeed < 0) {
    uVar4 = -diag_VehicleSpeed;
  }
  if (DAT_20003115 == 0) {
    if (DAT_20003116 == 0) {
      if ((DAT_2000310f & 0x70) == 0) {
        if ((DAT_20003130 < 0xc9) || (DAT_20003130 == 0xe0)) {
          if (uVar4 == 0) {
            if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            iVar3 = FUN_0802002e();
            if ((iVar3 < 7) && (!bVar1)) {
              DAT_20000868 = (byte)iVar3;
            }
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              if (((DAT_20000868 != 0) || (param_1 % 10 < 5)) || (bVar1)) {
                (&DAT_2000081b)[uVar4] = (&DAT_080278e6)[uVar4];
                if ((int)(7 - (uint)DAT_20000868 % 7) <= (int)uVar4) {
                  (&DAT_2000081b)[uVar4] = (&DAT_2000081b)[uVar4] | 0x18;
                }
              }
              else {
                (&DAT_2000081b)[uVar4] = 0;
              }
            }
          }
          else {
            for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
              (&DAT_2000081b)[uVar2] =
                   (&DAT_08027886)[uVar2 + ((uVar4 / 10000) % 10) * 8] |
                   (&DAT_08027886)[uVar2 + ((uVar4 / 1000) % 10) * 8] << 4;
            }
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            if (DAT_20003130 == 0xe2) {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_2000081b)[uVar4] = 0;
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_2000081b)[uVar4] = (&DAT_080278d6)[uVar4];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003111 == 0) {
              if (DAT_20003130 == 0xe2) {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  (&DAT_2000081b)[uVar4] = (&DAT_0802796e)[uVar4];
                }
              }
              else {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  uVar2 = (byte)DAT_20003130 - 200 & 0xff;
                  (&DAT_2000081b)[uVar4] =
                       (&DAT_08027886)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                       (&DAT_08027886)[uVar4 + (uVar2 % 10) * 8] << 4;
                }
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_2000081b)[uVar4] =
                     (&DAT_080278de)[uVar4] |
                     (&DAT_08027886)[uVar4 + ((uint)DAT_20003111 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003130 == 0xe2) {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              (&DAT_2000081b)[uVar4] = (&DAT_0802796e)[uVar4];
            }
          }
          else {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              uVar2 = (byte)DAT_20003130 - 200 & 0xff;
              (&DAT_2000081b)[uVar4] =
                   (&DAT_08027886)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                   (&DAT_08027886)[uVar4 + (uVar2 % 10) * 8] << 4;
            }
          }
          if ((param_1 % 0x1e == 3) &&
             (((DAT_200030be & 0x200) == 0x200 || ((DAT_200030be & 0x400) == 0x400)))) {
            FUN_0800dfae(3);
          }
        }
      }
      else {
        for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
          (&DAT_2000081b)[uVar4] =
               (&DAT_08027886)[uVar4 + ((DAT_20003110 / 10) % 10) * 8] |
               (&DAT_08027886)[uVar4 + ((uint)DAT_20003110 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar4 = DAT_20003116 - 1 & 0xff;
      if (5 < uVar4) {
        uVar4 = 5;
      }
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_2000081b)[uVar2] = (&UNK_0802793e)[uVar2 + uVar4 * 8];
      }
      DAT_20003116 = DAT_20003116 + 1;
      if (0x14 < DAT_20003116) {
        DAT_20003116 = 0;
      }
    }
  }
  else {
    uVar4 = DAT_20003115 - 1 & 0xff;
    if (9 < uVar4) {
      uVar4 = 9;
    }
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_2000081b)[uVar2] = (&UNK_080278ee)[uVar2 + uVar4 * 8];
    }
    DAT_20003115 = DAT_20003115 + 1;
    if (0x14 < DAT_20003115) {
      DAT_20003115 = 0;
    }
  }
  FUN_0801cdc4(&DAT_2000081b);
  return;
}



/* ENTRY 0x080162e8 : FUN_080162e8 */

void FUN_080162e8(void)

{
  int iVar1;
  
  if (DAT_2000081a < 0x10) {
    DAT_2000081a = DAT_2000081a + 1;
  }
  if ((diag_MosTemp < 0x2e) && (0xe < DAT_2000081a)) {
    if (diag_MosTemp < 0x28) {
      DAT_200006c9 = 0;
      DAT_20000818 = 0;
    }
  }
  else {
    DAT_200006c9 = 1;
    if (diag_cartstep == '\0') {
      DAT_20000818 = 4000;
    }
    else {
      DAT_20000818 = (diag_MosTemp + -0x2d) * 0x32 + 1000;
    }
    if (1999 < DAT_20000818) {
      DAT_20000818 = 1999;
    }
  }
  if ((((DAT_20000718 != 0) || (DAT_2000071c != 0)) && (DAT_2000313e == '\x01')) &&
     (diag_AgeModeflg != '\0')) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (10000 < iVar1) {
      DAT_20000818 = 1999;
    }
  }
  if (DAT_20000818 < 0x65) {
    FUN_08023a8e(&DAT_40010c00,0x200);
  }
  else {
    FUN_08023a8a(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x080163f8 : FUN_080163f8 */

void FUN_080163f8(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031a6 == 1) {
    FUN_08023a8e(&DAT_40011000,0x80);
  }
  else if (DAT_200005ec == '\x01') {
    FUN_08023a8a(&DAT_40011000,0x80);
  }
  FUN_080162e8();
  if ((DAT_200006a4 == (DAT_200006a4 / 0x14) * 0x14) && (DAT_200006ba == '\x01')) {
    FUN_0800dfae();
  }
  if (DAT_200006a4 % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_20000824 == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0800e1c8(0), iVar1 != 0)) {
      DAT_20000824 = '\x01';
    }
  }
  else if (DAT_20000824 == '\x01') {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (2000 < iVar1) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if ((iVar1 < 10000) && (iVar1 = FUN_0800e1c8(0), iVar1 != 0)) {
        FUN_0800ae98();
        FUN_0800dfae(1);
        DAT_20000824 = '\x02';
      }
    }
  }
  if ((((((DAT_200005ed == '\0') || (DAT_20000634 == '\0')) || (DAT_200006ba == '\x01')) ||
       ((DAT_200006be == '\x01' || (DAT_200006bf == '\x01')))) ||
      ((DAT_200006bc == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     (DAT_2000310f != '\0')) {
    DAT_200005ec = 0;
  }
  else {
    DAT_200005ec = 1;
  }
  if (DAT_200031f0 == 0) {
    DAT_200030d8 = 0;
  }
  if (DAT_200006a4 % 6 == 2) {
    for (bVar3 = 0; DAT_20003130 = 0, bVar3 < 0x28; bVar3 = bVar3 + 1) {
      DAT_20000828 = DAT_20000828 + 1;
      uVar2 = DAT_20000828 % 0x28;
      DAT_20003130 = 0;
      if (uVar2 < 0x20) {
        if ((diag_allwarnbit >> uVar2 & 1) != 0) {
          if (DAT_20000828 % 0x140 < 0x118) {
            DAT_20003130 = (short)uVar2 + 0xc9;
          }
          break;
        }
      }
      else if (((int)(uint)DAT_200030c0 >> (uVar2 - 0x20 & 0xff) & 1U) != 0) {
        if (DAT_20000828 % 0x140 < 0x118) {
          DAT_20003130 = (short)uVar2 + 0xc9;
        }
        break;
      }
    }
  }
  DAT_2000311c = DAT_2000311c | diag_allwarnbit;
  FUN_08015f24(DAT_200006a4);
  FUN_0801cfbc();
  FUN_08015e9e();
  if ((DAT_2000313b != '\0') && (DAT_2000313d != '\0')) {
    FUN_0800e54c();
    DAT_2000313b = '\0';
  }
  DAT_200006a4 = DAT_200006a4 + 1;
  return;
}



/* ENTRY 0x0801661c : FUN_0801661c */

void FUN_0801661c(void)

{
  return;
}



/* ENTRY 0x0801661e : FUN_0801661e */

void FUN_0801661e(void)

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
  
  FUN_08023be8(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_08023950(&DAT_40010c00,&local_24);
  FUN_08023bb8(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_080246c4(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_080245a2(&DAT_40000800,&local_20);
  FUN_08024606(&DAT_40000800,8);
  FUN_08023f54(&DAT_40000800,1);
  FUN_08023fb0(&DAT_40000800,1);
  FUN_08023fc2(&DAT_40000800,1);
  return;
}



/* ENTRY 0x080166b2 : FUN_080166b2 */

void FUN_080166b2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(4,1);
  local_8 = 0x48030800;
  FUN_08023950(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x080166da : FUN_080166da */

void FUN_080166da(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(0x3d,1);
  FUN_08023a10(0x300200,1);
  FUN_0801ce08(7);
  DAT_20003115 = 1;
  FUN_0801d152();
  FUN_0801d4bc();
  local_8 = 0x10010002;
  FUN_08023950(&DAT_40011000,&local_8);
  FUN_080166b2();
  DAT_20000690 = 0;
  local_8 = 0x10030004;
  FUN_08023950(&DAT_40010c00,&local_8);
  FUN_0801661e();
  return;
}



/* ENTRY 0x08016746 : FUN_08016746 */

void FUN_08016746(void)

{
  int iVar1;
  
  iVar1 = FUN_0800e5c4();
  FUN_0801a822();
  if (iVar1 == 0) {
    DAT_20003254 = 0x20220430;
    FUN_08015294();
  }
  else if (DAT_20003254 != 0x20220430) {
    DAT_20003254 = 0x20220430;
    FUN_08015294();
  }
  if (DAT_200031f0 == 0) {
    DAT_200030dc = 30000;
  }
  else {
    if (DAT_200031f0 < 0x3c) {
      DAT_200031f0 = 0x3c;
    }
    if (0x3840 < DAT_200031f0) {
      DAT_200031f0 = 0x3840;
    }
    DAT_200030dc = (uint)DAT_200031f0 * 0x32;
  }
  FUN_08014ffe();
  DAT_20003b6c = DAT_2000316e;
  FUN_0800aba0(&DAT_20003b6c);
  FUN_0800adda();
  DAT_20000634 = DAT_200031e0 == 0;
  DAT_200031ca = 0;
  if ((((0x2f < DAT_200031e2) && (DAT_200031e2 < 0x3a)) && (0x2f < DAT_200031e3)) &&
     (((DAT_200031e3 < 0x3a && (0x2f < DAT_200031e4)) &&
      ((DAT_200031e4 < 0x3a && ((0x2f < DAT_200031e5 && (DAT_200031e5 < 0x3a)))))))) {
    DAT_20000969 = 1;
  }
  DAT_20000694 = (uint)DAT_200031c4;
  DAT_200005ed = 1;
  FUN_0800f9f8(((int)DAT_20003162 << 0xc) / 10);
  FUN_0800fa18(((int)DAT_20003164 << 0xc) / 10);
  FUN_0800fa3a(DAT_200031fe);
  DAT_200030f4 = FUN_0800e69c();
  if (((DAT_200031a8 == (DAT_200031aa ^ 0xffff)) && (-200 < (short)DAT_200031a8)) &&
     ((short)DAT_200031a8 < 200)) {
    DAT_200002d0 = (int)(short)DAT_200031a8;
  }
  FUN_08014dee(DAT_2000319c);
  return;
}



/* ENTRY 0x08016932 : FUN_08016932 */

void FUN_08016932(void)

{
  int iVar1;
  
  if (diag_AgeModeflg != '\0') {
    if (diag_AgeModeflg == '\x01') {
      if (((diag_MosTemp < 0x53) && (diag_MotorTemp < 0x7e)) && (0x286d < diag_TotalVoltage)) {
        if (((DAT_2000082e != '\x05') && (diag_TotalVoltage < 0x2a30)) && (diag_BatState == '\x01'))
        {
          DAT_2000082e = '\x06';
          DAT_20000830 = 0;
          DAT_20000834 = 0;
          diag_AgeChgflg = 1;
          FUN_08014132(0);
        }
      }
      else {
        DAT_2000082e = '\x05';
        DAT_20000830 = 0;
        DAT_20000834 = 0;
        FUN_08014132(0);
        DAT_422101b0 = 0;
      }
      diag_AgeStepShow = DAT_2000082e;
      switch(DAT_2000082e) {
      case '\0':
        DAT_20000830 = 0;
        DAT_2000082e = '\x01';
        DAT_20000834 = 0;
        break;
      case '\x01':
        if (DAT_2000313d == '\x01') {
          iVar1 = FUN_0800f9e2();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000708 == 0)) {
            DAT_20000830 = 1;
            DAT_2000082e = '\x02';
            DAT_20000834 = 0;
            FUN_08014132(4,1);
          }
        }
        DAT_200006cb = 2;
        break;
      case '\x02':
        iVar1 = FUN_0800f9e2();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000708 == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_20000834 < 0xbb9)) ||
             (DAT_20000834 < 0x65)) {
            if (DAT_20000830 < 0x9c4) {
              DAT_20000830 = DAT_20000830 + 10;
              FUN_08014132(4,(int)DAT_20000830);
            }
          }
          else {
            DAT_20000830 = 0;
            DAT_2000082e = '\x03';
            FUN_08014132(0);
          }
        }
        else {
          DAT_20000830 = 0;
          DAT_2000082e = '\x01';
          FUN_08014132(0);
        }
        DAT_200006cb = 1;
        break;
      case '\x03':
        if (DAT_2000313d == '\x01') {
          iVar1 = FUN_0800f9e2();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000708 == 0)) {
            DAT_20000830 = 1;
            DAT_2000082e = '\x04';
            DAT_20000834 = 0;
            FUN_08014132(0,1);
          }
        }
        DAT_200006cb = 2;
        break;
      case '\x04':
        iVar1 = FUN_0800f9e2();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_2000070c == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_20000834)) ||
             (2999 < DAT_20000834)) {
            DAT_20000830 = 0;
            DAT_2000082e = '\x01';
            FUN_08014132(0);
          }
          else if (DAT_20000830 < 30000) {
            DAT_20000830 = DAT_20000830 + 100;
            FUN_08014132(0,(int)DAT_20000830);
          }
        }
        else {
          DAT_20000830 = 0;
          DAT_2000082e = '\x03';
          FUN_08014132(0);
        }
        DAT_200006cb = 2;
        break;
      case '\x05':
        break;
      case '\x06':
        if ((diag_TotalVoltage < 0x2ee1) && (diag_BatState != '\0')) {
          DAT_20000834 = 0;
        }
        else if (DAT_20000834 < 0x15) {
          DAT_20000834 = DAT_20000834 + 1;
        }
        else {
          DAT_20000830 = 0;
          DAT_2000082e = '\x01';
          diag_AgeChgflg = 0;
          FUN_08014132(0);
        }
        DAT_200006cb = 2;
      }
      DAT_20000834 = DAT_20000834 + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030d4 % 10 == 5) {
        FUN_0800dfae(1);
      }
      DAT_200006cb = 0;
      diag_AgeChgflg = 0;
      FUN_08014132(0);
      DAT_2000082e = '\0';
    }
  }
  return;
}



/* ENTRY 0x08016d82 : FUN_08016d82 */

void FUN_08016d82(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(4,1);
  local_8 = 0x10030800;
  FUN_08023950(&DAT_40010800,&local_8);
  local_8 = 0x48031000;
  FUN_08023950(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016dc6 : FUN_08016dc6 */

void FUN_08016dc6(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(4,1);
  local_8 = 0x48032000;
  FUN_08023950(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016dee : FUN_08016dee */

void FUN_08016dee(void)

{
  return;
}



/* ENTRY 0x08016e20 : FUN_08016e20 */

void FUN_08016e20(void)

{
  FUN_08023be8(0x10,1);
  return;
}



/* ENTRY 0x08016e2c : FUN_08016e2c */

void FUN_08016e2c(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003ba4)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003bb6)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x08016e4a : FUN_08016e4a */

undefined4 FUN_08016e4a(void)

{
  return 0;
}



/* ENTRY 0x08016e50 : FUN_08016e50 */

void FUN_08016e50(int param_1)

{
  uint uVar1;
  
  DAT_20000868 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000868 = DAT_20000868 + '\x01';
    }
    (&DAT_20003bc8)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003bc9)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003bca)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x08016eba : FUN_08016eba */

void FUN_08016eba(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x08016eda : FUN_08016eda */

void FUN_08016eda(int param_1)

{
  int iVar1;
  
  if ((DAT_2000086c % 0x226 == 200) && (DAT_200031ac == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_08016f20;
    }
    FUN_0800dfae(3);
  }
LAB_08016f20:
  if ((DAT_2000086c % 900 == 200) && (DAT_200031ac == 0)) {
    if (param_1 < 0x2454) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (7000 < iVar1) {
        if (DAT_20000694 == 0) {
          DAT_20000698 = 1;
          return;
        }
        DAT_20000698 = 7;
        return;
      }
    }
    if (0x3264 < param_1) {
      if (DAT_20000694 == 0) {
        DAT_20000698 = 5;
      }
      else {
        DAT_20000698 = 8;
      }
    }
  }
  return;
}



/* ENTRY 0x08016f8e : FUN_08016f8e */

void FUN_08016f8e(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  uVar2 = 0;
  FUN_08023202(local_30,0x14);
  FUN_08023202(local_44,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_30[uVar1] = 0;
    local_44[uVar1] = 0;
  }
  if (diag_BatState == '\x01') {
    uVar1 = 0x14;
    if (param_1 < 0x2454) {
      uVar1 = 0xe;
      uVar2 = 6 - DAT_20000910 % 7 & 0xff;
    }
    else if (param_1 < 0x2536) {
      uVar1 = 0xf;
      uVar2 = 5 - DAT_20000910 % 6 & 0xff;
    }
    else if (param_1 < 0x27fe) {
      uVar1 = 0x10;
      uVar2 = 4 - DAT_20000910 % 5 & 0xff;
    }
    else if (param_1 < 0x2ac6) {
      uVar1 = 0x11;
      uVar2 = 3 - (DAT_20000910 & 3);
    }
    else if (param_1 < 0x2d8e) {
      uVar1 = 0x12;
      uVar2 = 2 - DAT_20000910 % 3 & 0xff;
    }
    else if (param_1 < 0x3056) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000910 & 1);
    }
    else if (param_1 < 0x3058) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000910 & 1);
    }
    else if (param_1 < 0x30a3) {
      uVar1 = 0x14;
      uVar2 = 1 - (DAT_20000910 & 1);
    }
    else if (0x30a2 < param_1) {
      uVar2 = 0;
    }
    if (DAT_2000086c == uVar1 * (DAT_2000086c / uVar1)) {
      DAT_20000910 = DAT_20000910 + 1;
    }
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else if (param_1 < 0x2454) {
    if (DAT_2000086c % 0x32 < 0x1a) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
    uVar4 = 0;
    uVar2 = 0;
    FUN_08016eda(param_1);
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
    if (DAT_2000086c % 0x32 < 0x1a) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 0xff;
      uVar4 = 0x7f;
    }
    uVar2 = 0;
    FUN_08016eda(param_1);
  }
  DAT_20000869 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_08016eba(uVar2,uVar3,uVar4,0,local_30);
    FUN_08016eba(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08016e50(local_30,local_44);
  return;
}



/* ENTRY 0x08017244 : FUN_08017244 */

void FUN_08017244(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08023202(auStack_28,0x14);
  FUN_08023202(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_08016eba(cVar1,(&DAT_20003bda)[(uVar2 + 6) * 3],(&DAT_20003bdb)[(uVar2 + 6) * 3],
                 (&DAT_20003bdc)[(uVar2 + 6) * 3],auStack_3c);
    FUN_08016eba(uVar2 & 0xff,(&DAT_20003bda)[uVar2 * 3],(&DAT_20003bdb)[uVar2 * 3],
                 (&DAT_20003bdc)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_08016e4a(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x080172c0 : FUN_080172c0 */

void FUN_080172c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_08017244();
  DAT_20000916 = DAT_20000916 + 1;
  if (DAT_20000916 < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_2000091a = DAT_2000091b + (char)iVar1;
          if (0x1f < DAT_2000091a) {
            DAT_2000091a = DAT_2000091a - 0x20;
          }
          (&DAT_20003bda)[iVar1 * 3] = (&DAT_08027976)[(uint)DAT_2000091a * 3];
          (&DAT_20003bdb)[iVar1 * 3] = (&DAT_08027977)[(uint)DAT_2000091a * 3];
          (&DAT_20003bdc)[iVar1 * 3] = (&DAT_08027978)[(uint)DAT_2000091a * 3];
        }
        bVar4 = DAT_2000091b < '\0';
        DAT_2000091b = DAT_2000091b + -1;
        if (bVar4) {
          DAT_2000091b = '\x1f';
        }
      }
      else {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_2000091a = DAT_20000919 + (char)iVar1;
          if (0x1f < DAT_2000091a) {
            DAT_2000091a = DAT_2000091a - 0x20;
          }
          (&DAT_20003bda)[iVar1 * 3] = (&DAT_08027976)[(uint)DAT_2000091a * 3];
          (&DAT_20003bdb)[iVar1 * 3] = (&DAT_08027977)[(uint)DAT_2000091a * 3];
          (&DAT_20003bdc)[iVar1 * 3] = (&DAT_08027978)[(uint)DAT_2000091a * 3];
        }
        bVar4 = 0x1f < DAT_20000919;
        DAT_20000919 = DAT_20000919 + 1;
        if (bVar4) {
          DAT_20000919 = 0;
        }
      }
    }
  }
  else if (DAT_20000916 < 0x640) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      switch(DAT_20000914) {
      case 0:
        if (DAT_200008e7 == -1) {
          DAT_20000914 = 1;
        }
        else {
          DAT_200008e7 = DAT_200008e7 + '\x11';
        }
        break;
      case 1:
        if (DAT_200008e6 == '\0') {
          DAT_20000914 = 2;
        }
        else {
          DAT_200008e6 = DAT_200008e6 + -0x11;
        }
        break;
      case 2:
        if (DAT_200008e8 == -1) {
          DAT_20000914 = 3;
        }
        else {
          DAT_200008e8 = DAT_200008e8 + '\x11';
        }
        break;
      case 3:
        if (DAT_200008e7 == '\0') {
          DAT_20000914 = 4;
        }
        else {
          DAT_200008e7 = DAT_200008e7 + -0x11;
        }
        break;
      case 4:
        if (DAT_200008e6 == -1) {
          DAT_20000914 = 5;
        }
        else {
          DAT_200008e6 = DAT_200008e6 + '\x11';
        }
        break;
      case 5:
        if (DAT_200008e8 == '\0') {
          DAT_20000914 = 0;
        }
        else {
          DAT_200008e8 = DAT_200008e8 + -0x11;
        }
      }
      for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        (&DAT_20003bda)[iVar1 * 3] = DAT_200008e6;
        (&DAT_20003bdb)[iVar1 * 3] = DAT_200008e7;
        (&DAT_20003bdc)[iVar1 * 3] = DAT_200008e8;
      }
    }
  }
  else if (DAT_20000916 < 0xa8c) {
    if (DAT_20000918 == '\0') {
      DAT_20000918 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003bfe)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 3) / 100);
            (&DAT_20003bff)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c00)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003bfe)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003bfe)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003bfe)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 100) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003bfe)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003bfe)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003bfe)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027976)[iVar1 * 3] * 3) / 100);
            (&DAT_20003bff)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027977)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c00)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027978)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_2000091e = DAT_2000091c + (short)iVar1;
      if (0xdf < DAT_2000091e) {
        DAT_2000091e = DAT_2000091e + -0xe0;
      }
      (&DAT_20003bda)[iVar1 * 3] = (&DAT_20003bfe)[DAT_2000091e * 3];
      (&DAT_20003bdb)[iVar1 * 3] = (&DAT_20003bff)[DAT_2000091e * 3];
      (&DAT_20003bdc)[iVar1 * 3] = (&DAT_20003c00)[DAT_2000091e * 3];
    }
    if (param_1 == (param_2 + 5) * (param_1 / (param_2 + 5))) {
      if (bVar4) {
        DAT_2000091c = DAT_2000091c + -1;
        if (DAT_2000091c < 1) {
          DAT_2000091c = 0xdf;
        }
      }
      else {
        DAT_2000091c = DAT_2000091c + 1;
        if (0xdf < DAT_2000091c) {
          DAT_2000091c = 1;
        }
      }
    }
  }
  else if (DAT_20000916 < 0xdac) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      for (iVar2 = 0; iVar2 < 0xc; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
        DAT_20000921 = DAT_20000920 + (char)iVar2;
        if ('\v' < DAT_20000921) {
          DAT_20000921 = DAT_20000921 + -0xc;
        }
        (&DAT_20003bda)[iVar2 * 3] = (&DAT_200008e9)[DAT_20000921 * 3];
        (&DAT_20003bdb)[iVar2 * 3] = (&DAT_200008ea)[DAT_20000921 * 3];
        (&DAT_20003bdc)[iVar2 * 3] = (&DAT_200008eb)[DAT_20000921 * 3];
      }
      if (bVar4) {
        if ((0 < iVar1) && (bVar4 = DAT_20000920 == '\0', DAT_20000920 = DAT_20000920 + -1, bVar4))
        {
          DAT_20000920 = '\v';
        }
      }
      else {
        bVar4 = '\v' < DAT_20000920;
        DAT_20000920 = DAT_20000920 + '\x01';
        if (bVar4) {
          DAT_20000920 = '\x01';
        }
      }
    }
  }
  else if (0xdac < DAT_20000916) {
    DAT_20000916 = 0;
  }
  return;
}



/* ENTRY 0x08017a26 : FUN_08017a26 */

void FUN_08017a26(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  FUN_08023202(local_30,0x14);
  FUN_08023202(local_44,0x14);
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1 & 0xff) {
    local_30[uVar4] = 0;
    local_44[uVar4] = 0;
  }
  uVar4 = DAT_20000930 >> 0x1f;
  if (DAT_20000930 == ((int)(DAT_20000930 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_200031d0;
    uVar2 = (uint)DAT_200031d1;
    uVar3 = (uint)DAT_200031d2;
  }
  else if (DAT_20000930 + ((int)(DAT_20000930 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_200031d4;
    uVar2 = (uint)DAT_200031d5;
    uVar3 = (uint)DAT_200031d6;
  }
  else if (DAT_20000930 + ((int)(DAT_20000930 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_200031d8;
    uVar2 = (uint)DAT_200031d9;
    uVar3 = (uint)DAT_200031da;
  }
  else {
    uVar4 = (uint)DAT_200031dc;
    uVar2 = (uint)DAT_200031dd;
    uVar3 = (uint)DAT_200031de;
  }
  if (DAT_2000092c % 0x18 < 0xc) {
    uVar4 = (int)(uVar4 * (DAT_2000092c % 0x18)) / 0x18;
    uVar2 = (int)(uVar2 * (DAT_2000092c % 0x18)) / 0x18;
    uVar3 = (int)(uVar3 * (DAT_2000092c % 0x18)) / 0x18;
  }
  else {
    uVar4 = uVar4 - (int)(uVar4 * (DAT_2000092c % 0x18)) / 0x18;
    uVar2 = uVar2 - (int)(uVar2 * (DAT_2000092c % 0x18)) / 0x18;
    uVar3 = uVar3 - (int)(uVar3 * (DAT_2000092c % 0x18)) / 0x18;
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_08016eba(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_08016eba(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_2000092c == (DAT_2000092c / 0x18) * 0x18) {
    DAT_20000930 = DAT_20000930 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_2000092c = DAT_2000092c + 1;
    FUN_08016e4a(local_30,local_44);
  }
  else {
    DAT_2000092c = DAT_2000092c + 1;
    FUN_08016e4a(local_44,local_30);
  }
  return;
}



/* ENTRY 0x08017c0c : FUN_08017c0c */

void FUN_08017c0c(int param_1,int param_2)

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
  FUN_08023202(auStack_40,0x14);
  FUN_08023202(auStack_54,0x14);
  iVar5 = 0;
  iVar8 = 0;
  for (cVar4 = '\0'; cVar4 < '\x06'; cVar4 = cVar4 + '\x01') {
    FUN_08016eba(cVar2,(&DAT_20003bda)[iVar8 * 3],(&DAT_20003bdb)[iVar8 * 3],
                 (&DAT_20003bdc)[iVar8 * 3],auStack_54);
    FUN_08016eba(cVar2,(&DAT_20003bda)[iVar5 * 3],(&DAT_20003bdb)[iVar5 * 3],
                 (&DAT_20003bdc)[iVar5 * 3],auStack_40);
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
  FUN_08016e4a(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_20000927 = DAT_20000926 + (char)iVar5;
      if ('\v' < DAT_20000927) {
        DAT_20000927 = DAT_20000927 + -0xc;
      }
      (&DAT_20003bda)[iVar5 * 3] = (&DAT_20003ec2)[DAT_20000927 * 3];
      (&DAT_20003bdb)[iVar5 * 3] = (&DAT_20003ec3)[DAT_20000927 * 3];
      (&DAT_20003bdc)[iVar5 * 3] = (&DAT_20003ec4)[DAT_20000927 * 3];
    }
    bVar1 = '\v' < DAT_20000926;
    DAT_20000926 = DAT_20000926 + '\x01';
    if (bVar1) {
      DAT_20000926 = '\x01';
    }
  }
  if (DAT_20000928 < 500) {
    DAT_20003ec2 = DAT_200031d0;
    DAT_20003ec3 = DAT_200031d1;
    DAT_20003ec4 = DAT_200031d2;
    DAT_20003ec5 = (undefined1)(((uint)DAT_200031d0 * 0x50) / 100);
    DAT_20003ec6 = (undefined1)(((uint)DAT_200031d1 * 0x50) / 100);
    DAT_20003ec7 = (undefined1)(((uint)DAT_200031d2 * 0x50) / 100);
    DAT_20003ec8 = (undefined1)(((uint)DAT_200031d0 * 0x37) / 100);
    DAT_20003ec9 = (undefined1)(((uint)DAT_200031d1 * 0x37) / 100);
    DAT_20003eca = (undefined1)(((uint)DAT_200031d2 * 0x37) / 100);
    DAT_20003ecb = (undefined1)(((uint)DAT_200031d0 * 0x23) / 100);
    DAT_20003ecc = (undefined1)(((uint)DAT_200031d1 * 0x23) / 100);
    DAT_20003ecd = (undefined1)(((uint)DAT_200031d2 * 0x23) / 100);
    DAT_20003ece = (undefined1)(((uint)DAT_200031d0 * 0xf) / 100);
    DAT_20003ecf = (undefined1)(((uint)DAT_200031d1 * 0xf) / 100);
    DAT_20003ed0 = (undefined1)(((uint)DAT_200031d2 * 0xf) / 100);
    DAT_20003ed1 = (undefined1)(((uint)DAT_200031d0 * 5) / 100);
    DAT_20003ed2 = (undefined1)(((uint)DAT_200031d1 * 5) / 100);
    DAT_20003ed3 = (undefined1)(((uint)DAT_200031d2 * 5) / 100);
    DAT_20000928 = DAT_20000928 + 1;
  }
  else if ((ushort)(DAT_20000928 + 1) < 1000) {
    DAT_20003ec2 = DAT_200031d4;
    DAT_20003ec3 = DAT_200031d5;
    DAT_20003ec4 = DAT_200031d6;
    DAT_20003ec5 = (undefined1)(((uint)DAT_200031d4 * 0x50) / 100);
    DAT_20003ec6 = (undefined1)(((uint)DAT_200031d5 * 0x50) / 100);
    DAT_20003ec7 = (undefined1)(((uint)DAT_200031d6 * 0x50) / 100);
    DAT_20003ec8 = (undefined1)(((uint)DAT_200031d4 * 0x37) / 100);
    DAT_20003ec9 = (undefined1)(((uint)DAT_200031d5 * 0x37) / 100);
    DAT_20003eca = (undefined1)(((uint)DAT_200031d6 * 0x37) / 100);
    DAT_20003ecb = (undefined1)(((uint)DAT_200031d4 * 0x23) / 100);
    DAT_20003ecc = (undefined1)(((uint)DAT_200031d5 * 0x23) / 100);
    DAT_20003ecd = (undefined1)(((uint)DAT_200031d6 * 0x23) / 100);
    DAT_20003ece = (undefined1)(((uint)DAT_200031d4 * 0xf) / 100);
    DAT_20003ecf = (undefined1)(((uint)DAT_200031d5 * 0xf) / 100);
    DAT_20003ed0 = (undefined1)(((uint)DAT_200031d6 * 0xf) / 100);
    DAT_20003ed1 = (undefined1)(((uint)DAT_200031d4 * 5) / 100);
    DAT_20003ed2 = (undefined1)(((uint)DAT_200031d5 * 5) / 100);
    DAT_20003ed3 = (undefined1)(((uint)DAT_200031d6 * 5) / 100);
    DAT_20000928 = DAT_20000928 + 2;
  }
  else if ((ushort)(DAT_20000928 + 2) < 0x5dc) {
    DAT_20003ec2 = DAT_200031d8;
    DAT_20003ec3 = DAT_200031d9;
    DAT_20003ec4 = DAT_200031da;
    DAT_20003ec5 = (undefined1)(((uint)DAT_200031d8 * 0x50) / 100);
    DAT_20003ec6 = (undefined1)(((uint)DAT_200031d9 * 0x50) / 100);
    DAT_20003ec7 = (undefined1)(((uint)DAT_200031da * 0x50) / 100);
    DAT_20003ec8 = (undefined1)(((uint)DAT_200031d8 * 0x37) / 100);
    DAT_20003ec9 = (undefined1)(((uint)DAT_200031d9 * 0x37) / 100);
    DAT_20003eca = (undefined1)(((uint)DAT_200031da * 0x37) / 100);
    DAT_20003ecb = (undefined1)(((uint)DAT_200031d8 * 0x23) / 100);
    DAT_20003ecc = (undefined1)(((uint)DAT_200031d9 * 0x23) / 100);
    DAT_20003ecd = (undefined1)(((uint)DAT_200031da * 0x23) / 100);
    DAT_20003ece = (undefined1)(((uint)DAT_200031d8 * 0xf) / 100);
    DAT_20003ecf = (undefined1)(((uint)DAT_200031d9 * 0xf) / 100);
    DAT_20003ed0 = (undefined1)(((uint)DAT_200031da * 0xf) / 100);
    DAT_20003ed1 = (undefined1)(((uint)DAT_200031d8 * 5) / 100);
    DAT_20003ed2 = (undefined1)(((uint)DAT_200031d9 * 5) / 100);
    DAT_20003ed3 = (undefined1)(((uint)DAT_200031da * 5) / 100);
    DAT_20000928 = DAT_20000928 + 3;
  }
  else {
    uVar3 = DAT_20000928 + 4;
    if ((ushort)(DAT_20000928 + 3) < 2000) {
      DAT_20003ec2 = DAT_200031dc;
      DAT_20003ec3 = DAT_200031dd;
      DAT_20003ec4 = DAT_200031de;
      DAT_20003ec5 = (undefined1)(((uint)DAT_200031dc * 0x50) / 100);
      DAT_20003ec6 = (undefined1)(((uint)DAT_200031dd * 0x50) / 100);
      DAT_20003ec7 = (undefined1)(((uint)DAT_200031de * 0x50) / 100);
      DAT_20003ec8 = (undefined1)(((uint)DAT_200031dc * 0x37) / 100);
      DAT_20003ec9 = (undefined1)(((uint)DAT_200031dd * 0x37) / 100);
      DAT_20003eca = (undefined1)(((uint)DAT_200031de * 0x37) / 100);
      DAT_20003ecb = (undefined1)(((uint)DAT_200031dc * 0x23) / 100);
      DAT_20003ecc = (undefined1)(((uint)DAT_200031dd * 0x23) / 100);
      DAT_20003ecd = (undefined1)(((uint)DAT_200031de * 0x23) / 100);
      DAT_20003ece = (undefined1)(((uint)DAT_200031dc * 0xf) / 100);
      DAT_20003ecf = (undefined1)(((uint)DAT_200031dd * 0xf) / 100);
      DAT_20003ed0 = (undefined1)(((uint)DAT_200031de * 0xf) / 100);
      DAT_20003ed1 = (undefined1)(((uint)DAT_200031dc * 5) / 100);
      DAT_20003ed2 = (undefined1)(((uint)DAT_200031dd * 5) / 100);
      DAT_20003ed3 = (undefined1)(((uint)DAT_200031de * 5) / 100);
      DAT_20000928 = uVar3;
    }
    else {
      DAT_20000928 = DAT_20000928 + 5;
      if (2000 < uVar3) {
        DAT_20000928 = 0;
      }
    }
  }
  return;
}



/* ENTRY 0x080183fa : FUN_080183fa */

void FUN_080183fa(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_08017244();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_20000925 = DAT_20000924 + (char)uVar6;
      if ('\v' < DAT_20000925) {
        DAT_20000925 = DAT_20000925 + -0xc;
      }
      (&DAT_20003bda)[uVar6 * 3] = (&DAT_20003e9e)[DAT_20000925 * 3];
      (&DAT_20003bdb)[uVar6 * 3] = (&DAT_20003e9f)[DAT_20000925 * 3];
      (&DAT_20003bdc)[uVar6 * 3] = (&DAT_20003ea0)[DAT_20000925 * 3];
    }
    if (bVar2) {
      bVar1 = DAT_20000924 == '\0';
      DAT_20000924 = DAT_20000924 + -1;
      if (bVar1) {
        DAT_20000924 = '\v';
      }
    }
    else {
      bVar1 = '\v' < DAT_20000924;
      DAT_20000924 = DAT_20000924 + '\x01';
      if (bVar1) {
        DAT_20000924 = '\x01';
      }
    }
  }
  uVar4 = DAT_20000922 + 1;
  if (DAT_20000922 < 500) {
    DAT_20000922 = uVar4;
    if (bVar2) {
      DAT_20003ead = DAT_200031d0;
      DAT_20003eae = DAT_200031d1;
      DAT_20003eaf = DAT_200031d2;
      DAT_20003eaa = (undefined1)(((uint)DAT_200031d0 * 0x50) / 100);
      DAT_20003eab = (undefined1)(((uint)DAT_200031d1 * 0x50) / 100);
      DAT_20003eac = (undefined1)(((uint)DAT_200031d2 * 0x50) / 100);
      DAT_20003ea7 = (undefined1)(((uint)DAT_200031d0 * 0x37) / 100);
      DAT_20003ea8 = (undefined1)(((uint)DAT_200031d1 * 0x37) / 100);
      DAT_20003ea9 = (undefined1)(((uint)DAT_200031d2 * 0x37) / 100);
      DAT_20003ea4 = (undefined1)(((uint)DAT_200031d0 * 0x23) / 100);
      DAT_20003ea5 = (undefined1)(((uint)DAT_200031d1 * 0x23) / 100);
      DAT_20003ea6 = (undefined1)(((uint)DAT_200031d2 * 0x23) / 100);
      DAT_20003ea1 = (undefined1)(((uint)DAT_200031d0 * 0xf) / 100);
      DAT_20003ea2 = (undefined1)(((uint)DAT_200031d1 * 0xf) / 100);
      DAT_20003ea3 = (undefined1)(((uint)DAT_200031d2 * 0xf) / 100);
      DAT_20003e9e = (byte)(((uint)DAT_200031d0 * 5) / 100);
      DAT_20003e9f = (byte)(((uint)DAT_200031d1 * 5) / 100);
      DAT_20003ea0 = (byte)(((uint)DAT_200031d2 * 5) / 100);
    }
    else {
      DAT_20003ea1 = (undefined1)(((uint)DAT_200031d0 * 0x50) / 100);
      DAT_20003ea2 = (undefined1)(((uint)DAT_200031d1 * 0x50) / 100);
      DAT_20003ea3 = (undefined1)(((uint)DAT_200031d2 * 0x50) / 100);
      DAT_20003ea4 = (undefined1)(((uint)DAT_200031d0 * 0x37) / 100);
      DAT_20003ea5 = (undefined1)(((uint)DAT_200031d1 * 0x37) / 100);
      DAT_20003ea6 = (undefined1)(((uint)DAT_200031d2 * 0x37) / 100);
      DAT_20003ea7 = (undefined1)(((uint)DAT_200031d0 * 0x23) / 100);
      DAT_20003ea8 = (undefined1)(((uint)DAT_200031d1 * 0x23) / 100);
      DAT_20003ea9 = (undefined1)(((uint)DAT_200031d2 * 0x23) / 100);
      DAT_20003eaa = (undefined1)(((uint)DAT_200031d0 * 0xf) / 100);
      DAT_20003eab = (undefined1)(((uint)DAT_200031d1 * 0xf) / 100);
      DAT_20003eac = (undefined1)(((uint)DAT_200031d2 * 0xf) / 100);
      DAT_20003ead = (byte)(((uint)DAT_200031d0 * 5) / 100);
      DAT_20003eae = (byte)(((uint)DAT_200031d1 * 5) / 100);
      DAT_20003eaf = (byte)(((uint)DAT_200031d2 * 5) / 100);
      DAT_20003ea0 = DAT_200031d2;
      DAT_20003e9f = DAT_200031d1;
      DAT_20003e9e = DAT_200031d0;
    }
  }
  else {
    uVar5 = DAT_20000922 + 2;
    if (uVar4 < 1000) {
      DAT_20000922 = uVar5;
      if (bVar2) {
        DAT_20003ead = DAT_200031d4;
        DAT_20003eae = DAT_200031d5;
        DAT_20003eaf = DAT_200031d6;
        DAT_20003eaa = (undefined1)(((uint)DAT_200031d4 * 0x50) / 100);
        DAT_20003eab = (undefined1)(((uint)DAT_200031d5 * 0x50) / 100);
        DAT_20003eac = (undefined1)(((uint)DAT_200031d6 * 0x50) / 100);
        DAT_20003ea7 = (undefined1)(((uint)DAT_200031d4 * 0x37) / 100);
        DAT_20003ea8 = (undefined1)(((uint)DAT_200031d5 * 0x37) / 100);
        DAT_20003ea9 = (undefined1)(((uint)DAT_200031d6 * 0x37) / 100);
        DAT_20003ea4 = (undefined1)(((uint)DAT_200031d4 * 0x23) / 100);
        DAT_20003ea5 = (undefined1)(((uint)DAT_200031d5 * 0x23) / 100);
        DAT_20003ea6 = (undefined1)(((uint)DAT_200031d6 * 0x23) / 100);
        DAT_20003ea1 = (undefined1)(((uint)DAT_200031d4 * 0xf) / 100);
        DAT_20003ea2 = (undefined1)(((uint)DAT_200031d5 * 0xf) / 100);
        DAT_20003ea3 = (undefined1)(((uint)DAT_200031d6 * 0xf) / 100);
        DAT_20003e9e = (byte)(((uint)DAT_200031d4 * 5) / 100);
        DAT_20003e9f = (byte)(((uint)DAT_200031d5 * 5) / 100);
        DAT_20003ea0 = (byte)(((uint)DAT_200031d6 * 5) / 100);
      }
      else {
        DAT_20003ea1 = (undefined1)(((uint)DAT_200031d4 * 0x50) / 100);
        DAT_20003ea2 = (undefined1)(((uint)DAT_200031d5 * 0x50) / 100);
        DAT_20003ea3 = (undefined1)(((uint)DAT_200031d6 * 0x50) / 100);
        DAT_20003ea4 = (undefined1)(((uint)DAT_200031d4 * 0x37) / 100);
        DAT_20003ea5 = (undefined1)(((uint)DAT_200031d5 * 0x37) / 100);
        DAT_20003ea6 = (undefined1)(((uint)DAT_200031d6 * 0x37) / 100);
        DAT_20003ea7 = (undefined1)(((uint)DAT_200031d4 * 0x23) / 100);
        DAT_20003ea8 = (undefined1)(((uint)DAT_200031d5 * 0x23) / 100);
        DAT_20003ea9 = (undefined1)(((uint)DAT_200031d6 * 0x23) / 100);
        DAT_20003eaa = (undefined1)(((uint)DAT_200031d4 * 0xf) / 100);
        DAT_20003eab = (undefined1)(((uint)DAT_200031d5 * 0xf) / 100);
        DAT_20003eac = (undefined1)(((uint)DAT_200031d6 * 0xf) / 100);
        DAT_20003ead = (byte)(((uint)DAT_200031d4 * 5) / 100);
        DAT_20003eae = (byte)(((uint)DAT_200031d5 * 5) / 100);
        DAT_20003eaf = (byte)(((uint)DAT_200031d6 * 5) / 100);
        DAT_20003ea0 = DAT_200031d6;
        DAT_20003e9f = DAT_200031d5;
        DAT_20003e9e = DAT_200031d4;
      }
    }
    else {
      uVar4 = DAT_20000922 + 3;
      if (uVar5 < 0x5dc) {
        DAT_20000922 = uVar4;
        if (bVar2) {
          DAT_20003ead = DAT_200031d8;
          DAT_20003eae = DAT_200031d9;
          DAT_20003eaf = DAT_200031da;
          DAT_20003eaa = (undefined1)(((uint)DAT_200031d8 * 0x50) / 100);
          DAT_20003eab = (undefined1)(((uint)DAT_200031d9 * 0x50) / 100);
          DAT_20003eac = (undefined1)(((uint)DAT_200031da * 0x50) / 100);
          DAT_20003ea7 = (undefined1)(((uint)DAT_200031d8 * 0x37) / 100);
          DAT_20003ea8 = (undefined1)(((uint)DAT_200031d9 * 0x37) / 100);
          DAT_20003ea9 = (undefined1)(((uint)DAT_200031da * 0x37) / 100);
          DAT_20003ea4 = (undefined1)(((uint)DAT_200031d8 * 0x23) / 100);
          DAT_20003ea5 = (undefined1)(((uint)DAT_200031d9 * 0x23) / 100);
          DAT_20003ea6 = (undefined1)(((uint)DAT_200031da * 0x23) / 100);
          DAT_20003ea1 = (undefined1)(((uint)DAT_200031d8 * 0xf) / 100);
          DAT_20003ea2 = (undefined1)(((uint)DAT_200031d9 * 0xf) / 100);
          DAT_20003ea3 = (undefined1)(((uint)DAT_200031da * 0xf) / 100);
          DAT_20003e9e = (byte)(((uint)DAT_200031d8 * 5) / 100);
          DAT_20003e9f = (byte)(((uint)DAT_200031d9 * 5) / 100);
          DAT_20003ea0 = (byte)(((uint)DAT_200031da * 5) / 100);
        }
        else {
          DAT_20003ea1 = (undefined1)(((uint)DAT_200031d8 * 0x50) / 100);
          DAT_20003ea2 = (undefined1)(((uint)DAT_200031d9 * 0x50) / 100);
          DAT_20003ea3 = (undefined1)(((uint)DAT_200031da * 0x50) / 100);
          DAT_20003ea4 = (undefined1)(((uint)DAT_200031d8 * 0x37) / 100);
          DAT_20003ea5 = (undefined1)(((uint)DAT_200031d9 * 0x37) / 100);
          DAT_20003ea6 = (undefined1)(((uint)DAT_200031da * 0x37) / 100);
          DAT_20003ea7 = (undefined1)(((uint)DAT_200031d8 * 0x23) / 100);
          DAT_20003ea8 = (undefined1)(((uint)DAT_200031d9 * 0x23) / 100);
          DAT_20003ea9 = (undefined1)(((uint)DAT_200031da * 0x23) / 100);
          DAT_20003eaa = (undefined1)(((uint)DAT_200031d8 * 0xf) / 100);
          DAT_20003eab = (undefined1)(((uint)DAT_200031d9 * 0xf) / 100);
          DAT_20003eac = (undefined1)(((uint)DAT_200031da * 0xf) / 100);
          DAT_20003ead = (byte)(((uint)DAT_200031d8 * 5) / 100);
          DAT_20003eae = (byte)(((uint)DAT_200031d9 * 5) / 100);
          DAT_20003eaf = (byte)(((uint)DAT_200031da * 5) / 100);
          DAT_20003ea0 = DAT_200031da;
          DAT_20003e9f = DAT_200031d9;
          DAT_20003e9e = DAT_200031d8;
        }
      }
      else {
        uVar5 = DAT_20000922 + 4;
        if (uVar4 < 2000) {
          DAT_20000922 = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20003ead = DAT_200031dc;
              DAT_20003eae = DAT_200031dd;
              DAT_20003eaf = DAT_200031de;
              DAT_20003eaa = (undefined1)(((uint)DAT_200031dc * 0x50) / 100);
              DAT_20003eab = (undefined1)(((uint)DAT_200031dd * 0x50) / 100);
              DAT_20003eac = (undefined1)(((uint)DAT_200031de * 0x50) / 100);
              DAT_20003ea7 = (undefined1)(((uint)DAT_200031dc * 0x37) / 100);
              DAT_20003ea8 = (undefined1)(((uint)DAT_200031dd * 0x37) / 100);
              DAT_20003ea9 = (undefined1)(((uint)DAT_200031de * 0x37) / 100);
              DAT_20003ea4 = (undefined1)(((uint)DAT_200031dc * 0x23) / 100);
              DAT_20003ea5 = (undefined1)(((uint)DAT_200031dd * 0x23) / 100);
              DAT_20003ea6 = (undefined1)(((uint)DAT_200031de * 0x23) / 100);
              DAT_20003ea1 = (undefined1)(((uint)DAT_200031dc * 0xf) / 100);
              DAT_20003ea2 = (undefined1)(((uint)DAT_200031dd * 0xf) / 100);
              DAT_20003ea3 = (undefined1)(((uint)DAT_200031de * 0xf) / 100);
              DAT_20003e9e = (byte)(((uint)DAT_200031dc * 5) / 100);
              DAT_20003e9f = (byte)(((uint)DAT_200031dd * 5) / 100);
              DAT_20003ea0 = (byte)(((uint)DAT_200031de * 5) / 100);
            }
          }
          else {
            DAT_20003e9e = DAT_200031dc;
            DAT_20003e9f = DAT_200031dd;
            DAT_20003ea0 = DAT_200031de;
            DAT_20003ea1 = (undefined1)(((uint)DAT_200031dc * 0x50) / 100);
            DAT_20003ea2 = (undefined1)(((uint)DAT_200031dd * 0x50) / 100);
            DAT_20003ea3 = (undefined1)(((uint)DAT_200031de * 0x50) / 100);
            DAT_20003ea4 = (undefined1)(((uint)DAT_200031dc * 0x37) / 100);
            DAT_20003ea5 = (undefined1)(((uint)DAT_200031dd * 0x37) / 100);
            DAT_20003ea6 = (undefined1)(((uint)DAT_200031de * 0x37) / 100);
            DAT_20003ea7 = (undefined1)(((uint)DAT_200031dc * 0x23) / 100);
            DAT_20003ea8 = (undefined1)(((uint)DAT_200031dd * 0x23) / 100);
            DAT_20003ea9 = (undefined1)(((uint)DAT_200031de * 0x23) / 100);
            DAT_20003eaa = (undefined1)(((uint)DAT_200031dc * 0xf) / 100);
            DAT_20003eab = (undefined1)(((uint)DAT_200031dd * 0xf) / 100);
            DAT_20003eac = (undefined1)(((uint)DAT_200031de * 0xf) / 100);
            DAT_20003ead = (byte)(((uint)DAT_200031dc * 5) / 100);
            DAT_20003eae = (byte)(((uint)DAT_200031dd * 5) / 100);
            DAT_20003eaf = (byte)(((uint)DAT_200031de * 5) / 100);
          }
        }
        else {
          DAT_20000922 = DAT_20000922 + 5;
          if (2000 < uVar5) {
            DAT_20000922 = 0;
          }
        }
      }
    }
  }
  return;
}



/* ENTRY 0x0801918a : FUN_0801918a */

void FUN_0801918a(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_080183fa(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_08017c0c(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_08017a26();
    }
  }
  else {
    FUN_080172c0(param_1,param_2);
  }
  return;
}



/* ENTRY 0x080191cc : FUN_080191cc */

void FUN_080191cc(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08023202(auStack_2c,0x14);
  FUN_08023202(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_08016eba(bVar1,0,0,0,auStack_2c);
    FUN_08016eba(bVar1,0,0,0,auStack_40);
  }
  if (DAT_2000086c % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_08016eba(bVar1,uVar2,0,0,auStack_2c);
    FUN_08016eba(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_08016e4a(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x08019276 : FUN_08019276 */

undefined4 FUN_08019276(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08023202(local_1c,0x14);
  FUN_08023202(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_20003132 == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_08016e4a(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_200031c6 == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_08016e4a(local_1c,local_30);
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
    FUN_08016e4a(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08019360 : FUN_08019360 */

undefined4 FUN_08019360(void)

{
  uint uVar1;
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  
  FUN_08023202(local_28,0x14);
  FUN_08023202(local_3c,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_28[uVar1] = 0;
    local_3c[uVar1] = 0;
  }
  return 0;
}



/* ENTRY 0x08019396 : FUN_08019396 */

void FUN_08019396(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023202(auStack_34,0x14);
  FUN_08023202(auStack_48,0x14);
  DAT_2000086c = DAT_2000086c + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_08016eba(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_08016eba(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_08016e4a(auStack_34,auStack_48);
    }
    else {
      FUN_08016f8e(diag_TotalVoltage);
    }
  }
  else if (DAT_20000870 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_08016eda(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_08019360();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08016eda(diag_TotalVoltage);
      }
    }
    else if (DAT_20000864 == 0) {
      iVar1 = FUN_08019276();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_08016eda(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_08016f8e(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031a4 < iVar1 / 1000) {
            FUN_080191cc();
          }
          else {
            iVar1 = diag_VehicleSpeed;
            if (diag_VehicleSpeed < 0) {
              iVar1 = -diag_VehicleSpeed;
            }
            DAT_20000872 = (ushort)(iVar1 / 1000);
            if (0x28 < DAT_20000872) {
              DAT_20000872 = 0x28;
            }
            DAT_20000874 = (int)((uint)DAT_200031a4 - (uint)DAT_20000872) / 5;
            if (DAT_20000874 == 0) {
              DAT_20000874 = 1;
            }
            if (((DAT_200031c8 != 0) && (DAT_200031c8 != 1)) &&
               ((DAT_200031c8 != 2 && (DAT_200031c8 != 3)))) {
              DAT_200031c8 = 0;
            }
            FUN_0801918a(DAT_2000086c,DAT_20000874,DAT_200031c8);
          }
        }
      }
    }
    else {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      DAT_20000864 = DAT_20000864 + -1;
      FUN_0801918a(DAT_2000086c,(int)((uint)DAT_200031a4 - iVar1 / 1000) / 5,DAT_200031c8);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_08016eda(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x080195f2 : FUN_080195f2 */

void FUN_080195f2(void)

{
  if (DAT_20000880 < 0x14) {
    DAT_20000880 = DAT_20000880 + 1;
    DAT_2000087c = ((int)(uint)DAT_200034a0 >> 4) * 100;
  }
  else {
    DAT_2000087c = (DAT_2000087c * 99 + ((int)(uint)DAT_200034a0 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x0801963e : FUN_0801963e */

void FUN_0801963e(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023202(auStack_34,0x14);
  FUN_08023202(auStack_48,0x14);
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if ((iVar2 < 500) && (DAT_200031f4 == 1)) {
    if (DAT_200008a2 < 0x2ee) {
      DAT_200008a6 = '\x01';
      DAT_200008a2 = DAT_200008a2 + 1;
    }
    else {
      DAT_200008a6 = '\0';
      DAT_200008a2 = 1000;
    }
  }
  else {
    DAT_200008a6 = '\0';
    DAT_200008a2 = 0;
  }
  bVar5 = DAT_200031f4 == 1;
  do {
    if (!bVar5) goto code_r0x08019e8e;
    bVar5 = DAT_200008a6 == '\0';
  } while (((!bVar5) || (bVar5 = DAT_20003132 == '\0', !bVar5)) ||
          (bVar5 = diag_AgeModeflg == '\0', !bVar5));
  DAT_20000870 = 1;
  DAT_20000898 = (short)((int)(uint)DAT_200034a0 >> 4);
  if (DAT_2000089e < 3) {
    iVar2 = (int)DAT_20000898 - DAT_2000087c / 100;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_20000886 = (short)iVar2 + DAT_20000886;
    DAT_2000089e = DAT_2000089e + 1;
  }
  else {
    DAT_2000089e = 0;
    DAT_20000882 = DAT_20000886 / 3;
    DAT_20000886 = 0;
  }
  bVar5 = 2000 < DAT_200008a0;
  DAT_200008a0 = DAT_200008a0 + 1;
  if (bVar5) {
    DAT_200008a0 = 0;
  }
  if (DAT_20000882 < 0x4b) {
    bVar5 = 800 < DAT_200008a4;
    DAT_200008a4 = DAT_200008a4 + 1;
    if (bVar5) {
      DAT_200008a4 = 0;
      DAT_200008a7 = '\0';
      DAT_2000313e = 0;
    }
  }
  else {
    DAT_200008a4 = 0;
  }
  if ((DAT_20000882 < 0x82) && (DAT_200008a7 != '\x01')) {
    if (DAT_2000089c < 500) {
      DAT_2000089c = DAT_2000089c + 1;
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_08016eba(uVar4 & 0xff,0,0,0,auStack_34);
        FUN_08016eba(uVar4 & 0xff,0,0,0,auStack_48);
      }
      if (DAT_2000069c == (DAT_2000069c / 5) * 5) {
        FUN_08016e4a(auStack_34,auStack_48);
      }
    }
    else {
      DAT_2000089c = 6000;
code_r0x08019e8e:
      DAT_20000870 = 0;
    }
  }
  else {
    DAT_200008a7 = '\x01';
    DAT_2000313e = 1;
    if (DAT_2000089f < 200) {
      DAT_20000894 = DAT_20000894 + DAT_20000882;
      DAT_2000089f = DAT_2000089f + 1;
    }
    else {
      DAT_2000089f = 0;
      DAT_2000088a = (ushort)(DAT_20000894 / 200);
      DAT_20000894 = 0;
    }
    if ((uint)DAT_200008a0 == (DAT_200008a0 / 0xfa) * 0xfa) {
      uVar1 = DAT_2000088a + 0x50;
      if ((400 < DAT_20000882) && (uVar1 = DAT_2000088a + 200, 900 < DAT_20000882)) {
        uVar1 = DAT_2000088a + 400;
      }
      DAT_2000088a = uVar1;
      DAT_2000089a = DAT_2000088a / 5;
    }
    DAT_2000089c = 0;
    DAT_2000088e = DAT_20000882 / DAT_2000089a;
    if (6 < DAT_2000088e) {
      DAT_2000088e = 6;
    }
    if (DAT_200031fc == 0) {
      DAT_200008aa = DAT_200008aa + 1;
      if (DAT_200008aa < 25000) {
        if (DAT_200008aa < 15000) {
          if (9999 < DAT_200008aa) {
            DAT_200008a8 = '\x01';
          }
        }
        else {
          DAT_200008a8 = '\x02';
        }
      }
      else {
        DAT_200008aa = 0;
        DAT_200008a8 = '\0';
      }
    }
    else if (DAT_200031fc == 1) {
      DAT_200008a8 = '\0';
    }
    else if (DAT_200031fc == 2) {
      DAT_200008a8 = '\x01';
    }
    else if (DAT_200031fc == 3) {
      DAT_200008a8 = '\x02';
    }
    if (DAT_200008a8 == '\0') {
      if ((uint)DAT_20000890 < (uint)DAT_2000088e * 0x50) {
        DAT_20000890 = DAT_2000088e * 0x50;
      }
      else if (DAT_20000890 != 0) {
        DAT_20000890 = DAT_20000890 - 1;
      }
      if (DAT_2000069c % 5 == 0) {
        for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
          if (5 < DAT_200008de) {
            DAT_200008de = 0;
          }
          if (5 < DAT_200008df) {
            DAT_200008df = 0;
          }
          uVar3 = (uint)DAT_200008de;
          DAT_200008de = DAT_200008de + 1;
          DAT_200008dc = DAT_200008de;
          if ((int)uVar3 < (int)(6 - (uint)DAT_2000088e)) {
            DAT_200008dc = 0;
          }
          if (6 - DAT_20000890 / 0x50 == (uint)DAT_200008de) {
            DAT_200008dc = 1;
          }
          if ((int)uVar4 < 6) {
            FUN_08016eba(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ac),
                         *(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ad),
                         *(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ae),auStack_48);
            FUN_08016eba(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ac),
                         *(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ad),
                         *(undefined1 *)((uint)DAT_200008dc * 3 + 0x200008ae),auStack_34);
          }
        }
        DAT_200008df = 0;
        DAT_200008de = 0;
      }
    }
    else if (DAT_200008a8 == '\x01') {
      DAT_20000892 = (char)((int)((uint)DAT_2000088e * 100) >> 4);
      DAT_200008c1 = (undefined1)
                     ((int)((int)DAT_20000892 * (uint)(byte)(&DAT_200008c1)[(uint)DAT_200008e2 * 3])
                     / 100);
      DAT_200008c2 = (undefined1)
                     ((int)((int)DAT_20000892 * (uint)(byte)(&DAT_200008c2)[(uint)DAT_200008e2 * 3])
                     / 100);
      DAT_200008c3 = (undefined1)
                     ((int)((int)DAT_20000892 * (uint)(byte)(&DAT_200008c3)[(uint)DAT_200008e2 * 3])
                     / 100);
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_08016eba(uVar4 & 0xff,DAT_200008c1,DAT_200008c2,DAT_200008c3,auStack_48);
        FUN_08016eba(uVar4 & 0xff,DAT_200008c1,DAT_200008c2,DAT_200008c3,auStack_34);
      }
      if ((DAT_2000069c % 300 == 0) &&
         (bVar5 = 7 < DAT_200008e2, DAT_200008e2 = DAT_200008e2 + 1, bVar5)) {
        DAT_200008e2 = 2;
      }
    }
    else if (DAT_200008a8 == '\x02') {
      if (DAT_2000069c % 10 == 0) {
        if ((DAT_20000892 < 'd') && (DAT_200008e3 == '\0')) {
          DAT_20000892 = DAT_20000892 + (char)DAT_2000088e * '\x02';
        }
        else if (('\0' < DAT_20000892) && (DAT_200008e3 == '\x01')) {
          DAT_20000892 = DAT_20000892 - (char)DAT_2000088e;
        }
        if ((DAT_20000893 < 'd') && (DAT_200008e4 == '\0')) {
          DAT_20000893 = DAT_20000893 + (char)DAT_2000088e * '\x02';
        }
        else if (('\0' < DAT_20000893) && (DAT_200008e4 == '\x01')) {
          DAT_20000893 = DAT_20000893 - (char)DAT_2000088e;
        }
        if ((DAT_20000893 == 'd') && (DAT_20000892 == 'd')) {
          DAT_20000893 = DAT_20000892;
          DAT_20000892 = '\0';
        }
        if (DAT_20000892 < 'd') {
          if (DAT_20000892 < '\x01') {
            DAT_200008e3 = '\0';
            DAT_20000892 = '\0';
            bVar5 = 7 < DAT_200008e0;
            DAT_200008e0 = DAT_200008e0 + 1;
            if (bVar5) {
              DAT_200008e0 = 2;
            }
          }
        }
        else {
          DAT_200008e3 = '\x01';
          DAT_20000892 = 'd';
        }
        if (DAT_20000893 < 'd') {
          if (DAT_20000893 < '\x01') {
            DAT_200008e4 = '\0';
            DAT_20000893 = '\0';
            DAT_200008e1 = DAT_200008e0 + 1;
            if (7 < DAT_200008e1) {
              DAT_200008e1 = 2;
            }
          }
        }
        else {
          DAT_200008e4 = '\x01';
          DAT_20000893 = 'd';
        }
        DAT_200008c1 = (undefined1)
                       ((int)((int)DAT_20000892 *
                             (uint)(byte)(&DAT_200008c1)[(uint)DAT_200008e0 * 3]) / 100);
        DAT_200008c2 = (undefined1)
                       ((int)((int)DAT_20000892 *
                             (uint)(byte)(&DAT_200008c2)[(uint)DAT_200008e0 * 3]) / 100);
        DAT_200008c3 = (undefined1)
                       ((int)((int)DAT_20000892 *
                             (uint)(byte)(&DAT_200008c3)[(uint)DAT_200008e0 * 3]) / 100);
        DAT_200008c4 = (undefined1)
                       ((int)((int)DAT_20000893 *
                             (uint)(byte)(&DAT_200008c1)[(uint)DAT_200008e1 * 3]) / 100);
        DAT_200008c5 = (undefined1)
                       ((int)((int)DAT_20000893 *
                             (uint)(byte)(&DAT_200008c2)[(uint)DAT_200008e1 * 3]) / 100);
        DAT_200008c6 = (undefined1)
                       ((int)((int)DAT_20000893 *
                             (uint)(byte)(&DAT_200008c3)[(uint)DAT_200008e1 * 3]) / 100);
      }
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        if ((int)uVar4 < 6) {
          FUN_08016eba(uVar4 & 0xff,DAT_200008c1,DAT_200008c2,DAT_200008c3,auStack_48);
          FUN_08016eba(uVar4 & 0xff,DAT_200008c1,DAT_200008c2,DAT_200008c3,auStack_34);
        }
      }
    }
    if (DAT_2000069c == (DAT_2000069c / 5) * 5) {
      FUN_08016e4a(auStack_34,auStack_48);
    }
  }
  return;
}



/* ENTRY 0x08019ec0 : FUN_08019ec0 */

void FUN_08019ec0(void)

{
  FUN_080238d4();
  FUN_08023764(&DAT_0803d000);
  FUN_08023800(&DAT_0803d000,0x55aaaa55);
  FUN_080237b8();
  DAT_20000934 = 1;
  return;
}



/* ENTRY 0x08019ee0 : FUN_08019ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019ee0(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_080238d4();
    FUN_08023764(&DAT_0803d000);
    FUN_080237b8();
  }
  return;
}



/* ENTRY 0x08019efa : FUN_08019efa */

void FUN_08019efa(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_080230d6(&DAT_20000956);
  iVar3 = FUN_080230d6(&DAT_2000095d);
  sVar1 = 0;
  uVar5 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    (&DAT_20003ee6)[uVar5 * 0x14] = 0xaa;
    (&DAT_20003ee7)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20003ee8)[uVar5 * 0x14 + iVar4] = (&DAT_20000956)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_20000956)[iVar4] + sVar1;
    }
    (&DAT_20003ee8)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20003ee9)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_2000095d)[iVar4];
      uVar6 = (byte)(&DAT_2000095d)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20003ee9)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_20003ef6)[uVar5 * 0x14] = 0xbb;
    (&DAT_20003ef7)[uVar5 * 0x14] = 0x14;
    (&DAT_20003ef8)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20003ef9)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_20000939)[uVar5] = 0x14;
    DAT_20000937 = (char)uVar5 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return;
}



/* ENTRY 0x0801a018 : FUN_0801a018 */

int FUN_0801a018(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    (&DAT_20003ee6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ee7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ee8)[uVar2 * 0x14 + iVar1] = (&DAT_200031b2)[iVar1];
    }
    (&DAT_20003ef6)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ee9)[uVar2 * 0x14 + iVar1] = (&DAT_200031b2)[iVar1];
    }
    (&DAT_20000939)[uVar2] = 0x14;
    DAT_20000937 = (char)uVar2 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x0801a0b4 : FUN_0801a0b4 */

byte FUN_0801a0b4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_2000093e & 7;
  if (DAT_2000093d == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f36)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
    }
    (&DAT_20000940)[uVar3] = (char)param_2;
    DAT_2000093e = (char)uVar3 + 1U & 7;
    bVar1 = DAT_2000093e;
    if (DAT_2000093e == DAT_2000093f) {
      bVar1 = 1;
      DAT_2000093d = '\x01';
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* ENTRY 0x0801a10c : FUN_0801a10c */

undefined4
FUN_0801a10c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_2000093d == '\0') {
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
    uVar2 = DAT_2000093e & 7;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f36)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000940)[uVar2] = 0x14;
    DAT_2000093e = (char)uVar2 + 1U & 7;
    if (DAT_2000093e == DAT_2000093f) {
      DAT_2000093d = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a20c : FUN_0801a20c */

undefined4
FUN_0801a20c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    (&DAT_20003ee6)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003ee7)[uVar1 * 0x14] = 0x55;
    (&DAT_20003ee8)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20003ee9)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20003eea)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003eeb)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003eec)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003eed)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003eee)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003eef)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003ef0)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003ef1)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003ef2)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003ef3)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003ef4)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003ef5)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003ef6)[uVar1 * 0x14] = param_1;
    (&DAT_20003ef7)[uVar1 * 0x14] = 0x14;
    (&DAT_20003ef8)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003ef9)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000939)[uVar1] = 0x14;
    DAT_20000937 = (char)uVar1 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a3b6 : FUN_0801a3b6 */

undefined4 FUN_0801a3b6(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003ee6)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000939)[uVar2] = 0x14;
    DAT_20000937 = (char)uVar2 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a40e : FUN_0801a40e */

undefined4
FUN_0801a40e(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_2000093e & 7;
  if (DAT_2000093d == '\0') {
    (&DAT_20003f36)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f38)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f39)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f3a)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f3b)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f3c)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f3d)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f3e)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f3f)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f40)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f41)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f42)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f43)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f44)[uVar1 * 0x14] = (char)param_9;
    (&DAT_20003f45)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_20003f46)[uVar1 * 0x14] = param_1;
    (&DAT_20003f47)[uVar1 * 0x14] = param_2;
    (&DAT_20003f48)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f49)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000940)[uVar1] = 0x14;
    DAT_2000093e = (char)uVar1 + 1U & 7;
    if (DAT_2000093e == DAT_2000093f) {
      DAT_2000093d = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a574 : FUN_0801a574 */

undefined4 FUN_0801a574(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000093e & 7;
  if (DAT_2000093d == '\0') {
    (&DAT_20003f36)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f38)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_20003f46)[uVar2 * 0x14] = param_1;
    (&DAT_20003f47)[uVar2 * 0x14] = param_2;
    (&DAT_20003f48)[uVar2 * 0x14] = 0x5a;
    (&DAT_20003f49)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000940)[uVar2] = 0x14;
    DAT_2000093e = (char)uVar2 + 1U & 7;
    if (DAT_2000093e == DAT_2000093f) {
      DAT_2000093d = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a616 : FUN_0801a616 */

undefined4 FUN_0801a616(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_2000093e & 7;
  if (DAT_2000093d == '\0') {
    (&DAT_20003f36)[uVar3 * 0x14] = 0xaa;
    (&DAT_20003f37)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f38)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_20003f46)[uVar3 * 0x14] = param_1;
    (&DAT_20003f47)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_08020814(&DAT_20003f38 + uVar3 * 0x14,0x10);
    (&DAT_20003f48)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20003f49)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000940)[uVar3] = 0x14;
    DAT_2000093e = (char)uVar3 + 1U & 7;
    if (DAT_2000093e == DAT_2000093f) {
      DAT_2000093d = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a6d4 : FUN_0801a6d4 */

undefined4 FUN_0801a6d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000093e & 7;
  if (DAT_2000093d == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f36)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000940)[uVar2] = 0x14;
    DAT_2000093e = (char)uVar2 + 1U & 7;
    if (DAT_2000093e == DAT_2000093f) {
      DAT_2000093d = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a72c : FUN_0801a72c */

undefined4 FUN_0801a72c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000949 & 3;
  if (DAT_20000948 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003fd6)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_2000094b)[uVar2] = 0x14;
    DAT_20000949 = (char)uVar2 + 1U & 3;
    if (DAT_20000949 == DAT_2000094a) {
      DAT_20000948 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a784 : FUN_0801a784 */

undefined4 FUN_0801a784(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000950 & 3;
  if (DAT_2000094f != '\0') {
    return 0;
  }
  for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004026)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
  }
  (&DAT_20000952)[uVar2] = 0x14;
  DAT_20000950 = (char)uVar2 + 1U & 3;
  if (DAT_20000950 == DAT_20000951) {
    DAT_2000094f = '\x01';
  }
  return 0;
}



/* ENTRY 0x0801a822 : FUN_0801a822 */

bool FUN_0801a822(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0801a85e:
      DAT_200031ac = 1;
      DAT_200031f4 = 0;
      DAT_200006ba = !bVar1;
      if (DAT_200006ba) {
        DAT_200030be = DAT_200030be | 0x800;
      }
      else {
        DAT_200030be = DAT_200030be & 0xf7ff;
      }
      return !DAT_200006ba;
    }
    if ((("KSSA09"[uVar2] != '\0') && ("KSSA01"[uVar2] != '\0')) &&
       (((byte)(&DAT_200031b2)[uVar2] < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA09"[uVar2] < (byte)(&DAT_200031b2)[uVar2])))) {
      bVar1 = false;
      goto code_r0x0801a85e;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0801a89c : FUN_0801a89c */

undefined8 FUN_0801a89c(int param_1,int param_2)

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
    iVar7 = (int)DAT_20000626;
  }
  for (uVar6 = 0; uVar6 < 6; uVar6 = uVar6 + 1 & 0xff) {
    if ((&DAT_200031f6)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_0801a8f6;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_2000319e = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_2000319e;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_200031a0 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_200031a0;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_200031a2 = uVar1;
  }
  uVar1 = DAT_200031a2;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_200031a4 = (short)iVar5;
  }
  sVar4 = DAT_200031a4;
  FUN_0800dfae(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0801a20c(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_0800adda();
LAB_0801a8f6:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x0801aa24 : FUN_0801aa24 */

undefined4 FUN_0801aa24(int param_1)

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
  
  if (DAT_20000968 == '\0') {
    uVar6 = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xb) - 0x30;
    local_c = (undefined1  [2])CONCAT11(bVar1,DAT_20000962);
    bVar2 = *(char *)(param_1 + 0xd) - 0x30;
    bVar3 = *(char *)(param_1 + 0xf) - 0x30;
    local_8 = (uint)CONCAT11(bVar3,DAT_20000966);
    uVar7 = (CONCAT12(DAT_20000964,local_c) & 0xff) + (uint)bVar1 + (uint)DAT_20000964 + (uint)bVar2
            + (local_8 & 0xff) + (uint)bVar3;
    bVar4 = (char)uVar7 + (char)(uVar7 / 10) * -10;
    uVar7 = (uint)bVar4 + (uint)bVar1 + (uint)DAT_20000964 + (uint)bVar2 + (uint)DAT_20000966 +
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



/* ENTRY 0x0801ab3a : FUN_0801ab3a */

void FUN_0801ab3a(char *param_1,int param_2)

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
  ushort uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  short local_28;
  short local_24;
  short local_20;
  short local_1c;
  int local_18;
  uint local_14;
  
  bVar13 = param_2 == 0x14;
  do {
    if (!bVar13) {
      local_14 = 0;
      while( true ) {
        if (param_2 <= (int)local_14) {
          return;
        }
        if (0x13 < local_14) break;
        (&DAT_20004076)[local_14] = param_1[local_14];
        local_14 = local_14 + 1 & 0xff;
      }
      return;
    }
    bVar13 = *param_1 == -0x56;
  } while ((!bVar13) || (bVar13 = param_1[1] == 'U', !bVar13));
  if (DAT_20000969 == '\x01') {
    if (param_1[0x10] == -0x65) {
      DAT_20000935 = 1;
      FUN_0800dfae();
      FUN_08019efa();
      FUN_0801a20c(0x46,DAT_20000969,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_0800dfae(1);
        FUN_0801a20c(0x46,DAT_20000969,0,0,0,0,0,0);
        return;
      }
      return;
    }
    bVar13 = true;
    FUN_0800dfae();
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_200031e2)[local_18] != param_1[local_18 + 2]) {
        bVar13 = false;
        break;
      }
    }
    if (bVar13) {
      bVar13 = true;
    }
    else {
      bVar13 = true;
      for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_200031b2)[local_18] != param_1[local_18 + 2]) {
          bVar13 = false;
          break;
        }
      }
      for (local_18 = 0xe; local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_200031b2)[local_18] != param_1[local_18 + 3]) {
          bVar13 = false;
          break;
        }
      }
    }
    if ((((!bVar13) && (param_1[2] == '6')) && (param_1[3] == '3')) &&
       ((param_1[4] == '9' && (param_1[5] == '0')))) {
      bVar13 = true;
    }
    if (bVar13) {
      DAT_20000969 = '\0';
    }
    FUN_0801a20c(0x46,DAT_20000969,0,0,0,0,0,0);
    return;
  }
  uVar11 = (uint)(byte)param_1[0x10];
  if (uVar11 == 0x7a) {
    if ((DAT_2000313d != '\x01') && (param_1[0x11] == '\x10')) {
      return;
    }
    iVar12 = FUN_0800fa42();
    if (iVar12 != 1) {
      return;
    }
    FUN_08020916(param_1);
    return;
  }
  if (uVar11 < 0x7b) {
    uVar11 = uVar11 - 0x3f;
    bVar13 = 0x3a < uVar11;
switchD_0801adbc_default:
    if (bVar13) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801ad34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801ad38 + (uint)*(ushort *)(&DAT_0801ad38 + uVar11 * 2) * 2))();
    return;
  }
  if (uVar11 == 0x93) {
    FUN_0800dfae(1);
    if (DAT_20003132 == '\0') {
      local_14._0_2_ = DAT_20003b7a;
      local_18._0_2_ = DAT_20003b7c;
      local_1c = DAT_20003b7e;
      local_20 = DAT_20003b80;
      local_24 = DAT_20003b82;
      local_28 = DAT_20003b84;
    }
    else {
      local_14._0_2_ = DAT_2000317c;
      local_18._0_2_ = DAT_2000317e;
      local_1c = DAT_20003180;
      local_20 = DAT_20003182;
      local_24 = DAT_20003184;
      local_28 = DAT_20003186;
    }
    FUN_0801a20c(0xad,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                 (int)local_24,(int)local_28);
    return;
  }
  if (0x93 < uVar11) {
    if (uVar11 == 0x9b) {
      FUN_0800dfae(1);
      FUN_08019efa();
      DAT_20000935 = 1;
      return;
    }
    if (0x9b < uVar11) {
      if (uVar11 != 0xe4) {
        if (uVar11 < 0xe5) {
          if ((uVar11 == 0xe1) || (uVar11 == 0xe2)) {
            FUN_08020f18(param_1);
            return;
          }
          bVar13 = uVar11 == 0xe3;
        }
        else {
          if ((uVar11 == 0xe5) || (uVar11 == 0xe6)) {
            FUN_08020ffc(param_1);
            return;
          }
          bVar13 = false;
          if (uVar11 == 0xf9) {
            FUN_08021b68(param_1);
            return;
          }
        }
        if (!bVar13) {
          return;
        }
      }
      FUN_08022e76(param_1);
      return;
    }
    uVar11 = uVar11 - 0x94;
    bVar13 = true;
    switch(uVar11) {
    case 0:
      FUN_0800dfae(1);
      if (DAT_20003132 == '\0') {
        local_14._0_2_ = DAT_20003b86;
        local_18._0_2_ = DAT_20003b88;
        local_1c = DAT_20003b8a;
        local_20 = DAT_20003b8c;
        local_24 = DAT_20003b8e;
        local_28 = DAT_20003b90;
      }
      else {
        local_14._0_2_ = DAT_20003188;
        local_18._0_2_ = DAT_2000318a;
        local_1c = DAT_2000318c;
        local_20 = DAT_2000318e;
        local_24 = DAT_20003190;
        local_28 = DAT_20003192;
      }
      FUN_0801a20c(0xae,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                   (int)local_24,(int)local_28);
      return;
    case 1:
      if (param_1[2] == -1) {
        DAT_20000698 = 0x11;
        return;
      }
      if (param_1[3] == -1) {
        DAT_20000698 = 0x12;
        return;
      }
      if (param_1[4] == -1) {
        DAT_20000698 = 0x13;
        FUN_0800dfae(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_20000698 = 0x14;
      FUN_0800dfae(1);
      return;
    case 2:
      FUN_0800dfae(1);
      FUN_0801a20c(0x4d,(int)(short)DAT_200031fc,0,0,0,0,0,0);
      return;
    case 3:
      FUN_0800dfae(1);
      DAT_200031fc = (ushort)(byte)param_1[2];
      FUN_0801a20c(0x4d,DAT_200031fc,0,0,0,0,0,0);
      DAT_2000313b = 1;
      return;
    case 4:
      FUN_0800dfae(1);
      FUN_0801a20c(0xb5,0,(int)DAT_2000319e,(int)DAT_200031a0,(int)DAT_200031a2,(int)DAT_200031a4,0,
                   0);
      return;
    case 5:
      FUN_0800dfae(1);
      FUN_0801a20c(0xe7,(int)CONCAT11(DAT_200031f7,DAT_200031f6),
                   (int)CONCAT11(DAT_200031f9,DAT_200031f8),(int)CONCAT11(DAT_200031fb,DAT_200031fa)
                   ,0,0,0,0);
      return;
    case 6:
      FUN_0800dfae(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_200031f6)[local_14] = param_1[local_14 + 2];
      }
      FUN_0801a20c(0xe7,(int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),
                   (int)*(short *)(param_1 + 6),0,0,0,0);
      DAT_2000313b = 1;
      return;
    }
    goto switchD_0801adbc_default;
  }
  uVar11 = uVar11 - 0x7c;
  bVar13 = true;
  switch(uVar11) {
  case 0:
    iVar12 = FUN_0800f9e2();
    cVar3 = param_1[2];
    if (diag_AgeModeflg == '\0') {
      if (DAT_2000313d != '\0') {
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (((0x42000 < iVar12) && (cVar3 == '\x01')) && (DAT_20003132 == '\0')) {
          FUN_0800aea4(1);
          FUN_0800dfae(1);
          goto LAB_0801c24a;
        }
      }
      FUN_0800dfae(3);
      cVar3 = '\0';
    }
    else if (cVar3 == '\0') {
      FUN_0800aea4(2);
      FUN_0800dfae(2);
    }
    else if (DAT_2000313d == '\0') {
      FUN_0800dfae(3);
      cVar3 = '\0';
    }
    else {
      FUN_0800aea4(1);
      FUN_0800dfae(1);
    }
LAB_0801c24a:
    FUN_0801a20c(0x48,cVar3,0,0,0,0,0,0);
    break;
  case 1:
    FUN_0801a20c(0x4a,(int)DAT_200031f4,0,0,0,0,0,0);
    FUN_0800dfae(1);
    DAT_2000313b = 1;
    break;
  case 2:
    DAT_200031f2 = (ushort)(byte)param_1[2];
    FUN_0801a20c(0x4c,DAT_200031f2,0,0,0,0,0,0);
    FUN_0800dfae(1);
    DAT_2000313b = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_0800dfae(1);
    FUN_0801a20c(0x4a,(int)DAT_200031f4,0,0,0,0,0,0);
    break;
  case 5:
    FUN_0800dfae(1);
    FUN_0801a20c(0x4c,(int)(short)DAT_200031f2,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_20003132 != '\0') {
      iVar12 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar12 = -diag_VehicleSpeed;
      }
      if (iVar12 < 0xbb9) {
        FUN_0800dfae(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_0801a20c(0xac,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_20003170 = sVar4;
        DAT_20003172 = sVar5;
        DAT_20003174 = sVar6;
        DAT_20003176 = sVar7;
        DAT_20003178 = sVar8;
        DAT_2000317a = sVar9;
        FUN_0800aba0(&DAT_2000316e);
        DAT_2000313b = 1;
        return;
      }
    }
    FUN_0800dfae(2);
    break;
  case 7:
    if (DAT_20003132 != '\0') {
      iVar12 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar12 = -diag_VehicleSpeed;
      }
      if (iVar12 < 0xbb9) {
        FUN_0800dfae(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_0801a20c(0xad,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_2000317c = sVar4;
        DAT_2000317e = sVar5;
        DAT_20003180 = sVar6;
        DAT_20003182 = sVar7;
        DAT_20003184 = sVar8;
        DAT_20003186 = sVar9;
        FUN_0800aba0(&DAT_2000316e);
        DAT_2000313b = 1;
        return;
      }
    }
    FUN_0800dfae(2);
    break;
  case 8:
    if (DAT_20003132 != '\0') {
      iVar12 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar12 = -diag_VehicleSpeed;
      }
      if (iVar12 < 0xbb9) {
        FUN_0800dfae(1);
        sVar4 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_1 + 4);
        sVar6 = *(short *)(param_1 + 6);
        sVar7 = *(short *)(param_1 + 8);
        sVar8 = *(short *)(param_1 + 10);
        sVar9 = *(short *)(param_1 + 0xc);
        FUN_0801a20c(0xae,0,(int)sVar4,(int)sVar5,(int)sVar6,(int)sVar7,(int)sVar8,(int)sVar9);
        DAT_20003188 = sVar4;
        DAT_2000318a = sVar5;
        DAT_2000318c = sVar6;
        DAT_2000318e = sVar7;
        DAT_20003190 = sVar8;
        DAT_20003192 = sVar9;
        FUN_0800aba0(&DAT_2000316e);
        DAT_2000313b = 1;
        return;
      }
    }
    FUN_0800dfae(2);
    break;
  case 9:
    iVar12 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar12 = -diag_VehicleSpeed;
    }
    if (iVar12 < 0xbb9) {
      FUN_0800dfae(1);
      FUN_0801a89c(param_1);
      DAT_2000313b = 1;
    }
    else {
      FUN_0800dfae(2);
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
    iVar12 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar12 = -diag_VehicleSpeed;
    }
    if (iVar12 < 0xbb9) {
      FUN_0800dfae(1);
      if (param_1[2] == '\0') {
        DAT_2000316e = 0xe000;
        FUN_0801a20c(0xa2,1,0,0,0,0,0,0);
      }
      else if (param_1[2] == '\x01') {
        DAT_2000316e = 0xe001;
        FUN_0801a20c(0xa2,1,1,0,0,0,0,0);
      }
      else if (param_1[2] == '\x02') {
        DAT_2000316e = 0xe002;
        FUN_0801a20c(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003b6c = DAT_2000316e;
      if (DAT_20003132 == '\0') {
        FUN_0800aba0(&DAT_20003b6c);
      }
      else {
        FUN_0800aba0(&DAT_2000316e);
      }
      DAT_2000313b = 1;
    }
    else {
      FUN_0800dfae(2);
    }
    break;
  case 0xc:
    DAT_20000935 = 1;
    if (DAT_200031ac == 1) {
      FUN_0800dfae();
    }
    else {
      DAT_20000698 = 3;
    }
    break;
  case 0xd:
    FUN_0800dfae(1);
    if (DAT_2000313d == '\x01') {
      iVar12 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar12 = -diag_VehicleSpeed;
      }
      if (iVar12 < 1000) {
        FUN_0800afbc();
        uVar11 = DAT_e000ed0c;
        DAT_e000ed0c = (uVar11 & 0x700 | 0x5fa0000) + 4;
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    break;
  case 0xe:
    if (param_1[2] == '\0') {
      FUN_0801a20c(0x8a,0,(int)DAT_20003162,0,0,0,0,0);
      FUN_0800dfae(1);
    }
    else if (param_1[2] == '\x01') {
      bVar1 = param_1[4];
      bVar2 = param_1[5];
      if (DAT_2000313d == '\0') {
        FUN_0800dfae(2);
      }
      else {
        FUN_0800dfae(1);
        DAT_20003162 = (ushort)bVar1 + (ushort)bVar2 * 0x100;
        FUN_0800f9f8();
        FUN_0801a20c(0x8a,1,(int)DAT_20003162,0,0,0,0,0);
        DAT_2000313b = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      FUN_0801a20c(0x8a,2,(int)DAT_20003164,0,0,0,0,0);
      FUN_0800dfae(1);
    }
    else if (param_1[2] == '\x03') {
      bVar1 = param_1[4];
      bVar2 = param_1[5];
      if (DAT_2000313d == '\0') {
        FUN_0800dfae(2);
      }
      else {
        FUN_0800dfae(1);
        DAT_20003164 = (ushort)bVar1 + (ushort)bVar2 * 0x100;
        FUN_0800fa18();
        FUN_0801a20c(0x8a,3,(int)DAT_20003164,0,0,0,0,0);
        DAT_2000313b = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      FUN_0801a20c(0x8a,4,DAT_200031fe,0,0,0,0,0);
      FUN_0800dfae(1);
    }
    else if (param_1[2] == '\x05') {
      cVar3 = param_1[4];
      if (DAT_2000313d == '\0') {
        FUN_0800dfae(2);
      }
      else {
        FUN_0800dfae(1);
        DAT_200031fe = cVar3;
        FUN_0800fa3a();
        FUN_0801a20c(0x8a,5,DAT_200031fe,0,0,0,0,0);
        DAT_2000313b = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      FUN_0801a20c(0x8a,6,(int)(short)DAT_200031a8,0,0,0,0,0);
      FUN_0800dfae(1);
    }
    else if (param_1[2] == '\a') {
      uVar11 = (uint)*(ushort *)(param_1 + 4);
      if (DAT_2000313d == '\0') {
        FUN_0800dfae(2);
      }
      else if (uVar11 == ((uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100 ^ 0xffff)) {
        if (param_1[3] == -0x32) {
          if (((int)uVar11 < DAT_200002d4 + -200) || (DAT_200002d4 + 200 < (int)uVar11)) {
            FUN_0801a20c(0x8a,7,(int)(short)DAT_200031a8,0,0,0,0,0);
            FUN_0800dfae(2);
          }
          else {
            DAT_200002d0 = uVar11 - DAT_200002d4;
            DAT_200031a8 = (ushort)DAT_200002d0;
            DAT_200031aa = (ushort)DAT_200002d0 ^ 0xffff;
            FUN_0800dfae(1);
            FUN_0801a20c(0x8a,0xffffce07,(int)(short)DAT_200031a8,0,0,0,0,0);
            DAT_2000313b = 1;
          }
        }
        else if ((param_1[3] == ' ') && (uVar11 == 0)) {
          DAT_200002d0 = 0;
          DAT_200031a8 = 0;
          DAT_200031aa = 0;
          FUN_0800dfae(1);
          FUN_0801a20c(0x8a,0x2007,(int)(short)DAT_200031a8,0,0,0,0,0);
          DAT_2000313b = 1;
        }
      }
      else {
        FUN_0800dfae(2);
      }
    }
    else if (param_1[2] == '\b') {
      FUN_0801a20c(0x8a,8,(int)(short)DAT_2000319c,0,0,0,0,0);
      FUN_0800dfae(1);
    }
    else if (param_1[2] == '\t') {
      uVar10 = (ushort)(byte)param_1[4] + (ushort)(byte)param_1[5] * 0x100;
      if (((DAT_2000313d == '\0') || (100 < uVar10)) || (uVar10 < 0x32)) {
        FUN_0800dfae(2);
      }
      else {
        FUN_0800dfae(1);
        DAT_2000319c = uVar10;
        FUN_08014dee();
        FUN_0801a20c(0x8a,9,(int)(short)DAT_2000319c,0,0,0,0,0);
        DAT_2000313b = 1;
      }
    }
    break;
  case 0x16:
    FUN_0800dfae(1);
    if (DAT_20003132 == '\0') {
      local_14._0_2_ = DAT_20003b6e;
      local_18._0_2_ = DAT_20003b70;
      local_1c = DAT_20003b72;
      local_20 = DAT_20003b74;
      local_24 = DAT_20003b76;
      local_28 = DAT_20003b78;
    }
    else {
      local_14._0_2_ = DAT_20003170;
      local_18._0_2_ = DAT_20003172;
      local_1c = DAT_20003174;
      local_20 = DAT_20003176;
      local_24 = DAT_20003178;
      local_28 = DAT_2000317a;
    }
    FUN_0801a20c(0xac,0,(int)(short)local_14,(int)(short)local_18,(int)local_1c,(int)local_20,
                 (int)local_24,(int)local_28);
    break;
  default:
    goto switchD_0801adbc_default;
  }
  return;
}



/* ENTRY 0x0801c53a : FUN_0801c53a */

uint FUN_0801c53a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
  
  DAT_2000098c = DAT_2000098c + 1;
  if (DAT_20000935 == '\0') {
    if (DAT_2000098e < 0x15) {
      switch(DAT_2000098f) {
      case 0:
        for (uVar4 = 0; uVar4 < DAT_2000098b; uVar4 = uVar4 + 1 & 0xff) {
          (&DAT_2000097c)[uVar4] = (&DAT_20000959)[uVar4];
        }
        DAT_20000974 = DAT_2000098b + 5;
        DAT_2000098f = 3;
        break;
      case 3:
        puVar6 = (undefined1 *)(DAT_2000098c / 0x28);
        if ((uint)DAT_2000098c % 0x28 == 0x14) {
          if (DAT_2000098e < 10) {
            puVar7 = param_4;
            if ((DAT_20004076 == -0x44) && (DAT_2000407a == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_2000098b + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_2000407b)[uVar4];
                if (puVar7 != (undefined *)(uint)(byte)(&DAT_20000978)[uVar4]) {
                  bVar2 = false;
                }
              }
              if (bVar2) {
                puVar6 = &DAT_2000098f;
                DAT_2000098f = 6;
              }
              else {
                DAT_2000098e = 0;
                puVar6 = &DAT_2000098f;
                DAT_2000098f = 5;
              }
            }
            DAT_2000098e = DAT_2000098e + 1;
            FUN_0801a0b4(&DAT_20000985,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
          }
          else {
            DAT_2000098e = 0;
            DAT_2000098f = 4;
          }
        }
        break;
      case 4:
        if ((uint)DAT_2000098c % 0x78 == 0x1e) {
          DAT_2000098e = DAT_2000098e + 1;
          FUN_0801a0b4(s_AT_ULKTE_2000096a,9,DAT_2000098c / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_2000098c / 0x50;
        if ((uint)DAT_2000098c % 0x50 == 0x14) {
          if ((DAT_20004076 == -0x44) && (DAT_2000407a == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_2000098b + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_2000407b)[uVar5];
              puVar7 = &DAT_20000973;
              if (uVar4 != (byte)(&DAT_20000978)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_2000098f = 6;
            }
            else {
              FUN_0801a0b4(&DAT_20000973,DAT_2000098b + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_2000098e = DAT_2000098e + 1;
        }
        else if ((uint)DAT_2000098c % 0x50 == 0x3c) {
          FUN_0801a0b4(&DAT_20000985,6,DAT_2000098c / 0x50,param_4,param_1,param_2,param_3,param_4);
        }
        break;
      case 6:
        DAT_2000098e = DAT_2000098e + 1;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if ((uint)DAT_2000098c == (DAT_2000098c / 0x18) * 0x18) {
      sVar9 = (short)diag_TotalVoltage;
      if (0x3138 < (short)diag_TotalVoltage) {
        sVar9 = 0x3138;
      }
      sVar1 = (short)diag_TotalCurrent;
      if ((diag_BatState == '\x01') && (200 < DAT_20000636)) {
        sVar1 = (short)(-(int)DAT_20000636 / 10);
      }
      sVar3 = (short)(diag_VehicleSpeed / 10);
      if (diag_VehicleSpeed / 10 < 0) {
        sVar3 = -sVar3;
      }
      FUN_0801a10c(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_2000316e);
    }
    if ((uint)DAT_2000098c % 0x18 == 4) {
      sVar9 = (short)(DAT_200030fc / 10);
      if (DAT_200030fc / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0801a10c(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_200030f0,(int)sVar9,
                   (int)(short)((ushort)DAT_200006b0 | (ushort)(byte)DAT_200031ac << 8),
                   (int)CONCAT11(DAT_200006ca,DAT_200006c9),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_2000098c % 0x18 == 8) {
      FUN_0801a10c(0xf5,(int)(short)DAT_200006c0,(int)(short)DAT_200006c4,
                   (int)CONCAT11(DAT_200006be,DAT_200006bf),(int)CONCAT11(DAT_200006ba,DAT_200006bc)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_2000098c % 0x18 == 0xc) {
      FUN_0801a10c(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e0,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003108,(int)(short)(DAT_200030f8 / 0xe10),(int)DAT_20003130);
    }
    if ((uint)DAT_2000098c % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003b5c != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0801a10c(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_2000098c + ((int)(uint)DAT_2000098c >> 2) * -4 == 2) {
      FUN_08021d92();
    }
    uVar4 = (uint)DAT_2000098c % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_08021010();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801c9a4 : FUN_0801c9a4 */

void FUN_0801c9a4(void)

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
  
  FUN_08023be8(0x11,1);
  FUN_08023a92(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_08023950(&DAT_40011000,&local_34);
  FUN_080239fe(&DAT_40011000,0x200);
  FUN_08023ba0(2,1);
  FUN_080235ac(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_2000408c;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_080236e8(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_08023ae8(&local_54);
  FUN_080236d8(&DAT_40020408,2,1);
  FUN_08023598(&DAT_40020408,1);
  FUN_08023be8(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_080246c4(&DAT_40013400,&local_40);
  FUN_08024614(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_080245a2(&DAT_40013400,&local_50);
  FUN_08024606(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_08023f66(&DAT_40013400,&local_64);
  FUN_08023faa(&DAT_40013400,0x80);
  FUN_08023f54(&DAT_40013400,1);
  FUN_08023fe8(&DAT_40013400,0xf,0x100);
  FUN_08023fd8(&DAT_40013400,0x100);
  FUN_08023fc2(&DAT_40013400,1);
  FUN_08023fb0(&DAT_40013400,1);
  return;
}



/* ENTRY 0x0801cb24 : FUN_0801cb24 */

void FUN_0801cb24(void)

{
  int iVar1;
  
  iVar1 = FUN_080236b8(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_20000990 = 0;
    FUN_08023580(0x10000002);
  }
  return;
}



/* ENTRY 0x0801cb42 : FUN_0801cb42 */

void FUN_0801cb42(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_20000990 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_2000408c + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_2000408c + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
             ((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U) * 0x46 +
             (~((int)(uint)*(byte *)(param_2 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff)) & 1U) *
             0x14 | (((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >> (7 - uVar2 & 0xff) & 1U)
                     * 0x46 + (~((int)(uint)*(byte *)(param_3 + iVar3 * 3 + uVar1) >>
                                (7 - uVar2 & 0xff)) & 1U) * 0x14) * 0x10000;
      }
    }
    DAT_20000990 = '\x01';
  }
  return;
}



/* ENTRY 0x0801cccc : thunk_FUN_0801ccde */

void thunk_FUN_0801ccde(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801ccde : FUN_0801ccde */

void FUN_0801ccde(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801cce4 : FUN_0801cce4 */

void FUN_0801cce4(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(0x30,1);
  local_8 = 0x10031000;
  FUN_08023950(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_08023950(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_08023950(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801cd3c : FUN_0801cd3c */

void FUN_0801cd3c(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_08023a8a(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_08023a8a(&DAT_40011000,0x1000);
    }
    else {
      FUN_08023a8e(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_08023a8e(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x0801cd7c : FUN_0801cd7c */

void FUN_0801cd7c(undefined4 param_1)

{
  FUN_08023a8a(&DAT_40011000,0x10);
  FUN_0801cd3c(param_1);
  FUN_08023a8e(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801cd98 : FUN_0801cd98 */

void FUN_0801cd98(uint param_1,undefined4 param_2)

{
  FUN_0801cd7c(0x44);
  FUN_08023a8a(&DAT_40011000,0x10);
  FUN_0801cd3c(param_1 | 0xc0);
  FUN_0801cd3c(param_2);
  FUN_08023a8e(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801cdc4 : FUN_0801cdc4 */

void FUN_0801cdc4(int param_1)

{
  uint uVar1;
  
  FUN_0801cd7c(0x8f);
  FUN_0801cd7c(0x40);
  FUN_08023a8a(&DAT_40011000,0x10);
  FUN_0801cd3c(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801cd3c(*(undefined1 *)(param_1 + uVar1));
    FUN_0801cd3c((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_08023a8e(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801ce08 : FUN_0801ce08 */

void FUN_0801ce08(void)

{
  byte bVar1;
  
  FUN_0801cce4();
  thunk_FUN_0801ccde(10);
  FUN_0801cd7c(0x8f);
  thunk_FUN_0801ccde(1);
  FUN_0801cd7c(0x40);
  thunk_FUN_0801ccde(1);
  FUN_08023a8a(&DAT_40011000,0x10);
  FUN_0801cd3c(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_0801cd3c(0);
  }
  FUN_08023a8e(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801ce60 : FUN_0801ce60 */

void FUN_0801ce60(void)

{
  undefined4 local_8;
  
  local_8 = 0x1000003;
  FUN_08023ae8(&local_8);
  return;
}



/* ENTRY 0x0801ce80 : FUN_0801ce80 */

undefined4 FUN_0801ce80(int param_1)

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



/* ENTRY 0x0801ceba : FUN_0801ceba */

void FUN_0801ceba(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0801ce80(sVar1);
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
    iVar2 = FUN_0801ce80(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_08027a06)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_08027a06)[uVar4];
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



/* ENTRY 0x0801cfbc : FUN_0801cfbc */

longlong FUN_0801cfbc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_08023d74();
  if ((uint)DAT_20000992 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_20004990 = (undefined1)(uVar1 / 0xe10);
    DAT_20004991 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_20004992 = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_20000992 = (ushort)(uVar1 / 0x15180);
    FUN_0801ceba(&local_20,uVar1);
    DAT_20004990 = (undefined1)local_20;
    DAT_20004991 = local_20._1_1_;
    DAT_20004992 = local_20._2_1_;
    DAT_20004994 = (undefined2)local_1c;
    DAT_20004996 = local_1c._2_1_;
    DAT_20004997 = local_1c._3_1_;
    DAT_20004998 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0801d05c : FUN_0801d05c */

int FUN_0801d05c(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0801ce80(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0801ce80(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801d0f8 : FUN_0801d0f8 */

undefined4
FUN_0801d0f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801d05c(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_08023bb8(0x18000000,1);
    FUN_08023b80(1);
    FUN_08023dec(uVar1);
    FUN_08023e38();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d152 : FUN_0801d152 */

undefined4 FUN_0801d152(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_08023bb8(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_08023b80(1);
  iVar2 = FUN_08023566(4);
  if (iVar2 == 0x5050) {
    FUN_08023e48();
    FUN_08023e38();
  }
  else {
    FUN_08023554();
    FUN_08023d04(1);
    for (; (iVar2 = FUN_08023cd4(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_08008e00(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_08023d34(0x100);
    FUN_08023d28(1);
    FUN_08023e38();
    FUN_08023e48();
    FUN_08023dac(1);
    FUN_08023e38();
    FUN_08023d54();
    FUN_08023e14(0x7fff);
    FUN_08023e38();
    FUN_0801d0f8(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_08023d64();
    FUN_08023572(4,0x5050);
  }
  FUN_0801cfbc();
  return 0;
}



/* ENTRY 0x0801d206 : FUN_0801d206 */

void FUN_0801d206(void)

{
  int iVar1;
  
  iVar1 = FUN_08023d8c(1);
  if (iVar1 != 0) {
    FUN_0801cfbc();
  }
  iVar1 = FUN_08023d8c(2);
  if (iVar1 != 0) {
    FUN_08023d44(2);
    FUN_0801cfbc();
  }
  FUN_08023d44(5);
  FUN_08023e38();
  return;
}



/* ENTRY 0x0801d232 : FUN_0801d232 */

undefined4 FUN_0801d232(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar2 = FUN_0801ce80(uVar4);
      if (iVar2 == 0) {
        iVar3 = iVar3 + 0x1e13380;
      }
      else {
        iVar3 = iVar3 + 0x1e28500;
      }
    }
    for (uVar4 = 0; uVar4 < (param_2 - 1U & 0xff); uVar4 = uVar4 + 1 & 0xffff) {
      iVar3 = iVar3 + (uint)(byte)(&DAT_08027a06)[uVar4] * 0x15180;
      iVar2 = FUN_0801ce80(param_1);
      if ((iVar2 != 0) && (uVar4 == 1)) {
        iVar3 = iVar3 + 0x15180;
      }
    }
    FUN_08023bb8(0x18000000,1);
    FUN_08023b80(1);
    FUN_08023dc4(iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6);
    FUN_08023e38();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d304 : FUN_0801d304 */

uint FUN_0801d304(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 % 100 & 0xff;
  if (0x13 < (param_1 / 100 & 0xffU)) {
    uVar1 = uVar1 + 100 & 0xff;
  }
  uVar2 = (uint)(byte)(&DAT_080279f9)[param_2] + (uVar1 + ((int)uVar1 >> 2)) % 7 + param_3 & 0xffff;
  if ((uVar1 == ((int)uVar1 >> 2) * 4) && (param_2 < 3)) {
    uVar2 = uVar2 - 1 & 0xffff;
  }
  return uVar2 % 7;
}



/* ENTRY 0x0801d37c : FUN_0801d37c */

undefined1 FUN_0801d37c(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_08023e72(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_08023e84(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_08023e72(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_08023e80(&DAT_40003c00);
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



/* ENTRY 0x0801d3ca : FUN_0801d3ca */

void FUN_0801d3ca(void)

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
  
  FUN_08023be8(8,1);
  FUN_08023bb8(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_08023950(&DAT_40010c00,&local_8);
  FUN_08023a8e(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_08023e88(&DAT_40003c00,&local_1c);
  FUN_08023e60(&DAT_40003c00,1);
  FUN_0801d37c(0xff);
  return;
}



/* ENTRY 0x0801d450 : FUN_0801d450 */

void FUN_0801d450(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_08023e60(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0801d47c : FUN_0801d47c */

uint FUN_0801d47c(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801d37c(0x90);
  FUN_0801d37c(0);
  FUN_0801d37c(0);
  FUN_0801d37c(0);
  iVar1 = FUN_0801d37c(0xff);
  uVar2 = FUN_0801d37c(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x0801d4bc : FUN_0801d4bc */

void FUN_0801d4bc(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023be8(8,1);
  local_8 = 0x10038000;
  FUN_08023950(&DAT_40010800,&local_8);
  FUN_08023a8e(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_08023950(&DAT_40011000,&local_8);
  FUN_08023a8e(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0801d3ca();
  FUN_0801d450(0);
  DAT_20000994 = FUN_0801d47c();
  return;
}



/* ENTRY 0x0801d528 : FUN_0801d528 */

undefined4 FUN_0801d528(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0801d37c(5);
  uVar1 = FUN_0801d37c(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x0801d54c : FUN_0801d54c */

void FUN_0801d54c(undefined4 param_1)

{
  DAT_422101bc = 0;
  FUN_0801d37c(1);
  FUN_0801d37c(param_1);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d56c : FUN_0801d56c */

void FUN_0801d56c(void)

{
  DAT_422101bc = 0;
  FUN_0801d37c(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d584 : FUN_0801d584 */

void FUN_0801d584(void)

{
  DAT_422101bc = 0;
  FUN_0801d37c(4);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d59c : FUN_0801d59c */

void FUN_0801d59c(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801d37c(3);
  FUN_0801d37c((param_2 & 0xffffff) >> 0x10);
  FUN_0801d37c((param_2 & 0xffff) >> 8);
  FUN_0801d37c(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801d37c(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d5e6 : FUN_0801d5e6 */

undefined4 FUN_0801d5e6(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0801d37c(3);
  FUN_0801d37c((param_1 & 0xffffff) >> 0x10);
  FUN_0801d37c((param_1 & 0xffff) >> 8);
  FUN_0801d37c(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801d37c(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x0801d62c : FUN_0801d62c */

void FUN_0801d62c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_0801d56c();
  DAT_422101bc = 0;
  FUN_0801d37c(2);
  FUN_0801d37c((param_2 & 0xffffff) >> 0x10);
  FUN_0801d37c((param_2 & 0xffff) >> 8);
  FUN_0801d37c(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0801d37c(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d678 : FUN_0801d678 */

uint FUN_0801d678(void)

{
  uint uVar1;
  
  uVar1 = FUN_0801d528();
  return uVar1 & 1;
}



/* ENTRY 0x0801d684 : FUN_0801d684 */

int FUN_0801d684(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_0801d62c(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x0801d6a4 : FUN_0801d6a4 */

uint FUN_0801d6a4(undefined4 param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = 0x100 - *param_2;
  if ((int)(uint)*param_3 <= (int)uVar1) {
    uVar1 = (uint)*param_3;
  }
  FUN_0801d62c(param_1,*(undefined4 *)param_2,uVar1);
  *(uint *)param_2 = *(int *)param_2 + uVar1;
  *param_3 = *param_3 - (short)uVar1;
  return uVar1;
}



/* ENTRY 0x0801d6d8 : FUN_0801d6d8 */

void FUN_0801d6d8(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_0801d56c();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d37c(0x20);
    FUN_0801d37c((param_2 << 0xc & 0xffffffU) >> 0x10);
    FUN_0801d37c((param_2 << 0xc & 0xffffU) >> 8);
    FUN_0801d37c(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d716 : FUN_0801d716 */

void FUN_0801d716(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_0801d56c();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d37c(0xd8);
    FUN_0801d37c(param_2);
    FUN_0801d37c(0);
    FUN_0801d37c(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d754 : FUN_0801d754 */

void FUN_0801d754(int param_1)

{
  if (param_1 == 0) {
    FUN_0801d56c();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d37c(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d778 : FUN_0801d778 */

void FUN_0801d778(void)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_0801d528();
  } while ((uVar1 & 1) != 0);
  return;
}



/* ENTRY 0x0801d78a : FUN_0801d78a */

void FUN_0801d78a(void)

{
  DAT_422101bc = 0;
  FUN_0801d37c(0xb9);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801d7a8 : FUN_0801d7a8 */

void FUN_0801d7a8(void)

{
  DAT_422101bc = 0;
  FUN_0801d37c(0xab);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801d812 : FUN_0801d812 */

void FUN_0801d812(uint param_1,char *param_2)

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



/* ENTRY 0x0801d854 : FUN_0801d854 */

undefined4 FUN_0801d854(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049ad)[uVar1 + param_1 * 0x1c0] = (&DAT_08027a18)[uVar1];
  }
  local_14 = param_4;
  FUN_0801d812(param_2,&DAT_200049b4 + param_1 * 0x1c0);
  (&DAT_200049b9)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049b8)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049b7)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049b6)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049ad)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801d812((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_200049ba)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049bb)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0801d812(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_200049bc)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049bd)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_200049be)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x0801d94e : FUN_0801d94e */

undefined4 FUN_0801d94e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049ad)[uVar1 + param_1 * 0x1c0] = (&DAT_08027a18)[uVar1];
  }
  local_1c = param_4;
  FUN_0801d812(param_2,&DAT_200049b0 + param_1 * 0x1c0);
  FUN_0801d812(param_3,&DAT_200049b4 + param_1 * 0x1c0);
  (&DAT_200049b6)[param_1 * 0x1c0] = 0x45;
  (&DAT_200049b8)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049b7)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049b9)[param_1 * 0x1c0] = 0x32;
  FUN_0801d812(param_4,&local_1c);
  (&DAT_200049ba)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049bb)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049ad)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801d812((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_200049bc)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049bd)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0801d812(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_200049be)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049bf)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_200049c0)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x0801da92 : FUN_0801da92 */

uint FUN_0801da92(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x0801dac6 : FUN_0801dac6 */

undefined4
FUN_0801dac6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0801da92(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049ad)[uVar2 + param_1 * 0x1c0] = (&DAT_08027a18)[uVar2];
  }
  FUN_0801d812(param_2,&DAT_200049b0 + param_1 * 0x1c0);
  FUN_0801d812(param_3,&DAT_200049b4 + param_1 * 0x1c0);
  FUN_0801d812((int)uVar1 >> 8,&local_24);
  (&DAT_200049b6)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049b7)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d812(uVar1 & 0xff,&local_24);
  (&DAT_200049b8)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049b9)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d812(param_4,&local_24);
  (&DAT_200049ba)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049bb)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d812(param_5,&local_24);
  (&DAT_200049bc)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049bd)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049ad)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0801d812((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_200049be)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049bf)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801d812(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_200049c0)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049c1)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_200049c2)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x0801dc6e : FUN_0801dc6e */

int FUN_0801dc6e(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0801da92((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049ad)[uVar2 + param_1 * 0x1c0] = (&DAT_08027a18)[uVar2];
  }
  FUN_0801d812(param_2,&DAT_200049b0 + param_1 * 0x1c0);
  FUN_0801d812(param_3,&DAT_200049b4 + param_1 * 0x1c0);
  FUN_0801d812((int)uVar1 >> 8,&local_28);
  (&DAT_200049b6)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049b7)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0801d812(uVar1 & 0xff,&local_28);
  (&DAT_200049b8)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049b9)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049ad)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801d812(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_200049ba)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_200049bb)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0801d812((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_200049ba)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049bb)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0801d812(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_200049bc)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049bd)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_200049be)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x0801de38 : FUN_0801de38 */

uint FUN_0801de38(int param_1,int param_2)

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



/* ENTRY 0x0801deaa : FUN_0801deaa */

undefined2
FUN_0801deaa(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0801de38(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_0801de38(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801ded6 : FUN_0801ded6 */

undefined4 FUN_0801ded6(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801deaa(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801deaa(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x0801df86 : FUN_0801df86 */

undefined4 FUN_0801df86(char *param_1)

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



/* ENTRY 0x0801dfcc : FUN_0801dfcc */

void FUN_0801dfcc(undefined4 param_1)

{
  FUN_0801d94e(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x0801dfde : FUN_0801dfde */

undefined4 FUN_0801dfde(int param_1)

{
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 0xb0;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x0801e022 : FUN_0801e022 */

undefined4 FUN_0801e022(int param_1)

{
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 0xbb;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x0801e066 : FUN_0801e066 */

undefined4 FUN_0801e066(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_2000499f)[param_1 * 0x1c0] == '\0') && ((&DAT_200049a3)[param_1 * 0x1c0] == '\0')) {
    (&DAT_2000499f)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801e09c : FUN_0801e09c */

void FUN_0801e09c(void)

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
  DAT_20000998 = DAT_20000998 + 1;
  uVar8 = DAT_20000998 & 1;
  uVar9 = DAT_20000998 & 1;
  uVar3 = DAT_20000998 & 1;
  uVar4 = DAT_20000998 & 1;
  uVar5 = DAT_20000998 & 1;
  uVar7 = DAT_20000998 & 1;
  if ((DAT_200049a3 == '\0') && (DAT_2000499f == '\0')) {
    DAT_2000310f = DAT_2000310f & 0xef;
  }
  else {
    DAT_2000310f = DAT_2000310f | 0x10;
  }
  if ((DAT_20004b63 == '\0') && (DAT_20004b5f == '\0')) {
    DAT_2000310f = DAT_2000310f & 0xdf;
  }
  else {
    DAT_2000310f = DAT_2000310f | 0x20;
  }
  if (DAT_2000099c != 0) {
    DAT_2000099c = DAT_2000099c + -1;
  }
  if (DAT_2000099c == 0) {
    DAT_2000310f = DAT_2000310f & 0xbf;
  }
  else {
    DAT_2000310f = DAT_2000310f | 0x40;
  }
  if ((DAT_2000499e < 0x15) && (DAT_20004b5e < 0x15)) {
    DAT_200030be = DAT_200030be & 0xfbff;
    DAT_2000310f = DAT_2000310f & 0x7f;
  }
  else {
    DAT_200030be = DAT_200030be | 0x400;
    DAT_2000310f = DAT_2000310f | 0x80;
  }
  DAT_20003111 = 0x32 < DAT_200049a4;
  if (0x32 < DAT_20004b64) {
    DAT_20003111 = DAT_20003111 | 2;
  }
  if (((((DAT_20004b2f == 0) && ((DAT_20004b30 & 0x7f) == 0 || (int)(DAT_20004b30 & 0x7f) < 0)) &&
       (DAT_20004b33 == 0)) &&
      ((DAT_20004cef == 0 && ((DAT_20004cf0 & 0x7f) == 0 || (int)(DAT_20004cf0 & 0x7f) < 0)))) &&
     (DAT_20004cf3 == 0)) {
    DAT_20003112 = '\0';
    DAT_2000310f = DAT_2000310f & 0xfe;
  }
  else {
    DAT_20003112 = '\x01';
    DAT_2000310f = DAT_2000310f | 1;
  }
  if ((((DAT_20004b3c & 0x3f) == 0 || (int)(DAT_20004b3c & 0x3f) < 0) && (DAT_20004b3d == 0)) &&
     (((DAT_20004cfc & 0x3f) == 0 || (int)(DAT_20004cfc & 0x3f) < 0 &&
      ((DAT_20004cfd == 0 && (DAT_20003112 == '\0')))))) {
    DAT_200030be = DAT_200030be & 0xfdff;
  }
  else {
    DAT_200030be = DAT_200030be | 0x200;
  }
  if (((((DAT_20004b30 & 1) == 0) && ((DAT_20004cf0 & 1) == 0)) && ((DAT_20004b33 & 1) == 0)) &&
     ((DAT_20004cf3 & 1) == 0)) {
    if ((DAT_20003113 != 0) && (DAT_20003113 < 10)) {
      DAT_20003113 = DAT_20003113 - 1;
    }
  }
  else if (DAT_20003113 < 0x14) {
    DAT_20003113 = DAT_20003113 + 1;
  }
  if (((DAT_20004b2f & 1) == 0) && ((DAT_20004cef & 1) == 0)) {
    if ((DAT_20003114 != 0) && (DAT_20003114 < 10)) {
      DAT_20003114 = DAT_20003114 - 1;
    }
  }
  else if (DAT_20003114 < 0x14) {
    DAT_20003114 = DAT_20003114 + 1;
  }
  DAT_20003120 = DAT_20003120 | DAT_20004b2f;
  DAT_20003121 = DAT_20003121 | DAT_20004b30;
  DAT_20003124 = DAT_20004b33 | DAT_20003124;
  DAT_20003125 = DAT_20003125 | DAT_20004cef;
  DAT_20003126 = DAT_20003126 | DAT_20004cf0;
  DAT_20003129 = DAT_20003129 | DAT_20004cf3;
  DAT_2000312a = DAT_2000312a | DAT_20004b3c & 0x3f;
  DAT_2000312b = DAT_2000312b | DAT_20004b3d;
  DAT_2000312c = DAT_2000312c | DAT_20004cfc & 0x3f;
  DAT_2000312d = DAT_2000312d | DAT_20004cfd;
  if (DAT_200009a0 != 0) {
    if (2 < DAT_200009a0) {
      return;
    }
    uVar10 = FUN_0801d94e(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_20004b58 = DAT_20004b58 + 1;
      FUN_08013c40(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d18 = DAT_20004d18 + 1;
      FUN_08013f98(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
    }
    DAT_200009a0 = DAT_200009a0 + 1;
    return;
  }
  if ((&DAT_2000499f)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_200049a3)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_08020552(uVar7);
      if (iVar6 == 0) {
        (&DAT_200049a3)[uVar7 * 0x1c0] = (&DAT_200049a3)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_200009a4 & 3) != 2) {
        DAT_200009a4 = DAT_200009a4 + 1;
        return;
      }
      uVar8 = (uint)(DAT_200049a8 * 100) / ((uint)DAT_200009a8 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004b68 * 100) / ((uint)DAT_200009a8 * 0xc) & 0xff;
      DAT_200009a4 = DAT_200009a4 + 1;
      FUN_080208b2(uVar8,uVar9);
      DAT_20003110 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_200049a0)[uVar7 * 0x1c0] != -0x50) || ((&DAT_200049a1)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_2000499f)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_2000499f)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_0801dfcc(uVar7);
      }
      else {
        (&DAT_200049a0)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_200049a1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801dfde(uVar7);
      }
      if (uVar9 == 0) {
        DAT_20004b58 = DAT_20004b58 + 1;
        FUN_08013c40(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004d18 = DAT_20004d18 + 1;
        FUN_08013f98(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_2000499f)[uVar7 * 0x1c0] = (&DAT_2000499f)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_2000499f)[uVar7 * 0x1c0] = 0;
    (&DAT_200049a3)[uVar7 * 0x1c0] = 0x32;
    (&DAT_200049a8)[uVar7 * 0x70] = 0;
    (&DAT_200049a5)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_2000499d)[uVar7 * 0x1c0] == '\0') {
    (&DAT_2000499e)[uVar7 * 0x1c0] = 0;
    (&DAT_200049a4)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_2000499e)[uVar7 * 0x1c0] < 4) {
      (&DAT_2000499e)[uVar7 * 0x1c0] = (&DAT_2000499e)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_2000499e)[uVar7 * 0x1c0] < 200) {
      (&DAT_2000499e)[uVar7 * 0x1c0] = (&DAT_2000499e)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_20000998 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_2000499e)[uVar7 * 0x1c0]) {
      if ((DAT_20000998 & 0x3f) >> 1 == 0) {
        if ((&DAT_200049a4)[uVar7 * 0x1c0] != '\0') {
          (&DAT_200049a4)[uVar7 * 0x1c0] = (&DAT_200049a4)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_200049a0)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_200049a1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801e022(uVar7);
        if (uVar3 == 0) {
          DAT_20004b58 = DAT_20004b58 + 1;
          FUN_08013c40(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004d18 = DAT_20004d18 + 1;
        FUN_08013f98(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_200049a0)[uVar7 * 0x1c0] == -0x45) && ((&DAT_200049a1)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_200049a4)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_20004b3e)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049ac)[uVar7 * 0x1c0] = (&DAT_200049ac)[uVar7 * 0x1c0] + '\x01';
    (&DAT_200049ac)[uVar7 * 0x1c0] = (&DAT_200049ac)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_200049ac)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_2000499d)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_0801d854(uVar7,0xc1,&DAT_2000499c,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_2000499d)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_0801d854(uVar7,0xc2,&DAT_2000499c,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_2000499d)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_0801d94e(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_2000499d)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_2000313d == '\x01') || (iVar6 = FUN_0800fa42(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_0801dac6(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_20004b58 = DAT_20004b58 + 1;
      FUN_08013c40(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d18 = DAT_20004d18 + 1;
      FUN_08013f98(&DAT_200049ad + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_20004b3e)[uVar7 * 0x1c0];
    (&DAT_20004b3e)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_0801dc6e(uVar7,0,uVar2,(&DAT_20004a9d)[uVar7 * 0x1c0],&DAT_20004a85 + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_2000499d)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_20004b58 = DAT_20004b58 + 1;
        FUN_08013c40(&DAT_200049ad + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004d18 = DAT_20004d18 + 1;
        FUN_08013f98(&DAT_200049ad + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x0801e982 : FUN_0801e982 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801e982(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *extraout_r2;
  undefined1 *puVar5;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 uVar6;
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
  iVar3 = FUN_0801ded6(local_20,param_1);
  if (iVar3 == 0) {
    DAT_2000499d = 1;
    iVar3 = FUN_0801df86(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_200049a1 = *(undefined1 *)(local_c + 2);
        DAT_200049a2 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_0802075a(0,local_30,local_2c);
      }
      else {
        DAT_200049a1 = *(undefined1 *)(local_c + 2);
        DAT_200049a2 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004b5a = DAT_20004b5a + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801de38(local_30,local_2c);
  uVar4 = (uint)DAT_2000499d;
  if (uVar4 == 0xc1) {
    if (local_20[0] == 0x28) {
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801de38(local_34,local_30);
        (&DAT_20004a6d)[local_2c] = uVar1;
      }
      DAT_2000499d = 0;
      return local_2c;
    }
    return 0;
  }
  if (0xc1 < uVar4) {
    uVar4 = uVar4 - 0xc2;
    bVar7 = true;
    switch(uVar4) {
    case 0:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801de38(local_34,local_30);
        (&DAT_20004b3f)[local_2c] = uVar1;
      }
      break;
    case 1:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_2000499d;
        FUN_08020eb4(0,local_2c,1);
      }
      else {
        local_2c = (uint)DAT_2000499d;
        FUN_08020eb4(0,local_2c);
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto LAB_0801e9f4;
    case 0xe:
switchD_0801eace_caseD_e:
      local_28 = local_28 + 1 & 0xffff;
switchD_0801eaaa_caseD_4:
      local_28 = ((local_28 + 1 & 0xffff) + 1 & 0xffff) + 1 & 0xffff;
LAB_0801efea:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) && (local_1c == 0)) {
        local_2c = local_28 & 0xff;
        FUN_080227d6(0,local_2c,1);
        DAT_2000499d = 0;
        return local_2c;
      }
      local_2c = local_28 & 0xff;
      FUN_080227d6(0,local_2c);
      DAT_2000499d = 0;
      return local_2c;
    case 0xf:
      goto switchD_0801eace_caseD_f;
    case 0x10:
      goto switchD_0801eace_caseD_10;
    case 0x11:
      goto switchD_0801eace_caseD_11;
    case 0x12:
      goto switchD_0801eace_caseD_12;
    case 0x13:
      goto switchD_0801eace_caseD_13;
    case 0x14:
      goto switchD_0801eace_caseD_14;
    case 0x15:
      goto switchD_0801eace_caseD_15;
    case 0x16:
      goto switchD_0801eace_caseD_16;
    case 0x17:
      goto switchD_0801eace_caseD_17;
    case 0x18:
      goto switchD_0801eace_caseD_18;
    case 0x19:
      goto switchD_0801eace_caseD_19;
    case 0x1a:
      goto switchD_0801eace_caseD_1a;
    case 0x1b:
      goto switchD_0801eace_caseD_1b;
    case 0x1c:
      goto switchD_0801eace_caseD_1c;
    case 0x1d:
      goto switchD_0801eace_caseD_1d;
    case 0x1e:
      goto switchD_0801eace_caseD_1e;
    case 0x1f:
      goto switchD_0801eace_caseD_1f;
    case 0x20:
      goto switchD_0801eace_caseD_20;
    case 0x21:
      goto switchD_0801eace_caseD_21;
    case 0x24:
      local_28 = local_28 + 1 & 0xffff;
    case 0x22:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801eace_caseD_20;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
    case 0x23:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801eace_caseD_21;
    default:
      goto switchD_0801eaaa_default;
    }
    DAT_2000499d = 0;
    return local_2c;
  }
  if (uVar4 != 0xaf) {
    if (uVar4 < 0xb0) {
      if (uVar4 == 0xa7) goto code_r0x0801f2ea;
      if (uVar4 < 0xa8) {
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801de38(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_00;
            }
            FUN_08022cc0(0,DAT_2000499d,auStack_4c);
            DAT_2000499d = 0;
            return local_2c;
          }
          FUN_08022c5e(0,DAT_2000499d);
          DAT_2000499d = 0;
          return local_2c;
        }
        if (uVar4 < 0xa2) {
          if (uVar4 == 0x42) {
            if (local_20[0] == 0xba) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801de38(local_40,local_3c);
              DAT_20004a9f = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_c + local_3c * 4 + 0x13;
                uVar2 = FUN_0801deaa();
                (&DAT_20004aa0)[local_3c] = uVar2;
              }
              local_3c = (uint)*(byte *)(local_c + 0x8c);
              local_40 = (uint)*(byte *)(local_c + 0x8b);
              local_38 = FUN_0801de38(local_40,local_3c);
              DAT_20004ae0 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_3c * 4 + 0x8d + local_c;
                uVar2 = FUN_0801deaa();
                (&DAT_20004ae2)[local_3c] = uVar2;
              }
              DAT_20004af6 = FUN_0801deaa(local_c + 0xad);
              DAT_20004af8 = FUN_0801deaa(local_c + 0xb1);
              DAT_20004afa = FUN_0801deaa(local_c + 0xb5);
              local_3c = (uint)*(byte *)(local_c + 0xba);
              local_40 = (uint)*(byte *)(local_c + 0xb9);
              DAT_20004afc = FUN_0801de38(local_40,local_3c);
              DAT_20004afe = FUN_0801deaa(local_c + 0xbb);
              DAT_20004b00 = FUN_0801deaa(local_c + 0xbf);
              DAT_20004b02 = FUN_0801deaa(local_c + 0xc3);
              DAT_2000499d = 0;
              return local_2c;
            }
            return 0;
          }
          if (uVar4 == 0x44) {
            if (local_20[0] == 0x76) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801de38(local_40,local_3c);
              DAT_20004b04 = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004b06)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x50);
              local_40 = (uint)*(byte *)(local_c + 0x4f);
              local_38 = FUN_0801de38(local_40,local_3c);
              DAT_20004b05 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004b24)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x62);
              local_40 = (uint)*(byte *)(local_c + 0x61);
              DAT_20004b2c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 100);
              local_40 = (uint)*(byte *)(local_c + 99);
              DAT_20004b2d = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x66);
              local_40 = (uint)*(byte *)(local_c + 0x65);
              DAT_20004b2e = FUN_0801de38(local_40,local_3c);
              for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004b2f)[local_3c] = uVar1;
              }
              DAT_20004b36 = FUN_0801deaa(local_c + 0x71);
              local_3c = (uint)*(byte *)(local_c + 0x76);
              local_40 = (uint)*(byte *)(local_c + 0x75);
              DAT_20004b3c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x78);
              local_40 = (uint)*(byte *)(local_c + 0x77);
              DAT_20004b3d = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7a);
              local_40 = (uint)*(byte *)(local_c + 0x79);
              DAT_20004b34 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7c);
              local_40 = (uint)*(byte *)(local_c + 0x7b);
              DAT_20004b3a = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7e);
              local_40 = (uint)*(byte *)(local_c + 0x7d);
              DAT_20004b3b = FUN_0801de38(local_40,local_3c);
              DAT_20004b38 = FUN_0801deaa(local_c + 0x7f);
              DAT_2000499d = 0;
              return local_2c;
            }
            return 0;
          }
          bVar7 = uVar4 == 0xa0;
        }
        else {
          if (uVar4 == 0xa4) goto LAB_0801efea;
          bVar7 = false;
          if (uVar4 == 0xa6) {
            if (local_10 != 0x25) {
              DAT_2000499d = 0;
              return local_2c;
            }
            if (local_14 != 0xf) {
              DAT_2000499d = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_2000499d = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_2000499d = 0;
              return local_2c;
            }
            if (local_20[0] != 0xc) {
              DAT_2000499d = 0;
              return local_2c;
            }
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801de38(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_03;
            }
            FUN_08020cb8(0,DAT_2000499d,auStack_4c);
            DAT_2000499d = 0;
            return local_2c;
          }
        }
        if (!bVar7) {
          DAT_2000499d = 0;
          return local_2c;
        }
        goto LAB_0801f0ba;
      }
      uVar4 = uVar4 - 0xa8;
      bVar7 = 6 < uVar4;
switchD_0801eaaa_default:
      if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x0801ea92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801ea96 + (uint)*(ushort *)(&DAT_0801ea96 + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801e9f4:
      DAT_2000499d = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xb1;
    bVar7 = true;
    switch(uVar4) {
    case 0:
    case 9:
    case 0xb:
      if (local_10 != 0x25) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_20[0] != 0xc) {
        DAT_2000499d = 0;
        return local_2c;
      }
      local_1c = 0;
      puVar5 = extraout_r2;
      uVar6 = extraout_r3;
      for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
        uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
        uVar1 = FUN_0801de38(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,uVar1)
        ;
        puVar5 = auStack_4c;
        puVar5[local_50] = uVar1;
        uVar6 = extraout_r3_01;
      }
      FUN_08022cc0(0,DAT_2000499d,auStack_4c);
      DAT_2000499d = 0;
      return local_2c;
    case 1:
    case 2:
    case 6:
    case 8:
    case 10:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_2000499d;
        FUN_08022c5e(0,local_2c,1);
        DAT_2000499d = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_2000499d;
      FUN_08022c5e(0,local_2c);
      DAT_2000499d = 0;
      return local_2c;
    case 3:
      goto LAB_0801e9f4;
    case 4:
      goto switchD_0801eaaa_caseD_4;
    case 5:
      goto switchD_0801eaaa_caseD_5;
    case 7:
      if (local_10 != 0x25) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_2000499d = 0;
        return local_2c;
      }
      if (local_20[0] != 2) {
        DAT_2000499d = 0;
        return local_2c;
      }
      local_1c = 0;
      bVar7 = false;
      puVar5 = extraout_r2;
      uVar6 = extraout_r3;
      while (!bVar7) {
        auStack_4c[0] =
             FUN_0801de38(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar5,uVar6
                          ,*(undefined1 *)(local_c + 0xd));
        puVar5 = auStack_4c;
        uVar6 = extraout_r3_02;
        bVar7 = true;
      }
      FUN_08022cc0(0,DAT_2000499d,auStack_4c);
      DAT_2000499d = 0;
      return local_2c;
    case 0xc:
code_r0x0801f2ea:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_2000499d;
        FUN_08020d24(0,local_2c,1);
        DAT_2000499d = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_2000499d;
      FUN_08020d24(0,local_2c);
      DAT_2000499d = 0;
      return local_2c;
    default:
      goto switchD_0801eaaa_default;
    }
  }
  goto LAB_0801f0b0;
switchD_0801eace_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1f;
switchD_0801eace_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1e;
switchD_0801eace_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1d;
switchD_0801eace_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1c;
switchD_0801eace_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1b;
switchD_0801eace_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_1a;
switchD_0801eace_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_19;
switchD_0801eace_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_18;
switchD_0801eace_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_17;
switchD_0801eace_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_16;
switchD_0801eace_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_15;
switchD_0801eace_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_14;
switchD_0801eace_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_13;
switchD_0801eace_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_12;
switchD_0801eace_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_11;
switchD_0801eace_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_10;
switchD_0801eace_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_f;
switchD_0801eace_caseD_10:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801eace_caseD_e;
switchD_0801eace_caseD_f:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801eaaa_caseD_5:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0b0:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f0ba:
  local_2c = (uint)(byte)(&DAT_20006081)[local_28 * 0x11];
  if (local_10 != 0x25) {
    DAT_2000499d = 0;
    return local_2c;
  }
  if (local_14 != 0xf) {
    DAT_2000499d = 0;
    return local_2c;
  }
  if (local_18 != 0x46) {
    DAT_2000499d = 0;
    return local_2c;
  }
  if (local_1c != 0) {
    DAT_2000499d = 0;
    return local_2c;
  }
  if ((uint)local_20[0] != local_2c * 2) {
    DAT_2000499d = 0;
    return local_2c;
  }
  local_1c = 0;
  for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
    local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
    local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
    uVar1 = FUN_0801de38(local_48,local_44);
    *(undefined1 *)((int)&local_3c + local_40) = uVar1;
  }
  local_40 = local_28 & 0xff;
  FUN_08022870(0,local_40,&local_3c);
  DAT_2000499d = 0;
  return local_2c;
}



/* ENTRY 0x0801f3e6 : FUN_0801f3e6 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801f3e6(int param_1,undefined4 param_2)

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
  iVar3 = FUN_0801ded6(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004b5d = 1;
    iVar3 = FUN_0801df86(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004b61 = *(undefined1 *)(local_c + 2);
        DAT_20004b62 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_0802075a(1,local_30,local_2c);
      }
      else {
        DAT_20004b61 = *(undefined1 *)(local_c + 2);
        DAT_20004b62 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004d1a = DAT_20004d1a + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801de38(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801de38(local_30,local_2c);
  uVar4 = (uint)DAT_20004b5d;
  if (uVar4 == 0xc1) {
    if (local_20[0] == 0x28) {
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801de38(local_34,local_30);
        (&DAT_20004c2d)[local_2c] = uVar1;
      }
      DAT_20004b5d = 0;
      return local_2c;
    }
    return 0;
  }
  if (0xc1 < uVar4) {
    uVar4 = uVar4 - 0xc2;
    bVar5 = true;
    switch(uVar4) {
    case 0:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801de38(local_34,local_30);
        (&DAT_20004cff)[local_2c] = uVar1;
      }
      break;
    case 1:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b5d;
        FUN_08020eb4(1,local_2c);
      }
      else {
        local_2c = (uint)DAT_20004b5d;
        FUN_08020eb4(1,local_2c,0);
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto LAB_0801f466;
    case 0xe:
switchD_0801f54e_caseD_e:
      local_28 = local_28 + 1 & 0xffff;
switchD_0801f52a_caseD_4:
      local_28 = ((local_28 + 1 & 0xffff) + 1 & 0xffff) + 1 & 0xffff;
LAB_0801fa88:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) && (local_1c == 0)) {
        local_2c = local_28 & 0xff;
        FUN_080227d6(1,local_2c);
        DAT_20004b5d = 0;
        return local_2c;
      }
      local_2c = local_28 & 0xff;
      FUN_080227d6(1,local_2c,0);
      DAT_20004b5d = 0;
      return local_2c;
    case 0xf:
      goto switchD_0801f54e_caseD_f;
    case 0x10:
      goto switchD_0801f54e_caseD_10;
    case 0x11:
      goto switchD_0801f54e_caseD_11;
    case 0x12:
      goto switchD_0801f54e_caseD_12;
    case 0x13:
      goto switchD_0801f54e_caseD_13;
    case 0x14:
      goto switchD_0801f54e_caseD_14;
    case 0x15:
      goto switchD_0801f54e_caseD_15;
    case 0x16:
      goto switchD_0801f54e_caseD_16;
    case 0x17:
      goto switchD_0801f54e_caseD_17;
    case 0x18:
      goto switchD_0801f54e_caseD_18;
    case 0x19:
      goto switchD_0801f54e_caseD_19;
    case 0x1a:
      goto switchD_0801f54e_caseD_1a;
    case 0x1b:
      goto switchD_0801f54e_caseD_1b;
    case 0x1c:
      goto switchD_0801f54e_caseD_1c;
    case 0x1d:
      goto switchD_0801f54e_caseD_1d;
    case 0x1e:
      goto switchD_0801f54e_caseD_1e;
    case 0x1f:
      goto switchD_0801f54e_caseD_1f;
    case 0x20:
      goto switchD_0801f54e_caseD_20;
    case 0x21:
      goto switchD_0801f54e_caseD_21;
    case 0x24:
      local_28 = local_28 + 1 & 0xffff;
    case 0x22:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f54e_caseD_20;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
    case 0x23:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f54e_caseD_21;
    default:
      goto switchD_0801f52a_default;
    }
    DAT_20004b5d = 0;
    return local_2c;
  }
  if (uVar4 != 0xaf) {
    if (uVar4 < 0xb0) {
      if (uVar4 == 0xa7) goto code_r0x0801fd98;
      if (uVar4 < 0xa8) {
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
              uVar1 = FUN_0801de38(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                   *(undefined1 *)(local_c + local_6c * 2 + 0xe));
              auStack_68[local_6c] = uVar1;
            }
            FUN_08022cc0(1,DAT_20004b5d,auStack_68);
            DAT_20004b5d = 0;
            return local_2c;
          }
          FUN_08022c5e(1,DAT_20004b5d,0);
          DAT_20004b5d = 0;
          return local_2c;
        }
        if (uVar4 < 0xa2) {
          if (uVar4 == 0x42) {
            if (local_20[0] == 0xba) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801de38(local_40,local_3c);
              DAT_20004c5f = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_c + local_3c * 4 + 0x13;
                uVar2 = FUN_0801deaa();
                (&DAT_20004c60)[local_3c] = uVar2;
              }
              local_3c = (uint)*(byte *)(local_c + 0x8c);
              local_40 = (uint)*(byte *)(local_c + 0x8b);
              local_38 = FUN_0801de38(local_40,local_3c);
              DAT_20004ca0 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_3c * 4 + 0x8d + local_c;
                uVar2 = FUN_0801deaa();
                (&DAT_20004ca2)[local_3c] = uVar2;
              }
              DAT_20004cb6 = FUN_0801deaa(local_c + 0xad);
              DAT_20004cb8 = FUN_0801deaa(local_c + 0xb1);
              DAT_20004cba = FUN_0801deaa(local_c + 0xb5);
              local_3c = (uint)*(byte *)(local_c + 0xba);
              local_40 = (uint)*(byte *)(local_c + 0xb9);
              DAT_20004cbc = FUN_0801de38(local_40,local_3c);
              DAT_20004cbe = FUN_0801deaa(local_c + 0xbb);
              DAT_20004cc0 = FUN_0801deaa(local_c + 0xbf);
              DAT_20004cc2 = FUN_0801deaa(local_c + 0xc3);
              DAT_20004b5d = 0;
              return local_2c;
            }
            return 0;
          }
          if (uVar4 == 0x44) {
            if (local_20[0] == 0x76) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801de38(local_40,local_3c);
              DAT_20004cc4 = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004cc6)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x50);
              local_40 = (uint)*(byte *)(local_c + 0x4f);
              local_38 = FUN_0801de38(local_40,local_3c);
              DAT_20004cc5 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004ce4)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x62);
              local_40 = (uint)*(byte *)(local_c + 0x61);
              DAT_20004cec = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 100);
              local_40 = (uint)*(byte *)(local_c + 99);
              DAT_20004ced = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x66);
              local_40 = (uint)*(byte *)(local_c + 0x65);
              DAT_20004cee = FUN_0801de38(local_40,local_3c);
              for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
                uVar1 = FUN_0801de38(local_44,local_40);
                (&DAT_20004cef)[local_3c] = uVar1;
              }
              DAT_20004cf6 = FUN_0801deaa(local_c + 0x71);
              local_3c = (uint)*(byte *)(local_c + 0x76);
              local_40 = (uint)*(byte *)(local_c + 0x75);
              DAT_20004cfc = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x78);
              local_40 = (uint)*(byte *)(local_c + 0x77);
              DAT_20004cfd = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7a);
              local_40 = (uint)*(byte *)(local_c + 0x79);
              DAT_20004cf4 = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7c);
              local_40 = (uint)*(byte *)(local_c + 0x7b);
              DAT_20004cfa = FUN_0801de38(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7e);
              local_40 = (uint)*(byte *)(local_c + 0x7d);
              DAT_20004cfb = FUN_0801de38(local_40,local_3c);
              DAT_20004cf8 = FUN_0801deaa(local_c + 0x7f);
              DAT_20004b5d = 0;
              return local_2c;
            }
            return 0;
          }
          bVar5 = uVar4 == 0xa0;
        }
        else {
          if (uVar4 == 0xa4) goto LAB_0801fa88;
          bVar5 = false;
          if (uVar4 == 0xa6) {
            if (local_10 != 0x25) {
              DAT_20004b5d = 0;
              return local_2c;
            }
            if (local_14 != 0xf) {
              DAT_20004b5d = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_20004b5d = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_20004b5d = 0;
              return local_2c;
            }
            if (local_20[0] != 0xc) {
              DAT_20004b5d = 0;
              return local_2c;
            }
            local_1c = 0;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
              local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801de38(local_58,local_54);
              auStack_4c[local_50] = uVar1;
            }
            local_50 = (uint)DAT_20004b5d;
            FUN_08020cb8(1,local_50,auStack_4c);
            DAT_20004b5d = 0;
            return local_2c;
          }
        }
        if (!bVar5) {
          DAT_20004b5d = 0;
          return local_2c;
        }
        goto LAB_0801fb4e;
      }
      uVar4 = uVar4 - 0xa8;
      bVar5 = 6 < uVar4;
switchD_0801f52a_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x0801f512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801f516 + (uint)*(ushort *)(&DAT_0801f516 + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801f466:
      DAT_20004b5d = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xb1;
    bVar5 = true;
    switch(uVar4) {
    case 0:
    case 9:
    case 0xb:
      if (local_10 != 0x25) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_20[0] != 0xc) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      local_1c = 0;
      for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
        local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
        local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
        uVar1 = FUN_0801de38(local_58,local_54);
        auStack_4c[local_50] = uVar1;
      }
      local_50 = (uint)DAT_20004b5d;
      FUN_08022cc0(1,local_50,auStack_4c);
      DAT_20004b5d = 0;
      return local_2c;
    case 1:
    case 2:
    case 6:
    case 8:
    case 10:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b5d;
        FUN_08022c5e(1,local_2c);
        DAT_20004b5d = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004b5d;
      FUN_08022c5e(1,local_2c,0);
      DAT_20004b5d = 0;
      return local_2c;
    case 3:
      goto LAB_0801f466;
    case 4:
      goto switchD_0801f52a_caseD_4;
    case 5:
      goto switchD_0801f52a_caseD_5;
    case 7:
      if (local_10 != 0x25) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      if (local_20[0] != 2) {
        DAT_20004b5d = 0;
        return local_2c;
      }
      local_1c = 0;
      for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
        local_54 = (uint)*(byte *)(local_c + 0xe);
        local_58 = (uint)*(byte *)(local_c + 0xd);
        uVar1 = FUN_0801de38(local_58,local_54);
        auStack_4c[local_50] = uVar1;
      }
      local_50 = (uint)DAT_20004b5d;
      FUN_08022cc0(1,local_50,auStack_4c);
      DAT_20004b5d = 0;
      return local_2c;
    case 0xc:
code_r0x0801fd98:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b5d;
        FUN_08020d24(1,local_2c);
        DAT_20004b5d = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004b5d;
      FUN_08020d24(1,local_2c,0);
      DAT_20004b5d = 0;
      return local_2c;
    default:
      goto switchD_0801f52a_default;
    }
  }
  goto LAB_0801fb44;
switchD_0801f54e_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1f;
switchD_0801f54e_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1e;
switchD_0801f54e_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1d;
switchD_0801f54e_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1c;
switchD_0801f54e_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1b;
switchD_0801f54e_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_1a;
switchD_0801f54e_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_19;
switchD_0801f54e_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_18;
switchD_0801f54e_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_17;
switchD_0801f54e_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_16;
switchD_0801f54e_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_15;
switchD_0801f54e_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_14;
switchD_0801f54e_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_13;
switchD_0801f54e_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_12;
switchD_0801f54e_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_11;
switchD_0801f54e_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_10;
switchD_0801f54e_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_f;
switchD_0801f54e_caseD_10:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f54e_caseD_e;
switchD_0801f54e_caseD_f:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801f52a_caseD_5:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801fb44:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801fb4e:
  local_2c = (uint)(byte)(&DAT_20006180)[local_28 * 0x11];
  if (local_10 != 0x25) {
    DAT_20004b5d = 0;
    return local_2c;
  }
  if (local_14 != 0xf) {
    DAT_20004b5d = 0;
    return local_2c;
  }
  if (local_18 != 0x46) {
    DAT_20004b5d = 0;
    return local_2c;
  }
  if (local_1c != 0) {
    DAT_20004b5d = 0;
    return local_2c;
  }
  if ((uint)local_20[0] != local_2c * 2) {
    DAT_20004b5d = 0;
    return local_2c;
  }
  local_1c = 0;
  for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
    local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
    local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
    uVar1 = FUN_0801de38(local_48,local_44);
    *(undefined1 *)((int)&local_3c + local_40) = uVar1;
  }
  local_40 = local_28 & 0xff;
  FUN_08022870(1,local_40,&local_3c);
  DAT_20004b5d = 0;
  return local_2c;
}



/* ENTRY 0x0801fed8 : FUN_0801fed8 */

bool FUN_0801fed8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0801de38(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  uVar2 = FUN_0801de38(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  return (~((uVar1 & 0xf) + ((int)uVar2 >> 4) + (uVar2 & 0xf)) + 1 & 0xf) == (int)uVar1 >> 4;
}



/* ENTRY 0x0801ff26 : FUN_0801ff26 */

bool FUN_0801ff26(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 0;
  uVar4 = FUN_0801de38(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  iVar5 = FUN_0801de38(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  uVar4 = iVar5 + (uVar4 & 0xff) * 0x100 & 0xfff;
  for (uVar6 = 1; uVar6 <= uVar4 + 0xc; uVar6 = uVar6 + 1 & 0xffff) {
    uVar1 = *(byte *)(param_1 + uVar6) + uVar1;
  }
  sVar2 = FUN_0801de38(*(undefined1 *)(param_1 + uVar4 + 0xd),*(undefined1 *)(param_1 + uVar4 + 0xe)
                      );
  sVar3 = FUN_0801de38(*(undefined1 *)(param_1 + uVar4 + 0xf),
                       *(undefined1 *)(param_1 + uVar4 + 0x10));
  return (ushort)(~uVar1 + 1) == (ushort)(sVar3 + sVar2 * 0x100);
}



/* ENTRY 0x0801ffae : FUN_0801ffae */

void FUN_0801ffae(void)

{
  DAT_2000499d = 0;
  DAT_20004b5d = 0;
  FUN_08022754();
  FUN_08013954(0x2580);
  FUN_08013cb4(0x2580);
  return;
}



/* ENTRY 0x0801ffd4 : FUN_0801ffd4 */

uint FUN_0801ffd4(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_2000499e == '\0') && (DAT_20004b5e == '\0')) {
    uVar1 = ((uint)DAT_20004afa * 100) / (uint)DAT_20004afe;
    uVar2 = ((uint)DAT_20004cba * 100) / (uint)DAT_20004cbe;
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



/* ENTRY 0x0802002e : FUN_0802002e */

uint FUN_0802002e(void)

{
  uint uVar1;
  
  if ((DAT_2000499e == '\0') && (DAT_20004b5e == '\0')) {
    uVar1 = ((((uint)DAT_20004afa * 0x32) / (uint)DAT_20004afe +
             ((uint)DAT_20004cba * 0x32) / (uint)DAT_20004cbe) * 7) / 100;
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



/* ENTRY 0x0802008c : FUN_0802008c */

void FUN_0802008c(int param_1)

{
  (&DAT_200049a0)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049a1)[param_1 * 0x1c0] = 0;
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_20004b58 = DAT_20004b58 + 1;
    FUN_08013c40(&DAT_200049ad,5);
  }
  else {
    DAT_20004d18 = DAT_20004d18 + 1;
    FUN_08013f98(&DAT_200049ad + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08020130 : FUN_08020130 */

void FUN_08020130(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)DAT_200009a8 * 3;
  bVar2 = 0;
  (&DAT_200049a0)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049a1)[param_1 * 0x1c0] = 0;
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b0)[param_1 * 0x1c0] = 4;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049b2)[param_1 * 0x1c0] = (char)(uVar1 >> 0xe);
  (&DAT_200049b3)[param_1 * 0x1c0] = (char)(uVar1 >> 6);
  (&DAT_200049b4)[param_1 * 0x1c0] = (char)uVar1 * '\x04';
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049ad)[uVar1 + param_1 * 0x1c0];
  }
  (&DAT_200049b5)[param_1 * 0x1c0] = bVar2;
  if (param_1 == 0) {
    DAT_20004b58 = DAT_20004b58 + 1;
    FUN_08013c40(&DAT_200049ad,9);
  }
  else {
    DAT_20004d18 = DAT_20004d18 + 1;
    FUN_08013f98(&DAT_200049ad + param_1 * 0x1c0,9);
  }
  return;
}



/* ENTRY 0x0802022a : FUN_0802022a */

void FUN_0802022a(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009ac;
  uVar2 = (uint)DAT_200009a8 * 3;
  bVar3 = 0;
  (&DAT_200049a0)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049a1)[param_1 * 0x1c0] = 0;
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b0)[param_1 * 0x1c0] = 6;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049b2)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_200049b3)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_200049b4)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_200049b5)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_200049b6)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_200049ad)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_200049b7)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_20004b58 = DAT_20004b58 + 1;
    FUN_08013c40(&DAT_200049ad,0xb);
  }
  else {
    DAT_20004d18 = DAT_20004d18 + 1;
    FUN_08013f98(&DAT_200049ad + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x08020342 : FUN_08020342 */

void FUN_08020342(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_200009a8 * 0xc - param_2;
  bVar2 = 0;
  if (uVar3 < 0x80) {
    uVar3 = uVar3 + 4 & 0xff;
  }
  else {
    uVar3 = 0x84;
  }
  (&DAT_200049a0)[param_1 * 0x1c0] = 99;
  (&DAT_200049a1)[param_1 * 0x1c0] = 0;
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 99;
  (&DAT_200049b0)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_200049b1)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_200049b2)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_200049b3)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_200049b4)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049ad)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049b5)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_200049b5)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_200049b1)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20004b58 = DAT_20004b58 + 1;
    FUN_08013c40(&DAT_200049ad,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004d18 = DAT_20004d18 + 1;
    FUN_08013f98(&DAT_200049ad + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x080204ae : FUN_080204ae */

void FUN_080204ae(int param_1)

{
  (&DAT_200049a0)[param_1 * 0x1c0] = 100;
  (&DAT_200049a1)[param_1 * 0x1c0] = 0;
  (&DAT_200049ad)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049ae)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049af)[param_1 * 0x1c0] = 100;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_20004b58 = DAT_20004b58 + 1;
    FUN_08013c40(&DAT_200049ad,5);
  }
  else {
    DAT_20004d18 = DAT_20004d18 + 1;
    FUN_08013f98(&DAT_200049ad + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08020552 : FUN_08020552 */

byte FUN_08020552(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_200049a5)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_200049a2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049a1)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_200009a8 * 0xc < (&DAT_200049a8)[param_1 * 0x70] + 0x80) {
        (&DAT_200049a5)[param_1 * 0x1c0] = 100;
        FUN_080204ae(param_1);
        return 1;
      }
      (&DAT_200049a5)[param_1 * 0x1c0] = 99;
      (&DAT_200049a8)[param_1 * 0x70] = (&DAT_200049a8)[param_1 * 0x70] + 0x80;
      FUN_08020342(param_1,(&DAT_200049a8)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_200049a5)[param_1 * 0x1c0] = 0x61;
    FUN_0802008c(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_200049a3)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_200049a5)[param_1 * 0x1c0] = 0x61;
      FUN_0802008c(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_200049a2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049a1)[param_1 * 0x1c0] == 'a')) {
        (&DAT_200049a5)[param_1 * 0x1c0] = 0x62;
        FUN_0802022a(param_1);
        return 1;
      }
      (&DAT_200049a5)[param_1 * 0x1c0] = 0x61;
      FUN_0802008c(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_200049a2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049a1)[param_1 * 0x1c0] == 'c')) {
        (&DAT_200049a5)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_200049a5)[param_1 * 0x1c0] = 0x61;
      FUN_0802008c(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_200049a2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049a1)[param_1 * 0x1c0] == 'b')) {
      (&DAT_200049a5)[param_1 * 0x1c0] = 99;
      (&DAT_200049a8)[param_1 * 0x70] = 0;
      FUN_08020342(param_1,(&DAT_200049a8)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_200049a5)[param_1 * 0x1c0] = 0x61;
      FUN_0802008c(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x0802075a : FUN_0802075a */

void FUN_0802075a(void)

{
  return;
}



/* ENTRY 0x08020768 : FUN_08020768 */

void FUN_08020768(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_080238d4();
  FUN_08023758(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009b0 = FUN_08023764(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_08023758(0x34);
  DAT_200009b0 = FUN_080237c8(&DAT_08029000,param_1);
  DAT_200009b0 = FUN_080237c8(&DAT_08029004,param_2);
  FUN_080237b8();
  return;
}



/* ENTRY 0x080207b6 : FUN_080207b6 */

void FUN_080207b6(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_080238d4();
  FUN_08023758(0x34);
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    DAT_200009b0 = FUN_08023800(param_1 * 0xc + 0x8029008 + uVar1 * 4,
                                *(undefined4 *)(param_2 + uVar1 * 4));
  }
  FUN_08023758(0x34);
  FUN_080237b8();
  return;
}



/* ENTRY 0x080207f8 : FUN_080207f8 */

short FUN_080207f8(byte *param_1,int param_2)

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



/* ENTRY 0x08020814 : FUN_08020814 */

void FUN_08020814(byte *param_1,int param_2)

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



/* ENTRY 0x08020858 : FUN_08020858 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08020858(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009a8 = _DAT_08029000;
  DAT_200009aa = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_08020814(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009ac = FUN_080207f8(0x8029008,(uint)DAT_200009a8 * 0xc);
    if (DAT_200009aa == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x080208b2 : FUN_080208b2 */

void FUN_080208b2(undefined1 param_1,undefined1 param_2)

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
  
  FUN_08023202(&local_24,0x14);
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
  uVar1 = FUN_08020814(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0801a72c(&local_24);
  return;
}



/* ENTRY 0x08020916 : FUN_08020916 */

uint FUN_08020916(int param_1)

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
  uVar2 = FUN_08020814(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if ((local_1a == *(char *)(param_1 + 0x12)) && (local_19 == *(char *)(param_1 + 0x13))) {
    DAT_2000099c = 0x14;
    local_2c[0] = 0xaa;
    local_2c[1] = 0x55;
    uVar3 = (uint)local_1b;
    if (uVar3 == 0x10) {
      DAT_200009aa = CONCAT11(local_2c[2],local_2c[3]);
      DAT_200009a8 = local_1e;
      DAT_200009ae = 0;
      local_1c = 0x7a;
      local_1b = 0x10;
      FUN_08020768(local_1e,DAT_200009aa);
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 < 0x11) {
      if (((uVar3 != 0) && (uVar3 == 1)) && (uVar3 = FUN_08020858(), uVar3 == 1)) {
        FUN_0801e066(0);
        uVar3 = FUN_0801e066(1);
      }
    }
    else if (uVar3 == 0x11) {
      if (DAT_200009ae == local_1e) {
        uVar3 = (uint)DAT_200009ae;
        FUN_080207b6(DAT_200009ae,local_2c + 2);
        DAT_200009ae = DAT_200009ae + 1;
        DAT_20003110 = (undefined1)((uVar3 * 0x32) / (uint)DAT_200009a8);
      }
      else if (DAT_200009ae == 0) {
        local_1e = 0;
      }
      else {
        local_1e = CONCAT11((char)(DAT_200009ae - 1 >> 8),(char)DAT_200009ae + -1);
      }
      local_1c = 0x7a;
      local_1b = 0x11;
      uVar3 = 1;
      bVar1 = true;
    }
    else if (uVar3 == 0x12) {
      uVar4 = FUN_08020814(0x8029008,(uint)DAT_200009a8 * 0xc);
      DAT_200009ac = FUN_080207f8(0x8029008,(uint)DAT_200009a8 * 0xc);
      uVar3 = (uint)DAT_200009aa;
      if ((uVar3 == uVar4) && (uVar3 = (uint)DAT_200009a8, 1000 < uVar3)) {
        local_2c[2] = (undefined1)(uVar4 >> 8);
        local_2c[3] = (undefined1)uVar4;
        local_1e = DAT_200009a8;
        local_1c = 0x7a;
        local_1b = 0x12;
        bVar1 = true;
        FUN_0801e066(0);
        uVar3 = FUN_0801e066(1);
      }
    }
    if (bVar1) {
      uVar2 = FUN_08020814(local_2c + 2,0x10);
      local_1a = (char)((ushort)uVar2 >> 8);
      local_19 = (char)uVar2;
      uVar3 = FUN_0801a3b6(local_2c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08020b4c : FUN_08020b4c */

int FUN_08020b4c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    (&DAT_20003ee6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ee7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ee8)[uVar2 * 0x14 + iVar1] = (&DAT_20004b3f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003ef6)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ee9)[uVar2 * 0x14 + iVar1] = (&DAT_20004b3f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000939)[uVar2] = 0x14;
    DAT_20000937 = (char)uVar2 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08020c04 : FUN_08020c04 */

int FUN_08020c04(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_20000937 & 3;
  if (DAT_20000936 == '\0') {
    (&DAT_20003ee6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ee7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ee8)[uVar2 * 0x14 + iVar1] = (&DAT_20004a6d)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003ef6)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ee9)[uVar2 * 0x14 + iVar1] = (&DAT_20004a6d)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000939)[uVar2] = 0x14;
    DAT_20000937 = (char)uVar2 + 1U & 3;
    if (DAT_20000937 == DAT_20000938) {
      DAT_20000936 = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08020cb8 : FUN_08020cb8 */

void FUN_08020cb8(byte param_1,int param_2,int param_3)

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
  
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  if (param_2 == 0xa6) {
    for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
      auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    local_18 = (param_1 & 1) + 0x76;
    local_17 = 0xa6;
    uVar1 = FUN_08020814(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801a784(&local_28);
  }
  return;
}



/* ENTRY 0x08020d24 : FUN_08020d24 */

void FUN_08020d24(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) + 0x76;
  local_17 = param_2;
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  return;
}



/* ENTRY 0x08020d84 : FUN_08020d84 */

void FUN_08020d84(int param_1)

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
  uVar2 = FUN_08020814(local_2c + 2,0x10);
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
    if (((bVar1) && ((&DAT_20004b57)[uVar3 * 0x1c0] != '\0')) &&
       ((&DAT_20004b3e)[uVar3 * 0x1c0] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20004a85)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
      }
      (&DAT_20004a9d)[uVar3 * 0x1c0] = (char)uVar5;
      (&DAT_20004b3e)[uVar3 * 0x1c0] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x08020eb4 : FUN_08020eb4 */

void FUN_08020eb4(byte param_1,undefined4 param_2,undefined1 param_3)

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
  
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1f;
  local_17 = 0xc3;
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  return;
}



/* ENTRY 0x08020f18 : FUN_08020f18 */

void FUN_08020f18(int param_1)

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
    FUN_08020b4c(uVar3);
  }
  else if (((&DAT_20004b57)[uVar3 * 0x1c0] != '\0') && ((&DAT_20004b3e)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a85)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a93)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a96)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004a9d)[uVar3 * 0x1c0] = 0x14;
    (&DAT_20004b3e)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x08020ffc : FUN_08020ffc */

void FUN_08020ffc(int param_1)

{
  FUN_08020c04(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x08021010 : FUN_08021010 */

void FUN_08021010(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009b1) {
  case '\0':
    local_10 = (int)DAT_20004aac;
    local_14 = (uint)DAT_20004b02;
    local_8 = (uint)DAT_20004af6;
    local_c = (uint)DAT_20004af8;
    FUN_0801a40e(0xf1,0,local_c,local_8,(int)DAT_20004afa,(int)DAT_20004afe,(int)DAT_20004b00);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004aee;
    local_14 = (uint)DAT_20004aec;
    local_8 = (uint)DAT_20004ae4;
    local_c = (uint)DAT_20004ae2;
    FUN_0801a40e(0xf1,1,local_c,local_8,(int)DAT_20004ae6,(int)DAT_20004ae8,(int)DAT_20004aea);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004aac;
    local_14 = (uint)DAT_20004aaa;
    local_8 = (uint)DAT_20004aa2;
    local_c = (uint)DAT_20004aa0;
    FUN_0801a40e(0xf1,2,local_c,local_8,(int)DAT_20004aa4,(int)DAT_20004aa6,(int)DAT_20004aa8);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004aba;
    local_14 = (uint)DAT_20004ab8;
    local_8 = (uint)DAT_20004ab0;
    local_c = (uint)DAT_20004aae;
    FUN_0801a40e(0xf1,3,local_c,local_8,(int)DAT_20004ab2,(int)DAT_20004ab4,(int)DAT_20004ab6);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004ac8;
    local_14 = (uint)DAT_20004ac6;
    local_8 = (uint)DAT_20004abe;
    local_c = (uint)DAT_20004abc;
    FUN_0801a40e(0xf1,4,local_c,local_8,(int)DAT_20004ac0,(int)DAT_20004ac2,(int)DAT_20004ac4);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_20004ad6;
    local_14 = (uint)DAT_20004ad4;
    local_8 = (uint)DAT_20004acc;
    local_c = (uint)DAT_20004aca;
    FUN_0801a40e(0xf1,5,local_c,local_8,(int)DAT_20004ace,(int)DAT_20004ad0,(int)DAT_20004ad2);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004ada;
    local_c = (uint)DAT_20004ad8;
    FUN_0801a40e(0xf1,6,local_c,local_8,0,0,(int)DAT_20004af0);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004c6c;
    local_14 = (uint)DAT_20004cc2;
    local_8 = (uint)DAT_20004cb6;
    local_c = (uint)DAT_20004cb8;
    FUN_0801a40e(0xf2,0,local_c,local_8,(int)DAT_20004cba,(int)DAT_20004cbe,(int)DAT_20004cc0);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004cae;
    local_14 = (uint)DAT_20004cac;
    local_8 = (uint)DAT_20004ca4;
    local_c = (uint)DAT_20004ca2;
    FUN_0801a40e(0xf2,1,local_c,local_8,(int)DAT_20004ca6,(int)DAT_20004ca8,(int)DAT_20004caa);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004c6c;
    local_14 = (uint)DAT_20004c6a;
    local_8 = (uint)DAT_20004c62;
    local_c = (uint)DAT_20004c60;
    FUN_0801a40e(0xf2,2,local_c,local_8,(int)DAT_20004c64,(int)DAT_20004c66,(int)DAT_20004c68);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004c7a;
    local_14 = (uint)DAT_20004c78;
    local_8 = (uint)DAT_20004c70;
    local_c = (uint)DAT_20004c6e;
    FUN_0801a40e(0xf2,3,local_c,local_8,(int)DAT_20004c72,(int)DAT_20004c74,(int)DAT_20004c76);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004c88;
    local_14 = (uint)DAT_20004c86;
    local_8 = (uint)DAT_20004c7e;
    local_c = (uint)DAT_20004c7c;
    FUN_0801a40e(0xf2,4,local_c,local_8,(int)DAT_20004c80,(int)DAT_20004c82,(int)DAT_20004c84);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004c96;
    local_14 = (uint)DAT_20004c94;
    local_8 = (uint)DAT_20004c8c;
    local_c = (uint)DAT_20004c8a;
    FUN_0801a40e(0xf2,5,local_c,local_8,(int)DAT_20004c8e,(int)DAT_20004c90,(int)DAT_20004c92);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004c9a;
    local_c = (uint)DAT_20004c98;
    FUN_0801a40e(0xf2,6,local_c,local_8,0,0,(int)DAT_20004cb0);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x0e':
    FUN_0801a574(0xf3,0,&DAT_20004b06);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x0f':
    FUN_0801a574(0xf3,1,&DAT_20004b14);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_20004b23,DAT_20004b22);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004b30,DAT_20004b2f);
    local_10._0_3_ = CONCAT12(DAT_20004b31,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b32,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004b33;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004b36,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004b36 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004b38);
    FUN_0801a574(0xf3,2,&local_14);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_20004b25,DAT_20004b24);
    local_14._0_3_ = CONCAT12(DAT_20004b26,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004b27,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004b29,DAT_20004b28);
    local_10._0_3_ = CONCAT12(DAT_20004b2a,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b2b,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004b2e,CONCAT11(DAT_20004b2c,DAT_20004b2d)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004b3d,DAT_20004b3c);
    FUN_0801a574(0xf3,3,&local_14);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x12':
    FUN_0801a574(0xf4,0,&DAT_20004cc6);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x13':
    FUN_0801a574(0xf4,1,&DAT_20004cd4);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004ce3,DAT_20004ce2);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004cf0,DAT_20004cef);
    local_10._0_3_ = CONCAT12(DAT_20004cf1,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004cf2,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004cf3;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004cf6,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004cf6 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004cf8);
    FUN_0801a574(0xf4,2,&local_14);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004ce5,DAT_20004ce4);
    local_14._0_3_ = CONCAT12(DAT_20004ce6,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004ce7,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004ce9,DAT_20004ce8);
    local_10._0_3_ = CONCAT12(DAT_20004cea,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004ceb,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004cee,CONCAT11(DAT_20004cec,DAT_20004ced)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004cfd,DAT_20004cfc);
    FUN_0801a574(0xf4,3,&local_14);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200049a4;
    local_c = (uint)DAT_2000499e;
    FUN_0801a40e(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009b1 = DAT_200009b1 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004b64;
    local_c = (uint)DAT_20004b5e;
    FUN_0801a40e(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009b1 = '\0';
  }
  return;
}



/* ENTRY 0x080218a0 : FUN_080218a0 */

void FUN_080218a0(void)

{
  uint uVar1;
  
  DAT_20005de7 = 0xff;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004d24)[uVar1 * 0x40] = 0xff;
  }
  return;
}



/* ENTRY 0x080218be : FUN_080218be */

void FUN_080218be(undefined1 param_1)

{
  DAT_20005e1b = param_1;
  return;
}



/* ENTRY 0x080218c6 : FUN_080218c6 */

void FUN_080218c6(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0800ab80();
    DAT_20005d5c = 0x1451090;
    DAT_20005d64 = (undefined1)param_1;
    DAT_20005d60 = FUN_08023d74();
    DAT_20005d65 = diag_cartstep;
    DAT_20005d66 = (undefined1)((uint)uVar1 >> 8);
    DAT_20005d67 = (undefined1)uVar1;
    DAT_20005d69 = diag_allwarnbit;
    DAT_20005d68 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005d6e = (undefined2)diag_TotalVoltage;
    DAT_20005d70 = (undefined2)diag_TotalCurrent;
    DAT_20005d72 = (undefined2)(diag_VehicleSpeed / 100);
    DAT_20005d74 = (undefined2)diag_VectorVol;
    DAT_20005d76 = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0800f9e2();
    DAT_20005d78 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800f9ea();
    DAT_20005d7a = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800f9f2();
    DAT_20005d7c = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005d7d = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005d80 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005d7e = 0x82;
      }
      else {
        DAT_20005d7e = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005d7e = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005d7f = 0x82;
      }
      else {
        DAT_20005d7f = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005d7f = 0x7f;
    }
    DAT_20005d81 = 0;
    if (diag_hall_err < 0x100) {
      DAT_20005d82 = (undefined1)diag_hall_err;
    }
    else {
      DAT_20005d82 = 0xff;
    }
  }
  return;
}



/* ENTRY 0x08021a1c : FUN_08021a1c */

undefined4 FUN_08021a1c(undefined4 param_1)

{
  FUN_080218c6(param_1);
  FUN_08023114(&DAT_20005d1c,&DAT_20005d5c,0x40);
  return 1;
}



/* ENTRY 0x08021a38 : FUN_08021a38 */

bool FUN_08021a38(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08023114(&DAT_20005d1c,(uint)DAT_200009b4 * 0x40 + 0x20004d1c,0x40);
    }
    (&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] < 0xfe)) {
      FUN_08023114(&DAT_20005d1c,(uint)DAT_200009b4 * 0x40 + 0x20004d1c,0x40);
      bVar1 = true;
    }
    (&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d24)[(uint)DAT_200009b4 * 0x40] < 0xfe)) {
      FUN_08023114(&DAT_20005d1c,(uint)DAT_200009b4 * 0x40 + 0x20004d1c,0x40);
      bVar1 = true;
    }
    FUN_080218c6(param_1);
    FUN_08023114((uint)DAT_200009b4 * 0x40 + 0x20004d1c,&DAT_20005d5c,0x40);
  }
  DAT_200009b4 = DAT_200009b4 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x08021b22 : FUN_08021b22 */

void FUN_08021b22(void)

{
  FUN_0801d59c(&DAT_20005e20,(((uint)(ushort)DAT_20005e15 - (uint)DAT_20005e1e) - 1 & 0x7fff) << 6,
               0x40);
  FUN_0801a574(0xf9,0x80,&DAT_20005e24);
  FUN_0801a574(0xf9,0x81,&DAT_20005e32);
  FUN_0801a574(0xf9,0x82,&DAT_20005e40);
  return;
}



/* ENTRY 0x08021b68 : FUN_08021b68 */

void FUN_08021b68(int param_1)

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
  uVar2 = FUN_08020814(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x60) {
      DAT_20005e19 = 0x60;
    }
    else {
      if (bVar1 < 0x61) {
        if (bVar1 == 1) {
          if ((char)local_22 == '\x01') {
            FUN_0801d0f8(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                         local_1a);
            return;
          }
          local_22 = CONCAT13((char)((ushort)DAT_20004994 >> 8),
                              CONCAT12((char)DAT_20004994,(short)local_22)) & 0xffffff00;
          local_1e = CONCAT11(DAT_20004997,DAT_20004996);
          local_1c = DAT_20004990;
          local_1b = DAT_20004991;
          local_1a = DAT_20004992;
          uVar2 = FUN_08020814(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a3b6(local_24);
          return;
        }
        if (bVar1 == 0x10) {
          FUN_0801d0f8(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a
                      );
          DAT_200009b6 = 0xa5;
          return;
        }
        bVar4 = bVar1 == 0x23;
      }
      else {
        if (bVar1 == 0x61) {
          DAT_20005e19 = 0x61;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xa1) {
          local_22 = DAT_2000311c;
          local_1e = CONCAT11(DAT_20003121,DAT_20003120);
          local_1c = DAT_20003124;
          local_1b = DAT_2000312a;
          local_1a = DAT_2000312b;
          local_19 = DAT_20003125;
          local_18 = DAT_20003126;
          local_17 = DAT_20003129;
          local_16 = DAT_2000312c;
          local_15 = DAT_2000312d;
          uVar2 = FUN_08020814(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a3b6(local_24);
          return;
        }
      }
      if (bVar4) {
        if ((uint)local_1e <= (uint)local_22._2_2_) {
          DAT_20005e05 = (uint)local_22._2_2_;
          DAT_20005e0d = (uint)local_1e;
        }
        DAT_20005e19 = 0x23;
      }
    }
  }
  return;
}



/* ENTRY 0x08021d92 : FUN_08021d92 */

void FUN_08021d92(void)

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
  
  if (DAT_20005e1a == '#') {
    local_1a = (undefined1)DAT_20005df5;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20005df5 >> 8);
    local_18 = (undefined1)DAT_20005e05;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20005e05 >> 8);
    local_16 = (undefined1)DAT_20005e0d;
    local_15 = (undefined1)(DAT_20005e0d >> 8);
    local_14 = (undefined1)DAT_20005e09;
    local_13 = (undefined1)((uint)DAT_20005e09 >> 8);
    local_12 = (undefined1)((uint)DAT_20005e09 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20005e09 >> 0x18);
    local_10 = (undefined1)DAT_20005e11;
    local_f = (undefined1)((uint)DAT_20005e11 >> 8);
    local_e = (undefined1)((uint)DAT_20005e11 >> 0x10);
    local_d = (undefined1)((uint)DAT_20005e11 >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_08020814(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0801a616(0xf9,0x23,&local_1a);
    DAT_20005e1a = '\0';
  }
  else if (DAT_20005e1a == 'a') {
    if (DAT_20005e0d < DAT_20005e1e) {
      FUN_08021b22();
      DAT_20005e1e = DAT_20005e1e - 1;
    }
    else {
      FUN_08021b22();
      DAT_20005e1a = '\0';
    }
  }
  return;
}



/* ENTRY 0x08021eb4 : FUN_08021eb4 */

undefined4 FUN_08021eb4(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_0801d5e6(uVar3 << 6);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0801d5e6(*param_2 << 6);
    if (iVar1 == -1) {
      iVar1 = FUN_0801d5e6(*param_1 << 6);
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



/* ENTRY 0x08021f14 : FUN_08021f14 */

void FUN_08021f14(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009bc = DAT_200009bc + 1;
  if ((DAT_20005d9d != '\0') && (DAT_20005d9d = FUN_0801d678(), DAT_20005d9d != '\0')) {
    return;
  }
  if (DAT_20005d9c == 0x22) {
LAB_080226c6:
    if (DAT_20005da3 == 0) {
      DAT_20005d9c = 0;
    }
    else {
      DAT_20005d9d = '\x01';
      DAT_20005d9f = (uint)DAT_20005da5 << 0x10;
      FUN_0801d716(1,DAT_20005da5);
      DAT_20005da5 = DAT_20005da5 + 1;
      DAT_20005da3 = DAT_20005da3 + -1;
      DAT_20005d9c = 0x25;
    }
  }
  else {
    if (DAT_20005d9c < 0x23) {
      if (DAT_20005d9c == 0) {
        if (DAT_20005de7 == 0) {
          if (DAT_20005e19 == 0x60) {
            DAT_20005e1a = 0;
            DAT_20005e19 = 0;
          }
          else if (DAT_20005e19 == 0x61) {
            if (DAT_20005df1 != 0) {
              DAT_20005e1a = 0x61;
            }
            DAT_20005e19 = 0;
          }
          if (DAT_20005e1a != 0) {
            return;
          }
          if (DAT_20005e1b == 0xef) {
            iVar1 = FUN_08021a1c(0xef);
            if (iVar1 != 0) {
              DAT_20005de7 = 0x30;
            }
            DAT_20005e1b = 0;
          }
          else if ((DAT_20005e1b & 0xf0) == 0xe0) {
            iVar1 = FUN_08021a38(DAT_20005e1b);
            if (iVar1 != 0) {
              DAT_20005de7 = 0x30;
            }
            DAT_20005e1b = 0;
            DAT_20005e1c = 'J';
          }
          else if (DAT_20005e1c == '\0') {
            if (DAT_20005e1b == 0xf0) {
              iVar1 = FUN_08021a38(0xf0);
              if (iVar1 != 0) {
                DAT_20005de7 = 0x30;
              }
              DAT_20005e1b = 0;
              DAT_20005e1d = 'J';
            }
            else if (DAT_20005e1d == '\0') {
              if (DAT_20005e1b == 0) {
                if (DAT_20005e19 == 0x23) {
                  DAT_20005de7 = DAT_20005e19;
                }
                else if (DAT_200009b6 == -0x5b) {
                  DAT_20005de7 = 0x10;
                  DAT_200009b6 = '\0';
                }
                else if ((DAT_200009bc % 0x15 == 0x11) && (iVar1 = FUN_08021a38(0), iVar1 != 0)) {
                  DAT_20005de7 = 0x30;
                }
              }
              else {
                iVar1 = FUN_08021a38(DAT_20005e1b);
                if (iVar1 != 0) {
                  DAT_20005de7 = 0x30;
                }
                DAT_20005e1b = 0;
              }
            }
            else {
              iVar1 = FUN_08021a38(0xfe);
              if (iVar1 != 0) {
                DAT_20005de7 = 0x30;
              }
              DAT_20005e1d = DAT_20005e1d + -1;
            }
          }
          else {
            iVar1 = FUN_08021a38(0xff);
            if (iVar1 != 0) {
              DAT_20005de7 = 0x30;
            }
            DAT_20005e1c = DAT_20005e1c + -1;
          }
        }
        if (DAT_20005de7 == 0x22) {
          iVar1 = FUN_08021eb4(&DAT_20005de9);
          if (iVar1 == 1) {
            DAT_20005e15 = DAT_20005de9;
            DAT_20005de7 = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20005e15 = 0;
            DAT_20005d9e = 0x22;
            DAT_20005de7 = 0x23;
          }
          goto code_r0x08022574;
        }
        if (DAT_20005de7 < 0x23) {
          if (DAT_20005de7 == 0x12) {
            DAT_20005da7 = 0x1451090;
            DAT_20005da3 = 4;
            DAT_20005da5 = 0;
            DAT_20005d9f = 0x200000;
            DAT_20005d9e = 3;
            DAT_20005e15 = 0;
            DAT_20005de7 = 0x20;
            goto code_r0x08022574;
          }
          if (0x12 < DAT_20005de7) {
            if (DAT_20005de7 == 0x20) {
              DAT_20005de9 = 0;
              DAT_20005ded = 0x3fff;
              DAT_20005de7 = 0x21;
            }
            else {
              bVar2 = DAT_20005de7 == 0x21;
              if (!bVar2) goto LAB_0802211a;
            }
            iVar1 = FUN_08021eb4(&DAT_20005de9);
            if (iVar1 == 1) {
              DAT_20005e15 = DAT_20005de9;
              DAT_20005de7 = 0x23;
            }
            else if (iVar1 == 2) {
              DAT_20005de9 = 0x4000;
              DAT_20005ded = 0x7fff;
              DAT_20005de7 = 0x22;
            }
            goto code_r0x08022574;
          }
          if (DAT_20005de7 == 0) goto code_r0x08022574;
          if (DAT_20005de7 == 0x10) {
            DAT_20005d9e = 0x22;
            DAT_20005de7 = 0x11;
            goto code_r0x08022574;
          }
          bVar2 = DAT_20005de7 == 0x11;
        }
        else {
          if (DAT_20005de7 == 0x31) {
            FUN_08023114(&DAT_20005da7,&DAT_20005d1c,0x40);
            DAT_20005da3 = 0x40;
            DAT_20005da5 = 0;
            DAT_20005d9f = DAT_20005e15 << 6;
            DAT_20005d9e = 3;
            DAT_20005e15 = DAT_20005e15 + 1 & 0x7fff;
            DAT_20005de7 = 0;
            goto code_r0x08022574;
          }
          if (DAT_20005de7 < 0x32) {
            if (DAT_20005de7 == 0x23) {
              DAT_20005df1 = 0x3ff8;
              DAT_20005df5 = 0x3ff7;
              iVar1 = FUN_0801d5e6(((DAT_20005e15 & 0xffff) - 0x3ff8 & 0x7fff) << 6);
              if ((iVar1 == -1) && (DAT_20005e15 <= DAT_20005df5)) {
                if (DAT_20005e15 == 0) {
                  DAT_20005df5 = 0;
                  DAT_20005df1 = 0;
                }
                else {
                  DAT_20005df5 = DAT_20005e15 - 1;
                  DAT_20005df1 = DAT_20005e15;
                }
              }
              if (DAT_20005df1 == 0) {
                DAT_20005e19 = 0;
                DAT_20005de7 = 0;
              }
              else {
                DAT_20005df9 = FUN_0801d5e6((((DAT_20005e15 & 0xffff) - (DAT_20005df5 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005dfd = 0;
                DAT_20005e01 = FUN_0801d5e6(((DAT_20005e15 & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
                if (DAT_20005e05 == 0) {
                  DAT_20005e05 = 0xfffe;
                }
                if (DAT_20005df5 < DAT_20005e05) {
                  DAT_20005e05 = DAT_20005df5;
                }
                DAT_20005e09 = FUN_0801d5e6((((DAT_20005e15 & 0xffff) - (DAT_20005e05 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                if (DAT_20005e05 < DAT_20005e0d) {
                  DAT_20005e0d = DAT_20005e05;
                }
                DAT_20005e11 = FUN_0801d5e6((((DAT_20005e15 & 0xffff) - (DAT_20005e0d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005e1e = (ushort)DAT_20005e05;
                if (DAT_20005e19 == 0x23) {
                  DAT_20005e1a = DAT_20005e19;
                }
                DAT_20005e19 = 0;
                DAT_20005de7 = 0;
              }
              goto code_r0x08022574;
            }
            bVar2 = false;
            if (DAT_20005de7 == 0x30) {
              if (DAT_20005e15 == 0) {
                iVar1 = FUN_0801d5e6(0);
                if (iVar1 == -1) {
                  FUN_08023114(&DAT_20005da7,&DAT_20005d1c,0x40);
                  DAT_20005da3 = 0x40;
                  DAT_20005da5 = 0;
                  DAT_20005d9f = DAT_20005e15 << 6;
                  DAT_20005d9e = 3;
                  DAT_20005e15 = DAT_20005e15 + 1 & 0x7fff;
                  DAT_20005de7 = 0;
                }
                else {
                  DAT_20005d9e = 0x23;
                  DAT_20005de7 = 0x31;
                }
              }
              else if (DAT_20005e15 == 0x3fff) {
                DAT_20005d9e = 0x24;
                DAT_20005de7 = 0x31;
              }
              else if (DAT_20005e15 == 0x4000) {
                iVar1 = FUN_0801d5e6(0x100000);
                if (iVar1 == -1) {
                  FUN_08023114(&DAT_20005da7,&DAT_20005d1c,0x40);
                  DAT_20005da3 = 0x40;
                  DAT_20005da5 = 0;
                  DAT_20005d9f = DAT_20005e15 << 6;
                  DAT_20005d9e = 3;
                  DAT_20005e15 = DAT_20005e15 + 1 & 0x7fff;
                  DAT_20005de7 = 0;
                }
                else {
                  DAT_20005d9e = 0x24;
                  DAT_20005de7 = 0x31;
                }
              }
              else if (DAT_20005e15 == 0x7fff) {
                DAT_20005d9e = 0x23;
                DAT_20005de7 = 0x31;
              }
              else {
                FUN_08023114(&DAT_20005da7,&DAT_20005d1c,0x40);
                DAT_20005da3 = 0x40;
                DAT_20005da5 = 0;
                DAT_20005d9f = DAT_20005e15 << 6;
                DAT_20005d9e = 3;
                DAT_20005e15 = DAT_20005e15 + 1 & 0x7fff;
                DAT_20005de7 = 0;
              }
              goto code_r0x08022574;
            }
          }
          else {
            if (DAT_20005de7 == 0x60) {
              FUN_0801d59c(&DAT_20005e20,(uint)DAT_20005e1e << 6,0x40);
              DAT_20005de7 = 0;
              goto code_r0x08022574;
            }
            bVar2 = false;
            if (DAT_20005de7 == 0xff) {
              DAT_20005de7 = 0x20;
              goto code_r0x08022574;
            }
          }
        }
LAB_0802211a:
        if (bVar2) {
          DAT_20005da5 = 0x20;
          DAT_20005d9e = 2;
          DAT_20005de7 = 0x12;
        }
code_r0x08022574:
        if (DAT_20005d9e == 0x22) {
          DAT_20005d9d = '\x01';
          DAT_20005da3 = 0x20;
          DAT_20005da5 = 0;
          DAT_20005d9f = 0;
          FUN_0801d716(0,0);
          DAT_20005d9c = 0x22;
        }
        else if (DAT_20005d9e < 0x23) {
          if (DAT_20005d9e == 1) {
            DAT_20005d9d = '\x01';
            FUN_0801d754(0);
            DAT_20005d9c = 1;
          }
          else if (DAT_20005d9e == 2) {
            DAT_20005d9d = '\x01';
            FUN_0801d716(0,DAT_20005da5);
            DAT_20005d9c = 2;
          }
          else if (DAT_20005d9e == 3) {
            DAT_20005d9d = '\x01';
            FUN_0801d684(&DAT_20005da7,DAT_20005d9f);
            DAT_20005d9c = 0;
          }
        }
        else if (DAT_20005d9e == 0x23) {
          DAT_20005d9d = '\x01';
          DAT_20005da3 = 0x10;
          DAT_20005da5 = 0;
          DAT_20005d9f = 0;
          FUN_0801d716(0,0);
          DAT_20005d9c = 0x23;
        }
        else if (DAT_20005d9e == 0x24) {
          DAT_20005d9d = '\x01';
          DAT_20005da3 = 0x10;
          DAT_20005da5 = 0x10;
          DAT_20005d9f = 0x100000;
          FUN_0801d716(0,0x10);
          DAT_20005d9c = 0x24;
        }
        DAT_20005d9e = 0;
        return;
      }
      if (DAT_20005d9c == 1) {
        DAT_20005d9d = 1;
        FUN_0801d754();
        DAT_20005d9c = 0;
        return;
      }
      bVar2 = DAT_20005d9c == 2;
    }
    else {
      if ((DAT_20005d9c == 0x23) || (DAT_20005d9c == 0x24)) goto LAB_080226c6;
      bVar2 = false;
      if (DAT_20005d9c == 0x25) {
        DAT_20005d9d = 1;
        FUN_0801d716(0,DAT_20005da5);
        DAT_20005d9c = 0x24;
        return;
      }
    }
    if (bVar2) {
      DAT_20005d9d = '\x01';
      FUN_0801d716(1,DAT_20005da5);
      DAT_20005d9c = 0;
    }
  }
  return;
}



/* ENTRY 0x08022754 : FUN_08022754 */

void FUN_08022754(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005e60)[uVar1 * 0x11] = (&DAT_08027a3e)[uVar1];
    (&DAT_20005e61)[uVar1 * 0x11] = (&DAT_08027a1f)[uVar1];
    (&DAT_20005f70)[uVar1 * 0x11] = (&DAT_08027a3e)[uVar1];
    (&DAT_20005f71)[uVar1 * 0x11] = (&DAT_08027a1f)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006080)[uVar1 * 0x11] = (&DAT_08027a4e)[uVar1];
    (&DAT_20006081)[uVar1 * 0x11] = (&DAT_08027a2f)[uVar1];
    (&DAT_2000617f)[uVar1 * 0x11] = (&DAT_08027a4e)[uVar1];
    (&DAT_20006180)[uVar1 * 0x11] = (&DAT_08027a2f)[uVar1];
  }
  return;
}



/* ENTRY 0x080227d6 : FUN_080227d6 */

void FUN_080227d6(int param_1,int param_2,int param_3)

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
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x20005e62) = 0;
  }
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e61)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20005e60)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  return;
}



/* ENTRY 0x08022870 : FUN_08022870 */

void FUN_08022870(int param_1,int param_2,int param_3)

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
  
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006081)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x20006083 + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006080)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  (&DAT_20006082)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x08022918 : FUN_08022918 */

void FUN_08022918(int param_1)

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
  uVar1 = FUN_08020814(local_30 + 2,0x10);
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
LAB_08022a9c:
    uVar4 = uVar4 + 4;
LAB_08022ab4:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022aba:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022ac0:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022ac6:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022acc:
    if ((&DAT_20004b57)[uVar5 * 0x1c0] == '\0') {
      return;
    }
    if ((&DAT_20004b3e)[uVar5 * 0x1c0] != '\0') {
      return;
    }
    for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e61)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a85)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004a9d)[uVar5 * 0x1c0] = (&DAT_20005e61)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_20004b3e)[uVar5 * 0x1c0] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x20005e62) = 1;
    return;
  }
  if (uVar2 < 0xd9) {
    if (uVar2 == 0xd0) goto LAB_08022ab4;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_080229bc_default;
    }
    if (uVar2 == 0xae) goto LAB_08022ac0;
    if (uVar2 < 0xaf) {
      if (uVar2 == 1) {
        uVar6 = 1;
        uVar2 = 0;
        do {
          if (5 < uVar2) {
code_r0x080229f6:
            DAT_20004b57 = uVar6;
            DAT_20004d17 = uVar6;
            FUN_08023202(&local_44,0x14);
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
            uVar1 = FUN_08020814(&local_42,0x10);
            local_32 = (undefined1)((ushort)uVar1 >> 8);
            local_31 = (undefined1)uVar1;
            FUN_0801a72c(&local_44);
            return;
          }
          if (local_30[uVar2 + 2] != (&DAT_08027a12)[uVar2]) {
            uVar6 = 0;
            goto code_r0x080229f6;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while( true );
      }
      if (uVar2 == 0xa0) goto LAB_08022bf6;
      if (uVar2 == 0xa4) goto LAB_08022acc;
      bVar7 = uVar2 == 0xa8;
LAB_08022992:
      if (!bVar7) {
        return;
      }
      goto LAB_08022ac6;
    }
    if (uVar2 != 0xaf) {
      if (uVar2 == 0xb5) goto LAB_08022aba;
      bVar7 = uVar2 == 0xb6;
      if (!bVar7) goto LAB_08022992;
      goto LAB_08022bea;
    }
  }
  else {
    uVar3 = uVar2 - 0xd9;
    bVar7 = true;
    switch(uVar2) {
    case 0xd9:
      goto LAB_08022bcc;
    case 0xdb:
      goto LAB_08022bc6;
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
      goto LAB_08022a9c;
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
switchD_080229bc_default:
      if (bVar7) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x080229aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_080229ae + (uint)(byte)(&UNK_080229ae)[uVar3] * 2))();
      return;
    }
    uVar4 = uVar4 + 1;
LAB_08022bc6:
    uVar4 = uVar4 + 1;
LAB_08022bcc:
    uVar4 = uVar4 + 5;
LAB_08022bea:
    uVar4 = uVar4 + 1 & 0xff;
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_08022bf6:
  if (((&DAT_20004b57)[uVar5 * 0x1c0] != '\0') && ((&DAT_20004b3e)[uVar5 * 0x1c0] == '\0')) {
    (&DAT_20004a9d)[uVar5 * 0x1c0] = 0;
    (&DAT_20004b3e)[uVar5 * 0x1c0] = local_1f;
    (&DAT_20006082)[uVar5 * 0xff + uVar4 * 0x11] = 1;
  }
  return;
}



/* ENTRY 0x08022c5e : FUN_08022c5e */

void FUN_08022c5e(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023202(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1d;
  local_17 = param_2;
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  return;
}



/* ENTRY 0x08022cc0 : FUN_08022cc0 */

void FUN_08022cc0(byte param_1,int param_2,undefined1 *param_3)

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
  
  FUN_08023202(&local_28,0x14);
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
    uVar1 = FUN_08020814(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801a784(&local_28);
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
      uVar1 = FUN_08020814(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a784(&local_28);
      for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
        auStack_26[uVar2] = param_3[uVar2 + 0xb];
      }
      local_19 = 2;
      local_18 = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08020814(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a784(&local_28);
      for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
        auStack_26[uVar2] = param_3[uVar2 + 0x18];
      }
      local_19 = 3;
      local_18 = (param_1 & 1) - 0x1d;
      local_17 = 0xa1;
      uVar1 = FUN_08020814(auStack_26,0x10);
      local_16 = (undefined1)((ushort)uVar1 >> 8);
      local_15 = (undefined1)uVar1;
      FUN_0801a784(&local_28);
      return;
    }
    bVar3 = param_2 == 0xb1;
  }
  else if ((param_2 == 0xba) || (bVar3 = false, param_2 == 0xbc)) goto LAB_08022de8;
  if (!bVar3) {
    return;
  }
LAB_08022de8:
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3[uVar2];
  }
  local_18 = (param_1 & 1) - 0x1d;
  uVar1 = FUN_08020814(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a784(&local_28);
  return;
}



/* ENTRY 0x08022e76 : FUN_08022e76 */

void FUN_08022e76(int param_1)

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
  uVar2 = FUN_08020814(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar2 >> 8);
  local_19 = (char)uVar2;
  if (local_1a != *(char *)(param_1 + 0x12)) {
    return;
  }
  if ((char)uVar2 != *(char *)(param_1 + 0x13)) {
    return;
  }
  uVar3 = local_1c - 3 & 1;
  if (local_1b == 0xb8) goto LAB_08022f22;
  if (local_1b < 0xb9) {
    if (local_1b != 0xb2) {
      if (local_1b < 0xb3) {
        if (local_1b != 0xa1) {
          if (local_1b != 0xb1) goto code_r0x08022f34;
          goto LAB_08022f22;
        }
      }
      else if (local_1b != 0xb3) {
        if (local_1b == 0xb7) {
          uVar5 = 1;
          bVar1 = true;
        }
        goto code_r0x08022f34;
      }
      uVar5 = 2;
      bVar1 = true;
      goto code_r0x08022f34;
    }
  }
  else if (local_1b != 0xb9) {
    if (local_1b != 0xba) {
      if (local_1b == 0xbb) goto LAB_08022f14;
      if (local_1b != 0xbc) goto code_r0x08022f34;
    }
LAB_08022f22:
    uVar5 = 0;
    bVar1 = true;
    goto code_r0x08022f34;
  }
LAB_08022f14:
  uVar5 = 6;
  bVar1 = true;
code_r0x08022f34:
  if (((bVar1) && ((&DAT_20004b57)[uVar3 * 0x1c0] != '\0')) &&
     ((&DAT_20004b3e)[uVar3 * 0x1c0] == '\0')) {
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
      (&DAT_20004a85)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
    }
    (&DAT_20004a9d)[uVar3 * 0x1c0] = (char)uVar5;
    (&DAT_20004b3e)[uVar3 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x08022fa0 : FUN_08022fa0 */

undefined8 FUN_08022fa0(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x08022fa8 : FUN_08022fa8 */

undefined8 FUN_08022fa8(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x0802307a : FUN_0802307a */

undefined8 FUN_0802307a(void)

{
  return 0;
}



/* ENTRY 0x0802308e : FUN_0802308e */

int FUN_0802308e(int param_1,int param_2,int param_3,uint param_4)

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
  iVar2 = FUN_08022fa0(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ENTRY 0x080230d6 : FUN_080230d6 */

int FUN_080230d6(uint *param_1)

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



/* ENTRY 0x08023114 : FUN_08023114 */

undefined8 FUN_08023114(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* ENTRY 0x0802319e : FUN_0802319e */

undefined8 FUN_0802319e(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* ENTRY 0x08023202 : FUN_08023202 */

undefined4 * FUN_08023202(undefined4 *param_1,uint param_2)

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



/* ENTRY 0x08023206 : FUN_08023206 */

undefined4 * FUN_08023206(undefined4 *param_1,uint param_2,undefined4 param_3)

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



/* ENTRY 0x08023250 : FUN_08023250 */

void FUN_08023250(void)

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



/* ENTRY 0x08023266 : FUN_08023266 */

void FUN_08023266(void)

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



/* ENTRY 0x0802329a : FUN_0802329a */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_0802329a(undefined4 param_1,undefined4 param_2)

{
  FUN_080081e8();
  FUN_080232ac(param_1,param_2);
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08027f68,0x20000000,0x9d4);
  return;
}



/* ENTRY 0x080232ac : FUN_080232ac */

void FUN_080232ac(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x080232ba : FUN_080232ba */

void FUN_080232ba(uint *param_1,uint param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 0x080232c0 : FUN_080232c0 */

void FUN_080232c0(int param_1,int param_2)

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



/* ENTRY 0x080232d2 : FUN_080232d2 */

void FUN_080232d2(int param_1,int param_2)

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



/* ENTRY 0x080232e4 : FUN_080232e4 */

void FUN_080232e4(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)&DAT_40012400) {
    FUN_08023c00(0x200);
    FUN_08023c00(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_08023c00(0x400);
    FUN_08023c00(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_08023c00(0x8000);
  FUN_08023c00(0x8000,0);
  return;
}



/* ENTRY 0x08023348 : FUN_08023348 */

void FUN_08023348(int param_1,int param_2)

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



/* ENTRY 0x0802335a : FUN_0802335a */

void FUN_0802335a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff8fff;
  return;
}



/* ENTRY 0x08023366 : FUN_08023366 */

bool FUN_08023366(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}



/* ENTRY 0x08023376 : FUN_08023376 */

bool FUN_08023376(uint *param_1,uint param_2)

{
  return (*param_1 & param_2 >> 8) != 0 && (param_1[1] & param_2 & 0xff) != 0;
}



/* ENTRY 0x08023392 : FUN_08023392 */

bool FUN_08023392(int param_1)

{
  return (*(uint *)(param_1 + 8) & 8) != 0;
}



/* ENTRY 0x080233a2 : FUN_080233a2 */

void FUN_080233a2(int param_1,byte param_2,int param_3)

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



/* ENTRY 0x080233b4 : FUN_080233b4 */

void FUN_080233b4(int param_1,uint *param_2)

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



/* ENTRY 0x08023400 : FUN_08023400 */

void FUN_08023400(int param_1,uint param_2,int param_3,int param_4)

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



/* ENTRY 0x08023462 : FUN_08023462 */

void FUN_08023462(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff | (param_2 + -1) * 0x100000;
  return;
}



/* ENTRY 0x08023472 : FUN_08023472 */

void FUN_08023472(int param_1,uint param_2,uint param_3,int param_4)

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



/* ENTRY 0x08023504 : FUN_08023504 */

void FUN_08023504(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}



/* ENTRY 0x0802350e : FUN_0802350e */

void FUN_0802350e(int param_1,int param_2)

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



/* ENTRY 0x08023520 : FUN_08023520 */

void FUN_08023520(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}



/* ENTRY 0x0802352a : FUN_0802352a */

void FUN_0802352a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* ENTRY 0x0802353c : FUN_0802353c */

void FUN_0802353c(int param_1)

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



/* ENTRY 0x08023554 : FUN_08023554 */

void FUN_08023554(void)

{
  FUN_08023c18(1);
  FUN_08023c18(0);
  return;
}



/* ENTRY 0x08023566 : FUN_08023566 */

undefined2 FUN_08023566(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x08023572 : FUN_08023572 */

void FUN_08023572(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x08023580 : FUN_08023580 */

void FUN_08023580(uint param_1)

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



/* ENTRY 0x08023598 : FUN_08023598 */

void FUN_08023598(uint *param_1,int param_2)

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



/* ENTRY 0x080235ac : FUN_080235ac */

void FUN_080235ac(uint *param_1)

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



/* ENTRY 0x080236b0 : FUN_080236b0 */

uint FUN_080236b0(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x080236b8 : FUN_080236b8 */

bool FUN_080236b8(uint param_1)

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



/* ENTRY 0x080236d8 : FUN_080236d8 */

void FUN_080236d8(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x080236e8 : FUN_080236e8 */

void FUN_080236e8(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x0802373a : FUN_0802373a */

void FUN_0802373a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x0802373e : FUN_0802373e */

void FUN_0802373e(undefined4 *param_1)

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



/* ENTRY 0x08023758 : FUN_08023758 */

void FUN_08023758(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x08023764 : FUN_08023764 */

void FUN_08023764(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_080238ec(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_080238ec(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x080237a4 : FUN_080237a4 */

bool FUN_080237a4(void)

{
  uint uVar1;
  
  uVar1 = DAT_4002201c;
  return (uVar1 & 2) != 0;
}



/* ENTRY 0x080237b8 : FUN_080237b8 */

void FUN_080237b8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x080237c8 : FUN_080237c8 */

void FUN_080237c8(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_080238ec(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_080238ec(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08023800 : FUN_08023800 */

void FUN_08023800(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_080238ec(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_080238ec(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_080238ec(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08023848 : FUN_08023848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023848(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_080238ec(0xb0000);
  if (iVar1 != 4) {
    return;
  }
  DAT_40022008 = 0x45670123;
  DAT_40022008 = 0xcdef89ab;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x20;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x40;
  iVar1 = FUN_080238ec(0xb0000);
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
    iVar1 = FUN_080238ec(0xb0000);
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



/* ENTRY 0x080238d4 : FUN_080238d4 */

void FUN_080238d4(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x080238ec : FUN_080238ec */

int FUN_080238ec(int param_1)

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



/* ENTRY 0x08023950 : FUN_08023950 */

void FUN_08023950(uint *param_1,ushort *param_2)

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



/* ENTRY 0x080239fe : FUN_080239fe */

undefined8 FUN_080239fe(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x08023a10 : FUN_08023a10 */

void FUN_08023a10(uint param_1,int param_2)

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



/* ENTRY 0x08023a7c : FUN_08023a7c */

bool FUN_08023a7c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x08023a8a : FUN_08023a8a */

void FUN_08023a8a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08023a8e : FUN_08023a8e */

void FUN_08023a8e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x08023a92 : FUN_08023a92 */

void FUN_08023a92(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x08023aa4 : FUN_08023aa4 */

void FUN_08023aa4(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x08023ab4 : FUN_08023ab4 */

void FUN_08023ab4(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x08023ac4 : FUN_08023ac4 */

void FUN_08023ac4(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x08023ad0 : FUN_08023ad0 */

void FUN_08023ad0(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x08023adc : FUN_08023adc */

void FUN_08023adc(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x08023ae8 : FUN_08023ae8 */

void FUN_08023ae8(byte *param_1)

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



/* ENTRY 0x08023b58 : FUN_08023b58 */

void FUN_08023b58(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x08023b6c : FUN_08023b6c */

void FUN_08023b6c(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x08023b80 : FUN_08023b80 */

void FUN_08023b80(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x08023b8c : FUN_08023b8c */

void FUN_08023b8c(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x08023ba0 : FUN_08023ba0 */

void FUN_08023ba0(uint param_1,int param_2)

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



/* ENTRY 0x08023bb8 : FUN_08023bb8 */

void FUN_08023bb8(uint param_1,int param_2)

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



/* ENTRY 0x08023bd0 : FUN_08023bd0 */

void FUN_08023bd0(uint param_1,int param_2)

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



/* ENTRY 0x08023be8 : FUN_08023be8 */

void FUN_08023be8(uint param_1,int param_2)

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



/* ENTRY 0x08023c00 : FUN_08023c00 */

void FUN_08023c00(uint param_1,int param_2)

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



/* ENTRY 0x08023c18 : FUN_08023c18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023c18(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x08023c24 : FUN_08023c24 */

void FUN_08023c24(uint *param_1)

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
  uVar3 = *param_1 >> (&DAT_200009c4)[(uVar4 & 0xf0) >> 4];
  param_1[1] = uVar3;
  uVar4 = DAT_40021004;
  param_1[2] = uVar3 >> (&DAT_200009c4)[(uVar4 & 0x700) >> 8];
  uVar4 = DAT_40021004;
  sVar1 = (&DAT_200009c4)[(uVar4 & 0x3800) >> 0xb];
  param_1[3] = uVar3 >> sVar1;
  uVar4 = DAT_40021004;
  param_1[4] = (uVar3 >> sVar1) / (uint)(byte)(&DAT_200009c0)[(uVar4 & 0xc000) >> 0xe];
  return;
}



/* ENTRY 0x08023cd4 : FUN_08023cd4 */

bool FUN_08023cd4(uint param_1)

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



/* ENTRY 0x08023d04 : FUN_08023d04 */

void FUN_08023d04(int param_1)

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



/* ENTRY 0x08023d28 : FUN_08023d28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023d28(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x08023d34 : FUN_08023d34 */

void FUN_08023d34(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x08023d44 : FUN_08023d44 */

void FUN_08023d44(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x08023d54 : FUN_08023d54 */

void FUN_08023d54(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x08023d64 : FUN_08023d64 */

void FUN_08023d64(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x08023d74 : FUN_08023d74 */

undefined4 FUN_08023d74(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x08023d8c : FUN_08023d8c */

bool FUN_08023d8c(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x08023dac : FUN_08023dac */

void FUN_08023dac(ushort param_1,int param_2)

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



/* ENTRY 0x08023dc4 : FUN_08023dc4 */

void FUN_08023dc4(undefined4 param_1)

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



/* ENTRY 0x08023dec : FUN_08023dec */

void FUN_08023dec(undefined4 param_1)

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



/* ENTRY 0x08023e14 : FUN_08023e14 */

void FUN_08023e14(int param_1)

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



/* ENTRY 0x08023e38 : FUN_08023e38 */

void FUN_08023e38(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x08023e48 : FUN_08023e48 */

void FUN_08023e48(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x08023e60 : FUN_08023e60 */

void FUN_08023e60(ushort *param_1,int param_2)

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



/* ENTRY 0x08023e72 : FUN_08023e72 */

bool FUN_08023e72(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x08023e80 : FUN_08023e80 */

undefined2 FUN_08023e80(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x08023e84 : FUN_08023e84 */

void FUN_08023e84(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x08023e88 : FUN_08023e88 */

void FUN_08023e88(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x08023edc : FUN_08023edc */

void FUN_08023edc(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_08023f48;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_08023f48:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08023f54 : FUN_08023f54 */

void FUN_08023f54(ushort *param_1,int param_2)

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



/* ENTRY 0x08023f66 : FUN_08023f66 */

void FUN_08023f66(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x08023f8a : FUN_08023f8a */

void FUN_08023f8a(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x08023fa4 : FUN_08023fa4 */

void FUN_08023fa4(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08023faa : FUN_08023faa */

void FUN_08023faa(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x08023fb0 : FUN_08023fb0 */

void FUN_08023fb0(ushort *param_1,int param_2)

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



/* ENTRY 0x08023fc2 : FUN_08023fc2 */

void FUN_08023fc2(int param_1,int param_2)

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



/* ENTRY 0x08023fd8 : FUN_08023fd8 */

void FUN_08023fd8(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08023fe8 : FUN_08023fe8 */

void FUN_08023fe8(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x08023ff0 : FUN_08023ff0 */

void FUN_08023ff0(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_08023c00(0x800);
    FUN_08023c00(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_08023bd0(1);
    FUN_08023bd0(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_08023bd0(2,1);
    FUN_08023bd0(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_08023bd0(4,1);
    FUN_08023bd0(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_08023bd0(8,1);
    FUN_08023bd0(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_08023bd0(0x10,1);
    FUN_08023bd0(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_08023bd0(0x20,1);
    FUN_08023bd0(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_08023c00(0x2000);
    FUN_08023c00(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_08023c00(0x80000);
    FUN_08023c00(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_08023c00(0x100000);
    FUN_08023c00(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_08023c00(0x200000);
    FUN_08023c00(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_08023bd0(0x40,1);
    FUN_08023bd0(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_08023bd0(0x80,1);
    FUN_08023bd0(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_08023bd0(0x100);
    FUN_08023bd0(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_08023c00(0x10000);
    FUN_08023c00(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_08023c00(0x20000);
    FUN_08023c00(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_08023c00(0x40000);
  FUN_08023c00(0x40000,0);
  return;
}



/* ENTRY 0x08024200 : FUN_08024200 */

void FUN_08024200(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08024204 : FUN_08024204 */

undefined2 FUN_08024204(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08024208 : FUN_08024208 */

bool FUN_08024208(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08024220 : FUN_08024220 */

void FUN_08024220(undefined *param_1,short *param_2)

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
  FUN_08023edc(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x080243cc : FUN_080243cc */

void FUN_080243cc(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x080243dc : FUN_080243dc */

void FUN_080243dc(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x080243ec : FUN_080243ec */

void FUN_080243ec(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x080243f6 : FUN_080243f6 */

void FUN_080243f6(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_0802446a;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_0802446a:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x0802447a : FUN_0802447a */

void FUN_0802447a(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x08024486 : FUN_08024486 */

void FUN_08024486(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024508 : FUN_08024508 */

void FUN_08024508(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024516 : FUN_08024516 */

void FUN_08024516(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x08024596 : FUN_08024596 */

void FUN_08024596(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x080245a2 : FUN_080245a2 */

void FUN_080245a2(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024606 : FUN_08024606 */

void FUN_08024606(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024614 : FUN_08024614 */

void FUN_08024614(undefined2 *param_1)

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



/* ENTRY 0x08024628 : FUN_08024628 */

void FUN_08024628(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x0802462e : FUN_0802462e */

void FUN_0802462e(int param_1,int param_2)

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



/* ENTRY 0x08024640 : FUN_08024640 */

void FUN_08024640(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x0802464c : FUN_0802464c */

void FUN_0802464c(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x080246a0 : FUN_080246a0 */

void FUN_080246a0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x080246b0 : FUN_080246b0 */

void FUN_080246b0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x080246c0 : FUN_080246c0 */

void FUN_080246c0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x080246c4 : FUN_080246c4 */

void FUN_080246c4(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_080246fa:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_080246fa;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_080246fa;
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
    if (!bVar3) goto LAB_08024750;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_08024750:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x08024760 : FUN_08024760 */

void FUN_08024760(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x08024772 : FUN_08024772 */

void FUN_08024772(ushort *param_1,int param_2)

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



/* ENTRY 0x08024784 : FUN_08024784 */

void FUN_08024784(ushort *param_1,int param_2)

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



/* ENTRY 0x08024796 : FUN_08024796 */

void FUN_08024796(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x080247a4 : FUN_080247a4 */

void FUN_080247a4(int param_1,int param_2)

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



/* ENTRY 0x080247b6 : FUN_080247b6 */

void FUN_080247b6(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x080247c6 : FUN_080247c6 */

bool FUN_080247c6(ushort *param_1,uint param_2)

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



/* ENTRY 0x08024812 : FUN_08024812 */

void FUN_08024812(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x08024844 : FUN_08024844 */

void FUN_08024844(undefined2 *param_1,int *param_2)

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
  FUN_08023c24(auStack_20);
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


