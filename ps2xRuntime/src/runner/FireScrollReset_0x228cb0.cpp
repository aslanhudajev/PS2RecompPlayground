#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FireScrollReset
// Address: 0x228cb0 - 0x228cbc
void FireScrollReset_0x228cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228cb0u;

    // 0x228cb0: 0x3c020032
    ctx->pc = 0x228cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228cb4: 0x3e00008
    ctx->pc = 0x228CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228CBCu;
}
