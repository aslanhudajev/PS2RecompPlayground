#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: chg_target_state
// Address: 0x268e40 - 0x268eb4
void chg_target_state_0x268e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268e40u;

    // 0x268e40: 0x3c020034
    ctx->pc = 0x268e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268e44: 0x8c42f8fc
    ctx->pc = 0x268e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x268e48: 0x10400018
    ctx->pc = 0x268E48u;
    {
        const bool branch_taken_0x268e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x268e48) {
            ctx->pc = 0x268EACu;
            goto label_268eac;
        }
    }
    ctx->pc = 0x268E50u;
    // 0x268e50: 0x10a00016
    ctx->pc = 0x268E50u;
    {
        const bool branch_taken_0x268e50 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x268E54u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268e50) {
            ctx->pc = 0x268EACu;
            goto label_268eac;
        }
    }
    ctx->pc = 0x268E58u;
    // 0x268e58: 0x3c060034
    ctx->pc = 0x268e58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x268e5c: 0x8cc2f530
    ctx->pc = 0x268e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294964528)));
    // 0x268e60: 0x10400007
    ctx->pc = 0x268E60u;
    {
        const bool branch_taken_0x268e60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268E64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294964528));
        if (branch_taken_0x268e60) {
            ctx->pc = 0x268E80u;
            goto label_268e80;
        }
    }
    ctx->pc = 0x268E68u;
    // 0x268e68: 0x8c620004
    ctx->pc = 0x268e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268e6c: 0x14820005
    ctx->pc = 0x268E6Cu;
    {
        const bool branch_taken_0x268e6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x268E70u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x268e6c) {
            ctx->pc = 0x268E84u;
            goto label_268e84;
        }
    }
    ctx->pc = 0x268E74u;
    // 0x268e74: 0x3e00008
    ctx->pc = 0x268E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E78u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294964528), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268E80u: goto label_268e80;
            case 0x268E84u: goto label_268e84;
            case 0x268E88u: goto label_268e88;
            case 0x268EACu: goto label_268eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268E7Cu;
    // 0x268e7c: 0x0
    ctx->pc = 0x268e7cu;
    // NOP
label_268e80:
    // 0x268e80: 0x24e70001
    ctx->pc = 0x268e80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_268e84:
    // 0x268e84: 0x28e2000f
    ctx->pc = 0x268e84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 15));
label_268e88:
    // 0x268e88: 0x10400008
    ctx->pc = 0x268E88u;
    {
        const bool branch_taken_0x268e88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268E8Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268e88) {
            ctx->pc = 0x268EACu;
            goto label_268eac;
        }
    }
    ctx->pc = 0x268E90u;
    // 0x268e90: 0x8c620000
    ctx->pc = 0x268e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268e94: 0x1040fffb
    ctx->pc = 0x268E94u;
    {
        const bool branch_taken_0x268e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268E98u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x268e94) {
            ctx->pc = 0x268E84u;
            goto label_268e84;
        }
    }
    ctx->pc = 0x268E9Cu;
    // 0x268e9c: 0x8c620004
    ctx->pc = 0x268e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268ea0: 0x1482fff9
    ctx->pc = 0x268EA0u;
    {
        const bool branch_taken_0x268ea0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x268EA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 15));
        if (branch_taken_0x268ea0) {
            ctx->pc = 0x268E88u;
            goto label_268e88;
        }
    }
    ctx->pc = 0x268EA8u;
    // 0x268ea8: 0xac650000
    ctx->pc = 0x268ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_268eac:
    // 0x268eac: 0x3e00008
    ctx->pc = 0x268EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268E80u: goto label_268e80;
            case 0x268E84u: goto label_268e84;
            case 0x268E88u: goto label_268e88;
            case 0x268EACu: goto label_268eac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268EB4u;
}
