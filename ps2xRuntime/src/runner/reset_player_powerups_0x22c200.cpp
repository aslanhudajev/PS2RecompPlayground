#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_player_powerups
// Address: 0x22c200 - 0x22c258
void reset_player_powerups_0x22c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c200u;

    // 0x22c200: 0x282d
    ctx->pc = 0x22c200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c204: 0x24870148
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 328));
    // 0x22c208: 0x24080009
    ctx->pc = 0x22c208u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 9));
    // 0x22c20c: 0x24860150
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 336));
    // 0x22c210: 0x24840144
    ctx->pc = 0x22c210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 324));
    // 0x22c214: 0x51900
    ctx->pc = 0x22c214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_22c218:
    // 0x22c218: 0xe31021
    ctx->pc = 0x22c218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c21c: 0x8c420000
    ctx->pc = 0x22c21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c220: 0x54480008
    ctx->pc = 0x22C220u;
    {
        const bool branch_taken_0x22c220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x22c220) {
            ctx->pc = 0x22C224u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x22C244u;
            goto label_22c244;
        }
    }
    ctx->pc = 0x22C228u;
    // 0x22c228: 0xc31021
    ctx->pc = 0x22c228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22c22c: 0x8c420000
    ctx->pc = 0x22c22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c230: 0x30420008
    ctx->pc = 0x22c230u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x22c234: 0x10400002
    ctx->pc = 0x22C234u;
    {
        const bool branch_taken_0x22c234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C238u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x22c234) {
            ctx->pc = 0x22C240u;
            goto label_22c240;
        }
    }
    ctx->pc = 0x22C23Cu;
    // 0x22c23c: 0xac400000
    ctx->pc = 0x22c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22c240:
    // 0x22c240: 0x24a50001
    ctx->pc = 0x22c240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_22c244:
    // 0x22c244: 0x28a20008
    ctx->pc = 0x22c244u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x22c248: 0x1440fff3
    ctx->pc = 0x22C248u;
    {
        const bool branch_taken_0x22c248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C24Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x22c248) {
            ctx->pc = 0x22C218u;
            goto label_22c218;
        }
    }
    ctx->pc = 0x22C250u;
    // 0x22c250: 0x3e00008
    ctx->pc = 0x22C250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C218u: goto label_22c218;
            case 0x22C240u: goto label_22c240;
            case 0x22C244u: goto label_22c244;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C258u;
}
