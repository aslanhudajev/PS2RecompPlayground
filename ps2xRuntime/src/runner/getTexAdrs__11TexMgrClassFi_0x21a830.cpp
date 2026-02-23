#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getTexAdrs__11TexMgrClassFi
// Address: 0x21a830 - 0x21a86c
void getTexAdrs__11TexMgrClassFi_0x21a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getTexAdrs__11TexMgrClassFi");


    ctx->pc = 0x21a830u;

    // 0x21a830: 0x510c0
    ctx->pc = 0x21a830u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21a834: 0x451023
    ctx->pc = 0x21a834u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a838: 0x21880
    ctx->pc = 0x21a838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a83c: 0x3c020092
    ctx->pc = 0x21a83cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21a840: 0x24424d08
    ctx->pc = 0x21a840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19720));
    // 0x21a844: 0x431021
    ctx->pc = 0x21a844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a848: 0x8c420000
    ctx->pc = 0x21a848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a84c: 0x14400003
    ctx->pc = 0x21A84Cu;
    {
        const bool branch_taken_0x21a84c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a84c) {
            ctx->pc = 0x21A85Cu;
            goto label_21a85c;
        }
    }
    ctx->pc = 0x21A854u;
    // 0x21a854: 0x10000003
    ctx->pc = 0x21A854u;
    {
        const bool branch_taken_0x21a854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21a854) {
            ctx->pc = 0x21A864u;
            goto label_21a864;
        }
    }
    ctx->pc = 0x21A85Cu;
label_21a85c:
    // 0x21a85c: 0x8c420008
    ctx->pc = 0x21a85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21a860: 0x0
    ctx->pc = 0x21a860u;
    // NOP
label_21a864:
    // 0x21a864: 0x3e00008
    ctx->pc = 0x21A864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A85Cu: goto label_21a85c;
            case 0x21A864u: goto label_21a864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A86Cu;
}
