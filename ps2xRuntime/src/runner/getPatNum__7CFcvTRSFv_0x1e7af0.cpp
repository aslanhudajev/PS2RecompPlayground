#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getPatNum__7CFcvTRSFv
// Address: 0x1e7af0 - 0x1e7af8
void getPatNum__7CFcvTRSFv_0x1e7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getPatNum__7CFcvTRSFv");


    ctx->pc = 0x1e7af0u;

    // 0x1e7af0: 0x3e00008
    ctx->pc = 0x1E7AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7AF8u;
}
