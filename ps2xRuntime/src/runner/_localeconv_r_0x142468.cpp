#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _localeconv_r
// Address: 0x142468 - 0x142474
void _localeconv_r_0x142468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_localeconv_r");


    ctx->pc = 0x142468u;

    // 0x142468: 0x3c02002b
    ctx->pc = 0x142468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x14246c: 0x3e00008
    ctx->pc = 0x14246Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28448));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142474u;
}
