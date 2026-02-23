#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_CAMJOB__13EventCtrlTaskFv
// Address: 0x1e3610 - 0x1e3680
void WAIT_CAMJOB__13EventCtrlTaskFv_0x1e3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_CAMJOB__13EventCtrlTaskFv");


    ctx->pc = 0x1e3610u;

    // 0x1e3610: 0x27bdffe0
    ctx->pc = 0x1e3610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3614: 0x7fbf0010
    ctx->pc = 0x1e3614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3618: 0x7fb00000
    ctx->pc = 0x1e3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e361c: 0x8f838ce8
    ctx->pc = 0x1e361cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e3620: 0x10600006
    ctx->pc = 0x1E3620u;
    {
        const bool branch_taken_0x1e3620 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3624u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e3620) {
            ctx->pc = 0x1E363Cu;
            goto label_1e363c;
        }
    }
    ctx->pc = 0x1E3628u;
    // 0x1e3628: 0xa2000004
    ctx->pc = 0x1e3628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e362c: 0x8e03000c
    ctx->pc = 0x1e362cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3630: 0x24630004
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3634: 0x1000000e
    ctx->pc = 0x1E3634u;
    {
        const bool branch_taken_0x1e3634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3638u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1e3634) {
            ctx->pc = 0x1E3670u;
            goto label_1e3670;
        }
    }
    ctx->pc = 0x1E363Cu;
label_1e363c:
    // 0x1e363c: 0xc072638
    ctx->pc = 0x1E363Cu;
    SET_GPR_U32(ctx, 31, 0x1E3644u);
    ctx->pc = 0x1E3640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    ctx->pc = 0x1C98E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemainCamJob__10CameraTaskFv_0x1c98e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3644u; }
        else if (ctx->pc != 0x1E3644u) { ctx->pc = 0x1E3644u; }
    }
    if (ctx->pc != 0x1E3644u) { return; }
    ctx->pc = 0x1E3644u;
    // 0x1e3644: 0x10400003
    ctx->pc = 0x1E3644u;
    {
        const bool branch_taken_0x1e3644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3648u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e3644) {
            ctx->pc = 0x1E3654u;
            goto label_1e3654;
        }
    }
    ctx->pc = 0x1E364Cu;
    // 0x1e364c: 0x10000008
    ctx->pc = 0x1E364Cu;
    {
        const bool branch_taken_0x1e364c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3650u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e364c) {
            ctx->pc = 0x1E3670u;
            goto label_1e3670;
        }
    }
    ctx->pc = 0x1E3654u;
label_1e3654:
    // 0x1e3654: 0x83838b2c
    ctx->pc = 0x1e3654u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e3658: 0x10600005
    ctx->pc = 0x1E3658u;
    {
        const bool branch_taken_0x1e3658 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3658) {
            ctx->pc = 0x1E3670u;
            goto label_1e3670;
        }
    }
    ctx->pc = 0x1E3660u;
    // 0x1e3660: 0xa2000004
    ctx->pc = 0x1e3660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3664: 0x8e03000c
    ctx->pc = 0x1e3664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3668: 0x24630004
    ctx->pc = 0x1e3668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e366c: 0xae03000c
    ctx->pc = 0x1e366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e3670:
    // 0x1e3670: 0x7bbf0010
    ctx->pc = 0x1e3670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3674: 0x7bb00000
    ctx->pc = 0x1e3674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3678: 0x3e00008
    ctx->pc = 0x1E3678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E367Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E363Cu: goto label_1e363c;
            case 0x1E3654u: goto label_1e3654;
            case 0x1E3670u: goto label_1e3670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3680u;
}
