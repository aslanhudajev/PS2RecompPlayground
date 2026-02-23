#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMizusibukiLarge__9FcvEffectFv
// Address: 0x1dd890 - 0x1dda0c
void initMizusibukiLarge__9FcvEffectFv_0x1dd890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMizusibukiLarge__9FcvEffectFv");


    ctx->pc = 0x1dd890u;

    // 0x1dd890: 0x27bdff90
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dd894: 0x7fbf0060
    ctx->pc = 0x1dd894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1dd898: 0x7fb50050
    ctx->pc = 0x1dd898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dd89c: 0x7fb40040
    ctx->pc = 0x1dd89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dd8a0: 0x7fb30030
    ctx->pc = 0x1dd8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dd8a4: 0x7fb20020
    ctx->pc = 0x1dd8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd8a8: 0x7fb10010
    ctx->pc = 0x1dd8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd8ac: 0x7080ae28
    ctx->pc = 0x1dd8acu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd8b0: 0x2405002d
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
    // 0x1dd8b4: 0xc0761c4
    ctx->pc = 0x1DD8B4u;
    SET_GPR_U32(ctx, 31, 0x1DD8BCu);
    ctx->pc = 0x1DD8B8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8BCu; }
        else if (ctx->pc != 0x1DD8BCu) { ctx->pc = 0x1DD8BCu; }
    }
    if (ctx->pc != 0x1DD8BCu) { return; }
    ctx->pc = 0x1DD8BCu;
    // 0x1dd8bc: 0xaea20054
    ctx->pc = 0x1dd8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x1dd8c0: 0x3c024270
    ctx->pc = 0x1dd8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1dd8c4: 0xaea20028
    ctx->pc = 0x1dd8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x1dd8c8: 0x27848d4c
    ctx->pc = 0x1dd8c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd8cc: 0xc07f208
    ctx->pc = 0x1DD8CCu;
    SET_GPR_U32(ctx, 31, 0x1DD8D4u);
    ctx->pc = 0x1DD8D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3950));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D4u; }
        else if (ctx->pc != 0x1DD8D4u) { ctx->pc = 0x1DD8D4u; }
    }
    if (ctx->pc != 0x1DD8D4u) { return; }
    ctx->pc = 0x1DD8D4u;
    // 0x1dd8d4: 0x70408628
    ctx->pc = 0x1dd8d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd8d8: 0x27848d4c
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd8dc: 0xc07f208
    ctx->pc = 0x1DD8DCu;
    SET_GPR_U32(ctx, 31, 0x1DD8E4u);
    ctx->pc = 0x1DD8E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3951));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8E4u; }
        else if (ctx->pc != 0x1DD8E4u) { ctx->pc = 0x1DD8E4u; }
    }
    if (ctx->pc != 0x1DD8E4u) { return; }
    ctx->pc = 0x1DD8E4u;
    // 0x1dd8e4: 0x70408e28
    ctx->pc = 0x1dd8e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd8e8: 0x27848d4c
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd8ec: 0xc07f208
    ctx->pc = 0x1DD8ECu;
    SET_GPR_U32(ctx, 31, 0x1DD8F4u);
    ctx->pc = 0x1DD8F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3952));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8F4u; }
        else if (ctx->pc != 0x1DD8F4u) { ctx->pc = 0x1DD8F4u; }
    }
    if (ctx->pc != 0x1DD8F4u) { return; }
    ctx->pc = 0x1DD8F4u;
    // 0x1dd8f4: 0x70409628
    ctx->pc = 0x1dd8f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd8f8: 0x70009e28
    ctx->pc = 0x1dd8f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd8fc: 0x1000002e
    ctx->pc = 0x1DD8FCu;
    {
        const bool branch_taken_0x1dd8fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD900u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dd8fc) {
            ctx->pc = 0x1DD9B8u;
            goto label_1dd9b8;
        }
    }
    ctx->pc = 0x1DD904u;
label_1dd904:
    // 0x1dd904: 0xc07f208
    ctx->pc = 0x1DD904u;
    SET_GPR_U32(ctx, 31, 0x1DD90Cu);
    ctx->pc = 0x1DD908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD90Cu; }
        else if (ctx->pc != 0x1DD90Cu) { ctx->pc = 0x1DD90Cu; }
    }
    if (ctx->pc != 0x1DD90Cu) { return; }
    ctx->pc = 0x1DD90Cu;
    // 0x1dd90c: 0x2a61000f
    ctx->pc = 0x1dd90cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 15));
    // 0x1dd910: 0x1020000b
    ctx->pc = 0x1DD910u;
    {
        const bool branch_taken_0x1dd910 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD914u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 21));
        if (branch_taken_0x1dd910) {
            ctx->pc = 0x1DD940u;
            goto label_1dd940;
        }
    }
    ctx->pc = 0x1DD918u;
    // 0x1dd918: 0x8ea40054
    ctx->pc = 0x1dd918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd91c: 0x3c03001b
    ctx->pc = 0x1dd91cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dd920: 0x34650086
    ctx->pc = 0x1dd920u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 134));
    // 0x1dd924: 0x70403628
    ctx->pc = 0x1dd924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd928: 0x72003e28
    ctx->pc = 0x1dd928u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd92c: 0xc079e80
    ctx->pc = 0x1DD92Cu;
    SET_GPR_U32(ctx, 31, 0x1DD934u);
    ctx->pc = 0x1DD930u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD934u; }
        else if (ctx->pc != 0x1DD934u) { ctx->pc = 0x1DD934u; }
    }
    if (ctx->pc != 0x1DD934u) { return; }
    ctx->pc = 0x1DD934u;
    // 0x1dd934: 0x10000015
    ctx->pc = 0x1DD934u;
    {
        const bool branch_taken_0x1dd934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD938u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dd934) {
            ctx->pc = 0x1DD98Cu;
            goto label_1dd98c;
        }
    }
    ctx->pc = 0x1DD93Cu;
    // 0x1dd93c: 0x2a610015
    ctx->pc = 0x1dd93cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 21));
label_1dd940:
    // 0x1dd940: 0x1020000a
    ctx->pc = 0x1DD940u;
    {
        const bool branch_taken_0x1dd940 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd940) {
            ctx->pc = 0x1DD96Cu;
            goto label_1dd96c;
        }
    }
    ctx->pc = 0x1DD948u;
    // 0x1dd948: 0x8ea40054
    ctx->pc = 0x1dd948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd94c: 0x3c03001b
    ctx->pc = 0x1dd94cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dd950: 0x34650085
    ctx->pc = 0x1dd950u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 133));
    // 0x1dd954: 0x70403628
    ctx->pc = 0x1dd954u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd958: 0x72203e28
    ctx->pc = 0x1dd958u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd95c: 0xc079e80
    ctx->pc = 0x1DD95Cu;
    SET_GPR_U32(ctx, 31, 0x1DD964u);
    ctx->pc = 0x1DD960u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD964u; }
        else if (ctx->pc != 0x1DD964u) { ctx->pc = 0x1DD964u; }
    }
    if (ctx->pc != 0x1DD964u) { return; }
    ctx->pc = 0x1DD964u;
    // 0x1dd964: 0x10000008
    ctx->pc = 0x1DD964u;
    {
        const bool branch_taken_0x1dd964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd964) {
            ctx->pc = 0x1DD988u;
            goto label_1dd988;
        }
    }
    ctx->pc = 0x1DD96Cu;
label_1dd96c:
    // 0x1dd96c: 0x8ea40054
    ctx->pc = 0x1dd96cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd970: 0x3c03001b
    ctx->pc = 0x1dd970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dd974: 0x34650084
    ctx->pc = 0x1dd974u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 132));
    // 0x1dd978: 0x70403628
    ctx->pc = 0x1dd978u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd97c: 0x72403e28
    ctx->pc = 0x1dd97cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dd980: 0xc079e80
    ctx->pc = 0x1DD980u;
    SET_GPR_U32(ctx, 31, 0x1DD988u);
    ctx->pc = 0x1DD984u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD988u; }
        else if (ctx->pc != 0x1DD988u) { ctx->pc = 0x1DD988u; }
    }
    if (ctx->pc != 0x1DD988u) { return; }
    ctx->pc = 0x1DD988u;
label_1dd988:
    // 0x1dd988: 0xc6ac002c
    ctx->pc = 0x1dd988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd98c:
    // 0x1dd98c: 0x3c033f80
    ctx->pc = 0x1dd98cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd990: 0x44830000
    ctx->pc = 0x1dd990u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd994: 0x0
    ctx->pc = 0x1dd994u;
    // NOP
    // 0x1dd998: 0x460c0032
    ctx->pc = 0x1dd998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd99c: 0x0
    ctx->pc = 0x1dd99cu;
    // NOP
    // 0x1dd9a0: 0x45030004
    ctx->pc = 0x1DD9A0u;
    {
        const bool branch_taken_0x1dd9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd9a0) {
            ctx->pc = 0x1DD9A4u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
            ctx->pc = 0x1DD9B4u;
            goto label_1dd9b4;
        }
    }
    ctx->pc = 0x1DD9A8u;
    // 0x1dd9a8: 0xc079ecc
    ctx->pc = 0x1DD9A8u;
    SET_GPR_U32(ctx, 31, 0x1DD9B0u);
    ctx->pc = 0x1DD9ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9B0u; }
        else if (ctx->pc != 0x1DD9B0u) { ctx->pc = 0x1DD9B0u; }
    }
    if (ctx->pc != 0x1DD9B0u) { return; }
    ctx->pc = 0x1DD9B0u;
    // 0x1dd9b0: 0x269400f0
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
label_1dd9b4:
    // 0x1dd9b4: 0x26730001
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1dd9b8:
    // 0x1dd9b8: 0x8ea30000
    ctx->pc = 0x1dd9b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dd9bc: 0x263182a
    ctx->pc = 0x1dd9bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1dd9c0: 0x1460ffd0
    ctx->pc = 0x1DD9C0u;
    {
        const bool branch_taken_0x1dd9c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DD9C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 3905));
        if (branch_taken_0x1dd9c0) {
            ctx->pc = 0x1DD904u;
            goto label_1dd904;
        }
    }
    ctx->pc = 0x1DD9C8u;
    // 0x1dd9c8: 0x3c030027
    ctx->pc = 0x1dd9c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd9cc: 0x246396e8
    ctx->pc = 0x1dd9ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940392));
    // 0x1dd9d0: 0xc4620000
    ctx->pc = 0x1dd9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd9d4: 0xc4610004
    ctx->pc = 0x1dd9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd9d8: 0xc4600008
    ctx->pc = 0x1dd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd9dc: 0xe6a20114
    ctx->pc = 0x1dd9dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 276), bits); }
    // 0x1dd9e0: 0xe6a10118
    ctx->pc = 0x1dd9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x1dd9e4: 0xe6a0011c
    ctx->pc = 0x1dd9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x1dd9e8: 0x7bbf0060
    ctx->pc = 0x1dd9e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd9ec: 0x7bb50050
    ctx->pc = 0x1dd9ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd9f0: 0x7bb40040
    ctx->pc = 0x1dd9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd9f4: 0x7bb30030
    ctx->pc = 0x1dd9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd9f8: 0x7bb20020
    ctx->pc = 0x1dd9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd9fc: 0x7bb10010
    ctx->pc = 0x1dd9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dda00: 0x7bb00000
    ctx->pc = 0x1dda00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dda04: 0x3e00008
    ctx->pc = 0x1DDA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDA08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD904u: goto label_1dd904;
            case 0x1DD940u: goto label_1dd940;
            case 0x1DD96Cu: goto label_1dd96c;
            case 0x1DD988u: goto label_1dd988;
            case 0x1DD98Cu: goto label_1dd98c;
            case 0x1DD9B4u: goto label_1dd9b4;
            case 0x1DD9B8u: goto label_1dd9b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDA0Cu;
}
