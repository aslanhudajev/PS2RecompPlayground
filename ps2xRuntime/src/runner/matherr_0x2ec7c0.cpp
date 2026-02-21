#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: matherr
// Address: 0x2ec7c0 - 0x2ec7e4
void matherr_0x2ec7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ec7c0u;

    // 0x2ec7c0: 0x27bdfff0
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec7c4: 0xffbf0000
    ctx->pc = 0x2ec7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec7c8: 0xdc840008
    ctx->pc = 0x2ec7c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ec7cc: 0xc0be4ba
    ctx->pc = 0x2EC7CCu;
    SET_GPR_U32(ctx, 31, 0x2EC7D4u);
    ctx->pc = 0x2EC7D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7D4u; }
    }
    if (ctx->pc != 0x2EC7D4u) { return; }
    ctx->pc = 0x2EC7D4u;
    // 0x2ec7d4: 0xdfbf0000
    ctx->pc = 0x2ec7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec7d8: 0x102d
    ctx->pc = 0x2ec7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7dc: 0x3e00008
    ctx->pc = 0x2EC7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC7E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC7E4u;
}
