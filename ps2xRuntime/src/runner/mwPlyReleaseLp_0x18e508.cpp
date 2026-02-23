#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyReleaseLp
// Address: 0x18e508 - 0x18e534
void mwPlyReleaseLp_0x18e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyReleaseLp");


    ctx->pc = 0x18e508u;

    // 0x18e508: 0x27bdffe0
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e50c: 0x282d
    ctx->pc = 0x18e50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e510: 0xffb00000
    ctx->pc = 0x18e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e514: 0xffbf0010
    ctx->pc = 0x18e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e518: 0xc06392c
    ctx->pc = 0x18E518u;
    SET_GPR_U32(ctx, 31, 0x18E520u);
    ctx->pc = 0x18E51Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySetLpFlg_0x18e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E520u; }
        else if (ctx->pc != 0x18E520u) { ctx->pc = 0x18E520u; }
    }
    if (ctx->pc != 0x18E520u) { return; }
    ctx->pc = 0x18E520u;
    // 0x18e520: 0x200202d
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e524: 0xdfbf0010
    ctx->pc = 0x18e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e528: 0xdfb00000
    ctx->pc = 0x18e528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e52c: 0x806394e
    ctx->pc = 0x18E52Cu;
    ctx->pc = 0x18E530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x18E538u;
    mwPlyReleaseSeamless_0x18e538(rdram, ctx, runtime); return;
    ctx->pc = 0x18E534u;
}
