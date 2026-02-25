#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossRender
// Address: 0x1db130 - 0x1db16c
void Stageex1BossRender_0x1db130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossRender_0x1db130");
#endif

    ctx->pc = 0x1db130u;

    // 0x1db130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db140: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db144: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db148: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1DB148u;
    SET_GPR_U32(ctx, 31, 0x1DB150u);
    ctx->pc = 0x1DB14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB148u;
            // 0x1db14c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB150u; }
        if (ctx->pc != 0x1DB150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB150u; }
        if (ctx->pc != 0x1DB150u) { return; }
    }
    ctx->pc = 0x1DB150u;
    // 0x1db150: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1db150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db154: 0xc06052c  jal         func_1814B0
    ctx->pc = 0x1DB154u;
    SET_GPR_U32(ctx, 31, 0x1DB15Cu);
    ctx->pc = 0x1DB158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB154u;
            // 0x1db158: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB15Cu; }
        if (ctx->pc != 0x1DB15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB15Cu; }
        if (ctx->pc != 0x1DB15Cu) { return; }
    }
    ctx->pc = 0x1DB15Cu;
    // 0x1db15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db164: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB164u;
            // 0x1db168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB16Cu;
}
