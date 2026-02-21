#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetETime
// Address: 0x2c9698 - 0x2c97d4
void MBPsysSetETime_0x2c9698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9698u;

    // 0x2c9698: 0x8c840070
    ctx->pc = 0x2c9698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c969c: 0x90820037
    ctx->pc = 0x2c969cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c96a0: 0x2c420002
    ctx->pc = 0x2c96a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c96a4: 0x14400003
    ctx->pc = 0x2C96A4u;
    {
        const bool branch_taken_0x2c96a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c96a4) {
            ctx->pc = 0x2C96B4u;
            goto label_2c96b4;
        }
    }
    ctx->pc = 0x2C96ACu;
    // 0x2c96ac: 0x80b2558
    ctx->pc = 0x2C96ACu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C96B4u;
label_2c96b4:
    // 0x2c96b4: 0x3c0141f0
    ctx->pc = 0x2c96b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c96b8: 0x44810000
    ctx->pc = 0x2c96b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c96bc: 0x46006002
    ctx->pc = 0x2c96bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c96c0: 0x3c013f80
    ctx->pc = 0x2c96c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c96c4: 0x44810800
    ctx->pc = 0x2c96c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c96c8: 0x46010034
    ctx->pc = 0x2c96c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c96cc: 0x0
    ctx->pc = 0x2c96ccu;
    // NOP
    // 0x2c96d0: 0x45010010
    ctx->pc = 0x2C96D0u;
    {
        const bool branch_taken_0x2c96d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C96D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c96d0) {
            ctx->pc = 0x2C9714u;
            goto label_2c9714;
        }
    }
    ctx->pc = 0x2C96D8u;
    // 0x2c96d8: 0x3c0141f0
    ctx->pc = 0x2c96d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c96dc: 0x44810000
    ctx->pc = 0x2c96dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c96e0: 0x46006002
    ctx->pc = 0x2c96e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c96e4: 0x3c01477f
    ctx->pc = 0x2c96e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
    // 0x2c96e8: 0x3421ff00
    ctx->pc = 0x2c96e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
    // 0x2c96ec: 0x44810800
    ctx->pc = 0x2c96ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c96f0: 0x46000834
    ctx->pc = 0x2c96f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c96f4: 0x0
    ctx->pc = 0x2c96f4u;
    // NOP
    // 0x2c96f8: 0x45010006
    ctx->pc = 0x2C96F8u;
    {
        const bool branch_taken_0x2c96f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C96FCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2c96f8) {
            ctx->pc = 0x2C9714u;
            goto label_2c9714;
        }
    }
    ctx->pc = 0x2C9700u;
    // 0x2c9700: 0x3c0141f0
    ctx->pc = 0x2c9700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9704: 0x44810000
    ctx->pc = 0x2c9704u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9708: 0x46006002
    ctx->pc = 0x2c9708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c970c: 0x46000064
    ctx->pc = 0x2c970cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c9710: 0x44020800
    ctx->pc = 0x2c9710u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c9714:
    // 0x2c9714: 0x3c0141f0
    ctx->pc = 0x2c9714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9718: 0x44810000
    ctx->pc = 0x2c9718u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c971c: 0x46006802
    ctx->pc = 0x2c971cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c9720: 0x44800800
    ctx->pc = 0x2c9720u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2c9724: 0x46010034
    ctx->pc = 0x2c9724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9728: 0x0
    ctx->pc = 0x2c9728u;
    // NOP
    // 0x2c972c: 0x45000003
    ctx->pc = 0x2C972Cu;
    {
        const bool branch_taken_0x2c972c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9730u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2c972c) {
            ctx->pc = 0x2C973Cu;
            goto label_2c973c;
        }
    }
    ctx->pc = 0x2C9734u;
    // 0x2c9734: 0x10000011
    ctx->pc = 0x2C9734u;
    {
        const bool branch_taken_0x2c9734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9738u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2c9734) {
            ctx->pc = 0x2C977Cu;
            goto label_2c977c;
        }
    }
    ctx->pc = 0x2C973Cu;
label_2c973c:
    // 0x2c973c: 0x3c0141f0
    ctx->pc = 0x2c973cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9740: 0x44810000
    ctx->pc = 0x2c9740u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9744: 0x46006802
    ctx->pc = 0x2c9744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c9748: 0x3c01477f
    ctx->pc = 0x2c9748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
    // 0x2c974c: 0x3421ff00
    ctx->pc = 0x2c974cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
    // 0x2c9750: 0x44810800
    ctx->pc = 0x2c9750u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c9754: 0x46000834
    ctx->pc = 0x2c9754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9758: 0x0
    ctx->pc = 0x2c9758u;
    // NOP
    // 0x2c975c: 0x45010006
    ctx->pc = 0x2C975Cu;
    {
        const bool branch_taken_0x2c975c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9760u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2c975c) {
            ctx->pc = 0x2C9778u;
            goto label_2c9778;
        }
    }
    ctx->pc = 0x2C9764u;
    // 0x2c9764: 0x3c0141f0
    ctx->pc = 0x2c9764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9768: 0x44810000
    ctx->pc = 0x2c9768u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c976c: 0x46006802
    ctx->pc = 0x2c976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c9770: 0x46000064
    ctx->pc = 0x2c9770u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c9774: 0x44020800
    ctx->pc = 0x2c9774u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c9778:
    // 0x2c9778: 0xa482003c
    ctx->pc = 0x2c9778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
label_2c977c:
    // 0x2c977c: 0x9482002c
    ctx->pc = 0x2c977cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c9780: 0x3043fffe
    ctx->pc = 0x2c9780u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65534));
    // 0x2c9784: 0x44800000
    ctx->pc = 0x2c9784u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c9788: 0x46006034
    ctx->pc = 0x2c9788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c978c: 0x0
    ctx->pc = 0x2c978cu;
    // NOP
    // 0x2c9790: 0x45000006
    ctx->pc = 0x2C9790u;
    {
        const bool branch_taken_0x2c9790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9794u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2c9790) {
            ctx->pc = 0x2C97ACu;
            goto label_2c97ac;
        }
    }
    ctx->pc = 0x2C9798u;
    // 0x2c9798: 0x3402ffff
    ctx->pc = 0x2c9798u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2c979c: 0xa482003a
    ctx->pc = 0x2c979cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c97a0: 0x34620002
    ctx->pc = 0x2c97a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2));
    // 0x2c97a4: 0x3e00008
    ctx->pc = 0x2C97A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C97A8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C96B4u: goto label_2c96b4;
            case 0x2C9714u: goto label_2c9714;
            case 0x2C973Cu: goto label_2c973c;
            case 0x2C9778u: goto label_2c9778;
            case 0x2C977Cu: goto label_2c977c;
            case 0x2C97ACu: goto label_2c97ac;
            case 0x2C97CCu: goto label_2c97cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C97ACu;
label_2c97ac:
    // 0x2c97ac: 0x46006834
    ctx->pc = 0x2c97acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c97b0: 0x0
    ctx->pc = 0x2c97b0u;
    // NOP
    // 0x2c97b4: 0x45000005
    ctx->pc = 0x2C97B4u;
    {
        const bool branch_taken_0x2c97b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C97B8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2c97b4) {
            ctx->pc = 0x2C97CCu;
            goto label_2c97cc;
        }
    }
    ctx->pc = 0x2C97BCu;
    // 0x2c97bc: 0xa482003c
    ctx->pc = 0x2c97bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c97c0: 0x9482002c
    ctx->pc = 0x2c97c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c97c4: 0x34420002
    ctx->pc = 0x2c97c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2c97c8: 0xa482002c
    ctx->pc = 0x2c97c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
label_2c97cc:
    // 0x2c97cc: 0x3e00008
    ctx->pc = 0x2C97CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C96B4u: goto label_2c96b4;
            case 0x2C9714u: goto label_2c9714;
            case 0x2C973Cu: goto label_2c973c;
            case 0x2C9778u: goto label_2c9778;
            case 0x2C977Cu: goto label_2c977c;
            case 0x2C97ACu: goto label_2c97ac;
            case 0x2C97CCu: goto label_2c97cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C97D4u;
}
