#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetDecDtLen
// Address: 0x1681d0 - 0x1681d8
void ADXB_GetDecDtLen_0x1681d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetDecDtLen");


    ctx->pc = 0x1681d0u;

    // 0x1681d0: 0x3e00008
    ctx->pc = 0x1681D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 164)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1681D8u;
}
