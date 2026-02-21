#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyTypeDesc
// Address: 0x236fd0 - 0x23701c
void EnemyTypeDesc_0x236fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236fd0u;

    // 0x236fd0: 0x282d
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fd4: 0x3c020033
    ctx->pc = 0x236fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236fd8: 0x2448ce10
    ctx->pc = 0x236fd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x236fdc: 0x24070024
    ctx->pc = 0x236fdcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x236fe0: 0x3c020033
    ctx->pc = 0x236fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236fe4: 0x2446ce14
    ctx->pc = 0x236fe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294954516));
    // 0x236fe8: 0xa71818
    ctx->pc = 0x236fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236fec: 0x0
    ctx->pc = 0x236fecu;
    // NOP
label_236ff0:
    // 0x236ff0: 0x681021
    ctx->pc = 0x236ff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x236ff4: 0x8c420000
    ctx->pc = 0x236ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ff8: 0x14440003
    ctx->pc = 0x236FF8u;
    {
        const bool branch_taken_0x236ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x236FFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x236ff8) {
            ctx->pc = 0x237008u;
            goto label_237008;
        }
    }
    ctx->pc = 0x237000u;
    // 0x237000: 0x3e00008
    ctx->pc = 0x237000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237004u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236FF0u: goto label_236ff0;
            case 0x237008u: goto label_237008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x2ca2002c
    ctx->pc = 0x237008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 44));
    // 0x23700c: 0x1440fff8
    ctx->pc = 0x23700Cu;
    {
        const bool branch_taken_0x23700c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237010u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x23700c) {
            ctx->pc = 0x236FF0u;
            goto label_236ff0;
        }
    }
    ctx->pc = 0x237014u;
    // 0x237014: 0x3e00008
    ctx->pc = 0x237014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237018u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236FF0u: goto label_236ff0;
            case 0x237008u: goto label_237008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23701Cu;
}
