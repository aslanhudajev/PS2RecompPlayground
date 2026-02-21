#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodePrevNode
// Address: 0x2cf900 - 0x2cf94c
void MBNodePrevNode_0x2cf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf900u;

    // 0x2cf900: 0x8c820074
    ctx->pc = 0x2cf900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2cf904: 0x54400003
    ctx->pc = 0x2CF904u;
    {
        const bool branch_taken_0x2cf904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf904) {
            ctx->pc = 0x2CF908u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 120)));
            ctx->pc = 0x2CF914u;
            goto label_2cf914;
        }
    }
    ctx->pc = 0x2CF90Cu;
    // 0x2cf90c: 0x3c02003a
    ctx->pc = 0x2cf90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf910: 0x8c430c94
    ctx->pc = 0x2cf910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 3220)));
label_2cf914:
    // 0x2cf914: 0x14600003
    ctx->pc = 0x2CF914u;
    {
        const bool branch_taken_0x2cf914 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf914) {
            ctx->pc = 0x2CF924u;
            goto label_2cf924;
        }
    }
    ctx->pc = 0x2CF91Cu;
label_2cf91c:
    // 0x2cf91c: 0x3e00008
    ctx->pc = 0x2CF91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF920u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF914u: goto label_2cf914;
            case 0x2CF91Cu: goto label_2cf91c;
            case 0x2CF924u: goto label_2cf924;
            case 0x2CF930u: goto label_2cf930;
            case 0x2CF944u: goto label_2cf944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF924u;
label_2cf924:
    // 0x2cf924: 0x1064fffd
    ctx->pc = 0x2CF924u;
    {
        const bool branch_taken_0x2cf924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x2cf924) {
            ctx->pc = 0x2CF91Cu;
            goto label_2cf91c;
        }
    }
    ctx->pc = 0x2CF92Cu;
    // 0x2cf92c: 0x0
    ctx->pc = 0x2cf92cu;
    // NOP
label_2cf930:
    // 0x2cf930: 0x10600004
    ctx->pc = 0x2CF930u;
    {
        const bool branch_taken_0x2cf930 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf930) {
            ctx->pc = 0x2CF944u;
            goto label_2cf944;
        }
    }
    ctx->pc = 0x2CF938u;
    // 0x2cf938: 0x8c62007c
    ctx->pc = 0x2cf938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2cf93c: 0x5444fffc
    ctx->pc = 0x2CF93Cu;
    {
        const bool branch_taken_0x2cf93c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2cf93c) {
            ctx->pc = 0x2CF940u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 124)));
            ctx->pc = 0x2CF930u;
            goto label_2cf930;
        }
    }
    ctx->pc = 0x2CF944u;
label_2cf944:
    // 0x2cf944: 0x3e00008
    ctx->pc = 0x2CF944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF948u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF914u: goto label_2cf914;
            case 0x2CF91Cu: goto label_2cf91c;
            case 0x2CF924u: goto label_2cf924;
            case 0x2CF930u: goto label_2cf930;
            case 0x2CF944u: goto label_2cf944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF94Cu;
}
