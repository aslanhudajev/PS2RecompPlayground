#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossRender
// Address: 0x1a4000 - 0x1a403c
void Stage3BossRender_0x1a4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossRender_0x1a4000");
#endif

    ctx->pc = 0x1a4000u;

    // 0x1a4000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a400c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a400cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4010: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4014: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a4014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a4018: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1A4018u;
    SET_GPR_U32(ctx, 31, 0x1A4020u);
    ctx->pc = 0x1A401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4018u;
            // 0x1a401c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4020u; }
        if (ctx->pc != 0x1A4020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4020u; }
        if (ctx->pc != 0x1A4020u) { return; }
    }
    ctx->pc = 0x1A4020u;
    // 0x1a4020: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a4020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4024: 0xc060510  jal         func_181440
    ctx->pc = 0x1A4024u;
    SET_GPR_U32(ctx, 31, 0x1A402Cu);
    ctx->pc = 0x1A4028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4024u;
            // 0x1a4028: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A402Cu; }
        if (ctx->pc != 0x1A402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A402Cu; }
        if (ctx->pc != 0x1A402Cu) { return; }
    }
    ctx->pc = 0x1A402Cu;
    // 0x1a402c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4034: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4034u;
            // 0x1a4038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A403Cu;
}
