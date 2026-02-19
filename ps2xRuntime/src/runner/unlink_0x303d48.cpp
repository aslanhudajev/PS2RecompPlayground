#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: unlink
// Address: 0x303d48 - 0x303d70
void unlink_0x303d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303d48u;

    // 0x303d48: 0x27bdfff0
    ctx->pc = 0x303d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303d4c: 0xffbf0000
    ctx->pc = 0x303d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303d50: 0xc0be8b2
    ctx->pc = 0x303D50u;
    SET_GPR_U32(ctx, 31, 0x303D58u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D58u; }
    }
    if (ctx->pc != 0x303D58u) { return; }
    ctx->pc = 0x303D58u;
    // 0x303d58: 0x24030005
    ctx->pc = 0x303d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x303d5c: 0xdfbf0000
    ctx->pc = 0x303d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303d60: 0xac430000
    ctx->pc = 0x303d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x303d64: 0x2402ffff
    ctx->pc = 0x303d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303d68: 0x3e00008
    ctx->pc = 0x303D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303D70u;
}
