#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetDiag
// Address: 0x2a8b08 - 0x2a8b2c
void pbResetDiag_0x2a8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8b08u;

    // 0x2a8b08: 0x3c020036
    ctx->pc = 0x2a8b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8b0c: 0x8c43dee0
    ctx->pc = 0x2a8b0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8b10: 0x8c620030
    ctx->pc = 0x2a8b10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a8b14: 0x14400003
    ctx->pc = 0x2A8B14u;
    {
        const bool branch_taken_0x2a8b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A8B18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2a8b14) {
            ctx->pc = 0x2A8B24u;
            goto label_2a8b24;
        }
    }
    ctx->pc = 0x2A8B1Cu;
    // 0x2a8b1c: 0x24428220
    ctx->pc = 0x2a8b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x2a8b20: 0xac620030
    ctx->pc = 0x2a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_2a8b24:
    // 0x2a8b24: 0x3e00008
    ctx->pc = 0x2A8B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8B24u: goto label_2a8b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8B2Cu;
}
