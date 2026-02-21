#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: controls_set_active_players
// Address: 0x207178 - 0x2071d4
void controls_set_active_players_0x207178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207178u;

    // 0x207178: 0x3c020032
    ctx->pc = 0x207178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20717c: 0xac4007b4
    ctx->pc = 0x20717cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 0));
    // 0x207180: 0x202d
    ctx->pc = 0x207180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207184: 0x3c020031
    ctx->pc = 0x207184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207188: 0x24480e90
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x20718c: 0x2407ffff
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207190: 0x3c050032
    ctx->pc = 0x207190u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x207194: 0x24060001
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207198: 0x41080
    ctx->pc = 0x207198u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20719c: 0x0
    ctx->pc = 0x20719cu;
    // NOP
label_2071a0:
    // 0x2071a0: 0x481021
    ctx->pc = 0x2071a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2071a4: 0x8c420000
    ctx->pc = 0x2071a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2071a8: 0x10470004
    ctx->pc = 0x2071A8u;
    {
        const bool branch_taken_0x2071a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x2071ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x2071a8) {
            ctx->pc = 0x2071BCu;
            goto label_2071bc;
        }
    }
    ctx->pc = 0x2071B0u;
    // 0x2071b0: 0x8ca307b4
    ctx->pc = 0x2071b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 1972)));
    // 0x2071b4: 0x431025
    ctx->pc = 0x2071b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2071b8: 0xaca207b4
    ctx->pc = 0x2071b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1972), GPR_U32(ctx, 2));
label_2071bc:
    // 0x2071bc: 0x24840001
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2071c0: 0x28820004
    ctx->pc = 0x2071c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2071c4: 0x1440fff6
    ctx->pc = 0x2071C4u;
    {
        const bool branch_taken_0x2071c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2071C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2071c4) {
            ctx->pc = 0x2071A0u;
            goto label_2071a0;
        }
    }
    ctx->pc = 0x2071CCu;
    // 0x2071cc: 0x3e00008
    ctx->pc = 0x2071CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071A0u: goto label_2071a0;
            case 0x2071BCu: goto label_2071bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2071D4u;
}
