#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_InitCs
// Address: 0x193cd8 - 0x193ce0
void sflib_InitCs_0x193cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_InitCs");


    ctx->pc = 0x193cd8u;

    // 0x193cd8: 0x3e00008
    ctx->pc = 0x193CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193CE0u;
}
