#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsActiveFsSvr
// Address: 0x16c460 - 0x16c47c
void ADXT_IsActiveFsSvr_0x16c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsActiveFsSvr");


    ctx->pc = 0x16c460u;

    // 0x16c460: 0x27bdfff0
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c464: 0xffbf0000
    ctx->pc = 0x16c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c468: 0xc05d8f0
    ctx->pc = 0x16C468u;
    SET_GPR_U32(ctx, 31, 0x16C470u);
    ctx->pc = 0x1763C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_IsExecute_0x1763c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C470u; }
        else if (ctx->pc != 0x16C470u) { ctx->pc = 0x16C470u; }
    }
    if (ctx->pc != 0x16C470u) { return; }
    ctx->pc = 0x16C470u;
    // 0x16c470: 0xdfbf0000
    ctx->pc = 0x16c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c474: 0x3e00008
    ctx->pc = 0x16C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C47Cu;
}
