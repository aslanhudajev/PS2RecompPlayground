#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getRef0
// Address: 0x121408 - 0x121828
void _getRef0_0x121408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getRef0_0x121408");
#endif

    ctx->pc = 0x121408u;

    // 0x121408: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x121408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12140c: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x12140cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x121410: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x121410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x121414: 0x25831df8  addiu       $v1, $t4, 0x1DF8
    ctx->pc = 0x121414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 7672));
    // 0x121418: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x121418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x12141c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x12141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x121420: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x121420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x121424: 0x246e0048  addiu       $t6, $v1, 0x48
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x121428: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x121428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x12142c: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x12142cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x121430: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x121430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x121434: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x121434u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121438: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x121438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x12143c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12143cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121440: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x121440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x121444: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x121444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121448: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x121448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12144c: 0x246b00b8  addiu       $t3, $v1, 0xB8
    ctx->pc = 0x12144cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x121450: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x121450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x121454: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x121454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121458: 0x8faf00b8  lw          $t7, 0xB8($sp)
    ctx->pc = 0x121458u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12145c: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x12145cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121460: 0x8c6d0280  lw          $t5, 0x280($v1)
    ctx->pc = 0x121460u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x121464: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x121464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121468: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x121468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x12146c: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x12146cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121470: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x121470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x121474: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x121474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x121478: 0x114843  sra         $t1, $s1, 1
    ctx->pc = 0x121478u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 1));
    // 0x12147c: 0x8c4217b8  lw          $v0, 0x17B8($v0)
    ctx->pc = 0x12147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6072)));
    // 0x121480: 0x8fb500b0  lw          $s5, 0xB0($sp)
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x121484: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x121484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x121488: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x121488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x12148c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121490: 0x8c77012c  lw          $s7, 0x12C($v1)
    ctx->pc = 0x121490u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x121494: 0x122c821  addu        $t9, $t1, $v0
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x121498: 0x2ec6018  mult        $t4, $s7, $t4
    ctx->pc = 0x121498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12149c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x12149cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1214a0: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1214a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1214a4: 0x1ab8021  addu        $s0, $t5, $t3
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1214a8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1214A8u;
    {
        const bool branch_taken_0x1214a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214A8u;
            // 0x1214ac: 0x1ac6821  addu        $t5, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214a8) {
            ctx->pc = 0x1214C0u;
            goto label_1214c0;
        }
    }
    ctx->pc = 0x1214B0u;
    // 0x1214b0: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1214b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1214b4: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1214b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1214b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1214B8u;
    {
        const bool branch_taken_0x1214b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214B8u;
            // 0x1214bc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214b8) {
            ctx->pc = 0x1214C8u;
            goto label_1214c8;
        }
    }
    ctx->pc = 0x1214C0u;
label_1214c0:
    // 0x1214c0: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1214c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1214c4: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1214c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1214c8:
    // 0x1214c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1214cc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1214d0: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x1214d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1214d4: 0x195903  sra         $t3, $t9, 4
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 25), 4));
    // 0x1214d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1214d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1214dc: 0x67103  sra         $t6, $a2, 4
    ctx->pc = 0x1214dcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1214e0: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x1214e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1214e4: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1214e8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1214ec: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x1214ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1214f0: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1214f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1214f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1214f8: 0x3231823  subu        $v1, $t9, $v1
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x1214fc: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x121500: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x121500u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x121504: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x121508: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x121508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12150c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x12150cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121510: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x121510u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x121514: 0x32b90001  andi        $t9, $s5, 0x1
    ctx->pc = 0x121514u;
    SET_GPR_VEC(ctx, 25, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)1u)));
    // 0x121518: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x121518u;
    {
        const bool branch_taken_0x121518 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121518u;
            // 0x12151c: 0x322c0001  andi        $t4, $s1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121518) {
            ctx->pc = 0x121558u;
            goto label_121558;
        }
    }
    ctx->pc = 0x121520u;
    // 0x121520: 0x1f81004  sllv        $v0, $t8, $t7
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x121524: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x121524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121528: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x121528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12152c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12152Cu;
    {
        const bool branch_taken_0x12152c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12152c) {
            ctx->pc = 0x121530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12152Cu;
            // 0x121530: 0xadb80008  sw          $t8, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12158Cu;
            goto label_12158c;
        }
    }
    ctx->pc = 0x121534u;
    // 0x121534: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121538: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x121538u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x12153c: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x12153cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x121540: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121544: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x121544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x121548: 0x3021823  subu        $v1, $t8, $v0
    ctx->pc = 0x121548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x12154c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x12154cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x121550: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x121550u;
    {
        const bool branch_taken_0x121550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121550u;
            // 0x121554: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121550) {
            ctx->pc = 0x121590u;
            goto label_121590;
        }
    }
    ctx->pc = 0x121558u;
label_121558:
    // 0x121558: 0x1f81004  sllv        $v0, $t8, $t7
    ctx->pc = 0x121558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x12155c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121560: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x121560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x121564: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x121564u;
    {
        const bool branch_taken_0x121564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121564) {
            ctx->pc = 0x121568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121564u;
            // 0x121568: 0xadb80008  sw          $t8, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12158Cu;
            goto label_12158c;
        }
    }
    ctx->pc = 0x12156Cu;
    // 0x12156c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121570: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x121574: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x121574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x121578: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12157c: 0x3022023  subu        $a0, $t8, $v0
    ctx->pc = 0x12157cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x121580: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x121580u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x121584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x121584u;
    {
        const bool branch_taken_0x121584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121584u;
            // 0x121588: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121584) {
            ctx->pc = 0x121590u;
            goto label_121590;
        }
    }
    ctx->pc = 0x12158Cu;
label_12158c:
    // 0x12158c: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x12158cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_121590:
    // 0x121590: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x121590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x121594: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x121594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x121598: 0x24621df8  addiu       $v0, $v1, 0x1DF8
    ctx->pc = 0x121598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7672));
    // 0x12159c: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x12159cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1215a0: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1215a4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1215a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1215a8: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x1215a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1215ac: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x1215acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1215b0: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x1215b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x1215b4: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1215b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1215bc: 0x1e63004  sllv        $a2, $a2, $t7
    ctx->pc = 0x1215bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1215c0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1215c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1215c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1215c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1215c8: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x1215c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1215cc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1215ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1215d0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1215d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1215d4: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1215d4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1215d8: 0x48843  sra         $s1, $a0, 1
    ctx->pc = 0x1215d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1215dc: 0x3c31825  or          $v1, $fp, $v1
    ctx->pc = 0x1215dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 30), GPR_VEC(ctx, 3)));
    // 0x1215e0: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x1215e4: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x1215e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1215e8: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1215ec: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1215ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1215f0: 0x2a26021  addu        $t4, $s5, $v0
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1215f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1215f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1215f8: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x1215f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1215fc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1215fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x121600: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x121600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x121604: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x121604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x121608: 0xca843  sra         $s5, $t4, 1
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 12), 1));
    // 0x12160c: 0xada60010  sw          $a2, 0x10($t5)
    ctx->pc = 0x12160cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 6));
    // 0x121610: 0x82c821  addu        $t9, $a0, $v0
    ctx->pc = 0x121610u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x121614: 0xada90014  sw          $t1, 0x14($t5)
    ctx->pc = 0x121614u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
    // 0x121618: 0x123843  sra         $a3, $s2, 1
    ctx->pc = 0x121618u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
    // 0x12161c: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x12161cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x121620: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x121620u;
    {
        const bool branch_taken_0x121620 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121620u;
            // 0x121624: 0x184043  sra         $t0, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121620) {
            ctx->pc = 0x121644u;
            goto label_121644;
        }
    }
    ctx->pc = 0x121628u;
    // 0x121628: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x121628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x12162c: 0x132043  sra         $a0, $s3, 1
    ctx->pc = 0x12162cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
    // 0x121630: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x121630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x121634: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x121634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x121638: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12163c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12163Cu;
    {
        const bool branch_taken_0x12163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12163Cu;
            // 0x121640: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12163c) {
            ctx->pc = 0x121658u;
            goto label_121658;
        }
    }
    ctx->pc = 0x121644u;
label_121644:
    // 0x121644: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x121644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x121648: 0x131843  sra         $v1, $s3, 1
    ctx->pc = 0x121648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x12164c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121650: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x121650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x121654: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x121654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_121658:
    // 0x121658: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x121658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12165c: 0x1948c3  sra         $t1, $t9, 3
    ctx->pc = 0x12165cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 25), 3));
    // 0x121660: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x121660u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121664: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x121664u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x121668: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x121668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12166c: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x12166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x121670: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x121670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x121674: 0x3231823  subu        $v1, $t9, $v1
    ctx->pc = 0x121674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x121678: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x121678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x12167c: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x12167cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x121680: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x121684: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x121684u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x121688: 0x322c0001  andi        $t4, $s1, 0x1
    ctx->pc = 0x121688u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
    // 0x12168c: 0x32b90001  andi        $t9, $s5, 0x1
    ctx->pc = 0x12168cu;
    SET_GPR_VEC(ctx, 25, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)1u)));
    // 0x121690: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x121690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x121694: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x121694u;
    {
        const bool branch_taken_0x121694 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x121698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121694u;
            // 0x121698: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121694) {
            ctx->pc = 0x1216D4u;
            goto label_1216d4;
        }
    }
    ctx->pc = 0x12169Cu;
    // 0x12169c: 0x1e81004  sllv        $v0, $t0, $t7
    ctx->pc = 0x12169cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1216a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1216a4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1216a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1216a8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1216A8u;
    {
        const bool branch_taken_0x1216a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1216a8) {
            ctx->pc = 0x1216ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1216A8u;
            // 0x1216ac: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x1216B0u;
    // 0x1216b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1216b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1216b4: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x1216b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216b8: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x1216b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1216c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1216c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1216c4: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x1216c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1216c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1216c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1216cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1216CCu;
    {
        const bool branch_taken_0x1216cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1216CCu;
            // 0x1216d0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216cc) {
            ctx->pc = 0x12170Cu;
            goto label_12170c;
        }
    }
    ctx->pc = 0x1216D4u;
label_1216d4:
    // 0x1216d4: 0x1e81004  sllv        $v0, $t0, $t7
    ctx->pc = 0x1216d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1216d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1216dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1216dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1216e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1216E0u;
    {
        const bool branch_taken_0x1216e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1216e0) {
            ctx->pc = 0x1216E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1216E0u;
            // 0x1216e4: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x1216E8u;
    // 0x1216e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1216ec: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x1216ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216f0: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x1216f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x1216f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1216f8: 0x1022023  subu        $a0, $t0, $v0
    ctx->pc = 0x1216f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1216fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1216fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x121700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x121700u;
    {
        const bool branch_taken_0x121700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121700u;
            // 0x121704: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121700) {
            ctx->pc = 0x12170Cu;
            goto label_12170c;
        }
    }
    ctx->pc = 0x121708u;
label_121708:
    // 0x121708: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x121708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_12170c:
    // 0x12170c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121710: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x121710u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x121714: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x121714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x121718: 0x26271df8  addiu       $a3, $s1, 0x1DF8
    ctx->pc = 0x121718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 7672));
    // 0x12171c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12171cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x121720: 0x14e1823  subu        $v1, $t2, $t6
    ctx->pc = 0x121720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x121724: 0x12b2023  subu        $a0, $t1, $t3
    ctx->pc = 0x121724u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x121728: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x121728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x12172c: 0x8cea0280  lw          $t2, 0x280($a3)
    ctx->pc = 0x12172cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x121730: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x121730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x121734: 0x240b0180  addiu       $t3, $zero, 0x180
    ctx->pc = 0x121734u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x121738: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x121738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12173c: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x12173cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121740: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121744: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x121744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121748: 0x8ece0010  lw          $t6, 0x10($s6)
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x12174c: 0x6b7818  mult        $t7, $v1, $t3
    ctx->pc = 0x12174cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121750: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x121750u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x121754: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x121754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x121758: 0x24c90400  addiu       $t1, $a2, 0x400
    ctx->pc = 0x121758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x12175c: 0x246320c8  addiu       $v1, $v1, 0x20C8
    ctx->pc = 0x12175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x121760: 0x8ecd0000  lw          $t5, 0x0($s6)
    ctx->pc = 0x121760u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x121764: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x121768: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x121768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x12176c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x12176cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121770: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x121770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x121774: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x121778: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x121778u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 30), GPR_VEC(ctx, 2)));
    // 0x12177c: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x121780: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x121780u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x121784: 0x1cb8818  mult        $s1, $t6, $t3
    ctx->pc = 0x121784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121788: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x12178c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x12178cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x121790: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x121790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x121794: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x121794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x121798: 0x24ec012c  addiu       $t4, $a3, 0x12C
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 300));
    // 0x12179c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x12179cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1217a0: 0x24a520e8  addiu       $a1, $a1, 0x20E8
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8424));
    // 0x1217a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1217a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1217a8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1217a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1217ac: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x1217acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1217b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1217b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1217b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1217b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1217b8: 0x22d7021  addu        $t6, $s1, $t5
    ctx->pc = 0x1217b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x1217bc: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1217bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1217c0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1217c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1217c4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x1217c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1217c8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1217cc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1217ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1217d0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1217d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217d4: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x1217d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x1217d8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1217d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1217dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1217e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1217e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1217e4: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x1217e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x1217e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1217e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217ec: 0xad0b0028  sw          $t3, 0x28($t0)
    ctx->pc = 0x1217ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 11));
    // 0x1217f0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1217f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1217f4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1217f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1217f8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1217f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1217fc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1217fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x121800: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x121800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121804: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x121804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121808: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x121808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12180c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121810: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x121810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121814: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x121814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x121818: 0xad440038  sw          $a0, 0x38($t2)
    ctx->pc = 0x121818u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 4));
    // 0x12181c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x12181cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x121820: 0x3e00008  jr          $ra
    ctx->pc = 0x121820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121820u;
            // 0x121824: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1214C0u: goto label_1214c0;
            case 0x1214C8u: goto label_1214c8;
            case 0x121558u: goto label_121558;
            case 0x12158Cu: goto label_12158c;
            case 0x121590u: goto label_121590;
            case 0x121644u: goto label_121644;
            case 0x121658u: goto label_121658;
            case 0x1216D4u: goto label_1216d4;
            case 0x121708u: goto label_121708;
            case 0x12170Cu: goto label_12170c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121828u;
}
