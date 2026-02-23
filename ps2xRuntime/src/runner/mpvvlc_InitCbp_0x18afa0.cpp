#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitCbp
// Address: 0x18afa0 - 0x18afc4
void mpvvlc_InitCbp_0x18afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitCbp");


    ctx->pc = 0x18afa0u;

    // 0x18afa0: 0x27bdfff0
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18afa4: 0x3c040024
    ctx->pc = 0x18afa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18afa8: 0xffbf0000
    ctx->pc = 0x18afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18afac: 0xc062bf2
    ctx->pc = 0x18AFACu;
    SET_GPR_U32(ctx, 31, 0x18AFB4u);
    ctx->pc = 0x18AFB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8568));
    ctx->pc = 0x18AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitCbpSub1_0x18afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFB4u; }
        else if (ctx->pc != 0x18AFB4u) { ctx->pc = 0x18AFB4u; }
    }
    if (ctx->pc != 0x18AFB4u) { return; }
    ctx->pc = 0x18AFB4u;
    // 0x18afb4: 0xdfbf0000
    ctx->pc = 0x18afb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18afb8: 0x40202d
    ctx->pc = 0x18afb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afbc: 0x8062d54
    ctx->pc = 0x18AFBCu;
    ctx->pc = 0x18AFC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18B550u;
    mpvvlc_InitCbpSub2_0x18b550(rdram, ctx, runtime); return;
    ctx->pc = 0x18AFC4u;
}
