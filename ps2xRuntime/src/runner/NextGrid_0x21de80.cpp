#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextGrid
// Address: 0x21de80 - 0x21e160
void NextGrid_0x21de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21de80u;

    // 0x21de80: 0x27bdfff0
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21de84: 0xffbf0000
    ctx->pc = 0x21de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21de88: 0x8c870000
    ctx->pc = 0x21de88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21de8c: 0x44800000
    ctx->pc = 0x21de8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21de90: 0x46006032
    ctx->pc = 0x21de90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21de94: 0x0
    ctx->pc = 0x21de94u;
    // NOP
    // 0x21de98: 0x45000015
    ctx->pc = 0x21DE98u;
    {
        const bool branch_taken_0x21de98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DE9Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x21de98) {
            ctx->pc = 0x21DEF0u;
            goto label_21def0;
        }
    }
    ctx->pc = 0x21DEA0u;
    // 0x21dea0: 0x460d0036
    ctx->pc = 0x21dea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dea4: 0x0
    ctx->pc = 0x21dea4u;
    // NOP
    // 0x21dea8: 0x45000004
    ctx->pc = 0x21DEA8u;
    {
        const bool branch_taken_0x21dea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DEACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21dea8) {
            ctx->pc = 0x21DEBCu;
            goto label_21debc;
        }
    }
    ctx->pc = 0x21DEB0u;
    // 0x21deb0: 0x24c60001
    ctx->pc = 0x21deb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21deb4: 0x10000004
    ctx->pc = 0x21DEB4u;
    {
        const bool branch_taken_0x21deb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DEB8u;
        ctx->f[3] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x21deb4) {
            ctx->pc = 0x21DEC8u;
            goto label_21dec8;
        }
    }
    ctx->pc = 0x21DEBCu;
label_21debc:
    // 0x21debc: 0x24c6ffff
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21dec0: 0x402d
    ctx->pc = 0x21dec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dec4: 0x460078c7
    ctx->pc = 0x21dec4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[15]);
label_21dec8:
    // 0x21dec8: 0x3c03003c
    ctx->pc = 0x21dec8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21decc: 0x24e20001
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x21ded0: 0x44820800
    ctx->pc = 0x21ded0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21ded4: 0x46800860
    ctx->pc = 0x21ded4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21ded8: 0x3c020032
    ctx->pc = 0x21ded8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dedc: 0xc440fa40
    ctx->pc = 0x21dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dee0: 0x46000842
    ctx->pc = 0x21dee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dee4: 0xc460d5d0
    ctx->pc = 0x21dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dee8: 0x10000018
    ctx->pc = 0x21DEE8u;
    {
        const bool branch_taken_0x21dee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DEECu;
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21dee8) {
            ctx->pc = 0x21DF4Cu;
            goto label_21df4c;
        }
    }
    ctx->pc = 0x21DEF0u;
label_21def0:
    // 0x21def0: 0x460e0036
    ctx->pc = 0x21def0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21def4: 0x0
    ctx->pc = 0x21def4u;
    // NOP
    // 0x21def8: 0x45000004
    ctx->pc = 0x21DEF8u;
    {
        const bool branch_taken_0x21def8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DEFCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21def8) {
            ctx->pc = 0x21DF0Cu;
            goto label_21df0c;
        }
    }
    ctx->pc = 0x21DF00u;
    // 0x21df00: 0x24c60001
    ctx->pc = 0x21df00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21df04: 0x10000004
    ctx->pc = 0x21DF04u;
    {
        const bool branch_taken_0x21df04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DF08u;
        ctx->f[3] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x21df04) {
            ctx->pc = 0x21DF18u;
            goto label_21df18;
        }
    }
    ctx->pc = 0x21DF0Cu;
label_21df0c:
    // 0x21df0c: 0x24c6ffff
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21df10: 0x402d
    ctx->pc = 0x21df10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df14: 0x460078c7
    ctx->pc = 0x21df14u;
    ctx->f[3] = FPU_NEG_S(ctx->f[15]);
label_21df18:
    // 0x21df18: 0x3c03003c
    ctx->pc = 0x21df18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21df1c: 0x24e20001
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x21df20: 0x44820800
    ctx->pc = 0x21df20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21df24: 0x46800860
    ctx->pc = 0x21df24u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21df28: 0x3c020032
    ctx->pc = 0x21df28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21df2c: 0xc440fa40
    ctx->pc = 0x21df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df30: 0x46000842
    ctx->pc = 0x21df30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21df34: 0xc460d5d0
    ctx->pc = 0x21df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df38: 0x46000880
    ctx->pc = 0x21df38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21df3c: 0x3c02003c
    ctx->pc = 0x21df3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21df40: 0xc440d5c0
    ctx->pc = 0x21df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df44: 0x46001341
    ctx->pc = 0x21df44u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21df48: 0x460e6b42
    ctx->pc = 0x21df48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
label_21df4c:
    // 0x21df4c: 0x4c0002d
    ctx->pc = 0x21DF4Cu;
    {
        const bool branch_taken_0x21df4c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x21DF50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21df4c) {
            ctx->pc = 0x21E004u;
            goto label_21e004;
        }
    }
    ctx->pc = 0x21DF54u;
    // 0x21df54: 0x8c42fa4c
    ctx->pc = 0x21df54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965836)));
    // 0x21df58: 0xc2102a
    ctx->pc = 0x21df58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x21df5c: 0x10400029
    ctx->pc = 0x21DF5Cu;
    {
        const bool branch_taken_0x21df5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DF60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21df5c) {
            ctx->pc = 0x21E004u;
            goto label_21e004;
        }
    }
    ctx->pc = 0x21DF64u;
    // 0x21df64: 0xc440d5c4
    ctx->pc = 0x21df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df68: 0x46006840
    ctx->pc = 0x21df68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x21df6c: 0x46031800
    ctx->pc = 0x21df6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x21df70: 0x11000014
    ctx->pc = 0x21DF70u;
    {
        const bool branch_taken_0x21df70 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DF74u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21df70) {
            ctx->pc = 0x21DFC4u;
            goto label_21dfc4;
        }
    }
    ctx->pc = 0x21DF78u;
    // 0x21df78: 0x3c02003c
    ctx->pc = 0x21df78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21df7c: 0xc440d5cc
    ctx->pc = 0x21df7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df80: 0x46010034
    ctx->pc = 0x21df80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21df84: 0x0
    ctx->pc = 0x21df84u;
    // NOP
    // 0x21df88: 0x45030001
    ctx->pc = 0x21DF88u;
    {
        const bool branch_taken_0x21df88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21df88) {
            ctx->pc = 0x21DF8Cu;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21DF90u;
            goto label_21df90;
        }
    }
    ctx->pc = 0x21DF90u;
label_21df90:
    // 0x21df90: 0x3c02003c
    ctx->pc = 0x21df90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21df94: 0xc440d5d4
    ctx->pc = 0x21df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df98: 0x46000801
    ctx->pc = 0x21df98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21df9c: 0x3c020032
    ctx->pc = 0x21df9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dfa0: 0xc441fa44
    ctx->pc = 0x21dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dfa4: 0x46010002
    ctx->pc = 0x21dfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21dfa8: 0x46000064
    ctx->pc = 0x21dfa8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21dfac: 0x44020800
    ctx->pc = 0x21dfacu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21dfb0: 0x46102a
    ctx->pc = 0x21dfb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
label_21dfb4:
    // 0x21dfb4: 0x14400014
    ctx->pc = 0x21DFB4u;
    {
        const bool branch_taken_0x21dfb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21DFB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21dfb4) {
            ctx->pc = 0x21E008u;
            goto label_21e008;
        }
    }
    ctx->pc = 0x21DFBCu;
    // 0x21dfbc: 0x10000064
    ctx->pc = 0x21DFBCu;
    {
        const bool branch_taken_0x21dfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DFC0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x21dfbc) {
            ctx->pc = 0x21E150u;
            goto label_21e150;
        }
    }
    ctx->pc = 0x21DFC4u;
label_21dfc4:
    // 0x21dfc4: 0x3c02003c
    ctx->pc = 0x21dfc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21dfc8: 0xc440d5cc
    ctx->pc = 0x21dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dfcc: 0x46000834
    ctx->pc = 0x21dfccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dfd0: 0x0
    ctx->pc = 0x21dfd0u;
    // NOP
    // 0x21dfd4: 0x45030001
    ctx->pc = 0x21DFD4u;
    {
        const bool branch_taken_0x21dfd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21dfd4) {
            ctx->pc = 0x21DFD8u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21DFDCu;
            goto label_21dfdc;
        }
    }
    ctx->pc = 0x21DFDCu;
label_21dfdc:
    // 0x21dfdc: 0x3c02003c
    ctx->pc = 0x21dfdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21dfe0: 0xc440d5d4
    ctx->pc = 0x21dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dfe4: 0x46000801
    ctx->pc = 0x21dfe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21dfe8: 0x3c020032
    ctx->pc = 0x21dfe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dfec: 0xc441fa44
    ctx->pc = 0x21dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dff0: 0x46010002
    ctx->pc = 0x21dff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21dff4: 0x46000064
    ctx->pc = 0x21dff4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21dff8: 0x44020800
    ctx->pc = 0x21dff8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21dffc: 0x1000ffed
    ctx->pc = 0x21DFFCu;
    {
        const bool branch_taken_0x21dffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E000u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
        if (branch_taken_0x21dffc) {
            ctx->pc = 0x21DFB4u;
            goto label_21dfb4;
        }
    }
    ctx->pc = 0x21E004u;
label_21e004:
    // 0x21e004: 0x3c02003c
    ctx->pc = 0x21e004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21e008:
    // 0x21e008: 0xc440d5c8
    ctx->pc = 0x21e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e00c: 0x46020034
    ctx->pc = 0x21e00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e010: 0x0
    ctx->pc = 0x21e010u;
    // NOP
    // 0x21e014: 0x4501004f
    ctx->pc = 0x21E014u;
    {
        const bool branch_taken_0x21e014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E018u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e014) {
            ctx->pc = 0x21E154u;
            goto label_21e154;
        }
    }
    ctx->pc = 0x21E01Cu;
    // 0x21e01c: 0x24e70001
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x21e020: 0x3c020032
    ctx->pc = 0x21e020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e024: 0x8c42fa48
    ctx->pc = 0x21e024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965832)));
    // 0x21e028: 0xe2102a
    ctx->pc = 0x21e028u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x21e02c: 0x10400049
    ctx->pc = 0x21E02Cu;
    {
        const bool branch_taken_0x21e02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E030u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e02c) {
            ctx->pc = 0x21E154u;
            goto label_21e154;
        }
    }
    ctx->pc = 0x21E034u;
    // 0x21e034: 0x44800000
    ctx->pc = 0x21e034u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e038: 0x46006032
    ctx->pc = 0x21e038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e03c: 0x0
    ctx->pc = 0x21e03cu;
    // NOP
    // 0x21e040: 0x4501001a
    ctx->pc = 0x21E040u;
    {
        const bool branch_taken_0x21e040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E044u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e040) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E048u;
    // 0x21e048: 0x3c02003c
    ctx->pc = 0x21e048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e04c: 0xc440d5c0
    ctx->pc = 0x21e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e050: 0x46001001
    ctx->pc = 0x21e050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21e054: 0x460f7840
    ctx->pc = 0x21e054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x21e058: 0x46010034
    ctx->pc = 0x21e058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e05c: 0x0
    ctx->pc = 0x21e05cu;
    // NOP
    // 0x21e060: 0x45010012
    ctx->pc = 0x21E060u;
    {
        const bool branch_taken_0x21e060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E064u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e060) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E068u;
    // 0x21e068: 0x3c020032
    ctx->pc = 0x21e068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e06c: 0xc440fa40
    ctx->pc = 0x21e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e070: 0x46001080
    ctx->pc = 0x21e070u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21e074: 0x3c02003c
    ctx->pc = 0x21e074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e078: 0x460f7800
    ctx->pc = 0x21e078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x21e07c: 0xc441d5c0
    ctx->pc = 0x21e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e080: 0x46010000
    ctx->pc = 0x21e080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e084: 0x46001041
    ctx->pc = 0x21e084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21e088: 0x44800000
    ctx->pc = 0x21e088u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e08c: 0x46010034
    ctx->pc = 0x21e08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e090: 0x0
    ctx->pc = 0x21e090u;
    // NOP
    // 0x21e094: 0x45000005
    ctx->pc = 0x21E094u;
    {
        const bool branch_taken_0x21e094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E098u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e094) {
            ctx->pc = 0x21E0ACu;
            goto label_21e0ac;
        }
    }
    ctx->pc = 0x21E09Cu;
    // 0x21e09c: 0x460e0842
    ctx->pc = 0x21e09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x21e0a0: 0xc440d5c4
    ctx->pc = 0x21e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0a4: 0x10000002
    ctx->pc = 0x21E0A4u;
    {
        const bool branch_taken_0x21e0a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E0A8u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21e0a4) {
            ctx->pc = 0x21E0B0u;
            goto label_21e0b0;
        }
    }
    ctx->pc = 0x21E0ACu;
label_21e0ac:
    // 0x21e0ac: 0xc441d5c4
    ctx->pc = 0x21e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21e0b0:
    // 0x21e0b0: 0x11000008
    ctx->pc = 0x21E0B0u;
    {
        const bool branch_taken_0x21e0b0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E0B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e0b0) {
            ctx->pc = 0x21E0D4u;
            goto label_21e0d4;
        }
    }
    ctx->pc = 0x21E0B8u;
    // 0x21e0b8: 0xc440d5cc
    ctx->pc = 0x21e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0bc: 0x46010034
    ctx->pc = 0x21e0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e0c0: 0x0
    ctx->pc = 0x21e0c0u;
    // NOP
    // 0x21e0c4: 0x45030009
    ctx->pc = 0x21E0C4u;
    {
        const bool branch_taken_0x21e0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e0c4) {
            ctx->pc = 0x21E0C8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x21E0ECu;
            goto label_21e0ec;
        }
    }
    ctx->pc = 0x21E0CCu;
    // 0x21e0cc: 0x10000008
    ctx->pc = 0x21E0CCu;
    {
        const bool branch_taken_0x21e0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E0D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e0cc) {
            ctx->pc = 0x21E0F0u;
            goto label_21e0f0;
        }
    }
    ctx->pc = 0x21E0D4u;
label_21e0d4:
    // 0x21e0d4: 0xc440d5cc
    ctx->pc = 0x21e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0d8: 0x46000834
    ctx->pc = 0x21e0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e0dc: 0x0
    ctx->pc = 0x21e0dcu;
    // NOP
    // 0x21e0e0: 0x45020003
    ctx->pc = 0x21E0E0u;
    {
        const bool branch_taken_0x21e0e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e0e0) {
            ctx->pc = 0x21E0E4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x21E0F0u;
            goto label_21e0f0;
        }
    }
    ctx->pc = 0x21E0E8u;
    // 0x21e0e8: 0xc441d5cc
    ctx->pc = 0x21e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21e0ec:
    // 0x21e0ec: 0x3c02003c
    ctx->pc = 0x21e0ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21e0f0:
    // 0x21e0f0: 0xc440d5d4
    ctx->pc = 0x21e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e0f4: 0x46000801
    ctx->pc = 0x21e0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e0f8: 0x3c020032
    ctx->pc = 0x21e0f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e0fc: 0x2442f9f8
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21e100: 0xc441004c
    ctx->pc = 0x21e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e104: 0x46010002
    ctx->pc = 0x21e104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21e108: 0x46000064
    ctx->pc = 0x21e108u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21e10c: 0x44060800
    ctx->pc = 0x21e10cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x21e110: 0x8c420054
    ctx->pc = 0x21e110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21e114: 0xc2102a
    ctx->pc = 0x21e114u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x21e118: 0x1040000e
    ctx->pc = 0x21E118u;
    {
        const bool branch_taken_0x21e118 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E11Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e118) {
            ctx->pc = 0x21E154u;
            goto label_21e154;
        }
    }
    ctx->pc = 0x21E120u;
    // 0x21e120: 0x4c30003
    ctx->pc = 0x21E120u;
    {
        const bool branch_taken_0x21e120 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x21e120) {
            ctx->pc = 0x21E124u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->pc = 0x21E130u;
            goto label_21e130;
        }
    }
    ctx->pc = 0x21E128u;
    // 0x21e128: 0x1000000b
    ctx->pc = 0x21E128u;
    {
        const bool branch_taken_0x21e128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E12Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x21e128) {
            ctx->pc = 0x21E158u;
            goto label_21e158;
        }
    }
    ctx->pc = 0x21E130u;
label_21e130:
    // 0x21e130: 0x4e00003
    ctx->pc = 0x21E130u;
    {
        const bool branch_taken_0x21e130 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x21E134u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x21e130) {
            ctx->pc = 0x21E140u;
            goto label_21e140;
        }
    }
    ctx->pc = 0x21E138u;
    // 0x21e138: 0x4c10006
    ctx->pc = 0x21E138u;
    {
        const bool branch_taken_0x21e138 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x21E13Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21e138) {
            ctx->pc = 0x21E154u;
            goto label_21e154;
        }
    }
    ctx->pc = 0x21E140u;
label_21e140:
    // 0x21e140: 0x3c04003a
    ctx->pc = 0x21e140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21e144: 0x248464e0
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25824));
    // 0x21e148: 0xc0b49a6
    ctx->pc = 0x21E148u;
    SET_GPR_U32(ctx, 31, 0x21E150u);
    ctx->pc = 0x21E14Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E150u; }
    }
    if (ctx->pc != 0x21E150u) { return; }
    ctx->pc = 0x21E150u;
label_21e150:
    // 0x21e150: 0x24020001
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21e154:
    // 0x21e154: 0xdfbf0000
    ctx->pc = 0x21e154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e158:
    // 0x21e158: 0x3e00008
    ctx->pc = 0x21E158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E15Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DEBCu: goto label_21debc;
            case 0x21DEC8u: goto label_21dec8;
            case 0x21DEF0u: goto label_21def0;
            case 0x21DF0Cu: goto label_21df0c;
            case 0x21DF18u: goto label_21df18;
            case 0x21DF4Cu: goto label_21df4c;
            case 0x21DF90u: goto label_21df90;
            case 0x21DFB4u: goto label_21dfb4;
            case 0x21DFC4u: goto label_21dfc4;
            case 0x21DFDCu: goto label_21dfdc;
            case 0x21E004u: goto label_21e004;
            case 0x21E008u: goto label_21e008;
            case 0x21E0ACu: goto label_21e0ac;
            case 0x21E0B0u: goto label_21e0b0;
            case 0x21E0D4u: goto label_21e0d4;
            case 0x21E0ECu: goto label_21e0ec;
            case 0x21E0F0u: goto label_21e0f0;
            case 0x21E130u: goto label_21e130;
            case 0x21E140u: goto label_21e140;
            case 0x21E150u: goto label_21e150;
            case 0x21E154u: goto label_21e154;
            case 0x21E158u: goto label_21e158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E160u;
}
