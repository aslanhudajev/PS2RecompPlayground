#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_AddWrite
// Address: 0x190e60 - 0x190e80
void SFADXT_AddWrite_0x190e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_AddWrite");


    ctx->pc = 0x190e60u;

    // 0x190e60: 0x27bdfff0
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190e64: 0x3c05ff00
    ctx->pc = 0x190e64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190e68: 0xffbf0000
    ctx->pc = 0x190e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190e6c: 0xc064ea0
    ctx->pc = 0x190E6Cu;
    SET_GPR_U32(ctx, 31, 0x190E74u);
    ctx->pc = 0x190E70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E74u; }
        else if (ctx->pc != 0x190E74u) { ctx->pc = 0x190E74u; }
    }
    if (ctx->pc != 0x190E74u) { return; }
    ctx->pc = 0x190E74u;
    // 0x190e74: 0xdfbf0000
    ctx->pc = 0x190e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e78: 0x3e00008
    ctx->pc = 0x190E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190E80u;
}
