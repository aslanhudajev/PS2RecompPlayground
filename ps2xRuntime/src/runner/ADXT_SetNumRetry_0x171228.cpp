#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetNumRetry
// Address: 0x171228 - 0x171230
void ADXT_SetNumRetry_0x171228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetNumRetry");


    ctx->pc = 0x171228u;

    // 0x171228: 0x3e00008
    ctx->pc = 0x171228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17122Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171230u;
}
