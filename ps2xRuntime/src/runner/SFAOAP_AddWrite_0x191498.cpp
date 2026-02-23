#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_AddWrite
// Address: 0x191498 - 0x1914b8
void SFAOAP_AddWrite_0x191498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_AddWrite");


    ctx->pc = 0x191498u;

    // 0x191498: 0x27bdfff0
    ctx->pc = 0x191498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19149c: 0x3c05ff00
    ctx->pc = 0x19149cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1914a0: 0xffbf0000
    ctx->pc = 0x1914a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1914a4: 0xc064ea0
    ctx->pc = 0x1914A4u;
    SET_GPR_U32(ctx, 31, 0x1914ACu);
    ctx->pc = 0x1914A8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914ACu; }
        else if (ctx->pc != 0x1914ACu) { ctx->pc = 0x1914ACu; }
    }
    if (ctx->pc != 0x1914ACu) { return; }
    ctx->pc = 0x1914ACu;
    // 0x1914ac: 0xdfbf0000
    ctx->pc = 0x1914acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1914b0: 0x3e00008
    ctx->pc = 0x1914B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1914B8u;
}
