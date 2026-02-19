#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossNumRunes
// Address: 0x289e78 - 0x289ec8
void GetBossNumRunes_0x289e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289e78u;

    // 0x289e78: 0x282d
    ctx->pc = 0x289e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e7c: 0x3c020035
    ctx->pc = 0x289e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289e80: 0x2448aad0
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x289e84: 0x24070024
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x289e88: 0x3c020035
    ctx->pc = 0x289e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289e8c: 0x2446aae4
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294945508));
    // 0x289e90: 0xa71818
    ctx->pc = 0x289e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x289e94: 0x0
    ctx->pc = 0x289e94u;
    // NOP
label_289e98:
    // 0x289e98: 0x681021
    ctx->pc = 0x289e98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x289e9c: 0x8c420000
    ctx->pc = 0x289e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289ea0: 0x14440004
    ctx->pc = 0x289EA0u;
    {
        const bool branch_taken_0x289ea0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x289EA4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x289ea0) {
            ctx->pc = 0x289EB4u;
            goto label_289eb4;
        }
    }
    ctx->pc = 0x289EA8u;
    // 0x289ea8: 0x661021
    ctx->pc = 0x289ea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289eac: 0x3e00008
    ctx->pc = 0x289EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289EB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289E98u: goto label_289e98;
            case 0x289EB4u: goto label_289eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289EB4u;
label_289eb4:
    // 0x289eb4: 0x28a2000d
    ctx->pc = 0x289eb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 13));
    // 0x289eb8: 0x1440fff7
    ctx->pc = 0x289EB8u;
    {
        const bool branch_taken_0x289eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289EBCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x289eb8) {
            ctx->pc = 0x289E98u;
            goto label_289e98;
        }
    }
    ctx->pc = 0x289EC0u;
    // 0x289ec0: 0x3e00008
    ctx->pc = 0x289EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289EC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289E98u: goto label_289e98;
            case 0x289EB4u: goto label_289eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289EC8u;
}
