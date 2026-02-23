#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_TmrToMsec
// Address: 0x1a0fb8 - 0x1a0fdc
void UTY_TmrToMsec_0x1a0fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_TmrToMsec");


    ctx->pc = 0x1a0fb8u;

    // 0x1a0fb8: 0x27bdfff0
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0fbc: 0x3c050004
    ctx->pc = 0x1a0fbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4 << 16));
    // 0x1a0fc0: 0x34a58000
    ctx->pc = 0x1a0fc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32768));
    // 0x1a0fc4: 0xffbf0000
    ctx->pc = 0x1a0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0fc8: 0xc052114
    ctx->pc = 0x1A0FC8u;
    SET_GPR_U32(ctx, 31, 0x1A0FD0u);
    ctx->pc = 0x148450u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___divdi3_0x148450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FD0u; }
        else if (ctx->pc != 0x1A0FD0u) { ctx->pc = 0x1A0FD0u; }
    }
    if (ctx->pc != 0x1A0FD0u) { return; }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0xdfbf0000
    ctx->pc = 0x1a0fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0fd4: 0x3e00008
    ctx->pc = 0x1A0FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FDCu;
}
