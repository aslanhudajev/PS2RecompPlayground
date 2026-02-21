#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dmVector
// Address: 0x2f12f0 - 0x2f130c
void _dmVector_0x2f12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f12f0u;

    // 0x2f12f0: 0x27bdfff0
    ctx->pc = 0x2f12f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f12f4: 0xffbf0000
    ctx->pc = 0x2f12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f12f8: 0xc0bc930
    ctx->pc = 0x2F12F8u;
    SET_GPR_U32(ctx, 31, 0x2F1300u);
    ctx->pc = 0x2F12FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F24C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x2f24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1300u; }
    }
    if (ctx->pc != 0x2F1300u) { return; }
    ctx->pc = 0x2F1300u;
    // 0x2f1300: 0xdfbf0000
    ctx->pc = 0x2f1300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1304: 0x3e00008
    ctx->pc = 0x2F1304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F130Cu;
}
