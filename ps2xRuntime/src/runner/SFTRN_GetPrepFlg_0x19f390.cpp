#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_GetPrepFlg
// Address: 0x19f390 - 0x19f3a4
void SFTRN_GetPrepFlg_0x19f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_GetPrepFlg");


    ctx->pc = 0x19f390u;

    // 0x19f390: 0x240206e0
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19f394: 0xa21818
    ctx->pc = 0x19f394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19f398: 0x642021
    ctx->pc = 0x19f398u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f39c: 0x3e00008
    ctx->pc = 0x19F39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10616)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3A4u;
}
