#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTRXREG
// Address: 0x11ba10 - 0x11ba3c
void setTRXREG_0x11ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ba10u;

    // 0x11ba10: 0x5283c
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ba14: 0x6303c
    ctx->pc = 0x11ba14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ba18: 0x5283e
    ctx->pc = 0x11ba18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ba1c: 0x27bdfff0
    ctx->pc = 0x11ba1cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ba20: 0xc53025
    ctx->pc = 0x11ba20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x11ba24: 0xffbf0000
    ctx->pc = 0x11ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ba28: 0xc046d3a
    ctx->pc = 0x11BA28u;
    SET_GPR_U32(ctx, 31, 0x11BA30u);
    ctx->pc = 0x11BA2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 82));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA30u; }
    }
    if (ctx->pc != 0x11BA30u) { return; }
    ctx->pc = 0x11BA30u;
    // 0x11ba30: 0xdfbf0000
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba34: 0x3e00008
    ctx->pc = 0x11BA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BA3Cu;
}
