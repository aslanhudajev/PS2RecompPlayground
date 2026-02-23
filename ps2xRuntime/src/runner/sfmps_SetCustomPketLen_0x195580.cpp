#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetCustomPketLen
// Address: 0x195580 - 0x195588
void sfmps_SetCustomPketLen_0x195580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetCustomPketLen");


    ctx->pc = 0x195580u;

    // 0x195580: 0x3e00008
    ctx->pc = 0x195580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195588u;
}
