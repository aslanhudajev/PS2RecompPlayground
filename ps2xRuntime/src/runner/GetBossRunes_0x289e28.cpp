#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossRunes
// Address: 0x289e28 - 0x289e78
void GetBossRunes_0x289e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289e28u;

    // 0x289e28: 0x282d
    ctx->pc = 0x289e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e2c: 0x3c020035
    ctx->pc = 0x289e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289e30: 0x2448aad0
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x289e34: 0x24070024
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x289e38: 0x3c020035
    ctx->pc = 0x289e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289e3c: 0x2446aae0
    ctx->pc = 0x289e3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x289e40: 0xa71818
    ctx->pc = 0x289e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x289e44: 0x0
    ctx->pc = 0x289e44u;
    // NOP
label_289e48:
    // 0x289e48: 0x681021
    ctx->pc = 0x289e48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x289e4c: 0x8c420000
    ctx->pc = 0x289e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289e50: 0x14440004
    ctx->pc = 0x289E50u;
    {
        const bool branch_taken_0x289e50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x289E54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x289e50) {
            ctx->pc = 0x289E64u;
            goto label_289e64;
        }
    }
    ctx->pc = 0x289E58u;
    // 0x289e58: 0x661021
    ctx->pc = 0x289e58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289e5c: 0x3e00008
    ctx->pc = 0x289E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289E48u: goto label_289e48;
            case 0x289E64u: goto label_289e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289E64u;
label_289e64:
    // 0x289e64: 0x28a2000d
    ctx->pc = 0x289e64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 13));
    // 0x289e68: 0x1440fff7
    ctx->pc = 0x289E68u;
    {
        const bool branch_taken_0x289e68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289E6Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x289e68) {
            ctx->pc = 0x289E48u;
            goto label_289e48;
        }
    }
    ctx->pc = 0x289E70u;
    // 0x289e70: 0x3e00008
    ctx->pc = 0x289E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289E48u: goto label_289e48;
            case 0x289E64u: goto label_289e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289E78u;
}
