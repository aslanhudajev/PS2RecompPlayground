#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSEE_FixAvPlay
// Address: 0x19c618 - 0x19c644
void SFSEE_FixAvPlay_0x19c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSEE_FixAvPlay");


    ctx->pc = 0x19c618u;

    // 0x19c618: 0x8c836758
    ctx->pc = 0x19c618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 26456)));
    // 0x19c61c: 0x10600007
    ctx->pc = 0x19C61Cu;
    {
        const bool branch_taken_0x19c61c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x19c61c) {
            ctx->pc = 0x19C63Cu;
            goto label_19c63c;
        }
    }
    ctx->pc = 0x19C624u;
    // 0x19c624: 0x8c620da4
    ctx->pc = 0x19c624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3492)));
    // 0x19c628: 0x4420001
    ctx->pc = 0x19C628u;
    {
        const bool branch_taken_0x19c628 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19c628) {
            ctx->pc = 0x19C62Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3492), GPR_U32(ctx, 5));
            ctx->pc = 0x19C630u;
            goto label_19c630;
        }
    }
    ctx->pc = 0x19C630u;
label_19c630:
    // 0x19c630: 0x8c620da8
    ctx->pc = 0x19c630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x19c634: 0x4420001
    ctx->pc = 0x19C634u;
    {
        const bool branch_taken_0x19c634 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19c634) {
            ctx->pc = 0x19C638u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 3496), GPR_U32(ctx, 6));
            ctx->pc = 0x19C63Cu;
            goto label_19c63c;
        }
    }
    ctx->pc = 0x19C63Cu;
label_19c63c:
    // 0x19c63c: 0x3e00008
    ctx->pc = 0x19C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C630u: goto label_19c630;
            case 0x19C63Cu: goto label_19c63c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C644u;
}
