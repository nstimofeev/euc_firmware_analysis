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
  (*(code *)0x800816c)(&DAT_08028298,0x20000000,0x9e4);
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
  
  uVar1 = FUN_08023580();
  FUN_080081e4(uVar1,extraout_r2);
  FUN_0800a42e();
  uVar2 = FUN_080235ca();
  FUN_080081e8();
  FUN_080235dc((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028298,0x20000000,0x9e4);
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
  (*(code *)0x800816c)(&DAT_08028298,0x20000000,0x9e4);
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
  return 0x200076f0200062f0;
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
  return &DAT_20006290;
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
    iVar2 = *(int *)(&DAT_08024c28 + extraout_r3 * 4) * iVar2;
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
      iVar3 = (*(int *)(&DAT_08025bcc + extraout_r3 * 4) * iVar3 +
              (extraout_r2_00 * 0xb4000) / 0x3244) / 2;
    }
    else {
      iVar3 = *(int *)(&DAT_08025bcc + extraout_r3 * 4) * iVar3;
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
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b2;
    uVar16 = FUN_080233be((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b2 +
                          (int)((ulonglong)lVar3 >> 0x20),0xa000,0,param_3,param_4);
    *(undefined8 *)(param_1 + 0x68) = uVar16;
    uVar2 = (longlong)*(int *)(param_1 + 0xa0) * (longlong)DAT_20000014;
    lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b2;
    uVar16 = FUN_080233be((int)lVar3,
                          (int)(uVar2 >> 0x20) * (uint)DAT_200001b2 +
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
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b2;
  uVar16 = FUN_080233be((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001b2 + (int)((ulonglong)lVar3 >> 0x20),
                        0xa000,0);
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  uVar2 = (longlong)*(int *)(param_1 + 0x90) * (longlong)DAT_20000014;
  lVar3 = (uVar2 & 0xffffffff) * (ulonglong)(uint)DAT_200001b2;
  uVar16 = FUN_080233be((int)lVar3,
                        (int)(uVar2 >> 0x20) * (uint)DAT_200001b2 + (int)((ulonglong)lVar3 >> 0x20),
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
  uVar16 = FUN_080233be(iVar5,uVar14 * ((int)uVar11 >> 0x1f) +
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
  uVar16 = FUN_080233be(iVar5,uVar13 * ((int)uVar11 >> 0x1f) +
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
  iVar5 = FUN_080233be(uVar15,*(int *)(param_1 + 0x6c) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                       DAT_20000014 * (uint)DAT_200001b2,
                       (int)(DAT_20000014 * (uint)DAT_200001b2) >> 0x1f,uVar15);
  *piVar1 = iVar5;
  *(int *)(param_1 + 0x9c) = *piVar1 - *(int *)(param_1 + 0xb4);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x70) * 0xa000;
  uVar15 = (undefined4)lVar3;
  uVar15 = FUN_080233be(uVar15,*(int *)(param_1 + 0x74) * 0xa000 + (int)((ulonglong)lVar3 >> 0x20),
                        DAT_20000014 * (uint)DAT_200001b2,
                        (int)(DAT_20000014 * (uint)DAT_200001b2) >> 0x1f,uVar15);
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(int *)(param_1 + 0xa8) = (*(int *)(param_1 + 0x80) * 0xa000) / (int)(uint)DAT_200001b2;
  *(int *)(param_1 + 0xac) = (*(int *)(param_1 + 0x84) * 0xa000) / (int)(uint)DAT_200001b2;
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
  DAT_20000038 = (&DAT_08026b70)[(byte)(&DAT_2000003a)[(byte)(&DAT_08026b70)[DAT_20000039]]] +
                 (&DAT_08026b70)[DAT_20000039] * '\b';
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
  
  uVar2 = (uint)(byte)(&DAT_08026b70)[*(byte *)(param_1 + 10)];
  uVar3 = (uint)(byte)(&DAT_08026b70)[*(byte *)(param_1 + 0xb + uVar2)] + uVar2 * 8 & 0xff;
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
  return &DAT_08026ce2;
}



/* ENTRY 0x0800a1dc : FUN_0800a1dc */

void FUN_0800a1dc(void)

{
  FUN_08023e9c(0x8000000);
  FUN_08023e88(0x300);
  return;
}



/* ENTRY 0x0800a1f2 : FUN_0800a1f2 */

void FUN_0800a1f2(void)

{
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  DAT_20000068 = FUN_08009836(0);
  FUN_0800fe4c();
  do {
    FUN_0800fa8c();
    FUN_08010838();
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
    FUN_0800eea8();
    FUN_08015522();
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
    FUN_0800ce9c();
    FUN_0800f6a2();
    FUN_0801c7c2();
    FUN_08012e56();
    FUN_08014db2();
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
    FUN_0800d2a4();
    FUN_08014160();
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
    FUN_080138f0();
    uVar1 = (uint)DAT_20000080;
    DAT_20000080 = DAT_20000080 + 1;
    if (uVar1 + ((int)uVar1 >> 2) * -4 == 2) {
      FUN_0801419a();
    }
    FUN_08015f4c();
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
  FUN_08021b94();
  do {
    FUN_08022208();
    FUN_0800e0a4();
    FUN_08009880(DAT_2000007c,100,&uStack_8);
  } while( true );
}



/* ENTRY 0x0800a42e : FUN_0800a42e */

undefined4 FUN_0800a42e(void)

{
  FUN_0800d80a();
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
  FUN_08023ee8(8,1);
  local_14 = 1;
  local_10 = DAT_20000000 / param_1 & 0xffff;
  local_12 = 0;
  FUN_080249f4(&DAT_40000c00,&local_14);
  FUN_08024aa2(&DAT_40000c00,0);
  local_18 = 0x32;
  local_17 = 4;
  local_16 = 0;
  local_15 = 1;
  FUN_08023e18(&local_18);
  FUN_080242e0(&DAT_40000c00,1);
  FUN_0802470c(&DAT_40000c00,1);
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
  
  FUN_08023f54(local_18);
  return local_18[0] == DAT_20000000;
}



/* ENTRY 0x0800a68a : FUN_0800a68a */

void FUN_0800a68a(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(4,1);
  local_8 = 0x10031000;
  FUN_08023c80(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0800a6b2 : FUN_0800a6b2 */

void FUN_0800a6b2(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(8,1);
  local_8 = 0x28031000;
  FUN_08023c80(&DAT_40010c00,&local_8);
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
      FUN_0800faa0();
      FUN_08010aae(1);
    }
    else {
      FUN_08010aae(0);
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
    DAT_20003110 = DAT_20000094;
    FUN_0800a68a();
    FUN_0800a6b2();
    FUN_0800e34e();
    FUN_0800e05c();
    FUN_0800e800();
    FUN_08012fd0(0x1c200);
    FUN_08020270();
    FUN_08014130();
    FUN_08023ed0(0x40,1);
    FUN_0800a554();
    FUN_0801cc5c();
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
  FUN_08023c04();
  FUN_0800b510((&DAT_200000a6)[param_1],param_2);
  FUN_08023ae8();
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
  FUN_08023c04();
  FUN_0800b510((&DAT_200000a6)[param_1],(uint)uVar1);
  for (uVar3 = 1; (int)uVar3 < param_2; uVar3 = uVar3 + 1 & 0xff) {
    uVar1 = param_3[uVar3];
    uVar2 = FUN_0800c170((int)(uint)uVar1 >> 8,uVar2);
    uVar2 = FUN_0800c170((char)uVar1,uVar2);
    FUN_0800b510((&DAT_200000a6)[param_1 + uVar3],(uint)uVar1);
  }
  FUN_0800b510((&DAT_200000a6)[param_1 + param_2],uVar2);
  FUN_08023ae8();
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
  FUN_08023c04();
  FUN_0800b510((&DAT_200000a6)[param_1],local_20 & 0xffff);
  for (uVar6 = 1; (int)uVar6 < param_2; uVar6 = uVar6 + 1 & 0xff) {
    local_20 = (uint)param_3[uVar6];
    uVar1 = FUN_0800c170((int)local_20 >> 8,uVar4);
    uVar2 = FUN_0800c170((char)local_20,uVar1);
    uVar4 = (uint)uVar2;
    FUN_0800b510((&DAT_200000a6)[param_1 + uVar6],local_20 & 0xffff);
  }
  FUN_0800b510((&DAT_200000a6)[param_1 + param_2],uVar4);
  FUN_08023ae8();
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
  FUN_08023c04();
  FUN_0800b402();
  FUN_08023ae8();
  FUN_0800ba5a();
  FUN_0800bfc2();
  return;
}



/* ENTRY 0x0800aa58 : FUN_0800aa58 */

void FUN_0800aa58(void)

{
  DAT_200033b0 = 0;
  DAT_200033b4 = 0;
  DAT_200033b8 = 0;
  DAT_200033bc = 0;
  DAT_200033c0 = 0;
  DAT_200033c4 = 0;
  DAT_200033c8 = 0;
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
  
  _local_18 = CONCAT22((undefined2)DAT_200033b4,(undefined2)DAT_200033b0);
  _local_14 = CONCAT22((short)((uint)((DAT_200033bc - (DAT_200033bc >> 0x1f)) * 0x8000) >> 0x10),
                       (undefined2)DAT_200033b8);
  _local_10 = CONCAT22((short)((uint)((DAT_200033c4 - (DAT_200033c4 >> 0x1f)) * 0x8000) >> 0x10),
                       (short)((uint)((DAT_200033c0 - (DAT_200033c0 >> 0x1f)) * 0x8000) >> 0x10));
  _local_c = CONCAT22(0x729,(undefined2)DAT_200033c8);
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
    DAT_200033b0 = (int)(short)local_18;
    DAT_200033b4 = (int)local_18._2_2_;
    DAT_200033b8 = (int)(short)local_14;
    DAT_200033bc = (int)local_14._2_2_ << 1;
    DAT_200033c0 = (int)(short)local_10 << 1;
    DAT_200033c4 = (int)local_10._2_2_ << 1;
    DAT_200033c8 = local_c & 0xffff;
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800ab80 : FUN_0800ab80 */

uint FUN_0800ab80(void)

{
  return (uint)DAT_2000327e << 0x10 | (uint)diag_motionstep << 8 | (uint)diag_motorstep;
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
  if (DAT_200031ae < 0x65) {
    if (DAT_200031ae == 0) {
      DAT_20000606 = 1;
    }
    else {
      DAT_20000606 = (undefined1)DAT_200031ae;
    }
  }
  else {
    DAT_20000606 = 100;
  }
  if (DAT_200031b0 < 0x65) {
    if (DAT_200031b0 == 0) {
      DAT_20000607 = 1;
    }
    else {
      DAT_20000607 = (undefined1)DAT_200031b0;
    }
  }
  else {
    DAT_20000607 = 100;
  }
  if (DAT_200031b2 < 0x65) {
    if (DAT_200031b2 == 0) {
      DAT_20000608 = 1;
    }
    else {
      DAT_20000608 = (undefined1)DAT_200031b2;
    }
  }
  else {
    DAT_20000608 = 100;
  }
  if (DAT_200031b4 < 0x65) {
    if (DAT_200031b4 == 0) {
      DAT_20000609 = 1;
    }
    else {
      DAT_20000609 = (undefined1)DAT_200031b4;
    }
  }
  else {
    DAT_20000609 = 100;
  }
  return 0;
}



/* ENTRY 0x0800ae98 : FUN_0800ae98 */

undefined4 FUN_0800ae98(void)

{
  DAT_20003142 = 1;
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
    FUN_080234ce(&DAT_2000008c,local_20,0x14);
    uVar2 = 0;
  }
  else {
    FUN_0800bcd2(local_20);
    local_20[0] = 0xf;
    sVar1 = FUN_0800c0d0(local_20);
    if (local_10 == sVar1) {
      FUN_080234ce(&DAT_2000008c,local_20,0x14);
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
  DAT_20003110 = 0;
  DAT_20003118 = 0;
  DAT_20000090 = 0;
  DAT_20000094 = 0;
  DAT_20000098 = 0;
  FUN_0800aebc();
  return 0;
}



/* ENTRY 0x0800afbc : FUN_0800afbc */

undefined4 FUN_0800afbc(void)

{
  FUN_08023c04();
  FUN_08023b30(&DAT_0803a800,0x28536692);
  FUN_08023ae8();
  return 0;
}



/* ENTRY 0x0800afd6 : FUN_0800afd6 */

undefined4 FUN_0800afd6(void)

{
  FUN_08023c04();
  FUN_08023a94(&DAT_0803a800);
  FUN_08023ae8();
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
  
  iVar1 = FUN_08023a94(&DAT_0803b000);
  if ((iVar1 == 4) && (iVar1 = FUN_08023af8(&DAT_0803b000,0), iVar1 == 4)) {
    iVar1 = FUN_08023a94(&DAT_0803b800);
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
        iVar1 = FUN_08023af8(DAT_20000138,param_2);
        if (iVar1 != 4) {
          return iVar1;
        }
        iVar1 = FUN_08023af8((int)DAT_20000138 + 2,param_1);
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
      iVar1 = FUN_08023a94(&DAT_0803b800);
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
      iVar1 = FUN_08023af8(&DAT_0803b800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803b000);
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
      iVar1 = FUN_08023af8(&DAT_0803b000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803b800);
    }
    else if (_DAT_0803b800 == -1) {
      iVar1 = FUN_08023a94(&DAT_0803b800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803b000,0);
    }
    else {
      iVar1 = FUN_0800b114();
    }
  }
  else if (_DAT_0803b000 == -1) {
    if (_DAT_0803b800 == 0) {
      iVar1 = FUN_08023a94(&DAT_0803b000);
    }
    else if (_DAT_0803b800 == -0x1112) {
      iVar1 = FUN_08023a94(&DAT_0803b000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803b800,0);
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
  iVar1 = FUN_08023af8(puVar3,0xeeee);
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
      iVar1 = FUN_08023a94(local_28);
      if (iVar1 == 4) {
        iVar1 = FUN_08023af8(puVar3,0);
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
  
  iVar1 = FUN_08023a94(&DAT_0803e000);
  if ((iVar1 == 4) && (iVar1 = FUN_08023af8(&DAT_0803e000,0), iVar1 == 4)) {
    iVar1 = FUN_08023a94(&DAT_0803e800);
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
        iVar1 = FUN_08023af8(DAT_2000013c,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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
        iVar1 = FUN_08023af8(DAT_2000013c,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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
  iVar1 = FUN_08023af8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800b612(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_08023a94(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08023af8(puVar2,0);
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
  iVar1 = FUN_08023af8(puVar2,0xeeee);
  DAT_2000013c = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800b612(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_08023a94(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08023af8(puVar2,0);
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
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar2 = FUN_0800b612(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b696(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_08023ae8();
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
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar2 = FUN_0800b612(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800b696(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_08023ae8();
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
        FUN_08023444(param_1,DAT_2000013c - 0x28,0x14);
      }
      else {
        FUN_08023444(param_1,DAT_2000013c - 0x14,0x14);
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
      iVar1 = FUN_08023a94(&DAT_0803e800);
    }
    else {
      FUN_08023532(&local_2c,0x14);
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
        FUN_08023c04();
        FUN_08023a88(0x35);
      }
      iVar1 = FUN_08023af8(&DAT_0803e800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803e000);
    }
  }
  else if (_DAT_0803e000 == -0x1112) {
    if (_DAT_0803e800 == 0) {
      FUN_08023532(&local_2c,0x14);
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
        FUN_08023c04();
        FUN_08023a88(0x35);
      }
      iVar1 = FUN_08023af8(&DAT_0803e000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803e800);
    }
    else if (_DAT_0803e800 == -1) {
      iVar1 = FUN_08023a94(&DAT_0803e800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803e000,0);
    }
    else {
      iVar1 = FUN_0800b53c();
    }
  }
  else if (_DAT_0803e000 == -1) {
    if (_DAT_0803e800 == 0) {
      iVar1 = FUN_08023a94(&DAT_0803e000);
    }
    else if (_DAT_0803e800 == -0x1112) {
      iVar1 = FUN_08023a94(&DAT_0803e000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803e800,0);
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
  
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar1 = FUN_0800ba02();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800b7ca();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800ba02();
  }
  FUN_08023ae8();
  return uVar3;
}



/* ENTRY 0x0800baa4 : FUN_0800baa4 */

int FUN_0800baa4(void)

{
  int iVar1;
  
  iVar1 = FUN_08023a94(&DAT_0803f000);
  if ((iVar1 == 4) && (iVar1 = FUN_08023af8(&DAT_0803f000,0), iVar1 == 4)) {
    iVar1 = FUN_08023a94(&DAT_0803f800);
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
        iVar1 = FUN_08023af8(DAT_20000140,*(undefined2 *)((int)&uStack_10 + uVar2 * 2));
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
        iVar1 = FUN_08023af8(DAT_20000140,*(undefined2 *)(&stack0x00000000 + uVar2 * 2));
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
  iVar1 = FUN_08023af8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) && (iVar1 = FUN_0800bb7a(param_1,param_2,param_3,param_4,param_5), iVar1 == 4))
     && (iVar1 = FUN_08023a94(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08023af8(puVar2,0);
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
  iVar1 = FUN_08023af8(puVar2,0xeeee);
  DAT_20000140 = puVar2 + 4;
  if (((iVar1 == 4) &&
      (iVar1 = FUN_0800bb7a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                            in_stack_00000010), iVar1 == 4)) &&
     (iVar1 = FUN_08023a94(puVar3), iVar1 == 4)) {
    iVar1 = FUN_08023af8(puVar2,0);
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
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar2 = FUN_0800bb7a(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bbfe(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_08023ae8();
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
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar2 = FUN_0800bb7a(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                       in_stack_00000010);
  if (iVar2 == 0x80) {
    iVar2 = FUN_0800bbfe(in_stack_00000000,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                         in_stack_00000010);
  }
  FUN_08023ae8();
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
        FUN_08023444(param_1,DAT_20000140 - 0x28,0x14);
      }
      else {
        FUN_08023444(param_1,DAT_20000140 - 0x14,0x14);
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
      iVar1 = FUN_08023a94(&DAT_0803f800);
    }
    else {
      FUN_08023532(&local_2c,0x14);
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
        FUN_08023c04();
        FUN_08023a88(0x35);
      }
      iVar1 = FUN_08023af8(&DAT_0803f800,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803f000);
    }
  }
  else if (_DAT_0803f000 == -0x1112) {
    if (_DAT_0803f800 == 0) {
      FUN_08023532(&local_2c,0x14);
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
        FUN_08023c04();
        FUN_08023a88(0x35);
      }
      iVar1 = FUN_08023af8(&DAT_0803f000,0);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023a94(&DAT_0803f800);
    }
    else if (_DAT_0803f800 == -1) {
      iVar1 = FUN_08023a94(&DAT_0803f800);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803f000,0);
    }
    else {
      iVar1 = FUN_0800baa4();
    }
  }
  else if (_DAT_0803f000 == -1) {
    if (_DAT_0803f800 == 0) {
      iVar1 = FUN_08023a94(&DAT_0803f000);
    }
    else if (_DAT_0803f800 == -0x1112) {
      iVar1 = FUN_08023a94(&DAT_0803f000);
      if (iVar1 != 4) {
        return iVar1;
      }
      iVar1 = FUN_08023af8(&DAT_0803f800,0);
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
  
  FUN_08023c04();
  FUN_08023a88(0x35);
  iVar1 = FUN_0800bf6a();
  uVar2 = FUN_0800824c();
  uVar3 = FUN_0800bd32();
  FUN_08008254(uVar2);
  if (iVar1 == 0xab) {
    FUN_0800bf6a();
  }
  FUN_08023ae8();
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
      DAT_2000327e = DAT_2000327e | 2;
    }
  }
  else {
    diag_BatState = 0;
    DAT_2000327e = DAT_2000327e & 0xfffd;
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
    if (DAT_20000178 < 0x65) {
      DAT_20000178 = DAT_20000178 + 1;
    }
    else {
      DAT_2000314d = 1;
    }
  }
  else {
    DAT_20000178 = 0;
    DAT_2000314d = 0;
  }
  diag_currentmeter =
       FUN_080232d0((int)((longlong)DAT_200005b8 * 0x1a),
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
    if ((DAT_20003142 == '\0') &&
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
                  if (100 < DAT_200034bc) {
                    DAT_200034bc = DAT_200034bc + -0x32;
                  }
                  if (0x14 < DAT_200034c4) {
                    DAT_200034c4 = DAT_200034c4 + -1;
                  }
                }
                else {
                  if (DAT_2000061a < DAT_200034bc) {
                    DAT_200034bc = DAT_200034bc + -0x14;
                  }
                  if (0x96 < DAT_200034c4) {
                    DAT_200034c4 = DAT_200034c4 + -2;
                  }
                }
              }
              else {
                if (DAT_2000061a < DAT_200034bc) {
                  DAT_200034bc = DAT_200034bc + -0x14;
                }
                if (DAT_200034bc < 500) {
                  DAT_200034bc = DAT_200034bc + 0x1e;
                }
                if (0x96 < DAT_200034c4) {
                  DAT_200034c4 = DAT_200034c4 + -2;
                }
                if (DAT_200034c4 < 100) {
                  DAT_200034c4 = DAT_200034c4 + 2;
                }
              }
            }
            else {
              if (DAT_200034bc < 500) {
                DAT_200034bc = DAT_200034bc + 0x1e;
              }
              if (0x96 < DAT_200034c4) {
                DAT_200034c4 = DAT_200034c4 + -2;
              }
              if (DAT_200034c4 < 100) {
                DAT_200034c4 = DAT_200034c4 + 2;
              }
            }
          }
          else {
            if (DAT_2000061a + 0x1e < DAT_200034bc) {
              DAT_200034bc = DAT_200034bc + -0x14;
            }
            if (DAT_200034bc < DAT_2000061a) {
              DAT_200034bc = DAT_200034bc + 0x1e;
            }
            if (0x96 < DAT_200034c4) {
              DAT_200034c4 = DAT_200034c4 + -2;
            }
            if (DAT_200034c4 < 100) {
              DAT_200034c4 = DAT_200034c4 + 2;
            }
          }
        }
        else {
          if (DAT_200034bc < DAT_2000061a) {
            DAT_200034bc = DAT_200034bc + 0x1e;
          }
          if (DAT_200034c4 < 100) {
            DAT_200034c4 = DAT_200034c4 + 2;
          }
        }
      }
      else {
        if (DAT_2000061c + 0x1e < DAT_200034bc) {
          DAT_200034bc = DAT_200034bc + -0x14;
        }
        if (DAT_200034bc < DAT_2000061c) {
          DAT_200034bc = DAT_200034bc + 0x1e;
        }
        if (DAT_200034c4 < DAT_2000061e) {
          DAT_200034c4 = DAT_200034c4 + 2;
        }
      }
    }
    else {
      if (DAT_200034bc < DAT_2000061c) {
        DAT_200034bc = DAT_200034bc + 0x1e;
      }
      if (DAT_2000061e + 2 < DAT_200034c4) {
        DAT_200034c4 = DAT_200034c4 + -2;
      }
      if (DAT_200034c4 < DAT_2000061e) {
        DAT_200034c4 = DAT_200034c4 + 2;
      }
    }
  }
  else {
    if (DAT_200034bc < DAT_20000616) {
      DAT_200034bc = DAT_200034bc + 0x1e;
    }
    if (DAT_200034c4 < DAT_20000618) {
      DAT_200034c4 = DAT_200034c4 + 2;
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
  if (DAT_20000628 < diag_TotalVoltage) {
    bVar1 = 0x27 < DAT_20000154;
    DAT_20000154 = DAT_20000154 + 1;
    if ((bVar1) && (DAT_20000154 = 0, DAT_20000160 == 0)) {
      FUN_0800faba(7);
      DAT_200030ce = DAT_200030ce | 0x4000;
      DAT_20000160 = 400;
      FUN_08021bb2(7);
    }
  }
  else {
    DAT_20000154 = 0;
    DAT_200030ce = DAT_200030ce & 0xbfff;
  }
  if ((diag_TotalVoltage < DAT_20000620) &&
     (((diag_motionstep == '\a' || (diag_motionstep == '\x04')) && (DAT_200002d4 == '\x04')))) {
    bVar1 = 199 < DAT_2000015b;
    DAT_2000015b = DAT_2000015b + 1;
    if ((bVar1) && (DAT_2000015b = '\0', DAT_20000168 == 0)) {
      if (diag_motionstep == '\x04') {
        FUN_0800faba(7);
      }
      DAT_200030ce = DAT_200030ce | 0x1000;
      DAT_20000168 = 400;
      FUN_08021bb2(6);
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
      if ((DAT_20003142 == '\0') && (diag_AgeModeflg == '\0')) {
        FUN_0800e826();
      }
      FUN_08014dd0(0x21,(int)(short)diag_IQCurrent,diag_VehicleSpeed);
      DAT_200030ce = DAT_200030ce | 4;
      FUN_08021bb2(8);
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
  if ((DAT_2000062a < iVar2) || ((((byte)DAT_2000327c & 2) == 2 && (diag_AgeModeflg == '\0')))) {
    bVar1 = 0x28 < DAT_20000158;
    DAT_20000158 = DAT_20000158 + 1;
    if ((bVar1) && (DAT_20000158 = 0, DAT_20000162 == 0)) {
      FUN_08014dd0(0x22,(int)(short)diag_TotalCurrent,diag_IQCurrent);
      DAT_200030ce = DAT_200030ce | 8;
      DAT_20000162 = 300;
      FUN_08021bb2(9);
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
      FUN_08014dd0(0x26,(int)(short)diag_VectorVol,diag_VehicleSpeed);
      DAT_200030ce = DAT_200030ce | 2;
      DAT_20000166 = 100;
      FUN_08021bb2(10);
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
        DAT_2000327e = DAT_2000327e | 0x10;
      }
      DAT_200030ce = DAT_200030ce | 1;
      DAT_2000327c = DAT_2000327c | 1;
      if (DAT_20000164 == 0) {
        FUN_08014dd0(0x25,diag_HallState,0);
        DAT_20000164 = 200;
        DAT_20000172 = 0x15;
        FUN_08021bb2(5);
      }
    }
  }
  else {
    DAT_2000327e = DAT_2000327e & 0xffef;
    DAT_200030ce = DAT_200030ce & 0xfffe;
    DAT_2000327c = DAT_2000327c & 0xfffe;
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
      if (DAT_200002d4 != '\x01') {
        FUN_0800faba(7);
        FUN_08014dd0(0x24,(int)diag_MosTemp,0);
        DAT_200030ce = DAT_200030ce | 0x20;
      }
      DAT_2000016a = 200;
      FUN_08021bb2(0xb);
    }
  }
  if (((DAT_2000327c & 0x40) != 0) && (DAT_2000016e == 0)) {
    FUN_08014dd0(0x1a,0);
    DAT_2000016e = 200;
    FUN_08021bb2(0xd);
  }
  if (((DAT_2000327c & 0x30) != 0) && (DAT_2000016c == 0)) {
    FUN_08014dd0(0x23,0);
    DAT_2000016c = 200;
    FUN_08021bb2(0xc);
  }
  if ((DAT_20003122 == '\0') && ((DAT_200030ce & 0x400) != 0x400)) {
    DAT_2000015e = '\0';
  }
  else {
    bVar1 = 10 < DAT_2000015e;
    DAT_2000015e = DAT_2000015e + 1;
    if ((bVar1) && (DAT_2000015e = '\0', DAT_20000170 == 0)) {
      if (DAT_200002d4 != '\x01') {
        FUN_0800faba(7);
      }
      DAT_20000170 = 200;
      FUN_08021bb2(0xe);
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
    FUN_08021bb2(0xf);
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



/* ENTRY 0x0800cbb8 : FUN_0800cbb8 */

void FUN_0800cbb8(void)

{
  int iVar1;
  uint uVar2;
  
  diag_TotalVoltage = DAT_20003290;
  diag_TotalVol_show = DAT_20003294;
  diag_VehicleSpeed = (DAT_20003284 + diag_VehicleSpeed * 4) / 5;
  diag_speedAcc = (short)((diag_speedAcc * 9 + (diag_VehicleSpeed - DAT_20000150)) / 10);
  diag_VectorVol = DAT_2000329c;
  DAT_20000150 = diag_VehicleSpeed;
  iVar1 = FUN_0800e3ac((int)DAT_200034b2);
  diag_MotorTemp = (short)((iVar1 + diag_MotorTemp * 9) / 10);
  iVar1 = FUN_0800e3e6((int)DAT_200034aa);
  diag_MosTemp = (short)((iVar1 + diag_MosTemp * 9) / 10);
  iVar1 = FUN_0800e420((int)DAT_200034b8);
  diag_CpuTemp = (short)((iVar1 + diag_CpuTemp * 9) / 10);
  iVar1 = FUN_0800e43a((int)DAT_200032dc);
  diag_GYTemp = (short)((iVar1 + diag_GYTemp * 9) / 10);
  diag_cpuvol = (short)(0x4b0000 / (uint)((int)(uint)DAT_200034b4 >> 4));
  diag_lightad = DAT_200034ae;
  DAT_200030e2 = DAT_200034b6;
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
  diag_allwarnbit = CONCAT22(DAT_200030ce,DAT_2000327c);
  iVar1 = 0;
  if ((DAT_200049ae == '\0') && (DAT_20004b6e == '\0')) {
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      iVar1 = iVar1 + (uint)(ushort)(&DAT_20004af2)[uVar2] + (uint)(ushort)(&DAT_20004cb2)[uVar2];
    }
    iVar1 = ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4) + -0xaaa;
    if (iVar1 < 0x51) {
      if (iVar1 < 1) {
        if (30000 < DAT_200032a4) {
          DAT_200032a4 = DAT_200032a4 + -10;
        }
      }
      else {
        iVar1 = (iVar1 * 41000) / 0x50;
        if (DAT_200032a4 < iVar1 + 0x7526) {
          DAT_200032a4 = DAT_200032a4 + 10;
        }
        if (iVar1 + 0x753a < DAT_200032a4) {
          DAT_200032a4 = DAT_200032a4 + -10;
        }
      }
    }
    else if (DAT_200032a4 < 71000) {
      DAT_200032a4 = DAT_200032a4 + 10;
    }
  }
  else if (DAT_200032a4 < 71000) {
    DAT_200032a4 = DAT_200032a4 + 10;
  }
  if ((DAT_200030ce & 1) != 0) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if ((6000 < iVar1) && (iVar1 + 1000 < DAT_200032a8)) {
      DAT_200032a8 = iVar1 + 1000;
    }
    if (3000 < DAT_200032a8) {
      DAT_200032a8 = DAT_200032a8 + -0x32;
    }
  }
  return;
}



/* ENTRY 0x0800ce9c : FUN_0800ce9c */

void FUN_0800ce9c(void)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_200030e4 = DAT_200030e4 + 1;
  if (DAT_200030e4 % 0x32 == 0x19) {
    DAT_20003100 = DAT_20003100 + 1;
    DAT_20003108 = DAT_20003104 + DAT_20003100;
  }
  if (DAT_2000314f != '\0') {
    DAT_2000314f = DAT_2000314f + -1;
  }
  FUN_0800e158();
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
        FUN_0800e09e();
      }
      DAT_20000144 = DAT_20000144 + 1;
    }
    break;
  case '\x01':
    diag_LimitSpeed = (uint)DAT_20000609 * 1000;
    FUN_08021bb2(1);
    diag_cartstep = '\x02';
    DAT_2000314f = -6;
    break;
  case '\x02':
    DAT_2000327e = DAT_2000327e | 0x45;
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
      iVar3 = FUN_08010964(diag_TotalVol_show);
      if (iVar3 == 1) {
        iVar3 = FUN_0800aa82();
        if (iVar3 == 0) {
          FUN_0800e09e(4);
        }
        else {
          FUN_0800e098(1);
          FUN_0800afd6();
        }
      }
      else {
        FUN_0800e09e(4);
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
      FUN_0800d2ae();
    }
    DAT_20000146 = 0;
    break;
  case '\a':
    break;
  case '\b':
    if (DAT_20000148 == 2) {
      DAT_2000314c = DAT_2000314c | 1;
      FUN_08021bb2(0xf0);
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
          FUN_0800d2ae();
        }
        uVar2 = DAT_20000148 + 1;
        bVar1 = 5 < DAT_20000148;
        DAT_20000148 = uVar2;
        if (bVar1) {
          FUN_0800e826();
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
  iVar3 = FUN_0800e326();
  if ((iVar3 != 0) && (diag_cartstep != '\0')) {
    iVar3 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar3 = -diag_VehicleSpeed;
    }
    if (iVar3 < 1000) {
      FUN_0800e09e(1);
      diag_cartstep = '\b';
      DAT_20003126 = 1;
    }
  }
  DAT_200030e8 = DAT_200030e8 + 1;
  if (((DAT_2000314d == '\0') || (diag_BatState == '\x01')) || ((DAT_2000311f & 0x70) != 0)) {
    DAT_200030e8 = 0;
  }
  if ((DAT_2000314e == '\x01') && (10 < DAT_200030e8)) {
    DAT_200030e8 = DAT_200030e8 - 5;
  }
  if (DAT_200030ec + 300 < DAT_200030e8) {
    if (diag_cartstep != '\0') {
      iVar3 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar3 = -diag_VehicleSpeed;
      }
      if (iVar3 < 1000) {
        DAT_20003126 = 1;
        FUN_0800e09e();
        diag_cartstep = '\b';
        DAT_200030e8 = 0;
      }
    }
  }
  else if ((DAT_200030ec < DAT_200030e8) && (DAT_200030e4 % 0x32 == 0x19)) {
    FUN_0800e09e(1);
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
  FUN_0800cbb8();
  FUN_0800c60a();
  FUN_0800c2fc();
  FUN_0800c200();
  FUN_0800c198();
  if (DAT_200032ce != '\0') {
    FUN_0800e09e(DAT_200032ce);
    DAT_200032ce = '\0';
  }
  if (DAT_200032cf != '\0') {
    FUN_0800e098(DAT_200032cf);
    DAT_200032cf = '\0';
  }
  return;
}



/* ENTRY 0x0800d2a4 : FUN_0800d2a4 */

void FUN_0800d2a4(void)

{
  DAT_200030e0 = DAT_200034b0;
  return;
}



/* ENTRY 0x0800d2ae : FUN_0800d2ae */

void FUN_0800d2ae(void)

{
  uint uVar1;
  
  uVar1 = DAT_e000ed0c;
  DAT_e000ed0c = (uVar1 & 0x700 | 0x5fa0000) + 4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d2dc : FUN_0800d2dc */

void FUN_0800d2dc(uint *param_1)

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



/* ENTRY 0x0800d3ae : FUN_0800d3ae */

void FUN_0800d3ae(undefined2 *param_1,int *param_2)

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
  FUN_0800d2dc(auStack_34);
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



/* ENTRY 0x0800d49c : FUN_0800d49c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d49c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003154)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003154 = (undefined1)DAT_2000019c;
    DAT_20003155 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_20003156 = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_20003157 = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_20003158 = (undefined1)DAT_200001a0;
    DAT_20003159 = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000315a = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000315b = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_2000315c = (undefined1)DAT_200001a4;
    DAT_2000315d = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_2000315e = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_2000315f = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003154)[uVar2] + uVar1 & 0xffff ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,uVar1);
}



/* ENTRY 0x0800d5ea : FUN_0800d5ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800d5ea(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_2000019c = _DAT_1ffff7e8;
  DAT_200001a0 = _DAT_1ffff7ec;
  DAT_200001a4 = _DAT_1ffff7f0;
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_20003154)[uVar2] = 0;
  }
  if (DAT_2000019c != 0) {
    DAT_20003154 = (undefined1)DAT_2000019c;
    DAT_20003155 = (undefined1)((uint)DAT_2000019c >> 8);
    DAT_20003156 = (undefined1)((uint)DAT_2000019c >> 0x10);
    DAT_20003157 = (undefined1)((uint)DAT_2000019c >> 0x18);
    DAT_20003158 = (undefined1)DAT_200001a0;
    DAT_20003159 = (undefined1)((uint)DAT_200001a0 >> 8);
    DAT_2000315a = (undefined1)((uint)DAT_200001a0 >> 0x10);
    DAT_2000315b = (undefined1)((uint)DAT_200001a0 >> 0x18);
    DAT_2000315c = (undefined1)DAT_200001a4;
    DAT_2000315d = (undefined1)((uint)DAT_200001a4 >> 8);
    DAT_2000315e = (undefined1)((uint)DAT_200001a4 >> 0x10);
    DAT_2000315f = (undefined1)((uint)DAT_200001a4 >> 0x18);
  }
  for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = (byte)(&DAT_20003154)[uVar2] + uVar1 ^ 0x3692;
  }
  return CONCAT44(0x127b7bb9,(uint)(ushort)((uVar1 ^ 0x3156) + 0x3692));
}



/* ENTRY 0x0800d746 : FUN_0800d746 */

void FUN_0800d746(void)

{
  FUN_08023c04();
  FUN_08023a88(0x35);
  FUN_08023b30(&DWORD_08008300,0);
  FUN_08023ae8();
  return;
}



/* ENTRY 0x0800d796 : FUN_0800d796 */

void FUN_0800d796(void)

{
  undefined4 uVar1;
  dword dVar2;
  
  uVar1 = FUN_0800d49c();
  FUN_08023c04();
  FUN_08023a88(0x35);
  FUN_08023b30(&DWORD_08008304,uVar1);
  dVar2 = FUN_0800d49c();
  if (dVar2 == 0xffffffff) {
    FUN_0800d746();
    FUN_08023ae8();
    return;
  }
  FUN_08023ae8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d80a : FUN_0800d80a */

/* WARNING: Removing unreachable block (ram,0x0800d854) */
/* WARNING: Removing unreachable block (ram,0x0800d8c6) */

void FUN_0800d80a(void)

{
  FUN_0800d796();
  DAT_200001a8 = 1;
  return;
}



/* ENTRY 0x0800d8cc : FUN_0800d8cc */

void FUN_0800d8cc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_08005304 ^ 0x3156;
  uVar1 = FUN_0800d5ea();
  if (uVar1 == (uVar2 + 0x3692 & 0xffff)) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x0800d922 : FUN_0800d922 */

undefined8 FUN_0800d922(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_200001a8 == '\0') {
    iVar2 = FUN_0800d5ea();
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



/* ENTRY 0x0800d984 : FUN_0800d984 */

void FUN_0800d984(void)

{
  DAT_20000194 = DAT_20000194 + ((ushort)DAT_08005304 ^ 0x3156) + 0x3bcd;
  DAT_20000198 = DAT_20000198 + DAT_20000194;
  return;
}



/* ENTRY 0x0800da28 : FUN_0800da28 */

void FUN_0800da28(void)

{
  short sVar1;
  
  sVar1 = FUN_0800d5ea();
  DAT_20000196 = sVar1 + DAT_20000196;
  sVar1 = FUN_0800d5ea();
  DAT_20000196 = sVar1 + DAT_20000196;
  DAT_20000198 = DAT_20000198 - DAT_20000196;
  return;
}



/* ENTRY 0x0800da54 : FUN_0800da54 */

void FUN_0800da54(void)

{
  int iVar1;
  
  iVar1 = FUN_08023ad4();
  if (iVar1 == 0) {
    FUN_08023c04();
    FUN_08023b78(1);
    FUN_08023ae8();
  }
  return;
}



/* ENTRY 0x0800da6c : FUN_0800da6c */

void FUN_0800da6c(void)

{
  FUN_08023c04();
  FUN_08023a88(0x35);
  FUN_08023b30(&DWORD_0800830c,0xfee1b00f);
  FUN_08023ae8();
  return;
}



/* ENTRY 0x0800da9c : FUN_0800da9c */

undefined4 FUN_0800da9c(void)

{
  if (diag_BOOTVERSION < 0x1010603) {
    FUN_08023c04();
    FUN_08023a88(0x35);
    FUN_08023b30(&DWORD_08008304,0);
    FUN_08023ae8();
  }
  return 0;
}



/* ENTRY 0x0800dac8 : FUN_0800dac8 */

undefined4 FUN_0800dac8(void)

{
  FUN_08023c04();
  FUN_08023a88(0x35);
  FUN_08023b30(0x803d800,0x28635690);
  FUN_08023ae8();
  return 0;
}



/* ENTRY 0x0800dae8 : FUN_0800dae8 */

undefined4 FUN_0800dae8(void)

{
  FUN_08023c04();
  FUN_08023a88(0x35);
  FUN_08023a94(0x803d800);
  FUN_08023ae8();
  return 0;
}



/* ENTRY 0x0800db06 : FUN_0800db06 */

/* WARNING: Removing unreachable block (ram,0x0800db74) */
/* WARNING: Removing unreachable block (ram,0x0800db7e) */
/* WARNING: Removing unreachable block (ram,0x0800db8a) */
/* WARNING: Removing unreachable block (ram,0x0800db82) */
/* WARNING: Removing unreachable block (ram,0x0800db94) */
/* WARNING: Removing unreachable block (ram,0x0800db9e) */
/* WARNING: Removing unreachable block (ram,0x0800db9a) */
/* WARNING: Removing unreachable block (ram,0x0800db7a) */
/* WARNING: Removing unreachable block (ram,0x0800db6a) */
/* WARNING: Removing unreachable block (ram,0x0800db70) */
/* WARNING: Removing unreachable block (ram,0x0800db56) */

undefined4 FUN_0800db06(void)

{
  return 1;
}



/* ENTRY 0x0800dba2 : FUN_0800dba2 */

/* WARNING: Removing unreachable block (ram,0x0800dc0c) */
/* WARNING: Removing unreachable block (ram,0x0800dc02) */
/* WARNING: Removing unreachable block (ram,0x0800dc08) */
/* WARNING: Removing unreachable block (ram,0x0800dbee) */

undefined4 FUN_0800dba2(void)

{
  return 1;
}



/* ENTRY 0x0800dc6c : FUN_0800dc6c */

void FUN_0800dc6c(void)

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
  
  FUN_08023f18(0x1000);
  FUN_08023f18(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08023c80(&DAT_40010800,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08023c80(&DAT_40010800,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_08023c80(&DAT_40010800,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_080241b8(&DAT_40013000,&local_1c);
  FUN_08024190(&DAT_40013000,1);
  DAT_40010810 = 0x10;
  return;
}



/* ENTRY 0x0800dd22 : FUN_0800dd22 */

void FUN_0800dd22(void)

{
  ushort uVar1;
  
  FUN_08024190(&DAT_40013000,0);
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 & 0xffc7;
  uVar1 = DAT_40013000;
  DAT_40013000 = uVar1 | 8;
  FUN_08024190(&DAT_40013000,1);
  return;
}



/* ENTRY 0x0800dd4e : FUN_0800dd4e */

undefined1 FUN_0800dd4e(undefined2 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  cVar2 = -1;
  do {
    iVar3 = FUN_080241a2(&DAT_40013000,2);
    if (iVar3 != 0) {
      DAT_4001300c = param_1;
      cVar2 = -1;
      do {
        iVar3 = FUN_080241a2(&DAT_40013000,1);
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



/* ENTRY 0x0800ddc0 : FUN_0800ddc0 */

undefined4 FUN_0800ddc0(undefined4 param_1,undefined4 param_2)

{
  DAT_40010814 = 0x10;
  FUN_0800dd4e(param_1);
  FUN_0800dd4e(param_2);
  DAT_40010810 = 0x10;
  return 1;
}



/* ENTRY 0x0800dde6 : FUN_0800dde6 */

undefined4 FUN_0800dde6(uint param_1)

{
  undefined4 uVar1;
  
  DAT_40010814 = 0x10;
  FUN_0800dd4e(param_1 | 0x80);
  uVar1 = FUN_0800dd4e(0xff);
  DAT_40010810 = 0x10;
  return uVar1;
}



/* ENTRY 0x0800de10 : FUN_0800de10 */

undefined8 FUN_0800de10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800dd4e(0xbb);
  for (; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = FUN_0800dd4e(0xff);
    *(undefined1 *)((int)local_20 + uVar2) = uVar1;
  }
  DAT_40010810 = 0x10;
  FUN_08023444(param_1,local_20,0xe);
  return CONCAT44(local_20[1],local_20[0]);
}



/* ENTRY 0x0800de4e : FUN_0800de4e */

void FUN_0800de4e(undefined4 param_1)

{
  FUN_0800dde6(param_1);
  return;
}



/* ENTRY 0x0800de5a : FUN_0800de5a */

void FUN_0800de5a(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_0800de4e(0x1c);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b0 = 0x2000;
      goto code_r0x0800deac;
    }
    if (uVar2 == 2) {
      DAT_200001b0 = 0x1000;
      goto code_r0x0800deac;
    }
    if (uVar2 == 3) {
      DAT_200001b0 = 0x800;
      goto code_r0x0800deac;
    }
  }
  DAT_200001b0 = 0x4000;
code_r0x0800deac:
  bVar1 = FUN_0800de4e(0x1b);
  uVar2 = (bVar1 & 0x1f) >> 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      DAT_200001b2 = 0x28f;
      return;
    }
    if (uVar2 == 2) {
      DAT_200001b2 = 0x147;
      return;
    }
    if (uVar2 == 3) {
      DAT_200001b2 = 0xa3;
      return;
    }
  }
  DAT_200001b2 = 0x51e;
  return;
}



/* ENTRY 0x0800def8 : FUN_0800def8 */

void FUN_0800def8(undefined4 param_1,undefined4 param_2)

{
  FUN_0800ddc0(param_1,param_2);
  return;
}



/* ENTRY 0x0800df08 : FUN_0800df08 */

bool FUN_0800df08(void)

{
  int iVar1;
  
  FUN_0800dc6c();
  do {
    iVar1 = FUN_0800def8(0x6b,0x80);
  } while (iVar1 == 0);
  FUN_08008e00(0xf);
  do {
    iVar1 = FUN_0800def8(0x6b,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800def8(0x19,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800def8(0x1a,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800def8(0x1c,0);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800def8(0x1b,8);
  } while (iVar1 == 0);
  do {
    iVar1 = FUN_0800def8(0x38,1);
  } while (iVar1 == 0);
  iVar1 = FUN_0800de4e(0x75);
  if (iVar1 != 0) {
    FUN_0800de5a();
    FUN_0800dd22();
  }
  return iVar1 != 0;
}



/* ENTRY 0x0800df90 : FUN_0800df90 */

void FUN_0800df90(undefined4 param_1)

{
  FUN_0800de10(param_1);
  return;
}



/* ENTRY 0x0800df9c : FUN_0800df9c */

undefined4 FUN_0800df9c(int *param_1)

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
  FUN_0800df90(local_2c);
  uStack_1b = SUB41(local_2c._0_4_,1);
  local_1c = (undefined1)local_2c._0_4_;
  *param_1 = ((int)CONCAT11(local_1c,uStack_1b) << 0xc) / (int)(uint)DAT_200001b0;
  uStack_19 = SUB41(local_2c._0_4_,3);
  uStack_1a = SUB41(local_2c._0_4_,2);
  param_1[1] = ((int)CONCAT11(uStack_1a,uStack_19) << 0xc) / (int)(uint)DAT_200001b0;
  local_17 = SUB41(local_2c._4_4_,1);
  local_18 = (undefined1)local_2c._4_4_;
  param_1[2] = ((int)CONCAT11(local_18,local_17) << 0xc) / (int)(uint)DAT_200001b0;
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



/* ENTRY 0x0800e05c : FUN_0800e05c */

void FUN_0800e05c(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(8,1);
  local_8 = 0x10030100;
  FUN_08023c80(&DAT_40010c00,&local_8);
  return;
}



/* ENTRY 0x0800e098 : FUN_0800e098 */

void FUN_0800e098(undefined1 param_1)

{
  DAT_200001c8 = param_1;
  return;
}



/* ENTRY 0x0800e09e : FUN_0800e09e */

void FUN_0800e09e(undefined1 param_1)

{
  DAT_200001c9 = param_1;
  return;
}



/* ENTRY 0x0800e0a4 : FUN_0800e0a4 */

void FUN_0800e0a4(void)

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



/* ENTRY 0x0800e158 : FUN_0800e158 */

void FUN_0800e158(void)

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



/* ENTRY 0x0800e2b8 : FUN_0800e2b8 */

undefined4 FUN_0800e2b8(int param_1)

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



/* ENTRY 0x0800e310 : FUN_0800e310 */

bool FUN_0800e310(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d0 == '\x02';
  if (bVar1) {
    DAT_200001d0 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e326 : FUN_0800e326 */

bool FUN_0800e326(void)

{
  bool bVar1;
  
  bVar1 = DAT_200001d6 != '\0';
  if (bVar1) {
    DAT_200001d6 = '\0';
  }
  return bVar1;
}



/* ENTRY 0x0800e34e : FUN_0800e34e */

void FUN_0800e34e(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(0x10,1);
  local_8 = 0x28032000;
  FUN_08023c80(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0800e3ac : FUN_0800e3ac */

int FUN_0800e3ac(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)(uVar2 * 0xce4) / (int)(0x1001 - uVar2) & 0xffffU) <=
       (uint)(ushort)(&DAT_08026ce4)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e3e6 : FUN_0800e3e6 */

int FUN_0800e3e6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) >> 4;
  for (uVar1 = 0;
      (uVar1 < 0xd7 &&
      (((int)((0x1000 - uVar2) * 0xce4) / (int)(uVar2 + 1) & 0xffffU) <=
       (uint)(ushort)(&DAT_08026ce4)[uVar1])); uVar1 = uVar1 + 1 & 0xff) {
  }
  return uVar1 - 0xe;
}



/* ENTRY 0x0800e420 : FUN_0800e420 */

int FUN_0800e420(uint param_1)

{
  return (int)(short)((short)((int)(0x6e2 - ((param_1 & 0xffff) >> 4)) / 5) + 0x19);
}



/* ENTRY 0x0800e43a : FUN_0800e43a */

int FUN_0800e43a(int param_1)

{
  DAT_200001da = (short)(((param_1 * 100) / 0x154 + 0x675 + DAT_200001da * 9) / 10);
  return (int)(DAT_200001da / 100);
}



/* ENTRY 0x0800e47e : FUN_0800e47e */

undefined4 FUN_0800e47e(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  FUN_08023c04();
  FUN_08023a88(0x34);
  DAT_200001dc = FUN_08023a94((&DAT_08026e94)[param_1]);
  DAT_20003268 = 0;
  DAT_2000326c = 0;
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = CARRY4(DAT_20003268,*(uint *)(&DAT_20003160 + uVar1 * 4));
    DAT_20003268 = DAT_20003268 + *(uint *)(&DAT_20003160 + uVar1 * 4);
    DAT_2000326c = DAT_2000326c + (uint)bVar2;
    DAT_200001dc = FUN_08023b30((&DAT_08026e94)[param_1] + uVar1 * 4,
                                *(undefined4 *)(&DAT_20003160 + uVar1 * 4));
  }
  DAT_200001dc = FUN_08023b30((&DAT_08026e94)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003160 + uVar1 * 4));
  uVar1 = uVar1 + 1 & 0xff;
  DAT_200001dc = FUN_08023b30((&DAT_08026e94)[param_1] + uVar1 * 4,
                              *(undefined4 *)(&DAT_20003160 + uVar1 * 4));
  FUN_08023a88(0x34);
  FUN_08023ae8();
  return 0;
}



/* ENTRY 0x0800e526 : FUN_0800e526 */

bool FUN_0800e526(int param_1)

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
    local_124[uVar2] = *(uint *)((&DAT_08026e94)[param_1] + uVar2 * 4);
    bVar3 = CARRY4(local_1c,local_124[uVar2]);
    local_1c = local_1c + local_124[uVar2];
    local_18 = local_18 + bVar3;
  }
  puVar1 = (uint *)((&DAT_08026e94)[param_1] + uVar2 * 4);
  return local_1c == *puVar1 && local_18 == puVar1[1];
}



/* ENTRY 0x0800e588 : FUN_0800e588 */

undefined4 FUN_0800e588(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x42; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(&DAT_20003160 + uVar1 * 4) =
         *(undefined4 *)((&DAT_08026e94)[param_1] + uVar1 * 4);
  }
  return 1;
}



/* ENTRY 0x0800e5aa : FUN_0800e5aa */

undefined4 FUN_0800e5aa(void)

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
      (&DAT_200031c2)[uVar2] = local_ae[uVar2];
    }
    uVar1 = 1;
  }
  else {
    for (uVar2 = 0; uVar2 < 0x42; uVar2 = uVar2 + 1 & 0xff) {
      local_110[uVar2] = *(undefined4 *)(uVar2 * 4 + 0x803c800);
    }
    if ((local_ae[0] == 'K') && (local_ae[1] == 'S')) {
      for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_200031c2)[uVar2] = local_ae[uVar2];
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x0800e63c : FUN_0800e63c */

undefined4 FUN_0800e63c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e526(1);
  if (iVar1 == 0) {
    FUN_0800e47e(1);
    iVar1 = FUN_0800e526(1);
    if (iVar1 == 0) {
      iVar1 = FUN_0800e526(0);
      if (iVar1 == 0) {
        FUN_0800e47e(0);
        iVar1 = FUN_0800e526(0);
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
      FUN_0800e47e(0);
      iVar1 = FUN_0800e526(0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    FUN_0800e47e(0);
    iVar1 = FUN_0800e526(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0800e47e(1);
      iVar1 = FUN_0800e526(1);
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



/* ENTRY 0x0800e6b4 : FUN_0800e6b4 */

undefined4 FUN_0800e6b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800e526(0);
  if (iVar1 == 0) {
    iVar1 = FUN_0800e526(1);
    if (iVar1 == 0) {
      FUN_0800e5aa();
      uVar2 = 0;
    }
    else {
      FUN_0800e588(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_0800e588(0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ENTRY 0x0800e6ec : FUN_0800e6ec */

void FUN_0800e6ec(void)

{
  FUN_08023c04();
  FUN_08023a94(0x803a000);
  FUN_08023ae8();
  DAT_200001e0 = 0;
  DAT_200001de = 0;
  return;
}



/* ENTRY 0x0800e70a : FUN_0800e70a */

bool FUN_0800e70a(int param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_200001de;
  if (DAT_200001de < 0x3ff) {
    DAT_200001e0 = DAT_200001e0 + param_1;
    FUN_08023c04();
    FUN_08023af8((uint)DAT_200001de * 2 + 0x803a000,param_1);
    FUN_08023ae8();
    DAT_200001de = DAT_200001de + 1;
  }
  else {
    FUN_08023c04();
    FUN_08023a94(0x803a000);
    FUN_08023ae8();
    DAT_200001e0 = DAT_200001e0 + param_1 * 10;
    DAT_200031c0 = (undefined2)((uint)DAT_200001e0 >> 0x10);
    DAT_200031be = (undefined2)DAT_200001e0;
    DAT_200001de = 0;
  }
  return 0x3fe < uVar1;
}



/* ENTRY 0x0800e78c : FUN_0800e78c */

void FUN_0800e78c(void)

{
  uint uVar1;
  
  DAT_200001e0 = CONCAT22(DAT_200031c0,DAT_200031be);
  for (uVar1 = 0;
      (uVar1 < 0x400 && (DAT_200001de = (undefined2)uVar1, *(short *)(uVar1 * 2 + 0x803a000) != -1))
      ; uVar1 = uVar1 + 1 & 0xffff) {
    DAT_200001e0 = DAT_200001e0 + (uint)*(ushort *)(uVar1 * 2 + 0x803a000) * 10;
  }
  return;
}



/* ENTRY 0x0800e800 : FUN_0800e800 */

void FUN_0800e800(void)

{
  int iVar1;
  
  iVar1 = FUN_0800df08();
  if (iVar1 == 0) {
    DAT_2000327c = DAT_2000327c | 0x40;
  }
  FUN_08012b28();
  FUN_08010eb2();
  DAT_200032a4 = 71000;
  DAT_200032a8 = 71000;
  return;
}



/* ENTRY 0x0800e826 : FUN_0800e826 */

void FUN_0800e826(void)

{
  FUN_08010826();
  FUN_08010138();
  FUN_0800894a(0x18);
  diag_motorstep = 1;
  return;
}



/* ENTRY 0x0800e840 : FUN_0800e840 */

void FUN_0800e840(void)

{
  int iVar1;
  
  iVar1 = DAT_20003284;
  if (DAT_20003284 < 0) {
    iVar1 = -DAT_20003284;
  }
  if ((iVar1 < 0x12d) || (DAT_200005bc == '\0')) {
    DAT_20000226 = 0;
  }
  else if (DAT_20000226 < 100) {
    DAT_20000226 = DAT_20000226 + 1;
  }
  if (((byte)DAT_2000327e & 0x10) == 0) {
    if (DAT_20000226 < 0x3c) {
      iVar1 = (int)DAT_20000318;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_buscurlmt_vq < iVar1) {
        if (DAT_20000214 < 800) {
          DAT_20000214 = DAT_20000214 + 1;
        }
        iVar1 = DAT_20003284;
        if (DAT_20003284 < 0) {
          iVar1 = -DAT_20003284;
        }
        if ((iVar1 < 500) && (DAT_20000214 < 600)) {
          DAT_20000214 = DAT_20000214 + 0x1e;
        }
      }
      else if (3 < DAT_20000214) {
        DAT_20000214 = DAT_20000214 + -3;
      }
      iVar1 = (int)DAT_20000318;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (diag_PhcurrLimit_Vq_P < iVar1) {
        if (DAT_20000218 < 800) {
          DAT_20000218 = DAT_20000218 + 1;
        }
        iVar1 = DAT_20003284;
        if (DAT_20003284 < 0) {
          iVar1 = -DAT_20003284;
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
    DAT_2000327c = DAT_2000327c & 0xfffb;
  }
  else {
    diag_BuscurLimit = (diag_BuscurLimit_set * (0x44c - DAT_20000214)) / 900;
    DAT_2000327c = DAT_2000327c | 4;
  }
  if (DAT_20000218 < 0xc9) {
    iVar1 = DAT_2000021c + 900;
  }
  else {
    iVar1 = (0x44c - DAT_20000218) + DAT_2000021c;
  }
  diag_PhcurrLimit = (diag_PhcurrLimit_set * iVar1) / 900;
  iVar1 = (int)DAT_20000318;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (diag_buscurlmt_vq < iVar1) {
LAB_0800eaf2:
    if (DAT_200002d4 != '\x01') {
      if (DAT_20000220 < 100) {
        DAT_20000220 = DAT_20000220 + 1;
      }
      else {
        DAT_2000327c = DAT_2000327c | 2;
      }
      goto LAB_0800eb44;
    }
  }
  else {
    iVar1 = (int)DAT_20000318;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (diag_PhcurrLimit_Vq_P < iVar1) goto LAB_0800eaf2;
  }
  if (DAT_20000220 < 0xb) {
    DAT_2000327c = DAT_2000327c & 0xfffd;
  }
  else {
    DAT_20000220 = DAT_20000220 + -1;
  }
LAB_0800eb44:
  if ((((DAT_2000327c & 6) == 0) || (((byte)DAT_2000327e & 0x10) == 0)) || (DAT_20003288 != '\0')) {
    DAT_20000222 = 0;
  }
  else if (DAT_20000222 < 0x4b0) {
    DAT_20000222 = DAT_20000222 + 1;
  }
  else {
    FUN_0800e826();
    DAT_20000222 = 0;
  }
  return;
}



/* ENTRY 0x0800eb8c : FUN_0800eb8c */

void FUN_0800eb8c(void)

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
  
  iVar4 = DAT_20003284;
  iVar5 = diag_angleoffset_int;
  local_30 = DAT_20003290;
  iVar8 = 1;
  if (DAT_20003284 < 0) {
    iVar8 = -1;
  }
  if (DAT_20003290 < 0x2329) {
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
  if (DAT_200032a4 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032a4;
  }
  if (DAT_200032a8 < diag_g_winespeed_lv) {
    diag_g_winespeed_lv = DAT_200032a8;
  }
  if (DAT_2000329c < 0x64c9) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((DAT_2000329c + -0x64c8) * 100) / 30000;
    iVar2 = (iVar2 * DAT_200001fc * iVar2) / 400;
  }
  iVar6 = DAT_200001fc;
  if ((iVar2 <= DAT_200001fc) && (iVar6 = iVar2, iVar2 < 0)) {
    iVar6 = 0;
  }
  iVar2 = DAT_20003284;
  if (DAT_20003284 < 0) {
    iVar2 = -DAT_20003284;
  }
  if (diag_g_winespeed_lv + -0x3d4 < iVar2) {
    iVar2 = DAT_20003284;
    if (DAT_20003284 < 0) {
      iVar2 = -DAT_20003284;
    }
    iVar2 = ((iVar2 - (diag_g_winespeed_lv + -0x3d4)) * 100) / 1000;
    lVar1 = (longlong)DAT_200001fc * (longlong)iVar2 * (longlong)iVar2;
    local_48 = (undefined4)lVar1;
    uStack_44 = (undefined4)((ulonglong)lVar1 >> 0x20);
    iVar2 = FUN_080233be(local_48,uStack_44,90000,0);
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



/* ENTRY 0x0800eea8 : FUN_0800eea8 */

void FUN_0800eea8(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  DAT_20003274 = DAT_20003274 + 1;
  if (1 < diag_motionstep) {
    if ((DAT_200033ac < DAT_200032b4 + -0x96) && (DAT_200033ac < 0xa000)) {
      DAT_200033ac = DAT_200033ac + 100;
    }
    else if ((DAT_200032b4 + 0x96 < DAT_200033ac) && (-0xa000 < DAT_200033ac)) {
      DAT_200033ac = DAT_200033ac + -100;
    }
  }
  if (DAT_200032c0 != 0) {
    DAT_200032c0 = DAT_200032c0 + -1;
  }
  switch(diag_motionstep) {
  case 0:
    DAT_200002d4 = 7;
    iVar2 = FUN_08010064(0);
    if ((iVar2 == 1) && (DAT_20000371 == 1)) {
      diag_motionstep = DAT_20000371;
      DAT_200002d4 = DAT_20000371;
      if (DAT_2000032c != '\0') {
        DAT_2000327c = DAT_2000327c | 0x10;
      }
    }
    break;
  case 1:
    if ((DAT_2000327e & 1) != 0) {
      diag_rollptag_auto = 0x28000;
      diag_motionstep = 2;
    }
    break;
  case 2:
    if ((DAT_2000327e & 8) != 0) {
      diag_motionstep = 8;
    }
    if (diag_acce_z < -0x400) {
      DAT_200032c0 = 500;
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
        iVar2 = DAT_20003284;
        if (DAT_20003284 < 0) {
          iVar2 = -DAT_20003284;
        }
        if (((iVar2 < 2000) && (((byte)DAT_2000327e & 5) == 5)) &&
           (((DAT_2000327e & 10) == 0 &&
            ((((DAT_2000327c & 1) == 0 && (DAT_200002d4 == 1)) && (DAT_200032c0 == 0)))))) {
          DAT_200002d4 = 4;
          diag_motionstep = 3;
          diag_angleoffset_int = -diag_pintch;
          DAT_200032b0 = 0;
          FUN_0800894a(3);
          diag_rollptag_auto = 0x28000;
          FUN_08021bb2(4);
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
      if (((iVar2 < 0x28000) && (((byte)DAT_2000327e & 4) == 4)) && ((DAT_2000327e & 8) == 0)) {
        if ((DAT_2000327e & 0x20) == 0) {
          if (DAT_200032b0 + 0x200 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -200;
          }
          else if (diag_angleoffset_int < DAT_200032b0 + -0x200) {
            diag_angleoffset_int = diag_angleoffset_int + 200;
          }
          else {
            diag_angleoffset_int = DAT_200032b0;
            FUN_0800894a(1);
            diag_rollptag_auto = 0x28000;
            diag_motionstep = 4;
          }
        }
        else {
          diag_motionstep = 7;
          FUN_08021bb2(0xe1);
        }
        break;
      }
    }
    FUN_08010826();
    diag_motionstep = 2;
    FUN_08010138();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08021bb2(0xe0);
    DAT_200032c0 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f276;
        }
        if ((((byte)DAT_2000327e & 4) == 4) && ((DAT_2000327e & 8) == 0)) {
          FUN_0800eb8c();
          iVar2 = DAT_20003284;
          if (DAT_20003284 < 0) {
            iVar2 = -DAT_20003284;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003284;
            if (DAT_20003284 < 0) {
              iVar2 = -DAT_20003284;
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
          else if (diag_rollptag_auto < DAT_200032b8) {
            diag_rollptag_auto = diag_rollptag_auto + 1000;
          }
          if ((DAT_2000327e & 0x20) == 0) {
            diag_motionstep = 4;
          }
          else {
            diag_motionstep = 7;
            FUN_08021bb2(0xe1);
          }
          break;
        }
      }
    }
LAB_0800f276:
    DAT_200032ce = 1;
    FUN_08010826();
    diag_motionstep = 2;
    FUN_08010138();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08021bb2(0xe0);
    DAT_200032c0 = 200;
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
          if (0x27fff < iVar2) goto LAB_0800f446;
        }
        if ((((byte)DAT_2000327e & 4) == 4) && ((DAT_2000327e & 8) == 0)) {
          iVar2 = DAT_20003284;
          if (DAT_20003284 < 0) {
            iVar2 = -DAT_20003284;
          }
          if (iVar2 < 6000) {
            iVar2 = DAT_20003284;
            if (DAT_20003284 < 0) {
              iVar2 = -DAT_20003284;
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
          else if (diag_rollptag_auto < DAT_200032b8) {
            diag_rollptag_auto = diag_rollptag_auto + 500;
          }
          if (DAT_20003284 < 0x2ee1) {
            if (DAT_20003284 < 1) {
              if (DAT_20003284 == 0) {
                DAT_200032b0 = -0x19000;
              }
              else if (DAT_20003284 < -11999) {
                DAT_200032b0 = -0x12000;
              }
              else {
                DAT_200032b0 = -0x19000;
              }
            }
            else {
              DAT_200032b0 = 0x19000;
            }
          }
          else {
            DAT_200032b0 = 0x12000;
          }
          if (DAT_200032b0 + 0x400 < diag_angleoffset_int) {
            diag_angleoffset_int = diag_angleoffset_int + -100;
          }
          else if (diag_angleoffset_int < DAT_200032b0 + -0x400) {
            diag_angleoffset_int = diag_angleoffset_int + 100;
          }
          else {
            diag_angleoffset_int = DAT_200032b0;
          }
          break;
        }
      }
    }
LAB_0800f446:
    DAT_200032ce = 1;
    FUN_08010826();
    diag_motionstep = 2;
    FUN_08010138();
    FUN_0800894a(0x30);
    diag_motorstep = 1;
    FUN_08021bb2(0xe0);
    DAT_200032c0 = 200;
    break;
  case 8:
    cVar1 = '\x05';
    while (cVar1 != '\0') {
      DAT_200032ce = 1;
      FUN_08008e00(0x3c);
      iVar2 = FUN_0800fdd2();
      if (0x800 < iVar2) {
        cVar1 = cVar1 + -1;
      }
    }
    FUN_0800fc24();
    diag_motionstep = 9;
    break;
  case 9:
    FUN_0800894a(0xf0);
    FUN_08008e00(0xa0);
    DAT_2000327e = DAT_2000327e & 0xfff7;
    diag_motionstep = 10;
    break;
  case 10:
    break;
  case 0xb:
  }
  if (1 < diag_motionstep) {
    if (DAT_2000032c != '\0') {
      DAT_2000327c = DAT_2000327c | 0x10;
    }
    if (DAT_2000032a != '\0') {
      DAT_2000327c = DAT_2000327c | 0x20;
    }
    if (DAT_200005f4 == '\x01') {
      DAT_2000327e = DAT_2000327e | 1;
    }
    else {
      DAT_2000327e = DAT_2000327e & 0xfffe;
    }
  }
  if (DAT_20000710 == 0) {
    DAT_2000327e = DAT_2000327e | 0x40;
  }
  else if (DAT_20003288 == '\0') {
    DAT_2000327e = DAT_2000327e & 0xffbf;
  }
  FUN_0800e840();
  uVar5 = CONCAT44(DAT_2000330c,DAT_20003308);
  iVar2 = DAT_20003284;
  if (DAT_20003284 < 0) {
    iVar2 = -DAT_20003284;
  }
  if (iVar2 < 2000) {
    iVar2 = DAT_200032f8;
    if (DAT_200032f8 < 0) {
      iVar2 = -DAT_200032f8;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003308 * 4999);
      uVar3 = DAT_200032f8 * 5000;
      uVar5 = FUN_080233be(uVar4 + uVar3,
                           DAT_2000330c * 4999 + (int)((ulonglong)DAT_20003308 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
    }
    uVar6 = CONCAT44(DAT_20003314,DAT_20003310);
    DAT_2000330c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003308 = (uint)uVar5;
    iVar2 = DAT_200032fc;
    if (DAT_200032fc < 0) {
      iVar2 = -DAT_200032fc;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003310 * 4999);
      uVar3 = DAT_200032fc * 5000;
      uVar6 = FUN_080233be(uVar4 + uVar3,
                           DAT_20003314 * 4999 + (int)((ulonglong)DAT_20003310 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar5 = CONCAT44(DAT_2000330c,DAT_20003308);
    }
    uVar7 = CONCAT44(DAT_2000331c,DAT_20003318);
    DAT_20003314 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003310 = (uint)uVar6;
    DAT_2000330c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003308 = (uint)uVar5;
    iVar2 = DAT_20003300;
    if (DAT_20003300 < 0) {
      iVar2 = -DAT_20003300;
    }
    if (iVar2 < 500) {
      uVar4 = (uint)((ulonglong)DAT_20003318 * 4999);
      uVar3 = DAT_20003300 * 5000;
      uVar7 = FUN_080233be(uVar4 + uVar3,
                           DAT_2000331c * 4999 + (int)((ulonglong)DAT_20003318 * 4999 >> 0x20) +
                           ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3),5000,0);
      uVar6 = CONCAT44(DAT_20003314,DAT_20003310);
      uVar5 = CONCAT44(DAT_2000330c,DAT_20003308);
    }
    DAT_2000331c = (int)((ulonglong)uVar7 >> 0x20);
    DAT_20003318 = (uint)uVar7;
    DAT_20003314 = (int)((ulonglong)uVar6 >> 0x20);
    DAT_20003310 = (uint)uVar6;
    DAT_2000330c = (int)((ulonglong)uVar5 >> 0x20);
    DAT_20003308 = (uint)uVar5;
    diag_vttest_0_ = FUN_080233be(DAT_20003308,DAT_2000330c,5000,0);
    diag_vttest_1_ = FUN_080233be(DAT_20003310,DAT_20003314,5000,0);
    diag_vttest_2_ = FUN_080233be(DAT_20003318,DAT_2000331c,5000,0);
  }
  return;
}



/* ENTRY 0x0800f6a2 : FUN_0800f6a2 */

void FUN_0800f6a2(void)

{
  int iVar1;
  int iVar2;
  
  DAT_20003284 = ((diag_HallRSP * 0x13240) / 15000 + DAT_20003284 * 9) / 10;
  diag_Rpm = (short)(((diag_HallRSP * 0x29) / 0x2ee + diag_Rpm * 9) / 10);
  diag_BusCurrent = (diag_BusCurrent * 9 + DAT_20000320) / 10;
  DAT_20003290 = (DAT_20003290 * 9 + DAT_20000324) / 10;
  DAT_2000329c = FUN_0800afee((int)(short)diag_VD * (int)(short)diag_VD +
                              (int)(short)diag_VQ * (int)(short)diag_VQ);
  diag_motorstep = DAT_200002d4;
  if ((2 < diag_motionstep) && (diag_motionstep < 8)) {
    DAT_20000204 = (diag_BusCurrent / 10) * (DAT_20003290 / 100) + DAT_20000204;
    DAT_20000208 = DAT_20000208 + 1;
    if (0x31 < DAT_20000208) {
      DAT_20000208 = 0;
      diag_this_ws = DAT_20000204 / 500 + diag_this_ws;
      DAT_20000204 = 0;
    }
  }
  iVar1 = DAT_20003284;
  if (DAT_20003284 < 0) {
    iVar1 = -DAT_20003284;
  }
  if (iVar1 < 3000) {
    if (DAT_20003288 != '\0') {
      DAT_20003288 = DAT_20003288 + -1;
    }
  }
  else {
    DAT_20003288 = '\x1e';
  }
  if (diag_BusCurrent < 600) {
    if (DAT_20000200 == '\0') {
      iVar1 = DAT_20003294 - DAT_20003290;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < 0x65) && (2999 < DAT_20003290)) {
        DAT_20000200 = '\x01';
      }
      else {
        DAT_20003294 = (DAT_20003294 * 0x13 + DAT_20003290) / 0x14;
      }
    }
    else if (DAT_20003294 + 1 < DAT_20003290) {
      DAT_20003294 = DAT_20003294 + 1;
    }
    else if (DAT_20003290 + 1 < DAT_20003294) {
      DAT_20003294 = DAT_20003294 + -1;
    }
    else {
      DAT_20003294 = DAT_20003290;
    }
  }
  DAT_2000020a = (short)((DAT_2000020a * 9 + diag_g_average_iq) / 10);
  diag_buscurrcalc = (((int)DAT_2000020a / 10) * (diag_VQ / 10)) / (int)diag_IbusRateRT;
  iVar1 = (int)(short)(DAT_20003294 / 100);
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
  if (DAT_20000329 != '\0') {
    DAT_2000327c = DAT_2000327c | 0x80;
  }
  return;
}



/* ENTRY 0x0800fa8c : FUN_0800fa8c */

void FUN_0800fa8c(void)

{
  if (diag_motionstep != '\b') {
    FUN_0800fea6();
    FUN_0801017c();
  }
  return;
}



/* ENTRY 0x0800faa0 : FUN_0800faa0 */

bool FUN_0800faa0(void)

{
  if (DAT_20003288 == '\0') {
    DAT_2000327e = DAT_2000327e | 8;
  }
  return DAT_20003288 == '\0';
}



/* ENTRY 0x0800faba : FUN_0800faba */

void FUN_0800faba(int param_1)

{
  if (param_1 == 7) {
    DAT_2000327e = DAT_2000327e | 0x20;
  }
  return;
}



/* ENTRY 0x0800facc : FUN_0800facc */

void FUN_0800facc(void)

{
  FUN_0800faba(7);
  return;
}



/* ENTRY 0x0800fad6 : FUN_0800fad6 */

undefined4 FUN_0800fad6(void)

{
  return diag_fus_roll;
}



/* ENTRY 0x0800fade : FUN_0800fade */

undefined4 FUN_0800fade(void)

{
  return diag_pintch;
}



/* ENTRY 0x0800fae6 : FUN_0800fae6 */

undefined4 FUN_0800fae6(void)

{
  return diag_rollptag_auto;
}



/* ENTRY 0x0800faec : FUN_0800faec */

void FUN_0800faec(int param_1)

{
  if (param_1 < 0xa001) {
    if (param_1 < -0xa000) {
      param_1 = -0xa000;
    }
  }
  else {
    param_1 = 0xa000;
  }
  if (DAT_20003288 == '\0') {
    DAT_200032b4 = param_1;
  }
  return;
}



/* ENTRY 0x0800fb0c : FUN_0800fb0c */

void FUN_0800fb0c(int param_1)

{
  if (param_1 < 0x46001) {
    if (param_1 < 0x28000) {
      param_1 = 0x28000;
    }
  }
  else {
    param_1 = 0x46000;
  }
  if (DAT_20003288 == '\0') {
    DAT_200032b8 = param_1;
  }
  return;
}



/* ENTRY 0x0800fb2e : FUN_0800fb2e */

void FUN_0800fb2e(undefined1 param_1)

{
  DAT_200032cd = param_1;
  return;
}



/* ENTRY 0x0800fb36 : FUN_0800fb36 */

bool FUN_0800fb36(void)

{
  return diag_motionstep == '\x02';
}



/* ENTRY 0x0800fb9c : FUN_0800fb9c */

void FUN_0800fb9c(int *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  }
  return;
}



/* ENTRY 0x0800fbc8 : FUN_0800fbc8 */

uint FUN_0800fbc8(undefined4 *param_1,int param_2)

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



/* ENTRY 0x0800fc24 : FUN_0800fc24 */

undefined4 FUN_0800fc24(void)

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
  FUN_08023532(&local_64,0x1c);
  FUN_08008e00(1);
  local_28 = 0;
  while ((int)local_28 < 100) {
    iVar2 = FUN_0800df9c(&local_64);
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
  DAT_200033b0 = FUN_080233be(local_38,local_34,sVar1,0);
  DAT_200033b4 = FUN_080233be(local_40,local_3c,sVar1,0);
  DAT_200033b8 = FUN_080233be(local_48,local_44,sVar1,0);
  DAT_200033bc = FUN_080233be(uVar3,iVar4,sVar1,0);
  DAT_200033c0 = FUN_080233be(uVar5,iVar6,sVar1,0);
  DAT_200033c4 = FUN_080233be(local_30,local_2c,sVar1,0);
  iVar4 = DAT_200033b0;
  if (DAT_200033b0 < 0) {
    iVar4 = -DAT_200033b0;
  }
  if (iVar4 < 8000) {
    iVar4 = DAT_200033b4;
    if (DAT_200033b4 < 0) {
      iVar4 = -DAT_200033b4;
    }
    if (iVar4 < 8000) {
      iVar4 = DAT_200033b8;
      if (DAT_200033b8 < 0) {
        iVar4 = -DAT_200033b8;
      }
      if (iVar4 < 8000) {
        iVar4 = DAT_200033bc;
        if (DAT_200033bc < 0) {
          iVar4 = -DAT_200033bc;
        }
        if (iVar4 < 80000) {
          iVar4 = DAT_200033c0;
          if (DAT_200033c0 < 0) {
            iVar4 = -DAT_200033c0;
          }
          if (iVar4 < 80000) {
            iVar4 = DAT_200033c4;
            if (DAT_200033c4 < 0) {
              iVar4 = -DAT_200033c4;
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



/* ENTRY 0x0800fdd2 : FUN_0800fdd2 */

undefined4 FUN_0800fdd2(void)

{
  FUN_0800df9c(&DAT_200032d0);
  return DAT_200032d8;
}



/* ENTRY 0x0800fe4c : FUN_0800fe4c */

void FUN_0800fe4c(void)

{
  FUN_0800fb9c(&DAT_20000228);
  FUN_0800fb9c(&DAT_20000234);
  FUN_0800fb9c(&DAT_20000240);
  FUN_0800fb9c(&DAT_2000024c);
  FUN_0800fb9c(&DAT_20000258);
  FUN_0800fb9c(&DAT_20000264);
  FUN_08008944(2000);
  FUN_0800894a(0xf0);
  DAT_200033ac = 0;
  DAT_20003308 = 0;
  DAT_2000330c = 0;
  DAT_20003310 = 0;
  DAT_20003314 = 0;
  DAT_20003318 = 0;
  DAT_2000331c = 0;
  return;
}



/* ENTRY 0x0800fea6 : FUN_0800fea6 */

void FUN_0800fea6(void)

{
  int iVar1;
  
  FUN_0800df9c(&DAT_200032d0);
  DAT_2000027c = DAT_200032d0 - DAT_200033b0;
  DAT_20000280 = DAT_200032d4 - DAT_200033b4;
  DAT_20000284 = DAT_200032d8;
  DAT_20000270 = DAT_200032e0 - DAT_200033bc;
  DAT_20000274 = DAT_200032e4 - DAT_200033c0;
  DAT_20000278 = DAT_200032e8 - DAT_200033c4;
  diag_acce_x = FUN_0800fbc8(&DAT_20000228,DAT_2000027c);
  diag_acce_y = FUN_0800fbc8(&DAT_20000234,DAT_20000280);
  diag_acce_z = FUN_0800fbc8(&DAT_20000240,DAT_20000284);
  DAT_200032f8 = FUN_0800fbc8(&DAT_2000024c,-DAT_20000274);
  DAT_200032fc = FUN_0800fbc8(&DAT_20000258,DAT_20000270);
  DAT_20003300 = FUN_0800fbc8(&DAT_20000264,DAT_20000278);
  iVar1 = FUN_080233be(DAT_20003308,DAT_2000330c,5000,0);
  diag_gyro_x = DAT_200032f8 - iVar1;
  iVar1 = FUN_080233be(DAT_20003310,DAT_20003314,5000,0);
  diag_gyro_y = DAT_200032fc - iVar1;
  iVar1 = FUN_080233be(DAT_20003318,DAT_2000331c,5000,0);
  diag_gyro_z = DAT_20003300 - iVar1;
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
  FUN_08008688(&DAT_200032f8);
  return;
}



/* ENTRY 0x08010064 : FUN_08010064 */

undefined4 FUN_08010064(int param_1)

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



/* ENTRY 0x08010128 : FUN_08010128 */

void FUN_08010128(undefined4 param_1)

{
  FUN_08023444(&diag_pidk_acc,param_1,0x10);
  return;
}



/* ENTRY 0x08010138 : FUN_08010138 */

void FUN_08010138(void)

{
  DAT_20000294 = 0;
  DAT_20000298 = 0;
  DAT_2000029c = 0;
  diag_angleoffset_int = 0;
  DAT_200002a4 = 0;
  DAT_200002a8 = 0;
  DAT_200002bc = 0;
  DAT_200002b8 = 0;
  FUN_0800fb9c(&DAT_200002c0);
  DAT_200002ac = 0;
  diag_commbospeed0 = 0;
  diag_commbopcurr = 0;
  FUN_08011074();
  DAT_2000028c = 0;
  return;
}



/* ENTRY 0x0801017c : FUN_0801017c */

void FUN_0801017c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((((diag_motionstep == '\x03') || (diag_motionstep == '\x04')) || (diag_motionstep == '\a')) &&
     ((DAT_200002d4 == '\x03' || (DAT_200002d4 == '\x04')))) {
    DAT_20000298 = diag_pintch + diag_angleoffset_int;
    DAT_2000029c = diag_s_acc;
    iVar3 = DAT_20000298;
    if (0xf000 < DAT_20000298) {
      iVar3 = 0xf000;
    }
    if (iVar3 < -0xf000) {
      iVar3 = -0xf000;
    }
    iVar5 = DAT_20003294 / 100;
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
    if (DAT_200032cd == '\x01') {
      if (((byte)DAT_2000327e & 0x40) == 0) {
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
        if (1000 < DAT_20000290) {
          DAT_20000290 = DAT_20000290 + -0x32;
        }
      }
      else {
        if (DAT_200002cc < 20000) {
          DAT_200002cc = DAT_200002cc + 100;
        }
        if (DAT_20000290 < 32000) {
          iVar2 = iVar3;
          if (iVar3 < 0) {
            iVar2 = -iVar3;
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
    else if (((byte)DAT_2000327e & 0x40) == 0) {
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
      if (100 < DAT_20000290) {
        DAT_20000290 = DAT_20000290 + -0x32;
      }
    }
    else {
      if (DAT_200002d0 < 20000) {
        DAT_200002d0 = DAT_200002d0 + 100;
      }
      if (DAT_20000290 < 32000) {
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = -iVar3;
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
    DAT_200002ac = (DAT_200002ac * 0x31 + iVar1 * 0x32) / 0x32;
    diag_commbospeed0 = (diag_commbospeed0 * 9 + iVar1 * 10) / 10;
    iVar1 = (int)((uint)diag_pidk_speed * diag_commbospeed0) / 100;
    if (DAT_200002a8 + 0x14 < iVar1) {
      iVar1 = DAT_200002a8 + 0x14;
    }
    if (iVar1 < DAT_200002a8 + -0x14) {
      iVar1 = DAT_200002a8 + -0x14;
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
    iVar2 = (DAT_200002ac << 2) / 10;
    if (iVar2 < 0x1801) {
      if (iVar2 < -0x1800) {
        iVar2 = -0x1800;
      }
    }
    else {
      iVar2 = 0x1800;
    }
    iVar3 = iVar3 + iVar2 + DAT_200002b8;
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
    DAT_200002a4 = DAT_200002a4 + iVar3;
    if (DAT_200002a4 < 0x7149) {
      if (DAT_200002a4 < -29000) {
        DAT_200002a4 = -29000;
      }
    }
    else {
      DAT_200002a4 = 29000;
    }
    DAT_20000294 = iVar4 + (iVar1 * 0x72) / iVar5 + diag_commbopcurr / (int)(diag_k_pcurr + 1);
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
    DAT_20000318 = (undefined2)DAT_20000294;
    DAT_200002a8 = iVar1;
  }
  return;
}



/* ENTRY 0x080107c4 : FUN_080107c4 */

void FUN_080107c4(void)

{
  FUN_08023532(&diag_IA,0x38);
  FUN_08010cf4(1);
  return;
}



/* ENTRY 0x080107d6 : FUN_080107d6 */

void FUN_080107d6(void)

{
  FUN_08023532(&diag_IA,0x38);
  FUN_08010cf4(2);
  return;
}



/* ENTRY 0x080107e8 : FUN_080107e8 */

void FUN_080107e8(void)

{
  FUN_08010cf4(4);
  return;
}



/* ENTRY 0x080107f2 : FUN_080107f2 */

void FUN_080107f2(void)

{
  FUN_08010cf4(4);
  return;
}



/* ENTRY 0x080107fc : FUN_080107fc */

void FUN_080107fc(void)

{
  FUN_08010cf4(5);
  return;
}



/* ENTRY 0x08010806 : FUN_08010806 */

void FUN_08010806(void)

{
  FUN_08010cf4(3);
  FUN_08010e30(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010816 : FUN_08010816 */

void FUN_08010816(void)

{
  FUN_08010cf4(7);
  FUN_08010e30(&DAT_40012c00);
  return;
}



/* ENTRY 0x08010826 : FUN_08010826 */

void FUN_08010826(void)

{
  DAT_200002d4 = 1;
  FUN_08010cf4();
  FUN_08011074();
  return;
}



/* ENTRY 0x08010838 : FUN_08010838 */

void FUN_08010838(void)

{
  switch(DAT_200002d4) {
  case 1:
    FUN_080107c4();
    break;
  case 2:
    FUN_080107d6();
    break;
  case 3:
    FUN_080107e8();
    break;
  case 4:
    FUN_080107f2();
    break;
  case 7:
    FUN_08010806();
    break;
  case 8:
    FUN_080107fc();
    break;
  case 10:
    FUN_08010816();
  }
  DAT_20000320 = (((((int)(uint)DAT_200034ac >> 4) - (int)(short)DAT_20000374) * 0x26) / 10 +
                 DAT_20000320 * 0x31) / 0x32;
  DAT_200002dc = (int)(((uint)DAT_200002e8 * ((int)(uint)DAT_200034a8 >> 2)) /
                       (uint)((int)(uint)DAT_200034b4 >> 4) + DAT_200002e0 * 9) / 10;
  DAT_20000324 = DAT_200002dc + DAT_200002d8;
  if (15000 < DAT_20000324) {
    DAT_20000328 = 1;
  }
  DAT_200002e0 = DAT_200002dc;
  if (((DAT_20000324 < 0x2198) && (diag_cartstep == '\x03')) && (DAT_200002e4 == '\0')) {
    FUN_08021bb2(0xef);
    DAT_200002e4 = '\x01';
  }
  return;
}



/* ENTRY 0x08010964 : FUN_08010964 */

int FUN_08010964(void)

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
      DAT_200002d4 = 10;
      FUN_08008e00(5);
      bVar1 = 0;
      while ((bVar1 < 0x14 && (DAT_200002ea == '\0'))) {
        FUN_08008e00(1);
        bVar1 = bVar1 + 1;
      }
      if (DAT_200002ea == '\0') {
        iVar2 = 0;
      }
      else {
        for (bVar1 = 0; bVar1 < 0x14; bVar1 = bVar1 + 1) {
          FUN_08008e00(1);
          iVar3 = iVar3 + DAT_20000324;
        }
        iVar3 = 0xd7e970 / (iVar3 / 0x14);
        if ((0x4f9 < iVar3) && (iVar3 < 0x614)) {
          DAT_200002e8 = (undefined2)iVar3;
          for (bVar1 = 0; bVar1 < 10; bVar1 = bVar1 + 1) {
            FUN_08008e00(1);
            if ((0x26de < DAT_20000324) && (DAT_20000324 < 0x2742)) {
              iVar2 = 1;
              break;
            }
          }
        }
        if (iVar2 == 0) {
          DAT_20000329 = 1;
          iVar2 = 0;
        }
        else {
          FUN_08023c04();
          FUN_08023a88(0x34);
          FUN_08023af8(&DAT_08001342,DAT_200002e8);
          FUN_08023af8(&DAT_08001344,0x3f10);
          FUN_08023a88(0x34);
          FUN_08023ae8();
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



/* ENTRY 0x08010aae : FUN_08010aae */

undefined4 FUN_08010aae(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_08001340 == -0x3f11) {
    if (((DAT_08001344 == 0x3f10) && (0x4f9 < DAT_08001342)) && (DAT_08001342 < 0x614)) {
      DAT_200002e8 = DAT_08001342;
      uVar1 = 1;
    }
    else if (param_1 == 0) {
      DAT_20000329 = 1;
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



/* ENTRY 0x08010b0e : FUN_08010b0e */

void FUN_08010b0e(void)

{
  uint uVar1;
  
  DAT_200002f4 = FUN_0801266a();
  DAT_200002f5 = DAT_200002f4;
  uVar1 = (uint)DAT_200002f4;
  if (uVar1 == DAT_200002f0) {
    if (DAT_200002f2 < 0x15) {
      DAT_200002f2 = DAT_200002f2 + 1;
    }
    else if (uVar1 == 0) {
      DAT_200002f6 = '\x01';
      DAT_200002f1 = 0;
      DAT_200002fc = 0;
      DAT_200002f8 = 0;
    }
  }
  else if (((DAT_200002f6 != '\0') && (DAT_200002f2 = 0, (uVar1 & 2) == 2)) &&
          ((DAT_200002f0 & 2) == 0)) {
    if (DAT_200002f1 < 0x20) {
      DAT_200002f8 = DAT_200002f8 << 1 | uVar1 & 1;
      DAT_200002f1 = DAT_200002f1 + 1;
    }
    else if (DAT_200002f1 < 0x40) {
      DAT_200002fc = DAT_200002fc << 1 | uVar1 & 1;
      DAT_200002f1 = DAT_200002f1 + 1;
    }
    else {
      DAT_200002f1 = 0;
      DAT_200002f6 = '\0';
      if ((DAT_200002f8 ^ DAT_200002fc) == 0xffffffff) {
        DAT_20000300 = DAT_200002f8;
        DAT_200002ec = DAT_200002f8;
        if ((0x26de < DAT_200002f8) && (DAT_200002f8 < 0x2742)) {
          DAT_200002ea = 1;
        }
      }
    }
  }
  DAT_200002f0 = DAT_200002f4;
  return;
}



/* ENTRY 0x08010c64 : FUN_08010c64 */

void FUN_08010c64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_080119da();
    switch(DAT_20000304) {
    case 1:
    case 2:
      FUN_08011888(&local_10);
      diag_IA = local_10;
      diag_IB = uStack_c;
      FUN_08012ab2(&DAT_20003448);
      break;
    case 3:
      DAT_20000371 = FUN_080116ec();
      break;
    case 4:
    case 5:
      FUN_0801108a(DAT_20000304);
      break;
    case 7:
      FUN_08010b0e();
    }
  }
  else {
    iVar2 = FUN_080236a6(&DAT_40012400,0x140);
    if (iVar2 == 1) {
      FUN_080235ea(&DAT_40012400,1);
    }
  }
  return;
}



/* ENTRY 0x08010cf4 : FUN_08010cf4 */

undefined4 FUN_08010cf4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == DAT_20000305) {
    uVar1 = 1;
  }
  else {
    DAT_20000304 = (byte)param_1;
    DAT_20000305 = DAT_20000304;
    switch(param_1) {
    case 1:
    case 7:
      FUN_080242ba(&DAT_40012c00,0);
      FUN_080242ba(&DAT_40012c00,4,0);
      FUN_080242ba(&DAT_40012c00,8,0);
      FUN_08023dba(&DAT_40010c00,0x2000);
      FUN_08023dba(&DAT_40010c00,0x8000);
      FUN_08023dba(&DAT_40010c00,0x4000);
      break;
    case 2:
      FUN_0802497c(&DAT_40012c00,0,0x40);
      FUN_080242ba(&DAT_40012c00,0,1);
      FUN_0802497c(&DAT_40012c00,4,0x40);
      FUN_080242ba(&DAT_40012c00,4,1);
      FUN_0802497c(&DAT_40012c00,8,0x40);
      FUN_080242ba(&DAT_40012c00,8,1);
      FUN_08023dbe(&DAT_40010c00,0x2000);
      FUN_08023dbe(&DAT_40010c00,0x8000);
      FUN_08023dbe(&DAT_40010c00,0x4000);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      FUN_0802497c(&DAT_40012c00,0,0x60);
      FUN_080242ba(&DAT_40012c00,0,1);
      FUN_0802497c(&DAT_40012c00,4,0x60);
      FUN_080242ba(&DAT_40012c00,4,1);
      FUN_0802497c(&DAT_40012c00,8,0x60);
      FUN_080242ba(&DAT_40012c00,8,1);
      FUN_08023dbe(&DAT_40010c00,0x2000);
      FUN_08023dbe(&DAT_40010c00,0x8000);
      FUN_08023dbe(&DAT_40010c00,0x4000);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x08010e30 : FUN_08010e30 */

void FUN_08010e30(int param_1)

{
  *(undefined2 *)(param_1 + 0x34) = 0x5dc;
  *(undefined2 *)(param_1 + 0x38) = 0x5dc;
  *(undefined2 *)(param_1 + 0x3c) = 0x5dc;
  return;
}



/* ENTRY 0x08010e4c : FUN_08010e4c */

void FUN_08010e4c(void)

{
  FUN_0801168e();
  FUN_0801169e();
  return;
}



/* ENTRY 0x08010e58 : FUN_08010e58 */

void FUN_08010e58(void)

{
  int iVar1;
  
  iVar1 = FUN_08024538(&DAT_40012c00,1);
  if (iVar1 != 0) {
    FUN_080242d4(&DAT_40012c00,1);
    FUN_08010e4c();
    FUN_080119c8();
  }
  return;
}



/* ENTRY 0x08010e76 : FUN_08010e76 */

void FUN_08010e76(void)

{
  int iVar1;
  
  iVar1 = FUN_08024538(&DAT_40012c00,0x80);
  if (iVar1 != 0) {
    FUN_080242d4(&DAT_40012c00,0x80);
    DAT_2000032a = 1;
    FUN_0802470c(&DAT_40012c00,0x80,0);
    diag_HallRSP = 0;
  }
  return;
}



/* ENTRY 0x08010ea2 : FUN_08010ea2 */

void FUN_08010ea2(void)

{
  FUN_08011a20();
  FUN_0801137c();
  FUN_08011406();
  return;
}



/* ENTRY 0x08010eb2 : FUN_08010eb2 */

void FUN_08010eb2(void)

{
  DAT_20003490 = 0x18000;
  DAT_20003494 = 0x8000;
  DAT_20003498 = 0x10000;
  FUN_08012280(&DAT_200034f4,&DAT_200034bc);
  FUN_08010ea2();
  FUN_080242f2(&DAT_40012c00,1);
  FUN_080242e0(&DAT_40012c00,1);
  FUN_080112c4(1);
  FUN_08010cf4(1);
  return;
}



/* ENTRY 0x08010ef8 : FUN_08010ef8 */

int FUN_08010ef8(int param_1)

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



/* ENTRY 0x08011074 : FUN_08011074 */

void FUN_08011074(void)

{
  DAT_20000358 = 0;
  diag_g_average_iq = 0;
  DAT_20000362 = 0;
  FUN_0801226c();
  return;
}



/* ENTRY 0x0801108a : FUN_0801108a */

undefined8 FUN_0801108a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_08011888(&local_20);
  diag_IA = local_20;
  diag_IB = iStack_1c;
  FUN_08012388(&local_20,local_20,iStack_1c);
  diag_Ialfa = local_20;
  diag_Ibeta = iStack_1c;
  FUN_08012ab2();
  if ((diag_halldebugflg < 2) || (param_1 != 5)) {
    DAT_20000354 = FUN_080126a6();
  }
  else if ((diag_halldebugflg == 2) || (diag_halldebugflg == 3)) {
    DAT_20000354 = diag_halloffset;
  }
  else {
    DAT_20000354 = DAT_20000354 + 1;
  }
  FUN_08012460(&local_20,diag_Ialfa,diag_Ibeta,(int)DAT_20000354);
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
  diag_g_dif_iq = (short)diag_g_average_iq - DAT_20000362;
  DAT_20000362 = (short)diag_g_average_iq;
  if (param_1 == 5) {
    diag_VQ = FUN_08010ef8((int)DAT_2000031a);
  }
  else {
    diag_VQ = FUN_08010ef8((int)DAT_20000318);
  }
  if (((diag_halldebugflg == 0) || (param_1 != 5)) || (diag_halldebugflg == 2)) {
    iVar1 = diag_HallRSP;
    if (diag_HallRSP < 0) {
      iVar1 = -diag_HallRSP;
    }
    if (iVar1 == 0) {
      FUN_0801226c();
      diag_VD = (int)(diag_VD * 0x3f + ((uint)(diag_VD * 0x3f >> 0x1f) >> 0x1a)) >> 6;
    }
    else {
      diag_VD = FUN_080122f4(DAT_2000344c,diag_IDCurrent,&DAT_200034bc);
    }
  }
  else {
    diag_VD = (int)diag_manualsetVd;
  }
  FUN_080124bc();
  FUN_08012518(&local_20,diag_VQ,diag_VD);
  diag_Valfa = local_20;
  diag_Vbeta = iStack_1c;
  FUN_08011c08(local_20,iStack_1c);
  return CONCAT44(iStack_1c,local_20);
}



/* ENTRY 0x080112c4 : FUN_080112c4 */

void FUN_080112c4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    FUN_08023d40(0x200008,1);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffff8fff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x1000;
    FUN_080242d4(&DAT_40012c00,1);
    FUN_0802470c(&DAT_40012c00,1);
  }
  else {
    FUN_0802470c(&DAT_40012c00,1,0);
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 & 0xffffefff;
    uVar1 = DAT_40012808;
    DAT_40012808 = uVar1 | 0x8000;
  }
  return;
}



/* ENTRY 0x08011320 : FUN_08011320 */

void FUN_08011320(void)

{
  DAT_2000349c = 0;
  DAT_200034a0 = 0;
  DAT_200034a4 = 0;
  FUN_08023792(&DAT_40012800,2);
  FUN_08023730(&DAT_40012800,3,1,2);
  FUN_08023730(&DAT_40012800,1,2);
  FUN_0802368a(&DAT_40012800,0x1000);
  FUN_08023678(&DAT_40012800,1);
  FUN_080236d2(&DAT_40012800,0x480,1);
  return;
}



/* ENTRY 0x0801137c : FUN_0801137c */

void FUN_0801137c(void)

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
  
  FUN_08023ed0(1);
  FUN_080238dc(&DAT_40020008);
  FUN_08023a6e(&local_30);
  local_30 = &DAT_4001244c;
  local_2c = &DAT_200034a8;
  local_28 = 0;
  local_24 = 9;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08023a18(&DAT_40020008,&local_30);
  FUN_080238c8(&DAT_40020008,1);
  return;
}



/* ENTRY 0x08011406 : FUN_08011406 */

void FUN_08011406(void)

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
  
  FUN_08023ebc(0x8000);
  FUN_08023f18(0x15,1);
  FUN_08023f18(0x600,1);
  FUN_08023dc2(&local_24);
  local_24 = 8;
  local_21 = 0;
  FUN_08023c80(&DAT_40010800,&local_24);
  local_24 = 2;
  local_21 = 0;
  FUN_08023c80(&DAT_40010800,&local_24);
  FUN_08023dc2(&local_24);
  local_24 = 4;
  local_21 = 0;
  FUN_08023c80(&DAT_40010800,&local_24);
  local_24 = 5;
  local_22 = 3;
  local_21 = 0;
  FUN_08023c80(&DAT_40010800,&local_24);
  local_24 = 3;
  local_22 = 3;
  local_21 = 0;
  FUN_08023c80(&DAT_40010c00,&local_24);
  local_24 = 0x2a;
  local_22 = 3;
  local_21 = 0;
  FUN_08023c80(&DAT_40011000,&local_24);
  local_24 = 1;
  local_22 = 3;
  local_21 = 0;
  FUN_08023c80(&DAT_40011000,&local_24);
  FUN_08023614(&DAT_40012400);
  FUN_08023614(&DAT_40012800);
  FUN_080235f0(&DAT_40012400,1);
  FUN_080235f0(&DAT_40012800,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  FUN_0802385a(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 1;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 9;
  FUN_080236e4(&DAT_40012400,&local_1c);
  FUN_080237a2(&DAT_40012400,9,1,7);
  FUN_080237a2(&DAT_40012400,8,2,7);
  FUN_080237a2(&DAT_40012400,0,3,7);
  FUN_080237a2(&DAT_40012400,0xf,4,7);
  FUN_080237a2(&DAT_40012400,0xb,5,7);
  FUN_080237a2(&DAT_40012400,0xd,6,7);
  FUN_080237a2(&DAT_40012400,0x11,7,7);
  FUN_080237a2(&DAT_40012400,10,8,7);
  FUN_080237a2(&DAT_40012400,0x10,9,7);
  FUN_0802386c(1);
  FUN_08023602(&DAT_40012400,1);
  FUN_0802385a(&local_1c);
  local_1c = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0x800;
  local_c = 0;
  FUN_080236e4(&DAT_40012800,&local_1c);
  FUN_08023834(&DAT_40012400);
  FUN_08023834(&DAT_40012800);
  do {
    uVar1 = FUN_080236c2(&DAT_40012400);
    uVar2 = FUN_080236c2(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08023850(&DAT_40012400);
  FUN_08023850(&DAT_40012800);
  do {
    uVar1 = FUN_08023696(&DAT_40012400);
    uVar2 = FUN_08023696(&DAT_40012800);
  } while ((uVar1 & uVar2) != 0);
  FUN_08011320();
  local_20 = 0x12;
  local_1f = 1;
  local_1e = 0;
  local_1d = 1;
  FUN_08023e18(&local_20);
  FUN_0802383e(&DAT_40012400,1);
  sVar3 = -0x15a0;
  do {
    bVar4 = sVar3 != 0;
    sVar3 = sVar3 + -1;
  } while (bVar4);
  return;
}



/* ENTRY 0x0801168e : FUN_0801168e */

void FUN_0801168e(void)

{
  FUN_0802368a(&DAT_40012800,0x1000);
  return;
}



/* ENTRY 0x0801169e : FUN_0801169e */

void FUN_0801169e(void)

{
  DAT_40012838 = DAT_2000036c + (DAT_20000368 >> 5) + 0x100000;
  return;
}



/* ENTRY 0x080116ec : FUN_080116ec */

undefined4 FUN_080116ec(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_20000378 == '\0') {
    DAT_2000349c = 0;
    DAT_200034a0 = 0;
    DAT_200034a4 = 0;
    DAT_20000368 = DAT_20003490;
    DAT_2000036c = DAT_20003494;
    bVar1 = 0x500 < DAT_2000037c;
    DAT_2000037c = DAT_2000037c + 1;
    if (bVar1) {
      DAT_2000037c = 0;
      DAT_20000378 = '\x01';
    }
  }
  else if (DAT_20000378 == '\x01') {
    iVar2 = DAT_4001283c;
    DAT_2000349c = DAT_2000349c + iVar2 * 2;
    iVar2 = DAT_40012840;
    DAT_200034a0 = DAT_200034a0 + iVar2 * 2;
    DAT_20000374 = DAT_20000374 + ((int)(uint)DAT_200034ac >> 4);
    DAT_2000037c = DAT_2000037c + 1;
    if (DAT_2000037c == 0x40) {
      DAT_2000349c = (int)(DAT_2000349c + ((uint)(DAT_2000349c >> 0x1f) >> 0x1a)) >> 6;
      DAT_200034a0 = (int)(DAT_200034a0 + ((uint)(DAT_200034a0 >> 0x1f) >> 0x1a)) >> 6;
      DAT_20000378 = '\x02';
      DAT_20000379 = '\x01';
    }
  }
  if (DAT_20000379 == '\x01') {
    DAT_2000037c = 0;
    DAT_2000036c = DAT_20003498;
    DAT_20000379 = '\x02';
  }
  else if (DAT_20000379 == '\x02') {
    iVar2 = DAT_40012840;
    DAT_200034a4 = DAT_200034a4 + iVar2 * 2;
    DAT_20000374 = DAT_20000374 + ((int)(uint)DAT_200034ac >> 4);
    DAT_2000037c = DAT_2000037c + 1;
    if (DAT_2000037c == 0x40) {
      DAT_200034a4 = (int)(DAT_200034a4 + ((uint)(DAT_200034a4 >> 0x1f) >> 0x1a)) >> 6;
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
    if ((((0x8f9f < DAT_2000349c) || (0x8f9f < DAT_200034a0)) || (0x8f9f < DAT_200034a4)) ||
       (((DAT_2000349c < 0x705f || (DAT_200034a0 < 0x705f)) || (DAT_200034a4 < 0x705f)))) {
      DAT_2000032c = 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ENTRY 0x08011888 : FUN_08011888 */

void FUN_08011888(int *param_1)

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
    local_8 = DAT_200034a0 + iVar1 * -2;
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    else if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_c = (iVar1 * 2 - DAT_200034a4) - local_8;
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
    local_c = DAT_2000349c + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = (iVar1 * 2 - DAT_200034a4) - local_c;
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
    local_c = DAT_2000349c + iVar1 * -2;
    if (local_c < -0x8000) {
      local_c = -0x8000;
    }
    else if (0x7fff < local_c) {
      local_c = 0x7fff;
    }
    iVar1 = DAT_40012840;
    local_8 = DAT_200034a0 + iVar1 * -2;
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



/* ENTRY 0x080119c8 : FUN_080119c8 */

void FUN_080119c8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 | 0x8000;
  return;
}



/* ENTRY 0x080119da : FUN_080119da */

void FUN_080119da(void)

{
  uint uVar1;
  
  uVar1 = DAT_40012808;
  DAT_40012808 = uVar1 & 0xffff7fff;
  return;
}



/* ENTRY 0x08011a20 : FUN_08011a20 */

void FUN_08011a20(void)

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
  
  FUN_08023f18(0xc,1);
  FUN_08023dc2(&local_38);
  local_38 = 0x700;
  local_35 = 0x18;
  local_36 = 3;
  FUN_08023c80(&DAT_40010800,&local_38);
  FUN_08023dc2(&local_38);
  local_38 = 0xe000;
  local_35 = 0x10;
  local_36 = 3;
  FUN_08023c80(&DAT_40010c00,&local_38);
  FUN_08023dba(&DAT_40010c00,0x2000);
  FUN_08023dba(&DAT_40010c00,0x8000);
  FUN_08023dba(&DAT_40010c00,0x4000);
  FUN_08023d2e(&DAT_40010800,0x700);
  FUN_08023d2e(&DAT_40010c00,0xe000);
  FUN_08023f18(0x800);
  FUN_08024320(&DAT_40012c00);
  FUN_08024a90(&local_10);
  local_10 = 0;
  local_e = 0x20;
  local_c = 3000;
  local_a = 0x100;
  local_8 = 1;
  FUN_080249f4(&DAT_40012c00,&local_10);
  FUN_08024944(&local_20);
  local_20 = 0x60;
  local_1e = 1;
  local_1a = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08024726(&DAT_40012c00,&local_20);
  FUN_080247b6(&DAT_40012c00,&local_20);
  FUN_08024846(&DAT_40012c00,&local_20);
  FUN_08024944(&local_20);
  local_20 = 0x70;
  local_1e = 1;
  local_1c = 4;
  local_1a = 2999;
  local_18 = 0;
  local_16 = 8;
  local_14 = 0;
  local_12 = 0x200;
  FUN_080248d2(&DAT_40012c00,&local_20);
  FUN_080247aa(&DAT_40012c00,8);
  FUN_08024838(&DAT_40012c00,8);
  FUN_080248c6(&DAT_40012c00,8);
  FUN_08024936(&DAT_40012c00,8);
  local_30 = 0x800;
  local_2e = 0x400;
  local_2c = 0x100;
  local_2a = 0x15;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  FUN_08024296(&DAT_40012c00,&local_30);
  FUN_080249d0(&DAT_40012c00,0x20);
  FUN_080242da(&DAT_40012c00,0x80);
  FUN_0802470c(&DAT_40012c00,0x80,1);
  FUN_08024530(&DAT_40012c00,1);
  FUN_080242d4(&DAT_40012c00,1);
  FUN_0802470c(&DAT_40012c00,1,0);
  FUN_0802470c(&DAT_40012c00,0x10,0);
  local_34 = 0x19;
  local_33 = 0;
  local_32 = 0;
  local_31 = 1;
  FUN_08023e18(&local_34);
  return;
}



/* ENTRY 0x08011c08 : FUN_08011c08 */

void FUN_08011c08(int param_1,int param_2)

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
      goto switchD_08011cca_caseD_0;
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
      DAT_20000368 = DAT_20003494;
      DAT_2000036c = DAT_20003498;
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
      DAT_20000368 = DAT_20003490;
      DAT_2000036c = DAT_20003498;
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
      DAT_20000368 = DAT_20003490;
      DAT_2000036c = DAT_20003498;
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
      DAT_20000368 = DAT_20003490;
      DAT_2000036c = DAT_20003494;
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
      DAT_20000368 = DAT_20003490;
      DAT_2000036c = DAT_20003494;
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
      DAT_20000368 = DAT_20003494;
      DAT_2000036c = DAT_20003498;
    }
  }
  else {
switchD_08011cca_caseD_0:
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



/* ENTRY 0x0801226c : FUN_0801226c */

void FUN_0801226c(void)

{
  DAT_2000351c = 0;
  DAT_200034e4 = 0;
  DAT_20003520 = 0;
  DAT_200034e8 = 0;
  return;
}



/* ENTRY 0x08012280 : FUN_08012280 */

void FUN_08012280(undefined4 *param_1,undefined4 *param_2)

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



/* ENTRY 0x080122f4 : FUN_080122f4 */

int FUN_080122f4(int param_1,int param_2,int *param_3)

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



/* ENTRY 0x08012388 : FUN_08012388 */

void FUN_08012388(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = -(param_2 * 0x49e6 + param_3 * 0x93cc) / 0x7fff;
  return;
}



/* ENTRY 0x080123bc : FUN_080123bc */

void FUN_080123bc(int *param_1,short param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  
  uVar1 = (int)(uint)(ushort)(param_2 + 0x8000) >> 6;
  uVar2 = uVar1 & 0x300;
  if (uVar2 == 0) {
    local_c = -(int)*(short *)(&LAB_08026f60 + (uVar1 & 0xff) * 2);
    local_10 = -(int)*(short *)(&LAB_08026f60 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else if (uVar2 == 0x100) {
    local_c = -(int)*(short *)(&LAB_08026f60 + (0xff - (uVar1 & 0xff)) * 2);
    local_10 = (int)*(short *)(&LAB_08026f60 + (uVar1 & 0xff) * 2);
  }
  else if (uVar2 == 0x200) {
    local_c = (int)*(short *)(&LAB_08026f60 + (uVar1 & 0xff) * 2);
    local_10 = (int)*(short *)(&LAB_08026f60 + (0xff - (uVar1 & 0xff)) * 2);
  }
  else {
    local_10 = param_3;
    local_c = param_4;
    if (uVar2 == 0x300) {
      local_c = (int)*(short *)(&LAB_08026f60 + (0xff - (uVar1 & 0xff)) * 2);
      local_10 = -(int)*(short *)(&LAB_08026f60 + (uVar1 & 0xff) * 2);
    }
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  return;
}



/* ENTRY 0x08012460 : FUN_08012460 */

void FUN_08012460(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_080123bc(&local_2c,param_4);
  DAT_20000384 = local_2c;
  DAT_20000388 = iStack_28;
  *param_1 = (local_2c * local_18 - local_14 * iStack_28) / 0x7fff;
  param_1[1] = (local_14 * local_2c + iStack_28 * local_18) / 0x7fff;
  return;
}



/* ENTRY 0x080124bc : FUN_080124bc */

void FUN_080124bc(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = diag_VD * diag_VD + diag_VQ * diag_VQ;
  if (0x3eb8a6d1 < uVar1) {
    iVar2 = (int)(short)diag_VQ *
            (uint)*(ushort *)(&DAT_08026edc + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VQ = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
    iVar2 = (int)(short)diag_VD *
            (uint)*(ushort *)(&DAT_08026edc + ((uVar1 >> 0x18) - 0x3e & 0xff) * 2);
    diag_VD = (int)(short)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x11)) >> 0xf);
  }
  return;
}



/* ENTRY 0x08012518 : FUN_08012518 */

void FUN_08012518(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_20000384 * param_3;
  iVar1 = param_2 * DAT_20000388;
  *param_1 = (param_3 * DAT_20000388 + DAT_20000384 * param_2) / 0x7fff;
  param_1[1] = (iVar2 - iVar1) / 0x7fff;
  return;
}



/* ENTRY 0x08012574 : FUN_08012574 */

void FUN_08012574(void)

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
  
  FUN_08023f18(0x10,1);
  FUN_08023ee8(2,1);
  FUN_08023d40(0x1a0c00,1);
  local_20 = 0x40;
  local_1d = 4;
  local_1e = 3;
  FUN_08023c80(&DAT_40011000,&local_20);
  local_20 = 0x180;
  local_1d = 4;
  local_1e = 3;
  FUN_08023c80(&DAT_40011000,&local_20);
  FUN_08024320(&DAT_40000400);
  FUN_08024a90(&local_10);
  local_c = 0xf500;
  local_10 = 0x9000;
  local_a = 0;
  local_e = 0;
  FUN_080249f4(&DAT_40000400,&local_10);
  FUN_080246fc(&local_1c);
  local_1c = 0;
  local_1a = 2;
  local_18 = 3;
  local_14 = 0xf;
  FUN_08024550(&DAT_40000400,&local_1c);
  FUN_08024958(&DAT_40000400,400,1);
  FUN_0802471c(&DAT_40000400);
  FUN_0802495e(&DAT_40000400,1);
  FUN_08024970(&DAT_40000400,0x40);
  FUN_080249e0(&DAT_40000400,4);
  FUN_08024ab4(&DAT_40000400,1);
  FUN_080242d4(&DAT_40000400,0x1e5f);
  FUN_080249f0(&DAT_40000400,0);
  FUN_080242e0(&DAT_40000400,1);
  return;
}



/* ENTRY 0x0801266a : FUN_0801266a */

byte FUN_0801266a(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_08023dac(&DAT_40011000,0x40);
  cVar2 = FUN_08023dac(&DAT_40011000,0x80);
  cVar3 = FUN_08023dac(&DAT_40011000,0x100);
  return (bVar1 | cVar2 << 1 | cVar3 << 2) & 7;
}



/* ENTRY 0x080126a6 : FUN_080126a6 */

int FUN_080126a6(void)

{
  return (int)diag_motor_egdir * (DAT_200005a4 + diag_halloffset);
}



/* ENTRY 0x080126bc : FUN_080126bc */

void FUN_080126bc(int param_1,int param_2,int param_3,int param_4,int param_5)

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
        goto LAB_0801274c;
      }
    }
  }
  DAT_200005cf = 0;
LAB_0801274c:
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



/* ENTRY 0x08012794 : FUN_08012794 */

void FUN_08012794(void)

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
  uVar5 = FUN_0801266a();
  bVar3 = (byte)uVar5;
  DAT_200005a8 = bVar3;
  if (uVar5 != DAT_200005ca) {
    iVar6 = FUN_08024534(&DAT_40000400);
    uVar2 = *(undefined2 *)(&UNK_08027160 + (uint)DAT_200005ca * 3 + uVar5 * 0x18);
    DAT_2000038e = *(char *)((int)(&UNK_08027160 + (uint)DAT_200005ca * 3 + uVar5 * 0x18) + 2);
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
      FUN_080126bc(uVar8,bVar4,(int)DAT_2000038e,iVar6,DAT_200005ca);
      DAT_200005ca = bVar3;
    }
    else {
      diag_hall_err = diag_hall_err + 1;
      DAT_200005ca = bVar3;
    }
  }
  return;
}



/* ENTRY 0x08012ab2 : FUN_08012ab2 */

void FUN_08012ab2(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_08012794();
  uVar1 = DAT_40000424;
  uVar3 = (uint)uVar1;
  if ((DAT_200005c4 == 0) || (0x7ff < uVar3)) {
    DAT_200005c0 = 0;
    DAT_200005c4 = 0;
    iVar2 = FUN_0801266a();
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



/* ENTRY 0x08012b28 : FUN_08012b28 */

void FUN_08012b28(void)

{
  FUN_08012574();
  return;
}



/* ENTRY 0x08012b7c : FUN_08012b7c */

bool FUN_08012b7c(char *param_1)

{
  return *param_1 == param_1[1];
}



/* ENTRY 0x08012b8e : FUN_08012b8e */

bool FUN_08012b8e(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1[1] - 1 & param_1[2] - 1) != (uint)*param_1;
  if (bVar1) {
    FUN_08023444(*(int *)(param_1 + 4) + (uint)*param_1 * 0x43,param_2,0x43);
    *param_1 = *param_1 + 1 & param_1[2] - 1;
  }
  return bVar1;
}



/* ENTRY 0x08012bce : FUN_08012bce */

bool FUN_08012bce(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (cVar1 != cVar2) {
    FUN_08023444(param_2,*(int *)(param_1 + 4) + (uint)(byte)param_1[1] * 0x43,0x43);
    param_1[1] = param_1[1] + 1U & param_1[2] - 1U;
  }
  return cVar1 != cVar2;
}



/* ENTRY 0x08012c06 : FUN_08012c06 */

uint FUN_08012c06(byte *param_1,char *param_2)

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



/* ENTRY 0x08012c54 : FUN_08012c54 */

undefined4 FUN_08012c54(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [68];
  
  FUN_08012c06(param_2,auStack_50);
  FUN_08012b8e(param_1,auStack_50);
  return 0;
}



/* ENTRY 0x08012c72 : FUN_08012c72 */

void FUN_08012c72(int param_1)

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
    FUN_080139bc(param_1);
    break;
  default:
    FUN_08014288(param_1);
  }
  return;
}



/* ENTRY 0x08012cac : FUN_08012cac */

void FUN_08012cac(char *param_1,int param_2)

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



/* ENTRY 0x08012d52 : FUN_08012d52 */

undefined4 FUN_08012d52(byte *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(ushort *)(&DAT_08027220 + (*param_1 ^ 0xff) * 2) ^ 0xff00);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = ((uint)*(ushort *)(&DAT_08027220 + ((uint)param_1[uVar3 + 1] ^ (int)uVar2 >> 8) * 2) ^
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



/* ENTRY 0x08012dbe : FUN_08012dbe */

void FUN_08012dbe(char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte local_54;
  char local_53 [64];
  char local_13;
  char local_12;
  
  if (DAT_200005dc == '\0') {
    if (DAT_200030e4 < 500) {
      FUN_08012cac(param_1,param_2 & 0xff);
    }
    FUN_0801acaa(param_1,param_2);
  }
  else if (((*param_1 == 'U') && (param_1[1] == -0x56)) &&
          ((local_54 = param_1[2], local_54 < 0x3f || (local_54 < 3)))) {
    for (uVar2 = 0; (int)uVar2 < (int)(local_54 - 2); uVar2 = uVar2 + 1 & 0xff) {
      local_53[uVar2] = param_1[uVar2 + 3];
    }
    local_13 = param_1[uVar2 + 3];
    local_12 = param_1[(uVar2 + 1 & 0xff) + 3];
    iVar1 = FUN_08012d52(&local_54);
    if (iVar1 == 1) {
      FUN_08012c72(&local_54);
    }
  }
  return;
}



/* ENTRY 0x08012e56 : FUN_08012e56 */

void FUN_08012e56(void)

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
    iVar1 = FUN_08012b7c(&DAT_200005d4);
    if (iVar1 == 0) {
      FUN_08012bce(&DAT_200005d4,&local_58);
      FUN_080132c4(auStack_57,local_58);
    }
    else {
      local_58 = 0;
      if ((DAT_20000951 == uVar4) && (DAT_20000950 != '\x01')) {
        if ((DAT_20000958 == uVar5) && (DAT_20000957 != '\x01')) {
          if ((DAT_20000946 != uVar2) || (DAT_20000945 == '\x01')) {
            FUN_080132c4(&DAT_20003f46 + uVar2 * 0x14,(&DAT_20000948)[uVar2]);
            DAT_20000947 = (char)uVar2 + 1U & 7;
            DAT_20000945 = '\0';
          }
        }
        else {
          FUN_080132c4(&DAT_20004036 + uVar5 * 0x14,0x14);
          DAT_20000959 = (char)uVar5 + 1U & 3;
          DAT_20000957 = '\0';
        }
      }
      else {
        FUN_080132c4(&DAT_20003fe6 + uVar4 * 0x14,0x14);
        DAT_20000952 = (char)uVar4 + 1U & 3;
        DAT_20000950 = '\0';
      }
    }
  }
  else {
    FUN_080132c4(&DAT_20003ef6 + uVar3 * 0x14,0x14);
    DAT_20000940 = (char)uVar3 + 1U & 3;
    DAT_2000093e = '\0';
  }
  return;
}



/* ENTRY 0x08012fd0 : FUN_08012fd0 */

void FUN_08012fd0(undefined4 param_1)

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
  FUN_08023d40(4,1);
  local_30 = 0x40;
  local_2d = 0x18;
  local_2e = 3;
  FUN_08023c80(&DAT_40010c00,&local_30);
  local_30 = 0x80;
  local_2d = 0x48;
  FUN_08023c80(&DAT_40010c00,&local_30);
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
  FUN_08023e18(&local_34);
  FUN_08024b42(&DAT_40013800,0x360,1);
  FUN_08024b42(&DAT_40013800,0x424,1);
  FUN_08024ae6(&DAT_40013800,0x80,1);
  FUN_08024ae6(&DAT_40013800,0x40,1);
  FUN_08023ed0(1);
  FUN_080238dc(&DAT_40020044);
  local_60 = &DAT_40013804;
  local_5c = &DAT_20003784;
  local_58 = 0x10;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_40020044,&local_60);
  FUN_08023a08(&DAT_40020044,2,1);
  FUN_080238c8(&DAT_40020044,0);
  FUN_080238dc(&DAT_40020058);
  local_60 = &DAT_40013804;
  local_5c = &DAT_20003744;
  local_58 = 0;
  local_54 = 0x40;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_40020058,&local_60);
  FUN_080238c8(&DAT_40020058,1);
  local_34 = 0xe;
  local_33 = 2;
  local_32 = 0;
  local_31 = 1;
  FUN_08023e18(&local_34);
  FUN_0800d3ae(&DAT_40013800,&local_2c);
  FUN_08024ad4(&DAT_40013800,1);
  return;
}



/* ENTRY 0x08013158 : FUN_08013158 */

void FUN_08013158(void)

{
  DAT_200005e8 = 0;
  return;
}



/* ENTRY 0x08013160 : FUN_08013160 */

void FUN_08013160(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x2000);
  if (iVar2 != 0) {
    FUN_080238b0(0x2000);
    FUN_080238c8(&DAT_40020044,0);
    FUN_08013158();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x0801319c : FUN_0801319c */

void FUN_0801319c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x40000);
  if (iVar2 == 0) {
    iVar2 = FUN_080239e8(0x20000);
    if (iVar2 != 0) {
      FUN_080238b0(0x20000);
    }
  }
  else {
    FUN_080238b0(0x40000);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x080131e0 : FUN_080131e0 */

void FUN_080131e0(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar2);
  iVar3 = FUN_08024af6(&DAT_40013800,0x424);
  if (iVar3 != 0) {
    iVar3 = FUN_080239e0(&DAT_40020058);
    uVar4 = 0x40 - iVar3;
    FUN_080238c8(&DAT_40020058,0);
    DAT_4002005c = 0x40;
    FUN_080238c8(&DAT_40020058,1);
    FUN_08024ac6(&DAT_40013800,0x424);
    if ((uVar4 != 0) && (uVar4 < 0x41)) {
      FUN_08012dbe(&DAT_20003744,uVar4 & 0xffff);
    }
    uVar1 = DAT_40013800;
    uVar1 = DAT_40013804;
  }
  iVar3 = FUN_08024af6(&DAT_40013800,0x727);
  if (iVar3 != 0) {
    FUN_08024ac6(&DAT_40013800,0x727);
    FUN_08024b42(&DAT_40013800,0x727,0);
  }
  iVar3 = FUN_08024af6(&DAT_40013800,0x525);
  if (iVar3 != 0) {
    FUN_08024ac6(&DAT_40013800,0x525);
  }
  iVar3 = FUN_08024af6(&DAT_40013800,0x260);
  if (iVar3 != 0) {
    FUN_08024ac6(&DAT_40013800,0x260);
  }
  iVar3 = FUN_08024af6(&DAT_40013800,0x160);
  if (iVar3 != 0) {
    FUN_08024ac6(&DAT_40013800,0x160);
  }
  uVar1 = DAT_40013800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x080132c4 : FUN_080132c4 */

undefined4 FUN_080132c4(int param_1,uint param_2)

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
      (&DAT_20003784)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_080238b0(0x2000);
    FUN_080238c8(&DAT_40020044,0);
    FUN_08023a6a(&DAT_40020044,uVar2);
    FUN_080238c8(&DAT_40020044,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801333c : FUN_0801333c */

void FUN_0801333c(int param_1)

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
    local_55 = (undefined1)(&DWORD_08027a84)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < *(byte *)((int)&DWORD_08027a84 + uVar1 * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[uVar2] = *(undefined1 *)((&DWORD_08027a80)[uVar1 * 4] + uVar2);
    }
    auStack_54[*(byte *)((int)&DWORD_08027a84 + uVar1 * 0x10 + 1)] =
         (char)(&DWORD_08027a8c)[uVar1 * 4];
    for (uVar2 = 0; uVar2 < (byte)(&DWORD_08027a8c)[uVar1 * 4]; uVar2 = uVar2 + 1 & 0xff) {
      auStack_54[*(byte *)((int)&DWORD_08027a84 + uVar1 * 0x10 + 1) + uVar2 + 1] =
           *(undefined1 *)((&DWORD_08027a88)[uVar1 * 4] + uVar2);
    }
    local_58[0] = *(char *)((int)&DWORD_08027a84 + uVar1 * 0x10 + 1) +
                  (char)(&DWORD_08027a8c)[uVar1 * 4] + '\x06';
  }
  FUN_08012d52(local_58);
  FUN_08012c54(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x08013418 : FUN_08013418 */

void FUN_08013418(int param_1)

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
    local_51 = (undefined1)(&DWORD_08027a84)[param_1 * 4];
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027a84 + param_1 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[uVar1] = *(undefined1 *)((&DWORD_08027a80)[param_1 * 4] + uVar1);
    }
    auStack_50[*(byte *)((int)&DWORD_08027a84 + param_1 * 0x10 + 1)] =
         (char)(&DWORD_08027a8c)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_08027a8c)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_50[*(byte *)((int)&DWORD_08027a84 + param_1 * 0x10 + 1) + uVar1 + 1] =
           *(undefined1 *)((&DWORD_08027a88)[param_1 * 4] + uVar1);
    }
    local_54[0] = *(char *)((int)&DWORD_08027a84 + param_1 * 0x10 + 1) +
                  (char)(&DWORD_08027a8c)[param_1 * 4] + '\x06';
  }
  FUN_08012d52(local_54);
  FUN_08012c54(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x080134e4 : FUN_080134e4 */

void FUN_080134e4(undefined1 param_1)

{
  DAT_200005ea = param_1;
  return;
}



/* ENTRY 0x080134ea : FUN_080134ea */

void FUN_080134ea(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe3;
  local_58[2] = DAT_200037d4;
  local_58[3] = DAT_200037d5;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037d5; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027424 + (uint)(byte)(&DAT_200037d6)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08027420)[(uint)(byte)(&DAT_200037d6)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012d52(local_58);
  FUN_08012c54(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x08013562 : FUN_08013562 */

void FUN_08013562(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe1;
  local_50[2] = DAT_200037d4;
  local_4d = DAT_200037d5;
  for (uVar1 = 0; uVar1 < DAT_200037d5; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037d6)[uVar1];
  }
  local_50[0] = DAT_200037d5 + 5;
  FUN_08012d52(local_50);
  FUN_08012c54(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x080135b2 : FUN_080135b2 */

void FUN_080135b2(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08013562();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037d4)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08013562();
  }
  return;
}



/* ENTRY 0x080135de : FUN_080135de */

void FUN_080135de(undefined1 param_1)

{
  DAT_200005e9 = param_1;
  return;
}



/* ENTRY 0x080135e4 : FUN_080135e4 */

void FUN_080135e4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe4;
  local_58[2] = DAT_200037de;
  local_58[3] = DAT_200037df;
  uVar3 = 3;
  for (uVar1 = 0; uVar1 < DAT_200037df; uVar1 = uVar1 + 1 & 0xff) {
    for (uVar2 = 0;
        uVar2 < *(byte *)((int)&DWORD_08027424 + (uint)(byte)(&DAT_200037e0)[uVar1] * 0x10 + 1);
        uVar2 = uVar2 + 1 & 0xff) {
      local_58[uVar3 + 1] =
           *(char *)((&DWORD_08027420)[(uint)(byte)(&DAT_200037e0)[uVar1] * 4] + uVar2);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012d52(local_58);
  FUN_08012c54(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x0801365c : FUN_0801365c */

void FUN_0801365c(int param_1)

{
  uint uVar1;
  uint uVar2;
  char local_54 [68];
  
  local_54[1] = 0xe5;
  local_54[2] = (char)param_1;
  uVar2 = 2;
  for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027424 + param_1 * 0x10 + 1);
      uVar1 = uVar1 + 1 & 0xff) {
    local_54[uVar2 + 1] = *(char *)((&DWORD_08027420)[param_1 * 4] + uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  }
  local_54[0] = (char)uVar2 + '\x02';
  FUN_08012d52(local_54);
  FUN_08012c54(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x080136b2 : FUN_080136b2 */

void FUN_080136b2(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [68];
  
  local_58[1] = 0xe6;
  local_58[2] = *(undefined1 *)(param_1 + 1);
  uVar2 = (uint)*(byte *)(param_1 + 1);
  uVar3 = 2;
  if (*(char *)((int)&DWORD_0802742c + uVar2 * 0x10 + 1) == '\0') {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027424 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      local_58[uVar3 + 1] = *(char *)((&DWORD_08027420)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  else {
    for (uVar1 = 0; uVar1 < *(byte *)((int)&DWORD_08027424 + uVar2 * 0x10 + 1);
        uVar1 = uVar1 + 1 & 0xff) {
      *(undefined1 *)((&DWORD_08027420)[uVar2 * 4] + uVar1) = *(undefined1 *)(param_1 + uVar1 + 2);
      local_58[uVar3 + 1] = *(char *)((&DWORD_08027420)[uVar2 * 4] + uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  local_58[0] = (char)uVar3 + '\x02';
  FUN_08012d52(local_58);
  FUN_08012c54(&DAT_200005d4,local_58);
  return;
}



/* ENTRY 0x08013770 : FUN_08013770 */

void FUN_08013770(void)

{
  uint uVar1;
  char local_50 [3];
  byte local_4d;
  undefined1 auStack_4c [64];
  
  local_50[1] = 0xe2;
  local_50[2] = DAT_200037de;
  local_4d = DAT_200037df;
  for (uVar1 = 0; uVar1 < DAT_200037df; uVar1 = uVar1 + 1 & 0xff) {
    auStack_4c[uVar1] = (&DAT_200037e0)[uVar1];
  }
  local_50[0] = DAT_200037df + 5;
  FUN_08012d52(local_50);
  FUN_08012c54(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x080137c0 : FUN_080137c0 */

void FUN_080137c0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    FUN_08013770();
  }
  else {
    for (uVar2 = 0; uVar2 < bVar1 + 2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_200037de)[uVar2] = *(undefined1 *)(param_1 + uVar2 + 1);
    }
    FUN_08013770();
  }
  return;
}



/* ENTRY 0x080137ec : FUN_080137ec */

void FUN_080137ec(int param_1)

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
      DAT_200005eb = 1;
      return;
    }
    local_4d = (undefined1)(&DWORD_08027424)[param_1 * 4];
    local_4c = *(undefined1 *)((int)&DWORD_0802742c + param_1 * 0x10 + 1);
    local_4b = (undefined1)(&DWORD_0802742c)[param_1 * 4];
    for (uVar1 = 0; uVar1 < (byte)(&DWORD_0802742c)[param_1 * 4]; uVar1 = uVar1 + 1 & 0xff) {
      auStack_4a[uVar1] = *(undefined1 *)((&DWORD_08027428)[param_1 * 4] + uVar1);
    }
    local_50[0] = (char)(&DWORD_0802742c)[param_1 * 4] + '\a';
  }
  FUN_08012d52(local_50);
  FUN_08012c54(&DAT_200005d4,local_50);
  return;
}



/* ENTRY 0x0801388a : FUN_0801388a */

void FUN_0801388a(int param_1,int param_2)

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
  FUN_08012d52(local_54);
  FUN_08012c54(&DAT_200005d4,local_54);
  return;
}



/* ENTRY 0x080138d0 : FUN_080138d0 */

void FUN_080138d0(void)

{
  FUN_0801388a(0x10,&DAT_08001300);
  FUN_0801388a(0xe,&DAT_08001310);
  FUN_0801388a(0xc,&DAT_0800131e);
  return;
}



/* ENTRY 0x080138f0 : FUN_080138f0 */

void FUN_080138f0(void)

{
  uint uVar1;
  
  if (DAT_200005eb == '\0') {
    if (DAT_200005ec == '\0') {
      uVar1 = (uint)DAT_200005ed;
      DAT_200005ed = DAT_200005ed + 1;
      if (uVar1 == (uVar1 / 5) * 5) {
        if (DAT_200005e9 == '\x01') {
          FUN_080135e4();
        }
      }
      else if (DAT_200005ea == '\x01') {
        FUN_080134ea();
      }
    }
    else if (DAT_200005ef == 0) {
      FUN_08013418(0xff);
      DAT_200005ef = DAT_200005ef + 1;
    }
    else if (DAT_200005ef < 0x12) {
      FUN_08013418(DAT_200005ef - 1);
      DAT_200005ef = DAT_200005ef + 1;
    }
    else {
      DAT_200005ef = 0;
      DAT_200005ec = '\0';
    }
  }
  else if (DAT_200005ee == 0) {
    FUN_080137ec(0xff);
    DAT_200005ee = DAT_200005ee + 1;
  }
  else if (DAT_200005ee < 0x67) {
    FUN_080137ec(DAT_200005ee - 1);
    DAT_200005ee = DAT_200005ee + 1;
  }
  else {
    DAT_200005ee = 0;
    DAT_200005eb = '\0';
  }
  return;
}



/* ENTRY 0x080139bc : FUN_080139bc */

void FUN_080139bc(int param_1)

{
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xe0:
    FUN_080137ec(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe1:
    FUN_080135b2(param_1 + 1);
    break;
  case 0xe2:
    FUN_080137c0(param_1 + 1);
    break;
  case 0xe3:
    FUN_080134e4(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe4:
    FUN_080135de(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe5:
    FUN_0801365c(*(undefined1 *)(param_1 + 2));
    break;
  case 0xe6:
    FUN_080136b2(param_1 + 1);
    break;
  case 0xe7:
    FUN_080138d0();
    FUN_0801333c(param_1 + 1);
  }
  return;
}



/* ENTRY 0x08013a48 : FUN_08013a48 */

void FUN_08013a48(undefined4 param_1)

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
  FUN_08023c80(&DAT_40010c00,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08023c80(&DAT_40010c00,&local_30);
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
  FUN_08023e18(&local_34);
  FUN_08024b42(&DAT_40004800,0x360,1);
  FUN_08024b42(&DAT_40004800,0x424,1);
  FUN_08024ae6(&DAT_40004800,0x80,1);
  FUN_08024ae6(&DAT_40004800,0x40,1);
  FUN_08023ed0(1);
  FUN_080238dc(&DAT_4002001c);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200038e8;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_4002001c,&local_60);
  FUN_08023a08(&DAT_4002001c,2,1);
  FUN_080238c8(&DAT_4002001c,0);
  FUN_080238dc(&DAT_40020030);
  local_60 = &DAT_40004804;
  local_5c = &DAT_200037e8;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_40020030,&local_60);
  FUN_080238c8(&DAT_40020030,1);
  local_34 = 0xc;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08023e18(&local_34);
  FUN_08024b74(&DAT_40004800,&local_2c);
  FUN_08024ad4(&DAT_40004800,1);
  return;
}



/* ENTRY 0x08013bd0 : FUN_08013bd0 */

void FUN_08013bd0(void)

{
  DAT_200005f0 = 0;
  return;
}



/* ENTRY 0x08013bd8 : FUN_08013bd8 */

void FUN_08013bd8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x20);
  if (iVar2 != 0) {
    FUN_080238b0(0x20);
    FUN_080238c8(&DAT_4002001c,0);
    FUN_08013bd0();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013c10 : FUN_08013c10 */

void FUN_08013c10(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x400);
  if (iVar2 == 0) {
    iVar2 = FUN_080239e8(0x200);
    if (iVar2 != 0) {
      FUN_080238b0(0x200);
    }
  }
  else {
    FUN_080238b0(0x400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013c54 : FUN_08013c54 */

void FUN_08013c54(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08024af6(&DAT_40004800,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_080239e0(&DAT_40020030);
    FUN_080238c8(&DAT_40020030,0);
    DAT_40020034 = 0x100;
    FUN_080238c8(&DAT_40020030,1);
    FUN_08024ac6(&DAT_40004800,0x424);
    FUN_0801ec3a(&DAT_200037e8,0x100 - sVar2);
    uVar1 = DAT_40004800;
    uVar1 = DAT_40004804;
  }
  iVar4 = FUN_08024af6(&DAT_40004800,0x727);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004800,0x727);
    FUN_08024b42(&DAT_40004800,0x727,0);
  }
  iVar4 = FUN_08024af6(&DAT_40004800,0x525);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004800,0x525);
  }
  iVar4 = FUN_08024af6(&DAT_40004800,0x260);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004800,0x260);
  }
  iVar4 = FUN_08024af6(&DAT_40004800,0x160);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004800,0x160);
  }
  uVar1 = DAT_40004800;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x08013d34 : FUN_08013d34 */

undefined4 FUN_08013d34(int param_1,uint param_2)

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
      (&DAT_200038e8)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_080238b0(0x20);
    FUN_080238c8(&DAT_4002001c,0);
    FUN_08023a6a(&DAT_4002001c,uVar2);
    FUN_080238c8(&DAT_4002001c,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x08013da8 : FUN_08013da8 */

void FUN_08013da8(undefined4 param_1)

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
  FUN_08023c80(&DAT_40011000,&local_30);
  local_30 = 0x800;
  local_2d = 0x48;
  FUN_08023c80(&DAT_40011000,&local_30);
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
  FUN_08023e18(&local_34);
  FUN_08024b42(&DAT_40004c00,0x360,1);
  FUN_08024b42(&DAT_40004c00,0x424,1);
  FUN_08024ae6(&DAT_40004c00,0x80,1);
  FUN_08024ae6(&DAT_40004c00,0x40,1);
  FUN_08023ed0(2,1);
  FUN_080238dc(&DAT_40020458);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_20003aa8;
  local_58 = 0x10;
  local_54 = 0xc0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_40020458,&local_60);
  FUN_08023a08(&DAT_40020458,2,1);
  FUN_080238c8(&DAT_40020458,0);
  FUN_080238dc(&DAT_40020430);
  local_60 = &DAT_40004c04;
  local_5c = &DAT_200039a8;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x20;
  local_3c = 0x2000;
  local_38 = 0;
  FUN_08023a18(&DAT_40020430,&local_60);
  FUN_080238c8(&DAT_40020430,1);
  local_34 = 0x3b;
  local_33 = 5;
  local_32 = 0;
  local_31 = 1;
  FUN_08023e18(&local_34);
  FUN_08024b74(&DAT_40004c00,&local_2c);
  FUN_08024ad4(&DAT_40004c00,1);
  return;
}



/* ENTRY 0x08013f30 : FUN_08013f30 */

void FUN_08013f30(void)

{
  DAT_200005f1 = 0;
  return;
}



/* ENTRY 0x08013f38 : FUN_08013f38 */

void FUN_08013f38(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x10020000);
  if (iVar2 != 0) {
    FUN_080238b0(0x10020000);
    FUN_080238c8(&DAT_40020458,0);
    FUN_08013f30();
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013f70 : FUN_08013f70 */

void FUN_08013f70(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar1);
  iVar2 = FUN_080239e8(0x10000400);
  if (iVar2 == 0) {
    iVar2 = FUN_080239e8(0x10000200);
    if (iVar2 != 0) {
      FUN_080238b0(0x10000200);
    }
  }
  else {
    FUN_080238b0(0x10000400);
  }
  FUN_08009410();
  return;
}



/* ENTRY 0x08013fac : FUN_08013fac */

void FUN_08013fac(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0800824c();
  DAT_20000035 = DAT_20000035 + '\x01';
  FUN_08008254(uVar3);
  iVar4 = FUN_08024af6(&DAT_40004c00,0x424);
  if (iVar4 != 0) {
    sVar2 = FUN_080239e0(&DAT_40020430);
    FUN_080238c8(&DAT_40020430,0);
    DAT_40020434 = 0x100;
    FUN_080238c8(&DAT_40020430,1);
    FUN_08024ac6(&DAT_40004c00,0x424);
    FUN_0801f6a6(&DAT_200039a8,0x100 - sVar2);
    uVar1 = DAT_40004c00;
    uVar1 = DAT_40004c04;
  }
  iVar4 = FUN_08024af6(&DAT_40004c00,0x727);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004c00,0x727);
    FUN_08024b42(&DAT_40004c00,0x727,0);
  }
  iVar4 = FUN_08024af6(&DAT_40004c00,0x525);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004c00,0x525);
  }
  iVar4 = FUN_08024af6(&DAT_40004c00,0x260);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004c00,0x260);
  }
  iVar4 = FUN_08024af6(&DAT_40004c00,0x160);
  if (iVar4 != 0) {
    FUN_08024ac6(&DAT_40004c00,0x160);
  }
  uVar1 = DAT_40004c00;
  FUN_08009410(uVar1);
  return;
}



/* ENTRY 0x0801408c : FUN_0801408c */

undefined4 FUN_0801408c(int param_1,uint param_2)

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
      (&DAT_20003aa8)[uVar2] = *(undefined1 *)(param_1 + uVar2);
      uVar2 = uVar2 + 1 & 0xff;
    }
    FUN_080238b0(0x10020000);
    FUN_080238c8(&DAT_40020458,0);
    FUN_08023a6a(&DAT_40020458,uVar2);
    FUN_080238c8(&DAT_40020458,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801410c : FUN_0801410c */

void FUN_0801410c(undefined4 param_1,undefined4 param_2)

{
  FUN_08023e0c(0x5555);
  FUN_08023df4(param_1);
  FUN_08023e00(param_2);
  FUN_08023de4();
  FUN_08023dd4();
  return;
}



/* ENTRY 0x08014130 : FUN_08014130 */

void FUN_08014130(void)

{
  FUN_0801a034();
  FUN_0801410c(4,0xad9);
  FUN_0801680e();
  FUN_0801687a();
  FUN_08016f3c();
  FUN_08016f74();
  return;
}



/* ENTRY 0x08014160 : FUN_08014160 */

void FUN_08014160(void)

{
  DAT_200006a4 = DAT_200006a4 + 1;
  FUN_08016750(&DAT_200006a0);
  if (DAT_20000630 < 3) {
    DAT_20000630 = DAT_20000630 + 1;
  }
  else {
    DAT_20000630 = '\0';
  }
  FUN_0801cdfa(DAT_20000630,&DAT_20003bb4,&DAT_20003bc6);
  return;
}



/* ENTRY 0x0801419a : FUN_0801419a */

void FUN_0801419a(void)

{
  FUN_08023de4();
  FUN_0801652c();
  FUN_08016a7a();
  FUN_08019746();
  FUN_0801e354();
  return;
}



/* ENTRY 0x080141c8 : FUN_080141c8 */

void FUN_080141c8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    if (diag_motionstep == '\x02') {
      iVar2 = DAT_20003284;
      if (DAT_20003284 < 0) {
        iVar2 = -DAT_20003284;
      }
      if ((iVar2 < 1000) && (DAT_200005f5 == '\x01')) {
        DAT_200002d4 = 8;
      }
    }
  }
  else if (cVar1 == '\x01') {
    DAT_2000031a = *(undefined2 *)(param_1 + 2);
  }
  else if ((cVar1 == '\x02') && (diag_motionstep == '\x02')) {
    FUN_08010826();
    DAT_2000031a = 0;
  }
  return;
}



/* ENTRY 0x08014226 : FUN_08014226 */

void FUN_08014226(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = DAT_2000031a;
    uVar2 = diag_halldebugflg;
    if (diag_motionstep == '\x02') {
      FUN_08010826();
      diag_halldebugflg = 0;
      DAT_2000031a = 0;
      uVar1 = DAT_2000031a;
      uVar2 = diag_halldebugflg;
    }
  }
  else {
    uVar1 = (short)param_2;
    uVar2 = param_1;
    if ((DAT_200002d4 != '\b') &&
       (uVar1 = DAT_2000031a, uVar2 = diag_halldebugflg, diag_motionstep == '\x02')) {
      iVar3 = diag_HallRSP;
      if (diag_HallRSP < 0) {
        iVar3 = -diag_HallRSP;
      }
      if (iVar3 < 100) {
        DAT_200005f5 = 0;
        DAT_200002d4 = '\b';
        uVar1 = (short)param_2;
        uVar2 = param_1;
      }
    }
  }
  diag_halldebugflg = uVar2;
  DAT_2000031a = uVar1;
  return;
}



/* ENTRY 0x08014288 : FUN_08014288 */

void FUN_08014288(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x13') {
    if (((*(char *)(param_1 + 2) == '\0') && (*(char *)(param_1 + 3) == '\0')) &&
       (DAT_2000314d == '\x01')) {
      FUN_0800faa0();
    }
  }
  else if ((cVar1 != -0x30) && (cVar1 == -0x17)) {
    FUN_080141c8(param_1 + 1);
  }
  return;
}



/* ENTRY 0x080142e4 : FUN_080142e4 */

void FUN_080142e4(void)

{
  int iVar1;
  
  if ((DAT_20000640 == '\x01') &&
     (DAT_2000063e = ((short)((int)(uint)DAT_200034b6 >> 4) - DAT_20000642) * 0x11,
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
      FUN_08023dbe(&DAT_40011000,2);
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
    goto code_r0x0801481c;
  case '\x01':
    DAT_2000068c = DAT_2000068c + 1;
    if (DAT_2000068c < 0x14) {
      DAT_422101b0 = 1;
      FUN_08023dbe(&DAT_40011000,2);
    }
    else if (DAT_2000068c < 0x28) {
      DAT_20000688 = DAT_20000688 + ((int)(uint)DAT_200034b6 >> 4);
    }
    else {
      DAT_20000642 = (ushort)(DAT_20000688 / 0x14);
      if ((DAT_20000642 < 0x43a) || (0xcae < DAT_20000642)) {
        DAT_20000640 = '\x02';
      }
      else {
        DAT_20000640 = '\x01';
      }
      FUN_08023dba(&DAT_40011000,2);
      DAT_20000664 = '\x02';
    }
    goto code_r0x0801481c;
  case '\x02':
    if (((diag_BatState == '\x01') && (diag_AgeModeflg == '\x01')) && (diag_AgeChgflg == '\0')) {
      if (99 < DAT_20000660) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_08023dbe(&DAT_40011000,2);
        DAT_2000065c = 0;
        DAT_20000664 = '\x06';
        goto code_r0x0801481c;
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
        FUN_08023dbe(&DAT_40011000,2);
        DAT_2000065c = 0;
        DAT_20000664 = '\x03';
        goto code_r0x0801481c;
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
        FUN_08023dbe(&DAT_40011000,2);
        DAT_20000666 = 0xfa;
        DAT_2000065c = 0;
        DAT_20000664 = '\x04';
        goto code_r0x0801481c;
      }
      DAT_20000648 = DAT_20000648 + 1;
    }
    else if (10 < DAT_20000648) {
      DAT_20000648 = DAT_20000648 - 1;
    }
    iVar1 = FUN_08020296();
    if ((diag_BatState == '\x01') &&
       (((DAT_2000066c < diag_TotalVoltage && (100 < iVar1)) ||
        (((int)(uint)DAT_20000674 < iVar1 && ((DAT_20000674 < 100 && (iVar1 < 0x65)))))))) {
      if (0x13 < DAT_2000064c) {
        DAT_2000068e = 0;
        DAT_422101b0 = 1;
        FUN_08023dbe(&DAT_40011000,2);
        DAT_20000678 = -6;
        DAT_2000065c = 0;
        DAT_20000664 = '\b';
        goto code_r0x0801481c;
      }
      DAT_2000064c = DAT_2000064c + 1;
    }
    else if (10 < DAT_2000064c) {
      DAT_2000064c = DAT_2000064c - 1;
    }
    if (DAT_20003123 < 0xb) {
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
      FUN_08023dbe(&DAT_40011000,2);
      DAT_20000679 = '\x01';
      DAT_20000664 = '\t';
    }
    if ((DAT_20003124 < 0xb) || (DAT_2000063e < 0x259)) {
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
      FUN_08023dbe(&DAT_40011000,2);
      DAT_2000067a = '\x01';
      DAT_20000664 = '\t';
    }
    goto code_r0x0801481c;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    break;
  case '\x06':
    FUN_08020296();
    if (((int)diag_TotalVoltage < 0x2d50) &&
       (((diag_AgeModeflg == '\0' || (diag_AgeChgflg == '\x01')) && (DAT_20000679 == '\0')))) {
      if (DAT_2000065c < 100) {
        DAT_2000065c = DAT_2000065c + 1;
      }
      else {
        FUN_08023dba(&DAT_40011000,2);
        DAT_20000666 = 0;
        DAT_20000678 = '\0';
        DAT_20000667 = 0;
        DAT_20000665 = '\0';
        DAT_20000664 = '\x02';
      }
    }
    goto code_r0x0801481c;
  default:
    goto code_r0x0801481c;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
  }
  iVar1 = FUN_08020296();
  if (((((int)diag_TotalVoltage < 0x2b5c) && (DAT_2000063e < 600)) &&
      ((DAT_20000668 < 8 && ((DAT_20000679 == '\0' && (DAT_2000067a == '\0')))))) &&
     (((diag_TotalVoltage < DAT_20000670 && (100 < iVar1)) ||
      ((iVar1 < (int)(uint)DAT_20000676 && (iVar1 < 0x65)))))) {
    if (DAT_2000065c < 100) {
      DAT_2000065c = DAT_2000065c + 1;
    }
    else {
      FUN_08023dba(&DAT_40011000,2);
      DAT_20000666 = 0;
      DAT_20000678 = '\0';
      DAT_20000667 = 0;
      DAT_20000665 = '\0';
      DAT_20000664 = '\x02';
    }
  }
code_r0x0801481c:
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
    FUN_0800e09e(2);
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



/* ENTRY 0x08014968 : FUN_08014968 */

void FUN_08014968(void)

{
  int iVar1;
  
  if (diag_MotorTemp < 0x8d) {
    if (DAT_20003b6c < 0xb) {
      DAT_20003b6c = 0;
      DAT_200030ce = DAT_200030ce & 0xffef;
    }
    else {
      DAT_20003b6c = DAT_20003b6c - 10;
    }
  }
  else if (DAT_20003b6c < 0xfa) {
    DAT_20003b6c = DAT_20003b6c + 1;
    DAT_200030ce = DAT_200030ce | 0x10;
  }
  if (10 < DAT_20003b6c) {
    iVar1 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar1 = -diag_VehicleSpeed;
    }
    if (iVar1 < 6000) {
      FUN_0800facc();
    }
  }
  return;
}



/* ENTRY 0x080149de : FUN_080149de */

void FUN_080149de(void)

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
      if ((int)((uint)DAT_200031ae * 1000) <= iVar2) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 < (int)((uint)DAT_200031b0 * 1000)) {
          if (DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) goto LAB_08014a84;
          bVar3 = DAT_20000638 % 0x32 == 10;
          do {
            do {
              if (!bVar3) goto LAB_08014cc4;
LAB_08014a84:
              bVar3 = DAT_200031bc == 1;
            } while (!bVar3);
            if (DAT_200031ae == 0) goto LAB_08014cc4;
            bVar3 = DAT_20003142 == '\0';
          } while (!bVar3);
          FUN_0800e09e(1);
        }
        else {
          iVar2 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar2 = -diag_VehicleSpeed;
          }
          if (iVar2 < (int)((uint)DAT_200031b2 * 1000)) {
            if ((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
                (DAT_20000638 % 0x32 == 0x14)) &&
               (((DAT_200031bc == 1 && (DAT_200031b0 != 0)) && (DAT_20003142 == '\0')))) {
              FUN_0800e09e(1);
            }
          }
          else if (DAT_200031bc == 1) {
            if (((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
                 (DAT_20000638 % 0x32 == 0x14)) ||
                ((DAT_20000638 % 0x32 == 0x1e || (DAT_20000638 % 0x32 == 0x28)))) &&
               (DAT_20003142 == '\0')) {
              FUN_0800e09e(1);
            }
          }
          else if ((DAT_2000067c == 0) && (DAT_20003142 == '\0')) {
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
    else if (DAT_200031bc == 1) {
      if (((((DAT_20000638 == (DAT_20000638 / 0x32) * 0x32) || (DAT_20000638 % 0x32 == 10)) ||
           (DAT_20000638 % 0x32 == 0x14)) ||
          ((DAT_20000638 % 0x32 == 0x1e || (DAT_20000638 % 0x32 == 0x28)))) &&
         (DAT_20003142 == '\0')) {
        FUN_0800e09e(1);
      }
    }
    else if ((DAT_2000067c == 0) && (DAT_20003142 == '\0')) {
      if (DAT_2000069c == 0) {
        DAT_200006a0 = 2;
        DAT_2000067c = 300;
      }
      else {
        DAT_200006a0 = 6;
        DAT_2000067c = 300;
      }
    }
LAB_08014cc4:
    if ((diag_TotalCurrent < 0x128f) || (diag_cartstep == '\0')) {
      DAT_20000680 = 0x32;
    }
    else {
      bVar1 = DAT_20000680 + 1;
      bVar3 = 0x1e < DAT_20000680;
      DAT_20000680 = bVar1;
      if (bVar3) {
        FUN_0800e09e(3);
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
          FUN_0800e09e(2);
        }
      }
      else {
        FUN_0800e09e(2);
        DAT_2000067e = 0;
      }
    }
    if (0 < DAT_20000682) {
      DAT_20000682 = DAT_20000682 + -1;
    }
    if ((DAT_20003b6c != '\0') && (DAT_20000682 == 0)) {
      if (DAT_200031bc == 1) {
        FUN_0800e09e();
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



/* ENTRY 0x08014db2 : FUN_08014db2 */

void FUN_08014db2(void)

{
  DAT_20000638 = DAT_20000638 + 1;
  FUN_080149de();
  FUN_08014968();
  FUN_080194ea();
  FUN_080142e4();
  return;
}



/* ENTRY 0x08014dd0 : FUN_08014dd0 */

void FUN_08014dd0(undefined4 param_1)

{
  switch(param_1) {
  case 0x1a:
    FUN_0800e09e(1);
    DAT_200006c6 = 1;
    break;
  case 0x21:
    break;
  case 0x22:
    if (DAT_200031bc == 1) {
      FUN_0800e09e(3);
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
    FUN_0800e09e(1);
    DAT_200006c7 = 1;
    break;
  case 0x24:
    if (DAT_200031bc == 1) {
      FUN_0800e09e(3);
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
    if (DAT_200031bc == 1) {
      FUN_0800e09e(3);
    }
    if (DAT_200031bc == 0) {
      if (DAT_2000069c == 0) {
        DAT_200006a0 = 0xf;
      }
      else {
        DAT_200006a0 = 0xf;
      }
    }
    break;
  case 0x26:
    if ((DAT_20003142 == '\0') && (diag_AgeModeflg == '\0')) {
      FUN_0800e09e(4);
    }
  }
  return;
}



/* ENTRY 0x08014ec4 : FUN_08014ec4 */

void FUN_08014ec4(uint param_1)

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



/* ENTRY 0x08014f6c : FUN_08014f6c */

void FUN_08014f6c(void)

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
  
  if (((DAT_20003142 == '\x01') || (DAT_2000314d == '\x01')) || (diag_AgeModeflg != '\0')) {
    DAT_20000692 = 0;
    DAT_20000694 = 0;
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
    if (DAT_20000694 < iVar1) {
      DAT_20000694 = DAT_20000694 + 100;
    }
    else if (iVar1 + 100 < (int)DAT_20000694) {
      DAT_20000694 = DAT_20000694 + -100;
    }
    local_34 = DAT_20003b7c;
    local_32 = DAT_20003b7e;
    local_30 = DAT_20003b80;
    local_2e = DAT_20003b82 + DAT_20000694;
    local_2c = DAT_20003b84;
    local_2a = DAT_20003b86;
    local_28 = DAT_20003b88;
    local_1a = DAT_20003b96;
    local_18 = DAT_20003b98;
    local_16 = DAT_20003b9a;
    local_14 = DAT_20003b9c;
    local_12 = DAT_20003b9e;
    local_10 = DAT_20003ba0;
    local_26 = DAT_20003b8a;
    local_24 = DAT_20003b8c;
    local_22 = DAT_20003b8e;
    local_20 = DAT_20003b90;
    local_1e = DAT_20003b92;
    local_1c = DAT_20003b94;
    FUN_0800aba0(&local_34);
  }
  return;
}



/* ENTRY 0x080150d2 : FUN_080150d2 */

void FUN_080150d2(void)

{
  DAT_20003b7c = 0xe000;
  DAT_20003b7e = 0x28;
  DAT_20003b80 = 10000;
  DAT_20003b82 = 32000;
  DAT_20003b84 = 300;
  DAT_20003b86 = 0x9c4;
  DAT_20003b88 = 0x5a;
  DAT_20003b96 = 0x3c;
  DAT_20003b98 = 8000;
  DAT_20003b9a = 26000;
  DAT_20003b9c = 1000;
  DAT_20003b9e = 0x9c4;
  DAT_20003ba0 = 0x50;
  DAT_20003b8a = 0x5a;
  DAT_20003b8c = 6000;
  DAT_20003b8e = 22000;
  DAT_20003b90 = 1000;
  DAT_20003b92 = 0x9c4;
  DAT_20003b94 = 0x50;
  return;
}



/* ENTRY 0x08015146 : FUN_08015146 */

void FUN_08015146(void)

{
  DAT_2000317e = DAT_20003b7c;
  DAT_20003180 = DAT_20003b7e;
  DAT_20003182 = DAT_20003b80;
  DAT_20003184 = DAT_20003b82;
  DAT_20003186 = DAT_20003b84;
  DAT_20003188 = DAT_20003b86;
  DAT_2000318a = DAT_20003b88;
  DAT_20003198 = DAT_20003b96;
  DAT_2000319a = DAT_20003b98;
  DAT_2000319c = DAT_20003b9a;
  DAT_2000319e = DAT_20003b9c;
  DAT_200031a0 = DAT_20003b9e;
  DAT_200031a2 = DAT_20003ba0;
  DAT_2000318c = DAT_20003b8a;
  DAT_2000318e = DAT_20003b8c;
  DAT_20003190 = DAT_20003b8e;
  DAT_20003192 = DAT_20003b90;
  DAT_20003194 = DAT_20003b92;
  DAT_20003196 = DAT_20003b94;
  return;
}



/* ENTRY 0x080151e4 : FUN_080151e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080151e4(void)

{
  _DAT_20003160 = 0x5465;
  DAT_20003162 = 0;
  _DAT_20003164 = 0x1450;
  DAT_20003166 = 0;
  _DAT_20003168 = 0;
  DAT_2000316a = 0;
  DAT_2000316c = 0;
  DAT_2000316e = 0;
  DAT_20003170 = 0;
  DAT_20003172 = 0;
  DAT_20003174 = 500;
  DAT_20003176 = 0;
  DAT_20003178 = 0;
  DAT_2000317a = 0;
  DAT_2000317c = 0;
  DAT_200031a4 = 0;
  DAT_200031a6 = 0;
  DAT_200031a8 = 0;
  DAT_200031aa = 0;
  DAT_200031ac = 100;
  DAT_200031b8 = 0;
  DAT_200031ba = 0;
  DAT_200031be = 0;
  DAT_200031c0 = 0;
  DAT_200031de = 0;
  DAT_200031f8 = 0;
  DAT_200031fc = 0;
  DAT_20003200 = 600;
  DAT_2000320e = 0;
  DAT_2000320f = 0;
  return;
}



/* ENTRY 0x0801525e : FUN_0801525e */

void FUN_0801525e(void)

{
  FUN_080150d2();
  FUN_08015146();
  DAT_200031ae = 0x12;
  DAT_200031b0 = 0x13;
  DAT_200031b2 = 0x14;
  DAT_200031b4 = 0x14;
  DAT_200031bc = 0;
  DAT_200031b6 = 1;
  DAT_200031d4 = 0;
  DAT_200031d6 = 0;
  DAT_200031d8 = 2;
  DAT_200031da = 0;
  DAT_200031dc = 0;
  DAT_200031e0 = 0xff;
  DAT_200031e1 = 0;
  DAT_200031e2 = 0;
  DAT_200031e3 = 0;
  DAT_200031e4 = 0;
  DAT_200031e5 = 0xff;
  DAT_200031e6 = 0;
  DAT_200031e7 = 0;
  DAT_200031e8 = 0;
  DAT_200031e9 = 0;
  DAT_200031ea = 0xff;
  DAT_200031eb = 0;
  DAT_200031ec = 0xa0;
  DAT_200031ed = 0x20;
  DAT_200031ee = 0xf0;
  DAT_200031ef = 0;
  DAT_200031f0 = 0;
  DAT_200031f2 = 0xff;
  DAT_200031f3 = 0xff;
  DAT_200031f4 = 0xff;
  DAT_200031f5 = 0xff;
  DAT_20003204 = 1;
  DAT_20003202 = 1;
  DAT_2000320c = 0;
  FUN_080151e4();
  FUN_0800e6ec();
  return;
}



/* ENTRY 0x08015368 : FUN_08015368 */

void FUN_08015368(void)

{
  uint uVar1;
  
  if (DAT_200006c2 != '\0') {
    for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_200031c2)[uVar1] = 0;
    }
  }
  FUN_0801525e();
  DAT_20003206 = 0x31;
  DAT_20003207 = 0x32;
  DAT_20003208 = 0x33;
  DAT_20003209 = 0x34;
  DAT_2000320a = 0x35;
  DAT_2000320b = 0x36;
  return;
}



/* ENTRY 0x080153c4 : FUN_080153c4 */

void FUN_080153c4(void)

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
    if ((((bool)DAT_2000070a) && ((bool)DAT_2000070b)) || (DAT_20003202 == 0)) {
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
          FUN_0800e09e(1);
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
          FUN_0800e09e(2);
          DAT_20000710 = 0;
        }
        DAT_20000841 = '\0';
      }
      DAT_20000714 = 0;
    }
  }
  return;
}



/* ENTRY 0x08015522 : FUN_08015522 */

void FUN_08015522(void)

{
  FUN_080153c4();
  return;
}



/* ENTRY 0x0801552a : FUN_0801552a */

void FUN_0801552a(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  
  if (DAT_200006b8 != 0x12) {
    bVar3 = DAT_200006b8 == 0x14;
    do {
      if (!bVar3) goto LAB_08015716;
      bVar3 = DAT_200006c0 == '\x01';
    } while (!bVar3);
  }
  bVar3 = diag_cartstep == '\0';
  do {
    if (bVar3) goto LAB_08015716;
    bVar3 = true;
  } while (diag_cartstep == '\b');
  if (((DAT_200031da == 1) || (DAT_200006d3 == '\x02')) &&
     (DAT_2000084c = DAT_2000084c + 1, DAT_2000084c == (DAT_2000084c / 2) * 2)) {
    if (DAT_20000850 == 0) {
      DAT_20000850 = 1;
    }
    else {
      DAT_20000850 = 0;
    }
  }
  if (((DAT_200031da == 1) || (DAT_200006d3 == '\x02')) && (DAT_200006b8 != 0x13)) {
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
    iVar2 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar2 = -diag_VehicleSpeed;
    }
    if (iVar2 < 10000) {
      DAT_20000720 = 0;
      iVar2 = FUN_0800fad6();
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if ((iVar2 < 0x2d000) && (iVar2 = FUN_0800fade(), 0x2d000 < iVar2)) {
        iVar2 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar2 = -diag_VehicleSpeed;
        }
        if (iVar2 == 0) {
          DAT_20000724 = 0;
          goto LAB_08015720;
        }
      }
      iVar2 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar2 = -diag_VehicleSpeed;
      }
      DAT_20000724 = (iVar2 * 800) / 1000 + 100;
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
        DAT_20000720 = (iVar2 * 0x41) / 1000;
        DAT_20000724 = 0xffff;
      }
      else {
        DAT_20000720 = 0xffff;
        DAT_20000724 = 0xffff;
      }
    }
  }
LAB_08015720:
  if (DAT_20000724 < DAT_20000720) {
    uVar1 = (undefined2)DAT_20000720;
  }
  else {
    uVar1 = (undefined2)DAT_20000724;
  }
  DAT_40000840 = uVar1;
  return;
LAB_08015716:
  DAT_20000720 = 0;
  DAT_20000724 = 0;
  goto LAB_08015720;
}



/* ENTRY 0x0801573c : FUN_0801573c */

void FUN_0801573c(void)

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
  iVar1 = FUN_0800e310();
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
    FUN_0800e09e(1);
    FUN_08021bb2(3);
  }
  if (DAT_200006d3 == '\0') {
    FUN_0801552a((&DAT_20000718)[DAT_20000849]);
  }
  else {
    FUN_0801552a(DAT_20000719);
    DAT_200006b8 = 0x12;
  }
  return;
}



/* ENTRY 0x08015876 : FUN_08015876 */

void FUN_08015876(void)

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



/* ENTRY 0x080158e6 : FUN_080158e6 */

void FUN_080158e6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 >> 8;
  *(undefined1 *)(param_1 + iVar1 % 3) = 0;
  *(char *)(param_1 + (iVar1 + 1) % 3) = -1 - (char)param_2;
  *(char *)(param_1 + (iVar1 + 2) % 3) = (char)param_2;
  return;
}



/* ENTRY 0x0801592a : FUN_0801592a */

undefined2 FUN_0801592a(void)

{
  DAT_20000854 = DAT_20000854 + 1;
  if ((ushort)((ushort)DAT_20000818 * 4) <= DAT_20000854) {
    DAT_20000854 = 0;
  }
  return (&DAT_20000728)[(int)(uint)DAT_20000854 >> 2];
}



/* ENTRY 0x0801595a : FUN_0801595a */

void FUN_0801595a(void)

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
  iVar4 = FUN_0800fad6();
  iVar6 = 0;
  if ((iVar4 < 0x3001) || (DAT_2000314d != '\0')) {
    if ((iVar4 < -0x3000) && (DAT_2000314d == '\0')) {
      iVar7 = 1;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x2000) || (DAT_2000314d != '\0')) {
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
        (&DAT_20003ba2)[uVar5] = 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
        (&DAT_20003ba2)[uVar5] = 0;
      }
    }
    FUN_08016f80(&DAT_20003ba2);
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
      if ((DAT_2000085c < DAT_20000858) && (DAT_200031da == 0)) {
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
        if (DAT_200031da == 1) {
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
              (&DAT_20000819)[uVar5] = (&DAT_08027b92)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000868 = DAT_20000868 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_08027ba4)[(uint)DAT_20000868 % 0xc + uVar5];
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
              (&DAT_20000819)[uVar5] = (&DAT_08027b92)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else if (iVar7 == 2) {
            DAT_20000868 = DAT_20000868 - 1;
            for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
              (&DAT_20000819)[uVar5] = (&DAT_08027ba4)[(uint)DAT_20000868 % 0xc + uVar5];
            }
          }
          else {
            DAT_20000868 = 0;
          }
        }
      }
    }
    for (uVar5 = 0; uVar5 < 0x12; uVar5 = uVar5 + 1 & 0xff) {
      (&DAT_20003ba2)[uVar5] = 0;
    }
    if (DAT_2000314d == '\0') {
      if (DAT_20000868 == 0) {
        if ((bVar1) && (bVar8)) {
          for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
            (&DAT_20003ba3)[uVar5 * 3] = (char)((iVar6 * 0xff) / 0x14);
          }
        }
        else if (bVar1) {
          DAT_20003ba2 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003ba3 = DAT_20003ba2;
        }
        else if (bVar8) {
          DAT_20003bb1 = (undefined1)((iVar6 * 0xff) / 0x14);
          DAT_20003bb2 = DAT_20003bb1;
        }
      }
      else {
        for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
          (&DAT_20003ba2)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000819)[uVar5] * 0x14) / 0x28);
          (&DAT_20003ba3)[uVar5 * 3] = (char)(((uint)(byte)(&DAT_20000819)[uVar5] * 0x14) / 0x14);
        }
      }
    }
    else if (diag_BatState == '\x01') {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801592a();
        (&DAT_20003ba2)[extraout_r3 * 3] = 0;
        (&DAT_20003ba3)[extraout_r3 * 3] =
             (char)((int)(((iVar4 * 0xff) / 18000 & 0xffffU) * iVar6) / 0x14);
        (&DAT_20003ba4)[extraout_r3 * 3] = 0;
        uVar5 = extraout_r3 + 1U & 0xff;
      }
    }
    else if (DAT_200031d8 == 0) {
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801592a();
        bVar3 = DAT_200031e2;
        bVar2 = DAT_200031e0;
        uVar5 = (iVar4 * 0xff) / 18000 & 0xffff;
        local_30 = (uint)CONCAT12(DAT_200031e0,(ushort)DAT_200031e1);
        (&DAT_20003ba2)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003ba3)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003ba4)[extraout_r3_00 * 3] = (char)((int)(uVar5 * iVar6) / 0x14);
        (&DAT_20003ba2)[extraout_r3_00 * 3] =
             (char)(((local_30 & 0xffff) * (uint)(byte)(&DAT_20003ba2)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003ba3)[extraout_r3_00 * 3] =
             (char)(((uint)bVar2 * (uint)(byte)(&DAT_20003ba3)[extraout_r3_00 * 3]) / 0xff);
        (&DAT_20003ba4)[extraout_r3_00 * 3] =
             (char)(((uint)bVar3 * (uint)(byte)(&DAT_20003ba4)[extraout_r3_00 * 3]) / 0xff);
        uVar5 = extraout_r3_00 + 1U & 0xff;
      }
    }
    else if (DAT_200031d8 == 1) {
      FUN_080158e6(&local_28,(ushort)DAT_200006a8);
      uVar5 = 0;
      while (uVar5 < 6) {
        iVar4 = FUN_0801592a();
        (&DAT_20003ba2)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 & 0xff)) / 18000);
        (&DAT_20003ba3)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 8 & 0xff)) / 18000);
        (&DAT_20003ba4)[extraout_r3_01 * 3] = (char)((iVar4 * (local_28 >> 0x10 & 0xff)) / 18000);
        uVar5 = extraout_r3_01 + 1U & 0xff;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < 6; uVar5 = uVar5 + 1 & 0xff) {
        FUN_080158e6(&local_28,uVar5 * 0x6d + (uint)(ushort)DAT_200006a8 * -10 & 0xffff);
        (&DAT_20003ba2)[uVar5 * 3] = (undefined1)local_28;
        (&DAT_20003ba3)[uVar5 * 3] = local_28._1_1_;
        (&DAT_20003ba4)[uVar5 * 3] = local_28._2_1_;
      }
    }
    FUN_08016f80(&DAT_20003ba2);
  }
  return;
}



/* ENTRY 0x08015f4c : FUN_08015f4c */

void FUN_08015f4c(void)

{
  int iVar1;
  
  DAT_200006a8 = DAT_200006a8 + 1;
  FUN_0801595a();
  FUN_08015876();
  FUN_0801573c();
  FUN_08014f6c();
  if ((DAT_2000314c & 1) != 0) {
    if ((DAT_2000082b == '\0') && (iVar1 = FUN_0800e70a(DAT_20003100 / 10 & 0xffff), iVar1 == 1)) {
      FUN_0800e63c();
    }
    DAT_2000082b = '\x01';
    DAT_2000314c = DAT_2000314c & 0xfe;
  }
  return;
}



/* ENTRY 0x08015fac : FUN_08015fac */

void FUN_08015fac(void)

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



/* ENTRY 0x08016032 : FUN_08016032 */

void FUN_08016032(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = diag_VehicleSpeed;
  if ((int)diag_VehicleSpeed < 0) {
    uVar4 = -diag_VehicleSpeed;
  }
  if (DAT_20003125 == 0) {
    if (DAT_20003126 == 0) {
      if ((DAT_2000311f & 0x70) == 0) {
        if ((DAT_20003140 < 0xc9) || (DAT_20003140 == 0xe0)) {
          if (uVar4 == 0) {
            if ((diag_BatState == '\x01') && (diag_ChgStepShow == '\x02')) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            iVar3 = FUN_080202f0();
            if ((iVar3 < 7) && (!bVar1)) {
              DAT_20000870 = (byte)iVar3;
            }
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              if (((DAT_20000870 != 0) || (param_1 % 10 < 5)) || (bVar1)) {
                (&DAT_20000823)[uVar4] = (&DAT_08027c16)[uVar4];
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
            bVar1 = (DAT_2000320f & 1) != 0;
            if (bVar1) {
              uVar4 = (uVar4 * 0x3e) / 100;
            }
            for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
              (&DAT_20000823)[uVar2] =
                   (&DAT_08027bb6)[uVar2 + ((uVar4 / 10000) % 10) * 8] |
                   (&DAT_08027bb6)[uVar2 + ((uVar4 / 1000) % 10) * 8] << 4;
            }
            DAT_2000082a = bVar1 << param_1 % 9;
          }
        }
        else {
          if (param_1 % 0x3c < 2) {
            if (DAT_20003140 == 0xe2) {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] = 0;
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] = (&DAT_08027c06)[uVar4];
              }
            }
          }
          else if (param_1 % 0x3c < 0xc) {
            if (DAT_20003121 == 0) {
              if (DAT_20003140 == 0xe2) {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  (&DAT_20000823)[uVar4] = (&DAT_08027c9e)[uVar4];
                }
              }
              else {
                for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                  uVar2 = (byte)DAT_20003140 - 200 & 0xff;
                  (&DAT_20000823)[uVar4] =
                       (&DAT_08027bb6)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                       (&DAT_08027bb6)[uVar4 + (uVar2 % 10) * 8] << 4;
                }
              }
            }
            else {
              for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
                (&DAT_20000823)[uVar4] =
                     (&DAT_08027c0e)[uVar4] |
                     (&DAT_08027bb6)[uVar4 + ((uint)DAT_20003121 % 10) * 8] << 4;
              }
            }
          }
          else if (DAT_20003140 == 0xe2) {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              (&DAT_20000823)[uVar4] = (&DAT_08027c9e)[uVar4];
            }
          }
          else {
            for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
              uVar2 = (byte)DAT_20003140 - 200 & 0xff;
              (&DAT_20000823)[uVar4] =
                   (&DAT_08027bb6)[uVar4 + ((uVar2 / 10) % 10) * 8] |
                   (&DAT_08027bb6)[uVar4 + (uVar2 % 10) * 8] << 4;
            }
          }
          if ((param_1 % 0x1e == 3) &&
             (((DAT_200030ce & 0x200) == 0x200 || ((DAT_200030ce & 0x400) == 0x400)))) {
            FUN_0800e09e(3);
          }
        }
      }
      else {
        for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1 & 0xff) {
          (&DAT_20000823)[uVar4] =
               (&DAT_08027bb6)[uVar4 + ((DAT_20003120 / 10) % 10) * 8] |
               (&DAT_08027bb6)[uVar4 + ((uint)DAT_20003120 % 10) * 8] << 4;
        }
      }
    }
    else {
      uVar4 = DAT_20003126 - 1 & 0xff;
      if (5 < uVar4) {
        uVar4 = 5;
      }
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        (&DAT_20000823)[uVar2] = (&UNK_08027c6e)[uVar2 + uVar4 * 8];
      }
      DAT_20003126 = DAT_20003126 + 1;
      if (0x14 < DAT_20003126) {
        DAT_20003126 = 0;
      }
    }
  }
  else {
    uVar4 = DAT_20003125 - 1 & 0xff;
    if (9 < uVar4) {
      uVar4 = 9;
    }
    for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20000823)[uVar2] = (&UNK_08027c1e)[uVar2 + uVar4 * 8];
    }
    DAT_20003125 = DAT_20003125 + 1;
    if (0x14 < DAT_20003125) {
      DAT_20003125 = 0;
    }
  }
  FUN_0801d07c(&DAT_20000823);
  return;
}



/* ENTRY 0x0801641c : FUN_0801641c */

void FUN_0801641c(void)

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
  if ((((DAT_20000720 != 0) || (DAT_20000724 != 0)) && (DAT_2000314e == '\x01')) &&
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
    FUN_08023dbe(&DAT_40010c00,0x200);
  }
  else {
    FUN_08023dba(&DAT_40010c00,0x200);
  }
  return;
}



/* ENTRY 0x0801652c : FUN_0801652c */

void FUN_0801652c(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (DAT_200031b6 == 1) {
    FUN_08023dbe(&DAT_40011000,0x80);
  }
  else if (DAT_200005f4 == '\x01') {
    FUN_08023dba(&DAT_40011000,0x80);
  }
  FUN_0801641c();
  if ((DAT_200006ac == (DAT_200006ac / 0x14) * 0x14) && (DAT_200006c2 == '\x01')) {
    FUN_0800e09e();
  }
  if (DAT_200006ac % 5 < 3) {
    DAT_42218188 = 0;
  }
  else {
    DAT_42218188 = 1;
  }
  if ((DAT_2000082c == '\0') && (diag_AgeModeflg == '\0')) {
    if ((diag_VehicleSpeed == 0) && (iVar1 = FUN_0800e2b8(0), iVar1 != 0)) {
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
      if ((iVar1 < 10000) && (iVar1 = FUN_0800e2b8(0), iVar1 != 0)) {
        FUN_0800ae98();
        FUN_0800e09e(1);
        DAT_2000082c = '\x02';
      }
    }
  }
  if ((((((DAT_200005f5 == '\0') || (DAT_2000063c == '\0')) || (DAT_200006c2 == '\x01')) ||
       ((DAT_200006c6 == '\x01' || (DAT_200006c7 == '\x01')))) ||
      ((DAT_200006c4 == '\x01' || ((diag_AgeModeflg != '\0' || (diag_cartstep == '\a')))))) ||
     (DAT_2000311f != '\0')) {
    DAT_200005f4 = 0;
  }
  else {
    DAT_200005f4 = 1;
  }
  if (DAT_20003200 == 0) {
    DAT_200030e8 = 0;
  }
  if (DAT_200006ac % 6 == 2) {
    for (bVar3 = 0; DAT_20003140 = 0, bVar3 < 0x28; bVar3 = bVar3 + 1) {
      DAT_20000830 = DAT_20000830 + 1;
      uVar2 = DAT_20000830 % 0x28;
      DAT_20003140 = 0;
      if (uVar2 < 0x20) {
        if ((diag_allwarnbit >> uVar2 & 1) != 0) {
          if (DAT_20000830 % 0x140 < 0x118) {
            DAT_20003140 = (short)uVar2 + 0xc9;
          }
          break;
        }
      }
      else if (((int)(uint)DAT_200030d0 >> (uVar2 - 0x20 & 0xff) & 1U) != 0) {
        if (DAT_20000830 % 0x140 < 0x118) {
          DAT_20003140 = (short)uVar2 + 0xc9;
        }
        break;
      }
    }
  }
  DAT_2000312c = DAT_2000312c | diag_allwarnbit;
  FUN_08016032(DAT_200006ac);
  FUN_0801d274();
  FUN_08015fac();
  if ((DAT_2000314b != '\0') && (DAT_2000314d != '\0')) {
    FUN_0800e63c();
    DAT_2000314b = '\0';
  }
  DAT_200006ac = DAT_200006ac + 1;
  return;
}



/* ENTRY 0x08016750 : FUN_08016750 */

void FUN_08016750(void)

{
  return;
}



/* ENTRY 0x08016752 : FUN_08016752 */

void FUN_08016752(void)

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
  
  FUN_08023f18(9,1);
  local_24 = 0x200;
  local_22 = 3;
  local_21 = 0x18;
  FUN_08023c80(&DAT_40010c00,&local_24);
  FUN_08023ee8(4,1);
  local_c = 2000;
  local_10 = 0x47;
  local_a = 0;
  local_e = 0;
  FUN_080249f4(&DAT_40000800,&local_10);
  local_20 = 0x70;
  local_1e = 1;
  local_18 = 2;
  local_1a = 0;
  FUN_080248d2(&DAT_40000800,&local_20);
  FUN_08024936(&DAT_40000800,8);
  FUN_08024284(&DAT_40000800,1);
  FUN_080242e0(&DAT_40000800,1);
  FUN_080242f2(&DAT_40000800,1);
  return;
}



/* ENTRY 0x080167e6 : FUN_080167e6 */

void FUN_080167e6(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(4,1);
  local_8 = 0x48030800;
  FUN_08023c80(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x0801680e : FUN_0801680e */

void FUN_0801680e(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(0x3d,1);
  FUN_08023d40(0x300200,1);
  FUN_0801d0c0(7);
  DAT_20003125 = 1;
  FUN_0801d40a();
  FUN_0801d774();
  local_8 = 0x10010002;
  FUN_08023c80(&DAT_40011000,&local_8);
  FUN_080167e6();
  DAT_20000698 = 0;
  local_8 = 0x10030004;
  FUN_08023c80(&DAT_40010c00,&local_8);
  FUN_08016752();
  return;
}



/* ENTRY 0x0801687a : FUN_0801687a */

void FUN_0801687a(void)

{
  int iVar1;
  
  iVar1 = FUN_0800e6b4();
  if (iVar1 == 0) {
    DAT_20003264 = 0x20220430;
    FUN_0801a976();
    FUN_08015368();
  }
  else if (DAT_20003264 != 0x20220430) {
    DAT_20003264 = 0x20220430;
    FUN_0801a976();
    FUN_08015368();
  }
  FUN_0801a976();
  if (DAT_20003200 == 0) {
    DAT_200030ec = 30000;
  }
  else {
    if (DAT_20003200 < 0x3c) {
      DAT_20003200 = 0x3c;
    }
    if (0x3840 < DAT_20003200) {
      DAT_20003200 = 0x3840;
    }
    DAT_200030ec = (uint)DAT_20003200 * 0x32;
  }
  FUN_080150d2();
  DAT_20003b7c = DAT_2000317e;
  FUN_0800aba0(&DAT_20003b7c);
  FUN_0800adda();
  DAT_2000063c = DAT_200031f0 == 0;
  DAT_200031da = 0;
  if ((((0x2f < DAT_200031f2) && (DAT_200031f2 < 0x3a)) && (0x2f < DAT_200031f3)) &&
     (((DAT_200031f3 < 0x3a && (0x2f < DAT_200031f4)) &&
      ((DAT_200031f4 < 0x3a && ((0x2f < DAT_200031f5 && (DAT_200031f5 < 0x3a)))))))) {
    DAT_20000971 = 1;
  }
  DAT_2000069c = (uint)DAT_200031d4;
  DAT_200005f5 = 1;
  FUN_0800faec(((int)DAT_20003172 << 0xc) / 10);
  FUN_0800fb0c(((int)DAT_20003174 << 0xc) / 10);
  FUN_0800fb2e(DAT_2000320e);
  DAT_20003104 = FUN_0800e78c();
  if (((DAT_200031b8 == (DAT_200031ba ^ 0xffff)) && (-200 < (short)DAT_200031b8)) &&
     ((short)DAT_200031b8 < 200)) {
    DAT_200002d8 = (int)(short)DAT_200031b8;
  }
  FUN_08014ec4(DAT_200031ac);
  return;
}



/* ENTRY 0x08016a7a : FUN_08016a7a */

void FUN_08016a7a(void)

{
  int iVar1;
  
  if (diag_AgeModeflg != '\0') {
    if (diag_AgeModeflg == '\x01') {
      if (((diag_MosTemp < 0x53) && (diag_MotorTemp < 0x7e)) && (0x286d < diag_TotalVoltage)) {
        if (((DAT_20000836 != '\x05') && (diag_TotalVoltage < 0x2a30)) && (diag_BatState == '\x01'))
        {
          DAT_20000836 = '\x06';
          DAT_20000838 = 0;
          DAT_2000083c = 0;
          diag_AgeChgflg = 1;
          FUN_08014226(0);
        }
      }
      else {
        DAT_20000836 = '\x05';
        DAT_20000838 = 0;
        DAT_2000083c = 0;
        FUN_08014226(0);
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
        if (DAT_2000314d == '\x01') {
          iVar1 = FUN_0800fad6();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000710 == 0)) {
            DAT_20000838 = 1;
            DAT_20000836 = '\x02';
            DAT_2000083c = 0;
            FUN_08014226(4,1);
          }
        }
        DAT_200006d3 = 2;
        break;
      case '\x02':
        iVar1 = FUN_0800fad6();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000710 == 0)) {
          if ((((diag_MosTemp < 0x47) && (diag_MotorTemp < 0x6f)) && (DAT_2000083c < 0xbb9)) ||
             (DAT_2000083c < 0x65)) {
            if (DAT_20000838 < 0x9c4) {
              DAT_20000838 = DAT_20000838 + 10;
              FUN_08014226(4,(int)DAT_20000838);
            }
          }
          else {
            DAT_20000838 = 0;
            DAT_20000836 = '\x03';
            FUN_08014226(0);
          }
        }
        else {
          DAT_20000838 = 0;
          DAT_20000836 = '\x01';
          FUN_08014226(0);
        }
        DAT_200006d3 = 1;
        break;
      case '\x03':
        if (DAT_2000314d == '\x01') {
          iVar1 = FUN_0800fad6();
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((iVar1 < 0xf000) && (DAT_20000710 == 0)) {
            DAT_20000838 = 1;
            DAT_20000836 = '\x04';
            DAT_2000083c = 0;
            FUN_08014226(0,1);
          }
        }
        DAT_200006d3 = 2;
        break;
      case '\x04':
        iVar1 = FUN_0800fad6();
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if ((iVar1 < 0x2d000) && (DAT_20000714 == 0)) {
          if ((((diag_MosTemp < 0x3d) && (diag_MotorTemp < 0x5b)) && (599 < DAT_2000083c)) ||
             (2999 < DAT_2000083c)) {
            DAT_20000838 = 0;
            DAT_20000836 = '\x01';
            FUN_08014226(0);
          }
          else if (DAT_20000838 < 30000) {
            DAT_20000838 = DAT_20000838 + 100;
            FUN_08014226(0,(int)DAT_20000838);
          }
        }
        else {
          DAT_20000838 = 0;
          DAT_20000836 = '\x03';
          FUN_08014226(0);
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
          FUN_08014226(0);
        }
        DAT_200006d3 = 2;
      }
      DAT_2000083c = DAT_2000083c + 1;
    }
    else if (diag_AgeModeflg == '\x02') {
      if (DAT_200030e4 % 10 == 5) {
        FUN_0800e09e(1);
      }
      DAT_200006d3 = 0;
      diag_AgeChgflg = 0;
      FUN_08014226(0);
      DAT_20000836 = '\0';
    }
  }
  return;
}



/* ENTRY 0x08016ed0 : FUN_08016ed0 */

void FUN_08016ed0(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(4,1);
  local_8 = 0x10030800;
  FUN_08023c80(&DAT_40010800,&local_8);
  local_8 = 0x48031000;
  FUN_08023c80(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016f14 : FUN_08016f14 */

void FUN_08016f14(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(4,1);
  local_8 = 0x48032000;
  FUN_08023c80(&DAT_40010800,&local_8);
  return;
}



/* ENTRY 0x08016f3c : FUN_08016f3c */

void FUN_08016f3c(void)

{
  return;
}



/* ENTRY 0x08016f74 : FUN_08016f74 */

void FUN_08016f74(void)

{
  FUN_08023f18(0x10,1);
  return;
}



/* ENTRY 0x08016f80 : FUN_08016f80 */

void FUN_08016f80(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20003bb4)[uVar1] = *(undefined1 *)(param_1 + uVar1);
    (&DAT_20003bc6)[uVar1] = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* ENTRY 0x08016f9e : FUN_08016f9e */

undefined4 FUN_08016f9e(void)

{
  return 0;
}



/* ENTRY 0x08016fa4 : FUN_08016fa4 */

void FUN_08016fa4(int param_1)

{
  uint uVar1;
  
  DAT_20000870 = '\0';
  for (uVar1 = 0; uVar1 < 6; uVar1 = uVar1 + 1 & 0xff) {
    if (200 < (uint)*(byte *)(param_1 + uVar1 * 3) + (uint)*(byte *)(param_1 + uVar1 * 3 + 1) +
              (uint)*(byte *)(param_1 + uVar1 * 3 + 2)) {
      DAT_20000870 = DAT_20000870 + '\x01';
    }
    (&DAT_20003bd8)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3);
    (&DAT_20003bd9)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 1);
    (&DAT_20003bda)[uVar1 * 3] = *(undefined1 *)(param_1 + uVar1 * 3 + 2);
  }
  return;
}



/* ENTRY 0x0801700e : FUN_0801700e */

void FUN_0801700e(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,int param_5)

{
  if (param_1 < 6) {
    *(undefined1 *)(param_5 + param_1 * 3) = param_3;
    *(undefined1 *)(param_5 + param_1 * 3 + 1) = param_2;
    *(undefined1 *)(param_5 + param_1 * 3 + 2) = param_4;
  }
  return;
}



/* ENTRY 0x0801702e : FUN_0801702e */

void FUN_0801702e(int param_1)

{
  int iVar1;
  
  if ((DAT_20000874 % 0x226 == 200) && (DAT_200031bc == 1)) {
    if (param_1 < 0x3265) {
      iVar1 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar1 = -diag_VehicleSpeed;
      }
      if (iVar1 < 0x1b59) goto LAB_08017074;
    }
    FUN_0800e09e(3);
  }
LAB_08017074:
  if ((DAT_20000874 % 900 == 200) && (DAT_200031bc == 0)) {
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



/* ENTRY 0x080170e2 : FUN_080170e2 */

void FUN_080170e2(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  uVar2 = 0;
  FUN_08023532(local_30,0x14);
  FUN_08023532(local_44,0x14);
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
    FUN_0801702e(param_1);
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
    FUN_0801702e(param_1);
  }
  DAT_20000871 = (undefined1)uVar2;
  for (; (int)uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    FUN_0801700e(uVar2,uVar3,uVar4,0,local_30);
    FUN_0801700e(uVar2,uVar3,uVar4,0,local_44);
  }
  FUN_08016fa4(local_30,local_44);
  return;
}



/* ENTRY 0x08017398 : FUN_08017398 */

void FUN_08017398(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  cVar1 = '\x05';
  FUN_08023532(auStack_28,0x14);
  FUN_08023532(auStack_3c,0x14);
  for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
    FUN_0801700e(cVar1,(&DAT_20003bea)[(uVar2 + 6) * 3],(&DAT_20003beb)[(uVar2 + 6) * 3],
                 (&DAT_20003bec)[(uVar2 + 6) * 3],auStack_3c);
    FUN_0801700e(uVar2 & 0xff,(&DAT_20003bea)[uVar2 * 3],(&DAT_20003beb)[uVar2 * 3],
                 (&DAT_20003bec)[uVar2 * 3],auStack_28);
    cVar1 = cVar1 + -1;
  }
  FUN_08016f9e(auStack_28,auStack_3c);
  return;
}



/* ENTRY 0x08017414 : FUN_08017414 */

void FUN_08017414(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = diag_VehicleSpeed;
  bVar4 = 0 < diag_VehicleSpeed;
  FUN_08017398();
  DAT_2000091e = DAT_2000091e + 1;
  if (DAT_2000091e < 800) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      if (bVar4) {
        for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
          DAT_20000922 = DAT_20000923 + (char)iVar1;
          if (0x1f < DAT_20000922) {
            DAT_20000922 = DAT_20000922 - 0x20;
          }
          (&DAT_20003bea)[iVar1 * 3] = (&DAT_08027ca6)[(uint)DAT_20000922 * 3];
          (&DAT_20003beb)[iVar1 * 3] = (&DAT_08027ca7)[(uint)DAT_20000922 * 3];
          (&DAT_20003bec)[iVar1 * 3] = (&DAT_08027ca8)[(uint)DAT_20000922 * 3];
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
          (&DAT_20003bea)[iVar1 * 3] = (&DAT_08027ca6)[(uint)DAT_20000922 * 3];
          (&DAT_20003beb)[iVar1 * 3] = (&DAT_08027ca7)[(uint)DAT_20000922 * 3];
          (&DAT_20003bec)[iVar1 * 3] = (&DAT_08027ca8)[(uint)DAT_20000922 * 3];
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
        (&DAT_20003bea)[iVar1 * 3] = DAT_200008ee;
        (&DAT_20003beb)[iVar1 * 3] = DAT_200008ef;
        (&DAT_20003bec)[iVar1 * 3] = DAT_200008f0;
      }
    }
  }
  else if (DAT_2000091e < 0xa8c) {
    if (DAT_20000920 == '\0') {
      DAT_20000920 = '\x01';
      for (iVar1 = 0; iVar1 < 0x20; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        for (cVar3 = '\0'; cVar3 < '\a'; cVar3 = cVar3 + '\x01') {
          if (cVar3 == '\0') {
            (&DAT_20003c0e)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c0f)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c10)[iVar1 * 0x15] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 3) / 100);
          }
          else if (cVar3 == '\x01') {
            (&DAT_20003c0e)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 1) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x02') {
            (&DAT_20003c0e)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 2) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x03') {
            (&DAT_20003c0e)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 100) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 3) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 100) / 100);
          }
          else if (cVar3 == '\x04') {
            (&DAT_20003c0e)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 0x28) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 4) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 0x28) / 100);
          }
          else if (cVar3 == '\x05') {
            (&DAT_20003c0e)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 0x14) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 5) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 0x14) / 100);
          }
          else if (cVar3 == '\x06') {
            (&DAT_20003c0e)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca6)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c0f)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca7)[iVar1 * 3] * 3) / 100);
            (&DAT_20003c10)[(iVar1 * 7 + 6) * 3] =
                 (char)(((uint)(byte)(&DAT_08027ca8)[iVar1 * 3] * 3) / 100);
          }
        }
      }
    }
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      DAT_20000926 = DAT_20000924 + (short)iVar1;
      if (0xdf < DAT_20000926) {
        DAT_20000926 = DAT_20000926 + -0xe0;
      }
      (&DAT_20003bea)[iVar1 * 3] = (&DAT_20003c0e)[DAT_20000926 * 3];
      (&DAT_20003beb)[iVar1 * 3] = (&DAT_20003c0f)[DAT_20000926 * 3];
      (&DAT_20003bec)[iVar1 * 3] = (&DAT_20003c10)[DAT_20000926 * 3];
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
        (&DAT_20003bea)[iVar2 * 3] = (&DAT_200008f1)[DAT_20000929 * 3];
        (&DAT_20003beb)[iVar2 * 3] = (&DAT_200008f2)[DAT_20000929 * 3];
        (&DAT_20003bec)[iVar2 * 3] = (&DAT_200008f3)[DAT_20000929 * 3];
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



/* ENTRY 0x08017b7a : FUN_08017b7a */

void FUN_08017b7a(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44 [20];
  undefined1 local_30 [20];
  
  FUN_08023532(local_30,0x14);
  FUN_08023532(local_44,0x14);
  for (uVar4 = 0; uVar4 < 0x12; uVar4 = uVar4 + 1 & 0xff) {
    local_30[uVar4] = 0;
    local_44[uVar4] = 0;
  }
  uVar4 = DAT_20000938 >> 0x1f;
  if (DAT_20000938 == ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * 4) {
    uVar4 = (uint)DAT_200031e0;
    uVar2 = (uint)DAT_200031e1;
    uVar3 = (uint)DAT_200031e2;
  }
  else if (DAT_20000938 + ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * -4 == 1) {
    uVar4 = (uint)DAT_200031e4;
    uVar2 = (uint)DAT_200031e5;
    uVar3 = (uint)DAT_200031e6;
  }
  else if (DAT_20000938 + ((int)(DAT_20000938 + (uVar4 >> 0x1e)) >> 2) * -4 == 2) {
    uVar4 = (uint)DAT_200031e8;
    uVar2 = (uint)DAT_200031e9;
    uVar3 = (uint)DAT_200031ea;
  }
  else {
    uVar4 = (uint)DAT_200031ec;
    uVar2 = (uint)DAT_200031ed;
    uVar3 = (uint)DAT_200031ee;
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
    FUN_0801700e(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_30);
    FUN_0801700e(bVar1,uVar4 & 0xff,uVar2 & 0xff,uVar3 & 0xff,local_44);
  }
  if (DAT_20000934 == (DAT_20000934 / 0x18) * 0x18) {
    DAT_20000938 = DAT_20000938 + 1;
  }
  if (diag_VehicleSpeed < 1) {
    DAT_20000934 = DAT_20000934 + 1;
    FUN_08016f9e(local_30,local_44);
  }
  else {
    DAT_20000934 = DAT_20000934 + 1;
    FUN_08016f9e(local_44,local_30);
  }
  return;
}



/* ENTRY 0x08017d60 : FUN_08017d60 */

void FUN_08017d60(int param_1,int param_2)

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
  FUN_08023532(auStack_40,0x14);
  FUN_08023532(auStack_54,0x14);
  iVar5 = 0;
  iVar8 = 0;
  for (cVar4 = '\0'; cVar4 < '\x06'; cVar4 = cVar4 + '\x01') {
    FUN_0801700e(cVar2,(&DAT_20003bea)[iVar8 * 3],(&DAT_20003beb)[iVar8 * 3],
                 (&DAT_20003bec)[iVar8 * 3],auStack_54);
    FUN_0801700e(cVar2,(&DAT_20003bea)[iVar5 * 3],(&DAT_20003beb)[iVar5 * 3],
                 (&DAT_20003bec)[iVar5 * 3],auStack_40);
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
  FUN_08016f9e(auStack_40,auStack_54);
  if (param_1 == (param_2 + 2) * (param_1 / (param_2 + 2))) {
    for (iVar5 = 0; iVar5 < 0xc; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
      DAT_2000092f = DAT_2000092e + (char)iVar5;
      if ('\v' < DAT_2000092f) {
        DAT_2000092f = DAT_2000092f + -0xc;
      }
      (&DAT_20003bea)[iVar5 * 3] = (&DAT_20003ed2)[DAT_2000092f * 3];
      (&DAT_20003beb)[iVar5 * 3] = (&DAT_20003ed3)[DAT_2000092f * 3];
      (&DAT_20003bec)[iVar5 * 3] = (&DAT_20003ed4)[DAT_2000092f * 3];
    }
    bVar1 = '\v' < DAT_2000092e;
    DAT_2000092e = DAT_2000092e + '\x01';
    if (bVar1) {
      DAT_2000092e = '\x01';
    }
  }
  if (DAT_20000930 < 500) {
    DAT_20003ed2 = DAT_200031e0;
    DAT_20003ed3 = DAT_200031e1;
    DAT_20003ed4 = DAT_200031e2;
    DAT_20003ed5 = (undefined1)(((uint)DAT_200031e0 * 0x50) / 100);
    DAT_20003ed6 = (undefined1)(((uint)DAT_200031e1 * 0x50) / 100);
    DAT_20003ed7 = (undefined1)(((uint)DAT_200031e2 * 0x50) / 100);
    DAT_20003ed8 = (undefined1)(((uint)DAT_200031e0 * 0x37) / 100);
    DAT_20003ed9 = (undefined1)(((uint)DAT_200031e1 * 0x37) / 100);
    DAT_20003eda = (undefined1)(((uint)DAT_200031e2 * 0x37) / 100);
    DAT_20003edb = (undefined1)(((uint)DAT_200031e0 * 0x23) / 100);
    DAT_20003edc = (undefined1)(((uint)DAT_200031e1 * 0x23) / 100);
    DAT_20003edd = (undefined1)(((uint)DAT_200031e2 * 0x23) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031e0 * 0xf) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031e1 * 0xf) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031e2 * 0xf) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031e0 * 5) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031e1 * 5) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031e2 * 5) / 100);
    DAT_20000930 = DAT_20000930 + 1;
  }
  else if ((ushort)(DAT_20000930 + 1) < 1000) {
    DAT_20003ed2 = DAT_200031e4;
    DAT_20003ed3 = DAT_200031e5;
    DAT_20003ed4 = DAT_200031e6;
    DAT_20003ed5 = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
    DAT_20003ed6 = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
    DAT_20003ed7 = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
    DAT_20003ed8 = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
    DAT_20003ed9 = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
    DAT_20003eda = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
    DAT_20003edb = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
    DAT_20003edc = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
    DAT_20003edd = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031e4 * 5) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031e5 * 5) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031e6 * 5) / 100);
    DAT_20000930 = DAT_20000930 + 2;
  }
  else if ((ushort)(DAT_20000930 + 2) < 0x5dc) {
    DAT_20003ed2 = DAT_200031e8;
    DAT_20003ed3 = DAT_200031e9;
    DAT_20003ed4 = DAT_200031ea;
    DAT_20003ed5 = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
    DAT_20003ed6 = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
    DAT_20003ed7 = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
    DAT_20003ed8 = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
    DAT_20003ed9 = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
    DAT_20003eda = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
    DAT_20003edb = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
    DAT_20003edc = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
    DAT_20003edd = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
    DAT_20003ede = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
    DAT_20003edf = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
    DAT_20003ee0 = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
    DAT_20003ee1 = (undefined1)(((uint)DAT_200031e8 * 5) / 100);
    DAT_20003ee2 = (undefined1)(((uint)DAT_200031e9 * 5) / 100);
    DAT_20003ee3 = (undefined1)(((uint)DAT_200031ea * 5) / 100);
    DAT_20000930 = DAT_20000930 + 3;
  }
  else {
    uVar3 = DAT_20000930 + 4;
    if ((ushort)(DAT_20000930 + 3) < 2000) {
      DAT_20003ed2 = DAT_200031ec;
      DAT_20003ed3 = DAT_200031ed;
      DAT_20003ed4 = DAT_200031ee;
      DAT_20003ed5 = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
      DAT_20003ed6 = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
      DAT_20003ed7 = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
      DAT_20003ed8 = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
      DAT_20003ed9 = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
      DAT_20003eda = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
      DAT_20003edb = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
      DAT_20003edc = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
      DAT_20003edd = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
      DAT_20003ede = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
      DAT_20003edf = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
      DAT_20003ee0 = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
      DAT_20003ee1 = (undefined1)(((uint)DAT_200031ec * 5) / 100);
      DAT_20003ee2 = (undefined1)(((uint)DAT_200031ed * 5) / 100);
      DAT_20003ee3 = (undefined1)(((uint)DAT_200031ee * 5) / 100);
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



/* ENTRY 0x0801854e : FUN_0801854e */

void FUN_0801854e(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = diag_VehicleSpeed;
  bVar2 = 0 < diag_VehicleSpeed;
  FUN_08017398();
  if (param_1 == param_2 * (param_1 / param_2)) {
    for (uVar6 = 0; uVar6 < 0xc; uVar6 = uVar6 + 1 & 0xff) {
      DAT_2000092d = DAT_2000092c + (char)uVar6;
      if ('\v' < DAT_2000092d) {
        DAT_2000092d = DAT_2000092d + -0xc;
      }
      (&DAT_20003bea)[uVar6 * 3] = (&DAT_20003eae)[DAT_2000092d * 3];
      (&DAT_20003beb)[uVar6 * 3] = (&DAT_20003eaf)[DAT_2000092d * 3];
      (&DAT_20003bec)[uVar6 * 3] = (&DAT_20003eb0)[DAT_2000092d * 3];
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
      DAT_20003ebd = DAT_200031e0;
      DAT_20003ebe = DAT_200031e1;
      DAT_20003ebf = DAT_200031e2;
      DAT_20003eba = (undefined1)(((uint)DAT_200031e0 * 0x50) / 100);
      DAT_20003ebb = (undefined1)(((uint)DAT_200031e1 * 0x50) / 100);
      DAT_20003ebc = (undefined1)(((uint)DAT_200031e2 * 0x50) / 100);
      DAT_20003eb7 = (undefined1)(((uint)DAT_200031e0 * 0x37) / 100);
      DAT_20003eb8 = (undefined1)(((uint)DAT_200031e1 * 0x37) / 100);
      DAT_20003eb9 = (undefined1)(((uint)DAT_200031e2 * 0x37) / 100);
      DAT_20003eb4 = (undefined1)(((uint)DAT_200031e0 * 0x23) / 100);
      DAT_20003eb5 = (undefined1)(((uint)DAT_200031e1 * 0x23) / 100);
      DAT_20003eb6 = (undefined1)(((uint)DAT_200031e2 * 0x23) / 100);
      DAT_20003eb1 = (undefined1)(((uint)DAT_200031e0 * 0xf) / 100);
      DAT_20003eb2 = (undefined1)(((uint)DAT_200031e1 * 0xf) / 100);
      DAT_20003eb3 = (undefined1)(((uint)DAT_200031e2 * 0xf) / 100);
      DAT_20003eae = (byte)(((uint)DAT_200031e0 * 5) / 100);
      DAT_20003eaf = (byte)(((uint)DAT_200031e1 * 5) / 100);
      DAT_20003eb0 = (byte)(((uint)DAT_200031e2 * 5) / 100);
    }
    else {
      DAT_20003eb1 = (undefined1)(((uint)DAT_200031e0 * 0x50) / 100);
      DAT_20003eb2 = (undefined1)(((uint)DAT_200031e1 * 0x50) / 100);
      DAT_20003eb3 = (undefined1)(((uint)DAT_200031e2 * 0x50) / 100);
      DAT_20003eb4 = (undefined1)(((uint)DAT_200031e0 * 0x37) / 100);
      DAT_20003eb5 = (undefined1)(((uint)DAT_200031e1 * 0x37) / 100);
      DAT_20003eb6 = (undefined1)(((uint)DAT_200031e2 * 0x37) / 100);
      DAT_20003eb7 = (undefined1)(((uint)DAT_200031e0 * 0x23) / 100);
      DAT_20003eb8 = (undefined1)(((uint)DAT_200031e1 * 0x23) / 100);
      DAT_20003eb9 = (undefined1)(((uint)DAT_200031e2 * 0x23) / 100);
      DAT_20003eba = (undefined1)(((uint)DAT_200031e0 * 0xf) / 100);
      DAT_20003ebb = (undefined1)(((uint)DAT_200031e1 * 0xf) / 100);
      DAT_20003ebc = (undefined1)(((uint)DAT_200031e2 * 0xf) / 100);
      DAT_20003ebd = (byte)(((uint)DAT_200031e0 * 5) / 100);
      DAT_20003ebe = (byte)(((uint)DAT_200031e1 * 5) / 100);
      DAT_20003ebf = (byte)(((uint)DAT_200031e2 * 5) / 100);
      DAT_20003eb0 = DAT_200031e2;
      DAT_20003eaf = DAT_200031e1;
      DAT_20003eae = DAT_200031e0;
    }
  }
  else {
    uVar5 = DAT_2000092a + 2;
    if (uVar4 < 1000) {
      DAT_2000092a = uVar5;
      if (bVar2) {
        DAT_20003ebd = DAT_200031e4;
        DAT_20003ebe = DAT_200031e5;
        DAT_20003ebf = DAT_200031e6;
        DAT_20003eba = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
        DAT_20003ebb = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
        DAT_20003ebc = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
        DAT_20003eb7 = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
        DAT_20003eb8 = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
        DAT_20003eb9 = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
        DAT_20003eb4 = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
        DAT_20003eb5 = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
        DAT_20003eb6 = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
        DAT_20003eb1 = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
        DAT_20003eb2 = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
        DAT_20003eb3 = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
        DAT_20003eae = (byte)(((uint)DAT_200031e4 * 5) / 100);
        DAT_20003eaf = (byte)(((uint)DAT_200031e5 * 5) / 100);
        DAT_20003eb0 = (byte)(((uint)DAT_200031e6 * 5) / 100);
      }
      else {
        DAT_20003eb1 = (undefined1)(((uint)DAT_200031e4 * 0x50) / 100);
        DAT_20003eb2 = (undefined1)(((uint)DAT_200031e5 * 0x50) / 100);
        DAT_20003eb3 = (undefined1)(((uint)DAT_200031e6 * 0x50) / 100);
        DAT_20003eb4 = (undefined1)(((uint)DAT_200031e4 * 0x37) / 100);
        DAT_20003eb5 = (undefined1)(((uint)DAT_200031e5 * 0x37) / 100);
        DAT_20003eb6 = (undefined1)(((uint)DAT_200031e6 * 0x37) / 100);
        DAT_20003eb7 = (undefined1)(((uint)DAT_200031e4 * 0x23) / 100);
        DAT_20003eb8 = (undefined1)(((uint)DAT_200031e5 * 0x23) / 100);
        DAT_20003eb9 = (undefined1)(((uint)DAT_200031e6 * 0x23) / 100);
        DAT_20003eba = (undefined1)(((uint)DAT_200031e4 * 0xf) / 100);
        DAT_20003ebb = (undefined1)(((uint)DAT_200031e5 * 0xf) / 100);
        DAT_20003ebc = (undefined1)(((uint)DAT_200031e6 * 0xf) / 100);
        DAT_20003ebd = (byte)(((uint)DAT_200031e4 * 5) / 100);
        DAT_20003ebe = (byte)(((uint)DAT_200031e5 * 5) / 100);
        DAT_20003ebf = (byte)(((uint)DAT_200031e6 * 5) / 100);
        DAT_20003eb0 = DAT_200031e6;
        DAT_20003eaf = DAT_200031e5;
        DAT_20003eae = DAT_200031e4;
      }
    }
    else {
      uVar4 = DAT_2000092a + 3;
      if (uVar5 < 0x5dc) {
        DAT_2000092a = uVar4;
        if (bVar2) {
          DAT_20003ebd = DAT_200031e8;
          DAT_20003ebe = DAT_200031e9;
          DAT_20003ebf = DAT_200031ea;
          DAT_20003eba = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
          DAT_20003ebb = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
          DAT_20003ebc = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
          DAT_20003eb7 = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
          DAT_20003eb8 = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
          DAT_20003eb9 = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
          DAT_20003eb4 = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
          DAT_20003eb5 = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
          DAT_20003eb6 = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
          DAT_20003eb1 = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
          DAT_20003eb2 = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
          DAT_20003eb3 = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
          DAT_20003eae = (byte)(((uint)DAT_200031e8 * 5) / 100);
          DAT_20003eaf = (byte)(((uint)DAT_200031e9 * 5) / 100);
          DAT_20003eb0 = (byte)(((uint)DAT_200031ea * 5) / 100);
        }
        else {
          DAT_20003eb1 = (undefined1)(((uint)DAT_200031e8 * 0x50) / 100);
          DAT_20003eb2 = (undefined1)(((uint)DAT_200031e9 * 0x50) / 100);
          DAT_20003eb3 = (undefined1)(((uint)DAT_200031ea * 0x50) / 100);
          DAT_20003eb4 = (undefined1)(((uint)DAT_200031e8 * 0x37) / 100);
          DAT_20003eb5 = (undefined1)(((uint)DAT_200031e9 * 0x37) / 100);
          DAT_20003eb6 = (undefined1)(((uint)DAT_200031ea * 0x37) / 100);
          DAT_20003eb7 = (undefined1)(((uint)DAT_200031e8 * 0x23) / 100);
          DAT_20003eb8 = (undefined1)(((uint)DAT_200031e9 * 0x23) / 100);
          DAT_20003eb9 = (undefined1)(((uint)DAT_200031ea * 0x23) / 100);
          DAT_20003eba = (undefined1)(((uint)DAT_200031e8 * 0xf) / 100);
          DAT_20003ebb = (undefined1)(((uint)DAT_200031e9 * 0xf) / 100);
          DAT_20003ebc = (undefined1)(((uint)DAT_200031ea * 0xf) / 100);
          DAT_20003ebd = (byte)(((uint)DAT_200031e8 * 5) / 100);
          DAT_20003ebe = (byte)(((uint)DAT_200031e9 * 5) / 100);
          DAT_20003ebf = (byte)(((uint)DAT_200031ea * 5) / 100);
          DAT_20003eb0 = DAT_200031ea;
          DAT_20003eaf = DAT_200031e9;
          DAT_20003eae = DAT_200031e8;
        }
      }
      else {
        uVar5 = DAT_2000092a + 4;
        if (uVar4 < 2000) {
          DAT_2000092a = uVar5;
          if (bVar2) {
            if (0 < iVar3) {
              DAT_20003ebd = DAT_200031ec;
              DAT_20003ebe = DAT_200031ed;
              DAT_20003ebf = DAT_200031ee;
              DAT_20003eba = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
              DAT_20003ebb = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
              DAT_20003ebc = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
              DAT_20003eb7 = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
              DAT_20003eb8 = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
              DAT_20003eb9 = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
              DAT_20003eb4 = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
              DAT_20003eb5 = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
              DAT_20003eb6 = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
              DAT_20003eb1 = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
              DAT_20003eb2 = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
              DAT_20003eb3 = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
              DAT_20003eae = (byte)(((uint)DAT_200031ec * 5) / 100);
              DAT_20003eaf = (byte)(((uint)DAT_200031ed * 5) / 100);
              DAT_20003eb0 = (byte)(((uint)DAT_200031ee * 5) / 100);
            }
          }
          else {
            DAT_20003eae = DAT_200031ec;
            DAT_20003eaf = DAT_200031ed;
            DAT_20003eb0 = DAT_200031ee;
            DAT_20003eb1 = (undefined1)(((uint)DAT_200031ec * 0x50) / 100);
            DAT_20003eb2 = (undefined1)(((uint)DAT_200031ed * 0x50) / 100);
            DAT_20003eb3 = (undefined1)(((uint)DAT_200031ee * 0x50) / 100);
            DAT_20003eb4 = (undefined1)(((uint)DAT_200031ec * 0x37) / 100);
            DAT_20003eb5 = (undefined1)(((uint)DAT_200031ed * 0x37) / 100);
            DAT_20003eb6 = (undefined1)(((uint)DAT_200031ee * 0x37) / 100);
            DAT_20003eb7 = (undefined1)(((uint)DAT_200031ec * 0x23) / 100);
            DAT_20003eb8 = (undefined1)(((uint)DAT_200031ed * 0x23) / 100);
            DAT_20003eb9 = (undefined1)(((uint)DAT_200031ee * 0x23) / 100);
            DAT_20003eba = (undefined1)(((uint)DAT_200031ec * 0xf) / 100);
            DAT_20003ebb = (undefined1)(((uint)DAT_200031ed * 0xf) / 100);
            DAT_20003ebc = (undefined1)(((uint)DAT_200031ee * 0xf) / 100);
            DAT_20003ebd = (byte)(((uint)DAT_200031ec * 5) / 100);
            DAT_20003ebe = (byte)(((uint)DAT_200031ed * 5) / 100);
            DAT_20003ebf = (byte)(((uint)DAT_200031ee * 5) / 100);
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



/* ENTRY 0x080192de : FUN_080192de */

void FUN_080192de(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0801854e(param_1,param_2);
  }
  else if (param_3 == 2) {
    FUN_08017d60(param_1,param_2);
  }
  else if (param_3 == 3) {
    if (param_1 == param_2 * (param_1 / param_2)) {
      FUN_08017b7a();
    }
  }
  else {
    FUN_08017414(param_1,param_2);
  }
  return;
}



/* ENTRY 0x08019320 : FUN_08019320 */

void FUN_08019320(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  FUN_08023532(auStack_2c,0x14);
  FUN_08023532(auStack_40,0x14);
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801700e(bVar1,0,0,0,auStack_2c);
    FUN_0801700e(bVar1,0,0,0,auStack_40);
  }
  if (DAT_20000874 % 10 < 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
  }
  for (bVar1 = 0; bVar1 < 6; bVar1 = bVar1 + 1) {
    FUN_0801700e(bVar1,uVar2,0,0,auStack_2c);
    FUN_0801700e(bVar1,uVar2,0,0,auStack_40);
  }
  FUN_08016f9e(auStack_2c,auStack_40);
  return;
}



/* ENTRY 0x080193ca : FUN_080193ca */

undefined4 FUN_080193ca(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [20];
  
  FUN_08023532(local_1c,0x14);
  FUN_08023532(local_30,0x14);
  if ((diag_AgeModeflg == '\0') || (diag_AgeChgflg != '\0')) {
    if (DAT_20003142 == '\x01') {
      for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2 * 3] = 0xff;
        local_30[uVar2 * 3] = 0xff;
        local_1c[uVar2 * 3 + 1] = 0xff;
        local_30[uVar2 * 3 + 1] = 0xff;
        local_1c[uVar2 * 3 + 2] = 0;
        local_30[uVar2 * 3 + 2] = 0;
      }
      FUN_08016f9e(local_1c,local_30);
      uVar1 = 1;
    }
    else if (DAT_200031d6 == 1) {
      for (uVar2 = 0; uVar2 < 0x12; uVar2 = uVar2 + 1 & 0xff) {
        local_1c[uVar2] = 0;
        local_30[uVar2] = 0;
      }
      FUN_08016f9e(local_1c,local_30);
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
    FUN_08016f9e(local_1c,local_30);
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 0x080194b4 : FUN_080194b4 */

undefined4 FUN_080194b4(void)

{
  uint uVar1;
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  
  FUN_08023532(local_28,0x14);
  FUN_08023532(local_3c,0x14);
  for (uVar1 = 0; uVar1 < 0x12; uVar1 = uVar1 + 1 & 0xff) {
    local_28[uVar1] = 0;
    local_3c[uVar1] = 0;
  }
  return 0;
}



/* ENTRY 0x080194ea : FUN_080194ea */

void FUN_080194ea(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023532(auStack_34,0x14);
  FUN_08023532(auStack_48,0x14);
  DAT_20000874 = DAT_20000874 + 1;
  if ((diag_cartstep == '\b') || (diag_cartstep == '\0')) {
    if (diag_BatState == '\0') {
      for (uVar2 = 0; (int)uVar2 < 6; uVar2 = (uint)(char)((char)uVar2 + '\x01')) {
        FUN_0801700e(uVar2 & 0xff,0,0,0,auStack_34);
        FUN_0801700e(uVar2 & 0xff,0,0,0,auStack_48);
      }
      FUN_08016f9e(auStack_34,auStack_48);
    }
    else {
      FUN_080170e2(diag_TotalVoltage);
    }
  }
  else if (DAT_20000878 == '\x01') {
    if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
      FUN_0801702e(diag_TotalVoltage);
    }
  }
  else {
    iVar1 = FUN_080194b4();
    if (iVar1 == 1) {
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_0801702e(diag_TotalVoltage);
      }
    }
    else if (DAT_2000086c == 0) {
      iVar1 = FUN_080193ca();
      if (iVar1 == 1) {
        if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
          FUN_0801702e(diag_TotalVoltage);
        }
      }
      else {
        iVar1 = diag_VehicleSpeed;
        if (diag_VehicleSpeed < 0) {
          iVar1 = -diag_VehicleSpeed;
        }
        if (((iVar1 < 0x65) || (diag_TotalVoltage < 0x2454)) || (0x3264 < diag_TotalVoltage)) {
          FUN_080170e2(diag_TotalVoltage);
        }
        else {
          iVar1 = diag_VehicleSpeed;
          if (diag_VehicleSpeed < 0) {
            iVar1 = -diag_VehicleSpeed;
          }
          if ((int)(uint)DAT_200031b4 < iVar1 / 1000) {
            FUN_08019320();
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
            DAT_2000087c = (int)((uint)DAT_200031b4 - (uint)DAT_2000087a) / 5;
            if (DAT_2000087c == 0) {
              DAT_2000087c = 1;
            }
            if (((DAT_200031d8 != 0) && (DAT_200031d8 != 1)) &&
               ((DAT_200031d8 != 2 && (DAT_200031d8 != 3)))) {
              DAT_200031d8 = 0;
            }
            FUN_080192de(DAT_20000874,DAT_2000087c,DAT_200031d8);
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
      FUN_080192de(DAT_20000874,(int)((uint)DAT_200031b4 - iVar1 / 1000) / 5,DAT_200031d8);
      if ((diag_TotalVoltage < 0x2454) || (0x3264 < diag_TotalVoltage)) {
        FUN_0801702e(diag_TotalVoltage);
      }
    }
  }
  return;
}



/* ENTRY 0x08019746 : FUN_08019746 */

void FUN_08019746(void)

{
  if (DAT_20000888 < 0x14) {
    DAT_20000888 = DAT_20000888 + 1;
    DAT_20000884 = ((int)(uint)DAT_200034b0 >> 4) * 100;
  }
  else {
    DAT_20000884 = (DAT_20000884 * 99 + ((int)(uint)DAT_200034b0 >> 4) * 100) / 100;
  }
  return;
}



/* ENTRY 0x08019792 : FUN_08019792 */

void FUN_08019792(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  FUN_08023532(auStack_34,0x14);
  FUN_08023532(auStack_48,0x14);
  iVar2 = diag_VehicleSpeed;
  if (diag_VehicleSpeed < 0) {
    iVar2 = -diag_VehicleSpeed;
  }
  if ((iVar2 < 500) && (DAT_20003204 == 1)) {
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
  bVar5 = DAT_20003204 == 1;
  do {
    if (!bVar5) goto code_r0x08019fe2;
    bVar5 = DAT_200008ae == '\0';
  } while (((!bVar5) || (bVar5 = DAT_20003142 == '\0', !bVar5)) ||
          (bVar5 = diag_AgeModeflg == '\0', !bVar5));
  DAT_20000878 = 1;
  DAT_200008a0 = (short)((int)(uint)DAT_200034b0 >> 4);
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
      DAT_2000314e = 0;
    }
  }
  else {
    DAT_200008ac = 0;
  }
  if ((DAT_2000088a < 0x82) && (DAT_200008af != '\x01')) {
    if (DAT_200008a4 < 500) {
      DAT_200008a4 = DAT_200008a4 + 1;
      for (uVar4 = 0; (int)uVar4 < 6; uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
        FUN_0801700e(uVar4 & 0xff,0,0,0,auStack_34);
        FUN_0801700e(uVar4 & 0xff,0,0,0,auStack_48);
      }
      if (DAT_200006a4 == (DAT_200006a4 / 5) * 5) {
        FUN_08016f9e(auStack_34,auStack_48);
      }
    }
    else {
      DAT_200008a4 = 6000;
code_r0x08019fe2:
      DAT_20000878 = 0;
    }
  }
  else {
    DAT_200008af = '\x01';
    DAT_2000314e = 1;
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
    if (DAT_2000320c == 0) {
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
    else if (DAT_2000320c == 1) {
      DAT_200008b0 = '\0';
    }
    else if (DAT_2000320c == 2) {
      DAT_200008b0 = '\x01';
    }
    else if (DAT_2000320c == 3) {
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
            FUN_0801700e(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b4),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b5),
                         *(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b6),auStack_48);
            FUN_0801700e(uVar4 & 0xff,*(undefined1 *)((uint)DAT_200008e4 * 3 + 0x200008b4),
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
        FUN_0801700e(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_48);
        FUN_0801700e(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_34);
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
          FUN_0801700e(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_48);
          FUN_0801700e(uVar4 & 0xff,DAT_200008c9,DAT_200008ca,DAT_200008cb,auStack_34);
        }
      }
    }
    if (DAT_200006a4 == (DAT_200006a4 / 5) * 5) {
      FUN_08016f9e(auStack_34,auStack_48);
    }
  }
  return;
}



/* ENTRY 0x0801a014 : FUN_0801a014 */

void FUN_0801a014(void)

{
  FUN_08023c04();
  FUN_08023a94(&DAT_0803d000);
  FUN_08023b30(&DAT_0803d000,0x55aaaa55);
  FUN_08023ae8();
  DAT_2000093c = 1;
  return;
}



/* ENTRY 0x0801a034 : FUN_0801a034 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a034(void)

{
  if (_DAT_0803d000 != -1) {
    FUN_08023c04();
    FUN_08023a94(&DAT_0803d000);
    FUN_08023ae8();
  }
  return;
}



/* ENTRY 0x0801a04e : FUN_0801a04e */

void FUN_0801a04e(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_08023406(&DAT_2000095e);
  iVar3 = FUN_08023406(&DAT_20000965);
  sVar1 = 0;
  uVar5 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003ef6)[uVar5 * 0x14] = 0xaa;
    (&DAT_20003ef7)[uVar5 * 0x14] = 0x55;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_20003ef8)[uVar5 * 0x14 + iVar4] = (&DAT_2000095e)[iVar4];
      sVar1 = (ushort)(byte)(&DAT_2000095e)[iVar4] + sVar1;
    }
    (&DAT_20003ef8)[uVar5 * 0x14 + iVar2] = 0x2d;
    uVar6 = (uint)(ushort)(sVar1 + 0x2d);
    for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      (&DAT_20003ef9)[uVar5 * 0x14 + iVar4 + iVar2] = (&DAT_20000965)[iVar4];
      uVar6 = (byte)(&DAT_20000965)[iVar4] + uVar6 & 0xffff;
    }
    iVar2 = iVar2 + iVar3;
    while (iVar2 + 1 < 0xe) {
      (&DAT_20003ef9)[uVar5 * 0x14 + iVar2] = 0;
      iVar2 = iVar2 + 1;
    }
    (&DAT_20003f06)[uVar5 * 0x14] = 0xbb;
    (&DAT_20003f07)[uVar5 * 0x14] = 0x14;
    (&DAT_20003f08)[uVar5 * 0x14] = (char)(0xffff - uVar6);
    (&DAT_20003f09)[uVar5 * 0x14] = (char)(0xffff - uVar6 >> 8);
    (&DAT_20000941)[uVar5] = 0x14;
    DAT_2000093f = (char)uVar5 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return;
}



/* ENTRY 0x0801a16c : FUN_0801a16c */

int FUN_0801a16c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003ef6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ef7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ef8)[uVar2 * 0x14 + iVar1] = (&DAT_200031c2)[iVar1];
    }
    (&DAT_20003f06)[uVar2 * 0x14] = 0xb3;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ef9)[uVar2 * 0x14 + iVar1] = (&DAT_200031c2)[iVar1];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x0801a208 : FUN_0801a208 */

byte FUN_0801a208(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f46)[uVar2 + uVar3 * 0x14] = *(undefined1 *)(param_1 + uVar2);
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



/* ENTRY 0x0801a260 : FUN_0801a260 */

undefined4
FUN_0801a260(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
      (&DAT_20003f46)[uVar1 + uVar2 * 0x14] = local_38[uVar1];
    }
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a360 : FUN_0801a360 */

undefined4
FUN_0801a360(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003ef6)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003ef7)[uVar1 * 0x14] = 0x55;
    (&DAT_20003ef8)[uVar1 * 0x14] = (char)param_2;
    (&DAT_20003ef9)[uVar1 * 0x14] = (char)((uint)param_2 >> 8);
    (&DAT_20003efa)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003efb)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003efc)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003efd)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003efe)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003eff)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f00)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f01)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f02)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f03)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f04)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f05)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f06)[uVar1 * 0x14] = param_1;
    (&DAT_20003f07)[uVar1 * 0x14] = 0x14;
    (&DAT_20003f08)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f09)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000941)[uVar1] = 0x14;
    DAT_2000093f = (char)uVar1 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a50a : FUN_0801a50a */

undefined4 FUN_0801a50a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003ef6)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a562 : FUN_0801a562 */

undefined4
FUN_0801a562(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  uint uVar1;
  
  uVar1 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f46)[uVar1 * 0x14] = 0xaa;
    (&DAT_20003f47)[uVar1 * 0x14] = 0x55;
    (&DAT_20003f48)[uVar1 * 0x14] = (char)param_3;
    (&DAT_20003f49)[uVar1 * 0x14] = (char)((uint)param_3 >> 8);
    (&DAT_20003f4a)[uVar1 * 0x14] = (char)param_4;
    (&DAT_20003f4b)[uVar1 * 0x14] = (char)((uint)param_4 >> 8);
    (&DAT_20003f4c)[uVar1 * 0x14] = (char)param_5;
    (&DAT_20003f4d)[uVar1 * 0x14] = (char)((uint)param_5 >> 8);
    (&DAT_20003f4e)[uVar1 * 0x14] = (char)param_6;
    (&DAT_20003f4f)[uVar1 * 0x14] = (char)((uint)param_6 >> 8);
    (&DAT_20003f50)[uVar1 * 0x14] = (char)param_7;
    (&DAT_20003f51)[uVar1 * 0x14] = (char)((uint)param_7 >> 8);
    (&DAT_20003f52)[uVar1 * 0x14] = (char)param_8;
    (&DAT_20003f53)[uVar1 * 0x14] = (char)((uint)param_8 >> 8);
    (&DAT_20003f54)[uVar1 * 0x14] = (char)param_9;
    (&DAT_20003f55)[uVar1 * 0x14] = (char)((uint)param_9 >> 8);
    (&DAT_20003f56)[uVar1 * 0x14] = param_1;
    (&DAT_20003f57)[uVar1 * 0x14] = param_2;
    (&DAT_20003f58)[uVar1 * 0x14] = 0x5a;
    (&DAT_20003f59)[uVar1 * 0x14] = 0x5a;
    (&DAT_20000948)[uVar1] = 0x14;
    DAT_20000946 = (char)uVar1 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a6c8 : FUN_0801a6c8 */

undefined4 FUN_0801a6c8(undefined1 param_1,undefined1 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f46)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003f47)[uVar2 * 0x14] = 0x55;
    for (uVar1 = 0; uVar1 < 0xe; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f48)[uVar2 * 0x14 + uVar1] = *(undefined1 *)(param_3 + uVar1);
    }
    (&DAT_20003f56)[uVar2 * 0x14] = param_1;
    (&DAT_20003f57)[uVar2 * 0x14] = param_2;
    (&DAT_20003f58)[uVar2 * 0x14] = 0x5a;
    (&DAT_20003f59)[uVar2 * 0x14] = 0x5a;
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a76a : FUN_0801a76a */

undefined4 FUN_0801a76a(undefined1 param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    (&DAT_20003f46)[uVar3 * 0x14] = 0xaa;
    (&DAT_20003f47)[uVar3 * 0x14] = 0x55;
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20003f48)[uVar3 * 0x14 + uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    (&DAT_20003f56)[uVar3 * 0x14] = param_1;
    (&DAT_20003f57)[uVar3 * 0x14] = param_2;
    uVar1 = FUN_08020ad8(&DAT_20003f48 + uVar3 * 0x14,0x10);
    (&DAT_20003f58)[uVar3 * 0x14] = (char)((ushort)uVar1 >> 8);
    (&DAT_20003f59)[uVar3 * 0x14] = (char)uVar1;
    (&DAT_20000948)[uVar3] = 0x14;
    DAT_20000946 = (char)uVar3 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a828 : FUN_0801a828 */

undefined4 FUN_0801a828(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000946 & 7;
  if (DAT_20000945 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003f46)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000948)[uVar2] = 0x14;
    DAT_20000946 = (char)uVar2 + 1U & 7;
    if (DAT_20000946 == DAT_20000947) {
      DAT_20000945 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a880 : FUN_0801a880 */

undefined4 FUN_0801a880(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000951 & 3;
  if (DAT_20000950 == '\0') {
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
      (&DAT_20003fe6)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
    }
    (&DAT_20000953)[uVar2] = 0x14;
    DAT_20000951 = (char)uVar2 + 1U & 3;
    if (DAT_20000951 == DAT_20000952) {
      DAT_20000950 = '\x01';
    }
  }
  return 0;
}



/* ENTRY 0x0801a8d8 : FUN_0801a8d8 */

undefined4 FUN_0801a8d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_20000958 & 3;
  if (DAT_20000957 != '\0') {
    return 0;
  }
  for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004036)[uVar1 + uVar2 * 0x14] = *(undefined1 *)(param_1 + uVar1);
  }
  (&DAT_2000095a)[uVar2] = 0x14;
  DAT_20000958 = (char)uVar2 + 1U & 3;
  if (DAT_20000958 == DAT_20000959) {
    DAT_20000957 = '\x01';
  }
  return 0;
}



/* ENTRY 0x0801a976 : FUN_0801a976 */

bool FUN_0801a976(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = true;
  do {
    if (0x10 < uVar2) {
code_r0x0801a9b2:
      DAT_200031bc = 1;
      DAT_20003204 = 0;
      if ((DAT_200031c6 == '0') && (DAT_200031c7 == '2')) {
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
       (((byte)(&DAT_200031c2)[uVar2] < (byte)"KSSA01"[uVar2] ||
        ((byte)"KSSA09"[uVar2] < (byte)(&DAT_200031c2)[uVar2])))) {
      bVar1 = false;
      goto code_r0x0801a9b2;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



/* ENTRY 0x0801aa0c : FUN_0801aa0c */

undefined8 FUN_0801aa0c(int param_1,int param_2)

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
    if ((&DAT_20003206)[uVar6] != *(char *)(param_1 + uVar6 + 10)) goto LAB_0801aa66;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) <= iVar7) {
    DAT_200031ae = *(ushort *)(param_1 + 2);
  }
  uVar2 = DAT_200031ae;
  if ((int)(uint)*(ushort *)(param_1 + 4) <= iVar7) {
    DAT_200031b0 = *(ushort *)(param_1 + 4);
  }
  uVar3 = DAT_200031b0;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= iVar7)) {
    DAT_200031b2 = uVar1;
  }
  uVar1 = DAT_200031b2;
  if ((iVar5 != 0) && (iVar5 <= iVar7)) {
    DAT_200031b4 = (short)iVar5;
  }
  sVar4 = DAT_200031b4;
  FUN_0800e09e(1);
  param_2 = (int)sVar4;
  param_1 = (int)(short)uVar1;
  FUN_0801a360(0xa4,1,(int)(short)uVar2,(int)(short)uVar3,param_1,param_2,0,0);
  FUN_0800adda();
LAB_0801aa66:
  return CONCAT44(param_2,param_1);
}



/* ENTRY 0x0801ab94 : FUN_0801ab94 */

undefined4 FUN_0801ab94(int param_1)

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



/* ENTRY 0x0801acaa : FUN_0801acaa */

void FUN_0801acaa(char *param_1,int param_2)

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
        (&DAT_20004086)[local_14] = param_1[local_14];
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
      FUN_0800e09e();
      FUN_0801a04e();
      FUN_0801a360(0x46,DAT_20000971,0,0,0,0,0,0);
      return;
    }
    if (param_1[0x10] != 'D') {
      if (param_1[0x10] == 'E') {
        FUN_0800e09e(1);
        FUN_0801a360(0x46,DAT_20000971,0,0,0,0,0,0);
        return;
      }
      return;
    }
    local_14 = 1;
    FUN_0800e09e();
    for (local_18 = 0; (int)local_18 < 4; local_18 = local_18 + 1) {
      if ((&DAT_200031f2)[local_18] != local_10[local_18 + 2]) {
        local_14 = 0;
        break;
      }
    }
    if (local_14 == 0) {
      local_14 = 1;
      for (local_18 = 0; (int)local_18 < 0xe; local_18 = local_18 + 1) {
        if ((&DAT_200031c2)[local_18] != local_10[local_18 + 2]) {
          local_14 = 0;
          break;
        }
      }
      for (local_18 = 0xe; (int)local_18 < 0x11; local_18 = local_18 + 1) {
        if ((&DAT_200031c2)[local_18] != local_10[local_18 + 3]) {
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
    FUN_0801a360(0x46,DAT_20000971,0,0,0,0,0,0);
    return;
  }
  uVar8 = (uint)(byte)param_1[0x10];
  if (uVar8 == 0x7a) {
    if (((DAT_2000314d == '\x01') || (param_1[0x11] != '\x10')) &&
       (iVar9 = FUN_0800fb36(), iVar9 == 1)) {
      FUN_08020bda(local_10);
      return;
    }
    FUN_08023532(&local_24,0x14);
    local_24 = 0x155aa;
    local_20 = (uint)local_20._2_2_ << 0x10;
    local_18 = (uint)(ushort)local_18;
    local_14 = CONCAT22(local_14._2_2_,0xee7a);
    uVar7 = FUN_08020ad8((int)&local_24 + 2,0x10);
    local_14 = CONCAT13((char)uVar7,CONCAT12((char)((ushort)uVar7 >> 8),(undefined2)local_14));
    FUN_0801a50a(&local_24);
    FUN_0800e09e(3);
    return;
  }
  if (uVar8 < 0x7b) {
    uVar8 = uVar8 - 0x3f;
    bVar10 = 0x3a < uVar8;
switchD_0801af2e_default:
    if (bVar10) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0801aea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0801aeaa + (uint)*(ushort *)(&DAT_0801aeaa + uVar8 * 2) * 2))();
    return;
  }
  if (uVar8 == 0x93) {
    FUN_0800e09e(1);
    if (DAT_20003142 == '\0') {
      local_28 = DAT_20003b94;
      uVar2 = DAT_20003b92;
      uVar3 = DAT_20003b90;
      uVar4 = DAT_20003b8e;
      uVar5 = DAT_20003b8c;
      uVar6 = DAT_20003b8a;
    }
    else {
      local_28 = DAT_20003196;
      uVar2 = DAT_20003194;
      uVar3 = DAT_20003192;
      uVar4 = DAT_20003190;
      uVar5 = DAT_2000318e;
      uVar6 = DAT_2000318c;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0801a360(0xad,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    return;
  }
  if (0x93 < uVar8) {
    if (uVar8 == 0x9b) {
      FUN_0800e09e(1);
      FUN_0801a04e();
      DAT_2000093d = 1;
      return;
    }
    if (0x9b < uVar8) {
      if (uVar8 != 0xe4) {
        if (uVar8 < 0xe5) {
          if ((uVar8 == 0xe1) || (uVar8 == 0xe2)) {
            FUN_0802120c(param_1);
            return;
          }
          bVar10 = uVar8 == 0xe3;
        }
        else {
          if ((uVar8 == 0xe5) || (uVar8 == 0xe6)) {
            FUN_080212f0(param_1);
            return;
          }
          bVar10 = false;
          if (uVar8 == 0xf9) {
            FUN_08021e5c(param_1);
            return;
          }
        }
        if (!bVar10) {
          return;
        }
      }
      FUN_0802317e(param_1);
      return;
    }
    uVar8 = uVar8 - 0x94;
    bVar10 = true;
    switch(uVar8) {
    case 0:
      FUN_0800e09e(1);
      if (DAT_20003142 == '\0') {
        local_28 = DAT_20003ba0;
        uVar2 = DAT_20003b9e;
        uVar3 = DAT_20003b9c;
        uVar4 = DAT_20003b9a;
        uVar5 = DAT_20003b98;
        uVar6 = DAT_20003b96;
      }
      else {
        local_28 = DAT_200031a2;
        uVar2 = DAT_200031a0;
        uVar3 = DAT_2000319e;
        uVar4 = DAT_2000319c;
        uVar5 = DAT_2000319a;
        uVar6 = DAT_20003198;
      }
      local_14 = (uint)uVar6;
      local_18 = (uint)uVar5;
      local_1c = (uint)uVar4;
      local_20 = (uint)uVar3;
      local_24 = (uint)uVar2;
      FUN_0801a360(0xae,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
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
        FUN_0800e09e(1);
        return;
      }
      if (param_1[5] != -1) {
        return;
      }
      DAT_200006a0 = 0x14;
      FUN_0800e09e(1);
      return;
    case 2:
      FUN_0800e09e(1);
      local_14 = (uint)(short)DAT_2000320c;
      FUN_0801a360(0x4d,local_14,0,0,0,0,0,0);
      return;
    case 3:
      FUN_0800e09e(1);
      DAT_2000320c = (ushort)(byte)local_10[2];
      local_14 = (uint)(short)DAT_2000320c;
      FUN_0801a360(0x4d,local_14,0,0,0,0,0,0);
      DAT_2000314b = 1;
      return;
    case 4:
      FUN_0800e09e(1);
      local_14 = (uint)DAT_200031ae;
      local_18 = (uint)DAT_200031b0;
      local_1c = (uint)DAT_200031b2;
      local_20 = (uint)DAT_200031b4;
      FUN_0801a360(0xb5,0,(int)(short)DAT_200031ae,(int)(short)DAT_200031b0,(int)(short)DAT_200031b2
                   ,(int)(short)DAT_200031b4,0,0);
      return;
    case 5:
      FUN_0800e09e(1);
      local_14 = (uint)CONCAT11(DAT_2000320b,DAT_2000320a);
      local_18 = (uint)CONCAT11(DAT_20003209,DAT_20003208);
      local_1c = (uint)CONCAT11(DAT_20003207,DAT_20003206);
      FUN_0801a360(0xe7,local_1c,local_18,local_14,0,0,0,0);
      return;
    case 6:
      FUN_0800e09e(1);
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1 & 0xff) {
        (&DAT_20003206)[local_14] = local_10[local_14 + 2];
      }
      local_18 = (uint)*(short *)(local_10 + 6);
      local_1c = (uint)*(short *)(local_10 + 4);
      local_20 = (uint)*(short *)(local_10 + 2);
      FUN_0801a360(0xe7,local_20,local_1c,local_18,0,0,0,0);
      DAT_2000314b = 1;
      return;
    }
    goto switchD_0801af2e_default;
  }
  uVar8 = uVar8 - 0x7c;
  bVar10 = true;
  switch(uVar8) {
  case 0:
    local_1c = FUN_0800fad6();
    local_14 = (uint)(byte)local_10[2];
    local_18 = 0;
    if (diag_AgeModeflg == '\0') {
      if (DAT_2000314d != '\0') {
        iVar9 = local_1c;
        if ((int)local_1c < 0) {
          iVar9 = -local_1c;
        }
        local_20 = local_1c;
        if (((0x42000 < iVar9) && (local_14 == 1)) && (DAT_20003142 == '\0')) {
          FUN_0800aea4(1);
          FUN_0800e09e(1);
          local_18 = 1;
          goto LAB_0801c468;
        }
      }
      FUN_0800e09e(3);
      local_14 = 0;
    }
    else if (local_14 == 0) {
      FUN_0800aea4(2);
      FUN_0800e09e(2);
      local_18 = 1;
    }
    else if (DAT_2000314d == '\0') {
      FUN_0800e09e(3);
      local_14 = 0;
    }
    else {
      FUN_0800aea4(1);
      FUN_0800e09e(1);
      local_18 = 1;
    }
LAB_0801c468:
    FUN_0801a360(0x48,local_14,0,0,0,0,0,0);
    break;
  case 1:
    local_14 = (uint)DAT_20003204;
    FUN_0801a360(0x4a,local_14,0,0,0,0,0,0);
    FUN_0800e09e(1);
    DAT_2000314b = 1;
    break;
  case 2:
    DAT_20003202 = (ushort)(byte)param_1[2];
    local_14 = (uint)(short)DAT_20003202;
    FUN_0801a360(0x4c,local_14,0,0,0,0,0,0);
    FUN_0800e09e(1);
    DAT_2000314b = 1;
    break;
  case 3:
    break;
  case 4:
    FUN_0800e09e(1);
    local_14 = (uint)DAT_20003204;
    FUN_0801a360(0x4a,local_14,0,0,0,0,0,0);
    break;
  case 5:
    FUN_0800e09e(1);
    local_14 = (uint)(short)DAT_20003202;
    FUN_0801a360(0x4c,local_14,0,0,0,0,0,0);
    break;
  case 6:
    if (DAT_20003142 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e09e(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a360(0xac,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_20003180 = (ushort)local_14;
        DAT_20003182 = (ushort)local_18;
        DAT_20003184 = (ushort)local_1c;
        DAT_20003186 = (ushort)local_20;
        DAT_20003188 = (ushort)local_24;
        DAT_2000318a = sVar1;
        FUN_0800aba0(&DAT_2000317e);
        DAT_2000314b = 1;
        return;
      }
    }
    FUN_0800e09e(2);
    break;
  case 7:
    if (DAT_20003142 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e09e(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a360(0xad,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_2000318c = (ushort)local_14;
        DAT_2000318e = (ushort)local_18;
        DAT_20003190 = (ushort)local_1c;
        DAT_20003192 = (ushort)local_20;
        DAT_20003194 = (ushort)local_24;
        DAT_20003196 = sVar1;
        FUN_0800aba0(&DAT_2000317e);
        DAT_2000314b = 1;
        return;
      }
    }
    FUN_0800e09e(2);
    break;
  case 8:
    if (DAT_20003142 != '\0') {
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 0xbb9) {
        FUN_0800e09e(1);
        local_14 = (uint)*(ushort *)(local_10 + 2);
        local_18 = (uint)*(ushort *)(local_10 + 4);
        local_1c = (uint)*(ushort *)(local_10 + 6);
        local_20 = (uint)*(ushort *)(local_10 + 8);
        local_24 = (uint)*(ushort *)(local_10 + 10);
        sVar1 = *(short *)(local_10 + 0xc);
        FUN_0801a360(0xae,0,(int)(short)*(ushort *)(local_10 + 2),
                     (int)(short)*(ushort *)(local_10 + 4),(int)(short)*(ushort *)(local_10 + 6),
                     (int)(short)*(ushort *)(local_10 + 8),(int)(short)*(ushort *)(local_10 + 10),
                     (int)sVar1);
        DAT_20003198 = (ushort)local_14;
        DAT_2000319a = (ushort)local_18;
        DAT_2000319c = (ushort)local_1c;
        DAT_2000319e = (ushort)local_20;
        DAT_200031a0 = (ushort)local_24;
        DAT_200031a2 = sVar1;
        FUN_0800aba0(&DAT_2000317e);
        DAT_2000314b = 1;
        return;
      }
    }
    FUN_0800e09e(2);
    break;
  case 9:
    local_14 = diag_VehicleSpeed;
    iVar9 = diag_VehicleSpeed;
    if (diag_VehicleSpeed < 0) {
      iVar9 = -diag_VehicleSpeed;
    }
    if (iVar9 < 0xbb9) {
      FUN_0800e09e(1);
      FUN_0801aa0c(local_10);
      DAT_2000314b = 1;
    }
    else {
      FUN_0800e09e(2);
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
      FUN_0800e09e(1);
      if (local_10[2] == '\0') {
        DAT_2000317e = 0xe000;
        FUN_0801a360(0xa2,1,0,0,0,0,0,0);
      }
      else if (local_10[2] == '\x01') {
        DAT_2000317e = 0xe001;
        FUN_0801a360(0xa2,1,1,0,0,0,0,0);
      }
      else if (local_10[2] == '\x02') {
        DAT_2000317e = 0xe002;
        FUN_0801a360(0xa2,1,2,0,0,0,0,0);
      }
      DAT_20003b7c = DAT_2000317e;
      if (DAT_20003142 == '\0') {
        FUN_0800aba0(&DAT_20003b7c);
      }
      else {
        FUN_0800aba0(&DAT_2000317e);
      }
      DAT_2000314b = 1;
    }
    else {
      FUN_0800e09e(2);
    }
    break;
  case 0xc:
    DAT_2000093d = 1;
    if (DAT_200031bc == 1) {
      FUN_0800e09e();
    }
    else {
      DAT_200006a0 = 3;
    }
    break;
  case 0xd:
    FUN_0800e09e(1);
    if (DAT_2000314d == '\x01') {
      local_14 = diag_VehicleSpeed;
      iVar9 = diag_VehicleSpeed;
      if (diag_VehicleSpeed < 0) {
        iVar9 = -diag_VehicleSpeed;
      }
      if (iVar9 < 1000) {
        FUN_0800afbc();
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
      local_14 = (uint)DAT_20003172;
      FUN_0801a360(0x8a,0,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\x01') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_2000314d == '\0') {
        FUN_0800e09e(2);
      }
      else {
        FUN_0800e09e(1);
        DAT_20003172 = (short)local_14;
        local_18 = ((int)DAT_20003172 << 0xc) / 10;
        FUN_0800faec();
        local_18 = (uint)DAT_20003172;
        FUN_0801a360(0x8a,1,local_18,0,0,0,0,0);
        DAT_2000314b = 1;
      }
    }
    else if (param_1[2] == '\x02') {
      local_14 = (uint)DAT_20003174;
      FUN_0801a360(0x8a,2,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\x03') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_2000314d == '\0') {
        FUN_0800e09e(2);
      }
      else {
        FUN_0800e09e(1);
        DAT_20003174 = (short)local_14;
        local_18 = ((int)DAT_20003174 << 0xc) / 10;
        FUN_0800fb0c();
        local_18 = (uint)DAT_20003174;
        FUN_0801a360(0x8a,3,local_18,0,0,0,0,0);
        DAT_2000314b = 1;
      }
    }
    else if (param_1[2] == '\x04') {
      local_14 = (uint)DAT_2000320e;
      FUN_0801a360(0x8a,4,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\x05') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_2000314d == '\0') {
        FUN_0800e09e(2);
      }
      else {
        FUN_0800e09e(1);
        DAT_2000320e = (byte)local_14;
        local_18 = local_14 & 0xff;
        FUN_0800fb2e();
        local_18 = (uint)DAT_2000320e;
        FUN_0801a360(0x8a,5,local_18,0,0,0,0,0);
        DAT_2000314b = 1;
      }
    }
    else if (param_1[2] == '\x06') {
      local_14 = (uint)(short)DAT_200031b8;
      FUN_0801a360(0x8a,6,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\a') {
      local_14 = (uint)*(ushort *)(param_1 + 4);
      local_18 = (uint)(byte)param_1[6] + (uint)(byte)param_1[7] * 0x100;
      if (DAT_2000314d == '\0') {
        FUN_0800e09e(2);
      }
      else {
        local_18 = local_18 ^ 0xffff;
        if (local_14 == local_18) {
          if (param_1[3] == -0x32) {
            if (((int)local_14 < DAT_200002dc + -200) || (DAT_200002dc + 200 < (int)local_14)) {
              local_1c = (uint)(short)DAT_200031b8;
              FUN_0801a360(0x8a,7,local_1c,0,0,0,0,0);
              FUN_0800e09e(2);
            }
            else {
              DAT_200002d8 = local_14 - DAT_200002dc;
              DAT_200031b8 = (ushort)DAT_200002d8;
              DAT_200031ba = (ushort)DAT_200002d8 ^ 0xffff;
              FUN_0800e09e(1);
              local_1c = (uint)(short)DAT_200031b8;
              FUN_0801a360(0x8a,0xffffce07,local_1c,0,0,0,0,0);
              DAT_2000314b = 1;
            }
          }
          else if ((param_1[3] == ' ') && (local_14 == 0)) {
            DAT_200002d8 = 0;
            DAT_200031b8 = 0;
            DAT_200031ba = 0;
            FUN_0800e09e(1);
            local_1c = (uint)(short)DAT_200031b8;
            FUN_0801a360(0x8a,0x2007,local_1c,0,0,0,0,0);
            DAT_2000314b = 1;
          }
        }
        else {
          FUN_0800e09e(2);
        }
      }
    }
    else if (param_1[2] == '\b') {
      local_14 = (uint)DAT_200031ac;
      FUN_0801a360(0x8a,8,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\t') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (((DAT_2000314d == '\0') || (100 < local_14)) || (local_14 < 0x32)) {
        FUN_0800e09e(2);
      }
      else {
        FUN_0800e09e(1);
        DAT_200031ac = (short)local_14;
        local_18 = local_14 & 0xffff;
        FUN_08014ec4();
        local_18 = (uint)DAT_200031ac;
        FUN_0801a360(0x8a,9,local_18,0,0,0,0,0);
        DAT_2000314b = 1;
      }
    }
    else if (param_1[2] == '\n') {
      local_14 = DAT_2000320f & 1;
      FUN_0801a360(0x8a,10,local_14,0,0,0,0,0);
      FUN_0800e09e(1);
    }
    else if (param_1[2] == '\v') {
      local_14 = (uint)(byte)param_1[4] + (uint)(byte)param_1[5] * 0x100;
      if (DAT_2000314d == '\0') {
        FUN_0800e09e(2);
      }
      else {
        FUN_0800e09e(1);
        if (local_14 == 0) {
          DAT_2000320f = DAT_2000320f & 0xfe;
        }
        else {
          DAT_2000320f = DAT_2000320f | 1;
        }
        local_18 = DAT_2000320f & 1;
        FUN_0801a360(0x8a,0xb,local_18,0,0,0,0,0);
        DAT_2000314b = 1;
      }
    }
    break;
  case 0x16:
    FUN_0800e09e(1);
    if (DAT_20003142 == '\0') {
      local_28 = DAT_20003b88;
      uVar2 = DAT_20003b86;
      uVar3 = DAT_20003b84;
      uVar4 = DAT_20003b82;
      uVar5 = DAT_20003b80;
      uVar6 = DAT_20003b7e;
    }
    else {
      local_28 = DAT_2000318a;
      uVar2 = DAT_20003188;
      uVar3 = DAT_20003186;
      uVar4 = DAT_20003184;
      uVar5 = DAT_20003182;
      uVar6 = DAT_20003180;
    }
    local_14 = (uint)uVar6;
    local_18 = (uint)uVar5;
    local_1c = (uint)uVar4;
    local_20 = (uint)uVar3;
    local_24 = (uint)uVar2;
    FUN_0801a360(0xac,0,(int)(short)uVar6,(int)(short)uVar5,(int)(short)uVar4,(int)(short)uVar3,
                 (int)(short)uVar2,(int)local_28);
    break;
  default:
    goto switchD_0801af2e_default;
  }
  return;
}



/* ENTRY 0x0801c7c2 : FUN_0801c7c2 */

uint FUN_0801c7c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

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
        if (DAT_200031c7 < 0x37) {
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
            if ((DAT_20004086 == -0x44) && (DAT_2000408a == '\x13')) {
              bVar2 = true;
              for (uVar4 = 0; uVar4 < DAT_2000099d + 5; uVar4 = uVar4 + 1 & 0xff) {
                puVar7 = (undefined *)(uint)(byte)(&DAT_2000408b)[uVar4];
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
            FUN_0801a208(&DAT_20000997,6,puVar6,puVar7,param_1,param_2,param_3,param_4);
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
          FUN_0801a208(s_AT_ULKTE_20000972,9,DAT_2000099e / 0x78,param_4,param_1,param_2,param_3,
                       param_4);
        }
        break;
      case 5:
        uVar4 = DAT_2000099e / 0x50;
        if ((uint)DAT_2000099e % 0x50 == 0x14) {
          if ((DAT_20004086 == -0x44) && (DAT_2000408a == '\x13')) {
            bVar2 = true;
            puVar7 = param_4;
            for (uVar5 = 0; uVar5 < DAT_2000099d + 5; uVar5 = uVar5 + 1 & 0xff) {
              uVar4 = (uint)(byte)(&DAT_2000408b)[uVar5];
              puVar7 = &DAT_20000985;
              if (uVar4 != (byte)(&DAT_2000098a)[uVar5]) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              DAT_200009a1 = 6;
            }
            else {
              FUN_0801a208(&DAT_20000985,DAT_2000099d + 10,uVar4,puVar7,param_1,param_2,param_3,
                           param_4);
            }
          }
          DAT_200009a0 = DAT_200009a0 + 1;
        }
        else if ((uint)DAT_2000099e % 0x50 == 0x3c) {
          FUN_0801a208(&DAT_20000997,6,DAT_2000099e / 0x50,param_4,param_1,param_2,param_3,param_4);
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
      FUN_0801a260(0xa9,(int)(short)(sVar9 + 0x32),(int)sVar3,
                   (int)(short)((uint)diag_kilometer >> 0x10),(int)(short)diag_kilometer,(int)sVar1,
                   (int)(short)(diag_MosTemp * 100),(int)DAT_2000317e);
    }
    if ((uint)DAT_2000099e % 0x18 == 4) {
      sVar9 = (short)(DAT_2000310c / 10);
      if (DAT_2000310c / 10 < 0) {
        sVar9 = -sVar9;
      }
      FUN_0801a260(0xb9,(int)(short)((uint)diag_currentmeter >> 0x10),(int)(short)diag_currentmeter,
                   (int)(short)DAT_20003100,(int)sVar9,
                   (int)(short)((ushort)DAT_200006b8 | (ushort)(byte)DAT_200031bc << 8),
                   (int)CONCAT11(DAT_200006d2,DAT_200006d1),(int)(short)(diag_MotorTemp * 100));
    }
    if ((uint)DAT_2000099e % 0x18 == 8) {
      FUN_0801a260(0xf5,(int)(short)DAT_200006c8,(int)(short)DAT_200006cc,
                   (int)CONCAT11(DAT_200006c6,DAT_200006c7),(int)CONCAT11(DAT_200006c2,DAT_200006c4)
                   ,0,0,(int)(short)((ushort)diag_cpurate |
                                    (ushort)((diag_VectorVol * 100) / 32000 << 8)));
    }
    if ((uint)DAT_2000099e % 0x18 == 0xc) {
      FUN_0801a260(0xf6,(int)(short)(diag_g_winespeed_lv / 10),DAT_200001e8,
                   (int)(short)((uint)diag_kiloWh >> 0x10),(int)(short)diag_kiloWh,
                   (int)(short)DAT_20003118,(int)(short)(DAT_20003108 / 0xe10),(int)DAT_20003140);
    }
    if ((uint)DAT_2000099e % 0x18 == 0x10) {
      uVar8 = 0;
      if (DAT_20003b6c != '\0') {
        uVar8 = 0x1000;
      }
      FUN_0801a260(0xc9,0,0,0,0,0,0,uVar8);
    }
    if ((uint)DAT_2000099e + ((int)(uint)DAT_2000099e >> 2) * -4 == 2) {
      FUN_08022086();
    }
    uVar4 = (uint)DAT_2000099e % 0x18;
    if (uVar4 == 0x14) {
      uVar4 = FUN_08021304();
    }
  }
  return uVar4;
}



/* ENTRY 0x0801cc5c : FUN_0801cc5c */

void FUN_0801cc5c(void)

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
  
  FUN_08023f18(0x11,1);
  FUN_08023dc2(&local_34);
  local_34 = 0x200;
  local_32 = 3;
  local_31 = 0x18;
  FUN_08023c80(&DAT_40011000,&local_34);
  FUN_08023d2e(&DAT_40011000,0x200);
  FUN_08023ed0(2,1);
  FUN_080238dc(&DAT_40020408);
  local_30 = &DAT_4001344c;
  local_2c = &DAT_2000409c;
  local_28 = 0x10;
  local_24 = 0x482;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0x100;
  local_14 = 0x400;
  local_10 = 0x20;
  local_c = 0;
  local_8 = 0;
  FUN_08023a18(&DAT_40020408,&local_30);
  local_54 = 0x38;
  local_53 = 3;
  local_52 = 3;
  local_51 = 1;
  FUN_08023e18(&local_54);
  FUN_08023a08(&DAT_40020408,2,1);
  FUN_080238c8(&DAT_40020408,1);
  FUN_08023f18(0x2000);
  local_3c = 0x5a;
  local_40 = 0;
  local_3a = 0;
  local_3e = 0;
  local_38 = 0;
  FUN_080249f4(&DAT_40013400,&local_40);
  FUN_08024944(&local_50);
  local_50 = 0x60;
  local_4e = 1;
  local_48 = 2;
  local_4a = 0;
  FUN_080248d2(&DAT_40013400,&local_50);
  FUN_08024936(&DAT_40013400,8);
  local_64 = 0x800;
  local_62 = 0x400;
  local_60 = 0x100;
  local_5e = 0;
  local_5c = 0;
  local_5a = 0x2000;
  local_58 = 0;
  FUN_08024296(&DAT_40013400,&local_64);
  FUN_080242da(&DAT_40013400,0x80);
  FUN_08024284(&DAT_40013400,1);
  FUN_08024318(&DAT_40013400,0xf,0x100);
  FUN_08024308(&DAT_40013400,0x100);
  FUN_080242f2(&DAT_40013400,1);
  FUN_080242e0(&DAT_40013400,1);
  return;
}



/* ENTRY 0x0801cddc : FUN_0801cddc */

void FUN_0801cddc(void)

{
  int iVar1;
  
  iVar1 = FUN_080239e8(0x10000002);
  if (iVar1 != 0) {
    DAT_40013440 = 0;
    DAT_200009a2 = 0;
    FUN_080238b0(0x10000002);
  }
  return;
}



/* ENTRY 0x0801cdfa : FUN_0801cdfa */

void FUN_0801cdfa(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_200009a2 == '\0') {
    param_1 = param_1 & 0x7f;
    for (; uVar1 < 3; uVar1 = uVar1 + 1 & 0xff) {
      for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
        *(uint *)(&DAT_2000409c + (param_1 * 0x30 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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
        *(uint *)(&DAT_2000409c + (iVar3 * 0x18 + 0xf1 + uVar1 * 8 + uVar2) * 4) =
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



/* ENTRY 0x0801cf84 : thunk_FUN_0801cf96 */

void thunk_FUN_0801cf96(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801cf96 : FUN_0801cf96 */

void FUN_0801cf96(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 0x0801cf9c : FUN_0801cf9c */

void FUN_0801cf9c(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(0x30,1);
  local_8 = 0x10031000;
  FUN_08023c80(&DAT_40011000,&local_8);
  local_8 = 0x10030004;
  FUN_08023c80(&DAT_40011400,&local_8);
  local_8 = 0x10030010;
  FUN_08023c80(&DAT_40011000,&local_8);
  return;
}



/* ENTRY 0x0801cff4 : FUN_0801cff4 */

void FUN_0801cff4(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_08023dba(&DAT_40011400,4);
    if ((param_1 & 1) == 0) {
      FUN_08023dba(&DAT_40011000,0x1000);
    }
    else {
      FUN_08023dbe(&DAT_40011000,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_08023dbe(&DAT_40011400,4);
  }
  return;
}



/* ENTRY 0x0801d034 : FUN_0801d034 */

void FUN_0801d034(undefined4 param_1)

{
  FUN_08023dba(&DAT_40011000,0x10);
  FUN_0801cff4(param_1);
  FUN_08023dbe(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d050 : FUN_0801d050 */

void FUN_0801d050(uint param_1,undefined4 param_2)

{
  FUN_0801d034(0x44);
  FUN_08023dba(&DAT_40011000,0x10);
  FUN_0801cff4(param_1 | 0xc0);
  FUN_0801cff4(param_2);
  FUN_08023dbe(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d07c : FUN_0801d07c */

void FUN_0801d07c(int param_1)

{
  uint uVar1;
  
  FUN_0801d034(0x8f);
  FUN_0801d034(0x40);
  FUN_08023dba(&DAT_40011000,0x10);
  FUN_0801cff4(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801cff4(*(undefined1 *)(param_1 + uVar1));
    FUN_0801cff4((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_08023dbe(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d0c0 : FUN_0801d0c0 */

void FUN_0801d0c0(void)

{
  byte bVar1;
  
  FUN_0801cf9c();
  thunk_FUN_0801cf96(10);
  FUN_0801d034(0x8f);
  thunk_FUN_0801cf96(1);
  FUN_0801d034(0x40);
  thunk_FUN_0801cf96(1);
  FUN_08023dba(&DAT_40011000,0x10);
  FUN_0801cff4(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_0801cff4(0);
  }
  FUN_08023dbe(&DAT_40011000,0x10);
  return;
}



/* ENTRY 0x0801d118 : FUN_0801d118 */

void FUN_0801d118(void)

{
  undefined4 local_8;
  
  local_8 = 0x1000003;
  FUN_08023e18(&local_8);
  return;
}



/* ENTRY 0x0801d138 : FUN_0801d138 */

undefined4 FUN_0801d138(int param_1)

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



/* ENTRY 0x0801d172 : FUN_0801d172 */

void FUN_0801d172(undefined1 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

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
    iVar2 = FUN_0801d138(sVar1);
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
    iVar2 = FUN_0801d138(sVar1);
    uVar3 = extraout_r3_00;
    if ((iVar2 == 0) || (uVar4 != 1)) {
      if (extraout_r3_00 < (byte)(&DAT_08027d36)[uVar4]) break;
      iVar2 = -(uint)(byte)(&DAT_08027d36)[uVar4];
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



/* ENTRY 0x0801d274 : FUN_0801d274 */

longlong FUN_0801d274(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_080240a4();
  if ((uint)DAT_200009a4 == uVar1 / 0x15180) {
    uVar1 = uVar1 % 0x15180;
    DAT_200049a0 = (undefined1)(uVar1 / 0xe10);
    DAT_200049a1 = (undefined1)((uVar1 % 0xe10) / 0x3c);
    DAT_200049a2 = (char)(uVar1 % 0xe10) + (char)((uVar1 % 0xe10) / 0x3c) * -0x3c;
  }
  else {
    DAT_200009a4 = (ushort)(uVar1 / 0x15180);
    FUN_0801d172(&local_20,uVar1);
    DAT_200049a0 = (undefined1)local_20;
    DAT_200049a1 = local_20._1_1_;
    DAT_200049a2 = local_20._2_1_;
    DAT_200049a4 = (undefined2)local_1c;
    DAT_200049a6 = local_1c._2_1_;
    DAT_200049a7 = local_1c._3_1_;
    DAT_200049a8 = (undefined1)local_18;
  }
  return (ulonglong)local_20 << 0x20;
}



/* ENTRY 0x0801d314 : FUN_0801d314 */

int FUN_0801d314(int param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar3 = FUN_0801d138(uVar4);
      if (iVar3 == 0) {
        iVar3 = extraout_r3 + 0x1e13380;
      }
      else {
        iVar3 = extraout_r3 + 0x1e28500;
      }
    }
    for (uVar1 = 0; uVar1 < (param_2 - 1U & 0xff); uVar1 = uVar1 + 1) {
      iVar2 = FUN_0801d138(param_1);
      iVar3 = extraout_r3_00;
      if ((iVar2 != 0) && (uVar1 == 1)) {
        iVar3 = extraout_r3_00 + 0x15180;
      }
    }
    param_6 = iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6;
  }
  return param_6;
}



/* ENTRY 0x0801d3b0 : FUN_0801d3b0 */

undefined4
FUN_0801d3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x7b2) || (0x833 < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0801d314(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_08023ee8(0x18000000,1);
    FUN_08023eb0(1);
    FUN_0802411c(uVar1);
    FUN_08024168();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d40a : FUN_0801d40a */

undefined4 FUN_0801d40a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  FUN_08023ee8(0x18000000,1,param_3,param_4,param_3,param_4);
  FUN_08023eb0(1);
  iVar2 = FUN_08023896(4);
  if (iVar2 == 0x5050) {
    FUN_08024178();
    FUN_08024168();
  }
  else {
    FUN_08023884();
    FUN_08024034(1);
    for (; (iVar2 = FUN_08024004(0x41), iVar2 == 0 && (bVar1 < 0xfa)); bVar1 = bVar1 + 1) {
      FUN_08008e00(10);
    }
    if (0xf9 < bVar1) {
      return 1;
    }
    FUN_08024064(0x100);
    FUN_08024058(1);
    FUN_08024168();
    FUN_08024178();
    FUN_080240dc(1);
    FUN_08024168();
    FUN_08024084();
    FUN_08024144(0x7fff);
    FUN_08024168();
    FUN_0801d3b0(0x7df,1,0xe,0x11,0x2a,0x37);
    FUN_08024094();
    FUN_080238a2(4,0x5050);
  }
  FUN_0801d274();
  return 0;
}



/* ENTRY 0x0801d4be : FUN_0801d4be */

void FUN_0801d4be(void)

{
  int iVar1;
  
  iVar1 = FUN_080240bc(1);
  if (iVar1 != 0) {
    FUN_0801d274();
  }
  iVar1 = FUN_080240bc(2);
  if (iVar1 != 0) {
    FUN_08024074(2);
    FUN_0801d274();
  }
  FUN_08024074(5);
  FUN_08024168();
  return;
}



/* ENTRY 0x0801d4ea : FUN_0801d4ea */

undefined4 FUN_0801d4ea(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
      iVar2 = FUN_0801d138(uVar4);
      if (iVar2 == 0) {
        iVar3 = iVar3 + 0x1e13380;
      }
      else {
        iVar3 = iVar3 + 0x1e28500;
      }
    }
    for (uVar4 = 0; uVar4 < (param_2 - 1U & 0xff); uVar4 = uVar4 + 1 & 0xffff) {
      iVar3 = iVar3 + (uint)(byte)(&DAT_08027d36)[uVar4] * 0x15180;
      iVar2 = FUN_0801d138(param_1);
      if ((iVar2 != 0) && (uVar4 == 1)) {
        iVar3 = iVar3 + 0x15180;
      }
    }
    FUN_08023ee8(0x18000000,1);
    FUN_08023eb0(1);
    FUN_080240f4(iVar3 + (param_3 + -1) * 0x15180 + param_4 * 0xe10 + param_5 * 0x3c + param_6);
    FUN_08024168();
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801d5bc : FUN_0801d5bc */

uint FUN_0801d5bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 % 100 & 0xff;
  if (0x13 < (param_1 / 100 & 0xffU)) {
    uVar1 = uVar1 + 100 & 0xff;
  }
  uVar2 = (uint)(byte)(&DAT_08027d29)[param_2] + (uVar1 + ((int)uVar1 >> 2)) % 7 + param_3 & 0xffff;
  if ((uVar1 == ((int)uVar1 >> 2) * 4) && (param_2 < 3)) {
    uVar2 = uVar2 - 1 & 0xffff;
  }
  return uVar2 % 7;
}



/* ENTRY 0x0801d634 : FUN_0801d634 */

undefined1 FUN_0801d634(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = 0;
  do {
    iVar3 = FUN_080241a2(&DAT_40003c00,2);
    if (iVar3 != 0) {
      FUN_080241b4(&DAT_40003c00,param_1);
      bVar1 = 0;
      do {
        iVar3 = FUN_080241a2(&DAT_40003c00,1);
        if (iVar3 != 0) {
          uVar2 = FUN_080241b0(&DAT_40003c00);
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



/* ENTRY 0x0801d682 : FUN_0801d682 */

void FUN_0801d682(void)

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
  
  FUN_08023f18(8,1);
  FUN_08023ee8(0x8000);
  local_8 = 0x38;
  local_5 = 0x18;
  local_6 = 3;
  FUN_08023c80(&DAT_40010c00,&local_8);
  FUN_08023dbe(&DAT_40010c00,0x38);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0;
  local_e = 0;
  local_c = 7;
  FUN_080241b8(&DAT_40003c00,&local_1c);
  FUN_08024190(&DAT_40003c00,1);
  FUN_0801d634(0xff);
  return;
}



/* ENTRY 0x0801d708 : FUN_0801d708 */

void FUN_0801d708(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 & 0xffc7;
  uVar1 = DAT_40003c00;
  DAT_40003c00 = uVar1 | param_1;
  FUN_08024190(&DAT_40003c00,1);
  return;
}



/* ENTRY 0x0801d734 : FUN_0801d734 */

uint FUN_0801d734(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801d634(0x90);
  FUN_0801d634(0);
  FUN_0801d634(0);
  FUN_0801d634(0);
  iVar1 = FUN_0801d634(0xff);
  uVar2 = FUN_0801d634(0xff);
  DAT_422101bc = 1;
  return iVar1 << 8 | uVar2;
}



/* ENTRY 0x0801d774 : FUN_0801d774 */

void FUN_0801d774(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08023f18(8,1);
  local_8 = 0x10038000;
  FUN_08023c80(&DAT_40010800,&local_8);
  FUN_08023dbe(&DAT_40010800,0x8000);
  local_8 = 0x10030004;
  FUN_08023c80(&DAT_40011000,&local_8);
  FUN_08023dbe(&DAT_40011000,4);
  DAT_422101bc = 1;
  FUN_0801d682();
  FUN_0801d708(0);
  DAT_200009a6 = FUN_0801d734();
  return;
}



/* ENTRY 0x0801d7e0 : FUN_0801d7e0 */

undefined4 FUN_0801d7e0(void)

{
  undefined4 uVar1;
  
  DAT_422101bc = 0;
  FUN_0801d634(5);
  uVar1 = FUN_0801d634(0xff);
  DAT_422101bc = 1;
  return uVar1;
}



/* ENTRY 0x0801d804 : FUN_0801d804 */

void FUN_0801d804(undefined4 param_1)

{
  DAT_422101bc = 0;
  FUN_0801d634(1);
  FUN_0801d634(param_1);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d824 : FUN_0801d824 */

void FUN_0801d824(void)

{
  DAT_422101bc = 0;
  FUN_0801d634(6);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d83c : FUN_0801d83c */

void FUN_0801d83c(void)

{
  DAT_422101bc = 0;
  FUN_0801d634(4);
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d854 : FUN_0801d854 */

void FUN_0801d854(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_422101bc = 0;
  FUN_0801d634(3);
  FUN_0801d634((param_2 & 0xffffff) >> 0x10);
  FUN_0801d634((param_2 & 0xffff) >> 8);
  FUN_0801d634(param_2 & 0xff);
  for (uVar2 = 0; (int)uVar2 < param_3; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801d634(0xff);
    *(undefined1 *)(param_1 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d89e : FUN_0801d89e */

undefined4 FUN_0801d89e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  DAT_422101bc = 0;
  local_10 = param_4;
  FUN_0801d634(3);
  FUN_0801d634((param_1 & 0xffffff) >> 0x10);
  FUN_0801d634((param_1 & 0xffff) >> 8);
  FUN_0801d634(param_1 & 0xff);
  for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = FUN_0801d634(0xff);
    *(undefined1 *)((int)&local_10 + uVar2) = uVar1;
  }
  DAT_422101bc = 1;
  return local_10;
}



/* ENTRY 0x0801d8e4 : FUN_0801d8e4 */

void FUN_0801d8e4(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_0801d824();
  DAT_422101bc = 0;
  FUN_0801d634(2);
  FUN_0801d634((param_2 & 0xffffff) >> 0x10);
  FUN_0801d634((param_2 & 0xffff) >> 8);
  FUN_0801d634(param_2 & 0xff);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0801d634(*(undefined1 *)(param_1 + uVar1));
  }
  DAT_422101bc = 1;
  return;
}



/* ENTRY 0x0801d930 : FUN_0801d930 */

uint FUN_0801d930(void)

{
  uint uVar1;
  
  uVar1 = FUN_0801d7e0();
  return uVar1 & 1;
}



/* ENTRY 0x0801d93c : FUN_0801d93c */

int FUN_0801d93c(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0x100 - (param_2 & 0xff);
  if (0x3f < iVar1) {
    iVar1 = 0x40;
  }
  FUN_0801d8e4(param_1,param_2,iVar1);
  return iVar1;
}



/* ENTRY 0x0801d95c : FUN_0801d95c */

uint FUN_0801d95c(undefined4 param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = 0x100 - *param_2;
  if ((int)(uint)*param_3 <= (int)uVar1) {
    uVar1 = (uint)*param_3;
  }
  FUN_0801d8e4(param_1,*(undefined4 *)param_2,uVar1);
  *(uint *)param_2 = *(int *)param_2 + uVar1;
  *param_3 = *param_3 - (short)uVar1;
  return uVar1;
}



/* ENTRY 0x0801d990 : FUN_0801d990 */

void FUN_0801d990(int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_0801d824();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d634(0x20);
    FUN_0801d634((param_2 << 0xc & 0xffffffU) >> 0x10);
    FUN_0801d634((param_2 << 0xc & 0xffffU) >> 8);
    FUN_0801d634(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801d9ce : FUN_0801d9ce */

void FUN_0801d9ce(int param_1,undefined1 param_2)

{
  if (param_1 == 0) {
    FUN_0801d824();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d634(0xd8);
    FUN_0801d634(param_2);
    FUN_0801d634(0);
    FUN_0801d634(0);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801da0c : FUN_0801da0c */

void FUN_0801da0c(int param_1)

{
  if (param_1 == 0) {
    FUN_0801d824();
  }
  else {
    DAT_422101bc = 0;
    FUN_0801d634(199);
    DAT_422101bc = 1;
  }
  return;
}



/* ENTRY 0x0801da30 : FUN_0801da30 */

void FUN_0801da30(void)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_0801d7e0();
  } while ((uVar1 & 1) != 0);
  return;
}



/* ENTRY 0x0801da42 : FUN_0801da42 */

void FUN_0801da42(void)

{
  DAT_422101bc = 0;
  FUN_0801d634(0xb9);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801da60 : FUN_0801da60 */

void FUN_0801da60(void)

{
  DAT_422101bc = 0;
  FUN_0801d634(0xab);
  DAT_422101bc = 1;
  FUN_08008e00(3);
  return;
}



/* ENTRY 0x0801daca : FUN_0801daca */

void FUN_0801daca(uint param_1,char *param_2)

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



/* ENTRY 0x0801db0c : FUN_0801db0c */

undefined4 FUN_0801db0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_14;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049bd)[uVar1 + param_1 * 0x1c0] = (&DAT_08027d48)[uVar1];
  }
  local_14 = param_4;
  FUN_0801daca(param_2,&DAT_200049c4 + param_1 * 0x1c0);
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x30;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049bd)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801daca((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_14);
  (&DAT_200049ca)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049cb)[param_1 * 0x1c0] = local_14._1_1_;
  FUN_0801daca(~uVar2 + 1 & 0xff,&local_14);
  (&DAT_200049cc)[param_1 * 0x1c0] = (undefined1)local_14;
  (&DAT_200049cd)[param_1 * 0x1c0] = local_14._1_1_;
  (&DAT_200049ce)[param_1 * 0x1c0] = 0xd;
  return 0x12;
}



/* ENTRY 0x0801dc06 : FUN_0801dc06 */

undefined4 FUN_0801dc06(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_1c;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049bd)[uVar1 + param_1 * 0x1c0] = (&DAT_08027d48)[uVar1];
  }
  local_1c = param_4;
  FUN_0801daca(param_2,&DAT_200049c0 + param_1 * 0x1c0);
  FUN_0801daca(param_3,&DAT_200049c4 + param_1 * 0x1c0);
  (&DAT_200049c6)[param_1 * 0x1c0] = 0x45;
  (&DAT_200049c8)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049c7)[param_1 * 0x1c0] = 0x30;
  (&DAT_200049c9)[param_1 * 0x1c0] = 0x32;
  FUN_0801daca(param_4,&local_1c);
  (&DAT_200049ca)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049cb)[param_1 * 0x1c0] = local_1c._1_1_;
  for (uVar1 = 1; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (byte)(&DAT_200049bd)[uVar1 + param_1 * 0x1c0] + uVar2;
  }
  FUN_0801daca((int)(uint)(ushort)(~uVar2 + 1) >> 8,&local_1c);
  (&DAT_200049cc)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049cd)[param_1 * 0x1c0] = local_1c._1_1_;
  FUN_0801daca(~uVar2 + 1 & 0xff,&local_1c);
  (&DAT_200049ce)[param_1 * 0x1c0] = (undefined1)local_1c;
  (&DAT_200049cf)[param_1 * 0x1c0] = local_1c._1_1_;
  (&DAT_200049d0)[param_1 * 0x1c0] = 0xd;
  return 0x14;
}



/* ENTRY 0x0801dd4a : FUN_0801dd4a */

uint FUN_0801dd4a(uint param_1)

{
  return param_1 & 0xfff |
         (~((param_1 & 0xf) + ((param_1 & 0xff) >> 4) + ((param_1 & 0xfff) >> 8)) + 1 & 0xf) << 0xc;
}



/* ENTRY 0x0801dd7e : FUN_0801dd7e */

undefined4
FUN_0801dd7e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  
  uVar3 = 0;
  local_24 = param_4;
  uVar1 = FUN_0801dd4a(4);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049bd)[uVar2 + param_1 * 0x1c0] = (&DAT_08027d48)[uVar2];
  }
  FUN_0801daca(param_2,&DAT_200049c0 + param_1 * 0x1c0);
  FUN_0801daca(param_3,&DAT_200049c4 + param_1 * 0x1c0);
  FUN_0801daca((int)uVar1 >> 8,&local_24);
  (&DAT_200049c6)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049c7)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801daca(uVar1 & 0xff,&local_24);
  (&DAT_200049c8)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049c9)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801daca(param_4,&local_24);
  (&DAT_200049ca)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049cb)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801daca(param_5,&local_24);
  (&DAT_200049cc)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049cd)[param_1 * 0x1c0] = local_24._1_1_;
  for (uVar1 = 1; uVar1 < 0x11; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049bd)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  FUN_0801daca((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_24);
  (&DAT_200049ce)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049cf)[param_1 * 0x1c0] = local_24._1_1_;
  FUN_0801daca(~uVar3 + 1 & 0xff,&local_24);
  (&DAT_200049d0)[param_1 * 0x1c0] = (undefined1)local_24;
  (&DAT_200049d1)[param_1 * 0x1c0] = local_24._1_1_;
  (&DAT_200049d2)[param_1 * 0x1c0] = 0xd;
  return 0x16;
}



/* ENTRY 0x0801df26 : FUN_0801df26 */

int FUN_0801df26(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 local_28;
  
  uVar3 = 0;
  iVar4 = (param_4 & 0x3f) * 2;
  local_28 = param_4;
  uVar1 = FUN_0801dd4a((param_4 & 0x7fff) << 1);
  for (uVar2 = 0; uVar2 < 7; uVar2 = uVar2 + 1 & 0xff) {
    (&DAT_200049bd)[uVar2 + param_1 * 0x1c0] = (&DAT_08027d48)[uVar2];
  }
  FUN_0801daca(param_2,&DAT_200049c0 + param_1 * 0x1c0);
  FUN_0801daca(param_3,&DAT_200049c4 + param_1 * 0x1c0);
  FUN_0801daca((int)uVar1 >> 8,&local_28);
  (&DAT_200049c6)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049c7)[param_1 * 0x1c0] = local_28._1_1_;
  FUN_0801daca(uVar1 & 0xff,&local_28);
  (&DAT_200049c8)[param_1 * 0x1c0] = (byte)local_28;
  (&DAT_200049c9)[param_1 * 0x1c0] = local_28._1_1_;
  for (uVar1 = 1; uVar1 < 0xd; uVar1 = uVar1 + 1 & 0xff) {
    uVar3 = (byte)(&DAT_200049bd)[uVar1 + param_1 * 0x1c0] + uVar3;
  }
  for (uVar1 = 0; uVar1 < (uint)(iVar4 >> 1); uVar1 = uVar1 + 1 & 0xff) {
    FUN_0801daca(*(undefined1 *)(param_5 + uVar1),&local_28);
    (&DAT_200049ca)[param_1 * 0x1c0 + uVar1 * 2] = (byte)local_28;
    (&DAT_200049cb)[param_1 * 0x1c0 + uVar1 * 2] = local_28._1_1_;
    uVar3 = (ushort)local_28._1_1_ + (byte)local_28 + uVar3;
  }
  FUN_0801daca((int)(uint)(ushort)(~uVar3 + 1) >> 8,&local_28);
  (&DAT_200049ca)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049cb)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  FUN_0801daca(~uVar3 + 1 & 0xff,&local_28);
  (&DAT_200049cc)[param_1 * 0x1c0 + iVar4] = (byte)local_28;
  (&DAT_200049cd)[param_1 * 0x1c0 + iVar4] = local_28._1_1_;
  (&DAT_200049ce)[param_1 * 0x1c0 + iVar4] = 0xd;
  return iVar4 + 0x12;
}



/* ENTRY 0x0801e0f0 : FUN_0801e0f0 */

uint FUN_0801e0f0(int param_1,int param_2)

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



/* ENTRY 0x0801e162 : FUN_0801e162 */

undefined2
FUN_0801e162(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0801e0f0(*param_1,param_1[1],param_3,param_4,param_4);
  uVar2 = FUN_0801e0f0(param_1[2],param_1[3]);
  return CONCAT11(uVar1,uVar2);
}



/* ENTRY 0x0801e18e : FUN_0801e18e */

undefined4 FUN_0801e18e(ushort *param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*param_2 == '~') {
    uVar2 = FUN_0801e162(param_2 + 9);
    if ((~(((int)uVar2 >> 8 & 0xfU) + ((int)(uVar2 & 0xff) >> 4) + (uVar2 & 0xf)) + 1 & 0xf) ==
        (int)uVar2 >> 0xc) {
      uVar4 = uVar2 & 0xfff;
      if (uVar4 + 0x12 < 0xfb) {
        for (uVar3 = 0; uVar3 < uVar4 + 0xc; uVar3 = uVar3 + 1 & 0xff) {
          uVar5 = (byte)param_2[uVar3 + 1] + uVar5 & 0xffff;
        }
        uVar4 = FUN_0801e162(param_2 + uVar4 + 0xd);
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



/* ENTRY 0x0801e23e : FUN_0801e23e */

undefined4 FUN_0801e23e(char *param_1)

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



/* ENTRY 0x0801e284 : FUN_0801e284 */

void FUN_0801e284(undefined4 param_1)

{
  FUN_0801dc06(param_1,0,0xff,0x50);
  return;
}



/* ENTRY 0x0801e296 : FUN_0801e296 */

undefined4 FUN_0801e296(int param_1)

{
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 0xb0;
  (&DAT_200049c0)[param_1 * 0x1c0] = 0;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0x4f;
  return 5;
}



/* ENTRY 0x0801e2da : FUN_0801e2da */

undefined4 FUN_0801e2da(int param_1)

{
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 0xbb;
  (&DAT_200049c0)[param_1 * 0x1c0] = 0;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0x44;
  return 5;
}



/* ENTRY 0x0801e31e : FUN_0801e31e */

undefined4 FUN_0801e31e(int param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_200049af)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b3)[param_1 * 0x1c0] == '\0')) {
    (&DAT_200049af)[param_1 * 0x1c0] = 100;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ENTRY 0x0801e354 : FUN_0801e354 */

void FUN_0801e354(void)

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
  if ((DAT_200049b3 == '\0') && (DAT_200049af == '\0')) {
    DAT_2000311f = DAT_2000311f & 0xef;
  }
  else {
    DAT_2000311f = DAT_2000311f | 0x10;
  }
  if ((DAT_20004b73 == '\0') && (DAT_20004b6f == '\0')) {
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
  if ((DAT_200049ae < 0x15) && (DAT_20004b6e < 0x15)) {
    DAT_200030ce = DAT_200030ce & 0xfbff;
    DAT_2000311f = DAT_2000311f & 0x7f;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x400;
    DAT_2000311f = DAT_2000311f | 0x80;
  }
  DAT_20003121 = 0x32 < DAT_200049b4;
  if (0x32 < DAT_20004b74) {
    DAT_20003121 = DAT_20003121 | 2;
  }
  if (((((DAT_20004b3f == 0) && ((DAT_20004b40 & 0x7f) == 0 || (int)(DAT_20004b40 & 0x7f) < 0)) &&
       (DAT_20004b43 == 0)) &&
      ((DAT_20004cff == 0 && ((DAT_20004d00 & 0x7f) == 0 || (int)(DAT_20004d00 & 0x7f) < 0)))) &&
     (DAT_20004d03 == 0)) {
    DAT_20003122 = '\0';
    DAT_2000311f = DAT_2000311f & 0xfe;
  }
  else {
    DAT_20003122 = '\x01';
    DAT_2000311f = DAT_2000311f | 1;
  }
  if ((((DAT_20004b4c & 0x3f) == 0 || (int)(DAT_20004b4c & 0x3f) < 0) && (DAT_20004b4d == 0)) &&
     (((DAT_20004d0c & 0x3f) == 0 || (int)(DAT_20004d0c & 0x3f) < 0 &&
      ((DAT_20004d0d == 0 && (DAT_20003122 == '\0')))))) {
    DAT_200030ce = DAT_200030ce & 0xfdff;
  }
  else {
    DAT_200030ce = DAT_200030ce | 0x200;
  }
  if (((((DAT_20004b40 & 1) == 0) && ((DAT_20004d00 & 1) == 0)) && ((DAT_20004b43 & 1) == 0)) &&
     ((DAT_20004d03 & 1) == 0)) {
    if ((DAT_20003123 != 0) && (DAT_20003123 < 10)) {
      DAT_20003123 = DAT_20003123 - 1;
    }
  }
  else if (DAT_20003123 < 0x14) {
    DAT_20003123 = DAT_20003123 + 1;
  }
  if (((DAT_20004b3f & 1) == 0) && ((DAT_20004cff & 1) == 0)) {
    if ((DAT_20003124 != 0) && (DAT_20003124 < 10)) {
      DAT_20003124 = DAT_20003124 - 1;
    }
  }
  else if (DAT_20003124 < 0x14) {
    DAT_20003124 = DAT_20003124 + 1;
  }
  DAT_20003130 = DAT_20003130 | DAT_20004b3f;
  DAT_20003131 = DAT_20003131 | DAT_20004b40;
  DAT_20003134 = DAT_20004b43 | DAT_20003134;
  DAT_20003135 = DAT_20003135 | DAT_20004cff;
  DAT_20003136 = DAT_20003136 | DAT_20004d00;
  DAT_20003139 = DAT_20003139 | DAT_20004d03;
  DAT_2000313a = DAT_2000313a | DAT_20004b4c & 0x3f;
  DAT_2000313b = DAT_2000313b | DAT_20004b4d;
  DAT_2000313c = DAT_2000313c | DAT_20004d0c & 0x3f;
  DAT_2000313d = DAT_2000313d | DAT_20004d0d;
  if (DAT_200009b0 != 0) {
    if (2 < DAT_200009b0) {
      return;
    }
    uVar10 = FUN_0801dc06(uVar7,0,0x9c,1);
    if (uVar8 == 0) {
      DAT_20004b68 = DAT_20004b68 + 1;
      FUN_08013d34(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d28 = DAT_20004d28 + 1;
      FUN_0801408c(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
    }
    DAT_200009b0 = DAT_200009b0 + 1;
    return;
  }
  if ((&DAT_200049af)[uVar7 * 0x1c0] == '\0') {
    if ((&DAT_200049b3)[uVar7 * 0x1c0] != '\0') {
      iVar6 = FUN_08020816(uVar7);
      if (iVar6 == 0) {
        (&DAT_200049b3)[uVar7 * 0x1c0] = (&DAT_200049b3)[uVar7 * 0x1c0] + -1;
      }
      if ((DAT_200009b4 & 3) != 2) {
        DAT_200009b4 = DAT_200009b4 + 1;
        return;
      }
      uVar8 = (uint)(DAT_200049b8 * 100) / ((uint)DAT_200009b8 * 0xc) & 0xff;
      uVar9 = (uint)(DAT_20004b78 * 100) / ((uint)DAT_200009b8 * 0xc) & 0xff;
      DAT_200009b4 = DAT_200009b4 + 1;
      FUN_08020b76(uVar8,uVar9);
      DAT_20003120 = (char)((int)(uVar8 + uVar9) >> 2) + '2';
      return;
    }
  }
  else {
    if (((&DAT_200049b0)[uVar7 * 0x1c0] != -0x50) || ((&DAT_200049b1)[uVar7 * 0x1c0] != -0x50)) {
      if ((uint)(byte)(&DAT_200049af)[uVar7 * 0x1c0] +
          ((int)(uint)(byte)(&DAT_200049af)[uVar7 * 0x1c0] >> 2) * -4 == 0) {
        uVar10 = FUN_0801e284(uVar7);
      }
      else {
        (&DAT_200049b0)[uVar7 * 0x1c0] = 0xb0;
        (&DAT_200049b1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801e296(uVar7);
      }
      if (uVar9 == 0) {
        DAT_20004b68 = DAT_20004b68 + 1;
        FUN_08013d34(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
      }
      else {
        DAT_20004d28 = DAT_20004d28 + 1;
        FUN_0801408c(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
      }
      (&DAT_200049af)[uVar7 * 0x1c0] = (&DAT_200049af)[uVar7 * 0x1c0] + -1;
      return;
    }
    (&DAT_200049af)[uVar7 * 0x1c0] = 0;
    (&DAT_200049b3)[uVar7 * 0x1c0] = 0x32;
    (&DAT_200049b8)[uVar7 * 0x70] = 0;
    (&DAT_200049b5)[uVar7 * 0x1c0] = 0;
  }
  if ((&DAT_200049ad)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049ae)[uVar7 * 0x1c0] = 0;
    (&DAT_200049b4)[uVar7 * 0x1c0] = 0;
  }
  else {
    if ((&DAT_200049ae)[uVar7 * 0x1c0] < 4) {
      (&DAT_200049ae)[uVar7 * 0x1c0] = (&DAT_200049ae)[uVar7 * 0x1c0] + '\x01';
      return;
    }
    if ((&DAT_200049ae)[uVar7 * 0x1c0] < 200) {
      (&DAT_200049ae)[uVar7 * 0x1c0] = (&DAT_200049ae)[uVar7 * 0x1c0] + '\x01';
    }
    if ((DAT_200009a8 & 7) >> 1 != 0) {
      return;
    }
    if (0x3b < (&DAT_200049ae)[uVar7 * 0x1c0]) {
      if ((DAT_200009a8 & 0x3f) >> 1 == 0) {
        if ((&DAT_200049b4)[uVar7 * 0x1c0] != '\0') {
          (&DAT_200049b4)[uVar7 * 0x1c0] = (&DAT_200049b4)[uVar7 * 0x1c0] + -1;
        }
        (&DAT_200049b0)[uVar7 * 0x1c0] = 0xbb;
        (&DAT_200049b1)[uVar7 * 0x1c0] = 0;
        uVar10 = FUN_0801e2da(uVar7);
        if (uVar3 == 0) {
          DAT_20004b68 = DAT_20004b68 + 1;
          FUN_08013d34(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
          return;
        }
        DAT_20004d28 = DAT_20004d28 + 1;
        FUN_0801408c(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
        return;
      }
      if (((&DAT_200049b0)[uVar7 * 0x1c0] == -0x45) && ((&DAT_200049b1)[uVar7 * 0x1c0] == -0x45)) {
        (&DAT_200049b4)[uVar7 * 0x1c0] = 200;
      }
    }
  }
  if ((&DAT_20004b4e)[uVar7 * 0x1c0] == '\0') {
    (&DAT_200049bc)[uVar7 * 0x1c0] = (&DAT_200049bc)[uVar7 * 0x1c0] + '\x01';
    (&DAT_200049bc)[uVar7 * 0x1c0] = (&DAT_200049bc)[uVar7 * 0x1c0] & 3;
    cVar1 = (&DAT_200049bc)[uVar7 * 0x1c0];
    if (cVar1 == '\0') {
      (&DAT_200049ad)[uVar7 * 0x1c0] = 0xc1;
      uVar10 = FUN_0801db0c(uVar7,0xc1,&DAT_200049ac,in_r3,in_r3);
    }
    else if (cVar1 == '\x01') {
      (&DAT_200049ad)[uVar7 * 0x1c0] = 0xc2;
      uVar10 = FUN_0801db0c(uVar7,0xc2,&DAT_200049ac,in_r3,in_r3);
    }
    else if (cVar1 == '\x02') {
      (&DAT_200049ad)[uVar7 * 0x1c0] = 0x42;
      uVar10 = FUN_0801dc06(uVar7,1,0x42);
    }
    else if (cVar1 == '\x03') {
      uVar10 = 0;
      (&DAT_200049ad)[uVar7 * 0x1c0] = 0x44;
      if ((DAT_2000314d == '\x01') || (iVar6 = FUN_0800fb36(), iVar6 == 1)) {
        uVar10 = 1;
      }
      uVar10 = FUN_0801dd7e(uVar7,1,0x44,1,uVar10);
    }
    if (uVar5 == 0) {
      DAT_20004b68 = DAT_20004b68 + 1;
      FUN_08013d34(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
    }
    else {
      DAT_20004d28 = DAT_20004d28 + 1;
      FUN_0801408c(&DAT_200049bd + uVar7 * 0x1c0,uVar10);
    }
  }
  else {
    uVar2 = (&DAT_20004b4e)[uVar7 * 0x1c0];
    (&DAT_20004b4e)[uVar7 * 0x1c0] = 0;
    iVar6 = FUN_0801df26(uVar7,0,uVar2,(&DAT_20004aad)[uVar7 * 0x1c0],&DAT_20004a95 + uVar7 * 0x1c0)
    ;
    if (iVar6 != 0) {
      (&DAT_200049ad)[uVar7 * 0x1c0] = uVar2;
      if (uVar4 == 0) {
        DAT_20004b68 = DAT_20004b68 + 1;
        FUN_08013d34(&DAT_200049bd + uVar7 * 0x1c0,iVar6);
      }
      else {
        DAT_20004d28 = DAT_20004d28 + 1;
        FUN_0801408c(&DAT_200049bd + uVar7 * 0x1c0,iVar6);
      }
    }
  }
  return;
}



/* ENTRY 0x0801ec3a : FUN_0801ec3a */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801ec3a(int param_1,undefined4 param_2)

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
  iVar3 = FUN_0801e18e(local_20,param_1);
  if (iVar3 == 0) {
    DAT_200049ad = 1;
    iVar3 = FUN_0801e23e(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_200049b1 = *(undefined1 *)(local_c + 2);
        DAT_200049b2 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08020a1e(0,local_30,local_2c);
      }
      else {
        DAT_200049b1 = *(undefined1 *)(local_c + 2);
        DAT_200049b2 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004b6a = DAT_20004b6a + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801e0f0(local_30,local_2c);
  uVar4 = (uint)DAT_200049ad;
  if (uVar4 == 0xbf) {
LAB_0801f480:
    if (((local_10 == 0x25) && (local_14 == 0xf)) &&
       ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
      local_2c = (uint)DAT_200049ad;
      FUN_08022f5a(0,local_2c,1);
      DAT_200049ad = 0;
      return local_2c;
    }
    local_2c = (uint)DAT_200049ad;
    FUN_08022f5a(0,local_2c);
    DAT_200049ad = 0;
    return local_2c;
  }
  if (0xbf < uVar4) {
    uVar4 = uVar4 - 0xc1;
    bVar7 = true;
    switch(uVar4) {
    case 0:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e0f0(local_34,local_30);
        (&DAT_20004a7d)[local_2c] = uVar1;
      }
      break;
    case 1:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e0f0(local_34,local_30);
        (&DAT_20004b4f)[local_2c] = uVar1;
      }
      break;
    case 2:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049ad;
        FUN_080211a8(0,local_2c,1);
      }
      else {
        local_2c = (uint)DAT_200049ad;
        FUN_080211a8(0,local_2c);
      }
      break;
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
    case 0xe:
      goto LAB_0801ecac;
    case 0xf:
switchD_0801ed88_caseD_f:
      local_28 = local_28 + 1 & 0xffff;
switchD_0801ed62_caseD_4:
      local_28 = ((local_28 + 1 & 0xffff) + 1 & 0xffff) + 1 & 0xffff;
LAB_0801f2a6:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) && (local_1c == 0)) {
        local_2c = local_28 & 0xff;
        FUN_08022ad2(0,local_2c,1);
        DAT_200049ad = 0;
        return local_2c;
      }
      local_2c = local_28 & 0xff;
      FUN_08022ad2(0,local_2c);
      DAT_200049ad = 0;
      return local_2c;
    case 0x10:
      goto switchD_0801ed88_caseD_10;
    case 0x11:
      goto switchD_0801ed88_caseD_11;
    case 0x12:
      goto switchD_0801ed88_caseD_12;
    case 0x13:
      goto switchD_0801ed88_caseD_13;
    case 0x14:
      goto switchD_0801ed88_caseD_14;
    case 0x15:
      goto switchD_0801ed88_caseD_15;
    case 0x16:
      goto switchD_0801ed88_caseD_16;
    case 0x17:
      goto switchD_0801ed88_caseD_17;
    case 0x18:
      goto switchD_0801ed88_caseD_18;
    case 0x19:
      goto switchD_0801ed88_caseD_19;
    case 0x1a:
      goto switchD_0801ed88_caseD_1a;
    case 0x1b:
      goto switchD_0801ed88_caseD_1b;
    case 0x1c:
      goto switchD_0801ed88_caseD_1c;
    case 0x1d:
      goto switchD_0801ed88_caseD_1d;
    case 0x1e:
      goto switchD_0801ed88_caseD_1e;
    case 0x1f:
      goto switchD_0801ed88_caseD_1f;
    case 0x20:
      goto switchD_0801ed88_caseD_20;
    case 0x21:
      goto switchD_0801ed88_caseD_21;
    case 0x22:
      goto switchD_0801ed88_caseD_22;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
    case 0x23:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801ed88_caseD_21;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
    case 0x24:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801ed88_caseD_22;
    default:
      goto switchD_0801ed62_default;
    }
    DAT_200049ad = 0;
    return local_2c;
  }
  if (uVar4 != 0xaf) {
    if (uVar4 < 0xb0) {
      if (uVar4 == 0xa7) goto code_r0x0801f5aa;
      if (uVar4 < 0xa8) {
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 0x24; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e0f0(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_00;
            }
            FUN_08022fbc(0,DAT_200049ad,auStack_4c);
            DAT_200049ad = 0;
            return local_2c;
          }
          FUN_08022f5a(0,DAT_200049ad);
          DAT_200049ad = 0;
          return local_2c;
        }
        if (uVar4 < 0xa2) {
          if (uVar4 == 0x42) {
            if (local_20[0] == 0xba) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004aaf = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_c + local_3c * 4 + 0x13;
                uVar2 = FUN_0801e162();
                (&DAT_20004ab0)[local_3c] = uVar2;
              }
              local_3c = (uint)*(byte *)(local_c + 0x8c);
              local_40 = (uint)*(byte *)(local_c + 0x8b);
              local_38 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004af0 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_3c * 4 + 0x8d + local_c;
                uVar2 = FUN_0801e162();
                (&DAT_20004af2)[local_3c] = uVar2;
              }
              DAT_20004b06 = FUN_0801e162(local_c + 0xad);
              DAT_20004b08 = FUN_0801e162(local_c + 0xb1);
              DAT_20004b0a = FUN_0801e162(local_c + 0xb5);
              local_3c = (uint)*(byte *)(local_c + 0xba);
              local_40 = (uint)*(byte *)(local_c + 0xb9);
              DAT_20004b0c = FUN_0801e0f0(local_40,local_3c);
              DAT_20004b0e = FUN_0801e162(local_c + 0xbb);
              DAT_20004b10 = FUN_0801e162(local_c + 0xbf);
              DAT_20004b12 = FUN_0801e162(local_c + 0xc3);
              DAT_200049ad = 0;
              return local_2c;
            }
            return 0;
          }
          if (uVar4 == 0x44) {
            if (local_20[0] == 0x76) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004b14 = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004b16)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x50);
              local_40 = (uint)*(byte *)(local_c + 0x4f);
              local_38 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004b15 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004b34)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x62);
              local_40 = (uint)*(byte *)(local_c + 0x61);
              DAT_20004b3c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 100);
              local_40 = (uint)*(byte *)(local_c + 99);
              DAT_20004b3d = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x66);
              local_40 = (uint)*(byte *)(local_c + 0x65);
              DAT_20004b3e = FUN_0801e0f0(local_40,local_3c);
              for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004b3f)[local_3c] = uVar1;
              }
              DAT_20004b46 = FUN_0801e162(local_c + 0x71);
              local_3c = (uint)*(byte *)(local_c + 0x76);
              local_40 = (uint)*(byte *)(local_c + 0x75);
              DAT_20004b4c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x78);
              local_40 = (uint)*(byte *)(local_c + 0x77);
              DAT_20004b4d = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7a);
              local_40 = (uint)*(byte *)(local_c + 0x79);
              DAT_20004b44 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7c);
              local_40 = (uint)*(byte *)(local_c + 0x7b);
              DAT_20004b4a = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7e);
              local_40 = (uint)*(byte *)(local_c + 0x7d);
              DAT_20004b4b = FUN_0801e0f0(local_40,local_3c);
              DAT_20004b48 = FUN_0801e162(local_c + 0x7f);
              DAT_200049ad = 0;
              return local_2c;
            }
            return 0;
          }
          bVar7 = uVar4 == 0xa0;
        }
        else {
          if (uVar4 == 0xa4) goto LAB_0801f2a6;
          bVar7 = false;
          if (uVar4 == 0xa6) {
            if (local_10 != 0x25) {
              DAT_200049ad = 0;
              return local_2c;
            }
            if (local_14 != 0xf) {
              DAT_200049ad = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_200049ad = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_200049ad = 0;
              return local_2c;
            }
            if (local_20[0] != 0xc) {
              DAT_200049ad = 0;
              return local_2c;
            }
            local_1c = 0;
            puVar5 = extraout_r2;
            uVar6 = extraout_r3;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e0f0(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,
                                   uVar1);
              puVar5 = auStack_4c;
              puVar5[local_50] = uVar1;
              uVar6 = extraout_r3_03;
            }
            FUN_08020fac(0,DAT_200049ad,auStack_4c);
            DAT_200049ad = 0;
            return local_2c;
          }
        }
        if (!bVar7) {
          DAT_200049ad = 0;
          return local_2c;
        }
        goto LAB_0801f376;
      }
      uVar4 = uVar4 - 0xa8;
      bVar7 = 6 < uVar4;
switchD_0801ed62_default:
      if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x0801ed4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801ed4e + (uint)*(ushort *)(&DAT_0801ed4e + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801ecac:
      DAT_200049ad = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xb1;
    bVar7 = true;
    switch(uVar4) {
    case 0:
    case 9:
    case 0xb:
    case 0xd:
      if (local_10 != 0x25) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_20[0] != 0xc) {
        DAT_200049ad = 0;
        return local_2c;
      }
      local_1c = 0;
      puVar5 = extraout_r2;
      uVar6 = extraout_r3;
      for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
        uVar1 = *(undefined1 *)(local_c + local_50 * 2 + 0xd);
        uVar1 = FUN_0801e0f0(uVar1,*(undefined1 *)(local_c + local_50 * 2 + 0xe),puVar5,uVar6,uVar1)
        ;
        puVar5 = auStack_4c;
        puVar5[local_50] = uVar1;
        uVar6 = extraout_r3_01;
      }
      FUN_08022fbc(0,DAT_200049ad,auStack_4c);
      DAT_200049ad = 0;
      return local_2c;
    case 1:
    case 2:
    case 6:
    case 8:
    case 10:
      goto LAB_0801f480;
    case 3:
      goto LAB_0801ecac;
    case 4:
      goto switchD_0801ed62_caseD_4;
    case 5:
      goto switchD_0801ed62_caseD_5;
    case 7:
      if (local_10 != 0x25) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_200049ad = 0;
        return local_2c;
      }
      if (local_20[0] != 2) {
        DAT_200049ad = 0;
        return local_2c;
      }
      local_1c = 0;
      bVar7 = false;
      puVar5 = extraout_r2;
      uVar6 = extraout_r3;
      while (!bVar7) {
        auStack_4c[0] =
             FUN_0801e0f0(*(undefined1 *)(local_c + 0xd),*(undefined1 *)(local_c + 0xe),puVar5,uVar6
                          ,*(undefined1 *)(local_c + 0xd));
        puVar5 = auStack_4c;
        uVar6 = extraout_r3_02;
        bVar7 = true;
      }
      FUN_08022fbc(0,DAT_200049ad,auStack_4c);
      DAT_200049ad = 0;
      return local_2c;
    case 0xc:
code_r0x0801f5aa:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_200049ad;
        FUN_08021018(0,local_2c,1);
        DAT_200049ad = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_200049ad;
      FUN_08021018(0,local_2c);
      DAT_200049ad = 0;
      return local_2c;
    default:
      goto switchD_0801ed62_default;
    }
  }
  goto LAB_0801f36c;
switchD_0801ed88_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_20;
switchD_0801ed88_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1f;
switchD_0801ed88_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1e;
switchD_0801ed88_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1d;
switchD_0801ed88_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1c;
switchD_0801ed88_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1b;
switchD_0801ed88_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_1a;
switchD_0801ed88_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_19;
switchD_0801ed88_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_18;
switchD_0801ed88_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_17;
switchD_0801ed88_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_16;
switchD_0801ed88_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_15;
switchD_0801ed88_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_14;
switchD_0801ed88_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_13;
switchD_0801ed88_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_12;
switchD_0801ed88_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_11;
switchD_0801ed88_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_10;
switchD_0801ed88_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801ed88_caseD_f;
switchD_0801ed88_caseD_10:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801ed62_caseD_5:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f36c:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801f376:
  local_2c = (uint)(byte)(&DAT_20006091)[local_28 * 0x11];
  if (local_10 != 0x25) {
    DAT_200049ad = 0;
    return local_2c;
  }
  if (local_14 != 0xf) {
    DAT_200049ad = 0;
    return local_2c;
  }
  if (local_18 != 0x46) {
    DAT_200049ad = 0;
    return local_2c;
  }
  if (local_1c != 0) {
    DAT_200049ad = 0;
    return local_2c;
  }
  if ((uint)local_20[0] != local_2c * 2) {
    DAT_200049ad = 0;
    return local_2c;
  }
  local_1c = 0;
  for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
    local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
    local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
    uVar1 = FUN_0801e0f0(local_48,local_44);
    *(undefined1 *)((int)&local_3c + local_40) = uVar1;
  }
  local_40 = local_28 & 0xff;
  FUN_08022b6c(0,local_40,&local_3c);
  DAT_200049ad = 0;
  return local_2c;
}



/* ENTRY 0x0801f6a6 : FUN_0801f6a6 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0801f6a6(int param_1,undefined4 param_2)

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
  iVar3 = FUN_0801e18e(local_20,param_1);
  if (iVar3 == 0) {
    DAT_20004b6d = 1;
    iVar3 = FUN_0801e23e(local_c);
    if (iVar3 == 1) {
      if (((*(char *)(local_c + 3) == '\x01') && (0x3c < *(byte *)(local_c + 2))) &&
         (*(byte *)(local_c + 2) < 0x41)) {
        DAT_20004b71 = *(undefined1 *)(local_c + 2);
        DAT_20004b72 = *(undefined1 *)(local_c + 4);
        local_2c = (uint)*(byte *)(local_c + 4);
        local_30 = (uint)*(byte *)(local_c + 2);
        FUN_08020a1e(1,local_30,local_2c);
      }
      else {
        DAT_20004b71 = *(undefined1 *)(local_c + 2);
        DAT_20004b72 = *(undefined1 *)(local_c + 4);
      }
    }
    return 0;
  }
  DAT_20004d2a = DAT_20004d2a + 1;
  local_2c = (uint)*(byte *)(local_c + 2);
  local_30 = (uint)*(byte *)(local_c + 1);
  local_10 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 4);
  local_30 = (uint)*(byte *)(local_c + 3);
  local_14 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 6);
  local_30 = (uint)*(byte *)(local_c + 5);
  local_18 = FUN_0801e0f0(local_30,local_2c);
  local_2c = (uint)*(byte *)(local_c + 8);
  local_30 = (uint)*(byte *)(local_c + 7);
  local_1c = FUN_0801e0f0(local_30,local_2c);
  uVar4 = (uint)DAT_20004b6d;
  if (uVar4 == 0xbf) {
LAB_0801ff1c:
    if (((local_10 == 0x25) && (local_14 == 0xf)) &&
       ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
      local_2c = (uint)DAT_20004b6d;
      FUN_08022f5a(1,local_2c);
      DAT_20004b6d = 0;
      return local_2c;
    }
    local_2c = (uint)DAT_20004b6d;
    FUN_08022f5a(1,local_2c,0);
    DAT_20004b6d = 0;
    return local_2c;
  }
  if (0xbf < uVar4) {
    uVar4 = uVar4 - 0xc1;
    bVar5 = true;
    switch(uVar4) {
    case 0:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e0f0(local_34,local_30);
        (&DAT_20004c3d)[local_2c] = uVar1;
      }
      break;
    case 1:
      if (local_20[0] != 0x28) {
        return 0;
      }
      for (local_2c = 0; local_2c < 0x14; local_2c = local_2c + 1 & 0xff) {
        local_30 = (uint)*(byte *)(local_c + local_2c * 2 + 0xe);
        local_34 = (uint)*(byte *)(local_c + local_2c * 2 + 0xd);
        uVar1 = FUN_0801e0f0(local_34,local_30);
        (&DAT_20004d0f)[local_2c] = uVar1;
      }
      break;
    case 2:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b6d;
        FUN_080211a8(1,local_2c);
      }
      else {
        local_2c = (uint)DAT_20004b6d;
        FUN_080211a8(1,local_2c,0);
      }
      break;
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
    case 0xe:
      goto LAB_0801f726;
    case 0xf:
switchD_0801f810_caseD_f:
      local_28 = local_28 + 1 & 0xffff;
switchD_0801f7ea_caseD_4:
      local_28 = ((local_28 + 1 & 0xffff) + 1 & 0xffff) + 1 & 0xffff;
LAB_0801fd4a:
      if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) && (local_1c == 0)) {
        local_2c = local_28 & 0xff;
        FUN_08022ad2(1,local_2c);
        DAT_20004b6d = 0;
        return local_2c;
      }
      local_2c = local_28 & 0xff;
      FUN_08022ad2(1,local_2c,0);
      DAT_20004b6d = 0;
      return local_2c;
    case 0x10:
      goto switchD_0801f810_caseD_10;
    case 0x11:
      goto switchD_0801f810_caseD_11;
    case 0x12:
      goto switchD_0801f810_caseD_12;
    case 0x13:
      goto switchD_0801f810_caseD_13;
    case 0x14:
      goto switchD_0801f810_caseD_14;
    case 0x15:
      goto switchD_0801f810_caseD_15;
    case 0x16:
      goto switchD_0801f810_caseD_16;
    case 0x17:
      goto switchD_0801f810_caseD_17;
    case 0x18:
      goto switchD_0801f810_caseD_18;
    case 0x19:
      goto switchD_0801f810_caseD_19;
    case 0x1a:
      goto switchD_0801f810_caseD_1a;
    case 0x1b:
      goto switchD_0801f810_caseD_1b;
    case 0x1c:
      goto switchD_0801f810_caseD_1c;
    case 0x1d:
      goto switchD_0801f810_caseD_1d;
    case 0x1e:
      goto switchD_0801f810_caseD_1e;
    case 0x1f:
      goto switchD_0801f810_caseD_1f;
    case 0x20:
      goto switchD_0801f810_caseD_20;
    case 0x21:
      goto switchD_0801f810_caseD_21;
    case 0x22:
      goto switchD_0801f810_caseD_22;
    case 0x25:
      local_28 = local_28 + 1 & 0xffff;
    case 0x23:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f810_caseD_21;
    case 0x26:
      local_28 = local_28 + 1 & 0xffff;
    case 0x24:
      local_28 = local_28 + 1 & 0xffff;
      goto switchD_0801f810_caseD_22;
    default:
      goto switchD_0801f7ea_default;
    }
    DAT_20004b6d = 0;
    return local_2c;
  }
  if (uVar4 != 0xaf) {
    if (uVar4 < 0xb0) {
      if (uVar4 == 0xa7) goto code_r0x0802005a;
      if (uVar4 < 0xa8) {
        if (uVar4 == 0xa1) {
          if ((((local_10 == 0x25) && (local_14 == 0xf)) && (local_18 == 0x46)) &&
             ((local_1c == 0 && (local_20[0] == 0x60)))) {
            local_1c = 0;
            for (local_6c = 0; local_6c < 0x24; local_6c = local_6c + 1 & 0xff) {
              uVar1 = FUN_0801e0f0(*(undefined1 *)(local_c + local_6c * 2 + 0xd),
                                   *(undefined1 *)(local_c + local_6c * 2 + 0xe));
              auStack_68[local_6c] = uVar1;
            }
            FUN_08022fbc(1,DAT_20004b6d,auStack_68);
            DAT_20004b6d = 0;
            return local_2c;
          }
          FUN_08022f5a(1,DAT_20004b6d,0);
          DAT_20004b6d = 0;
          return local_2c;
        }
        if (uVar4 < 0xa2) {
          if (uVar4 == 0x42) {
            if (local_20[0] == 0xba) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004c6f = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_c + local_3c * 4 + 0x13;
                uVar2 = FUN_0801e162();
                (&DAT_20004c70)[local_3c] = uVar2;
              }
              local_3c = (uint)*(byte *)(local_c + 0x8c);
              local_40 = (uint)*(byte *)(local_c + 0x8b);
              local_38 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004cb0 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = local_3c * 4 + 0x8d + local_c;
                uVar2 = FUN_0801e162();
                (&DAT_20004cb2)[local_3c] = uVar2;
              }
              DAT_20004cc6 = FUN_0801e162(local_c + 0xad);
              DAT_20004cc8 = FUN_0801e162(local_c + 0xb1);
              DAT_20004cca = FUN_0801e162(local_c + 0xb5);
              local_3c = (uint)*(byte *)(local_c + 0xba);
              local_40 = (uint)*(byte *)(local_c + 0xb9);
              DAT_20004ccc = FUN_0801e0f0(local_40,local_3c);
              DAT_20004cce = FUN_0801e162(local_c + 0xbb);
              DAT_20004cd0 = FUN_0801e162(local_c + 0xbf);
              DAT_20004cd2 = FUN_0801e162(local_c + 0xc3);
              DAT_20004b6d = 0;
              return local_2c;
            }
            return 0;
          }
          if (uVar4 == 0x44) {
            if (local_20[0] == 0x76) {
              local_3c = (uint)*(byte *)(local_c + 0xe);
              local_40 = (uint)*(byte *)(local_c + 0xd);
              local_2c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x10);
              local_40 = (uint)*(byte *)(local_c + 0xf);
              local_30 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x12);
              local_40 = (uint)*(byte *)(local_c + 0x11);
              local_34 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004cd4 = (undefined1)local_34;
              for (local_3c = 0; local_3c < 0x1e; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x14);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x13);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004cd6)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x50);
              local_40 = (uint)*(byte *)(local_c + 0x4f);
              local_38 = FUN_0801e0f0(local_40,local_3c);
              DAT_20004cd5 = (undefined1)local_38;
              for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x52);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x51);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004cf4)[local_3c] = uVar1;
              }
              local_3c = (uint)*(byte *)(local_c + 0x62);
              local_40 = (uint)*(byte *)(local_c + 0x61);
              DAT_20004cfc = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 100);
              local_40 = (uint)*(byte *)(local_c + 99);
              DAT_20004cfd = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x66);
              local_40 = (uint)*(byte *)(local_c + 0x65);
              DAT_20004cfe = FUN_0801e0f0(local_40,local_3c);
              for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1 & 0xff) {
                local_40 = (uint)*(byte *)(local_c + local_3c * 2 + 0x68);
                local_44 = (uint)*(byte *)(local_c + local_3c * 2 + 0x67);
                uVar1 = FUN_0801e0f0(local_44,local_40);
                (&DAT_20004cff)[local_3c] = uVar1;
              }
              DAT_20004d06 = FUN_0801e162(local_c + 0x71);
              local_3c = (uint)*(byte *)(local_c + 0x76);
              local_40 = (uint)*(byte *)(local_c + 0x75);
              DAT_20004d0c = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x78);
              local_40 = (uint)*(byte *)(local_c + 0x77);
              DAT_20004d0d = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7a);
              local_40 = (uint)*(byte *)(local_c + 0x79);
              DAT_20004d04 = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7c);
              local_40 = (uint)*(byte *)(local_c + 0x7b);
              DAT_20004d0a = FUN_0801e0f0(local_40,local_3c);
              local_3c = (uint)*(byte *)(local_c + 0x7e);
              local_40 = (uint)*(byte *)(local_c + 0x7d);
              DAT_20004d0b = FUN_0801e0f0(local_40,local_3c);
              DAT_20004d08 = FUN_0801e162(local_c + 0x7f);
              DAT_20004b6d = 0;
              return local_2c;
            }
            return 0;
          }
          bVar5 = uVar4 == 0xa0;
        }
        else {
          if (uVar4 == 0xa4) goto LAB_0801fd4a;
          bVar5 = false;
          if (uVar4 == 0xa6) {
            if (local_10 != 0x25) {
              DAT_20004b6d = 0;
              return local_2c;
            }
            if (local_14 != 0xf) {
              DAT_20004b6d = 0;
              return local_2c;
            }
            if (local_18 != 0x46) {
              DAT_20004b6d = 0;
              return local_2c;
            }
            if (local_1c != 0) {
              DAT_20004b6d = 0;
              return local_2c;
            }
            if (local_20[0] != 0xc) {
              DAT_20004b6d = 0;
              return local_2c;
            }
            local_1c = 0;
            for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
              local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
              local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
              uVar1 = FUN_0801e0f0(local_58,local_54);
              auStack_4c[local_50] = uVar1;
            }
            local_50 = (uint)DAT_20004b6d;
            FUN_08020fac(1,local_50,auStack_4c);
            DAT_20004b6d = 0;
            return local_2c;
          }
        }
        if (!bVar5) {
          DAT_20004b6d = 0;
          return local_2c;
        }
        goto LAB_0801fe10;
      }
      uVar4 = uVar4 - 0xa8;
      bVar5 = 6 < uVar4;
switchD_0801f7ea_default:
      if (!bVar5) {
                    /* WARNING: Could not recover jumptable at 0x0801f7d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_0801f7d6 + (uint)*(ushort *)(&DAT_0801f7d6 + uVar4 * 2) * 2))();
        return uVar4;
      }
LAB_0801f726:
      DAT_20004b6d = 0;
      return local_2c;
    }
    uVar4 = uVar4 - 0xb1;
    bVar5 = true;
    switch(uVar4) {
    case 0:
    case 9:
    case 0xb:
    case 0xd:
      if (local_10 != 0x25) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_20[0] != 0xc) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      local_1c = 0;
      for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1 & 0xff) {
        local_54 = (uint)*(byte *)(local_c + local_50 * 2 + 0xe);
        local_58 = (uint)*(byte *)(local_c + local_50 * 2 + 0xd);
        uVar1 = FUN_0801e0f0(local_58,local_54);
        auStack_4c[local_50] = uVar1;
      }
      local_50 = (uint)DAT_20004b6d;
      FUN_08022fbc(1,local_50,auStack_4c);
      DAT_20004b6d = 0;
      return local_2c;
    case 1:
    case 2:
    case 6:
    case 8:
    case 10:
      goto LAB_0801ff1c;
    case 3:
      goto LAB_0801f726;
    case 4:
      goto switchD_0801f7ea_caseD_4;
    case 5:
      goto switchD_0801f7ea_caseD_5;
    case 7:
      if (local_10 != 0x25) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_14 != 0xf) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_18 != 0x46) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_1c != 0) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      if (local_20[0] != 2) {
        DAT_20004b6d = 0;
        return local_2c;
      }
      local_1c = 0;
      for (local_50 = 0; local_50 == 0; local_50 = local_50 + 1 & 0xff) {
        local_54 = (uint)*(byte *)(local_c + 0xe);
        local_58 = (uint)*(byte *)(local_c + 0xd);
        uVar1 = FUN_0801e0f0(local_58,local_54);
        auStack_4c[local_50] = uVar1;
      }
      local_50 = (uint)DAT_20004b6d;
      FUN_08022fbc(1,local_50,auStack_4c);
      DAT_20004b6d = 0;
      return local_2c;
    case 0xc:
code_r0x0802005a:
      if (((local_10 == 0x25) && (local_14 == 0xf)) &&
         ((local_18 == 0x46 && ((local_1c == 0 && (local_20[0] == 0)))))) {
        local_2c = (uint)DAT_20004b6d;
        FUN_08021018(1,local_2c);
        DAT_20004b6d = 0;
        return local_2c;
      }
      local_2c = (uint)DAT_20004b6d;
      FUN_08021018(1,local_2c,0);
      DAT_20004b6d = 0;
      return local_2c;
    default:
      goto switchD_0801f7ea_default;
    }
  }
  goto LAB_0801fe06;
switchD_0801f810_caseD_22:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_20;
switchD_0801f810_caseD_21:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1f;
switchD_0801f810_caseD_20:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1e;
switchD_0801f810_caseD_1f:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1d;
switchD_0801f810_caseD_1e:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1c;
switchD_0801f810_caseD_1d:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1b;
switchD_0801f810_caseD_1c:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_1a;
switchD_0801f810_caseD_1b:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_19;
switchD_0801f810_caseD_1a:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_18;
switchD_0801f810_caseD_19:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_17;
switchD_0801f810_caseD_18:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_16;
switchD_0801f810_caseD_17:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_15;
switchD_0801f810_caseD_16:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_14;
switchD_0801f810_caseD_15:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_13;
switchD_0801f810_caseD_14:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_12;
switchD_0801f810_caseD_13:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_11;
switchD_0801f810_caseD_12:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_10;
switchD_0801f810_caseD_11:
  local_28 = local_28 + 1 & 0xffff;
  goto switchD_0801f810_caseD_f;
switchD_0801f810_caseD_10:
  local_28 = local_28 + 1 & 0xffff;
switchD_0801f7ea_caseD_5:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801fe06:
  local_28 = local_28 + 1 & 0xffff;
LAB_0801fe10:
  local_2c = (uint)(byte)(&DAT_20006190)[local_28 * 0x11];
  if (local_10 != 0x25) {
    DAT_20004b6d = 0;
    return local_2c;
  }
  if (local_14 != 0xf) {
    DAT_20004b6d = 0;
    return local_2c;
  }
  if (local_18 != 0x46) {
    DAT_20004b6d = 0;
    return local_2c;
  }
  if (local_1c != 0) {
    DAT_20004b6d = 0;
    return local_2c;
  }
  if ((uint)local_20[0] != local_2c * 2) {
    DAT_20004b6d = 0;
    return local_2c;
  }
  local_1c = 0;
  for (local_40 = 0; (int)local_40 < (int)local_2c; local_40 = local_40 + 1 & 0xff) {
    local_44 = (uint)*(byte *)(local_c + local_40 * 2 + 0xe);
    local_48 = (uint)*(byte *)(local_c + local_40 * 2 + 0xd);
    uVar1 = FUN_0801e0f0(local_48,local_44);
    *(undefined1 *)((int)&local_3c + local_40) = uVar1;
  }
  local_40 = local_28 & 0xff;
  FUN_08022b6c(1,local_40,&local_3c);
  DAT_20004b6d = 0;
  return local_2c;
}



/* ENTRY 0x0802019a : FUN_0802019a */

bool FUN_0802019a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0801e0f0(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  uVar2 = FUN_0801e0f0(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  return (~((uVar1 & 0xf) + ((int)uVar2 >> 4) + (uVar2 & 0xf)) + 1 & 0xf) == (int)uVar1 >> 4;
}



/* ENTRY 0x080201e8 : FUN_080201e8 */

bool FUN_080201e8(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 0;
  uVar4 = FUN_0801e0f0(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  iVar5 = FUN_0801e0f0(*(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc));
  uVar4 = iVar5 + (uVar4 & 0xff) * 0x100 & 0xfff;
  for (uVar6 = 1; uVar6 <= uVar4 + 0xc; uVar6 = uVar6 + 1 & 0xffff) {
    uVar1 = *(byte *)(param_1 + uVar6) + uVar1;
  }
  sVar2 = FUN_0801e0f0(*(undefined1 *)(param_1 + uVar4 + 0xd),*(undefined1 *)(param_1 + uVar4 + 0xe)
                      );
  sVar3 = FUN_0801e0f0(*(undefined1 *)(param_1 + uVar4 + 0xf),
                       *(undefined1 *)(param_1 + uVar4 + 0x10));
  return (ushort)(~uVar1 + 1) == (ushort)(sVar3 + sVar2 * 0x100);
}



/* ENTRY 0x08020270 : FUN_08020270 */

void FUN_08020270(void)

{
  DAT_200049ad = 0;
  DAT_20004b6d = 0;
  FUN_08022a50();
  FUN_08013a48(0x2580);
  FUN_08013da8(0x2580);
  return;
}



/* ENTRY 0x08020296 : FUN_08020296 */

uint FUN_08020296(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_200049ae == '\0') && (DAT_20004b6e == '\0')) {
    uVar1 = ((uint)DAT_20004b0a * 100) / (uint)DAT_20004b0e;
    uVar2 = ((uint)DAT_20004cca * 100) / (uint)DAT_20004cce;
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



/* ENTRY 0x080202f0 : FUN_080202f0 */

uint FUN_080202f0(void)

{
  uint uVar1;
  
  if ((DAT_200049ae == '\0') && (DAT_20004b6e == '\0')) {
    uVar1 = ((((uint)DAT_20004b0a * 0x32) / (uint)DAT_20004b0e +
             ((uint)DAT_20004cca * 0x32) / (uint)DAT_20004cce) * 7) / 100;
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



/* ENTRY 0x08020350 : FUN_08020350 */

void FUN_08020350(int param_1)

{
  (&DAT_200049b0)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 0x61;
  (&DAT_200049c0)[param_1 * 0x1c0] = 0;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0x9e;
  if (param_1 == 0) {
    DAT_20004b68 = DAT_20004b68 + 1;
    FUN_08013d34(&DAT_200049bd,5);
  }
  else {
    DAT_20004d28 = DAT_20004d28 + 1;
    FUN_0801408c(&DAT_200049bd + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x080203f4 : FUN_080203f4 */

void FUN_080203f4(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)DAT_200009b8 * 3;
  bVar2 = 0;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049c0)[param_1 * 0x1c0] = 4;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0;
  (&DAT_200049c2)[param_1 * 0x1c0] = (char)(uVar1 >> 0xe);
  (&DAT_200049c3)[param_1 * 0x1c0] = (char)(uVar1 >> 6);
  (&DAT_200049c4)[param_1 * 0x1c0] = (char)uVar1 * '\x04';
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049bd)[uVar1 + param_1 * 0x1c0];
  }
  (&DAT_200049c5)[param_1 * 0x1c0] = bVar2;
  if (param_1 == 0) {
    DAT_20004b68 = DAT_20004b68 + 1;
    FUN_08013d34(&DAT_200049bd,9);
  }
  else {
    DAT_20004d28 = DAT_20004d28 + 1;
    FUN_0801408c(&DAT_200049bd + param_1 * 0x1c0,9);
  }
  return;
}



/* ENTRY 0x080204ee : FUN_080204ee */

void FUN_080204ee(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_200009bc;
  uVar2 = (uint)DAT_200009b8 * 3;
  bVar3 = 0;
  (&DAT_200049b0)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 0x62;
  (&DAT_200049c0)[param_1 * 0x1c0] = 6;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0;
  (&DAT_200049c2)[param_1 * 0x1c0] = (char)(uVar2 >> 0xe);
  (&DAT_200049c3)[param_1 * 0x1c0] = (char)(uVar2 >> 6);
  (&DAT_200049c4)[param_1 * 0x1c0] = (char)uVar2 * '\x04';
  (&DAT_200049c5)[param_1 * 0x1c0] = (char)((ushort)uVar1 >> 8);
  (&DAT_200049c6)[param_1 * 0x1c0] = (char)uVar1;
  for (uVar2 = 0; uVar2 < 10; uVar2 = uVar2 + 1 & 0xff) {
    bVar3 = bVar3 ^ (&DAT_200049bd)[uVar2 + param_1 * 0x1c0];
  }
  (&DAT_200049c7)[param_1 * 0x1c0] = bVar3;
  if (param_1 == 0) {
    DAT_20004b68 = DAT_20004b68 + 1;
    FUN_08013d34(&DAT_200049bd,0xb);
  }
  else {
    DAT_20004d28 = DAT_20004d28 + 1;
    FUN_0801408c(&DAT_200049bd + param_1 * 0x1c0,0xb);
  }
  return;
}



/* ENTRY 0x08020606 : FUN_08020606 */

void FUN_08020606(int param_1,int param_2)

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
  (&DAT_200049b0)[param_1 * 0x1c0] = 99;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 99;
  (&DAT_200049c0)[param_1 * 0x1c0] = (char)uVar3;
  (&DAT_200049c1)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x18);
  (&DAT_200049c2)[param_1 * 0x1c0] = (char)((uint)param_2 >> 0x10);
  (&DAT_200049c3)[param_1 * 0x1c0] = (char)((uint)param_2 >> 8);
  (&DAT_200049c4)[param_1 * 0x1c0] = (char)param_2;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    bVar2 = bVar2 ^ (&DAT_200049bd)[uVar1 + param_1 * 0x1c0];
  }
  for (uVar1 = 0; (int)uVar1 < (int)(uVar3 - 4); uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_200049c5)[param_1 * 0x1c0 + uVar1] = *(undefined1 *)(param_2 + 0x8029008 + uVar1);
    bVar2 = bVar2 ^ (&DAT_200049c5)[param_1 * 0x1c0 + uVar1];
  }
  (&DAT_200049c1)[param_1 * 0x1c0 + uVar3] = bVar2;
  if (param_1 == 0) {
    DAT_20004b68 = DAT_20004b68 + 1;
    FUN_08013d34(&DAT_200049bd,uVar3 + 5 & 0xff);
  }
  else {
    DAT_20004d28 = DAT_20004d28 + 1;
    FUN_0801408c(&DAT_200049bd + param_1 * 0x1c0,uVar3 + 5 & 0xff);
  }
  return;
}



/* ENTRY 0x08020772 : FUN_08020772 */

void FUN_08020772(int param_1)

{
  (&DAT_200049b0)[param_1 * 0x1c0] = 100;
  (&DAT_200049b1)[param_1 * 0x1c0] = 0;
  (&DAT_200049bd)[param_1 * 0x1c0] = 0xaa;
  (&DAT_200049be)[param_1 * 0x1c0] = 0x55;
  (&DAT_200049bf)[param_1 * 0x1c0] = 100;
  (&DAT_200049c0)[param_1 * 0x1c0] = 0;
  (&DAT_200049c1)[param_1 * 0x1c0] = 0x9b;
  if (param_1 == 0) {
    DAT_20004b68 = DAT_20004b68 + 1;
    FUN_08013d34(&DAT_200049bd,5);
  }
  else {
    DAT_20004d28 = DAT_20004d28 + 1;
    FUN_0801408c(&DAT_200049bd + param_1 * 0x1c0,5);
  }
  return;
}



/* ENTRY 0x08020816 : FUN_08020816 */

byte FUN_08020816(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = (&DAT_200049b5)[param_1 * 0x1c0];
  if (bVar1 == 99) {
    if (((&DAT_200049b2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b1)[param_1 * 0x1c0] == 'c')) {
      if ((uint)DAT_200009b8 * 0xc < (&DAT_200049b8)[param_1 * 0x70] + 0x80) {
        (&DAT_200049b5)[param_1 * 0x1c0] = 100;
        FUN_08020772(param_1);
        return 1;
      }
      (&DAT_200049b5)[param_1 * 0x1c0] = 99;
      (&DAT_200049b8)[param_1 * 0x70] = (&DAT_200049b8)[param_1 * 0x70] + 0x80;
      FUN_08020606(param_1,(&DAT_200049b8)[param_1 * 0x70]);
      return 1;
    }
    (&DAT_200049b5)[param_1 * 0x1c0] = 0x61;
    FUN_08020350(param_1);
    return 0;
  }
  if (bVar1 < 100) {
    if (bVar1 == 0) {
      if ((&DAT_200049b3)[param_1 * 0x1c0] == '\x01') {
        return 0;
      }
      (&DAT_200049b5)[param_1 * 0x1c0] = 0x61;
      FUN_08020350(param_1);
      return 0;
    }
    if (bVar1 == 0x61) {
      if (((&DAT_200049b2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b1)[param_1 * 0x1c0] == 'a')) {
        (&DAT_200049b5)[param_1 * 0x1c0] = 0x62;
        FUN_080204ee(param_1);
        return 1;
      }
      (&DAT_200049b5)[param_1 * 0x1c0] = 0x61;
      FUN_08020350(param_1);
      return 0;
    }
    bVar2 = bVar1 == 0x62;
  }
  else {
    if (bVar1 == 100) {
      if (((&DAT_200049b2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b1)[param_1 * 0x1c0] == 'c')) {
        (&DAT_200049b5)[param_1 * 0x1c0] = 0x65;
        return 0;
      }
      (&DAT_200049b5)[param_1 * 0x1c0] = 0x61;
      FUN_08020350(param_1);
      return 0;
    }
    bVar2 = false;
    if (bVar1 == 0x65) {
      return 0;
    }
  }
  if (bVar2) {
    if (((&DAT_200049b2)[param_1 * 0x1c0] == '\0') && ((&DAT_200049b1)[param_1 * 0x1c0] == 'b')) {
      (&DAT_200049b5)[param_1 * 0x1c0] = 99;
      (&DAT_200049b8)[param_1 * 0x70] = 0;
      FUN_08020606(param_1,(&DAT_200049b8)[param_1 * 0x70]);
      bVar1 = 1;
    }
    else {
      (&DAT_200049b5)[param_1 * 0x1c0] = 0x61;
      FUN_08020350(param_1);
      bVar1 = 0;
    }
  }
  return bVar1;
}



/* ENTRY 0x08020a1e : FUN_08020a1e */

void FUN_08020a1e(void)

{
  return;
}



/* ENTRY 0x08020a2c : FUN_08020a2c */

void FUN_08020a2c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_08023c04();
  FUN_08023a88(0x34);
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    DAT_200009c0 = FUN_08023a94(&DAT_08029000 + uVar1 * 0x800);
  }
  FUN_08023a88(0x34);
  DAT_200009c0 = FUN_08023af8(&DAT_08029000,param_1);
  DAT_200009c0 = FUN_08023af8(&DAT_08029004,param_2);
  FUN_08023ae8();
  return;
}



/* ENTRY 0x08020a7a : FUN_08020a7a */

void FUN_08020a7a(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_08023c04();
  FUN_08023a88(0x34);
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    DAT_200009c0 = FUN_08023b30(param_1 * 0xc + 0x8029008 + uVar1 * 4,
                                *(undefined4 *)(param_2 + uVar1 * 4));
  }
  FUN_08023a88(0x34);
  FUN_08023ae8();
  return;
}



/* ENTRY 0x08020abc : FUN_08020abc */

short FUN_08020abc(byte *param_1,int param_2)

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



/* ENTRY 0x08020ad8 : FUN_08020ad8 */

void FUN_08020ad8(byte *param_1,int param_2)

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



/* ENTRY 0x08020b1c : FUN_08020b1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08020b1c(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_200009b8 = _DAT_08029000;
  DAT_200009ba = _DAT_08029004;
  if (_DAT_08029000 < 1000) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_08020ad8(0x8029008,(uint)_DAT_08029000 * 0xc);
    DAT_200009bc = FUN_08020abc(0x8029008,(uint)DAT_200009b8 * 0xc);
    if (DAT_200009ba == uVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ENTRY 0x08020b76 : FUN_08020b76 */

void FUN_08020b76(undefined1 param_1,undefined1 param_2)

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
  
  FUN_08023532(&local_24,0x14);
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
  uVar1 = FUN_08020ad8(&local_22,0x10);
  local_12 = (undefined1)((ushort)uVar1 >> 8);
  local_11 = (undefined1)uVar1;
  FUN_0801a880(&local_24);
  return;
}



/* ENTRY 0x08020bda : FUN_08020bda */

uint FUN_08020bda(int param_1)

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
  uVar2 = FUN_08020ad8(local_2c + 2,0x10);
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
        FUN_08020a2c(local_1e,DAT_200009ba);
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
      if (((uVar3 != 0) && (uVar3 == 1)) && (uVar3 = FUN_08020b1c(), uVar3 == 1)) {
        FUN_0801e31e(0);
        uVar3 = FUN_0801e31e(1);
      }
    }
    else if (uVar3 == 0x11) {
      if (DAT_200009b8 == 0) {
        uVar3 = 0;
      }
      else {
        if (DAT_200009be == local_1e) {
          uVar3 = (uint)DAT_200009be;
          FUN_08020a7a(DAT_200009be,local_2c + 2);
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
      uVar4 = FUN_08020ad8(0x8029008,(uint)DAT_200009b8 * 0xc);
      DAT_200009bc = FUN_08020abc(0x8029008,(uint)DAT_200009b8 * 0xc);
      uVar3 = (uint)DAT_200009ba;
      if ((uVar3 == uVar4) && (uVar3 = (uint)DAT_200009b8, 1000 < uVar3)) {
        local_2c[2] = (undefined1)(uVar4 >> 8);
        local_2c[3] = (undefined1)uVar4;
        local_1e = DAT_200009b8;
        local_1c = 0x7a;
        local_1b = 0x12;
        bVar1 = true;
        FUN_0801e31e(0);
        uVar3 = FUN_0801e31e(1);
      }
    }
    if (bVar1) {
      uVar2 = FUN_08020ad8(local_2c + 2,0x10);
      local_1a = (char)((ushort)uVar2 >> 8);
      local_19 = (char)uVar2;
      uVar3 = FUN_0801a50a(local_2c);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ENTRY 0x08020e40 : FUN_08020e40 */

int FUN_08020e40(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003ef6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ef7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ef8)[uVar2 * 0x14 + iVar1] = (&DAT_20004b4f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f06)[uVar2 * 0x14] = (char)param_1 + -0x1f;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ef9)[uVar2 * 0x14 + iVar1] = (&DAT_20004b4f)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08020ef8 : FUN_08020ef8 */

int FUN_08020ef8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = DAT_2000093f & 3;
  if (DAT_2000093e == '\0') {
    (&DAT_20003ef6)[uVar2 * 0x14] = 0xaa;
    (&DAT_20003ef7)[uVar2 * 0x14] = 0x55;
    for (iVar1 = 0; iVar1 < 0xe; iVar1 = iVar1 + 1) {
      (&DAT_20003ef8)[uVar2 * 0x14 + iVar1] = (&DAT_20004a7d)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20003f06)[uVar2 * 0x14] = (char)param_1 + -0x1b;
    for (iVar1 = 0xe; iVar1 < 0x11; iVar1 = iVar1 + 1) {
      (&DAT_20003ef9)[uVar2 * 0x14 + iVar1] = (&DAT_20004a7d)[iVar1 + param_1 * 0x1c0];
    }
    (&DAT_20000941)[uVar2] = 0x14;
    DAT_2000093f = (char)uVar2 + 1U & 3;
    if (DAT_2000093f == DAT_20000940) {
      DAT_2000093e = '\x01';
    }
  }
  return iVar1;
}



/* ENTRY 0x08020fac : FUN_08020fac */

void FUN_08020fac(byte param_1,int param_2,int param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  if (param_2 == 0xa6) {
    for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
      auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    }
    local_18 = (param_1 & 1) + 0x76;
    local_17 = 0xa6;
    uVar1 = FUN_08020ad8(auStack_26,0x10);
    local_16 = (undefined1)((ushort)uVar1 >> 8);
    local_15 = (undefined1)uVar1;
    FUN_0801a8d8(&local_28);
  }
  return;
}



/* ENTRY 0x08021018 : FUN_08021018 */

void FUN_08021018(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) + 0x76;
  local_17 = param_2;
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  return;
}



/* ENTRY 0x08021078 : FUN_08021078 */

void FUN_08021078(int param_1)

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
  uVar2 = FUN_08020ad8(local_2c + 2,0x10);
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
    if (((bVar1) && ((&DAT_20004b67)[uVar3 * 0x1c0] != '\0')) &&
       ((&DAT_20004b4e)[uVar3 * 0x1c0] == '\0')) {
      for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1 & 0xff) {
        (&DAT_20004a95)[uVar4 + uVar3 * 0x1c0] = local_2c[uVar4 + 2];
      }
      (&DAT_20004aad)[uVar3 * 0x1c0] = (char)uVar5;
      (&DAT_20004b4e)[uVar3 * 0x1c0] = local_1b;
    }
  }
  return;
}



/* ENTRY 0x080211a8 : FUN_080211a8 */

void FUN_080211a8(byte param_1,undefined4 param_2,undefined1 param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1f;
  local_17 = 0xc3;
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  return;
}



/* ENTRY 0x0802120c : FUN_0802120c */

void FUN_0802120c(int param_1)

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
    FUN_08020e40(uVar3);
  }
  else if (((&DAT_20004b67)[uVar3 * 0x1c0] != '\0') && ((&DAT_20004b4e)[uVar3 * 0x1c0] == '\0')) {
    for (uVar2 = 0; uVar2 < 0xe; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a95)[uVar2 + uVar3 * 0x1c0] = *(undefined1 *)(param_1 + uVar2 + 2);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004aa3)[uVar3 * 0x1c0 + uVar2] = *(undefined1 *)(param_1 + uVar2 + 0x11);
    }
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004aa6)[uVar3 * 0x1c0 + uVar2] = 0x30;
    }
    (&DAT_20004aad)[uVar3 * 0x1c0] = 0x14;
    (&DAT_20004b4e)[uVar3 * 0x1c0] = 0xc3;
  }
  return;
}



/* ENTRY 0x080212f0 : FUN_080212f0 */

void FUN_080212f0(int param_1)

{
  FUN_08020ef8(*(char *)(param_1 + 0x10) - 5U & 1);
  return;
}



/* ENTRY 0x08021304 : FUN_08021304 */

void FUN_08021304(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(DAT_200009c1) {
  case '\0':
    local_10 = (int)DAT_20004abc;
    local_14 = (uint)DAT_20004b12;
    local_8 = (uint)DAT_20004b06;
    local_c = (uint)DAT_20004b08;
    FUN_0801a562(0xf1,0,local_c,local_8,(int)DAT_20004b0a,(int)DAT_20004b0e,(int)DAT_20004b10);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x01':
    local_10 = (int)DAT_20004afe;
    local_14 = (uint)DAT_20004afc;
    local_8 = (uint)DAT_20004af4;
    local_c = (uint)DAT_20004af2;
    FUN_0801a562(0xf1,1,local_c,local_8,(int)DAT_20004af6,(int)DAT_20004af8,(int)DAT_20004afa);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x02':
    local_10 = (int)DAT_20004abc;
    local_14 = (uint)DAT_20004aba;
    local_8 = (uint)DAT_20004ab2;
    local_c = (uint)DAT_20004ab0;
    FUN_0801a562(0xf1,2,local_c,local_8,(int)DAT_20004ab4,(int)DAT_20004ab6,(int)DAT_20004ab8);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x03':
    local_10 = (int)DAT_20004aca;
    local_14 = (uint)DAT_20004ac8;
    local_8 = (uint)DAT_20004ac0;
    local_c = (uint)DAT_20004abe;
    FUN_0801a562(0xf1,3,local_c,local_8,(int)DAT_20004ac2,(int)DAT_20004ac4,(int)DAT_20004ac6);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x04':
    local_10 = (int)DAT_20004ad8;
    local_14 = (uint)DAT_20004ad6;
    local_8 = (uint)DAT_20004ace;
    local_c = (uint)DAT_20004acc;
    FUN_0801a562(0xf1,4,local_c,local_8,(int)DAT_20004ad0,(int)DAT_20004ad2,(int)DAT_20004ad4);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x05':
    local_10 = (int)DAT_20004ae6;
    local_14 = (uint)DAT_20004ae4;
    local_8 = (uint)DAT_20004adc;
    local_c = (uint)DAT_20004ada;
    FUN_0801a562(0xf1,5,local_c,local_8,(int)DAT_20004ade,(int)DAT_20004ae0,(int)DAT_20004ae2);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x06':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004aea;
    local_c = (uint)DAT_20004ae8;
    FUN_0801a562(0xf1,6,local_c,local_8,0,0,(int)DAT_20004b00);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\a':
    local_10 = (int)DAT_20004c7c;
    local_14 = (uint)DAT_20004cd2;
    local_8 = (uint)DAT_20004cc6;
    local_c = (uint)DAT_20004cc8;
    FUN_0801a562(0xf2,0,local_c,local_8,(int)DAT_20004cca,(int)DAT_20004cce,(int)DAT_20004cd0);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\b':
    local_10 = (int)DAT_20004cbe;
    local_14 = (uint)DAT_20004cbc;
    local_8 = (uint)DAT_20004cb4;
    local_c = (uint)DAT_20004cb2;
    FUN_0801a562(0xf2,1,local_c,local_8,(int)DAT_20004cb6,(int)DAT_20004cb8,(int)DAT_20004cba);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\t':
    local_10 = (int)DAT_20004c7c;
    local_14 = (uint)DAT_20004c7a;
    local_8 = (uint)DAT_20004c72;
    local_c = (uint)DAT_20004c70;
    FUN_0801a562(0xf2,2,local_c,local_8,(int)DAT_20004c74,(int)DAT_20004c76,(int)DAT_20004c78);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\n':
    local_10 = (int)DAT_20004c8a;
    local_14 = (uint)DAT_20004c88;
    local_8 = (uint)DAT_20004c80;
    local_c = (uint)DAT_20004c7e;
    FUN_0801a562(0xf2,3,local_c,local_8,(int)DAT_20004c82,(int)DAT_20004c84,(int)DAT_20004c86);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\v':
    local_10 = (int)DAT_20004c98;
    local_14 = (uint)DAT_20004c96;
    local_8 = (uint)DAT_20004c8e;
    local_c = (uint)DAT_20004c8c;
    FUN_0801a562(0xf2,4,local_c,local_8,(int)DAT_20004c90,(int)DAT_20004c92,(int)DAT_20004c94);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\f':
    local_10 = (int)DAT_20004ca6;
    local_14 = (uint)DAT_20004ca4;
    local_8 = (uint)DAT_20004c9c;
    local_c = (uint)DAT_20004c9a;
    FUN_0801a562(0xf2,5,local_c,local_8,(int)DAT_20004c9e,(int)DAT_20004ca0,(int)DAT_20004ca2);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\r':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004caa;
    local_c = (uint)DAT_20004ca8;
    FUN_0801a562(0xf2,6,local_c,local_8,0,0,(int)DAT_20004cc0);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x0e':
    FUN_0801a6c8(0xf3,0,&DAT_20004b16);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x0f':
    FUN_0801a6c8(0xf3,1,&DAT_20004b24);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x10':
    local_14._0_2_ = CONCAT11(DAT_20004b33,DAT_20004b32);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004b40,DAT_20004b3f);
    local_10._0_3_ = CONCAT12(DAT_20004b41,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b42,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004b43;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004b46,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004b46 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004b48);
    FUN_0801a6c8(0xf3,2,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x11':
    local_14._0_2_ = CONCAT11(DAT_20004b35,DAT_20004b34);
    local_14._0_3_ = CONCAT12(DAT_20004b36,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004b37,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004b39,DAT_20004b38);
    local_10._0_3_ = CONCAT12(DAT_20004b3a,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004b3b,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004b3e,CONCAT11(DAT_20004b3c,DAT_20004b3d)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004b4d,DAT_20004b4c);
    FUN_0801a6c8(0xf3,3,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x12':
    FUN_0801a6c8(0xf4,0,&DAT_20004cd6);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x13':
    FUN_0801a6c8(0xf4,1,&DAT_20004ce4);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x14':
    local_14._0_2_ = CONCAT11(DAT_20004cf3,DAT_20004cf2);
    local_14 = (uint)(ushort)local_14;
    local_10._0_2_ = CONCAT11(DAT_20004d00,DAT_20004cff);
    local_10._0_3_ = CONCAT12(DAT_20004d01,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004d02,(undefined3)local_10);
    local_c._0_2_ = (ushort)DAT_20004d03;
    local_c._0_3_ = CONCAT12((undefined1)DAT_20004d06,(ushort)local_c);
    local_c = CONCAT13((char)((ushort)DAT_20004d06 >> 8),(undefined3)local_c);
    local_8 = CONCAT22(local_8._2_2_,DAT_20004d08);
    FUN_0801a6c8(0xf4,2,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x15':
    local_14._0_2_ = CONCAT11(DAT_20004cf5,DAT_20004cf4);
    local_14._0_3_ = CONCAT12(DAT_20004cf6,(ushort)local_14);
    local_14 = CONCAT13(DAT_20004cf7,(undefined3)local_14);
    local_10._0_2_ = CONCAT11(DAT_20004cf9,DAT_20004cf8);
    local_10._0_3_ = CONCAT12(DAT_20004cfa,(undefined2)local_10);
    local_10 = CONCAT13(DAT_20004cfb,(undefined3)local_10);
    local_c = (uint)CONCAT12(DAT_20004cfe,CONCAT11(DAT_20004cfc,DAT_20004cfd)) << 8;
    local_8._0_2_ = CONCAT11(DAT_20004d0d,DAT_20004d0c);
    FUN_0801a6c8(0xf4,3,&local_14);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x16':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_200049b4;
    local_c = (uint)DAT_200049ae;
    FUN_0801a562(0xf1,0xb0,local_c,local_8,0,0,0);
    DAT_200009c1 = DAT_200009c1 + '\x01';
    break;
  case '\x17':
    local_14 = 0;
    local_10 = 0;
    local_8 = (uint)DAT_20004b74;
    local_c = (uint)DAT_20004b6e;
    FUN_0801a562(0xf2,0xb0,local_c,local_8,0,0,0);
    DAT_200009c1 = '\0';
  }
  return;
}



/* ENTRY 0x08021b94 : FUN_08021b94 */

void FUN_08021b94(void)

{
  uint uVar1;
  
  DAT_20005df7 = 0xff;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20004d34)[uVar1 * 0x40] = 0xff;
  }
  return;
}



/* ENTRY 0x08021bb2 : FUN_08021bb2 */

void FUN_08021bb2(undefined1 param_1)

{
  DAT_20005e2b = param_1;
  return;
}



/* ENTRY 0x08021bba : FUN_08021bba */

void FUN_08021bba(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0xfe) {
    uVar1 = FUN_0800ab80();
    DAT_20005d6c = 0x1451090;
    DAT_20005d74 = (undefined1)param_1;
    DAT_20005d70 = FUN_080240a4();
    DAT_20005d75 = diag_cartstep;
    DAT_20005d76 = (undefined1)((uint)uVar1 >> 8);
    DAT_20005d77 = (undefined1)uVar1;
    DAT_20005d79 = diag_allwarnbit;
    DAT_20005d78 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_20005d7e = (undefined2)diag_TotalVoltage;
    DAT_20005d80 = (undefined2)diag_TotalCurrent;
    DAT_20005d82 = (undefined2)(diag_VehicleSpeed / 100);
    DAT_20005d84 = (undefined2)diag_VectorVol;
    DAT_20005d86 = (undefined2)diag_IQCurrent;
    iVar2 = FUN_0800fad6();
    DAT_20005d88 = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800fade();
    DAT_20005d8a = (undefined2)(iVar2 / 0x199);
    iVar2 = FUN_0800fae6();
    DAT_20005d8c = (undefined1)((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x14)) >> 0xc);
    DAT_20005d8d = (undefined1)((int)diag_ChgCurrShow / 1000);
    DAT_20005d90 = diag_ChgStepShow;
    if (diag_MosTemp < 0x80) {
      if (diag_MosTemp < -0x7d) {
        DAT_20005d8e = 0x82;
      }
      else {
        DAT_20005d8e = (undefined1)diag_MosTemp;
      }
    }
    else {
      DAT_20005d8e = 0x7f;
    }
    if (diag_MotorTemp < 0x80) {
      if (diag_MotorTemp < -0x7d) {
        DAT_20005d8f = 0x82;
      }
      else {
        DAT_20005d8f = (undefined1)diag_MotorTemp;
      }
    }
    else {
      DAT_20005d8f = 0x7f;
    }
    DAT_20005d91 = 0;
    if (diag_hall_err < 0x100) {
      DAT_20005d92 = (undefined1)diag_hall_err;
    }
    else {
      DAT_20005d92 = 0xff;
    }
  }
  return;
}



/* ENTRY 0x08021d10 : FUN_08021d10 */

undefined4 FUN_08021d10(undefined4 param_1)

{
  FUN_08021bba(param_1);
  FUN_08023444(&DAT_20005d2c,&DAT_20005d6c,0x40);
  return 1;
}



/* ENTRY 0x08021d2c : FUN_08021d2c */

bool FUN_08021d2c(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0xff) {
    bVar1 = (byte)(&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] < 0xfe;
    if (bVar1) {
      FUN_08023444(&DAT_20005d2c,(uint)DAT_200009c4 * 0x40 + 0x20004d2c,0x40);
    }
    (&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] = 0xff;
  }
  else if (param_1 == 0xfe) {
    if (((&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] < 0xfe)) {
      FUN_08023444(&DAT_20005d2c,(uint)DAT_200009c4 * 0x40 + 0x20004d2c,0x40);
      bVar1 = true;
    }
    (&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] = 0xff;
  }
  else {
    if (((&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] != '\0') &&
       ((byte)(&DAT_20004d34)[(uint)DAT_200009c4 * 0x40] < 0xfe)) {
      FUN_08023444(&DAT_20005d2c,(uint)DAT_200009c4 * 0x40 + 0x20004d2c,0x40);
      bVar1 = true;
    }
    FUN_08021bba(param_1);
    FUN_08023444((uint)DAT_200009c4 * 0x40 + 0x20004d2c,&DAT_20005d6c,0x40);
  }
  DAT_200009c4 = DAT_200009c4 + 1 & 0x3f;
  return bVar1;
}



/* ENTRY 0x08021e16 : FUN_08021e16 */

void FUN_08021e16(void)

{
  FUN_0801d854(&DAT_20005e30,(((uint)(ushort)DAT_20005e25 - (uint)DAT_20005e2e) - 1 & 0x7fff) << 6,
               0x40);
  FUN_0801a6c8(0xf9,0x80,&DAT_20005e34);
  FUN_0801a6c8(0xf9,0x81,&DAT_20005e42);
  FUN_0801a6c8(0xf9,0x82,&DAT_20005e50);
  return;
}



/* ENTRY 0x08021e5c : FUN_08021e5c */

void FUN_08021e5c(int param_1)

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
  uVar2 = FUN_08020ad8(&local_22,0x10);
  local_12 = (char)((ushort)uVar2 >> 8);
  local_11 = (char)uVar2;
  if ((local_12 == *(char *)(param_1 + 0x12)) && (local_11 == *(char *)(param_1 + 0x13))) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0x60) {
      DAT_20005e29 = 0x60;
    }
    else {
      if (bVar1 < 0x61) {
        if (bVar1 == 1) {
          if ((char)local_22 == '\x01') {
            FUN_0801d3b0(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,
                         local_1a);
            return;
          }
          local_22 = CONCAT13((char)((ushort)DAT_200049a4 >> 8),
                              CONCAT12((char)DAT_200049a4,(short)local_22)) & 0xffffff00;
          local_1e = CONCAT11(DAT_200049a7,DAT_200049a6);
          local_1c = DAT_200049a0;
          local_1b = DAT_200049a1;
          local_1a = DAT_200049a2;
          uVar2 = FUN_08020ad8(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a50a(local_24);
          return;
        }
        if (bVar1 == 0x10) {
          FUN_0801d3b0(local_22._2_2_,(undefined1)local_1e,local_1e._1_1_,local_1c,local_1b,local_1a
                      );
          DAT_200009c6 = 0xa5;
          return;
        }
        bVar4 = bVar1 == 0x23;
      }
      else {
        if (bVar1 == 0x61) {
          DAT_20005e29 = 0x61;
          return;
        }
        bVar4 = false;
        if (bVar1 == 0xa1) {
          local_22 = DAT_2000312c;
          local_1e = CONCAT11(DAT_20003131,DAT_20003130);
          local_1c = DAT_20003134;
          local_1b = DAT_2000313a;
          local_1a = DAT_2000313b;
          local_19 = DAT_20003135;
          local_18 = DAT_20003136;
          local_17 = DAT_20003139;
          local_16 = DAT_2000313c;
          local_15 = DAT_2000313d;
          uVar2 = FUN_08020ad8(&local_22,0x10);
          local_12 = (char)((ushort)uVar2 >> 8);
          local_11 = (char)uVar2;
          FUN_0801a50a(local_24);
          return;
        }
      }
      if (bVar4) {
        if ((uint)local_1e <= (uint)local_22._2_2_) {
          DAT_20005e15 = (uint)local_22._2_2_;
          DAT_20005e1d = (uint)local_1e;
        }
        DAT_20005e29 = 0x23;
      }
    }
  }
  return;
}



/* ENTRY 0x08022086 : FUN_08022086 */

void FUN_08022086(void)

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
  
  if (DAT_20005e2a == '#') {
    local_1a = (undefined1)DAT_20005e05;
    local_19 = (undefined1)((ushort)(undefined2)DAT_20005e05 >> 8);
    local_18 = (undefined1)DAT_20005e15;
    local_17 = (undefined1)((ushort)(undefined2)DAT_20005e15 >> 8);
    local_16 = (undefined1)DAT_20005e1d;
    local_15 = (undefined1)(DAT_20005e1d >> 8);
    local_14 = (undefined1)DAT_20005e19;
    local_13 = (undefined1)((uint)DAT_20005e19 >> 8);
    local_12 = (undefined1)((uint)DAT_20005e19 >> 0x10);
    local_11 = (undefined1)((uint)DAT_20005e19 >> 0x18);
    local_10 = (undefined1)DAT_20005e21;
    local_f = (undefined1)((uint)DAT_20005e21 >> 8);
    local_e = (undefined1)((uint)DAT_20005e21 >> 0x10);
    local_d = (undefined1)((uint)DAT_20005e21 >> 0x18);
    local_c = 0xf9;
    local_b = 0x23;
    uVar1 = FUN_08020ad8(&local_1a,0x10);
    local_a = (undefined1)((ushort)uVar1 >> 8);
    local_9 = (undefined1)uVar1;
    FUN_0801a76a(0xf9,0x23,&local_1a);
    DAT_20005e2a = '\0';
  }
  else if (DAT_20005e2a == 'a') {
    if (DAT_20005e1d < DAT_20005e2e) {
      FUN_08021e16();
      DAT_20005e2e = DAT_20005e2e - 1;
    }
    else {
      FUN_08021e16();
      DAT_20005e2a = '\0';
    }
  }
  return;
}



/* ENTRY 0x080221a8 : FUN_080221a8 */

undefined4 FUN_080221a8(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 + *param_1 >> 1;
  if (*param_1 + 1 < *param_2) {
    iVar1 = FUN_0801d89e(uVar3 << 6);
    if (iVar1 == -1) {
      *param_2 = uVar3;
    }
    else {
      *param_1 = uVar3;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0801d89e(*param_2 << 6);
    if (iVar1 == -1) {
      iVar1 = FUN_0801d89e(*param_1 << 6);
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



/* ENTRY 0x08022208 : FUN_08022208 */

void FUN_08022208(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_200009cc = DAT_200009cc + 1;
  if ((DAT_20005dad != '\0') && (DAT_20005dad = FUN_0801d930(), DAT_20005dad != '\0')) {
    return;
  }
  if (DAT_20005dac == 0x22) {
LAB_080229c2:
    if (DAT_20005db3 == 0) {
      DAT_20005dac = 0;
    }
    else {
      DAT_20005dad = '\x01';
      DAT_20005daf = (uint)DAT_20005db5 << 0x10;
      FUN_0801d9ce(1,DAT_20005db5);
      DAT_20005db5 = DAT_20005db5 + 1;
      DAT_20005db3 = DAT_20005db3 + -1;
      DAT_20005dac = 0x25;
    }
  }
  else {
    if (DAT_20005dac < 0x23) {
      if (DAT_20005dac == 0) {
        if (DAT_20005df7 == 0) {
          if (DAT_20005e29 == 0x60) {
            DAT_20005e2a = 0;
            DAT_20005e29 = 0;
          }
          else if (DAT_20005e29 == 0x61) {
            if (DAT_20005e01 != 0) {
              DAT_20005e2a = 0x61;
            }
            DAT_20005e29 = 0;
          }
          if (DAT_20005e2a != 0) {
            return;
          }
          if (DAT_20005e2b == 0xef) {
            iVar1 = FUN_08021d10(0xef);
            if (iVar1 != 0) {
              DAT_20005df7 = 0x30;
            }
            DAT_20005e2b = 0;
            DAT_20005e2c = 'J';
          }
          else if ((DAT_20005e2b & 0xf0) == 0xe0) {
            iVar1 = FUN_08021d2c(DAT_20005e2b);
            if (iVar1 != 0) {
              DAT_20005df7 = 0x30;
            }
            DAT_20005e2b = 0;
            DAT_20005e2c = 'J';
          }
          else if (DAT_20005e2c == '\0') {
            if (DAT_20005e2b == 0xf0) {
              iVar1 = FUN_08021d2c(0xf0);
              if (iVar1 != 0) {
                DAT_20005df7 = 0x30;
              }
              DAT_20005e2b = 0;
              DAT_20005e2d = 'J';
            }
            else if (DAT_20005e2d == '\0') {
              if (DAT_20005e2b == 0) {
                if (DAT_20005e29 == 0x23) {
                  DAT_20005df7 = DAT_20005e29;
                }
                else if (DAT_200009c6 == -0x5b) {
                  DAT_20005df7 = 0x10;
                  DAT_200009c6 = '\0';
                }
                else if ((DAT_200009cc % 0x15 == 0x11) && (iVar1 = FUN_08021d2c(0), iVar1 != 0)) {
                  DAT_20005df7 = 0x30;
                }
              }
              else {
                iVar1 = FUN_08021d2c(DAT_20005e2b);
                if (iVar1 != 0) {
                  DAT_20005df7 = 0x30;
                }
                DAT_20005e2b = 0;
              }
            }
            else {
              iVar1 = FUN_08021d2c(0xfe);
              if (iVar1 != 0) {
                DAT_20005df7 = 0x30;
              }
              DAT_20005e2d = DAT_20005e2d + -1;
            }
          }
          else {
            iVar1 = FUN_08021d2c(0xff);
            if (iVar1 != 0) {
              DAT_20005df7 = 0x30;
            }
            DAT_20005e2c = DAT_20005e2c + -1;
          }
        }
        if (DAT_20005df7 == 0x22) {
          iVar1 = FUN_080221a8(&DAT_20005df9);
          if (iVar1 == 1) {
            DAT_20005e25 = DAT_20005df9;
            DAT_20005df7 = 0x23;
          }
          else if (iVar1 == 2) {
            DAT_20005e25 = 0;
            DAT_20005dae = 0x22;
            DAT_20005df7 = 0x23;
          }
          goto code_r0x08022870;
        }
        if (DAT_20005df7 < 0x23) {
          if (DAT_20005df7 == 0x12) {
            DAT_20005db7 = 0x1451090;
            DAT_20005db3 = 4;
            DAT_20005db5 = 0;
            DAT_20005daf = 0x200000;
            DAT_20005dae = 3;
            DAT_20005e25 = 0;
            DAT_20005df7 = 0x20;
            goto code_r0x08022870;
          }
          if (0x12 < DAT_20005df7) {
            if (DAT_20005df7 == 0x20) {
              DAT_20005df9 = 0;
              DAT_20005dfd = 0x3fff;
              DAT_20005df7 = 0x21;
            }
            else {
              bVar2 = DAT_20005df7 == 0x21;
              if (!bVar2) goto LAB_08022416;
            }
            iVar1 = FUN_080221a8(&DAT_20005df9);
            if (iVar1 == 1) {
              DAT_20005e25 = DAT_20005df9;
              DAT_20005df7 = 0x23;
            }
            else if (iVar1 == 2) {
              DAT_20005df9 = 0x4000;
              DAT_20005dfd = 0x7fff;
              DAT_20005df7 = 0x22;
            }
            goto code_r0x08022870;
          }
          if (DAT_20005df7 == 0) goto code_r0x08022870;
          if (DAT_20005df7 == 0x10) {
            DAT_20005dae = 0x22;
            DAT_20005df7 = 0x11;
            goto code_r0x08022870;
          }
          bVar2 = DAT_20005df7 == 0x11;
        }
        else {
          if (DAT_20005df7 == 0x31) {
            FUN_08023444(&DAT_20005db7,&DAT_20005d2c,0x40);
            DAT_20005db3 = 0x40;
            DAT_20005db5 = 0;
            DAT_20005daf = DAT_20005e25 << 6;
            DAT_20005dae = 3;
            DAT_20005e25 = DAT_20005e25 + 1 & 0x7fff;
            DAT_20005df7 = 0;
            goto code_r0x08022870;
          }
          if (DAT_20005df7 < 0x32) {
            if (DAT_20005df7 == 0x23) {
              DAT_20005e01 = 0x3ff8;
              DAT_20005e05 = 0x3ff7;
              iVar1 = FUN_0801d89e(((DAT_20005e25 & 0xffff) - 0x3ff8 & 0x7fff) << 6);
              if ((iVar1 == -1) && (DAT_20005e25 <= DAT_20005e05)) {
                if (DAT_20005e25 == 0) {
                  DAT_20005e05 = 0;
                  DAT_20005e01 = 0;
                }
                else {
                  DAT_20005e05 = DAT_20005e25 - 1;
                  DAT_20005e01 = DAT_20005e25;
                }
              }
              if (DAT_20005e01 == 0) {
                DAT_20005e29 = 0;
                DAT_20005df7 = 0;
              }
              else {
                DAT_20005e09 = FUN_0801d89e((((DAT_20005e25 & 0xffff) - (DAT_20005e05 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005e0d = 0;
                DAT_20005e11 = FUN_0801d89e(((DAT_20005e25 & 0xffff) - 1 & 0x7fff) * 0x40 + 4);
                if (DAT_20005e15 == 0) {
                  DAT_20005e15 = 0xfffe;
                }
                if (DAT_20005e05 < DAT_20005e15) {
                  DAT_20005e15 = DAT_20005e05;
                }
                DAT_20005e19 = FUN_0801d89e((((DAT_20005e25 & 0xffff) - (DAT_20005e15 & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                if (DAT_20005e15 < DAT_20005e1d) {
                  DAT_20005e1d = DAT_20005e15;
                }
                DAT_20005e21 = FUN_0801d89e((((DAT_20005e25 & 0xffff) - (DAT_20005e1d & 0xffff)) - 1
                                            & 0x7fff) * 0x40 + 4);
                DAT_20005e2e = (ushort)DAT_20005e15;
                if (DAT_20005e29 == 0x23) {
                  DAT_20005e2a = DAT_20005e29;
                }
                DAT_20005e29 = 0;
                DAT_20005df7 = 0;
              }
              goto code_r0x08022870;
            }
            bVar2 = false;
            if (DAT_20005df7 == 0x30) {
              if (DAT_20005e25 == 0) {
                iVar1 = FUN_0801d89e(0);
                if (iVar1 == -1) {
                  FUN_08023444(&DAT_20005db7,&DAT_20005d2c,0x40);
                  DAT_20005db3 = 0x40;
                  DAT_20005db5 = 0;
                  DAT_20005daf = DAT_20005e25 << 6;
                  DAT_20005dae = 3;
                  DAT_20005e25 = DAT_20005e25 + 1 & 0x7fff;
                  DAT_20005df7 = 0;
                }
                else {
                  DAT_20005dae = 0x23;
                  DAT_20005df7 = 0x31;
                }
              }
              else if (DAT_20005e25 == 0x3fff) {
                DAT_20005dae = 0x24;
                DAT_20005df7 = 0x31;
              }
              else if (DAT_20005e25 == 0x4000) {
                iVar1 = FUN_0801d89e(0x100000);
                if (iVar1 == -1) {
                  FUN_08023444(&DAT_20005db7,&DAT_20005d2c,0x40);
                  DAT_20005db3 = 0x40;
                  DAT_20005db5 = 0;
                  DAT_20005daf = DAT_20005e25 << 6;
                  DAT_20005dae = 3;
                  DAT_20005e25 = DAT_20005e25 + 1 & 0x7fff;
                  DAT_20005df7 = 0;
                }
                else {
                  DAT_20005dae = 0x24;
                  DAT_20005df7 = 0x31;
                }
              }
              else if (DAT_20005e25 == 0x7fff) {
                DAT_20005dae = 0x23;
                DAT_20005df7 = 0x31;
              }
              else {
                FUN_08023444(&DAT_20005db7,&DAT_20005d2c,0x40);
                DAT_20005db3 = 0x40;
                DAT_20005db5 = 0;
                DAT_20005daf = DAT_20005e25 << 6;
                DAT_20005dae = 3;
                DAT_20005e25 = DAT_20005e25 + 1 & 0x7fff;
                DAT_20005df7 = 0;
              }
              goto code_r0x08022870;
            }
          }
          else {
            if (DAT_20005df7 == 0x60) {
              FUN_0801d854(&DAT_20005e30,(uint)DAT_20005e2e << 6,0x40);
              DAT_20005df7 = 0;
              goto code_r0x08022870;
            }
            bVar2 = false;
            if (DAT_20005df7 == 0xff) {
              DAT_20005df7 = 0x20;
              goto code_r0x08022870;
            }
          }
        }
LAB_08022416:
        if (bVar2) {
          DAT_20005db5 = 0x20;
          DAT_20005dae = 2;
          DAT_20005df7 = 0x12;
        }
code_r0x08022870:
        if (DAT_20005dae == 0x22) {
          DAT_20005dad = '\x01';
          DAT_20005db3 = 0x20;
          DAT_20005db5 = 0;
          DAT_20005daf = 0;
          FUN_0801d9ce(0,0);
          DAT_20005dac = 0x22;
        }
        else if (DAT_20005dae < 0x23) {
          if (DAT_20005dae == 1) {
            DAT_20005dad = '\x01';
            FUN_0801da0c(0);
            DAT_20005dac = 1;
          }
          else if (DAT_20005dae == 2) {
            DAT_20005dad = '\x01';
            FUN_0801d9ce(0,DAT_20005db5);
            DAT_20005dac = 2;
          }
          else if (DAT_20005dae == 3) {
            DAT_20005dad = '\x01';
            FUN_0801d93c(&DAT_20005db7,DAT_20005daf);
            DAT_20005dac = 0;
          }
        }
        else if (DAT_20005dae == 0x23) {
          DAT_20005dad = '\x01';
          DAT_20005db3 = 0x10;
          DAT_20005db5 = 0;
          DAT_20005daf = 0;
          FUN_0801d9ce(0,0);
          DAT_20005dac = 0x23;
        }
        else if (DAT_20005dae == 0x24) {
          DAT_20005dad = '\x01';
          DAT_20005db3 = 0x10;
          DAT_20005db5 = 0x10;
          DAT_20005daf = 0x100000;
          FUN_0801d9ce(0,0x10);
          DAT_20005dac = 0x24;
        }
        DAT_20005dae = 0;
        return;
      }
      if (DAT_20005dac == 1) {
        DAT_20005dad = 1;
        FUN_0801da0c();
        DAT_20005dac = 0;
        return;
      }
      bVar2 = DAT_20005dac == 2;
    }
    else {
      if ((DAT_20005dac == 0x23) || (DAT_20005dac == 0x24)) goto LAB_080229c2;
      bVar2 = false;
      if (DAT_20005dac == 0x25) {
        DAT_20005dad = 1;
        FUN_0801d9ce(0,DAT_20005db5);
        DAT_20005dac = 0x24;
        return;
      }
    }
    if (bVar2) {
      DAT_20005dad = '\x01';
      FUN_0801d9ce(1,DAT_20005db5);
      DAT_20005dac = 0;
    }
  }
  return;
}



/* ENTRY 0x08022a50 : FUN_08022a50 */

void FUN_08022a50(void)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20005e70)[uVar1 * 0x11] = (&DAT_08027d6e)[uVar1];
    (&DAT_20005e71)[uVar1 * 0x11] = (&DAT_08027d4f)[uVar1];
    (&DAT_20005f80)[uVar1 * 0x11] = (&DAT_08027d6e)[uVar1];
    (&DAT_20005f81)[uVar1 * 0x11] = (&DAT_08027d4f)[uVar1];
  }
  for (uVar1 = 0; uVar1 < 0xf; uVar1 = uVar1 + 1 & 0xff) {
    (&DAT_20006090)[uVar1 * 0x11] = (&DAT_08027d7e)[uVar1];
    (&DAT_20006091)[uVar1 * 0x11] = (&DAT_08027d5f)[uVar1];
    (&DAT_2000618f)[uVar1 * 0x11] = (&DAT_08027d7e)[uVar1];
    (&DAT_20006190)[uVar1 * 0x11] = (&DAT_08027d5f)[uVar1];
  }
  return;
}



/* ENTRY 0x08022ad2 : FUN_08022ad2 */

void FUN_08022ad2(int param_1,int param_2,int param_3)

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
    *(undefined1 *)(param_1 * 0x110 + param_2 * 0x11 + 0x20005e72) = 0;
  }
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e71)[param_1 * 0x110 + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = (char)param_3;
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20005e70)[param_2 * 0x11 + param_1 * 0x110];
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  return;
}



/* ENTRY 0x08022b6c : FUN_08022b6c */

void FUN_08022b6c(int param_1,int param_2,int param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < (byte)(&DAT_20006091)[param_1 * 0xff + param_2 * 0x11];
      uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = *(undefined1 *)(param_3 + uVar2);
    *(undefined1 *)(param_1 * 0xff + param_2 * 0x11 + 0x20006093 + uVar2) = auStack_26[uVar2];
  }
  local_18 = ((byte)param_1 & 1) + 0x74;
  local_17 = (&DAT_20006090)[param_2 * 0x11 + param_1 * 0xff];
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  (&DAT_20006092)[param_1 * 0xff + param_2 * 0x11] = 0;
  return;
}



/* ENTRY 0x08022c14 : FUN_08022c14 */

void FUN_08022c14(int param_1)

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
  uVar1 = FUN_08020ad8(local_30 + 2,0x10);
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
LAB_08022d98:
    uVar4 = uVar4 + 4;
LAB_08022db0:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022db6:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022dbc:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022dc2:
    uVar4 = uVar4 + 1 & 0xff;
LAB_08022dc8:
    if ((&DAT_20004b67)[uVar5 * 0x1c0] == '\0') {
      return;
    }
    if ((&DAT_20004b4e)[uVar5 * 0x1c0] != '\0') {
      return;
    }
    for (uVar2 = 0; uVar2 < (byte)(&DAT_20005e71)[uVar5 * 0x110 + uVar4 * 0x11];
        uVar2 = uVar2 + 1 & 0xff) {
      (&DAT_20004a95)[uVar2 + uVar5 * 0x1c0] = local_30[uVar2 + 2];
    }
    (&DAT_20004aad)[uVar5 * 0x1c0] = (&DAT_20005e71)[uVar5 * 0x110 + uVar4 * 0x11];
    (&DAT_20004b4e)[uVar5 * 0x1c0] = local_1f;
    *(undefined1 *)(uVar5 * 0x110 + uVar4 * 0x11 + 0x20005e72) = 1;
    return;
  }
  if (uVar2 < 0xd9) {
    if (uVar2 == 0xd0) goto LAB_08022db0;
    if (0xd0 < uVar2) {
      uVar3 = uVar2 - 0xd1;
      bVar7 = 6 < uVar3;
      goto switchD_08022cb8_default;
    }
    if (uVar2 == 0xae) goto LAB_08022dbc;
    if (uVar2 < 0xaf) {
      if (uVar2 == 1) {
        uVar6 = 1;
        uVar2 = 0;
        do {
          if (5 < uVar2) {
code_r0x08022cf2:
            DAT_20004b67 = uVar6;
            DAT_20004d27 = uVar6;
            FUN_08023532(&local_44,0x14);
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
            uVar1 = FUN_08020ad8(&local_42,0x10);
            local_32 = (undefined1)((ushort)uVar1 >> 8);
            local_31 = (undefined1)uVar1;
            FUN_0801a880(&local_44);
            return;
          }
          if (local_30[uVar2 + 2] != (&DAT_08027d42)[uVar2]) {
            uVar6 = 0;
            goto code_r0x08022cf2;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while( true );
      }
      if (uVar2 == 0xa0) goto LAB_08022ef2;
      if (uVar2 == 0xa4) goto LAB_08022dc8;
      bVar7 = uVar2 == 0xa8;
LAB_08022c8e:
      if (!bVar7) {
        return;
      }
      goto LAB_08022dc2;
    }
    if (uVar2 != 0xaf) {
      if (uVar2 == 0xb5) goto LAB_08022db6;
      bVar7 = uVar2 == 0xb6;
      if (!bVar7) goto LAB_08022c8e;
      goto LAB_08022ee6;
    }
  }
  else {
    uVar3 = uVar2 - 0xd9;
    bVar7 = true;
    switch(uVar2) {
    case 0xd9:
      goto LAB_08022ec8;
    case 0xdb:
      goto LAB_08022ec2;
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
      goto LAB_08022d98;
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
switchD_08022cb8_default:
      if (bVar7) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x08022ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_08022caa + (uint)(byte)(&UNK_08022caa)[uVar3] * 2))();
      return;
    }
    uVar4 = uVar4 + 1;
LAB_08022ec2:
    uVar4 = uVar4 + 1;
LAB_08022ec8:
    uVar4 = uVar4 + 5;
LAB_08022ee6:
    uVar4 = uVar4 + 1 & 0xff;
  }
  uVar4 = uVar4 + 1 & 0xff;
LAB_08022ef2:
  if (((&DAT_20004b67)[uVar5 * 0x1c0] != '\0') && ((&DAT_20004b4e)[uVar5 * 0x1c0] == '\0')) {
    (&DAT_20004aad)[uVar5 * 0x1c0] = 0;
    (&DAT_20004b4e)[uVar5 * 0x1c0] = local_1f;
    (&DAT_20006092)[uVar5 * 0xff + uVar4 * 0x11] = 1;
  }
  return;
}



/* ENTRY 0x08022f5a : FUN_08022f5a */

void FUN_08022f5a(byte param_1,undefined1 param_2,undefined1 param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3;
  }
  local_18 = (param_1 & 1) - 0x1d;
  local_17 = param_2;
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  return;
}



/* ENTRY 0x08022fbc : FUN_08022fbc */

void FUN_08022fbc(byte param_1,int param_2,undefined1 *param_3)

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
  
  FUN_08023532(&local_28,0x14);
  local_28 = 0xaa;
  local_27 = 0x55;
  local_17 = (undefined1)param_2;
  if (param_2 != 0xba) {
    if (param_2 < 0xbb) {
      if (param_2 == 0xa1) {
        for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1 & 0xff) {
          auStack_26[uVar2] = param_3[uVar2];
        }
        local_19 = 1;
        local_18 = (param_1 & 1) - 0x1d;
        local_17 = 0xa1;
        uVar1 = FUN_08020ad8(auStack_26,0x10);
        local_16 = (undefined1)((ushort)uVar1 >> 8);
        local_15 = (undefined1)uVar1;
        FUN_0801a8d8(&local_28);
        for (uVar2 = 0; uVar2 < 0xd; uVar2 = uVar2 + 1 & 0xff) {
          auStack_26[uVar2] = param_3[uVar2 + 0xb];
        }
        local_19 = 2;
        local_18 = (param_1 & 1) - 0x1d;
        local_17 = 0xa1;
        uVar1 = FUN_08020ad8(auStack_26,0x10);
        local_16 = (undefined1)((ushort)uVar1 >> 8);
        local_15 = (undefined1)uVar1;
        FUN_0801a8d8(&local_28);
        for (uVar2 = 0; uVar2 < 0xc; uVar2 = uVar2 + 1 & 0xff) {
          auStack_26[uVar2] = param_3[uVar2 + 0x18];
        }
        local_19 = 3;
        local_18 = (param_1 & 1) - 0x1d;
        local_17 = 0xa1;
        uVar1 = FUN_08020ad8(auStack_26,0x10);
        local_16 = (undefined1)((ushort)uVar1 >> 8);
        local_15 = (undefined1)uVar1;
        FUN_0801a8d8(&local_28);
        return;
      }
      if (param_2 != 0xb1) {
        bVar3 = param_2 == 0xb8;
LAB_08022fea:
        if (!bVar3) {
          return;
        }
        bVar3 = false;
        while (!bVar3) {
          auStack_26[0] = *param_3;
          bVar3 = true;
        }
        local_18 = (param_1 & 1) - 0x1d;
        uVar1 = FUN_08020ad8(auStack_26,0x10);
        local_16 = (undefined1)((ushort)uVar1 >> 8);
        local_15 = (undefined1)uVar1;
        FUN_0801a8d8(&local_28);
        return;
      }
    }
    else if ((param_2 != 0xbc) && (bVar3 = param_2 == 0xbe, !bVar3)) goto LAB_08022fea;
  }
  for (uVar2 = 0; uVar2 < 6; uVar2 = uVar2 + 1 & 0xff) {
    auStack_26[uVar2] = param_3[uVar2];
  }
  local_18 = (param_1 & 1) - 0x1d;
  uVar1 = FUN_08020ad8(auStack_26,0x10);
  local_16 = (undefined1)((ushort)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  FUN_0801a8d8(&local_28);
  return;
}



/* ENTRY 0x0802317e : FUN_0802317e */

void FUN_0802317e(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_2c [16];
  byte local_1c;
  byte local_1b;
  char local_1a;
  char local_19;
  
  uVar4 = 0;
  bVar5 = false;
  for (uVar2 = 0; uVar2 < 0x14; uVar2 = uVar2 + 1 & 0xff) {
    local_2c[uVar2] = *(undefined1 *)(param_1 + uVar2);
  }
  uVar1 = FUN_08020ad8(local_2c + 2,0x10);
  local_1a = (char)((ushort)uVar1 >> 8);
  local_19 = (char)uVar1;
  if (local_1a != *(char *)(param_1 + 0x12)) {
    return;
  }
  if ((char)uVar1 != *(char *)(param_1 + 0x13)) {
    return;
  }
  uVar2 = local_1c - 3 & 1;
  if (local_1b == 0xb9) goto LAB_0802322e;
  if (local_1b < 0xba) {
    if (local_1b == 0xb3) {
LAB_08023220:
      uVar4 = 2;
      bVar5 = true;
      goto code_r0x08023260;
    }
    if (local_1b < 0xb4) {
      if (local_1b == 0xa1) goto LAB_08023220;
      if (local_1b != 0xb1) {
        if (local_1b != 0xb2) goto code_r0x08023260;
        goto LAB_0802322e;
      }
    }
    else {
      if (local_1b == 0xb7) goto LAB_08023246;
      if (local_1b != 0xb8) goto code_r0x08023260;
    }
  }
  else {
    if (local_1b == 0xbe) {
LAB_08023246:
      uVar4 = 1;
      bVar5 = true;
      goto code_r0x08023260;
    }
    if (0xbe < local_1b) {
      if (local_1b != 0xbf) {
        if (local_1b == 0xff) {
          uVar4 = 1;
          bVar5 = DAT_2000314d == '\x01';
        }
        goto code_r0x08023260;
      }
LAB_0802322e:
      uVar4 = 6;
      bVar5 = true;
      goto code_r0x08023260;
    }
    if (local_1b != 0xba) {
      if (local_1b == 0xbb) goto LAB_0802322e;
      if (local_1b != 0xbc) goto code_r0x08023260;
    }
  }
  uVar4 = 0;
  bVar5 = true;
code_r0x08023260:
  if (((bVar5) && ((&DAT_20004b67)[uVar2 * 0x1c0] != '\0')) &&
     ((&DAT_20004b4e)[uVar2 * 0x1c0] == '\0')) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1 & 0xff) {
      (&DAT_20004a95)[uVar3 + uVar2 * 0x1c0] = local_2c[uVar3 + 2];
    }
    (&DAT_20004aad)[uVar2 * 0x1c0] = (char)uVar4;
    (&DAT_20004b4e)[uVar2 * 0x1c0] = local_1b;
  }
  return;
}



/* ENTRY 0x080232d0 : FUN_080232d0 */

undefined8 FUN_080232d0(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x080232d8 : FUN_080232d8 */

undefined8 FUN_080232d8(uint param_1,uint param_2,uint param_3,uint param_4)

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



/* ENTRY 0x080233aa : FUN_080233aa */

undefined8 FUN_080233aa(void)

{
  return 0;
}



/* ENTRY 0x080233be : FUN_080233be */

int FUN_080233be(int param_1,int param_2,int param_3,uint param_4)

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
  iVar2 = FUN_080232d0(param_1,param_2,param_3,param_4);
  if (((uVar3 ^ uVar1) & 0x40000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* ENTRY 0x08023406 : FUN_08023406 */

int FUN_08023406(uint *param_1)

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



/* ENTRY 0x08023444 : FUN_08023444 */

undefined8 FUN_08023444(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* ENTRY 0x080234ce : FUN_080234ce */

undefined8 FUN_080234ce(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* ENTRY 0x08023532 : FUN_08023532 */

undefined4 * FUN_08023532(undefined4 *param_1,uint param_2)

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



/* ENTRY 0x08023536 : FUN_08023536 */

undefined4 * FUN_08023536(undefined4 *param_1,uint param_2,undefined4 param_3)

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



/* ENTRY 0x08023580 : FUN_08023580 */

void FUN_08023580(void)

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



/* ENTRY 0x08023596 : FUN_08023596 */

void FUN_08023596(void)

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



/* ENTRY 0x080235ca : FUN_080235ca */

/* WARNING: Removing unreachable block (ram,0x0800814a) */
/* WARNING: Removing unreachable block (ram,0x0800815c) */

void FUN_080235ca(undefined4 param_1,undefined4 param_2)

{
  FUN_080081e8();
  FUN_080235dc(param_1,param_2);
  FUN_08008400();
  FUN_08008138();
  FUN_080081ec();
                    /* WARNING: Could not recover jumptable at 0x08008162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x800816c)(&DAT_08028298,0x20000000,0x9e4);
  return;
}



/* ENTRY 0x080235dc : FUN_080235dc */

void FUN_080235dc(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 0x080235ea : FUN_080235ea */

void FUN_080235ea(uint *param_1,uint param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 0x080235f0 : FUN_080235f0 */

void FUN_080235f0(int param_1,int param_2)

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



/* ENTRY 0x08023602 : FUN_08023602 */

void FUN_08023602(int param_1,int param_2)

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



/* ENTRY 0x08023614 : FUN_08023614 */

void FUN_08023614(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)&DAT_40012400) {
    FUN_08023f30(0x200);
    FUN_08023f30(0x200,0);
    return;
  }
  if (param_1 == &DAT_40012800) {
    FUN_08023f30(0x400);
    FUN_08023f30(0x400,0);
    return;
  }
  if (param_1 != (undefined4 *)&UNK_40013c00) {
    return;
  }
  FUN_08023f30(0x8000);
  FUN_08023f30(0x8000,0);
  return;
}



/* ENTRY 0x08023678 : FUN_08023678 */

void FUN_08023678(int param_1,int param_2)

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



/* ENTRY 0x0802368a : FUN_0802368a */

void FUN_0802368a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff8fff;
  return;
}



/* ENTRY 0x08023696 : FUN_08023696 */

bool FUN_08023696(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}



/* ENTRY 0x080236a6 : FUN_080236a6 */

bool FUN_080236a6(uint *param_1,uint param_2)

{
  return (*param_1 & param_2 >> 8) != 0 && (param_1[1] & param_2 & 0xff) != 0;
}



/* ENTRY 0x080236c2 : FUN_080236c2 */

bool FUN_080236c2(int param_1)

{
  return (*(uint *)(param_1 + 8) & 8) != 0;
}



/* ENTRY 0x080236d2 : FUN_080236d2 */

void FUN_080236d2(int param_1,byte param_2,int param_3)

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



/* ENTRY 0x080236e4 : FUN_080236e4 */

void FUN_080236e4(int param_1,uint *param_2)

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



/* ENTRY 0x08023730 : FUN_08023730 */

void FUN_08023730(int param_1,uint param_2,int param_3,int param_4)

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



/* ENTRY 0x08023792 : FUN_08023792 */

void FUN_08023792(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff | (param_2 + -1) * 0x100000;
  return;
}



/* ENTRY 0x080237a2 : FUN_080237a2 */

void FUN_080237a2(int param_1,uint param_2,uint param_3,int param_4)

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



/* ENTRY 0x08023834 : FUN_08023834 */

void FUN_08023834(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}



/* ENTRY 0x0802383e : FUN_0802383e */

void FUN_0802383e(int param_1,int param_2)

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



/* ENTRY 0x08023850 : FUN_08023850 */

void FUN_08023850(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}



/* ENTRY 0x0802385a : FUN_0802385a */

void FUN_0802385a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* ENTRY 0x0802386c : FUN_0802386c */

void FUN_0802386c(int param_1)

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



/* ENTRY 0x08023884 : FUN_08023884 */

void FUN_08023884(void)

{
  FUN_08023f48(1);
  FUN_08023f48(0);
  return;
}



/* ENTRY 0x08023896 : FUN_08023896 */

undefined2 FUN_08023896(int param_1)

{
  return *(undefined2 *)(&DAT_40006c00 + param_1);
}



/* ENTRY 0x080238a2 : FUN_080238a2 */

void FUN_080238a2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_40006c00 + param_1) = param_2;
  return;
}



/* ENTRY 0x080238b0 : FUN_080238b0 */

void FUN_080238b0(uint param_1)

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



/* ENTRY 0x080238c8 : FUN_080238c8 */

void FUN_080238c8(uint *param_1,int param_2)

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



/* ENTRY 0x080238dc : FUN_080238dc */

void FUN_080238dc(uint *param_1)

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



/* ENTRY 0x080239e0 : FUN_080239e0 */

uint FUN_080239e0(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0x080239e8 : FUN_080239e8 */

bool FUN_080239e8(uint param_1)

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



/* ENTRY 0x08023a08 : FUN_08023a08 */

void FUN_08023a08(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0x08023a18 : FUN_08023a18 */

void FUN_08023a18(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0x08023a6a : FUN_08023a6a */

void FUN_08023a6a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 0x08023a6e : FUN_08023a6e */

void FUN_08023a6e(undefined4 *param_1)

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



/* ENTRY 0x08023a88 : FUN_08023a88 */

void FUN_08023a88(undefined4 param_1)

{
  DAT_4002200c = param_1;
  return;
}



/* ENTRY 0x08023a94 : FUN_08023a94 */

void FUN_08023a94(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08023c1c(0xb0000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 2;
  DAT_40022014 = param_1;
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x40;
  FUN_08023c1c(0xb0000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffd;
  return;
}



/* ENTRY 0x08023ad4 : FUN_08023ad4 */

bool FUN_08023ad4(void)

{
  uint uVar1;
  
  uVar1 = DAT_4002201c;
  return (uVar1 & 2) != 0;
}



/* ENTRY 0x08023ae8 : FUN_08023ae8 */

void FUN_08023ae8(void)

{
  uint uVar1;
  
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 0x80;
  return;
}



/* ENTRY 0x08023af8 : FUN_08023af8 */

void FUN_08023af8(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08023c1c(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = param_2;
  FUN_08023c1c(0x2000);
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08023b30 : FUN_08023b30 */

void FUN_08023b30(undefined2 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_08023c1c(0x2000);
  if (iVar2 != 4) {
    return;
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_08023c1c(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_08023c1c(0x2000);
  }
  uVar1 = DAT_40022010;
  DAT_40022010 = uVar1 & 0x1ffe;
  return;
}



/* ENTRY 0x08023b78 : FUN_08023b78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023b78(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08023c1c(0xb0000);
  if (iVar1 != 4) {
    return;
  }
  DAT_40022008 = 0x45670123;
  DAT_40022008 = 0xcdef89ab;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x20;
  uVar2 = DAT_40022010;
  DAT_40022010 = uVar2 | 0x40;
  iVar1 = FUN_08023c1c(0xb0000);
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
    iVar1 = FUN_08023c1c(0xb0000);
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



/* ENTRY 0x08023c04 : FUN_08023c04 */

void FUN_08023c04(void)

{
  DAT_40022004 = 0x45670123;
  DAT_40022004 = 0xcdef89ab;
  return;
}



/* ENTRY 0x08023c1c : FUN_08023c1c */

int FUN_08023c1c(int param_1)

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



/* ENTRY 0x08023c80 : FUN_08023c80 */

void FUN_08023c80(uint *param_1,ushort *param_2)

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



/* ENTRY 0x08023d2e : FUN_08023d2e */

undefined8 FUN_08023d2e(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x18) = param_2 | 0x10000;
  return CONCAT44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
}



/* ENTRY 0x08023d40 : FUN_08023d40 */

void FUN_08023d40(uint param_1,int param_2)

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



/* ENTRY 0x08023dac : FUN_08023dac */

bool FUN_08023dac(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x08023dba : FUN_08023dba */

void FUN_08023dba(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08023dbe : FUN_08023dbe */

void FUN_08023dbe(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 0x08023dc2 : FUN_08023dc2 */

void FUN_08023dc2(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)((int)param_1 + 3) = 4;
  return;
}



/* ENTRY 0x08023dd4 : FUN_08023dd4 */

void FUN_08023dd4(void)

{
  DAT_40003000 = 0xcccc;
  return;
}



/* ENTRY 0x08023de4 : FUN_08023de4 */

void FUN_08023de4(void)

{
  DAT_40003000 = 0xaaaa;
  return;
}



/* ENTRY 0x08023df4 : FUN_08023df4 */

void FUN_08023df4(undefined4 param_1)

{
  DAT_40003004 = param_1;
  return;
}



/* ENTRY 0x08023e00 : FUN_08023e00 */

void FUN_08023e00(undefined4 param_1)

{
  DAT_40003008 = param_1;
  return;
}



/* ENTRY 0x08023e0c : FUN_08023e0c */

void FUN_08023e0c(undefined4 param_1)

{
  DAT_40003000 = param_1;
  return;
}



/* ENTRY 0x08023e18 : FUN_08023e18 */

void FUN_08023e18(byte *param_1)

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



/* ENTRY 0x08023e88 : FUN_08023e88 */

void FUN_08023e88(uint param_1)

{
  DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 0x08023e9c : FUN_08023e9c */

void FUN_08023e9c(uint param_1,uint param_2)

{
  DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 0x08023eb0 : FUN_08023eb0 */

void FUN_08023eb0(undefined4 param_1)

{
  DAT_420e0020 = param_1;
  return;
}



/* ENTRY 0x08023ebc : FUN_08023ebc */

void FUN_08023ebc(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021004;
  DAT_40021004 = param_1 | uVar1 & 0xffff3fff;
  return;
}



/* ENTRY 0x08023ed0 : FUN_08023ed0 */

void FUN_08023ed0(uint param_1,int param_2)

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



/* ENTRY 0x08023ee8 : FUN_08023ee8 */

void FUN_08023ee8(uint param_1,int param_2)

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



/* ENTRY 0x08023f00 : FUN_08023f00 */

void FUN_08023f00(uint param_1,int param_2)

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



/* ENTRY 0x08023f18 : FUN_08023f18 */

void FUN_08023f18(uint param_1,int param_2)

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



/* ENTRY 0x08023f30 : FUN_08023f30 */

void FUN_08023f30(uint param_1,int param_2)

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



/* ENTRY 0x08023f48 : FUN_08023f48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023f48(undefined4 param_1)

{
  _DAT_42420440 = param_1;
  return;
}



/* ENTRY 0x08023f54 : FUN_08023f54 */

void FUN_08023f54(uint *param_1)

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



/* ENTRY 0x08024004 : FUN_08024004 */

bool FUN_08024004(uint param_1)

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



/* ENTRY 0x08024034 : FUN_08024034 */

void FUN_08024034(int param_1)

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



/* ENTRY 0x08024058 : FUN_08024058 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024058(undefined4 param_1)

{
  _DAT_4242043c = param_1;
  return;
}



/* ENTRY 0x08024064 : FUN_08024064 */

void FUN_08024064(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_40021020;
  DAT_40021020 = param_1 | uVar1;
  return;
}



/* ENTRY 0x08024074 : FUN_08024074 */

void FUN_08024074(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & ~param_1;
  return;
}



/* ENTRY 0x08024084 : FUN_08024084 */

void FUN_08024084(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 | 0x10;
  return;
}



/* ENTRY 0x08024094 : FUN_08024094 */

void FUN_08024094(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xffef;
  return;
}



/* ENTRY 0x080240a4 : FUN_080240a4 */

undefined4 FUN_080240a4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_4000281c;
  uVar1 = DAT_40002818;
  return CONCAT22(uVar1,uVar2);
}



/* ENTRY 0x080240bc : FUN_080240bc */

bool FUN_080240bc(ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = DAT_40002804;
  uVar1 = DAT_40002800;
  return (uVar1 & param_1) != 0 && (uVar2 & param_1 & 0xff) != 0;
}



/* ENTRY 0x080240dc : FUN_080240dc */

void FUN_080240dc(ushort param_1,int param_2)

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



/* ENTRY 0x080240f4 : FUN_080240f4 */

void FUN_080240f4(undefined4 param_1)

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



/* ENTRY 0x0802411c : FUN_0802411c */

void FUN_0802411c(undefined4 param_1)

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



/* ENTRY 0x08024144 : FUN_08024144 */

void FUN_08024144(int param_1)

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



/* ENTRY 0x08024168 : FUN_08024168 */

void FUN_08024168(void)

{
  ushort uVar1;
  
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 0x20) == 0);
  return;
}



/* ENTRY 0x08024178 : FUN_08024178 */

void FUN_08024178(void)

{
  ushort uVar1;
  
  uVar1 = DAT_40002804;
  DAT_40002804 = uVar1 & 0xfff7;
  do {
    uVar1 = DAT_40002804;
  } while ((uVar1 & 8) == 0);
  return;
}



/* ENTRY 0x08024190 : FUN_08024190 */

void FUN_08024190(ushort *param_1,int param_2)

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



/* ENTRY 0x080241a2 : FUN_080241a2 */

bool FUN_080241a2(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 0x080241b0 : FUN_080241b0 */

undefined2 FUN_080241b0(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



/* ENTRY 0x080241b4 : FUN_080241b4 */

void FUN_080241b4(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



/* ENTRY 0x080241b8 : FUN_080241b8 */

void FUN_080241b8(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0x0802420c : FUN_0802420c */

void FUN_0802420c(undefined *param_1,ushort param_2,short param_3,short param_4)

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
      goto LAB_08024278;
    }
  }
  param_2 = *(ushort *)(param_1 + 0x20) & 0xffdf | param_2 << 4;
LAB_08024278:
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xcff | param_4 << 0xc | param_3 << 8;
  *(ushort *)(param_1 + 0x20) = param_2 | 0x10;
  return;
}



/* ENTRY 0x08024284 : FUN_08024284 */

void FUN_08024284(ushort *param_1,int param_2)

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



/* ENTRY 0x08024296 : FUN_08024296 */

void FUN_08024296(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 0x44) =
       param_2[6] | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return;
}



/* ENTRY 0x080242ba : FUN_080242ba */

void FUN_080242ba(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = (ushort)(param_3 << (param_2 & 0xff)) | *(ushort *)(param_1 + 0x20);
  return;
}



/* ENTRY 0x080242d4 : FUN_080242d4 */

void FUN_080242d4(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x080242da : FUN_080242da */

void FUN_080242da(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 0x080242e0 : FUN_080242e0 */

void FUN_080242e0(ushort *param_1,int param_2)

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



/* ENTRY 0x080242f2 : FUN_080242f2 */

void FUN_080242f2(int param_1,int param_2)

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



/* ENTRY 0x08024308 : FUN_08024308 */

void FUN_08024308(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08024318 : FUN_08024318 */

void FUN_08024318(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x48) = param_2 | param_3;
  return;
}



/* ENTRY 0x08024320 : FUN_08024320 */

void FUN_08024320(undefined *param_1)

{
  if (param_1 == &DAT_40012c00) {
    FUN_08023f30(0x800);
    FUN_08023f30(0x800,0);
    return;
  }
  if (param_1 == (undefined *)0x40000000) {
    FUN_08023f00(1);
    FUN_08023f00(1,0);
    return;
  }
  if (param_1 == &DAT_40000400) {
    FUN_08023f00(2,1);
    FUN_08023f00(2,0);
    return;
  }
  if (param_1 == &DAT_40000800) {
    FUN_08023f00(4,1);
    FUN_08023f00(4,0);
    return;
  }
  if (param_1 == &DAT_40000c00) {
    FUN_08023f00(8,1);
    FUN_08023f00(8,0);
    return;
  }
  if (param_1 == &UNK_40001000) {
    FUN_08023f00(0x10,1);
    FUN_08023f00(0x10,0);
    return;
  }
  if (param_1 == &UNK_40001400) {
    FUN_08023f00(0x20,1);
    FUN_08023f00(0x20,0);
    return;
  }
  if (param_1 == &DAT_40013400) {
    FUN_08023f30(0x2000);
    FUN_08023f30(0x2000,0);
    return;
  }
  if (param_1 == &UNK_40014c00) {
    FUN_08023f30(0x80000);
    FUN_08023f30(0x80000,0);
    return;
  }
  if (param_1 == &UNK_40015000) {
    FUN_08023f30(0x100000);
    FUN_08023f30(0x100000,0);
    return;
  }
  if (param_1 == &UNK_40015400) {
    FUN_08023f30(0x200000);
    FUN_08023f30(0x200000,0);
    return;
  }
  if (param_1 == &UNK_40001800) {
    FUN_08023f00(0x40,1);
    FUN_08023f00(0x40,0);
    return;
  }
  if (param_1 == &UNK_40001c00) {
    FUN_08023f00(0x80,1);
    FUN_08023f00(0x80,0);
    return;
  }
  if (param_1 == &UNK_40002000) {
    FUN_08023f00(0x100);
    FUN_08023f00(0x100,0);
    return;
  }
  if (param_1 == &UNK_40014000) {
    FUN_08023f30(0x10000);
    FUN_08023f30(0x10000,0);
    return;
  }
  if (param_1 == &UNK_40014400) {
    FUN_08023f30(0x20000);
    FUN_08023f30(0x20000,0);
    return;
  }
  if (param_1 != &UNK_40014800) {
    return;
  }
  FUN_08023f30(0x40000);
  FUN_08023f30(0x40000,0);
  return;
}



/* ENTRY 0x08024530 : FUN_08024530 */

void FUN_08024530(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 0x08024534 : FUN_08024534 */

undefined2 FUN_08024534(int param_1)

{
  return *(undefined2 *)(param_1 + 0x34);
}



/* ENTRY 0x08024538 : FUN_08024538 */

bool FUN_08024538(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 0x10) & param_2) != 0 && (*(ushort *)(param_1 + 0xc) & param_2) != 0
  ;
}



/* ENTRY 0x08024550 : FUN_08024550 */

void FUN_08024550(undefined *param_1,short *param_2)

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
  FUN_0802420c(param_1);
  sVar3 = param_2[3];
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf3ff;
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | sVar3 << 8;
  return;
}



/* ENTRY 0x080246fc : FUN_080246fc */

void FUN_080246fc(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* ENTRY 0x0802470c : FUN_0802470c */

void FUN_0802470c(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x0802471c : FUN_0802471c */

void FUN_0802471c(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  return;
}



/* ENTRY 0x08024726 : FUN_08024726 */

void FUN_08024726(undefined *param_1,ushort *param_2)

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
    if (!bVar5) goto LAB_0802479a;
  }
  uVar2 = (uVar2 & 0xfff7 | param_2[5]) & 0xfffb | param_2[2];
  uVar3 = uVar3 & 0xfcff | param_2[6] | param_2[7];
LAB_0802479a:
  *(ushort *)(param_1 + 4) = uVar3;
  *(ushort *)(param_1 + 0x18) = uVar1 | *(ushort *)(param_1 + 0x18) & 0xff8c;
  *(ushort *)(param_1 + 0x34) = param_2[3];
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



/* ENTRY 0x080247aa : FUN_080247aa */

void FUN_080247aa(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x18) = param_2 | *(ushort *)(param_1 + 0x18) & 0xfff7;
  return;
}



/* ENTRY 0x080247b6 : FUN_080247b6 */

void FUN_080247b6(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024838 : FUN_08024838 */

void FUN_08024838(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024846 : FUN_08024846 */

void FUN_08024846(undefined *param_1,ushort *param_2)

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



/* ENTRY 0x080248c6 : FUN_080248c6 */

void FUN_080248c6(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1c) = param_2 | *(ushort *)(param_1 + 0x1c) & 0xfff7;
  return;
}



/* ENTRY 0x080248d2 : FUN_080248d2 */

void FUN_080248d2(undefined *param_1,short *param_2)

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



/* ENTRY 0x08024936 : FUN_08024936 */

void FUN_08024936(int param_1,short param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | param_2 << 8;
  return;
}



/* ENTRY 0x08024944 : FUN_08024944 */

void FUN_08024944(undefined2 *param_1)

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



/* ENTRY 0x08024958 : FUN_08024958 */

void FUN_08024958(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  return;
}



/* ENTRY 0x0802495e : FUN_0802495e */

void FUN_0802495e(int param_1,int param_2)

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



/* ENTRY 0x08024970 : FUN_08024970 */

void FUN_08024970(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8) & 0xff8f;
  return;
}



/* ENTRY 0x0802497c : FUN_0802497c */

void FUN_0802497c(int param_1,uint param_2,uint param_3)

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



/* ENTRY 0x080249d0 : FUN_080249d0 */

void FUN_080249d0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xff8f;
  *(ushort *)(param_1 + 4) = param_2 | *(ushort *)(param_1 + 4);
  return;
}



/* ENTRY 0x080249e0 : FUN_080249e0 */

void FUN_080249e0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfff8;
  *(ushort *)(param_1 + 8) = param_2 | *(ushort *)(param_1 + 8);
  return;
}



/* ENTRY 0x080249f0 : FUN_080249f0 */

void FUN_080249f0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x24) = param_2;
  return;
}



/* ENTRY 0x080249f4 : FUN_080249f4 */

void FUN_080249f4(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *puVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if (param_1 == (ushort *)&DAT_40012c00 || param_1 == (ushort *)&DAT_40013400) {
LAB_08024a2a:
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&UNK_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&UNK_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08024a2a;
    puVar2 = (ushort *)0x0;
    if (param_1 != (ushort *)&DAT_40000800) {
      puVar2 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000800 || puVar2 == (ushort *)0xc00) goto LAB_08024a2a;
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
    if (!bVar3) goto LAB_08024a80;
  }
  param_1[0x18] = (ushort)(byte)param_2[4];
LAB_08024a80:
  param_1[10] = 1;
  return;
}



/* ENTRY 0x08024a90 : FUN_08024a90 */

void FUN_08024a90(undefined2 *param_1)

{
  param_1[2] = 0xffff;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* ENTRY 0x08024aa2 : FUN_08024aa2 */

void FUN_08024aa2(ushort *param_1,int param_2)

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



/* ENTRY 0x08024ab4 : FUN_08024ab4 */

void FUN_08024ab4(ushort *param_1,int param_2)

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



/* ENTRY 0x08024ac6 : FUN_08024ac6 */

void FUN_08024ac6(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 0x08024ad4 : FUN_08024ad4 */

void FUN_08024ad4(int param_1,int param_2)

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



/* ENTRY 0x08024ae6 : FUN_08024ae6 */

void FUN_08024ae6(int param_1,ushort param_2,int param_3)

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



/* ENTRY 0x08024af6 : FUN_08024af6 */

bool FUN_08024af6(ushort *param_1,uint param_2)

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



/* ENTRY 0x08024b42 : FUN_08024b42 */

void FUN_08024b42(int param_1,uint param_2,int param_3)

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



/* ENTRY 0x08024b74 : FUN_08024b74 */

void FUN_08024b74(undefined2 *param_1,int *param_2)

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
  FUN_08023f54(auStack_20);
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


