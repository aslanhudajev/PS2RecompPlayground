#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseMem
// Address: 0x2a51f0 - 0x2a5208
void pbCloseMem_0x2a51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a51f0u;

    // 0x2a51f0: 0x3c020036
    ctx->pc = 0x2a51f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a51f4: 0x8c42dee0
    ctx->pc = 0x2a51f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a51f8: 0xac400034
    ctx->pc = 0x2a51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2a51fc: 0x3c020036
    ctx->pc = 0x2a51fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a5200: 0x3e00008
    ctx->pc = 0x2A5200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5204u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 32608), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5208u;
}
