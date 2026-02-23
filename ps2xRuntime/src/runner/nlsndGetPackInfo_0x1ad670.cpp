#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndGetPackInfo
// Address: 0x1ad670 - 0x1ad690
void nlsndGetPackInfo_0x1ad670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndGetPackInfo");


    ctx->pc = 0x1ad670u;

    // 0x1ad670: 0x3c020030
    ctx->pc = 0x1ad670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad674: 0x41880
    ctx->pc = 0x1ad674u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ad678: 0x24425ab0
    ctx->pc = 0x1ad678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23216));
    // 0x1ad67c: 0x431021
    ctx->pc = 0x1ad67cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad680: 0x8c430000
    ctx->pc = 0x1ad680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad684: 0x70001628
    ctx->pc = 0x1ad684u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad688: 0x3e00008
    ctx->pc = 0x1AD688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD68Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD690u;
}
