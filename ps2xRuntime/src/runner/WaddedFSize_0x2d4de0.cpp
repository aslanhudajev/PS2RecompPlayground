#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WaddedFSize
// Address: 0x2d4de0 - 0x2d4e08
void WaddedFSize_0x2d4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4de0u;

    // 0x2d4de0: 0x27bdfff0
    ctx->pc = 0x2d4de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4de4: 0xffbf0000
    ctx->pc = 0x2d4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4de8: 0xc0b5346
    ctx->pc = 0x2D4DE8u;
    SET_GPR_U32(ctx, 31, 0x2D4DF0u);
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWadInfo_0x2d4d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4DF0u; }
    }
    if (ctx->pc != 0x2D4DF0u) { return; }
    ctx->pc = 0x2D4DF0u;
    // 0x2d4df0: 0x50400002
    ctx->pc = 0x2D4DF0u;
    {
        const bool branch_taken_0x2d4df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d4df0) {
            ctx->pc = 0x2D4DF4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D4DFCu;
            goto label_2d4dfc;
        }
    }
    ctx->pc = 0x2D4DF8u;
    // 0x2d4df8: 0x8c420000
    ctx->pc = 0x2d4df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d4dfc:
    // 0x2d4dfc: 0xdfbf0000
    ctx->pc = 0x2d4dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4e00: 0x3e00008
    ctx->pc = 0x2D4E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4E04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4DFCu: goto label_2d4dfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4E08u;
}
