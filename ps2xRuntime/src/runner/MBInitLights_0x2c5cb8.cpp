#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitLights
// Address: 0x2c5cb8 - 0x2c5ccc
void MBInitLights_0x2c5cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5cb8u;

    // 0x2c5cb8: 0x3c020036
    ctx->pc = 0x2c5cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c5cbc: 0x8c42dee0
    ctx->pc = 0x2c5cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c5cc0: 0x8c42001c
    ctx->pc = 0x2c5cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c5cc4: 0x3e00008
    ctx->pc = 0x2C5CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5CCCu;
}
