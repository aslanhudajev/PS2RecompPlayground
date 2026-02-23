#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdGetOutVol
// Address: 0x18d5b0 - 0x18d5cc
void mwSfdGetOutVol_0x18d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdGetOutVol");


    ctx->pc = 0x18d5b0u;

    // 0x18d5b0: 0x27bdfff0
    ctx->pc = 0x18d5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d5b4: 0xffbf0000
    ctx->pc = 0x18d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d5b8: 0xc06384e
    ctx->pc = 0x18D5B8u;
    SET_GPR_U32(ctx, 31, 0x18D5C0u);
    ctx->pc = 0x18E138u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFRNA_GetOutVol_0x18e138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5C0u; }
        else if (ctx->pc != 0x18D5C0u) { ctx->pc = 0x18D5C0u; }
    }
    if (ctx->pc != 0x18D5C0u) { return; }
    ctx->pc = 0x18D5C0u;
    // 0x18d5c0: 0xdfbf0000
    ctx->pc = 0x18d5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d5c4: 0x3e00008
    ctx->pc = 0x18D5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D5C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D5CCu;
}
