#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_card_state
// Address: 0x283300 - 0x283340
void get_card_state_0x283300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283300u;

    // 0x283300: 0x3c020031
    ctx->pc = 0x283300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x283304: 0x244222a0
    ctx->pc = 0x283304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8864));
    // 0x283308: 0x52880
    ctx->pc = 0x283308u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28330c: 0x42100
    ctx->pc = 0x28330cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x283310: 0xa42821
    ctx->pc = 0x283310u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x283314: 0xa21021
    ctx->pc = 0x283314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x283318: 0x8c430000
    ctx->pc = 0x283318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28331c: 0x24020002
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x283320: 0x14620005
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x283324u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283320) {
            ctx->pc = 0x283338u;
            goto label_283338;
        }
    }
    ctx->pc = 0x283328u;
    // 0x283328: 0x3c020031
    ctx->pc = 0x283328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28332c: 0x24422280
    ctx->pc = 0x28332cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8832));
    // 0x283330: 0xa21021
    ctx->pc = 0x283330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x283334: 0x8c460000
    ctx->pc = 0x283334u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_283338:
    // 0x283338: 0x3e00008
    ctx->pc = 0x283338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28333Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283338u: goto label_283338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283340u;
}
