#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerWaves
// Address: 0x2774b0 - 0x2774e4
void PlayerWaves_0x2774b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2774b0u;

    // 0x2774b0: 0x3c020032
    ctx->pc = 0x2774b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2774b4: 0x8c830104
    ctx->pc = 0x2774b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2774b8: 0x8c421540
    ctx->pc = 0x2774b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2774bc: 0x54620003
    ctx->pc = 0x2774BCu;
    {
        const bool branch_taken_0x2774bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2774bc) {
            ctx->pc = 0x2774C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x2774C4u;
    // 0x2774c4: 0x3e00008
    ctx->pc = 0x2774C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2774C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2774CCu: goto label_2774cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2774CCu;
label_2774cc:
    // 0x2774cc: 0x2403000e
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2774d0: 0x433018
    ctx->pc = 0x2774d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2774d4: 0xc51021
    ctx->pc = 0x2774d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2774d8: 0x821021
    ctx->pc = 0x2774d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2774dc: 0x3e00008
    ctx->pc = 0x2774DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2774E0u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6188)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2774CCu: goto label_2774cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2774E4u;
}
