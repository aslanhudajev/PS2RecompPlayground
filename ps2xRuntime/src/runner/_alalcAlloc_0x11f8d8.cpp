#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcAlloc
// Address: 0x11f8d8 - 0x11f940
void _alalcAlloc_0x11f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f8d8u;

    // 0x11f8d8: 0x27bdfff0
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f8dc: 0x80382d
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8e0: 0xffbf0000
    ctx->pc = 0x11f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f8e4: 0x50c00001
    ctx->pc = 0x11F8E4u;
    {
        const bool branch_taken_0x11f8e4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f8e4) {
            ctx->pc = 0x11F8E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11F8ECu;
            goto label_11f8ec;
        }
    }
    ctx->pc = 0x11F8ECu;
label_11f8ec:
    // 0x11f8ec: 0x8ce20008
    ctx->pc = 0x11f8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11f8f0: 0x8ce40004
    ctx->pc = 0x11f8f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11f8f4: 0x461021
    ctx->pc = 0x11f8f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11f8f8: 0x8ce30000
    ctx->pc = 0x11f8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f8fc: 0x2442ffff
    ctx->pc = 0x11f8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f900: 0x46001b
    ctx->pc = 0x11f900u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x11f904: 0x641821
    ctx->pc = 0x11f904u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f908: 0x1012
    ctx->pc = 0x11f908u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x11f90c: 0x461018
    ctx->pc = 0x11f90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11f910: 0x452021
    ctx->pc = 0x11f910u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f914: 0x64182b
    ctx->pc = 0x11f914u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f918: 0x54600003
    ctx->pc = 0x11F918u;
    {
        const bool branch_taken_0x11f918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f918) {
            ctx->pc = 0x11F91Cu;
            SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
            ctx->pc = 0x11F928u;
            goto label_11f928;
        }
    }
    ctx->pc = 0x11F920u;
    // 0x11f920: 0x10000004
    ctx->pc = 0x11F920u;
    {
        const bool branch_taken_0x11f920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F924u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x11f920) {
            ctx->pc = 0x11F934u;
            goto label_11f934;
        }
    }
    ctx->pc = 0x11F928u;
label_11f928:
    // 0x11f928: 0xc048006
    ctx->pc = 0x11F928u;
    SET_GPR_U32(ctx, 31, 0x11F930u);
    ctx->pc = 0x11F92Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19512));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F930u; }
    }
    if (ctx->pc != 0x11F930u) { return; }
    ctx->pc = 0x11F930u;
    // 0x11f930: 0x102d
    ctx->pc = 0x11f930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f934:
    // 0x11f934: 0xdfbf0000
    ctx->pc = 0x11f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f938: 0x3e00008
    ctx->pc = 0x11F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F93Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F8ECu: goto label_11f8ec;
            case 0x11F928u: goto label_11f928;
            case 0x11F934u: goto label_11f934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F940u;
}
