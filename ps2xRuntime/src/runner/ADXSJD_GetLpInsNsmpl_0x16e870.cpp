#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetLpInsNsmpl
// Address: 0x16e870 - 0x16e88c
void ADXSJD_GetLpInsNsmpl_0x16e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetLpInsNsmpl");


    ctx->pc = 0x16e870u;

    // 0x16e870: 0x27bdfff0
    ctx->pc = 0x16e870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e874: 0xffbf0000
    ctx->pc = 0x16e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e878: 0xc05a022
    ctx->pc = 0x16E878u;
    SET_GPR_U32(ctx, 31, 0x16E880u);
    ctx->pc = 0x16E87Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168088u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetLpInsNsmpl_0x168088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E880u; }
        else if (ctx->pc != 0x16E880u) { ctx->pc = 0x16E880u; }
    }
    if (ctx->pc != 0x16E880u) { return; }
    ctx->pc = 0x16E880u;
    // 0x16e880: 0xdfbf0000
    ctx->pc = 0x16e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e884: 0x3e00008
    ctx->pc = 0x16E884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E888u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E88Cu;
}
