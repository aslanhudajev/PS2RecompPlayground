#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DamageItem
// Address: 0x25a648 - 0x25b038
void DamageItem_0x25a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a648u;

label_25a648:
    // 0x25a648: 0x27bdff30
    ctx->pc = 0x25a648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_25a64c:
    // 0x25a64c: 0xffbf00b0
    ctx->pc = 0x25a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_25a650:
    // 0x25a650: 0xffb700a0
    ctx->pc = 0x25a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_25a654:
    // 0x25a654: 0xffb60090
    ctx->pc = 0x25a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_25a658:
    // 0x25a658: 0xffb50080
    ctx->pc = 0x25a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_25a65c:
    // 0x25a65c: 0xffb40070
    ctx->pc = 0x25a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_25a660:
    // 0x25a660: 0xffb30060
    ctx->pc = 0x25a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_25a664:
    // 0x25a664: 0xffb20050
    ctx->pc = 0x25a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_25a668:
    // 0x25a668: 0xffb10040
    ctx->pc = 0x25a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_25a66c:
    // 0x25a66c: 0xffb00030
    ctx->pc = 0x25a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_25a670:
    // 0x25a670: 0xe7b400c0
    ctx->pc = 0x25a670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_25a674:
    // 0x25a674: 0x80882d
    ctx->pc = 0x25a674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a678:
    // 0x25a678: 0x46006506
    ctx->pc = 0x25a678u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_25a67c:
    // 0x25a67c: 0xa0a02d
    ctx->pc = 0x25a67cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25a680:
    // 0x25a680: 0x8e220000
    ctx->pc = 0x25a680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a684:
    // 0x25a684: 0x24550004
    ctx->pc = 0x25a684u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4));
label_25a688:
    // 0x25a688: 0x8c430000
    ctx->pc = 0x25a688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a68c:
    // 0x25a68c: 0x24020003
    ctx->pc = 0x25a68cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_25a690:
    // 0x25a690: 0x1462002f
label_25a694:
    if (ctx->pc == 0x25A694u) {
        ctx->pc = 0x25A694u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A698u;
        goto label_25a698;
    }
    ctx->pc = 0x25A690u;
    {
        const bool branch_taken_0x25a690 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A694u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a690) {
            ctx->pc = 0x25A750u;
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A698u;
label_25a698:
    // 0x25a698: 0x4c0002d
label_25a69c:
    if (ctx->pc == 0x25A69Cu) {
        ctx->pc = 0x25A69Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x25A6A0u;
        goto label_25a6a0;
    }
    ctx->pc = 0x25A698u;
    {
        const bool branch_taken_0x25a698 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x25A69Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25a698) {
            ctx->pc = 0x25A750u;
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A6A0u;
label_25a6a0:
    // 0x25a6a0: 0x8c42e7c8
    ctx->pc = 0x25a6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_25a6a4:
    // 0x25a6a4: 0xc441009c
    ctx->pc = 0x25a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a6a8:
    // 0x25a6a8: 0x44800000
    ctx->pc = 0x25a6a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_25a6ac:
    // 0x25a6ac: 0x46010034
    ctx->pc = 0x25a6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a6b0:
    // 0x25a6b0: 0x0
    ctx->pc = 0x25a6b0u;
    // NOP
label_25a6b4:
    // 0x25a6b4: 0x45000026
label_25a6b8:
    if (ctx->pc == 0x25A6B8u) {
        ctx->pc = 0x25A6B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x25A6BCu;
        goto label_25a6bc;
    }
    ctx->pc = 0x25A6B4u;
    {
        const bool branch_taken_0x25a6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A6B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x25a6b4) {
            ctx->pc = 0x25A750u;
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A6BCu;
label_25a6bc:
    // 0x25a6bc: 0x3c013f80
    ctx->pc = 0x25a6bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25a6c0:
    // 0x25a6c0: 0x44811000
    ctx->pc = 0x25a6c0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_25a6c4:
    // 0x25a6c4: 0x24631bc0
    ctx->pc = 0x25a6c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
label_25a6c8:
    // 0x25a6c8: 0x24022b00
    ctx->pc = 0x25a6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_25a6cc:
    // 0x25a6cc: 0xc21018
    ctx->pc = 0x25a6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25a6d0:
    // 0x25a6d0: 0x431021
    ctx->pc = 0x25a6d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25a6d4:
    // 0x25a6d4: 0xc4402ac0
    ctx->pc = 0x25a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a6d8:
    // 0x25a6d8: 0x46800020
    ctx->pc = 0x25a6d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_25a6dc:
    // 0x25a6dc: 0x46010034
    ctx->pc = 0x25a6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a6e0:
    // 0x25a6e0: 0x45000008
label_25a6e4:
    if (ctx->pc == 0x25A6E4u) {
        ctx->pc = 0x25A6E8u;
        goto label_25a6e8;
    }
    ctx->pc = 0x25A6E0u;
    {
        const bool branch_taken_0x25a6e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a6e0) {
            ctx->pc = 0x25A704u;
            goto label_25a704;
        }
    }
    ctx->pc = 0x25A6E8u;
label_25a6e8:
    // 0x25a6e8: 0x46000801
    ctx->pc = 0x25a6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25a6ec:
    // 0x25a6ec: 0x3c013c23
    ctx->pc = 0x25a6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_25a6f0:
    // 0x25a6f0: 0x3421d70a
    ctx->pc = 0x25a6f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_25a6f4:
    // 0x25a6f4: 0x44810800
    ctx->pc = 0x25a6f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_25a6f8:
    // 0x25a6f8: 0x46010002
    ctx->pc = 0x25a6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25a6fc:
    // 0x25a6fc: 0x1000000d
label_25a700:
    if (ctx->pc == 0x25A700u) {
        ctx->pc = 0x25A700u;
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x25A704u;
        goto label_25a704;
    }
    ctx->pc = 0x25A6FCu;
    {
        const bool branch_taken_0x25a6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A700u;
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x25a6fc) {
            ctx->pc = 0x25A734u;
            goto label_25a734;
        }
    }
    ctx->pc = 0x25A704u;
label_25a704:
    // 0x25a704: 0x46000834
    ctx->pc = 0x25a704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a708:
    // 0x25a708: 0x0
    ctx->pc = 0x25a708u;
    // NOP
label_25a70c:
    // 0x25a70c: 0x4502000a
label_25a710:
    if (ctx->pc == 0x25A710u) {
        ctx->pc = 0x25A710u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
        ctx->pc = 0x25A714u;
        goto label_25a714;
    }
    ctx->pc = 0x25A70Cu;
    {
        const bool branch_taken_0x25a70c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a70c) {
            ctx->pc = 0x25A710u;
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
            ctx->pc = 0x25A738u;
            goto label_25a738;
        }
    }
    ctx->pc = 0x25A714u;
label_25a714:
    // 0x25a714: 0x46010081
    ctx->pc = 0x25a714u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25a718:
    // 0x25a718: 0x3c013dcc
    ctx->pc = 0x25a718u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_25a71c:
    // 0x25a71c: 0x3421cccd
    ctx->pc = 0x25a71cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_25a720:
    // 0x25a720: 0x44810000
    ctx->pc = 0x25a720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a724:
    // 0x25a724: 0x46001082
    ctx->pc = 0x25a724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_25a728:
    // 0x25a728: 0x3c013f80
    ctx->pc = 0x25a728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25a72c:
    // 0x25a72c: 0x44810000
    ctx->pc = 0x25a72cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a730:
    // 0x25a730: 0x46001080
    ctx->pc = 0x25a730u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25a734:
    // 0x25a734: 0x4602a502
    ctx->pc = 0x25a734u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_25a738:
    // 0x25a738: 0x3c013f80
    ctx->pc = 0x25a738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25a73c:
    // 0x25a73c: 0x44810000
    ctx->pc = 0x25a73cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a740:
    // 0x25a740: 0x4600a034
    ctx->pc = 0x25a740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a744:
    // 0x25a744: 0x0
    ctx->pc = 0x25a744u;
    // NOP
label_25a748:
    // 0x25a748: 0x45030001
label_25a74c:
    if (ctx->pc == 0x25A74Cu) {
        ctx->pc = 0x25A74Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x25A750u;
        goto label_25a750;
    }
    ctx->pc = 0x25A748u;
    {
        const bool branch_taken_0x25a748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a748) {
            ctx->pc = 0x25A74Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x25A750u;
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A750u;
label_25a750:
    // 0x25a750: 0x32820800
    ctx->pc = 0x25a750u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 2048));
label_25a754:
    // 0x25a754: 0x5040000b
label_25a758:
    if (ctx->pc == 0x25A758u) {
        ctx->pc = 0x25A758u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 227)));
        ctx->pc = 0x25A75Cu;
        goto label_25a75c;
    }
    ctx->pc = 0x25A754u;
    {
        const bool branch_taken_0x25a754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a754) {
            ctx->pc = 0x25A758u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 227)));
            ctx->pc = 0x25A784u;
            goto label_25a784;
        }
    }
    ctx->pc = 0x25A75Cu;
label_25a75c:
    // 0x25a75c: 0x3c014000
    ctx->pc = 0x25a75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_25a760:
    // 0x25a760: 0x44810000
    ctx->pc = 0x25a760u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a764:
    // 0x25a764: 0x4600a036
    ctx->pc = 0x25a764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a768:
    // 0x25a768: 0x0
    ctx->pc = 0x25a768u;
    // NOP
label_25a76c:
    // 0x25a76c: 0x45000002
label_25a770:
    if (ctx->pc == 0x25A770u) {
        ctx->pc = 0x25A770u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25A774u;
        goto label_25a774;
    }
    ctx->pc = 0x25A76Cu;
    {
        const bool branch_taken_0x25a76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A770u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x25a76c) {
            ctx->pc = 0x25A778u;
            goto label_25a778;
        }
    }
    ctx->pc = 0x25A774u;
label_25a774:
    // 0x25a774: 0x2416ffff
    ctx->pc = 0x25a774u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a778:
    // 0x25a778: 0x4480a000
    ctx->pc = 0x25a778u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_25a77c:
    // 0x25a77c: 0x10000022
label_25a780:
    if (ctx->pc == 0x25A780u) {
        ctx->pc = 0x25A780u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A784u;
        goto label_25a784;
    }
    ctx->pc = 0x25A77Cu;
    {
        const bool branch_taken_0x25a77c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A780u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a77c) {
            ctx->pc = 0x25A808u;
            goto label_25a808;
        }
    }
    ctx->pc = 0x25A784u;
label_25a784:
    // 0x25a784: 0x4420015
label_25a788:
    if (ctx->pc == 0x25A788u) {
        ctx->pc = 0x25A788u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 227)));
        ctx->pc = 0x25A78Cu;
        goto label_25a78c;
    }
    ctx->pc = 0x25A784u;
    {
        const bool branch_taken_0x25a784 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25a784) {
            ctx->pc = 0x25A788u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 227)));
            ctx->pc = 0x25A7DCu;
            goto label_25a7dc;
        }
    }
    ctx->pc = 0x25A78Cu;
label_25a78c:
    // 0x25a78c: 0x44820000
    ctx->pc = 0x25a78cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_25a790:
    // 0x25a790: 0x46800020
    ctx->pc = 0x25a790u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_25a794:
    // 0x25a794: 0x4600a501
    ctx->pc = 0x25a794u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25a798:
    // 0x25a798: 0x44800000
    ctx->pc = 0x25a798u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_25a79c:
    // 0x25a79c: 0x4600a036
    ctx->pc = 0x25a79cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a7a0:
    // 0x25a7a0: 0x45000003
label_25a7a4:
    if (ctx->pc == 0x25A7A4u) {
        ctx->pc = 0x25A7A8u;
        goto label_25a7a8;
    }
    ctx->pc = 0x25A7A0u;
    {
        const bool branch_taken_0x25a7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a7a0) {
            ctx->pc = 0x25A7B0u;
            goto label_25a7b0;
        }
    }
    ctx->pc = 0x25A7A8u;
label_25a7a8:
    // 0x25a7a8: 0x3c013f80
    ctx->pc = 0x25a7a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_25a7ac:
    // 0x25a7ac: 0x4481a000
    ctx->pc = 0x25a7acu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_25a7b0:
    // 0x25a7b0: 0xc0b5486
label_25a7b4:
    if (ctx->pc == 0x25A7B4u) {
        ctx->pc = 0x25A7B4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25A7B8u;
        goto label_25a7b8;
    }
    ctx->pc = 0x25A7B0u;
    SET_GPR_U32(ctx, 31, 0x25A7B8u);
    ctx->pc = 0x25A7B4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A7B8u; }
    }
    if (ctx->pc != 0x25A7B8u) { return; }
    ctx->pc = 0x25A7B8u;
label_25a7b8:
    // 0x25a7b8: 0x962300e4
    ctx->pc = 0x25a7b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25a7bc:
    // 0x25a7bc: 0x621823
    ctx->pc = 0x25a7bcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a7c0:
    // 0x25a7c0: 0xa62300e4
    ctx->pc = 0x25a7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 3));
label_25a7c4:
    // 0x25a7c4: 0x31c00
    ctx->pc = 0x25a7c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
label_25a7c8:
    // 0x25a7c8: 0x4620001
label_25a7cc:
    if (ctx->pc == 0x25A7CCu) {
        ctx->pc = 0x25A7CCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x25A7D0u;
        goto label_25a7d0;
    }
    ctx->pc = 0x25A7C8u;
    {
        const bool branch_taken_0x25a7c8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25a7c8) {
            ctx->pc = 0x25A7CCu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x25A7D0u;
            goto label_25a7d0;
        }
    }
    ctx->pc = 0x25A7D0u;
label_25a7d0:
    // 0x25a7d0: 0x862200e4
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25a7d4:
    // 0x25a7d4: 0x2c530001
    ctx->pc = 0x25a7d4u;
    SET_GPR_U32(ctx, 19, SLTU32(GPR_U32(ctx, 2), 1));
label_25a7d8:
    // 0x25a7d8: 0x822300e3
    ctx->pc = 0x25a7d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 227)));
label_25a7dc:
    // 0x25a7dc: 0x2402ffff
    ctx->pc = 0x25a7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a7e0:
    // 0x25a7e0: 0x54620004
label_25a7e4:
    if (ctx->pc == 0x25A7E4u) {
        ctx->pc = 0x25A7E4u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x25A7E8u;
        goto label_25a7e8;
    }
    ctx->pc = 0x25A7E0u;
    {
        const bool branch_taken_0x25a7e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25a7e0) {
            ctx->pc = 0x25A7E4u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->pc = 0x25A7F4u;
            goto label_25a7f4;
        }
    }
    ctx->pc = 0x25A7E8u;
label_25a7e8:
    // 0x25a7e8: 0x2416ffff
    ctx->pc = 0x25a7e8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a7ec:
    // 0x25a7ec: 0x10000006
label_25a7f0:
    if (ctx->pc == 0x25A7F0u) {
        ctx->pc = 0x25A7F0u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A7F4u;
        goto label_25a7f4;
    }
    ctx->pc = 0x25A7ECu;
    {
        const bool branch_taken_0x25a7ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A7F0u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a7ec) {
            ctx->pc = 0x25A808u;
            goto label_25a808;
        }
    }
    ctx->pc = 0x25A7F4u;
label_25a7f4:
    // 0x25a7f4: 0x44820000
    ctx->pc = 0x25a7f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_25a7f8:
    // 0x25a7f8: 0x46800020
    ctx->pc = 0x25a7f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_25a7fc:
    // 0x25a7fc: 0x46000064
    ctx->pc = 0x25a7fcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_25a800:
    // 0x25a800: 0x44160800
    ctx->pc = 0x25a800u;
    SET_GPR_U32(ctx, 22, *(uint32_t*)&ctx->f[1]);
label_25a804:
    // 0x25a804: 0x24170001
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_25a808:
    // 0x25a808: 0x220202d
    ctx->pc = 0x25a808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a80c:
    // 0x25a80c: 0xc094e70
label_25a810:
    if (ctx->pc == 0x25A810u) {
        ctx->pc = 0x25A810u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25A814u;
        goto label_25a814;
    }
    ctx->pc = 0x25A80Cu;
    SET_GPR_U32(ctx, 31, 0x25A814u);
    ctx->pc = 0x25A810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A814u; }
    }
    if (ctx->pc != 0x25A814u) { return; }
    ctx->pc = 0x25A814u;
label_25a814:
    // 0x25a814: 0xc7a00024
    ctx->pc = 0x25a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25a818:
    // 0x25a818: 0x3c014000
    ctx->pc = 0x25a818u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_25a81c:
    // 0x25a81c: 0x44810800
    ctx->pc = 0x25a81cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_25a820:
    // 0x25a820: 0x46010000
    ctx->pc = 0x25a820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25a824:
    // 0x25a824: 0xe7a00024
    ctx->pc = 0x25a824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_25a828:
    // 0x25a828: 0x8e220000
    ctx->pc = 0x25a828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a82c:
    // 0x25a82c: 0x8c420000
    ctx->pc = 0x25a82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a830:
    // 0x25a830: 0x2443ffff
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_25a834:
    // 0x25a834: 0x2c62000a
    ctx->pc = 0x25a834u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_25a838:
    // 0x25a838: 0x104001dc
label_25a83c:
    if (ctx->pc == 0x25A83Cu) {
        ctx->pc = 0x25A83Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x25A840u;
        goto label_25a840;
    }
    ctx->pc = 0x25A838u;
    {
        const bool branch_taken_0x25a838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A83Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25a838) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A840u;
label_25a840:
    // 0x25a840: 0x24428ee0
    ctx->pc = 0x25a840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938336));
label_25a844:
    // 0x25a844: 0x31880
    ctx->pc = 0x25a844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25a848:
    // 0x25a848: 0x621821
    ctx->pc = 0x25a848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a84c:
    // 0x25a84c: 0x8c620000
    ctx->pc = 0x25a84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a850:
    // 0x25a850: 0x400008
label_25a854:
    if (ctx->pc == 0x25A854u) {
        ctx->pc = 0x25A858u;
        goto label_25a858;
    }
    ctx->pc = 0x25A850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A648u: goto label_25a648;
            case 0x25A64Cu: goto label_25a64c;
            case 0x25A650u: goto label_25a650;
            case 0x25A654u: goto label_25a654;
            case 0x25A658u: goto label_25a658;
            case 0x25A65Cu: goto label_25a65c;
            case 0x25A660u: goto label_25a660;
            case 0x25A664u: goto label_25a664;
            case 0x25A668u: goto label_25a668;
            case 0x25A66Cu: goto label_25a66c;
            case 0x25A670u: goto label_25a670;
            case 0x25A674u: goto label_25a674;
            case 0x25A678u: goto label_25a678;
            case 0x25A67Cu: goto label_25a67c;
            case 0x25A680u: goto label_25a680;
            case 0x25A684u: goto label_25a684;
            case 0x25A688u: goto label_25a688;
            case 0x25A68Cu: goto label_25a68c;
            case 0x25A690u: goto label_25a690;
            case 0x25A694u: goto label_25a694;
            case 0x25A698u: goto label_25a698;
            case 0x25A69Cu: goto label_25a69c;
            case 0x25A6A0u: goto label_25a6a0;
            case 0x25A6A4u: goto label_25a6a4;
            case 0x25A6A8u: goto label_25a6a8;
            case 0x25A6ACu: goto label_25a6ac;
            case 0x25A6B0u: goto label_25a6b0;
            case 0x25A6B4u: goto label_25a6b4;
            case 0x25A6B8u: goto label_25a6b8;
            case 0x25A6BCu: goto label_25a6bc;
            case 0x25A6C0u: goto label_25a6c0;
            case 0x25A6C4u: goto label_25a6c4;
            case 0x25A6C8u: goto label_25a6c8;
            case 0x25A6CCu: goto label_25a6cc;
            case 0x25A6D0u: goto label_25a6d0;
            case 0x25A6D4u: goto label_25a6d4;
            case 0x25A6D8u: goto label_25a6d8;
            case 0x25A6DCu: goto label_25a6dc;
            case 0x25A6E0u: goto label_25a6e0;
            case 0x25A6E4u: goto label_25a6e4;
            case 0x25A6E8u: goto label_25a6e8;
            case 0x25A6ECu: goto label_25a6ec;
            case 0x25A6F0u: goto label_25a6f0;
            case 0x25A6F4u: goto label_25a6f4;
            case 0x25A6F8u: goto label_25a6f8;
            case 0x25A6FCu: goto label_25a6fc;
            case 0x25A700u: goto label_25a700;
            case 0x25A704u: goto label_25a704;
            case 0x25A708u: goto label_25a708;
            case 0x25A70Cu: goto label_25a70c;
            case 0x25A710u: goto label_25a710;
            case 0x25A714u: goto label_25a714;
            case 0x25A718u: goto label_25a718;
            case 0x25A71Cu: goto label_25a71c;
            case 0x25A720u: goto label_25a720;
            case 0x25A724u: goto label_25a724;
            case 0x25A728u: goto label_25a728;
            case 0x25A72Cu: goto label_25a72c;
            case 0x25A730u: goto label_25a730;
            case 0x25A734u: goto label_25a734;
            case 0x25A738u: goto label_25a738;
            case 0x25A73Cu: goto label_25a73c;
            case 0x25A740u: goto label_25a740;
            case 0x25A744u: goto label_25a744;
            case 0x25A748u: goto label_25a748;
            case 0x25A74Cu: goto label_25a74c;
            case 0x25A750u: goto label_25a750;
            case 0x25A754u: goto label_25a754;
            case 0x25A758u: goto label_25a758;
            case 0x25A75Cu: goto label_25a75c;
            case 0x25A760u: goto label_25a760;
            case 0x25A764u: goto label_25a764;
            case 0x25A768u: goto label_25a768;
            case 0x25A76Cu: goto label_25a76c;
            case 0x25A770u: goto label_25a770;
            case 0x25A774u: goto label_25a774;
            case 0x25A778u: goto label_25a778;
            case 0x25A77Cu: goto label_25a77c;
            case 0x25A780u: goto label_25a780;
            case 0x25A784u: goto label_25a784;
            case 0x25A788u: goto label_25a788;
            case 0x25A78Cu: goto label_25a78c;
            case 0x25A790u: goto label_25a790;
            case 0x25A794u: goto label_25a794;
            case 0x25A798u: goto label_25a798;
            case 0x25A79Cu: goto label_25a79c;
            case 0x25A7A0u: goto label_25a7a0;
            case 0x25A7A4u: goto label_25a7a4;
            case 0x25A7A8u: goto label_25a7a8;
            case 0x25A7ACu: goto label_25a7ac;
            case 0x25A7B0u: goto label_25a7b0;
            case 0x25A7B4u: goto label_25a7b4;
            case 0x25A7B8u: goto label_25a7b8;
            case 0x25A7BCu: goto label_25a7bc;
            case 0x25A7C0u: goto label_25a7c0;
            case 0x25A7C4u: goto label_25a7c4;
            case 0x25A7C8u: goto label_25a7c8;
            case 0x25A7CCu: goto label_25a7cc;
            case 0x25A7D0u: goto label_25a7d0;
            case 0x25A7D4u: goto label_25a7d4;
            case 0x25A7D8u: goto label_25a7d8;
            case 0x25A7DCu: goto label_25a7dc;
            case 0x25A7E0u: goto label_25a7e0;
            case 0x25A7E4u: goto label_25a7e4;
            case 0x25A7E8u: goto label_25a7e8;
            case 0x25A7ECu: goto label_25a7ec;
            case 0x25A7F0u: goto label_25a7f0;
            case 0x25A7F4u: goto label_25a7f4;
            case 0x25A7F8u: goto label_25a7f8;
            case 0x25A7FCu: goto label_25a7fc;
            case 0x25A800u: goto label_25a800;
            case 0x25A804u: goto label_25a804;
            case 0x25A808u: goto label_25a808;
            case 0x25A80Cu: goto label_25a80c;
            case 0x25A810u: goto label_25a810;
            case 0x25A814u: goto label_25a814;
            case 0x25A818u: goto label_25a818;
            case 0x25A81Cu: goto label_25a81c;
            case 0x25A820u: goto label_25a820;
            case 0x25A824u: goto label_25a824;
            case 0x25A828u: goto label_25a828;
            case 0x25A82Cu: goto label_25a82c;
            case 0x25A830u: goto label_25a830;
            case 0x25A834u: goto label_25a834;
            case 0x25A838u: goto label_25a838;
            case 0x25A83Cu: goto label_25a83c;
            case 0x25A840u: goto label_25a840;
            case 0x25A844u: goto label_25a844;
            case 0x25A848u: goto label_25a848;
            case 0x25A84Cu: goto label_25a84c;
            case 0x25A850u: goto label_25a850;
            case 0x25A854u: goto label_25a854;
            case 0x25A858u: goto label_25a858;
            case 0x25A85Cu: goto label_25a85c;
            case 0x25A860u: goto label_25a860;
            case 0x25A864u: goto label_25a864;
            case 0x25A868u: goto label_25a868;
            case 0x25A86Cu: goto label_25a86c;
            case 0x25A870u: goto label_25a870;
            case 0x25A874u: goto label_25a874;
            case 0x25A878u: goto label_25a878;
            case 0x25A87Cu: goto label_25a87c;
            case 0x25A880u: goto label_25a880;
            case 0x25A884u: goto label_25a884;
            case 0x25A888u: goto label_25a888;
            case 0x25A88Cu: goto label_25a88c;
            case 0x25A890u: goto label_25a890;
            case 0x25A894u: goto label_25a894;
            case 0x25A898u: goto label_25a898;
            case 0x25A89Cu: goto label_25a89c;
            case 0x25A8A0u: goto label_25a8a0;
            case 0x25A8A4u: goto label_25a8a4;
            case 0x25A8A8u: goto label_25a8a8;
            case 0x25A8ACu: goto label_25a8ac;
            case 0x25A8B0u: goto label_25a8b0;
            case 0x25A8B4u: goto label_25a8b4;
            case 0x25A8B8u: goto label_25a8b8;
            case 0x25A8BCu: goto label_25a8bc;
            case 0x25A8C0u: goto label_25a8c0;
            case 0x25A8C4u: goto label_25a8c4;
            case 0x25A8C8u: goto label_25a8c8;
            case 0x25A8CCu: goto label_25a8cc;
            case 0x25A8D0u: goto label_25a8d0;
            case 0x25A8D4u: goto label_25a8d4;
            case 0x25A8D8u: goto label_25a8d8;
            case 0x25A8DCu: goto label_25a8dc;
            case 0x25A8E0u: goto label_25a8e0;
            case 0x25A8E4u: goto label_25a8e4;
            case 0x25A8E8u: goto label_25a8e8;
            case 0x25A8ECu: goto label_25a8ec;
            case 0x25A8F0u: goto label_25a8f0;
            case 0x25A8F4u: goto label_25a8f4;
            case 0x25A8F8u: goto label_25a8f8;
            case 0x25A8FCu: goto label_25a8fc;
            case 0x25A900u: goto label_25a900;
            case 0x25A904u: goto label_25a904;
            case 0x25A908u: goto label_25a908;
            case 0x25A90Cu: goto label_25a90c;
            case 0x25A910u: goto label_25a910;
            case 0x25A914u: goto label_25a914;
            case 0x25A918u: goto label_25a918;
            case 0x25A91Cu: goto label_25a91c;
            case 0x25A920u: goto label_25a920;
            case 0x25A924u: goto label_25a924;
            case 0x25A928u: goto label_25a928;
            case 0x25A92Cu: goto label_25a92c;
            case 0x25A930u: goto label_25a930;
            case 0x25A934u: goto label_25a934;
            case 0x25A938u: goto label_25a938;
            case 0x25A93Cu: goto label_25a93c;
            case 0x25A940u: goto label_25a940;
            case 0x25A944u: goto label_25a944;
            case 0x25A948u: goto label_25a948;
            case 0x25A94Cu: goto label_25a94c;
            case 0x25A950u: goto label_25a950;
            case 0x25A954u: goto label_25a954;
            case 0x25A958u: goto label_25a958;
            case 0x25A95Cu: goto label_25a95c;
            case 0x25A960u: goto label_25a960;
            case 0x25A964u: goto label_25a964;
            case 0x25A968u: goto label_25a968;
            case 0x25A96Cu: goto label_25a96c;
            case 0x25A970u: goto label_25a970;
            case 0x25A974u: goto label_25a974;
            case 0x25A978u: goto label_25a978;
            case 0x25A97Cu: goto label_25a97c;
            case 0x25A980u: goto label_25a980;
            case 0x25A984u: goto label_25a984;
            case 0x25A988u: goto label_25a988;
            case 0x25A98Cu: goto label_25a98c;
            case 0x25A990u: goto label_25a990;
            case 0x25A994u: goto label_25a994;
            case 0x25A998u: goto label_25a998;
            case 0x25A99Cu: goto label_25a99c;
            case 0x25A9A0u: goto label_25a9a0;
            case 0x25A9A4u: goto label_25a9a4;
            case 0x25A9A8u: goto label_25a9a8;
            case 0x25A9ACu: goto label_25a9ac;
            case 0x25A9B0u: goto label_25a9b0;
            case 0x25A9B4u: goto label_25a9b4;
            case 0x25A9B8u: goto label_25a9b8;
            case 0x25A9BCu: goto label_25a9bc;
            case 0x25A9C0u: goto label_25a9c0;
            case 0x25A9C4u: goto label_25a9c4;
            case 0x25A9C8u: goto label_25a9c8;
            case 0x25A9CCu: goto label_25a9cc;
            case 0x25A9D0u: goto label_25a9d0;
            case 0x25A9D4u: goto label_25a9d4;
            case 0x25A9D8u: goto label_25a9d8;
            case 0x25A9DCu: goto label_25a9dc;
            case 0x25A9E0u: goto label_25a9e0;
            case 0x25A9E4u: goto label_25a9e4;
            case 0x25A9E8u: goto label_25a9e8;
            case 0x25A9ECu: goto label_25a9ec;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25A9F4u: goto label_25a9f4;
            case 0x25A9F8u: goto label_25a9f8;
            case 0x25A9FCu: goto label_25a9fc;
            case 0x25AA00u: goto label_25aa00;
            case 0x25AA04u: goto label_25aa04;
            case 0x25AA08u: goto label_25aa08;
            case 0x25AA0Cu: goto label_25aa0c;
            case 0x25AA10u: goto label_25aa10;
            case 0x25AA14u: goto label_25aa14;
            case 0x25AA18u: goto label_25aa18;
            case 0x25AA1Cu: goto label_25aa1c;
            case 0x25AA20u: goto label_25aa20;
            case 0x25AA24u: goto label_25aa24;
            case 0x25AA28u: goto label_25aa28;
            case 0x25AA2Cu: goto label_25aa2c;
            case 0x25AA30u: goto label_25aa30;
            case 0x25AA34u: goto label_25aa34;
            case 0x25AA38u: goto label_25aa38;
            case 0x25AA3Cu: goto label_25aa3c;
            case 0x25AA40u: goto label_25aa40;
            case 0x25AA44u: goto label_25aa44;
            case 0x25AA48u: goto label_25aa48;
            case 0x25AA4Cu: goto label_25aa4c;
            case 0x25AA50u: goto label_25aa50;
            case 0x25AA54u: goto label_25aa54;
            case 0x25AA58u: goto label_25aa58;
            case 0x25AA5Cu: goto label_25aa5c;
            case 0x25AA60u: goto label_25aa60;
            case 0x25AA64u: goto label_25aa64;
            case 0x25AA68u: goto label_25aa68;
            case 0x25AA6Cu: goto label_25aa6c;
            case 0x25AA70u: goto label_25aa70;
            case 0x25AA74u: goto label_25aa74;
            case 0x25AA78u: goto label_25aa78;
            case 0x25AA7Cu: goto label_25aa7c;
            case 0x25AA80u: goto label_25aa80;
            case 0x25AA84u: goto label_25aa84;
            case 0x25AA88u: goto label_25aa88;
            case 0x25AA8Cu: goto label_25aa8c;
            case 0x25AA90u: goto label_25aa90;
            case 0x25AA94u: goto label_25aa94;
            case 0x25AA98u: goto label_25aa98;
            case 0x25AA9Cu: goto label_25aa9c;
            case 0x25AAA0u: goto label_25aaa0;
            case 0x25AAA4u: goto label_25aaa4;
            case 0x25AAA8u: goto label_25aaa8;
            case 0x25AAACu: goto label_25aaac;
            case 0x25AAB0u: goto label_25aab0;
            case 0x25AAB4u: goto label_25aab4;
            case 0x25AAB8u: goto label_25aab8;
            case 0x25AABCu: goto label_25aabc;
            case 0x25AAC0u: goto label_25aac0;
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AAC8u: goto label_25aac8;
            case 0x25AACCu: goto label_25aacc;
            case 0x25AAD0u: goto label_25aad0;
            case 0x25AAD4u: goto label_25aad4;
            case 0x25AAD8u: goto label_25aad8;
            case 0x25AADCu: goto label_25aadc;
            case 0x25AAE0u: goto label_25aae0;
            case 0x25AAE4u: goto label_25aae4;
            case 0x25AAE8u: goto label_25aae8;
            case 0x25AAECu: goto label_25aaec;
            case 0x25AAF0u: goto label_25aaf0;
            case 0x25AAF4u: goto label_25aaf4;
            case 0x25AAF8u: goto label_25aaf8;
            case 0x25AAFCu: goto label_25aafc;
            case 0x25AB00u: goto label_25ab00;
            case 0x25AB04u: goto label_25ab04;
            case 0x25AB08u: goto label_25ab08;
            case 0x25AB0Cu: goto label_25ab0c;
            case 0x25AB10u: goto label_25ab10;
            case 0x25AB14u: goto label_25ab14;
            case 0x25AB18u: goto label_25ab18;
            case 0x25AB1Cu: goto label_25ab1c;
            case 0x25AB20u: goto label_25ab20;
            case 0x25AB24u: goto label_25ab24;
            case 0x25AB28u: goto label_25ab28;
            case 0x25AB2Cu: goto label_25ab2c;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB34u: goto label_25ab34;
            case 0x25AB38u: goto label_25ab38;
            case 0x25AB3Cu: goto label_25ab3c;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB48u: goto label_25ab48;
            case 0x25AB4Cu: goto label_25ab4c;
            case 0x25AB50u: goto label_25ab50;
            case 0x25AB54u: goto label_25ab54;
            case 0x25AB58u: goto label_25ab58;
            case 0x25AB5Cu: goto label_25ab5c;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB64u: goto label_25ab64;
            case 0x25AB68u: goto label_25ab68;
            case 0x25AB6Cu: goto label_25ab6c;
            case 0x25AB70u: goto label_25ab70;
            case 0x25AB74u: goto label_25ab74;
            case 0x25AB78u: goto label_25ab78;
            case 0x25AB7Cu: goto label_25ab7c;
            case 0x25AB80u: goto label_25ab80;
            case 0x25AB84u: goto label_25ab84;
            case 0x25AB88u: goto label_25ab88;
            case 0x25AB8Cu: goto label_25ab8c;
            case 0x25AB90u: goto label_25ab90;
            case 0x25AB94u: goto label_25ab94;
            case 0x25AB98u: goto label_25ab98;
            case 0x25AB9Cu: goto label_25ab9c;
            case 0x25ABA0u: goto label_25aba0;
            case 0x25ABA4u: goto label_25aba4;
            case 0x25ABA8u: goto label_25aba8;
            case 0x25ABACu: goto label_25abac;
            case 0x25ABB0u: goto label_25abb0;
            case 0x25ABB4u: goto label_25abb4;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABBCu: goto label_25abbc;
            case 0x25ABC0u: goto label_25abc0;
            case 0x25ABC4u: goto label_25abc4;
            case 0x25ABC8u: goto label_25abc8;
            case 0x25ABCCu: goto label_25abcc;
            case 0x25ABD0u: goto label_25abd0;
            case 0x25ABD4u: goto label_25abd4;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABE0u: goto label_25abe0;
            case 0x25ABE4u: goto label_25abe4;
            case 0x25ABE8u: goto label_25abe8;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABF0u: goto label_25abf0;
            case 0x25ABF4u: goto label_25abf4;
            case 0x25ABF8u: goto label_25abf8;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC00u: goto label_25ac00;
            case 0x25AC04u: goto label_25ac04;
            case 0x25AC08u: goto label_25ac08;
            case 0x25AC0Cu: goto label_25ac0c;
            case 0x25AC10u: goto label_25ac10;
            case 0x25AC14u: goto label_25ac14;
            case 0x25AC18u: goto label_25ac18;
            case 0x25AC1Cu: goto label_25ac1c;
            case 0x25AC20u: goto label_25ac20;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC28u: goto label_25ac28;
            case 0x25AC2Cu: goto label_25ac2c;
            case 0x25AC30u: goto label_25ac30;
            case 0x25AC34u: goto label_25ac34;
            case 0x25AC38u: goto label_25ac38;
            case 0x25AC3Cu: goto label_25ac3c;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC44u: goto label_25ac44;
            case 0x25AC48u: goto label_25ac48;
            case 0x25AC4Cu: goto label_25ac4c;
            case 0x25AC50u: goto label_25ac50;
            case 0x25AC54u: goto label_25ac54;
            case 0x25AC58u: goto label_25ac58;
            case 0x25AC5Cu: goto label_25ac5c;
            case 0x25AC60u: goto label_25ac60;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC68u: goto label_25ac68;
            case 0x25AC6Cu: goto label_25ac6c;
            case 0x25AC70u: goto label_25ac70;
            case 0x25AC74u: goto label_25ac74;
            case 0x25AC78u: goto label_25ac78;
            case 0x25AC7Cu: goto label_25ac7c;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AC84u: goto label_25ac84;
            case 0x25AC88u: goto label_25ac88;
            case 0x25AC8Cu: goto label_25ac8c;
            case 0x25AC90u: goto label_25ac90;
            case 0x25AC94u: goto label_25ac94;
            case 0x25AC98u: goto label_25ac98;
            case 0x25AC9Cu: goto label_25ac9c;
            case 0x25ACA0u: goto label_25aca0;
            case 0x25ACA4u: goto label_25aca4;
            case 0x25ACA8u: goto label_25aca8;
            case 0x25ACACu: goto label_25acac;
            case 0x25ACB0u: goto label_25acb0;
            case 0x25ACB4u: goto label_25acb4;
            case 0x25ACB8u: goto label_25acb8;
            case 0x25ACBCu: goto label_25acbc;
            case 0x25ACC0u: goto label_25acc0;
            case 0x25ACC4u: goto label_25acc4;
            case 0x25ACC8u: goto label_25acc8;
            case 0x25ACCCu: goto label_25accc;
            case 0x25ACD0u: goto label_25acd0;
            case 0x25ACD4u: goto label_25acd4;
            case 0x25ACD8u: goto label_25acd8;
            case 0x25ACDCu: goto label_25acdc;
            case 0x25ACE0u: goto label_25ace0;
            case 0x25ACE4u: goto label_25ace4;
            case 0x25ACE8u: goto label_25ace8;
            case 0x25ACECu: goto label_25acec;
            case 0x25ACF0u: goto label_25acf0;
            case 0x25ACF4u: goto label_25acf4;
            case 0x25ACF8u: goto label_25acf8;
            case 0x25ACFCu: goto label_25acfc;
            case 0x25AD00u: goto label_25ad00;
            case 0x25AD04u: goto label_25ad04;
            case 0x25AD08u: goto label_25ad08;
            case 0x25AD0Cu: goto label_25ad0c;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD14u: goto label_25ad14;
            case 0x25AD18u: goto label_25ad18;
            case 0x25AD1Cu: goto label_25ad1c;
            case 0x25AD20u: goto label_25ad20;
            case 0x25AD24u: goto label_25ad24;
            case 0x25AD28u: goto label_25ad28;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD30u: goto label_25ad30;
            case 0x25AD34u: goto label_25ad34;
            case 0x25AD38u: goto label_25ad38;
            case 0x25AD3Cu: goto label_25ad3c;
            case 0x25AD40u: goto label_25ad40;
            case 0x25AD44u: goto label_25ad44;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD50u: goto label_25ad50;
            case 0x25AD54u: goto label_25ad54;
            case 0x25AD58u: goto label_25ad58;
            case 0x25AD5Cu: goto label_25ad5c;
            case 0x25AD60u: goto label_25ad60;
            case 0x25AD64u: goto label_25ad64;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD6Cu: goto label_25ad6c;
            case 0x25AD70u: goto label_25ad70;
            case 0x25AD74u: goto label_25ad74;
            case 0x25AD78u: goto label_25ad78;
            case 0x25AD7Cu: goto label_25ad7c;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD84u: goto label_25ad84;
            case 0x25AD88u: goto label_25ad88;
            case 0x25AD8Cu: goto label_25ad8c;
            case 0x25AD90u: goto label_25ad90;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            case 0x25AD9Cu: goto label_25ad9c;
            case 0x25ADA0u: goto label_25ada0;
            case 0x25ADA4u: goto label_25ada4;
            case 0x25ADA8u: goto label_25ada8;
            case 0x25ADACu: goto label_25adac;
            case 0x25ADB0u: goto label_25adb0;
            case 0x25ADB4u: goto label_25adb4;
            case 0x25ADB8u: goto label_25adb8;
            case 0x25ADBCu: goto label_25adbc;
            case 0x25ADC0u: goto label_25adc0;
            case 0x25ADC4u: goto label_25adc4;
            case 0x25ADC8u: goto label_25adc8;
            case 0x25ADCCu: goto label_25adcc;
            case 0x25ADD0u: goto label_25add0;
            case 0x25ADD4u: goto label_25add4;
            case 0x25ADD8u: goto label_25add8;
            case 0x25ADDCu: goto label_25addc;
            case 0x25ADE0u: goto label_25ade0;
            case 0x25ADE4u: goto label_25ade4;
            case 0x25ADE8u: goto label_25ade8;
            case 0x25ADECu: goto label_25adec;
            case 0x25ADF0u: goto label_25adf0;
            case 0x25ADF4u: goto label_25adf4;
            case 0x25ADF8u: goto label_25adf8;
            case 0x25ADFCu: goto label_25adfc;
            case 0x25AE00u: goto label_25ae00;
            case 0x25AE04u: goto label_25ae04;
            case 0x25AE08u: goto label_25ae08;
            case 0x25AE0Cu: goto label_25ae0c;
            case 0x25AE10u: goto label_25ae10;
            case 0x25AE14u: goto label_25ae14;
            case 0x25AE18u: goto label_25ae18;
            case 0x25AE1Cu: goto label_25ae1c;
            case 0x25AE20u: goto label_25ae20;
            case 0x25AE24u: goto label_25ae24;
            case 0x25AE28u: goto label_25ae28;
            case 0x25AE2Cu: goto label_25ae2c;
            case 0x25AE30u: goto label_25ae30;
            case 0x25AE34u: goto label_25ae34;
            case 0x25AE38u: goto label_25ae38;
            case 0x25AE3Cu: goto label_25ae3c;
            case 0x25AE40u: goto label_25ae40;
            case 0x25AE44u: goto label_25ae44;
            case 0x25AE48u: goto label_25ae48;
            case 0x25AE4Cu: goto label_25ae4c;
            case 0x25AE50u: goto label_25ae50;
            case 0x25AE54u: goto label_25ae54;
            case 0x25AE58u: goto label_25ae58;
            case 0x25AE5Cu: goto label_25ae5c;
            case 0x25AE60u: goto label_25ae60;
            case 0x25AE64u: goto label_25ae64;
            case 0x25AE68u: goto label_25ae68;
            case 0x25AE6Cu: goto label_25ae6c;
            case 0x25AE70u: goto label_25ae70;
            case 0x25AE74u: goto label_25ae74;
            case 0x25AE78u: goto label_25ae78;
            case 0x25AE7Cu: goto label_25ae7c;
            case 0x25AE80u: goto label_25ae80;
            case 0x25AE84u: goto label_25ae84;
            case 0x25AE88u: goto label_25ae88;
            case 0x25AE8Cu: goto label_25ae8c;
            case 0x25AE90u: goto label_25ae90;
            case 0x25AE94u: goto label_25ae94;
            case 0x25AE98u: goto label_25ae98;
            case 0x25AE9Cu: goto label_25ae9c;
            case 0x25AEA0u: goto label_25aea0;
            case 0x25AEA4u: goto label_25aea4;
            case 0x25AEA8u: goto label_25aea8;
            case 0x25AEACu: goto label_25aeac;
            case 0x25AEB0u: goto label_25aeb0;
            case 0x25AEB4u: goto label_25aeb4;
            case 0x25AEB8u: goto label_25aeb8;
            case 0x25AEBCu: goto label_25aebc;
            case 0x25AEC0u: goto label_25aec0;
            case 0x25AEC4u: goto label_25aec4;
            case 0x25AEC8u: goto label_25aec8;
            case 0x25AECCu: goto label_25aecc;
            case 0x25AED0u: goto label_25aed0;
            case 0x25AED4u: goto label_25aed4;
            case 0x25AED8u: goto label_25aed8;
            case 0x25AEDCu: goto label_25aedc;
            case 0x25AEE0u: goto label_25aee0;
            case 0x25AEE4u: goto label_25aee4;
            case 0x25AEE8u: goto label_25aee8;
            case 0x25AEECu: goto label_25aeec;
            case 0x25AEF0u: goto label_25aef0;
            case 0x25AEF4u: goto label_25aef4;
            case 0x25AEF8u: goto label_25aef8;
            case 0x25AEFCu: goto label_25aefc;
            case 0x25AF00u: goto label_25af00;
            case 0x25AF04u: goto label_25af04;
            case 0x25AF08u: goto label_25af08;
            case 0x25AF0Cu: goto label_25af0c;
            case 0x25AF10u: goto label_25af10;
            case 0x25AF14u: goto label_25af14;
            case 0x25AF18u: goto label_25af18;
            case 0x25AF1Cu: goto label_25af1c;
            case 0x25AF20u: goto label_25af20;
            case 0x25AF24u: goto label_25af24;
            case 0x25AF28u: goto label_25af28;
            case 0x25AF2Cu: goto label_25af2c;
            case 0x25AF30u: goto label_25af30;
            case 0x25AF34u: goto label_25af34;
            case 0x25AF38u: goto label_25af38;
            case 0x25AF3Cu: goto label_25af3c;
            case 0x25AF40u: goto label_25af40;
            case 0x25AF44u: goto label_25af44;
            case 0x25AF48u: goto label_25af48;
            case 0x25AF4Cu: goto label_25af4c;
            case 0x25AF50u: goto label_25af50;
            case 0x25AF54u: goto label_25af54;
            case 0x25AF58u: goto label_25af58;
            case 0x25AF5Cu: goto label_25af5c;
            case 0x25AF60u: goto label_25af60;
            case 0x25AF64u: goto label_25af64;
            case 0x25AF68u: goto label_25af68;
            case 0x25AF6Cu: goto label_25af6c;
            case 0x25AF70u: goto label_25af70;
            case 0x25AF74u: goto label_25af74;
            case 0x25AF78u: goto label_25af78;
            case 0x25AF7Cu: goto label_25af7c;
            case 0x25AF80u: goto label_25af80;
            case 0x25AF84u: goto label_25af84;
            case 0x25AF88u: goto label_25af88;
            case 0x25AF8Cu: goto label_25af8c;
            case 0x25AF90u: goto label_25af90;
            case 0x25AF94u: goto label_25af94;
            case 0x25AF98u: goto label_25af98;
            case 0x25AF9Cu: goto label_25af9c;
            case 0x25AFA0u: goto label_25afa0;
            case 0x25AFA4u: goto label_25afa4;
            case 0x25AFA8u: goto label_25afa8;
            case 0x25AFACu: goto label_25afac;
            case 0x25AFB0u: goto label_25afb0;
            case 0x25AFB4u: goto label_25afb4;
            case 0x25AFB8u: goto label_25afb8;
            case 0x25AFBCu: goto label_25afbc;
            case 0x25AFC0u: goto label_25afc0;
            case 0x25AFC4u: goto label_25afc4;
            case 0x25AFC8u: goto label_25afc8;
            case 0x25AFCCu: goto label_25afcc;
            case 0x25AFD0u: goto label_25afd0;
            case 0x25AFD4u: goto label_25afd4;
            case 0x25AFD8u: goto label_25afd8;
            case 0x25AFDCu: goto label_25afdc;
            case 0x25AFE0u: goto label_25afe0;
            case 0x25AFE4u: goto label_25afe4;
            case 0x25AFE8u: goto label_25afe8;
            case 0x25AFECu: goto label_25afec;
            case 0x25AFF0u: goto label_25aff0;
            case 0x25AFF4u: goto label_25aff4;
            case 0x25AFF8u: goto label_25aff8;
            case 0x25AFFCu: goto label_25affc;
            case 0x25B000u: goto label_25b000;
            case 0x25B004u: goto label_25b004;
            case 0x25B008u: goto label_25b008;
            case 0x25B00Cu: goto label_25b00c;
            case 0x25B010u: goto label_25b010;
            case 0x25B014u: goto label_25b014;
            case 0x25B018u: goto label_25b018;
            case 0x25B01Cu: goto label_25b01c;
            case 0x25B020u: goto label_25b020;
            case 0x25B024u: goto label_25b024;
            case 0x25B028u: goto label_25b028;
            case 0x25B02Cu: goto label_25b02c;
            case 0x25B030u: goto label_25b030;
            case 0x25B034u: goto label_25b034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A858u;
label_25a858:
    // 0x25a858: 0x8ea20000
    ctx->pc = 0x25a858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25a85c:
    // 0x25a85c: 0x2443ffff
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_25a860:
    // 0x25a860: 0x2c620010
    ctx->pc = 0x25a860u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_25a864:
    // 0x25a864: 0x1040002d
label_25a868:
    if (ctx->pc == 0x25A868u) {
        ctx->pc = 0x25A868u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x25A86Cu;
        goto label_25a86c;
    }
    ctx->pc = 0x25A864u;
    {
        const bool branch_taken_0x25a864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A868u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25a864) {
            ctx->pc = 0x25A91Cu;
            goto label_25a91c;
        }
    }
    ctx->pc = 0x25A86Cu;
label_25a86c:
    // 0x25a86c: 0x24428f10
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938384));
label_25a870:
    // 0x25a870: 0x31880
    ctx->pc = 0x25a870u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25a874:
    // 0x25a874: 0x621821
    ctx->pc = 0x25a874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a878:
    // 0x25a878: 0x8c620000
    ctx->pc = 0x25a878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a87c:
    // 0x25a87c: 0x400008
label_25a880:
    if (ctx->pc == 0x25A880u) {
        ctx->pc = 0x25A884u;
        goto label_25a884;
    }
    ctx->pc = 0x25A87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A648u: goto label_25a648;
            case 0x25A64Cu: goto label_25a64c;
            case 0x25A650u: goto label_25a650;
            case 0x25A654u: goto label_25a654;
            case 0x25A658u: goto label_25a658;
            case 0x25A65Cu: goto label_25a65c;
            case 0x25A660u: goto label_25a660;
            case 0x25A664u: goto label_25a664;
            case 0x25A668u: goto label_25a668;
            case 0x25A66Cu: goto label_25a66c;
            case 0x25A670u: goto label_25a670;
            case 0x25A674u: goto label_25a674;
            case 0x25A678u: goto label_25a678;
            case 0x25A67Cu: goto label_25a67c;
            case 0x25A680u: goto label_25a680;
            case 0x25A684u: goto label_25a684;
            case 0x25A688u: goto label_25a688;
            case 0x25A68Cu: goto label_25a68c;
            case 0x25A690u: goto label_25a690;
            case 0x25A694u: goto label_25a694;
            case 0x25A698u: goto label_25a698;
            case 0x25A69Cu: goto label_25a69c;
            case 0x25A6A0u: goto label_25a6a0;
            case 0x25A6A4u: goto label_25a6a4;
            case 0x25A6A8u: goto label_25a6a8;
            case 0x25A6ACu: goto label_25a6ac;
            case 0x25A6B0u: goto label_25a6b0;
            case 0x25A6B4u: goto label_25a6b4;
            case 0x25A6B8u: goto label_25a6b8;
            case 0x25A6BCu: goto label_25a6bc;
            case 0x25A6C0u: goto label_25a6c0;
            case 0x25A6C4u: goto label_25a6c4;
            case 0x25A6C8u: goto label_25a6c8;
            case 0x25A6CCu: goto label_25a6cc;
            case 0x25A6D0u: goto label_25a6d0;
            case 0x25A6D4u: goto label_25a6d4;
            case 0x25A6D8u: goto label_25a6d8;
            case 0x25A6DCu: goto label_25a6dc;
            case 0x25A6E0u: goto label_25a6e0;
            case 0x25A6E4u: goto label_25a6e4;
            case 0x25A6E8u: goto label_25a6e8;
            case 0x25A6ECu: goto label_25a6ec;
            case 0x25A6F0u: goto label_25a6f0;
            case 0x25A6F4u: goto label_25a6f4;
            case 0x25A6F8u: goto label_25a6f8;
            case 0x25A6FCu: goto label_25a6fc;
            case 0x25A700u: goto label_25a700;
            case 0x25A704u: goto label_25a704;
            case 0x25A708u: goto label_25a708;
            case 0x25A70Cu: goto label_25a70c;
            case 0x25A710u: goto label_25a710;
            case 0x25A714u: goto label_25a714;
            case 0x25A718u: goto label_25a718;
            case 0x25A71Cu: goto label_25a71c;
            case 0x25A720u: goto label_25a720;
            case 0x25A724u: goto label_25a724;
            case 0x25A728u: goto label_25a728;
            case 0x25A72Cu: goto label_25a72c;
            case 0x25A730u: goto label_25a730;
            case 0x25A734u: goto label_25a734;
            case 0x25A738u: goto label_25a738;
            case 0x25A73Cu: goto label_25a73c;
            case 0x25A740u: goto label_25a740;
            case 0x25A744u: goto label_25a744;
            case 0x25A748u: goto label_25a748;
            case 0x25A74Cu: goto label_25a74c;
            case 0x25A750u: goto label_25a750;
            case 0x25A754u: goto label_25a754;
            case 0x25A758u: goto label_25a758;
            case 0x25A75Cu: goto label_25a75c;
            case 0x25A760u: goto label_25a760;
            case 0x25A764u: goto label_25a764;
            case 0x25A768u: goto label_25a768;
            case 0x25A76Cu: goto label_25a76c;
            case 0x25A770u: goto label_25a770;
            case 0x25A774u: goto label_25a774;
            case 0x25A778u: goto label_25a778;
            case 0x25A77Cu: goto label_25a77c;
            case 0x25A780u: goto label_25a780;
            case 0x25A784u: goto label_25a784;
            case 0x25A788u: goto label_25a788;
            case 0x25A78Cu: goto label_25a78c;
            case 0x25A790u: goto label_25a790;
            case 0x25A794u: goto label_25a794;
            case 0x25A798u: goto label_25a798;
            case 0x25A79Cu: goto label_25a79c;
            case 0x25A7A0u: goto label_25a7a0;
            case 0x25A7A4u: goto label_25a7a4;
            case 0x25A7A8u: goto label_25a7a8;
            case 0x25A7ACu: goto label_25a7ac;
            case 0x25A7B0u: goto label_25a7b0;
            case 0x25A7B4u: goto label_25a7b4;
            case 0x25A7B8u: goto label_25a7b8;
            case 0x25A7BCu: goto label_25a7bc;
            case 0x25A7C0u: goto label_25a7c0;
            case 0x25A7C4u: goto label_25a7c4;
            case 0x25A7C8u: goto label_25a7c8;
            case 0x25A7CCu: goto label_25a7cc;
            case 0x25A7D0u: goto label_25a7d0;
            case 0x25A7D4u: goto label_25a7d4;
            case 0x25A7D8u: goto label_25a7d8;
            case 0x25A7DCu: goto label_25a7dc;
            case 0x25A7E0u: goto label_25a7e0;
            case 0x25A7E4u: goto label_25a7e4;
            case 0x25A7E8u: goto label_25a7e8;
            case 0x25A7ECu: goto label_25a7ec;
            case 0x25A7F0u: goto label_25a7f0;
            case 0x25A7F4u: goto label_25a7f4;
            case 0x25A7F8u: goto label_25a7f8;
            case 0x25A7FCu: goto label_25a7fc;
            case 0x25A800u: goto label_25a800;
            case 0x25A804u: goto label_25a804;
            case 0x25A808u: goto label_25a808;
            case 0x25A80Cu: goto label_25a80c;
            case 0x25A810u: goto label_25a810;
            case 0x25A814u: goto label_25a814;
            case 0x25A818u: goto label_25a818;
            case 0x25A81Cu: goto label_25a81c;
            case 0x25A820u: goto label_25a820;
            case 0x25A824u: goto label_25a824;
            case 0x25A828u: goto label_25a828;
            case 0x25A82Cu: goto label_25a82c;
            case 0x25A830u: goto label_25a830;
            case 0x25A834u: goto label_25a834;
            case 0x25A838u: goto label_25a838;
            case 0x25A83Cu: goto label_25a83c;
            case 0x25A840u: goto label_25a840;
            case 0x25A844u: goto label_25a844;
            case 0x25A848u: goto label_25a848;
            case 0x25A84Cu: goto label_25a84c;
            case 0x25A850u: goto label_25a850;
            case 0x25A854u: goto label_25a854;
            case 0x25A858u: goto label_25a858;
            case 0x25A85Cu: goto label_25a85c;
            case 0x25A860u: goto label_25a860;
            case 0x25A864u: goto label_25a864;
            case 0x25A868u: goto label_25a868;
            case 0x25A86Cu: goto label_25a86c;
            case 0x25A870u: goto label_25a870;
            case 0x25A874u: goto label_25a874;
            case 0x25A878u: goto label_25a878;
            case 0x25A87Cu: goto label_25a87c;
            case 0x25A880u: goto label_25a880;
            case 0x25A884u: goto label_25a884;
            case 0x25A888u: goto label_25a888;
            case 0x25A88Cu: goto label_25a88c;
            case 0x25A890u: goto label_25a890;
            case 0x25A894u: goto label_25a894;
            case 0x25A898u: goto label_25a898;
            case 0x25A89Cu: goto label_25a89c;
            case 0x25A8A0u: goto label_25a8a0;
            case 0x25A8A4u: goto label_25a8a4;
            case 0x25A8A8u: goto label_25a8a8;
            case 0x25A8ACu: goto label_25a8ac;
            case 0x25A8B0u: goto label_25a8b0;
            case 0x25A8B4u: goto label_25a8b4;
            case 0x25A8B8u: goto label_25a8b8;
            case 0x25A8BCu: goto label_25a8bc;
            case 0x25A8C0u: goto label_25a8c0;
            case 0x25A8C4u: goto label_25a8c4;
            case 0x25A8C8u: goto label_25a8c8;
            case 0x25A8CCu: goto label_25a8cc;
            case 0x25A8D0u: goto label_25a8d0;
            case 0x25A8D4u: goto label_25a8d4;
            case 0x25A8D8u: goto label_25a8d8;
            case 0x25A8DCu: goto label_25a8dc;
            case 0x25A8E0u: goto label_25a8e0;
            case 0x25A8E4u: goto label_25a8e4;
            case 0x25A8E8u: goto label_25a8e8;
            case 0x25A8ECu: goto label_25a8ec;
            case 0x25A8F0u: goto label_25a8f0;
            case 0x25A8F4u: goto label_25a8f4;
            case 0x25A8F8u: goto label_25a8f8;
            case 0x25A8FCu: goto label_25a8fc;
            case 0x25A900u: goto label_25a900;
            case 0x25A904u: goto label_25a904;
            case 0x25A908u: goto label_25a908;
            case 0x25A90Cu: goto label_25a90c;
            case 0x25A910u: goto label_25a910;
            case 0x25A914u: goto label_25a914;
            case 0x25A918u: goto label_25a918;
            case 0x25A91Cu: goto label_25a91c;
            case 0x25A920u: goto label_25a920;
            case 0x25A924u: goto label_25a924;
            case 0x25A928u: goto label_25a928;
            case 0x25A92Cu: goto label_25a92c;
            case 0x25A930u: goto label_25a930;
            case 0x25A934u: goto label_25a934;
            case 0x25A938u: goto label_25a938;
            case 0x25A93Cu: goto label_25a93c;
            case 0x25A940u: goto label_25a940;
            case 0x25A944u: goto label_25a944;
            case 0x25A948u: goto label_25a948;
            case 0x25A94Cu: goto label_25a94c;
            case 0x25A950u: goto label_25a950;
            case 0x25A954u: goto label_25a954;
            case 0x25A958u: goto label_25a958;
            case 0x25A95Cu: goto label_25a95c;
            case 0x25A960u: goto label_25a960;
            case 0x25A964u: goto label_25a964;
            case 0x25A968u: goto label_25a968;
            case 0x25A96Cu: goto label_25a96c;
            case 0x25A970u: goto label_25a970;
            case 0x25A974u: goto label_25a974;
            case 0x25A978u: goto label_25a978;
            case 0x25A97Cu: goto label_25a97c;
            case 0x25A980u: goto label_25a980;
            case 0x25A984u: goto label_25a984;
            case 0x25A988u: goto label_25a988;
            case 0x25A98Cu: goto label_25a98c;
            case 0x25A990u: goto label_25a990;
            case 0x25A994u: goto label_25a994;
            case 0x25A998u: goto label_25a998;
            case 0x25A99Cu: goto label_25a99c;
            case 0x25A9A0u: goto label_25a9a0;
            case 0x25A9A4u: goto label_25a9a4;
            case 0x25A9A8u: goto label_25a9a8;
            case 0x25A9ACu: goto label_25a9ac;
            case 0x25A9B0u: goto label_25a9b0;
            case 0x25A9B4u: goto label_25a9b4;
            case 0x25A9B8u: goto label_25a9b8;
            case 0x25A9BCu: goto label_25a9bc;
            case 0x25A9C0u: goto label_25a9c0;
            case 0x25A9C4u: goto label_25a9c4;
            case 0x25A9C8u: goto label_25a9c8;
            case 0x25A9CCu: goto label_25a9cc;
            case 0x25A9D0u: goto label_25a9d0;
            case 0x25A9D4u: goto label_25a9d4;
            case 0x25A9D8u: goto label_25a9d8;
            case 0x25A9DCu: goto label_25a9dc;
            case 0x25A9E0u: goto label_25a9e0;
            case 0x25A9E4u: goto label_25a9e4;
            case 0x25A9E8u: goto label_25a9e8;
            case 0x25A9ECu: goto label_25a9ec;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25A9F4u: goto label_25a9f4;
            case 0x25A9F8u: goto label_25a9f8;
            case 0x25A9FCu: goto label_25a9fc;
            case 0x25AA00u: goto label_25aa00;
            case 0x25AA04u: goto label_25aa04;
            case 0x25AA08u: goto label_25aa08;
            case 0x25AA0Cu: goto label_25aa0c;
            case 0x25AA10u: goto label_25aa10;
            case 0x25AA14u: goto label_25aa14;
            case 0x25AA18u: goto label_25aa18;
            case 0x25AA1Cu: goto label_25aa1c;
            case 0x25AA20u: goto label_25aa20;
            case 0x25AA24u: goto label_25aa24;
            case 0x25AA28u: goto label_25aa28;
            case 0x25AA2Cu: goto label_25aa2c;
            case 0x25AA30u: goto label_25aa30;
            case 0x25AA34u: goto label_25aa34;
            case 0x25AA38u: goto label_25aa38;
            case 0x25AA3Cu: goto label_25aa3c;
            case 0x25AA40u: goto label_25aa40;
            case 0x25AA44u: goto label_25aa44;
            case 0x25AA48u: goto label_25aa48;
            case 0x25AA4Cu: goto label_25aa4c;
            case 0x25AA50u: goto label_25aa50;
            case 0x25AA54u: goto label_25aa54;
            case 0x25AA58u: goto label_25aa58;
            case 0x25AA5Cu: goto label_25aa5c;
            case 0x25AA60u: goto label_25aa60;
            case 0x25AA64u: goto label_25aa64;
            case 0x25AA68u: goto label_25aa68;
            case 0x25AA6Cu: goto label_25aa6c;
            case 0x25AA70u: goto label_25aa70;
            case 0x25AA74u: goto label_25aa74;
            case 0x25AA78u: goto label_25aa78;
            case 0x25AA7Cu: goto label_25aa7c;
            case 0x25AA80u: goto label_25aa80;
            case 0x25AA84u: goto label_25aa84;
            case 0x25AA88u: goto label_25aa88;
            case 0x25AA8Cu: goto label_25aa8c;
            case 0x25AA90u: goto label_25aa90;
            case 0x25AA94u: goto label_25aa94;
            case 0x25AA98u: goto label_25aa98;
            case 0x25AA9Cu: goto label_25aa9c;
            case 0x25AAA0u: goto label_25aaa0;
            case 0x25AAA4u: goto label_25aaa4;
            case 0x25AAA8u: goto label_25aaa8;
            case 0x25AAACu: goto label_25aaac;
            case 0x25AAB0u: goto label_25aab0;
            case 0x25AAB4u: goto label_25aab4;
            case 0x25AAB8u: goto label_25aab8;
            case 0x25AABCu: goto label_25aabc;
            case 0x25AAC0u: goto label_25aac0;
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AAC8u: goto label_25aac8;
            case 0x25AACCu: goto label_25aacc;
            case 0x25AAD0u: goto label_25aad0;
            case 0x25AAD4u: goto label_25aad4;
            case 0x25AAD8u: goto label_25aad8;
            case 0x25AADCu: goto label_25aadc;
            case 0x25AAE0u: goto label_25aae0;
            case 0x25AAE4u: goto label_25aae4;
            case 0x25AAE8u: goto label_25aae8;
            case 0x25AAECu: goto label_25aaec;
            case 0x25AAF0u: goto label_25aaf0;
            case 0x25AAF4u: goto label_25aaf4;
            case 0x25AAF8u: goto label_25aaf8;
            case 0x25AAFCu: goto label_25aafc;
            case 0x25AB00u: goto label_25ab00;
            case 0x25AB04u: goto label_25ab04;
            case 0x25AB08u: goto label_25ab08;
            case 0x25AB0Cu: goto label_25ab0c;
            case 0x25AB10u: goto label_25ab10;
            case 0x25AB14u: goto label_25ab14;
            case 0x25AB18u: goto label_25ab18;
            case 0x25AB1Cu: goto label_25ab1c;
            case 0x25AB20u: goto label_25ab20;
            case 0x25AB24u: goto label_25ab24;
            case 0x25AB28u: goto label_25ab28;
            case 0x25AB2Cu: goto label_25ab2c;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB34u: goto label_25ab34;
            case 0x25AB38u: goto label_25ab38;
            case 0x25AB3Cu: goto label_25ab3c;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB48u: goto label_25ab48;
            case 0x25AB4Cu: goto label_25ab4c;
            case 0x25AB50u: goto label_25ab50;
            case 0x25AB54u: goto label_25ab54;
            case 0x25AB58u: goto label_25ab58;
            case 0x25AB5Cu: goto label_25ab5c;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB64u: goto label_25ab64;
            case 0x25AB68u: goto label_25ab68;
            case 0x25AB6Cu: goto label_25ab6c;
            case 0x25AB70u: goto label_25ab70;
            case 0x25AB74u: goto label_25ab74;
            case 0x25AB78u: goto label_25ab78;
            case 0x25AB7Cu: goto label_25ab7c;
            case 0x25AB80u: goto label_25ab80;
            case 0x25AB84u: goto label_25ab84;
            case 0x25AB88u: goto label_25ab88;
            case 0x25AB8Cu: goto label_25ab8c;
            case 0x25AB90u: goto label_25ab90;
            case 0x25AB94u: goto label_25ab94;
            case 0x25AB98u: goto label_25ab98;
            case 0x25AB9Cu: goto label_25ab9c;
            case 0x25ABA0u: goto label_25aba0;
            case 0x25ABA4u: goto label_25aba4;
            case 0x25ABA8u: goto label_25aba8;
            case 0x25ABACu: goto label_25abac;
            case 0x25ABB0u: goto label_25abb0;
            case 0x25ABB4u: goto label_25abb4;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABBCu: goto label_25abbc;
            case 0x25ABC0u: goto label_25abc0;
            case 0x25ABC4u: goto label_25abc4;
            case 0x25ABC8u: goto label_25abc8;
            case 0x25ABCCu: goto label_25abcc;
            case 0x25ABD0u: goto label_25abd0;
            case 0x25ABD4u: goto label_25abd4;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABE0u: goto label_25abe0;
            case 0x25ABE4u: goto label_25abe4;
            case 0x25ABE8u: goto label_25abe8;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABF0u: goto label_25abf0;
            case 0x25ABF4u: goto label_25abf4;
            case 0x25ABF8u: goto label_25abf8;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC00u: goto label_25ac00;
            case 0x25AC04u: goto label_25ac04;
            case 0x25AC08u: goto label_25ac08;
            case 0x25AC0Cu: goto label_25ac0c;
            case 0x25AC10u: goto label_25ac10;
            case 0x25AC14u: goto label_25ac14;
            case 0x25AC18u: goto label_25ac18;
            case 0x25AC1Cu: goto label_25ac1c;
            case 0x25AC20u: goto label_25ac20;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC28u: goto label_25ac28;
            case 0x25AC2Cu: goto label_25ac2c;
            case 0x25AC30u: goto label_25ac30;
            case 0x25AC34u: goto label_25ac34;
            case 0x25AC38u: goto label_25ac38;
            case 0x25AC3Cu: goto label_25ac3c;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC44u: goto label_25ac44;
            case 0x25AC48u: goto label_25ac48;
            case 0x25AC4Cu: goto label_25ac4c;
            case 0x25AC50u: goto label_25ac50;
            case 0x25AC54u: goto label_25ac54;
            case 0x25AC58u: goto label_25ac58;
            case 0x25AC5Cu: goto label_25ac5c;
            case 0x25AC60u: goto label_25ac60;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC68u: goto label_25ac68;
            case 0x25AC6Cu: goto label_25ac6c;
            case 0x25AC70u: goto label_25ac70;
            case 0x25AC74u: goto label_25ac74;
            case 0x25AC78u: goto label_25ac78;
            case 0x25AC7Cu: goto label_25ac7c;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AC84u: goto label_25ac84;
            case 0x25AC88u: goto label_25ac88;
            case 0x25AC8Cu: goto label_25ac8c;
            case 0x25AC90u: goto label_25ac90;
            case 0x25AC94u: goto label_25ac94;
            case 0x25AC98u: goto label_25ac98;
            case 0x25AC9Cu: goto label_25ac9c;
            case 0x25ACA0u: goto label_25aca0;
            case 0x25ACA4u: goto label_25aca4;
            case 0x25ACA8u: goto label_25aca8;
            case 0x25ACACu: goto label_25acac;
            case 0x25ACB0u: goto label_25acb0;
            case 0x25ACB4u: goto label_25acb4;
            case 0x25ACB8u: goto label_25acb8;
            case 0x25ACBCu: goto label_25acbc;
            case 0x25ACC0u: goto label_25acc0;
            case 0x25ACC4u: goto label_25acc4;
            case 0x25ACC8u: goto label_25acc8;
            case 0x25ACCCu: goto label_25accc;
            case 0x25ACD0u: goto label_25acd0;
            case 0x25ACD4u: goto label_25acd4;
            case 0x25ACD8u: goto label_25acd8;
            case 0x25ACDCu: goto label_25acdc;
            case 0x25ACE0u: goto label_25ace0;
            case 0x25ACE4u: goto label_25ace4;
            case 0x25ACE8u: goto label_25ace8;
            case 0x25ACECu: goto label_25acec;
            case 0x25ACF0u: goto label_25acf0;
            case 0x25ACF4u: goto label_25acf4;
            case 0x25ACF8u: goto label_25acf8;
            case 0x25ACFCu: goto label_25acfc;
            case 0x25AD00u: goto label_25ad00;
            case 0x25AD04u: goto label_25ad04;
            case 0x25AD08u: goto label_25ad08;
            case 0x25AD0Cu: goto label_25ad0c;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD14u: goto label_25ad14;
            case 0x25AD18u: goto label_25ad18;
            case 0x25AD1Cu: goto label_25ad1c;
            case 0x25AD20u: goto label_25ad20;
            case 0x25AD24u: goto label_25ad24;
            case 0x25AD28u: goto label_25ad28;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD30u: goto label_25ad30;
            case 0x25AD34u: goto label_25ad34;
            case 0x25AD38u: goto label_25ad38;
            case 0x25AD3Cu: goto label_25ad3c;
            case 0x25AD40u: goto label_25ad40;
            case 0x25AD44u: goto label_25ad44;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD50u: goto label_25ad50;
            case 0x25AD54u: goto label_25ad54;
            case 0x25AD58u: goto label_25ad58;
            case 0x25AD5Cu: goto label_25ad5c;
            case 0x25AD60u: goto label_25ad60;
            case 0x25AD64u: goto label_25ad64;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD6Cu: goto label_25ad6c;
            case 0x25AD70u: goto label_25ad70;
            case 0x25AD74u: goto label_25ad74;
            case 0x25AD78u: goto label_25ad78;
            case 0x25AD7Cu: goto label_25ad7c;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD84u: goto label_25ad84;
            case 0x25AD88u: goto label_25ad88;
            case 0x25AD8Cu: goto label_25ad8c;
            case 0x25AD90u: goto label_25ad90;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            case 0x25AD9Cu: goto label_25ad9c;
            case 0x25ADA0u: goto label_25ada0;
            case 0x25ADA4u: goto label_25ada4;
            case 0x25ADA8u: goto label_25ada8;
            case 0x25ADACu: goto label_25adac;
            case 0x25ADB0u: goto label_25adb0;
            case 0x25ADB4u: goto label_25adb4;
            case 0x25ADB8u: goto label_25adb8;
            case 0x25ADBCu: goto label_25adbc;
            case 0x25ADC0u: goto label_25adc0;
            case 0x25ADC4u: goto label_25adc4;
            case 0x25ADC8u: goto label_25adc8;
            case 0x25ADCCu: goto label_25adcc;
            case 0x25ADD0u: goto label_25add0;
            case 0x25ADD4u: goto label_25add4;
            case 0x25ADD8u: goto label_25add8;
            case 0x25ADDCu: goto label_25addc;
            case 0x25ADE0u: goto label_25ade0;
            case 0x25ADE4u: goto label_25ade4;
            case 0x25ADE8u: goto label_25ade8;
            case 0x25ADECu: goto label_25adec;
            case 0x25ADF0u: goto label_25adf0;
            case 0x25ADF4u: goto label_25adf4;
            case 0x25ADF8u: goto label_25adf8;
            case 0x25ADFCu: goto label_25adfc;
            case 0x25AE00u: goto label_25ae00;
            case 0x25AE04u: goto label_25ae04;
            case 0x25AE08u: goto label_25ae08;
            case 0x25AE0Cu: goto label_25ae0c;
            case 0x25AE10u: goto label_25ae10;
            case 0x25AE14u: goto label_25ae14;
            case 0x25AE18u: goto label_25ae18;
            case 0x25AE1Cu: goto label_25ae1c;
            case 0x25AE20u: goto label_25ae20;
            case 0x25AE24u: goto label_25ae24;
            case 0x25AE28u: goto label_25ae28;
            case 0x25AE2Cu: goto label_25ae2c;
            case 0x25AE30u: goto label_25ae30;
            case 0x25AE34u: goto label_25ae34;
            case 0x25AE38u: goto label_25ae38;
            case 0x25AE3Cu: goto label_25ae3c;
            case 0x25AE40u: goto label_25ae40;
            case 0x25AE44u: goto label_25ae44;
            case 0x25AE48u: goto label_25ae48;
            case 0x25AE4Cu: goto label_25ae4c;
            case 0x25AE50u: goto label_25ae50;
            case 0x25AE54u: goto label_25ae54;
            case 0x25AE58u: goto label_25ae58;
            case 0x25AE5Cu: goto label_25ae5c;
            case 0x25AE60u: goto label_25ae60;
            case 0x25AE64u: goto label_25ae64;
            case 0x25AE68u: goto label_25ae68;
            case 0x25AE6Cu: goto label_25ae6c;
            case 0x25AE70u: goto label_25ae70;
            case 0x25AE74u: goto label_25ae74;
            case 0x25AE78u: goto label_25ae78;
            case 0x25AE7Cu: goto label_25ae7c;
            case 0x25AE80u: goto label_25ae80;
            case 0x25AE84u: goto label_25ae84;
            case 0x25AE88u: goto label_25ae88;
            case 0x25AE8Cu: goto label_25ae8c;
            case 0x25AE90u: goto label_25ae90;
            case 0x25AE94u: goto label_25ae94;
            case 0x25AE98u: goto label_25ae98;
            case 0x25AE9Cu: goto label_25ae9c;
            case 0x25AEA0u: goto label_25aea0;
            case 0x25AEA4u: goto label_25aea4;
            case 0x25AEA8u: goto label_25aea8;
            case 0x25AEACu: goto label_25aeac;
            case 0x25AEB0u: goto label_25aeb0;
            case 0x25AEB4u: goto label_25aeb4;
            case 0x25AEB8u: goto label_25aeb8;
            case 0x25AEBCu: goto label_25aebc;
            case 0x25AEC0u: goto label_25aec0;
            case 0x25AEC4u: goto label_25aec4;
            case 0x25AEC8u: goto label_25aec8;
            case 0x25AECCu: goto label_25aecc;
            case 0x25AED0u: goto label_25aed0;
            case 0x25AED4u: goto label_25aed4;
            case 0x25AED8u: goto label_25aed8;
            case 0x25AEDCu: goto label_25aedc;
            case 0x25AEE0u: goto label_25aee0;
            case 0x25AEE4u: goto label_25aee4;
            case 0x25AEE8u: goto label_25aee8;
            case 0x25AEECu: goto label_25aeec;
            case 0x25AEF0u: goto label_25aef0;
            case 0x25AEF4u: goto label_25aef4;
            case 0x25AEF8u: goto label_25aef8;
            case 0x25AEFCu: goto label_25aefc;
            case 0x25AF00u: goto label_25af00;
            case 0x25AF04u: goto label_25af04;
            case 0x25AF08u: goto label_25af08;
            case 0x25AF0Cu: goto label_25af0c;
            case 0x25AF10u: goto label_25af10;
            case 0x25AF14u: goto label_25af14;
            case 0x25AF18u: goto label_25af18;
            case 0x25AF1Cu: goto label_25af1c;
            case 0x25AF20u: goto label_25af20;
            case 0x25AF24u: goto label_25af24;
            case 0x25AF28u: goto label_25af28;
            case 0x25AF2Cu: goto label_25af2c;
            case 0x25AF30u: goto label_25af30;
            case 0x25AF34u: goto label_25af34;
            case 0x25AF38u: goto label_25af38;
            case 0x25AF3Cu: goto label_25af3c;
            case 0x25AF40u: goto label_25af40;
            case 0x25AF44u: goto label_25af44;
            case 0x25AF48u: goto label_25af48;
            case 0x25AF4Cu: goto label_25af4c;
            case 0x25AF50u: goto label_25af50;
            case 0x25AF54u: goto label_25af54;
            case 0x25AF58u: goto label_25af58;
            case 0x25AF5Cu: goto label_25af5c;
            case 0x25AF60u: goto label_25af60;
            case 0x25AF64u: goto label_25af64;
            case 0x25AF68u: goto label_25af68;
            case 0x25AF6Cu: goto label_25af6c;
            case 0x25AF70u: goto label_25af70;
            case 0x25AF74u: goto label_25af74;
            case 0x25AF78u: goto label_25af78;
            case 0x25AF7Cu: goto label_25af7c;
            case 0x25AF80u: goto label_25af80;
            case 0x25AF84u: goto label_25af84;
            case 0x25AF88u: goto label_25af88;
            case 0x25AF8Cu: goto label_25af8c;
            case 0x25AF90u: goto label_25af90;
            case 0x25AF94u: goto label_25af94;
            case 0x25AF98u: goto label_25af98;
            case 0x25AF9Cu: goto label_25af9c;
            case 0x25AFA0u: goto label_25afa0;
            case 0x25AFA4u: goto label_25afa4;
            case 0x25AFA8u: goto label_25afa8;
            case 0x25AFACu: goto label_25afac;
            case 0x25AFB0u: goto label_25afb0;
            case 0x25AFB4u: goto label_25afb4;
            case 0x25AFB8u: goto label_25afb8;
            case 0x25AFBCu: goto label_25afbc;
            case 0x25AFC0u: goto label_25afc0;
            case 0x25AFC4u: goto label_25afc4;
            case 0x25AFC8u: goto label_25afc8;
            case 0x25AFCCu: goto label_25afcc;
            case 0x25AFD0u: goto label_25afd0;
            case 0x25AFD4u: goto label_25afd4;
            case 0x25AFD8u: goto label_25afd8;
            case 0x25AFDCu: goto label_25afdc;
            case 0x25AFE0u: goto label_25afe0;
            case 0x25AFE4u: goto label_25afe4;
            case 0x25AFE8u: goto label_25afe8;
            case 0x25AFECu: goto label_25afec;
            case 0x25AFF0u: goto label_25aff0;
            case 0x25AFF4u: goto label_25aff4;
            case 0x25AFF8u: goto label_25aff8;
            case 0x25AFFCu: goto label_25affc;
            case 0x25B000u: goto label_25b000;
            case 0x25B004u: goto label_25b004;
            case 0x25B008u: goto label_25b008;
            case 0x25B00Cu: goto label_25b00c;
            case 0x25B010u: goto label_25b010;
            case 0x25B014u: goto label_25b014;
            case 0x25B018u: goto label_25b018;
            case 0x25B01Cu: goto label_25b01c;
            case 0x25B020u: goto label_25b020;
            case 0x25B024u: goto label_25b024;
            case 0x25B028u: goto label_25b028;
            case 0x25B02Cu: goto label_25b02c;
            case 0x25B030u: goto label_25b030;
            case 0x25B034u: goto label_25b034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A884u;
label_25a884:
    // 0x25a884: 0x16c001c9
label_25a888:
    if (ctx->pc == 0x25A888u) {
        ctx->pc = 0x25A888u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x25A88Cu;
        goto label_25a88c;
    }
    ctx->pc = 0x25A884u;
    {
        const bool branch_taken_0x25a884 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x25A888u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x25a884) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A88Cu;
label_25a88c:
    // 0x25a88c: 0x8e220000
    ctx->pc = 0x25a88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a890:
    // 0x25a890: 0x2404ffff
    ctx->pc = 0x25a890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a894:
    // 0x25a894: 0x3c013f4c
    ctx->pc = 0x25a894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_25a898:
    // 0x25a898: 0x3421cccd
    ctx->pc = 0x25a898u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_25a89c:
    // 0x25a89c: 0x44816000
    ctx->pc = 0x25a89cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_25a8a0:
    // 0x25a8a0: 0x8c46003c
    ctx->pc = 0x25a8a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25a8a4:
    // 0x25a8a4: 0xc08d120
label_25a8a8:
    if (ctx->pc == 0x25A8A8u) {
        ctx->pc = 0x25A8A8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A8ACu;
        goto label_25a8ac;
    }
    ctx->pc = 0x25A8A4u;
    SET_GPR_U32(ctx, 31, 0x25A8ACu);
    ctx->pc = 0x25A8A8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234480u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_magic_0x234480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A8ACu; }
    }
    if (ctx->pc != 0x25A8ACu) { return; }
    ctx->pc = 0x25A8ACu;
label_25a8ac:
    // 0x25a8ac: 0x100000cc
label_25a8b0:
    if (ctx->pc == 0x25A8B0u) {
        ctx->pc = 0x25A8B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A8B4u;
        goto label_25a8b4;
    }
    ctx->pc = 0x25A8ACu;
    {
        const bool branch_taken_0x25a8ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A8B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a8ac) {
            ctx->pc = 0x25ABE0u;
            goto label_25abe0;
        }
    }
    ctx->pc = 0x25A8B4u;
label_25a8b4:
    // 0x25a8b4: 0x2402fffe
    ctx->pc = 0x25a8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_25a8b8:
    // 0x25a8b8: 0x16c20019
label_25a8bc:
    if (ctx->pc == 0x25A8BCu) {
        ctx->pc = 0x25A8BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
        ctx->pc = 0x25A8C0u;
        goto label_25a8c0;
    }
    ctx->pc = 0x25A8B8u;
    {
        const bool branch_taken_0x25a8b8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A8BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
        if (branch_taken_0x25a8b8) {
            ctx->pc = 0x25A920u;
            goto label_25a920;
        }
    }
    ctx->pc = 0x25A8C0u;
label_25a8c0:
    // 0x25a8c0: 0x862300e4
    ctx->pc = 0x25a8c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25a8c4:
    // 0x25a8c4: 0x24020002
    ctx->pc = 0x25a8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25a8c8:
    // 0x25a8c8: 0x14620008
label_25a8cc:
    if (ctx->pc == 0x25A8CCu) {
        ctx->pc = 0x25A8CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x25A8D0u;
        goto label_25a8d0;
    }
    ctx->pc = 0x25A8C8u;
    {
        const bool branch_taken_0x25a8c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A8CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25a8c8) {
            ctx->pc = 0x25A8ECu;
            goto label_25a8ec;
        }
    }
    ctx->pc = 0x25A8D0u;
label_25a8d0:
    // 0x25a8d0: 0x220202d
    ctx->pc = 0x25a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a8d4:
    // 0x25a8d4: 0x8c45cdac
    ctx->pc = 0x25a8d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
label_25a8d8:
    // 0x25a8d8: 0x3c06003b
    ctx->pc = 0x25a8d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_25a8dc:
    // 0x25a8dc: 0xc096984
label_25a8e0:
    if (ctx->pc == 0x25A8E0u) {
        ctx->pc = 0x25A8E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938232));
        ctx->pc = 0x25A8E4u;
        goto label_25a8e4;
    }
    ctx->pc = 0x25A8DCu;
    SET_GPR_U32(ctx, 31, 0x25A8E4u);
    ctx->pc = 0x25A8E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938232));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A8E4u; }
    }
    if (ctx->pc != 0x25A8E4u) { return; }
    ctx->pc = 0x25A8E4u;
label_25a8e4:
    // 0x25a8e4: 0x10000007
label_25a8e8:
    if (ctx->pc == 0x25A8E8u) {
        ctx->pc = 0x25A8E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->pc = 0x25A8ECu;
        goto label_25a8ec;
    }
    ctx->pc = 0x25A8E4u;
    {
        const bool branch_taken_0x25a8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A8E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967196));
        if (branch_taken_0x25a8e4) {
            ctx->pc = 0x25A904u;
            goto label_25a904;
        }
    }
    ctx->pc = 0x25A8ECu;
label_25a8ec:
    // 0x25a8ec: 0x220202d
    ctx->pc = 0x25a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a8f0:
    // 0x25a8f0: 0x8c45cdac
    ctx->pc = 0x25a8f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
label_25a8f4:
    // 0x25a8f4: 0x3c06003b
    ctx->pc = 0x25a8f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_25a8f8:
    // 0x25a8f8: 0xc096984
label_25a8fc:
    if (ctx->pc == 0x25A8FCu) {
        ctx->pc = 0x25A8FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938240));
        ctx->pc = 0x25A900u;
        goto label_25a900;
    }
    ctx->pc = 0x25A8F8u;
    SET_GPR_U32(ctx, 31, 0x25A900u);
    ctx->pc = 0x25A8FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938240));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A900u; }
    }
    if (ctx->pc != 0x25A900u) { return; }
    ctx->pc = 0x25A900u;
label_25a900:
    // 0x25a900: 0x2402ffce
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967246));
label_25a904:
    // 0x25a904: 0xae2200f4
    ctx->pc = 0x25a904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_25a908:
    // 0x25a908: 0x24130001
    ctx->pc = 0x25a908u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_25a90c:
    // 0x25a90c: 0x24040088
    ctx->pc = 0x25a90cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 136));
label_25a910:
    // 0x25a910: 0x2405ffff
    ctx->pc = 0x25a910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a914:
    // 0x25a914: 0xc0a3a1c
label_25a918:
    if (ctx->pc == 0x25A918u) {
        ctx->pc = 0x25A918u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A91Cu;
        goto label_25a91c;
    }
    ctx->pc = 0x25A914u;
    SET_GPR_U32(ctx, 31, 0x25A91Cu);
    ctx->pc = 0x25A918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A91Cu; }
    }
    if (ctx->pc != 0x25A91Cu) { return; }
    ctx->pc = 0x25A91Cu;
label_25a91c:
    // 0x25a91c: 0x32820400
    ctx->pc = 0x25a91cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
label_25a920:
    // 0x25a920: 0x104001a2
label_25a924:
    if (ctx->pc == 0x25A924u) {
        ctx->pc = 0x25A928u;
        goto label_25a928;
    }
    ctx->pc = 0x25A920u;
    {
        const bool branch_taken_0x25a920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a920) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A928u;
label_25a928:
    // 0x25a928: 0x3c0140a0
    ctx->pc = 0x25a928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_25a92c:
    // 0x25a92c: 0x44810000
    ctx->pc = 0x25a92cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a930:
    // 0x25a930: 0x46140036
    ctx->pc = 0x25a930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a934:
    // 0x25a934: 0x0
    ctx->pc = 0x25a934u;
    // NOP
label_25a938:
    // 0x25a938: 0x4500019c
label_25a93c:
    if (ctx->pc == 0x25A93Cu) {
        ctx->pc = 0x25A93Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x25A940u;
        goto label_25a940;
    }
    ctx->pc = 0x25A938u;
    {
        const bool branch_taken_0x25a938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A93Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x25a938) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A940u;
label_25a940:
    // 0x25a940: 0x24040020
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
label_25a944:
    // 0x25a944: 0xc09f62c
label_25a948:
    if (ctx->pc == 0x25A948u) {
        ctx->pc = 0x25A948u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A94Cu;
        goto label_25a94c;
    }
    ctx->pc = 0x25A944u;
    SET_GPR_U32(ctx, 31, 0x25A94Cu);
    ctx->pc = 0x25A948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A94Cu; }
    }
    if (ctx->pc != 0x25A94Cu) { return; }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0x24040021
    ctx->pc = 0x25a94cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
label_25a950:
    // 0x25a950: 0xc09f62c
label_25a954:
    if (ctx->pc == 0x25A954u) {
        ctx->pc = 0x25A954u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A958u;
        goto label_25a958;
    }
    ctx->pc = 0x25A950u;
    SET_GPR_U32(ctx, 31, 0x25A958u);
    ctx->pc = 0x25A954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A958u; }
    }
    if (ctx->pc != 0x25A958u) { return; }
    ctx->pc = 0x25A958u;
label_25a958:
    // 0x25a958: 0x8e220070
    ctx->pc = 0x25a958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_25a95c:
    // 0x25a95c: 0x3c04003b
    ctx->pc = 0x25a95cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_25a960:
    // 0x25a960: 0x24848e88
    ctx->pc = 0x25a960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938248));
label_25a964:
    // 0x25a964: 0x40282d
    ctx->pc = 0x25a964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a968:
    // 0x25a968: 0x8c460074
    ctx->pc = 0x25a968u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_25a96c:
    // 0x25a96c: 0x3c070008
    ctx->pc = 0x25a96cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_25a970:
    // 0x25a970: 0xc0b1b04
label_25a974:
    if (ctx->pc == 0x25A974u) {
        ctx->pc = 0x25A974u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
        ctx->pc = 0x25A978u;
        goto label_25a978;
    }
    ctx->pc = 0x25A970u;
    SET_GPR_U32(ctx, 31, 0x25A978u);
    ctx->pc = 0x25A974u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A978u; }
    }
    if (ctx->pc != 0x25A978u) { return; }
    ctx->pc = 0x25A978u;
label_25a978:
    // 0x25a978: 0x220202d
    ctx->pc = 0x25a978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a97c:
    // 0x25a97c: 0xc094dcc
label_25a980:
    if (ctx->pc == 0x25A980u) {
        ctx->pc = 0x25A980u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25A984u;
        goto label_25a984;
    }
    ctx->pc = 0x25A97Cu;
    SET_GPR_U32(ctx, 31, 0x25A984u);
    ctx->pc = 0x25A980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A984u; }
    }
    if (ctx->pc != 0x25A984u) { return; }
    ctx->pc = 0x25A984u;
label_25a984:
    // 0x25a984: 0x24040087
    ctx->pc = 0x25a984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 135));
label_25a988:
    // 0x25a988: 0x2405ffff
    ctx->pc = 0x25a988u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a98c:
    // 0x25a98c: 0xc0a3a1c
label_25a990:
    if (ctx->pc == 0x25A990u) {
        ctx->pc = 0x25A990u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A994u;
        goto label_25a994;
    }
    ctx->pc = 0x25A98Cu;
    SET_GPR_U32(ctx, 31, 0x25A994u);
    ctx->pc = 0x25A990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A994u; }
    }
    if (ctx->pc != 0x25A994u) { return; }
    ctx->pc = 0x25A994u;
label_25a994:
    // 0x25a994: 0x10000185
label_25a998:
    if (ctx->pc == 0x25A998u) {
        ctx->pc = 0x25A99Cu;
        goto label_25a99c;
    }
    ctx->pc = 0x25A994u;
    {
        const bool branch_taken_0x25a994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a994) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A99Cu;
label_25a99c:
    // 0x25a99c: 0x32820400
    ctx->pc = 0x25a99cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
label_25a9a0:
    // 0x25a9a0: 0x10400182
label_25a9a4:
    if (ctx->pc == 0x25A9A4u) {
        ctx->pc = 0x25A9A8u;
        goto label_25a9a8;
    }
    ctx->pc = 0x25A9A0u;
    {
        const bool branch_taken_0x25a9a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a9a0) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A9A8u;
label_25a9a8:
    // 0x25a9a8: 0x3c0140a0
    ctx->pc = 0x25a9a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_25a9ac:
    // 0x25a9ac: 0x44810000
    ctx->pc = 0x25a9acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a9b0:
    // 0x25a9b0: 0x46140036
    ctx->pc = 0x25a9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a9b4:
    // 0x25a9b4: 0x0
    ctx->pc = 0x25a9b4u;
    // NOP
label_25a9b8:
    // 0x25a9b8: 0x4500017c
label_25a9bc:
    if (ctx->pc == 0x25A9BCu) {
        ctx->pc = 0x25A9BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x25A9C0u;
        goto label_25a9c0;
    }
    ctx->pc = 0x25A9B8u;
    {
        const bool branch_taken_0x25a9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A9BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x25a9b8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A9C0u;
label_25a9c0:
    // 0x25a9c0: 0x24040020
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
label_25a9c4:
    // 0x25a9c4: 0xc09f62c
label_25a9c8:
    if (ctx->pc == 0x25A9C8u) {
        ctx->pc = 0x25A9C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A9CCu;
        goto label_25a9cc;
    }
    ctx->pc = 0x25A9C4u;
    SET_GPR_U32(ctx, 31, 0x25A9CCu);
    ctx->pc = 0x25A9C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9CCu; }
    }
    if (ctx->pc != 0x25A9CCu) { return; }
    ctx->pc = 0x25A9CCu;
label_25a9cc:
    // 0x25a9cc: 0x24040021
    ctx->pc = 0x25a9ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
label_25a9d0:
    // 0x25a9d0: 0xc09f62c
label_25a9d4:
    if (ctx->pc == 0x25A9D4u) {
        ctx->pc = 0x25A9D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A9D8u;
        goto label_25a9d8;
    }
    ctx->pc = 0x25A9D0u;
    SET_GPR_U32(ctx, 31, 0x25A9D8u);
    ctx->pc = 0x25A9D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9D8u; }
    }
    if (ctx->pc != 0x25A9D8u) { return; }
    ctx->pc = 0x25A9D8u;
label_25a9d8:
    // 0x25a9d8: 0x3c020034
    ctx->pc = 0x25a9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25a9dc:
    // 0x25a9dc: 0x220202d
    ctx->pc = 0x25a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a9e0:
    // 0x25a9e0: 0x8c45cdac
    ctx->pc = 0x25a9e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
label_25a9e4:
    // 0x25a9e4: 0x3c06003b
    ctx->pc = 0x25a9e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_25a9e8:
    // 0x25a9e8: 0xc096984
label_25a9ec:
    if (ctx->pc == 0x25A9ECu) {
        ctx->pc = 0x25A9ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938264));
        ctx->pc = 0x25A9F0u;
        goto label_25a9f0;
    }
    ctx->pc = 0x25A9E8u;
    SET_GPR_U32(ctx, 31, 0x25A9F0u);
    ctx->pc = 0x25A9ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294938264));
    ctx->pc = 0x25A610u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtree_0x25a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9F0u; }
    }
    if (ctx->pc != 0x25A9F0u) { return; }
    ctx->pc = 0x25A9F0u;
label_25a9f0:
    // 0x25a9f0: 0x2402000a
    ctx->pc = 0x25a9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_25a9f4:
    // 0x25a9f4: 0x1000016d
label_25a9f8:
    if (ctx->pc == 0x25A9F8u) {
        ctx->pc = 0x25A9F8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x25A9FCu;
        goto label_25a9fc;
    }
    ctx->pc = 0x25A9F4u;
    {
        const bool branch_taken_0x25a9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A9F8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x25a9f4) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25A9FCu;
label_25a9fc:
    // 0x25a9fc: 0x862400f0
    ctx->pc = 0x25a9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_25aa00:
    // 0x25aa00: 0x4800006
label_25aa04:
    if (ctx->pc == 0x25AA04u) {
        ctx->pc = 0x25AA04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AA08u;
        goto label_25aa08;
    }
    ctx->pc = 0x25AA00u;
    {
        const bool branch_taken_0x25aa00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25AA04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25aa00) {
            ctx->pc = 0x25AA1Cu;
            goto label_25aa1c;
        }
    }
    ctx->pc = 0x25AA08u;
label_25aa08:
    // 0x25aa08: 0x3c030032
    ctx->pc = 0x25aa08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_25aa0c:
    // 0x25aa0c: 0x24020050
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_25aa10:
    // 0x25aa10: 0x821018
    ctx->pc = 0x25aa10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25aa14:
    // 0x25aa14: 0x8c63fa60
    ctx->pc = 0x25aa14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
label_25aa18:
    // 0x25aa18: 0x438021
    ctx->pc = 0x25aa18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25aa1c:
    // 0x25aa1c: 0x1200001c
label_25aa20:
    if (ctx->pc == 0x25AA20u) {
        ctx->pc = 0x25AA20u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 512));
        ctx->pc = 0x25AA24u;
        goto label_25aa24;
    }
    ctx->pc = 0x25AA1Cu;
    {
        const bool branch_taken_0x25aa1c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AA20u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 512));
        if (branch_taken_0x25aa1c) {
            ctx->pc = 0x25AA90u;
            goto label_25aa90;
        }
    }
    ctx->pc = 0x25AA24u;
label_25aa24:
    // 0x25aa24: 0x1040001a
label_25aa28:
    if (ctx->pc == 0x25AA28u) {
        ctx->pc = 0x25AA2Cu;
        goto label_25aa2c;
    }
    ctx->pc = 0x25AA24u;
    {
        const bool branch_taken_0x25aa24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25aa24) {
            ctx->pc = 0x25AA90u;
            goto label_25aa90;
        }
    }
    ctx->pc = 0x25AA2Cu;
label_25aa2c:
    // 0x25aa2c: 0xc08dbc4
label_25aa30:
    if (ctx->pc == 0x25AA30u) {
        ctx->pc = 0x25AA30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
        ctx->pc = 0x25AA34u;
        goto label_25aa34;
    }
    ctx->pc = 0x25AA2Cu;
    SET_GPR_U32(ctx, 31, 0x25AA34u);
    ctx->pc = 0x25AA30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x236F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDescType_0x236f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA34u; }
    }
    if (ctx->pc != 0x25AA34u) { return; }
    ctx->pc = 0x25AA34u;
label_25aa34:
    // 0x25aa34: 0x2403001e
    ctx->pc = 0x25aa34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
label_25aa38:
    // 0x25aa38: 0x14430015
label_25aa3c:
    if (ctx->pc == 0x25AA3Cu) {
        ctx->pc = 0x25AA3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x25AA40u;
        goto label_25aa40;
    }
    ctx->pc = 0x25AA38u;
    {
        const bool branch_taken_0x25aa38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x25AA3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x25aa38) {
            ctx->pc = 0x25AA90u;
            goto label_25aa90;
        }
    }
    ctx->pc = 0x25AA40u;
label_25aa40:
    // 0x25aa40: 0x8ea30000
    ctx->pc = 0x25aa40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25aa44:
    // 0x25aa44: 0x10620012
label_25aa48:
    if (ctx->pc == 0x25AA48u) {
        ctx->pc = 0x25AA48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25AA4Cu;
        goto label_25aa4c;
    }
    ctx->pc = 0x25AA44u;
    {
        const bool branch_taken_0x25aa44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25AA48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25aa44) {
            ctx->pc = 0x25AA90u;
            goto label_25aa90;
        }
    }
    ctx->pc = 0x25AA4Cu;
label_25aa4c:
    // 0x25aa4c: 0xaea20000
    ctx->pc = 0x25aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_25aa50:
    // 0x25aa50: 0x24040001
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_25aa54:
    // 0x25aa54: 0x24050003
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_25aa58:
    // 0x25aa58: 0x3c06003b
    ctx->pc = 0x25aa58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_25aa5c:
    // 0x25aa5c: 0xc094e02
label_25aa60:
    if (ctx->pc == 0x25AA60u) {
        ctx->pc = 0x25AA60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937784));
        ctx->pc = 0x25AA64u;
        goto label_25aa64;
    }
    ctx->pc = 0x25AA5Cu;
    SET_GPR_U32(ctx, 31, 0x25AA64u);
    ctx->pc = 0x25AA60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294937784));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA64u; }
    }
    if (ctx->pc != 0x25AA64u) { return; }
    ctx->pc = 0x25AA64u;
label_25aa64:
    // 0x25aa64: 0xa62200f0
    ctx->pc = 0x25aa64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
label_25aa68:
    // 0x25aa68: 0xc097492
label_25aa6c:
    if (ctx->pc == 0x25AA6Cu) {
        ctx->pc = 0x25AA6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AA70u;
        goto label_25aa70;
    }
    ctx->pc = 0x25AA68u;
    SET_GPR_U32(ctx, 31, 0x25AA70u);
    ctx->pc = 0x25AA6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25D248u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDeathDies_0x25d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA70u; }
    }
    if (ctx->pc != 0x25AA70u) { return; }
    ctx->pc = 0x25AA70u;
label_25aa70:
    // 0x25aa70: 0x3c014040
    ctx->pc = 0x25aa70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_25aa74:
    // 0x25aa74: 0x44810000
    ctx->pc = 0x25aa74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25aa78:
    // 0x25aa78: 0x4600a002
    ctx->pc = 0x25aa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25aa7c:
    // 0x25aa7c: 0x46000064
    ctx->pc = 0x25aa7cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_25aa80:
    // 0x25aa80: 0x44020800
    ctx->pc = 0x25aa80u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_25aa84:
    // 0x25aa84: 0xa62200f2
    ctx->pc = 0x25aa84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 2));
label_25aa88:
    // 0x25aa88: 0x10000148
label_25aa8c:
    if (ctx->pc == 0x25AA8Cu) {
        ctx->pc = 0x25AA8Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25AA90u;
        goto label_25aa90;
    }
    ctx->pc = 0x25AA88u;
    {
        const bool branch_taken_0x25aa88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AA8Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25aa88) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AA90u;
label_25aa90:
    // 0x25aa90: 0x12600018
label_25aa94:
    if (ctx->pc == 0x25AA94u) {
        ctx->pc = 0x25AA94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
        ctx->pc = 0x25AA98u;
        goto label_25aa98;
    }
    ctx->pc = 0x25AA90u;
    {
        const bool branch_taken_0x25aa90 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AA94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
        if (branch_taken_0x25aa90) {
            ctx->pc = 0x25AAF4u;
            goto label_25aaf4;
        }
    }
    ctx->pc = 0x25AA98u;
label_25aa98:
    // 0x25aa98: 0x962300d8
    ctx->pc = 0x25aa98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25aa9c:
    // 0x25aa9c: 0x30620200
    ctx->pc = 0x25aa9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
label_25aaa0:
    // 0x25aaa0: 0x10400013
label_25aaa4:
    if (ctx->pc == 0x25AAA4u) {
        ctx->pc = 0x25AAA4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25AAA8u;
        goto label_25aaa8;
    }
    ctx->pc = 0x25AAA0u;
    {
        const bool branch_taken_0x25aaa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AAA4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x25aaa0) {
            ctx->pc = 0x25AAF0u;
            goto label_25aaf0;
        }
    }
    ctx->pc = 0x25AAA8u;
label_25aaa8:
    // 0x25aaa8: 0x14400140
label_25aaac:
    if (ctx->pc == 0x25AAACu) {
        ctx->pc = 0x25AAACu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x25AAB0u;
        goto label_25aab0;
    }
    ctx->pc = 0x25AAA8u;
    {
        const bool branch_taken_0x25aaa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AAACu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x25aaa8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AAB0u;
label_25aab0:
    // 0x25aab0: 0xa62200d8
    ctx->pc = 0x25aab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25aab4:
    // 0x25aab4: 0x220202d
    ctx->pc = 0x25aab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25aab8:
    // 0x25aab8: 0xc096234
label_25aabc:
    if (ctx->pc == 0x25AABCu) {
        ctx->pc = 0x25AABCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AAC0u;
        goto label_25aac0;
    }
    ctx->pc = 0x25AAB8u;
    SET_GPR_U32(ctx, 31, 0x25AAC0u);
    ctx->pc = 0x25AABCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2588D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OpenChest_0x2588d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAC0u; }
    }
    if (ctx->pc != 0x25AAC0u) { return; }
    ctx->pc = 0x25AAC0u;
label_25aac0:
    // 0x25aac0: 0x8ea30000
    ctx->pc = 0x25aac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25aac4:
    // 0x25aac4: 0x2402002b
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_25aac8:
    // 0x25aac8: 0x14620138
label_25aacc:
    if (ctx->pc == 0x25AACCu) {
        ctx->pc = 0x25AACCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AAD0u;
        goto label_25aad0;
    }
    ctx->pc = 0x25AAC8u;
    {
        const bool branch_taken_0x25aac8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25AACCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x25aac8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AAD0u;
label_25aad0:
    // 0x25aad0: 0xc097f9c
label_25aad4:
    if (ctx->pc == 0x25AAD4u) {
        ctx->pc = 0x25AAD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AAD8u;
        goto label_25aad8;
    }
    ctx->pc = 0x25AAD0u;
    SET_GPR_U32(ctx, 31, 0x25AAD8u);
    ctx->pc = 0x25AAD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWoodBarrel_0x25fe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAD8u; }
    }
    if (ctx->pc != 0x25AAD8u) { return; }
    ctx->pc = 0x25AAD8u;
label_25aad8:
    // 0x25aad8: 0x2404001b
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 27));
label_25aadc:
    // 0x25aadc: 0x2405ffff
    ctx->pc = 0x25aadcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25aae0:
    // 0x25aae0: 0xc0a3a1c
label_25aae4:
    if (ctx->pc == 0x25AAE4u) {
        ctx->pc = 0x25AAE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AAE8u;
        goto label_25aae8;
    }
    ctx->pc = 0x25AAE0u;
    SET_GPR_U32(ctx, 31, 0x25AAE8u);
    ctx->pc = 0x25AAE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAE8u; }
    }
    if (ctx->pc != 0x25AAE8u) { return; }
    ctx->pc = 0x25AAE8u;
label_25aae8:
    // 0x25aae8: 0x10000130
label_25aaec:
    if (ctx->pc == 0x25AAECu) {
        ctx->pc = 0x25AAF0u;
        goto label_25aaf0;
    }
    ctx->pc = 0x25AAE8u;
    {
        const bool branch_taken_0x25aae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25aae8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AAF0u;
label_25aaf0:
    // 0x25aaf0: 0x32820400
    ctx->pc = 0x25aaf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1024));
label_25aaf4:
    // 0x25aaf4: 0x1040012d
label_25aaf8:
    if (ctx->pc == 0x25AAF8u) {
        ctx->pc = 0x25AAFCu;
        goto label_25aafc;
    }
    ctx->pc = 0x25AAF4u;
    {
        const bool branch_taken_0x25aaf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25aaf4) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AAFCu;
label_25aafc:
    // 0x25aafc: 0x3c0140a0
    ctx->pc = 0x25aafcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_25ab00:
    // 0x25ab00: 0x44810000
    ctx->pc = 0x25ab00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25ab04:
    // 0x25ab04: 0x46140036
    ctx->pc = 0x25ab04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ab08:
    // 0x25ab08: 0x0
    ctx->pc = 0x25ab08u;
    // NOP
label_25ab0c:
    // 0x25ab0c: 0x45000127
label_25ab10:
    if (ctx->pc == 0x25AB10u) {
        ctx->pc = 0x25AB10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x25AB14u;
        goto label_25ab14;
    }
    ctx->pc = 0x25AB0Cu;
    {
        const bool branch_taken_0x25ab0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AB10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x25ab0c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AB14u;
label_25ab14:
    // 0x25ab14: 0x8ea30000
    ctx->pc = 0x25ab14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25ab18:
    // 0x25ab18: 0x1462000b
label_25ab1c:
    if (ctx->pc == 0x25AB1Cu) {
        ctx->pc = 0x25AB1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25AB20u;
        goto label_25ab20;
    }
    ctx->pc = 0x25AB18u;
    {
        const bool branch_taken_0x25ab18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25AB1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25ab18) {
            ctx->pc = 0x25AB48u;
            goto label_25ab48;
        }
    }
    ctx->pc = 0x25AB20u;
label_25ab20:
    // 0x25ab20: 0xa22200de
    ctx->pc = 0x25ab20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 2));
label_25ab24:
    // 0x25ab24: 0xa22200dc
    ctx->pc = 0x25ab24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 2));
label_25ab28:
    // 0x25ab28: 0x962200d8
    ctx->pc = 0x25ab28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25ab2c:
    // 0x25ab2c: 0x34420001
    ctx->pc = 0x25ab2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25ab30:
    // 0x25ab30: 0xa62200d8
    ctx->pc = 0x25ab30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25ab34:
    // 0x25ab34: 0x220202d
    ctx->pc = 0x25ab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ab38:
    // 0x25ab38: 0xc096234
label_25ab3c:
    if (ctx->pc == 0x25AB3Cu) {
        ctx->pc = 0x25AB3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AB40u;
        goto label_25ab40;
    }
    ctx->pc = 0x25AB38u;
    SET_GPR_U32(ctx, 31, 0x25AB40u);
    ctx->pc = 0x25AB3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2588D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OpenChest_0x2588d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB40u; }
    }
    if (ctx->pc != 0x25AB40u) { return; }
    ctx->pc = 0x25AB40u;
label_25ab40:
    // 0x25ab40: 0x1000011a
label_25ab44:
    if (ctx->pc == 0x25AB44u) {
        ctx->pc = 0x25AB48u;
        goto label_25ab48;
    }
    ctx->pc = 0x25AB40u;
    {
        const bool branch_taken_0x25ab40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ab40) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AB48u;
label_25ab48:
    // 0x25ab48: 0x5200000a
label_25ab4c:
    if (ctx->pc == 0x25AB4Cu) {
        ctx->pc = 0x25AB4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x25AB50u;
        goto label_25ab50;
    }
    ctx->pc = 0x25AB48u;
    {
        const bool branch_taken_0x25ab48 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ab48) {
            ctx->pc = 0x25AB4Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x25AB74u;
            goto label_25ab74;
        }
    }
    ctx->pc = 0x25AB50u;
label_25ab50:
    // 0x25ab50: 0xc08dbc4
label_25ab54:
    if (ctx->pc == 0x25AB54u) {
        ctx->pc = 0x25AB54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
        ctx->pc = 0x25AB58u;
        goto label_25ab58;
    }
    ctx->pc = 0x25AB50u;
    SET_GPR_U32(ctx, 31, 0x25AB58u);
    ctx->pc = 0x25AB54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x236F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDescType_0x236f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB58u; }
    }
    if (ctx->pc != 0x25AB58u) { return; }
    ctx->pc = 0x25AB58u;
label_25ab58:
    // 0x25ab58: 0x2403001e
    ctx->pc = 0x25ab58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
label_25ab5c:
    // 0x25ab5c: 0x14430005
label_25ab60:
    if (ctx->pc == 0x25AB60u) {
        ctx->pc = 0x25AB60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x25AB64u;
        goto label_25ab64;
    }
    ctx->pc = 0x25AB5Cu;
    {
        const bool branch_taken_0x25ab5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x25AB60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x25ab5c) {
            ctx->pc = 0x25AB74u;
            goto label_25ab74;
        }
    }
    ctx->pc = 0x25AB64u;
label_25ab64:
    // 0x25ab64: 0x220202d
    ctx->pc = 0x25ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ab68:
    // 0x25ab68: 0xc096234
label_25ab6c:
    if (ctx->pc == 0x25AB6Cu) {
        ctx->pc = 0x25AB6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AB70u;
        goto label_25ab70;
    }
    ctx->pc = 0x25AB68u;
    SET_GPR_U32(ctx, 31, 0x25AB70u);
    ctx->pc = 0x25AB6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2588D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OpenChest_0x2588d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB70u; }
    }
    if (ctx->pc != 0x25AB70u) { return; }
    ctx->pc = 0x25AB70u;
label_25ab70:
    // 0x25ab70: 0x26300010
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_25ab74:
    // 0x25ab74: 0x2404001f
    ctx->pc = 0x25ab74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
label_25ab78:
    // 0x25ab78: 0xc09f62c
label_25ab7c:
    if (ctx->pc == 0x25AB7Cu) {
        ctx->pc = 0x25AB7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AB80u;
        goto label_25ab80;
    }
    ctx->pc = 0x25AB78u;
    SET_GPR_U32(ctx, 31, 0x25AB80u);
    ctx->pc = 0x25AB7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB80u; }
    }
    if (ctx->pc != 0x25AB80u) { return; }
    ctx->pc = 0x25AB80u;
label_25ab80:
    // 0x25ab80: 0x24040021
    ctx->pc = 0x25ab80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
label_25ab84:
    // 0x25ab84: 0xc09f62c
label_25ab88:
    if (ctx->pc == 0x25AB88u) {
        ctx->pc = 0x25AB88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AB8Cu;
        goto label_25ab8c;
    }
    ctx->pc = 0x25AB84u;
    SET_GPR_U32(ctx, 31, 0x25AB8Cu);
    ctx->pc = 0x25AB88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMat_0x27d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB8Cu; }
    }
    if (ctx->pc != 0x25AB8Cu) { return; }
    ctx->pc = 0x25AB8Cu;
label_25ab8c:
    // 0x25ab8c: 0x8ea30000
    ctx->pc = 0x25ab8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25ab90:
    // 0x25ab90: 0x24020030
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_25ab94:
    // 0x25ab94: 0x1462000a
label_25ab98:
    if (ctx->pc == 0x25AB98u) {
        ctx->pc = 0x25AB98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x25AB9Cu;
        goto label_25ab9c;
    }
    ctx->pc = 0x25AB94u;
    {
        const bool branch_taken_0x25ab94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25AB98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        if (branch_taken_0x25ab94) {
            ctx->pc = 0x25ABC0u;
            goto label_25abc0;
        }
    }
    ctx->pc = 0x25AB9Cu;
label_25ab9c:
    // 0x25ab9c: 0x3c04003b
    ctx->pc = 0x25ab9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_25aba0:
    // 0x25aba0: 0x24848ea8
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938280));
label_25aba4:
    // 0x25aba4: 0x40282d
    ctx->pc = 0x25aba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25aba8:
    // 0x25aba8: 0x8c460074
    ctx->pc = 0x25aba8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_25abac:
    // 0x25abac: 0x3c070008
    ctx->pc = 0x25abacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_25abb0:
    // 0x25abb0: 0xc0b1b04
label_25abb4:
    if (ctx->pc == 0x25ABB4u) {
        ctx->pc = 0x25ABB4u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
        ctx->pc = 0x25ABB8u;
        goto label_25abb8;
    }
    ctx->pc = 0x25ABB0u;
    SET_GPR_U32(ctx, 31, 0x25ABB8u);
    ctx->pc = 0x25ABB4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABB8u; }
    }
    if (ctx->pc != 0x25ABB8u) { return; }
    ctx->pc = 0x25ABB8u;
label_25abb8:
    // 0x25abb8: 0x10000009
label_25abbc:
    if (ctx->pc == 0x25ABBCu) {
        ctx->pc = 0x25ABBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ABC0u;
        goto label_25abc0;
    }
    ctx->pc = 0x25ABB8u;
    {
        const bool branch_taken_0x25abb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25ABBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25abb8) {
            ctx->pc = 0x25ABE0u;
            goto label_25abe0;
        }
    }
    ctx->pc = 0x25ABC0u;
label_25abc0:
    // 0x25abc0: 0x3c04003b
    ctx->pc = 0x25abc0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_25abc4:
    // 0x25abc4: 0x24848eb8
    ctx->pc = 0x25abc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938296));
label_25abc8:
    // 0x25abc8: 0x40282d
    ctx->pc = 0x25abc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25abcc:
    // 0x25abcc: 0x8c460074
    ctx->pc = 0x25abccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_25abd0:
    // 0x25abd0: 0x3c070008
    ctx->pc = 0x25abd0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_25abd4:
    // 0x25abd4: 0xc0b1b04
label_25abd8:
    if (ctx->pc == 0x25ABD8u) {
        ctx->pc = 0x25ABD8u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
        ctx->pc = 0x25ABDCu;
        goto label_25abdc;
    }
    ctx->pc = 0x25ABD4u;
    SET_GPR_U32(ctx, 31, 0x25ABDCu);
    ctx->pc = 0x25ABD8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABDCu; }
    }
    if (ctx->pc != 0x25ABDCu) { return; }
    ctx->pc = 0x25ABDCu;
label_25abdc:
    // 0x25abdc: 0x220202d
    ctx->pc = 0x25abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25abe0:
    // 0x25abe0: 0xc094dcc
label_25abe4:
    if (ctx->pc == 0x25ABE4u) {
        ctx->pc = 0x25ABE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25ABE8u;
        goto label_25abe8;
    }
    ctx->pc = 0x25ABE0u;
    SET_GPR_U32(ctx, 31, 0x25ABE8u);
    ctx->pc = 0x25ABE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABE8u; }
    }
    if (ctx->pc != 0x25ABE8u) { return; }
    ctx->pc = 0x25ABE8u;
label_25abe8:
    // 0x25abe8: 0x100000f0
label_25abec:
    if (ctx->pc == 0x25ABECu) {
        ctx->pc = 0x25ABF0u;
        goto label_25abf0;
    }
    ctx->pc = 0x25ABE8u;
    {
        const bool branch_taken_0x25abe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25abe8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25ABF0u;
label_25abf0:
    // 0x25abf0: 0x8e220000
    ctx->pc = 0x25abf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25abf4:
    // 0x25abf4: 0x84420044
    ctx->pc = 0x25abf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_25abf8:
    // 0x25abf8: 0x44820800
    ctx->pc = 0x25abf8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_25abfc:
    // 0x25abfc: 0x46800860
    ctx->pc = 0x25abfcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_25ac00:
    // 0x25ac00: 0x3c020034
    ctx->pc = 0x25ac00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25ac04:
    // 0x25ac04: 0x8c42e7c8
    ctx->pc = 0x25ac04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_25ac08:
    // 0x25ac08: 0xc44000cc
    ctx->pc = 0x25ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ac0c:
    // 0x25ac0c: 0x46000842
    ctx->pc = 0x25ac0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25ac10:
    // 0x25ac10: 0x46000824
    ctx->pc = 0x25ac10u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_25ac14:
    // 0x25ac14: 0x44030000
    ctx->pc = 0x25ac14u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_25ac18:
    // 0x25ac18: 0x6c000e4
label_25ac1c:
    if (ctx->pc == 0x25AC1Cu) {
        ctx->pc = 0x25AC1Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x25AC20u;
        goto label_25ac20;
    }
    ctx->pc = 0x25AC18u;
    {
        const bool branch_taken_0x25ac18 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x25AC1Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x25ac18) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AC20u;
label_25ac20:
    // 0x25ac20: 0x1660000c
label_25ac24:
    if (ctx->pc == 0x25AC24u) {
        ctx->pc = 0x25AC24u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AC28u;
        goto label_25ac28;
    }
    ctx->pc = 0x25AC20u;
    {
        const bool branch_taken_0x25ac20 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AC24u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25ac20) {
            ctx->pc = 0x25AC54u;
            goto label_25ac54;
        }
    }
    ctx->pc = 0x25AC28u;
label_25ac28:
    // 0x25ac28: 0x862200e4
    ctx->pc = 0x25ac28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_25ac2c:
    // 0x25ac2c: 0x62102a
    ctx->pc = 0x25ac2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_25ac30:
    // 0x25ac30: 0x54400003
label_25ac34:
    if (ctx->pc == 0x25AC34u) {
        ctx->pc = 0x25AC34u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x25AC38u;
        goto label_25ac38;
    }
    ctx->pc = 0x25AC30u;
    {
        const bool branch_taken_0x25ac30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25ac30) {
            ctx->pc = 0x25AC34u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->pc = 0x25AC40u;
            goto label_25ac40;
        }
    }
    ctx->pc = 0x25AC38u;
label_25ac38:
    // 0x25ac38: 0x10000006
label_25ac3c:
    if (ctx->pc == 0x25AC3Cu) {
        ctx->pc = 0x25AC3Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25AC40u;
        goto label_25ac40;
    }
    ctx->pc = 0x25AC38u;
    {
        const bool branch_taken_0x25ac38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AC3Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25ac38) {
            ctx->pc = 0x25AC54u;
            goto label_25ac54;
        }
    }
    ctx->pc = 0x25AC40u;
label_25ac40:
    // 0x25ac40: 0x31840
    ctx->pc = 0x25ac40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_25ac44:
    // 0x25ac44: 0x62182a
    ctx->pc = 0x25ac44u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_25ac48:
    // 0x25ac48: 0x24100003
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_25ac4c:
    // 0x25ac4c: 0x24020002
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25ac50:
    // 0x25ac50: 0x43800a
    ctx->pc = 0x25ac50u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_25ac54:
    // 0x25ac54: 0x822200f6
    ctx->pc = 0x25ac54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 246)));
label_25ac58:
    // 0x25ac58: 0x12020038
label_25ac5c:
    if (ctx->pc == 0x25AC5Cu) {
        ctx->pc = 0x25AC60u;
        goto label_25ac60;
    }
    ctx->pc = 0x25AC58u;
    {
        const bool branch_taken_0x25ac58 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x25ac58) {
            ctx->pc = 0x25AD3Cu;
            goto label_25ad3c;
        }
    }
    ctx->pc = 0x25AC60u;
label_25ac60:
    // 0x25ac60: 0x16000004
label_25ac64:
    if (ctx->pc == 0x25AC64u) {
        ctx->pc = 0x25AC64u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x25AC68u;
        goto label_25ac68;
    }
    ctx->pc = 0x25AC60u;
    {
        const bool branch_taken_0x25ac60 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AC64u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 246), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x25ac60) {
            ctx->pc = 0x25AC74u;
            goto label_25ac74;
        }
    }
    ctx->pc = 0x25AC68u;
label_25ac68:
    // 0x25ac68: 0x2402ffff
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25ac6c:
    // 0x25ac6c: 0x10000004
label_25ac70:
    if (ctx->pc == 0x25AC70u) {
        ctx->pc = 0x25AC70u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 227), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x25AC74u;
        goto label_25ac74;
    }
    ctx->pc = 0x25AC6Cu;
    {
        const bool branch_taken_0x25ac6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AC70u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 227), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x25ac6c) {
            ctx->pc = 0x25AC80u;
            goto label_25ac80;
        }
    }
    ctx->pc = 0x25AC74u;
label_25ac74:
    // 0x25ac74: 0x822200f3
    ctx->pc = 0x25ac74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 243)));
label_25ac78:
    // 0x25ac78: 0x21040
    ctx->pc = 0x25ac78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_25ac7c:
    // 0x25ac7c: 0xa22200f3
    ctx->pc = 0x25ac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 243), (uint8_t)GPR_U32(ctx, 2));
label_25ac80:
    // 0x25ac80: 0x922200f7
    ctx->pc = 0x25ac80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
label_25ac84:
    // 0x25ac84: 0x2442ffe4
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967268));
label_25ac88:
    // 0x25ac88: 0x2c420002
    ctx->pc = 0x25ac88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_25ac8c:
    // 0x25ac8c: 0x54400001
label_25ac90:
    if (ctx->pc == 0x25AC90u) {
        ctx->pc = 0x25AC90u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x25AC94u;
        goto label_25ac94;
    }
    ctx->pc = 0x25AC8Cu;
    {
        const bool branch_taken_0x25ac8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25ac8c) {
            ctx->pc = 0x25AC90u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC94u;
label_25ac94:
    // 0x25ac94: 0x822300f7
    ctx->pc = 0x25ac94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
label_25ac98:
    // 0x25ac98: 0x2402001e
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_25ac9c:
    // 0x25ac9c: 0x50620001
label_25aca0:
    if (ctx->pc == 0x25ACA0u) {
        ctx->pc = 0x25ACA0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x25ACA4u;
        goto label_25aca4;
    }
    ctx->pc = 0x25AC9Cu;
    {
        const bool branch_taken_0x25ac9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25ac9c) {
            ctx->pc = 0x25ACA0u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 247), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x25ACA4u;
            goto label_25aca4;
        }
    }
    ctx->pc = 0x25ACA4u;
label_25aca4:
    // 0x25aca4: 0x3a0202d
    ctx->pc = 0x25aca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25aca8:
    // 0x25aca8: 0xc0944d4
label_25acac:
    if (ctx->pc == 0x25ACACu) {
        ctx->pc = 0x25ACACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ACB0u;
        goto label_25acb0;
    }
    ctx->pc = 0x25ACA8u;
    SET_GPR_U32(ctx, 31, 0x25ACB0u);
    ctx->pc = 0x25ACACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251350u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemGenDesc_0x251350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACB0u; }
    }
    if (ctx->pc != 0x25ACB0u) { return; }
    ctx->pc = 0x25ACB0u;
label_25acb0:
    // 0x25acb0: 0x3a0202d
    ctx->pc = 0x25acb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25acb4:
    // 0x25acb4: 0xc093eaa
label_25acb8:
    if (ctx->pc == 0x25ACB8u) {
        ctx->pc = 0x25ACB8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25ACBCu;
        goto label_25acbc;
    }
    ctx->pc = 0x25ACB4u;
    SET_GPR_U32(ctx, 31, 0x25ACBCu);
    ctx->pc = 0x25ACB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24FAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatchAnyHeader_0x24faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACBCu; }
    }
    if (ctx->pc != 0x25ACBCu) { return; }
    ctx->pc = 0x25ACBCu;
label_25acbc:
    // 0x25acbc: 0x10400005
label_25acc0:
    if (ctx->pc == 0x25ACC0u) {
        ctx->pc = 0x25ACC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ACC4u;
        goto label_25acc4;
    }
    ctx->pc = 0x25ACBCu;
    {
        const bool branch_taken_0x25acbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25ACC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25acbc) {
            ctx->pc = 0x25ACD4u;
            goto label_25acd4;
        }
    }
    ctx->pc = 0x25ACC4u;
label_25acc4:
    // 0x25acc4: 0xc09696c
label_25acc8:
    if (ctx->pc == 0x25ACC8u) {
        ctx->pc = 0x25ACC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ACCCu;
        goto label_25accc;
    }
    ctx->pc = 0x25ACC4u;
    SET_GPR_U32(ctx, 31, 0x25ACCCu);
    ctx->pc = 0x25ACC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25A5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReplaceItemAtreeHeader_0x25a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACCCu; }
    }
    if (ctx->pc != 0x25ACCCu) { return; }
    ctx->pc = 0x25ACCCu;
label_25accc:
    // 0x25accc: 0x1000000c
label_25acd0:
    if (ctx->pc == 0x25ACD0u) {
        ctx->pc = 0x25ACD4u;
        goto label_25acd4;
    }
    ctx->pc = 0x25ACCCu;
    {
        const bool branch_taken_0x25accc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25accc) {
            ctx->pc = 0x25AD00u;
            goto label_25ad00;
        }
    }
    ctx->pc = 0x25ACD4u;
label_25acd4:
    // 0x25acd4: 0xc0944a0
label_25acd8:
    if (ctx->pc == 0x25ACD8u) {
        ctx->pc = 0x25ACD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ACDCu;
        goto label_25acdc;
    }
    ctx->pc = 0x25ACD4u;
    SET_GPR_U32(ctx, 31, 0x25ACDCu);
    ctx->pc = 0x25ACD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251280u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemFindMBObjectL1_0x251280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACDCu; }
    }
    if (ctx->pc != 0x25ACDCu) { return; }
    ctx->pc = 0x25ACDCu;
label_25acdc:
    // 0x25acdc: 0x4430006
label_25ace0:
    if (ctx->pc == 0x25ACE0u) {
        ctx->pc = 0x25ACE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x25ACE4u;
        goto label_25ace4;
    }
    ctx->pc = 0x25ACDCu;
    {
        const bool branch_taken_0x25acdc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25acdc) {
            ctx->pc = 0x25ACE0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x25ACF8u;
            goto label_25acf8;
        }
    }
    ctx->pc = 0x25ACE4u;
label_25ace4:
    // 0x25ace4: 0x220202d
    ctx->pc = 0x25ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ace8:
    // 0x25ace8: 0xc094dcc
label_25acec:
    if (ctx->pc == 0x25ACECu) {
        ctx->pc = 0x25ACECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25ACF0u;
        goto label_25acf0;
    }
    ctx->pc = 0x25ACE8u;
    SET_GPR_U32(ctx, 31, 0x25ACF0u);
    ctx->pc = 0x25ACECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACF0u; }
    }
    if (ctx->pc != 0x25ACF0u) { return; }
    ctx->pc = 0x25ACF0u;
label_25acf0:
    // 0x25acf0: 0x10000003
label_25acf4:
    if (ctx->pc == 0x25ACF4u) {
        ctx->pc = 0x25ACF8u;
        goto label_25acf8;
    }
    ctx->pc = 0x25ACF0u;
    {
        const bool branch_taken_0x25acf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25acf0) {
            ctx->pc = 0x25AD00u;
            goto label_25ad00;
        }
    }
    ctx->pc = 0x25ACF8u;
label_25acf8:
    // 0x25acf8: 0xc0b220e
label_25acfc:
    if (ctx->pc == 0x25ACFCu) {
        ctx->pc = 0x25ACFCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AD00u;
        goto label_25ad00;
    }
    ctx->pc = 0x25ACF8u;
    SET_GPR_U32(ctx, 31, 0x25AD00u);
    ctx->pc = 0x25ACFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD00u; }
    }
    if (ctx->pc != 0x25AD00u) { return; }
    ctx->pc = 0x25AD00u;
label_25ad00:
    // 0x25ad00: 0x1600000b
label_25ad04:
    if (ctx->pc == 0x25AD04u) {
        ctx->pc = 0x25AD04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x25AD08u;
        goto label_25ad08;
    }
    ctx->pc = 0x25AD00u;
    {
        const bool branch_taken_0x25ad00 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AD04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x25ad00) {
            ctx->pc = 0x25AD30u;
            goto label_25ad30;
        }
    }
    ctx->pc = 0x25AD08u;
label_25ad08:
    // 0x25ad08: 0x962200d8
    ctx->pc = 0x25ad08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25ad0c:
    // 0x25ad0c: 0x3042fffe
    ctx->pc = 0x25ad0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65534));
label_25ad10:
    // 0x25ad10: 0xa62200d8
    ctx->pc = 0x25ad10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25ad14:
    // 0x25ad14: 0x2402ffff
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25ad18:
    // 0x25ad18: 0xa22200e3
    ctx->pc = 0x25ad18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 227), (uint8_t)GPR_U32(ctx, 2));
label_25ad1c:
    // 0x25ad1c: 0x86450000
    ctx->pc = 0x25ad1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_25ad20:
    // 0x25ad20: 0xc09fd5c
label_25ad24:
    if (ctx->pc == 0x25AD24u) {
        ctx->pc = 0x25AD24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25AD28u;
        goto label_25ad28;
    }
    ctx->pc = 0x25AD20u;
    SET_GPR_U32(ctx, 31, 0x25AD28u);
    ctx->pc = 0x25AD24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGenHitFx_0x27f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD28u; }
    }
    if (ctx->pc != 0x25AD28u) { return; }
    ctx->pc = 0x25AD28u;
label_25ad28:
    // 0x25ad28: 0x10000004
label_25ad2c:
    if (ctx->pc == 0x25AD2Cu) {
        ctx->pc = 0x25AD30u;
        goto label_25ad30;
    }
    ctx->pc = 0x25AD28u;
    {
        const bool branch_taken_0x25ad28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ad28) {
            ctx->pc = 0x25AD3Cu;
            goto label_25ad3c;
        }
    }
    ctx->pc = 0x25AD30u;
label_25ad30:
    // 0x25ad30: 0x86450000
    ctx->pc = 0x25ad30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_25ad34:
    // 0x25ad34: 0xc09fd5c
label_25ad38:
    if (ctx->pc == 0x25AD38u) {
        ctx->pc = 0x25AD38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AD3Cu;
        goto label_25ad3c;
    }
    ctx->pc = 0x25AD34u;
    SET_GPR_U32(ctx, 31, 0x25AD3Cu);
    ctx->pc = 0x25AD38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGenHitFx_0x27f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD3Cu; }
    }
    if (ctx->pc != 0x25AD3Cu) { return; }
    ctx->pc = 0x25AD3Cu;
label_25ad3c:
    // 0x25ad3c: 0x16000018
label_25ad40:
    if (ctx->pc == 0x25AD40u) {
        ctx->pc = 0x25AD40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AD44u;
        goto label_25ad44;
    }
    ctx->pc = 0x25AD3Cu;
    {
        const bool branch_taken_0x25ad3c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AD40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x25ad3c) {
            ctx->pc = 0x25ADA0u;
            goto label_25ada0;
        }
    }
    ctx->pc = 0x25AD44u;
label_25ad44:
    // 0x25ad44: 0xc098412
label_25ad48:
    if (ctx->pc == 0x25AD48u) {
        ctx->pc = 0x25AD48u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x25AD4Cu;
        goto label_25ad4c;
    }
    ctx->pc = 0x25AD44u;
    SET_GPR_U32(ctx, 31, 0x25AD4Cu);
    ctx->pc = 0x25AD48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x261048u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGeneratorDies_0x261048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD4Cu; }
    }
    if (ctx->pc != 0x25AD4Cu) { return; }
    ctx->pc = 0x25AD4Cu;
label_25ad4c:
    // 0x25ad4c: 0x3c020033
    ctx->pc = 0x25ad4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_25ad50:
    // 0x25ad50: 0x8c423c00
    ctx->pc = 0x25ad50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_25ad54:
    // 0x25ad54: 0x18400095
label_25ad58:
    if (ctx->pc == 0x25AD58u) {
        ctx->pc = 0x25AD58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AD5Cu;
        goto label_25ad5c;
    }
    ctx->pc = 0x25AD54u;
    {
        const bool branch_taken_0x25ad54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25AD58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25ad54) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AD5Cu;
label_25ad5c:
    // 0x25ad5c: 0x3c020033
    ctx->pc = 0x25ad5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_25ad60:
    // 0x25ad60: 0x2447dfd0
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294959056));
label_25ad64:
    // 0x25ad64: 0x240603b0
    ctx->pc = 0x25ad64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 944));
label_25ad68:
    // 0x25ad68: 0x3c020033
    ctx->pc = 0x25ad68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_25ad6c:
    // 0x25ad6c: 0x8c453c00
    ctx->pc = 0x25ad6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_25ad70:
    // 0x25ad70: 0x861018
    ctx->pc = 0x25ad70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25ad74:
    // 0x25ad74: 0x0
    ctx->pc = 0x25ad74u;
    // NOP
label_25ad78:
    // 0x25ad78: 0x471821
    ctx->pc = 0x25ad78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_25ad7c:
    // 0x25ad7c: 0x8c6202a4
    ctx->pc = 0x25ad7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 676)));
label_25ad80:
    // 0x25ad80: 0x52220001
label_25ad84:
    if (ctx->pc == 0x25AD84u) {
        ctx->pc = 0x25AD84u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 0));
        ctx->pc = 0x25AD88u;
        goto label_25ad88;
    }
    ctx->pc = 0x25AD80u;
    {
        const bool branch_taken_0x25ad80 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x25ad80) {
            ctx->pc = 0x25AD84u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 0));
            ctx->pc = 0x25AD88u;
            goto label_25ad88;
        }
    }
    ctx->pc = 0x25AD88u;
label_25ad88:
    // 0x25ad88: 0x24840001
    ctx->pc = 0x25ad88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_25ad8c:
    // 0x25ad8c: 0x85102a
    ctx->pc = 0x25ad8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
label_25ad90:
    // 0x25ad90: 0x1440fff9
label_25ad94:
    if (ctx->pc == 0x25AD94u) {
        ctx->pc = 0x25AD94u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x25AD98u;
        goto label_25ad98;
    }
    ctx->pc = 0x25AD90u;
    {
        const bool branch_taken_0x25ad90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25AD94u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25ad90) {
            ctx->pc = 0x25AD78u;
            goto label_25ad78;
        }
    }
    ctx->pc = 0x25AD98u;
label_25ad98:
    // 0x25ad98: 0x10000084
label_25ad9c:
    if (ctx->pc == 0x25AD9Cu) {
        ctx->pc = 0x25ADA0u;
        goto label_25ada0;
    }
    ctx->pc = 0x25AD98u;
    {
        const bool branch_taken_0x25ad98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ad98) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25ADA0u;
label_25ada0:
    // 0x25ada0: 0xc09842e
label_25ada4:
    if (ctx->pc == 0x25ADA4u) {
        ctx->pc = 0x25ADA4u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x25ADA8u;
        goto label_25ada8;
    }
    ctx->pc = 0x25ADA0u;
    SET_GPR_U32(ctx, 31, 0x25ADA8u);
    ctx->pc = 0x25ADA4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2610B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGeneratorDamaged_0x2610b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADA8u; }
    }
    if (ctx->pc != 0x25ADA8u) { return; }
    ctx->pc = 0x25ADA8u;
label_25ada8:
    // 0x25ada8: 0x10000080
label_25adac:
    if (ctx->pc == 0x25ADACu) {
        ctx->pc = 0x25ADB0u;
        goto label_25adb0;
    }
    ctx->pc = 0x25ADA8u;
    {
        const bool branch_taken_0x25ada8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ada8) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25ADB0u;
label_25adb0:
    // 0x25adb0: 0x6c0007e
label_25adb4:
    if (ctx->pc == 0x25ADB4u) {
        ctx->pc = 0x25ADB8u;
        goto label_25adb8;
    }
    ctx->pc = 0x25ADB0u;
    {
        const bool branch_taken_0x25adb0 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x25adb0) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25ADB8u;
label_25adb8:
    // 0x25adb8: 0x12e00009
label_25adbc:
    if (ctx->pc == 0x25ADBCu) {
        ctx->pc = 0x25ADBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x25ADC0u;
        goto label_25adc0;
    }
    ctx->pc = 0x25ADB8u;
    {
        const bool branch_taken_0x25adb8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x25ADBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x25adb8) {
            ctx->pc = 0x25ADE0u;
            goto label_25ade0;
        }
    }
    ctx->pc = 0x25ADC0u;
label_25adc0:
    // 0x25adc0: 0x16600007
label_25adc4:
    if (ctx->pc == 0x25ADC4u) {
        ctx->pc = 0x25ADC8u;
        goto label_25adc8;
    }
    ctx->pc = 0x25ADC0u;
    {
        const bool branch_taken_0x25adc0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x25adc0) {
            ctx->pc = 0x25ADE0u;
            goto label_25ade0;
        }
    }
    ctx->pc = 0x25ADC8u;
label_25adc8:
    // 0x25adc8: 0x8c430004
    ctx->pc = 0x25adc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25adcc:
    // 0x25adcc: 0x24020029
    ctx->pc = 0x25adccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_25add0:
    // 0x25add0: 0x10620002
label_25add4:
    if (ctx->pc == 0x25ADD4u) {
        ctx->pc = 0x25ADD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25ADD8u;
        goto label_25add8;
    }
    ctx->pc = 0x25ADD0u;
    {
        const bool branch_taken_0x25add0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25ADD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25add0) {
            ctx->pc = 0x25ADDCu;
            goto label_25addc;
        }
    }
    ctx->pc = 0x25ADD8u;
label_25add8:
    // 0x25add8: 0xa62200f4
    ctx->pc = 0x25add8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 2));
label_25addc:
    // 0x25addc: 0x8e220000
    ctx->pc = 0x25addcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ade0:
    // 0x25ade0: 0x8c420004
    ctx->pc = 0x25ade0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25ade4:
    // 0x25ade4: 0x2443ffd7
    ctx->pc = 0x25ade4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967255));
label_25ade8:
    // 0x25ade8: 0x2c620005
    ctx->pc = 0x25ade8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_25adec:
    // 0x25adec: 0x10400007
label_25adf0:
    if (ctx->pc == 0x25ADF0u) {
        ctx->pc = 0x25ADF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x25ADF4u;
        goto label_25adf4;
    }
    ctx->pc = 0x25ADECu;
    {
        const bool branch_taken_0x25adec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25ADF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25adec) {
            ctx->pc = 0x25AE0Cu;
            goto label_25ae0c;
        }
    }
    ctx->pc = 0x25ADF4u;
label_25adf4:
    // 0x25adf4: 0x24428f50
    ctx->pc = 0x25adf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938448));
label_25adf8:
    // 0x25adf8: 0x31880
    ctx->pc = 0x25adf8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25adfc:
    // 0x25adfc: 0x621821
    ctx->pc = 0x25adfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25ae00:
    // 0x25ae00: 0x8c620000
    ctx->pc = 0x25ae00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ae04:
    // 0x25ae04: 0x400008
label_25ae08:
    if (ctx->pc == 0x25AE08u) {
        ctx->pc = 0x25AE0Cu;
        goto label_25ae0c;
    }
    ctx->pc = 0x25AE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A648u: goto label_25a648;
            case 0x25A64Cu: goto label_25a64c;
            case 0x25A650u: goto label_25a650;
            case 0x25A654u: goto label_25a654;
            case 0x25A658u: goto label_25a658;
            case 0x25A65Cu: goto label_25a65c;
            case 0x25A660u: goto label_25a660;
            case 0x25A664u: goto label_25a664;
            case 0x25A668u: goto label_25a668;
            case 0x25A66Cu: goto label_25a66c;
            case 0x25A670u: goto label_25a670;
            case 0x25A674u: goto label_25a674;
            case 0x25A678u: goto label_25a678;
            case 0x25A67Cu: goto label_25a67c;
            case 0x25A680u: goto label_25a680;
            case 0x25A684u: goto label_25a684;
            case 0x25A688u: goto label_25a688;
            case 0x25A68Cu: goto label_25a68c;
            case 0x25A690u: goto label_25a690;
            case 0x25A694u: goto label_25a694;
            case 0x25A698u: goto label_25a698;
            case 0x25A69Cu: goto label_25a69c;
            case 0x25A6A0u: goto label_25a6a0;
            case 0x25A6A4u: goto label_25a6a4;
            case 0x25A6A8u: goto label_25a6a8;
            case 0x25A6ACu: goto label_25a6ac;
            case 0x25A6B0u: goto label_25a6b0;
            case 0x25A6B4u: goto label_25a6b4;
            case 0x25A6B8u: goto label_25a6b8;
            case 0x25A6BCu: goto label_25a6bc;
            case 0x25A6C0u: goto label_25a6c0;
            case 0x25A6C4u: goto label_25a6c4;
            case 0x25A6C8u: goto label_25a6c8;
            case 0x25A6CCu: goto label_25a6cc;
            case 0x25A6D0u: goto label_25a6d0;
            case 0x25A6D4u: goto label_25a6d4;
            case 0x25A6D8u: goto label_25a6d8;
            case 0x25A6DCu: goto label_25a6dc;
            case 0x25A6E0u: goto label_25a6e0;
            case 0x25A6E4u: goto label_25a6e4;
            case 0x25A6E8u: goto label_25a6e8;
            case 0x25A6ECu: goto label_25a6ec;
            case 0x25A6F0u: goto label_25a6f0;
            case 0x25A6F4u: goto label_25a6f4;
            case 0x25A6F8u: goto label_25a6f8;
            case 0x25A6FCu: goto label_25a6fc;
            case 0x25A700u: goto label_25a700;
            case 0x25A704u: goto label_25a704;
            case 0x25A708u: goto label_25a708;
            case 0x25A70Cu: goto label_25a70c;
            case 0x25A710u: goto label_25a710;
            case 0x25A714u: goto label_25a714;
            case 0x25A718u: goto label_25a718;
            case 0x25A71Cu: goto label_25a71c;
            case 0x25A720u: goto label_25a720;
            case 0x25A724u: goto label_25a724;
            case 0x25A728u: goto label_25a728;
            case 0x25A72Cu: goto label_25a72c;
            case 0x25A730u: goto label_25a730;
            case 0x25A734u: goto label_25a734;
            case 0x25A738u: goto label_25a738;
            case 0x25A73Cu: goto label_25a73c;
            case 0x25A740u: goto label_25a740;
            case 0x25A744u: goto label_25a744;
            case 0x25A748u: goto label_25a748;
            case 0x25A74Cu: goto label_25a74c;
            case 0x25A750u: goto label_25a750;
            case 0x25A754u: goto label_25a754;
            case 0x25A758u: goto label_25a758;
            case 0x25A75Cu: goto label_25a75c;
            case 0x25A760u: goto label_25a760;
            case 0x25A764u: goto label_25a764;
            case 0x25A768u: goto label_25a768;
            case 0x25A76Cu: goto label_25a76c;
            case 0x25A770u: goto label_25a770;
            case 0x25A774u: goto label_25a774;
            case 0x25A778u: goto label_25a778;
            case 0x25A77Cu: goto label_25a77c;
            case 0x25A780u: goto label_25a780;
            case 0x25A784u: goto label_25a784;
            case 0x25A788u: goto label_25a788;
            case 0x25A78Cu: goto label_25a78c;
            case 0x25A790u: goto label_25a790;
            case 0x25A794u: goto label_25a794;
            case 0x25A798u: goto label_25a798;
            case 0x25A79Cu: goto label_25a79c;
            case 0x25A7A0u: goto label_25a7a0;
            case 0x25A7A4u: goto label_25a7a4;
            case 0x25A7A8u: goto label_25a7a8;
            case 0x25A7ACu: goto label_25a7ac;
            case 0x25A7B0u: goto label_25a7b0;
            case 0x25A7B4u: goto label_25a7b4;
            case 0x25A7B8u: goto label_25a7b8;
            case 0x25A7BCu: goto label_25a7bc;
            case 0x25A7C0u: goto label_25a7c0;
            case 0x25A7C4u: goto label_25a7c4;
            case 0x25A7C8u: goto label_25a7c8;
            case 0x25A7CCu: goto label_25a7cc;
            case 0x25A7D0u: goto label_25a7d0;
            case 0x25A7D4u: goto label_25a7d4;
            case 0x25A7D8u: goto label_25a7d8;
            case 0x25A7DCu: goto label_25a7dc;
            case 0x25A7E0u: goto label_25a7e0;
            case 0x25A7E4u: goto label_25a7e4;
            case 0x25A7E8u: goto label_25a7e8;
            case 0x25A7ECu: goto label_25a7ec;
            case 0x25A7F0u: goto label_25a7f0;
            case 0x25A7F4u: goto label_25a7f4;
            case 0x25A7F8u: goto label_25a7f8;
            case 0x25A7FCu: goto label_25a7fc;
            case 0x25A800u: goto label_25a800;
            case 0x25A804u: goto label_25a804;
            case 0x25A808u: goto label_25a808;
            case 0x25A80Cu: goto label_25a80c;
            case 0x25A810u: goto label_25a810;
            case 0x25A814u: goto label_25a814;
            case 0x25A818u: goto label_25a818;
            case 0x25A81Cu: goto label_25a81c;
            case 0x25A820u: goto label_25a820;
            case 0x25A824u: goto label_25a824;
            case 0x25A828u: goto label_25a828;
            case 0x25A82Cu: goto label_25a82c;
            case 0x25A830u: goto label_25a830;
            case 0x25A834u: goto label_25a834;
            case 0x25A838u: goto label_25a838;
            case 0x25A83Cu: goto label_25a83c;
            case 0x25A840u: goto label_25a840;
            case 0x25A844u: goto label_25a844;
            case 0x25A848u: goto label_25a848;
            case 0x25A84Cu: goto label_25a84c;
            case 0x25A850u: goto label_25a850;
            case 0x25A854u: goto label_25a854;
            case 0x25A858u: goto label_25a858;
            case 0x25A85Cu: goto label_25a85c;
            case 0x25A860u: goto label_25a860;
            case 0x25A864u: goto label_25a864;
            case 0x25A868u: goto label_25a868;
            case 0x25A86Cu: goto label_25a86c;
            case 0x25A870u: goto label_25a870;
            case 0x25A874u: goto label_25a874;
            case 0x25A878u: goto label_25a878;
            case 0x25A87Cu: goto label_25a87c;
            case 0x25A880u: goto label_25a880;
            case 0x25A884u: goto label_25a884;
            case 0x25A888u: goto label_25a888;
            case 0x25A88Cu: goto label_25a88c;
            case 0x25A890u: goto label_25a890;
            case 0x25A894u: goto label_25a894;
            case 0x25A898u: goto label_25a898;
            case 0x25A89Cu: goto label_25a89c;
            case 0x25A8A0u: goto label_25a8a0;
            case 0x25A8A4u: goto label_25a8a4;
            case 0x25A8A8u: goto label_25a8a8;
            case 0x25A8ACu: goto label_25a8ac;
            case 0x25A8B0u: goto label_25a8b0;
            case 0x25A8B4u: goto label_25a8b4;
            case 0x25A8B8u: goto label_25a8b8;
            case 0x25A8BCu: goto label_25a8bc;
            case 0x25A8C0u: goto label_25a8c0;
            case 0x25A8C4u: goto label_25a8c4;
            case 0x25A8C8u: goto label_25a8c8;
            case 0x25A8CCu: goto label_25a8cc;
            case 0x25A8D0u: goto label_25a8d0;
            case 0x25A8D4u: goto label_25a8d4;
            case 0x25A8D8u: goto label_25a8d8;
            case 0x25A8DCu: goto label_25a8dc;
            case 0x25A8E0u: goto label_25a8e0;
            case 0x25A8E4u: goto label_25a8e4;
            case 0x25A8E8u: goto label_25a8e8;
            case 0x25A8ECu: goto label_25a8ec;
            case 0x25A8F0u: goto label_25a8f0;
            case 0x25A8F4u: goto label_25a8f4;
            case 0x25A8F8u: goto label_25a8f8;
            case 0x25A8FCu: goto label_25a8fc;
            case 0x25A900u: goto label_25a900;
            case 0x25A904u: goto label_25a904;
            case 0x25A908u: goto label_25a908;
            case 0x25A90Cu: goto label_25a90c;
            case 0x25A910u: goto label_25a910;
            case 0x25A914u: goto label_25a914;
            case 0x25A918u: goto label_25a918;
            case 0x25A91Cu: goto label_25a91c;
            case 0x25A920u: goto label_25a920;
            case 0x25A924u: goto label_25a924;
            case 0x25A928u: goto label_25a928;
            case 0x25A92Cu: goto label_25a92c;
            case 0x25A930u: goto label_25a930;
            case 0x25A934u: goto label_25a934;
            case 0x25A938u: goto label_25a938;
            case 0x25A93Cu: goto label_25a93c;
            case 0x25A940u: goto label_25a940;
            case 0x25A944u: goto label_25a944;
            case 0x25A948u: goto label_25a948;
            case 0x25A94Cu: goto label_25a94c;
            case 0x25A950u: goto label_25a950;
            case 0x25A954u: goto label_25a954;
            case 0x25A958u: goto label_25a958;
            case 0x25A95Cu: goto label_25a95c;
            case 0x25A960u: goto label_25a960;
            case 0x25A964u: goto label_25a964;
            case 0x25A968u: goto label_25a968;
            case 0x25A96Cu: goto label_25a96c;
            case 0x25A970u: goto label_25a970;
            case 0x25A974u: goto label_25a974;
            case 0x25A978u: goto label_25a978;
            case 0x25A97Cu: goto label_25a97c;
            case 0x25A980u: goto label_25a980;
            case 0x25A984u: goto label_25a984;
            case 0x25A988u: goto label_25a988;
            case 0x25A98Cu: goto label_25a98c;
            case 0x25A990u: goto label_25a990;
            case 0x25A994u: goto label_25a994;
            case 0x25A998u: goto label_25a998;
            case 0x25A99Cu: goto label_25a99c;
            case 0x25A9A0u: goto label_25a9a0;
            case 0x25A9A4u: goto label_25a9a4;
            case 0x25A9A8u: goto label_25a9a8;
            case 0x25A9ACu: goto label_25a9ac;
            case 0x25A9B0u: goto label_25a9b0;
            case 0x25A9B4u: goto label_25a9b4;
            case 0x25A9B8u: goto label_25a9b8;
            case 0x25A9BCu: goto label_25a9bc;
            case 0x25A9C0u: goto label_25a9c0;
            case 0x25A9C4u: goto label_25a9c4;
            case 0x25A9C8u: goto label_25a9c8;
            case 0x25A9CCu: goto label_25a9cc;
            case 0x25A9D0u: goto label_25a9d0;
            case 0x25A9D4u: goto label_25a9d4;
            case 0x25A9D8u: goto label_25a9d8;
            case 0x25A9DCu: goto label_25a9dc;
            case 0x25A9E0u: goto label_25a9e0;
            case 0x25A9E4u: goto label_25a9e4;
            case 0x25A9E8u: goto label_25a9e8;
            case 0x25A9ECu: goto label_25a9ec;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25A9F4u: goto label_25a9f4;
            case 0x25A9F8u: goto label_25a9f8;
            case 0x25A9FCu: goto label_25a9fc;
            case 0x25AA00u: goto label_25aa00;
            case 0x25AA04u: goto label_25aa04;
            case 0x25AA08u: goto label_25aa08;
            case 0x25AA0Cu: goto label_25aa0c;
            case 0x25AA10u: goto label_25aa10;
            case 0x25AA14u: goto label_25aa14;
            case 0x25AA18u: goto label_25aa18;
            case 0x25AA1Cu: goto label_25aa1c;
            case 0x25AA20u: goto label_25aa20;
            case 0x25AA24u: goto label_25aa24;
            case 0x25AA28u: goto label_25aa28;
            case 0x25AA2Cu: goto label_25aa2c;
            case 0x25AA30u: goto label_25aa30;
            case 0x25AA34u: goto label_25aa34;
            case 0x25AA38u: goto label_25aa38;
            case 0x25AA3Cu: goto label_25aa3c;
            case 0x25AA40u: goto label_25aa40;
            case 0x25AA44u: goto label_25aa44;
            case 0x25AA48u: goto label_25aa48;
            case 0x25AA4Cu: goto label_25aa4c;
            case 0x25AA50u: goto label_25aa50;
            case 0x25AA54u: goto label_25aa54;
            case 0x25AA58u: goto label_25aa58;
            case 0x25AA5Cu: goto label_25aa5c;
            case 0x25AA60u: goto label_25aa60;
            case 0x25AA64u: goto label_25aa64;
            case 0x25AA68u: goto label_25aa68;
            case 0x25AA6Cu: goto label_25aa6c;
            case 0x25AA70u: goto label_25aa70;
            case 0x25AA74u: goto label_25aa74;
            case 0x25AA78u: goto label_25aa78;
            case 0x25AA7Cu: goto label_25aa7c;
            case 0x25AA80u: goto label_25aa80;
            case 0x25AA84u: goto label_25aa84;
            case 0x25AA88u: goto label_25aa88;
            case 0x25AA8Cu: goto label_25aa8c;
            case 0x25AA90u: goto label_25aa90;
            case 0x25AA94u: goto label_25aa94;
            case 0x25AA98u: goto label_25aa98;
            case 0x25AA9Cu: goto label_25aa9c;
            case 0x25AAA0u: goto label_25aaa0;
            case 0x25AAA4u: goto label_25aaa4;
            case 0x25AAA8u: goto label_25aaa8;
            case 0x25AAACu: goto label_25aaac;
            case 0x25AAB0u: goto label_25aab0;
            case 0x25AAB4u: goto label_25aab4;
            case 0x25AAB8u: goto label_25aab8;
            case 0x25AABCu: goto label_25aabc;
            case 0x25AAC0u: goto label_25aac0;
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AAC8u: goto label_25aac8;
            case 0x25AACCu: goto label_25aacc;
            case 0x25AAD0u: goto label_25aad0;
            case 0x25AAD4u: goto label_25aad4;
            case 0x25AAD8u: goto label_25aad8;
            case 0x25AADCu: goto label_25aadc;
            case 0x25AAE0u: goto label_25aae0;
            case 0x25AAE4u: goto label_25aae4;
            case 0x25AAE8u: goto label_25aae8;
            case 0x25AAECu: goto label_25aaec;
            case 0x25AAF0u: goto label_25aaf0;
            case 0x25AAF4u: goto label_25aaf4;
            case 0x25AAF8u: goto label_25aaf8;
            case 0x25AAFCu: goto label_25aafc;
            case 0x25AB00u: goto label_25ab00;
            case 0x25AB04u: goto label_25ab04;
            case 0x25AB08u: goto label_25ab08;
            case 0x25AB0Cu: goto label_25ab0c;
            case 0x25AB10u: goto label_25ab10;
            case 0x25AB14u: goto label_25ab14;
            case 0x25AB18u: goto label_25ab18;
            case 0x25AB1Cu: goto label_25ab1c;
            case 0x25AB20u: goto label_25ab20;
            case 0x25AB24u: goto label_25ab24;
            case 0x25AB28u: goto label_25ab28;
            case 0x25AB2Cu: goto label_25ab2c;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB34u: goto label_25ab34;
            case 0x25AB38u: goto label_25ab38;
            case 0x25AB3Cu: goto label_25ab3c;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB48u: goto label_25ab48;
            case 0x25AB4Cu: goto label_25ab4c;
            case 0x25AB50u: goto label_25ab50;
            case 0x25AB54u: goto label_25ab54;
            case 0x25AB58u: goto label_25ab58;
            case 0x25AB5Cu: goto label_25ab5c;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB64u: goto label_25ab64;
            case 0x25AB68u: goto label_25ab68;
            case 0x25AB6Cu: goto label_25ab6c;
            case 0x25AB70u: goto label_25ab70;
            case 0x25AB74u: goto label_25ab74;
            case 0x25AB78u: goto label_25ab78;
            case 0x25AB7Cu: goto label_25ab7c;
            case 0x25AB80u: goto label_25ab80;
            case 0x25AB84u: goto label_25ab84;
            case 0x25AB88u: goto label_25ab88;
            case 0x25AB8Cu: goto label_25ab8c;
            case 0x25AB90u: goto label_25ab90;
            case 0x25AB94u: goto label_25ab94;
            case 0x25AB98u: goto label_25ab98;
            case 0x25AB9Cu: goto label_25ab9c;
            case 0x25ABA0u: goto label_25aba0;
            case 0x25ABA4u: goto label_25aba4;
            case 0x25ABA8u: goto label_25aba8;
            case 0x25ABACu: goto label_25abac;
            case 0x25ABB0u: goto label_25abb0;
            case 0x25ABB4u: goto label_25abb4;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABBCu: goto label_25abbc;
            case 0x25ABC0u: goto label_25abc0;
            case 0x25ABC4u: goto label_25abc4;
            case 0x25ABC8u: goto label_25abc8;
            case 0x25ABCCu: goto label_25abcc;
            case 0x25ABD0u: goto label_25abd0;
            case 0x25ABD4u: goto label_25abd4;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABE0u: goto label_25abe0;
            case 0x25ABE4u: goto label_25abe4;
            case 0x25ABE8u: goto label_25abe8;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABF0u: goto label_25abf0;
            case 0x25ABF4u: goto label_25abf4;
            case 0x25ABF8u: goto label_25abf8;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC00u: goto label_25ac00;
            case 0x25AC04u: goto label_25ac04;
            case 0x25AC08u: goto label_25ac08;
            case 0x25AC0Cu: goto label_25ac0c;
            case 0x25AC10u: goto label_25ac10;
            case 0x25AC14u: goto label_25ac14;
            case 0x25AC18u: goto label_25ac18;
            case 0x25AC1Cu: goto label_25ac1c;
            case 0x25AC20u: goto label_25ac20;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC28u: goto label_25ac28;
            case 0x25AC2Cu: goto label_25ac2c;
            case 0x25AC30u: goto label_25ac30;
            case 0x25AC34u: goto label_25ac34;
            case 0x25AC38u: goto label_25ac38;
            case 0x25AC3Cu: goto label_25ac3c;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC44u: goto label_25ac44;
            case 0x25AC48u: goto label_25ac48;
            case 0x25AC4Cu: goto label_25ac4c;
            case 0x25AC50u: goto label_25ac50;
            case 0x25AC54u: goto label_25ac54;
            case 0x25AC58u: goto label_25ac58;
            case 0x25AC5Cu: goto label_25ac5c;
            case 0x25AC60u: goto label_25ac60;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC68u: goto label_25ac68;
            case 0x25AC6Cu: goto label_25ac6c;
            case 0x25AC70u: goto label_25ac70;
            case 0x25AC74u: goto label_25ac74;
            case 0x25AC78u: goto label_25ac78;
            case 0x25AC7Cu: goto label_25ac7c;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AC84u: goto label_25ac84;
            case 0x25AC88u: goto label_25ac88;
            case 0x25AC8Cu: goto label_25ac8c;
            case 0x25AC90u: goto label_25ac90;
            case 0x25AC94u: goto label_25ac94;
            case 0x25AC98u: goto label_25ac98;
            case 0x25AC9Cu: goto label_25ac9c;
            case 0x25ACA0u: goto label_25aca0;
            case 0x25ACA4u: goto label_25aca4;
            case 0x25ACA8u: goto label_25aca8;
            case 0x25ACACu: goto label_25acac;
            case 0x25ACB0u: goto label_25acb0;
            case 0x25ACB4u: goto label_25acb4;
            case 0x25ACB8u: goto label_25acb8;
            case 0x25ACBCu: goto label_25acbc;
            case 0x25ACC0u: goto label_25acc0;
            case 0x25ACC4u: goto label_25acc4;
            case 0x25ACC8u: goto label_25acc8;
            case 0x25ACCCu: goto label_25accc;
            case 0x25ACD0u: goto label_25acd0;
            case 0x25ACD4u: goto label_25acd4;
            case 0x25ACD8u: goto label_25acd8;
            case 0x25ACDCu: goto label_25acdc;
            case 0x25ACE0u: goto label_25ace0;
            case 0x25ACE4u: goto label_25ace4;
            case 0x25ACE8u: goto label_25ace8;
            case 0x25ACECu: goto label_25acec;
            case 0x25ACF0u: goto label_25acf0;
            case 0x25ACF4u: goto label_25acf4;
            case 0x25ACF8u: goto label_25acf8;
            case 0x25ACFCu: goto label_25acfc;
            case 0x25AD00u: goto label_25ad00;
            case 0x25AD04u: goto label_25ad04;
            case 0x25AD08u: goto label_25ad08;
            case 0x25AD0Cu: goto label_25ad0c;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD14u: goto label_25ad14;
            case 0x25AD18u: goto label_25ad18;
            case 0x25AD1Cu: goto label_25ad1c;
            case 0x25AD20u: goto label_25ad20;
            case 0x25AD24u: goto label_25ad24;
            case 0x25AD28u: goto label_25ad28;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD30u: goto label_25ad30;
            case 0x25AD34u: goto label_25ad34;
            case 0x25AD38u: goto label_25ad38;
            case 0x25AD3Cu: goto label_25ad3c;
            case 0x25AD40u: goto label_25ad40;
            case 0x25AD44u: goto label_25ad44;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD50u: goto label_25ad50;
            case 0x25AD54u: goto label_25ad54;
            case 0x25AD58u: goto label_25ad58;
            case 0x25AD5Cu: goto label_25ad5c;
            case 0x25AD60u: goto label_25ad60;
            case 0x25AD64u: goto label_25ad64;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD6Cu: goto label_25ad6c;
            case 0x25AD70u: goto label_25ad70;
            case 0x25AD74u: goto label_25ad74;
            case 0x25AD78u: goto label_25ad78;
            case 0x25AD7Cu: goto label_25ad7c;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD84u: goto label_25ad84;
            case 0x25AD88u: goto label_25ad88;
            case 0x25AD8Cu: goto label_25ad8c;
            case 0x25AD90u: goto label_25ad90;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            case 0x25AD9Cu: goto label_25ad9c;
            case 0x25ADA0u: goto label_25ada0;
            case 0x25ADA4u: goto label_25ada4;
            case 0x25ADA8u: goto label_25ada8;
            case 0x25ADACu: goto label_25adac;
            case 0x25ADB0u: goto label_25adb0;
            case 0x25ADB4u: goto label_25adb4;
            case 0x25ADB8u: goto label_25adb8;
            case 0x25ADBCu: goto label_25adbc;
            case 0x25ADC0u: goto label_25adc0;
            case 0x25ADC4u: goto label_25adc4;
            case 0x25ADC8u: goto label_25adc8;
            case 0x25ADCCu: goto label_25adcc;
            case 0x25ADD0u: goto label_25add0;
            case 0x25ADD4u: goto label_25add4;
            case 0x25ADD8u: goto label_25add8;
            case 0x25ADDCu: goto label_25addc;
            case 0x25ADE0u: goto label_25ade0;
            case 0x25ADE4u: goto label_25ade4;
            case 0x25ADE8u: goto label_25ade8;
            case 0x25ADECu: goto label_25adec;
            case 0x25ADF0u: goto label_25adf0;
            case 0x25ADF4u: goto label_25adf4;
            case 0x25ADF8u: goto label_25adf8;
            case 0x25ADFCu: goto label_25adfc;
            case 0x25AE00u: goto label_25ae00;
            case 0x25AE04u: goto label_25ae04;
            case 0x25AE08u: goto label_25ae08;
            case 0x25AE0Cu: goto label_25ae0c;
            case 0x25AE10u: goto label_25ae10;
            case 0x25AE14u: goto label_25ae14;
            case 0x25AE18u: goto label_25ae18;
            case 0x25AE1Cu: goto label_25ae1c;
            case 0x25AE20u: goto label_25ae20;
            case 0x25AE24u: goto label_25ae24;
            case 0x25AE28u: goto label_25ae28;
            case 0x25AE2Cu: goto label_25ae2c;
            case 0x25AE30u: goto label_25ae30;
            case 0x25AE34u: goto label_25ae34;
            case 0x25AE38u: goto label_25ae38;
            case 0x25AE3Cu: goto label_25ae3c;
            case 0x25AE40u: goto label_25ae40;
            case 0x25AE44u: goto label_25ae44;
            case 0x25AE48u: goto label_25ae48;
            case 0x25AE4Cu: goto label_25ae4c;
            case 0x25AE50u: goto label_25ae50;
            case 0x25AE54u: goto label_25ae54;
            case 0x25AE58u: goto label_25ae58;
            case 0x25AE5Cu: goto label_25ae5c;
            case 0x25AE60u: goto label_25ae60;
            case 0x25AE64u: goto label_25ae64;
            case 0x25AE68u: goto label_25ae68;
            case 0x25AE6Cu: goto label_25ae6c;
            case 0x25AE70u: goto label_25ae70;
            case 0x25AE74u: goto label_25ae74;
            case 0x25AE78u: goto label_25ae78;
            case 0x25AE7Cu: goto label_25ae7c;
            case 0x25AE80u: goto label_25ae80;
            case 0x25AE84u: goto label_25ae84;
            case 0x25AE88u: goto label_25ae88;
            case 0x25AE8Cu: goto label_25ae8c;
            case 0x25AE90u: goto label_25ae90;
            case 0x25AE94u: goto label_25ae94;
            case 0x25AE98u: goto label_25ae98;
            case 0x25AE9Cu: goto label_25ae9c;
            case 0x25AEA0u: goto label_25aea0;
            case 0x25AEA4u: goto label_25aea4;
            case 0x25AEA8u: goto label_25aea8;
            case 0x25AEACu: goto label_25aeac;
            case 0x25AEB0u: goto label_25aeb0;
            case 0x25AEB4u: goto label_25aeb4;
            case 0x25AEB8u: goto label_25aeb8;
            case 0x25AEBCu: goto label_25aebc;
            case 0x25AEC0u: goto label_25aec0;
            case 0x25AEC4u: goto label_25aec4;
            case 0x25AEC8u: goto label_25aec8;
            case 0x25AECCu: goto label_25aecc;
            case 0x25AED0u: goto label_25aed0;
            case 0x25AED4u: goto label_25aed4;
            case 0x25AED8u: goto label_25aed8;
            case 0x25AEDCu: goto label_25aedc;
            case 0x25AEE0u: goto label_25aee0;
            case 0x25AEE4u: goto label_25aee4;
            case 0x25AEE8u: goto label_25aee8;
            case 0x25AEECu: goto label_25aeec;
            case 0x25AEF0u: goto label_25aef0;
            case 0x25AEF4u: goto label_25aef4;
            case 0x25AEF8u: goto label_25aef8;
            case 0x25AEFCu: goto label_25aefc;
            case 0x25AF00u: goto label_25af00;
            case 0x25AF04u: goto label_25af04;
            case 0x25AF08u: goto label_25af08;
            case 0x25AF0Cu: goto label_25af0c;
            case 0x25AF10u: goto label_25af10;
            case 0x25AF14u: goto label_25af14;
            case 0x25AF18u: goto label_25af18;
            case 0x25AF1Cu: goto label_25af1c;
            case 0x25AF20u: goto label_25af20;
            case 0x25AF24u: goto label_25af24;
            case 0x25AF28u: goto label_25af28;
            case 0x25AF2Cu: goto label_25af2c;
            case 0x25AF30u: goto label_25af30;
            case 0x25AF34u: goto label_25af34;
            case 0x25AF38u: goto label_25af38;
            case 0x25AF3Cu: goto label_25af3c;
            case 0x25AF40u: goto label_25af40;
            case 0x25AF44u: goto label_25af44;
            case 0x25AF48u: goto label_25af48;
            case 0x25AF4Cu: goto label_25af4c;
            case 0x25AF50u: goto label_25af50;
            case 0x25AF54u: goto label_25af54;
            case 0x25AF58u: goto label_25af58;
            case 0x25AF5Cu: goto label_25af5c;
            case 0x25AF60u: goto label_25af60;
            case 0x25AF64u: goto label_25af64;
            case 0x25AF68u: goto label_25af68;
            case 0x25AF6Cu: goto label_25af6c;
            case 0x25AF70u: goto label_25af70;
            case 0x25AF74u: goto label_25af74;
            case 0x25AF78u: goto label_25af78;
            case 0x25AF7Cu: goto label_25af7c;
            case 0x25AF80u: goto label_25af80;
            case 0x25AF84u: goto label_25af84;
            case 0x25AF88u: goto label_25af88;
            case 0x25AF8Cu: goto label_25af8c;
            case 0x25AF90u: goto label_25af90;
            case 0x25AF94u: goto label_25af94;
            case 0x25AF98u: goto label_25af98;
            case 0x25AF9Cu: goto label_25af9c;
            case 0x25AFA0u: goto label_25afa0;
            case 0x25AFA4u: goto label_25afa4;
            case 0x25AFA8u: goto label_25afa8;
            case 0x25AFACu: goto label_25afac;
            case 0x25AFB0u: goto label_25afb0;
            case 0x25AFB4u: goto label_25afb4;
            case 0x25AFB8u: goto label_25afb8;
            case 0x25AFBCu: goto label_25afbc;
            case 0x25AFC0u: goto label_25afc0;
            case 0x25AFC4u: goto label_25afc4;
            case 0x25AFC8u: goto label_25afc8;
            case 0x25AFCCu: goto label_25afcc;
            case 0x25AFD0u: goto label_25afd0;
            case 0x25AFD4u: goto label_25afd4;
            case 0x25AFD8u: goto label_25afd8;
            case 0x25AFDCu: goto label_25afdc;
            case 0x25AFE0u: goto label_25afe0;
            case 0x25AFE4u: goto label_25afe4;
            case 0x25AFE8u: goto label_25afe8;
            case 0x25AFECu: goto label_25afec;
            case 0x25AFF0u: goto label_25aff0;
            case 0x25AFF4u: goto label_25aff4;
            case 0x25AFF8u: goto label_25aff8;
            case 0x25AFFCu: goto label_25affc;
            case 0x25B000u: goto label_25b000;
            case 0x25B004u: goto label_25b004;
            case 0x25B008u: goto label_25b008;
            case 0x25B00Cu: goto label_25b00c;
            case 0x25B010u: goto label_25b010;
            case 0x25B014u: goto label_25b014;
            case 0x25B018u: goto label_25b018;
            case 0x25B01Cu: goto label_25b01c;
            case 0x25B020u: goto label_25b020;
            case 0x25B024u: goto label_25b024;
            case 0x25B028u: goto label_25b028;
            case 0x25B02Cu: goto label_25b02c;
            case 0x25B030u: goto label_25b030;
            case 0x25B034u: goto label_25b034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25AE0Cu;
label_25ae0c:
    // 0x25ae0c: 0x1260003c
label_25ae10:
    if (ctx->pc == 0x25AE10u) {
        ctx->pc = 0x25AE14u;
        goto label_25ae14;
    }
    ctx->pc = 0x25AE0Cu;
    {
        const bool branch_taken_0x25ae0c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ae0c) {
            ctx->pc = 0x25AF00u;
            goto label_25af00;
        }
    }
    ctx->pc = 0x25AE14u;
label_25ae14:
    // 0x25ae14: 0x962200d8
    ctx->pc = 0x25ae14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25ae18:
    // 0x25ae18: 0x34420001
    ctx->pc = 0x25ae18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25ae1c:
    // 0x25ae1c: 0xa62200d8
    ctx->pc = 0x25ae1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25ae20:
    // 0x25ae20: 0xc097f9c
label_25ae24:
    if (ctx->pc == 0x25AE24u) {
        ctx->pc = 0x25AE24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AE28u;
        goto label_25ae28;
    }
    ctx->pc = 0x25AE20u;
    SET_GPR_U32(ctx, 31, 0x25AE28u);
    ctx->pc = 0x25AE24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25FE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWoodBarrel_0x25fe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE28u; }
    }
    if (ctx->pc != 0x25AE28u) { return; }
    ctx->pc = 0x25AE28u;
label_25ae28:
    // 0x25ae28: 0x10000044
label_25ae2c:
    if (ctx->pc == 0x25AE2Cu) {
        ctx->pc = 0x25AE2Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AE30u;
        goto label_25ae30;
    }
    ctx->pc = 0x25AE28u;
    {
        const bool branch_taken_0x25ae28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AE2Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25ae28) {
            ctx->pc = 0x25AF3Cu;
            goto label_25af3c;
        }
    }
    ctx->pc = 0x25AE30u;
label_25ae30:
    // 0x25ae30: 0x12600033
label_25ae34:
    if (ctx->pc == 0x25AE34u) {
        ctx->pc = 0x25AE34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x25AE38u;
        goto label_25ae38;
    }
    ctx->pc = 0x25AE30u;
    {
        const bool branch_taken_0x25ae30 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AE34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ae30) {
            ctx->pc = 0x25AF00u;
            goto label_25af00;
        }
    }
    ctx->pc = 0x25AE38u;
label_25ae38:
    // 0x25ae38: 0x8c42e7c8
    ctx->pc = 0x25ae38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_25ae3c:
    // 0x25ae3c: 0xc44000dc
    ctx->pc = 0x25ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ae40:
    // 0x25ae40: 0x3c0141f0
    ctx->pc = 0x25ae40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
label_25ae44:
    // 0x25ae44: 0x44816000
    ctx->pc = 0x25ae44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_25ae48:
    // 0x25ae48: 0x962200d8
    ctx->pc = 0x25ae48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25ae4c:
    // 0x25ae4c: 0x34420001
    ctx->pc = 0x25ae4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25ae50:
    // 0x25ae50: 0xa62200d8
    ctx->pc = 0x25ae50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25ae54:
    // 0x25ae54: 0x26240010
    ctx->pc = 0x25ae54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_25ae58:
    // 0x25ae58: 0x460c0302
    ctx->pc = 0x25ae58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_25ae5c:
    // 0x25ae5c: 0xc09f8f8
label_25ae60:
    if (ctx->pc == 0x25AE60u) {
        ctx->pc = 0x25AE60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x25AE64u;
        goto label_25ae64;
    }
    ctx->pc = 0x25AE5Cu;
    SET_GPR_U32(ctx, 31, 0x25AE64u);
    ctx->pc = 0x25AE60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x27E3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartExplosion_0x27e3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE64u; }
    }
    if (ctx->pc != 0x25AE64u) { return; }
    ctx->pc = 0x25AE64u;
label_25ae64:
    // 0x25ae64: 0xc097fb8
label_25ae68:
    if (ctx->pc == 0x25AE68u) {
        ctx->pc = 0x25AE68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AE6Cu;
        goto label_25ae6c;
    }
    ctx->pc = 0x25AE64u;
    SET_GPR_U32(ctx, 31, 0x25AE6Cu);
    ctx->pc = 0x25AE68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25FEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBarrelExplode_0x25fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE6Cu; }
    }
    if (ctx->pc != 0x25AE6Cu) { return; }
    ctx->pc = 0x25AE6Cu;
label_25ae6c:
    // 0x25ae6c: 0x8e220070
    ctx->pc = 0x25ae6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_25ae70:
    // 0x25ae70: 0x3c04003b
    ctx->pc = 0x25ae70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_25ae74:
    // 0x25ae74: 0x24848ec8
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938312));
label_25ae78:
    // 0x25ae78: 0x40282d
    ctx->pc = 0x25ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae7c:
    // 0x25ae7c: 0x8c460074
    ctx->pc = 0x25ae7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_25ae80:
    // 0x25ae80: 0x3c070008
    ctx->pc = 0x25ae80u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_25ae84:
    // 0x25ae84: 0xc0b1b04
label_25ae88:
    if (ctx->pc == 0x25AE88u) {
        ctx->pc = 0x25AE88u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
        ctx->pc = 0x25AE8Cu;
        goto label_25ae8c;
    }
    ctx->pc = 0x25AE84u;
    SET_GPR_U32(ctx, 31, 0x25AE8Cu);
    ctx->pc = 0x25AE88u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE8Cu; }
    }
    if (ctx->pc != 0x25AE8Cu) { return; }
    ctx->pc = 0x25AE8Cu;
label_25ae8c:
    // 0x25ae8c: 0xb82d
    ctx->pc = 0x25ae8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ae90:
    // 0x25ae90: 0x10000029
label_25ae94:
    if (ctx->pc == 0x25AE94u) {
        ctx->pc = 0x25AE94u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25AE98u;
        goto label_25ae98;
    }
    ctx->pc = 0x25AE90u;
    {
        const bool branch_taken_0x25ae90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AE94u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x25ae90) {
            ctx->pc = 0x25AF38u;
            goto label_25af38;
        }
    }
    ctx->pc = 0x25AE98u;
label_25ae98:
    // 0x25ae98: 0x12600019
label_25ae9c:
    if (ctx->pc == 0x25AE9Cu) {
        ctx->pc = 0x25AE9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x25AEA0u;
        goto label_25aea0;
    }
    ctx->pc = 0x25AE98u;
    {
        const bool branch_taken_0x25ae98 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AE9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ae98) {
            ctx->pc = 0x25AF00u;
            goto label_25af00;
        }
    }
    ctx->pc = 0x25AEA0u;
label_25aea0:
    // 0x25aea0: 0x8c42e7c8
    ctx->pc = 0x25aea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_25aea4:
    // 0x25aea4: 0xc44000dc
    ctx->pc = 0x25aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25aea8:
    // 0x25aea8: 0x3c014120
    ctx->pc = 0x25aea8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_25aeac:
    // 0x25aeac: 0x44816000
    ctx->pc = 0x25aeacu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_25aeb0:
    // 0x25aeb0: 0x962200d8
    ctx->pc = 0x25aeb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_25aeb4:
    // 0x25aeb4: 0x34420001
    ctx->pc = 0x25aeb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25aeb8:
    // 0x25aeb8: 0xa62200d8
    ctx->pc = 0x25aeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
label_25aebc:
    // 0x25aebc: 0x26240010
    ctx->pc = 0x25aebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_25aec0:
    // 0x25aec0: 0x460c0302
    ctx->pc = 0x25aec0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_25aec4:
    // 0x25aec4: 0xc09f8f8
label_25aec8:
    if (ctx->pc == 0x25AEC8u) {
        ctx->pc = 0x25AEC8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x25AECCu;
        goto label_25aecc;
    }
    ctx->pc = 0x25AEC4u;
    SET_GPR_U32(ctx, 31, 0x25AECCu);
    ctx->pc = 0x25AEC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x27E3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartExplosion_0x27e3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AECCu; }
    }
    if (ctx->pc != 0x25AECCu) { return; }
    ctx->pc = 0x25AECCu;
label_25aecc:
    // 0x25aecc: 0xc097faa
label_25aed0:
    if (ctx->pc == 0x25AED0u) {
        ctx->pc = 0x25AED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AED4u;
        goto label_25aed4;
    }
    ctx->pc = 0x25AECCu;
    SET_GPR_U32(ctx, 31, 0x25AED4u);
    ctx->pc = 0x25AED0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25FEA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPoisonBarrel_0x25fea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AED4u; }
    }
    if (ctx->pc != 0x25AED4u) { return; }
    ctx->pc = 0x25AED4u;
label_25aed4:
    // 0x25aed4: 0x8e220070
    ctx->pc = 0x25aed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_25aed8:
    // 0x25aed8: 0x3c04003b
    ctx->pc = 0x25aed8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_25aedc:
    // 0x25aedc: 0x24848ed0
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938320));
label_25aee0:
    // 0x25aee0: 0x40282d
    ctx->pc = 0x25aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25aee4:
    // 0x25aee4: 0x8c460074
    ctx->pc = 0x25aee4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_25aee8:
    // 0x25aee8: 0x3c070008
    ctx->pc = 0x25aee8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
label_25aeec:
    // 0x25aeec: 0xc0b1b04
label_25aef0:
    if (ctx->pc == 0x25AEF0u) {
        ctx->pc = 0x25AEF0u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
        ctx->pc = 0x25AEF4u;
        goto label_25aef4;
    }
    ctx->pc = 0x25AEECu;
    SET_GPR_U32(ctx, 31, 0x25AEF4u);
    ctx->pc = 0x25AEF0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEF4u; }
    }
    if (ctx->pc != 0x25AEF4u) { return; }
    ctx->pc = 0x25AEF4u;
label_25aef4:
    // 0x25aef4: 0xb82d
    ctx->pc = 0x25aef4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25aef8:
    // 0x25aef8: 0x1000000f
label_25aefc:
    if (ctx->pc == 0x25AEFCu) {
        ctx->pc = 0x25AEFCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x25AF00u;
        goto label_25af00;
    }
    ctx->pc = 0x25AEF8u;
    {
        const bool branch_taken_0x25aef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AEFCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x25aef8) {
            ctx->pc = 0x25AF38u;
            goto label_25af38;
        }
    }
    ctx->pc = 0x25AF00u;
label_25af00:
    // 0x25af00: 0xc097bf0
label_25af04:
    if (ctx->pc == 0x25AF04u) {
        ctx->pc = 0x25AF04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AF08u;
        goto label_25af08;
    }
    ctx->pc = 0x25AF00u;
    SET_GPR_U32(ctx, 31, 0x25AF08u);
    ctx->pc = 0x25AF04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25EFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWeaponHitBarrel_0x25efc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF08u; }
    }
    if (ctx->pc != 0x25AF08u) { return; }
    ctx->pc = 0x25AF08u;
label_25af08:
    // 0x25af08: 0x1000000c
label_25af0c:
    if (ctx->pc == 0x25AF0Cu) {
        ctx->pc = 0x25AF10u;
        goto label_25af10;
    }
    ctx->pc = 0x25AF08u;
    {
        const bool branch_taken_0x25af08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25af08) {
            ctx->pc = 0x25AF3Cu;
            goto label_25af3c;
        }
    }
    ctx->pc = 0x25AF10u;
label_25af10:
    // 0x25af10: 0x27a40020
    ctx->pc = 0x25af10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_25af14:
    // 0x25af14: 0xc0983e8
label_25af18:
    if (ctx->pc == 0x25AF18u) {
        ctx->pc = 0x25AF18u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x25AF1Cu;
        goto label_25af1c;
    }
    ctx->pc = 0x25AF14u;
    SET_GPR_U32(ctx, 31, 0x25AF1Cu);
    ctx->pc = 0x25AF18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
    ctx->pc = 0x260FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExplodeWall_0x260fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF1Cu; }
    }
    if (ctx->pc != 0x25AF1Cu) { return; }
    ctx->pc = 0x25AF1Cu;
label_25af1c:
    // 0x25af1c: 0x10000007
label_25af20:
    if (ctx->pc == 0x25AF20u) {
        ctx->pc = 0x25AF24u;
        goto label_25af24;
    }
    ctx->pc = 0x25AF1Cu;
    {
        const bool branch_taken_0x25af1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25af1c) {
            ctx->pc = 0x25AF3Cu;
            goto label_25af3c;
        }
    }
    ctx->pc = 0x25AF24u;
label_25af24:
    // 0x25af24: 0x862200f2
    ctx->pc = 0x25af24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_25af28:
    // 0x25af28: 0x4400004
label_25af2c:
    if (ctx->pc == 0x25AF2Cu) {
        ctx->pc = 0x25AF30u;
        goto label_25af30;
    }
    ctx->pc = 0x25AF28u;
    {
        const bool branch_taken_0x25af28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25af28) {
            ctx->pc = 0x25AF3Cu;
            goto label_25af3c;
        }
    }
    ctx->pc = 0x25AF30u;
label_25af30:
    // 0x25af30: 0xc094d1c
label_25af34:
    if (ctx->pc == 0x25AF34u) {
        ctx->pc = 0x25AF34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AF38u;
        goto label_25af38;
    }
    ctx->pc = 0x25AF30u;
    SET_GPR_U32(ctx, 31, 0x25AF38u);
    ctx->pc = 0x25AF34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253470u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSafeRock_0x253470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF38u; }
    }
    if (ctx->pc != 0x25AF38u) { return; }
    ctx->pc = 0x25AF38u;
label_25af38:
    // 0x25af38: 0x982d
    ctx->pc = 0x25af38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25af3c:
    // 0x25af3c: 0x1260001b
label_25af40:
    if (ctx->pc == 0x25AF40u) {
        ctx->pc = 0x25AF40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AF44u;
        goto label_25af44;
    }
    ctx->pc = 0x25AF3Cu;
    {
        const bool branch_taken_0x25af3c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AF40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25af3c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF44u;
label_25af44:
    // 0x25af44: 0xc094dcc
label_25af48:
    if (ctx->pc == 0x25AF48u) {
        ctx->pc = 0x25AF48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AF4Cu;
        goto label_25af4c;
    }
    ctx->pc = 0x25AF44u;
    SET_GPR_U32(ctx, 31, 0x25AF4Cu);
    ctx->pc = 0x25AF48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253730u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_0x253730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF4Cu; }
    }
    if (ctx->pc != 0x25AF4Cu) { return; }
    ctx->pc = 0x25AF4Cu;
label_25af4c:
    // 0x25af4c: 0x10000017
label_25af50:
    if (ctx->pc == 0x25AF50u) {
        ctx->pc = 0x25AF54u;
        goto label_25af54;
    }
    ctx->pc = 0x25AF4Cu;
    {
        const bool branch_taken_0x25af4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25af4c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF54u;
label_25af54:
    // 0x25af54: 0x8e2200f8
    ctx->pc = 0x25af54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_25af58:
    // 0x25af58: 0x34420001
    ctx->pc = 0x25af58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25af5c:
    // 0x25af5c: 0x10000013
label_25af60:
    if (ctx->pc == 0x25AF60u) {
        ctx->pc = 0x25AF60u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->pc = 0x25AF64u;
        goto label_25af64;
    }
    ctx->pc = 0x25AF5Cu;
    {
        const bool branch_taken_0x25af5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AF60u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        if (branch_taken_0x25af5c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF64u;
label_25af64:
    // 0x25af64: 0x32820800
    ctx->pc = 0x25af64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 2048));
label_25af68:
    // 0x25af68: 0x14400010
label_25af6c:
    if (ctx->pc == 0x25AF6Cu) {
        ctx->pc = 0x25AF70u;
        goto label_25af70;
    }
    ctx->pc = 0x25AF68u;
    {
        const bool branch_taken_0x25af68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25af68) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF70u;
label_25af70:
    // 0x25af70: 0x8e220000
    ctx->pc = 0x25af70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25af74:
    // 0x25af74: 0x8c430004
    ctx->pc = 0x25af74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25af78:
    // 0x25af78: 0x2402001f
    ctx->pc = 0x25af78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_25af7c:
    // 0x25af7c: 0x1462000b
label_25af80:
    if (ctx->pc == 0x25AF80u) {
        ctx->pc = 0x25AF80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AF84u;
        goto label_25af84;
    }
    ctx->pc = 0x25AF7Cu;
    {
        const bool branch_taken_0x25af7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25AF80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25af7c) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF84u;
label_25af84:
    // 0x25af84: 0x10800009
label_25af88:
    if (ctx->pc == 0x25AF88u) {
        ctx->pc = 0x25AF88u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25AF8Cu;
        goto label_25af8c;
    }
    ctx->pc = 0x25AF84u;
    {
        const bool branch_taken_0x25af84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AF88u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25af84) {
            ctx->pc = 0x25AFACu;
            goto label_25afac;
        }
    }
    ctx->pc = 0x25AF8Cu;
label_25af8c:
    // 0x25af8c: 0x0
    ctx->pc = 0x25af8cu;
    // NOP
label_25af90:
    // 0x25af90: 0x908200e2
    ctx->pc = 0x25af90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 226)));
label_25af94:
    // 0x25af94: 0x3442000f
    ctx->pc = 0x25af94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15));
label_25af98:
    // 0x25af98: 0xa08200e2
    ctx->pc = 0x25af98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 226), (uint8_t)GPR_U32(ctx, 2));
label_25af9c:
    // 0x25af9c: 0x8c8400f8
    ctx->pc = 0x25af9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_25afa0:
    // 0x25afa0: 0x0
    ctx->pc = 0x25afa0u;
    // NOP
label_25afa4:
    // 0x25afa4: 0x1480fffa
label_25afa8:
    if (ctx->pc == 0x25AFA8u) {
        ctx->pc = 0x25AFACu;
        goto label_25afac;
    }
    ctx->pc = 0x25AFA4u;
    {
        const bool branch_taken_0x25afa4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x25afa4) {
            ctx->pc = 0x25AF90u;
            goto label_25af90;
        }
    }
    ctx->pc = 0x25AFACu;
label_25afac:
    // 0x25afac: 0x12e00014
label_25afb0:
    if (ctx->pc == 0x25AFB0u) {
        ctx->pc = 0x25AFB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25AFB4u;
        goto label_25afb4;
    }
    ctx->pc = 0x25AFACu;
    {
        const bool branch_taken_0x25afac = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x25AFB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x25afac) {
            ctx->pc = 0x25B000u;
            goto label_25b000;
        }
    }
    ctx->pc = 0x25AFB4u;
label_25afb4:
    // 0x25afb4: 0x280282d
    ctx->pc = 0x25afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25afb8:
    // 0x25afb8: 0xc09f6d2
label_25afbc:
    if (ctx->pc == 0x25AFBCu) {
        ctx->pc = 0x25AFBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25AFC0u;
        goto label_25afc0;
    }
    ctx->pc = 0x25AFB8u;
    SET_GPR_U32(ctx, 31, 0x25AFC0u);
    ctx->pc = 0x25AFBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemHitCol_0x27db48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AFC0u; }
    }
    if (ctx->pc != 0x25AFC0u) { return; }
    ctx->pc = 0x25AFC0u;
label_25afc0:
    // 0x25afc0: 0x40202d
    ctx->pc = 0x25afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25afc4:
    // 0x25afc4: 0x480000e
label_25afc8:
    if (ctx->pc == 0x25AFC8u) {
        ctx->pc = 0x25AFC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x25AFCCu;
        goto label_25afcc;
    }
    ctx->pc = 0x25AFC4u;
    {
        const bool branch_taken_0x25afc4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25AFC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25afc4) {
            ctx->pc = 0x25B000u;
            goto label_25b000;
        }
    }
    ctx->pc = 0x25AFCCu;
label_25afcc:
    // 0x25afcc: 0x24420eb0
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
label_25afd0:
    // 0x25afd0: 0x240300f0
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_25afd4:
    // 0x25afd4: 0x831818
    ctx->pc = 0x25afd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25afd8:
    // 0x25afd8: 0x621821
    ctx->pc = 0x25afd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25afdc:
    // 0x25afdc: 0xc6a00008
    ctx->pc = 0x25afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25afe0:
    // 0x25afe0: 0x3c01c280
    ctx->pc = 0x25afe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49792 << 16));
label_25afe4:
    // 0x25afe4: 0x44810800
    ctx->pc = 0x25afe4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_25afe8:
    // 0x25afe8: 0x46010002
    ctx->pc = 0x25afe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25afec:
    // 0x25afec: 0x8c640014
    ctx->pc = 0x25afecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_25aff0:
    // 0x25aff0: 0x46000064
    ctx->pc = 0x25aff0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_25aff4:
    // 0x25aff4: 0x44050800
    ctx->pc = 0x25aff4u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_25aff8:
    // 0x25aff8: 0xc0b4096
label_25affc:
    if (ctx->pc == 0x25AFFCu) {
        ctx->pc = 0x25AFFCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25B000u;
        goto label_25b000;
    }
    ctx->pc = 0x25AFF8u;
    SET_GPR_U32(ctx, 31, 0x25B000u);
    ctx->pc = 0x25AFFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B000u; }
    }
    if (ctx->pc != 0x25B000u) { return; }
    ctx->pc = 0x25B000u;
label_25b000:
    // 0x25b000: 0x44960000
    ctx->pc = 0x25b000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 22);
label_25b004:
    // 0x25b004: 0x46800020
    ctx->pc = 0x25b004u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_25b008:
    // 0x25b008: 0xdfbf00b0
    ctx->pc = 0x25b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_25b00c:
    // 0x25b00c: 0xdfb700a0
    ctx->pc = 0x25b00cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25b010:
    // 0x25b010: 0xdfb60090
    ctx->pc = 0x25b010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25b014:
    // 0x25b014: 0xdfb50080
    ctx->pc = 0x25b014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25b018:
    // 0x25b018: 0xdfb40070
    ctx->pc = 0x25b018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25b01c:
    // 0x25b01c: 0xdfb30060
    ctx->pc = 0x25b01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25b020:
    // 0x25b020: 0xdfb20050
    ctx->pc = 0x25b020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25b024:
    // 0x25b024: 0xdfb10040
    ctx->pc = 0x25b024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25b028:
    // 0x25b028: 0xdfb00030
    ctx->pc = 0x25b028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25b02c:
    // 0x25b02c: 0xc7b400c0
    ctx->pc = 0x25b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25b030:
    // 0x25b030: 0x3e00008
label_25b034:
    if (ctx->pc == 0x25B034u) {
        ctx->pc = 0x25B034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x25B038u;
        goto label_fallthrough_0x25b030;
    }
    ctx->pc = 0x25B030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A648u: goto label_25a648;
            case 0x25A64Cu: goto label_25a64c;
            case 0x25A650u: goto label_25a650;
            case 0x25A654u: goto label_25a654;
            case 0x25A658u: goto label_25a658;
            case 0x25A65Cu: goto label_25a65c;
            case 0x25A660u: goto label_25a660;
            case 0x25A664u: goto label_25a664;
            case 0x25A668u: goto label_25a668;
            case 0x25A66Cu: goto label_25a66c;
            case 0x25A670u: goto label_25a670;
            case 0x25A674u: goto label_25a674;
            case 0x25A678u: goto label_25a678;
            case 0x25A67Cu: goto label_25a67c;
            case 0x25A680u: goto label_25a680;
            case 0x25A684u: goto label_25a684;
            case 0x25A688u: goto label_25a688;
            case 0x25A68Cu: goto label_25a68c;
            case 0x25A690u: goto label_25a690;
            case 0x25A694u: goto label_25a694;
            case 0x25A698u: goto label_25a698;
            case 0x25A69Cu: goto label_25a69c;
            case 0x25A6A0u: goto label_25a6a0;
            case 0x25A6A4u: goto label_25a6a4;
            case 0x25A6A8u: goto label_25a6a8;
            case 0x25A6ACu: goto label_25a6ac;
            case 0x25A6B0u: goto label_25a6b0;
            case 0x25A6B4u: goto label_25a6b4;
            case 0x25A6B8u: goto label_25a6b8;
            case 0x25A6BCu: goto label_25a6bc;
            case 0x25A6C0u: goto label_25a6c0;
            case 0x25A6C4u: goto label_25a6c4;
            case 0x25A6C8u: goto label_25a6c8;
            case 0x25A6CCu: goto label_25a6cc;
            case 0x25A6D0u: goto label_25a6d0;
            case 0x25A6D4u: goto label_25a6d4;
            case 0x25A6D8u: goto label_25a6d8;
            case 0x25A6DCu: goto label_25a6dc;
            case 0x25A6E0u: goto label_25a6e0;
            case 0x25A6E4u: goto label_25a6e4;
            case 0x25A6E8u: goto label_25a6e8;
            case 0x25A6ECu: goto label_25a6ec;
            case 0x25A6F0u: goto label_25a6f0;
            case 0x25A6F4u: goto label_25a6f4;
            case 0x25A6F8u: goto label_25a6f8;
            case 0x25A6FCu: goto label_25a6fc;
            case 0x25A700u: goto label_25a700;
            case 0x25A704u: goto label_25a704;
            case 0x25A708u: goto label_25a708;
            case 0x25A70Cu: goto label_25a70c;
            case 0x25A710u: goto label_25a710;
            case 0x25A714u: goto label_25a714;
            case 0x25A718u: goto label_25a718;
            case 0x25A71Cu: goto label_25a71c;
            case 0x25A720u: goto label_25a720;
            case 0x25A724u: goto label_25a724;
            case 0x25A728u: goto label_25a728;
            case 0x25A72Cu: goto label_25a72c;
            case 0x25A730u: goto label_25a730;
            case 0x25A734u: goto label_25a734;
            case 0x25A738u: goto label_25a738;
            case 0x25A73Cu: goto label_25a73c;
            case 0x25A740u: goto label_25a740;
            case 0x25A744u: goto label_25a744;
            case 0x25A748u: goto label_25a748;
            case 0x25A74Cu: goto label_25a74c;
            case 0x25A750u: goto label_25a750;
            case 0x25A754u: goto label_25a754;
            case 0x25A758u: goto label_25a758;
            case 0x25A75Cu: goto label_25a75c;
            case 0x25A760u: goto label_25a760;
            case 0x25A764u: goto label_25a764;
            case 0x25A768u: goto label_25a768;
            case 0x25A76Cu: goto label_25a76c;
            case 0x25A770u: goto label_25a770;
            case 0x25A774u: goto label_25a774;
            case 0x25A778u: goto label_25a778;
            case 0x25A77Cu: goto label_25a77c;
            case 0x25A780u: goto label_25a780;
            case 0x25A784u: goto label_25a784;
            case 0x25A788u: goto label_25a788;
            case 0x25A78Cu: goto label_25a78c;
            case 0x25A790u: goto label_25a790;
            case 0x25A794u: goto label_25a794;
            case 0x25A798u: goto label_25a798;
            case 0x25A79Cu: goto label_25a79c;
            case 0x25A7A0u: goto label_25a7a0;
            case 0x25A7A4u: goto label_25a7a4;
            case 0x25A7A8u: goto label_25a7a8;
            case 0x25A7ACu: goto label_25a7ac;
            case 0x25A7B0u: goto label_25a7b0;
            case 0x25A7B4u: goto label_25a7b4;
            case 0x25A7B8u: goto label_25a7b8;
            case 0x25A7BCu: goto label_25a7bc;
            case 0x25A7C0u: goto label_25a7c0;
            case 0x25A7C4u: goto label_25a7c4;
            case 0x25A7C8u: goto label_25a7c8;
            case 0x25A7CCu: goto label_25a7cc;
            case 0x25A7D0u: goto label_25a7d0;
            case 0x25A7D4u: goto label_25a7d4;
            case 0x25A7D8u: goto label_25a7d8;
            case 0x25A7DCu: goto label_25a7dc;
            case 0x25A7E0u: goto label_25a7e0;
            case 0x25A7E4u: goto label_25a7e4;
            case 0x25A7E8u: goto label_25a7e8;
            case 0x25A7ECu: goto label_25a7ec;
            case 0x25A7F0u: goto label_25a7f0;
            case 0x25A7F4u: goto label_25a7f4;
            case 0x25A7F8u: goto label_25a7f8;
            case 0x25A7FCu: goto label_25a7fc;
            case 0x25A800u: goto label_25a800;
            case 0x25A804u: goto label_25a804;
            case 0x25A808u: goto label_25a808;
            case 0x25A80Cu: goto label_25a80c;
            case 0x25A810u: goto label_25a810;
            case 0x25A814u: goto label_25a814;
            case 0x25A818u: goto label_25a818;
            case 0x25A81Cu: goto label_25a81c;
            case 0x25A820u: goto label_25a820;
            case 0x25A824u: goto label_25a824;
            case 0x25A828u: goto label_25a828;
            case 0x25A82Cu: goto label_25a82c;
            case 0x25A830u: goto label_25a830;
            case 0x25A834u: goto label_25a834;
            case 0x25A838u: goto label_25a838;
            case 0x25A83Cu: goto label_25a83c;
            case 0x25A840u: goto label_25a840;
            case 0x25A844u: goto label_25a844;
            case 0x25A848u: goto label_25a848;
            case 0x25A84Cu: goto label_25a84c;
            case 0x25A850u: goto label_25a850;
            case 0x25A854u: goto label_25a854;
            case 0x25A858u: goto label_25a858;
            case 0x25A85Cu: goto label_25a85c;
            case 0x25A860u: goto label_25a860;
            case 0x25A864u: goto label_25a864;
            case 0x25A868u: goto label_25a868;
            case 0x25A86Cu: goto label_25a86c;
            case 0x25A870u: goto label_25a870;
            case 0x25A874u: goto label_25a874;
            case 0x25A878u: goto label_25a878;
            case 0x25A87Cu: goto label_25a87c;
            case 0x25A880u: goto label_25a880;
            case 0x25A884u: goto label_25a884;
            case 0x25A888u: goto label_25a888;
            case 0x25A88Cu: goto label_25a88c;
            case 0x25A890u: goto label_25a890;
            case 0x25A894u: goto label_25a894;
            case 0x25A898u: goto label_25a898;
            case 0x25A89Cu: goto label_25a89c;
            case 0x25A8A0u: goto label_25a8a0;
            case 0x25A8A4u: goto label_25a8a4;
            case 0x25A8A8u: goto label_25a8a8;
            case 0x25A8ACu: goto label_25a8ac;
            case 0x25A8B0u: goto label_25a8b0;
            case 0x25A8B4u: goto label_25a8b4;
            case 0x25A8B8u: goto label_25a8b8;
            case 0x25A8BCu: goto label_25a8bc;
            case 0x25A8C0u: goto label_25a8c0;
            case 0x25A8C4u: goto label_25a8c4;
            case 0x25A8C8u: goto label_25a8c8;
            case 0x25A8CCu: goto label_25a8cc;
            case 0x25A8D0u: goto label_25a8d0;
            case 0x25A8D4u: goto label_25a8d4;
            case 0x25A8D8u: goto label_25a8d8;
            case 0x25A8DCu: goto label_25a8dc;
            case 0x25A8E0u: goto label_25a8e0;
            case 0x25A8E4u: goto label_25a8e4;
            case 0x25A8E8u: goto label_25a8e8;
            case 0x25A8ECu: goto label_25a8ec;
            case 0x25A8F0u: goto label_25a8f0;
            case 0x25A8F4u: goto label_25a8f4;
            case 0x25A8F8u: goto label_25a8f8;
            case 0x25A8FCu: goto label_25a8fc;
            case 0x25A900u: goto label_25a900;
            case 0x25A904u: goto label_25a904;
            case 0x25A908u: goto label_25a908;
            case 0x25A90Cu: goto label_25a90c;
            case 0x25A910u: goto label_25a910;
            case 0x25A914u: goto label_25a914;
            case 0x25A918u: goto label_25a918;
            case 0x25A91Cu: goto label_25a91c;
            case 0x25A920u: goto label_25a920;
            case 0x25A924u: goto label_25a924;
            case 0x25A928u: goto label_25a928;
            case 0x25A92Cu: goto label_25a92c;
            case 0x25A930u: goto label_25a930;
            case 0x25A934u: goto label_25a934;
            case 0x25A938u: goto label_25a938;
            case 0x25A93Cu: goto label_25a93c;
            case 0x25A940u: goto label_25a940;
            case 0x25A944u: goto label_25a944;
            case 0x25A948u: goto label_25a948;
            case 0x25A94Cu: goto label_25a94c;
            case 0x25A950u: goto label_25a950;
            case 0x25A954u: goto label_25a954;
            case 0x25A958u: goto label_25a958;
            case 0x25A95Cu: goto label_25a95c;
            case 0x25A960u: goto label_25a960;
            case 0x25A964u: goto label_25a964;
            case 0x25A968u: goto label_25a968;
            case 0x25A96Cu: goto label_25a96c;
            case 0x25A970u: goto label_25a970;
            case 0x25A974u: goto label_25a974;
            case 0x25A978u: goto label_25a978;
            case 0x25A97Cu: goto label_25a97c;
            case 0x25A980u: goto label_25a980;
            case 0x25A984u: goto label_25a984;
            case 0x25A988u: goto label_25a988;
            case 0x25A98Cu: goto label_25a98c;
            case 0x25A990u: goto label_25a990;
            case 0x25A994u: goto label_25a994;
            case 0x25A998u: goto label_25a998;
            case 0x25A99Cu: goto label_25a99c;
            case 0x25A9A0u: goto label_25a9a0;
            case 0x25A9A4u: goto label_25a9a4;
            case 0x25A9A8u: goto label_25a9a8;
            case 0x25A9ACu: goto label_25a9ac;
            case 0x25A9B0u: goto label_25a9b0;
            case 0x25A9B4u: goto label_25a9b4;
            case 0x25A9B8u: goto label_25a9b8;
            case 0x25A9BCu: goto label_25a9bc;
            case 0x25A9C0u: goto label_25a9c0;
            case 0x25A9C4u: goto label_25a9c4;
            case 0x25A9C8u: goto label_25a9c8;
            case 0x25A9CCu: goto label_25a9cc;
            case 0x25A9D0u: goto label_25a9d0;
            case 0x25A9D4u: goto label_25a9d4;
            case 0x25A9D8u: goto label_25a9d8;
            case 0x25A9DCu: goto label_25a9dc;
            case 0x25A9E0u: goto label_25a9e0;
            case 0x25A9E4u: goto label_25a9e4;
            case 0x25A9E8u: goto label_25a9e8;
            case 0x25A9ECu: goto label_25a9ec;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25A9F4u: goto label_25a9f4;
            case 0x25A9F8u: goto label_25a9f8;
            case 0x25A9FCu: goto label_25a9fc;
            case 0x25AA00u: goto label_25aa00;
            case 0x25AA04u: goto label_25aa04;
            case 0x25AA08u: goto label_25aa08;
            case 0x25AA0Cu: goto label_25aa0c;
            case 0x25AA10u: goto label_25aa10;
            case 0x25AA14u: goto label_25aa14;
            case 0x25AA18u: goto label_25aa18;
            case 0x25AA1Cu: goto label_25aa1c;
            case 0x25AA20u: goto label_25aa20;
            case 0x25AA24u: goto label_25aa24;
            case 0x25AA28u: goto label_25aa28;
            case 0x25AA2Cu: goto label_25aa2c;
            case 0x25AA30u: goto label_25aa30;
            case 0x25AA34u: goto label_25aa34;
            case 0x25AA38u: goto label_25aa38;
            case 0x25AA3Cu: goto label_25aa3c;
            case 0x25AA40u: goto label_25aa40;
            case 0x25AA44u: goto label_25aa44;
            case 0x25AA48u: goto label_25aa48;
            case 0x25AA4Cu: goto label_25aa4c;
            case 0x25AA50u: goto label_25aa50;
            case 0x25AA54u: goto label_25aa54;
            case 0x25AA58u: goto label_25aa58;
            case 0x25AA5Cu: goto label_25aa5c;
            case 0x25AA60u: goto label_25aa60;
            case 0x25AA64u: goto label_25aa64;
            case 0x25AA68u: goto label_25aa68;
            case 0x25AA6Cu: goto label_25aa6c;
            case 0x25AA70u: goto label_25aa70;
            case 0x25AA74u: goto label_25aa74;
            case 0x25AA78u: goto label_25aa78;
            case 0x25AA7Cu: goto label_25aa7c;
            case 0x25AA80u: goto label_25aa80;
            case 0x25AA84u: goto label_25aa84;
            case 0x25AA88u: goto label_25aa88;
            case 0x25AA8Cu: goto label_25aa8c;
            case 0x25AA90u: goto label_25aa90;
            case 0x25AA94u: goto label_25aa94;
            case 0x25AA98u: goto label_25aa98;
            case 0x25AA9Cu: goto label_25aa9c;
            case 0x25AAA0u: goto label_25aaa0;
            case 0x25AAA4u: goto label_25aaa4;
            case 0x25AAA8u: goto label_25aaa8;
            case 0x25AAACu: goto label_25aaac;
            case 0x25AAB0u: goto label_25aab0;
            case 0x25AAB4u: goto label_25aab4;
            case 0x25AAB8u: goto label_25aab8;
            case 0x25AABCu: goto label_25aabc;
            case 0x25AAC0u: goto label_25aac0;
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AAC8u: goto label_25aac8;
            case 0x25AACCu: goto label_25aacc;
            case 0x25AAD0u: goto label_25aad0;
            case 0x25AAD4u: goto label_25aad4;
            case 0x25AAD8u: goto label_25aad8;
            case 0x25AADCu: goto label_25aadc;
            case 0x25AAE0u: goto label_25aae0;
            case 0x25AAE4u: goto label_25aae4;
            case 0x25AAE8u: goto label_25aae8;
            case 0x25AAECu: goto label_25aaec;
            case 0x25AAF0u: goto label_25aaf0;
            case 0x25AAF4u: goto label_25aaf4;
            case 0x25AAF8u: goto label_25aaf8;
            case 0x25AAFCu: goto label_25aafc;
            case 0x25AB00u: goto label_25ab00;
            case 0x25AB04u: goto label_25ab04;
            case 0x25AB08u: goto label_25ab08;
            case 0x25AB0Cu: goto label_25ab0c;
            case 0x25AB10u: goto label_25ab10;
            case 0x25AB14u: goto label_25ab14;
            case 0x25AB18u: goto label_25ab18;
            case 0x25AB1Cu: goto label_25ab1c;
            case 0x25AB20u: goto label_25ab20;
            case 0x25AB24u: goto label_25ab24;
            case 0x25AB28u: goto label_25ab28;
            case 0x25AB2Cu: goto label_25ab2c;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB34u: goto label_25ab34;
            case 0x25AB38u: goto label_25ab38;
            case 0x25AB3Cu: goto label_25ab3c;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB48u: goto label_25ab48;
            case 0x25AB4Cu: goto label_25ab4c;
            case 0x25AB50u: goto label_25ab50;
            case 0x25AB54u: goto label_25ab54;
            case 0x25AB58u: goto label_25ab58;
            case 0x25AB5Cu: goto label_25ab5c;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB64u: goto label_25ab64;
            case 0x25AB68u: goto label_25ab68;
            case 0x25AB6Cu: goto label_25ab6c;
            case 0x25AB70u: goto label_25ab70;
            case 0x25AB74u: goto label_25ab74;
            case 0x25AB78u: goto label_25ab78;
            case 0x25AB7Cu: goto label_25ab7c;
            case 0x25AB80u: goto label_25ab80;
            case 0x25AB84u: goto label_25ab84;
            case 0x25AB88u: goto label_25ab88;
            case 0x25AB8Cu: goto label_25ab8c;
            case 0x25AB90u: goto label_25ab90;
            case 0x25AB94u: goto label_25ab94;
            case 0x25AB98u: goto label_25ab98;
            case 0x25AB9Cu: goto label_25ab9c;
            case 0x25ABA0u: goto label_25aba0;
            case 0x25ABA4u: goto label_25aba4;
            case 0x25ABA8u: goto label_25aba8;
            case 0x25ABACu: goto label_25abac;
            case 0x25ABB0u: goto label_25abb0;
            case 0x25ABB4u: goto label_25abb4;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABBCu: goto label_25abbc;
            case 0x25ABC0u: goto label_25abc0;
            case 0x25ABC4u: goto label_25abc4;
            case 0x25ABC8u: goto label_25abc8;
            case 0x25ABCCu: goto label_25abcc;
            case 0x25ABD0u: goto label_25abd0;
            case 0x25ABD4u: goto label_25abd4;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABE0u: goto label_25abe0;
            case 0x25ABE4u: goto label_25abe4;
            case 0x25ABE8u: goto label_25abe8;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABF0u: goto label_25abf0;
            case 0x25ABF4u: goto label_25abf4;
            case 0x25ABF8u: goto label_25abf8;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC00u: goto label_25ac00;
            case 0x25AC04u: goto label_25ac04;
            case 0x25AC08u: goto label_25ac08;
            case 0x25AC0Cu: goto label_25ac0c;
            case 0x25AC10u: goto label_25ac10;
            case 0x25AC14u: goto label_25ac14;
            case 0x25AC18u: goto label_25ac18;
            case 0x25AC1Cu: goto label_25ac1c;
            case 0x25AC20u: goto label_25ac20;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC28u: goto label_25ac28;
            case 0x25AC2Cu: goto label_25ac2c;
            case 0x25AC30u: goto label_25ac30;
            case 0x25AC34u: goto label_25ac34;
            case 0x25AC38u: goto label_25ac38;
            case 0x25AC3Cu: goto label_25ac3c;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC44u: goto label_25ac44;
            case 0x25AC48u: goto label_25ac48;
            case 0x25AC4Cu: goto label_25ac4c;
            case 0x25AC50u: goto label_25ac50;
            case 0x25AC54u: goto label_25ac54;
            case 0x25AC58u: goto label_25ac58;
            case 0x25AC5Cu: goto label_25ac5c;
            case 0x25AC60u: goto label_25ac60;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC68u: goto label_25ac68;
            case 0x25AC6Cu: goto label_25ac6c;
            case 0x25AC70u: goto label_25ac70;
            case 0x25AC74u: goto label_25ac74;
            case 0x25AC78u: goto label_25ac78;
            case 0x25AC7Cu: goto label_25ac7c;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AC84u: goto label_25ac84;
            case 0x25AC88u: goto label_25ac88;
            case 0x25AC8Cu: goto label_25ac8c;
            case 0x25AC90u: goto label_25ac90;
            case 0x25AC94u: goto label_25ac94;
            case 0x25AC98u: goto label_25ac98;
            case 0x25AC9Cu: goto label_25ac9c;
            case 0x25ACA0u: goto label_25aca0;
            case 0x25ACA4u: goto label_25aca4;
            case 0x25ACA8u: goto label_25aca8;
            case 0x25ACACu: goto label_25acac;
            case 0x25ACB0u: goto label_25acb0;
            case 0x25ACB4u: goto label_25acb4;
            case 0x25ACB8u: goto label_25acb8;
            case 0x25ACBCu: goto label_25acbc;
            case 0x25ACC0u: goto label_25acc0;
            case 0x25ACC4u: goto label_25acc4;
            case 0x25ACC8u: goto label_25acc8;
            case 0x25ACCCu: goto label_25accc;
            case 0x25ACD0u: goto label_25acd0;
            case 0x25ACD4u: goto label_25acd4;
            case 0x25ACD8u: goto label_25acd8;
            case 0x25ACDCu: goto label_25acdc;
            case 0x25ACE0u: goto label_25ace0;
            case 0x25ACE4u: goto label_25ace4;
            case 0x25ACE8u: goto label_25ace8;
            case 0x25ACECu: goto label_25acec;
            case 0x25ACF0u: goto label_25acf0;
            case 0x25ACF4u: goto label_25acf4;
            case 0x25ACF8u: goto label_25acf8;
            case 0x25ACFCu: goto label_25acfc;
            case 0x25AD00u: goto label_25ad00;
            case 0x25AD04u: goto label_25ad04;
            case 0x25AD08u: goto label_25ad08;
            case 0x25AD0Cu: goto label_25ad0c;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD14u: goto label_25ad14;
            case 0x25AD18u: goto label_25ad18;
            case 0x25AD1Cu: goto label_25ad1c;
            case 0x25AD20u: goto label_25ad20;
            case 0x25AD24u: goto label_25ad24;
            case 0x25AD28u: goto label_25ad28;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD30u: goto label_25ad30;
            case 0x25AD34u: goto label_25ad34;
            case 0x25AD38u: goto label_25ad38;
            case 0x25AD3Cu: goto label_25ad3c;
            case 0x25AD40u: goto label_25ad40;
            case 0x25AD44u: goto label_25ad44;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD50u: goto label_25ad50;
            case 0x25AD54u: goto label_25ad54;
            case 0x25AD58u: goto label_25ad58;
            case 0x25AD5Cu: goto label_25ad5c;
            case 0x25AD60u: goto label_25ad60;
            case 0x25AD64u: goto label_25ad64;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD6Cu: goto label_25ad6c;
            case 0x25AD70u: goto label_25ad70;
            case 0x25AD74u: goto label_25ad74;
            case 0x25AD78u: goto label_25ad78;
            case 0x25AD7Cu: goto label_25ad7c;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD84u: goto label_25ad84;
            case 0x25AD88u: goto label_25ad88;
            case 0x25AD8Cu: goto label_25ad8c;
            case 0x25AD90u: goto label_25ad90;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            case 0x25AD9Cu: goto label_25ad9c;
            case 0x25ADA0u: goto label_25ada0;
            case 0x25ADA4u: goto label_25ada4;
            case 0x25ADA8u: goto label_25ada8;
            case 0x25ADACu: goto label_25adac;
            case 0x25ADB0u: goto label_25adb0;
            case 0x25ADB4u: goto label_25adb4;
            case 0x25ADB8u: goto label_25adb8;
            case 0x25ADBCu: goto label_25adbc;
            case 0x25ADC0u: goto label_25adc0;
            case 0x25ADC4u: goto label_25adc4;
            case 0x25ADC8u: goto label_25adc8;
            case 0x25ADCCu: goto label_25adcc;
            case 0x25ADD0u: goto label_25add0;
            case 0x25ADD4u: goto label_25add4;
            case 0x25ADD8u: goto label_25add8;
            case 0x25ADDCu: goto label_25addc;
            case 0x25ADE0u: goto label_25ade0;
            case 0x25ADE4u: goto label_25ade4;
            case 0x25ADE8u: goto label_25ade8;
            case 0x25ADECu: goto label_25adec;
            case 0x25ADF0u: goto label_25adf0;
            case 0x25ADF4u: goto label_25adf4;
            case 0x25ADF8u: goto label_25adf8;
            case 0x25ADFCu: goto label_25adfc;
            case 0x25AE00u: goto label_25ae00;
            case 0x25AE04u: goto label_25ae04;
            case 0x25AE08u: goto label_25ae08;
            case 0x25AE0Cu: goto label_25ae0c;
            case 0x25AE10u: goto label_25ae10;
            case 0x25AE14u: goto label_25ae14;
            case 0x25AE18u: goto label_25ae18;
            case 0x25AE1Cu: goto label_25ae1c;
            case 0x25AE20u: goto label_25ae20;
            case 0x25AE24u: goto label_25ae24;
            case 0x25AE28u: goto label_25ae28;
            case 0x25AE2Cu: goto label_25ae2c;
            case 0x25AE30u: goto label_25ae30;
            case 0x25AE34u: goto label_25ae34;
            case 0x25AE38u: goto label_25ae38;
            case 0x25AE3Cu: goto label_25ae3c;
            case 0x25AE40u: goto label_25ae40;
            case 0x25AE44u: goto label_25ae44;
            case 0x25AE48u: goto label_25ae48;
            case 0x25AE4Cu: goto label_25ae4c;
            case 0x25AE50u: goto label_25ae50;
            case 0x25AE54u: goto label_25ae54;
            case 0x25AE58u: goto label_25ae58;
            case 0x25AE5Cu: goto label_25ae5c;
            case 0x25AE60u: goto label_25ae60;
            case 0x25AE64u: goto label_25ae64;
            case 0x25AE68u: goto label_25ae68;
            case 0x25AE6Cu: goto label_25ae6c;
            case 0x25AE70u: goto label_25ae70;
            case 0x25AE74u: goto label_25ae74;
            case 0x25AE78u: goto label_25ae78;
            case 0x25AE7Cu: goto label_25ae7c;
            case 0x25AE80u: goto label_25ae80;
            case 0x25AE84u: goto label_25ae84;
            case 0x25AE88u: goto label_25ae88;
            case 0x25AE8Cu: goto label_25ae8c;
            case 0x25AE90u: goto label_25ae90;
            case 0x25AE94u: goto label_25ae94;
            case 0x25AE98u: goto label_25ae98;
            case 0x25AE9Cu: goto label_25ae9c;
            case 0x25AEA0u: goto label_25aea0;
            case 0x25AEA4u: goto label_25aea4;
            case 0x25AEA8u: goto label_25aea8;
            case 0x25AEACu: goto label_25aeac;
            case 0x25AEB0u: goto label_25aeb0;
            case 0x25AEB4u: goto label_25aeb4;
            case 0x25AEB8u: goto label_25aeb8;
            case 0x25AEBCu: goto label_25aebc;
            case 0x25AEC0u: goto label_25aec0;
            case 0x25AEC4u: goto label_25aec4;
            case 0x25AEC8u: goto label_25aec8;
            case 0x25AECCu: goto label_25aecc;
            case 0x25AED0u: goto label_25aed0;
            case 0x25AED4u: goto label_25aed4;
            case 0x25AED8u: goto label_25aed8;
            case 0x25AEDCu: goto label_25aedc;
            case 0x25AEE0u: goto label_25aee0;
            case 0x25AEE4u: goto label_25aee4;
            case 0x25AEE8u: goto label_25aee8;
            case 0x25AEECu: goto label_25aeec;
            case 0x25AEF0u: goto label_25aef0;
            case 0x25AEF4u: goto label_25aef4;
            case 0x25AEF8u: goto label_25aef8;
            case 0x25AEFCu: goto label_25aefc;
            case 0x25AF00u: goto label_25af00;
            case 0x25AF04u: goto label_25af04;
            case 0x25AF08u: goto label_25af08;
            case 0x25AF0Cu: goto label_25af0c;
            case 0x25AF10u: goto label_25af10;
            case 0x25AF14u: goto label_25af14;
            case 0x25AF18u: goto label_25af18;
            case 0x25AF1Cu: goto label_25af1c;
            case 0x25AF20u: goto label_25af20;
            case 0x25AF24u: goto label_25af24;
            case 0x25AF28u: goto label_25af28;
            case 0x25AF2Cu: goto label_25af2c;
            case 0x25AF30u: goto label_25af30;
            case 0x25AF34u: goto label_25af34;
            case 0x25AF38u: goto label_25af38;
            case 0x25AF3Cu: goto label_25af3c;
            case 0x25AF40u: goto label_25af40;
            case 0x25AF44u: goto label_25af44;
            case 0x25AF48u: goto label_25af48;
            case 0x25AF4Cu: goto label_25af4c;
            case 0x25AF50u: goto label_25af50;
            case 0x25AF54u: goto label_25af54;
            case 0x25AF58u: goto label_25af58;
            case 0x25AF5Cu: goto label_25af5c;
            case 0x25AF60u: goto label_25af60;
            case 0x25AF64u: goto label_25af64;
            case 0x25AF68u: goto label_25af68;
            case 0x25AF6Cu: goto label_25af6c;
            case 0x25AF70u: goto label_25af70;
            case 0x25AF74u: goto label_25af74;
            case 0x25AF78u: goto label_25af78;
            case 0x25AF7Cu: goto label_25af7c;
            case 0x25AF80u: goto label_25af80;
            case 0x25AF84u: goto label_25af84;
            case 0x25AF88u: goto label_25af88;
            case 0x25AF8Cu: goto label_25af8c;
            case 0x25AF90u: goto label_25af90;
            case 0x25AF94u: goto label_25af94;
            case 0x25AF98u: goto label_25af98;
            case 0x25AF9Cu: goto label_25af9c;
            case 0x25AFA0u: goto label_25afa0;
            case 0x25AFA4u: goto label_25afa4;
            case 0x25AFA8u: goto label_25afa8;
            case 0x25AFACu: goto label_25afac;
            case 0x25AFB0u: goto label_25afb0;
            case 0x25AFB4u: goto label_25afb4;
            case 0x25AFB8u: goto label_25afb8;
            case 0x25AFBCu: goto label_25afbc;
            case 0x25AFC0u: goto label_25afc0;
            case 0x25AFC4u: goto label_25afc4;
            case 0x25AFC8u: goto label_25afc8;
            case 0x25AFCCu: goto label_25afcc;
            case 0x25AFD0u: goto label_25afd0;
            case 0x25AFD4u: goto label_25afd4;
            case 0x25AFD8u: goto label_25afd8;
            case 0x25AFDCu: goto label_25afdc;
            case 0x25AFE0u: goto label_25afe0;
            case 0x25AFE4u: goto label_25afe4;
            case 0x25AFE8u: goto label_25afe8;
            case 0x25AFECu: goto label_25afec;
            case 0x25AFF0u: goto label_25aff0;
            case 0x25AFF4u: goto label_25aff4;
            case 0x25AFF8u: goto label_25aff8;
            case 0x25AFFCu: goto label_25affc;
            case 0x25B000u: goto label_25b000;
            case 0x25B004u: goto label_25b004;
            case 0x25B008u: goto label_25b008;
            case 0x25B00Cu: goto label_25b00c;
            case 0x25B010u: goto label_25b010;
            case 0x25B014u: goto label_25b014;
            case 0x25B018u: goto label_25b018;
            case 0x25B01Cu: goto label_25b01c;
            case 0x25B020u: goto label_25b020;
            case 0x25B024u: goto label_25b024;
            case 0x25B028u: goto label_25b028;
            case 0x25B02Cu: goto label_25b02c;
            case 0x25B030u: goto label_25b030;
            case 0x25B034u: goto label_25b034;
            default: break;
        }
        return;
    }
label_fallthrough_0x25b030:
    ctx->pc = 0x25B038u;
}
