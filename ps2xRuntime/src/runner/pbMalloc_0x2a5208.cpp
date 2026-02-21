#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbMalloc
// Address: 0x2a5208 - 0x2a5224
void pbMalloc_0x2a5208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5208u;

    // 0x2a5208: 0x27bdfff0
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a520c: 0xffbf0000
    ctx->pc = 0x2a520cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5210: 0xc0be97a
    ctx->pc = 0x2A5210u;
    SET_GPR_U32(ctx, 31, 0x2A5218u);
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5218u; }
    }
    if (ctx->pc != 0x2A5218u) { return; }
    ctx->pc = 0x2A5218u;
    // 0x2a5218: 0xdfbf0000
    ctx->pc = 0x2a5218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a521c: 0x3e00008
    ctx->pc = 0x2A521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5224u;
}
