#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iDisableDmac
// Address: 0x304328 - 0x304348
void iDisableDmac_0x304328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304328u;

    // 0x304328: 0x27bdfff0
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30432c: 0xffbf0000
    ctx->pc = 0x30432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304330: 0xc0c0cec
    ctx->pc = 0x304330u;
    SET_GPR_U32(ctx, 31, 0x304338u);
    ctx->pc = 0x3033B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x3033b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304338u; }
    }
    if (ctx->pc != 0x304338u) { return; }
    ctx->pc = 0x304338u;
    // 0x304338: 0xf
    ctx->pc = 0x304338u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30433c: 0xdfbf0000
    ctx->pc = 0x30433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304340: 0x3e00008
    ctx->pc = 0x304340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304348u;
}
