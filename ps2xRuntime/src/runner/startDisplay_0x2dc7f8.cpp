#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: startDisplay
// Address: 0x2dc7f8 - 0x2dc830
void startDisplay_0x2dc7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc7f8u;

    // 0x2dc7f8: 0x27bdfff0
    ctx->pc = 0x2dc7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc7fc: 0xffbf0000
    ctx->pc = 0x2dc7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc800: 0xc0b8312
    ctx->pc = 0x2DC800u;
    SET_GPR_U32(ctx, 31, 0x2DC808u);
    ctx->pc = 0x2DC804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x2e0c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC808u; }
    }
    if (ctx->pc != 0x2DC808u) { return; }
    ctx->pc = 0x2DC808u;
    // 0x2dc808: 0x3c02003a
    ctx->pc = 0x2dc808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc80c: 0xac402b54
    ctx->pc = 0x2dc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11092), GPR_U32(ctx, 0));
    // 0x2dc810: 0x3c03003a
    ctx->pc = 0x2dc810u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dc814: 0x24020001
    ctx->pc = 0x2dc814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc818: 0xac62298c
    ctx->pc = 0x2dc818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10636), GPR_U32(ctx, 2));
    // 0x2dc81c: 0x3c02003a
    ctx->pc = 0x2dc81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc820: 0xac402990
    ctx->pc = 0x2dc820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10640), GPR_U32(ctx, 0));
    // 0x2dc824: 0xdfbf0000
    ctx->pc = 0x2dc824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc828: 0x3e00008
    ctx->pc = 0x2DC828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC830u;
}
