#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsIbufSafety
// Address: 0x1724f8 - 0x172544
void ADXT_IsIbufSafety_0x1724f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsIbufSafety");


    ctx->pc = 0x1724f8u;

label_1724f8:
    // 0x1724f8: 0x27bdffe0
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1724fc:
    // 0x1724fc: 0xffb00000
    ctx->pc = 0x1724fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_172500:
    // 0x172500: 0xffbf0010
    ctx->pc = 0x172500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_172504:
    // 0x172504: 0x80802d
    ctx->pc = 0x172504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172508:
    // 0x172508: 0x8e040014
    ctx->pc = 0x172508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17250c:
    // 0x17250c: 0x50800009
label_172510:
    if (ctx->pc == 0x172510u) {
        ctx->pc = 0x172510u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172514u;
        goto label_172514;
    }
    ctx->pc = 0x17250Cu;
    {
        const bool branch_taken_0x17250c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17250c) {
            ctx->pc = 0x172510u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172534u;
            goto label_172534;
        }
    }
    ctx->pc = 0x172514u;
label_172514:
    // 0x172514: 0x8c830000
    ctx->pc = 0x172514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172518:
    // 0x172518: 0x8c620024
    ctx->pc = 0x172518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17251c:
    // 0x17251c: 0x40f809
label_172520:
    if (ctx->pc == 0x172520u) {
        ctx->pc = 0x172520u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x172524u;
        goto label_172524;
    }
    ctx->pc = 0x17251Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172524u);
        ctx->pc = 0x172520u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1724F8u: goto label_1724f8;
            case 0x1724FCu: goto label_1724fc;
            case 0x172500u: goto label_172500;
            case 0x172504u: goto label_172504;
            case 0x172508u: goto label_172508;
            case 0x17250Cu: goto label_17250c;
            case 0x172510u: goto label_172510;
            case 0x172514u: goto label_172514;
            case 0x172518u: goto label_172518;
            case 0x17251Cu: goto label_17251c;
            case 0x172520u: goto label_172520;
            case 0x172524u: goto label_172524;
            case 0x172528u: goto label_172528;
            case 0x17252Cu: goto label_17252c;
            case 0x172530u: goto label_172530;
            case 0x172534u: goto label_172534;
            case 0x172538u: goto label_172538;
            case 0x17253Cu: goto label_17253c;
            case 0x172540u: goto label_172540;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172524u; }
            if (ctx->pc != 0x172524u) { return; }
        }
    }
    ctx->pc = 0x172524u;
label_172524:
    // 0x172524: 0x8603003e
    ctx->pc = 0x172524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_172528:
    // 0x172528: 0x31ac0
    ctx->pc = 0x172528u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
label_17252c:
    // 0x17252c: 0x43102a
    ctx->pc = 0x17252cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_172530:
    // 0x172530: 0x38420001
    ctx->pc = 0x172530u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_172534:
    // 0x172534: 0xdfbf0010
    ctx->pc = 0x172534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172538:
    // 0x172538: 0xdfb00000
    ctx->pc = 0x172538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17253c:
    // 0x17253c: 0x3e00008
label_172540:
    if (ctx->pc == 0x172540u) {
        ctx->pc = 0x172540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x172544u;
        goto label_fallthrough_0x17253c;
    }
    ctx->pc = 0x17253Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1724F8u: goto label_1724f8;
            case 0x1724FCu: goto label_1724fc;
            case 0x172500u: goto label_172500;
            case 0x172504u: goto label_172504;
            case 0x172508u: goto label_172508;
            case 0x17250Cu: goto label_17250c;
            case 0x172510u: goto label_172510;
            case 0x172514u: goto label_172514;
            case 0x172518u: goto label_172518;
            case 0x17251Cu: goto label_17251c;
            case 0x172520u: goto label_172520;
            case 0x172524u: goto label_172524;
            case 0x172528u: goto label_172528;
            case 0x17252Cu: goto label_17252c;
            case 0x172530u: goto label_172530;
            case 0x172534u: goto label_172534;
            case 0x172538u: goto label_172538;
            case 0x17253Cu: goto label_17253c;
            case 0x172540u: goto label_172540;
            default: break;
        }
        return;
    }
label_fallthrough_0x17253c:
    ctx->pc = 0x172544u;
}
