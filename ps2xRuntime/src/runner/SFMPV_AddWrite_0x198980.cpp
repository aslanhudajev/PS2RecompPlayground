#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_AddWrite
// Address: 0x198980 - 0x1989a0
void SFMPV_AddWrite_0x198980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_AddWrite");


    ctx->pc = 0x198980u;

    // 0x198980: 0x27bdfff0
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198984: 0x3c05ff00
    ctx->pc = 0x198984u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198988: 0xffbf0000
    ctx->pc = 0x198988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19898c: 0xc064ea0
    ctx->pc = 0x19898Cu;
    SET_GPR_U32(ctx, 31, 0x198994u);
    ctx->pc = 0x198990u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3853));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198994u; }
        else if (ctx->pc != 0x198994u) { ctx->pc = 0x198994u; }
    }
    if (ctx->pc != 0x198994u) { return; }
    ctx->pc = 0x198994u;
    // 0x198994: 0xdfbf0000
    ctx->pc = 0x198994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198998: 0x3e00008
    ctx->pc = 0x198998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19899Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1989A0u;
}
