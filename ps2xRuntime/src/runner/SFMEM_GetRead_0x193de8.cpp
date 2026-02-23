#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMEM_GetRead
// Address: 0x193de8 - 0x193e08
void SFMEM_GetRead_0x193de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMEM_GetRead");


    ctx->pc = 0x193de8u;

    // 0x193de8: 0x27bdfff0
    ctx->pc = 0x193de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193dec: 0x3c05ff00
    ctx->pc = 0x193decu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x193df0: 0xffbf0000
    ctx->pc = 0x193df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193df4: 0xc064ea0
    ctx->pc = 0x193DF4u;
    SET_GPR_U32(ctx, 31, 0x193DFCu);
    ctx->pc = 0x193DF8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1281));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193DFCu; }
        else if (ctx->pc != 0x193DFCu) { ctx->pc = 0x193DFCu; }
    }
    if (ctx->pc != 0x193DFCu) { return; }
    ctx->pc = 0x193DFCu;
    // 0x193dfc: 0xdfbf0000
    ctx->pc = 0x193dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e00: 0x3e00008
    ctx->pc = 0x193E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193E08u;
}
