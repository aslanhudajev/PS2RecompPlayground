#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iEnableIntc
// Address: 0x3042c8 - 0x3042e8
void iEnableIntc_0x3042c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3042c8u;

    // 0x3042c8: 0x27bdfff0
    ctx->pc = 0x3042c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3042cc: 0xffbf0000
    ctx->pc = 0x3042ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3042d0: 0xc0c0ce0
    ctx->pc = 0x3042D0u;
    SET_GPR_U32(ctx, 31, 0x3042D8u);
    ctx->pc = 0x303380u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iEnableIntc_0x303380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042D8u; }
    }
    if (ctx->pc != 0x3042D8u) { return; }
    ctx->pc = 0x3042D8u;
    // 0x3042d8: 0xf
    ctx->pc = 0x3042d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3042dc: 0xdfbf0000
    ctx->pc = 0x3042dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3042e0: 0x3e00008
    ctx->pc = 0x3042E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3042E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3042E8u;
}
