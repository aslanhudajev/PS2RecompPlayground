#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: turn_wsel_cam
// Address: 0x26e6c8 - 0x26e838
void turn_wsel_cam_0x26e6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e6c8u;

    // 0x26e6c8: 0xc48300b4
    ctx->pc = 0x26e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e6cc: 0x46036081
    ctx->pc = 0x26e6ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x26e6d0: 0x3c014049
    ctx->pc = 0x26e6d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26e6d4: 0x34210fdb
    ctx->pc = 0x26e6d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e6d8: 0x44810000
    ctx->pc = 0x26e6d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e6dc: 0x46020034
    ctx->pc = 0x26e6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e6e0: 0x0
    ctx->pc = 0x26e6e0u;
    // NOP
    // 0x26e6e4: 0x45000006
    ctx->pc = 0x26E6E4u;
    {
        const bool branch_taken_0x26e6e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E6E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26e6e4) {
            ctx->pc = 0x26E700u;
            goto label_26e700;
        }
    }
    ctx->pc = 0x26E6ECu;
    // 0x26e6ec: 0x3c0140c9
    ctx->pc = 0x26e6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e6f0: 0x34210fdb
    ctx->pc = 0x26e6f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e6f4: 0x44810000
    ctx->pc = 0x26e6f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e6f8: 0x1000000c
    ctx->pc = 0x26E6F8u;
    {
        const bool branch_taken_0x26e6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E6FCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26e6f8) {
            ctx->pc = 0x26E72Cu;
            goto label_26e72c;
        }
    }
    ctx->pc = 0x26E700u;
label_26e700:
    // 0x26e700: 0x3c01c049
    ctx->pc = 0x26e700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26e704: 0x34210fdb
    ctx->pc = 0x26e704u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e708: 0x44810000
    ctx->pc = 0x26e708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e70c: 0x46001036
    ctx->pc = 0x26e70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e710: 0x0
    ctx->pc = 0x26e710u;
    // NOP
    // 0x26e714: 0x45020005
    ctx->pc = 0x26E714u;
    {
        const bool branch_taken_0x26e714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e714) {
            ctx->pc = 0x26E718u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x26E72Cu;
            goto label_26e72c;
        }
    }
    ctx->pc = 0x26E71Cu;
    // 0x26e71c: 0x3c0140c9
    ctx->pc = 0x26e71cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e720: 0x34210fdb
    ctx->pc = 0x26e720u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e724: 0x44810000
    ctx->pc = 0x26e724u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e728: 0x46001000
    ctx->pc = 0x26e728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_26e72c:
    // 0x26e72c: 0x46000086
    ctx->pc = 0x26e72cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x26e730: 0x3c030031
    ctx->pc = 0x26e730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26e734: 0x8c62ffbc
    ctx->pc = 0x26e734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e738: 0x4400005
    ctx->pc = 0x26E738u;
    {
        const bool branch_taken_0x26e738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E73Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e738) {
            ctx->pc = 0x26E750u;
            goto label_26e750;
        }
    }
    ctx->pc = 0x26E740u;
    // 0x26e740: 0x44820800
    ctx->pc = 0x26e740u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26e744: 0x46800860
    ctx->pc = 0x26e744u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e748: 0x10000008
    ctx->pc = 0x26E748u;
    {
        const bool branch_taken_0x26e748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e748) {
            ctx->pc = 0x26E76Cu;
            goto label_26e76c;
        }
    }
    ctx->pc = 0x26E750u;
label_26e750:
    // 0x26e750: 0x8c820000
    ctx->pc = 0x26e750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e754: 0x30430001
    ctx->pc = 0x26e754u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e758: 0x21042
    ctx->pc = 0x26e758u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e75c: 0x621825
    ctx->pc = 0x26e75cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e760: 0x44830800
    ctx->pc = 0x26e760u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26e764: 0x46800860
    ctx->pc = 0x26e764u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e768: 0x46010840
    ctx->pc = 0x26e768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26e76c:
    // 0x26e76c: 0x3c013d0e
    ctx->pc = 0x26e76cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x26e770: 0x3421fa36
    ctx->pc = 0x26e770u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26e774: 0x44810000
    ctx->pc = 0x26e774u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e778: 0x46000842
    ctx->pc = 0x26e778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e77c: 0x44800000
    ctx->pc = 0x26e77cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26e780: 0x46020036
    ctx->pc = 0x26e780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e784: 0x0
    ctx->pc = 0x26e784u;
    // NOP
    // 0x26e788: 0x45020007
    ctx->pc = 0x26E788u;
    {
        const bool branch_taken_0x26e788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e788) {
            ctx->pc = 0x26E78Cu;
            ctx->f[0] = FPU_NEG_S(ctx->f[1]);
            ctx->pc = 0x26E7A8u;
            goto label_26e7a8;
        }
    }
    ctx->pc = 0x26E790u;
    // 0x26e790: 0x46011036
    ctx->pc = 0x26e790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e794: 0x0
    ctx->pc = 0x26e794u;
    // NOP
    // 0x26e798: 0x45030001
    ctx->pc = 0x26E798u;
    {
        const bool branch_taken_0x26e798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e798) {
            ctx->pc = 0x26E79Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x26E7A0u;
            goto label_26e7a0;
        }
    }
    ctx->pc = 0x26E7A0u;
label_26e7a0:
    // 0x26e7a0: 0x10000006
    ctx->pc = 0x26E7A0u;
    {
        const bool branch_taken_0x26e7a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E7A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26e7a0) {
            ctx->pc = 0x26E7BCu;
            goto label_26e7bc;
        }
    }
    ctx->pc = 0x26E7A8u;
label_26e7a8:
    // 0x26e7a8: 0x46020036
    ctx->pc = 0x26e7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e7ac: 0x0
    ctx->pc = 0x26e7acu;
    // NOP
    // 0x26e7b0: 0x45030001
    ctx->pc = 0x26E7B0u;
    {
        const bool branch_taken_0x26e7b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e7b0) {
            ctx->pc = 0x26E7B4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x26E7B8u;
            goto label_26e7b8;
        }
    }
    ctx->pc = 0x26E7B8u;
label_26e7b8:
    // 0x26e7b8: 0x2402ffff
    ctx->pc = 0x26e7b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26e7bc:
    // 0x26e7bc: 0x10a00003
    ctx->pc = 0x26E7BCu;
    {
        const bool branch_taken_0x26e7bc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e7bc) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26E7C4u;
    // 0x26e7c4: 0x10000004
    ctx->pc = 0x26E7C4u;
    {
        const bool branch_taken_0x26e7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E7C8u;
        ctx->f[3] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x26e7c4) {
            ctx->pc = 0x26E7D8u;
            goto label_26e7d8;
        }
    }
    ctx->pc = 0x26E7CCu;
label_26e7cc:
    // 0x26e7cc: 0x58400002
    ctx->pc = 0x26E7CCu;
    {
        const bool branch_taken_0x26e7cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26e7cc) {
            ctx->pc = 0x26E7D0u;
            ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
            ctx->pc = 0x26E7D8u;
            goto label_26e7d8;
        }
    }
    ctx->pc = 0x26E7D4u;
    // 0x26e7d4: 0x460118c0
    ctx->pc = 0x26e7d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_26e7d8:
    // 0x26e7d8: 0x3c014049
    ctx->pc = 0x26e7d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26e7dc: 0x34210fdb
    ctx->pc = 0x26e7dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e7e0: 0x44810000
    ctx->pc = 0x26e7e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e7e4: 0x46030034
    ctx->pc = 0x26e7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e7e8: 0x45000006
    ctx->pc = 0x26E7E8u;
    {
        const bool branch_taken_0x26e7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e7e8) {
            ctx->pc = 0x26E804u;
            goto label_26e804;
        }
    }
    ctx->pc = 0x26E7F0u;
    // 0x26e7f0: 0x3c0140c9
    ctx->pc = 0x26e7f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e7f4: 0x34210fdb
    ctx->pc = 0x26e7f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e7f8: 0x44810000
    ctx->pc = 0x26e7f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e7fc: 0x3e00008
    ctx->pc = 0x26E7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E800u;
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E700u: goto label_26e700;
            case 0x26E72Cu: goto label_26e72c;
            case 0x26E750u: goto label_26e750;
            case 0x26E76Cu: goto label_26e76c;
            case 0x26E7A0u: goto label_26e7a0;
            case 0x26E7A8u: goto label_26e7a8;
            case 0x26E7B8u: goto label_26e7b8;
            case 0x26E7BCu: goto label_26e7bc;
            case 0x26E7CCu: goto label_26e7cc;
            case 0x26E7D8u: goto label_26e7d8;
            case 0x26E804u: goto label_26e804;
            case 0x26E830u: goto label_26e830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E804u;
label_26e804:
    // 0x26e804: 0x3c01c049
    ctx->pc = 0x26e804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26e808: 0x34210fdb
    ctx->pc = 0x26e808u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e80c: 0x44810000
    ctx->pc = 0x26e80cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e810: 0x46001836
    ctx->pc = 0x26e810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e814: 0x45000006
    ctx->pc = 0x26E814u;
    {
        const bool branch_taken_0x26e814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e814) {
            ctx->pc = 0x26E830u;
            goto label_26e830;
        }
    }
    ctx->pc = 0x26E81Cu;
    // 0x26e81c: 0x3c0140c9
    ctx->pc = 0x26e81cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26e820: 0x34210fdb
    ctx->pc = 0x26e820u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26e824: 0x44810000
    ctx->pc = 0x26e824u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e828: 0x3e00008
    ctx->pc = 0x26E828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E82Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E700u: goto label_26e700;
            case 0x26E72Cu: goto label_26e72c;
            case 0x26E750u: goto label_26e750;
            case 0x26E76Cu: goto label_26e76c;
            case 0x26E7A0u: goto label_26e7a0;
            case 0x26E7A8u: goto label_26e7a8;
            case 0x26E7B8u: goto label_26e7b8;
            case 0x26E7BCu: goto label_26e7bc;
            case 0x26E7CCu: goto label_26e7cc;
            case 0x26E7D8u: goto label_26e7d8;
            case 0x26E804u: goto label_26e804;
            case 0x26E830u: goto label_26e830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E830u;
label_26e830:
    // 0x26e830: 0x3e00008
    ctx->pc = 0x26E830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E834u;
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E700u: goto label_26e700;
            case 0x26E72Cu: goto label_26e72c;
            case 0x26E750u: goto label_26e750;
            case 0x26E76Cu: goto label_26e76c;
            case 0x26E7A0u: goto label_26e7a0;
            case 0x26E7A8u: goto label_26e7a8;
            case 0x26E7B8u: goto label_26e7b8;
            case 0x26E7BCu: goto label_26e7bc;
            case 0x26E7CCu: goto label_26e7cc;
            case 0x26E7D8u: goto label_26e7d8;
            case 0x26E804u: goto label_26e804;
            case 0x26E830u: goto label_26e830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E838u;
}
