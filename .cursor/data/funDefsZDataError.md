
# xReadFileSection_0x2d3848
## Decomp:

/* ../ml_mem.c */

int xReadFileSection(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 extraout_a1;
  undefined8 extraout_a2;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_t0;
  undefined8 extraout_t0_00;
  undefined8 extraout_t1;
  undefined8 extraout_t1_00;
  undefined8 extraout_t2;
  undefined8 extraout_t2_00;
  undefined8 extraout_t3;
  undefined8 extraout_t3_00;
  ulong uVar5;
  ulong uVar6;
  int aiStack_b0 [4];
  
  if (himem_alloced != 0) {
    bp_error_rgb = 0x8080;
    FatalErrorf("Temporary high memory in use by somebody else when xFileReadSection called.  Check  if another file is being read!"
                ,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  do {
    piVar1 = (int *)GetWadInfo(param_1,param_2);
  } while (piVar1 == (int *)0x0);
  uVar6 = (ulong)wad_fd;
  iVar3 = *piVar1;
  uVar5 = (ulong)iVar3;
  sceLseek(uVar6,piVar1[1],0);
  if ((uVar5 & 0xf) != 0) {
    uVar5 = (ulong)((iVar3 + 0x10) - (int)(uVar5 & 0xf));
  }
  if (((long)param_3 < 1) || ((long)uVar5 < (long)param_3)) {
    iVar3 = piVar1[3];
  }
  else {
    iVar3 = piVar1[3];
    uVar5 = param_3;
  }
  uVar4 = (ulong)iVar3;
  if (uVar4 == 0xffffffffffffffff) {
    aiStack_b0[0] = sceRead(uVar6,(uint)param_4,uVar5);
  }
  else {
    if ((uVar4 & 0xf) != 0) {
      uVar4 = (ulong)((iVar3 + 0x10) - (int)(uVar4 & 0xf));
    }
    uVar2 = AllocHiMem(uVar4,extraout_a1,extraout_a2,extraout_a3,extraout_t0,extraout_t1,extraou t_t2
                       ,extraout_t3);
    do {
      do {
        iVar3 = sceRead(uVar6,uVar2,uVar4);
      } while ((long)iVar3 != uVar4);
      aiStack_b0[0] = *piVar1;
      if ((long)uVar5 < (long)aiStack_b0[0]) {
        bp_error_rgb = 0xe0e0;
        FatalErrorf("Decomp. buffer too small in wadded file: %s/%s",param_1,param_2,extraout_a3 _00,
                    extraout_t0_00,extraout_t1_00,extraout_t2_00,extraout_t3_00);
      }
      iVar3 = uncompress((uint)param_4,aiStack_b0,uVar2,piVar1[3]);
      FreeHiMem();
    } while ((iVar3 != 0) || (aiStack_b0[0] != *piVar1));
  }
  return aiStack_b0[0];
}

## MIPS:
                             *************************************************************
                             *  ../ml_mem.c                                                
                             *************************************************************
                             int  __stdcall  xReadFileSection (undefined8  param_1 ,  und
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             undefined8        a0:8           param_1
             undefined8        a1:8           param_2
             ulong             a2:8           param_3
             undefined8        a3:8           param_4
             undefined8        t0:8           param_5
             undefined8        t1:8           param_6
             undefined8        t2:8           param_7
             undefined8        t3:8           param_8
                             xReadFileSection                                XREF[1]:     ReadFile:002d3a00 (c)   
        002d3848 50  fe  bd       addiu      sp ,sp ,-0x1b0
                 27
             assume gp = <UNKNOWN>
        002d384c a0  01  bf       sd         ra ,0x1a0 (sp )
                 ff
        002d3850 90  01  be       sd         s8 ,0x190 (sp )
                 ff
        002d3854 80  01  b7       sd         s7 ,0x180 (sp )
                 ff
        002d3858 70  01  b6       sd         s6 ,0x170 (sp )
                 ff
        002d385c 60  01  b5       sd         s5 ,0x160 (sp )
                 ff
        002d3860 50  01  b4       sd         s4 ,0x150 (sp )
                 ff
        002d3864 40  01  b3       sd         s3 ,0x140 (sp )
                 ff
        002d3868 30  01  b2       sd         s2 ,0x130 (sp )
                 ff
        002d386c 20  01  b1       sd         s1 ,0x120 (sp )
                 ff
        002d3870 10  01  b0       sd         s0 ,0x110 (sp )
                 ff
        002d3874 2d  b8  80       move       s7 ,param_1
                 00
        002d3878 2d  b0  a0       move       s6 ,param_2
                 00
        002d387c 2d  a8  c0       move       s5 ,param_3
                 00
        002d3880 3a  00  02       lui        v0 ,0x3a
                 3c
        002d3884 e8  21  42       lw         v0 ,offset  himem_alloced (v0 )
                 8c
        002d3888 07  00  40       beq        v0 ,zero ,LAB_002d38a8
                 10
        002d388c 2d  f0  e0       _move      s8 ,param_4
                 00
        002d3890 37  00  02       lui        v0 ,0x37
                 3c
        002d3894 80  80  03       ori        v1 ,zero ,0x8080
                 34
        002d3898 08  80  43       sw         v1 ,-0x7ff8 (v0 )=> bp_error_rgb                    = 000000FFh
                 ac
        002d389c 3b  00  04       lui        param_1 ,0x3b
                 3c
        002d38a0 76  49  0b       jal        FatalErrorf                                      undefined FatalErrorf(char * par
                 0c
        002d38a4 f0  78  84       _addiu     param_1 => s_Temporary_high_memory_in_use_by_s_0  = "Temporary high memory in use 
                 24
                             LAB_002d38a8                                    XREF[1]:     002d3888 (j)   
        002d38a8 2d  20  e0       move       param_1 ,s7
                 02
                             LAB_002d38ac                                    XREF[1]:     002d38b8 (j)   
        002d38ac 46  53  0b       jal        GetWadInfo                                       int GetWadInfo(undefined8 param_
                 0c
        002d38b0 2d  28  c0       _move      param_2 ,s6
                 02
        002d38b4 2d  90  40       move       s2 ,v0
                 00
        002d38b8 fc  ff  40       beq        s2 ,zero ,LAB_002d38ac
                 12
        002d38bc 2d  20  e0       _move      param_1 ,s7
                 02
        002d38c0 3a  00  02       lui        v0 ,0x3a
                 3c
        002d38c4 1c  23  54       lw         s4 ,offset  wad_fd (v0 )
                 8c
        002d38c8 00  00  50       lw         s0 ,0x0 (s2 )
                 8e
        002d38cc 2d  20  80       move       param_1 ,s4
                 02
        002d38d0 04  00  45       lw         param_2 ,0x4 (s2 )
                 8e
        002d38d4 b4  1b  0c       jal        sceLseek                                         undefined4 sceLseek(ulong param_
                 0c
        002d38d8 2d  30  00       _move      param_3 ,zero
                 00
        002d38dc 0f  00  03       andi       v1 ,s0 ,0xf
                 32
        002d38e0 02  00  60       beq        v1 ,zero ,LAB_002d38ec
                 10
        002d38e4 10  00  02       _addiu     v0 ,s0 ,0x10
                 26
        002d38e8 23  80  43       subu       s0 ,v0 ,v1
                 00
                             LAB_002d38ec                                    XREF[1]:     002d38e0 (j)   
        002d38ec 03  00  a0       blez       s5 ,LAB_002d38fc
                 1a
        002d38f0 2a  10  15       _slt       v0 ,s0 ,s5
                 02
        002d38f4 03  00  40       beql       v0 ,zero ,LAB_002d3904
                 50
        002d38f8 0c  00  44       _lw        param_1 ,0xc (s2 )
                 8e
                             LAB_002d38fc                                    XREF[1]:     002d38ec (j)   
        002d38fc 2d  a8  00       move       s5 ,s0
                 02
        002d3900 0c  00  44       lw         param_1 ,0xc (s2 )
                 8e
                             LAB_002d3904                                    XREF[1]:     002d38f4 (j)   
        002d3904 ff  ff  02       li         v0 ,-0x1
                 24
        002d3908 29  00  82       beq        param_1 ,v0 ,LAB_002d39b0
                 10
        002d390c 2d  88  80       _move      s1 ,param_1
                 00
        002d3910 0f  00  23       andi       v1 ,s1 ,0xf
                 32
        002d3914 02  00  60       beq        v1 ,zero ,LAB_002d3920
                 10
        002d3918 10  00  22       _addiu     v0 ,s1 ,0x10
                 26
        002d391c 23  88  43       subu       s1 ,v0 ,v1
                 00
                             LAB_002d3920                                    XREF[1]:     002d3914 (j)   
        002d3920 1a  4f  0b       jal        AllocHiMem                                       undefined AllocHiMem(ulong param
                 0c
        002d3924 2d  20  20       _move      param_1 ,s1
                 02
        002d3928 2d  98  40       move       s3 ,v0
                 00
        002d392c 2d  20  80       move       param_1 ,s4
                 02
                             LAB_002d3930                                    XREF[2]:     002d393c (j) ,  002d3990 (j)   
        002d3930 2d  28  60       move       param_2 ,s3
                 02
                             LAB_002d3934                                    XREF[1]:     002d39a0 (j)   
        002d3934 2e  1c  0c       jal        sceRead                                          undefined4 sceRead(ulong param_1
                 0c
        002d3938 2d  30  20       _move      param_3 ,s1
                 02
        002d393c fc  ff  51       bne        v0 ,s1 ,LAB_002d3930
                 14
        002d3940 2d  20  80       _move      param_1 ,s4
                 02
        002d3944 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d3948 00  01  a2       sw         v0 ,0x100 (sp )
                 af
        002d394c 2a  10  a2       slt        v0 ,s5 ,v0
                 02
        002d3950 08  00  40       beq        v0 ,zero ,LAB_002d3974
                 10
        002d3954 e0  e0  03       _ori       v1 ,zero ,0xe0e0
                 34
        002d3958 37  00  02       lui        v0 ,0x37
                 3c
        002d395c 08  80  43       sw         v1 ,-0x7ff8 (v0 )=> bp_error_rgb                    = 000000FFh
                 ac
        002d3960 3b  00  02       lui        v0 ,0x3b
                 3c
        002d3964 68  79  44       addiu      param_1 => s_Decomp._buffer_too_small_in_wadd_00  = "Decomp. buffer too small in w
                 24
        002d3968 2d  28  e0       move       param_2 ,s7
                 02
        002d396c 76  49  0b       jal        FatalErrorf                                      undefined FatalErrorf(char * par
                 0c
        002d3970 2d  30  c0       _move      param_3 ,s6
                 02
                             LAB_002d3974                                    XREF[1]:     002d3950 (j)   
        002d3974 2d  20  c0       move       param_1 ,s8
                 03
        002d3978 00  01  a5       addiu      param_2 ,sp ,0x100
                 27
        002d397c 2d  30  60       move       param_3 ,s3
                 02
        002d3980 02  5d  0b       jal        uncompress                                       int uncompress(undefined4 param_
                 0c
        002d3984 0c  00  47       _lw        param_4 ,0xc (s2 )
                 8e
        002d3988 12  4f  0b       jal        FreeHiMem                                        undefined FreeHiMem(void)
                 0c
        002d398c 2d  80  40       _move      s0 ,v0
                 00
        002d3990 e7  ff  00       bne        s0 ,zero ,LAB_002d3930
                 16
        002d3994 2d  20  80       _move      param_1 ,s4
                 02
        002d3998 00  01  a3       lw         v1 ,0x100 (sp )
                 8f
        002d399c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d39a0 e4  ff  62       bne        v1 ,v0 ,LAB_002d3934
                 14
        002d39a4 2d  28  60       _move      param_2 ,s3
                 02
        002d39a8 05  00  00       b          LAB_002d39c0
                 10
        002d39ac 2d  10  60       _move      v0 ,v1
                 00
                             LAB_002d39b0                                    XREF[1]:     002d3908 (j)   
        002d39b0 2d  20  80       move       param_1 ,s4
                 02
        002d39b4 2d  28  c0       move       param_2 ,s8
                 03
        002d39b8 2e  1c  0c       jal        sceRead                                          undefined4 sceRead(ulong param_1
                 0c
        002d39bc 2d  30  a0       _move      param_3 ,s5
                 02
                             LAB_002d39c0                                    XREF[1]:     002d39a8 (j)   
        002d39c0 a0  01  bf       ld         ra ,0x1a0 (sp )
                 df
        002d39c4 90  01  be       ld         s8 ,0x190 (sp )
                 df
        002d39c8 80  01  b7       ld         s7 ,0x180 (sp )
                 df
        002d39cc 70  01  b6       ld         s6 ,0x170 (sp )
                 df
        002d39d0 60  01  b5       ld         s5 ,0x160 (sp )
                 df
        002d39d4 50  01  b4       ld         s4 ,0x150 (sp )
                 df
        002d39d8 40  01  b3       ld         s3 ,0x140 (sp )
                 df
        002d39dc 30  01  b2       ld         s2 ,0x130 (sp )
                 df
        002d39e0 20  01  b1       ld         s1 ,0x120 (sp )
                 df
        002d39e4 10  01  b0       ld         s0 ,0x110 (sp )
                 df
        002d39e8 08  00  e0       jr         ra
                 03
        002d39ec b0  01  bd       _addiu     sp ,sp ,0x1b0
                 27



# GetWadInfo_0x2d4d18

## Decomp:

/* ../ml_mem.c */

int GetWadInfo(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = wad_dir;
  sprintf(wad_last_filename,"%s\\%s",param_1,param_2);
  pcVar1 = strrchr(wad_last_filename,'.');
  if (pcVar1 == (char *)0x0) {
    strcat(wad_last_filename,".ps2");
  }
  BackslashMe(wad_last_filename);
  fed_upper(wad_last_filename);
  iVar2 = hash_me(wad_last_filename);
  iVar3 = 0;
  if (0 < num_files_in_wad) {
    do {
      if (iVar2 == *(int *)(iVar4 + 8)) {
        return iVar4;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < num_files_in_wad);
  }
  return 0;
}

## MIPS

                             *************************************************************
                             *  ../ml_mem.c                                                
                             *************************************************************
                             int  __stdcall  GetWadInfo (undefined8  param_1 ,  undefined
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             undefined8        a0:8           param_1
             undefined8        a1:8           param_2
                             GetWadInfo                                      XREF[5]:     xReadFileSection:002d38ac (c) , 
                                                                                          FileExists:002d3b30 (c) , 
                                                                                          FileMap:002d3bb8 (c) , 
                                                                                          StartFileRead:002d432c (c) , 
                                                                                          WaddedFSize:002d4de8 (c)   
        002d4d18 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002d4d1c 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002d4d20 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002d4d24 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002d4d28 2d  30  80       move       a2 ,param_1
                 00
        002d4d2c 2d  38  a0       move       a3 ,param_2
                 00
        002d4d30 3a  00  02       lui        v0 ,0x3a
                 3c
        002d4d34 24  23  51       lw         s1 ,offset  wad_dir (v0 )
                 8c
        002d4d38 3a  00  10       lui        s0 ,0x3a
                 3c
        002d4d3c a8  23  04       addiu      param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d40 3b  00  05       lui        param_2 ,0x3b
                 3c
        002d4d44 52  62  0b       jal        sprintf                                          int sprintf(char * __s, char * _
                 0c
        002d4d48 c0  7c  a5       _addiu     param_2 => s_%s\%s_003b7cc0 ,param_2 ,0x7cc0       = "%s\\%s"
                 24
        002d4d4c a8  23  04       addiu      param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d50 9e  f4  0b       jal        strrchr                                          char * strrchr(char * s, char pa
                 0c
        002d4d54 2e  00  05       _li        param_2 ,0x2e
                 24
        002d4d58 06  00  40       bnel       v0 ,zero ,LAB_002d4d74
                 54
        002d4d5c 3a  00  10       _lui       s0 ,0x3a
                 3c
        002d4d60 a8  23  04       addiu      param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d64 3b  00  05       lui        param_2 ,0x3b
                 3c
        002d4d68 c1  f1  0b       jal        strcat                                           char * strcat(char * __dest, cha
                 0c
        002d4d6c e0  78  a5       _addiu     param_2 => DAT_003b78e0 ,param_2 ,0x78e0           = 2Eh    .
                 24
        002d4d70 3a  00  10       lui        s0 ,0x3a
                 3c
                             LAB_002d4d74                                    XREF[1]:     002d4d58 (j)   
        002d4d74 be  4d  0b       jal        BackslashMe                                      undefined BackslashMe(char * par
                 0c
        002d4d78 a8  23  04       _addiu     param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d7c 7c  02  08       jal        fed_upper                                        undefined fed_upper(byte * param
                 0c
        002d4d80 a8  23  04       _addiu     param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d84 b4  52  0b       jal        hash_me                                          undefined hash_me(byte * param_1
                 0c
        002d4d88 a8  23  04       _addiu     param_1 => wad_last_filename ,s0 ,0x23a8
                 26
        002d4d8c 2d  28  40       move       param_2 ,v0
                 00
        002d4d90 3a  00  02       lui        v0 ,0x3a
                 3c
        002d4d94 20  23  42       lw         v0 ,offset  num_files_in_wad (v0 )
                 8c
        002d4d98 0b  00  40       blez       v0 ,LAB_002d4dc8
                 18
        002d4d9c 2d  18  00       _move      v1 ,zero
                 00
        002d4da0 3a  00  02       lui        v0 ,0x3a
                 3c
        002d4da4 20  23  44       lw         param_1 ,offset  num_files_in_wad (v0 )
                 8c
                             LAB_002d4da8                                    XREF[1]:     002d4dc0 (j)   
        002d4da8 08  00  22       lw         v0 ,0x8 (s1 )
                 8e
        002d4dac 03  00  a2       bnel       param_2 ,v0 ,LAB_002d4dbc
                 54
        002d4db0 01  00  63       _addiu     v1 ,v1 ,0x1
                 24
        002d4db4 05  00  00       b          LAB_002d4dcc
                 10
        002d4db8 2d  10  20       _move      v0 ,s1
                 02
                             LAB_002d4dbc                                    XREF[1]:     002d4dac (j)   
        002d4dbc 2a  10  64       slt        v0 ,v1 ,param_1
                 00
        002d4dc0 f9  ff  40       bne        v0 ,zero ,LAB_002d4da8
                 14
        002d4dc4 10  00  31       _addiu     s1 ,s1 ,0x10
                 26
                             LAB_002d4dc8                                    XREF[1]:     002d4d98 (j)   
        002d4dc8 2d  10  00       move       v0 ,zero
                 00
                             LAB_002d4dcc                                    XREF[1]:     002d4db4 (j)   
        002d4dcc 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002d4dd0 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002d4dd4 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002d4dd8 08  00  e0       jr         ra
                 03
        002d4ddc 30  00  bd       _addiu     sp ,sp ,0x30
                 27


# sceLseek_0x306ed0

## Decomp:


/* filestub.c */

undefined4 sceLseek(ulong param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  
  puVar3 = (undefined4 *)get_iob(param_1);
  if (_fs_init == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar6 = _sceFsDbChk();
    uVar4 = 0xfffffff0;
    if (lVar6 == 0) {
      if ((puVar3 == (undefined4 *)0x0) || (puVar3[1] == 0)) {
        _sceFsSigSema();
        uVar4 = 0xfffffff7;
      }
      else {
        _send_data = *puVar3;
        bVar1 = (puVar3[1] & 0x8000) != 0;
        puVar7 = &_heap_size;
        if (bVar1) {
          puVar7 = _fs_semid;
        }
        DAT_003e5d44 = param_2;
        DAT_003e5d48 = param_3;
        iVar5 = sceSifCallRpc((undefined4 *)&_cd,4,(ulong)bVar1,0x3e5d40,0xc,0x3e6980,4,0x306a28 ,
                              puVar7);
        uVar2 = DAT_203e6980;
        if (iVar5 < 0) {
          _sceFsSigSema();
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0;
          if ((puVar3[1] & 0x8000) == 0) {
            _sceFsSigSema();
            uVar4 = uVar2;
          }
        }
      }
    }
  }
  return uVar4;
}

## MIPS:

                             *************************************************************
                             *  filestub.c                                                 
                             *************************************************************
                             undefined4  __stdcall  sceLseek (ulong  param_1 ,  undefined
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             ulong             a0:8           param_1
             undefined4        a1_lo:4        param_2
             undefined4        a2_lo:4        param_3
                             sceLseek                                        XREF[7]:     Entry Point (*) , 
                                                                                          LogfilePrintf:002d2978 (c) , 
                                                                                          xReadFileSection:002d38d4 (c) , 
                                                                                          StartFileRead:002d4418 (c) , 
                                                                                          InitWad:002d4eb8 (c) , 
                                                                                          strFileOpen:002dde18 (c) , 
                                                                                          strFileOpen:002dde4c (c)   
        00306ed0 70  ff  bd       addiu      sp ,sp ,-0x90
                 27
             assume gp = <UNKNOWN>
        00306ed4 40  00  b3       sd         s3 ,0x40 (sp )
                 ff
        00306ed8 30  00  b2       sd         s2 ,0x30 (sp )
                 ff
        00306edc 2d  98  c0       move       s3 ,param_3
                 00
        00306ee0 70  00  b6       sd         s6 ,0x70 (sp )
                 ff
        00306ee4 2d  90  a0       move       s2 ,param_2
                 00
        00306ee8 60  00  b5       sd         s5 ,0x60 (sp )
                 ff
        00306eec 2d  b0  00       move       s6 ,zero
                 00
        00306ef0 50  00  b4       sd         s4 ,0x50 (sp )
                 ff
        00306ef4 ff  ff  15       li         s5 ,-0x1
                 24
        00306ef8 20  00  b1       sd         s1 ,0x20 (sp )
                 ff
        00306efc 3e  00  14       lui        s4 ,0x3e
                 3c
        00306f00 10  00  b0       sd         s0 ,0x10 (sp )
                 ff
        00306f04 80  00  bf       sd         ra ,0x80 (sp )
                 ff
        00306f08 78  1a  0c       jal        get_iob                                          undefined * get_iob(ulong param_
                 0c
        00306f0c 40  5d  91       _addiu     s1 ,s4 ,0x5d40
                 26
        00306f10 2d  80  40       move       s0 ,v0
                 00
        00306f14 3a  00  02       lui        v0 ,0x3a
                 3c
        00306f18 88  42  43       lw         v1 ,offset  _fs_init (v0 )
                 8c
        00306f1c 03  00  60       bnel       v1 ,zero ,LAB_00306f2c
                 54
        00306f20 04  00  05       _lw        param_2 ,0x4 (s0 )
                 8e
        00306f24 33  00  00       b          LAB_00306ff4
                 10
        00306f28 ff  ff  02       _li        v0 ,-0x1
                 24
                             LAB_00306f2c                                    XREF[1]:     00306f1c (j)   
        00306f2c 86  1a  0c       jal        _sceFsDbChk                                      undefined8 _sceFsDbChk(void)
                 0c
        00306f30 04  00  04       _li        param_1 ,0x4
                 24
        00306f34 2f  00  40       bne        v0 ,zero ,LAB_00306ff4
                 14
        00306f38 f0  ff  02       _li        v0 ,-0x10
                 24
        00306f3c 04  00  00       beq        s0 ,zero ,LAB_00306f50
                 12
        00306f40 00  00  00       _nop
                 00
        00306f44 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        00306f48 05  00  40       bnel       v0 ,zero ,LAB_00306f60
                 54
        00306f4c 00  00  02       _lw        v0 ,0x0 (s0 )
                 8e
                             LAB_00306f50                                    XREF[1]:     00306f3c (j)   
        00306f50 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        00306f54 00  00  00       _nop
                 00
        00306f58 26  00  00       b          LAB_00306ff4
                 10
        00306f5c f7  ff  02       _li        v0 ,-0x9
                 24
                             LAB_00306f60                                    XREF[1]:     00306f48 (j)   
        00306f60 04  00  32       sw         s2 ,0x4 (s1 )=> DAT_003e5d44                        = ??
                 ae
        00306f64 40  5d  82       sw         v0 ,offset  _send_data (s4 )                        = ??
                 ae
        00306f68 08  00  33       sw         s3 ,0x8 (s1 )=> DAT_003e5d48                        = ??
                 ae
        00306f6c 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        00306f70 00  80  42       andi       v0 ,v0 ,0x8000
                 30
        00306f74 03  00  40       beq        v0 ,zero ,LAB_00306f84
                 10
        00306f78 3a  00  02       _lui       v0 ,0x3a
                 3c
        00306f7c 01  00  16       li         s6 ,0x1
                 24
        00306f80 8c  42  55       lw         s5 ,offset  _fs_semid (v0 )                         = ffffffff
                 8c
                             LAB_00306f84                                    XREF[1]:     00306f74 (j)   
        00306f84 3e  00  02       lui        v0 ,0x3e
                 3c
        00306f88 3e  00  04       lui        param_1 ,0x3e
                 3c
        00306f8c 80  69  52       addiu      s2 ,v0 ,0x6980
                 24
        00306f90 30  00  0b       lui        t3 ,0x30
                 3c
        00306f94 00  00  b5       sw         s5 ,0x0 (sp )
                 af
        00306f98 50  6b  84       addiu      param_1 => _cd ,param_1 ,0x6b50                     = ??
                 24
        00306f9c 2d  30  c0       move       param_3 ,s6
                 02
        00306fa0 2d  38  20       move       a3 ,s1
                 02
        00306fa4 28  6a  6b       addiu      t3 => _sceFsIntrSigSema ,t3 ,0x6a28
                 25
        00306fa8 04  00  05       li         param_2 ,0x4
                 24
        00306fac 0c  00  08       li         t0 ,0xc
                 24
        00306fb0 2d  48  40       move       t1 ,s2
                 02
        00306fb4 aa  18  0c       jal        sceSifCallRpc                                    undefined4 sceSifCallRpc(undefin
                 0c
        00306fb8 04  00  0a       _li        t2 ,offset  _send_data                            = ??
                 24
        00306fbc 05  00  43       bgezl      v0 ,LAB_00306fd4
                 04
        00306fc0 04  00  02       _lw        v0 ,0x4 (s0 )
                 8e
        00306fc4 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        00306fc8 00  00  00       _nop                                                        = ??
                 00
        00306fcc 09  00  00       b          LAB_00306ff4
                 10
        00306fd0 ff  ff  02       _li        v0 ,-0x1
                 24
                             LAB_00306fd4                                    XREF[1]:     00306fbc (j)   
        00306fd4 00  80  42       andi       v0 ,v0 ,0x8000
                 30
        00306fd8 06  00  40       bne        v0 ,zero ,LAB_00306ff4
                 14
        00306fdc 2d  10  00       _move      v0 ,zero
                 00
        00306fe0 00  20  02       lui        v0 ,0x2000
                 3c
        00306fe4 25  10  42       or         v0 ,s2 ,v0
                 02
        00306fe8 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        00306fec 00  00  50       _lw        s0 ,0x0 (v0 )=> DAT_203e6980                        = ??
                 8c
        00306ff0 2d  10  00       move       v0 ,s0
                 02
                             LAB_00306ff4                                    XREF[5]:     00306f24 (j) ,  00306f34 (j) , 
                                                                                          00306f58 (j) ,  00306fcc (j) , 
                                                                                          00306fd8 (j)   
        00306ff4 80  00  bf       ld         ra ,0x80 (sp )
                 df
        00306ff8 70  00  b6       ld         s6 ,0x70 (sp )
                 df
        00306ffc 60  00  b5       ld         s5 ,0x60 (sp )
                 df
        00307000 50  00  b4       ld         s4 ,0x50 (sp )
                 df
        00307004 40  00  b3       ld         s3 ,0x40 (sp )
                 df
        00307008 30  00  b2       ld         s2 ,0x30 (sp )
                 df
        0030700c 20  00  b1       ld         s1 ,0x20 (sp )
                 df
        00307010 10  00  b0       ld         s0 ,0x10 (sp )
                 df
        00307014 08  00  e0       jr         ra
                 03
        00307018 90  00  bd       _addiu     sp ,sp ,0x90
                 27
        0030701c 00              ??         00h
        0030701d 00              ??         00h
        0030701e 00              ??         00h
        0030701f 00              ??         00h


# sceRead_0x3070b8

## Decomp:


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* filestub.c */

undefined4 sceRead(ulong param_1,uint param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  puVar3 = (undefined4 *)get_iob(param_1);
  if (_fs_init == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar6 = _sceFsDbChk();
    uVar4 = 0xfffffff0;
    if (lVar6 == 0) {
      if ((puVar3 == (undefined4 *)0x0) || (puVar3[1] == 0)) {
        _sceFsSigSema();
        uVar4 = 0xfffffff7;
      }
      else {
        DAT_003e6b84 = &_heap_size;
        _riu = &_intr_data;
        _send_data = *puVar3;
        DAT_003e5d48 = (undefined4)param_3;
        _DAT_003e5d4c = &_intr_data;
        uVar7 = puVar3[1];
        bVar1 = (uVar7 & 0x8000) != 0;
        if (bVar1) {
          DAT_003e6b84 = _fs_semid;
          uVar7 = puVar3[1];
        }
        DAT_003e5d44 = param_2;
        if ((uVar7 & 0x20000000) == 0) {
          sceSifWriteBackDCache(param_2,param_3);
        }
        sceSifWriteBackDCache(0x3e69c0,0x90);
        sceSifWriteBackDCache(0x3e5d40,0x10);
        iVar5 = sceSifCallRpc((undefined4 *)&_cd,2,(ulong)bVar1,0x3e5d40,0x10,0x3e6980,4,0x307020 ,
                              &_riu);
        uVar2 = DAT_203e6980;
        if (iVar5 < 0) {
          _sceFsSigSema();
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0;
          if ((puVar3[1] & 0x8000) == 0) {
            _sceFsSigSema();
            uVar4 = uVar2;
          }
        }
      }
    }
  }
  return uVar4;
}

## MIPS:

                             *************************************************************
                             *  filestub.c                                                 
                             *************************************************************
                             undefined4  __stdcall  sceRead (ulong  param_1 ,  uint  param
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             ulong             a0:8           param_1
             uint              a1_lo:4        param_2
             long              a2:8           param_3
                             sceRead                                         XREF[8]:     Entry Point (*) , 
                                                                                          make_icon:00208028 (c) , 
                                                                                          xReadFileSection:002d3934 (c) , 
                                                                                          xReadFileSection:002d39b8 (c) , 
                                                                                          do_threaded_io:002d4218 (c) , 
                                                                                          InitWad:002d4e6c (c) , 
                                                                                          InitWad:002d4ed4 (c) , 
                                                                                          strFileRead:002ddf90 (c)   
        003070b8 60  ff  bd       addiu      sp ,sp ,-0xa0
                 27
             assume gp = <UNKNOWN>
        003070bc 60  00  b5       sd         s5 ,0x60 (sp )
                 ff
        003070c0 50  00  b4       sd         s4 ,0x50 (sp )
                 ff
        003070c4 2d  a8  c0       move       s5 ,param_3
                 00
        003070c8 80  00  b7       sd         s7 ,0x80 (sp )
                 ff
        003070cc 2d  a0  a0       move       s4 ,param_2
                 00
        003070d0 70  00  b6       sd         s6 ,0x70 (sp )
                 ff
        003070d4 2d  b8  00       move       s7 ,zero
                 00
        003070d8 30  00  b2       sd         s2 ,0x30 (sp )
                 ff
        003070dc 3e  00  16       lui        s6 ,0x3e
                 3c
        003070e0 10  00  b0       sd         s0 ,0x10 (sp )
                 ff
        003070e4 40  5d  d2       addiu      s2 ,s6 ,0x5d40
                 26
        003070e8 90  00  bf       sd         ra ,0x90 (sp )
                 ff
        003070ec 40  00  b3       sd         s3 ,0x40 (sp )
                 ff
        003070f0 78  1a  0c       jal        get_iob                                          undefined * get_iob(ulong param_
                 0c
        003070f4 20  00  b1       _sd        s1 ,0x20 (sp )
                 ff
        003070f8 2d  80  40       move       s0 ,v0
                 00
        003070fc 3a  00  02       lui        v0 ,0x3a
                 3c
        00307100 88  42  43       lw         v1 ,offset  _fs_init (v0 )
                 8c
        00307104 03  00  60       bnel       v1 ,zero ,LAB_00307114
                 54
        00307108 04  00  05       _lw        param_2 ,0x4 (s0 )
                 8e
        0030710c 49  00  00       b          LAB_00307234
                 10
        00307110 ff  ff  02       _li        v0 ,-0x1
                 24
                             LAB_00307114                                    XREF[1]:     00307104 (j)   
        00307114 86  1a  0c       jal        _sceFsDbChk                                      undefined8 _sceFsDbChk(void)
                 0c
        00307118 02  00  04       _li        param_1 => DAT_003e0000 ,0x2                       = ??
                 24
        0030711c 45  00  40       bne        v0 ,zero ,LAB_00307234
                 14
        00307120 f0  ff  02       _li        v0 ,-0x10
                 24
        00307124 04  00  00       beq        s0 ,zero ,LAB_00307138
                 12
        00307128 00  00  00       _nop
                 00
        0030712c 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        00307130 05  00  40       bne        v0 ,zero ,LAB_00307148
                 14
        00307134 3e  00  04       _lui       param_1 ,0x3e
                 3c
                             LAB_00307138                                    XREF[1]:     00307124 (j)   
        00307138 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        0030713c 00  00  00       _nop
                 00
        00307140 3c  00  00       b          LAB_00307234
                 10
        00307144 f7  ff  02       _li        v0 ,-0x9
                 24
                             LAB_00307148                                    XREF[1]:     00307130 (j)   
        00307148 ff  ff  03       li         v1 ,-0x1
                 24
        0030714c 80  6b  93       addiu      s3 ,param_1 ,0x6b80
                 24
        00307150 3e  00  02       lui        v0 ,0x3e
                 3c
        00307154 04  00  63       sw         v1 ,0x4 (s3 )=> DAT_003e6b84                        = ??
                 ae
        00307158 c0  69  51       addiu      s1 ,v0 ,0x69c0
                 24
        0030715c 80  6b  91       sw         s1 => _intr_data ,offset  _riu (param_1 )            = ??
                 ac
        00307160 00  00  02       lw         v0 ,0x0 (s0 )
                 8e
        00307164 04  00  54       sw         s4 ,0x4 (s2 )=> DAT_003e5d44                        = ??
                 ae
        00307168 40  5d  c2       sw         v0 ,offset  _send_data (s6 )                        = ??
                 ae
        0030716c 08  00  55       sw         s5 ,0x8 (s2 )=> DAT_003e5d48                        = ??
                 ae
        00307170 0c  00  51       sw         s1 => _intr_data ,0xc (s2 )=> DAT_003e5d4c           = ??
                 ae
        00307174 04  00  03       lw         v1 ,0x4 (s0 )
                 8e
        00307178 00  80  62       andi       v0 ,v1 ,0x8000
                 30
        0030717c 06  00  40       beq        v0 ,zero ,LAB_00307198
                 10
        00307180 00  20  16       _lui       s6 ,0x2000
                 3c
        00307184 3a  00  03       lui        v1 ,0x3a
                 3c
        00307188 01  00  17       li         s7 ,0x1
                 24
        0030718c 8c  42  62       lw         v0 ,offset  _fs_semid (v1 )                         = ffffffff
                 8c
        00307190 04  00  62       sw         v0 ,0x4 (s3 )=> DAT_003e6b84                        = ??
                 ae
        00307194 04  00  03       lw         v1 ,0x4 (s0 )
                 8e
                             LAB_00307198                                    XREF[1]:     0030717c (j)   
        00307198 24  10  76       and        v0 ,v1 ,s6
                 00
        0030719c 05  00  40       bne        v0 ,zero ,LAB_003071b4
                 14
        003071a0 2d  20  20       _move      param_1 ,s1
                 02
        003071a4 2d  20  80       move       param_1 ,s4
                 02
        003071a8 66  16  0c       jal        sceSifWriteBackDCache                            undefined sceSifWriteBackDCache(
                 0c
        003071ac 2d  28  a0       _move      param_2 ,s5
                 02
        003071b0 2d  20  20       move       param_1 ,s1
                 02
                             LAB_003071b4                                    XREF[1]:     0030719c (j)   
        003071b4 66  16  0c       jal        sceSifWriteBackDCache                            undefined sceSifWriteBackDCache(
                 0c
        003071b8 90  00  05       _li        param_2 ,0x90
                 24
        003071bc 2d  20  40       move       param_1 ,s2
                 02
        003071c0 66  16  0c       jal        sceSifWriteBackDCache                            undefined sceSifWriteBackDCache(
                 0c
        003071c4 10  00  05       _li        param_2 ,0x10
                 24
        003071c8 3e  00  02       lui        v0 ,0x3e
                 3c
        003071cc 3e  00  04       lui        param_1 ,0x3e
                 3c
        003071d0 80  69  51       addiu      s1 ,v0 ,0x6980
                 24
        003071d4 30  00  0b       lui        t3 ,0x30
                 3c
        003071d8 00  00  b3       sw         s3 => _riu ,0x0 (sp )                                = ??
                 af
        003071dc 50  6b  84       addiu      param_1 => _cd ,param_1 ,0x6b50                     = ??
                 24
        003071e0 2d  30  e0       move       param_3 ,s7
                 02
        003071e4 2d  38  40       move       a3 ,s2
                 02
        003071e8 20  70  6b       addiu      t3 => fs_read_intr ,t3 ,0x7020
                 25
        003071ec 02  00  05       li         param_2 ,0x2
                 24
        003071f0 10  00  08       li         t0 ,0x10
                 24
        003071f4 2d  48  20       move       t1 ,s1
                 02
        003071f8 aa  18  0c       jal        sceSifCallRpc                                    undefined4 sceSifCallRpc(undefin
                 0c
        003071fc 04  00  0a       _li        t2 ,offset  _send_data                            = ??
                 24
        00307200 05  00  43       bgezl      v0 ,LAB_00307218
                 04
        00307204 04  00  02       _lw        v0 ,0x4 (s0 )
                 8e
        00307208 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        0030720c 00  00  00       _nop                                                        = ??
                 00
        00307210 08  00  00       b          LAB_00307234
                 10
        00307214 ff  ff  02       _li        v0 ,-0x1
                 24
                             LAB_00307218                                    XREF[1]:     00307200 (j)   
        00307218 00  80  42       andi       v0 ,v0 ,0x8000
                 30
        0030721c 05  00  40       bne        v0 ,zero ,LAB_00307234
                 14
        00307220 2d  10  00       _move      v0 ,zero
                 00
        00307224 25  10  d1       or         v0 ,s6 ,s1
                 02
        00307228 88  1a  0c       jal        _sceFsSigSema                                    undefined _sceFsSigSema(void)
                 0c
        0030722c 00  00  50       _lw        s0 ,0x0 (v0 )=> DAT_203e6980                        = ??
                 8c
        00307230 2d  10  00       move       v0 ,s0
                 02
                             LAB_00307234                                    XREF[5]:     0030710c (j) ,  0030711c (j) , 
                                                                                          00307140 (j) ,  00307210 (j) , 
                                                                                          0030721c (j)   
        00307234 90  00  bf       ld         ra ,0x90 (sp )
                 df
        00307238 80  00  b7       ld         s7 ,0x80 (sp )
                 df
        0030723c 70  00  b6       ld         s6 ,0x70 (sp )
                 df
        00307240 60  00  b5       ld         s5 ,0x60 (sp )
                 df
        00307244 50  00  b4       ld         s4 ,0x50 (sp )
                 df
        00307248 40  00  b3       ld         s3 ,0x40 (sp )
                 df
        0030724c 30  00  b2       ld         s2 ,0x30 (sp )
                 df
        00307250 20  00  b1       ld         s1 ,0x20 (sp )
                 df
        00307254 10  00  b0       ld         s0 ,0x10 (sp )
                 df
        00307258 08  00  e0       jr         ra
                 03
        0030725c a0  00  bd       _addiu     sp ,sp ,0xa0
                 27


# uncompress_0x2d7408

## Decomp:


/* ../uncompr.c */

int uncompress(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar2 = (long)(int)&uStack_70;
  uStack_60 = *param_2;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_70 = param_3;
  uStack_6c = param_4;
  uStack_64 = param_1;
  iVar1 = inflateInit_(lVar2,0x3b7d18,0x38);
  if (iVar1 == 0) {
    iVar1 = inflate(lVar2,4);
    *param_2 = uStack_5c;
    if (iVar1 == 1) {
      iVar1 = inflateEnd(lVar2);
    }
    else {
      inflateEnd(lVar2);
    }
  }
  return iVar1;
}

## MIPS:

                             *************************************************************
                             *  ../uncompr.c                                               
                             *************************************************************
                             int  __stdcall  uncompress (undefined4  param_1 ,  undefined
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             undefined4        a0_lo:4        param_1
             undefined4 *      a1_lo:4        param_2
             undefined4        a2_lo:4        param_3
             undefined4        a3_lo:4        param_4
                             uncompress                                      XREF[3]:     Entry Point (*) , 
                                                                                          xReadFileSection:002d3980 (c) , 
                                                                                          do_threaded_io:002d419c (c)   
        002d7408 90  ff  bd       addiu      sp ,sp ,-0x70
                 27
             assume gp = <UNKNOWN>
        002d740c 60  00  bf       sd         ra ,0x60 (sp )
                 ff
        002d7410 50  00  b1       sd         s1 ,0x50 (sp )
                 ff
        002d7414 40  00  b0       sd         s0 ,0x40 (sp )
                 ff
        002d7418 2d  88  a0       move       s1 ,param_2
                 00
        002d741c 00  00  a6       sw         param_3 ,0x0 (sp )
                 af
        002d7420 04  00  a7       sw         param_4 ,0x4 (sp )
                 af
        002d7424 0c  00  a4       sw         param_1 ,0xc (sp )
                 af
        002d7428 00  00  22       lw         v0 ,0x0 (s1 )
                 8e
        002d742c 10  00  a2       sw         v0 ,0x10 (sp )
                 af
        002d7430 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d7434 24  00  a0       sw         zero ,0x24 (sp )
                 af
        002d7438 2d  20  a0       move       param_1 ,sp
                 03
        002d743c 3b  00  05       lui        param_2 ,0x3b
                 3c
        002d7440 18  7d  a5       addiu      param_2 => s_1.0.4_003b7d18 ,param_2 ,0x7d18       = "1.0.4"
                 24
        002d7444 20  63  0b       jal        inflateInit_                                     undefined4 inflateInit_(long par
                 0c
        002d7448 38  00  06       _li        param_3 ,0x38
                 24
        002d744c 2d  80  40       move       s0 ,v0
                 00
        002d7450 11  00  00       bne        s0 ,zero ,LAB_002d7498
                 16
        002d7454 60  00  bf       _ld        ra ,0x60 (sp )
                 df
        002d7458 2d  20  a0       move       param_1 ,sp
                 03
        002d745c 2a  63  0b       jal        inflate                                          int inflate(long param_1, long p
                 0c
        002d7460 04  00  05       _li        param_2 ,0x4
                 24
        002d7464 2d  80  40       move       s0 ,v0
                 00
        002d7468 14  00  a2       lw         v0 ,0x14 (sp )
                 8f
        002d746c 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
        002d7470 01  00  02       li         v0 ,0x1
                 24
        002d7474 05  00  02       beq        s0 ,v0 ,LAB_002d748c
                 12
        002d7478 00  00  00       _nop
                 00
        002d747c ac  62  0b       jal        inflateEnd                                       undefined4 inflateEnd(long param
                 0c
        002d7480 2d  20  a0       _move      param_1 ,sp
                 03
        002d7484 03  00  00       b          LAB_002d7494
                 10
        002d7488 2d  10  00       _move      v0 ,s0
                 02
                             LAB_002d748c                                    XREF[1]:     002d7474 (j)   
        002d748c ac  62  0b       jal        inflateEnd                                       undefined4 inflateEnd(long param
                 0c
        002d7490 2d  20  a0       _move      param_1 ,sp
                 03
                             LAB_002d7494                                    XREF[1]:     002d7484 (j)   
        002d7494 60  00  bf       ld         ra ,0x60 (sp )
                 df
                             LAB_002d7498                                    XREF[1]:     002d7450 (j)   
        002d7498 50  00  b1       ld         s1 ,0x50 (sp )
                 df
        002d749c 40  00  b0       ld         s0 ,0x40 (sp )
                 df
        002d74a0 08  00  e0       jr         ra
                 03
        002d74a4 70  00  bd       _addiu     sp ,sp ,0x70
                 27


# inflateInit__0x2d8c80

## Decomp:

/* ../inflate.c */

undefined4 inflateInit_(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = inflateInit2_(param_1,0xf,param_2,param_3);
  return uVar1;
}

## MIPS:
                             *************************************************************
                             *  ../inflate.c                                               
                             *************************************************************
                             undefined4  __stdcall  inflateInit_ (long  param_1 ,  long  p
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             long              a0:8           param_1
             long              a1:8           param_2
             long              a2:8           param_3
                             inflateInit_                                    XREF[2]:     Entry Point (*) , 
                                                                                          uncompress:002d7444 (c)   
        002d8c80 f0  ff  bd       addiu      sp ,sp ,-0x10
                 27
             assume gp = <UNKNOWN>
        002d8c84 00  00  bf       sd         ra ,0x0 (sp )
                 ff
        002d8c88 2d  10  a0       move       v0 ,param_2
                 00
        002d8c8c 2d  38  c0       move       a3 ,param_3
                 00
        002d8c90 0f  00  05       li         param_2 ,0xf
                 24
        002d8c94 ca  62  0b       jal        inflateInit2_                                    undefined4 inflateInit2_(long pa
                 0c
        002d8c98 2d  30  40       _move      param_3 ,v0
                 00
        002d8c9c 00  00  bf       ld         ra ,0x0 (sp )
                 df
        002d8ca0 08  00  e0       jr         ra
                 03
        002d8ca4 10  00  bd       _addiu     sp ,sp ,0x10
                 27

# inflateInit2__0x2d8b28

## Decomp:


/* ../inflate.c */

undefined4 inflateInit2_(long param_1,uint param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  
  if (param_3 != 0) {
    if (*(char *)param_3 != '1') {
      return 0xfffffffa;
    }
    if (param_4 == 0x38) {
      if (param_1 == 0) {
        return 0xfffffffe;
      }
      iVar4 = (int)param_1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      if (*(int *)(iVar4 + 0x20) == 0) {
        *(code **)(iVar4 + 0x20) = zcalloc;
        *(undefined4 *)(iVar4 + 0x28) = 0;
        iVar1 = *(int *)(iVar4 + 0x24);
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x24);
      }
      if (iVar1 == 0) {
        *(code **)(iVar4 + 0x24) = zcfree;
        pcVar3 = *(code **)(iVar4 + 0x20);
      }
      else {
        pcVar3 = *(code **)(iVar4 + 0x20);
      }
      lVar2 = (*pcVar3)(*(undefined4 *)(iVar4 + 0x28),1,0x18);
      *(int *)(iVar4 + 0x1c) = (int)lVar2;
      if (lVar2 == 0) {
        return 0xfffffffc;
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x14) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0xc) = 0;
      if ((int)param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0xc) = 1;
      }
      if (7 < param_2 - 8) {
        inflateEnd(param_1);
        return 0xfffffffe;
      }
      *(uint *)(*(int *)(iVar4 + 0x1c) + 0x10) = param_2;
      pcVar3 = (code *)0x0;
      if (*(int *)(*(int *)(iVar4 + 0x1c) + 0xc) == 0) {
        pcVar3 = adler32;
      }
      lVar2 = inflate_blocks_new(iVar4,(int)pcVar3,(long)(1 << (param_2 & 0x1f)));
      *(int *)(*(int *)(iVar4 + 0x1c) + 0x14) = (int)lVar2;
      if (lVar2 == 0) {
        inflateEnd(param_1);
        return 0xfffffffc;
      }
      inflateReset(param_1);
      return 0;
    }
  }
  return 0xfffffffa;
}

## MIPS:

                             *************************************************************
                             *  ../inflate.c                                               
                             *************************************************************
                             undefined4  __stdcall  inflateInit2_ (long  param_1 ,  uint 
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             long              a0:8           param_1
             uint              a1_lo:4        param_2
             long              a2:8           param_3
             long              a3:8           param_4
                             inflateInit2_                                   XREF[2]:     Entry Point (*) , 
                                                                                          inflateInit_:002d8c94 (c)   
        002d8b28 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002d8b2c 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002d8b30 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002d8b34 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002d8b38 2d  80  80       move       s0 ,param_1
                 00
        002d8b3c 08  00  c0       beq        param_3 ,zero ,LAB_002d8b60
                 10
        002d8b40 2d  88  a0       _move      s1 ,param_2
                 00
        002d8b44 00  00  c3       lb         v1 ,0x0 (param_3 )
                 80
        002d8b48 31  00  02       li         v0 ,0x31
                 24
        002d8b4c 46  00  62       bne        v1 ,v0 ,LAB_002d8c68
                 14
        002d8b50 fa  ff  02       _li        v0 ,-0x6
                 24
        002d8b54 38  00  02       li         v0 ,0x38
                 24
        002d8b58 03  00  e2       beq        param_4 ,v0 ,LAB_002d8b68
                 10
        002d8b5c 00  00  00       _nop
                 00
                             LAB_002d8b60                                    XREF[1]:     002d8b3c (j)   
        002d8b60 41  00  00       b          LAB_002d8c68
                 10
        002d8b64 fa  ff  02       _li        v0 ,-0x6
                 24
                             LAB_002d8b68                                    XREF[1]:     002d8b58 (j)   
        002d8b68 03  00  00       bnel       s0 ,zero ,LAB_002d8b78
                 56
        002d8b6c 18  00  00       _sw        zero ,0x18 (s0 )
                 ae
        002d8b70 3d  00  00       b          LAB_002d8c68
                 10
        002d8b74 fe  ff  02       _li        v0 ,-0x2
                 24
                             LAB_002d8b78                                    XREF[1]:     002d8b68 (j)   
        002d8b78 20  00  02       lw         v0 ,0x20 (s0 )
                 8e
        002d8b7c 06  00  40       bnel       v0 ,zero ,LAB_002d8b98
                 54
        002d8b80 24  00  02       _lw        v0 ,0x24 (s0 )
                 8e
        002d8b84 2e  00  02       lui        v0 ,0x2e
                 3c
        002d8b88 50  a5  42       addiu      v0 ,v0 ,-0x5ab0
                 24
        002d8b8c 20  00  02       sw         v0 => zcalloc ,0x20 (s0 )
                 ae
        002d8b90 28  00  00       sw         zero ,0x28 (s0 )
                 ae
        002d8b94 24  00  02       lw         v0 ,0x24 (s0 )
                 8e
                             LAB_002d8b98                                    XREF[1]:     002d8b7c (j)   
        002d8b98 05  00  40       bnel       v0 ,zero ,LAB_002d8bb0
                 54
        002d8b9c 20  00  02       _lw        v0 ,0x20 (s0 )
                 8e
        002d8ba0 2e  00  02       lui        v0 ,0x2e
                 3c
        002d8ba4 70  a5  42       addiu      v0 ,v0 ,-0x5a90
                 24
        002d8ba8 24  00  02       sw         v0 => zcfree ,0x24 (s0 )
                 ae
        002d8bac 20  00  02       lw         v0 ,0x20 (s0 )
                 8e
                             LAB_002d8bb0                                    XREF[1]:     002d8b98 (j)   
        002d8bb0 28  00  04       lw         param_1 ,0x28 (s0 )
                 8e
        002d8bb4 01  00  05       li         param_2 ,0x1
                 24
        002d8bb8 09  f8  40       jalr       v0
                 00
        002d8bbc 18  00  06       _li        param_3 ,0x18
                 24
        002d8bc0 03  00  40       bne        v0 ,zero ,LAB_002d8bd0
                 14
        002d8bc4 1c  00  02       _sw        v0 ,0x1c (s0 )
                 ae
        002d8bc8 27  00  00       b          LAB_002d8c68
                 10
        002d8bcc fc  ff  02       _li        v0 ,-0x4
                 24
                             LAB_002d8bd0                                    XREF[1]:     002d8bc0 (j)   
        002d8bd0 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8bd4 14  00  40       sw         zero ,0x14 (v0 )
                 ac
        002d8bd8 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8bdc 05  00  21       bgez       s1 ,LAB_002d8bf4
                 06
        002d8be0 0c  00  40       _sw        zero ,0xc (v0 )
                 ac
        002d8be4 23  88  11       subu       s1 ,zero ,s1
                 00
        002d8be8 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8bec 01  00  02       li         v0 ,0x1
                 24
        002d8bf0 0c  00  62       sw         v0 ,0xc (v1 )
                 ac
                             LAB_002d8bf4                                    XREF[1]:     002d8bdc (j)   
        002d8bf4 f8  ff  22       addiu      v0 ,s1 ,-0x8
                 26
        002d8bf8 08  00  42       sltiu      v0 ,v0 ,0x8
                 2c
        002d8bfc 05  00  40       bnel       v0 ,zero ,LAB_002d8c14
                 54
        002d8c00 1c  00  02       _lw        v0 ,0x1c (s0 )
                 8e
        002d8c04 ac  62  0b       jal        inflateEnd                                       undefined4 inflateEnd(long param
                 0c
        002d8c08 2d  20  00       _move      param_1 ,s0
                 02
        002d8c0c 16  00  00       b          LAB_002d8c68
                 10
        002d8c10 fe  ff  02       _li        v0 ,-0x2
                 24
                             LAB_002d8c14                                    XREF[1]:     002d8bfc (j)   
        002d8c14 10  00  51       sw         s1 ,0x10 (v0 )
                 ac
        002d8c18 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8c1c 0c  00  42       lw         v0 ,0xc (v0 )
                 8c
        002d8c20 03  00  40       bne        v0 ,zero ,LAB_002d8c30
                 14
        002d8c24 2d  28  00       _move      param_2 ,zero
                 00
        002d8c28 2e  00  02       lui        v0 ,0x2e
                 3c
        002d8c2c c8  93  45       addiu      param_2 => adler32 ,v0 ,-0x6c38
                 24
                             LAB_002d8c30                                    XREF[1]:     002d8c20 (j)   
        002d8c30 01  00  06       li         param_3 ,0x1
                 24
        002d8c34 2d  20  00       move       param_1 ,s0
                 02
        002d8c38 8e  65  0b       jal        inflate_blocks_new                               long inflate_blocks_new(int para
                 0c
        002d8c3c 04  30  26       _sllv      param_3 ,param_3 ,s1
                 02
        002d8c40 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8c44 05  00  40       bne        v0 ,zero ,LAB_002d8c5c
                 14
        002d8c48 14  00  62       _sw        v0 ,0x14 (v1 )
                 ac
        002d8c4c ac  62  0b       jal        inflateEnd                                       undefined4 inflateEnd(long param
                 0c
        002d8c50 2d  20  00       _move      param_1 ,s0
                 02
        002d8c54 04  00  00       b          LAB_002d8c68
                 10
        002d8c58 fc  ff  02       _li        v0 ,-0x4
                 24
                             LAB_002d8c5c                                    XREF[1]:     002d8c44 (j)   
        002d8c5c 94  62  0b       jal        inflateReset                                     undefined4 inflateReset(long par
                 0c
        002d8c60 2d  20  00       _move      param_1 ,s0
                 02
        002d8c64 2d  10  00       move       v0 ,zero
                 00
                             LAB_002d8c68                                    XREF[6]:     002d8b4c (j) ,  002d8b60 (j) , 
                                                                                          002d8b70 (j) ,  002d8bc8 (j) , 
                                                                                          002d8c0c (j) ,  002d8c54 (j)   
        002d8c68 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002d8c6c 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002d8c70 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002d8c74 08  00  e0       jr         ra
                 03
        002d8c78 30  00  bd       _addiu     sp ,sp ,0x30
                 27
        002d8c7c 00              ??         00h
        002d8c7d 00              ??         00h
        002d8c7e 00              ??         00h
        002d8c7f 00              ??         00h

# inflate_0x2d8ca8

## Decomp:


/* WARNING: Removing unreachable block (ram,0x002d8df4) */
/* ../inflate.c */

int inflate(long param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  if ((((param_1 == 0) || (piVar6 = (int *)param_1, piVar6[7] == 0)) || (*piVar6 == 0)) ||
     (iVar4 = -5, param_2 < 0)) {
    return -2;
  }
LAB_002d8ce8:
  switch(*(undefined4 *)piVar6[7]) {
  case 0:
    if (piVar6[1] == 0) {
      return iVar4;
    }
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    pbVar2 = (byte *)*piVar6;
    *(uint *)(piVar6[7] + 4) = (uint)*pbVar2;
    *piVar6 = (int)(pbVar2 + 1);
    puVar3 = (undefined4 *)piVar6[7];
    iVar4 = 0;
    if ((puVar3[1] & 0xf) == 8) {
      if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
        *(undefined4 *)piVar6[7] = 1;
        goto switchD_002d8d0c_caseD_1;
      }
      *puVar3 = 0xd;
      pcVar5 = "invalid window size";
    }
    else {
      *puVar3 = 0xd;
      pcVar5 = "unknown compression method";
    }
    break;
  case 1:
switchD_002d8d0c_caseD_1:
    if (piVar6[1] == 0) {
      return iVar4;
    }
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    bVar1 = *(byte *)*piVar6;
    *piVar6 = (int)((byte *)*piVar6 + 1);
    iVar4 = 0;
    if ((int)(((undefined4 *)piVar6[7])[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
      if ((bVar1 & 0x20) != 0) {
        *(undefined4 *)piVar6[7] = 2;
        goto switchD_002d8d0c_caseD_2;
      }
      *(undefined4 *)piVar6[7] = 7;
      goto LAB_002d8ce8;
    }
    *(undefined4 *)piVar6[7] = 0xd;
    pcVar5 = "incorrect header check";
    break;
  case 2:
switchD_002d8d0c_caseD_2:
    if (piVar6[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    pbVar2 = (byte *)*piVar6;
    *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 << 0x18;
    *piVar6 = (int)(pbVar2 + 1);
    *(undefined4 *)piVar6[7] = 3;
  case 3:
    goto switchD_002d8d0c_caseD_3;
  case 4:
    goto switchD_002d8d0c_caseD_4;
  case 5:
    goto switchD_002d8d0c_caseD_5;
  case 6:
    *(undefined4 *)piVar6[7] = 0xd;
    piVar6[6] = (int)"need dictionary";
    *(undefined4 *)(piVar6[7] + 4) = 0;
    return -2;
  case 7:
    iVar4 = inflate_blocks(*(undefined4 **)(piVar6[7] + 0x14),piVar6,iVar4);
    if (iVar4 == -3) {
      *(undefined4 *)piVar6[7] = 0xd;
      *(undefined4 *)(piVar6[7] + 4) = 0;
      iVar4 = -3;
    }
    else {
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = 0;
      inflate_blocks_reset(*(int **)(piVar6[7] + 0x14),(int)piVar6,(int *)(piVar6[7] + 4));
      puVar3 = (undefined4 *)piVar6[7];
      if (puVar3[3] == 0) {
        *puVar3 = 8;
        goto switchD_002d8d0c_caseD_8;
      }
      *puVar3 = 0xc;
    }
    goto LAB_002d8ce8;
  case 8:
switchD_002d8d0c_caseD_8:
    if (piVar6[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    pbVar2 = (byte *)*piVar6;
    *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 << 0x18;
    *piVar6 = (int)(pbVar2 + 1);
    *(undefined4 *)piVar6[7] = 9;
  case 9:
    if (piVar6[1] == 0) {
      return iVar4;
    }
    iVar4 = 0;
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    pbVar2 = (byte *)*piVar6;
    *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 * 0x10000 + *(int *)(piVar6[7] + 8);
    *piVar6 = (int)(pbVar2 + 1);
    *(undefined4 *)piVar6[7] = 10;
  case 10:
    goto switchD_002d8d0c_caseD_a;
  case 0xb:
    goto switchD_002d8d0c_caseD_b;
  case 0xc:
    goto LAB_002d919c;
  case 0xd:
    return -3;
  default:
    return -2;
  }
LAB_002d9168:
  iVar4 = 0;
  piVar6[6] = (int)pcVar5;
  *(undefined4 *)(piVar6[7] + 4) = 5;
  goto LAB_002d8ce8;
switchD_002d8d0c_caseD_a:
  if (piVar6[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  piVar6[1] = piVar6[1] + -1;
  piVar6[2] = piVar6[2] + 1;
  pbVar2 = (byte *)*piVar6;
  *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 * 0x100 + *(int *)(piVar6[7] + 8);
  *piVar6 = (int)(pbVar2 + 1);
  *(undefined4 *)piVar6[7] = 0xb;
switchD_002d8d0c_caseD_b:
  if (piVar6[1] == 0) {
    return iVar4;
  }
  piVar6[1] = piVar6[1] + -1;
  piVar6[2] = piVar6[2] + 1;
  pbVar2 = (byte *)*piVar6;
  *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 + *(int *)(piVar6[7] + 8);
  *piVar6 = (int)(pbVar2 + 1);
  puVar3 = (undefined4 *)piVar6[7];
  if (puVar3[1] == puVar3[2]) {
    *(undefined4 *)piVar6[7] = 0xc;
LAB_002d919c:
    return 1;
  }
  *puVar3 = 0xd;
  pcVar5 = "incorrect data check";
  goto LAB_002d9168;
switchD_002d8d0c_caseD_3:
  if (piVar6[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  piVar6[1] = piVar6[1] + -1;
  piVar6[2] = piVar6[2] + 1;
  pbVar2 = (byte *)*piVar6;
  *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 * 0x10000 + *(int *)(piVar6[7] + 8);
  *piVar6 = (int)(pbVar2 + 1);
  *(undefined4 *)piVar6[7] = 4;
switchD_002d8d0c_caseD_4:
  if (piVar6[1] == 0) {
    return iVar4;
  }
  iVar4 = 0;
  piVar6[1] = piVar6[1] + -1;
  piVar6[2] = piVar6[2] + 1;
  pbVar2 = (byte *)*piVar6;
  *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 * 0x100 + *(int *)(piVar6[7] + 8);
  *piVar6 = (int)(pbVar2 + 1);
  *(undefined4 *)piVar6[7] = 5;
switchD_002d8d0c_caseD_5:
  if (piVar6[1] != 0) {
    piVar6[1] = piVar6[1] + -1;
    piVar6[2] = piVar6[2] + 1;
    pbVar2 = (byte *)*piVar6;
    *(uint *)(piVar6[7] + 8) = (uint)*pbVar2 + *(int *)(piVar6[7] + 8);
    *piVar6 = (int)(pbVar2 + 1);
    piVar6[0xc] = ((undefined4 *)piVar6[7])[2];
    *(undefined4 *)piVar6[7] = 6;
    return 2;
  }
  return iVar4;
}

## MIPS:

                             *************************************************************
                             *  ../inflate.c                                               
                             *************************************************************
                             int  __stdcall  inflate (long  param_1 ,  long  param_2 )
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             long              a0:8           param_1
             long              a1:8           param_2
                             inflate                                         XREF[2]:     Entry Point (*) , 
                                                                                          uncompress:002d745c (c)   
        002d8ca8 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002d8cac 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002d8cb0 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002d8cb4 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002d8cb8 2d  80  80       move       s0 ,param_1
                 00
        002d8cbc 37  01  00       beq        s0 ,zero ,LAB_002d919c
                 12
        002d8cc0 fe  ff  02       _li        v0 ,-0x2
                 24
        002d8cc4 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8cc8 34  01  40       beq        v0 ,zero ,LAB_002d919c
                 10
        002d8ccc fe  ff  02       _li        v0 ,-0x2
                 24
        002d8cd0 00  00  02       lw         v0 ,0x0 (s0 )
                 8e
        002d8cd4 31  01  40       beq        v0 ,zero ,LAB_002d919c
                 10
        002d8cd8 fe  ff  02       _li        v0 ,-0x2
                 24
        002d8cdc 2f  01  a0       bltz       param_2 ,LAB_002d919c
                 04
        002d8ce0 fb  ff  11       _li        s1 ,-0x5
                 24
        002d8ce4 00  00  00       nop
                 00
                             LAB_002d8ce8                                    XREF[4]:     002d8e28 (j) ,  002d8fd0 (j) , 
                                                                                          002d9008 (j) ,  002d9174 (j)   
        002d8ce8 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8cec 00  00  43       lw         v1 ,0x0 (v0 )
                 8c
        002d8cf0 0e  00  62       sltiu      v0 ,v1 ,0xe
                 2c
        002d8cf4 28  01  40       beq        v0 ,zero ,switchD_002d8d0c::default
                 10
        002d8cf8 3c  00  02       _lui       v0 ,0x3c
                 3c
        002d8cfc 40  80  42       addiu      v0 ,v0 ,-0x7fc0
                 24
        002d8d00 80  18  03       sll        v1 ,v1 ,0x2
                 00
        002d8d04 21  18  62       addu       v1 ,v1 ,v0
                 00
        002d8d08 00  00  62       lw         v0 => switchD_002d8d0c::switchdataD_003b8040  ,0  = 002d8d14
                 8c                                                                          = 002d9190
                             switchD_002d8d0c::switchD
        002d8d0c 08  00  40       jr         v0
                 00
        002d8d10 00  00  00       _nop
                 00
                             switchD_002d8d0c::caseD_0                       XREF[2]:     002d8d0c (j) ,  003b8040 (*)   
        002d8d14 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8d18 fc  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8d1c ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8d20 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8d24 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8d28 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8d2c 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8d30 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d8d34 00  00  03       lw         v1 ,0x0 (s0 )
                 8e
        002d8d38 00  00  62       lbu        v0 ,0x0 (v1 )
                 90
        002d8d3c 04  00  82       sw         v0 ,0x4 (param_1 )
                 ac
        002d8d40 01  00  63       addiu      v1 ,v1 ,0x1
                 24
        002d8d44 00  00  03       sw         v1 ,0x0 (s0 )
                 ae
        002d8d48 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d8d4c 04  00  82       lw         v0 ,0x4 (param_1 )
                 8c
        002d8d50 0f  00  42       andi       v0 ,v0 ,0xf
                 30
        002d8d54 08  00  03       li         v1 ,0x8
                 24
        002d8d58 06  00  43       beq        v0 ,v1 ,LAB_002d8d74
                 10
        002d8d5c 2d  88  00       _move      s1 ,zero
                 00
        002d8d60 0d  00  02       li         v0 ,0xd
                 24
        002d8d64 00  00  82       sw         v0 ,0x0 (param_1 )
                 ac
        002d8d68 3b  00  02       lui        v0 ,0x3b
                 3c
        002d8d6c fe  00  00       b          LAB_002d9168
                 10
        002d8d70 c0  7f  42       _addiu     v0 ,v0 ,0x7fc0
                 24
                             LAB_002d8d74                                    XREF[1]:     002d8d58 (j)   
        002d8d74 04  00  83       lw         v1 ,0x4 (param_1 )
                 8c
        002d8d78 02  19  03       srl        v1 ,v1 ,0x4
                 00
        002d8d7c 08  00  63       addiu      v1 ,v1 ,0x8
                 24
        002d8d80 10  00  82       lw         v0 ,0x10 (param_1 )
                 8c
        002d8d84 2b  10  43       sltu       v0 ,v0 ,v1
                 00
        002d8d88 05  00  40       beq        v0 ,zero ,LAB_002d8da0
                 10
        002d8d8c 0d  00  02       _li        v0 ,0xd
                 24
        002d8d90 00  00  82       sw         v0 ,0x0 (param_1 )
                 ac
        002d8d94 3b  00  02       lui        v0 ,0x3b
                 3c
        002d8d98 f3  00  00       b          LAB_002d9168
                 10
        002d8d9c e0  7f  42       _addiu     v0 ,v0 ,0x7fe0
                 24
                             LAB_002d8da0                                    XREF[1]:     002d8d88 (j)   
        002d8da0 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8da4 01  00  02       li         v0 ,0x1
                 24
        002d8da8 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_1                       XREF[2]:     002d8d0c (j) ,  003b8044 (*)   
        002d8dac 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8db0 d6  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8db4 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8db8 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8dbc 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8dc0 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8dc4 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8dc8 00  00  02       lw         v0 ,0x0 (s0 )
                 8e
        002d8dcc 00  00  45       lbu        param_2 ,0x0 (v0 )
                 90
        002d8dd0 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8dd4 00  00  02       sw         v0 ,0x0 (s0 )
                 ae
        002d8dd8 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d8ddc 04  00  83       lw         v1 ,0x4 (param_1 )
                 8c
        002d8de0 00  1a  03       sll        v1 ,v1 ,0x8
                 00
        002d8de4 21  18  65       addu       v1 ,v1 ,param_2
                 00
        002d8de8 1f  00  02       li         v0 ,0x1f
                 24
        002d8dec 1b  00  62       divu       v1 ,v0
                 00
        002d8df0 10  18  00       mfhi       v1
                 00
        002d8df4 01  00  40       beql       v0 ,zero ,LAB_002d8dfc
                 50
        002d8df8 cd  01  00       _break     0x7
                 00
                             LAB_002d8dfc                                    XREF[1]:     002d8df4 (j)   
        002d8dfc 06  00  60       beq        v1 ,zero ,LAB_002d8e18
                 10
        002d8e00 2d  88  00       _move      s1 ,zero
                 00
        002d8e04 0d  00  02       li         v0 ,0xd
                 24
        002d8e08 00  00  82       sw         v0 ,0x0 (param_1 )
                 ac
        002d8e0c 3b  00  02       lui        v0 ,0x3b
                 3c
        002d8e10 d5  00  00       b          LAB_002d9168
                 10
        002d8e14 f8  7f  42       _addiu     v0 ,v0 ,0x7ff8
                 24
                             LAB_002d8e18                                    XREF[1]:     002d8dfc (j)   
        002d8e18 20  00  a2       andi       v0 ,param_2 ,0x20
                 30
        002d8e1c 04  00  40       bne        v0 ,zero ,LAB_002d8e30
                 14
        002d8e20 1c  00  03       _lw        v1 ,0x1c (s0 )
                 8e
        002d8e24 07  00  02       li         v0 ,0x7
                 24
        002d8e28 af  ff  00       b          LAB_002d8ce8
                 10
        002d8e2c 00  00  62       _sw        v0 ,0x0 (v1 )
                 ac
                             LAB_002d8e30                                    XREF[1]:     002d8e1c (j)   
        002d8e30 02  00  02       li         v0 ,0x2
                 24
        002d8e34 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_2                       XREF[2]:     002d8d0c (j) ,  003b8048 (*)   
        002d8e38 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8e3c b3  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8e40 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8e44 2d  88  00       move       s1 ,zero
                 00
        002d8e48 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d8e4c 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8e50 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8e54 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8e58 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8e5c 00  00  03       lw         v1 ,0x0 (s0 )
                 8e
        002d8e60 00  00  62       lbu        v0 ,0x0 (v1 )
                 90
        002d8e64 00  16  02       sll        v0 ,v0 ,0x18
                 00
        002d8e68 08  00  82       sw         v0 ,0x8 (param_1 )
                 ac
        002d8e6c 01  00  63       addiu      v1 ,v1 ,0x1
                 24
        002d8e70 00  00  03       sw         v1 ,0x0 (s0 )
                 ae
        002d8e74 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8e78 03  00  02       li         v0 ,0x3
                 24
        002d8e7c 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_3                       XREF[2]:     002d8d0c (j) ,  003b804c (*)   
        002d8e80 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8e84 a1  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8e88 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8e8c 2d  88  00       move       s1 ,zero
                 00
        002d8e90 1c  00  05       lw         param_2 ,0x1c (s0 )
                 8e
        002d8e94 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8e98 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8e9c 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8ea0 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8ea4 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d8ea8 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d8eac 00  14  02       sll        v0 ,v0 ,0x10
                 00
        002d8eb0 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d8eb4 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d8eb8 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d8ebc 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d8ec0 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d8ec4 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8ec8 04  00  02       li         v0 ,0x4
                 24
        002d8ecc 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_4                       XREF[2]:     002d8d0c (j) ,  003b8050 (*)   
        002d8ed0 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8ed4 8d  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8ed8 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8edc 2d  88  00       move       s1 ,zero
                 00
        002d8ee0 1c  00  05       lw         param_2 ,0x1c (s0 )
                 8e
        002d8ee4 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8ee8 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8eec 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8ef0 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8ef4 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d8ef8 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d8efc 00  12  02       sll        v0 ,v0 ,0x8
                 00
        002d8f00 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d8f04 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d8f08 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d8f0c 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d8f10 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d8f14 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8f18 05  00  02       li         v0 ,0x5
                 24
        002d8f1c 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_5                       XREF[2]:     002d8d0c (j) ,  003b8054 (*)   
        002d8f20 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d8f24 79  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d8f28 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d8f2c 1c  00  05       lw         param_2 ,0x1c (s0 )
                 8e
        002d8f30 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d8f34 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d8f38 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d8f3c 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d8f40 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d8f44 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d8f48 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d8f4c 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d8f50 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d8f54 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d8f58 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d8f5c 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8f60 08  00  62       lw         v0 ,0x8 (v1 )
                 8c
        002d8f64 30  00  02       sw         v0 ,0x30 (s0 )
                 ae
        002d8f68 06  00  02       li         v0 ,0x6
                 24
        002d8f6c 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
        002d8f70 8a  00  00       b          LAB_002d919c
                 10
        002d8f74 02  00  02       _li        v0 ,0x2
                 24
                             switchD_002d8d0c::caseD_6                       XREF[2]:     002d8d0c (j) ,  003b8058 (*)   
        002d8f78 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8f7c 0d  00  02       li         v0 ,0xd
                 24
        002d8f80 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
        002d8f84 3c  00  02       lui        v0 ,0x3c
                 3c
        002d8f88 10  80  42       addiu      v0 ,v0 ,-0x7ff0
                 24
        002d8f8c 18  00  02       sw         v0 => s_need_dictionary_003b8010 ,0x18 (s0 )        = "need dictionary"
                 ae
        002d8f90 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8f94 80  00  00       b          switchD_002d8d0c::default
                 10
        002d8f98 04  00  40       _sw        zero ,0x4 (v0 )
                 ac
                             switchD_002d8d0c::caseD_7                       XREF[2]:     002d8d0c (j) ,  003b805c (*)   
        002d8f9c 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8fa0 14  00  44       lw         param_1 ,0x14 (v0 )
                 8c
        002d8fa4 2d  28  00       move       param_2 ,s0
                 02
        002d8fa8 be  65  0b       jal        inflate_blocks                                   int inflate_blocks(undefined4 * 
                 0c
        002d8fac 2d  30  20       _move      a2 ,s1
                 02
        002d8fb0 2d  88  40       move       s1 ,v0
                 00
        002d8fb4 fd  ff  02       li         v0 ,-0x3
                 24
        002d8fb8 07  00  22       bne        s1 ,v0 ,LAB_002d8fd8
                 16
        002d8fbc 01  00  02       _li        v0 ,0x1
                 24
        002d8fc0 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8fc4 0d  00  03       li         v1 ,0xd
                 24
        002d8fc8 00  00  43       sw         v1 ,0x0 (v0 )
                 ac
        002d8fcc 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8fd0 45  ff  00       b          LAB_002d8ce8
                 10
        002d8fd4 04  00  40       _sw        zero ,0x4 (v0 )
                 ac
                             LAB_002d8fd8                                    XREF[1]:     002d8fb8 (j)   
        002d8fd8 70  00  22       bne        s1 ,v0 ,LAB_002d919c
                 16
        002d8fdc 2d  10  20       _move      v0 ,s1
                 02
        002d8fe0 2d  88  00       move       s1 ,zero
                 00
        002d8fe4 1c  00  06       lw         a2 ,0x1c (s0 )
                 8e
        002d8fe8 14  00  c4       lw         param_1 ,0x14 (a2 )
                 8c
        002d8fec 2d  28  00       move       param_2 ,s0
                 02
        002d8ff0 5a  65  0b       jal        inflate_blocks_reset                             undefined inflate_blocks_reset(i
                 0c
        002d8ff4 04  00  c6       _addiu     a2 ,a2 ,0x4
                 24
        002d8ff8 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d8ffc 0c  00  62       lw         v0 ,0xc (v1 )
                 8c
        002d9000 03  00  40       beq        v0 ,zero ,LAB_002d9010
                 10
        002d9004 0c  00  02       _li        v0 ,0xc
                 24
        002d9008 37  ff  00       b          LAB_002d8ce8
                 10
        002d900c 00  00  62       _sw        v0 ,0x0 (v1 )
                 ac
                             LAB_002d9010                                    XREF[1]:     002d9000 (j)   
        002d9010 08  00  02       li         v0 ,0x8
                 24
        002d9014 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_8                       XREF[2]:     002d8d0c (j) ,  003b8060 (*)   
        002d9018 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d901c 3b  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d9020 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d9024 2d  88  00       move       s1 ,zero
                 00
        002d9028 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d902c 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d9030 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d9034 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d9038 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d903c 00  00  03       lw         v1 ,0x0 (s0 )
                 8e
        002d9040 00  00  62       lbu        v0 ,0x0 (v1 )
                 90
        002d9044 00  16  02       sll        v0 ,v0 ,0x18
                 00
        002d9048 08  00  82       sw         v0 ,0x8 (param_1 )
                 ac
        002d904c 01  00  63       addiu      v1 ,v1 ,0x1
                 24
        002d9050 00  00  03       sw         v1 ,0x0 (s0 )
                 ae
        002d9054 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d9058 09  00  02       li         v0 ,0x9
                 24
        002d905c 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_9                       XREF[2]:     002d8d0c (j) ,  003b8064 (*)   
        002d9060 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d9064 29  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d9068 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d906c 2d  88  00       move       s1 ,zero
                 00
        002d9070 1c  00  05       lw         param_2 ,0x1c (s0 )
                 8e
        002d9074 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d9078 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d907c 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d9080 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d9084 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d9088 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d908c 00  14  02       sll        v0 ,v0 ,0x10
                 00
        002d9090 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d9094 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9098 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d909c 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d90a0 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d90a4 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d90a8 0a  00  02       li         v0 ,0xa
                 24
        002d90ac 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_a                       XREF[2]:     002d8d0c (j) ,  003b8068 (*)   
        002d90b0 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d90b4 15  00  40       beq        v0 ,zero ,LAB_002d910c
                 10
        002d90b8 ff  ff  42       _addiu     v0 ,v0 ,-0x1
                 24
        002d90bc 2d  88  00       move       s1 ,zero
                 00
        002d90c0 1c  00  05       lw         param_2 ,0x1c (s0 )
                 8e
        002d90c4 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d90c8 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d90cc 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d90d0 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d90d4 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d90d8 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d90dc 00  12  02       sll        v0 ,v0 ,0x8
                 00
        002d90e0 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d90e4 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d90e8 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d90ec 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d90f0 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d90f4 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d90f8 0b  00  02       li         v0 ,0xb
                 24
        002d90fc 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_b                       XREF[2]:     002d8d0c (j) ,  003b806c (*)   
        002d9100 04  00  02       lw         v0 ,0x4 (s0 )
                 8e
        002d9104 03  00  40       bnel       v0 ,zero ,LAB_002d9114
                 54
        002d9108 1c  00  05       _lw        param_2 ,0x1c (s0 )
                 8e
                             LAB_002d910c                                    XREF[9]:     002d8d18 (j) ,  002d8db0 (j) , 
                                                                                          002d8e3c (j) ,  002d8e84 (j) , 
                                                                                          002d8ed4 (j) ,  002d8f24 (j) , 
                                                                                          002d901c (j) ,  002d9064 (j) , 
                                                                                          002d90b4 (j)   
        002d910c 23  00  00       b          LAB_002d919c
                 10
        002d9110 2d  10  20       _move      v0 ,s1
                 02
                             LAB_002d9114                                    XREF[1]:     002d9104 (j)   
        002d9114 ff  ff  42       addiu      v0 ,v0 ,-0x1
                 24
        002d9118 04  00  02       sw         v0 ,0x4 (s0 )
                 ae
        002d911c 08  00  02       lw         v0 ,0x8 (s0 )
                 8e
        002d9120 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d9124 08  00  02       sw         v0 ,0x8 (s0 )
                 ae
        002d9128 00  00  04       lw         param_1 ,0x0 (s0 )
                 8e
        002d912c 00  00  82       lbu        v0 ,0x0 (param_1 )
                 90
        002d9130 08  00  a3       lw         v1 ,0x8 (param_2 )
                 8c
        002d9134 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9138 08  00  a2       sw         v0 ,0x8 (param_2 )
                 ac
        002d913c 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d9140 00  00  04       sw         param_1 ,0x0 (s0 )
                 ae
        002d9144 1c  00  04       lw         param_1 ,0x1c (s0 )
                 8e
        002d9148 04  00  83       lw         v1 ,0x4 (param_1 )
                 8c
        002d914c 08  00  82       lw         v0 ,0x8 (param_1 )
                 8c
        002d9150 0a  00  62       beq        v1 ,v0 ,LAB_002d917c
                 10
        002d9154 2d  88  00       _move      s1 ,zero
                 00
        002d9158 0d  00  02       li         v0 ,0xd
                 24
        002d915c 00  00  82       sw         v0 ,0x0 (param_1 )
                 ac
        002d9160 3c  00  02       lui        v0 ,0x3c
                 3c
        002d9164 20  80  42       addiu      v0 ,v0 ,-0x7fe0
                 24
                             LAB_002d9168                                    XREF[3]:     002d8d6c (j) ,  002d8d98 (j) , 
                                                                                          002d8e10 (j)   
        002d9168 18  00  02       sw         v0 => s_incorrect_data_check_003b8020 ,0x18 (s0 )   = "unknown compression method"
                 ae                                                                          = "invalid window size"
                                                                                             = "incorrect header check"
                                                                                             = "incorrect data check"
        002d916c 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d9170 05  00  02       li         v0 ,0x5
                 24
        002d9174 dc  fe  00       b          LAB_002d8ce8
                 10
        002d9178 04  00  62       _sw        v0 ,0x4 (v1 )
                 ac
                             LAB_002d917c                                    XREF[1]:     002d9150 (j)   
        002d917c 1c  00  03       lw         v1 ,0x1c (s0 )
                 8e
        002d9180 0c  00  02       li         v0 ,0xc
                 24
        002d9184 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
                             switchD_002d8d0c::caseD_c                       XREF[2]:     002d8d0c (j) ,  003b8070 (*)   
        002d9188 04  00  00       b          LAB_002d919c
                 10
        002d918c 01  00  02       _li        v0 ,0x1
                 24
                             switchD_002d8d0c::caseD_d                       XREF[2]:     002d8d0c (j) ,  003b8074 (*)   
        002d9190 02  00  00       b          LAB_002d919c
                 10
        002d9194 fd  ff  02       _li        v0 ,-0x3
                 24
                             switchD_002d8d0c::default                       XREF[2]:     002d8cf4 (j) ,  002d8f94 (j)   
        002d9198 fe  ff  02       li         v0 ,-0x2
                 24
                             LAB_002d919c                                    XREF[9]:     002d8cbc (j) ,  002d8cc8 (j) , 
                                                                                          002d8cd4 (j) ,  002d8cdc (j) , 
                                                                                          002d8f70 (j) ,  002d8fd8 (j) , 
                                                                                          002d910c (j) ,  002d9188 (j) , 
                                                                                          002d9190 (j)   
        002d919c 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002d91a0 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002d91a4 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002d91a8 08  00  e0       jr         ra
                 03
        002d91ac 30  00  bd       _addiu     sp ,sp ,0x30
                 27

# inflate_blocks_reset_0x2d9568

## Decomp:


/* ../infblock.c */

void inflate_blocks_reset(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_1[0xd] != 0) {
    *param_3 = param_1[0xe];
  }
  if (*param_1 - 4U < 2) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (iVar1 == 6) {
    inflate_codes_free((long)param_1[3],param_2);
    inflate_trees_free(param_1[2],param_2);
    inflate_trees_free(param_1[1],param_2);
    *param_1 = 0;
  }
  else {
    *param_1 = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = param_1[9];
  param_1[0xb] = param_1[9];
  if ((code *)param_1[0xd] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xd])(0,0,0);
    param_1[0xe] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}

## MIPS:

                             *************************************************************
                             *  ../infblock.c                                              
                             *************************************************************
                             undefined  __stdcall  inflate_blocks_reset (int *  param_1
                               assume gp = 0x3c3170
             undefined         <UNASSIGNED>   <RETURN>
             int *             a0_lo:4        param_1
             int               a1_lo:4        param_2
             int *             a2_lo:4        param_3
                             inflate_blocks_reset                            XREF[5]:     Entry Point (*) , 
                                                                                          inflateReset:002d8a98 (c) , 
                                                                                          inflate:002d8ff0 (c) , 
                                                                                          inflate_blocks_new:002d96cc (c) , 
                                                                                          inflate_blocks_free:002da4b4 (c)
        002d9568 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002d956c 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002d9570 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002d9574 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002d9578 2d  80  80       move       s0 ,param_1
                 00
        002d957c 34  00  02       lw         v0 ,0x34 (s0 )
                 8e
        002d9580 03  00  40       beq        v0 ,zero ,LAB_002d9590
                 10
        002d9584 2d  88  a0       _move      s1 ,param_2
                 00
        002d9588 38  00  02       lw         v0 ,0x38 (s0 )
                 8e
        002d958c 00  00  c2       sw         v0 ,0x0 (param_3 )
                 ac
                             LAB_002d9590                                    XREF[1]:     002d9580 (j)   
        002d9590 00  00  02       lw         v0 ,0x0 (s0 )
                 8e
        002d9594 fc  ff  42       addiu      v0 ,v0 ,-0x4
                 24
        002d9598 02  00  42       sltiu      v0 ,v0 ,0x2
                 2c
        002d959c 06  00  40       beql       v0 ,zero ,LAB_002d95b8
                 50
        002d95a0 00  00  03       _lw        v1 ,0x0 (s0 )
                 8e
        002d95a4 24  00  22       lw         v0 ,0x24 (s1 )
                 8e
        002d95a8 28  00  24       lw         param_1 ,0x28 (s1 )
                 8e
        002d95ac 09  f8  40       jalr       v0
                 00
        002d95b0 0c  00  05       _lw        param_2 ,0xc (s0 )
                 8e
        002d95b4 00  00  03       lw         v1 ,0x0 (s0 )
                 8e
                             LAB_002d95b8                                    XREF[1]:     002d959c (j)   
        002d95b8 06  00  02       li         v0 ,0x6
                 24
        002d95bc 0b  00  62       bnel       v1 ,v0 ,LAB_002d95ec
                 54
        002d95c0 00  00  00       _sw        zero ,0x0 (s0 )
                 ae
        002d95c4 0c  00  04       lw         param_1 ,0xc (s0 )
                 8e
        002d95c8 b2  6b  0b       jal        inflate_codes_free                               undefined inflate_codes_free(und
                 0c
        002d95cc 2d  28  20       _move      param_2 ,s1
                 02
        002d95d0 08  00  04       lw         param_1 ,0x8 (s0 )
                 8e
        002d95d4 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002d95d8 2d  28  20       _move      param_2 ,s1
                 02
        002d95dc 04  00  04       lw         param_1 ,0x4 (s0 )
                 8e
        002d95e0 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002d95e4 2d  28  20       _move      param_2 ,s1
                 02
        002d95e8 00  00  00       sw         zero ,0x0 (s0 )
                 ae
                             LAB_002d95ec                                    XREF[1]:     002d95bc (j)   
        002d95ec 1c  00  00       sw         zero ,0x1c (s0 )
                 ae
        002d95f0 20  00  00       sw         zero ,0x20 (s0 )
                 ae
        002d95f4 24  00  02       lw         v0 ,0x24 (s0 )
                 8e
        002d95f8 30  00  02       sw         v0 ,0x30 (s0 )
                 ae
        002d95fc 2c  00  02       sw         v0 ,0x2c (s0 )
                 ae
        002d9600 34  00  02       lw         v0 ,0x34 (s0 )
                 8e
        002d9604 06  00  40       beq        v0 ,zero ,LAB_002d9620
                 10
        002d9608 2d  20  00       _move      param_1 ,zero
                 00
        002d960c 2d  28  00       move       param_2 ,zero
                 00
        002d9610 09  f8  40       jalr       v0
                 00
        002d9614 2d  30  00       _move      param_3 ,zero
                 00
        002d9618 38  00  02       sw         v0 ,0x38 (s0 )
                 ae
        002d961c 30  00  22       sw         v0 ,0x30 (s1 )
                 ae
                             LAB_002d9620                                    XREF[1]:     002d9604 (j)   
        002d9620 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002d9624 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002d9628 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002d962c 08  00  e0       jr         ra
                 03
        002d9630 30  00  bd       _addiu     sp ,sp ,0x30
                 27
        002d9634 00              ??         00h
        002d9635 00              ??         00h
        002d9636 00              ??         00h
        002d9637 00              ??         00h

# inflateEnd_0x2d8ab0

## Decomp:


/* ../inflate.c */

undefined4 inflateEnd(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int aiStack_30 [4];
  
  uVar1 = 0xfffffffe;
  if (param_1 != 0) {
    iVar3 = (int)param_1;
    uVar1 = 0xfffffffe;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      if (*(int *)(iVar3 + 0x24) == 0) {
        uVar1 = 0xfffffffe;
      }
      else {
        lVar2 = (long)*(int *)(*(int *)(iVar3 + 0x1c) + 0x14);
        if (lVar2 != 0) {
          inflate_blocks_free(lVar2,iVar3,aiStack_30);
        }
        (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x1c));
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

## MIPS:

                             *************************************************************
                             *  ../inflate.c                                               
                             *************************************************************
                             undefined4  __stdcall  inflateEnd (long  param_1 )
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             long              a0:8           param_1
                             inflateEnd                                      XREF[5]:     Entry Point (*) , 
                                                                                          uncompress:002d747c (c) , 
                                                                                          uncompress:002d748c (c) , 
                                                                                          inflateInit2_:002d8c04 (c) , 
                                                                                          inflateInit2_:002d8c4c (c)   
        002d8ab0 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002d8ab4 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002d8ab8 10  00  b0       sd         s0 ,0x10 (sp )
                 ff
        002d8abc 2d  80  80       move       s0 ,param_1
                 00
        002d8ac0 14  00  00       beq        s0 ,zero ,LAB_002d8b14
                 12
        002d8ac4 fe  ff  02       _li        v0 ,-0x2
                 24
        002d8ac8 1c  00  02       lw         v0 ,0x1c (s0 )
                 8e
        002d8acc 11  00  40       beq        v0 ,zero ,LAB_002d8b14
                 10
        002d8ad0 fe  ff  02       _li        v0 ,-0x2
                 24
        002d8ad4 24  00  02       lw         v0 ,0x24 (s0 )
                 8e
        002d8ad8 03  00  40       bnel       v0 ,zero ,LAB_002d8ae8
                 54
        002d8adc 1c  00  02       _lw        v0 ,0x1c (s0 )
                 8e
        002d8ae0 0c  00  00       b          LAB_002d8b14
                 10
        002d8ae4 fe  ff  02       _li        v0 ,-0x2
                 24
                             LAB_002d8ae8                                    XREF[1]:     002d8ad8 (j)   
        002d8ae8 14  00  44       lw         param_1 ,0x14 (v0 )
                 8c
        002d8aec 03  00  80       beq        param_1 ,zero ,LAB_002d8afc
                 10
        002d8af0 2d  28  00       _move      a1 ,s0
                 02
        002d8af4 28  69  0b       jal        inflate_blocks_free                              undefined8 inflate_blocks_free(u
                 0c
        002d8af8 2d  30  a0       _move      a2 ,sp
                 03
                             LAB_002d8afc                                    XREF[1]:     002d8aec (j)   
        002d8afc 24  00  02       lw         v0 ,0x24 (s0 )
                 8e
        002d8b00 28  00  04       lw         param_1 ,0x28 (s0 )
                 8e
        002d8b04 09  f8  40       jalr       v0
                 00
        002d8b08 1c  00  05       _lw        a1 ,0x1c (s0 )
                 8e
        002d8b0c 1c  00  00       sw         zero ,0x1c (s0 )
                 ae
        002d8b10 2d  10  00       move       v0 ,zero
                 00
                             LAB_002d8b14                                    XREF[3]:     002d8ac0 (j) ,  002d8acc (j) , 
                                                                                          002d8ae0 (j)   
        002d8b14 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002d8b18 10  00  b0       ld         s0 ,0x10 (sp )
                 df
        002d8b1c 08  00  e0       jr         ra
                 03
        002d8b20 30  00  bd       _addiu     sp ,sp ,0x30
                 27
        002d8b24 00              ??         00h
        002d8b25 00              ??         00h
        002d8b26 00              ??         00h
        002d8b27 00              ??         00h


# inflate_blocks_0x2d96f8

## Decomp


/* WARNING: Removing unreachable block (ram,0x002d9f78) */
/* ../infblock.c */

int inflate_blocks(undefined4 *param_1,int *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong __n;
  uint uVar12;
  uint uVar13;
  byte *__src;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint auStack_c0 [3];
  uint uStack_b4;
  int iStack_b0;
  
  __src = (byte *)*param_2;
  uVar16 = (ulong)param_2[1];
  uVar13 = param_1[8];
  pvVar17 = (void *)param_1[0xc];
  uVar12 = param_1[7];
  iStack_b0 = param_3;
  if (pvVar17 < (void *)param_1[0xb]) {
    uVar15 = (ulong)((int)param_1[0xb] + (-1 - (int)pvVar17));
  }
  else {
    uVar15 = (ulong)(param_1[10] - (int)pvVar17);
  }
LAB_002d9768:
  uVar5 = *param_1;
  do {
    iVar7 = (int)uVar16;
    switch(uVar5) {
    case 0:
      while( true ) {
        iVar7 = (int)uVar16;
        if (2 < uVar12) break;
        bVar1 = uVar16 == 0;
        uVar16 = (ulong)(iVar7 + -1);
        if (bVar1) {
          param_1[8] = uVar13;
          param_1[7] = uVar12;
          param_2[1] = 0;
          param_2[2] = (int)(__src + (param_2[2] - *param_2));
          *param_2 = (int)__src;
          param_1[0xc] = pvVar17;
          iVar6 = iStack_b0;
          goto LAB_002da464;
        }
        iStack_b0 = 0;
        uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
        __src = __src + 1;
        uVar12 = uVar12 + 8;
      }
      param_1[6] = uVar13 & 1;
      uVar9 = (uVar13 & 7) >> 1;
      if (uVar9 == 1) {
        inflate_trees_fixed(&uStack_d0,&uStack_cc,&uStack_c8,&uStack_c4);
        lVar8 = inflate_codes_new((char)uStack_d0,(char)uStack_cc,uStack_c8,uStack_c4,(int)param _2);
        param_1[3] = (int)lVar8;
        if (lVar8 == 0) {
          param_1[8] = uVar13;
          param_1[7] = uVar12;
          param_2[1] = iVar7;
          param_2[2] = (int)(__src + (param_2[2] - *param_2));
          *param_2 = (int)__src;
          param_1[0xc] = pvVar17;
          iVar6 = -4;
          goto LAB_002da464;
        }
        param_1[1] = 0;
        param_1[2] = 0;
        uVar13 = uVar13 >> 3;
        uVar12 = uVar12 - 3;
        uVar5 = 6;
        goto LAB_002d980c;
      }
      if (uVar9 == 0) {
        uVar9 = uVar12 - 3 & 7;
        uVar13 = (uVar13 >> 3) >> uVar9;
        uVar12 = (uVar12 - 3) - uVar9;
        uVar5 = 1;
        goto LAB_002d980c;
      }
      uVar5 = 3;
      if (uVar9 == 2) {
        uVar13 = uVar13 >> 3;
        uVar12 = uVar12 - 3;
        goto LAB_002d980c;
      }
      if (uVar9 == 3) {
        *param_1 = 9;
        param_2[6] = (int)"invalid block type";
        param_1[8] = uVar13 >> 3;
        param_1[7] = uVar12 - 3;
        param_2[1] = iVar7;
        param_2[2] = (int)(__src + (param_2[2] - *param_2));
        *param_2 = (int)__src;
        param_1[0xc] = pvVar17;
        iVar6 = -3;
        goto LAB_002da464;
      }
      uVar5 = *param_1;
      break;
    case 1:
      goto switchD_002d9788_caseD_1;
    case 2:
      if (uVar16 == 0) {
        param_1[8] = uVar13;
        param_1[7] = uVar12;
        param_2[1] = 0;
        param_2[2] = (int)(__src + (param_2[2] - *param_2));
        *param_2 = (int)__src;
        param_1[0xc] = pvVar17;
        iVar6 = iStack_b0;
        goto LAB_002da464;
      }
      if (uVar15 == 0) {
        if (pvVar17 == (void *)param_1[10]) {
          pvVar3 = (void *)param_1[0xb];
          pvVar4 = (void *)param_1[9];
          if (pvVar3 != pvVar4) {
            pvVar17 = pvVar4;
            if (pvVar4 < pvVar3) {
              uVar15 = (ulong)((int)pvVar3 + (-1 - (int)pvVar4));
            }
            else {
              uVar15 = (ulong)(param_1[10] - (int)pvVar4);
            }
          }
        }
        if (uVar15 == 0) {
          param_1[0xc] = pvVar17;
          iVar6 = inflate_flush((int)param_1,(int)param_2,iStack_b0);
          pvVar17 = (void *)param_1[0xc];
          if (pvVar17 < (void *)param_1[0xb]) {
            iVar14 = (int)param_1[0xb] + (-1 - (int)pvVar17);
          }
          else {
            iVar14 = param_1[10] - (int)pvVar17;
          }
          uVar15 = (ulong)iVar14;
          if (pvVar17 == (void *)param_1[10]) {
            pvVar3 = (void *)param_1[0xb];
            pvVar4 = (void *)param_1[9];
            if (pvVar3 != pvVar4) {
              pvVar17 = pvVar4;
              if (pvVar4 < pvVar3) {
                uVar15 = (ulong)((int)pvVar3 + (-1 - (int)pvVar4));
              }
              else {
                uVar15 = (ulong)(param_1[10] - (int)pvVar4);
              }
            }
          }
          if (uVar15 == 0) {
            param_1[8] = uVar13;
            param_1[7] = uVar12;
            param_2[1] = iVar7;
            param_2[2] = (int)(__src + (param_2[2] - *param_2));
            *param_2 = (int)__src;
            param_1[0xc] = pvVar17;
            iStack_b0 = iVar6;
            goto LAB_002da464;
          }
        }
      }
      iStack_b0 = 0;
      __n = (long)(int)param_1[1];
      if (uVar16 < (ulong)(long)(int)param_1[1]) {
        __n = uVar16;
      }
      if (uVar15 < __n) {
        __n = uVar15;
      }
      memcpy(pvVar17,__src,__n);
      iVar6 = (int)__n;
      __src = __src + iVar6;
      uVar16 = (ulong)(iVar7 - iVar6);
      pvVar17 = (void *)((int)pvVar17 + iVar6);
      uVar15 = (ulong)((int)uVar15 - iVar6);
      iVar7 = param_1[1];
      param_1[1] = iVar7 - iVar6;
      if (iVar7 - iVar6 != 0) goto LAB_002d9768;
      uVar5 = 7;
      if (param_1[6] == 0) {
        uVar5 = 0;
      }
      goto LAB_002d980c;
    case 3:
      goto switchD_002d9788_caseD_3;
    case 4:
      goto switchD_002d9788_caseD_4;
    case 5:
      goto switchD_002d9788_caseD_5;
    case 6:
      goto switchD_002d9788_caseD_6;
    case 7:
      goto switchD_002d9788_caseD_7;
    case 8:
      goto switchD_002d9788_caseD_8;
    case 9:
      param_1[8] = uVar13;
      param_1[7] = uVar12;
      param_2[1] = iVar7;
      param_2[2] = (int)(__src + (param_2[2] - *param_2));
      *param_2 = (int)__src;
      param_1[0xc] = pvVar17;
      iVar6 = -3;
      goto LAB_002da464;
    default:
      param_1[8] = uVar13;
      param_1[7] = uVar12;
      param_2[1] = iVar7;
      param_2[2] = (int)(__src + (param_2[2] - *param_2));
      *param_2 = (int)__src;
      param_1[0xc] = pvVar17;
      iVar6 = -2;
      goto LAB_002da464;
    }
  } while( true );
switchD_002d9788_caseD_3:
  uVar9 = uVar13 & 0x3fff;
  iVar7 = (int)uVar16;
  if (0xd < uVar12) goto code_r0x002d9b64;
  bVar1 = uVar16 == 0;
  uVar16 = (ulong)(iVar7 + -1);
  if (bVar1) {
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = 0;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = iStack_b0;
    goto LAB_002da464;
  }
  iStack_b0 = 0;
  uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
  __src = __src + 1;
  uVar12 = uVar12 + 8;
  goto switchD_002d9788_caseD_3;
code_r0x002d9b64:
  param_1[1] = uVar9;
  if ((0x1d < (uVar13 & 0x1f)) || (0x1d < (uVar9 >> 5 & 0x1f))) {
    *param_1 = 9;
    param_2[6] = (int)"too many length or distance symbols";
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = iVar7;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = -3;
    goto LAB_002da464;
  }
  uVar10 = (uVar13 & 0x1f) + (uVar9 >> 5 & 0x1f) + 0x102;
  uVar9 = 0x13;
  if (0x12 < uVar10) {
    uVar9 = uVar10;
  }
  lVar8 = (*(code *)param_2[8])(param_2[10],uVar9,4);
  param_1[3] = (int)lVar8;
  if (lVar8 == 0) {
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = iVar7;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = -4;
    goto LAB_002da464;
  }
  uVar13 = uVar13 >> 0xe;
  uVar12 = uVar12 - 0xe;
  param_1[2] = 0;
  *param_1 = 4;
switchD_002d9788_caseD_4:
  if ((uint)param_1[2] < ((uint)param_1[1] >> 10) + 4) {
    do {
      for (; uVar12 < 3; uVar12 = uVar12 + 8) {
        bVar1 = uVar16 == 0;
        uVar16 = (ulong)((int)uVar16 + -1);
        if (bVar1) {
          param_1[8] = uVar13;
          param_1[7] = uVar12;
          param_2[1] = 0;
          param_2[2] = (int)(__src + (param_2[2] - *param_2));
          *param_2 = (int)__src;
          param_1[0xc] = pvVar17;
          iVar6 = iStack_b0;
          goto LAB_002da464;
        }
        iStack_b0 = 0;
        uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
        __src = __src + 1;
      }
      iVar7 = param_1[2];
      *(uint *)(*(int *)(border + iVar7 * 4) * 4 + param_1[3]) = uVar13 & 7;
      uVar9 = iVar7 + 1;
      param_1[2] = uVar9;
      uVar13 = uVar13 >> 3;
      uVar12 = uVar12 - 3;
    } while (uVar9 < ((uint)param_1[1] >> 10) + 4);
  }
  if ((uint)param_1[2] < 0x13) {
    iVar7 = param_1[2];
    while( true ) {
      *(undefined4 *)(*(int *)(border + iVar7 * 4) * 4 + param_1[3]) = 0;
      param_1[2] = iVar7 + 1U;
      if (0x12 < iVar7 + 1U) break;
      iVar7 = param_1[2];
    }
  }
  param_1[4] = 7;
  iVar6 = inflate_trees_bits((int *)param_1[3],param_1 + 4,param_1 + 5,(int)param_2);
  if (iVar6 != 0) {
    if (iVar6 == -3) {
      *param_1 = 9;
    }
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = (int)uVar16;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iStack_b0 = iVar6;
    goto LAB_002da464;
  }
  param_1[2] = 0;
  *param_1 = 5;
switchD_002d9788_caseD_5:
  if ((uint)param_1[2] < (param_1[1] & 0x1f) + ((uint)param_1[1] >> 5 & 0x1f) + 0x102) {
    uVar9 = param_1[4];
joined_r0x002d9dfc:
    for (; uVar12 < uVar9; uVar12 = uVar12 + 8) {
      bVar1 = uVar16 == 0;
      uVar16 = (ulong)((int)uVar16 + -1);
      if (bVar1) {
        param_1[8] = uVar13;
        param_1[7] = uVar12;
        param_2[1] = 0;
        param_2[2] = (int)(__src + (param_2[2] - *param_2));
        *param_2 = (int)__src;
        param_1[0xc] = pvVar17;
        iVar6 = iStack_b0;
        goto LAB_002da464;
      }
      iStack_b0 = 0;
      uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
      __src = __src + 1;
    }
    iVar7 = (uVar13 & *(uint *)(inflate_mask + uVar9 * 4)) * 8 + param_1[5];
    bVar2 = *(byte *)(iVar7 + 1);
    uVar9 = *(uint *)(iVar7 + 4);
    if (uVar9 < 0x10) {
      uVar13 = uVar13 >> (bVar2 & 0x1f);
      uVar12 = uVar12 - bVar2;
      iVar7 = param_1[2];
      *(uint *)(iVar7 * 4 + param_1[3]) = uVar9;
      param_1[2] = iVar7 + 1;
    }
    else {
      uVar10 = 7;
      if ((uVar9 ^ 0x12) != 0) {
        uVar10 = uVar9 - 0xe;
      }
      iVar7 = 3;
      if ((uVar9 ^ 0x12) == 0) {
        iVar7 = 0xb;
      }
      uVar11 = (uint)bVar2;
      if (uVar12 < uVar11 + uVar10) {
        do {
          bVar1 = uVar16 == 0;
          uVar16 = (ulong)((int)uVar16 + -1);
          if (bVar1) {
            param_1[8] = uVar13;
            param_1[7] = uVar12;
            param_2[1] = 0;
            param_2[2] = (int)(__src + (param_2[2] - *param_2));
            *param_2 = (int)__src;
            param_1[0xc] = pvVar17;
            iVar6 = iStack_b0;
            goto LAB_002da464;
          }
          iStack_b0 = 0;
          uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
          uVar12 = uVar12 + 8;
          __src = __src + 1;
        } while (uVar12 < uVar11 + uVar10);
      }
      uVar13 = uVar13 >> (uVar11 & 0x1f);
      iVar7 = iVar7 + (uVar13 & *(uint *)(inflate_mask + uVar10 * 4));
      uVar13 = uVar13 >> (uVar10 & 0x1f);
      uVar12 = (uVar12 - uVar11) - uVar10;
      iVar6 = param_1[2];
      if ((param_1[1] & 0x1f) + ((uint)param_1[1] >> 5 & 0x1f) + 0x102 < (uint)(iVar6 + iVar7)) {
LAB_002d9f38:
        *param_1 = 9;
        param_2[6] = (int)"invalid bit length repeat";
        param_1[8] = uVar13;
        param_1[7] = uVar12;
        param_2[1] = (int)uVar16;
        param_2[2] = (int)(__src + (param_2[2] - *param_2));
        *param_2 = (int)__src;
        param_1[0xc] = pvVar17;
        iVar6 = -3;
        goto LAB_002da464;
      }
      uVar5 = 0;
      if (uVar9 == 0x10) {
        if (iVar6 == 0) goto LAB_002d9f38;
        uVar5 = *(undefined4 *)(iVar6 * 4 + param_1[3] + -4);
      }
      do {
        *(undefined4 *)(iVar6 * 4 + param_1[3]) = uVar5;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      param_1[2] = iVar6;
    }
    if ((uint)param_1[2] < (param_1[1] & 0x1f) + ((uint)param_1[1] >> 5 & 0x1f) + 0x102) {
      uVar9 = param_1[4];
      goto joined_r0x002d9dfc;
    }
  }
  inflate_trees_free(param_1[5],(int)param_2);
  param_1[5] = 0;
  auStack_c0[0] = 9;
  auStack_c0[1] = 6;
  iVar6 = inflate_trees_dynamic
                    ((param_1[1] & 0x1f) + 0x101,((uint)param_1[1] >> 5 & 0x1f) + 1,
                     (int *)param_1[3],auStack_c0,auStack_c0 + 1,auStack_c0 + 2,&uStack_b4,
                     (int)param_2);
  if (iVar6 != 0) {
    if (iVar6 == -3) {
      *param_1 = 9;
    }
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = (int)uVar16;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    goto LAB_002da464;
  }
  lVar8 = inflate_codes_new((char)auStack_c0[0],(char)auStack_c0[1],auStack_c0[2],uStack_b4,
                            (int)param_2);
  if (lVar8 == 0) {
    inflate_trees_free(uStack_b4,(int)param_2);
    inflate_trees_free(auStack_c0[2],(int)param_2);
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = (int)uVar16;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = -4;
    goto LAB_002da464;
  }
  (*(code *)param_2[9])(param_2[10],param_1[3]);
  param_1[3] = (int)lVar8;
  param_1[1] = auStack_c0[2];
  param_1[2] = uStack_b4;
  *param_1 = 6;
switchD_002d9788_caseD_6:
  param_1[8] = uVar13;
  param_1[7] = uVar12;
  param_2[1] = (int)uVar16;
  param_2[2] = (int)(__src + (param_2[2] - *param_2));
  *param_2 = (int)__src;
  param_1[0xc] = pvVar17;
  iVar6 = inflate_codes((int)param_1,param_2,iStack_b0);
  iStack_b0 = iVar6;
  if (iVar6 != 1) goto LAB_002da464;
  iStack_b0 = 0;
  inflate_codes_free((long)(int)param_1[3],(int)param_2);
  inflate_trees_free(param_1[2],(int)param_2);
  inflate_trees_free(param_1[1],(int)param_2);
  __src = (byte *)*param_2;
  uVar16 = (ulong)param_2[1];
  uVar13 = param_1[8];
  pvVar17 = (void *)param_1[0xc];
  uVar12 = param_1[7];
  if (pvVar17 < (void *)param_1[0xb]) {
    iVar7 = (int)param_1[0xb] + (-1 - (int)pvVar17);
  }
  else {
    iVar7 = param_1[10] - (int)pvVar17;
  }
  uVar15 = (ulong)iVar7;
  if (param_1[6] != 0) {
    if (7 < uVar12) {
      uVar12 = uVar12 - 8;
      uVar16 = (ulong)(param_2[1] + 1);
      __src = __src + -1;
    }
    *param_1 = 7;
switchD_002d9788_caseD_7:
    param_1[0xc] = pvVar17;
    iStack_b0 = inflate_flush((int)param_1,(int)param_2,iStack_b0);
    pvVar17 = (void *)param_1[0xc];
    if (param_1[0xb] == param_1[0xc]) {
      *param_1 = 8;
switchD_002d9788_caseD_8:
      param_1[8] = uVar13;
      param_1[7] = uVar12;
      param_2[1] = (int)uVar16;
      param_2[2] = (int)(__src + (param_2[2] - *param_2));
      *param_2 = (int)__src;
      param_1[0xc] = pvVar17;
      iVar6 = 1;
    }
    else {
      param_1[8] = uVar13;
      param_1[7] = uVar12;
      param_2[1] = (int)uVar16;
      param_2[2] = (int)(__src + (param_2[2] - *param_2));
      *param_2 = (int)__src;
      param_1[0xc] = pvVar17;
      iVar6 = iStack_b0;
    }
LAB_002da464:
    iVar7 = inflate_flush((int)param_1,(int)param_2,iVar6);
    return iVar7;
  }
  *param_1 = 0;
  goto LAB_002d9768;
switchD_002d9788_caseD_1:
  if (0x1f < uVar12) goto code_r0x002d991c;
  bVar1 = uVar16 == 0;
  uVar16 = (ulong)((int)uVar16 + -1);
  if (bVar1) {
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = 0;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = iStack_b0;
    goto LAB_002da464;
  }
  iStack_b0 = 0;
  uVar13 = uVar13 | (uint)*__src << (uVar12 & 0x1f);
  __src = __src + 1;
  uVar12 = uVar12 + 8;
  goto switchD_002d9788_caseD_1;
code_r0x002d991c:
  if (~uVar13 >> 0x10 != (uVar13 & 0xffff)) {
    *param_1 = 9;
    param_2[6] = (int)"invalid stored block lengths";
    param_1[8] = uVar13;
    param_1[7] = uVar12;
    param_2[1] = (int)uVar16;
    param_2[2] = (int)(__src + (param_2[2] - *param_2));
    *param_2 = (int)__src;
    param_1[0xc] = pvVar17;
    iVar6 = -3;
    goto LAB_002da464;
  }
  uVar9 = uVar13 & 0xffff;
  param_1[1] = uVar9;
  uVar12 = 0;
  uVar13 = 0;
  if (uVar9 == 0) {
    uVar5 = 7;
    if (param_1[6] == 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 2;
  }
LAB_002d980c:
  *param_1 = uVar5;
  goto LAB_002d9768;
}

## MIPS

                             *************************************************************
                             *  ../infblock.c                                              
                             *************************************************************
                             int  __stdcall  inflate_blocks (undefined4 *  param_1 ,  int
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             undefined4 *      a0_lo:4        param_1
             int *             a1_lo:4        param_2
             int               a2_lo:4        param_3
                             inflate_blocks                                  XREF[2]:     Entry Point (*) , 
                                                                                          inflate:002d8fa8 (c)   
        002d96f8 30  ff  bd       addiu      sp ,sp ,-0xd0
                 27
             assume gp = <UNKNOWN>
        002d96fc c0  00  bf       sd         ra ,0xc0 (sp )
                 ff
        002d9700 b0  00  be       sd         s8 ,0xb0 (sp )
                 ff
        002d9704 a0  00  b7       sd         s7 ,0xa0 (sp )
                 ff
        002d9708 90  00  b6       sd         s6 ,0x90 (sp )
                 ff
        002d970c 80  00  b5       sd         s5 ,0x80 (sp )
                 ff
        002d9710 70  00  b4       sd         s4 ,0x70 (sp )
                 ff
        002d9714 60  00  b3       sd         s3 ,0x60 (sp )
                 ff
        002d9718 50  00  b2       sd         s2 ,0x50 (sp )
                 ff
        002d971c 40  00  b1       sd         s1 ,0x40 (sp )
                 ff
        002d9720 30  00  b0       sd         s0 ,0x30 (sp )
                 ff
        002d9724 2d  88  80       move       s1 ,param_1
                 00
        002d9728 2d  90  a0       move       s2 ,param_2
                 00
        002d972c 20  00  a6       sw         param_3 ,0x20 (sp )
                 af
        002d9730 00  00  55       lw         s5 ,0x0 (s2 )
                 8e
        002d9734 04  00  57       lw         s7 ,0x4 (s2 )
                 8e
        002d9738 20  00  34       lw         s4 ,0x20 (s1 )
                 8e
        002d973c 30  00  3e       lw         s8 ,0x30 (s1 )
                 8e
        002d9740 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002d9744 2b  10  c3       sltu       v0 ,s8 ,v1
                 03
        002d9748 04  00  40       beq        v0 ,zero ,LAB_002d975c
                 10
        002d974c 1c  00  33       _lw        s3 ,0x1c (s1 )
                 8e
        002d9750 23  b0  7e       subu       s6 ,v1 ,s8
                 00
        002d9754 04  00  00       b          LAB_002d9768
                 10
        002d9758 ff  ff  d6       _addiu     s6 ,s6 ,-0x1
                 26
                             LAB_002d975c                                    XREF[1]:     002d9748 (j)   
        002d975c 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d9760 23  b0  5e       subu       s6 ,v0 ,s8
                 00
        002d9764 00  00  00       nop
                 00
                             LAB_002d9768                                    XREF[4]:     002d9754 (j) ,  002d980c (j) , 
                                                                                          002d9b1c (j) ,  002da1e4 (j)   
        002d9768 00  00  23       lw         v1 ,0x0 (s1 )
                 8e
                             LAB_002d976c                                    XREF[1]:     002d97ec (j)   
        002d976c 0a  00  62       sltiu      v0 ,v1 ,0xa
                 2c
        002d9770 2f  03  40       beq        v0 ,zero ,switchD_002d9788::default
                 10
        002d9774 3c  00  02       _lui       v0 ,0x3c
                 3c
        002d9778 00  81  42       addiu      v0 ,v0 ,-0x7f00
                 24
        002d977c 80  18  03       sll        v1 ,v1 ,0x2
                 00
        002d9780 21  18  62       addu       v1 ,v1 ,v0
                 00
        002d9784 00  00  62       lw         v0 => switchD_002d9788::switchdataD_003b8100  ,0  = 002d97b0
                 8c
                             switchD_002d9788::switchD
        002d9788 08  00  40       jr         v0
                 00
        002d978c 00  00  00       _nop
                 00
                             LAB_002d9790                                    XREF[1]:     002d97b4 (j)   
        002d9790 d3  02  e0       beq        s7 ,zero ,LAB_002da2e0
                 12
        002d9794 ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d9798 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d979c 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d97a0 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d97a4 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d97a8 01  00  b5       addiu      s5 ,s5 ,0x1
                 26
        002d97ac 08  00  73       addiu      s3 ,s3 ,0x8
                 26
                             switchD_002d9788::caseD_0                       XREF[2]:     002d9788 (j) ,  003b8100 (*)   
        002d97b0 03  00  62       sltiu      v0 ,s3 ,0x3
                 2e
        002d97b4 f6  ff  40       bne        v0 ,zero ,LAB_002d9790
                 14
        002d97b8 07  00  90       _andi      s0 ,s4 ,0x7
                 32
        002d97bc 01  00  82       andi       v0 ,s4 ,0x1
                 32
        002d97c0 18  00  22       sw         v0 ,0x18 (s1 )
                 ae
        002d97c4 42  18  10       srl        v1 ,s0 ,0x1
                 00
        002d97c8 01  00  02       li         v0 ,0x1
                 24
        002d97cc 11  00  62       beq        v1 ,v0 ,LAB_002d9814
                 10
        002d97d0 2d  20  a0       _move      param_1 ,sp
                 03
        002d97d4 07  00  60       beq        v1 ,zero ,LAB_002d97f4
                 10
        002d97d8 02  00  02       _li        v0 ,0x2
                 24
        002d97dc 2d  00  62       beq        v1 ,v0 ,LAB_002d9894
                 10
        002d97e0 03  00  02       _li        v0 ,0x3
                 24
        002d97e4 2e  00  62       beql       v1 ,v0 ,LAB_002d98a0
                 50
        002d97e8 c2  a0  14       _srl       s4 ,s4 ,0x3
                 00
        002d97ec df  ff  00       b          LAB_002d976c
                 10
        002d97f0 00  00  23       _lw        v1 ,0x0 (s1 )
                 8e
                             LAB_002d97f4                                    XREF[1]:     002d97d4 (j)   
        002d97f4 c2  a0  14       srl        s4 ,s4 ,0x3
                 00
        002d97f8 fd  ff  73       addiu      s3 ,s3 ,-0x3
                 26
        002d97fc 07  00  70       andi       s0 ,s3 ,0x7
                 32
        002d9800 06  a0  14       srlv       s4 ,s4 ,s0
                 02
        002d9804 23  98  70       subu       s3 ,s3 ,s0
                 02
        002d9808 01  00  02       li         v0 ,0x1
                 24
                             LAB_002d980c                                    XREF[5]:     002d988c (j) ,  002d9898 (j) , 
                                                                                          002d9990 (j) ,  002d9998 (j) , 
                                                                                          002d9b2c (j)   
        002d980c d6  ff  00       b          LAB_002d9768
                 10
        002d9810 00  00  22       _sw        v0 ,0x0 (s1 )
                 ae
                             LAB_002d9814                                    XREF[1]:     002d97cc (j)   
        002d9814 04  00  a5       addiu      param_2 ,sp ,0x4
                 27
        002d9818 08  00  a6       addiu      param_3 ,sp ,0x8
                 27
        002d981c 1a  6f  0b       jal        inflate_trees_fixed                              undefined8 inflate_trees_fixed(u
                 0c
        002d9820 0c  00  a7       _addiu     a3 ,sp ,0xc
                 27
        002d9824 00  00  a4       lw         param_1 ,0x0 (sp )
                 8f
        002d9828 04  00  a5       lw         param_2 ,0x4 (sp )
                 8f
        002d982c 08  00  a6       lw         param_3 ,0x8 (sp )
                 8f
        002d9830 0c  00  a7       lw         a3 ,0xc (sp )
                 8f
        002d9834 5e  69  0b       jal        inflate_codes_new                                undefined inflate_codes_new(unde
                 0c
        002d9838 2d  40  40       _move      t0 ,s2
                 02
        002d983c 0f  00  40       bne        v0 ,zero ,LAB_002d987c
                 14
        002d9840 0c  00  22       _sw        v0 ,0xc (s1 )
                 ae
        002d9844 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9848 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d984c 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9850 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9854 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9858 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d985c 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9860 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9864 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9868 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d986c 2d  20  20       move       param_1 ,s1
                 02
        002d9870 2d  28  40       move       param_2 ,s2
                 02
        002d9874 fb  02  00       b          LAB_002da464
                 10
        002d9878 fc  ff  06       _li        param_3 ,-0x4
                 24
                             LAB_002d987c                                    XREF[1]:     002d983c (j)   
        002d987c 04  00  20       sw         zero ,0x4 (s1 )
                 ae
        002d9880 08  00  20       sw         zero ,0x8 (s1 )
                 ae
        002d9884 c2  a0  14       srl        s4 ,s4 ,0x3
                 00
        002d9888 fd  ff  73       addiu      s3 ,s3 ,-0x3
                 26
        002d988c df  ff  00       b          LAB_002d980c
                 10
        002d9890 06  00  02       _li        v0 ,0x6
                 24
                             LAB_002d9894                                    XREF[1]:     002d97dc (j)   
        002d9894 c2  a0  14       srl        s4 ,s4 ,0x3
                 00
        002d9898 dc  ff  00       b          LAB_002d980c
                 10
        002d989c fd  ff  73       _addiu     s3 ,s3 ,-0x3
                 26
                             LAB_002d98a0                                    XREF[1]:     002d97e4 (j)   
        002d98a0 fd  ff  73       addiu      s3 ,s3 ,-0x3
                 26
        002d98a4 09  00  02       li         v0 ,0x9
                 24
        002d98a8 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
        002d98ac 3c  00  02       lui        v0 ,0x3c
                 3c
        002d98b0 80  80  42       addiu      v0 ,v0 ,-0x7f80
                 24
        002d98b4 18  00  42       sw         v0 => s_invalid_block_type_003b8080 ,0x18 (s2 )     = "invalid block type"
                 ae
        002d98b8 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d98bc 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d98c0 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d98c4 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d98c8 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d98cc 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d98d0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d98d4 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d98d8 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d98dc 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d98e0 2d  20  20       move       param_1 ,s1
                 02
        002d98e4 2d  28  40       move       param_2 ,s2
                 02
        002d98e8 de  02  00       b          LAB_002da464
                 10
        002d98ec fd  ff  06       _li        param_3 ,-0x3
                 24
                             LAB_002d98f0                                    XREF[1]:     002d9914 (j)   
        002d98f0 89  02  e0       beq        s7 ,zero ,LAB_002da318
                 12
        002d98f4 ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d98f8 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d98fc 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d9900 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d9904 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d9908 01  00  b5       addiu      s5 ,s5 ,0x1
                 26
        002d990c 08  00  73       addiu      s3 ,s3 ,0x8
                 26
                             switchD_002d9788::caseD_1                       XREF[2]:     002d9788 (j) ,  003b8104 (*)   
        002d9910 20  00  62       sltiu      v0 ,s3 ,0x20
                 2e
        002d9914 f6  ff  40       bne        v0 ,zero ,LAB_002d98f0
                 14
        002d9918 27  10  14       _nor       v0 ,zero ,s4
                 00
        002d991c 02  14  02       srl        v0 ,v0 ,0x10
                 00
        002d9920 ff  ff  83       andi       v1 ,s4 ,0xffff
                 32
        002d9924 13  00  43       beq        v0 ,v1 ,LAB_002d9974
                 10
        002d9928 09  00  02       _li        v0 ,0x9
                 24
        002d992c 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
        002d9930 3c  00  02       lui        v0 ,0x3c
                 3c
        002d9934 98  80  42       addiu      v0 ,v0 ,-0x7f68
                 24
        002d9938 18  00  42       sw         v0 => s_invalid_stored_block_lengths_003b8098  ,  = "invalid stored block lengths"
                 ae
        002d993c 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9940 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9944 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9948 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d994c 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9950 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9954 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9958 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d995c 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9960 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9964 2d  20  20       move       param_1 ,s1
                 02
        002d9968 2d  28  40       move       param_2 ,s2
                 02
        002d996c bd  02  00       b          LAB_002da464
                 10
        002d9970 fd  ff  06       _li        param_3 ,-0x3
                 24
                             LAB_002d9974                                    XREF[1]:     002d9924 (j)   
        002d9974 ff  ff  82       andi       v0 ,s4 ,0xffff
                 32
        002d9978 04  00  22       sw         v0 ,0x4 (s1 )
                 ae
        002d997c 2d  98  00       move       s3 ,zero
                 00
        002d9980 05  00  40       bne        v0 ,zero ,LAB_002d9998
                 14
        002d9984 2d  a0  00       _move      s4 ,zero
                 00
        002d9988 18  00  23       lw         v1 ,0x18 (s1 )
                 8e
        002d998c 07  00  02       li         v0 ,0x7
                 24
        002d9990 9e  ff  00       b          LAB_002d980c
                 10
        002d9994 0a  10  03       _movz      v0 ,zero ,v1
                 00
                             LAB_002d9998                                    XREF[1]:     002d9980 (j)   
        002d9998 9c  ff  00       b          LAB_002d980c
                 10
        002d999c 02  00  02       _li        v0 ,0x2
                 24
                             switchD_002d9788::caseD_2                       XREF[2]:     002d9788 (j) ,  003b8108 (*)   
        002d99a0 0e  00  e0       bne        s7 ,zero ,LAB_002d99dc
                 16
        002d99a4 2d  20  20       _move      param_1 ,s1
                 02
        002d99a8 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d99ac 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d99b0 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002d99b4 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d99b8 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d99bc 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d99c0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d99c4 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d99c8 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d99cc 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d99d0 2d  28  40       move       param_2 ,s2
                 02
        002d99d4 a3  02  00       b          LAB_002da464
                 10
        002d99d8 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002d99dc                                    XREF[1]:     002d99a0 (j)   
        002d99dc 40  00  c0       bnel       s6 ,zero ,LAB_002d9ae0
                 56
        002d99e0 20  00  a0       _sw        zero ,0x20 (sp )
                 af
        002d99e4 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d99e8 0d  00  c2       bne        s8 ,v0 ,LAB_002d9a20
                 17
        002d99ec 00  00  00       _nop
                 00
        002d99f0 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002d99f4 24  00  22       lw         v0 ,0x24 (s1 )
                 8e
        002d99f8 09  00  62       beq        v1 ,v0 ,LAB_002d9a20
                 10
        002d99fc 00  00  00       _nop
                 00
        002d9a00 2d  f0  40       move       s8 ,v0
                 00
        002d9a04 2b  10  c3       sltu       v0 ,s8 ,v1
                 03
        002d9a08 03  00  40       beq        v0 ,zero ,LAB_002d9a18
                 10
        002d9a0c 23  b0  7e       _subu      s6 ,v1 ,s8
                 00
        002d9a10 03  00  00       b          LAB_002d9a20
                 10
        002d9a14 ff  ff  d6       _addiu     s6 ,s6 ,-0x1
                 26
                             LAB_002d9a18                                    XREF[1]:     002d9a08 (j)   
        002d9a18 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d9a1c 23  b0  5e       subu       s6 ,v0 ,s8
                 00
                             LAB_002d9a20                                    XREF[3]:     002d99e8 (j) ,  002d99f8 (j) , 
                                                                                          002d9a10 (j)   
        002d9a20 2f  00  c0       bnel       s6 ,zero ,LAB_002d9ae0
                 56
        002d9a24 20  00  a0       _sw        zero ,0x20 (sp )
                 af
        002d9a28 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9a2c 2d  20  20       move       param_1 ,s1
                 02
        002d9a30 2d  28  40       move       param_2 ,s2
                 02
        002d9a34 ac  6c  0b       jal        inflate_flush                                    int inflate_flush(int param_1, i
                 0c
        002d9a38 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
        002d9a3c 20  00  a2       sw         v0 ,0x20 (sp )
                 af
        002d9a40 30  00  3e       lw         s8 ,0x30 (s1 )
                 8e
        002d9a44 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002d9a48 2b  10  c3       sltu       v0 ,s8 ,v1
                 03
        002d9a4c 03  00  40       beq        v0 ,zero ,LAB_002d9a5c
                 10
        002d9a50 23  b0  7e       _subu      s6 ,v1 ,s8
                 00
        002d9a54 03  00  00       b          LAB_002d9a64
                 10
        002d9a58 ff  ff  d6       _addiu     s6 ,s6 ,-0x1
                 26
                             LAB_002d9a5c                                    XREF[1]:     002d9a4c (j)   
        002d9a5c 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d9a60 23  b0  5e       subu       s6 ,v0 ,s8
                 00
                             LAB_002d9a64                                    XREF[1]:     002d9a54 (j)   
        002d9a64 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d9a68 0d  00  c2       bne        s8 ,v0 ,LAB_002d9aa0
                 17
        002d9a6c 00  00  00       _nop
                 00
        002d9a70 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002d9a74 24  00  22       lw         v0 ,0x24 (s1 )
                 8e
        002d9a78 09  00  62       beq        v1 ,v0 ,LAB_002d9aa0
                 10
        002d9a7c 00  00  00       _nop
                 00
        002d9a80 2d  f0  40       move       s8 ,v0
                 00
        002d9a84 2b  10  c3       sltu       v0 ,s8 ,v1
                 03
        002d9a88 03  00  40       beq        v0 ,zero ,LAB_002d9a98
                 10
        002d9a8c 23  b0  7e       _subu      s6 ,v1 ,s8
                 00
        002d9a90 03  00  00       b          LAB_002d9aa0
                 10
        002d9a94 ff  ff  d6       _addiu     s6 ,s6 ,-0x1
                 26
                             LAB_002d9a98                                    XREF[1]:     002d9a88 (j)   
        002d9a98 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002d9a9c 23  b0  5e       subu       s6 ,v0 ,s8
                 00
                             LAB_002d9aa0                                    XREF[3]:     002d9a68 (j) ,  002d9a78 (j) , 
                                                                                          002d9a90 (j)   
        002d9aa0 0f  00  c0       bnel       s6 ,zero ,LAB_002d9ae0
                 56
        002d9aa4 20  00  a0       _sw        zero ,0x20 (sp )
                 af
        002d9aa8 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9aac 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9ab0 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9ab4 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9ab8 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9abc 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9ac0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9ac4 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9ac8 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9acc 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9ad0 2d  20  20       move       param_1 ,s1
                 02
        002d9ad4 2d  28  40       move       param_2 ,s2
                 02
        002d9ad8 62  02  00       b          LAB_002da464
                 10
        002d9adc 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002d9ae0                                    XREF[3]:     002d99dc (j) ,  002d9a20 (j) , 
                                                                                          002d9aa0 (j)   
        002d9ae0 04  00  30       lw         s0 ,0x4 (s1 )
                 8e
        002d9ae4 2b  10  f0       sltu       v0 ,s7 ,s0
                 02
        002d9ae8 0b  80  e2       movn       s0 ,s7 ,v0
                 02
        002d9aec 2b  10  d0       sltu       v0 ,s6 ,s0
                 02
        002d9af0 0b  80  c2       movn       s0 ,s6 ,v0
                 02
        002d9af4 2d  20  c0       move       param_1 ,s8
                 03
        002d9af8 2d  28  a0       move       param_2 ,s5
                 02
        002d9afc 59  ec  0b       jal        memcpy                                           void * memcpy(void * __dest, voi
                 0c
        002d9b00 2d  30  00       _move      param_3 ,s0
                 02
        002d9b04 21  a8  b0       addu       s5 ,s5 ,s0
                 02
        002d9b08 23  b8  f0       subu       s7 ,s7 ,s0
                 02
        002d9b0c 21  f0  d0       addu       s8 ,s8 ,s0
                 03
        002d9b10 23  b0  d0       subu       s6 ,s6 ,s0
                 02
        002d9b14 04  00  22       lw         v0 ,0x4 (s1 )
                 8e
        002d9b18 23  10  50       subu       v0 ,v0 ,s0
                 00
        002d9b1c 12  ff  40       bne        v0 ,zero ,LAB_002d9768
                 14
        002d9b20 04  00  22       _sw        v0 ,0x4 (s1 )
                 ae
        002d9b24 18  00  23       lw         v1 ,0x18 (s1 )
                 8e
        002d9b28 07  00  02       li         v0 ,0x7
                 24
        002d9b2c 37  ff  00       b          LAB_002d980c
                 10
        002d9b30 0a  10  03       _movz      v0 ,zero ,v1
                 00
        002d9b34 00              ??         00h
        002d9b35 00              ??         00h
        002d9b36 00              ??         00h
        002d9b37 00              ??         00h
                             LAB_002d9b38                                    XREF[1]:     002d9b5c (j)   
        002d9b38 05  02  e0       beq        s7 ,zero ,LAB_002da350
                 12
        002d9b3c ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d9b40 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d9b44 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d9b48 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d9b4c 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d9b50 01  00  b5       addiu      s5 ,s5 ,0x1
                 26
        002d9b54 08  00  73       addiu      s3 ,s3 ,0x8
                 26
                             switchD_002d9788::caseD_3                       XREF[2]:     002d9788 (j) ,  003b810c (*)   
        002d9b58 0e  00  62       sltiu      v0 ,s3 ,0xe
                 2e
        002d9b5c f6  ff  40       bne        v0 ,zero ,LAB_002d9b38
                 14
        002d9b60 ff  3f  90       _andi      s0 ,s4 ,0x3fff
                 32
        002d9b64 1f  00  82       andi       v0 ,s4 ,0x1f
                 32
        002d9b68 1e  00  42       sltiu      v0 ,v0 ,0x1e
                 2c
        002d9b6c 06  00  40       beq        v0 ,zero ,LAB_002d9b88
                 10
        002d9b70 04  00  30       _sw        s0 ,0x4 (s1 )
                 ae
        002d9b74 42  11  10       srl        v0 ,s0 ,0x5
                 00
        002d9b78 1f  00  42       andi       v0 ,v0 ,0x1f
                 30
        002d9b7c 1e  00  42       sltiu      v0 ,v0 ,0x1e
                 2c
        002d9b80 14  00  40       bne        v0 ,zero ,LAB_002d9bd4
                 14
        002d9b84 1f  00  03       _andi      v1 ,s0 ,0x1f
                 32
                             LAB_002d9b88                                    XREF[1]:     002d9b6c (j)   
        002d9b88 09  00  02       li         v0 ,0x9
                 24
        002d9b8c 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
        002d9b90 3c  00  02       lui        v0 ,0x3c
                 3c
        002d9b94 b8  80  42       addiu      v0 ,v0 ,-0x7f48
                 24
        002d9b98 18  00  42       sw         v0 => s_too_many_length_or_distance_symb_003b80b  = "too many length or distance s
                 ae
        002d9b9c 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9ba0 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9ba4 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9ba8 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9bac 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9bb0 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9bb4 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9bb8 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9bbc 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9bc0 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9bc4 2d  20  20       move       param_1 ,s1
                 02
        002d9bc8 2d  28  40       move       param_2 ,s2
                 02
        002d9bcc 25  02  00       b          LAB_002da464
                 10
        002d9bd0 fd  ff  06       _li        param_3 ,-0x3
                 24
                             LAB_002d9bd4                                    XREF[1]:     002d9b80 (j)   
        002d9bd4 42  11  10       srl        v0 ,s0 ,0x5
                 00
        002d9bd8 1f  00  42       andi       v0 ,v0 ,0x1f
                 30
        002d9bdc 02  01  42       addiu      v0 ,v0 ,0x102
                 24
        002d9be0 21  80  62       addu       s0 ,v1 ,v0
                 00
        002d9be4 13  00  05       li         param_2 ,0x13
                 24
        002d9be8 12  00  03       li         v1 ,0x12
                 24
        002d9bec 2b  18  70       sltu       v1 ,v1 ,s0
                 00
        002d9bf0 20  00  42       lw         v0 ,0x20 (s2 )
                 8e
        002d9bf4 28  00  44       lw         param_1 ,0x28 (s2 )
                 8e
        002d9bf8 0b  28  03       movn       param_2 ,s0 ,v1
                 02
        002d9bfc 09  f8  40       jalr       v0
                 00
        002d9c00 04  00  06       _li        param_3 ,0x4
                 24
        002d9c04 0f  00  40       bne        v0 ,zero ,LAB_002d9c44
                 14
        002d9c08 0c  00  22       _sw        v0 ,0xc (s1 )
                 ae
        002d9c0c 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9c10 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9c14 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9c18 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9c1c 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9c20 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9c24 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9c28 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9c2c 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9c30 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9c34 2d  20  20       move       param_1 ,s1
                 02
        002d9c38 2d  28  40       move       param_2 ,s2
                 02
        002d9c3c 09  02  00       b          LAB_002da464
                 10
        002d9c40 fc  ff  06       _li        param_3 ,-0x4
                 24
                             LAB_002d9c44                                    XREF[1]:     002d9c04 (j)   
        002d9c44 82  a3  14       srl        s4 ,s4 ,0xe
                 00
        002d9c48 f2  ff  73       addiu      s3 ,s3 ,-0xe
                 26
        002d9c4c 08  00  20       sw         zero ,0x8 (s1 )
                 ae
        002d9c50 04  00  02       li         v0 ,0x4
                 24
        002d9c54 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             switchD_002d9788::caseD_4                       XREF[2]:     002d9788 (j) ,  003b8110 (*)   
        002d9c58 04  00  23       lw         v1 ,0x4 (s1 )
                 8e
        002d9c5c 82  1a  03       srl        v1 ,v1 ,0xa
                 00
        002d9c60 04  00  63       addiu      v1 ,v1 ,0x4
                 24
        002d9c64 08  00  22       lw         v0 ,0x8 (s1 )
                 8e
        002d9c68 2b  10  43       sltu       v0 ,v0 ,v1
                 00
        002d9c6c 21  00  40       beq        v0 ,zero ,LAB_002d9cf4
                 10
        002d9c70 3a  00  02       _lui       v0 ,0x3a
                 3c
        002d9c74 0a  00  00       b          LAB_002d9ca0
                 10
        002d9c78 a8  26  45       _addiu     param_2 ,v0 ,0x26a8
                 24
        002d9c7c 00              ??         00h
        002d9c7d 00              ??         00h
        002d9c7e 00              ??         00h
        002d9c7f 00              ??         00h
                             LAB_002d9c80                                    XREF[1]:     002d9ca4 (j)   
        002d9c80 c1  01  e0       beq        s7 ,zero ,LAB_002da388
                 12
        002d9c84 ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d9c88 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d9c8c 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d9c90 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d9c94 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d9c98 01  00  b5       addiu      s5 ,s5 ,0x1
                 26
        002d9c9c 08  00  73       addiu      s3 ,s3 ,0x8
                 26
                             LAB_002d9ca0                                    XREF[2]:     002d9c74 (j) ,  002d9cec (j)   
        002d9ca0 03  00  62       sltiu      v0 ,s3 ,0x3
                 2e
        002d9ca4 f6  ff  40       bne        v0 ,zero ,LAB_002d9c80
                 14
        002d9ca8 00  00  00       _nop
                 00
        002d9cac 08  00  24       lw         param_1 ,0x8 (s1 )
                 8e
        002d9cb0 80  10  04       sll        v0 ,param_1 ,0x2
                 00
        002d9cb4 21  10  45       addu       v0 ,v0 ,param_2
                 00
        002d9cb8 00  00  42       lw         v0 ,0x0 (v0 )=> border
                 8c
        002d9cbc 0c  00  23       lw         v1 ,0xc (s1 )
                 8e
        002d9cc0 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002d9cc4 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9cc8 07  00  83       andi       v1 ,s4 ,0x7
                 32
        002d9ccc 00  00  43       sw         v1 ,0x0 (v0 )
                 ac
        002d9cd0 01  00  84       addiu      param_1 ,param_1 ,0x1
                 24
        002d9cd4 08  00  24       sw         param_1 ,0x8 (s1 )
                 ae
        002d9cd8 c2  a0  14       srl        s4 ,s4 ,0x3
                 00
        002d9cdc 04  00  22       lw         v0 ,0x4 (s1 )
                 8e
        002d9ce0 82  12  02       srl        v0 ,v0 ,0xa
                 00
        002d9ce4 04  00  42       addiu      v0 ,v0 ,0x4
                 24
        002d9ce8 2b  20  82       sltu       param_1 ,param_1 ,v0
                 00
        002d9cec ec  ff  80       bne        param_1 ,zero ,LAB_002d9ca0
                 14
        002d9cf0 fd  ff  73       _addiu     s3 ,s3 ,-0x3
                 26
                             LAB_002d9cf4                                    XREF[1]:     002d9c6c (j)   
        002d9cf4 08  00  22       lw         v0 ,0x8 (s1 )
                 8e
        002d9cf8 13  00  42       sltiu      v0 ,v0 ,0x13
                 2c
        002d9cfc 10  00  40       beq        v0 ,zero ,LAB_002d9d40
                 10
        002d9d00 3a  00  02       _lui       v0 ,0x3a
                 3c
        002d9d04 a8  26  45       addiu      param_2 ,v0 ,0x26a8
                 24
        002d9d08 08  00  23       lw         v1 ,0x8 (s1 )
                 8e
        002d9d0c 00  00  00       nop
                 00
                             LAB_002d9d10                                    XREF[1]:     002d9d38 (j)   
        002d9d10 80  10  03       sll        v0 ,v1 ,0x2
                 00
        002d9d14 21  10  45       addu       v0 ,v0 ,param_2
                 00
        002d9d18 00  00  42       lw         v0 ,0x0 (v0 )=> border
                 8c
        002d9d1c 0c  00  24       lw         param_1 ,0xc (s1 )
                 8e
        002d9d20 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002d9d24 21  10  44       addu       v0 ,v0 ,param_1
                 00
        002d9d28 00  00  40       sw         zero ,0x0 (v0 )
                 ac
        002d9d2c 01  00  63       addiu      v1 ,v1 ,0x1
                 24
        002d9d30 08  00  23       sw         v1 ,0x8 (s1 )
                 ae
        002d9d34 13  00  63       sltiu      v1 ,v1 ,0x13
                 2c
        002d9d38 f5  ff  60       bnel       v1 ,zero ,LAB_002d9d10
                 54
        002d9d3c 08  00  23       _lw        v1 ,0x8 (s1 )
                 8e
                             LAB_002d9d40                                    XREF[1]:     002d9cfc (j)   
        002d9d40 07  00  02       li         v0 ,0x7
                 24
        002d9d44 10  00  22       sw         v0 ,0x10 (s1 )
                 ae
        002d9d48 0c  00  24       lw         param_1 ,0xc (s1 )
                 8e
        002d9d4c 10  00  25       addiu      param_2 ,s1 ,0x10
                 26
        002d9d50 14  00  26       addiu      param_3 ,s1 ,0x14
                 26
        002d9d54 8e  6e  0b       jal        inflate_trees_bits                               int inflate_trees_bits(int * par
                 0c
        002d9d58 2d  38  40       _move      a3 ,s2
                 02
        002d9d5c 2d  80  40       move       s0 ,v0
                 00
        002d9d60 13  00  00       beq        s0 ,zero ,LAB_002d9db0
                 12
        002d9d64 fd  ff  02       _li        v0 ,-0x3
                 24
        002d9d68 03  00  02       bne        s0 ,v0 ,LAB_002d9d78
                 16
        002d9d6c 20  00  b0       _sw        s0 ,0x20 (sp )
                 af
        002d9d70 09  00  02       li         v0 ,0x9
                 24
        002d9d74 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             LAB_002d9d78                                    XREF[1]:     002d9d68 (j)   
        002d9d78 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9d7c 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9d80 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9d84 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9d88 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9d8c 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9d90 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9d94 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9d98 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9d9c 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9da0 2d  20  20       move       param_1 ,s1
                 02
        002d9da4 2d  28  40       move       param_2 ,s2
                 02
        002d9da8 ae  01  00       b          LAB_002da464
                 10
        002d9dac 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002d9db0                                    XREF[1]:     002d9d60 (j)   
        002d9db0 08  00  20       sw         zero ,0x8 (s1 )
                 ae
        002d9db4 05  00  02       li         v0 ,0x5
                 24
        002d9db8 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             switchD_002d9788::caseD_5                       XREF[2]:     002d9788 (j) ,  003b8114 (*)   
        002d9dbc 04  00  30       lw         s0 ,0x4 (s1 )
                 8e
        002d9dc0 1f  00  02       andi       v0 ,s0 ,0x1f
                 32
        002d9dc4 42  19  10       srl        v1 ,s0 ,0x5
                 00
        002d9dc8 1f  00  63       andi       v1 ,v1 ,0x1f
                 30
        002d9dcc 02  01  63       addiu      v1 ,v1 ,0x102
                 24
        002d9dd0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9dd4 08  00  23       lw         v1 ,0x8 (s1 )
                 8e
        002d9dd8 2b  18  62       sltu       v1 ,v1 ,v0
                 00
        002d9ddc 81  00  60       beq        v1 ,zero ,LAB_002d9fe4
                 10
        002d9de0 3a  00  02       _lui       v0 ,0x3a
                 3c
        002d9de4 20  27  49       addiu      t1 => inflate_mask ,v0 ,0x2720
                 24
        002d9de8 10  00  08       li         t0 ,0x10
                 24
        002d9dec 3c  00  02       lui        v0 ,0x3c
                 3c
        002d9df0 e0  80  4a       addiu      t2 => s_invalid_bit_length_repeat_003b80e0  ,v0 ,  = "invalid bit length repeat"
                 24
        002d9df4 10  00  30       lw         s0 ,0x10 (s1 )
                 8e
                             LAB_002d9df8                                    XREF[1]:     002d9fdc (j)   
        002d9df8 2b  10  70       sltu       v0 ,s3 ,s0
                 02
        002d9dfc 0d  00  40       beq        v0 ,zero ,LAB_002d9e34
                 10
        002d9e00 80  10  10       _sll       v0 ,s0 ,0x2
                 00
        002d9e04 00  00  00       nop
                 00
                             LAB_002d9e08                                    XREF[1]:     002d9e28 (j)   
        002d9e08 6d  01  e0       beq        s7 ,zero ,LAB_002da3c0
                 12
        002d9e0c ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d9e10 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d9e14 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d9e18 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d9e1c 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d9e20 08  00  73       addiu      s3 ,s3 ,0x8
                 26
        002d9e24 2b  10  70       sltu       v0 ,s3 ,s0
                 02
        002d9e28 f7  ff  40       bne        v0 ,zero ,LAB_002d9e08
                 14
        002d9e2c 01  00  b5       _addiu     s5 ,s5 ,0x1
                 26
        002d9e30 80  10  10       sll        v0 ,s0 ,0x2
                 00
                             LAB_002d9e34                                    XREF[1]:     002d9dfc (j)   
        002d9e34 21  10  49       addu       v0 ,v0 ,t1
                 00
        002d9e38 00  00  42       lw         v0 ,0x0 (v0 )=> inflate_mask
                 8c
        002d9e3c 24  10  82       and        v0 ,s4 ,v0
                 02
        002d9e40 c0  10  02       sll        v0 ,v0 ,0x3
                 00
        002d9e44 14  00  23       lw         v1 ,0x14 (s1 )
                 8e
        002d9e48 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9e4c 01  00  50       lbu        s0 ,0x1 (v0 )
                 90
        002d9e50 04  00  45       lw         param_2 ,0x4 (v0 )
                 8c
        002d9e54 10  00  a2       sltiu      v0 ,param_2 ,0x10
                 2c
        002d9e58 0b  00  40       beq        v0 ,zero ,LAB_002d9e88
                 10
        002d9e5c 07  00  07       _li        a3 ,0x7
                 24
        002d9e60 06  a0  14       srlv       s4 ,s4 ,s0
                 02
        002d9e64 23  98  70       subu       s3 ,s3 ,s0
                 02
        002d9e68 08  00  22       lw         v0 ,0x8 (s1 )
                 8e
        002d9e6c 0c  00  24       lw         param_1 ,0xc (s1 )
                 8e
        002d9e70 80  18  02       sll        v1 ,v0 ,0x2
                 00
        002d9e74 21  18  64       addu       v1 ,v1 ,param_1
                 00
        002d9e78 00  00  65       sw         param_2 ,0x0 (v1 )
                 ac
        002d9e7c 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002d9e80 4e  00  00       b          LAB_002d9fbc
                 10
        002d9e84 08  00  22       _sw        v0 ,0x8 (s1 )
                 ae
                             LAB_002d9e88                                    XREF[1]:     002d9e58 (j)   
        002d9e88 f2  ff  a2       addiu      v0 ,param_2 ,-0xe
                 24
        002d9e8c 12  00  a3       xori       v1 ,param_2 ,0x12
                 38
        002d9e90 0b  38  43       movn       a3 ,v0 ,v1
                 00
        002d9e94 03  00  06       li         param_3 ,0x3
                 24
        002d9e98 0b  00  02       li         v0 ,0xb
                 24
        002d9e9c 0a  30  43       movz       param_3 ,v0 ,v1
                 00
        002d9ea0 21  10  07       addu       v0 ,s0 ,a3
                 02
        002d9ea4 2b  10  62       sltu       v0 ,s3 ,v0
                 02
        002d9ea8 0b  00  40       beq        v0 ,zero ,LAB_002d9ed8
                 10
        002d9eac 21  18  07       _addu      v1 ,s0 ,a3
                 02
                             LAB_002d9eb0                                    XREF[1]:     002d9ed0 (j)   
        002d9eb0 51  01  e0       beq        s7 ,zero ,LAB_002da3f8
                 12
        002d9eb4 ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002d9eb8 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002d9ebc 00  00  a2       lbu        v0 ,0x0 (s5 )
                 92
        002d9ec0 04  10  62       sllv       v0 ,v0 ,s3
                 02
        002d9ec4 25  a0  82       or         s4 ,s4 ,v0
                 02
        002d9ec8 08  00  73       addiu      s3 ,s3 ,0x8
                 26
        002d9ecc 2b  10  63       sltu       v0 ,s3 ,v1
                 02
        002d9ed0 f7  ff  40       bne        v0 ,zero ,LAB_002d9eb0
                 14
        002d9ed4 01  00  b5       _addiu     s5 ,s5 ,0x1
                 26
                             LAB_002d9ed8                                    XREF[1]:     002d9ea8 (j)   
        002d9ed8 06  a0  14       srlv       s4 ,s4 ,s0
                 02
        002d9edc 23  98  70       subu       s3 ,s3 ,s0
                 02
        002d9ee0 80  10  07       sll        v0 ,a3 ,0x2
                 00
        002d9ee4 21  10  49       addu       v0 ,v0 ,t1
                 00
        002d9ee8 00  00  42       lw         v0 ,0x0 (v0 )=> inflate_mask
                 8c
        002d9eec 24  10  82       and        v0 ,s4 ,v0
                 02
        002d9ef0 21  30  c2       addu       param_3 ,param_3 ,v0
                 00
        002d9ef4 06  a0  f4       srlv       s4 ,s4 ,a3
                 00
        002d9ef8 23  98  67       subu       s3 ,s3 ,a3
                 02
        002d9efc 08  00  27       lw         a3 ,0x8 (s1 )
                 8e
        002d9f00 04  00  30       lw         s0 ,0x4 (s1 )
                 8e
        002d9f04 21  20  e6       addu       param_1 ,a3 ,param_3
                 00
        002d9f08 1f  00  03       andi       v1 ,s0 ,0x1f
                 32
        002d9f0c 42  11  10       srl        v0 ,s0 ,0x5
                 00
        002d9f10 1f  00  42       andi       v0 ,v0 ,0x1f
                 30
        002d9f14 02  01  42       addiu      v0 ,v0 ,0x102
                 24
        002d9f18 21  18  62       addu       v1 ,v1 ,v0
                 00
        002d9f1c 2b  18  64       sltu       v1 ,v1 ,param_1
                 00
        002d9f20 05  00  60       bnel       v1 ,zero ,LAB_002d9f38
                 54
        002d9f24 09  00  02       _li        v0 ,0x9
                 24
        002d9f28 19  00  a8       bne        param_2 ,t0 ,LAB_002d9f90
                 14
        002d9f2c 2d  10  00       _move      v0 ,zero
                 00
        002d9f30 11  00  e0       bne        a3 ,zero ,LAB_002d9f78
                 14
        002d9f34 09  00  02       _li        v0 ,0x9
                 24
                             LAB_002d9f38                                    XREF[1]:     002d9f20 (j)   
        002d9f38 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
        002d9f3c 18  00  4a       sw         t2 => s_invalid_bit_length_repeat_003b80e0  ,0x1   = "invalid bit length repeat"
                 ae
        002d9f40 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002d9f44 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002d9f48 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002d9f4c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002d9f50 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002d9f54 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002d9f58 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9f5c 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002d9f60 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002d9f64 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002d9f68 2d  20  20       move       param_1 ,s1
                 02
        002d9f6c 2d  28  40       move       param_2 ,s2
                 02
        002d9f70 3c  01  00       b          LAB_002da464
                 10
        002d9f74 fd  ff  06       _li        param_3 ,-0x3
                 24
                             LAB_002d9f78                                    XREF[1]:     002d9f30 (j)   
        002d9f78 05  00  a8       bnel       param_2 ,t0 ,LAB_002d9f90
                 54
        002d9f7c 2d  10  00       _move      v0 ,zero
                 00
        002d9f80 0c  00  23       lw         v1 ,0xc (s1 )
                 8e
        002d9f84 80  10  07       sll        v0 ,a3 ,0x2
                 00
        002d9f88 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9f8c fc  ff  42       lw         v0 ,-0x4 (v0 )
                 8c
                             LAB_002d9f90                                    XREF[2]:     002d9f28 (j) ,  002d9f78 (j)   
        002d9f90 2d  28  40       move       param_2 ,v0
                 00
        002d9f94 00  00  00       nop
                 00
                             LAB_002d9f98                                    XREF[1]:     002d9fb0 (j)   
        002d9f98 0c  00  23       lw         v1 ,0xc (s1 )
                 8e
        002d9f9c 80  10  07       sll        v0 ,a3 ,0x2
                 00
        002d9fa0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9fa4 00  00  45       sw         param_2 ,0x0 (v0 )
                 ac
        002d9fa8 01  00  e7       addiu      a3 ,a3 ,0x1
                 24
        002d9fac ff  ff  c6       addiu      param_3 ,param_3 ,-0x1
                 24
        002d9fb0 f9  ff  c0       bne        param_3 ,zero ,LAB_002d9f98
                 14
        002d9fb4 00  00  00       _nop
                 00
        002d9fb8 08  00  27       sw         a3 ,0x8 (s1 )
                 ae
                             LAB_002d9fbc                                    XREF[1]:     002d9e80 (j)   
        002d9fbc 04  00  30       lw         s0 ,0x4 (s1 )
                 8e
        002d9fc0 1f  00  02       andi       v0 ,s0 ,0x1f
                 32
        002d9fc4 42  19  10       srl        v1 ,s0 ,0x5
                 00
        002d9fc8 1f  00  63       andi       v1 ,v1 ,0x1f
                 30
        002d9fcc 02  01  63       addiu      v1 ,v1 ,0x102
                 24
        002d9fd0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002d9fd4 08  00  23       lw         v1 ,0x8 (s1 )
                 8e
        002d9fd8 2b  18  62       sltu       v1 ,v1 ,v0
                 00
        002d9fdc 86  ff  60       bnel       v1 ,zero ,LAB_002d9df8
                 54
        002d9fe0 10  00  30       _lw        s0 ,0x10 (s1 )
                 8e
                             LAB_002d9fe4                                    XREF[1]:     002d9ddc (j)   
        002d9fe4 14  00  24       lw         param_1 ,0x14 (s1 )
                 8e
        002d9fe8 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002d9fec 2d  28  40       _move      param_2 ,s2
                 02
        002d9ff0 14  00  20       sw         zero ,0x14 (s1 )
                 ae
        002d9ff4 09  00  16       li         s6 ,0x9
                 24
        002d9ff8 10  00  b6       sw         s6 ,0x10 (sp )
                 af
        002d9ffc 06  00  02       li         v0 ,0x6
                 24
        002da000 14  00  a2       sw         v0 ,0x14 (sp )
                 af
        002da004 04  00  30       lw         s0 ,0x4 (s1 )
                 8e
        002da008 1f  00  04       andi       param_1 ,s0 ,0x1f
                 32
        002da00c 42  29  10       srl        param_2 ,s0 ,0x5
                 00
        002da010 1f  00  a5       andi       param_2 ,param_2 ,0x1f
                 30
        002da014 01  01  84       addiu      param_1 ,param_1 ,0x101
                 24
        002da018 01  00  a5       addiu      param_2 ,param_2 ,0x1
                 24
        002da01c 0c  00  26       lw         param_3 ,0xc (s1 )
                 8e
        002da020 10  00  a7       addiu      a3 ,sp ,0x10
                 27
        002da024 14  00  a8       addiu      t0 ,sp ,0x14
                 27
        002da028 18  00  a9       addiu      t1 ,sp ,0x18
                 27
        002da02c 1c  00  aa       addiu      t2 ,sp ,0x1c
                 27
        002da030 b4  6e  0b       jal        inflate_trees_dynamic                            int inflate_trees_dynamic(uint p
                 0c
        002da034 2d  58  40       _move      t3 ,s2
                 02
        002da038 2d  80  40       move       s0 ,v0
                 00
        002da03c 13  00  00       beq        s0 ,zero ,LAB_002da08c
                 12
        002da040 10  00  a4       _lw        param_1 ,0x10 (sp )
                 8f
        002da044 ff  ff  02       lui        v0 ,0xffff
                 3c
        002da048 fd  ff  42       ori        v0 ,v0 ,0xfffd
                 34
        002da04c 01  00  02       beql       s0 ,v0 ,LAB_002da054
                 52
        002da050 00  00  36       _sw        s6 ,0x0 (s1 )
                 ae
                             LAB_002da054                                    XREF[1]:     002da04c (j)   
        002da054 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da058 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da05c 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da060 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da064 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da068 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da06c 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da070 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da074 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da078 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da07c 2d  20  20       move       param_1 ,s1
                 02
        002da080 2d  28  40       move       param_2 ,s2
                 02
        002da084 f7  00  00       b          LAB_002da464
                 10
        002da088 2d  30  00       _move      param_3 ,s0
                 02
                             LAB_002da08c                                    XREF[1]:     002da03c (j)   
        002da08c 14  00  a5       lw         param_2 ,0x14 (sp )
                 8f
        002da090 18  00  a6       lw         param_3 ,0x18 (sp )
                 8f
        002da094 1c  00  a7       lw         a3 ,0x1c (sp )
                 8f
        002da098 5e  69  0b       jal        inflate_codes_new                                undefined inflate_codes_new(unde
                 0c
        002da09c 2d  40  40       _move      t0 ,s2
                 02
        002da0a0 2d  80  40       move       s0 ,v0
                 00
        002da0a4 15  00  00       bnel       s0 ,zero ,LAB_002da0fc
                 56
        002da0a8 24  00  42       _lw        v0 ,0x24 (s2 )
                 8e
        002da0ac 1c  00  a4       lw         param_1 ,0x1c (sp )
                 8f
        002da0b0 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002da0b4 2d  28  40       _move      param_2 ,s2
                 02
        002da0b8 18  00  a4       lw         param_1 ,0x18 (sp )
                 8f
        002da0bc 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002da0c0 2d  28  40       _move      param_2 ,s2
                 02
        002da0c4 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da0c8 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da0cc 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da0d0 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da0d4 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da0d8 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da0dc 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da0e0 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da0e4 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da0e8 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da0ec 2d  20  20       move       param_1 ,s1
                 02
        002da0f0 2d  28  40       move       param_2 ,s2
                 02
        002da0f4 db  00  00       b          LAB_002da464
                 10
        002da0f8 fc  ff  06       _li        param_3 ,-0x4
                 24
                             LAB_002da0fc                                    XREF[1]:     002da0a4 (j)   
        002da0fc 28  00  44       lw         param_1 ,0x28 (s2 )
                 8e
        002da100 09  f8  40       jalr       v0
                 00
        002da104 0c  00  25       _lw        param_2 ,0xc (s1 )
                 8e
        002da108 0c  00  30       sw         s0 ,0xc (s1 )
                 ae
        002da10c 18  00  a2       lw         v0 ,0x18 (sp )
                 8f
        002da110 04  00  22       sw         v0 ,0x4 (s1 )
                 ae
        002da114 1c  00  a2       lw         v0 ,0x1c (sp )
                 8f
        002da118 08  00  22       sw         v0 ,0x8 (s1 )
                 ae
        002da11c 06  00  02       li         v0 ,0x6
                 24
        002da120 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             switchD_002d9788::caseD_6                       XREF[2]:     002d9788 (j) ,  003b8118 (*)   
        002da124 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da128 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da12c 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da130 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da134 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da138 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da13c 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da140 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da144 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da148 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da14c 2d  20  20       move       param_1 ,s1
                 02
        002da150 2d  28  40       move       param_2 ,s2
                 02
        002da154 7a  69  0b       jal        inflate_codes                                    int inflate_codes(int param_1, i
                 0c
        002da158 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
        002da15c 20  00  a2       sw         v0 ,0x20 (sp )
                 af
        002da160 01  00  02       li         v0 ,0x1
                 24
        002da164 20  00  a3       lw         v1 ,0x20 (sp )
                 8f
        002da168 04  00  62       beq        v1 ,v0 ,LAB_002da17c
                 10
        002da16c 2d  20  20       _move      param_1 ,s1
                 02
        002da170 2d  28  40       move       param_2 ,s2
                 02
        002da174 bb  00  00       b          LAB_002da464
                 10
        002da178 2d  30  60       _move      param_3 ,v1
                 00
                             LAB_002da17c                                    XREF[1]:     002da168 (j)   
        002da17c 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002da180 0c  00  24       lw         param_1 ,0xc (s1 )
                 8e
        002da184 b2  6b  0b       jal        inflate_codes_free                               undefined inflate_codes_free(und
                 0c
        002da188 2d  28  40       _move      param_2 ,s2
                 02
        002da18c 08  00  24       lw         param_1 ,0x8 (s1 )
                 8e
        002da190 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002da194 2d  28  40       _move      param_2 ,s2
                 02
        002da198 04  00  24       lw         param_1 ,0x4 (s1 )
                 8e
        002da19c 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002da1a0 2d  28  40       _move      param_2 ,s2
                 02
        002da1a4 00  00  55       lw         s5 ,0x0 (s2 )
                 8e
        002da1a8 04  00  57       lw         s7 ,0x4 (s2 )
                 8e
        002da1ac 20  00  34       lw         s4 ,0x20 (s1 )
                 8e
        002da1b0 30  00  3e       lw         s8 ,0x30 (s1 )
                 8e
        002da1b4 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002da1b8 2b  10  c3       sltu       v0 ,s8 ,v1
                 03
        002da1bc 04  00  40       beq        v0 ,zero ,LAB_002da1d0
                 10
        002da1c0 1c  00  33       _lw        s3 ,0x1c (s1 )
                 8e
        002da1c4 23  b0  7e       subu       s6 ,v1 ,s8
                 00
        002da1c8 03  00  00       b          LAB_002da1d8
                 10
        002da1cc ff  ff  d6       _addiu     s6 ,s6 ,-0x1
                 26
                             LAB_002da1d0                                    XREF[1]:     002da1bc (j)   
        002da1d0 28  00  22       lw         v0 ,0x28 (s1 )
                 8e
        002da1d4 23  b0  5e       subu       s6 ,v0 ,s8
                 00
                             LAB_002da1d8                                    XREF[1]:     002da1c8 (j)   
        002da1d8 18  00  22       lw         v0 ,0x18 (s1 )
                 8e
        002da1dc 03  00  40       bne        v0 ,zero ,LAB_002da1ec
                 14
        002da1e0 08  00  62       _sltiu     v0 ,s3 ,0x8
                 2e
        002da1e4 60  fd  00       b          LAB_002d9768
                 10
        002da1e8 00  00  20       _sw        zero ,0x0 (s1 )
                 ae
                             LAB_002da1ec                                    XREF[1]:     002da1dc (j)   
        002da1ec 04  00  40       bne        v0 ,zero ,LAB_002da200
                 14
        002da1f0 07  00  02       _li        v0 ,0x7
                 24
        002da1f4 f8  ff  73       addiu      s3 ,s3 ,-0x8
                 26
        002da1f8 01  00  f7       addiu      s7 ,s7 ,0x1
                 26
        002da1fc ff  ff  b5       addiu      s5 ,s5 ,-0x1
                 26
                             LAB_002da200                                    XREF[1]:     002da1ec (j)   
        002da200 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             switchD_002d9788::caseD_7                       XREF[2]:     002d9788 (j) ,  003b811c (*)   
        002da204 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da208 2d  20  20       move       param_1 ,s1
                 02
        002da20c 2d  28  40       move       param_2 ,s2
                 02
        002da210 ac  6c  0b       jal        inflate_flush                                    int inflate_flush(int param_1, i
                 0c
        002da214 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
        002da218 20  00  a2       sw         v0 ,0x20 (sp )
                 af
        002da21c 2c  00  22       lw         v0 ,0x2c (s1 )
                 8e
        002da220 2c  00  23       lw         v1 ,0x2c (s1 )
                 8e
        002da224 30  00  22       lw         v0 ,0x30 (s1 )
                 8e
        002da228 0f  00  62       beq        v1 ,v0 ,LAB_002da268
                 10
        002da22c 30  00  3e       _lw        s8 ,0x30 (s1 )
                 8e
        002da230 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da234 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da238 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da23c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da240 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da244 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da248 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da24c 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da250 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da254 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da258 2d  20  20       move       param_1 ,s1
                 02
        002da25c 2d  28  40       move       param_2 ,s2
                 02
        002da260 80  00  00       b          LAB_002da464
                 10
        002da264 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da268                                    XREF[1]:     002da228 (j)   
        002da268 08  00  02       li         v0 ,0x8
                 24
        002da26c 00  00  22       sw         v0 ,0x0 (s1 )
                 ae
                             switchD_002d9788::caseD_8                       XREF[2]:     002d9788 (j) ,  003b8120 (*)   
        002da270 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da274 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da278 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da27c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da280 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da284 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da288 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da28c 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da290 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da294 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da298 2d  20  20       move       param_1 ,s1
                 02
        002da29c 2d  28  40       move       param_2 ,s2
                 02
        002da2a0 70  00  00       b          LAB_002da464
                 10
        002da2a4 01  00  06       _li        param_3 ,0x1
                 24
                             switchD_002d9788::caseD_9                       XREF[2]:     002d9788 (j) ,  003b8124 (*)   
        002da2a8 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da2ac 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da2b0 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da2b4 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da2b8 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da2bc 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da2c0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da2c4 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da2c8 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da2cc 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da2d0 2d  20  20       move       param_1 ,s1
                 02
        002da2d4 2d  28  40       move       param_2 ,s2
                 02
        002da2d8 62  00  00       b          LAB_002da464
                 10
        002da2dc fd  ff  06       _li        param_3 ,-0x3
                 24
                             LAB_002da2e0                                    XREF[1]:     002d9790 (j)   
        002da2e0 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da2e4 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da2e8 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da2ec 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da2f0 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da2f4 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da2f8 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da2fc 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da300 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da304 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da308 2d  20  20       move       param_1 ,s1
                 02
        002da30c 2d  28  40       move       param_2 ,s2
                 02
        002da310 54  00  00       b          LAB_002da464
                 10
        002da314 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da318                                    XREF[1]:     002d98f0 (j)   
        002da318 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da31c 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da320 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da324 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da328 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da32c 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da330 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da334 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da338 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da33c 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da340 2d  20  20       move       param_1 ,s1
                 02
        002da344 2d  28  40       move       param_2 ,s2
                 02
        002da348 46  00  00       b          LAB_002da464
                 10
        002da34c 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da350                                    XREF[1]:     002d9b38 (j)   
        002da350 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da354 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da358 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da35c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da360 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da364 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da368 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da36c 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da370 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da374 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da378 2d  20  20       move       param_1 ,s1
                 02
        002da37c 2d  28  40       move       param_2 ,s2
                 02
        002da380 38  00  00       b          LAB_002da464
                 10
        002da384 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da388                                    XREF[1]:     002d9c80 (j)   
        002da388 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da38c 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da390 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da394 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da398 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da39c 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da3a0 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da3a4 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da3a8 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da3ac 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da3b0 2d  20  20       move       param_1 ,s1
                 02
        002da3b4 2d  28  40       move       param_2 ,s2
                 02
        002da3b8 2a  00  00       b          LAB_002da464
                 10
        002da3bc 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da3c0                                    XREF[1]:     002d9e08 (j)   
        002da3c0 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da3c4 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da3c8 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da3cc 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da3d0 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da3d4 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da3d8 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da3dc 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da3e0 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da3e4 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da3e8 2d  20  20       move       param_1 ,s1
                 02
        002da3ec 2d  28  40       move       param_2 ,s2
                 02
        002da3f0 1c  00  00       b          LAB_002da464
                 10
        002da3f4 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             LAB_002da3f8                                    XREF[1]:     002d9eb0 (j)   
        002da3f8 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da3fc 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da400 04  00  40       sw         zero ,0x4 (s2 )
                 ae
        002da404 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da408 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da40c 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da410 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da414 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da418 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da41c 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da420 2d  20  20       move       param_1 ,s1
                 02
        002da424 2d  28  40       move       param_2 ,s2
                 02
        002da428 0e  00  00       b          LAB_002da464
                 10
        002da42c 20  00  a6       _lw        param_3 ,0x20 (sp )
                 8f
                             switchD_002d9788::default                       XREF[1]:     002d9770 (j)   
        002da430 20  00  34       sw         s4 ,0x20 (s1 )
                 ae
        002da434 1c  00  33       sw         s3 ,0x1c (s1 )
                 ae
        002da438 04  00  57       sw         s7 ,0x4 (s2 )
                 ae
        002da43c 00  00  42       lw         v0 ,0x0 (s2 )
                 8e
        002da440 23  10  a2       subu       v0 ,s5 ,v0
                 02
        002da444 08  00  43       lw         v1 ,0x8 (s2 )
                 8e
        002da448 21  10  43       addu       v0 ,v0 ,v1
                 00
        002da44c 08  00  42       sw         v0 ,0x8 (s2 )
                 ae
        002da450 00  00  55       sw         s5 ,0x0 (s2 )
                 ae
        002da454 30  00  3e       sw         s8 ,0x30 (s1 )
                 ae
        002da458 2d  20  20       move       param_1 ,s1
                 02
        002da45c 2d  28  40       move       param_2 ,s2
                 02
        002da460 fe  ff  06       li         param_3 ,-0x2
                 24
                             LAB_002da464                                    XREF[20]:    002d9874 (j) ,  002d98e8 (j) , 
                                                                                          002d996c (j) ,  002d99d4 (j) , 
                                                                                          002d9ad8 (j) ,  002d9bcc (j) , 
                                                                                          002d9c3c (j) ,  002d9da8 (j) , 
                                                                                          002d9f70 (j) ,  002da084 (j) , 
                                                                                          002da0f4 (j) ,  002da174 (j) , 
                                                                                          002da260 (j) ,  002da2a0 (j) , 
                                                                                          002da2d8 (j) ,  002da310 (j) , 
                                                                                          002da348 (j) ,  002da380 (j) , 
                                                                                          002da3b8 (j) ,  002da3f0 (j) ,  [more]
        002da464 ac  6c  0b       jal        inflate_flush                                    int inflate_flush(int param_1, i
                 0c
        002da468 00  00  00       _nop
                 00
        002da46c c0  00  bf       ld         ra ,0xc0 (sp )
                 df
        002da470 b0  00  be       ld         s8 ,0xb0 (sp )
                 df
        002da474 a0  00  b7       ld         s7 ,0xa0 (sp )
                 df
        002da478 90  00  b6       ld         s6 ,0x90 (sp )
                 df
        002da47c 80  00  b5       ld         s5 ,0x80 (sp )
                 df
        002da480 70  00  b4       ld         s4 ,0x70 (sp )
                 df
        002da484 60  00  b3       ld         s3 ,0x60 (sp )
                 df
        002da488 50  00  b2       ld         s2 ,0x50 (sp )
                 df
        002da48c 40  00  b1       ld         s1 ,0x40 (sp )
                 df
        002da490 30  00  b0       ld         s0 ,0x30 (sp )
                 df
        002da494 08  00  e0       jr         ra
                 03
        002da498 d0  00  bd       _addiu     sp ,sp ,0xd0
                 27
        002da49c 00              ??         00h
        002da49d 00              ??         00h
        002da49e 00              ??         00h
        002da49f 00              ??         00h

# huft_build_0x2db430

## Decomp:


/* ../inftrees.c */

undefined4
huft_build(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
          uint *param_7,int param_8)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint auStack_620 [16];
  char cStack_5e0;
  char cStack_5df;
  undefined2 uStack_5de;
  uint uStack_5dc;
  uint auStack_5d0 [16];
  uint auStack_590 [288];
  int aiStack_110 [16];
  uint uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint *puStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int *piStack_b0;
  uint *puStack_ac;
  
  uStack_d0 = param_2;
  uStack_cc = param_3;
  iStack_c8 = param_4;
  iStack_c4 = param_5;
  puStack_c0 = param_6;
  iStack_bc = param_8;
  auStack_620[0] = 0;
  auStack_620[1] = 0;
  auStack_620[2] = 0;
  auStack_620[3] = 0;
  auStack_620[4] = 0;
  auStack_620[5] = 0;
  auStack_620[6] = 0;
  auStack_620[7] = 0;
  auStack_620[8] = 0;
  auStack_620[9] = 0;
  auStack_620[10] = 0;
  auStack_620[0xb] = 0;
  auStack_620[0xc] = 0;
  auStack_620[0xd] = 0;
  auStack_620[0xe] = 0;
  auStack_620[0xf] = 0;
  piVar13 = param_1;
  do {
    auStack_620[*piVar13] = auStack_620[*piVar13] + 1;
    param_2 = param_2 - 1;
    piVar13 = piVar13 + 1;
  } while (param_2 != 0);
  if (auStack_620[0] == uStack_d0) {
    *puStack_c0 = 0;
    *param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = 1;
    if (auStack_620[1] == 0) {
      for (uVar7 = 2; (uVar7 < 0x10 && (auStack_620[uVar7] == 0)); uVar7 = uVar7 + 1) {
      }
    }
    uVar15 = *param_7;
    if (*param_7 < uVar7) {
      uVar15 = uVar7;
    }
    uVar11 = 0xf;
    if (auStack_620[0xf] == 0) {
      for (uVar11 = 0xe; (uVar11 != 0 && (auStack_620[uVar11] == 0)); uVar11 = uVar11 - 1) {
      }
    }
    uStack_b8 = uVar11;
    if (uVar11 < uVar15) {
      uVar15 = uVar11;
    }
    *param_7 = uVar15;
    iStack_b4 = 1 << (uVar7 & 0x1f);
    for (uVar8 = uVar7; uVar8 < uVar11; uVar8 = uVar8 + 1) {
      if ((int)(iStack_b4 - auStack_620[uVar8]) < 0) goto LAB_002db5e4;
      iStack_b4 = (iStack_b4 - auStack_620[uVar8]) * 2;
    }
    iStack_b4 = iStack_b4 - auStack_620[uVar11];
    if (iStack_b4 < 0) {
LAB_002db5e4:
      uVar2 = 0xfffffffd;
    }
    else {
      auStack_620[uVar11] = iStack_b4 + auStack_620[uVar11];
      iVar9 = 0;
      aiStack_110[1] = 0;
      puVar14 = auStack_620;
      piVar13 = aiStack_110 + 2;
      while( true ) {
        puVar14 = puVar14 + 1;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) break;
        iVar9 = iVar9 + *puVar14;
        *piVar13 = iVar9;
        piVar13 = piVar13 + 1;
      }
      uVar11 = 0;
      iVar9 = *param_1;
      while( true ) {
        param_1 = param_1 + 1;
        if (iVar9 != 0) {
          iVar16 = aiStack_110[iVar9];
          auStack_590[iVar16] = uVar11;
          aiStack_110[iVar9] = iVar16 + 1;
        }
        uVar11 = uVar11 + 1;
        if (uStack_d0 <= uVar11) break;
        iVar9 = *param_1;
      }
      uVar12 = 0;
      aiStack_110[0] = 0;
      puVar14 = auStack_590;
      iVar9 = -1;
      uVar11 = -uVar15;
      auStack_5d0[0] = 0;
      uVar8 = 0;
      uVar4 = 0;
      if ((int)uVar7 <= (int)uStack_b8) {
        do {
          iVar16 = auStack_620[uVar7] - 1;
          if (iVar16 != -1) {
            piStack_b0 = aiStack_110;
            puStack_ac = auStack_590 + uStack_d0;
            do {
              cVar1 = (char)uVar11;
              uVar10 = uVar11 + uVar15;
              iVar17 = iVar9;
              if ((int)(uVar11 + uVar15) < (int)uVar7) {
                do {
                  uVar11 = uVar10;
                  uVar8 = uStack_b8 - uVar11;
                  if (uVar15 < uStack_b8 - uVar11) {
                    uVar8 = uVar15;
                  }
                  uVar10 = uVar7 - uVar11;
                  uVar4 = 1 << (uVar10 & 0x1f);
                  iVar9 = iVar17 + 1;
                  if (iVar16 + 1U < uVar4) {
                    iVar5 = (uVar4 - 1) - iVar16;
                    puVar6 = auStack_620 + uVar7;
                    if (uVar10 < uVar8) {
                      while( true ) {
                        uVar10 = uVar10 + 1;
                        if ((uVar8 <= uVar10) || (puVar6 = puVar6 + 1, (uint)(iVar5 * 2) <= *puVa r6)
                           ) break;
                        iVar5 = iVar5 * 2 - *puVar6;
                      }
                    }
                  }
                  uVar4 = 1 << (uVar10 & 0x1f);
                  lVar3 = (**(code **)(iStack_bc + 0x20))
                                    (*(undefined4 *)(iStack_bc + 0x28),uVar4 + 1,8);
                  iVar5 = (int)lVar3;
                  uVar8 = iVar5 + 8;
                  if (lVar3 == 0) {
                    if (iVar9 != 0) {
                      inflate_trees_free(auStack_5d0[0],iStack_bc);
                    }
                    return 0xfffffffc;
                  }
                  *puStack_c0 = uVar8;
                  puStack_c0 = (uint *)(iVar5 + 4);
                  *(undefined4 *)(iVar5 + 4) = 0;
                  auStack_5d0[iVar9] = uVar8;
                  if (iVar9 != 0) {
                    piStack_b0[iVar9] = uVar12;
                    cStack_5df = (char)uVar15;
                    cStack_5e0 = (char)uVar10;
                    uStack_5dc = uVar8;
                    *(ulong *)((uVar12 >> (uVar11 - uVar15 & 0x1f)) * 8 + auStack_5d0[iVar17]) =
                         CONCAT44(uVar8,CONCAT22(uStack_5de,CONCAT11((char)uVar15,(char)uVar10))) ;
                  }
                  uVar10 = uVar11 + uVar15;
                  iVar17 = iVar9;
                } while ((int)(uVar11 + uVar15) < (int)uVar7);
                cVar1 = (char)uVar11;
              }
              cStack_5df = (char)uVar7 - cVar1;
              if (puVar14 < puStack_ac) {
                if (*puVar14 < uStack_cc) {
                  cStack_5e0 = '\0';
                  if (0xff < *puVar14) {
                    cStack_5e0 = '`';
                  }
                  uStack_5dc = *puVar14;
                }
                else {
                  cStack_5e0 = *(char *)((*puVar14 - uStack_cc) * 4 + iStack_c4) + 'P';
                  uStack_5dc = *(uint *)((*puVar14 - uStack_cc) * 4 + iStack_c8);
                }
                puVar14 = puVar14 + 1;
              }
              else {
                cStack_5e0 = -0x40;
              }
              for (uVar10 = uVar12 >> (uVar11 & 0x1f); uVar10 < uVar4;
                  uVar10 = uVar10 + (1 << (uVar7 - uVar11 & 0x1f))) {
                *(ulong *)(uVar10 * 8 + uVar8) =
                     CONCAT44(uStack_5dc,CONCAT22(uStack_5de,CONCAT11(cStack_5df,cStack_5e0)));
              }
              uVar10 = 1 << (uVar7 - 1 & 0x1f);
              if ((uVar12 & uVar10) == 0) {
                uVar12 = uVar12 ^ uVar10;
              }
              else {
                do {
                  uVar12 = uVar12 ^ uVar10;
                  uVar10 = uVar10 >> 1;
                } while ((uVar12 & uVar10) != 0);
                uVar12 = uVar12 ^ uVar10;
              }
              if ((uVar12 & (1 << (uVar11 & 0x1f)) - 1U) != piStack_b0[iVar9]) {
                do {
                  iVar9 = iVar9 + -1;
                  uVar11 = uVar11 - uVar15;
                } while ((uVar12 & (1 << (uVar11 & 0x1f)) - 1U) != piStack_b0[iVar9]);
              }
              iVar16 = iVar16 + -1;
            } while (iVar16 != -1);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 <= (int)uStack_b8);
      }
      uVar2 = 0;
      if ((iStack_b4 != 0) && (uVar2 = 0xfffffffb, uStack_b8 == 1)) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

## MIPS:

                             *************************************************************
                             *  ../inftrees.c                                              
                             *************************************************************
                             undefined4  __stdcall  huft_build (int *  param_1 ,  uint  pa
                               assume gp = 0x3c3170
             undefined4        v0_lo:4        <RETURN>
             int *             a0_lo:4        param_1
             uint              a1_lo:4        param_2
             uint              a2_lo:4        param_3
             int               a3_lo:4        param_4
             int               t0_lo:4        param_5
             uint *            t1_lo:4        param_6
             uint *            t2_lo:4        param_7
             int               t3_lo:4        param_8
                             huft_build                                      XREF[5]:     inflate_trees_bits:002dba68 (c) , 
                                                                                          inflate_trees_dynamic:002dbb34 (
                                                                                          inflate_trees_dynamic:002dbbb0 (
                                                                                          inflate_trees_fixed:002dbd98 (c)
                                                                                          inflate_trees_fixed:002dbdf8 (c)
        002db430 e0  f9  bd       addiu      sp ,sp ,-0x620
                 27
             assume gp = <UNKNOWN>
        002db434 10  06  bf       sd         ra ,0x610 (sp )
                 ff
        002db438 00  06  be       sd         s8 ,0x600 (sp )
                 ff
        002db43c f0  05  b7       sd         s7 ,0x5f0 (sp )
                 ff
        002db440 e0  05  b6       sd         s6 ,0x5e0 (sp )
                 ff
        002db444 d0  05  b5       sd         s5 ,0x5d0 (sp )
                 ff
        002db448 c0  05  b4       sd         s4 ,0x5c0 (sp )
                 ff
        002db44c b0  05  b3       sd         s3 ,0x5b0 (sp )
                 ff
        002db450 a0  05  b2       sd         s2 ,0x5a0 (sp )
                 ff
        002db454 90  05  b1       sd         s1 ,0x590 (sp )
                 ff
        002db458 80  05  b0       sd         s0 ,0x580 (sp )
                 ff
        002db45c 50  05  a5       sw         param_2 ,0x550 (sp )
                 af
        002db460 54  05  a6       sw         param_3 ,0x554 (sp )
                 af
        002db464 58  05  a7       sw         param_4 ,0x558 (sp )
                 af
        002db468 5c  05  a8       sw         param_5 ,0x55c (sp )
                 af
        002db46c 60  05  a9       sw         param_6 ,0x560 (sp )
                 af
        002db470 64  05  ab       sw         param_8 ,0x564 (sp )
                 af
        002db474 00  00  a0       sw         zero ,0x0 (sp )
                 af
        002db478 04  00  a0       sw         zero ,0x4 (sp )
                 af
        002db47c 08  00  a0       sw         zero ,0x8 (sp )
                 af
        002db480 0c  00  a0       sw         zero ,0xc (sp )
                 af
        002db484 10  00  a0       sw         zero ,0x10 (sp )
                 af
        002db488 14  00  a0       sw         zero ,0x14 (sp )
                 af
        002db48c 18  00  a0       sw         zero ,0x18 (sp )
                 af
        002db490 1c  00  a0       sw         zero ,0x1c (sp )
                 af
        002db494 20  00  a0       sw         zero ,0x20 (sp )
                 af
        002db498 24  00  a0       sw         zero ,0x24 (sp )
                 af
        002db49c 28  00  a0       sw         zero ,0x28 (sp )
                 af
        002db4a0 2c  00  a0       sw         zero ,0x2c (sp )
                 af
        002db4a4 30  00  a0       sw         zero ,0x30 (sp )
                 af
        002db4a8 34  00  a0       sw         zero ,0x34 (sp )
                 af
        002db4ac 38  00  a0       sw         zero ,0x38 (sp )
                 af
        002db4b0 3c  00  a0       sw         zero ,0x3c (sp )
                 af
        002db4b4 2d  98  80       move       s3 ,param_1
                 00
        002db4b8 2d  88  a0       move       s1 ,param_2
                 00
        002db4bc 00  00  00       nop
                 00
                             LAB_002db4c0                                    XREF[1]:     002db4dc (j)   
        002db4c0 00  00  62       lw         v0 ,0x0 (s3 )
                 8e
        002db4c4 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002db4c8 21  18  a2       addu       v1 ,sp ,v0
                 03
        002db4cc 00  00  62       lw         v0 ,0x0 (v1 )
                 8c
        002db4d0 01  00  42       addiu      v0 ,v0 ,0x1
                 24
        002db4d4 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
        002db4d8 ff  ff  31       addiu      s1 ,s1 ,-0x1
                 26
        002db4dc f8  ff  20       bne        s1 ,zero ,LAB_002db4c0
                 16
        002db4e0 04  00  73       _addiu     s3 ,s3 ,0x4
                 26
        002db4e4 00  00  a2       lw         v0 ,0x0 (sp )
                 8f
        002db4e8 50  05  a3       lw         v1 ,0x550 (sp )
                 8f
        002db4ec 06  00  43       bnel       v0 ,v1 ,LAB_002db508
                 54
        002db4f0 00  00  55       _lw        s5 ,0x0 (param_7 )
                 8d
        002db4f4 60  05  a4       lw         param_1 ,0x560 (sp )
                 8f
        002db4f8 00  00  80       sw         zero ,0x0 (param_1 )
                 ac
        002db4fc 00  00  40       sw         zero ,0x0 (param_7 )
                 ad
        002db500 40  01  00       b          LAB_002dba04
                 10
        002db504 2d  10  00       _move      v0 ,zero
                 00
                             LAB_002db508                                    XREF[1]:     002db4ec (j)   
        002db508 04  00  a2       lw         v0 ,0x4 (sp )
                 8f
        002db50c 09  00  40       bne        v0 ,zero ,LAB_002db534
                 14
        002db510 01  00  10       _li        s0 ,0x1
                 24
        002db514 01  00  10       addiu      s0 ,s0 ,0x1
                 26
                             LAB_002db518                                    XREF[1]:     002db52c (j)   
        002db518 10  00  02       sltiu      v0 ,s0 ,0x10
                 2e
        002db51c 05  00  40       beq        v0 ,zero ,LAB_002db534
                 10
        002db520 80  10  10       _sll       v0 ,s0 ,0x2
                 00
        002db524 21  10  a2       addu       v0 ,sp ,v0
                 03
        002db528 00  00  42       lw         v0 ,0x0 (v0 )
                 8c
        002db52c fa  ff  40       beql       v0 ,zero ,LAB_002db518
                 50
        002db530 01  00  10       _addiu     s0 ,s0 ,0x1
                 26
                             LAB_002db534                                    XREF[2]:     002db50c (j) ,  002db51c (j)   
        002db534 2d  a0  00       move       s4 ,s0
                 02
        002db538 2b  10  b4       sltu       v0 ,s5 ,s4
                 02
        002db53c 0b  a8  82       movn       s5 ,s4 ,v0
                 02
        002db540 3c  00  a2       lw         v0 ,0x3c (sp )
                 8f
        002db544 08  00  40       bne        v0 ,zero ,LAB_002db568
                 14
        002db548 0f  00  11       _li        s1 ,0xf
                 24
        002db54c ff  ff  31       addiu      s1 ,s1 ,-0x1
                 26
                             LAB_002db550                                    XREF[1]:     002db560 (j)   
        002db550 05  00  20       beq        s1 ,zero ,LAB_002db568
                 12
        002db554 80  10  11       _sll       v0 ,s1 ,0x2
                 00
        002db558 21  10  a2       addu       v0 ,sp ,v0
                 03
        002db55c 00  00  42       lw         v0 ,0x0 (v0 )
                 8c
        002db560 fb  ff  40       beql       v0 ,zero ,LAB_002db550
                 50
        002db564 ff  ff  31       _addiu     s1 ,s1 ,-0x1
                 26
                             LAB_002db568                                    XREF[2]:     002db544 (j) ,  002db550 (j)   
        002db568 68  05  b1       sw         s1 ,0x568 (sp )
                 af
        002db56c 2b  10  35       sltu       v0 ,s1 ,s5
                 02
        002db570 0b  a8  22       movn       s5 ,s1 ,v0
                 02
        002db574 00  00  55       sw         s5 ,0x0 (param_7 )
                 ad
        002db578 01  00  02       li         v0 ,0x1
                 24
        002db57c 04  10  02       sllv       v0 ,v0 ,s0
                 02
        002db580 6c  05  a2       sw         v0 ,0x56c (sp )
                 af
        002db584 68  05  a5       lw         param_2 ,0x568 (sp )
                 8f
        002db588 2b  10  05       sltu       v0 ,s0 ,param_2
                 02
        002db58c 0f  00  40       beq        v0 ,zero ,LAB_002db5cc
                 10
        002db590 80  10  11       _sll       v0 ,s1 ,0x2
                 00
        002db594 00  00  00       nop
                 00
                             LAB_002db598                                    XREF[1]:     002db5c0 (j)   
        002db598 80  10  10       sll        v0 ,s0 ,0x2
                 00
        002db59c 21  10  a2       addu       v0 ,sp ,v0
                 03
        002db5a0 00  00  42       lw         v0 ,0x0 (v0 )
                 8c
        002db5a4 6c  05  a7       lw         param_4 ,0x56c (sp )
                 8f
        002db5a8 23  38  e2       subu       param_4 ,param_4 ,v0
                 00
        002db5ac 0d  00  e0       bltz       param_4 ,LAB_002db5e4
                 04
        002db5b0 6c  05  a7       _sw        param_4 ,0x56c (sp )
                 af
        002db5b4 01  00  10       addiu      s0 ,s0 ,0x1
                 26
        002db5b8 40  38  07       sll        param_4 ,param_4 ,0x1
                 00
        002db5bc 2b  10  11       sltu       v0 ,s0 ,s1
                 02
        002db5c0 f5  ff  40       bne        v0 ,zero ,LAB_002db598
                 14
        002db5c4 6c  05  a7       _sw        param_4 ,0x56c (sp )
                 af
        002db5c8 80  10  11       sll        v0 ,s1 ,0x2
                 00
                             LAB_002db5cc                                    XREF[1]:     002db58c (j)   
        002db5cc 21  10  a2       addu       v0 ,sp ,v0
                 03
        002db5d0 00  00  42       lw         v0 ,0x0 (v0 )
                 8c
        002db5d4 6c  05  a8       lw         param_5 ,0x56c (sp )
                 8f
        002db5d8 23  40  02       subu       param_5 ,param_5 ,v0
                 01
        002db5dc 03  00  01       bgez       param_5 ,LAB_002db5ec
                 05
        002db5e0 6c  05  a8       _sw        param_5 ,0x56c (sp )
                 af
                             LAB_002db5e4                                    XREF[1]:     002db5ac (j)   
        002db5e4 07  01  00       b          LAB_002dba04
                 10
        002db5e8 fd  ff  02       _li        v0 ,-0x3
                 24
                             LAB_002db5ec                                    XREF[1]:     002db5dc (j)   
        002db5ec 80  10  11       sll        v0 ,s1 ,0x2
                 00
        002db5f0 21  18  a2       addu       v1 ,sp ,v0
                 03
        002db5f4 00  00  62       lw         v0 ,0x0 (v1 )
                 8c
        002db5f8 6c  05  a5       lw         param_2 ,0x56c (sp )
                 8f
        002db5fc 21  10  a2       addu       v0 ,param_2 ,v0
                 00
        002db600 00  00  62       sw         v0 ,0x0 (v1 )
                 ac
        002db604 2d  80  00       move       s0 ,zero
                 00
        002db608 14  05  a0       sw         zero ,0x514 (sp )
                 af
        002db60c 04  00  b3       addiu      s3 ,sp ,0x4
                 27
        002db610 ff  ff  31       addiu      s1 ,s1 ,-0x1
                 26
        002db614 0a  00  20       beq        s1 ,zero ,LAB_002db640
                 12
        002db618 18  05  a5       _addiu     param_2 ,sp ,0x518
                 27
        002db61c 00  00  00       nop
                 00
                             LAB_002db620                                    XREF[1]:     002db638 (j)   
        002db620 00  00  62       lw         v0 ,0x0 (s3 )
                 8e
        002db624 21  80  02       addu       s0 ,s0 ,v0
                 02
        002db628 00  00  b0       sw         s0 ,0x0 (param_2 )
                 ac
        002db62c 04  00  73       addiu      s3 ,s3 ,0x4
                 26
        002db630 04  00  a5       addiu      param_2 ,param_2 ,0x4
                 24
        002db634 ff  ff  31       addiu      s1 ,s1 ,-0x1
                 26
        002db638 f9  ff  20       bne        s1 ,zero ,LAB_002db620
                 16
        002db63c 00  00  00       _nop
                 00
                             LAB_002db640                                    XREF[1]:     002db614 (j)   
        002db640 2d  98  80       move       s3 ,param_1
                 00
        002db644 2d  88  00       move       s1 ,zero
                 00
        002db648 10  05  a6       addiu      param_3 ,sp ,0x510
                 27
        002db64c 90  00  a5       addiu      param_2 ,sp ,0x90
                 27
        002db650 00  00  70       lw         s0 ,0x0 (s3 )
                 8e
        002db654 00  00  00       nop
                 00
                             LAB_002db658                                    XREF[1]:     002db68c (j)   
        002db658 09  00  00       beq        s0 ,zero ,LAB_002db680
                 12
        002db65c 04  00  73       _addiu     s3 ,s3 ,0x4
                 26
        002db660 80  20  10       sll        param_1 ,s0 ,0x2
                 00
        002db664 21  20  c4       addu       param_1 ,param_3 ,param_1
                 00
        002db668 00  00  83       lw         v1 ,0x0 (param_1 )
                 8c
        002db66c 80  10  03       sll        v0 ,v1 ,0x2
                 00
        002db670 21  10  a2       addu       v0 ,param_2 ,v0
                 00
        002db674 00  00  51       sw         s1 ,0x0 (v0 )
                 ac
        002db678 01  00  63       addiu      v1 ,v1 ,0x1
                 24
        002db67c 00  00  83       sw         v1 ,0x0 (param_1 )
                 ac
                             LAB_002db680                                    XREF[1]:     002db658 (j)   
        002db680 01  00  31       addiu      s1 ,s1 ,0x1
                 26
        002db684 50  05  a7       lw         param_4 ,0x550 (sp )
                 8f
        002db688 2b  10  27       sltu       v0 ,s1 ,param_4
                 02
        002db68c f2  ff  40       bnel       v0 ,zero ,LAB_002db658
                 54
        002db690 00  00  70       _lw        s0 ,0x0 (s3 )
                 8e
        002db694 2d  88  00       move       s1 ,zero
                 00
        002db698 10  05  a0       sw         zero ,0x510 (sp )
                 af
        002db69c 90  00  b3       addiu      s3 ,sp ,0x90
                 27
        002db6a0 ff  ff  1e       li         s8 ,-0x1
                 24
        002db6a4 23  90  15       subu       s2 ,zero ,s5
                 00
        002db6a8 50  00  a0       sw         zero ,0x50 (sp )
                 af
        002db6ac 2d  30  00       move       param_3 ,zero
                 00
        002db6b0 68  05  a8       lw         param_5 ,0x568 (sp )
                 8f
        002db6b4 2a  10  14       slt        v0 ,param_5 ,s4
                 01
        002db6b8 ca  00  40       bne        v0 ,zero ,LAB_002db9e4
                 14
        002db6bc 2d  b0  00       _move      s6 ,zero
                 00
        002db6c0 80  10  14       sll        v0 ,s4 ,0x2
                 00
        002db6c4 00  00  00       nop
                 00
                             LAB_002db6c8                                    XREF[1]:     002db9dc (j)   
        002db6c8 21  10  a2       addu       v0 ,sp ,v0
                 03
        002db6cc 00  00  57       lw         s7 ,0x0 (v0 )
                 8c
        002db6d0 ff  ff  f7       addiu      s7 ,s7 ,-0x1
                 26
        002db6d4 ff  ff  02       lui        v0 ,0xffff
                 3c
        002db6d8 ff  ff  42       ori        v0 ,v0 ,0xffff
                 34
        002db6dc bc  00  e2       beq        s7 ,v0 ,LAB_002db9d0
                 12
        002db6e0 10  05  a3       _addiu     v1 ,sp ,0x510
                 27
        002db6e4 70  05  a3       sw         v1 ,0x570 (sp )
                 af
        002db6e8 90  00  a3       addiu      v1 ,sp ,0x90
                 27
        002db6ec 50  05  a4       lw         param_1 ,0x550 (sp )
                 8f
        002db6f0 80  10  04       sll        v0 ,param_1 ,0x2
                 00
        002db6f4 21  18  62       addu       v1 ,v1 ,v0
                 00
        002db6f8 74  05  a3       sw         v1 ,0x574 (sp )
                 af
        002db6fc 21  10  55       addu       v0 ,s2 ,s5
                 02
                             LAB_002db700                                    XREF[1]:     002db9c8 (j)   
        002db700 2d  18  40       move       v1 ,v0
                 00
        002db704 2a  10  54       slt        v0 ,v0 ,s4
                 00
        002db708 54  00  40       beq        v0 ,zero ,LAB_002db85c
                 10
        002db70c 23  10  92       _subu      v0 ,s4 ,s2
                 02
        002db710 2d  90  60       move       s2 ,v1
                 00
        002db714 00  00  00       nop
                 00
                             LAB_002db718                                    XREF[1]:     002db850 (j)   
        002db718 68  05  a5       lw         param_2 ,0x568 (sp )
                 8f
        002db71c 23  b0  b2       subu       s6 ,param_2 ,s2
                 00
        002db720 2b  10  b6       sltu       v0 ,s5 ,s6
                 02
        002db724 0b  b0  a2       movn       s6 ,s5 ,v0
                 02
        002db728 23  80  92       subu       s0 ,s4 ,s2
                 02
        002db72c 01  00  07       li         param_4 ,0x1
                 24
        002db730 04  18  07       sllv       v1 ,param_4 ,s0
                 02
        002db734 01  00  e2       addiu      v0 ,s7 ,0x1
                 26
        002db738 2b  10  43       sltu       v0 ,v0 ,v1
                 00
        002db73c 14  00  40       beq        v0 ,zero ,LAB_002db790
                 10
        002db740 01  00  de       _addiu     s8 ,s8 ,0x1
                 27
        002db744 ff  ff  62       addiu      v0 ,v1 ,-0x1
                 24
        002db748 23  18  57       subu       v1 ,v0 ,s7
                 00
        002db74c 80  10  14       sll        v0 ,s4 ,0x2
                 00
        002db750 21  28  a2       addu       param_2 ,sp ,v0
                 03
        002db754 2b  10  16       sltu       v0 ,s0 ,s6
                 02
        002db758 0e  00  40       beq        v0 ,zero ,LAB_002db794
                 10
        002db75c 01  00  08       _li        param_5 ,0x1
                 24
        002db760 03  00  00       b          LAB_002db770
                 10
        002db764 01  00  10       _addiu     s0 ,s0 ,0x1
                 26
                             LAB_002db768                                    XREF[1]:     002db788 (j)   
        002db768 23  18  62       subu       v1 ,v1 ,v0
                 00
        002db76c 01  00  10       addiu      s0 ,s0 ,0x1
                 26
                             LAB_002db770                                    XREF[1]:     002db760 (j)   
        002db770 2b  10  16       sltu       v0 ,s0 ,s6
                 02
        002db774 06  00  40       beq        v0 ,zero ,LAB_002db790
                 10
        002db778 40  18  03       _sll       v1 ,v1 ,0x1
                 00
        002db77c 04  00  a5       addiu      param_2 ,param_2 ,0x4
                 24
        002db780 00  00  a2       lw         v0 ,0x0 (param_2 )
                 8c
        002db784 2b  10  43       sltu       v0 ,v0 ,v1
                 00
        002db788 f7  ff  40       bnel       v0 ,zero ,LAB_002db768
                 54
        002db78c 00  00  a2       _lw        v0 ,0x0 (param_2 )
                 8c
                             LAB_002db790                                    XREF[2]:     002db73c (j) ,  002db774 (j)   
        002db790 01  00  08       li         param_5 ,0x1
                 24
                             LAB_002db794                                    XREF[1]:     002db758 (j)   
        002db794 04  b0  08       sllv       s6 ,param_5 ,s0
                 02
        002db798 64  05  a3       lw         v1 ,0x564 (sp )
                 8f
        002db79c 20  00  62       lw         v0 ,0x20 (v1 )
                 8c
        002db7a0 28  00  64       lw         param_1 ,0x28 (v1 )
                 8c
        002db7a4 01  00  c5       addiu      param_2 ,s6 ,0x1
                 26
        002db7a8 09  f8  40       jalr       v0
                 00
        002db7ac 08  00  06       _li        param_3 ,0x8
                 24
        002db7b0 2d  30  40       move       param_3 ,v0
                 00
        002db7b4 07  00  c0       bne        param_3 ,zero ,LAB_002db7d4
                 14
        002db7b8 08  00  c3       _addiu     v1 ,param_3 ,0x8
                 24
        002db7bc 03  00  c0       beq        s8 ,zero ,LAB_002db7cc
                 13
        002db7c0 50  00  a4       _lw        param_1 ,0x50 (sp )
                 8f
        002db7c4 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002db7c8 64  05  a5       _lw        param_2 ,0x564 (sp )
                 8f
                             LAB_002db7cc                                    XREF[1]:     002db7bc (j)   
        002db7cc 8d  00  00       b          LAB_002dba04
                 10
        002db7d0 fc  ff  02       _li        v0 ,-0x4
                 24
                             LAB_002db7d4                                    XREF[1]:     002db7b4 (j)   
        002db7d4 60  05  a4       lw         param_1 ,0x560 (sp )
                 8f
        002db7d8 00  00  83       sw         v1 ,0x0 (param_1 )
                 ac
        002db7dc 04  00  c5       addiu      param_2 ,param_3 ,0x4
                 24
        002db7e0 60  05  a5       sw         param_2 ,0x560 (sp )
                 af
        002db7e4 04  00  c0       sw         zero ,0x4 (param_3 )
                 ac
        002db7e8 80  20  1e       sll        param_1 ,s8 ,0x2
                 00
        002db7ec 50  00  a5       addiu      param_2 ,sp ,0x50
                 27
        002db7f0 21  10  a4       addu       v0 ,param_2 ,param_1
                 00
        002db7f4 2d  30  60       move       param_3 ,v1
                 00
        002db7f8 13  00  c0       beq        s8 ,zero ,LAB_002db848
                 13
        002db7fc 00  00  46       _sw        param_3 ,0x0 (v0 )
                 ac
        002db800 70  05  a7       lw         param_4 ,0x570 (sp )
                 8f
        002db804 21  10  e4       addu       v0 ,param_4 ,param_1
                 00
        002db808 00  00  51       sw         s1 ,0x0 (v0 )
                 ac
        002db80c 41  00  b5       sb         s5 ,0x41 (sp )
                 a3
        002db810 40  00  b0       sb         s0 ,0x40 (sp )
                 a3
        002db814 44  00  a6       sw         param_3 ,0x44 (sp )
                 af
        002db818 23  10  55       subu       v0 ,s2 ,s5
                 02
        002db81c 06  80  51       srlv       s0 ,s1 ,v0
                 00
        002db820 ff  ff  c2       addiu      v0 ,s8 ,-0x1
                 27
        002db824 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002db828 21  10  a2       addu       v0 ,param_2 ,v0
                 00
        002db82c 00  00  43       lw         v1 ,0x0 (v0 )
                 8c
        002db830 c0  10  10       sll        v0 ,s0 ,0x3
                 00
        002db834 21  10  43       addu       v0 ,v0 ,v1
                 00
        002db838 47  00  a8       ldl        param_5 ,0x47 (sp )
                 6b
        002db83c 40  00  a8       ldr        param_5 ,0x40 (sp )
                 6f
        002db840 07  00  48       sdl        param_5 ,0x7 (v0 )
                 b0
        002db844 00  00  48       sdr        param_5 ,0x0 (v0 )
                 b4
                             LAB_002db848                                    XREF[1]:     002db7f8 (j)   
        002db848 21  18  55       addu       v1 ,s2 ,s5
                 02
        002db84c 2a  10  74       slt        v0 ,v1 ,s4
                 00
        002db850 b1  ff  40       bnel       v0 ,zero ,LAB_002db718
                 54
        002db854 2d  90  60       _move      s2 ,v1
                 00
        002db858 23  10  92       subu       v0 ,s4 ,s2
                 02
                             LAB_002db85c                                    XREF[1]:     002db708 (j)   
        002db85c 41  00  a2       sb         v0 ,0x41 (sp )
                 a3
        002db860 74  05  a7       lw         param_4 ,0x574 (sp )
                 8f
        002db864 2b  10  67       sltu       v0 ,s3 ,param_4
                 02
        002db868 04  00  40       bnel       v0 ,zero ,LAB_002db87c
                 54
        002db86c 00  00  63       _lw        v1 ,0x0 (s3 )
                 8e
        002db870 c0  00  02       li         v0 ,0xc0
                 24
        002db874 1c  00  00       b          LAB_002db8e8
                 10
        002db878 40  00  a2       _sb        v0 ,0x40 (sp )
                 a3
                             LAB_002db87c                                    XREF[1]:     002db868 (j)   
        002db87c 54  05  a8       lw         param_5 ,0x554 (sp )
                 8f
        002db880 2b  10  68       sltu       v0 ,v1 ,param_5
                 00
        002db884 07  00  40       beq        v0 ,zero ,LAB_002db8a4
                 10
        002db888 00  01  62       _sltiu     v0 ,v1 ,0x100
                 2c
        002db88c 02  00  40       bne        v0 ,zero ,LAB_002db898
                 14
        002db890 2d  18  00       _move      v1 ,zero
                 00
        002db894 60  00  03       li         v1 ,0x60
                 24
                             LAB_002db898                                    XREF[1]:     002db88c (j)   
        002db898 40  00  a3       sb         v1 ,0x40 (sp )
                 a3
        002db89c 10  00  00       b          LAB_002db8e0
                 10
        002db8a0 00  00  62       _lw        v0 ,0x0 (s3 )
                 8e
                             LAB_002db8a4                                    XREF[1]:     002db884 (j)   
        002db8a4 00  00  62       lw         v0 ,0x0 (s3 )
                 8e
        002db8a8 54  05  a3       lw         v1 ,0x554 (sp )
                 8f
        002db8ac 23  10  43       subu       v0 ,v0 ,v1
                 00
        002db8b0 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002db8b4 5c  05  a4       lw         param_1 ,0x55c (sp )
                 8f
        002db8b8 21  10  44       addu       v0 ,v0 ,param_1
                 00
        002db8bc 00  00  42       lbu        v0 ,0x0 (v0 )
                 90
        002db8c0 50  00  42       addiu      v0 ,v0 ,0x50
                 24
        002db8c4 40  00  a2       sb         v0 ,0x40 (sp )
                 a3
        002db8c8 00  00  62       lw         v0 ,0x0 (s3 )
                 8e
        002db8cc 23  10  43       subu       v0 ,v0 ,v1
                 00
        002db8d0 80  10  02       sll        v0 ,v0 ,0x2
                 00
        002db8d4 58  05  a5       lw         param_2 ,0x558 (sp )
                 8f
        002db8d8 21  10  45       addu       v0 ,v0 ,param_2
                 00
        002db8dc 00  00  42       lw         v0 ,0x0 (v0 )
                 8c
                             LAB_002db8e0                                    XREF[1]:     002db89c (j)   
        002db8e0 44  00  a2       sw         v0 ,0x44 (sp )
                 af
        002db8e4 04  00  73       addiu      s3 ,s3 ,0x4
                 26
                             LAB_002db8e8                                    XREF[1]:     002db874 (j)   
        002db8e8 23  10  92       subu       v0 ,s4 ,s2
                 02
        002db8ec 01  00  07       li         param_4 ,0x1
                 24
        002db8f0 04  18  47       sllv       v1 ,param_4 ,v0
                 00
        002db8f4 06  80  51       srlv       s0 ,s1 ,s2
                 02
        002db8f8 2b  10  16       sltu       v0 ,s0 ,s6
                 02
        002db8fc 0d  00  40       beq        v0 ,zero ,LAB_002db934
                 10
        002db900 ff  ff  82       _addiu     v0 ,s4 ,-0x1
                 26
        002db904 00  00  00       nop
                 00
                             LAB_002db908                                    XREF[1]:     002db928 (j)   
        002db908 c0  10  10       sll        v0 ,s0 ,0x3
                 00
        002db90c 21  10  46       addu       v0 ,v0 ,param_3
                 00
        002db910 47  00  a8       ldl        param_5 ,0x47 (sp )
                 6b
        002db914 40  00  a8       ldr        param_5 ,0x40 (sp )
                 6f
        002db918 07  00  48       sdl        param_5 ,0x7 (v0 )
                 b0
        002db91c 00  00  48       sdr        param_5 ,0x0 (v0 )
                 b4
        002db920 21  80  03       addu       s0 ,s0 ,v1
                 02
        002db924 2b  10  16       sltu       v0 ,s0 ,s6
                 02
        002db928 f7  ff  40       bne        v0 ,zero ,LAB_002db908
                 14
        002db92c 00  00  00       _nop
                 00
        002db930 ff  ff  82       addiu      v0 ,s4 ,-0x1
                 26
                             LAB_002db934                                    XREF[1]:     002db8fc (j)   
        002db934 01  00  08       li         param_5 ,0x1
                 24
        002db938 04  80  48       sllv       s0 ,param_5 ,v0
                 00
        002db93c 24  10  30       and        v0 ,s1 ,s0
                 02
        002db940 09  00  40       beql       v0 ,zero ,LAB_002db968
                 50
        002db944 26  88  30       _xor       s1 ,s1 ,s0
                 02
                             LAB_002db948                                    XREF[1]:     002db95c (j)   
        002db948 26  88  30       xor        s1 ,s1 ,s0
                 02
        002db94c 42  80  10       srl        s0 ,s0 ,0x1
                 00
        002db950 24  10  30       and        v0 ,s1 ,s0
                 02
        002db954 00  00  00       nop
                 00
        002db958 00  00  00       nop
                 00
        002db95c fa  ff  40       bne        v0 ,zero ,LAB_002db948
                 14
        002db960 00  00  00       _nop
                 00
        002db964 26  88  30       xor        s1 ,s1 ,s0
                 02
                             LAB_002db968                                    XREF[1]:     002db940 (j)   
        002db968 01  00  03       li         v1 ,0x1
                 24
        002db96c 04  10  43       sllv       v0 ,v1 ,s2
                 02
        002db970 ff  ff  42       addiu      v0 ,v0 ,-0x1
                 24
        002db974 24  10  22       and        v0 ,s1 ,v0
                 02
        002db978 80  18  1e       sll        v1 ,s8 ,0x2
                 00
        002db97c 70  05  a4       lw         param_1 ,0x570 (sp )
                 8f
        002db980 21  18  83       addu       v1 ,param_1 ,v1
                 00
        002db984 00  00  63       lw         v1 ,0x0 (v1 )
                 8c
        002db988 0d  00  43       beql       v0 ,v1 ,LAB_002db9c0
                 50
        002db98c ff  ff  f7       _addiu     s7 ,s7 ,-0x1
                 26
        002db990 01  00  05       li         param_2 ,0x1
                 24
        002db994 ff  ff  de       addiu      s8 ,s8 ,-0x1
                 27
                             LAB_002db998                                    XREF[1]:     002db9b4 (j)   
        002db998 23  90  55       subu       s2 ,s2 ,s5
                 02
        002db99c 04  10  45       sllv       v0 ,param_2 ,s2
                 02
        002db9a0 ff  ff  42       addiu      v0 ,v0 ,-0x1
                 24
        002db9a4 24  10  22       and        v0 ,s1 ,v0
                 02
        002db9a8 80  18  1e       sll        v1 ,s8 ,0x2
                 00
        002db9ac 21  18  83       addu       v1 ,param_1 ,v1
                 00
        002db9b0 00  00  63       lw         v1 ,0x0 (v1 )
                 8c
        002db9b4 f8  ff  43       bnel       v0 ,v1 ,LAB_002db998
                 54
        002db9b8 ff  ff  de       _addiu     s8 ,s8 ,-0x1
                 27
        002db9bc ff  ff  f7       addiu      s7 ,s7 ,-0x1
                 26
                             LAB_002db9c0                                    XREF[1]:     002db988 (j)   
        002db9c0 ff  ff  04       lui        param_1 ,0xffff
                 3c
        002db9c4 ff  ff  84       ori        param_1 ,param_1 ,0xffff
                 34
        002db9c8 4d  ff  e4       bne        s7 ,param_1 ,LAB_002db700
                 16
        002db9cc 21  10  55       _addu      v0 ,s2 ,s5
                 02
                             LAB_002db9d0                                    XREF[1]:     002db6dc (j)   
        002db9d0 01  00  94       addiu      s4 ,s4 ,0x1
                 26
        002db9d4 68  05  a5       lw         param_2 ,0x568 (sp )
                 8f
        002db9d8 2a  10  b4       slt        v0 ,param_2 ,s4
                 00
        002db9dc 3a  ff  40       beq        v0 ,zero ,LAB_002db6c8
                 10
        002db9e0 80  10  14       _sll       v0 ,s4 ,0x2
                 00
                             LAB_002db9e4                                    XREF[1]:     002db6b8 (j)   
        002db9e4 6c  05  a7       lw         param_4 ,0x56c (sp )
                 8f
        002db9e8 06  00  e0       beq        param_4 ,zero ,LAB_002dba04
                 10
        002db9ec 2d  10  00       _move      v0 ,zero
                 00
        002db9f0 fb  ff  03       li         v1 ,-0x5
                 24
        002db9f4 68  05  a8       lw         param_5 ,0x568 (sp )
                 8f
        002db9f8 01  00  02       xori       v0 ,param_5 ,0x1
                 39
        002db9fc 0a  18  02       movz       v1 ,zero ,v0
                 00
        002dba00 2d  10  60       move       v0 ,v1
                 00
                             LAB_002dba04                                    XREF[4]:     002db500 (j) ,  002db5e4 (j) , 
                                                                                          002db7cc (j) ,  002db9e8 (j)   
        002dba04 10  06  bf       ld         ra ,0x610 (sp )
                 df
        002dba08 00  06  be       ld         s8 ,0x600 (sp )
                 df
        002dba0c f0  05  b7       ld         s7 ,0x5f0 (sp )
                 df
        002dba10 e0  05  b6       ld         s6 ,0x5e0 (sp )
                 df
        002dba14 d0  05  b5       ld         s5 ,0x5d0 (sp )
                 df
        002dba18 c0  05  b4       ld         s4 ,0x5c0 (sp )
                 df
        002dba1c b0  05  b3       ld         s3 ,0x5b0 (sp )
                 df
        002dba20 a0  05  b2       ld         s2 ,0x5a0 (sp )
                 df
        002dba24 90  05  b1       ld         s1 ,0x590 (sp )
                 df
        002dba28 80  05  b0       ld         s0 ,0x580 (sp )
                 df
        002dba2c 08  00  e0       jr         ra
                 03
        002dba30 20  06  bd       _addiu     sp ,sp ,0x620
                 27
        002dba34 00              ??         00h
        002dba35 00              ??         00h
        002dba36 00              ??         00h
        002dba37 00              ??         00h


# inflate_trees_bits_0x2dba38

## Decomp:


/* ../inftrees.c */

int inflate_trees_bits(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = huft_build(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (iVar1 == -3) {
    *(char **)(param_4 + 0x18) = "oversubscribed dynamic bit lengths tree";
  }
  else if (iVar1 == -5) {
    inflate_trees_free(*param_3,param_4);
    *(char **)(param_4 + 0x18) = "incomplete dynamic bit lengths tree";
    iVar1 = -3;
  }
  return iVar1;
}

## MIPS:

                             *************************************************************
                             *  ../inftrees.c                                              
                             *************************************************************
                             int  __stdcall  inflate_trees_bits (int *  param_1 ,  uint *
                               assume gp = 0x3c3170
             int               v0_lo:4        <RETURN>
             int *             a0_lo:4        param_1
             uint *            a1_lo:4        param_2
             uint *            a2_lo:4        param_3
             int               a3_lo:4        param_4
                             inflate_trees_bits                              XREF[2]:     Entry Point (*) , 
                                                                                          inflate_blocks:002d9d54 (c)   
        002dba38 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002dba3c 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002dba40 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002dba44 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002dba48 2d  50  a0       move       t2 ,param_2
                 00
        002dba4c 2d  88  c0       move       s1 ,param_3
                 00
        002dba50 2d  80  e0       move       s0 ,param_4
                 00
        002dba54 13  00  05       li         param_2 ,0x13
                 24
        002dba58 13  00  06       li         param_3 ,0x13
                 24
        002dba5c 2d  38  00       move       param_4 ,zero
                 00
        002dba60 2d  40  00       move       t0 ,zero
                 00
        002dba64 2d  48  20       move       t1 ,s1
                 02
        002dba68 0c  6d  0b       jal        huft_build                                       undefined4 huft_build(int * para
                 0c
        002dba6c 2d  58  00       _move      t3 ,s0
                 02
        002dba70 2d  18  40       move       v1 ,v0
                 00
        002dba74 fd  ff  02       li         v0 ,-0x3
                 24
        002dba78 05  00  62       bne        v1 ,v0 ,LAB_002dba90
                 14
        002dba7c fb  ff  02       _li        v0 ,-0x5
                 24
        002dba80 3c  00  02       lui        v0 ,0x3c
                 3c
        002dba84 70  82  42       addiu      v0 ,v0 ,-0x7d90
                 24
        002dba88 0a  00  00       b          LAB_002dbab4
                 10
        002dba8c 18  00  02       _sw        v0 => s_oversubscribed_dynamic_bit_lengt_003b827  = "oversubscribed dynamic bit le
                 ae
                             LAB_002dba90                                    XREF[1]:     002dba78 (j)   
        002dba90 09  00  62       bne        v1 ,v0 ,LAB_002dbab8
                 14
        002dba94 2d  10  60       _move      v0 ,v1
                 00
        002dba98 00  00  24       lw         param_1 ,0x0 (s1 )
                 8e
        002dba9c 98  6f  0b       jal        inflate_trees_free                               undefined8 inflate_trees_free(in
                 0c
        002dbaa0 2d  28  00       _move      param_2 ,s0
                 02
        002dbaa4 3c  00  02       lui        v0 ,0x3c
                 3c
        002dbaa8 98  82  42       addiu      v0 ,v0 ,-0x7d68
                 24
        002dbaac 18  00  02       sw         v0 => s_incomplete_dynamic_bit_lengths_t_003b829  = "incomplete dynamic bit length
                 ae
        002dbab0 fd  ff  03       li         v1 ,-0x3
                 24
                             LAB_002dbab4                                    XREF[1]:     002dba88 (j)   
        002dbab4 2d  10  60       move       v0 ,v1
                 00
                             LAB_002dbab8                                    XREF[1]:     002dba90 (j)   
        002dbab8 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002dbabc 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002dbac0 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002dbac4 08  00  e0       jr         ra
                 03
        002dbac8 30  00  bd       _addiu     sp ,sp ,0x30
                 27
        002dbacc 00              ??         00h
        002dbacd 00              ??         00h
        002dbace 00              ??         00h
        002dbacf 00              ??         00h


# inflate_trees_free

## Decomp:


/* ../inftrees.c */

undefined8 inflate_trees_free(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (iVar2 = param_1, iVar2 != 0) {
    param_1 = *(int *)(iVar2 + -4);
    *(int *)(iVar2 + -4) = iVar1;
    iVar1 = iVar2;
  }
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + -4);
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28));
  }
  return 0;
}


## MIPS:

                             *************************************************************
                             *  ../inftrees.c                                              
                             *************************************************************
                             undefined8  __stdcall  inflate_trees_free (int  param_1 ,  i
                               assume gp = 0x3c3170
             undefined8        v0:8           <RETURN>
             int               a0_lo:4        param_1
             int               a1_lo:4        param_2
                             inflate_trees_free                              XREF[13]:    Entry Point (*) , 
                                                                                          inflate_blocks_reset:002d95d4 (c
                                                                                          inflate_blocks_reset:002d95e0 (c
                                                                                          inflate_blocks:002d9fe8 (c) , 
                                                                                          inflate_blocks:002da0b0 (c) , 
                                                                                          inflate_blocks:002da0bc (c) , 
                                                                                          inflate_blocks:002da190 (c) , 
                                                                                          inflate_blocks:002da19c (c) , 
                                                                                          huft_build:002db7c4 (c) , 
                                                                                          inflate_trees_bits:002dba9c (c) , 
                                                                                          inflate_trees_dynamic:002dbb6c (
                                                                                          inflate_trees_dynamic:002dbbe8 (
                                                                                          inflate_trees_dynamic:002dbc04 (
        002dbe60 d0  ff  bd       addiu      sp ,sp ,-0x30
                 27
             assume gp = <UNKNOWN>
        002dbe64 20  00  bf       sd         ra ,0x20 (sp )
                 ff
        002dbe68 10  00  b1       sd         s1 ,0x10 (sp )
                 ff
        002dbe6c 00  00  b0       sd         s0 ,0x0 (sp )
                 ff
        002dbe70 2d  88  a0       move       s1 ,param_2
                 00
        002dbe74 2d  80  80       move       s0 ,param_1
                 00
        002dbe78 08  00  00       beq        s0 ,zero ,LAB_002dbe9c
                 12
        002dbe7c 2d  28  00       _move      param_2 ,zero
                 00
                             LAB_002dbe80                                    XREF[1]:     002dbe94 (j)   
        002dbe80 fc  ff  02       lw         v0 ,-0x4 (s0 )
                 8e
        002dbe84 fc  ff  05       sw         param_2 ,-0x4 (s0 )
                 ae
        002dbe88 2d  28  00       move       param_2 ,s0
                 02
        002dbe8c 2d  80  40       move       s0 ,v0
                 00
        002dbe90 00  00  00       nop
                 00
        002dbe94 fa  ff  00       bne        s0 ,zero ,LAB_002dbe80
                 16
        002dbe98 00  00  00       _nop
                 00
                             LAB_002dbe9c                                    XREF[1]:     002dbe78 (j)   
        002dbe9c 0a  00  a0       beq        param_2 ,zero ,LAB_002dbec8
                 10
        002dbea0 2d  10  00       _move      v0 ,zero
                 00
        002dbea4 f8  ff  a5       addiu      param_2 ,param_2 ,-0x8
                 24
                             LAB_002dbea8                                    XREF[1]:     002dbebc (j)   
        002dbea8 04  00  b0       lw         s0 ,0x4 (param_2 )
                 8c
        002dbeac 24  00  22       lw         v0 ,0x24 (s1 )
                 8e
        002dbeb0 09  f8  40       jalr       v0
                 00
        002dbeb4 28  00  24       _lw        param_1 ,0x28 (s1 )
                 8e
        002dbeb8 2d  28  00       move       param_2 ,s0
                 02
        002dbebc fa  ff  a0       bnel       param_2 ,zero ,LAB_002dbea8
                 54
        002dbec0 f8  ff  a5       _addiu     param_2 ,param_2 ,-0x8
                 24
        002dbec4 2d  10  00       move       v0 ,zero
                 00
                             LAB_002dbec8                                    XREF[1]:     002dbe9c (j)   
        002dbec8 20  00  bf       ld         ra ,0x20 (sp )
                 df
        002dbecc 10  00  b1       ld         s1 ,0x10 (sp )
                 df
        002dbed0 00  00  b0       ld         s0 ,0x0 (sp )
                 df
        002dbed4 08  00  e0       jr         ra
                 03
        002dbed8 30  00  bd       _addiu     sp ,sp ,0x30
                 27
        002dbedc 00              ??         00h
        002dbedd 00              ??         00h
        002dbede 00              ??         00h
        002dbedf 00              ??         00h

