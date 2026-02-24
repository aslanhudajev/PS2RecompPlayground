#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dmVector
// Address: 0x122998 - 0x1229b4
void _dmVector_0x122998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122998u;

    // 0x122998: 0x27bdfff0
    ctx->pc = 0x122998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12299c: 0xffbf0000
    ctx->pc = 0x12299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1229a0: 0xc048eda
    ctx->pc = 0x1229A0u;
    SET_GPR_U32(ctx, 31, 0x1229A8u);
    ctx->pc = 0x1229A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x123B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1229A8u; }
    }
    if (ctx->pc != 0x1229A8u) { return; }
    ctx->pc = 0x1229A8u;
    // 0x1229a8: 0xdfbf0000
    ctx->pc = 0x1229a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1229ac: 0x3e00008
    ctx->pc = 0x1229ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1229B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1229B4u;
}
