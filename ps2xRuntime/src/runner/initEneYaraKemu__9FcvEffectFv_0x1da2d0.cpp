#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneYaraKemu__9FcvEffectFv
// Address: 0x1da2d0 - 0x1da3c4
void initEneYaraKemu__9FcvEffectFv_0x1da2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneYaraKemu__9FcvEffectFv");


    ctx->pc = 0x1da2d0u;

    // 0x1da2d0: 0x27bdffb0
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da2d4: 0x7fbf0040
    ctx->pc = 0x1da2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da2d8: 0x7fb30030
    ctx->pc = 0x1da2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da2dc: 0x7fb20020
    ctx->pc = 0x1da2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da2e0: 0x7fb10010
    ctx->pc = 0x1da2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da2e4: 0x70809e28
    ctx->pc = 0x1da2e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da2e8: 0x24050014
    ctx->pc = 0x1da2e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1da2ec: 0xc0761c4
    ctx->pc = 0x1DA2ECu;
    SET_GPR_U32(ctx, 31, 0x1DA2F4u);
    ctx->pc = 0x1DA2F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2F4u; }
        else if (ctx->pc != 0x1DA2F4u) { ctx->pc = 0x1DA2F4u; }
    }
    if (ctx->pc != 0x1DA2F4u) { return; }
    ctx->pc = 0x1DA2F4u;
    // 0x1da2f4: 0xae620054
    ctx->pc = 0x1da2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da2f8: 0x3c024248
    ctx->pc = 0x1da2f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1da2fc: 0xae620028
    ctx->pc = 0x1da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da300: 0x27848d4c
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da304: 0xc07f208
    ctx->pc = 0x1DA304u;
    SET_GPR_U32(ctx, 31, 0x1DA30Cu);
    ctx->pc = 0x1DA308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 918));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA30Cu; }
        else if (ctx->pc != 0x1DA30Cu) { ctx->pc = 0x1DA30Cu; }
    }
    if (ctx->pc != 0x1DA30Cu) { return; }
    ctx->pc = 0x1DA30Cu;
    // 0x1da30c: 0x70408628
    ctx->pc = 0x1da30cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da310: 0x70008e28
    ctx->pc = 0x1da310u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da314: 0x10000018
    ctx->pc = 0x1DA314u;
    {
        const bool branch_taken_0x1da314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA318u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da314) {
            ctx->pc = 0x1DA378u;
            goto label_1da378;
        }
    }
    ctx->pc = 0x1DA31Cu;
label_1da31c:
    // 0x1da31c: 0xc07f208
    ctx->pc = 0x1DA31Cu;
    SET_GPR_U32(ctx, 31, 0x1DA324u);
    ctx->pc = 0x1DA320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA324u; }
        else if (ctx->pc != 0x1DA324u) { ctx->pc = 0x1DA324u; }
    }
    if (ctx->pc != 0x1DA324u) { return; }
    ctx->pc = 0x1DA324u;
    // 0x1da324: 0x8e640054
    ctx->pc = 0x1da324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da328: 0x3c03001b
    ctx->pc = 0x1da328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da32c: 0x346500b3
    ctx->pc = 0x1da32cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da330: 0x70403628
    ctx->pc = 0x1da330u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da334: 0x72003e28
    ctx->pc = 0x1da334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da338: 0xc079e80
    ctx->pc = 0x1DA338u;
    SET_GPR_U32(ctx, 31, 0x1DA340u);
    ctx->pc = 0x1DA33Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA340u; }
        else if (ctx->pc != 0x1DA340u) { ctx->pc = 0x1DA340u; }
    }
    if (ctx->pc != 0x1DA340u) { return; }
    ctx->pc = 0x1DA340u;
    // 0x1da340: 0xc66c002c
    ctx->pc = 0x1da340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da344: 0x3c033f80
    ctx->pc = 0x1da344u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da348: 0x44830000
    ctx->pc = 0x1da348u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da34c: 0x0
    ctx->pc = 0x1da34cu;
    // NOP
    // 0x1da350: 0x460c0032
    ctx->pc = 0x1da350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da354: 0x0
    ctx->pc = 0x1da354u;
    // NOP
    // 0x1da358: 0x45030006
    ctx->pc = 0x1DA358u;
    {
        const bool branch_taken_0x1da358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da358) {
            ctx->pc = 0x1DA35Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA374u;
            goto label_1da374;
        }
    }
    ctx->pc = 0x1DA360u;
    // 0x1da360: 0x8e620054
    ctx->pc = 0x1da360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da364: 0xc079ecc
    ctx->pc = 0x1DA364u;
    SET_GPR_U32(ctx, 31, 0x1DA36Cu);
    ctx->pc = 0x1DA368u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA36Cu; }
        else if (ctx->pc != 0x1DA36Cu) { ctx->pc = 0x1DA36Cu; }
    }
    if (ctx->pc != 0x1DA36Cu) { return; }
    ctx->pc = 0x1DA36Cu;
    // 0x1da36c: 0x0
    ctx->pc = 0x1da36cu;
    // NOP
    // 0x1da370: 0x265200f0
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da374:
    // 0x1da374: 0x26310001
    ctx->pc = 0x1da374u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da378:
    // 0x1da378: 0x8e630000
    ctx->pc = 0x1da378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da37c: 0x223182a
    ctx->pc = 0x1da37cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da380: 0x1460ffe6
    ctx->pc = 0x1DA380u;
    {
        const bool branch_taken_0x1da380 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA384u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 898));
        if (branch_taken_0x1da380) {
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA388u;
    // 0x1da388: 0x3c030027
    ctx->pc = 0x1da388u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da38c: 0x24638b68
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937448));
    // 0x1da390: 0xc4620000
    ctx->pc = 0x1da390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da394: 0xc4610004
    ctx->pc = 0x1da394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da398: 0xc4600008
    ctx->pc = 0x1da398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da39c: 0xe6620114
    ctx->pc = 0x1da39cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da3a0: 0xe6610118
    ctx->pc = 0x1da3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da3a4: 0xe660011c
    ctx->pc = 0x1da3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da3a8: 0x7bbf0040
    ctx->pc = 0x1da3a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da3ac: 0x7bb30030
    ctx->pc = 0x1da3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da3b0: 0x7bb20020
    ctx->pc = 0x1da3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da3b4: 0x7bb10010
    ctx->pc = 0x1da3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da3b8: 0x7bb00000
    ctx->pc = 0x1da3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da3bc: 0x3e00008
    ctx->pc = 0x1DA3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA3C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA31Cu: goto label_1da31c;
            case 0x1DA374u: goto label_1da374;
            case 0x1DA378u: goto label_1da378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA3C4u;
}
