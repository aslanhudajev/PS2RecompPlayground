#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpLOr
// Address: 0x2b5390 - 0x2b53b4
void exprOpLOr_0x2b5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5390u;

    // 0x2b5390: 0x8ca20010
    ctx->pc = 0x2b5390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b5394: 0x14400004
    ctx->pc = 0x2B5394u;
    {
        const bool branch_taken_0x2b5394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5398u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5394) {
            ctx->pc = 0x2B53A8u;
            goto label_2b53a8;
        }
    }
    ctx->pc = 0x2B539Cu;
    // 0x2b539c: 0x8cc20010
    ctx->pc = 0x2b539cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b53a0: 0x10400002
    ctx->pc = 0x2B53A0u;
    {
        const bool branch_taken_0x2b53a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b53a0) {
            ctx->pc = 0x2B53ACu;
            goto label_2b53ac;
        }
    }
    ctx->pc = 0x2B53A8u;
label_2b53a8:
    // 0x2b53a8: 0x24030001
    ctx->pc = 0x2b53a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2b53ac:
    // 0x2b53ac: 0x3e00008
    ctx->pc = 0x2B53ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B53B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B53A8u: goto label_2b53a8;
            case 0x2B53ACu: goto label_2b53ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B53B4u;
}
