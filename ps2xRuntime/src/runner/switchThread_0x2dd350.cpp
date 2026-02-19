#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: switchThread
// Address: 0x2dd350 - 0x2dd35c
void switchThread_0x2dd350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd350u;

    // 0x2dd350: 0x3c02003e
    ctx->pc = 0x2dd350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd354: 0x80c0d24
    ctx->pc = 0x2DD354u;
    ctx->pc = 0x2DD358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294934544)));
    ctx->pc = 0x303490u;
    RotateThreadReadyQueue_0x303490(rdram, ctx, runtime); return;
    ctx->pc = 0x2DD35Cu;
}
