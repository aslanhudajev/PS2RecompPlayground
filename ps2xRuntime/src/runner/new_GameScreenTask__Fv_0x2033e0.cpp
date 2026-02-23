#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_GameScreenTask__Fv
// Address: 0x2033e0 - 0x203434
void new_GameScreenTask__Fv_0x2033e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_GameScreenTask__Fv");


    ctx->pc = 0x2033e0u;

    // 0x2033e0: 0x27bdffe0
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2033e4: 0x7fbf0010
    ctx->pc = 0x2033e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2033e8: 0x7fb00000
    ctx->pc = 0x2033e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2033ec: 0x3c010051
    ctx->pc = 0x2033ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x2033f0: 0xc06903c
    ctx->pc = 0x2033F0u;
    SET_GPR_U32(ctx, 31, 0x2033F8u);
    ctx->pc = 0x2033F4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 13528)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2033F8u; }
        else if (ctx->pc != 0x2033F8u) { ctx->pc = 0x2033F8u; }
    }
    if (ctx->pc != 0x2033F8u) { return; }
    ctx->pc = 0x2033F8u;
    // 0x2033f8: 0x8e070014
    ctx->pc = 0x2033f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2033fc: 0x24040054
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x203400: 0x70002e28
    ctx->pc = 0x203400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203404: 0x72003628
    ctx->pc = 0x203404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x203408: 0xc069040
    ctx->pc = 0x203408u;
    SET_GPR_U32(ctx, 31, 0x203410u);
    ctx->pc = 0x20340Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203410u; }
        else if (ctx->pc != 0x203410u) { ctx->pc = 0x203410u; }
    }
    if (ctx->pc != 0x203410u) { return; }
    ctx->pc = 0x203410u;
    // 0x203410: 0x70402628
    ctx->pc = 0x203410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203414: 0x10800003
    ctx->pc = 0x203414u;
    {
        const bool branch_taken_0x203414 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x203418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x203414) {
            ctx->pc = 0x203424u;
            goto label_203424;
        }
    }
    ctx->pc = 0x20341Cu;
    // 0x20341c: 0xc080ab8
    ctx->pc = 0x20341Cu;
    SET_GPR_U32(ctx, 31, 0x203424u);
    ctx->pc = 0x202AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14GameScreenTaskFv_0x202ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203424u; }
        else if (ctx->pc != 0x203424u) { ctx->pc = 0x203424u; }
    }
    if (ctx->pc != 0x203424u) { return; }
    ctx->pc = 0x203424u;
label_203424:
    // 0x203424: 0x7bbf0010
    ctx->pc = 0x203424u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203428: 0x7bb00000
    ctx->pc = 0x203428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20342c: 0x3e00008
    ctx->pc = 0x20342Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203424u: goto label_203424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203434u;
}
