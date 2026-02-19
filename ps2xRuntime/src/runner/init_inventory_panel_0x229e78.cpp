#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_inventory_panel
// Address: 0x229e78 - 0x229ecc
void init_inventory_panel_0x229e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229e78u;

    // 0x229e78: 0x3c02003c
    ctx->pc = 0x229e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229e7c: 0x244218a0
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6304));
    // 0x229e80: 0x41880
    ctx->pc = 0x229e80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x229e84: 0x621021
    ctx->pc = 0x229e84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229e88: 0xac400000
    ctx->pc = 0x229e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x229e8c: 0x3c02003c
    ctx->pc = 0x229e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229e90: 0x244218b0
    ctx->pc = 0x229e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6320));
    // 0x229e94: 0x621821
    ctx->pc = 0x229e94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229e98: 0xac600000
    ctx->pc = 0x229e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x229e9c: 0x3c030032
    ctx->pc = 0x229e9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x229ea0: 0x24631188
    ctx->pc = 0x229ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4488));
    // 0x229ea4: 0x41100
    ctx->pc = 0x229ea4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x229ea8: 0x431021
    ctx->pc = 0x229ea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229eac: 0xac400000
    ctx->pc = 0x229eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x229eb0: 0x3c020032
    ctx->pc = 0x229eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229eb4: 0x244210c8
    ctx->pc = 0x229eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4296));
    // 0x229eb8: 0x24030030
    ctx->pc = 0x229eb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x229ebc: 0x832018
    ctx->pc = 0x229ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229ec0: 0x822021
    ctx->pc = 0x229ec0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229ec4: 0x3e00008
    ctx->pc = 0x229EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229ECCu;
}
