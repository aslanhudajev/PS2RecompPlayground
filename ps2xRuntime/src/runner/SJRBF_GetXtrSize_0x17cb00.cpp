#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_GetXtrSize
// Address: 0x17cb00 - 0x17cb08
void SJRBF_GetXtrSize_0x17cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_GetXtrSize");


    ctx->pc = 0x17cb00u;

    // 0x17cb00: 0x3e00008
    ctx->pc = 0x17CB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB08u;
}
