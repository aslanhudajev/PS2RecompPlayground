#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ShapeAnimVamp__10PeopleTaskFv
// Address: 0x208520 - 0x208568
void ShapeAnimVamp__10PeopleTaskFv_0x208520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ShapeAnimVamp__10PeopleTaskFv");


    ctx->pc = 0x208520u;

    // 0x208520: 0x27bdfff0
    ctx->pc = 0x208520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208524: 0x7fbf0000
    ctx->pc = 0x208524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x208528: 0x8c83000c
    ctx->pc = 0x208528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20852c: 0x3c020400
    ctx->pc = 0x20852cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x208530: 0x621024
    ctx->pc = 0x208530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208534: 0x10400005
    ctx->pc = 0x208534u;
    {
        const bool branch_taken_0x208534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208534) {
            ctx->pc = 0x20854Cu;
            goto label_20854c;
        }
    }
    ctx->pc = 0x20853Cu;
    // 0x20853c: 0xc068fe0
    ctx->pc = 0x20853Cu;
    SET_GPR_U32(ctx, 31, 0x208544u);
    ctx->pc = 0x208540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7536)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208544u; }
        else if (ctx->pc != 0x208544u) { ctx->pc = 0x208544u; }
    }
    if (ctx->pc != 0x208544u) { return; }
    ctx->pc = 0x208544u;
    // 0x208544: 0x10000006
    ctx->pc = 0x208544u;
    {
        const bool branch_taken_0x208544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208548u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x208544) {
            ctx->pc = 0x208560u;
            goto label_208560;
        }
    }
    ctx->pc = 0x20854Cu;
label_20854c:
    // 0x20854c: 0x8c821de8
    ctx->pc = 0x20854cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7656)));
    // 0x208550: 0x84450006
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x208554: 0xc082f3c
    ctx->pc = 0x208554u;
    SET_GPR_U32(ctx, 31, 0x20855Cu);
    ctx->pc = 0x208558u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 7724));
    ctx->pc = 0x20BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimVampFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20855Cu; }
        else if (ctx->pc != 0x20855Cu) { ctx->pc = 0x20855Cu; }
    }
    if (ctx->pc != 0x20855Cu) { return; }
    ctx->pc = 0x20855Cu;
    // 0x20855c: 0x7bbf0000
    ctx->pc = 0x20855cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_208560:
    // 0x208560: 0x3e00008
    ctx->pc = 0x208560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20854Cu: goto label_20854c;
            case 0x208560u: goto label_208560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208568u;
}
