#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_GetRead
// Address: 0x195490 - 0x1954b0
void SFMPS_GetRead_0x195490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_GetRead");


    ctx->pc = 0x195490u;

    // 0x195490: 0x27bdfff0
    ctx->pc = 0x195490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195494: 0x3c05ff00
    ctx->pc = 0x195494u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195498: 0xffbf0000
    ctx->pc = 0x195498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19549c: 0xc064ea0
    ctx->pc = 0x19549Cu;
    SET_GPR_U32(ctx, 31, 0x1954A4u);
    ctx->pc = 0x1954A0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954A4u; }
        else if (ctx->pc != 0x1954A4u) { ctx->pc = 0x1954A4u; }
    }
    if (ctx->pc != 0x1954A4u) { return; }
    ctx->pc = 0x1954A4u;
    // 0x1954a4: 0xdfbf0000
    ctx->pc = 0x1954a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1954a8: 0x3e00008
    ctx->pc = 0x1954A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1954B0u;
}
