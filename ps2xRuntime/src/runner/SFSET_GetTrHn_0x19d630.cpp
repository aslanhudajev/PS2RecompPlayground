#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSET_GetTrHn
// Address: 0x19d630 - 0x19d648
void SFSET_GetTrHn_0x19d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSET_GetTrHn");


    ctx->pc = 0x19d630u;

    // 0x19d630: 0x240206e0
    ctx->pc = 0x19d630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19d634: 0xa21818
    ctx->pc = 0x19d634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19d638: 0x642021
    ctx->pc = 0x19d638u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d63c: 0x8c832980
    ctx->pc = 0x19d63cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10624)));
    // 0x19d640: 0x3e00008
    ctx->pc = 0x19D640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D644u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D648u;
}
