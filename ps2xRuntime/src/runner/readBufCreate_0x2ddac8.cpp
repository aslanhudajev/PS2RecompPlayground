#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufCreate
// Address: 0x2ddac8 - 0x2ddae0
void readBufCreate_0x2ddac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddac8u;

    // 0x2ddac8: 0x3c020005
    ctx->pc = 0x2ddac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddacc: 0x822021
    ctx->pc = 0x2ddaccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddad0: 0xac800004
    ctx->pc = 0x2ddad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ddad4: 0xac800000
    ctx->pc = 0x2ddad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ddad8: 0x3e00008
    ctx->pc = 0x2DDAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDADCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDAE0u;
}
