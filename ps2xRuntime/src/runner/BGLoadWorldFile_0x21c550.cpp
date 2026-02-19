#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGLoadWorldFile
// Address: 0x21c550 - 0x21c578
void BGLoadWorldFile_0x21c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c550u;

    // 0x21c550: 0x8c830010
    ctx->pc = 0x21c550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21c554: 0x24020002
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c558: 0x10620005
    ctx->pc = 0x21C558u;
    {
        const bool branch_taken_0x21c558 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21c558) {
            ctx->pc = 0x21C570u;
            goto label_21c570;
        }
    }
    ctx->pc = 0x21C560u;
    // 0x21c560: 0x8c820004
    ctx->pc = 0x21c560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21c564: 0x8c830008
    ctx->pc = 0x21c564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21c568: 0x431021
    ctx->pc = 0x21c568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c56c: 0xac820004
    ctx->pc = 0x21c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_21c570:
    // 0x21c570: 0x3e00008
    ctx->pc = 0x21C570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C570u: goto label_21c570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C578u;
}
