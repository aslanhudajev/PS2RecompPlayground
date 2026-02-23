#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSeqRequest
// Address: 0x1ad270 - 0x1ad2fc
void nlsndSeqRequest_0x1ad270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSeqRequest");


    ctx->pc = 0x1ad270u;

    // 0x1ad270: 0x3c020030
    ctx->pc = 0x1ad270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad274: 0x24485880
    ctx->pc = 0x1ad274u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad278: 0x41403
    ctx->pc = 0x1ad278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ad27c: 0x3043007f
    ctx->pc = 0x1ad27cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 127));
    // 0x1ad280: 0x3c020030
    ctx->pc = 0x1ad280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad284: 0x24425a80
    ctx->pc = 0x1ad284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23168));
    // 0x1ad288: 0x8f898ab8
    ctx->pc = 0x1ad288u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad28c: 0x431021
    ctx->pc = 0x1ad28cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad290: 0x80420000
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad294: 0x948c0
    ctx->pc = 0x1ad294u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 3));
    // 0x1ad298: 0x4400016
    ctx->pc = 0x1AD298u;
    {
        const bool branch_taken_0x1ad298 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AD29Cu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        if (branch_taken_0x1ad298) {
            ctx->pc = 0x1AD2F4u;
            goto label_1ad2f4;
        }
    }
    ctx->pc = 0x1AD2A0u;
    // 0x1ad2a0: 0x21c00
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ad2a4: 0x30c200ff
    ctx->pc = 0x1ad2a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 255));
    // 0x1ad2a8: 0x43203
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1ad2ac: 0x30c6007f
    ctx->pc = 0x1ad2acu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 127));
    // 0x1ad2b0: 0x63200
    ctx->pc = 0x1ad2b0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad2b4: 0x663025
    ctx->pc = 0x1ad2b4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad2b8: 0x3083007f
    ctx->pc = 0x1ad2b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 127));
    // 0x1ad2bc: 0x661825
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad2c0: 0x30420001
    ctx->pc = 0x1ad2c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ad2c4: 0x10400004
    ctx->pc = 0x1AD2C4u;
    {
        const bool branch_taken_0x1ad2c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD2C8u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1ad2c4) {
            ctx->pc = 0x1AD2D8u;
            goto label_1ad2d8;
        }
    }
    ctx->pc = 0x1AD2CCu;
    // 0x1ad2cc: 0x24020001
    ctx->pc = 0x1ad2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad2d0: 0x10000002
    ctx->pc = 0x1AD2D0u;
    {
        const bool branch_taken_0x1ad2d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD2D4u;
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1ad2d0) {
            ctx->pc = 0x1AD2DCu;
            goto label_1ad2dc;
        }
    }
    ctx->pc = 0x1AD2D8u;
label_1ad2d8:
    // 0x1ad2d8: 0xa1000000
    ctx->pc = 0x1ad2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad2dc:
    // 0x1ad2dc: 0xa5050002
    ctx->pc = 0x1ad2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ad2e0: 0xa1070001
    ctx->pc = 0x1ad2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad2e4: 0x8f828ab8
    ctx->pc = 0x1ad2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad2e8: 0x24420001
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad2ec: 0x3042003f
    ctx->pc = 0x1ad2ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x1ad2f0: 0xaf828ab8
    ctx->pc = 0x1ad2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 2));
label_1ad2f4:
    // 0x1ad2f4: 0x3e00008
    ctx->pc = 0x1AD2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD2F8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2D8u: goto label_1ad2d8;
            case 0x1AD2DCu: goto label_1ad2dc;
            case 0x1AD2F4u: goto label_1ad2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD2FCu;
}
