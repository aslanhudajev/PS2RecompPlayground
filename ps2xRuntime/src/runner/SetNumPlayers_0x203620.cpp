#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetNumPlayers
// Address: 0x203620 - 0x203680
void SetNumPlayers_0x203620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203620u;

    // 0x203620: 0x3c020031
    ctx->pc = 0x203620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203624: 0xac440028
    ctx->pc = 0x203624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x203628: 0x3c020031
    ctx->pc = 0x203628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20362c: 0x4a00005
    ctx->pc = 0x20362Cu;
    {
        const bool branch_taken_0x20362c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x203630u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
        if (branch_taken_0x20362c) {
            ctx->pc = 0x203644u;
            goto label_203644;
        }
    }
    ctx->pc = 0x203634u;
    // 0x203634: 0x28a30005
    ctx->pc = 0x203634u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 5));
    // 0x203638: 0x24020004
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20363c: 0x10000002
    ctx->pc = 0x20363Cu;
    {
        const bool branch_taken_0x20363c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203640u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x20363c) {
            ctx->pc = 0x203648u;
            goto label_203648;
        }
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x282d
    ctx->pc = 0x203644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203648:
    // 0x203648: 0xac850000
    ctx->pc = 0x203648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x20364c: 0x3c020031
    ctx->pc = 0x20364cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203650: 0x8c42fff4
    ctx->pc = 0x203650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x203654: 0x14400004
    ctx->pc = 0x203654u;
    {
        const bool branch_taken_0x203654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203658u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x203654) {
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x20365Cu;
    // 0x20365c: 0x3c030031
    ctx->pc = 0x20365cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203660: 0x10000003
    ctx->pc = 0x203660u;
    {
        const bool branch_taken_0x203660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203664u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 40)));
        if (branch_taken_0x203660) {
            ctx->pc = 0x203670u;
            goto label_203670;
        }
    }
    ctx->pc = 0x203668u;
label_203668:
    // 0x203668: 0x3c030031
    ctx->pc = 0x203668u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20366c: 0x8c63fff4
    ctx->pc = 0x20366cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_203670:
    // 0x203670: 0xac430030
    ctx->pc = 0x203670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x203674: 0x3c020031
    ctx->pc = 0x203674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203678: 0x3e00008
    ctx->pc = 0x203678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20367Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203644u: goto label_203644;
            case 0x203648u: goto label_203648;
            case 0x203668u: goto label_203668;
            case 0x203670u: goto label_203670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203680u;
}
