#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_AddWrite
// Address: 0x195470 - 0x195490
void SFMPS_AddWrite_0x195470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_AddWrite");


    ctx->pc = 0x195470u;

    // 0x195470: 0x27bdfff0
    ctx->pc = 0x195470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195474: 0x3c05ff00
    ctx->pc = 0x195474u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195478: 0xffbf0000
    ctx->pc = 0x195478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19547c: 0xc064ea0
    ctx->pc = 0x19547Cu;
    SET_GPR_U32(ctx, 31, 0x195484u);
    ctx->pc = 0x195480u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195484u; }
        else if (ctx->pc != 0x195484u) { ctx->pc = 0x195484u; }
    }
    if (ctx->pc != 0x195484u) { return; }
    ctx->pc = 0x195484u;
    // 0x195484: 0xdfbf0000
    ctx->pc = 0x195484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195488: 0x3e00008
    ctx->pc = 0x195488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19548Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195490u;
}
