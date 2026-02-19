#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: index
// Address: 0x2fa5c8 - 0x2fa5e4
void index_0x2fa5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa5c8u;

    // 0x2fa5c8: 0x27bdfff0
    ctx->pc = 0x2fa5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa5cc: 0xffbf0000
    ctx->pc = 0x2fa5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa5d0: 0xc0bf20c
    ctx->pc = 0x2FA5D0u;
    SET_GPR_U32(ctx, 31, 0x2FA5D8u);
    ctx->pc = 0x2FC830u;
    {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x2fc830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA5D8u; }
    }
    if (ctx->pc != 0x2FA5D8u) { return; }
    ctx->pc = 0x2FA5D8u;
    // 0x2fa5d8: 0xdfbf0000
    ctx->pc = 0x2fa5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa5dc: 0x3e00008
    ctx->pc = 0x2FA5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA5E4u;
}
