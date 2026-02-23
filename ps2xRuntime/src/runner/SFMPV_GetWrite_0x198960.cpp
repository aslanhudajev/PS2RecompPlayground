#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_GetWrite
// Address: 0x198960 - 0x198980
void SFMPV_GetWrite_0x198960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_GetWrite");


    ctx->pc = 0x198960u;

    // 0x198960: 0x27bdfff0
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198964: 0x3c05ff00
    ctx->pc = 0x198964u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198968: 0xffbf0000
    ctx->pc = 0x198968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19896c: 0xc064ea0
    ctx->pc = 0x19896Cu;
    SET_GPR_U32(ctx, 31, 0x198974u);
    ctx->pc = 0x198970u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3853));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198974u; }
        else if (ctx->pc != 0x198974u) { ctx->pc = 0x198974u; }
    }
    if (ctx->pc != 0x198974u) { return; }
    ctx->pc = 0x198974u;
    // 0x198974: 0xdfbf0000
    ctx->pc = 0x198974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198978: 0x3e00008
    ctx->pc = 0x198978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19897Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198980u;
}
