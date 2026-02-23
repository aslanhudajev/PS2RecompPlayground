#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initKareha__9FcvEffectFv
// Address: 0x1db280 - 0x1db33c
void initKareha__9FcvEffectFv_0x1db280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initKareha__9FcvEffectFv");


    ctx->pc = 0x1db280u;

    // 0x1db280: 0x27bdffb0
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db284: 0x7fbf0040
    ctx->pc = 0x1db284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db288: 0x7fb30030
    ctx->pc = 0x1db288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db28c: 0x7fb20020
    ctx->pc = 0x1db28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db290: 0x7fb10010
    ctx->pc = 0x1db290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db294: 0x70809e28
    ctx->pc = 0x1db294u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db298: 0x2405000a
    ctx->pc = 0x1db298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db29c: 0xc0761c4
    ctx->pc = 0x1DB29Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2A4u);
    ctx->pc = 0x1DB2A0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2A4u; }
        else if (ctx->pc != 0x1DB2A4u) { ctx->pc = 0x1DB2A4u; }
    }
    if (ctx->pc != 0x1DB2A4u) { return; }
    ctx->pc = 0x1DB2A4u;
    // 0x1db2a4: 0xae620054
    ctx->pc = 0x1db2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1db2a8: 0x3c034234
    ctx->pc = 0x1db2a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16948 << 16));
    // 0x1db2ac: 0xae630028
    ctx->pc = 0x1db2acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1db2b0: 0x3c03002c
    ctx->pc = 0x1db2b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1db2b4: 0x70008628
    ctx->pc = 0x1db2b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db2b8: 0x2471eae0
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294961888));
    // 0x1db2bc: 0x1000000c
    ctx->pc = 0x1DB2BCu;
    {
        const bool branch_taken_0x1db2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB2C0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db2bc) {
            ctx->pc = 0x1DB2F0u;
            goto label_1db2f0;
        }
    }
    ctx->pc = 0x1DB2C4u;
label_1db2c4:
    // 0x1db2c4: 0xc07f208
    ctx->pc = 0x1DB2C4u;
    SET_GPR_U32(ctx, 31, 0x1DB2CCu);
    ctx->pc = 0x1DB2C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2CCu; }
        else if (ctx->pc != 0x1DB2CCu) { ctx->pc = 0x1DB2CCu; }
    }
    if (ctx->pc != 0x1DB2CCu) { return; }
    ctx->pc = 0x1DB2CCu;
    // 0x1db2cc: 0x8e630054
    ctx->pc = 0x1db2ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1db2d0: 0x8e250000
    ctx->pc = 0x1db2d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db2d4: 0x70403628
    ctx->pc = 0x1db2d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db2d8: 0x70003e28
    ctx->pc = 0x1db2d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db2dc: 0xc079e80
    ctx->pc = 0x1DB2DCu;
    SET_GPR_U32(ctx, 31, 0x1DB2E4u);
    ctx->pc = 0x1DB2E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2E4u; }
        else if (ctx->pc != 0x1DB2E4u) { ctx->pc = 0x1DB2E4u; }
    }
    if (ctx->pc != 0x1DB2E4u) { return; }
    ctx->pc = 0x1DB2E4u;
    // 0x1db2e4: 0x26310004
    ctx->pc = 0x1db2e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1db2e8: 0x265200f0
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1db2ec: 0x26100001
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db2f0:
    // 0x1db2f0: 0x8e630000
    ctx->pc = 0x1db2f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db2f4: 0x203182a
    ctx->pc = 0x1db2f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db2f8: 0x1460fff2
    ctx->pc = 0x1DB2F8u;
    {
        const bool branch_taken_0x1db2f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB2FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7558));
        if (branch_taken_0x1db2f8) {
            ctx->pc = 0x1DB2C4u;
            goto label_1db2c4;
        }
    }
    ctx->pc = 0x1DB300u;
    // 0x1db300: 0x3c030027
    ctx->pc = 0x1db300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db304: 0x24638c48
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937672));
    // 0x1db308: 0xc4620000
    ctx->pc = 0x1db308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db30c: 0xc4610004
    ctx->pc = 0x1db30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db310: 0xc4600008
    ctx->pc = 0x1db310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db314: 0xe6620114
    ctx->pc = 0x1db314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1db318: 0xe6610118
    ctx->pc = 0x1db318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1db31c: 0xe660011c
    ctx->pc = 0x1db31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1db320: 0x7bbf0040
    ctx->pc = 0x1db320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db324: 0x7bb30030
    ctx->pc = 0x1db324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db328: 0x7bb20020
    ctx->pc = 0x1db328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db32c: 0x7bb10010
    ctx->pc = 0x1db32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db330: 0x7bb00000
    ctx->pc = 0x1db330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db334: 0x3e00008
    ctx->pc = 0x1DB334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB2C4u: goto label_1db2c4;
            case 0x1DB2F0u: goto label_1db2f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB33Cu;
}
