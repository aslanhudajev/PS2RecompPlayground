#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iDisableIntc
// Address: 0x3042e8 - 0x304308
void iDisableIntc_0x3042e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3042e8u;

    // 0x3042e8: 0x27bdfff0
    ctx->pc = 0x3042e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3042ec: 0xffbf0000
    ctx->pc = 0x3042ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3042f0: 0xc0c0ce4
    ctx->pc = 0x3042F0u;
    SET_GPR_U32(ctx, 31, 0x3042F8u);
    ctx->pc = 0x303390u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableIntc_0x303390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042F8u; }
    }
    if (ctx->pc != 0x3042F8u) { return; }
    ctx->pc = 0x3042F8u;
    // 0x3042f8: 0xf
    ctx->pc = 0x3042f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3042fc: 0xdfbf0000
    ctx->pc = 0x3042fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304300: 0x3e00008
    ctx->pc = 0x304300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304308u;
}
