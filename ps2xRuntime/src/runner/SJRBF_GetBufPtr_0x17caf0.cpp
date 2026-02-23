#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_GetBufPtr
// Address: 0x17caf0 - 0x17caf8
void SJRBF_GetBufPtr_0x17caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_GetBufPtr");


    ctx->pc = 0x17caf0u;

    // 0x17caf0: 0x3e00008
    ctx->pc = 0x17CAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CAF8u;
}
