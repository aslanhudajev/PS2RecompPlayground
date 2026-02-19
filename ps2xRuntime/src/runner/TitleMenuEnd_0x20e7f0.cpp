#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TitleMenuEnd
// Address: 0x20e7f0 - 0x20e824
void TitleMenuEnd_0x20e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e7f0u;

    // 0x20e7f0: 0x27bdfff0
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e7f4: 0xffbf0000
    ctx->pc = 0x20e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e7f8: 0x3c020032
    ctx->pc = 0x20e7f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e7fc: 0x8c42d358
    ctx->pc = 0x20e7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e800: 0x10400003
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E804u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E810u;
            goto label_20e810;
        }
    }
    ctx->pc = 0x20E808u;
    // 0x20e808: 0xc082cec
    ctx->pc = 0x20E808u;
    SET_GPR_U32(ctx, 31, 0x20E810u);
    ctx->pc = 0x20E80Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E810u; }
    }
    if (ctx->pc != 0x20E810u) { return; }
    ctx->pc = 0x20E810u;
label_20e810:
    // 0x20e810: 0x3c020032
    ctx->pc = 0x20e810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e814: 0xac40f444
    ctx->pc = 0x20e814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964292), GPR_U32(ctx, 0));
    // 0x20e818: 0xdfbf0000
    ctx->pc = 0x20e818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e81c: 0x3e00008
    ctx->pc = 0x20E81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E810u: goto label_20e810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E824u;
}
