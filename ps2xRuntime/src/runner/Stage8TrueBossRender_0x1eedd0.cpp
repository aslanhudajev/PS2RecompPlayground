#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8TrueBossRender
// Address: 0x1eedd0 - 0x1eee0c
void Stage8TrueBossRender_0x1eedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8TrueBossRender_0x1eedd0");
#endif

    ctx->pc = 0x1eedd0u;

    // 0x1eedd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eedd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eedd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eedd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eeddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eeddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eede0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1eede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eede4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eede8: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1EEDE8u;
    SET_GPR_U32(ctx, 31, 0x1EEDF0u);
    ctx->pc = 0x1EEDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDE8u;
            // 0x1eedec: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDF0u; }
        if (ctx->pc != 0x1EEDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDF0u; }
        if (ctx->pc != 0x1EEDF0u) { return; }
    }
    ctx->pc = 0x1EEDF0u;
    // 0x1eedf0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eedf4: 0xc060510  jal         func_181440
    ctx->pc = 0x1EEDF4u;
    SET_GPR_U32(ctx, 31, 0x1EEDFCu);
    ctx->pc = 0x1EEDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDF4u;
            // 0x1eedf8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDFCu; }
        if (ctx->pc != 0x1EEDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDFCu; }
        if (ctx->pc != 0x1EEDFCu) { return; }
    }
    ctx->pc = 0x1EEDFCu;
    // 0x1eedfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eedfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eee00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eee00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eee04: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE04u;
            // 0x1eee08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEE0Cu;
}
