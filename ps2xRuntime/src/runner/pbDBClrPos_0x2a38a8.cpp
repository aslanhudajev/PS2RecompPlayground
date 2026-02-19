#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBClrPos
// Address: 0x2a38a8 - 0x2a38bc
void pbDBClrPos_0x2a38a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a38a8u;

    // 0x2a38a8: 0x3c020036
    ctx->pc = 0x2a38a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a38ac: 0x8c42e120
    ctx->pc = 0x2a38acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959392)));
    // 0x2a38b0: 0xac400020
    ctx->pc = 0x2a38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2a38b4: 0x3e00008
    ctx->pc = 0x2A38B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38B8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A38BCu;
}
