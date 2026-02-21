#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetStringListMsgSub
// Address: 0x2019f0 - 0x201a2c
void GetStringListMsgSub_0x2019f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2019f0u;

    // 0x2019f0: 0x528c0
    ctx->pc = 0x2019f0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2019f4: 0x8c820020
    ctx->pc = 0x2019f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2019f8: 0xa22821
    ctx->pc = 0x2019f8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2019fc: 0x8ca20000
    ctx->pc = 0x2019fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201a00: 0xc2102a
    ctx->pc = 0x201a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x201a04: 0x54400003
    ctx->pc = 0x201A04u;
    {
        const bool branch_taken_0x201a04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201a04) {
            ctx->pc = 0x201A08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->pc = 0x201A14u;
            goto label_201a14;
        }
    }
    ctx->pc = 0x201A0Cu;
    // 0x201a0c: 0x3e00008
    ctx->pc = 0x201A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A14u: goto label_201a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A14u;
label_201a14:
    // 0x201a14: 0xc21021
    ctx->pc = 0x201a14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x201a18: 0x8c83001c
    ctx->pc = 0x201a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x201a1c: 0x21080
    ctx->pc = 0x201a1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x201a20: 0x431021
    ctx->pc = 0x201a20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a24: 0x3e00008
    ctx->pc = 0x201A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A14u: goto label_201a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A2Cu;
}
