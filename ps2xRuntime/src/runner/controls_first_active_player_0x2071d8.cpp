#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: controls_first_active_player
// Address: 0x2071d8 - 0x20721c
void controls_first_active_player_0x2071d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2071d8u;

    // 0x2071d8: 0x182d
    ctx->pc = 0x2071d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071dc: 0x3c020031
    ctx->pc = 0x2071dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2071e0: 0x24450e90
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x2071e4: 0x2404ffff
    ctx->pc = 0x2071e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2071e8: 0x31080
    ctx->pc = 0x2071e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2071ec: 0x0
    ctx->pc = 0x2071ecu;
    // NOP
label_2071f0:
    // 0x2071f0: 0x451021
    ctx->pc = 0x2071f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2071f4: 0x8c420000
    ctx->pc = 0x2071f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2071f8: 0x50440003
    ctx->pc = 0x2071F8u;
    {
        const bool branch_taken_0x2071f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x2071f8) {
            ctx->pc = 0x2071FCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x207208u;
            goto label_207208;
        }
    }
    ctx->pc = 0x207200u;
    // 0x207200: 0x3e00008
    ctx->pc = 0x207200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071F0u: goto label_2071f0;
            case 0x207208u: goto label_207208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207208u;
label_207208:
    // 0x207208: 0x28620004
    ctx->pc = 0x207208u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x20720c: 0x1440fff8
    ctx->pc = 0x20720Cu;
    {
        const bool branch_taken_0x20720c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x207210u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x20720c) {
            ctx->pc = 0x2071F0u;
            goto label_2071f0;
        }
    }
    ctx->pc = 0x207214u;
    // 0x207214: 0x3e00008
    ctx->pc = 0x207214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207218u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071F0u: goto label_2071f0;
            case 0x207208u: goto label_207208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20721Cu;
}
