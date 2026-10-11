/* Automatic Ghidra pseudocode, NOT original source; verify with bytes and execution. */

/* ENTRY 08000130 : FUN_08000130 */

void FUN_08000130(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_08000138();
  FUN_080001ac();
  iVar1 = DAT_08000164;
  puVar3 = (undefined4 *)((int)&DAT_08000164 + DAT_08000164);
  iVar2 = DAT_08000164 + 0x8000163;
  if (puVar3 == (undefined4 *)((int)&DAT_08000164 + DAT_08000168)) {
    FUN_080001ac();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x8000170);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x08000162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar3,*(undefined4 *)((int)&DAT_08000168 + iVar1),*(undefined4 *)(iVar1 + 0x800016c))
  ;
  return;
}



/* ENTRY 08000138 : FUN_08000138 */

void FUN_08000138(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_08000164;
  puVar3 = (undefined4 *)((int)&DAT_08000164 + DAT_08000164);
  iVar2 = DAT_08000164 + 0x8000163;
  if (puVar3 == (undefined4 *)((int)&DAT_08000164 + DAT_08000168)) {
    FUN_080001ac();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x8000170);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x08000162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar3,*(undefined4 *)((int)&DAT_08000168 + iVar1),*(undefined4 *)(iVar1 + 0x800016c))
  ;
  return;
}



/* ENTRY 080001a4 : FUN_080001a4 */

undefined8 FUN_080001a4(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* ENTRY 080001a8 : FUN_080001a8 */

void FUN_080001a8(void)

{
  return;
}



/* ENTRY 080001ac : FUN_080001ac */

void FUN_080001ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_080003d0();
  FUN_080001a4(uVar1,param_3);
  FUN_08002b2c();
  uVar2 = FUN_0800041a();
  FUN_080001a8();
  FUN_08000434((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  (*DAT_080001f4)();
  (*DAT_080001f8)();
  return;
}



/* ENTRY 080001cc : FUN_080001cc */

void FUN_080001cc(void)

{
  (*DAT_080001f4)();
  (*DAT_080001f8)();
  return;
}



/* ENTRY 080001d4 : FUN_080001d4 */

void FUN_080001d4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001d6 : FUN_080001d6 */

void FUN_080001d6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001d8 : FUN_080001d8 */

void FUN_080001d8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001da : FUN_080001da */

void FUN_080001da(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001dc : FUN_080001dc */

void FUN_080001dc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001de : FUN_080001de */

void FUN_080001de(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001e0 : FUN_080001e0 */

void FUN_080001e0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001e2 : FUN_080001e2 */

void FUN_080001e2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001e4 : FUN_080001e4 */

void FUN_080001e4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001e6 : FUN_080001e6 */

void FUN_080001e6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080001e8 : FUN_080001e8 */

undefined8 FUN_080001e8(void)

{
  return CONCAT44(DAT_08000200,DAT_080001fc);
}



/* ENTRY 0800020c : FUN_0800020c */

int FUN_0800020c(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = param_1;
  while (((uint)puVar3 & 3) != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    cVar1 = *(char *)puVar3;
    puVar3 = puVar2;
    if (cVar1 == '\0') {
      return (int)puVar2 - (int)(char *)((int)param_1 + 1);
    }
  }
  do {
    uVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar5 = uVar5 + 0xfefefeff & ~uVar5;
  } while ((uVar5 & 0x80808080) == 0);
  iVar4 = (int)puVar3 - (int)(char *)((int)param_1 + 1);
  if ((uVar5 & 0x80) == 0) {
    if ((uVar5 & 0x8080) == 0) {
      if ((uVar5 & 0x808080) != 0) {
        return iVar4 + -1;
      }
    }
    else {
      iVar4 = iVar4 + -2;
    }
    return iVar4;
  }
  return iVar4 + -3;
}



/* ENTRY 0800024a : FUN_0800024a */

undefined8 FUN_0800024a(uint *param_1,uint *param_2,uint param_3,uint param_4)

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
      bVar6 = *(byte *)param_2;
      puVar4 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)(uint *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar4;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar4 + 1);
        bVar6 = *(byte *)puVar4;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar4 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_1 + 2);
        *(byte *)(uint *)((int)param_1 + 1) = (byte)uVar9;
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
          uVar7 = *(undefined2 *)puVar4;
        }
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 1);
          param_3 = (uint)*(byte *)puVar2;
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
    bVar6 = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
    in_r12 = *pbVar5;
  }
  puVar2 = puVar4;
  if (bVar13) {
    puVar2 = (uint *)((int)puVar4 + 1);
    param_3 = (uint)*(byte *)puVar4;
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



/* ENTRY 080002d4 : FUN_080002d4 */

undefined8 FUN_080002d4(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = param_3 - 0x20;
  if (0x1f < param_3) {
    do {
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      bVar10 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
      *param_1 = *param_2;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      param_4 = param_2[4];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      param_2 = param_2 + 8;
      param_1[4] = param_4;
      param_1[5] = uVar6;
      param_1[6] = uVar7;
      param_1[7] = uVar8;
      param_1 = param_1 + 8;
    } while (bVar10);
  }
  if ((uVar4 & 0x10) != 0) {
    param_4 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    param_4 = *param_2;
    uVar6 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if ((uVar4 & 4) != 0) {
    puVar3 = param_2 + 1;
    param_4 = *param_2;
    puVar1 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar5 = (undefined2)param_4;
  if ((uVar4 & 3) != 0) {
    bVar10 = (uVar4 & 2) != 0;
    uVar4 = uVar4 << 0x1f;
    bVar9 = (int)uVar4 < 0;
    puVar2 = puVar3;
    if (bVar10) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      uVar5 = *(undefined2 *)puVar3;
    }
    puVar3 = puVar2;
    if (bVar9) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      uVar4 = (uint)*(byte *)puVar2;
    }
    puVar2 = puVar1;
    if (bVar10) {
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = uVar5;
    }
    puVar1 = puVar2;
    if (bVar9) {
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)uVar4;
    }
    return CONCAT44(puVar3,puVar1);
  }
  return CONCAT44(puVar3,puVar1);
}



/* ENTRY 08000338 : FUN_08000338 */

undefined4 * FUN_08000338(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar2 = 0;
    }
    puVar1 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    return puVar1;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar1 = param_1;
    if (iVar5 != 2) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    param_1 = puVar1;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    param_2 = param_2 - iVar5;
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
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
  uVar4 = param_2 << 0x1e;
  puVar1 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar4 != 0) {
    puVar3 = puVar1;
    if ((int)uVar4 < 0) {
      puVar3 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    puVar1 = puVar3;
    if ((uVar4 & 0x40000000) != 0) {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined *)puVar3 = 0;
    }
    return puVar1;
  }
  return puVar1;
}



/* ENTRY 0800037c : FUN_0800037c */

undefined4 * FUN_0800037c(undefined4 *param_1,uint param_2)

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
      *(undefined *)puVar1 = 0;
    }
    return puVar2;
  }
  return puVar2;
}



/* ENTRY 080003d0 : FUN_080003d0 */

void FUN_080003d0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  uint *puVar3;
  
  uVar1 = FUN_0800042c();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = in_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_080001e8();
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



/* ENTRY 0800041a : FUN_0800041a */

void FUN_0800041a(undefined4 param_1,undefined4 param_2)

{
  FUN_080001a8();
  FUN_08000434(param_1,param_2);
  (*DAT_080001f4)();
  (*DAT_080001f8)();
  return;
}



/* ENTRY 0800042c : FUN_0800042c */

undefined4 FUN_0800042c(void)

{
  return DAT_08000430;
}



/* ENTRY 08000434 : FUN_08000434 */

void FUN_08000434(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08000442 : FUN_08000442 */

void FUN_08000442(undefined *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar1 = 1;
  do {
    param_1[uVar2] = (char)uVar1;
    *(char *)(param_2 + uVar1) = (char)uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    if ((uVar1 & 0x80) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1b;
    }
    uVar1 = (uVar3 ^ uVar1 << 1 ^ uVar1) & 0xff;
  } while (uVar1 != 1);
  param_1[0xff] = *param_1;
  return;
}



/* ENTRY 08000478 : FUN_08000478 */

void FUN_08000478(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = 0;
  do {
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(*DAT_080004c4 + (0xff - (uint)*(byte *)(*DAT_080004c0 + uVar1)));
    }
    uVar3 = uVar2 ^ 99;
    for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
      uVar2 = (uVar2 & 0x7f) << 1 | (int)uVar2 >> 7;
      uVar3 = uVar3 ^ uVar2;
    }
    *(char *)(param_1 + uVar1) = (char)uVar3;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 0);
  return;
}



/* ENTRY 080004c8 : FUN_080004c8 */

void FUN_080004c8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  do {
    if (*(byte *)(param_1 + uVar2) == uVar1) {
      *(char *)(param_2 + uVar1) = (char)uVar2;
      uVar2 = 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while ((uVar2 != 0) || (uVar1 = uVar1 + 1 & 0xff, uVar1 != 0));
  return;
}



/* ENTRY 080004f2 : FUN_080004f2 */

void FUN_080004f2(undefined *param_1,undefined *param_2,char param_3)

{
  do {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != '\0');
  return;
}



/* ENTRY 08000506 : FUN_08000506 */

void FUN_08000506(undefined *param_1)

{
  undefined uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  return;
}



/* ENTRY 08000518 : FUN_08000518 */

void FUN_08000518(void)

{
  FUN_08000584(0x20);
  FUN_080005bc(DAT_08000530,0);
  *DAT_08000534 = 0;
  return;
}



/* ENTRY 08000538 : FUN_08000538 */

void FUN_08000538(void)

{
  FUN_08000584(0x2000);
  FUN_080005bc(DAT_08000554,0);
  *DAT_08000558 = 0;
  return;
}



/* ENTRY 0800055c : FUN_0800055c */

void FUN_0800055c(void)

{
  int iVar1;
  
  iVar1 = FUN_08000728(DAT_08000578);
  if (iVar1 != 0) {
    *DAT_0800057c = 0;
    *DAT_08000580 = 0;
    FUN_080005a0(DAT_08000578);
  }
  return;
}



/* ENTRY 08000584 : FUN_08000584 */

void FUN_08000584(uint param_1)

{
  if ((param_1 & 0x10000000) == 0) {
    *(uint *)(DAT_0800059c + 4) = param_1;
  }
  else {
    *DAT_08000598 = param_1;
  }
  return;
}



/* ENTRY 080005a0 : FUN_080005a0 */

void FUN_080005a0(uint param_1)

{
  if ((param_1 & 0x10000000) == 0) {
    *(uint *)(DAT_080005b8 + 4) = param_1;
  }
  else {
    *DAT_080005b4 = param_1;
  }
  return;
}



/* ENTRY 080005bc : FUN_080005bc */

void FUN_080005bc(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}



/* ENTRY 080005d4 : FUN_080005d4 */

void FUN_080005d4(uint *param_1)

{
  *param_1 = *param_1 & 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 == DAT_08000718) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf;
  }
  else if (param_1 == DAT_08000718 + 5) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf0;
  }
  else if (param_1 == DAT_08000718 + 10) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf00;
  }
  else if (param_1 == DAT_08000718 + 0xf) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf000;
  }
  else if (param_1 == DAT_08000718 + 0x14) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf0000;
  }
  else if (param_1 == DAT_08000718 + 0x19) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf00000;
  }
  else if (param_1 == DAT_08000718 + 0x1e) {
    DAT_08000718[-1] = DAT_08000718[-1] | 0xf000000;
  }
  else if (param_1 == DAT_0800071c) {
    param_1[-1] = param_1[-1] | 0xf;
  }
  else if (param_1 == DAT_0800071c + 5) {
    DAT_0800071c[-1] = DAT_0800071c[-1] | 0xf0;
  }
  else if (param_1 == DAT_0800071c + 10) {
    DAT_0800071c[-1] = DAT_0800071c[-1] | 0xf00;
  }
  else if (param_1 == DAT_0800071c + 0xf) {
    DAT_0800071c[-1] = DAT_0800071c[-1] | 0xf000;
  }
  else if (param_1 == DAT_0800071c + 0x14) {
    DAT_0800071c[-1] = DAT_0800071c[-1] | 0xf0000;
  }
  return;
}



/* ENTRY 08000720 : FUN_08000720 */

uint FUN_08000720(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 08000728 : FUN_08000728 */

bool FUN_08000728(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0x10000000) == 0) {
    uVar1 = *DAT_08000750;
  }
  else {
    uVar1 = *DAT_0800074c;
  }
  return (uVar1 & param_1) != 0;
}



/* ENTRY 08000754 : FUN_08000754 */

void FUN_08000754(uint *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = *param_1 & ~param_2;
  }
  else {
    *param_1 = *param_1 | param_2;
  }
  return;
}



/* ENTRY 08000766 : FUN_08000766 */

void FUN_08000766(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 080007a4 : FUN_080007a4 */

void FUN_080007a4(undefined4 param_1)

{
  *(undefined4 *)(DAT_080007ac + 0xc) = param_1;
  return;
}



/* ENTRY 080007b0 : FUN_080007b0 */

int FUN_080007b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_080009a0(0xb0000);
  iVar1 = DAT_080007f8;
  if (iVar2 == 4) {
    *(uint *)(DAT_080007f8 + 0x10) = *(uint *)(DAT_080007f8 + 0x10) | 2;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x40;
    iVar2 = FUN_080009a0(0xb0000);
    *(uint *)(DAT_080007f8 + 0x10) = *(uint *)(DAT_080007f8 + 0x10) & 0x1ffd;
  }
  return iVar2;
}



/* ENTRY 080007fc : FUN_080007fc */

undefined4 FUN_080007fc(void)

{
  undefined4 uVar1;
  
  if ((*(uint *)(DAT_0800082c + 0xc) & 1) == 0) {
    if ((*(uint *)(DAT_0800082c + 0xc) & 4) == 0) {
      if ((*(uint *)(DAT_0800082c + 0xc) & 0x10) == 0) {
        uVar1 = 4;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 08000830 : FUN_08000830 */

void FUN_08000830(void)

{
  *(uint *)(DAT_08000840 + 0x10) = *(uint *)(DAT_08000840 + 0x10) | 0x80;
  return;
}



/* ENTRY 08000844 : FUN_08000844 */

void FUN_08000844(char *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint local_28;
  char local_24 [16];
  
  local_28 = 0;
  for (uVar2 = 0; (*param_1 != '\0' && (uVar2 < 0x100)); uVar2 = uVar2 + 1) {
    *(char *)(DAT_080008fc + uVar2) = *param_1;
    param_1 = param_1 + 1;
  }
  *(undefined *)(DAT_080008fc + uVar2) = 0;
  for (uVar2 = 0; (param_1 = param_1 + 1, *param_1 != ' ' && (uVar2 < 0x10)); uVar2 = uVar2 + 1) {
    local_24[uVar2] = *param_1;
  }
  local_24[uVar2] = '\0';
  FUN_0800167c(local_24,&local_28);
  FUN_08000338(DAT_08000900,0x10);
  FUN_080026ec();
  puVar1 = DAT_0800090c;
  if (((uint)*DAT_08000904 * 0x800 - DAT_08000908) + 0x7ffffff < local_28) {
    *DAT_0800090c = 6;
    puVar1[1] = 0x18;
    puVar1[2] = 0x18;
    puVar1[3] = 0;
    FUN_0800156c(puVar1);
  }
  else {
    *DAT_08000910 = local_28;
    *DAT_08000914 = 0;
    FUN_08002868(DAT_08000908,local_28);
    *DAT_08000918 = DAT_08000908;
  }
  return;
}



/* ENTRY 0800091c : FUN_0800091c */

int FUN_0800091c(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_080009a0(0x2000);
  if (iVar1 == 4) {
    *(uint *)(DAT_08000984 + 0x10) = *(uint *)(DAT_08000984 + 0x10) | 1;
    *param_1 = (short)param_2;
    iVar1 = FUN_080009a0(0x2000);
    if (iVar1 == 4) {
      param_1[1] = (short)((uint)param_2 >> 0x10);
      iVar1 = FUN_080009a0(0x2000);
      *(uint *)(DAT_08000984 + 0x10) = *(uint *)(DAT_08000984 + 0x10) & 0x1ffe;
    }
    else {
      *(uint *)(DAT_08000984 + 0x10) = *(uint *)(DAT_08000984 + 0x10) & 0x1ffe;
    }
  }
  return iVar1;
}



/* ENTRY 08000988 : FUN_08000988 */

void FUN_08000988(void)

{
  int iVar1;
  
  iVar1 = DAT_08000998;
  *(undefined4 *)(DAT_08000998 + 4) = DAT_08000994;
  *(undefined4 *)(iVar1 + 4) = DAT_0800099c;
  return;
}



/* ENTRY 080009a0 : FUN_080009a0 */

int FUN_080009a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_080007fc();
  for (; (iVar1 == 1 && (param_1 != 0)); param_1 = param_1 + -1) {
    iVar1 = FUN_080007fc();
  }
  if (param_1 == 0) {
    iVar1 = 5;
  }
  return iVar1;
}



/* ENTRY 080009c6 : FUN_080009c6 */

uint FUN_080009c6(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = *(byte *)((int)param_2 + 3) & 0xf;
  if ((*(byte *)((int)param_2 + 3) & 0x10) != 0) {
    uVar4 = *(byte *)(param_2 + 1) | uVar4;
  }
  if (*(char *)param_2 != '\0') {
    uVar3 = *param_1;
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
      uVar2 = 1 << (uVar1 & 0xff);
      if ((*param_2 & uVar2) == uVar2) {
        uVar3 = uVar4 << (uVar1 << 2 & 0xff) | uVar3 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = 1 << (uVar1 & 0xff);
        }
        else if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = 1 << (uVar1 & 0xff);
        }
      }
    }
    *param_1 = uVar3;
  }
  if (0xff < *param_2) {
    uVar3 = param_1[1];
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
      uVar2 = 1 << (uVar1 + 8 & 0xff);
      if ((*param_2 & uVar2) == uVar2) {
        uVar3 = uVar4 << (uVar1 << 2 & 0xff) | uVar3 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = 1 << (uVar1 + 8 & 0xff);
        }
        if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = 1 << (uVar1 + 8 & 0xff);
        }
      }
    }
    param_1[1] = uVar3;
  }
  return uVar1;
}



/* ENTRY 08000adc : FUN_08000adc */

void FUN_08000adc(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = *(uint *)(DAT_08000b68 + 0x1c);
  }
  else {
    uVar1 = *(uint *)(DAT_08000b68 + 4);
  }
  if ((param_1 & 0x300000) == 0x300000) {
    uVar1 = uVar1 & 0xf0ffffff;
    *(uint *)(DAT_08000b68 + 4) = *(uint *)(DAT_08000b68 + 4) & 0xf0ffffff;
  }
  else if ((param_1 & 0x100000) == 0x100000) {
    uVar1 = uVar1 & ~(3 << ((param_1 << 0xc) >> 0x1c)) | 0xf000000;
  }
  else {
    uVar1 = uVar1 & ~((param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4)) | 0xf000000;
  }
  if (param_2 != 0) {
    uVar1 = uVar1 | (param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4);
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    *(uint *)(DAT_08000b68 + 0x1c) = uVar1;
  }
  else {
    *(uint *)(DAT_08000b68 + 4) = uVar1;
  }
  return;
}



/* ENTRY 08000b6c : FUN_08000b6c */

bool FUN_08000b6c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 08000b7e : FUN_08000b7e */

void FUN_08000b7e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ENTRY 08000b82 : FUN_08000b82 */

void FUN_08000b82(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ENTRY 08000b88 : FUN_08000b88 */

uint FUN_08000b88(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = FUN_08002d74();
  *DAT_08000bd4 = sVar1;
  uVar2 = FUN_08000b6c(DAT_08000bd8,0x40);
  iVar3 = FUN_08000b6c(DAT_08000bd8,0x80);
  iVar4 = FUN_08000b6c(DAT_08000bd8,0x100);
  uVar2 = uVar2 | (uint)(iVar3 << 0x19) >> 0x18 | (uint)(iVar4 << 0x1a) >> 0x18;
  if ((*DAT_08000bd4 < DAT_08000bdc) && (*DAT_08000be0 != '\0')) {
    uVar2 = 7;
  }
  return uVar2;
}



/* ENTRY 08000be4 : FUN_08000be4 */

void FUN_08000be4(void)

{
  *DAT_08000bf0 = 0xcccc;
  return;
}



/* ENTRY 08000bf4 : FUN_08000bf4 */

void FUN_08000bf4(undefined4 param_1,undefined4 param_2)

{
  FUN_08000c40(0x5555);
  FUN_08000c28(param_1);
  FUN_08000c34(param_2);
  FUN_08000c18();
  FUN_08000be4();
  return;
}



/* ENTRY 08000c18 : FUN_08000c18 */

void FUN_08000c18(void)

{
  *DAT_08000c24 = 0xaaaa;
  return;
}



/* ENTRY 08000c28 : FUN_08000c28 */

void FUN_08000c28(undefined4 param_1)

{
  *(undefined4 *)(DAT_08000c30 + 4) = param_1;
  return;
}



/* ENTRY 08000c34 : FUN_08000c34 */

void FUN_08000c34(undefined4 param_1)

{
  *(undefined4 *)(DAT_08000c3c + 8) = param_1;
  return;
}



/* ENTRY 08000c40 : FUN_08000c40 */

void FUN_08000c40(undefined4 param_1)

{
  *DAT_08000c48 = param_1;
  return;
}



/* ENTRY 08000c4c : FUN_08000c4c */

void FUN_08000c4c(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = '\r';
  FUN_080022d4(param_1,param_2 + 0xe0,0x10);
  param_2 = param_2 + 0xd0;
  do {
    FUN_08000e5c(param_1);
    FUN_08000e90(param_1,param_2,0x10);
    param_2 = param_2 + -0x10;
    FUN_08000e3a(param_1);
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  FUN_08000e5c(param_1);
  FUN_08000e90(param_1,param_2,0x10);
  return;
}



/* ENTRY 08000c96 : FUN_08000c96 */

void FUN_08000c96(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  
  bVar1 = param_1[1];
  bVar2 = param_1[2];
  bVar3 = param_1[3];
  bVar4 = *param_1;
  bVar5 = param_1[2];
  bVar6 = param_1[3];
  bVar7 = *param_1;
  bVar8 = param_1[1];
  bVar9 = param_1[3];
  bVar10 = *param_1;
  bVar11 = param_1[1];
  bVar12 = param_1[2];
  if ((*param_1 & 0x80) == 0) {
    bVar29 = 0;
  }
  else {
    bVar29 = 0x1b;
  }
  *param_1 = bVar29 ^ *param_1 << 1;
  if ((param_1[1] & 0x80) == 0) {
    bVar29 = 0;
  }
  else {
    bVar29 = 0x1b;
  }
  param_1[1] = bVar29 ^ param_1[1] << 1;
  if ((param_1[2] & 0x80) == 0) {
    bVar29 = 0;
  }
  else {
    bVar29 = 0x1b;
  }
  param_1[2] = bVar29 ^ param_1[2] << 1;
  if ((param_1[3] & 0x80) == 0) {
    bVar29 = 0;
  }
  else {
    bVar29 = 0x1b;
  }
  param_1[3] = bVar29 ^ param_1[3] << 1;
  bVar29 = *param_1;
  bVar13 = param_1[1];
  bVar14 = param_1[1];
  bVar15 = param_1[2];
  bVar16 = param_1[2];
  bVar17 = param_1[3];
  bVar18 = *param_1;
  bVar19 = param_1[3];
  if ((*param_1 & 0x80) == 0) {
    bVar30 = 0;
  }
  else {
    bVar30 = 0x1b;
  }
  *param_1 = bVar30 ^ *param_1 << 1;
  if ((param_1[1] & 0x80) == 0) {
    bVar30 = 0;
  }
  else {
    bVar30 = 0x1b;
  }
  param_1[1] = bVar30 ^ param_1[1] << 1;
  if ((param_1[2] & 0x80) == 0) {
    bVar30 = 0;
  }
  else {
    bVar30 = 0x1b;
  }
  param_1[2] = bVar30 ^ param_1[2] << 1;
  if ((param_1[3] & 0x80) == 0) {
    bVar30 = 0;
  }
  else {
    bVar30 = 0x1b;
  }
  param_1[3] = bVar30 ^ param_1[3] << 1;
  bVar30 = *param_1;
  bVar20 = param_1[2];
  bVar21 = param_1[1];
  bVar22 = param_1[3];
  bVar23 = *param_1;
  bVar24 = param_1[2];
  bVar25 = param_1[1];
  bVar26 = param_1[3];
  if ((*param_1 & 0x80) == 0) {
    bVar31 = 0;
  }
  else {
    bVar31 = 0x1b;
  }
  *param_1 = bVar31 ^ *param_1 << 1;
  if ((param_1[1] & 0x80) == 0) {
    bVar31 = 0;
  }
  else {
    bVar31 = 0x1b;
  }
  param_1[1] = bVar31 ^ param_1[1] << 1;
  if ((param_1[2] & 0x80) == 0) {
    bVar31 = 0;
  }
  else {
    bVar31 = 0x1b;
  }
  param_1[2] = bVar31 ^ param_1[2] << 1;
  if ((param_1[3] & 0x80) == 0) {
    bVar31 = 0;
  }
  else {
    bVar31 = 0x1b;
  }
  param_1[3] = bVar31 ^ param_1[3] << 1;
  *param_1 = param_1[1] ^ param_1[2] ^ param_1[3] ^ *param_1;
  bVar31 = *param_1;
  bVar27 = *param_1;
  bVar28 = *param_1;
  *param_1 = bVar1 ^ bVar2 ^ bVar3 ^ bVar29 ^ bVar13 ^ bVar30 ^ bVar20 ^ *param_1;
  param_1[1] = bVar4 ^ bVar5 ^ bVar6 ^ bVar14 ^ bVar15 ^ bVar21 ^ bVar22 ^ bVar31;
  param_1[2] = bVar7 ^ bVar8 ^ bVar9 ^ bVar16 ^ bVar17 ^ bVar23 ^ bVar24 ^ bVar27;
  param_1[3] = bVar10 ^ bVar11 ^ bVar12 ^ bVar18 ^ bVar19 ^ bVar25 ^ bVar26 ^ bVar28;
  return;
}



/* ENTRY 08000e3a : FUN_08000e3a */

void FUN_08000e3a(int param_1)

{
  FUN_08000c96(param_1);
  FUN_08000c96(param_1 + 4);
  FUN_08000c96(param_1 + 8);
  FUN_08000c96(param_1 + 0xc);
  return;
}



/* ENTRY 08000e5c : FUN_08000e5c */

void FUN_08000e5c(int param_1)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 9);
  *(undefined *)(param_1 + 9) = *(undefined *)(param_1 + 5);
  *(undefined *)(param_1 + 5) = *(undefined *)(param_1 + 1);
  *(undefined *)(param_1 + 1) = uVar1;
  uVar1 = *(undefined *)(param_1 + 2);
  *(undefined *)(param_1 + 2) = *(undefined *)(param_1 + 10);
  *(undefined *)(param_1 + 10) = uVar1;
  uVar1 = *(undefined *)(param_1 + 6);
  *(undefined *)(param_1 + 6) = *(undefined *)(param_1 + 0xe);
  *(undefined *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined *)(param_1 + 3);
  *(undefined *)(param_1 + 3) = *(undefined *)(param_1 + 7);
  *(undefined *)(param_1 + 7) = *(undefined *)(param_1 + 0xb);
  *(undefined *)(param_1 + 0xb) = *(undefined *)(param_1 + 0xf);
  *(undefined *)(param_1 + 0xf) = uVar1;
  return;
}



/* ENTRY 08000e90 : FUN_08000e90 */

void FUN_08000e90(byte *param_1,byte *param_2,char param_3)

{
  do {
    *param_1 = *(byte *)(DAT_08000eb0 + (uint)*param_1) ^ *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != '\0');
  return;
}



/* ENTRY 08000eb4 : FUN_08000eb4 */

void FUN_08000eb4(undefined *param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined3 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = DAT_08000f90;
  cVar1 = ' ';
  puVar6 = DAT_08000f94;
  do {
    puVar3 = param_1;
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    cVar1 = cVar1 + -1;
    param_1 = puVar3 + 1;
  } while (cVar1 != '\0');
  local_14 = CONCAT13(*puVar3,*(undefined3 *)(puVar3 + -3));
  puVar4 = (undefined3 *)(puVar3 + -3);
  for (uVar5 = 0x20; uVar5 < 0xf0; uVar5 = uVar5 + 4 & 0xff) {
    if (uVar5 + ((int)uVar5 >> 5) * -0x20 == 0) {
      FUN_08000506(&local_14);
      FUN_08001780(&local_14,4);
      FUN_080022d4(&local_14,&local_18,4);
      if ((local_18 & 0x80) == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = 0x1b;
      }
      local_18 = CONCAT31(local_18._1_3_,bVar2 ^ (char)local_18 << 1);
    }
    else if (uVar5 + ((int)uVar5 >> 5) * -0x20 == 0x10) {
      FUN_08001780(&local_14,4);
    }
    FUN_080022d4(&local_14,(undefined *)((int)puVar4 + -0x1c),4);
    *(undefined *)(undefined3 *)((int)puVar4 + 4) = (undefined)local_14;
    *(undefined *)((int)puVar4 + 5) = local_14._1_1_;
    *(undefined *)(puVar4 + 2) = local_14._2_1_;
    *(undefined *)((int)puVar4 + 7) = local_14._3_1_;
    puVar4 = (undefined3 *)((int)puVar4 + 4);
  }
  return;
}



/* ENTRY 08000f98 : FUN_08000f98 */

void FUN_08000f98(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  FUN_0800127c(0x15,1);
  local_8[0] = 0x10031000;
  FUN_080009c6(DAT_08000fe8,local_8);
  FUN_08000b82(DAT_08000fe8,0x1000);
  local_8[0] = 0x28032000;
  FUN_080009c6(DAT_08000fec,local_8);
  return;
}



/* ENTRY 08000ff0 : FUN_08000ff0 */

void FUN_08000ff0(void)

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
  undefined local_6;
  undefined local_5;
  
  FUN_0800127c(0x1000);
  FUN_0800127c(4,1);
  local_8 = 0xa0;
  local_6 = 3;
  local_5 = 0x18;
  FUN_080009c6(DAT_080010a8,&local_8);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_080009c6(DAT_080010a8,&local_8);
  local_8 = 0x10;
  local_6 = 3;
  local_5 = 0x10;
  FUN_080009c6(DAT_080010a8,&local_8);
  local_1c = 0;
  local_1a = 0x104;
  local_18 = 0;
  local_16 = 2;
  local_14 = 1;
  local_12 = 0x200;
  local_10 = 0x18;
  local_e = 0;
  local_c = 7;
  FUN_08001530(DAT_080010ac,&local_1c);
  FUN_080012bc(DAT_080010ac,1);
  *(undefined4 *)(DAT_080010a8 + 0x10) = 0x10;
  return;
}



/* ENTRY 080010b0 : FUN_080010b0 */

undefined FUN_080010b0(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = -1;
  do {
    iVar2 = FUN_080012d4(DAT_08001118,2);
    if (iVar2 != 0) {
      *(undefined2 *)(DAT_08001118 + 0xc) = param_1;
      cVar1 = -1;
      do {
        iVar2 = FUN_080012d4(DAT_08001118,1);
        if (iVar2 != 0) {
          return (char)*(undefined2 *)(DAT_08001118 + 0xc);
        }
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
      *DAT_08001114 = *DAT_08001114 + 1;
      return 0;
    }
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  *DAT_08001114 = *DAT_08001114 + 1;
  return 0;
}



/* ENTRY 0800111c : FUN_0800111c */

bool FUN_0800111c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_08000ff0();
  FUN_08002d60(20000);
  *DAT_08001168 = 0x10;
  FUN_080010b0(0x6b);
  FUN_080010b0(0);
  puVar1 = DAT_08001168;
  DAT_08001168[-1] = 0x10;
  *puVar1 = 0x10;
  FUN_080010b0(0xf5);
  iVar2 = FUN_080010b0(0xff);
  DAT_08001168[-1] = 0x10;
  return iVar2 != 0;
}



/* ENTRY 0800116c : FUN_0800116c */

void FUN_0800116c(void)

{
  FUN_08001208(0x8000000,0);
  FUN_080011f4(0x500);
  return;
}



/* ENTRY 08001184 : FUN_08001184 */

void FUN_08001184(byte *param_1)

{
  uint uVar1;
  
  if (param_1[3] == 0) {
    *(int *)(DAT_080011f0 + ((int)(uint)*param_1 >> 5) * 4) = 1 << (*param_1 & 0x1f);
  }
  else {
    uVar1 = 0x700 - (*DAT_080011e8 & 0x700) >> 8;
    *(char *)(DAT_080011ec + (uint)*param_1) =
         (char)(((uint)param_1[1] << (4 - uVar1 & 0xff) | (uint)param_1[2] & 0xfU >> (uVar1 & 0xff))
               << 4);
    *(int *)(((int)(uint)*param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (*param_1 & 0x1f);
  }
  return;
}



/* ENTRY 080011f4 : FUN_080011f4 */

void FUN_080011f4(uint param_1)

{
  *DAT_08001204 = DAT_08001200 | param_1;
  return;
}



/* ENTRY 08001208 : FUN_08001208 */

void FUN_08001208(uint param_1,uint param_2)

{
  *DAT_08001218 = DAT_08001214 & param_2 | param_1;
  return;
}



/* ENTRY 0800121c : FUN_0800121c */

void FUN_0800121c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08001238 + 0x14) = *(uint *)(DAT_08001238 + 0x14) & ~param_1;
  }
  else {
    *(uint *)(DAT_08001238 + 0x14) = *(uint *)(DAT_08001238 + 0x14) | param_1;
  }
  return;
}



/* ENTRY 0800123c : FUN_0800123c */

void FUN_0800123c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08001258 + 0x1c) = *(uint *)(DAT_08001258 + 0x1c) & ~param_1;
  }
  else {
    *(uint *)(DAT_08001258 + 0x1c) = *(uint *)(DAT_08001258 + 0x1c) | param_1;
  }
  return;
}



/* ENTRY 0800125c : FUN_0800125c */

void FUN_0800125c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08001278 + 0x10) = *(uint *)(DAT_08001278 + 0x10) & ~param_1;
  }
  else {
    *(uint *)(DAT_08001278 + 0x10) = *(uint *)(DAT_08001278 + 0x10) | param_1;
  }
  return;
}



/* ENTRY 0800127c : FUN_0800127c */

void FUN_0800127c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08001298 + 0x18) = *(uint *)(DAT_08001298 + 0x18) & ~param_1;
  }
  else {
    *(uint *)(DAT_08001298 + 0x18) = *(uint *)(DAT_08001298 + 0x18) | param_1;
  }
  return;
}



/* ENTRY 0800129c : FUN_0800129c */

void FUN_0800129c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_080012b8 + 0xc) = *(uint *)(DAT_080012b8 + 0xc) & ~param_1;
  }
  else {
    *(uint *)(DAT_080012b8 + 0xc) = *(uint *)(DAT_080012b8 + 0xc) | param_1;
  }
  return;
}



/* ENTRY 080012bc : FUN_080012bc */

void FUN_080012bc(ushort *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xffbf;
  }
  else {
    *param_1 = *param_1 | 0x40;
  }
  return;
}



/* ENTRY 080012d4 : FUN_080012d4 */

bool FUN_080012d4(int param_1,ushort param_2)

{
  return (*(ushort *)(param_1 + 8) & param_2) != 0;
}



/* ENTRY 080012e6 : FUN_080012e6 */

undefined4 FUN_080012e6(undefined4 *param_1)

{
  return *param_1;
}



/* ENTRY 080012ec : FUN_080012ec */

void FUN_080012ec(void)

{
  FUN_0800159c();
  return;
}



/* ENTRY 080012f4 : FUN_080012f4 */

void FUN_080012f4(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 080012fa : FUN_080012fa */

void FUN_080012fa(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



/* ENTRY 08001380 : FUN_08001380 */

void FUN_08001380(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(DAT_08001440 + 4) & 0xc;
  if (uVar1 == 0) {
    *param_1 = DAT_08001444;
  }
  else if (uVar1 == 4) {
    *param_1 = DAT_08001444;
  }
  else if (uVar1 == 8) {
    iVar2 = ((*(uint *)(DAT_08001440 + 4) & 0x3c0000) >> 0x12) + 2;
    if ((*(uint *)(DAT_08001440 + 4) & 0x10000) == 0) {
      *param_1 = iVar2 * DAT_08001448;
    }
    else if ((*(uint *)(DAT_08001440 + 4) & 0x20000) == 0) {
      *param_1 = iVar2 * DAT_08001444;
    }
    else {
      *param_1 = iVar2 * DAT_08001448;
    }
  }
  else {
    *param_1 = DAT_08001444;
  }
  param_1[1] = *param_1 >> *(sbyte *)(DAT_0800144c + ((*(uint *)(DAT_08001440 + 4) & 0xf0) >> 4));
  param_1[2] = param_1[1] >> *(sbyte *)(DAT_0800144c + ((*(uint *)(DAT_08001440 + 4) & 0x700) >> 8))
  ;
  param_1[3] = param_1[1] >>
               *(sbyte *)(DAT_0800144c + ((*(uint *)(DAT_08001440 + 4) & 0x3800) >> 0xb));
  param_1[4] = param_1[3] /
               (uint)*(byte *)(DAT_08001450 + ((*(uint *)(DAT_08001440 + 4) & 0xc000) >> 0xe));
  return;
}



/* ENTRY 08001454 : FUN_08001454 */

undefined4
FUN_08001454(char *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,
            undefined2 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 == '\x01') {
    *DAT_0800152c = CONCAT11(param_1[0x10],param_1[0x11]);
    iVar4 = 0x10;
  }
  else {
    if (*param_1 != '\x02') {
      if (*param_1 == '\x04') {
        *DAT_0800152c = CONCAT11(param_1[0x10],param_1[0x11]);
        return 0;
      }
      if (*param_1 == '\x03') {
        return 0;
      }
      if (*param_1 != '\x18') {
        return 0xffffffff;
      }
      if (param_1[1] == '\x18') {
        return 0;
      }
      return 0xfffffffa;
    }
    iVar4 = 0x400;
  }
  if (param_5 < (int)(uint)(byte)param_1[1]) {
    uVar2 = 0xfffffffe;
  }
  else {
    bVar1 = param_1[1];
    if (param_2 < iVar4 + 4) {
      uVar2 = 2;
    }
    else {
      uVar3 = FUN_080022ee(param_1 + 2,iVar4);
      if (CONCAT11(param_1[iVar4 + 2],param_1[iVar4 + 3]) == uVar3) {
        if ((int)(uint)bVar1 < param_5) {
          uVar2 = 0xfffffff7;
        }
        else {
          FUN_0800024a(param_3,param_1 + 2,iVar4);
          *param_4 = iVar4;
          *param_6 = (short)uVar3;
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0xfffffffb;
      }
    }
  }
  return uVar2;
}



/* ENTRY 08001530 : FUN_08001530 */

void FUN_08001530(ushort *param_1,ushort *param_2)

{
  *param_1 = *param_1 & 0x3040 |
             *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6]
             | param_2[7];
  param_1[0xe] = param_1[0xe] & 0xf7ff;
  param_1[8] = param_2[8];
  return;
}



/* ENTRY 0800156c : FUN_0800156c */

void FUN_0800156c(char *param_1)

{
  int iVar1;
  char local_20 [20];
  
  FUN_0800037c(local_20,0x14);
  iVar1 = 0;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    local_20[iVar1] = *param_1;
    iVar1 = iVar1 + 1;
  }
  FUN_080021dc(local_20,0x14);
  return;
}



/* ENTRY 0800159c : FUN_0800159c */

void FUN_0800159c(void)

{
  uint *puVar1;
  int local_8;
  
  local_8 = 0;
  *DAT_08001674 = *DAT_08001674 | 1;
  puVar1 = DAT_08001674;
  do {
    local_8 = local_8 + 1;
    if ((*DAT_08001674 & 2) != 0) break;
  } while (local_8 != 0xffff);
  if ((*DAT_08001674 & 2) != 0) {
    DAT_08001674[1] = DAT_08001674[1];
    puVar1[1] = puVar1[1] | 0x300000;
    puVar1 = DAT_08001678;
    *DAT_08001678 = *DAT_08001678 | 0x10;
    *puVar1 = *puVar1 & 0xfffffffc;
    *puVar1 = *puVar1 | 2;
    puVar1 = DAT_08001674;
    DAT_08001674[1] = DAT_08001674[1];
    puVar1[1] = puVar1[1];
    puVar1[1] = puVar1[1] | 0x400;
    *puVar1 = *puVar1 | 0x1000000;
    puVar1 = DAT_08001674;
    do {
    } while ((*DAT_08001674 & 0x2000000) == 0);
    DAT_08001674[1] = DAT_08001674[1] & 0xfffffffc;
    puVar1[1] = puVar1[1] | 2;
    do {
    } while ((DAT_08001674[1] & 0xc) != 8);
  }
  return;
}



/* ENTRY 0800167c : FUN_0800167c */

undefined8 FUN_0800167c(char *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  iVar3 = 0;
  if ((*param_1 == '0') && ((param_1[1] == 'x' || (param_1[1] == 'X')))) {
    if (param_1[2] == '\0') {
      uVar4 = 0;
    }
    else {
      for (uVar2 = 2; uVar2 < 0xb; uVar2 = uVar2 + 1) {
        if (param_1[uVar2] == '\0') {
          *param_2 = iVar3;
          uVar4 = 1;
          break;
        }
        if ((((byte)param_1[uVar2] < 0x41) || (0x46 < (byte)param_1[uVar2])) &&
           ((((byte)param_1[uVar2] < 0x61 || (0x66 < (byte)param_1[uVar2])) &&
            (((byte)param_1[uVar2] < 0x30 || (0x39 < (byte)param_1[uVar2])))))) {
          uVar4 = 0;
          break;
        }
        if (((byte)param_1[uVar2] < 0x30) || (0x39 < (byte)param_1[uVar2])) {
          if (((byte)param_1[uVar2] < 0x41) || (0x46 < (byte)param_1[uVar2])) {
            iVar1 = (byte)param_1[uVar2] - 0x57;
          }
          else {
            iVar1 = (byte)param_1[uVar2] - 0x37;
          }
        }
        else {
          iVar1 = (byte)param_1[uVar2] - 0x30;
        }
        iVar3 = iVar1 + iVar3 * 0x10;
      }
      if (10 < uVar2) {
        uVar4 = 0;
      }
    }
  }
  else {
    for (uVar2 = 0; uVar2 < 0xb; uVar2 = uVar2 + 1) {
      if (param_1[uVar2] == '\0') {
        *param_2 = iVar3;
        uVar4 = 1;
        break;
      }
      if (((param_1[uVar2] == 'k') || (param_1[uVar2] == 'K')) && (uVar2 != 0)) {
        *param_2 = iVar3 << 10;
        uVar4 = 1;
        break;
      }
      if (((param_1[uVar2] == 'm') || (param_1[uVar2] == 'M')) && (uVar2 != 0)) {
        *param_2 = iVar3 << 0x14;
        uVar4 = 1;
        break;
      }
      if (((byte)param_1[uVar2] < 0x30) || (0x39 < (byte)param_1[uVar2])) {
        uVar4 = 0;
        break;
      }
      iVar3 = ((byte)param_1[uVar2] - 0x30) + iVar3 * 10;
    }
    if (10 < uVar2) {
      uVar4 = 0;
    }
  }
  return CONCAT44(uVar2,uVar4);
}



/* ENTRY 08001780 : FUN_08001780 */

void FUN_08001780(byte *param_1,char param_2)

{
  do {
    *param_1 = *(byte *)(*DAT_08001798 + (uint)*param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != '\0');
  return;
}



/* ENTRY 0800179c : FUN_0800179c */

void FUN_0800179c(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_080017ec;
  *DAT_080017ec = *DAT_080017ec | 1;
  puVar2 = DAT_080017ec;
  DAT_080017ec[1] = puVar1[1] & DAT_080017f0;
  puVar1 = DAT_080017ec;
  *DAT_080017ec = *puVar2 & DAT_080017f4;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xff80ffff;
  puVar1[2] = 0x9f0000;
  FUN_080012ec();
  *DAT_080017f8 = 0x8000000;
  return;
}



/* ENTRY 080017fc : FUN_080017fc */

void FUN_080017fc(void)

{
  int iVar1;
  
  iVar1 = FUN_08001bc4(0x40000000);
  if (iVar1 != 0) {
    FUN_080012fa(0x40000000);
    *DAT_08001980 = *DAT_08001980 + 1;
    FUN_080029d8();
    if (*DAT_08001980 % 100 == 0) {
      FUN_08002a84();
      if (*DAT_08001984 == '\0') {
        if (*DAT_08001990 == '\x01') {
          FUN_08000b7e(DAT_0800198c,0x100);
        }
      }
      else {
        if (*DAT_08001988 < 2000) {
          iVar1 = FUN_08000b88();
          if (iVar1 == 7) {
            *DAT_08001988 = *DAT_08001988 + 1;
          }
          else {
            *DAT_08001988 = *DAT_08001988 + 200;
          }
        }
        if (*DAT_08001988 % 0x14 < 10) {
          if (*DAT_08001988 % 0x14 < 7) {
            if (*DAT_08001988 % 0x14 < 6) {
              if (*DAT_08001988 % 0x14 < 5) {
                if (*DAT_08001988 % 0x14 < 4) {
                  if (*DAT_08001988 % 0x14 < 3) {
                    if (*DAT_08001988 % 0x14 < 2) {
                      if (*DAT_08001988 == (*DAT_08001988 / 0x14) * 0x14) {
                        FUN_08000b7e(DAT_0800198c,0x100);
                      }
                      else {
                        FUN_08000b82(DAT_0800198c,0x100);
                      }
                    }
                    else {
                      FUN_08000b7e(DAT_0800198c,0x100);
                    }
                  }
                  else {
                    FUN_08000b82(DAT_0800198c,0x100);
                  }
                }
                else {
                  FUN_08000b7e(DAT_0800198c,0x100);
                }
              }
              else {
                FUN_08000b82(DAT_0800198c,0x100);
              }
            }
            else {
              FUN_08000b7e(DAT_0800198c,0x100);
            }
          }
          else {
            FUN_08000b82(DAT_0800198c,0x100);
          }
        }
        else {
          FUN_08000b7e(DAT_0800198c,0x100);
        }
      }
      *DAT_08001990 = *DAT_08001984;
    }
  }
  return;
}



/* ENTRY 08001994 : FUN_08001994 */

void FUN_08001994(ushort *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}



/* ENTRY 080019ac : FUN_080019ac */

void FUN_080019ac(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(ushort *)(param_1 + 0x44) = (ushort)(((uint)*(ushort *)(param_1 + 0x44) << 0x11) >> 0x11);
  }
  else {
    *(ushort *)(param_1 + 0x44) = *(ushort *)(param_1 + 0x44) | 0x8000;
  }
  return;
}



/* ENTRY 080019ca : FUN_080019ca */

void FUN_080019ca(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | param_2;
  }
  return;
}



/* ENTRY 080019dc : FUN_080019dc */

void FUN_080019dc(int param_1)

{
  if (param_1 == DAT_08001b84) {
    FUN_0800129c(DAT_08001b84 >> 0x13,1);
    FUN_0800129c(param_1 >> 0x13,0);
  }
  else if (param_1 == 0x40000000) {
    FUN_0800125c(1);
    FUN_0800125c(1,0);
  }
  else if (param_1 == DAT_08001b88) {
    FUN_0800125c(2,1);
    FUN_0800125c(2,0);
  }
  else if (param_1 == DAT_08001b8c) {
    FUN_0800125c(4,1);
    FUN_0800125c(4,0);
  }
  else if (param_1 == DAT_08001b90) {
    FUN_0800125c(8,1);
    FUN_0800125c(8,0);
  }
  else if (param_1 == DAT_08001b94) {
    FUN_0800125c(0x10,1);
    FUN_0800125c(0x10,0);
  }
  else if (param_1 == DAT_08001b98) {
    FUN_0800125c(0x20,1);
    FUN_0800125c(0x20,0);
  }
  else if (param_1 == DAT_08001b9c) {
    FUN_0800129c(DAT_08001b9c >> 0x11,1);
    FUN_0800129c(param_1 >> 0x11,0);
  }
  else if (param_1 == DAT_08001ba0) {
    FUN_0800129c(0x80000);
    FUN_0800129c(0x80000,0);
  }
  else if (param_1 == DAT_08001ba4) {
    FUN_0800129c(0x100000);
    FUN_0800129c(0x100000,0);
  }
  else if (param_1 == DAT_08001ba8) {
    FUN_0800129c(0x200000);
    FUN_0800129c(0x200000,0);
  }
  else if (param_1 == DAT_08001bac) {
    FUN_0800125c(0x40,1);
    FUN_0800125c(0x40,0);
  }
  else if (param_1 == DAT_08001bb0) {
    FUN_0800125c(0x80,1);
    FUN_0800125c(0x80,0);
  }
  else if (param_1 == DAT_08001bb4) {
    FUN_0800125c(DAT_08001bb4 >> 0x16,1);
    FUN_0800125c(param_1 >> 0x16,0);
  }
  else if (param_1 == DAT_08001bb8) {
    FUN_0800129c(0x10000);
    FUN_0800129c(0x10000,0);
  }
  else if (param_1 == DAT_08001bbc) {
    FUN_0800129c(0x20000);
    FUN_0800129c(0x20000,0);
  }
  else if (param_1 == DAT_08001bc0) {
    FUN_0800129c(0x40000);
    FUN_0800129c(0x40000,0);
  }
  return;
}



/* ENTRY 08001bc4 : FUN_08001bc4 */

undefined4 FUN_08001bc4(int param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if (((*(ushort *)(param_1 + 0x10) & param_2) == 0) ||
     ((*(ushort *)(param_1 + 0xc) & param_2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 08001be6 : FUN_08001be6 */

void FUN_08001be6(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | param_2;
  }
  return;
}



/* ENTRY 08001bf8 : FUN_08001bf8 */

void FUN_08001bf8(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if ((((param_1 == DAT_08001c74) || (param_1 == DAT_08001c78)) ||
      (param_1 == (ushort *)&DAT_40000000)) ||
     (((param_1 == DAT_08001c7c || (param_1 == DAT_08001c80)) || (param_1 == DAT_08001c84)))) {
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  if ((param_1 != DAT_08001c88) && (param_1 != DAT_08001c8c)) {
    uVar1 = uVar1 & 0xfcff | param_2[3];
  }
  *param_1 = uVar1;
  param_1[0x16] = param_2[2];
  param_1[0x14] = *param_2;
  if ((((param_1 == DAT_08001c74) || (param_1 == DAT_08001c78)) || (param_1 == DAT_08001c90)) ||
     ((param_1 == DAT_08001c94 || (param_1 == DAT_08001c98)))) {
    param_1[0x18] = (ushort)*(byte *)(param_2 + 4);
  }
  param_1[10] = 1;
  return;
}



/* ENTRY 08001c9c : FUN_08001c9c */

void FUN_08001c9c(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  FUN_0800127c(0x30,1);
  local_8[0] = 0x10031000;
  FUN_080009c6(DAT_08001cf4,local_8);
  local_8[0] = 0x10030004;
  FUN_080009c6(DAT_08001cf8,local_8);
  local_8[0] = 0x10030010;
  FUN_080009c6(DAT_08001cf4,local_8);
  return;
}



/* ENTRY 08001cfc : FUN_08001cfc */

void FUN_08001cfc(uint param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_08000b7e(DAT_08001d3c,4);
    if ((param_1 & 1) == 0) {
      FUN_08000b7e(DAT_08001d40,0x1000);
    }
    else {
      FUN_08000b82(DAT_08001d40,0x1000);
    }
    param_1 = (int)param_1 >> 1;
    FUN_08000b82(DAT_08001d3c,4);
  }
  return;
}



/* ENTRY 08001d44 : FUN_08001d44 */

void FUN_08001d44(int param_1)

{
  uint uVar1;
  
  FUN_080022b4(0x8f);
  FUN_080022b4(0x40);
  FUN_08000b7e(DAT_08001d88,0x10);
  FUN_08001cfc(0xc0);
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1 & 0xff) {
    FUN_08001cfc(*(undefined *)(param_1 + uVar1));
    FUN_08001cfc((int)(uint)*(byte *)(param_1 + uVar1) >> 4);
  }
  FUN_08000b82(DAT_08001d88,0x10);
  return;
}



/* ENTRY 08001d8c : FUN_08001d8c */

void FUN_08001d8c(void)

{
  FUN_08001994(0x40000000,0);
  FUN_08001be6(0x40000000,1,0);
  FUN_080012fa(0x40000000);
  return;
}



/* ENTRY 08001dac : FUN_08001dac */

undefined8 FUN_08001dac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  short local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = (undefined2)param_2;
  local_12 = (undefined2)((uint)param_2 >> 0x10);
  local_18 = (short)param_1;
  local_16 = (undefined2)((uint)param_1 >> 0x10);
  uStack_10 = param_3;
  local_c = param_4;
  FUN_0800123c(1);
  uVar1 = *DAT_08001e24 / DAT_08001e28;
  FUN_080019dc(DAT_08001e28 << 0x19);
  local_14 = 1000;
  local_12 = 0;
  local_16 = 0;
  local_18 = (short)uVar1 + -1;
  FUN_08001bf8(0x40000000,&local_18);
  local_c = 0x103031c;
  FUN_08001184(&local_c);
  FUN_080012f4(0x40000000);
  FUN_08001be6(0x40000000,1);
  FUN_08001994(0x40000000);
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT22(local_16,local_18)));
}



/* ENTRY 08001e2c : FUN_08001e2c */

void FUN_08001e2c(void)

{
  int iVar1;
  
  iVar1 = FUN_08001fe4(DAT_08001e7c,0x424);
  if (iVar1 != 0) {
    FUN_080005bc(DAT_08001e80,0);
    FUN_08001efe(DAT_08001e7c,0x424);
    iVar1 = FUN_08000720(DAT_08001e80);
    FUN_08003090(DAT_08001e88,DAT_08001e84,0x100 - iVar1);
    *(undefined4 *)(DAT_08001e80 + 4) = 0x100;
    FUN_080005bc(DAT_08001e80,1);
  }
  return;
}



/* ENTRY 08001e8c : FUN_08001e8c */

void FUN_08001e8c(void)

{
  int iVar1;
  
  iVar1 = FUN_08001fe4(DAT_08001edc,0x424);
  if (iVar1 != 0) {
    FUN_080005bc(DAT_08001ee0,0);
    FUN_08001efe(DAT_08001edc,0x424);
    iVar1 = FUN_08000720(DAT_08001ee0);
    FUN_08003090(DAT_08001ee8,DAT_08001ee4,0x100 - iVar1);
    *(undefined4 *)(DAT_08001ee0 + 4) = 0x100;
    FUN_080005bc(DAT_08001ee0,1);
  }
  return;
}



/* ENTRY 08001eec : FUN_08001eec */

void FUN_08001eec(ushort *param_1,ushort param_2)

{
  *param_1 = ~param_2;
  return;
}



/* ENTRY 08001efe : FUN_08001efe */

void FUN_08001efe(ushort *param_1,int param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xffU));
  return;
}



/* ENTRY 08001f1c : FUN_08001f1c */

void FUN_08001f1c(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xdfff;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x2000;
  }
  return;
}



/* ENTRY 08001f34 : FUN_08001f34 */

void FUN_08001f34(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | param_2;
  }
  return;
}



/* ENTRY 08001f48 : FUN_08001f48 */

void FUN_08001f48(int param_1)

{
  if (param_1 == DAT_08001fd0) {
    FUN_0800129c(0x4000);
    FUN_0800129c(0x4000,0);
  }
  else if (param_1 == DAT_08001fd4) {
    FUN_0800125c(0x20000);
    FUN_0800125c(0x20000,0);
  }
  else if (param_1 == DAT_08001fd8) {
    FUN_0800125c(0x40000);
    FUN_0800125c(0x40000,0);
  }
  else if (param_1 == DAT_08001fdc) {
    FUN_0800125c(0x80000);
    FUN_0800125c(0x80000,0);
  }
  else if (param_1 == DAT_08001fe0) {
    FUN_0800125c(0x100000);
    FUN_0800125c(0x100000,0);
  }
  return;
}



/* ENTRY 08001fe4 : FUN_08001fe4 */

undefined4 FUN_08001fe4(ushort *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 << 0x18) >> 0x1d;
  uVar2 = 1 << (param_2 & 0x1f);
  if (uVar3 == 1) {
    uVar2 = uVar2 & param_1[6];
  }
  else if (uVar3 == 2) {
    uVar2 = uVar2 & param_1[8];
  }
  else {
    uVar2 = uVar2 & param_1[10];
  }
  if ((uVar2 == 0) || ((1 << ((int)param_2 >> 8 & 0xffU) & (uint)*param_1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 08002038 : FUN_08002038 */

void FUN_08002038(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_2 << 0x18) >> 0x1d;
  uVar3 = 1 << (param_2 & 0x1f);
  if (uVar2 == 1) {
    puVar1 = (uint *)(param_1 + 0xc);
  }
  else if (uVar2 == 2) {
    puVar1 = (uint *)(param_1 + 0x10);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x14);
  }
  if (param_3 == 0) {
    *puVar1 = *puVar1 & ~uVar3;
  }
  else {
    *puVar1 = *puVar1 | uVar3;
  }
  return;
}



/* ENTRY 08002084 : FUN_08002084 */

void FUN_08002084(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined auStack_34 [8];
  int local_2c;
  int local_28;
  
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xcfff | *(ushort *)((int)param_2 + 6)
  ;
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_1 + 0xc) & 0xe9f3 |
       *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2) | *(ushort *)((int)param_2 + 10);
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfcff | *(ushort *)(param_2 + 3);
  FUN_08001380(auStack_34);
  if (param_1 == DAT_08002158) {
    local_2c = local_28;
  }
  if ((*(ushort *)(param_1 + 0xc) & 0x8000) == 0) {
    uVar2 = (uint)(local_2c * 0x19) / (uint)(*param_2 << 2);
  }
  else {
    uVar2 = (uint)(local_2c * 0x19) / (uint)(*param_2 << 1);
  }
  if ((*(ushort *)(param_1 + 0xc) & 0x8000) == 0) {
    uVar1 = (ushort)(((uVar2 % 100) * 0x10 + 0x32) / 100) & 0xf;
  }
  else {
    uVar1 = (ushort)(((uVar2 % 100) * 8 + 0x32) / 100) & 7;
  }
  *(ushort *)(param_1 + 8) = (ushort)(uVar2 / 100 << 4) | uVar1;
  return;
}



/* ENTRY 0800215c : FUN_0800215c */

void FUN_0800215c(undefined4 *param_1)

{
  *param_1 = 0x2580;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0xc;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}



/* ENTRY 08002174 : FUN_08002174 */

void FUN_08002174(void)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0800121c(1);
  FUN_080005d4(DAT_080021d0);
  local_30 = DAT_080021d4;
  local_2c = DAT_080021d8;
  local_28 = 0;
  local_24 = 0x100;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3000;
  local_8 = 0;
  FUN_08000766(DAT_080021d0,&local_30);
  FUN_08000754(DAT_080021d0,0xe,0);
  FUN_080005bc(DAT_080021d0,1);
  return;
}



/* ENTRY 080021dc : FUN_080021dc */

void FUN_080021dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*DAT_08002250 == 0) {
    *DAT_08002250 = (uint)(*DAT_08002250 == 0);
    FUN_0800121c(1);
    FUN_080005d4(DAT_08002254);
    local_38 = DAT_08002258;
    local_30 = 0x10;
    local_28 = 0;
    local_24 = 0x80;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x2000;
    local_10 = 0;
    local_34 = param_1;
    local_2c = param_2;
    FUN_08000766(DAT_08002254,&local_38);
    FUN_08000754(DAT_08002254,2,1);
    FUN_080005bc(DAT_08002254,1);
  }
  return;
}



/* ENTRY 0800225c : FUN_0800225c */

void FUN_0800225c(void)

{
  FUN_08001f1c(DAT_080022ac,0);
  FUN_080005bc(DAT_080022b0,0);
  FUN_080005bc(DAT_080022b0 + -0x14,0);
  FUN_08001f34(DAT_080022ac,0x40,0);
  FUN_08001f34(DAT_080022ac,0x80,0);
  FUN_08001efe(DAT_080022ac,0x424);
  FUN_08001eec(DAT_080022ac,0x10);
  FUN_08002038(DAT_080022ac,0x424,0);
  return;
}



/* ENTRY 080022b4 : FUN_080022b4 */

void FUN_080022b4(undefined4 param_1)

{
  FUN_08000b7e(DAT_080022d0,0x10);
  FUN_08001cfc(param_1);
  FUN_08000b82(DAT_080022d0,0x10);
  return;
}



/* ENTRY 080022d4 : FUN_080022d4 */

void FUN_080022d4(byte *param_1,byte *param_2,char param_3)

{
  do {
    *param_1 = *param_1 ^ *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != '\0');
  return;
}



/* ENTRY 080022ee : FUN_080022ee */

void FUN_080022ee(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  short sVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (bVar4 = param_2 != 0, param_2 = param_2 - 1 & 0xffff, bVar4) {
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



/* ENTRY 08002334 : FUN_08002334 */

undefined4 FUN_08002334(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 local_124;
  int local_120;
  undefined auStack_11c [256];
  
  FUN_0800037c(auStack_11c,0x100);
  piVar1 = DAT_08002680;
  local_120 = 0;
  local_124 = 0;
  uVar6 = 0;
  iVar4 = *DAT_08002680;
  *DAT_08002680 = iVar4 + 1;
  if (0xffff < iVar4 + 1) {
    *piVar1 = 0x10000;
  }
  puVar2 = PTR_DAT_08002698;
  puVar5 = PTR_DAT_08002694;
  switch(*DAT_08002684) {
  case 0:
    *(undefined4 *)PTR_DAT_08002688 = 0;
    *(undefined4 *)PTR_DAT_0800268c = 0;
    *PTR_DAT_08002690 = 0;
    *DAT_08002684 = 1;
    *DAT_08002680 = 0;
    break;
  case 1:
    if (*DAT_08002680 < 0x10000) {
      if (param_2 != 0) {
        cVar3 = FUN_08001454(param_1,param_2,auStack_11c,&local_120,*PTR_DAT_08002688,&local_124);
        if (cVar3 == '\0') {
          *DAT_08002684 = 4;
        }
        else if (cVar3 == '\x01') {
          if (*(char *)(param_1 + 2) == '\0') {
            *DAT_08002684 = 4;
            if ((*PTR_DAT_0800269c != '\0') &&
               ((*(short *)PTR_DAT_080026a0 == *(short *)PTR_DAT_080026a4 ||
                (*(short *)PTR_DAT_080026a4 == 0)))) {
              uVar6 = 4;
            }
          }
          else {
            *DAT_08002684 = 2;
            uVar6 = 2;
            *(int *)PTR_DAT_08002688 = *(int *)PTR_DAT_08002688 + 1;
            *PTR_DAT_08002690 = 0;
            FUN_08000844(auStack_11c);
            *PTR_DAT_0800269c = 0;
            *(undefined2 *)PTR_DAT_080026a0 = 0;
          }
        }
        else {
          if (cVar3 == '\x02') {
            return 3;
          }
          *PTR_DAT_08002690 = 0;
          puVar5 = PTR_DAT_08002698;
          *PTR_DAT_08002698 = 0x15;
          puVar5[1] = 0;
          FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
        }
        *DAT_08002680 = 0;
      }
    }
    else {
      iVar4 = *(int *)PTR_DAT_08002694;
      *(int *)PTR_DAT_08002694 = *(int *)PTR_DAT_08002694 + 1;
      puVar2 = PTR_DAT_08002698;
      if (iVar4 < 4) {
        *PTR_DAT_08002698 = 0x43;
        puVar2[1] = 0;
        FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
        *DAT_08002684 = 0;
      }
      else {
        *(undefined4 *)puVar5 = 0;
        *DAT_08002680 = 0;
        *DAT_08002684 = 4;
      }
    }
    break;
  case 2:
    *DAT_08002684 = 3;
    puVar5 = PTR_DAT_08002698;
    *PTR_DAT_08002698 = 6;
    puVar5[1] = 0x43;
    puVar5[2] = 0;
    FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
    break;
  case 3:
    if (*DAT_08002680 < 0x10000) {
      if (param_2 != 0) {
        cVar3 = FUN_08001454(param_1,param_2,auStack_11c,&local_120,*PTR_DAT_08002688,&local_124);
        *PTR_DAT_080026a8 = 0;
        if (cVar3 == '\0') {
          if ((*(short *)PTR_DAT_080026a0 == *(short *)PTR_DAT_080026a4) ||
             (*(short *)PTR_DAT_080026a4 == 0)) {
            *PTR_DAT_0800269c = 1;
            puVar5 = PTR_DAT_08002698;
            if (*PTR_DAT_08002690 == '\0') {
              *PTR_DAT_08002698 = 0x15;
              puVar5[1] = 0;
              FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
              *PTR_DAT_08002690 = *PTR_DAT_08002690 + '\x01';
            }
            else {
              *(undefined4 *)PTR_DAT_08002688 = 0;
              *DAT_08002684 = 1;
              puVar5 = PTR_DAT_08002698;
              *PTR_DAT_08002698 = 6;
              puVar5[1] = 0;
              FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
            }
          }
          else {
            *PTR_DAT_0800269c = 0;
            *(undefined2 *)PTR_DAT_080026a0 = 0;
            *DAT_08002684 = 4;
          }
        }
        else if (cVar3 == '\x01') {
          *(ushort *)PTR_DAT_080026a0 = *(ushort *)PTR_DAT_080026a0 ^ (ushort)local_124;
          uVar6 = 1;
          *(int *)PTR_DAT_08002688 = *(int *)PTR_DAT_08002688 + 1;
          *PTR_DAT_08002690 = 0;
          puVar5 = auStack_11c;
          for (iVar4 = 0; iVar4 < local_120; iVar4 = iVar4 + 0x10) {
            FUN_08002758(puVar5,PTR_DAT_080026ac);
            puVar5 = puVar5 + 0x10;
          }
          *(int *)PTR_DAT_080026b0 = *(int *)PTR_DAT_080026b0 + local_120;
          FUN_080028ba(*(undefined4 *)PTR_DAT_080026b4,auStack_11c,local_120);
          *(int *)PTR_DAT_080026b4 = *(int *)PTR_DAT_080026b4 + local_120;
          puVar5 = PTR_DAT_08002698;
          *PTR_DAT_08002698 = 6;
          puVar5[1] = 0;
          FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
        }
        else {
          if (cVar3 == '\x02') {
            return 3;
          }
          *PTR_DAT_08002690 = 0;
          if (cVar3 == -9) {
            *PTR_DAT_08002698 = 6;
          }
          else {
            *PTR_DAT_08002698 = 0x15;
          }
          PTR_DAT_08002698[1] = 0;
          FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
        }
        *DAT_08002680 = 0;
      }
    }
    else if ((byte)*PTR_DAT_080026a8 < 6) {
      *PTR_DAT_080026a8 = *PTR_DAT_080026a8 + '\x01';
      *DAT_08002680 = 0;
      puVar5 = PTR_DAT_08002698;
      *PTR_DAT_08002698 = 0x15;
      puVar5[1] = 0;
      FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
    }
    else {
      *DAT_08002684 = 4;
    }
    break;
  case 4:
    *PTR_DAT_08002698 = 6;
    puVar2[1] = 0x18;
    puVar2[2] = 0x18;
    puVar2[3] = 0;
    FUN_080026b8(PTR_DAT_08002698,DAT_08002684,PTR_DAT_0800268c);
    uVar6 = 0xffffffff;
    *DAT_08002684 = 0;
  }
  return uVar6;
}



/* ENTRY 080026b8 : FUN_080026b8 */

void FUN_080026b8(char *param_1,undefined *param_2,int *param_3)

{
  FUN_0800156c(param_1);
  if (*param_1 == '\x06') {
    *param_3 = 0;
  }
  else if ((*param_1 == '\x15') && (*param_3 = *param_3 + 1, 0xf < *param_3)) {
    *param_2 = 4;
  }
  return;
}



/* ENTRY 080026ec : FUN_080026ec */

void FUN_080026ec(void)

{
  undefined4 *puVar1;
  
  *DAT_0800273c = DAT_08002738;
  puVar1 = DAT_08002744;
  *DAT_08002744 = DAT_08002740;
  FUN_08000442(*DAT_0800273c,*puVar1);
  puVar1 = DAT_0800274c;
  *DAT_0800274c = DAT_08002748;
  FUN_08000478(*puVar1);
  puVar1 = DAT_08002750;
  *DAT_08002750 = DAT_08002738;
  FUN_08000eb4(*puVar1);
  puVar1 = DAT_08002754;
  *DAT_08002754 = DAT_08002740;
  FUN_080004c8(*DAT_0800274c,*puVar1);
  return;
}



/* ENTRY 08002758 : FUN_08002758 */

undefined8 FUN_08002758(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_080004f2(&uStack_1c,param_1,0x10);
  FUN_08000c4c(param_1,*DAT_08002788);
  FUN_080022d4(param_1,param_2,0x10);
  FUN_080004f2(param_2,&uStack_1c,0x10);
  return CONCAT44(uStack_18,uStack_1c);
}



/* ENTRY 0800278c : FUN_0800278c */

undefined4 FUN_0800278c(void)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = DAT_08002844 + 3;
  iVar5 = 0;
  uVar4 = DAT_08002844[1];
  if ((DAT_08002844[-2] == 0xffffffff) || ((uint)DAT_08002844[-2] < DAT_0800284c)) {
    uVar1 = 0;
  }
  else if (DAT_08002844[1] + DAT_08002844[2] + DAT_08002848 == *piVar2) {
    if (*DAT_08002844 == *piVar2) {
      uVar1 = 1;
    }
    else if (*DAT_08002844 == -1) {
      if (uVar4 < 0x32801) {
        for (uVar3 = 1; uVar3 < (uVar4 >> 2) + 1; uVar3 = uVar3 + 1) {
          iVar5 = iVar5 + piVar2[uVar3];
        }
        if (DAT_08002844[2] == iVar5) {
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
    uVar1 = 1;
  }
  return uVar1;
}



/* ENTRY 08002850 : thunk_FUN_08002862 */

void thunk_FUN_08002862(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 08002862 : FUN_08002862 */

void FUN_08002862(uint param_1)

{
  char cVar1;
  
  for (; 0 < (int)param_1; param_1 = param_1 - 1 & 0xff) {
    for (cVar1 = 'n'; cVar1 != '\0'; cVar1 = cVar1 + -1) {
    }
  }
  return;
}



/* ENTRY 08002868 : FUN_08002868 */

undefined4 FUN_08002868(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = param_2 >> 0xb;
  if ((param_2 & 0x7ff) != 0) {
    uVar3 = uVar3 + 1;
  }
  FUN_08000988();
  FUN_080007a4(0x35);
  uVar2 = 0;
  do {
    if (uVar3 <= uVar2) {
code_r0x080028b0:
      FUN_08000830();
      return uVar4;
    }
    iVar1 = FUN_080007b0(uVar2 * 0x800 + param_1);
    if (iVar1 != 4) {
      uVar4 = 1;
      goto code_r0x080028b0;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* ENTRY 080028ba : FUN_080028ba */

undefined4 FUN_080028ba(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_08000988();
  FUN_080007a4(0x35);
  uVar1 = 0;
  do {
    if (param_3 <= uVar1) {
code_r0x080028fa:
      FUN_08000830();
      return uVar2;
    }
    FUN_0800091c(param_1,*param_2);
    if (*param_2 != *param_1) {
      uVar2 = 2;
      goto code_r0x080028fa;
    }
    uVar1 = uVar1 + 4;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while( true );
}



/* ENTRY 08002904 : FUN_08002904 */

void FUN_08002904(void)

{
  undefined uVar1;
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  uVar1 = FUN_0800111c();
  *DAT_08002978 = uVar1;
  FUN_0800127c(1);
  FUN_08000adc(DAT_0800297c,1);
  FUN_0800127c(0x10,1);
  local_8[0] = 0x4030040;
  FUN_080009c6(DAT_08002980,local_8);
  local_8[0] = 0x4030080;
  FUN_080009c6(DAT_08002980,local_8);
  local_8[0] = 0x4030100;
  FUN_080009c6(DAT_08002980,local_8);
  return;
}



/* ENTRY 08002984 : FUN_08002984 */

void FUN_08002984(void)

{
  byte bVar1;
  
  FUN_08001c9c();
  thunk_FUN_08002862(10);
  FUN_080022b4(0x8f);
  thunk_FUN_08002862(1);
  FUN_080022b4(0x40);
  thunk_FUN_08002862(1);
  FUN_08000b7e(DAT_080029d4,0x10);
  FUN_08001cfc(0xc0);
  for (bVar1 = 0; bVar1 < 0x10; bVar1 = bVar1 + 1) {
    FUN_08001cfc(0);
  }
  FUN_08000b82(DAT_080029d4,0x10);
  return;
}



/* ENTRY 080029d8 : FUN_080029d8 */

void FUN_080029d8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08000b6c(DAT_08002a64,0x2000);
  if (iVar1 == 1) {
    *DAT_08002a68 = *DAT_08002a68 + 1;
  }
  else {
    *DAT_08002a68 = 0;
    *DAT_08002a70 = *DAT_08002a6c;
  }
  if ((*DAT_08002a68 < 0x9c5) || (*DAT_08002a70 != *DAT_08002a6c)) {
    if (*DAT_08002a78 == 1) {
      uVar2 = *DAT_08002a74;
      *DAT_08002a74 = *DAT_08002a74 + 1;
      if ((100 < uVar2) && (*DAT_08002a70 == *DAT_08002a6c)) {
        FUN_08000b7e(DAT_08002a80,0x1000);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  }
  else {
    *DAT_08002a74 = 0;
    *DAT_08002a78 = 1;
    FUN_08000b82(DAT_08002a7c,0x100);
  }
  return;
}



/* ENTRY 08002a84 : FUN_08002a84 */

void FUN_08002a84(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = DAT_08002b20;
  uVar3 = (uint)(*DAT_08002b18 * 100) / *DAT_08002b1c;
  uVar2 = 0;
  *DAT_08002b20 = *DAT_08002b20 + 1;
  if (*puVar1 % 0x32 < 0x28) {
    for (; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      *(byte *)(DAT_08002b28 + uVar2) =
           *(byte *)(DAT_08002b24 + ((uVar3 / 10) % 10) * 8 + uVar2) |
           *(char *)(DAT_08002b24 + (uVar3 % 10) * 8 + uVar2) << 4;
    }
  }
  else {
    for (; uVar2 < 8; uVar2 = uVar2 + 1 & 0xff) {
      *(byte *)(DAT_08002b28 + uVar2) =
           *(byte *)(DAT_08002b24 + 0x50 + uVar2) | *(char *)(DAT_08002b24 + 0x58 + uVar2) << 4;
    }
  }
  FUN_08001d44(DAT_08002b28);
  return;
}



/* ENTRY 08002b2c : FUN_08002b2c */

void FUN_08002b2c(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined auStack_200 [256];
  char local_100;
  char local_ff;
  char local_f0;
  char local_ef;
  char local_ee;
  char local_ed;
  
  FUN_0800116c();
  FUN_08002904();
  iVar2 = FUN_080012e6(DAT_08002d30);
  if ((iVar2 == DAT_08002d34) || (iVar2 = FUN_08000b88(), iVar2 == 7)) {
    FUN_08002eb8();
    FUN_08000f98();
    FUN_08002f80();
    FUN_08001dac();
    FUN_08002dec();
  }
  iVar2 = FUN_080012e6(DAT_08002d30);
  if ((iVar2 == DAT_08002d34) || (iVar2 = FUN_0800278c(), iVar2 == 0)) {
    *DAT_08002d38 = 1;
  }
  else {
    iVar2 = FUN_08000b88();
    if (iVar2 == 7) {
      *DAT_08002d3c = '\x01';
    }
  }
  do {
    while ((*DAT_08002d38 != 1 && (*DAT_08002d3c != '\x01'))) {
      if ((*DAT_08002d4c == DAT_08002d50) && ((*DAT_08002d54 & DAT_08002d58) == 0x20000000)) {
        FUN_0800225c();
        FUN_08001d8c();
        FUN_08002db0();
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setMainStackPointer(*DAT_08002d54);
        }
        (*(code *)DAT_08002d54[1])(*DAT_08002d54);
      }
      else if ((*DAT_08002d5c & DAT_08002d58) == 0x20000000) {
        FUN_0800225c();
        FUN_08001d8c();
        FUN_08002db0();
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setMainStackPointer(*DAT_08002d5c);
        }
        (*(code *)DAT_08002d5c[1])(*DAT_08002d5c);
      }
      else if (*DAT_08002d38 == 0) {
        FUN_08002eb8();
        FUN_08000f98();
        FUN_08002f80();
        FUN_08001dac();
        FUN_08002dec();
        *DAT_08002d38 = 1;
      }
    }
    FUN_080002d4(auStack_200,DAT_08002d40,0xfc);
    iVar2 = FUN_080030f8(*(undefined4 *)(DAT_08002d40 + -0x10),*(undefined4 *)(DAT_08002d40 + -0xc),
                         *(undefined4 *)(DAT_08002d40 + -8),*(undefined4 *)(DAT_08002d40 + -4));
    if (0 < iVar2) {
      FUN_08002f48(&local_100,iVar2);
    }
    if ((((((*DAT_08002d44 == '\0') || (*DAT_08002d44 == '\x01')) && (iVar2 == 0x14)) &&
         ((local_100 == -0x56 && (local_ff == 'U')))) &&
        ((local_f0 == -0x65 && ((local_ef == '\x14' && (local_ee == 'Z')))))) && (local_ed == 'Z'))
    {
      FUN_08002df8();
    }
    iVar3 = FUN_08002334(&local_100,iVar2);
    if (iVar3 == 2) {
      if (*DAT_08002d38 == 0) {
        FUN_08000988();
        FUN_080007b0(DAT_08002d30);
        FUN_0800091c(DAT_08002d30,DAT_08002d34);
        FUN_08000830();
        *DAT_08002d3c = '\0';
        *DAT_08002d38 = 1;
      }
    }
    else if ((iVar3 != 3) && (iVar3 == 4)) {
      FUN_08002334(&local_100,iVar2);
      iVar2 = FUN_0800278c();
      if (iVar2 == 1) {
        FUN_08000830();
        FUN_08000bf4(4,0xad9);
        if (*DAT_08002d38 == 1) {
          FUN_0800225c();
          FUN_08001d8c();
          FUN_08002db0();
        }
        *DAT_08002d38 = 0;
      }
    }
    if ((*DAT_08002d38 == 0) && (1999 < *DAT_08002d48)) {
      FUN_0800225c();
      FUN_08001d8c();
      FUN_08002db0();
      *DAT_08002d3c = '\0';
    }
  } while( true );
}



/* ENTRY 08002d60 : FUN_08002d60 */

void FUN_08002d60(int param_1)

{
  bool bVar1;
  
  param_1 = param_1 * 10;
  do {
    bVar1 = param_1 != 0;
    param_1 = param_1 + -1;
  } while (bVar1);
  return;
}



/* ENTRY 08002d74 : FUN_08002d74 */

int FUN_08002d74(void)

{
  int iVar1;
  uint uVar2;
  
  *DAT_08002dac = 0x10;
  FUN_080010b0(0xbf);
  iVar1 = FUN_080010b0(0xff);
  uVar2 = FUN_080010b0(0xff);
  DAT_08002dac[-1] = 0x10;
  iVar1 = ((int)(short)(iVar1 << 8) | uVar2) * 0x1000;
  return (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x12)) >> 0xe;
}



/* ENTRY 08002db0 : FUN_08002db0 */

void FUN_08002db0(void)

{
  FUN_08001994(DAT_08002de0,0);
  FUN_080019ca(DAT_08002de0,0x100,0);
  FUN_080019ac(DAT_08002de0,0);
  FUN_080005bc(DAT_08002de4,0);
  FUN_080005a0(DAT_08002de8);
  return;
}



/* ENTRY 08002dec : FUN_08002dec */

void FUN_08002dec(void)

{
  FUN_08002984(7);
  return;
}



/* ENTRY 08002df8 : FUN_08002df8 */

void FUN_08002df8(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar3 = FUN_0800020c(DAT_08002eac);
  iVar4 = FUN_0800020c(DAT_08002eb0);
  puVar1 = DAT_08002eb4;
  sVar2 = 0;
  *DAT_08002eb4 = 0xaa;
  puVar1[1] = 0x55;
  for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
    DAT_08002eb4[iVar5 + 2] = *(undefined *)(DAT_08002eac + iVar5);
    sVar2 = (ushort)*(byte *)(DAT_08002eac + iVar5) + sVar2;
  }
  DAT_08002eb4[iVar3 + 2] = 0x2d;
  uVar6 = (uint)(ushort)(sVar2 + 0x2d);
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    DAT_08002eb4[iVar3 + 3 + iVar5] = *(undefined *)(DAT_08002eb0 + iVar5);
    uVar6 = *(byte *)(DAT_08002eb0 + iVar5) + uVar6 & 0xffff;
  }
  iVar3 = iVar3 + iVar4;
  while (puVar1 = DAT_08002eb4, iVar3 + 1 < 0xe) {
    DAT_08002eb4[iVar3 + 3] = 0;
    iVar3 = iVar3 + 1;
  }
  DAT_08002eb4[0x10] = 0xbb;
  puVar1[0x11] = 0x14;
  puVar1[0x12] = (char)(0xffff - uVar6);
  puVar1[0x13] = (char)(0xffff - uVar6 >> 8);
  puVar1[0x14] = 0;
  FUN_080021dc(DAT_08002eb4,0x14);
  iVar3 = 60000;
  do {
    bVar7 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while (bVar7);
  return;
}



/* ENTRY 08002eb8 : FUN_08002eb8 */

void FUN_08002eb8(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  FUN_0800127c(9,1);
  local_8[0] = 0x10030100;
  FUN_080009c6(DAT_08002ee0,local_8);
  return;
}



/* ENTRY 08002ee4 : FUN_08002ee4 */

uint FUN_08002ee4(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined auStack_118 [256];
  
  FUN_080002d4(auStack_118,param_1 + 4,0xfc);
  uVar1 = FUN_08002f60(*param_1,param_1[1],param_1[2],param_1[3]);
  if (0 < (int)param_3) {
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    param_3 = uVar1;
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
      *(undefined *)(param_2 + uVar1) = *(undefined *)((int)param_1 + param_1[1] + 0xc);
      param_1[1] = param_1[1] + 1;
      if (param_1[1] == 0x100) {
        param_1[1] = 0;
      }
    }
  }
  return param_3;
}



/* ENTRY 08002f48 : FUN_08002f48 */

void FUN_08002f48(undefined4 param_1,undefined4 param_2)

{
  FUN_08002ee4(DAT_08002f5c,param_1,param_2);
  return;
}



/* ENTRY 08002f60 : FUN_08002f60 */

int FUN_08002f60(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < param_2) {
    iVar1 = 0x100 - param_2;
  }
  else {
    iVar1 = -param_2;
  }
  return param_1 + iVar1;
}



/* ENTRY 08002f80 : FUN_08002f80 */

void FUN_08002f80(void)

{
  undefined4 *puVar1;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_8;
  undefined local_6;
  undefined local_5;
  
  puVar1 = DAT_08003084;
  *DAT_08003084 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_0800127c(0x4009,1);
  FUN_08001f48(DAT_08003088);
  FUN_0800215c(&local_18);
  local_18 = 0x1c200;
  local_12 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_e = 0xc;
  FUN_08002084(DAT_08003088,&local_18);
  FUN_08000adc(4,1);
  local_8 = 0x40;
  local_6 = 3;
  local_5 = 0x18;
  FUN_080009c6(DAT_0800308c,&local_8);
  local_8 = 0x80;
  local_6 = 3;
  local_5 = 0x48;
  FUN_080009c6(DAT_0800308c,&local_8);
  local_1c = 0x25;
  local_1b = 1;
  local_1a = 0;
  local_19 = 1;
  FUN_08001184(&local_1c);
  local_1c = 0xe;
  local_1b = 3;
  local_1a = 3;
  local_19 = 1;
  FUN_08001184(&local_1c);
  FUN_08001eec(DAT_08003088,0x10);
  FUN_08001efe(DAT_08003088,0x424);
  FUN_08002038(DAT_08003088,0x424,1);
  FUN_08002174();
  FUN_08001f34(DAT_08003088,0x40,1);
  FUN_08001f34(DAT_08003088,0x80,1);
  FUN_08001f1c(DAT_08003088,1);
  return;
}



/* ENTRY 08003090 : FUN_08003090 */

undefined4 FUN_08003090(int *param_1,int param_2,uint param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_118 [256];
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_080002d4(auStack_118,param_1 + 4,0xfc);
    iVar3 = FUN_080030f8(*param_1,param_1[1],param_1[2],param_1[3]);
    if (0x100U - iVar3 < param_3) {
      param_1[2] = param_1[2] + 1;
      uVar2 = 1;
    }
    else {
      for (uVar4 = 0; uVar4 < param_3; uVar4 = uVar4 + 1) {
        uVar1 = *(undefined *)(param_2 + uVar4);
        iVar3 = *param_1;
        *param_1 = iVar3 + 1;
        *(undefined *)((int)param_1 + iVar3 + 0xc) = uVar1;
        if (*param_1 == 0x100) {
          *param_1 = 0;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ENTRY 080030f8 : FUN_080030f8 */

void FUN_080030f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auStack_110 [256];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_080002d4(auStack_110,&stack0x00000000,0xfc);
  FUN_08002f60(local_10,uStack_c,uStack_8,uStack_4);
  return;
}



/* ENTRY 08004130 : FUN_08004130 */

void FUN_08004130(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_08004138();
  FUN_080041ac();
  iVar1 = DAT_08004164;
  puVar3 = (undefined4 *)((int)&DAT_08004164 + DAT_08004164);
  iVar2 = DAT_08004164 + 0x8004163;
  if (puVar3 == (undefined4 *)((int)&DAT_08004164 + DAT_08004168)) {
    FUN_080041ac();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x8004170);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x08004162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar3,*(undefined4 *)((int)&DAT_08004168 + iVar1),*(undefined4 *)(iVar1 + 0x800416c))
  ;
  return;
}



/* ENTRY 08004138 : FUN_08004138 */

void FUN_08004138(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_08004164;
  puVar3 = (undefined4 *)((int)&DAT_08004164 + DAT_08004164);
  iVar2 = DAT_08004164 + 0x8004163;
  if (puVar3 == (undefined4 *)((int)&DAT_08004164 + DAT_08004168)) {
    FUN_080041ac();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x8004170);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x08004162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*puVar3,*(undefined4 *)((int)&DAT_08004168 + iVar1),*(undefined4 *)(iVar1 + 0x800416c))
  ;
  return;
}



/* ENTRY 080041a4 : FUN_080041a4 */

undefined8 FUN_080041a4(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* ENTRY 080041a8 : FUN_080041a8 */

void FUN_080041a8(void)

{
  return;
}



/* ENTRY 080041ac : FUN_080041ac */

void FUN_080041ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  uVar1 = FUN_08005478();
  FUN_080041a4(uVar1,param_3);
  FUN_080043d6();
  uVar2 = FUN_080054c2();
  FUN_080041a8();
  UNRECOVERED_JUMPTABLE = (code *)0x80041ca;
  FUN_080054d8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar1 = getProcessStackPointer();
                    /* WARNING: Could not recover jumptable at 0x080041d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



/* ENTRY 080041be : FUN_080041be */

void FUN_080041be(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_080041a8();
  UNRECOVERED_JUMPTABLE = (code *)0x80041ca;
  FUN_080054d8(param_1,param_2);
  uVar1 = getProcessStackPointer();
                    /* WARNING: Could not recover jumptable at 0x080041d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



/* ENTRY 080041de : FUN_080041de */

void FUN_080041de(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(param_1);
  }
  return;
}



/* ENTRY 080041ec : FUN_080041ec */

void FUN_080041ec(void)

{
  (*DAT_08004214)();
  (*DAT_08004218)();
  return;
}



/* ENTRY 080041f4 : FUN_080041f4 */

void FUN_080041f4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080041f6 : FUN_080041f6 */

void FUN_080041f6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080041f8 : FUN_080041f8 */

void FUN_080041f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080041fa : FUN_080041fa */

void FUN_080041fa(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080041fc : FUN_080041fc */

void FUN_080041fc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080041fe : FUN_080041fe */

void FUN_080041fe(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004200 : FUN_08004200 */

void FUN_08004200(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004202 : FUN_08004202 */

void FUN_08004202(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004204 : FUN_08004204 */

void FUN_08004204(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004206 : FUN_08004206 */

void FUN_08004206(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004208 : FUN_08004208 */

undefined8 FUN_08004208(void)

{
  return CONCAT44(DAT_08004220,DAT_0800421c);
}



/* ENTRY 0800422c : FUN_0800422c */

void FUN_0800422c(void)

{
  uint *puVar1;
  uint *puVar2;
  int local_8;
  
  puVar1 = DAT_08004364;
  local_8 = 0;
  *DAT_08004364 = *DAT_08004364 | 0x10000;
  puVar2 = DAT_08004368;
  do {
    local_8 = local_8 + 1;
    if ((*puVar1 & 0x20000) != 0) break;
  } while (local_8 != 0x500);
  if ((int)(*puVar1 << 0xe) < 0) {
    *DAT_08004368 = *DAT_08004368 | 0x10;
    *puVar2 = *puVar2 & 0xfffffffc;
    *puVar2 = *puVar2 | 2;
    puVar1[1] = puVar1[1];
    puVar1[1] = puVar1[1];
    puVar1[1] = puVar1[1] | 0x400;
    puVar1[1] = puVar1[1] & 0xffc0ffff;
    puVar1[1] = puVar1[1] | 0x1d0000;
    *puVar1 = *puVar1 | 0x1000000;
    do {
    } while (-1 < (int)(*puVar1 << 6));
    puVar1[1] = puVar1[1] & 0xfffffffc;
    puVar1[1] = puVar1[1] | 2;
    do {
    } while ((puVar1[1] << 0x1c) >> 0x1e != 2);
    return;
  }
  return;
}



/* ENTRY 080042cc : FUN_080042cc */

void FUN_080042cc(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08004364;
  *DAT_08004364 = *DAT_08004364 | 1;
  puVar1[1] = puVar1[1] & DAT_0800436c;
  *puVar1 = *puVar1 & DAT_08004370;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xff80ffff;
  puVar1[2] = 0x9f0000;
  FUN_0800422c();
  *DAT_08004374 = 0x8000000;
  return;
}



/* ENTRY 0800430c : FUN_0800430c */

void FUN_0800430c(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_0800437c;
  iVar1 = DAT_08004364;
  uVar4 = *(uint *)(DAT_08004364 + 4) & 0xc;
  uVar3 = DAT_08004378;
  if (((uVar4 != 0) && (uVar4 != 4)) && (uVar4 == 8)) {
    if (((*(uint *)(DAT_08004364 + 4) & 0x10000) == 0) || (*(int *)(DAT_08004364 + 4) << 0xe < 0)) {
      uVar3 = DAT_08004380;
    }
    uVar3 = uVar3 * (((*(uint *)(DAT_08004364 + 4) & 0x3c0000) >> 0x12) + 2);
  }
  *DAT_0800437c = uVar3;
  *puVar2 = *puVar2 >>
            *(sbyte *)((int)DAT_0800437c + ((uint)(*(int *)(iVar1 + 4) << 0x18) >> 0x1c) + 4);
  return;
}



/* ENTRY 08004384 : FUN_08004384 */

void FUN_08004384(void)

{
  int iVar1;
  
  FUN_08005a8c();
  FUN_08005bbc(0);
  FUN_08005be4(0);
  FUN_08005bd0(0x400);
  FUN_08005800(2);
  FUN_08005714(0x10);
  FUN_08005c04(0,0x380000);
  FUN_08005bf8(1);
  do {
    iVar1 = FUN_08005b7c(0x39);
  } while (iVar1 == 0);
  FUN_08005c18(2);
  do {
    iVar1 = FUN_08005bac();
  } while (iVar1 != 8);
  return;
}



/* ENTRY 080043d6 : FUN_080043d6 */

void FUN_080043d6(void)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  FUN_08004804();
  FUN_08005a30(0x8000000);
  FUN_08005a1c(0x300);
  FUN_08004384();
  FUN_08004580();
  FUN_0800460c();
  FUN_08005030(0x1c200);
  FUN_08005940(DAT_0800454c,1);
  puVar6 = DAT_08004560;
  pcVar5 = DAT_0800455c;
  iVar4 = DAT_08004558;
  uVar3 = DAT_08004554;
  pcVar2 = DAT_08004550;
LAB_08004420:
  do {
    uVar7 = *puVar6 + 1;
    *puVar6 = uVar7;
    if (*pcVar2 == '\0') {
      iVar8 = DAT_08004574;
      if (*DAT_0800456c < 0x5f) {
        iVar9 = uVar7 - DAT_08004570 * (uVar7 / DAT_08004570);
        if (iVar9 == 0) {
          *(undefined4 *)(iVar4 + 400) = 1;
          goto LAB_08004448;
        }
      }
      else if (*DAT_0800456c < 0xf5) {
        iVar9 = uVar7 - DAT_08004570 * (uVar7 / DAT_08004570);
        if (iVar9 == 0) goto LAB_08004444;
      }
      else {
        iVar9 = uVar7 - uVar3 * (uVar7 / uVar3);
        iVar8 = DAT_08004564;
        if (iVar9 == 0) goto LAB_080044c6;
      }
      if (iVar9 == iVar8) {
        *(undefined4 *)(iVar4 + 400) = 0;
        goto LAB_080044ca;
      }
    }
    else {
      uVar1 = uVar3 * (uVar7 / uVar3);
      if (uVar7 == uVar1) {
LAB_080044c6:
        *(undefined4 *)(iVar4 + 400) = 1;
LAB_080044ca:
        *(undefined4 *)(iVar4 + 0x194) = 0;
      }
      else if (uVar7 - uVar1 == DAT_08004564) {
LAB_08004444:
        *(undefined4 *)(iVar4 + 400) = 0;
LAB_08004448:
        *(undefined4 *)(iVar4 + 0x194) = 1;
      }
    }
    if (*pcVar5 != '\0') {
      *(undefined4 *)(iVar4 + 0x1ac) = 1;
      iVar8 = DAT_08004564 + -2;
      do {
        bVar10 = iVar8 != 0;
        iVar8 = iVar8 + -1;
      } while (bVar10);
      *(undefined4 *)(iVar4 + 0x1ac) = 0;
      *pcVar5 = '\0';
    }
    if (*DAT_08004568 == '\0') break;
    if (20000 < puVar6[1]) goto LAB_080044f0;
    puVar6[1] = puVar6[1] + 1;
  } while( true );
  if (*DAT_08004578 != '\0') {
    if (puVar6[2] < 0x4e21) {
      puVar6[2] = puVar6[2] + 1;
    }
    else {
      iVar8 = FUN_08004cdc();
      if ((iVar8 != 0) && (iVar8 = FUN_08004872(), iVar8 != 0)) {
LAB_080044f0:
        FUN_08005c2c(0x40000000,0);
        FUN_08005c3e(0x40000000,1,0);
        DAT_40000010 = 0xfffe;
        FUN_08004cc8();
      }
    }
  }
  goto LAB_08004420;
}



/* ENTRY 08004580 : FUN_08004580 */

void FUN_08004580(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 local_18;
  
  local_18 = in_r3;
  FUN_08005a74(0x3c,1);
  FUN_08005a74(1);
  FUN_08005940(DAT_08004600,1);
  uVar1 = DAT_08004604;
  local_18 = 0x10030030;
  FUN_08005890(DAT_08004604,&local_18);
  local_18 = 0x10030800;
  FUN_08005890(uVar1,&local_18);
  uVar1 = DAT_08004608;
  local_18 = 0x10038000;
  FUN_08005890(DAT_08004608,&local_18);
  local_18 = 0x28034000;
  FUN_08005890(uVar1,&local_18);
  return;
}



/* ENTRY 0800460c : FUN_0800460c */

undefined4 FUN_0800460c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  *DAT_080046b4 = 1;
  puVar1 = DAT_080046b8;
  *DAT_080046b8 = 1;
  puVar1[1] = 1;
  puVar1[7] = 0;
  local_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  local_1c = param_4;
  FUN_08005a5c(1,1);
  local_24 = 0x1194;
  local_28 = 0x1c;
  FUN_08005c50(0x40000000,&local_28);
  FUN_08005cec(0x40000000,0);
  local_1c = 0x100041c;
  FUN_080059ac(&local_1c);
  FUN_08005c2c(0x40000000,1);
  FUN_08005c3e(0x40000000,1);
  return 1;
}



/* ENTRY 08004682 : FUN_08004682 */

void FUN_08004682(void)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((DAT_40000010 & 1) != 0) {
    DAT_40000010 = 0xfffe;
    FUN_08005326();
    pcVar2 = DAT_080046bc;
    cVar1 = *DAT_080046bc;
    *DAT_080046bc = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\x14') {
      *pcVar2 = '\0';
      iVar4 = DAT_08005028;
      puVar3 = DAT_0800501c;
      cVar1 = DAT_0800501c[3] + 1;
      uVar5 = (byte)DAT_0800501c[3] - 1;
      if (*(int *)(DAT_08005028 + 0x138) == 0) {
        if (uVar5 < 0x13) {
          DAT_0800501c[3] = cVar1;
        }
        if (0x13 < (byte)puVar3[3]) {
          *puVar3 = 1;
        }
        puVar3[7] = 0;
      }
      else {
        if (uVar5 < 199) {
          DAT_0800501c[3] = cVar1;
        }
        if (199 < (byte)puVar3[3]) {
          *puVar3 = 1;
        }
        if ((byte)puVar3[7] < 0xfb) {
          puVar3[7] = puVar3[7] + 1;
          *(undefined4 *)(iVar4 + 0x1bc) = 1;
        }
        else {
          *(undefined4 *)(DAT_0800502c + 0x1ac) = 1;
          *(undefined4 *)(iVar4 + 0x1bc) = 0;
        }
      }
      if ((byte)puVar3[5] < 0xfa) {
        puVar3[5] = puVar3[5] + 1;
      }
      return;
    }
  }
  return;
}



/* ENTRY 080046c0 : FUN_080046c0 */

ushort FUN_080046c0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = DAT_08004994;
  piVar1 = DAT_08004990;
  uVar6 = 0;
  iVar5 = *DAT_08004990;
  uVar4 = 0;
  *(int *)(DAT_08004994 + 8) = iVar5;
  iVar8 = piVar1[1];
  *(int *)(iVar2 + 0xc) = iVar8;
  iVar7 = piVar1[2];
  *(int *)(iVar2 + 0x10) = iVar7;
  puVar3 = DAT_08004998;
  do {
    puVar3[uVar6] = 0;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0xc);
  if (iVar5 != 0) {
    *puVar3 = (char)iVar5;
    puVar3[1] = (char)((uint)iVar5 >> 8);
    puVar3[2] = (char)((uint)iVar5 >> 0x10);
    puVar3[3] = (char)((uint)iVar5 >> 0x18);
    puVar3[4] = (char)iVar8;
    puVar3[5] = (char)((uint)iVar8 >> 8);
    puVar3[6] = (char)((uint)iVar8 >> 0x10);
    puVar3[7] = (char)((uint)iVar8 >> 0x18);
    puVar3[8] = (char)iVar7;
    puVar3[9] = (char)((uint)iVar7 >> 8);
    puVar3[10] = (char)((uint)iVar7 >> 0x10);
    puVar3[0xb] = (char)((uint)iVar7 >> 0x18);
  }
  uVar6 = 0;
  do {
    uVar4 = uVar4 + (byte)puVar3[uVar6] ^ 0x3692;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0xc);
  return uVar4;
}



/* ENTRY 08004732 : FUN_08004732 */

short FUN_08004732(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar2 = DAT_08004994;
  piVar1 = DAT_08004990;
  uVar9 = 0;
  iVar6 = *DAT_08004990;
  uVar4 = 0;
  *(int *)(DAT_08004994 + 8) = iVar6;
  iVar8 = piVar1[1];
  *(int *)(iVar2 + 0xc) = iVar8;
  puVar3 = DAT_08004998;
  iVar7 = piVar1[2];
  *(int *)(iVar2 + 0x10) = iVar7;
  do {
    puVar3[uVar9] = 0;
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 < 0xc);
  if (iVar6 != 0) {
    *puVar3 = (char)iVar6;
    puVar3[1] = (char)((uint)iVar6 >> 8);
    puVar3[2] = (char)((uint)iVar6 >> 0x10);
    puVar3[3] = (char)((uint)iVar6 >> 0x18);
    puVar3[4] = (char)iVar8;
    puVar3[5] = (char)((uint)iVar8 >> 8);
    puVar3[6] = (char)((uint)iVar8 >> 0x10);
    puVar3[7] = (char)((uint)iVar8 >> 0x18);
    puVar3[8] = (char)iVar7;
    puVar3[9] = (char)((uint)iVar7 >> 8);
    puVar3[10] = (char)((uint)iVar7 >> 0x10);
    puVar3[0xb] = (char)((uint)iVar7 >> 0x18);
  }
  uVar9 = 0;
  do {
    uVar5 = uVar4 + (byte)puVar3[uVar9];
    uVar4 = uVar5 ^ 0x3692;
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 < 0xc);
  return (uVar5 ^ 0x7c4) + 0x3692;
}



/* ENTRY 080047ac : FUN_080047ac */

void FUN_080047ac(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0800499c;
  FUN_08005814();
  FUN_0800572c(uVar1,0);
  FUN_08005704();
  return;
}



/* ENTRY 080047c8 : FUN_080047c8 */

void FUN_080047c8(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = DAT_0800498c;
  piVar2 = (int *)(DAT_0800499c + 4);
  uVar3 = FUN_080046c0();
  FUN_08005814();
  FUN_0800572c(piVar2,uVar3);
  iVar5 = *piVar2;
  iVar4 = FUN_080046c0();
  if (iVar4 == iVar5) {
    uVar6 = FUN_080047ac();
    FUN_08005704((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar1,piVar2);
    return;
  }
  FUN_08005704();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 08004804 : FUN_08004804 */

void FUN_08004804(void)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  
  if (*(short *)(DAT_08004990 + -8) != 0x100) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar2 = *DAT_0800499c;
  if (pcVar2 == (code *)0x0) {
    uVar1 = *(ushort *)(DAT_0800499c + 1);
    uVar3 = FUN_08004732();
    if (uVar3 != ((uVar1 ^ 0x3156) + 0x3692 & 0xffff)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    (*pcVar2)(pcVar2,DAT_0800498c);
    *DAT_08004994 = 1;
  }
  return;
}



/* ENTRY 0800484c : FUN_0800484c */

void FUN_0800484c(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(DAT_0800499c + 4);
  uVar2 = FUN_08004732();
  if (uVar2 != ((uVar1 ^ 0x3156) + 0x3692 & 0xffff)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



/* ENTRY 08004872 : FUN_08004872 */

undefined4 FUN_08004872(void)

{
  ushort uVar1;
  uint uVar2;
  
  if ((*DAT_08004994 == '\0') &&
     (uVar1 = *DAT_080049a0, uVar2 = FUN_08004732(), uVar2 != ((uVar1 ^ 0x3156) + 0x3692 & 0xffff)))
  {
    return 0;
  }
  return 1;
}



/* ENTRY 080048a2 : FUN_080048a2 */

void FUN_080048a2(void)

{
  int iVar1;
  short sVar2;
  
  iVar1 = DAT_08004994;
  sVar2 = (*DAT_080049a0 ^ 0x3156) +
          *(short *)(DAT_08004994 + 2) + (*(ushort *)(DAT_0800499c + 4) ^ 0x3156) + 0x6d24;
  *(short *)(DAT_08004994 + 2) = sVar2;
  *(short *)(iVar1 + 6) = sVar2 + *(short *)(iVar1 + 6);
  return;
}



/* ENTRY 080048d6 : FUN_080048d6 */

void FUN_080048d6(void)

{
  int iVar1;
  short sVar2;
  
  sVar2 = FUN_08004732();
  iVar1 = DAT_08004994;
  *(short *)(DAT_08004994 + 4) = sVar2 + *(short *)(DAT_08004994 + 4);
  sVar2 = FUN_08004732();
  sVar2 = sVar2 + *(short *)(iVar1 + 4);
  *(short *)(iVar1 + 4) = sVar2;
  *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) - sVar2;
  return;
}



/* ENTRY 080048f6 : FUN_080048f6 */

void FUN_080048f6(void)

{
  int iVar1;
  
  iVar1 = FUN_080056f0();
  if (iVar1 == 0) {
    FUN_08005814();
    FUN_08005774(1);
    FUN_08005704();
    return;
  }
  return;
}



/* ENTRY 08004914 : FUN_08004914 */

void FUN_08004914(void)

{
  FUN_08005814();
  FUN_0800572c(DAT_080049a0 + 8,DAT_080049a4);
  FUN_08005704();
  return;
}



/* ENTRY 08004940 : FUN_08004940 */

undefined4 FUN_08004940(void)

{
  if (*(uint *)(DAT_0800499c + 8) <= DAT_080049a8) {
    FUN_08005814();
    FUN_0800572c(DAT_080049a0,0);
    FUN_08005704();
  }
  return 0;
}



/* ENTRY 08004962 : FUN_08004962 */

undefined4 FUN_08004962(void)

{
  FUN_08005814();
  FUN_0800572c(DAT_080049b0,DAT_080049ac);
  FUN_08005704();
  return 0;
}



/* ENTRY 08004978 : FUN_08004978 */

undefined4 FUN_08004978(void)

{
  FUN_08005814();
  FUN_080056b0(DAT_080049b0);
  FUN_08005704();
  return 0;
}



/* ENTRY 080049b4 : FUN_080049b4 */

undefined4 FUN_080049b4(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(DAT_08004b5c + (*param_1 ^ 0xff) * 2) ^ 0xffff00;
  for (uVar2 = 0; uVar1 = uVar1 & 0xffff, (int)uVar2 < (int)(*param_1 - 2); uVar2 = uVar2 + 1 & 0xff
      ) {
    uVar1 = (uint)*(ushort *)(DAT_08004b5c + ((uint)param_1[uVar2 + 1] ^ uVar1 >> 8) * 2) ^
            uVar1 << 8;
  }
  uVar1 = uVar1 ^ 0xffff;
  if (((uint)param_1[0x2b] == uVar1 >> 8) && ((uint)param_1[0x2c] == (uVar1 & 0xff))) {
    return 1;
  }
  param_1[0x2b] = (byte)(uVar1 >> 8);
  param_1[0x2c] = (byte)uVar1;
  return 0;
}



/* ENTRY 08004a12 : FUN_08004a12 */

void FUN_08004a12(uint param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  pbVar2 = DAT_08004b60;
  uVar5 = (uint)*DAT_08004b60;
  if (uVar5 == 0) {
    if (param_1 != 0x55) {
      return;
    }
    bVar3 = 1;
  }
  else if (uVar5 == 1) {
    if (param_1 != 0xaa) {
LAB_08004a50:
      *pbVar2 = 0;
      return;
    }
    bVar3 = 2;
  }
  else {
    bVar3 = (byte)param_1;
    if (uVar5 != 2) {
      bVar1 = *DAT_08004b60;
      if (uVar5 < *DAT_08004b64 + 1) {
        DAT_08004b64[uVar5 - 2] = bVar3;
      }
      else {
        if (*DAT_08004b64 + 1 != uVar5) {
          DAT_08004b64[0x2c] = bVar3;
          iVar4 = FUN_080049b4(DAT_08004b64);
          if (iVar4 == 1) {
            FUN_08004c54(DAT_08004b68,DAT_08004b64);
          }
          goto LAB_08004a50;
        }
        DAT_08004b64[0x2b] = bVar3;
      }
      *pbVar2 = bVar1 + 1;
      return;
    }
    if (0x2c < param_1) goto LAB_08004a50;
    *DAT_08004b64 = bVar3;
    bVar3 = 3;
  }
  *pbVar2 = bVar3;
  return;
}



/* ENTRY 08004a80 : FUN_08004a80 */

uint FUN_08004a80(byte *param_1,undefined *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if ((uVar2 != 0) && (uVar2 < 0x2e)) {
    *param_2 = 0x55;
    param_2[1] = 0xaa;
    param_2[2] = bVar1;
    for (uVar3 = 0; (int)uVar3 < (int)(uVar2 - 2); uVar3 = uVar3 + 1 & 0xff) {
      param_2[uVar3 + 3] = param_1[uVar3 + 1];
    }
    param_2[uVar2 + 1] = param_1[0x2b];
    param_2[uVar2 + 2] = param_1[0x2c];
    return uVar2;
  }
  return 0;
}



/* ENTRY 08004abe : FUN_08004abe */

undefined4 FUN_08004abe(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0xffff;
  uVar3 = (uint)*param_1 << 8;
  bVar2 = 0;
  do {
    if ((int)((uVar1 ^ uVar3) << 0x10) < 0) {
      uVar1 = uVar1 << 1 ^ 0x1021;
    }
    else {
      uVar1 = uVar1 << 1;
    }
    uVar1 = uVar1 & 0xffff;
    bVar2 = bVar2 + 1;
    uVar3 = (uVar3 & 0x7fff) << 1;
  } while (bVar2 < 8);
  for (uVar3 = 0; (int)uVar3 < (int)(*param_1 - 2); uVar3 = uVar3 + 1 & 0xff) {
    uVar4 = (uint)param_1[uVar3 + 1] << 8;
    bVar2 = 0;
    do {
      if ((int)((uVar1 ^ uVar4) << 0x10) < 0) {
        uVar1 = uVar1 << 1 ^ 0x1021;
      }
      else {
        uVar1 = uVar1 << 1;
      }
      uVar1 = uVar1 & 0xffff;
      bVar2 = bVar2 + 1;
      uVar4 = (uVar4 & 0x7fff) << 1;
    } while (bVar2 < 8);
  }
  uVar1 = uVar1 ^ 0xffff;
  if (((uint)param_1[0x2b] == uVar1 >> 8) && ((uint)param_1[0x2c] == (uVar1 & 0xff))) {
    return 1;
  }
  param_1[0x2b] = (byte)(uVar1 >> 8);
  param_1[0x2c] = (byte)uVar1;
  return 0;
}



/* ENTRY 08004b74 : FUN_08004b74 */

undefined4 FUN_08004b74(char *param_1)

{
  if (*param_1 == param_1[1]) {
    return 1;
  }
  return 0;
}



/* ENTRY 08004b84 : FUN_08004b84 */

undefined4 FUN_08004b84(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  short *psVar3;
  
  do {
    if ((param_1[1] - 1 & param_1[2] - 1) == (uint)*param_1) {
      return 0;
    }
    psVar3 = (short *)(*(int *)(param_1 + 8) + (uint)*param_1 * 0x32 + 0x2e);
    ExclusiveAccess(psVar3);
  } while ((*psVar3 != 0) || (bVar2 = (bool)hasExclusiveAccess(psVar3), !bVar2));
  *(undefined *)psVar3 = 1;
  bVar1 = *param_1;
  *param_1 = bVar1 + 1 & param_1[2] - 1;
  FUN_08005384(*(int *)(param_1 + 8) + (uint)bVar1 * 0x32,param_2,0x2d);
  *(undefined2 *)(*(int *)(param_1 + 8) + (uint)bVar1 * 0x32 + 0x2e) = 0;
  return 1;
}



/* ENTRY 08004bee : FUN_08004bee */

undefined4 FUN_08004bee(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  short *psVar3;
  
  do {
    if ((uint)*param_1 == (uint)param_1[1]) {
      return 0;
    }
    psVar3 = (short *)((uint)param_1[1] * 0x32 + 0x30 + *(int *)(param_1 + 8));
    ExclusiveAccess(psVar3);
  } while ((*psVar3 != 0) || (bVar2 = (bool)hasExclusiveAccess(psVar3), !bVar2));
  *(undefined *)psVar3 = 1;
  bVar1 = param_1[1];
  param_1[1] = bVar1 + 1 & param_1[2] - 1;
  FUN_08005384(param_2,*(int *)(param_1 + 8) + (uint)bVar1 * 0x32,0x2d);
  *(undefined2 *)(*(int *)(param_1 + 8) + (uint)bVar1 * 0x32 + 0x30) = 0;
  return 1;
}



/* ENTRY 08004c54 : FUN_08004c54 */

undefined4 FUN_08004c54(byte *param_1,undefined4 param_2)

{
  if ((param_1[1] - 1 & param_1[2] - 1) == (uint)*param_1) {
    return 0;
  }
  FUN_08005384(*(int *)(param_1 + 8) + (uint)*param_1 * 0x32,param_2,0x2d);
  *param_1 = *param_1 + 1 & param_1[2] - 1;
  return 1;
}



/* ENTRY 08004c90 : FUN_08004c90 */

undefined4 FUN_08004c90(byte *param_1,undefined4 param_2)

{
  if ((uint)*param_1 == (uint)param_1[1]) {
    return 0;
  }
  FUN_08005384(param_2,*(int *)(param_1 + 8) + (uint)param_1[1] * 0x32,0x2d);
  param_1[1] = param_1[1] + 1 & param_1[2] - 1;
  return 1;
}



/* ENTRY 08004cc8 : FUN_08004cc8 */

void FUN_08004cc8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)DAT_08005014[1];
  FUN_080041de(*DAT_08005014);
                    /* WARNING: Could not recover jumptable at 0x08004cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ENTRY 08004cdc : FUN_08004cdc */

int FUN_08004cdc(void)

{
  int iVar1;
  
  iVar1 = *DAT_08005014 + 1;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ENTRY 08004ce8 : FUN_08004ce8 */

void FUN_08004ce8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DAT_08005018[1];
  FUN_080041de(*DAT_08005018);
  (*pcVar1)();
  return;
}



/* ENTRY 08005030 : FUN_08005030 */

void FUN_08005030(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined2 local_24;
  undefined local_22;
  undefined local_21;
  
  *(uint *)(DAT_080052dc + 0x18) = *(uint *)(DAT_080052dc + 0x18) | 0x4009;
  iVar2 = DAT_080052e4;
  uVar1 = DAT_080052e0;
  local_28 = 0x25;
  FUN_08005940(4,1);
  local_24 = 0x40;
  local_21 = 0x18;
  local_22 = 3;
  FUN_08005890(uVar1,&local_24);
  local_24 = 0x80;
  local_21 = 0x48;
  FUN_08005890(uVar1,&local_24);
  local_34 = 0;
  local_32 = 0xc;
  local_38 = 0;
  local_36 = 0;
  local_30 = 0;
  local_2c = local_28;
  local_2b = 1;
  local_2a = 0;
  local_29 = 1;
  local_3c = param_1;
  FUN_080059ac(&local_2c);
  FUN_08005d7a(iVar2,0x360,1);
  FUN_08005d7a(iVar2,0x424,1);
  FUN_08005d1e(iVar2,0x80,1);
  FUN_08005d1e(iVar2,0x40,1);
  FUN_08005a44(1);
  iVar3 = DAT_080052e8;
  FUN_08005510(DAT_080052e8);
  local_64 = DAT_080052ec;
  local_60 = 0x10;
  local_5c = 0x40;
  uStack_58 = 0;
  uStack_54 = 0x80;
  local_48 = 0;
  local_44 = 0x2000;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_68 = iVar2 + 4;
  FUN_0800564c(iVar3,&local_68);
  FUN_0800563c(iVar3,2,1);
  FUN_080054fc(iVar3,0);
  iVar3 = DAT_080052e8 + 0x14;
  FUN_08005510(iVar3);
  local_64 = DAT_080052f0;
  local_60 = 0;
  local_5c = 0x100;
  uStack_58 = 0;
  uStack_54 = 0x80;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x20;
  local_44 = 0x2000;
  local_40 = 0;
  local_68 = iVar2 + 4;
  FUN_0800564c(iVar3,&local_68);
  FUN_080054fc(iVar3,1);
  local_2c = 0xe;
  local_2b = 5;
  local_2a = 0;
  local_29 = 1;
  FUN_080059ac(&local_2c);
  FUN_08005dac(iVar2,&local_3c);
  FUN_08005d0c(iVar2,1);
  return;
}



/* ENTRY 080051d8 : FUN_080051d8 */

void FUN_080051d8(void)

{
  undefined4 uVar1;
  int iVar2;
  byte local_38 [48];
  
  FUN_080054e4(0x2000);
  FUN_080054fc(DAT_080052e8,0);
  iVar2 = FUN_08004c90(DAT_080052f4,local_38);
  if (iVar2 == 0) {
    *DAT_080052f8 = 0;
  }
  else {
    FUN_08004a80(local_38,DAT_080052ec);
    uVar1 = DAT_080052e8;
    FUN_0800569e(DAT_080052e8,local_38[0] + 5);
    FUN_080054fc(uVar1,1);
  }
  return;
}



/* ENTRY 080051f0 : FUN_080051f0 */

void FUN_080051f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0800561c(0x40000);
  iVar1 = DAT_080052f0;
  if (iVar2 == 0) {
    iVar2 = FUN_0800561c(0x20000);
    if (iVar2 != 0) {
      FUN_080054e4(0x20000);
      uVar3 = 0;
      do {
        FUN_08004a12(*(undefined *)(iVar1 + uVar3 + 0x80));
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 0x80);
      return;
    }
  }
  else {
    FUN_080054e4(0x40000);
    uVar3 = 0;
    do {
      FUN_08004a12(*(undefined *)(iVar1 + uVar3));
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x80);
  }
  return;
}



/* ENTRY 08005242 : FUN_08005242 */

undefined2 FUN_08005242(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = DAT_080052e4;
  iVar2 = FUN_08005d2e(DAT_080052e4,0x424);
  if (iVar2 != 0) {
    iVar2 = DAT_080052e8 + 0x14;
    iVar3 = FUN_08005614(iVar2);
    FUN_080054fc(iVar2,0);
    *(int *)(DAT_080052e8 + 0x18) = iVar2 >> 0x16;
    FUN_080054fc(iVar2,1);
    iVar2 = DAT_080052f0;
    if (-iVar3 + 0xffU < 0x100) {
      for (uVar4 = 0; uVar4 < -iVar3 + 0x100U; uVar4 = uVar4 + 1 & 0xffff) {
        FUN_08004a12(*(undefined *)(iVar2 + uVar4));
      }
    }
  }
  iVar2 = FUN_08005d2e(puVar1,0x525);
  if (iVar2 != 0) {
    FUN_08005cfe(puVar1,0x525);
  }
  return *puVar1;
}



/* ENTRY 080052b8 : FUN_080052b8 */

void FUN_080052b8(void)

{
  undefined4 uVar1;
  
  if (*DAT_080052f8 == '\0') {
    *DAT_080052f8 = '\x01';
    uVar1 = DAT_080052e8;
    FUN_0800569e(DAT_080052e8);
    FUN_080054fc(uVar1,1);
    return;
  }
  return;
}



/* ENTRY 0800530e : FUN_0800530e */

void FUN_0800530e(undefined4 param_1)

{
  FUN_080049b4();
  FUN_08004b84(DAT_0800537c,param_1);
  FUN_080052b8();
  return;
}



/* ENTRY 08005326 : FUN_08005326 */

void FUN_08005326(void)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined4 local_34;
  undefined local_30;
  undefined local_2f;
  
  iVar8 = FUN_08004b74(DAT_0800537c + -0xc);
  if (iVar8 == 0) {
    FUN_08004c90(DAT_0800537c + -0xc,DAT_08005380);
    iVar8 = DAT_08005380;
    puVar4 = DAT_0800501c;
    if (*(char *)(DAT_08005380 + 1) == -0x30) {
      cVar1 = *(char *)(DAT_08005380 + 3);
      if (cVar1 == '\0') {
        local_37 = 0xd0;
        local_36 = 0;
        local_30 = 0;
        local_35 = 0;
        local_34 = 0;
        local_2f = 0;
        *DAT_0800501c = 0;
        *(undefined2 *)(puVar4 + 10) = 0;
        *(undefined2 *)(puVar4 + 0xc) = 0;
        *(undefined2 *)(puVar4 + 0x12) = 0;
        *(undefined2 *)(puVar4 + 0x14) = 0;
        puVar4[3] = 0;
        puVar4[6] = 1;
        puVar4[5] = 0;
        local_38 = 0xb;
        FUN_080049b4(&local_38);
        FUN_08004b84(DAT_08005024,&local_38);
        FUN_080052b8();
      }
      else {
        if (cVar1 == '\x01') {
          local_47 = 0xd0;
          local_46 = 0;
          local_45 = 1;
          local_44 = *(undefined *)(DAT_08005380 + 4);
          local_43 = *(undefined *)(DAT_08005380 + 5);
          local_42 = 0;
          local_40 = 0;
          local_41 = 0;
          local_3f = 0;
          if (*(short *)(DAT_0800501c + 0x10) != 0) {
            FUN_08005814();
            FUN_080056a4(0x35);
            iVar8 = DAT_08005014;
            iVar7 = FUN_080056b0(DAT_08005014 + (uint)*(ushort *)(puVar4 + 0x14) * 0x800);
            puVar4[8] = (char)iVar7;
            iVar9 = DAT_08005020;
            if (iVar7 == 4) {
              for (uVar10 = 0; uVar10 < *(ushort *)(puVar4 + 0x10); uVar10 = uVar10 + 1 & 0xffff) {
                iVar7 = FUN_0800572c((uint)*(ushort *)(puVar4 + 0x14) * 0x800 + uVar10 * 4 + iVar8,
                                     *(undefined4 *)(iVar9 + uVar10 * 4));
                if (iVar7 != 4) {
                  FUN_08005704();
                }
              }
            }
            else {
              FUN_08005704();
            }
            FUN_08005704();
          }
          local_48 = 0xb;
          FUN_080049b4(&local_48);
          FUN_08004b84(DAT_08005024,&local_48);
          FUN_080052b8();
          return;
        }
        if (cVar1 != '\x02') {
          return;
        }
        local_37 = 0xd0;
        local_36 = 0;
        local_35 = 2;
        local_30 = 0;
        local_34 = 0;
        local_2f = 0;
        DAT_0800501c[2] = 1;
        local_38 = 0xb;
        FUN_080049b4(&local_38);
        FUN_08004b84(DAT_08005024,&local_38);
        FUN_080052b8();
      }
      return;
    }
    if (*(char *)(DAT_08005380 + 1) == -0x2f) {
      iVar9 = DAT_08005380 + 1;
      local_4f = 0xd1;
      local_4c = *(undefined *)(DAT_08005380 + 4);
      local_4b = 0;
      local_4a = 0;
      local_48 = 0;
      local_49 = 0;
      local_47 = 0;
      uVar5 = (ushort)*(byte *)(DAT_08005380 + 4);
      if (0x20 < uVar5) {
        uVar5 = 0x20;
      }
      uVar11 = (*(ushort *)(DAT_08005380 + 2) & 0xff) << 8 |
               (uint)(*(ushort *)(DAT_08005380 + 2) >> 8);
      uVar10 = (uint)*(ushort *)(DAT_0800501c + 0xc);
      if (uVar10 == uVar11) {
        DAT_0800501c[7] = 0;
        iVar7 = DAT_08005020;
        uVar10 = 0;
        for (; 3 < uVar5; uVar5 = uVar5 - 4 & 0xff) {
          iVar6 = iVar9 + uVar10;
          uVar2 = *(ushort *)(puVar4 + 0x10);
          uVar10 = uVar10 + 4 & 0xff;
          *(undefined4 *)(iVar7 + (uint)uVar2 * 4) = *(undefined4 *)(iVar6 + 4);
          *(ushort *)(puVar4 + 0x10) = uVar2 + 1;
          *(short *)(puVar4 + 0x12) = *(short *)(puVar4 + 0x12) + 4;
          *(short *)(puVar4 + 10) = *(short *)(puVar4 + 10) + 4;
        }
        if (uVar5 == 0) {
          if (0x1ff < *(ushort *)(puVar4 + 0x10)) {
            FUN_08005814();
            FUN_080056a4(0x35);
            iVar9 = DAT_08005014;
            iVar6 = FUN_080056b0(DAT_08005014 + (uint)*(ushort *)(puVar4 + 0x14) * 0x800);
            puVar4[8] = (char)iVar6;
            if (iVar6 == 4) {
              uVar10 = 0;
              do {
                iVar6 = FUN_0800572c((uint)*(ushort *)(puVar4 + 0x14) * 0x800 + uVar10 * 4 + iVar9,
                                     *(undefined4 *)(iVar7 + uVar10 * 4));
                if (iVar6 != 4) {
                  FUN_08005704();
                }
                uVar10 = uVar10 + 1 & 0xffff;
              } while (uVar10 < 0x200);
            }
            else {
              FUN_08005704();
            }
            FUN_08005704();
            *(undefined2 *)(puVar4 + 0x10) = 0;
            *(undefined2 *)(puVar4 + 0x12) = 0;
            *(short *)(puVar4 + 0x14) = *(short *)(puVar4 + 0x14) + 1;
          }
          sVar3 = *(short *)(puVar4 + 0xc);
          *(short *)(puVar4 + 0xc) = sVar3 + 1;
          *(short *)(puVar4 + 0xe) = sVar3 + 1;
        }
        else {
          uVar2 = *(ushort *)(puVar4 + 0x10);
          *(undefined4 *)(iVar7 + (uint)uVar2 * 4) = *(undefined4 *)(uVar10 + iVar9 + 4);
          *(ushort *)(puVar4 + 0x12) = uVar5 + *(short *)(puVar4 + 0x12);
          puVar4[4] = 1;
          *(short *)(puVar4 + 0xe) = *(short *)(puVar4 + 0xe) + 1;
          *(ushort *)(puVar4 + 0x10) = uVar2 + 1;
        }
        local_4e = *(undefined *)(iVar8 + 2);
        local_4d = *(undefined *)(iVar8 + 3);
        puVar4[5] = 0;
      }
      else {
        if (uVar10 < uVar11) {
          local_4e = (undefined)(uVar10 - 1 >> 8);
          local_4d = (undefined)(uVar10 - 1);
        }
        else {
          local_4e = *(undefined *)(DAT_08005380 + 2);
          local_4d = *(undefined *)(DAT_08005380 + 3);
        }
        DAT_0800501c[5] = 100;
      }
      local_50 = 0xb;
      FUN_080049b4(&local_50);
      FUN_08004b84(DAT_08005024,&local_50);
      FUN_080052b8();
      return;
    }
  }
  return;
}



/* ENTRY 08005384 : FUN_08005384 */

undefined8 FUN_08005384(uint *param_1,uint *param_2,uint param_3,uint param_4)

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
      bVar6 = *(byte *)param_2;
      puVar4 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)(uint *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar4;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar4 + 1);
        bVar6 = *(byte *)puVar4;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar4 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_1 + 2);
        *(byte *)(uint *)((int)param_1 + 1) = (byte)uVar9;
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
          uVar7 = *(undefined2 *)puVar4;
        }
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 1);
          param_3 = (uint)*(byte *)puVar2;
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
    bVar6 = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
    in_r12 = *pbVar5;
  }
  puVar2 = puVar4;
  if (bVar13) {
    puVar2 = (uint *)((int)puVar4 + 1);
    param_3 = (uint)*(byte *)puVar4;
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



/* ENTRY 08005478 : FUN_08005478 */

void FUN_08005478(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  uint *puVar3;
  
  uVar1 = FUN_080054d0();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = in_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_08004208();
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



/* ENTRY 080054c2 : FUN_080054c2 */

undefined4 FUN_080054c2(undefined4 param_1)

{
  FUN_080041be(param_1);
  return DAT_080054d4;
}



/* ENTRY 080054d0 : FUN_080054d0 */

undefined4 FUN_080054d0(void)

{
  return DAT_080054d4;
}



/* ENTRY 080054d8 : FUN_080054d8 */

void FUN_080054d8(void)

{
  software_bkpt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ENTRY 080054e4 : FUN_080054e4 */

void FUN_080054e4(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  
  puVar1 = DAT_080054f4;
  bVar3 = (param_1 & 0x10000000) != 0;
  puVar2 = DAT_080054f8;
  if (bVar3) {
    *DAT_080054f4 = param_1;
    puVar2 = puVar1;
  }
  if (!bVar3) {
    puVar2[1] = param_1;
  }
  return;
}



/* ENTRY 080054fc : FUN_080054fc */

void FUN_080054fc(uint *param_1,int param_2)

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



/* ENTRY 08005510 : FUN_08005510 */

void FUN_08005510(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  *param_1 = *param_1 & 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 == DAT_080055e0) {
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf;
  }
  else if (param_1 == DAT_080055e8) {
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf0;
  }
  else if (param_1 == DAT_080055ec) {
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf00;
  }
  else if (param_1 == DAT_080055f0) {
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf000;
  }
  else if (param_1 == DAT_080055f4) {
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf0000;
  }
  else {
    if (param_1 != DAT_080055f8) {
      if (param_1 == DAT_080055fc) {
        *(uint *)(DAT_080055e4 + 4) = *(uint *)(DAT_080055e4 + 4) | 0xf000000;
        return;
      }
      puVar2 = DAT_08005600 + -1;
      if (param_1 == DAT_08005600) {
        uVar1 = *puVar2 | 0xf;
      }
      else if (param_1 == DAT_08005604) {
        uVar1 = *puVar2 | 0xf0;
      }
      else if (param_1 == DAT_08005608) {
        uVar1 = *puVar2 | 0xf00;
      }
      else {
        if (param_1 != DAT_0800560c) {
          if (param_1 == DAT_08005610) {
            *puVar2 = *puVar2 | 0xf0000;
            return;
          }
          return;
        }
        uVar1 = *puVar2 | 0xf000;
      }
      *puVar2 = uVar1;
      return;
    }
    uVar1 = *(uint *)(DAT_080055e4 + 4) | 0xf00000;
  }
  *(uint *)(DAT_080055e4 + 4) = uVar1;
  return;
}



/* ENTRY 08005614 : FUN_08005614 */

uint FUN_08005614(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}



/* ENTRY 0800561c : FUN_0800561c */

bool FUN_0800561c(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08005634;
  if ((param_1 & 0x10000000) == 0) {
    puVar1 = DAT_08005638;
  }
  return (*puVar1 & param_1) != 0;
}



/* ENTRY 0800563c : FUN_0800563c */

void FUN_0800563c(uint *param_1,uint param_2,int param_3)

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



/* ENTRY 0800564c : FUN_0800564c */

void FUN_0800564c(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}



/* ENTRY 0800569e : FUN_0800569e */

void FUN_0800569e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ENTRY 080056a4 : FUN_080056a4 */

void FUN_080056a4(undefined4 param_1)

{
  *(undefined4 *)(DAT_080056ac + 0xc) = param_1;
  return;
}



/* ENTRY 080056b0 : FUN_080056b0 */

void FUN_080056b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0800582c(0xb0000);
  iVar1 = DAT_080056ec;
  if (iVar2 != 4) {
    return;
  }
  *(uint *)(DAT_080056ec + 0x10) = *(uint *)(DAT_080056ec + 0x10) | 2;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x40;
  FUN_0800582c(0xb0000);
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x1ffd;
  return;
}



/* ENTRY 080056f0 : FUN_080056f0 */

bool FUN_080056f0(void)

{
  return (*(uint *)(DAT_08005700 + 0x1c) & 2) != 0;
}



/* ENTRY 08005704 : FUN_08005704 */

void FUN_08005704(void)

{
  *(uint *)(DAT_08005710 + 0x10) = *(uint *)(DAT_08005710 + 0x10) | 0x80;
  return;
}



/* ENTRY 08005714 : FUN_08005714 */

void FUN_08005714(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08005728;
  *DAT_08005728 = *DAT_08005728 & 0xffffffef;
  *puVar1 = param_1 | *puVar1;
  return;
}



/* ENTRY 0800572c : FUN_0800572c */

void FUN_0800572c(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0800582c(0x2000);
  iVar1 = DAT_08005770;
  if (iVar2 != 4) {
    return;
  }
  *(uint *)(DAT_08005770 + 0x10) = *(uint *)(DAT_08005770 + 0x10) | 1;
  *param_1 = (short)param_2;
  iVar2 = FUN_0800582c(0x2000);
  if (iVar2 == 4) {
    param_1[1] = (short)((uint)param_2 >> 0x10);
    FUN_0800582c(0x2000);
  }
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x1ffe;
  return;
}



/* ENTRY 08005774 : FUN_08005774 */

void FUN_08005774(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  
  iVar2 = FUN_0800582c(0xb0000);
  iVar1 = DAT_080057f4;
  if (iVar2 != 4) {
    return;
  }
  *(undefined4 *)(DAT_080057f4 + 8) = DAT_080057f0;
  *(undefined4 *)(iVar1 + 8) = DAT_080057f8;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x20;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x40;
  iVar2 = FUN_0800582c(0xb0000);
  if (iVar2 == 4) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x1fdf;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x10;
    if (param_1 == 0) {
      uVar3 = 0xa5;
    }
    else {
      uVar3 = 0;
    }
    *DAT_080057fc = uVar3;
    iVar2 = FUN_0800582c(0xb0000);
    if (iVar2 == 5) {
      return;
    }
    uVar4 = *(uint *)(iVar1 + 0x10) & 0x1fef;
  }
  else {
    if (iVar2 == 5) {
      return;
    }
    uVar4 = *(uint *)(iVar1 + 0x10) & 0x1fdf;
  }
  *(uint *)(iVar1 + 0x10) = uVar4;
  return;
}



/* ENTRY 08005800 : FUN_08005800 */

void FUN_08005800(uint param_1)

{
  *DAT_08005810 = param_1 | *DAT_08005810 & 0x38;
  return;
}



/* ENTRY 08005814 : FUN_08005814 */

void FUN_08005814(void)

{
  int iVar1;
  
  iVar1 = DAT_08005824;
  *(undefined4 *)(DAT_08005824 + 4) = DAT_08005820;
  *(undefined4 *)(iVar1 + 4) = DAT_08005828;
  return;
}



/* ENTRY 0800582c : FUN_0800582c */

int FUN_0800582c(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if ((*(uint *)(DAT_0800588c + 0xc) & 1) == 0) {
    if ((*(uint *)(DAT_0800588c + 0xc) & 4) == 0) {
      if ((*(uint *)(DAT_0800588c + 0xc) & 0x10) != 0) {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 2;
    }
  }
  else {
    do {
      if (param_1 == 0) {
        return 5;
      }
      iVar1 = 4;
      if ((*(uint *)(DAT_0800588c + 0xc) & 1) == 0) {
        if ((*(uint *)(DAT_0800588c + 0xc) & 4) == 0) {
          if ((*(uint *)(DAT_0800588c + 0xc) & 0x10) != 0) {
            iVar1 = 3;
          }
        }
        else {
          iVar1 = 2;
        }
      }
      else {
        iVar1 = 1;
      }
      param_1 = param_1 + -1;
    } while (iVar1 == 1);
  }
  if (param_1 == 0) {
    return 5;
  }
  return iVar1;
}



/* ENTRY 08005890 : FUN_08005890 */

void FUN_08005890(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = *(byte *)((int)param_2 + 3) & 0xf;
  if ((*(byte *)((int)param_2 + 3) & 0x10) != 0) {
    uVar4 = *(byte *)(param_2 + 1) | uVar4;
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



/* ENTRY 08005940 : FUN_08005940 */

void FUN_08005940(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = DAT_080059a8;
  if ((param_1 & 0x80000000) == 0) {
    uVar3 = *(uint *)(DAT_080059a8 + 4);
  }
  else {
    uVar3 = *(uint *)(DAT_080059a8 + 0x1c);
  }
  uVar4 = (param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4);
  if ((~param_1 & 0x300000) == 0) {
    uVar3 = uVar3 & 0xf0ffffff;
    *(uint *)(DAT_080059a8 + 4) = *(uint *)(DAT_080059a8 + 4) & 0xf0ffffff;
  }
  else {
    uVar1 = uVar4;
    if ((param_1 & 0x100000) != 0) {
      uVar1 = 3 << ((param_1 << 0xc) >> 0x1c);
    }
    uVar3 = uVar3 & ~uVar1 | 0xf000000;
  }
  if (param_2 != 0) {
    uVar3 = uVar4 | uVar3;
  }
  bVar5 = (param_1 & 0x80000000) != 0;
  if (bVar5) {
    *(uint *)(iVar2 + 0x1c) = uVar3;
  }
  if (!bVar5) {
    *(uint *)(iVar2 + 4) = uVar3;
  }
  return;
}



/* ENTRY 080059ac : FUN_080059ac */

void FUN_080059ac(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if (param_1[3] != 0) {
    uVar2 = 0x700 - (*DAT_08005a14 & 0x700) >> 8;
    *(char *)((uint)bVar1 + DAT_08005a18) =
         (char)((0xfU >> (uVar2 & 0xff) & (uint)param_1[2] | (uint)param_1[1] << (4 - uVar2 & 0xff))
               << 4);
    *(int *)((uint)(*param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (*param_1 & 0x1f);
    return;
  }
  *(int *)((uint)(bVar1 >> 5) * 4 + -0x1fff1e80) = 1 << (bVar1 & 0x1f);
  return;
}



/* ENTRY 08005a1c : FUN_08005a1c */

void FUN_08005a1c(uint param_1)

{
  *DAT_08005a2c = param_1 | 0x5fa0000;
  return;
}



/* ENTRY 08005a30 : FUN_08005a30 */

void FUN_08005a30(uint param_1,uint param_2)

{
  *DAT_08005a40 = param_1 | param_2 & 0x1fffff80;
  return;
}



/* ENTRY 08005a44 : FUN_08005a44 */

void FUN_08005a44(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = *(uint *)(DAT_08005a58 + 0x14) & ~param_1;
  }
  else {
    param_1 = param_1 | *(uint *)(DAT_08005a58 + 0x14);
  }
  *(uint *)(DAT_08005a58 + 0x14) = param_1;
  return;
}



/* ENTRY 08005a5c : FUN_08005a5c */

void FUN_08005a5c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = *(uint *)(DAT_08005a70 + 0x1c) & ~param_1;
  }
  else {
    param_1 = param_1 | *(uint *)(DAT_08005a70 + 0x1c);
  }
  *(uint *)(DAT_08005a70 + 0x1c) = param_1;
  return;
}



/* ENTRY 08005a74 : FUN_08005a74 */

void FUN_08005a74(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = *(uint *)(DAT_08005a88 + 0x18) & ~param_1;
  }
  else {
    param_1 = param_1 | *(uint *)(DAT_08005a88 + 0x18);
  }
  *(uint *)(DAT_08005a88 + 0x18) = param_1;
  return;
}



/* ENTRY 08005a8c : FUN_08005a8c */

void FUN_08005a8c(void)

{
  uint *puVar1;
  
  puVar1 = DAT_08005ac4;
  *DAT_08005ac4 = *DAT_08005ac4 | 1;
  puVar1[1] = puVar1[1] & DAT_08005ac8;
  *puVar1 = *puVar1 & 0xfef6ffff;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xff80ffff;
  puVar1[2] = 0x9f0000;
  return;
}



/* ENTRY 08005acc : FUN_08005acc */

void FUN_08005acc(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_08005b68;
  uVar3 = *(uint *)(DAT_08005b68 + 4) & 0xc;
  if ((uVar3 == 0 || uVar3 == 4) || (uVar3 != 8)) {
    *param_1 = DAT_08005b6c;
  }
  else {
    iVar2 = ((*(uint *)(DAT_08005b68 + 4) & 0x3c0000) >> 0x12) + 2;
    if (((*(uint *)(DAT_08005b68 + 4) & 0x10000) == 0) ||
       ((*(uint *)(DAT_08005b68 + 4) & 0x20000) != 0)) {
      *param_1 = DAT_08005b70 * iVar2;
    }
    else {
      *param_1 = DAT_08005b6c * iVar2;
    }
  }
  iVar2 = DAT_08005b74;
  uVar3 = *param_1 >> *(sbyte *)(DAT_08005b74 + ((*(uint *)(iVar1 + 4) & 0xf0) >> 4));
  param_1[1] = uVar3;
  param_1[2] = uVar3 >> *(sbyte *)(iVar2 + ((*(uint *)(iVar1 + 4) & 0x700) >> 8));
  uVar3 = uVar3 >> *(sbyte *)(iVar2 + ((*(uint *)(iVar1 + 4) & 0x3800) >> 0xb));
  param_1[3] = uVar3;
  param_1[4] = uVar3 / *(byte *)(DAT_08005b78 + ((*(uint *)(iVar1 + 4) & 0xc000) >> 0xe));
  return;
}



/* ENTRY 08005b7c : FUN_08005b7c */

bool FUN_08005b7c(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 5 == 1) {
    uVar1 = *DAT_08005ba8;
  }
  else if (param_1 >> 5 == 2) {
    uVar1 = DAT_08005ba8[8];
  }
  else {
    uVar1 = DAT_08005ba8[9];
  }
  return (1 << (param_1 & 0x1f) & uVar1) != 0;
}



/* ENTRY 08005bac : FUN_08005bac */

uint FUN_08005bac(void)

{
  return *(uint *)(DAT_08005bb8 + 4) & 0xc;
}



/* ENTRY 08005bbc : FUN_08005bbc */

void FUN_08005bbc(uint param_1)

{
  *(uint *)(DAT_08005bcc + 4) = param_1 | *(uint *)(DAT_08005bcc + 4) & 0xffffff0f;
  return;
}



/* ENTRY 08005bd0 : FUN_08005bd0 */

void FUN_08005bd0(uint param_1)

{
  *(uint *)(DAT_08005be0 + 4) = param_1 | *(uint *)(DAT_08005be0 + 4) & 0xfffff8ff;
  return;
}



/* ENTRY 08005be4 : FUN_08005be4 */

void FUN_08005be4(int param_1)

{
  *(uint *)(DAT_08005bf4 + 4) = *(uint *)(DAT_08005bf4 + 4) & 0xffffc7ff | param_1 << 3;
  return;
}



/* ENTRY 08005bf8 : FUN_08005bf8 */

void FUN_08005bf8(undefined4 param_1)

{
  *(undefined4 *)(DAT_08005c00 + 0x60) = param_1;
  return;
}



/* ENTRY 08005c04 : FUN_08005c04 */

void FUN_08005c04(uint param_1,uint param_2)

{
  *(uint *)(DAT_08005c14 + 4) = param_1 | param_2 | *(uint *)(DAT_08005c14 + 4) & 0xffc0ffff;
  return;
}



/* ENTRY 08005c18 : FUN_08005c18 */

void FUN_08005c18(uint param_1)

{
  *(uint *)(DAT_08005c28 + 4) = param_1 | *(uint *)(DAT_08005c28 + 4) & 0xfffffffc;
  return;
}



/* ENTRY 08005c2c : FUN_08005c2c */

void FUN_08005c2c(ushort *param_1,int param_2)

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



/* ENTRY 08005c3e : FUN_08005c3e */

void FUN_08005c3e(int param_1,ushort param_2,int param_3)

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



/* ENTRY 08005c50 : FUN_08005c50 */

void FUN_08005c50(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *unaff_r4;
  ushort *puVar4;
  bool bVar5;
  
  puVar2 = DAT_08005ce8;
  puVar1 = DAT_08005ce4;
  uVar3 = *param_1;
  if (param_1 == DAT_08005ce4 || param_1 == DAT_08005ce8) {
LAB_08005c86:
    uVar3 = uVar3 & 0xff8f | param_2[1];
  }
  else {
    if (param_1 != (ushort *)&DAT_40000000) {
      unaff_r4 = param_1 + -0x20000000;
    }
    if (param_1 == (ushort *)&DAT_40000000 || unaff_r4 == (ushort *)0x400) goto LAB_08005c86;
    puVar4 = param_1 + -0x20000400;
    bVar5 = puVar4 != (ushort *)0x0;
    if (bVar5) {
      puVar4 = param_1 + -0x20000000;
    }
    if (!bVar5 || puVar4 == (ushort *)0xc00) goto LAB_08005c86;
  }
  puVar4 = param_1 + -0x20000800;
  bVar5 = puVar4 != (ushort *)0x0;
  if (bVar5) {
    puVar4 = param_1 + -0x20000000;
  }
  if (bVar5 && puVar4 != (ushort *)0x1400) {
    uVar3 = uVar3 & 0xfcff | param_2[3];
  }
  *param_1 = uVar3;
  param_1[0x16] = param_2[2];
  param_1[0x14] = *param_2;
  if (param_1 != puVar1 && param_1 != puVar2) {
    bVar5 = param_1 == (ushort *)&UNK_40014000 || param_1 == (ushort *)&UNK_40014400;
    if (param_1 != (ushort *)&UNK_40014000 && param_1 != (ushort *)&UNK_40014400) {
      bVar5 = param_1 == (ushort *)&DAT_40014800;
    }
    if (!bVar5) goto LAB_08005cdc;
  }
  param_1[0x18] = (ushort)*(byte *)(param_2 + 4);
LAB_08005cdc:
  param_1[10] = 1;
  return;
}



/* ENTRY 08005cec : FUN_08005cec */

void FUN_08005cec(ushort *param_1,int param_2)

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



/* ENTRY 08005cfe : FUN_08005cfe */

void FUN_08005cfe(ushort *param_1,uint param_2)

{
  *param_1 = ~(ushort)(1 << (param_2 >> 8 & 0xff));
  return;
}



/* ENTRY 08005d0c : FUN_08005d0c */

void FUN_08005d0c(int param_1,int param_2)

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



/* ENTRY 08005d1e : FUN_08005d1e */

void FUN_08005d1e(int param_1,ushort param_2,int param_3)

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



/* ENTRY 08005d2e : FUN_08005d2e */

bool FUN_08005d2e(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 0x18) >> 0x1d;
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



/* ENTRY 08005d7a : FUN_08005d7a */

void FUN_08005d7a(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 << 0x18) >> 0x1d;
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



/* ENTRY 08005dac : FUN_08005dac */

void FUN_08005dac(undefined2 *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined auStack_20 [8];
  int iStack_18;
  int iStack_14;
  
  param_1[8] = param_1[8] & 0xcfff | *(ushort *)((int)param_2 + 6);
  param_1[6] = param_1[6] & 0xe9f3 | *(ushort *)((int)param_2 + 10) |
               *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2);
  param_1[10] = param_1[10] & 0xfcff | *(ushort *)(param_2 + 3);
  FUN_08005acc(auStack_20);
  if (param_1 != &DAT_40013800) {
    iStack_14 = iStack_18;
  }
  if ((param_1[6] & 0x8000) == 0) {
    uVar3 = *param_2 << 2;
  }
  else {
    uVar3 = *param_2 << 1;
  }
  uVar3 = (uint)(iStack_14 * 0x19) / uVar3;
  uVar4 = (uint)((ulonglong)DAT_08005e5c * (ulonglong)uVar3 >> 0x25);
  iVar2 = uVar3 + uVar4 * -100;
  bVar5 = (param_1[6] & 0x8000) != 0;
  if (bVar5) {
    iVar2 = iVar2 * 8;
  }
  else {
    iVar2 = iVar2 * 0x10;
  }
  uVar1 = (ushort)(uint)((ulonglong)DAT_08005e5c * (ulonglong)(iVar2 + 0x32) >> 0x25);
  if (bVar5) {
    uVar1 = uVar1 & 7;
  }
  else {
    uVar1 = uVar1 & 0xf;
  }
  param_1[4] = uVar1 | (ushort)(uVar4 << 4);
  return;
}


