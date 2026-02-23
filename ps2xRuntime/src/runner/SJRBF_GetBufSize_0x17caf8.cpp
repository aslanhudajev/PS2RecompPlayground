#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_GetBufSize
// Address: 0x17caf8 - 0x17cb00
void SJRBF_GetBufSize_0x17caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_GetBufSize");


    ctx->pc = 0x17caf8u;

    // 0x17caf8: 0x3e00008
    ctx->pc = 0x17CAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB00u;
}
