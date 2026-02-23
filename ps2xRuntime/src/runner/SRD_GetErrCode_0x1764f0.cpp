#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_GetErrCode
// Address: 0x1764f0 - 0x1764fc
void SRD_GetErrCode_0x1764f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_GetErrCode");


    ctx->pc = 0x1764f0u;

    // 0x1764f0: 0x3c030024
    ctx->pc = 0x1764f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1764f4: 0x3e00008
    ctx->pc = 0x1764F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294936468)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1764FCu;
}
