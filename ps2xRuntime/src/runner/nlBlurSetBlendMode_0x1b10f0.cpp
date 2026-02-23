#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurSetBlendMode
// Address: 0x1b10f0 - 0x1b10f8
void nlBlurSetBlendMode_0x1b10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurSetBlendMode");


    ctx->pc = 0x1b10f0u;

    // 0x1b10f0: 0x3e00008
    ctx->pc = 0x1B10F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B10F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937344), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B10F8u;
}
