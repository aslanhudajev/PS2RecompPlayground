#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_Init
// Address: 0x16a0d8 - 0x16a108
void ADXERR_Init_0x16a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_Init");


    ctx->pc = 0x16a0d8u;

    // 0x16a0d8: 0x27bdfff0
    ctx->pc = 0x16a0d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a0dc: 0x3c040023
    ctx->pc = 0x16a0dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a0e0: 0xffbf0000
    ctx->pc = 0x16a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a0e4: 0x282d
    ctx->pc = 0x16a0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e8: 0x2484b490
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947984));
    // 0x16a0ec: 0xc050cfe
    ctx->pc = 0x16A0ECu;
    SET_GPR_U32(ctx, 31, 0x16A0F4u);
    ctx->pc = 0x16A0F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0F4u; }
        else if (ctx->pc != 0x16A0F4u) { ctx->pc = 0x16A0F4u; }
    }
    if (ctx->pc != 0x16A0F4u) { return; }
    ctx->pc = 0x16A0F4u;
    // 0x16a0f4: 0xdfbf0000
    ctx->pc = 0x16a0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a0f8: 0xaf808108
    ctx->pc = 0x16a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934792), GPR_U32(ctx, 0));
    // 0x16a0fc: 0xaf80810c
    ctx->pc = 0x16a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934796), GPR_U32(ctx, 0));
    // 0x16a100: 0x3e00008
    ctx->pc = 0x16A100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A104u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A108u;
}
