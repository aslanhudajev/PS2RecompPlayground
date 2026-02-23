#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ClearRankingTaskConst__Fv
// Address: 0x225730 - 0x2257a0
void ClearRankingTaskConst__Fv_0x225730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ClearRankingTaskConst__Fv");


    ctx->pc = 0x225730u;

    // 0x225730: 0x27bdffd0
    ctx->pc = 0x225730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225734: 0x7fbf0020
    ctx->pc = 0x225734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x225738: 0x7fb10010
    ctx->pc = 0x225738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22573c: 0xc06903c
    ctx->pc = 0x22573Cu;
    SET_GPR_U32(ctx, 31, 0x225744u);
    ctx->pc = 0x225740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225744u; }
        else if (ctx->pc != 0x225744u) { ctx->pc = 0x225744u; }
    }
    if (ctx->pc != 0x225744u) { return; }
    ctx->pc = 0x225744u;
    // 0x225744: 0xc06903c
    ctx->pc = 0x225744u;
    SET_GPR_U32(ctx, 31, 0x22574Cu);
    ctx->pc = 0x225748u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22574Cu; }
        else if (ctx->pc != 0x22574Cu) { ctx->pc = 0x22574Cu; }
    }
    if (ctx->pc != 0x22574Cu) { return; }
    ctx->pc = 0x22574Cu;
    // 0x22574c: 0xc06903c
    ctx->pc = 0x22574Cu;
    SET_GPR_U32(ctx, 31, 0x225754u);
    ctx->pc = 0x225750u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225754u; }
        else if (ctx->pc != 0x225754u) { ctx->pc = 0x225754u; }
    }
    if (ctx->pc != 0x225754u) { return; }
    ctx->pc = 0x225754u;
    // 0x225754: 0x8e260010
    ctx->pc = 0x225754u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x225758: 0x8e070014
    ctx->pc = 0x225758u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22575c: 0x240403a0
    ctx->pc = 0x22575cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 928));
    // 0x225760: 0x70002e28
    ctx->pc = 0x225760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225764: 0xc069040
    ctx->pc = 0x225764u;
    SET_GPR_U32(ctx, 31, 0x22576Cu);
    ctx->pc = 0x225768u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22576Cu; }
        else if (ctx->pc != 0x22576Cu) { ctx->pc = 0x22576Cu; }
    }
    if (ctx->pc != 0x22576Cu) { return; }
    ctx->pc = 0x22576Cu;
    // 0x22576c: 0x10400003
    ctx->pc = 0x22576Cu;
    {
        const bool branch_taken_0x22576c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225770u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x22576c) {
            ctx->pc = 0x22577Cu;
            goto label_22577c;
        }
    }
    ctx->pc = 0x225774u;
    // 0x225774: 0xc089520
    ctx->pc = 0x225774u;
    SET_GPR_U32(ctx, 31, 0x22577Cu);
    ctx->pc = 0x225778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x225480u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__22ClearRankingCameraTaskFv_0x225480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22577Cu; }
        else if (ctx->pc != 0x22577Cu) { ctx->pc = 0x22577Cu; }
    }
    if (ctx->pc != 0x22577Cu) { return; }
    ctx->pc = 0x22577Cu;
label_22577c:
    // 0x22577c: 0xc089504
    ctx->pc = 0x22577Cu;
    SET_GPR_U32(ctx, 31, 0x225784u);
    ctx->pc = 0x225410u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ClearRankingTask__Fv_0x225410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225784u; }
        else if (ctx->pc != 0x225784u) { ctx->pc = 0x225784u; }
    }
    if (ctx->pc != 0x225784u) { return; }
    ctx->pc = 0x225784u;
    // 0x225784: 0xc08376c
    ctx->pc = 0x225784u;
    SET_GPR_U32(ctx, 31, 0x22578Cu);
    ctx->pc = 0x20DDB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PlayerTask__Fv_0x20ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22578Cu; }
        else if (ctx->pc != 0x22578Cu) { ctx->pc = 0x22578Cu; }
    }
    if (ctx->pc != 0x22578Cu) { return; }
    ctx->pc = 0x22578Cu;
    // 0x22578c: 0x7bbf0020
    ctx->pc = 0x22578cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225790: 0x7bb10010
    ctx->pc = 0x225790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225794: 0x7bb00000
    ctx->pc = 0x225794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225798: 0x3e00008
    ctx->pc = 0x225798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22579Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22577Cu: goto label_22577c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2257A0u;
}
