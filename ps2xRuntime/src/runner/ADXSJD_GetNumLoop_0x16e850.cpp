#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetNumLoop
// Address: 0x16e850 - 0x16e86c
void ADXSJD_GetNumLoop_0x16e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetNumLoop");


    ctx->pc = 0x16e850u;

    // 0x16e850: 0x27bdfff0
    ctx->pc = 0x16e850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e854: 0xffbf0000
    ctx->pc = 0x16e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e858: 0xc05a024
    ctx->pc = 0x16E858u;
    SET_GPR_U32(ctx, 31, 0x16E860u);
    ctx->pc = 0x16E85Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168090u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetNumLoop_0x168090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E860u; }
        else if (ctx->pc != 0x16E860u) { ctx->pc = 0x16E860u; }
    }
    if (ctx->pc != 0x16E860u) { return; }
    ctx->pc = 0x16E860u;
    // 0x16e860: 0xdfbf0000
    ctx->pc = 0x16e860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e864: 0x3e00008
    ctx->pc = 0x16E864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E86Cu;
}
