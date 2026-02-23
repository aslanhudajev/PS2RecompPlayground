#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_SetDecodeSteAsMonoSw
// Address: 0x1699c8 - 0x1699d0
void ADX_SetDecodeSteAsMonoSw_0x1699c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_SetDecodeSteAsMonoSw");


    ctx->pc = 0x1699c8u;

    // 0x1699c8: 0x3e00008
    ctx->pc = 0x1699C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699CCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934784), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1699D0u;
}
