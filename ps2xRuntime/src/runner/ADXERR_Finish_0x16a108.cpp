#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_Finish
// Address: 0x16a108 - 0x16a138
void ADXERR_Finish_0x16a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_Finish");


    ctx->pc = 0x16a108u;

    // 0x16a108: 0x27bdfff0
    ctx->pc = 0x16a108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a10c: 0x3c040023
    ctx->pc = 0x16a10cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a110: 0xffbf0000
    ctx->pc = 0x16a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a114: 0x282d
    ctx->pc = 0x16a114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a118: 0x2484b490
    ctx->pc = 0x16a118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947984));
    // 0x16a11c: 0xc050cfe
    ctx->pc = 0x16A11Cu;
    SET_GPR_U32(ctx, 31, 0x16A124u);
    ctx->pc = 0x16A120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A124u; }
        else if (ctx->pc != 0x16A124u) { ctx->pc = 0x16A124u; }
    }
    if (ctx->pc != 0x16A124u) { return; }
    ctx->pc = 0x16A124u;
    // 0x16a124: 0xdfbf0000
    ctx->pc = 0x16a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a128: 0xaf808108
    ctx->pc = 0x16a128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934792), GPR_U32(ctx, 0));
    // 0x16a12c: 0xaf80810c
    ctx->pc = 0x16a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934796), GPR_U32(ctx, 0));
    // 0x16a130: 0x3e00008
    ctx->pc = 0x16A130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A138u;
}
