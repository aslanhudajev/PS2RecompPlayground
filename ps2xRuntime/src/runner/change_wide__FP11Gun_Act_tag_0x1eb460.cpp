#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: change_wide__FP11Gun_Act_tag
// Address: 0x1eb460 - 0x1eb4a4
void change_wide__FP11Gun_Act_tag_0x1eb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("change_wide__FP11Gun_Act_tag");


    ctx->pc = 0x1eb460u;

    // 0x1eb460: 0x8c820028
    ctx->pc = 0x1eb460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1eb464: 0x30422000
    ctx->pc = 0x1eb464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x1eb468: 0x1040000c
    ctx->pc = 0x1EB468u;
    {
        const bool branch_taken_0x1eb468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB46Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb468) {
            ctx->pc = 0x1EB49Cu;
            goto label_1eb49c;
        }
    }
    ctx->pc = 0x1EB470u;
    // 0x1eb470: 0x8c82002c
    ctx->pc = 0x1eb470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1eb474: 0x30421000
    ctx->pc = 0x1eb474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x1eb478: 0x10400007
    ctx->pc = 0x1EB478u;
    {
        const bool branch_taken_0x1eb478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb478) {
            ctx->pc = 0x1EB498u;
            goto label_1eb498;
        }
    }
    ctx->pc = 0x1EB480u;
    // 0x1eb480: 0x8c83001c
    ctx->pc = 0x1eb480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1eb484: 0x2402ffff
    ctx->pc = 0x1eb484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb488: 0x14620003
    ctx->pc = 0x1EB488u;
    {
        const bool branch_taken_0x1eb488 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1EB48Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eb488) {
            ctx->pc = 0x1EB498u;
            goto label_1eb498;
        }
    }
    ctx->pc = 0x1EB490u;
    // 0x1eb490: 0x10000002
    ctx->pc = 0x1EB490u;
    {
        const bool branch_taken_0x1eb490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb490) {
            ctx->pc = 0x1EB49Cu;
            goto label_1eb49c;
        }
    }
    ctx->pc = 0x1EB498u;
label_1eb498:
    // 0x1eb498: 0x70001628
    ctx->pc = 0x1eb498u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1eb49c:
    // 0x1eb49c: 0x3e00008
    ctx->pc = 0x1EB49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB498u: goto label_1eb498;
            case 0x1EB49Cu: goto label_1eb49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB4A4u;
}
