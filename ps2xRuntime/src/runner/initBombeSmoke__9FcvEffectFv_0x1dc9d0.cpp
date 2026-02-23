#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBombeSmoke__9FcvEffectFv
// Address: 0x1dc9d0 - 0x1dcacc
void initBombeSmoke__9FcvEffectFv_0x1dc9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBombeSmoke__9FcvEffectFv");


    ctx->pc = 0x1dc9d0u;

    // 0x1dc9d0: 0x27bdffb0
    ctx->pc = 0x1dc9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dc9d4: 0x7fbf0040
    ctx->pc = 0x1dc9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dc9d8: 0x7fb30030
    ctx->pc = 0x1dc9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc9dc: 0x7fb20020
    ctx->pc = 0x1dc9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc9e0: 0x7fb10010
    ctx->pc = 0x1dc9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc9e4: 0x70809628
    ctx->pc = 0x1dc9e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc9e8: 0x24050015
    ctx->pc = 0x1dc9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1dc9ec: 0xc0761c4
    ctx->pc = 0x1DC9ECu;
    SET_GPR_U32(ctx, 31, 0x1DC9F4u);
    ctx->pc = 0x1DC9F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9F4u; }
        else if (ctx->pc != 0x1DC9F4u) { ctx->pc = 0x1DC9F4u; }
    }
    if (ctx->pc != 0x1DC9F4u) { return; }
    ctx->pc = 0x1DC9F4u;
    // 0x1dc9f4: 0xae420054
    ctx->pc = 0x1dc9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dc9f8: 0x3c034248
    ctx->pc = 0x1dc9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16968 << 16));
    // 0x1dc9fc: 0xae430028
    ctx->pc = 0x1dc9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1dca00: 0x70008628
    ctx->pc = 0x1dca00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dca04: 0x1000001e
    ctx->pc = 0x1DCA04u;
    {
        const bool branch_taken_0x1dca04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCA08u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dca04) {
            ctx->pc = 0x1DCA80u;
            goto label_1dca80;
        }
    }
    ctx->pc = 0x1DCA0Cu;
label_1dca0c:
    // 0x1dca0c: 0xc07f208
    ctx->pc = 0x1DCA0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA14u);
    ctx->pc = 0x1DCA10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA14u; }
        else if (ctx->pc != 0x1DCA14u) { ctx->pc = 0x1DCA14u; }
    }
    if (ctx->pc != 0x1DCA14u) { return; }
    ctx->pc = 0x1DCA14u;
    // 0x1dca14: 0x2a010004
    ctx->pc = 0x1dca14u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1dca18: 0x1020000d
    ctx->pc = 0x1DCA18u;
    {
        const bool branch_taken_0x1dca18 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCA1Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dca18) {
            ctx->pc = 0x1DCA50u;
            goto label_1dca50;
        }
    }
    ctx->pc = 0x1DCA20u;
    // 0x1dca20: 0x27848d4c
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dca24: 0xc07f208
    ctx->pc = 0x1DCA24u;
    SET_GPR_U32(ctx, 31, 0x1DCA2Cu);
    ctx->pc = 0x1DCA28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5557));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA2Cu; }
        else if (ctx->pc != 0x1DCA2Cu) { ctx->pc = 0x1DCA2Cu; }
    }
    if (ctx->pc != 0x1DCA2Cu) { return; }
    ctx->pc = 0x1DCA2Cu;
    // 0x1dca2c: 0x8e440054
    ctx->pc = 0x1dca2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dca30: 0x3c030040
    ctx->pc = 0x1dca30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x1dca34: 0x72603628
    ctx->pc = 0x1dca34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dca38: 0x34650014
    ctx->pc = 0x1dca38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
    // 0x1dca3c: 0x70403e28
    ctx->pc = 0x1dca3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dca40: 0xc079e80
    ctx->pc = 0x1DCA40u;
    SET_GPR_U32(ctx, 31, 0x1DCA48u);
    ctx->pc = 0x1DCA44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA48u; }
        else if (ctx->pc != 0x1DCA48u) { ctx->pc = 0x1DCA48u; }
    }
    if (ctx->pc != 0x1DCA48u) { return; }
    ctx->pc = 0x1DCA48u;
    // 0x1dca48: 0x1000000c
    ctx->pc = 0x1DCA48u;
    {
        const bool branch_taken_0x1dca48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCA4Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dca48) {
            ctx->pc = 0x1DCA7Cu;
            goto label_1dca7c;
        }
    }
    ctx->pc = 0x1DCA50u;
label_1dca50:
    // 0x1dca50: 0x27848d4c
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dca54: 0xc07f208
    ctx->pc = 0x1DCA54u;
    SET_GPR_U32(ctx, 31, 0x1DCA5Cu);
    ctx->pc = 0x1DCA58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5558));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA5Cu; }
        else if (ctx->pc != 0x1DCA5Cu) { ctx->pc = 0x1DCA5Cu; }
    }
    if (ctx->pc != 0x1DCA5Cu) { return; }
    ctx->pc = 0x1DCA5Cu;
    // 0x1dca5c: 0x8e440054
    ctx->pc = 0x1dca5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dca60: 0x3c03001b
    ctx->pc = 0x1dca60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dca64: 0x72603628
    ctx->pc = 0x1dca64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dca68: 0x346500b3
    ctx->pc = 0x1dca68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1dca6c: 0x70403e28
    ctx->pc = 0x1dca6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dca70: 0xc079e80
    ctx->pc = 0x1DCA70u;
    SET_GPR_U32(ctx, 31, 0x1DCA78u);
    ctx->pc = 0x1DCA74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA78u; }
        else if (ctx->pc != 0x1DCA78u) { ctx->pc = 0x1DCA78u; }
    }
    if (ctx->pc != 0x1DCA78u) { return; }
    ctx->pc = 0x1DCA78u;
    // 0x1dca78: 0x263100f0
    ctx->pc = 0x1dca78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dca7c:
    // 0x1dca7c: 0x26100001
    ctx->pc = 0x1dca7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dca80:
    // 0x1dca80: 0x8e430000
    ctx->pc = 0x1dca80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dca84: 0x203182a
    ctx->pc = 0x1dca84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dca88: 0x1460ffe0
    ctx->pc = 0x1DCA88u;
    {
        const bool branch_taken_0x1dca88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCA8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5536));
        if (branch_taken_0x1dca88) {
            ctx->pc = 0x1DCA0Cu;
            goto label_1dca0c;
        }
    }
    ctx->pc = 0x1DCA90u;
    // 0x1dca90: 0x3c030027
    ctx->pc = 0x1dca90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dca94: 0x24638d88
    ctx->pc = 0x1dca94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937992));
    // 0x1dca98: 0xc4620000
    ctx->pc = 0x1dca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dca9c: 0xc4610004
    ctx->pc = 0x1dca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcaa0: 0xc4600008
    ctx->pc = 0x1dcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcaa4: 0xe6420114
    ctx->pc = 0x1dcaa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dcaa8: 0xe6410118
    ctx->pc = 0x1dcaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dcaac: 0xe640011c
    ctx->pc = 0x1dcaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dcab0: 0x7bbf0040
    ctx->pc = 0x1dcab0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcab4: 0x7bb30030
    ctx->pc = 0x1dcab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcab8: 0x7bb20020
    ctx->pc = 0x1dcab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcabc: 0x7bb10010
    ctx->pc = 0x1dcabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcac0: 0x7bb00000
    ctx->pc = 0x1dcac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcac4: 0x3e00008
    ctx->pc = 0x1DCAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCAC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCA0Cu: goto label_1dca0c;
            case 0x1DCA50u: goto label_1dca50;
            case 0x1DCA7Cu: goto label_1dca7c;
            case 0x1DCA80u: goto label_1dca80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCACCu;
}
