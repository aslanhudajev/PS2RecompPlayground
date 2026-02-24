#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iDisableIntc
// Address: 0x10ec08 - 0x10ec28
void iDisableIntc_0x10ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec08u;

    // 0x10ec08: 0x27bdfff0
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec0c: 0xffbf0000
    ctx->pc = 0x10ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec10: 0xc043814
    ctx->pc = 0x10EC10u;
    SET_GPR_U32(ctx, 31, 0x10EC18u);
    ctx->pc = 0x10E050u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableIntc_0x10e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC18u; }
    }
    if (ctx->pc != 0x10EC18u) { return; }
    ctx->pc = 0x10EC18u;
    // 0x10ec18: 0xf
    ctx->pc = 0x10ec18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec1c: 0xdfbf0000
    ctx->pc = 0x10ec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec20: 0x3e00008
    ctx->pc = 0x10EC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC28u;
}
