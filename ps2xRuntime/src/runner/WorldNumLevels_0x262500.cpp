#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldNumLevels
// Address: 0x262500 - 0x262558
void WorldNumLevels_0x262500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262500u;

    // 0x262500: 0x3c020034
    ctx->pc = 0x262500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262504: 0x8c42e520
    ctx->pc = 0x262504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294960416)));
    // 0x262508: 0x1044000c
    ctx->pc = 0x262508u;
    {
        const bool branch_taken_0x262508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x26250Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262508) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x262510u;
    // 0x262510: 0x3c020034
    ctx->pc = 0x262510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262514: 0x2447e520
    ctx->pc = 0x262514u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294960416));
    // 0x262518: 0x2403002c
    ctx->pc = 0x262518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x26251c: 0x24a50001
    ctx->pc = 0x26251cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_262520:
    // 0x262520: 0x2ca2000e
    ctx->pc = 0x262520u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 14));
    // 0x262524: 0x10400005
    ctx->pc = 0x262524u;
    {
        const bool branch_taken_0x262524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262528u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262524) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x26252Cu;
    // 0x26252c: 0xc71021
    ctx->pc = 0x26252cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x262530: 0x8c420000
    ctx->pc = 0x262530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262534: 0x5444fffa
    ctx->pc = 0x262534u;
    {
        const bool branch_taken_0x262534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x262534) {
            ctx->pc = 0x262538u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x262520u;
            goto label_262520;
        }
    }
    ctx->pc = 0x26253Cu;
label_26253c:
    // 0x26253c: 0x3c030034
    ctx->pc = 0x26253cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x262540: 0x2463e520
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x262544: 0x2402002c
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x262548: 0xa21018
    ctx->pc = 0x262548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26254c: 0x621821
    ctx->pc = 0x26254cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262550: 0x3e00008
    ctx->pc = 0x262550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262554u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262520u: goto label_262520;
            case 0x26253Cu: goto label_26253c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262558u;
}
