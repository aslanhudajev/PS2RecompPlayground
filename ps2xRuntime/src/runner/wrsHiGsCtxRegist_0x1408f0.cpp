#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsCtxRegist
// Address: 0x1408f0 - 0x140934
void wrsHiGsCtxRegist_0x1408f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsCtxRegist_0x1408f0");
#endif

    ctx->pc = 0x1408f0u;

    // 0x1408f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1408f4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1408f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1408f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1408fc: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140900: 0xc044b42  jal         func_112D08
    ctx->pc = 0x140900u;
    SET_GPR_U32(ctx, 31, 0x140908u);
    ctx->pc = 0x140904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140900u;
            // 0x140904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112D08u;
    if (runtime->hasFunction(0x112D08u)) {
        auto targetFn = runtime->lookupFunction(0x112D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140908u; }
        if (ctx->pc != 0x140908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxRegist_0x112d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140908u; }
        if (ctx->pc != 0x140908u) { return; }
    }
    ctx->pc = 0x140908u;
    // 0x140908: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x140908u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x14090c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14090Cu;
    {
        const bool branch_taken_0x14090c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14090Cu;
            // 0x140910: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14090c) {
            ctx->pc = 0x140928u;
            goto label_140928;
        }
    }
    ctx->pc = 0x140914u;
    // 0x140914: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140918: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x14091c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x14091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140920: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140920u;
    SET_GPR_U32(ctx, 31, 0x140928u);
    ctx->pc = 0x140924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140920u;
            // 0x140924: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140928u; }
        if (ctx->pc != 0x140928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140928u; }
        if (ctx->pc != 0x140928u) { return; }
    }
    ctx->pc = 0x140928u;
label_140928:
    // 0x140928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14092c: 0x3e00008  jr          $ra
    ctx->pc = 0x14092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14092Cu;
            // 0x140930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140928u: goto label_140928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140934u;
}
