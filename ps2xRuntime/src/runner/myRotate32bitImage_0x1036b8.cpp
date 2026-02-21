#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: myRotate32bitImage
// Address: 0x1036b8 - 0x103b5c
void myRotate32bitImage_0x1036b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1036b8u;

    // 0x1036b8: 0x27bdff30
    ctx->pc = 0x1036b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1036bc: 0x8f8282b4
    ctx->pc = 0x1036bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1036c0: 0xffbe0090
    ctx->pc = 0x1036c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1036c4: 0x8fbe00d8
    ctx->pc = 0x1036c4u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1036c8: 0xffb70080
    ctx->pc = 0x1036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1036cc: 0xffb60070
    ctx->pc = 0x1036ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1036d0: 0x140b82d
    ctx->pc = 0x1036d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036d4: 0xffb50060
    ctx->pc = 0x1036d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1036d8: 0xa0b02d
    ctx->pc = 0x1036d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036dc: 0xffb40050
    ctx->pc = 0x1036dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1036e0: 0xc0a82d
    ctx->pc = 0x1036e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036e4: 0xffb30040
    ctx->pc = 0x1036e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1036e8: 0xe0a02d
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036ec: 0xffb20030
    ctx->pc = 0x1036ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1036f0: 0x120982d
    ctx->pc = 0x1036f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036f4: 0xffb00010
    ctx->pc = 0x1036f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1036f8: 0x1ef100
    ctx->pc = 0x1036f8u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 30), 4));
    // 0x1036fc: 0xe7b500b8
    ctx->pc = 0x1036fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x103700: 0x80802d
    ctx->pc = 0x103700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103704: 0xffbf00a0
    ctx->pc = 0x103704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x103708: 0x46006546
    ctx->pc = 0x103708u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x10370c: 0xffb10020
    ctx->pc = 0x10370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x103710: 0xe7b700c8
    ctx->pc = 0x103710u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x103714: 0xe7b600c0
    ctx->pc = 0x103714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x103718: 0xe7b400b0
    ctx->pc = 0x103718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x10371c: 0xafa80000
    ctx->pc = 0x10371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x103720: 0x12020005
    ctx->pc = 0x103720u;
    {
        const bool branch_taken_0x103720 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x103724u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x103720) {
            ctx->pc = 0x103738u;
            goto label_103738;
        }
    }
    ctx->pc = 0x103728u;
    // 0x103728: 0x24052b00
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x10372c: 0x2c0302d
    ctx->pc = 0x10372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103730: 0xc040c8c
    ctx->pc = 0x103730u;
    SET_GPR_U32(ctx, 31, 0x103738u);
    ctx->pc = 0x103734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103230u;
    {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103738u; }
    }
    if (ctx->pc != 0x103738u) { return; }
    ctx->pc = 0x103738u;
label_103738:
    // 0x103738: 0x8f8282b8
    ctx->pc = 0x103738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10373c: 0x70001ca9
    ctx->pc = 0x10373cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103740: 0xaf9082b4
    ctx->pc = 0x103740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x103744: 0x3c051000
    ctx->pc = 0x103744u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x103748: 0x5283c
    ctx->pc = 0x103748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10374c: 0x34a50005
    ctx->pc = 0x10374cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 5));
    // 0x103750: 0x7c430010
    ctx->pc = 0x103750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x103754: 0x3c071000
    ctx->pc = 0x103754u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x103758: 0x2406000e
    ctx->pc = 0x103758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x10375c: 0x2403003f
    ctx->pc = 0x10375cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x103760: 0xfc450020
    ctx->pc = 0x103760u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 5));
    // 0x103764: 0x2a0202d
    ctx->pc = 0x103764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103768: 0xac470010
    ctx->pc = 0x103768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x10376c: 0x24050002
    ctx->pc = 0x10376cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x103770: 0xfc430038
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x103774: 0x139843
    ctx->pc = 0x103774u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x103778: 0xfc460028
    ctx->pc = 0x103778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 6));
    // 0x10377c: 0x17b843
    ctx->pc = 0x10377cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 1));
    // 0x103780: 0xc040a92
    ctx->pc = 0x103780u;
    SET_GPR_U32(ctx, 31, 0x103788u);
    ctx->pc = 0x103784u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103788u; }
    }
    if (ctx->pc != 0x103788u) { return; }
    ctx->pc = 0x103788u;
    // 0x103788: 0x3d32023
    ctx->pc = 0x103788u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x10378c: 0x40802d
    ctx->pc = 0x10378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103790: 0xafa40004
    ctx->pc = 0x103790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x103794: 0x24050002
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x103798: 0x2c0202d
    ctx->pc = 0x103798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10379c: 0xc7b70004
    ctx->pc = 0x10379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1037a0: 0x4680bde0
    ctx->pc = 0x1037a0u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x1037a4: 0xc040a92
    ctx->pc = 0x1037A4u;
    SET_GPR_U32(ctx, 31, 0x1037ACu);
    ctx->pc = 0x1037A8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037ACu; }
    }
    if (ctx->pc != 0x1037ACu) { return; }
    ctx->pc = 0x1037ACu;
    // 0x1037ac: 0x2404ffff
    ctx->pc = 0x1037acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1037b0: 0x26c3003f
    ctx->pc = 0x1037b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 63));
    // 0x1037b4: 0x96202a
    ctx->pc = 0x1037b4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 22)));
    // 0x1037b8: 0x2c4180b
    ctx->pc = 0x1037b8u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 22));
    // 0x1037bc: 0x31983
    ctx->pc = 0x1037bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1037c0: 0x216b8
    ctx->pc = 0x1037c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1037c4: 0x1087b8
    ctx->pc = 0x1037c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x1037c8: 0x31bb8
    ctx->pc = 0x1037c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1037cc: 0x34048000
    ctx->pc = 0x1037ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1037d0: 0x423bc
    ctx->pc = 0x1037d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1037d4: 0x2028025
    ctx->pc = 0x1037d4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1037d8: 0x641825
    ctx->pc = 0x1037d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1037dc: 0x8f9182b8
    ctx->pc = 0x1037dcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1037e0: 0x701825
    ctx->pc = 0x1037e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1037e4: 0x24020004
    ctx->pc = 0x1037e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1037e8: 0x2103c
    ctx->pc = 0x1037e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1037ec: 0x34422b00
    ctx->pc = 0x1037ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11008));
    // 0x1037f0: 0x24040006
    ctx->pc = 0x1037f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1037f4: 0x621825
    ctx->pc = 0x1037f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1037f8: 0x24050154
    ctx->pc = 0x1037f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x1037fc: 0x24060044
    ctx->pc = 0x1037fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x103800: 0x24070042
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    // 0x103804: 0xfe230040
    ctx->pc = 0x103804u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x103808: 0x171023
    ctx->pc = 0x103808u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x10380c: 0xfe240048
    ctx->pc = 0x10380cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 4));
    // 0x103810: 0x4482b000
    ctx->pc = 0x103810u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 2);
    // 0x103814: 0x4680b5a0
    ctx->pc = 0x103814u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x103818: 0xfe250050
    ctx->pc = 0x103818u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 5));
    // 0x10381c: 0x24080001
    ctx->pc = 0x10381cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103820: 0xfe260060
    ctx->pc = 0x103820u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 6));
    // 0x103824: 0x3c098000
    ctx->pc = 0x103824u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32768 << 16));
    // 0x103828: 0x9483c
    ctx->pc = 0x103828u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x10382c: 0x35298001
    ctx->pc = 0x10382cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 32769));
    // 0x103830: 0xfe270068
    ctx->pc = 0x103830u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 7));
    // 0x103834: 0x3c0a4343
    ctx->pc = 0x103834u;
    SET_GPR_U32(ctx, 10, ((uint32_t)17219 << 16));
    // 0x103838: 0x354a4343
    ctx->pc = 0x103838u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 17219));
    // 0x10383c: 0xfe200058
    ctx->pc = 0x10383cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 0));
    // 0x103840: 0x4600ab06
    ctx->pc = 0x103840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103844: 0x16b100
    ctx->pc = 0x103844u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 22), 4));
    // 0x103848: 0x8e44000c
    ctx->pc = 0x103848u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10384c: 0x8e420010
    ctx->pc = 0x10384cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x103850: 0x8e430008
    ctx->pc = 0x103850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x103854: 0x42400
    ctx->pc = 0x103854u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x103858: 0x8e450004
    ctx->pc = 0x103858u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10385c: 0x21600
    ctx->pc = 0x10385cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x103860: 0x31a00
    ctx->pc = 0x103860u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x103864: 0xae200090
    ctx->pc = 0x103864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x103868: 0x451025
    ctx->pc = 0x103868u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10386c: 0x641825
    ctx->pc = 0x10386cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103870: 0x431025
    ctx->pc = 0x103870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103874: 0xae200094
    ctx->pc = 0x103874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x103878: 0x2103c
    ctx->pc = 0x103878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10387c: 0xfe280078
    ctx->pc = 0x10387cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 8));
    // 0x103880: 0x2103e
    ctx->pc = 0x103880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x103884: 0xfe290080
    ctx->pc = 0x103884u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 9));
    // 0x103888: 0xfe220070
    ctx->pc = 0x103888u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x10388c: 0xc047420
    ctx->pc = 0x10388Cu;
    SET_GPR_U32(ctx, 31, 0x103894u);
    ctx->pc = 0x103890u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 10));
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103894u; }
    }
    if (ctx->pc != 0x103894u) { return; }
    ctx->pc = 0x103894u;
    // 0x103894: 0x46170502
    ctx->pc = 0x103894u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103898: 0xc04745a
    ctx->pc = 0x103898u;
    SET_GPR_U32(ctx, 31, 0x1038A0u);
    ctx->pc = 0x10389Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038A0u; }
    }
    if (ctx->pc != 0x1038A0u) { return; }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x46160002
    ctx->pc = 0x1038a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1038a4: 0x8f9282b8
    ctx->pc = 0x1038a4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1038a8: 0x4600ab06
    ctx->pc = 0x1038a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1038ac: 0x265200a0
    ctx->pc = 0x1038acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 160));
    // 0x1038b0: 0x4600a501
    ctx->pc = 0x1038b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1038b4: 0x4600a024
    ctx->pc = 0x1038b4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x1038b8: 0x44020000
    ctx->pc = 0x1038b8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1038bc: 0x2821021
    ctx->pc = 0x1038bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1038c0: 0xc04745a
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1038C4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038C8u; }
    }
    if (ctx->pc != 0x1038C8u) { return; }
    ctx->pc = 0x1038C8u;
    // 0x1038c8: 0x46170502
    ctx->pc = 0x1038c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1038cc: 0xc047420
    ctx->pc = 0x1038CCu;
    SET_GPR_U32(ctx, 31, 0x1038D4u);
    ctx->pc = 0x1038D0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038D4u; }
    }
    if (ctx->pc != 0x1038D4u) { return; }
    ctx->pc = 0x1038D4u;
    // 0x1038d4: 0x4493b800
    ctx->pc = 0x1038d4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 19);
    // 0x1038d8: 0x4680bde0
    ctx->pc = 0x1038d8u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x1038dc: 0x46160002
    ctx->pc = 0x1038dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1038e0: 0x8f9082b8
    ctx->pc = 0x1038e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1038e4: 0x3c050010
    ctx->pc = 0x1038e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
    // 0x1038e8: 0x4600ab06
    ctx->pc = 0x1038e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1038ec: 0x260300a0
    ctx->pc = 0x1038ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 160));
    // 0x1038f0: 0x4600a500
    ctx->pc = 0x1038f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1038f4: 0x4600a024
    ctx->pc = 0x1038f4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x1038f8: 0x44020000
    ctx->pc = 0x1038f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1038fc: 0x8fa40000
    ctx->pc = 0x1038fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103900: 0x821021
    ctx->pc = 0x103900u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103904: 0xae420004
    ctx->pc = 0x103904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x103908: 0xac60000c
    ctx->pc = 0x103908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x10390c: 0xac650008
    ctx->pc = 0x10390cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x103910: 0xae1600b0
    ctx->pc = 0x103910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 22));
    // 0x103914: 0xc047420
    ctx->pc = 0x103914u;
    SET_GPR_U32(ctx, 31, 0x10391Cu);
    ctx->pc = 0x103918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10391Cu; }
    }
    if (ctx->pc != 0x10391Cu) { return; }
    ctx->pc = 0x10391Cu;
    // 0x10391c: 0x46170502
    ctx->pc = 0x10391cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103920: 0xc04745a
    ctx->pc = 0x103920u;
    SET_GPR_U32(ctx, 31, 0x103928u);
    ctx->pc = 0x103924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103928u; }
    }
    if (ctx->pc != 0x103928u) { return; }
    ctx->pc = 0x103928u;
    // 0x103928: 0x46160002
    ctx->pc = 0x103928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x10392c: 0x8f9182b8
    ctx->pc = 0x10392cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103930: 0x4600ab06
    ctx->pc = 0x103930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103934: 0x263100c0
    ctx->pc = 0x103934u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 192));
    // 0x103938: 0x4600a501
    ctx->pc = 0x103938u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x10393c: 0x4600a024
    ctx->pc = 0x10393cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x103940: 0x44020000
    ctx->pc = 0x103940u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x103944: 0x2821021
    ctx->pc = 0x103944u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x103948: 0xc04745a
    ctx->pc = 0x103948u;
    SET_GPR_U32(ctx, 31, 0x103950u);
    ctx->pc = 0x10394Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103950u; }
    }
    if (ctx->pc != 0x103950u) { return; }
    ctx->pc = 0x103950u;
    // 0x103950: 0x46170502
    ctx->pc = 0x103950u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103954: 0xc047420
    ctx->pc = 0x103954u;
    SET_GPR_U32(ctx, 31, 0x10395Cu);
    ctx->pc = 0x103958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10395Cu; }
    }
    if (ctx->pc != 0x10395Cu) { return; }
    ctx->pc = 0x10395Cu;
    // 0x10395c: 0x46160002
    ctx->pc = 0x10395cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103960: 0x8f9082b8
    ctx->pc = 0x103960u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103964: 0xc7b70004
    ctx->pc = 0x103964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x103968: 0x4680bde0
    ctx->pc = 0x103968u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x10396c: 0x152100
    ctx->pc = 0x10396cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 21), 4));
    // 0x103970: 0x260300c0
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 192));
    // 0x103974: 0x4600ab06
    ctx->pc = 0x103974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103978: 0x4600a500
    ctx->pc = 0x103978u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x10397c: 0x4497b000
    ctx->pc = 0x10397cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 23);
    // 0x103980: 0x4680b5a0
    ctx->pc = 0x103980u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x103984: 0x4600a024
    ctx->pc = 0x103984u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x103988: 0x44020000
    ctx->pc = 0x103988u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x10398c: 0x8fa50000
    ctx->pc = 0x10398cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103990: 0xa21021
    ctx->pc = 0x103990u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103994: 0xae220004
    ctx->pc = 0x103994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103998: 0x3c020010
    ctx->pc = 0x103998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x10399c: 0xac60000c
    ctx->pc = 0x10399cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1039a0: 0xac620008
    ctx->pc = 0x1039a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1039a4: 0xae0000d0
    ctx->pc = 0x1039a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1039a8: 0xc047420
    ctx->pc = 0x1039A8u;
    SET_GPR_U32(ctx, 31, 0x1039B0u);
    ctx->pc = 0x1039ACu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039B0u; }
    }
    if (ctx->pc != 0x1039B0u) { return; }
    ctx->pc = 0x1039B0u;
    // 0x1039b0: 0x46170502
    ctx->pc = 0x1039b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1039b4: 0xc04745a
    ctx->pc = 0x1039B4u;
    SET_GPR_U32(ctx, 31, 0x1039BCu);
    ctx->pc = 0x1039B8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039BCu; }
    }
    if (ctx->pc != 0x1039BCu) { return; }
    ctx->pc = 0x1039BCu;
    // 0x1039bc: 0x46160002
    ctx->pc = 0x1039bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1039c0: 0x8f9182b8
    ctx->pc = 0x1039c0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1039c4: 0x4600ab06
    ctx->pc = 0x1039c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1039c8: 0x263100e0
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 224));
    // 0x1039cc: 0x4600a501
    ctx->pc = 0x1039ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1039d0: 0x4600a024
    ctx->pc = 0x1039d0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x1039d4: 0x44020000
    ctx->pc = 0x1039d4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1039d8: 0x2821021
    ctx->pc = 0x1039d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1039dc: 0xc04745a
    ctx->pc = 0x1039DCu;
    SET_GPR_U32(ctx, 31, 0x1039E4u);
    ctx->pc = 0x1039E0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039E4u; }
    }
    if (ctx->pc != 0x1039E4u) { return; }
    ctx->pc = 0x1039E4u;
    // 0x1039e4: 0x46170502
    ctx->pc = 0x1039e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1039e8: 0xc047420
    ctx->pc = 0x1039E8u;
    SET_GPR_U32(ctx, 31, 0x1039F0u);
    ctx->pc = 0x1039ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039F0u; }
    }
    if (ctx->pc != 0x1039F0u) { return; }
    ctx->pc = 0x1039F0u;
    // 0x1039f0: 0x4493b800
    ctx->pc = 0x1039f0u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 19);
    // 0x1039f4: 0x4680bde0
    ctx->pc = 0x1039f4u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x1039f8: 0x46160002
    ctx->pc = 0x1039f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1039fc: 0x8f9082b8
    ctx->pc = 0x1039fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a00: 0x152103
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 21), 4));
    // 0x103a04: 0x4600ab06
    ctx->pc = 0x103a04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103a08: 0x260300e0
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 224));
    // 0x103a0c: 0x4600a500
    ctx->pc = 0x103a0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x103a10: 0x4600a024
    ctx->pc = 0x103a10u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x103a14: 0x44020000
    ctx->pc = 0x103a14u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x103a18: 0x8fa50000
    ctx->pc = 0x103a18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103a1c: 0xa21021
    ctx->pc = 0x103a1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103a20: 0xae220004
    ctx->pc = 0x103a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103a24: 0x3c020010
    ctx->pc = 0x103a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x103a28: 0xac60000c
    ctx->pc = 0x103a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x103a2c: 0xac620008
    ctx->pc = 0x103a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x103a30: 0xae1600f0
    ctx->pc = 0x103a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 22));
    // 0x103a34: 0xc047420
    ctx->pc = 0x103A34u;
    SET_GPR_U32(ctx, 31, 0x103A3Cu);
    ctx->pc = 0x103A38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A3Cu; }
    }
    if (ctx->pc != 0x103A3Cu) { return; }
    ctx->pc = 0x103A3Cu;
    // 0x103a3c: 0x46170502
    ctx->pc = 0x103a3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103a40: 0xc04745a
    ctx->pc = 0x103A40u;
    SET_GPR_U32(ctx, 31, 0x103A48u);
    ctx->pc = 0x103A44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A48u; }
    }
    if (ctx->pc != 0x103A48u) { return; }
    ctx->pc = 0x103A48u;
    // 0x103a48: 0x46160002
    ctx->pc = 0x103a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103a4c: 0x8f9182b8
    ctx->pc = 0x103a4cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a50: 0x4600ab06
    ctx->pc = 0x103a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103a54: 0x26310100
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
    // 0x103a58: 0x4600a501
    ctx->pc = 0x103a58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x103a5c: 0x4600a024
    ctx->pc = 0x103a5cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x103a60: 0x44020000
    ctx->pc = 0x103a60u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x103a64: 0x2821021
    ctx->pc = 0x103a64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x103a68: 0xc04745a
    ctx->pc = 0x103A68u;
    SET_GPR_U32(ctx, 31, 0x103A70u);
    ctx->pc = 0x103A6Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x11D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A70u; }
    }
    if (ctx->pc != 0x103A70u) { return; }
    ctx->pc = 0x103A70u;
    // 0x103a70: 0x46170502
    ctx->pc = 0x103a70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103a74: 0xc047420
    ctx->pc = 0x103A74u;
    SET_GPR_U32(ctx, 31, 0x103A7Cu);
    ctx->pc = 0x103A78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A7Cu; }
    }
    if (ctx->pc != 0x103A7Cu) { return; }
    ctx->pc = 0x103A7Cu;
    // 0x103a7c: 0x46160002
    ctx->pc = 0x103a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103a80: 0x8f8882b8
    ctx->pc = 0x103a80u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a84: 0x3c067000
    ctx->pc = 0x103a84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)28672 << 16));
    // 0x103a88: 0x202d
    ctx->pc = 0x103a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a8c: 0x25050100
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 256));
    // 0x103a90: 0x4600a500
    ctx->pc = 0x103a90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x103a94: 0x4600a024
    ctx->pc = 0x103a94u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x103a98: 0x44020000
    ctx->pc = 0x103a98u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x103a9c: 0x8fa30000
    ctx->pc = 0x103a9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa0: 0x621021
    ctx->pc = 0x103aa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103aa4: 0xae220004
    ctx->pc = 0x103aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103aa8: 0x3c020010
    ctx->pc = 0x103aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x103aac: 0xaca0000c
    ctx->pc = 0x103aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103ab0: 0xaca20008
    ctx->pc = 0x103ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x103ab4: 0x700014a9
    ctx->pc = 0x103ab4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103ab8: 0x7d020110
    ctx->pc = 0x103ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 272), GPR_VEC(ctx, 2));
    // 0x103abc: 0x8d020000
    ctx->pc = 0x103abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x103ac0: 0xad060110
    ctx->pc = 0x103ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 272), GPR_U32(ctx, 6));
    // 0x103ac4: 0x34420010
    ctx->pc = 0x103ac4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
    // 0x103ac8: 0xc043948
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AD0u; }
    }
    if (ctx->pc != 0x103AD0u) { return; }
    ctx->pc = 0x103AD0u;
    // 0x103ad0: 0x202d
    ctx->pc = 0x103ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ad4: 0xc043322
    ctx->pc = 0x103AD4u;
    SET_GPR_U32(ctx, 31, 0x103ADCu);
    ctx->pc = 0x103AD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103ADCu; }
    }
    if (ctx->pc != 0x103ADCu) { return; }
    ctx->pc = 0x103ADCu;
    // 0x103adc: 0x8f848490
    ctx->pc = 0x103adcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103ae0: 0x282d
    ctx->pc = 0x103ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ae4: 0xc04372a
    ctx->pc = 0x103AE4u;
    SET_GPR_U32(ctx, 31, 0x103AECu);
    ctx->pc = 0x103AE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AECu; }
    }
    if (ctx->pc != 0x103AECu) { return; }
    ctx->pc = 0x103AECu;
    // 0x103aec: 0x8f8382b8
    ctx->pc = 0x103aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103af0: 0x3c050fff
    ctx->pc = 0x103af0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x103af4: 0x34a5ffff
    ctx->pc = 0x103af4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x103af8: 0x8f848490
    ctx->pc = 0x103af8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103afc: 0xc0435d6
    ctx->pc = 0x103AFCu;
    SET_GPR_U32(ctx, 31, 0x103B04u);
    ctx->pc = 0x103B00u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B04u; }
    }
    if (ctx->pc != 0x103B04u) { return; }
    ctx->pc = 0x103B04u;
    // 0x103b04: 0x202d
    ctx->pc = 0x103b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b08: 0xc043322
    ctx->pc = 0x103B08u;
    SET_GPR_U32(ctx, 31, 0x103B10u);
    ctx->pc = 0x103B0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B10u; }
    }
    if (ctx->pc != 0x103B10u) { return; }
    ctx->pc = 0x103B10u;
    // 0x103b10: 0x8f848490
    ctx->pc = 0x103b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103b14: 0x282d
    ctx->pc = 0x103b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b18: 0xdfbf00a0
    ctx->pc = 0x103b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103b1c: 0x302d
    ctx->pc = 0x103b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b20: 0xdfbe0090
    ctx->pc = 0x103b20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103b24: 0xdfb70080
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103b28: 0xdfb60070
    ctx->pc = 0x103b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103b2c: 0xdfb50060
    ctx->pc = 0x103b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103b30: 0xdfb40050
    ctx->pc = 0x103b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103b34: 0xdfb30040
    ctx->pc = 0x103b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103b38: 0xdfb20030
    ctx->pc = 0x103b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103b3c: 0xdfb10020
    ctx->pc = 0x103b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103b40: 0xdfb00010
    ctx->pc = 0x103b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b44: 0xc7b700c8
    ctx->pc = 0x103b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x103b48: 0xc7b600c0
    ctx->pc = 0x103b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103b4c: 0xc7b500b8
    ctx->pc = 0x103b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103b50: 0xc7b400b0
    ctx->pc = 0x103b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103b54: 0x804372a
    ctx->pc = 0x103B54u;
    ctx->pc = 0x103B58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x103B5Cu;
}
