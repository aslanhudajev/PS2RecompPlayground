#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iDisableDmac
// Address: 0x10ec48 - 0x10ec68
void iDisableDmac_0x10ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec48u;

    // 0x10ec48: 0x27bdfff0
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec4c: 0xffbf0000
    ctx->pc = 0x10ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec50: 0xc04381c
    ctx->pc = 0x10EC50u;
    SET_GPR_U32(ctx, 31, 0x10EC58u);
    ctx->pc = 0x10E070u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x10e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC58u; }
    }
    if (ctx->pc != 0x10EC58u) { return; }
    ctx->pc = 0x10EC58u;
    // 0x10ec58: 0xf
    ctx->pc = 0x10ec58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec5c: 0xdfbf0000
    ctx->pc = 0x10ec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec60: 0x3e00008
    ctx->pc = 0x10EC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC68u;
}
