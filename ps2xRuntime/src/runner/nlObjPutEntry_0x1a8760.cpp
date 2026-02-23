#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutEntry
// Address: 0x1a8760 - 0x1a89cc
void nlObjPutEntry_0x1a8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutEntry");


    ctx->pc = 0x1a8760u;

    // 0x1a8760: 0x27bdff80
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a8764: 0x7fbf0060
    ctx->pc = 0x1a8764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a8768: 0x7fb40050
    ctx->pc = 0x1a8768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a876c: 0x7fb30040
    ctx->pc = 0x1a876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a8770: 0x7fb20030
    ctx->pc = 0x1a8770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a8774: 0x7fb10020
    ctx->pc = 0x1a8774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a8778: 0x7fb00010
    ctx->pc = 0x1a8778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a877c: 0xe7b40000
    ctx->pc = 0x1a877cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8780: 0x7080a628
    ctx->pc = 0x1a8780u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a8784: 0x8c840000
    ctx->pc = 0x1a8784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8788: 0x24031000
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a878c: 0x70a09e28
    ctx->pc = 0x1a878cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a8790: 0x14830085
    ctx->pc = 0x1A8790u;
    {
        const bool branch_taken_0x1a8790 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A8794u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1a8790) {
            ctx->pc = 0x1A89A8u;
            goto label_1a89a8;
        }
    }
    ctx->pc = 0x1A8798u;
    // 0x1a8798: 0x8f828a44
    ctx->pc = 0x1a8798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
    // 0x1a879c: 0x8f858a28
    ctx->pc = 0x1a879cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x1a87a0: 0x1445000e
    ctx->pc = 0x1A87A0u;
    {
        const bool branch_taken_0x1a87a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1a87a0) {
            ctx->pc = 0x1A87DCu;
            goto label_1a87dc;
        }
    }
    ctx->pc = 0x1A87A8u;
    // 0x1a87a8: 0x8f828a30
    ctx->pc = 0x1a87a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1a87ac: 0x14400007
    ctx->pc = 0x1A87ACu;
    {
        const bool branch_taken_0x1a87ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A87B0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a87ac) {
            ctx->pc = 0x1A87CCu;
            goto label_1a87cc;
        }
    }
    ctx->pc = 0x1A87B4u;
    // 0x1a87b4: 0x3c020026
    ctx->pc = 0x1a87b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a87b8: 0xc05114a
    ctx->pc = 0x1A87B8u;
    SET_GPR_U32(ctx, 31, 0x1A87C0u);
    ctx->pc = 0x1A87BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964320));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87C0u; }
        else if (ctx->pc != 0x1A87C0u) { ctx->pc = 0x1A87C0u; }
    }
    if (ctx->pc != 0x1A87C0u) { return; }
    ctx->pc = 0x1A87C0u;
label_1a87c0:
    // 0x1a87c0: 0x1000ffff
    ctx->pc = 0x1A87C0u;
    {
        const bool branch_taken_0x1a87c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a87c0) {
            ctx->pc = 0x1A87C0u;
            goto label_1a87c0;
        }
    }
    ctx->pc = 0x1A87C8u;
    // 0x1a87c8: 0x72802628
    ctx->pc = 0x1a87c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1a87cc:
    // 0x1a87cc: 0xc06a0d4
    ctx->pc = 0x1A87CCu;
    SET_GPR_U32(ctx, 31, 0x1A87D4u);
    ctx->pc = 0x1A8350u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPut_i_0x1a8350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87D4u; }
        else if (ctx->pc != 0x1A87D4u) { ctx->pc = 0x1A87D4u; }
    }
    if (ctx->pc != 0x1A87D4u) { return; }
    ctx->pc = 0x1A87D4u;
    // 0x1a87d4: 0x10000075
    ctx->pc = 0x1A87D4u;
    {
        const bool branch_taken_0x1a87d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A87D8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1a87d4) {
            ctx->pc = 0x1A89ACu;
            goto label_1a89ac;
        }
    }
    ctx->pc = 0x1A87DCu;
label_1a87dc:
    // 0x1a87dc: 0x8f838a2c
    ctx->pc = 0x1a87dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x1a87e0: 0x22200
    ctx->pc = 0x1a87e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a87e4: 0x24420001
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a87e8: 0xaf828a44
    ctx->pc = 0x1a87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 2));
    // 0x1a87ec: 0x3c020030
    ctx->pc = 0x1a87ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a87f0: 0x24523940
    ctx->pc = 0x1a87f0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1a87f4: 0x648021
    ctx->pc = 0x1a87f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a87f8: 0xae000004
    ctx->pc = 0x1a87f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a87fc: 0x3c020030
    ctx->pc = 0x1a87fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a8800: 0xa60600f4
    ctx->pc = 0x1a8800u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a8804: 0x26110010
    ctx->pc = 0x1a8804u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a8808: 0x24453960
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14688));
    // 0x1a880c: 0x26240020
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a8810: 0xc06ac36
    ctx->pc = 0x1A8810u;
    SET_GPR_U32(ctx, 31, 0x1A8818u);
    ctx->pc = 0x1A8814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8818u; }
        else if (ctx->pc != 0x1A8818u) { ctx->pc = 0x1A8818u; }
    }
    if (ctx->pc != 0x1A8818u) { return; }
    ctx->pc = 0x1A8818u;
    // 0x1a8818: 0x87828a1c
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x1a881c: 0x26240090
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
    // 0x1a8820: 0xc06bf55
    ctx->pc = 0x1A8820u;
    SET_GPR_U32(ctx, 31, 0x1A8828u);
    ctx->pc = 0x1A8824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 216), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8828u; }
        else if (ctx->pc != 0x1A8828u) { ctx->pc = 0x1A8828u; }
    }
    if (ctx->pc != 0x1A8828u) { return; }
    ctx->pc = 0x1A8828u;
    // 0x1a8828: 0x12600015
    ctx->pc = 0x1A8828u;
    {
        const bool branch_taken_0x1a8828 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A882Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 20));
        if (branch_taken_0x1a8828) {
            ctx->pc = 0x1A8880u;
            goto label_1a8880;
        }
    }
    ctx->pc = 0x1A8830u;
    // 0x1a8830: 0x24020001
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8834: 0xa62200d4
    ctx->pc = 0x1a8834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8838: 0x3c024300
    ctx->pc = 0x1a8838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x1a883c: 0x44820000
    ctx->pc = 0x1a883cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a8840: 0x0
    ctx->pc = 0x1a8840u;
    // NOP
    // 0x1a8844: 0x46140002
    ctx->pc = 0x1a8844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a8848: 0x46000024
    ctx->pc = 0x1a8848u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a884c: 0x44020000
    ctx->pc = 0x1a884cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a8850: 0x0
    ctx->pc = 0x1a8850u;
    // NOP
    // 0x1a8854: 0xa62200d6
    ctx->pc = 0x1a8854u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8858: 0x862200d6
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 214)));
    // 0x1a885c: 0x4410003
    ctx->pc = 0x1A885Cu;
    {
        const bool branch_taken_0x1a885c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8860u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 129));
        if (branch_taken_0x1a885c) {
            ctx->pc = 0x1A886Cu;
            goto label_1a886c;
        }
    }
    ctx->pc = 0x1A8864u;
    // 0x1a8864: 0x10000004
    ctx->pc = 0x1A8864u;
    {
        const bool branch_taken_0x1a8864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8868u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1a8864) {
            ctx->pc = 0x1A8878u;
            goto label_1a8878;
        }
    }
    ctx->pc = 0x1A886Cu;
label_1a886c:
    // 0x1a886c: 0x14200002
    ctx->pc = 0x1A886Cu;
    {
        const bool branch_taken_0x1a886c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1a886c) {
            ctx->pc = 0x1A8878u;
            goto label_1a8878;
        }
    }
    ctx->pc = 0x1A8874u;
    // 0x1a8874: 0xa62200d6
    ctx->pc = 0x1a8874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 214), (uint16_t)GPR_U32(ctx, 2));
label_1a8878:
    // 0x1a8878: 0x10000002
    ctx->pc = 0x1A8878u;
    {
        const bool branch_taken_0x1a8878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A887Cu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        if (branch_taken_0x1a8878) {
            ctx->pc = 0x1A8884u;
            goto label_1a8884;
        }
    }
    ctx->pc = 0x1A8880u;
label_1a8880:
    // 0x1a8880: 0xa62000d4
    ctx->pc = 0x1a8880u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 0));
label_1a8884:
    // 0x1a8884: 0x2684000c
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 12));
    // 0x1a8888: 0x27a50070
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a888c: 0xc06bf00
    ctx->pc = 0x1A888Cu;
    SET_GPR_U32(ctx, 31, 0x1A8894u);
    ctx->pc = 0x1A8890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8894u; }
        else if (ctx->pc != 0x1A8894u) { ctx->pc = 0x1A8894u; }
    }
    if (ctx->pc != 0x1A8894u) { return; }
    ctx->pc = 0x1A8894u;
    // 0x1a8894: 0x3c010030
    ctx->pc = 0x1a8894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a8898: 0xc7a30078
    ctx->pc = 0x1a8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a889c: 0xc4223d00
    ctx->pc = 0x1a889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a88a0: 0x46021836
    ctx->pc = 0x1a88a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a88a4: 0x0
    ctx->pc = 0x1a88a4u;
    // NOP
    // 0x1a88a8: 0x45010009
    ctx->pc = 0x1A88A8u;
    {
        const bool branch_taken_0x1a88a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a88a8) {
            ctx->pc = 0x1A88D0u;
            goto label_1a88d0;
        }
    }
    ctx->pc = 0x1A88B0u;
    // 0x1a88b0: 0xc7808a14
    ctx->pc = 0x1a88b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a88b4: 0xc7818a18
    ctx->pc = 0x1a88b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a88b8: 0x46020003
    ctx->pc = 0x1a88b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1a88bc: 0x46000847
    ctx->pc = 0x1a88bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1a88c0: 0x0
    ctx->pc = 0x1a88c0u;
    // NOP
    // 0x1a88c4: 0x0
    ctx->pc = 0x1a88c4u;
    // NOP
    // 0x1a88c8: 0x10000006
    ctx->pc = 0x1A88C8u;
    {
        const bool branch_taken_0x1a88c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A88CCu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1a88c8) {
            ctx->pc = 0x1A88E4u;
            goto label_1a88e4;
        }
    }
    ctx->pc = 0x1A88D0u;
label_1a88d0:
    // 0x1a88d0: 0xc7808a14
    ctx->pc = 0x1a88d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a88d4: 0xc7818a18
    ctx->pc = 0x1a88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a88d8: 0x46030003
    ctx->pc = 0x1a88d8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1a88dc: 0x46000847
    ctx->pc = 0x1a88dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1a88e0: 0x46000841
    ctx->pc = 0x1a88e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a88e4:
    // 0x1a88e4: 0x44800000
    ctx->pc = 0x1a88e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a88e8: 0x0
    ctx->pc = 0x1a88e8u;
    // NOP
    // 0x1a88ec: 0x46000834
    ctx->pc = 0x1a88ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a88f0: 0x0
    ctx->pc = 0x1a88f0u;
    // NOP
    // 0x1a88f4: 0x45000003
    ctx->pc = 0x1A88F4u;
    {
        const bool branch_taken_0x1a88f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A88F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)20352 << 16));
        if (branch_taken_0x1a88f4) {
            ctx->pc = 0x1A8904u;
            goto label_1a8904;
        }
    }
    ctx->pc = 0x1A88FCu;
    // 0x1a88fc: 0x1000000d
    ctx->pc = 0x1A88FCu;
    {
        const bool branch_taken_0x1a88fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8900u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a88fc) {
            ctx->pc = 0x1A8934u;
            goto label_1a8934;
        }
    }
    ctx->pc = 0x1A8904u;
label_1a8904:
    // 0x1a8904: 0x44820000
    ctx->pc = 0x1a8904u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a8908: 0x0
    ctx->pc = 0x1a8908u;
    // NOP
    // 0x1a890c: 0x46000834
    ctx->pc = 0x1a890cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8910: 0x0
    ctx->pc = 0x1a8910u;
    // NOP
    // 0x1a8914: 0x45010004
    ctx->pc = 0x1A8914u;
    {
        const bool branch_taken_0x1a8914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8918u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a8914) {
            ctx->pc = 0x1A8928u;
            goto label_1a8928;
        }
    }
    ctx->pc = 0x1A891Cu;
    // 0x1a891c: 0x2402ffff
    ctx->pc = 0x1a891cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8920: 0x10000004
    ctx->pc = 0x1A8920u;
    {
        const bool branch_taken_0x1a8920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8924u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a8920) {
            ctx->pc = 0x1A8934u;
            goto label_1a8934;
        }
    }
    ctx->pc = 0x1A8928u;
label_1a8928:
    // 0x1a8928: 0x44020000
    ctx->pc = 0x1a8928u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a892c: 0x0
    ctx->pc = 0x1a892cu;
    // NOP
    // 0x1a8930: 0xae020000
    ctx->pc = 0x1a8930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a8934:
    // 0x1a8934: 0x4bf0e33c
    ctx->pc = 0x1a8934u;
    ctx->vu0_vf[16] = ctx->vu0_vf[28];
    // 0x1a8938: 0x4bf1eb3c
    ctx->pc = 0x1a8938u;
    ctx->vu0_vf[17] = ctx->vu0_vf[29];
    // 0x1a893c: 0x4bf2f33c
    ctx->pc = 0x1a893cu;
    ctx->vu0_vf[18] = ctx->vu0_vf[30];
    // 0x1a8940: 0x4bf3fb3c
    ctx->pc = 0x1a8940u;
    ctx->vu0_vf[19] = ctx->vu0_vf[31];
    // 0x1a8944: 0x3c020030
    ctx->pc = 0x1a8944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a8948: 0xc06c06f
    ctx->pc = 0x1A8948u;
    SET_GPR_U32(ctx, 31, 0x1A8950u);
    ctx->pc = 0x1A894Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8950u; }
        else if (ctx->pc != 0x1A8950u) { ctx->pc = 0x1A8950u; }
    }
    if (ctx->pc != 0x1A8950u) { return; }
    ctx->pc = 0x1A8950u;
    // 0x1a8950: 0xc06bf55
    ctx->pc = 0x1A8950u;
    SET_GPR_U32(ctx, 31, 0x1A8958u);
    ctx->pc = 0x1A8954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8958u; }
        else if (ctx->pc != 0x1A8958u) { ctx->pc = 0x1A8958u; }
    }
    if (ctx->pc != 0x1A8958u) { return; }
    ctx->pc = 0x1A8958u;
    // 0x1a8958: 0x4bfc833c
    ctx->pc = 0x1a8958u;
    ctx->vu0_vf[28] = ctx->vu0_vf[16];
    // 0x1a895c: 0x4bfd8b3c
    ctx->pc = 0x1a895cu;
    ctx->vu0_vf[29] = ctx->vu0_vf[17];
    // 0x1a8960: 0x4bfe933c
    ctx->pc = 0x1a8960u;
    ctx->vu0_vf[30] = ctx->vu0_vf[18];
    // 0x1a8964: 0x4bff9b3c
    ctx->pc = 0x1a8964u;
    ctx->vu0_vf[31] = ctx->vu0_vf[19];
    // 0x1a8968: 0x3c033f80
    ctx->pc = 0x1a8968u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1a896c: 0xae43002c
    ctx->pc = 0x1a896cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x1a8970: 0xaf808a1c
    ctx->pc = 0x1a8970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x1a8974: 0x92040000
    ctx->pc = 0x1a8974u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8978: 0x3c030030
    ctx->pc = 0x1a8978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a897c: 0x24634090
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16528));
    // 0x1a8980: 0x420c0
    ctx->pc = 0x1a8980u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a8984: 0x641821
    ctx->pc = 0x1a8984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8988: 0x8c640004
    ctx->pc = 0x1a8988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a898c: 0x14800004
    ctx->pc = 0x1A898Cu;
    {
        const bool branch_taken_0x1a898c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a898c) {
            ctx->pc = 0x1A89A0u;
            goto label_1a89a0;
        }
    }
    ctx->pc = 0x1A8994u;
    // 0x1a8994: 0xac700004
    ctx->pc = 0x1a8994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1a8998: 0x10000003
    ctx->pc = 0x1A8998u;
    {
        const bool branch_taken_0x1a8998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A899Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x1a8998) {
            ctx->pc = 0x1A89A8u;
            goto label_1a89a8;
        }
    }
    ctx->pc = 0x1A89A0u;
label_1a89a0:
    // 0x1a89a0: 0xac9000f0
    ctx->pc = 0x1a89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 16));
    // 0x1a89a4: 0xac700004
    ctx->pc = 0x1a89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_1a89a8:
    // 0x1a89a8: 0x7bbf0060
    ctx->pc = 0x1a89a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a89ac:
    // 0x1a89ac: 0x7bb40050
    ctx->pc = 0x1a89acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a89b0: 0x7bb30040
    ctx->pc = 0x1a89b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a89b4: 0x7bb20030
    ctx->pc = 0x1a89b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a89b8: 0x7bb10020
    ctx->pc = 0x1a89b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a89bc: 0x7bb00010
    ctx->pc = 0x1a89bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a89c0: 0xc7b40000
    ctx->pc = 0x1a89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a89c4: 0x3e00008
    ctx->pc = 0x1A89C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A87C0u: goto label_1a87c0;
            case 0x1A87CCu: goto label_1a87cc;
            case 0x1A87DCu: goto label_1a87dc;
            case 0x1A886Cu: goto label_1a886c;
            case 0x1A8878u: goto label_1a8878;
            case 0x1A8880u: goto label_1a8880;
            case 0x1A8884u: goto label_1a8884;
            case 0x1A88D0u: goto label_1a88d0;
            case 0x1A88E4u: goto label_1a88e4;
            case 0x1A8904u: goto label_1a8904;
            case 0x1A8928u: goto label_1a8928;
            case 0x1A8934u: goto label_1a8934;
            case 0x1A89A0u: goto label_1a89a0;
            case 0x1A89A8u: goto label_1a89a8;
            case 0x1A89ACu: goto label_1a89ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A89CCu;
}
