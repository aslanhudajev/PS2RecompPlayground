#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurSetRot
// Address: 0x1b1110 - 0x1b1118
void nlBlurSetRot_0x1b1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurSetRot");


    ctx->pc = 0x1b1110u;

    // 0x1b1110: 0x3e00008
    ctx->pc = 0x1B1110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1114u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937340), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1118u;
}
