#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdGetOutPan
// Address: 0x18d5d8 - 0x18d5f4
void mwSfdGetOutPan_0x18d5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdGetOutPan");


    ctx->pc = 0x18d5d8u;

    // 0x18d5d8: 0x27bdfff0
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d5dc: 0xffbf0000
    ctx->pc = 0x18d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d5e0: 0xc063858
    ctx->pc = 0x18D5E0u;
    SET_GPR_U32(ctx, 31, 0x18D5E8u);
    ctx->pc = 0x18E160u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFRNA_GetOutPan_0x18e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5E8u; }
        else if (ctx->pc != 0x18D5E8u) { ctx->pc = 0x18D5E8u; }
    }
    if (ctx->pc != 0x18D5E8u) { return; }
    ctx->pc = 0x18D5E8u;
    // 0x18d5e8: 0xdfbf0000
    ctx->pc = 0x18d5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d5ec: 0x3e00008
    ctx->pc = 0x18D5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D5F4u;
}
