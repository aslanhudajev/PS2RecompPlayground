#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyTypePrefix
// Address: 0x237020 - 0x23706c
void EnemyTypePrefix_0x237020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237020u;

    // 0x237020: 0x282d
    ctx->pc = 0x237020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237024: 0x3c020033
    ctx->pc = 0x237024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237028: 0x2448ce10
    ctx->pc = 0x237028u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x23702c: 0x24070024
    ctx->pc = 0x23702cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x237030: 0x3c020033
    ctx->pc = 0x237030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237034: 0x2446ce24
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294954532));
    // 0x237038: 0xa71818
    ctx->pc = 0x237038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23703c: 0x0
    ctx->pc = 0x23703cu;
    // NOP
label_237040:
    // 0x237040: 0x681021
    ctx->pc = 0x237040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x237044: 0x8c420000
    ctx->pc = 0x237044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237048: 0x14440003
    ctx->pc = 0x237048u;
    {
        const bool branch_taken_0x237048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x23704Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x237048) {
            ctx->pc = 0x237058u;
            goto label_237058;
        }
    }
    ctx->pc = 0x237050u;
    // 0x237050: 0x3e00008
    ctx->pc = 0x237050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237054u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237040u: goto label_237040;
            case 0x237058u: goto label_237058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237058u;
label_237058:
    // 0x237058: 0x2ca2002c
    ctx->pc = 0x237058u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 44));
    // 0x23705c: 0x1440fff8
    ctx->pc = 0x23705Cu;
    {
        const bool branch_taken_0x23705c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237060u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x23705c) {
            ctx->pc = 0x237040u;
            goto label_237040;
        }
    }
    ctx->pc = 0x237064u;
    // 0x237064: 0x3e00008
    ctx->pc = 0x237064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237068u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237040u: goto label_237040;
            case 0x237058u: goto label_237058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23706Cu;
}
