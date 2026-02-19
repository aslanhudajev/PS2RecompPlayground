#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DamageColor
// Address: 0x290c80 - 0x290ce4
void DamageColor_0x290c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290c80u;

    // 0x290c80: 0x3084000f
    ctx->pc = 0x290c80u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x290c84: 0x24020002
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x290c88: 0x10820010
    ctx->pc = 0x290C88u;
    {
        const bool branch_taken_0x290c88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x290C8Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
        if (branch_taken_0x290c88) {
            ctx->pc = 0x290CCCu;
            goto label_290ccc;
        }
    }
    ctx->pc = 0x290C90u;
    // 0x290c90: 0x10400005
    ctx->pc = 0x290C90u;
    {
        const bool branch_taken_0x290c90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290C94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x290c90) {
            ctx->pc = 0x290CA8u;
            goto label_290ca8;
        }
    }
    ctx->pc = 0x290C98u;
    // 0x290c98: 0x1082000a
    ctx->pc = 0x290C98u;
    {
        const bool branch_taken_0x290c98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x290C9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x290c98) {
            ctx->pc = 0x290CC4u;
            goto label_290cc4;
        }
    }
    ctx->pc = 0x290CA0u;
    // 0x290ca0: 0x1000000e
    ctx->pc = 0x290CA0u;
    {
        const bool branch_taken_0x290ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x290ca0) {
            ctx->pc = 0x290CDCu;
            goto label_290cdc;
        }
    }
    ctx->pc = 0x290CA8u;
label_290ca8:
    // 0x290ca8: 0x24020003
    ctx->pc = 0x290ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x290cac: 0x10820009
    ctx->pc = 0x290CACu;
    {
        const bool branch_taken_0x290cac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x290CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x290cac) {
            ctx->pc = 0x290CD4u;
            goto label_290cd4;
        }
    }
    ctx->pc = 0x290CB4u;
    // 0x290cb4: 0x10820009
    ctx->pc = 0x290CB4u;
    {
        const bool branch_taken_0x290cb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x290CB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x290cb4) {
            ctx->pc = 0x290CDCu;
            goto label_290cdc;
        }
    }
    ctx->pc = 0x290CBCu;
    // 0x290cbc: 0x3e00008
    ctx->pc = 0x290CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290CA8u: goto label_290ca8;
            case 0x290CC4u: goto label_290cc4;
            case 0x290CCCu: goto label_290ccc;
            case 0x290CD4u: goto label_290cd4;
            case 0x290CDCu: goto label_290cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CC4u;
label_290cc4:
    // 0x290cc4: 0x3e00008
    ctx->pc = 0x290CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290CA8u: goto label_290ca8;
            case 0x290CC4u: goto label_290cc4;
            case 0x290CCCu: goto label_290ccc;
            case 0x290CD4u: goto label_290cd4;
            case 0x290CDCu: goto label_290cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CCCu;
label_290ccc:
    // 0x290ccc: 0x3e00008
    ctx->pc = 0x290CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290CA8u: goto label_290ca8;
            case 0x290CC4u: goto label_290cc4;
            case 0x290CCCu: goto label_290ccc;
            case 0x290CD4u: goto label_290cd4;
            case 0x290CDCu: goto label_290cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CD4u;
label_290cd4:
    // 0x290cd4: 0x3e00008
    ctx->pc = 0x290CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290CA8u: goto label_290ca8;
            case 0x290CC4u: goto label_290cc4;
            case 0x290CCCu: goto label_290ccc;
            case 0x290CD4u: goto label_290cd4;
            case 0x290CDCu: goto label_290cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CDCu;
label_290cdc:
    // 0x290cdc: 0x3e00008
    ctx->pc = 0x290CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290CA8u: goto label_290ca8;
            case 0x290CC4u: goto label_290cc4;
            case 0x290CCCu: goto label_290ccc;
            case 0x290CD4u: goto label_290cd4;
            case 0x290CDCu: goto label_290cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290CE4u;
}
