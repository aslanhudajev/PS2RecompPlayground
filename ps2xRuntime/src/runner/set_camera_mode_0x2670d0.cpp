#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_camera_mode
// Address: 0x2670d0 - 0x26711c
void set_camera_mode_0x2670d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2670d0u;

    // 0x2670d0: 0x240201a0
    ctx->pc = 0x2670d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2670d4: 0x822018
    ctx->pc = 0x2670d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2670d8: 0x3c020034
    ctx->pc = 0x2670d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2670dc: 0x2442eb60
    ctx->pc = 0x2670dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2670e0: 0x822021
    ctx->pc = 0x2670e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2670e4: 0x8c8300f8
    ctx->pc = 0x2670e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2670e8: 0x10a30004
    ctx->pc = 0x2670E8u;
    {
        const bool branch_taken_0x2670e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x2670ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2670e8) {
            ctx->pc = 0x2670FCu;
            goto label_2670fc;
        }
    }
    ctx->pc = 0x2670F0u;
    // 0x2670f0: 0xac8300fc
    ctx->pc = 0x2670f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x2670f4: 0xac8500f8
    ctx->pc = 0x2670f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
    // 0x2670f8: 0x24020001
    ctx->pc = 0x2670f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2670fc:
    // 0x2670fc: 0x8c830104
    ctx->pc = 0x2670fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x267100: 0x10c30004
    ctx->pc = 0x267100u;
    {
        const bool branch_taken_0x267100 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x267100) {
            ctx->pc = 0x267114u;
            goto label_267114;
        }
    }
    ctx->pc = 0x267108u;
    // 0x267108: 0xac830108
    ctx->pc = 0x267108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 3));
    // 0x26710c: 0xac860104
    ctx->pc = 0x26710cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 6));
    // 0x267110: 0x34420002
    ctx->pc = 0x267110u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_267114:
    // 0x267114: 0x3e00008
    ctx->pc = 0x267114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2670FCu: goto label_2670fc;
            case 0x267114u: goto label_267114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26711Cu;
}
