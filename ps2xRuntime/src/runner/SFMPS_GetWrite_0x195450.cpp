#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_GetWrite
// Address: 0x195450 - 0x195470
void SFMPS_GetWrite_0x195450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_GetWrite");


    ctx->pc = 0x195450u;

    // 0x195450: 0x27bdfff0
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195454: 0x3c05ff00
    ctx->pc = 0x195454u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195458: 0xffbf0000
    ctx->pc = 0x195458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19545c: 0xc064ea0
    ctx->pc = 0x19545Cu;
    SET_GPR_U32(ctx, 31, 0x195464u);
    ctx->pc = 0x195460u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195464u; }
        else if (ctx->pc != 0x195464u) { ctx->pc = 0x195464u; }
    }
    if (ctx->pc != 0x195464u) { return; }
    ctx->pc = 0x195464u;
    // 0x195464: 0xdfbf0000
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195468: 0x3e00008
    ctx->pc = 0x195468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19546Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195470u;
}
