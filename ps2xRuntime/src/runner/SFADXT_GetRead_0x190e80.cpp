#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_GetRead
// Address: 0x190e80 - 0x190ea0
void SFADXT_GetRead_0x190e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_GetRead");


    ctx->pc = 0x190e80u;

    // 0x190e80: 0x27bdfff0
    ctx->pc = 0x190e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190e84: 0x3c05ff00
    ctx->pc = 0x190e84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190e88: 0xffbf0000
    ctx->pc = 0x190e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190e8c: 0xc064ea0
    ctx->pc = 0x190E8Cu;
    SET_GPR_U32(ctx, 31, 0x190E94u);
    ctx->pc = 0x190E90u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E94u; }
        else if (ctx->pc != 0x190E94u) { ctx->pc = 0x190E94u; }
    }
    if (ctx->pc != 0x190E94u) { return; }
    ctx->pc = 0x190E94u;
    // 0x190e94: 0xdfbf0000
    ctx->pc = 0x190e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e98: 0x3e00008
    ctx->pc = 0x190E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190E9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190EA0u;
}
