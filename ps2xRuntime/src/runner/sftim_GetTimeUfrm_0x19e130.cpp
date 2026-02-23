#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_GetTimeUfrm
// Address: 0x19e130 - 0x19e150
void sftim_GetTimeUfrm_0x19e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_GetTimeUfrm");


    ctx->pc = 0x19e130u;

    // 0x19e130: 0x27bdfff0
    ctx->pc = 0x19e130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e134: 0xffbf0000
    ctx->pc = 0x19e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e138: 0xc067854
    ctx->pc = 0x19E138u;
    SET_GPR_U32(ctx, 31, 0x19E140u);
    ctx->pc = 0x19E150u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_ChkRegularTime_0x19e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E140u; }
        else if (ctx->pc != 0x19E140u) { ctx->pc = 0x19E140u; }
    }
    if (ctx->pc != 0x19E140u) { return; }
    ctx->pc = 0x19E140u;
    // 0x19e140: 0xdfbf0000
    ctx->pc = 0x19e140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e144: 0x102d
    ctx->pc = 0x19e144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e148: 0x3e00008
    ctx->pc = 0x19E148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E14Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E150u;
}
