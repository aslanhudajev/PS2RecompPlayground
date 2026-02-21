#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _defStopDMA
// Address: 0x2ef338 - 0x2ef344
void _defStopDMA_0x2ef338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef338u;

    // 0x2ef338: 0x8c840040
    ctx->pc = 0x2ef338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ef33c: 0x80bd1e6
    ctx->pc = 0x2EF33Cu;
    ctx->pc = 0x2EF340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x2F4798u;
    sceIpuStopDMA_0x2f4798(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF344u;
}
