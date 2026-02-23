#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFRNA_GetOutPan
// Address: 0x18e160 - 0x18e17c
void MWSFRNA_GetOutPan_0x18e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFRNA_GetOutPan");


    ctx->pc = 0x18e160u;

    // 0x18e160: 0x27bdfff0
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e164: 0xffbf0000
    ctx->pc = 0x18e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e168: 0xc0643fe
    ctx->pc = 0x18E168u;
    SET_GPR_U32(ctx, 31, 0x18E170u);
    ctx->pc = 0x18E16Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x190FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetOutPan_0x190ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E170u; }
        else if (ctx->pc != 0x18E170u) { ctx->pc = 0x18E170u; }
    }
    if (ctx->pc != 0x18E170u) { return; }
    ctx->pc = 0x18E170u;
    // 0x18e170: 0xdfbf0000
    ctx->pc = 0x18e170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e174: 0x3e00008
    ctx->pc = 0x18E174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E17Cu;
}
