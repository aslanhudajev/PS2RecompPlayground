#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt1EneJump__9FcvEffectFv
// Address: 0x1db920 - 0x1dba60
void initSt1EneJump__9FcvEffectFv_0x1db920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt1EneJump__9FcvEffectFv");


    ctx->pc = 0x1db920u;

    // 0x1db920: 0x27bdffa0
    ctx->pc = 0x1db920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1db924: 0x7fbf0050
    ctx->pc = 0x1db924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1db928: 0x7fb40040
    ctx->pc = 0x1db928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1db92c: 0x7fb30030
    ctx->pc = 0x1db92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db930: 0x7fb20020
    ctx->pc = 0x1db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db934: 0x7fb10010
    ctx->pc = 0x1db934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db938: 0x7080a628
    ctx->pc = 0x1db938u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db93c: 0x24050029
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 41));
    // 0x1db940: 0xc0761c4
    ctx->pc = 0x1DB940u;
    SET_GPR_U32(ctx, 31, 0x1DB948u);
    ctx->pc = 0x1DB944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB948u; }
        else if (ctx->pc != 0x1DB948u) { ctx->pc = 0x1DB948u; }
    }
    if (ctx->pc != 0x1DB948u) { return; }
    ctx->pc = 0x1DB948u;
    // 0x1db948: 0xae820054
    ctx->pc = 0x1db948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1db94c: 0x3c0242b4
    ctx->pc = 0x1db94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17076 << 16));
    // 0x1db950: 0xae820028
    ctx->pc = 0x1db950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1db954: 0x27848d4c
    ctx->pc = 0x1db954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1db958: 0xc07f208
    ctx->pc = 0x1DB958u;
    SET_GPR_U32(ctx, 31, 0x1DB960u);
    ctx->pc = 0x1DB95Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4815));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB960u; }
        else if (ctx->pc != 0x1DB960u) { ctx->pc = 0x1DB960u; }
    }
    if (ctx->pc != 0x1DB960u) { return; }
    ctx->pc = 0x1DB960u;
    // 0x1db960: 0x70408628
    ctx->pc = 0x1db960u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db964: 0x27848d4c
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1db968: 0xc07f208
    ctx->pc = 0x1DB968u;
    SET_GPR_U32(ctx, 31, 0x1DB970u);
    ctx->pc = 0x1DB96Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4816));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB970u; }
        else if (ctx->pc != 0x1DB970u) { ctx->pc = 0x1DB970u; }
    }
    if (ctx->pc != 0x1DB970u) { return; }
    ctx->pc = 0x1DB970u;
    // 0x1db970: 0x70408e28
    ctx->pc = 0x1db970u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db974: 0x70009628
    ctx->pc = 0x1db974u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db978: 0x10000025
    ctx->pc = 0x1DB978u;
    {
        const bool branch_taken_0x1db978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB97Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db978) {
            ctx->pc = 0x1DBA10u;
            goto label_1dba10;
        }
    }
    ctx->pc = 0x1DB980u;
label_1db980:
    // 0x1db980: 0xc07f208
    ctx->pc = 0x1DB980u;
    SET_GPR_U32(ctx, 31, 0x1DB988u);
    ctx->pc = 0x1DB984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB988u; }
        else if (ctx->pc != 0x1DB988u) { ctx->pc = 0x1DB988u; }
    }
    if (ctx->pc != 0x1DB988u) { return; }
    ctx->pc = 0x1DB988u;
    // 0x1db988: 0x2a410008
    ctx->pc = 0x1db988u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 8));
    // 0x1db98c: 0x1020000b
    ctx->pc = 0x1DB98Cu;
    {
        const bool branch_taken_0x1db98c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB990u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 11));
        if (branch_taken_0x1db98c) {
            ctx->pc = 0x1DB9BCu;
            goto label_1db9bc;
        }
    }
    ctx->pc = 0x1DB994u;
    // 0x1db994: 0x8e840054
    ctx->pc = 0x1db994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1db998: 0x3c03001b
    ctx->pc = 0x1db998u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1db99c: 0x34650077
    ctx->pc = 0x1db99cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 119));
    // 0x1db9a0: 0x70403628
    ctx->pc = 0x1db9a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db9a4: 0x72003e28
    ctx->pc = 0x1db9a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1db9a8: 0xc079e80
    ctx->pc = 0x1DB9A8u;
    SET_GPR_U32(ctx, 31, 0x1DB9B0u);
    ctx->pc = 0x1DB9ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B0u; }
        else if (ctx->pc != 0x1DB9B0u) { ctx->pc = 0x1DB9B0u; }
    }
    if (ctx->pc != 0x1DB9B0u) { return; }
    ctx->pc = 0x1DB9B0u;
    // 0x1db9b0: 0x10000016
    ctx->pc = 0x1DB9B0u;
    {
        const bool branch_taken_0x1db9b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB9B4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
        if (branch_taken_0x1db9b0) {
            ctx->pc = 0x1DBA0Cu;
            goto label_1dba0c;
        }
    }
    ctx->pc = 0x1DB9B8u;
    // 0x1db9b8: 0x2a41000b
    ctx->pc = 0x1db9b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 11));
label_1db9bc:
    // 0x1db9bc: 0x1020000a
    ctx->pc = 0x1DB9BCu;
    {
        const bool branch_taken_0x1db9bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db9bc) {
            ctx->pc = 0x1DB9E8u;
            goto label_1db9e8;
        }
    }
    ctx->pc = 0x1DB9C4u;
    // 0x1db9c4: 0x8e840054
    ctx->pc = 0x1db9c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1db9c8: 0x3c03003a
    ctx->pc = 0x1db9c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x1db9cc: 0x34650032
    ctx->pc = 0x1db9ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 50));
    // 0x1db9d0: 0x70403628
    ctx->pc = 0x1db9d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db9d4: 0x72203e28
    ctx->pc = 0x1db9d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1db9d8: 0xc079e80
    ctx->pc = 0x1DB9D8u;
    SET_GPR_U32(ctx, 31, 0x1DB9E0u);
    ctx->pc = 0x1DB9DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9E0u; }
        else if (ctx->pc != 0x1DB9E0u) { ctx->pc = 0x1DB9E0u; }
    }
    if (ctx->pc != 0x1DB9E0u) { return; }
    ctx->pc = 0x1DB9E0u;
    // 0x1db9e0: 0x10000009
    ctx->pc = 0x1DB9E0u;
    {
        const bool branch_taken_0x1db9e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db9e0) {
            ctx->pc = 0x1DBA08u;
            goto label_1dba08;
        }
    }
    ctx->pc = 0x1DB9E8u;
label_1db9e8:
    // 0x1db9e8: 0x8e840054
    ctx->pc = 0x1db9e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1db9ec: 0x3c03001b
    ctx->pc = 0x1db9ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1db9f0: 0x346500b3
    ctx->pc = 0x1db9f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1db9f4: 0x70403628
    ctx->pc = 0x1db9f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db9f8: 0x72203e28
    ctx->pc = 0x1db9f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1db9fc: 0xc079e80
    ctx->pc = 0x1DB9FCu;
    SET_GPR_U32(ctx, 31, 0x1DBA04u);
    ctx->pc = 0x1DBA00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA04u; }
        else if (ctx->pc != 0x1DBA04u) { ctx->pc = 0x1DBA04u; }
    }
    if (ctx->pc != 0x1DBA04u) { return; }
    ctx->pc = 0x1DBA04u;
    // 0x1dba04: 0x0
    ctx->pc = 0x1dba04u;
    // NOP
label_1dba08:
    // 0x1dba08: 0x267300f0
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
label_1dba0c:
    // 0x1dba0c: 0x26520001
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1dba10:
    // 0x1dba10: 0x8e830000
    ctx->pc = 0x1dba10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1dba14: 0x243182a
    ctx->pc = 0x1dba14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1dba18: 0x1460ffd9
    ctx->pc = 0x1DBA18u;
    {
        const bool branch_taken_0x1dba18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DBA1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4774));
        if (branch_taken_0x1dba18) {
            ctx->pc = 0x1DB980u;
            goto label_1db980;
        }
    }
    ctx->pc = 0x1DBA20u;
    // 0x1dba20: 0x3c030027
    ctx->pc = 0x1dba20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dba24: 0x24638cb8
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937784));
    // 0x1dba28: 0xc4620000
    ctx->pc = 0x1dba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dba2c: 0xc4610004
    ctx->pc = 0x1dba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dba30: 0xc4600008
    ctx->pc = 0x1dba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba34: 0xe6820114
    ctx->pc = 0x1dba34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 276), bits); }
    // 0x1dba38: 0xe6810118
    ctx->pc = 0x1dba38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 280), bits); }
    // 0x1dba3c: 0xe680011c
    ctx->pc = 0x1dba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x1dba40: 0x7bbf0050
    ctx->pc = 0x1dba40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dba44: 0x7bb40040
    ctx->pc = 0x1dba44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dba48: 0x7bb30030
    ctx->pc = 0x1dba48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dba4c: 0x7bb20020
    ctx->pc = 0x1dba4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dba50: 0x7bb10010
    ctx->pc = 0x1dba50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dba54: 0x7bb00000
    ctx->pc = 0x1dba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dba58: 0x3e00008
    ctx->pc = 0x1DBA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBA5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB980u: goto label_1db980;
            case 0x1DB9BCu: goto label_1db9bc;
            case 0x1DB9E8u: goto label_1db9e8;
            case 0x1DBA08u: goto label_1dba08;
            case 0x1DBA0Cu: goto label_1dba0c;
            case 0x1DBA10u: goto label_1dba10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBA60u;
}
