#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFVOM_AddWrite
// Address: 0x19f988 - 0x19f9a8
void SFVOM_AddWrite_0x19f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFVOM_AddWrite");


    ctx->pc = 0x19f988u;

    // 0x19f988: 0x27bdfff0
    ctx->pc = 0x19f988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f98c: 0x3c05ff00
    ctx->pc = 0x19f98cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19f990: 0xffbf0000
    ctx->pc = 0x19f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f994: 0xc064ea0
    ctx->pc = 0x19F994u;
    SET_GPR_U32(ctx, 31, 0x19F99Cu);
    ctx->pc = 0x19F998u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1793));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F99Cu; }
        else if (ctx->pc != 0x19F99Cu) { ctx->pc = 0x19F99Cu; }
    }
    if (ctx->pc != 0x19F99Cu) { return; }
    ctx->pc = 0x19F99Cu;
    // 0x19f99c: 0xdfbf0000
    ctx->pc = 0x19f99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f9a0: 0x3e00008
    ctx->pc = 0x19F9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F9A8u;
}
