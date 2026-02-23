#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_OverLapCtrlTask__Fv
// Address: 0x201920 - 0x201984
void new_OverLapCtrlTask__Fv_0x201920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_OverLapCtrlTask__Fv");


    ctx->pc = 0x201920u;

    // 0x201920: 0x27bdffd0
    ctx->pc = 0x201920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201924: 0x7fbf0020
    ctx->pc = 0x201924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x201928: 0x7fb10010
    ctx->pc = 0x201928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20192c: 0xc06903c
    ctx->pc = 0x20192Cu;
    SET_GPR_U32(ctx, 31, 0x201934u);
    ctx->pc = 0x201930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201934u; }
        else if (ctx->pc != 0x201934u) { ctx->pc = 0x201934u; }
    }
    if (ctx->pc != 0x201934u) { return; }
    ctx->pc = 0x201934u;
    // 0x201934: 0xc06903c
    ctx->pc = 0x201934u;
    SET_GPR_U32(ctx, 31, 0x20193Cu);
    ctx->pc = 0x201938u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20193Cu; }
        else if (ctx->pc != 0x20193Cu) { ctx->pc = 0x20193Cu; }
    }
    if (ctx->pc != 0x20193Cu) { return; }
    ctx->pc = 0x20193Cu;
    // 0x20193c: 0xc06903c
    ctx->pc = 0x20193Cu;
    SET_GPR_U32(ctx, 31, 0x201944u);
    ctx->pc = 0x201940u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201944u; }
        else if (ctx->pc != 0x201944u) { ctx->pc = 0x201944u; }
    }
    if (ctx->pc != 0x201944u) { return; }
    ctx->pc = 0x201944u;
    // 0x201944: 0x8e260010
    ctx->pc = 0x201944u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x201948: 0x8e070014
    ctx->pc = 0x201948u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20194c: 0x240402a0
    ctx->pc = 0x20194cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 672));
    // 0x201950: 0x70002e28
    ctx->pc = 0x201950u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201954: 0xc069040
    ctx->pc = 0x201954u;
    SET_GPR_U32(ctx, 31, 0x20195Cu);
    ctx->pc = 0x201958u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20195Cu; }
        else if (ctx->pc != 0x20195Cu) { ctx->pc = 0x20195Cu; }
    }
    if (ctx->pc != 0x20195Cu) { return; }
    ctx->pc = 0x20195Cu;
    // 0x20195c: 0x70402628
    ctx->pc = 0x20195cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x201960: 0x10800003
    ctx->pc = 0x201960u;
    {
        const bool branch_taken_0x201960 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x201964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x201960) {
            ctx->pc = 0x201970u;
            goto label_201970;
        }
    }
    ctx->pc = 0x201968u;
    // 0x201968: 0xc080618
    ctx->pc = 0x201968u;
    SET_GPR_U32(ctx, 31, 0x201970u);
    ctx->pc = 0x201860u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15OverLapCtrlTaskFv_0x201860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201970u; }
        else if (ctx->pc != 0x201970u) { ctx->pc = 0x201970u; }
    }
    if (ctx->pc != 0x201970u) { return; }
    ctx->pc = 0x201970u;
label_201970:
    // 0x201970: 0x7bbf0020
    ctx->pc = 0x201970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201974: 0x7bb10010
    ctx->pc = 0x201974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201978: 0x7bb00000
    ctx->pc = 0x201978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20197c: 0x3e00008
    ctx->pc = 0x20197Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201970u: goto label_201970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201984u;
}
