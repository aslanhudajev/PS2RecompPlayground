#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetUtils
// Address: 0x2aefa8 - 0x2aefcc
void pbResetUtils_0x2aefa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aefa8u;

    // 0x2aefa8: 0x3c020036
    ctx->pc = 0x2aefa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aefac: 0x8c43dee0
    ctx->pc = 0x2aefacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aefb0: 0x8c62004c
    ctx->pc = 0x2aefb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2aefb4: 0x14400003
    ctx->pc = 0x2AEFB4u;
    {
        const bool branch_taken_0x2aefb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AEFB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aefb4) {
            ctx->pc = 0x2AEFC4u;
            goto label_2aefc4;
        }
    }
    ctx->pc = 0x2AEFBCu;
    // 0x2aefbc: 0x24429270
    ctx->pc = 0x2aefbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939248));
    // 0x2aefc0: 0xac62004c
    ctx->pc = 0x2aefc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_2aefc4:
    // 0x2aefc4: 0x3e00008
    ctx->pc = 0x2AEFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEFC4u: goto label_2aefc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEFCCu;
}
