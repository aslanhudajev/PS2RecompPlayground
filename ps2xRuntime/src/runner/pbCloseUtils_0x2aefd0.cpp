#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseUtils
// Address: 0x2aefd0 - 0x2aefe0
void pbCloseUtils_0x2aefd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aefd0u;

    // 0x2aefd0: 0x3c020036
    ctx->pc = 0x2aefd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aefd4: 0x8c42dee0
    ctx->pc = 0x2aefd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aefd8: 0x3e00008
    ctx->pc = 0x2AEFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFDCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEFE0u;
}
