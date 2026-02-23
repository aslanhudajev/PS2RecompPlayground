#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneYaraKemu2__9FcvEffectFv
// Address: 0x1da3d0 - 0x1da4c4
void initEneYaraKemu2__9FcvEffectFv_0x1da3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneYaraKemu2__9FcvEffectFv");


    ctx->pc = 0x1da3d0u;

    // 0x1da3d0: 0x27bdffb0
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da3d4: 0x7fbf0040
    ctx->pc = 0x1da3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da3d8: 0x7fb30030
    ctx->pc = 0x1da3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da3dc: 0x7fb20020
    ctx->pc = 0x1da3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da3e0: 0x7fb10010
    ctx->pc = 0x1da3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da3e4: 0x70809e28
    ctx->pc = 0x1da3e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da3e8: 0x24050014
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1da3ec: 0xc0761c4
    ctx->pc = 0x1DA3ECu;
    SET_GPR_U32(ctx, 31, 0x1DA3F4u);
    ctx->pc = 0x1DA3F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3F4u; }
        else if (ctx->pc != 0x1DA3F4u) { ctx->pc = 0x1DA3F4u; }
    }
    if (ctx->pc != 0x1DA3F4u) { return; }
    ctx->pc = 0x1DA3F4u;
    // 0x1da3f4: 0xae620054
    ctx->pc = 0x1da3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da3f8: 0x3c024248
    ctx->pc = 0x1da3f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1da3fc: 0xae620028
    ctx->pc = 0x1da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da400: 0x27848d4c
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da404: 0xc07f208
    ctx->pc = 0x1DA404u;
    SET_GPR_U32(ctx, 31, 0x1DA40Cu);
    ctx->pc = 0x1DA408u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 918));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA40Cu; }
        else if (ctx->pc != 0x1DA40Cu) { ctx->pc = 0x1DA40Cu; }
    }
    if (ctx->pc != 0x1DA40Cu) { return; }
    ctx->pc = 0x1DA40Cu;
    // 0x1da40c: 0x70408628
    ctx->pc = 0x1da40cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da410: 0x70008e28
    ctx->pc = 0x1da410u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da414: 0x10000018
    ctx->pc = 0x1DA414u;
    {
        const bool branch_taken_0x1da414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA418u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da414) {
            ctx->pc = 0x1DA478u;
            goto label_1da478;
        }
    }
    ctx->pc = 0x1DA41Cu;
label_1da41c:
    // 0x1da41c: 0xc07f208
    ctx->pc = 0x1DA41Cu;
    SET_GPR_U32(ctx, 31, 0x1DA424u);
    ctx->pc = 0x1DA420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA424u; }
        else if (ctx->pc != 0x1DA424u) { ctx->pc = 0x1DA424u; }
    }
    if (ctx->pc != 0x1DA424u) { return; }
    ctx->pc = 0x1DA424u;
    // 0x1da424: 0x8e640054
    ctx->pc = 0x1da424u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da428: 0x3c03001b
    ctx->pc = 0x1da428u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da42c: 0x346500b3
    ctx->pc = 0x1da42cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da430: 0x70403628
    ctx->pc = 0x1da430u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da434: 0x72003e28
    ctx->pc = 0x1da434u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da438: 0xc079e80
    ctx->pc = 0x1DA438u;
    SET_GPR_U32(ctx, 31, 0x1DA440u);
    ctx->pc = 0x1DA43Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA440u; }
        else if (ctx->pc != 0x1DA440u) { ctx->pc = 0x1DA440u; }
    }
    if (ctx->pc != 0x1DA440u) { return; }
    ctx->pc = 0x1DA440u;
    // 0x1da440: 0xc66c002c
    ctx->pc = 0x1da440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da444: 0x3c033f80
    ctx->pc = 0x1da444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da448: 0x44830000
    ctx->pc = 0x1da448u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da44c: 0x0
    ctx->pc = 0x1da44cu;
    // NOP
    // 0x1da450: 0x460c0032
    ctx->pc = 0x1da450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da454: 0x0
    ctx->pc = 0x1da454u;
    // NOP
    // 0x1da458: 0x45030006
    ctx->pc = 0x1DA458u;
    {
        const bool branch_taken_0x1da458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da458) {
            ctx->pc = 0x1DA45Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA474u;
            goto label_1da474;
        }
    }
    ctx->pc = 0x1DA460u;
    // 0x1da460: 0x8e620054
    ctx->pc = 0x1da460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da464: 0xc079ecc
    ctx->pc = 0x1DA464u;
    SET_GPR_U32(ctx, 31, 0x1DA46Cu);
    ctx->pc = 0x1DA468u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA46Cu; }
        else if (ctx->pc != 0x1DA46Cu) { ctx->pc = 0x1DA46Cu; }
    }
    if (ctx->pc != 0x1DA46Cu) { return; }
    ctx->pc = 0x1DA46Cu;
    // 0x1da46c: 0x0
    ctx->pc = 0x1da46cu;
    // NOP
    // 0x1da470: 0x265200f0
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da474:
    // 0x1da474: 0x26310001
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da478:
    // 0x1da478: 0x8e630000
    ctx->pc = 0x1da478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da47c: 0x223182a
    ctx->pc = 0x1da47cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da480: 0x1460ffe6
    ctx->pc = 0x1DA480u;
    {
        const bool branch_taken_0x1da480 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA484u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 898));
        if (branch_taken_0x1da480) {
            ctx->pc = 0x1DA41Cu;
            goto label_1da41c;
        }
    }
    ctx->pc = 0x1DA488u;
    // 0x1da488: 0x3c030027
    ctx->pc = 0x1da488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da48c: 0x24638b78
    ctx->pc = 0x1da48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937464));
    // 0x1da490: 0xc4620000
    ctx->pc = 0x1da490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da494: 0xc4610004
    ctx->pc = 0x1da494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da498: 0xc4600008
    ctx->pc = 0x1da498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da49c: 0xe6620114
    ctx->pc = 0x1da49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da4a0: 0xe6610118
    ctx->pc = 0x1da4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da4a4: 0xe660011c
    ctx->pc = 0x1da4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da4a8: 0x7bbf0040
    ctx->pc = 0x1da4a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da4ac: 0x7bb30030
    ctx->pc = 0x1da4acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da4b0: 0x7bb20020
    ctx->pc = 0x1da4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da4b4: 0x7bb10010
    ctx->pc = 0x1da4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da4b8: 0x7bb00000
    ctx->pc = 0x1da4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da4bc: 0x3e00008
    ctx->pc = 0x1DA4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA41Cu: goto label_1da41c;
            case 0x1DA474u: goto label_1da474;
            case 0x1DA478u: goto label_1da478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA4C4u;
}
