#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_closest_chest
// Address: 0x237840 - 0x2379e0
void find_closest_chest_0x237840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237840u;

    // 0x237840: 0x27bdff70
    ctx->pc = 0x237840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x237844: 0xffbf0080
    ctx->pc = 0x237844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x237848: 0xffb60070
    ctx->pc = 0x237848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23784c: 0xffb50060
    ctx->pc = 0x23784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x237850: 0xffb40050
    ctx->pc = 0x237850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x237854: 0xffb30040
    ctx->pc = 0x237854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x237858: 0xffb20030
    ctx->pc = 0x237858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23785c: 0xffb10020
    ctx->pc = 0x23785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x237860: 0xffb00010
    ctx->pc = 0x237860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x237864: 0x240203b0
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x237868: 0x822018
    ctx->pc = 0x237868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23786c: 0x3c020033
    ctx->pc = 0x23786cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237870: 0x2442dfd0
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x237874: 0x828021
    ctx->pc = 0x237874u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237878: 0x86020288
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23787c: 0x4420010
    ctx->pc = 0x23787Cu;
    {
        const bool branch_taken_0x23787c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23787c) {
            ctx->pc = 0x237880u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 848)));
            ctx->pc = 0x2378C0u;
            goto label_2378c0;
        }
    }
    ctx->pc = 0x237884u;
    // 0x237884: 0xc6010290
    ctx->pc = 0x237884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237888: 0x3c014160
    ctx->pc = 0x237888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16736 << 16));
    // 0x23788c: 0x44810000
    ctx->pc = 0x23788cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237890: 0x46000836
    ctx->pc = 0x237890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237894: 0x0
    ctx->pc = 0x237894u;
    // NOP
    // 0x237898: 0x45000008
    ctx->pc = 0x237898u;
    {
        const bool branch_taken_0x237898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23789Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x237898) {
            ctx->pc = 0x2378BCu;
            goto label_2378bc;
        }
    }
    ctx->pc = 0x2378A0u;
    // 0x2378a0: 0xae000350
    ctx->pc = 0x2378a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x2378a4: 0xae020354
    ctx->pc = 0x2378a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
    // 0x2378a8: 0x3c0147c3
    ctx->pc = 0x2378a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2378ac: 0x34215000
    ctx->pc = 0x2378acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2378b0: 0x44810000
    ctx->pc = 0x2378b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2378b4: 0x10000040
    ctx->pc = 0x2378B4u;
    {
        const bool branch_taken_0x2378b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2378B8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        if (branch_taken_0x2378b4) {
            ctx->pc = 0x2379B8u;
            goto label_2379b8;
        }
    }
    ctx->pc = 0x2378BCu;
label_2378bc:
    // 0x2378bc: 0x8e020350
    ctx->pc = 0x2378bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2378c0:
    // 0x2378c0: 0x1440003e
    ctx->pc = 0x2378C0u;
    {
        const bool branch_taken_0x2378c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2378C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2378c0) {
            ctx->pc = 0x2379BCu;
            goto label_2379bc;
        }
    }
    ctx->pc = 0x2378C8u;
    // 0x2378c8: 0x3c0141a0
    ctx->pc = 0x2378c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x2378cc: 0x44816000
    ctx->pc = 0x2378ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2378d0: 0xc0a0120
    ctx->pc = 0x2378D0u;
    SET_GPR_U32(ctx, 31, 0x2378D8u);
    ctx->pc = 0x2378D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378D8u; }
    }
    if (ctx->pc != 0x2378D8u) { return; }
    ctx->pc = 0x2378D8u;
    // 0x2378d8: 0x3c160034
    ctx->pc = 0x2378d8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x2378dc: 0x24150110
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 272));
    // 0x2378e0: 0x2414ffff
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2378e4: 0x24130002
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2378e8: 0x1000002e
    ctx->pc = 0x2378E8u;
    {
        const bool branch_taken_0x2378e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2378ECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2378e8) {
            ctx->pc = 0x2379A4u;
            goto label_2379a4;
        }
    }
    ctx->pc = 0x2378F0u;
label_2378f0:
    // 0x2378f0: 0x8ec2cd94
    ctx->pc = 0x2378f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294954388)));
    // 0x2378f4: 0x621821
    ctx->pc = 0x2378f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2378f8: 0x846200d8
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2378fc: 0x10540029
    ctx->pc = 0x2378FCu;
    {
        const bool branch_taken_0x2378fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x237900u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x2378fc) {
            ctx->pc = 0x2379A4u;
            goto label_2379a4;
        }
    }
    ctx->pc = 0x237904u;
    // 0x237904: 0x8c820000
    ctx->pc = 0x237904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237908: 0x14530026
    ctx->pc = 0x237908u;
    {
        const bool branch_taken_0x237908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x237908) {
            ctx->pc = 0x2379A4u;
            goto label_2379a4;
        }
    }
    ctx->pc = 0x237910u;
    // 0x237910: 0x806200e1
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 225)));
    // 0x237914: 0x14400023
    ctx->pc = 0x237914u;
    {
        const bool branch_taken_0x237914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x237914) {
            ctx->pc = 0x2379A4u;
            goto label_2379a4;
        }
    }
    ctx->pc = 0x23791Cu;
    // 0x23791c: 0xc4630040
    ctx->pc = 0x23791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x237920: 0xc6000040
    ctx->pc = 0x237920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237924: 0x460018c1
    ctx->pc = 0x237924u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x237928: 0xe7a30000
    ctx->pc = 0x237928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23792c: 0xc4620044
    ctx->pc = 0x23792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237930: 0xc6000044
    ctx->pc = 0x237930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237934: 0x46001081
    ctx->pc = 0x237934u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x237938: 0xe7a20004
    ctx->pc = 0x237938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23793c: 0xc4600048
    ctx->pc = 0x23793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237940: 0xc6010048
    ctx->pc = 0x237940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237944: 0x46010001
    ctx->pc = 0x237944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x237948: 0xe7a00008
    ctx->pc = 0x237948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23794c: 0x460318c2
    ctx->pc = 0x23794cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x237950: 0x46021082
    ctx->pc = 0x237950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x237954: 0x460218c0
    ctx->pc = 0x237954u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x237958: 0x46000002
    ctx->pc = 0x237958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23795c: 0x46001b00
    ctx->pc = 0x23795cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x237960: 0x0
    ctx->pc = 0x237960u;
    // NOP
    // 0x237964: 0x0
    ctx->pc = 0x237964u;
    // NOP
    // 0x237968: 0x460c0044
    ctx->pc = 0x237968u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23796c: 0x46010832
    ctx->pc = 0x23796cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237970: 0x0
    ctx->pc = 0x237970u;
    // NOP
    // 0x237974: 0x45030005
    ctx->pc = 0x237974u;
    {
        const bool branch_taken_0x237974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237974) {
            ctx->pc = 0x237978u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x23797Cu;
    // 0x23797c: 0xc0ba284
    ctx->pc = 0x23797Cu;
    SET_GPR_U32(ctx, 31, 0x237984u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237984u; }
    }
    if (ctx->pc != 0x237984u) { return; }
    ctx->pc = 0x237984u;
    // 0x237984: 0x46000046
    ctx->pc = 0x237984u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x237988: 0xc6000358
    ctx->pc = 0x237988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23798c:
    // 0x23798c: 0x46000834
    ctx->pc = 0x23798cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237990: 0x45000004
    ctx->pc = 0x237990u;
    {
        const bool branch_taken_0x237990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237990) {
            ctx->pc = 0x2379A4u;
            goto label_2379a4;
        }
    }
    ctx->pc = 0x237998u;
    // 0x237998: 0xe6010358
    ctx->pc = 0x237998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
    // 0x23799c: 0xae110354
    ctx->pc = 0x23799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 17));
    // 0x2379a0: 0xae120350
    ctx->pc = 0x2379a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 18));
label_2379a4:
    // 0x2379a4: 0xc0a015a
    ctx->pc = 0x2379A4u;
    SET_GPR_U32(ctx, 31, 0x2379ACu);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379ACu; }
    }
    if (ctx->pc != 0x2379ACu) { return; }
    ctx->pc = 0x2379ACu;
    // 0x2379ac: 0x40882d
    ctx->pc = 0x2379acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379b0: 0x621ffcf
    ctx->pc = 0x2379B0u;
    {
        const bool branch_taken_0x2379b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2379B4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2379b0) {
            ctx->pc = 0x2378F0u;
            goto label_2378f0;
        }
    }
    ctx->pc = 0x2379B8u;
label_2379b8:
    // 0x2379b8: 0xdfbf0080
    ctx->pc = 0x2379b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2379bc:
    // 0x2379bc: 0xdfb60070
    ctx->pc = 0x2379bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2379c0: 0xdfb50060
    ctx->pc = 0x2379c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2379c4: 0xdfb40050
    ctx->pc = 0x2379c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2379c8: 0xdfb30040
    ctx->pc = 0x2379c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2379cc: 0xdfb20030
    ctx->pc = 0x2379ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2379d0: 0xdfb10020
    ctx->pc = 0x2379d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2379d4: 0xdfb00010
    ctx->pc = 0x2379d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2379d8: 0x3e00008
    ctx->pc = 0x2379D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2379DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2378BCu: goto label_2378bc;
            case 0x2378C0u: goto label_2378c0;
            case 0x2378F0u: goto label_2378f0;
            case 0x23798Cu: goto label_23798c;
            case 0x2379A4u: goto label_2379a4;
            case 0x2379B8u: goto label_2379b8;
            case 0x2379BCu: goto label_2379bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2379E0u;
}
