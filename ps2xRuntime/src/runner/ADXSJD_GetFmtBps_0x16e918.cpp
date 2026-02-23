#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetFmtBps
// Address: 0x16e918 - 0x16e934
void ADXSJD_GetFmtBps_0x16e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetFmtBps");


    ctx->pc = 0x16e918u;

    // 0x16e918: 0x27bdfff0
    ctx->pc = 0x16e918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e91c: 0xffbf0000
    ctx->pc = 0x16e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e920: 0xc05a000
    ctx->pc = 0x16E920u;
    SET_GPR_U32(ctx, 31, 0x16E928u);
    ctx->pc = 0x16E924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168000u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFmtBps_0x168000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E928u; }
        else if (ctx->pc != 0x16E928u) { ctx->pc = 0x16E928u; }
    }
    if (ctx->pc != 0x16E928u) { return; }
    ctx->pc = 0x16E928u;
    // 0x16e928: 0xdfbf0000
    ctx->pc = 0x16e928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e92c: 0x3e00008
    ctx->pc = 0x16E92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E934u;
}
