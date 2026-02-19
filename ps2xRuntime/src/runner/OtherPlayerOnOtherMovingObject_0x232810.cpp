#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OtherPlayerOnOtherMovingObject
// Address: 0x232810 - 0x23288c
void OtherPlayerOnOtherMovingObject_0x232810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232810u;

    // 0x232810: 0x302d
    ctx->pc = 0x232810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232814: 0x24082b00
    ctx->pc = 0x232814u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x232818: 0x3c020032
    ctx->pc = 0x232818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23281c: 0x24491bc0
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x232820: 0x24070001
    ctx->pc = 0x232820u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x232824: 0xc81018
    ctx->pc = 0x232824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_232828:
    // 0x232828: 0x10c40012
    ctx->pc = 0x232828u;
    {
        const bool branch_taken_0x232828 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x23282Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        if (branch_taken_0x232828) {
            ctx->pc = 0x232874u;
            goto label_232874;
        }
    }
    ctx->pc = 0x232830u;
    // 0x232830: 0x8c6200fc
    ctx->pc = 0x232830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x232834: 0x54470010
    ctx->pc = 0x232834u;
    {
        const bool branch_taken_0x232834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x232834) {
            ctx->pc = 0x232838u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x232878u;
            goto label_232878;
        }
    }
    ctx->pc = 0x23283Cu;
    // 0x23283c: 0x8c63089c
    ctx->pc = 0x23283cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2204)));
    // 0x232840: 0x5060000d
    ctx->pc = 0x232840u;
    {
        const bool branch_taken_0x232840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x232840) {
            ctx->pc = 0x232844u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x232878u;
            goto label_232878;
        }
    }
    ctx->pc = 0x232848u;
    // 0x232848: 0x1065000b
    ctx->pc = 0x232848u;
    {
        const bool branch_taken_0x232848 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x23284Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x232848) {
            ctx->pc = 0x232878u;
            goto label_232878;
        }
    }
    ctx->pc = 0x232850u;
    // 0x232850: 0x8c620028
    ctx->pc = 0x232850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x232854: 0x10400008
    ctx->pc = 0x232854u;
    {
        const bool branch_taken_0x232854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x232854) {
            ctx->pc = 0x232878u;
            goto label_232878;
        }
    }
    ctx->pc = 0x23285Cu;
    // 0x23285c: 0x8c620010
    ctx->pc = 0x23285cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x232860: 0x30424000
    ctx->pc = 0x232860u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x232864: 0x10400005
    ctx->pc = 0x232864u;
    {
        const bool branch_taken_0x232864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232868u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
        if (branch_taken_0x232864) {
            ctx->pc = 0x23287Cu;
            goto label_23287c;
        }
    }
    ctx->pc = 0x23286Cu;
    // 0x23286c: 0x3e00008
    ctx->pc = 0x23286Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232828u: goto label_232828;
            case 0x232874u: goto label_232874;
            case 0x232878u: goto label_232878;
            case 0x23287Cu: goto label_23287c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232874u;
label_232874:
    // 0x232874: 0x24c60001
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_232878:
    // 0x232878: 0x28c20004
    ctx->pc = 0x232878u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_23287c:
    // 0x23287c: 0x1440ffea
    ctx->pc = 0x23287Cu;
    {
        const bool branch_taken_0x23287c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232880u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x23287c) {
            ctx->pc = 0x232828u;
            goto label_232828;
        }
    }
    ctx->pc = 0x232884u;
    // 0x232884: 0x3e00008
    ctx->pc = 0x232884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232888u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232828u: goto label_232828;
            case 0x232874u: goto label_232874;
            case 0x232878u: goto label_232878;
            case 0x23287Cu: goto label_23287c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23288Cu;
}
