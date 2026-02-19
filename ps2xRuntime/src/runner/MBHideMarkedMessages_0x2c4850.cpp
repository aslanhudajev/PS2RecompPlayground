#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBHideMarkedMessages
// Address: 0x2c4850 - 0x2c48b0
void MBHideMarkedMessages_0x2c4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4850u;

    // 0x2c4850: 0x3c02003d
    ctx->pc = 0x2c4850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4854: 0x8c421f70
    ctx->pc = 0x2c4854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x2c4858: 0x18400013
    ctx->pc = 0x2C4858u;
    {
        const bool branch_taken_0x2c4858 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C485Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4858) {
            ctx->pc = 0x2C48A8u;
            goto label_2c48a8;
        }
    }
    ctx->pc = 0x2C4860u;
    // 0x2c4860: 0x3c02003d
    ctx->pc = 0x2c4860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4864: 0x2449c980
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x2c4868: 0x2408002c
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c486c: 0x3c070200
    ctx->pc = 0x2c486cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)512 << 16));
    // 0x2c4870: 0x3c02003d
    ctx->pc = 0x2c4870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4874: 0x8c461f70
    ctx->pc = 0x2c4874u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x2c4878: 0xa81018
    ctx->pc = 0x2c4878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c487c: 0x0
    ctx->pc = 0x2c487cu;
    // NOP
label_2c4880:
    // 0x2c4880: 0x492021
    ctx->pc = 0x2c4880u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c4884: 0x8c830000
    ctx->pc = 0x2c4884u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4888: 0x671024
    ctx->pc = 0x2c4888u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c488c: 0x10400002
    ctx->pc = 0x2C488Cu;
    {
        const bool branch_taken_0x2c488c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4890u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2c488c) {
            ctx->pc = 0x2C4898u;
            goto label_2c4898;
        }
    }
    ctx->pc = 0x2C4894u;
    // 0x2c4894: 0xac820000
    ctx->pc = 0x2c4894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c4898:
    // 0x2c4898: 0x24a50001
    ctx->pc = 0x2c4898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c489c: 0xa6102a
    ctx->pc = 0x2c489cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2c48a0: 0x1440fff7
    ctx->pc = 0x2C48A0u;
    {
        const bool branch_taken_0x2c48a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C48A4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c48a0) {
            ctx->pc = 0x2C4880u;
            goto label_2c4880;
        }
    }
    ctx->pc = 0x2C48A8u;
label_2c48a8:
    // 0x2c48a8: 0x3e00008
    ctx->pc = 0x2C48A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4880u: goto label_2c4880;
            case 0x2C4898u: goto label_2c4898;
            case 0x2C48A8u: goto label_2c48a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C48B0u;
}
