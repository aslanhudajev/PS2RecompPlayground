#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_SkyDispTask__Fv
// Address: 0x203370 - 0x2033d4
void new_SkyDispTask__Fv_0x203370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_SkyDispTask__Fv");


    ctx->pc = 0x203370u;

    // 0x203370: 0x27bdffd0
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203374: 0x7fbf0020
    ctx->pc = 0x203374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x203378: 0x7fb10010
    ctx->pc = 0x203378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20337c: 0xc06903c
    ctx->pc = 0x20337Cu;
    SET_GPR_U32(ctx, 31, 0x203384u);
    ctx->pc = 0x203380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203384u; }
        else if (ctx->pc != 0x203384u) { ctx->pc = 0x203384u; }
    }
    if (ctx->pc != 0x203384u) { return; }
    ctx->pc = 0x203384u;
    // 0x203384: 0xc06903c
    ctx->pc = 0x203384u;
    SET_GPR_U32(ctx, 31, 0x20338Cu);
    ctx->pc = 0x203388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20338Cu; }
        else if (ctx->pc != 0x20338Cu) { ctx->pc = 0x20338Cu; }
    }
    if (ctx->pc != 0x20338Cu) { return; }
    ctx->pc = 0x20338Cu;
    // 0x20338c: 0xc06903c
    ctx->pc = 0x20338Cu;
    SET_GPR_U32(ctx, 31, 0x203394u);
    ctx->pc = 0x203390u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203394u; }
        else if (ctx->pc != 0x203394u) { ctx->pc = 0x203394u; }
    }
    if (ctx->pc != 0x203394u) { return; }
    ctx->pc = 0x203394u;
    // 0x203394: 0x8e260010
    ctx->pc = 0x203394u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203398: 0x8e070014
    ctx->pc = 0x203398u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20339c: 0x24040058
    ctx->pc = 0x20339cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2033a0: 0x70002e28
    ctx->pc = 0x2033a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2033a4: 0xc069040
    ctx->pc = 0x2033A4u;
    SET_GPR_U32(ctx, 31, 0x2033ACu);
    ctx->pc = 0x2033A8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033ACu; }
        else if (ctx->pc != 0x2033ACu) { ctx->pc = 0x2033ACu; }
    }
    if (ctx->pc != 0x2033ACu) { return; }
    ctx->pc = 0x2033ACu;
    // 0x2033ac: 0x70402628
    ctx->pc = 0x2033acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2033b0: 0x10800003
    ctx->pc = 0x2033B0u;
    {
        const bool branch_taken_0x2033b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2033B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2033b0) {
            ctx->pc = 0x2033C0u;
            goto label_2033c0;
        }
    }
    ctx->pc = 0x2033B8u;
    // 0x2033b8: 0xc080a80
    ctx->pc = 0x2033B8u;
    SET_GPR_U32(ctx, 31, 0x2033C0u);
    ctx->pc = 0x202A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11SkyDispTaskFv_0x202a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033C0u; }
        else if (ctx->pc != 0x2033C0u) { ctx->pc = 0x2033C0u; }
    }
    if (ctx->pc != 0x2033C0u) { return; }
    ctx->pc = 0x2033C0u;
label_2033c0:
    // 0x2033c0: 0x7bbf0020
    ctx->pc = 0x2033c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2033c4: 0x7bb10010
    ctx->pc = 0x2033c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2033c8: 0x7bb00000
    ctx->pc = 0x2033c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2033cc: 0x3e00008
    ctx->pc = 0x2033CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2033D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2033C0u: goto label_2033c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2033D4u;
}
