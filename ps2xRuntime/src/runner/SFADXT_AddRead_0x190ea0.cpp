#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_AddRead
// Address: 0x190ea0 - 0x190ec0
void SFADXT_AddRead_0x190ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_AddRead");


    ctx->pc = 0x190ea0u;

    // 0x190ea0: 0x27bdfff0
    ctx->pc = 0x190ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190ea4: 0x3c05ff00
    ctx->pc = 0x190ea4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190ea8: 0xffbf0000
    ctx->pc = 0x190ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190eac: 0xc064ea0
    ctx->pc = 0x190EACu;
    SET_GPR_U32(ctx, 31, 0x190EB4u);
    ctx->pc = 0x190EB0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EB4u; }
        else if (ctx->pc != 0x190EB4u) { ctx->pc = 0x190EB4u; }
    }
    if (ctx->pc != 0x190EB4u) { return; }
    ctx->pc = 0x190EB4u;
    // 0x190eb4: 0xdfbf0000
    ctx->pc = 0x190eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190eb8: 0x3e00008
    ctx->pc = 0x190EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190EC0u;
}
