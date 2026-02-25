#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_FindFreeStream
// Address: 0x173730 - 0x1737b4
void SOUND_FindFreeStream_0x173730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_FindFreeStream_0x173730");
#endif

    ctx->pc = 0x173730u;

    // 0x173730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173734: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17373c: 0x8c250a68  lw          $a1, 0xA68($at)
    ctx->pc = 0x17373cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x173740: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x173740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x173744: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x173744u;
    {
        const bool branch_taken_0x173744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173744u;
            // 0x173748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173744) {
            ctx->pc = 0x173788u;
            goto label_173788;
        }
    }
    ctx->pc = 0x17374Cu;
    // 0x17374c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x173750: 0x24c60e90  addiu       $a2, $a2, 0xE90
    ctx->pc = 0x173750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3728));
    // 0x173754: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_173758:
    // 0x173758: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x173758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17375c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17375Cu;
    {
        const bool branch_taken_0x17375c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17375c) {
            ctx->pc = 0x173770u;
            goto label_173770;
        }
    }
    ctx->pc = 0x173764u;
    // 0x173764: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173764u;
    {
        const bool branch_taken_0x173764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x173764) {
            ctx->pc = 0x173778u;
            goto label_173778;
        }
    }
    ctx->pc = 0x17376Cu;
    // 0x17376c: 0x0  nop
    ctx->pc = 0x17376cu;
    // NOP
label_173770:
    // 0x173770: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173770u;
    {
        const bool branch_taken_0x173770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173770) {
            ctx->pc = 0x1737A8u;
            goto label_1737a8;
        }
    }
    ctx->pc = 0x173778u;
label_173778:
    // 0x173778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17377c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x17377cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x173780: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x173780u;
    {
        const bool branch_taken_0x173780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173780u;
            // 0x173784: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173780) {
            ctx->pc = 0x173758u;
            goto label_173758;
        }
    }
    ctx->pc = 0x173788u;
label_173788:
    // 0x173788: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17378c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17378Cu;
    SET_GPR_U32(ctx, 31, 0x173794u);
    ctx->pc = 0x173790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17378Cu;
            // 0x173790: 0x24841730  addiu       $a0, $a0, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173794u; }
        if (ctx->pc != 0x173794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173794u; }
        if (ctx->pc != 0x173794u) { return; }
    }
    ctx->pc = 0x173794u;
    // 0x173794: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173798: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173798u;
    SET_GPR_U32(ctx, 31, 0x1737A0u);
    ctx->pc = 0x17379Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173798u;
            // 0x17379c: 0x24841750  addiu       $a0, $a0, 0x1750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737A0u; }
        if (ctx->pc != 0x1737A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737A0u; }
        if (ctx->pc != 0x1737A0u) { return; }
    }
    ctx->pc = 0x1737A0u;
    // 0x1737a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1737a4: 0x0  nop
    ctx->pc = 0x1737a4u;
    // NOP
label_1737a8:
    // 0x1737a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1737a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1737ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1737ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737ACu;
            // 0x1737b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173758u: goto label_173758;
            case 0x173770u: goto label_173770;
            case 0x173778u: goto label_173778;
            case 0x173788u: goto label_173788;
            case 0x1737A8u: goto label_1737a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1737B4u;
}
