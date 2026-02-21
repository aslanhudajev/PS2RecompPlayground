#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontFlags
// Address: 0x2c5110 - 0x2c5120
void MBSetFontFlags_0x2c5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5110u;

    // 0x2c5110: 0x3c030038
    ctx->pc = 0x2c5110u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5114: 0x8c62b170
    ctx->pc = 0x2c5114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947184)));
    // 0x2c5118: 0x3e00008
    ctx->pc = 0x2C5118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C511Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947184), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5120u;
}
