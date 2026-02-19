#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaFinished
// Address: 0x2c0770 - 0x2c07ac
void pbDmaFinished_0x2c0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0770u;

    // 0x2c0770: 0x27bdfff0
    ctx->pc = 0x2c0770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0774: 0xffbf0000
    ctx->pc = 0x2c0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0778: 0x3c020037
    ctx->pc = 0x2c0778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c077c: 0x8c422948
    ctx->pc = 0x2c077cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10568)));
    // 0x2c0780: 0x4400007
    ctx->pc = 0x2C0780u;
    {
        const bool branch_taken_0x2c0780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C0784u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c0780) {
            ctx->pc = 0x2C07A0u;
            goto label_2c07a0;
        }
    }
    ctx->pc = 0x2C0788u;
    // 0x2c0788: 0xc0aa208
    ctx->pc = 0x2C0788u;
    SET_GPR_U32(ctx, 31, 0x2C0790u);
    ctx->pc = 0x2C078Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaPageHandler_0x2a8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0790u; }
    }
    if (ctx->pc != 0x2C0790u) { return; }
    ctx->pc = 0x2C0790u;
    // 0x2c0790: 0x3c020037
    ctx->pc = 0x2c0790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0794: 0x8c42293c
    ctx->pc = 0x2c0794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10556)));
    // 0x2c0798: 0x38420002
    ctx->pc = 0x2c0798u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x2c079c: 0x2c420001
    ctx->pc = 0x2c079cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_2c07a0:
    // 0x2c07a0: 0xdfbf0000
    ctx->pc = 0x2c07a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c07a4: 0x3e00008
    ctx->pc = 0x2C07A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C07A0u: goto label_2c07a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C07ACu;
}
