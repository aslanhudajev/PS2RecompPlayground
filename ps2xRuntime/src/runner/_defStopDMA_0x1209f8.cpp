#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _defStopDMA
// Address: 0x1209f8 - 0x120a04
void _defStopDMA_0x1209f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1209f8u;

    // 0x1209f8: 0x8c840040
    ctx->pc = 0x1209f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1209fc: 0x8049862
    ctx->pc = 0x1209FCu;
    ctx->pc = 0x120A00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x126188u;
    sceIpuStopDMA_0x126188(rdram, ctx, runtime); return;
    ctx->pc = 0x120A04u;
}
