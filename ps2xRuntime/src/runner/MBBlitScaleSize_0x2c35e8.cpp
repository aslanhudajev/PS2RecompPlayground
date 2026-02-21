#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitScaleSize
// Address: 0x2c35e8 - 0x2c36d8
void MBBlitScaleSize_0x2c35e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c35e8u;

    // 0x2c35e8: 0x44800000
    ctx->pc = 0x2c35e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c35ec: 0x460c0034
    ctx->pc = 0x2c35ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c35f0: 0x4500001b
    ctx->pc = 0x2C35F0u;
    {
        const bool branch_taken_0x2c35f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c35f0) {
            ctx->pc = 0x2C3660u;
            goto label_2c3660;
        }
    }
    ctx->pc = 0x2C35F8u;
    // 0x2c35f8: 0x94820010
    ctx->pc = 0x2c35f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c35fc: 0x44820800
    ctx->pc = 0x2c35fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2c3600: 0x46800860
    ctx->pc = 0x2c3600u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3604: 0x460c0802
    ctx->pc = 0x2c3604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2c3608: 0x3c013f00
    ctx->pc = 0x2c3608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c360c: 0x44811000
    ctx->pc = 0x2c360cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c3610: 0x46020000
    ctx->pc = 0x2c3610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3614: 0x460000e4
    ctx->pc = 0x2c3614u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3618: 0x44021800
    ctx->pc = 0x2c3618u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x2c361c: 0x44826000
    ctx->pc = 0x2c361cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2c3620: 0x46806320
    ctx->pc = 0x2c3620u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2c3624: 0x8c820000
    ctx->pc = 0x2c3624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3628: 0x30421000
    ctx->pc = 0x2c3628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2c362c: 0x10400008
    ctx->pc = 0x2C362Cu;
    {
        const bool branch_taken_0x2c362c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c362c) {
            ctx->pc = 0x2C3650u;
            goto label_2c3650;
        }
    }
    ctx->pc = 0x2C3634u;
    // 0x2c3634: 0x46016001
    ctx->pc = 0x2c3634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2c3638: 0x46020002
    ctx->pc = 0x2c3638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c363c: 0x46000064
    ctx->pc = 0x2c363cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3640: 0x44030800
    ctx->pc = 0x2c3640u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x2c3644: 0x94820008
    ctx->pc = 0x2c3644u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3648: 0x431023
    ctx->pc = 0x2c3648u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c364c: 0xa4820008
    ctx->pc = 0x2c364cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
label_2c3650:
    // 0x2c3650: 0x46006024
    ctx->pc = 0x2c3650u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2c3654: 0x44020000
    ctx->pc = 0x2c3654u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c3658: 0xa4820010
    ctx->pc = 0x2c3658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c365c: 0x44800000
    ctx->pc = 0x2c365cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c3660:
    // 0x2c3660: 0x460d0034
    ctx->pc = 0x2c3660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3664: 0x4500001a
    ctx->pc = 0x2C3664u;
    {
        const bool branch_taken_0x2c3664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3664) {
            ctx->pc = 0x2C36D0u;
            goto label_2c36d0;
        }
    }
    ctx->pc = 0x2C366Cu;
    // 0x2c366c: 0x94820012
    ctx->pc = 0x2c366cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2c3670: 0x44820800
    ctx->pc = 0x2c3670u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2c3674: 0x46800860
    ctx->pc = 0x2c3674u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3678: 0x460d0802
    ctx->pc = 0x2c3678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2c367c: 0x3c013f00
    ctx->pc = 0x2c367cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3680: 0x44811000
    ctx->pc = 0x2c3680u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c3684: 0x46020000
    ctx->pc = 0x2c3684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3688: 0x460000e4
    ctx->pc = 0x2c3688u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c368c: 0x44021800
    ctx->pc = 0x2c368cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x2c3690: 0x44826800
    ctx->pc = 0x2c3690u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2c3694: 0x46806b60
    ctx->pc = 0x2c3694u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2c3698: 0x8c820000
    ctx->pc = 0x2c3698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c369c: 0x30421000
    ctx->pc = 0x2c369cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2c36a0: 0x10400008
    ctx->pc = 0x2C36A0u;
    {
        const bool branch_taken_0x2c36a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c36a0) {
            ctx->pc = 0x2C36C4u;
            goto label_2c36c4;
        }
    }
    ctx->pc = 0x2C36A8u;
    // 0x2c36a8: 0x46016801
    ctx->pc = 0x2c36a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x2c36ac: 0x46020002
    ctx->pc = 0x2c36acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c36b0: 0x46000064
    ctx->pc = 0x2c36b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c36b4: 0x44030800
    ctx->pc = 0x2c36b4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x2c36b8: 0x9482000a
    ctx->pc = 0x2c36b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2c36bc: 0x431023
    ctx->pc = 0x2c36bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c36c0: 0xa482000a
    ctx->pc = 0x2c36c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
label_2c36c4:
    // 0x2c36c4: 0x46006824
    ctx->pc = 0x2c36c4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x2c36c8: 0x44020000
    ctx->pc = 0x2c36c8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c36cc: 0xa4820012
    ctx->pc = 0x2c36ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
label_2c36d0:
    // 0x2c36d0: 0x3e00008
    ctx->pc = 0x2C36D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3650u: goto label_2c3650;
            case 0x2C3660u: goto label_2c3660;
            case 0x2C36C4u: goto label_2c36c4;
            case 0x2C36D0u: goto label_2c36d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C36D8u;
}
