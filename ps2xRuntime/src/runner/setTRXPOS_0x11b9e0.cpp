#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTRXPOS
// Address: 0x11b9e0 - 0x11ba10
void setTRXPOS_0x11b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b9e0u;

    // 0x11b9e0: 0x52efc
    ctx->pc = 0x11b9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 27));
    // 0x11b9e4: 0x73c3c
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x11b9e8: 0xa72825
    ctx->pc = 0x11b9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x11b9ec: 0x6303c
    ctx->pc = 0x11b9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b9f0: 0x27bdfff0
    ctx->pc = 0x11b9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b9f4: 0xa63025
    ctx->pc = 0x11b9f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b9f8: 0xffbf0000
    ctx->pc = 0x11b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9fc: 0xc046d3a
    ctx->pc = 0x11B9FCu;
    SET_GPR_U32(ctx, 31, 0x11BA04u);
    ctx->pc = 0x11BA00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 81));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA04u; }
    }
    if (ctx->pc != 0x11BA04u) { return; }
    ctx->pc = 0x11BA04u;
    // 0x11ba04: 0xdfbf0000
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba08: 0x3e00008
    ctx->pc = 0x11BA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BA10u;
}
