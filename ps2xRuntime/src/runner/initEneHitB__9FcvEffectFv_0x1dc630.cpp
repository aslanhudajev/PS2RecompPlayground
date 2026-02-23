#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneHitB__9FcvEffectFv
// Address: 0x1dc630 - 0x1dc7b4
void initEneHitB__9FcvEffectFv_0x1dc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneHitB__9FcvEffectFv");


    ctx->pc = 0x1dc630u;

    // 0x1dc630: 0x27bdff90
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc634: 0x7fbf0060
    ctx->pc = 0x1dc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1dc638: 0x7fb50050
    ctx->pc = 0x1dc638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dc63c: 0x7fb40040
    ctx->pc = 0x1dc63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc640: 0x7fb30030
    ctx->pc = 0x1dc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc644: 0x7fb20020
    ctx->pc = 0x1dc644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc648: 0x7fb10010
    ctx->pc = 0x1dc648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc64c: 0x7080ae28
    ctx->pc = 0x1dc64cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc650: 0x24050024
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1dc654: 0xc0761c4
    ctx->pc = 0x1DC654u;
    SET_GPR_U32(ctx, 31, 0x1DC65Cu);
    ctx->pc = 0x1DC658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC65Cu; }
        else if (ctx->pc != 0x1DC65Cu) { ctx->pc = 0x1DC65Cu; }
    }
    if (ctx->pc != 0x1DC65Cu) { return; }
    ctx->pc = 0x1DC65Cu;
    // 0x1dc65c: 0xaea20054
    ctx->pc = 0x1dc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x1dc660: 0x3c0241b8
    ctx->pc = 0x1dc660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16824 << 16));
    // 0x1dc664: 0xaea20028
    ctx->pc = 0x1dc664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x1dc668: 0x27848d4c
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc66c: 0xc07f208
    ctx->pc = 0x1DC66Cu;
    SET_GPR_U32(ctx, 31, 0x1DC674u);
    ctx->pc = 0x1DC670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3340));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC674u; }
        else if (ctx->pc != 0x1DC674u) { ctx->pc = 0x1DC674u; }
    }
    if (ctx->pc != 0x1DC674u) { return; }
    ctx->pc = 0x1DC674u;
    // 0x1dc674: 0x70408628
    ctx->pc = 0x1dc674u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc678: 0x27848d4c
    ctx->pc = 0x1dc678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc67c: 0xc07f208
    ctx->pc = 0x1DC67Cu;
    SET_GPR_U32(ctx, 31, 0x1DC684u);
    ctx->pc = 0x1DC680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3341));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC684u; }
        else if (ctx->pc != 0x1DC684u) { ctx->pc = 0x1DC684u; }
    }
    if (ctx->pc != 0x1DC684u) { return; }
    ctx->pc = 0x1DC684u;
    // 0x1dc684: 0x70408e28
    ctx->pc = 0x1dc684u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc688: 0x27848d4c
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc68c: 0xc07f208
    ctx->pc = 0x1DC68Cu;
    SET_GPR_U32(ctx, 31, 0x1DC694u);
    ctx->pc = 0x1DC690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3342));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC694u; }
        else if (ctx->pc != 0x1DC694u) { ctx->pc = 0x1DC694u; }
    }
    if (ctx->pc != 0x1DC694u) { return; }
    ctx->pc = 0x1DC694u;
    // 0x1dc694: 0x70409628
    ctx->pc = 0x1dc694u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc698: 0x70009e28
    ctx->pc = 0x1dc698u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc69c: 0x10000030
    ctx->pc = 0x1DC69Cu;
    {
        const bool branch_taken_0x1dc69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC6A0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc69c) {
            ctx->pc = 0x1DC760u;
            goto label_1dc760;
        }
    }
    ctx->pc = 0x1DC6A4u;
label_1dc6a4:
    // 0x1dc6a4: 0xc07f208
    ctx->pc = 0x1DC6A4u;
    SET_GPR_U32(ctx, 31, 0x1DC6ACu);
    ctx->pc = 0x1DC6A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6ACu; }
        else if (ctx->pc != 0x1DC6ACu) { ctx->pc = 0x1DC6ACu; }
    }
    if (ctx->pc != 0x1DC6ACu) { return; }
    ctx->pc = 0x1DC6ACu;
    // 0x1dc6ac: 0x2a610009
    ctx->pc = 0x1dc6acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 9));
    // 0x1dc6b0: 0x1020000b
    ctx->pc = 0x1DC6B0u;
    {
        const bool branch_taken_0x1dc6b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC6B4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 33));
        if (branch_taken_0x1dc6b0) {
            ctx->pc = 0x1DC6E0u;
            goto label_1dc6e0;
        }
    }
    ctx->pc = 0x1DC6B8u;
    // 0x1dc6b8: 0x8ea40054
    ctx->pc = 0x1dc6b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc6bc: 0x3c03001b
    ctx->pc = 0x1dc6bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc6c0: 0x34650013
    ctx->pc = 0x1dc6c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
    // 0x1dc6c4: 0x70403628
    ctx->pc = 0x1dc6c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc6c8: 0x72203e28
    ctx->pc = 0x1dc6c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dc6cc: 0xc079e80
    ctx->pc = 0x1DC6CCu;
    SET_GPR_U32(ctx, 31, 0x1DC6D4u);
    ctx->pc = 0x1DC6D0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6D4u; }
        else if (ctx->pc != 0x1DC6D4u) { ctx->pc = 0x1DC6D4u; }
    }
    if (ctx->pc != 0x1DC6D4u) { return; }
    ctx->pc = 0x1DC6D4u;
    // 0x1dc6d4: 0x10000015
    ctx->pc = 0x1DC6D4u;
    {
        const bool branch_taken_0x1dc6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC6D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dc6d4) {
            ctx->pc = 0x1DC72Cu;
            goto label_1dc72c;
        }
    }
    ctx->pc = 0x1DC6DCu;
    // 0x1dc6dc: 0x2a610021
    ctx->pc = 0x1dc6dcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 33));
label_1dc6e0:
    // 0x1dc6e0: 0x1020000a
    ctx->pc = 0x1DC6E0u;
    {
        const bool branch_taken_0x1dc6e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc6e0) {
            ctx->pc = 0x1DC70Cu;
            goto label_1dc70c;
        }
    }
    ctx->pc = 0x1DC6E8u;
    // 0x1dc6e8: 0x8ea40054
    ctx->pc = 0x1dc6e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc6ec: 0x3c03001b
    ctx->pc = 0x1dc6ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc6f0: 0x346500ae
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 174));
    // 0x1dc6f4: 0x70403628
    ctx->pc = 0x1dc6f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc6f8: 0x72003e28
    ctx->pc = 0x1dc6f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc6fc: 0xc079e80
    ctx->pc = 0x1DC6FCu;
    SET_GPR_U32(ctx, 31, 0x1DC704u);
    ctx->pc = 0x1DC700u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC704u; }
        else if (ctx->pc != 0x1DC704u) { ctx->pc = 0x1DC704u; }
    }
    if (ctx->pc != 0x1DC704u) { return; }
    ctx->pc = 0x1DC704u;
    // 0x1dc704: 0x10000008
    ctx->pc = 0x1DC704u;
    {
        const bool branch_taken_0x1dc704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc704) {
            ctx->pc = 0x1DC728u;
            goto label_1dc728;
        }
    }
    ctx->pc = 0x1DC70Cu;
label_1dc70c:
    // 0x1dc70c: 0x8ea40054
    ctx->pc = 0x1dc70cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc710: 0x3c03001b
    ctx->pc = 0x1dc710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc714: 0x34650014
    ctx->pc = 0x1dc714u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
    // 0x1dc718: 0x70403628
    ctx->pc = 0x1dc718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc71c: 0x72403e28
    ctx->pc = 0x1dc71cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dc720: 0xc079e80
    ctx->pc = 0x1DC720u;
    SET_GPR_U32(ctx, 31, 0x1DC728u);
    ctx->pc = 0x1DC724u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC728u; }
        else if (ctx->pc != 0x1DC728u) { ctx->pc = 0x1DC728u; }
    }
    if (ctx->pc != 0x1DC728u) { return; }
    ctx->pc = 0x1DC728u;
label_1dc728:
    // 0x1dc728: 0xc6ac002c
    ctx->pc = 0x1dc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc72c:
    // 0x1dc72c: 0x3c033f80
    ctx->pc = 0x1dc72cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dc730: 0x44830000
    ctx->pc = 0x1dc730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dc734: 0x0
    ctx->pc = 0x1dc734u;
    // NOP
    // 0x1dc738: 0x460c0032
    ctx->pc = 0x1dc738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc73c: 0x0
    ctx->pc = 0x1dc73cu;
    // NOP
    // 0x1dc740: 0x45030006
    ctx->pc = 0x1DC740u;
    {
        const bool branch_taken_0x1dc740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc740) {
            ctx->pc = 0x1DC744u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
            ctx->pc = 0x1DC75Cu;
            goto label_1dc75c;
        }
    }
    ctx->pc = 0x1DC748u;
    // 0x1dc748: 0x8ea20054
    ctx->pc = 0x1dc748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dc74c: 0xc079ecc
    ctx->pc = 0x1DC74Cu;
    SET_GPR_U32(ctx, 31, 0x1DC754u);
    ctx->pc = 0x1DC750u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC754u; }
        else if (ctx->pc != 0x1DC754u) { ctx->pc = 0x1DC754u; }
    }
    if (ctx->pc != 0x1DC754u) { return; }
    ctx->pc = 0x1DC754u;
    // 0x1dc754: 0x0
    ctx->pc = 0x1dc754u;
    // NOP
    // 0x1dc758: 0x269400f0
    ctx->pc = 0x1dc758u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
label_1dc75c:
    // 0x1dc75c: 0x26730001
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1dc760:
    // 0x1dc760: 0x8ea30000
    ctx->pc = 0x1dc760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dc764: 0x263182a
    ctx->pc = 0x1dc764u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1dc768: 0x1460ffce
    ctx->pc = 0x1DC768u;
    {
        const bool branch_taken_0x1dc768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC76Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 3259));
        if (branch_taken_0x1dc768) {
            ctx->pc = 0x1DC6A4u;
            goto label_1dc6a4;
        }
    }
    ctx->pc = 0x1DC770u;
    // 0x1dc770: 0x3c030027
    ctx->pc = 0x1dc770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc774: 0x24638d58
    ctx->pc = 0x1dc774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937944));
    // 0x1dc778: 0xc4620000
    ctx->pc = 0x1dc778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc77c: 0xc4610004
    ctx->pc = 0x1dc77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc780: 0xc4600008
    ctx->pc = 0x1dc780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc784: 0xe6a20114
    ctx->pc = 0x1dc784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 276), bits); }
    // 0x1dc788: 0xe6a10118
    ctx->pc = 0x1dc788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x1dc78c: 0xe6a0011c
    ctx->pc = 0x1dc78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x1dc790: 0x7bbf0060
    ctx->pc = 0x1dc790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc794: 0x7bb50050
    ctx->pc = 0x1dc794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc798: 0x7bb40040
    ctx->pc = 0x1dc798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc79c: 0x7bb30030
    ctx->pc = 0x1dc79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc7a0: 0x7bb20020
    ctx->pc = 0x1dc7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc7a4: 0x7bb10010
    ctx->pc = 0x1dc7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc7a8: 0x7bb00000
    ctx->pc = 0x1dc7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc7ac: 0x3e00008
    ctx->pc = 0x1DC7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC6A4u: goto label_1dc6a4;
            case 0x1DC6E0u: goto label_1dc6e0;
            case 0x1DC70Cu: goto label_1dc70c;
            case 0x1DC728u: goto label_1dc728;
            case 0x1DC72Cu: goto label_1dc72c;
            case 0x1DC75Cu: goto label_1dc75c;
            case 0x1DC760u: goto label_1dc760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC7B4u;
}
