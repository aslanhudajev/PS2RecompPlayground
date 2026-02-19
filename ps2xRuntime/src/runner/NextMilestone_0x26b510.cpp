#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextMilestone
// Address: 0x26b510 - 0x26b560
void NextMilestone_0x26b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b510u;

    // 0x26b510: 0x3c020034
    ctx->pc = 0x26b510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b514: 0x8c45c380
    ctx->pc = 0x26b514u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x26b518: 0x3c020034
    ctx->pc = 0x26b518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b51c: 0x2442eb60
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b520: 0x240301a0
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b524: 0x832018
    ctx->pc = 0x26b524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b528: 0x822021
    ctx->pc = 0x26b528u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b52c: 0x8c860118
    ctx->pc = 0x26b52cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x26b530: 0xc5102a
    ctx->pc = 0x26b530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x26b534: 0x18a00008
    ctx->pc = 0x26B534u;
    {
        const bool branch_taken_0x26b534 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26B538u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
        if (branch_taken_0x26b534) {
            ctx->pc = 0x26B558u;
            goto label_26b558;
        }
    }
    ctx->pc = 0x26B53Cu;
    // 0x26b53c: 0x24030070
    ctx->pc = 0x26b53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x26b540: 0xc31818
    ctx->pc = 0x26b540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b544: 0x3c020034
    ctx->pc = 0x26b544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b548: 0x24428b80
    ctx->pc = 0x26b548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x26b54c: 0xac860118
    ctx->pc = 0x26b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x26b550: 0x3e00008
    ctx->pc = 0x26B550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B554u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B558u: goto label_26b558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B558u;
label_26b558:
    // 0x26b558: 0x3e00008
    ctx->pc = 0x26B558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B55Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B558u: goto label_26b558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B560u;
}
