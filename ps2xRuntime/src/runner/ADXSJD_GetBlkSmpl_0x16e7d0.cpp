#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetBlkSmpl
// Address: 0x16e7d0 - 0x16e7ec
void ADXSJD_GetBlkSmpl_0x16e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetBlkSmpl");


    ctx->pc = 0x16e7d0u;

    // 0x16e7d0: 0x27bdfff0
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e7d4: 0xffbf0000
    ctx->pc = 0x16e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e7d8: 0xc05a01a
    ctx->pc = 0x16E7D8u;
    SET_GPR_U32(ctx, 31, 0x16E7E0u);
    ctx->pc = 0x16E7DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168068u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetBlkSmpl_0x168068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7E0u; }
        else if (ctx->pc != 0x16E7E0u) { ctx->pc = 0x16E7E0u; }
    }
    if (ctx->pc != 0x16E7E0u) { return; }
    ctx->pc = 0x16E7E0u;
    // 0x16e7e0: 0xdfbf0000
    ctx->pc = 0x16e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7e4: 0x3e00008
    ctx->pc = 0x16E7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E7ECu;
}
