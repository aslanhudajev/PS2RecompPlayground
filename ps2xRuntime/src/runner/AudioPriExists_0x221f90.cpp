#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPriExists
// Address: 0x221f90 - 0x221fe0
void AudioPriExists_0x221f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221f90u;

    // 0x221f90: 0x282d
    ctx->pc = 0x221f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f94: 0x182d
    ctx->pc = 0x221f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f98: 0x24070014
    ctx->pc = 0x221f98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221f9c: 0x3c020032
    ctx->pc = 0x221f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221fa0: 0x2449fe3c
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221fa4: 0x24060001
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221fa8: 0x674018
    ctx->pc = 0x221fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221fac: 0x0
    ctx->pc = 0x221facu;
    // NOP
label_221fb0:
    // 0x221fb0: 0x1091021
    ctx->pc = 0x221fb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x221fb4: 0x8c420000
    ctx->pc = 0x221fb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221fb8: 0x54440004
    ctx->pc = 0x221FB8u;
    {
        const bool branch_taken_0x221fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x221fb8) {
            ctx->pc = 0x221FBCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x221FCCu;
            goto label_221fcc;
        }
    }
    ctx->pc = 0x221FC0u;
    // 0x221fc0: 0x661004
    ctx->pc = 0x221fc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x221fc4: 0xa22825
    ctx->pc = 0x221fc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x221fc8: 0x24630001
    ctx->pc = 0x221fc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_221fcc:
    // 0x221fcc: 0x2862000c
    ctx->pc = 0x221fccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 12));
    // 0x221fd0: 0x1440fff7
    ctx->pc = 0x221FD0u;
    {
        const bool branch_taken_0x221fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221FD4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221fd0) {
            ctx->pc = 0x221FB0u;
            goto label_221fb0;
        }
    }
    ctx->pc = 0x221FD8u;
    // 0x221fd8: 0x3e00008
    ctx->pc = 0x221FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221FDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221FB0u: goto label_221fb0;
            case 0x221FCCu: goto label_221fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221FE0u;
}
