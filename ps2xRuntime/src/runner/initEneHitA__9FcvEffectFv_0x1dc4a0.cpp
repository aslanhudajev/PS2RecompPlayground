#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneHitA__9FcvEffectFv
// Address: 0x1dc4a0 - 0x1dc624
void initEneHitA__9FcvEffectFv_0x1dc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneHitA__9FcvEffectFv");


    ctx->pc = 0x1dc4a0u;

    // 0x1dc4a0: 0x27bdff90
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc4a4: 0x7fbf0060
    ctx->pc = 0x1dc4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1dc4a8: 0x7fb50050
    ctx->pc = 0x1dc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dc4ac: 0x7fb40040
    ctx->pc = 0x1dc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc4b0: 0x7fb30030
    ctx->pc = 0x1dc4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc4b4: 0x7fb20020
    ctx->pc = 0x1dc4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc4b8: 0x7fb10010
    ctx->pc = 0x1dc4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc4bc: 0x7080ae28
    ctx->pc = 0x1dc4bcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc4c0: 0x24050024
    ctx->pc = 0x1dc4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1dc4c4: 0xc0761c4
    ctx->pc = 0x1DC4C4u;
    SET_GPR_U32(ctx, 31, 0x1DC4CCu);
    ctx->pc = 0x1DC4C8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4CCu; }
        else if (ctx->pc != 0x1DC4CCu) { ctx->pc = 0x1DC4CCu; }
    }
    if (ctx->pc != 0x1DC4CCu) { return; }
    ctx->pc = 0x1DC4CCu;
    // 0x1dc4cc: 0xaea20054
    ctx->pc = 0x1dc4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x1dc4d0: 0x3c0241b8
    ctx->pc = 0x1dc4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16824 << 16));
    // 0x1dc4d4: 0xaea20028
    ctx->pc = 0x1dc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x1dc4d8: 0x27848d4c
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc4dc: 0xc07f208
    ctx->pc = 0x1DC4DCu;
    SET_GPR_U32(ctx, 31, 0x1DC4E4u);
    ctx->pc = 0x1DC4E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3303));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4E4u; }
        else if (ctx->pc != 0x1DC4E4u) { ctx->pc = 0x1DC4E4u; }
    }
    if (ctx->pc != 0x1DC4E4u) { return; }
    ctx->pc = 0x1DC4E4u;
    // 0x1dc4e4: 0x70408628
    ctx->pc = 0x1dc4e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc4e8: 0x27848d4c
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc4ec: 0xc07f208
    ctx->pc = 0x1DC4ECu;
    SET_GPR_U32(ctx, 31, 0x1DC4F4u);
    ctx->pc = 0x1DC4F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3304));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4F4u; }
        else if (ctx->pc != 0x1DC4F4u) { ctx->pc = 0x1DC4F4u; }
    }
    if (ctx->pc != 0x1DC4F4u) { return; }
    ctx->pc = 0x1DC4F4u;
    // 0x1dc4f4: 0x70408e28
    ctx->pc = 0x1dc4f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc4f8: 0x27848d4c
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc4fc: 0xc07f208
    ctx->pc = 0x1DC4FCu;
    SET_GPR_U32(ctx, 31, 0x1DC504u);
    ctx->pc = 0x1DC500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3305));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC504u; }
        else if (ctx->pc != 0x1DC504u) { ctx->pc = 0x1DC504u; }
    }
    if (ctx->pc != 0x1DC504u) { return; }
    ctx->pc = 0x1DC504u;
    // 0x1dc504: 0x70409628
    ctx->pc = 0x1dc504u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc508: 0x70009e28
    ctx->pc = 0x1dc508u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc50c: 0x10000030
    ctx->pc = 0x1DC50Cu;
    {
        const bool branch_taken_0x1dc50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC510u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc50c) {
            ctx->pc = 0x1DC5D0u;
            goto label_1dc5d0;
        }
    }
    ctx->pc = 0x1DC514u;
label_1dc514:
    // 0x1dc514: 0xc07f208
    ctx->pc = 0x1DC514u;
    SET_GPR_U32(ctx, 31, 0x1DC51Cu);
    ctx->pc = 0x1DC518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC51Cu; }
        else if (ctx->pc != 0x1DC51Cu) { ctx->pc = 0x1DC51Cu; }
    }
    if (ctx->pc != 0x1DC51Cu) { return; }
    ctx->pc = 0x1DC51Cu;
    // 0x1dc51c: 0x2a610009
    ctx->pc = 0x1dc51cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 9));
    // 0x1dc520: 0x1020000b
    ctx->pc = 0x1DC520u;
    {
        const bool branch_taken_0x1dc520 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC524u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 33));
        if (branch_taken_0x1dc520) {
            ctx->pc = 0x1DC550u;
            goto label_1dc550;
        }
    }
    ctx->pc = 0x1DC528u;
    // 0x1dc528: 0x8ea40054
    ctx->pc = 0x1dc528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc52c: 0x3c03001b
    ctx->pc = 0x1dc52cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc530: 0x34650013
    ctx->pc = 0x1dc530u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
    // 0x1dc534: 0x70403628
    ctx->pc = 0x1dc534u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc538: 0x72203e28
    ctx->pc = 0x1dc538u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dc53c: 0xc079e80
    ctx->pc = 0x1DC53Cu;
    SET_GPR_U32(ctx, 31, 0x1DC544u);
    ctx->pc = 0x1DC540u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC544u; }
        else if (ctx->pc != 0x1DC544u) { ctx->pc = 0x1DC544u; }
    }
    if (ctx->pc != 0x1DC544u) { return; }
    ctx->pc = 0x1DC544u;
    // 0x1dc544: 0x10000015
    ctx->pc = 0x1DC544u;
    {
        const bool branch_taken_0x1dc544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC548u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dc544) {
            ctx->pc = 0x1DC59Cu;
            goto label_1dc59c;
        }
    }
    ctx->pc = 0x1DC54Cu;
    // 0x1dc54c: 0x2a610021
    ctx->pc = 0x1dc54cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 33));
label_1dc550:
    // 0x1dc550: 0x1020000a
    ctx->pc = 0x1DC550u;
    {
        const bool branch_taken_0x1dc550 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc550) {
            ctx->pc = 0x1DC57Cu;
            goto label_1dc57c;
        }
    }
    ctx->pc = 0x1DC558u;
    // 0x1dc558: 0x8ea40054
    ctx->pc = 0x1dc558u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc55c: 0x3c03001b
    ctx->pc = 0x1dc55cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc560: 0x346500ae
    ctx->pc = 0x1dc560u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 174));
    // 0x1dc564: 0x70403628
    ctx->pc = 0x1dc564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc568: 0x72003e28
    ctx->pc = 0x1dc568u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc56c: 0xc079e80
    ctx->pc = 0x1DC56Cu;
    SET_GPR_U32(ctx, 31, 0x1DC574u);
    ctx->pc = 0x1DC570u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC574u; }
        else if (ctx->pc != 0x1DC574u) { ctx->pc = 0x1DC574u; }
    }
    if (ctx->pc != 0x1DC574u) { return; }
    ctx->pc = 0x1DC574u;
    // 0x1dc574: 0x10000008
    ctx->pc = 0x1DC574u;
    {
        const bool branch_taken_0x1dc574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc574) {
            ctx->pc = 0x1DC598u;
            goto label_1dc598;
        }
    }
    ctx->pc = 0x1DC57Cu;
label_1dc57c:
    // 0x1dc57c: 0x8ea40054
    ctx->pc = 0x1dc57cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc580: 0x3c03001b
    ctx->pc = 0x1dc580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc584: 0x34650014
    ctx->pc = 0x1dc584u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
    // 0x1dc588: 0x70403628
    ctx->pc = 0x1dc588u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc58c: 0x72403e28
    ctx->pc = 0x1dc58cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dc590: 0xc079e80
    ctx->pc = 0x1DC590u;
    SET_GPR_U32(ctx, 31, 0x1DC598u);
    ctx->pc = 0x1DC594u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC598u; }
        else if (ctx->pc != 0x1DC598u) { ctx->pc = 0x1DC598u; }
    }
    if (ctx->pc != 0x1DC598u) { return; }
    ctx->pc = 0x1DC598u;
label_1dc598:
    // 0x1dc598: 0xc6ac002c
    ctx->pc = 0x1dc598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc59c:
    // 0x1dc59c: 0x3c033f80
    ctx->pc = 0x1dc59cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dc5a0: 0x44830000
    ctx->pc = 0x1dc5a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dc5a4: 0x0
    ctx->pc = 0x1dc5a4u;
    // NOP
    // 0x1dc5a8: 0x460c0032
    ctx->pc = 0x1dc5a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc5ac: 0x0
    ctx->pc = 0x1dc5acu;
    // NOP
    // 0x1dc5b0: 0x45030006
    ctx->pc = 0x1DC5B0u;
    {
        const bool branch_taken_0x1dc5b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc5b0) {
            ctx->pc = 0x1DC5B4u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
            ctx->pc = 0x1DC5CCu;
            goto label_1dc5cc;
        }
    }
    ctx->pc = 0x1DC5B8u;
    // 0x1dc5b8: 0x8ea20054
    ctx->pc = 0x1dc5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc5bc: 0xc079ecc
    ctx->pc = 0x1DC5BCu;
    SET_GPR_U32(ctx, 31, 0x1DC5C4u);
    ctx->pc = 0x1DC5C0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5C4u; }
        else if (ctx->pc != 0x1DC5C4u) { ctx->pc = 0x1DC5C4u; }
    }
    if (ctx->pc != 0x1DC5C4u) { return; }
    ctx->pc = 0x1DC5C4u;
    // 0x1dc5c4: 0x0
    ctx->pc = 0x1dc5c4u;
    // NOP
    // 0x1dc5c8: 0x269400f0
    ctx->pc = 0x1dc5c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
label_1dc5cc:
    // 0x1dc5cc: 0x26730001
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1dc5d0:
    // 0x1dc5d0: 0x8ea30000
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dc5d4: 0x263182a
    ctx->pc = 0x1dc5d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1dc5d8: 0x1460ffce
    ctx->pc = 0x1DC5D8u;
    {
        const bool branch_taken_0x1dc5d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC5DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 3259));
        if (branch_taken_0x1dc5d8) {
            ctx->pc = 0x1DC514u;
            goto label_1dc514;
        }
    }
    ctx->pc = 0x1DC5E0u;
    // 0x1dc5e0: 0x3c030027
    ctx->pc = 0x1dc5e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc5e4: 0x24638d48
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937928));
    // 0x1dc5e8: 0xc4620000
    ctx->pc = 0x1dc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc5ec: 0xc4610004
    ctx->pc = 0x1dc5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc5f0: 0xc4600008
    ctx->pc = 0x1dc5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc5f4: 0xe6a20114
    ctx->pc = 0x1dc5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 276), bits); }
    // 0x1dc5f8: 0xe6a10118
    ctx->pc = 0x1dc5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x1dc5fc: 0xe6a0011c
    ctx->pc = 0x1dc5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x1dc600: 0x7bbf0060
    ctx->pc = 0x1dc600u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc604: 0x7bb50050
    ctx->pc = 0x1dc604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc608: 0x7bb40040
    ctx->pc = 0x1dc608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc60c: 0x7bb30030
    ctx->pc = 0x1dc60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc610: 0x7bb20020
    ctx->pc = 0x1dc610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc614: 0x7bb10010
    ctx->pc = 0x1dc614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc618: 0x7bb00000
    ctx->pc = 0x1dc618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc61c: 0x3e00008
    ctx->pc = 0x1DC61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC514u: goto label_1dc514;
            case 0x1DC550u: goto label_1dc550;
            case 0x1DC57Cu: goto label_1dc57c;
            case 0x1DC598u: goto label_1dc598;
            case 0x1DC59Cu: goto label_1dc59c;
            case 0x1DC5CCu: goto label_1dc5cc;
            case 0x1DC5D0u: goto label_1dc5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC624u;
}
