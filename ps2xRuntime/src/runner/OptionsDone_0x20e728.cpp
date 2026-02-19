#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OptionsDone
// Address: 0x20e728 - 0x20e758
void OptionsDone_0x20e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e728u;

    // 0x20e728: 0x27bdfff0
    ctx->pc = 0x20e728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e72c: 0xffbf0000
    ctx->pc = 0x20e72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e730: 0xc08a330
    ctx->pc = 0x20E730u;
    SET_GPR_U32(ctx, 31, 0x20E738u);
    ctx->pc = 0x228CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FireScrollActive_0x228cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E738u; }
    }
    if (ctx->pc != 0x20E738u) { return; }
    ctx->pc = 0x20E738u;
    // 0x20e738: 0x14400004
    ctx->pc = 0x20E738u;
    {
        const bool branch_taken_0x20e738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E73Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e738) {
            ctx->pc = 0x20E74Cu;
            goto label_20e74c;
        }
    }
    ctx->pc = 0x20E740u;
    // 0x20e740: 0x3c020032
    ctx->pc = 0x20e740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e744: 0x8c42d358
    ctx->pc = 0x20e744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e748: 0x2c420001
    ctx->pc = 0x20e748u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_20e74c:
    // 0x20e74c: 0xdfbf0000
    ctx->pc = 0x20e74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e750: 0x3e00008
    ctx->pc = 0x20E750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E74Cu: goto label_20e74c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E758u;
}
