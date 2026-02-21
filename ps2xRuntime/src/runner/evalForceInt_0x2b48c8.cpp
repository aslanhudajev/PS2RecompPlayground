#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalForceInt
// Address: 0x2b48c8 - 0x2b4938
void evalForceInt_0x2b48c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b48c8u;

    // 0x2b48c8: 0x27bdffd0
    ctx->pc = 0x2b48c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b48cc: 0xffbf0020
    ctx->pc = 0x2b48ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b48d0: 0xffb10010
    ctx->pc = 0x2b48d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b48d4: 0xffb00000
    ctx->pc = 0x2b48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b48d8: 0x80882d
    ctx->pc = 0x2b48d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48dc: 0x3c100037
    ctx->pc = 0x2b48dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2b48e0: 0x8e0220b0
    ctx->pc = 0x2b48e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8368)));
    // 0x2b48e4: 0x3c03ffff
    ctx->pc = 0x2b48e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2b48e8: 0x3463fff1
    ctx->pc = 0x2b48e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
    // 0x2b48ec: 0x431024
    ctx->pc = 0x2b48ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b48f0: 0xc0ad1a2
    ctx->pc = 0x2B48F0u;
    SET_GPR_U32(ctx, 31, 0x2B48F8u);
    ctx->pc = 0x2B48F4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8368), GPR_U32(ctx, 2));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48F8u; }
    }
    if (ctx->pc != 0x2B48F8u) { return; }
    ctx->pc = 0x2B48F8u;
    // 0x2b48f8: 0xae220010
    ctx->pc = 0x2b48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b48fc: 0x8e0220b0
    ctx->pc = 0x2b48fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8368)));
    // 0x2b4900: 0x3042000e
    ctx->pc = 0x2b4900u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b4904: 0x10400004
    ctx->pc = 0x2B4904u;
    {
        const bool branch_taken_0x2b4904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4908u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b4904) {
            ctx->pc = 0x2B4918u;
            goto label_2b4918;
        }
    }
    ctx->pc = 0x2B490Cu;
    // 0x2b490c: 0xae220000
    ctx->pc = 0x2b490cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b4910: 0x10000004
    ctx->pc = 0x2B4910u;
    {
        const bool branch_taken_0x2b4910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4914u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b4910) {
            ctx->pc = 0x2B4924u;
            goto label_2b4924;
        }
    }
    ctx->pc = 0x2B4918u;
label_2b4918:
    // 0x2b4918: 0x24020001
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b491c: 0xae220000
    ctx->pc = 0x2b491cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b4920: 0x102d
    ctx->pc = 0x2b4920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4924:
    // 0x2b4924: 0xdfbf0020
    ctx->pc = 0x2b4924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4928: 0xdfb10010
    ctx->pc = 0x2b4928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b492c: 0xdfb00000
    ctx->pc = 0x2b492cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4930: 0x3e00008
    ctx->pc = 0x2B4930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4918u: goto label_2b4918;
            case 0x2B4924u: goto label_2b4924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4938u;
}
