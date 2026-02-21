#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _search_svdata
// Address: 0x305fd8 - 0x306024
void _search_svdata_0x305fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x305fd8u;

    // 0x305fd8: 0x8ca50028
    ctx->pc = 0x305fd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x305fdc: 0x10a0000f
    ctx->pc = 0x305FDCu;
    {
        const bool branch_taken_0x305fdc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x305fdc) {
            ctx->pc = 0x30601Cu;
            goto label_30601c;
        }
    }
    ctx->pc = 0x305FE4u;
    // 0x305fe4: 0x8ca30008
    ctx->pc = 0x305fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_305fe8:
    // 0x305fe8: 0x5060000a
    ctx->pc = 0x305FE8u;
    {
        const bool branch_taken_0x305fe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x305fe8) {
            ctx->pc = 0x305FECu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->pc = 0x306014u;
            goto label_306014;
        }
    }
    ctx->pc = 0x305FF0u;
    // 0x305ff0: 0x8c620000
    ctx->pc = 0x305ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305ff4: 0x0
    ctx->pc = 0x305ff4u;
    // NOP
label_305ff8:
    // 0x305ff8: 0x54440003
    ctx->pc = 0x305FF8u;
    {
        const bool branch_taken_0x305ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x305ff8) {
            ctx->pc = 0x305FFCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x306008u;
            goto label_306008;
        }
    }
    ctx->pc = 0x306000u;
    // 0x306000: 0x3e00008
    ctx->pc = 0x306000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306004u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305FE8u: goto label_305fe8;
            case 0x305FF8u: goto label_305ff8;
            case 0x306008u: goto label_306008;
            case 0x306014u: goto label_306014;
            case 0x30601Cu: goto label_30601c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x306008u;
label_306008:
    // 0x306008: 0x5460fffb
    ctx->pc = 0x306008u;
    {
        const bool branch_taken_0x306008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x306008) {
            ctx->pc = 0x30600Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x305FF8u;
            goto label_305ff8;
        }
    }
    ctx->pc = 0x306010u;
    // 0x306010: 0x8ca50014
    ctx->pc = 0x306010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_306014:
    // 0x306014: 0x54a0fff4
    ctx->pc = 0x306014u;
    {
        const bool branch_taken_0x306014 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x306014) {
            ctx->pc = 0x306018u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->pc = 0x305FE8u;
            goto label_305fe8;
        }
    }
    ctx->pc = 0x30601Cu;
label_30601c:
    // 0x30601c: 0x3e00008
    ctx->pc = 0x30601Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306020u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305FE8u: goto label_305fe8;
            case 0x305FF8u: goto label_305ff8;
            case 0x306008u: goto label_306008;
            case 0x306014u: goto label_306014;
            case 0x30601Cu: goto label_30601c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x306024u;
}
