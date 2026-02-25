#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1Rest
// Address: 0x117868 - 0x1178a4
void Vumem1Rest_0x117868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1Rest_0x117868");
#endif

    ctx->pc = 0x117868u;

    // 0x117868: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x117868u;
    {
        const bool branch_taken_0x117868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x117868) {
            ctx->pc = 0x11786Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117868u;
            // 0x11786c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x117870u;
            goto label_117870;
        }
    }
    ctx->pc = 0x117870u;
label_117870:
    // 0x117870: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x117870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x117874: 0x8c437210  lw          $v1, 0x7210($v0)
    ctx->pc = 0x117874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29200)));
    // 0x117878: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x11787c: 0x8d027214  lw          $v0, 0x7214($t0)
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29204)));
    // 0x117880: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x117880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x117884: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x117884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x117888: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x117888u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11788c: 0x7047001b  divu1       $zero, $v0, $a3
    ctx->pc = 0x11788cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x117890: 0x1812  mflo        $v1
    ctx->pc = 0x117890u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x117894: 0x70001012  mflo1       $v0
    ctx->pc = 0x117894u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x117898: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x117898u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11789c: 0x3e00008  jr          $ra
    ctx->pc = 0x11789Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1178A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11789Cu;
            // 0x1178a0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117870u: goto label_117870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1178A4u;
}
