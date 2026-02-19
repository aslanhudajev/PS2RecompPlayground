#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: std
// Address: 0x2fa2d8 - 0x2fa330
void std_0x2fa2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa2d8u;

    // 0x2fa2d8: 0x3c020030
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x2fa2dc: 0x3c030030
    ctx->pc = 0x2fa2dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x2fa2e0: 0x3c080030
    ctx->pc = 0x2fa2e0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)48 << 16));
    // 0x2fa2e4: 0x3c090030
    ctx->pc = 0x2fa2e4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)48 << 16));
    // 0x2fa2e8: 0x2442c4e0
    ctx->pc = 0x2fa2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952160));
    // 0x2fa2ec: 0x2463c548
    ctx->pc = 0x2fa2ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952264));
    // 0x2fa2f0: 0x2508c5c8
    ctx->pc = 0x2fa2f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952392));
    // 0x2fa2f4: 0x2529c630
    ctx->pc = 0x2fa2f4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952496));
    // 0x2fa2f8: 0xac870054
    ctx->pc = 0x2fa2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x2fa2fc: 0xa485000c
    ctx->pc = 0x2fa2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fa300: 0xa486000e
    ctx->pc = 0x2fa300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fa304: 0xac820020
    ctx->pc = 0x2fa304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2fa308: 0xac830024
    ctx->pc = 0x2fa308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2fa30c: 0xac880028
    ctx->pc = 0x2fa30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2fa310: 0xac89002c
    ctx->pc = 0x2fa310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x2fa314: 0xac800000
    ctx->pc = 0x2fa314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa318: 0xac800004
    ctx->pc = 0x2fa318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa31c: 0xac800008
    ctx->pc = 0x2fa31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2fa320: 0xac800010
    ctx->pc = 0x2fa320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fa324: 0xac800018
    ctx->pc = 0x2fa324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fa328: 0x3e00008
    ctx->pc = 0x2FA328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA32Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA330u;
}
