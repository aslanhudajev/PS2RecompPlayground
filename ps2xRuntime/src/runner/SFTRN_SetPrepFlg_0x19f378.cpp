#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_SetPrepFlg
// Address: 0x19f378 - 0x19f38c
void SFTRN_SetPrepFlg_0x19f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_SetPrepFlg");


    ctx->pc = 0x19f378u;

    // 0x19f378: 0x240206e0
    ctx->pc = 0x19f378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19f37c: 0xa21818
    ctx->pc = 0x19f37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19f380: 0x642021
    ctx->pc = 0x19f380u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f384: 0x3e00008
    ctx->pc = 0x19F384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F388u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 10616), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F38Cu;
}
