#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurSetStrength
// Address: 0x1b10e0 - 0x1b10ec
void nlBlurSetStrength_0x1b10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurSetStrength");


    ctx->pc = 0x1b10e0u;

    // 0x1b10e0: 0x308300ff
    ctx->pc = 0x1b10e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x1b10e4: 0x3e00008
    ctx->pc = 0x1B10E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B10E8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937348), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B10ECu;
}
