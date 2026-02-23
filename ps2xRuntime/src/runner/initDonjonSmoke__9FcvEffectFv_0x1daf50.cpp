#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initDonjonSmoke__9FcvEffectFv
// Address: 0x1daf50 - 0x1db0b4
void initDonjonSmoke__9FcvEffectFv_0x1daf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initDonjonSmoke__9FcvEffectFv");


    ctx->pc = 0x1daf50u;

    // 0x1daf50: 0x27bdffb0
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1daf54: 0x7fbf0040
    ctx->pc = 0x1daf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1daf58: 0x7fb30030
    ctx->pc = 0x1daf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1daf5c: 0x7fb20020
    ctx->pc = 0x1daf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1daf60: 0x7fb10010
    ctx->pc = 0x1daf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1daf64: 0x7fb00000
    ctx->pc = 0x1daf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1daf68: 0x3c024339
    ctx->pc = 0x1daf68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17209 << 16));
    // 0x1daf6c: 0xac820028
    ctx->pc = 0x1daf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1daf70: 0x2405002f
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1daf74: 0x70809628
    ctx->pc = 0x1daf74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1daf78: 0xc0761c4
    ctx->pc = 0x1DAF78u;
    SET_GPR_U32(ctx, 31, 0x1DAF80u);
    ctx->pc = 0x1DAF7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF80u; }
        else if (ctx->pc != 0x1DAF80u) { ctx->pc = 0x1DAF80u; }
    }
    if (ctx->pc != 0x1DAF80u) { return; }
    ctx->pc = 0x1DAF80u;
    // 0x1daf80: 0xae420058
    ctx->pc = 0x1daf80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1daf84: 0x24050033
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    // 0x1daf88: 0xae450008
    ctx->pc = 0x1daf88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x1daf8c: 0xc0761c4
    ctx->pc = 0x1DAF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF94u);
    ctx->pc = 0x1DAF90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF94u; }
        else if (ctx->pc != 0x1DAF94u) { ctx->pc = 0x1DAF94u; }
    }
    if (ctx->pc != 0x1DAF94u) { return; }
    ctx->pc = 0x1DAF94u;
    // 0x1daf94: 0xae42005c
    ctx->pc = 0x1daf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1daf98: 0x70008628
    ctx->pc = 0x1daf98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1daf9c: 0x10000016
    ctx->pc = 0x1DAF9Cu;
    {
        const bool branch_taken_0x1daf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAFA0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1daf9c) {
            ctx->pc = 0x1DAFF8u;
            goto label_1daff8;
        }
    }
    ctx->pc = 0x1DAFA4u;
label_1dafa4:
    // 0x1dafa4: 0xc07f208
    ctx->pc = 0x1DAFA4u;
    SET_GPR_U32(ctx, 31, 0x1DAFACu);
    ctx->pc = 0x1DAFA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFACu; }
        else if (ctx->pc != 0x1DAFACu) { ctx->pc = 0x1DAFACu; }
    }
    if (ctx->pc != 0x1DAFACu) { return; }
    ctx->pc = 0x1DAFACu;
    // 0x1dafac: 0x70409e28
    ctx->pc = 0x1dafacu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dafb0: 0x26051350
    ctx->pc = 0x1dafb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4944));
    // 0x1dafb4: 0xc07f208
    ctx->pc = 0x1DAFB4u;
    SET_GPR_U32(ctx, 31, 0x1DAFBCu);
    ctx->pc = 0x1DAFB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFBCu; }
        else if (ctx->pc != 0x1DAFBCu) { ctx->pc = 0x1DAFBCu; }
    }
    if (ctx->pc != 0x1DAFBCu) { return; }
    ctx->pc = 0x1DAFBCu;
    // 0x1dafbc: 0x8e430058
    ctx->pc = 0x1dafbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dafc0: 0x70403e28
    ctx->pc = 0x1dafc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dafc4: 0x3c02001b
    ctx->pc = 0x1dafc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1dafc8: 0x72603628
    ctx->pc = 0x1dafc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dafcc: 0x344500b3
    ctx->pc = 0x1dafccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1dafd0: 0xc079e80
    ctx->pc = 0x1DAFD0u;
    SET_GPR_U32(ctx, 31, 0x1DAFD8u);
    ctx->pc = 0x1DAFD4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFD8u; }
        else if (ctx->pc != 0x1DAFD8u) { ctx->pc = 0x1DAFD8u; }
    }
    if (ctx->pc != 0x1DAFD8u) { return; }
    ctx->pc = 0x1DAFD8u;
    // 0x1dafd8: 0x3c023f00
    ctx->pc = 0x1dafd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1dafdc: 0x44826000
    ctx->pc = 0x1dafdcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1dafe0: 0x8e420058
    ctx->pc = 0x1dafe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dafe4: 0xc079ea4
    ctx->pc = 0x1DAFE4u;
    SET_GPR_U32(ctx, 31, 0x1DAFECu);
    ctx->pc = 0x1DAFE8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFECu; }
        else if (ctx->pc != 0x1DAFECu) { ctx->pc = 0x1DAFECu; }
    }
    if (ctx->pc != 0x1DAFECu) { return; }
    ctx->pc = 0x1DAFECu;
    // 0x1dafec: 0x263100f0
    ctx->pc = 0x1dafecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1daff0: 0x26100001
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1daff4: 0x0
    ctx->pc = 0x1daff4u;
    // NOP
label_1daff8:
    // 0x1daff8: 0x8e430004
    ctx->pc = 0x1daff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1daffc: 0x203182a
    ctx->pc = 0x1daffcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db000: 0x1460ffe8
    ctx->pc = 0x1DB000u;
    {
        const bool branch_taken_0x1db000 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB004u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4897));
        if (branch_taken_0x1db000) {
            ctx->pc = 0x1DAFA4u;
            goto label_1dafa4;
        }
    }
    ctx->pc = 0x1DB008u;
    // 0x1db008: 0x70008e28
    ctx->pc = 0x1db008u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db00c: 0x10000016
    ctx->pc = 0x1DB00Cu;
    {
        const bool branch_taken_0x1db00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB010u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db00c) {
            ctx->pc = 0x1DB068u;
            goto label_1db068;
        }
    }
    ctx->pc = 0x1DB014u;
label_1db014:
    // 0x1db014: 0xc07f208
    ctx->pc = 0x1DB014u;
    SET_GPR_U32(ctx, 31, 0x1DB01Cu);
    ctx->pc = 0x1DB018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB01Cu; }
        else if (ctx->pc != 0x1DB01Cu) { ctx->pc = 0x1DB01Cu; }
    }
    if (ctx->pc != 0x1DB01Cu) { return; }
    ctx->pc = 0x1DB01Cu;
    // 0x1db01c: 0x70409e28
    ctx->pc = 0x1db01cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db020: 0x262513b2
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 5042));
    // 0x1db024: 0xc07f208
    ctx->pc = 0x1DB024u;
    SET_GPR_U32(ctx, 31, 0x1DB02Cu);
    ctx->pc = 0x1DB028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB02Cu; }
        else if (ctx->pc != 0x1DB02Cu) { ctx->pc = 0x1DB02Cu; }
    }
    if (ctx->pc != 0x1DB02Cu) { return; }
    ctx->pc = 0x1DB02Cu;
    // 0x1db02c: 0x8e43005c
    ctx->pc = 0x1db02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1db030: 0x70403e28
    ctx->pc = 0x1db030u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db034: 0x3c02001b
    ctx->pc = 0x1db034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1db038: 0x72603628
    ctx->pc = 0x1db038u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db03c: 0x344500b3
    ctx->pc = 0x1db03cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 179));
    // 0x1db040: 0xc079e80
    ctx->pc = 0x1DB040u;
    SET_GPR_U32(ctx, 31, 0x1DB048u);
    ctx->pc = 0x1DB044u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB048u; }
        else if (ctx->pc != 0x1DB048u) { ctx->pc = 0x1DB048u; }
    }
    if (ctx->pc != 0x1DB048u) { return; }
    ctx->pc = 0x1DB048u;
    // 0x1db048: 0x3c023f00
    ctx->pc = 0x1db048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1db04c: 0x44826000
    ctx->pc = 0x1db04cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1db050: 0x8e42005c
    ctx->pc = 0x1db050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1db054: 0xc079ea4
    ctx->pc = 0x1DB054u;
    SET_GPR_U32(ctx, 31, 0x1DB05Cu);
    ctx->pc = 0x1DB058u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB05Cu; }
        else if (ctx->pc != 0x1DB05Cu) { ctx->pc = 0x1DB05Cu; }
    }
    if (ctx->pc != 0x1DB05Cu) { return; }
    ctx->pc = 0x1DB05Cu;
    // 0x1db05c: 0x261000f0
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
    // 0x1db060: 0x26310001
    ctx->pc = 0x1db060u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1db064: 0x0
    ctx->pc = 0x1db064u;
    // NOP
label_1db068:
    // 0x1db068: 0x8e430008
    ctx->pc = 0x1db068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1db06c: 0x223182a
    ctx->pc = 0x1db06cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1db070: 0x1460ffe8
    ctx->pc = 0x1DB070u;
    {
        const bool branch_taken_0x1db070 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB074u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4991));
        if (branch_taken_0x1db070) {
            ctx->pc = 0x1DB014u;
            goto label_1db014;
        }
    }
    ctx->pc = 0x1DB078u;
    // 0x1db078: 0x3c030027
    ctx->pc = 0x1db078u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db07c: 0x24638c18
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937624));
    // 0x1db080: 0xc4620000
    ctx->pc = 0x1db080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db084: 0xc4610004
    ctx->pc = 0x1db084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db088: 0xc4600008
    ctx->pc = 0x1db088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db08c: 0xe6420114
    ctx->pc = 0x1db08cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db090: 0xe6410118
    ctx->pc = 0x1db090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db094: 0xe640011c
    ctx->pc = 0x1db094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db098: 0x7bbf0040
    ctx->pc = 0x1db098u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db09c: 0x7bb30030
    ctx->pc = 0x1db09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db0a0: 0x7bb20020
    ctx->pc = 0x1db0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db0a4: 0x7bb10010
    ctx->pc = 0x1db0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db0a8: 0x7bb00000
    ctx->pc = 0x1db0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db0ac: 0x3e00008
    ctx->pc = 0x1DB0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB0B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAFA4u: goto label_1dafa4;
            case 0x1DAFF8u: goto label_1daff8;
            case 0x1DB014u: goto label_1db014;
            case 0x1DB068u: goto label_1db068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB0B4u;
}
