#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_GetPketLenField
// Address: 0x1937a0 - 0x1937a8
void SFHDS_GetPketLenField_0x1937a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_GetPketLenField");


    ctx->pc = 0x1937a0u;

    // 0x1937a0: 0x3e00008
    ctx->pc = 0x1937A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1937A8u;
}
