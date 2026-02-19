#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getFIFOindex
// Address: 0x2df150 - 0x2df18c
void getFIFOindex_0x2df150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df150u;

    // 0x2df150: 0x8c820008
    ctx->pc = 0x2df150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2df154: 0x21100
    ctx->pc = 0x2df154u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df158: 0x24420010
    ctx->pc = 0x2df158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x2df15c: 0x8c830004
    ctx->pc = 0x2df15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2df160: 0x431021
    ctx->pc = 0x2df160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df164: 0x3c030fff
    ctx->pc = 0x2df164u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4095 << 16));
    // 0x2df168: 0x3463ffff
    ctx->pc = 0x2df168u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2df16c: 0x431024
    ctx->pc = 0x2df16cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df170: 0x54a20003
    ctx->pc = 0x2DF170u;
    {
        const bool branch_taken_0x2df170 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2df170) {
            ctx->pc = 0x2DF174u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2DF180u;
            goto label_2df180;
        }
    }
    ctx->pc = 0x2DF178u;
    // 0x2df178: 0x3e00008
    ctx->pc = 0x2DF178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF17Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF180u: goto label_2df180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF180u;
label_2df180:
    // 0x2df180: 0xa21023
    ctx->pc = 0x2df180u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df184: 0x3e00008
    ctx->pc = 0x2DF184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF188u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF180u: goto label_2df180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF18Cu;
}
