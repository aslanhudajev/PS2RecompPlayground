#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetSfreq
// Address: 0x16e770 - 0x16e78c
void ADXSJD_GetSfreq_0x16e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetSfreq");


    ctx->pc = 0x16e770u;

    // 0x16e770: 0x27bdfff0
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e774: 0xffbf0000
    ctx->pc = 0x16e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e778: 0xc059ffc
    ctx->pc = 0x16E778u;
    SET_GPR_U32(ctx, 31, 0x16E780u);
    ctx->pc = 0x16E77Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x167FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetSfreq_0x167ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E780u; }
        else if (ctx->pc != 0x16E780u) { ctx->pc = 0x16E780u; }
    }
    if (ctx->pc != 0x16E780u) { return; }
    ctx->pc = 0x16E780u;
    // 0x16e780: 0xdfbf0000
    ctx->pc = 0x16e780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e784: 0x3e00008
    ctx->pc = 0x16E784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E78Cu;
}
