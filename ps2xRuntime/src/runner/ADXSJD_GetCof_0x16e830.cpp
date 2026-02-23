#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetCof
// Address: 0x16e830 - 0x16e84c
void ADXSJD_GetCof_0x16e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetCof");


    ctx->pc = 0x16e830u;

    // 0x16e830: 0x27bdfff0
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e834: 0xffbf0000
    ctx->pc = 0x16e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e838: 0xc05a020
    ctx->pc = 0x16E838u;
    SET_GPR_U32(ctx, 31, 0x16E840u);
    ctx->pc = 0x16E83Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetCof_0x168080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E840u; }
        else if (ctx->pc != 0x16E840u) { ctx->pc = 0x16E840u; }
    }
    if (ctx->pc != 0x16E840u) { return; }
    ctx->pc = 0x16E840u;
    // 0x16e840: 0xdfbf0000
    ctx->pc = 0x16e840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e844: 0x3e00008
    ctx->pc = 0x16E844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E848u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E84Cu;
}
