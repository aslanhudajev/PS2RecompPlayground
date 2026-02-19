#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_inventory_panel
// Address: 0x229ed0 - 0x229efc
void end_inventory_panel_0x229ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229ed0u;

    // 0x229ed0: 0x3c02003c
    ctx->pc = 0x229ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229ed4: 0x244218a0
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6304));
    // 0x229ed8: 0x42080
    ctx->pc = 0x229ed8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x229edc: 0x821021
    ctx->pc = 0x229edcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229ee0: 0x24030002
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x229ee4: 0xac430000
    ctx->pc = 0x229ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x229ee8: 0x3c02003c
    ctx->pc = 0x229ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229eec: 0x244218b0
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6320));
    // 0x229ef0: 0x822021
    ctx->pc = 0x229ef0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229ef4: 0x3e00008
    ctx->pc = 0x229EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229EF8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229EFCu;
}
