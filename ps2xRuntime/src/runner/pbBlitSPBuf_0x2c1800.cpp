#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSPBuf
// Address: 0x2c1800 - 0x2c181c
void pbBlitSPBuf_0x2c1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1800u;

    // 0x2c1800: 0x27bdfff0
    ctx->pc = 0x2c1800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1804: 0xffbf0000
    ctx->pc = 0x2c1804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1808: 0xc0a9518
    ctx->pc = 0x2C1808u;
    SET_GPR_U32(ctx, 31, 0x2C1810u);
    ctx->pc = 0x2A5460u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocBlit_0x2a5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1810u; }
    }
    if (ctx->pc != 0x2C1810u) { return; }
    ctx->pc = 0x2C1810u;
    // 0x2c1810: 0xdfbf0000
    ctx->pc = 0x2c1810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1814: 0x3e00008
    ctx->pc = 0x2C1814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C181Cu;
}
