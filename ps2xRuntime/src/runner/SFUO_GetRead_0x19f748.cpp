#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFUO_GetRead
// Address: 0x19f748 - 0x19f768
void SFUO_GetRead_0x19f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFUO_GetRead");


    ctx->pc = 0x19f748u;

    // 0x19f748: 0x27bdfff0
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f74c: 0x3c05ff00
    ctx->pc = 0x19f74cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19f750: 0xffbf0000
    ctx->pc = 0x19f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f754: 0xc064ea0
    ctx->pc = 0x19F754u;
    SET_GPR_U32(ctx, 31, 0x19F75Cu);
    ctx->pc = 0x19F758u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1537));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F75Cu; }
        else if (ctx->pc != 0x19F75Cu) { ctx->pc = 0x19F75Cu; }
    }
    if (ctx->pc != 0x19F75Cu) { return; }
    ctx->pc = 0x19F75Cu;
    // 0x19f75c: 0xdfbf0000
    ctx->pc = 0x19f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f760: 0x3e00008
    ctx->pc = 0x19F760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F768u;
}
