#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_SetTimeFn
// Address: 0x19e2f8 - 0x19e308
void SFTIM_SetTimeFn_0x19e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_SetTimeFn");


    ctx->pc = 0x19e2f8u;

    // 0x19e2f8: 0x63080
    ctx->pc = 0x19e2f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x19e2fc: 0x862021
    ctx->pc = 0x19e2fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19e300: 0x3e00008
    ctx->pc = 0x19E300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E304u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E308u;
}
