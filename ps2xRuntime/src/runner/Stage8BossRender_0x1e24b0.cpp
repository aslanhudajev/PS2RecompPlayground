#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8BossRender
// Address: 0x1e24b0 - 0x1e24ec
void Stage8BossRender_0x1e24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8BossRender_0x1e24b0");
#endif

    ctx->pc = 0x1e24b0u;

    // 0x1e24b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e24b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e24b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e24b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e24bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e24bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24c0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e24c4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1e24c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e24c8: 0xc06ce14  jal         func_1B3850
    ctx->pc = 0x1E24C8u;
    SET_GPR_U32(ctx, 31, 0x1E24D0u);
    ctx->pc = 0x1E24CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24C8u;
            // 0x1e24cc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3850u;
    if (runtime->hasFunction(0x1B3850u)) {
        auto targetFn = runtime->lookupFunction(0x1B3850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24D0u; }
        if (ctx->pc != 0x1E24D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomationNonTime_0x1b3850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24D0u; }
        if (ctx->pc != 0x1E24D0u) { return; }
    }
    ctx->pc = 0x1E24D0u;
    // 0x1e24d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e24d4: 0xc060510  jal         func_181440
    ctx->pc = 0x1E24D4u;
    SET_GPR_U32(ctx, 31, 0x1E24DCu);
    ctx->pc = 0x1E24D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24D4u;
            // 0x1e24d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24DCu; }
        if (ctx->pc != 0x1E24DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24DCu; }
        if (ctx->pc != 0x1E24DCu) { return; }
    }
    ctx->pc = 0x1E24DCu;
    // 0x1e24dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e24dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e24e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e24e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e24e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24E4u;
            // 0x1e24e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E24ECu;
}
