#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_Pause
// Address: 0x191420 - 0x191478
void SFAOAP_Pause_0x191420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_Pause");


    ctx->pc = 0x191420u;

    // 0x191420: 0x27bdffd0
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191424: 0xffb10010
    ctx->pc = 0x191424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x191428: 0xffb00000
    ctx->pc = 0x191428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19142c: 0xa0882d
    ctx->pc = 0x19142cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191430: 0x80802d
    ctx->pc = 0x191430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191434: 0xffbf0020
    ctx->pc = 0x191434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191438: 0xc0674c2
    ctx->pc = 0x191438u;
    SET_GPR_U32(ctx, 31, 0x191440u);
    ctx->pc = 0x19143Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191440u; }
        else if (ctx->pc != 0x191440u) { ctx->pc = 0x191440u; }
    }
    if (ctx->pc != 0x191440u) { return; }
    ctx->pc = 0x191440u;
    // 0x191440: 0x14400003
    ctx->pc = 0x191440u;
    {
        const bool branch_taken_0x191440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191444u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191440) {
            ctx->pc = 0x191450u;
            goto label_191450;
        }
    }
    ctx->pc = 0x191448u;
    // 0x191448: 0x10000006
    ctx->pc = 0x191448u;
    {
        const bool branch_taken_0x191448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19144Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191448) {
            ctx->pc = 0x191464u;
            goto label_191464;
        }
    }
    ctx->pc = 0x191450u;
label_191450:
    // 0x191450: 0x220382d
    ctx->pc = 0x191450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191454: 0x24050003
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x191458: 0x24060008
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19145c: 0xc067cca
    ctx->pc = 0x19145Cu;
    SET_GPR_U32(ctx, 31, 0x191464u);
    ctx->pc = 0x191460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191464u; }
        else if (ctx->pc != 0x191464u) { ctx->pc = 0x191464u; }
    }
    if (ctx->pc != 0x191464u) { return; }
    ctx->pc = 0x191464u;
label_191464:
    // 0x191464: 0xdfbf0020
    ctx->pc = 0x191464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191468: 0xdfb10010
    ctx->pc = 0x191468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19146c: 0xdfb00000
    ctx->pc = 0x19146cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191470: 0x3e00008
    ctx->pc = 0x191470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191474u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191450u: goto label_191450;
            case 0x191464u: goto label_191464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191478u;
}
