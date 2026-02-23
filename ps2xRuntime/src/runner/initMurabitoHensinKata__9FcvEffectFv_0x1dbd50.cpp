#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMurabitoHensinKata__9FcvEffectFv
// Address: 0x1dbd50 - 0x1dbec8
void initMurabitoHensinKata__9FcvEffectFv_0x1dbd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMurabitoHensinKata__9FcvEffectFv");


    ctx->pc = 0x1dbd50u;

    // 0x1dbd50: 0x27bdffc0
    ctx->pc = 0x1dbd50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dbd54: 0x7fbf0030
    ctx->pc = 0x1dbd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dbd58: 0x7fb20020
    ctx->pc = 0x1dbd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbd5c: 0x7fb10010
    ctx->pc = 0x1dbd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbd60: 0x70809628
    ctx->pc = 0x1dbd60u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dbd64: 0x240500ac
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 172));
    // 0x1dbd68: 0xc0761c4
    ctx->pc = 0x1DBD68u;
    SET_GPR_U32(ctx, 31, 0x1DBD70u);
    ctx->pc = 0x1DBD6Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD70u; }
        else if (ctx->pc != 0x1DBD70u) { ctx->pc = 0x1DBD70u; }
    }
    if (ctx->pc != 0x1DBD70u) { return; }
    ctx->pc = 0x1DBD70u;
    // 0x1dbd70: 0xae420054
    ctx->pc = 0x1dbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dbd74: 0x3c034320
    ctx->pc = 0x1dbd74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17184 << 16));
    // 0x1dbd78: 0xae430028
    ctx->pc = 0x1dbd78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1dbd7c: 0x3c033f80
    ctx->pc = 0x1dbd7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dbd80: 0xae430020
    ctx->pc = 0x1dbd80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x1dbd84: 0x70008628
    ctx->pc = 0x1dbd84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbd88: 0x1000003d
    ctx->pc = 0x1DBD88u;
    {
        const bool branch_taken_0x1dbd88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBD8Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dbd88) {
            ctx->pc = 0x1DBE80u;
            goto label_1dbe80;
        }
    }
    ctx->pc = 0x1DBD90u;
label_1dbd90:
    // 0x1dbd90: 0xc07f208
    ctx->pc = 0x1DBD90u;
    SET_GPR_U32(ctx, 31, 0x1DBD98u);
    ctx->pc = 0x1DBD94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD98u; }
        else if (ctx->pc != 0x1DBD98u) { ctx->pc = 0x1DBD98u; }
    }
    if (ctx->pc != 0x1DBD98u) { return; }
    ctx->pc = 0x1DBD98u;
    // 0x1dbd98: 0x2a010009
    ctx->pc = 0x1dbd98u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 9));
    // 0x1dbd9c: 0x1020000b
    ctx->pc = 0x1DBD9Cu;
    {
        const bool branch_taken_0x1dbd9c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBDA0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 163));
        if (branch_taken_0x1dbd9c) {
            ctx->pc = 0x1DBDCCu;
            goto label_1dbdcc;
        }
    }
    ctx->pc = 0x1DBDA4u;
    // 0x1dbda4: 0x8e440054
    ctx->pc = 0x1dbda4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbda8: 0x3c030024
    ctx->pc = 0x1dbda8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbdac: 0x34650006
    ctx->pc = 0x1dbdacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 6));
    // 0x1dbdb0: 0x70403628
    ctx->pc = 0x1dbdb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbdb4: 0x70003e28
    ctx->pc = 0x1dbdb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbdb8: 0xc079e80
    ctx->pc = 0x1DBDB8u;
    SET_GPR_U32(ctx, 31, 0x1DBDC0u);
    ctx->pc = 0x1DBDBCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBDC0u; }
        else if (ctx->pc != 0x1DBDC0u) { ctx->pc = 0x1DBDC0u; }
    }
    if (ctx->pc != 0x1DBDC0u) { return; }
    ctx->pc = 0x1DBDC0u;
    // 0x1dbdc0: 0x1000002e
    ctx->pc = 0x1DBDC0u;
    {
        const bool branch_taken_0x1dbdc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBDC4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dbdc0) {
            ctx->pc = 0x1DBE7Cu;
            goto label_1dbe7c;
        }
    }
    ctx->pc = 0x1DBDC8u;
    // 0x1dbdc8: 0x2a0100a3
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 163));
label_1dbdcc:
    // 0x1dbdcc: 0x10200022
    ctx->pc = 0x1DBDCCu;
    {
        const bool branch_taken_0x1dbdcc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DBDD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1dbdcc) {
            ctx->pc = 0x1DBE58u;
            goto label_1dbe58;
        }
    }
    ctx->pc = 0x1DBDD4u;
    // 0x1dbdd4: 0x1203000e
    ctx->pc = 0x1DBDD4u;
    {
        const bool branch_taken_0x1dbdd4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBDD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 51));
        if (branch_taken_0x1dbdd4) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBDDCu;
    // 0x1dbddc: 0x1203000c
    ctx->pc = 0x1DBDDCu;
    {
        const bool branch_taken_0x1dbddc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBDE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 72));
        if (branch_taken_0x1dbddc) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBDE4u;
    // 0x1dbde4: 0x1203000a
    ctx->pc = 0x1DBDE4u;
    {
        const bool branch_taken_0x1dbde4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBDE8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x1dbde4) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBDECu;
    // 0x1dbdec: 0x12030008
    ctx->pc = 0x1DBDECu;
    {
        const bool branch_taken_0x1dbdec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBDF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 119));
        if (branch_taken_0x1dbdec) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBDF4u;
    // 0x1dbdf4: 0x12030006
    ctx->pc = 0x1DBDF4u;
    {
        const bool branch_taken_0x1dbdf4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBDF8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 136));
        if (branch_taken_0x1dbdf4) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBDFCu;
    // 0x1dbdfc: 0x12030004
    ctx->pc = 0x1DBDFCu;
    {
        const bool branch_taken_0x1dbdfc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1DBE00u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 162));
        if (branch_taken_0x1dbdfc) {
            ctx->pc = 0x1DBE10u;
            goto label_1dbe10;
        }
    }
    ctx->pc = 0x1DBE04u;
    // 0x1dbe04: 0x1603000b
    ctx->pc = 0x1DBE04u;
    {
        const bool branch_taken_0x1dbe04 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dbe04) {
            ctx->pc = 0x1DBE34u;
            goto label_1dbe34;
        }
    }
    ctx->pc = 0x1DBE0Cu;
    // 0x1dbe0c: 0x0
    ctx->pc = 0x1dbe0cu;
    // NOP
label_1dbe10:
    // 0x1dbe10: 0x8e440054
    ctx->pc = 0x1dbe10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbe14: 0x3c030024
    ctx->pc = 0x1dbe14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbe18: 0x34650003
    ctx->pc = 0x1dbe18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 3));
    // 0x1dbe1c: 0x70403628
    ctx->pc = 0x1dbe1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbe20: 0x70003e28
    ctx->pc = 0x1dbe20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbe24: 0xc079e80
    ctx->pc = 0x1DBE24u;
    SET_GPR_U32(ctx, 31, 0x1DBE2Cu);
    ctx->pc = 0x1DBE28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE2Cu; }
        else if (ctx->pc != 0x1DBE2Cu) { ctx->pc = 0x1DBE2Cu; }
    }
    if (ctx->pc != 0x1DBE2Cu) { return; }
    ctx->pc = 0x1DBE2Cu;
    // 0x1dbe2c: 0x10000012
    ctx->pc = 0x1DBE2Cu;
    {
        const bool branch_taken_0x1dbe2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbe2c) {
            ctx->pc = 0x1DBE78u;
            goto label_1dbe78;
        }
    }
    ctx->pc = 0x1DBE34u;
label_1dbe34:
    // 0x1dbe34: 0x8e440054
    ctx->pc = 0x1dbe34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbe38: 0x3c030024
    ctx->pc = 0x1dbe38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbe3c: 0x34650001
    ctx->pc = 0x1dbe3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 1));
    // 0x1dbe40: 0x70403628
    ctx->pc = 0x1dbe40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbe44: 0x70003e28
    ctx->pc = 0x1dbe44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbe48: 0xc079e80
    ctx->pc = 0x1DBE48u;
    SET_GPR_U32(ctx, 31, 0x1DBE50u);
    ctx->pc = 0x1DBE4Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE50u; }
        else if (ctx->pc != 0x1DBE50u) { ctx->pc = 0x1DBE50u; }
    }
    if (ctx->pc != 0x1DBE50u) { return; }
    ctx->pc = 0x1DBE50u;
    // 0x1dbe50: 0x10000009
    ctx->pc = 0x1DBE50u;
    {
        const bool branch_taken_0x1dbe50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dbe50) {
            ctx->pc = 0x1DBE78u;
            goto label_1dbe78;
        }
    }
    ctx->pc = 0x1DBE58u;
label_1dbe58:
    // 0x1dbe58: 0x8e440054
    ctx->pc = 0x1dbe58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dbe5c: 0x3c030024
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1dbe60: 0x34650007
    ctx->pc = 0x1dbe60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 7));
    // 0x1dbe64: 0x70403628
    ctx->pc = 0x1dbe64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbe68: 0x70003e28
    ctx->pc = 0x1dbe68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbe6c: 0xc079e80
    ctx->pc = 0x1DBE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBE74u);
    ctx->pc = 0x1DBE70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE74u; }
        else if (ctx->pc != 0x1DBE74u) { ctx->pc = 0x1DBE74u; }
    }
    if (ctx->pc != 0x1DBE74u) { return; }
    ctx->pc = 0x1DBE74u;
    // 0x1dbe74: 0x0
    ctx->pc = 0x1dbe74u;
    // NOP
label_1dbe78:
    // 0x1dbe78: 0x263100f0
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dbe7c:
    // 0x1dbe7c: 0x26100001
    ctx->pc = 0x1dbe7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dbe80:
    // 0x1dbe80: 0x8e430000
    ctx->pc = 0x1dbe80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dbe84: 0x203182a
    ctx->pc = 0x1dbe84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dbe88: 0x1460ffc1
    ctx->pc = 0x1DBE88u;
    {
        const bool branch_taken_0x1dbe88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DBE8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4164));
        if (branch_taken_0x1dbe88) {
            ctx->pc = 0x1DBD90u;
            goto label_1dbd90;
        }
    }
    ctx->pc = 0x1DBE90u;
    // 0x1dbe90: 0x3c030027
    ctx->pc = 0x1dbe90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dbe94: 0x24638ce8
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937832));
    // 0x1dbe98: 0xc4620000
    ctx->pc = 0x1dbe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbe9c: 0xc4610004
    ctx->pc = 0x1dbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbea0: 0xc4600008
    ctx->pc = 0x1dbea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbea4: 0xe6420114
    ctx->pc = 0x1dbea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dbea8: 0xe6410118
    ctx->pc = 0x1dbea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dbeac: 0xe640011c
    ctx->pc = 0x1dbeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dbeb0: 0x7bbf0030
    ctx->pc = 0x1dbeb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbeb4: 0x7bb20020
    ctx->pc = 0x1dbeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbeb8: 0x7bb10010
    ctx->pc = 0x1dbeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbebc: 0x7bb00000
    ctx->pc = 0x1dbebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbec0: 0x3e00008
    ctx->pc = 0x1DBEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBEC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBD90u: goto label_1dbd90;
            case 0x1DBDCCu: goto label_1dbdcc;
            case 0x1DBE10u: goto label_1dbe10;
            case 0x1DBE34u: goto label_1dbe34;
            case 0x1DBE58u: goto label_1dbe58;
            case 0x1DBE78u: goto label_1dbe78;
            case 0x1DBE7Cu: goto label_1dbe7c;
            case 0x1DBE80u: goto label_1dbe80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBEC8u;
}
