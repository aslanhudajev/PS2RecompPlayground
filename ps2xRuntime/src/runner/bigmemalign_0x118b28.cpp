#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: bigmemalign
// Address: 0x118b28 - 0x118b60
void bigmemalign_0x118b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118b28u;

    // 0x118b28: 0x8f828424
    ctx->pc = 0x118b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935588)));
    // 0x118b2c: 0x27bdfff0
    ctx->pc = 0x118b2cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118b30: 0x45102a
    ctx->pc = 0x118b30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x118b34: 0x10400006
    ctx->pc = 0x118B34u;
    {
        const bool branch_taken_0x118b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B38u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x118b34) {
            ctx->pc = 0x118B50u;
            goto label_118b50;
        }
    }
    ctx->pc = 0x118B3Cu;
    // 0x118b3c: 0x3c040017
    ctx->pc = 0x118b3cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x118b40: 0xc04ace4
    ctx->pc = 0x118B40u;
    SET_GPR_U32(ctx, 31, 0x118B48u);
    ctx->pc = 0x118B44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17400));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118B48u; }
    }
    if (ctx->pc != 0x118B48u) { return; }
    ctx->pc = 0x118B48u;
    // 0x118b48: 0x10000002
    ctx->pc = 0x118B48u;
    {
        const bool branch_taken_0x118b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x118b48) {
            ctx->pc = 0x118B54u;
            goto label_118b54;
        }
    }
    ctx->pc = 0x118B50u;
label_118b50:
    // 0x118b50: 0x8f828420
    ctx->pc = 0x118b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935584)));
label_118b54:
    // 0x118b54: 0xdfbf0000
    ctx->pc = 0x118b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b58: 0x3e00008
    ctx->pc = 0x118B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118B50u: goto label_118b50;
            case 0x118B54u: goto label_118b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118B60u;
}
