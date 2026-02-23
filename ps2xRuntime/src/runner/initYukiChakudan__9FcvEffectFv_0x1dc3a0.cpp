#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initYukiChakudan__9FcvEffectFv
// Address: 0x1dc3a0 - 0x1dc494
void initYukiChakudan__9FcvEffectFv_0x1dc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initYukiChakudan__9FcvEffectFv");


    ctx->pc = 0x1dc3a0u;

    // 0x1dc3a0: 0x27bdffb0
    ctx->pc = 0x1dc3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dc3a4: 0x7fbf0040
    ctx->pc = 0x1dc3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dc3a8: 0x7fb30030
    ctx->pc = 0x1dc3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc3ac: 0x7fb20020
    ctx->pc = 0x1dc3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc3b0: 0x7fb10010
    ctx->pc = 0x1dc3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc3b4: 0x70809e28
    ctx->pc = 0x1dc3b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc3b8: 0x24050002
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc3bc: 0xc0761c4
    ctx->pc = 0x1DC3BCu;
    SET_GPR_U32(ctx, 31, 0x1DC3C4u);
    ctx->pc = 0x1DC3C0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3C4u; }
        else if (ctx->pc != 0x1DC3C4u) { ctx->pc = 0x1DC3C4u; }
    }
    if (ctx->pc != 0x1DC3C4u) { return; }
    ctx->pc = 0x1DC3C4u;
    // 0x1dc3c4: 0xae620054
    ctx->pc = 0x1dc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dc3c8: 0x3c0241a0
    ctx->pc = 0x1dc3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
    // 0x1dc3cc: 0xae620028
    ctx->pc = 0x1dc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dc3d0: 0x27848d4c
    ctx->pc = 0x1dc3d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc3d4: 0xc07f208
    ctx->pc = 0x1DC3D4u;
    SET_GPR_U32(ctx, 31, 0x1DC3DCu);
    ctx->pc = 0x1DC3D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6016));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3DCu; }
        else if (ctx->pc != 0x1DC3DCu) { ctx->pc = 0x1DC3DCu; }
    }
    if (ctx->pc != 0x1DC3DCu) { return; }
    ctx->pc = 0x1DC3DCu;
    // 0x1dc3dc: 0x70408628
    ctx->pc = 0x1dc3dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc3e0: 0x70008e28
    ctx->pc = 0x1dc3e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc3e4: 0x10000018
    ctx->pc = 0x1DC3E4u;
    {
        const bool branch_taken_0x1dc3e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC3E8u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc3e4) {
            ctx->pc = 0x1DC448u;
            goto label_1dc448;
        }
    }
    ctx->pc = 0x1DC3ECu;
label_1dc3ec:
    // 0x1dc3ec: 0xc07f208
    ctx->pc = 0x1DC3ECu;
    SET_GPR_U32(ctx, 31, 0x1DC3F4u);
    ctx->pc = 0x1DC3F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3F4u; }
        else if (ctx->pc != 0x1DC3F4u) { ctx->pc = 0x1DC3F4u; }
    }
    if (ctx->pc != 0x1DC3F4u) { return; }
    ctx->pc = 0x1DC3F4u;
    // 0x1dc3f4: 0x8e640054
    ctx->pc = 0x1dc3f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dc3f8: 0x3c03003a
    ctx->pc = 0x1dc3f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x1dc3fc: 0x34650032
    ctx->pc = 0x1dc3fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 50));
    // 0x1dc400: 0x70403628
    ctx->pc = 0x1dc400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc404: 0x72003e28
    ctx->pc = 0x1dc404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc408: 0xc079e80
    ctx->pc = 0x1DC408u;
    SET_GPR_U32(ctx, 31, 0x1DC410u);
    ctx->pc = 0x1DC40Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC410u; }
        else if (ctx->pc != 0x1DC410u) { ctx->pc = 0x1DC410u; }
    }
    if (ctx->pc != 0x1DC410u) { return; }
    ctx->pc = 0x1DC410u;
    // 0x1dc410: 0xc66c002c
    ctx->pc = 0x1dc410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc414: 0x3c033f80
    ctx->pc = 0x1dc414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dc418: 0x44830000
    ctx->pc = 0x1dc418u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dc41c: 0x0
    ctx->pc = 0x1dc41cu;
    // NOP
    // 0x1dc420: 0x460c0032
    ctx->pc = 0x1dc420u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc424: 0x0
    ctx->pc = 0x1dc424u;
    // NOP
    // 0x1dc428: 0x45030006
    ctx->pc = 0x1DC428u;
    {
        const bool branch_taken_0x1dc428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc428) {
            ctx->pc = 0x1DC42Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DC444u;
            goto label_1dc444;
        }
    }
    ctx->pc = 0x1DC430u;
    // 0x1dc430: 0x8e620054
    ctx->pc = 0x1dc430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dc434: 0xc079ecc
    ctx->pc = 0x1DC434u;
    SET_GPR_U32(ctx, 31, 0x1DC43Cu);
    ctx->pc = 0x1DC438u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC43Cu; }
        else if (ctx->pc != 0x1DC43Cu) { ctx->pc = 0x1DC43Cu; }
    }
    if (ctx->pc != 0x1DC43Cu) { return; }
    ctx->pc = 0x1DC43Cu;
    // 0x1dc43c: 0x0
    ctx->pc = 0x1dc43cu;
    // NOP
    // 0x1dc440: 0x265200f0
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dc444:
    // 0x1dc444: 0x26310001
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dc448:
    // 0x1dc448: 0x8e630000
    ctx->pc = 0x1dc448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc44c: 0x223182a
    ctx->pc = 0x1dc44cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dc450: 0x1460ffe6
    ctx->pc = 0x1DC450u;
    {
        const bool branch_taken_0x1dc450 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC454u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 6014));
        if (branch_taken_0x1dc450) {
            ctx->pc = 0x1DC3ECu;
            goto label_1dc3ec;
        }
    }
    ctx->pc = 0x1DC458u;
    // 0x1dc458: 0x3c030027
    ctx->pc = 0x1dc458u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc45c: 0x24638d38
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937912));
    // 0x1dc460: 0xc4620000
    ctx->pc = 0x1dc460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc464: 0xc4610004
    ctx->pc = 0x1dc464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc468: 0xc4600008
    ctx->pc = 0x1dc468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc46c: 0xe6620114
    ctx->pc = 0x1dc46cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1dc470: 0xe6610118
    ctx->pc = 0x1dc470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1dc474: 0xe660011c
    ctx->pc = 0x1dc474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1dc478: 0x7bbf0040
    ctx->pc = 0x1dc478u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc47c: 0x7bb30030
    ctx->pc = 0x1dc47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc480: 0x7bb20020
    ctx->pc = 0x1dc480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc484: 0x7bb10010
    ctx->pc = 0x1dc484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc488: 0x7bb00000
    ctx->pc = 0x1dc488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc48c: 0x3e00008
    ctx->pc = 0x1DC48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC3ECu: goto label_1dc3ec;
            case 0x1DC444u: goto label_1dc444;
            case 0x1DC448u: goto label_1dc448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC494u;
}
