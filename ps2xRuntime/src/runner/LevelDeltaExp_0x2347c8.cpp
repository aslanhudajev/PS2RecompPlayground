#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LevelDeltaExp
// Address: 0x2347c8 - 0x2347f0
void LevelDeltaExp_0x2347c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2347c8u;

    // 0x2347c8: 0x2882003d
    ctx->pc = 0x2347c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 61));
    // 0x2347cc: 0x10400005
    ctx->pc = 0x2347CCu;
    {
        const bool branch_taken_0x2347cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2347D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x2347cc) {
            ctx->pc = 0x2347E4u;
            goto label_2347e4;
        }
    }
    ctx->pc = 0x2347D4u;
    // 0x2347d4: 0x2402003c
    ctx->pc = 0x2347d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2347d8: 0x822018
    ctx->pc = 0x2347d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2347dc: 0x10000002
    ctx->pc = 0x2347DCu;
    {
        const bool branch_taken_0x2347dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2347E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1000));
        if (branch_taken_0x2347dc) {
            ctx->pc = 0x2347E8u;
            goto label_2347e8;
        }
    }
    ctx->pc = 0x2347E4u;
label_2347e4:
    // 0x2347e4: 0x240411f8
    ctx->pc = 0x2347e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4600));
label_2347e8:
    // 0x2347e8: 0x3e00008
    ctx->pc = 0x2347E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2347ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2347E4u: goto label_2347e4;
            case 0x2347E8u: goto label_2347e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2347F0u;
}
