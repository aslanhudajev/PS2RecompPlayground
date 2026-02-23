#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6Henshin2__9FcvEffectFv
// Address: 0x1dccf0 - 0x1dce24
void initBoss6Henshin2__9FcvEffectFv_0x1dccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6Henshin2__9FcvEffectFv");


    ctx->pc = 0x1dccf0u;

    // 0x1dccf0: 0x27bdffb0
    ctx->pc = 0x1dccf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dccf4: 0x7fbf0040
    ctx->pc = 0x1dccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dccf8: 0x7fb30030
    ctx->pc = 0x1dccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dccfc: 0x7fb20020
    ctx->pc = 0x1dccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcd00: 0x7fb10010
    ctx->pc = 0x1dcd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcd04: 0x70809e28
    ctx->pc = 0x1dcd04u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dcd08: 0x2405003e
    ctx->pc = 0x1dcd08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 62));
    // 0x1dcd0c: 0xc0761c4
    ctx->pc = 0x1DCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD14u);
    ctx->pc = 0x1DCD10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD14u; }
        else if (ctx->pc != 0x1DCD14u) { ctx->pc = 0x1DCD14u; }
    }
    if (ctx->pc != 0x1DCD14u) { return; }
    ctx->pc = 0x1DCD14u;
    // 0x1dcd14: 0xae620054
    ctx->pc = 0x1dcd14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dcd18: 0x3c0243c8
    ctx->pc = 0x1dcd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17352 << 16));
    // 0x1dcd1c: 0xae620028
    ctx->pc = 0x1dcd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dcd20: 0x27848d4c
    ctx->pc = 0x1dcd20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dcd24: 0xc07f208
    ctx->pc = 0x1DCD24u;
    SET_GPR_U32(ctx, 31, 0x1DCD2Cu);
    ctx->pc = 0x1DCD28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2922));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD2Cu; }
        else if (ctx->pc != 0x1DCD2Cu) { ctx->pc = 0x1DCD2Cu; }
    }
    if (ctx->pc != 0x1DCD2Cu) { return; }
    ctx->pc = 0x1DCD2Cu;
    // 0x1dcd2c: 0x70408628
    ctx->pc = 0x1dcd2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcd30: 0x70008e28
    ctx->pc = 0x1dcd30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcd34: 0x10000028
    ctx->pc = 0x1DCD34u;
    {
        const bool branch_taken_0x1dcd34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCD38u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dcd34) {
            ctx->pc = 0x1DCDD8u;
            goto label_1dcdd8;
        }
    }
    ctx->pc = 0x1DCD3Cu;
label_1dcd3c:
    // 0x1dcd3c: 0xc07f208
    ctx->pc = 0x1DCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD44u);
    ctx->pc = 0x1DCD40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD44u; }
        else if (ctx->pc != 0x1DCD44u) { ctx->pc = 0x1DCD44u; }
    }
    if (ctx->pc != 0x1DCD44u) { return; }
    ctx->pc = 0x1DCD44u;
    // 0x1dcd44: 0x2a21000a
    ctx->pc = 0x1dcd44u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 10));
    // 0x1dcd48: 0x1020000f
    ctx->pc = 0x1DCD48u;
    {
        const bool branch_taken_0x1dcd48 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCD4Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 22));
        if (branch_taken_0x1dcd48) {
            ctx->pc = 0x1DCD88u;
            goto label_1dcd88;
        }
    }
    ctx->pc = 0x1DCD50u;
    // 0x1dcd50: 0x70403628
    ctx->pc = 0x1dcd50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcd54: 0x8e620054
    ctx->pc = 0x1dcd54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcd58: 0x3c050022
    ctx->pc = 0x1dcd58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)34 << 16));
    // 0x1dcd5c: 0x70003e28
    ctx->pc = 0x1dcd5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcd60: 0xc079e80
    ctx->pc = 0x1DCD60u;
    SET_GPR_U32(ctx, 31, 0x1DCD68u);
    ctx->pc = 0x1DCD64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD68u; }
        else if (ctx->pc != 0x1DCD68u) { ctx->pc = 0x1DCD68u; }
    }
    if (ctx->pc != 0x1DCD68u) { return; }
    ctx->pc = 0x1DCD68u;
    // 0x1dcd68: 0x8e620054
    ctx->pc = 0x1dcd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcd6c: 0x3c050022
    ctx->pc = 0x1dcd6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)34 << 16));
    // 0x1dcd70: 0x34a6018f
    ctx->pc = 0x1dcd70u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), 399));
    // 0x1dcd74: 0xc079eb4
    ctx->pc = 0x1DCD74u;
    SET_GPR_U32(ctx, 31, 0x1DCD7Cu);
    ctx->pc = 0x1DCD78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD7Cu; }
        else if (ctx->pc != 0x1DCD7Cu) { ctx->pc = 0x1DCD7Cu; }
    }
    if (ctx->pc != 0x1DCD7Cu) { return; }
    ctx->pc = 0x1DCD7Cu;
    // 0x1dcd7c: 0x10000015
    ctx->pc = 0x1DCD7Cu;
    {
        const bool branch_taken_0x1dcd7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCD80u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dcd7c) {
            ctx->pc = 0x1DCDD4u;
            goto label_1dcdd4;
        }
    }
    ctx->pc = 0x1DCD84u;
    // 0x1dcd84: 0x2a210016
    ctx->pc = 0x1dcd84u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 22));
label_1dcd88:
    // 0x1dcd88: 0x1020000a
    ctx->pc = 0x1DCD88u;
    {
        const bool branch_taken_0x1dcd88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcd88) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD90u;
    // 0x1dcd90: 0x8e640054
    ctx->pc = 0x1dcd90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcd94: 0x3c030022
    ctx->pc = 0x1dcd94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dcd98: 0x34650190
    ctx->pc = 0x1dcd98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 400));
    // 0x1dcd9c: 0x70403628
    ctx->pc = 0x1dcd9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcda0: 0x70003e28
    ctx->pc = 0x1dcda0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcda4: 0xc079e80
    ctx->pc = 0x1DCDA4u;
    SET_GPR_U32(ctx, 31, 0x1DCDACu);
    ctx->pc = 0x1DCDA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDACu; }
        else if (ctx->pc != 0x1DCDACu) { ctx->pc = 0x1DCDACu; }
    }
    if (ctx->pc != 0x1DCDACu) { return; }
    ctx->pc = 0x1DCDACu;
    // 0x1dcdac: 0x10000008
    ctx->pc = 0x1DCDACu;
    {
        const bool branch_taken_0x1dcdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcdac) {
            ctx->pc = 0x1DCDD0u;
            goto label_1dcdd0;
        }
    }
    ctx->pc = 0x1DCDB4u;
label_1dcdb4:
    // 0x1dcdb4: 0x8e640054
    ctx->pc = 0x1dcdb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcdb8: 0x3c030022
    ctx->pc = 0x1dcdb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dcdbc: 0x34650264
    ctx->pc = 0x1dcdbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 612));
    // 0x1dcdc0: 0x70403628
    ctx->pc = 0x1dcdc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcdc4: 0x72003e28
    ctx->pc = 0x1dcdc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dcdc8: 0xc079e80
    ctx->pc = 0x1DCDC8u;
    SET_GPR_U32(ctx, 31, 0x1DCDD0u);
    ctx->pc = 0x1DCDCCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDD0u; }
        else if (ctx->pc != 0x1DCDD0u) { ctx->pc = 0x1DCDD0u; }
    }
    if (ctx->pc != 0x1DCDD0u) { return; }
    ctx->pc = 0x1DCDD0u;
label_1dcdd0:
    // 0x1dcdd0: 0x265200f0
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dcdd4:
    // 0x1dcdd4: 0x26310001
    ctx->pc = 0x1dcdd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dcdd8:
    // 0x1dcdd8: 0x8e630000
    ctx->pc = 0x1dcdd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dcddc: 0x223182a
    ctx->pc = 0x1dcddcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dcde0: 0x1460ffd6
    ctx->pc = 0x1DCDE0u;
    {
        const bool branch_taken_0x1dcde0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCDE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 2860));
        if (branch_taken_0x1dcde0) {
            ctx->pc = 0x1DCD3Cu;
            goto label_1dcd3c;
        }
    }
    ctx->pc = 0x1DCDE8u;
    // 0x1dcde8: 0x3c030027
    ctx->pc = 0x1dcde8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dcdec: 0x24638da8
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938024));
    // 0x1dcdf0: 0xc4620000
    ctx->pc = 0x1dcdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcdf4: 0xc4610004
    ctx->pc = 0x1dcdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcdf8: 0xc4600008
    ctx->pc = 0x1dcdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcdfc: 0xe6620114
    ctx->pc = 0x1dcdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1dce00: 0xe6610118
    ctx->pc = 0x1dce00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1dce04: 0xe660011c
    ctx->pc = 0x1dce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1dce08: 0x7bbf0040
    ctx->pc = 0x1dce08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dce0c: 0x7bb30030
    ctx->pc = 0x1dce0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dce10: 0x7bb20020
    ctx->pc = 0x1dce10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dce14: 0x7bb10010
    ctx->pc = 0x1dce14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce18: 0x7bb00000
    ctx->pc = 0x1dce18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce1c: 0x3e00008
    ctx->pc = 0x1DCE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCD3Cu: goto label_1dcd3c;
            case 0x1DCD88u: goto label_1dcd88;
            case 0x1DCDB4u: goto label_1dcdb4;
            case 0x1DCDD0u: goto label_1dcdd0;
            case 0x1DCDD4u: goto label_1dcdd4;
            case 0x1DCDD8u: goto label_1dcdd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCE24u;
}
