#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_GameCameraCtrlTask__Fv
// Address: 0x1cbde0 - 0x1cbe44
void new_GameCameraCtrlTask__Fv_0x1cbde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_GameCameraCtrlTask__Fv");


    ctx->pc = 0x1cbde0u;

    // 0x1cbde0: 0x27bdffd0
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbde4: 0x7fbf0020
    ctx->pc = 0x1cbde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cbde8: 0x7fb10010
    ctx->pc = 0x1cbde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbdec: 0xc06903c
    ctx->pc = 0x1CBDECu;
    SET_GPR_U32(ctx, 31, 0x1CBDF4u);
    ctx->pc = 0x1CBDF0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDF4u; }
        else if (ctx->pc != 0x1CBDF4u) { ctx->pc = 0x1CBDF4u; }
    }
    if (ctx->pc != 0x1CBDF4u) { return; }
    ctx->pc = 0x1CBDF4u;
    // 0x1cbdf4: 0xc06903c
    ctx->pc = 0x1CBDF4u;
    SET_GPR_U32(ctx, 31, 0x1CBDFCu);
    ctx->pc = 0x1CBDF8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDFCu; }
        else if (ctx->pc != 0x1CBDFCu) { ctx->pc = 0x1CBDFCu; }
    }
    if (ctx->pc != 0x1CBDFCu) { return; }
    ctx->pc = 0x1CBDFCu;
    // 0x1cbdfc: 0xc06903c
    ctx->pc = 0x1CBDFCu;
    SET_GPR_U32(ctx, 31, 0x1CBE04u);
    ctx->pc = 0x1CBE00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE04u; }
        else if (ctx->pc != 0x1CBE04u) { ctx->pc = 0x1CBE04u; }
    }
    if (ctx->pc != 0x1CBE04u) { return; }
    ctx->pc = 0x1CBE04u;
    // 0x1cbe04: 0x8e260010
    ctx->pc = 0x1cbe04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cbe08: 0x8e070014
    ctx->pc = 0x1cbe08u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbe0c: 0x240403a0
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 928));
    // 0x1cbe10: 0x70002e28
    ctx->pc = 0x1cbe10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cbe14: 0xc069040
    ctx->pc = 0x1CBE14u;
    SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
    ctx->pc = 0x1CBE18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE1Cu; }
        else if (ctx->pc != 0x1CBE1Cu) { ctx->pc = 0x1CBE1Cu; }
    }
    if (ctx->pc != 0x1CBE1Cu) { return; }
    ctx->pc = 0x1CBE1Cu;
    // 0x1cbe1c: 0x70402628
    ctx->pc = 0x1cbe1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbe20: 0x10800003
    ctx->pc = 0x1CBE20u;
    {
        const bool branch_taken_0x1cbe20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CBE24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cbe20) {
            ctx->pc = 0x1CBE30u;
            goto label_1cbe30;
        }
    }
    ctx->pc = 0x1CBE28u;
    // 0x1cbe28: 0xc0725e0
    ctx->pc = 0x1CBE28u;
    SET_GPR_U32(ctx, 31, 0x1CBE30u);
    ctx->pc = 0x1CBE2Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C9780u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CameraTaskFi_0x1c9780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE30u; }
        else if (ctx->pc != 0x1CBE30u) { ctx->pc = 0x1CBE30u; }
    }
    if (ctx->pc != 0x1CBE30u) { return; }
    ctx->pc = 0x1CBE30u;
label_1cbe30:
    // 0x1cbe30: 0x7bbf0020
    ctx->pc = 0x1cbe30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbe34: 0x7bb10010
    ctx->pc = 0x1cbe34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbe38: 0x7bb00000
    ctx->pc = 0x1cbe38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbe3c: 0x3e00008
    ctx->pc = 0x1CBE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBE40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE30u: goto label_1cbe30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBE44u;
}
