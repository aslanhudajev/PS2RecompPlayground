#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iDisableIntc
// Address: 0x1554c8 - 0x1554e8
void iDisableIntc_0x1554c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iDisableIntc");


    ctx->pc = 0x1554c8u;

    // 0x1554c8: 0x27bdfff0
    ctx->pc = 0x1554c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1554cc: 0xffbf0000
    ctx->pc = 0x1554ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1554d0: 0xc0551a4
    ctx->pc = 0x1554D0u;
    SET_GPR_U32(ctx, 31, 0x1554D8u);
    ctx->pc = 0x154690u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableIntc_0x154690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554D8u; }
        else if (ctx->pc != 0x1554D8u) { ctx->pc = 0x1554D8u; }
    }
    if (ctx->pc != 0x1554D8u) { return; }
    ctx->pc = 0x1554D8u;
    // 0x1554d8: 0xf
    ctx->pc = 0x1554d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1554dc: 0xdfbf0000
    ctx->pc = 0x1554dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1554e0: 0x3e00008
    ctx->pc = 0x1554E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1554E8u;
}
