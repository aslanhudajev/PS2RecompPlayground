#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEMageBallLoop__9FcvEffectFv
// Address: 0x1dc7c0 - 0x1dc8c8
void initEMageBallLoop__9FcvEffectFv_0x1dc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEMageBallLoop__9FcvEffectFv");


    ctx->pc = 0x1dc7c0u;

    // 0x1dc7c0: 0x27bdffc0
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dc7c4: 0x7fbf0030
    ctx->pc = 0x1dc7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dc7c8: 0x7fb20020
    ctx->pc = 0x1dc7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc7cc: 0x7fb10010
    ctx->pc = 0x1dc7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc7d0: 0x70809628
    ctx->pc = 0x1dc7d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc7d4: 0x24050008
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dc7d8: 0xc0761c4
    ctx->pc = 0x1DC7D8u;
    SET_GPR_U32(ctx, 31, 0x1DC7E0u);
    ctx->pc = 0x1DC7DCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7E0u; }
        else if (ctx->pc != 0x1DC7E0u) { ctx->pc = 0x1DC7E0u; }
    }
    if (ctx->pc != 0x1DC7E0u) { return; }
    ctx->pc = 0x1DC7E0u;
    // 0x1dc7e0: 0xae420054
    ctx->pc = 0x1dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dc7e4: 0x3c034200
    ctx->pc = 0x1dc7e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16896 << 16));
    // 0x1dc7e8: 0xae430028
    ctx->pc = 0x1dc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1dc7ec: 0x70008628
    ctx->pc = 0x1dc7ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc7f0: 0x10000023
    ctx->pc = 0x1DC7F0u;
    {
        const bool branch_taken_0x1dc7f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC7F4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc7f0) {
            ctx->pc = 0x1DC880u;
            goto label_1dc880;
        }
    }
    ctx->pc = 0x1DC7F8u;
label_1dc7f8:
    // 0x1dc7f8: 0xc07f208
    ctx->pc = 0x1DC7F8u;
    SET_GPR_U32(ctx, 31, 0x1DC800u);
    ctx->pc = 0x1DC7FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC800u; }
        else if (ctx->pc != 0x1DC800u) { ctx->pc = 0x1DC800u; }
    }
    if (ctx->pc != 0x1DC800u) { return; }
    ctx->pc = 0x1DC800u;
    // 0x1dc800: 0x24030003
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc804: 0x1603000a
    ctx->pc = 0x1DC804u;
    {
        const bool branch_taken_0x1dc804 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dc804) {
            ctx->pc = 0x1DC830u;
            goto label_1dc830;
        }
    }
    ctx->pc = 0x1DC80Cu;
    // 0x1dc80c: 0x8e440054
    ctx->pc = 0x1dc80cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dc810: 0x3c030028
    ctx->pc = 0x1dc810u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1dc814: 0x34650015
    ctx->pc = 0x1dc814u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
    // 0x1dc818: 0x70403628
    ctx->pc = 0x1dc818u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc81c: 0x70003e28
    ctx->pc = 0x1dc81cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc820: 0xc079e80
    ctx->pc = 0x1DC820u;
    SET_GPR_U32(ctx, 31, 0x1DC828u);
    ctx->pc = 0x1DC824u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC828u; }
        else if (ctx->pc != 0x1DC828u) { ctx->pc = 0x1DC828u; }
    }
    if (ctx->pc != 0x1DC828u) { return; }
    ctx->pc = 0x1DC828u;
    // 0x1dc828: 0x10000008
    ctx->pc = 0x1DC828u;
    {
        const bool branch_taken_0x1dc828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC82Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dc828) {
            ctx->pc = 0x1DC84Cu;
            goto label_1dc84c;
        }
    }
    ctx->pc = 0x1DC830u;
label_1dc830:
    // 0x1dc830: 0x8e430054
    ctx->pc = 0x1dc830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dc834: 0x70002e28
    ctx->pc = 0x1dc834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc838: 0x70403628
    ctx->pc = 0x1dc838u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc83c: 0x70003e28
    ctx->pc = 0x1dc83cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc840: 0xc079e80
    ctx->pc = 0x1DC840u;
    SET_GPR_U32(ctx, 31, 0x1DC848u);
    ctx->pc = 0x1DC844u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC848u; }
        else if (ctx->pc != 0x1DC848u) { ctx->pc = 0x1DC848u; }
    }
    if (ctx->pc != 0x1DC848u) { return; }
    ctx->pc = 0x1DC848u;
    // 0x1dc848: 0xc64c002c
    ctx->pc = 0x1dc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dc84c:
    // 0x1dc84c: 0x3c033f80
    ctx->pc = 0x1dc84cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dc850: 0x44830000
    ctx->pc = 0x1dc850u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dc854: 0x0
    ctx->pc = 0x1dc854u;
    // NOP
    // 0x1dc858: 0x460c0032
    ctx->pc = 0x1dc858u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc85c: 0x0
    ctx->pc = 0x1dc85cu;
    // NOP
    // 0x1dc860: 0x45030006
    ctx->pc = 0x1DC860u;
    {
        const bool branch_taken_0x1dc860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc860) {
            ctx->pc = 0x1DC864u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
            ctx->pc = 0x1DC87Cu;
            goto label_1dc87c;
        }
    }
    ctx->pc = 0x1DC868u;
    // 0x1dc868: 0x8e420054
    ctx->pc = 0x1dc868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dc86c: 0xc079ecc
    ctx->pc = 0x1DC86Cu;
    SET_GPR_U32(ctx, 31, 0x1DC874u);
    ctx->pc = 0x1DC870u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC874u; }
        else if (ctx->pc != 0x1DC874u) { ctx->pc = 0x1DC874u; }
    }
    if (ctx->pc != 0x1DC874u) { return; }
    ctx->pc = 0x1DC874u;
    // 0x1dc874: 0x0
    ctx->pc = 0x1dc874u;
    // NOP
    // 0x1dc878: 0x263100f0
    ctx->pc = 0x1dc878u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dc87c:
    // 0x1dc87c: 0x26100001
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dc880:
    // 0x1dc880: 0x8e430000
    ctx->pc = 0x1dc880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc884: 0x203182a
    ctx->pc = 0x1dc884u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dc888: 0x1460ffdb
    ctx->pc = 0x1DC888u;
    {
        const bool branch_taken_0x1dc888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC88Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3738));
        if (branch_taken_0x1dc888) {
            ctx->pc = 0x1DC7F8u;
            goto label_1dc7f8;
        }
    }
    ctx->pc = 0x1DC890u;
    // 0x1dc890: 0x3c030027
    ctx->pc = 0x1dc890u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc894: 0x24638d68
    ctx->pc = 0x1dc894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937960));
    // 0x1dc898: 0xc4620000
    ctx->pc = 0x1dc898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc89c: 0xc4610004
    ctx->pc = 0x1dc89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc8a0: 0xc4600008
    ctx->pc = 0x1dc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8a4: 0xe6420114
    ctx->pc = 0x1dc8a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dc8a8: 0xe6410118
    ctx->pc = 0x1dc8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dc8ac: 0xe640011c
    ctx->pc = 0x1dc8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dc8b0: 0x7bbf0030
    ctx->pc = 0x1dc8b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc8b4: 0x7bb20020
    ctx->pc = 0x1dc8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc8b8: 0x7bb10010
    ctx->pc = 0x1dc8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc8bc: 0x7bb00000
    ctx->pc = 0x1dc8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc8c0: 0x3e00008
    ctx->pc = 0x1DC8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC7F8u: goto label_1dc7f8;
            case 0x1DC830u: goto label_1dc830;
            case 0x1DC84Cu: goto label_1dc84c;
            case 0x1DC87Cu: goto label_1dc87c;
            case 0x1DC880u: goto label_1dc880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC8C8u;
}
