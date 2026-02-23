#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initNikunome__9FcvEffectFv
// Address: 0x1da9d0 - 0x1dab1c
void initNikunome__9FcvEffectFv_0x1da9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initNikunome__9FcvEffectFv");


    ctx->pc = 0x1da9d0u;

    // 0x1da9d0: 0x27bdffb0
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da9d4: 0x7fbf0040
    ctx->pc = 0x1da9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da9d8: 0x7fb30030
    ctx->pc = 0x1da9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da9dc: 0x7fb20020
    ctx->pc = 0x1da9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da9e0: 0x7fb10010
    ctx->pc = 0x1da9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da9e4: 0x70809628
    ctx->pc = 0x1da9e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da9e8: 0x24050017
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1da9ec: 0xc0761c4
    ctx->pc = 0x1DA9ECu;
    SET_GPR_U32(ctx, 31, 0x1DA9F4u);
    ctx->pc = 0x1DA9F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9F4u; }
        else if (ctx->pc != 0x1DA9F4u) { ctx->pc = 0x1DA9F4u; }
    }
    if (ctx->pc != 0x1DA9F4u) { return; }
    ctx->pc = 0x1DA9F4u;
    // 0x1da9f4: 0xae420054
    ctx->pc = 0x1da9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1da9f8: 0x3c0341e0
    ctx->pc = 0x1da9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16864 << 16));
    // 0x1da9fc: 0xae430028
    ctx->pc = 0x1da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1daa00: 0x70008628
    ctx->pc = 0x1daa00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1daa04: 0x10000032
    ctx->pc = 0x1DAA04u;
    {
        const bool branch_taken_0x1daa04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAA08u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1daa04) {
            ctx->pc = 0x1DAAD0u;
            goto label_1daad0;
        }
    }
    ctx->pc = 0x1DAA0Cu;
label_1daa0c:
    // 0x1daa0c: 0xc07f208
    ctx->pc = 0x1DAA0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA14u);
    ctx->pc = 0x1DAA10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA14u; }
        else if (ctx->pc != 0x1DAA14u) { ctx->pc = 0x1DAA14u; }
    }
    if (ctx->pc != 0x1DAA14u) { return; }
    ctx->pc = 0x1DAA14u;
    // 0x1daa14: 0x70409e28
    ctx->pc = 0x1daa14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daa18: 0x27848d4c
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1daa1c: 0xc07f208
    ctx->pc = 0x1DAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA24u);
    ctx->pc = 0x1DAA20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7613));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA24u; }
        else if (ctx->pc != 0x1DAA24u) { ctx->pc = 0x1DAA24u; }
    }
    if (ctx->pc != 0x1DAA24u) { return; }
    ctx->pc = 0x1DAA24u;
    // 0x1daa24: 0x2a010015
    ctx->pc = 0x1daa24u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 21));
    // 0x1daa28: 0x10200015
    ctx->pc = 0x1DAA28u;
    {
        const bool branch_taken_0x1daa28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daa28) {
            ctx->pc = 0x1DAA80u;
            goto label_1daa80;
        }
    }
    ctx->pc = 0x1DAA30u;
    // 0x1daa30: 0x8e440054
    ctx->pc = 0x1daa30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1daa34: 0x3c03001b
    ctx->pc = 0x1daa34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1daa38: 0x72603628
    ctx->pc = 0x1daa38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1daa3c: 0x3465008a
    ctx->pc = 0x1daa3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 138));
    // 0x1daa40: 0x70403e28
    ctx->pc = 0x1daa40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daa44: 0xc079e80
    ctx->pc = 0x1DAA44u;
    SET_GPR_U32(ctx, 31, 0x1DAA4Cu);
    ctx->pc = 0x1DAA48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA4Cu; }
        else if (ctx->pc != 0x1DAA4Cu) { ctx->pc = 0x1DAA4Cu; }
    }
    if (ctx->pc != 0x1DAA4Cu) { return; }
    ctx->pc = 0x1DAA4Cu;
    // 0x1daa4c: 0xc64c002c
    ctx->pc = 0x1daa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1daa50: 0x3c033f80
    ctx->pc = 0x1daa50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1daa54: 0x44830000
    ctx->pc = 0x1daa54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1daa58: 0x0
    ctx->pc = 0x1daa58u;
    // NOP
    // 0x1daa5c: 0x460c0032
    ctx->pc = 0x1daa5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daa60: 0x0
    ctx->pc = 0x1daa60u;
    // NOP
    // 0x1daa64: 0x45030019
    ctx->pc = 0x1DAA64u;
    {
        const bool branch_taken_0x1daa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daa64) {
            ctx->pc = 0x1DAA68u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
            ctx->pc = 0x1DAACCu;
            goto label_1daacc;
        }
    }
    ctx->pc = 0x1DAA6Cu;
    // 0x1daa6c: 0x8e420054
    ctx->pc = 0x1daa6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1daa70: 0xc079ecc
    ctx->pc = 0x1DAA70u;
    SET_GPR_U32(ctx, 31, 0x1DAA78u);
    ctx->pc = 0x1DAA74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA78u; }
        else if (ctx->pc != 0x1DAA78u) { ctx->pc = 0x1DAA78u; }
    }
    if (ctx->pc != 0x1DAA78u) { return; }
    ctx->pc = 0x1DAA78u;
    // 0x1daa78: 0x10000013
    ctx->pc = 0x1DAA78u;
    {
        const bool branch_taken_0x1daa78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1daa78) {
            ctx->pc = 0x1DAAC8u;
            goto label_1daac8;
        }
    }
    ctx->pc = 0x1DAA80u;
label_1daa80:
    // 0x1daa80: 0x8e440054
    ctx->pc = 0x1daa80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1daa84: 0x3c03001b
    ctx->pc = 0x1daa84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1daa88: 0x72603628
    ctx->pc = 0x1daa88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1daa8c: 0x34650089
    ctx->pc = 0x1daa8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 137));
    // 0x1daa90: 0x70403e28
    ctx->pc = 0x1daa90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daa94: 0xc079e80
    ctx->pc = 0x1DAA94u;
    SET_GPR_U32(ctx, 31, 0x1DAA9Cu);
    ctx->pc = 0x1DAA98u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA9Cu; }
        else if (ctx->pc != 0x1DAA9Cu) { ctx->pc = 0x1DAA9Cu; }
    }
    if (ctx->pc != 0x1DAA9Cu) { return; }
    ctx->pc = 0x1DAA9Cu;
    // 0x1daa9c: 0xc64c002c
    ctx->pc = 0x1daa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1daaa0: 0x3c033f80
    ctx->pc = 0x1daaa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1daaa4: 0x44830000
    ctx->pc = 0x1daaa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1daaa8: 0x0
    ctx->pc = 0x1daaa8u;
    // NOP
    // 0x1daaac: 0x460c0032
    ctx->pc = 0x1daaacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daab0: 0x0
    ctx->pc = 0x1daab0u;
    // NOP
    // 0x1daab4: 0x45010004
    ctx->pc = 0x1DAAB4u;
    {
        const bool branch_taken_0x1daab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daab4) {
            ctx->pc = 0x1DAAC8u;
            goto label_1daac8;
        }
    }
    ctx->pc = 0x1DAABCu;
    // 0x1daabc: 0x8e420054
    ctx->pc = 0x1daabcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1daac0: 0xc079ecc
    ctx->pc = 0x1DAAC0u;
    SET_GPR_U32(ctx, 31, 0x1DAAC8u);
    ctx->pc = 0x1DAAC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAAC8u; }
        else if (ctx->pc != 0x1DAAC8u) { ctx->pc = 0x1DAAC8u; }
    }
    if (ctx->pc != 0x1DAAC8u) { return; }
    ctx->pc = 0x1DAAC8u;
label_1daac8:
    // 0x1daac8: 0x263100f0
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1daacc:
    // 0x1daacc: 0x26100001
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1daad0:
    // 0x1daad0: 0x8e430000
    ctx->pc = 0x1daad0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1daad4: 0x203182a
    ctx->pc = 0x1daad4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1daad8: 0x1460ffcc
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DAADCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7590));
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAA0Cu;
            goto label_1daa0c;
        }
    }
    ctx->pc = 0x1DAAE0u;
    // 0x1daae0: 0x3c030027
    ctx->pc = 0x1daae0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1daae4: 0x24638bd8
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937560));
    // 0x1daae8: 0xc4620000
    ctx->pc = 0x1daae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1daaec: 0xc4610004
    ctx->pc = 0x1daaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daaf0: 0xc4600008
    ctx->pc = 0x1daaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daaf4: 0xe6420114
    ctx->pc = 0x1daaf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1daaf8: 0xe6410118
    ctx->pc = 0x1daaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1daafc: 0xe640011c
    ctx->pc = 0x1daafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dab00: 0x7bbf0040
    ctx->pc = 0x1dab00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dab04: 0x7bb30030
    ctx->pc = 0x1dab04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dab08: 0x7bb20020
    ctx->pc = 0x1dab08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dab0c: 0x7bb10010
    ctx->pc = 0x1dab0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dab10: 0x7bb00000
    ctx->pc = 0x1dab10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab14: 0x3e00008
    ctx->pc = 0x1DAB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAA0Cu: goto label_1daa0c;
            case 0x1DAA80u: goto label_1daa80;
            case 0x1DAAC8u: goto label_1daac8;
            case 0x1DAACCu: goto label_1daacc;
            case 0x1DAAD0u: goto label_1daad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DAB1Cu;
}
