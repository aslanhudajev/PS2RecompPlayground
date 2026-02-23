#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__16PostRendMgrClassFv
// Address: 0x215600 - 0x215680
void init__16PostRendMgrClassFv_0x215600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__16PostRendMgrClassFv");


    ctx->pc = 0x215600u;

    // 0x215600: 0x27bdffd0
    ctx->pc = 0x215600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215604: 0x7fbf0020
    ctx->pc = 0x215604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x215608: 0x7fb10010
    ctx->pc = 0x215608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21560c: 0x70808e28
    ctx->pc = 0x21560cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215610: 0x24040040
    ctx->pc = 0x215610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x215614: 0xc06878c
    ctx->pc = 0x215614u;
    SET_GPR_U32(ctx, 31, 0x21561Cu);
    ctx->pc = 0x215618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21561Cu; }
        else if (ctx->pc != 0x21561Cu) { ctx->pc = 0x21561Cu; }
    }
    if (ctx->pc != 0x21561Cu) { return; }
    ctx->pc = 0x21561Cu;
    // 0x21561c: 0x70408628
    ctx->pc = 0x21561cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x215620: 0x12000006
    ctx->pc = 0x215620u;
    {
        const bool branch_taken_0x215620 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x215624u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x215620) {
            ctx->pc = 0x21563Cu;
            goto label_21563c;
        }
    }
    ctx->pc = 0x215628u;
    // 0x215628: 0x3c020021
    ctx->pc = 0x215628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x21562c: 0x72002628
    ctx->pc = 0x21562cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x215630: 0xc0690b0
    ctx->pc = 0x215630u;
    SET_GPR_U32(ctx, 31, 0x215638u);
    ctx->pc = 0x215634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24912));
    ctx->pc = 0x1A42C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9TASK_LOOPFPFv_v_0x1a42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215638u; }
        else if (ctx->pc != 0x215638u) { ctx->pc = 0x215638u; }
    }
    if (ctx->pc != 0x215638u) { return; }
    ctx->pc = 0x215638u;
    // 0x215638: 0x24040040
    ctx->pc = 0x215638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
label_21563c:
    // 0x21563c: 0xc06878c
    ctx->pc = 0x21563Cu;
    SET_GPR_U32(ctx, 31, 0x215644u);
    ctx->pc = 0x215640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215644u; }
        else if (ctx->pc != 0x215644u) { ctx->pc = 0x215644u; }
    }
    if (ctx->pc != 0x215644u) { return; }
    ctx->pc = 0x215644u;
    // 0x215644: 0x70408628
    ctx->pc = 0x215644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x215648: 0x12000006
    ctx->pc = 0x215648u;
    {
        const bool branch_taken_0x215648 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21564Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215648) {
            ctx->pc = 0x215664u;
            goto label_215664;
        }
    }
    ctx->pc = 0x215650u;
    // 0x215650: 0x3c020021
    ctx->pc = 0x215650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x215654: 0x72002628
    ctx->pc = 0x215654u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x215658: 0xc0690b0
    ctx->pc = 0x215658u;
    SET_GPR_U32(ctx, 31, 0x215660u);
    ctx->pc = 0x21565Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24928));
    ctx->pc = 0x1A42C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9TASK_LOOPFPFv_v_0x1a42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215660u; }
        else if (ctx->pc != 0x215660u) { ctx->pc = 0x215660u; }
    }
    if (ctx->pc != 0x215660u) { return; }
    ctx->pc = 0x215660u;
    // 0x215660: 0x72202628
    ctx->pc = 0x215660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_215664:
    // 0x215664: 0xc085928
    ctx->pc = 0x215664u;
    SET_GPR_U32(ctx, 31, 0x21566Cu);
    ctx->pc = 0x215668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    ctx->pc = 0x2164A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__16ScrBlurCtrlClassFv_0x2164a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21566Cu; }
        else if (ctx->pc != 0x21566Cu) { ctx->pc = 0x21566Cu; }
    }
    if (ctx->pc != 0x21566Cu) { return; }
    ctx->pc = 0x21566Cu;
    // 0x21566c: 0x7bbf0020
    ctx->pc = 0x21566cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215670: 0x7bb10010
    ctx->pc = 0x215670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215674: 0x7bb00000
    ctx->pc = 0x215674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215678: 0x3e00008
    ctx->pc = 0x215678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21567Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21563Cu: goto label_21563c;
            case 0x215664u: goto label_215664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215680u;
}
