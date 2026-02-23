#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__16PostMainMgrClassFv
// Address: 0x215580 - 0x2155d0
void init__16PostMainMgrClassFv_0x215580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__16PostMainMgrClassFv");


    ctx->pc = 0x215580u;

    // 0x215580: 0x27bdffd0
    ctx->pc = 0x215580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215584: 0x7fbf0020
    ctx->pc = 0x215584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x215588: 0x7fb10010
    ctx->pc = 0x215588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21558c: 0x70808e28
    ctx->pc = 0x21558cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215590: 0x24040040
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x215594: 0xc06878c
    ctx->pc = 0x215594u;
    SET_GPR_U32(ctx, 31, 0x21559Cu);
    ctx->pc = 0x215598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21559Cu; }
        else if (ctx->pc != 0x21559Cu) { ctx->pc = 0x21559Cu; }
    }
    if (ctx->pc != 0x21559Cu) { return; }
    ctx->pc = 0x21559Cu;
    // 0x21559c: 0x70408628
    ctx->pc = 0x21559cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2155a0: 0x12000005
    ctx->pc = 0x2155A0u;
    {
        const bool branch_taken_0x2155a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2155a0) {
            ctx->pc = 0x2155B8u;
            goto label_2155b8;
        }
    }
    ctx->pc = 0x2155A8u;
    // 0x2155a8: 0x3c020021
    ctx->pc = 0x2155a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x2155ac: 0x72002628
    ctx->pc = 0x2155acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2155b0: 0xc0690b0
    ctx->pc = 0x2155B0u;
    SET_GPR_U32(ctx, 31, 0x2155B8u);
    ctx->pc = 0x2155B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1A42C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9TASK_LOOPFPFv_v_0x1a42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155B8u; }
        else if (ctx->pc != 0x2155B8u) { ctx->pc = 0x2155B8u; }
    }
    if (ctx->pc != 0x2155B8u) { return; }
    ctx->pc = 0x2155B8u;
label_2155b8:
    // 0x2155b8: 0xae300000
    ctx->pc = 0x2155b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2155bc: 0x7bbf0020
    ctx->pc = 0x2155bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2155c0: 0x7bb10010
    ctx->pc = 0x2155c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2155c4: 0x7bb00000
    ctx->pc = 0x2155c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2155c8: 0x3e00008
    ctx->pc = 0x2155C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2155B8u: goto label_2155b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2155D0u;
}
