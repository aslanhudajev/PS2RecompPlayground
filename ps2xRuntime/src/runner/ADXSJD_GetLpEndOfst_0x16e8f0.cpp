#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetLpEndOfst
// Address: 0x16e8f0 - 0x16e90c
void ADXSJD_GetLpEndOfst_0x16e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetLpEndOfst");


    ctx->pc = 0x16e8f0u;

    // 0x16e8f0: 0x27bdfff0
    ctx->pc = 0x16e8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8f4: 0xffbf0000
    ctx->pc = 0x16e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8f8: 0xc05a02c
    ctx->pc = 0x16E8F8u;
    SET_GPR_U32(ctx, 31, 0x16E900u);
    ctx->pc = 0x16E8FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1680B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetLpEndOfst_0x1680b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E900u; }
        else if (ctx->pc != 0x16E900u) { ctx->pc = 0x16E900u; }
    }
    if (ctx->pc != 0x16E900u) { return; }
    ctx->pc = 0x16E900u;
    // 0x16e900: 0xdfbf0000
    ctx->pc = 0x16e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e904: 0x3e00008
    ctx->pc = 0x16E904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E90Cu;
}
