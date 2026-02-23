#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Start
// Address: 0x190dc0 - 0x190de0
void SFADXT_Start_0x190dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Start");


    ctx->pc = 0x190dc0u;

    // 0x190dc0: 0x27bdfff0
    ctx->pc = 0x190dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190dc4: 0xffbf0000
    ctx->pc = 0x190dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190dc8: 0xc064382
    ctx->pc = 0x190DC8u;
    SET_GPR_U32(ctx, 31, 0x190DD0u);
    ctx->pc = 0x190DCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_WaitStart_0x190e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DD0u; }
        else if (ctx->pc != 0x190DD0u) { ctx->pc = 0x190DD0u; }
    }
    if (ctx->pc != 0x190DD0u) { return; }
    ctx->pc = 0x190DD0u;
    // 0x190dd0: 0xdfbf0000
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190dd4: 0x102d
    ctx->pc = 0x190dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dd8: 0x3e00008
    ctx->pc = 0x190DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190DE0u;
}
