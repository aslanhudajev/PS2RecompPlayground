#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInvertMatrix
// Address: 0x1a4710 - 0x1a4990
void nlInvertMatrix_0x1a4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInvertMatrix");


    ctx->pc = 0x1a4710u;

    // 0x1a4710: 0x27bdff30
    ctx->pc = 0x1a4710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a4714: 0x7fbf0030
    ctx->pc = 0x1a4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a4718: 0x7fb10020
    ctx->pc = 0x1a4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a471c: 0x7fb00010
    ctx->pc = 0x1a471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4720: 0x70808e28
    ctx->pc = 0x1a4720u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4724: 0xe7b40000
    ctx->pc = 0x1a4724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a4728: 0x16200004
    ctx->pc = 0x1A4728u;
    {
        const bool branch_taken_0x1a4728 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A472Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4728) {
            ctx->pc = 0x1A473Cu;
            goto label_1a473c;
        }
    }
    ctx->pc = 0x1A4730u;
    // 0x1a4730: 0xc06bf55
    ctx->pc = 0x1A4730u;
    SET_GPR_U32(ctx, 31, 0x1A4738u);
    ctx->pc = 0x1A4734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4738u; }
        else if (ctx->pc != 0x1A4738u) { ctx->pc = 0x1A4738u; }
    }
    if (ctx->pc != 0x1A4738u) { return; }
    ctx->pc = 0x1A4738u;
    // 0x1a4738: 0x70408e28
    ctx->pc = 0x1a4738u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a473c:
    // 0x1a473c: 0x72202628
    ctx->pc = 0x1a473cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a4740: 0xc069264
    ctx->pc = 0x1A4740u;
    SET_GPR_U32(ctx, 31, 0x1A4748u);
    ctx->pc = 0x1A4744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 204));
    ctx->pc = 0x1A4990u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLUDecomp_0x1a4990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4748u; }
        else if (ctx->pc != 0x1A4748u) { ctx->pc = 0x1A4748u; }
    }
    if (ctx->pc != 0x1A4748u) { return; }
    ctx->pc = 0x1A4748u;
    // 0x1a4748: 0x46000506
    ctx->pc = 0x1a4748u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a474c: 0x44800000
    ctx->pc = 0x1a474cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a4750: 0x0
    ctx->pc = 0x1a4750u;
    // NOP
    // 0x1a4754: 0x46140032
    ctx->pc = 0x1a4754u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4758: 0x0
    ctx->pc = 0x1a4758u;
    // NOP
    // 0x1a475c: 0x45010086
    ctx->pc = 0x1A475Cu;
    {
        const bool branch_taken_0x1a475c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4760u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1a475c) {
            ctx->pc = 0x1A4978u;
            goto label_1a4978;
        }
    }
    ctx->pc = 0x1A4764u;
    // 0x1a4764: 0x70001628
    ctx->pc = 0x1a4764u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a4768: 0x27a30040
    ctx->pc = 0x1a4768u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 64));
label_1a476c:
    // 0x1a476c: 0x70003628
    ctx->pc = 0x1a476cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a4770: 0x27ab00cc
    ctx->pc = 0x1a4770u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 204));
    // 0x1a4774: 0x70606628
    ctx->pc = 0x1a4774u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1a4778:
    // 0x1a4778: 0x81650000
    ctx->pc = 0x1a4778u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a477c: 0x6082a
    ctx->pc = 0x1a477cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 6)));
    // 0x1a4780: 0x70003e28
    ctx->pc = 0x1a4780u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a4784: 0xa22026
    ctx->pc = 0x1a4784u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a4788: 0x2c840001
    ctx->pc = 0x1a4788u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
    // 0x1a478c: 0x44840000
    ctx->pc = 0x1a478cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a4790: 0x10200041
    ctx->pc = 0x1A4790u;
    {
        const bool branch_taken_0x1a4790 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4794u;
        ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1a4790) {
            ctx->pc = 0x1A4898u;
            goto label_1a4898;
        }
    }
    ctx->pc = 0x1A4798u;
    // 0x1a4798: 0x28c10009
    ctx->pc = 0x1a4798u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 9));
    // 0x1a479c: 0x1420002a
    ctx->pc = 0x1A479Cu;
    {
        const bool branch_taken_0x1a479c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A47A0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 4294967288));
        if (branch_taken_0x1a479c) {
            ctx->pc = 0x1A4848u;
            goto label_1a4848;
        }
    }
    ctx->pc = 0x1A47A4u;
    // 0x1a47a4: 0x52100
    ctx->pc = 0x1a47a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a47a8: 0x70604e28
    ctx->pc = 0x1a47a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a47ac: 0x2245021
    ctx->pc = 0x1a47acu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1a47b0:
    // 0x1a47b0: 0xc5440000
    ctx->pc = 0x1a47b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a47b4: 0xc5230000
    ctx->pc = 0x1a47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a47b8: 0x24e70008
    ctx->pc = 0x1a47b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1a47bc: 0xc5420004
    ctx->pc = 0x1a47bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a47c0: 0xc5210010
    ctx->pc = 0x1a47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a47c4: 0xc54a0008
    ctx->pc = 0x1a47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a47c8: 0xc5200020
    ctx->pc = 0x1a47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a47cc: 0x46032302
    ctx->pc = 0x1a47ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a47d0: 0xc549000c
    ctx->pc = 0x1a47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a47d4: 0xc5280030
    ctx->pc = 0x1a47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a47d8: 0xc5470010
    ctx->pc = 0x1a47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a47dc: 0xc5260040
    ctx->pc = 0x1a47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a47e0: 0x460112c2
    ctx->pc = 0x1a47e0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a47e4: 0xc5450014
    ctx->pc = 0x1a47e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a47e8: 0xc5240050
    ctx->pc = 0x1a47e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a47ec: 0xc5430018
    ctx->pc = 0x1a47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a47f0: 0xe8202a
    ctx->pc = 0x1a47f0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x1a47f4: 0x460c6b41
    ctx->pc = 0x1a47f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1a47f8: 0xc5220060
    ctx->pc = 0x1a47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a47fc: 0xc541001c
    ctx->pc = 0x1a47fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4800: 0x46005282
    ctx->pc = 0x1a4800u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x1a4804: 0x254a0020
    ctx->pc = 0x1a4804u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32));
    // 0x1a4808: 0x460b6b41
    ctx->pc = 0x1a4808u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[11]);
    // 0x1a480c: 0xc5200070
    ctx->pc = 0x1a480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4810: 0x46084a02
    ctx->pc = 0x1a4810u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a4814: 0x25290080
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 128));
    // 0x1a4818: 0x460a6b41
    ctx->pc = 0x1a4818u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x1a481c: 0x46063982
    ctx->pc = 0x1a481cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x1a4820: 0x46086b41
    ctx->pc = 0x1a4820u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[8]);
    // 0x1a4824: 0x46042902
    ctx->pc = 0x1a4824u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1a4828: 0x46066b41
    ctx->pc = 0x1a4828u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x1a482c: 0x46021882
    ctx->pc = 0x1a482cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a4830: 0x46046b41
    ctx->pc = 0x1a4830u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x1a4834: 0x46000802
    ctx->pc = 0x1a4834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4838: 0x46026b41
    ctx->pc = 0x1a4838u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x1a483c: 0x1480ffdc
    ctx->pc = 0x1A483Cu;
    {
        const bool branch_taken_0x1a483c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4840u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x1a483c) {
            ctx->pc = 0x1A47B0u;
            goto label_1a47b0;
        }
    }
    ctx->pc = 0x1A4844u;
    // 0x1a4844: 0x0
    ctx->pc = 0x1a4844u;
    // NOP
label_1a4848:
    // 0x1a4848: 0xe6082a
    ctx->pc = 0x1a4848u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1a484c: 0x50200013
    ctx->pc = 0x1A484Cu;
    {
        const bool branch_taken_0x1a484c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a484c) {
            ctx->pc = 0x1A4850u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1A489Cu;
            goto label_1a489c;
        }
    }
    ctx->pc = 0x1A4854u;
    // 0x1a4854: 0x52100
    ctx->pc = 0x1a4854u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a4858: 0x2242821
    ctx->pc = 0x1a4858u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a485c: 0x72100
    ctx->pc = 0x1a485cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a4860: 0x644021
    ctx->pc = 0x1a4860u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4864: 0x72080
    ctx->pc = 0x1a4864u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a4868: 0xa42821
    ctx->pc = 0x1a4868u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a486c: 0x0
    ctx->pc = 0x1a486cu;
    // NOP
label_1a4870:
    // 0x1a4870: 0xc4a10000
    ctx->pc = 0x1a4870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4874: 0xc5000000
    ctx->pc = 0x1a4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4878: 0x24e70001
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a487c: 0xe6202a
    ctx->pc = 0x1a487cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1a4880: 0x24a50004
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a4884: 0x46000802
    ctx->pc = 0x1a4884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4888: 0x25080010
    ctx->pc = 0x1a4888u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x1a488c: 0x1480fff8
    ctx->pc = 0x1A488Cu;
    {
        const bool branch_taken_0x1a488c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4890u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x1a488c) {
            ctx->pc = 0x1A4870u;
            goto label_1a4870;
        }
    }
    ctx->pc = 0x1A4894u;
    // 0x1a4894: 0x0
    ctx->pc = 0x1a4894u;
    // NOP
label_1a4898:
    // 0x1a4898: 0x24c60001
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1a489c:
    // 0x1a489c: 0xe58d0000
    ctx->pc = 0x1a489cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1a48a0: 0x28c40004
    ctx->pc = 0x1a48a0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), 4));
    // 0x1a48a4: 0x256b0001
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1a48a8: 0x1480ffb3
    ctx->pc = 0x1A48A8u;
    {
        const bool branch_taken_0x1a48a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A48ACu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 16));
        if (branch_taken_0x1a48a8) {
            ctx->pc = 0x1A4778u;
            goto label_1a4778;
        }
    }
    ctx->pc = 0x1A48B0u;
    // 0x1a48b0: 0x240a0003
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a48b4: 0x24670030
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a48b8: 0x27a800cf
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 207));
    // 0x1a48bc: 0x2409000c
    ctx->pc = 0x1a48bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
label_1a48c0:
    // 0x1a48c0: 0x810b0000
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a48c4: 0x254c0001
    ctx->pc = 0x1a48c4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a48c8: 0x29810004
    ctx->pc = 0x1a48c8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 12), 4));
    // 0x1a48cc: 0x10200012
    ctx->pc = 0x1A48CCu;
    {
        const bool branch_taken_0x1a48cc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A48D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x1a48cc) {
            ctx->pc = 0x1A4918u;
            goto label_1a4918;
        }
    }
    ctx->pc = 0x1A48D4u;
    // 0x1a48d4: 0xc2100
    ctx->pc = 0x1a48d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 4));
    // 0x1a48d8: 0x643021
    ctx->pc = 0x1a48d8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a48dc: 0xb2100
    ctx->pc = 0x1a48dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 4));
    // 0x1a48e0: 0x2242821
    ctx->pc = 0x1a48e0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a48e4: 0xc2080
    ctx->pc = 0x1a48e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 2));
    // 0x1a48e8: 0xa42821
    ctx->pc = 0x1a48e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a48ec: 0x0
    ctx->pc = 0x1a48ecu;
    // NOP
label_1a48f0:
    // 0x1a48f0: 0xc4a10000
    ctx->pc = 0x1a48f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a48f4: 0xc4c00000
    ctx->pc = 0x1a48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a48f8: 0x258c0001
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a48fc: 0x29840004
    ctx->pc = 0x1a48fcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 12), 4));
    // 0x1a4900: 0x24a50004
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a4904: 0x46000802
    ctx->pc = 0x1a4904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4908: 0x24c60010
    ctx->pc = 0x1a4908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1a490c: 0x1480fff8
    ctx->pc = 0x1A490Cu;
    {
        const bool branch_taken_0x1a490c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4910u;
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1a490c) {
            ctx->pc = 0x1A48F0u;
            goto label_1a48f0;
        }
    }
    ctx->pc = 0x1A4914u;
    // 0x1a4914: 0x0
    ctx->pc = 0x1a4914u;
    // NOP
label_1a4918:
    // 0x1a4918: 0xb2100
    ctx->pc = 0x1a4918u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 4));
    // 0x1a491c: 0x2242021
    ctx->pc = 0x1a491cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a4920: 0x892021
    ctx->pc = 0x1a4920u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a4924: 0xc4800000
    ctx->pc = 0x1a4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4928: 0x2508ffff
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a492c: 0x2529fffc
    ctx->pc = 0x1a492cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1a4930: 0x254affff
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1a4934: 0x46001003
    ctx->pc = 0x1a4934u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x1a4938: 0x0
    ctx->pc = 0x1a4938u;
    // NOP
    // 0x1a493c: 0xe4e00000
    ctx->pc = 0x1a493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a4940: 0x541ffdf
    ctx->pc = 0x1A4940u;
    {
        const bool branch_taken_0x1a4940 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1A4944u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967280));
        if (branch_taken_0x1a4940) {
            ctx->pc = 0x1A48C0u;
            goto label_1a48c0;
        }
    }
    ctx->pc = 0x1A4948u;
    // 0x1a4948: 0x24420001
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a494c: 0x28440004
    ctx->pc = 0x1a494cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1a4950: 0x1480ff86
    ctx->pc = 0x1A4950u;
    {
        const bool branch_taken_0x1a4950 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4954u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1a4950) {
            ctx->pc = 0x1A476Cu;
            goto label_1a476c;
        }
    }
    ctx->pc = 0x1A4958u;
    // 0x1a4958: 0x72202628
    ctx->pc = 0x1a4958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a495c: 0xc069108
    ctx->pc = 0x1A495Cu;
    SET_GPR_U32(ctx, 31, 0x1A4964u);
    ctx->pc = 0x1A4960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1A4420u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCopyMatrix_0x1a4420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4964u; }
        else if (ctx->pc != 0x1A4964u) { ctx->pc = 0x1A4964u; }
    }
    if (ctx->pc != 0x1A4964u) { return; }
    ctx->pc = 0x1A4964u;
    // 0x1a4964: 0x16000003
    ctx->pc = 0x1A4964u;
    {
        const bool branch_taken_0x1a4964 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4968u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4964) {
            ctx->pc = 0x1A4974u;
            goto label_1a4974;
        }
    }
    ctx->pc = 0x1A496Cu;
    // 0x1a496c: 0xc06c038
    ctx->pc = 0x1A496Cu;
    SET_GPR_U32(ctx, 31, 0x1A4974u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4974u; }
        else if (ctx->pc != 0x1A4974u) { ctx->pc = 0x1A4974u; }
    }
    if (ctx->pc != 0x1A4974u) { return; }
    ctx->pc = 0x1A4974u;
label_1a4974:
    // 0x1a4974: 0x4600a006
    ctx->pc = 0x1a4974u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a4978:
    // 0x1a4978: 0x7bbf0030
    ctx->pc = 0x1a4978u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a497c: 0x7bb10020
    ctx->pc = 0x1a497cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4980: 0x7bb00010
    ctx->pc = 0x1a4980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4984: 0xc7b40000
    ctx->pc = 0x1a4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4988: 0x3e00008
    ctx->pc = 0x1A4988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A498Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A473Cu: goto label_1a473c;
            case 0x1A476Cu: goto label_1a476c;
            case 0x1A4778u: goto label_1a4778;
            case 0x1A47B0u: goto label_1a47b0;
            case 0x1A4848u: goto label_1a4848;
            case 0x1A4870u: goto label_1a4870;
            case 0x1A4898u: goto label_1a4898;
            case 0x1A489Cu: goto label_1a489c;
            case 0x1A48C0u: goto label_1a48c0;
            case 0x1A48F0u: goto label_1a48f0;
            case 0x1A4918u: goto label_1a4918;
            case 0x1A4974u: goto label_1a4974;
            case 0x1A4978u: goto label_1a4978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4990u;
}
