#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAtreeSeqs
// Address: 0x211dc8 - 0x211e10
void InitAtreeSeqs_0x211dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211dc8u;

    // 0x211dc8: 0x80482d
    ctx->pc = 0x211dc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211dcc: 0xc0502d
    ctx->pc = 0x211dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211dd0: 0x18a0000d
    ctx->pc = 0x211DD0u;
    {
        const bool branch_taken_0x211dd0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x211DD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211dd0) {
            ctx->pc = 0x211E08u;
            goto label_211e08;
        }
    }
    ctx->pc = 0x211DD8u;
    // 0x211dd8: 0x24070030
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 48));
    // 0x211ddc: 0x24060058
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 88));
label_211de0:
    // 0x211de0: 0x871818
    ctx->pc = 0x211de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211de4: 0x691021
    ctx->pc = 0x211de4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x211de8: 0x8c43002c
    ctx->pc = 0x211de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x211dec: 0x664018
    ctx->pc = 0x211decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211df0: 0x10a1821
    ctx->pc = 0x211df0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x211df4: 0xac43002c
    ctx->pc = 0x211df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x211df8: 0x24840001
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x211dfc: 0x85102a
    ctx->pc = 0x211dfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x211e00: 0x1440fff7
    ctx->pc = 0x211E00u;
    {
        const bool branch_taken_0x211e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211e00) {
            ctx->pc = 0x211DE0u;
            goto label_211de0;
        }
    }
    ctx->pc = 0x211E08u;
label_211e08:
    // 0x211e08: 0x3e00008
    ctx->pc = 0x211E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211DE0u: goto label_211de0;
            case 0x211E08u: goto label_211e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211E10u;
}
