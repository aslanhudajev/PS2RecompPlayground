#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetLpEndPos
// Address: 0x16e8d0 - 0x16e8ec
void ADXSJD_GetLpEndPos_0x16e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetLpEndPos");


    ctx->pc = 0x16e8d0u;

    // 0x16e8d0: 0x27bdfff0
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e8d4: 0xffbf0000
    ctx->pc = 0x16e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e8d8: 0xc05a02a
    ctx->pc = 0x16E8D8u;
    SET_GPR_U32(ctx, 31, 0x16E8E0u);
    ctx->pc = 0x16E8DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1680A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetLpEndPos_0x1680a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8E0u; }
        else if (ctx->pc != 0x16E8E0u) { ctx->pc = 0x16E8E0u; }
    }
    if (ctx->pc != 0x16E8E0u) { return; }
    ctx->pc = 0x16E8E0u;
    // 0x16e8e0: 0xdfbf0000
    ctx->pc = 0x16e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8e4: 0x3e00008
    ctx->pc = 0x16E8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E8E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E8ECu;
}
