#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetInputSj
// Address: 0x18cf70 - 0x18cf78
void mwPlyGetInputSj_0x18cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetInputSj");


    ctx->pc = 0x18cf70u;

    // 0x18cf70: 0x3e00008
    ctx->pc = 0x18CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF74u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CF78u;
}
