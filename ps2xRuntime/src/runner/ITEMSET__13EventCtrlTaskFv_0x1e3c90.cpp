#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ITEMSET__13EventCtrlTaskFv
// Address: 0x1e3c90 - 0x1e3cdc
void ITEMSET__13EventCtrlTaskFv_0x1e3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ITEMSET__13EventCtrlTaskFv");


    ctx->pc = 0x1e3c90u;

    // 0x1e3c90: 0x8c83000c
    ctx->pc = 0x1e3c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3c94: 0x8c660008
    ctx->pc = 0x1e3c94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e3c98: 0x14c00007
    ctx->pc = 0x1E3C98u;
    {
        const bool branch_taken_0x1e3c98 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3c98) {
            ctx->pc = 0x1E3CB8u;
            goto label_1e3cb8;
        }
    }
    ctx->pc = 0x1E3CA0u;
    // 0x1e3ca0: 0x8c650004
    ctx->pc = 0x1e3ca0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3ca4: 0x3c030050
    ctx->pc = 0x1e3ca4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e3ca8: 0x2463e400
    ctx->pc = 0x1e3ca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x1e3cac: 0x651821
    ctx->pc = 0x1e3cacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3cb0: 0x10000006
    ctx->pc = 0x1E3CB0u;
    {
        const bool branch_taken_0x1e3cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3CB4u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1e3cb0) {
            ctx->pc = 0x1E3CCCu;
            goto label_1e3ccc;
        }
    }
    ctx->pc = 0x1E3CB8u;
label_1e3cb8:
    // 0x1e3cb8: 0x8c650004
    ctx->pc = 0x1e3cb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3cbc: 0x3c030050
    ctx->pc = 0x1e3cbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e3cc0: 0x2463e400
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x1e3cc4: 0x651821
    ctx->pc = 0x1e3cc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3cc8: 0xa0660000
    ctx->pc = 0x1e3cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1e3ccc:
    // 0x1e3ccc: 0x8c83000c
    ctx->pc = 0x1e3cccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3cd0: 0x2463000c
    ctx->pc = 0x1e3cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e3cd4: 0x3e00008
    ctx->pc = 0x1E3CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3CB8u: goto label_1e3cb8;
            case 0x1E3CCCu: goto label_1e3ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3CDCu;
}
