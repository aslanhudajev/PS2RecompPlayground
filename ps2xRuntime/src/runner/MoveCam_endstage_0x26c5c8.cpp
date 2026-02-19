#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_endstage
// Address: 0x26c5c8 - 0x26c7a4
void MoveCam_endstage_0x26c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26c5c8u;

    // 0x26c5c8: 0x240301a0
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26c5cc: 0x831818
    ctx->pc = 0x26c5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26c5d0: 0x3c020034
    ctx->pc = 0x26c5d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c5d4: 0x2442eb60
    ctx->pc = 0x26c5d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c5d8: 0x14800070
    ctx->pc = 0x26C5D8u;
    {
        const bool branch_taken_0x26c5d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26C5DCu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26c5d8) {
            ctx->pc = 0x26C79Cu;
            goto label_26c79c;
        }
    }
    ctx->pc = 0x26C5E0u;
    // 0x26c5e0: 0xaca00090
    ctx->pc = 0x26c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x26c5e4: 0xaca00094
    ctx->pc = 0x26c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x26c5e8: 0xaca00098
    ctx->pc = 0x26c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x26c5ec: 0xaca000a0
    ctx->pc = 0x26c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
    // 0x26c5f0: 0xaca000a4
    ctx->pc = 0x26c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
    // 0x26c5f4: 0xaca000a8
    ctx->pc = 0x26c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
    // 0x26c5f8: 0xc4a200d0
    ctx->pc = 0x26c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c5fc: 0x3c014120
    ctx->pc = 0x26c5fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x26c600: 0x44810000
    ctx->pc = 0x26c600u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c604: 0x46020034
    ctx->pc = 0x26c604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c608: 0x0
    ctx->pc = 0x26c608u;
    // NOP
    // 0x26c60c: 0x4500000a
    ctx->pc = 0x26C60Cu;
    {
        const bool branch_taken_0x26c60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C610u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26c60c) {
            ctx->pc = 0x26C638u;
            goto label_26c638;
        }
    }
    ctx->pc = 0x26C614u;
    // 0x26c614: 0x46001001
    ctx->pc = 0x26c614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26c618: 0x3c013daa
    ctx->pc = 0x26c618u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15786 << 16));
    // 0x26c61c: 0x3421aaab
    ctx->pc = 0x26c61cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43691));
    // 0x26c620: 0x44810800
    ctx->pc = 0x26c620u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c624: 0x46010002
    ctx->pc = 0x26c624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c628: 0x46001001
    ctx->pc = 0x26c628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26c62c: 0xe4a000d0
    ctx->pc = 0x26c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x26c630: 0x24020001
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c634: 0xac6238d4
    ctx->pc = 0x26c634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_26c638:
    // 0x26c638: 0x3c020036
    ctx->pc = 0x26c638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x26c63c: 0x8c42d934
    ctx->pc = 0x26c63cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x26c640: 0x4400004
    ctx->pc = 0x26C640u;
    {
        const bool branch_taken_0x26c640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C644u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26c640) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C648u;
    // 0x26c648: 0x8c4207bc
    ctx->pc = 0x26c648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x26c64c: 0x10400053
    ctx->pc = 0x26C64Cu;
    {
        const bool branch_taken_0x26c64c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c64c) {
            ctx->pc = 0x26C79Cu;
            goto label_26c79c;
        }
    }
    ctx->pc = 0x26C654u;
label_26c654:
    // 0x26c654: 0xc4a10074
    ctx->pc = 0x26c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c658: 0xc4a00194
    ctx->pc = 0x26c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c65c: 0x46010034
    ctx->pc = 0x26c65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c660: 0x0
    ctx->pc = 0x26c660u;
    // NOP
    // 0x26c664: 0x4500001d
    ctx->pc = 0x26C664u;
    {
        const bool branch_taken_0x26c664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C668u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26c664) {
            ctx->pc = 0x26C6DCu;
            goto label_26c6dc;
        }
    }
    ctx->pc = 0x26C66Cu;
    // 0x26c66c: 0xc4a100b0
    ctx->pc = 0x26c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c670: 0x44800000
    ctx->pc = 0x26c670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26c674: 0x46010036
    ctx->pc = 0x26c674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c678: 0x0
    ctx->pc = 0x26c678u;
    // NOP
    // 0x26c67c: 0x45000017
    ctx->pc = 0x26C67Cu;
    {
        const bool branch_taken_0x26c67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C680u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26c67c) {
            ctx->pc = 0x26C6DCu;
            goto label_26c6dc;
        }
    }
    ctx->pc = 0x26C684u;
    // 0x26c684: 0x8c62ffbc
    ctx->pc = 0x26c684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26c688: 0x4400005
    ctx->pc = 0x26C688u;
    {
        const bool branch_taken_0x26c688 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C68Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26c688) {
            ctx->pc = 0x26C6A0u;
            goto label_26c6a0;
        }
    }
    ctx->pc = 0x26C690u;
    // 0x26c690: 0x44820000
    ctx->pc = 0x26c690u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26c694: 0x46800020
    ctx->pc = 0x26c694u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26c698: 0x10000008
    ctx->pc = 0x26C698u;
    {
        const bool branch_taken_0x26c698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c698) {
            ctx->pc = 0x26C6BCu;
            goto label_26c6bc;
        }
    }
    ctx->pc = 0x26C6A0u;
label_26c6a0:
    // 0x26c6a0: 0x8c820000
    ctx->pc = 0x26c6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c6a4: 0x30430001
    ctx->pc = 0x26c6a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26c6a8: 0x21042
    ctx->pc = 0x26c6a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c6ac: 0x621825
    ctx->pc = 0x26c6acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c6b0: 0x44830000
    ctx->pc = 0x26c6b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26c6b4: 0x46800020
    ctx->pc = 0x26c6b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26c6b8: 0x46000000
    ctx->pc = 0x26c6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26c6bc:
    // 0x26c6bc: 0x3c013dcc
    ctx->pc = 0x26c6bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26c6c0: 0x3421cccd
    ctx->pc = 0x26c6c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26c6c4: 0x44810800
    ctx->pc = 0x26c6c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c6c8: 0x46010042
    ctx->pc = 0x26c6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c6cc: 0xc4a00094
    ctx->pc = 0x26c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c6d0: 0x46010001
    ctx->pc = 0x26c6d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26c6d4: 0xe4a00094
    ctx->pc = 0x26c6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x26c6d8: 0x3c020032
    ctx->pc = 0x26c6d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_26c6dc:
    // 0x26c6dc: 0x8c420800
    ctx->pc = 0x26c6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x26c6e0: 0x2842000f
    ctx->pc = 0x26c6e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 15));
    // 0x26c6e4: 0x10400004
    ctx->pc = 0x26C6E4u;
    {
        const bool branch_taken_0x26c6e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C6E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26c6e4) {
            ctx->pc = 0x26C6F8u;
            goto label_26c6f8;
        }
    }
    ctx->pc = 0x26C6ECu;
    // 0x26c6ec: 0x8c4207bc
    ctx->pc = 0x26c6ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x26c6f0: 0x1040002a
    ctx->pc = 0x26C6F0u;
    {
        const bool branch_taken_0x26c6f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c6f0) {
            ctx->pc = 0x26C79Cu;
            goto label_26c79c;
        }
    }
    ctx->pc = 0x26C6F8u;
label_26c6f8:
    // 0x26c6f8: 0x3c020034
    ctx->pc = 0x26c6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c6fc: 0xc441f94c
    ctx->pc = 0x26c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c700: 0x44800000
    ctx->pc = 0x26c700u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26c704: 0x46010034
    ctx->pc = 0x26c704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c708: 0x0
    ctx->pc = 0x26c708u;
    // NOP
    // 0x26c70c: 0x45000023
    ctx->pc = 0x26C70Cu;
    {
        const bool branch_taken_0x26c70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C710u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26c70c) {
            ctx->pc = 0x26C79Cu;
            goto label_26c79c;
        }
    }
    ctx->pc = 0x26C714u;
    // 0x26c714: 0x8c62ffbc
    ctx->pc = 0x26c714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26c718: 0x4400005
    ctx->pc = 0x26C718u;
    {
        const bool branch_taken_0x26c718 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C71Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26c718) {
            ctx->pc = 0x26C730u;
            goto label_26c730;
        }
    }
    ctx->pc = 0x26C720u;
    // 0x26c720: 0x44821000
    ctx->pc = 0x26c720u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x26c724: 0x468010a0
    ctx->pc = 0x26c724u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26c728: 0x10000008
    ctx->pc = 0x26C728u;
    {
        const bool branch_taken_0x26c728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c728) {
            ctx->pc = 0x26C74Cu;
            goto label_26c74c;
        }
    }
    ctx->pc = 0x26C730u;
label_26c730:
    // 0x26c730: 0x8c820000
    ctx->pc = 0x26c730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c734: 0x30430001
    ctx->pc = 0x26c734u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26c738: 0x21042
    ctx->pc = 0x26c738u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c73c: 0x621825
    ctx->pc = 0x26c73cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c740: 0x44831000
    ctx->pc = 0x26c740u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x26c744: 0x468010a0
    ctx->pc = 0x26c744u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26c748: 0x46021080
    ctx->pc = 0x26c748u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26c74c:
    // 0x26c74c: 0x3c013c23
    ctx->pc = 0x26c74cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x26c750: 0x3421d70a
    ctx->pc = 0x26c750u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26c754: 0x44810000
    ctx->pc = 0x26c754u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c758: 0x46001082
    ctx->pc = 0x26c758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26c75c: 0x3c030034
    ctx->pc = 0x26c75cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26c760: 0xc461f94c
    ctx->pc = 0x26c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c764: 0x46020841
    ctx->pc = 0x26c764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x26c768: 0xe461f94c
    ctx->pc = 0x26c768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965580), bits); }
    // 0x26c76c: 0x3c020034
    ctx->pc = 0x26c76cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c770: 0xc440f950
    ctx->pc = 0x26c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c774: 0x46020001
    ctx->pc = 0x26c774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26c778: 0xe440f950
    ctx->pc = 0x26c778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965584), bits); }
    // 0x26c77c: 0x44800000
    ctx->pc = 0x26c77cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26c780: 0x46000834
    ctx->pc = 0x26c780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c784: 0x45000003
    ctx->pc = 0x26C784u;
    {
        const bool branch_taken_0x26c784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c784) {
            ctx->pc = 0x26C794u;
            goto label_26c794;
        }
    }
    ctx->pc = 0x26C78Cu;
    // 0x26c78c: 0xe440f950
    ctx->pc = 0x26c78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965584), bits); }
    // 0x26c790: 0xe460f94c
    ctx->pc = 0x26c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965580), bits); }
label_26c794:
    // 0x26c794: 0x8099d38
    ctx->pc = 0x26C794u;
    ctx->pc = 0x2674E0u;
    ChangeWindow_0x2674e0(rdram, ctx, runtime); return;
    ctx->pc = 0x26C79Cu;
label_26c79c:
    // 0x26c79c: 0x3e00008
    ctx->pc = 0x26C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C638u: goto label_26c638;
            case 0x26C654u: goto label_26c654;
            case 0x26C6A0u: goto label_26c6a0;
            case 0x26C6BCu: goto label_26c6bc;
            case 0x26C6DCu: goto label_26c6dc;
            case 0x26C6F8u: goto label_26c6f8;
            case 0x26C730u: goto label_26c730;
            case 0x26C74Cu: goto label_26c74c;
            case 0x26C794u: goto label_26c794;
            case 0x26C79Cu: goto label_26c79c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C7A4u;
}
