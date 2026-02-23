#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEneJumpKemu__9FcvEffectFv
// Address: 0x1da4d0 - 0x1da5c4
void initEneJumpKemu__9FcvEffectFv_0x1da4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEneJumpKemu__9FcvEffectFv");


    ctx->pc = 0x1da4d0u;

    // 0x1da4d0: 0x27bdffb0
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da4d4: 0x7fbf0040
    ctx->pc = 0x1da4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da4d8: 0x7fb30030
    ctx->pc = 0x1da4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da4dc: 0x7fb20020
    ctx->pc = 0x1da4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da4e0: 0x7fb10010
    ctx->pc = 0x1da4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da4e4: 0x70809e28
    ctx->pc = 0x1da4e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da4e8: 0x2405001e
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da4ec: 0xc0761c4
    ctx->pc = 0x1DA4ECu;
    SET_GPR_U32(ctx, 31, 0x1DA4F4u);
    ctx->pc = 0x1DA4F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4F4u; }
        else if (ctx->pc != 0x1DA4F4u) { ctx->pc = 0x1DA4F4u; }
    }
    if (ctx->pc != 0x1DA4F4u) { return; }
    ctx->pc = 0x1DA4F4u;
    // 0x1da4f4: 0xae620054
    ctx->pc = 0x1da4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da4f8: 0x3c024270
    ctx->pc = 0x1da4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1da4fc: 0xae620028
    ctx->pc = 0x1da4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da500: 0x27848d4c
    ctx->pc = 0x1da500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da504: 0xc07f208
    ctx->pc = 0x1DA504u;
    SET_GPR_U32(ctx, 31, 0x1DA50Cu);
    ctx->pc = 0x1DA508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 865));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA50Cu; }
        else if (ctx->pc != 0x1DA50Cu) { ctx->pc = 0x1DA50Cu; }
    }
    if (ctx->pc != 0x1DA50Cu) { return; }
    ctx->pc = 0x1DA50Cu;
    // 0x1da50c: 0x70408628
    ctx->pc = 0x1da50cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da510: 0x70008e28
    ctx->pc = 0x1da510u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da514: 0x10000018
    ctx->pc = 0x1DA514u;
    {
        const bool branch_taken_0x1da514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA518u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da514) {
            ctx->pc = 0x1DA578u;
            goto label_1da578;
        }
    }
    ctx->pc = 0x1DA51Cu;
label_1da51c:
    // 0x1da51c: 0xc07f208
    ctx->pc = 0x1DA51Cu;
    SET_GPR_U32(ctx, 31, 0x1DA524u);
    ctx->pc = 0x1DA520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA524u; }
        else if (ctx->pc != 0x1DA524u) { ctx->pc = 0x1DA524u; }
    }
    if (ctx->pc != 0x1DA524u) { return; }
    ctx->pc = 0x1DA524u;
    // 0x1da524: 0x8e640054
    ctx->pc = 0x1da524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da528: 0x3c03001b
    ctx->pc = 0x1da528u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da52c: 0x346500b3
    ctx->pc = 0x1da52cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da530: 0x70403628
    ctx->pc = 0x1da530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da534: 0x72003e28
    ctx->pc = 0x1da534u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da538: 0xc079e80
    ctx->pc = 0x1DA538u;
    SET_GPR_U32(ctx, 31, 0x1DA540u);
    ctx->pc = 0x1DA53Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA540u; }
        else if (ctx->pc != 0x1DA540u) { ctx->pc = 0x1DA540u; }
    }
    if (ctx->pc != 0x1DA540u) { return; }
    ctx->pc = 0x1DA540u;
    // 0x1da540: 0xc66c002c
    ctx->pc = 0x1da540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da544: 0x3c033f80
    ctx->pc = 0x1da544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da548: 0x44830000
    ctx->pc = 0x1da548u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da54c: 0x0
    ctx->pc = 0x1da54cu;
    // NOP
    // 0x1da550: 0x460c0032
    ctx->pc = 0x1da550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da554: 0x0
    ctx->pc = 0x1da554u;
    // NOP
    // 0x1da558: 0x45030006
    ctx->pc = 0x1DA558u;
    {
        const bool branch_taken_0x1da558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da558) {
            ctx->pc = 0x1DA55Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA574u;
            goto label_1da574;
        }
    }
    ctx->pc = 0x1DA560u;
    // 0x1da560: 0x8e620054
    ctx->pc = 0x1da560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da564: 0xc079ecc
    ctx->pc = 0x1DA564u;
    SET_GPR_U32(ctx, 31, 0x1DA56Cu);
    ctx->pc = 0x1DA568u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA56Cu; }
        else if (ctx->pc != 0x1DA56Cu) { ctx->pc = 0x1DA56Cu; }
    }
    if (ctx->pc != 0x1DA56Cu) { return; }
    ctx->pc = 0x1DA56Cu;
    // 0x1da56c: 0x0
    ctx->pc = 0x1da56cu;
    // NOP
    // 0x1da570: 0x265200f0
    ctx->pc = 0x1da570u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da574:
    // 0x1da574: 0x26310001
    ctx->pc = 0x1da574u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da578:
    // 0x1da578: 0x8e630000
    ctx->pc = 0x1da578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da57c: 0x223182a
    ctx->pc = 0x1da57cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da580: 0x1460ffe6
    ctx->pc = 0x1DA580u;
    {
        const bool branch_taken_0x1da580 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA584u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 835));
        if (branch_taken_0x1da580) {
            ctx->pc = 0x1DA51Cu;
            goto label_1da51c;
        }
    }
    ctx->pc = 0x1DA588u;
    // 0x1da588: 0x3c030027
    ctx->pc = 0x1da588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da58c: 0x24638b88
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937480));
    // 0x1da590: 0xc4620000
    ctx->pc = 0x1da590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da594: 0xc4610004
    ctx->pc = 0x1da594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da598: 0xc4600008
    ctx->pc = 0x1da598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da59c: 0xe6620114
    ctx->pc = 0x1da59cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da5a0: 0xe6610118
    ctx->pc = 0x1da5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da5a4: 0xe660011c
    ctx->pc = 0x1da5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da5a8: 0x7bbf0040
    ctx->pc = 0x1da5a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da5ac: 0x7bb30030
    ctx->pc = 0x1da5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da5b0: 0x7bb20020
    ctx->pc = 0x1da5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da5b4: 0x7bb10010
    ctx->pc = 0x1da5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da5b8: 0x7bb00000
    ctx->pc = 0x1da5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da5bc: 0x3e00008
    ctx->pc = 0x1DA5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA51Cu: goto label_1da51c;
            case 0x1DA574u: goto label_1da574;
            case 0x1DA578u: goto label_1da578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA5C4u;
}
