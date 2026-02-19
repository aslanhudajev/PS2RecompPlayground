#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBClrVu1Info
// Address: 0x2b3bf0 - 0x2b3c00
void pbDBClrVu1Info_0x2b3bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3bf0u;

    // 0x2b3bf0: 0x3c02ffff
    ctx->pc = 0x2b3bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b3bf4: 0x3442ffff
    ctx->pc = 0x2b3bf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b3bf8: 0x3e00008
    ctx->pc = 0x2B3BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3BFCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3C00u;
}
