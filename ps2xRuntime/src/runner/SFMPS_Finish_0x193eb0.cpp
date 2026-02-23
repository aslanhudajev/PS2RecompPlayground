#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_Finish
// Address: 0x193eb0 - 0x193ed0
void SFMPS_Finish_0x193eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_Finish");


    ctx->pc = 0x193eb0u;

    // 0x193eb0: 0x27bdfff0
    ctx->pc = 0x193eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193eb4: 0xffbf0000
    ctx->pc = 0x193eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193eb8: 0xc060962
    ctx->pc = 0x193EB8u;
    SET_GPR_U32(ctx, 31, 0x193EC0u);
    ctx->pc = 0x182588u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_Finish_0x182588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EC0u; }
        else if (ctx->pc != 0x193EC0u) { ctx->pc = 0x193EC0u; }
    }
    if (ctx->pc != 0x193EC0u) { return; }
    ctx->pc = 0x193EC0u;
    // 0x193ec0: 0xdfbf0000
    ctx->pc = 0x193ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ec4: 0x102d
    ctx->pc = 0x193ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ec8: 0x3e00008
    ctx->pc = 0x193EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193ECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193ED0u;
}
