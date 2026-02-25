#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapUnInit
// Address: 0x148540 - 0x148688
void MapUnInit_0x148540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapUnInit_0x148540");
#endif

    ctx->pc = 0x148540u;

    // 0x148540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148544: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14854c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148550: 0x8c249d08  lw          $a0, -0x62F8($at)
    ctx->pc = 0x148550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941960)));
    // 0x148554: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x148554u;
    {
        const bool branch_taken_0x148554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148554) {
            ctx->pc = 0x148580u;
            goto label_148580;
        }
    }
    ctx->pc = 0x14855Cu;
    // 0x14855c: 0x0  nop
    ctx->pc = 0x14855cu;
    // NOP
label_148560:
    // 0x148560: 0xc053348  jal         func_14CD20
    ctx->pc = 0x148560u;
    SET_GPR_U32(ctx, 31, 0x148568u);
    ctx->pc = 0x148564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148560u;
            // 0x148564: 0x8c900038  lw          $s0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148568u; }
        if (ctx->pc != 0x148568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148568u; }
        if (ctx->pc != 0x148568u) { return; }
    }
    ctx->pc = 0x148568u;
    // 0x148568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14856c: 0x0  nop
    ctx->pc = 0x14856cu;
    // NOP
    // 0x148570: 0x0  nop
    ctx->pc = 0x148570u;
    // NOP
    // 0x148574: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148574u;
    {
        const bool branch_taken_0x148574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x148574) {
            ctx->pc = 0x148560u;
            goto label_148560;
        }
    }
    ctx->pc = 0x14857Cu;
    // 0x14857c: 0x0  nop
    ctx->pc = 0x14857cu;
    // NOP
label_148580:
    // 0x148580: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148584: 0x8c249d10  lw          $a0, -0x62F0($at)
    ctx->pc = 0x148584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941968)));
    // 0x148588: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x148588u;
    {
        const bool branch_taken_0x148588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148588) {
            ctx->pc = 0x1485B0u;
            goto label_1485b0;
        }
    }
    ctx->pc = 0x148590u;
label_148590:
    // 0x148590: 0xc053314  jal         func_14CC50
    ctx->pc = 0x148590u;
    SET_GPR_U32(ctx, 31, 0x148598u);
    ctx->pc = 0x148594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148590u;
            // 0x148594: 0x8c900038  lw          $s0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CC50u;
    if (runtime->hasFunction(0x14CC50u)) {
        auto targetFn = runtime->lookupFunction(0x14CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148598u; }
        if (ctx->pc != 0x148598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_Alpha_0x14cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148598u; }
        if (ctx->pc != 0x148598u) { return; }
    }
    ctx->pc = 0x148598u;
    // 0x148598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14859c: 0x0  nop
    ctx->pc = 0x14859cu;
    // NOP
    // 0x1485a0: 0x0  nop
    ctx->pc = 0x1485a0u;
    // NOP
    // 0x1485a4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1485A4u;
    {
        const bool branch_taken_0x1485a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485a4) {
            ctx->pc = 0x148590u;
            goto label_148590;
        }
    }
    ctx->pc = 0x1485ACu;
    // 0x1485ac: 0x0  nop
    ctx->pc = 0x1485acu;
    // NOP
label_1485b0:
    // 0x1485b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1485b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1485b4: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x1485b8: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1485b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1485bc: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1485BCu;
    {
        const bool branch_taken_0x1485bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485BCu;
            // 0x1485c0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485bc) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x1485C4u;
    // 0x1485c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1485c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1485c8: 0x24840b30  addiu       $a0, $a0, 0xB30
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2864));
    // 0x1485cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1485d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1485d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1485d4: 0x600008  jr          $v1
    ctx->pc = 0x1485D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1485E0u: goto label_1485e0;
            case 0x1485F0u: goto label_1485f0;
            case 0x148600u: goto label_148600;
            case 0x148610u: goto label_148610;
            case 0x148620u: goto label_148620;
            case 0x148630u: goto label_148630;
            case 0x148640u: goto label_148640;
            case 0x148650u: goto label_148650;
            case 0x148660u: goto label_148660;
            case 0x148670u: goto label_148670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1485DCu;
    // 0x1485dc: 0x0  nop
    ctx->pc = 0x1485dcu;
    // NOP
label_1485e0:
    // 0x1485e0: 0xc053018  jal         func_14C060
    ctx->pc = 0x1485E0u;
    SET_GPR_U32(ctx, 31, 0x1485E8u);
    ctx->pc = 0x14C060u;
    if (runtime->hasFunction(0x14C060u)) {
        auto targetFn = runtime->lookupFunction(0x14C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485E8u; }
        if (ctx->pc != 0x1485E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1mapUnInit_0x14c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485E8u; }
        if (ctx->pc != 0x1485E8u) { return; }
    }
    ctx->pc = 0x1485E8u;
    // 0x1485e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1485E8u;
    {
        const bool branch_taken_0x1485e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485e8) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x1485F0u;
label_1485f0:
    // 0x1485f0: 0xc052dc8  jal         func_14B720
    ctx->pc = 0x1485F0u;
    SET_GPR_U32(ctx, 31, 0x1485F8u);
    ctx->pc = 0x14B720u;
    if (runtime->hasFunction(0x14B720u)) {
        auto targetFn = runtime->lookupFunction(0x14B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485F8u; }
        if (ctx->pc != 0x1485F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2mapUnInit_0x14b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485F8u; }
        if (ctx->pc != 0x1485F8u) { return; }
    }
    ctx->pc = 0x1485F8u;
    // 0x1485f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1485F8u;
    {
        const bool branch_taken_0x1485f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485f8) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148600u;
label_148600:
    // 0x148600: 0xc052aac  jal         func_14AAB0
    ctx->pc = 0x148600u;
    SET_GPR_U32(ctx, 31, 0x148608u);
    ctx->pc = 0x14AAB0u;
    if (runtime->hasFunction(0x14AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148608u; }
        if (ctx->pc != 0x148608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3mapUnInit_0x14aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148608u; }
        if (ctx->pc != 0x148608u) { return; }
    }
    ctx->pc = 0x148608u;
    // 0x148608: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x148608u;
    {
        const bool branch_taken_0x148608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148608) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148610u;
label_148610:
    // 0x148610: 0xc05271c  jal         func_149C70
    ctx->pc = 0x148610u;
    SET_GPR_U32(ctx, 31, 0x148618u);
    ctx->pc = 0x149C70u;
    if (runtime->hasFunction(0x149C70u)) {
        auto targetFn = runtime->lookupFunction(0x149C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148618u; }
        if (ctx->pc != 0x148618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4mapUnInit_0x149c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148618u; }
        if (ctx->pc != 0x148618u) { return; }
    }
    ctx->pc = 0x148618u;
    // 0x148618: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x148618u;
    {
        const bool branch_taken_0x148618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148618) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148620u;
label_148620:
    // 0x148620: 0xc0525c0  jal         func_149700
    ctx->pc = 0x148620u;
    SET_GPR_U32(ctx, 31, 0x148628u);
    ctx->pc = 0x149700u;
    if (runtime->hasFunction(0x149700u)) {
        auto targetFn = runtime->lookupFunction(0x149700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148628u; }
        if (ctx->pc != 0x148628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5mapUnInit_0x149700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148628u; }
        if (ctx->pc != 0x148628u) { return; }
    }
    ctx->pc = 0x148628u;
    // 0x148628: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148628u;
    {
        const bool branch_taken_0x148628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148628) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148630u;
label_148630:
    // 0x148630: 0xc052508  jal         func_149420
    ctx->pc = 0x148630u;
    SET_GPR_U32(ctx, 31, 0x148638u);
    ctx->pc = 0x149420u;
    if (runtime->hasFunction(0x149420u)) {
        auto targetFn = runtime->lookupFunction(0x149420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148638u; }
        if (ctx->pc != 0x148638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6mapUnInit_0x149420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148638u; }
        if (ctx->pc != 0x148638u) { return; }
    }
    ctx->pc = 0x148638u;
    // 0x148638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x148638u;
    {
        const bool branch_taken_0x148638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148638) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148640u;
label_148640:
    // 0x148640: 0xc052424  jal         func_149090
    ctx->pc = 0x148640u;
    SET_GPR_U32(ctx, 31, 0x148648u);
    ctx->pc = 0x149090u;
    if (runtime->hasFunction(0x149090u)) {
        auto targetFn = runtime->lookupFunction(0x149090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148648u; }
        if (ctx->pc != 0x148648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7mapUnInit_0x149090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148648u; }
        if (ctx->pc != 0x148648u) { return; }
    }
    ctx->pc = 0x148648u;
    // 0x148648: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148648u;
    {
        const bool branch_taken_0x148648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148648) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148650u;
label_148650:
    // 0x148650: 0xc052368  jal         func_148DA0
    ctx->pc = 0x148650u;
    SET_GPR_U32(ctx, 31, 0x148658u);
    ctx->pc = 0x148DA0u;
    if (runtime->hasFunction(0x148DA0u)) {
        auto targetFn = runtime->lookupFunction(0x148DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148658u; }
        if (ctx->pc != 0x148658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8mapUnInit_0x148da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148658u; }
        if (ctx->pc != 0x148658u) { return; }
    }
    ctx->pc = 0x148658u;
    // 0x148658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148658u;
    {
        const bool branch_taken_0x148658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148658) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0xc0522cc  jal         func_148B30
    ctx->pc = 0x148660u;
    SET_GPR_U32(ctx, 31, 0x148668u);
    ctx->pc = 0x148B30u;
    if (runtime->hasFunction(0x148B30u)) {
        auto targetFn = runtime->lookupFunction(0x148B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148668u; }
        if (ctx->pc != 0x148668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1mapUnInit_0x148b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148668u; }
        if (ctx->pc != 0x148668u) { return; }
    }
    ctx->pc = 0x148668u;
    // 0x148668: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148668u;
    {
        const bool branch_taken_0x148668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148668) {
            ctx->pc = 0x148678u;
            goto label_148678;
        }
    }
    ctx->pc = 0x148670u;
label_148670:
    // 0x148670: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x148670u;
    SET_GPR_U32(ctx, 31, 0x148678u);
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148678u; }
        if (ctx->pc != 0x148678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2mapUnInit_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148678u; }
        if (ctx->pc != 0x148678u) { return; }
    }
    ctx->pc = 0x148678u;
label_148678:
    // 0x148678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14867c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14867cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148680: 0x3e00008  jr          $ra
    ctx->pc = 0x148680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148680u;
            // 0x148684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148560u: goto label_148560;
            case 0x148580u: goto label_148580;
            case 0x148590u: goto label_148590;
            case 0x1485B0u: goto label_1485b0;
            case 0x1485E0u: goto label_1485e0;
            case 0x1485F0u: goto label_1485f0;
            case 0x148600u: goto label_148600;
            case 0x148610u: goto label_148610;
            case 0x148620u: goto label_148620;
            case 0x148630u: goto label_148630;
            case 0x148640u: goto label_148640;
            case 0x148650u: goto label_148650;
            case 0x148660u: goto label_148660;
            case 0x148670u: goto label_148670;
            case 0x148678u: goto label_148678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148688u;
}
