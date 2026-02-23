#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGetFrameCnt
// Address: 0x1af7b0 - 0x1af7b8
void nlGetFrameCnt_0x1af7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGetFrameCnt");


    ctx->pc = 0x1af7b0u;

    // 0x1af7b0: 0x3e00008
    ctx->pc = 0x1AF7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7B8u;
}
