#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetLpStartOfst
// Address: 0x16e8b0 - 0x16e8cc
void ADXSJD_GetLpStartOfst_0x16e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetLpStartOfst");


    ctx->pc = 0x16e8b0u;

    // 0x16e8b0: 0x27bdfff0
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8b4: 0xffbf0000
    ctx->pc = 0x16e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8b8: 0xc05a028
    ctx->pc = 0x16E8B8u;
    SET_GPR_U32(ctx, 31, 0x16E8C0u);
    ctx->pc = 0x16E8BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1680A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetLpStartOfst_0x1680a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8C0u; }
        else if (ctx->pc != 0x16E8C0u) { ctx->pc = 0x16E8C0u; }
    }
    if (ctx->pc != 0x16E8C0u) { return; }
    ctx->pc = 0x16E8C0u;
    // 0x16e8c0: 0xdfbf0000
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8c4: 0x3e00008
    ctx->pc = 0x16E8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E8C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E8CCu;
}
