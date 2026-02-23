#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Stop
// Address: 0x190de0 - 0x190e00
void SFADXT_Stop_0x190de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Stop");


    ctx->pc = 0x190de0u;

    // 0x190de0: 0x27bdfff0
    ctx->pc = 0x190de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190de4: 0xffbf0000
    ctx->pc = 0x190de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190de8: 0xc05c73a
    ctx->pc = 0x190DE8u;
    SET_GPR_U32(ctx, 31, 0x190DF0u);
    ctx->pc = 0x190DECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DF0u; }
        else if (ctx->pc != 0x190DF0u) { ctx->pc = 0x190DF0u; }
    }
    if (ctx->pc != 0x190DF0u) { return; }
    ctx->pc = 0x190DF0u;
    // 0x190df0: 0xdfbf0000
    ctx->pc = 0x190df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190df4: 0x102d
    ctx->pc = 0x190df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190df8: 0x3e00008
    ctx->pc = 0x190DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190E00u;
}
