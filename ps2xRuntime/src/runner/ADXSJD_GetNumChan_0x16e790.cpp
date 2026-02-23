#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetNumChan
// Address: 0x16e790 - 0x16e7ac
void ADXSJD_GetNumChan_0x16e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetNumChan");


    ctx->pc = 0x16e790u;

    // 0x16e790: 0x27bdfff0
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e794: 0xffbf0000
    ctx->pc = 0x16e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e798: 0xc059ffe
    ctx->pc = 0x16E798u;
    SET_GPR_U32(ctx, 31, 0x16E7A0u);
    ctx->pc = 0x16E79Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x167FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetNumChan_0x167ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7A0u; }
        else if (ctx->pc != 0x16E7A0u) { ctx->pc = 0x16E7A0u; }
    }
    if (ctx->pc != 0x16E7A0u) { return; }
    ctx->pc = 0x16E7A0u;
    // 0x16e7a0: 0xdfbf0000
    ctx->pc = 0x16e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7a4: 0x3e00008
    ctx->pc = 0x16E7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E7ACu;
}
