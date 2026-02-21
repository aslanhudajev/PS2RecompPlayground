#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTRXDIR
// Address: 0x11ba40 - 0x11ba64
void setTRXDIR_0x11ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ba40u;

    // 0x11ba40: 0x5283c
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ba44: 0x27bdfff0
    ctx->pc = 0x11ba44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ba48: 0x5303e
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ba4c: 0xffbf0000
    ctx->pc = 0x11ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ba50: 0xc046d3a
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 83));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA58u; }
    }
    if (ctx->pc != 0x11BA58u) { return; }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0xdfbf0000
    ctx->pc = 0x11ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba5c: 0x3e00008
    ctx->pc = 0x11BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BA64u;
}
