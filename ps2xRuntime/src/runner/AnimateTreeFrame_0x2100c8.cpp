#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateTreeFrame
// Address: 0x2100c8 - 0x2100e8
void AnimateTreeFrame_0x2100c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2100c8u;

    // 0x2100c8: 0x27bdfff0
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2100cc: 0xffbf0000
    ctx->pc = 0x2100ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2100d0: 0x44806000
    ctx->pc = 0x2100d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2100d4: 0xc083fbc
    ctx->pc = 0x2100D4u;
    SET_GPR_U32(ctx, 31, 0x2100DCu);
    ctx->pc = 0x2100D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp_0x20fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100DCu; }
    }
    if (ctx->pc != 0x2100DCu) { return; }
    ctx->pc = 0x2100DCu;
    // 0x2100dc: 0xdfbf0000
    ctx->pc = 0x2100dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2100e0: 0x3e00008
    ctx->pc = 0x2100E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2100E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2100E8u;
}
