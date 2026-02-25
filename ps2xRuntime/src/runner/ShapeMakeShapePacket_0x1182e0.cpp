#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeShapePacket
// Address: 0x1182e0 - 0x1183f0
void ShapeMakeShapePacket_0x1182e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeShapePacket_0x1182e0");
#endif

    ctx->pc = 0x1182e0u;

    // 0x1182e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1182e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1182e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1182e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1182e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1182e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1182ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1182ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1182f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1182f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1182f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1182f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1182fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1182fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118300: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x118300u;
    SET_GPR_U32(ctx, 31, 0x118308u);
    ctx->pc = 0x118304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118300u;
            // 0x118304: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118308u; }
        if (ctx->pc != 0x118308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118308u; }
        if (ctx->pc != 0x118308u) { return; }
    }
    ctx->pc = 0x118308u;
    // 0x118308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11830c: 0x16000031  bnez        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11830Cu;
    {
        const bool branch_taken_0x11830c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x118310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11830Cu;
            // 0x118310: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11830c) {
            ctx->pc = 0x1183D4u;
            goto label_1183d4;
        }
    }
    ctx->pc = 0x118314u;
    // 0x118314: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x118318: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x118318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x11831c: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x11831Cu;
    SET_GPR_U32(ctx, 31, 0x118324u);
    ctx->pc = 0x118320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11831Cu;
            // 0x118320: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118324u; }
        if (ctx->pc != 0x118324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118324u; }
        if (ctx->pc != 0x118324u) { return; }
    }
    ctx->pc = 0x118324u;
    // 0x118324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118328: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x118328u;
    {
        const bool branch_taken_0x118328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118328u;
            // 0x11832c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118328) {
            ctx->pc = 0x1183D4u;
            goto label_1183d4;
        }
    }
    ctx->pc = 0x118330u;
    // 0x118330: 0xc043c24  jal         func_10F090
    ctx->pc = 0x118330u;
    SET_GPR_U32(ctx, 31, 0x118338u);
    ctx->pc = 0x10F090u;
    if (runtime->hasFunction(0x10F090u)) {
        auto targetFn = runtime->lookupFunction(0x10F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118338u; }
        if (ctx->pc != 0x118338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ExecMicro_0x10f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118338u; }
        if (ctx->pc != 0x118338u) { return; }
    }
    ctx->pc = 0x118338u;
    // 0x118338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11833c: 0x16000025  bnez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x11833Cu;
    {
        const bool branch_taken_0x11833c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x118340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11833Cu;
            // 0x118340: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11833c) {
            ctx->pc = 0x1183D4u;
            goto label_1183d4;
        }
    }
    ctx->pc = 0x118344u;
    // 0x118344: 0xc043c9a  jal         func_10F268
    ctx->pc = 0x118344u;
    SET_GPR_U32(ctx, 31, 0x11834Cu);
    ctx->pc = 0x10F268u;
    if (runtime->hasFunction(0x10F268u)) {
        auto targetFn = runtime->lookupFunction(0x10F268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11834Cu; }
        if (ctx->pc != 0x11834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ContinueMicro_0x10f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11834Cu; }
        if (ctx->pc != 0x11834Cu) { return; }
    }
    ctx->pc = 0x11834Cu;
    // 0x11834c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11834cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118350: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x118350u;
    {
        const bool branch_taken_0x118350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x118354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118350u;
            // 0x118354: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118350) {
            ctx->pc = 0x1183D4u;
            goto label_1183d4;
        }
    }
    ctx->pc = 0x118358u;
    // 0x118358: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x118358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11835c: 0xc047132  jal         func_11C4C8
    ctx->pc = 0x11835Cu;
    SET_GPR_U32(ctx, 31, 0x118364u);
    ctx->pc = 0x118360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11835Cu;
            // 0x118360: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4C8u;
    if (runtime->hasFunction(0x11C4C8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118364u; }
        if (ctx->pc != 0x118364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetDataHead_0x11c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118364u; }
        if (ctx->pc != 0x118364u) { return; }
    }
    ctx->pc = 0x118364u;
    // 0x118364: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118368: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x118368u;
    {
        const bool branch_taken_0x118368 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x118368) {
            ctx->pc = 0x11836Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118368u;
            // 0x11836c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118388u;
            goto label_118388;
        }
    }
    ctx->pc = 0x118370u;
    // 0x118370: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x118370u;
    SET_GPR_U32(ctx, 31, 0x118378u);
    ctx->pc = 0x118374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118370u;
            // 0x118374: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118378u; }
        if (ctx->pc != 0x118378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118378u; }
        if (ctx->pc != 0x118378u) { return; }
    }
    ctx->pc = 0x118378u;
    // 0x118378: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x118378u;
    {
        const bool branch_taken_0x118378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118378u;
            // 0x11837c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118378) {
            ctx->pc = 0x1183D4u;
            goto label_1183d4;
        }
    }
    ctx->pc = 0x118380u;
label_118380:
    // 0x118380: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x118380u;
    {
        const bool branch_taken_0x118380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118380u;
            // 0x118384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118380) {
            ctx->pc = 0x1183D0u;
            goto label_1183d0;
        }
    }
    ctx->pc = 0x118388u;
label_118388:
    // 0x118388: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x118388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11838c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11838Cu;
    {
        const bool branch_taken_0x11838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11838Cu;
            // 0x118390: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11838c) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x118394u;
    // 0x118394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118398:
    // 0x118398: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11839c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11839Cu;
    SET_GPR_U32(ctx, 31, 0x1183A4u);
    ctx->pc = 0x1183A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11839Cu;
            // 0x1183a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (runtime->hasFunction(0x1180A0u)) {
        auto targetFn = runtime->lookupFunction(0x1180A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183A4u; }
        if (ctx->pc != 0x1183A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeMaterialPacket_0x1180a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183A4u; }
        if (ctx->pc != 0x1183A4u) { return; }
    }
    ctx->pc = 0x1183A4u;
    // 0x1183a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1183a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183a8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1183A8u;
    {
        const bool branch_taken_0x1183a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1183ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183A8u;
            // 0x1183ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183a8) {
            ctx->pc = 0x118380u;
            goto label_118380;
        }
    }
    ctx->pc = 0x1183B0u;
    // 0x1183b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1183b4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1183b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1183B8u;
    {
        const bool branch_taken_0x1183b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1183b8) {
            ctx->pc = 0x1183BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1183B8u;
            // 0x1183bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118398u;
            goto label_118398;
        }
    }
    ctx->pc = 0x1183C0u;
label_1183c0:
    // 0x1183c0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1183c4: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1183c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1183c8: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1183C8u;
    SET_GPR_U32(ctx, 31, 0x1183D0u);
    ctx->pc = 0x1183CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1183C8u;
            // 0x1183cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183D0u; }
        if (ctx->pc != 0x1183D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183D0u; }
        if (ctx->pc != 0x1183D0u) { return; }
    }
    ctx->pc = 0x1183D0u;
label_1183d0:
    // 0x1183d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1183d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1183d4:
    // 0x1183d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1183d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1183d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1183d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1183dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1183e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1183e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1183e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1183e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1183E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1183ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183E8u;
            // 0x1183ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118380u: goto label_118380;
            case 0x118388u: goto label_118388;
            case 0x118398u: goto label_118398;
            case 0x1183C0u: goto label_1183c0;
            case 0x1183D0u: goto label_1183d0;
            case 0x1183D4u: goto label_1183d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1183F0u;
}
