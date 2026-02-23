#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispSurvive__10PeopleTaskFv
// Address: 0x2086e0 - 0x208c80
void PreDispSurvive__10PeopleTaskFv_0x2086e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispSurvive__10PeopleTaskFv");


    ctx->pc = 0x2086e0u;

    // 0x2086e0: 0x27bdff00
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2086e4: 0x7fbf0020
    ctx->pc = 0x2086e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2086e8: 0x7fb10010
    ctx->pc = 0x2086e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2086ec: 0x7fb00000
    ctx->pc = 0x2086ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2086f0: 0xc4801d78
    ctx->pc = 0x2086f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2086f4: 0x3c033f80
    ctx->pc = 0x2086f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x2086f8: 0x44831000
    ctx->pc = 0x2086f8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x2086fc: 0x0
    ctx->pc = 0x2086fcu;
    // NOP
    // 0x208700: 0x46020034
    ctx->pc = 0x208700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208704: 0x0
    ctx->pc = 0x208704u;
    // NOP
    // 0x208708: 0x450000df
    ctx->pc = 0x208708u;
    {
        const bool branch_taken_0x208708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20870Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208708) {
            ctx->pc = 0x208A88u;
            goto label_208a88;
        }
    }
    ctx->pc = 0x208710u;
    // 0x208710: 0x8e230030
    ctx->pc = 0x208710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x208714: 0xc461000c
    ctx->pc = 0x208714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208718: 0xc4600000
    ctx->pc = 0x208718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20871c: 0x46010000
    ctx->pc = 0x20871cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208720: 0xe4600000
    ctx->pc = 0x208720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x208724: 0x8e230030
    ctx->pc = 0x208724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x208728: 0xc4610014
    ctx->pc = 0x208728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20872c: 0xc4600008
    ctx->pc = 0x20872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208730: 0x46010000
    ctx->pc = 0x208730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208734: 0xe4600008
    ctx->pc = 0x208734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x208738: 0x8e231d74
    ctx->pc = 0x208738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
    // 0x20873c: 0x30630010
    ctx->pc = 0x20873cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x208740: 0x106000e9
    ctx->pc = 0x208740u;
    {
        const bool branch_taken_0x208740 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x208740) {
            ctx->pc = 0x208AE8u;
            goto label_208ae8;
        }
    }
    ctx->pc = 0x208748u;
    // 0x208748: 0xc6211d78
    ctx->pc = 0x208748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20874c: 0x3c023c23
    ctx->pc = 0x20874cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15395 << 16));
    // 0x208750: 0x3442d706
    ctx->pc = 0x208750u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55046));
    // 0x208754: 0x44820000
    ctx->pc = 0x208754u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x208758: 0x0
    ctx->pc = 0x208758u;
    // NOP
    // 0x20875c: 0x46000800
    ctx->pc = 0x20875cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208760: 0x46020034
    ctx->pc = 0x208760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208764: 0x0
    ctx->pc = 0x208764u;
    // NOP
    // 0x208768: 0x4501000c
    ctx->pc = 0x208768u;
    {
        const bool branch_taken_0x208768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20876Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7544), bits); }
        if (branch_taken_0x208768) {
            ctx->pc = 0x20879Cu;
            goto label_20879c;
        }
    }
    ctx->pc = 0x208770u;
    // 0x208770: 0xe6221d78
    ctx->pc = 0x208770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7544), bits); }
    // 0x208774: 0x8e251e5c
    ctx->pc = 0x208774u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7772)));
    // 0x208778: 0x10a00009
    ctx->pc = 0x208778u;
    {
        const bool branch_taken_0x208778 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x20877Cu;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208778) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208780u;
    // 0x208780: 0x82230024
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x208784: 0x3c020051
    ctx->pc = 0x208784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x208788: 0x244434f0
    ctx->pc = 0x208788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x20878c: 0x24070001
    ctx->pc = 0x20878cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x208790: 0x24080040
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x208794: 0xc086018
    ctx->pc = 0x208794u;
    SET_GPR_U32(ctx, 31, 0x20879Cu);
    ctx->pc = 0x208798u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20879Cu; }
        else if (ctx->pc != 0x20879Cu) { ctx->pc = 0x20879Cu; }
    }
    if (ctx->pc != 0x20879Cu) { return; }
    ctx->pc = 0x20879Cu;
label_20879c:
    // 0x20879c: 0x70001e28
    ctx->pc = 0x20879cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2087a0:
    // 0x2087a0: 0x70002628
    ctx->pc = 0x2087a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2087a4: 0x27a50030
    ctx->pc = 0x2087a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
label_2087a8:
    // 0x2087a8: 0x28610002
    ctx->pc = 0x2087a8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2087ac: 0x1020000c
    ctx->pc = 0x2087ACu;
    {
        const bool branch_taken_0x2087ac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2087B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2087ac) {
            ctx->pc = 0x2087E0u;
            goto label_2087e0;
        }
    }
    ctx->pc = 0x2087B4u;
    // 0x2087b4: 0x3c023f80
    ctx->pc = 0x2087b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2087b8: 0x44820000
    ctx->pc = 0x2087b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2087bc: 0xc6211d78
    ctx->pc = 0x2087bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087c0: 0x8e221e2c
    ctx->pc = 0x2087c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7724)));
    // 0x2087c4: 0x46010041
    ctx->pc = 0x2087c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2087c8: 0x441021
    ctx->pc = 0x2087c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2087cc: 0xc4400000
    ctx->pc = 0x2087ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2087d0: 0x46000802
    ctx->pc = 0x2087d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2087d4: 0x10000008
    ctx->pc = 0x2087D4u;
    {
        const bool branch_taken_0x2087d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2087D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x2087d4) {
            ctx->pc = 0x2087F8u;
            goto label_2087f8;
        }
    }
    ctx->pc = 0x2087DCu;
    // 0x2087dc: 0x24020003
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2087e0:
    // 0x2087e0: 0x14620004
    ctx->pc = 0x2087E0u;
    {
        const bool branch_taken_0x2087e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2087e0) {
            ctx->pc = 0x2087F4u;
            goto label_2087f4;
        }
    }
    ctx->pc = 0x2087E8u;
    // 0x2087e8: 0xc6201d78
    ctx->pc = 0x2087e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2087ec: 0x10000002
    ctx->pc = 0x2087ECu;
    {
        const bool branch_taken_0x2087ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2087F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x2087ec) {
            ctx->pc = 0x2087F8u;
            goto label_2087f8;
        }
    }
    ctx->pc = 0x2087F4u;
label_2087f4:
    // 0x2087f4: 0xaca00000
    ctx->pc = 0x2087f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2087f8:
    // 0x2087f8: 0xc6211d78
    ctx->pc = 0x2087f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087fc: 0x3c023f80
    ctx->pc = 0x2087fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208800: 0x44820000
    ctx->pc = 0x208800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x208804: 0x0
    ctx->pc = 0x208804u;
    // NOP
    // 0x208808: 0x46010032
    ctx->pc = 0x208808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20880c: 0x0
    ctx->pc = 0x20880cu;
    // NOP
    // 0x208810: 0x45020006
    ctx->pc = 0x208810u;
    {
        const bool branch_taken_0x208810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208810) {
            ctx->pc = 0x208814u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208818u;
    // 0x208818: 0x8e221e2c
    ctx->pc = 0x208818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7724)));
    // 0x20881c: 0xc4a00000
    ctx->pc = 0x20881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208820: 0x441021
    ctx->pc = 0x208820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x208824: 0xe4400000
    ctx->pc = 0x208824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x208828: 0x24630001
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_20882c:
    // 0x20882c: 0x28620004
    ctx->pc = 0x20882cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x208830: 0x24840004
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x208834: 0x1440ffdc
    ctx->pc = 0x208834u;
    {
        const bool branch_taken_0x208834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x208838u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x208834) {
            ctx->pc = 0x2087A8u;
            goto label_2087a8;
        }
    }
    ctx->pc = 0x20883Cu;
    // 0x20883c: 0x8e221de8
    ctx->pc = 0x20883cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7656)));
    // 0x208840: 0x27848cf4
    ctx->pc = 0x208840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    // 0x208844: 0x27a60030
    ctx->pc = 0x208844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    // 0x208848: 0x70003e28
    ctx->pc = 0x208848u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20884c: 0x84450000
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208850: 0xc0799e0
    ctx->pc = 0x208850u;
    SET_GPR_U32(ctx, 31, 0x208858u);
    ctx->pc = 0x208854u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6780u;
    {
        const uint32_t __entryPc = ctx->pc;
        shape__16FaceAnimMgrClassFiPfPii_0x1e6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208858u; }
        else if (ctx->pc != 0x208858u) { ctx->pc = 0x208858u; }
    }
    if (ctx->pc != 0x208858u) { return; }
    ctx->pc = 0x208858u;
    // 0x208858: 0x70003628
    ctx->pc = 0x208858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20885c: 0x70001e28
    ctx->pc = 0x20885cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208860: 0x27a40040
    ctx->pc = 0x208860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x208864: 0x27a50060
    ctx->pc = 0x208864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
label_208868:
    // 0x208868: 0x28c10003
    ctx->pc = 0x208868u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 3));
    // 0x20886c: 0x10200013
    ctx->pc = 0x20886Cu;
    {
        const bool branch_taken_0x20886c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x208870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x20886c) {
            ctx->pc = 0x2088BCu;
            goto label_2088bc;
        }
    }
    ctx->pc = 0x208874u;
    // 0x208874: 0x3c023f80
    ctx->pc = 0x208874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208878: 0x44821000
    ctx->pc = 0x208878u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x20887c: 0xc6201d78
    ctx->pc = 0x20887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208880: 0x8e221e3c
    ctx->pc = 0x208880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7740)));
    // 0x208884: 0x46001041
    ctx->pc = 0x208884u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x208888: 0x431021
    ctx->pc = 0x208888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20888c: 0xc4400000
    ctx->pc = 0x20888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208890: 0x46000802
    ctx->pc = 0x208890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x208894: 0xe4800000
    ctx->pc = 0x208894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x208898: 0xc6201d78
    ctx->pc = 0x208898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20889c: 0x8e221e4c
    ctx->pc = 0x20889cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7756)));
    // 0x2088a0: 0x46001041
    ctx->pc = 0x2088a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2088a4: 0x431021
    ctx->pc = 0x2088a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2088a8: 0xc4400000
    ctx->pc = 0x2088a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2088ac: 0x46000802
    ctx->pc = 0x2088acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2088b0: 0x1000000b
    ctx->pc = 0x2088B0u;
    {
        const bool branch_taken_0x2088b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2088B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x2088b0) {
            ctx->pc = 0x2088E0u;
            goto label_2088e0;
        }
    }
    ctx->pc = 0x2088B8u;
    // 0x2088b8: 0x24020005
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2088bc:
    // 0x2088bc: 0x14c20005
    ctx->pc = 0x2088BCu;
    {
        const bool branch_taken_0x2088bc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x2088bc) {
            ctx->pc = 0x2088D4u;
            goto label_2088d4;
        }
    }
    ctx->pc = 0x2088C4u;
    // 0x2088c4: 0xc6201d78
    ctx->pc = 0x2088c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2088c8: 0xe4a00000
    ctx->pc = 0x2088c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2088cc: 0x10000004
    ctx->pc = 0x2088CCu;
    {
        const bool branch_taken_0x2088cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2088D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2088cc) {
            ctx->pc = 0x2088E0u;
            goto label_2088e0;
        }
    }
    ctx->pc = 0x2088D4u;
label_2088d4:
    // 0x2088d4: 0xaca00000
    ctx->pc = 0x2088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2088d8: 0xac800000
    ctx->pc = 0x2088d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2088dc: 0x0
    ctx->pc = 0x2088dcu;
    // NOP
label_2088e0:
    // 0x2088e0: 0xc6211d78
    ctx->pc = 0x2088e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2088e4: 0x3c023f80
    ctx->pc = 0x2088e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2088e8: 0x44820000
    ctx->pc = 0x2088e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2088ec: 0x0
    ctx->pc = 0x2088ecu;
    // NOP
    // 0x2088f0: 0x46010032
    ctx->pc = 0x2088f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2088f4: 0x0
    ctx->pc = 0x2088f4u;
    // NOP
    // 0x2088f8: 0x4502000a
    ctx->pc = 0x2088F8u;
    {
        const bool branch_taken_0x2088f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2088f8) {
            ctx->pc = 0x2088FCu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x208924u;
            goto label_208924;
        }
    }
    ctx->pc = 0x208900u;
    // 0x208900: 0x8e221e3c
    ctx->pc = 0x208900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7740)));
    // 0x208904: 0xc4800000
    ctx->pc = 0x208904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208908: 0x431021
    ctx->pc = 0x208908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20890c: 0xe4400000
    ctx->pc = 0x20890cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x208910: 0x8e221e4c
    ctx->pc = 0x208910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7756)));
    // 0x208914: 0xc4a00000
    ctx->pc = 0x208914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208918: 0x431021
    ctx->pc = 0x208918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20891c: 0xe4400000
    ctx->pc = 0x20891cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x208920: 0x24c60001
    ctx->pc = 0x208920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_208924:
    // 0x208924: 0x28c20006
    ctx->pc = 0x208924u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 6));
    // 0x208928: 0x24630004
    ctx->pc = 0x208928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x20892c: 0x24840004
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x208930: 0x1440ffcd
    ctx->pc = 0x208930u;
    {
        const bool branch_taken_0x208930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x208934u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x208930) {
            ctx->pc = 0x208868u;
            goto label_208868;
        }
    }
    ctx->pc = 0x208938u;
    // 0x208938: 0x8e221de8
    ctx->pc = 0x208938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7656)));
    // 0x20893c: 0x27848cf4
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    // 0x208940: 0x27a60040
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x208944: 0x70003e28
    ctx->pc = 0x208944u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208948: 0x84450002
    ctx->pc = 0x208948u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x20894c: 0xc0799e0
    ctx->pc = 0x20894Cu;
    SET_GPR_U32(ctx, 31, 0x208954u);
    ctx->pc = 0x208950u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6780u;
    {
        const uint32_t __entryPc = ctx->pc;
        shape__16FaceAnimMgrClassFiPfPii_0x1e6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208954u; }
        else if (ctx->pc != 0x208954u) { ctx->pc = 0x208954u; }
    }
    if (ctx->pc != 0x208954u) { return; }
    ctx->pc = 0x208954u;
    // 0x208954: 0x8e221de8
    ctx->pc = 0x208954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7656)));
    // 0x208958: 0x27848cf4
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    // 0x20895c: 0x27a60060
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    // 0x208960: 0x70003e28
    ctx->pc = 0x208960u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208964: 0x84450004
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208968: 0xc0799e0
    ctx->pc = 0x208968u;
    SET_GPR_U32(ctx, 31, 0x208970u);
    ctx->pc = 0x20896Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6780u;
    {
        const uint32_t __entryPc = ctx->pc;
        shape__16FaceAnimMgrClassFiPfPii_0x1e6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208970u; }
        else if (ctx->pc != 0x208970u) { ctx->pc = 0x208970u; }
    }
    if (ctx->pc != 0x208970u) { return; }
    ctx->pc = 0x208970u;
    // 0x208970: 0xc6201d78
    ctx->pc = 0x208970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208974: 0x3c023f00
    ctx->pc = 0x208974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x208978: 0x44821800
    ctx->pc = 0x208978u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x20897c: 0x3c023f80
    ctx->pc = 0x20897cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208980: 0x44820800
    ctx->pc = 0x208980u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x208984: 0x0
    ctx->pc = 0x208984u;
    // NOP
    // 0x208988: 0x4600181a
    ctx->pc = 0x208988u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x20898c: 0x46000801
    ctx->pc = 0x20898cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208990: 0x4600181c
    ctx->pc = 0x208990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x208994: 0xe6201d88
    ctx->pc = 0x208994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7560), bits); }
    // 0x208998: 0xc6201d78
    ctx->pc = 0x208998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20899c: 0x4600181a
    ctx->pc = 0x20899cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2089a0: 0x46000801
    ctx->pc = 0x2089a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2089a4: 0x4600181c
    ctx->pc = 0x2089a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2089a8: 0xe6201d8c
    ctx->pc = 0x2089a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7564), bits); }
    // 0x2089ac: 0xc6201d78
    ctx->pc = 0x2089acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2089b0: 0x4600181a
    ctx->pc = 0x2089b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2089b4: 0x46000801
    ctx->pc = 0x2089b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2089b8: 0x4600181c
    ctx->pc = 0x2089b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2089bc: 0xe6201d90
    ctx->pc = 0x2089bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7568), bits); }
    // 0x2089c0: 0xc6201d78
    ctx->pc = 0x2089c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2089c4: 0xe6201d7c
    ctx->pc = 0x2089c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7548), bits); }
    // 0x2089c8: 0xc6221d78
    ctx->pc = 0x2089c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2089cc: 0x46020801
    ctx->pc = 0x2089ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2089d0: 0x46001802
    ctx->pc = 0x2089d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2089d4: 0x46001000
    ctx->pc = 0x2089d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2089d8: 0xe6201d80
    ctx->pc = 0x2089d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7552), bits); }
    // 0x2089dc: 0xc6221d78
    ctx->pc = 0x2089dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2089e0: 0x46020801
    ctx->pc = 0x2089e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2089e4: 0x46001000
    ctx->pc = 0x2089e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2089e8: 0xe6201d84
    ctx->pc = 0x2089e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7556), bits); }
    // 0x2089ec: 0x4bede37d
    ctx->pc = 0x2089ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2089f0: 0x4bedeb7d
    ctx->pc = 0x2089f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2089f4: 0x4bedf37d
    ctx->pc = 0x2089f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2089f8: 0x4bedfb7d
    ctx->pc = 0x2089f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2089fc: 0x8f828c48
    ctx->pc = 0x2089fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x208a00: 0xc06c038
    ctx->pc = 0x208A00u;
    SET_GPR_U32(ctx, 31, 0x208A08u);
    ctx->pc = 0x208A04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A08u; }
        else if (ctx->pc != 0x208A08u) { ctx->pc = 0x208A08u; }
    }
    if (ctx->pc != 0x208A08u) { return; }
    ctx->pc = 0x208A08u;
    // 0x208a08: 0x3c02bf80
    ctx->pc = 0x208a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x208a0c: 0x44821800
    ctx->pc = 0x208a0cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x208a10: 0xc6221d78
    ctx->pc = 0x208a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208a14: 0x3c023f80
    ctx->pc = 0x208a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208a18: 0x44820800
    ctx->pc = 0x208a18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x208a1c: 0x27a400a0
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x208a20: 0x27a500b0
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x208a24: 0x46020801
    ctx->pc = 0x208a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x208a28: 0x46001802
    ctx->pc = 0x208a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x208a2c: 0x46001000
    ctx->pc = 0x208a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x208a30: 0xe7a000a0
    ctx->pc = 0x208a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x208a34: 0xc6221d78
    ctx->pc = 0x208a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208a38: 0x46020801
    ctx->pc = 0x208a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x208a3c: 0x46001802
    ctx->pc = 0x208a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x208a40: 0x46001000
    ctx->pc = 0x208a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x208a44: 0xe7a000a4
    ctx->pc = 0x208a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x208a48: 0xc6221d78
    ctx->pc = 0x208a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208a4c: 0x46020801
    ctx->pc = 0x208a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x208a50: 0x46001000
    ctx->pc = 0x208a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x208a54: 0xc06bf2b
    ctx->pc = 0x208A54u;
    SET_GPR_U32(ctx, 31, 0x208A5Cu);
    ctx->pc = 0x208A58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A5Cu; }
        else if (ctx->pc != 0x208A5Cu) { ctx->pc = 0x208A5Cu; }
    }
    if (ctx->pc != 0x208A5Cu) { return; }
    ctx->pc = 0x208A5Cu;
    // 0x208a5c: 0xc7ac00b0
    ctx->pc = 0x208a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208a60: 0xc7ad00b4
    ctx->pc = 0x208a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x208a64: 0xc7ae00b8
    ctx->pc = 0x208a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x208a68: 0x26241d94
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 7572));
    // 0x208a6c: 0xc072348
    ctx->pc = 0x208A6Cu;
    SET_GPR_U32(ctx, 31, 0x208A74u);
    ctx->pc = 0x208A70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A74u; }
        else if (ctx->pc != 0x208A74u) { ctx->pc = 0x208A74u; }
    }
    if (ctx->pc != 0x208A74u) { return; }
    ctx->pc = 0x208A74u;
    // 0x208a74: 0x4bff6b7e
    ctx->pc = 0x208a74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x208a78: 0x4bfe6b7e
    ctx->pc = 0x208a78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x208a7c: 0x4bfd6b7e
    ctx->pc = 0x208a7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x208a80: 0x10000019
    ctx->pc = 0x208A80u;
    {
        const bool branch_taken_0x208a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x208A84u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x208a80) {
            ctx->pc = 0x208AE8u;
            goto label_208ae8;
        }
    }
    ctx->pc = 0x208A88u;
label_208a88:
    // 0x208a88: 0x4bede37d
    ctx->pc = 0x208a88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x208a8c: 0x4bedeb7d
    ctx->pc = 0x208a8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x208a90: 0x4bedf37d
    ctx->pc = 0x208a90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x208a94: 0x4bedfb7d
    ctx->pc = 0x208a94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x208a98: 0x8f828c48
    ctx->pc = 0x208a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x208a9c: 0xc06c038
    ctx->pc = 0x208A9Cu;
    SET_GPR_U32(ctx, 31, 0x208AA4u);
    ctx->pc = 0x208AA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AA4u; }
        else if (ctx->pc != 0x208AA4u) { ctx->pc = 0x208AA4u; }
    }
    if (ctx->pc != 0x208AA4u) { return; }
    ctx->pc = 0x208AA4u;
    // 0x208aa4: 0x3c023f80
    ctx->pc = 0x208aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208aa8: 0xafa200c0
    ctx->pc = 0x208aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x208aac: 0xafa200c4
    ctx->pc = 0x208aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x208ab0: 0xafa200c8
    ctx->pc = 0x208ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x208ab4: 0x27a400c0
    ctx->pc = 0x208ab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x208ab8: 0xc06bf2b
    ctx->pc = 0x208AB8u;
    SET_GPR_U32(ctx, 31, 0x208AC0u);
    ctx->pc = 0x208ABCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AC0u; }
        else if (ctx->pc != 0x208AC0u) { ctx->pc = 0x208AC0u; }
    }
    if (ctx->pc != 0x208AC0u) { return; }
    ctx->pc = 0x208AC0u;
    // 0x208ac0: 0xc7ac00d0
    ctx->pc = 0x208ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208ac4: 0xc7ad00d4
    ctx->pc = 0x208ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x208ac8: 0xc7ae00d8
    ctx->pc = 0x208ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x208acc: 0x26241d94
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 7572));
    // 0x208ad0: 0xc072348
    ctx->pc = 0x208AD0u;
    SET_GPR_U32(ctx, 31, 0x208AD8u);
    ctx->pc = 0x208AD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208AD8u; }
        else if (ctx->pc != 0x208AD8u) { ctx->pc = 0x208AD8u; }
    }
    if (ctx->pc != 0x208AD8u) { return; }
    ctx->pc = 0x208AD8u;
    // 0x208ad8: 0x4bff6b7e
    ctx->pc = 0x208ad8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x208adc: 0x4bfe6b7e
    ctx->pc = 0x208adcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x208ae0: 0x4bfd6b7e
    ctx->pc = 0x208ae0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x208ae4: 0x4bfc6b7e
    ctx->pc = 0x208ae4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_208ae8:
    // 0x208ae8: 0xc6221dbc
    ctx->pc = 0x208ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208aec: 0x3c033f80
    ctx->pc = 0x208aecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x208af0: 0x44830800
    ctx->pc = 0x208af0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x208af4: 0x3c034100
    ctx->pc = 0x208af4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16640 << 16));
    // 0x208af8: 0x44830000
    ctx->pc = 0x208af8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x208afc: 0x0
    ctx->pc = 0x208afcu;
    // NOP
    // 0x208b00: 0x46011040
    ctx->pc = 0x208b00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x208b04: 0x46000836
    ctx->pc = 0x208b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208b08: 0x0
    ctx->pc = 0x208b08u;
    // NOP
    // 0x208b0c: 0x45010053
    ctx->pc = 0x208B0Cu;
    {
        const bool branch_taken_0x208b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208B10u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7612), bits); }
        if (branch_taken_0x208b0c) {
            ctx->pc = 0x208C5Cu;
            goto label_208c5c;
        }
    }
    ctx->pc = 0x208B14u;
    // 0x208b14: 0x8e24000c
    ctx->pc = 0x208b14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x208b18: 0x30830008
    ctx->pc = 0x208b18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 8));
    // 0x208b1c: 0x1060004f
    ctx->pc = 0x208B1Cu;
    {
        const bool branch_taken_0x208b1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x208b1c) {
            ctx->pc = 0x208C5Cu;
            goto label_208c5c;
        }
    }
    ctx->pc = 0x208B24u;
    // 0x208b24: 0x4bede37d
    ctx->pc = 0x208b24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x208b28: 0x4bedeb7d
    ctx->pc = 0x208b28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x208b2c: 0x4bedf37d
    ctx->pc = 0x208b2cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x208b30: 0x4bedfb7d
    ctx->pc = 0x208b30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x208b34: 0x30840002
    ctx->pc = 0x208b34u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 2));
    // 0x208b38: 0x70001e28
    ctx->pc = 0x208b38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208b3c: 0x24020001
    ctx->pc = 0x208b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b40: 0x44180a
    ctx->pc = 0x208b40u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x208b44: 0x8e220000
    ctx->pc = 0x208b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x208b48: 0x8f848c48
    ctx->pc = 0x208b48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x208b4c: 0x621021
    ctx->pc = 0x208b4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208b50: 0x80500070
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x208b54: 0x8c830004
    ctx->pc = 0x208b54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208b58: 0x31040
    ctx->pc = 0x208b58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x208b5c: 0x431021
    ctx->pc = 0x208b5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208b60: 0x21080
    ctx->pc = 0x208b60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x208b64: 0x431021
    ctx->pc = 0x208b64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208b68: 0x21100
    ctx->pc = 0x208b68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x208b6c: 0x821021
    ctx->pc = 0x208b6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208b70: 0xc06c038
    ctx->pc = 0x208B70u;
    SET_GPR_U32(ctx, 31, 0x208B78u);
    ctx->pc = 0x208B74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B78u; }
        else if (ctx->pc != 0x208B78u) { ctx->pc = 0x208B78u; }
    }
    if (ctx->pc != 0x208B78u) { return; }
    ctx->pc = 0x208B78u;
    // 0x208b78: 0x101e3c
    ctx->pc = 0x208b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x208b7c: 0x31e3f
    ctx->pc = 0x208b7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x208b80: 0x31100
    ctx->pc = 0x208b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x208b84: 0x431023
    ctx->pc = 0x208b84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208b88: 0x21100
    ctx->pc = 0x208b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x208b8c: 0x511821
    ctx->pc = 0x208b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x208b90: 0xc461016c
    ctx->pc = 0x208b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208b94: 0x3c0240a0
    ctx->pc = 0x208b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16544 << 16));
    // 0x208b98: 0x44820000
    ctx->pc = 0x208b98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x208b9c: 0x27a400e0
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x208ba0: 0x27a500f0
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 240));
    // 0x208ba4: 0xe7a100e0
    ctx->pc = 0x208ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x208ba8: 0xc4610170
    ctx->pc = 0x208ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208bac: 0xe7a100e4
    ctx->pc = 0x208bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x208bb0: 0xc4610174
    ctx->pc = 0x208bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208bb4: 0x46010000
    ctx->pc = 0x208bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208bb8: 0xc06bf00
    ctx->pc = 0x208BB8u;
    SET_GPR_U32(ctx, 31, 0x208BC0u);
    ctx->pc = 0x208BBCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BC0u; }
        else if (ctx->pc != 0x208BC0u) { ctx->pc = 0x208BC0u; }
    }
    if (ctx->pc != 0x208BC0u) { return; }
    ctx->pc = 0x208BC0u;
    // 0x208bc0: 0xc7a200f0
    ctx->pc = 0x208bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208bc4: 0xc7a100f4
    ctx->pc = 0x208bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208bc8: 0xc7a000f8
    ctx->pc = 0x208bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208bcc: 0x8f868c48
    ctx->pc = 0x208bccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x208bd0: 0x3c023f80
    ctx->pc = 0x208bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x208bd4: 0x44826000
    ctx->pc = 0x208bd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x208bd8: 0xe7a20080
    ctx->pc = 0x208bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x208bdc: 0xe7a10084
    ctx->pc = 0x208bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x208be0: 0xe7a00088
    ctx->pc = 0x208be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x208be4: 0x8cc30004
    ctx->pc = 0x208be4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x208be8: 0x24040043
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 67));
    // 0x208bec: 0x27a50080
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x208bf0: 0x31040
    ctx->pc = 0x208bf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x208bf4: 0x431021
    ctx->pc = 0x208bf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208bf8: 0x21080
    ctx->pc = 0x208bf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x208bfc: 0x431021
    ctx->pc = 0x208bfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208c00: 0x21100
    ctx->pc = 0x208c00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x208c04: 0xc21821
    ctx->pc = 0x208c04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x208c08: 0x8c62009c
    ctx->pc = 0x208c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x208c0c: 0xafa2008c
    ctx->pc = 0x208c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x208c10: 0x8c6200a0
    ctx->pc = 0x208c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x208c14: 0xafa20090
    ctx->pc = 0x208c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x208c18: 0x8c6200a4
    ctx->pc = 0x208c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x208c1c: 0xc0785e0
    ctx->pc = 0x208C1Cu;
    SET_GPR_U32(ctx, 31, 0x208C24u);
    ctx->pc = 0x208C20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C24u; }
        else if (ctx->pc != 0x208C24u) { ctx->pc = 0x208C24u; }
    }
    if (ctx->pc != 0x208C24u) { return; }
    ctx->pc = 0x208C24u;
    // 0x208c24: 0x82230024
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x208c28: 0x3c020051
    ctx->pc = 0x208c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x208c2c: 0x244434f0
    ctx->pc = 0x208c2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x208c30: 0x3c020002
    ctx->pc = 0x208c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x208c34: 0x34450025
    ctx->pc = 0x208c34u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 37));
    // 0x208c38: 0x70003e28
    ctx->pc = 0x208c38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208c3c: 0x33300
    ctx->pc = 0x208c3cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    // 0x208c40: 0xc086018
    ctx->pc = 0x208C40u;
    SET_GPR_U32(ctx, 31, 0x208C48u);
    ctx->pc = 0x208C44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C48u; }
        else if (ctx->pc != 0x208C48u) { ctx->pc = 0x208C48u; }
    }
    if (ctx->pc != 0x208C48u) { return; }
    ctx->pc = 0x208C48u;
    // 0x208c48: 0x4bff6b7e
    ctx->pc = 0x208c48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x208c4c: 0x4bfe6b7e
    ctx->pc = 0x208c4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x208c50: 0x4bfd6b7e
    ctx->pc = 0x208c50u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x208c54: 0x4bfc6b7e
    ctx->pc = 0x208c54u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x208c58: 0xae201dbc
    ctx->pc = 0x208c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7612), GPR_U32(ctx, 0));
label_208c5c:
    // 0x208c5c: 0x8e24000c
    ctx->pc = 0x208c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x208c60: 0x2403fff1
    ctx->pc = 0x208c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x208c64: 0x831824
    ctx->pc = 0x208c64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x208c68: 0xae23000c
    ctx->pc = 0x208c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x208c6c: 0x7bbf0020
    ctx->pc = 0x208c6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208c70: 0x7bb10010
    ctx->pc = 0x208c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208c74: 0x7bb00000
    ctx->pc = 0x208c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208c78: 0x3e00008
    ctx->pc = 0x208C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20879Cu: goto label_20879c;
            case 0x2087A0u: goto label_2087a0;
            case 0x2087A8u: goto label_2087a8;
            case 0x2087E0u: goto label_2087e0;
            case 0x2087F4u: goto label_2087f4;
            case 0x2087F8u: goto label_2087f8;
            case 0x20882Cu: goto label_20882c;
            case 0x208868u: goto label_208868;
            case 0x2088BCu: goto label_2088bc;
            case 0x2088D4u: goto label_2088d4;
            case 0x2088E0u: goto label_2088e0;
            case 0x208924u: goto label_208924;
            case 0x208A88u: goto label_208a88;
            case 0x208AE8u: goto label_208ae8;
            case 0x208C5Cu: goto label_208c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208C80u;
}
