#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_no_assignment
// Address: 0x2070b0 - 0x2070f8
void start_no_assignment_0x2070b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2070b0u;

    // 0x2070b0: 0x182d
    ctx->pc = 0x2070b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070b4: 0x3c02003c
    ctx->pc = 0x2070b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2070b8: 0x2445b2c0
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x2070bc: 0x3c040004
    ctx->pc = 0x2070bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    // 0x2070c0: 0x31080
    ctx->pc = 0x2070c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2070c4: 0x0
    ctx->pc = 0x2070c4u;
    // NOP
label_2070c8:
    // 0x2070c8: 0x451021
    ctx->pc = 0x2070c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2070cc: 0x8c420000
    ctx->pc = 0x2070ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2070d0: 0x441024
    ctx->pc = 0x2070d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2070d4: 0x10400003
    ctx->pc = 0x2070D4u;
    {
        const bool branch_taken_0x2070d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2070D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2070d4) {
            ctx->pc = 0x2070E4u;
            goto label_2070e4;
        }
    }
    ctx->pc = 0x2070DCu;
    // 0x2070dc: 0x3e00008
    ctx->pc = 0x2070DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2070C8u: goto label_2070c8;
            case 0x2070E4u: goto label_2070e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2070E4u;
label_2070e4:
    // 0x2070e4: 0x28620008
    ctx->pc = 0x2070e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x2070e8: 0x1440fff7
    ctx->pc = 0x2070E8u;
    {
        const bool branch_taken_0x2070e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2070ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2070e8) {
            ctx->pc = 0x2070C8u;
            goto label_2070c8;
        }
    }
    ctx->pc = 0x2070F0u;
    // 0x2070f0: 0x3e00008
    ctx->pc = 0x2070F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2070C8u: goto label_2070c8;
            case 0x2070E4u: goto label_2070e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2070F8u;
}
