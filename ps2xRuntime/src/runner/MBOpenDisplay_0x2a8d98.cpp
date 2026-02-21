#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOpenDisplay
// Address: 0x2a8d98 - 0x2a8dac
void MBOpenDisplay_0x2a8d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8d98u;

    // 0x2a8d98: 0x3c020036
    ctx->pc = 0x2a8d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8d9c: 0x8c42dee0
    ctx->pc = 0x2a8d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8da0: 0x8c420010
    ctx->pc = 0x2a8da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a8da4: 0x80a9726
    ctx->pc = 0x2A8DA4u;
    ctx->pc = 0x2A8DA8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x2A5C98u;
    pbOpenDmacHandler_0x2a5c98(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8DACu;
}
