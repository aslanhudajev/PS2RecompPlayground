#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_IsSceMpegUsed
// Address: 0x199dd0 - 0x199ddc
void SFMPVP_IsSceMpegUsed_0x199dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_IsSceMpegUsed");


    ctx->pc = 0x199dd0u;

    // 0x199dd0: 0x8c823d10
    ctx->pc = 0x199dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 15632)));
    // 0x199dd4: 0x3e00008
    ctx->pc = 0x199DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DD8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199DDCu;
}
