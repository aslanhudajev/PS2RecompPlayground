#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6BossRender
// Address: 0x1c7ac0 - 0x1c7afc
void Stage6BossRender_0x1c7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6BossRender_0x1c7ac0");
#endif

    ctx->pc = 0x1c7ac0u;

    // 0x1c7ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ad0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c7ad4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c7ad8: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1C7AD8u;
    SET_GPR_U32(ctx, 31, 0x1C7AE0u);
    ctx->pc = 0x1C7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AD8u;
            // 0x1c7adc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AE0u; }
        if (ctx->pc != 0x1C7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AE0u; }
        if (ctx->pc != 0x1C7AE0u) { return; }
    }
    ctx->pc = 0x1C7AE0u;
    // 0x1c7ae0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7ae4: 0xc060510  jal         func_181440
    ctx->pc = 0x1C7AE4u;
    SET_GPR_U32(ctx, 31, 0x1C7AECu);
    ctx->pc = 0x1C7AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AE4u;
            // 0x1c7ae8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AECu; }
        if (ctx->pc != 0x1C7AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AECu; }
        if (ctx->pc != 0x1C7AECu) { return; }
    }
    ctx->pc = 0x1C7AECu;
    // 0x1c7aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AF4u;
            // 0x1c7af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7AFCu;
}
