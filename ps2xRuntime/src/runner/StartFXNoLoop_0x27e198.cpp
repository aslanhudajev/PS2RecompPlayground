#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXNoLoop
// Address: 0x27e198 - 0x27e1bc
void StartFXNoLoop_0x27e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e198u;

    // 0x27e198: 0x27bdfff0
    ctx->pc = 0x27e198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e19c: 0xffbf0000
    ctx->pc = 0x27e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e1a0: 0x44806000
    ctx->pc = 0x27e1a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e1a4: 0x302d
    ctx->pc = 0x27e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1a8: 0xc09f5fa
    ctx->pc = 0x27E1A8u;
    SET_GPR_U32(ctx, 31, 0x27E1B0u);
    ctx->pc = 0x27E1ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1B0u; }
    }
    if (ctx->pc != 0x27E1B0u) { return; }
    ctx->pc = 0x27E1B0u;
    // 0x27e1b0: 0xdfbf0000
    ctx->pc = 0x27e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e1b4: 0x3e00008
    ctx->pc = 0x27E1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E1B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E1BCu;
}
