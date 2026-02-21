#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setBITBLTBUF
// Address: 0x11b9b0 - 0x11b9e0
void setBITBLTBUF_0x11b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b9b0u;

    // 0x11b9b0: 0x73e3c
    ctx->pc = 0x11b9b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x11b9b4: 0x6343c
    ctx->pc = 0x11b9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x11b9b8: 0xe63825
    ctx->pc = 0x11b9b8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11b9bc: 0x5283c
    ctx->pc = 0x11b9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b9c0: 0x27bdfff0
    ctx->pc = 0x11b9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b9c4: 0xe53025
    ctx->pc = 0x11b9c4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11b9c8: 0xffbf0000
    ctx->pc = 0x11b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9cc: 0xc046d3a
    ctx->pc = 0x11B9CCu;
    SET_GPR_U32(ctx, 31, 0x11B9D4u);
    ctx->pc = 0x11B9D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D4u; }
    }
    if (ctx->pc != 0x11B9D4u) { return; }
    ctx->pc = 0x11B9D4u;
    // 0x11b9d4: 0xdfbf0000
    ctx->pc = 0x11b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b9d8: 0x3e00008
    ctx->pc = 0x11B9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B9E0u;
}
