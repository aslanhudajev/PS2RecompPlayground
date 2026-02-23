#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetTotalNumSmpl
// Address: 0x16e810 - 0x16e82c
void ADXSJD_GetTotalNumSmpl_0x16e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetTotalNumSmpl");


    ctx->pc = 0x16e810u;

    // 0x16e810: 0x27bdfff0
    ctx->pc = 0x16e810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e814: 0xffbf0000
    ctx->pc = 0x16e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e818: 0xc05a01e
    ctx->pc = 0x16E818u;
    SET_GPR_U32(ctx, 31, 0x16E820u);
    ctx->pc = 0x16E81Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168078u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetTotalNumSmpl_0x168078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E820u; }
        else if (ctx->pc != 0x16E820u) { ctx->pc = 0x16E820u; }
    }
    if (ctx->pc != 0x16E820u) { return; }
    ctx->pc = 0x16E820u;
    // 0x16e820: 0xdfbf0000
    ctx->pc = 0x16e820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e824: 0x3e00008
    ctx->pc = 0x16E824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E82Cu;
}
