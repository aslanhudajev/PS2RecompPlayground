#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LightCtrlTask_Init__13LightCtrlTaskFv
// Address: 0x1f0310 - 0x1f0380
void LightCtrlTask_Init__13LightCtrlTaskFv_0x1f0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LightCtrlTask_Init__13LightCtrlTaskFv");


    ctx->pc = 0x1f0310u;

    // 0x1f0310: 0x27bdffe0
    ctx->pc = 0x1f0310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0314: 0x7fbf0010
    ctx->pc = 0x1f0314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f0318: 0x7fb00000
    ctx->pc = 0x1f0318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f031c: 0x70808628
    ctx->pc = 0x1f031cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f0320: 0xc07bfb4
    ctx->pc = 0x1F0320u;
    SET_GPR_U32(ctx, 31, 0x1F0328u);
    ctx->pc = 0x1F0324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 16));
    ctx->pc = 0x1EFED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LightCtrlParam_Init__13LightCtrlTaskFv_0x1efed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0328u; }
        else if (ctx->pc != 0x1F0328u) { ctx->pc = 0x1F0328u; }
    }
    if (ctx->pc != 0x1F0328u) { return; }
    ctx->pc = 0x1F0328u;
    // 0x1f0328: 0x3c020027
    ctx->pc = 0x1f0328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f032c: 0x2442c7d8
    ctx->pc = 0x1f032cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x1f0330: 0x8c450008
    ctx->pc = 0x1f0330u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f0334: 0x8e040000
    ctx->pc = 0x1f0334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f0338: 0x24060005
    ctx->pc = 0x1f0338u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f033c: 0x72004628
    ctx->pc = 0x1f033cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f0340: 0x3c020027
    ctx->pc = 0x1f0340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f0344: 0xc068f70
    ctx->pc = 0x1F0344u;
    SET_GPR_U32(ctx, 31, 0x1F034Cu);
    ctx->pc = 0x1F0348u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294952952));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F034Cu; }
        else if (ctx->pc != 0x1F034Cu) { ctx->pc = 0x1F034Cu; }
    }
    if (ctx->pc != 0x1F034Cu) { return; }
    ctx->pc = 0x1F034Cu;
    // 0x1f034c: 0x3c020027
    ctx->pc = 0x1f034cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f0350: 0x2442c7e8
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952936));
    // 0x1f0354: 0x8c450008
    ctx->pc = 0x1f0354u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f0358: 0x8e040000
    ctx->pc = 0x1f0358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f035c: 0x72004628
    ctx->pc = 0x1f035cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f0360: 0x3c060001
    ctx->pc = 0x1f0360u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1f0364: 0x3c020027
    ctx->pc = 0x1f0364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f0368: 0xc068f70
    ctx->pc = 0x1F0368u;
    SET_GPR_U32(ctx, 31, 0x1F0370u);
    ctx->pc = 0x1F036Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294952968));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0370u; }
        else if (ctx->pc != 0x1F0370u) { ctx->pc = 0x1F0370u; }
    }
    if (ctx->pc != 0x1F0370u) { return; }
    ctx->pc = 0x1F0370u;
    // 0x1f0370: 0x7bbf0010
    ctx->pc = 0x1f0370u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0374: 0x7bb00000
    ctx->pc = 0x1f0374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0378: 0x3e00008
    ctx->pc = 0x1F0378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F037Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0380u;
}
