#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetVersionStr
// Address: 0x193800 - 0x19380c
void SFD_GetVersionStr_0x193800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetVersionStr");


    ctx->pc = 0x193800u;

    // 0x193800: 0x3c02002c
    ctx->pc = 0x193800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x193804: 0x3e00008
    ctx->pc = 0x193804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193808u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955856));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19380Cu;
}
