#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndPackFree
// Address: 0x1ad620 - 0x1ad664
void nlsndPackFree_0x1ad620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndPackFree");


    ctx->pc = 0x1ad620u;

    // 0x1ad620: 0x84830000
    ctx->pc = 0x1ad620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad624: 0x3c020030
    ctx->pc = 0x1ad624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad628: 0x24425ab0
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23216));
    // 0x1ad62c: 0x31880
    ctx->pc = 0x1ad62cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad630: 0x432021
    ctx->pc = 0x1ad630u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad634: 0x8c850000
    ctx->pc = 0x1ad634u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad638: 0x4a00008
    ctx->pc = 0x1AD638u;
    {
        const bool branch_taken_0x1ad638 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AD63Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad638) {
            ctx->pc = 0x1AD65Cu;
            goto label_1ad65c;
        }
    }
    ctx->pc = 0x1AD640u;
    // 0x1ad640: 0x3c020030
    ctx->pc = 0x1ad640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad644: 0x24425a80
    ctx->pc = 0x1ad644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23168));
    // 0x1ad648: 0x2403ffff
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad64c: 0x451021
    ctx->pc = 0x1ad64cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ad650: 0xa0430000
    ctx->pc = 0x1ad650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad654: 0xac830000
    ctx->pc = 0x1ad654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ad658: 0x70001628
    ctx->pc = 0x1ad658u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad65c:
    // 0x1ad65c: 0x3e00008
    ctx->pc = 0x1AD65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD65Cu: goto label_1ad65c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD664u;
}
