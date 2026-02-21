#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _localeconv_r
// Address: 0x12faf0 - 0x12fafc
void _localeconv_r_0x12faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12faf0u;

    // 0x12faf0: 0x3c020017
    ctx->pc = 0x12faf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12faf4: 0x3e00008
    ctx->pc = 0x12FAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22856));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FAFCu;
}
