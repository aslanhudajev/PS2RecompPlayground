#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_CheckDelim
// Address: 0x182190 - 0x1821ac
void MPS_CheckDelim_0x182190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_CheckDelim");


    ctx->pc = 0x182190u;

    // 0x182190: 0x27bdfff0
    ctx->pc = 0x182190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182194: 0xffbf0000
    ctx->pc = 0x182194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182198: 0xc06086c
    ctx->pc = 0x182198u;
    SET_GPR_U32(ctx, 31, 0x1821A0u);
    ctx->pc = 0x1821B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEL_CheckDelim_0x1821b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821A0u; }
        else if (ctx->pc != 0x1821A0u) { ctx->pc = 0x1821A0u; }
    }
    if (ctx->pc != 0x1821A0u) { return; }
    ctx->pc = 0x1821A0u;
    // 0x1821a0: 0xdfbf0000
    ctx->pc = 0x1821a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1821a4: 0x3e00008
    ctx->pc = 0x1821A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1821A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1821ACu;
}
