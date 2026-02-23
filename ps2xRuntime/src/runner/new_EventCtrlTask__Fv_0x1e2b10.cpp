#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_EventCtrlTask__Fv
// Address: 0x1e2b10 - 0x1e2b74
void new_EventCtrlTask__Fv_0x1e2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_EventCtrlTask__Fv");


    ctx->pc = 0x1e2b10u;

    // 0x1e2b10: 0x27bdffd0
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2b14: 0x7fbf0020
    ctx->pc = 0x1e2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e2b18: 0x7fb10010
    ctx->pc = 0x1e2b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2b1c: 0xc06903c
    ctx->pc = 0x1E2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E2B24u);
    ctx->pc = 0x1E2B20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B24u; }
        else if (ctx->pc != 0x1E2B24u) { ctx->pc = 0x1E2B24u; }
    }
    if (ctx->pc != 0x1E2B24u) { return; }
    ctx->pc = 0x1E2B24u;
    // 0x1e2b24: 0xc06903c
    ctx->pc = 0x1E2B24u;
    SET_GPR_U32(ctx, 31, 0x1E2B2Cu);
    ctx->pc = 0x1E2B28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B2Cu; }
        else if (ctx->pc != 0x1E2B2Cu) { ctx->pc = 0x1E2B2Cu; }
    }
    if (ctx->pc != 0x1E2B2Cu) { return; }
    ctx->pc = 0x1E2B2Cu;
    // 0x1e2b2c: 0xc06903c
    ctx->pc = 0x1E2B2Cu;
    SET_GPR_U32(ctx, 31, 0x1E2B34u);
    ctx->pc = 0x1E2B30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B34u; }
        else if (ctx->pc != 0x1E2B34u) { ctx->pc = 0x1E2B34u; }
    }
    if (ctx->pc != 0x1E2B34u) { return; }
    ctx->pc = 0x1E2B34u;
    // 0x1e2b34: 0x8e260010
    ctx->pc = 0x1e2b34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e2b38: 0x8e070014
    ctx->pc = 0x1e2b38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e2b3c: 0x24040060
    ctx->pc = 0x1e2b3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e2b40: 0x70002e28
    ctx->pc = 0x1e2b40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2b44: 0xc069040
    ctx->pc = 0x1E2B44u;
    SET_GPR_U32(ctx, 31, 0x1E2B4Cu);
    ctx->pc = 0x1E2B48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B4Cu; }
        else if (ctx->pc != 0x1E2B4Cu) { ctx->pc = 0x1E2B4Cu; }
    }
    if (ctx->pc != 0x1E2B4Cu) { return; }
    ctx->pc = 0x1E2B4Cu;
    // 0x1e2b4c: 0x70402628
    ctx->pc = 0x1e2b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e2b50: 0x10800003
    ctx->pc = 0x1E2B50u;
    {
        const bool branch_taken_0x1e2b50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2B54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e2b50) {
            ctx->pc = 0x1E2B60u;
            goto label_1e2b60;
        }
    }
    ctx->pc = 0x1E2B58u;
    // 0x1e2b58: 0xc078ae0
    ctx->pc = 0x1E2B58u;
    SET_GPR_U32(ctx, 31, 0x1E2B60u);
    ctx->pc = 0x1E2B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13EventCtrlTaskFv_0x1e2b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B60u; }
        else if (ctx->pc != 0x1E2B60u) { ctx->pc = 0x1E2B60u; }
    }
    if (ctx->pc != 0x1E2B60u) { return; }
    ctx->pc = 0x1E2B60u;
label_1e2b60:
    // 0x1e2b60: 0x7bbf0020
    ctx->pc = 0x1e2b60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2b64: 0x7bb10010
    ctx->pc = 0x1e2b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b68: 0x7bb00000
    ctx->pc = 0x1e2b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b6c: 0x3e00008
    ctx->pc = 0x1E2B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2B60u: goto label_1e2b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2B74u;
}
