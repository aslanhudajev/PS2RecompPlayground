#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExpireItem
// Address: 0x2537e8 - 0x253808
void ExpireItem_0x2537e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2537e8u;

    // 0x2537e8: 0x4a30003
    ctx->pc = 0x2537E8u;
    {
        const bool branch_taken_0x2537e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2537e8) {
            ctx->pc = 0x2537ECu;
            WRITE16(ADD32(GPR_U32(ctx, 4), 218), (uint16_t)GPR_U32(ctx, 5));
            ctx->pc = 0x2537F8u;
            goto label_2537f8;
        }
    }
    ctx->pc = 0x2537F0u;
    // 0x2537f0: 0x24020010
    ctx->pc = 0x2537f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2537f4: 0xa48200da
    ctx->pc = 0x2537f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 218), (uint16_t)GPR_U32(ctx, 2));
label_2537f8:
    // 0x2537f8: 0x948200d8
    ctx->pc = 0x2537f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2537fc: 0x34420100
    ctx->pc = 0x2537fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x253800: 0x3e00008
    ctx->pc = 0x253800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253804u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2537F8u: goto label_2537f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253808u;
}
