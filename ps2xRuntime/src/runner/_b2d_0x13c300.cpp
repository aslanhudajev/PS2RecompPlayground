#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _b2d
// Address: 0x13c300 - 0x13c47c
void _b2d_0x13c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_b2d_0x13c300");
#endif

    ctx->pc = 0x13c300u;

    // 0x13c300: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13c304: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x13c308: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13c30c: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x13c30cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x13c310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13c314: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13c318: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c31c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x13c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x13c320: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x13c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x13c324: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13c328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c32c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13c330: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x13c330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x13c334: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c338: 0xc04ee92  jal         func_13BA48
    ctx->pc = 0x13C338u;
    SET_GPR_U32(ctx, 31, 0x13C340u);
    ctx->pc = 0x13C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C338u;
            // 0x13c33c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BA48u;
    if (runtime->hasFunction(0x13BA48u)) {
        auto targetFn = runtime->lookupFunction(0x13BA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C340u; }
        if (ctx->pc != 0x13C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x13ba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C340u; }
        if (ctx->pc != 0x13C340u) { return; }
    }
    ctx->pc = 0x13C340u;
    // 0x13c340: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13c340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c344: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13c348: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x13c348u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x13c34c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x13c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13c350: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13C350u;
    {
        const bool branch_taken_0x13c350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C350u;
            // 0x13c354: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c350) {
            ctx->pc = 0x13C3BCu;
            goto label_13c3bc;
        }
    }
    ctx->pc = 0x13C358u;
    // 0x13c358: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13c35c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x13c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x13c360: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13c364: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x13c364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x13c368: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c36c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x13c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x13c370: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x13c370u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x13c374: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13c374u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x13c378: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x13c378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13c37c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c380: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x13c380u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x13c384: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C384u;
    {
        const bool branch_taken_0x13c384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C384u;
            // 0x13c388: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c384) {
            ctx->pc = 0x13C390u;
            goto label_13c390;
        }
    }
    ctx->pc = 0x13C38Cu;
    // 0x13c38c: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x13c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_13c390:
    // 0x13c390: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13c394: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x13c398: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x13c398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13c39c: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x13c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x13c3a0: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x13c3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c3a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13c3a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c3ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13c3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13c3b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c3b4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13C3B4u;
    {
        const bool branch_taken_0x13c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3B4u;
            // 0x13c3b8: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3b4) {
            ctx->pc = 0x13C434u;
            goto label_13c434;
        }
    }
    ctx->pc = 0x13C3BCu;
label_13c3bc:
    // 0x13c3bc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x13c3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13c3c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3C0u;
    {
        const bool branch_taken_0x13c3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3C0u;
            // 0x13c3c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3c0) {
            ctx->pc = 0x13C3D0u;
            goto label_13c3d0;
        }
    }
    ctx->pc = 0x13C3C8u;
    // 0x13c3c8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x13c3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x13c3cc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x13c3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13c3d0:
    // 0x13c3d0: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x13c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x13c3d4: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x13C3D4u;
    {
        const bool branch_taken_0x13c3d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C3D4u;
            // 0x13c3d8: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3d4) {
            ctx->pc = 0x13C440u;
            goto label_13c440;
        }
    }
    ctx->pc = 0x13C3DCu;
    // 0x13c3dc: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x13c3e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x13c3e4: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x13c3e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c3e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x13c3ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x13c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13c3f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13c3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13c3f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c3f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13c3f8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x13c3f8u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x13c3fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c400: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x13c400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13c404: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x13c404u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x13c408: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C408u;
    {
        const bool branch_taken_0x13c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C408u;
            // 0x13c40c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c408) {
            ctx->pc = 0x13C414u;
            goto label_13c414;
        }
    }
    ctx->pc = 0x13C410u;
    // 0x13c410: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_13c414:
    // 0x13c414: 0x61023  negu        $v0, $a2
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x13c418: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x13c418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x13c41c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x13c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x13c420: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c424: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13c424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13c428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c428u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13c42c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x13c42cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x13c430: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13c434:
    // 0x13c434: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C438u;
    {
        const bool branch_taken_0x13c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C438u;
            // 0x13c43c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c438) {
            ctx->pc = 0x13C458u;
            goto label_13c458;
        }
    }
    ctx->pc = 0x13C440u;
label_13c440:
    // 0x13c440: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x13c440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x13c444: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x13c444u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 3)));
    // 0x13c448: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x13c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13c44c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c450: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x13c450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c454: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x13c454u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
label_13c458:
    // 0x13c458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13c458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c45c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13c45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c460: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13c460u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c464: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x13c464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c468: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13c468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c46c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x13c46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c470: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13c470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c474: 0x3e00008  jr          $ra
    ctx->pc = 0x13C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C474u;
            // 0x13c478: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C390u: goto label_13c390;
            case 0x13C3BCu: goto label_13c3bc;
            case 0x13C3D0u: goto label_13c3d0;
            case 0x13C414u: goto label_13c414;
            case 0x13C434u: goto label_13c434;
            case 0x13C440u: goto label_13c440;
            case 0x13C458u: goto label_13c458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C47Cu;
}
