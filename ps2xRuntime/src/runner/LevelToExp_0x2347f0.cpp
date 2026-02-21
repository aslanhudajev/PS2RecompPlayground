#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LevelToExp
// Address: 0x2347f0 - 0x234830
void LevelToExp_0x2347f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2347f0u;

    // 0x2347f0: 0x2882003d
    ctx->pc = 0x2347f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 61));
    // 0x2347f4: 0x50400007
    ctx->pc = 0x2347F4u;
    {
        const bool branch_taken_0x2347f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2347f4) {
            ctx->pc = 0x2347F8u;
            SET_GPR_U32(ctx, 5, ((uint32_t)2 << 16));
            ctx->pc = 0x234814u;
            goto label_234814;
        }
    }
    ctx->pc = 0x2347FCu;
    // 0x2347fc: 0x2402001e
    ctx->pc = 0x2347fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x234800: 0x822818
    ctx->pc = 0x234800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x234804: 0x24a503e8
    ctx->pc = 0x234804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1000));
    // 0x234808: 0x2482ffff
    ctx->pc = 0x234808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23480c: 0x10000006
    ctx->pc = 0x23480Cu;
    {
        const bool branch_taken_0x23480c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234810u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x23480c) {
            ctx->pc = 0x234828u;
            goto label_234828;
        }
    }
    ctx->pc = 0x234814u;
label_234814:
    // 0x234814: 0x34a58550
    ctx->pc = 0x234814u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 34128));
    // 0x234818: 0x2482ffc4
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x23481c: 0x240311f8
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4600));
    // 0x234820: 0x431018
    ctx->pc = 0x234820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x234824: 0x452821
    ctx->pc = 0x234824u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_234828:
    // 0x234828: 0x3e00008
    ctx->pc = 0x234828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23482Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234814u: goto label_234814;
            case 0x234828u: goto label_234828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234830u;
}
