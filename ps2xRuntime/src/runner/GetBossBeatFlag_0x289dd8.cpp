#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossBeatFlag
// Address: 0x289dd8 - 0x289e28
void GetBossBeatFlag_0x289dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289dd8u;

    // 0x289dd8: 0x282d
    ctx->pc = 0x289dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ddc: 0x3c020035
    ctx->pc = 0x289ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289de0: 0x2448aad0
    ctx->pc = 0x289de0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x289de4: 0x24070024
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x289de8: 0x3c020035
    ctx->pc = 0x289de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289dec: 0x2446aaf0
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x289df0: 0xa71818
    ctx->pc = 0x289df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x289df4: 0x0
    ctx->pc = 0x289df4u;
    // NOP
label_289df8:
    // 0x289df8: 0x681021
    ctx->pc = 0x289df8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x289dfc: 0x8c420000
    ctx->pc = 0x289dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289e00: 0x14440004
    ctx->pc = 0x289E00u;
    {
        const bool branch_taken_0x289e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x289E04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x289e00) {
            ctx->pc = 0x289E14u;
            goto label_289e14;
        }
    }
    ctx->pc = 0x289E08u;
    // 0x289e08: 0x661021
    ctx->pc = 0x289e08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289e0c: 0x3e00008
    ctx->pc = 0x289E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289DF8u: goto label_289df8;
            case 0x289E14u: goto label_289e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289E14u;
label_289e14:
    // 0x289e14: 0x28a2000d
    ctx->pc = 0x289e14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 13));
    // 0x289e18: 0x1440fff7
    ctx->pc = 0x289E18u;
    {
        const bool branch_taken_0x289e18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289E1Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x289e18) {
            ctx->pc = 0x289DF8u;
            goto label_289df8;
        }
    }
    ctx->pc = 0x289E20u;
    // 0x289e20: 0x3e00008
    ctx->pc = 0x289E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289DF8u: goto label_289df8;
            case 0x289E14u: goto label_289e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289E28u;
}
