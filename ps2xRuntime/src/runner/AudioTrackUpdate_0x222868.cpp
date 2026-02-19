#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackUpdate
// Address: 0x222868 - 0x222894
void AudioTrackUpdate_0x222868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222868u;

    // 0x222868: 0x182d
    ctx->pc = 0x222868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22286c: 0x0
    ctx->pc = 0x22286cu;
    // NOP
label_222870:
    // 0x222870: 0x24630001
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x222874: 0x2862000c
    ctx->pc = 0x222874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 12));
    // 0x222878: 0x0
    ctx->pc = 0x222878u;
    // NOP
    // 0x22287c: 0x0
    ctx->pc = 0x22287cu;
    // NOP
    // 0x222880: 0x0
    ctx->pc = 0x222880u;
    // NOP
    // 0x222884: 0x1440fffa
    ctx->pc = 0x222884u;
    {
        const bool branch_taken_0x222884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222884) {
            ctx->pc = 0x222870u;
            goto label_222870;
        }
    }
    ctx->pc = 0x22288Cu;
    // 0x22288c: 0x3e00008
    ctx->pc = 0x22288Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222870u: goto label_222870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222894u;
}
