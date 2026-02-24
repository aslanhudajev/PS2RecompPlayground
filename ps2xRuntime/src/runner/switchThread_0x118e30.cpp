#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: switchThread
// Address: 0x118e30 - 0x118e38
void switchThread_0x118e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118e30u;

    // 0x118e30: 0x8043854
    ctx->pc = 0x118E30u;
    ctx->pc = 0x118E34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10E150u;
    RotateThreadReadyQueue_0x10e150(rdram, ctx, runtime); return;
    ctx->pc = 0x118E38u;
}
