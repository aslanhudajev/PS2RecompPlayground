#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5Cons__9FcvEffectFv
// Address: 0x1dda10 - 0x1ddad4
void initBoss5Cons__9FcvEffectFv_0x1dda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5Cons__9FcvEffectFv");


    ctx->pc = 0x1dda10u;

    // 0x1dda10: 0x27bdffb0
    ctx->pc = 0x1dda10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dda14: 0x7fbf0040
    ctx->pc = 0x1dda14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dda18: 0x7fb30030
    ctx->pc = 0x1dda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dda1c: 0x7fb20020
    ctx->pc = 0x1dda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dda20: 0x7fb10010
    ctx->pc = 0x1dda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dda24: 0x70809e28
    ctx->pc = 0x1dda24u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dda28: 0x24050010
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dda2c: 0xc0761c4
    ctx->pc = 0x1DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA34u);
    ctx->pc = 0x1DDA30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA34u; }
        else if (ctx->pc != 0x1DDA34u) { ctx->pc = 0x1DDA34u; }
    }
    if (ctx->pc != 0x1DDA34u) { return; }
    ctx->pc = 0x1DDA34u;
    // 0x1dda34: 0xae620054
    ctx->pc = 0x1dda34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dda38: 0x3c0241c0
    ctx->pc = 0x1dda38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16832 << 16));
    // 0x1dda3c: 0xae620028
    ctx->pc = 0x1dda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dda40: 0x27848d4c
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dda44: 0xc07f208
    ctx->pc = 0x1DDA44u;
    SET_GPR_U32(ctx, 31, 0x1DDA4Cu);
    ctx->pc = 0x1DDA48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2550));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA4Cu; }
        else if (ctx->pc != 0x1DDA4Cu) { ctx->pc = 0x1DDA4Cu; }
    }
    if (ctx->pc != 0x1DDA4Cu) { return; }
    ctx->pc = 0x1DDA4Cu;
    // 0x1dda4c: 0x70408628
    ctx->pc = 0x1dda4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dda50: 0x70008e28
    ctx->pc = 0x1dda50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dda54: 0x1000000c
    ctx->pc = 0x1DDA54u;
    {
        const bool branch_taken_0x1dda54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDA58u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dda54) {
            ctx->pc = 0x1DDA88u;
            goto label_1dda88;
        }
    }
    ctx->pc = 0x1DDA5Cu;
label_1dda5c:
    // 0x1dda5c: 0xc07f208
    ctx->pc = 0x1DDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA64u);
    ctx->pc = 0x1DDA60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA64u; }
        else if (ctx->pc != 0x1DDA64u) { ctx->pc = 0x1DDA64u; }
    }
    if (ctx->pc != 0x1DDA64u) { return; }
    ctx->pc = 0x1DDA64u;
    // 0x1dda64: 0x8e640054
    ctx->pc = 0x1dda64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dda68: 0x3c03001b
    ctx->pc = 0x1dda68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dda6c: 0x34650069
    ctx->pc = 0x1dda6cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 105));
    // 0x1dda70: 0x70403628
    ctx->pc = 0x1dda70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dda74: 0x72003e28
    ctx->pc = 0x1dda74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dda78: 0xc079e80
    ctx->pc = 0x1DDA78u;
    SET_GPR_U32(ctx, 31, 0x1DDA80u);
    ctx->pc = 0x1DDA7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA80u; }
        else if (ctx->pc != 0x1DDA80u) { ctx->pc = 0x1DDA80u; }
    }
    if (ctx->pc != 0x1DDA80u) { return; }
    ctx->pc = 0x1DDA80u;
    // 0x1dda80: 0x265200f0
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1dda84: 0x26310001
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dda88:
    // 0x1dda88: 0x8e630000
    ctx->pc = 0x1dda88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dda8c: 0x223182a
    ctx->pc = 0x1dda8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dda90: 0x1460fff2
    ctx->pc = 0x1DDA90u;
    {
        const bool branch_taken_0x1dda90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DDA94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 2534));
        if (branch_taken_0x1dda90) {
            ctx->pc = 0x1DDA5Cu;
            goto label_1dda5c;
        }
    }
    ctx->pc = 0x1DDA98u;
    // 0x1dda98: 0x3c030027
    ctx->pc = 0x1dda98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dda9c: 0x246396f8
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940408));
    // 0x1ddaa0: 0xc4620000
    ctx->pc = 0x1ddaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddaa4: 0xc4610004
    ctx->pc = 0x1ddaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddaa8: 0xc4600008
    ctx->pc = 0x1ddaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddaac: 0xe6620114
    ctx->pc = 0x1ddaacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1ddab0: 0xe6610118
    ctx->pc = 0x1ddab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1ddab4: 0xe660011c
    ctx->pc = 0x1ddab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1ddab8: 0x7bbf0040
    ctx->pc = 0x1ddab8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddabc: 0x7bb30030
    ctx->pc = 0x1ddabcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddac0: 0x7bb20020
    ctx->pc = 0x1ddac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddac4: 0x7bb10010
    ctx->pc = 0x1ddac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddac8: 0x7bb00000
    ctx->pc = 0x1ddac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddacc: 0x3e00008
    ctx->pc = 0x1DDACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDA5Cu: goto label_1dda5c;
            case 0x1DDA88u: goto label_1dda88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDAD4u;
}
