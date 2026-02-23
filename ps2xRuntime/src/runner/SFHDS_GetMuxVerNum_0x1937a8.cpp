#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_GetMuxVerNum
// Address: 0x1937a8 - 0x1937d4
void SFHDS_GetMuxVerNum_0x1937a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_GetMuxVerNum");


    ctx->pc = 0x1937a8u;

    // 0x1937a8: 0x8c82006c
    ctx->pc = 0x1937a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1937ac: 0x14400003
    ctx->pc = 0x1937ACu;
    {
        const bool branch_taken_0x1937ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1937B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 108));
        if (branch_taken_0x1937ac) {
            ctx->pc = 0x1937BCu;
            goto label_1937bc;
        }
    }
    ctx->pc = 0x1937B4u;
    // 0x1937b4: 0x3e00008
    ctx->pc = 0x1937B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1937BCu: goto label_1937bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1937BCu;
label_1937bc:
    // 0x1937bc: 0x8ca20004
    ctx->pc = 0x1937bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1937c0: 0x24030064
    ctx->pc = 0x1937c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1937c4: 0x8ca40008
    ctx->pc = 0x1937c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1937c8: 0x431018
    ctx->pc = 0x1937c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1937cc: 0x3e00008
    ctx->pc = 0x1937CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937D0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1937BCu: goto label_1937bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1937D4u;
}
