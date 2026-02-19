#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeModel
// Address: 0x2121d8 - 0x212238
void AtreeModel_0x2121d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2121d8u;

    // 0x2121d8: 0x3c020032
    ctx->pc = 0x2121d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2121dc: 0x8c42f4d0
    ctx->pc = 0x2121dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964432)));
    // 0x2121e0: 0x18400013
    ctx->pc = 0x2121E0u;
    {
        const bool branch_taken_0x2121e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2121E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2121e0) {
            ctx->pc = 0x212230u;
            goto label_212230;
        }
    }
    ctx->pc = 0x2121E8u;
    // 0x2121e8: 0x3c020032
    ctx->pc = 0x2121e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2121ec: 0x2448f538
    ctx->pc = 0x2121ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964536));
    // 0x2121f0: 0x3c020032
    ctx->pc = 0x2121f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2121f4: 0x2447f718
    ctx->pc = 0x2121f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x2121f8: 0x3c020032
    ctx->pc = 0x2121f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2121fc: 0x8c46f4d0
    ctx->pc = 0x2121fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294964432)));
    // 0x212200: 0x51880
    ctx->pc = 0x212200u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x212204: 0x0
    ctx->pc = 0x212204u;
    // NOP
label_212208:
    // 0x212208: 0x681021
    ctx->pc = 0x212208u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21220c: 0x8c420000
    ctx->pc = 0x21220cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212210: 0x14440004
    ctx->pc = 0x212210u;
    {
        const bool branch_taken_0x212210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x212214u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x212210) {
            ctx->pc = 0x212224u;
            goto label_212224;
        }
    }
    ctx->pc = 0x212218u;
    // 0x212218: 0x671021
    ctx->pc = 0x212218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21221c: 0x3e00008
    ctx->pc = 0x21221Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212220u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212208u: goto label_212208;
            case 0x212224u: goto label_212224;
            case 0x212230u: goto label_212230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212224u;
label_212224:
    // 0x212224: 0xa6102a
    ctx->pc = 0x212224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x212228: 0x1440fff7
    ctx->pc = 0x212228u;
    {
        const bool branch_taken_0x212228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21222Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x212228) {
            ctx->pc = 0x212208u;
            goto label_212208;
        }
    }
    ctx->pc = 0x212230u;
label_212230:
    // 0x212230: 0x3e00008
    ctx->pc = 0x212230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212234u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212208u: goto label_212208;
            case 0x212224u: goto label_212224;
            case 0x212230u: goto label_212230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212238u;
}
