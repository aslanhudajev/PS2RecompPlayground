#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_Finish
// Address: 0x19ed68 - 0x19ed84
void SFTRN_Finish_0x19ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_Finish");


    ctx->pc = 0x19ed68u;

    // 0x19ed68: 0x27bdfff0
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ed6c: 0xffbf0000
    ctx->pc = 0x19ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ed70: 0xc067b62
    ctx->pc = 0x19ED70u;
    SET_GPR_U32(ctx, 31, 0x19ED78u);
    ctx->pc = 0x19ED74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19ED88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_CallTrEntry_0x19ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED78u; }
        else if (ctx->pc != 0x19ED78u) { ctx->pc = 0x19ED78u; }
    }
    if (ctx->pc != 0x19ED78u) { return; }
    ctx->pc = 0x19ED78u;
    // 0x19ed78: 0xdfbf0000
    ctx->pc = 0x19ed78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ed7c: 0x3e00008
    ctx->pc = 0x19ED7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ED84u;
}
