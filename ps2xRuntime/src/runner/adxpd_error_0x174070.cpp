#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxpd_error
// Address: 0x174070 - 0x17407c
void adxpd_error_0x174070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxpd_error");


    ctx->pc = 0x174070u;

    // 0x174070: 0x24020001
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174074: 0x3e00008
    ctx->pc = 0x174074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174078u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935152), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17407Cu;
}
