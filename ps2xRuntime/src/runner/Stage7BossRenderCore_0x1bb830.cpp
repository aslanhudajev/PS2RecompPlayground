#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossRenderCore
// Address: 0x1bb830 - 0x1bb86c
void Stage7BossRenderCore_0x1bb830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossRenderCore_0x1bb830");
#endif

    ctx->pc = 0x1bb830u;

    // 0x1bb830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb840: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bb844: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1bb844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bb848: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1BB848u;
    SET_GPR_U32(ctx, 31, 0x1BB850u);
    ctx->pc = 0x1BB84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB848u;
            // 0x1bb84c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB850u; }
        if (ctx->pc != 0x1BB850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB850u; }
        if (ctx->pc != 0x1BB850u) { return; }
    }
    ctx->pc = 0x1BB850u;
    // 0x1bb850: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bb850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb854: 0xc060510  jal         func_181440
    ctx->pc = 0x1BB854u;
    SET_GPR_U32(ctx, 31, 0x1BB85Cu);
    ctx->pc = 0x1BB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB854u;
            // 0x1bb858: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB85Cu; }
        if (ctx->pc != 0x1BB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB85Cu; }
        if (ctx->pc != 0x1BB85Cu) { return; }
    }
    ctx->pc = 0x1BB85Cu;
    // 0x1bb85c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb864: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB864u;
            // 0x1bb868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB86Cu;
}
