#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vibe_off
// Address: 0x206a10 - 0x206a44
void vibe_off_0x206a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206a10u;

    // 0x206a10: 0x3c030031
    ctx->pc = 0x206a10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206a14: 0x24631d68
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7528));
    // 0x206a18: 0x410c0
    ctx->pc = 0x206a18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x206a1c: 0x622821
    ctx->pc = 0x206a1cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206a20: 0xaca00004
    ctx->pc = 0x206a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x206a24: 0x431021
    ctx->pc = 0x206a24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206a28: 0xac400000
    ctx->pc = 0x206a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x206a2c: 0x3c020031
    ctx->pc = 0x206a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206a30: 0x24420e90
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x206a34: 0x42080
    ctx->pc = 0x206a34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x206a38: 0x822021
    ctx->pc = 0x206a38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206a3c: 0x8081aca
    ctx->pc = 0x206A3Cu;
    ctx->pc = 0x206A40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x206B28u;
    joyEndShake_0x206b28(rdram, ctx, runtime); return;
    ctx->pc = 0x206A44u;
}
