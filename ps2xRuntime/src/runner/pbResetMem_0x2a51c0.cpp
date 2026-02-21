#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetMem
// Address: 0x2a51c0 - 0x2a51f0
void pbResetMem_0x2a51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a51c0u;

    // 0x2a51c0: 0x3c020036
    ctx->pc = 0x2a51c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a51c4: 0x8c43dee0
    ctx->pc = 0x2a51c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a51c8: 0x8c620034
    ctx->pc = 0x2a51c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a51cc: 0x54400005
    ctx->pc = 0x2A51CCu;
    {
        const bool branch_taken_0x2a51cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a51cc) {
            ctx->pc = 0x2A51D0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
            ctx->pc = 0x2A51E4u;
            goto label_2a51e4;
        }
    }
    ctx->pc = 0x2A51D4u;
    // 0x2a51d4: 0x3c020036
    ctx->pc = 0x2a51d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a51d8: 0x24427fe0
    ctx->pc = 0x2a51d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32736));
    // 0x2a51dc: 0xac620034
    ctx->pc = 0x2a51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2a51e0: 0x3c030036
    ctx->pc = 0x2a51e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_2a51e4:
    // 0x2a51e4: 0x24020001
    ctx->pc = 0x2a51e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a51e8: 0x3e00008
    ctx->pc = 0x2A51E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51ECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 32608), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A51E4u: goto label_2a51e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A51F0u;
}
