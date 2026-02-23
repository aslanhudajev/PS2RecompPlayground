#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetVersionStr
// Address: 0x187e98 - 0x187ea4
void MPV_GetVersionStr_0x187e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetVersionStr");


    ctx->pc = 0x187e98u;

    // 0x187e98: 0x3c02002c
    ctx->pc = 0x187e98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x187e9c: 0x3e00008
    ctx->pc = 0x187E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187EA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953360));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187EA4u;
}
