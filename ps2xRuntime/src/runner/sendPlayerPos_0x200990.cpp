#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendPlayerPos
// Address: 0x200990 - 0x2009b8
void sendPlayerPos_0x200990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200990u;

    // 0x200990: 0x3c020032
    ctx->pc = 0x200990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x200994: 0x24441bc0
    ctx->pc = 0x200994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x200998: 0x8c8300fc
    ctx->pc = 0x200998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x20099c: 0x24020001
    ctx->pc = 0x20099cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2009a0: 0x14620003
    ctx->pc = 0x2009A0u;
    {
        const bool branch_taken_0x2009a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2009a0) {
            ctx->pc = 0x2009B0u;
            goto label_2009b0;
        }
    }
    ctx->pc = 0x2009A8u;
    // 0x2009a8: 0x80a8e30
    ctx->pc = 0x2009A8u;
    ctx->pc = 0x2009ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    ctx->pc = 0x2A38C0u;
    pbDBPlayerPos_0x2a38c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2009B0u;
label_2009b0:
    // 0x2009b0: 0x3e00008
    ctx->pc = 0x2009B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2009B0u: goto label_2009b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2009B8u;
}
