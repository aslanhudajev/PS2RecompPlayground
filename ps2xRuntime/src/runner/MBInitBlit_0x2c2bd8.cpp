#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitBlit
// Address: 0x2c2bd8 - 0x2c2c0c
void MBInitBlit_0x2c2bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2bd8u;

    // 0x2c2bd8: 0xac800000
    ctx->pc = 0x2c2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c2bdc: 0xac80002c
    ctx->pc = 0x2c2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2c2be0: 0xac800030
    ctx->pc = 0x2c2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2c2be4: 0x3c02ffff
    ctx->pc = 0x2c2be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2c2be8: 0x3442ffff
    ctx->pc = 0x2c2be8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2c2bec: 0xac820004
    ctx->pc = 0x2c2becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2c2bf0: 0x3c028080
    ctx->pc = 0x2c2bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x2c2bf4: 0x34428080
    ctx->pc = 0x2c2bf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x2c2bf8: 0xac82001c
    ctx->pc = 0x2c2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c2bfc: 0xac820020
    ctx->pc = 0x2c2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2c2c00: 0xac820024
    ctx->pc = 0x2c2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2c2c04: 0x3e00008
    ctx->pc = 0x2C2C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2C08u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2C0Cu;
}
