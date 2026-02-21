#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _localeconv_r
// Address: 0x301dc8 - 0x301dd4
void _localeconv_r_0x301dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x301dc8u;

    // 0x301dc8: 0x3c02003c
    ctx->pc = 0x301dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x301dcc: 0x3e00008
    ctx->pc = 0x301DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945736));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301DD4u;
}
