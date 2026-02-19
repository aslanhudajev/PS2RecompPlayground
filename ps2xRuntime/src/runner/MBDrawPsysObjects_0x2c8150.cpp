#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawPsysObjects
// Address: 0x2c8150 - 0x2c8184
void MBDrawPsysObjects_0x2c8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8150u;

    // 0x2c8150: 0x27bdfff0
    ctx->pc = 0x2c8150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8154: 0xffbf0000
    ctx->pc = 0x2c8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8158: 0xc0b09ea
    ctx->pc = 0x2C8158u;
    SET_GPR_U32(ctx, 31, 0x2C8160u);
    ctx->pc = 0x2C27A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBStartBlits_0x2c27a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8160u; }
    }
    if (ctx->pc != 0x2C8160u) { return; }
    ctx->pc = 0x2C8160u;
    // 0x2c8160: 0x3c02003a
    ctx->pc = 0x2c8160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8164: 0x3c040039
    ctx->pc = 0x2c8164u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x2c8168: 0x248459e0
    ctx->pc = 0x2c8168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23008));
    // 0x2c816c: 0x8c45a9e0
    ctx->pc = 0x2c816cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294945248)));
    // 0x2c8170: 0xc0b2034
    ctx->pc = 0x2C8170u;
    SET_GPR_U32(ctx, 31, 0x2C8178u);
    ctx->pc = 0x2C8174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawSortObjectsSub_0x2c80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8178u; }
    }
    if (ctx->pc != 0x2C8178u) { return; }
    ctx->pc = 0x2C8178u;
    // 0x2c8178: 0xdfbf0000
    ctx->pc = 0x2c8178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c817c: 0x80b09ec
    ctx->pc = 0x2C817Cu;
    ctx->pc = 0x2C8180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2C27B0u;
    MBEndBlits_0x2c27b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8184u;
}
