#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossRender
// Address: 0x166980 - 0x1669bc
void Stage1BossRender_0x166980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossRender_0x166980");
#endif

    ctx->pc = 0x166980u;

    // 0x166980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16698c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16698cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166990: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x166990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x166994: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166998: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 31, 0x1669A0u);
    ctx->pc = 0x16699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166998u;
            // 0x16699c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669A0u; }
        if (ctx->pc != 0x1669A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669A0u; }
        if (ctx->pc != 0x1669A0u) { return; }
    }
    ctx->pc = 0x1669A0u;
    // 0x1669a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1669a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1669a4: 0xc06052c  jal         func_1814B0
    ctx->pc = 0x1669A4u;
    SET_GPR_U32(ctx, 31, 0x1669ACu);
    ctx->pc = 0x1669A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1669A4u;
            // 0x1669a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669ACu; }
        if (ctx->pc != 0x1669ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669ACu; }
        if (ctx->pc != 0x1669ACu) { return; }
    }
    ctx->pc = 0x1669ACu;
    // 0x1669ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1669acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1669b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1669b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1669b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1669B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1669B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669B4u;
            // 0x1669b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1669BCu;
}
