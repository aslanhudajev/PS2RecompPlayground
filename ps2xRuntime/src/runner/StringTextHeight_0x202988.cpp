#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringTextHeight
// Address: 0x202988 - 0x2029bc
void StringTextHeight_0x202988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202988u;

    // 0x202988: 0x27bdfff0
    ctx->pc = 0x202988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20298c: 0xffbf0000
    ctx->pc = 0x20298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202990: 0x80102d
    ctx->pc = 0x202990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202994: 0xa0182d
    ctx->pc = 0x202994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202998: 0xc0382d
    ctx->pc = 0x202998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20299c: 0x3c040031
    ctx->pc = 0x20299cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2029a0: 0x2484f6a8
    ctx->pc = 0x2029a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    // 0x2029a4: 0x40282d
    ctx->pc = 0x2029a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029a8: 0xc080a12
    ctx->pc = 0x2029A8u;
    SET_GPR_U32(ctx, 31, 0x2029B0u);
    ctx->pc = 0x2029ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202848u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeightSub_0x202848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2029B0u; }
    }
    if (ctx->pc != 0x2029B0u) { return; }
    ctx->pc = 0x2029B0u;
    // 0x2029b0: 0xdfbf0000
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2029b4: 0x3e00008
    ctx->pc = 0x2029B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2029B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2029BCu;
}
