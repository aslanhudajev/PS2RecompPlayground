#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: there_is_got_it
// Address: 0x22b338 - 0x22b394
void there_is_got_it_0x22b338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b338u;

    // 0x22b338: 0x282d
    ctx->pc = 0x22b338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b33c: 0x3c020033
    ctx->pc = 0x22b33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b340: 0x2448cb70
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x22b344: 0x2407001c
    ctx->pc = 0x22b344u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 28));
    // 0x22b348: 0x3c020033
    ctx->pc = 0x22b348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b34c: 0x2446cb74
    ctx->pc = 0x22b34cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294953844));
    // 0x22b350: 0xa71818
    ctx->pc = 0x22b350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22b354: 0x0
    ctx->pc = 0x22b354u;
    // NOP
label_22b358:
    // 0x22b358: 0x661021
    ctx->pc = 0x22b358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22b35c: 0x8c420000
    ctx->pc = 0x22b35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b360: 0x14440007
    ctx->pc = 0x22B360u;
    {
        const bool branch_taken_0x22b360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x22B364u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x22b360) {
            ctx->pc = 0x22B380u;
            goto label_22b380;
        }
    }
    ctx->pc = 0x22B368u;
    // 0x22b368: 0x681021
    ctx->pc = 0x22b368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22b36c: 0x8c420000
    ctx->pc = 0x22b36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b370: 0x10400004
    ctx->pc = 0x22B370u;
    {
        const bool branch_taken_0x22b370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B374u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
        if (branch_taken_0x22b370) {
            ctx->pc = 0x22B384u;
            goto label_22b384;
        }
    }
    ctx->pc = 0x22B378u;
    // 0x22b378: 0x3e00008
    ctx->pc = 0x22B378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B37Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B358u: goto label_22b358;
            case 0x22B380u: goto label_22b380;
            case 0x22B384u: goto label_22b384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B380u;
label_22b380:
    // 0x22b380: 0x28a20018
    ctx->pc = 0x22b380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
label_22b384:
    // 0x22b384: 0x1440fff4
    ctx->pc = 0x22B384u;
    {
        const bool branch_taken_0x22b384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B388u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22b384) {
            ctx->pc = 0x22B358u;
            goto label_22b358;
        }
    }
    ctx->pc = 0x22B38Cu;
    // 0x22b38c: 0x3e00008
    ctx->pc = 0x22B38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B390u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B358u: goto label_22b358;
            case 0x22B380u: goto label_22b380;
            case 0x22B384u: goto label_22b384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B394u;
}
