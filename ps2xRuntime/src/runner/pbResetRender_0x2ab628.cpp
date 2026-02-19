#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetRender
// Address: 0x2ab628 - 0x2ab64c
void pbResetRender_0x2ab628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab628u;

    // 0x2ab628: 0x3c020036
    ctx->pc = 0x2ab628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab62c: 0x8c43dee0
    ctx->pc = 0x2ab62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab630: 0x8c620014
    ctx->pc = 0x2ab630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ab634: 0x14400003
    ctx->pc = 0x2AB634u;
    {
        const bool branch_taken_0x2ab634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AB638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ab634) {
            ctx->pc = 0x2AB644u;
            goto label_2ab644;
        }
    }
    ctx->pc = 0x2AB63Cu;
    // 0x2ab63c: 0x244283c8
    ctx->pc = 0x2ab63cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935496));
    // 0x2ab640: 0xac620014
    ctx->pc = 0x2ab640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2ab644:
    // 0x2ab644: 0x3e00008
    ctx->pc = 0x2AB644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB644u: goto label_2ab644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB64Cu;
}
