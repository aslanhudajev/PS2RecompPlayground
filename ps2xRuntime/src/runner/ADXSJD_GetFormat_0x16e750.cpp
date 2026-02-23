#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetFormat
// Address: 0x16e750 - 0x16e76c
void ADXSJD_GetFormat_0x16e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetFormat");


    ctx->pc = 0x16e750u;

    // 0x16e750: 0x27bdfff0
    ctx->pc = 0x16e750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e754: 0xffbf0000
    ctx->pc = 0x16e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e758: 0xc059ffa
    ctx->pc = 0x16E758u;
    SET_GPR_U32(ctx, 31, 0x16E760u);
    ctx->pc = 0x16E75Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E760u; }
        else if (ctx->pc != 0x16E760u) { ctx->pc = 0x16E760u; }
    }
    if (ctx->pc != 0x16E760u) { return; }
    ctx->pc = 0x16E760u;
    // 0x16e760: 0xdfbf0000
    ctx->pc = 0x16e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e764: 0x3e00008
    ctx->pc = 0x16E764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E76Cu;
}
