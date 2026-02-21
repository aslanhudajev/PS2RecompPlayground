#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartGenFX
// Address: 0x27f3d0 - 0x27f438
void StartGenFX_0x27f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f3d0u;

    // 0x27f3d0: 0x27bdfff0
    ctx->pc = 0x27f3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f3d4: 0xffbf0000
    ctx->pc = 0x27f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f3d8: 0x24a2ffff
    ctx->pc = 0x27f3d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27f3dc: 0x2c420003
    ctx->pc = 0x27f3dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x27f3e0: 0x1040000b
    ctx->pc = 0x27F3E0u;
    {
        const bool branch_taken_0x27f3e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F3E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27f3e0) {
            ctx->pc = 0x27F410u;
            goto label_27f410;
        }
    }
    ctx->pc = 0x27F3E8u;
    // 0x27f3e8: 0x24a5ffff
    ctx->pc = 0x27f3e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27f3ec: 0x3c040034
    ctx->pc = 0x27f3ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x27f3f0: 0x24844ab8
    ctx->pc = 0x27f3f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19128));
    // 0x27f3f4: 0x24a20051
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 81));
    // 0x27f3f8: 0x2403000c
    ctx->pc = 0x27f3f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27f3fc: 0x431018
    ctx->pc = 0x27f3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f400: 0x441021
    ctx->pc = 0x27f400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f404: 0x8c420000
    ctx->pc = 0x27f404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f408: 0x14400003
    ctx->pc = 0x27F408u;
    {
        const bool branch_taken_0x27f408 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27F40Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 81));
        if (branch_taken_0x27f408) {
            ctx->pc = 0x27F418u;
            goto label_27f418;
        }
    }
    ctx->pc = 0x27F410u;
label_27f410:
    // 0x27f410: 0x10000006
    ctx->pc = 0x27F410u;
    {
        const bool branch_taken_0x27f410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27f410) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F418u;
label_27f418:
    // 0x27f418: 0xc0282d
    ctx->pc = 0x27f418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f41c: 0x44806000
    ctx->pc = 0x27f41cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f420: 0x302d
    ctx->pc = 0x27f420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f424: 0xc09f5fa
    ctx->pc = 0x27F424u;
    SET_GPR_U32(ctx, 31, 0x27F42Cu);
    ctx->pc = 0x27F428u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F42Cu; }
    }
    if (ctx->pc != 0x27F42Cu) { return; }
    ctx->pc = 0x27F42Cu;
label_27f42c:
    // 0x27f42c: 0xdfbf0000
    ctx->pc = 0x27f42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f430: 0x3e00008
    ctx->pc = 0x27F430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F434u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F410u: goto label_27f410;
            case 0x27F418u: goto label_27f418;
            case 0x27F42Cu: goto label_27f42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F438u;
}
