#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_adjust_value
// Address: 0x280a78 - 0x280b10
void get_adjust_value_0x280a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280a78u;

    // 0x280a78: 0x3c020098
    ctx->pc = 0x280a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)152 << 16));
    // 0x280a7c: 0x3442967f
    ctx->pc = 0x280a7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38527));
    // 0x280a80: 0x44102a
    ctx->pc = 0x280a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x280a84: 0x50400004
    ctx->pc = 0x280A84u;
    {
        const bool branch_taken_0x280a84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280a84) {
            ctx->pc = 0x280A88u;
            SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
            ctx->pc = 0x280A98u;
            goto label_280a98;
        }
    }
    ctx->pc = 0x280A8Cu;
    // 0x280a8c: 0x3c020098
    ctx->pc = 0x280a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)152 << 16));
    // 0x280a90: 0x3e00008
    ctx->pc = 0x280A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280A94u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38528));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280A98u;
label_280a98:
    // 0x280a98: 0x3442423f
    ctx->pc = 0x280a98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16959));
    // 0x280a9c: 0x44102a
    ctx->pc = 0x280a9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x280aa0: 0x50400004
    ctx->pc = 0x280AA0u;
    {
        const bool branch_taken_0x280aa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280aa0) {
            ctx->pc = 0x280AA4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
            ctx->pc = 0x280AB4u;
            goto label_280ab4;
        }
    }
    ctx->pc = 0x280AA8u;
    // 0x280aa8: 0x3c02000f
    ctx->pc = 0x280aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x280aac: 0x3e00008
    ctx->pc = 0x280AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AB0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16960));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280AB4u;
label_280ab4:
    // 0x280ab4: 0x3442869f
    ctx->pc = 0x280ab4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34463));
    // 0x280ab8: 0x44102a
    ctx->pc = 0x280ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x280abc: 0x50400004
    ctx->pc = 0x280ABCu;
    {
        const bool branch_taken_0x280abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x280abc) {
            ctx->pc = 0x280AC0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10000));
            ctx->pc = 0x280AD0u;
            goto label_280ad0;
        }
    }
    ctx->pc = 0x280AC4u;
    // 0x280ac4: 0x3c020001
    ctx->pc = 0x280ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x280ac8: 0x3e00008
    ctx->pc = 0x280AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280ACCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34464));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280AD0u;
label_280ad0:
    // 0x280ad0: 0x14400003
    ctx->pc = 0x280AD0u;
    {
        const bool branch_taken_0x280ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280AD4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 1000));
        if (branch_taken_0x280ad0) {
            ctx->pc = 0x280AE0u;
            goto label_280ae0;
        }
    }
    ctx->pc = 0x280AD8u;
    // 0x280ad8: 0x3e00008
    ctx->pc = 0x280AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280ADCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280AE0u;
label_280ae0:
    // 0x280ae0: 0x14400003
    ctx->pc = 0x280AE0u;
    {
        const bool branch_taken_0x280ae0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280AE4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 100));
        if (branch_taken_0x280ae0) {
            ctx->pc = 0x280AF0u;
            goto label_280af0;
        }
    }
    ctx->pc = 0x280AE8u;
    // 0x280ae8: 0x3e00008
    ctx->pc = 0x280AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280AF0u;
label_280af0:
    // 0x280af0: 0x14400003
    ctx->pc = 0x280AF0u;
    {
        const bool branch_taken_0x280af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280AF4u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), 10));
        if (branch_taken_0x280af0) {
            ctx->pc = 0x280B00u;
            goto label_280b00;
        }
    }
    ctx->pc = 0x280AF8u;
    // 0x280af8: 0x3e00008
    ctx->pc = 0x280AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280AFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280B00u;
label_280b00:
    // 0x280b00: 0x24030001
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x280b04: 0x2402000a
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x280b08: 0x3e00008
    ctx->pc = 0x280B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B0Cu;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A98u: goto label_280a98;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AD0u: goto label_280ad0;
            case 0x280AE0u: goto label_280ae0;
            case 0x280AF0u: goto label_280af0;
            case 0x280B00u: goto label_280b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280B10u;
}
