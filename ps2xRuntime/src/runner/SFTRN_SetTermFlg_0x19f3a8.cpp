#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_SetTermFlg
// Address: 0x19f3a8 - 0x19f3bc
void SFTRN_SetTermFlg_0x19f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_SetTermFlg");


    ctx->pc = 0x19f3a8u;

    // 0x19f3a8: 0x240206e0
    ctx->pc = 0x19f3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19f3ac: 0xa21818
    ctx->pc = 0x19f3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19f3b0: 0x642021
    ctx->pc = 0x19f3b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f3b4: 0x3e00008
    ctx->pc = 0x19F3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 10620), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3BCu;
}
