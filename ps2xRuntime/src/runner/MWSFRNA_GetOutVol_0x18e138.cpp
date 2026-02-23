#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFRNA_GetOutVol
// Address: 0x18e138 - 0x18e154
void MWSFRNA_GetOutVol_0x18e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFRNA_GetOutVol");


    ctx->pc = 0x18e138u;

    // 0x18e138: 0x27bdfff0
    ctx->pc = 0x18e138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e13c: 0xffbf0000
    ctx->pc = 0x18e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e140: 0xc06443a
    ctx->pc = 0x18E140u;
    SET_GPR_U32(ctx, 31, 0x18E148u);
    ctx->pc = 0x18E144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x1910E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetOutVol_0x1910e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E148u; }
        else if (ctx->pc != 0x18E148u) { ctx->pc = 0x18E148u; }
    }
    if (ctx->pc != 0x18E148u) { return; }
    ctx->pc = 0x18E148u;
    // 0x18e148: 0xdfbf0000
    ctx->pc = 0x18e148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e14c: 0x3e00008
    ctx->pc = 0x18E14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E154u;
}
