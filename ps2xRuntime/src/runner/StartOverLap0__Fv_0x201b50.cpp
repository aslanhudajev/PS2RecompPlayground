#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: StartOverLap0__Fv
// Address: 0x201b50 - 0x201bb4
void StartOverLap0__Fv_0x201b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("StartOverLap0__Fv");


    ctx->pc = 0x201b50u;

    // 0x201b50: 0x27bdffd0
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201b54: 0x7fbf0020
    ctx->pc = 0x201b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x201b58: 0x7fb10010
    ctx->pc = 0x201b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201b5c: 0xc06903c
    ctx->pc = 0x201B5Cu;
    SET_GPR_U32(ctx, 31, 0x201B64u);
    ctx->pc = 0x201B60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B64u; }
        else if (ctx->pc != 0x201B64u) { ctx->pc = 0x201B64u; }
    }
    if (ctx->pc != 0x201B64u) { return; }
    ctx->pc = 0x201B64u;
    // 0x201b64: 0xc06903c
    ctx->pc = 0x201B64u;
    SET_GPR_U32(ctx, 31, 0x201B6Cu);
    ctx->pc = 0x201B68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B6Cu; }
        else if (ctx->pc != 0x201B6Cu) { ctx->pc = 0x201B6Cu; }
    }
    if (ctx->pc != 0x201B6Cu) { return; }
    ctx->pc = 0x201B6Cu;
    // 0x201b6c: 0xc06903c
    ctx->pc = 0x201B6Cu;
    SET_GPR_U32(ctx, 31, 0x201B74u);
    ctx->pc = 0x201B70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B74u; }
        else if (ctx->pc != 0x201B74u) { ctx->pc = 0x201B74u; }
    }
    if (ctx->pc != 0x201B74u) { return; }
    ctx->pc = 0x201B74u;
    // 0x201b74: 0x8e260010
    ctx->pc = 0x201b74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x201b78: 0x8e070014
    ctx->pc = 0x201b78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x201b7c: 0x2404004c
    ctx->pc = 0x201b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 76));
    // 0x201b80: 0x70002e28
    ctx->pc = 0x201b80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201b84: 0xc069040
    ctx->pc = 0x201B84u;
    SET_GPR_U32(ctx, 31, 0x201B8Cu);
    ctx->pc = 0x201B88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B8Cu; }
        else if (ctx->pc != 0x201B8Cu) { ctx->pc = 0x201B8Cu; }
    }
    if (ctx->pc != 0x201B8Cu) { return; }
    ctx->pc = 0x201B8Cu;
    // 0x201b8c: 0x70402628
    ctx->pc = 0x201b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x201b90: 0x10800003
    ctx->pc = 0x201B90u;
    {
        const bool branch_taken_0x201b90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x201B94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x201b90) {
            ctx->pc = 0x201BA0u;
            goto label_201ba0;
        }
    }
    ctx->pc = 0x201B98u;
    // 0x201b98: 0xc0806a8
    ctx->pc = 0x201B98u;
    SET_GPR_U32(ctx, 31, 0x201BA0u);
    ctx->pc = 0x201AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__19OverLapAfterPutTaskFv_0x201aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BA0u; }
        else if (ctx->pc != 0x201BA0u) { ctx->pc = 0x201BA0u; }
    }
    if (ctx->pc != 0x201BA0u) { return; }
    ctx->pc = 0x201BA0u;
label_201ba0:
    // 0x201ba0: 0x7bbf0020
    ctx->pc = 0x201ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201ba4: 0x7bb10010
    ctx->pc = 0x201ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ba8: 0x7bb00000
    ctx->pc = 0x201ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bac: 0x3e00008
    ctx->pc = 0x201BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201BA0u: goto label_201ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201BB4u;
}
