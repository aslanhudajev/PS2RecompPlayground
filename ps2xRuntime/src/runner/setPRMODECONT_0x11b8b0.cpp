#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPRMODECONT
// Address: 0x11b8b0 - 0x11b8d4
void setPRMODECONT_0x11b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b8b0u;

    // 0x11b8b0: 0x5283c
    ctx->pc = 0x11b8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b8b4: 0x27bdfff0
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b8b8: 0x5303e
    ctx->pc = 0x11b8b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b8bc: 0xffbf0000
    ctx->pc = 0x11b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b8c0: 0xc046d3a
    ctx->pc = 0x11B8C0u;
    SET_GPR_U32(ctx, 31, 0x11B8C8u);
    ctx->pc = 0x11B8C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8C8u; }
    }
    if (ctx->pc != 0x11B8C8u) { return; }
    ctx->pc = 0x11B8C8u;
    // 0x11b8c8: 0xdfbf0000
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b8cc: 0x3e00008
    ctx->pc = 0x11B8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B8D4u;
}
