#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iEnableIntc
// Address: 0x1554a8 - 0x1554c8
void iEnableIntc_0x1554a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iEnableIntc");


    ctx->pc = 0x1554a8u;

    // 0x1554a8: 0x27bdfff0
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1554ac: 0xffbf0000
    ctx->pc = 0x1554acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1554b0: 0xc0551a0
    ctx->pc = 0x1554B0u;
    SET_GPR_U32(ctx, 31, 0x1554B8u);
    ctx->pc = 0x154680u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iEnableIntc_0x154680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554B8u; }
        else if (ctx->pc != 0x1554B8u) { ctx->pc = 0x1554B8u; }
    }
    if (ctx->pc != 0x1554B8u) { return; }
    ctx->pc = 0x1554B8u;
    // 0x1554b8: 0xf
    ctx->pc = 0x1554b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1554bc: 0xdfbf0000
    ctx->pc = 0x1554bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1554c0: 0x3e00008
    ctx->pc = 0x1554C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1554C8u;
}
