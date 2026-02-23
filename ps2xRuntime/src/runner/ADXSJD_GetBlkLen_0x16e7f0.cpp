#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetBlkLen
// Address: 0x16e7f0 - 0x16e80c
void ADXSJD_GetBlkLen_0x16e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetBlkLen");


    ctx->pc = 0x16e7f0u;

    // 0x16e7f0: 0x27bdfff0
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e7f4: 0xffbf0000
    ctx->pc = 0x16e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e7f8: 0xc05a01c
    ctx->pc = 0x16E7F8u;
    SET_GPR_U32(ctx, 31, 0x16E800u);
    ctx->pc = 0x16E7FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168070u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetBlkLen_0x168070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E800u; }
        else if (ctx->pc != 0x16E800u) { ctx->pc = 0x16E800u; }
    }
    if (ctx->pc != 0x16E800u) { return; }
    ctx->pc = 0x16E800u;
    // 0x16e800: 0xdfbf0000
    ctx->pc = 0x16e800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e804: 0x3e00008
    ctx->pc = 0x16E804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E80Cu;
}
