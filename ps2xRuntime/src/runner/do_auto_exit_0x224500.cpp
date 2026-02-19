#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_auto_exit
// Address: 0x224500 - 0x224558
void do_auto_exit_0x224500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224500u;

    // 0x224500: 0x3c020031
    ctx->pc = 0x224500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224504: 0x3c030031
    ctx->pc = 0x224504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x224508: 0x8c42ff9c
    ctx->pc = 0x224508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x22450c: 0x8c630024
    ctx->pc = 0x22450cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x224510: 0x431025
    ctx->pc = 0x224510u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224514: 0x3c030032
    ctx->pc = 0x224514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x224518: 0x8c630808
    ctx->pc = 0x224518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x22451c: 0x431025
    ctx->pc = 0x22451cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224520: 0x1440000b
    ctx->pc = 0x224520u;
    {
        const bool branch_taken_0x224520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224524u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x224520) {
            ctx->pc = 0x224550u;
            goto label_224550;
        }
    }
    ctx->pc = 0x224528u;
    // 0x224528: 0x8c8307cc
    ctx->pc = 0x224528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1996)));
    // 0x22452c: 0x18600008
    ctx->pc = 0x22452Cu;
    {
        const bool branch_taken_0x22452c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x224530u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x22452c) {
            ctx->pc = 0x224550u;
            goto label_224550;
        }
    }
    ctx->pc = 0x224534u;
    // 0x224534: 0x8c42ffbc
    ctx->pc = 0x224534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x224538: 0x621023
    ctx->pc = 0x224538u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22453c: 0x1c400004
    ctx->pc = 0x22453Cu;
    {
        const bool branch_taken_0x22453c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x224540u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1996), GPR_U32(ctx, 2));
        if (branch_taken_0x22453c) {
            ctx->pc = 0x224550u;
            goto label_224550;
        }
    }
    ctx->pc = 0x224544u;
    // 0x224544: 0x3c030032
    ctx->pc = 0x224544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x224548: 0x24020001
    ctx->pc = 0x224548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22454c: 0xac6207d0
    ctx->pc = 0x22454cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2000), GPR_U32(ctx, 2));
label_224550:
    // 0x224550: 0x3e00008
    ctx->pc = 0x224550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224550u: goto label_224550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224558u;
}
