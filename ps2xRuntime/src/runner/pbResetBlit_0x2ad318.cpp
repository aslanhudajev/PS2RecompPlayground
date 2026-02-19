#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetBlit
// Address: 0x2ad318 - 0x2ad33c
void pbResetBlit_0x2ad318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad318u;

    // 0x2ad318: 0x3c020036
    ctx->pc = 0x2ad318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad31c: 0x8c43dee0
    ctx->pc = 0x2ad31cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad320: 0x8c620040
    ctx->pc = 0x2ad320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2ad324: 0x14400003
    ctx->pc = 0x2AD324u;
    {
        const bool branch_taken_0x2ad324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD328u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad324) {
            ctx->pc = 0x2AD334u;
            goto label_2ad334;
        }
    }
    ctx->pc = 0x2AD32Cu;
    // 0x2ad32c: 0x244285c0
    ctx->pc = 0x2ad32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936000));
    // 0x2ad330: 0xac620040
    ctx->pc = 0x2ad330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_2ad334:
    // 0x2ad334: 0x3e00008
    ctx->pc = 0x2AD334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD334u: goto label_2ad334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD33Cu;
}
