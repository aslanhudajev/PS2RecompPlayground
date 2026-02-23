#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_EvCancelTask__Fv
// Address: 0x1e5220 - 0x1e5308
void new_EvCancelTask__Fv_0x1e5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_EvCancelTask__Fv");


    ctx->pc = 0x1e5220u;

    // 0x1e5220: 0x27bdffd0
    ctx->pc = 0x1e5220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5224: 0x7fbf0020
    ctx->pc = 0x1e5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e5228: 0x7fb10010
    ctx->pc = 0x1e5228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e522c: 0x7fb00000
    ctx->pc = 0x1e522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5230: 0x3c010050
    ctx->pc = 0x1e5230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5234: 0x8423e504
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e5238: 0x2402000a
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e523c: 0x1462001c
    ctx->pc = 0x1E523Cu;
    {
        const bool branch_taken_0x1e523c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e523c) {
            ctx->pc = 0x1E52B0u;
            goto label_1e52b0;
        }
    }
    ctx->pc = 0x1E5244u;
    // 0x1e5244: 0x8f838bcc
    ctx->pc = 0x1e5244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e5248: 0x24020002
    ctx->pc = 0x1e5248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e524c: 0x14620018
    ctx->pc = 0x1E524Cu;
    {
        const bool branch_taken_0x1e524c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e524c) {
            ctx->pc = 0x1E52B0u;
            goto label_1e52b0;
        }
    }
    ctx->pc = 0x1E5254u;
    // 0x1e5254: 0x8f918ccc
    ctx->pc = 0x1e5254u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e5258: 0x12200003
    ctx->pc = 0x1E5258u;
    {
        const bool branch_taken_0x1e5258 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5258) {
            ctx->pc = 0x1E5268u;
            goto label_1e5268;
        }
    }
    ctx->pc = 0x1E5260u;
    // 0x1e5260: 0x8e310000
    ctx->pc = 0x1e5260u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5264: 0x0
    ctx->pc = 0x1e5264u;
    // NOP
label_1e5268:
    // 0x1e5268: 0xc06903c
    ctx->pc = 0x1E5268u;
    SET_GPR_U32(ctx, 31, 0x1E5270u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5270u; }
        else if (ctx->pc != 0x1E5270u) { ctx->pc = 0x1E5270u; }
    }
    if (ctx->pc != 0x1E5270u) { return; }
    ctx->pc = 0x1E5270u;
    // 0x1e5270: 0xc06903c
    ctx->pc = 0x1E5270u;
    SET_GPR_U32(ctx, 31, 0x1E5278u);
    ctx->pc = 0x1E5274u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5278u; }
        else if (ctx->pc != 0x1E5278u) { ctx->pc = 0x1E5278u; }
    }
    if (ctx->pc != 0x1E5278u) { return; }
    ctx->pc = 0x1E5278u;
    // 0x1e5278: 0x8c420010
    ctx->pc = 0x1e5278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e527c: 0x8e060010
    ctx->pc = 0x1e527cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e5280: 0x72204628
    ctx->pc = 0x1e5280u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e5284: 0x24040050
    ctx->pc = 0x1e5284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e5288: 0x8c470014
    ctx->pc = 0x1e5288u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e528c: 0xc069040
    ctx->pc = 0x1E528Cu;
    SET_GPR_U32(ctx, 31, 0x1E5294u);
    ctx->pc = 0x1E5290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5294u; }
        else if (ctx->pc != 0x1E5294u) { ctx->pc = 0x1E5294u; }
    }
    if (ctx->pc != 0x1E5294u) { return; }
    ctx->pc = 0x1E5294u;
    // 0x1e5294: 0x70402628
    ctx->pc = 0x1e5294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5298: 0x10800016
    ctx->pc = 0x1E5298u;
    {
        const bool branch_taken_0x1e5298 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E529Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e5298) {
            ctx->pc = 0x1E52F4u;
            goto label_1e52f4;
        }
    }
    ctx->pc = 0x1E52A0u;
    // 0x1e52a0: 0xc0794c4
    ctx->pc = 0x1E52A0u;
    SET_GPR_U32(ctx, 31, 0x1E52A8u);
    ctx->pc = 0x1E5310u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12EvCancelTaskFv_0x1e5310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52A8u; }
        else if (ctx->pc != 0x1E52A8u) { ctx->pc = 0x1E52A8u; }
    }
    if (ctx->pc != 0x1E52A8u) { return; }
    ctx->pc = 0x1E52A8u;
    // 0x1e52a8: 0x10000013
    ctx->pc = 0x1E52A8u;
    {
        const bool branch_taken_0x1e52a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E52ACu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1e52a8) {
            ctx->pc = 0x1E52F8u;
            goto label_1e52f8;
        }
    }
    ctx->pc = 0x1E52B0u;
label_1e52b0:
    // 0x1e52b0: 0xc06903c
    ctx->pc = 0x1E52B0u;
    SET_GPR_U32(ctx, 31, 0x1E52B8u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52B8u; }
        else if (ctx->pc != 0x1E52B8u) { ctx->pc = 0x1E52B8u; }
    }
    if (ctx->pc != 0x1E52B8u) { return; }
    ctx->pc = 0x1E52B8u;
    // 0x1e52b8: 0xc06903c
    ctx->pc = 0x1E52B8u;
    SET_GPR_U32(ctx, 31, 0x1E52C0u);
    ctx->pc = 0x1E52BCu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52C0u; }
        else if (ctx->pc != 0x1E52C0u) { ctx->pc = 0x1E52C0u; }
    }
    if (ctx->pc != 0x1E52C0u) { return; }
    ctx->pc = 0x1E52C0u;
    // 0x1e52c0: 0xc06903c
    ctx->pc = 0x1E52C0u;
    SET_GPR_U32(ctx, 31, 0x1E52C8u);
    ctx->pc = 0x1E52C4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52C8u; }
        else if (ctx->pc != 0x1E52C8u) { ctx->pc = 0x1E52C8u; }
    }
    if (ctx->pc != 0x1E52C8u) { return; }
    ctx->pc = 0x1E52C8u;
    // 0x1e52c8: 0x8e260010
    ctx->pc = 0x1e52c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e52cc: 0x8e070014
    ctx->pc = 0x1e52ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e52d0: 0x24040050
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e52d4: 0x70002e28
    ctx->pc = 0x1e52d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e52d8: 0xc069040
    ctx->pc = 0x1E52D8u;
    SET_GPR_U32(ctx, 31, 0x1E52E0u);
    ctx->pc = 0x1E52DCu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52E0u; }
        else if (ctx->pc != 0x1E52E0u) { ctx->pc = 0x1E52E0u; }
    }
    if (ctx->pc != 0x1E52E0u) { return; }
    ctx->pc = 0x1E52E0u;
    // 0x1e52e0: 0x70402628
    ctx->pc = 0x1e52e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e52e4: 0x10800003
    ctx->pc = 0x1E52E4u;
    {
        const bool branch_taken_0x1e52e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E52E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e52e4) {
            ctx->pc = 0x1E52F4u;
            goto label_1e52f4;
        }
    }
    ctx->pc = 0x1E52ECu;
    // 0x1e52ec: 0xc0794c4
    ctx->pc = 0x1E52ECu;
    SET_GPR_U32(ctx, 31, 0x1E52F4u);
    ctx->pc = 0x1E5310u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12EvCancelTaskFv_0x1e5310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52F4u; }
        else if (ctx->pc != 0x1E52F4u) { ctx->pc = 0x1E52F4u; }
    }
    if (ctx->pc != 0x1E52F4u) { return; }
    ctx->pc = 0x1E52F4u;
label_1e52f4:
    // 0x1e52f4: 0x7bbf0020
    ctx->pc = 0x1e52f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e52f8:
    // 0x1e52f8: 0x7bb10010
    ctx->pc = 0x1e52f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e52fc: 0x7bb00000
    ctx->pc = 0x1e52fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5300: 0x3e00008
    ctx->pc = 0x1E5300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5268u: goto label_1e5268;
            case 0x1E52B0u: goto label_1e52b0;
            case 0x1E52F4u: goto label_1e52f4;
            case 0x1E52F8u: goto label_1e52f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5308u;
}
