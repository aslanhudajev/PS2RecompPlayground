#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GAMEFLAGSET__13EventCtrlTaskFv
// Address: 0x1e5140 - 0x1e518c
void GAMEFLAGSET__13EventCtrlTaskFv_0x1e5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GAMEFLAGSET__13EventCtrlTaskFv");


    ctx->pc = 0x1e5140u;

    // 0x1e5140: 0x8c85000c
    ctx->pc = 0x1e5140u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e5144: 0x8ca30004
    ctx->pc = 0x1e5144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e5148: 0x10600003
    ctx->pc = 0x1E5148u;
    {
        const bool branch_taken_0x1e5148 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5148) {
            ctx->pc = 0x1E5158u;
            goto label_1e5158;
        }
    }
    ctx->pc = 0x1E5150u;
    // 0x1e5150: 0x10000007
    ctx->pc = 0x1E5150u;
    {
        const bool branch_taken_0x1e5150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5154u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
        if (branch_taken_0x1e5150) {
            ctx->pc = 0x1E5170u;
            goto label_1e5170;
        }
    }
    ctx->pc = 0x1E5158u;
label_1e5158:
    // 0x1e5158: 0x8ca50008
    ctx->pc = 0x1e5158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e515c: 0x8f838cb0
    ctx->pc = 0x1e515cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1e5160: 0xa02827
    ctx->pc = 0x1e5160u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x1e5164: 0x651824
    ctx->pc = 0x1e5164u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e5168: 0x10000004
    ctx->pc = 0x1E5168u;
    {
        const bool branch_taken_0x1e5168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E516Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
        if (branch_taken_0x1e5168) {
            ctx->pc = 0x1E517Cu;
            goto label_1e517c;
        }
    }
    ctx->pc = 0x1E5170u;
label_1e5170:
    // 0x1e5170: 0x8f858cb0
    ctx->pc = 0x1e5170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1e5174: 0xa31825
    ctx->pc = 0x1e5174u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e5178: 0xaf838cb0
    ctx->pc = 0x1e5178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
label_1e517c:
    // 0x1e517c: 0x8c83000c
    ctx->pc = 0x1e517cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e5180: 0x2463000c
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e5184: 0x3e00008
    ctx->pc = 0x1E5184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5188u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5158u: goto label_1e5158;
            case 0x1E5170u: goto label_1e5170;
            case 0x1E517Cu: goto label_1e517c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E518Cu;
}
