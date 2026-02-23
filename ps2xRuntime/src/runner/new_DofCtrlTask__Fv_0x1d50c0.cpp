#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_DofCtrlTask__Fv
// Address: 0x1d50c0 - 0x1d5124
void new_DofCtrlTask__Fv_0x1d50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_DofCtrlTask__Fv");


    ctx->pc = 0x1d50c0u;

    // 0x1d50c0: 0x27bdffd0
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d50c4: 0x7fbf0020
    ctx->pc = 0x1d50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d50c8: 0x7fb10010
    ctx->pc = 0x1d50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d50cc: 0xc06903c
    ctx->pc = 0x1D50CCu;
    SET_GPR_U32(ctx, 31, 0x1D50D4u);
    ctx->pc = 0x1D50D0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50D4u; }
        else if (ctx->pc != 0x1D50D4u) { ctx->pc = 0x1D50D4u; }
    }
    if (ctx->pc != 0x1D50D4u) { return; }
    ctx->pc = 0x1D50D4u;
    // 0x1d50d4: 0xc06903c
    ctx->pc = 0x1D50D4u;
    SET_GPR_U32(ctx, 31, 0x1D50DCu);
    ctx->pc = 0x1D50D8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50DCu; }
        else if (ctx->pc != 0x1D50DCu) { ctx->pc = 0x1D50DCu; }
    }
    if (ctx->pc != 0x1D50DCu) { return; }
    ctx->pc = 0x1D50DCu;
    // 0x1d50dc: 0xc06903c
    ctx->pc = 0x1D50DCu;
    SET_GPR_U32(ctx, 31, 0x1D50E4u);
    ctx->pc = 0x1D50E0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E4u; }
        else if (ctx->pc != 0x1D50E4u) { ctx->pc = 0x1D50E4u; }
    }
    if (ctx->pc != 0x1D50E4u) { return; }
    ctx->pc = 0x1D50E4u;
    // 0x1d50e4: 0x8e260010
    ctx->pc = 0x1d50e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d50e8: 0x8e070014
    ctx->pc = 0x1d50e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d50ec: 0x2404007c
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 124));
    // 0x1d50f0: 0x70002e28
    ctx->pc = 0x1d50f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d50f4: 0xc069040
    ctx->pc = 0x1D50F4u;
    SET_GPR_U32(ctx, 31, 0x1D50FCu);
    ctx->pc = 0x1D50F8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50FCu; }
        else if (ctx->pc != 0x1D50FCu) { ctx->pc = 0x1D50FCu; }
    }
    if (ctx->pc != 0x1D50FCu) { return; }
    ctx->pc = 0x1D50FCu;
    // 0x1d50fc: 0x70402628
    ctx->pc = 0x1d50fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5100: 0x10800003
    ctx->pc = 0x1D5100u;
    {
        const bool branch_taken_0x1d5100 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5104u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d5100) {
            ctx->pc = 0x1D5110u;
            goto label_1d5110;
        }
    }
    ctx->pc = 0x1D5108u;
    // 0x1d5108: 0xc075298
    ctx->pc = 0x1D5108u;
    SET_GPR_U32(ctx, 31, 0x1D5110u);
    ctx->pc = 0x1D4A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11DofCtrlTaskFv_0x1d4a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5110u; }
        else if (ctx->pc != 0x1D5110u) { ctx->pc = 0x1D5110u; }
    }
    if (ctx->pc != 0x1D5110u) { return; }
    ctx->pc = 0x1D5110u;
label_1d5110:
    // 0x1d5110: 0x7bbf0020
    ctx->pc = 0x1d5110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5114: 0x7bb10010
    ctx->pc = 0x1d5114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5118: 0x7bb00000
    ctx->pc = 0x1d5118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d511c: 0x3e00008
    ctx->pc = 0x1D511Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5110u: goto label_1d5110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5124u;
}
