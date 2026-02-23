#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_GetRead
// Address: 0x1914b8 - 0x1914d8
void SFAOAP_GetRead_0x1914b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_GetRead");


    ctx->pc = 0x1914b8u;

    // 0x1914b8: 0x27bdfff0
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1914bc: 0x3c05ff00
    ctx->pc = 0x1914bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1914c0: 0xffbf0000
    ctx->pc = 0x1914c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1914c4: 0xc064ea0
    ctx->pc = 0x1914C4u;
    SET_GPR_U32(ctx, 31, 0x1914CCu);
    ctx->pc = 0x1914C8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2561));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914CCu; }
        else if (ctx->pc != 0x1914CCu) { ctx->pc = 0x1914CCu; }
    }
    if (ctx->pc != 0x1914CCu) { return; }
    ctx->pc = 0x1914CCu;
    // 0x1914cc: 0xdfbf0000
    ctx->pc = 0x1914ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1914d0: 0x3e00008
    ctx->pc = 0x1914D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1914D8u;
}
